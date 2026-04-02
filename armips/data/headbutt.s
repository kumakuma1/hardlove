.include "armips/include/constants.s"
.include "armips/include/macros.s"

.include "asm/include/species.inc"

.nds
.thumb

// headbutt trees
// headbuttheader header, numberOfNormalTrees, numberOfSpecialTrees
// treecoords requires 6 pairs of x/y coordinates per tree.  fill the remaining pairs with -1's

headbuttheader   0,   0,   0   // EVERYWHERE 
.close

headbuttheader   1,   0,   0   // NOTHING
.close

headbuttheader   2,   0,   0   // Union Room
.close

headbuttheader   3,   0,   0   // UG 
.close

headbuttheader   4,   0,   0   // DIRECT2 
.close

headbuttheader   5,   0,   0   // DIRECT4
.close

headbuttheader   6,   0,   0   // Bellchime Trail
.close

headbuttheader   7,   0,   0   // Burned Tower (1F)
.close

headbuttheader   8,   0,   0   // Ruins Of Alph (Inside)
.close

headbuttheader   9,  20,   0   // Route 1
    // normal slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // special slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // normal trees
    treecoords 1033, 300, 1033, 301, 1034, 300, 1034, 301, -1, -1, -1, -1
    treecoords 1034, 307, 1034, 308, 1035, 308, -1, -1, -1, -1, -1, -1
    treecoords 1037, 306, 1037, 305, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1028, 312, 1028, 311, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1040, 314, 1041, 314, 1040, 312, 1041, 312, -1, -1, -1, -1
    treecoords 1048, 291, 1049, 291, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1050, 302, 1050, 303, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1049, 315, 1049, 316, 1050, 316, -1, -1, -1, -1, -1, -1
    treecoords 1046, 345, 1047, 345, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1027, 340, 1027, 341, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1036, 335, 1037, 334, 1037, 335, -1, -1, -1, -1, -1, -1
    treecoords 1028, 327, 1029, 327, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1030, 345, 1031, 345, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1052, 330, 1052, 331, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1052, 339, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1027, 322, 1027, 323, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1049, 305, 1049, 306, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1040, 329, 1041, 329, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1037, 349, 1037, 348, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1029, 292, 1029, 293, 1028, 293, -1, -1, -1, -1, -1, -1
.close

headbuttheader  10,  15,   0   // Route 2
    // normal slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // special slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // normal trees
    treecoords 1044, 197, 1045, 197, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1027, 194, 1027, 195, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1032, 203, 1032, 202, 1032, 201, 1033, 201, 1033, 203, -1, -1
    treecoords 1028, 207, 1029, 207, 1028, 209, 1029, 209, -1, -1, -1, -1
    treecoords 1032, 207, 1033, 207, 1032, 209, 1033, 209, -1, -1, -1, -1
    treecoords 1034, 221, 1035, 221, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1040, 221, 1041, 221, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1042, 211, 1042, 212, 1042, 213, 1043, 211, 1043, 212, 1043, 213
    treecoords 1052, 221, 1053, 221, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1054, 210, 1054, 211, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1054, 196, 1054, 197, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1047, 194, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1043, 204, 1043, 205, 1042, 204, 1042, 205, -1, -1, -1, -1
    treecoords 1027, 200, 1027, 201, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1042, 195, 1042, 194, -1, -1, -1, -1, -1, -1, -1, -1
.close

headbuttheader  11,   4,   0   // Route 3
    // normal slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // special slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // normal trees
    treecoords 1096, 98, 1096, 99, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1105, 104, 1105, 103, 1104, 104, 1104, 103, -1, -1, -1, -1
    treecoords 1121, 117, 1122, 117, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1113, 110, 1113, 109, 1114, 109, 1114, 110, -1, -1, -1, -1
.close

headbuttheader  12,   0,   0   // Route 4
.close

headbuttheader  13,   0,   0   // Route 5
.close

headbuttheader  14,   0,   0   // Route 6
.close

headbuttheader  15,   8,   0   // Route 7
    // normal slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // special slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // normal trees
    treecoords 1272, 237, 1273, 237, 1272, 236, -1, -1, -1, -1, -1, -1
    treecoords 1262, 228, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1257, 233, 1258, 233, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1253, 237, 1254, 237, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1259, 250, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1266, 251, 1267, 251, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1272, 249, 1272, 248, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1250, 243, 1251, 243, -1, -1, -1, -1, -1, -1, -1, -1
.close

headbuttheader  16,   5,   0   // Route 8
    // normal slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // special slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // normal trees
    treecoords 1376, 231, 1376, 232, 1377, 232, -1, -1, -1, -1, -1, -1
    treecoords 1401, 234, 1401, 233, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1397, 242, 1397, 241, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1393, 233, 1392, 233, 1392, 234, -1, -1, -1, -1, -1, -1
    treecoords 1392, 244, 1392, 243, 1393, 244, -1, -1, -1, -1, -1, -1
.close

headbuttheader  17,   0,   0   // Route 9
.close

headbuttheader  18,   0,   0   // Route 10
.close

headbuttheader  19,   0,   0   // Route 11
.close

headbuttheader  20,  10,   0   // Route 12
    // normal slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // special slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // normal trees
    treecoords 1417, 281, 1417, 280, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1417, 299, 1417, 298, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1409, 334, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1409, 348, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1414, 337, 1415, 337, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1414, 347, 1415, 347, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1417, 311, 1417, 310, 1417, 309, 1416, 309, -1, -1, -1, -1
    treecoords 1417, 325, 1417, 324, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1417, 327, 1417, 326, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1417, 287, 1417, 286, -1, -1, -1, -1, -1, -1, -1, -1
.close

headbuttheader  21,  15,   0   // Route 13
    // normal slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // special slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // normal trees
    treecoords 1346, 367, 1347, 367, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1384, 367, 1385, 367, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1366, 367, 1367, 367, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1353, 381, 1353, 380, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1365, 376, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1372, 376, 1373, 376, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1387, 376, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1402, 367, 1403, 367, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1429, 366, 1428, 367, 1428, 366, -1, -1, -1, -1, -1, -1
    treecoords 1429, 360, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1414, 367, 1415, 367, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1414, 373, 1415, 373, 1414, 372, -1, -1, -1, -1, -1, -1
    treecoords 1420, 363, 1421, 363, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1428, 373, 1429, 373, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1376, 367, 1377, 367, -1, -1, -1, -1, -1, -1, -1, -1
.close

headbuttheader  22,   3,   0   // Route 14
    // normal slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // special slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // normal trees
    treecoords 1353, 424, 1353, 425, 1353, 426, 1352, 424, -1, -1, -1, -1
    treecoords 1352, 406, 1353, 406, 1353, 405, 1353, 404, 1352, 404, -1, -1
    treecoords 1352, 388, 1353, 388, 1353, 389, 1353, 390, 1352, 390, -1, -1
.close

