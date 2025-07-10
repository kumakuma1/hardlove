#include "../../include/types.h"
#include "../../include/config.h"
#include "../../include/battle.h"
#include "../../include/mega.h"
#include "../../include/pokemon.h"
#include "../../include/trainer_ai.h"
#include "../../include/constants/ability.h"
#include "../../include/constants/move_effects.h"
#include "../../include/constants/species.h"
#include "../../include/constants/battle_script_constants.h"
#include "../../include/constants/battle_message_constants.h"
#include "../../include/constants/item.h"
#include "../../include/item.h"


#define BATLLE_DEBUG_OUTPUT 1

#define IMPOSSIBLE_MOVE 40
#define NEVER_USE_MOVE_20 20



typedef struct {
    /*Field/Pokemon state relavent variables*/
    BOOL defenderImmuneToPoison;
    BOOL defenderImmuneToParalysis;
    BOOL defenderImmuneToBurn;
    BOOL defenderImmuneToSleep;
    BOOL attackerHasSupereffectiveMove;
    BOOL attackerHasDamagingMove;
    u8 attackerMovesFirst;
    u8 defenderMovesFirst;
    u8 isSpeedTie;
    u32 flingPower;
    u32 attackerMoveEffectiveness;
    int chosenTarget;
    int attacker;
    int defender;
    int defenderSide;
    int attackerSide;
    int attackerAbility;
    int attackerLevel;
    int defenderLevel;
    int defenderAbility;
    int attackerItem;
    int defenderItem;
    int defenderHoldEffect;
    int defenderType1;
    int defenderType2;
    int attackerType1;
    int attackerType2;
    int attackerHP;
    int attackerMaxHP;
    int attackerPercentHP;
    int defenderHP;
    int defenderMaxHP;
    int defenderPercentHP;
    int attackerSpeed;
    int defenderSpeed;
    int attackerCondition;
    int defenderCondition;
    int partySizeAttacker;
    int livingMembersAttacker;
    int partySizeDefender;
    int livingMembersDefender;
    int attackerMovesKnown;
    int attackerPartyIndex;
    int attackerLastUsedMove;
    int defenderLastUsedMove;
    int defenderLastUsedMoveEffect;
    int defenderTurnsOnField;
    int attackerTurnsOnField;
    BOOL isDefenderGrounded;
    BOOL isDefenderIncapacitated;
    BOOL defenderKnowsThawingMove;

    int maxDamageReceived;

    BOOL defenderHasAtleastOnePhysicalMove;
    BOOL defenderHasAtleastOneSpecialMove;
    BOOL playerCanOneShotMon;
    BOOL monCanOneShotPlayerWithAnyMove;
    BOOL attackerHasMoldBreaker;
    BOOL defenderHasMoldBreaker;


    /*Specific to multi/double/tag battles*/
    BOOL isPartnerGrounded;
    u8 partnerType1;
    int partner;
    int partnerHP;
    int partnerPercentHP;
    int partnerAbility;
    int partnerItem;

    /*Move-relevant variables*/
    int attackerMove;
    int attackerMoveEffect;
    int attackerMoveType;
    int attackerMovePPRemaining;
    int attackerMinRollMoveDamages[4];
    BOOL monCanOneShotPlayerWithMove[4];
    int attackerMaxDamageOutputMinRoll;
} AIContext;


/*Flag functions return a move score, given the index of the current move*/
int LONG_CALL BasicFlag(struct BattleSystem *bsys, u32 attacker, int i, AIContext *ai);
int LONG_CALL EvaluateAttackFlag(struct BattleSystem *bsys, u32 attacker, int i, AIContext *ai);
int LONG_CALL ExpertFlag(struct BattleSystem *bsys, u32 attacker, int i, AIContext *ai);
int LONG_CALL CheckHPFlag(struct BattleSystem *bsys, u32 attacker, int i, AIContext *ai);
int LONG_CALL HarassmentFlag(struct BattleSystem *bsys, u32 attacker, int i, AIContext *ai);


/*Helper Functions*/
BOOL LONG_CALL battlerHasSoundBasedMove(struct BattleSystem* bsys, u32 battler, AIContext* ai);
BOOL LONG_CALL battlerKnowsFlinchingMove(struct BattleSystem* bsys, u32 battler, AIContext* ai);
BOOL LONG_CALL BattlerKnowsMove(struct BattleSystem *bsys, u32 battler, u32 move, AIContext *ai);
int LONG_CALL BattlerPositiveStatChangesSum(struct BattleSystem* bsys, u32 battler, AIContext* ai);
BOOL LONG_CALL shouldRecover(struct BattleSystem* bsys, u32 attacker, u32 attackerMoveEffect, AIContext* ai);
BOOL LONG_CALL battlerKnowsThawingMove(struct BattleSystem* bsys, u32 battler, AIContext* ai);
int LONG_CALL offensiveSetup(struct BattleSystem* bsys, u32 attacker, int i, AIContext* ai);
int LONG_CALL defensiveSetup(struct BattleSystem* bsys, u32 attacker, int i, AIContext* ai);
BOOL LONG_CALL isMoveSpecialAiAttackingMove(struct BattleSystem* bsys, u32 attackerMove, AIContext* ai);
int LONG_CALL SpecialAiAttackingMove(struct BattleSystem* bsys, u32 attacker, int i, AIContext* ai);
BOOL LONG_CALL isMoveOneHitKOMove(struct BattleSystem* bsys, u32 attackerMove, AIContext* ai);
BOOL LONG_CALL IsMoveMultihit(u32 move);
BOOL LONG_CALL canMoveKillBattler(u32 move, u32 damage, u32 defenderHP, u32 defenderMaxHP, BOOL attackerHasMoldBreaker, u32 defenderAbility, u32 defenderItem);
BOOL LONG_CALL monDiesFromResidualDamage(struct BattleStruct* ctx, u32 attacker, u32 attackerCondition, BOOL isSeeded);

BOOL LONG_CALL IsInList(u32 moveEffect, const u16 StatList[], u16 ListLength);
BOOL LONG_CALL BattlerKnowsMoveInList(struct BattleSystem *bsys, u32 battler, const u16 MoveList[], u16 listLength, AIContext *ai);
BOOL LONG_CALL BattlerMovesFirstDoubles(struct BattleSystem *bsys, struct BattleStruct *ctx, int mainBattler, int flag, AIContext *ai);

void LONG_CALL SetupStateVariables(struct BattleSystem *bsys, u32 attacker, u32 defender, AIContext *ai);
int LONG_CALL AdjustUnusualMovePower(struct BattleSystem *bsys, u32 attacker, u32 defender, int moveEffect, int attackerPercentHP);

int LONG_CALL scoreMovesAgainstDefender(struct BattleSystem* bsys, u32 attacker, u32 target, int moveScores[4][4], AIContext* ai)
{
    struct BattleStruct* ctx = bsys->sp;
	int highestScoredMove = 0;
    for (int i = 0; i < GetBattlerLearnedMoveCount(bsys, ctx, attacker); i++)
    {
        u32 attackerMove = ctx->battlemon[attacker].move[i];

        if (attackerMove != MOVE_NONE &&
            (attackerMove == ctx->battlemon[attacker].moveeffect.moveNoChoice ||
             attackerMove == ctx->battlemon[attacker].moveeffect.encoredMove)) // if the attacker has a move that is forced, use it
        {
#ifdef BATLLE_DEBUG_OUTPUT
            debug_printf("Attacker has choiced move %d:%d\n", i, ctx->battlemon[attacker].moveeffect.moveNoChoice);
#endif // BATLLE_DEBUG_OUTPUT
            moveScores[target][i] += 1000;
        }

        moveScores[target][i] += 1000;  //don't want to get negative numbers, so start high at 1000, MOVE_NONE will stay at 0
        moveScores[target][i] += BasicFlag(bsys, attacker, i, ai);
        moveScores[target][i] += EvaluateAttackFlag(bsys, attacker, i, ai);
        moveScores[target][i] += ExpertFlag(bsys, attacker, i, ai);
        moveScores[target][i] += CheckHPFlag(bsys, attacker, i, ai);
        moveScores[target][i] += HarassmentFlag(bsys, attacker, i, ai);

        if (highestScoredMove < moveScores[target][i])
            highestScoredMove = moveScores[target][i];
    }

	return highestScoredMove;
}


enum AIActionChoice __attribute__((section (".init"))) TrainerAI_Main(struct BattleSystem *bsys, u32 attacker)
{
#ifdef BATLLE_DEBUG_OUTPUT
    debug_printf("TrainerAI_Main:\n");
#endif // BATLLE_DEBUG_OUTPUT
    
    struct BattleStruct *ctx = bsys->sp;
    AIContext aictx = {0};
    AIContext *ai = &aictx;
    enum AIActionChoice result = AI_ENEMY_ATTACK_1;


    int highestScoredMove = 0;
    int highestScoredMoveAcross = 0;
	int moveScores[4][4] = { 0 };   //account for BATTLER_OPPONENT (0), attacker (1), BATTLER_ACROSS(2), BATTLER_ALLY(3),  4 moves each
                                    //account for BATTLER_OPPONENT (2), attacker (3), BATTLER_ACROSS(0), BATTLER_ALLY(1),  4 moves each
	int targets[4] = { 0 };
    int targetsSize = 0;
    int tiedMoveIndices[4] = {0};
    u32 target = 0;
	int numberOfPotentialTargets = 0;

    u32 defender = BATTLER_OPPONENT(attacker);   //default for singles
    target = defender;

    /*For more than a 1v1 battle, loop over all battlers and compute the highest score for each.
    The highest score among them determines the target.*/
    if(BattleTypeGet(bsys) & (BATTLE_TYPE_MULTI | BATTLE_TYPE_DOUBLE | BATTLE_TYPE_TAG))
    {
#ifdef BATLLE_DEBUG_OUTPUT
        debug_printf("att %d, ally %d, defendOp %d, defendCross %d\n", attacker, BATTLER_ALLY(attacker), BATTLER_OPPONENT(attacker), BATTLER_ACROSS(attacker));
        debug_printf("att %d, ally %d, defendOp %d, defendCross %d\n", ctx->battlemon[attacker].species, ctx->battlemon[BATTLER_ALLY(attacker)].species, ctx->battlemon[BATTLER_OPPONENT(attacker)].species, ctx->battlemon[BATTLER_ACROSS(attacker)].species);
#endif // BATLLE_DEBUG_OUTPUT

        //BATTLER_OPPONENT
        SetupStateVariables(bsys, attacker, defender, ai);
 
        BOOL playerCanOneShotMon = ai->playerCanOneShotMon;
		highestScoredMove = scoreMovesAgainstDefender(bsys, attacker, target, moveScores, ai);
        //BATTLER_ACROSS
        defender = BATTLER_ACROSS(attacker);
        if (ctx->battlemon[defender].hp > 0)
        {
            target = defender;
            SetupStateVariables(bsys, attacker, defender, ai);
            if (playerCanOneShotMon)
                ai->playerCanOneShotMon = playerCanOneShotMon; //keep the value from the first target

            highestScoredMoveAcross = scoreMovesAgainstDefender(bsys, attacker, target, moveScores, ai);
            if (highestScoredMoveAcross > highestScoredMove)
				highestScoredMove = highestScoredMoveAcross;
        }
		// defender = BATTLER_ALLY(attacker);
        // target = defender;

        targetsSize = 0;
        for (u8 k = 0; k < 4; k++) // find targets with highestScoredMove
        {
            for (u8 i = 0; i < 4; i++) //movesScore
            {
                if (moveScores[k][i] == highestScoredMove)
                {
                    //debug_printf("found target %d\n", k)
                    targets[targetsSize] = k;
                    targetsSize++;
                    break;
                }
            }
        }

        target = targets[(BattleRand(bsys) % targetsSize)];

#ifdef BATLLE_DEBUG_OUTPUT
        debug_printf("picked target slot %d\n", target); 
#endif // BATLLE_DEBUG_OUTPUT
    }
    else  //single battles
    {
        //BATTLER_OPPONENT
        SetupStateVariables(bsys, attacker, defender, ai);
        highestScoredMove = scoreMovesAgainstDefender(bsys, attacker, target, moveScores, ai);
    }
    ctx->aiWorkTable.ai_dir_select_client[attacker] = target;

#ifdef BATLLE_DEBUG_OUTPUT
    u8 j = 0;
    for (int k = 0; k < 4; k++)
    {
        for (u8 i = 0; i < 4; i++) //movesScore
        {
            debug_printf("%4d  ", moveScores[k][i]);
        }

        if (targets[j] == k)
        {
            j++;
            debug_printf("x");
        }
        debug_printf("\n");
    }
#endif // BATLLE_DEBUG_OUTPUT

