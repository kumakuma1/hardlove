.nds
.thumb

.include "armips/include/macros.s"

.include "asm/include/species.inc"

// Each encounter data has been labeled with the area it gets used.
// Some are labeled ???, these are most likely not used.

encounterdata   0   // New Bark Town

walkrate 0
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

// morning encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// day encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// night encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_SQUIRTLE, 5, 5
encounter SPECIES_POPPLIO, 5, 5
encounter SPECIES_TOTODILE, 5, 5
encounter SPECIES_PIPLUP, 5, 5
encounter SPECIES_SQUIRTLE, 5, 5

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

//40%/30%/15%/10%/5%
// old rod encounters
encounter SPECIES_CORPHISH, 3, 3      //30%
encounter SPECIES_KRABBY, 3, 3        //30%
encounter SPECIES_CHEWTLE, 3, 3       //25%
encounter SPECIES_CLAUNCHER, 3, 3     //10%
encounter SPECIES_CHEWTLE, 3, 3       //5%

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20

// super rod encounters
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata   1   // Route 29

walkrate 15
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3

// morning encounter slots
pokemon SPECIES_SENTRET 	    //10%
pokemon SPECIES_SENTRET		    //10%
pokemon SPECIES_LILLIPUP        //10%
pokemon SPECIES_POOCHYENA		//10%
pokemon SPECIES_LITLEO			//10%
monwithform SPECIES_ZIGZAGOON, 1  //10%
pokemon SPECIES_BUNNELBY  		//10%
pokemon SPECIES_PIDGEY	        //10%
pokemon SPECIES_LILLIPUP        //5%
pokemon SPECIES_POOCHYENA	    //5%
pokemon SPECIES_STARLY			//5% 
pokemon SPECIES_TEDDIURSA	    //5%

// day encounter slots
pokemon SPECIES_SENTRET 	    //10%
pokemon SPECIES_SENTRET		    //10%
pokemon SPECIES_LILLIPUP        //10%
pokemon SPECIES_POOCHYENA		//10%
pokemon SPECIES_LITLEO			//10%
monwithform SPECIES_ZIGZAGOON, 1  //10%
pokemon SPECIES_BUNNELBY  		//10%
pokemon SPECIES_PIDGEY	        //10%
pokemon SPECIES_LILLIPUP        //5%
pokemon SPECIES_POOCHYENA	    //5%
pokemon SPECIES_STARLY			//5% 
pokemon SPECIES_TEDDIURSA	    //5%

// night encounter slots
pokemon SPECIES_SENTRET 	    //10%
pokemon SPECIES_SENTRET		    //10%
pokemon SPECIES_LILLIPUP        //10%
pokemon SPECIES_POOCHYENA		//10%
pokemon SPECIES_LITLEO			//10%
monwithform SPECIES_ZIGZAGOON, 1  //10%
pokemon SPECIES_BUNNELBY  		//10%
pokemon SPECIES_PIDGEY	        //10%
pokemon SPECIES_LILLIPUP        //5%
pokemon SPECIES_POOCHYENA	    //5%
pokemon SPECIES_STARLY			//5% 
pokemon SPECIES_TEDDIURSA	    //5%

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata   2   // Cherrygrove City

walkrate 15
surfrate 10
rocksmashrate 50
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3

// morning encounter slots
pokemon SPECIES_PONYTA 	        //10%
pokemon SPECIES_PONYTA		    //10%
pokemon SPECIES_GROWLITHE       //10%
pokemon SPECIES_SLUGMA      	//10%
pokemon SPECIES_SIZZLIPEDE		//10%
pokemon SPECIES_SALANDIT		//10%
pokemon SPECIES_LITLEO			//10%
pokemon SPECIES_HOUNDOUR    	//10%
pokemon SPECIES_GROWLITHE	    //5%
pokemon SPECIES_SLUGMA	        //5%
pokemon SPECIES_SIZZLIPEDE		//5%
pokemon SPECIES_FLETCHLING	    //5%

// day encounter slots
pokemon SPECIES_PONYTA 	        //10%
pokemon SPECIES_PONYTA		    //10%
pokemon SPECIES_GROWLITHE       //10%
pokemon SPECIES_SLUGMA      	//10%
pokemon SPECIES_SIZZLIPEDE		//10%
pokemon SPECIES_SALANDIT		//10%
pokemon SPECIES_LITLEO			//10%
pokemon SPECIES_HOUNDOUR    	//10%
pokemon SPECIES_GROWLITHE	    //5%
pokemon SPECIES_SLUGMA	        //5%
pokemon SPECIES_SIZZLIPEDE		//5%
pokemon SPECIES_FLETCHLING	    //5%

// night encounter slots
pokemon SPECIES_PONYTA 	        //10%
pokemon SPECIES_PONYTA		    //10%
pokemon SPECIES_GROWLITHE       //10%
pokemon SPECIES_SLUGMA      	//10%
pokemon SPECIES_SIZZLIPEDE		//10%
pokemon SPECIES_SALANDIT		//10%
pokemon SPECIES_LITLEO			//10%
pokemon SPECIES_HOUNDOUR    	//10%
pokemon SPECIES_GROWLITHE	    //5%
pokemon SPECIES_SLUGMA	        //5%
pokemon SPECIES_SIZZLIPEDE		//5%
pokemon SPECIES_FLETCHLING	    //5%

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_TENTACOOL, 15, 25
encounter SPECIES_TENTACOOL, 10, 20
encounter SPECIES_TENTACRUEL, 15, 25
encounter SPECIES_TENTACRUEL, 15, 25
encounter SPECIES_TENTACRUEL, 15, 25

// rock smash encounters
encounter SPECIES_CLAUNCHER, 10, 10
encounter SPECIES_CORPHISH, 10, 10

// old rod encounters
encounter SPECIES_BUIZEL, 3, 3         //30%
encounter SPECIES_HORSEA, 3, 3          //30%
encounter SPECIES_REMORAID, 3, 3        //25%
encounter SPECIES_PSYDUCK, 3, 3         //10%
encounter SPECIES_PSYDUCK, 3, 3       //5%

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20

// super rod encounters
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_TENTACOOL
// swarm good rod
pokemon SPECIES_STARYU
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata   3   // Route 30

walkrate 15
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3

// morning encounter slots
pokemon SPECIES_ODDISH	    //10%
pokemon SPECIES_ODDISH	    //10%
pokemon SPECIES_BELLSPROUT	//10%
pokemon SPECIES_DEERLING	//10%
pokemon SPECIES_PARAS		//10%
pokemon SPECIES_BUDEW		//10%
pokemon SPECIES_LOTAD	    //10%
pokemon SPECIES_SEEDOT		//10%
pokemon SPECIES_BELLSPROUT	//5%
pokemon SPECIES_DEERLING	//5%
pokemon SPECIES_PARAS		//5%
pokemon SPECIES_SEWADDLE	//5%

// day encounter slots
pokemon SPECIES_ODDISH	    //10%
pokemon SPECIES_ODDISH	    //10%
pokemon SPECIES_BELLSPROUT	//10%
pokemon SPECIES_DEERLING	//10%
pokemon SPECIES_PARAS		//10%
pokemon SPECIES_BUDEW		//10%
pokemon SPECIES_LOTAD	    //10%
pokemon SPECIES_SEEDOT		//10%
pokemon SPECIES_BELLSPROUT	//5%
pokemon SPECIES_DEERLING	//5%
pokemon SPECIES_PARAS		//5%
pokemon SPECIES_SEWADDLE	//5%

// night encounter slots
pokemon SPECIES_ODDISH	    //10%
pokemon SPECIES_ODDISH	    //10%
pokemon SPECIES_BELLSPROUT	//10%
pokemon SPECIES_DEERLING	//10%
pokemon SPECIES_PARAS		//10%
pokemon SPECIES_BUDEW		//10%
pokemon SPECIES_LOTAD	    //10%
pokemon SPECIES_SEEDOT		//10%
pokemon SPECIES_BELLSPROUT	//5%
pokemon SPECIES_DEERLING	//5%
pokemon SPECIES_PARAS		//5%
pokemon SPECIES_SEWADDLE	//5%

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_SHELLOS, 3, 3		//30%
encounter SPECIES_TYMPOLE, 3, 3		//30%
encounter SPECIES_LOTAD, 3, 3		//25%
encounter SPECIES_SURSKIT, 3, 3		//10%
encounter SPECIES_SURSKIT, 3, 3		//5%

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_SURSKIT, 3, 3       //30%
encounter SPECIES_SHELLOS, 3, 3       //30%
encounter SPECIES_TYMPOLE, 3, 3       //25%
encounter SPECIES_KRABBY, 3, 3        //10%
encounter SPECIES_TYMPOLE, 3, 3       //5%

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20

// super rod encounters
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata   4   // Route 31, Poison

walkrate 15
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5

// morning encounter slots
pokemon SPECIES_SPINARAK		//10%
pokemon SPECIES_SPINARAK		//10%
pokemon SPECIES_SCATTERBUG		//10%
pokemon SPECIES_SIZZLIPEDE		//10%
pokemon SPECIES_WEEDLE			//10%
pokemon SPECIES_PARAS			//10%
pokemon SPECIES_BLIPBUG			//10%
pokemon SPECIES_VENIPEDE  		//10%
pokemon SPECIES_SCATTERBUG		//5%
pokemon SPECIES_SIZZLIPEDE 		//5%
pokemon SPECIES_DWEBBLE			//5%
pokemon SPECIES_YANMA			//5%

// day encounter slots
pokemon SPECIES_SPINARAK		//10%
pokemon SPECIES_SPINARAK		//10%
pokemon SPECIES_SCATTERBUG		//10%
pokemon SPECIES_SIZZLIPEDE		//10%
pokemon SPECIES_WEEDLE			//10%
pokemon SPECIES_PARAS			//10%
pokemon SPECIES_BLIPBUG			//10%
pokemon SPECIES_VENIPEDE  		//10%
pokemon SPECIES_SCATTERBUG		//5%
pokemon SPECIES_SIZZLIPEDE 		//5%
pokemon SPECIES_DWEBBLE			//5%
pokemon SPECIES_YANMA			//5%

// night encounter slots
pokemon SPECIES_SPINARAK		//10%
pokemon SPECIES_SPINARAK		//10%
pokemon SPECIES_SCATTERBUG		//10%
pokemon SPECIES_SIZZLIPEDE		//10%
pokemon SPECIES_WEEDLE			//10%
pokemon SPECIES_PARAS			//10%
pokemon SPECIES_BLIPBUG			//10%
pokemon SPECIES_VENIPEDE  		//10%
pokemon SPECIES_SCATTERBUG		//5%
pokemon SPECIES_SIZZLIPEDE 		//5%
pokemon SPECIES_DWEBBLE			//5%
pokemon SPECIES_YANMA			//5%

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_SURSKIT, 5, 5       //30%
encounter SPECIES_BLIPBUG, 5, 5         //30%
encounter SPECIES_VENIPEDE,  5, 5      //20%
encounter SPECIES_CLAUNCHER, 5, 5      //15%
encounter SPECIES_KRABBY, 5, 5		   //5%

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_SURSKIT, 5, 5       //30%
encounter SPECIES_BLIPBUG, 5, 5         //30%
encounter SPECIES_VENIPEDE,  5, 5      //20%
encounter SPECIES_CLAUNCHER, 5, 5      //15%
encounter SPECIES_KRABBY, 5, 5		   //5%

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20

// super rod encounters
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata   5   // Violet City

walkrate 0
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

// morning encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// day encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// night encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_POPPLIO, 5, 5
encounter SPECIES_SOBBLE, 5, 5
encounter SPECIES_SQUIRTLE, 5, 5
encounter SPECIES_OSHAWOTT, 5, 5
encounter SPECIES_POPPLIO, 5, 5

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_SPHEAL, 5, 5			//30%
encounter SPECIES_SEEL, 5, 5			//30%
encounter SPECIES_SNORUNT, 5, 5			//25%
encounter SPECIES_SHELLDER, 5, 5        //10%
encounter SPECIES_SHELLDER, 5, 5        //5%

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20

// super rod encounters
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata   6   // Sprout Tower 2F

walkrate 5
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5


// morning encounter slots
pokemon SPECIES_SENTRET 	    //10%
pokemon SPECIES_SENTRET		    //10%
monwithform SPECIES_ZIGZAGOON, 1		//10%
pokemon SPECIES_HOUNDOUR		//10%
pokemon SPECIES_STUNKY          //10%
pokemon SPECIES_POOCHYENA		//10%
pokemon SPECIES_LILLIPUP      	//10%
pokemon SPECIES_TEDDIURSA     	//10%
monwithform SPECIES_ZIGZAGOON, 1		//5%
pokemon SPECIES_HOUNDOUR         //5%
pokemon SPECIES_STUNKY          //5%
pokemon SPECIES_MURKROW	        //5%

// day encounter slots
pokemon SPECIES_SENTRET 	    //10%
pokemon SPECIES_SENTRET		    //10%
monwithform SPECIES_ZIGZAGOON, 1		//10%
pokemon SPECIES_HOUNDOUR		//10%
pokemon SPECIES_STUNKY          //10%
pokemon SPECIES_POOCHYENA		//10%
pokemon SPECIES_LILLIPUP      	//10%
pokemon SPECIES_TEDDIURSA     	//10%
monwithform SPECIES_ZIGZAGOON, 1		//5%
pokemon SPECIES_HOUNDOUR         //5%
pokemon SPECIES_STUNKY          //5%
pokemon SPECIES_MURKROW	        //5%

// night encounter slots
pokemon SPECIES_SENTRET 	    //10%
pokemon SPECIES_SENTRET		    //10%
monwithform SPECIES_ZIGZAGOON, 1		//10%
pokemon SPECIES_HOUNDOUR		//10%
pokemon SPECIES_STUNKY          //10%
pokemon SPECIES_POOCHYENA		//10%
pokemon SPECIES_LILLIPUP      	//10%
pokemon SPECIES_TEDDIURSA     	//10%
monwithform SPECIES_ZIGZAGOON, 1		//5%
pokemon SPECIES_HOUNDOUR         //5%
pokemon SPECIES_STUNKY          //5%
pokemon SPECIES_MURKROW	        //5%

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata   7   // Sprout Tower 3F

walkrate 5
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5

// morning encounter slots
pokemon SPECIES_POOCHYENA 	    //10%
pokemon SPECIES_POOCHYENA		//10%
pokemon SPECIES_STUNKY	        //10%
pokemon SPECIES_LILLIPUP	    //10%
pokemon SPECIES_SANDILE		    //10%
monwithform SPECIES_ZIGZAGOON, 1 		//10%
pokemon SPECIES_HOUNDOUR	    //10%
pokemon SPECIES_PIDGEY	        //10%
pokemon SPECIES_STUNKY	        //5%
pokemon SPECIES_LILLIPUP	    //5%
pokemon SPECIES_SANDILE	        //5%
pokemon SPECIES_TEDDIURSA	    //5%

// day encounter slots
pokemon SPECIES_POOCHYENA 	    //10%
pokemon SPECIES_POOCHYENA		//10%
pokemon SPECIES_STUNKY	        //10%
pokemon SPECIES_LILLIPUP	    //10%
pokemon SPECIES_SANDILE		    //10%
monwithform SPECIES_ZIGZAGOON, 1 		//10%
pokemon SPECIES_HOUNDOUR	    //10%
pokemon SPECIES_PIDGEY	        //10%
pokemon SPECIES_STUNKY	        //5%
pokemon SPECIES_LILLIPUP	    //5%
pokemon SPECIES_SANDILE	        //5%
pokemon SPECIES_TEDDIURSA	    //5%

// night encounter slots
pokemon SPECIES_POOCHYENA 	    //10%
pokemon SPECIES_POOCHYENA		//10%
pokemon SPECIES_STUNKY	        //10%
pokemon SPECIES_LILLIPUP	    //10%
pokemon SPECIES_SANDILE		    //10%
monwithform SPECIES_ZIGZAGOON, 1 		//10%
pokemon SPECIES_HOUNDOUR	    //10%
pokemon SPECIES_PIDGEY	        //10%
pokemon SPECIES_STUNKY	        //5%
pokemon SPECIES_LILLIPUP	    //5%
pokemon SPECIES_SANDILE	        //5%
pokemon SPECIES_TEDDIURSA	    //5%

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata   8   // Route 32

walkrate 15
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8

// morning encounter slots
pokemon SPECIES_EKANS		    //10%
pokemon SPECIES_EKANS		    //10%
pokemon SPECIES_SKRELP 		    //10%
pokemon SPECIES_SALANDIT		//10%
pokemon SPECIES_NIDORAN_F		//10%
pokemon SPECIES_NIDORAN_M		//10%
pokemon SPECIES_CROAGUNK		//10%
pokemon SPECIES_BUDEW  		    //10%
pokemon SPECIES_SKRELP  		//5%
pokemon SPECIES_SALANDIT  		//5%
pokemon SPECIES_NIDORAN_F	    //5%
pokemon SPECIES_NIDORAN_M 		//5%

// day encounter slots
pokemon SPECIES_EKANS		    //10%
pokemon SPECIES_EKANS		    //10%
pokemon SPECIES_SKRELP 		    //10%
pokemon SPECIES_SALANDIT		//10%
pokemon SPECIES_NIDORAN_F		//10%
pokemon SPECIES_NIDORAN_M		//10%
pokemon SPECIES_CROAGUNK		//10%
pokemon SPECIES_BUDEW  		    //10%
pokemon SPECIES_SKRELP  		//5%
pokemon SPECIES_SALANDIT  		//5%
pokemon SPECIES_NIDORAN_F	    //5%
pokemon SPECIES_NIDORAN_M 		//5%

// night encounter slots
pokemon SPECIES_EKANS		    //10%
pokemon SPECIES_EKANS		    //10%
pokemon SPECIES_SKRELP 		    //10%
pokemon SPECIES_SALANDIT		//10%
pokemon SPECIES_NIDORAN_F		//10%
pokemon SPECIES_NIDORAN_M		//10%
pokemon SPECIES_CROAGUNK		//10%
pokemon SPECIES_BUDEW  		    //10%
pokemon SPECIES_SKRELP  		//5%
pokemon SPECIES_SALANDIT  		//5%
pokemon SPECIES_NIDORAN_F	    //5%
pokemon SPECIES_NIDORAN_M 		//5%

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_MAGIKARP, 10, 20
encounter SPECIES_MAGIKARP, 15, 25
encounter SPECIES_MAGIKARP, 15, 25
encounter SPECIES_MAGIKARP, 15, 25
encounter SPECIES_MAGIKARP, 36, 36

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_TENTACOOL, 8, 8      //30%
encounter SPECIES_SKRELP, 8, 8         //30%
encounter SPECIES_CROAGUNK,  8, 8		//25%
encounter SPECIES_QWILFISH, 8, 8       //10%
encounter SPECIES_QWILFISH, 8, 8       //5%

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20

// super rod encounters
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata   9   // Ruins of Alph (Outside), Electric

walkrate 15
surfrate 10
rocksmashrate 20
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8

// morning encounter slots
pokemon SPECIES_SHINX			//10%
pokemon SPECIES_SHINX			//10%
pokemon SPECIES_MAREEP			//10%
pokemon SPECIES_TYNAMO			//10%
pokemon SPECIES_ELEKID		    //10%
pokemon SPECIES_YAMPER		    //10%
pokemon SPECIES_ELECTRIKE	    //10%
pokemon SPECIES_CHINCHOU		//10%
pokemon SPECIES_MAREEP	        //5%
pokemon SPECIES_TYNAMO			//5%
pokemon SPECIES_MAGNEMITE		//5%
pokemon SPECIES_PICHU			//5%

// day encounter slots
pokemon SPECIES_SHINX			//10%
pokemon SPECIES_SHINX			//10%
pokemon SPECIES_MAREEP			//10%
pokemon SPECIES_TYNAMO			//10%
pokemon SPECIES_ELEKID		    //10%
pokemon SPECIES_YAMPER		    //10%
pokemon SPECIES_ELECTRIKE	    //10%
pokemon SPECIES_CHINCHOU		//10%
pokemon SPECIES_MAREEP	        //5%
pokemon SPECIES_TYNAMO			//5%
pokemon SPECIES_MAGNEMITE		//5%
pokemon SPECIES_PICHU			//5%

// night encounter slots
pokemon SPECIES_SHINX			//10%
pokemon SPECIES_SHINX			//10%
pokemon SPECIES_MAREEP			//10%
pokemon SPECIES_TYNAMO			//10%
pokemon SPECIES_ELEKID		    //10%
pokemon SPECIES_YAMPER		    //10%
pokemon SPECIES_ELECTRIKE	    //10%
pokemon SPECIES_CHINCHOU		//10%
pokemon SPECIES_MAREEP	        //5%
pokemon SPECIES_TYNAMO			//5%
pokemon SPECIES_MAGNEMITE		//5%
pokemon SPECIES_PICHU			//5%

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_LANTURN, 30, 30        //40%  
encounter SPECIES_EELEKTROSS, 30, 30     //30%
encounter SPECIES_VIKAVOLT, 30, 30       //15%
encounter SPECIES_LANTURN, 30, 30        //10%  
encounter SPECIES_EELEKTROSS, 30, 30     //5%

// rock smash encounters
encounterwithform SPECIES_GEODUDE, 1, 8, 8
encounterwithform SPECIES_GEODUDE, 1, 8, 8

// old rod encounters
encounter SPECIES_CHINCHOU, 8, 8      //30%
encounter SPECIES_TYNAMO, 8, 8        //30%
encounter SPECIES_CHINCHOU, 8, 8      //25%
encounter SPECIES_MAGNEMITE, 8, 8     //10%
encounter SPECIES_TYNAMO, 8, 8        //5%

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20

// super rod encounters
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  10   // Ruins of Alph (Inside, Main Room)

walkrate 15
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15

// morning encounter slots
pokemon SPECIES_DROWZEE			//10%
pokemon SPECIES_DROWZEE   		//10%
pokemon SPECIES_SLOWPOKE		//10%
pokemon SPECIES_MUNNA     		//10%
pokemon SPECIES_ABRA  		    //10%
pokemon SPECIES_MEDITITE		//10%
pokemon SPECIES_SOLOSIS			//10%
pokemon SPECIES_BALTOY			//10%
pokemon SPECIES_SLOWPOKE		//5%
pokemon SPECIES_MUNNA		    //5%
pokemon SPECIES_BRONZOR			//5%
pokemon SPECIES_RALTS			//5%

// day encounter slots
pokemon SPECIES_DROWZEE			//10%
pokemon SPECIES_DROWZEE   		//10%
pokemon SPECIES_SLOWPOKE		//10%
pokemon SPECIES_MUNNA     		//10%
pokemon SPECIES_ABRA  		    //10%
pokemon SPECIES_MEDITITE		//10%
pokemon SPECIES_SOLOSIS			//10%
pokemon SPECIES_BALTOY			//10%
pokemon SPECIES_SLOWPOKE		//5%
pokemon SPECIES_MUNNA		    //5%
pokemon SPECIES_BRONZOR			//5%
pokemon SPECIES_RALTS			//5%

// night encounter slots
pokemon SPECIES_DROWZEE			//10%
pokemon SPECIES_DROWZEE   		//10%
pokemon SPECIES_SLOWPOKE		//10%
pokemon SPECIES_MUNNA     		//10%
pokemon SPECIES_ABRA  		    //10%
pokemon SPECIES_MEDITITE		//10%
pokemon SPECIES_SOLOSIS			//10%
pokemon SPECIES_BALTOY			//10%
pokemon SPECIES_SLOWPOKE		//5%
pokemon SPECIES_MUNNA		    //5%
pokemon SPECIES_BRONZOR			//5%
pokemon SPECIES_RALTS			//5%

// hoenn encounter slots
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN

// sinnoh encounter slots
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  11   // Ruins of Alph (Inside, Main Room - Not sure when used?)

walkrate 15
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5

// morning encounter slots
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN

// day encounter slots
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN

// night encounter slots
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN

// hoenn encounter slots
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN

// sinnoh encounter slots
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_UNOWN
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  12   // Ruins of Alph (Inside, Main Room - Not sure when used?)

walkrate 15
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5

// morning encounter slots
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN

// day encounter slots
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN

// night encounter slots
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN

// hoenn encounter slots
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN

// sinnoh encounter slots
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_UNOWN
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  13   // Ruins of Alph (Inside, Ladder Room - This has no encounter tile permissions though)

walkrate 15
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5

// morning encounter slots
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN

// day encounter slots
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN

// night encounter slots
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN

// hoenn encounter slots
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN

// sinnoh encounter slots
pokemon SPECIES_UNOWN
pokemon SPECIES_UNOWN

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_UNOWN
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  14   // Union Cave 1F

walkrate 10
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10

// morning encounter slots
pokemon SPECIES_ROCKRUFF		//10%
pokemon SPECIES_ROCKRUFF	    //10%
pokemon SPECIES_MUDBRAY 		//10%
pokemon SPECIES_TOGEDEMARU		//10%
pokemon SPECIES_AMAURA		    //10%
pokemon SPECIES_ARON	    	//10%
pokemon SPECIES_RHYHORN	        //10%
pokemon SPECIES_HERDIER    	    //10%
pokemon SPECIES_MUDBRAY		    //5%
pokemon SPECIES_MAGNEMITE		//5%
pokemon SPECIES_GLIGAR			//5%
pokemon SPECIES_ONIX			//5%

// day encounter slots
pokemon SPECIES_ROCKRUFF		//10%
pokemon SPECIES_ROCKRUFF	    //10%
pokemon SPECIES_MUDBRAY 		//10%
pokemon SPECIES_TOGEDEMARU		//10%
pokemon SPECIES_AMAURA		    //10%
pokemon SPECIES_ARON	    	//10%
pokemon SPECIES_RHYHORN	        //10%
pokemon SPECIES_HERDIER    	    //10%
pokemon SPECIES_MUDBRAY		    //5%
pokemon SPECIES_MAGNEMITE		//5%
pokemon SPECIES_GLIGAR			//5%
pokemon SPECIES_ONIX			//5%

// night encounter slots
pokemon SPECIES_ROCKRUFF		//10%
pokemon SPECIES_ROCKRUFF	    //10%
pokemon SPECIES_MUDBRAY 		//10%
pokemon SPECIES_TOGEDEMARU		//10%
pokemon SPECIES_AMAURA		    //10%
pokemon SPECIES_ARON	    	//10%
pokemon SPECIES_RHYHORN	        //10%
pokemon SPECIES_HERDIER    	    //10%
pokemon SPECIES_MUDBRAY		    //5%
pokemon SPECIES_MAGNEMITE		//5%
pokemon SPECIES_GLIGAR			//5%
pokemon SPECIES_ONIX			//5%

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_WOOPER, 10, 20
encounter SPECIES_QUAGSIRE, 15, 25
encounter SPECIES_QUAGSIRE, 10, 20
encounter SPECIES_QUAGSIRE, 10, 20
encounter SPECIES_QUAGSIRE, 10, 20

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_TIRTOUGA, 10, 10     //30%
encounter SPECIES_CHEWTLE, 10, 10      //30%
encounter SPECIES_HORSEA, 10, 10       //25%
encounter SPECIES_QWILFISH, 10, 10     //10%
encounter SPECIES_HORSEA, 10, 10       //5%

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20

// super rod encounters
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_GOLDEEN
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata  15   // Union Cave B1F

walkrate 15
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10

// morning encounter slots
pokemon SPECIES_ARON		 	//10%
pokemon SPECIES_ARON	        //10%
monWithForm SPECIES_GEODUDE, 1		    //10%
pokemon SPECIES_PHANPY  		//10%
pokemon SPECIES_AMAURA			//10%
pokemon SPECIES_SNORUNT		    //10%
monWithForm SPECIES_MEOWTH, 2	        //10%
monWithForm SPECIES_SANDSHREW, 1 		//10%
monWithForm SPECIES_GEODUDE, 1	//5%
pokemon SPECIES_PHANPY 		    //5%
pokemon SPECIES_SNEASEL		    //5%
pokemon SPECIES_NOSEPASS		//5%

// day encounter slots
pokemon SPECIES_ARON		 	//10%
pokemon SPECIES_ARON	        //10%
monWithForm SPECIES_GEODUDE, 1		    //10%
pokemon SPECIES_PHANPY  		//10%
pokemon SPECIES_AMAURA			//10%
pokemon SPECIES_SNORUNT		    //10%
monWithForm SPECIES_MEOWTH, 2	        //10%
monWithForm SPECIES_SANDSHREW, 1 		//10%
monWithForm SPECIES_GEODUDE, 1	//5%
pokemon SPECIES_PHANPY 		    //5%
pokemon SPECIES_SNEASEL		    //5%
pokemon SPECIES_NOSEPASS		//5%

// night encounter slots
pokemon SPECIES_ARON		 	//10%
pokemon SPECIES_ARON	        //10%
monWithForm SPECIES_GEODUDE, 1		    //10%
pokemon SPECIES_PHANPY  		//10%
pokemon SPECIES_AMAURA			//10%
pokemon SPECIES_SNORUNT		    //10%
monWithForm SPECIES_MEOWTH, 2	        //10%
monWithForm SPECIES_SANDSHREW, 1 		//10%
monWithForm SPECIES_GEODUDE, 1	//5%
pokemon SPECIES_PHANPY 		    //5%
pokemon SPECIES_SNEASEL		    //5%
pokemon SPECIES_NOSEPASS		//5%

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_WOOPER, 10, 20
encounter SPECIES_QUAGSIRE, 15, 25
encounter SPECIES_QUAGSIRE, 10, 20
encounter SPECIES_QUAGSIRE, 10, 20
encounter SPECIES_QUAGSIRE, 10, 20

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_SPHEAL, 10, 10         //30%
encounter SPECIES_SHELLDER, 10, 10       //30%
encounter SPECIES_TYMPOLE, 10, 10        //25%
encounter SPECIES_STARYU, 10, 10         //10%
encounter SPECIES_STARYU, 10, 10         //5%

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20

// super rod encounters
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  16   // Union Cave B2F

walkrate 15
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 22, 22, 22, 22, 22, 22, 21, 21, 20, 23, 20, 23

// morning encounter slots
pokemon SPECIES_ZUBAT
pokemon SPECIES_RATICATE
pokemon SPECIES_ZUBAT
pokemon SPECIES_RATICATE
pokemon SPECIES_GOLBAT
pokemon SPECIES_GOLBAT
pokemon SPECIES_GEODUDE
pokemon SPECIES_GEODUDE
pokemon SPECIES_RATTATA
pokemon SPECIES_ONIX
pokemon SPECIES_RATTATA
pokemon SPECIES_ONIX

