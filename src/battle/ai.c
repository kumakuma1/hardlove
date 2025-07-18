#include "../../include/battle.h"
#include "../../include/config.h"
#include "../../include/debug.h"
#include "../../include/pokemon.h"
#include "../../include/types.h"
#include "../../include/constants/ability.h"
#include "../../include/constants/hold_item_effects.h"
#include "../../include/constants/battle_script_constants.h"
#include "../../include/constants/item.h"
#include "../../include/constants/move_effects.h"
#include "../../include/constants/moves.h"
#include "../../include/constants/species.h"
#include "../../include/constants/file.h"
#include "../../include/overlay.h"
#include "../../include/trainer_ai.h"
#include "../../include/q412.h"



// function declarations
void LONG_CALL AITypeCalc(struct BattleStruct *sp, u32 move, u32 type, int atkAbility, int defAbility, int held_effect, int type1, int type2, u32 *flag);
int LONG_CALL BattleAI_PostKOSwitchIn(struct BattleSystem *battleSys, int battler);

int LONG_CALL AI_CalcBaseDamage(void *bw, struct BattleStruct *sp, int moveno, u32 side_cond,u32 field_cond, u16 pow, u8 type, u8 enemyMonSlot, u8 critical, BOOL isPPAttacker, struct PartyPokemon *pp);
int LONG_CALL AI_ServerDoTypeCalcMod(void *bw UNUSED, struct BattleStruct *sp, int move_no, int move_type, int attack_client, int defence_client, int damage, u32 *flag, BOOL usePPForAttacker, BOOL usePPForDefender, struct PartyPokemon *pp);
u8 LONG_CALL BattleAI_CalcSpeed(void *bw, struct BattleStruct *sp, int enemyMonSlot, struct PartyPokemon* partyMon, int flag);
int LONG_CALL BattleAI_ServerDoTypeCalcMod(void *bw UNUSED, struct BattleStruct *sp, int move_no, int move_type, int enemyMon, int damage, u32 *flag, struct PartyPokemon *pp, BOOL isPPAttacker);
u8 LONG_CALL AI_MoldBreakerAbilityCheck(int attackerAbility, int defenderAbility, int ability);


/**
 *  @brief set up type calc flags for AI to respect and make decisions based on
 *
 *  @param sp global battle structure
 *  @param move index of the move being used
 *  @param atkAbility ability of the attacker
 *  @param defAbility ability of the defender
 *  @param held_effect held item effect of the DEFENDER (this was erroneously labeled before)
 *  @param type1 primary type of defender
 *  @param type2 secondary type of defender
 *  @param flag flags to modify so that the AI knows what decision to make
 */
void LONG_CALL AITypeCalc(struct BattleStruct *sp, u32 move, u32 type, int atkAbility, int defAbility, int held_effect, int type1, int type2, u32 *flag)
{
    int i;
    u8 typeLocal;

    if (move == MOVE_STRUGGLE)
    {
        return;
    }

    typeLocal = GetAdjustedMoveTypeBasics(sp, move, atkAbility, type); // not just normalize, now others

    if ((atkAbility != ABILITY_MOLD_BREAKER)
     && (defAbility == ABILITY_LEVITATE)
     && (typeLocal == TYPE_GROUND)
     && ((sp->field_condition & FIELD_STATUS_GRAVITY) == 0)
     && (held_effect != HOLD_EFFECT_SPEED_DOWN_GROUNDED))
    {
        flag[0] |= MOVE_STATUS_FLAG_NOT_EFFECTIVE; // not "not very effective", ineffective
    }
    else if ((typeLocal == TYPE_GROUND)
          && ((sp->field_condition & FIELD_STATUS_GRAVITY) == 0)
          && (held_effect == HOLD_EFFECT_UNGROUND_DESTROYED_ON_HIT))
    {
        flag[0] |= MOVE_STATUS_FLAG_NOT_EFFECTIVE; // not "not very effective", ineffective
    }
    else
    {
        i = 0;
        while (TypeEffectivenessTable[i][0] != TYPE_ENDTABLE)
        {
            if (TypeEffectivenessTable[i][0] == TYPE_FORESIGHT)
            {
                if (atkAbility == ABILITY_SCRAPPY || atkAbility == ABILITY_MINDS_EYE)
                {
                    break;
                }
                else
                {
                    i++;
                    continue;
                }
            }
            // TODO: Handle Primal Weathers so that the AI knows about them
            if (TypeEffectivenessTable[i][0] == typeLocal)
            {
                if (TypeEffectivenessTable[i][1] == type1)
                {
                    if (AI_ShouldUseNormalTypeEffCalc(sp, held_effect, i) == TRUE)
                    {
                        AI_TypeCheckCalc(TypeEffectivenessTable[i][2], flag);
                    }
                }
                if ((TypeEffectivenessTable[i][1] == type2) && (type1 != type2)) // haven't already run the type yet
                {
                    if (AI_ShouldUseNormalTypeEffCalc(sp, held_effect, i) == TRUE)
                    {
                        AI_TypeCheckCalc(TypeEffectivenessTable[i][2], flag);
                    }
                }
            }
            i++;
        }
    }

    if ((atkAbility != ABILITY_MOLD_BREAKER)
     && (defAbility == ABILITY_WONDER_GUARD)
     && (ShouldDelayTurnEffectivenessChecking(sp, move))
     && (((flag[0] & MOVE_STATUS_FLAG_SUPER_EFFECTIVE) == 0) || ((flag[0] & (MOVE_STATUS_FLAG_SUPER_EFFECTIVE | MOVE_STATUS_FLAG_NOT_VERY_EFFECTIVE)) == (MOVE_STATUS_FLAG_SUPER_EFFECTIVE | MOVE_STATUS_FLAG_NOT_VERY_EFFECTIVE))))
    {
        flag[0] |= MOVE_STATUS_FLAG_NOT_EFFECTIVE; // not "not very effective", ineffective
    }

    return;
}


/*Returns the true move power of variable power moves like reversal or magnitude*/
int AdjustUnusualMovePower(struct BattleSystem* bsys UNUSED, u32 attacker UNUSED, u32 defender UNUSED, int moveEffect, int attackerPercentHP)
{
    //struct BattleStruct *ctx = bsys->sp;
    switch(moveEffect){
        case MOVE_EFFECT_RANDOM_POWER_10_CASES:
            return 71; //average power
        case MOVE_EFFECT_INCREASE_POWER_WITH_LESS_HP:
            if(attackerPercentHP <= 4){
                return 200;
            }
            else if(attackerPercentHP <= 10){
                return 150;
            }
            else if(attackerPercentHP <= 21){
                return 100;
            }
            else if(attackerPercentHP <= 35){
                return 80;
            }
            else if(attackerPercentHP <= 69){
                return 40;
            }
            else{
                return 20;
            }
    }
    return 0;
}


u8 calcHitsToKill(u32 attackerHighestDamage, u32 attackerAbility, u32 defenderHP, u32 defenderMaxHP, u32 defenderAbility, u32 defenderItem)
{
    u8 hitsToKill = 1;
    if (attackerHighestDamage >= defenderHP)
    {
        hitsToKill = 1;
    }
    else
    {
        hitsToKill = defenderHP / attackerHighestDamage;
        if (defenderHP % attackerHighestDamage != 0)
            hitsToKill++;
    }

    if (defenderItem == ITEM_FOCUS_SASH && defenderHP == defenderMaxHP)
        hitsToKill++;
    if (AI_MoldBreakerAbilityCheck(attackerAbility, defenderAbility, ABILITY_STURDY) == TRUE && defenderHP == defenderMaxHP)
        hitsToKill++;
    return hitsToKill;
}


int LONG_CALL BattleAI_PostKOSwitchIn(struct BattleSystem *bsys, int attacker)
{
    debug_printf("BattleAI_PostKOSwitchIn\n");
    
    struct BattleStruct *ctx = bsys->sp;
    int battleType = BattleTypeGet(bsys);
    struct PartyPokemon *mon;
    u8 speedCalc;
	u32 defender = BATTLER_OPPONENT(attacker);   //default for singles -- updated in the doubles section
    u8 slot1, slot2;
    u16 move = 0;
    u16 monSpecies;
    u32 minRollMaxDamageDealt[6] = {0};
    u32 minRollMaxDamageReceived[6] = {0};
    u16 switchInScore[6] = {0};
    int partySize = 0;
    u32 effectivenessFlag = 0;
    int picked = 6; // in Order
    u32 moveDamage = 0;
    u32 moveDamageMax = 0;
    u32 moveDamageMin = 0;

    slot1 = attacker;
    slot2 = slot1;
  
  if (battleType & (BATTLE_TYPE_TAG | BATTLE_TYPE_MULTI | BATTLE_TYPE_DOUBLE))
      slot2 = BATTLER_ALLY(attacker);

    u32 defenderHP = ctx->battlemon[defender].hp;
    u32 defenderMaxHP = ctx->battlemon[defender].maxhp;
    u32 defenderAbility = ctx->battlemon[defender].ability;
    u32 defenderItem = ctx->battlemon[defender].item;
    u8 defenderLevel = ctx->battlemon[defender].level;
    int defenderPercentHP = defenderHP*100/defenderMaxHP;

    partySize = Battle_GetClientPartySize(bsys, attacker);
    for (int i = 0; i < partySize; i++)
    {
        mon = Battle_GetClientPartyMon(bsys, attacker, i);
        monSpecies = GetMonData(mon, MON_DATA_SPECIES_OR_EGG, 0);
        debug_printf("Slot %d:%d hp:%d,\n", i, monSpecies, GetMonData(mon, MON_DATA_HP, 0));
        debug_printf("sel_m1 %d, sel_m2 %d, switchSl1 %d, switchSl1 %d\n", ctx->sel_mons_no[slot1], ctx->sel_mons_no[slot2], ctx->aiSwitchedPartySlot[slot1], ctx->aiSwitchedPartySlot[slot2]);
        if (monSpecies != SPECIES_NONE && monSpecies != SPECIES_EGG && GetMonData(mon, MON_DATA_HP, 0)
            && i != ctx->sel_mons_no[slot1]
            && i != ctx->sel_mons_no[slot2]
            && i != ctx->aiSwitchedPartySlot[slot1]
            && i != ctx->aiSwitchedPartySlot[slot2])
        {
            switchInScore[i] = 100;

            u32 attackerHP = GetMonData(mon, MON_DATA_HP, 0);
            u32 attackerMaxHP = GetMonData(mon, MON_DATA_MAXHP, 0);
            u32 attackerAbility = GetMonData(mon, MON_DATA_ABILITY, 0);
            u32 attackerItem = GetMonData(mon, MON_DATA_HELD_ITEM, 0);
            int attackerPercentHP = attackerHP*100/attackerMaxHP;

            speedCalc = BattleAI_CalcSpeed(bsys, ctx, defender, mon, CALCSPEED_FLAG_NO_PRIORITY); //checks actual turn order with field state considered
            
            for(int j = 0; j < CLIENT_MAX; ++j)
            {
                moveDamage = 0;
                moveDamageMax = 0;
                moveDamageMin = 0;
                move = GetMonData(mon, MON_DATA_MOVE1 + j, NULL);
                if (move != MOVE_NONE)
                {
                    struct BattleMove attackerMove = ctx->moveTbl[move];
                    moveDamage = AdjustUnusualMovePower(bsys, attacker, defender, attackerMove.effect, attackerPercentHP);
                    
                    if(attackerMove.split != SPLIT_STATUS && attackerMove.power)
                    {
                        moveDamage = AI_CalcBaseDamage(bsys, ctx, move, ctx->side_condition[BATTLER_IS_ENEMY(attacker)], ctx->field_condition, moveDamage, attackerMove.type, defender, 0, 1, mon);
                        moveDamageMax = moveDamage;
                        moveDamageMin = moveDamage * 85 / 100; //85% is min roll
                        moveDamage = moveDamage * 92 / 100; //~8th roll

                        moveDamageMax = BattleAI_ServerDoTypeCalcMod(bsys, ctx, move, attackerMove.type, defender, moveDamageMax, &effectivenessFlag, mon, 1);
                        moveDamageMin = BattleAI_ServerDoTypeCalcMod(bsys, ctx, move, attackerMove.type, defender, moveDamageMin, &effectivenessFlag, mon, 1);
                        moveDamage = BattleAI_ServerDoTypeCalcMod(bsys, ctx, move, attackerMove.type, defender, moveDamage, &effectivenessFlag, mon, 1);

                        moveDamageMax = AdjustUnusualMoveDamage(bsys, GetMonData(mon, MON_DATA_LEVEL, 0), attackerHP, defenderHP, moveDamageMax, attackerMove.effect, attackerAbility, attackerItem);
                        moveDamageMin = AdjustUnusualMoveDamage(bsys, GetMonData(mon, MON_DATA_LEVEL, 0), attackerHP, defenderHP, moveDamageMin, attackerMove.effect, attackerAbility, attackerItem);
                        moveDamage = AdjustUnusualMoveDamage(bsys, GetMonData(mon, MON_DATA_LEVEL, 0), attackerHP, defenderHP, moveDamage, attackerMove.effect, attackerAbility, attackerItem);
                        if (moveDamage > minRollMaxDamageDealt[i])
                            minRollMaxDamageDealt[i] = moveDamage;
                    }
                    debug_printf("move %d: %d deals [%d-%d], 8th roll %d > def.HP %d\n", j, move, moveDamageMin, moveDamageMax, moveDamage, defenderHP);
                }
            }

            for(int k = 0; k < GetBattlerLearnedMoveCount(bsys, ctx, defender); ++k)
            {
                moveDamage = 0;
                moveDamageMax = 0;
                moveDamageMin = 0;
                u32 defenderMoveCheck = ctx->battlemon[defender].move[k];
                struct BattleMove defenderMove = ctx->moveTbl[defenderMoveCheck];
                moveDamage = AdjustUnusualMovePower(bsys, defender, attacker, defenderMove.effect, defenderPercentHP);

                if(defenderMove.split != SPLIT_STATUS && defenderMove.power)
                {
                    moveDamage = AI_CalcBaseDamage(bsys, ctx, defenderMoveCheck, ctx->side_condition[BATTLER_IS_ENEMY(defender)], ctx->field_condition, moveDamage, defenderMove.type, defender, 0, 0, mon);
                    moveDamageMax = moveDamage;
                    moveDamageMin = moveDamage * 85 / 100; //85% is min roll
                    moveDamage = moveDamage * 92 / 100; //~8th roll

                    moveDamageMax = BattleAI_ServerDoTypeCalcMod(bsys, ctx, defenderMoveCheck, defenderMove.type, defender, moveDamageMax, &effectivenessFlag, mon, 0);
                    moveDamageMin = BattleAI_ServerDoTypeCalcMod(bsys, ctx, defenderMoveCheck, defenderMove.type, defender, moveDamageMin, &effectivenessFlag, mon, 0);
                    moveDamage = BattleAI_ServerDoTypeCalcMod(bsys, ctx, defenderMoveCheck, defenderMove.type, defender, moveDamage, &effectivenessFlag, mon, 0);

                    moveDamageMax = AdjustUnusualMoveDamage(bsys, defenderLevel, defenderHP, attackerHP, moveDamageMax, defenderMove.effect, defenderAbility , defenderItem);
                    moveDamageMin = AdjustUnusualMoveDamage(bsys, defenderLevel, defenderHP, attackerHP, moveDamageMin, defenderMove.effect, defenderAbility, defenderItem);
                    moveDamage = AdjustUnusualMoveDamage(bsys, defenderLevel, defenderHP, attackerHP, moveDamage, defenderMove.effect, defenderAbility, defenderItem);

                    if (moveDamage > minRollMaxDamageReceived[i])
                        minRollMaxDamageReceived[i] = moveDamage;
                        debug_printf("minRollMaxDamageReceived received %d\n", minRollMaxDamageReceived[i]);
                }
                debug_printf("Receiving from move %d: %d is [%d-%d], 8th roll %d > att.HP %d\n", k, defenderMoveCheck, moveDamageMin, moveDamageMax, moveDamage, attackerHP);
            }

			//TODO use canMoveKillBattler to determine if the mon can kill the defender in one hit.
            u8 partyMonKillsIn = calcHitsToKill   (minRollMaxDamageDealt[i],    attackerAbility, defenderHP, defenderMaxHP, defenderAbility, defenderItem);
            u8 partyMonIsKilledIn = calcHitsToKill(minRollMaxDamageReceived[i], defenderAbility, attackerHP, attackerMaxHP, attackerAbility, attackerItem);

            if (monSpecies == SPECIES_DITTO)
                switchInScore[i] += 2;

            if (partyMonIsKilledIn != 1 && (monSpecies == SPECIES_WYNAUT || monSpecies == SPECIES_WOBBUFFET))
                switchInScore[i] += 2;

            if (speedCalc > 0)
            {
                if (partyMonKillsIn == 1)
                    switchInScore[i] += 5;
                else if (partyMonKillsIn >= partyMonIsKilledIn)
                    switchInScore[i] += 3;
                else
                    switchInScore[i] += 1;
            }
            else
            {
                if (partyMonKillsIn == 1 && partyMonIsKilledIn > 1)
                    switchInScore[i] += 4;
                else if((100*minRollMaxDamageDealt[i]/defenderHP) > (100*minRollMaxDamageReceived[i]/attackerHP))
                    switchInScore[i] += 2;
                else if (partyMonIsKilledIn == 1)
                    switchInScore[i] -= 1;
            }
            //default += 0;
        }
    }
	
    u16 currentScore = switchInScore[0];
    for (int i = 0; i < partySize; i++)
    {
        if (switchInScore[i] > currentScore)
        {
            picked = i;
            currentScore = switchInScore[i];
        }
    }
    for (int i = 0; i < partySize; i++)
    {
        debug_printf("%i ", switchInScore[i]);
    }
    debug_printf("-> picked %i\n", picked);

    return picked;
}


