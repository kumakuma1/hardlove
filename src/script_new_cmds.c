#include "../include/battle.h"
#include "../include/constants/ability.h"
#include "../include/constants/file.h"
#include "../include/pokemon.h"
#include "../include/repel.h"
#include "../include/roamer.h"
#include "../include/script.h"
#include "../include/types.h"
#include "../include/window.h"

#define SCRIPT_NEW_CMD_REPEL_USE    0
#define SCRIPT_NEW_CMD_STATUS_REPEL 1
#define SCRIPT_NEW_CMD_TOGGLE_REPEL 2

#define SCRIPT_NEW_CMD_CHAPTER_TEXT 200
#define SCRIPT_NEW_CMD_CHAPTER_TEXT_CLOSE 201
#define SCRIPT_NEW_CMD_MAX 256

static struct Window window;
static String *message;

BOOL Script_RunNewCmd(SCRIPTCONTEXT *ctx)
{
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
    case SCRIPT_NEW_CMD_STATUS_REPEL: {
        SaveData *saveData = SaveBlock2_get();
        void *roamerSaveData = EncDataSave_GetSaveDataPtr(saveData);
        u8 *repel_addr = SaveData_GetRepelPtr(roamerSaveData);
        if (*repel_addr == 0) {
            SetScriptVar(0x800C, 0);
            return FALSE;
        } else {
            SetScriptVar(0x800C, 1);
            return TRUE;
        }

        break;
    }
    case SCRIPT_NEW_CMD_TOGGLE_REPEL: {
        SaveData *saveData = SaveBlock2_get();
        void *roamerSaveData = EncDataSave_GetSaveDataPtr(saveData);
        u8 *repel_addr = SaveData_GetRepelPtr(roamerSaveData);
        if (*repel_addr != 0) {
            *repel_addr = 0;
            return FALSE;
        } else {
            *repel_addr = 1;
            return TRUE;
        }

        break;
    }
    case SCRIPT_NEW_CMD_CHAPTER_TEXT: {
        void *bgConfig = ctx->fsys->bg_config;

        u8 bgId = 3;
        u8 paletteNum = 12;
        u16 baseTile = 707;

        //struct Window *msgWindow = (struct Window *)FieldSysGetAttrAddr(ctx->fsys, SCRIPTENV_WINDOW);
        debug_printf("Adding window with parameters: bgConfig=%p, window=%p, 3, 8, 2, 16, 10, 12, 707\n", bgConfig, &window);
        AddWindowParameterized(bgConfig, &window, 3, 8, 2, 16, 10, 12, 707);

        debug_printf("Filling window pixel buffer\n");
        FillWindowPixelBuffer(&window, 0xFF);

        debug_printf("Drawing frame and window\n");
        LoadUserFrameGfx1(bgConfig, bgId, 1, 8, 0, HEAPID_FIELD1);
        DrawFrameAndWindow1(&window, TRUE, 1, 8);

        debug_printf("Getting message ID and reading message data %d\n", GetScriptVar(0x8004));
        int msgId = GetScriptVar(0x8004);
        message = NewString_ReadMsgData((MsgData *)ctx->msg_data, msgId);

        debug_printf("Adding text printer to window\n");
        AddTextPrinterParameterized(&window, 0, message, 0, 0, 0, 0);

        break;
    }
    case SCRIPT_NEW_CMD_CHAPTER_TEXT_CLOSE: {
        debug_printf("Closing chapter text window\n");
        sub_0200E5D4(&window, 0);
        RemoveWindow(&window);

        if (message != NULL) {
            sys_FreeMemoryEz(message);
            message = NULL;
        }
        break;
    }
    default:
        break;
    }

    return FALSE;
}

#define SET_HP_IV_MAX    0
#define SET_ATK_IV_MAX   1
#define SET_DEF_IV_MAX   2
#define SET_SPEED_IV_MAX 3
#define SET_SPATK_IV_MAX 4
#define SET_SPDEF_IV_MAX 5

#define SET_STATUS_BURN      11
#define SET_STATUS_FROZEN    12
#define SET_STATUS_PARALYSIS 13
#define SET_STATUS_POISON    14
#define SET_STATUS_SLEEP     15

#define SET_BATTLE_BOND 19
#define SET_NATURE_MIN  20
#define SET_NATURE_MAX  44

#define TOGGLE_REPEL 1000

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

    if (property <= SET_SPDEF_IV_MAX) {
        SetBoxMonData(boxmon, (MON_DATA_HP_IV + property), &maxIV);
        RecalcPartyPokemonStats(pp);
    }

    if (property == SET_STATUS_BURN) {
        if (type1 == TYPE_FIRE || type2 == TYPE_FIRE || currentAbility == ABILITY_WATER_VEIL || currentAbility == ABILITY_THERMAL_EXCHANGE || currentAbility == ABILITY_WATER_BUBBLE) {
            SetScriptVar(0x800C, 0);
            return FALSE;
        }

        SetMonData(pp, MON_DATA_STATUS, &burn);
    } else if (property == SET_STATUS_FROZEN) {
        if (type1 == TYPE_ICE || type2 == TYPE_ICE || currentAbility == ABILITY_MAGMA_ARMOR) {
            SetScriptVar(0x800C, 0);
            return FALSE;
        }

        SetMonData(pp, MON_DATA_STATUS, &frozen);
    } else if (property == SET_STATUS_PARALYSIS) {
        if (type1 == TYPE_ELECTRIC || type2 == TYPE_ELECTRIC || currentAbility == ABILITY_LIMBER) {
            SetScriptVar(0x800C, 0);
            return FALSE;
        }

        SetMonData(pp, MON_DATA_STATUS, &paralysis);
    } else if (property == SET_STATUS_POISON) {
        if (type1 == TYPE_POISON || type1 == TYPE_STEEL || type2 == TYPE_POISON || type2 == TYPE_STEEL || currentAbility == ABILITY_IMMUNITY || currentAbility == ABILITY_PASTEL_VEIL) {
            SetScriptVar(0x800C, 0);
            return FALSE;
        }

        SetMonData(pp, MON_DATA_STATUS, &poison);
    } else if (property == SET_STATUS_SLEEP) {
        if (currentAbility == ABILITY_INSOMNIA || currentAbility == ABILITY_VITAL_SPIRIT || currentAbility == ABILITY_SWEET_VEIL) {
            SetScriptVar(0x800C, 0);
            return FALSE;
        }

        SetMonData(pp, MON_DATA_STATUS, &sleep);
    }

    if (property == SET_BATTLE_BOND) {
        currentAbility = ABILITY_BATTLE_BOND;
        SetMonData(pp, MON_DATA_ABILITY, &currentAbility);
    }

    if (property >= SET_NATURE_MIN && property <= SET_NATURE_MAX) {
        u32 nature = property - SET_NATURE_MIN;
        SET_MON_NATURE_OVERRIDE(pp, nature)
        RecalcPartyPokemonStats(pp);
    }

    SetScriptVar(0x800C, 1);
    return TRUE;
}

BOOL LONG_CALL ScrCmd_CreateRoamer(SCRIPTCONTEXT *ctx)
{
    u8 roamerNo = ScriptReadByte(ctx);
    Save_CreateRoamerByID(ctx->fsys->savedata, roamerNo);
    return FALSE;
}
