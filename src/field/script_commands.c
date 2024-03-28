#include "../../include/types.h"
#include "../../include/bag.h"
#include "../../include/battle.h"
#include "../../include/config.h"
#include "../../include/debug.h"
#include "../../include/pokemon.h"
#include "../../include/rtc.h"
#include "../../include/save.h"
#include "../../include/script.h"
#include "../../include/constants/ability.h"
#include "../../include/constants/file.h"
#include "../../include/constants/game.h"
#include "../../include/constants/hold_item_effects.h"
#include "../../include/constants/item.h"
#include "../../include/constants/moves.h"
#include "../../include/constants/species.h"
#include "../../include/constants/weather_numbers.h"

u16 randomMons [] = {
SPECIES_CATERPIE,
SPECIES_WEEDLE,
SPECIES_RATTATA,
SPECIES_SPEAROW,
SPECIES_EKANS,
SPECIES_PICHU,
SPECIES_SANDSHREW,
SPECIES_NIDORAN_F,
SPECIES_NIDORAN_M,
SPECIES_CLEFFA,
SPECIES_VULPIX,
SPECIES_IGGLYBUFF,
SPECIES_ZUBAT,
SPECIES_ODDISH,
SPECIES_PARAS,
SPECIES_VENONAT,
SPECIES_DIGLETT,
SPECIES_MEOWTH,
SPECIES_PSYDUCK,
SPECIES_MANKEY,
SPECIES_GROWLITHE,
SPECIES_POLIWAG,
SPECIES_MACHOP,
SPECIES_BELLSPROUT,
SPECIES_TENTACOOL,
SPECIES_GEODUDE,
SPECIES_PONYTA,
SPECIES_MAGNEMITE,
SPECIES_DODUO,
SPECIES_SEEL,
SPECIES_GRIMER,
SPECIES_SHELLDER,
SPECIES_DROWZEE,
SPECIES_KRABBY,
SPECIES_VOLTORB,
SPECIES_EXEGGCUTE,
SPECIES_CUBONE,
SPECIES_TYROGUE,
SPECIES_KOFFING,
SPECIES_RHYHORN,
SPECIES_TANGELA,
SPECIES_HORSEA,
SPECIES_GOLDEEN,
SPECIES_STARYU,
SPECIES_EEVEE,
SPECIES_SENTRET,
SPECIES_HOOTHOOT,
SPECIES_LEDYBA,
SPECIES_SPINARAK,
SPECIES_CHINCHOU,
SPECIES_NATU,
SPECIES_AZURILL,
SPECIES_HOPPIP,
SPECIES_SUNKERN,
SPECIES_WOOPER,
SPECIES_MURKROW,
SPECIES_PINECO,
SPECIES_DUNSPARCE,
SPECIES_SNUBBULL,
SPECIES_SNEASEL,
SPECIES_TEDDIURSA,
SPECIES_SLUGMA,
SPECIES_SWINUB,
SPECIES_REMORAID,
SPECIES_MANTINE,
SPECIES_PHANPY,
SPECIES_SMOOCHUM,
SPECIES_ELEKID,
SPECIES_MAGBY,
SPECIES_POOCHYENA,
SPECIES_ZIGZAGOON,
SPECIES_WURMPLE,
SPECIES_LOTAD,
SPECIES_SEEDOT,
SPECIES_TAILLOW,
SPECIES_WINGULL,
SPECIES_SURSKIT,
SPECIES_SHROOMISH,
SPECIES_WHISMUR,
SPECIES_MAKUHITA,
SPECIES_SKITTY,
SPECIES_GULPIN,
SPECIES_WAILMER,
SPECIES_SPOINK,
SPECIES_SPINDA,
SPECIES_CACNEA,
SPECIES_BARBOACH,
SPECIES_CORPHISH,
SPECIES_BALTOY,
SPECIES_DUSKULL,
SPECIES_WYNAUT,
SPECIES_SPHEAL,
SPECIES_CLAMPERL,
SPECIES_LUVDISC
};

u16 randomMonsLength = sizeof(randomMons)/sizeof(u16);