headbuttheader  23,  19,   0   // Route 15
    // normal slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // special slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // normal trees
    treecoords 1248, 419, 1249, 419, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1262, 419, 1263, 419, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1274, 426, 1275, 426, 1274, 427, 1274, 428, -1, -1, -1, -1
    treecoords 1280, 430, 1281, 430, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1282, 419, 1283, 419, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1296, 426, 1297, 426, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1300, 419, 1301, 419, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1316, 419, 1317, 419, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1316, 426, 1317, 426, 1316, 427, 1316, 428, 1317, 428, 1317, 427
    treecoords 1329, 429, 1329, 428, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1328, 419, 1329, 419, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1338, 419, 1339, 419, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1342, 425, 1342, 424, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1309, 426, 1310, 426, 1309, 428, 1310, 428, -1, -1, -1, -1
    treecoords 1338, 429, 1339, 429, 1339, 428, -1, -1, -1, -1, -1, -1
    treecoords 1286, 426, 1287, 426, 1287, 428, 1287, 427, -1, -1, -1, -1
    treecoords 1272, 419, 1273, 419, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1252, 425, 1253, 425, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1290, 419, 1291, 419, -1, -1, -1, -1, -1, -1, -1, -1
.close

headbuttheader  24,   2,   0   // Route 16
    // normal slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // special slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // normal trees
    treecoords 1141, 283, 1142, 283, 1141, 284, 1141, 285, -1, -1, -1, -1
    treecoords 1149, 279, 1150, 279, -1, -1, -1, -1, -1, -1, -1, -1
.close

headbuttheader  25,   0,   0   // Route 17
.close

headbuttheader  26,   3,   0   // Route 18
    // normal slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // special slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // normal trees
    treecoords 1170, 435, 1170, 434, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1178, 429, 1179, 429, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1172, 429, 1173, 429, -1, -1, -1, -1, -1, -1, -1, -1
.close

headbuttheader  27,   7,   0   // Route 22
    // normal slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // special slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // normal trees
    treecoords 986, 269, 986, 270, 985, 269, 985, 270, -1, -1, -1, -1
    treecoords 986, 278, 986, 277, 985, 278, 985, 277, -1, -1, -1, -1
    treecoords 975, 269, 976, 269, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 978, 279, 978, 278, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 973, 272, 973, 273, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 973, 281, 973, 280, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 978, 273, 978, 272, -1, -1, -1, -1, -1, -1, -1, -1
.close

headbuttheader  28,   0,   0   // Route 24
.close

headbuttheader  29,   0,   0   // Route 25
.close

headbuttheader  30,  0,   0   // Route 26
.close

headbuttheader  31,  0,   0   // Route 27
.close

headbuttheader  32,  0,   0   // Route 28
.close

headbuttheader  33,  0,   0   // Route 29
.close

headbuttheader  34,  0,   0   // Route 30
.close

headbuttheader  35,  0,   0   // Route 31
.close

headbuttheader  36,  0,   0   // Route 32
.close

headbuttheader  37,  0,   0   // Route 33
.close

headbuttheader  38,  0,   0   // Route 34
.close

headbuttheader  39,  0,   0   // Route 35
.close

headbuttheader  40,  0,   0   // Route 36
.close

headbuttheader  41,  0,   0   // Route 37
.close

headbuttheader  42,  0,   0   // Route 38
.close

headbuttheader  43,  0,   0   // Route 39
.close

headbuttheader  44,  0,   0   // Route 42
.close

headbuttheader  45,  0,   0   // Route 43
.close

headbuttheader  46,  0,   0   // Route 44
.close

headbuttheader  47,  0,   0   // Route 45
.close

headbuttheader  48,  0,   0   // Route 46
.close

headbuttheader  49,  17,   0   // Pallet Town
    // normal slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // special slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // normal trees
    treecoords 1028, 355, 1029, 355, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1030, 355, 1031, 355, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1034, 355, 1035, 355, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1048, 355, 1049, 355, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1030, 377, 1031, 377, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1027, 375, 1027, 374, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1027, 369, 1027, 368, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1027, 365, 1027, 364, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1027, 363, 1027, 362, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1050, 355, 1051, 355, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1048, 381, 1049, 381, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1050, 381, 1051, 381, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1052, 377, 1052, 376, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1052, 371, 1052, 370, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1052, 367, 1052, 366, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1052, 365, 1052, 364, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1052, 361, 1052, 369, -1, -1, -1, -1, -1, -1, -1, -1
.close

headbuttheader  50,  21,   0   // Viridian City
    // normal slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // special slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // normal trees
    treecoords 1032, 271, 1033, 271, 1033, 273, -1, -1, -1, -1, -1, -1
    treecoords 1033, 274, 1033, 275, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1028, 271, 1029, 271, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1014, 271, 1015, 271, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1013, 270, 1013, 269, 1012, 269, -1, -1, -1, -1, -1, -1
    treecoords 1044, 271, 1045, 271, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1054, 270, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1054, 269, 1054, 268, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1052, 267, 1053, 267, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1022, 271, 1023, 271, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1050, 263, 1050, 262, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1050, 261, 1050, 260, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1050, 251, 1050, 250, 1050, 249, 1051, 249, -1, -1, -1, -1
    treecoords 1054, 248, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1054, 243, 1054, 242, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1054, 247, 1054, 246, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1054, 239, 1054, 238, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1052, 231, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1048, 231, 1049, 231, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1044, 231, 1045, 231, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1040, 231, 1041, 231, -1, -1, -1, -1, -1, -1, -1, -1
.close

headbuttheader  51,  21,   2   // Pewter City
    // normal slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // special slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // normal trees
    treecoords 1052, 117, 1053, 117, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1060, 117, 1061, 117, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1070, 117, 1071, 117, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1040, 111, 1041, 111, 1040, 109, 1041, 109, -1, -1, -1, -1
    treecoords 1042, 111, 1043, 111, 1043, 110, 1043, 109, 1042, 109, -1, -1
    treecoords 1042, 99, 1043, 99, 1043, 101, -1, -1, -1, -1, -1, -1
    treecoords 1044, 101, 1045, 101, 1044, 99, 1045, 99, -1, -1, -1, -1
    treecoords 1052, 101, 1053, 101, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1043, 93, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1051, 93, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1061, 87, 1062, 87, 1061, 85, 1062, 85, -1, -1, -1, -1
    treecoords 1065, 87, 1066, 87, 1065, 85, 1066, 85, -1, -1, -1, -1
    treecoords 1065, 81, 1065, 80, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1066, 73, 1067, 73, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1062, 73, 1063, 73, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1060, 77, 1061, 77, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1029, 75, 1030, 75, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1031, 75, 1032, 75, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1030, 85, 1030, 84, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1030, 81, 1030, 80, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1030, 79, 1030, 78, 1030, 77, 1031, 77, -1, -1, -1, -1
    // special trees
    treecoords 1037, 119, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1037, 120, 1037, 121, -1, -1, -1, -1, -1, -1, -1, -1
.close

headbuttheader  52,   0,   0   // Cerulean City
.close

headbuttheader  53,   0,   0   // Lavender Town
.close

headbuttheader  54,   0,   0   // Vermilion City
.close