// return 0 if client1 moves first, 1 if client2 moves first, 2 if random roll between the two.
u8 LONG_CALL BattleAI_CalcSpeed(void *bw, struct BattleStruct *sp, int client1, struct PartyPokemon* partyMon, int flag)
{
    u8 ret = 0;
    u32 speed1, speed2;
    u8 hold_effect1;
    u8 hold_effect2;
    s8 priority1 = sp->clientPriority[client1];
    s8 priority2 = 0;
    u8 move_last1 = 0, move_last2 = 0;

    int ability1;
    int ability2;
    int stat_stage_spd1;
    int stat_stage_spd2;

    u32 speedModifier1 = UQ412__1_0;
    u32 speedModifier2 = UQ412__1_0;

    ability1 = GetBattlerAbility(sp, client1);
    ability2 = GetMonData(partyMon, MON_DATA_ABILITY, 0);

    hold_effect1 = HeldItemHoldEffectGet(sp, client1);
    hold_effect2 = BattleItemDataGet(sp, GetMonData(partyMon, MON_DATA_HELD_ITEM, 0), 1);

    stat_stage_spd1 = sp->battlemon[client1].states[STAT_SPEED];
    stat_stage_spd2 = 6;  //stage 0

    // Begin calculating Speed Modifiers

    // https://web.archive.org/web/20241226231016/https://www.trainertower.com/dawoblefets-damage-dissertation/
    // NormalRound is QMul_RoundUp
    // pokeRound is QMul_RoundDown

#ifdef DEBUG_SPEED_CALC
    char client1Nickname[12];
    char client2Nickname[12];
    GetMonData(partyMon, MON_DATA_NICKNAME, client2Nickname);
    LoadNicknameToCharArray(sp->battlemon[client1].nickname, client1Nickname);
    //LoadNicknameToCharArray(sp->battlemon[client2].nickname, client2Nickname);
    debug_printf("\n=================\n");
    debug_printf("[CalcSpeed] client1: %s\n", client1Nickname);
    debug_printf("[CalcSpeed] client2: %s\n", client2Nickname);
#endif

#ifdef DEBUG_SPEED_CALC
    debug_printf("\n=================\n");
    debug_printf("[CalcSpeed] %s's base speed: %d\n", client1Nickname, sp->battlemon[client1].speed);
    debug_printf("[CalcSpeed] %s's base speed: %d\n", client2Nickname, GetMonData(partyMon, MON_DATA_SPEED, 0));
    //debug_printf("[CalcSpeed] %s's base speed: %d\n", client2Nickname, sp->battlemon[client2].speed);
#endif

    speed1 = (sp->battlemon[client1].speed * StatBoostModifiers[stat_stage_spd1][0] / StatBoostModifiers[stat_stage_spd1][1]) % 65536;
    speed2 = (GetMonData(partyMon, MON_DATA_SPEED, 0) * StatBoostModifiers[stat_stage_spd2][0] / StatBoostModifiers[stat_stage_spd2][1]) % 65536;

#ifdef DEBUG_SPEED_CALC
    debug_printf("\n=================\n");
    debug_printf("[CalcSpeed] %s's speed1 after stat changes: %d\n", client1Nickname, speed1);
    debug_printf("[CalcSpeed] %s's speed2 after stat changes: %d\n", client2Nickname, speed2);
#endif

    // Step 1: 2x Abilities

    if ((CheckSideAbility(bw, sp, CHECK_ABILITY_ALL_HP, 0, ABILITY_CLOUD_NINE) == 0)
     && (CheckSideAbility(bw, sp, CHECK_ABILITY_ALL_HP, 0, ABILITY_AIR_LOCK) == 0)) {
        if (((ability1 == ABILITY_SWIFT_SWIM) && (sp->field_condition & WEATHER_RAIN_ANY))
         || ((ability1 == ABILITY_CHLOROPHYLL) && (sp->field_condition & WEATHER_SUNNY_ANY))
         || ((ability1 == ABILITY_SAND_RUSH) && (sp->field_condition & WEATHER_SANDSTORM_ANY))
         || ((ability1 == ABILITY_SLUSH_RUSH) && (sp->field_condition & (WEATHER_HAIL_ANY | WEATHER_SNOW_ANY)))) {
            speedModifier1 = QMul_RoundUp(speedModifier1, UQ412__2_0);
        }
        if (((ability2 == ABILITY_SWIFT_SWIM) && (sp->field_condition & WEATHER_RAIN_ANY))
         || ((ability2 == ABILITY_CHLOROPHYLL) && (sp->field_condition & WEATHER_SUNNY_ANY))
         || ((ability2 == ABILITY_SAND_RUSH) && (sp->field_condition & WEATHER_SANDSTORM_ANY))
         || ((ability2 == ABILITY_SLUSH_RUSH) && (sp->field_condition & (WEATHER_HAIL_ANY | WEATHER_SNOW_ANY)))) {
            speedModifier2 = QMul_RoundUp(speedModifier2, UQ412__2_0);
        }
    }

    if ((sp->terrainOverlay.type == ELECTRIC_TERRAIN && sp->terrainOverlay.numberOfTurnsLeft > 0)) {
        if (ability1 == ABILITY_SURGE_SURFER) {
            speedModifier1 = QMul_RoundUp(speedModifier1, UQ412__2_0);
        }

        if (ability2 == ABILITY_SURGE_SURFER) {
            speedModifier2 = QMul_RoundUp(speedModifier2, UQ412__2_0);
        }
    }

    if ((ability1 == ABILITY_UNBURDEN)
    && (sp->battlemon[client1].moveeffect.knockOffFlag)
    && (sp->battlemon[client1].item == 0)) {
        speedModifier1 = QMul_RoundUp(speedModifier1, UQ412__2_0);
    }

#ifdef DEBUG_SPEED_CALC
    debug_printf("\n=================\n");
    debug_printf("[CalcSpeed] Step 1: 2x Abilities\n");
    debug_printf("[CalcSpeed] %s's speedModifier1: %d\n", client1Nickname, speedModifier1);
    debug_printf("[CalcSpeed] %s's speedModifier2: %d\n", client2Nickname, speedModifier2);
#endif

    // Step 2: Quick Feet

    if ((ability1 == ABILITY_QUICK_FEET) && (sp->battlemon[client1].condition & STATUS_ANY_PERSISTENT)) {
        speedModifier1 = QMul_RoundUp(speedModifier1, UQ412__1_5);
    }

    if ((ability2 == ABILITY_QUICK_FEET) && (GetMonData(partyMon, MON_DATA_STATUS, 0) & STATUS_ANY_PERSISTENT)) {
        speedModifier2 = QMul_RoundUp(speedModifier2, UQ412__1_5);
    }

#ifdef DEBUG_SPEED_CALC
    debug_printf("\n=================\n");
    debug_printf("[CalcSpeed] Step 2: Quick Feet\n");
    debug_printf("[CalcSpeed] %s's speedModifier1: %d\n", client1Nickname, speedModifier1);
    debug_printf("[CalcSpeed] %s's speedModifier2: %d\n", client2Nickname, speedModifier2);
#endif

    // Step 3: Slow Start

    if ((ability1 == ABILITY_SLOW_START)
    && ((sp->total_turn - sp->battlemon[client1].moveeffect.slowStartTurns) < 5)) {
        speedModifier1 = QMul_RoundUp(speedModifier1, UQ412__0_5);
    }

    if (ability2 == ABILITY_SLOW_START) {
        speedModifier2 = QMul_RoundUp(speedModifier2, UQ412__0_5);
    }
#ifdef DEBUG_SPEED_CALC
    debug_printf("\n=================\n");
    debug_printf("[CalcSpeed] Step 3: Slow Start\n");
    debug_printf("[CalcSpeed] %s's speedModifier1: %d\n", client1Nickname, speedModifier1);
    debug_printf("[CalcSpeed] %s's speedModifier2: %d\n", client2Nickname, speedModifier2);
#endif

    // Step 4: Quick Powder

    if ((hold_effect1 == HOLD_EFFECT_DITTO_SPEED_UP) && (sp->battlemon[client1].species == SPECIES_DITTO)
        // Not transformed
        && !(sp->battlemon[client1].condition2 & STATUS2_TRANSFORMED)) {
        speedModifier1 = QMul_RoundUp(speedModifier1, UQ412__2_0);
    }

    if (hold_effect2 == HOLD_EFFECT_DITTO_SPEED_UP && GetMonData(partyMon, MON_DATA_SPECIES, 0) == SPECIES_DITTO) {
        speedModifier2 = QMul_RoundUp(speedModifier2, UQ412__2_0);
    }

#ifdef DEBUG_SPEED_CALC
    debug_printf("\n=================\n");
    debug_printf("[CalcSpeed] Step 4: Quick Powder\n");
    debug_printf("[CalcSpeed] %s's speedModifier1: %d\n", client1Nickname, speedModifier1);
    debug_printf("[CalcSpeed] %s's speedModifier2: %d\n", client2Nickname, speedModifier2);
#endif

    // Step 5: Choice Scarf

    if (hold_effect1 == HOLD_EFFECT_CHOICE_SPEED) {
        speedModifier1= QMul_RoundUp(speedModifier1, UQ412__1_5);
    }

    if (hold_effect2 == HOLD_EFFECT_CHOICE_SPEED) {
        speedModifier2 = QMul_RoundUp(speedModifier2, UQ412__1_5);
    }

#ifdef DEBUG_SPEED_CALC
    debug_printf("\n=================\n");
    debug_printf("[CalcSpeed] Step 5: Choice Scarf\n");
    debug_printf("[CalcSpeed] %s's speedModifier1: %d\n", client1Nickname, speedModifier1);
    debug_printf("[CalcSpeed] %s's speedModifier2: %d\n", client2Nickname, speedModifier2);
#endif

    // Step 6: Iron Ball

    if (hold_effect1 == HOLD_EFFECT_SPEED_DOWN_GROUNDED && ability1 != ABILITY_KLUTZ)
    {
        speedModifier1 = QMul_RoundUp(speedModifier1, UQ412__0_5);
    }

   if (hold_effect2 == HOLD_EFFECT_SPEED_DOWN_GROUNDED && ability2 != ABILITY_KLUTZ)
    {
        speedModifier2 = QMul_RoundUp(speedModifier2, UQ412__0_5);
    }

#ifdef DEBUG_SPEED_CALC
    debug_printf("\n=================\n");
    debug_printf("[CalcSpeed] Step 6: Iron Ball / Macho Brace / Power EV items\n");
    debug_printf("[CalcSpeed] %s's speedModifier1: %d\n", client1Nickname, speedModifier1);
    debug_printf("[CalcSpeed] %s's speedModifier2: %d\n", client2Nickname, speedModifier2);
#endif

    // Step 7: Tailwind

    if (sp->tailwindCount[IsClientEnemy(bw, client1)]) { // new tailwind handling
        speedModifier1 = QMul_RoundUp(speedModifier1, UQ412__2_0);
    }

    //if (sp->tailwindCount[IsClientEnemy(bw, client2)]) { // new tailwind handling
    if (sp->tailwindCount[1]) { // new tailwind handling
        speedModifier2 = QMul_RoundUp(speedModifier2, UQ412__2_0);
    }

#ifdef DEBUG_SPEED_CALC
    debug_printf("\n=================\n");
    debug_printf("[CalcSpeed] Step 7: Tailwind\n");
    debug_printf("[CalcSpeed] %s's speedModifier1: %d\n", client1Nickname, speedModifier1);
    debug_printf("[CalcSpeed] %s's speedModifier2: %d\n", client2Nickname, speedModifier2);
#endif

    // Step 8: Swamp

    // TODO
    if (FALSE) {
        speedModifier1 = QMul_RoundUp(speedModifier1, UQ412__0_25);
    }

    if (FALSE) {
        speedModifier2 = QMul_RoundUp(speedModifier2, UQ412__0_25);
    }

#ifdef DEBUG_SPEED_CALC
    debug_printf("\n=================\n");
    debug_printf("[CalcSpeed] Step 8: Swamp\n");
    debug_printf("[CalcSpeed] %s's speedModifier1: %d\n", client1Nickname, speedModifier1);
    debug_printf("[CalcSpeed] %s's speedModifier2: %d\n", client2Nickname, speedModifier2);
#endif

    // Step 9: Apply limit
    // https://www.smogon.com/forums/threads/sword-shield-battle-mechanics-research.3655528/page-59#post-8704137

    speedModifier1 = speedModifier1 < 410 ? 410 : speedModifier1;
    speedModifier2 = speedModifier2 < 410 ? 410 : speedModifier2;

#ifdef DEBUG_SPEED_CALC
    debug_printf("\n=================\n");
    debug_printf("[CalcSpeed] Step 9: Apply limit\n");
    debug_printf("[CalcSpeed] %s's speedModifier1: %d\n", client1Nickname, speedModifier1);
    debug_printf("[CalcSpeed] %s's speedModifier2: %d\n", client2Nickname, speedModifier2);
#endif

    // Step 10: Apply the chained modifier to the starting speed

    speed1 = QMul_RoundDown(speed1, speedModifier1);
    speed2 = QMul_RoundDown(speed2, speedModifier2);

#ifdef DEBUG_SPEED_CALC
    debug_printf("\n=================\n");
    debug_printf("[CalcSpeed] Step 10: Apply the chained modifier to the starting speed\n");
    debug_printf("[CalcSpeed] %s's speed1: %d\n", client1Nickname, speed1);
    debug_printf("[CalcSpeed] %s's speed2: %d\n", client2Nickname, speed2);
#endif

    // Step 11: Paralysis

    if ((ability1 != ABILITY_QUICK_FEET)
    && sp->battlemon[client1].condition & STATUS_PARALYSIS) {
        speed1 = QMul_RoundUp(speed1, UQ412__0_5);  // gen 7 on only halves speed for paralysis
    }

    if ((ability2 != ABILITY_QUICK_FEET) && (GetMonData(partyMon, MON_DATA_STATUS, 0) & STATUS_PARALYSIS)) {
        speed2 = QMul_RoundUp(speed2, UQ412__0_5);  // gen 7 on only halves speed for paralysis
    }

#ifdef DEBUG_SPEED_CALC
    debug_printf("\n=================\n");
    debug_printf("[CalcSpeed] Step 11: Paralysis\n");
    debug_printf("[CalcSpeed] %s's speed1: %d\n", client1Nickname, speed1);
    debug_printf("[CalcSpeed] %s's speed2: %d\n", client2Nickname, speed2);
#endif

    // Step 12: Apply limit

    speed1 = speed1 % 65536;
    speed1 = speed1 > 10000 ? 10000 : speed1;
    speed2 = speed2 % 65536;
    speed2 = speed2 > 10000 ? 10000 : speed2;

#ifdef DEBUG_SPEED_CALC
    debug_printf("\n=================\n");
    debug_printf("[CalcSpeed] Step 12: Apply limit\n");
    debug_printf("[CalcSpeed] %s's speed1: %d\n", client1Nickname, speed1);
    debug_printf("[CalcSpeed] %s's speed2: %d\n", client2Nickname, speed2);
#endif

    // Step 13: Speed calculations stop here for the purposes of Gyro Ball / Electro Ball

    sp->effectiveSpeed[client1] = speed1;
    //sp->effectiveSpeed[client2] = speed2;

#ifdef DEBUG_SPEED_CALC
    debug_printf("\n=================\n");
    debug_printf("[CalcSpeed] Step 13: Speed calculations stop here for the purposes of Gyro Ball / Electro Ball\n");
    debug_printf("[CalcSpeed] %s's speed1: %d\n", client1Nickname, speed1);
    debug_printf("[CalcSpeed] %s's speed2: %d\n", client2Nickname, speed2);
#endif

    // Step 14: Trick Room

    if (sp->field_condition & FIELD_STATUS_TRICK_ROOM) {
        speed1 = 10000 - speed1;
        speed2 = 10000 - speed2;
    }

#ifdef DEBUG_SPEED_CALC
    debug_printf("\n=================\n");
    debug_printf("[CalcSpeed] Step 14: Trick Room\n");
    debug_printf("[CalcSpeed] %s's speed1: %d\n", client1Nickname, speed1);
    debug_printf("[CalcSpeed] %s's speed2: %d\n", client2Nickname, speed2);
#endif

    // Step 15: Apply Limit

    speed1 = speed1 % 8192;
    speed2 = speed2 % 8192;

#ifdef DEBUG_SPEED_CALC
    debug_printf("\n=================\n");
    debug_printf("[CalcSpeed] Step 15: Apply Limit\n");
    debug_printf("[CalcSpeed] %s's speed1: %d\n", client1Nickname, speed1);
    debug_printf("[CalcSpeed] %s's speed2: %d\n", client2Nickname, speed2);
    debug_printf("[CalcSpeed] End of calculating Speed Modifiers\n");
    debug_printf("\n=================\n");
#endif

    // End of calculating Speed Modifiers

    if (hold_effect1 == HOLD_EFFECT_PRIORITY_DOWN) {
        move_last1 = 1;
    }

    if (hold_effect2 == HOLD_EFFECT_PRIORITY_DOWN) {
        move_last2 = 1;
    }

    if (flag & CALCSPEED_FLAG_NO_PRIORITY)
    {
        priority1 = 0;
        priority2 = 0;
    }

    if (priority1 == priority2)
    {
        
        if ((move_last1) && (move_last2)) // both clients have lagging tail
        {
            if (speed1 > speed2) // if client1 is faster with lagging tail, it moves last
            {
                ret = 1; // client 2 moves first
            }
            else if ((speed1 == speed2) && (BattleRand(bw) & 1)) // random roll
            {
                ret = 2;
            }
        }
        else if ((move_last1) && (move_last2 == 0)) // client1 has lagging tail
        {
            ret = 1;
        }
        else if ((move_last1==0) && (move_last2)) // client2 has lagging tail
        {
            ret = 0;
        }
        else if ((ability1 == ABILITY_STALL) && (ability2 == ABILITY_STALL))
        {
            if (speed1 > speed2)
            {
                ret = 1;
            }
            else if ((speed1 == speed2) && (BattleRand(bw) & 1))
            {
                ret = 2;
            }
        }
        else if ((ability1 == ABILITY_STALL) && (ability2 != ABILITY_STALL))
        {
            ret = 1;
        }
        else if ((ability1 != ABILITY_STALL) && (ability2 == ABILITY_STALL))
        {
            ret = 0;
        }
        else
        {
            if (speed1 < speed2)
            {
                ret = 1;
            }
            if ((speed1 == speed2) && (BattleRand(bw) & 1))
            {
                ret = 2;
            }
        }
    }
    else if (priority1 < priority2)
    {
        ret = 1;
    }

    debug_printf("[CalcSpeed] s1=%d, s2=%d\n", speed1, speed2);
    return ret;
}


