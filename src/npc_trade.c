#include "../include/types.h"
#include "../include/pokemon.h"
#include "../include/npc_trade.h"
#include "../include/constants/species.h"
#include "../include/constants/item.h" 
#include "../include/constants/ability.h" 

void randomIV(struct NPCTrade *trade_dat)
{
    u8 array[] = {31, 31, 31, 0, 0, 0};

    int i=gf_rand();
    array[3]=(i&(0x001f<< 0))>> 0;
    array[4]=(i&(0x001f<< 5))>> 5;
    array[5]=(i&(0x001f<<10))>>10;

    arrayShuffle(array, 6);

    trade_dat->hpIv = array[0];       
    trade_dat->atkIv = array[1];
    trade_dat->defIv = array[2];
    trade_dat->speedIv = array[3];
    trade_dat->spAtkIv = array[4];
    trade_dat->spDefIv = array[5];
}

void LONG_CALL _CreateTradeMon(struct PartyPokemon *mon, struct NPCTrade *trade_dat, u32 level, u32 tradeno, u32 mapno, u32 met_level_strat, u32 heapId)
{
    String *name;
    u8 nickname_flag;
    u32 mapsec;
    int heapId_2;
    int ability = -1;
    int nature = -1;
#ifdef CUSTOM_TRADES
    if (tradeno == NPC_TRADE_ROCKY_ONIX)
    {
        trade_dat->give_species = SPECIES_MAROWAK_ALOLAN;
        
        randomIV(trade_dat);

        trade_dat->heldItem = ITEM_RARE_BONE;

        ability = ABILITY_ROCK_HEAD;
    }
    else if (tradeno == NPC_TRADE_MUSCLE_MACHOP)
    {
        nature = gf_rand() % 3;
        if (nature == 0)
        {
            trade_dat->give_species = SPECIES_INFERNAPE;
        }
        else if (nature == 1)
        {
            trade_dat->give_species = SPECIES_TYPHLOSION_HISUIAN;
        }
        else
        {
            trade_dat->give_species = SPECIES_ARCANINE_HISUIAN;
        }

        randomIV(trade_dat);

        trade_dat->heldItem = ITEM_SITRUS_BERRY;

        //random ability

        trade_dat->gender = POKEMON_GENDER_FEMALE;
    }
#endif
        CreateMon(mon, trade_dat->give_species, level, 32, FALSE, trade_dat->pid, OT_ID_PRESET, trade_dat->otId);

        heapId_2 = (int)heapId;
        name     = _GetNpcTradeName(heapId_2, tradeno);
        SetMonData(mon, MON_DATA_NICKNAME_3 /*MON_DATA_NICKNAME_STRING = 119*/, name);
        String_Delete(name);

        nickname_flag = TRUE;
        SetMonData(mon, MON_DATA_HAS_NICKNAME, &nickname_flag);

        SetMonData(mon, MON_DATA_HP_IV, &trade_dat->hpIv);
        SetMonData(mon, MON_DATA_ATK_IV, &trade_dat->atkIv);
        SetMonData(mon, MON_DATA_DEF_IV, &trade_dat->defIv);
        SetMonData(mon, MON_DATA_SPEED_IV, &trade_dat->speedIv);
        SetMonData(mon, MON_DATA_SPATK_IV, &trade_dat->spAtkIv);
        SetMonData(mon, MON_DATA_SPDEF_IV, &trade_dat->spDefIv);

        SetMonData(mon, MON_DATA_COOL, &trade_dat->cool);
        SetMonData(mon, MON_DATA_BEAUTY, &trade_dat->beauty);
        SetMonData(mon, MON_DATA_CUTE, &trade_dat->cute);
        SetMonData(mon, MON_DATA_SMART, &trade_dat->smart);
        SetMonData(mon, MON_DATA_TOUGH, &trade_dat->tough);

        SetMonData(mon, MON_DATA_HELD_ITEM, &trade_dat->heldItem);

        name = _GetNpcTradeName(heapId_2, NPC_TRADE_OT_NUM(tradeno));
        SetMonData(mon, MON_DATA_OT_NAME_2, name);
        String_Delete(name);

        SetMonData(mon, MON_DATA_MET_GENDER, &trade_dat->gender);
        SetMonData(mon, MON_DATA_GAME_LANGUAGE, &trade_dat->language);

        mapsec = MapHeader_GetMapSec(mapno);
        MonSetTrainerMemo(mon, NULL, met_level_strat, mapsec, heapId);

        if (ability != -1)
            SetMonData(mon, MON_DATA_ABILITY, &ability);

        CalcMonLevelAndStats(mon);
        RecalcPartyPokemonStats(mon); //CalcMonLevelAndStats(mon);
        //GF_ASSERT(!MonIsShiny(mon));
}