headbuttheader  55,  32,   0   // Celadon City
    // normal slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // special slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // normal trees
    treecoords 1198, 225, 1199, 225, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1200, 225, 1201, 225, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1204, 225, 1205, 225, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1210, 225, 1211, 225, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1216, 225, 1217, 225, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1220, 225, 1221, 225, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1222, 225, 1223, 225, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1234, 229, 1235, 229, 1234, 227, 1235, 227, -1, -1, -1, -1
    treecoords 1240, 237, 1241, 237, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1188, 255, 1189, 255, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1190, 255, 1191, 255, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1193, 249, 1193, 248, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1193, 247, 1193, 246, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1193, 243, 1193, 242, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1193, 269, 1193, 268, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1198, 273, 1199, 273, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1202, 273, 1203, 273, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1210, 273, 1211, 273, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1215, 271, 1216, 271, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1223, 271, 1224, 271, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1219, 267, 1220, 267, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1221, 267, 1222, 267, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1230, 271, 1231, 271, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1232, 271, 1233, 271, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1234, 271, 1235, 271, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1237, 269, 1237, 268, 1237, 267, 1236, 267, -1, -1, -1, -1
    treecoords 1240, 267, 1240, 266, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1240, 265, 1240, 264, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1240, 263, 1240, 262, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1237, 257, 1237, 256, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1238, 253, 1239, 253, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1240, 255, 1240, 254, -1, -1, -1, -1, -1, -1, -1, -1
.close

headbuttheader  56,  18,   0   // Fuchsia City
    // normal slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // special slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // normal trees
    treecoords 1193, 417, 1193, 416, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1193, 415, 1193, 414, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1193, 409, 1193, 408, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1193, 407, 1193, 406, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1195, 403, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1198, 403, 1199, 403, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1200, 403, 1201, 403, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1204, 403, 1205, 403, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1208, 403, 1209, 403, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1210, 403, 1211, 403, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1220, 403, 1221, 403, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1226, 403, 1227, 403, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1228, 403, 1229, 403, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1230, 403, 1231, 403, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1234, 403, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1236, 405, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1236, 413, 1236, 412, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1236, 409, 1236, 408, -1, -1, -1, -1, -1, -1, -1, -1
.close

headbuttheader  57,   0,   0   // Cinnabar Island
.close

headbuttheader  58,   0,   0   // Indigo Plateau
.close

headbuttheader  59,   0,   0   // Saffron City
.close

headbuttheader  60,   0,   0   // New Bark Town
.close

headbuttheader  61,   0,   0   // Elms Lab (1F)
.close

headbuttheader  62,   0,   0   // Elms Lab (2F)
.close

headbuttheader  63,   0,   0   // Moms House (1F)
.close

headbuttheader  64,   0,   0   // Moms House (2F)
.close

headbuttheader  65,   0,   0   // New Bark Town House
.close

headbuttheader  66,   0,   0   // Ethan / Lyras House (1F)
.close

headbuttheader  67,   0,   0   // Cherrygrove City
.close

headbuttheader  68,   0,   0   // Cherrygrove City Pokémart
.close

headbuttheader  69,   0,   0   // Cherrygrove City Pokémon Centre
.close

headbuttheader  70,   0,   0   // Cherrygrove City House
.close

headbuttheader  71,   0,   0   // Cherrygrove City House
.close

headbuttheader  72,   0,   0   // Cherrygrove City House
.close

headbuttheader  73,   0,   0   // Violet City
.close

headbuttheader  74,  15,   0   // Azalea Town
    // normal slots
    headbuttencounter SPECIES_SPINARAK, 1, 10 	    //50%
    headbuttencounter SPECIES_SURSKIT, 1, 10	    //15%
    headbuttencounter SPECIES_WEEDLE, 1, 10         //15%
    headbuttencounter SPECIES_SPEAROW, 1, 10 	    //10%
    headbuttencounter SPECIES_VENIPEDE, 1, 10		//5%
    headbuttencounter SPECIES_SCATTERBUG, 1, 10	    //5%
    headbuttencounter SPECIES_BLIPBUG, 1, 10		//50%
    headbuttencounter SPECIES_COMBEE, 1, 10	        //15%
    headbuttencounter SPECIES_WEEDLE, 1, 10		    //15%
    headbuttencounter SPECIES_EXEGGCUTE, 1, 10		//10%
    headbuttencounter SPECIES_SIZZLIPEDE, 1, 10	    //5%
    headbuttencounter SPECIES_SIZZLIPEDE, 1, 10     //5%
    // special slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // normal trees
    treecoords 426, 465, 427, 465, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 424, 459, 425, 459, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 414, 455, 415, 455, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 406, 455, 407, 455, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 396, 449, 397, 449, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 393, 452, 393, 453, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 394, 467, 395, 467, 395, 468, 395, 469, -1, -1, -1, -1
    treecoords 395, 470, 395, 471, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 395, 472, 395, 473, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 398, 477, 399, 477, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 400, 477, 401, 477, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 402, 477, 403, 477, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 404, 477, 405, 477, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 410, 477, 411, 477, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 412, 477, 413, 477, -1, -1, -1, -1, -1, -1, -1, -1
.close

headbuttheader  75,   0,   0   // Cianwood City
.close

headbuttheader  76,   0,   0   // Goldenrod City
.close

headbuttheader  77,   0,   0   // Olivine City
.close

headbuttheader  78,   0,   0   // Ecruteak City
.close

headbuttheader  79,   0,   0   // Ecruteak City Pokémart
.close

headbuttheader  80,   0,   0   // Ecruteak City Gym
.close

headbuttheader  81,   0,   0   // Ecruteak Pokémon Centre
.close

headbuttheader  82,   0,   0   // Jubilife City ? (Unused)
.close

headbuttheader  83,   0,   0   // Barrier Station to Bell Tower
.close

headbuttheader  84,   0,   0   // Ecruteak City House
.close

headbuttheader  85,   0,   0   // Ecruteak City House
.close

headbuttheader  86,   0,   0   // Ecruteak Dance Theatre
.close

headbuttheader  87,   0,   0   // Mahogany Town
.close

headbuttheader  88,   0,   0   // Lake of Rage
.close

headbuttheader  89,   0,   0   // Blackthorn City
.close

headbuttheader  90,   0,   0   // Mt. Silver 
.close

headbuttheader  91,   0,   0   // Route 19
.close

headbuttheader  92,   0,   0   // Route 20
.close

headbuttheader  93,   3,   0   // Route 21
    // normal slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // special slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // normal trees
    treecoords 1046, 393, 1046, 392, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1046, 391, 1046, 390, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1046, 389, 1046, 388, -1, -1, -1, -1, -1, -1, -1, -1
.close

headbuttheader  94,   0,   0   // Route 40
.close

headbuttheader  95,   0,   0   // Route 41
.close

headbuttheader  96,   0,   0   // National Park
.close

headbuttheader  97,   0,   0   // Route 31 & Violet City Gate
.close

headbuttheader  98,   0,   0   // Route 32 & Ruins Of Alph Gate
.close

headbuttheader  99,   0,   0   // Union Cave 1F
.close

headbuttheader 100,   0,   0   // Azalea Town & Ilex Forest Gate
.close

headbuttheader 101,   0,   0   // Goldenrod City & Route 35 Gate
.close

headbuttheader 102,   0,   0   // Route 35 & National Park Gate
.close

headbuttheader 103,   0,   0   // Ruins Of Alph & Route 36 Gate
.close

headbuttheader 104,   0,   0   // National Park & Route 36 Gate
.close

headbuttheader 105,   0,   0   // Jubilife City ? (Unused)
.close

headbuttheader 106,   0,   0   // Digletts Cave
.close

headbuttheader 107,   0,   0   // Mt. Moon
.close