// day encounter slots
pokemon SPECIES_ZUBAT
pokemon SPECIES_RATICATE
pokemon SPECIES_ZUBAT
pokemon SPECIES_RATICATE
pokemon SPECIES_GOLBAT
pokemon SPECIES_GOLBAT
pokemon SPECIES_GEODUDE
pokemon SPECIES_GEODUDE
pokemon SPECIES_RATTATA
pokemon SPECIES_ONIX
pokemon SPECIES_RATTATA
pokemon SPECIES_ONIX

// night encounter slots
pokemon SPECIES_ZUBAT
pokemon SPECIES_RATICATE
pokemon SPECIES_ZUBAT
pokemon SPECIES_RATICATE
pokemon SPECIES_GOLBAT
pokemon SPECIES_GOLBAT
pokemon SPECIES_GEODUDE
pokemon SPECIES_GEODUDE
pokemon SPECIES_RATTATA
pokemon SPECIES_ONIX
pokemon SPECIES_RATTATA
pokemon SPECIES_ONIX

// hoenn encounter slots
pokemon SPECIES_ABSOL
pokemon SPECIES_MAKUHITA

// sinnoh encounter slots
pokemon SPECIES_BRONZOR
pokemon SPECIES_CHINGLING

// surf encounters
encounter SPECIES_TENTACOOL, 10, 20
encounter SPECIES_QUAGSIRE, 15, 25
encounter SPECIES_TENTACRUEL, 15, 25
encounter SPECIES_TENTACRUEL, 15, 25
encounter SPECIES_TENTACRUEL, 15, 25

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_KRABBY, 10, 10
encounter SPECIES_KRABBY, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_KRABBY, 20, 20
encounter SPECIES_KRABBY, 20, 20
encounter SPECIES_CORSOLA, 20, 20
encounter SPECIES_KRABBY, 20, 20

// super rod encounters
encounter SPECIES_KRABBY, 40, 40
encounter SPECIES_CORSOLA, 40, 40
encounter SPECIES_KRABBY, 40, 40
encounter SPECIES_KINGLER, 40, 40
encounter SPECIES_KRABBY, 40, 40

// swarm grass
pokemon SPECIES_ZUBAT
// swarm surf
pokemon SPECIES_TENTACOOL
// swarm good rod
pokemon SPECIES_STARYU
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata  17   // Route 33

walkrate 15
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10

// morning encounter slots
pokemon SPECIES_BUIZEL	    //10%
pokemon SPECIES_BUIZEL	    //10%
pokemon SPECIES_SKRELP    	//10%
pokemon SPECIES_CROAGUNK	//10%
pokemon SPECIES_NIDORAN_F	//10%
pokemon SPECIES_NIDORAN_M	//10%
pokemon SPECIES_YANMA		//10%
monWithForm SPECIES_FARFETCHD, 1		//10%
pokemon SPECIES_CROAGUNK		//5%
pokemon SPECIES_SKRELP		//5%
pokemon SPECIES_MAKUHITA	//5%
pokemon SPECIES_MAKUHITA	//5%

// day encounter slots
pokemon SPECIES_BUIZEL	    //10%
pokemon SPECIES_BUIZEL	    //10%
pokemon SPECIES_SKRELP    	//10%
pokemon SPECIES_CROAGUNK	//10%
pokemon SPECIES_NIDORAN_F	//10%
pokemon SPECIES_NIDORAN_M	//10%
pokemon SPECIES_YANMA		//10%
monWithForm SPECIES_FARFETCHD, 1		//10%
pokemon SPECIES_CROAGUNK		//5%
pokemon SPECIES_SKRELP		//5%
pokemon SPECIES_MAKUHITA	//5%
pokemon SPECIES_MAKUHITA	//5%

// night encounter slots
pokemon SPECIES_BUIZEL	    //10%
pokemon SPECIES_BUIZEL	    //10%
pokemon SPECIES_SKRELP    	//10%
pokemon SPECIES_CROAGUNK	//10%
pokemon SPECIES_NIDORAN_F	//10%
pokemon SPECIES_NIDORAN_M	//10%
pokemon SPECIES_YANMA		//10%
monWithForm SPECIES_FARFETCHD, 1		//10%
pokemon SPECIES_CROAGUNK		//5%
pokemon SPECIES_SKRELP		//5%
pokemon SPECIES_MAKUHITA	//5%
pokemon SPECIES_MAKUHITA	//5%

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  18   // Slowpoke Well 1F

walkrate 5
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10

// morning encounter slots
pokemon SPECIES_SLOWPOKE			//10%
pokemon SPECIES_SLOWPOKE			//10%
pokemon SPECIES_NATU 			    //10%
pokemon SPECIES_DWEBBLE				//10%
pokemon SPECIES_SHELLDER			//10%
pokemon SPECIES_DROWZEE				//10%
pokemon SPECIES_ZUBAT				//10%
pokemon SPECIES_ONIX				//10%
pokemon SPECIES_NATU                //5%
pokemon SPECIES_DWEBBLE 			//5%
pokemon SPECIES_ABRA				//5%
pokemon SPECIES_SNEASEL				//5%

// day encounter slots
pokemon SPECIES_SLOWPOKE			//10%
pokemon SPECIES_SLOWPOKE			//10%
pokemon SPECIES_NATU 			    //10%
pokemon SPECIES_DWEBBLE				//10%
pokemon SPECIES_SHELLDER			//10%
pokemon SPECIES_DROWZEE				//10%
pokemon SPECIES_ZUBAT				//10%
pokemon SPECIES_ONIX				//10%
pokemon SPECIES_NATU                //5%
pokemon SPECIES_DWEBBLE 			//5%
pokemon SPECIES_ABRA				//5%
pokemon SPECIES_SNEASEL				//5%

// night encounter slots
pokemon SPECIES_SLOWPOKE			//10%
pokemon SPECIES_SLOWPOKE			//10%
pokemon SPECIES_NATU 			    //10%
pokemon SPECIES_DWEBBLE				//10%
pokemon SPECIES_SHELLDER			//10%
pokemon SPECIES_DROWZEE				//10%
pokemon SPECIES_ZUBAT				//10%
pokemon SPECIES_ONIX				//10%
pokemon SPECIES_NATU                //5%
pokemon SPECIES_DWEBBLE 			//5%
pokemon SPECIES_ABRA				//5%
pokemon SPECIES_SNEASEL				//5%

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_SLOWPOKE, 10, 20
encounter SPECIES_SLOWPOKE, 15, 25
encounter SPECIES_SLOWPOKE, 5, 15
encounter SPECIES_SLOWPOKE, 5, 15
encounter SPECIES_SLOWPOKE, 5, 15

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_SLOWPOKE, 10, 10			//30%
encounter SPECIES_STUNFISK, 10, 10			//30%
encounter SPECIES_STARYU, 10, 10		    //25%
encounter SPECIES_SLOWPOKE, 10, 10			//10%
encounterwithform SPECIES_GRIMER, 1,  10, 10	//5%

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20

// super rod encounters
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  19   // Slowpoke Well B2F

walkrate 15
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 21, 23, 21, 23, 19, 19, 21, 21, 23, 23, 23, 23

// morning encounter slots
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_SLOWPOKE
pokemon SPECIES_SLOWPOKE
pokemon SPECIES_GOLBAT
pokemon SPECIES_SLOWPOKE
pokemon SPECIES_GOLBAT
pokemon SPECIES_SLOWPOKE

// day encounter slots
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_SLOWPOKE
pokemon SPECIES_SLOWPOKE
pokemon SPECIES_GOLBAT
pokemon SPECIES_SLOWPOKE
pokemon SPECIES_GOLBAT
pokemon SPECIES_SLOWPOKE

// night encounter slots
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_SLOWPOKE
pokemon SPECIES_SLOWPOKE
pokemon SPECIES_GOLBAT
pokemon SPECIES_SLOWPOKE
pokemon SPECIES_GOLBAT
pokemon SPECIES_SLOWPOKE

// hoenn encounter slots
pokemon SPECIES_ABSOL
pokemon SPECIES_MAKUHITA

// sinnoh encounter slots
pokemon SPECIES_BRONZOR
pokemon SPECIES_CHINGLING

// surf encounters
encounter SPECIES_SLOWPOKE, 10, 20
encounter SPECIES_SLOWPOKE, 15, 25
encounter SPECIES_SLOWBRO, 15, 25
encounter SPECIES_SLOWBRO, 15, 25
encounter SPECIES_SLOWBRO, 30, 30

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_GOLDEEN, 10, 10
encounter SPECIES_GOLDEEN, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20

// super rod encounters
encounter SPECIES_GOLDEEN, 40, 40
encounter SPECIES_GOLDEEN, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_SEAKING, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_ZUBAT
// swarm surf
pokemon SPECIES_SLOWPOKE
// swarm good rod
pokemon SPECIES_GOLDEEN
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata  20   // Ilex Forest

walkrate 5
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10

// morning encounter slots
pokemon SPECIES_SHROOMISH	//10%
pokemon SPECIES_SHROOMISH	//10%
pokemon SPECIES_GOSSIFLEUR  //10%
pokemon SPECIES_PARAS	    //10%
pokemon SPECIES_ROSELIA		//10%
pokemon SPECIES_DEERLING	//10%
pokemon SPECIES_CHIKORITA	//10%
pokemon SPECIES_STEENEE		//10%
pokemon SPECIES_GOSSIFLEUR	//5%
pokemon SPECIES_PARAS		//5%
pokemon SPECIES_ROSELIA	    //5%
pokemon SPECIES_STANTLER	//5%

// day encounter slots
pokemon SPECIES_SHROOMISH	//10%
pokemon SPECIES_SHROOMISH	//10%
pokemon SPECIES_GOSSIFLEUR  //10%
pokemon SPECIES_PARAS	    //10%
pokemon SPECIES_ROSELIA		//10%
pokemon SPECIES_DEERLING	//10%
pokemon SPECIES_CHIKORITA	//10%
pokemon SPECIES_STEENEE	   //10%
pokemon SPECIES_GOSSIFLEUR	//5%
pokemon SPECIES_PARAS		//5%
pokemon SPECIES_ROSELIA	    //5%
pokemon SPECIES_STANTLER	//5%

// night encounter slots
pokemon SPECIES_SHROOMISH	//10%
pokemon SPECIES_SHROOMISH	//10%
pokemon SPECIES_GOSSIFLEUR  //10%
pokemon SPECIES_PARAS	    //10%
pokemon SPECIES_ROSELIA		//10%
pokemon SPECIES_DEERLING	//10%
pokemon SPECIES_CHIKORITA	//10%
pokemon SPECIES_STEENEE	   //10%
pokemon SPECIES_GOSSIFLEUR	//5%
pokemon SPECIES_PARAS		//5%
pokemon SPECIES_ROSELIA	    //5%
pokemon SPECIES_STANTLER	//5%

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_FRILLISH, 20, 30
encounter SPECIES_MASQUERAIN, 20, 30
encounter SPECIES_WHIMSICOTT, 20, 30
encounter SPECIES_MARSHTOMP, 20, 30
encounter SPECIES_MARSHTOMP, 20, 30

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_LILEEP, 5, 14
encounter SPECIES_ANORITH, 5, 14
encounter SPECIES_DEWPIDER, 5, 14
encounter SPECIES_BASCULIN, 5, 14
encounter SPECIES_DEWPIDER, 5, 14

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20

// super rod encounters
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  21   // Route 34

walkrate 15
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15

// morning encounter slots
pokemon SPECIES_MAKUHITA	//10%
pokemon SPECIES_MAKUHITA	//10%
pokemon SPECIES_TIMBURR    	//10%
pokemon SPECIES_TYROGUE		//10%
pokemon SPECIES_STUFFUL		//10%
monwithform SPECIES_FARFETCHD, 1	//10%
pokemon SPECIES_MIENFOO	    //10%
pokemon SPECIES_MEDITITE	//10%
pokemon SPECIES_TIMBURR	    //5%
pokemon SPECIES_TYROGUE	    //5%
pokemon SPECIES_STUFFUL		//5%
pokemon SPECIES_RIOLU		//5%

// day encounter slots
pokemon SPECIES_MAKUHITA	//10%
pokemon SPECIES_MAKUHITA	//10%
pokemon SPECIES_TIMBURR    	//10%
pokemon SPECIES_TYROGUE		//10%
pokemon SPECIES_STUFFUL		//10%
monwithform SPECIES_FARFETCHD, 1	//10%
pokemon SPECIES_MIENFOO	    //10%
pokemon SPECIES_MEDITITE	//10%
pokemon SPECIES_TIMBURR	    //5%
pokemon SPECIES_TYROGUE	    //5%
pokemon SPECIES_STUFFUL		//5%
pokemon SPECIES_RIOLU		//5%

// night encounter slots
pokemon SPECIES_MAKUHITA	//10%
pokemon SPECIES_MAKUHITA	//10%
pokemon SPECIES_TIMBURR    	//10%
pokemon SPECIES_TYROGUE		//10%
pokemon SPECIES_STUFFUL		//10%
monwithform SPECIES_FARFETCHD, 1	//10%
pokemon SPECIES_MIENFOO	    //10%
pokemon SPECIES_MEDITITE	//10%
pokemon SPECIES_TIMBURR	    //5%
pokemon SPECIES_TYROGUE	    //5%
pokemon SPECIES_STUFFUL		//5%
pokemon SPECIES_RIOLU		//5%

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_AZUMARILL, 25, 30
encounter SPECIES_MILOTIC, 25, 30
encounter SPECIES_LANTURN, 25, 30
encounter SPECIES_KINGDRA, 25, 30
encounter SPECIES_KINGDRA, 25, 30

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_TENTACOOL, 10, 15
encounter SPECIES_STUFFUL, 10, 15
encounter SPECIES_CROAGUNK, 10, 15
encounter SPECIES_MAGIKARP, 10, 15
encounter SPECIES_CROAGUNK, 10, 15

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20

// super rod encounters
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  22   // Route 35

walkrate 15
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15

// morning encounter slots
pokemon SPECIES_STUFFUL	    //10%
pokemon SPECIES_STUFFUL	    //10%
pokemon SPECIES_BUNEARY    	//10%
pokemon SPECIES_HERDIER		//10%
pokemon SPECIES_TOGEDEMARU	//10%
pokemon SPECIES_TEDDIURSA	//10%
pokemon SPECIES_MAGNEMITE	//10%
pokemon SPECIES_LITLEO		//10%
pokemon SPECIES_BUNEARY	    //5%
pokemon SPECIES_HERDIER	    //5%
pokemon SPECIES_ROCKRUFF	//5%
pokemon SPECIES_ARON		//5%

// day encounter slots
pokemon SPECIES_STUFFUL	    //10%
pokemon SPECIES_STUFFUL	    //10%
pokemon SPECIES_BUNEARY    	//10%
pokemon SPECIES_HERDIER		//10%
pokemon SPECIES_TOGEDEMARU	//10%
pokemon SPECIES_TEDDIURSA	//10%
pokemon SPECIES_MAGNEMITE	//10%
pokemon SPECIES_LITLEO		//10%
pokemon SPECIES_BUNEARY	    //5%
pokemon SPECIES_HERDIER	    //5%
pokemon SPECIES_ROCKRUFF	//5%
pokemon SPECIES_ARON		//5%

// night encounter slots
pokemon SPECIES_STUFFUL	    //10%
pokemon SPECIES_STUFFUL	    //10%
pokemon SPECIES_BUNEARY    	//10%
pokemon SPECIES_HERDIER		//10%
pokemon SPECIES_TOGEDEMARU	//10%
pokemon SPECIES_TEDDIURSA	//10%
pokemon SPECIES_MAGNEMITE	//10%
pokemon SPECIES_LITLEO		//10%
pokemon SPECIES_BUNEARY	    //5%
pokemon SPECIES_HERDIER	    //5%
pokemon SPECIES_ROCKRUFF	//5%
pokemon SPECIES_ARON		//5%

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_SCRAFTY, 30, 30
encounter SPECIES_TOXICROAK, 30, 30
encounter SPECIES_ARAQUANID, 30, 30
encounter SPECIES_GYARADOS, 30, 30
encounter SPECIES_GYARADOS, 30, 30

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_QWILFISH, 10, 15
encounter SPECIES_TENTACOOL, 10, 15
encounter SPECIES_CARVANHA, 10, 15
encounter SPECIES_BASCULIN, 10, 15
encounter SPECIES_BASCULIN, 10, 15

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20

// super rod encounters
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  23   // National Park

walkrate 15
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15

// morning encounter slots
pokemon SPECIES_PIDGEY 	        //20%
pokemon SPECIES_PIDGEY		    //20%
pokemon SPECIES_YAMPER          //10%
pokemon SPECIES_NUMEL           //10%
monwithform SPECIES_ZIGZAGOON, 1	//10%
pokemon SPECIES_PONYTA	        //10%
pokemon SPECIES_RIOLU	        //10%
pokemon SPECIES_TOGEDEMARU      //10%
pokemon SPECIES_YAMPER  	    //5%
pokemon SPECIES_BULBASAUR	    //5%
pokemon SPECIES_CHIKORITA 	    //5%
pokemon SPECIES_TOXEL	        //5%

// day encounter slots
pokemon SPECIES_PIDGEY 	        //20%
pokemon SPECIES_PIDGEY		    //20%
pokemon SPECIES_PHANPY          //10%
pokemon SPECIES_NUMEL           //10%
monwithform SPECIES_ZIGZAGOON, 1	//10%
pokemon SPECIES_PONYTA	        //10%
pokemon SPECIES_RIOLU	        //10%
pokemon SPECIES_TOGEDEMARU      //10%
pokemon SPECIES_PHANPY  	    //5%
pokemon SPECIES_CHARMANDER	    //5%
pokemon SPECIES_CYNDAQUIL 	    //5%
pokemon SPECIES_TOXEL	        //5%

// night encounter slots
pokemon SPECIES_PIDGEY 	        //20%
pokemon SPECIES_PIDGEY		    //20%
pokemon SPECIES_TYMPOLE          //10%
pokemon SPECIES_NUMEL           //10%
monwithform SPECIES_ZIGZAGOON, 1	//10%
pokemon SPECIES_PONYTA	        //10%
pokemon SPECIES_RIOLU	        //10%
pokemon SPECIES_TOGEDEMARU      //10%
pokemon SPECIES_TYMPOLE  	    //5%
pokemon SPECIES_SQUIRTLE	    //5%
pokemon SPECIES_TOTODILE 	    //5%
pokemon SPECIES_TOXEL	        //5%

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  24   // National Park (Bug Catching Contest - Not Normally Used)

walkrate 15
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 10, 10, 10, 10, 12, 12, 12, 12, 10, 14, 10, 14

// morning encounter slots
pokemon SPECIES_CATERPIE
pokemon SPECIES_CATERPIE
pokemon SPECIES_CATERPIE
pokemon SPECIES_CATERPIE
pokemon SPECIES_CATERPIE
pokemon SPECIES_CATERPIE
pokemon SPECIES_CATERPIE
pokemon SPECIES_CATERPIE
pokemon SPECIES_CATERPIE
pokemon SPECIES_CATERPIE
pokemon SPECIES_CATERPIE
pokemon SPECIES_CATERPIE

// day encounter slots
pokemon SPECIES_CATERPIE
pokemon SPECIES_CATERPIE
pokemon SPECIES_CATERPIE
pokemon SPECIES_CATERPIE
pokemon SPECIES_CATERPIE
pokemon SPECIES_CATERPIE
pokemon SPECIES_CATERPIE
pokemon SPECIES_CATERPIE
pokemon SPECIES_CATERPIE
pokemon SPECIES_CATERPIE
pokemon SPECIES_CATERPIE
pokemon SPECIES_CATERPIE

// night encounter slots
pokemon SPECIES_CATERPIE
pokemon SPECIES_CATERPIE
pokemon SPECIES_CATERPIE
pokemon SPECIES_CATERPIE
pokemon SPECIES_CATERPIE
pokemon SPECIES_CATERPIE
pokemon SPECIES_CATERPIE
pokemon SPECIES_CATERPIE
pokemon SPECIES_CATERPIE
pokemon SPECIES_CATERPIE
pokemon SPECIES_CATERPIE
pokemon SPECIES_CATERPIE

// hoenn encounter slots
pokemon SPECIES_CATERPIE
pokemon SPECIES_CATERPIE

// sinnoh encounter slots
pokemon SPECIES_CATERPIE
pokemon SPECIES_CATERPIE

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_CATERPIE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  25   // Route 36

walkrate 15
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15

// morning encounter slots
pokemon SPECIES_GROWLITHE 	    //10%
pokemon SPECIES_GROWLITHE		//10%
pokemon SPECIES_NUZLEAF         //10%
pokemon SPECIES_NIDORAN_M       //10%
pokemon SPECIES_NIDORAN_F    	//10%
pokemon SPECIES_EKANS	        //10%
pokemon SPECIES_HOUNDOUR        //10%
pokemon SPECIES_SALANDIT	    //10%
pokemon SPECIES_NUZLEAF	        //5%
pokemon SPECIES_PANCHAM 	    //5%
pokemon SPECIES_SKORUPI 	    //5%
pokemon SPECIES_TOXEL	        //5%

// day encounter slots
pokemon SPECIES_GROWLITHE 	    //10%
pokemon SPECIES_GROWLITHE		//10%
pokemon SPECIES_NUZLEAF         //10%
pokemon SPECIES_NIDORAN_M       //10%
pokemon SPECIES_NIDORAN_F    	//10%
pokemon SPECIES_EKANS	        //10%
pokemon SPECIES_HOUNDOUR        //10%
pokemon SPECIES_SALANDIT	    //10%
pokemon SPECIES_NUZLEAF	        //5%
pokemon SPECIES_PANCHAM 	    //5%
pokemon SPECIES_SKORUPI 	    //5%
pokemon SPECIES_TOXEL	        //5%

// night encounter slots
pokemon SPECIES_GROWLITHE 	    //10%
pokemon SPECIES_GROWLITHE		//10%
pokemon SPECIES_NUZLEAF         //10%
pokemon SPECIES_NIDORAN_M       //10%
pokemon SPECIES_NIDORAN_F    	//10%
pokemon SPECIES_EKANS	        //10%
pokemon SPECIES_HOUNDOUR        //10%
pokemon SPECIES_SALANDIT	    //10%
pokemon SPECIES_NUZLEAF	        //5%
pokemon SPECIES_PANCHAM 	    //5%
pokemon SPECIES_SKORUPI 	    //5%
pokemon SPECIES_TOXEL	        //5%

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  26   // Route 37

walkrate 15
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27

// morning encounter slots
pokemon SPECIES_STANTLER 	        //10% 
pokemon SPECIES_STANTLER		    //10%
pokemon SPECIES_PORYGON             //10% 
pokemon SPECIES_MIGHTYENA           //10% 
pokemon SPECIES_FOONGUS    	        //10%  
pokemon SPECIES_MURKROW	            //10%  
pokemon SPECIES_DEERLING            //10% 
pokemon SPECIES_TEDDIURSA 	        //10% 
pokemon SPECIES_PORYGON	            //5%
pokemon SPECIES_MIGHTYENA	        //5%
pokemon SPECIES_CORVISQUIRE 	    //5%
pokemon SPECIES_CORVISQUIRE	        //5%

// day encounter slots
pokemon SPECIES_STANTLER 	        //10% 
pokemon SPECIES_STANTLER		    //10%
pokemon SPECIES_PORYGON             //10% 
pokemon SPECIES_MIGHTYENA           //10% 
pokemon SPECIES_FOONGUS    	        //10%  
pokemon SPECIES_MURKROW	            //10%  
pokemon SPECIES_DEERLING            //10% 
pokemon SPECIES_TEDDIURSA 	        //10% 
pokemon SPECIES_PORYGON	            //5%
pokemon SPECIES_MIGHTYENA	        //5%
pokemon SPECIES_CORVISQUIRE 	    //5%
pokemon SPECIES_CORVISQUIRE	        //5%

// night encounter slots
pokemon SPECIES_STANTLER 	        //10% 
pokemon SPECIES_STANTLER		    //10%
pokemon SPECIES_PORYGON             //10% 
pokemon SPECIES_MIGHTYENA           //10% 
pokemon SPECIES_FOONGUS    	        //10%  
pokemon SPECIES_MURKROW	            //10%  
pokemon SPECIES_DEERLING            //10% 
pokemon SPECIES_TEDDIURSA 	        //10% 
pokemon SPECIES_PORYGON	            //5%
pokemon SPECIES_MIGHTYENA	        //5%
pokemon SPECIES_CORVISQUIRE 	    //5%
pokemon SPECIES_CORVISQUIRE	        //5%

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  27   // Ecruteak City

walkrate 0
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

// morning encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// day encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// night encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounterWithForm SPECIES_MUK, 1, 30, 30
encounter SPECIES_CLAWITZER, 30, 30
encounter SPECIES_QWILFISH, 30, 30
encounter SPECIES_CRAWDAUNT, 30, 30
encounter SPECIES_OVERQWIL, 30, 30

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_CRAWDAUNT, 28, 28
encounter SPECIES_CARVANHA, 28, 28
encounter SPECIES_TENTACOOL, 28, 28
encounter SPECIES_LUMINEON, 28, 28
encounterWithForm SPECIES_GRIMER, 1, 28, 28

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20

// super rod encounters
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  28   // Burned Tower 1F

walkrate 10
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28

// morning encounter slots
pokemon SPECIES_KOFFING 	    //10% 
pokemon SPECIES_KOFFING		    //10%
pokemon SPECIES_KROKOROK        //10%
pokemon SPECIES_NUMEL           //10%
pokemon SPECIES_BRAIXEN    	    //10%
pokemon SPECIES_GOLBAT	        //10%
pokemon SPECIES_LITLEO          //10%
pokemon SPECIES_HYPNO 	        //10%
pokemon SPECIES_KROKOROK	    //5%
pokemon SPECIES_MAGMAR	        //5%
pokemon SPECIES_ABSOL 	        //5%
pokemon SPECIES_NOIBAT  	    //5%

// day encounter slots
pokemon SPECIES_KOFFING 	    //10% 
pokemon SPECIES_KOFFING		    //10%
pokemon SPECIES_KROKOROK        //10%
pokemon SPECIES_NUMEL           //10%
pokemon SPECIES_BRAIXEN    	    //10%
pokemon SPECIES_GOLBAT	        //10%
pokemon SPECIES_LITLEO          //10%
pokemon SPECIES_HYPNO 	        //10%
pokemon SPECIES_KROKOROK	    //5%
pokemon SPECIES_MAGMAR	        //5%
pokemon SPECIES_ABSOL 	        //5%
pokemon SPECIES_NOIBAT  	    //5%

// night encounter slots
pokemon SPECIES_KOFFING 	    //10% 
pokemon SPECIES_KOFFING		    //10%
pokemon SPECIES_KROKOROK        //10%
pokemon SPECIES_NUMEL           //10%
pokemon SPECIES_BRAIXEN    	    //10%
pokemon SPECIES_GOLBAT	        //10%
pokemon SPECIES_LITLEO          //10%
pokemon SPECIES_HYPNO 	        //10%
pokemon SPECIES_KROKOROK	    //5%
pokemon SPECIES_MAGMAR	        //5%
pokemon SPECIES_ABSOL 	        //5%
pokemon SPECIES_NOIBAT  	    //5%

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  29   // Burned Tower B1F

walkrate 10
surfrate 0
rocksmashrate 30
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28

// morning encounter slots
pokemon SPECIES_GOLBAT 	        //10% 
pokemon SPECIES_GOLBAT		    //10%
pokemon SPECIES_ABSOL           //10%
pokemon SPECIES_LAIRON          //10%
pokemon SPECIES_HATTREM    	    //10%
pokemon SPECIES_GLISCOR	        //10%
pokemon SPECIES_DRILBUR         //10%
pokemon SPECIES_DUOSION	        //10%
pokemon SPECIES_ABSOL	        //5%
pokemon SPECIES_LAIRON	        //5%
pokemon SPECIES_HATTREM 	    //5%
pokemon SPECIES_TYRUNT  	    //5%

// day encounter slots
pokemon SPECIES_GOLBAT 	        //10% 
pokemon SPECIES_GOLBAT		    //10%
pokemon SPECIES_ABSOL           //10%
pokemon SPECIES_LAIRON          //10%
pokemon SPECIES_HATTREM    	    //10%
pokemon SPECIES_GLISCOR	        //10%
pokemon SPECIES_DRILBUR         //10%
pokemon SPECIES_DUOSION 	    //10%
pokemon SPECIES_ABSOL	        //5%
pokemon SPECIES_LAIRON	        //5%
pokemon SPECIES_HATTREM 	    //5%
pokemon SPECIES_TYRUNT  	    //5%

// night encounter slots
pokemon SPECIES_GOLBAT 	        //10% 
pokemon SPECIES_GOLBAT		    //10%
pokemon SPECIES_ABSOL           //10%
pokemon SPECIES_LAIRON          //10%
pokemon SPECIES_HATTREM    	    //10%
pokemon SPECIES_GLISCOR	        //10%
pokemon SPECIES_DRILBUR         //10%
pokemon SPECIES_DUOSION	        //10%
pokemon SPECIES_ABSOL	        //5%
pokemon SPECIES_LAIRON	        //5%
pokemon SPECIES_HATTREM 	    //5%
pokemon SPECIES_TYRUNT  	    //5%

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounterWithForm SPECIES_ARCANINE, 1, 40, 40
encounter SPECIES_AERODACTYL, 40, 40

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  30   // Bell Tower 2F

walkrate 5
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 20, 21, 20, 21, 22, 22, 22, 22, 23, 24, 23, 24

// morning encounter slots
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA

// day encounter slots
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA

// night encounter slots
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA

// hoenn encounter slots
pokemon SPECIES_ZIGZAGOON
pokemon SPECIES_SPINDA

// sinnoh encounter slots
pokemon SPECIES_CHATOT
pokemon SPECIES_MEDITITE

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_RATTATA
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  31   // Bell Tower 3F

walkrate 5
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 20, 21, 20, 21, 22, 22, 22, 22, 23, 24, 23, 24

// morning encounter slots
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA

// day encounter slots
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA

// night encounter slots
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA

// hoenn encounter slots
pokemon SPECIES_ZIGZAGOON
pokemon SPECIES_SPINDA

// sinnoh encounter slots
pokemon SPECIES_CHATOT
pokemon SPECIES_MEDITITE

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_RATTATA
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  32   // Bell Tower 4F

walkrate 5
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 20, 21, 20, 21, 22, 22, 22, 22, 23, 24, 23, 24

// morning encounter slots
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA

// day encounter slots
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA

// night encounter slots
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA

// hoenn encounter slots
pokemon SPECIES_ZIGZAGOON
pokemon SPECIES_SPINDA