void fisherYatesArrayShuffle(int array[], int n)
{
    for (int i = n - 1; i > 0; i--) 
    {
        int j = gf_rand() % (i + 1);
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}
/**
 *  @brief script command to give an egg adapted to set the hidden ability
 *
 *  @param ctx script context structure
 *  @return FALSE
 */
BOOL ScrCmd_GiveEgg(SCRIPTCONTEXT *ctx)
{
    FieldSystem *fsys = ctx->fsys;
    void *profile = Sav2_PlayerData_GetProfileAddr(fsys->savedata);

    u16 species = ScriptGetVar(ctx);

    u32 form = (species & 0xF800) >> 11; // extract form from egg
    species = species & 0x7FF;

#ifdef RANDOMIZE_EGG  
    if (CheckScriptFlag(RANDOMIZE_EGG_FLAG) == 1) // add HA capability
    {
        int it = gf_rand() % randomMonsLength;
        species = randomMons[it];
        ClearScriptFlag(RANDOMIZE_EGG_FLAG);
    }
#endif

    u16 offset = ScriptGetVar(ctx);

    struct Party *party = SaveData_GetPlayerPartyPtr(fsys->savedata);
    u8 partyCount = party->count;
    if (partyCount < 6)
    {
        struct PartyPokemon *pokemon = AllocMonZeroed(11);
        ZeroMonData(pokemon);
        int val = sub_02017FE4(1, offset);

        SetEggStats(pokemon, species, 1, profile, 3, val);

        SetMonData(pokemon, MON_DATA_FORM, &form); // add form capability

        ClearMonMoves(pokemon);
        InitBoxMonMoveset(&pokemon->box);

        if (CheckScriptFlag(HIDDEN_ABILITIES_FLAG) == 1) // add HA capability
        {
            SET_MON_HIDDEN_ABILITY_BIT(pokemon)
            ResetPartyPokemonAbility(pokemon);
            ClearScriptFlag(HIDDEN_ABILITIES_FLAG);
        }

#ifdef RANDOM_3_MAX_IVS
        if (CheckScriptFlag(RANDOM_3_MAX_IVS_FLAG) == 1)
        {
            int array[] = {0, 1, 2, 3, 4, 5};
            fisherYatesArrayShuffle(array, 6);
            
            int iv = 31;
            // Randomly chooses 3 stats
            for (int i = 0; i < 3; i++) 
            {
                int selectedValue = array[i];
                SetMonData(pokemon, MON_DATA_HP_IV + selectedValue, &iv);
            }
            ClearScriptFlag(RANDOM_3_MAX_IVS_FLAG);
        }
#endif
        PokeParty_Add(party, pokemon);
        sys_FreeMemoryEz(pokemon);
    }

    return FALSE;
}

/**
 *  @brief script command to give the togepi egg
 *
 *  @param ctx script context structure
 *  @return FALSE
 */
BOOL ScrCmd_GiveTogepiEgg(SCRIPTCONTEXT *ctx) {
    s32 i;
    u8 pp;
    u16 moveData;
    struct PartyPokemon *togepi;
    void *profile;
    struct Party *party;
    FieldSystem *fsys = ctx->fsys;

    profile = Sav2_PlayerData_GetProfileAddr(fsys->savedata);
    party = SaveData_GetPlayerPartyPtr(fsys->savedata);

    if (party->count >= 6) {
        return FALSE;
    }

    togepi = AllocMonZeroed(11);
    ZeroMonData(togepi);

    SetEggStats(togepi, SPECIES_TOGEPI, 1, profile, 3, sub_02017FE4(1, 13));

    //SetMonData(togepi, MON_DATA_FORM, &form); // add form capability

    //ClearMonMoves(pokemon);
    //InitBoxMonMoveset(&pokemon->box);

    for (i = 0; i < 4; i++) {
        if (!GetMonData(togepi, MON_DATA_MOVE1 + i, 0)) {
            break;
        }
    }

    if (i == 4) {
        i = 3;
    }

    moveData = MOVE_EXTRASENSORY; // add extrasensory to the togepi
    SetMonData(togepi, MON_DATA_MOVE1 + i, &moveData);

    pp = GetMonData(togepi, MON_DATA_MOVE1MAXPP + i, 0);
    SetMonData(togepi, MON_DATA_MOVE1PP + i, &pp);

    if (CheckScriptFlag(HIDDEN_ABILITIES_FLAG) == 1) // add HA capability
    {
        SET_MON_HIDDEN_ABILITY_BIT(togepi)
        ResetPartyPokemonAbility(togepi);
        ClearScriptFlag(HIDDEN_ABILITIES_FLAG);
    }

#ifdef RANDOM_3_MAX_IVS
    int array[] = {0, 1, 2, 3, 4, 5};
    fisherYatesArrayShuffle(array, 6);
            
    int iv = 31;
    // Randomly chooses 3 stats
    for (int i = 0; i < 3; i++) 
    {
        int selectedValue = array[i];
        SetMonData(togepi, MON_DATA_HP_IV + selectedValue, &iv);
    }
#endif

    PokeParty_Add(party, togepi);

    sys_FreeMemoryEz(togepi);

    SaveMisc_SetTogepiPersonalityGender(Sav2_Misc_get(fsys->savedata), GetMonData(togepi, MON_DATA_PERSONALITY, 0), GetMonData(togepi, MON_DATA_GENDER, 0));

    return FALSE;
}
