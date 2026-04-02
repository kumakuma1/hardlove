.nds
.thumb

// Thanks dray
// Adjust encounter rates

// These work by generating a number 0-99, then doing a load of >= checks
// The last one is == 99 so this has to be changed

.open "base/overlay/overlay_0002.bin", 0x02245B80

// Walking Encounters
// Change rates to 10/10/10/10/10/10/10/10/5/5/5/5

.org 0x022476A0

// 10%
.byte 10
.skip 9

// 10%
.byte 20
.skip 7
.byte 20
.skip 3

// 10%
.byte 30
.skip 7
.byte 30
.skip 3

// 10%
.byte 40
.skip 7
.byte 40
.skip 3

// 10%
.byte 50
.skip 7
.byte 50
.skip 3

// 10%
.byte 60
.skip 7
.byte 60
.skip 3

// 10%
.byte 70
.skip 7
.byte 70
.skip 3

// 10%
.byte 80
.skip 7
.byte 80
.skip 3

// 5%
.byte 85
.skip 7
.byte 85
.skip 3

// 5%
.byte 90
.skip 7

// 5%
// then values 95 - 99 activate last slot
.byte 95

// Changes instruction from i == 98 to i >= 98
.skip 2
.byte 0xD2

// Surfing Encounters
// Change rates to 30/30/25/10/5

.org 0x02247734

// 25%
.byte 30
.skip 9

// 25%
.byte 60
.skip 7
.byte 60
.skip 3

// 25%
.byte 85
.skip 7
.byte 85
.skip 3

// 20%
// then values 95 - 99 activate last slot
.byte 95

// Fishing Encounters
// Change rates to 30/30/25/10/5

.org 0x02247778

//25%
.byte 30
.skip 7

// 25%
.byte 60
.skip 7

// 25%
.byte 85
.skip 7

// 20%
// then values 95 - 99 activate last slot
.byte 95

.close