// sinnoh encounter slots
pokemon SPECIES_CHATOT
pokemon SPECIES_MEDITITE

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_RATTATA
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  33   // Bell Tower 5F

walkrate 5
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 20, 21, 20, 21, 22, 22, 22, 22, 23, 24, 23, 24

// morning encounter slots
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA

// day encounter slots
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA

// night encounter slots
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA

// hoenn encounter slots
pokemon SPECIES_ZIGZAGOON
pokemon SPECIES_SPINDA

// sinnoh encounter slots
pokemon SPECIES_CHATOT
pokemon SPECIES_MEDITITE

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_RATTATA
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  34   // Bell Tower 6F

walkrate 5
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 20, 21, 20, 21, 22, 22, 22, 22, 23, 24, 23, 24

// morning encounter slots
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA

// day encounter slots
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA

// night encounter slots
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA

// hoenn encounter slots
pokemon SPECIES_ZIGZAGOON
pokemon SPECIES_SPINDA

// sinnoh encounter slots
pokemon SPECIES_CHATOT
pokemon SPECIES_MEDITITE

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_RATTATA
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  35   // Bell Tower 7F

walkrate 5
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 20, 21, 20, 21, 22, 22, 22, 22, 23, 24, 23, 24

// morning encounter slots
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA

// day encounter slots
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA

// night encounter slots
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA

// hoenn encounter slots
pokemon SPECIES_ZIGZAGOON
pokemon SPECIES_SPINDA

// sinnoh encounter slots
pokemon SPECIES_CHATOT
pokemon SPECIES_MEDITITE

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_RATTATA
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  36   // Bell Tower 8F

walkrate 5
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 20, 21, 20, 21, 22, 22, 22, 22, 23, 24, 23, 24

// morning encounter slots
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA

// day encounter slots
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA

// night encounter slots
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA

// hoenn encounter slots
pokemon SPECIES_ZIGZAGOON
pokemon SPECIES_SPINDA

// sinnoh encounter slots
pokemon SPECIES_CHATOT
pokemon SPECIES_MEDITITE

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_RATTATA
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  37   // Bell Tower 9F

walkrate 5
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 20, 21, 20, 21, 22, 22, 22, 22, 23, 24, 23, 24

// morning encounter slots
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA

// day encounter slots
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA

// night encounter slots
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA

// hoenn encounter slots
pokemon SPECIES_ZIGZAGOON
pokemon SPECIES_SPINDA

// sinnoh encounter slots
pokemon SPECIES_CHATOT
pokemon SPECIES_MEDITITE

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_RATTATA
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  38   // Route 38

walkrate 15
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28, 28

// morning encounter slots
pokemon SPECIES_FEAROW 	        //10%
pokemon SPECIES_FEAROW		    //10%
pokemon SPECIES_ROCKRUFF        //10%
pokemon SPECIES_MIENFOO         //10%
pokemon SPECIES_LUXIO           //10%
pokemon SPECIES_SHELMET	        //10%
pokemon SPECIES_KARRABLAST      //10%
pokemon SPECIES_CUFANT	        //10%
pokemon SPECIES_ROCKRUFF	    //5%
pokemon SPECIES_MIENFOO         //5%
pokemon SPECIES_BEEDRILL        //5%
pokemon SPECIES_FERROSEED	    //5%

// day encounter slots
pokemon SPECIES_FEAROW 	        //10%
pokemon SPECIES_FEAROW		    //10%
pokemon SPECIES_ROCKRUFF        //10%
pokemon SPECIES_MIENFOO         //10%
pokemon SPECIES_LUXIO           //10%
pokemon SPECIES_SHELMET	        //10%
pokemon SPECIES_KARRABLAST      //10%
pokemon SPECIES_CUFANT	        //10%
pokemon SPECIES_ROCKRUFF	    //5%
pokemon SPECIES_MIENFOO         //5%
pokemon SPECIES_BEEDRILL        //5%
pokemon SPECIES_FERROSEED	    //5%

// night encounter slots
pokemon SPECIES_FEAROW 	        //10%
pokemon SPECIES_FEAROW		    //10%
pokemon SPECIES_ROCKRUFF        //10%
pokemon SPECIES_MIENFOO         //10%
pokemon SPECIES_LUXIO           //10%
pokemon SPECIES_SHELMET	        //10%
pokemon SPECIES_KARRABLAST      //10%
pokemon SPECIES_CUFANT	        //10%
pokemon SPECIES_ROCKRUFF	    //5%
pokemon SPECIES_MIENFOO         //5%
pokemon SPECIES_BEEDRILL        //5%
pokemon SPECIES_FERROSEED	    //5%

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  39   // Route 39

walkrate 15
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30

// morning encounter slots
pokemon SPECIES_XATU    	    //10%
pokemon SPECIES_XATU		    //10%
pokemon SPECIES_RIBOMBEE        //10%
pokemon SPECIES_FLETCHINDER     //10%
pokemon SPECIES_GALVANTULA      //10%
pokemon SPECIES_SIGILYPH  	    //10%
pokemon SPECIES_SWABLU          //10%
pokemon SPECIES_SCYTHER	        //10%
pokemon SPECIES_RIBOMBEE	    //5%
pokemon SPECIES_FLETCHINDER     //5%
pokemon SPECIES_GRANBULL        //5%
pokemon SPECIES_CRUSTLE         //5%

// day encounter slots
pokemon SPECIES_XATU    	    //10%
pokemon SPECIES_XATU		    //10%
pokemon SPECIES_RIBOMBEE        //10%
pokemon SPECIES_FLETCHINDER     //10%
pokemon SPECIES_GALVANTULA      //10%
pokemon SPECIES_SIGILYPH  	    //10%
pokemon SPECIES_SWABLU          //10%
pokemon SPECIES_SCYTHER	        //10%
pokemon SPECIES_RIBOMBEE	    //5%
pokemon SPECIES_FLETCHINDER     //5%
pokemon SPECIES_GRANBULL        //5%
pokemon SPECIES_CRUSTLE         //5%

// night encounter slots
pokemon SPECIES_XATU    	    //10%
pokemon SPECIES_XATU		    //10%
pokemon SPECIES_RIBOMBEE        //10%
pokemon SPECIES_FLETCHINDER     //10%
pokemon SPECIES_GALVANTULA      //10%
pokemon SPECIES_SIGILYPH  	    //10%
pokemon SPECIES_SWABLU          //10%
pokemon SPECIES_SCYTHER	        //10%
pokemon SPECIES_RIBOMBEE	    //5%
pokemon SPECIES_FLETCHINDER     //5%
pokemon SPECIES_GRANBULL        //5%
pokemon SPECIES_CRUSTLE         //5%

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  40   // Olivine City

walkrate 0
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

// morning encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// day encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// night encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_MAGIKARP, 5, 35
encounter SPECIES_STARYU, 5, 35
encounter SPECIES_LANTURN, 35, 35
encounter SPECIES_TENTACRUEL, 35, 35
encounter SPECIES_TENTACRUEL, 35, 35

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_KINGLER, 30, 30
encounter SPECIES_SEADRA, 30, 30
encounter SPECIES_GOLDUCK, 30, 30
encounter SPECIES_FLOATZEL, 30, 30
encounter SPECIES_LUDICOLO, 30, 30

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_KRABBY, 20, 20
encounter SPECIES_KRABBY, 20, 20
encounter SPECIES_CORSOLA, 20, 20
encounter SPECIES_KRABBY, 20, 20

// super rod encounters
encounter SPECIES_KRABBY, 40, 40
encounter SPECIES_CORSOLA, 40, 40
encounter SPECIES_KRABBY, 40, 40
encounter SPECIES_KINGLER, 40, 40
encounter SPECIES_KRABBY, 40, 40

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  41   // Route 40

walkrate 0
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

// morning encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// day encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// night encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_VIBRAVA, 35, 35
encounter SPECIES_WALREIN, 35, 35
encounter SPECIES_DREDNAW, 35, 35
encounter SPECIES_STARMIE, 35, 35
encounter SPECIES_CARRACOSTA, 35, 35

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_SHELLDER, 5, 35
encounter SPECIES_OCTILLERY, 35, 35
encounter SPECIES_ARAQUANID, 35, 35
encounter SPECIES_BRUXISH, 35, 35
encounter SPECIES_WAILORD, 35, 35

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_KRABBY, 20, 20
encounter SPECIES_KRABBY, 20, 20
encounter SPECIES_CORSOLA, 20, 20
encounter SPECIES_KRABBY, 20, 20

// super rod encounters
encounter SPECIES_KRABBY, 40, 40
encounter SPECIES_CORSOLA, 40, 40
encounter SPECIES_KRABBY, 40, 40
encounter SPECIES_KINGLER, 40, 40
encounter SPECIES_KRABBY, 40, 40

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  42   // Route 41

walkrate 0
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

// morning encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// day encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// night encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_BRUXISH, 35, 35
encounter SPECIES_FRILLISH, 5, 35
encounter SPECIES_BASCULIN, 35, 35
encounter SPECIES_WAILORD, 35, 35
encounter SPECIES_SLOWPOKE, 5, 35

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_BARRASKEWDA, 35, 35
encounter SPECIES_AZUMARILL, 35, 35
encounter SPECIES_ARMALDO, 35, 35
encounter SPECIES_CRADILY, 35, 35
encounter SPECIES_TENTACRUEL, 35, 35

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_TENTACOOL, 20, 20
encounter SPECIES_CHINCHOU, 20, 20
encounter SPECIES_SHELLDER, 20, 20
encounter SPECIES_CHINCHOU, 20, 20

// super rod encounters
encounter SPECIES_CHINCHOU, 40, 40
encounter SPECIES_SHELLDER, 40, 40
encounter SPECIES_TENTACRUEL, 40, 40
encounter SPECIES_LANTURN, 40, 40
encounter SPECIES_TENTACRUEL, 40, 40

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  43   // Whirl Islands 1F

walkrate 5
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 22, 23, 22, 23, 24, 24, 22, 22, 23, 24, 23, 24

// morning encounter slots
pokemon SPECIES_KRABBY
pokemon SPECIES_ZUBAT
pokemon SPECIES_KRABBY
pokemon SPECIES_ZUBAT
pokemon SPECIES_KRABBY
pokemon SPECIES_KRABBY
pokemon SPECIES_SEEL
pokemon SPECIES_SEEL
pokemon SPECIES_GOLBAT
pokemon SPECIES_SEEL
pokemon SPECIES_GOLBAT
pokemon SPECIES_SEEL

// day encounter slots
pokemon SPECIES_KRABBY
pokemon SPECIES_ZUBAT
pokemon SPECIES_KRABBY
pokemon SPECIES_ZUBAT
pokemon SPECIES_KRABBY
pokemon SPECIES_KRABBY
pokemon SPECIES_SEEL
pokemon SPECIES_SEEL
pokemon SPECIES_GOLBAT
pokemon SPECIES_SEEL
pokemon SPECIES_GOLBAT
pokemon SPECIES_SEEL

// night encounter slots
pokemon SPECIES_KRABBY
pokemon SPECIES_ZUBAT
pokemon SPECIES_KRABBY
pokemon SPECIES_ZUBAT
pokemon SPECIES_KRABBY
pokemon SPECIES_KRABBY
pokemon SPECIES_SEEL
pokemon SPECIES_SEEL
pokemon SPECIES_GOLBAT
pokemon SPECIES_SEEL
pokemon SPECIES_GOLBAT
pokemon SPECIES_SEEL

// hoenn encounter slots
pokemon SPECIES_ABSOL
pokemon SPECIES_MAKUHITA

// sinnoh encounter slots
pokemon SPECIES_BRONZOR
pokemon SPECIES_CHINGLING

// surf encounters
encounter SPECIES_TENTACOOL, 15, 25
encounter SPECIES_HORSEA, 10, 20
encounter SPECIES_TENTACRUEL, 15, 25
encounter SPECIES_TENTACRUEL, 15, 25
encounter SPECIES_TENTACRUEL, 15, 25

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_KRABBY, 10, 10
encounter SPECIES_KRABBY, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_KRABBY, 20, 20
encounter SPECIES_KRABBY, 20, 20
encounter SPECIES_HORSEA, 20, 20
encounter SPECIES_KRABBY, 20, 20

// super rod encounters
encounter SPECIES_KRABBY, 40, 40
encounter SPECIES_HORSEA, 40, 40
encounter SPECIES_KINGLER, 40, 40
encounter SPECIES_SEADRA, 40, 40
encounter SPECIES_KINGLER, 40, 40

// swarm grass
pokemon SPECIES_KRABBY
// swarm surf
pokemon SPECIES_TENTACOOL
// swarm good rod
pokemon SPECIES_HORSEA
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata  44   // Whirl Islands B1F

walkrate 5
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 22, 23, 22, 23, 24, 24, 22, 22, 23, 24, 23, 24

// morning encounter slots
pokemon SPECIES_KRABBY
pokemon SPECIES_ZUBAT
pokemon SPECIES_KRABBY
pokemon SPECIES_ZUBAT
pokemon SPECIES_KRABBY
pokemon SPECIES_KRABBY
pokemon SPECIES_SEEL
pokemon SPECIES_SEEL
pokemon SPECIES_GOLBAT
pokemon SPECIES_SEEL
pokemon SPECIES_GOLBAT
pokemon SPECIES_SEEL

// day encounter slots
pokemon SPECIES_KRABBY
pokemon SPECIES_ZUBAT
pokemon SPECIES_KRABBY
pokemon SPECIES_ZUBAT
pokemon SPECIES_KRABBY
pokemon SPECIES_KRABBY
pokemon SPECIES_SEEL
pokemon SPECIES_SEEL
pokemon SPECIES_GOLBAT
pokemon SPECIES_SEEL
pokemon SPECIES_GOLBAT
pokemon SPECIES_SEEL

// night encounter slots
pokemon SPECIES_KRABBY
pokemon SPECIES_ZUBAT
pokemon SPECIES_KRABBY
pokemon SPECIES_ZUBAT
pokemon SPECIES_KRABBY
pokemon SPECIES_KRABBY
pokemon SPECIES_SEEL
pokemon SPECIES_SEEL
pokemon SPECIES_GOLBAT
pokemon SPECIES_SEEL
pokemon SPECIES_GOLBAT
pokemon SPECIES_SEEL

// hoenn encounter slots
pokemon SPECIES_ABSOL
pokemon SPECIES_MAKUHITA

// sinnoh encounter slots
pokemon SPECIES_BRONZOR
pokemon SPECIES_CHINGLING

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_KRABBY
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  45   // ???

walkrate 0
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

// morning encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// day encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// night encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  46   // Whirl Islands B2F

walkrate 5
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 22, 23, 22, 23, 24, 24, 22, 22, 23, 24, 23, 24

// morning encounter slots
pokemon SPECIES_KRABBY
pokemon SPECIES_ZUBAT
pokemon SPECIES_KRABBY
pokemon SPECIES_ZUBAT
pokemon SPECIES_KRABBY
pokemon SPECIES_KRABBY
pokemon SPECIES_SEEL
pokemon SPECIES_SEEL
pokemon SPECIES_GOLBAT
pokemon SPECIES_SEEL
pokemon SPECIES_GOLBAT
pokemon SPECIES_SEEL

// day encounter slots
pokemon SPECIES_KRABBY
pokemon SPECIES_ZUBAT
pokemon SPECIES_KRABBY
pokemon SPECIES_ZUBAT
pokemon SPECIES_KRABBY
pokemon SPECIES_KRABBY
pokemon SPECIES_SEEL
pokemon SPECIES_SEEL
pokemon SPECIES_GOLBAT
pokemon SPECIES_SEEL
pokemon SPECIES_GOLBAT
pokemon SPECIES_SEEL

// night encounter slots
pokemon SPECIES_KRABBY
pokemon SPECIES_ZUBAT
pokemon SPECIES_KRABBY
pokemon SPECIES_ZUBAT
pokemon SPECIES_KRABBY
pokemon SPECIES_KRABBY
pokemon SPECIES_SEEL
pokemon SPECIES_SEEL
pokemon SPECIES_GOLBAT
pokemon SPECIES_SEEL
pokemon SPECIES_GOLBAT
pokemon SPECIES_SEEL

// hoenn encounter slots
pokemon SPECIES_ABSOL
pokemon SPECIES_MAKUHITA

// sinnoh encounter slots
pokemon SPECIES_BRONZOR
pokemon SPECIES_CHINGLING

// surf encounters
encounter SPECIES_HORSEA, 15, 25
encounter SPECIES_TENTACRUEL, 15, 25
encounter SPECIES_SEADRA, 15, 25
encounter SPECIES_SEADRA, 15, 25
encounter SPECIES_SEADRA, 30, 30

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_KRABBY, 10, 10
encounter SPECIES_KRABBY, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_KRABBY, 20, 20
encounter SPECIES_KRABBY, 20, 20
encounter SPECIES_HORSEA, 20, 20
encounter SPECIES_KRABBY, 20, 20

// super rod encounters
encounter SPECIES_KRABBY, 40, 40
encounter SPECIES_HORSEA, 40, 40
encounter SPECIES_KINGLER, 40, 40
encounter SPECIES_SEADRA, 40, 40
encounter SPECIES_KINGLER, 40, 40

// swarm grass
pokemon SPECIES_KRABBY
// swarm surf
pokemon SPECIES_HORSEA
// swarm good rod
pokemon SPECIES_HORSEA
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata  47   // ???

walkrate 0
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

// morning encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// day encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// night encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  48   // Whirl Islands B3F (Ledge overlooking Lugia room)

walkrate 5
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 23, 24, 23, 24, 25, 25, 23, 23, 24, 25, 24, 25

// morning encounter slots
pokemon SPECIES_KRABBY
pokemon SPECIES_ZUBAT
pokemon SPECIES_KRABBY
pokemon SPECIES_ZUBAT
pokemon SPECIES_KRABBY
pokemon SPECIES_KRABBY
pokemon SPECIES_SEEL
pokemon SPECIES_SEEL
pokemon SPECIES_GOLBAT
pokemon SPECIES_SEEL
pokemon SPECIES_GOLBAT
pokemon SPECIES_SEEL

// day encounter slots
pokemon SPECIES_KRABBY
pokemon SPECIES_ZUBAT
pokemon SPECIES_KRABBY
pokemon SPECIES_ZUBAT
pokemon SPECIES_KRABBY
pokemon SPECIES_KRABBY
pokemon SPECIES_SEEL
pokemon SPECIES_SEEL
pokemon SPECIES_GOLBAT
pokemon SPECIES_SEEL
pokemon SPECIES_GOLBAT
pokemon SPECIES_SEEL

// night encounter slots
pokemon SPECIES_KRABBY
pokemon SPECIES_ZUBAT
pokemon SPECIES_KRABBY
pokemon SPECIES_ZUBAT
pokemon SPECIES_KRABBY
pokemon SPECIES_KRABBY
pokemon SPECIES_SEEL
pokemon SPECIES_SEEL
pokemon SPECIES_GOLBAT
pokemon SPECIES_SEEL
pokemon SPECIES_GOLBAT
pokemon SPECIES_SEEL

// hoenn encounter slots
pokemon SPECIES_ABSOL
pokemon SPECIES_MAKUHITA

// sinnoh encounter slots
pokemon SPECIES_BRONZOR
pokemon SPECIES_CHINGLING

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_KRABBY
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  49   // ???

walkrate 0
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

// morning encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// day encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// night encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  50   // ???

walkrate 0
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

// morning encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// day encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// night encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  51   // Cianwood City

walkrate 0
surfrate 10
rocksmashrate 30
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

// morning encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// day encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// night encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_BARRASKEWDA, 35, 35
encounter SPECIES_SEISMITOAD, 35, 35
encounter SPECIES_BRUXISH, 35, 35
encounter SPECIES_EELEKTROSS, 35, 35
encounter SPECIES_QWILFISH, 35, 35

// rock smash encounters
encounterWithForm SPECIES_GRAVELER, 1, 35, 35 
encounter SPECIES_CLAWITZER, 35, 35

// old rod encounters
encounter SPECIES_MAGIKARP, 5, 35
encounter SPECIES_SLOWPOKE, 5, 35
encounter SPECIES_MILOTIC, 35, 35
encounter SPECIES_BARRASKEWDA, 35, 35
encounter SPECIES_DRAGALGE, 35, 35

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_KRABBY, 20, 20
encounter SPECIES_KRABBY, 20, 20
encounter SPECIES_CORSOLA, 20, 20
encounter SPECIES_KRABBY, 20, 20

// super rod encounters
encounter SPECIES_KRABBY, 40, 40
encounter SPECIES_CORSOLA, 40, 40
encounter SPECIES_KRABBY, 40, 40
encounter SPECIES_KINGLER, 40, 40
encounter SPECIES_KRABBY, 40, 40

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  52   // Route 42

walkrate 15
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 15, 13, 15, 13, 14, 14, 16, 16, 15, 17, 15, 17

// morning encounter slots
pokemon SPECIES_MANKEY
pokemon SPECIES_MAREEP
pokemon SPECIES_MANKEY
pokemon SPECIES_MAREEP
pokemon SPECIES_SPEAROW
pokemon SPECIES_SPEAROW
pokemon SPECIES_SPEAROW
pokemon SPECIES_SPEAROW
pokemon SPECIES_FLAAFFY
pokemon SPECIES_FLAAFFY
pokemon SPECIES_FLAAFFY
pokemon SPECIES_FLAAFFY

// day encounter slots
pokemon SPECIES_MANKEY
pokemon SPECIES_MAREEP
pokemon SPECIES_MANKEY
pokemon SPECIES_MAREEP
pokemon SPECIES_SPEAROW
pokemon SPECIES_SPEAROW
pokemon SPECIES_SPEAROW
pokemon SPECIES_SPEAROW
pokemon SPECIES_FLAAFFY
pokemon SPECIES_FLAAFFY
pokemon SPECIES_FLAAFFY
pokemon SPECIES_FLAAFFY

// night encounter slots
pokemon SPECIES_MANKEY
pokemon SPECIES_MAREEP
pokemon SPECIES_MANKEY
pokemon SPECIES_MAREEP
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_FLAAFFY
pokemon SPECIES_FLAAFFY
pokemon SPECIES_FLAAFFY
pokemon SPECIES_FLAAFFY

// hoenn encounter slots
pokemon SPECIES_WHISMUR
pokemon SPECIES_LINOONE

// sinnoh encounter slots
pokemon SPECIES_BUIZEL
pokemon SPECIES_BIDOOF

// surf encounters
encounter SPECIES_GOLDEEN, 15, 25
encounter SPECIES_GOLDEEN, 10, 20
encounter SPECIES_SEAKING, 15, 25
encounter SPECIES_SEAKING, 15, 25
encounter SPECIES_SEAKING, 15, 25

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_GOLDEEN, 10, 10
encounter SPECIES_GOLDEEN, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20

// super rod encounters
encounter SPECIES_GOLDEEN, 40, 40
encounter SPECIES_GOLDEEN, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_SEAKING, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_MANKEY
// swarm surf
pokemon SPECIES_GOLDEEN
// swarm good rod
pokemon SPECIES_GOLDEEN
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata  53   // Mt. Mortar (Waterfall room)

walkrate 10
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 13, 15, 13, 15, 14, 14, 14, 14, 14, 16, 14, 15

// morning encounter slots
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_MACHOP
pokemon SPECIES_MACHOP
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_GEODUDE
pokemon SPECIES_RATTATA
pokemon SPECIES_GEODUDE
pokemon SPECIES_MARILL

// day encounter slots
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_MACHOP
pokemon SPECIES_MACHOP
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_GEODUDE
pokemon SPECIES_RATTATA
pokemon SPECIES_GEODUDE
pokemon SPECIES_MARILL

// night encounter slots
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_MACHOP
pokemon SPECIES_MACHOP
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_GEODUDE
pokemon SPECIES_RATTATA
pokemon SPECIES_GEODUDE
pokemon SPECIES_MARILL

// hoenn encounter slots
pokemon SPECIES_ABSOL
pokemon SPECIES_MAKUHITA

// sinnoh encounter slots
pokemon SPECIES_BRONZOR
pokemon SPECIES_CHINGLING

// surf encounters
encounter SPECIES_GOLDEEN, 15, 25
encounter SPECIES_GOLDEEN, 10, 20
encounter SPECIES_SEAKING, 15, 25
encounter SPECIES_SEAKING, 15, 25
encounter SPECIES_SEAKING, 15, 25

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_GOLDEEN, 10, 10
encounter SPECIES_GOLDEEN, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20

// super rod encounters
encounter SPECIES_GOLDEEN, 40, 40
encounter SPECIES_GOLDEEN, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_SEAKING, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_MARILL
// swarm surf
pokemon SPECIES_GOLDEEN
// swarm good rod
pokemon SPECIES_GOLDEEN
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata  54   // Mt. Mortar (Central room)

walkrate 10
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 13, 13, 13, 13, 15, 15, 14, 14, 15, 14, 15, 14

// morning encounter slots
pokemon SPECIES_GEODUDE
pokemon SPECIES_MACHOP
pokemon SPECIES_GEODUDE
pokemon SPECIES_MACHOP
pokemon SPECIES_GEODUDE
pokemon SPECIES_GEODUDE
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_MACHOP
pokemon SPECIES_ZUBAT
pokemon SPECIES_MACHOP
pokemon SPECIES_ZUBAT

// day encounter slots
pokemon SPECIES_GEODUDE
pokemon SPECIES_MACHOP
pokemon SPECIES_GEODUDE
pokemon SPECIES_MACHOP
pokemon SPECIES_GEODUDE
pokemon SPECIES_GEODUDE
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_MACHOP
pokemon SPECIES_ZUBAT
pokemon SPECIES_MACHOP
pokemon SPECIES_ZUBAT

// night encounter slots
pokemon SPECIES_GEODUDE
pokemon SPECIES_MACHOP
pokemon SPECIES_GEODUDE
pokemon SPECIES_MACHOP
pokemon SPECIES_GEODUDE
pokemon SPECIES_GEODUDE
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_MACHOP
pokemon SPECIES_ZUBAT
pokemon SPECIES_MACHOP
pokemon SPECIES_ZUBAT

// hoenn encounter slots
pokemon SPECIES_ABSOL
pokemon SPECIES_MAKUHITA

// sinnoh encounter slots
pokemon SPECIES_BRONZOR
pokemon SPECIES_CHINGLING

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_GEODUDE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  55   // Mt. Mortar (Room above waterfall)

walkrate 10
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 31, 32, 31, 32, 31, 31, 30, 30, 28, 30, 28, 30

// morning encounter slots
pokemon SPECIES_GRAVELER
pokemon SPECIES_MACHOKE
pokemon SPECIES_GRAVELER
pokemon SPECIES_MACHOKE
pokemon SPECIES_GEODUDE
pokemon SPECIES_GEODUDE
pokemon SPECIES_RATICATE
pokemon SPECIES_RATICATE
pokemon SPECIES_MACHOP
pokemon SPECIES_GOLBAT
pokemon SPECIES_MACHOP
pokemon SPECIES_GOLBAT

// day encounter slots
pokemon SPECIES_GRAVELER
pokemon SPECIES_MACHOKE
pokemon SPECIES_GRAVELER
pokemon SPECIES_MACHOKE
pokemon SPECIES_GEODUDE
pokemon SPECIES_GEODUDE
pokemon SPECIES_RATICATE
pokemon SPECIES_RATICATE
pokemon SPECIES_MACHOP
pokemon SPECIES_GOLBAT
pokemon SPECIES_MACHOP
pokemon SPECIES_GOLBAT

// night encounter slots
pokemon SPECIES_GRAVELER
pokemon SPECIES_MACHOKE
pokemon SPECIES_GRAVELER
pokemon SPECIES_MACHOKE
pokemon SPECIES_GEODUDE
pokemon SPECIES_GEODUDE
pokemon SPECIES_RATICATE
pokemon SPECIES_RATICATE
pokemon SPECIES_MACHOP
pokemon SPECIES_GOLBAT
pokemon SPECIES_MACHOP
pokemon SPECIES_GOLBAT

// hoenn encounter slots
pokemon SPECIES_ABSOL
pokemon SPECIES_MAKUHITA

// sinnoh encounter slots
pokemon SPECIES_BRONZOR
pokemon SPECIES_CHINGLING

// surf encounters
encounter SPECIES_GOLDEEN, 15, 25
encounter SPECIES_GOLDEEN, 20, 30
encounter SPECIES_SEAKING, 20, 30
encounter SPECIES_SEAKING, 20, 30
encounter SPECIES_SEAKING, 20, 30

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_GOLDEEN, 10, 10
encounter SPECIES_GOLDEEN, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20

// super rod encounters
encounter SPECIES_GOLDEEN, 40, 40
encounter SPECIES_GOLDEEN, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_SEAKING, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_GRAVELER
// swarm surf
pokemon SPECIES_GOLDEEN
// swarm good rod
pokemon SPECIES_GOLDEEN
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata  56   // Mt. Mortar B1F

walkrate 10
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 15, 17, 15, 17, 16, 16, 16, 16, 16, 16, 16, 16

// morning encounter slots
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_MACHOP
pokemon SPECIES_MACHOP
pokemon SPECIES_GEODUDE
pokemon SPECIES_RATICATE
pokemon SPECIES_GEODUDE
pokemon SPECIES_RATICATE

// day encounter slots
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_MACHOP
pokemon SPECIES_MACHOP
pokemon SPECIES_GEODUDE
pokemon SPECIES_RATICATE
pokemon SPECIES_GEODUDE
pokemon SPECIES_RATICATE

// night encounter slots
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_MACHOP
pokemon SPECIES_MACHOP
pokemon SPECIES_GEODUDE
pokemon SPECIES_RATICATE
pokemon SPECIES_GEODUDE
pokemon SPECIES_RATICATE

// hoenn encounter slots
pokemon SPECIES_ABSOL
pokemon SPECIES_MAKUHITA

// sinnoh encounter slots
pokemon SPECIES_BRONZOR
pokemon SPECIES_CHINGLING

// surf encounters
encounter SPECIES_GOLDEEN, 15, 25
encounter SPECIES_GOLDEEN, 10, 20
encounter SPECIES_SEAKING, 15, 25
encounter SPECIES_SEAKING, 15, 25
encounter SPECIES_SEAKING, 15, 25

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_GOLDEEN, 10, 10
encounter SPECIES_GOLDEEN, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20

// super rod encounters
encounter SPECIES_GOLDEEN, 40, 40
encounter SPECIES_GOLDEEN, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_SEAKING, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_ZUBAT
// swarm surf
pokemon SPECIES_GOLDEEN
// swarm good rod
pokemon SPECIES_GOLDEEN
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata  57   // Route 43

