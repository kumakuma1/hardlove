#include "../../include/types.h"
#include "../../include/config.h"
#include "../../include/battle.h"
#include "../../include/mega.h"
#include "../../include/pokemon.h"
#include "../../include/item.h"
#include "../../include/trainer_ai.h"
#include "../../include/constants/ability.h"
#include "../../include/constants/species.h"
#include "../../include/constants/battle_script_constants.h"
#include "../../include/constants/battle_message_constants.h"
#include "../../include/constants/move_effects.h"
#include "../../include/constants/item.h"
#include "../../include/custom/custom_ai.h"
#include "../../include/overlay.h"
#include "../../include/constants/file.h"

#define BATTLE_DEBUG_OUTPUT 1
// #define ATTRACT_WORK_ON_ALL_SEXES 1

#define IMPOSSIBLE_MOVE   40
#define NEVER_USE_MOVE_20 20

int LONG_CALL ScoreMovesAgainstDefender(struct BattleSystem *bsys, u32 attacker, u32 target, int moveScores[4][4], struct AIContext *ai);
int LONG_CALL ScoreMovesAgainstAlly(struct BattleSystem *bsys, u32 attacker, u32 target, int moveScores[4][4], struct AIContext *ai);

int LONG_CALL BasicScoring(struct BattleSystem *bsys, u32 attacker, int i, struct AIContext *ai);
int LONG_CALL DamagingMoveScoring(struct BattleSystem *bsys, u32 attacker, int i, struct AIContext *ai);


enum AIActionChoice __attribute__((section(".init"))) TrainerAI_Main(struct BattleSystem *bsys, u32 attacker)
{
#ifdef BATTLE_DEBUG_OUTPUT
    debug_printf("TrainerAI_Main: %d\n", attacker);
#endif // BATTLE_DEBUG_OUTPUT

    int score = 0;
    if (attacker >= 10) {
        return BattleAI_PostKOSwitchIn_Internal(bsys, attacker - 10, &score, FALSE);
    }

    struct BattleStruct *ctx = bsys->sp;
    struct AIContext aictx = { 0 };
    struct AIContext *ai = &aictx;
    enum AIActionChoice result = AI_ENEMY_ATTACK_1;

    int highestScoredMove = 0;
    int highestScoredMoveAcross = 0;
    int moveScores[4][4] = { 0 }; // account for BATTLER_OPPONENT (0), attacker (1), BATTLER_ACROSS(2), BATTLER_ALLY(3),  4 moves each or
                                  // account for BATTLER_OPPONENT (2), attacker (3), BATTLER_ACROSS(0), BATTLER_ALLY(1),  4 moves each
    int targets[4] = { 0 };
    int targetsSize = 0;
    int tiedMoveIndices[4] = { 0 };
    u32 target = 0;

    u32 defender = BATTLER_OPPONENT(attacker); // default for singles
    target = defender;

