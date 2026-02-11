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

BOOL TrainerAI_ShouldSwitch(struct BattleSystem *bsys, int attacker);

int TrainerAI_PickCommand(struct BattleSystem *bsys, int attacker)
{
    u32 battleType = BattleTypeGet(bsys);
    if (battleType == BATTLE_TYPE_TRAINER || (battleType & (BATTLE_TYPE_MULTI | BATTLE_TYPE_DOUBLE | BATTLE_TYPE_TAG))) {
        if (TrainerAI_ShouldSwitch(bsys, attacker)) {
            return PLAYER_INPUT_PARTY;
        }
    }

    return PLAYER_INPUT_FIGHT;
}

BOOL TrainerAI_ShouldSwitch(struct BattleSystem *bsys, int attacker)
{
    debug_printf("TrainerAI_ShouldSwitch:\n");
    struct BattleStruct *ctx = bsys->sp;
    //u32 battleType = BattleTypeGet(bsys);

    //if (battleType & (BATTLE_TYPE_MULTI | BATTLE_TYPE_DOUBLE | BATTLE_TYPE_TAG)) {
    //    return FALSE;
    //}

    if (CantEscape(bsys, ctx, attacker, NULL)) {
        return FALSE;
    }

    //if (slot == first) //attacker = 1 else attacker = 3
    /*
    calc postKo score
    setup AiContext for attacker
    calc scores

    if singles
        decide if switching/attacking

    if double
    calc postKo score
    setup AiContext for attacker2
    calc scores

    consolidate targets and divert if necessary
    choose moves

    store in bsys->sp
    set bsys->sp state to skip calc
    */

    return FALSE;
}

