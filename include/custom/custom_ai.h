#ifndef CUSTOM_AI_H
#define CUSTOM_AI_H
#include "../battle.h"
#include "../trainer_ai.h"

#define DEBUG_AI_SCORING 1




struct PACKED AI_turnState {
    s16 moveScores[4][4]; // account for BATTLER_OPPONENT (0), attacker (1), BATTLER_ACROSS(2), BATTLER_ALLY(3),  4 moves each or
                          // account for BATTLER_OPPONENT (2), attacker (3), BATTLER_ACROSS(0), BATTLER_ALLY(1),  4 moves each
    int damages[4][4]; // rolled damage for each move against each target

    s16 highestScoredMove;
};

struct PACKED AI_sDamageCalc {
    u16 species;
    u16 hp;
    u16 maxhp;
    u16 percenthp;
    u32 item;
    u16 item_held_effect;
    u32 item_power;

    u32 condition;
    u32 condition2;
    

    u16 ability;
    u8 sex;
    u8 type1;
    u8 type2;
    u8 type3;

    int speed;

    u32 weight;

    u16 attack;
    u16 defense;
    u16 sp_attack;
    u16 sp_defense;
    s8 states[8];
    u8 level;
    u8 form;

   
    u32 effect_of_moves;

    u8 slowStartCount;
    u8 furyCutterCount;
    
    u8 lastResortCount;

    u8 hasMoldBreaker : 1;
    u8 flashFireActivated : 1;
    u8 attackerHasMoveFailureLastTurn : 1;
    u8 canBelch : 1;
    u8 isSwitching : 1;
    u8 isGrounded : 1;
    u8 firstTurnOut : 1;
    u8 abilityActivated : 1;

    u8 knockOffFlag : 1;
    u8 hiddenPowerType : 7;

    u8 paradoxBoostedStat :4;
    u8 metronomeTurns : 4;

    u16 partnerMoveNo;
};

struct PACKED AIContext {
    struct AI_sDamageCalc attackerMon;
    struct AI_sDamageCalc defenderMon; //"player"
    struct AI_sDamageCalc aimonAlly;
    int defenderAllySpeed;

    s8 highestPostKoScoreFromParty;
    s8 postKoScoringPosition;
    int highestDamageHitPrct;

    u8 isAllyAlive : 1;
    u8 isDoubleBattle : 1;
    u8 isPartnerGrounded : 1;

    u8 aiMovesFirst : 1;
    u8 playerMovesFirst : 1;
    u8 isSpeedTie : 1;
    u8 padding0 : 2;


    u8 defenderHasMagicBounce : 1;
    u8 defenderAllyHasMagicBounce : 1;
    u8 defenderImmuneToPoison : 1;
    u8 defenderImmuneToParalysis : 1;
    u8 defenderImmuneToBurn : 1;
    u8 defenderImmuneToSleep : 1;
    u8 defenderImmuneToStatDrop : 1;
    u8 defenderImmuneToFlinch : 1;

    u8 attacker;
    u8 defender;
    u8 defenderSide;
    u8 attackerSide;

    int attackerSpeed;
    int defenderSpeed;

    u8 partySizeAttacker : 4;
    u8 livingMembersAttacker: 4;
    u8 monWithMegaInParty;

    u8 partySizeDefender : 4;
    u8 livingMembersDefender: 4;

    u8 attackerMovesKnown;
    u8 attackerHasAttackingMoves : 1;
    u8 partnerClicksAttackingMove : 1;
    u8 partnerCanAttack : 1;
    u8 ignoreTarget : 1;
    u8 padding1 : 4;

    u16 attackerLastUsedMove;
    u16 defenderLastUsedMove;
    u16 defenderLastUsedMoveEffect;

    u16 attackerMove;
    u16 attackerMoveEffect;

    u8 isDefenderIncapacitated : 1;
    u8 defenderKnowsThawingMove : 1;
    u8 defenderHasAtleastOneUsefulSoundMove : 1;
    u8 defenderCanForceSwitching : 1;
    u8 defenderHasSturdyOrFocusSashActive : 1;
    u8 attackerHasSturdyOrFocusSashActive : 1;
    u8 anyPlayerMonCanOneShotMonWithAnyMove : 1;
    u8 padding2 : 1;