    for (u8 i = 0; i < 4; i++)
    {
        if (moveScores[target][i] == highestScoredMove)
        {
            result = i;
        }
    }

#ifdef BATLLE_DEBUG_OUTPUT
    for (u8 i = 0; i < 4; i++)
    {
        debug_printf("%i ", moveScores[target][i]);
    }
    debug_printf("-> highest %i:%i\n", result, highestScoredMove);
#endif // BATLLE_DEBUG_OUTPUT


    int tieMoveCount = 0;

    for (u8 i = 0; i < 4; i++)
    {                                         //check for ties
        if(moveScores[target][i] == highestScoredMove)
        {
            tiedMoveIndices[tieMoveCount] = i;
            tieMoveCount++;
        }
    }
	u8 tieMoveIndex = (BattleRand(bsys) % tieMoveCount);

    result = tiedMoveIndices[tieMoveIndex % 4];             //randomly pick a move among the tie
#ifdef BATLLE_DEBUG_OUTPUT
	debug_printf("got tieMoveIndex %d -> Resulting move: %d\n", tieMoveIndex,  result);
#endif // BATLLE_DEBUG_OUTPUT
    return result;
}



/*BasicFlag:
Heavily penalize stupid decisions that would fail, do nothing, or objectively hurt the user.*/
int LONG_CALL BasicFlag(struct BattleSystem *bsys, u32 attacker, int i, AIContext *ai)
{
    int moveScore = 0;
    struct BattleStruct *ctx = bsys->sp;

    ai->attackerMove = ctx->battlemon[attacker].move[i];
    ai->attackerMoveEffect = ctx->moveTbl[ai->attackerMove].effect;

    if(ctx->battlemon[ai->attacker].pp[i] == 0){
        moveScore -= IMPOSSIBLE_MOVE;
    }
    if(ctx->battlemon[ai->attacker].moveeffect.tauntTurns > 0 && 
        ctx->moveTbl[ai->attackerMove].split == SPLIT_STATUS)
    {
        moveScore -= IMPOSSIBLE_MOVE; //taunted, so no status moves
    }
    if ((IsPowderMove(ai->attackerMove) || ai->attackerMove == MOVE_LEECH_SEED) && HasType(ctx, ai->defender, TYPE_GRASS))
        moveScore -= IMPOSSIBLE_MOVE;

    // if (ctx->clientPriority[ctx->attack_client] > 0 && GetBattlerAbility(ctx, ctx->attack_client) == ABILITY_PRANKSTER && HasType(ctx, defender, TYPE_DARK) && (ctx->attack_client & 1) != (defender & 1)) // used on an enemy
    if (ctx->moveTbl[ai->attackerMove].split == SPLIT_STATUS && ctx->clientPriority[ai->attacker] > 0 && ai->attackerAbility == ABILITY_PRANKSTER && HasType(ctx, ai->defender, TYPE_DARK) &&
        (ctx->moveTbl[ai->attackerMove].target == RANGE_ADJACENT_OPPONENTS || (ctx->moveTbl[ai->attackerMove].target == RANGE_SINGLE_TARGET && BATTLERS_ON_DIFFERENT_SIDE(ai->attacker, ai->defender))))
    {
        moveScore -= IMPOSSIBLE_MOVE; // TODO check
    }    

    switch (ai->attackerMoveEffect)
    {
        case MOVE_EFFECT_STEALTH_ROCK:
            if(ctx->side_condition[ai->defenderSide] & SIDE_STATUS_STEALTH_ROCK || ai->livingMembersDefender == 1)
                moveScore -= NEVER_USE_MOVE_20;
            break;
        case MOVE_EFFECT_SET_SPIKES:
            if (ctx->scw[ai->defenderSide].spikesLayers >= 3)
                moveScore -= NEVER_USE_MOVE_20;
            break;
        case MOVE_EFFECT_TOXIC_SPIKES:
            if (ctx->scw[ai->defenderSide].toxicSpikesLayers >= 2)
                moveScore -= NEVER_USE_MOVE_20;
            break;
        case MOVE_EFFECT_STICKY_WEB:
            if(ctx->side_condition[ai->defenderSide] & SIDE_STATUS_STICKY_WEB)
                moveScore -= NEVER_USE_MOVE_20;
            break;
        case MOVE_EFFECT_APPLY_TERRAINS:
        {
            switch (ai->attackerMove)
            {
                case MOVE_GRASSY_TERRAIN:
                    if (ctx->terrainOverlay.type == GRASSY_TERRAIN && ctx->terrainOverlay.numberOfTurnsLeft > 0)
                        moveScore -= NEVER_USE_MOVE_20;
                    break;
                case MOVE_MISTY_TERRAIN:
                    if (ctx->terrainOverlay.type == MISTY_TERRAIN && ctx->terrainOverlay.numberOfTurnsLeft > 0)
                        moveScore -= NEVER_USE_MOVE_20;
                    break;
                case MOVE_ELECTRIC_TERRAIN:
                    if (ctx->terrainOverlay.type == ELECTRIC_TERRAIN && ctx->terrainOverlay.numberOfTurnsLeft > 0)
                        moveScore -= NEVER_USE_MOVE_20;
                    break;
                case MOVE_PSYCHIC_TERRAIN:
                    if (ctx->terrainOverlay.type == PSYCHIC_TERRAIN && ctx->terrainOverlay.numberOfTurnsLeft > 0)
                        moveScore -= NEVER_USE_MOVE_20;
                    break;
            }
            break;
        }
        case MOVE_EFFECT_PARALYZE_HIT:
            if (ctx->moveTbl[ai->attackerMove].secondaryEffectChance != 100)
                break;
            FALLTHROUGH;
        case MOVE_EFFECT_STATUS_PARALYZE:
            if (ai->defenderImmuneToParalysis)
                moveScore -= NEVER_USE_MOVE_20;
            break;
        case MOVE_EFFECT_STATUS_BURN:
            if (ai->defenderImmuneToBurn)
                moveScore -= NEVER_USE_MOVE_20;
            break;
        case MOVE_EFFECT_SWITCH_HELD_ITEMS:
            if (ai->attackerItem == ITEM_NONE && ai->defenderItem == ITEM_NONE)
                moveScore -= NEVER_USE_MOVE_20;
            break;
        case MOVE_EFFECT_STATUS_SLEEP:
        case MOVE_EFFECT_STATUS_SLEEP_NEXT_TURN:
            if (ai->defenderImmuneToSleep)
                moveScore -= NEVER_USE_MOVE_20;
            break;
        case MOVE_EFFECT_STATUS_POISON:
        case MOVE_EFFECT_STATUS_BADLY_POISON:
            if (ai->defenderImmuneToPoison)
                moveScore -= NEVER_USE_MOVE_20;
            break;
        case MOVE_EFFECT_STATUS_NIGHTMARE:
           if (ctx->battlemon[ai->defender].condition2 & STATUS2_NIGHTMARE || ai->defenderAbility == ABILITY_MAGIC_GUARD)
               moveScore -= NEVER_USE_MOVE_20;
           break;
        case MOVE_EFFECT_FAIL_IF_NOT_USED_ALL_OTHER_MOVES:
            if (ctx->battlemon[attacker].moveeffect.lastResortCount < ai->attackerMovesKnown - 1)
                moveScore -= NEVER_USE_MOVE_20;
            break;
        case MOVE_EFFECT_WEATHER_SANDSTORM:
             if (ctx->field_condition & WEATHER_SANDSTORM_ANY)
                 moveScore -= NEVER_USE_MOVE_20;
             break;
        case MOVE_EFFECT_WEATHER_HAIL:
            if (ctx->field_condition & WEATHER_HAIL_ANY)
                moveScore -= NEVER_USE_MOVE_20;
            break;
        case MOVE_EFFECT_WEATHER_SNOW:
            if (ctx->field_condition & WEATHER_SNOW_ANY)
                moveScore -= NEVER_USE_MOVE_20;
            break;
        case MOVE_EFFECT_WEATHER_RAIN:
            if (ctx->field_condition & WEATHER_RAIN_ANY)
                moveScore -= NEVER_USE_MOVE_20;
            break;
        case MOVE_EFFECT_WEATHER_SUN:
            if (ctx->field_condition & WEATHER_SUNNY_ANY)
                moveScore -= NEVER_USE_MOVE_20;
            break;
        default:
            break;
    }

    return moveScore;
}

BOOL LONG_CALL isMoveSpecialAiAttackingMove(struct BattleSystem* bsys, u32 attackerMove, AIContext* ai)
{
    BOOL isSpecialAIMove = FALSE;
    switch (attackerMove)
    {
        case MOVE_SELF_DESTRUCT:
        case MOVE_EXPLOSION:
        case MOVE_MISTY_EXPLOSION:
        case MOVE_FINAL_GAMBIT:
        case MOVE_RELIC_SONG:
        case MOVE_FUTURE_SIGHT:
        case MOVE_ROLLOUT:
        case MOVE_METEOR_BEAM:
        case MOVE_ELECTRO_SHOT:
		case MOVE_BIND:
		case MOVE_CLAMP:
		case MOVE_FIRE_SPIN:
        case MOVE_WRAP:
        case MOVE_WHIRLPOOL:
		//case MOVE_INFESTATION:
            isSpecialAIMove = TRUE;
            break;
        default:
            break;
    }
	return isSpecialAIMove;
}

int LONG_CALL SpecialAiAttackingMove(struct BattleSystem* bsys, u32 attacker, int i, AIContext* ai)
{
    int moveScore = 0;
    struct BattleStruct* ctx = bsys->sp;
	ai->attackerMove = ctx->battlemon[attacker].move[i];

    switch (ai->attackerMove)
    {
    case MOVE_SELF_DESTRUCT:
    case MOVE_EXPLOSION:
    case MOVE_MISTY_EXPLOSION:
        if ((ai->defenderAbility != ABILITY_DAMP || ai->attackerHasMoldBreaker) && ai->attackerMinRollMoveDamages[i] > 0) /*TODO: immunity handled? */
        {
            if (ai->attackerPercentHP < 10)
            {
                moveScore += 10;
            }
            else if (ai->attackerPercentHP < 33)
            {
                if (BattleRand(bsys) % 10 < 7) //70%
                    moveScore += 8;
            }
            else if (ai->attackerPercentHP < 66)
            {
                if (BattleRand(bsys) % 2) //50%
                    moveScore += 7;
            }
            else
            {
                if (BattleRand(bsys) % 20 == 0) //5%
                    moveScore += 7;
            }

            if (ai->livingMembersAttacker == 1 && ai->livingMembersDefender > 1)
                moveScore -= NEVER_USE_MOVE_20;
            if (ai->livingMembersAttacker == 1 && ai->livingMembersDefender == 1)
                moveScore -= 1;
        }
        break;
    case MOVE_FINAL_GAMBIT:
        if (ai->attackerMovesFirst && ai->attackerHP > ai->defenderHP)
            moveScore += 8;
        else if (ai->attackerMovesFirst && ai->playerCanOneShotMon)
            moveScore += 7;
        else
            moveScore += 6;
        break;
    case MOVE_RELIC_SONG: //TODO
        break;
    case MOVE_FUTURE_SIGHT:
        if (ai->defenderMovesFirst && ai->playerCanOneShotMon)
            moveScore += 8;
        else
            moveScore += 6;
        break;
    case MOVE_ROLLOUT:
        moveScore += 7;
        break;
    case MOVE_METEOR_BEAM:
        if (ai->attackerItem == ITEM_POWER_HERB)
            moveScore += 9;
        else
            moveScore -= NEVER_USE_MOVE_20;
        break;
    case MOVE_ELECTRO_SHOT:
        if (ai->attackerItem == ITEM_POWER_HERB || ctx->field_condition & WEATHER_RAIN_ANY)
            moveScore += 9;
        else
            moveScore -= NEVER_USE_MOVE_20;
        break;
    case MOVE_BIND:
    case MOVE_CLAMP:
    case MOVE_FIRE_SPIN:
    case MOVE_WRAP:
    case MOVE_WHIRLPOOL:
        moveScore += 6;
        if (BattleRand(bsys) % 10 < 2)
            moveScore += 2;
        break;
    default:
        break;
    }

	return moveScore;
}

