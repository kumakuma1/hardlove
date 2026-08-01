#include "../include/config.h"
#include "../include/constants/file.h"
#include "../include/constants/maps.h"
#include "../include/constants/roamer.h"
#include "../include/constants/species.h"
#include "../include/debug.h"
#include "../include/map_events_internal.h"
#include "../include/message.h"
#include "../include/roamer.h"
#include "../include/save.h"
#include "../include/script.h"
#include "../include/types.h"
#include "../include/pokemon.h"

/* In order to change the adjacent routes we would need to hook
 * https://github.com/pret/pokeheartgold/blob/d72700a52ad27ddf47847009a85b4bc9c85fa283/src/field_roamer.c#L256
 */

static const u32 sRoamerLocations[ROAMER_LOC_COUNT] = {
    // Johto
    MAP_R29,
    MAP_R30,
    MAP_R31,
    MAP_R32,
    MAP_R33,
    MAP_R34,
    MAP_R35,
    MAP_R36,
    MAP_R37,
    MAP_R38,
    MAP_R39,
    MAP_R42,
    MAP_R43,
    MAP_R44,
    MAP_R45,
    MAP_R46,

    // Kanto
    MAP_R01,
    MAP_R02,
    MAP_R03,
    MAP_R04,
    MAP_R05,
    MAP_R06,
    MAP_R07,
    MAP_R08,
    MAP_R09,
    MAP_R10,
    MAP_R11,
    MAP_R12,
    MAP_R13,
    MAP_R14,
    MAP_R15,
    MAP_R16,
    MAP_R17,
    MAP_R18,
    MAP_W19,
    MAP_W20,
    MAP_W21,
    MAP_R22,
    MAP_R24,
    MAP_R26,
    MAP_R28,
};

void LONG_CALL RoamerLocationSetRandom(void *roamerSave, u8 roamer_idx, u32 last_loc)
{
    u32 roamer_cur_loc, roamer_test_loc;
    u8 loc_min, loc_num;
    u8 loc_cur_rand;

    roamer_cur_loc = sRoamerLocations[Roamer_GetLocation(roamerSave, roamer_idx)];
  //  if (roamer_idx == ROAMER_RAIKOU || roamer_idx == ROAMER_ENTEI) {
        loc_num = ROAMER_LOC_JOHTO_COUNT;
        loc_min = ROAMER_LOC_JOHTO_START;
   // } else {
   //     loc_num = ROAMER_LOC_KANTO_COUNT;
   //     loc_min = ROAMER_LOC_KANTO_START;
   // }
    do {
        loc_cur_rand = (gf_rand() % loc_num) + loc_min;
        roamer_test_loc = sRoamerLocations[loc_cur_rand];
    } while (roamer_test_loc == last_loc || roamer_test_loc == roamer_cur_loc);
    ApplyRoamerLocation(roamerSave, roamer_idx, loc_cur_rand, roamer_test_loc);
}

void LONG_CALL drawRandomRoamer()
{
    int array[] = { SPECIES_IRON_BOULDER, SPECIES_IRON_CROWN, SPECIES_IRON_HANDS, SPECIES_IRON_BUNDLE, SPECIES_IRON_LEAVES, SPECIES_FLUTTER_MANE, SPECIES_GREAT_TUSK, SPECIES_RAGING_BOLT };
    arrayShuffle(array, 8);

    for (unsigned int i = 0; i < 4; i++) {
        SetScriptVar(0x40BB + i, array[i]); // 0x40BB, 0x40BC, 0x40BD, 0x40BE
    }
}
void LONG_CALL Save_CreateRoamerByID(SaveData *saveData, u8 idx)
{
    void *profile;
    void *roamerSave = EncDataSave_GetSaveDataPtr(saveData);
    Roamer *roamerStats = Roamers_GetRoamMonStats(roamerSave, idx);
    struct PartyPokemon *mon;
    u16 species;
    u8 level;

    switch (idx) {
    case ROAMER_RAIKOU:
        drawRandomRoamer();
        species = GetScriptVar(0x40BB);
        level = 75;
        break;
    case ROAMER_ENTEI:
        species = GetScriptVar(0x40BC);
        level = 75;
        break;
    case ROAMER_LATIAS:
        species = GetScriptVar(0x40BD);
        level = 75;
        break;
    case ROAMER_LATIOS:
        species = GetScriptVar(0x40BE);
        level = 75;
        break;
    default:
        GF_ASSERT(FALSE);
        return;
    }

    SetRoamerData(roamerStats, ROAMER_DATA_SPECIES, species);
    SetRoamerData(roamerStats, ROAMER_DATA_LEVEL, level);

    profile = Sav2_PlayerData_GetProfileAddr(saveData);
    mon = AllocMonZeroed(4);
    ZeroMonData(mon);
    PokeParaSet(mon, species, level, 32, FALSE, 0, OT_ID_PRESET, PlayerProfile_GetTrainerID_VisibleHalf(profile));
    int array[] = { 0, 1, 2, 3, 4, 5 };
    arrayShuffle(array, 6);

    int iv = 31;
    // Randomly chooses 3 stats
    for (int i = 0; i < 3; i++) {
        u8 selectedValue = array[i];
        SetMonData(mon, MON_DATA_HP_IV + selectedValue, &iv);
    
    }
    RecalcPartyPokemonStats(mon);
    SetRoamerData(roamerStats, ROAMER_DATA_STATUS, 0);
    SetRoamerData(roamerStats, ROAMER_DATA_ACTIVE, TRUE);
    SetRoamerData(roamerStats, ROAMER_DATA_IVS, GetMonData(mon, MON_DATA_IVS_WORD, NULL));
    SetRoamerData(roamerStats, ROAMER_DATA_PERSONALITY, GetMonData(mon, MON_DATA_PERSONALITY, NULL));
    SetRoamerData(roamerStats, ROAMER_DATA_HP, GetMonData(mon, MON_DATA_MAXHP, NULL));
    sys_FreeMemoryEz(mon);
    RoamerLocationSetRandom(roamerSave, idx, PlayerLocationHistoryGetBack(roamerSave));
}

u8 LONG_CALL SpeciesToRoamerIdx(u16 species)
{
    int roamer1 = GetScriptVar(0x40BB);
    int roamer2 = GetScriptVar(0x40BC);
    int roamer3 = GetScriptVar(0x40BD);
    int roamer4 = GetScriptVar(0x40BE);

    if (species == roamer1) {
        return ROAMER_RAIKOU;
    } else if (species == roamer2) {
        return ROAMER_ENTEI;
    } else if (species == roamer3) {
        return ROAMER_LATIOS;
    } else if (species == roamer4) {
        return ROAMER_LATIAS;
    } else {
        GF_ASSERT(FALSE);
        return ROAMER_MAX;
    }
}