    if (BattleTypeGet(bsys) & (BATTLE_TYPE_MULTI | BATTLE_TYPE_DOUBLE | BATTLE_TYPE_TAG))
    {
#ifdef BATTLE_DEBUG_OUTPUT
        debug_printf("att %d, ally %d, defendOp %d, defendCross %d\n", attacker, BATTLER_ALLY(attacker), BATTLER_OPPONENT(attacker), BATTLER_ACROSS(attacker));
        debug_printf("att %d, ally %d, defendOp %d, defendCross %d\n", ctx->battlemon[attacker].species, ctx->battlemon[BATTLER_ALLY(attacker)].species, ctx->battlemon[BATTLER_OPPONENT(attacker)].species, ctx->battlemon[BATTLER_ACROSS(attacker)].species);
#endif // BATTLE_DEBUG_OUTPUT

        SetupStateVariables(bsys, attacker, defender, ai);

        BOOL playerCanOneShotMonWithAnyMove = ai->playerCanOneShotMonWithAnyMove;
        highestScoredMove = ScoreMovesAgainstDefender(bsys, attacker, target, moveScores, ai);

        defender = BATTLER_ACROSS(attacker);
        if (ctx->battlemon[defender].hp > 0) {
            target = defender;
            SetupStateVariables(bsys, attacker, defender, ai);
            if (playerCanOneShotMonWithAnyMove) {
                ai->playerCanOneShotMonWithAnyMove = playerCanOneShotMonWithAnyMove; // keep the value from the first target
            }

            highestScoredMoveAcross = ScoreMovesAgainstDefender(bsys, attacker, target, moveScores, ai);
            if (highestScoredMoveAcross > highestScoredMove) {
                highestScoredMove = highestScoredMoveAcross;
            }
        }

        defender = BATTLER_ALLY(attacker);
        target = defender;
        highestScoredMoveAcross = ScoreMovesAgainstAlly(bsys, attacker, target, moveScores, ai);
        if (highestScoredMoveAcross > highestScoredMove) {
            highestScoredMove = highestScoredMoveAcross;
        }

        targetsSize = 0;
        for (u8 k = 0; k < 4; k++) // find targets with highestScoredMove
        {
            for (u8 i = 0; i < 4; i++) // movesScore
            {
                if (moveScores[k][i] == highestScoredMove) {
                    // debug_printf("found target %d\n", k)
                    targets[targetsSize] = k;
                    targetsSize++;
                    break;
                }
            }
        }

        target = targets[(BattleRand(bsys) % targetsSize)];

#ifdef BATTLE_DEBUG_OUTPUT
        debug_printf("picked target slot %d\n", target);
#endif // BATTLE_DEBUG_OUTPUT
    } else // single battles
    {
        // BATTLER_OPPONENT
        SetupStateVariables(bsys, attacker, defender, ai);
        highestScoredMove = ScoreMovesAgainstDefender(bsys, attacker, target, moveScores, ai);
    }
    ctx->aiWorkTable.ai_dir_select_client[attacker] = target;

#ifdef BATTLE_DEBUG_OUTPUT
    u8 j = 0;
    for (int k = 0; k < 4; k++) {
        for (u8 i = 0; i < 4; i++) // movesScore
        {
            debug_printf("%4d  ", moveScores[k][i]);
        }

        if (targets[j] == k) {
            j++;
            debug_printf("x");
        }
        debug_printf("\n");
    }
#endif // BATTLE_DEBUG_OUTPUT

    for (u8 i = 0; i < 4; i++) {
        if (moveScores[target][i] == highestScoredMove) {
            result = i;
        }
    }

#ifdef BATTLE_DEBUG_OUTPUT
    for (u8 i = 0; i < 4; i++) {
        debug_printf("%i ", moveScores[target][i]);
    }
    debug_printf("-> highest %i:%i\n", result, highestScoredMove);
#endif // BATTLE_DEBUG_OUTPUT

    int tieMoveCount = 0;

    for (u8 i = 0; i < 4; i++) { // check for ties
        if (moveScores[target][i] == highestScoredMove) {
            tiedMoveIndices[tieMoveCount] = i;
            tieMoveCount++;
        }
    }
    u8 tieMoveIndex = (BattleRand(bsys) % tieMoveCount);

    result = tiedMoveIndices[tieMoveIndex % 4]; // randomly pick a move among the tie
#ifdef BATTLE_DEBUG_OUTPUT
    debug_printf("got tieMoveIndex %d -> Resulting move: %d\n", tieMoveIndex, result);
#endif // BATTLE_DEBUG_OUTPUT
    return result;
}




int LONG_CALL ScoreMovesAgainstDefender(struct BattleSystem *bsys, u32 attacker, u32 target, int moveScores[4][4], struct AIContext *ai)
{
    struct BattleStruct *ctx = bsys->sp;
    int highestScoredMove = 0;
    for (int i = 0; i < GetBattlerLearnedMoveCount(bsys, ctx, attacker); i++)
    {
        u32 attackerMove = ctx->battlemon[attacker].move[i];
        if (attackerMove != MOVE_NONE)
        {
            if (attackerMove == ctx->battlemon[attacker].moveeffect.moveNoChoice
                || attackerMove == ctx->battlemon[attacker].moveeffect.encoredMove) // if the attacker has a move that is forced, use it
            {
#ifdef BATTLE_DEBUG_OUTPUT
                debug_printf("Attacker has choiced move %d:%d\n", i, ctx->battlemon[attacker].moveeffect.moveNoChoice);
#endif // BATTLE_DEBUG_OUTPUT
                moveScores[target][i] += 1000;
            }

            moveScores[target][i] += 1000; // don't want to get negative numbers, so start high at 1000, MOVE_NONE will stay at 0
             moveScores[target][i] += BasicScoring(bsys, attacker, i, ai);
             moveScores[target][i] += DamagingMoveScoring(bsys, attacker, i, ai);
            // moveScores[target][i] += SetupScoring(bsys, attacker, i, ai);
            // moveScores[target][i] += RecoveryScoring(bsys, attacker, i, ai);
            // moveScores[target][i] += HarassmentScoring(bsys, attacker, i, ai);

            if (highestScoredMove < moveScores[target][i]) {
                highestScoredMove = moveScores[target][i];
            }
        }
    }

    return highestScoredMove;
}