walkrate 15
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 15, 15, 15, 15, 17, 17, 15, 15, 16, 17, 16, 17

// morning encounter slots
pokemon SPECIES_FLAAFFY
pokemon SPECIES_GIRAFARIG
pokemon SPECIES_FLAAFFY
pokemon SPECIES_GIRAFARIG
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_MAREEP
pokemon SPECIES_MAREEP
pokemon SPECIES_VENONAT
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_VENONAT
pokemon SPECIES_PIDGEOTTO

// day encounter slots
pokemon SPECIES_FLAAFFY
pokemon SPECIES_GIRAFARIG
pokemon SPECIES_FLAAFFY
pokemon SPECIES_GIRAFARIG
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_MAREEP
pokemon SPECIES_MAREEP
pokemon SPECIES_FLAAFFY
pokemon SPECIES_FLAAFFY
pokemon SPECIES_FLAAFFY
pokemon SPECIES_FLAAFFY

// night encounter slots
pokemon SPECIES_FLAAFFY
pokemon SPECIES_GIRAFARIG
pokemon SPECIES_FLAAFFY
pokemon SPECIES_GIRAFARIG
pokemon SPECIES_NOCTOWL
pokemon SPECIES_NOCTOWL
pokemon SPECIES_VENONAT
pokemon SPECIES_VENONAT
pokemon SPECIES_MAREEP
pokemon SPECIES_VENONAT
pokemon SPECIES_MAREEP
pokemon SPECIES_VENONAT

// hoenn encounter slots
pokemon SPECIES_WHISMUR
pokemon SPECIES_LINOONE

// sinnoh encounter slots
pokemon SPECIES_BUIZEL
pokemon SPECIES_BIDOOF

// surf encounters
encounter SPECIES_MAGIKARP, 15, 25
encounter SPECIES_MAGIKARP, 10, 20
encounter SPECIES_MAGIKARP, 5, 15
encounter SPECIES_MAGIKARP, 5, 15
encounter SPECIES_MAGIKARP, 50, 50

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_POLIWAG, 10, 10
encounter SPECIES_POLIWAG, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_POLIWAG, 20, 20
encounter SPECIES_POLIWAG, 20, 20
encounter SPECIES_POLIWAG, 20, 20
encounter SPECIES_POLIWAG, 20, 20

// super rod encounters
encounter SPECIES_POLIWAG, 40, 40
encounter SPECIES_POLIWAG, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_POLIWAG, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_FLAAFFY
// swarm surf
pokemon SPECIES_MAGIKARP
// swarm good rod
pokemon SPECIES_POLIWAG
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata  58   // Lake of Rage

walkrate 0
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

// morning encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// day encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// night encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_MAGIKARP, 10, 20
encounter SPECIES_MAGIKARP, 5, 15
encounter SPECIES_GYARADOS, 10, 20
encounter SPECIES_GYARADOS, 10, 20
encounter SPECIES_GYARADOS, 10, 20

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_GYARADOS, 20, 20
encounter SPECIES_MAGIKARP, 20, 20

// super rod encounters
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_GYARADOS, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_MAGIKARP
// swarm good rod
pokemon SPECIES_GYARADOS
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata  59   // Route 44

walkrate 15
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 23, 22, 23, 22, 22, 22, 24, 24, 24, 26, 24, 26

// morning encounter slots
pokemon SPECIES_TANGELA
pokemon SPECIES_WEEPINBELL
pokemon SPECIES_TANGELA
pokemon SPECIES_WEEPINBELL
pokemon SPECIES_BELLSPROUT
pokemon SPECIES_BELLSPROUT
pokemon SPECIES_LICKITUNG
pokemon SPECIES_LICKITUNG
pokemon SPECIES_WEEPINBELL
pokemon SPECIES_LICKITUNG
pokemon SPECIES_WEEPINBELL
pokemon SPECIES_LICKITUNG

// day encounter slots
pokemon SPECIES_TANGELA
pokemon SPECIES_WEEPINBELL
pokemon SPECIES_TANGELA
pokemon SPECIES_WEEPINBELL
pokemon SPECIES_BELLSPROUT
pokemon SPECIES_BELLSPROUT
pokemon SPECIES_LICKITUNG
pokemon SPECIES_LICKITUNG
pokemon SPECIES_WEEPINBELL
pokemon SPECIES_LICKITUNG
pokemon SPECIES_WEEPINBELL
pokemon SPECIES_LICKITUNG

// night encounter slots
pokemon SPECIES_TANGELA
pokemon SPECIES_WEEPINBELL
pokemon SPECIES_TANGELA
pokemon SPECIES_WEEPINBELL
pokemon SPECIES_BELLSPROUT
pokemon SPECIES_BELLSPROUT
pokemon SPECIES_LICKITUNG
pokemon SPECIES_LICKITUNG
pokemon SPECIES_WEEPINBELL
pokemon SPECIES_LICKITUNG
pokemon SPECIES_WEEPINBELL
pokemon SPECIES_LICKITUNG

// hoenn encounter slots
pokemon SPECIES_WHISMUR
pokemon SPECIES_LINOONE

// sinnoh encounter slots
pokemon SPECIES_BUIZEL
pokemon SPECIES_BIDOOF

// surf encounters
encounter SPECIES_POLIWAG, 20, 30
encounter SPECIES_POLIWAG, 15, 25
encounter SPECIES_POLIWHIRL, 20, 30
encounter SPECIES_POLIWHIRL, 20, 30
encounter SPECIES_POLIWHIRL, 20, 30

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_POLIWAG, 10, 10
encounter SPECIES_POLIWAG, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_POLIWAG, 20, 20
encounter SPECIES_POLIWAG, 20, 20
encounter SPECIES_POLIWAG, 20, 20
encounter SPECIES_REMORAID, 20, 20

// super rod encounters
encounter SPECIES_POLIWAG, 40, 40
encounter SPECIES_POLIWAG, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_REMORAID, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_TANGELA
// swarm surf
pokemon SPECIES_POLIWAG
// swarm good rod
pokemon SPECIES_POLIWAG
// swarm super rod
pokemon SPECIES_REMORAID

.close


encounterdata  60   // Ice Path 1F

walkrate 5
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 21, 22, 21, 22, 22, 22, 23, 23, 22, 22, 22, 22

// morning encounter slots
pokemon SPECIES_SWINUB
pokemon SPECIES_GOLBAT
pokemon SPECIES_SWINUB
pokemon SPECIES_GOLBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_SWINUB
pokemon SPECIES_SWINUB
pokemon SPECIES_ZUBAT
pokemon SPECIES_JYNX
pokemon SPECIES_ZUBAT
pokemon SPECIES_JYNX

// day encounter slots
pokemon SPECIES_SWINUB
pokemon SPECIES_GOLBAT
pokemon SPECIES_SWINUB
pokemon SPECIES_GOLBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_SWINUB
pokemon SPECIES_SWINUB
pokemon SPECIES_JYNX
pokemon SPECIES_JYNX
pokemon SPECIES_JYNX
pokemon SPECIES_JYNX

// night encounter slots
pokemon SPECIES_SWINUB
pokemon SPECIES_GOLBAT
pokemon SPECIES_SWINUB
pokemon SPECIES_GOLBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_SWINUB
pokemon SPECIES_SWINUB
pokemon SPECIES_ZUBAT
pokemon SPECIES_JYNX
pokemon SPECIES_ZUBAT
pokemon SPECIES_JYNX

// hoenn encounter slots
pokemon SPECIES_ABSOL
pokemon SPECIES_MAKUHITA

// sinnoh encounter slots
pokemon SPECIES_BRONZOR
pokemon SPECIES_CHINGLING

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_SWINUB
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  61   // Ice Path B1F

walkrate 5
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 21, 22, 21, 22, 22, 22, 23, 23, 22, 22, 22, 22

// morning encounter slots
pokemon SPECIES_SWINUB
pokemon SPECIES_GOLBAT
pokemon SPECIES_SWINUB
pokemon SPECIES_GOLBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_SWINUB
pokemon SPECIES_SWINUB
pokemon SPECIES_ZUBAT
pokemon SPECIES_JYNX
pokemon SPECIES_ZUBAT
pokemon SPECIES_JYNX

// day encounter slots
pokemon SPECIES_SWINUB
pokemon SPECIES_GOLBAT
pokemon SPECIES_SWINUB
pokemon SPECIES_GOLBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_SWINUB
pokemon SPECIES_SWINUB
pokemon SPECIES_JYNX
pokemon SPECIES_JYNX
pokemon SPECIES_JYNX
pokemon SPECIES_JYNX

// night encounter slots
pokemon SPECIES_SWINUB
pokemon SPECIES_GOLBAT
pokemon SPECIES_SWINUB
pokemon SPECIES_GOLBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_SWINUB
pokemon SPECIES_SWINUB
pokemon SPECIES_ZUBAT
pokemon SPECIES_JYNX
pokemon SPECIES_ZUBAT
pokemon SPECIES_JYNX

// hoenn encounter slots
pokemon SPECIES_ABSOL
pokemon SPECIES_MAKUHITA

// sinnoh encounter slots
pokemon SPECIES_BRONZOR
pokemon SPECIES_CHINGLING

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_SWINUB
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  62   // Ice Path B2F

walkrate 5
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 22, 23, 22, 23, 23, 23, 24, 24, 23, 23, 23, 23

// morning encounter slots
pokemon SPECIES_SWINUB
pokemon SPECIES_GOLBAT
pokemon SPECIES_SWINUB
pokemon SPECIES_GOLBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_SWINUB
pokemon SPECIES_SWINUB
pokemon SPECIES_ZUBAT
pokemon SPECIES_JYNX
pokemon SPECIES_ZUBAT
pokemon SPECIES_JYNX

// day encounter slots
pokemon SPECIES_SWINUB
pokemon SPECIES_GOLBAT
pokemon SPECIES_SWINUB
pokemon SPECIES_GOLBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_SWINUB
pokemon SPECIES_SWINUB
pokemon SPECIES_JYNX
pokemon SPECIES_JYNX
pokemon SPECIES_JYNX
pokemon SPECIES_JYNX

// night encounter slots
pokemon SPECIES_SWINUB
pokemon SPECIES_GOLBAT
pokemon SPECIES_SWINUB
pokemon SPECIES_GOLBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_SWINUB
pokemon SPECIES_SWINUB
pokemon SPECIES_ZUBAT
pokemon SPECIES_JYNX
pokemon SPECIES_ZUBAT
pokemon SPECIES_JYNX

// hoenn encounter slots
pokemon SPECIES_ABSOL
pokemon SPECIES_MAKUHITA

// sinnoh encounter slots
pokemon SPECIES_BRONZOR
pokemon SPECIES_CHINGLING

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_SWINUB
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  63   // Ice Path B3F

walkrate 5
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 22, 23, 22, 23, 23, 23, 24, 24, 23, 23, 23, 23

// morning encounter slots
pokemon SPECIES_SWINUB
pokemon SPECIES_GOLBAT
pokemon SPECIES_SWINUB
pokemon SPECIES_GOLBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_SWINUB
pokemon SPECIES_SWINUB
pokemon SPECIES_ZUBAT
pokemon SPECIES_JYNX
pokemon SPECIES_ZUBAT
pokemon SPECIES_JYNX

// day encounter slots
pokemon SPECIES_SWINUB
pokemon SPECIES_GOLBAT
pokemon SPECIES_SWINUB
pokemon SPECIES_GOLBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_SWINUB
pokemon SPECIES_SWINUB
pokemon SPECIES_JYNX
pokemon SPECIES_JYNX
pokemon SPECIES_JYNX
pokemon SPECIES_JYNX

// night encounter slots
pokemon SPECIES_SWINUB
pokemon SPECIES_GOLBAT
pokemon SPECIES_SWINUB
pokemon SPECIES_GOLBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_SWINUB
pokemon SPECIES_SWINUB
pokemon SPECIES_ZUBAT
pokemon SPECIES_JYNX
pokemon SPECIES_ZUBAT
pokemon SPECIES_JYNX

// hoenn encounter slots
pokemon SPECIES_ABSOL
pokemon SPECIES_MAKUHITA

// sinnoh encounter slots
pokemon SPECIES_BRONZOR
pokemon SPECIES_CHINGLING

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_SWINUB
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  64   // ???

walkrate 0
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

// morning encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// day encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// night encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  65   // Blackthorn City

walkrate 0
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

// morning encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// day encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// night encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_MAGIKARP, 10, 20
encounter SPECIES_MAGIKARP, 5, 15
encounter SPECIES_MAGIKARP, 2, 10
encounter SPECIES_MAGIKARP, 2, 10
encounter SPECIES_MAGIKARP, 2, 10

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_POLIWAG, 10, 10
encounter SPECIES_POLIWAG, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_POLIWAG, 20, 20
encounter SPECIES_POLIWAG, 20, 20
encounter SPECIES_POLIWAG, 20, 20
encounter SPECIES_POLIWAG, 20, 20

// super rod encounters
encounter SPECIES_POLIWAG, 40, 40
encounter SPECIES_POLIWAG, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_POLIWAG, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_MAGIKARP
// swarm good rod
pokemon SPECIES_POLIWAG
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata  66   // Dragons Den

walkrate 0
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

// morning encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// day encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// night encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_MAGIKARP, 10, 20
encounter SPECIES_MAGIKARP, 5, 15
encounter SPECIES_DRATINI, 5, 15
encounter SPECIES_DRATINI, 5, 15
encounter SPECIES_DRATINI, 5, 15

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_DRATINI, 20, 20
encounter SPECIES_MAGIKARP, 20, 20

// super rod encounters
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_DRATINI, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_DRAGONAIR, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_MAGIKARP
// swarm good rod
pokemon SPECIES_DRATINI
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata  67   // Route 45

walkrate 15
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 23, 23, 23, 23, 24, 24, 20, 20, 25, 27, 25, 27

// morning encounter slots
pokemon SPECIES_GEODUDE
pokemon SPECIES_GRAVELER
pokemon SPECIES_GEODUDE
pokemon SPECIES_GRAVELER
pokemon SPECIES_GLIGAR
pokemon SPECIES_GLIGAR
pokemon SPECIES_PHANPY
pokemon SPECIES_PHANPY
pokemon SPECIES_GRAVELER
pokemon SPECIES_GRAVELER
pokemon SPECIES_GRAVELER
pokemon SPECIES_GRAVELER

// day encounter slots
pokemon SPECIES_GEODUDE
pokemon SPECIES_GRAVELER
pokemon SPECIES_GEODUDE
pokemon SPECIES_GRAVELER
pokemon SPECIES_GLIGAR
pokemon SPECIES_GLIGAR
pokemon SPECIES_PHANPY
pokemon SPECIES_PHANPY
pokemon SPECIES_GRAVELER
pokemon SPECIES_GRAVELER
pokemon SPECIES_GRAVELER
pokemon SPECIES_GRAVELER

// night encounter slots
pokemon SPECIES_GEODUDE
pokemon SPECIES_GRAVELER
pokemon SPECIES_GEODUDE
pokemon SPECIES_GRAVELER
pokemon SPECIES_GLIGAR
pokemon SPECIES_GLIGAR
pokemon SPECIES_PHANPY
pokemon SPECIES_PHANPY
pokemon SPECIES_GRAVELER
pokemon SPECIES_GRAVELER
pokemon SPECIES_GRAVELER
pokemon SPECIES_GRAVELER

// hoenn encounter slots
pokemon SPECIES_WHISMUR
pokemon SPECIES_LINOONE

// sinnoh encounter slots
pokemon SPECIES_BUIZEL
pokemon SPECIES_BIDOOF

// surf encounters
encounter SPECIES_MAGIKARP, 15, 25
encounter SPECIES_MAGIKARP, 10, 20
encounter SPECIES_MAGIKARP, 2, 10
encounter SPECIES_MAGIKARP, 2, 10
encounter SPECIES_MAGIKARP, 2, 10

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_POLIWAG, 10, 10
encounter SPECIES_POLIWAG, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_POLIWAG, 20, 20
encounter SPECIES_POLIWAG, 20, 20
encounter SPECIES_POLIWAG, 20, 20
encounter SPECIES_POLIWAG, 20, 20

// super rod encounters
encounter SPECIES_POLIWAG, 40, 40
encounter SPECIES_POLIWAG, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_POLIWAG, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_SWABLU
// swarm surf
pokemon SPECIES_MAGIKARP
// swarm good rod
pokemon SPECIES_POLIWAG
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata  68   // Route 46

walkrate 15
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3

// morning encounter slots
pokemon SPECIES_PIDGEY    	//10%
pokemon SPECIES_PIDGEY		//10%
pokemon SPECIES_STARLY 		//10%
pokemon SPECIES_ROOKIDEE	//10%
pokemon SPECIES_NATU	    //10%
pokemon SPECIES_FLETCHLING	//10%
pokemon SPECIES_TAILLOW	    //10%
pokemon SPECIES_SPEAROW  	//10%
pokemon SPECIES_STARLY      //5%
pokemon SPECIES_ROOKIDEE	//5%
pokemon SPECIES_NATU		//5%
pokemon SPECIES_PHANPY		//5%

// day encounter slots
pokemon SPECIES_PIDGEY    	//10%
pokemon SPECIES_PIDGEY		//10%
pokemon SPECIES_STARLY 		//10%
pokemon SPECIES_ROOKIDEE	//10%
pokemon SPECIES_NATU	    //10%
pokemon SPECIES_FLETCHLING	//10%
pokemon SPECIES_TAILLOW	    //10%
pokemon SPECIES_SPEAROW  	//10%
pokemon SPECIES_STARLY      //5%
pokemon SPECIES_ROOKIDEE	//5%
pokemon SPECIES_NATU		//5%
pokemon SPECIES_PHANPY		//5%

// night encounter slots
pokemon SPECIES_PIDGEY    	//10%
pokemon SPECIES_PIDGEY		//10%
pokemon SPECIES_STARLY 		//10%
pokemon SPECIES_ROOKIDEE	//10%
pokemon SPECIES_NATU	    //10%
pokemon SPECIES_FLETCHLING	//10%
pokemon SPECIES_TAILLOW	    //10%
pokemon SPECIES_SPEAROW  	//10%
pokemon SPECIES_STARLY      //5%
pokemon SPECIES_ROOKIDEE	//5%
pokemon SPECIES_NATU		//5%
pokemon SPECIES_PHANPY		//5%

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  69   // Dark Cave (Route 31 entrance)

walkrate 15
surfrate 10
rocksmashrate 50
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5

// morning encounter slots
pokemon SPECIES_GEODUDE	    //10%
pokemon SPECIES_GEODUDE		//10%
pokemon SPECIES_CUFANT   	//10%
pokemon SPECIES_ROGGENROLA	//10%
pokemon SPECIES_PHANPY  	//10%
pokemon SPECIES_SANDSHREW	//10%
pokemon SPECIES_CUBONE		//10%
pokemon SPECIES_DWEBBLE		//10%
pokemon SPECIES_CUFANT		//5%
pokemon SPECIES_ROGGENROLA	//5%
monwithform SPECIES_MEOWTH, 2	    //5%
pokemon SPECIES_ARON		//5%

// day encounter slots
pokemon SPECIES_GEODUDE	    //10%
pokemon SPECIES_GEODUDE		//10%
pokemon SPECIES_CUFANT   	//10%
pokemon SPECIES_ROGGENROLA	//10%
pokemon SPECIES_PHANPY  	//10%
pokemon SPECIES_SANDSHREW	//10%
pokemon SPECIES_CUBONE		//10%
pokemon SPECIES_DWEBBLE		//10%
pokemon SPECIES_CUFANT		//5%
pokemon SPECIES_ROGGENROLA	//5%
monwithform SPECIES_MEOWTH, 2	    //5%
pokemon SPECIES_ARON		//5%

// night encounter slots
pokemon SPECIES_GEODUDE	    //10%
pokemon SPECIES_GEODUDE		//10%
pokemon SPECIES_CUFANT   	//10%
pokemon SPECIES_ROGGENROLA	//10%
pokemon SPECIES_PHANPY  	//10%
pokemon SPECIES_SANDSHREW	//10%
pokemon SPECIES_CUBONE		//10%
pokemon SPECIES_DWEBBLE		//10%
pokemon SPECIES_CUFANT		//5%
pokemon SPECIES_ROGGENROLA	//5%
monwithform SPECIES_MEOWTH, 2	    //5%
pokemon SPECIES_ARON		//5%

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_MAGIKARP, 10, 20
encounter SPECIES_MAGIKARP, 5, 15
encounter SPECIES_MAGIKARP, 2, 10
encounter SPECIES_MAGIKARP, 2, 10
encounter SPECIES_MAGIKARP, 2, 10

// rock smash encounters
encounter SPECIES_GEODUDE, 4, 8
encounterWithForm SPECIES_GEODUDE, 1, 4, 8

// old rod encounters
encounter SPECIES_SHELLOS, 5, 5
encounter SPECIES_TYMPOLE, 5, 5
encounter SPECIES_FINNEON, 5, 5
encounter SPECIES_KRABBY, 5, 5
encounter SPECIES_FINNEON, 5, 5

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20

// super rod encounters
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  70   // Dark Cave (Route 45 entrance)

walkrate 10
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 23, 23, 23, 23, 25, 25, 20, 20, 25, 23, 25, 23

// morning encounter slots
pokemon SPECIES_GEODUDE
pokemon SPECIES_ZUBAT
pokemon SPECIES_GEODUDE
pokemon SPECIES_ZUBAT
pokemon SPECIES_GRAVELER
pokemon SPECIES_GRAVELER
pokemon SPECIES_WOBBUFFET
pokemon SPECIES_WOBBUFFET
pokemon SPECIES_WOBBUFFET
pokemon SPECIES_GOLBAT
pokemon SPECIES_WOBBUFFET
pokemon SPECIES_GOLBAT

// day encounter slots
pokemon SPECIES_GEODUDE
pokemon SPECIES_ZUBAT
pokemon SPECIES_GEODUDE
pokemon SPECIES_ZUBAT
pokemon SPECIES_GRAVELER
pokemon SPECIES_GRAVELER
pokemon SPECIES_WOBBUFFET
pokemon SPECIES_WOBBUFFET
pokemon SPECIES_WOBBUFFET
pokemon SPECIES_GOLBAT
pokemon SPECIES_WOBBUFFET
pokemon SPECIES_GOLBAT

// night encounter slots
pokemon SPECIES_GEODUDE
pokemon SPECIES_ZUBAT
pokemon SPECIES_GEODUDE
pokemon SPECIES_ZUBAT
pokemon SPECIES_GRAVELER
pokemon SPECIES_GRAVELER
pokemon SPECIES_WOBBUFFET
pokemon SPECIES_WOBBUFFET
pokemon SPECIES_WOBBUFFET
pokemon SPECIES_GOLBAT
pokemon SPECIES_WOBBUFFET
pokemon SPECIES_GOLBAT

// hoenn encounter slots
pokemon SPECIES_ABSOL
pokemon SPECIES_MAKUHITA

// sinnoh encounter slots
pokemon SPECIES_BRONZOR
pokemon SPECIES_CHINGLING

// surf encounters
encounter SPECIES_MAGIKARP, 10, 20
encounter SPECIES_MAGIKARP, 5, 15
encounter SPECIES_MAGIKARP, 2, 10
encounter SPECIES_MAGIKARP, 2, 10
encounter SPECIES_MAGIKARP, 2, 10

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_GOLDEEN, 10, 10
encounter SPECIES_GOLDEEN, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20

// super rod encounters
encounter SPECIES_GOLDEEN, 40, 40
encounter SPECIES_GOLDEEN, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_SEAKING, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_GEODUDE
// swarm surf
pokemon SPECIES_MAGIKARP
// swarm good rod
pokemon SPECIES_GOLDEEN
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata  71   // Route 47

walkrate 15
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 35, 35, 34, 33, 32, 31, 32, 31, 34, 31, 33, 40

// morning encounter slots
pokemon SPECIES_FARFETCHD
pokemon SPECIES_MILTANK
pokemon SPECIES_DITTO
pokemon SPECIES_DITTO
pokemon SPECIES_DITTO
pokemon SPECIES_DITTO
pokemon SPECIES_GLOOM
pokemon SPECIES_SPEAROW
pokemon SPECIES_FEAROW
pokemon SPECIES_RATICATE
pokemon SPECIES_RATICATE
pokemon SPECIES_DITTO

// day encounter slots
pokemon SPECIES_FARFETCHD
pokemon SPECIES_MILTANK
pokemon SPECIES_DITTO
pokemon SPECIES_DITTO
pokemon SPECIES_DITTO
pokemon SPECIES_DITTO
pokemon SPECIES_GLOOM
pokemon SPECIES_SPEAROW
pokemon SPECIES_FEAROW
pokemon SPECIES_RATICATE
pokemon SPECIES_RATICATE
pokemon SPECIES_DITTO

// night encounter slots
pokemon SPECIES_NOCTOWL
pokemon SPECIES_MILTANK
pokemon SPECIES_DITTO
pokemon SPECIES_DITTO
pokemon SPECIES_DITTO
pokemon SPECIES_DITTO
pokemon SPECIES_GLOOM
pokemon SPECIES_SPEAROW
pokemon SPECIES_FEAROW
pokemon SPECIES_RATICATE
pokemon SPECIES_RATICATE
pokemon SPECIES_DITTO

// hoenn encounter slots
pokemon SPECIES_WHISMUR
pokemon SPECIES_LINOONE

// sinnoh encounter slots
pokemon SPECIES_BUIZEL
pokemon SPECIES_BIDOOF

// surf encounters
encounter SPECIES_TENTACOOL, 15, 25
encounter SPECIES_SEEL, 10, 20
encounter SPECIES_STARYU, 15, 25
encounter SPECIES_STARYU, 15, 25
encounter SPECIES_STARYU, 15, 25

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_TENTACOOL, 10, 10
encounter SPECIES_TENTACOOL, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_TENTACOOL, 20, 20
encounter SPECIES_CHINCHOU, 20, 20
encounter SPECIES_SHELLDER, 20, 20
encounter SPECIES_CHINCHOU, 20, 20

// super rod encounters
encounter SPECIES_CHINCHOU, 40, 40
encounter SPECIES_SHELLDER, 40, 40
encounter SPECIES_TENTACRUEL, 40, 40
encounter SPECIES_LANTURN, 40, 40
encounter SPECIES_TENTACRUEL, 40, 40

// swarm grass
pokemon SPECIES_DITTO
// swarm surf
pokemon SPECIES_TENTACOOL
// swarm good rod
pokemon SPECIES_SHELLDER
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata  72   // Mt. Moon (Outside area)

walkrate 0
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

// morning encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// day encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// night encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_POLIWAG, 35, 35
encounter SPECIES_MAGIKARP, 30, 30
encounter SPECIES_MAGIKARP, 35, 35
encounter SPECIES_MAGIKARP, 35, 35
encounter SPECIES_MAGIKARP, 35, 35

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_POLIWAG, 20, 20
encounter SPECIES_POLIWAG, 20, 20
encounter SPECIES_POLIWAG, 20, 20

// super rod encounters
encounter SPECIES_POLIWAG, 40, 40
encounter SPECIES_POLIWAG, 40, 40
encounter SPECIES_POLIWAG, 40, 40
encounter SPECIES_POLIWAG, 40, 40
encounter SPECIES_POLIWAG, 40, 40

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_POLIWAG
// swarm good rod
pokemon SPECIES_POLIWAG
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata  73   // Mt. Moon (Outside area when Clefairy are active)

walkrate 0
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

// morning encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// day encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// night encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_POLIWAG, 35, 35
encounter SPECIES_POLIWAG, 30, 30
encounter SPECIES_POLIWAG, 35, 35
encounter SPECIES_POLIWAG, 35, 35
encounter SPECIES_POLIWAG, 35, 35

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_POLIWAG, 10, 10
encounter SPECIES_POLIWAG, 10, 10
encounter SPECIES_POLIWAG, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_POLIWAG, 10, 10

// good rod encounters
encounter SPECIES_POLIWAG, 20, 20
encounter SPECIES_POLIWAG, 20, 20
encounter SPECIES_POLIWAG, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_POLIWAG, 20, 20

// super rod encounters
encounter SPECIES_POLIWAG, 40, 40
encounter SPECIES_POLIWAG, 40, 40
encounter SPECIES_POLIWAG, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_POLIWAG, 40, 40

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_POLIWAG
// swarm good rod
pokemon SPECIES_MAGIKARP
// swarm super rod
pokemon SPECIES_POLIWAG

.close


encounterdata  74   // Seafoam Islands 1F

walkrate 5
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 28, 32, 28, 29, 30, 32, 27, 26, 27, 26, 27, 26

// morning encounter slots
pokemon SPECIES_ZUBAT
pokemon SPECIES_GOLBAT
pokemon SPECIES_PSYDUCK
pokemon SPECIES_PSYDUCK
pokemon SPECIES_GOLBAT
pokemon SPECIES_GOLDUCK
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_PSYDUCK
pokemon SPECIES_PSYDUCK
pokemon SPECIES_PSYDUCK
pokemon SPECIES_PSYDUCK

// day encounter slots
pokemon SPECIES_ZUBAT
pokemon SPECIES_GOLBAT
pokemon SPECIES_PSYDUCK
pokemon SPECIES_PSYDUCK
pokemon SPECIES_GOLBAT
pokemon SPECIES_GOLDUCK
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_PSYDUCK
pokemon SPECIES_PSYDUCK
pokemon SPECIES_PSYDUCK
pokemon SPECIES_PSYDUCK

// night encounter slots
pokemon SPECIES_ZUBAT
pokemon SPECIES_GOLBAT
pokemon SPECIES_PSYDUCK
pokemon SPECIES_PSYDUCK
pokemon SPECIES_GOLBAT
pokemon SPECIES_GOLDUCK
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_PSYDUCK
pokemon SPECIES_PSYDUCK
pokemon SPECIES_PSYDUCK
pokemon SPECIES_PSYDUCK

// hoenn encounter slots
pokemon SPECIES_ABSOL
pokemon SPECIES_MAKUHITA

// sinnoh encounter slots
pokemon SPECIES_BRONZOR
pokemon SPECIES_CHINGLING

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_ZUBAT
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  75   // Seafoam Islands B1F

walkrate 5
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 32, 34, 28, 34, 32, 34, 29, 28, 32, 28, 27, 26

// morning encounter slots
pokemon SPECIES_SEEL
pokemon SPECIES_GOLBAT
pokemon SPECIES_PSYDUCK
pokemon SPECIES_SEEL
pokemon SPECIES_GOLBAT
pokemon SPECIES_GOLDUCK
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_GOLDUCK
pokemon SPECIES_PSYDUCK
pokemon SPECIES_PSYDUCK
pokemon SPECIES_PSYDUCK

