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

int LONG_CALL AI_CalcBaseDamage(void *bw, struct BattleStruct *sp, int moveno, u32 side_cond,
    u32 field_cond, u16 pow, u8 type UNUSED, u8 attacker, u8 defender, u8 critical, BOOL usePPForAttacker, BOOL usePPForDefender,struct PartyPokemon *pp);
u8 LONG_CALL AI_CalcSpeed(void *bw, struct BattleStruct *sp, int client1, int client2, int flag, int client2IsPP, struct PartyPokemon *pp);
int LONG_CALL AI_ServerDoTypeCalcMod(void *bw UNUSED, struct BattleStruct *sp, int move_no, int move_type, int attack_client, int defence_client, int damage, u32 *flag, BOOL usePPForAttacker, BOOL usePPForDefender, struct PartyPokemon *pp);
u8 LONG_CALL BattleAI_CalcSpeed(void *bw, struct BattleStruct *sp, int client1, struct PartyPokemon* partyMon, int flag);
int LONG_CALL BattleAI_ServerDoTypeCalcMod(void *bw UNUSED, struct BattleStruct *sp, int move_no, int move_type, int enemyMon, int damage, u32 *flag, struct PartyPokemon *pp, BOOL isPPAttacker);
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
int AdjustUnusualMovePower(struct BattleSystem *bsys, u32 attacker, u32 defender, int moveEffect, int attackerPercentHP)
{
    debug_printf("AdjustUnusualMovePower\n");
    struct BattleStruct *ctx = bsys->sp;
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


int LONG_CALL BattleAI_PostKOSwitchIn(struct BattleSystem *bsys, int attacker)
{
    debug_printf("BattleAI_PostKOSwitchIn\n");
    
    struct BattleStruct *ctx = bsys->sp;
    int battleType = BattleTypeGet(bsys);
    struct PartyPokemon *mon;
    u8 speedCalc;
    int work;
    u32 temp = 0;
	u32 defender = BATTLER_OPPONENT(attacker);   //default for singles -- updated in the doubles section
    u8 slot1, slot2;
    u16 move = 0;
    u16 monSpecies;
    u32 minRollMaxDamageDealt[6] = {0};
    u16 switchInScore[6] = {0};
    int partySize = 0;
    u32 effectivenessFlag = 0;

    slot1 = attacker;
 /*   if (battleType & (BATTLE_TYPE_TAG | BATTLE_TYPE_MULTI | BATTLE_TYPE_DOUBLE))
        slot2 = slot1;
    else 
        slot2 = BATTLER_ALLY(attacker);
*/

    partySize = Battle_GetClientPartySize(bsys, attacker);
    for (int i = 0; i < partySize; i++)
        switchInScore[i] = 100;

    for (int i = 0; i < partySize; i++)
    {
        mon = Battle_GetClientPartyMon(bsys, attacker, i);
        monSpecies = GetMonData(mon, MON_DATA_SPECIES_OR_EGG, 0);
        if (monSpecies != SPECIES_NONE && monSpecies != SPECIES_EGG && GetMonData(mon, MON_DATA_HP, 0)
            && i != ctx->sel_mons_no[slot1]
            && i != ctx->sel_mons_no[slot2]
            && i != ctx->aiSwitchedPartySlot[slot1]
            && i != ctx->aiSwitchedPartySlot[slot2])
        {
            speedCalc = BattleAI_CalcSpeed(bsys, ctx, defender, mon, CALCSPEED_FLAG_NO_PRIORITY); //checks actual turn order with field state considered
            
            for(int j = 0; j < CLIENT_MAX; ++j)
            {
                u32 moveDamage = 0;
                move = GetMonData(mon, MON_DATA_MOVE1 + j, NULL);
                if (move != MOVE_NONE)
                {
                    u32 moveEffect = ctx->moveTbl[move].effect;
                    int attackerPercentHP = GetMonData(mon, MON_DATA_HP, 0)*100/GetMonData(mon, MON_DATA_MAXHP, 0);
                    moveDamage = AdjustUnusualMovePower(bsys, defender, attacker, moveEffect, attackerPercentHP);
                    debug_printf("%d : %d\n", j, move);
                    if(ctx->moveTbl[move].split != SPLIT_STATUS && ctx->moveTbl[move].power)
                    {
                        
                        moveDamage = CalcBaseDamage(bsys, ctx, move, ctx->side_condition[BATTLER_IS_ENEMY(defender)], ctx->field_condition, moveDamage, ctx->moveTbl[move].type, attacker, defender, 0, 1, 0, mon);
                        debug_printf("%d -", moveDamage);
                        moveDamage = BattleAI_ServerDoTypeCalcMod(bsys, ctx, move, ctx->moveTbl[move].type, defender, moveDamage, &effectivenessFlag, mon, 1) *85 / 100; //85% is min roll.
                        debug_printf("%d\n", moveDamage);
                        //moveDamage = AdjustUnusualMoveDamage(bsys, attacker, defender, moveDamage, moveEffect, ai);
                        if(moveDamage > minRollMaxDamageDealt[i])
                            minRollMaxDamageDealt[i] = moveDamage;
                    }
                }
            }
        }
    }
	

    return 6;
/*


        int i, j;
    u8 defender, defenderType1, defenderType2;
    u8 monType1, monType2;
    u16 monSpecies;
    u16 move;
    int moveType;
    u8 battlersDisregarded;

    u8 picked = 6;
    u8 slot1, slot2;
    u32 moveStatusFlags = 0;
    int partySize;

    BOOL monHasDamagingMove[6] = {0};
    BOOL monIsFaster[6] = {0};
    u32 monMoveDamagesDealt[4] = {0};
    u32 monMoveDamagesReceived[4] = {0};
    u32 minRollMaxDamageDealt[6] = {0};
    u32 minRollMaxDamageReceived[6] = {0};
    u32 monTieIndices[6] = {0};

    u32 monSwapScore[6] = {0};
    BOOL monCanOHKO[6] = {0};
    BOOL monIsOHKOd[6] = {0};
    u32 currentDamage = 0;
    u32 defenderMove = 0;
    u32 highestMonScore = 0;

    struct PartyPokemon *mon;
    struct BattleStruct *battleCtx = battleSys->sp;
    int battleType = BattleTypeGet(battleSys);

    slot1 = battler;
    if (battleType & (BATTLE_TYPE_TAG | BATTLE_TYPE_MULTI)) {
        slot2 = slot1;
    } else {
        slot2 = BATTLER_ALLY(battler);
    }

    defender = BATTLER_OPPONENT(battler); //BattleSystem_RandomOpponent(battleSys, battleCtx, battler); was random opponent in pokeplat
    partySize = Battle_GetClientPartySize(battleSys, battler);
    battlersDisregarded = 0;

    picked = 6;

    // Stage 2: Loop through all the party slots and score them by how much damage would be done
    // by the maximum non-critical roll of each of their moves if it were used by the battler
    // which just fainted. Choose the Pokemon with the highest such score, breaking ties by
    // party-order.


    for (i = 0; i < partySize; i++) {
        mon = Battle_GetClientPartyMon(battleSys, battler, i);
        monSpecies = GetMonData(mon, MON_DATA_SPECIES_OR_EGG, 0);

        //debug_printf("checking index %d which is species %d\n",i,monSpecies);
        //debug_printf("info for i = %d: %d, %d, %d, %d\n",i,battleCtx->sel_mons_no[slot1],battleCtx->sel_mons_no[slot2], battleCtx->aiSwitchedPartySlot[slot1],battleCtx->aiSwitchedPartySlot[slot2]);
        if (monSpecies != SPECIES_NONE
            && monSpecies != SPECIES_EGG
            && GetMonData(mon, MON_DATA_HP, 0)
            //&& (battlersDisregarded & No2Bit(i)) == FALSE
            && i != battleCtx->sel_mons_no[slot1]
            && i != battleCtx->sel_mons_no[slot2]
            && i != battleCtx->aiSwitchedPartySlot[slot1]
            && i != battleCtx->aiSwitchedPartySlot[slot2]) {
            debug_printf("operating on %d which is species %d\n",i,monSpecies);
            monSwapScore[i] = 10; //initialize the valid swaps to 10, leaving invalid ones at zero so they are never chosen
            for (j = 0; j < CLIENT_MAX; j++) {
                currentDamage = 0;
                
                move = GetMonData(mon, MON_DATA_MOVE1 + j, NULL); 
                moveType = battleCtx->moveTbl[move].effect; 

                //first see whether current mon is faster than defender
                monIsFaster[i] = AI_CalcSpeed(battleSys, battleCtx, defender, battler, 0, 1, mon); //1 if faster, 0 if slower, 2 if tied
                debug_printf("Mon is faster? %d\n",monIsFaster[i]);

                //if the current move is a damaging move, compute the damage to be potentially dealt to the defender,
                //then apply type chart modifiers.
                if(battleCtx->moveTbl[move].split != SPLIT_STATUS && battleCtx->moveTbl[move].power){
                    currentDamage = AI_CalcBaseDamage(battleSys, battleCtx, move, battleCtx->side_condition[BATTLER_IS_ENEMY(defender)],
                     battleCtx->field_condition, battleCtx->moveTbl[move].power, battleCtx->moveTbl[move].type, battler, defender, 0, 1, 0, mon);
                     debug_printf("BEFORE TYPE MOD: operating on %d which can deal  %d damage with move slot %d\n",i, currentDamage, j);
                    currentDamage = AI_ServerDoTypeCalcMod(battleSys, battleCtx, move, battleCtx->moveTbl[move].type, battler, defender, currentDamage, &moveStatusFlags, 1, 0, mon) * 85 / 100;
                    debug_printf("AFTER TYPE MOD: operating on %d which can deal  %d damage with move slot %d\n",i, currentDamage, j);

                }
                if(currentDamage > minRollMaxDamageDealt[i]){
                    minRollMaxDamageDealt[i] = currentDamage;
                }
                if(currentDamage){
                    monHasDamagingMove[i] = TRUE;
                    if(currentDamage > battleCtx->battlemon[defender].hp){
                        monCanOHKO[i] = TRUE;
                    }
                }
                debug_printf("operating on %d which can deal  %d damage with move slot %d\n",i, currentDamage, j);
                //Now compute how much damage the ai would receive 
                //(in other words, swap attacker and defender)
                defenderMove = battleCtx->battlemon[defender].move[j];
                if(battleCtx->moveTbl[defenderMove].split != SPLIT_STATUS && battleCtx->moveTbl[defenderMove].power){
                    currentDamage = AI_CalcBaseDamage(battleSys, battleCtx, defenderMove, battleCtx->side_condition[BATTLER_IS_ENEMY(battler)],
                     battleCtx->field_condition, battleCtx->moveTbl[defenderMove].power, battleCtx->moveTbl[defenderMove].type, defender, battler, 0, 0, 1, mon);
                     currentDamage = AI_ServerDoTypeCalcMod(battleSys, battleCtx, defenderMove, battleCtx->moveTbl[defenderMove].type, defender, battler, currentDamage, &moveStatusFlags, 0, 1, mon) * 85 / 100;
                }
                if(currentDamage > minRollMaxDamageReceived[i]){
                    minRollMaxDamageReceived[i] = currentDamage;
                }
                if(currentDamage){
                    if(currentDamage > GetMonData(mon, MON_DATA_HP, 0)){
                        monIsOHKOd[i] = TRUE;
                    }
                }
                debug_printf("operating on %d which can receive  %d damage with move slot %d\n",i, currentDamage, j);
            }
        } 
    }

    //Now compute the score for each Pokemon in the party
    for (i = 0; i < partySize; i++){
        if(!(monSwapScore[i])){
            continue;
        }
        if(monHasDamagingMove[i]){
            if(monIsFaster[i]){
                if(monCanOHKO[i]){
                    monSwapScore[i] += 5;
                }
                else{
                    if(minRollMaxDamageDealt[i] * 100 / battleCtx->battlemon[defender].hp > minRollMaxDamageReceived[i] * 100 / GetMonData(mon, MON_DATA_HP, 0)){
                        monSwapScore[i] += 3;
                    }
                    else{
                        monSwapScore[i] += 1;
                    }
                }
            }
            else{
                if(monIsOHKOd[i]){
                    monSwapScore[i] -= 1;
                }
                else{
                    if(monCanOHKO[i]){
                        monSwapScore[i] += 4;
                    }
                    else{
                        if(minRollMaxDamageDealt[i] * 100 / battleCtx->battlemon[defender].hp > minRollMaxDamageReceived[i] * 100 / GetMonData(mon, MON_DATA_HP, 0)){
                            monSwapScore[i] += 2;
                        }
                        else{
                            monSwapScore[i] += 0;
                        }
                    }
                }
            }
        }
        else{
            if(GetMonData(Battle_GetClientPartyMon(battleSys, battler, i),MON_DATA_SPECIES,0) == SPECIES_DITTO){
                monSwapScore[i] += 2;
            }
            else{
                if((GetMonData(Battle_GetClientPartyMon(battleSys, battler, i),MON_DATA_SPECIES,0) == SPECIES_WOBBUFFET ||
                    GetMonData(Battle_GetClientPartyMon(battleSys, battler, i),MON_DATA_SPECIES,0) == SPECIES_WYNAUT) &&
                    !(monIsOHKOd[i])){
                    monSwapScore[i] += 2;
                }
                else{
                    monSwapScore[i] += 0;
                }
            }
        }
        if(monSwapScore[i] > highestMonScore){
            highestMonScore = monSwapScore[i];
        }
    }

    //*Now that all the scores have been computed, select the highest one (and if tie, select randomly)
    int j_tie_index = 0;
    int num_mon_score_ties = 0;

    for (int mon_no = 0; mon_no < partySize; mon_no++){   
        debug_printf("The swap index %d has score %d\n",mon_no,monSwapScore[mon_no]);       //check for ties
        if(monSwapScore[mon_no] == highestMonScore){
            num_mon_score_ties++;
            monTieIndices[j_tie_index] = mon_no;
            j_tie_index++;
        }
    }
    picked = monTieIndices[BattleRand(battleSys) % num_mon_score_ties];
    debug_printf("Picking index number %d\n\n",picked);
    return picked;
    */
}

// return 0 if client1 moves first, 1 if client2 moves first, 2 if random roll between the two.
u8 LONG_CALL BattleAI_CalcSpeed(void *bw, struct BattleStruct *sp, int client1, struct PartyPokemon* partyMon, int flag) {
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
    u32 i;

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
    debug_printf("[CalcSpeed] %s's base speed: %d\n", client2Nickname, sp->battlemon[client2].speed);
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

    if (((sp->server_status_flag & SERVER_STATUS_FLAG_TYPE_FLAT) == 0) && ((attacker_type_1 == move_type) || (attacker_type_2 == move_type)))
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
                if ((ability_a == ABILITY_SCRAPPY || ability_a == ABILITY_MINDS_EYE) || (!isPPAttacker && ability_a == ABILITY_SCRAPPY))
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
                        damage = TypeCheckCalc(sp, 0, TypeEffectivenessTable[i][2], damage, base_power, flag); //attack_client not used
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