int LONG_CALL ScoreMovesAgainstAlly(struct BattleSystem *bsys, u32 attacker, u32 target, int moveScores[4][4], struct AIContext *ai)
{
    struct BattleStruct *ctx = bsys->sp;
    if (!ai->isDoubleBattle || !ai->isAllyAlive) {
        return 0;
    }
    int highestScoredMove = 0;
    switch (bsys->trainerId[BATTLER_ENEMY]) {
    case 66: // trainer ID
    {

        u8 skillSwapPosition = 5;
        for (int j = 0; j < GetBattlerLearnedMoveCount(bsys, ctx, attacker); j++) {
            if (ctx->battlemon[attacker].move[j] == MOVE_SKILL_SWAP) {
                skillSwapPosition = j;
                break;
            }
        }

        if (skillSwapPosition < 5) {
            if ((ai->attackerMon.ability == ABILITY_FLASH_FIRE && ai->defenderAlly.ability != ABILITY_FLASH_FIRE && ai->defenderAlly.species == SPECIES_DURANT)
                || (ai->attackerMon.ability == ABILITY_TECHNICIAN && ai->defenderAlly.ability != ABILITY_TECHNICIAN && ai->defenderAlly.species == SPECIES_DURANT)
                || (ai->attackerMon.ability == ABILITY_PRANKSTER && ai->defenderAlly.ability != ABILITY_PRANKSTER && ai->defenderAlly.species == SPECIES_BRELOOM)) {
                highestScoredMove = 1000;
                highestScoredMove += 12;
                moveScores[target][skillSwapPosition] += highestScoredMove;
            }
        }
        break;
    }
    default:
        break;
    }

    return highestScoredMove;
}