BOOL LONG_CALL isMoveOneHitKOMove(struct BattleSystem* bsys, u32 attackerMove, AIContext* ai)
{
    BOOL isOneHitKOMove = FALSE;
    switch (attackerMove)
    {
    case MOVE_GUILLOTINE:
    case MOVE_HORN_DRILL:
    case MOVE_FISSURE:
    case MOVE_SHEER_COLD:
        isOneHitKOMove = TRUE;
        break;
    default:
        break;
    }
    return isOneHitKOMove;
}

/*Rank moves based on their damage output, ability to ohko, 2hko, */
int LONG_CALL EvaluateAttackFlag (struct BattleSystem *bsys, u32 attacker, int i, AIContext *ai)
{
    int moveScore = 0;
    struct BattleStruct *ctx = bsys->sp;
    BOOL isMoveHighestDamage = 0;

     if(ctx->moveTbl[ai->attackerMove].split == SPLIT_STATUS)
     {
        return 0;
     }

    ai->attackerMove = ctx->battlemon[attacker].move[i];
    ai->attackerMoveEffect = ctx->moveTbl[ai->attackerMove].effect;

    //TODO deal with contrary

    if (isMoveSpecialAiAttackingMove(bsys, ai->attackerMove, ai))
    {
		moveScore += SpecialAiAttackingMove(bsys, attacker, i, ai);
    }
    else if (isMoveOneHitKOMove(bsys, ai->attackerMove, ai))
    {
        switch (ai->attackerMove)
        {
        case MOVE_SHEER_COLD:
            if (HasType(ctx, ai->defender, TYPE_ICE))
                moveScore -= NEVER_USE_MOVE_20;
            break;
        case MOVE_GUILLOTINE:
        case MOVE_HORN_DRILL:
            if (HasType(ctx, ai->defender, TYPE_NORMAL) && ai->attackerAbility == ABILITY_SCRAPPY)
                moveScore -= NEVER_USE_MOVE_20;
             break;
        case MOVE_FISSURE:
            if (ai->attackerMove == MOVE_FISSURE && (HasType(ctx, ai->defender, TYPE_FLYING) || (!ai->attackerHasMoldBreaker && ai->defenderAbility == ABILITY_LEVITATE)))
                moveScore -= NEVER_USE_MOVE_20;
             break;
        default:
            break;
        }
        if (ai->attackerLevel > ai->defenderLevel)
        {
            if (BattleRand(bsys) % 3 == 0)
                moveScore += 9;
        }
        else
        {
            moveScore -= NEVER_USE_MOVE_20;
        }
    }
    else if (ai->attackerMaxDamageOutputMinRoll == ai->attackerMinRollMoveDamages[i])
    {
        isMoveHighestDamage = 1;
        moveScore += 6;
        if(BattleRand(bsys) % 10 < 2)
            moveScore += 2;
    }

    if (ai->monCanOneShotPlayerWithMove[i]) // if ai sees kill with this move
    {
        if (ai->attackerMovesFirst || (ai->defenderMovesFirst && ctx->moveTbl[ai->attackerMove].priority > 0))
        {
            moveScore += 6; //and is faster/has priority
        }
        else if (ai->defenderMovesFirst)
        {
            moveScore += 3;
        }
        if (ai->attackerAbility == ABILITY_MOXIE || ai->attackerAbility == ABILITY_BEAST_BOOST || 
            ai->attackerAbility == ABILITY_CHILLING_NEIGH || ai->attackerAbility == ABILITY_GRIM_NEIGH)
        {
             moveScore += 1;
        }
    }

    if (ai->attackerMoveEffectiveness & MOVE_STATUS_FLAG_SUPER_EFFECTIVE && ai->attackerMoveEffect == MOVE_EFFECT_HIGH_CRITICAL)
    {
        if(BattleRand(bsys) % 2 == 0)
            moveScore += 2;
    }

    if (ai->defenderMovesFirst && ai->playerCanOneShotMon)
    {
        if (ctx->moveTbl[ai->attackerMove].priority > 0)
        {
            moveScore += 11;
        }
    }

    if (!isMoveHighestDamage && ai->attackerMoveEffect == MOVE_EFFECT_LOWER_SPEED_HIT)
    {
        if (!ai->defenderMovesFirst && ((ai->defenderAbility != ABILITY_CLEAR_BODY && ai->defenderAbility != ABILITY_WHITE_SMOKE && ai->defenderAbility != ABILITY_CONTRARY) || 
            ai->attackerHasMoldBreaker))
        {
            moveScore += 6;
        }
        else
        {
            moveScore += 5;
        }
        if (BattleTypeGet(bsys) & (BATTLE_TYPE_MULTI | BATTLE_TYPE_DOUBLE | BATTLE_TYPE_TAG))
        {
            if (ai->attackerMove == MOVE_ICY_WIND || ai->attackerMove == MOVE_ELECTROWEB)
                moveScore += 1;
        }
    }

    if (!isMoveHighestDamage && ((ai->attackerMoveEffect == MOVE_EFFECT_LOWER_SP_ATK_HIT && ai->defenderHasAtleastOneSpecialMove)|| 
        (ai->attackerMoveEffect == MOVE_EFFECT_LOWER_ATTACK_HIT && ai->defenderHasAtleastOnePhysicalMove)))
    {
        if ((ai->defenderAbility != ABILITY_CLEAR_BODY && ai->defenderAbility != ABILITY_WHITE_SMOKE && ai->defenderAbility != ABILITY_CONTRARY) || 
            ai->attackerHasMoldBreaker)
        {
            moveScore += 6;
        }
        else
        {
            moveScore += 5;
        }
        if (BattleTypeGet(bsys) & (BATTLE_TYPE_MULTI | BATTLE_TYPE_DOUBLE | BATTLE_TYPE_TAG))
        {
            if (ctx->moveTbl[ai->attackerMove].target == RANGE_ADJACENT_OPPONENTS)
                moveScore += 1;
        }
    }

    switch(ai->attackerMove)
    {
        case MOVE_ACID_SPRAY:
        {
            if ((ai->defenderAbility != ABILITY_CLEAR_BODY && ai->defenderAbility != ABILITY_WHITE_SMOKE && ai->defenderAbility != ABILITY_CONTRARY && ai->defenderAbility != ABILITY_BULLETPROOF) || 
                ai->attackerHasMoldBreaker)
            {
                moveScore += 6;
            }
            break;
        }
        case MOVE_SUCKER_PUNCH:
        {
            if (ai->attackerLastUsedMove == MOVE_SUCKER_PUNCH)
            {
                if(BattleRand(bsys) % 2 == 0)
                    moveScore -= NEVER_USE_MOVE_20;
            }
            break;
        }
        case MOVE_FAKE_OUT:
        {
            if (ai->attackerTurnsOnField == 0 && ((ai->defenderAbility != ABILITY_SHIELD_DUST && ai->defenderAbility != ABILITY_INNER_FOCUS) ||
                ai->attackerHasMoldBreaker))
            {
                moveScore += 9;
            }
            else
            {
                moveScore -= NEVER_USE_MOVE_20;
			}
            break;
        }
        case MOVE_PURSUIT:
        {
            if (ai->attackerMovesFirst)
                moveScore += 3;

            if (ai->attackerMinRollMoveDamages[i] > ai->defenderHP)
                moveScore += 10;
            else if (ai->defenderPercentHP < 20)
                moveScore += 10;
            else if (ai->defenderPercentHP < 40)
            {
                if(BattleRand(bsys) % 2 == 0)
                    moveScore += 8;
            }
            break;
        }
        case MOVE_FELL_STINGER:
        {
            if (ctx->battlemon[ai->attacker].states[STAT_ATTACK] < 12 && ai->attackerMinRollMoveDamages[i] > ai->defenderHP)
            {
                if (ai->attackerMovesFirst)
                {
                    moveScore += 10;
                }
                //TODO
            }
            break;
        }
        case MOVE_EARTHQUAKE:
        case MOVE_MAGNITUDE:
        {
            if (BattleTypeGet(bsys) & (BATTLE_TYPE_MULTI | BATTLE_TYPE_DOUBLE | BATTLE_TYPE_TAG))
            {
                if (ai->isPartnerGrounded) //or about to use magnetrise && faster
                {
                    if (ctx->battlemon[BATTLER_ALLY(ai->attacker)].hp)
                    {
                        if (HasType(ctx, BATTLER_ALLY(ai->attacker), TYPE_POISON) ||
                            HasType(ctx, BATTLER_ALLY(ai->attacker), TYPE_STEEL) ||
                            HasType(ctx, BATTLER_ALLY(ai->attacker), TYPE_FIRE) ||
                            HasType(ctx, BATTLER_ALLY(ai->attacker), TYPE_ROCK))
                        {
                            moveScore -= 10;
                        }  
                        else
                            moveScore -= 3;
                    }
                }
                else
                    moveScore += 2;
            }
        }
        default:
            break;
    }

    return moveScore;
}

int LONG_CALL offensiveSetup(struct BattleSystem* bsys, u32 attacker, int i, AIContext* ai)
{
	int moveScore = 0;
    if (ai->isDefenderIncapacitated)
        moveScore += 3;
    if (ai->attackerMovesFirst)
    {
        if (!ai->playerCanOneShotMon)
            moveScore += 3;
    }
    else
    {
        if (2*ai->maxDamageReceived >= ai->attackerHP)
            moveScore -= 5;
    }
    
    return moveScore;
}
int LONG_CALL defensiveSetup(struct BattleSystem* bsys, u32 attacker, int i, AIContext* ai)
{
    int moveScore = 0;
    if (ai->isDefenderIncapacitated)
        moveScore += 2;
    if (ai->defenderMovesFirst && 2 * ai->maxDamageReceived >= ai->attackerHP)
        moveScore -= 5;
    return moveScore;
}