/**
 *  @brief set move status effects for super effective and calculate modified damage
 *
 *  @param bw battle work structure
 *  @param sp global battle structure
 *  @param move_no move index
 *  @param move_type move type
 *  @param attack_client attacker
 *  @param defence_client defender
 *  @param damage current damage
 *  @param flag move status flags to mess around with
 *  @return modified damage
 */
int LONG_CALL BattleAI_ServerDoTypeCalcMod(void *bw UNUSED, struct BattleStruct *sp, int move_no, int move_type, int enemyMon, int damage, u32 *flag, struct PartyPokemon *pp, BOOL isPPAttacker)
{
    int i;
    u32 base_power;
    u16 item_a = ITEM_NONE;
    u16 holdEffect_a = 0;
    u16 itemPower_a = 0;
    u16 item_d = ITEM_NONE;
    u16 holdEffect_d = 0;
    u16 itemPower_d = 0;
    u32 ability_a = 0;
    u32 ability_d = 0;

    u8 attacker_type_1;
    u8 attacker_type_2;
    u8 defender_type_1;
    u8 defender_type_2;

    if (move_no == MOVE_STRUGGLE)
        return damage;
    
    if(isPPAttacker)
    {
        item_a = GetMonData(pp, MON_DATA_HELD_ITEM, NULL);
        holdEffect_a = BattleItemDataGet(sp, item_a, 1);
        itemPower_a = BattleItemDataGet(sp, item_a, 2);
        ability_a = GetMonData(pp, MON_DATA_ABILITY, NULL);

        attacker_type_1 = GetMonData(pp, MON_DATA_TYPE_1, NULL);
        attacker_type_2 = GetMonData(pp, MON_DATA_TYPE_2, NULL);

        holdEffect_d = HeldItemHoldEffectGet(sp, enemyMon);
        itemPower_d = HeldItemAtkGet(sp, enemyMon, ATK_CHECK_NORMAL);
        ability_d = GetBattlerAbility(sp, enemyMon);

        defender_type_1 = BattlePokemonParamGet(sp, enemyMon, BATTLE_MON_DATA_TYPE1, NULL);
        defender_type_2 = BattlePokemonParamGet(sp, enemyMon, BATTLE_MON_DATA_TYPE2, NULL);
    }
    else
    {
        holdEffect_a = HeldItemHoldEffectGet(sp, enemyMon);
        itemPower_a = HeldItemAtkGet(sp, enemyMon, ATK_CHECK_NORMAL);
        ability_a = GetBattlerAbility(sp, enemyMon);

        attacker_type_1 = BattlePokemonParamGet(sp, enemyMon, BATTLE_MON_DATA_TYPE1, NULL);
        attacker_type_2 = BattlePokemonParamGet(sp, enemyMon, BATTLE_MON_DATA_TYPE2, NULL);

        item_d = GetMonData(pp, MON_DATA_HELD_ITEM, NULL);
        holdEffect_d = BattleItemDataGet(sp, item_d, 1);
        itemPower_d = BattleItemDataGet(sp, item_d, 2);
        ability_d = GetMonData(pp, MON_DATA_ABILITY, NULL);

        defender_type_1 = GetMonData(pp, MON_DATA_TYPE_1, NULL);
        defender_type_2 = GetMonData(pp, MON_DATA_TYPE_2, NULL);
    }
    BOOL attackerHasMoldBreaker = (ability_a == ABILITY_MOLD_BREAKER || ability_a == ABILITY_TERAVOLT || ability_a == ABILITY_TURBOBLAZE);

    move_type = GetAdjustedMoveTypeBasics(sp, move_no, ability_a, sp->moveTbl[move_no].type);
    base_power = sp->moveTbl[move_no].power;

    if (((sp->server_status_flag & SERVER_STATUS_FLAG_TYPE_FLAT) == 0) 
        && ((attacker_type_1 == move_type) || (attacker_type_2 == move_type)
        || ability_a == ABILITY_PROTEAN 
        || ability_a == ABILITY_LIBERO))
    {
        if (ability_a == ABILITY_ADAPTABILITY)
        {
            damage *= 2;
        }
        else
        {
            damage = damage * 15 / 10;
        }
    }

    // if ((MoldBreakerAbilityCheck(sp, attack_client, defence_client, ABILITY_LEVITATE) == TRUE)
    //  && (move_type == TYPE_GROUND)
    //  && (eqp_d != HOLD_EFFECT_SPEED_DOWN_GROUNDED)) // iron ball halves speed and grounds
    // {
    //     flag[0] |= MOVE_STATUS_FLAG_LEVITATE_MISS;
    //     sp->oneTurnFlag[attack_client].parental_bond_flag = 0;
    //     sp->oneTurnFlag[attack_client].parental_bond_is_active = FALSE;
    // }
    // else if ((sp->battlemon[defence_client].moveeffect.magnetRiseTurns)
    //       && ((sp->battlemon[defence_client].effect_of_moves & MOVE_EFFECT_FLAG_INGRAIN) == 0)
    //       && ((sp->field_condition & FIELD_STATUS_GRAVITY) == 0)
    //       && (move_type == TYPE_GROUND)
    //       && (eqp_d != HOLD_EFFECT_SPEED_DOWN_GROUNDED))
    // {
    //     flag[0] |= MOVE_STATUS_FLAG_MAGNET_RISE_MISS;
    //     sp->oneTurnFlag[attack_client].parental_bond_flag = 0;
    //     sp->oneTurnFlag[attack_client].parental_bond_is_active = FALSE;
    // }
    // else if ((eqp_d == HOLD_EFFECT_UNGROUND_DESTROYED_ON_HIT) // has air balloon
    //       && ((sp->battlemon[defence_client].effect_of_moves & MOVE_EFFECT_FLAG_INGRAIN) == 0)
    //       && ((sp->field_condition & FIELD_STATUS_GRAVITY) == 0)
    //       && (move_type == TYPE_GROUND)
    //       && (eqp_d != HOLD_EFFECT_SPEED_DOWN_GROUNDED))
    // {
    //     flag[0] |= MOVE_STATUS_FLAG_MAGNET_RISE_MISS; // reuse Magnet Rise message since they are the same
    //     sp->oneTurnFlag[attack_client].parental_bond_flag = 0;
    //     sp->oneTurnFlag[attack_client].parental_bond_is_active = FALSE;
    // }
    // else if ((move_no == MOVE_SHEER_COLD) && (defender_type_1 == TYPE_ICE || defender_type_2 == TYPE_ICE))
    // {
    //     flag[0] |= MOVE_STATUS_FLAG_NOT_EFFECTIVE;
    // }
    // else
    {
        i = 0;
        while (TypeEffectivenessTable[i][0] != TYPE_ENDTABLE)
        {
            if (TypeEffectivenessTable[i][0] == TYPE_FORESIGHT) // handle foresight
            {
                if ((ability_a == ABILITY_SCRAPPY || ability_a == ABILITY_MINDS_EYE) || (!isPPAttacker && (sp->battlemon[enemyMon].condition2 & STATUS2_FORESIGHT)))
                {
                    break;
                }
                else
                {
                    i++;
                    continue;
                }
            }
            if (TypeEffectivenessTable[i][0] == move_type)
            {
                if (TypeEffectivenessTable[i][1] == defender_type_1)
                {
                    if (AI_ShouldUseNormalTypeEffCalc(sp, holdEffect_d, i) == TRUE
                    && !(!CheckSideAbility(bw, sp, CHECK_ABILITY_ALL_HP, 0, ABILITY_CLOUD_NINE)
                        && !CheckSideAbility(bw, sp, CHECK_ABILITY_ALL_HP, 0, ABILITY_AIR_LOCK)
                        && sp->field_condition & WEATHER_STRONG_WINDS
                        && (TypeEffectivenessTable[i][2] == 20)
                        && defender_type_1 == TYPE_FLYING))
                    {
                        debug_printf("SE move %d\n", damage);
                        damage = TypeCheckCalc(sp, 0, TypeEffectivenessTable[i][2], damage, base_power, flag); //attack_client not used
                        debug_printf("SE move after %d\n", damage);
                    }
                }
                if ((TypeEffectivenessTable[i][1] == defender_type_2) && (defender_type_1 != defender_type_2))
                {
                    if (AI_ShouldUseNormalTypeEffCalc(sp, holdEffect_d, i) == TRUE
                    && !(!CheckSideAbility(bw, sp, CHECK_ABILITY_ALL_HP, 0, ABILITY_CLOUD_NINE)
                        && !CheckSideAbility(bw, sp, CHECK_ABILITY_ALL_HP, 0, ABILITY_AIR_LOCK)
                        && sp->field_condition & WEATHER_STRONG_WINDS
                        && (TypeEffectivenessTable[i][2] == 20)
                        && defender_type_2 == TYPE_FLYING))
                    {
                        damage = TypeCheckCalc(sp, 0, TypeEffectivenessTable[i][2], damage, base_power, flag);
                    }
                }
            }
            i++;
        }
    }

    if (!attackerHasMoldBreaker && (ability_d == ABILITY_WONDER_GUARD)
     && (ShouldDelayTurnEffectivenessChecking(sp, move_no))
     && (((flag[0] & MOVE_STATUS_FLAG_SUPER_EFFECTIVE) == 0) || ((flag[0] & (MOVE_STATUS_FLAG_SUPER_EFFECTIVE | MOVE_STATUS_FLAG_NOT_VERY_EFFECTIVE)) == (MOVE_STATUS_FLAG_SUPER_EFFECTIVE | MOVE_STATUS_FLAG_NOT_VERY_EFFECTIVE))))
    {
        flag[0] |= MOVE_STATUS_FLAG_NOT_EFFECTIVE; // not "not very effective", ineffective
    }
    else
    {
        if (((sp->server_status_flag & SERVER_STATUS_FLAG_TYPE_FLAT) == 0)
         && ((sp->server_status_flag & SERVER_STATUS_FLAG_TYPE_NONE) == 0))
        {
            if ((flag[0] & MOVE_STATUS_FLAG_SUPER_EFFECTIVE) && (base_power))
            {
                if (!attackerHasMoldBreaker && (ability_d == ABILITY_FILTER || ability_d == ABILITY_SOLID_ROCK))
                {
                    damage = BattleDamageDivide(damage * 3, 4);
                }
                if (ability_d == ABILITY_PRISM_ARMOR)
                {
                    damage = BattleDamageDivide(damage * 3, 4);
                }
                if (ability_a == ABILITY_NEUROFORCE)
                {
                    damage = BattleDamageDivide(damage * 5, 4);
                }
                if (holdEffect_a == HOLD_EFFECT_POWER_UP_SE)
                {
                    damage = damage * (100 + itemPower_a) / 100;
                }
            }
            if ((flag[0] & MOVE_STATUS_FLAG_NOT_VERY_EFFECTIVE) && (base_power))
            {
                if (ability_a == ABILITY_TINTED_LENS)
                {
                    damage *= 2;
                }
            }
        }
        else
        {
            flag[0] &= ~(MOVE_STATUS_FLAG_SUPER_EFFECTIVE);
            flag[0] &= ~(MOVE_STATUS_FLAG_NOT_VERY_EFFECTIVE);
        }
    }

    return damage;
}