/*Heavily penalize stupid decisions that would fail, do nothing, or objectively hurt the user.*/
int LONG_CALL BasicScoring(struct BattleSystem *bsys, u32 attacker, int i, struct AIContext *ai)
{
    int moveScore = 0;
    struct BattleStruct *ctx = bsys->sp;

    ai->attackerMove = ctx->battlemon[attacker].move[i];
    ai->attackerMoveEffect = ctx->moveTbl[ai->attackerMove].effect;

    if (ctx->battlemon[ai->attacker].pp[i] == 0) {
        moveScore -= IMPOSSIBLE_MOVE;
    }
    if (ctx->battlemon[ai->attacker].moveeffect.tauntTurns > 0 && ctx->moveTbl[ai->attackerMove].split == SPLIT_STATUS) {
        moveScore -= IMPOSSIBLE_MOVE; // taunted, so no status moves
    }
    if ((IsPowderMove(ai->attackerMove) || ai->attackerMove == MOVE_LEECH_SEED) && HasType(ctx, ai->defender, TYPE_GRASS)) {
        moveScore -= IMPOSSIBLE_MOVE;
    }

    // if (ctx->clientPriority[ctx->attack_client] > 0 && GetBattlerAbility(ctx, ctx->attack_client) == ABILITY_PRANKSTER && HasType(ctx, defender, TYPE_DARK) && (ctx->attack_client & 1) != (defender & 1)) // used on an enemy
    if (ctx->moveTbl[ai->attackerMove].split == SPLIT_STATUS && ctx->clientPriority[ai->attacker] > 0 && ai->attackerMon.ability == ABILITY_PRANKSTER && HasType(ctx, ai->defender, TYPE_DARK) && (ctx->moveTbl[ai->attackerMove].target == RANGE_ADJACENT_OPPONENTS || (ctx->moveTbl[ai->attackerMove].target == RANGE_SINGLE_TARGET && BATTLERS_ON_DIFFERENT_SIDE(ai->attacker, ai->defender)))) {
        moveScore -= IMPOSSIBLE_MOVE; // TODO check
    }

    if (ai->effectivenessOnPlayer[i] == TYPE_MUL_NO_EFFECT) // immunity
    {
        moveScore -= IMPOSSIBLE_MOVE;
    }

    if ((ctx->terrainOverlay.type == PSYCHIC_TERRAIN && ctx->terrainOverlay.numberOfTurnsLeft > 0)
        && ai->defenderMon.isGrounded
        && ctx->moveTbl[ai->attackerMove].priority > 0) {
        moveScore -= IMPOSSIBLE_MOVE;
    }

    switch (ai->attackerMoveEffect) {
    case MOVE_EFFECT_STEALTH_ROCK:
        if (ctx->side_condition[ai->defenderSide] & SIDE_STATUS_STEALTH_ROCK || ai->livingMembersDefender == 1) {
            moveScore -= NEVER_USE_MOVE_20;
        }
        break;
    case MOVE_EFFECT_SET_SPIKES:
        if (ctx->scw[ai->defenderSide].spikesLayers >= 3) {
            moveScore -= NEVER_USE_MOVE_20;
        }
        break;
    case MOVE_EFFECT_TOXIC_SPIKES:
        if (ctx->scw[ai->defenderSide].toxicSpikesLayers >= 2) {
            moveScore -= NEVER_USE_MOVE_20;
        }
        break;
    case MOVE_EFFECT_STICKY_WEB:
        if (ctx->side_condition[ai->defenderSide] & SIDE_STATUS_STICKY_WEB) {
            moveScore -= NEVER_USE_MOVE_20;
        }
        break;
    case MOVE_EFFECT_APPLY_TERRAINS: {
        switch (ai->attackerMove) {
        case MOVE_GRASSY_TERRAIN:
            if (ctx->terrainOverlay.type == GRASSY_TERRAIN && ctx->terrainOverlay.numberOfTurnsLeft > 0) {
                moveScore -= NEVER_USE_MOVE_20;
            }
            break;
        case MOVE_MISTY_TERRAIN:
            if (ctx->terrainOverlay.type == MISTY_TERRAIN && ctx->terrainOverlay.numberOfTurnsLeft > 0) {
                moveScore -= NEVER_USE_MOVE_20;
            }
            break;
        case MOVE_ELECTRIC_TERRAIN:
            if (ctx->terrainOverlay.type == ELECTRIC_TERRAIN && ctx->terrainOverlay.numberOfTurnsLeft > 0) {
                moveScore -= NEVER_USE_MOVE_20;
            }
            break;
        case MOVE_PSYCHIC_TERRAIN:
            if (ctx->terrainOverlay.type == PSYCHIC_TERRAIN && ctx->terrainOverlay.numberOfTurnsLeft > 0) {
                moveScore -= NEVER_USE_MOVE_20;
            }
            break;
        }
        break;
    }
    case MOVE_EFFECT_PARALYZE_HIT:
        if (ctx->moveTbl[ai->attackerMove].secondaryEffectChance == 100) // nuzzle
        {
            if (ai->defenderImmuneToParalysis || ai->attackerRolledMoveDamages[i] == 0) {
                moveScore -= NEVER_USE_MOVE_20;
            }
        }
        break;
    case MOVE_EFFECT_STATUS_PARALYZE:
        if (ai->defenderImmuneToParalysis) {
            moveScore -= NEVER_USE_MOVE_20;
        }
        break;
    case MOVE_EFFECT_STATUS_BURN:
        if (ai->defenderImmuneToBurn) {
            moveScore -= NEVER_USE_MOVE_20;
        }
        break;
    case MOVE_EFFECT_SWITCH_HELD_ITEMS:
        if (ai->attackerMon.item == ITEM_NONE && ai->defenderMon.item == ITEM_NONE) {
            moveScore -= NEVER_USE_MOVE_20;
        }
        break;
    case MOVE_EFFECT_STATUS_SLEEP:
    case MOVE_EFFECT_STATUS_SLEEP_NEXT_TURN:
        if (ai->defenderImmuneToSleep || (ai->defenderMon.effect_of_moves & MOVE_EFFECT_YAWN_COUNTER)) {
            moveScore -= NEVER_USE_MOVE_20;
        }
        break;
    case MOVE_EFFECT_STATUS_POISON:
    case MOVE_EFFECT_STATUS_BADLY_POISON:
        if (ai->defenderImmuneToPoison) {
            moveScore -= NEVER_USE_MOVE_20;
        }
        break;
    case MOVE_EFFECT_STATUS_NIGHTMARE:
        if (ctx->battlemon[ai->defender].condition2 & STATUS2_NIGHTMARE || ai->defenderMon.ability == ABILITY_MAGIC_GUARD) {
            moveScore -= NEVER_USE_MOVE_20;
        }
        break;
    case MOVE_EFFECT_FAIL_IF_NOT_USED_ALL_OTHER_MOVES:
        if (ctx->battlemon[attacker].moveeffect.lastResortCount < ai->attackerMovesKnown - 1) {
            moveScore -= NEVER_USE_MOVE_20;
        }
        break;
    case MOVE_EFFECT_WEATHER_SANDSTORM:
        if (ctx->field_condition & WEATHER_SANDSTORM_ANY) {
            moveScore -= NEVER_USE_MOVE_20;
        }
        break;
    case MOVE_EFFECT_WEATHER_HAIL:
        if (ctx->field_condition & WEATHER_HAIL_ANY) {
            moveScore -= NEVER_USE_MOVE_20;
        }
        break;
    case MOVE_EFFECT_WEATHER_SNOW:
        if (ctx->field_condition & WEATHER_SNOW_ANY) {
            moveScore -= NEVER_USE_MOVE_20;
        }
        break;
    case MOVE_EFFECT_WEATHER_RAIN:
        if (ctx->field_condition & WEATHER_RAIN_ANY) {
            moveScore -= NEVER_USE_MOVE_20;
        }
        break;
    case MOVE_EFFECT_WEATHER_SUN:
        if (ctx->field_condition & WEATHER_SUNNY_ANY) {
            moveScore -= NEVER_USE_MOVE_20;
        }
        break;
    default:
        break;
    }

    return moveScore;
}