// day encounter slots
pokemon SPECIES_SEEL
pokemon SPECIES_GOLBAT
pokemon SPECIES_PSYDUCK
pokemon SPECIES_SEEL
pokemon SPECIES_GOLBAT
pokemon SPECIES_GOLDUCK
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_GOLDUCK
pokemon SPECIES_PSYDUCK
pokemon SPECIES_PSYDUCK
pokemon SPECIES_PSYDUCK

// night encounter slots
pokemon SPECIES_SEEL
pokemon SPECIES_GOLBAT
pokemon SPECIES_PSYDUCK
pokemon SPECIES_SEEL
pokemon SPECIES_GOLBAT
pokemon SPECIES_GOLDUCK
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_GOLDUCK
pokemon SPECIES_PSYDUCK
pokemon SPECIES_PSYDUCK
pokemon SPECIES_PSYDUCK

// hoenn encounter slots
pokemon SPECIES_ABSOL
pokemon SPECIES_MAKUHITA

// sinnoh encounter slots
pokemon SPECIES_BRONZOR
pokemon SPECIES_CHINGLING

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_SEEL
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  76   // Seafoam Islands B2F

walkrate 5
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 33, 35, 30, 35, 33, 35, 30, 29, 33, 29, 28, 27

// morning encounter slots
pokemon SPECIES_SEEL
pokemon SPECIES_GOLBAT
pokemon SPECIES_PSYDUCK
pokemon SPECIES_SEEL
pokemon SPECIES_GOLBAT
pokemon SPECIES_GOLDUCK
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_GOLDUCK
pokemon SPECIES_PSYDUCK
pokemon SPECIES_PSYDUCK
pokemon SPECIES_PSYDUCK

// day encounter slots
pokemon SPECIES_SEEL
pokemon SPECIES_GOLBAT
pokemon SPECIES_PSYDUCK
pokemon SPECIES_SEEL
pokemon SPECIES_GOLBAT
pokemon SPECIES_GOLDUCK
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_GOLDUCK
pokemon SPECIES_PSYDUCK
pokemon SPECIES_PSYDUCK
pokemon SPECIES_PSYDUCK

// night encounter slots
pokemon SPECIES_SEEL
pokemon SPECIES_GOLBAT
pokemon SPECIES_PSYDUCK
pokemon SPECIES_SEEL
pokemon SPECIES_GOLBAT
pokemon SPECIES_GOLDUCK
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_GOLDUCK
pokemon SPECIES_PSYDUCK
pokemon SPECIES_PSYDUCK
pokemon SPECIES_PSYDUCK

// hoenn encounter slots
pokemon SPECIES_ABSOL
pokemon SPECIES_MAKUHITA

// sinnoh encounter slots
pokemon SPECIES_BRONZOR
pokemon SPECIES_CHINGLING

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_SEEL
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  77   // Seafoam Islands B3F

walkrate 10
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 35, 36, 32, 34, 34, 36, 32, 31, 34, 36, 32, 31

// morning encounter slots
pokemon SPECIES_DEWGONG
pokemon SPECIES_GOLBAT
pokemon SPECIES_PSYDUCK
pokemon SPECIES_SEEL
pokemon SPECIES_GOLBAT
pokemon SPECIES_GOLDUCK
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_GOLDUCK
pokemon SPECIES_DEWGONG
pokemon SPECIES_PSYDUCK
pokemon SPECIES_PSYDUCK

// day encounter slots
pokemon SPECIES_DEWGONG
pokemon SPECIES_GOLBAT
pokemon SPECIES_PSYDUCK
pokemon SPECIES_SEEL
pokemon SPECIES_GOLBAT
pokemon SPECIES_GOLDUCK
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_GOLDUCK
pokemon SPECIES_DEWGONG
pokemon SPECIES_PSYDUCK
pokemon SPECIES_PSYDUCK

// night encounter slots
pokemon SPECIES_DEWGONG
pokemon SPECIES_GOLBAT
pokemon SPECIES_PSYDUCK
pokemon SPECIES_SEEL
pokemon SPECIES_GOLBAT
pokemon SPECIES_GOLDUCK
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_GOLDUCK
pokemon SPECIES_DEWGONG
pokemon SPECIES_PSYDUCK
pokemon SPECIES_PSYDUCK

// hoenn encounter slots
pokemon SPECIES_ABSOL
pokemon SPECIES_MAKUHITA

// sinnoh encounter slots
pokemon SPECIES_BRONZOR
pokemon SPECIES_CHINGLING

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_DEWGONG
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  78   // Seafoam Islands B4F

walkrate 10
surfrate 5
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 37, 40, 34, 34, 38, 38, 39, 38, 37, 38, 40, 40

// morning encounter slots
pokemon SPECIES_DEWGONG
pokemon SPECIES_GOLBAT
pokemon SPECIES_PSYDUCK
pokemon SPECIES_SEEL
pokemon SPECIES_JYNX
pokemon SPECIES_GOLDUCK
pokemon SPECIES_GOLBAT
pokemon SPECIES_GOLBAT
pokemon SPECIES_GOLDUCK
pokemon SPECIES_DEWGONG
pokemon SPECIES_JYNX
pokemon SPECIES_JYNX

// day encounter slots
pokemon SPECIES_DEWGONG
pokemon SPECIES_GOLBAT
pokemon SPECIES_PSYDUCK
pokemon SPECIES_SEEL
pokemon SPECIES_JYNX
pokemon SPECIES_GOLDUCK
pokemon SPECIES_GOLBAT
pokemon SPECIES_GOLBAT
pokemon SPECIES_GOLDUCK
pokemon SPECIES_DEWGONG
pokemon SPECIES_JYNX
pokemon SPECIES_JYNX

// night encounter slots
pokemon SPECIES_DEWGONG
pokemon SPECIES_GOLBAT
pokemon SPECIES_PSYDUCK
pokemon SPECIES_SEEL
pokemon SPECIES_JYNX
pokemon SPECIES_GOLDUCK
pokemon SPECIES_GOLBAT
pokemon SPECIES_GOLBAT
pokemon SPECIES_GOLDUCK
pokemon SPECIES_DEWGONG
pokemon SPECIES_JYNX
pokemon SPECIES_JYNX

// hoenn encounter slots
pokemon SPECIES_ABSOL
pokemon SPECIES_MAKUHITA

// sinnoh encounter slots
pokemon SPECIES_BRONZOR
pokemon SPECIES_CHINGLING

// surf encounters
encounter SPECIES_SEEL, 30, 40
encounter SPECIES_HORSEA, 30, 40
encounter SPECIES_SLOWBRO, 35, 45
encounter SPECIES_SLOWBRO, 50, 50
encounter SPECIES_SLOWBRO, 35, 45

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_KRABBY, 10, 10
encounter SPECIES_KRABBY, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_PSYDUCK, 20, 20
encounter SPECIES_KRABBY, 20, 20
encounter SPECIES_HORSEA, 20, 20
encounter SPECIES_KRABBY, 20, 20

// super rod encounters
encounter SPECIES_GYARADOS, 40, 40
encounter SPECIES_HORSEA, 40, 40
encounter SPECIES_KINGLER, 40, 40
encounter SPECIES_SEADRA, 40, 40
encounter SPECIES_SEADRA, 40, 40

// swarm grass
pokemon SPECIES_SEEL
// swarm surf
pokemon SPECIES_SEEL
// swarm good rod
pokemon SPECIES_HORSEA
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata  79   // Mt. Silver (Moltres room)

walkrate 5
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 45, 48, 45, 48, 48, 47, 45, 45, 48, 20, 48, 15

// morning encounter slots
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_STEELIX
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_GOLDUCK
pokemon SPECIES_DONPHAN
pokemon SPECIES_DONPHAN
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_GOLBAT
pokemon SPECIES_LARVITAR
pokemon SPECIES_GOLBAT
pokemon SPECIES_LARVITAR

// day encounter slots
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_STEELIX
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_GOLDUCK
pokemon SPECIES_DONPHAN
pokemon SPECIES_DONPHAN
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_GOLBAT
pokemon SPECIES_LARVITAR
pokemon SPECIES_GOLBAT
pokemon SPECIES_LARVITAR

// night encounter slots
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_STEELIX
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_GOLDUCK
pokemon SPECIES_DONPHAN
pokemon SPECIES_DONPHAN
pokemon SPECIES_MISDREAVUS
pokemon SPECIES_MISDREAVUS
pokemon SPECIES_GOLBAT
pokemon SPECIES_LARVITAR
pokemon SPECIES_GOLBAT
pokemon SPECIES_LARVITAR

// hoenn encounter slots
pokemon SPECIES_ABSOL
pokemon SPECIES_MAKUHITA

// sinnoh encounter slots
pokemon SPECIES_BRONZOR
pokemon SPECIES_CHINGLING

// surf encounters
encounter SPECIES_SEAKING, 30, 40
encounter SPECIES_SEAKING, 35, 45
encounter SPECIES_GOLDEEN, 30, 40
encounter SPECIES_GOLDEEN, 30, 40
encounter SPECIES_GOLDEEN, 30, 40

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_GOLDEEN, 10, 10
encounter SPECIES_GOLDEEN, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20

// super rod encounters
encounter SPECIES_GOLDEEN, 40, 40
encounter SPECIES_GOLDEEN, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_SEAKING, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_QUAGSIRE
// swarm surf
pokemon SPECIES_SEAKING
// swarm good rod
pokemon SPECIES_GOLDEEN
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata  80   // Mt. Silver 3F

walkrate 10
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 45, 48, 46, 48, 48, 50, 45, 45, 48, 20, 48, 15

// morning encounter slots
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_SNEASEL
pokemon SPECIES_PHANPY
pokemon SPECIES_GOLDUCK
pokemon SPECIES_DONPHAN
pokemon SPECIES_DONPHAN
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_GOLBAT
pokemon SPECIES_LARVITAR
pokemon SPECIES_GOLBAT
pokemon SPECIES_LARVITAR

// day encounter slots
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_SNEASEL
pokemon SPECIES_PHANPY
pokemon SPECIES_GOLDUCK
pokemon SPECIES_DONPHAN
pokemon SPECIES_DONPHAN
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_GOLBAT
pokemon SPECIES_LARVITAR
pokemon SPECIES_GOLBAT
pokemon SPECIES_LARVITAR

// night encounter slots
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_SNEASEL
pokemon SPECIES_PHANPY
pokemon SPECIES_GOLDUCK
pokemon SPECIES_DONPHAN
pokemon SPECIES_DONPHAN
pokemon SPECIES_MISDREAVUS
pokemon SPECIES_MISDREAVUS
pokemon SPECIES_GOLBAT
pokemon SPECIES_LARVITAR
pokemon SPECIES_GOLBAT
pokemon SPECIES_LARVITAR

// hoenn encounter slots
pokemon SPECIES_ABSOL
pokemon SPECIES_MAKUHITA

// sinnoh encounter slots
pokemon SPECIES_BRONZOR
pokemon SPECIES_CHINGLING

// surf encounters
encounter SPECIES_SEAKING, 30, 40
encounter SPECIES_SEAKING, 35, 45
encounter SPECIES_GOLDEEN, 30, 40
encounter SPECIES_GOLDEEN, 30, 40
encounter SPECIES_GOLDEEN, 30, 40

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_GOLDEEN, 10, 10
encounter SPECIES_GOLDEEN, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20

// super rod encounters
encounter SPECIES_GOLDEEN, 40, 40
encounter SPECIES_GOLDEEN, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_SEAKING, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_QUAGSIRE
// swarm surf
pokemon SPECIES_SEAKING
// swarm good rod
pokemon SPECIES_GOLDEEN
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata  81   // Mt. Silver 4F

walkrate 10
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 50, 48, 45, 48, 47, 47, 45, 45, 48, 20, 48, 15

// morning encounter slots
pokemon SPECIES_SNEASEL
pokemon SPECIES_GOLDUCK
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_GOLDUCK
pokemon SPECIES_DONPHAN
pokemon SPECIES_DONPHAN
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_GOLBAT
pokemon SPECIES_LARVITAR
pokemon SPECIES_GOLBAT
pokemon SPECIES_LARVITAR

// day encounter slots
pokemon SPECIES_SNEASEL
pokemon SPECIES_GOLDUCK
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_GOLDUCK
pokemon SPECIES_DONPHAN
pokemon SPECIES_DONPHAN
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_GOLBAT
pokemon SPECIES_LARVITAR
pokemon SPECIES_GOLBAT
pokemon SPECIES_LARVITAR

// night encounter slots
pokemon SPECIES_SNEASEL
pokemon SPECIES_GOLDUCK
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_GOLDUCK
pokemon SPECIES_DONPHAN
pokemon SPECIES_DONPHAN
pokemon SPECIES_MISDREAVUS
pokemon SPECIES_MISDREAVUS
pokemon SPECIES_GOLBAT
pokemon SPECIES_LARVITAR
pokemon SPECIES_GOLBAT
pokemon SPECIES_LARVITAR

// hoenn encounter slots
pokemon SPECIES_ABSOL
pokemon SPECIES_MAKUHITA

// sinnoh encounter slots
pokemon SPECIES_BRONZOR
pokemon SPECIES_CHINGLING

// surf encounters
encounter SPECIES_SEAKING, 30, 40
encounter SPECIES_SEAKING, 35, 45
encounter SPECIES_GOLDEEN, 30, 40
encounter SPECIES_GOLDEEN, 30, 40
encounter SPECIES_GOLDEEN, 30, 40

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_GOLDEEN, 10, 10
encounter SPECIES_GOLDEEN, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20

// super rod encounters
encounter SPECIES_GOLDEEN, 40, 40
encounter SPECIES_GOLDEEN, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_SEAKING, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_SNEASEL
// swarm surf
pokemon SPECIES_SEAKING
// swarm good rod
pokemon SPECIES_GOLDEEN
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata  82   // Cliff Edge Gate

walkrate 0
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

// morning encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// day encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// night encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_WOOPER, 20, 30
encounter SPECIES_WOOPER, 20, 30
encounter SPECIES_QUAGSIRE, 30, 40
encounter SPECIES_QUAGSIRE, 30, 40
encounter SPECIES_QUAGSIRE, 30, 40

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_POLIWAG, 20, 20
encounter SPECIES_POLIWAG, 20, 20

// super rod encounters
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_POLIWAG, 40, 40
encounter SPECIES_POLIWAG, 40, 40
encounter SPECIES_POLIWAG, 40, 40

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_WOOPER
// swarm good rod
pokemon SPECIES_MAGIKARP
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata  83   // Cliff Cave

walkrate 10
surfrate 0
rocksmashrate 30
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 22, 19, 20, 22, 19, 20, 18, 20, 20, 22, 23, 23

// morning encounter slots
pokemon SPECIES_GOLBAT
pokemon SPECIES_GEODUDE
pokemon SPECIES_KRABBY
pokemon SPECIES_KINGLER
pokemon SPECIES_MACHOP
pokemon SPECIES_ONIX
pokemon SPECIES_WOOPER
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_GRAVELER
pokemon SPECIES_MACHOKE
pokemon SPECIES_STEELIX
pokemon SPECIES_STEELIX

// day encounter slots
pokemon SPECIES_GOLBAT
pokemon SPECIES_GEODUDE
pokemon SPECIES_KRABBY
pokemon SPECIES_KINGLER
pokemon SPECIES_MACHOP
pokemon SPECIES_ONIX
pokemon SPECIES_WOOPER
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_GRAVELER
pokemon SPECIES_MACHOKE
pokemon SPECIES_STEELIX
pokemon SPECIES_STEELIX

// night encounter slots
pokemon SPECIES_GOLBAT
pokemon SPECIES_GEODUDE
pokemon SPECIES_KRABBY
pokemon SPECIES_KINGLER
pokemon SPECIES_MACHOP
pokemon SPECIES_ONIX
pokemon SPECIES_ZUBAT
pokemon SPECIES_MISDREAVUS
pokemon SPECIES_GOLBAT
pokemon SPECIES_MACHOKE
pokemon SPECIES_STEELIX
pokemon SPECIES_STEELIX

// hoenn encounter slots
pokemon SPECIES_ABSOL
pokemon SPECIES_MAKUHITA

// sinnoh encounter slots
pokemon SPECIES_BRONZOR
pokemon SPECIES_CHINGLING

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_KRABBY, 20, 26
encounter SPECIES_KINGLER, 28, 31

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_GOLBAT
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  84   // Bell Tower 10F

walkrate 5
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 20, 21, 20, 21, 22, 22, 22, 22, 23, 24, 23, 24

// morning encounter slots
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA

// day encounter slots
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA

// night encounter slots
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_GASTLY
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA

// hoenn encounter slots
pokemon SPECIES_ZIGZAGOON
pokemon SPECIES_SPINDA

// sinnoh encounter slots
pokemon SPECIES_CHATOT
pokemon SPECIES_MEDITITE

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_RATTATA
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  85   // Mt. Silver (Outside area with Pokemon Center)

walkrate 15
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 41, 42, 41, 42, 42, 42, 44, 44, 41, 43, 41, 43

// morning encounter slots
pokemon SPECIES_TANGELA
pokemon SPECIES_PONYTA
pokemon SPECIES_TANGELA
pokemon SPECIES_PONYTA
pokemon SPECIES_DONPHAN
pokemon SPECIES_DONPHAN
pokemon SPECIES_RAPIDASH
pokemon SPECIES_RAPIDASH
pokemon SPECIES_DODUO
pokemon SPECIES_DODRIO
pokemon SPECIES_DODUO
pokemon SPECIES_DODRIO

// day encounter slots
pokemon SPECIES_TANGELA
pokemon SPECIES_PONYTA
pokemon SPECIES_TANGELA
pokemon SPECIES_PONYTA
pokemon SPECIES_DONPHAN
pokemon SPECIES_DONPHAN
pokemon SPECIES_RAPIDASH
pokemon SPECIES_RAPIDASH
pokemon SPECIES_DODUO
pokemon SPECIES_DODRIO
pokemon SPECIES_DODUO
pokemon SPECIES_DODRIO

// night encounter slots
pokemon SPECIES_TANGELA
pokemon SPECIES_PONYTA
pokemon SPECIES_TANGELA
pokemon SPECIES_PONYTA
pokemon SPECIES_DONPHAN
pokemon SPECIES_DONPHAN
pokemon SPECIES_RAPIDASH
pokemon SPECIES_RAPIDASH
pokemon SPECIES_SNEASEL
pokemon SPECIES_SNEASEL
pokemon SPECIES_SNEASEL
pokemon SPECIES_SNEASEL

// hoenn encounter slots
pokemon SPECIES_WHISMUR
pokemon SPECIES_LINOONE

// sinnoh encounter slots
pokemon SPECIES_BUIZEL
pokemon SPECIES_BIDOOF

// surf encounters
encounter SPECIES_POLIWHIRL, 30, 40
encounter SPECIES_POLIWHIRL, 35, 45
encounter SPECIES_POLIWAG, 30, 40
encounter SPECIES_POLIWAG, 30, 40
encounter SPECIES_POLIWHIRL, 48, 48

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_POLIWAG, 10, 10
encounter SPECIES_POLIWAG, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_POLIWAG, 20, 20
encounter SPECIES_POLIWAG, 20, 20
encounter SPECIES_POLIWAG, 20, 20
encounter SPECIES_POLIWAG, 20, 20

// super rod encounters
encounter SPECIES_POLIWAG, 40, 40
encounter SPECIES_POLIWAG, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_POLIWAG, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_TANGELA
// swarm surf
pokemon SPECIES_POLIWHIRL
// swarm good rod
pokemon SPECIES_POLIWAG
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata  86   // Mt. Silver 1F

walkrate 10
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 42, 44, 42, 44, 43, 43, 42, 41, 45, 20, 45, 15

// morning encounter slots
pokemon SPECIES_ONIX
pokemon SPECIES_DONPHAN
pokemon SPECIES_ONIX
pokemon SPECIES_DONPHAN
pokemon SPECIES_PHANPY
pokemon SPECIES_GRAVELER
pokemon SPECIES_GRAVELER
pokemon SPECIES_GRAVELER
pokemon SPECIES_GOLBAT
pokemon SPECIES_LARVITAR
pokemon SPECIES_GOLBAT
pokemon SPECIES_LARVITAR

// day encounter slots
pokemon SPECIES_ONIX
pokemon SPECIES_DONPHAN
pokemon SPECIES_ONIX
pokemon SPECIES_DONPHAN
pokemon SPECIES_PHANPY
pokemon SPECIES_GRAVELER
pokemon SPECIES_GRAVELER
pokemon SPECIES_GRAVELER
pokemon SPECIES_GOLBAT
pokemon SPECIES_LARVITAR
pokemon SPECIES_GOLBAT
pokemon SPECIES_LARVITAR

// night encounter slots
pokemon SPECIES_ONIX
pokemon SPECIES_DONPHAN
pokemon SPECIES_ONIX
pokemon SPECIES_DONPHAN
pokemon SPECIES_PHANPY
pokemon SPECIES_GRAVELER
pokemon SPECIES_GRAVELER
pokemon SPECIES_GRAVELER
pokemon SPECIES_GOLBAT
pokemon SPECIES_LARVITAR
pokemon SPECIES_GOLBAT
pokemon SPECIES_LARVITAR

// hoenn encounter slots
pokemon SPECIES_ABSOL
pokemon SPECIES_MAKUHITA

// sinnoh encounter slots
pokemon SPECIES_BRONZOR
pokemon SPECIES_CHINGLING

// surf encounters
encounter SPECIES_SEAKING, 30, 40
encounter SPECIES_SEAKING, 35, 45
encounter SPECIES_GOLDEEN, 30, 40
encounter SPECIES_GOLDEEN, 30, 40
encounter SPECIES_SEAKING, 50, 50

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_GOLDEEN, 10, 10
encounter SPECIES_GOLDEEN, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_SEAKING, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_SEAKING, 20, 20

// super rod encounters
encounter SPECIES_GYARADOS, 40, 40
encounter SPECIES_SEAKING, 40, 40
encounter SPECIES_SEAKING, 40, 40
encounter SPECIES_GYARADOS, 40, 40
encounter SPECIES_SEAKING, 40, 40

// swarm grass
pokemon SPECIES_ONIX
// swarm surf
pokemon SPECIES_SEAKING
// swarm good rod
pokemon SPECIES_GYARADOS
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata  87   // Mt. Silver (Mountainside)

walkrate 15
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 51, 48, 51, 48, 48, 48, 50, 50, 51, 20, 51, 15

// morning encounter slots
pokemon SPECIES_GOLBAT
pokemon SPECIES_ONIX
pokemon SPECIES_GOLBAT
pokemon SPECIES_ONIX
pokemon SPECIES_PHANPY
pokemon SPECIES_GOLBAT
pokemon SPECIES_DONPHAN
pokemon SPECIES_DONPHAN
pokemon SPECIES_GOLDUCK
pokemon SPECIES_LARVITAR
pokemon SPECIES_GOLDUCK
pokemon SPECIES_LARVITAR

// day encounter slots
pokemon SPECIES_GOLBAT
pokemon SPECIES_ONIX
pokemon SPECIES_GOLBAT
pokemon SPECIES_ONIX
pokemon SPECIES_PHANPY
pokemon SPECIES_GOLBAT
pokemon SPECIES_DONPHAN
pokemon SPECIES_DONPHAN
pokemon SPECIES_GOLDUCK
pokemon SPECIES_LARVITAR
pokemon SPECIES_GOLDUCK
pokemon SPECIES_LARVITAR

// night encounter slots
pokemon SPECIES_GOLBAT
pokemon SPECIES_ONIX
pokemon SPECIES_GOLBAT
pokemon SPECIES_ONIX
pokemon SPECIES_PHANPY
pokemon SPECIES_GOLBAT
pokemon SPECIES_DONPHAN
pokemon SPECIES_DONPHAN
pokemon SPECIES_GOLDUCK
pokemon SPECIES_LARVITAR
pokemon SPECIES_GOLDUCK
pokemon SPECIES_LARVITAR

// hoenn encounter slots
pokemon SPECIES_ABSOL
pokemon SPECIES_MAKUHITA

// sinnoh encounter slots
pokemon SPECIES_BRONZOR
pokemon SPECIES_CHINGLING

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_GOLBAT
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  88   // Mt. Silver (Expert Belt room)

walkrate 10
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 45, 48, 45, 46, 48, 47, 45, 45, 48, 20, 48, 15

// morning encounter slots
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_GOLDUCK
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_PHANPY
pokemon SPECIES_DONPHAN
pokemon SPECIES_DONPHAN
pokemon SPECIES_PUPITAR
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_GOLBAT
pokemon SPECIES_LARVITAR
pokemon SPECIES_GOLBAT
pokemon SPECIES_LARVITAR

// day encounter slots
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_GOLDUCK
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_PHANPY
pokemon SPECIES_DONPHAN
pokemon SPECIES_DONPHAN
pokemon SPECIES_PUPITAR
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_GOLBAT
pokemon SPECIES_LARVITAR
pokemon SPECIES_GOLBAT
pokemon SPECIES_LARVITAR

// night encounter slots
pokemon SPECIES_MISDREAVUS
pokemon SPECIES_GOLDUCK
pokemon SPECIES_MISDREAVUS
pokemon SPECIES_PHANPY
pokemon SPECIES_DONPHAN
pokemon SPECIES_DONPHAN
pokemon SPECIES_PUPITAR
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_GOLBAT
pokemon SPECIES_LARVITAR
pokemon SPECIES_GOLBAT
pokemon SPECIES_LARVITAR

// hoenn encounter slots
pokemon SPECIES_ABSOL
pokemon SPECIES_MAKUHITA

// sinnoh encounter slots
pokemon SPECIES_BRONZOR
pokemon SPECIES_CHINGLING

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_QUAGSIRE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  89   // Mt. Silver (Top, snowy area)

walkrate 15
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 45, 48, 45, 48, 47, 47, 30, 45, 48, 20, 48, 15

// morning encounter slots
pokemon SPECIES_SNEASEL
pokemon SPECIES_GOLDUCK
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_GOLDUCK
pokemon SPECIES_DONPHAN
pokemon SPECIES_DONPHAN
pokemon SPECIES_LARVITAR
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_GOLBAT
pokemon SPECIES_LARVITAR
pokemon SPECIES_GOLBAT
pokemon SPECIES_LARVITAR

// day encounter slots
pokemon SPECIES_SNEASEL
pokemon SPECIES_GOLDUCK
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_GOLDUCK
pokemon SPECIES_DONPHAN
pokemon SPECIES_DONPHAN
pokemon SPECIES_LARVITAR
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_GOLBAT
pokemon SPECIES_LARVITAR
pokemon SPECIES_GOLBAT
pokemon SPECIES_LARVITAR

// night encounter slots
pokemon SPECIES_SNEASEL
pokemon SPECIES_GOLDUCK
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_MISDREAVUS
pokemon SPECIES_DONPHAN
pokemon SPECIES_DONPHAN
pokemon SPECIES_LARVITAR
pokemon SPECIES_MISDREAVUS
pokemon SPECIES_GOLBAT
pokemon SPECIES_LARVITAR
pokemon SPECIES_GOLBAT
pokemon SPECIES_LARVITAR

// hoenn encounter slots
pokemon SPECIES_ABSOL
pokemon SPECIES_MAKUHITA

// sinnoh encounter slots
pokemon SPECIES_BRONZOR
pokemon SPECIES_CHINGLING

// surf encounters
encounter SPECIES_SEAKING, 30, 40
encounter SPECIES_SEAKING, 35, 45
encounter SPECIES_GOLDEEN, 30, 40
encounter SPECIES_GOLDEEN, 30, 40
encounter SPECIES_GOLDEEN, 30, 40

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_GOLDEEN, 10, 10
encounter SPECIES_GOLDEEN, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20

// super rod encounters
encounter SPECIES_GOLDEEN, 40, 40
encounter SPECIES_GOLDEEN, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_SEAKING, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_SNEASEL
// swarm surf
pokemon SPECIES_SEAKING
// swarm good rod
pokemon SPECIES_GOLDEEN
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata  90   // ???

walkrate 0
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

// morning encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// day encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// night encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata  91   // Safari Zone (Placeholder, not used)

walkrate 15
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 100
superrodrate 100
walklevels 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20

// morning encounter slots
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA

// day encounter slots
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA

// night encounter slots
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA

// hoenn encounter slots
pokemon SPECIES_ZIGZAGOON
pokemon SPECIES_ZIGZAGOON

// sinnoh encounter slots
pokemon SPECIES_BIDOOF
pokemon SPECIES_BIDOOF

// surf encounters
encounter SPECIES_MAGIKARP, 10, 20
encounter SPECIES_MAGIKARP, 10, 20
encounter SPECIES_MAGIKARP, 10, 20
encounter SPECIES_MAGIKARP, 10, 20
encounter SPECIES_MAGIKARP, 10, 20

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_GOLDEEN, 10, 20
encounter SPECIES_GOLDEEN, 10, 20
encounter SPECIES_GOLDEEN, 10, 20
encounter SPECIES_GOLDEEN, 10, 20
encounter SPECIES_GOLDEEN, 10, 20

// good rod encounters
encounter SPECIES_GOLDEEN, 10, 20
encounter SPECIES_GOLDEEN, 10, 20
encounter SPECIES_GOLDEEN, 10, 20
encounter SPECIES_GOLDEEN, 10, 20
encounter SPECIES_GOLDEEN, 10, 20

// super rod encounters
encounter SPECIES_GOLDEEN, 10, 20
encounter SPECIES_GOLDEEN, 10, 20
encounter SPECIES_GOLDEEN, 10, 20
encounter SPECIES_GOLDEEN, 10, 20
encounter SPECIES_GOLDEEN, 10, 20

// swarm grass
pokemon SPECIES_RATTATA
// swarm surf
pokemon SPECIES_MAGIKARP
// swarm good rod
pokemon SPECIES_GOLDEEN
// swarm super rod
pokemon SPECIES_GOLDEEN

.close


encounterdata  92   // Route 12

walkrate 0
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

// morning encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// day encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// night encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_TENTACOOL, 25, 25
encounter SPECIES_QUAGSIRE, 25, 25
encounter SPECIES_TENTACRUEL, 25, 25
encounter SPECIES_TENTACRUEL, 25, 25
encounter SPECIES_TENTACRUEL, 25, 25

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_TENTACOOL, 10, 10
encounter SPECIES_TENTACOOL, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_TENTACOOL, 20, 20
encounter SPECIES_TENTACOOL, 20, 20
encounter SPECIES_TENTACOOL, 20, 20
encounter SPECIES_TENTACOOL, 20, 20

