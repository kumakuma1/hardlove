.nds
.thumb

.include "armips/include/scriptmacros.s"
.include "armips/include/flags.s"
.include "armips/include/soundeffects.s"
.include "armips/include/vars.s"

.include "asm/include/items.inc"
.include "asm/include/moves.inc"
.include "asm/include/species.inc"
.include "asm/include/std_scripts.inc"

.include "armips/scr_seq/event_T25SP0101.inc"


// text archive to grab from: 603.txt

.create "build/a012/2_910", 0


scrdef scr_seq_T25SP0101_000
scrdef scr_seq_T25SP0101_001
scrdef scr_seq_T25SP0101_002
scrdef scr_seq_T25SP0101_003
scrdef_end

scr_seq_T25SP0101_000:
	play_se SEQ_SE_DP_SELECT
	lockall
	faceplayer
	npc_msg 0
	closemsg
	releaseall
    end


scr_seq_T25SP0101_001:
	play_se SEQ_SE_DP_SELECT
	lockall
	faceplayer
    npc_msg 1
    touchscreen_menu_hide
    ShowMoney 20, 1
	ListLocalText 1, 1, 0, 1, VAR_SPECIAL_RESULT
    AddListOption 2, 255, 0
    AddListOption 3, 255, 1
	AddListOption 4, 255, 2
	AddListOption 5, 255, 3
    AddListOption 6, 255, 4
    AddListOption 7, 255, 5
    AddListOption 8, 255, 6
    AddListOption 9, 255, 7
    AddListOption 10, 255, 8
    ShowList
    switch VAR_SPECIAL_RESULT
    case 0, _zephyr
    case 1, _hive
    case 2, _plain
    case 3, _fog
    case 4, _storm
	case 5, _mineral
    case 6, _glacier
    case 7, _rising
    //case 8, _exitmessage
    goto _exitmessage

_zephyr:
    CheckBadge 0, VAR_SPECIAL_RESULT
    compare VAR_SPECIAL_RESULT, 0
    goto_if_eq _nobadge
    CompareMoney VAR_SPECIAL_RESULT, 5000 
    compare VAR_SPECIAL_RESULT, 0
    goto_if_eq _nomoney
    call _checkspace
    SetVar VAR_TEMP_x4005, 236
    call _doyouwant
    TakeMoney 5000
    UpdateMoney
    SetFlag 2599
	GivePokemon VAR_TEMP_x4005, 10, 0, 0, 0, VAR_SPECIAL_RESULT
    call _gotpokemon
    goto _exitmessage

_hive:
    CheckBadge 1, VAR_SPECIAL_RESULT
    compare VAR_SPECIAL_RESULT, 0
    goto_if_eq _nobadge
    CompareMoney VAR_SPECIAL_RESULT, 10000 
    compare VAR_SPECIAL_RESULT, 0
    goto_if_eq _nomoney
    call _checkspace
    SetVar VAR_TEMP_x4005, 95
    GetRandom VAR_SPECIAL_RESULT, 2
    compare VAR_SPECIAL_RESULT, 0
    call_if_eq _hiveoption1
    call _doyouwant
    TakeMoney 10000
    UpdateMoney
    SetFlag 2599
	GivePokemon VAR_TEMP_x4005, 15, 0, 0, 0, VAR_SPECIAL_RESULT
    call _gotpokemon
    goto _exitmessage

_plain:
    CheckBadge 2, VAR_SPECIAL_RESULT
    compare VAR_SPECIAL_RESULT, 0
    goto_if_eq _nobadge
    CompareMoney VAR_SPECIAL_RESULT, 15000 
    compare VAR_SPECIAL_RESULT, 0
    goto_if_eq _nomoney
    call _checkspace
    SetVar VAR_TEMP_x4005, 674
    GetRandom VAR_SPECIAL_RESULT, 3
    compare VAR_SPECIAL_RESULT, 0
    call_if_eq _plainoption1
    compare VAR_SPECIAL_RESULT, 1
    call_if_eq _plainoption2
    call _doyouwant
    TakeMoney 15000
    UpdateMoney
    SetFlag 2599
	GivePokemon VAR_TEMP_x4005, 20, 0, 0, 0, VAR_SPECIAL_RESULT
    call _gotpokemon
    goto _exitmessage