headbuttheader 108,   0,   0   // Rock Tunnel (1F)
.close

headbuttheader 109,   0,   0   // Pal Park
.close

headbuttheader 110,   0,   0   // Sprout Tower (1F)
.close

headbuttheader 111,   0,   0   // Bell Tower (1F)
.close

headbuttheader 112,   0,   0   // Radio Tower (1F)
.close

headbuttheader 113,   0,   0   // Ruins Of Alph (Outside)
.close

headbuttheader 114,   0,   0   // Slowpoke Well Entrance
.close

headbuttheader 115,   0,   0   // Olivine Lighthouse (1F)
.close

headbuttheader 116,   0,   0   // Mahogany Town Souvenir Shop
.close

headbuttheader 117,   0,   0   // Ilex Forest
.close

headbuttheader 118,   0,   0   // Goldenrod Tunnel
.close

headbuttheader 119,   0,   0   // Mt. Mortar (1F)
.close

headbuttheader 120,   0,   0   // Ice Path (1F)
.close

headbuttheader 121,   0,   0   // Whirl Islands
.close

headbuttheader 122,   0,   0   // Mt. Silver Cave
.close

headbuttheader 123,   0,   0   // Dark Cave (Route 45 entrance)
.close

headbuttheader 124,   0,   0   // Victory Road (1F)
.close

headbuttheader 125,   0,   0   // Dragons Den Entrance
.close

headbuttheader 126,   0,   0   // Tohjo Falls
.close

headbuttheader 127,   0,   0   // Route 30 House
.close

headbuttheader 128,   0,   0   // Ecruteak City ? (Union Room ?)
.close

headbuttheader 129,   0,   0   // Ecruteak City ? (Union Room ?) 
.close

headbuttheader 130,   0,   0   // Ecruteak City ? (Union Room ?)
.close

headbuttheader 131,   0,   0   // Ecruteak City Pokémon Centre (Lower) 
.close

headbuttheader 132,   0,   0   // Ecruteak City & Route 42 Gate
.close

headbuttheader 133,   0,   0   // Mahogany Town House
.close

headbuttheader 134,   0,   0   // Route 29 & Route 46 Gate
.close

headbuttheader 135,   0,   0   // Violet City Gym
.close

headbuttheader 136,   0,   0   // Azalea Gym (Entrance)
.close

headbuttheader 137,   0,   0   // Goldenrod City Gym
.close

headbuttheader 138,   0,   0   // Olivine City Gym
.close

headbuttheader 139,   0,   0   // Cianwood City Gym
.close

headbuttheader 140,   0,   0   // Mahogany City Gym (3rd Room)
.close

headbuttheader 141,   0,   0   // Blackthorn City Gym
.close

headbuttheader 142,   0,   0   // Route 43 Gate
.close

headbuttheader 143,   0,   0   // Mr Pokémons House
.close

headbuttheader 144,   0,   0   // Cherrygrove City Pokémon Centre (Lower)
.close

headbuttheader 145,   0,   0   // Cerulean Cave (1F)
.close

headbuttheader 146,   0,   0   // Seafoam Islands (1F)
.close

headbuttheader 147,  24,   0   // Viridian Forest
    // normal slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // special slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // normal trees
    treecoords 51, 73, 52, 73, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 49, 67, 50, 67, 50, 66, -1, -1, -1, -1, -1, -1
    treecoords 44, 62, 44, 61, 44, 60, 43, 60, 43, 61, 43, 62
    treecoords 40, 57, 41, 57, 41, 56, -1, -1, -1, -1, -1, -1
    treecoords 39, 58, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 39, 63, 39, 62, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 36, 65, 37, 65, 36, 64, -1, -1, -1, -1, -1, -1
    treecoords 26, 65, 27, 65, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 24, 65, 25, 65, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 22, 63, 22, 62, 22, 61, 23, 61, -1, -1, -1, -1
    treecoords 24, 53, 24, 52, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 10, 69, 10, 68, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 40, 48, 40, 47, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 40, 46, 40, 45, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 40, 44, 40, 43, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 40, 40, 40, 39, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 45, 40, 45, 39, 45, 38, 46, 40, 46, 39, 46, 38
    treecoords 45, 46, 45, 45, 46, 46, 46, 45, -1, -1, -1, -1
    treecoords 37, 28, 38, 28, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 29, 27, 29, 26, 28, 27, 28, 26, -1, -1, -1, -1
    treecoords 23, 27, 23, 26, 22, 27, 22, 26, -1, -1, -1, -1
    treecoords 23, 25, 23, 24, 22, 25, 22, 24, -1, -1, -1, -1
    treecoords 23, 23, 23, 22, 22, 23, 22, 22, -1, -1, -1, -1
    treecoords 17, 23, 17, 22, 16, 23, 16, 22, -1, -1, -1, -1
.close

headbuttheader 148,   0,   0   // Power Plant ? (Unused)
.close

headbuttheader 149,   0,   0   // Route 36 & Violet City Inbetween
.close

headbuttheader 150,   0,   0   // Route 35 & Pokéathlon Dome Inbetween
.close

headbuttheader 151,   0,   0   // Route 47
.close

headbuttheader 152,   0,   0   // Route 48
.close

headbuttheader 153,   0,   0   // Union Cave (B1F)
.close

headbuttheader 154,   0,   0   // Union Cave (B2F)
.close

headbuttheader 155,   0,   0   // Sprout Tower (2F)
.close

headbuttheader 156,   0,   0   // Sprout Tower (3F)
.close

headbuttheader 157,   0,   0   // Violet City Pokémart
.close

headbuttheader 158,   0,   0   // Violet City Pokémon Centre
.close

headbuttheader 159,   0,   0   // Violet City Pokémon School
.close

headbuttheader 160,   0,   0   // Violet City House
.close

headbuttheader 161,   0,   0   // Jubilife City (Unused)
.close

headbuttheader 162,   0,   0   // Violet City House
.close

headbuttheader 163,   0,   0   // Azalea Town Charcoal Kiln
.close

headbuttheader 164,   0,   0   // Azalea Town Kurts House
.close

headbuttheader 165,   0,   0   // Azalea Town Pokémart
.close

headbuttheader 166,   0,   0   // Azalea Town Pokémon Centre
.close

headbuttheader 167,   0,   0   // Violet City Pokémon Centre (Lower)
.close

headbuttheader 168,   0,   0   // Azalea Town Pokémon Centre (Lower)
.close

headbuttheader 169,   0,   0   // Route 32 Pokémon Centre
.close

headbuttheader 170,   0,   0   // Route 32 Pokémon Centre (Lower)
.close

headbuttheader 171,   0,   0   // Ilex Forest & Route 34 Gate
.close

headbuttheader 172,   0,   0   // Ecruteak & Route 38 Gate
.close

headbuttheader 173,   0,   0   // Safari Zone Gate (Inside)
.close

headbuttheader 174,   0,   0   // Safari Zone Gate (Outside)
.close

headbuttheader 175,   0,   0   // Jubilife City ? (Unused)
.close

headbuttheader 176,   0,   0   // Dark Cave (Route 31 entrance)
.close

headbuttheader 177,   0,   0   // Slowpoke Well (1F)
.close

headbuttheader 178,   0,   0   // Victory Road (2F)
.close

headbuttheader 179,   0,   0   // Victory Road (3F)
.close