int LONG_CALL ExpertFlag(struct BattleSystem* bsys, u32 attacker, int i, AIContext* ai)
{
    int moveScore = 0;
    struct BattleStruct* ctx = bsys->sp;
    BOOL hasSitrus = (ai->attackerItem == ITEM_SITRUS_BERRY);
    BOOL shouldSetup = TRUE;
	BOOL isSetupMove = TRUE;

    ai->attackerMove = ctx->battlemon[attacker].move[i];
    ai->attackerMoveEffect = ctx->moveTbl[ai->attackerMove].effect;

    if (ai->playerCanOneShotMon || (ai->defenderAbility == ABILITY_UNAWARE && (BattleRand(bsys) % 4 > 0)))
        shouldSetup = FALSE;

    switch (ai->attackerMoveEffect)
    {
        case MOVE_EFFECT_COPY_STAT_CHANGES:
            moveScore += 5;
            for (int k = 0; k < STAT_MAX; ++k)
            { 
                if (ctx->battlemon[attacker].states[k] < ctx->battlemon[ai->defender].states[k] && ctx->battlemon[ai->defender].states[k] > 6)
                {
                    moveScore += 2;
                }
			}
            break;
        case MOVE_EFFECT_EVA_UP:
        case MOVE_EFFECT_EVA_UP_2:
        case MOVE_EFFECT_EVA_UP_3:
        case MOVE_EFFECT_EVA_UP_2_MINIMIZE:
			moveScore += 6;
            if (ai->defenderAbility == ABILITY_NO_GUARD || ctx->battlemon[attacker].states[STAT_EVASION] >= 10)
            {
                moveScore -= NEVER_USE_MOVE_20;
            }
            else if (2 * ai->maxDamageReceived < ai->attackerHP)
            {
                moveScore += 2;
            }
            if (ai->isDefenderIncapacitated)
                moveScore += 2;
            break;
        case MOVE_EFFECT_SPEED_UP_2:
        case MOVE_EFFECT_AUTOTOMIZE:
            if (ai->attackerMovesFirst)
                moveScore += 7;
            else
				moveScore -= NEVER_USE_MOVE_20;
            break;
        case MOVE_EFFECT_CRIT_UP_2:
            if (ai->defenderAbility == ABILITY_SHELL_ARMOR || ai->defenderAbility == ABILITY_BATTLE_ARMOR)
                moveScore -= NEVER_USE_MOVE_20;
            else if (ai->attackerAbility == ABILITY_SUPER_LUCK || ai->attackerAbility == ABILITY_SNIPER || ai->attackerItem == ITEM_SCOPE_LENS) //or hight crit moves
                moveScore += 7;
            else
                moveScore += 5;
            break;
        //case MOVE_EFFECT_ATK_SP_ATK_SPEED_UP_2_LOSE_HALF_MAX_HP: //filet away
        case MOVE_EFFECT_MAX_ATK_LOSE_HALF_MAX_HP: //belly drum
            moveScore += 4;
            if (ai->isDefenderIncapacitated)
                moveScore += 5;
            else if (2 * ai->attackerHP > ai->attackerMaxHP)
            {
                if (hasSitrus)
                {
                    if (2 * ai->maxDamageReceived < (25 * ai->attackerHP/10 - ai->attackerMaxHP)) //D < 1.125*Hp - 0.5maxHp
                        moveScore += 4;
                }
                else if (2 * ai->maxDamageReceived < (2 * ai->attackerHP - ai->attackerMaxHP)) // D < Hp - 0.5maxHp
                    moveScore += 4;
            }
            break;
        case MOVE_EFFECT_RAISE_ALL_STATS_LOSE_THIRD_MAX_HP: //clangorous soul
        case MOVE_EFFECT_ATK_SP_ATK_SPEED_UP_2_DEF_SP_DEF_DOWN: //shell smash
            moveScore += 6;
            if (ai->isDefenderIncapacitated)
                moveScore += 3;
            if (ai->attackerMovesFirst) //if ai is slower, no defense drop for hit
            {
                if (ai->attackerItem == ITEM_WHITE_HERB || 2 * ai->maxDamageReceived < ai->attackerHP)//simple heuristic to not calc exact dmg. 
                    moveScore += 2;
                else
                    moveScore -= 2;
            }
            if (ctx->battlemon[attacker].states[STAT_ATTACK] > 7 || ctx->battlemon[attacker].states[STAT_SPATK] > 7)
                moveScore -= NEVER_USE_MOVE_20;
            break;
        case MOVE_EFFECT_ATK_UP:   //howl
		case MOVE_EFFECT_ATK_UP_2: //swords dance
        case MOVE_EFFECT_ATK_UP_3:
        case MOVE_EFFECT_ATK_SPEED_UP: //dragon dance
        case MOVE_EFFECT_SP_ATK_UP: //growth
        case MOVE_EFFECT_ATK_SP_ATK_UP: //work up
        case MOVE_EFFECT_ATK_ACC_UP: //hone claws
        case MOVE_EFFECT_RAISE_ATTACK_HIT: //powerup punch
        case MOVE_EFFECT_SPEED_UP_2_ATK_UP: //shift gear
        case MOVE_EFFECT_TIDY_UP: //tidy up is basically ddance
        //case MOVE_EFFECT_RAISE_ATTACK_HIT: //PuP
		case MOVE_EFFECT_RANDOM_STAT_UP_2: //accupressure
        case MOVE_EFFECT_ATK_DEF_SPEED_UP: //victory dance
            moveScore += 6;
            moveScore += offensiveSetup(bsys, attacker, i, ai);
            break;
        case MOVE_EFFECT_DEF_UP:
        case MOVE_EFFECT_DEF_UP_2:
        case MOVE_EFFECT_DEF_UP_3:
        case MOVE_EFFECT_SP_DEF_UP:
        case MOVE_EFFECT_SP_DEF_UP_2: 
        case MOVE_EFFECT_SP_DEF_UP_3:
        case MOVE_EFFECT_DEF_UP_DOUBLE_ROLLOUT_POWER:
        case MOVE_EFFECT_SP_DEF_UP_DOUBLE_ELECTRIC_POWER: // Charge
        case MOVE_EFFECT_DEF_SP_DEF_UP:
        case MOVE_EFFECT_STOCKPILE:
            //case MOVE_EFFECT_STUFF_CHEEKS:
            moveScore += 6;
            moveScore += defensiveSetup(bsys, attacker, i, ai);
            break;
		case MOVE_EFFECT_SP_ATK_SP_DEF_SPEED_UP: //quiver dance
        case MOVE_EFFECT_SP_ATK_SP_DEF_UP: // Calm Mind
            moveScore += 6;
            if (ai->defenderHasAtleastOnePhysicalMove == FALSE && ai->defenderHasAtleastOneSpecialMove)
                moveScore += defensiveSetup(bsys, attacker, i, ai);
            else
                moveScore += offensiveSetup(bsys, attacker, i, ai);
            break;
        case MOVE_EFFECT_CURSE:
            if (HasType(ctx, attacker, TYPE_GHOST))
                break;
            FALLTHROUGH;
		case MOVE_EFFECT_ATK_DEF_UP: // Bulk Up
        case MOVE_EFFECT_ATK_DEF_ACC_UP: //coil
        //case MOVE_EFFECT_NO_RETREAT: // No Retreat
            moveScore += 6;
            if (ai->defenderHasAtleastOnePhysicalMove && ai->defenderHasAtleastOneSpecialMove == FALSE)
                moveScore += defensiveSetup(bsys, attacker, i, ai);
            else
                moveScore += offensiveSetup(bsys, attacker, i, ai);
            break;
        case MOVE_EFFECT_CHARGE_TURN_ATK_SP_ATK_SPEED_UP_2: //geomancy
            if (ai->attackerItem == ITEM_POWER_HERB)
                moveScore += 9;
            else
				moveScore -= NEVER_USE_MOVE_20;
            break;
        default:
            isSetupMove = FALSE;
            break;
    }
    if (!shouldSetup)
        moveScore = (0 - NEVER_USE_MOVE_20);
    if (!isSetupMove)
        moveScore = 0;

    return moveScore;
}

