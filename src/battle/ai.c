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



// function declarations
void LONG_CALL AITypeCalc(struct BattleStruct *sp, u32 move, u32 type, int atkAbility, int defAbility, int held_effect, int type1, int type2, u32 *flag);
int LONG_CALL BattleAI_PostKOSwitchIn(struct BattleSystem *battleSys, int battler);

int LONG_CALL AI_CalcBaseDamage(void *bw, struct BattleStruct *sp, int moveno, u32 side_cond,
    u32 field_cond, u16 pow, u8 type UNUSED, u8 attacker, u8 defender, u8 critical, BOOL usePPForAttacker, BOOL usePPForDefender,struct PartyPokemon *pp);
u8 LONG_CALL AI_CalcSpeed(void *bw, struct BattleStruct *sp, int client1, int client2, int flag, int client2IsPP, struct PartyPokemon *pp);
int LONG_CALL AI_ServerDoTypeCalcMod(void *bw UNUSED, struct BattleStruct *sp, int move_no, int move_type, int attack_client, int defence_client, int damage, u32 *flag, BOOL usePPForAttacker, BOOL usePPForDefender, struct PartyPokemon *pp);


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
    int partySize = 0;
    
    slot1 = attacker;
 /*   if (battleType & (BATTLE_TYPE_TAG | BATTLE_TYPE_MULTI | BATTLE_TYPE_DOUBLE))
        slot2 = slot1;
    else 
        slot2 = BATTLER_ALLY(attacker);
*/

    partySize = Battle_GetClientPartySize(bsys, attacker);
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
            
            /*
            speedCalc = CalcSpeed(ctx, ctx, defender, attacker, CALCSPEED_FLAG_NO_PRIORITY); //checks actual turn order with field state considered
            for(int j = 0; j < GetBattlerLearnedMoveCount(bsys, ctx, attacker); ++j)
            {
                u32 moveDamage = 0;
                move = GetMonData(mon, MON_DATA_MOVE1 + j, NULL);
                attackerEffectCheck = battleCtx->moveTbl[move].effect;
                moveDamage = AdjustUnusualMovePower(bsys, defender, attacker, attackerEffectCheck, ai);
                if(battleCtx->moveTbl[move].split != SPLIT_STATUS && battleCtx->moveTbl[move].power)
                {
                    minRollMaxDamageDealt[i] = CalcBaseDamage(bsys, ctx, attackerMoveCheck, ctx->side_condition[ai->defenderSide],ctx->field_condition, moveDamage, 0, ai->attacker, ai->defender, 0, 0, 0, NULL);
                    minRollMaxDamageDealt[i] = ServerDoTypeCalcMod(bsys, ctx, attackerMoveCheck, 0, attacker, ai->defender, ai->attackerMinRollMoveDamages[i], &temp) *85 / 100; //85% is min roll.
                    minRollMaxDamageDealt[i] = AdjustUnusualMoveDamage(bsys, ai->attacker, ai->defender, ai->attackerMinRollMoveDamages[i], attackerEffectCheck, ai);
                    if(moveDamage > minRollMaxDamageDealt[i])
                        minRollMaxDamageDealt[i] = moveDamage;
                }          
            }
            */
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