headbuttheader 180,   0,   0   // Azalea Town Gym
.close

headbuttheader 181,   0,   0   // Slowpoke Well (B1F)
.close

headbuttheader 182,   0,   0   // Goldenrod City Bike Store
.close

headbuttheader 183,   0,   0   // Goldenrod City Game Corner (JAP)
.close

headbuttheader 184,   0,   0   // Goldenrod City Flower Shop
.close

headbuttheader 185,   0,   0   // Goldenrod City Pokémon Centre
.close

headbuttheader 186,   0,   0   // Goldenrod Radio Tower (2F)
.close

headbuttheader 187,   0,   0   // Goldenrod Radio Tower (3F)
.close

headbuttheader 188,   0,   0   // Goldenrod Radio Tower (4F)
.close

headbuttheader 189,   0,   0   // Goldenrod Radio Tower (5F)
.close

headbuttheader 190,   0,   0   // Goldenrod Radio Tower Observation Deck
.close

headbuttheader 191,   0,   0   // Goldenrod Department Store (1F)
.close

headbuttheader 192,   0,   0   // Goldenrod Department Store (2F)
.close

headbuttheader 193,   0,   0   // Goldenrod Department Store (3F)
.close

headbuttheader 194,   0,   0   // Goldenrod Department Store (4F)
.close

headbuttheader 195,   0,   0   // Goldenrod Department Store (5F)
.close

headbuttheader 196,   0,   0   // Goldenrod Department Store (6F)
.close

headbuttheader 197,   0,   0   // Goldenrod City Magnet Train Station
.close

headbuttheader 198,   0,   0   // Goldenrod City Magnet Train Station
.close

headbuttheader 199,   0,   0   // Goldenrod Tunnel   
.close

headbuttheader 200,   0,   0   // Goldenrod Department Store Basement 
.close

headbuttheader 201,   0,   0   // Goldenrod Tunnel (B2F)
.close

headbuttheader 202,   0,   0   // Goldenrod Tunnel Warehouse
.close

headbuttheader 203,   0,   0   // Goldenrod City House
.close

headbuttheader 204,   0,   0   // Goldenrod City House
.close

headbuttheader 205,   0,   0   // Goldenrod City House
.close

headbuttheader 206,   0,   0   // Goldenrod City Name Rater
.close

headbuttheader 207,   0,   0   // Global Terminal
.close

headbuttheader 208,   0,   0   // Goldenrod City House (1F)
.close

headbuttheader 209,   0,   0   // Goldenrod City House (2F)
.close

headbuttheader 210,   0,   0   // Goldenrod City House (3F)
.close

headbuttheader 211,   0,   0   // Goldenrod City House (4F)
.close

headbuttheader 212,   0,   0   // Goldenrod City House (5F)
.close

headbuttheader 213,   0,   0   // Goldenrod City House (6F)
.close

headbuttheader 214,   0,   0   // Moomoo Farm House
.close

headbuttheader 215,   0,   0   // Moomoo Farm Barn
.close

headbuttheader 216,   0,   0   // Barrier Station to Bell Tower & Bellchime Trail Path
.close

headbuttheader 217,   0,   0   // Burned Tower B1F
.close

headbuttheader 218,   0,   0   // Ruins of Alph (Inside)
.close

headbuttheader 219,   0,   0   // Goldenrod City Pokémon Centre (Lower)
.close

headbuttheader 220,   0,   0   // Glitter Lighthouse (2F)
.close

headbuttheader 221,   0,   0   // Glitter Lighthouse Exterior
.close

headbuttheader 222,   0,   0   // Glitter Lighthouse (3F)
.close

headbuttheader 223,   0,   0   // Glitter Lighthouse (4F)
.close

headbuttheader 224,   0,   0   // Glitter Lighthouse (5F)
.close

headbuttheader 225,   0,   0   // Glitter Lighthouse Light Room
.close

headbuttheader 226,   0,   0   // Olivine City Pokémon Centre
.close

headbuttheader 227,   0,   0   // Olivine City Pokémart
.close

headbuttheader 228,   0,   0   // Olivine City House
.close

headbuttheader 229,   0,   0   // Olivine City House
.close

headbuttheader 230,   0,   0   // Olivine City House
.close

headbuttheader 231,   0,   0   // Olivine City Café
.close

headbuttheader 232,   0,   0   // Cianwood City House
.close

headbuttheader 233,   0,   0   // Cianwood City Pharmacy
.close

headbuttheader 234,   0,   0   // Cianwood City House
.close

headbuttheader 235,   0,   0   // Cianwood City House
.close

headbuttheader 236,   0,   0   // Cianwood City Pokémon Centre
.close

headbuttheader 237,   0,   0   // (Ice Path B1F)
.close

headbuttheader 238,   0,   0   // Ice Path (B2F)
.close

headbuttheader 239,   0,   0   // Ice Path (B3F)
.close

headbuttheader 240,   0,   0   // Olivine City House
.close

headbuttheader 241,   0,   0   // Cianwood City Pokémon Centre (Lower)
.close

headbuttheader 242,   0,   0   // Whirl Islands (B1F)
.close

headbuttheader 243,   0,   0   // Whirl Islands (B2F)
.close

headbuttheader 244,   0,   0   // Whirl Islands (B3F)
.close

headbuttheader 245,   0,   0   // Route 43 Gate
.close

headbuttheader 246,   0,   0   // Mahogany Town Pokémon Centre
.close

headbuttheader 247,   0,   0   // Team Rocket HQ (B1F)
.close

headbuttheader 248,   0,   0   // Team Rocket HQ (B2F)
.close

headbuttheader 249,   0,   0   // Team Rocket HQ (B3F)
.close

headbuttheader 250,   0,   0   // Mt. Mortar (1F)
.close

headbuttheader 251,   0,   0   // Mt. Mortar (2F)
.close

headbuttheader 252,   0,   0   // Mt. Mortar (1F)
.close

headbuttheader 253,   0,   0   // Dragons Den (Main)
.close

headbuttheader 254,   0,   0   // Fight Area
.close

headbuttheader 255,   0,   0   // Fight Area
.close

headbuttheader 256,   0,   0   // Fight Area
.close

headbuttheader 257,   0,   0   // Fight Area
.close

headbuttheader 258,   0,   0   // Fight Area
.close

headbuttheader 259,   0,   0   // Fight Area
.close

headbuttheader 260,   0,   0   // Fight Area
.close

headbuttheader 261,   0,   0   // Fight Area
.close

headbuttheader 262,   0,   0   // Fight Area
.close

headbuttheader 263,   0,   0   // Battle Park
.close

headbuttheader 264,   0,   0   // Battle Park
.close

headbuttheader 265,   0,   0   // Battle Tower
.close

headbuttheader 266,   0,   0   // Battle Tower
.close

headbuttheader 267,   0,   0   // Battle Tower
.close

headbuttheader 268,   0,   0   // Battle Tower
.close

headbuttheader 269,   0,   0   // Battle Tower
.close

headbuttheader 270,   0,   0   // Battle Tower
.close

headbuttheader 271,   0,   0   // Battle Tower
.close

headbuttheader 272,   0,   0   // Battle Frontier
.close

headbuttheader 273,   0,   0   // Battle Frontier
.close

headbuttheader 274,   0,   0   // Battle Tower
.close