int LONG_CALL HarassmentFlag(struct BattleSystem* bsys, u32 attacker, int i, AIContext* ai)
{
    int moveScore = 0;
    BOOL sharesMoves = FALSE;
    struct BattleStruct* ctx = bsys->sp;

    ai->attackerMove = ctx->battlemon[attacker].move[i];
    ai->attackerMoveEffect = ctx->moveTbl[ai->attackerMove].effect;

    switch (ai->attackerMoveEffect)
    {
    case MOVE_EFFECT_STEALTH_ROCK:
    case MOVE_EFFECT_SET_SPIKES:
    case MOVE_EFFECT_TOXIC_SPIKES:
        if (ai->attackerTurnsOnField == 0)
            moveScore += 8;
        else
            moveScore += 6;
        if (BattleRand(bsys) % 4 != 0)
            moveScore += 1;
        if (ctx->scw[ai->defenderSide].spikesLayers > 0 && ai->attackerMoveEffect == MOVE_EFFECT_SET_SPIKES)
            moveScore -= 1;
        if (ctx->scw[ai->defenderSide].toxicSpikesLayers > 0 && ai->attackerMoveEffect == MOVE_EFFECT_TOXIC_SPIKES)
            moveScore -= 1;
        break;
    case MOVE_EFFECT_STICKY_WEB:
        if (ai->attackerTurnsOnField == 0)
            moveScore += 9;
        else
            moveScore += 6;
        if (BattleRand(bsys) % 4 != 0)
            moveScore += 3;
        break;
    case MOVE_EFFECT_SURVIVE_WITH_1_HP:
        if (ai->attackerLastUsedMove == ai->attackerMove) //TODO
        {
            if (BattleRand(bsys) % 2 == 0)
                moveScore -= NEVER_USE_MOVE_20;
        }
        else if(ai->defenderMovesFirst && (ai->playerCanOneShotMon || !ai->monCanOneShotPlayerWithAnyMove))
        {
            moveScore += 6;
            if (ai->attackerItem == ITEM_CUSTAP_BERRY || ai->attackerItem == ITEM_SALAC_BERRY)
                moveScore += 2;
        }
        else
        {
            moveScore -= NEVER_USE_MOVE_20;
		}
        break;
    //case MOVE_EFFECT_KINGS_SHIELD:
    //case MOVE_EFFECT_OBSTRUCT:
    //case MOVE_EFFECT_SPIKEY_SHIELD:
    case MOVE_EFFECT_PROTECT: //TODO
    {
        BOOL monDiesEndTurn = monDiesFromResidualDamage(ctx, ai->attacker, ai->attackerCondition, (ctx->battlemon[ai->attacker].effect_of_moves & MOVE_EFFECT_FLAG_LEECH_SEED_ACTIVE));
        moveScore += 6;
        if ((ai->attackerCondition & (STATUS_POISON | STATUS_BURN | STATUS_PARALYSIS)) || (ctx->battlemon[ai->attacker].effect_of_moves & MOVE_EFFECT_FLAG_LEECH_SEED_ACTIVE)) //TODO
            moveScore -= 1;
        if ((ai->defenderCondition & (STATUS_POISON | STATUS_BURN | STATUS_PARALYSIS)) || (ctx->battlemon[ai->defender].effect_of_moves & MOVE_EFFECT_FLAG_LEECH_SEED_ACTIVE)) //TODO
            moveScore += 1;
        if (ai->attackerTurnsOnField == 0 && ((BattleTypeGet(bsys) & (BATTLE_TYPE_MULTI | BATTLE_TYPE_DOUBLE | BATTLE_TYPE_TAG)) == 0))
            moveScore -= 1;
        if (ai->attackerLastUsedMove == ai->attackerMove)
        {
            if (BattleRand(bsys) % 2 == 0)
                moveScore -= NEVER_USE_MOVE_20;
        }
        //TODO second Last Move
        break;
    }
    case MOVE_EFFECT_MAKE_SHARED_MOVES_UNUSEABLE:
        if (ctx->battlemon[ai->defender].effect_of_moves & MOVE_EFFECT_FLAG_IMPRISONED)
            moveScore -= NEVER_USE_MOVE_20;
        else
        {
            for (int j = 0; j < CLIENT_MAX; ++j)
            {
                for (int k = 0; k < CLIENT_MAX; ++k)
                {
                    if (ctx->battlemon[ai->attacker].move[k] == ctx->battlemon[ai->defender].move[j] && ctx->battlemon[ai->defender].move[j] != MOVE_NONE)
                    {
                        sharesMoves = TRUE;
                        break;
                    }
                }
                if (sharesMoves == TRUE)
                    break;
            }
            if (sharesMoves == TRUE)
                moveScore += 9;
        }
        break;
    case MOVE_EFFECT_PASS_STATS_AND_STATUS:
        if (ai->livingMembersAttacker > 1 && (BattlerPositiveStatChangesSum(bsys, ai->attacker, ai) > 1 || ctx->battlemon[ai->attacker].condition2 & STATUS2_SUBSTITUTE))
            moveScore += 14;
        if (ai->livingMembersAttacker == 1)
            moveScore -= NEVER_USE_MOVE_20;
        break;
    case MOVE_EFFECT_DOUBLE_SPEED_3_TURNS:
        if (ai->defenderMovesFirst) // or partner is slower
            moveScore += 9;
        else
            moveScore += 5;
        if (ctx->side_condition[ai->attackerSide] & SIDE_STATUS_TAILWIND)
            moveScore -= NEVER_USE_MOVE_20;
        break;
    case MOVE_EFFECT_TRICK_ROOM:
        if (ai->defenderMovesFirst) // or partner is slower
            moveScore += 10;
        else
            moveScore += 5;

        if (ctx->field_condition & FIELD_STATUS_TRICK_ROOM)
            moveScore -= NEVER_USE_MOVE_20;
        break;
    case MOVE_EFFECT_APPLY_TERRAINS:
        if (ai->attackerItem == ITEM_TERRAIN_EXTENDER)
            moveScore += 9;
        else
            moveScore += 8;
        break;
    case MOVE_EFFECT_SET_REFLECT:
        if (ctx->side_condition[ai->attackerSide] & SIDE_STATUS_REFLECT)
            moveScore -= NEVER_USE_MOVE_20;
        else
        {
            moveScore += 6;
            if (ai->defenderHasAtleastOnePhysicalMove)
            {
                if (ai->attackerItem == ITEM_LIGHT_CLAY)
                    moveScore += 1;
                if (BattleRand(bsys) % 2 == 0)
                    moveScore += 1;
            }
        }
        break;
    case MOVE_EFFECT_SET_LIGHT_SCREEN:
        if (ctx->side_condition[ai->attackerSide] & SIDE_STATUS_LIGHT_SCREEN)
            moveScore -= NEVER_USE_MOVE_20;
        else
        {
            moveScore += 6;
            if (ai->defenderHasAtleastOneSpecialMove)
            {
                if (ai->attackerItem == ITEM_LIGHT_CLAY)
                    moveScore += 1;
                if (BattleRand(bsys) % 2 == 0)
                    moveScore += 1;
            }
        }
        break;
    case MOVE_EFFECT_BOOST_ALLY_POWER_BY_50_PERCENT: //TODO
    case MOVE_EFFECT_MAKE_GLOBAL_TARGET:
        break;
    case MOVE_EFFECT_SET_SUBSTITUTE:
        moveScore += 6;
        if (ai->attackerMovesFirst && (ctx->battlemon[ai->defender].effect_of_moves & MOVE_EFFECT_FLAG_LEECH_SEED_ACTIVE))
            moveScore += 2;
        if (ai->defenderCondition & STATUS_SLEEP)
            moveScore += 2;
        if (BattleRand(bsys) % 2 == 0)
            moveScore -= 1;
        if (ai->defenderAbility == ABILITY_INFILTRATOR || ai->attackerPercentHP < 50)
            moveScore -= NEVER_USE_MOVE_20;
        if (battlerHasSoundBasedMove(bsys, ai->defender, ai))
            moveScore -= 8;
        break;
    case MOVE_EFFECT_FAINT_AND_ATK_SP_ATK_DOWN_2:
        moveScore += 6;
        if (ai->attackerPercentHP < 10)
        {
            moveScore += 10;
        }
        else if (ai->attackerPercentHP < 33)
        {
            if (BattleRand(bsys) % 10 < 7) //70%
                moveScore += 8;
        }
        else if (ai->attackerPercentHP < 66)
        {
            if (BattleRand(bsys) % 2) //50%
                moveScore += 7;
        }
        else
        {
            if (BattleRand(bsys) % 20 == 0) //5%
                moveScore += 7;
        }

        if (ai->livingMembersAttacker == 1)
            moveScore -= NEVER_USE_MOVE_20;
        break;
    case MOVE_EFFECT_PARALYZE_HIT:
        if (ai->attackerMove != MOVE_NUZZLE)
            break;
        FALLTHROUGH;
    case MOVE_EFFECT_STATUS_PARALYZE:
        if (ai->defenderMovesFirst || // and slower after para
            (BattlerKnowsMove(bsys, attacker, MOVE_HEX, ai) == TRUE) ||
            (battlerKnowsFlinchingMove(bsys, attacker, ai) == TRUE) ||
            ctx->battlemon[ai->defender].condition2 & STATUS2_ATTRACT ||
            ctx->battlemon[ai->defender].condition2 & STATUS2_CONFUSION)
            moveScore += 8;
        else
            moveScore += 7;
        if (BattleRand(bsys) % 2) //50%
            moveScore -= 1;
        break;
    case MOVE_EFFECT_STATUS_BURN:
        moveScore += 6;
        if (BattleRand(bsys) % 3 == 0)
        {
            if ((BattlerKnowsMove(bsys, attacker, MOVE_HEX, ai) == TRUE)) // or partner
                moveScore += 1;
            if (ai->defenderHasAtleastOnePhysicalMove)
                moveScore += 1;
        }
        break;
    case MOVE_EFFECT_SWITCH_HELD_ITEMS:
        moveScore += 5;
        if ((ai->attackerItem == ITEM_TOXIC_ORB && !ai->defenderImmuneToPoison) ||
            (ai->attackerItem == ITEM_FLAME_ORB && !ai->defenderImmuneToBurn) ||
            (ai->attackerItem == ITEM_BLACK_SLUDGE && !HasType(ctx, ai->defender, TYPE_POISON)))
        {
            moveScore += 1;
            if (BattleRand(bsys) % 2) //50%
                moveScore += 1;
		}
        else if (ai->attackerItem == ITEM_IRON_BALL || ai->attackerItem == ITEM_LAGGING_TAIL || ai->attackerItem == ITEM_STICKY_BARB)
        {
            moveScore += 2;
        }
        break;
    case MOVE_EFFECT_SP_ATK_UP_CAUSE_CONFUSION:
    case MOVE_EFFECT_ATK_UP_2_STATUS_CONFUSION:
    case MOVE_EFFECT_STATUS_CONFUSE:
        if ((ctx->battlemon[ai->defender].condition2 & STATUS2_CONFUSION) || (ctx->side_condition[ai->defenderSide] & SIDE_STATUS_SAFEGUARD) ||
            ai->defenderAbility == ABILITY_OWN_TEMPO)
        {
            moveScore -= NEVER_USE_MOVE_20;
        }
        else
        {
            moveScore += 6;
            if (ai->defenderCondition & STATUS_PARALYSIS || ctx->battlemon[ai->defender].condition2 & STATUS2_ATTRACT)
                moveScore += 2;
        }
        break;
    case MOVE_EFFECT_INFATUATE:
        if (ctx->battlemon[ai->defender].condition2 & STATUS2_ATTRACT || ai->defenderAbility == ABILITY_OBLIVIOUS)
            moveScore -= NEVER_USE_MOVE_20;
        else
        {
            moveScore += 6;
            if (ai->defenderCondition & STATUS_PARALYSIS || ctx->battlemon[ai->defender].condition2 & STATUS2_CONFUSION)
                moveScore += 2;
        }
        break;
    case MOVE_EFFECT_STATUS_SLEEP:
    case MOVE_EFFECT_STATUS_SLEEP_NEXT_TURN:
        moveScore += 6;
        if (ai->monCanOneShotPlayerWithAnyMove == FALSE && (BattleRand(bsys) % 4 == 0)) // no kill
        {
            if (!ai->defenderImmuneToSleep)
                moveScore += 1;
            if (((BattlerKnowsMove(bsys, attacker, MOVE_DREAM_EATER, ai) == TRUE) ||
                (BattlerKnowsMove(bsys, attacker, MOVE_NIGHTMARE, ai) == TRUE)) &&
                (BattlerKnowsMove(bsys, attacker, MOVE_SNORE, ai) == FALSE) &&
                (BattlerKnowsMove(bsys, attacker, MOVE_SLEEP_TALK, ai) == FALSE))
                moveScore += 1;
            if ((BattlerKnowsMove(bsys, attacker, MOVE_HEX, ai) == TRUE)) // or partner
                moveScore += 1;
        }
        break;
    case MOVE_EFFECT_STATUS_POISON:
    case MOVE_EFFECT_STATUS_BADLY_POISON:
        moveScore += 6;
        if (ai->monCanOneShotPlayerWithAnyMove == FALSE && (BattleRand(bsys) % 3 == 0)) // no kill
        {
            if (!ai->defenderImmuneToPoison && ai->defenderPercentHP > 20)
            {
                if (ai->maxDamageReceived < ai->attackerHP / 2 &&
                    (BattlerKnowsMove(bsys, attacker, MOVE_HEX, ai) ||
                        BattlerKnowsMove(bsys, attacker, MOVE_VENOM_DRENCH, ai) ||
                        BattlerKnowsMove(bsys, attacker, MOVE_VENOSHOCK, ai) ||
                        ai->attackerAbility == ABILITY_MERCILESS))
                {
                    moveScore += 2;
                }
            }
        }
        break;
    case MOVE_EFFECT_STATUS_LEECH_SEED:
        if ((ctx->battlemon[ai->defender].effect_of_moves & MOVE_EFFECT_FLAG_LEECH_SEED_ACTIVE) ||
            HasType(ctx, ai->defender, TYPE_GRASS) ||
            ai->defenderAbility == ABILITY_MAGIC_GUARD)
        {
            moveScore -= NEVER_USE_MOVE_20;
        }
        else
        {
            moveScore += 6;
            if (ai->playerCanOneShotMon == FALSE && ai->defenderPercentHP > 20)
            {
                moveScore += 1;
                if (BattleRand(bsys) % 2) //50%
                    moveScore += 1;
            }
            if (ctx->battlemon[ai->defender].condition2 & STATUS2_ATTRACT || ctx->battlemon[ai->defender].condition2 & STATUS2_CONFUSION)
                moveScore += 1;
            if (ai->defenderCondition & (STATUS_POISON | STATUS_BURN | STATUS_PARALYSIS))
                moveScore += 1;
        }
        break;
    case MOVE_EFFECT_USE_RANDOM_LEARNED_MOVE_SLEEP:
    case MOVE_EFFECT_DAMAGE_WHILE_ASLEEP:
        if (ctx->battlemon[attacker].condition & STATUS_SLEEP)
        {
            moveScore += 6;
            if (ai->attackerLastUsedMove == MOVE_REST)
                moveScore += 10;
            if (BattleRand(bsys) % 2 == 0)
                moveScore += 1;
        }
        else
        {
            moveScore -= NEVER_USE_MOVE_20;
        }
        break;
    case MOVE_EFFECT_KO_MON_THAT_DEFEATED_USER:
        if (ai->monCanOneShotPlayerWithAnyMove && ai->attackerMovesFirst)
        {
            moveScore += 6;
            if (BattleRand(bsys) % 5 == 0)
                moveScore += 1;
        }
        else if (ai->defenderMovesFirst)
        {
            moveScore += 5;
            if (BattleRand(bsys) % 2)
                moveScore += 1;
        }
        break;
    case MOVE_EFFECT_CHANGE_TO_WATER_TYPE:
        if (HasType(ctx, ai->defender, TYPE_WATER))
            moveScore -= NEVER_USE_MOVE_20;
        else
            moveScore += 6;
        break;
    case MOVE_EFFECT_ATK_DOWN:
    case MOVE_EFFECT_ATK_DOWN_2:
    case MOVE_EFFECT_ATK_DOWN_3:
    case MOVE_EFFECT_ATK_DEF_DOWN:
        if (ai->defenderHasAtleastOnePhysicalMove)
        {
            moveScore += 5;
            if (ai->attackerHasMoldBreaker ||
                (ai->defenderAbility != ABILITY_CLEAR_BODY && 
                 ai->defenderAbility != ABILITY_WHITE_SMOKE && 
                 ai->defenderAbility != ABILITY_CONTRARY &&
                 ai->defenderAbility != ABILITY_HYPER_CUTTER))
            {
                moveScore += 1;
            }
            if (ai->defenderMovesFirst)
                moveScore -= 1;
        }
        else
        {
            moveScore -= NEVER_USE_MOVE_20;
		}
        break;
    case MOVE_EFFECT_SP_ATK_DOWN:
    case MOVE_EFFECT_SP_ATK_DOWN_2:
    case MOVE_EFFECT_SP_ATK_DOWN_3:
    case MOVE_EFFECT_SP_ATK_DOWN_2_OPPOSITE_GENDER:
    case MOVE_EFFECT_ATK_SP_ATK_DOWN:
        if (ai->defenderHasAtleastOneSpecialMove)
        {
            moveScore += 5;
            if (ai->attackerHasMoldBreaker ||
                (ai->defenderAbility != ABILITY_CLEAR_BODY &&
                    ai->defenderAbility != ABILITY_WHITE_SMOKE &&
                    ai->defenderAbility != ABILITY_CONTRARY))
            {
                moveScore += 1;
            }
            if (ai->defenderMovesFirst)
                moveScore -= 1;
        }
        else
        {
            moveScore -= NEVER_USE_MOVE_20;
        }
        break;
    case MOVE_EFFECT_DEF_DOWN:
    case MOVE_EFFECT_DEF_DOWN_2:
    case MOVE_EFFECT_DEF_DOWN_3:
        if (2 * ai->maxDamageReceived < ai->attackerHP && 2 * ai->attackerMaxDamageOutputMinRoll < ai->defenderHP)
        {
            if (ai->attackerHasMoldBreaker ||
                (ai->defenderAbility != ABILITY_CLEAR_BODY &&
                    ai->defenderAbility != ABILITY_WHITE_SMOKE &&
                    ai->defenderAbility != ABILITY_BIG_PECKS &&
                    ai->defenderAbility != ABILITY_CONTRARY))
            {
                moveScore += 7;
            }
        }
        break;
    case MOVE_EFFECT_SP_DEF_DOWN:
    case MOVE_EFFECT_SP_DEF_DOWN_2:
    case MOVE_EFFECT_SP_DEF_DOWN_3:
        if (2 * ai->maxDamageReceived < ai->attackerHP && 2 * ai->attackerMaxDamageOutputMinRoll < ai->defenderHP)
        {
            if (ai->attackerHasMoldBreaker ||
                (ai->defenderAbility != ABILITY_CLEAR_BODY &&
                    ai->defenderAbility != ABILITY_WHITE_SMOKE &&
                    ai->defenderAbility != ABILITY_CONTRARY))
            {
                moveScore += 7;
            }
        }
        break;    
    case MOVE_EFFECT_EVA_DOWN:
    case MOVE_EFFECT_EVA_DOWN_2:
    case MOVE_EFFECT_EVA_DOWN_3:
    case MOVE_EFFECT_ACC_DOWN:
    case MOVE_EFFECT_ACC_DOWN_2:
    case MOVE_EFFECT_ACC_DOWN_3:
        moveScore += 5;
        if (ai->attackerHasMoldBreaker ||
            (ai->defenderAbility != ABILITY_CLEAR_BODY &&
                ai->defenderAbility != ABILITY_WHITE_SMOKE &&
                ai->defenderAbility != ABILITY_KEEN_EYE &&
                ai->defenderAbility != ABILITY_CONTRARY))
        {
            moveScore += 1;
        }
        if (ai->defenderMovesFirst)
            moveScore -= 1;
        break;
    case MOVE_EFFECT_VENOM_DRENCH:
        if (ai->defenderCondition & STATUS_POISON_ALL)
        {
            if ((ai->defenderHasAtleastOnePhysicalMove && ctx->battlemon[ai->defender].states[STAT_ATTACK] >= 6) || 
                (ai->defenderHasAtleastOneSpecialMove && ctx->battlemon[ai->defender].states[STAT_SPATK] >= 6))
            {
                moveScore += 5;
                if (ai->attackerHasMoldBreaker ||
                    (ai->defenderAbility != ABILITY_CLEAR_BODY &&
                     ai->defenderAbility != ABILITY_WHITE_SMOKE &&
                     ai->defenderAbility != ABILITY_CONTRARY))
                {
                    moveScore += 1;
                }
                if (ai->defenderMovesFirst)
                    moveScore -= 1;
            }
            else
            {
                moveScore -= NEVER_USE_MOVE_20;
			}
        }
        else
            moveScore -= NEVER_USE_MOVE_20;
        break;
    default:
        break;
    }

    return moveScore;
}