// super rod encounters
encounter SPECIES_TENTACOOL, 40, 40
encounter SPECIES_TENTACOOL, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_QWILFISH, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_TENTACOOL
// swarm good rod
pokemon SPECIES_TENTACOOL
// swarm super rod
pokemon SPECIES_RELICANTH

.close


encounterdata  93   // Route 19

walkrate 0
surfrate 10
rocksmashrate 30
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

// morning encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// day encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// night encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_TENTACOOL, 35, 35
encounter SPECIES_TENTACOOL, 30, 30
encounter SPECIES_TENTACRUEL, 35, 35
encounter SPECIES_TENTACRUEL, 35, 35
encounter SPECIES_TENTACRUEL, 35, 35

// rock smash encounters
encounter SPECIES_KINGLER, 28, 31
encounter SPECIES_KRABBY, 24, 27

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_KRABBY, 10, 10
encounter SPECIES_KRABBY, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_KRABBY, 20, 20
encounter SPECIES_KRABBY, 20, 20
encounter SPECIES_CORSOLA, 20, 20
encounter SPECIES_KRABBY, 20, 20

// super rod encounters
encounter SPECIES_KRABBY, 40, 40
encounter SPECIES_CORSOLA, 40, 40
encounter SPECIES_KRABBY, 40, 40
encounter SPECIES_KINGLER, 40, 40
encounter SPECIES_KRABBY, 40, 40

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_CLAMPERL
// swarm good rod
pokemon SPECIES_STARYU
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata  94   // Route 20

walkrate 0
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

// morning encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// day encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// night encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_TENTACOOL, 35, 35
encounter SPECIES_TENTACOOL, 30, 30
encounter SPECIES_TENTACRUEL, 35, 35
encounter SPECIES_TENTACRUEL, 35, 35
encounter SPECIES_TENTACRUEL, 35, 35

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_TENTACOOL, 10, 10
encounter SPECIES_TENTACOOL, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_TENTACOOL, 20, 20
encounter SPECIES_CHINCHOU, 20, 20
encounter SPECIES_SHELLDER, 20, 20
encounter SPECIES_CHINCHOU, 20, 20

// super rod encounters
encounter SPECIES_CHINCHOU, 40, 40
encounter SPECIES_SHELLDER, 40, 40
encounter SPECIES_TENTACRUEL, 40, 40
encounter SPECIES_LANTURN, 40, 40
encounter SPECIES_TENTACRUEL, 40, 40

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_TENTACOOL
// swarm good rod
pokemon SPECIES_SHELLDER
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata  95   // Pallet Town

walkrate 0
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

// morning encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// day encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// night encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_TENTACOOL, 35, 35
encounter SPECIES_TENTACOOL, 30, 30
encounter SPECIES_TENTACRUEL, 35, 35
encounter SPECIES_TENTACRUEL, 35, 35
encounter SPECIES_TENTACRUEL, 35, 35

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_TENTACOOL, 10, 10
encounter SPECIES_TENTACOOL, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_TENTACOOL, 20, 20
encounter SPECIES_CHINCHOU, 20, 20
encounter SPECIES_SHELLDER, 20, 20
encounter SPECIES_CHINCHOU, 20, 20

// super rod encounters
encounter SPECIES_CHINCHOU, 40, 40
encounter SPECIES_SHELLDER, 40, 40
encounter SPECIES_TENTACRUEL, 40, 40
encounter SPECIES_LANTURN, 40, 40
encounter SPECIES_TENTACRUEL, 40, 40

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_TENTACOOL
// swarm good rod
pokemon SPECIES_SHELLDER
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata  96   // Viridian City

walkrate 0
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

// morning encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// day encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// night encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_POLIWAG, 10, 10
encounter SPECIES_POLIWAG, 5, 5
encounter SPECIES_POLIWHIRL, 10, 10
encounter SPECIES_POLIWHIRL, 10, 10
encounter SPECIES_POLIWHIRL, 10, 10

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_POLIWAG, 10, 10
encounter SPECIES_POLIWAG, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_POLIWAG, 20, 20
encounter SPECIES_POLIWAG, 20, 20
encounter SPECIES_POLIWAG, 20, 20
encounter SPECIES_POLIWAG, 20, 20

// super rod encounters
encounter SPECIES_POLIWAG, 40, 40
encounter SPECIES_POLIWAG, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_POLIWAG, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_POLIWAG
// swarm good rod
pokemon SPECIES_POLIWAG
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata  97   // Cerulean City

walkrate 0
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

// morning encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// day encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// night encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_GOLDEEN, 10, 10
encounter SPECIES_GOLDEEN, 5, 5
encounter SPECIES_SEAKING, 10, 10
encounter SPECIES_SEAKING, 10, 10
encounter SPECIES_SEAKING, 10, 10

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_GOLDEEN, 10, 10
encounter SPECIES_GOLDEEN, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20

// super rod encounters
encounter SPECIES_GOLDEEN, 40, 40
encounter SPECIES_GOLDEEN, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_SEAKING, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_GOLDEEN
// swarm good rod
pokemon SPECIES_GOLDEEN
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata  98   // Vermilion City

walkrate 0
surfrate 10
rocksmashrate 40
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

// morning encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// day encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// night encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_TENTACOOL, 35, 35
encounter SPECIES_TENTACOOL, 30, 30
encounter SPECIES_TENTACRUEL, 35, 35
encounter SPECIES_TENTACRUEL, 35, 35
encounter SPECIES_TENTACRUEL, 35, 35

// rock smash encounters
encounter SPECIES_DIGLETT, 24, 37
encounter SPECIES_SHUCKLE, 32, 35

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_TENTACOOL, 10, 10
encounter SPECIES_TENTACOOL, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_TENTACOOL, 20, 20
encounter SPECIES_CHINCHOU, 20, 20
encounter SPECIES_SHELLDER, 20, 20
encounter SPECIES_CHINCHOU, 20, 20

// super rod encounters
encounter SPECIES_CHINCHOU, 40, 40
encounter SPECIES_SHELLDER, 40, 40
encounter SPECIES_TENTACRUEL, 40, 40
encounter SPECIES_LANTURN, 40, 40
encounter SPECIES_TENTACRUEL, 40, 40

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_WINGULL
// swarm good rod
pokemon SPECIES_SHELLDER
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata  99   // Celadon City

walkrate 0
surfrate 10
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

// morning encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// day encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// night encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_GRIMER, 20, 20
encounter SPECIES_GRIMER, 15, 15
encounter SPECIES_MUK, 15, 15
encounter SPECIES_MUK, 15, 15
encounter SPECIES_MUK, 15, 15

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_GRIMER
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata 100   // Fuchsia City

walkrate 0
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

// morning encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// day encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// night encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 15, 15
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_GYARADOS, 20, 20
encounter SPECIES_MAGIKARP, 20, 20

// super rod encounters
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_GYARADOS, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_MAGIKARP
// swarm good rod
pokemon SPECIES_GYARADOS
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata 101   // Cinnabar Island

walkrate 0
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

// morning encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// day encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// night encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_TENTACOOL, 35, 35
encounter SPECIES_TENTACOOL, 30, 30
encounter SPECIES_TENTACRUEL, 35, 35
encounter SPECIES_TENTACRUEL, 35, 35
encounter SPECIES_TENTACRUEL, 35, 35

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_TENTACOOL, 10, 10
encounter SPECIES_TENTACOOL, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_TENTACOOL, 20, 20
encounter SPECIES_CHINCHOU, 20, 20
encounter SPECIES_SHELLDER, 20, 20
encounter SPECIES_CHINCHOU, 20, 20

// super rod encounters
encounter SPECIES_CHINCHOU, 40, 40
encounter SPECIES_SHELLDER, 40, 40
encounter SPECIES_TENTACRUEL, 40, 40
encounter SPECIES_LANTURN, 40, 40
encounter SPECIES_TENTACRUEL, 40, 40

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_TENTACOOL
// swarm good rod
pokemon SPECIES_SHELLDER
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata 102   // Route 48

walkrate 15
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 25, 20, 20, 21, 22, 24, 21, 20, 20, 22, 22, 24

// morning encounter slots
pokemon SPECIES_FARFETCHD
pokemon SPECIES_TAUROS
pokemon SPECIES_HOPPIP
pokemon SPECIES_FEAROW
pokemon SPECIES_GLOOM
pokemon SPECIES_GLOOM
pokemon SPECIES_GROWLITHE
pokemon SPECIES_GIRAFARIG
pokemon SPECIES_DIGLETT
pokemon SPECIES_GROWLITHE
pokemon SPECIES_HOPPIP
pokemon SPECIES_TAUROS

// day encounter slots
pokemon SPECIES_FARFETCHD
pokemon SPECIES_TAUROS
pokemon SPECIES_HOPPIP
pokemon SPECIES_FEAROW
pokemon SPECIES_GLOOM
pokemon SPECIES_GLOOM
pokemon SPECIES_GROWLITHE
pokemon SPECIES_GIRAFARIG
pokemon SPECIES_DIGLETT
pokemon SPECIES_GROWLITHE
pokemon SPECIES_HOPPIP
pokemon SPECIES_TAUROS

// night encounter slots
pokemon SPECIES_GROWLITHE
pokemon SPECIES_TAUROS
pokemon SPECIES_HOPPIP
pokemon SPECIES_FEAROW
pokemon SPECIES_GLOOM
pokemon SPECIES_GLOOM
pokemon SPECIES_GROWLITHE
pokemon SPECIES_GIRAFARIG
pokemon SPECIES_DIGLETT
pokemon SPECIES_GROWLITHE
pokemon SPECIES_HOPPIP
pokemon SPECIES_TAUROS

// hoenn encounter slots
pokemon SPECIES_PLUSLE
pokemon SPECIES_MINUN

// sinnoh encounter slots
pokemon SPECIES_SHINX
pokemon SPECIES_SHINX

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_TAUROS
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata 103   // Route 26

walkrate 15
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 28, 28, 28, 28, 32, 32, 30, 30, 30, 30, 30, 30

// morning encounter slots
pokemon SPECIES_DODUO
pokemon SPECIES_SANDSLASH
pokemon SPECIES_DODUO
pokemon SPECIES_SANDSLASH
pokemon SPECIES_PONYTA
pokemon SPECIES_PONYTA
pokemon SPECIES_DODUO
pokemon SPECIES_DODUO
pokemon SPECIES_RATICATE
pokemon SPECIES_DODRIO
pokemon SPECIES_RATICATE
pokemon SPECIES_DODRIO

// day encounter slots
pokemon SPECIES_DODUO
pokemon SPECIES_SANDSLASH
pokemon SPECIES_DODUO
pokemon SPECIES_SANDSLASH
pokemon SPECIES_PONYTA
pokemon SPECIES_PONYTA
pokemon SPECIES_DODUO
pokemon SPECIES_DODUO
pokemon SPECIES_RATICATE
pokemon SPECIES_DODRIO
pokemon SPECIES_RATICATE
pokemon SPECIES_DODRIO

// night encounter slots
pokemon SPECIES_RATICATE
pokemon SPECIES_SANDSLASH
pokemon SPECIES_RATICATE
pokemon SPECIES_SANDSLASH
pokemon SPECIES_PONYTA
pokemon SPECIES_PONYTA
pokemon SPECIES_RATICATE
pokemon SPECIES_RATICATE
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_QUAGSIRE

// hoenn encounter slots
pokemon SPECIES_WHISMUR
pokemon SPECIES_LINOONE

// sinnoh encounter slots
pokemon SPECIES_BUIZEL
pokemon SPECIES_BIDOOF

// surf encounters
encounter SPECIES_TENTACOOL, 30, 30
encounter SPECIES_TENTACOOL, 25, 25
encounter SPECIES_TENTACRUEL, 30, 30
encounter SPECIES_TENTACRUEL, 30, 30
encounter SPECIES_TENTACRUEL, 30, 30

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_TENTACOOL, 10, 10
encounter SPECIES_TENTACOOL, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_TENTACOOL, 20, 20
encounter SPECIES_CHINCHOU, 20, 20
encounter SPECIES_SHELLDER, 20, 20
encounter SPECIES_CHINCHOU, 20, 20

// super rod encounters
encounter SPECIES_CHINCHOU, 40, 40
encounter SPECIES_SHELLDER, 40, 40
encounter SPECIES_TENTACRUEL, 40, 40
encounter SPECIES_LANTURN, 40, 40
encounter SPECIES_TENTACRUEL, 40, 40

// swarm grass
pokemon SPECIES_DODUO
// swarm surf
pokemon SPECIES_TENTACOOL
// swarm good rod
pokemon SPECIES_SHELLDER
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata 104   // Route 27

walkrate 15
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 28, 28, 28, 28, 30, 30, 30, 30, 32, 30, 32, 30

// morning encounter slots
pokemon SPECIES_DODUO
pokemon SPECIES_RATICATE
pokemon SPECIES_DODUO
pokemon SPECIES_RATICATE
pokemon SPECIES_DODUO
pokemon SPECIES_DODUO
pokemon SPECIES_RATICATE
pokemon SPECIES_RATICATE
pokemon SPECIES_PONYTA
pokemon SPECIES_SANDSLASH
pokemon SPECIES_PONYTA
pokemon SPECIES_SANDSLASH

// day encounter slots
pokemon SPECIES_DODUO
pokemon SPECIES_RATICATE
pokemon SPECIES_DODUO
pokemon SPECIES_RATICATE
pokemon SPECIES_DODUO
pokemon SPECIES_DODUO
pokemon SPECIES_RATICATE
pokemon SPECIES_RATICATE
pokemon SPECIES_PONYTA
pokemon SPECIES_SANDSLASH
pokemon SPECIES_PONYTA
pokemon SPECIES_SANDSLASH

// night encounter slots
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_RATICATE
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_RATICATE
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_RATICATE
pokemon SPECIES_RATICATE
pokemon SPECIES_PONYTA
pokemon SPECIES_SANDSLASH
pokemon SPECIES_PONYTA
pokemon SPECIES_SANDSLASH

// hoenn encounter slots
pokemon SPECIES_WHISMUR
pokemon SPECIES_LINOONE

// sinnoh encounter slots
pokemon SPECIES_BUIZEL
pokemon SPECIES_BIDOOF

// surf encounters
encounter SPECIES_TENTACOOL, 20, 20
encounter SPECIES_TENTACOOL, 15, 15
encounter SPECIES_TENTACRUEL, 20, 20
encounter SPECIES_TENTACRUEL, 20, 20
encounter SPECIES_TENTACRUEL, 20, 20

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_TENTACOOL, 10, 10
encounter SPECIES_TENTACOOL, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_TENTACOOL, 20, 20
encounter SPECIES_CHINCHOU, 20, 20
encounter SPECIES_SHELLDER, 20, 20
encounter SPECIES_CHINCHOU, 20, 20

// super rod encounters
encounter SPECIES_CHINCHOU, 40, 40
encounter SPECIES_SHELLDER, 40, 40
encounter SPECIES_TENTACRUEL, 40, 40
encounter SPECIES_LANTURN, 40, 40
encounter SPECIES_TENTACRUEL, 40, 40

// swarm grass
pokemon SPECIES_DODUO
// swarm surf
pokemon SPECIES_LUVDISC
// swarm good rod
pokemon SPECIES_SHELLDER
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata 105   // Route 28

walkrate 15
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 39, 40, 39, 40, 40, 40, 42, 42, 41, 43, 41, 43

// morning encounter slots
pokemon SPECIES_TANGELA
pokemon SPECIES_PONYTA
pokemon SPECIES_TANGELA
pokemon SPECIES_PONYTA
pokemon SPECIES_DONPHAN
pokemon SPECIES_DONPHAN
pokemon SPECIES_RAPIDASH
pokemon SPECIES_RAPIDASH
pokemon SPECIES_DODUO
pokemon SPECIES_DODRIO
pokemon SPECIES_DODUO
pokemon SPECIES_DODRIO

// day encounter slots
pokemon SPECIES_TANGELA
pokemon SPECIES_PONYTA
pokemon SPECIES_TANGELA
pokemon SPECIES_PONYTA
pokemon SPECIES_DONPHAN
pokemon SPECIES_DONPHAN
pokemon SPECIES_RAPIDASH
pokemon SPECIES_RAPIDASH
pokemon SPECIES_DODUO
pokemon SPECIES_DODRIO
pokemon SPECIES_DODUO
pokemon SPECIES_DODRIO

// night encounter slots
pokemon SPECIES_TANGELA
pokemon SPECIES_PONYTA
pokemon SPECIES_TANGELA
pokemon SPECIES_PONYTA
pokemon SPECIES_DONPHAN
pokemon SPECIES_DONPHAN
pokemon SPECIES_SNEASEL
pokemon SPECIES_SNEASEL
pokemon SPECIES_RAPIDASH
pokemon SPECIES_RAPIDASH
pokemon SPECIES_RAPIDASH
pokemon SPECIES_RAPIDASH

// hoenn encounter slots
pokemon SPECIES_WHISMUR
pokemon SPECIES_LINOONE

// sinnoh encounter slots
pokemon SPECIES_BUIZEL
pokemon SPECIES_BIDOOF

// surf encounters
encounter SPECIES_POLIWAG, 40, 40
encounter SPECIES_POLIWAG, 35, 35
encounter SPECIES_POLIWHIRL, 40, 40
encounter SPECIES_POLIWHIRL, 40, 40
encounter SPECIES_POLIWHIRL, 40, 40

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_POLIWAG, 10, 10
encounter SPECIES_POLIWAG, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_POLIWAG, 20, 20
encounter SPECIES_POLIWAG, 20, 20
encounter SPECIES_POLIWAG, 20, 20
encounter SPECIES_POLIWAG, 20, 20

// super rod encounters
encounter SPECIES_POLIWAG, 40, 40
encounter SPECIES_POLIWAG, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_POLIWAG, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_TANGELA
// swarm surf
pokemon SPECIES_POLIWAG
// swarm good rod
pokemon SPECIES_POLIWAG
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata 106   // Mt. Moon 1F

walkrate 15
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 6, 8, 6, 8, 8, 8, 12, 12, 10, 8, 10, 8

// morning encounter slots
pokemon SPECIES_ZUBAT
pokemon SPECIES_GEODUDE
pokemon SPECIES_ZUBAT
pokemon SPECIES_GEODUDE
pokemon SPECIES_SANDSHREW
pokemon SPECIES_SANDSHREW
pokemon SPECIES_PARAS
pokemon SPECIES_PARAS
pokemon SPECIES_SANDSLASH
pokemon SPECIES_CLEFAIRY
pokemon SPECIES_SANDSLASH
pokemon SPECIES_CLEFAIRY

// day encounter slots
pokemon SPECIES_ZUBAT
pokemon SPECIES_GEODUDE
pokemon SPECIES_ZUBAT
pokemon SPECIES_GEODUDE
pokemon SPECIES_SANDSHREW
pokemon SPECIES_SANDSHREW
pokemon SPECIES_PARAS
pokemon SPECIES_PARAS
pokemon SPECIES_SANDSLASH
pokemon SPECIES_CLEFAIRY
pokemon SPECIES_SANDSLASH
pokemon SPECIES_CLEFAIRY

// night encounter slots
pokemon SPECIES_ZUBAT
pokemon SPECIES_GEODUDE
pokemon SPECIES_ZUBAT
pokemon SPECIES_GEODUDE
pokemon SPECIES_SANDSHREW
pokemon SPECIES_SANDSHREW
pokemon SPECIES_PARAS
pokemon SPECIES_PARAS
pokemon SPECIES_SANDSLASH
pokemon SPECIES_CLEFAIRY
pokemon SPECIES_SANDSLASH
pokemon SPECIES_CLEFAIRY

// hoenn encounter slots
pokemon SPECIES_ABSOL
pokemon SPECIES_MAKUHITA

// sinnoh encounter slots
pokemon SPECIES_BRONZOR
pokemon SPECIES_CHINGLING

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_ZUBAT
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata 107   // Mt. Moon 2F

walkrate 15
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 6, 8, 6, 8, 8, 8, 12, 12, 10, 8, 10, 8

// morning encounter slots
pokemon SPECIES_ZUBAT
pokemon SPECIES_GEODUDE
pokemon SPECIES_ZUBAT
pokemon SPECIES_GEODUDE
pokemon SPECIES_SANDSHREW
pokemon SPECIES_SANDSHREW
pokemon SPECIES_PARAS
pokemon SPECIES_PARAS
pokemon SPECIES_SANDSLASH
pokemon SPECIES_CLEFAIRY
pokemon SPECIES_SANDSLASH
pokemon SPECIES_CLEFAIRY

// day encounter slots
pokemon SPECIES_ZUBAT
pokemon SPECIES_GEODUDE
pokemon SPECIES_ZUBAT
pokemon SPECIES_GEODUDE
pokemon SPECIES_SANDSHREW
pokemon SPECIES_SANDSHREW
pokemon SPECIES_PARAS
pokemon SPECIES_PARAS
pokemon SPECIES_SANDSLASH
pokemon SPECIES_CLEFAIRY
pokemon SPECIES_SANDSLASH
pokemon SPECIES_CLEFAIRY

// night encounter slots
pokemon SPECIES_ZUBAT
pokemon SPECIES_GEODUDE
pokemon SPECIES_ZUBAT
pokemon SPECIES_GEODUDE
pokemon SPECIES_SANDSHREW
pokemon SPECIES_SANDSHREW
pokemon SPECIES_PARAS
pokemon SPECIES_PARAS
pokemon SPECIES_SANDSLASH
pokemon SPECIES_CLEFAIRY
pokemon SPECIES_SANDSLASH
pokemon SPECIES_CLEFAIRY

// hoenn encounter slots
pokemon SPECIES_ABSOL
pokemon SPECIES_MAKUHITA

// sinnoh encounter slots
pokemon SPECIES_BRONZOR
pokemon SPECIES_CHINGLING

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_ZUBAT
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata 108   // Rock Tunnel 1F

walkrate 15
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 10, 10, 10, 10, 12, 12, 8, 8, 14, 13, 14, 13

// morning encounter slots
pokemon SPECIES_CUBONE
pokemon SPECIES_GEODUDE
pokemon SPECIES_CUBONE
pokemon SPECIES_GEODUDE
pokemon SPECIES_MACHOP
pokemon SPECIES_MACHOP
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_MACHOKE
pokemon SPECIES_CUBONE
pokemon SPECIES_MACHOKE
pokemon SPECIES_CUBONE

// day encounter slots
pokemon SPECIES_CUBONE
pokemon SPECIES_GEODUDE
pokemon SPECIES_CUBONE
pokemon SPECIES_GEODUDE
pokemon SPECIES_MACHOP
pokemon SPECIES_MACHOP
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_MACHOKE
pokemon SPECIES_CUBONE
pokemon SPECIES_MACHOKE
pokemon SPECIES_CUBONE

// night encounter slots
pokemon SPECIES_CUBONE
pokemon SPECIES_GEODUDE
pokemon SPECIES_CUBONE
pokemon SPECIES_GEODUDE
pokemon SPECIES_MACHOP
pokemon SPECIES_MACHOP
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_MACHOKE
pokemon SPECIES_CUBONE
pokemon SPECIES_MACHOKE
pokemon SPECIES_CUBONE

// hoenn encounter slots
pokemon SPECIES_ABSOL
pokemon SPECIES_MAKUHITA

// sinnoh encounter slots
pokemon SPECIES_BRONZOR
pokemon SPECIES_CHINGLING

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_CUBONE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata 109   // Rock Tunnel B1F

walkrate 15
surfrate 0
rocksmashrate 20
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 12, 12, 12, 12, 16, 16, 10, 10, 14, 14, 14, 14

// morning encounter slots
pokemon SPECIES_CUBONE
pokemon SPECIES_GEODUDE
pokemon SPECIES_CUBONE
pokemon SPECIES_GEODUDE
pokemon SPECIES_ONIX
pokemon SPECIES_ONIX
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_MAROWAK
pokemon SPECIES_KANGASKHAN
pokemon SPECIES_MAROWAK
pokemon SPECIES_KANGASKHAN

// day encounter slots
pokemon SPECIES_CUBONE
pokemon SPECIES_GEODUDE
pokemon SPECIES_CUBONE
pokemon SPECIES_GEODUDE
pokemon SPECIES_ONIX
pokemon SPECIES_ONIX
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_MAROWAK
pokemon SPECIES_KANGASKHAN
pokemon SPECIES_MAROWAK
pokemon SPECIES_KANGASKHAN

// night encounter slots
pokemon SPECIES_CUBONE
pokemon SPECIES_GEODUDE
pokemon SPECIES_CUBONE
pokemon SPECIES_GEODUDE
pokemon SPECIES_ONIX
pokemon SPECIES_ONIX
pokemon SPECIES_ZUBAT
pokemon SPECIES_ZUBAT
pokemon SPECIES_MAROWAK
pokemon SPECIES_KANGASKHAN
pokemon SPECIES_MAROWAK
pokemon SPECIES_KANGASKHAN

// hoenn encounter slots
pokemon SPECIES_ABSOL
pokemon SPECIES_MAKUHITA

// sinnoh encounter slots
pokemon SPECIES_BRONZOR
pokemon SPECIES_CHINGLING

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_GEODUDE, 12, 16
encounter SPECIES_GEODUDE, 17, 21

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_CUBONE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata 110   // Victory Road 1F

walkrate 10
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 32, 32, 32, 32, 33, 33, 34, 34, 36, 35, 36, 35

// morning encounter slots
pokemon SPECIES_GRAVELER
pokemon SPECIES_GOLBAT
pokemon SPECIES_GRAVELER
pokemon SPECIES_GOLBAT
pokemon SPECIES_DONPHAN
pokemon SPECIES_DONPHAN
pokemon SPECIES_ONIX
pokemon SPECIES_ONIX
pokemon SPECIES_ONIX
pokemon SPECIES_RHYHORN
pokemon SPECIES_ONIX
pokemon SPECIES_RHYHORN

// day encounter slots
pokemon SPECIES_GRAVELER
pokemon SPECIES_GOLBAT
pokemon SPECIES_GRAVELER
pokemon SPECIES_GOLBAT
pokemon SPECIES_DONPHAN
pokemon SPECIES_DONPHAN
pokemon SPECIES_ONIX
pokemon SPECIES_ONIX
pokemon SPECIES_ONIX
pokemon SPECIES_RHYHORN
pokemon SPECIES_ONIX
pokemon SPECIES_RHYHORN

// night encounter slots
pokemon SPECIES_GRAVELER
pokemon SPECIES_GOLBAT
pokemon SPECIES_GRAVELER
pokemon SPECIES_GOLBAT
pokemon SPECIES_DONPHAN
pokemon SPECIES_DONPHAN
pokemon SPECIES_ONIX
pokemon SPECIES_ONIX
pokemon SPECIES_ONIX
pokemon SPECIES_RHYHORN
pokemon SPECIES_ONIX
pokemon SPECIES_RHYHORN

// hoenn encounter slots
pokemon SPECIES_ABSOL
pokemon SPECIES_MAKUHITA

// sinnoh encounter slots
pokemon SPECIES_BRONZOR
pokemon SPECIES_CHINGLING

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_GRAVELER
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata 111   // Route 1

walkrate 15
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 2, 2, 2, 2, 3, 3, 3, 3, 6, 4, 6, 4

// morning encounter slots
pokemon SPECIES_PIDGEY
pokemon SPECIES_RATTATA
pokemon SPECIES_PIDGEY
pokemon SPECIES_RATTATA
pokemon SPECIES_SENTRET
pokemon SPECIES_SENTRET
pokemon SPECIES_PIDGEY
pokemon SPECIES_PIDGEY
pokemon SPECIES_FURRET
pokemon SPECIES_PIDGEY
pokemon SPECIES_FURRET
pokemon SPECIES_PIDGEY

// day encounter slots
pokemon SPECIES_PIDGEY
pokemon SPECIES_RATTATA
pokemon SPECIES_PIDGEY
pokemon SPECIES_RATTATA
pokemon SPECIES_SENTRET
pokemon SPECIES_SENTRET
pokemon SPECIES_PIDGEY
pokemon SPECIES_PIDGEY
pokemon SPECIES_FURRET
pokemon SPECIES_PIDGEY
pokemon SPECIES_FURRET
pokemon SPECIES_PIDGEY

// night encounter slots
pokemon SPECIES_HOOTHOOT
pokemon SPECIES_RATTATA
pokemon SPECIES_HOOTHOOT
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_HOOTHOOT
pokemon SPECIES_HOOTHOOT
pokemon SPECIES_RATTATA
pokemon SPECIES_HOOTHOOT
pokemon SPECIES_RATTATA
pokemon SPECIES_HOOTHOOT

// hoenn encounter slots
pokemon SPECIES_PLUSLE
pokemon SPECIES_MINUN

// sinnoh encounter slots
pokemon SPECIES_SHINX
pokemon SPECIES_SHINX

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_POOCHYENA
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata 112   // Route 2 (South, below Viridian Forest)

walkrate 15
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 3, 3, 3, 3, 5, 5, 7, 8, 7, 10, 7, 4

// morning encounter slots
pokemon SPECIES_CATERPIE
pokemon SPECIES_PIDGEY
pokemon SPECIES_CATERPIE
pokemon SPECIES_PIDGEY
pokemon SPECIES_METAPOD
pokemon SPECIES_METAPOD
pokemon SPECIES_BUTTERFREE
pokemon SPECIES_BUTTERFREE
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_SPINARAK
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_CATERPIE

// day encounter slots
pokemon SPECIES_CATERPIE
pokemon SPECIES_PIDGEY
pokemon SPECIES_CATERPIE
pokemon SPECIES_PIDGEY
pokemon SPECIES_METAPOD
pokemon SPECIES_METAPOD
pokemon SPECIES_PIDGEY
pokemon SPECIES_PIDGEY
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_CATERPIE

// night encounter slots
pokemon SPECIES_HOOTHOOT
pokemon SPECIES_SPINARAK
pokemon SPECIES_HOOTHOOT
pokemon SPECIES_SPINARAK
pokemon SPECIES_HOOTHOOT
pokemon SPECIES_HOOTHOOT
pokemon SPECIES_NOCTOWL
pokemon SPECIES_NOCTOWL
pokemon SPECIES_ARIADOS
pokemon SPECIES_NOCTOWL
pokemon SPECIES_ARIADOS
pokemon SPECIES_SPINARAK

// hoenn encounter slots
pokemon SPECIES_PLUSLE
pokemon SPECIES_MINUN

// sinnoh encounter slots
pokemon SPECIES_SHINX
pokemon SPECIES_SHINX

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_CATERPIE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata 113   // Route 3