/*Adjusts the computed damage for attacks like multihit or flat damage moves.*/
int LONG_CALL AdjustUnusualMoveDamage(struct BattleSystem* bsys, u32 attackerLevel, u32 attackerHP, u32 defenderHP, int damage, u32 moveEffect, u32 attackerAbility, u32 attackerItem)
{
    //struct BattleStruct* ctx = bsys->sp;
    switch (moveEffect) {
    case MOVE_EFFECT_UP_TO_10_HITS:
        if (attackerAbility == ABILITY_SKILL_LINK)
			return damage * 10;
        else if (attackerItem == ITEM_LOADED_DICE)
            return damage *= 7; //4-10
        return damage *= 5;
    case MOVE_EFFECT_HIT_THREE_TIMES_ALWAYS_CRITICAL: //surge Strikes
    case MOVE_EFFECT_HIT_THREE_TIMES: //triple dive
    case MOVE_EFFECT_HIT_THREE_TIMES_INCREMENT_BASE_POWER_10: // triple kick
        return damage *= 3;
    case MOVE_EFFECT_HIT_THREE_TIMES_INCREMENT_BASE_POWER_20: // triple axel
        return damage *= 6;
    case MOVE_EFFECT_MULTI_HIT: //2-5 hit moves
        if(attackerAbility == ABILITY_SKILL_LINK)
            return damage * 5;
        else if (attackerItem == ITEM_LOADED_DICE)
            return damage *= 4; //4-5
        return damage *= 3;
    case MOVE_EFFECT_LEVEL_DAMAGE_FLAT: //night shade, seismic toss
    case MOVE_EFFECT_RANDOM_DAMAGE_1_TO_150_LEVEL: //psywave
        return attackerLevel;
    case MOVE_EFFECT_10_DAMAGE_FLAT: //sonic boom
        return 20;
    case MOVE_EFFECT_40_DAMAGE_FLAT: //dragon rage
        return 40;
    case MOVE_EFFECT_HIT_TWICE_AND_FLINCH: //double Iron bash
    case MOVE_EFFECT_POISON_MULTI_HIT: //twinneedle
    case MOVE_EFFECT_HIT_TWICE: //double hit, dual wingbeat, etc...
        return damage *= 2;
    case MOVE_EFFECT_HALVE_HP: //super fang, nature's madness
        return defenderHP / 2;
    case MOVE_EFFECT_SET_HP_EQUAL_TO_USER: //endeavor
    {
        if (attackerHP < defenderHP)
            return defenderHP - attackerHP;
        else
            return 0;
    }
    }
    return damage;
}

u8 LONG_CALL AI_MoldBreakerAbilityCheck(int attackerAbility, int defenderAbility, int ability)
{
    BOOL ret;

    ret = FALSE;

    if((attackerAbility != ABILITY_MOLD_BREAKER) &&
        (attackerAbility != ABILITY_TERAVOLT) &&
        (attackerAbility != ABILITY_TURBOBLAZE))
    {
        if(defenderAbility == ability)
        {
            ret = TRUE;
        }
    }

    return ret;
}

BOOL LONG_CALL AI_IsContactBeingMade(struct BattleStruct *sp, u32 ability, u32 itemHoldEffect, u32 moveno)
{
    if (ability == ABILITY_LONG_REACH)
            return FALSE;

    if (itemHoldEffect == HOLD_EFFECT_PREVENT_CONTACT_EFFECTS || (itemHoldEffect == HOLD_EFFECT_INCREASE_PUNCHING_MOVE_DMG && IsMovePunchingMove(moveno)))
        return FALSE;

    if (itemHoldEffect == HOLD_EFFECT_PREVENT_CONTACT_EFFECTS)
        return FALSE;

    if (sp->moveTbl[moveno].flag & FLAG_CONTACT)
        return TRUE;

    return FALSE;
}