    u32 maxDamageReceived;

    u8 playerCanOneShotMonWithMove[4];
    u8 playerCanOneShotMonWithAnyMove : 1;
    u8 monCanOneShotPlayerWithAnyMove : 1;
    u8 defenderHasAtleastOnePhysicalMove : 1;
    u8 defenderHasAtleastOneSpecialMove : 1;
    u8 defenderHasAtleastOneStatusMove : 1;
    u8 attackerHasValidSwitchingMove : 1;
    u8 attackerHasValidDamagingMove : 1;
    u8 shouldSwitch : 1;
    
    u8 monCanOneShotPlayerWithMove[4];
    u32 attackerRolledMoveDamages[4];
    u32 effectivenessOnPlayer[4];
    u32 attackerRolledMaxDamage;
    u32 attackerMaxRollDamage;

    u16 partnerMoveNo;

    u8 attackerPositiveStatChangesSum;
};

struct PACKED AI_damage {
    u32 damageRoll;
    u32 damageRange[16];
    u32 moveEffectiveness;
};

void LONG_CALL SetupStateVariables(struct BattleSystem *bsys, u32 attacker, u32 defender, struct AIContext *ai, struct AI_sDamageCalc battlerMons[4]);


int LONG_CALL ScoreMovesAgainstDefender(struct BattleSystem *bsys, u32 attacker, u32 target, s16 moveScores[4][4], struct AIContext *ai);
int LONG_CALL ScoreMovesAgainstAlly(struct BattleSystem *bsys, u32 attacker, u32 target, s16 moveScores[4][4], struct AIContext *ai);


int LONG_CALL BattleAI_PostKOSwitchIn(struct BattleSystem *bsys, int attacker);
int LONG_CALL BattleAI_PostKOSwitchIn_Internal(struct BattleSystem *bsys, int attacker, int *score, BOOL calcWithHighestDamageHit, int *highestDamageHitPrct);

int LONG_CALL BattleAI_CalcBaseDamage(void *bw, struct BattleStruct *sp, int moveno, u16 pow, u8 critical, u8 attackerSlot, u8 defenderSlot, struct AI_sDamageCalc *attacker, struct AI_sDamageCalc *defender);
int LONG_CALL BattleAI_CalcDamage(void *bw, struct BattleStruct *sp, int moveno, u16 pow, u8 attackerSlot, u8 defenderSlot, struct AI_damage *damages, struct AI_sDamageCalc *attacker, struct AI_sDamageCalc *defender);

void LONG_CALL FillDamageStructFromPartyMon(void *bw, struct BattleStruct *sp, struct AI_sDamageCalc *monStruct, struct PartyPokemon *pp, int attackerPos UNUSED, int partyPos UNUSED);

void LONG_CALL FillDamageStructFromBattleMon(struct BattleSystem *bw, struct BattleStruct *sp, struct AI_sDamageCalc *monStruct, int numSlot);

BOOL LONG_CALL IsMoveBoostedBySheerForce(u32 moveno, u32 moveeffect);
int LONG_CALL BattleAI_GetTypeEffectiveness(void *bw, struct BattleStruct *sp, int moveno, int move_type, u8 attackerSlot, u8 defenderSlot, struct AI_sDamageCalc *attacker, struct AI_sDamageCalc *defender);
BOOL LONG_CALL IsMoveBlockedByAbility(struct BattleStruct *sp, u8 defenderSlot, struct AI_sDamageCalc *attacker, struct AI_sDamageCalc *defender, int movetype, int moveno, BOOL moveHasPriority);

BOOL LONG_CALL BattleAI_AttackerHasOnlyIneffectiveMoves(struct BattleStruct *ctx, u32 attacker, int knownMoves, u32 effectiveness[4]);

