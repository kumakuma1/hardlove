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
#include "../../include/custom/custom_ai.h"

//#define DEBUG_AI_SPEED_CALC 1

int LONG_CALL BattleAI_CalcEffectiveSpeed(void *bw, struct BattleStruct *sp, struct AI_sDamageCalc *monStruct, int numSlot, BOOL inParty)
{
    int side = IsClientEnemy(bw, numSlot);
    int speed = 0;

    u32 speedModifier = UQ412__1_0;

    int stat_stage_spd = monStruct->states[STAT_SPEED] + 6; // normed to +/- stages, so stage 0 = value 6 for array access
    if (stat_stage_spd > 12)
        stat_stage_spd = 12;
    if (inParty 
        && (sp->side_condition[side] & SIDE_STATUS_STICKY_WEB)
        && monStruct->isGrounded 
        && monStruct->item_held_effect != HOLD_EFFECT_IGNORE_ENTRY_HAZARDS) {
        switch (monStruct->ability)
        {
        case ABILITY_FULL_METAL_BODY:
        case ABILITY_CLEAR_BODY:
        case ABILITY_WHITE_SMOKE:
        case ABILITY_MIRROR_ARMOR:
            break;
        case ABILITY_CONTRARY:
            stat_stage_spd = stat_stage_spd + 1;
            break;
        default:
            stat_stage_spd = stat_stage_spd - 1;
            break;
        }
    }

    // Room Service
    if (inParty && sp->field_condition & FIELD_CONDITION_TRICK_ROOM && monStruct->item_held_effect == HOLD_EFFECT_DROP_SPEED_IN_TRICK_ROOM) {
        stat_stage_spd = stat_stage_spd - 1;
    }
    if (stat_stage_spd < 0) {
        stat_stage_spd = 0;
    }
    // Begin calculating Speed Modifiers

    // https://web.archive.org/web/20241226231016/https://www.trainertower.com/dawoblefets-damage-dissertation/
    // NormalRound is QMul_RoundUp
    // pokeRound is QMul_RoundDown

#ifdef DEBUG_AI_SPEED_CALC
    debug_printf("\n=================\n");
    debug_printf("[CalcSpeed] slot: %d, species %d, base speed: %d\n", numSlot, monStruct->species, monStruct->speed);
#endif

    speed = (monStruct->speed * StatBoostModifiers[stat_stage_spd][0] / StatBoostModifiers[stat_stage_spd][1]) % 65536;

#ifdef DEBUG_AI_SPEED_CALC
    debug_printf("\n=================\n");
    debug_printf("[CalcSpeed] after stat changes: %d\n", speed);
#endif

    // Step 1: 2x Abilities
    if ((CheckSideAbility(bw, sp, CHECK_ABILITY_ALL_HP, 0, ABILITY_CLOUD_NINE) == 0)
        && (CheckSideAbility(bw, sp, CHECK_ABILITY_ALL_HP, 0, ABILITY_AIR_LOCK) == 0)) {
        if (((monStruct->ability == ABILITY_SWIFT_SWIM) && (sp->field_condition & FIELD_CONDITION_RAIN_ALL))
            || ((monStruct->ability == ABILITY_CHLOROPHYLL) && (sp->field_condition & FIELD_CONDITION_SUN_ALL))
            || ((monStruct->ability == ABILITY_SAND_RUSH) && (sp->field_condition & FIELD_CONDITION_SANDSTORM_ALL))
            || ((monStruct->ability == ABILITY_SLUSH_RUSH) && (sp->field_condition & (FIELD_CONDITION_SNOW_ALL | FIELD_CONDITION_HAIL_ALL)))) {
            speedModifier = QMul_RoundUp(speedModifier, UQ412__2_0);
        }
    }

    if (sp->terrainOverlay.type == ELECTRIC_TERRAIN && sp->terrainOverlay.numberOfTurnsLeft > 0) {
        if (monStruct->ability == ABILITY_SURGE_SURFER) {
            speedModifier = QMul_RoundUp(speedModifier, UQ412__2_0);
        }
    }

    if (monStruct->ability == ABILITY_UNBURDEN) {
        if ((monStruct->knockOffFlag)
            && (monStruct->item == 0)) {
            speedModifier = QMul_RoundUp(speedModifier, UQ412__2_0);
        }
        if (inParty && sp->terrainOverlay.numberOfTurnsLeft > 0)
        {
            if ((sp->terrainOverlay.type == ELECTRIC_TERRAIN && monStruct->item_held_effect == HOLD_EFFECT_BOOST_DEF_ON_ELECRIC_TERRAIN)
                || (sp->terrainOverlay.type == GRASSY_TERRAIN && monStruct->item_held_effect == HOLD_EFFECT_BOOST_DEF_ON_GRASSY_TERRAIN)
                || (sp->terrainOverlay.type == MISTY_TERRAIN && monStruct->item_held_effect == HOLD_EFFECT_BOOST_SPDEF_ON_MISTY_TERRAIN)
                || (sp->terrainOverlay.type == PSYCHIC_TERRAIN && monStruct->item_held_effect == HOLD_EFFECT_BOOST_SPDEF_ON_PSYCHIC_TERRAIN)) {
                speedModifier = QMul_RoundUp(speedModifier, UQ412__2_0);
            }
        }

    }

#ifdef DEBUG_AI_SPEED_CALC
    debug_printf("\n=================\n");
    debug_printf("[CalcSpeed] Step 1: 2x Abilities\n");
    debug_printf("[CalcSpeed] speedModifier: %d\n", speedModifier);
#endif

    // Step 2: Quick Feet

    if ((monStruct->ability == ABILITY_QUICK_FEET) && (monStruct->condition & STATUS_ANY_PERSISTENT)) {
        speedModifier = QMul_RoundUp(speedModifier, UQ412__1_5);
    }


#ifdef DEBUG_AI_SPEED_CALC
    debug_printf("\n=================\n");
    debug_printf("[CalcSpeed] Step 2: Quick Feet\n");
    debug_printf("[CalcSpeed] speedModifier: %d\n", speedModifier);
#endif

    // Step 3: Slow Start

    if ((monStruct->ability == ABILITY_SLOW_START)
        && ((monStruct->slowStartCount) < 5)) {
        speedModifier = QMul_RoundUp(speedModifier, UQ412__0_5);
    }

#ifdef DEBUG_AI_SPEED_CALC
    debug_printf("\n=================\n");
    debug_printf("[CalcSpeed] Step 3: Slow Start\n");
    debug_printf("[CalcSpeed] speedModifier: %d\n", speedModifier);
#endif

    if ((monStruct->ability == ABILITY_PROTOSYNTHESIS || monStruct->ability == ABILITY_QUARK_DRIVE)
        && (monStruct->paradoxBoostedStat == STAT_SPEED)) {
        speedModifier = QMul_RoundUp(speedModifier, UQ412__1_5);
    }

 #ifdef DEBUG_AI_SPEED_CALC
    debug_printf("\n=================\n");
    debug_printf("[CalcSpeed] Step 3.5: Paradox Boost\n");
    debug_printf("[CalcSpeed] speedModifier: %d\n", speedModifier);
#endif

    // Step 4: Quick Powder

    if ((monStruct->item_held_effect == HOLD_EFFECT_DITTO_SPEED_UP) && (monStruct->species == SPECIES_DITTO)
        // Not transformed
        && !(monStruct->condition2 & STATUS2_TRANSFORM)) {
        speedModifier = QMul_RoundUp(speedModifier, UQ412__2_0);
    }

#ifdef DEBUG_AI_SPEED_CALC
    debug_printf("\n=================\n");
    debug_printf("[CalcSpeed] Step 4: Quick Powder\n");
    debug_printf("[CalcSpeed] speedModifier: %d\n", speedModifier);
#endif

    // Step 5: Choice Scarf

    if (monStruct->item_held_effect == HOLD_EFFECT_CHOICE_SPEED) {
        speedModifier = QMul_RoundUp(speedModifier, UQ412__1_5);
    }

#ifdef DEBUG_AI_SPEED_CALC
    debug_printf("\n=================\n");
    debug_printf("[CalcSpeed] Step 5: Choice Scarf\n");
    debug_printf("[CalcSpeed] speedModifier: %d\n", speedModifier);
#endif

    // Step 6: Iron Ball

    if (monStruct->item_held_effect == HOLD_EFFECT_SPEED_DOWN_GROUNDED && monStruct->ability != ABILITY_KLUTZ) {
        speedModifier = QMul_RoundUp(speedModifier, UQ412__0_5);
    }
#ifdef DEBUG_AI_SPEED_CALC
    debug_printf("\n=================\n");
    debug_printf("[CalcSpeed] Step 6: Iron Ball / Macho Brace / Power EV items\n");
    debug_printf("[CalcSpeed] speedModifier: %d\n", speedModifier);
#endif

    // Step 7: Tailwind

    if (sp->tailwindCount[side]) { // new tailwind handling
        speedModifier = QMul_RoundUp(speedModifier, UQ412__2_0);
    }

#ifdef DEBUG_AI_SPEED_CALC
    debug_printf("\n=================\n");
    debug_printf("[CalcSpeed] Step 7: Tailwind\n");
    debug_printf("[CalcSpeed] speedModifier: %d\n", speedModifier);
#endif

    // Step 8: Swamp


    // Step 9: Apply limit
    // https://www.smogon.com/forums/threads/sword-shield-battle-mechanics-research.3655528/page-59#post-8704137

    speedModifier = speedModifier < 410 ? 410 : speedModifier;

#ifdef DEBUG_AI_SPEED_CALC
    debug_printf("\n=================\n");
    debug_printf("[CalcSpeed] Step 9: Apply limit\n");
    debug_printf("[CalcSpeed] speedModifier: %d\n", speedModifier);
#endif

    // Step 10: Apply the chained modifier to the starting speed

    speed = QMul_RoundDown(speed, speedModifier);

#ifdef DEBUG_AI_SPEED_CALC
    debug_printf("\n=================\n");
    debug_printf("[CalcSpeed] Step 10: Apply the chained modifier to the starting speed\n");
    debug_printf("[CalcSpeed] speed: %d\n", speed);
#endif

    // Step 11: Paralysis
    if ((monStruct->ability != ABILITY_QUICK_FEET)
        && monStruct->condition & STATUS_PARALYSIS) {
        speed = QMul_RoundUp(speed, UQ412__0_5); // gen 7 on only halves speed for paralysis
    }

#ifdef DEBUG_AI_SPEED_CALC
    debug_printf("\n=================\n");
    debug_printf("[CalcSpeed] Step 11: Paralysis\n");
    debug_printf("[CalcSpeed] speed: %d\n", speed);
#endif

    // Step 12: Apply limit

    speed = speed % 65536;
    speed = speed > 10000 ? 10000 : speed;

#ifdef DEBUG_AI_SPEED_CALC
    debug_printf("\n=================\n");
    debug_printf("[CalcSpeed] Step 12: Apply limit\n");
    debug_printf("[CalcSpeed] speed: %d\n", speed);
#endif

    // Step 13: Speed calculations stop here for the purposes of Gyro Ball / Electro Ball
    return speed;
}

