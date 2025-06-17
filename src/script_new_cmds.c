#include "../include/types.h"
#include "../include/script.h"
#include "../include/repel.h"
#include "../include/constants/file.h"
#include "../include/battle.h"
#include "../include/pokemon.h"
#include "../include/constants/ability.h"

#define SCRIPT_NEW_CMD_REPEL_USE    0

#define SCRIPT_NEW_CMD_MAX          256

BOOL Script_RunNewCmd(SCRIPTCONTEXT *ctx) {
    u8 sw = ScriptReadByte(ctx);
    u16 UNUSED arg0 = ScriptReadHalfword(ctx);

    switch (sw) {
        case SCRIPT_NEW_CMD_REPEL_USE:;
#ifdef IMPLEMENT_REUSABLE_REPELS
            u16 most_recent_repel = Repel_GetMostRecent();
            SetScriptVar(arg0, most_recent_repel);
            Repel_Use(most_recent_repel, HEAPID_MAIN_HEAP);
#endif
            break;

        default: break;
    }

    return FALSE;
}


#define SET_HP_IV_MAX 0
#define SET_ATK_IV_MAX 1
#define SET_DEF_IV_MAX 2
#define SET_SPEED_IV_MAX 3
#define SET_SPATK_IV_MAX 4
#define SET_SPDEF_IV_MAX 5

#define SET_STATUS_BURN 11
#define SET_STATUS_FROZEN 12
#define SET_STATUS_PARALYSIS 13
#define SET_STATUS_POISON 14
#define SET_STATUS_SLEEP 15

#define SET_BATTLE_BOND 19
#define SET_NATURE_MIN 20
#define SET_NATURE_MAX 44


BOOL Script_RunNewUtility(SCRIPTCONTEXT *ctx)
{
    u8 UNUSED sw = ScriptReadByte(ctx);
    u16 property = ScriptReadHalfword(ctx);
    property = GetScriptVar(0x8008);
    u16 partySlot = GetScriptVar(0x8005);

    FieldSystem *fsys = ctx->fsys;

    struct Party *party = SaveData_GetPlayerPartyPtr(fsys->savedata);
    struct PartyPokemon *pp = Party_GetMonByIndex(party, partySlot);
    struct BoxPokemon *boxmon = &pp->box;

    int type1 = GetBoxMonData(boxmon, MON_DATA_TYPE_1, NULL);
    int type2 = GetBoxMonData(boxmon, MON_DATA_TYPE_2, NULL);
    u32 currentAbility = GetBoxMonData(boxmon, MON_DATA_ABILITY, NULL);

    // We define these like this because the set data functions require pointers
    int maxIV = 31;

    int burn = STATUS_BURN;
    int frozen = STATUS_FREEZE;
    int paralysis = STATUS_PARALYSIS;
    int poison = STATUS_POISON;
    int sleep = STATUS_SLEEP;

    if (property <= SET_SPDEF_IV_MAX)
    {
        SetBoxMonData(boxmon, (MON_DATA_HP_IV + property), &maxIV);
        RecalcPartyPokemonStats(pp);
    }

    if (property == SET_STATUS_BURN)
    {
        if (type1 == TYPE_FIRE || type2 == TYPE_FIRE || currentAbility == ABILITY_WATER_VEIL || currentAbility == ABILITY_THERMAL_EXCHANGE || currentAbility == ABILITY_WATER_BUBBLE)
        {
            SetScriptVar(0x800C, 0);
            return FALSE;
        }

        SetMonData(pp, MON_DATA_STATUS, &burn);
    }
    else if (property == SET_STATUS_FROZEN)
    {
        if (type1 == TYPE_ICE || type2 == TYPE_ICE || currentAbility == ABILITY_MAGMA_ARMOR)
        {
            SetScriptVar(0x800C, 0);
            return FALSE;
        }

        SetMonData(pp, MON_DATA_STATUS, &frozen);
    } 
    else if (property == SET_STATUS_PARALYSIS)
    {
        if (type1 == TYPE_ELECTRIC || type2 == TYPE_ELECTRIC || currentAbility == ABILITY_LIMBER)
        {
            SetScriptVar(0x800C, 0);
            return FALSE;
        }

        SetMonData(pp, MON_DATA_STATUS, &paralysis);
    } 
    else if (property == SET_STATUS_POISON)
    {
        if (type1 == TYPE_POISON || type1 == TYPE_STEEL || type2 == TYPE_POISON || type2 == TYPE_STEEL || currentAbility == ABILITY_IMMUNITY || currentAbility == ABILITY_PASTEL_VEIL)
        {
            SetScriptVar(0x800C, 0);
            return FALSE;
        }

        SetMonData(pp, MON_DATA_STATUS, &poison);
    } 
    else if (property == SET_STATUS_SLEEP)
    {
        if (currentAbility == ABILITY_INSOMNIA || currentAbility == ABILITY_VITAL_SPIRIT || currentAbility == ABILITY_SWEET_VEIL)
        {
            SetScriptVar(0x800C, 0);
            return FALSE;
        }

        SetMonData(pp, MON_DATA_STATUS, &sleep);
    }

    if (property == SET_BATTLE_BOND)
    {
        currentAbility = ABILITY_BATTLE_BOND;
        SetMonData(pp, MON_DATA_ABILITY, &currentAbility);
    }

    if (property >= SET_NATURE_MIN && property <= SET_NATURE_MAX)
    {
        u32 nature = property - SET_NATURE_MIN;
        SET_MON_NATURE_OVERRIDE(pp, nature)
        RecalcPartyPokemonStats(pp);
    }

    SetScriptVar(0x800C, 1);
    return TRUE;
}