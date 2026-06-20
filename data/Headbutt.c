#include "../include/types.h"
#include "../include/constants/species.h"

typedef struct PACKED HeadbuttEncounterSlot {
    u16 species;
    u8 minLevel;
    u8 maxLevel;
} HeadbuttEncounterSlot;

typedef struct PACKED HeadbuttTreeCoord {
    s16 x;
    s16 y;
} HeadbuttTreeCoord;

typedef struct PACKED HeadbuttFile_000_EVERYWHERE {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_000_EVERYWHERE;

typedef struct PACKED HeadbuttFile_001_NOTHING {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_001_NOTHING;

typedef struct PACKED HeadbuttFile_002_Union_Room {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_002_Union_Room;

typedef struct PACKED HeadbuttFile_003_UG {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_003_UG;

typedef struct PACKED HeadbuttFile_004_DIRECT2 {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_004_DIRECT2;

typedef struct PACKED HeadbuttFile_005_DIRECT4 {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_005_DIRECT4;

typedef struct PACKED HeadbuttFile_006_Bellchime_Trail {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_006_Bellchime_Trail;

typedef struct PACKED HeadbuttFile_007_Burned_Tower_1F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_007_Burned_Tower_1F;

typedef struct PACKED HeadbuttFile_008_Ruins_Of_Alph_Inside {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_008_Ruins_Of_Alph_Inside;

typedef struct PACKED HeadbuttFile_009_Route_1 {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[20][6];
} HeadbuttFile_009_Route_1;

typedef struct PACKED HeadbuttFile_010_Route_2 {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[15][6];
} HeadbuttFile_010_Route_2;

typedef struct PACKED HeadbuttFile_011_Route_3 {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[4][6];
} HeadbuttFile_011_Route_3;

typedef struct PACKED HeadbuttFile_012_Route_4 {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[9][6];
} HeadbuttFile_012_Route_4;

typedef struct PACKED HeadbuttFile_013_Route_5 {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[4][6];
} HeadbuttFile_013_Route_5;

typedef struct PACKED HeadbuttFile_014_Route_6 {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[6][6];
} HeadbuttFile_014_Route_6;

typedef struct PACKED HeadbuttFile_015_Route_7 {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[8][6];
} HeadbuttFile_015_Route_7;

typedef struct PACKED HeadbuttFile_016_Route_8 {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[5][6];
} HeadbuttFile_016_Route_8;

typedef struct PACKED HeadbuttFile_017_Route_9 {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_017_Route_9;

typedef struct PACKED HeadbuttFile_018_Route_10 {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_018_Route_10;

typedef struct PACKED HeadbuttFile_019_Route_11 {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[11][6];
} HeadbuttFile_019_Route_11;

typedef struct PACKED HeadbuttFile_020_Route_12 {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[10][6];
} HeadbuttFile_020_Route_12;

typedef struct PACKED HeadbuttFile_021_Route_13 {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[15][6];
} HeadbuttFile_021_Route_13;

typedef struct PACKED HeadbuttFile_022_Route_14 {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[3][6];
} HeadbuttFile_022_Route_14;

typedef struct PACKED HeadbuttFile_023_Route_15 {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[19][6];
} HeadbuttFile_023_Route_15;

typedef struct PACKED HeadbuttFile_024_Route_16 {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[2][6];
} HeadbuttFile_024_Route_16;

typedef struct PACKED HeadbuttFile_025_Route_17 {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_025_Route_17;

typedef struct PACKED HeadbuttFile_026_Route_18 {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[3][6];
} HeadbuttFile_026_Route_18;

typedef struct PACKED HeadbuttFile_027_Route_22 {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[7][6];
} HeadbuttFile_027_Route_22;

typedef struct PACKED HeadbuttFile_028_Route_24 {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_028_Route_24;

typedef struct PACKED HeadbuttFile_029_Route_25 {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[15][6];
} HeadbuttFile_029_Route_25;

typedef struct PACKED HeadbuttFile_030_Route_26 {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[17][6];
} HeadbuttFile_030_Route_26;

typedef struct PACKED HeadbuttFile_031_Route_27 {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[17][6];
} HeadbuttFile_031_Route_27;

typedef struct PACKED HeadbuttFile_032_Route_28 {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[15][6];
} HeadbuttFile_032_Route_28;

typedef struct PACKED HeadbuttFile_033_Route_29 {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[35][6];
} HeadbuttFile_033_Route_29;

typedef struct PACKED HeadbuttFile_034_Route_30 {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[30][6];
} HeadbuttFile_034_Route_30;

typedef struct PACKED HeadbuttFile_035_Route_31 {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[15][6];
} HeadbuttFile_035_Route_31;

typedef struct PACKED HeadbuttFile_036_Route_32 {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[35][6];
} HeadbuttFile_036_Route_32;

typedef struct PACKED HeadbuttFile_037_Route_33 {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[4][6];
} HeadbuttFile_037_Route_33;

typedef struct PACKED HeadbuttFile_038_Route_34 {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[15][6];
} HeadbuttFile_038_Route_34;

typedef struct PACKED HeadbuttFile_039_Route_35 {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[14][6];
} HeadbuttFile_039_Route_35;

typedef struct PACKED HeadbuttFile_040_Route_36 {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[26][6];
} HeadbuttFile_040_Route_36;

typedef struct PACKED HeadbuttFile_041_Route_37 {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[13][6];
} HeadbuttFile_041_Route_37;

typedef struct PACKED HeadbuttFile_042_Route_38 {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[14][6];
} HeadbuttFile_042_Route_38;

typedef struct PACKED HeadbuttFile_043_Route_39 {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[3][6];
} HeadbuttFile_043_Route_39;

typedef struct PACKED HeadbuttFile_044_Route_42 {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[10][6];
} HeadbuttFile_044_Route_42;

typedef struct PACKED HeadbuttFile_045_Route_43 {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[17][6];
} HeadbuttFile_045_Route_43;

typedef struct PACKED HeadbuttFile_046_Route_44 {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[14][6];
} HeadbuttFile_046_Route_44;

typedef struct PACKED HeadbuttFile_047_Route_45 {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[3][6];
} HeadbuttFile_047_Route_45;

typedef struct PACKED HeadbuttFile_048_Route_46 {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[10][6];
} HeadbuttFile_048_Route_46;

typedef struct PACKED HeadbuttFile_049_Pallet_Town {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[17][6];
} HeadbuttFile_049_Pallet_Town;

typedef struct PACKED HeadbuttFile_050_Viridian_City {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[21][6];
} HeadbuttFile_050_Viridian_City;

typedef struct PACKED HeadbuttFile_051_Pewter_City {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[23][6];
} HeadbuttFile_051_Pewter_City;

typedef struct PACKED HeadbuttFile_052_Cerulean_City {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[11][6];
} HeadbuttFile_052_Cerulean_City;

typedef struct PACKED HeadbuttFile_053_Lavender_Town {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_053_Lavender_Town;

typedef struct PACKED HeadbuttFile_054_Vermilion_City {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[10][6];
} HeadbuttFile_054_Vermilion_City;

typedef struct PACKED HeadbuttFile_055_Celadon_City {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[32][6];
} HeadbuttFile_055_Celadon_City;

typedef struct PACKED HeadbuttFile_056_Fuchsia_City {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[18][6];
} HeadbuttFile_056_Fuchsia_City;

typedef struct PACKED HeadbuttFile_057_Cinnabar_Island {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_057_Cinnabar_Island;

typedef struct PACKED HeadbuttFile_058_Indigo_Plateau {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_058_Indigo_Plateau;

typedef struct PACKED HeadbuttFile_059_Saffron_City {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_059_Saffron_City;

typedef struct PACKED HeadbuttFile_060_New_Bark_Town {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[11][6];
} HeadbuttFile_060_New_Bark_Town;

typedef struct PACKED HeadbuttFile_061_Elms_Lab_1F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_061_Elms_Lab_1F;

typedef struct PACKED HeadbuttFile_062_Elms_Lab_2F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_062_Elms_Lab_2F;

typedef struct PACKED HeadbuttFile_063_Moms_House_1F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_063_Moms_House_1F;

typedef struct PACKED HeadbuttFile_064_Moms_House_2F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_064_Moms_House_2F;

typedef struct PACKED HeadbuttFile_065_New_Bark_Town_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_065_New_Bark_Town_House;

typedef struct PACKED HeadbuttFile_066_Ethan_Lyras_House_1F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_066_Ethan_Lyras_House_1F;

typedef struct PACKED HeadbuttFile_067_Cherrygrove_City {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[11][6];
} HeadbuttFile_067_Cherrygrove_City;

typedef struct PACKED HeadbuttFile_068_Cherrygrove_City_Pokmart {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_068_Cherrygrove_City_Pokmart;

typedef struct PACKED HeadbuttFile_069_Cherrygrove_City_Pokmon_Centre {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_069_Cherrygrove_City_Pokmon_Centre;

typedef struct PACKED HeadbuttFile_070_Cherrygrove_City_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_070_Cherrygrove_City_House;

typedef struct PACKED HeadbuttFile_071_Cherrygrove_City_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_071_Cherrygrove_City_House;

typedef struct PACKED HeadbuttFile_072_Cherrygrove_City_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_072_Cherrygrove_City_House;

typedef struct PACKED HeadbuttFile_073_Violet_City {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[27][6];
} HeadbuttFile_073_Violet_City;

typedef struct PACKED HeadbuttFile_074_Azalea_Town {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[15][6];
} HeadbuttFile_074_Azalea_Town;

typedef struct PACKED HeadbuttFile_075_Cianwood_City {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_075_Cianwood_City;

typedef struct PACKED HeadbuttFile_076_Goldenrod_City {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_076_Goldenrod_City;

typedef struct PACKED HeadbuttFile_077_Olivine_City {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_077_Olivine_City;

typedef struct PACKED HeadbuttFile_078_Ecruteak_City {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[18][6];
} HeadbuttFile_078_Ecruteak_City;

typedef struct PACKED HeadbuttFile_079_Ecruteak_City_Pokmart {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_079_Ecruteak_City_Pokmart;

typedef struct PACKED HeadbuttFile_080_Ecruteak_City_Gym {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_080_Ecruteak_City_Gym;

typedef struct PACKED HeadbuttFile_081_Ecruteak_Pokmon_Centre {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_081_Ecruteak_Pokmon_Centre;

typedef struct PACKED HeadbuttFile_082_Jubilife_City_Unused {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_082_Jubilife_City_Unused;

typedef struct PACKED HeadbuttFile_083_Barrier_Station_to_Bell_Tower {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_083_Barrier_Station_to_Bell_Tower;

typedef struct PACKED HeadbuttFile_084_Ecruteak_City_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_084_Ecruteak_City_House;

typedef struct PACKED HeadbuttFile_085_Ecruteak_City_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_085_Ecruteak_City_House;

typedef struct PACKED HeadbuttFile_086_Ecruteak_Dance_Theatre {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_086_Ecruteak_Dance_Theatre;

typedef struct PACKED HeadbuttFile_087_Mahogany_Town {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_087_Mahogany_Town;

typedef struct PACKED HeadbuttFile_088_Lake_of_Rage {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[22][6];
} HeadbuttFile_088_Lake_of_Rage;

typedef struct PACKED HeadbuttFile_089_Blackthorn_City {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_089_Blackthorn_City;

typedef struct PACKED HeadbuttFile_090_Mt_Silver {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[5][6];
} HeadbuttFile_090_Mt_Silver;

typedef struct PACKED HeadbuttFile_091_Route_19 {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_091_Route_19;

typedef struct PACKED HeadbuttFile_092_Route_20 {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_092_Route_20;

typedef struct PACKED HeadbuttFile_093_Route_21 {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[3][6];
} HeadbuttFile_093_Route_21;

typedef struct PACKED HeadbuttFile_094_Route_40 {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_094_Route_40;

typedef struct PACKED HeadbuttFile_095_Route_41 {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_095_Route_41;

typedef struct PACKED HeadbuttFile_096_National_Park {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[27][6];
} HeadbuttFile_096_National_Park;

typedef struct PACKED HeadbuttFile_097_Route_31_And_Violet_City_Gate {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_097_Route_31_And_Violet_City_Gate;

typedef struct PACKED HeadbuttFile_098_Route_32_And_Ruins_Of_Alph_Gate {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_098_Route_32_And_Ruins_Of_Alph_Gate;

typedef struct PACKED HeadbuttFile_099_Union_Cave_1F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_099_Union_Cave_1F;

typedef struct PACKED HeadbuttFile_100_Azalea_Town_And_Ilex_Forest_Gate {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_100_Azalea_Town_And_Ilex_Forest_Gate;

typedef struct PACKED HeadbuttFile_101_Goldenrod_City_And_Route_35_Gate {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_101_Goldenrod_City_And_Route_35_Gate;

typedef struct PACKED HeadbuttFile_102_Route_35_And_National_Park_Gate {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_102_Route_35_And_National_Park_Gate;

typedef struct PACKED HeadbuttFile_103_Ruins_Of_Alph_And_Route_36_Gate {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_103_Ruins_Of_Alph_And_Route_36_Gate;

typedef struct PACKED HeadbuttFile_104_National_Park_And_Route_36_Gate {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_104_National_Park_And_Route_36_Gate;

typedef struct PACKED HeadbuttFile_105_Jubilife_City_Unused {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_105_Jubilife_City_Unused;

typedef struct PACKED HeadbuttFile_106_Digletts_Cave {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_106_Digletts_Cave;

typedef struct PACKED HeadbuttFile_107_Mt_Moon {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_107_Mt_Moon;

typedef struct PACKED HeadbuttFile_108_Rock_Tunnel_1F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_108_Rock_Tunnel_1F;

typedef struct PACKED HeadbuttFile_109_Pal_Park {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_109_Pal_Park;

typedef struct PACKED HeadbuttFile_110_Sprout_Tower_1F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_110_Sprout_Tower_1F;

typedef struct PACKED HeadbuttFile_111_Bell_Tower_1F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_111_Bell_Tower_1F;

typedef struct PACKED HeadbuttFile_112_Radio_Tower_1F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_112_Radio_Tower_1F;

typedef struct PACKED HeadbuttFile_113_Ruins_Of_Alph_Outside {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_113_Ruins_Of_Alph_Outside;

typedef struct PACKED HeadbuttFile_114_Slowpoke_Well_Entrance {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_114_Slowpoke_Well_Entrance;

typedef struct PACKED HeadbuttFile_115_Olivine_Lighthouse_1F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_115_Olivine_Lighthouse_1F;

typedef struct PACKED HeadbuttFile_116_Mahogany_Town_Souvenir_Shop {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_116_Mahogany_Town_Souvenir_Shop;

typedef struct PACKED HeadbuttFile_117_Ilex_Forest {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[56][6];
} HeadbuttFile_117_Ilex_Forest;

typedef struct PACKED HeadbuttFile_118_Goldenrod_Tunnel {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_118_Goldenrod_Tunnel;

typedef struct PACKED HeadbuttFile_119_Mt_Mortar_1F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_119_Mt_Mortar_1F;

typedef struct PACKED HeadbuttFile_120_Ice_Path_1F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_120_Ice_Path_1F;

typedef struct PACKED HeadbuttFile_121_Whirl_Islands {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_121_Whirl_Islands;

typedef struct PACKED HeadbuttFile_122_Mt_Silver_Cave {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_122_Mt_Silver_Cave;

typedef struct PACKED HeadbuttFile_123_Dark_Cave_Route_45_entrance {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_123_Dark_Cave_Route_45_entrance;

typedef struct PACKED HeadbuttFile_124_Victory_Road_1F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_124_Victory_Road_1F;

typedef struct PACKED HeadbuttFile_125_Dragons_Den_Entrance {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_125_Dragons_Den_Entrance;

typedef struct PACKED HeadbuttFile_126_Tohjo_Falls {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_126_Tohjo_Falls;

typedef struct PACKED HeadbuttFile_127_Route_30_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_127_Route_30_House;

typedef struct PACKED HeadbuttFile_128_Ecruteak_City_Union_Room {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_128_Ecruteak_City_Union_Room;

typedef struct PACKED HeadbuttFile_129_Ecruteak_City_Union_Room {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_129_Ecruteak_City_Union_Room;

typedef struct PACKED HeadbuttFile_130_Ecruteak_City_Union_Room {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_130_Ecruteak_City_Union_Room;

typedef struct PACKED HeadbuttFile_131_Ecruteak_City_Pokmon_Centre_Lower {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_131_Ecruteak_City_Pokmon_Centre_Lower;

typedef struct PACKED HeadbuttFile_132_Ecruteak_City_And_Route_42_Gate {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_132_Ecruteak_City_And_Route_42_Gate;

typedef struct PACKED HeadbuttFile_133_Mahogany_Town_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_133_Mahogany_Town_House;

typedef struct PACKED HeadbuttFile_134_Route_29_And_Route_46_Gate {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_134_Route_29_And_Route_46_Gate;

typedef struct PACKED HeadbuttFile_135_Violet_City_Gym {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_135_Violet_City_Gym;

typedef struct PACKED HeadbuttFile_136_Azalea_Gym_Entrance {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_136_Azalea_Gym_Entrance;

typedef struct PACKED HeadbuttFile_137_Goldenrod_City_Gym {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_137_Goldenrod_City_Gym;

typedef struct PACKED HeadbuttFile_138_Olivine_City_Gym {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_138_Olivine_City_Gym;

typedef struct PACKED HeadbuttFile_139_Cianwood_City_Gym {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_139_Cianwood_City_Gym;

typedef struct PACKED HeadbuttFile_140_Mahogany_City_Gym_3rd_Room {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_140_Mahogany_City_Gym_3rd_Room;

typedef struct PACKED HeadbuttFile_141_Blackthorn_City_Gym {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_141_Blackthorn_City_Gym;

typedef struct PACKED HeadbuttFile_142_Route_43_Gate {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_142_Route_43_Gate;

typedef struct PACKED HeadbuttFile_143_Mr_Pokmons_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_143_Mr_Pokmons_House;

typedef struct PACKED HeadbuttFile_144_Cherrygrove_City_Pokmon_Centre_Lower {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_144_Cherrygrove_City_Pokmon_Centre_Lower;

typedef struct PACKED HeadbuttFile_145_Cerulean_Cave_1F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_145_Cerulean_Cave_1F;

typedef struct PACKED HeadbuttFile_146_Seafoam_Islands_1F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_146_Seafoam_Islands_1F;

typedef struct PACKED HeadbuttFile_147_Viridian_Forest {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[24][6];
} HeadbuttFile_147_Viridian_Forest;

typedef struct PACKED HeadbuttFile_148_Power_Plant_Unused {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_148_Power_Plant_Unused;

typedef struct PACKED HeadbuttFile_149_Route_36_And_Violet_City_Inbetween {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_149_Route_36_And_Violet_City_Inbetween;

typedef struct PACKED HeadbuttFile_150_Route_35_And_Pokathlon_Dome_Inbetween {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_150_Route_35_And_Pokathlon_Dome_Inbetween;

typedef struct PACKED HeadbuttFile_151_Route_47 {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[14][6];
} HeadbuttFile_151_Route_47;

typedef struct PACKED HeadbuttFile_152_Route_48 {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[6][6];
} HeadbuttFile_152_Route_48;

typedef struct PACKED HeadbuttFile_153_Union_Cave_B1F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_153_Union_Cave_B1F;

typedef struct PACKED HeadbuttFile_154_Union_Cave_B2F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_154_Union_Cave_B2F;

typedef struct PACKED HeadbuttFile_155_Sprout_Tower_2F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_155_Sprout_Tower_2F;

typedef struct PACKED HeadbuttFile_156_Sprout_Tower_3F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_156_Sprout_Tower_3F;

typedef struct PACKED HeadbuttFile_157_Violet_City_Pokmart {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_157_Violet_City_Pokmart;

typedef struct PACKED HeadbuttFile_158_Violet_City_Pokmon_Centre {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_158_Violet_City_Pokmon_Centre;

typedef struct PACKED HeadbuttFile_159_Violet_City_Pokmon_School {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_159_Violet_City_Pokmon_School;

typedef struct PACKED HeadbuttFile_160_Violet_City_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_160_Violet_City_House;

typedef struct PACKED HeadbuttFile_161_Jubilife_City_Unused {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_161_Jubilife_City_Unused;

typedef struct PACKED HeadbuttFile_162_Violet_City_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_162_Violet_City_House;

typedef struct PACKED HeadbuttFile_163_Azalea_Town_Charcoal_Kiln {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_163_Azalea_Town_Charcoal_Kiln;

typedef struct PACKED HeadbuttFile_164_Azalea_Town_Kurts_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_164_Azalea_Town_Kurts_House;

typedef struct PACKED HeadbuttFile_165_Azalea_Town_Pokmart {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_165_Azalea_Town_Pokmart;

typedef struct PACKED HeadbuttFile_166_Azalea_Town_Pokmon_Centre {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_166_Azalea_Town_Pokmon_Centre;

typedef struct PACKED HeadbuttFile_167_Violet_City_Pokmon_Centre_Lower {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_167_Violet_City_Pokmon_Centre_Lower;

typedef struct PACKED HeadbuttFile_168_Azalea_Town_Pokmon_Centre_Lower {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_168_Azalea_Town_Pokmon_Centre_Lower;

typedef struct PACKED HeadbuttFile_169_Route_32_Pokmon_Centre {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_169_Route_32_Pokmon_Centre;

typedef struct PACKED HeadbuttFile_170_Route_32_Pokmon_Centre_Lower {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_170_Route_32_Pokmon_Centre_Lower;

typedef struct PACKED HeadbuttFile_171_Ilex_Forest_And_Route_34_Gate {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_171_Ilex_Forest_And_Route_34_Gate;

typedef struct PACKED HeadbuttFile_172_Ecruteak_And_Route_38_Gate {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_172_Ecruteak_And_Route_38_Gate;

typedef struct PACKED HeadbuttFile_173_Safari_Zone_Gate_Inside {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_173_Safari_Zone_Gate_Inside;

typedef struct PACKED HeadbuttFile_174_Safari_Zone_Gate_Outside {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[17][6];
} HeadbuttFile_174_Safari_Zone_Gate_Outside;

typedef struct PACKED HeadbuttFile_175_Jubilife_City_Unused {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_175_Jubilife_City_Unused;

typedef struct PACKED HeadbuttFile_176_Dark_Cave_Route_31_entrance {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_176_Dark_Cave_Route_31_entrance;

typedef struct PACKED HeadbuttFile_177_Slowpoke_Well_1F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_177_Slowpoke_Well_1F;

typedef struct PACKED HeadbuttFile_178_Victory_Road_2F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_178_Victory_Road_2F;

typedef struct PACKED HeadbuttFile_179_Victory_Road_3F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_179_Victory_Road_3F;

typedef struct PACKED HeadbuttFile_180_Azalea_Town_Gym {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_180_Azalea_Town_Gym;

typedef struct PACKED HeadbuttFile_181_Slowpoke_Well_B1F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_181_Slowpoke_Well_B1F;

typedef struct PACKED HeadbuttFile_182_Goldenrod_City_Bike_Store {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_182_Goldenrod_City_Bike_Store;

typedef struct PACKED HeadbuttFile_183_Goldenrod_City_Game_Corner_JAP {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_183_Goldenrod_City_Game_Corner_JAP;

typedef struct PACKED HeadbuttFile_184_Goldenrod_City_Flower_Shop {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_184_Goldenrod_City_Flower_Shop;

typedef struct PACKED HeadbuttFile_185_Goldenrod_City_Pokmon_Centre {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_185_Goldenrod_City_Pokmon_Centre;

typedef struct PACKED HeadbuttFile_186_Goldenrod_Radio_Tower_2F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_186_Goldenrod_Radio_Tower_2F;

typedef struct PACKED HeadbuttFile_187_Goldenrod_Radio_Tower_3F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_187_Goldenrod_Radio_Tower_3F;

typedef struct PACKED HeadbuttFile_188_Goldenrod_Radio_Tower_4F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_188_Goldenrod_Radio_Tower_4F;

typedef struct PACKED HeadbuttFile_189_Goldenrod_Radio_Tower_5F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_189_Goldenrod_Radio_Tower_5F;

typedef struct PACKED HeadbuttFile_190_Goldenrod_Radio_Tower_Observation_Deck {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_190_Goldenrod_Radio_Tower_Observation_Deck;

typedef struct PACKED HeadbuttFile_191_Goldenrod_Department_Store_1F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_191_Goldenrod_Department_Store_1F;

typedef struct PACKED HeadbuttFile_192_Goldenrod_Department_Store_2F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_192_Goldenrod_Department_Store_2F;

typedef struct PACKED HeadbuttFile_193_Goldenrod_Department_Store_3F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_193_Goldenrod_Department_Store_3F;

typedef struct PACKED HeadbuttFile_194_Goldenrod_Department_Store_4F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_194_Goldenrod_Department_Store_4F;

typedef struct PACKED HeadbuttFile_195_Goldenrod_Department_Store_5F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_195_Goldenrod_Department_Store_5F;

typedef struct PACKED HeadbuttFile_196_Goldenrod_Department_Store_6F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_196_Goldenrod_Department_Store_6F;

typedef struct PACKED HeadbuttFile_197_Goldenrod_City_Magnet_Train_Station {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_197_Goldenrod_City_Magnet_Train_Station;

typedef struct PACKED HeadbuttFile_198_Goldenrod_City_Magnet_Train_Station {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_198_Goldenrod_City_Magnet_Train_Station;

typedef struct PACKED HeadbuttFile_199_Goldenrod_Tunnel {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_199_Goldenrod_Tunnel;

typedef struct PACKED HeadbuttFile_200_Goldenrod_Department_Store_Basement {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_200_Goldenrod_Department_Store_Basement;

typedef struct PACKED HeadbuttFile_201_Goldenrod_Tunnel_B2F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_201_Goldenrod_Tunnel_B2F;

typedef struct PACKED HeadbuttFile_202_Goldenrod_Tunnel_Warehouse {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_202_Goldenrod_Tunnel_Warehouse;

typedef struct PACKED HeadbuttFile_203_Goldenrod_City_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_203_Goldenrod_City_House;

typedef struct PACKED HeadbuttFile_204_Goldenrod_City_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_204_Goldenrod_City_House;

typedef struct PACKED HeadbuttFile_205_Goldenrod_City_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_205_Goldenrod_City_House;

typedef struct PACKED HeadbuttFile_206_Goldenrod_City_Name_Rater {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_206_Goldenrod_City_Name_Rater;

typedef struct PACKED HeadbuttFile_207_Global_Terminal {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_207_Global_Terminal;

typedef struct PACKED HeadbuttFile_208_Goldenrod_City_House_1F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_208_Goldenrod_City_House_1F;

typedef struct PACKED HeadbuttFile_209_Goldenrod_City_House_2F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_209_Goldenrod_City_House_2F;

typedef struct PACKED HeadbuttFile_210_Goldenrod_City_House_3F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_210_Goldenrod_City_House_3F;

typedef struct PACKED HeadbuttFile_211_Goldenrod_City_House_4F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_211_Goldenrod_City_House_4F;

typedef struct PACKED HeadbuttFile_212_Goldenrod_City_House_5F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_212_Goldenrod_City_House_5F;

typedef struct PACKED HeadbuttFile_213_Goldenrod_City_House_6F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_213_Goldenrod_City_House_6F;

typedef struct PACKED HeadbuttFile_214_Moomoo_Farm_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_214_Moomoo_Farm_House;

typedef struct PACKED HeadbuttFile_215_Moomoo_Farm_Barn {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_215_Moomoo_Farm_Barn;

typedef struct PACKED HeadbuttFile_216_Barrier_Station_to_Bell_Tower_And_Bellchime_Trail_Path {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_216_Barrier_Station_to_Bell_Tower_And_Bellchime_Trail_Path;

typedef struct PACKED HeadbuttFile_217_Burned_Tower_B1F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_217_Burned_Tower_B1F;

typedef struct PACKED HeadbuttFile_218_Ruins_of_Alph_Inside {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_218_Ruins_of_Alph_Inside;

typedef struct PACKED HeadbuttFile_219_Goldenrod_City_Pokmon_Centre_Lower {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_219_Goldenrod_City_Pokmon_Centre_Lower;

typedef struct PACKED HeadbuttFile_220_Glitter_Lighthouse_2F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_220_Glitter_Lighthouse_2F;

typedef struct PACKED HeadbuttFile_221_Glitter_Lighthouse_Exterior {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_221_Glitter_Lighthouse_Exterior;

typedef struct PACKED HeadbuttFile_222_Glitter_Lighthouse_3F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_222_Glitter_Lighthouse_3F;

typedef struct PACKED HeadbuttFile_223_Glitter_Lighthouse_4F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_223_Glitter_Lighthouse_4F;

typedef struct PACKED HeadbuttFile_224_Glitter_Lighthouse_5F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_224_Glitter_Lighthouse_5F;

typedef struct PACKED HeadbuttFile_225_Glitter_Lighthouse_Light_Room {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_225_Glitter_Lighthouse_Light_Room;

typedef struct PACKED HeadbuttFile_226_Olivine_City_Pokmon_Centre {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_226_Olivine_City_Pokmon_Centre;

typedef struct PACKED HeadbuttFile_227_Olivine_City_Pokmart {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_227_Olivine_City_Pokmart;

typedef struct PACKED HeadbuttFile_228_Olivine_City_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_228_Olivine_City_House;

typedef struct PACKED HeadbuttFile_229_Olivine_City_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_229_Olivine_City_House;

typedef struct PACKED HeadbuttFile_230_Olivine_City_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_230_Olivine_City_House;

typedef struct PACKED HeadbuttFile_231_Olivine_City_Caf {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_231_Olivine_City_Caf;

typedef struct PACKED HeadbuttFile_232_Cianwood_City_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_232_Cianwood_City_House;

typedef struct PACKED HeadbuttFile_233_Cianwood_City_Pharmacy {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_233_Cianwood_City_Pharmacy;

typedef struct PACKED HeadbuttFile_234_Cianwood_City_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_234_Cianwood_City_House;

typedef struct PACKED HeadbuttFile_235_Cianwood_City_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_235_Cianwood_City_House;

typedef struct PACKED HeadbuttFile_236_Cianwood_City_Pokmon_Centre {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_236_Cianwood_City_Pokmon_Centre;

typedef struct PACKED HeadbuttFile_237_Ice_Path_B1F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_237_Ice_Path_B1F;

typedef struct PACKED HeadbuttFile_238_Ice_Path_B2F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_238_Ice_Path_B2F;

typedef struct PACKED HeadbuttFile_239_Ice_Path_B3F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_239_Ice_Path_B3F;

typedef struct PACKED HeadbuttFile_240_Olivine_City_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_240_Olivine_City_House;

typedef struct PACKED HeadbuttFile_241_Cianwood_City_Pokmon_Centre_Lower {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_241_Cianwood_City_Pokmon_Centre_Lower;

typedef struct PACKED HeadbuttFile_242_Whirl_Islands_B1F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_242_Whirl_Islands_B1F;

typedef struct PACKED HeadbuttFile_243_Whirl_Islands_B2F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_243_Whirl_Islands_B2F;

typedef struct PACKED HeadbuttFile_244_Whirl_Islands_B3F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_244_Whirl_Islands_B3F;

typedef struct PACKED HeadbuttFile_245_Route_43_Gate {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_245_Route_43_Gate;

typedef struct PACKED HeadbuttFile_246_Mahogany_Town_Pokmon_Centre {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_246_Mahogany_Town_Pokmon_Centre;

typedef struct PACKED HeadbuttFile_247_Team_Rocket_HQ_B1F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_247_Team_Rocket_HQ_B1F;

typedef struct PACKED HeadbuttFile_248_Team_Rocket_HQ_B2F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_248_Team_Rocket_HQ_B2F;

typedef struct PACKED HeadbuttFile_249_Team_Rocket_HQ_B3F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_249_Team_Rocket_HQ_B3F;

typedef struct PACKED HeadbuttFile_250_Mt_Mortar_1F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_250_Mt_Mortar_1F;

typedef struct PACKED HeadbuttFile_251_Mt_Mortar_2F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_251_Mt_Mortar_2F;

typedef struct PACKED HeadbuttFile_252_Mt_Mortar_1F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_252_Mt_Mortar_1F;

typedef struct PACKED HeadbuttFile_253_Dragons_Den_Main {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_253_Dragons_Den_Main;

typedef struct PACKED HeadbuttFile_254_Fight_Area {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_254_Fight_Area;

typedef struct PACKED HeadbuttFile_255_Fight_Area {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_255_Fight_Area;

typedef struct PACKED HeadbuttFile_256_Fight_Area {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_256_Fight_Area;

typedef struct PACKED HeadbuttFile_257_Fight_Area {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_257_Fight_Area;

typedef struct PACKED HeadbuttFile_258_Fight_Area {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_258_Fight_Area;

typedef struct PACKED HeadbuttFile_259_Fight_Area {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_259_Fight_Area;

typedef struct PACKED HeadbuttFile_260_Fight_Area {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_260_Fight_Area;

typedef struct PACKED HeadbuttFile_261_Fight_Area {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_261_Fight_Area;

typedef struct PACKED HeadbuttFile_262_Fight_Area {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_262_Fight_Area;

typedef struct PACKED HeadbuttFile_263_Battle_Park {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_263_Battle_Park;

typedef struct PACKED HeadbuttFile_264_Battle_Park {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_264_Battle_Park;

typedef struct PACKED HeadbuttFile_265_Battle_Tower {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_265_Battle_Tower;

typedef struct PACKED HeadbuttFile_266_Battle_Tower {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_266_Battle_Tower;

typedef struct PACKED HeadbuttFile_267_Battle_Tower {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_267_Battle_Tower;

typedef struct PACKED HeadbuttFile_268_Battle_Tower {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_268_Battle_Tower;

typedef struct PACKED HeadbuttFile_269_Battle_Tower {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_269_Battle_Tower;

typedef struct PACKED HeadbuttFile_270_Battle_Tower {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_270_Battle_Tower;

typedef struct PACKED HeadbuttFile_271_Battle_Tower {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_271_Battle_Tower;

typedef struct PACKED HeadbuttFile_272_Battle_Frontier {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_272_Battle_Frontier;

typedef struct PACKED HeadbuttFile_273_Battle_Frontier {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_273_Battle_Frontier;

typedef struct PACKED HeadbuttFile_274_Battle_Tower {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_274_Battle_Tower;

typedef struct PACKED HeadbuttFile_275_Battle_Factory {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_275_Battle_Factory;

typedef struct PACKED HeadbuttFile_276_Battle_Hall {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_276_Battle_Hall;

typedef struct PACKED HeadbuttFile_277_Battle_Castle {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_277_Battle_Castle;

typedef struct PACKED HeadbuttFile_278_Battle_Arcade {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_278_Battle_Arcade;

typedef struct PACKED HeadbuttFile_279_Cliff_Edge_Gate {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_279_Cliff_Edge_Gate;

typedef struct PACKED HeadbuttFile_280_Pokathlon_Dome_Outside {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_280_Pokathlon_Dome_Outside;

typedef struct PACKED HeadbuttFile_281_Pokathlon_Dome_Inside {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_281_Pokathlon_Dome_Inside;

typedef struct PACKED HeadbuttFile_282_Pokathlon_Dome_Inside {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_282_Pokathlon_Dome_Inside;

typedef struct PACKED HeadbuttFile_283_Pokathlon_Dome_Inside {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_283_Pokathlon_Dome_Inside;

typedef struct PACKED HeadbuttFile_284_Pokathlon_Dome_Inside {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_284_Pokathlon_Dome_Inside;

typedef struct PACKED HeadbuttFile_285_Pokathlon_Dome_Inside {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_285_Pokathlon_Dome_Inside;

typedef struct PACKED HeadbuttFile_286_Pokathlon_Dome_Inside {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_286_Pokathlon_Dome_Inside;

typedef struct PACKED HeadbuttFile_287_Pokathlon_Dome_Inside {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_287_Pokathlon_Dome_Inside;

typedef struct PACKED HeadbuttFile_288_Dragons_Den_Shrine {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_288_Dragons_Den_Shrine;

typedef struct PACKED HeadbuttFile_289_Blackthorn_City_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_289_Blackthorn_City_House;

typedef struct PACKED HeadbuttFile_290_Blackthorn_City_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_290_Blackthorn_City_House;

typedef struct PACKED HeadbuttFile_291_Blackthorn_City_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_291_Blackthorn_City_House;

typedef struct PACKED HeadbuttFile_292_Blackthorn_City_Pokmart {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_292_Blackthorn_City_Pokmart;

typedef struct PACKED HeadbuttFile_293_Blackthorn_City_Pokmon_Centre {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_293_Blackthorn_City_Pokmon_Centre;

typedef struct PACKED HeadbuttFile_294_Lake_of_Rage_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_294_Lake_of_Rage_House;

typedef struct PACKED HeadbuttFile_295_Lake_of_Rage_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_295_Lake_of_Rage_House;

typedef struct PACKED HeadbuttFile_296_Route_26_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_296_Route_26_House;

typedef struct PACKED HeadbuttFile_297_Route_26_Week_Siblings_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_297_Route_26_Week_Siblings_House;

typedef struct PACKED HeadbuttFile_298_Tohjo_Falls_Hidden_Room {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_298_Tohjo_Falls_Hidden_Room;

typedef struct PACKED HeadbuttFile_299_Pokmon_League_Reception_Gate {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_299_Pokmon_League_Reception_Gate;

typedef struct PACKED HeadbuttFile_300_Pokmon_League {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_300_Pokmon_League;

typedef struct PACKED HeadbuttFile_301_Pokmon_League_Wills_Room {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_301_Pokmon_League_Wills_Room;

typedef struct PACKED HeadbuttFile_302_Pokmon_League_Kogas_Room {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_302_Pokmon_League_Kogas_Room;

typedef struct PACKED HeadbuttFile_303_Pokmon_League_Brunos_Room {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_303_Pokmon_League_Brunos_Room;

typedef struct PACKED HeadbuttFile_304_Pokmon_League_Karens_Room {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_304_Pokmon_League_Karens_Room;

typedef struct PACKED HeadbuttFile_305_Pokmon_League_Lances_Room {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_305_Pokmon_League_Lances_Room;

typedef struct PACKED HeadbuttFile_306_Pokmon_League_Hall_of_Fame {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_306_Pokmon_League_Hall_of_Fame;

typedef struct PACKED HeadbuttFile_307_S_S_Aqua {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_307_S_S_Aqua;

typedef struct PACKED HeadbuttFile_308_S_S_Aqua {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_308_S_S_Aqua;

typedef struct PACKED HeadbuttFile_309_S_S_Aqua {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_309_S_S_Aqua;

typedef struct PACKED HeadbuttFile_310_S_S_Aqua {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_310_S_S_Aqua;

typedef struct PACKED HeadbuttFile_311_S_S_Aqua {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_311_S_S_Aqua;

typedef struct PACKED HeadbuttFile_312_Ruins_of_Alph_Entrance {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_312_Ruins_of_Alph_Entrance;

typedef struct PACKED HeadbuttFile_313_Ruins_of_Alph_Chamber_1 {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_313_Ruins_of_Alph_Chamber_1;

typedef struct PACKED HeadbuttFile_314_Ruins_of_Alph_Entrance {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_314_Ruins_of_Alph_Entrance;

typedef struct PACKED HeadbuttFile_315_Ruins_of_Alph_Underground_Hall {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_315_Ruins_of_Alph_Underground_Hall;

typedef struct PACKED HeadbuttFile_316_Ruins_of_Alph_Entrance {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_316_Ruins_of_Alph_Entrance;

typedef struct PACKED HeadbuttFile_317_Ruins_of_Alph_Chamber_3 {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_317_Ruins_of_Alph_Chamber_3;

typedef struct PACKED HeadbuttFile_318_Ruins_of_Alph_Entrance {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_318_Ruins_of_Alph_Entrance;

typedef struct PACKED HeadbuttFile_319_Ruins_of_Alph_Chamber_4 {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_319_Ruins_of_Alph_Chamber_4;

typedef struct PACKED HeadbuttFile_320_Ruins_of_Alph_Chamber_2 {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_320_Ruins_of_Alph_Chamber_2;

typedef struct PACKED HeadbuttFile_321_Ruins_of_Alph_Research_Center {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_321_Ruins_of_Alph_Research_Center;

typedef struct PACKED HeadbuttFile_322_Route_27_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_322_Route_27_House;

typedef struct PACKED HeadbuttFile_323_Ruins_of_Alph_Hall_Entrance {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_323_Ruins_of_Alph_Hall_Entrance;

typedef struct PACKED HeadbuttFile_324_Ruins_of_Alph_Entrance_2 {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_324_Ruins_of_Alph_Entrance_2;

typedef struct PACKED HeadbuttFile_325_Ruins_of_Alph_Entrance_2 {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_325_Ruins_of_Alph_Entrance_2;

typedef struct PACKED HeadbuttFile_326_Ruins_of_Alph_Entrance_2 {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_326_Ruins_of_Alph_Entrance_2;

typedef struct PACKED HeadbuttFile_327_Ruins_of_Alph_Entrance_2 {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_327_Ruins_of_Alph_Entrance_2;

typedef struct PACKED HeadbuttFile_328_S_S_Aqua {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_328_S_S_Aqua;

typedef struct PACKED HeadbuttFile_329_S_S_Aqua {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_329_S_S_Aqua;

typedef struct PACKED HeadbuttFile_330_Olivine_Port {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_330_Olivine_Port;

typedef struct PACKED HeadbuttFile_331_Pokmon_Daycare {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_331_Pokmon_Daycare;

typedef struct PACKED HeadbuttFile_332_Bell_Tower_2F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_332_Bell_Tower_2F;

typedef struct PACKED HeadbuttFile_333_Bell_Tower_3F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_333_Bell_Tower_3F;

typedef struct PACKED HeadbuttFile_334_Bell_Tower_4F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_334_Bell_Tower_4F;

typedef struct PACKED HeadbuttFile_335_Bell_Tower_5F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_335_Bell_Tower_5F;

typedef struct PACKED HeadbuttFile_336_Bell_Tower_6F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_336_Bell_Tower_6F;

typedef struct PACKED HeadbuttFile_337_Bell_Tower_7F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_337_Bell_Tower_7F;

typedef struct PACKED HeadbuttFile_338_Bell_Tower_8F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_338_Bell_Tower_8F;

typedef struct PACKED HeadbuttFile_339_Bell_Tower_9F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_339_Bell_Tower_9F;

typedef struct PACKED HeadbuttFile_340_Bell_Tower_Roof {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_340_Bell_Tower_Roof;

typedef struct PACKED HeadbuttFile_341_Bell_Tower_10F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_341_Bell_Tower_10F;

typedef struct PACKED HeadbuttFile_342_Cliff_Cave {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_342_Cliff_Cave;

typedef struct PACKED HeadbuttFile_343_Safari_Zone {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_343_Safari_Zone;

typedef struct PACKED HeadbuttFile_344_Safari_Zone {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_344_Safari_Zone;

typedef struct PACKED HeadbuttFile_345_Safari_Zone {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_345_Safari_Zone;

typedef struct PACKED HeadbuttFile_346_Safari_Zone {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_346_Safari_Zone;

typedef struct PACKED HeadbuttFile_347_Safari_Zone {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_347_Safari_Zone;

typedef struct PACKED HeadbuttFile_348_Safari_Zone {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_348_Safari_Zone;

typedef struct PACKED HeadbuttFile_349_Safari_Zone {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_349_Safari_Zone;

typedef struct PACKED HeadbuttFile_350_Safari_Zone {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_350_Safari_Zone;

typedef struct PACKED HeadbuttFile_351_Safari_Zone {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_351_Safari_Zone;

typedef struct PACKED HeadbuttFile_352_Safari_Zone {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_352_Safari_Zone;

typedef struct PACKED HeadbuttFile_353_Safari_Zone {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_353_Safari_Zone;

typedef struct PACKED HeadbuttFile_354_Safari_Zone {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_354_Safari_Zone;

typedef struct PACKED HeadbuttFile_355_Safari_Zone {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_355_Safari_Zone;

typedef struct PACKED HeadbuttFile_356_Safari_Zone {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_356_Safari_Zone;

typedef struct PACKED HeadbuttFile_357_Safari_Zone {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_357_Safari_Zone;

typedef struct PACKED HeadbuttFile_358_Vermilion_City_Pokmon_Centre {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_358_Vermilion_City_Pokmon_Centre;

typedef struct PACKED HeadbuttFile_359_Vermilion_City_Pokmon_Centre_Lower {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_359_Vermilion_City_Pokmon_Centre_Lower;

typedef struct PACKED HeadbuttFile_360_Vermilion_City_Pokmart {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_360_Vermilion_City_Pokmart;

typedef struct PACKED HeadbuttFile_361_Vermilion_City_Pokmon_Centre {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_361_Vermilion_City_Pokmon_Centre;

typedef struct PACKED HeadbuttFile_362_Vermilion_City_Pokmon_Fan_Club {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_362_Vermilion_City_Pokmon_Fan_Club;

typedef struct PACKED HeadbuttFile_363_Vermilion_City_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_363_Vermilion_City_House;

typedef struct PACKED HeadbuttFile_364_Vermilion_City_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_364_Vermilion_City_House;

typedef struct PACKED HeadbuttFile_365_Vermilion_City_Gym {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_365_Vermilion_City_Gym;

typedef struct PACKED HeadbuttFile_366_Route_40_And_Frontier_Access_Gate {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_366_Route_40_And_Frontier_Access_Gate;

typedef struct PACKED HeadbuttFile_367_Olivine_City_Pokmon_Center_Lower {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_367_Olivine_City_Pokmon_Center_Lower;

typedef struct PACKED HeadbuttFile_368_Mahogany_Town_Pokmon_Center_Lower {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_368_Mahogany_Town_Pokmon_Center_Lower;

typedef struct PACKED HeadbuttFile_369_Blackthorn_Town_Pokmon_Center_Lower {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_369_Blackthorn_Town_Pokmon_Center_Lower;

typedef struct PACKED HeadbuttFile_370_Celadon_City_Department_Store_1F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_370_Celadon_City_Department_Store_1F;

typedef struct PACKED HeadbuttFile_371_Celadon_City_Department_Store_2F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_371_Celadon_City_Department_Store_2F;

typedef struct PACKED HeadbuttFile_372_Celadon_City_Department_Store_3F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_372_Celadon_City_Department_Store_3F;

typedef struct PACKED HeadbuttFile_373_Celadon_City_Department_Store_4F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_373_Celadon_City_Department_Store_4F;

typedef struct PACKED HeadbuttFile_374_Celadon_City_Department_Store_5F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_374_Celadon_City_Department_Store_5F;

typedef struct PACKED HeadbuttFile_375_Celadon_City_Department_Store_6F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_375_Celadon_City_Department_Store_6F;

typedef struct PACKED HeadbuttFile_376_Celadon_Condominiums_1F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_376_Celadon_Condominiums_1F;

typedef struct PACKED HeadbuttFile_377_Celadon_Condominiums_2F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_377_Celadon_Condominiums_2F;

typedef struct PACKED HeadbuttFile_378_Celadon_Condominiums_3F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_378_Celadon_Condominiums_3F;

typedef struct PACKED HeadbuttFile_379_Celadon_Condominiums_4F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_379_Celadon_Condominiums_4F;

typedef struct PACKED HeadbuttFile_380_Celadon_Condominiums_5F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_380_Celadon_Condominiums_5F;

typedef struct PACKED HeadbuttFile_381_Celadon_Game_Corner_Main_JP {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_381_Celadon_Game_Corner_Main_JP;

typedef struct PACKED HeadbuttFile_382_Celadon_Game_Corner_Prize_Building_JP {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_382_Celadon_Game_Corner_Prize_Building_JP;

typedef struct PACKED HeadbuttFile_383_Celadon_City_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_383_Celadon_City_House;

typedef struct PACKED HeadbuttFile_384_Ethan_Lyras_House_2F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_384_Ethan_Lyras_House_2F;

typedef struct PACKED HeadbuttFile_385_Cianwood_City_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_385_Cianwood_City_House;

typedef struct PACKED HeadbuttFile_386_Vermilion_Port {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_386_Vermilion_Port;

typedef struct PACKED HeadbuttFile_387_Vermilion_Port {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_387_Vermilion_Port;

typedef struct PACKED HeadbuttFile_388_Route_10 {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_388_Route_10;

typedef struct PACKED HeadbuttFile_389_Route_6_And_Saffron_City_Gate {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_389_Route_6_And_Saffron_City_Gate;

typedef struct PACKED HeadbuttFile_390_Route_8_And_Saffron_City_Gate {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_390_Route_8_And_Saffron_City_Gate;

typedef struct PACKED HeadbuttFile_391_Route_5_And_Saffron_City_Gate {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_391_Route_5_And_Saffron_City_Gate;

typedef struct PACKED HeadbuttFile_392_Route_15_And_Fushsia_City_Gate {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_392_Route_15_And_Fushsia_City_Gate;

typedef struct PACKED HeadbuttFile_393_Celadon_City_Pokmon_Centre {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_393_Celadon_City_Pokmon_Centre;

typedef struct PACKED HeadbuttFile_394_Celadon_City_Pokmon_Centre_Lower {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_394_Celadon_City_Pokmon_Centre_Lower;

typedef struct PACKED HeadbuttFile_395_Celadon_City_Gym {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_395_Celadon_City_Gym;

typedef struct PACKED HeadbuttFile_396_Mahogany_Town_Gym_2nd_Room {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_396_Mahogany_Town_Gym_2nd_Room;

typedef struct PACKED HeadbuttFile_397_Mahogany_Town_Gym_1st_Room {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_397_Mahogany_Town_Gym_1st_Room;

typedef struct PACKED HeadbuttFile_398_Saffron_City_Fighting_Dojo {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_398_Saffron_City_Fighting_Dojo;

typedef struct PACKED HeadbuttFile_399_Saffron_City_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_399_Saffron_City_House;

typedef struct PACKED HeadbuttFile_400_Saffron_City_Magnet_Train_Station {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_400_Saffron_City_Magnet_Train_Station;

typedef struct PACKED HeadbuttFile_401_Saffron_City_Magnet_Train_Station {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_401_Saffron_City_Magnet_Train_Station;

typedef struct PACKED HeadbuttFile_402_Saffron_City_Magnet_Train_Station {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_402_Saffron_City_Magnet_Train_Station;

typedef struct PACKED HeadbuttFile_403_ROTOMs_Room {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_403_ROTOMs_Room;

typedef struct PACKED HeadbuttFile_404_Saffron_City_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_404_Saffron_City_House;

typedef struct PACKED HeadbuttFile_405_Saffron_City_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_405_Saffron_City_House;

typedef struct PACKED HeadbuttFile_406_Saffron_City_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_406_Saffron_City_House;

typedef struct PACKED HeadbuttFile_407_Saffron_City_Pokmon_Center {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_407_Saffron_City_Pokmon_Center;

typedef struct PACKED HeadbuttFile_408_Saffron_City_Pokmon_Center_Lower {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_408_Saffron_City_Pokmon_Center_Lower;

typedef struct PACKED HeadbuttFile_409_Saffron_City_Pokmart {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_409_Saffron_City_Pokmart;

typedef struct PACKED HeadbuttFile_410_Saffron_City_Gym {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_410_Saffron_City_Gym;

typedef struct PACKED HeadbuttFile_411_Frontier_Access {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_411_Frontier_Access;

typedef struct PACKED HeadbuttFile_412_Global_Terminal_2F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_412_Global_Terminal_2F;

typedef struct PACKED HeadbuttFile_413_Global_Terminal_3F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_413_Global_Terminal_3F;

typedef struct PACKED HeadbuttFile_414_Route_2 {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[13][6];
} HeadbuttFile_414_Route_2;

typedef struct PACKED HeadbuttFile_415_Route_16_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_415_Route_16_House;

typedef struct PACKED HeadbuttFile_416_Route_20_Unused {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_416_Route_20_Unused;

typedef struct PACKED HeadbuttFile_417_Route_2 {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_417_Route_2;

typedef struct PACKED HeadbuttFile_418_Route_2_And_Pewter_City_Gate {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_418_Route_2_And_Pewter_City_Gate;

typedef struct PACKED HeadbuttFile_419_Route_2_And_Viridian_City_Gate {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_419_Route_2_And_Viridian_City_Gate;

typedef struct PACKED HeadbuttFile_420_Route_2_Gate {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_420_Route_2_Gate;

typedef struct PACKED HeadbuttFile_421_Route_16_Gate {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_421_Route_16_Gate;

typedef struct PACKED HeadbuttFile_422_Route_16 {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[5][6];
} HeadbuttFile_422_Route_16;

typedef struct PACKED HeadbuttFile_423_Route_18_Gate {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_423_Route_18_Gate;

typedef struct PACKED HeadbuttFile_424_Route_19_And_Fushsia_City_Gate {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_424_Route_19_And_Fushsia_City_Gate;

typedef struct PACKED HeadbuttFile_425_Route_11_And_Route_12_Gate {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_425_Route_11_And_Route_12_Gate;

typedef struct PACKED HeadbuttFile_426_Cerulean_City_Pokmart {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_426_Cerulean_City_Pokmart;

typedef struct PACKED HeadbuttFile_427_Cerulean_City_Gym {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_427_Cerulean_City_Gym;

typedef struct PACKED HeadbuttFile_428_Cerulean_City_Pokmon_Centre {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_428_Cerulean_City_Pokmon_Centre;

typedef struct PACKED HeadbuttFile_429_Cerulean_City_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_429_Cerulean_City_House;

typedef struct PACKED HeadbuttFile_430_Cerulean_City_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_430_Cerulean_City_House;

typedef struct PACKED HeadbuttFile_431_Cerulean_City_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_431_Cerulean_City_House;

typedef struct PACKED HeadbuttFile_432_Cerulean_City_Bike_Shop {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_432_Cerulean_City_Bike_Shop;

typedef struct PACKED HeadbuttFile_433_Lavender_Town_Pokmart {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_433_Lavender_Town_Pokmart;

typedef struct PACKED HeadbuttFile_434_Lavender_Town_Pokmon_Centre {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_434_Lavender_Town_Pokmon_Centre;

typedef struct PACKED HeadbuttFile_435_Lavender_Town_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_435_Lavender_Town_House;

typedef struct PACKED HeadbuttFile_436_Lavender_Town_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_436_Lavender_Town_House;

typedef struct PACKED HeadbuttFile_437_Lavender_Town_Name_Rater {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_437_Lavender_Town_Name_Rater;

typedef struct PACKED HeadbuttFile_438_House_of_Memories {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_438_House_of_Memories;

typedef struct PACKED HeadbuttFile_439_Lavender_Town_Radio_Tower {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_439_Lavender_Town_Radio_Tower;

typedef struct PACKED HeadbuttFile_440_Sea_Cottage {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_440_Sea_Cottage;

typedef struct PACKED HeadbuttFile_441_Goldenrod_City_Elevator {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_441_Goldenrod_City_Elevator;

typedef struct PACKED HeadbuttFile_442_Celadon_City_Elevator {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_442_Celadon_City_Elevator;

typedef struct PACKED HeadbuttFile_443_Celadon_City_Elevator {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_443_Celadon_City_Elevator;

typedef struct PACKED HeadbuttFile_444_Celadon_City_Elevator {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_444_Celadon_City_Elevator;

typedef struct PACKED HeadbuttFile_445_Saffron_City_Elevator {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_445_Saffron_City_Elevator;

typedef struct PACKED HeadbuttFile_446_Lighthouse_Elevator {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_446_Lighthouse_Elevator;

typedef struct PACKED HeadbuttFile_447_Radio_Tower_Elevator {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_447_Radio_Tower_Elevator;

typedef struct PACKED HeadbuttFile_448_Mt_Moon_Entrance {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_448_Mt_Moon_Entrance;

typedef struct PACKED HeadbuttFile_449_Mt_Moon_Square {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_449_Mt_Moon_Square;

typedef struct PACKED HeadbuttFile_450_Cerulean_Cave_2F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_450_Cerulean_Cave_2F;

typedef struct PACKED HeadbuttFile_451_Cerulean_Cave_B1F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_451_Cerulean_Cave_B1F;

typedef struct PACKED HeadbuttFile_452_Rock_Tunnel_B1F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_452_Rock_Tunnel_B1F;

typedef struct PACKED HeadbuttFile_453_Seafoam_Islands_B1F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_453_Seafoam_Islands_B1F;

typedef struct PACKED HeadbuttFile_454_Seafoam_Islands_B2F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_454_Seafoam_Islands_B2F;

typedef struct PACKED HeadbuttFile_455_Seafoam_Islands_B3F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_455_Seafoam_Islands_B3F;

typedef struct PACKED HeadbuttFile_456_Seafoam_Islands_B4F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_456_Seafoam_Islands_B4F;

typedef struct PACKED HeadbuttFile_457_Cinnabar_Gym {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_457_Cinnabar_Gym;

typedef struct PACKED HeadbuttFile_458_Cinnabar_Gym {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_458_Cinnabar_Gym;

typedef struct PACKED HeadbuttFile_459_Mt_Silver_Cave_Upper_Mountainside {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_459_Mt_Silver_Cave_Upper_Mountainside;

typedef struct PACKED HeadbuttFile_460_Mt_Silver_Cave_Lower_Mountainside {
    u16 normalTreeCount;
    u16 specialTreeCount;
    HeadbuttEncounterSlot normalSlots[12];
    HeadbuttEncounterSlot specialSlots[6];
    HeadbuttTreeCoord treeCoords[3][6];
} HeadbuttFile_460_Mt_Silver_Cave_Lower_Mountainside;

typedef struct PACKED HeadbuttFile_461_Mt_Silver_Cave_Expert_Belt_Chamber {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_461_Mt_Silver_Cave_Expert_Belt_Chamber;

typedef struct PACKED HeadbuttFile_462_Mt_Silver_Cave_Moltres_Chamber {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_462_Mt_Silver_Cave_Moltres_Chamber;

typedef struct PACKED HeadbuttFile_463_Mt_Silver_Cave_2F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_463_Mt_Silver_Cave_2F;

typedef struct PACKED HeadbuttFile_464_Mt_Silver_Cave_3F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_464_Mt_Silver_Cave_3F;

typedef struct PACKED HeadbuttFile_465_Mt_Silver_Cave_Summit {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_465_Mt_Silver_Cave_Summit;

typedef struct PACKED HeadbuttFile_466_Route_10_Pokmon_Centre {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_466_Route_10_Pokmon_Centre;

typedef struct PACKED HeadbuttFile_467_Power_Plant {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_467_Power_Plant;

typedef struct PACKED HeadbuttFile_468_Underground_Path {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_468_Underground_Path;

typedef struct PACKED HeadbuttFile_469_Route_5_Underground_Path_Entrance {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_469_Route_5_Underground_Path_Entrance;

typedef struct PACKED HeadbuttFile_470_Route_6_Underground_Path_Entrance {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_470_Route_6_Underground_Path_Entrance;

typedef struct PACKED HeadbuttFile_471_Pewter_Museum_of_Science {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_471_Pewter_Museum_of_Science;

typedef struct PACKED HeadbuttFile_472_Pewter_City_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_472_Pewter_City_House;

typedef struct PACKED HeadbuttFile_473_Pewter_City_Gym {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_473_Pewter_City_Gym;

typedef struct PACKED HeadbuttFile_474_Pewter_City_Pokmart {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_474_Pewter_City_Pokmart;

typedef struct PACKED HeadbuttFile_475_Pewter_City_Pokmon_Centre {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_475_Pewter_City_Pokmon_Centre;

typedef struct PACKED HeadbuttFile_476_Pewter_City_Pokmon_Centre_Lower {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_476_Pewter_City_Pokmon_Centre_Lower;

typedef struct PACKED HeadbuttFile_477_Pewter_City_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_477_Pewter_City_House;

typedef struct PACKED HeadbuttFile_478_Fushsia_City_Pokmart {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_478_Fushsia_City_Pokmart;

typedef struct PACKED HeadbuttFile_479_Pal_Park_Inside {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_479_Pal_Park_Inside;

typedef struct PACKED HeadbuttFile_480_Fushsia_City_Gym {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_480_Fushsia_City_Gym;

typedef struct PACKED HeadbuttFile_481_Fushsia_City_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_481_Fushsia_City_House;

typedef struct PACKED HeadbuttFile_482_Fushsia_City_Pokmon_Centre {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_482_Fushsia_City_Pokmon_Centre;

typedef struct PACKED HeadbuttFile_483_Fushsia_City_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_483_Fushsia_City_House;

typedef struct PACKED HeadbuttFile_484_Route_10_Pokmon_Centre_Lower {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_484_Route_10_Pokmon_Centre_Lower;

typedef struct PACKED HeadbuttFile_485_Fuchsia_City_Pokmon_Centre_Lower {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_485_Fuchsia_City_Pokmon_Centre_Lower;

typedef struct PACKED HeadbuttFile_486_Whirl_Islands_Lugias_Room {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_486_Whirl_Islands_Lugias_Room;

typedef struct PACKED HeadbuttFile_487_National_Park_Bug_Catching_Contest {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_487_National_Park_Bug_Catching_Contest;

typedef struct PACKED HeadbuttFile_488_National_Park_Bug_Catching_Contest_National_Dex {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_488_National_Park_Bug_Catching_Contest_National_Dex;

typedef struct PACKED HeadbuttFile_489_Power_Plant {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_489_Power_Plant;

typedef struct PACKED HeadbuttFile_490_Ruins_of_Alph_Underground_Hall {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_490_Ruins_of_Alph_Underground_Hall;

typedef struct PACKED HeadbuttFile_491_Ruins_of_Alph_Hall_Entrance {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_491_Ruins_of_Alph_Hall_Entrance;

typedef struct PACKED HeadbuttFile_492_Ruins_of_Alph_Underground_Hall {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_492_Ruins_of_Alph_Underground_Hall;

typedef struct PACKED HeadbuttFile_493_Route_7_And_Saffron_City_Gate {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_493_Route_7_And_Saffron_City_Gate;

typedef struct PACKED HeadbuttFile_494_Lavender_Town_Pokmon_Centre_Lower {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_494_Lavender_Town_Pokmon_Centre_Lower;

typedef struct PACKED HeadbuttFile_495_Cerulean_City_Pokmon_Centre_Lower {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_495_Cerulean_City_Pokmon_Centre_Lower;

typedef struct PACKED HeadbuttFile_496_Viridian_City_Gym {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_496_Viridian_City_Gym;

typedef struct PACKED HeadbuttFile_497_Viridian_City_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_497_Viridian_City_House;

typedef struct PACKED HeadbuttFile_498_Viridian_City_Trainer_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_498_Viridian_City_Trainer_House;

typedef struct PACKED HeadbuttFile_499_Viridian_City_Trainer_House_2F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_499_Viridian_City_Trainer_House_2F;

typedef struct PACKED HeadbuttFile_500_Viridian_City_Pokmart {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_500_Viridian_City_Pokmart;

typedef struct PACKED HeadbuttFile_501_Viridian_City_Pokmon_Centre {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_501_Viridian_City_Pokmon_Centre;

typedef struct PACKED HeadbuttFile_502_Viridian_City_Pokmon_Centre_Lower {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_502_Viridian_City_Pokmon_Centre_Lower;

typedef struct PACKED HeadbuttFile_503_Pallet_Town_Reds_House_1F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_503_Pallet_Town_Reds_House_1F;

typedef struct PACKED HeadbuttFile_504_Pallet_Town_Blues_House_1F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_504_Pallet_Town_Blues_House_1F;

typedef struct PACKED HeadbuttFile_505_Oaks_Lab {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_505_Oaks_Lab;

typedef struct PACKED HeadbuttFile_506_Pallet_Town_Reds_House_2F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_506_Pallet_Town_Reds_House_2F;

typedef struct PACKED HeadbuttFile_507_Pallet_Town_Blues_House_2F {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_507_Pallet_Town_Blues_House_2F;

typedef struct PACKED HeadbuttFile_508_Cinnabar_Island_Pokmon_Centre {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_508_Cinnabar_Island_Pokmon_Centre;

typedef struct PACKED HeadbuttFile_509_Cinnabar_Island_Pokmon_Centre_Lower {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_509_Cinnabar_Island_Pokmon_Centre_Lower;

typedef struct PACKED HeadbuttFile_510_Route_28_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_510_Route_28_House;

typedef struct PACKED HeadbuttFile_511_Route_3_Pokmon_Centre {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_511_Route_3_Pokmon_Centre;

typedef struct PACKED HeadbuttFile_512_Route_3_Pokmon_Centre_Lower {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_512_Route_3_Pokmon_Centre_Lower;

typedef struct PACKED HeadbuttFile_513_Mt_Moon_Square {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_513_Mt_Moon_Square;

typedef struct PACKED HeadbuttFile_514_Mt_Silver_Pokmon_Centre {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_514_Mt_Silver_Pokmon_Centre;

typedef struct PACKED HeadbuttFile_515_Mt_Silver_Pokmon_Centre_Lower {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_515_Mt_Silver_Pokmon_Centre_Lower;

typedef struct PACKED HeadbuttFile_516_HIROBA {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_516_HIROBA;

typedef struct PACKED HeadbuttFile_517_Route_5_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_517_Route_5_House;

typedef struct PACKED HeadbuttFile_518_Mt_Moon_Square_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_518_Mt_Moon_Square_House;

typedef struct PACKED HeadbuttFile_519_Goldenrod_City_Magnet_Train_Station {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_519_Goldenrod_City_Magnet_Train_Station;

typedef struct PACKED HeadbuttFile_520_Saffron_City_Magnet_Train_Station {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_520_Saffron_City_Magnet_Train_Station;

typedef struct PACKED HeadbuttFile_521_Sinjoh_Ruins_Outside {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_521_Sinjoh_Ruins_Outside;

typedef struct PACKED HeadbuttFile_522_Sinjoh_Ruins_Mystri_Stage {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_522_Sinjoh_Ruins_Mystri_Stage;

typedef struct PACKED HeadbuttFile_523_Sinjoh_Ruins_Cabin {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_523_Sinjoh_Ruins_Cabin;

typedef struct PACKED HeadbuttFile_524_Embedded_Tower_Groudon {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_524_Embedded_Tower_Groudon;

typedef struct PACKED HeadbuttFile_525_Embedded_Tower_Kyogre {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_525_Embedded_Tower_Kyogre;

typedef struct PACKED HeadbuttFile_526_Embedded_Tower_Rayquaza {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_526_Embedded_Tower_Rayquaza;

typedef struct PACKED HeadbuttFile_527_Route_1_And_Viridian_City_Gate {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_527_Route_1_And_Viridian_City_Gate;

typedef struct PACKED HeadbuttFile_528_Frontier_Access_Pokmon_Center {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_528_Frontier_Access_Pokmon_Center;

typedef struct PACKED HeadbuttFile_529_Frontier_Access_Pokmon_Center_Lower {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_529_Frontier_Access_Pokmon_Center_Lower;

typedef struct PACKED HeadbuttFile_530_Frontier_Access_Pokmart {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_530_Frontier_Access_Pokmart;

typedef struct PACKED HeadbuttFile_531_Frontier_Access_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_531_Frontier_Access_House;

typedef struct PACKED HeadbuttFile_532_Underground_Path {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_532_Underground_Path;

typedef struct PACKED HeadbuttFile_533_Route_12_House {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_533_Route_12_House;

typedef struct PACKED HeadbuttFile_534_Safari_Zone_Gate_Pokmon_Center {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_534_Safari_Zone_Gate_Pokmon_Center;

typedef struct PACKED HeadbuttFile_535_Safari_Zone_Gate_Pokmon_Centre_Lower {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_535_Safari_Zone_Gate_Pokmon_Centre_Lower;

typedef struct PACKED HeadbuttFile_536_Goldenrod_City_Game_Corner {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_536_Goldenrod_City_Game_Corner;

typedef struct PACKED HeadbuttFile_537_Celadon_City_Game_Corner {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_537_Celadon_City_Game_Corner;

typedef struct PACKED HeadbuttFile_538_Mystery_Zone {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_538_Mystery_Zone;

typedef struct PACKED HeadbuttFile_539_Pokmon_League_Pokmon_Centre_Lower {
    u16 normalTreeCount;
    u16 specialTreeCount;
} HeadbuttFile_539_Pokmon_League_Pokmon_Centre_Lower;


typedef struct PACKED HeadbuttArchiveData {
    HeadbuttFile_000_EVERYWHERE everywhere;
    HeadbuttFile_001_NOTHING nothing;
    HeadbuttFile_002_Union_Room unionRoom;
    HeadbuttFile_003_UG ug;
    HeadbuttFile_004_DIRECT2 direct2;
    HeadbuttFile_005_DIRECT4 direct4;
    HeadbuttFile_006_Bellchime_Trail bellchimeTrail;
    HeadbuttFile_007_Burned_Tower_1F burnedTower1F;
    HeadbuttFile_008_Ruins_Of_Alph_Inside ruinsOfAlphInside;
    HeadbuttFile_009_Route_1 route1;
    HeadbuttFile_010_Route_2 route2;
    HeadbuttFile_011_Route_3 route3;
    HeadbuttFile_012_Route_4 route4;
    HeadbuttFile_013_Route_5 route5;
    HeadbuttFile_014_Route_6 route6;
    HeadbuttFile_015_Route_7 route7;
    HeadbuttFile_016_Route_8 route8;
    HeadbuttFile_017_Route_9 route9;
    HeadbuttFile_018_Route_10 route10;
    HeadbuttFile_019_Route_11 route11;
    HeadbuttFile_020_Route_12 route12;
    HeadbuttFile_021_Route_13 route13;
    HeadbuttFile_022_Route_14 route14;
    HeadbuttFile_023_Route_15 route15;
    HeadbuttFile_024_Route_16 route16;
    HeadbuttFile_025_Route_17 route17;
    HeadbuttFile_026_Route_18 route18;
    HeadbuttFile_027_Route_22 route22;
    HeadbuttFile_028_Route_24 route24;
    HeadbuttFile_029_Route_25 route25;
    HeadbuttFile_030_Route_26 route26;
    HeadbuttFile_031_Route_27 route27;
    HeadbuttFile_032_Route_28 route28;
    HeadbuttFile_033_Route_29 route29;
    HeadbuttFile_034_Route_30 route30;
    HeadbuttFile_035_Route_31 route31;
    HeadbuttFile_036_Route_32 route32;
    HeadbuttFile_037_Route_33 route33;
    HeadbuttFile_038_Route_34 route34;
    HeadbuttFile_039_Route_35 route35;
    HeadbuttFile_040_Route_36 route36;
    HeadbuttFile_041_Route_37 route37;
    HeadbuttFile_042_Route_38 route38;
    HeadbuttFile_043_Route_39 route39;
    HeadbuttFile_044_Route_42 route42;
    HeadbuttFile_045_Route_43 route43;
    HeadbuttFile_046_Route_44 route44;
    HeadbuttFile_047_Route_45 route45;
    HeadbuttFile_048_Route_46 route46;
    HeadbuttFile_049_Pallet_Town palletTown;
    HeadbuttFile_050_Viridian_City viridianCity;
    HeadbuttFile_051_Pewter_City pewterCity;
    HeadbuttFile_052_Cerulean_City ceruleanCity;
    HeadbuttFile_053_Lavender_Town lavenderTown;
    HeadbuttFile_054_Vermilion_City vermilionCity;
    HeadbuttFile_055_Celadon_City celadonCity;
    HeadbuttFile_056_Fuchsia_City fuchsiaCity;
    HeadbuttFile_057_Cinnabar_Island cinnabarIsland;
    HeadbuttFile_058_Indigo_Plateau indigoPlateau;
    HeadbuttFile_059_Saffron_City saffronCity;
    HeadbuttFile_060_New_Bark_Town newBarkTown;
    HeadbuttFile_061_Elms_Lab_1F elmsLab1F;
    HeadbuttFile_062_Elms_Lab_2F elmsLab2F;
    HeadbuttFile_063_Moms_House_1F momsHouse1F;
    HeadbuttFile_064_Moms_House_2F momsHouse2F;
    HeadbuttFile_065_New_Bark_Town_House newBarkTownHouse;
    HeadbuttFile_066_Ethan_Lyras_House_1F ethanLyrasHouse1F;
    HeadbuttFile_067_Cherrygrove_City cherrygroveCity;
    HeadbuttFile_068_Cherrygrove_City_Pokmart cherrygroveCityPokmart;
    HeadbuttFile_069_Cherrygrove_City_Pokmon_Centre cherrygroveCityPokemonCentre;
    HeadbuttFile_070_Cherrygrove_City_House cherrygroveCityHouse;
    HeadbuttFile_071_Cherrygrove_City_House cherrygroveCityHouse071;
    HeadbuttFile_072_Cherrygrove_City_House cherrygroveCityHouse072;
    HeadbuttFile_073_Violet_City violetCity;
    HeadbuttFile_074_Azalea_Town azaleaTown;
    HeadbuttFile_075_Cianwood_City cianwoodCity;
    HeadbuttFile_076_Goldenrod_City goldenrodCity;
    HeadbuttFile_077_Olivine_City olivineCity;
    HeadbuttFile_078_Ecruteak_City ecruteakCity;
    HeadbuttFile_079_Ecruteak_City_Pokmart ecruteakCityPokmart;
    HeadbuttFile_080_Ecruteak_City_Gym ecruteakCityGym;
    HeadbuttFile_081_Ecruteak_Pokmon_Centre ecruteakPokemonCentre;
    HeadbuttFile_082_Jubilife_City_Unused jubilifeCityUnused;
    HeadbuttFile_083_Barrier_Station_to_Bell_Tower barrierStationToBellTower;
    HeadbuttFile_084_Ecruteak_City_House ecruteakCityHouse;
    HeadbuttFile_085_Ecruteak_City_House ecruteakCityHouse085;
    HeadbuttFile_086_Ecruteak_Dance_Theatre ecruteakDanceTheatre;
    HeadbuttFile_087_Mahogany_Town mahoganyTown;
    HeadbuttFile_088_Lake_of_Rage lakeOfRage;
    HeadbuttFile_089_Blackthorn_City blackthornCity;
    HeadbuttFile_090_Mt_Silver mtSilver;
    HeadbuttFile_091_Route_19 route19;
    HeadbuttFile_092_Route_20 route20;
    HeadbuttFile_093_Route_21 route21;
    HeadbuttFile_094_Route_40 route40;
    HeadbuttFile_095_Route_41 route41;
    HeadbuttFile_096_National_Park nationalPark;
    HeadbuttFile_097_Route_31_And_Violet_City_Gate route31AndVioletCityGate;
    HeadbuttFile_098_Route_32_And_Ruins_Of_Alph_Gate route32AndRuinsOfAlphGate;
    HeadbuttFile_099_Union_Cave_1F unionCave1F;
    HeadbuttFile_100_Azalea_Town_And_Ilex_Forest_Gate azaleaTownAndIlexForestGate;
    HeadbuttFile_101_Goldenrod_City_And_Route_35_Gate goldenrodCityAndRoute35Gate;
    HeadbuttFile_102_Route_35_And_National_Park_Gate route35AndNationalParkGate;
    HeadbuttFile_103_Ruins_Of_Alph_And_Route_36_Gate ruinsOfAlphAndRoute36Gate;
    HeadbuttFile_104_National_Park_And_Route_36_Gate nationalParkAndRoute36Gate;
    HeadbuttFile_105_Jubilife_City_Unused jubilifeCityUnused105;
    HeadbuttFile_106_Digletts_Cave diglettsCave;
    HeadbuttFile_107_Mt_Moon mtMoon;
    HeadbuttFile_108_Rock_Tunnel_1F rockTunnel1F;
    HeadbuttFile_109_Pal_Park palPark;
    HeadbuttFile_110_Sprout_Tower_1F sproutTower1F;
    HeadbuttFile_111_Bell_Tower_1F bellTower1F;
    HeadbuttFile_112_Radio_Tower_1F radioTower1F;
    HeadbuttFile_113_Ruins_Of_Alph_Outside ruinsOfAlphOutside;
    HeadbuttFile_114_Slowpoke_Well_Entrance slowpokeWellEntrance;
    HeadbuttFile_115_Olivine_Lighthouse_1F olivineLighthouse1F;
    HeadbuttFile_116_Mahogany_Town_Souvenir_Shop mahoganyTownSouvenirShop;
    HeadbuttFile_117_Ilex_Forest ilexForest;
    HeadbuttFile_118_Goldenrod_Tunnel goldenrodTunnel;
    HeadbuttFile_119_Mt_Mortar_1F mtMortar1F;
    HeadbuttFile_120_Ice_Path_1F icePath1F;
    HeadbuttFile_121_Whirl_Islands whirlIslands;
    HeadbuttFile_122_Mt_Silver_Cave mtSilverCave;
    HeadbuttFile_123_Dark_Cave_Route_45_entrance darkCaveRoute45Entrance;
    HeadbuttFile_124_Victory_Road_1F victoryRoad1F;
    HeadbuttFile_125_Dragons_Den_Entrance dragonsDenEntrance;
    HeadbuttFile_126_Tohjo_Falls tohjoFalls;
    HeadbuttFile_127_Route_30_House route30House;
    HeadbuttFile_128_Ecruteak_City_Union_Room ecruteakCityUnionRoom;
    HeadbuttFile_129_Ecruteak_City_Union_Room ecruteakCityUnionRoom129;
    HeadbuttFile_130_Ecruteak_City_Union_Room ecruteakCityUnionRoom130;
    HeadbuttFile_131_Ecruteak_City_Pokmon_Centre_Lower ecruteakCityPokemonCentreLower;
    HeadbuttFile_132_Ecruteak_City_And_Route_42_Gate ecruteakCityAndRoute42Gate;
    HeadbuttFile_133_Mahogany_Town_House mahoganyTownHouse;
    HeadbuttFile_134_Route_29_And_Route_46_Gate route29AndRoute46Gate;
    HeadbuttFile_135_Violet_City_Gym violetCityGym;
    HeadbuttFile_136_Azalea_Gym_Entrance azaleaGymEntrance;
    HeadbuttFile_137_Goldenrod_City_Gym goldenrodCityGym;
    HeadbuttFile_138_Olivine_City_Gym olivineCityGym;
    HeadbuttFile_139_Cianwood_City_Gym cianwoodCityGym;
    HeadbuttFile_140_Mahogany_City_Gym_3rd_Room mahoganyCityGym3rdRoom;
    HeadbuttFile_141_Blackthorn_City_Gym blackthornCityGym;
    HeadbuttFile_142_Route_43_Gate route43Gate;
    HeadbuttFile_143_Mr_Pokmons_House mrPokemonsHouse;
    HeadbuttFile_144_Cherrygrove_City_Pokmon_Centre_Lower cherrygroveCityPokemonCentreLower;
    HeadbuttFile_145_Cerulean_Cave_1F ceruleanCave1F;
    HeadbuttFile_146_Seafoam_Islands_1F seafoamIslands1F;
    HeadbuttFile_147_Viridian_Forest viridianForest;
    HeadbuttFile_148_Power_Plant_Unused powerPlantUnused;
    HeadbuttFile_149_Route_36_And_Violet_City_Inbetween route36AndVioletCityInbetween;
    HeadbuttFile_150_Route_35_And_Pokathlon_Dome_Inbetween route35AndPokathlonDomeInbetween;
    HeadbuttFile_151_Route_47 route47;
    HeadbuttFile_152_Route_48 route48;
    HeadbuttFile_153_Union_Cave_B1F unionCaveB1F;
    HeadbuttFile_154_Union_Cave_B2F unionCaveB2F;
    HeadbuttFile_155_Sprout_Tower_2F sproutTower2F;
    HeadbuttFile_156_Sprout_Tower_3F sproutTower3F;
    HeadbuttFile_157_Violet_City_Pokmart violetCityPokmart;
    HeadbuttFile_158_Violet_City_Pokmon_Centre violetCityPokemonCentre;
    HeadbuttFile_159_Violet_City_Pokmon_School violetCityPokemonSchool;
    HeadbuttFile_160_Violet_City_House violetCityHouse;
    HeadbuttFile_161_Jubilife_City_Unused jubilifeCityUnused161;
    HeadbuttFile_162_Violet_City_House violetCityHouse162;
    HeadbuttFile_163_Azalea_Town_Charcoal_Kiln azaleaTownCharcoalKiln;
    HeadbuttFile_164_Azalea_Town_Kurts_House azaleaTownKurtsHouse;
    HeadbuttFile_165_Azalea_Town_Pokmart azaleaTownPokmart;
    HeadbuttFile_166_Azalea_Town_Pokmon_Centre azaleaTownPokemonCentre;
    HeadbuttFile_167_Violet_City_Pokmon_Centre_Lower violetCityPokemonCentreLower;
    HeadbuttFile_168_Azalea_Town_Pokmon_Centre_Lower azaleaTownPokemonCentreLower;
    HeadbuttFile_169_Route_32_Pokmon_Centre route32PokemonCentre;
    HeadbuttFile_170_Route_32_Pokmon_Centre_Lower route32PokemonCentreLower;
    HeadbuttFile_171_Ilex_Forest_And_Route_34_Gate ilexForestAndRoute34Gate;
    HeadbuttFile_172_Ecruteak_And_Route_38_Gate ecruteakAndRoute38Gate;
    HeadbuttFile_173_Safari_Zone_Gate_Inside safariZoneGateInside;
    HeadbuttFile_174_Safari_Zone_Gate_Outside safariZoneGateOutside;
    HeadbuttFile_175_Jubilife_City_Unused jubilifeCityUnused175;
    HeadbuttFile_176_Dark_Cave_Route_31_entrance darkCaveRoute31Entrance;
    HeadbuttFile_177_Slowpoke_Well_1F slowpokeWell1F;
    HeadbuttFile_178_Victory_Road_2F victoryRoad2F;
    HeadbuttFile_179_Victory_Road_3F victoryRoad3F;
    HeadbuttFile_180_Azalea_Town_Gym azaleaTownGym;
    HeadbuttFile_181_Slowpoke_Well_B1F slowpokeWellB1F;
    HeadbuttFile_182_Goldenrod_City_Bike_Store goldenrodCityBikeStore;
    HeadbuttFile_183_Goldenrod_City_Game_Corner_JAP goldenrodCityGameCornerJAP;
    HeadbuttFile_184_Goldenrod_City_Flower_Shop goldenrodCityFlowerShop;
    HeadbuttFile_185_Goldenrod_City_Pokmon_Centre goldenrodCityPokemonCentre;
    HeadbuttFile_186_Goldenrod_Radio_Tower_2F goldenrodRadioTower2F;
    HeadbuttFile_187_Goldenrod_Radio_Tower_3F goldenrodRadioTower3F;
    HeadbuttFile_188_Goldenrod_Radio_Tower_4F goldenrodRadioTower4F;
    HeadbuttFile_189_Goldenrod_Radio_Tower_5F goldenrodRadioTower5F;
    HeadbuttFile_190_Goldenrod_Radio_Tower_Observation_Deck goldenrodRadioTowerObservationDeck;
    HeadbuttFile_191_Goldenrod_Department_Store_1F goldenrodDepartmentStore1F;
    HeadbuttFile_192_Goldenrod_Department_Store_2F goldenrodDepartmentStore2F;
    HeadbuttFile_193_Goldenrod_Department_Store_3F goldenrodDepartmentStore3F;
    HeadbuttFile_194_Goldenrod_Department_Store_4F goldenrodDepartmentStore4F;
    HeadbuttFile_195_Goldenrod_Department_Store_5F goldenrodDepartmentStore5F;
    HeadbuttFile_196_Goldenrod_Department_Store_6F goldenrodDepartmentStore6F;
    HeadbuttFile_197_Goldenrod_City_Magnet_Train_Station goldenrodCityMagnetTrainStation;
    HeadbuttFile_198_Goldenrod_City_Magnet_Train_Station goldenrodCityMagnetTrainStation198;
    HeadbuttFile_199_Goldenrod_Tunnel goldenrodTunnel199;
    HeadbuttFile_200_Goldenrod_Department_Store_Basement goldenrodDepartmentStoreBasement;
    HeadbuttFile_201_Goldenrod_Tunnel_B2F goldenrodTunnelB2F;
    HeadbuttFile_202_Goldenrod_Tunnel_Warehouse goldenrodTunnelWarehouse;
    HeadbuttFile_203_Goldenrod_City_House goldenrodCityHouse;
    HeadbuttFile_204_Goldenrod_City_House goldenrodCityHouse204;
    HeadbuttFile_205_Goldenrod_City_House goldenrodCityHouse205;
    HeadbuttFile_206_Goldenrod_City_Name_Rater goldenrodCityNameRater;
    HeadbuttFile_207_Global_Terminal globalTerminal;
    HeadbuttFile_208_Goldenrod_City_House_1F goldenrodCityHouse1F;
    HeadbuttFile_209_Goldenrod_City_House_2F goldenrodCityHouse2F;
    HeadbuttFile_210_Goldenrod_City_House_3F goldenrodCityHouse3F;
    HeadbuttFile_211_Goldenrod_City_House_4F goldenrodCityHouse4F;
    HeadbuttFile_212_Goldenrod_City_House_5F goldenrodCityHouse5F;
    HeadbuttFile_213_Goldenrod_City_House_6F goldenrodCityHouse6F;
    HeadbuttFile_214_Moomoo_Farm_House moomooFarmHouse;
    HeadbuttFile_215_Moomoo_Farm_Barn moomooFarmBarn;
    HeadbuttFile_216_Barrier_Station_to_Bell_Tower_And_Bellchime_Trail_Path barrierStationToBellTowerAndBellchimeTrailPath;
    HeadbuttFile_217_Burned_Tower_B1F burnedTowerB1F;
    HeadbuttFile_218_Ruins_of_Alph_Inside ruinsOfAlphInside218;
    HeadbuttFile_219_Goldenrod_City_Pokmon_Centre_Lower goldenrodCityPokemonCentreLower;
    HeadbuttFile_220_Glitter_Lighthouse_2F glitterLighthouse2F;
    HeadbuttFile_221_Glitter_Lighthouse_Exterior glitterLighthouseExterior;
    HeadbuttFile_222_Glitter_Lighthouse_3F glitterLighthouse3F;
    HeadbuttFile_223_Glitter_Lighthouse_4F glitterLighthouse4F;
    HeadbuttFile_224_Glitter_Lighthouse_5F glitterLighthouse5F;
    HeadbuttFile_225_Glitter_Lighthouse_Light_Room glitterLighthouseLightRoom;
    HeadbuttFile_226_Olivine_City_Pokmon_Centre olivineCityPokemonCentre;
    HeadbuttFile_227_Olivine_City_Pokmart olivineCityPokmart;
    HeadbuttFile_228_Olivine_City_House olivineCityHouse;
    HeadbuttFile_229_Olivine_City_House olivineCityHouse229;
    HeadbuttFile_230_Olivine_City_House olivineCityHouse230;
    HeadbuttFile_231_Olivine_City_Caf olivineCityCaf;
    HeadbuttFile_232_Cianwood_City_House cianwoodCityHouse;
    HeadbuttFile_233_Cianwood_City_Pharmacy cianwoodCityPharmacy;
    HeadbuttFile_234_Cianwood_City_House cianwoodCityHouse234;
    HeadbuttFile_235_Cianwood_City_House cianwoodCityHouse235;
    HeadbuttFile_236_Cianwood_City_Pokmon_Centre cianwoodCityPokemonCentre;
    HeadbuttFile_237_Ice_Path_B1F icePathB1F;
    HeadbuttFile_238_Ice_Path_B2F icePathB2F;
    HeadbuttFile_239_Ice_Path_B3F icePathB3F;
    HeadbuttFile_240_Olivine_City_House olivineCityHouse240;
    HeadbuttFile_241_Cianwood_City_Pokmon_Centre_Lower cianwoodCityPokemonCentreLower;
    HeadbuttFile_242_Whirl_Islands_B1F whirlIslandsB1F;
    HeadbuttFile_243_Whirl_Islands_B2F whirlIslandsB2F;
    HeadbuttFile_244_Whirl_Islands_B3F whirlIslandsB3F;
    HeadbuttFile_245_Route_43_Gate route43Gate245;
    HeadbuttFile_246_Mahogany_Town_Pokmon_Centre mahoganyTownPokemonCentre;
    HeadbuttFile_247_Team_Rocket_HQ_B1F teamRocketHQB1F;
    HeadbuttFile_248_Team_Rocket_HQ_B2F teamRocketHQB2F;
    HeadbuttFile_249_Team_Rocket_HQ_B3F teamRocketHQB3F;
    HeadbuttFile_250_Mt_Mortar_1F mtMortar1F250;
    HeadbuttFile_251_Mt_Mortar_2F mtMortar2F;
    HeadbuttFile_252_Mt_Mortar_1F mtMortar1F252;
    HeadbuttFile_253_Dragons_Den_Main dragonsDenMain;
    HeadbuttFile_254_Fight_Area fightArea;
    HeadbuttFile_255_Fight_Area fightArea255;
    HeadbuttFile_256_Fight_Area fightArea256;
    HeadbuttFile_257_Fight_Area fightArea257;
    HeadbuttFile_258_Fight_Area fightArea258;
    HeadbuttFile_259_Fight_Area fightArea259;
    HeadbuttFile_260_Fight_Area fightArea260;
    HeadbuttFile_261_Fight_Area fightArea261;
    HeadbuttFile_262_Fight_Area fightArea262;
    HeadbuttFile_263_Battle_Park battlePark;
    HeadbuttFile_264_Battle_Park battlePark264;
    HeadbuttFile_265_Battle_Tower battleTower;
    HeadbuttFile_266_Battle_Tower battleTower266;
    HeadbuttFile_267_Battle_Tower battleTower267;
    HeadbuttFile_268_Battle_Tower battleTower268;
    HeadbuttFile_269_Battle_Tower battleTower269;
    HeadbuttFile_270_Battle_Tower battleTower270;
    HeadbuttFile_271_Battle_Tower battleTower271;
    HeadbuttFile_272_Battle_Frontier battleFrontier;
    HeadbuttFile_273_Battle_Frontier battleFrontier273;
    HeadbuttFile_274_Battle_Tower battleTower274;
    HeadbuttFile_275_Battle_Factory battleFactory;
    HeadbuttFile_276_Battle_Hall battleHall;
    HeadbuttFile_277_Battle_Castle battleCastle;
    HeadbuttFile_278_Battle_Arcade battleArcade;
    HeadbuttFile_279_Cliff_Edge_Gate cliffEdgeGate;
    HeadbuttFile_280_Pokathlon_Dome_Outside pokathlonDomeOutside;
    HeadbuttFile_281_Pokathlon_Dome_Inside pokathlonDomeInside;
    HeadbuttFile_282_Pokathlon_Dome_Inside pokathlonDomeInside282;
    HeadbuttFile_283_Pokathlon_Dome_Inside pokathlonDomeInside283;
    HeadbuttFile_284_Pokathlon_Dome_Inside pokathlonDomeInside284;
    HeadbuttFile_285_Pokathlon_Dome_Inside pokathlonDomeInside285;
    HeadbuttFile_286_Pokathlon_Dome_Inside pokathlonDomeInside286;
    HeadbuttFile_287_Pokathlon_Dome_Inside pokathlonDomeInside287;
    HeadbuttFile_288_Dragons_Den_Shrine dragonsDenShrine;
    HeadbuttFile_289_Blackthorn_City_House blackthornCityHouse;
    HeadbuttFile_290_Blackthorn_City_House blackthornCityHouse290;
    HeadbuttFile_291_Blackthorn_City_House blackthornCityHouse291;
    HeadbuttFile_292_Blackthorn_City_Pokmart blackthornCityPokmart;
    HeadbuttFile_293_Blackthorn_City_Pokmon_Centre blackthornCityPokemonCentre;
    HeadbuttFile_294_Lake_of_Rage_House lakeOfRageHouse;
    HeadbuttFile_295_Lake_of_Rage_House lakeOfRageHouse295;
    HeadbuttFile_296_Route_26_House route26House;
    HeadbuttFile_297_Route_26_Week_Siblings_House route26WeekSiblingsHouse;
    HeadbuttFile_298_Tohjo_Falls_Hidden_Room tohjoFallsHiddenRoom;
    HeadbuttFile_299_Pokmon_League_Reception_Gate pokmonLeagueReceptionGate;
    HeadbuttFile_300_Pokmon_League pokmonLeague;
    HeadbuttFile_301_Pokmon_League_Wills_Room pokmonLeagueWillsRoom;
    HeadbuttFile_302_Pokmon_League_Kogas_Room pokmonLeagueKogasRoom;
    HeadbuttFile_303_Pokmon_League_Brunos_Room pokmonLeagueBrunosRoom;
    HeadbuttFile_304_Pokmon_League_Karens_Room pokmonLeagueKarensRoom;
    HeadbuttFile_305_Pokmon_League_Lances_Room pokmonLeagueLancesRoom;
    HeadbuttFile_306_Pokmon_League_Hall_of_Fame pokmonLeagueHallOfFame;
    HeadbuttFile_307_S_S_Aqua sSAqua;
    HeadbuttFile_308_S_S_Aqua sSAqua308;
    HeadbuttFile_309_S_S_Aqua sSAqua309;
    HeadbuttFile_310_S_S_Aqua sSAqua310;
    HeadbuttFile_311_S_S_Aqua sSAqua311;
    HeadbuttFile_312_Ruins_of_Alph_Entrance ruinsOfAlphEntrance;
    HeadbuttFile_313_Ruins_of_Alph_Chamber_1 ruinsOfAlphChamber1;
    HeadbuttFile_314_Ruins_of_Alph_Entrance ruinsOfAlphEntrance314;
    HeadbuttFile_315_Ruins_of_Alph_Underground_Hall ruinsOfAlphUndergroundHall;
    HeadbuttFile_316_Ruins_of_Alph_Entrance ruinsOfAlphEntrance316;
    HeadbuttFile_317_Ruins_of_Alph_Chamber_3 ruinsOfAlphChamber3;
    HeadbuttFile_318_Ruins_of_Alph_Entrance ruinsOfAlphEntrance318;
    HeadbuttFile_319_Ruins_of_Alph_Chamber_4 ruinsOfAlphChamber4;
    HeadbuttFile_320_Ruins_of_Alph_Chamber_2 ruinsOfAlphChamber2;
    HeadbuttFile_321_Ruins_of_Alph_Research_Center ruinsOfAlphResearchCenter;
    HeadbuttFile_322_Route_27_House route27House;
    HeadbuttFile_323_Ruins_of_Alph_Hall_Entrance ruinsOfAlphHallEntrance;
    HeadbuttFile_324_Ruins_of_Alph_Entrance_2 ruinsOfAlphEntrance2;
    HeadbuttFile_325_Ruins_of_Alph_Entrance_2 ruinsOfAlphEntrance2325;
    HeadbuttFile_326_Ruins_of_Alph_Entrance_2 ruinsOfAlphEntrance2326;
    HeadbuttFile_327_Ruins_of_Alph_Entrance_2 ruinsOfAlphEntrance2327;
    HeadbuttFile_328_S_S_Aqua sSAqua328;
    HeadbuttFile_329_S_S_Aqua sSAqua329;
    HeadbuttFile_330_Olivine_Port olivinePort;
    HeadbuttFile_331_Pokmon_Daycare pokmonDaycare;
    HeadbuttFile_332_Bell_Tower_2F bellTower2F;
    HeadbuttFile_333_Bell_Tower_3F bellTower3F;
    HeadbuttFile_334_Bell_Tower_4F bellTower4F;
    HeadbuttFile_335_Bell_Tower_5F bellTower5F;
    HeadbuttFile_336_Bell_Tower_6F bellTower6F;
    HeadbuttFile_337_Bell_Tower_7F bellTower7F;
    HeadbuttFile_338_Bell_Tower_8F bellTower8F;
    HeadbuttFile_339_Bell_Tower_9F bellTower9F;
    HeadbuttFile_340_Bell_Tower_Roof bellTowerRoof;
    HeadbuttFile_341_Bell_Tower_10F bellTower10F;
    HeadbuttFile_342_Cliff_Cave cliffCave;
    HeadbuttFile_343_Safari_Zone safariZone;
    HeadbuttFile_344_Safari_Zone safariZone344;
    HeadbuttFile_345_Safari_Zone safariZone345;
    HeadbuttFile_346_Safari_Zone safariZone346;
    HeadbuttFile_347_Safari_Zone safariZone347;
    HeadbuttFile_348_Safari_Zone safariZone348;
    HeadbuttFile_349_Safari_Zone safariZone349;
    HeadbuttFile_350_Safari_Zone safariZone350;
    HeadbuttFile_351_Safari_Zone safariZone351;
    HeadbuttFile_352_Safari_Zone safariZone352;
    HeadbuttFile_353_Safari_Zone safariZone353;
    HeadbuttFile_354_Safari_Zone safariZone354;
    HeadbuttFile_355_Safari_Zone safariZone355;
    HeadbuttFile_356_Safari_Zone safariZone356;
    HeadbuttFile_357_Safari_Zone safariZone357;
    HeadbuttFile_358_Vermilion_City_Pokmon_Centre vermilionCityPokemonCentre;
    HeadbuttFile_359_Vermilion_City_Pokmon_Centre_Lower vermilionCityPokemonCentreLower;
    HeadbuttFile_360_Vermilion_City_Pokmart vermilionCityPokmart;
    HeadbuttFile_361_Vermilion_City_Pokmon_Centre vermilionCityPokemonCentre361;
    HeadbuttFile_362_Vermilion_City_Pokmon_Fan_Club vermilionCityPokemonFanClub;
    HeadbuttFile_363_Vermilion_City_House vermilionCityHouse;
    HeadbuttFile_364_Vermilion_City_House vermilionCityHouse364;
    HeadbuttFile_365_Vermilion_City_Gym vermilionCityGym;
    HeadbuttFile_366_Route_40_And_Frontier_Access_Gate route40AndFrontierAccessGate;
    HeadbuttFile_367_Olivine_City_Pokmon_Center_Lower olivineCityPokemonCenterLower;
    HeadbuttFile_368_Mahogany_Town_Pokmon_Center_Lower mahoganyTownPokemonCenterLower;
    HeadbuttFile_369_Blackthorn_Town_Pokmon_Center_Lower blackthornTownPokemonCenterLower;
    HeadbuttFile_370_Celadon_City_Department_Store_1F celadonCityDepartmentStore1F;
    HeadbuttFile_371_Celadon_City_Department_Store_2F celadonCityDepartmentStore2F;
    HeadbuttFile_372_Celadon_City_Department_Store_3F celadonCityDepartmentStore3F;
    HeadbuttFile_373_Celadon_City_Department_Store_4F celadonCityDepartmentStore4F;
    HeadbuttFile_374_Celadon_City_Department_Store_5F celadonCityDepartmentStore5F;
    HeadbuttFile_375_Celadon_City_Department_Store_6F celadonCityDepartmentStore6F;
    HeadbuttFile_376_Celadon_Condominiums_1F celadonCondominiums1F;
    HeadbuttFile_377_Celadon_Condominiums_2F celadonCondominiums2F;
    HeadbuttFile_378_Celadon_Condominiums_3F celadonCondominiums3F;
    HeadbuttFile_379_Celadon_Condominiums_4F celadonCondominiums4F;
    HeadbuttFile_380_Celadon_Condominiums_5F celadonCondominiums5F;
    HeadbuttFile_381_Celadon_Game_Corner_Main_JP celadonGameCornerMainJP;
    HeadbuttFile_382_Celadon_Game_Corner_Prize_Building_JP celadonGameCornerPrizeBuildingJP;
    HeadbuttFile_383_Celadon_City_House celadonCityHouse;
    HeadbuttFile_384_Ethan_Lyras_House_2F ethanLyrasHouse2F;
    HeadbuttFile_385_Cianwood_City_House cianwoodCityHouse385;
    HeadbuttFile_386_Vermilion_Port vermilionPort;
    HeadbuttFile_387_Vermilion_Port vermilionPort387;
    HeadbuttFile_388_Route_10 route10388;
    HeadbuttFile_389_Route_6_And_Saffron_City_Gate route6AndSaffronCityGate;
    HeadbuttFile_390_Route_8_And_Saffron_City_Gate route8AndSaffronCityGate;
    HeadbuttFile_391_Route_5_And_Saffron_City_Gate route5AndSaffronCityGate;
    HeadbuttFile_392_Route_15_And_Fushsia_City_Gate route15AndFushsiaCityGate;
    HeadbuttFile_393_Celadon_City_Pokmon_Centre celadonCityPokemonCentre;
    HeadbuttFile_394_Celadon_City_Pokmon_Centre_Lower celadonCityPokemonCentreLower;
    HeadbuttFile_395_Celadon_City_Gym celadonCityGym;
    HeadbuttFile_396_Mahogany_Town_Gym_2nd_Room mahoganyTownGym2ndRoom;
    HeadbuttFile_397_Mahogany_Town_Gym_1st_Room mahoganyTownGym1stRoom;
    HeadbuttFile_398_Saffron_City_Fighting_Dojo saffronCityFightingDojo;
    HeadbuttFile_399_Saffron_City_House saffronCityHouse;
    HeadbuttFile_400_Saffron_City_Magnet_Train_Station saffronCityMagnetTrainStation;
    HeadbuttFile_401_Saffron_City_Magnet_Train_Station saffronCityMagnetTrainStation401;
    HeadbuttFile_402_Saffron_City_Magnet_Train_Station saffronCityMagnetTrainStation402;
    HeadbuttFile_403_ROTOMs_Room rotomsRoom;
    HeadbuttFile_404_Saffron_City_House saffronCityHouse404;
    HeadbuttFile_405_Saffron_City_House saffronCityHouse405;
    HeadbuttFile_406_Saffron_City_House saffronCityHouse406;
    HeadbuttFile_407_Saffron_City_Pokmon_Center saffronCityPokemonCenter;
    HeadbuttFile_408_Saffron_City_Pokmon_Center_Lower saffronCityPokemonCenterLower;
    HeadbuttFile_409_Saffron_City_Pokmart saffronCityPokmart;
    HeadbuttFile_410_Saffron_City_Gym saffronCityGym;
    HeadbuttFile_411_Frontier_Access frontierAccess;
    HeadbuttFile_412_Global_Terminal_2F globalTerminal2F;
    HeadbuttFile_413_Global_Terminal_3F globalTerminal3F;
    HeadbuttFile_414_Route_2 route2414;
    HeadbuttFile_415_Route_16_House route16House;
    HeadbuttFile_416_Route_20_Unused route20Unused;
    HeadbuttFile_417_Route_2 route2417;
    HeadbuttFile_418_Route_2_And_Pewter_City_Gate route2AndPewterCityGate;
    HeadbuttFile_419_Route_2_And_Viridian_City_Gate route2AndViridianCityGate;
    HeadbuttFile_420_Route_2_Gate route2Gate;
    HeadbuttFile_421_Route_16_Gate route16Gate;
    HeadbuttFile_422_Route_16 route16422;
    HeadbuttFile_423_Route_18_Gate route18Gate;
    HeadbuttFile_424_Route_19_And_Fushsia_City_Gate route19AndFushsiaCityGate;
    HeadbuttFile_425_Route_11_And_Route_12_Gate route11AndRoute12Gate;
    HeadbuttFile_426_Cerulean_City_Pokmart ceruleanCityPokmart;
    HeadbuttFile_427_Cerulean_City_Gym ceruleanCityGym;
    HeadbuttFile_428_Cerulean_City_Pokmon_Centre ceruleanCityPokemonCentre;
    HeadbuttFile_429_Cerulean_City_House ceruleanCityHouse;
    HeadbuttFile_430_Cerulean_City_House ceruleanCityHouse430;
    HeadbuttFile_431_Cerulean_City_House ceruleanCityHouse431;
    HeadbuttFile_432_Cerulean_City_Bike_Shop ceruleanCityBikeShop;
    HeadbuttFile_433_Lavender_Town_Pokmart lavenderTownPokmart;
    HeadbuttFile_434_Lavender_Town_Pokmon_Centre lavenderTownPokemonCentre;
    HeadbuttFile_435_Lavender_Town_House lavenderTownHouse;
    HeadbuttFile_436_Lavender_Town_House lavenderTownHouse436;
    HeadbuttFile_437_Lavender_Town_Name_Rater lavenderTownNameRater;
    HeadbuttFile_438_House_of_Memories houseOfMemories;
    HeadbuttFile_439_Lavender_Town_Radio_Tower lavenderTownRadioTower;
    HeadbuttFile_440_Sea_Cottage seaCottage;
    HeadbuttFile_441_Goldenrod_City_Elevator goldenrodCityElevator;
    HeadbuttFile_442_Celadon_City_Elevator celadonCityElevator;
    HeadbuttFile_443_Celadon_City_Elevator celadonCityElevator443;
    HeadbuttFile_444_Celadon_City_Elevator celadonCityElevator444;
    HeadbuttFile_445_Saffron_City_Elevator saffronCityElevator;
    HeadbuttFile_446_Lighthouse_Elevator lighthouseElevator;
    HeadbuttFile_447_Radio_Tower_Elevator radioTowerElevator;
    HeadbuttFile_448_Mt_Moon_Entrance mtMoonEntrance;
    HeadbuttFile_449_Mt_Moon_Square mtMoonSquare;
    HeadbuttFile_450_Cerulean_Cave_2F ceruleanCave2F;
    HeadbuttFile_451_Cerulean_Cave_B1F ceruleanCaveB1F;
    HeadbuttFile_452_Rock_Tunnel_B1F rockTunnelB1F;
    HeadbuttFile_453_Seafoam_Islands_B1F seafoamIslandsB1F;
    HeadbuttFile_454_Seafoam_Islands_B2F seafoamIslandsB2F;
    HeadbuttFile_455_Seafoam_Islands_B3F seafoamIslandsB3F;
    HeadbuttFile_456_Seafoam_Islands_B4F seafoamIslandsB4F;
    HeadbuttFile_457_Cinnabar_Gym cinnabarGym;
    HeadbuttFile_458_Cinnabar_Gym cinnabarGym458;
    HeadbuttFile_459_Mt_Silver_Cave_Upper_Mountainside mtSilverCaveUpperMountainside;
    HeadbuttFile_460_Mt_Silver_Cave_Lower_Mountainside mtSilverCaveLowerMountainside;
    HeadbuttFile_461_Mt_Silver_Cave_Expert_Belt_Chamber mtSilverCaveExpertBeltChamber;
    HeadbuttFile_462_Mt_Silver_Cave_Moltres_Chamber mtSilverCaveMoltresChamber;
    HeadbuttFile_463_Mt_Silver_Cave_2F mtSilverCave2F;
    HeadbuttFile_464_Mt_Silver_Cave_3F mtSilverCave3F;
    HeadbuttFile_465_Mt_Silver_Cave_Summit mtSilverCaveSummit;
    HeadbuttFile_466_Route_10_Pokmon_Centre route10PokemonCentre;
    HeadbuttFile_467_Power_Plant powerPlant;
    HeadbuttFile_468_Underground_Path undergroundPath;
    HeadbuttFile_469_Route_5_Underground_Path_Entrance route5UndergroundPathEntrance;
    HeadbuttFile_470_Route_6_Underground_Path_Entrance route6UndergroundPathEntrance;
    HeadbuttFile_471_Pewter_Museum_of_Science pewterMuseumOfScience;
    HeadbuttFile_472_Pewter_City_House pewterCityHouse;
    HeadbuttFile_473_Pewter_City_Gym pewterCityGym;
    HeadbuttFile_474_Pewter_City_Pokmart pewterCityPokmart;
    HeadbuttFile_475_Pewter_City_Pokmon_Centre pewterCityPokemonCentre;
    HeadbuttFile_476_Pewter_City_Pokmon_Centre_Lower pewterCityPokemonCentreLower;
    HeadbuttFile_477_Pewter_City_House pewterCityHouse477;
    HeadbuttFile_478_Fushsia_City_Pokmart fushsiaCityPokmart;
    HeadbuttFile_479_Pal_Park_Inside palParkInside;
    HeadbuttFile_480_Fushsia_City_Gym fushsiaCityGym;
    HeadbuttFile_481_Fushsia_City_House fushsiaCityHouse;
    HeadbuttFile_482_Fushsia_City_Pokmon_Centre fushsiaCityPokemonCentre;
    HeadbuttFile_483_Fushsia_City_House fushsiaCityHouse483;
    HeadbuttFile_484_Route_10_Pokmon_Centre_Lower route10PokemonCentreLower;
    HeadbuttFile_485_Fuchsia_City_Pokmon_Centre_Lower fuchsiaCityPokemonCentreLower;
    HeadbuttFile_486_Whirl_Islands_Lugias_Room whirlIslandsLugiasRoom;
    HeadbuttFile_487_National_Park_Bug_Catching_Contest nationalParkBugCatchingContest;
    HeadbuttFile_488_National_Park_Bug_Catching_Contest_National_Dex nationalParkBugCatchingContestNationalDex;
    HeadbuttFile_489_Power_Plant powerPlant489;
    HeadbuttFile_490_Ruins_of_Alph_Underground_Hall ruinsOfAlphUndergroundHall490;
    HeadbuttFile_491_Ruins_of_Alph_Hall_Entrance ruinsOfAlphHallEntrance491;
    HeadbuttFile_492_Ruins_of_Alph_Underground_Hall ruinsOfAlphUndergroundHall492;
    HeadbuttFile_493_Route_7_And_Saffron_City_Gate route7AndSaffronCityGate;
    HeadbuttFile_494_Lavender_Town_Pokmon_Centre_Lower lavenderTownPokemonCentreLower;
    HeadbuttFile_495_Cerulean_City_Pokmon_Centre_Lower ceruleanCityPokemonCentreLower;
    HeadbuttFile_496_Viridian_City_Gym viridianCityGym;
    HeadbuttFile_497_Viridian_City_House viridianCityHouse;
    HeadbuttFile_498_Viridian_City_Trainer_House viridianCityTrainerHouse;
    HeadbuttFile_499_Viridian_City_Trainer_House_2F viridianCityTrainerHouse2F;
    HeadbuttFile_500_Viridian_City_Pokmart viridianCityPokmart;
    HeadbuttFile_501_Viridian_City_Pokmon_Centre viridianCityPokemonCentre;
    HeadbuttFile_502_Viridian_City_Pokmon_Centre_Lower viridianCityPokemonCentreLower;
    HeadbuttFile_503_Pallet_Town_Reds_House_1F palletTownRedsHouse1F;
    HeadbuttFile_504_Pallet_Town_Blues_House_1F palletTownBluesHouse1F;
    HeadbuttFile_505_Oaks_Lab oaksLab;
    HeadbuttFile_506_Pallet_Town_Reds_House_2F palletTownRedsHouse2F;
    HeadbuttFile_507_Pallet_Town_Blues_House_2F palletTownBluesHouse2F;
    HeadbuttFile_508_Cinnabar_Island_Pokmon_Centre cinnabarIslandPokemonCentre;
    HeadbuttFile_509_Cinnabar_Island_Pokmon_Centre_Lower cinnabarIslandPokemonCentreLower;
    HeadbuttFile_510_Route_28_House route28House;
    HeadbuttFile_511_Route_3_Pokmon_Centre route3PokemonCentre;
    HeadbuttFile_512_Route_3_Pokmon_Centre_Lower route3PokemonCentreLower;
    HeadbuttFile_513_Mt_Moon_Square mtMoonSquare513;
    HeadbuttFile_514_Mt_Silver_Pokmon_Centre mtSilverPokemonCentre;
    HeadbuttFile_515_Mt_Silver_Pokmon_Centre_Lower mtSilverPokemonCentreLower;
    HeadbuttFile_516_HIROBA hiroba;
    HeadbuttFile_517_Route_5_House route5House;
    HeadbuttFile_518_Mt_Moon_Square_House mtMoonSquareHouse;
    HeadbuttFile_519_Goldenrod_City_Magnet_Train_Station goldenrodCityMagnetTrainStation519;
    HeadbuttFile_520_Saffron_City_Magnet_Train_Station saffronCityMagnetTrainStation520;
    HeadbuttFile_521_Sinjoh_Ruins_Outside sinjohRuinsOutside;
    HeadbuttFile_522_Sinjoh_Ruins_Mystri_Stage sinjohRuinsMystriStage;
    HeadbuttFile_523_Sinjoh_Ruins_Cabin sinjohRuinsCabin;
    HeadbuttFile_524_Embedded_Tower_Groudon embeddedTowerGroudon;
    HeadbuttFile_525_Embedded_Tower_Kyogre embeddedTowerKyogre;
    HeadbuttFile_526_Embedded_Tower_Rayquaza embeddedTowerRayquaza;
    HeadbuttFile_527_Route_1_And_Viridian_City_Gate route1AndViridianCityGate;
    HeadbuttFile_528_Frontier_Access_Pokmon_Center frontierAccessPokemonCenter;
    HeadbuttFile_529_Frontier_Access_Pokmon_Center_Lower frontierAccessPokemonCenterLower;
    HeadbuttFile_530_Frontier_Access_Pokmart frontierAccessPokmart;
    HeadbuttFile_531_Frontier_Access_House frontierAccessHouse;
    HeadbuttFile_532_Underground_Path undergroundPath532;
    HeadbuttFile_533_Route_12_House route12House;
    HeadbuttFile_534_Safari_Zone_Gate_Pokmon_Center safariZoneGatePokemonCenter;
    HeadbuttFile_535_Safari_Zone_Gate_Pokmon_Centre_Lower safariZoneGatePokemonCentreLower;
    HeadbuttFile_536_Goldenrod_City_Game_Corner goldenrodCityGameCorner;
    HeadbuttFile_537_Celadon_City_Game_Corner celadonCityGameCorner;
    HeadbuttFile_538_Mystery_Zone mysteryZone;
    HeadbuttFile_539_Pokmon_League_Pokmon_Centre_Lower pokmonLeaguePokemonCentreLower;
} HeadbuttArchiveData;


const u32 __size[] =
{
    sizeof(HeadbuttFile_000_EVERYWHERE),
    sizeof(HeadbuttFile_001_NOTHING),
    sizeof(HeadbuttFile_002_Union_Room),
    sizeof(HeadbuttFile_003_UG),
    sizeof(HeadbuttFile_004_DIRECT2),
    sizeof(HeadbuttFile_005_DIRECT4),
    sizeof(HeadbuttFile_006_Bellchime_Trail),
    sizeof(HeadbuttFile_007_Burned_Tower_1F),
    sizeof(HeadbuttFile_008_Ruins_Of_Alph_Inside),
    sizeof(HeadbuttFile_009_Route_1),
    sizeof(HeadbuttFile_010_Route_2),
    sizeof(HeadbuttFile_011_Route_3),
    sizeof(HeadbuttFile_012_Route_4),
    sizeof(HeadbuttFile_013_Route_5),
    sizeof(HeadbuttFile_014_Route_6),
    sizeof(HeadbuttFile_015_Route_7),
    sizeof(HeadbuttFile_016_Route_8),
    sizeof(HeadbuttFile_017_Route_9),
    sizeof(HeadbuttFile_018_Route_10),
    sizeof(HeadbuttFile_019_Route_11),
    sizeof(HeadbuttFile_020_Route_12),
    sizeof(HeadbuttFile_021_Route_13),
    sizeof(HeadbuttFile_022_Route_14),
    sizeof(HeadbuttFile_023_Route_15),
    sizeof(HeadbuttFile_024_Route_16),
    sizeof(HeadbuttFile_025_Route_17),
    sizeof(HeadbuttFile_026_Route_18),
    sizeof(HeadbuttFile_027_Route_22),
    sizeof(HeadbuttFile_028_Route_24),
    sizeof(HeadbuttFile_029_Route_25),
    sizeof(HeadbuttFile_030_Route_26),
    sizeof(HeadbuttFile_031_Route_27),
    sizeof(HeadbuttFile_032_Route_28),
    sizeof(HeadbuttFile_033_Route_29),
    sizeof(HeadbuttFile_034_Route_30),
    sizeof(HeadbuttFile_035_Route_31),
    sizeof(HeadbuttFile_036_Route_32),
    sizeof(HeadbuttFile_037_Route_33),
    sizeof(HeadbuttFile_038_Route_34),
    sizeof(HeadbuttFile_039_Route_35),
    sizeof(HeadbuttFile_040_Route_36),
    sizeof(HeadbuttFile_041_Route_37),
    sizeof(HeadbuttFile_042_Route_38),
    sizeof(HeadbuttFile_043_Route_39),
    sizeof(HeadbuttFile_044_Route_42),
    sizeof(HeadbuttFile_045_Route_43),
    sizeof(HeadbuttFile_046_Route_44),
    sizeof(HeadbuttFile_047_Route_45),
    sizeof(HeadbuttFile_048_Route_46),
    sizeof(HeadbuttFile_049_Pallet_Town),
    sizeof(HeadbuttFile_050_Viridian_City),
    sizeof(HeadbuttFile_051_Pewter_City),
    sizeof(HeadbuttFile_052_Cerulean_City),
    sizeof(HeadbuttFile_053_Lavender_Town),
    sizeof(HeadbuttFile_054_Vermilion_City),
    sizeof(HeadbuttFile_055_Celadon_City),
    sizeof(HeadbuttFile_056_Fuchsia_City),
    sizeof(HeadbuttFile_057_Cinnabar_Island),
    sizeof(HeadbuttFile_058_Indigo_Plateau),
    sizeof(HeadbuttFile_059_Saffron_City),
    sizeof(HeadbuttFile_060_New_Bark_Town),
    sizeof(HeadbuttFile_061_Elms_Lab_1F),
    sizeof(HeadbuttFile_062_Elms_Lab_2F),
    sizeof(HeadbuttFile_063_Moms_House_1F),
    sizeof(HeadbuttFile_064_Moms_House_2F),
    sizeof(HeadbuttFile_065_New_Bark_Town_House),
    sizeof(HeadbuttFile_066_Ethan_Lyras_House_1F),
    sizeof(HeadbuttFile_067_Cherrygrove_City),
    sizeof(HeadbuttFile_068_Cherrygrove_City_Pokmart),
    sizeof(HeadbuttFile_069_Cherrygrove_City_Pokmon_Centre),
    sizeof(HeadbuttFile_070_Cherrygrove_City_House),
    sizeof(HeadbuttFile_071_Cherrygrove_City_House),
    sizeof(HeadbuttFile_072_Cherrygrove_City_House),
    sizeof(HeadbuttFile_073_Violet_City),
    sizeof(HeadbuttFile_074_Azalea_Town),
    sizeof(HeadbuttFile_075_Cianwood_City),
    sizeof(HeadbuttFile_076_Goldenrod_City),
    sizeof(HeadbuttFile_077_Olivine_City),
    sizeof(HeadbuttFile_078_Ecruteak_City),
    sizeof(HeadbuttFile_079_Ecruteak_City_Pokmart),
    sizeof(HeadbuttFile_080_Ecruteak_City_Gym),
    sizeof(HeadbuttFile_081_Ecruteak_Pokmon_Centre),
    sizeof(HeadbuttFile_082_Jubilife_City_Unused),
    sizeof(HeadbuttFile_083_Barrier_Station_to_Bell_Tower),
    sizeof(HeadbuttFile_084_Ecruteak_City_House),
    sizeof(HeadbuttFile_085_Ecruteak_City_House),
    sizeof(HeadbuttFile_086_Ecruteak_Dance_Theatre),
    sizeof(HeadbuttFile_087_Mahogany_Town),
    sizeof(HeadbuttFile_088_Lake_of_Rage),
    sizeof(HeadbuttFile_089_Blackthorn_City),
    sizeof(HeadbuttFile_090_Mt_Silver),
    sizeof(HeadbuttFile_091_Route_19),
    sizeof(HeadbuttFile_092_Route_20),
    sizeof(HeadbuttFile_093_Route_21),
    sizeof(HeadbuttFile_094_Route_40),
    sizeof(HeadbuttFile_095_Route_41),
    sizeof(HeadbuttFile_096_National_Park),
    sizeof(HeadbuttFile_097_Route_31_And_Violet_City_Gate),
    sizeof(HeadbuttFile_098_Route_32_And_Ruins_Of_Alph_Gate),
    sizeof(HeadbuttFile_099_Union_Cave_1F),
    sizeof(HeadbuttFile_100_Azalea_Town_And_Ilex_Forest_Gate),
    sizeof(HeadbuttFile_101_Goldenrod_City_And_Route_35_Gate),
    sizeof(HeadbuttFile_102_Route_35_And_National_Park_Gate),
    sizeof(HeadbuttFile_103_Ruins_Of_Alph_And_Route_36_Gate),
    sizeof(HeadbuttFile_104_National_Park_And_Route_36_Gate),
    sizeof(HeadbuttFile_105_Jubilife_City_Unused),
    sizeof(HeadbuttFile_106_Digletts_Cave),
    sizeof(HeadbuttFile_107_Mt_Moon),
    sizeof(HeadbuttFile_108_Rock_Tunnel_1F),
    sizeof(HeadbuttFile_109_Pal_Park),
    sizeof(HeadbuttFile_110_Sprout_Tower_1F),
    sizeof(HeadbuttFile_111_Bell_Tower_1F),
    sizeof(HeadbuttFile_112_Radio_Tower_1F),
    sizeof(HeadbuttFile_113_Ruins_Of_Alph_Outside),
    sizeof(HeadbuttFile_114_Slowpoke_Well_Entrance),
    sizeof(HeadbuttFile_115_Olivine_Lighthouse_1F),
    sizeof(HeadbuttFile_116_Mahogany_Town_Souvenir_Shop),
    sizeof(HeadbuttFile_117_Ilex_Forest),
    sizeof(HeadbuttFile_118_Goldenrod_Tunnel),
    sizeof(HeadbuttFile_119_Mt_Mortar_1F),
    sizeof(HeadbuttFile_120_Ice_Path_1F),
    sizeof(HeadbuttFile_121_Whirl_Islands),
    sizeof(HeadbuttFile_122_Mt_Silver_Cave),
    sizeof(HeadbuttFile_123_Dark_Cave_Route_45_entrance),
    sizeof(HeadbuttFile_124_Victory_Road_1F),
    sizeof(HeadbuttFile_125_Dragons_Den_Entrance),
    sizeof(HeadbuttFile_126_Tohjo_Falls),
    sizeof(HeadbuttFile_127_Route_30_House),
    sizeof(HeadbuttFile_128_Ecruteak_City_Union_Room),
    sizeof(HeadbuttFile_129_Ecruteak_City_Union_Room),
    sizeof(HeadbuttFile_130_Ecruteak_City_Union_Room),
    sizeof(HeadbuttFile_131_Ecruteak_City_Pokmon_Centre_Lower),
    sizeof(HeadbuttFile_132_Ecruteak_City_And_Route_42_Gate),
    sizeof(HeadbuttFile_133_Mahogany_Town_House),
    sizeof(HeadbuttFile_134_Route_29_And_Route_46_Gate),
    sizeof(HeadbuttFile_135_Violet_City_Gym),
    sizeof(HeadbuttFile_136_Azalea_Gym_Entrance),
    sizeof(HeadbuttFile_137_Goldenrod_City_Gym),
    sizeof(HeadbuttFile_138_Olivine_City_Gym),
    sizeof(HeadbuttFile_139_Cianwood_City_Gym),
    sizeof(HeadbuttFile_140_Mahogany_City_Gym_3rd_Room),
    sizeof(HeadbuttFile_141_Blackthorn_City_Gym),
    sizeof(HeadbuttFile_142_Route_43_Gate),
    sizeof(HeadbuttFile_143_Mr_Pokmons_House),
    sizeof(HeadbuttFile_144_Cherrygrove_City_Pokmon_Centre_Lower),
    sizeof(HeadbuttFile_145_Cerulean_Cave_1F),
    sizeof(HeadbuttFile_146_Seafoam_Islands_1F),
    sizeof(HeadbuttFile_147_Viridian_Forest),
    sizeof(HeadbuttFile_148_Power_Plant_Unused),
    sizeof(HeadbuttFile_149_Route_36_And_Violet_City_Inbetween),
    sizeof(HeadbuttFile_150_Route_35_And_Pokathlon_Dome_Inbetween),
    sizeof(HeadbuttFile_151_Route_47),
    sizeof(HeadbuttFile_152_Route_48),
    sizeof(HeadbuttFile_153_Union_Cave_B1F),
    sizeof(HeadbuttFile_154_Union_Cave_B2F),
    sizeof(HeadbuttFile_155_Sprout_Tower_2F),
    sizeof(HeadbuttFile_156_Sprout_Tower_3F),
    sizeof(HeadbuttFile_157_Violet_City_Pokmart),
    sizeof(HeadbuttFile_158_Violet_City_Pokmon_Centre),
    sizeof(HeadbuttFile_159_Violet_City_Pokmon_School),
    sizeof(HeadbuttFile_160_Violet_City_House),
    sizeof(HeadbuttFile_161_Jubilife_City_Unused),
    sizeof(HeadbuttFile_162_Violet_City_House),
    sizeof(HeadbuttFile_163_Azalea_Town_Charcoal_Kiln),
    sizeof(HeadbuttFile_164_Azalea_Town_Kurts_House),
    sizeof(HeadbuttFile_165_Azalea_Town_Pokmart),
    sizeof(HeadbuttFile_166_Azalea_Town_Pokmon_Centre),
    sizeof(HeadbuttFile_167_Violet_City_Pokmon_Centre_Lower),
    sizeof(HeadbuttFile_168_Azalea_Town_Pokmon_Centre_Lower),
    sizeof(HeadbuttFile_169_Route_32_Pokmon_Centre),
    sizeof(HeadbuttFile_170_Route_32_Pokmon_Centre_Lower),
    sizeof(HeadbuttFile_171_Ilex_Forest_And_Route_34_Gate),
    sizeof(HeadbuttFile_172_Ecruteak_And_Route_38_Gate),
    sizeof(HeadbuttFile_173_Safari_Zone_Gate_Inside),
    sizeof(HeadbuttFile_174_Safari_Zone_Gate_Outside),
    sizeof(HeadbuttFile_175_Jubilife_City_Unused),
    sizeof(HeadbuttFile_176_Dark_Cave_Route_31_entrance),
    sizeof(HeadbuttFile_177_Slowpoke_Well_1F),
    sizeof(HeadbuttFile_178_Victory_Road_2F),
    sizeof(HeadbuttFile_179_Victory_Road_3F),
    sizeof(HeadbuttFile_180_Azalea_Town_Gym),
    sizeof(HeadbuttFile_181_Slowpoke_Well_B1F),
    sizeof(HeadbuttFile_182_Goldenrod_City_Bike_Store),
    sizeof(HeadbuttFile_183_Goldenrod_City_Game_Corner_JAP),
    sizeof(HeadbuttFile_184_Goldenrod_City_Flower_Shop),
    sizeof(HeadbuttFile_185_Goldenrod_City_Pokmon_Centre),
    sizeof(HeadbuttFile_186_Goldenrod_Radio_Tower_2F),
    sizeof(HeadbuttFile_187_Goldenrod_Radio_Tower_3F),
    sizeof(HeadbuttFile_188_Goldenrod_Radio_Tower_4F),
    sizeof(HeadbuttFile_189_Goldenrod_Radio_Tower_5F),
    sizeof(HeadbuttFile_190_Goldenrod_Radio_Tower_Observation_Deck),
    sizeof(HeadbuttFile_191_Goldenrod_Department_Store_1F),
    sizeof(HeadbuttFile_192_Goldenrod_Department_Store_2F),
    sizeof(HeadbuttFile_193_Goldenrod_Department_Store_3F),
    sizeof(HeadbuttFile_194_Goldenrod_Department_Store_4F),
    sizeof(HeadbuttFile_195_Goldenrod_Department_Store_5F),
    sizeof(HeadbuttFile_196_Goldenrod_Department_Store_6F),
    sizeof(HeadbuttFile_197_Goldenrod_City_Magnet_Train_Station),
    sizeof(HeadbuttFile_198_Goldenrod_City_Magnet_Train_Station),
    sizeof(HeadbuttFile_199_Goldenrod_Tunnel),
    sizeof(HeadbuttFile_200_Goldenrod_Department_Store_Basement),
    sizeof(HeadbuttFile_201_Goldenrod_Tunnel_B2F),
    sizeof(HeadbuttFile_202_Goldenrod_Tunnel_Warehouse),
    sizeof(HeadbuttFile_203_Goldenrod_City_House),
    sizeof(HeadbuttFile_204_Goldenrod_City_House),
    sizeof(HeadbuttFile_205_Goldenrod_City_House),
    sizeof(HeadbuttFile_206_Goldenrod_City_Name_Rater),
    sizeof(HeadbuttFile_207_Global_Terminal),
    sizeof(HeadbuttFile_208_Goldenrod_City_House_1F),
    sizeof(HeadbuttFile_209_Goldenrod_City_House_2F),
    sizeof(HeadbuttFile_210_Goldenrod_City_House_3F),
    sizeof(HeadbuttFile_211_Goldenrod_City_House_4F),
    sizeof(HeadbuttFile_212_Goldenrod_City_House_5F),
    sizeof(HeadbuttFile_213_Goldenrod_City_House_6F),
    sizeof(HeadbuttFile_214_Moomoo_Farm_House),
    sizeof(HeadbuttFile_215_Moomoo_Farm_Barn),
    sizeof(HeadbuttFile_216_Barrier_Station_to_Bell_Tower_And_Bellchime_Trail_Path),
    sizeof(HeadbuttFile_217_Burned_Tower_B1F),
    sizeof(HeadbuttFile_218_Ruins_of_Alph_Inside),
    sizeof(HeadbuttFile_219_Goldenrod_City_Pokmon_Centre_Lower),
    sizeof(HeadbuttFile_220_Glitter_Lighthouse_2F),
    sizeof(HeadbuttFile_221_Glitter_Lighthouse_Exterior),
    sizeof(HeadbuttFile_222_Glitter_Lighthouse_3F),
    sizeof(HeadbuttFile_223_Glitter_Lighthouse_4F),
    sizeof(HeadbuttFile_224_Glitter_Lighthouse_5F),
    sizeof(HeadbuttFile_225_Glitter_Lighthouse_Light_Room),
    sizeof(HeadbuttFile_226_Olivine_City_Pokmon_Centre),
    sizeof(HeadbuttFile_227_Olivine_City_Pokmart),
    sizeof(HeadbuttFile_228_Olivine_City_House),
    sizeof(HeadbuttFile_229_Olivine_City_House),
    sizeof(HeadbuttFile_230_Olivine_City_House),
    sizeof(HeadbuttFile_231_Olivine_City_Caf),
    sizeof(HeadbuttFile_232_Cianwood_City_House),
    sizeof(HeadbuttFile_233_Cianwood_City_Pharmacy),
    sizeof(HeadbuttFile_234_Cianwood_City_House),
    sizeof(HeadbuttFile_235_Cianwood_City_House),
    sizeof(HeadbuttFile_236_Cianwood_City_Pokmon_Centre),
    sizeof(HeadbuttFile_237_Ice_Path_B1F),
    sizeof(HeadbuttFile_238_Ice_Path_B2F),
    sizeof(HeadbuttFile_239_Ice_Path_B3F),
    sizeof(HeadbuttFile_240_Olivine_City_House),
    sizeof(HeadbuttFile_241_Cianwood_City_Pokmon_Centre_Lower),
    sizeof(HeadbuttFile_242_Whirl_Islands_B1F),
    sizeof(HeadbuttFile_243_Whirl_Islands_B2F),
    sizeof(HeadbuttFile_244_Whirl_Islands_B3F),
    sizeof(HeadbuttFile_245_Route_43_Gate),
    sizeof(HeadbuttFile_246_Mahogany_Town_Pokmon_Centre),
    sizeof(HeadbuttFile_247_Team_Rocket_HQ_B1F),
    sizeof(HeadbuttFile_248_Team_Rocket_HQ_B2F),
    sizeof(HeadbuttFile_249_Team_Rocket_HQ_B3F),
    sizeof(HeadbuttFile_250_Mt_Mortar_1F),
    sizeof(HeadbuttFile_251_Mt_Mortar_2F),
    sizeof(HeadbuttFile_252_Mt_Mortar_1F),
    sizeof(HeadbuttFile_253_Dragons_Den_Main),
    sizeof(HeadbuttFile_254_Fight_Area),
    sizeof(HeadbuttFile_255_Fight_Area),
    sizeof(HeadbuttFile_256_Fight_Area),
    sizeof(HeadbuttFile_257_Fight_Area),
    sizeof(HeadbuttFile_258_Fight_Area),
    sizeof(HeadbuttFile_259_Fight_Area),
    sizeof(HeadbuttFile_260_Fight_Area),
    sizeof(HeadbuttFile_261_Fight_Area),
    sizeof(HeadbuttFile_262_Fight_Area),
    sizeof(HeadbuttFile_263_Battle_Park),
    sizeof(HeadbuttFile_264_Battle_Park),
    sizeof(HeadbuttFile_265_Battle_Tower),
    sizeof(HeadbuttFile_266_Battle_Tower),
    sizeof(HeadbuttFile_267_Battle_Tower),
    sizeof(HeadbuttFile_268_Battle_Tower),
    sizeof(HeadbuttFile_269_Battle_Tower),
    sizeof(HeadbuttFile_270_Battle_Tower),
    sizeof(HeadbuttFile_271_Battle_Tower),
    sizeof(HeadbuttFile_272_Battle_Frontier),
    sizeof(HeadbuttFile_273_Battle_Frontier),
    sizeof(HeadbuttFile_274_Battle_Tower),
    sizeof(HeadbuttFile_275_Battle_Factory),
    sizeof(HeadbuttFile_276_Battle_Hall),
    sizeof(HeadbuttFile_277_Battle_Castle),
    sizeof(HeadbuttFile_278_Battle_Arcade),
    sizeof(HeadbuttFile_279_Cliff_Edge_Gate),
    sizeof(HeadbuttFile_280_Pokathlon_Dome_Outside),
    sizeof(HeadbuttFile_281_Pokathlon_Dome_Inside),
    sizeof(HeadbuttFile_282_Pokathlon_Dome_Inside),
    sizeof(HeadbuttFile_283_Pokathlon_Dome_Inside),
    sizeof(HeadbuttFile_284_Pokathlon_Dome_Inside),
    sizeof(HeadbuttFile_285_Pokathlon_Dome_Inside),
    sizeof(HeadbuttFile_286_Pokathlon_Dome_Inside),
    sizeof(HeadbuttFile_287_Pokathlon_Dome_Inside),
    sizeof(HeadbuttFile_288_Dragons_Den_Shrine),
    sizeof(HeadbuttFile_289_Blackthorn_City_House),
    sizeof(HeadbuttFile_290_Blackthorn_City_House),
    sizeof(HeadbuttFile_291_Blackthorn_City_House),
    sizeof(HeadbuttFile_292_Blackthorn_City_Pokmart),
    sizeof(HeadbuttFile_293_Blackthorn_City_Pokmon_Centre),
    sizeof(HeadbuttFile_294_Lake_of_Rage_House),
    sizeof(HeadbuttFile_295_Lake_of_Rage_House),
    sizeof(HeadbuttFile_296_Route_26_House),
    sizeof(HeadbuttFile_297_Route_26_Week_Siblings_House),
    sizeof(HeadbuttFile_298_Tohjo_Falls_Hidden_Room),
    sizeof(HeadbuttFile_299_Pokmon_League_Reception_Gate),
    sizeof(HeadbuttFile_300_Pokmon_League),
    sizeof(HeadbuttFile_301_Pokmon_League_Wills_Room),
    sizeof(HeadbuttFile_302_Pokmon_League_Kogas_Room),
    sizeof(HeadbuttFile_303_Pokmon_League_Brunos_Room),
    sizeof(HeadbuttFile_304_Pokmon_League_Karens_Room),
    sizeof(HeadbuttFile_305_Pokmon_League_Lances_Room),
    sizeof(HeadbuttFile_306_Pokmon_League_Hall_of_Fame),
    sizeof(HeadbuttFile_307_S_S_Aqua),
    sizeof(HeadbuttFile_308_S_S_Aqua),
    sizeof(HeadbuttFile_309_S_S_Aqua),
    sizeof(HeadbuttFile_310_S_S_Aqua),
    sizeof(HeadbuttFile_311_S_S_Aqua),
    sizeof(HeadbuttFile_312_Ruins_of_Alph_Entrance),
    sizeof(HeadbuttFile_313_Ruins_of_Alph_Chamber_1),
    sizeof(HeadbuttFile_314_Ruins_of_Alph_Entrance),
    sizeof(HeadbuttFile_315_Ruins_of_Alph_Underground_Hall),
    sizeof(HeadbuttFile_316_Ruins_of_Alph_Entrance),
    sizeof(HeadbuttFile_317_Ruins_of_Alph_Chamber_3),
    sizeof(HeadbuttFile_318_Ruins_of_Alph_Entrance),
    sizeof(HeadbuttFile_319_Ruins_of_Alph_Chamber_4),
    sizeof(HeadbuttFile_320_Ruins_of_Alph_Chamber_2),
    sizeof(HeadbuttFile_321_Ruins_of_Alph_Research_Center),
    sizeof(HeadbuttFile_322_Route_27_House),
    sizeof(HeadbuttFile_323_Ruins_of_Alph_Hall_Entrance),
    sizeof(HeadbuttFile_324_Ruins_of_Alph_Entrance_2),
    sizeof(HeadbuttFile_325_Ruins_of_Alph_Entrance_2),
    sizeof(HeadbuttFile_326_Ruins_of_Alph_Entrance_2),
    sizeof(HeadbuttFile_327_Ruins_of_Alph_Entrance_2),
    sizeof(HeadbuttFile_328_S_S_Aqua),
    sizeof(HeadbuttFile_329_S_S_Aqua),
    sizeof(HeadbuttFile_330_Olivine_Port),
    sizeof(HeadbuttFile_331_Pokmon_Daycare),
    sizeof(HeadbuttFile_332_Bell_Tower_2F),
    sizeof(HeadbuttFile_333_Bell_Tower_3F),
    sizeof(HeadbuttFile_334_Bell_Tower_4F),
    sizeof(HeadbuttFile_335_Bell_Tower_5F),
    sizeof(HeadbuttFile_336_Bell_Tower_6F),
    sizeof(HeadbuttFile_337_Bell_Tower_7F),
    sizeof(HeadbuttFile_338_Bell_Tower_8F),
    sizeof(HeadbuttFile_339_Bell_Tower_9F),
    sizeof(HeadbuttFile_340_Bell_Tower_Roof),
    sizeof(HeadbuttFile_341_Bell_Tower_10F),
    sizeof(HeadbuttFile_342_Cliff_Cave),
    sizeof(HeadbuttFile_343_Safari_Zone),
    sizeof(HeadbuttFile_344_Safari_Zone),
    sizeof(HeadbuttFile_345_Safari_Zone),
    sizeof(HeadbuttFile_346_Safari_Zone),
    sizeof(HeadbuttFile_347_Safari_Zone),
    sizeof(HeadbuttFile_348_Safari_Zone),
    sizeof(HeadbuttFile_349_Safari_Zone),
    sizeof(HeadbuttFile_350_Safari_Zone),
    sizeof(HeadbuttFile_351_Safari_Zone),
    sizeof(HeadbuttFile_352_Safari_Zone),
    sizeof(HeadbuttFile_353_Safari_Zone),
    sizeof(HeadbuttFile_354_Safari_Zone),
    sizeof(HeadbuttFile_355_Safari_Zone),
    sizeof(HeadbuttFile_356_Safari_Zone),
    sizeof(HeadbuttFile_357_Safari_Zone),
    sizeof(HeadbuttFile_358_Vermilion_City_Pokmon_Centre),
    sizeof(HeadbuttFile_359_Vermilion_City_Pokmon_Centre_Lower),
    sizeof(HeadbuttFile_360_Vermilion_City_Pokmart),
    sizeof(HeadbuttFile_361_Vermilion_City_Pokmon_Centre),
    sizeof(HeadbuttFile_362_Vermilion_City_Pokmon_Fan_Club),
    sizeof(HeadbuttFile_363_Vermilion_City_House),
    sizeof(HeadbuttFile_364_Vermilion_City_House),
    sizeof(HeadbuttFile_365_Vermilion_City_Gym),
    sizeof(HeadbuttFile_366_Route_40_And_Frontier_Access_Gate),
    sizeof(HeadbuttFile_367_Olivine_City_Pokmon_Center_Lower),
    sizeof(HeadbuttFile_368_Mahogany_Town_Pokmon_Center_Lower),
    sizeof(HeadbuttFile_369_Blackthorn_Town_Pokmon_Center_Lower),
    sizeof(HeadbuttFile_370_Celadon_City_Department_Store_1F),
    sizeof(HeadbuttFile_371_Celadon_City_Department_Store_2F),
    sizeof(HeadbuttFile_372_Celadon_City_Department_Store_3F),
    sizeof(HeadbuttFile_373_Celadon_City_Department_Store_4F),
    sizeof(HeadbuttFile_374_Celadon_City_Department_Store_5F),
    sizeof(HeadbuttFile_375_Celadon_City_Department_Store_6F),
    sizeof(HeadbuttFile_376_Celadon_Condominiums_1F),
    sizeof(HeadbuttFile_377_Celadon_Condominiums_2F),
    sizeof(HeadbuttFile_378_Celadon_Condominiums_3F),
    sizeof(HeadbuttFile_379_Celadon_Condominiums_4F),
    sizeof(HeadbuttFile_380_Celadon_Condominiums_5F),
    sizeof(HeadbuttFile_381_Celadon_Game_Corner_Main_JP),
    sizeof(HeadbuttFile_382_Celadon_Game_Corner_Prize_Building_JP),
    sizeof(HeadbuttFile_383_Celadon_City_House),
    sizeof(HeadbuttFile_384_Ethan_Lyras_House_2F),
    sizeof(HeadbuttFile_385_Cianwood_City_House),
    sizeof(HeadbuttFile_386_Vermilion_Port),
    sizeof(HeadbuttFile_387_Vermilion_Port),
    sizeof(HeadbuttFile_388_Route_10),
    sizeof(HeadbuttFile_389_Route_6_And_Saffron_City_Gate),
    sizeof(HeadbuttFile_390_Route_8_And_Saffron_City_Gate),
    sizeof(HeadbuttFile_391_Route_5_And_Saffron_City_Gate),
    sizeof(HeadbuttFile_392_Route_15_And_Fushsia_City_Gate),
    sizeof(HeadbuttFile_393_Celadon_City_Pokmon_Centre),
    sizeof(HeadbuttFile_394_Celadon_City_Pokmon_Centre_Lower),
    sizeof(HeadbuttFile_395_Celadon_City_Gym),
    sizeof(HeadbuttFile_396_Mahogany_Town_Gym_2nd_Room),
    sizeof(HeadbuttFile_397_Mahogany_Town_Gym_1st_Room),
    sizeof(HeadbuttFile_398_Saffron_City_Fighting_Dojo),
    sizeof(HeadbuttFile_399_Saffron_City_House),
    sizeof(HeadbuttFile_400_Saffron_City_Magnet_Train_Station),
    sizeof(HeadbuttFile_401_Saffron_City_Magnet_Train_Station),
    sizeof(HeadbuttFile_402_Saffron_City_Magnet_Train_Station),
    sizeof(HeadbuttFile_403_ROTOMs_Room),
    sizeof(HeadbuttFile_404_Saffron_City_House),
    sizeof(HeadbuttFile_405_Saffron_City_House),
    sizeof(HeadbuttFile_406_Saffron_City_House),
    sizeof(HeadbuttFile_407_Saffron_City_Pokmon_Center),
    sizeof(HeadbuttFile_408_Saffron_City_Pokmon_Center_Lower),
    sizeof(HeadbuttFile_409_Saffron_City_Pokmart),
    sizeof(HeadbuttFile_410_Saffron_City_Gym),
    sizeof(HeadbuttFile_411_Frontier_Access),
    sizeof(HeadbuttFile_412_Global_Terminal_2F),
    sizeof(HeadbuttFile_413_Global_Terminal_3F),
    sizeof(HeadbuttFile_414_Route_2),
    sizeof(HeadbuttFile_415_Route_16_House),
    sizeof(HeadbuttFile_416_Route_20_Unused),
    sizeof(HeadbuttFile_417_Route_2),
    sizeof(HeadbuttFile_418_Route_2_And_Pewter_City_Gate),
    sizeof(HeadbuttFile_419_Route_2_And_Viridian_City_Gate),
    sizeof(HeadbuttFile_420_Route_2_Gate),
    sizeof(HeadbuttFile_421_Route_16_Gate),
    sizeof(HeadbuttFile_422_Route_16),
    sizeof(HeadbuttFile_423_Route_18_Gate),
    sizeof(HeadbuttFile_424_Route_19_And_Fushsia_City_Gate),
    sizeof(HeadbuttFile_425_Route_11_And_Route_12_Gate),
    sizeof(HeadbuttFile_426_Cerulean_City_Pokmart),
    sizeof(HeadbuttFile_427_Cerulean_City_Gym),
    sizeof(HeadbuttFile_428_Cerulean_City_Pokmon_Centre),
    sizeof(HeadbuttFile_429_Cerulean_City_House),
    sizeof(HeadbuttFile_430_Cerulean_City_House),
    sizeof(HeadbuttFile_431_Cerulean_City_House),
    sizeof(HeadbuttFile_432_Cerulean_City_Bike_Shop),
    sizeof(HeadbuttFile_433_Lavender_Town_Pokmart),
    sizeof(HeadbuttFile_434_Lavender_Town_Pokmon_Centre),
    sizeof(HeadbuttFile_435_Lavender_Town_House),
    sizeof(HeadbuttFile_436_Lavender_Town_House),
    sizeof(HeadbuttFile_437_Lavender_Town_Name_Rater),
    sizeof(HeadbuttFile_438_House_of_Memories),
    sizeof(HeadbuttFile_439_Lavender_Town_Radio_Tower),
    sizeof(HeadbuttFile_440_Sea_Cottage),
    sizeof(HeadbuttFile_441_Goldenrod_City_Elevator),
    sizeof(HeadbuttFile_442_Celadon_City_Elevator),
    sizeof(HeadbuttFile_443_Celadon_City_Elevator),
    sizeof(HeadbuttFile_444_Celadon_City_Elevator),
    sizeof(HeadbuttFile_445_Saffron_City_Elevator),
    sizeof(HeadbuttFile_446_Lighthouse_Elevator),
    sizeof(HeadbuttFile_447_Radio_Tower_Elevator),
    sizeof(HeadbuttFile_448_Mt_Moon_Entrance),
    sizeof(HeadbuttFile_449_Mt_Moon_Square),
    sizeof(HeadbuttFile_450_Cerulean_Cave_2F),
    sizeof(HeadbuttFile_451_Cerulean_Cave_B1F),
    sizeof(HeadbuttFile_452_Rock_Tunnel_B1F),
    sizeof(HeadbuttFile_453_Seafoam_Islands_B1F),
    sizeof(HeadbuttFile_454_Seafoam_Islands_B2F),
    sizeof(HeadbuttFile_455_Seafoam_Islands_B3F),
    sizeof(HeadbuttFile_456_Seafoam_Islands_B4F),
    sizeof(HeadbuttFile_457_Cinnabar_Gym),
    sizeof(HeadbuttFile_458_Cinnabar_Gym),
    sizeof(HeadbuttFile_459_Mt_Silver_Cave_Upper_Mountainside),
    sizeof(HeadbuttFile_460_Mt_Silver_Cave_Lower_Mountainside),
    sizeof(HeadbuttFile_461_Mt_Silver_Cave_Expert_Belt_Chamber),
    sizeof(HeadbuttFile_462_Mt_Silver_Cave_Moltres_Chamber),
    sizeof(HeadbuttFile_463_Mt_Silver_Cave_2F),
    sizeof(HeadbuttFile_464_Mt_Silver_Cave_3F),
    sizeof(HeadbuttFile_465_Mt_Silver_Cave_Summit),
    sizeof(HeadbuttFile_466_Route_10_Pokmon_Centre),
    sizeof(HeadbuttFile_467_Power_Plant),
    sizeof(HeadbuttFile_468_Underground_Path),
    sizeof(HeadbuttFile_469_Route_5_Underground_Path_Entrance),
    sizeof(HeadbuttFile_470_Route_6_Underground_Path_Entrance),
    sizeof(HeadbuttFile_471_Pewter_Museum_of_Science),
    sizeof(HeadbuttFile_472_Pewter_City_House),
    sizeof(HeadbuttFile_473_Pewter_City_Gym),
    sizeof(HeadbuttFile_474_Pewter_City_Pokmart),
    sizeof(HeadbuttFile_475_Pewter_City_Pokmon_Centre),
    sizeof(HeadbuttFile_476_Pewter_City_Pokmon_Centre_Lower),
    sizeof(HeadbuttFile_477_Pewter_City_House),
    sizeof(HeadbuttFile_478_Fushsia_City_Pokmart),
    sizeof(HeadbuttFile_479_Pal_Park_Inside),
    sizeof(HeadbuttFile_480_Fushsia_City_Gym),
    sizeof(HeadbuttFile_481_Fushsia_City_House),
    sizeof(HeadbuttFile_482_Fushsia_City_Pokmon_Centre),
    sizeof(HeadbuttFile_483_Fushsia_City_House),
    sizeof(HeadbuttFile_484_Route_10_Pokmon_Centre_Lower),
    sizeof(HeadbuttFile_485_Fuchsia_City_Pokmon_Centre_Lower),
    sizeof(HeadbuttFile_486_Whirl_Islands_Lugias_Room),
    sizeof(HeadbuttFile_487_National_Park_Bug_Catching_Contest),
    sizeof(HeadbuttFile_488_National_Park_Bug_Catching_Contest_National_Dex),
    sizeof(HeadbuttFile_489_Power_Plant),
    sizeof(HeadbuttFile_490_Ruins_of_Alph_Underground_Hall),
    sizeof(HeadbuttFile_491_Ruins_of_Alph_Hall_Entrance),
    sizeof(HeadbuttFile_492_Ruins_of_Alph_Underground_Hall),
    sizeof(HeadbuttFile_493_Route_7_And_Saffron_City_Gate),
    sizeof(HeadbuttFile_494_Lavender_Town_Pokmon_Centre_Lower),
    sizeof(HeadbuttFile_495_Cerulean_City_Pokmon_Centre_Lower),
    sizeof(HeadbuttFile_496_Viridian_City_Gym),
    sizeof(HeadbuttFile_497_Viridian_City_House),
    sizeof(HeadbuttFile_498_Viridian_City_Trainer_House),
    sizeof(HeadbuttFile_499_Viridian_City_Trainer_House_2F),
    sizeof(HeadbuttFile_500_Viridian_City_Pokmart),
    sizeof(HeadbuttFile_501_Viridian_City_Pokmon_Centre),
    sizeof(HeadbuttFile_502_Viridian_City_Pokmon_Centre_Lower),
    sizeof(HeadbuttFile_503_Pallet_Town_Reds_House_1F),
    sizeof(HeadbuttFile_504_Pallet_Town_Blues_House_1F),
    sizeof(HeadbuttFile_505_Oaks_Lab),
    sizeof(HeadbuttFile_506_Pallet_Town_Reds_House_2F),
    sizeof(HeadbuttFile_507_Pallet_Town_Blues_House_2F),
    sizeof(HeadbuttFile_508_Cinnabar_Island_Pokmon_Centre),
    sizeof(HeadbuttFile_509_Cinnabar_Island_Pokmon_Centre_Lower),
    sizeof(HeadbuttFile_510_Route_28_House),
    sizeof(HeadbuttFile_511_Route_3_Pokmon_Centre),
    sizeof(HeadbuttFile_512_Route_3_Pokmon_Centre_Lower),
    sizeof(HeadbuttFile_513_Mt_Moon_Square),
    sizeof(HeadbuttFile_514_Mt_Silver_Pokmon_Centre),
    sizeof(HeadbuttFile_515_Mt_Silver_Pokmon_Centre_Lower),
    sizeof(HeadbuttFile_516_HIROBA),
    sizeof(HeadbuttFile_517_Route_5_House),
    sizeof(HeadbuttFile_518_Mt_Moon_Square_House),
    sizeof(HeadbuttFile_519_Goldenrod_City_Magnet_Train_Station),
    sizeof(HeadbuttFile_520_Saffron_City_Magnet_Train_Station),
    sizeof(HeadbuttFile_521_Sinjoh_Ruins_Outside),
    sizeof(HeadbuttFile_522_Sinjoh_Ruins_Mystri_Stage),
    sizeof(HeadbuttFile_523_Sinjoh_Ruins_Cabin),
    sizeof(HeadbuttFile_524_Embedded_Tower_Groudon),
    sizeof(HeadbuttFile_525_Embedded_Tower_Kyogre),
    sizeof(HeadbuttFile_526_Embedded_Tower_Rayquaza),
    sizeof(HeadbuttFile_527_Route_1_And_Viridian_City_Gate),
    sizeof(HeadbuttFile_528_Frontier_Access_Pokmon_Center),
    sizeof(HeadbuttFile_529_Frontier_Access_Pokmon_Center_Lower),
    sizeof(HeadbuttFile_530_Frontier_Access_Pokmart),
    sizeof(HeadbuttFile_531_Frontier_Access_House),
    sizeof(HeadbuttFile_532_Underground_Path),
    sizeof(HeadbuttFile_533_Route_12_House),
    sizeof(HeadbuttFile_534_Safari_Zone_Gate_Pokmon_Center),
    sizeof(HeadbuttFile_535_Safari_Zone_Gate_Pokmon_Centre_Lower),
    sizeof(HeadbuttFile_536_Goldenrod_City_Game_Corner),
    sizeof(HeadbuttFile_537_Celadon_City_Game_Corner),
    sizeof(HeadbuttFile_538_Mystery_Zone),
    sizeof(HeadbuttFile_539_Pokmon_League_Pokmon_Centre_Lower),
};

const HeadbuttArchiveData __data =
{
    .everywhere = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .nothing = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .unionRoom = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ug = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .direct2 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .direct4 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .bellchimeTrail = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .burnedTower1F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ruinsOfAlphInside = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route1 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route2 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route3 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route4 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route5 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route6 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route7 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route8 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route9 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route10 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route11 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route12 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route13 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route14 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route15 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route16 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route17 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route18 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route22 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route24 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route25 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route26 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route27 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route28 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route29 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route30 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route31 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route32 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route33 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route34 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route35 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route36 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route37 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route38 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route39 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route42 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route43 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route44 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route45 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route46 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .palletTown = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .viridianCity = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .pewterCity = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ceruleanCity = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .lavenderTown = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .vermilionCity = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .celadonCity = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .fuchsiaCity = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .cinnabarIsland = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .indigoPlateau = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .saffronCity = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .newBarkTown = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .elmsLab1F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .elmsLab2F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .momsHouse1F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .momsHouse2F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .newBarkTownHouse = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ethanLyrasHouse1F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .cherrygroveCity = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .cherrygroveCityPokmart = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .cherrygroveCityPokemonCentre = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .cherrygroveCityHouse = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .cherrygroveCityHouse071 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .cherrygroveCityHouse072 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .violetCity = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .azaleaTown = {
        .normalTreeCount = 15,
        .specialTreeCount = 0,
        .normalSlots =
        {
            { SPECIES_SPINARAK, 1, 10 },
            { SPECIES_WEEDLE, 1, 10 },
            { SPECIES_SPEAROW, 1, 10 },
            { SPECIES_COMBEE, 1, 10 },
            { SPECIES_EXEGGCUTE, 1, 10 },
            { SPECIES_COMBEE, 1, 10 },
            { SPECIES_VENIPEDE, 1, 10 },
            { SPECIES_SIZZLIPEDE, 1, 10 },
            { SPECIES_SCATTERBUG, 1, 10 },
            { SPECIES_BLIPBUG, 1, 10 },
            { SPECIES_SURSKIT, 1, 10 },
            { SPECIES_SURSKIT, 1, 10 },
        },
        .specialSlots =
        {
            { SPECIES_NONE, 0, 0 },
            { SPECIES_NONE, 0, 0 },
            { SPECIES_NONE, 0, 0 },
            { SPECIES_NONE, 0, 0 },
            { SPECIES_NONE, 0, 0 },
            { SPECIES_NONE, 0, 0 },
        },
        .treeCoords =
        {
            { { 426, 465 }, { 427, 465 }, { -1, -1 }, { -1, -1 }, { -1, -1 }, { -1, -1 } },
            { { 424, 459 }, { 425, 459 }, { -1, -1 }, { -1, -1 }, { -1, -1 }, { -1, -1 } },
            { { 414, 455 }, { 415, 455 }, { -1, -1 }, { -1, -1 }, { -1, -1 }, { -1, -1 } },
            { { 406, 455 }, { 407, 455 }, { -1, -1 }, { -1, -1 }, { -1, -1 }, { -1, -1 } },
            { { 396, 449 }, { 397, 449 }, { -1, -1 }, { -1, -1 }, { -1, -1 }, { -1, -1 } },
            { { 393, 452 }, { 393, 453 }, { -1, -1 }, { -1, -1 }, { -1, -1 }, { -1, -1 } },
            { { 394, 467 }, { 395, 467 }, { 395, 468 }, { 395, 469 }, { -1, -1 }, { -1, -1 } },
            { { 395, 470 }, { 395, 471 }, { -1, -1 }, { -1, -1 }, { -1, -1 }, { -1, -1 } },
            { { 395, 472 }, { 395, 473 }, { -1, -1 }, { -1, -1 }, { -1, -1 }, { -1, -1 } },
            { { 398, 477 }, { 399, 477 }, { -1, -1 }, { -1, -1 }, { -1, -1 }, { -1, -1 } },
            { { 400, 477 }, { 401, 477 }, { -1, -1 }, { -1, -1 }, { -1, -1 }, { -1, -1 } },
            { { 402, 477 }, { 403, 477 }, { -1, -1 }, { -1, -1 }, { -1, -1 }, { -1, -1 } },
            { { 404, 477 }, { 405, 477 }, { -1, -1 }, { -1, -1 }, { -1, -1 }, { -1, -1 } },
            { { 410, 477 }, { 411, 477 }, { -1, -1 }, { -1, -1 }, { -1, -1 }, { -1, -1 } },
            { { 412, 477 }, { 413, 477 }, { -1, -1 }, { -1, -1 }, { -1, -1 }, { -1, -1 } },
        },
    },

    .cianwoodCity = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .goldenrodCity = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .olivineCity = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ecruteakCity = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ecruteakCityPokmart = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ecruteakCityGym = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ecruteakPokemonCentre = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .jubilifeCityUnused = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .barrierStationToBellTower = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ecruteakCityHouse = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ecruteakCityHouse085 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ecruteakDanceTheatre = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .mahoganyTown = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .lakeOfRage = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .blackthornCity = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .mtSilver = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route19 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route20 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route21 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route40 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route41 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .nationalPark = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route31AndVioletCityGate = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route32AndRuinsOfAlphGate = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .unionCave1F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .azaleaTownAndIlexForestGate = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .goldenrodCityAndRoute35Gate = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route35AndNationalParkGate = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ruinsOfAlphAndRoute36Gate = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .nationalParkAndRoute36Gate = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .jubilifeCityUnused105 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .diglettsCave = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .mtMoon = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .rockTunnel1F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .palPark = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .sproutTower1F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .bellTower1F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .radioTower1F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ruinsOfAlphOutside = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .slowpokeWellEntrance = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .olivineLighthouse1F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .mahoganyTownSouvenirShop = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ilexForest = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .goldenrodTunnel = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .mtMortar1F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .icePath1F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .whirlIslands = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .mtSilverCave = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .darkCaveRoute45Entrance = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .victoryRoad1F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .dragonsDenEntrance = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .tohjoFalls = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route30House = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ecruteakCityUnionRoom = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ecruteakCityUnionRoom129 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ecruteakCityUnionRoom130 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ecruteakCityPokemonCentreLower = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ecruteakCityAndRoute42Gate = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .mahoganyTownHouse = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route29AndRoute46Gate = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .violetCityGym = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .azaleaGymEntrance = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .goldenrodCityGym = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .olivineCityGym = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .cianwoodCityGym = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .mahoganyCityGym3rdRoom = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .blackthornCityGym = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route43Gate = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .mrPokemonsHouse = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .cherrygroveCityPokemonCentreLower = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ceruleanCave1F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .seafoamIslands1F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .viridianForest = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .powerPlantUnused = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route36AndVioletCityInbetween = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route35AndPokathlonDomeInbetween = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route47 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route48 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .unionCaveB1F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .unionCaveB2F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .sproutTower2F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .sproutTower3F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .violetCityPokmart = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .violetCityPokemonCentre = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .violetCityPokemonSchool = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .violetCityHouse = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .jubilifeCityUnused161 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .violetCityHouse162 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .azaleaTownCharcoalKiln = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .azaleaTownKurtsHouse = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .azaleaTownPokmart = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .azaleaTownPokemonCentre = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .violetCityPokemonCentreLower = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .azaleaTownPokemonCentreLower = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route32PokemonCentre = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route32PokemonCentreLower = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ilexForestAndRoute34Gate = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ecruteakAndRoute38Gate = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .safariZoneGateInside = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .safariZoneGateOutside = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .jubilifeCityUnused175 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .darkCaveRoute31Entrance = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .slowpokeWell1F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .victoryRoad2F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .victoryRoad3F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .azaleaTownGym = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .slowpokeWellB1F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .goldenrodCityBikeStore = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .goldenrodCityGameCornerJAP = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .goldenrodCityFlowerShop = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .goldenrodCityPokemonCentre = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .goldenrodRadioTower2F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .goldenrodRadioTower3F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .goldenrodRadioTower4F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .goldenrodRadioTower5F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .goldenrodRadioTowerObservationDeck = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .goldenrodDepartmentStore1F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .goldenrodDepartmentStore2F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .goldenrodDepartmentStore3F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .goldenrodDepartmentStore4F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .goldenrodDepartmentStore5F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .goldenrodDepartmentStore6F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .goldenrodCityMagnetTrainStation = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .goldenrodCityMagnetTrainStation198 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .goldenrodTunnel199 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .goldenrodDepartmentStoreBasement = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .goldenrodTunnelB2F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .goldenrodTunnelWarehouse = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .goldenrodCityHouse = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .goldenrodCityHouse204 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .goldenrodCityHouse205 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .goldenrodCityNameRater = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .globalTerminal = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .goldenrodCityHouse1F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .goldenrodCityHouse2F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .goldenrodCityHouse3F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .goldenrodCityHouse4F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .goldenrodCityHouse5F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .goldenrodCityHouse6F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .moomooFarmHouse = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .moomooFarmBarn = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .barrierStationToBellTowerAndBellchimeTrailPath = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .burnedTowerB1F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ruinsOfAlphInside218 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .goldenrodCityPokemonCentreLower = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .glitterLighthouse2F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .glitterLighthouseExterior = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .glitterLighthouse3F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .glitterLighthouse4F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .glitterLighthouse5F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .glitterLighthouseLightRoom = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .olivineCityPokemonCentre = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .olivineCityPokmart = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .olivineCityHouse = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .olivineCityHouse229 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .olivineCityHouse230 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .olivineCityCaf = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .cianwoodCityHouse = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .cianwoodCityPharmacy = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .cianwoodCityHouse234 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .cianwoodCityHouse235 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .cianwoodCityPokemonCentre = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .icePathB1F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .icePathB2F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .icePathB3F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .olivineCityHouse240 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .cianwoodCityPokemonCentreLower = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .whirlIslandsB1F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .whirlIslandsB2F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .whirlIslandsB3F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route43Gate245 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .mahoganyTownPokemonCentre = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .teamRocketHQB1F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .teamRocketHQB2F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .teamRocketHQB3F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .mtMortar1F250 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .mtMortar2F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .mtMortar1F252 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .dragonsDenMain = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .fightArea = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .fightArea255 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .fightArea256 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .fightArea257 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .fightArea258 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .fightArea259 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .fightArea260 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .fightArea261 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .fightArea262 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .battlePark = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .battlePark264 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .battleTower = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .battleTower266 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .battleTower267 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .battleTower268 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .battleTower269 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .battleTower270 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .battleTower271 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .battleFrontier = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .battleFrontier273 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .battleTower274 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .battleFactory = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .battleHall = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .battleCastle = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .battleArcade = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .cliffEdgeGate = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .pokathlonDomeOutside = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .pokathlonDomeInside = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .pokathlonDomeInside282 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .pokathlonDomeInside283 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .pokathlonDomeInside284 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .pokathlonDomeInside285 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .pokathlonDomeInside286 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .pokathlonDomeInside287 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .dragonsDenShrine = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .blackthornCityHouse = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .blackthornCityHouse290 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .blackthornCityHouse291 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .blackthornCityPokmart = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .blackthornCityPokemonCentre = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .lakeOfRageHouse = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .lakeOfRageHouse295 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route26House = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route26WeekSiblingsHouse = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .tohjoFallsHiddenRoom = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .pokmonLeagueReceptionGate = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .pokmonLeague = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .pokmonLeagueWillsRoom = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .pokmonLeagueKogasRoom = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .pokmonLeagueBrunosRoom = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .pokmonLeagueKarensRoom = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .pokmonLeagueLancesRoom = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .pokmonLeagueHallOfFame = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .sSAqua = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .sSAqua308 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .sSAqua309 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .sSAqua310 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .sSAqua311 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ruinsOfAlphEntrance = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ruinsOfAlphChamber1 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ruinsOfAlphEntrance314 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ruinsOfAlphUndergroundHall = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ruinsOfAlphEntrance316 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ruinsOfAlphChamber3 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ruinsOfAlphEntrance318 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ruinsOfAlphChamber4 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ruinsOfAlphChamber2 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ruinsOfAlphResearchCenter = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route27House = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ruinsOfAlphHallEntrance = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ruinsOfAlphEntrance2 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ruinsOfAlphEntrance2325 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ruinsOfAlphEntrance2326 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ruinsOfAlphEntrance2327 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .sSAqua328 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .sSAqua329 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .olivinePort = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .pokmonDaycare = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .bellTower2F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .bellTower3F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .bellTower4F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .bellTower5F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .bellTower6F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .bellTower7F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .bellTower8F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .bellTower9F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .bellTowerRoof = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .bellTower10F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .cliffCave = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .safariZone = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .safariZone344 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .safariZone345 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .safariZone346 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .safariZone347 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .safariZone348 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .safariZone349 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .safariZone350 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .safariZone351 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .safariZone352 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .safariZone353 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .safariZone354 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .safariZone355 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .safariZone356 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .safariZone357 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .vermilionCityPokemonCentre = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .vermilionCityPokemonCentreLower = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .vermilionCityPokmart = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .vermilionCityPokemonCentre361 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .vermilionCityPokemonFanClub = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .vermilionCityHouse = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .vermilionCityHouse364 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .vermilionCityGym = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route40AndFrontierAccessGate = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .olivineCityPokemonCenterLower = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .mahoganyTownPokemonCenterLower = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .blackthornTownPokemonCenterLower = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .celadonCityDepartmentStore1F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .celadonCityDepartmentStore2F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .celadonCityDepartmentStore3F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .celadonCityDepartmentStore4F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .celadonCityDepartmentStore5F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .celadonCityDepartmentStore6F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .celadonCondominiums1F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .celadonCondominiums2F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .celadonCondominiums3F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .celadonCondominiums4F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .celadonCondominiums5F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .celadonGameCornerMainJP = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .celadonGameCornerPrizeBuildingJP = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .celadonCityHouse = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ethanLyrasHouse2F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .cianwoodCityHouse385 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .vermilionPort = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .vermilionPort387 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route10388 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route6AndSaffronCityGate = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route8AndSaffronCityGate = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route5AndSaffronCityGate = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route15AndFushsiaCityGate = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .celadonCityPokemonCentre = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .celadonCityPokemonCentreLower = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .celadonCityGym = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .mahoganyTownGym2ndRoom = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .mahoganyTownGym1stRoom = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .saffronCityFightingDojo = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .saffronCityHouse = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .saffronCityMagnetTrainStation = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .saffronCityMagnetTrainStation401 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .saffronCityMagnetTrainStation402 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .rotomsRoom = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .saffronCityHouse404 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .saffronCityHouse405 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .saffronCityHouse406 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .saffronCityPokemonCenter = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .saffronCityPokemonCenterLower = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .saffronCityPokmart = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .saffronCityGym = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .frontierAccess = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .globalTerminal2F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .globalTerminal3F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route2414 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route16House = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route20Unused = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route2417 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route2AndPewterCityGate = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route2AndViridianCityGate = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route2Gate = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route16Gate = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route16422 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route18Gate = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route19AndFushsiaCityGate = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route11AndRoute12Gate = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ceruleanCityPokmart = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ceruleanCityGym = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ceruleanCityPokemonCentre = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ceruleanCityHouse = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ceruleanCityHouse430 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ceruleanCityHouse431 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ceruleanCityBikeShop = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .lavenderTownPokmart = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .lavenderTownPokemonCentre = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .lavenderTownHouse = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .lavenderTownHouse436 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .lavenderTownNameRater = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .houseOfMemories = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .lavenderTownRadioTower = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .seaCottage = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .goldenrodCityElevator = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .celadonCityElevator = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .celadonCityElevator443 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .celadonCityElevator444 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .saffronCityElevator = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .lighthouseElevator = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .radioTowerElevator = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .mtMoonEntrance = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .mtMoonSquare = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ceruleanCave2F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ceruleanCaveB1F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .rockTunnelB1F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .seafoamIslandsB1F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .seafoamIslandsB2F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .seafoamIslandsB3F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .seafoamIslandsB4F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .cinnabarGym = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .cinnabarGym458 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .mtSilverCaveUpperMountainside = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .mtSilverCaveLowerMountainside = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .mtSilverCaveExpertBeltChamber = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .mtSilverCaveMoltresChamber = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .mtSilverCave2F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .mtSilverCave3F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .mtSilverCaveSummit = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route10PokemonCentre = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .powerPlant = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .undergroundPath = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route5UndergroundPathEntrance = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route6UndergroundPathEntrance = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .pewterMuseumOfScience = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .pewterCityHouse = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .pewterCityGym = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .pewterCityPokmart = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .pewterCityPokemonCentre = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .pewterCityPokemonCentreLower = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .pewterCityHouse477 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .fushsiaCityPokmart = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .palParkInside = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .fushsiaCityGym = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .fushsiaCityHouse = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .fushsiaCityPokemonCentre = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .fushsiaCityHouse483 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route10PokemonCentreLower = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .fuchsiaCityPokemonCentreLower = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .whirlIslandsLugiasRoom = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .nationalParkBugCatchingContest = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .nationalParkBugCatchingContestNationalDex = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .powerPlant489 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ruinsOfAlphUndergroundHall490 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ruinsOfAlphHallEntrance491 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ruinsOfAlphUndergroundHall492 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route7AndSaffronCityGate = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .lavenderTownPokemonCentreLower = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .ceruleanCityPokemonCentreLower = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .viridianCityGym = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .viridianCityHouse = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .viridianCityTrainerHouse = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .viridianCityTrainerHouse2F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .viridianCityPokmart = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .viridianCityPokemonCentre = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .viridianCityPokemonCentreLower = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .palletTownRedsHouse1F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .palletTownBluesHouse1F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .oaksLab = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .palletTownRedsHouse2F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .palletTownBluesHouse2F = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .cinnabarIslandPokemonCentre = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .cinnabarIslandPokemonCentreLower = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route28House = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route3PokemonCentre = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route3PokemonCentreLower = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .mtMoonSquare513 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .mtSilverPokemonCentre = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .mtSilverPokemonCentreLower = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .hiroba = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route5House = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .mtMoonSquareHouse = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .goldenrodCityMagnetTrainStation519 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .saffronCityMagnetTrainStation520 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .sinjohRuinsOutside = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .sinjohRuinsMystriStage = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .sinjohRuinsCabin = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .embeddedTowerGroudon = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .embeddedTowerKyogre = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .embeddedTowerRayquaza = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route1AndViridianCityGate = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .frontierAccessPokemonCenter = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .frontierAccessPokemonCenterLower = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .frontierAccessPokmart = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .frontierAccessHouse = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .undergroundPath532 = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .route12House = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .safariZoneGatePokemonCenter = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .safariZoneGatePokemonCentreLower = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .goldenrodCityGameCorner = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .celadonCityGameCorner = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .mysteryZone = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

    .pokmonLeaguePokemonCentreLower = {
        .normalTreeCount = 0,
        .specialTreeCount = 0,
    },

};