walkrate 15
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 5, 5, 5, 5, 8, 8, 6, 6, 10, 8, 10, 8

// morning encounter slots
pokemon SPECIES_SPEAROW
pokemon SPECIES_RATTATA
pokemon SPECIES_SPEAROW
pokemon SPECIES_RATTATA
pokemon SPECIES_SPEAROW
pokemon SPECIES_SPEAROW
pokemon SPECIES_JIGGLYPUFF
pokemon SPECIES_JIGGLYPUFF
pokemon SPECIES_RATTATA
pokemon SPECIES_SPEAROW
pokemon SPECIES_RATTATA
pokemon SPECIES_SPEAROW

// day encounter slots
pokemon SPECIES_SPEAROW
pokemon SPECIES_RATTATA
pokemon SPECIES_SPEAROW
pokemon SPECIES_RATTATA
pokemon SPECIES_SPEAROW
pokemon SPECIES_SPEAROW
pokemon SPECIES_JIGGLYPUFF
pokemon SPECIES_JIGGLYPUFF
pokemon SPECIES_RATTATA
pokemon SPECIES_SPEAROW
pokemon SPECIES_RATTATA
pokemon SPECIES_SPEAROW

// night encounter slots
pokemon SPECIES_RATTATA
pokemon SPECIES_ZUBAT
pokemon SPECIES_RATTATA
pokemon SPECIES_ZUBAT
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_JIGGLYPUFF
pokemon SPECIES_JIGGLYPUFF
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA

// hoenn encounter slots
pokemon SPECIES_PLUSLE
pokemon SPECIES_MINUN

// sinnoh encounter slots
pokemon SPECIES_SHINX
pokemon SPECIES_SHINX

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_BALTOY
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata 114   // Route 4

walkrate 15
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 5, 5, 5, 5, 8, 8, 6, 6, 10, 8, 10, 8

// morning encounter slots
pokemon SPECIES_SPEAROW
pokemon SPECIES_RATTATA
pokemon SPECIES_SPEAROW
pokemon SPECIES_RATTATA
pokemon SPECIES_SPEAROW
pokemon SPECIES_SPEAROW
pokemon SPECIES_JIGGLYPUFF
pokemon SPECIES_JIGGLYPUFF
pokemon SPECIES_RATTATA
pokemon SPECIES_SPEAROW
pokemon SPECIES_RATTATA
pokemon SPECIES_SPEAROW

// day encounter slots
pokemon SPECIES_SPEAROW
pokemon SPECIES_RATTATA
pokemon SPECIES_SPEAROW
pokemon SPECIES_RATTATA
pokemon SPECIES_SPEAROW
pokemon SPECIES_SPEAROW
pokemon SPECIES_JIGGLYPUFF
pokemon SPECIES_JIGGLYPUFF
pokemon SPECIES_RATTATA
pokemon SPECIES_SPEAROW
pokemon SPECIES_RATTATA
pokemon SPECIES_SPEAROW

// night encounter slots
pokemon SPECIES_SPEAROW
pokemon SPECIES_ZUBAT
pokemon SPECIES_SPEAROW
pokemon SPECIES_ZUBAT
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_JIGGLYPUFF
pokemon SPECIES_JIGGLYPUFF
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA

// hoenn encounter slots
pokemon SPECIES_WHISMUR
pokemon SPECIES_LINOONE

// sinnoh encounter slots
pokemon SPECIES_BUIZEL
pokemon SPECIES_BIDOOF

// surf encounters
encounter SPECIES_GOLDEEN, 10, 10
encounter SPECIES_GOLDEEN, 5, 5
encounter SPECIES_SEAKING, 10, 10
encounter SPECIES_SEAKING, 10, 10
encounter SPECIES_SEAKING, 10, 10

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_GOLDEEN, 10, 10
encounter SPECIES_GOLDEEN, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20

// super rod encounters
encounter SPECIES_GOLDEEN, 40, 40
encounter SPECIES_GOLDEEN, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_SEAKING, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_SPEAROW
// swarm surf
pokemon SPECIES_GOLDEEN
// swarm good rod
pokemon SPECIES_GOLDEEN
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata 115   // Route 5

walkrate 15
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 13, 13, 13, 13, 14, 14, 15, 15, 12, 14, 12, 14

// morning encounter slots
pokemon SPECIES_PIDGEY
pokemon SPECIES_BELLSPROUT
pokemon SPECIES_PIDGEY
pokemon SPECIES_BELLSPROUT
pokemon SPECIES_PIDGEY
pokemon SPECIES_PIDGEY
pokemon SPECIES_PIDGEY
pokemon SPECIES_PIDGEY
pokemon SPECIES_ABRA
pokemon SPECIES_ABRA
pokemon SPECIES_ABRA
pokemon SPECIES_ABRA

// day encounter slots
pokemon SPECIES_PIDGEY
pokemon SPECIES_BELLSPROUT
pokemon SPECIES_PIDGEY
pokemon SPECIES_BELLSPROUT
pokemon SPECIES_PIDGEY
pokemon SPECIES_PIDGEY
pokemon SPECIES_PIDGEY
pokemon SPECIES_PIDGEY
pokemon SPECIES_ABRA
pokemon SPECIES_ABRA
pokemon SPECIES_ABRA
pokemon SPECIES_ABRA

// night encounter slots
pokemon SPECIES_ODDISH
pokemon SPECIES_ODDISH
pokemon SPECIES_ODDISH
pokemon SPECIES_ODDISH
pokemon SPECIES_BELLSPROUT
pokemon SPECIES_BELLSPROUT
pokemon SPECIES_GLOOM
pokemon SPECIES_GLOOM
pokemon SPECIES_ABRA
pokemon SPECIES_ABRA
pokemon SPECIES_ABRA
pokemon SPECIES_ABRA

// hoenn encounter slots
pokemon SPECIES_PLUSLE
pokemon SPECIES_MINUN

// sinnoh encounter slots
pokemon SPECIES_SHINX
pokemon SPECIES_SHINX

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_PIDGEY
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata 116   // Route 6

walkrate 15
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 13, 13, 13, 13, 14, 14, 15, 15, 12, 14, 12, 14

// morning encounter slots
pokemon SPECIES_PIDGEY
pokemon SPECIES_BELLSPROUT
pokemon SPECIES_PIDGEY
pokemon SPECIES_BELLSPROUT
pokemon SPECIES_PIDGEY
pokemon SPECIES_PIDGEY
pokemon SPECIES_MAGNEMITE
pokemon SPECIES_MAGNEMITE
pokemon SPECIES_ABRA
pokemon SPECIES_ABRA
pokemon SPECIES_ABRA
pokemon SPECIES_ABRA

// day encounter slots
pokemon SPECIES_PIDGEY
pokemon SPECIES_BELLSPROUT
pokemon SPECIES_PIDGEY
pokemon SPECIES_BELLSPROUT
pokemon SPECIES_PIDGEY
pokemon SPECIES_PIDGEY
pokemon SPECIES_MAGNEMITE
pokemon SPECIES_MAGNEMITE
pokemon SPECIES_ABRA
pokemon SPECIES_ABRA
pokemon SPECIES_ABRA
pokemon SPECIES_ABRA

// night encounter slots
pokemon SPECIES_ODDISH
pokemon SPECIES_ODDISH
pokemon SPECIES_ODDISH
pokemon SPECIES_ODDISH
pokemon SPECIES_BELLSPROUT
pokemon SPECIES_BELLSPROUT
pokemon SPECIES_MAGNEMITE
pokemon SPECIES_MAGNEMITE
pokemon SPECIES_ABRA
pokemon SPECIES_ABRA
pokemon SPECIES_ABRA
pokemon SPECIES_ABRA

// hoenn encounter slots
pokemon SPECIES_WHISMUR
pokemon SPECIES_LINOONE

// sinnoh encounter slots
pokemon SPECIES_BUIZEL
pokemon SPECIES_BIDOOF

// surf encounters
encounter SPECIES_PSYDUCK, 10, 10
encounter SPECIES_PSYDUCK, 5, 5
encounter SPECIES_GOLDUCK, 10, 10
encounter SPECIES_GOLDUCK, 10, 10
encounter SPECIES_GOLDUCK, 10, 10

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_POLIWAG, 10, 10
encounter SPECIES_POLIWAG, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_POLIWAG, 20, 20
encounter SPECIES_POLIWAG, 20, 20
encounter SPECIES_POLIWAG, 20, 20
encounter SPECIES_POLIWAG, 20, 20

// super rod encounters
encounter SPECIES_POLIWAG, 40, 40
encounter SPECIES_POLIWAG, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_POLIWAG, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_PIDGEY
// swarm surf
pokemon SPECIES_PSYDUCK
// swarm good rod
pokemon SPECIES_POLIWAG
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata 117   // Route 7

walkrate 15
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 17, 17, 17, 17, 18, 18, 19, 19, 19, 15, 19, 15

// morning encounter slots
pokemon SPECIES_RATTATA
pokemon SPECIES_SPEAROW
pokemon SPECIES_RATTATA
pokemon SPECIES_SPEAROW
pokemon SPECIES_GROWLITHE
pokemon SPECIES_GROWLITHE
pokemon SPECIES_RATICATE
pokemon SPECIES_RATICATE
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA

// day encounter slots
pokemon SPECIES_RATTATA
pokemon SPECIES_SPEAROW
pokemon SPECIES_RATTATA
pokemon SPECIES_SPEAROW
pokemon SPECIES_GROWLITHE
pokemon SPECIES_GROWLITHE
pokemon SPECIES_RATICATE
pokemon SPECIES_RATICATE
pokemon SPECIES_RATTATA
pokemon SPECIES_GROWLITHE
pokemon SPECIES_RATTATA
pokemon SPECIES_GROWLITHE

// night encounter slots
pokemon SPECIES_RATTATA
pokemon SPECIES_MURKROW
pokemon SPECIES_RATTATA
pokemon SPECIES_MURKROW
pokemon SPECIES_GROWLITHE
pokemon SPECIES_GROWLITHE
pokemon SPECIES_RATICATE
pokemon SPECIES_RATICATE
pokemon SPECIES_MURKROW
pokemon SPECIES_HOUNDOUR
pokemon SPECIES_MURKROW
pokemon SPECIES_HOUNDOUR

// hoenn encounter slots
pokemon SPECIES_PLUSLE
pokemon SPECIES_MINUN

// sinnoh encounter slots
pokemon SPECIES_SHINX
pokemon SPECIES_SHINX

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_RATTATA
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata 118   // Route 8

walkrate 15
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 17, 19, 17, 19, 15, 15, 18, 18, 17, 15, 17, 15

// morning encounter slots
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_ABRA
pokemon SPECIES_ABRA
pokemon SPECIES_GROWLITHE
pokemon SPECIES_GROWLITHE
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_KADABRA
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_KADABRA

// day encounter slots
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_ABRA
pokemon SPECIES_ABRA
pokemon SPECIES_GROWLITHE
pokemon SPECIES_GROWLITHE
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_KADABRA
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_KADABRA

// night encounter slots
pokemon SPECIES_NOCTOWL
pokemon SPECIES_HAUNTER
pokemon SPECIES_NOCTOWL
pokemon SPECIES_HAUNTER
pokemon SPECIES_ABRA
pokemon SPECIES_ABRA
pokemon SPECIES_NOCTOWL
pokemon SPECIES_NOCTOWL
pokemon SPECIES_GROWLITHE
pokemon SPECIES_KADABRA
pokemon SPECIES_GROWLITHE
pokemon SPECIES_KADABRA

// hoenn encounter slots
pokemon SPECIES_PLUSLE
pokemon SPECIES_MINUN

// sinnoh encounter slots
pokemon SPECIES_SHINX
pokemon SPECIES_SHINX

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_PIDGEOTTO
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata 119   // Route 9

walkrate 15
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 13, 15, 13, 15, 13, 13, 15, 15, 15, 15, 15, 15

// morning encounter slots
pokemon SPECIES_MANKEY
pokemon SPECIES_RATTATA
pokemon SPECIES_MANKEY
pokemon SPECIES_RATTATA
pokemon SPECIES_SPEAROW
pokemon SPECIES_SPEAROW
pokemon SPECIES_RATICATE
pokemon SPECIES_RATICATE
pokemon SPECIES_FEAROW
pokemon SPECIES_PRIMEAPE
pokemon SPECIES_FEAROW
pokemon SPECIES_PRIMEAPE

// day encounter slots
pokemon SPECIES_MANKEY
pokemon SPECIES_RATTATA
pokemon SPECIES_MANKEY
pokemon SPECIES_RATTATA
pokemon SPECIES_SPEAROW
pokemon SPECIES_SPEAROW
pokemon SPECIES_RATICATE
pokemon SPECIES_RATICATE
pokemon SPECIES_FEAROW
pokemon SPECIES_PRIMEAPE
pokemon SPECIES_FEAROW
pokemon SPECIES_PRIMEAPE

// night encounter slots
pokemon SPECIES_MANKEY
pokemon SPECIES_RATTATA
pokemon SPECIES_MANKEY
pokemon SPECIES_RATTATA
pokemon SPECIES_RATICATE
pokemon SPECIES_RATICATE
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATICATE
pokemon SPECIES_PRIMEAPE
pokemon SPECIES_RATICATE
pokemon SPECIES_PRIMEAPE

// hoenn encounter slots
pokemon SPECIES_WHISMUR
pokemon SPECIES_LINOONE

// sinnoh encounter slots
pokemon SPECIES_BUIZEL
pokemon SPECIES_BIDOOF

// surf encounters
encounter SPECIES_GOLDEEN, 15, 15
encounter SPECIES_GOLDEEN, 10, 10
encounter SPECIES_SEAKING, 15, 15
encounter SPECIES_SEAKING, 15, 15
encounter SPECIES_SEAKING, 15, 15

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_GOLDEEN, 10, 10
encounter SPECIES_GOLDEEN, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20

// super rod encounters
encounter SPECIES_GOLDEEN, 40, 40
encounter SPECIES_GOLDEEN, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_SEAKING, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_SABLEYE
// swarm surf
pokemon SPECIES_GOLDEEN
// swarm good rod
pokemon SPECIES_GOLDEEN
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata 120   // Route 10

walkrate 15
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 16, 17, 16, 17, 16, 16, 18, 18, 18, 15, 18, 15

// morning encounter slots
pokemon SPECIES_SPEAROW
pokemon SPECIES_VOLTORB
pokemon SPECIES_SPEAROW
pokemon SPECIES_VOLTORB
pokemon SPECIES_RATICATE
pokemon SPECIES_RATICATE
pokemon SPECIES_FEAROW
pokemon SPECIES_FEAROW
pokemon SPECIES_RATICATE
pokemon SPECIES_ELECTABUZZ
pokemon SPECIES_RATICATE
pokemon SPECIES_ELECTABUZZ

// day encounter slots
pokemon SPECIES_SPEAROW
pokemon SPECIES_VOLTORB
pokemon SPECIES_SPEAROW
pokemon SPECIES_VOLTORB
pokemon SPECIES_RATICATE
pokemon SPECIES_RATICATE
pokemon SPECIES_FEAROW
pokemon SPECIES_FEAROW
pokemon SPECIES_ELECTABUZZ
pokemon SPECIES_ELECTABUZZ
pokemon SPECIES_ELECTABUZZ
pokemon SPECIES_ELECTABUZZ

// night encounter slots
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_VOLTORB
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_VOLTORB
pokemon SPECIES_RATICATE
pokemon SPECIES_RATICATE
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_RATICATE
pokemon SPECIES_ELECTABUZZ
pokemon SPECIES_RATICATE
pokemon SPECIES_ELECTABUZZ

// hoenn encounter slots
pokemon SPECIES_WHISMUR
pokemon SPECIES_LINOONE

// sinnoh encounter slots
pokemon SPECIES_BUIZEL
pokemon SPECIES_BIDOOF

// surf encounters
encounter SPECIES_GOLDEEN, 15, 15
encounter SPECIES_GOLDEEN, 10, 10
encounter SPECIES_SEAKING, 15, 15
encounter SPECIES_SEAKING, 15, 15
encounter SPECIES_SEAKING, 15, 15

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_GOLDEEN, 10, 10
encounter SPECIES_GOLDEEN, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20

// super rod encounters
encounter SPECIES_GOLDEEN, 40, 40
encounter SPECIES_GOLDEEN, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_SEAKING, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_SPEAROW
// swarm surf
pokemon SPECIES_GOLDEEN
// swarm good rod
pokemon SPECIES_GOLDEEN
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata 121   // Route 11

walkrate 15
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 14, 15, 14, 15, 15, 15, 16, 16, 16, 16, 16, 16

// morning encounter slots
pokemon SPECIES_DROWZEE
pokemon SPECIES_RATTATA
pokemon SPECIES_DROWZEE
pokemon SPECIES_RATTATA
pokemon SPECIES_MAGNEMITE
pokemon SPECIES_MAGNEMITE
pokemon SPECIES_DROWZEE
pokemon SPECIES_DROWZEE
pokemon SPECIES_HYPNO
pokemon SPECIES_HYPNO
pokemon SPECIES_HYPNO
pokemon SPECIES_HYPNO

// day encounter slots
pokemon SPECIES_DROWZEE
pokemon SPECIES_RATTATA
pokemon SPECIES_DROWZEE
pokemon SPECIES_RATTATA
pokemon SPECIES_MAGNEMITE
pokemon SPECIES_MAGNEMITE
pokemon SPECIES_DROWZEE
pokemon SPECIES_DROWZEE
pokemon SPECIES_HYPNO
pokemon SPECIES_HYPNO
pokemon SPECIES_HYPNO
pokemon SPECIES_HYPNO

// night encounter slots
pokemon SPECIES_DROWZEE
pokemon SPECIES_RATTATA
pokemon SPECIES_DROWZEE
pokemon SPECIES_RATTATA
pokemon SPECIES_MAGNEMITE
pokemon SPECIES_MAGNEMITE
pokemon SPECIES_DROWZEE
pokemon SPECIES_DROWZEE
pokemon SPECIES_HYPNO
pokemon SPECIES_HYPNO
pokemon SPECIES_HYPNO
pokemon SPECIES_HYPNO

// hoenn encounter slots
pokemon SPECIES_PLUSLE
pokemon SPECIES_MINUN

// sinnoh encounter slots
pokemon SPECIES_SHINX
pokemon SPECIES_SHINX

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_DROWZEE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata 122   // Route 13

walkrate 15
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 23, 23, 23, 23, 25, 25, 22, 22, 24, 24, 24, 25

// morning encounter slots
pokemon SPECIES_NIDORINA
pokemon SPECIES_NIDORINO
pokemon SPECIES_NIDORINA
pokemon SPECIES_NIDORINO
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_HOPPIP
pokemon SPECIES_HOPPIP
pokemon SPECIES_HOPPIP
pokemon SPECIES_HOPPIP
pokemon SPECIES_HOPPIP
pokemon SPECIES_CHANSEY

// day encounter slots
pokemon SPECIES_NIDORINA
pokemon SPECIES_NIDORINO
pokemon SPECIES_NIDORINA
pokemon SPECIES_NIDORINO
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_HOPPIP
pokemon SPECIES_HOPPIP
pokemon SPECIES_HOPPIP
pokemon SPECIES_HOPPIP
pokemon SPECIES_HOPPIP
pokemon SPECIES_CHANSEY

// night encounter slots
pokemon SPECIES_NIDORINA
pokemon SPECIES_NIDORINO
pokemon SPECIES_NIDORINA
pokemon SPECIES_NIDORINO
pokemon SPECIES_NOCTOWL
pokemon SPECIES_NOCTOWL
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_CHANSEY

// hoenn encounter slots
pokemon SPECIES_WHISMUR
pokemon SPECIES_LINOONE

// sinnoh encounter slots
pokemon SPECIES_BUIZEL
pokemon SPECIES_BIDOOF

// surf encounters
encounter SPECIES_TENTACOOL, 25, 25
encounter SPECIES_QUAGSIRE, 25, 25
encounter SPECIES_TENTACRUEL, 25, 25
encounter SPECIES_TENTACRUEL, 25, 25
encounter SPECIES_TENTACRUEL, 25, 25

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_TENTACOOL, 10, 10
encounter SPECIES_TENTACOOL, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_TENTACOOL, 20, 20
encounter SPECIES_TENTACOOL, 20, 20
encounter SPECIES_TENTACOOL, 20, 20
encounter SPECIES_TENTACOOL, 20, 20

// super rod encounters
encounter SPECIES_TENTACOOL, 40, 40
encounter SPECIES_TENTACOOL, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_QWILFISH, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_CHANSEY
// swarm surf
pokemon SPECIES_TENTACOOL
// swarm good rod
pokemon SPECIES_TENTACOOL
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata 123   // Route 14

walkrate 15
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 23, 23, 23, 23, 25, 25, 24, 24, 26, 26, 26, 25

// morning encounter slots
pokemon SPECIES_NIDORINA
pokemon SPECIES_NIDORINO
pokemon SPECIES_NIDORINA
pokemon SPECIES_NIDORINO
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_HOPPIP
pokemon SPECIES_HOPPIP
pokemon SPECIES_SKIPLOOM
pokemon SPECIES_SKIPLOOM
pokemon SPECIES_SKIPLOOM
pokemon SPECIES_CHANSEY

// day encounter slots
pokemon SPECIES_NIDORINA
pokemon SPECIES_NIDORINO
pokemon SPECIES_NIDORINA
pokemon SPECIES_NIDORINO
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_HOPPIP
pokemon SPECIES_HOPPIP
pokemon SPECIES_SKIPLOOM
pokemon SPECIES_SKIPLOOM
pokemon SPECIES_SKIPLOOM
pokemon SPECIES_CHANSEY

// night encounter slots
pokemon SPECIES_NIDORINA
pokemon SPECIES_NIDORINO
pokemon SPECIES_NIDORINA
pokemon SPECIES_NIDORINO
pokemon SPECIES_NOCTOWL
pokemon SPECIES_NOCTOWL
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_CHANSEY

// hoenn encounter slots
pokemon SPECIES_PLUSLE
pokemon SPECIES_MINUN

// sinnoh encounter slots
pokemon SPECIES_SHINX
pokemon SPECIES_SHINX

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_NIDORINA
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata 124   // Route 15

walkrate 15
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 23, 23, 23, 23, 25, 25, 22, 22, 24, 24, 24, 25

// morning encounter slots
pokemon SPECIES_NIDORINA
pokemon SPECIES_NIDORINO
pokemon SPECIES_NIDORINA
pokemon SPECIES_NIDORINO
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_HOPPIP
pokemon SPECIES_HOPPIP
pokemon SPECIES_HOPPIP
pokemon SPECIES_HOPPIP
pokemon SPECIES_HOPPIP
pokemon SPECIES_CHANSEY

// day encounter slots
pokemon SPECIES_NIDORINA
pokemon SPECIES_NIDORINO
pokemon SPECIES_NIDORINA
pokemon SPECIES_NIDORINO
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_HOPPIP
pokemon SPECIES_HOPPIP
pokemon SPECIES_HOPPIP
pokemon SPECIES_HOPPIP
pokemon SPECIES_HOPPIP
pokemon SPECIES_CHANSEY

// night encounter slots
pokemon SPECIES_NIDORINA
pokemon SPECIES_NIDORINO
pokemon SPECIES_NIDORINA
pokemon SPECIES_NIDORINO
pokemon SPECIES_NOCTOWL
pokemon SPECIES_NOCTOWL
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_QUAGSIRE
pokemon SPECIES_CHANSEY

// hoenn encounter slots
pokemon SPECIES_PLUSLE
pokemon SPECIES_MINUN

// sinnoh encounter slots
pokemon SPECIES_SHINX
pokemon SPECIES_SHINX

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_NIDORINA
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata 125   // Route 16

walkrate 15
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 26, 27, 26, 27, 28, 28, 29, 29, 27, 30, 27, 30

// morning encounter slots
pokemon SPECIES_GRIMER
pokemon SPECIES_FEAROW
pokemon SPECIES_GRIMER
pokemon SPECIES_FEAROW
pokemon SPECIES_GRIMER
pokemon SPECIES_GRIMER
pokemon SPECIES_FEAROW
pokemon SPECIES_FEAROW
pokemon SPECIES_SLUGMA
pokemon SPECIES_MUK
pokemon SPECIES_SLUGMA
pokemon SPECIES_MUK

// day encounter slots
pokemon SPECIES_GRIMER
pokemon SPECIES_FEAROW
pokemon SPECIES_GRIMER
pokemon SPECIES_FEAROW
pokemon SPECIES_GRIMER
pokemon SPECIES_GRIMER
pokemon SPECIES_FEAROW
pokemon SPECIES_FEAROW
pokemon SPECIES_SLUGMA
pokemon SPECIES_MUK
pokemon SPECIES_SLUGMA
pokemon SPECIES_MUK

// night encounter slots
pokemon SPECIES_GRIMER
pokemon SPECIES_GRIMER
pokemon SPECIES_GRIMER
pokemon SPECIES_GRIMER
pokemon SPECIES_GRIMER
pokemon SPECIES_GRIMER
pokemon SPECIES_MURKROW
pokemon SPECIES_MURKROW
pokemon SPECIES_SLUGMA
pokemon SPECIES_MUK
pokemon SPECIES_SLUGMA
pokemon SPECIES_MUK

// hoenn encounter slots
pokemon SPECIES_PLUSLE
pokemon SPECIES_MINUN

// sinnoh encounter slots
pokemon SPECIES_SHINX
pokemon SPECIES_SHINX

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_GRIMER
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata 126   // Route 17

walkrate 15
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 28, 27, 28, 27, 29, 29, 30, 30, 29, 32, 29, 32

// morning encounter slots
pokemon SPECIES_FEAROW
pokemon SPECIES_GRIMER
pokemon SPECIES_FEAROW
pokemon SPECIES_GRIMER
pokemon SPECIES_GRIMER
pokemon SPECIES_GRIMER
pokemon SPECIES_FEAROW
pokemon SPECIES_FEAROW
pokemon SPECIES_SLUGMA
pokemon SPECIES_MUK
pokemon SPECIES_SLUGMA
pokemon SPECIES_MUK

// day encounter slots
pokemon SPECIES_FEAROW
pokemon SPECIES_SLUGMA
pokemon SPECIES_FEAROW
pokemon SPECIES_SLUGMA
pokemon SPECIES_GRIMER
pokemon SPECIES_GRIMER
pokemon SPECIES_FEAROW
pokemon SPECIES_FEAROW
pokemon SPECIES_SLUGMA
pokemon SPECIES_MUK
pokemon SPECIES_SLUGMA
pokemon SPECIES_MUK

// night encounter slots
pokemon SPECIES_GRIMER
pokemon SPECIES_GRIMER
pokemon SPECIES_GRIMER
pokemon SPECIES_GRIMER
pokemon SPECIES_GRIMER
pokemon SPECIES_GRIMER
pokemon SPECIES_MUK
pokemon SPECIES_MUK
pokemon SPECIES_SLUGMA
pokemon SPECIES_MUK
pokemon SPECIES_SLUGMA
pokemon SPECIES_MUK

// hoenn encounter slots
pokemon SPECIES_PLUSLE
pokemon SPECIES_MINUN

// sinnoh encounter slots
pokemon SPECIES_SHINX
pokemon SPECIES_SHINX

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_FEAROW
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata 127   // Route 18

walkrate 15
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 26, 27, 26, 27, 28, 28, 29, 29, 27, 30, 27, 30

// morning encounter slots
pokemon SPECIES_GRIMER
pokemon SPECIES_FEAROW
pokemon SPECIES_GRIMER
pokemon SPECIES_FEAROW
pokemon SPECIES_GRIMER
pokemon SPECIES_GRIMER
pokemon SPECIES_FEAROW
pokemon SPECIES_FEAROW
pokemon SPECIES_SLUGMA
pokemon SPECIES_MUK
pokemon SPECIES_SLUGMA
pokemon SPECIES_MUK

// day encounter slots
pokemon SPECIES_GRIMER
pokemon SPECIES_FEAROW
pokemon SPECIES_GRIMER
pokemon SPECIES_FEAROW
pokemon SPECIES_GRIMER
pokemon SPECIES_GRIMER
pokemon SPECIES_FEAROW
pokemon SPECIES_FEAROW
pokemon SPECIES_SLUGMA
pokemon SPECIES_MUK
pokemon SPECIES_SLUGMA
pokemon SPECIES_MUK

// night encounter slots
pokemon SPECIES_GRIMER
pokemon SPECIES_GRIMER
pokemon SPECIES_GRIMER
pokemon SPECIES_GRIMER
pokemon SPECIES_GRIMER
pokemon SPECIES_GRIMER
pokemon SPECIES_MUK
pokemon SPECIES_MUK
pokemon SPECIES_SLUGMA
pokemon SPECIES_MUK
pokemon SPECIES_SLUGMA
pokemon SPECIES_MUK

// hoenn encounter slots
pokemon SPECIES_PLUSLE
pokemon SPECIES_MINUN

// sinnoh encounter slots
pokemon SPECIES_SHINX
pokemon SPECIES_SHINX

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_GRIMER
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata 128   // Route 21

walkrate 15
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 30, 25, 30, 25, 35, 35, 20, 20, 30, 28, 30, 28

// morning encounter slots
pokemon SPECIES_TANGELA
pokemon SPECIES_TANGELA
pokemon SPECIES_TANGELA
pokemon SPECIES_TANGELA
pokemon SPECIES_TANGELA
pokemon SPECIES_TANGELA
pokemon SPECIES_TANGELA
pokemon SPECIES_TANGELA
pokemon SPECIES_TANGELA
pokemon SPECIES_MR_MIME
pokemon SPECIES_TANGELA
pokemon SPECIES_MR_MIME

// day encounter slots
pokemon SPECIES_TANGELA
pokemon SPECIES_TANGELA
pokemon SPECIES_TANGELA
pokemon SPECIES_TANGELA
pokemon SPECIES_TANGELA
pokemon SPECIES_TANGELA
pokemon SPECIES_TANGELA
pokemon SPECIES_TANGELA
pokemon SPECIES_MR_MIME
pokemon SPECIES_MR_MIME
pokemon SPECIES_MR_MIME
pokemon SPECIES_MR_MIME

// night encounter slots
pokemon SPECIES_TANGELA
pokemon SPECIES_TANGELA
pokemon SPECIES_TANGELA
pokemon SPECIES_TANGELA
pokemon SPECIES_TANGELA
pokemon SPECIES_TANGELA
pokemon SPECIES_TANGELA
pokemon SPECIES_TANGELA
pokemon SPECIES_TANGELA
pokemon SPECIES_MR_MIME
pokemon SPECIES_TANGELA
pokemon SPECIES_MR_MIME

