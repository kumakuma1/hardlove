#include "../include/types.h"
#include "../include/pokemon.h"
#include "../include/npc_trade.h"
#include "../include/constants/species.h"
#include "../include/constants/item.h" 
#include "../include/constants/ability.h" 


void LONG_CALL _CreateTradeMon(struct PartyPokemon *mon, struct NPCTrade *trade_dat, u32 level, u32 tradeno, u32 mapno, u32 met_level_strat, u32 heapId)
{
    String *name;
    u8 nickname_flag;
    u32 mapsec;
    int heapId_2;
#ifdef CUSTOM_TRADES
    if (tradeno == NPC_TRADE_ROCKY_ONIX)
    {
        int i, j;
        CreateMon(mon, SPECIES_MAROWAK_ALOLAN, level, 32, TRUE, trade_dat->pid, OT_ID_PRESET, trade_dat->otId);
        heapId_2 = (int)heapId;
        name     = _GetNpcTradeName(heapId_2, tradeno);
        SetMonData(mon, MON_DATA_NICKNAME_3 /*MON_DATA_NICKNAME_STRING = 119*/, name);
        String_Delete(name);

        nickname_flag = TRUE;
        SetMonData(mon, MON_DATA_HAS_NICKNAME, &nickname_flag);

        i=gf_rand();
        j=(i&(0x001f<< 0))>> 0;
        SetMonData(mon, MON_DATA_HP_IV, (u8 *)&j);
        j=(i&(0x001f<< 5))>> 5;
        SetMonData(mon, MON_DATA_ATK_IV, (u8 *)&j);
        j=(i&(0x001f<<10))>>10;
        SetMonData(mon, MON_DATA_DEF_IV, (u8 *)&j);
        i=gf_rand();
        j=(i&(0x001f<< 0))>> 0;
        SetMonData(mon, MON_DATA_SPEED_IV, (u8 *)&j);
        j=(i&(0x001f<< 5))>> 5;
        SetMonData(mon, MON_DATA_SPATK_IV, (u8 *)&j);
        j=(i&(0x001f<<10))>>10;
        SetMonData(mon, MON_DATA_SPDEF_IV, (u8 *)&j);

        int array[] = {0, 1, 2, 3, 4, 5};
        fisherYatesArrayShuffle(array, 6);

        int iv = 31;
        // Randomly chooses 3 stats
        for (int i = 0; i < 3; i++) 
        {
            int selectedValue = array[i];
            SetMonData(mon, MON_DATA_HP_IV + selectedValue, &iv);
        }

        SetMonData(mon, MON_DATA_COOL, &trade_dat->cool);
        SetMonData(mon, MON_DATA_BEAUTY, &trade_dat->beauty);
        SetMonData(mon, MON_DATA_CUTE, &trade_dat->cute);
        SetMonData(mon, MON_DATA_SMART, &trade_dat->smart);
        SetMonData(mon, MON_DATA_TOUGH, &trade_dat->tough);

        int tmp = ITEM_RARE_BONE;
        SetMonData(mon, MON_DATA_HELD_ITEM, &tmp);
        tmp = ABILITY_ROCK_HEAD;
        SetMonData(mon, MON_DATA_ABILITY, &tmp);

        u32 nature = gf_rand() % (NATURE_QUIRKY + 1);
        SET_MON_NATURE_OVERRIDE(mon, nature);

        name = _GetNpcTradeName(heapId_2, NPC_TRADE_OT_NUM(tradeno));
        SetMonData(mon, MON_DATA_OT_NAME_2, name);
        String_Delete(name);

        SetMonData(mon, MON_DATA_MET_GENDER, &trade_dat->gender);
        SetMonData(mon, MON_DATA_GAME_LANGUAGE, &trade_dat->language);

        mapsec = MapHeader_GetMapSec(mapno);
        MonSetTrainerMemo(mon, NULL, met_level_strat, mapsec, heapId);

        RecalcPartyPokemonStats(mon); //CalcMonLevelAndStats(mon);
    }
    else
#endif
    {
        CreateMon(mon, trade_dat->give_species, level, 32, TRUE, trade_dat->pid, OT_ID_PRESET, trade_dat->otId);

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

        RecalcPartyPokemonStats(mon); //CalcMonLevelAndStats(mon);
        //GF_ASSERT(!MonIsShiny(mon));
    }
}