headbuttheader 275,   0,   0   // Battle Factory
.close

headbuttheader 276,   0,   0   // Battle Hall
.close

headbuttheader 277,   0,   0   // Battle Castle
.close

headbuttheader 278,   0,   0   // Battle Arcade
.close

headbuttheader 279,   0,   0   // Cliff Edge Gate
.close

headbuttheader 280,   0,   0   // Pokéathlon Dome (Outside)
.close

headbuttheader 281,   0,   0   // Pokéathlon Dome (Inside)
.close

headbuttheader 282,   0,   0   // Pokéathlon Dome (Inside)
.close

headbuttheader 283,   0,   0   // Pokéathlon Dome (Inside)
.close

headbuttheader 284,   0,   0   // Pokéathlon Dome (Inside)
.close

headbuttheader 285,   0,   0   // Pokéathlon Dome (Inside)
.close

headbuttheader 286,   0,   0   // Pokéathlon Dome (Inside)
.close

headbuttheader 287,   0,   0   // Pokéathlon Dome (Inside)
.close

headbuttheader 288,   0,   0   // Dragons Den (Shrine)
.close

headbuttheader 289,   0,   0   // Blackthorn City House
.close

headbuttheader 290,   0,   0   // Blackthorn City House
.close

headbuttheader 291,   0,   0   // Blackthorn City House
.close

headbuttheader 292,   0,   0   // Blackthorn City Pokémart
.close

headbuttheader 293,   0,   0   // Blackthorn City Pokémon Centre
.close

headbuttheader 294,   0,   0   // Lake of Rage House
.close

headbuttheader 295,   0,   0   // Lake of Rage House
.close

headbuttheader 296,   0,   0   // Route 26 House
.close

headbuttheader 297,   0,   0   // Route 26 Week Siblings House
.close

headbuttheader 298,   0,   0   // Tohjo Falls Hidden Room
.close

headbuttheader 299,   0,   0   // Pokémon League Reception Gate
.close

headbuttheader 300,   0,   0   // Pokémon League
.close

headbuttheader 301,   0,   0   // Pokémon League (Wills Room)
.close

headbuttheader 302,   0,   0   // Pokémon League (Kogas Room)
.close

headbuttheader 303,   0,   0   // Pokémon League (Brunos Room)
.close

headbuttheader 304,   0,   0   // Pokémon League (Karens Room)
.close

headbuttheader 305,   0,   0   // Pokémon League (Lances Room)
.close

headbuttheader 306,   0,   0   // Pokémon League (Hall of Fame)
.close

headbuttheader 307,   0,   0   // S.S Aqua
.close

headbuttheader 308,   0,   0   // S.S Aqua
.close

headbuttheader 309,   0,   0   // S.S Aqua
.close

headbuttheader 310,   0,   0   // S.S Aqua
.close

headbuttheader 311,   0,   0   // S.S Aqua
.close

headbuttheader 312,   0,   0   // Ruins of Alph (Entrance) 
.close

headbuttheader 313,   0,   0   // Ruins of Alph (Chamber 1)
.close

headbuttheader 314,   0,   0   // Ruins of Alph (Entrance) 
.close

headbuttheader 315,   0,   0   // Ruins of Alph (Underground Hall)
.close

headbuttheader 316,   0,   0   // Ruins of Alph (Entrance) 
.close

headbuttheader 317,   0,   0   // Ruins of Alph (Chamber 3)
.close

headbuttheader 318,   0,   0   // Ruins of Alph (Entrance) 
.close

headbuttheader 319,   0,   0   // Ruins of Alph (Chamber 4)
.close

headbuttheader 320,   0,   0   // Ruins of Alph (Chamber 2) 
.close

headbuttheader 321,   0,   0   // Ruins of Alph Research Center
.close

headbuttheader 322,   0,   0   // Route 27 House
.close

headbuttheader 323,   0,   0   // Ruins of Alph (Hall Entrance)
.close

headbuttheader 324,   0,   0   // Ruins of Alph (Entrance 2)
.close

headbuttheader 325,   0,   0   // Ruins of Alph (Entrance 2)
.close

headbuttheader 326,   0,   0   // Ruins of Alph (Entrance 2)
.close

headbuttheader 327,   0,   0   // Ruins of Alph (Entrance 2)
.close

headbuttheader 328,   0,   0   // S.S Aqua
.close

headbuttheader 329,   0,   0   // S.S Aqua
.close

headbuttheader 330,   0,   0   // Olivine Port
.close

headbuttheader 331,   0,   0   // Pokémon Daycare
.close

headbuttheader 332,   0,   0   // Bell Tower (2F)
.close

headbuttheader 333,   0,   0   // Bell Tower (3F)
.close

headbuttheader 334,   0,   0   // Bell Tower (4F)
.close

headbuttheader 335,   0,   0   // Bell Tower (5F)
.close

headbuttheader 336,   0,   0   // Bell Tower (6F)
.close

headbuttheader 337,   0,   0   // Bell Tower (7F)
.close

headbuttheader 338,   0,   0   // Bell Tower (8F)
.close

headbuttheader 339,   0,   0   // Bell Tower (9F)
.close

headbuttheader 340,   0,   0   // Bell Tower Roof
.close

headbuttheader 341,   0,   0   // Bell Tower (10F)
.close

headbuttheader 342,   0,   0   // Cliff Cave
.close

headbuttheader 343,   0,   0   // Safari Zone
.close

headbuttheader 344,   0,   0   // Safari Zone
.close

headbuttheader 345,   0,   0   // Safari Zone
.close

headbuttheader 346,   0,   0   // Safari Zone
.close

headbuttheader 347,   0,   0   // Safari Zone
.close

headbuttheader 348,   0,   0   // Safari Zone
.close

headbuttheader 349,   0,   0   // Safari Zone
.close

headbuttheader 350,   0,   0   // Safari Zone
.close

headbuttheader 351,   0,   0   // Safari Zone
.close

headbuttheader 352,   0,   0   // Safari Zone
.close

headbuttheader 353,   0,   0   // Safari Zone
.close

headbuttheader 354,   0,   0   // Safari Zone
.close

headbuttheader 355,   0,   0   // Safari Zone
.close

headbuttheader 356,   0,   0   // Safari Zone
.close

headbuttheader 357,   0,   0   // Safari Zone
.close

headbuttheader 358,   0,   0   // Vermilion City Pokémon Centre
.close

headbuttheader 359,   0,   0   // Vermilion City Pokémon Centre (Lower)
.close

headbuttheader 360,   0,   0   // Vermilion City Pokémart
.close

headbuttheader 361,   0,   0   // Vermilion City Pokémon Centre
.close

headbuttheader 362,   0,   0   // Vermilion City Pokémon Fan Club
.close

headbuttheader 363,   0,   0   // Vermilion City House
.close

headbuttheader 364,   0,   0   // Vermilion City House
.close

headbuttheader 365,   0,   0   // Vermilion City Gym
.close

headbuttheader 366,   0,   0   // Route 40 & Frontier Access Gate
.close

headbuttheader 367,   0,   0   // Olivine City Pokémon Center (Lower)
.close

headbuttheader 368,   0,   0   // Mahogany Town Pokémon Center (Lower)
.close

headbuttheader 369,   0,   0   // Blackthorn Town Pokémon Center (Lower)
.close