BOOL LONG_CALL isMoveSpecialAiAttackingMove(u32 attackerMove)
{
    BOOL isSpecialAIMove = FALSE;
    switch (attackerMove) {
    case MOVE_SELF_DESTRUCT:
    case MOVE_EXPLOSION:
    case MOVE_MISTY_EXPLOSION:
    case MOVE_FINAL_GAMBIT:
    case MOVE_ROLLOUT:
    case MOVE_METEOR_BEAM:
    case MOVE_ELECTRO_SHOT:
    case MOVE_BIND:
    case MOVE_CLAMP:
    case MOVE_FIRE_SPIN:
    case MOVE_WRAP:
    case MOVE_WHIRLPOOL:
        // case MOVE_INFESTATION:
        isSpecialAIMove = TRUE;
        break;
    default:
        break;
    }
    return isSpecialAIMove;
}

int LONG_CALL SpecialAiAttackingMove(struct BattleSystem *bsys, u32 attacker, int i, struct AIContext *ai)
{
    int moveScore = 0;
    struct BattleStruct *ctx = bsys->sp;
    ai->attackerMove = ctx->battlemon[attacker].move[i];

    switch (ai->attackerMove) {
    case MOVE_SELF_DESTRUCT:
    case MOVE_EXPLOSION:
    case MOVE_MISTY_EXPLOSION:
        if ((ai->defenderMon.ability != ABILITY_DAMP || ai->attackerMon.hasMoldBreaker) && ai->attackerRolledMoveDamages[i] > 0) /*TODO: immunity handled? */
        {
            if (ai->attackerMon.percenthp < 10) {
                moveScore += 10;
            } else if (ai->attackerMon.percenthp < 33) {
                if (BattleRand(bsys) % 10 < 7) { // 70%
                    moveScore += 8;
                }
            } else if (ai->attackerMon.percenthp < 66) {
                if (BattleRand(bsys) % 2) { // 50%
                    moveScore += 7;
                }
            } else {
                if (BattleRand(bsys) % 20 == 0) { // 5%
                    moveScore += 7;
                }
            }

            if (ai->livingMembersAttacker == 1 && ai->livingMembersDefender > 1) {
                moveScore -= NEVER_USE_MOVE_20;
            }
            if (ai->livingMembersAttacker == 1 && ai->livingMembersDefender == 1) {
                moveScore -= 1;
            }
        }
        break;
    case MOVE_FINAL_GAMBIT:
        if (ai->attackerMovesFirst && ai->attackerMon.hp >= ai->defenderMon.hp) {
            moveScore += 8;
        } else if (ai->attackerMovesFirst && ai->playerCanOneShotMonWithAnyMove) {
            moveScore += 7;
        } else {
            moveScore += 6;
        }
        break;
    case MOVE_ROLLOUT:
        moveScore += 7;
        break;
    case MOVE_METEOR_BEAM:
        if (ai->attackerMon.item == ITEM_POWER_HERB) {
            moveScore += 9;
        } else {
            moveScore -= NEVER_USE_MOVE_20;
        }
        break;
    case MOVE_ELECTRO_SHOT:
        if (ai->attackerMon.item == ITEM_POWER_HERB || ctx->field_condition & WEATHER_RAIN_ANY) {
            moveScore += 9;
        } else {
            moveScore -= NEVER_USE_MOVE_20;
        }
        break;
    case MOVE_BIND:
    case MOVE_CLAMP:
    case MOVE_FIRE_SPIN:
    case MOVE_WRAP:
    case MOVE_WHIRLPOOL:
        // case MOVE_INFESTATION:
        moveScore += 6;
        if (BattleRand(bsys) % 10 < 2) {
            moveScore += 2;
        }
        break;
    default:
        break;
    }

    return moveScore;
}