// hoenn encounter slots
pokemon SPECIES_WHISMUR
pokemon SPECIES_LINOONE

// sinnoh encounter slots
pokemon SPECIES_BUIZEL
pokemon SPECIES_BIDOOF

// surf encounters
encounter SPECIES_TENTACOOL, 35, 35
encounter SPECIES_TENTACOOL, 30, 30
encounter SPECIES_TENTACRUEL, 35, 35
encounter SPECIES_TENTACRUEL, 35, 35
encounter SPECIES_TENTACRUEL, 35, 35

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_TENTACOOL, 10, 10
encounter SPECIES_TENTACOOL, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_TENTACOOL, 20, 20
encounter SPECIES_CHINCHOU, 20, 20
encounter SPECIES_SHELLDER, 20, 20
encounter SPECIES_CHINCHOU, 20, 20

// super rod encounters
encounter SPECIES_CHINCHOU, 40, 40
encounter SPECIES_SHELLDER, 40, 40
encounter SPECIES_TENTACRUEL, 40, 40
encounter SPECIES_LANTURN, 40, 40
encounter SPECIES_TENTACRUEL, 40, 40

// swarm grass
pokemon SPECIES_TANGELA
// swarm surf
pokemon SPECIES_TENTACOOL
// swarm good rod
pokemon SPECIES_SHELLDER
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata 129   // Route 22

walkrate 15
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 3, 3, 3, 3, 5, 5, 4, 4, 6, 7, 6, 7

// morning encounter slots
pokemon SPECIES_RATTATA
pokemon SPECIES_SPEAROW
pokemon SPECIES_RATTATA
pokemon SPECIES_SPEAROW
pokemon SPECIES_SPEAROW
pokemon SPECIES_SPEAROW
pokemon SPECIES_DODUO
pokemon SPECIES_DODUO
pokemon SPECIES_PONYTA
pokemon SPECIES_FEAROW
pokemon SPECIES_PONYTA
pokemon SPECIES_FEAROW

// day encounter slots
pokemon SPECIES_RATTATA
pokemon SPECIES_SPEAROW
pokemon SPECIES_RATTATA
pokemon SPECIES_SPEAROW
pokemon SPECIES_SPEAROW
pokemon SPECIES_SPEAROW
pokemon SPECIES_DODUO
pokemon SPECIES_DODUO
pokemon SPECIES_PONYTA
pokemon SPECIES_FEAROW
pokemon SPECIES_PONYTA
pokemon SPECIES_FEAROW

// night encounter slots
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_RATTATA
pokemon SPECIES_PONYTA
pokemon SPECIES_RATTATA
pokemon SPECIES_PONYTA
pokemon SPECIES_RATTATA

// hoenn encounter slots
pokemon SPECIES_WHISMUR
pokemon SPECIES_LINOONE

// sinnoh encounter slots
pokemon SPECIES_BUIZEL
pokemon SPECIES_BIDOOF

// surf encounters
encounter SPECIES_POLIWAG, 10, 10
encounter SPECIES_POLIWAG, 5, 5
encounter SPECIES_POLIWHIRL, 10, 10
encounter SPECIES_POLIWHIRL, 10, 10
encounter SPECIES_POLIWHIRL, 10, 10

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_POLIWAG, 10, 10
encounter SPECIES_POLIWAG, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_POLIWAG, 20, 20
encounter SPECIES_POLIWAG, 20, 20
encounter SPECIES_POLIWAG, 20, 20
encounter SPECIES_POLIWAG, 20, 20

// super rod encounters
encounter SPECIES_POLIWAG, 40, 40
encounter SPECIES_POLIWAG, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_POLIWAG, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_RATTATA
// swarm surf
pokemon SPECIES_POLIWAG
// swarm good rod
pokemon SPECIES_POLIWAG
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata 130   // Route 24

walkrate 15
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 8, 10, 8, 10, 9, 9, 12, 12, 8, 14, 8, 14

// morning encounter slots
pokemon SPECIES_BELLSPROUT
pokemon SPECIES_BELLSPROUT
pokemon SPECIES_BELLSPROUT
pokemon SPECIES_BELLSPROUT
pokemon SPECIES_ABRA
pokemon SPECIES_ABRA
pokemon SPECIES_WEEPINBELL
pokemon SPECIES_WEEPINBELL
pokemon SPECIES_VENONAT
pokemon SPECIES_WEEPINBELL
pokemon SPECIES_VENONAT
pokemon SPECIES_WEEPINBELL

// day encounter slots
pokemon SPECIES_BELLSPROUT
pokemon SPECIES_SUNKERN
pokemon SPECIES_BELLSPROUT
pokemon SPECIES_SUNKERN
pokemon SPECIES_ABRA
pokemon SPECIES_ABRA
pokemon SPECIES_WEEPINBELL
pokemon SPECIES_WEEPINBELL
pokemon SPECIES_BELLSPROUT
pokemon SPECIES_WEEPINBELL
pokemon SPECIES_BELLSPROUT
pokemon SPECIES_WEEPINBELL

// night encounter slots
pokemon SPECIES_VENONAT
pokemon SPECIES_ODDISH
pokemon SPECIES_VENONAT
pokemon SPECIES_ODDISH
pokemon SPECIES_ABRA
pokemon SPECIES_ABRA
pokemon SPECIES_WEEPINBELL
pokemon SPECIES_WEEPINBELL
pokemon SPECIES_BELLSPROUT
pokemon SPECIES_VENOMOTH
pokemon SPECIES_BELLSPROUT
pokemon SPECIES_VENOMOTH

// hoenn encounter slots
pokemon SPECIES_WHISMUR
pokemon SPECIES_LINOONE

// sinnoh encounter slots
pokemon SPECIES_BUIZEL
pokemon SPECIES_BIDOOF

// surf encounters
encounter SPECIES_GOLDEEN, 10, 10
encounter SPECIES_GOLDEEN, 5, 5
encounter SPECIES_SEAKING, 10, 10
encounter SPECIES_SEAKING, 10, 10
encounter SPECIES_SEAKING, 10, 10

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_GOLDEEN, 10, 10
encounter SPECIES_GOLDEEN, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20

// super rod encounters
encounter SPECIES_GOLDEEN, 40, 40
encounter SPECIES_GOLDEEN, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_SEAKING, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_BELLSPROUT
// swarm surf
pokemon SPECIES_GOLDEEN
// swarm good rod
pokemon SPECIES_GOLDEEN
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata 131   // Route 25

walkrate 15
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 8, 10, 8, 10, 8, 8, 9, 9, 10, 14, 10, 14

// morning encounter slots
pokemon SPECIES_PIDGEY
pokemon SPECIES_BELLSPROUT
pokemon SPECIES_PIDGEY
pokemon SPECIES_BELLSPROUT
pokemon SPECIES_VENONAT
pokemon SPECIES_VENONAT
pokemon SPECIES_ABRA
pokemon SPECIES_ABRA
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_WEEPINBELL
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_WEEPINBELL

// day encounter slots
pokemon SPECIES_PIDGEY
pokemon SPECIES_BELLSPROUT
pokemon SPECIES_PIDGEY
pokemon SPECIES_BELLSPROUT
pokemon SPECIES_PIDGEY
pokemon SPECIES_PIDGEY
pokemon SPECIES_ABRA
pokemon SPECIES_ABRA
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_WEEPINBELL
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_WEEPINBELL

// night encounter slots
pokemon SPECIES_VENONAT
pokemon SPECIES_ODDISH
pokemon SPECIES_VENONAT
pokemon SPECIES_ODDISH
pokemon SPECIES_VENOMOTH
pokemon SPECIES_VENOMOTH
pokemon SPECIES_ABRA
pokemon SPECIES_ABRA
pokemon SPECIES_WEEPINBELL
pokemon SPECIES_BELLSPROUT
pokemon SPECIES_WEEPINBELL
pokemon SPECIES_BELLSPROUT

// hoenn encounter slots
pokemon SPECIES_WHISMUR
pokemon SPECIES_LINOONE

// sinnoh encounter slots
pokemon SPECIES_BUIZEL
pokemon SPECIES_BIDOOF

// surf encounters
encounter SPECIES_GOLDEEN, 10, 10
encounter SPECIES_GOLDEEN, 5, 5
encounter SPECIES_SEAKING, 10, 10
encounter SPECIES_SEAKING, 10, 10
encounter SPECIES_SEAKING, 10, 10

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_GOLDEEN, 10, 10
encounter SPECIES_GOLDEEN, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20

// super rod encounters
encounter SPECIES_GOLDEEN, 40, 40
encounter SPECIES_GOLDEEN, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_SEAKING, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_BUNEARY
// swarm surf
pokemon SPECIES_GOLDEEN
// swarm good rod
pokemon SPECIES_GOLDEEN
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata 132   // Tohjo Falls

walkrate 15
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 22, 22, 22, 22, 22, 22, 21, 21, 20, 23, 20, 23

// morning encounter slots
pokemon SPECIES_ZUBAT
pokemon SPECIES_RATICATE
pokemon SPECIES_ZUBAT
pokemon SPECIES_RATICATE
pokemon SPECIES_GOLBAT
pokemon SPECIES_GOLBAT
pokemon SPECIES_SLOWPOKE
pokemon SPECIES_SLOWPOKE
pokemon SPECIES_RATTATA
pokemon SPECIES_SLOWPOKE
pokemon SPECIES_RATTATA
pokemon SPECIES_SLOWPOKE

// day encounter slots
pokemon SPECIES_ZUBAT
pokemon SPECIES_RATICATE
pokemon SPECIES_ZUBAT
pokemon SPECIES_RATICATE
pokemon SPECIES_GOLBAT
pokemon SPECIES_GOLBAT
pokemon SPECIES_SLOWPOKE
pokemon SPECIES_SLOWPOKE
pokemon SPECIES_RATTATA
pokemon SPECIES_SLOWPOKE
pokemon SPECIES_RATTATA
pokemon SPECIES_SLOWPOKE

// night encounter slots
pokemon SPECIES_ZUBAT
pokemon SPECIES_RATICATE
pokemon SPECIES_ZUBAT
pokemon SPECIES_RATICATE
pokemon SPECIES_GOLBAT
pokemon SPECIES_GOLBAT
pokemon SPECIES_SLOWPOKE
pokemon SPECIES_SLOWPOKE
pokemon SPECIES_RATTATA
pokemon SPECIES_SLOWPOKE
pokemon SPECIES_RATTATA
pokemon SPECIES_SLOWPOKE

// hoenn encounter slots
pokemon SPECIES_ABSOL
pokemon SPECIES_MAKUHITA

// sinnoh encounter slots
pokemon SPECIES_BRONZOR
pokemon SPECIES_CHINGLING

// surf encounters
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_SLOWPOKE, 20, 20
encounter SPECIES_SEAKING, 20, 20
encounter SPECIES_SEAKING, 20, 20
encounter SPECIES_SEAKING, 20, 20

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_GOLDEEN, 10, 10
encounter SPECIES_GOLDEEN, 10, 10

// good rod encounters
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_GOLDEEN, 20, 20

// super rod encounters
encounter SPECIES_GOLDEEN, 40, 40
encounter SPECIES_GOLDEEN, 40, 40
encounter SPECIES_MAGIKARP, 40, 40
encounter SPECIES_SEAKING, 40, 40
encounter SPECIES_MAGIKARP, 40, 40

// swarm grass
pokemon SPECIES_ZUBAT
// swarm surf
pokemon SPECIES_GOLDEEN
// swarm good rod
pokemon SPECIES_GOLDEEN
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata 133   // Digletts Cave

walkrate 10
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 15, 17, 15, 17, 19, 19, 13, 13, 19, 24, 19, 29

// morning encounter slots
pokemon SPECIES_DIGLETT
pokemon SPECIES_DIGLETT
pokemon SPECIES_DIGLETT
pokemon SPECIES_DIGLETT
pokemon SPECIES_DIGLETT
pokemon SPECIES_DIGLETT
pokemon SPECIES_DIGLETT
pokemon SPECIES_DIGLETT
pokemon SPECIES_DUGTRIO
pokemon SPECIES_DUGTRIO
pokemon SPECIES_DUGTRIO
pokemon SPECIES_DUGTRIO

// day encounter slots
pokemon SPECIES_DIGLETT
pokemon SPECIES_DIGLETT
pokemon SPECIES_DIGLETT
pokemon SPECIES_DIGLETT
pokemon SPECIES_DIGLETT
pokemon SPECIES_DIGLETT
pokemon SPECIES_DIGLETT
pokemon SPECIES_DIGLETT
pokemon SPECIES_DUGTRIO
pokemon SPECIES_DUGTRIO
pokemon SPECIES_DUGTRIO
pokemon SPECIES_DUGTRIO

// night encounter slots
pokemon SPECIES_DIGLETT
pokemon SPECIES_DIGLETT
pokemon SPECIES_DIGLETT
pokemon SPECIES_DIGLETT
pokemon SPECIES_DIGLETT
pokemon SPECIES_DIGLETT
pokemon SPECIES_DIGLETT
pokemon SPECIES_DIGLETT
pokemon SPECIES_DUGTRIO
pokemon SPECIES_DUGTRIO
pokemon SPECIES_DUGTRIO
pokemon SPECIES_DUGTRIO

// hoenn encounter slots
pokemon SPECIES_ABSOL
pokemon SPECIES_MAKUHITA

// sinnoh encounter slots
pokemon SPECIES_BRONZOR
pokemon SPECIES_CHINGLING

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_DIGLETT
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata 134   // Victory Road 2F

walkrate 10
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 32, 32, 32, 32, 33, 33, 34, 34, 36, 35, 36, 35

// morning encounter slots
pokemon SPECIES_GRAVELER
pokemon SPECIES_GOLBAT
pokemon SPECIES_GRAVELER
pokemon SPECIES_GOLBAT
pokemon SPECIES_DONPHAN
pokemon SPECIES_DONPHAN
pokemon SPECIES_ONIX
pokemon SPECIES_ONIX
pokemon SPECIES_ONIX
pokemon SPECIES_RHYHORN
pokemon SPECIES_ONIX
pokemon SPECIES_RHYHORN

// day encounter slots
pokemon SPECIES_GRAVELER
pokemon SPECIES_GOLBAT
pokemon SPECIES_GRAVELER
pokemon SPECIES_GOLBAT
pokemon SPECIES_DONPHAN
pokemon SPECIES_DONPHAN
pokemon SPECIES_ONIX
pokemon SPECIES_ONIX
pokemon SPECIES_ONIX
pokemon SPECIES_RHYHORN
pokemon SPECIES_ONIX
pokemon SPECIES_RHYHORN

// night encounter slots
pokemon SPECIES_GRAVELER
pokemon SPECIES_GOLBAT
pokemon SPECIES_GRAVELER
pokemon SPECIES_GOLBAT
pokemon SPECIES_DONPHAN
pokemon SPECIES_DONPHAN
pokemon SPECIES_ONIX
pokemon SPECIES_ONIX
pokemon SPECIES_ONIX
pokemon SPECIES_RHYHORN
pokemon SPECIES_ONIX
pokemon SPECIES_RHYHORN

// hoenn encounter slots
pokemon SPECIES_ABSOL
pokemon SPECIES_MAKUHITA

// sinnoh encounter slots
pokemon SPECIES_BRONZOR
pokemon SPECIES_CHINGLING

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_GRAVELER
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata 135   // Victory Road 3F

walkrate 10
surfrate 0
rocksmashrate 40
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 32, 32, 32, 32, 33, 33, 34, 34, 36, 35, 36, 35

// morning encounter slots
pokemon SPECIES_GRAVELER
pokemon SPECIES_GOLBAT
pokemon SPECIES_GRAVELER
pokemon SPECIES_GOLBAT
pokemon SPECIES_DONPHAN
pokemon SPECIES_DONPHAN
pokemon SPECIES_ONIX
pokemon SPECIES_ONIX
pokemon SPECIES_ONIX
pokemon SPECIES_RHYHORN
pokemon SPECIES_ONIX
pokemon SPECIES_RHYHORN

// day encounter slots
pokemon SPECIES_GRAVELER
pokemon SPECIES_GOLBAT
pokemon SPECIES_GRAVELER
pokemon SPECIES_GOLBAT
pokemon SPECIES_DONPHAN
pokemon SPECIES_DONPHAN
pokemon SPECIES_ONIX
pokemon SPECIES_ONIX
pokemon SPECIES_ONIX
pokemon SPECIES_RHYHORN
pokemon SPECIES_ONIX
pokemon SPECIES_RHYHORN

// night encounter slots
pokemon SPECIES_GRAVELER
pokemon SPECIES_GOLBAT
pokemon SPECIES_GRAVELER
pokemon SPECIES_GOLBAT
pokemon SPECIES_DONPHAN
pokemon SPECIES_DONPHAN
pokemon SPECIES_ONIX
pokemon SPECIES_ONIX
pokemon SPECIES_ONIX
pokemon SPECIES_RHYHORN
pokemon SPECIES_ONIX
pokemon SPECIES_RHYHORN

// hoenn encounter slots
pokemon SPECIES_ABSOL
pokemon SPECIES_MAKUHITA

// sinnoh encounter slots
pokemon SPECIES_BRONZOR
pokemon SPECIES_CHINGLING

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_GEODUDE, 24, 32
encounter SPECIES_GRAVELER, 30, 33

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_GRAVELER
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata 136   // Route 2 (North, above Viridian Forest)

walkrate 15
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 3, 3, 3, 3, 5, 5, 7, 8, 7, 10, 7, 4

// morning encounter slots
pokemon SPECIES_CATERPIE
pokemon SPECIES_PIDGEY
pokemon SPECIES_CATERPIE
pokemon SPECIES_PIDGEY
pokemon SPECIES_METAPOD
pokemon SPECIES_METAPOD
pokemon SPECIES_BUTTERFREE
pokemon SPECIES_BUTTERFREE
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_SPINARAK
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_CATERPIE

// day encounter slots
pokemon SPECIES_CATERPIE
pokemon SPECIES_PIDGEY
pokemon SPECIES_CATERPIE
pokemon SPECIES_PIDGEY
pokemon SPECIES_PIDGEY
pokemon SPECIES_PIDGEY
pokemon SPECIES_BUTTERFREE
pokemon SPECIES_BUTTERFREE
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_CATERPIE

// night encounter slots
pokemon SPECIES_HOOTHOOT
pokemon SPECIES_SPINARAK
pokemon SPECIES_HOOTHOOT
pokemon SPECIES_SPINARAK
pokemon SPECIES_HOOTHOOT
pokemon SPECIES_HOOTHOOT
pokemon SPECIES_NOCTOWL
pokemon SPECIES_NOCTOWL
pokemon SPECIES_ARIADOS
pokemon SPECIES_NOCTOWL
pokemon SPECIES_ARIADOS
pokemon SPECIES_SPINARAK

// hoenn encounter slots
pokemon SPECIES_PLUSLE
pokemon SPECIES_MINUN

// sinnoh encounter slots
pokemon SPECIES_SHINX
pokemon SPECIES_SHINX

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_CATERPIE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata 137   // Viridian Forest

walkrate 15
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 3, 3, 3, 3, 5, 5, 7, 7, 7, 4, 7, 4

// morning encounter slots
pokemon SPECIES_CATERPIE
pokemon SPECIES_CATERPIE
pokemon SPECIES_METAPOD
pokemon SPECIES_PIDGEY
pokemon SPECIES_METAPOD
pokemon SPECIES_METAPOD
pokemon SPECIES_BUTTERFREE
pokemon SPECIES_BUTTERFREE
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_PIKACHU
pokemon SPECIES_PIKACHU
pokemon SPECIES_PIKACHU

// day encounter slots
pokemon SPECIES_CATERPIE
pokemon SPECIES_CATERPIE
pokemon SPECIES_METAPOD
pokemon SPECIES_PIDGEY
pokemon SPECIES_METAPOD
pokemon SPECIES_METAPOD
pokemon SPECIES_PIDGEY
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_PIDGEOTTO
pokemon SPECIES_PIKACHU
pokemon SPECIES_PIKACHU
pokemon SPECIES_PIKACHU

// night encounter slots
pokemon SPECIES_HOOTHOOT
pokemon SPECIES_HOOTHOOT
pokemon SPECIES_HOOTHOOT
pokemon SPECIES_HOOTHOOT
pokemon SPECIES_HOOTHOOT
pokemon SPECIES_HOOTHOOT
pokemon SPECIES_NOCTOWL
pokemon SPECIES_NOCTOWL
pokemon SPECIES_NOCTOWL
pokemon SPECIES_PIKACHU
pokemon SPECIES_NOCTOWL
pokemon SPECIES_PIKACHU

// hoenn encounter slots
pokemon SPECIES_SPOINK
pokemon SPECIES_NUMEL

// sinnoh encounter slots
pokemon SPECIES_BUDEW
pokemon SPECIES_CARNIVINE

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_KRICKETOT
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata 138   // ???

walkrate 0
surfrate 0
rocksmashrate 0
oldrodrate 0
goodrodrate 0
superrodrate 0
walklevels 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0

// morning encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// day encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// night encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// hoenn encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// sinnoh encounter slots
pokemon SPECIES_NONE
pokemon SPECIES_NONE

// surf encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// good rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// super rod encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// swarm grass
pokemon SPECIES_NONE
// swarm surf
pokemon SPECIES_NONE
// swarm good rod
pokemon SPECIES_NONE
// swarm super rod
pokemon SPECIES_NONE

.close


encounterdata 139   // Cerulean Cave 1F

walkrate 10
surfrate 10
rocksmashrate 5
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 39, 38, 38, 38, 40, 39, 40, 37, 39, 40, 39, 40

// morning encounter slots
pokemon SPECIES_MACHOKE
pokemon SPECIES_PARASECT
pokemon SPECIES_GOLBAT
pokemon SPECIES_PRIMEAPE
pokemon SPECIES_MAGNETON
pokemon SPECIES_DITTO
pokemon SPECIES_ELECTRODE
pokemon SPECIES_WOBBUFFET
pokemon SPECIES_PRIMEAPE
pokemon SPECIES_MACHOKE
pokemon SPECIES_MAGNETON
pokemon SPECIES_DITTO

// day encounter slots
pokemon SPECIES_MACHOKE
pokemon SPECIES_PARASECT
pokemon SPECIES_GOLBAT
pokemon SPECIES_PRIMEAPE
pokemon SPECIES_MAGNETON
pokemon SPECIES_DITTO
pokemon SPECIES_ELECTRODE
pokemon SPECIES_WOBBUFFET
pokemon SPECIES_PRIMEAPE
pokemon SPECIES_MACHOKE
pokemon SPECIES_MAGNETON
pokemon SPECIES_DITTO

// night encounter slots
pokemon SPECIES_GOLBAT
pokemon SPECIES_GOLBAT
pokemon SPECIES_GOLBAT
pokemon SPECIES_PARASECT
pokemon SPECIES_MAGNETON
pokemon SPECIES_DITTO
pokemon SPECIES_ELECTRODE
pokemon SPECIES_WOBBUFFET
pokemon SPECIES_PRIMEAPE
pokemon SPECIES_MACHOKE
pokemon SPECIES_MACHOKE
pokemon SPECIES_MACHOKE

// hoenn encounter slots
pokemon SPECIES_ABSOL
pokemon SPECIES_MAKUHITA

// sinnoh encounter slots
pokemon SPECIES_BRONZOR
pokemon SPECIES_CHINGLING

// surf encounters
encounter SPECIES_PSYDUCK, 40, 40
encounter SPECIES_PSYDUCK, 35, 35
encounter SPECIES_GOLDUCK, 40, 40
encounter SPECIES_GOLDUCK, 40, 40
encounter SPECIES_GOLDUCK, 40, 40

// rock smash encounters
encounter SPECIES_GEODUDE, 22, 24
encounter SPECIES_GRAVELER, 26, 30

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10

// good rod encounters
encounter SPECIES_POLIWAG, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_POLIWAG, 20, 20

// super rod encounters
encounter SPECIES_POLIWAG, 40, 40
encounter SPECIES_POLIWHIRL, 40, 40
encounter SPECIES_GYARADOS, 40, 40
encounter SPECIES_GYARADOS, 40, 40
encounter SPECIES_GYARADOS, 40, 40

// swarm grass
pokemon SPECIES_GOLBAT
// swarm surf
pokemon SPECIES_POLIWAG
// swarm good rod
pokemon SPECIES_POLIWAG
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata 140   // Cerulean Cave B1F

walkrate 10
surfrate 10
rocksmashrate 0
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 42, 40, 41, 39, 41, 42, 41, 42, 41, 42, 41, 42

// morning encounter slots
pokemon SPECIES_KADABRA
pokemon SPECIES_PARASECT
pokemon SPECIES_GOLBAT
pokemon SPECIES_MACHOKE
pokemon SPECIES_MAGNETON
pokemon SPECIES_DITTO
pokemon SPECIES_ELECTRODE
pokemon SPECIES_WOBBUFFET
pokemon SPECIES_MACHOKE
pokemon SPECIES_MACHOKE
pokemon SPECIES_MACHOKE
pokemon SPECIES_MACHOKE

// day encounter slots
pokemon SPECIES_KADABRA
pokemon SPECIES_PARASECT
pokemon SPECIES_GOLBAT
pokemon SPECIES_MACHOKE
pokemon SPECIES_MAGNETON
pokemon SPECIES_DITTO
pokemon SPECIES_ELECTRODE
pokemon SPECIES_WOBBUFFET
pokemon SPECIES_MACHOKE
pokemon SPECIES_MACHOKE
pokemon SPECIES_MACHOKE
pokemon SPECIES_MACHOKE

// night encounter slots
pokemon SPECIES_KADABRA
pokemon SPECIES_PARASECT
pokemon SPECIES_GOLBAT
pokemon SPECIES_MACHOKE
pokemon SPECIES_MAGNETON
pokemon SPECIES_DITTO
pokemon SPECIES_ELECTRODE
pokemon SPECIES_WOBBUFFET
pokemon SPECIES_GOLBAT
pokemon SPECIES_GOLBAT
pokemon SPECIES_GOLBAT
pokemon SPECIES_GOLBAT

// hoenn encounter slots
pokemon SPECIES_ABSOL
pokemon SPECIES_MAKUHITA

// sinnoh encounter slots
pokemon SPECIES_BRONZOR
pokemon SPECIES_CHINGLING

// surf encounters
encounter SPECIES_PSYDUCK, 40, 40
encounter SPECIES_PSYDUCK, 35, 35
encounter SPECIES_GOLDUCK, 40, 40
encounter SPECIES_GOLDUCK, 40, 40
encounter SPECIES_GOLDUCK, 40, 40

// rock smash encounters
encounter SPECIES_NONE, 0, 0
encounter SPECIES_NONE, 0, 0

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10

// good rod encounters
encounter SPECIES_POLIWAG, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_POLIWAG, 20, 20

// super rod encounters
encounter SPECIES_POLIWAG, 40, 40
encounter SPECIES_POLIWHIRL, 40, 40
encounter SPECIES_GYARADOS, 40, 40
encounter SPECIES_GYARADOS, 40, 40
encounter SPECIES_GYARADOS, 40, 40

// swarm grass
pokemon SPECIES_KADABRA
// swarm surf
pokemon SPECIES_POLIWAG
// swarm good rod
pokemon SPECIES_POLIWAG
// swarm super rod
pokemon SPECIES_MAGIKARP

.close


encounterdata 141   // Cerulean Cave B2F

walkrate 10
surfrate 10
rocksmashrate 5
oldrodrate 100
goodrodrate 75
superrodrate 75
walklevels 46, 45, 47, 45, 45, 45, 46, 47, 47, 49, 47, 49

// morning encounter slots
pokemon SPECIES_KADABRA
pokemon SPECIES_PARASECT
pokemon SPECIES_GOLBAT
pokemon SPECIES_MACHOKE
pokemon SPECIES_MAGNETON
pokemon SPECIES_DITTO
pokemon SPECIES_ELECTRODE
pokemon SPECIES_MAGNETON
pokemon SPECIES_PARASECT
pokemon SPECIES_WOBBUFFET
pokemon SPECIES_PARASECT
pokemon SPECIES_WOBBUFFET

// day encounter slots
pokemon SPECIES_KADABRA
pokemon SPECIES_PARASECT
pokemon SPECIES_GOLBAT
pokemon SPECIES_MACHOKE
pokemon SPECIES_MAGNETON
pokemon SPECIES_DITTO
pokemon SPECIES_ELECTRODE
pokemon SPECIES_MAGNETON
pokemon SPECIES_PARASECT
pokemon SPECIES_WOBBUFFET
pokemon SPECIES_PARASECT
pokemon SPECIES_WOBBUFFET

// night encounter slots
pokemon SPECIES_KADABRA
pokemon SPECIES_PARASECT
pokemon SPECIES_GOLBAT
pokemon SPECIES_MACHOKE
pokemon SPECIES_MAGNETON
pokemon SPECIES_DITTO
pokemon SPECIES_ELECTRODE
pokemon SPECIES_MAGNETON
pokemon SPECIES_PARASECT
pokemon SPECIES_WOBBUFFET
pokemon SPECIES_PARASECT
pokemon SPECIES_WOBBUFFET

// hoenn encounter slots
pokemon SPECIES_ABSOL
pokemon SPECIES_MAKUHITA

// sinnoh encounter slots
pokemon SPECIES_BRONZOR
pokemon SPECIES_CHINGLING

// surf encounters
encounter SPECIES_PSYDUCK, 40, 40
encounter SPECIES_PSYDUCK, 35, 35
encounter SPECIES_GOLDUCK, 40, 40
encounter SPECIES_GOLDUCK, 40, 40
encounter SPECIES_GOLDUCK, 40, 40

// rock smash encounters
encounter SPECIES_GEODUDE, 22, 24
encounter SPECIES_GRAVELER, 26, 30

// old rod encounters
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10
encounter SPECIES_MAGIKARP, 10, 10

// good rod encounters
encounter SPECIES_POLIWAG, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_MAGIKARP, 20, 20
encounter SPECIES_GOLDEEN, 20, 20
encounter SPECIES_POLIWAG, 20, 20

// super rod encounters
encounter SPECIES_POLIWAG, 40, 40
encounter SPECIES_POLIWHIRL, 40, 40
encounter SPECIES_GYARADOS, 40, 40
encounter SPECIES_GYARADOS, 40, 40
encounter SPECIES_GYARADOS, 40, 40

// swarm grass
pokemon SPECIES_KADABRA
// swarm surf
pokemon SPECIES_POLIWAG
// swarm good rod
pokemon SPECIES_POLIWAG
// swarm super rod
pokemon SPECIES_MAGIKARP

.close