void AI_getEquivalentAttackAndDefense(struct BattleStruct *sp, u16 attackerAttack, u16 defenderDefense, u16 attackerSpecialAttack, u16 defenderSpecialDefense, s8 attackerAttackstate, s8 defenderDefenseState, s8 attackerSpecialAttackState, s8 defenderSpecialDefenseState, u8 *movesplit, u8 enemySlot, u8 critical, int moveno, u16 *equivalentAttack, u16 *equivalentDefense, BOOL isPPAttacker) {
    u16 rawPhysicalAttack;
    u16 rawSpecialAttack;
    u16 rawPhysicalDefense;
    u16 rawSpecialDefense;
    u16 tempPhysicalAttack;
    u16 tempSpecialAttack;

    if (!isPPAttacker)
    {
        tempPhysicalAttack = BattlePokemonParamGet(sp, enemySlot, BATTLE_MON_DATA_ATK, NULL) * StatBoostModifiers[attackerAttackstate][0] / StatBoostModifiers[attackerAttackstate][1];
        tempSpecialAttack = BattlePokemonParamGet(sp, enemySlot, BATTLE_MON_DATA_SPATK, NULL) * StatBoostModifiers[attackerSpecialAttackState][0] / StatBoostModifiers[attackerSpecialAttackState][1];
    }
    else
    {
        tempPhysicalAttack = attackerAttack;
        tempSpecialAttack = attackerSpecialAttack;
    }

    if (critical > 1) {
        if (attackerAttackstate > 6) {
            rawPhysicalAttack = attackerAttack * StatBoostModifiers[attackerAttackstate][0];
            rawPhysicalAttack /= StatBoostModifiers[attackerAttackstate][1];
        } else {
            rawPhysicalAttack = attackerAttack;
        }

        if (defenderDefenseState < 6) {
            rawPhysicalDefense = defenderDefense * StatBoostModifiers[defenderDefenseState][0];
            rawPhysicalDefense /= StatBoostModifiers[defenderDefenseState][1];
        } else {
            rawPhysicalDefense = defenderDefense;
        }

        if (attackerSpecialAttackState > 6) {
            rawSpecialAttack = attackerSpecialAttack * StatBoostModifiers[attackerSpecialAttackState][0];
            rawSpecialAttack /= StatBoostModifiers[attackerSpecialAttackState][1];
        } else {
            rawSpecialAttack = attackerSpecialAttack;
        }

        if (defenderSpecialDefenseState < 6) {
            rawSpecialDefense = defenderSpecialDefense * StatBoostModifiers[defenderSpecialDefenseState][0];
            rawSpecialDefense /= StatBoostModifiers[defenderSpecialDefenseState][1];
        } else {
            rawSpecialDefense = defenderSpecialDefense;
        }
    } else {
        rawPhysicalAttack = attackerAttack * StatBoostModifiers[attackerAttackstate][0];
        rawPhysicalAttack /= StatBoostModifiers[attackerAttackstate][1];

        rawPhysicalDefense = defenderDefense * StatBoostModifiers[defenderDefenseState][0];
        rawPhysicalDefense /= StatBoostModifiers[defenderDefenseState][1];

        rawSpecialAttack = attackerSpecialAttack * StatBoostModifiers[attackerSpecialAttackState][0];
        rawSpecialAttack /= StatBoostModifiers[attackerSpecialAttackState][1];

        rawSpecialDefense = defenderSpecialDefense * StatBoostModifiers[defenderSpecialDefenseState][0];
        rawSpecialDefense /= StatBoostModifiers[defenderSpecialDefenseState][1];
    }

    if (*movesplit == SPLIT_PHYSICAL) {
        *equivalentAttack = rawPhysicalAttack;
        *equivalentDefense = rawPhysicalDefense;
    } else {
        *equivalentAttack = rawSpecialAttack;
        *equivalentDefense = rawSpecialDefense;
    }

    switch (moveno) {
        case MOVE_PSYSHOCK:
        case MOVE_PSYSTRIKE:
        case MOVE_SECRET_SWORD:
            *equivalentDefense = rawPhysicalDefense;
            break;
        case MOVE_PHOTON_GEYSER:
            if (tempPhysicalAttack > tempSpecialAttack) {
                *movesplit = SPLIT_PHYSICAL;
                *equivalentAttack = rawPhysicalAttack;
                *equivalentDefense = rawPhysicalDefense;
            } else {
                *movesplit = SPLIT_SPECIAL;
                *equivalentAttack = rawSpecialAttack;
                *equivalentDefense = rawPhysicalDefense;
            }
            break;

        default:
            break;
    }
}

struct PACKED AI_sDamageCalc
{
    u16 species;
    s16 hp;
    u16 maxhp;
    u16 dummy;
    int item_held_effect;
    int item_power;

    u32 condition;

    u16 ability;
    u8 sex;
    u8 type1;
    u8 type2;

    u8 isGrounded;
    u8 form_no;
};

extern const u8 HeldItemPowerUpTable[36][2];

// this has been moved to src/battle/other_battle_calculators.c so it can be used in
extern const u16 PunchingMovesTable[24];

extern const u16 StrongJawMovesTable[10];

extern const u16 MegaLauncherMovesTable[7];

extern const u16 SharpnessMovesTable[24];

