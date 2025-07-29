#include "../../include/types.h"
#include "../../include/config.h"
#include "../../include/battle.h"
#include "../../include/mega.h"
#include "../../include/pokemon.h"
#include "../../include/trainer_ai.h"
#include "../../include/constants/ability.h"
#include "../../include/constants/species.h"
#include "../../include/constants/move_effects.h"
#include "../../include/constants/battle_script_constants.h"
#include "../../include/constants/battle_message_constants.h"
#include "../../include/custom/custom_ai.h"


BOOL TrainerAI_ShouldSwitch(struct BattleSystem * bsys, int battler);

int TrainerAI_PickCommand(struct BattleSystem * bsys, int battler)
{
    debug_printf("TrainerAI_PickCommand:\n");
    u32 battleType = BattleTypeGet(bsys);
    if (battleType == BATTLE_TYPE_TRAINER || (battleType & (BATTLE_TYPE_MULTI | BATTLE_TYPE_DOUBLE | BATTLE_TYPE_TAG)))
    {
        if (TrainerAI_ShouldSwitch(bsys, battler))
            return PLAYER_INPUT_PARTY;
    }
    
    return PLAYER_INPUT_FIGHT;
}

BOOL TrainerAI_ShouldSwitch(struct BattleSystem * bsys, int attacker)
{
    debug_printf("TrainerAI_ShouldSwitch:\n");
    struct BattleStruct* ctx = bsys->sp;
    u32 battleType = BattleTypeGet(bsys);

    if (battleType & (BATTLE_TYPE_MULTI | BATTLE_TYPE_DOUBLE | BATTLE_TYPE_TAG))
        return FALSE;

    if (CantEscape(bsys, ctx, attacker, NULL))
        return FALSE;

    struct AIContext aictx = { 0 };
    struct AIContext* ai = &aictx;
    u32 defender = BATTLER_OPPONENT(attacker);
    debug_printf("TrainerAI_ShouldSwitch: Attacker %d, defender %d\n", attacker, defender);

    SetupStateVariables(bsys, attacker, defender, ai);

    if (ai->livingMembersAttacker < 2)
        return FALSE;

    if (ai->monCanOneShotPlayerWithAnyMove && ai->attackerMovesFirst)
        return FALSE;

    if (ai->monCanOneShotPlayerWithAnyMove && ai->defenderMovesFirst && !ai->playerCanOneShotMonWithAnyMove)
        return FALSE;

    if (ai->attackerMon.percenthp < 67)
        return FALSE;

    BOOL onlyIneffectiveMoves = TRUE;
    for (int k = 0; k < ai->attackerMovesKnown; ++k)
    {
        u32 attackerMoveno = ctx->battlemon[attacker].move[k];
        struct BattleMove attackerMove = ctx->moveTbl[attackerMoveno];

        if (attackerMoveno != MOVE_NONE
            && (attackerMoveno == ctx->battlemon[attacker].moveeffect.moveNoChoice
                || attackerMoveno == ctx->battlemon[attacker].moveeffect.encoredMove))
        {
            if (ai->effectivenessOnPlayer[k] < TYPE_MUL_NORMAL || IsChoicedMoveConsidedUseless(attackerMoveno, attackerMove.split))
            {
                onlyIneffectiveMoves = TRUE;
                break;
            }
        }

        if (attackerMove.split != SPLIT_STATUS)
        {
            switch (ai->effectivenessOnPlayer[k])
            {
            case TYPE_MUL_NORMAL:
            case TYPE_MUL_SUPER_EFFECTIVE:
            case TYPE_MUL_DOUBLE_SUPER_EFFECTIVE:
            case TYPE_MUL_TRIPLE_SUPER_EFFECTIVE:
                onlyIneffectiveMoves = FALSE;
                break;
            case TYPE_MUL_TRIPLE_NOT_EFFECTIVE:
            case TYPE_MUL_DOUBLE_NOT_EFFECTIVE:
            case TYPE_MUL_NOT_EFFECTIVE:
                if (attackerMove.effect == MOVE_EFFECT_SWITCH_HIT)
                {
                    if (ai->attackerMovesFirst || (ai->defenderMovesFirst && !ai->playerCanOneShotMonWithAnyMove))
                        onlyIneffectiveMoves = FALSE;
                }
                break;
            default: //TYPE_MUL_NO_EFFECT
                break;
            }
        }
    }

    if ((ai->attackerHasAttackingMoves && onlyIneffectiveMoves) || (ctx->battlemon[attacker].effect_of_moves & MOVE_EFFECT_FLAG_PERISH_SONG_ACTIVE))
    {
        int score = 0;
        int switchToSlot = BattleAI_PostKOSwitchIn_Internal(bsys, attacker, &score, TRUE);
		int rand = BattleRand(bsys) % 2; //Change this to 2 for a 50% chance, or 3 to 33%, or 4 for 25% ...
		debug_printf("TrainerAI_ShouldSwitch: Only ineffective moves/perishSong, consider(%d) switching to slot %d with score %d\n", rand, switchToSlot, score);
        if (score >= 103 && rand == 0) //set to 103 to consider being faster  //TODO:consider not being 2HKO and slower
        {
            ctx->aiSwitchedPartySlot[attacker] = switchToSlot;
            return TRUE;
        }
    }

    return FALSE;
}


BOOL AI_PerishSongKO(struct BattleStruct* battleCtx, int battler)
{
    if (battleCtx->battlemon[battler].effect_of_moves & MOVE_EFFECT_FLAG_PERISH_SONG_ACTIVE) {
        battleCtx->aiSwitchedPartySlot[battler] = 6;
        return TRUE;
    }

    return FALSE;
}