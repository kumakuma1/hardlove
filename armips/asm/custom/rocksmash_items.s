.nds
.thumb

// Changes items obtainable from Rock Smash
// Each table is 8 slots with chances of 25/20/10/10/10/10/10/5 %.

.open "base/overlay/overlay_0001.bin", 0x021E5900

/* Ruins of Alph Table */
.org 0x02209604

.halfword ITEM_POKE_BALL
.halfword ITEM_POKE_BALL
.halfword ITEM_POKE_BALL
.halfword ITEM_POKE_BALL
.halfword ITEM_POKE_BALL
.halfword ITEM_POKE_BALL
.halfword ITEM_POKE_BALL
.halfword ITEM_POKE_BALL

/* Cliff Cave Table */
.org 0x02209624

.halfword ITEM_POKE_BALL
.halfword ITEM_POKE_BALL
.halfword ITEM_POKE_BALL
.halfword ITEM_POKE_BALL
.halfword ITEM_POKE_BALL
.halfword ITEM_POKE_BALL
.halfword ITEM_POKE_BALL
.halfword ITEM_POKE_BALL


/* Any Other Area Table*/
.org 0x02209614

.halfword ITEM_POKE_BALL
.halfword ITEM_POKE_BALL
.halfword ITEM_POKE_BALL
.halfword ITEM_POKE_BALL
.halfword ITEM_POKE_BALL
.halfword ITEM_POKE_BALL
.halfword ITEM_POKE_BALL
.halfword ITEM_POKE_BALL

.close