#include "../../include/types.h"
#include "../../include/config.h"
#include "../../include/battle.h"
#include "../../include/mega.h"
#include "../../include/pokemon.h"
#include "../../include/trainer_ai.h"
#include "../../include/constants/ability.h"
#include "../../include/constants/species.h"
#include "../../include/constants/battle_script_constants.h"
#include "../../include/constants/battle_message_constants.h"
#include "../../include/custom/custom_ai.h"


BOOL TrainerAI_ShouldSwitch(struct BattleSystem * bsys, int battler);

int TrainerAI_PickCommand(struct BattleSystem * bsys, int battler)
{
    debug_printf("TrainerAI_PickCommand:\n");
    if (TrainerAI_ShouldSwitch(bsys, battler))
        return PLAYER_INPUT_PARTY;
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

    int partySizeAttacker = Battle_GetClientPartySize(bsys, attacker);
    int livingMembersAttacker = 0;

    for (int i = 0; i < partySizeAttacker; i++)
    {
        struct PartyPokemon* current = Battle_GetClientPartyMon(bsys, attacker, i);
        if (!(GetMonData(current, MON_DATA_HP, 0) == 0 ||
            GetMonData(current, MON_DATA_SPECIES_OR_EGG, 0) == 0 ||
            GetMonData(current, MON_DATA_SPECIES_OR_EGG, 0) == SPECIES_EGG))
        {

           livingMembersAttacker++;
        }
    }
    if (livingMembersAttacker < 2)
        return FALSE;

    struct AI_sDamageCalc attackerMon = { 0 };
    struct AI_sDamageCalc defenderMon = { 0 };
    u32 defender = BATTLER_OPPONENT(attacker);
	debug_printf("TrainerAI_ShouldSwitch: Attacker %d, defender %d\n", attacker, defender);

    FillDamageStructFromBattleMon(bsys, ctx, &attackerMon, attacker);
    FillDamageStructFromBattleMon(bsys, ctx, &defenderMon, defender);

    u32 effectivenessFlag = 0;
	u32 effectivenessOnPlayer[CLIENT_MAX] = { 0 };
    int attackerMovesKnown = GetBattlerLearnedMoveCount(bsys, ctx, attacker);
    for (int j = 0; j < attackerMovesKnown; j++)
    {
        u32 attackerMoveno = ctx->battlemon[attacker].move[j];
        struct BattleMove attackerMove = ctx->moveTbl[attackerMoveno];
        if (attackerMove.split != SPLIT_STATUS && attackerMove.power > 1)
        {
            u8 movetype = GetAdjustedMoveTypeBasics(ctx, attackerMoveno, attackerMon.ability, attackerMove.type);
            effectivenessOnPlayer[j] = BattleAI_GetTypeEffectiveness(bsys, ctx, movetype, &effectivenessFlag, &attackerMon, &defenderMon);
        }
        debug_printf("move %d:%d has effectiveness %d\n", j, attackerMoveno, effectivenessOnPlayer[j]);
    }

    BOOL onlyIneffectiveMoves = BattleAI_AttackerHasOnlyIneffectiveMoves(ctx, attacker, attackerMovesKnown, effectivenessOnPlayer);
    if (attackerMon.percenthp > 67
        && (onlyIneffectiveMoves || ((ctx->battlemon[attacker].effect_of_moves & MOVE_EFFECT_FLAG_PERISH_SONG_ACTIVE) && (BattleRand(bsys) % 2))))
    {
        int score = 0;
        int switchToSlot = BattleAI_PostKOSwitchIn_Internal(bsys, attacker, &score);
        int rand = BattleRand(bsys) % 2;
		debug_printf("TrainerAI_ShouldSwitch: Only ineffective moves, consider(%d) switching to slot %d with score %d\n", rand, switchToSlot, score);
        if (score >= 102 && rand == 0)
        {
            ctx->aiSwitchedPartySlot[attacker] = switchToSlot;
            return TRUE;
        }
    }

    return FALSE;

    /*     
    int i;
    u32 battler1, battler2, maxHP = 0;
    u32 battleType;
    int end;
    struct PartyPokemon *mon;
    struct BattleStruct *battleCtx = battleSys->sp;
    battleType = BattleTypeGet(battleSys);

    if ((battleType & BATTLE_TYPE_TRAINER) || IsClientEnemy(battleSys, battler) == 0) {
        // 50% of the time switch to mon with next highest hp
        if (BattleRand(battleSys) & 1)
        {
            battler1 = battler;
            if (battleType & BATTLE_TYPE_TAG
                || battleType & BATTLE_TYPE_MULTI)
            {
                battler2 = battler1;
            } else {
                battler2 = BATTLER_ALLY(battler1);
            }
            end = Battle_GetClientPartySize(battleSys, battler);
            for (i = 0; i < end; i++)
            {
                u32 currHP = 0;
                mon = Battle_GetClientPartyMon(battleSys, battler, i);
                currHP = GetMonData(mon, MON_DATA_HP, NULL);
                if (currHP != 0 && currHP > maxHP
                    && i != battleCtx->sel_mons_no[battler1]
                    && i != battleCtx->sel_mons_no[battler2]
                    && i != battleCtx->aiSwitchedPartySlot[battler1]
                    && i != battleCtx->aiSwitchedPartySlot[battler2])
                {
                    maxHP = currHP;
                    battleCtx->aiSwitchedPartySlot[battler] = i;
                }
            }
            if (battleCtx->aiSwitchedPartySlot[battler] != 6)
                return TRUE;
        }
    }
    return FALSE;
    */
}


BOOL AI_PerishSongKO(struct BattleStruct* battleCtx, int battler)
{
    if (battleCtx->battlemon[battler].effect_of_moves & MOVE_EFFECT_FLAG_PERISH_SONG_ACTIVE) {
        battleCtx->aiSwitchedPartySlot[battler] = 6;
        return TRUE;
    }

    return FALSE;
}