// return 0 if client1 moves first, 1 if client2 moves first, 2 if tied
u8 LONG_CALL AI_IsClient2Faster(struct BattleStruct *sp, struct AI_sDamageCalc *client1, struct AI_sDamageCalc *client2)
{
    // Step 14: Trick Room
    u8 move_last1 = 0, move_last2 = 0;
    int speed1 = client1->speed;
    int speed2 = client2->speed;

    if (sp->field_condition & FIELD_CONDITION_TRICK_ROOM) {
        speed1 = 10000 - client1->speed;
        speed2 = 10000 - client2->speed;
    }

    // Step 15: Apply Limit

    speed1 = speed1 % 8192;
    speed2 = speed2 % 8192;


    // End of calculating Speed Modifiers

    if (client1->item_held_effect == HOLD_EFFECT_PRIORITY_DOWN) {
        move_last1 = 1;
    }

    if (client2->item_held_effect == HOLD_EFFECT_PRIORITY_DOWN) {
        move_last2 = 1;
    }

    if (client1->ability == ABILITY_STALL) {
        move_last1++;
    }

    if (client2->ability == ABILITY_STALL) {
        move_last2++;
    }

    if (move_last1 == move_last2 && move_last1 == 0) //no Stall or Laggin Tail
    {
        if (speed1 > speed2) {
            return 0;
        }
        if (speed1 == speed2) {
            return 2;
        }
    } else if (move_last1 == move_last2 && move_last1 > 0) {
        if (speed1 < speed2) {
            return 0;
        }
        if (speed1 == speed2) {
            return 2;
        }
    } else {
        if (move_last1 < move_last2) {
            return 0;
        }
    }

    debug_printf("[CalcSpeedRelation]  speed1=%d, speed2=%d\n", speed1, speed2);
    return 1;
}
