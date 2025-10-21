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
#include "../../include/custom/custom_ai.h"
#include "../../include/overlay.h"
#include "../../include/constants/file.h"

#define BATTLE_DEBUG_OUTPUT 1
// #define ATTRACT_WORK_ON_ALL_SEXES 1

#define IMPOSSIBLE_MOVE   40
#define NEVER_USE_MOVE_20 20

int LONG_CALL ScoreMovesAgainstDefender(struct BattleSystem *bsys, u32 attacker, u32 target, int moveScores[4][4], struct AIContext *ai);
int LONG_CALL ScoreMovesAgainstAlly(struct BattleSystem *bsys, u32 attacker, u32 target, int moveScores[4][4], struct AIContext *ai);


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
            // moveScores[target][i] += BasicScoring(bsys, attacker, i, ai);
            // moveScores[target][i] += DamagingMoveScoring(bsys, attacker, i, ai);
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