headbuttheader 370,   0,   0   // Celadon City Department Store (1F)
.close

headbuttheader 371,   0,   0   // Celadon City Department Store (2F)
.close

headbuttheader 372,   0,   0   // Celadon City Department Store (3F)
.close

headbuttheader 373,   0,   0   // Celadon City Department Store (4F)
.close

headbuttheader 374,   0,   0   // Celadon City Department Store (5F)
.close

headbuttheader 375,   0,   0   // Celadon City Department Store (6F)
.close

headbuttheader 376,   0,   0   // Celadon Condominiums (1F)
.close

headbuttheader 377,   0,   0   // Celadon Condominiums (2F)
.close

headbuttheader 378,   0,   0   // Celadon Condominiums (3F)
.close

headbuttheader 379,   0,   0   // Celadon Condominiums (4F)
.close

headbuttheader 380,   0,   0   // Celadon Condominiums (5F)
.close

headbuttheader 381,   0,   0   // Celadon Game Corner (Main, JP)
.close

headbuttheader 382,   0,   0   // Celadon Game Corner (Prize Building, JP)
.close

headbuttheader 383,   0,   0   // Celadon City House
.close

headbuttheader 384,   0,   0   // Ethan / Lyras House (2F)
.close

headbuttheader 385,   0,   0   // Cianwood City House
.close

headbuttheader 386,   0,   0   // Vermilion Port
.close

headbuttheader 387,   0,   0   // Vermilion Port
.close

headbuttheader 388,   0,   0   // Route 10
.close

headbuttheader 389,   0,   0   // Route 6 & Saffron City Gate
.close

headbuttheader 390,   0,   0   // Route 8 & Saffron City Gate
.close

headbuttheader 391,   0,   0   // Route 5 & Saffron City Gate
.close

headbuttheader 392,   0,   0   // Route 15 & Fushsia City Gate
.close

headbuttheader 393,   0,   0   // Celadon City Pokémon Centre
.close

headbuttheader 394,   0,   0   // Celadon City Pokémon Centre (Lower)
.close

headbuttheader 395,   0,   0   // Celadon City Gym
.close

headbuttheader 396,   0,   0   // Mahogany Town Gym (2nd Room)
.close

headbuttheader 397,   0,   0   // Mahogany Town Gym (1st Room)
.close

headbuttheader 398,   0,   0   // Saffron City Fighting Dojo
.close

headbuttheader 399,   0,   0   // Saffron City House
.close

headbuttheader 400,   0,   0   // Saffron City Magnet Train Station
.close

headbuttheader 401,   0,   0   // Saffron City Magnet Train Station
.close

headbuttheader 402,   0,   0   // Saffron City Magnet Train Station (?)
.close

headbuttheader 403,   0,   0   // ROTOMs Room
.close

headbuttheader 404,   0,   0   // Saffron City House
.close

headbuttheader 405,   0,   0   // Saffron City House
.close

headbuttheader 406,   0,   0   // Saffron City House
.close

headbuttheader 407,   0,   0   // Saffron City Pokémon Center
.close

headbuttheader 408,   0,   0   // Saffron City Pokémon Center (Lower)
.close

headbuttheader 409,   0,   0   // Saffron City Pokémart
.close

headbuttheader 410,   0,   0   // Saffron City Gym
.close

headbuttheader 411,   0,   0   // Frontier Access
.close

headbuttheader 412,   0,   0   // Global Terminal (2F)
.close

headbuttheader 413,   0,   0   // Global Terminal (3F)
.close

headbuttheader 414,  13,   0   // Route 2
    // normal slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // special slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // normal trees
    treecoords 1032, 138, 1032, 137, 1033, 137, 1033, 138, 1033, 139, -1, -1
    treecoords 1054, 162, 1054, 163, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1043, 137, 1043, 139, 1044, 138, 1044, 139, -1, -1, -1, -1
    treecoords 1040, 141, 1041, 141, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1045, 158, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1047, 179, 1047, 178, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1054, 157, 1054, 156, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1054, 139, 1054, 138, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1054, 130, 1054, 131, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1054, 183, 1054, 182, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1045, 164, 1045, 165, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1054, 167, 1054, 166, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1047, 174, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1
.close

headbuttheader 415,   0,   0   // Route 16 House
.close

headbuttheader 416,   0,   0   // Route 20 (Unused?)
.close

headbuttheader 417,   0,   0   // Route 2
.close

headbuttheader 418,   0,   0   // Route 2 & Pewter City Gate
.close

headbuttheader 419,   0,   0   // Route 2 & Viridian City Gate
.close

headbuttheader 420,   0,   0   // Route 2 Gate
.close

headbuttheader 421,   0,   0   // Route 16 Gate
.close

headbuttheader 422,   5,   0   // Route 16
    // normal slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // special slots
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    headbuttencounter SPECIES_NONE, 0, 0
    // normal trees
    treecoords 1162, 263, 1163, 263, 1162, 262, -1, -1, -1, -1, -1, -1
    treecoords 1167, 261, 1167, 260, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1163, 280, 1164, 280, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1174, 277, 1174, 276, -1, -1, -1, -1, -1, -1, -1, -1
    treecoords 1178, 261, 1179, 261, -1, -1, -1, -1, -1, -1, -1, -1
.close

headbuttheader 423,   0,   0   // Route 18 Gate
.close

headbuttheader 424,   0,   0   // Route 19 & Fushsia City Gate
.close

headbuttheader 425,   0,   0   // Route 11 & Route 12 Gate
.close

headbuttheader 426,   0,   0   // Cerulean City Pokémart
.close

headbuttheader 427,   0,   0   // Cerulean City Gym
.close

headbuttheader 428,   0,   0   // Cerulean City Pokémon Centre
.close

headbuttheader 429,   0,   0   // Cerulean City House
.close

headbuttheader 430,   0,   0   // Cerulean City House
.close

headbuttheader 431,   0,   0   // Cerulean City House
.close

headbuttheader 432,   0,   0   // Cerulean City Bike Shop
.close

headbuttheader 433,   0,   0   // Lavender Town Pokémart
.close

headbuttheader 434,   0,   0   // Lavender Town Pokémon Centre
.close

headbuttheader 435,   0,   0   // Lavender Town House
.close

headbuttheader 436,   0,   0   // Lavender Town House
.close

headbuttheader 437,   0,   0   // Lavender Town Name Rater
.close

headbuttheader 438,   0,   0   // House of Memories
.close

headbuttheader 439,   0,   0   // Lavender Town Radio Tower
.close

headbuttheader 440,   0,   0   // Sea Cottage
.close

headbuttheader 441,   0,   0   // Goldenrod City Elevator
.close

headbuttheader 442,   0,   0   // Celadon City Elevator
.close

headbuttheader 443,   0,   0   // Celadon City Elevator
.close

headbuttheader 444,   0,   0   // Celadon City Elevator
.close

headbuttheader 445,   0,   0   // Saffron City Elevator
.close

headbuttheader 446,   0,   0   // Lighthouse Elevator
.close

headbuttheader 447,   0,   0   // Radio Tower Elevator
.close

headbuttheader 448,   0,   0   // Mt. Moon Entrance
.close

headbuttheader 449,   0,   0   // Mt. Moon Square
.close

headbuttheader 450,   0,   0   // Cerulean Cave (2F)
.close