BOOL LONG_CALL shouldRecover(struct BattleSystem* bsys, u32 attacker, u32 attackerMoveEffect, AIContext* ai)
{
    u32 recoverAmountPercent = 50;
    switch (attackerMoveEffect)
    {
    case MOVE_EFFECT_RECOVER_HEALTH_AND_SLEEP:
        recoverAmountPercent = 100;
        break;
    case MOVE_EFFECT_HEAL_HALF_MORE_IN_SUN:
        recoverAmountPercent = 67;
        break;
    default:
        break;
    }
    u32 recoverAmountHP = recoverAmountPercent * ai->attackerMaxHP / 100;
    if ((recoverAmountHP + ai->attackerHP) > ai->attackerMaxHP)
        recoverAmountHP = ai->attackerMaxHP - ai->attackerHP; // prevent overheal

    if (ai->attackerCondition & STATUS_BAD_POISON)
        return FALSE;
    if (ai->maxDamageReceived > recoverAmountHP)
        return FALSE;
    if (ai->attackerMovesFirst)
    {
        if (ai->playerCanOneShotMon && ai->maxDamageReceived < (ai->attackerHP + recoverAmountHP)) //cannot kill after heal
            return TRUE;
        if (!ai->playerCanOneShotMon)
        {
            if (ai->attackerPercentHP < 40)
                return TRUE;
            else if (ai->attackerPercentHP < 66)
                return FALSE + (BattleRand(bsys) % 2);
        }
    }
    else
    {
        if (ai->attackerPercentHP < 50)
            return TRUE;
        else if (ai->attackerPercentHP < 70 && (BattleRand(bsys) % 4) != 0) //75%
            return TRUE;
    }

    return FALSE;
}


int LONG_CALL CheckHPFlag(struct BattleSystem *bsys, u32 attacker, int i, AIContext *ai)
{
    int moveScore = 0;
    struct BattleStruct* ctx = bsys->sp;
	BOOL isHealingMove = TRUE;

    ai->attackerMove = ctx->battlemon[attacker].move[i];
    ai->attackerMoveEffect = ctx->moveTbl[ai->attackerMove].effect;

    BOOL aiShouldRecover = shouldRecover(bsys, attacker, ai->attackerMoveEffect, ai);
    if (ai->attackerPercentHP >= 85)
		moveScore -= 6;

    switch (ai->attackerMoveEffect)
    {
        //case MOVE_EFFECT_HIT_STRENGTH_SAP
        case MOVE_EFFECT_HEAL_HALF_REMOVE_FLYING_TYPE:
        case MOVE_EFFECT_RESTORE_HALF_HP:
            if (aiShouldRecover)
                moveScore += 7;
            else
				moveScore += 5;
            break;
        case MOVE_EFFECT_HEAL_HALF_MORE_IN_SUN:
            if (aiShouldRecover && ctx->field_condition & WEATHER_SUNNY_ANY)
                moveScore += 7;
			else if (shouldRecover(bsys, attacker, MOVE_EFFECT_RESTORE_HALF_HP, ai))
                moveScore += 7;
            else
                moveScore += 5;
            break;
        case MOVE_EFFECT_RECOVER_HEALTH_AND_SLEEP:
            if (aiShouldRecover)
            {
                if (ai->attackerItem == ITEM_CHESTO_BERRY || ai->attackerItem == ITEM_LUM_BERRY ||
					ai->attackerAbility == ABILITY_EARLY_BIRD || ai->attackerAbility == ABILITY_SHED_SKIN ||
                    BattlerKnowsMove(bsys, attacker, MOVE_SLEEP_TALK, ai) || BattlerKnowsMove(bsys, attacker, MOVE_SNORE, ai) ||
                    (ai->attackerAbility == ABILITY_HYDRATION && (ctx->field_condition & WEATHER_RAIN_ANY)))
                {
                    moveScore += 8;
                }
                else
                    moveScore += 7;
            }
            else
                moveScore += 5;
            break;
        default:
            isHealingMove = FALSE;
            break;
    }

    if (!isHealingMove)
        moveScore = 0;
    else if (ai->attackerPercentHP == 100)
        moveScore = 0 - NEVER_USE_MOVE_20;

    return moveScore;
}




/*-------------------------------Helper Functions--------------------------------*/

BOOL LONG_CALL battlerHasSoundBasedMove(struct BattleSystem* bsys, u32 battler, AIContext* ai)
{
    BOOL hasMove = FALSE;
    struct BattleStruct* ctx = bsys->sp;
    for (int i = 0; i < CLIENT_MAX; ++i)
    {
        u32 move = ctx->battlemon[battler].move[i];
        if (IsMoveSoundBased(move))
        {
            hasMove = TRUE;
            break;
        }
    }
    return hasMove;
}

BOOL LONG_CALL battlerKnowsFlinchingMove(struct BattleSystem* bsys, u32 battler, AIContext* ai)
{
    BOOL knowsMove = 0;
    struct BattleStruct* ctx = bsys->sp;
    for (int i = 0; i < CLIENT_MAX; ++i)
    {
        u32 move = ctx->battlemon[battler].move[i];
        switch (move)
        {
            case MOVE_AIR_SLASH:
            case MOVE_ASTONISH:
            case MOVE_BITE:
            case MOVE_BONE_CLUB:
            case MOVE_DARK_PULSE:
            case MOVE_DOUBLE_IRON_BASH:
            case MOVE_DRAGON_RUSH:
            case MOVE_EXTRASENSORY:
            case MOVE_FIERY_WRATH:
            case MOVE_FIRE_FANG:
            case MOVE_FLOATY_FALL:
            case MOVE_HEADBUTT:
            case MOVE_HEART_STAMP:
            case MOVE_HYPER_FANG:
            case MOVE_ICE_FANG:
            case MOVE_ICICLE_CRASH:
            case MOVE_IRON_HEAD:
            case MOVE_LOW_KICK:
            case MOVE_MOUNTAIN_GALE:
            case MOVE_NEEDLE_ARM:
            case MOVE_ROCK_SLIDE:
            case MOVE_ROLLING_KICK:
            case MOVE_STEAMROLLER:
            case MOVE_STOMP:
            case MOVE_THUNDER_FANG:
            case MOVE_TRIPLE_ARROWS:
            case MOVE_TWISTER:
            case MOVE_WATERFALL:
            case MOVE_ZEN_HEADBUTT:
            case MOVE_ZING_ZAP:
                knowsMove = TRUE;
                break;
            default:
                break;
        }
    }
    return knowsMove;
}

BOOL LONG_CALL battlerKnowsThawingMove(struct BattleSystem* bsys, u32 battler, AIContext* ai)
{
    BOOL knowsMove = 0;
    struct BattleStruct* ctx = bsys->sp;
    for (int i = 0; i < CLIENT_MAX; ++i)
    {
        u32 move = ctx->battlemon[battler].move[i];
        switch (move)
        {
        case MOVE_FLAME_WHEEL:
        case MOVE_SACRED_FIRE:
        case MOVE_FLARE_BLITZ:
		case MOVE_FUSION_FLARE:
        case MOVE_SCALD:
        case MOVE_STEAM_ERUPTION:
        case MOVE_BURN_UP:
        case MOVE_PYRO_BALL:
        case MOVE_SCORCHING_SANDS:
        case MOVE_MATCHA_GOTCHA:
            knowsMove = TRUE;
            break;
        default:
            break;
        }
    }
    return knowsMove;
}