_fog:
    CheckBadge 3, VAR_SPECIAL_RESULT
    compare VAR_SPECIAL_RESULT, 0
    goto_if_eq _nobadge
    CompareMoney VAR_SPECIAL_RESULT, 20000 
    compare VAR_SPECIAL_RESULT, 0
    goto_if_eq _nomoney
    call _checkspace
    SetVar VAR_TEMP_x4005, 214
    GetRandom VAR_SPECIAL_RESULT, 3
    compare VAR_SPECIAL_RESULT, 0
    call_if_eq _fogoption1
    compare VAR_SPECIAL_RESULT, 1
    call_if_eq _fogoption2
    call _doyouwant
    TakeMoney 20000
    UpdateMoney
    SetFlag 2599
	GivePokemon VAR_TEMP_x4005, 25, 0, 0, 0, VAR_SPECIAL_RESULT
    call _gotpokemon
    goto _exitmessage

_storm:
    CheckBadge 4, VAR_SPECIAL_RESULT
    compare VAR_SPECIAL_RESULT, 0
    goto_if_eq _nobadge
    CompareMoney VAR_SPECIAL_RESULT, 30000 
    compare VAR_SPECIAL_RESULT, 0
    goto_if_eq _nomoney
    call _checkspace
    SetVar VAR_TEMP_x4005, 448
    GetRandom VAR_SPECIAL_RESULT, 3
    compare VAR_SPECIAL_RESULT, 0
    call_if_eq _stormoption1
    compare VAR_SPECIAL_RESULT, 1
    call_if_eq _stormoption2
    call _doyouwant
    TakeMoney 30000
    UpdateMoney
    SetFlag 2599
	GivePokemon VAR_TEMP_x4005, 30, 0, 0, 0, VAR_SPECIAL_RESULT
    call _gotpokemon
    goto _exitmessage

_mineral:
    CheckBadge 5, VAR_SPECIAL_RESULT
    compare VAR_SPECIAL_RESULT, 0
    goto_if_eq _nobadge
    CompareMoney VAR_SPECIAL_RESULT, 40000 
    compare VAR_SPECIAL_RESULT, 0
    goto_if_eq _nomoney
    call _checkspace
    SetVar VAR_TEMP_x4005, 282
    GetRandom VAR_SPECIAL_RESULT, 3
    compare VAR_SPECIAL_RESULT, 0
    call_if_eq _mineraloption1
    compare VAR_SPECIAL_RESULT, 1
    call_if_eq _mineraloption2
    call _doyouwant
    TakeMoney 40000
    UpdateMoney
    SetFlag 2599
	GivePokemon VAR_TEMP_x4005, 35, 0, 0, 0, VAR_SPECIAL_RESULT
    call _gotpokemon
    goto _exitmessage

_glacier:
    CheckBadge 6, VAR_SPECIAL_RESULT
    compare VAR_SPECIAL_RESULT, 0
    goto_if_eq _nobadge
    CompareMoney VAR_SPECIAL_RESULT, 50000 
    compare VAR_SPECIAL_RESULT, 0
    goto_if_eq _nomoney
    call _checkspace
    SetVar VAR_TEMP_x4005, 373
    GetRandom VAR_SPECIAL_RESULT, 4
    compare VAR_SPECIAL_RESULT, 0
    call_if_eq _glacieroption1
    compare VAR_SPECIAL_RESULT, 1
    call_if_eq _glacieroption2
    compare VAR_SPECIAL_RESULT, 2
    call_if_eq _glacieroption3
    call _doyouwant
    TakeMoney 50000
    UpdateMoney
    SetFlag 2599
	GivePokemon VAR_TEMP_x4005, 50, 0, 0, 0, VAR_SPECIAL_RESULT
    call _gotpokemon
    goto _exitmessage