headbuttheader 451,   0,   0   // Cerulean Cave (B1F)
.close

headbuttheader 452,   0,   0   // Rock Tunnel (B1F)
.close

headbuttheader 453,   0,   0   // Seafoam Islands (B1F)
.close

headbuttheader 454,   0,   0   // Seafoam Islands (B2F)
.close

headbuttheader 455,   0,   0   // Seafoam Islands (B3F)
.close

headbuttheader 456,   0,   0   // Seafoam Islands (B4F)
.close

headbuttheader 457,   0,   0   // Cinnabar Gym
.close

headbuttheader 458,   0,   0   // Cinnabar Gym (?)
.close

headbuttheader 459,   0,   0   // Mt. Silver Cave (Upper Mountainside)
.close

headbuttheader 460,   0,   0   // Mt. Silver Cave (Lower Mountainside)
.close

headbuttheader 461,   0,   0   // Mt. Silver Cave (Expert Belt Chamber)
.close

headbuttheader 462,   0,   0   // Mt. Silver Cave (Moltres Chamber)
.close

headbuttheader 463,   0,   0   // Mt. Silver Cave (2F)
.close

headbuttheader 464,   0,   0   // Mt. Silver Cave (3F)
.close

headbuttheader 465,   0,   0   // Mt. Silver Cave (Summit)
.close

headbuttheader 466,   0,   0   // Route 10 Pokémon Centre
.close

headbuttheader 467,   0,   0   // Power Plant
.close

headbuttheader 468,   0,   0   // Underground Path
.close

headbuttheader 469,   0,   0   // Route 5 Underground Path Entrance
.close

headbuttheader 470,   0,   0   // Route 6 Underground Path Entrance
.close

headbuttheader 471,   0,   0   // Pewter Museum of Science
.close

headbuttheader 472,   0,   0   // Pewter City House
.close

headbuttheader 473,   0,   0   // Pewter City Gym
.close

headbuttheader 474,   0,   0   // Pewter City Pokémart
.close

headbuttheader 475,   0,   0   // Pewter City Pokémon Centre
.close

headbuttheader 476,   0,   0   // Pewter City Pokémon Centre (Lower)
.close

headbuttheader 477,   0,   0   // Pewter City House
.close

headbuttheader 478,   0,   0   // Fushsia City Pokémart
.close

headbuttheader 479,   0,   0   // Pal Park (Inside)
.close

headbuttheader 480,   0,   0   // Fushsia City Gym
.close

headbuttheader 481,   0,   0   // Fushsia City House
.close

headbuttheader 482,   0,   0   // Fushsia City Pokémon Centre
.close

headbuttheader 483,   0,   0   // Fushsia City House
.close

headbuttheader 484,   0,   0   // Route 10 Pokémon Centre (Lower)
.close

headbuttheader 485,   0,   0   // Fuchsia City Pokémon Centre (Lower)
.close

headbuttheader 486,   0,   0   // Whirl Islands (Lugias Room)
.close

headbuttheader 487,   0,   0   // National Park (Bug Catching Contest?)
.close

headbuttheader 488,   0,   0   // National Park (Bug Catching Contest National Dex?)
.close

headbuttheader 489,   0,   0   // Power Plant
.close

headbuttheader 490,   0,   0   // Ruins of Alph (Underground Hall)
.close

headbuttheader 491,   0,   0   // Ruins of Alph (Hall Entrance)
.close

headbuttheader 492,   0,   0   // Ruins of Alph (Underground Hall)
.close

headbuttheader 493,   0,   0   // Route 7 & Saffron City Gate
.close

headbuttheader 494,   0,   0   // Lavender Town Pokémon Centre (Lower)
.close

headbuttheader 495,   0,   0   // Cerulean City Pokémon Centre (Lower)
.close

headbuttheader 496,   0,   0   // Viridian City Gym
.close

headbuttheader 497,   0,   0   // Viridian City House
.close

headbuttheader 498,   0,   0   // Viridian City Trainer House
.close

headbuttheader 499,   0,   0   // Viridian City Trainer House 2F
.close

headbuttheader 500,   0,   0   // Viridian City Pokémart
.close

headbuttheader 501,   0,   0   // Viridian City Pokémon Centre 
.close

headbuttheader 502,   0,   0   // Viridian City Pokémon Centre (Lower)
.close

headbuttheader 503,   0,   0   // Pallet Town Reds House 1F
.close

headbuttheader 504,   0,   0   // Pallet Town Blues House 1F
.close

headbuttheader 505,   0,   0   // Oaks Lab
.close

headbuttheader 506,   0,   0   // Pallet Town Reds House 2F
.close

headbuttheader 507,   0,   0   // Pallet Town Blues House 2F
.close

headbuttheader 508,   0,   0   // Cinnabar Island Pokémon Centre
.close

headbuttheader 509,   0,   0   // Cinnabar Island Pokémon Centre (Lower)
.close

headbuttheader 510,   0,   0   // Route 28 House
.close

headbuttheader 511,   0,   0   // Route 3 Pokémon Centre
.close

headbuttheader 512,   0,   0   // Route 3 Pokémon Centre (Lower)
.close

headbuttheader 513,   0,   0   // Mt. Moon Square
.close

headbuttheader 514,   0,   0   // Mt. Silver Pokémon Centre
.close

headbuttheader 515,   0,   0   // Mt. Silver Pokémon Centre (Lower)
.close

headbuttheader 516,   0,   0   // HIROBA
.close

headbuttheader 517,   0,   0   // Route 5 House
.close

headbuttheader 518,   0,   0   // Mt. Moon Square House
.close

headbuttheader 519,   0,   0   // Goldenrod City Magnet Train Station
.close

headbuttheader 520,   0,   0   // Saffron City Magnet Train Station
.close

headbuttheader 521,   0,   0   // Sinjoh Ruins (Outside)
.close

headbuttheader 522,   0,   0   // Sinjoh Ruins (Mystri Stage)
.close

headbuttheader 523,   0,   0   // Sinjoh Ruins Cabin
.close

headbuttheader 524,   0,   0   // Embedded Tower (Groudon)
.close

headbuttheader 525,   0,   0   // Embedded Tower (Kyogre)
.close

headbuttheader 526,   0,   0   // Embedded Tower (Rayquaza)
.close

headbuttheader 527,   0,   0   // Route 1 & Viridian City Gate
.close

headbuttheader 528,   0,   0   // Frontier Access Pokémon Center
.close

headbuttheader 529,   0,   0   // Frontier Access Pokémon Center (Lower)
.close

headbuttheader 530,   0,   0   // Frontier Access Pokémart
.close

headbuttheader 531,   0,   0   // Frontier Access House
.close

headbuttheader 532,   0,   0   // Underground Path
.close

headbuttheader 533,   0,   0   // Route 12 House
.close

headbuttheader 534,   0,   0   // Safari Zone Gate Pokémon Center
.close

headbuttheader 535,   0,   0   // Safari Zone Gate Pokémon Centre (Lower)
.close

headbuttheader 536,   0,   0   // Goldenrod City Game Corner
.close

headbuttheader 537,   0,   0   // Celadon City Game Corner
.close

headbuttheader 538,   0,   0   // Mystery Zone
.close

headbuttheader 539,   0,   0   // Pokémon League Pokémon Centre (Lower)
.close
