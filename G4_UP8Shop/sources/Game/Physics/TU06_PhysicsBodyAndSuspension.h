#pragma once
// ============================================================================
// TU06_PhysicsBodyAndSuspension.h
// Complete Translation Unit [06/41]
// Binary Range in lib/x86/libGangstar4.so: 0x681e40 .. 0x6b9e80 (224 KB)
// Total Decompiled Functions in TU: 828 (100% coverage)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// Function Table in Translation Unit:
// [0x681e40] (354 bytes) sub_681E40
// int sub_681E40();
// [0x681fb0] (493 bytes) sub_681FB0
// int sub_681FB0(int a1, float a2, int a3);
// [0x6821a8] (1 bytes) nullsub_120
// void nullsub_120();
// [0x6821b8] (1 bytes) nullsub_121
// void nullsub_121();
// [0x6821c0] (7 bytes) sub_6821C0
// int sub_6821C0(int a1, int a2);
// [0x6821d0] (54 bytes) sub_6821D0
// int sub_6821D0(int a1, float a2);
// [0x682210] (7 bytes) sub_682210
// int sub_682210(int a1, int a2);
// [0x682220] (35 bytes) sub_682220
// int sub_682220(int a1, int a2);
// [0x682250] (25 bytes) sub_682250
// void sub_682250();
// [0x682270] (19 bytes) sub_682270
// bool *sub_682270(bool *a1, int a2);
// [0x682290] (79 bytes) sub_682290
// uint8_t *sub_682290(uint8_t *a1, uint32_t **a2);
// [0x6822e0] (106 bytes) sub_6822E0
// bool *sub_6822E0(bool *a1, uint32_t **a2, int a3, int a4);
// [0x682350] (58 bytes) sub_682350
// int sub_682350(uint32_t **a1);
// [0x682390] (7 bytes) sub_682390
// int sub_682390(int a1);
// [0x6823a0] (7 bytes) sub_6823A0
// int sub_6823A0(int a1);
// [0x6823b0] (7 bytes) sub_6823B0
// int sub_6823B0(int a1);
// [0x6823c0] (7 bytes) sub_6823C0
// int sub_6823C0(int a1);
// [0x6823d0] (60 bytes) sub_6823D0
// uint32_t *sub_6823D0(uint32_t *a1);
// [0x682410] (7 bytes) sub_682410
// int sub_682410(int a1);
// [0x682420] (65 bytes) sub_682420
// uint8_t *sub_682420(uint8_t *a1, int a2, int a3, int a4);
// [0x682470] (7 bytes) sub_682470
// int sub_682470(int a1);
// [0x682480] (150 bytes) sub_682480
// uint8_t *sub_682480(uint8_t *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);
// [0x682520] (7 bytes) sub_682520
// int sub_682520(int a1);
// [0x682530] (297 bytes) sub_682530
// uint8_t *sub_682530(uint8_t *a1, int a2, uint32_t *a3, uint32_t *a4, int a5, int a6, int a7);
// [0x682660] (7 bytes) sub_682660
// int sub_682660(int a1);
// [0x682670] (78 bytes) sub_682670
// uint8_t *sub_682670(uint8_t *a1, int a2, int a3, int a4, int a5);
// [0x6826c0] (7 bytes) sub_6826C0
// int sub_6826C0(int a1);
// [0x6826d0] (65 bytes) sub_6826D0
// uint8_t *sub_6826D0(uint8_t *a1, int a2, int a3, int a4);
// [0x682720] (15 bytes) sub_682720
// int sub_682720(uint32_t *a1);
// [0x682730] (43 bytes) sub_682730
// int sub_682730(int a1);
// [0x682768] (1 bytes) nullsub_122
// void nullsub_122();
// [0x682770] (29 bytes) sub_682770
// int sub_682770(int a1, int a2);
// [0x682790] (34 bytes) sub_682790
// bool sub_682790(int a1);
// [0x6827c0] (15 bytes) sub_6827C0
// int sub_6827C0(uint32_t *a1);
// [0x6827d0] (42 bytes) sub_6827D0
// int sub_6827D0(int a1);
// [0x682800] (15 bytes) sub_682800
// int sub_682800(uint32_t *a1);
// [0x682810] (29 bytes) sub_682810
// bool sub_682810(int a1);
// [0x682830] (18 bytes) sub_682830
// int sub_682830(uint32_t *a1);
// [0x682850] (46 bytes) sub_682850
// int sub_682850(int a1);
// [0x682880] (15 bytes) sub_682880
// int sub_682880(int a1);
// [0x682890] (114 bytes) sub_682890
// float *sub_682890(float *a1, int a2);
// [0x682910] (15 bytes) sub_682910
// int sub_682910(int a1);
// [0x682920] (103 bytes) sub_682920
// uint32_t *sub_682920(uint32_t *a1, int a2);
// [0x682990] (18 bytes) sub_682990
// int sub_682990(int a1);
// [0x6829b0] (114 bytes) sub_6829B0
// float *sub_6829B0(float *a1, int a2);
// [0x682a30] (18 bytes) sub_682A30
// int sub_682A30(int a1);
// [0x682a50] (128 bytes) sub_682A50
// uint32_t *sub_682A50(uint32_t *a1, int a2);
// [0x682ad0] (18 bytes) sub_682AD0
// int sub_682AD0(uint32_t *a1);
// [0x682af0] (27 bytes) sub_682AF0
// long double sub_682AF0(int a1);
// [0x682b10] (18 bytes) sub_682B10
// int sub_682B10(uint32_t *a1);
// [0x682b30] (27 bytes) sub_682B30
// long double sub_682B30(int a1);
// [0x682b50] (18 bytes) sub_682B50
// int sub_682B50(int a1);
// [0x682b70] (118 bytes) sub_682B70
// uint32_t *sub_682B70(uint32_t *a1, int a2);
// [0x682bf0] (18 bytes) sub_682BF0
// int sub_682BF0(int a1);
// [0x682c10] (158 bytes) sub_682C10
// float *sub_682C10(float *a1, int a2);
// [0x682cb0] (18 bytes) sub_682CB0
// int sub_682CB0(uint32_t *a1);
// [0x682cd0] (74 bytes) sub_682CD0
// int sub_682CD0(int a1);
// [0x682d20] (20 bytes) sub_682D20
// int sub_682D20(int (***a1)(uint32_t));
// [0x682d48] (1 bytes) nullsub_123
// void nullsub_123();
// [0x682d58] (1 bytes) nullsub_124
// void nullsub_124();
// [0x682d60] (9 bytes) sub_682D60
// int sub_682D60();
// [0x682d70] (18 bytes) sub_682D70
// int sub_682D70(int a1, int a2);
// [0x682d90] (347 bytes) sub_682D90
// int sub_682D90(int a1, float a2, char a3);
// [0x682ef0] (66 bytes) sub_682EF0
// void sub_682EF0(int a1);
// [0x682f40] (181 bytes) sub_682F40
// int sub_682F40(int a1, int a2, uint8_t a3, int a4);
// [0x683000] (14 bytes) sub_683000
// int sub_683000(int a1, int a2);
// [0x683010] (16 bytes) sub_683010
// int sub_683010(int a1);
// [0x683020] (14 bytes) sub_683020
// int sub_683020(int a1, int a2);
// [0x683030] (18 bytes) sub_683030
// int sub_683030(int a1, int a2);
// [0x683050] (467 bytes) sub_683050
// float *sub_683050(int a1, int a2, float *a3);
// [0x683230] (22 bytes) sub_683230
// int sub_683230(int a1, int a2);
// [0x683250] (9 bytes) sub_683250
// int sub_683250();
// [0x683260] (9 bytes) sub_683260
// int sub_683260();
// [0x683270] (15 bytes) sub_683270
// int sub_683270(uint32_t *a1, int a2);
// [0x683280] (80 bytes) sub_683280
// int sub_683280(uint32_t *a1, int a2);
// [0x6832d0] (145 bytes) sub_6832D0
// int sub_6832D0(int a1, int a2);
// [0x683370] (9 bytes) sub_683370
// int sub_683370();
// [0x683380] (9 bytes) sub_683380
// int sub_683380();
// [0x683390] (57 bytes) sub_683390
// int sub_683390(int a1, int a2);
// [0x6833d0] (343 bytes) sub_6833D0
// int sub_6833D0(int *a1, int a2);
// [0x683530] (59 bytes) sub_683530
// int sub_683530(int a1);
// [0x683570] (47 bytes) sub_683570
// int sub_683570(int a1);
// [0x6835a0] (30 bytes) sub_6835A0
// bool sub_6835A0(int a1);
// [0x6835c0] (43 bytes) sub_6835C0
// int sub_6835C0(int a1);
// [0x6835f0] (31 bytes) sub_6835F0
// int sub_6835F0(int a1);
// [0x683610] (45 bytes) sub_683610
// uint32_t *sub_683610(int a1);
// [0x683640] (52 bytes) sub_683640
// uint32_t *sub_683640(uint32_t *a1);
// [0x683680] (54 bytes) sub_683680
// int sub_683680(int a1);
// [0x6836c0] (122 bytes) sub_6836C0
// int sub_6836C0(uint32_t *a1);
// [0x683740] (18 bytes) sub_683740
// int sub_683740(uint32_t *a1);
// [0x683760] (60 bytes) sub_683760
// int sub_683760(uint32_t *a1);
// [0x6837a0] (56 bytes) sub_6837A0
// int sub_6837A0(uint32_t *a1);
// [0x6837e0] (21 bytes) sub_6837E0
// int sub_6837E0(int a1, int a2);
// [0x683800] (150 bytes) sub_683800
// bool sub_683800(int a1, int a2);
// [0x6838a0] (48 bytes) sub_6838A0
// bool sub_6838A0(int a1);
// [0x6838d0] (18 bytes) sub_6838D0
// int sub_6838D0(uint32_t *a1, int a2);
// [0x6838f0] (269 bytes) sub_6838F0
// int sub_6838F0(int *a1, float *a2);
// [0x683a00] (18 bytes) sub_683A00
// int sub_683A00(uint32_t *a1, float a2);
// [0x683a20] (50 bytes) sub_683A20
// int sub_683A20(int a1, float a2);
// [0x683a60] (18 bytes) sub_683A60
// int sub_683A60(uint32_t *a1, float a2);
// [0x683a80] (50 bytes) sub_683A80
// int sub_683A80(int a1, float a2);
// [0x683ac0] (43 bytes) sub_683AC0
// int sub_683AC0(int a1);
// [0x683af0] (51 bytes) sub_683AF0
// int sub_683AF0(int a1, int a2);
// [0x683b30] (43 bytes) sub_683B30
// int sub_683B30(int a1);
// [0x683b60] (37 bytes) sub_683B60
// int sub_683B60(int a1);
// [0x683b90] (100 bytes) sub_683B90
// int sub_683B90(int a1, int a2, int a3);
// [0x683c00] (178 bytes) sub_683C00
// int sub_683C00(int a1, int a2);
// [0x683cc0] (51 bytes) sub_683CC0
// int sub_683CC0(int a1);
// [0x683d00] (48 bytes) sub_683D00
// int sub_683D00(int a1, hkpWorld *a2);
// [0x683d30] (119 bytes) sub_683D30
// int sub_683D30(int a1, hkMemoryAllocator *a2);
// [0x683db0] (15 bytes) sub_683DB0
// int sub_683DB0(uint32_t *a1, int a2);
// [0x683dc0] (169 bytes) sub_683DC0
// int sub_683DC0(int a1, float *a2);
// [0x683e70] (15 bytes) sub_683E70
// int sub_683E70(uint32_t *a1, int a2, int a3);
// [0x683e80] (244 bytes) sub_683E80
// int sub_683E80(int a1, int a2, int a3);
// [0x683f80] (15 bytes) sub_683F80
// int sub_683F80(uint32_t *a1, int a2);
// [0x683f90] (137 bytes) sub_683F90
// int sub_683F90(int a1, void **a2);
// [0x684020] (97 bytes) sub_684020
// int sub_684020(uint32_t *a1);
// [0x684090] (47 bytes) sub_684090
// int sub_684090(unsigned int a1, int *a2);
// [0x6840c0] (42 bytes) sub_6840C0
// int sub_6840C0(int a1, uint32_t *a2);
// [0x6840f0] (34 bytes) sub_6840F0
// int sub_6840F0(char *s);
// [0x684120] (7 bytes) sub_684120
// int sub_684120(int a1, int a2);
// [0x684130] (146 bytes) sub_684130
// void sub_684130(int a1, int a2);
// [0x6841d0] (18 bytes) sub_6841D0
// int sub_6841D0(uint32_t *a1);
// [0x6841f0] (47 bytes) sub_6841F0
// int sub_6841F0(int a1);
// [0x684220] (15 bytes) sub_684220
// int sub_684220(uint32_t *a1, int a2, int a3);
// [0x684230] (189 bytes) sub_684230
// int sub_684230(int a1, int a2, int a3);
// [0x6842f0] (15 bytes) sub_6842F0
// int sub_6842F0(uint32_t *a1, int a2, int a3);
// [0x684300] (198 bytes) sub_684300
// int sub_684300(int a1, int a2, int a3);
// [0x6843d0] (18 bytes) sub_6843D0
// int sub_6843D0(uint32_t *a1, int a2);
// [0x6843f0] (117 bytes) sub_6843F0
// int sub_6843F0(int a1, float *a2);
// [0x684470] (18 bytes) sub_684470
// int sub_684470(uint32_t *a1, int a2);
// [0x684490] (149 bytes) sub_684490
// int sub_684490(int a1, float *a2);
// [0x684530] (15 bytes) sub_684530
// int sub_684530(uint32_t *a1, int a2);
// [0x684540] (89 bytes) sub_684540
// int sub_684540(int a1, float *a2);
// [0x6845a0] (18 bytes) sub_6845A0
// int sub_6845A0(uint32_t *a1, int a2);
// [0x6845c0] (79 bytes) sub_6845C0
// int sub_6845C0(int a1, float *a2);
// [0x684610] (18 bytes) sub_684610
// int sub_684610(uint32_t *a1, float a2);
// [0x684630] (50 bytes) sub_684630
// int sub_684630(int a1, float a2);
// [0x684670] (18 bytes) sub_684670
// int sub_684670(uint32_t *a1, int a2);
// [0x684690] (104 bytes) sub_684690
// int sub_684690(int a1, uint32_t *a2);
// [0x684700] (15 bytes) sub_684700
// int sub_684700(uint32_t *a1);
// [0x684710] (90 bytes) sub_684710
// long double sub_684710(int a1);
// [0x684770] (18 bytes) sub_684770
// int sub_684770(uint32_t *a1);
// [0x684790] (77 bytes) sub_684790
// long double sub_684790(int a1);
// [0x6847e0] (15 bytes) sub_6847E0
// int sub_6847E0(uint32_t *a1);
// [0x6847f0] (70 bytes) sub_6847F0
// int sub_6847F0(int a1);
// [0x684840] (15 bytes) sub_684840
// int sub_684840(uint32_t *a1, char a2);
// [0x684850] (173 bytes) sub_684850
// int sub_684850(int a1, char a2);
// [0x684900] (15 bytes) sub_684900
// int sub_684900(uint32_t *a1, int a2);
// [0x684910] (142 bytes) sub_684910
// int sub_684910(int a1, int a2);
// [0x6849a0] (105 bytes) sub_6849A0
// int sub_6849A0(int a1);
// [0x684a10] (104 bytes) sub_684A10
// int (**sub_684A10(int a1))(int);
// [0x684a80] (7 bytes) sub_684A80
// int sub_684A80(int a1);
// [0x684a90] (43 bytes) sub_684A90
// int sub_684A90(int a1);
// [0x684ac0] (60 bytes) sub_684AC0
// bool sub_684AC0(int a1);
// [0x684b00] (18 bytes) sub_684B00
// int sub_684B00(int a1);
// [0x684b20] (7 bytes) sub_684B20
// int sub_684B20(int a1);
// [0x684b30] (150 bytes) sub_684B30
// float *sub_684B30(float *a1, int a2);
// [0x684bd0] (353 bytes) sub_684BD0
// int sub_684BD0(int a1, int a2);
// [0x684d40] (18 bytes) sub_684D40
// int sub_684D40(uint32_t *a1);
// [0x684d60] (44 bytes) sub_684D60
// int sub_684D60(int a1);
// [0x684d90] (46 bytes) sub_684D90
// int sub_684D90(int a1);
// [0x684dc0] (126 bytes) sub_684DC0
// int sub_684DC0(int *a1, int a2, uint8_t a3);
// [0x684e40] (15 bytes) sub_684E40
// int sub_684E40(uint32_t *a1, char a2);
// [0x684e50] (101 bytes) sub_684E50
// int sub_684E50(int *a1, char a2);
// [0x684ec0] (71 bytes) sub_684EC0
// int sub_684EC0(uint32_t **a1, int a2, int a3);
// [0x684f10] (174 bytes) sub_684F10
// int sub_684F10(int a1, uint8_t a2);
// [0x684fc0] (36 bytes) sub_684FC0
// int32_t sub_684FC0(int a1);
// [0x684ff0] (18 bytes) sub_684FF0
// int sub_684FF0(uint32_t *a1, int a2, char a3);
// [0x685010] (137 bytes) sub_685010
// int sub_685010(int a1, int a2, uint8_t a3);
// [0x6850a0] (18 bytes) sub_6850A0
// int sub_6850A0(uint32_t *a1, int a2, char a3);
// [0x6850c0] (7 bytes) sub_6850C0
// int sub_6850C0(int a1, int a2, char a3);
// [0x6850d0] (366 bytes) sub_6850D0
// float *sub_6850D0(int a1, float *a2, char a3);
// [0x685240] (212 bytes) sub_685240
// int sub_685240(int a1, int a2, float a3);
// [0x685320] (643 bytes) sub_685320
// void sub_685320(hkMemorySystem *a1, int a2, char a3);
// [0x6855b0] (490 bytes) sub_6855B0
// int sub_6855B0(int a1, int a2);
// [0x6857a0] (128 bytes) sub_6857A0
// double *sub_6857A0(double *a1, int a2, int a3);
// [0x685820] (280 bytes) sub_685820
// int sub_685820(uint32_t *a1, uint32_t *a2);
// [0x685940] (18 bytes) sub_685940
// int sub_685940(uint32_t *a1, int a2);
// [0x685960] (283 bytes) sub_685960
// int sub_685960(uint32_t *a1, int a2);
// [0x685a80] (218 bytes) sub_685A80
// int sub_685A80(int a1, int a2);
// [0x685b60] (721 bytes) sub_685B60
// unsigned int sub_685B60(uint32_t *a1, int a2);
// [0x685e40] (157 bytes) sub_685E40
// int sub_685E40(uint32_t *a1);
// [0x685ee0] (157 bytes) sub_685EE0
// int sub_685EE0(uint32_t *a1);
// [0x685f80] (7 bytes) sub_685F80
// int sub_685F80(int a1);
// [0x685f90] (7 bytes) sub_685F90
// int sub_685F90(int a1);
// [0x685fa0] (7 bytes) sub_685FA0
// int sub_685FA0(int a1);
// [0x685fb0] (7 bytes) sub_685FB0
// int sub_685FB0(int a1);
// [0x685fc0] (147 bytes) sub_685FC0
// int sub_685FC0(int a1);
// [0x686060] (274 bytes) sub_686060
// int sub_686060(int *a1, int *a2, int *a3, int a4, int a5);
// [0x686180] (18 bytes) sub_686180
// int sub_686180(int a1);
// [0x6861a0] (267 bytes) sub_6861A0
// int sub_6861A0( long double a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, char a9, int a10, int a11, int a12, char a13, int a14, int a15, int a16, char a17, int a18, int a19, int a20, char a21);
// [0x6862b0] (1093 bytes) sub_6862B0
// int sub_6862B0( int *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, float a9, float a10, float a11, float a12, int a13, int a14, int a15, uint32_t *a16, int a17, float a18, float a19, float a20, int a21, float a22, float a23, float a24, int a25, float a26, float a27, float a28, int a29, float a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, float a46, float a47, float a48, int a49, float a50, int a51, int a52, int a53, int a54, int a55, int a56, int a57, int a58, int a59, int a60, int a61, int a62, int a63);
// [0x686700] (41 bytes) sub_686700
// int sub_686700( int a1, int a2, int a3, int a4, int a5, int a6, float a7, float a8, float a9, float a10, int a11, int a12, int a13, uint32_t *a14, int a15, float a16, float a17, float a18, int a19, float a20, float a21, float a22, int a23, float a24, float a25, float a26, int a27, float a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, float a44, float a45, float a46, int a47, float a48, int a49, int a50, int a51, int a52, int a53, int a54, int a55, int a56, int a57, int a58, int a59, int a60, int a61);
// [0x686730] (180 bytes) sub_686730
// float *sub_686730(float *result, float *a2, float *a3);
// [0x6867f0] (247 bytes) sub_6867F0
// const void *sub_6867F0(int a1, void **a2);
// [0x6868f0] (563 bytes) sub_6868F0
// float *sub_6868F0(float *result, float *a2);
// [0x686b30] (1371 bytes) sub_686B30
// int sub_686B30(uint32_t *a1, int a2, float *a3);
// [0x687090] (101 bytes) sub_687090
// int *sub_687090(int a1, int a2);
// [0x687100] (18 bytes) sub_687100
// int sub_687100(int a1);
// [0x687120] (190 bytes) sub_687120
// float *sub_687120( long double a1, float *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, float a13, float a14, float a15);
// [0x6871e0] (1235 bytes) sub_6871E0
// 0x6871e0 sub_6871E0
// [0x6876c0] (15 bytes) sub_6876C0
// int sub_6876C0(uint32_t *a1, int a2);
// [0x6876d0] (108 bytes) sub_6876D0
// int sub_6876D0(int *a1, int *a2);
// [0x687740] (15 bytes) sub_687740
// int sub_687740(uint32_t *a1, int a2, int a3);
// [0x687750] (176 bytes) sub_687750
// int sub_687750(int a1, float *a2);
// [0x687800] (15 bytes) sub_687800
// int sub_687800(uint32_t *a1, int a2, int a3);
// [0x687810] (176 bytes) sub_687810
// int sub_687810(int a1, float *a2);
// [0x6878c0] (125 bytes) sub_6878C0
// int sub_6878C0(uint32_t *a1, int a2);
// [0x687940] (314 bytes) sub_687940
// int sub_687940(int *a1, int a2);
// [0x687a80] (94 bytes) sub_687A80
// bool sub_687A80(int a1);
// [0x687ae0] (18 bytes) sub_687AE0
// int sub_687AE0(int a1);
// [0x687b00] (119 bytes) sub_687B00
// uint32_t *sub_687B00(uint32_t *a1, int a2);
// [0x687b80] (584 bytes) sub_687B80
// int sub_687B80(int a1, uint32_t *a2);
// [0x687dd0] (15 bytes) sub_687DD0
// int sub_687DD0(uint32_t *a1, int a2);
// [0x687de0] (381 bytes) sub_687DE0
// int sub_687DE0(int a1, float *a2);
// [0x687f60] (76 bytes) sub_687F60
// int sub_687F60(int a1, int a2);
// [0x687fb0] (795 bytes) sub_687FB0
// float *sub_687FB0(int a1, uint32_t *a2, float *a3, float *a4);
// [0x6882d0] (276 bytes) sub_6882D0
// int sub_6882D0(uint32_t *a1, int a2);
// [0x6883f0] (477 bytes) sub_6883F0
// void sub_6883F0(int a1);
// [0x6885d0] (135 bytes) sub_6885D0
// uint32_t *sub_6885D0(uint32_t *a1, int a2, int a3);
// [0x688660] (119 bytes) sub_688660
// void sub_688660(int a1);
// [0x6886e0] (131 bytes) sub_6886E0
// void sub_6886E0(void *a1);
// [0x688770] (167 bytes) sub_688770
// int sub_688770(int a1);
// [0x688820] (478 bytes) sub_688820
// int sub_688820(int *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
// [0x688a00] (27 bytes) sub_688A00
// int sub_688A00(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
// [0x688a20] (27 bytes) sub_688A20
// int sub_688A20(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
// [0x688a40] (519 bytes) sub_688A40
// int sub_688A40(int a1);
// [0x688c50] (495 bytes) sub_688C50
// int sub_688C50(int a1, int a2, int a3, uint8_t a4);
// [0x688e40] (249 bytes) sub_688E40
// int (**sub_688E40(int a1, int a2))(int);
// [0x688f40] (195 bytes) sub_688F40
// int sub_688F40(int a1);
// [0x689010] (18 bytes) sub_689010
// int sub_689010(uint32_t *a1, int a2);
// [0x689030] (341 bytes) sub_689030
// int sub_689030(int *a1, int a2);
// [0x689190] (259 bytes) sub_689190
// float *sub_689190(float *result, float *a2, float *a3);
// [0x6892a0] (140 bytes) sub_6892A0
// int (**sub_6892A0(uint32_t *a1))(int);
// [0x689330] (195 bytes) sub_689330
// int sub_689330(int a1);
// [0x689400] (140 bytes) sub_689400
// int (**sub_689400(uint32_t *a1))(int);
// [0x689490] (1492 bytes) sub_689490
// void sub_689490(int *a1, int a2, unsigned int a3, float a4, int a5);
// [0x689a70] (573 bytes) sub_689A70
// int sub_689A70(int a1, char *a2, float *a3);
// [0x689cb0] (15 bytes) sub_689CB0
// int sub_689CB0(uint32_t *a1, int a2, float a3);
// [0x689cc0] (189 bytes) sub_689CC0
// long double sub_689CC0(int a1, int a2, float a3);
// [0x689d80] (15 bytes) sub_689D80
// int sub_689D80(uint32_t *a1, int a2, int a3);
// [0x689d90] (189 bytes) sub_689D90
// int sub_689D90(int a1, int a2, int a3);
// [0x689e50] (369 bytes) sub_689E50
// int sub_689E50(int a1, int a2);
// [0x689fd0] (466 bytes) sub_689FD0
// int sub_689FD0(int a1, float *a2, __m128 *a3);
// [0x68a1b0] (246 bytes) sub_68A1B0
// float *sub_68A1B0(float *a1, int a2, int a3);
// [0x68a2b0] (666 bytes) sub_68A2B0
// int sub_68A2B0( long double a1, uint32_t *a2, int a3, int a4, int a5, int a6, int a7, int a8, float a9, float a10, float a11, float a12, int a13, int a14, int a15, int a16);
// [0x68a550] (2055 bytes) sub_68A550
// void sub_68A550(int a1);
// [0x68ad60] (94 bytes) sub_68AD60
// int *sub_68AD60(int a1);
// [0x68adc0] (151 bytes) sub_68ADC0
// void sub_68ADC0(int a1);
// [0x68ae60] (159 bytes) sub_68AE60
// void sub_68AE60(void *a1);
// [0x68af00] (18 bytes) sub_68AF00
// int sub_68AF00(int a1);
// [0x68af20] (501 bytes) sub_68AF20
// float *sub_68AF20( float *a1, int a2, char a3, float a4, float a5, float a6, int a7, float a8, float a9, float a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27);
// [0x68b120] (272 bytes) sub_68B120
// int sub_68B120(int a1, int a2, int a3);
// [0x68b230] (164 bytes) sub_68B230
// int sub_68B230(int a1);
// [0x68b2e0] (850 bytes) sub_68B2E0
// int sub_68B2E0(uint32_t *a1, int a2, int a3);
// [0x68b640] (859 bytes) sub_68B640
// int sub_68B640(int a1, int a2);
// [0x68b9a0] (143 bytes) sub_68B9A0
// uint32_t *sub_68B9A0(uint32_t *result);
// [0x68ba30] (18 bytes) sub_68BA30
// int sub_68BA30(int a1);
// [0x68ba50] (370 bytes) sub_68BA50
// int sub_68BA50( int a1, int a2, int a3, int a4, int a5, int a6, int a7, float a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23);
// [0x68bbd0] (18 bytes) sub_68BBD0
// int sub_68BBD0(int a1);
// [0x68bbf0] (752 bytes) sub_68BBF0
// int sub_68BBF0(signed int a1, int a2, int a3, int a4);
// [0x68bee0] (201 bytes) sub_68BEE0
// int sub_68BEE0(int a1, int a2, int a3);
// [0x68bfb0] (18 bytes) sub_68BFB0
// int sub_68BFB0(int a1);
// [0x68bfd0] (545 bytes) sub_68BFD0
// int sub_68BFD0( long double a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, float a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, char a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, float a37, float a38, float a39);
// [0x68c200] (161 bytes) sub_68C200
// bool sub_68C200(int a1, int a2, unsigned int a3);
// [0x68c2b0] (15 bytes) sub_68C2B0
// int sub_68C2B0(uint32_t *a1, int a2);
// [0x68c2c0] (1565 bytes) sub_68C2C0
// int sub_68C2C0( int *a1, uint32_t *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, void **a20, void **a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, int a53, int a54, int a55, int a56, int (**a57)(int));
// [0x68c8e0] (15 bytes) sub_68C8E0
// int sub_68C8E0(int a1);
// [0x68c8f0] (334 bytes) sub_68C8F0
// float *sub_68C8F0(float *a1, int a2, float *a3);
// [0x68ca40] (18 bytes) sub_68CA40
// int sub_68CA40(int a1);
// [0x68ca60] (763 bytes) sub_68CA60
// float *sub_68CA60(float *a1, int a2, unsigned int a3, char a4);
// [0x68cd60] (1012 bytes) sub_68CD60
// int sub_68CD60(int a1, uint32_t *a2, uint8_t a3, int a4, int a5);
// [0x68d160] (15 bytes) sub_68D160
// int sub_68D160(uint32_t *a1);
// [0x68d170] (1076 bytes) sub_68D170
// int sub_68D170(uint32_t *a1, int a2);
// [0x68d5b0] (396 bytes) sub_68D5B0
// int sub_68D5B0(int a1, const char *a2, int a3, int a4, unsigned int a5);
// [0x68d740] (43 bytes) sub_68D740
// int sub_68D740(int a1);
// [0x68d770] (7 bytes) sub_68D770
// int sub_68D770(int a1);
// [0x68d780] (93 bytes) sub_68D780
// int (**sub_68D780(uint32_t *a1))(int);
// [0x68d7e0] (15 bytes) sub_68D7E0
// int sub_68D7E0(uint32_t *a1);
// [0x68d7f0] (71 bytes) sub_68D7F0
// int sub_68D7F0(int a1);
// [0x68d840] (81 bytes) sub_68D840
// int sub_68D840(uint32_t *a1);
// [0x68d8a0] (15 bytes) sub_68D8A0
// int sub_68D8A0(uint32_t *a1);
// [0x68d8b0] (59 bytes) sub_68D8B0
// int sub_68D8B0(int a1);
// [0x68d8f0] (15 bytes) sub_68D8F0
// int sub_68D8F0(uint32_t *a1);
// [0x68d900] (59 bytes) sub_68D900
// int sub_68D900(int a1);
// [0x68d940] (15 bytes) sub_68D940
// int sub_68D940(uint32_t *a1);
// [0x68d950] (157 bytes) sub_68D950
// int sub_68D950(int a1);
// [0x68d9f0] (15 bytes) sub_68D9F0
// int sub_68D9F0(uint32_t *a1, int a2);
// [0x68da00] (406 bytes) sub_68DA00
// int sub_68DA00(uint32_t *a1, int a2);
// [0x68dba0] (164 bytes) sub_68DBA0
// int sub_68DBA0(int a1);
// [0x68dc50] (421 bytes) sub_68DC50
// hkBufferedStreamReader **sub_68DC50(hkBufferedStreamReader **a1, int a2, int a3);
// [0x68de00] (202 bytes) sub_68DE00
// int sub_68DE00(int a1, int a2, int a3, uint8_t a4, int a5);
// [0x68ded0] (172 bytes) sub_68DED0
// int sub_68DED0(int a1, int a2, int a3, uint8_t a4, int a5);
// [0x68df80] (340 bytes) sub_68DF80
// int (**sub_68DF80(uint32_t *a1))(int);
// [0x68e0e0] (7 bytes) sub_68E0E0
// int sub_68E0E0(int a1);
// [0x68e0f0] (156 bytes) sub_68E0F0
// int sub_68E0F0(int a1);
// [0x68e190] (105 bytes) sub_68E190
// void sub_68E190(uint32_t *a1);
// [0x68e200] (97 bytes) sub_68E200
// int sub_68E200(uint32_t *a1);
// [0x68e270] (897 bytes) sub_68E270
// int sub_68E270(uint32_t *a1);
// [0x68e600] (298 bytes) sub_68E600
// int sub_68E600(int a1, hkString *a2);
// [0x68e730] (204 bytes) sub_68E730
// int sub_68E730(uint32_t *a1);
// [0x68e800] (165 bytes) sub_68E800
// int sub_68E800(uint32_t *a1);
// [0x68e8b0] (360 bytes) sub_68E8B0
// void sub_68E8B0(int a1);
// [0x68ea20] (399 bytes) sub_68EA20
// int sub_68EA20(int a1);
// [0x68ebb0] (395 bytes) sub_68EBB0
// int sub_68EBB0(int a1);
// [0x68ed40] (15 bytes) sub_68ED40
// int sub_68ED40(uint32_t *a1, int a2);
// [0x68ed50] (505 bytes) sub_68ED50
// int sub_68ED50(uint32_t *a1, int a2);
// [0x68ef50] (15 bytes) sub_68EF50
// int sub_68EF50(uint32_t *a1, int a2);
// [0x68ef60] (505 bytes) sub_68EF60
// int sub_68EF60(uint32_t *a1, int a2);
// [0x68f160] (15 bytes) sub_68F160
// int sub_68F160( uint32_t *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, char a27);
// [0x68f170] (1983 bytes) sub_68F170
// int sub_68F170( int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, char a27, char a28, int a29, int a30, int a31, float a32, float a33, float a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49);
// [0x68f930] (248 bytes) sub_68F930
// int sub_68F930(int a1, int *a2);
// [0x68fa30] (533 bytes) sub_68FA30
// hkpCharacterRigidBody *sub_68FA30(int a1, float a2);
// [0x68fc50] (173 bytes) sub_68FC50
// int sub_68FC50(int a1, uint32_t *a2);
// [0x68fd00] (239 bytes) sub_68FD00
// int sub_68FD00(int a1, int a2);
// [0x68fdf0] (109 bytes) sub_68FDF0
// long double sub_68FDF0(float *a1);
// [0x68fe90] (98 bytes) sub_68FE90
// bool *sub_68FE90(bool *a1, float *a2);
// [0x68ff00] (616 bytes) sub_68FF00
// void sub_68FF00(int a1, hkpEntity *a2, int a3, float *a4, float *a5);
// [0x690170] (231 bytes) sub_690170
// int sub_690170(char a1, int a2, int a3);
// [0x690260] (94 bytes) sub_690260
// int sub_690260(hkpCollisionFilter *a1, int a2);
// [0x6902c0] (117 bytes) sub_6902C0
// int sub_6902C0(int *a1, int *a2);
// [0x690340] (286 bytes) sub_690340
// int (**sub_690340(int a1, int *a2))(int);
// [0x690460] (146 bytes) sub_690460
// int sub_690460(int *a1, int *a2);
// [0x690500] (117 bytes) sub_690500
// int sub_690500(int *a1, int *a2);
// [0x690580] (289 bytes) sub_690580
// int (**sub_690580(int a1, int *a2))(int);
// [0x6906b0] (146 bytes) sub_6906B0
// int sub_6906B0(int *a1, int *a2);
// [0x690750] (129 bytes) sub_690750
// int sub_690750(int *a1, int *a2);
// [0x6907e0] (316 bytes) sub_6907E0
// int (**sub_6907E0(int a1, int *a2))(int);
// [0x690920] (139 bytes) sub_690920
// int sub_690920(int *a1, int *a2);
// [0x6909b0] (71 bytes) sub_6909B0
// int (**sub_6909B0(uint32_t *a1, int a2))(int);
// [0x690a00] (22 bytes) sub_690A00
// int *sub_690A00(int *a1, int *a2);
// [0x690a20] (186 bytes) sub_690A20
// int (**sub_690A20(int a1, int *a2))(int);
// [0x690ae0] (22 bytes) sub_690AE0
// int *sub_690AE0(int *a1, int *a2);
// [0x690b00] (432 bytes) sub_690B00
// int sub_690B00(int a1);
// [0x690cb0] (143 bytes) sub_690CB0
// void sub_690CB0(int a1);
// [0x690d40] (668 bytes) sub_690D40
// int sub_690D40(int a1, int a2, float a3);
// [0x690fe0] (106 bytes) sub_690FE0
// int sub_690FE0(int a1, int a2, float a3);
// [0x691050] (38 bytes) sub_691050
// int sub_691050(int a1, int a2);
// [0x691080] (93 bytes) sub_691080
// int sub_691080(int a1, int a2);
// [0x6910e0] (146 bytes) sub_6910E0
// int sub_6910E0(int a1);
// [0x691180] (64 bytes) sub_691180
// int sub_691180(int a1);
// [0x6911c0] (66 bytes) sub_6911C0
// int sub_6911C0(int a1, int a2);
// [0x691210] (237 bytes) sub_691210
// float *sub_691210(float *a1, int a2, int a3);
// [0x691300] (127 bytes) sub_691300
// uint32_t *sub_691300(uint32_t *a1, int a2, int a3);
// [0x691380] (126 bytes) sub_691380
// int sub_691380(int a1);
// [0x691400] (129 bytes) sub_691400
// int sub_691400(int a1, int a2);
// [0x691490] (632 bytes) sub_691490
// int sub_691490(int a1, uint32_t *a2, uint32_t *a3, int a4);
// [0x691740] (170 bytes) sub_691740
// int sub_691740(int a1, int a2, int a3, uint32_t *a4);
// [0x691860] (441 bytes) sub_691860
// int sub_691860(long double a1, int a2, int a3, int a4, int a5);
// [0x691a20] (231 bytes) sub_691A20
// int sub_691A20(int a1, int a2, int a3, int a4);
// [0x691b10] (456 bytes) sub_691B10
// int sub_691B10(int a1, uint32_t *a2, int a3, uint32_t *a4);
// [0x691ce0] (101 bytes) sub_691CE0
// uint32_t *sub_691CE0(int a1, uint32_t *a2, int a3, uint32_t *a4);
// [0x691dc0] (1272 bytes) sub_691DC0
// float *sub_691DC0(float *a1, int a2, int a3);
// [0x6922c0] (1000 bytes) sub_6922C0
// float *sub_6922C0(float *a1, int a2, int a3);
// [0x6926b0] (185 bytes) sub_6926B0
// float *sub_6926B0(float *a1, int a2, int a3);
// [0x692770] (210 bytes) sub_692770
// double *sub_692770(double *a1, int a2, int a3);
// [0x692850] (573 bytes) sub_692850
// int *sub_692850(int *a1, int a2);
// [0x692a90] (210 bytes) sub_692A90
// int sub_692A90(int a1);
// [0x692b70] (308 bytes) sub_692B70
// int sub_692B70(int a1, char a2);
// [0x692cb0] (2459 bytes) sub_692CB0
// int sub_692CB0(long double a1, uint32_t *a2, int a3, uint32_t *a4);
// [0x693650] (15 bytes) sub_693650
// int sub_693650(uint32_t *a1, int a2);
// [0x693660] (1042 bytes) sub_693660
// int sub_693660(long double a1, uint32_t *a2, int a3);
// [0x693a80] (193 bytes) sub_693A80
// int sub_693A80(int a1, float *a2);
// [0x693b50] (221 bytes) sub_693B50
// int sub_693B50(long double a1, int a2, char a3, int a4);
// [0x693c30] (173 bytes) sub_693C30
// long double sub_693C30(int a1, unsigned int a2, int a3, float a4);
// [0x693ce0] (20 bytes) sub_693CE0
// int sub_693CE0(int a1, unsigned int a2);
// [0x693d00] (582 bytes) sub_693D00
// int sub_693D00(int a1, float a2);
// [0x693f50] (10 bytes) sub_693F50
// int sub_693F50(int a1, int a2, int a3);
// [0x693f60] (176 bytes) sub_693F60
// int sub_693F60(uint32_t *a1, int a2, int a3);
// [0x694010] (2009 bytes) sub_694010
// char *sub_694010(long double a1, uint32_t *a2, int a3);
// [0x6947f0] (22 bytes) sub_6947F0
// void *sub_6947F0();
// [0x694810] (129 bytes) sub_694810
// int sub_694810(int *a1, int *a2);
// [0x6948a0] (316 bytes) sub_6948A0
// int (**sub_6948A0(int a1, int *a2))(int);
// [0x6949e0] (167 bytes) sub_6949E0
// int sub_6949E0(int *a1, int *a2);
// [0x694a90] (94 bytes) sub_694A90
// uint32_t *sub_694A90(uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7);
// [0x694af0] (999 bytes) sub_694AF0
// int sub_694AF0(int a1, int a2, int a3);
// [0x694ee0] (5086 bytes) sub_694EE0
// int sub_694EE0(int a1, float *a2, float *a3);
// [0x6962c0] (2054 bytes) sub_6962C0
// int sub_6962C0(int a1, float *a2, float *a3);
// [0x696ad0] (2078 bytes) sub_696AD0
// void *sub_696AD0(int a1, float *a2, float *a3, float a4, float *a5, int a6);
// [0x6972f0] (1281 bytes) sub_6972F0
// int sub_6972F0(long double a1, float *a2, float *a3, float *a4);
// [0x697800] (3614 bytes) sub_697800
// int sub_697800(float *a1, float *a2, float *a3);
// [0x698620] (3171 bytes) sub_698620
// int sub_698620(int a1, const hkpConvexVerticesShape *a2, int a3);
// [0x699290] (1200 bytes) sub_699290
// int sub_699290(hkTransformf *a1, __int128 *a2);
// [0x699740] (778 bytes) sub_699740
// void sub_699740(int a1, int a2, hkTransformf *a3);
// [0x699a50] (1181 bytes) sub_699A50
// void sub_699A50(long double a1, float *a2, int a3, hkTransformf *a4);
// [0x699ef0] (115 bytes) sub_699EF0
// void sub_699EF0(long double a1, int a2);
// [0x699f80] (354 bytes) sub_699F80
// void sub_699F80(int a1, int a2, hkTransformf *a3, int a4, int a5, int *a6);
// [0x69a0f0] (312 bytes) sub_69A0F0
// void sub_69A0F0(long double a1, uint32_t *a2, int a3, int a4, int a5, int *a6, uint32_t *a7);
// [0x69a230] (311 bytes) sub_69A230
// void sub_69A230(long double a1, int a2, uint32_t *a3, int a4, int a5, int a6, int *a7, uint32_t *a8);
// [0x69a370] (312 bytes) sub_69A370
// void sub_69A370(long double a1, int a2, uint32_t *a3, int a4, int a5, int *a6, uint32_t *a7);
// [0x69a4b0] (937 bytes) sub_69A4B0
// int sub_69A4B0(long double a1, int a2, hkpEntity *a3, int a4, int a5, int a6, int a7, int a8);
// [0x69a860] (937 bytes) sub_69A860
// int sub_69A860(long double a1, int a2, hkpEntity *a3, int a4, int a5, int a6, int a7);
// [0x69ac10] (166 bytes) sub_69AC10
// int32_t sub_69AC10(uint32_t *a1, int32_t a2, int a3, int a4, int a5, int a6, int a7);
// [0x69acc0] (1395 bytes) sub_69ACC0
// void sub_69ACC0(int a1, int a2, float a3, int a4);
// [0x69b240] (7 bytes) sub_69B240
// int sub_69B240(int a1, int a2, int a3);
// [0x69b250] (271 bytes) sub_69B250
// int sub_69B250(int a1, int a2, int a3);
// [0x69b360] (92 bytes) sub_69B360
// int sub_69B360();
// [0x69b3c0] (506 bytes) sub_69B3C0
// int sub_69B3C0(uint32_t *a1);
// [0x69b5c0] (305 bytes) sub_69B5C0
// int sub_69B5C0(uint32_t *a1);
// [0x69b700] (719 bytes) sub_69B700
// uint32_t *sub_69B700();
// [0x69b9d0] (78 bytes) sub_69B9D0
// int sub_69B9D0();
// [0x69ba20] (90 bytes) sub_69BA20
// int sub_69BA20();
// [0x69ba80] (269 bytes) sub_69BA80
// int sub_69BA80(uint32_t *a1);
// [0x69bb98] (1 bytes) nullsub_125
// void nullsub_125();
// [0x69bba0] (263 bytes) sub_69BBA0
// void sub_69BBA0(int a1, char *a2, unsigned int a3);
// [0x69bcb0] (146 bytes) sub_69BCB0
// hkString *sub_69BCB0(int a1, hkString *a2);
// [0x69bd50] (126 bytes) sub_69BD50
// int sub_69BD50(int a1);
// [0x69bdd0] (137 bytes) sub_69BDD0
// int sub_69BDD0(int a1, const char *a2, int a3, int a4, unsigned int a5);
// [0x69be60] (226 bytes) sub_69BE60
// int sub_69BE60(int a1, int a2, int a3, int a4);
// [0x69bf50] (126 bytes) sub_69BF50
// int sub_69BF50(int a1);
// [0x69bfd0] (362 bytes) sub_69BFD0
// void sub_69BFD0(int a1, int a2, int a3, int a4, unsigned int a5);
// [0x69c140] (1186 bytes) sub_69C140
// 0x69c140 sub_69C140
// [0x69c5f0] (271 bytes) sub_69C5F0
// int sub_69C5F0(int a1, int a2, int a3, int a4);
// [0x69c700] (167 bytes) sub_69C700
// int sub_69C700(int a1);
// [0x69c7b0] (164 bytes) sub_69C7B0
// int sub_69C7B0(int a1, unsigned int a2, int *a3, uint32_t *a4);
// [0x69c860] (455 bytes) sub_69C860
// int sub_69C860(int a1, int a2, const hkTransformf **a3, float *a4);
// [0x69ca30] (130 bytes) sub_69CA30
// int sub_69CA30(int a1, int a2, int a3);
// [0x69cac0] (733 bytes) sub_69CAC0
// float *sub_69CAC0( float *a1, int a2, int a3, float a4, float a5, float a6, int a7, float a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, float a36, float a37, float a38);
// [0x69cda0] (760 bytes) sub_69CDA0
// 0x69cda0 sub_69CDA0
// [0x69d0a0] (445 bytes) sub_69D0A0
// float *sub_69D0A0(float *a1, int a2, int a3);
// [0x69d260] (929 bytes) sub_69D260
// int sub_69D260(int a1, int a2);
// [0x69d610] (184 bytes) sub_69D610
// bool sub_69D610(int a1, int *a2, int *a3, int a4, int *a5);
// [0x69d6d0] (92 bytes) sub_69D6D0
// int sub_69D6D0(int a1);
// [0x69d730] (101 bytes) sub_69D730
// int sub_69D730(int a1, int a2);
// [0x69d7a0] (1046 bytes) sub_69D7A0
// int sub_69D7A0(int a1, int a2, const hkTransformf **a3);
// [0x69dbc0] (2691 bytes) sub_69DBC0
// char *sub_69DBC0(int a1, int *a2, int *a3, float *a4, int a5, char a6);
// [0x69e650] (485 bytes) sub_69E650
// uint8_t *sub_69E650(uint8_t *a1, uint32_t *a2, int a3);
// [0x69e840] (105 bytes) sub_69E840
// float *sub_69E840(float *a1, float *a2, float *a3);
// [0x69e8b0] (327 bytes) sub_69E8B0
// uint8_t *sub_69E8B0(uint8_t *a1, float *a2, float *a3, float *a4, float *a5, float *a6);
// [0x69ea00] (92 bytes) sub_69EA00
// int sub_69EA00(int a1);
// [0x69ea60] (166 bytes) sub_69EA60
// int sub_69EA60(int a1);
// [0x69eb10] (177 bytes) sub_69EB10
// int sub_69EB10(int a1, int a2);
// [0x69ebd0] (607 bytes) sub_69EBD0
// int sub_69EBD0(int a1, int *a2, int a3);
// [0x69ee30] (796 bytes) sub_69EE30
// int sub_69EE30(int a1, int *a2);
// [0x69f150] (140 bytes) sub_69F150
// int *sub_69F150(int *a1, int *a2);
// [0x69f1e0] (115 bytes) sub_69F1E0
// int sub_69F1E0(uint32_t *a1, int a2);
// [0x69f260] (189 bytes) sub_69F260
// int sub_69F260(int a1, int a2);
// [0x69f320] (583 bytes) sub_69F320
// int sub_69F320(int a1, int *a2, int a3);
// [0x69f570] (737 bytes) sub_69F570
// int sub_69F570(int a1, int *a2);
// [0x69f860] (116 bytes) sub_69F860
// int *sub_69F860(int *a1, int *a2);
// [0x69f8e0] (115 bytes) sub_69F8E0
// int sub_69F8E0(uint32_t *a1, int a2);
// [0x69f960] (300 bytes) sub_69F960
// int sub_69F960(int a1, int a2);
// [0x69fa90] (164 bytes) sub_69FA90
// void sub_69FA90(int a1, int *a2);
// [0x69fb40] (291 bytes) sub_69FB40
// uint32_t *sub_69FB40(uint32_t *a1, unsigned int a2);
// [0x69fc70] (52 bytes) sub_69FC70
// bool sub_69FC70(int a1, float *a2);
// [0x69fcb0] (173 bytes) sub_69FCB0
// float *sub_69FCB0(float *a1, int a2);
// [0x69fd60] (211 bytes) sub_69FD60
// float *sub_69FD60(float *a1, int a2);
// [0x69fe40] (211 bytes) sub_69FE40
// float *sub_69FE40(float *a1, int a2);
// [0x69ff20] (72 bytes) sub_69FF20
// uint32_t *sub_69FF20(uint32_t *a1);
// [0x69ff70] (189 bytes) sub_69FF70
// int sub_69FF70(int a1, int a2);
// [0x6a0030] (283 bytes) sub_6A0030
// int sub_6A0030(int a1);
// [0x6a0150] (125 bytes) sub_6A0150
// int sub_6A0150(int a1, char *s2);
// [0x6a01d0] (707 bytes) sub_6A01D0
// int sub_6A01D0(int a1, char *a2, char *a3);
// [0x6a04a0] (220 bytes) sub_6A04A0
// char *sub_6A04A0(uint32_t *a1, const char *s2);
// [0x6a0580] (872 bytes) sub_6A0580
// void sub_6A0580(uint32_t *a1);
// [0x6a08f0] (174 bytes) sub_6A08F0
// int (**sub_6A08F0(int a1, int *a2))(int);
// [0x6a09a0] (88 bytes) sub_6A09A0
// int sub_6A09A0(int *a1, int *a2);
// [0x6a0a00] (228 bytes) sub_6A0A00
// int (**sub_6A0A00(int a1, int *a2))(int);
// [0x6a0af0] (72 bytes) sub_6A0AF0
// int *sub_6A0AF0(int *a1, int *a2);
// [0x6a0b40] (80 bytes) sub_6A0B40
// uint32_t *sub_6A0B40(uint32_t *a1, int a2, int a3);
// [0x6a0b90] (749 bytes) sub_6A0B90
// int sub_6A0B90(int *a1, int *a2);
// [0x6a0e80] (107 bytes) sub_6A0E80
// int sub_6A0E80(int *a1, int *a2);
// [0x6a0ef0] (298 bytes) sub_6A0EF0
// int (**sub_6A0EF0(int a1, int *a2))(int);
// [0x6a1020] (2030 bytes) sub_6A1020
// int sub_6A1020(int *a1, int (***a2)(uint32_t));
// [0x6a1810] (879 bytes) sub_6A1810
// int sub_6A1810(int a1, int *a2);
// [0x6a1b80] (54 bytes) sub_6A1B80
// int sub_6A1B80(int *a1, int *a2);
// [0x6a1bc8] (1 bytes) nullsub_126
// void nullsub_126();
// [0x6a1bd0] (170 bytes) sub_6A1BD0
// uint16_t *sub_6A1BD0(float *a1, float *a2, float a3, char a4);
// [0x6a1c80] (201 bytes) sub_6A1C80
// float *sub_6A1C80(float *a1, float *a2);
// [0x6a1d50] (274 bytes) sub_6A1D50
// int sub_6A1D50(int *a1, int *a2, int *a3, int a4, int a5);
// [0x6a1e80] (99 bytes) sub_6A1E80
// void sub_6A1E80(int a1, uint32_t *a2);
// [0x6a1ef0] (153 bytes) sub_6A1EF0
// int sub_6A1EF0(float *a1);
// [0x6a1f90] (584 bytes) sub_6A1F90
// int sub_6A1F90(int *a1, int a2, int *a3);
// [0x6a21e0] (193 bytes) sub_6A21E0
// uint32_t *sub_6A21E0(int *a1, int a2, uint32_t *a3);
// [0x6a22b0] (15 bytes) sub_6A22B0
// int sub_6A22B0(uint32_t *a1, int a2);
// [0x6a22c0] (2646 bytes) sub_6A22C0
// int sub_6A22C0( uint32_t *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, void **a20, void **a21);
// [0x6a2d20] (744 bytes) sub_6A2D20
// void sub_6A2D20(int a1);
// [0x6a3010] (735 bytes) sub_6A3010
// int sub_6A3010(int *a1, int a2, float *a3);
// [0x6a32f0] (3409 bytes) sub_6A32F0
// hkpConvexVerticesShape *sub_6A32F0(int *a1, int a2);
// [0x6a4050] (604 bytes) sub_6A4050
// int sub_6A4050(int a1, int a2, int a3, int a4, int a5, int a6);
// [0x6a42b0] (628 bytes) sub_6A42B0
// int sub_6A42B0(int a1, int a2, int a3, int a4);
// [0x6a4530] (496 bytes) sub_6A4530
// bool sub_6A4530(uint32_t *a1, int a2, int a3);
// [0x6a4720] (105 bytes) sub_6A4720
// int sub_6A4720(int a1);
// [0x6a4790] (15 bytes) sub_6A4790
// int sub_6A4790(uint32_t *a1);
// [0x6a47a0] (1357 bytes) sub_6A47A0
// uint32_t *sub_6A47A0(float *a1, float a2);
// [0x6a4cf0] (330 bytes) sub_6A4CF0
// uint32_t *sub_6A4CF0(uint32_t *a1, int a2);
// [0x6a4e40] (769 bytes) sub_6A4E40
// int sub_6A4E40(int a1, int a2);
// [0x6a5150] (5611 bytes) sub_6A5150
// int sub_6A5150(int *a1, float *a2, float *a3, int a4, uint8_t *a5, int a6);
// [0x6a6740] (731 bytes) sub_6A6740
// long double sub_6A6740(int *a1, int a2, int a3, int a4, int a5);
// [0x6a6a20] (273 bytes) sub_6A6A20
// float *sub_6A6A20(int *a1, uint32_t *a2, float *a3, int a4);
// [0x6a6b40] (2931 bytes) sub_6A6B40
// long double sub_6A6B40(int *a1, int a2, int a3, float *a4);
// [0x6a76c0] (253 bytes) sub_6A76C0
// float *sub_6A76C0(int *a1, int a2, float *a3);
// [0x6a77c0] (3246 bytes) sub_6A77C0
// int sub_6A77C0(int *a1, float *a2, int a3);
// [0x6a8470] (1466 bytes) sub_6A8470
// bool sub_6A8470(int *a1, float *a2, int a3);
// [0x6a8a30] (1458 bytes) sub_6A8A30
// bool sub_6A8A30(int *a1, float *a2, int a3);
// [0x6a8ff0] (383 bytes) sub_6A8FF0
// uint32_t *sub_6A8FF0(uint32_t *a1, int a2, int a3, int a4, int a5);
// [0x6a9170] (354 bytes) sub_6A9170
// int sub_6A9170(int a1, int a2, void **a3);
// [0x6a92e0] (430 bytes) sub_6A92E0
// void sub_6A92E0(int a1, void **a2);
// [0x6a9490] (181 bytes) sub_6A9490
// int sub_6A9490(uint32_t *a1, int a2, int a3);
// [0x6a9550] (4832 bytes) sub_6A9550
// int sub_6A9550(int *a1, float *a2, float *a3, int32_t a4, int a5, char a6);
// [0x6aa830] (303 bytes) sub_6AA830
// int sub_6AA830(int *a1, int a2, int a3, char a4);
// [0x6aa960] (2859 bytes) sub_6AA960
// int sub_6AA960(uint32_t *a1);
// [0x6ab490] (640 bytes) sub_6AB490
// int sub_6AB490(int *a1, uint32_t *a2);
// [0x6ab710] (376 bytes) sub_6AB710
// int sub_6AB710(int a1, int a2, int a3);
// [0x6ab890] (94 bytes) sub_6AB890
// int sub_6AB890(int a1, int a2, int a3);
// [0x6ab8f0] (290 bytes) sub_6AB8F0
// uint32_t *sub_6AB8F0(uint32_t *a1, int a2);
// [0x6aba20] (751 bytes) sub_6ABA20
// int sub_6ABA20(int a1);
// [0x6abd10] (10 bytes) sub_6ABD10
// int sub_6ABD10(int a1);
// [0x6abd20] (826 bytes) sub_6ABD20
// void sub_6ABD20(int a1);
// [0x6ac060] (10 bytes) sub_6AC060
// int sub_6AC060(int a1);
// [0x6ac070] (91 bytes) sub_6AC070
// void sub_6AC070(int a1);
// [0x6ac0d0] (661 bytes) sub_6AC0D0
// int sub_6AC0D0(int a1, int a2, int a3, int a4);
// [0x6ac370] (199 bytes) sub_6AC370
// void sub_6AC370(int a1);
// [0x6ac440] (15 bytes) sub_6AC440
// int sub_6AC440(uint32_t *a1);
// [0x6ac450] (89 bytes) sub_6AC450
// void sub_6AC450(uint32_t *a1);
// [0x6ac4b0] (15 bytes) sub_6AC4B0
// int sub_6AC4B0(uint32_t *a1);
// [0x6ac4c0] (85 bytes) sub_6AC4C0
// void sub_6AC4C0(int *a1);
// [0x6ac520] (28 bytes) sub_6AC520
// void sub_6AC520(int a1);
// [0x6ac540] (56 bytes) sub_6AC540
// void sub_6AC540(void *a1);
// [0x6ac580] (15 bytes) sub_6AC580
// int sub_6AC580(uint32_t *a1);
// [0x6ac590] (121 bytes) sub_6AC590
// void sub_6AC590(int *a1);
// [0x6ac610] (15 bytes) sub_6AC610
// int sub_6AC610(uint32_t *a1);
// [0x6ac620] (145 bytes) sub_6AC620
// void sub_6AC620(int *a1);
// [0x6ac6c0] (15 bytes) sub_6AC6C0
// int sub_6AC6C0(uint32_t *a1);
// [0x6ac6d0] (44 bytes) sub_6AC6D0
// void sub_6AC6D0(uint32_t *a1);
// [0x6ac700] (15 bytes) sub_6AC700
// int sub_6AC700(uint32_t *a1);
// [0x6ac710] (10 bytes) sub_6AC710
// int sub_6AC710(int a1);
// [0x6ac720] (170 bytes) sub_6AC720
// void sub_6AC720(int *a1);
// [0x6ac7d0] (15 bytes) sub_6AC7D0
// int sub_6AC7D0(uint32_t *a1);
// [0x6ac7e0] (10 bytes) sub_6AC7E0
// int sub_6AC7E0(int a1);
// [0x6ac7f0] (142 bytes) sub_6AC7F0
// void sub_6AC7F0(int *a1);
// [0x6ac880] (15 bytes) sub_6AC880
// int sub_6AC880(uint32_t *a1);
// [0x6ac890] (7 bytes) sub_6AC890
// int sub_6AC890(int a1);
// [0x6ac8a0] (143 bytes) sub_6AC8A0
// void sub_6AC8A0(int *a1);
// [0x6ac930] (15 bytes) sub_6AC930
// int sub_6AC930(uint32_t *a1);
// [0x6ac940] (7 bytes) sub_6AC940
// int sub_6AC940(int a1);
// [0x6ac950] (143 bytes) sub_6AC950
// void sub_6AC950(int *a1);
// [0x6ac9e0] (15 bytes) sub_6AC9E0
// int sub_6AC9E0(uint32_t *a1);
// [0x6ac9f0] (7 bytes) sub_6AC9F0
// int sub_6AC9F0(int a1);
// [0x6aca00] (240 bytes) sub_6ACA00
// void sub_6ACA00(int a1);
// [0x6acaf0] (64 bytes) sub_6ACAF0
// void sub_6ACAF0(uint32_t *a1);
// [0x6acb30] (15 bytes) sub_6ACB30
// int sub_6ACB30(char *a1);
// [0x6acb40] (75 bytes) sub_6ACB40
// void sub_6ACB40(uint32_t *a1);
// [0x6acb90] (15 bytes) sub_6ACB90
// int sub_6ACB90(char *a1);
// [0x6acba0] (93 bytes) sub_6ACBA0
// void sub_6ACBA0(int *a1);
// [0x6acc00] (15 bytes) sub_6ACC00
// int sub_6ACC00(char *a1);
// [0x6acc10] (97 bytes) sub_6ACC10
// void sub_6ACC10(uint32_t *a1);
// [0x6acc80] (15 bytes) sub_6ACC80
// int sub_6ACC80(uint32_t *a1);
// [0x6acc90] (10 bytes) sub_6ACC90
// int sub_6ACC90(int a1);
// [0x6acca0] (209 bytes) sub_6ACCA0
// int sub_6ACCA0(int *a1);
// [0x6acd80] (15 bytes) sub_6ACD80
// int sub_6ACD80(uint32_t *a1);
// [0x6acd90] (7 bytes) sub_6ACD90
// int sub_6ACD90(int a1);
// [0x6acda0] (182 bytes) sub_6ACDA0
// int sub_6ACDA0(int *a1);
// [0x6ace60] (15 bytes) sub_6ACE60
// int sub_6ACE60(uint32_t *a1);
// [0x6ace70] (7 bytes) sub_6ACE70
// int sub_6ACE70(int a1);
// [0x6ace80] (182 bytes) sub_6ACE80
// int sub_6ACE80(int *a1);
// [0x6acf40] (15 bytes) sub_6ACF40
// int sub_6ACF40(char *a1);
// [0x6acf50] (117 bytes) sub_6ACF50
// void sub_6ACF50(int *a1);
// [0x6acfd0] (15 bytes) sub_6ACFD0
// int sub_6ACFD0(uint32_t *a1);
// [0x6acfe0] (10 bytes) sub_6ACFE0
// int sub_6ACFE0(int a1);
// [0x6acff0] (181 bytes) sub_6ACFF0
// int sub_6ACFF0(int *a1);
// [0x6ad0b0] (15 bytes) sub_6AD0B0
// int sub_6AD0B0(uint32_t *a1);
// [0x6ad0c0] (7 bytes) sub_6AD0C0
// int sub_6AD0C0(int a1);
// [0x6ad0d0] (264 bytes) sub_6AD0D0
// int sub_6AD0D0(int a1);
// [0x6ad1e0] (15 bytes) sub_6AD1E0
// int sub_6AD1E0(char *a1);
// [0x6ad1f0] (153 bytes) sub_6AD1F0
// void sub_6AD1F0(int *a1);
// [0x6ad290] (318 bytes) sub_6AD290
// void sub_6AD290(uint32_t *a1, unsigned int a2);
// [0x6ad3d0] (386 bytes) sub_6AD3D0
// uint32_t *sub_6AD3D0(int a1);
// [0x6ad560] (6719 bytes) sub_6AD560
// 0x6ad560 sub_6AD560
// [0x6aefa0] (2919 bytes) sub_6AEFA0
// int sub_6AEFA0(hkpWorld **a1, int a2, int a3, char a4, char *a5, int *a6);
// [0x6afb10] (2607 bytes) sub_6AFB10
// int sub_6AFB10( uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, uint32_t *a15, int a16, int a17, int a18, int a19, float a20, float a21, float a22, int a23, float a24, float a25, float a26, int a27, char a28, int a29, int a30, int a31, float a32, float a33, float a34, int a35, float a36, float a37, float a38, int a39, float a40, float a41, float a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, int a53, int a54, int a55, int a56, int a57, int a58, int a59, int a60, int a61, int a62, int a63, int a64);
// [0x6b0540] (1702 bytes) sub_6B0540
// int sub_6B0540(int a1, hkString *a2, char a3, void **a4);
// [0x6b0bf0] (24 bytes) sub_6B0BF0
// uint32_t *sub_6B0BF0(uint32_t *a1);
// [0x6b0c10] (24 bytes) sub_6B0C10
// uint32_t *sub_6B0C10(uint32_t *a1);
// [0x6b0c30] (9 bytes) sub_6B0C30
// void sub_6B0C30();
// [0x6b0c40] (24 bytes) sub_6B0C40
// uint32_t *sub_6B0C40(uint32_t *a1);
// [0x6b0c60] (9 bytes) sub_6B0C60
// int sub_6B0C60();
// [0x6b0c70] (9 bytes) sub_6B0C70
// int sub_6B0C70();
// [0x6b0c80] (24 bytes) sub_6B0C80
// uint32_t *sub_6B0C80(uint32_t *a1);
// [0x6b0ca0] (9 bytes) sub_6B0CA0
// void sub_6B0CA0();
// [0x6b0cb0] (9 bytes) sub_6B0CB0
// void sub_6B0CB0();
// [0x6b0cc0] (64 bytes) sub_6B0CC0
// int sub_6B0CC0(int a1, int a2);
// [0x6b0d00] (9 bytes) sub_6B0D00
// void sub_6B0D00();
// [0x6b0d10] (9 bytes) sub_6B0D10
// void sub_6B0D10();
// [0x6b0d20] (9 bytes) sub_6B0D20
// void sub_6B0D20();
// [0x6b0d30] (24 bytes) sub_6B0D30
// uint32_t *sub_6B0D30(uint32_t *a1);
// [0x6b0d50] (24 bytes) sub_6B0D50
// uint32_t *sub_6B0D50(uint32_t *a1);
// [0x6b0d70] (24 bytes) sub_6B0D70
// uint32_t *sub_6B0D70(uint32_t *a1);
// [0x6b0d90] (24 bytes) sub_6B0D90
// uint32_t *sub_6B0D90(uint32_t *a1);
// [0x6b0db0] (9 bytes) sub_6B0DB0
// void sub_6B0DB0();
// [0x6b0dc0] (22 bytes) sub_6B0DC0
// void *sub_6B0DC0();
// [0x6b0de0] (24 bytes) sub_6B0DE0
// uint32_t *sub_6B0DE0(uint32_t *a1);
// [0x6b0e00] (9 bytes) sub_6B0E00
// void sub_6B0E00();
// [0x6b0e10] (24 bytes) sub_6B0E10
// uint32_t *sub_6B0E10(uint32_t *a1);
// [0x6b0e30] (24 bytes) sub_6B0E30
// uint32_t *sub_6B0E30(uint32_t *a1);
// [0x6b0e50] (24 bytes) sub_6B0E50
// uint32_t *sub_6B0E50(uint32_t *a1);
// [0x6b0e78] (1 bytes) nullsub_127
// void nullsub_127();
// [0x6b0e80] (9 bytes) sub_6B0E80
// void sub_6B0E80();
// [0x6b0e90] (9 bytes) sub_6B0E90
// void sub_6B0E90();
// [0x6b0ea0] (24 bytes) sub_6B0EA0
// uint32_t *sub_6B0EA0(uint32_t *a1);
// [0x6b0ec0] (9 bytes) sub_6B0EC0
// void sub_6B0EC0();
// [0x6b0ed0] (9 bytes) sub_6B0ED0
// void sub_6B0ED0();
// [0x6b0ee0] (9 bytes) sub_6B0EE0
// void sub_6B0EE0();
// [0x6b0ef0] (12 bytes) sub_6B0EF0
// int sub_6B0EF0();
// [0x6b0f00] (12 bytes) sub_6B0F00
// int sub_6B0F00();
// [0x6b0f10] (16 bytes) sub_6B0F10
// int sub_6B0F10(int a1);
// [0x6b0f20] (24 bytes) sub_6B0F20
// uint32_t *sub_6B0F20(uint32_t *a1);
// [0x6b0f40] (13 bytes) sub_6B0F40
// int sub_6B0F40(int a1);
// [0x6b0f50] (24 bytes) sub_6B0F50
// uint32_t *sub_6B0F50(uint32_t *a1);
// [0x6b0f70] (24 bytes) sub_6B0F70
// uint32_t *sub_6B0F70(uint32_t *a1);
// [0x6b0f90] (9 bytes) sub_6B0F90
// void sub_6B0F90();
// [0x6b0fa0] (12 bytes) sub_6B0FA0
// int sub_6B0FA0();
// [0x6b0fb0] (205 bytes) sub_6B0FB0
// int sub_6B0FB0(uint32_t *a1);
// [0x6b10c0] (15 bytes) sub_6B10C0
// int sub_6B10C0(uint32_t *a1);
// [0x6b10d0] (12 bytes) sub_6B10D0
// int sub_6B10D0();
// [0x6b10e0] (18 bytes) sub_6B10E0
// int sub_6B10E0(uint32_t *a1);
// [0x6b1100] (9 bytes) sub_6B1100
// int sub_6B1100();
// [0x6b1110] (21 bytes) sub_6B1110
// int sub_6B1110(int a1);
// [0x6b1130] (18 bytes) sub_6B1130
// int sub_6B1130(uint32_t *a1);
// [0x6b1150] (11 bytes) sub_6B1150
// int sub_6B1150(int a1);
// [0x6b1160] (15 bytes) sub_6B1160
// void sub_6B1160();
// [0x6b1170] (25 bytes) sub_6B1170
// void sub_6B1170();
// [0x6b1190] (15 bytes) sub_6B1190
// void sub_6B1190();
// [0x6b11a0] (25 bytes) sub_6B11A0
// void sub_6B11A0();
// [0x6b11c0] (15 bytes) sub_6B11C0
// void sub_6B11C0();
// [0x6b11d0] (25 bytes) sub_6B11D0
// void sub_6B11D0();
// [0x6b11f0] (15 bytes) sub_6B11F0
// void sub_6B11F0();
// [0x6b1200] (25 bytes) sub_6B1200
// void sub_6B1200();
// [0x6b1220] (18 bytes) sub_6B1220
// void sub_6B1220();
// [0x6b1240] (25 bytes) sub_6B1240
// void sub_6B1240();
// [0x6b1260] (18 bytes) sub_6B1260
// int sub_6B1260(uint32_t *a1, int a2);
// [0x6b1280] (7 bytes) sub_6B1280
// int sub_6B1280(int a1, int a2);
// [0x6b1290] (80 bytes) sub_6B1290
// int sub_6B1290(int *a1, uint32_t *a2);
// [0x6b12e0] (18 bytes) sub_6B12E0
// int sub_6B12E0(uint32_t *a1);
// [0x6b1300] (7 bytes) sub_6B1300
// int sub_6B1300(int a1);
// [0x6b1310] (9 bytes) sub_6B1310
// int sub_6B1310();
// [0x6b1320] (22 bytes) sub_6B1320
// long double sub_6B1320();
// [0x6b1340] (24 bytes) sub_6B1340
// uint32_t *sub_6B1340(uint32_t *a1);
// [0x6b1360] (24 bytes) sub_6B1360
// uint32_t *sub_6B1360(uint32_t *a1);
// [0x6b1380] (25 bytes) sub_6B1380
// void sub_6B1380();
// [0x6b13a0] (10 bytes) sub_6B13A0
// int sub_6B13A0(int a1);
// [0x6b13b0] (33 bytes) sub_6B13B0
// uint32_t *sub_6B13B0(uint32_t *a1);
// [0x6b13e8] (1 bytes) nullsub_128
// void nullsub_128();
// [0x6b13f0] (24 bytes) sub_6B13F0
// uint32_t *sub_6B13F0(uint32_t *a1);
// [0x6b1418] (1 bytes) nullsub_129
// void nullsub_129();
// [0x6b1428] (1 bytes) nullsub_130
// void nullsub_130();
// [0x6b1430] (24 bytes) sub_6B1430
// uint32_t *sub_6B1430(uint32_t *a1);
// [0x6b1450] (11 bytes) sub_6B1450
// int sub_6B1450(int a1);
// [0x6b1460] (24 bytes) sub_6B1460
// uint32_t *sub_6B1460(uint32_t *a1);
// [0x6b1480] (9 bytes) sub_6B1480
// int sub_6B1480();
// [0x6b1490] (18 bytes) sub_6B1490
// int sub_6B1490(uint32_t *a1);
// [0x6b14b0] (11 bytes) sub_6B14B0
// int sub_6B14B0(int a1);
// [0x6b14c0] (18 bytes) sub_6B14C0
// int sub_6B14C0(uint32_t *a1);
// [0x6b14e0] (7 bytes) sub_6B14E0
// int sub_6B14E0(int a1);
// [0x6b14f0] (9 bytes) sub_6B14F0
// int sub_6B14F0();
// [0x6b1500] (7 bytes) sub_6B1500
// int sub_6B1500(int a1);
// [0x6b1510] (13 bytes) sub_6B1510
// int sub_6B1510(int a1);
// [0x6b1520] (18 bytes) sub_6B1520
// int sub_6B1520(uint32_t *a1);
// [0x6b1540] (11 bytes) sub_6B1540
// int sub_6B1540(int a1);
// [0x6b1550] (18 bytes) sub_6B1550
// int sub_6B1550(uint32_t *a1);
// [0x6b1570] (7 bytes) sub_6B1570
// int sub_6B1570(int a1);
// [0x6b1580] (9 bytes) sub_6B1580
// int sub_6B1580();
// [0x6b1590] (7 bytes) sub_6B1590
// int sub_6B1590(int a1);
// [0x6b15a0] (13 bytes) sub_6B15A0
// int sub_6B15A0(int a1);
// [0x6b15b0] (18 bytes) sub_6B15B0
// int sub_6B15B0(uint32_t *a1);
// [0x6b15d0] (11 bytes) sub_6B15D0
// int sub_6B15D0(int a1);
// [0x6b15e0] (18 bytes) sub_6B15E0
// int sub_6B15E0(uint32_t *a1);
// [0x6b1600] (10 bytes) sub_6B1600
// int sub_6B1600(int a1);
// [0x6b1610] (9 bytes) sub_6B1610
// int sub_6B1610();
// [0x6b1620] (10 bytes) sub_6B1620
// int sub_6B1620(int a1);
// [0x6b1630] (41 bytes) sub_6B1630
// int sub_6B1630(int a1);
// [0x6b1660] (30 bytes) sub_6B1660
// int sub_6B1660(int a1, unsigned int a2);
// [0x6b1688] (1 bytes) nullsub_131
// void nullsub_131();
// [0x6b1698] (1 bytes) nullsub_132
// void nullsub_132();
// [0x6b16a8] (1 bytes) nullsub_133
// void nullsub_133();
// [0x6b16b0] (115 bytes) sub_6B16B0
// int (**sub_6B16B0(uint32_t *a1))(int);
// [0x6b1740] (15 bytes) sub_6B1740
// int sub_6B1740(uint32_t *a1);
// [0x6b1750] (12 bytes) sub_6B1750
// int sub_6B1750();
// [0x6b1760] (18 bytes) sub_6B1760
// int sub_6B1760(uint32_t *a1);
// [0x6b1780] (9 bytes) sub_6B1780
// int sub_6B1780();
// [0x6b1790] (18 bytes) sub_6B1790
// int sub_6B1790(uint32_t *a1);
// [0x6b17b0] (11 bytes) sub_6B17B0
// int sub_6B17B0(int a1);
// [0x6b17c0] (10 bytes) sub_6B17C0
// int sub_6B17C0(int a1);
// [0x6b17d0] (16 bytes) sub_6B17D0
// int sub_6B17D0(int a1);
// [0x6b17e0] (15 bytes) sub_6B17E0
// int sub_6B17E0(uint32_t *a1);
// [0x6b17f0] (12 bytes) sub_6B17F0
// int sub_6B17F0();
// [0x6b1800] (15 bytes) sub_6B1800
// int sub_6B1800(uint32_t *a1);
// [0x6b1810] (12 bytes) sub_6B1810
// int sub_6B1810();
// [0x6b1820] (18 bytes) sub_6B1820
// int sub_6B1820(uint32_t *a1);
// [0x6b1840] (9 bytes) sub_6B1840
// int sub_6B1840();
// [0x6b1850] (24 bytes) sub_6B1850
// uint32_t *sub_6B1850(uint32_t *a1);
// [0x6b1870] (115 bytes) sub_6B1870
// void (__noreturn **sub_6B1870(uint32_t *a1))();
// [0x6b18f0] (9 bytes) sub_6B18F0
// void sub_6B18F0();
// [0x6b1900] (24 bytes) sub_6B1900
// uint32_t *sub_6B1900(uint32_t *a1);
// [0x6b1920] (9 bytes) sub_6B1920
// void sub_6B1920();
// [0x6b1930] (10 bytes) sub_6B1930
// int sub_6B1930(int a1);
// [0x6b1940] (33 bytes) sub_6B1940
// uint32_t *sub_6B1940(uint32_t *a1);
// [0x6b1970] (25 bytes) sub_6B1970
// void sub_6B1970();
// [0x6b1990] (24 bytes) sub_6B1990
// uint32_t *sub_6B1990(uint32_t *a1);
// [0x6b19b0] (12 bytes) sub_6B19B0
// int sub_6B19B0();
// [0x6b19c0] (24 bytes) sub_6B19C0
// uint32_t *sub_6B19C0(uint32_t *a1);
// [0x6b19e0] (24 bytes) sub_6B19E0
// uint32_t *sub_6B19E0(uint32_t *a1);
// [0x6b1a00] (24 bytes) sub_6B1A00
// uint32_t *sub_6B1A00(uint32_t *a1);
// [0x6b1a20] (42 bytes) sub_6B1A20
// void sub_6B1A20(uint32_t *a1);
// [0x6b1a50] (42 bytes) sub_6B1A50
// void sub_6B1A50(uint32_t *a1);
// [0x6b1a80] (42 bytes) sub_6B1A80
// void sub_6B1A80(uint32_t *a1);
// [0x6b1ab0] (7 bytes) sub_6B1AB0
// int sub_6B1AB0(int a1);
// [0x6b1ac0] (51 bytes) sub_6B1AC0
// void sub_6B1AC0(uint32_t *a1);
// [0x6b1b00] (42 bytes) sub_6B1B00
// void sub_6B1B00(uint32_t *a1);
// [0x6b1b30] (42 bytes) sub_6B1B30
// void sub_6B1B30(uint32_t *a1);
// [0x6b1b60] (42 bytes) sub_6B1B60
// void sub_6B1B60(uint32_t *a1);
// [0x6b1b90] (42 bytes) sub_6B1B90
// void sub_6B1B90(uint32_t *a1);
// [0x6b1bc0] (42 bytes) sub_6B1BC0
// void sub_6B1BC0(uint32_t *a1);
// [0x6b1bf0] (42 bytes) sub_6B1BF0
// void sub_6B1BF0(uint32_t *a1);
// [0x6b1c20] (42 bytes) sub_6B1C20
// void sub_6B1C20(uint32_t *a1);
// [0x6b1c50] (42 bytes) sub_6B1C50
// void sub_6B1C50(uint32_t *a1);
// [0x6b1c80] (127 bytes) sub_6B1C80
// void sub_6B1C80(int a1);
// [0x6b1d00] (13 bytes) sub_6B1D00
// int sub_6B1D00(int a1);
// [0x6b1d10] (208 bytes) sub_6B1D10
// void sub_6B1D10(hkpVehicleInstance *a1);
// [0x6b1de0] (67 bytes) sub_6B1DE0
// int (**sub_6B1DE0(uint32_t *a1))(int);
// [0x6b1e30] (45 bytes) sub_6B1E30
// void sub_6B1E30(hkMemoryAllocator *a1);
// [0x6b1e60] (10 bytes) sub_6B1E60
// int sub_6B1E60(int a1);
// [0x6b1e70] (10 bytes) sub_6B1E70
// int sub_6B1E70(int a1);
// [0x6b1e80] (10 bytes) sub_6B1E80
// int sub_6B1E80(int a1);
// [0x6b1e90] (60 bytes) sub_6B1E90
// void sub_6B1E90(hkpBroadPhaseBorder *a1);
// [0x6b1ed0] (10 bytes) sub_6B1ED0
// int sub_6B1ED0(int a1);
// [0x6b1ee0] (10 bytes) sub_6B1EE0
// int sub_6B1EE0(int a1);
// [0x6b1ef0] (10 bytes) sub_6B1EF0
// int sub_6B1EF0(int a1);
// [0x6b1f00] (63 bytes) sub_6B1F00
// void sub_6B1F00(hkpTriggerVolume *a1);
// [0x6b1f40] (7 bytes) sub_6B1F40
// int sub_6B1F40(int a1, int a2);
// [0x6b1f50] (95 bytes) sub_6B1F50
// int sub_6B1F50(int a1, int a2);
// [0x6b1fb0] (7 bytes) sub_6B1FB0
// int sub_6B1FB0(int a1, int a2);
// [0x6b1fc0] (58 bytes) sub_6B1FC0
// hkpEntity **sub_6B1FC0(hkpEntity **a1, hkpEntity *a2);
// [0x6b2000] (73 bytes) sub_6B2000
// int sub_6B2000(int a1, int a2, int a3);
// [0x6b2050] (10 bytes) sub_6B2050
// int sub_6B2050(int a1, int a2);
// [0x6b2060] (220 bytes) sub_6B2060
// int sub_6B2060(uint32_t *a1, int a2);
// [0x6b2140] (163 bytes) sub_6B2140
// int sub_6B2140(float *a1, int a2, float *a3);
// [0x6b21f0] (224 bytes) sub_6B21F0
// int sub_6B21F0(uint32_t *a1, int a2, uint32_t *a3);
// [0x6b22d0] (111 bytes) sub_6B22D0
// int sub_6B22D0(int a1);
// [0x6b2340] (111 bytes) sub_6B2340
// int sub_6B2340(int a1);
// [0x6b23b0] (7 bytes) sub_6B23B0
// int sub_6B23B0(int a1);
// [0x6b23c0] (96 bytes) sub_6B23C0
// int sub_6B23C0(uint32_t *a1);
// [0x6b2420] (87 bytes) sub_6B2420
// int sub_6B2420(uint32_t *a1);
// [0x6b2480] (111 bytes) sub_6B2480
// int sub_6B2480(int a1);
// [0x6b24f0] (111 bytes) sub_6B24F0
// int sub_6B24F0(int a1);
// [0x6b2560] (111 bytes) sub_6B2560
// int sub_6B2560(int a1);
// [0x6b25d0] (111 bytes) sub_6B25D0
// int sub_6B25D0(int a1);
// [0x6b2640] (111 bytes) sub_6B2640
// int sub_6B2640(int a1);
// [0x6b26b0] (87 bytes) sub_6B26B0
// int sub_6B26B0(uint32_t *a1);
// [0x6b2710] (87 bytes) sub_6B2710
// int sub_6B2710(uint32_t *a1);
// [0x6b2770] (111 bytes) sub_6B2770
// int sub_6B2770(int a1);
// [0x6b27e0] (111 bytes) sub_6B27E0
// int sub_6B27E0(int a1);
// [0x6b2850] (111 bytes) sub_6B2850
// int sub_6B2850(int a1);
// [0x6b28c0] (111 bytes) sub_6B28C0
// int sub_6B28C0(int a1);
// [0x6b2930] (7 bytes) sub_6B2930
// int sub_6B2930(int a1);
// [0x6b2940] (7 bytes) sub_6B2940
// int sub_6B2940(int a1);
// [0x6b2950] (7 bytes) sub_6B2950
// int sub_6B2950(int a1);
// [0x6b2960] (139 bytes) sub_6B2960
// int sub_6B2960(hkpTriggerVolume *a1);
// [0x6b29f0] (130 bytes) sub_6B29F0
// int sub_6B29F0(int a1);
// [0x6b2a80] (7 bytes) sub_6B2A80
// int sub_6B2A80(int a1);
// [0x6b2a90] (7 bytes) sub_6B2A90
// int sub_6B2A90(int a1);
// [0x6b2aa0] (7 bytes) sub_6B2AA0
// int sub_6B2AA0(int a1);
// [0x6b2ab0] (137 bytes) sub_6B2AB0
// int sub_6B2AB0(hkpBroadPhaseBorder *a1);
// [0x6b2b40] (178 bytes) sub_6B2B40
// int sub_6B2B40(int a1);
// [0x6b2c00] (307 bytes) sub_6B2C00
// int sub_6B2C00(int a1, hkpEntity *a2);
// [0x6b2d40] (123 bytes) sub_6B2D40
// void sub_6B2D40(uint32_t *a1);
// [0x6b2dc0] (159 bytes) sub_6B2DC0
// int sub_6B2DC0(int a1, int a2);
// [0x6b2e60] (119 bytes) sub_6B2E60
// void sub_6B2E60(int a1);
// [0x6b2ee0] (131 bytes) sub_6B2EE0
// void sub_6B2EE0(void *a1);
// [0x6b2f70] (72 bytes) sub_6B2F70
// int sub_6B2F70(int a1);
// [0x6b2fc0] (1935 bytes) sub_6B2FC0
// int sub_6B2FC0(int a1, int a2);
// [0x6b3750] (226 bytes) sub_6B3750
// double *sub_6B3750(double *a1, int a2, int a3);
// [0x6b3840] (103 bytes) sub_6B3840
// int sub_6B3840(int a1, int a2);
// [0x6b38b0] (632 bytes) sub_6B38B0
// int sub_6B38B0(int a1, hkpRigidBody *a2, char a3);
// [0x6b3b30] (229 bytes) sub_6B3B30
// int sub_6B3B30(long double a1, int a2, char a3, int a4);
// [0x6b3c20] (193 bytes) sub_6B3C20
// float *sub_6B3C20(float *a1, int a2, int a3);
// [0x6b3cf0] (10 bytes) sub_6B3CF0
// int sub_6B3CF0(int a1);
// [0x6b3d00] (263 bytes) sub_6B3D00
// int sub_6B3D00(hkpVehicleInstance *a1);
// [0x6b3e10] (135 bytes) sub_6B3E10
// void sub_6B3E10(void *a1);
// [0x6b3ea0] (10 bytes) sub_6B3EA0
// int sub_6B3EA0(int a1, int a2);
// [0x6b3eb0] (220 bytes) sub_6B3EB0
// int sub_6B3EB0(uint32_t *a1, int a2);
// [0x6b3f90] (792 bytes) sub_6B3F90
// float *sub_6B3F90(float *a1, int a2, int a3);
// [0x6b42b0] (18 bytes) sub_6B42B0
// int sub_6B42B0(uint32_t *a1, int a2);
// [0x6b42d0] (10 bytes) sub_6B42D0
// int sub_6B42D0(int a1, int a2);
// [0x6b42e0] (210 bytes) sub_6B42E0
// int sub_6B42E0(int a1, float *a2);
// [0x6b43c0] (314 bytes) sub_6B43C0
// void sub_6B43C0(int a1, int a2, uint8_t a3, uint32_t *a4);
// [0x6b4500] (15 bytes) sub_6B4500
// int sub_6B4500(uint32_t *a1, char a2);
// [0x6b4510] (10 bytes) sub_6B4510
// int sub_6B4510(int a1, char a2);
// [0x6b4520] (300 bytes) sub_6B4520
// int sub_6B4520(int a1, char a2);
// [0x6b4650] (162 bytes) sub_6B4650
// int sub_6B4650(int a1);
// [0x6b4700] (18 bytes) sub_6B4700
// int sub_6B4700(uint32_t *a1);
// [0x6b4720] (229 bytes) sub_6B4720
// int sub_6B4720(int a1);
// [0x6b4810] (79 bytes) sub_6B4810
// int sub_6B4810(int a1);
// [0x6b4860] (110 bytes) sub_6B4860
// int (**sub_6B4860(uint32_t *a1))(int);
// [0x6b48d0] (148 bytes) sub_6B48D0
// int sub_6B48D0(int *a1);
// [0x6b4970] (191 bytes) sub_6B4970
// int sub_6B4970(uint32_t *a1);
// [0x6b4a30] (148 bytes) sub_6B4A30
// int sub_6B4A30(int *a1);
// [0x6b4ad0] (148 bytes) sub_6B4AD0
// int (**sub_6B4AD0(uint32_t *a1))(int);
// [0x6b4b70] (185 bytes) sub_6B4B70
// int sub_6B4B70(int a1);
// [0x6b4c30] (340 bytes) sub_6B4C30
// int (**sub_6B4C30(uint32_t *a1))(int);
// [0x6b4d90] (395 bytes) sub_6B4D90
// int sub_6B4D90(int a1);
// [0x6b4f20] (131 bytes) sub_6B4F20
// uint32_t *sub_6B4F20(uint32_t *a1);
// [0x6b4fb0] (130 bytes) sub_6B4FB0
// int sub_6B4FB0(uint32_t *a1);
// [0x6b5040] (348 bytes) sub_6B5040
// int sub_6B5040(int a1, const char *a2, int a3, int a4);
// [0x6b51a0] (375 bytes) sub_6B51A0
// uint32_t *sub_6B51A0(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
// [0x6b5320] (1913 bytes) sub_6B5320
// void sub_6B5320(hkpVehicleInstance *a1, int a2);
// [0x6b5aa0] (193 bytes) sub_6B5AA0
// int sub_6B5AA0(int a1, int a2, int a3);
// [0x6b5b70] (254 bytes) sub_6B5B70
// float *sub_6B5B70(float *a1);
// [0x6b5c70] (198 bytes) sub_6B5C70
// float *sub_6B5C70(float *a1, int a2);
// [0x6b5d40] (212 bytes) std::map<std::string,LoadInPlaceBuffer,std::less<std::string>,std::allocator<std::pair<std::string const,LoadInPlaceBuffer>>>::find(std::string const&)
// uint32_t *std::map<std::string,LoadInPlaceBuffer>::find(uint32_t *a1, int a2, void **a3);
// [0x6b5e20] (160 bytes) sub_6B5E20
// void sub_6B5E20(uint32_t *a1);
// [0x6b5ec0] (3244 bytes) sub_6B5EC0
// int sub_6B5EC0(long double a1, int a2, uint32_t *a3);
// [0x6b6b70] (1059 bytes) std::map<std::string,std::vector<Gangstar::Handle<PhysicsBody,false>,std::allocator<Gangstar::Handle<PhysicsBody,false>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<Gangstar::Handle<PhysicsBody,false>,std::allocator<Gangstar::Handle<PhysicsBody,false>>>>>>::operator[](std::string const&)
// int std::map<std::string,std::vector<Gangstar::Handle<PhysicsBody,false>>>::operator[]( uint32_t *a1, const void **a2);
// [0x6b6fa0] (710 bytes) std::vector<PhysicsTyremarkInfo,std::allocator<PhysicsTyremarkInfo>>::_M_insert_aux(__gnu_cxx::__normal_iterator<PhysicsTyremarkInfo*,std::vector<PhysicsTyremarkInfo,std::allocator<PhysicsTyremarkInfo>>>,PhysicsTyremarkInfo const&)
// int std::vector<PhysicsTyremarkInfo>::_M_insert_aux(int a1, char *a2, int *a3);
// [0x6b7270] (102 bytes) sub_6B7270
// int sub_6B7270(int a1, int a2, int a3);
// [0x6b72e0] (516 bytes) std::vector<PhysicsSuspensionInfo,std::allocator<PhysicsSuspensionInfo>>::_M_insert_aux(__gnu_cxx::__normal_iterator<PhysicsSuspensionInfo*,std::vector<PhysicsSuspensionInfo,std::allocator<PhysicsSuspensionInfo>>>,PhysicsSuspensionInfo const&)
// int std::vector<PhysicsSuspensionInfo>::_M_insert_aux(void **a1, char *a2, int *a3);
// [0x6b74f0] (1078 bytes) std::_Rb_tree<std::string,std::pair<std::string const,std::vector<Gangstar::Handle<PhysicsBody,false>,std::allocator<Gangstar::Handle<PhysicsBody,false>>>>,std::_Select1st<std::pair<std::string const,std::vector<Gangstar::Handle<PhysicsBody,false>,std::allocator<Gangstar::Handle<PhysicsBody,false>>>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<Gangstar::Handle<PhysicsBody,false>,std::allocator<Gangstar::Handle<PhysicsBody,false>>>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,std::vector<Gangstar::Handle<PhysicsBody,false>,std::allocator<Gangstar::Handle<PhysicsBody,false>>>>> *)
// void std::_Rb_tree<std::string,std::pair<std::string const,std::vector<Gangstar::Handle<PhysicsBody,false>>>,std::_Select1st<std::pair<std::string const,std::vector<Gangstar::Handle<PhysicsBody,false>>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::vector<Gangstar::Handle<PhysicsBody,false>>>>>::_M_erase( int a1, uint32_t *a2);
// [0x6b7930] (567 bytes) std::_Rb_tree<std::string,std::pair<std::string const,LoadInPlaceBuffer>,std::_Select1st<std::pair<std::string const,LoadInPlaceBuffer>>,std::less<std::string>,std::allocator<std::pair<std::string const,LoadInPlaceBuffer>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,LoadInPlaceBuffer>> *)
// void std::_Rb_tree<std::string,std::pair<std::string const,LoadInPlaceBuffer>,std::_Select1st<std::pair<std::string const,LoadInPlaceBuffer>>,std::less<std::string>,std::allocator<std::pair<std::string const,LoadInPlaceBuffer>>>::_M_erase( int a1, uint32_t *a2);
// [0x6b7b70] (686 bytes) std::vector<Gangstar::Handle<PhysicsBody,false>,std::allocator<Gangstar::Handle<PhysicsBody,false>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Gangstar::Handle<PhysicsBody,false>*,std::vector<Gangstar::Handle<PhysicsBody,false>,std::allocator<Gangstar::Handle<PhysicsBody,false>>>>,Gangstar::Handle<PhysicsBody,false> const&)
// void std::vector<Gangstar::Handle<PhysicsBody,false>>::_M_insert_aux(int **a1, int *a2, int *a3);
// [0x6b7e20] (425 bytes) std::_Rb_tree<PhysicsExplosionListener *,PhysicsExplosionListener *,std::_Identity<PhysicsExplosionListener *>,std::less<PhysicsExplosionListener *>,std::allocator<PhysicsExplosionListener *>>::_M_erase(std::_Rb_tree_node<PhysicsExplosionListener *> *)
// void std::_Rb_tree<PhysicsExplosionListener *,PhysicsExplosionListener *,std::_Identity<PhysicsExplosionListener *>,std::less<PhysicsExplosionListener *>,std::allocator<PhysicsExplosionListener *>>::_M_erase( int a1, uint32_t *a2);
// [0x6b7fd0] (1131 bytes) std::vector<glitch::core::CMatrix4<float>,std::allocator<glitch::core::CMatrix4<float>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<glitch::core::CMatrix4<float>*,std::vector<glitch::core::CMatrix4<float>,std::allocator<glitch::core::CMatrix4<float>>>>,glitch::core::CMatrix4<float> const&)
// size_t std::vector<glitch::core::CMatrix4<float>>::_M_insert_aux(int a1, char *a2, int *a3);
// [0x6b8440] (4782 bytes) std::vector<PhysicsWorld::CollideOutput,std::allocator<PhysicsWorld::CollideOutput>>::_M_fill_insert(__gnu_cxx::__normal_iterator<PhysicsWorld::CollideOutput*,std::vector<PhysicsWorld::CollideOutput,std::allocator<PhysicsWorld::CollideOutput>>>,unsigned int,PhysicsWorld::CollideOutput const&)
// void std::vector<PhysicsWorld::CollideOutput>::_M_fill_insert(int *a1, char *a2, unsigned int a3, uint32_t *a4);
// [0x6b96f0] (164 bytes) std::vector<PhysicsWorld::CollideOutput,std::allocator<PhysicsWorld::CollideOutput>>::resize(unsigned int,PhysicsWorld::CollideOutput)
// void std::vector<PhysicsWorld::CollideOutput>::resize(int *a1, unsigned int a2, uint32_t *a3);
// [0x6b97a0] (259 bytes) std::_Rb_tree<std::string,std::pair<std::string const,LoadInPlaceBuffer>,std::_Select1st<std::pair<std::string const,LoadInPlaceBuffer>>,std::less<std::string>,std::allocator<std::pair<std::string const,LoadInPlaceBuffer>>>::_M_insert_(std::_Rb_tree_node_base const*,std::_Rb_tree_node_base const*,std::pair<std::string const,LoadInPlaceBuffer> const&)
// int *std::_Rb_tree<std::string,std::pair<std::string const,LoadInPlaceBuffer>,std::_Select1st<std::pair<std::string const,LoadInPlaceBuffer>>,std::less<std::string>,std::allocator<std::pair<std::string const,LoadInPlaceBuffer>>>::_M_insert_( int *a1, int a2, int a3, int a4, int a5);
// [0x6b98b0] (527 bytes) std::_Rb_tree<std::string,std::pair<std::string const,LoadInPlaceBuffer>,std::_Select1st<std::pair<std::string const,LoadInPlaceBuffer>>,std::less<std::string>,std::allocator<std::pair<std::string const,LoadInPlaceBuffer>>>::_M_insert_unique(std::pair<std::string const,LoadInPlaceBuffer> const&)
// int std::_Rb_tree<std::string,std::pair<std::string const,LoadInPlaceBuffer>,std::_Select1st<std::pair<std::string const,LoadInPlaceBuffer>>,std::less<std::string>,std::allocator<std::pair<std::string const,LoadInPlaceBuffer>>>::_M_insert_unique( int a1, uint32_t *a2, void **a3);
// [0x6b9ac0] (905 bytes) std::_Rb_tree<std::string,std::pair<std::string const,LoadInPlaceBuffer>,std::_Select1st<std::pair<std::string const,LoadInPlaceBuffer>>,std::less<std::string>,std::allocator<std::pair<std::string const,LoadInPlaceBuffer>>>::_M_insert_unique_(std::_Rb_tree_const_iterator<std::pair<std::string const,LoadInPlaceBuffer>>,std::pair<std::string const,LoadInPlaceBuffer> const&)
// int *std::_Rb_tree<std::string,std::pair<std::string const,LoadInPlaceBuffer>,std::_Select1st<std::pair<std::string const,LoadInPlaceBuffer>>,std::less<std::string>,std::allocator<std::pair<std::string const,LoadInPlaceBuffer>>>::_M_insert_unique_( int *a1, uint32_t *a2, int a3, int a4);
// [0x6b9e50] (45 bytes) sub_6B9E50
// void sub_6B9E50(hkMemoryAllocator *a1);