_rising:
    CheckBadge 6, VAR_SPECIAL_RESULT
    compare VAR_SPECIAL_RESULT, 0
    goto_if_eq _nobadge
    CompareMoney VAR_SPECIAL_RESULT, 60000 
    compare VAR_SPECIAL_RESULT, 0
    goto_if_eq _nomoney
    call _checkspace
    SetVar VAR_TEMP_x4005, 151
    GetRandom VAR_SPECIAL_RESULT, 4
    compare VAR_SPECIAL_RESULT, 0
    call_if_eq _risingoption1
    compare VAR_SPECIAL_RESULT, 1
    call_if_eq _risingoption2
    compare VAR_SPECIAL_RESULT, 2
    call_if_eq _risingoption3
    call _doyouwant
    TakeMoney 60000
    UpdateMoney
    SetFlag 2599
	GivePokemon VAR_TEMP_x4005, 60, 0, 0, 0, VAR_SPECIAL_RESULT
    call _gotpokemon
    goto _exitmessage

_hiveoption1:
     SetVar VAR_TEMP_x4005, 299
     return

_plainoption1:
     SetVar VAR_TEMP_x4005, 434
     return

_plainoption2:
     SetVar VAR_TEMP_x4005, 451
     return

_fogoption1:
     SetVar VAR_TEMP_x4005, 123
     return

_fogoption2:
     SetVar VAR_TEMP_x4005, 127
     return

_stormoption1:
     SetVar VAR_TEMP_x4005, 308
     return

_stormoption2:
     SetVar VAR_TEMP_x4005, 428
     return

_mineraloption1:
     SetVar VAR_TEMP_x4005, 334
     return

_mineraloption2:
     SetVar VAR_TEMP_x4005, 303
     return

_glacieroption1:
     SetVar VAR_TEMP_x4005, 149
     return

_glacieroption2:
     SetVar VAR_TEMP_x4005, 248
     return

_glacieroption3:
     SetVar VAR_TEMP_x4005, 376
     return

_risingoption1:
     SetVar VAR_TEMP_x4005, 251
     return

_risingoption2:
     SetVar VAR_TEMP_x4005, 385
     return

_risingoption3:
     SetVar VAR_TEMP_x4005, 544
     return

_exitmessage:
    npc_msg 12
    goto _exit

_exit:
    closemsg
    HideMoney
    touchscreen_menu_show
    releaseall
    end

_nobadge:
    npc_msg 13
    goto _exit

_nomoney:
    npc_msg 14
    goto _exit

_checkspace:
    GetPartyCount VAR_SPECIAL_RESULT
    compare VAR_SPECIAL_RESULT, 6
    goto_if_eq _nospace
    return

_nospace:
    npc_msg 15
    goto _exit

_doyouwant:
    buffer_species_name 0, VAR_TEMP_x4005, 0, 0
    npc_msg 16
    yesno VAR_SPECIAL_RESULT
    compare VAR_SPECIAL_RESULT, 1
    goto_if_eq _exitmessage
    return

_gotpokemon:
    npc_msg 17
    play_se SEQ_SE_DP_REGI
    buffer_players_name 0
    buffer_species_name 1, VAR_TEMP_x4005, 0, 0
    npc_msg 18
    return

scr_seq_T25SP0101_002:
	play_se SEQ_SE_DP_SELECT
	lockall
	faceplayer
	npc_msg 19
	closemsg
	releaseall
    end

scr_seq_T25SP0101_003:
	play_se SEQ_SE_DP_SELECT
	lockall
	faceplayer
    CommonScript 0x28C8
	releaseall
    end

.close

