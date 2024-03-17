.nds
.thumb

// Thanks dray
// Adjust encounter rates

// These work by generating a number 0-99, then doing a load of >= checks
// The last one is == 99 so this has to be changed

.open "base/overlay/overlay_0002.bin", 0x02245B80

// Fishing Encounters
// Change rates to 25/25/25/20/5

.org 0x02247778

//25%
.byte 25
.skip 7

// 25%
.byte 50
.skip 7

// 25%
.byte 75
.skip 7

// 20%
// then values 95 - 99 activate last slot
.byte 95

.close