/*Returns true if user has a particular move in their 4 move slots.*/
BOOL LONG_CALL BattlerKnowsMove(struct BattleSystem *bsys, u32 battler, u32 move, AIContext *ai)
{
    BOOL knowsMove = FALSE;
    struct BattleStruct *ctx = bsys->sp;
    for(int i = 0; i < 4; i++)
    {
        u32 battler_move_check = ctx->battlemon[battler].move[i];
        if (battler_move_check == move)
        {
            knowsMove = TRUE;
            break;
        }
    }
    return knowsMove;
}



/*Returns true if a given list has a certain value in it.*/
BOOL LONG_CALL IsInList(u32 value, const u16 list[], u16 ListLength) 
{
    BOOL output = FALSE;
    for (u16 i = 0; i < ListLength; i++) {
        if (value == list[i]) {
            output = TRUE;
            break;
        }
    }
    return output;
}

/*Returns true if the given battler has a move in a list.*/
BOOL LONG_CALL BattlerKnowsMoveInList(struct BattleSystem *bsys, u32 battler, const u16 MoveList[], u16 listLength, AIContext *ai) {
    struct BattleStruct *ctx = bsys->sp;
    BOOL knowsMove = FALSE;
    for (int i = 0; i < 4; i++) {
        for (int listIndex = 0; listIndex < listLength; listIndex++){
            if (ctx->battlemon[battler].move[i] == MoveList[listIndex]) {
                knowsMove = TRUE;
                break;
            }
        }
    }
    return knowsMove;
}

/*Returns true if the battler moves first. 
This function particularly accounts for 4 battlers, not just 2.*/
BOOL LONG_CALL BattlerMovesFirstDoubles(struct BattleSystem *bsys, struct BattleStruct *ctx, int mainBattler, int flag, AIContext *ai){
    BOOL movesFirst = TRUE;
    for (int otherBattler = 0; otherBattler < 4; otherBattler++){
        if(ctx->battlemon[otherBattler].hp != 0 && mainBattler != otherBattler){
            if(CalcSpeed(bsys, ctx, otherBattler, mainBattler, flag) != 1){
                return FALSE;
            }
        }
    }
    return movesFirst;
}


int LONG_CALL BattlerPositiveStatChangesSum(struct BattleSystem* bsys, u32 battler, AIContext* ai) {
    struct BattleStruct* ctx = bsys->sp;
    int statSum = 0;

    for (int stat = 0; stat < STAT_MAX; stat++) {
        if (ctx->battlemon[battler].states[stat] > 6) {
            statSum += ctx->battlemon[battler].states[stat];
        }
    }
    return statSum;
}

BOOL LONG_CALL IsMoveMultihit(u32 move)
{
    switch (move)
    {
    case MOVE_BONEMERANG:
    case MOVE_DOUBLE_HIT:
    case MOVE_DOUBLE_IRON_BASH:
    case MOVE_DOUBLE_KICK:
    case MOVE_DRAGON_DARTS:
    case MOVE_DUAL_CHOP:
    case MOVE_DUAL_WINGBEAT:
    case MOVE_GEAR_GRIND:
    case MOVE_SURGING_STRIKES:
    case MOVE_TACHYON_CUTTER:
    case MOVE_TRIPLE_DIVE:
    case MOVE_TWIN_BEAM:
    case MOVE_TWINEEDLE:
    case MOVE_WATER_SHURIKEN:
    case MOVE_ARM_THRUST:
    case MOVE_BARRAGE:
    case MOVE_BONE_RUSH:
    case MOVE_BULLET_SEED:
    case MOVE_COMET_PUNCH:
    case MOVE_DOUBLE_SLAP:
    case MOVE_FURY_ATTACK:
    case MOVE_FURY_SWIPES:
    case MOVE_ICICLE_SPEAR:
    case MOVE_PIN_MISSILE:
    case MOVE_ROCK_BLAST:
    case MOVE_SCALE_SHOT:
    case MOVE_SPIKE_CANNON:
    case MOVE_TAIL_SLAP:
    case MOVE_TRIPLE_AXEL:
    case MOVE_TRIPLE_KICK:
    case MOVE_POPULATION_BOMB:
        return TRUE;
    default:
        return FALSE;
    }
}

BOOL LONG_CALL canMoveKillBattler(u32 move, u32 damage, u32 defenderHP, u32 defenderMaxHP, BOOL attackerHasMoldBreaker, u32 defenderAbility, u32 defenderItem)
{
    BOOL canOneShot = FALSE;
	BOOL isMoveMultihit = IsMoveMultihit(move);
    if (damage >= defenderHP)
    {
        if (defenderHP == defenderMaxHP)
        {
			if ((attackerHasMoldBreaker || isMoveMultihit || defenderAbility != ABILITY_STURDY) && (defenderItem != ITEM_FOCUS_SASH || isMoveMultihit))
                canOneShot = TRUE;
        }
        else
            canOneShot = TRUE;
    }
	return canOneShot;
}

BOOL monDiesFromResidualDamage(struct BattleStruct* ctx, u32 attacker, u32 attackerCondition, BOOL isSeeded)
{
    // TODO order with heal
    //https://pokemondb.net/pokebase/409424/at-the-end-of-each-turn-what-goes-first-healing-or-damaging
    BOOL diesFromResidual = FALSE;
    u32 hp = ctx->battlemon[attacker].hp;
    u32 maxHp = ctx->battlemon[attacker].maxhp;
    u32 ability = ctx->battlemon[attacker].ability;
    u32 item = ctx->battlemon[attacker].item;
    u32 damageReceived = 0;

    if (isSeeded)
    {
        damageReceived += maxHp / 8;
    }

    if (attackerCondition & STATUS_BURN)
    {
        damageReceived += maxHp / 16;
    }
    else if (attackerCondition & STATUS_POISON)
    {
        damageReceived += maxHp / 8;
    }
    else if (attackerCondition & STATUS_BAD_POISON)
    {
        if ((attackerCondition & STATUS_POISON_COUNT) != STATUS_POISON_COUNT) {
            attackerCondition += 1 << 8;
        }
		int toxicDamageTicks = ((attackerCondition & STATUS_POISON_COUNT) >> 8); //TODO: check this
        damageReceived += (toxicDamageTicks * maxHp / 16);
    }
    if (ctx->field_condition & WEATHER_SANDSTORM_ANY)
    {
        if (!HasType(ctx, attacker, TYPE_ROCK) && !HasType(ctx, attacker, TYPE_GROUND) && !HasType(ctx, attacker, TYPE_STEEL)
            && ability != ABILITY_SAND_FORCE && ability != ABILITY_SAND_RUSH && ability != ABILITY_SAND_VEIL
            && ability != ABILITY_OVERCOAT && ability != ABILITY_MAGIC_GUARD
            && item != ITEM_SAFETY_GOGGLES)
        {
            damageReceived += maxHp / 16;
        }
    }
    else if (ctx->field_condition & WEATHER_HAIL_ANY)
    {
        if (!HasType(ctx, attacker, TYPE_ICE)
            && ability != ABILITY_ICE_BODY && ability != ABILITY_SNOW_CLOAK
            && ability != ABILITY_OVERCOAT && ability != ABILITY_MAGIC_GUARD
            && item != ITEM_SAFETY_GOGGLES)
        {
            damageReceived += maxHp / 16;
        }
    }
    else if (ctx->field_condition & WEATHER_SUNNY_ANY)
    {
        if (ability == ABILITY_DRY_SKIN || ability == ABILITY_SOLAR_POWER)
            damageReceived += maxHp / 8;
    }

    if (damageReceived > hp)
		diesFromResidual = TRUE;
	return diesFromResidual;
}