int LONG_CALL AI_CalcBaseDamage(void *bw, struct BattleStruct *sp, int moveno, u32 side_cond,
                   u32 field_cond, u16 pow, u8 type, u8 enemyMonSlot, u8 critical, BOOL isPPAttacker, struct PartyPokemon* pp)
{
    u32 i;
    s32 damage = 0;
    u8 movetype;
    u8 movesplit;
    u16 attack;
    u16 defense;
    u16 sp_attack;
    u16 sp_defense;
    s8 atkstate;
    s8 defstate;
    s8 spatkstate;
    s8 spdefstate;
    u8 level;
    u16 movepower;
    u16 item;
    u32 battle_type;
    u8 speedCalc;


    struct AI_sDamageCalc AttackingMon;
    struct AI_sDamageCalc DefendingMon;

    if (isPPAttacker)
    {
        switch (moveno) {
            // handle body press - attack is derived from defense
            case MOVE_BODY_PRESS:
                attack = GetMonData(pp, MON_DATA_DEFENSE, 0);
                atkstate = 0;
                break;

            default:
                attack = GetMonData(pp, MON_DATA_ATTACK, 0);;
                atkstate = 0;
                break;
        }


        sp_attack = GetMonData(pp, MON_DATA_SPECIAL_ATTACK, 0);
        spatkstate = 0; //stage 0
        level = GetMonData(pp, MON_DATA_LEVEL, 0);
        AttackingMon.species = GetMonData(pp, MON_DATA_SPECIES, 0);
        AttackingMon.hp = GetMonData(pp, MON_DATA_HP, 0);
        AttackingMon.maxhp = GetMonData(pp, MON_DATA_MAXHP, 0);
        AttackingMon.condition = GetMonData(pp, MON_DATA_STATUS, 0);
        AttackingMon.ability = GetMonData(pp, MON_DATA_ABILITY, 0);
        AttackingMon.sex = GetMonData(pp, MON_DATA_GENDER, 0);
        AttackingMon.type1 = GetMonData(pp, MON_DATA_TYPE_1, 0);
        AttackingMon.type2 = GetMonData(pp, MON_DATA_TYPE_2, 0);
        item = GetMonData(pp, MON_DATA_HELD_ITEM, 0);
        AttackingMon.item_held_effect = BattleItemDataGet(sp, item, 1);
        AttackingMon.item_power = BattleItemDataGet(sp, item, 2);
        AttackingMon.isGrounded = IsPartyPokemonGrounded(sp, pp);
        AttackingMon.form_no = GetMonData(pp, MON_DATA_FORM, 0);

        defense = BattlePokemonParamGet(sp, enemyMonSlot, BATTLE_MON_DATA_DEF, NULL);
        sp_defense = BattlePokemonParamGet(sp, enemyMonSlot, BATTLE_MON_DATA_SPDEF, NULL);

        defstate = BattlePokemonParamGet(sp, enemyMonSlot, BATTLE_MON_DATA_STATE_DEF, NULL) - 6;
        spdefstate = BattlePokemonParamGet(sp, enemyMonSlot, BATTLE_MON_DATA_STATE_SPDEF, NULL) - 6;

        DefendingMon.species = BattlePokemonParamGet(sp, enemyMonSlot, BATTLE_MON_DATA_SPECIES, NULL);
        DefendingMon.hp = BattlePokemonParamGet(sp, enemyMonSlot, BATTLE_MON_DATA_HP, NULL);
        DefendingMon.maxhp = BattlePokemonParamGet(sp, enemyMonSlot, BATTLE_MON_DATA_MAX_HP, NULL);
        DefendingMon.condition = BattlePokemonParamGet(sp, enemyMonSlot, BATTLE_MON_DATA_MAX_CONDITION, NULL);
        DefendingMon.ability = GetBattlerAbility(sp, enemyMonSlot);
        DefendingMon.sex = BattlePokemonParamGet(sp, enemyMonSlot, BATTLE_MON_DATA_SEX, NULL);
        DefendingMon.type1 = BattlePokemonParamGet(sp, enemyMonSlot, BATTLE_MON_DATA_TYPE1, NULL);
        DefendingMon.type2 = BattlePokemonParamGet(sp, enemyMonSlot, BATTLE_MON_DATA_TYPE2, NULL);
        DefendingMon.isGrounded = IsClientGrounded(sp, enemyMonSlot);

        item = GetBattleMonItem(sp, enemyMonSlot);
        DefendingMon.item_held_effect = BattleItemDataGet(sp, item, 1);
        DefendingMon.item_power = BattleItemDataGet(sp, item, 2);

        DefendingMon.form_no = sp->battlemon[enemyMonSlot].form_no;
        debug_printf("Calcing base damage using species = %d, hp = %d, attack = %d, and attack stage =%d \n",AttackingMon.species, AttackingMon.hp, attack, atkstate);
    }
    else
    {
        switch (moveno) {
            // handle body press - attack is derived from defense
            case MOVE_BODY_PRESS:
                attack = BattlePokemonParamGet(sp, enemyMonSlot, BATTLE_MON_DATA_DEF, NULL);
                atkstate = BattlePokemonParamGet(sp, enemyMonSlot, BATTLE_MON_DATA_STATE_DEF, NULL) - 6;
                break;

            default:
                attack = BattlePokemonParamGet(sp, enemyMonSlot, BATTLE_MON_DATA_ATK, NULL);
                atkstate = BattlePokemonParamGet(sp, enemyMonSlot, BATTLE_MON_DATA_STATE_ATK, NULL) - 6;
                break;
        }
       
        sp_attack = BattlePokemonParamGet(sp, enemyMonSlot, BATTLE_MON_DATA_SPATK, NULL);  
        spatkstate = BattlePokemonParamGet(sp, enemyMonSlot, BATTLE_MON_DATA_STATE_SPATK, NULL) - 6;

        level = BattlePokemonParamGet(sp, enemyMonSlot, BATTLE_MON_DATA_LEVEL, NULL);

        AttackingMon.species = BattlePokemonParamGet(sp, enemyMonSlot, BATTLE_MON_DATA_SPECIES, NULL);
        AttackingMon.hp = BattlePokemonParamGet(sp, enemyMonSlot, BATTLE_MON_DATA_HP, NULL);
        AttackingMon.maxhp = BattlePokemonParamGet(sp, enemyMonSlot, BATTLE_MON_DATA_MAX_HP, NULL);
        AttackingMon.condition = BattlePokemonParamGet(sp, enemyMonSlot, BATTLE_MON_DATA_MAX_CONDITION, NULL);
        AttackingMon.ability = GetBattlerAbility(sp, enemyMonSlot);
        AttackingMon.sex = BattlePokemonParamGet(sp, enemyMonSlot, BATTLE_MON_DATA_SEX, NULL);
        AttackingMon.type1 = BattlePokemonParamGet(sp, enemyMonSlot, BATTLE_MON_DATA_TYPE1, NULL);
        AttackingMon.type2 = BattlePokemonParamGet(sp, enemyMonSlot, BATTLE_MON_DATA_TYPE2, NULL);

        item = GetBattleMonItem(sp, enemyMonSlot);
        AttackingMon.item_held_effect = BattleItemDataGet(sp, item, 1);
        AttackingMon.item_power = BattleItemDataGet(sp, item, 2);
        AttackingMon.isGrounded = IsClientGrounded(sp, enemyMonSlot);

        AttackingMon.form_no = sp->battlemon[enemyMonSlot].form_no;

        defense = GetMonData(pp, MON_DATA_DEFENSE, 0);
        sp_defense = GetMonData(pp, MON_DATA_SPECIAL_DEFENSE, 0);
        defstate = 0;
        spdefstate = 0;
        DefendingMon.species = GetMonData(pp, MON_DATA_SPECIES, 0);
        DefendingMon.hp = GetMonData(pp, MON_DATA_HP, 0);
        DefendingMon.maxhp = GetMonData(pp, MON_DATA_MAXHP, 0);
        DefendingMon.condition = GetMonData(pp, MON_DATA_STATUS, 0);
        DefendingMon.ability = GetMonData(pp, MON_DATA_ABILITY, 0);
        DefendingMon.sex = GetMonData(pp, MON_DATA_GENDER, 0);
        DefendingMon.type1 = GetMonData(pp, MON_DATA_TYPE_1, 0);
        DefendingMon.type2 = GetMonData(pp, MON_DATA_TYPE_2, 0);
        item = GetMonData(pp, MON_DATA_HELD_ITEM, 0);
        DefendingMon.item_held_effect = BattleItemDataGet(sp, item, 1);
        DefendingMon.item_power = BattleItemDataGet(sp, item, 2);
        DefendingMon.isGrounded = IsPartyPokemonGrounded(sp, pp);
        DefendingMon.form_no = GetMonData(pp, MON_DATA_FORM, 0);
        debug_printf("Calcing base damage using species = %d, hp = %d, attack = %d, and attack stage =%d \n",AttackingMon.species, AttackingMon.hp, attack, atkstate);
    
    }

    battle_type = BattleTypeGet(bw);

    if ((AI_MoldBreakerAbilityCheck(AttackingMon.ability, DefendingMon.ability, ABILITY_ICE_FACE) == TRUE)
    && (DefendingMon.species == SPECIES_EISCUE)
    && (DefendingMon.form_no == 0)
    && (GetMoveSplit(sp, moveno) == SPLIT_PHYSICAL)) {
        return 0;
    }

    BOOL attackerHasMoldBreaker = (AttackingMon.ability == ABILITY_MOLD_BREAKER || AttackingMon.ability == ABILITY_TERAVOLT || AttackingMon.ability == ABILITY_TURBOBLAZE);

    if (!attackerHasMoldBreaker)
    {
        switch (DefendingMon.ability)
        {
        case ABILITY_FLASH_FIRE:
        case ABILITY_WELL_BAKED_BODY:
            if (type == TYPE_FIRE)
                return 0;
            break;
        case ABILITY_LIGHTNING_ROD:
        case ABILITY_VOLT_ABSORB:
        case ABILITY_MOTOR_DRIVE:
            if (type == TYPE_ELECTRIC)
                return 0;
            break;
        case ABILITY_WATER_ABSORB:
        case ABILITY_STORM_DRAIN:
        case ABILITY_DRY_SKIN:
            if (type == TYPE_WATER)
                return 0;
            break;
        case ABILITY_SAP_SIPPER:
            if (type == TYPE_GRASS)
                return 0;
            break;
        case ABILITY_LEVITATE:
        case ABILITY_EARTH_EATER:
            if (type == TYPE_GROUND)
                return 0;
            break;
        case ABILITY_BULLETPROOF:
            if(IsBallOrBombMove(moveno))
                return 0;
            break;
        case ABILITY_DAZZLING:
        case ABILITY_QUEENLY_MAJESTY:
        case ABILITY_ARMOR_TAIL:
            if (sp->moveTbl[moveno].priority > 0)
                return 0;
            break;
        case ABILITY_SOUNDPROOF:
            if (IsMoveSoundBased(moveno))
                return 0;
            break;
        default:
            break;
        }
    }

    if (pow == 0)
        movepower = sp->moveTbl[moveno].power;
    else
        movepower = pow;

    // get the type
    movetype = GetAdjustedMoveTypeBasics(sp, moveno, AttackingMon.ability, sp->moveTbl[moveno].type);
    movepower = movepower * sp->damage_value / 10;

    // handle technician
    if ((AttackingMon.ability == ABILITY_TECHNICIAN) && (moveno != MOVE_STRUGGLE) && (movepower <= 60))
        movepower = movepower * 15 / 10;

    movesplit = GetMoveSplit(sp, moveno);

    // handle huge power + pure power
    if ((AttackingMon.ability == ABILITY_HUGE_POWER) || (AttackingMon.ability == ABILITY_PURE_POWER))
        attack = attack * 2;

    // handle slow start
    if (AttackingMon.ability == ABILITY_SLOW_START)
        attack /= 2;

    // handle defeatist
    if ((AttackingMon.ability == ABILITY_DEFEATIST) && (AttackingMon.hp <= AttackingMon.maxhp / 2))
    {
        attack /= 2;
        sp_attack /= 2;
    }

    //handle analytic
    if (AttackingMon.ability == ABILITY_ANALYTIC)
    {
        speedCalc = BattleAI_CalcSpeed(bw, sp, enemyMonSlot, pp, CALCSPEED_FLAG_NO_PRIORITY); //checks actual turn order with field state considered
        if (isPPAttacker)
        {
            if (speedCalc > 0)
                i = 4;
        }
        else
        {
            if (speedCalc == 0)
                i = 4;
        }
        if (i == 4)
        {
            movepower = movepower * 130 / 100;
        }

    }

    // handle sheer force
    if (AttackingMon.ability == ABILITY_SHEER_FORCE /*&& Move is SheerForce able*/ )
    {
        movepower = movepower * 130 / 100;
    }

    // handle punk rock
    if (AttackingMon.ability == ABILITY_PUNK_ROCK && IsMoveSoundBased(moveno))
    {
        movepower = movepower * 130 / 100;
    }


    // type boosting held items
    {
        u8 element[2] = {AttackingMon.item_held_effect, movetype};
        if (IsElementInArray(HeldItemPowerUpTable, element, NELEMS(HeldItemPowerUpTable), sizeof(element)))
        {
            movepower = movepower * (100 + AttackingMon.item_power) / 100;
        }
    }
    // handle choice band
    if (AttackingMon.item_held_effect == HOLD_EFFECT_CHOICE_ATK)
        attack = attack * 150 / 100;

    // handle choice specs
    if (AttackingMon.item_held_effect == HOLD_EFFECT_CHOICE_SPATK)
        sp_attack = sp_attack * 150 / 100;

    // handle soul dew - gen 7 changes it to just boost movepower if the type is dragon or psychic, no more defense boost
    if ((AttackingMon.item_held_effect == HOLD_EFFECT_LATI_SPECIAL)
     && ((AttackingMon.species == SPECIES_LATIOS) || (AttackingMon.species == SPECIES_LATIAS))
     && (movetype == TYPE_DRAGON || movetype == TYPE_PSYCHIC))
    {
        movepower = movepower * 120 / 100; // 4915/4096
    }

    // handle deep sea tooth
    if ((AttackingMon.item_held_effect == HOLD_EFFECT_CLAMPERL_SPATK) && (AttackingMon.species == SPECIES_CLAMPERL))
        sp_attack *= 2;

    // handle deep sea scale
    if ((DefendingMon.item_held_effect == HOLD_EFFECT_CLAMPERL_SPDEF) && (DefendingMon.species == SPECIES_CLAMPERL))
        sp_defense *= 2;

    // handle light ball
    if ((AttackingMon.item_held_effect == HOLD_EFFECT_PIKA_SPATK_UP) && (AttackingMon.species == SPECIES_PIKACHU))
        movepower *= 2;

    // handle metal powder
    if ((DefendingMon.item_held_effect == HOLD_EFFECT_DITTO_DEF_UP) && (DefendingMon.species == SPECIES_DITTO))
        defense *= 2;

    // handle gorilla tactics
    if (AttackingMon.ability == ABILITY_GORILLA_TACTICS) {
        attack = attack * 150 / 100;
    }

    // handle assault vest
    if ((DefendingMon.item_held_effect == HOLD_EFFECT_SPDEF_BOOST_NO_STATUS_MOVES)) {
        sp_defense = sp_defense * 150 / 100;
    }

    // handle eviolite
    if (DefendingMon.item_held_effect == HOLD_EFFECT_EVIOLITE) {
        u16 speciesWithForm;
        speciesWithForm = PokeOtherFormMonsNoGet(DefendingMon.species, DefendingMon.form_no);

        struct Evolution *evoTable;
        evoTable = sys_AllocMemory(0, MAX_EVOS_PER_POKE * sizeof(struct Evolution));
        ArchiveDataLoad(evoTable, ARC_EVOLUTIONS, speciesWithForm);

        // If a Pokémon has any evolutions, there should be an entry at the top that isn't EVO_NONE.
        // In that case, the Pokémon is capable of evolving, and so the effect of Eviolite should apply.
        if (evoTable[0].method != EVO_NONE) {
            defense = defense * 150 / 100;
            sp_defense = sp_defense * 150 / 100;
        }

        sys_FreeMemoryEz(evoTable);
    }

    // handle thick club
    if ((AttackingMon.item_held_effect == HOLD_EFFECT_CUBONE_ATK_UP)
     && ((AttackingMon.species == SPECIES_CUBONE)
      || (AttackingMon.species == SPECIES_MAROWAK)))
        attack *= 2;

    // handle adamant/lustrous/griseous orb
    if ((AttackingMon.item_held_effect == HOLD_EFFECT_DIALGA_BOOST) &&
        ((movetype == TYPE_DRAGON) || (movetype == TYPE_STEEL)) &&
        (AttackingMon.species == SPECIES_DIALGA))
    {
        movepower = movepower * (100 + AttackingMon.item_power) / 100;
    }

    if ((AttackingMon.item_held_effect == HOLD_EFFECT_PALKIA_BOOST) &&
        ((movetype == TYPE_DRAGON) || (movetype == TYPE_WATER)) &&
        (AttackingMon.species == SPECIES_PALKIA))
    {
        movepower = movepower * (100 + AttackingMon.item_power) / 100;
    }

    if ((AttackingMon.item_held_effect == HOLD_EFFECT_GIRATINA_BOOST) &&
        ((movetype == TYPE_DRAGON) || (movetype == TYPE_GHOST)) &&
        (AttackingMon.species == SPECIES_GIRATINA))
    {
        movepower = movepower * (100 + AttackingMon.item_power) / 100;
    }

    // handle adamant crystal, lustrous globe & griseous core
    if ((AttackingMon.item_held_effect == HOLD_EFFECT_DIALGA_BOOST_AND_TRANSFORM) &&
        ((movetype == TYPE_DRAGON) || (movetype == TYPE_STEEL)) &&
        (AttackingMon.species == SPECIES_DIALGA) &&
        (!isPPAttacker || ((BattlePokemonParamGet(sp, enemyMonSlot, BATTLE_MON_DATA_STATUS2, NULL) & STATUS2_TRANSFORMED) == 0)))
    {
        movepower = movepower * (100 + AttackingMon.item_power) / 100;
    }

    if ((AttackingMon.item_held_effect == HOLD_EFFECT_PALKIA_BOOST_AND_TRANSFORM) &&
        ((movetype == TYPE_DRAGON) || (movetype == TYPE_WATER)) &&
        (AttackingMon.species == SPECIES_PALKIA) &&
        (!isPPAttacker || ((BattlePokemonParamGet(sp, enemyMonSlot, BATTLE_MON_DATA_STATUS2, NULL) & STATUS2_TRANSFORMED) == 0)))
    {
        movepower = movepower * (100 + AttackingMon.item_power) / 100;
    }

    if ((AttackingMon.item_held_effect == HOLD_EFFECT_GIRATINA_BOOST_AND_TRANSFORM) &&
        ((movetype == TYPE_DRAGON) || (movetype == TYPE_GHOST)) &&
        (AttackingMon.species == SPECIES_GIRATINA) && 
        (!isPPAttacker || ((BattlePokemonParamGet(sp, enemyMonSlot, BATTLE_MON_DATA_STATUS2, NULL) & STATUS2_TRANSFORMED) == 0)))
    {
        movepower = movepower * (100 + AttackingMon.item_power) / 100;
    }

    // handle punching glove
    if ((AttackingMon.item_held_effect == HOLD_EFFECT_INCREASE_PUNCHING_MOVE_DMG) && IsElementInArray(PunchingMovesTable, (u16 *)&moveno, NELEMS(PunchingMovesTable), sizeof(PunchingMovesTable[0])))
    {
        movepower = movepower * (100 + AttackingMon.item_power) / 100;
    }

    // handle ogerpon mask boosts
    if (((AttackingMon.item_held_effect == HOLD_EFFECT_CORNERSTONE_MASK) ||
        (AttackingMon.item_held_effect == HOLD_EFFECT_WELLSPRING_MASK) ||
        (AttackingMon.item_held_effect == HOLD_EFFECT_HEARTHFLAME_MASK)) &&
        (AttackingMon.species == SPECIES_OGERPON))
    {
        movepower = movepower * (100 + AttackingMon.item_power) / 100;
    }

    // handle items that boost physical/special moves
    if ((AttackingMon.item_held_effect == HOLD_EFFECT_POWER_UP_PHYS) && (movesplit == SPLIT_PHYSICAL))
    {
        movepower = movepower * (100 + AttackingMon.item_power) / 100;
    }

    if ((AttackingMon.item_held_effect == HOLD_EFFECT_POWER_UP_SPEC) && (movesplit == SPLIT_SPECIAL))
    {
        movepower = movepower * (100 + AttackingMon.item_power) / 100;
    }

    // handle thick fat
    if ((AI_MoldBreakerAbilityCheck(AttackingMon.ability, DefendingMon.ability, ABILITY_THICK_FAT) == TRUE) &&
        ((movetype == TYPE_FIRE) || (movetype == TYPE_ICE)))
    {
        movepower /= 2;
    }

    // handle hustle
    if (AttackingMon.ability == ABILITY_HUSTLE)
    {
        attack = attack * 150 / 100;
    }

    // handle guts
    if ((AttackingMon.ability == ABILITY_GUTS) && (AttackingMon.condition))
    {
        attack = attack * 150 / 100;
    }

    // handle toxic boost
    if ((AttackingMon.ability == ABILITY_TOXIC_BOOST) && ((AttackingMon.condition & STATUS_BAD_POISON) || (AttackingMon.condition & STATUS_POISON)))
    {
        attack = attack * 150 / 100;
    }

    // handle flare boost
    if ((AttackingMon.ability == ABILITY_FLARE_BOOST) && ((AttackingMon.condition & STATUS_BURN)))
    {
        sp_attack = sp_attack * 150 / 100;
    }

    // handle tough claws
    if ((AttackingMon.ability == ABILITY_TOUGH_CLAWS) && AI_IsContactBeingMade(sp, AttackingMon.ability, AttackingMon.item_held_effect, moveno))
    {
        movepower = movepower * 130 / 100;
    }

    // handle fluffy
    if (DefendingMon.ability == ABILITY_FLUFFY) {
        if (AI_IsContactBeingMade(sp, AttackingMon.ability, AttackingMon.item_held_effect, moveno)) {
            movepower = movepower * 50 / 100;
        }

        if (movetype == TYPE_FIRE) {
            movepower = movepower * 200 / 100;
        }
    }

    // handle marvel scale
    if ((AI_MoldBreakerAbilityCheck(AttackingMon.ability, DefendingMon.ability, ABILITY_MARVEL_SCALE) == TRUE) && (DefendingMon.condition))
    {
        defense = defense * 150 / 100;
    }

    // handle grass pelt
    if ((AI_MoldBreakerAbilityCheck(AttackingMon.ability, DefendingMon.ability, ABILITY_GRASS_PELT) == TRUE) && (sp->terrainOverlay.type == GRASSY_TERRAIN && sp->terrainOverlay.numberOfTurnsLeft > 0))
    {
        defense = defense * 150 / 100;
    }

    // handle plus/minus
    if (((AttackingMon.ability == ABILITY_PLUS) || (AttackingMon.ability == ABILITY_MINUS)) &&
        (CheckSideAbility(bw, sp, CHECK_ABILITY_SAME_SIDE_HP, enemyMonSlot, ABILITY_MINUS) ||
        CheckSideAbility(bw, sp, CHECK_ABILITY_SAME_SIDE_HP, enemyMonSlot, ABILITY_PLUS)))
    {
        sp_attack = sp_attack * 150 / 100;
    }

    // handle fur coat - double defense
    if ((AI_MoldBreakerAbilityCheck(AttackingMon.ability, DefendingMon.ability, ABILITY_FUR_COAT) == TRUE))
    {
        defense *= 2;
    }

    // handle mud/water sport
    if ((movetype == TYPE_ELECTRIC) && (CheckFieldMoveEffect(bw, sp, MOVE_EFFECT_FLAG_MUD_SPORT)))
    {
        movepower /= 3;
    }

    if ((movetype == TYPE_FIRE) && (CheckFieldMoveEffect(bw, sp, MOVE_EFFECT_FLAG_WATER_SPORT)))
    {
        movepower /= 3;
    }

    // handle "in a pinch" type boosters
    if ((movetype == TYPE_GRASS) && (AttackingMon.ability == ABILITY_OVERGROW) && (AttackingMon.hp <= AttackingMon.maxhp * 10 / 30))
    {
        movepower = movepower * 150 / 100;
    }

    if ((movetype == TYPE_FIRE) && (AttackingMon.ability == ABILITY_BLAZE) && (AttackingMon.hp <= AttackingMon.maxhp * 10 / 30))
    {
        movepower = movepower * 150 / 100;
    }

    if ((movetype == TYPE_WATER) && (AttackingMon.ability == ABILITY_TORRENT) && (AttackingMon.hp <= AttackingMon.maxhp * 10 / 30))
    {
        movepower = movepower * 150 / 100;
    }

    if ((movetype == TYPE_BUG) && (AttackingMon.ability == ABILITY_SWARM) && (AttackingMon.hp <= AttackingMon.maxhp * 10 / 30))
    {
        movepower = movepower * 150 / 100;
    }

    // handle ice scales - halve damage if move is special, regardless of if it uses defense stat
    if (AI_MoldBreakerAbilityCheck(AttackingMon.ability, DefendingMon.ability, ABILITY_ICE_SCALES) == TRUE && movesplit == SPLIT_SPECIAL)
    {
        movepower /= 2;
    }

    // handle steelworker
    if (AttackingMon.ability == ABILITY_STEELWORKER && (movetype == TYPE_STEEL))
    {
        movepower = movepower * 150 / 100;
    }

    // handle dragon's maw
    if (AttackingMon.ability == ABILITY_DRAGONS_MAW && (movetype == TYPE_DRAGON))
    {
        movepower = movepower * 150 / 100;
    }

    // handle transistor
    if (AttackingMon.ability == ABILITY_TRANSISTOR && (movetype == TYPE_ELECTRIC))
    {
        movepower = movepower * 130 / 100;
    }

    // handle rocky payload
    if (AttackingMon.ability == ABILITY_ROCKY_PAYLOAD && (movetype == TYPE_ROCK))
    {
        movepower = movepower * 150 / 100;
    }

    // if dark aura is present but not aura break
    if ((movetype == TYPE_DARK) && (CheckSideAbility(bw, sp, CHECK_ABILITY_ALL_HP, 0, ABILITY_DARK_AURA) != 0)
      && (CheckSideAbility(bw, sp, CHECK_ABILITY_ALL_HP, 0, ABILITY_AURA_BREAK) == 0))
        movepower = movepower * 133 / 100;

    // if dark aura is present AND aura break
    else if ((movetype == TYPE_DARK) && (CheckSideAbility(bw, sp, CHECK_ABILITY_ALL_HP, 0, ABILITY_DARK_AURA) != 0)
      && (CheckSideAbility(bw, sp, CHECK_ABILITY_ALL_HP, 0, ABILITY_AURA_BREAK) != 0))
        movepower = movepower * 100 / 133;

#if FAIRY_TYPE_IMPLEMENTED == 1
    // if FAIRY aura is present but not aura break
    if ((movetype == TYPE_FAIRY) && (CheckSideAbility(bw, sp, CHECK_ABILITY_ALL_HP, 0, ABILITY_FAIRY_AURA) != 0)
      && (CheckSideAbility(bw, sp, CHECK_ABILITY_ALL_HP, 0, ABILITY_AURA_BREAK) == 0))
        movepower = movepower * 133 / 100;

    // if FAIRY aura is present AND aura break
    else if ((movetype == TYPE_FAIRY) && (CheckSideAbility(bw, sp, CHECK_ABILITY_ALL_HP, 0, ABILITY_FAIRY_AURA) != 0)
      && (CheckSideAbility(bw, sp, CHECK_ABILITY_ALL_HP, 0, ABILITY_AURA_BREAK) != 0))
        movepower = movepower * 100 / 133;
#endif

    // handle steely spirit for the ally
    if (movetype == TYPE_STEEL && GetBattlerAbility(sp, BATTLER_ALLY(enemyMonSlot)) == ABILITY_STEELY_SPIRIT)
    {
        movepower = movepower * 150 / 100;
    }

    // handle steely spirit for the attacker--can stack
    if (movetype == TYPE_STEEL && AttackingMon.ability == ABILITY_STEELY_SPIRIT)
    {
        movepower = movepower * 150 / 100;
    }

    // handle battery
    if (GetBattlerAbility(sp, BATTLER_ALLY(enemyMonSlot)) == ABILITY_BATTERY)
    {
        sp_attack = sp_attack * 130 / 100;
    }

    // handle power spot
    if (GetBattlerAbility(sp, BATTLER_ALLY(enemyMonSlot)) == ABILITY_POWER_SPOT)
    {
        movepower = movepower * 130 / 100;
    }

    // handle friend guard //TODO
    if (GetBattlerAbility(sp, BATTLER_ALLY(enemyMonSlot)) == ABILITY_FRIEND_GUARD)
    {
        movepower = movepower * 75 / 100;
    }

    if (MoveIsAffectedByNormalizeVariants(moveno)) {
        // handle aerilate - 20% boost if a normal type move was changed to a flying type move.  does not boost flying type moves themselves
        if (AttackingMon.ability == ABILITY_AERILATE && movetype == TYPE_FLYING && sp->moveTbl[moveno].type == TYPE_NORMAL) {
            movepower = movepower * 120 / 100;
        }

        // handle pixilate - 20% boost if a normal type move was changed to a fairy type move.  does not boost fairy type moves themselves
        if (AttackingMon.ability == ABILITY_PIXILATE && movetype == TYPE_FAIRY && sp->moveTbl[moveno].type == TYPE_NORMAL) {
            movepower = movepower * 120 / 100;
        }

        // handle galvanize - 20% boost if a normal type move was changed to an electric type move.  does not boost electric type moves themselves
        if (AttackingMon.ability == ABILITY_GALVANIZE && movetype == TYPE_ELECTRIC && sp->moveTbl[moveno].type == TYPE_NORMAL) {
            movepower = movepower * 120 / 100;
        }

        // handle refrigerate - 20% boost if a normal type move was changed to an ice type move.  does not boost ice type moves themselves
        if (AttackingMon.ability == ABILITY_REFRIGERATE && movetype == TYPE_ICE && sp->moveTbl[moveno].type == TYPE_NORMAL) {
            movepower = movepower * 120 / 100;
        }

        // handle normalize - 20% boost if a normal type move is used (and it changes types to normal too)
        if (AttackingMon.ability == ABILITY_NORMALIZE && movetype == TYPE_NORMAL) {
            movepower = movepower * 120 / 100;
        }
    }

    // handle heatproof/dry skin
    if ((movetype == TYPE_FIRE) && (AI_MoldBreakerAbilityCheck(AttackingMon.ability, DefendingMon.ability, ABILITY_HEATPROOF) == TRUE))
    {
        movepower /= 2;
    }

    if ((movetype == TYPE_FIRE) && (AI_MoldBreakerAbilityCheck(AttackingMon.ability, DefendingMon.ability, ABILITY_DRY_SKIN) == TRUE))
    {
        movepower = movepower * 125 / 100;
    }

    // handle simple
    // if (AttackingMon.ability == ABILITY_SIMPLE)
    // {
    //     atkstate *= 2;
    //     if (atkstate < -6)
    //     {
    //         atkstate = -6;
    //     }
    //     if (atkstate > 6)
    //     {
    //         atkstate = 6;
    //     }
    //     spatkstate *= 2;
    //     if (spatkstate < -6)
    //     {
    //         spatkstate = -6;
    //     }
    //     if (spatkstate > 6)
    //     {
    //         spatkstate = 6;
    //     }
    // }

    // if (AI_MoldBreakerAbilityCheck(AttackingMon.ability, DefendingMon.ability, ABILITY_SIMPLE) == TRUE)
    // {
    //     defstate *= 2;
    //     if (defstate < -6)
    //     {
    //         defstate = -6;
    //     }
    //     if (defstate > 6)
    //     {
    //         defstate = 6;
    //     }
    //     spdefstate *= 2;
    //     if (spdefstate < -6)
    //     {
    //         spdefstate = -6;
    //     }
    //     if (spdefstate > 6)
    //     {
    //         spdefstate = 6;
    //     }
    // }

    // handle unaware
    if (AI_MoldBreakerAbilityCheck(AttackingMon.ability, DefendingMon.ability, ABILITY_UNAWARE) == TRUE)
    {
        atkstate = 0;
        spatkstate = 0;
    }

    if (AttackingMon.ability == ABILITY_UNAWARE)
    {
        defstate = 0;
        spdefstate = 0;
    }

    // adjust states to access from the array
    atkstate += 6;
    defstate += 6;
    spatkstate += 6;
    spdefstate += 6;

    // handle rivalry
    if ((AttackingMon.ability == ABILITY_RIVALRY) &&
        (AttackingMon.sex == DefendingMon.sex) && (AttackingMon.sex != POKEMON_GENDER_UNKNOWN) && (DefendingMon.sex != POKEMON_GENDER_UNKNOWN))
    {
        movepower = movepower * 125 / 100;
    }

    if ((AttackingMon.ability == ABILITY_RIVALRY) &&
        (AttackingMon.sex != DefendingMon.sex) && (AttackingMon.sex != POKEMON_GENDER_UNKNOWN) && (DefendingMon.sex != POKEMON_GENDER_UNKNOWN))
    {
        movepower = movepower * 75 / 100;
    }

    // handle iron fist
    if ((AttackingMon.ability == ABILITY_IRON_FIST) && IsElementInArray(PunchingMovesTable, (u16 *)&moveno, NELEMS(PunchingMovesTable), sizeof(PunchingMovesTable[0])))
    {
        movepower = movepower * 12 / 10;
    }

    // handle strong jaw
    if ((AttackingMon.ability == ABILITY_STRONG_JAW) && IsElementInArray(StrongJawMovesTable, (u16 *)&moveno, NELEMS(StrongJawMovesTable), sizeof(StrongJawMovesTable[0])))
    {
        movepower = movepower * 15 / 10;
    }

    // handle mega launcher
    if ((AttackingMon.ability == ABILITY_MEGA_LAUNCHER) && IsElementInArray(MegaLauncherMovesTable, (u16 *)&moveno, NELEMS(MegaLauncherMovesTable), sizeof(MegaLauncherMovesTable[0])))
    {
        movepower = movepower * 15 / 10;
    }

    // handle sharpness
    if ((AttackingMon.ability == ABILITY_SHARPNESS) && IsElementInArray(SharpnessMovesTable, (u16 *)&moveno, NELEMS(SharpnessMovesTable), sizeof(SharpnessMovesTable[0])))
    {
        movepower = movepower * 15 / 10;
    }

    // handle water bubble
    if ((AttackingMon.ability == ABILITY_WATER_BUBBLE) && (movetype == TYPE_WATER))
    {
        movepower = movepower * 2;
    }

    // handle ruin abilities
    if ((CheckSideAbility(bw, sp, CHECK_ABILITY_ALL_HP, 0, ABILITY_VESSEL_OF_RUIN))
      && (DefendingMon.ability != ABILITY_VESSEL_OF_RUIN))
        sp_attack = sp_attack * 75 / 100;

    if ((CheckSideAbility(bw, sp, CHECK_ABILITY_ALL_HP, 0, ABILITY_SWORD_OF_RUIN))
      && (DefendingMon.ability != ABILITY_SWORD_OF_RUIN))
        defense = defense * 75 / 100;

    if ((CheckSideAbility(bw, sp, CHECK_ABILITY_ALL_HP, 0, ABILITY_TABLETS_OF_RUIN))
      && (DefendingMon.ability != ABILITY_TABLETS_OF_RUIN))
        attack = attack * 75 / 100;

    if ((CheckSideAbility(bw, sp, CHECK_ABILITY_ALL_HP, 0, ABILITY_BEADS_OF_RUIN))
      && (DefendingMon.ability != ABILITY_BEADS_OF_RUIN))
        sp_defense = sp_defense * 75 / 100;

    // handle field effects interacting with their moves
    if (sp->terrainOverlay.numberOfTurnsLeft > 0) {
        switch (sp->terrainOverlay.type)
        {
        case ELECTRIC_TERRAIN:
            if (DefendingMon.isGrounded && moveno == MOVE_RISING_VOLTAGE) {
                movepower = movepower * 2;
            }
            break;
        case MISTY_TERRAIN:
            if (AttackingMon.isGrounded && moveno == MOVE_MISTY_EXPLOSION) {
                movepower = movepower * 15 / 10;
            }
            break;
        case PSYCHIC_TERRAIN:
            if (AttackingMon.isGrounded  && moveno == MOVE_EXPANDING_FORCE) {
                movepower = movepower * 15 / 10;
            }
            break;
        default:
            break;
        }
    }

    // handle grav apple
    if ((sp->field_condition & FIELD_STATUS_GRAVITY) && (moveno == MOVE_GRAV_APPLE))
    {
        movepower = movepower * 15 / 10;
    }

    // handle weather boosts
    if ((CheckSideAbility(bw, sp, CHECK_ABILITY_ALL_HP, 0, ABILITY_CLOUD_NINE) == 0) &&
        (CheckSideAbility(bw, sp, CHECK_ABILITY_ALL_HP, 0, ABILITY_AIR_LOCK) == 0))
    {
        if ((field_cond & WEATHER_SUNNY_ANY) && (AttackingMon.ability == ABILITY_SOLAR_POWER))
        {
            sp_attack = sp_attack * 15 / 10;
        }
        if ((field_cond & WEATHER_SANDSTORM_ANY) &&
            ((DefendingMon.type1 == TYPE_ROCK) || (DefendingMon.type2 == TYPE_ROCK)))
        {
            sp_defense = sp_defense * 15 / 10;
        }
        if ((field_cond & WEATHER_SNOW_ANY) &&
            ((DefendingMon.type1 == TYPE_ICE) || (DefendingMon.type2 == TYPE_ICE)))
        {
            defense = defense * 15 / 10;
        }
        if ((field_cond & WEATHER_SUNNY_ANY) &&
            (CheckSideAbility(bw, sp, CHECK_ABILITY_SAME_SIDE_HP, enemyMonSlot, ABILITY_FLOWER_GIFT)))
        {
            attack = attack * 15 / 10;
        }
        if ((field_cond & WEATHER_SUNNY_ANY) &&
            (AttackingMon.ability != ABILITY_MOLD_BREAKER) &&
            (CheckSideAbility(bw, sp, CHECK_ABILITY_SAME_SIDE_HP, BATTLER_OPPONENT(enemyMonSlot), ABILITY_FLOWER_GIFT)))
        {
            sp_defense = sp_defense * 15 / 10;
        }
    }

    u16 equivalentAttack;
    u16 equivalentDefense;
    AI_getEquivalentAttackAndDefense(sp, attack, defense, sp_attack, sp_defense, atkstate, defstate, spatkstate, spdefstate, &movesplit, enemyMonSlot, critical, moveno, &equivalentAttack, &equivalentDefense, isPPAttacker);

    //// halve the defense if using selfdestruct/explosion
    //if (sp->moveTbl[moveno].effect == MOVE_EFFECT_HALVE_DEFENSE)
    //    defense = defense / 2;

    damage = equivalentAttack * movepower;
    damage *= (level * 2 / 5 + 2);

    damage = damage / equivalentDefense;
    damage /= 50;

    // handle physical moves
    if (movesplit == SPLIT_PHYSICAL)
    {
        // burns halve physical damage.  this is ignored by guts and facade (as of gen 6)
        if ((AttackingMon.condition & STATUS_BURN) && (AttackingMon.ability != ABILITY_GUTS) && (moveno != MOVE_FACADE))
        {
            damage /= 2;
        }

        // handle reflect
        if (((side_cond & SIDE_STATUS_REFLECT) != 0)
         && (critical == 1)
         && (sp->moveTbl[moveno].effect != MOVE_EFFECT_REMOVE_SCREENS)
         && (AttackingMon.ability != ABILITY_INFILTRATOR))
        {
            if ((battle_type & BATTLE_TYPE_DOUBLE) && (CheckNumMonsHit(bw, sp, 1, BATTLER_OPPONENT(enemyMonSlot)) == 2)) //TODO
            {
                damage = damage * 2 / 3;
            }
            else
            {
                damage /= 2;
            }
        }
    }
    else// if (movesplit == SPLIT_SPECIAL) // same as above, handle special moves
    {
        // handle light screen
        if (((side_cond & SIDE_STATUS_LIGHT_SCREEN) != 0)
         && (critical == 1)
         && (sp->moveTbl[moveno].effect != MOVE_EFFECT_REMOVE_SCREENS)
         && (AttackingMon.ability != ABILITY_INFILTRATOR))
        {
            if ((battle_type & BATTLE_TYPE_DOUBLE) && (CheckNumMonsHit(bw, sp, 1, BATTLER_OPPONENT(enemyMonSlot)) == 2))
            {
                damage = damage * 2 / 3;
            }
            else
            {
                damage /= 2;
            }
        }
    }

    if ((battle_type & BATTLE_TYPE_DOUBLE) &&
        (sp->moveTbl[moveno].target == 0x4) &&
        (CheckNumMonsHit(bw, sp, 1, BATTLER_OPPONENT(enemyMonSlot)) == 2))
    {
        damage = damage * 3 / 4;
    }

    if ((battle_type & BATTLE_TYPE_DOUBLE) &&
        (sp->moveTbl[moveno].target == 0x8) &&
        (CheckNumMonsHit(bw, sp, 1, BATTLER_OPPONENT(enemyMonSlot)) >= 2))
    {
        damage = damage * 3 / 4;
    }

    // handle weather inate type boosts
    if ((CheckSideAbility(bw, sp, CHECK_ABILITY_ALL_HP, 0, ABILITY_CLOUD_NINE) == 0) &&
        (CheckSideAbility(bw, sp, CHECK_ABILITY_ALL_HP, 0, ABILITY_AIR_LOCK) == 0))
    {
        if (field_cond & WEATHER_RAIN_ANY) // handle rain boosts
        {
            switch (movetype)
            {
            case TYPE_FIRE:
                damage /= 2;
                break;
            case TYPE_WATER:
                damage = damage * 15 / 10;
                break;
            }
        }

        if ((field_cond & (FIELD_STATUS_FOG | WEATHER_HAIL_ANY | WEATHER_SANDSTORM_ANY | WEATHER_RAIN_ANY | WEATHER_SNOW_ANY)) && (moveno == MOVE_SOLAR_BEAM || moveno == MOVE_SOLAR_BLADE)) // solar beam nerf
        {
            damage /= 2;
        }

        if (field_cond & WEATHER_SUNNY_ANY) // sun boosts fire but nerfs water
        {
            switch (movetype)
            {
            case TYPE_FIRE:
                damage = damage * 15 / 10;
                break;
            case TYPE_WATER:
                // If the current weather is Sunny Day and the user is not holding Utility Umbrella, this move's damage is multiplied by 1.5 instead of halved for being Water type.
                if (moveno == MOVE_HYDRO_STEAM && item != ITEM_UTILITY_UMBRELLA) {
                    damage = damage * 15 / 10;
                } else {
                    damage /= 2;
                }
                break;
            }
        }

        if (AttackingMon.ability == ABILITY_SAND_FORCE // sand force boosts damage in sand for certain move types
         && field_cond & WEATHER_SANDSTORM_ANY
         && (movetype == TYPE_GROUND || movetype == TYPE_ROCK || movetype == TYPE_STEEL))
        {
            damage = damage * 130 / 100;
        }
    }

    if (!isPPAttacker)
    {
        if ((BattlePokemonParamGet(sp, enemyMonSlot, BATTLE_MON_FLASH_FIRE_ACTIVATED, NULL)) && (movetype == TYPE_FIRE))
        {
            damage = damage * 15 / 10;
        }
    }

    // handle multiscale
    if ((DefendingMon.ability == ABILITY_MULTISCALE) && (DefendingMon.hp == DefendingMon.maxhp))
    {
        damage /= 2;
    }

    // handle shadow shield
    if ((DefendingMon.ability == ABILITY_SHADOW_SHIELD) && (DefendingMon.hp == DefendingMon.maxhp))
    {
        damage /= 2;
    }

    // handle water bubble
    if ((DefendingMon.ability == ABILITY_WATER_BUBBLE) && (movetype == TYPE_FIRE))
    {
        damage /= 2;
    }

    // handle punk rock TODO uncomment
    if (DefendingMon.ability == ABILITY_PUNK_ROCK && IsMoveSoundBased(moveno))
    {
        damage /= 2;
    }

    // handle purifying salt
    if ((DefendingMon.ability == ABILITY_PURIFYING_SALT) && (movetype == TYPE_GHOST))
    {
        damage /= 2;
    }

    // handle field effects
    if (sp->terrainOverlay.numberOfTurnsLeft > 0) {
        switch (sp->terrainOverlay.type)
        {
        case GRASSY_TERRAIN:
            if (AttackingMon.isGrounded && movetype == TYPE_GRASS) {
                damage = damage * 130 / 100;
            }
            if (moveno == MOVE_EARTHQUAKE || moveno == MOVE_MAGNITUDE || moveno == MOVE_BULLDOZE) {
                damage /= 2;
            }
            break;
        case ELECTRIC_TERRAIN:
            if (AttackingMon.isGrounded && movetype == TYPE_ELECTRIC) {
                damage = damage * 130 / 100;
            }
            break;
        case MISTY_TERRAIN:
            if (DefendingMon.isGrounded && movetype == TYPE_DRAGON) {
                damage /= 2;
            }
            break;
        case PSYCHIC_TERRAIN:
            if (AttackingMon.isGrounded && movetype == TYPE_PSYCHIC) {
                damage = damage * 130 / 100;
            }
            break;
        default:
            break;
        }
    }

    damage = damage + 2;
    return damage;
}