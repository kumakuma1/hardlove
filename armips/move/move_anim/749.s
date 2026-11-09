.nds
.thumb

.include "armips/include/animscriptcmd.s"

.create "build/move/move_anim/0_749", 0

// Jaw Lock: gold Crunch jaws with a golden flash on the target

a010_749:
    // slot 0: Crunch's jaws and debris recoloured gold (rawdata/move_spa/9_545, a copy of particle 260)
    loadparticlefromspa 0, 545

    // tint the screen gold (BGR555: R 31, G 24, B 6) instead of Crunch's darkening
    callfunction 33, 5, 0, 1, 0, 12, 6943, "NaN", "NaN", "NaN", "NaN", "NaN"
    addparticle 0, 0, 4
    addparticle 0, 3, 4
    addparticle 0, 4, 4
    addparticle 0, 1, 4
    addparticle 0, 2, 4
    wait 10

    // the bite: the target shakes
    playsepan 1934, 117
    callfunction 36, 5, 2, 0, 1, 2, 264, "NaN", "NaN", "NaN", "NaN", "NaN"
    waitse 1972, 117, 4
    wait 10

    callfunction 33, 5, 0, 1, 12, 0, 6943, "NaN", "NaN", "NaN", "NaN", "NaN"
    waitstate
    waitparticle
    unloadparticle 0
    end

.close
