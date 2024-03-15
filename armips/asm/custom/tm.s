.nds
.thumb

// Edits ahe TM palettes into desired moves

.open "base/arm9.bin", 0x02000000

PALETTE_FIGHTING equ 398
PALETTE_DRAGON equ 399
PALETTE_WATER equ 400
PALETTE_PSYCHIC equ 401
PALETTE_NORMAL equ 402
PALETTE_POISON equ 403
PALETTE_ICE equ 404
PALETTE_GRASS equ 405
PALETTE_FIRE equ 406
PALETTE_DARK equ 407
PALETTE_STEEL equ 408
PALETTE_ELECTRIC equ 409
PALETTE_GROUND equ 410
PALETTE_GHOST equ 411
PALETTE_ROCK equ 412
PALETTE_FLYING equ 413
PALETTE_BUG equ 610


// Start of TM table
//.org 0x021000CC


// Start of TM Palette Table
.org 0x02100BD6

// Between each TM we need to skip 8 * (TM gap - 1) bytes

// Change TM01 to Dark palette
.skip 2
.halfword PALETTE_FIGHTING
.skip 4

// Change TM03 to Psychic palette
//.skip (8 * 1)
//.skip 2
//.halfword PALETTE_PSYCHIC
//.skip 4

// Change TM05 to Dark palette
//.skip (8 * 1)
//.skip 2
//.halfword PALETTE_DARK
//.skip 4

// Change TM09 to Poison palette
//.skip (8 * 3)
//.skip 2
//.halfword PALETTE_POISON
//.skip 4

// Change TM21 to Ice palette
.skip (8 * 19) //21-1-1
.skip 2
.halfword PALETTE_ICE
.skip 4

// Change TM43 to Flying palette
.skip (8 * 23) //43-19-1
.skip 2
.halfword PALETTE_FLYING
.skip 4

// Change TM45 to Psychic palette - no Fairy colour
.skip 8 //45-43-1
.skip 2
.halfword PALETTE_PSYCHIC
.skip 4

// Change TM83 to Water palette
.skip (8 * 37) //83-45-1
.skip 2
.halfword PALETTE_WATER
.skip 4

.close