.nds
.thumb

.open "base/arm9.bin", 0x02000000

// replace species 183 (Marill) with 387 (Turtwig) in playCry in
// https://github.com/pret/pokeheartgold/blob/master/src/oaks_speech.c#L1859
.org 0x02000C70

intro_turtwig_cry:
    push {lr}
    mov r0, #255
    add r0, #132 // 255 + 132 = 387 = SPECIES_TURTWIG
    bl 0x02006218 // PlayCry(species, form): r1 (form) is still the caller's r5 = 0
    pop {pc}

.close

.open "base/overlay/overlay_0053.bin", 0x021E5900

.org 0x021E5900 + 0x1E98 // the "bl PlayCry" in the Oak speech after the "movs r0, #183" (Marill)
    bl intro_turtwig_cry

.close