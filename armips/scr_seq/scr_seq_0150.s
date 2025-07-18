.nds
.thumb

.include "armips/include/scriptmacros.s"
.include "armips/include/flags.s"
.include "armips/include/soundeffects.s"
.include "armips/include/vars.s"

.include "asm/include/items.inc"


// text archive to grab from: 023.txt

.create "build/a012/2_150", 0

	scrdef scr_seq_0150_000 //r29
	scrdef scr_seq_0150_001 //r30
	scrdef scr_seq_0150_002	//r30
	scrdef scr_seq_0150_003	//r31
	scrdef scr_seq_0150_004 //violet
	scrdef scr_seq_0150_005 //r33
	scrdef scr_seq_0150_006 //r33
	scrdef scr_seq_0150_007 //azalea
	scrdef_end

scr_seq_0150_000:
	play_se SEQ_SE_DP_SELECT
	lockall
	faceplayer
	npc_msg 10 //its  a berry tree
	closemsg
	goto_if_set 2570, _noberries
	call _harvest
	GetRandom 0x800C, 50
	setvar VAR_SPECIAL_x8004, ITEM_ORAN_BERRY
	setvar VAR_SPECIAL_x8005, 100
	IncrementVar VAR_SPECIAL_x8005, 0x800C 
	CommonScript 2008
	//play_fanfare SEQ_ME_ITEM
	//wait_fanfare
	setflag 2570
	goto _goaway

scr_seq_0150_001:
	play_se SEQ_SE_DP_SELECT
	lockall
	faceplayer
	npc_msg 10 //its  a berry tree
	closemsg
	goto_if_set 2571, _noberries
	call _harvest
	GetRandom 0x800C, 30
	setvar VAR_SPECIAL_x8004, ITEM_PECHA_BERRY
	setvar VAR_SPECIAL_x8005, 50
	IncrementVar VAR_SPECIAL_x8005, 0x800C 
	CommonScript 2008
	setflag 2571
	goto _goaway

scr_seq_0150_002:
	play_se SEQ_SE_DP_SELECT
	lockall
	faceplayer
	npc_msg 10 //its  a berry tree
	closemsg
	goto_if_set 2572, _noberries
	call _harvest
	GetRandom 0x800C, 30
	setvar VAR_SPECIAL_x8004, ITEM_CHERI_BERRY
	setvar VAR_SPECIAL_x8005, 50
	IncrementVar VAR_SPECIAL_x8005, 0x800C 
	CommonScript 2008
	setflag 2572
	goto _goaway

scr_seq_0150_003:
	play_se SEQ_SE_DP_SELECT
	lockall
	faceplayer
	npc_msg 10 //its  a berry tree
	closemsg
	goto_if_set 2573, _noberries
	call _harvest
	GetRandom 0x800C, 30
	setvar VAR_SPECIAL_x8004, ITEM_PERSIM_BERRY
	setvar VAR_SPECIAL_x8005, 50
	IncrementVar VAR_SPECIAL_x8005, 0x800C 
	CommonScript 2008
	setflag 2573
	goto _goaway

scr_seq_0150_004:
	play_se SEQ_SE_DP_SELECT
	lockall
	faceplayer
	npc_msg 10 //its  a berry tree
	closemsg
	goto_if_set 2574, _noberries
	call _harvest
	GetRandom 0x800C, 30
	setvar VAR_SPECIAL_x8004, ITEM_CHESTO_BERRY
	setvar VAR_SPECIAL_x8005, 50
	IncrementVar VAR_SPECIAL_x8005, 0x800C 
	CommonScript 2008
	setflag 2574
	goto _goaway


scr_seq_0150_005:
	play_se SEQ_SE_DP_SELECT
	lockall
	faceplayer
	npc_msg 10 //its  a berry tree
	closemsg
	goto_if_set 2575, _noberries
	call _harvest
	GetRandom 0x800C, 30
	setvar VAR_SPECIAL_x8004, ITEM_ASPEAR_BERRY
	setvar VAR_SPECIAL_x8005, 50
	IncrementVar VAR_SPECIAL_x8005, 0x800C 
	CommonScript 2008
	setflag 2575
	goto _goaway

scr_seq_0150_006:
	play_se SEQ_SE_DP_SELECT
	lockall
	faceplayer
	npc_msg 10 //its  a berry tree
	closemsg
	goto_if_set 2576, _noberries
	call _harvest
	GetRandom 0x800C, 30
	setvar VAR_SPECIAL_x8004, ITEM_RAWST_BERRY
	setvar VAR_SPECIAL_x8005, 50
	IncrementVar VAR_SPECIAL_x8005, 0x800C 
	CommonScript 2008
	setflag 2576
	goto _goaway

scr_seq_0150_007:
	play_se SEQ_SE_DP_SELECT
	lockall
	faceplayer
	npc_msg 10 //its  a berry tree
	closemsg
	goto_if_set 2577, _noberries
	call _harvest
	anim_apricorn_tree VAR_SPECIAL_RESULT
	GetRandom 0x800C, 50
	setvar VAR_SPECIAL_x8004, ITEM_ORAN_BERRY
	setvar VAR_SPECIAL_x8005, 100
	IncrementVar VAR_SPECIAL_x8005, 0x800C 
	CommonScript 2008
	//play_fanfare SEQ_ME_ITEM
	//wait_fanfare
	setflag 2577
	goto _goaway

_noberries:
	npc_msg 11 //no berries
	goto _goaway

_harvest:
    npc_msg 12 //you harvest the berries
    yesno VAR_SPECIAL_RESULT
    compare VAR_SPECIAL_RESULT, 1
    goto_if_eq _goaway
	closemsg
	anim_apricorn_tree VAR_SPECIAL_RESULT
	return

_goaway:
	closemsg
    releaseall
    end

.close