int LONG_CALL DamagingMoveScoring(struct BattleSystem *bsys, u32 attacker, int i, struct AIContext *ai)
{
    int moveScore = 0;
    struct BattleStruct *ctx = bsys->sp;
    BOOL isMoveHighestDamage = 0;

    if (ctx->moveTbl[ai->attackerMove].split == SPLIT_STATUS) {
        return 0;
    }

    ai->attackerMove = ctx->battlemon[attacker].move[i];
    ai->attackerMoveEffect = ctx->moveTbl[ai->attackerMove].effect;

    if (isMoveSpecialAiAttackingMove(ai->attackerMove)) {
        moveScore += SpecialAiAttackingMove(bsys, attacker, i, ai);
    } else if (ai->attackerMoveEffect == MOVE_EFFECT_ONE_HIT_KO) {
        switch (ai->attackerMove) {
        case MOVE_SHEER_COLD:
            if (HasType(ctx, ai->defender, TYPE_ICE)) {
                moveScore -= NEVER_USE_MOVE_20;
            }
            break;
        case MOVE_GUILLOTINE:
        case MOVE_HORN_DRILL:
            if (HasType(ctx, ai->defender, TYPE_GHOST) && ai->attackerMon.ability != ABILITY_SCRAPPY) {
                moveScore -= NEVER_USE_MOVE_20;
            }
            break;
        case MOVE_FISSURE:
            if (ai->attackerMove == MOVE_FISSURE && (ai->defenderMon.item == ITEM_AIR_BALLOON || HasType(ctx, ai->defender, TYPE_FLYING) || (!ai->attackerMon.hasMoldBreaker && ai->defenderMon.ability == ABILITY_LEVITATE))) {
                moveScore -= NEVER_USE_MOVE_20;
            }
            break;
        default:
            break;
        }
        if (ai->attackerMon.level > ai->defenderMon.level) {
            if (BattleRand(bsys) % 3 == 0) {
                moveScore += 9;
            }
        } else {
            moveScore -= NEVER_USE_MOVE_20;
        }
    } else if (ai->attackerRolledMaxDamage == ai->attackerRolledMoveDamages[i]) {
        isMoveHighestDamage = 1;
        moveScore += 6;
        if (BattleRand(bsys) % 10 < 2) {
            moveScore += 2;
        }
    }

    if (ai->monCanOneShotPlayerWithMove[i]) // if ai sees kill with this move
    {
        if (ai->attackerMovesFirst || (ai->defenderMovesFirst && ctx->moveTbl[ai->attackerMove].priority > 0)) {
            moveScore += 6; // and is faster/has priority
        } else if (ai->defenderMovesFirst) {
            moveScore += 3;
        }
        if (ai->attackerMon.ability == ABILITY_MOXIE || ai->attackerMon.ability == ABILITY_BEAST_BOOST || ai->attackerMon.ability == ABILITY_CHILLING_NEIGH || ai->attackerMon.ability == ABILITY_GRIM_NEIGH) {
            moveScore += 1;
        }
    }

    if (ai->attackerMoveEffect == MOVE_EFFECT_HIGH_CRITICAL && (ai->effectivenessOnPlayer[i] == TYPE_MUL_SUPER_EFFECTIVE || ai->effectivenessOnPlayer[i] == TYPE_MUL_DOUBLE_SUPER_EFFECTIVE || ai->effectivenessOnPlayer[i] == TYPE_MUL_TRIPLE_SUPER_EFFECTIVE)) {
        if (BattleRand(bsys) % 2 == 0) {
            moveScore += 2;
        }
    }

    if (ai->defenderMovesFirst && ai->playerCanOneShotMonWithAnyMove) {
        if (ctx->moveTbl[ai->attackerMove].priority > 0) {
            moveScore += 11;
        }
    }
    if (!isMoveHighestDamage && ai->attackerMon.ability == ABILITY_CONTRARY) // no Unaware check
    {
        switch (ai->attackerMove) {
        case MOVE_OVERHEAT:
        case MOVE_LEAF_STORM:
        case MOVE_DRACO_METEOR:
        case MOVE_CLOSE_COMBAT:
        case MOVE_SUPERPOWER:
        case MOVE_V_CREATE: {
            if (ai->isDefenderIncapacitated) {
                moveScore += 3;
            }
            if (ai->attackerMovesFirst) {
                moveScore += 3;
            }
        } break;
        default:
            break;
        }
    }

    if (!isMoveHighestDamage && ai->attackerMoveEffect == MOVE_EFFECT_LOWER_SPEED_HIT && ctx->moveTbl[ai->attackerMove].secondaryEffectChance == 100) {
        if (ai->defenderMovesFirst && ((ai->defenderMon.ability != ABILITY_CLEAR_BODY && ai->defenderMon.ability != ABILITY_WHITE_SMOKE && ai->defenderMon.ability != ABILITY_CONTRARY) || ai->attackerMon.hasMoldBreaker)) {
            moveScore += 6;
        } else {
            moveScore += 5;
        }
        if (ai->isDoubleBattle) {
            if (ai->attackerMove == MOVE_ICY_WIND || ai->attackerMove == MOVE_ELECTROWEB) {
                moveScore += 1;
            }
        }
    }

    if (!isMoveHighestDamage && ctx->moveTbl[ai->attackerMove].secondaryEffectChance == 100
        && ((ai->attackerMoveEffect == MOVE_EFFECT_LOWER_SP_ATK_HIT && ai->defenderHasAtleastOneSpecialMove)
            || (ai->attackerMoveEffect == MOVE_EFFECT_LOWER_ATTACK_HIT && ai->defenderHasAtleastOnePhysicalMove))) {
        if ((ai->defenderMon.ability != ABILITY_CLEAR_BODY && ai->defenderMon.ability != ABILITY_WHITE_SMOKE && ai->defenderMon.ability != ABILITY_CONTRARY) || ai->attackerMon.hasMoldBreaker) {
            moveScore += 6;
        } else {
            moveScore += 5;
        }
        if (ai->isDoubleBattle) {
            if (ctx->moveTbl[ai->attackerMove].target == RANGE_ADJACENT_OPPONENTS) {
                moveScore += 1;
            }
        }
    }

    if (!isMoveHighestDamage && ai->attackerMoveEffect == MOVE_EFFECT_SWITCH_HIT) {
        u8 switchThreshold = 1;
        if (ai->monWithMegaInParty) {
            switchThreshold = 2;
        }
        if (ai->livingMembersAttacker > switchThreshold && ai->attackerRolledMoveDamages[i] > 0) // no immunity
        {
            moveScore += 6;
            if (ai->playerCanOneShotMonWithAnyMove && ai->attackerMovesFirst) {
                moveScore += 1;
            }
            if (BattleRand(bsys) % 10 < 2) {
                moveScore += 1;
            }
        }
        /*
        if (ai->attackerMon.ability == ABILITY_REGENERATOR && ai->attackerMon.percenthp < 67)
            moveScore += 1;
        */
    }

    switch (ai->attackerMove) {
    case MOVE_RELIC_SONG: // TODO
        break;
    case MOVE_FUTURE_SIGHT:
        if (ai->attackerMovesFirst && ai->playerCanOneShotMonWithAnyMove) {
            moveScore += 8;
        } else {
            moveScore += 6;
        }
        break;
    case MOVE_ACID_SPRAY: {
        if ((ai->defenderMon.ability != ABILITY_CLEAR_BODY && ai->defenderMon.ability != ABILITY_WHITE_SMOKE && ai->defenderMon.ability != ABILITY_CONTRARY && ai->defenderMon.ability != ABILITY_BULLETPROOF) || ai->attackerMon.hasMoldBreaker) {
            moveScore += 6;
        }
        break;
    }
    case MOVE_SUCKER_PUNCH: {
        if (ai->attackerLastUsedMove == MOVE_SUCKER_PUNCH) {
            if (BattleRand(bsys) % 2 == 0) {
                moveScore -= NEVER_USE_MOVE_20;
            }
        }
        break;
    }
    case MOVE_FIRST_IMPRESSION: {
        if (ai->attackerTurnsOnField == 0) {
            moveScore += 9;
        } else {
            moveScore -= IMPOSSIBLE_MOVE;
        }
        break;
    }
    case MOVE_FAKE_OUT: {
        if (ai->attackerTurnsOnField == 0 && ((ai->defenderMon.ability != ABILITY_SHIELD_DUST && ai->defenderMon.ability != ABILITY_INNER_FOCUS) || ai->attackerMon.hasMoldBreaker)) {
            moveScore += 9;
        } else {
            moveScore -= IMPOSSIBLE_MOVE;
        }
        break;
    }
    case MOVE_PURSUIT: {
        if (ai->attackerMovesFirst) {
            moveScore += 3;
        }

        if (ai->monCanOneShotPlayerWithMove[i]) {
            moveScore += 10;
        } else if (ai->defenderMon.percenthp < 20) {
            moveScore += 10;
        } else if (ai->defenderMon.percenthp < 40) {
            if (BattleRand(bsys) % 2 == 0) {
                moveScore += 8;
            }
        }
        break;
    }
    case MOVE_FELL_STINGER: {
        if (ctx->battlemon[ai->attacker].states[STAT_ATTACK] < 12 && ai->monCanOneShotPlayerWithMove[i]) {
            if (ai->attackerMovesFirst) {
                moveScore += 10;
            }
            // TODO
        }
        break;
    }
    case MOVE_EARTHQUAKE:
    case MOVE_MAGNITUDE: {
        if (ai->isDoubleBattle) {
            if (ai->isPartnerGrounded) // or about to use magnetrise && faster
            {
                if (ctx->battlemon[BATTLER_ALLY(ai->attacker)].hp) {
                    if (HasType(ctx, BATTLER_ALLY(ai->attacker), TYPE_POISON) || HasType(ctx, BATTLER_ALLY(ai->attacker), TYPE_STEEL) || HasType(ctx, BATTLER_ALLY(ai->attacker), TYPE_FIRE) || HasType(ctx, BATTLER_ALLY(ai->attacker), TYPE_ROCK)) {
                        moveScore -= 10;
                    } else {
                        moveScore -= 3;
                    }
                }
            } else {
                moveScore += 2;
            }
        }
    }
    default:
        break;
    }

    return moveScore;
}