int LONG_CALL BattleAI_AdjustUnusualMoveDamage(struct AI_sDamageCalc *attacker, struct AI_sDamageCalc *defender, u32 damage, u32 moveEffect, u32 moveno UNUSED, u32 effectiveness);
int LONG_CALL BattleAI_GetDynamicMoveType(struct BattleSystem *bsys, struct BattleStruct *ctx, struct AI_sDamageCalc *attacker, int moveno);
BOOL LONG_CALL BattleAI_IsKnockOffPoweredUp(struct AI_sDamageCalc *defender);

BOOL LONG_CALL CanAttackerOneShotDefender(u32 attackerHighestDamage, u8 split, u32 moveno, struct AI_sDamageCalc *attacker, struct AI_sDamageCalc *defender);
BOOL LONG_CALL BattlerKnowsThawingMove(struct BattleSystem *bsys, u32 battler, struct AIContext *ai UNUSED);

BOOL LONG_CALL IsChoicedMoveConsidedUseless(u32 moveno, u8 split);

BOOL LONG_CALL IsBattleMonSlowerThanOpposition(struct BattleStruct *ctx, struct AIContext *ai, struct AI_sDamageCalc *attacker);

BOOL LONG_CALL IsPartyPokemonGrounded(struct BattleStruct *sp, struct PartyPokemon *pp);

BOOL LONG_CALL IsMoveUsefulSoundMove(u32 moveno);
BOOL LONG_CALL IsMoveForceSwitching(u32 moveno);
BOOL LONG_CALL IsMoveValidSwitchingMove(u32 moveno);

u32 LONG_CALL BattleAI_GetWeather(struct BattleSystem *bsys, struct BattleStruct *ctx, int ability);
BOOL LONG_CALL AI_MonHasType(struct AI_sDamageCalc *mon, int type);

u8 LONG_CALL BattleAI_GetHighestParadoxStat(u8 atk, u8 def, u8 spatk, u8 spdef, u8 speed);

BOOL LONG_CALL HasMovePranksterPriority(struct BattleSystem *bsys, u8 attacker, u32 attackerMove, u32 attackerAbility, u8 defender);
BOOL LONG_CALL HasMovePriority(struct BattleSystem *bsys, u8 attacker, u32 attackerMove, u32 attackerAbility, u8 defender);

BOOL LONG_CALL IsMoveUsable(struct BattleStruct *ctx, u8 attacker, u32 move, u32 moveLastUsed, u8 split, u8 index);


int LONG_CALL BattlerPositiveStatChangesSum(struct BattleSystem *bsys, u32 battler);
BOOL LONG_CALL MonDiesFromResidualDamage(struct BattleStruct *ctx, u32 attacker, u32 attackerCondition, BOOL isSeeded);
BOOL LONG_CALL IsMonInflictedWithAnyNegativeStatus(struct BattleStruct *ctx, u32 attacker);

BOOL LONG_CALL BattlerHasSoundBasedMove(struct BattleSystem *bsys, u32 battler, struct AIContext *ai UNUSED);
BOOL LONG_CALL BattlerKnowsFlinchingMove(struct BattleSystem *bsys, u32 battler, struct AIContext *ai UNUSED);
BOOL LONG_CALL BattlerKnowsMove(struct BattleSystem *bsys, u32 battler, u32 move, struct AIContext *ai UNUSED);
BOOL LONG_CALL BattlerKnowsMoveWithEffect(struct BattleSystem *bsys, u32 battler, u32 moveEffect, struct AIContext *ai UNUSED);
BOOL LONG_CALL IsUsedMoveEncouragedToEncore(struct BattleSystem *bsys UNUSED, u32 move, u32 moveEffect);




int LONG_CALL BattleAI_CalcEffectiveSpeed(void *bw, struct BattleStruct *sp, struct AI_sDamageCalc *monStruct, int numSlot, BOOL inParty);
u8 LONG_CALL AI_IsClient2Faster(struct BattleStruct *sp, struct AI_sDamageCalc *client1, struct AI_sDamageCalc *client2);
BOOL LONG_CALL AI_IsClientGrounded(struct BattleStruct *sp, struct AI_sDamageCalc *monStruct, int client);
#endif // !CUSTOM_AI_H