void LONG_CALL SetupStateVariables(struct BattleSystem *bsys, u32 attacker, u32 defender, AIContext *ai){
    struct BattleStruct *ctx = bsys->sp;
    u8 speedCalc;
    u32 effectivenessFlag = 0;
    ai->attacker = attacker;
    ai->defender = defender;
    ai->attackerSide = BATTLER_IS_ENEMY(ai->attacker);
    ai->defenderSide = BATTLER_IS_ENEMY(ai->defender);
    ai->attackerLevel = ctx->battlemon[attacker].level;
    ai->defenderLevel = ctx->battlemon[defender].level;
    ai->attackerAbility = ctx->battlemon[attacker].ability;
    ai->defenderAbility = ctx->battlemon[ai->defender].ability;
    ai->attackerItem = ctx->battlemon[attacker].item;
    ai->defenderItem = ctx->battlemon[ai->defender].item;
    ai->defenderHoldEffect = BattleItemDataGet(ctx, ai->defenderItem, 1);
    ai->defenderType1 = ctx->battlemon[ai->defender].type1;
    ai->defenderType2 = ctx->battlemon[ai->defender].type2;
    ai->attackerType1 = ctx->battlemon[attacker].type1;
    ai->attackerType2 = ctx->battlemon[attacker].type2;
    ai->attackerHP = ctx->battlemon[attacker].hp;
    ai->defenderHP = ctx->battlemon[ai->defender].hp;
    ai->attackerMaxHP = ctx->battlemon[attacker].maxhp;
    ai->defenderMaxHP = ctx->battlemon[ai->defender].maxhp;
    ai->attackerPercentHP = ai->attackerHP * 100 / ai->attackerMaxHP;
    ai->defenderPercentHP = ai->defenderHP * 100 / ai->defenderMaxHP; 
    ai->attackerSpeed = ctx->battlemon[attacker].speed;
    ai->defenderSpeed = ctx->battlemon[ai->defender].speed;

    ai->attackerCondition = ctx->battlemon[attacker].condition;
    ai->defenderCondition = ctx->battlemon[ai->defender].condition;

    ai->attackerPartyIndex = ctx->sel_mons_no[attacker];
    ai->attackerLastUsedMove = ctx->waza_no_old[ai->attacker];
    ai->defenderLastUsedMove = ctx->waza_no_old[ai->defender];
    ai->defenderLastUsedMoveEffect = ctx->moveTbl[ai->defenderLastUsedMove].effect;
    ai->defenderTurnsOnField = ctx->total_turn - ctx->battlemon[ai->defender].moveeffect.fakeOutCount;
    ai->attackerTurnsOnField = ctx->total_turn - ctx->battlemon[attacker].moveeffect.fakeOutCount;
    ai->flingPower = BattleItemDataGet(ctx, ai->attackerItem, ITEM_PARAM_FLING_POWER);

    ai->defenderMovesFirst = 0;
    ai->attackerMovesFirst = 0;
    ai->isSpeedTie = 0;
    ai->maxDamageReceived = 0;
    ai->attackerMaxDamageOutputMinRoll = 0;

    ai->isDefenderGrounded = IsClientGrounded(ctx, ai->defender);
	ai->defenderKnowsThawingMove = battlerKnowsThawingMove(bsys, ai->defender, ai);

    ai->isPartnerGrounded = FALSE;
    if ((BattleTypeGet(bsys) & (BATTLE_TYPE_MULTI | BATTLE_TYPE_DOUBLE | BATTLE_TYPE_TAG)) && ctx->battlemon[BATTLER_ALLY(attacker)].hp)
    {
        ai->isPartnerGrounded = IsClientGrounded(ctx, BATTLER_ALLY(attacker));
    }
    
    ai->attackerHasMoldBreaker = FALSE;
    if (ai->attackerAbility == ABILITY_MOLD_BREAKER || ai->attackerAbility == ABILITY_TERAVOLT || ai->attackerAbility == ABILITY_TURBOBLAZE)
        ai->attackerHasMoldBreaker = TRUE;

    ai->defenderHasMoldBreaker = FALSE;
    if (ai->defenderAbility == ABILITY_MOLD_BREAKER || ai->defenderAbility == ABILITY_TERAVOLT || ai->defenderAbility == ABILITY_TURBOBLAZE)
        ai->defenderHasMoldBreaker = TRUE;

    speedCalc = CalcSpeed(bsys, ctx, ai->defender, attacker, CALCSPEED_FLAG_NO_PRIORITY); //checks actual turn order with field state considered
    //evaluates to 0 if ai->defender > attacker (false)
    //and 1 if ai->defender < attacker (true)
    //if speed tie, then 2.
    
    if(speedCalc == 0){
        ai->defenderMovesFirst = 1;
    }
    else {
        ai->attackerMovesFirst = 1;
        if(speedCalc == 2)
            ai->isSpeedTie = 1;

    }

#ifdef BATLLE_DEBUG_OUTPUT
    debug_printf("SpeedCalc %d, defMovesFirst %d, attMovesFirst %d \n", speedCalc, ai->defenderMovesFirst, ai->attackerMovesFirst);
#endif // BATLLE_DEBUG_OUTPUT
    
	ai->isDefenderIncapacitated = FALSE;
    if ((ai->defenderCondition & STATUS_SLEEP) ||
        ((ai->defenderCondition & STATUS_FREEZE) && !ai->defenderKnowsThawingMove) ||
        (ctx->battlemon[attacker].condition2 & STATUS2_RECHARGE) ||
        ST_CheckIfInTruant(ctx, ai->defender))
    {
        ai->isDefenderIncapacitated = TRUE;
    }

    BOOL isDefenderImmuneToAnyStatus = FALSE;
    if ((ai->defenderCondition & STATUS_ALL) ||
        (ai->defenderAbility == ABILITY_GOOD_AS_GOLD) ||
        (ai->defenderAbility == ABILITY_COMATOSE) ||
        (ai->defenderAbility == ABILITY_PURIFYING_SALT) ||
        (ai->defenderAbility == ABILITY_SHIELDS_DOWN && ai->defenderPercentHP > 50) ||
        (ai->defenderAbility == ABILITY_LEAF_GUARD && ctx->field_condition & WEATHER_SUNNY_ANY) ||
        (ai->defenderAbility == ABILITY_HYDRATION && ctx->field_condition & WEATHER_RAIN_ANY) ||
        (ctx->side_condition[ai->defenderSide] & SIDE_STATUS_SAFEGUARD))
    {
        isDefenderImmuneToAnyStatus = TRUE;
    }

    ai->defenderImmuneToPoison = FALSE;
    if (isDefenderImmuneToAnyStatus ||
        ai->defenderAbility == ABILITY_MAGIC_GUARD || ai->defenderAbility == ABILITY_IMMUNITY || ai->defenderAbility == ABILITY_POISON_HEAL ||
        (ai->isDefenderGrounded && ctx->terrainOverlay.type == MISTY_TERRAIN) ||
        ((HasType(ctx, ai->defender, TYPE_POISON) || HasType(ctx, ai->defender, TYPE_STEEL)) && ai->attackerAbility != ABILITY_CORROSION))
    {
        ai->defenderImmuneToPoison = TRUE;
    }

	ai->defenderImmuneToParalysis = FALSE;
    if (isDefenderImmuneToAnyStatus ||
        ai->defenderAbility == ABILITY_LIMBER ||
        (ai->isDefenderGrounded && ctx->terrainOverlay.type == MISTY_TERRAIN) ||
        HasType(ctx, ai->defender, TYPE_ELECTRIC))
    {
        ai->defenderImmuneToParalysis = TRUE;
    }

    ai->defenderImmuneToBurn = FALSE;
    if (isDefenderImmuneToAnyStatus ||
		ai->defenderAbility == ABILITY_WATER_VEIL || ai->defenderAbility == ABILITY_THERMAL_EXCHANGE || ai->defenderAbility == ABILITY_MAGIC_GUARD || ai->defenderAbility == ABILITY_WATER_BUBBLE ||
        (ai->isDefenderGrounded && ctx->terrainOverlay.type == MISTY_TERRAIN) ||
        HasType(ctx, ai->defender, TYPE_FIRE))
    {
        ai->defenderImmuneToBurn = TRUE;
    }

    ai->defenderImmuneToSleep = FALSE;
    if (isDefenderImmuneToAnyStatus ||
        ai->defenderAbility == ABILITY_VITAL_SPIRIT || ai->defenderAbility == ABILITY_INSOMNIA ||
        (ai->isDefenderGrounded && (ctx->terrainOverlay.type == MISTY_TERRAIN || ctx->terrainOverlay.type == ELECTRIC_TERRAIN)))
    {
        ai->defenderImmuneToSleep = TRUE;
    }

    ai->attackerMoveEffectiveness = 0;
    ai->partySizeAttacker = Battle_GetClientPartySize(bsys, attacker);
    ai->livingMembersAttacker = 0;
    ai->partySizeDefender = Battle_GetClientPartySize(bsys, ai->defender);
    ai->livingMembersDefender = 0;

    for (int i = 0; i < ai->partySizeAttacker; i++)
    {
        struct PartyPokemon * currentMonAttacking = Battle_GetClientPartyMon(bsys, attacker, i);

        if(!(GetMonData(currentMonAttacking, MON_DATA_HP, 0) == 0 ||
        GetMonData(currentMonAttacking, MON_DATA_SPECIES_OR_EGG, 0) == 0||
        GetMonData(currentMonAttacking, MON_DATA_SPECIES_OR_EGG, 0) == SPECIES_EGG))
        {

            ai->livingMembersAttacker++;
        }
    }


    for (int i = 0; i < ai->partySizeDefender; i++) {
        struct PartyPokemon * currentMonDefending = Battle_GetClientPartyMon(bsys, ai->defender, i);
        if(!(GetMonData(currentMonDefending, MON_DATA_HP, 0) == 0 ||
        GetMonData(currentMonDefending, MON_DATA_SPECIES_OR_EGG, 0) == 0||
        GetMonData(currentMonDefending, MON_DATA_SPECIES_OR_EGG, 0) == SPECIES_EGG)){
            ai->livingMembersDefender++;
        }
    }

    ai->attackerMovesKnown = GetBattlerLearnedMoveCount(bsys, ctx, attacker);
    ai->attackerHasSupereffectiveMove = 0;
    ai->attackerHasDamagingMove = 0;

    int specialMovePower = 0;

    /*Loop over defender's moves, and compute the max of all min roll damages*/
    int currentReceivedDamage = 0;
    int highestDamageMoveIndex = 0;
    ai->playerCanOneShotMon = FALSE;
    for (int i = 0; i < GetBattlerLearnedMoveCount(bsys, ctx, ai->defender); i++){
        specialMovePower = 0;
        u32 defenderMoveCheck = ctx->battlemon[defender].move[i];
        struct BattleMove defenderMove = ctx->moveTbl[defenderMoveCheck];

        if(defenderMove.split != SPLIT_STATUS){
            specialMovePower = AdjustUnusualMovePower(bsys, ai->defender, ai->attacker, defenderMove.effect, ai->defenderPercentHP);
            currentReceivedDamage = CalcBaseDamage(bsys, ctx, defenderMoveCheck, ctx->side_condition[ai->attackerSide],ctx->field_condition, specialMovePower, defenderMove.type, ai->defender, ai->attacker, 0);
            currentReceivedDamage = ServerDoTypeCalcMod(bsys, ctx, defenderMoveCheck, 0, ai->defender, ai->attacker, currentReceivedDamage, &effectivenessFlag);
            currentReceivedDamage = currentReceivedDamage * 92 / 100;
            currentReceivedDamage = AdjustUnusualMoveDamage(bsys, ai->defenderLevel, ai->defenderHP, ai->attackerHP, currentReceivedDamage, defenderMove.effect, ai->defenderAbility, ai->defenderItem);
            debug_printf("move %d: %d, damage %d > def Hp %d\n", i, defenderMoveCheck, currentReceivedDamage, ai->attackerHP);
            BOOL playerCanOneShotMonWithMove = canMoveKillBattler(defenderMoveCheck, currentReceivedDamage, ai->attackerHP, ai->attackerMaxHP, ai->defenderHasMoldBreaker, ai->attackerAbility, ai->attackerItem);
            if (playerCanOneShotMonWithMove)
                ai->playerCanOneShotMon = TRUE;
            
            if(currentReceivedDamage > ai->maxDamageReceived)
            {
                ai->maxDamageReceived = currentReceivedDamage;
                highestDamageMoveIndex = i;
            }
            if (defenderMove.split == SPLIT_SPECIAL)
                ai->defenderHasAtleastOneSpecialMove = 1;
            else
                ai->defenderHasAtleastOnePhysicalMove = 1;
        }
        //debug_printf("Max damage received for move %d is: %d\n",i,currentReceivedDamage);
    }

#ifdef BATLLE_DEBUG_OUTPUT
    debug_printf("Overall Max damage received from %i:%i is %d > %d attHP\n", highestDamageMoveIndex, ctx->battlemon[ai->defender].move[highestDamageMoveIndex], ai->maxDamageReceived, ai->attackerHP);
#endif // BATLLE_DEBUG_OUTPUT
 
    /*Loop over all moves for checking certain conditions*/
    /*Set up max roll damage calculations for all known moves.
    Also check if user has a super-effective move*/
    ai->monCanOneShotPlayerWithAnyMove = FALSE;
    for(int i = 0; i < ai->attackerMovesKnown; i++)
    {

        u32 attackerMoveCheck = ctx->battlemon[attacker].move[i];
        struct BattleMove move = ctx->moveTbl[attackerMoveCheck];
        specialMovePower = 0;

        if(move.split != SPLIT_STATUS)
        {
            AITypeCalc(ctx, attackerMoveCheck, move.type, ai->attackerAbility, ai->defenderAbility, ai->defenderHoldEffect, ai->defenderType1, ai->defenderType2, &ai->attackerMoveEffectiveness);
            if (ai->attackerMoveEffectiveness == MOVE_STATUS_FLAG_SUPER_EFFECTIVE)
                ai->attackerHasSupereffectiveMove = 1;

            specialMovePower = AdjustUnusualMovePower(bsys, attacker, ai->defender, move.effect, ai->attackerPercentHP);

            ai->attackerMinRollMoveDamages[i] = CalcBaseDamage(bsys, ctx, attackerMoveCheck, ctx->side_condition[ai->defenderSide],ctx->field_condition, specialMovePower, move.type, ai->attacker, ai->defender, 0);
            ai->attackerMinRollMoveDamages[i] = ServerDoTypeCalcMod(bsys, ctx, attackerMoveCheck, 0, attacker, ai->defender, ai->attackerMinRollMoveDamages[i], &effectivenessFlag);
            ai->attackerMinRollMoveDamages[i] = ai->attackerMinRollMoveDamages[i]*92 / 100; //85% is min roll.
            ai->attackerMinRollMoveDamages[i] = AdjustUnusualMoveDamage(bsys, ai->attackerLevel, ai->attackerHP, ai->defenderHP, ai->attackerMinRollMoveDamages[i], move.effect, ai->attackerAbility, ai->attackerItem);
            ai->monCanOneShotPlayerWithMove[i] = canMoveKillBattler(attackerMoveCheck, ai->attackerMinRollMoveDamages[i], ai->defenderHP, ai->defenderMaxHP, ai->attackerHasMoldBreaker, ai->defenderAbility, ai->defenderItem);
            if (ai->monCanOneShotPlayerWithMove[i])
				ai->monCanOneShotPlayerWithAnyMove = TRUE;
#ifdef BATLLE_DEBUG_OUTPUT
            debug_printf("move %d: %d, damage %d > def Hp %d\n", i, attackerMoveCheck, ai->attackerMinRollMoveDamages[i], ai->defenderHP);
#endif // BATLLE_DEBUG_OUTPUT
        }
       
        /*Record our highest damage output*/
        if(ai->attackerMinRollMoveDamages[i] > ai->attackerMaxDamageOutputMinRoll){
            ai->attackerMaxDamageOutputMinRoll = ai->attackerMinRollMoveDamages[i];
        }

        if(ai->attackerMinRollMoveDamages[i] > 0){
            ai->attackerHasDamagingMove = 1;
        }
    }
}