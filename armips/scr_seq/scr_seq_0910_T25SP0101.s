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
    case 1, _exitmessage
    case 2, _exitmessage
    case 3, _exitmessage
    case 4, _exitmessage
	case 5, _exitmessage
    case 6, _exitmessage
    case 7, _exitmessage
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
	end

.close

