#pragma once
// ============================================================================
// TU16_CollisionGrenadesAndSpawn.h
// Complete Translation Unit [16/41]
// Binary Range in lib/x86/libGangstar4.so: 0x8da7a0 .. 0x963a10 (548 KB)
// Total Decompiled Functions in TU: 1075 (100% coverage)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// Function Table in Translation Unit:
// [0x8da7a0] (3769 bytes) sub_8DA7A0
// glf::SpinLock *sub_8DA7A0();
// [0x8db668] (1 bytes) nullsub_346
// void nullsub_346();
// [0x8db670] (15 bytes) sub_8DB670
// int sub_8DB670(int a1);
// [0x8db680] (45 bytes) sub_8DB680
// int sub_8DB680(int a1, int a2);
// [0x8db6b0] (149 bytes) sub_8DB6B0
// int sub_8DB6B0(int a1, uint8_t a2);
// [0x8db750] (63 bytes) sub_8DB750
// int sub_8DB750(int a1, int a2);
// [0x8db790] (39 bytes) sub_8DB790
// int sub_8DB790(int a1);
// [0x8db7c0] (39 bytes) sub_8DB7C0
// int sub_8DB7C0(int a1);
// [0x8db7f0] (9 bytes) sub_8DB7F0
// int sub_8DB7F0();
// [0x8db800] (9 bytes) sub_8DB800
// int sub_8DB800();
// [0x8db810] (39 bytes) sub_8DB810
// int sub_8DB810(int a1);
// [0x8db840] (34 bytes) sub_8DB840
// int sub_8DB840(uint32_t *a1);
// [0x8db870] (29 bytes) sub_8DB870
// unsigned int sub_8DB870(uint32_t *a1, int a2);
// [0x8db890] (16 bytes) sub_8DB890
// bool sub_8DB890(int a1);
// [0x8db8a0] (64 bytes) sub_8DB8A0
// int sub_8DB8A0(int a1, float a2);
// [0x8db8e0] (213 bytes) sub_8DB8E0
// int sub_8DB8E0(int a1);
// [0x8db9c0] (35 bytes) sub_8DB9C0
// uint32_t *sub_8DB9C0(uint32_t *a1, uint32_t *a2);
// [0x8db9f0] (44 bytes) sub_8DB9F0
// uint32_t *sub_8DB9F0(uint32_t *a1, uint32_t *a2);
// [0x8dba20] (37 bytes) sub_8DBA20
// uint32_t *sub_8DBA20(uint32_t *a1, uint32_t *a2);
// [0x8dba50] (14 bytes) sub_8DBA50
// int sub_8DBA50(int a1);
// [0x8dba60] (23 bytes) sub_8DBA60
// int sub_8DBA60(int a1);
// [0x8dba80] (63 bytes) sub_8DBA80
// int sub_8DBA80(int a1);
// [0x8dbac0] (9 bytes) sub_8DBAC0
// int sub_8DBAC0();
// [0x8dbad8] (1 bytes) nullsub_347
// void nullsub_347();
// [0x8dbae8] (1 bytes) nullsub_348
// void nullsub_348();
// [0x8dbaf8] (1 bytes) nullsub_349
// void nullsub_349();
// [0x8dbb08] (1 bytes) nullsub_350
// void nullsub_350();
// [0x8dbb18] (1 bytes) nullsub_351
// void nullsub_351();
// [0x8dbb28] (1 bytes) nullsub_352
// void nullsub_352();
// [0x8dbb30] (36 bytes) sub_8DBB30
// bool sub_8DBB30(int a1);
// [0x8dbb60] (36 bytes) sub_8DBB60
// int sub_8DBB60(int a1);
// [0x8dbb90] (40 bytes) sub_8DBB90
// long double sub_8DBB90(int a1);
// [0x8dbbc0] (12 bytes) sub_8DBBC0
// int sub_8DBBC0();
// [0x8dbbd0] (61 bytes) sub_8DBBD0
// long double sub_8DBBD0(int a1);
// [0x8dbc10] (17 bytes) sub_8DBC10
// int sub_8DBC10(int a1, uint32_t *a2);
// [0x8dbc30] (17 bytes) sub_8DBC30
// int sub_8DBC30(int a1, uint32_t *a2);
// [0x8dbc50] (22 bytes) sub_8DBC50
// const char *sub_8DBC50();
// [0x8dbc70] (22 bytes) sub_8DBC70
// const char *sub_8DBC70();
// [0x8dbc90] (17 bytes) sub_8DBC90
// int sub_8DBC90(int a1, uint32_t *a2);
// [0x8dbcb0] (17 bytes) sub_8DBCB0
// int sub_8DBCB0(int a1, uint32_t *a2);
// [0x8dbcd0] (61 bytes) sub_8DBCD0
// long double sub_8DBCD0(int a1);
// [0x8dbd18] (1 bytes) nullsub_353
// void nullsub_353();
// [0x8dbd20] (60 bytes) sub_8DBD20
// int sub_8DBD20(int a1, uint32_t *a2);
// [0x8dbd60] (60 bytes) sub_8DBD60
// int sub_8DBD60(int a1, uint32_t *a2);
// [0x8dbda0] (22 bytes) sub_8DBDA0
// const char *sub_8DBDA0();
// [0x8dbdc0] (22 bytes) sub_8DBDC0
// const char *sub_8DBDC0();
// [0x8dbde0] (23 bytes) sub_8DBDE0
// bool sub_8DBDE0(int a1);
// [0x8dbe00] (9 bytes) sub_8DBE00
// long double sub_8DBE00();
// [0x8dbe10] (9 bytes) sub_8DBE10
// long double sub_8DBE10();
// [0x8dbe20] (22 bytes) sub_8DBE20
// const char *sub_8DBE20();
// [0x8dbe40] (22 bytes) sub_8DBE40
// const char *sub_8DBE40();
// [0x8dbe60] (17 bytes) sub_8DBE60
// int sub_8DBE60(int a1, uint32_t *a2);
// [0x8dbe80] (17 bytes) sub_8DBE80
// int sub_8DBE80(int a1, uint32_t *a2);
// [0x8dbea0] (98 bytes) sub_8DBEA0
// int sub_8DBEA0(int a1, int a2, int a3, ...);
// [0x8dbf10] (34 bytes) sub_8DBF10
// uint32_t *sub_8DBF10(int a1);
// [0x8dbf40] (34 bytes) sub_8DBF40
// uint32_t *sub_8DBF40(int a1);
// [0x8dbf70] (34 bytes) sub_8DBF70
// unsigned int sub_8DBF70(int a1);
// [0x8dbfa0] (34 bytes) sub_8DBFA0
// int sub_8DBFA0(int a1);
// [0x8dbfd0] (34 bytes) sub_8DBFD0
// int sub_8DBFD0(int a1);
// [0x8dc000] (51 bytes) sub_8DC000
// int sub_8DC000(int a1, char a2, float a3);
// [0x8dc040] (158 bytes) sub_8DC040
// int *sub_8DC040(int a1, int a2);
// [0x8dc0e0] (49 bytes) sub_8DC0E0
// void sub_8DC0E0(int a1, char a2);
// [0x8dc120] (42 bytes) sub_8DC120
// int sub_8DC120(int a1, int a2);
// [0x8dc150] (42 bytes) sub_8DC150
// int sub_8DC150(int a1, int a2);
// [0x8dc180] (42 bytes) sub_8DC180
// int sub_8DC180(int a1, int a2);
// [0x8dc1b0] (52 bytes) sub_8DC1B0
// char sub_8DC1B0(int a1);
// [0x8dc1f0] (34 bytes) sub_8DC1F0
// int sub_8DC1F0(int a1);
// [0x8dc220] (34 bytes) sub_8DC220
// int sub_8DC220(int a1);
// [0x8dc250] (34 bytes) sub_8DC250
// int sub_8DC250(int a1);
// [0x8dc280] (34 bytes) sub_8DC280
// int sub_8DC280(int a1);
// [0x8dc2b0] (34 bytes) sub_8DC2B0
// int sub_8DC2B0(int a1);
// [0x8dc2e0] (75 bytes) sub_8DC2E0
// int sub_8DC2E0(int a1);
// [0x8dc330] (58 bytes) sub_8DC330
// int sub_8DC330(int a1);
// [0x8dc370] (43 bytes) sub_8DC370
// int sub_8DC370(int a1, char a2);
// [0x8dc3a0] (43 bytes) sub_8DC3A0
// int sub_8DC3A0(int a1, char a2);
// [0x8dc3d0] (95 bytes) sub_8DC3D0
// int sub_8DC3D0(int a1, int a2, int a3);
// [0x8dc430] (67 bytes) sub_8DC430
// char *sub_8DC430(int a1, char *a2, char *a3);
// [0x8dc480] (34 bytes) sub_8DC480
// int sub_8DC480(int a1);
// [0x8dc4b0] (34 bytes) sub_8DC4B0
// int sub_8DC4B0(int a1);
// [0x8dc4e0] (133 bytes) sub_8DC4E0
// char *sub_8DC4E0(int a1, int a2, char a3);
// [0x8dc570] (34 bytes) sub_8DC570
// int sub_8DC570(int a1);
// [0x8dc5a0] (34 bytes) sub_8DC5A0
// int sub_8DC5A0(int a1);
// [0x8dc5d0] (34 bytes) sub_8DC5D0
// int sub_8DC5D0(int a1);
// [0x8dc600] (34 bytes) sub_8DC600
// int sub_8DC600(int a1);
// [0x8dc630] (82 bytes) sub_8DC630
// uint32_t *sub_8DC630();
// [0x8dc690] (82 bytes) sub_8DC690
// uint32_t *sub_8DC690();
// [0x8dc6f0] (82 bytes) sub_8DC6F0
// uint32_t *sub_8DC6F0();
// [0x8dc750] (72 bytes) sub_8DC750
// void sub_8DC750();
// [0x8dc7a0] (61 bytes) sub_8DC7A0
// int sub_8DC7A0(int a1, int a2, int a3);
// [0x8dc7e0] (98 bytes) sub_8DC7E0
// int sub_8DC7E0(int a1, uint32_t *a2);
// [0x8dc850] (115 bytes) sub_8DC850
// int sub_8DC850(int a1);
// [0x8dc8d0] (62 bytes) sub_8DC8D0
// int sub_8DC8D0(long double a1, int a2);
// [0x8dc910] (76 bytes) sub_8DC910
// int sub_8DC910(long double a1, int a2);
// [0x8dc960] (190 bytes) sub_8DC960
// long double sub_8DC960(int a1, int a2);
// [0x8dca20] (159 bytes) sub_8DCA20
// int sub_8DCA20(int a1);
// [0x8dcac0] (153 bytes) sub_8DCAC0
// long double sub_8DCAC0(float *a1);
// [0x8dcb60] (60 bytes) sub_8DCB60
// float *sub_8DCB60(float *a1);
// [0x8dcba0] (46 bytes) sub_8DCBA0
// int sub_8DCBA0(uint32_t *a1);
// [0x8dcbd0] (62 bytes) sub_8DCBD0
// int sub_8DCBD0(int a1);
// [0x8dcc10] (76 bytes) sub_8DCC10
// int sub_8DCC10(int a1);
// [0x8dcc60] (62 bytes) sub_8DCC60
// int sub_8DCC60(int a1);
// [0x8dcca0] (149 bytes) sub_8DCCA0
// int sub_8DCCA0(int a1);
// [0x8dcd40] (114 bytes) sub_8DCD40
// int sub_8DCD40(uint32_t *a1);
// [0x8dcdc0] (70 bytes) sub_8DCDC0
// int sub_8DCDC0(uint32_t *a1);
// [0x8dce10] (94 bytes) sub_8DCE10
// int sub_8DCE10(uint8_t *a1, int a2);
// [0x8dce70] (108 bytes) sub_8DCE70
// int sub_8DCE70(int a1);
// [0x8dcee0] (182 bytes) sub_8DCEE0
// int sub_8DCEE0(float *a1);
// [0x8dcfa0] (34 bytes) sub_8DCFA0
// int sub_8DCFA0(int a1);
// [0x8dcfd0] (163 bytes) sub_8DCFD0
// float *sub_8DCFD0(int a1, float *a2);
// [0x8dd080] (224 bytes) sub_8DD080
// int sub_8DD080(int a1);
// [0x8dd160] (44 bytes) sub_8DD160
// bool sub_8DD160(int a1);
// [0x8dd190] (34 bytes) sub_8DD190
// int sub_8DD190(int a1);
// [0x8dd1c0] (34 bytes) sub_8DD1C0
// int sub_8DD1C0(int a1);
// [0x8dd1f0] (34 bytes) sub_8DD1F0
// int sub_8DD1F0(int a1);
// [0x8dd220] (34 bytes) sub_8DD220
// int sub_8DD220(int a1);
// [0x8dd250] (58 bytes) sub_8DD250
// int sub_8DD250(int a1);
// [0x8dd290] (176 bytes) sub_8DD290
// glitch::scene::ISceneNode *sub_8DD290(int a1, uint8_t a2);
// [0x8dd340] (7 bytes) sub_8DD340
// int sub_8DD340(int a1);
// [0x8dd350] (51 bytes) sub_8DD350
// int sub_8DD350(uint32_t *a1);
// [0x8dd390] (83 bytes) sub_8DD390
// int sub_8DD390(int a1);
// [0x8dd3f0] (122 bytes) sub_8DD3F0
// int sub_8DD3F0(int a1, uint8_t a2);
// [0x8dd470] (46 bytes) sub_8DD470
// int sub_8DD470(int a1);
// [0x8dd4a0] (46 bytes) sub_8DD4A0
// int sub_8DD4A0(int a1);
// [0x8dd4d0] (145 bytes) sub_8DD4D0
// int sub_8DD4D0(uint8_t *a1);
// [0x8dd570] (173 bytes) sub_8DD570
// long double sub_8DD570(float *a1);
// [0x8dd620] (34 bytes) sub_8DD620
// int sub_8DD620(int a1);
// [0x8dd650] (34 bytes) sub_8DD650
// int sub_8DD650(int a1);
// [0x8dd680] (159 bytes) sub_8DD680
// int sub_8DD680(int a1);
// [0x8dd720] (227 bytes) sub_8DD720
// uint32_t *sub_8DD720(float *a1);
// [0x8dd810] (34 bytes) sub_8DD810
// int sub_8DD810(int a1);
// [0x8dd840] (152 bytes) sub_8DD840
// char sub_8DD840(int a1, int a2);
// [0x8dd8e0] (97 bytes) sub_8DD8E0
// int sub_8DD8E0(int a1, int a2);
// [0x8dd950] (72 bytes) sub_8DD950
// int sub_8DD950(int a1);
// [0x8dd9a0] (71 bytes) sub_8DD9A0
// int sub_8DD9A0(int *a1, char a2);
// [0x8dd9f0] (51 bytes) sub_8DD9F0
// int sub_8DD9F0(uint32_t *a1);
// [0x8dda30] (50 bytes) sub_8DDA30
// int sub_8DDA30(int a1);
// [0x8dda70] (62 bytes) sub_8DDA70
// int sub_8DDA70(int a1);
// [0x8ddab0] (90 bytes) sub_8DDAB0
// void sub_8DDAB0(uint8_t *a1, char a2);
// [0x8ddb10] (74 bytes) sub_8DDB10
// int sub_8DDB10(int a1);
// [0x8ddb60] (135 bytes) sub_8DDB60
// int sub_8DDB60(int a1);
// [0x8ddbf0] (128 bytes) sub_8DDBF0
// int sub_8DDBF0(int a1);
// [0x8ddc70] (184 bytes) sub_8DDC70
// int sub_8DDC70(int *a1);
// [0x8ddd30] (87 bytes) sub_8DDD30
// int sub_8DDD30(int a1);
// [0x8ddd90] (130 bytes) sub_8DDD90
// int sub_8DDD90(int a1, uint8_t a2);
// [0x8dde20] (109 bytes) sub_8DDE20
// int sub_8DDE20(int a1, const char *a2, const char *a3);
// [0x8dde90] (54 bytes) sub_8DDE90
// int sub_8DDE90(int a1);
// [0x8dded0] (85 bytes) sub_8DDED0
// int sub_8DDED0(int a1, int a2);
// [0x8ddf30] (39 bytes) sub_8DDF30
// int sub_8DDF30(int a1);
// [0x8ddf60] (111 bytes) sub_8DDF60
// __m128 sub_8DDF60(int a1, int a2);
// [0x8ddfd0] (276 bytes) sub_8DDFD0
// void sub_8DDFD0(int a1, int a2, int a3);
// [0x8de0f0] (382 bytes) sub_8DE0F0
// size_t sub_8DE0F0(int *a1, uint32_t *a2);
// [0x8de270] (155 bytes) sub_8DE270
// int sub_8DE270(int *a1, int *a2, int a3);
// [0x8de310] (571 bytes) sub_8DE310
// float *sub_8DE310(float *result, float *a2);
// [0x8de550] (666 bytes) sub_8DE550
// int sub_8DE550(void **a1, uint32_t *a2, int a3);
// [0x8de7f0] (506 bytes) sub_8DE7F0
// int sub_8DE7F0(int a1, char *a2, int *a3);
// [0x8de9f0] (215 bytes) sub_8DE9F0
// int *sub_8DE9F0(int *a1, int a2, int a3, int a4, uint32_t *a5);
// [0x8dead0] (206 bytes) sub_8DEAD0
// uint32_t *sub_8DEAD0(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5);
// [0x8deba0] (1244 bytes) sub_8DEBA0
// int sub_8DEBA0(float *a1, float *a2);
// [0x8df080] (104 bytes) sub_8DF080
// int sub_8DF080(uint32_t *a1);
// [0x8df0f0] (71 bytes) sub_8DF0F0
// int sub_8DF0F0(int a1);
// [0x8df140] (7 bytes) sub_8DF140
// int sub_8DF140(int a1);
// [0x8df150] (72 bytes) sub_8DF150
// void sub_8DF150(uint32_t *a1);
// [0x8df1a0] (7 bytes) sub_8DF1A0
// int sub_8DF1A0(int a1);
// [0x8df1b0] (140 bytes) sub_8DF1B0
// int sub_8DF1B0(uint32_t *a1);
// [0x8df240] (316 bytes) sub_8DF240
// int sub_8DF240(int a1, char *a2, int a3, int a4);
// [0x8df380] (119 bytes) sub_8DF380
// int sub_8DF380(uint32_t *a1, int a2);
// [0x8df400] (371 bytes) sub_8DF400
// void sub_8DF400(int a1, uint32_t *a2);
// [0x8df580] (633 bytes) sub_8DF580
// int sub_8DF580(int a1, int a2);
// [0x8df800] (7 bytes) sub_8DF800
// int sub_8DF800(int a1);
// [0x8df810] (138 bytes) sub_8DF810
// int sub_8DF810(uint32_t *a1);
// [0x8df8a0] (420 bytes) sub_8DF8A0
// void sub_8DF8A0(int a1, uint32_t *a2);
// [0x8dfa50] (132 bytes) sub_8DFA50
// int sub_8DFA50(int a1);
// [0x8dfae0] (132 bytes) sub_8DFAE0
// int sub_8DFAE0(int a1);
// [0x8dfb70] (274 bytes) sub_8DFB70
// void sub_8DFB70(long double a1, int a2, int a3);
// [0x8dfc90] (445 bytes) sub_8DFC90
// int sub_8DFC90(uint32_t *a1, int a2, int a3, int a4, int a5);
// [0x8dfe50] (597 bytes) sub_8DFE50
// int sub_8DFE50(long double a1, uint8_t *a2, uint8_t a3, uint8_t a4);
// [0x8e00b0] (7 bytes) sub_8E00B0
// int sub_8E00B0(int a1);
// [0x8e00c0] (148 bytes) sub_8E00C0
// void sub_8E00C0(uint32_t *a1);
// [0x8e0160] (169 bytes) sub_8E0160
// void sub_8E0160(int a1, int a2);
// [0x8e0210] (349 bytes) sub_8E0210
// int sub_8E0210(int a1);
// [0x8e0370] (293 bytes) sub_8E0370
// uint32_t *sub_8E0370(float *a1);
// [0x8e04a0] (223 bytes) sub_8E04A0
// int sub_8E04A0(int a1, int a2);
// [0x8e0580] (140 bytes) sub_8E0580
// int *sub_8E0580(int *a1);
// [0x8e0610] (227 bytes) sub_8E0610
// int sub_8E0610(int a1, int a2);
// [0x8e0700] (530 bytes) sub_8E0700
// long double sub_8E0700(int a1, float *a2);
// [0x8e0920] (462 bytes) sub_8E0920
// long double sub_8E0920(int a1, float *a2);
// [0x8e0af0] (302 bytes) sub_8E0AF0
// int sub_8E0AF0(uint32_t *a1);
// [0x8e0c20] (111 bytes) sub_8E0C20
// bool sub_8E0C20(float *a1);
// [0x8e0c90] (513 bytes) sub_8E0C90
// long double sub_8E0C90(int a1, float *a2);
// [0x8e0ea0] (626 bytes) sub_8E0EA0
// long double sub_8E0EA0(int a1, float *a2);
// [0x8e1120] (7 bytes) sub_8E1120
// int sub_8E1120(int a1);
// [0x8e1130] (146 bytes) sub_8E1130
// void sub_8E1130(uint32_t *a1);
// [0x8e11d0] (383 bytes) sub_8E11D0
// bool sub_8E11D0(int a1);
// [0x8e1350] (206 bytes) sub_8E1350
// int sub_8E1350(int a1);
// [0x8e1420] (20 bytes) sub_8E1420
// uint32_t *sub_8E1420(uint32_t *result, uint32_t *a2);
// [0x8e1440] (733 bytes) sub_8E1440
// char *sub_8E1440(char *result, int a2, unsigned int a3);
// [0x8e1720] (143 bytes) sub_8E1720
// uint32_t *sub_8E1720(uint32_t *result);
// [0x8e17b0] (201 bytes) sub_8E17B0
// int sub_8E17B0(uint32_t *a1);
// [0x8e1880] (233 bytes) sub_8E1880
// int sub_8E1880(int a1);
// [0x8e1970] (254 bytes) sub_8E1970
// int sub_8E1970(int a1, char a2);
// [0x8e1a70] (390 bytes) sub_8E1A70
// int sub_8E1A70(int a1);
// [0x8e1c00] (141 bytes) sub_8E1C00
// int sub_8E1C00(int a1);
// [0x8e1c90] (281 bytes) sub_8E1C90
// char sub_8E1C90(int a1);
// [0x8e1db0] (260 bytes) sub_8E1DB0
// int *sub_8E1DB0(int *a1, int a2, int a3, int a4, int a5);
// [0x8e1ec0] (349 bytes) sub_8E1EC0
// int sub_8E1EC0(int a1, int a2, void **a3);
// [0x8e2020] (938 bytes) sub_8E2020
// int sub_8E2020(uint32_t *a1, const void **a2);
// [0x8e23d0] (216 bytes) sub_8E23D0
// int sub_8E23D0(int a1);
// [0x8e24b0] (137 bytes) sub_8E24B0
// unsigned int sub_8E24B0(uint32_t *a1);
// [0x8e2540] (325 bytes) sub_8E2540
// int sub_8E2540(int a1, uint32_t *a2, int *a3);
// [0x8e2690] (274 bytes) sub_8E2690
// int sub_8E2690(int *a1);
// [0x8e27b0] (242 bytes) sub_8E27B0
// int sub_8E27B0(int a1, uint8_t a2);
// [0x8e28b0] (264 bytes) sub_8E28B0
// void sub_8E28B0(int *a1, char a2);
// [0x8e29c0] (309 bytes) sub_8E29C0
// int sub_8E29C0(int a1);
// [0x8e2b00] (532 bytes) sub_8E2B00
// void sub_8E2B00(uint32_t *a1);
// [0x8e2d20] (485 bytes) sub_8E2D20
// bool sub_8E2D20(int a1);
// [0x8e2f10] (581 bytes) sub_8E2F10
// bool sub_8E2F10(int a1);
// [0x8e3160] (74 bytes) sub_8E3160
// int (**sub_8E3160(uint32_t *a1))(int);
// [0x8e31b0] (82 bytes) sub_8E31B0
// void sub_8E31B0(uint32_t *a1);
// [0x8e3210] (159 bytes) sub_8E3210
// float *sub_8E3210(float *a1, float *a2);
// [0x8e32b0] (553 bytes) sub_8E32B0
// long double sub_8E32B0(int a1, float *a2);
// [0x8e34e0] (576 bytes) sub_8E34E0
// void sub_8E34E0(int a1, float *a2);
// [0x8e3720] (2061 bytes) sub_8E3720
// int sub_8E3720(uint32_t *a1);
// [0x8e3f30] (1474 bytes) sub_8E3F30
// int sub_8E3F30(uint32_t *a1);
// [0x8e4500] (156 bytes) sub_8E4500
// float *sub_8E4500(float *a1, float *a2);
// [0x8e45a0] (568 bytes) sub_8E45A0
// int sub_8E45A0(int a1, int a2);
// [0x8e47e0] (247 bytes) sub_8E47E0
// float *sub_8E47E0(float *a1, int a2);
// [0x8e48e0] (250 bytes) sub_8E48E0
// float *sub_8E48E0(float *a1, int a2);
// [0x8e49e0] (652 bytes) sub_8E49E0
// int *sub_8E49E0(int *a1, uint32_t *a2, int a3, int *a4);
// [0x8e4c70] (849 bytes) sub_8E4C70
// int sub_8E4C70(void **a1, glitch::video::CMaterial **a2, volatile int32_t **a3);
// [0x8e4fd0] (531 bytes) sub_8E4FD0
// uint32_t *sub_8E4FD0(int a1, uint8_t a2, float a3);
// [0x8e51f0] (531 bytes) sub_8E51F0
// uint32_t *sub_8E51F0(int a1, uint8_t a2, float a3);
// [0x8e5410] (323 bytes) sub_8E5410
// int sub_8E5410(int a1, uint32_t *a2, int *a3);
// [0x8e5560] (885 bytes) sub_8E5560
// int sub_8E5560(int a1);
// [0x8e58e0] (281 bytes) sub_8E58E0
// int sub_8E58E0(int a1);
// [0x8e5a00] (196 bytes) sub_8E5A00
// float *sub_8E5A00(float *a1, float *a2);
// [0x8e5ad0] (1361 bytes) sub_8E5AD0
// long double sub_8E5AD0(uint32_t *a1, uint32_t *a2);
// [0x8e6030] (1720 bytes) sub_8E6030
// __m128 sub_8E6030(int a1, int a2);
// [0x8e66f0] (107 bytes) sub_8E66F0
// int sub_8E66F0(int a1);
// [0x8e6760] (488 bytes) sub_8E6760
// int sub_8E6760(uint32_t *a1, int *a2, float *a3);
// [0x8e6950] (450 bytes) sub_8E6950
// void sub_8E6950(uint32_t *a1);
// [0x8e6b20] (593 bytes) sub_8E6B20
// int sub_8E6B20(uint32_t *a1, char a2, int a3, char a4);
// [0x8e6d80] (1247 bytes) sub_8E6D80
// int sub_8E6D80(uint32_t *a1, char a2);
// [0x8e7260] (209 bytes) sub_8E7260
// int sub_8E7260(int a1, int a2, char a3);
// [0x8e7340] (217 bytes) sub_8E7340
// int sub_8E7340(int a1, int a2);
// [0x8e7420] (278 bytes) sub_8E7420
// bool sub_8E7420();
// [0x8e7540] (617 bytes) sub_8E7540
// int *sub_8E7540(uint32_t *a1, uint8_t a2, uint8_t a3);
// [0x8e77b0] (310 bytes) sub_8E77B0
// int sub_8E77B0(int a1, char a2);
// [0x8e78f0] (361 bytes) sub_8E78F0
// void sub_8E78F0(int a1, char a2);
// [0x8e7a60] (1610 bytes) sub_8E7A60
// int sub_8E7A60(uint32_t *a1, uint32_t *a2);
// [0x8e80b0] (1064 bytes) sub_8E80B0
// int sub_8E80B0(uint32_t *a1);
// [0x8e84e0] (315 bytes) sub_8E84E0
// int sub_8E84E0(int a1);
// [0x8e8620] (129 bytes) sub_8E8620
// int sub_8E8620(int a1, float *a2);
// [0x8e86b0] (86 bytes) sub_8E86B0
// int sub_8E86B0();
// [0x8e8710] (86 bytes) sub_8E8710
// int sub_8E8710();
// [0x8e8770] (97 bytes) sub_8E8770
// int sub_8E8770(uint32_t *a1);
// [0x8e87e0] (99 bytes) sub_8E87E0
// void sub_8E87E0();
// [0x8e8850] (94 bytes) sub_8E8850
// void sub_8E8850(volatile int32_t **a1);
// [0x8e88b0] (100 bytes) sub_8E88B0
// int (**sub_8E88B0(int a1))(int);
// [0x8e8920] (108 bytes) sub_8E8920
// void sub_8E8920(uint32_t *a1);
// [0x8e8990] (724 bytes) sub_8E8990
// int sub_8E8990(uint32_t *a1, int a2);
// [0x8e8c70] (17 bytes) sub_8E8C70
// int sub_8E8C70(int a1, int a2);
// [0x8e8c90] (283 bytes) sub_8E8C90
// int sub_8E8C90(int a1, int a2, int a3);
// [0x8e8db0] (118 bytes) sub_8E8DB0
// uint32_t *sub_8E8DB0(uint32_t *a1, int a2);
// [0x8e8e30] (358 bytes) sub_8E8E30
// int sub_8E8E30(int a1);
// [0x8e8fa0] (559 bytes) sub_8E8FA0
// int sub_8E8FA0(int a1);
// [0x8e91d0] (355 bytes) sub_8E91D0
// int sub_8E91D0(int a1);
// [0x8e9360] (340 bytes) sub_8E9360
// int sub_8E9360(int a1, int a2, char a3);
// [0x8e9510] (245 bytes) sub_8E9510
// int sub_8E9510(uint32_t *a1, uint8_t a2);
// [0x8e9610] (26 bytes) sub_8E9610
// int sub_8E9610();
// [0x8e9630] (3386 bytes) sub_8E9630
// int sub_8E9630(int a1, int a2, int a3, int a4);
// [0x8ea370] (112 bytes) sub_8EA370
// int sub_8EA370(char *s2);
// [0x8ea3e0] (182 bytes) sub_8EA3E0
// int sub_8EA3E0(uint32_t *a1);
// [0x8ea4a0] (11 bytes) sub_8EA4A0
// int sub_8EA4A0(int a1);
// [0x8ea4d0] (649 bytes) sub_8EA4D0
// void sub_8EA4D0(char **a1);
// [0x8ea790] (62 bytes) sub_8EA790
// int sub_8EA790(uint32_t *a1);
// [0x8ea7d0] (50 bytes) sub_8EA7D0
// void sub_8EA7D0(int a1, int a2);
// [0x8ea810] (2290 bytes) sub_8EA810
// void sub_8EA810(uint32_t *a1);
// [0x8eb110] (136 bytes) sub_8EB110
// void sub_8EB110(int a1, int a2);
// [0x8eb1a0] (136 bytes) sub_8EB1A0
// void sub_8EB1A0(int a1, int a2);
// [0x8eb230] (157 bytes) sub_8EB230
// int sub_8EB230(uint32_t *a1, int a2);
// [0x8eb330] (162 bytes) sub_8EB330
// uint32_t *sub_8EB330(int a1, int a2);
// [0x8eb3e0] (162 bytes) sub_8EB3E0
// uint32_t *sub_8EB3E0(int a1, int a2);
// [0x8eb490] (100 bytes) sub_8EB490
// bool sub_8EB490(int a1, int a2);
// [0x8eb500] (133 bytes) sub_8EB500
// void sub_8EB500(uint32_t *a1);
// [0x8eb590] (14 bytes) sub_8EB590
// int sub_8EB590(int a1);
// [0x8eb5a0] (16 bytes) sub_8EB5A0
// bool sub_8EB5A0(int a1);
// [0x8eb5b0] (15 bytes) sub_8EB5B0
// int sub_8EB5B0(int a1);
// [0x8eb5f8] (1 bytes) nullsub_354
// void nullsub_354();
// [0x8eb600] (93 bytes) sub_8EB600
// int sub_8EB600(int a1, int a2, int a3);
// [0x8eb660] (293 bytes) sub_8EB660
// int64_t sub_8EB660(int a1, uint32_t *a2);
// [0x8eb790] (88 bytes) sub_8EB790
// int64_t sub_8EB790(int a1);
// [0x8eb7f0] (88 bytes) sub_8EB7F0
// int64_t sub_8EB7F0(int a1);
// [0x8eb850] (110 bytes) sub_8EB850
// long double sub_8EB850(int a1);
// [0x8eb8c0] (119 bytes) sub_8EB8C0
// bool sub_8EB8C0(int a1);
// [0x8eb940] (325 bytes) sub_8EB940
// int sub_8EB940(int a1, int a2, uint32_t *a3);
// [0x8eba90] (370 bytes) sub_8EBA90
// unsigned int sub_8EBA90(int a1, int a2);
// [0x8ebc10] (53 bytes) sub_8EBC10
// void sub_8EBC10();
// [0x8ebc50] (37 bytes) sub_8EBC50
// uint32_t *sub_8EBC50(uint32_t *a1, uint32_t *a2);
// [0x8ebc80] (351 bytes) sub_8EBC80
// int sub_8EBC80(int a1, int a2);
// [0x8ebde0] (54 bytes) sub_8EBDE0
// int sub_8EBDE0(int a1, char a2);
// [0x8ebe20] (162 bytes) sub_8EBE20
// int sub_8EBE20(int a1, glf **a2);
// [0x8ebed0] (122 bytes) sub_8EBED0
// int sub_8EBED0(int a1, int a2, int a3, uint8_t *a4);
// [0x8ebf50] (219 bytes) sub_8EBF50
// int sub_8EBF50(int a1, int a2);
// [0x8ec030] (210 bytes) sub_8EC030
// int sub_8EC030(int a1);
// [0x8ec110] (161 bytes) sub_8EC110
// void sub_8EC110(int a1);
// [0x8ec1c0] (209 bytes) sub_8EC1C0
// int sub_8EC1C0(int a1, int a2, int a3);
// [0x8ec2a0] (131 bytes) sub_8EC2A0
// int sub_8EC2A0(int a1, int a2, int a3);
// [0x8ec330] (43 bytes) sub_8EC330
// int sub_8EC330(int a1, uint8_t a2);
// [0x8ec360] (420 bytes) sub_8EC360
// int sub_8EC360(int a1, char a2);
// [0x8ec520] (158 bytes) sub_8EC520
// int sub_8EC520(int a1);
// [0x8ec5c0] (444 bytes) sub_8EC5C0
// unsigned int sub_8EC5C0(int a1);
// [0x8ec780] (91 bytes) sub_8EC780
// int sub_8EC780(int a1, int a2);
// [0x8ec7e0] (253 bytes) sub_8EC7E0
// int sub_8EC7E0(int a1, int a2);
// [0x8ec8e0] (26 bytes) sub_8EC8E0
// uint32_t *sub_8EC8E0(uint32_t *a1, uint32_t *a2);
// [0x8ec900] (182 bytes) sub_8EC900
// int sub_8EC900(int a1, float a2, float a3, double a4);
// [0x8ec9c0] (26 bytes) sub_8EC9C0
// uint32_t *sub_8EC9C0(uint32_t *a1, uint32_t *a2);
// [0x8ec9e0] (26 bytes) sub_8EC9E0
// uint32_t *sub_8EC9E0(uint32_t *a1, uint32_t *a2);
// [0x8eca00] (12 bytes) sub_8ECA00
// int sub_8ECA00(int a1);
// [0x8eca10] (30 bytes) sub_8ECA10
// int sub_8ECA10(int a1, int a2, int a3, double a4);
// [0x8eca30] (12 bytes) sub_8ECA30
// int sub_8ECA30(int a1);
// [0x8eca40] (13 bytes) sub_8ECA40
// uint32_t *sub_8ECA40(uint32_t *a1, int a2);
// [0x8eca50] (60 bytes) sub_8ECA50
// void sub_8ECA50(void **a1);
// [0x8eca90] (69 bytes) sub_8ECA90
// int sub_8ECA90(int *a1, int a2);
// [0x8ecae0] (72 bytes) sub_8ECAE0
// uint8_t *sub_8ECAE0(int a1);
// [0x8ecb30] (12 bytes) sub_8ECB30
// bool sub_8ECB30(uint32_t *a1);
// [0x8ecb40] (11 bytes) sub_8ECB40
// int sub_8ECB40(int a1);
// [0x8ecb50] (147 bytes) sub_8ECB50
// int sub_8ECB50(int a1);
// [0x8ecbf0] (59 bytes) sub_8ECBF0
// int sub_8ECBF0(uint32_t *a1);
// [0x8ecc30] (35 bytes) sub_8ECC30
// int sub_8ECC30(int a1, int a2);
// [0x8ecc60] (652 bytes) sub_8ECC60
// int sub_8ECC60(uint32_t *a1, int a2, int a3, int a4);
// [0x8ecef0] (181 bytes) sub_8ECEF0
// int sub_8ECEF0(uint32_t *a1, int a2, int a3, int a4);
// [0x8ecfb0] (200 bytes) sub_8ECFB0
// int sub_8ECFB0(uint32_t *a1, int a2, int a3, int a4);
// [0x8ed080] (207 bytes) sub_8ED080
// int sub_8ED080(int a1, char a2);
// [0x8ed150] (125 bytes) sub_8ED150
// int sub_8ED150(int a1);
// [0x8ed1d0] (77 bytes) sub_8ED1D0
// int sub_8ED1D0(int a1, int a2);
// [0x8ed220] (125 bytes) sub_8ED220
// int sub_8ED220(int a1);
// [0x8ed2a0] (40 bytes) sub_8ED2A0
// bool sub_8ED2A0(int a1, int a2);
// [0x8ed2d0] (16 bytes) sub_8ED2D0
// int sub_8ED2D0(int a1);
// [0x8ed2e0] (13 bytes) sub_8ED2E0
// bool sub_8ED2E0(int a1);
// [0x8ed320] (68 bytes) sub_8ED320
// bool sub_8ED320(int a1, int a2);
// [0x8ed370] (199 bytes) sub_8ED370
// int sub_8ED370(int a1, unsigned int a2, int a3, int a4);
// [0x8ed440] (199 bytes) sub_8ED440
// void sub_8ED440(int a1, int a2, int a3);
// [0x8ed510] (83 bytes) sub_8ED510
// unsigned int sub_8ED510(int a1, int a2, int a3);
// [0x8ed570] (60 bytes) sub_8ED570
// unsigned int sub_8ED570(int a1, unsigned int a2, int a3);
// [0x8ed5b0] (54 bytes) sub_8ED5B0
// int sub_8ED5B0(int a1, unsigned int a2);
// [0x8ed5f0] (121 bytes) sub_8ED5F0
// int sub_8ED5F0(int a1, int a2);
// [0x8ed670] (109 bytes) sub_8ED670
// int sub_8ED670(int a1, int a2);
// [0x8ed6e0] (1209 bytes) sub_8ED6E0
// int sub_8ED6E0(uint32_t *a1, char a2);
// [0x8edbb0] (84 bytes) sub_8EDBB0
// int sub_8EDBB0(int a1);
// [0x8edc10] (30 bytes) sub_8EDC10
// int sub_8EDC10(int a1, unsigned int a2, char a3);
// [0x8edc30] (29 bytes) sub_8EDC30
// int sub_8EDC30(int a1, unsigned int a2);
// [0x8edc50] (124 bytes) sub_8EDC50
// int sub_8EDC50(int a1);
// [0x8edcd8] (1 bytes) nullsub_355
// void nullsub_355();
// [0x8edcf0] (572 bytes) sub_8EDCF0
// int sub_8EDCF0(int a1, int a2);
// [0x8edf30] (124 bytes) sub_8EDF30
// void sub_8EDF30(int a1);
// [0x8edfb0] (353 bytes) sub_8EDFB0
// int sub_8EDFB0(uint8_t *a1);
// [0x8ee120] (1998 bytes) sub_8EE120
// int sub_8EE120(int a1, char a2, float a3, char a4);
// [0x8ee8f0] (533 bytes) sub_8EE8F0
// int sub_8EE8F0(int a1, char a2);
// [0x8eeb18] (1 bytes) nullsub_356
// void nullsub_356();
// [0x8eeb20] (1213 bytes) sub_8EEB20
// int sub_8EEB20(int *a1);
// [0x8eefe0] (189 bytes) sub_8EEFE0
// void sub_8EEFE0(int a1);
// [0x8ef0a0] (171 bytes) sub_8EF0A0
// void sub_8EF0A0(uint8_t *a1);
// [0x8ef150] (2154 bytes) sub_8EF150
// int sub_8EF150(int *a1);
// [0x8ef9c0] (521 bytes) sub_8EF9C0
// int sub_8EF9C0(int a1);
// [0x8efbd0] (53 bytes) sub_8EFBD0
// int sub_8EFBD0(int a1);
// [0x8efc10] (32 bytes) sub_8EFC10
// int sub_8EFC10(int a1, int a2);
// [0x8efc30] (259 bytes) sub_8EFC30
// int sub_8EFC30(int a1, int a2);
// [0x8efd40] (95 bytes) sub_8EFD40
// int sub_8EFD40(int a1, int a2, uint32_t *a3);
// [0x8efda0] (41 bytes) sub_8EFDA0
// bool sub_8EFDA0(int a1, int a2);
// [0x8efdd0] (220 bytes) sub_8EFDD0
// int *sub_8EFDD0(int a1, int a2);
// [0x8efeb0] (220 bytes) sub_8EFEB0
// int *sub_8EFEB0(int a1, int a2);
// [0x8eff90] (280 bytes) sub_8EFF90
// unsigned int sub_8EFF90(int a1, int a2, int a3);
// [0x8f00b0] (1250 bytes) sub_8F00B0
// float *sub_8F00B0(float *a1, int a2, float *a3, float *a4, unsigned int *a5, uint32_t *a6, char a7);
// [0x8f05a0] (158 bytes) sub_8F05A0
// int sub_8F05A0(int a1, float *a2);
// [0x8f0640] (50 bytes) sub_8F0640
// int sub_8F0640();
// [0x8f0680] (22 bytes) sub_8F0680
// int sub_8F0680();
// [0x8f06a0] (278 bytes) sub_8F06A0
// int sub_8F06A0(int a1);
// [0x8f07c0] (1825 bytes) sub_8F07C0
// int sub_8F07C0(int a1);
// [0x8f0ef0] (205 bytes) sub_8F0EF0
// int sub_8F0EF0(int a1, int a2);
// [0x8f0fc0] (305 bytes) sub_8F0FC0
// int sub_8F0FC0(int a1, uint8_t a2);
// [0x8f1100] (1191 bytes) sub_8F1100
// int sub_8F1100(int a1, int a2);
// [0x8f15b0] (479 bytes) sub_8F15B0
// int sub_8F15B0(int a1, int a2);
// [0x8f1790] (503 bytes) sub_8F1790
// void sub_8F1790(int a1, uint8_t *a2);
// [0x8f1990] (624 bytes) sub_8F1990
// int sub_8F1990(int a1, int a2);
// [0x8f1c00] (660 bytes) sub_8F1C00
// int sub_8F1C00(int a1, int a2, float a3);
// [0x8f1ea0] (15 bytes) sub_8F1EA0
// int sub_8F1EA0(int a1);
// [0x8f1eb0] (44 bytes) sub_8F1EB0
// bool sub_8F1EB0(int a1, int a2);
// [0x8f1f00] (135 bytes) sub_8F1F00
// int sub_8F1F00(uint32_t *a1, int a2);
// [0x8f1f90] (403 bytes) sub_8F1F90
// void sub_8F1F90(int a1, int a2, int a3, char a4);
// [0x8f2130] (336 bytes) sub_8F2130
// void sub_8F2130(int a1);
// [0x8f2280] (423 bytes) sub_8F2280
// int sub_8F2280();
// [0x8f2440] (667 bytes) sub_8F2440
// int sub_8F2440(int a1, int a2);
// [0x8f2700] (973 bytes) sub_8F2700
// void sub_8F2700(int a1, int a2);
// [0x8f2ad0] (389 bytes) sub_8F2AD0
// int sub_8F2AD0(int a1, char a2);
// [0x8f2c60] (416 bytes) sub_8F2C60
// int sub_8F2C60(int a1, int a2);
// [0x8f2e00] (416 bytes) sub_8F2E00
// int sub_8F2E00(int a1, int a2);
// [0x8f2fe0] (273 bytes) sub_8F2FE0
// int sub_8F2FE0(uint32_t *a1, int a2);
// [0x8f3100] (194 bytes) sub_8F3100
// unsigned int sub_8F3100(int a1, float a2);
// [0x8f31d0] (38 bytes) sub_8F31D0
// int sub_8F31D0(int a1, int a2);
// [0x8f3200] (389 bytes) sub_8F3200
// size_t sub_8F3200(int *a1, int a2);
// [0x8f3390] (19 bytes) sub_8F3390
// int sub_8F3390(int a1);
// [0x8f33d0] (72 bytes) sub_8F33D0
// int sub_8F33D0(int a1);
// [0x8f3420] (162 bytes) sub_8F3420
// int sub_8F3420(uint32_t *a1);
// [0x8f34d0] (162 bytes) sub_8F34D0
// int sub_8F34D0(uint32_t *a1);
// [0x8f3580] (161 bytes) sub_8F3580
// int sub_8F3580(int a1);
// [0x8f3630] (477 bytes) sub_8F3630
// int sub_8F3630(uint32_t *a1);
// [0x8f3810] (155 bytes) sub_8F3810
// int sub_8F3810(int a1);
// [0x8f38b0] (160 bytes) sub_8F38B0
// int sub_8F38B0(uint32_t *a1);
// [0x8f3950] (160 bytes) sub_8F3950
// int sub_8F3950(uint32_t *a1);
// [0x8f39f0] (356 bytes) sub_8F39F0
// int sub_8F39F0(uint32_t *a1);
// [0x8f3b80] (153 bytes) sub_8F3B80
// int sub_8F3B80(uint32_t *a1, uint8_t a2);
// [0x8f3c20] (190 bytes) sub_8F3C20
// void sub_8F3C20(int a1, int a2, int a3);
// [0x8f3ce0] (111 bytes) sub_8F3CE0
// uint32_t *sub_8F3CE0(int a1);
// [0x8f3d50] (43 bytes) sub_8F3D50
// int sub_8F3D50(int a1);
// [0x8f3d80] (61 bytes) sub_8F3D80
// long double sub_8F3D80(int a1, int a2, int a3, float a4);
// [0x8f3dc0] (17 bytes) sub_8F3DC0
// int sub_8F3DC0(int a1, int a2);
// [0x8f3de0] (837 bytes) sub_8F3DE0
// int sub_8F3DE0(int a1, int a2);
// [0x8f4130] (349 bytes) sub_8F4130
// int sub_8F4130(int a1);
// [0x8f42e0] (323 bytes) sub_8F42E0
// int sub_8F42E0(int a1, char a2);
// [0x8f4430] (56 bytes) sub_8F4430
// int sub_8F4430(int a1);
// [0x8f4470] (181 bytes) sub_8F4470
// int sub_8F4470(uint32_t *a1, int a2);
// [0x8f4530] (1115 bytes) sub_8F4530
// int *sub_8F4530(int a1);
// [0x8f4990] (433 bytes) sub_8F4990
// unsigned int sub_8F4990(int a1, int a2);
// [0x8f4b50] (182 bytes) sub_8F4B50
// int sub_8F4B50(int a1);
// [0x8f4c10] (294 bytes) sub_8F4C10
// void sub_8F4C10(uint8_t *a1);
// [0x8f4d50] (17 bytes) sub_8F4D50
// int sub_8F4D50(int a1, char a2);
// [0x8f4d70] (185 bytes) sub_8F4D70
// uint8_t *sub_8F4D70(uint32_t *a1, int a2, char *a3, uint8_t *a4);
// [0x8f4e30] (16 bytes) sub_8F4E30
// bool sub_8F4E30(int a1);
// [0x8f4e40] (15 bytes) sub_8F4E40
// int sub_8F4E40(int a1);
// [0x8f4e50] (155 bytes) sub_8F4E50
// int sub_8F4E50(int a1, char *a2, const char *a3);
// [0x8f4ef0] (280 bytes) sub_8F4EF0
// int sub_8F4EF0(int *a1);
// [0x8f5010] (87 bytes) sub_8F5010
// int sub_8F5010();
// [0x8f5070] (1243 bytes) sub_8F5070
// glitch::collada::CModularSkinnedMesh *sub_8F5070(int a1);
// [0x8f5550] (1613 bytes) sub_8F5550
// int sub_8F5550(uint32_t *a1, char a2);
// [0x8f5ba0] (15 bytes) sub_8F5BA0
// int sub_8F5BA0(int a1);
// [0x8f5bc0] (99 bytes) sub_8F5BC0
// int sub_8F5BC0(int a1);
// [0x8f5c30] (81 bytes) sub_8F5C30
// int sub_8F5C30(uint8_t *a1);
// [0x8f5c90] (52 bytes) sub_8F5C90
// int sub_8F5C90(int a1);
// [0x8f5cd0] (36 bytes) sub_8F5CD0
// uint32_t *sub_8F5CD0(uint32_t *a1, int a2);
// [0x8f5d00] (793 bytes) sub_8F5D00
// int sub_8F5D00(int a1);
// [0x8f6020] (172 bytes) sub_8F6020
// void sub_8F6020(int a1, char a2, char a3);
// [0x8f60d0] (172 bytes) sub_8F60D0
// void sub_8F60D0(int a1, char a2, char a3);
// [0x8f6180] (57 bytes) sub_8F6180
// int sub_8F6180(int a1);
// [0x8f61c0] (16 bytes) sub_8F61C0
// int sub_8F61C0(int a1);
// [0x8f61d0] (17 bytes) sub_8F61D0
// int sub_8F61D0(int a1, char a2);
// [0x8f61f0] (120 bytes) sub_8F61F0
// int sub_8F61F0(uint32_t *a1, int a2);
// [0x8f6270] (14 bytes) sub_8F6270
// int sub_8F6270(int a1);
// [0x8f6280] (197 bytes) sub_8F6280
// int *sub_8F6280();
// [0x8f6350] (82 bytes) sub_8F6350
// glitch::collada::CAnimationPackage *sub_8F6350(glitch::collada::CAnimationPackage *a1, int a2);
// [0x8f63b0] (98 bytes) sub_8F63B0
// int sub_8F63B0(int a1);
// [0x8f6420] (492 bytes) sub_8F6420
// int *sub_8F6420(int a1, const char *a2);
// [0x8f6610] (556 bytes) sub_8F6610
// volatile int32_t **sub_8F6610();
// [0x8f6840] (1370 bytes) sub_8F6840
// int sub_8F6840(int a1, int a2, int a3);
// [0x8f6da8] (1 bytes) nullsub_357
// void nullsub_357();
// [0x8f6db0] (402 bytes) sub_8F6DB0
// void sub_8F6DB0();
// [0x8f6f50] (81 bytes) sub_8F6F50
// int sub_8F6F50(int a1);
// [0x8f6fb0] (123 bytes) sub_8F6FB0
// int sub_8F6FB0(int a1, int a2);
// [0x8f7060] (66 bytes) sub_8F7060
// int sub_8F7060(int a1, int a2);
// [0x8f70b0] (79 bytes) sub_8F70B0
// glitch::collada::ISceneNodeAnimator *sub_8F70B0(int a1);
// [0x8f7100] (79 bytes) sub_8F7100
// glitch::collada::ISceneNodeAnimator *sub_8F7100(int a1);
// [0x8f7150] (79 bytes) sub_8F7150
// int sub_8F7150(int a1);
// [0x8f71a0] (49 bytes) sub_8F71A0
// int sub_8F71A0(int a1);
// [0x8f71e0] (133 bytes) sub_8F71E0
// int sub_8F71E0(int a1, const char **a2);
// [0x8f7270] (319 bytes) sub_8F7270
// void *sub_8F7270(int a1, const char **a2);
// [0x8f73c0] (38 bytes) sub_8F73C0
// int sub_8F73C0(int a1, int a2);
// [0x8f73f0] (51 bytes) sub_8F73F0
// int sub_8F73F0(int a1);
// [0x8f7430] (36 bytes) sub_8F7430
// bool sub_8F7430(int a1);
// [0x8f7460] (153 bytes) sub_8F7460
// int sub_8F7460(int a1);
// [0x8f7500] (209 bytes) sub_8F7500
// uint32_t *sub_8F7500(uint32_t *a1, int a2);
// [0x8f75e0] (29 bytes) sub_8F75E0
// int sub_8F75E0(int a1, int a2);
// [0x8f7600] (88 bytes) sub_8F7600
// bool sub_8F7600(uint32_t *a1, int a2);
// [0x8f7660] (63 bytes) sub_8F7660
// void sub_8F7660(uint32_t *a1, int a2);
// [0x8f76a0] (165 bytes) sub_8F76A0
// void sub_8F76A0(int a1, uint8_t a2, uint8_t a3);
// [0x8f7750] (27 bytes) sub_8F7750
// int sub_8F7750(uint8_t *a1);
// [0x8f7790] (79 bytes) sub_8F7790
// int sub_8F7790(int a1, int a2);
// [0x8f77e0] (13 bytes) sub_8F77E0
// int sub_8F77E0(int a1);
// [0x8f7800] (12 bytes) sub_8F7800
// int sub_8F7800(int a1);
// [0x8f7810] (12 bytes) sub_8F7810
// int sub_8F7810(int a1);
// [0x8f7820] (12 bytes) sub_8F7820
// int sub_8F7820(int a1);
// [0x8f7830] (38 bytes) sub_8F7830
// bool sub_8F7830(int a1);
// [0x8f7860] (2280 bytes) sub_8F7860
// int sub_8F7860(int a1, int a2, char a3);
// [0x8f8150] (35 bytes) sub_8F8150
// bool sub_8F8150(int *a1);
// [0x8f8180] (50 bytes) sub_8F8180
// const char *sub_8F8180(int *a1);
// [0x8f81d0] (12 bytes) sub_8F81D0
// int sub_8F81D0(int a1);
// [0x8f81e0] (36 bytes) sub_8F81E0
// bool sub_8F81E0(int a1);
// [0x8f8230] (15 bytes) sub_8F8230
// int sub_8F8230(int a1);
// [0x8f8240] (125 bytes) sub_8F8240
// bool sub_8F8240(int a1, int a2);
// [0x8f82c0] (15 bytes) sub_8F82C0
// int sub_8F82C0(int a1);
// [0x8f82d0] (2047 bytes) sub_8F82D0
// int sub_8F82D0(int a1, int a2);
// [0x8f8ad0] (201 bytes) sub_8F8AD0
// int sub_8F8AD0(int a1, int a2);
// [0x8f8be0] (213 bytes) sub_8F8BE0
// int sub_8F8BE0(int a1, int a2);
// [0x8f8e90] (1910 bytes) sub_8F8E90
// int sub_8F8E90(int a1, int a2);
// [0x8f9610] (48 bytes) sub_8F9610
// bool sub_8F9610(int a1);
// [0x8f96c0] (36 bytes) sub_8F96C0
// int sub_8F96C0(int a1);
// [0x8f96f0] (171 bytes) sub_8F96F0
// int sub_8F96F0(int a1, int a2);
// [0x8f97a0] (58 bytes) sub_8F97A0
// bool sub_8F97A0(int a1);
// [0x8f9a50] (103 bytes) sub_8F9A50
// bool sub_8F9A50(int a1);
// [0x8f9ac0] (1131 bytes) sub_8F9AC0
// char sub_8F9AC0(int a1, int a2);
// [0x8f9fa0] (166 bytes) sub_8F9FA0
// void sub_8F9FA0(char *a1, std::vector<int> *a2);
// [0x8fa050] (147 bytes) sub_8FA050
// unsigned int sub_8FA050(int a1, Json::Value *a2);
// [0x8fa0f0] (161 bytes) sub_8FA0F0
// unsigned int sub_8FA0F0(int a1, Json::Value *a2);
// [0x8fa1a0] (110 bytes) sub_8FA1A0
// int sub_8FA1A0(std::vector<int> *a1);
// [0x8fa210] (96 bytes) sub_8FA210
// int sub_8FA210();
// [0x8fa270] (134 bytes) sub_8FA270
// int sub_8FA270(std::vector<int> *a1);
// [0x8fa300] (324 bytes) sub_8FA300
// void sub_8FA300(int a1);
// [0x8fa450] (1175 bytes) sub_8FA450
// void sub_8FA450(int *a1);
// [0x8fa8f0] (144 bytes) sub_8FA8F0
// void sub_8FA8F0(int *a1);
// [0x8fa980] (196 bytes) sub_8FA980
// int sub_8FA980();
// [0x8faa50] (180 bytes) sub_8FAA50
// int sub_8FAA50(int a1, float *a2);
// [0x8fab10] (779 bytes) sub_8FAB10
// void sub_8FAB10(int a1, uint32_t *a2);
// [0x8fae20] (1831 bytes) sub_8FAE20
// void sub_8FAE20(uint32_t *a1);
// [0x8fb550] (2103 bytes) sub_8FB550
// int sub_8FB550(int a1);
// [0x8fbd90] (1261 bytes) sub_8FBD90
// int sub_8FBD90(int a1, float a2, glitch::scene::ISceneNode *a3, glitch::scene::ISceneNode *a4);
// [0x8fc280] (1871 bytes) sub_8FC280
// float *sub_8FC280(int a1, int a2);
// [0x8fc9d0] (1863 bytes) sub_8FC9D0
// float *sub_8FC9D0(int a1, int a2);
// [0x8fd120] (2656 bytes) sub_8FD120
// int sub_8FD120(int a1, int a2);
// [0x8fdb80] (2517 bytes) sub_8FDB80
// float *sub_8FDB80(int a1, int a2);
// [0x8fe560] (4378 bytes) sub_8FE560
// int sub_8FE560(float *a1);
// [0x8ff680] (488 bytes) sub_8FF680
// void sub_8FF680(int a1, int a2);
// [0x8ff870] (1373 bytes) sub_8FF870
// int sub_8FF870( uint32_t *a1, int a2, uint32_t *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, float a35, float a36, float a37, float a38, float a39, float a40, float a41, float a42, float a43, __int128 a44);
// [0x8ffeb0] (400 bytes) sub_8FFEB0
// int sub_8FFEB0(int a1);
// [0x900040] (973 bytes) sub_900040
// char *sub_900040(glf::Thread *a1, uint8_t a2);
// [0x900410] (594 bytes) sub_900410
// uint32_t *sub_900410(int a1);
// [0x900670] (435 bytes) sub_900670
// 0x900670 sub_900670
// [0x900830] (802 bytes) sub_900830
// uint32_t *sub_900830(int a1, char a2, int a3);
// [0x900b60] (1344 bytes) sub_900B60
// char *sub_900B60(int a1, uint8_t a2);
// [0x9010a0] (1120 bytes) sub_9010A0
// 0x9010a0 sub_9010A0
// [0x901500] (797 bytes) sub_901500
// char *sub_901500(char *a1, uint8_t a2);
// [0x901820] (229 bytes) sub_901820
// int (**sub_901820(int a1))(int);
// [0x901910] (1931 bytes) sub_901910
// int sub_901910(uint32_t *a1);
// [0x9020a0] (1156 bytes) sub_9020A0
// char *sub_9020A0(glf::Thread *a1, uint8_t a2);
// [0x902530] (71 bytes) sub_902530
// int *sub_902530(int *result);
// [0x902580] (369 bytes) sub_902580
// 0x902580 sub_902580
// [0x902700] (138 bytes) sub_902700
// int sub_902700(uint32_t *a1);
// [0x902790] (138 bytes) sub_902790
// int sub_902790(int a1);
// [0x902820] (331 bytes) sub_902820
// int sub_902820(uint32_t *a1, char a2);
// [0x902970] (456 bytes) sub_902970
// 0x902970 sub_902970
// [0x902b40] (341 bytes) sub_902B40
// uint32_t *sub_902B40(int a1, char a2);
// [0x902ca0] (740 bytes) sub_902CA0
// int sub_902CA0(int a1);
// [0x902f90] (2563 bytes) sub_902F90
// uint32_t *sub_902F90(uint32_t *a1);
// [0x9039a0] (2595 bytes) sub_9039A0
// uint32_t *sub_9039A0(int a1);
// [0x9043d0] (75 bytes) sub_9043D0
// int sub_9043D0();
// [0x904420] (147 bytes) sub_904420
// void sub_904420();
// [0x9044c0] (139 bytes) sub_9044C0
// void sub_9044C0();
// [0x904550] (155 bytes) sub_904550
// int sub_904550();
// [0x9045f0] (1093 bytes) sub_9045F0
// char sub_9045F0(int a1, float a2, float a3);
// [0x904a40] (3359 bytes) sub_904A40
// void sub_904A40(int a1);
// [0x905760] (726 bytes) sub_905760
// uint32_t *sub_905760(glitch::scene::ISceneNode *a1, glitch::video::CVertexStreams *a2);
// [0x905a40] (718 bytes) sub_905A40
// uint32_t *sub_905A40(glitch::scene::ISceneNode *a1, uint32_t *a2, int a3);
// [0x905d10] (237 bytes) sub_905D10
// void sub_905D10(uint32_t **a1);
// [0x905e00] (184 bytes) sub_905E00
// char sub_905E00(int a1, char a2);
// [0x905ec0] (60 bytes) sub_905EC0
// bool sub_905EC0(int a1);
// [0x905f00] (148 bytes) sub_905F00
// int sub_905F00(long double a1);
// [0x905fa0] (242 bytes) sub_905FA0
// int sub_905FA0();
// [0x9060a0] (115 bytes) sub_9060A0
// void sub_9060A0(int a1, int a2);
// [0x906120] (97 bytes) sub_906120
// int sub_906120(int a1);
// [0x906190] (64 bytes) sub_906190
// int sub_906190(int a1, int a2);
// [0x9061d0] (51 bytes) sub_9061D0
// void sub_9061D0(int a1, int a2);
// [0x906210] (51 bytes) sub_906210
// void sub_906210(int a1, int a2);
// [0x906250] (84 bytes) sub_906250
// int sub_906250(int a1, int a2);
// [0x9062b0] (202 bytes) sub_9062B0
// char sub_9062B0(int *a1, int a2);
// [0x906380] (131 bytes) sub_906380
// bool sub_906380(int a1, int a2);
// [0x906410] (194 bytes) sub_906410
// void sub_906410();
// [0x9064e0] (161 bytes) sub_9064E0
// int sub_9064E0(int a1, int a2);
// [0x906590] (289 bytes) sub_906590
// char sub_906590(int a1, char a2);
// [0x9066c0] (418 bytes) sub_9066C0
// char sub_9066C0(int a1, int a2);
// [0x906870] (436 bytes) sub_906870
// char sub_906870(uint32_t *a1, int a2);
// [0x906a30] (388 bytes) sub_906A30
// char sub_906A30(uint32_t *a1, int a2);
// [0x906bc0] (469 bytes) sub_906BC0
// int *sub_906BC0(uint32_t *a1);
// [0x906da0] (704 bytes) sub_906DA0
// char sub_906DA0(int a1, int a2);
// [0x907060] (369 bytes) sub_907060
// int sub_907060(uint32_t *a1, int a2);
// [0x9071e0] (301 bytes) sub_9071E0
// char sub_9071E0(int a1);
// [0x907310] (161 bytes) sub_907310
// void sub_907310(int a1);
// [0x9073c0] (2298 bytes) sub_9073C0
// 0x9073c0 sub_9073C0
// [0x907cc0] (149 bytes) sub_907CC0
// int sub_907CC0(std::vector<int> *a1, Json::Value *a2, int a3);
// [0x907d60] (451 bytes) sub_907D60
// bool sub_907D60(int a1, int a2);
// [0x907f30] (1635 bytes) sub_907F30
// char sub_907F30(int a1);
// [0x9085a0] (3771 bytes) sub_9085A0
// void sub_9085A0(int a1);
// [0x909460] (153 bytes) sub_909460
// int sub_909460(std::vector<int> *a1, Json::Value *a2, int a3);
// [0x909500] (758 bytes) sub_909500
// int *sub_909500(std::vector<int> *a1, Json::Value *a2);
// [0x909800] (945 bytes) sub_909800
// void sub_909800(std::vector<int> *a1);
// [0x909bc0] (198 bytes) sub_909BC0
// int sub_909BC0(int a1);
// [0x909c90] (502 bytes) sub_909C90
// int sub_909C90(uint32_t *a1, int a2);
// [0x909e90] (214 bytes) sub_909E90
// void sub_909E90(int a1, int a2);
// [0x909f70] (369 bytes) sub_909F70
// int sub_909F70(int a1);
// [0x90a0f0] (384 bytes) sub_90A0F0
// char sub_90A0F0(uint32_t *a1);
// [0x90a270] (384 bytes) sub_90A270
// char sub_90A270(uint32_t *a1);
// [0x90a3f0] (690 bytes) sub_90A3F0
// void sub_90A3F0(uint32_t *a1, uint32_t *a2);
// [0x90a6b0] (65 bytes) sub_90A6B0
// int sub_90A6B0(uint32_t *a1);
// [0x90a700] (583 bytes) sub_90A700
// void sub_90A700(uint32_t *a1, int a2);
// [0x90a950] (271 bytes) sub_90A950
// void sub_90A950();
// [0x90aa60] (303 bytes) sub_90AA60
// void sub_90AA60(int a1, int a2);
// [0x90ab90] (269 bytes) sub_90AB90
// int sub_90AB90(int a1);
// [0x90aca0] (196 bytes) sub_90ACA0
// void sub_90ACA0(int a1, int a2);
// [0x90ad70] (1934 bytes) sub_90AD70
// void sub_90AD70(long double a1, int a2, int **a3);
// [0x90b500] (107 bytes) sub_90B500
// int sub_90B500(int a1, char a2, char a3);
// [0x90b570] (242 bytes) sub_90B570
// int sub_90B570(int a1);
// [0x90b670] (752 bytes) sub_90B670
// int sub_90B670(int a1);
// [0x90b960] (1043 bytes) sub_90B960
// int sub_90B960(int a1, float a2, float a3);
// [0x90bd80] (426 bytes) sub_90BD80
// void sub_90BD80(int a1, float a2);
// [0x90bf30] (214 bytes) sub_90BF30
// int sub_90BF30(int a1, int a2);
// [0x90c010] (338 bytes) sub_90C010
// int sub_90C010(glitch::os::Timer *a1, uint8_t a2);
// [0x90c170] (115 bytes) sub_90C170
// int sub_90C170(glitch::os::Timer *a1);
// [0x90c1f0] (1306 bytes) sub_90C1F0
// char sub_90C1F0(int *a1, int a2);
// [0x90c710] (4935 bytes) sub_90C710
// int sub_90C710(float *a1, int a2, float *a3, int *a4, int *a5, uint32_t *a6);
// [0x90da60] (755 bytes) sub_90DA60
// void sub_90DA60(int a1, int a2, char a3);
// [0x90dd60] (892 bytes) sub_90DD60
// void sub_90DD60(int a1, char a2, uint8_t a3, char a4);
// [0x90e0e0] (416 bytes) sub_90E0E0
// void sub_90E0E0(int a1, int a2);
// [0x90e280] (355 bytes) sub_90E280
// void sub_90E280(int a1);
// [0x90e3f0] (223 bytes) sub_90E3F0
// void sub_90E3F0(int a1);
// [0x90e4d0] (311 bytes) sub_90E4D0
// void sub_90E4D0(int a1);
// [0x90e610] (890 bytes) sub_90E610
// char sub_90E610(int a1);
// [0x90e990] (112 bytes) sub_90E990
// int sub_90E990(long double a1, uint8_t *a2);
// [0x90ea00] (215 bytes) sub_90EA00
// void sub_90EA00(uint8_t *a1);
// [0x90eae0] (478 bytes) sub_90EAE0
// void sub_90EAE0(int a1);
// [0x90ecc0] (316 bytes) sub_90ECC0
// void sub_90ECC0(long double a1, uint32_t *a2);
// [0x90ee00] (523 bytes) sub_90EE00
// void sub_90EE00(int a1, int a2);
// [0x90f010] (125 bytes) sub_90F010
// int sub_90F010(uint32_t *a1);
// [0x90f090] (731 bytes) sub_90F090
// int sub_90F090(int a1, char *a2);
// [0x90f370] (384 bytes) sub_90F370
// int sub_90F370(int a1);
// [0x90f4f0] (221 bytes) sub_90F4F0
// void sub_90F4F0(int a1);
// [0x90f5d0] (501 bytes) sub_90F5D0
// void sub_90F5D0(int a1);
// [0x90f7d0] (848 bytes) sub_90F7D0
// void sub_90F7D0(int a1, char *a2);
// [0x90fb20] (847 bytes) sub_90FB20
// int sub_90FB20(int a1);
// [0x90fe70] (851 bytes) sub_90FE70
// int sub_90FE70(int a1);
// [0x9101d0] (1527 bytes) sub_9101D0
// int sub_9101D0(uint8_t *a1, int a2);
// [0x9107d0] (744 bytes) sub_9107D0
// char sub_9107D0(int a1, int a2);
// [0x910ac0] (139 bytes) sub_910AC0
// int sub_910AC0(int a1);
// [0x910b50] (1398 bytes) sub_910B50
// char sub_910B50(int a1, int a2);
// [0x9110d0] (1876 bytes) sub_9110D0
// int *sub_9110D0(long double a1, glitch::os::Timer *a2);
// [0x911830] (989 bytes) sub_911830
// unsigned int sub_911830(glitch::os::Timer *a1, int a2);
// [0x911c10] (3027 bytes) sub_911C10
// int sub_911C10(long double a1, glitch::os::Timer *a2, int a3, char a4, char a5);
// [0x9127f0] (452 bytes) sub_9127F0
// void sub_9127F0(long double a1, uint32_t *a2, char a3);
// [0x9129c0] (812 bytes) sub_9129C0
// void sub_9129C0(uint32_t *a1, int a2, int a3);
// [0x912cf0] (400 bytes) sub_912CF0
// void sub_912CF0(uint32_t *a1);
// [0x912e80] (7 bytes) sub_912E80
// int sub_912E80(int a1);
// [0x912e90] (196 bytes) sub_912E90
// void sub_912E90(uint32_t *a1);
// [0x912f60] (7 bytes) sub_912F60
// int sub_912F60(int a1);
// [0x912f70] (188 bytes) sub_912F70
// int sub_912F70(uint32_t *a1);
// [0x913030] (2527 bytes) sub_913030
// int sub_913030(int a1, int a2, char a3, int *a4);
// [0x913a10] (311 bytes) sub_913A10
// unsigned int sub_913A10(int a1, char a2);
// [0x913b50] (946 bytes) sub_913B50
// int sub_913B50(__guard *a1, int a2, int a3, __guard a4, __guard *a5);
// [0x913f10] (1305 bytes) sub_913F10
// int sub_913F10(int a1, int a2, int a3, __guard a4, __guard *a5);
// [0x914430] (361 bytes) sub_914430
// int sub_914430(int a1);
// [0x9145a0] (10417 bytes) sub_9145A0
// int sub_9145A0(int a1);
// [0x916e60] (909 bytes) sub_916E60
// int sub_916E60(int a1);
// [0x9171f0] (2899 bytes) sub_9171F0
// int sub_9171F0(int a1);
// [0x917d50] (4863 bytes) sub_917D50
// int sub_917D50(int a1);
// [0x919050] (2893 bytes) sub_919050
// int sub_919050(int a1);
// [0x919ba0] (5337 bytes) sub_919BA0
// int sub_919BA0(int a1);
// [0x91b080] (1001 bytes) sub_91B080
// int sub_91B080(int a1);
// [0x91b470] (1799 bytes) sub_91B470
// int sub_91B470(int a1);
// [0x91bb80] (4860 bytes) sub_91BB80
// int sub_91BB80(int a1);
// [0x91ce80] (706 bytes) sub_91CE80
// int sub_91CE80(uint32_t *a1, uint32_t *a2);
// [0x91d150] (172 bytes) sub_91D150
// int sub_91D150(int a1, int a2, int a3);
// [0x91d200] (68 bytes) sub_91D200
// int sub_91D200();
// [0x91d250] (151 bytes) sub_91D250
// int sub_91D250(int a1, int a2);
// [0x91d2f0] (136 bytes) sub_91D2F0
// int sub_91D2F0(int a1, int a2);
// [0x91d380] (223 bytes) sub_91D380
// int sub_91D380(int a1);
// [0x91d460] (287 bytes) sub_91D460
// int sub_91D460(uint32_t *a1);
// [0x91d580] (189 bytes) sub_91D580
// int sub_91D580(int a1);
// [0x91d640] (213 bytes) sub_91D640
// int sub_91D640(int a1);
// [0x91d720] (553 bytes) sub_91D720
// int sub_91D720(int a1, int a2);
// [0x91d950] (572 bytes) sub_91D950
// int sub_91D950(uint32_t *a1);
// [0x91db90] (418 bytes) sub_91DB90
// void sub_91DB90(long double a1, int a2);
// [0x91dd40] (355 bytes) sub_91DD40
// int sub_91DD40(int a1);
// [0x91deb0] (2444 bytes) sub_91DEB0
// int sub_91DEB0(int a1, int a2, int a3);
// [0x91e860] (959 bytes) sub_91E860
// int sub_91E860(int a1, int a2);
// [0x91ec20] (755 bytes) sub_91EC20
// int sub_91EC20(int a1, int a2);
// [0x91ef20] (771 bytes) sub_91EF20
// int sub_91EF20(int a1, int a2);
// [0x91f230] (744 bytes) sub_91F230
// void sub_91F230(int a1, int a2);
// [0x91f520] (2639 bytes) sub_91F520
// void sub_91F520(uint32_t *a1, int a2);
// [0x91ff70] (855 bytes) sub_91FF70
// char sub_91FF70(long double a1, int a2);
// [0x9202d0] (265 bytes) sub_9202D0
// int sub_9202D0(long double a1, int a2, int a3);
// [0x9203e0] (423 bytes) sub_9203E0
// int sub_9203E0(long double a1, int a2, int a3);
// [0x920590] (77 bytes) sub_920590
// long double sub_920590();
// [0x9205e0] (1951 bytes) sub_9205E0
// int sub_9205E0(uint32_t *a1, int a2);
// [0x920d80] (201 bytes) sub_920D80
// int sub_920D80(int a1);
// [0x920e50] (388 bytes) sub_920E50
// int sub_920E50(int a1);
// [0x920fe0] (439 bytes) sub_920FE0
// int sub_920FE0(int a1);
// [0x9211a0] (810 bytes) sub_9211A0
// int sub_9211A0(int a1);
// [0x9214d0] (711 bytes) sub_9214D0
// bool sub_9214D0(int a1);
// [0x9217a0] (360 bytes) sub_9217A0
// int sub_9217A0(int a1);
// [0x921910] (496 bytes) sub_921910
// int sub_921910(int a1);
// [0x921b00] (1680 bytes) sub_921B00
// int sub_921B00(int a1, unsigned int a2);
// [0x922190] (1448 bytes) sub_922190
// bool sub_922190(int a1, int a2, int a3, int a4, char a5);
// [0x922740] (128 bytes) sub_922740
// int sub_922740(uint32_t *a1, int a2);
// [0x9227c0] (128 bytes) sub_9227C0
// uint32_t *sub_9227C0(uint32_t *a1, int a2, char a3);
// [0x922840] (165 bytes) sub_922840
// int sub_922840(uint32_t *a1, int a2);
// [0x9228f0] (132 bytes) sub_9228F0
// int sub_9228F0(uint32_t *a1, int a2);
// [0x922980] (236 bytes) sub_922980
// uint32_t *sub_922980(uint32_t *a1, int a2, int a3);
// [0x922a70] (205 bytes) sub_922A70
// int sub_922A70(uint32_t *a1, int a2, int a3, int a4);
// [0x922b40] (148 bytes) sub_922B40
// int sub_922B40(int a1);
// [0x922be0] (1874 bytes) sub_922BE0
// int sub_922BE0(uint32_t **a1);
// [0x923340] (136 bytes) sub_923340
// void sub_923340(char *a1, int *a2);
// [0x9233d0] (816 bytes) sub_9233D0
// int sub_9233D0(int a1, char **a2, const char **a3);
// [0x923700] (97 bytes) sub_923700
// void sub_923700(int a1, int a2);
// [0x923770] (573 bytes) sub_923770
// void sub_923770(int a1, uint32_t *a2);
// [0x9239b0] (191 bytes) sub_9239B0
// int sub_9239B0(int a1, int a2);
// [0x923a70] (96 bytes) sub_923A70
// int sub_923A70(uint32_t *a1);
// [0x923ad0] (115 bytes) sub_923AD0
// uint32_t *sub_923AD0(int a1, char *a2);
// [0x923b50] (7 bytes) sub_923B50
// int sub_923B50(int a1);
// [0x923b60] (145 bytes) sub_923B60
// void sub_923B60(uint32_t *a1);
// [0x923c00] (7 bytes) sub_923C00
// int sub_923C00(int a1);
// [0x923c10] (137 bytes) sub_923C10
// void (__noreturn **sub_923C10(uint32_t *a1))();
// [0x923ca0] (412 bytes) sub_923CA0
// void sub_923CA0(uint32_t *a1, int a2, char *a3);
// [0x923e40] (39 bytes) sub_923E40
// void sub_923E40(int a1, uint32_t *a2);
// [0x923e70] (7 bytes) sub_923E70
// int sub_923E70(int a1);
// [0x923e80] (263 bytes) sub_923E80
// int sub_923E80(int a1);
// [0x923f90] (237 bytes) sub_923F90
// uint32_t *sub_923F90(uint32_t *a1, int a2);
// [0x924080] (183 bytes) sub_924080
// void sub_924080(int a1, int a2);
// [0x924140] (383 bytes) sub_924140
// uint32_t *sub_924140(int a1, uint32_t **a2, int a3);
// [0x9242c0] (142 bytes) sub_9242C0
// void sub_9242C0(void **a1);
// [0x924350] (3290 bytes) sub_924350
// void sub_924350(uint32_t *a1);
// [0x925030] (989 bytes) sub_925030
// int sub_925030(int a1);
// [0x925410] (1103 bytes) sub_925410
// int sub_925410(uint32_t *a1);
// [0x925860] (7233 bytes) sub_925860
// int sub_925860(int a1);
// [0x9274b0] (572 bytes) sub_9274B0
// int sub_9274B0(int a1, int a2);
// [0x9276f0] (609 bytes) sub_9276F0
// void sub_9276F0(int a1, int a2);
// [0x927960] (318 bytes) sub_927960
// int sub_927960(int a1, int a2);
// [0x927aa0] (116 bytes) sub_927AA0
// int *sub_927AA0(int a1, int a2);
// [0x927b20] (425 bytes) sub_927B20
// void sub_927B20(int a1, char a2, int a3);
// [0x927cd0] (7 bytes) sub_927CD0
// int sub_927CD0(int a1);
// [0x927ce0] (271 bytes) sub_927CE0
// void sub_927CE0(char *a1);
// [0x927df0] (143 bytes) sub_927DF0
// void sub_927DF0(char *a1);
// [0x927e80] (555 bytes) sub_927E80
// int sub_927E80(int a1);
// [0x9280b0] (826 bytes) sub_9280B0
// int sub_9280B0(uint32_t *a1, int a2);
// [0x9283f0] (3457 bytes) sub_9283F0
// int sub_9283F0(uint32_t *a1, int64_t a2, char a3);
// [0x929180] (2753 bytes) sub_929180
// int sub_929180(int a1, char a2, int a3);
// [0x929c50] (489 bytes) sub_929C50
// int sub_929C50(int a1, char a2);
// [0x929e40] (391 bytes) sub_929E40
// void sub_929E40(int a1);
// [0x929fd0] (429 bytes) sub_929FD0
// void sub_929FD0(int a1);
// [0x92a180] (254 bytes) sub_92A180
// void sub_92A180(uint32_t *a1);
// [0x92a280] (281 bytes) sub_92A280
// void sub_92A280();
// [0x92a3a0] (391 bytes) sub_92A3A0
// void sub_92A3A0(int a1);
// [0x92a530] (54 bytes) sub_92A530
// void sub_92A530(int a1);
// [0x92a570] (2625 bytes) sub_92A570
// int sub_92A570(int a1);
// [0x92afc0] (383 bytes) sub_92AFC0
// void sub_92AFC0(glitch::os::Timer *a1);
// [0x92b140] (512 bytes) sub_92B140
// void sub_92B140(int a1, int a2);
// [0x92b340] (431 bytes) sub_92B340
// void sub_92B340(int a1);
// [0x92b4f0] (520 bytes) sub_92B4F0
// int sub_92B4F0(int a1, int a2, char a3);
// [0x92b700] (72 bytes) sub_92B700
// int (**sub_92B700(uint32_t *a1, int a2))();
// [0x92b750] (116 bytes) sub_92B750
// int sub_92B750(uint32_t *a1, int a2);
// [0x92b7d0] (94 bytes) sub_92B7D0
// int sub_92B7D0(uint32_t *a1, int a2);
// [0x92b830] (102 bytes) sub_92B830
// int (**sub_92B830(uint32_t *a1, int a2))();
// [0x92b8a0] (102 bytes) sub_92B8A0
// int (**sub_92B8A0(uint32_t *a1, int a2))();
// [0x92b910] (476 bytes) sub_92B910
// int sub_92B910(int a1, int a2);
// [0x92baf0] (209 bytes) sub_92BAF0
// int sub_92BAF0(uint32_t *a1, int a2);
// [0x92bbd0] (211 bytes) sub_92BBD0
// int sub_92BBD0(int a1, int a2);
// [0x92bcb0] (250 bytes) sub_92BCB0
// int sub_92BCB0(uint32_t *a1, int a2);
// [0x92bdb0] (242 bytes) sub_92BDB0
// int sub_92BDB0(int a1);
// [0x92beb0] (933 bytes) sub_92BEB0
// void sub_92BEB0(int a1, int a2);
// [0x92c260] (116 bytes) sub_92C260
// int sub_92C260(int a1);
// [0x92c2e0] (2071 bytes) sub_92C2E0
// char sub_92C2E0(int a1, int a2);
// [0x92cb00] (632 bytes) sub_92CB00
// int sub_92CB00(int a1, int a2);
// [0x92cd80] (160 bytes) sub_92CD80
// void sub_92CD80(char *a1);
// [0x92ce20] (152 bytes) sub_92CE20
// int sub_92CE20(int a1);
// [0x92cec0] (124 bytes) sub_92CEC0
// void sub_92CEC0(char *a1);
// [0x92cf40] (124 bytes) sub_92CF40
// void sub_92CF40(char *a1);
// [0x92cfc0] (116 bytes) sub_92CFC0
// int sub_92CFC0(int a1);
// [0x92d040] (116 bytes) sub_92D040
// int sub_92D040(int a1);
// [0x92d0c0] (116 bytes) sub_92D0C0
// int sub_92D0C0(int a1);
// [0x92d140] (165 bytes) sub_92D140
// int sub_92D140(int a1);
// [0x92d1f0] (124 bytes) sub_92D1F0
// void sub_92D1F0(char *a1);
// [0x92d270] (173 bytes) sub_92D270
// void sub_92D270(char *a1);
// [0x92d320] (395 bytes) sub_92D320
// void sub_92D320(int a1);
// [0x92d4b0] (1036 bytes) sub_92D4B0
// int sub_92D4B0(int a1);
// [0x92d8c0] (293 bytes) sub_92D8C0
// uint32_t *sub_92D8C0(uint32_t *a1, int a2);
// [0x92d9f0] (1281 bytes) sub_92D9F0
// void sub_92D9F0(int a1, int a2, int a3);
// [0x92df00] (569 bytes) sub_92DF00
// void sub_92DF00(int a1);
// [0x92e140] (1963 bytes) sub_92E140
// int sub_92E140(int a1);
// [0x92e8f0] (394 bytes) sub_92E8F0
// int sub_92E8F0(int a1);
// [0x92ea80] (320 bytes) sub_92EA80
// int sub_92EA80(int a1, int a2);
// [0x92ebc0] (561 bytes) sub_92EBC0
// int sub_92EBC0(uint32_t *a1, int a2, char a3);
// [0x92ee00] (49 bytes) sub_92EE00
// int sub_92EE00(int a1);
// [0x92ee40] (320 bytes) sub_92EE40
// int sub_92EE40(int a1, int a2);
// [0x92ef80] (561 bytes) sub_92EF80
// int sub_92EF80(uint32_t *a1, int a2, char a3);
// [0x92f1c0] (304 bytes) sub_92F1C0
// int sub_92F1C0(int a1);
// [0x92f2f0] (320 bytes) sub_92F2F0
// int sub_92F2F0(int a1, int a2);
// [0x92f430] (596 bytes) sub_92F430
// int sub_92F430(uint32_t *a1, int a2, char a3);
// [0x92f690] (372 bytes) sub_92F690
// int sub_92F690(int a1);
// [0x92f810] (217 bytes) sub_92F810
// uint32_t *sub_92F810(uint32_t *a1, int a2);
// [0x92f8f0] (440 bytes) sub_92F8F0
// int sub_92F8F0(int a1);
// [0x92fab0] (143 bytes) sub_92FAB0
// void sub_92FAB0(int a1);
// [0x92fb40] (151 bytes) sub_92FB40
// void sub_92FB40(void **a1);
// [0x92fbe0] (1184 bytes) sub_92FBE0
// uint32_t *sub_92FBE0(uint32_t *result, uint32_t *a2, unsigned int a3, uint32_t *a4);
// [0x930080] (693 bytes) sub_930080
// int sub_930080(uint32_t *a1, int a2);
// [0x930340] (336 bytes) sub_930340
// unsigned int sub_930340(int a1);
// [0x930490] (80 bytes) sub_930490
// void sub_930490(int a1);
// [0x9304e0] (80 bytes) sub_9304E0
// void sub_9304E0(int a1);
// [0x930530] (1293 bytes) sub_930530
// void sub_930530(int a1);
// [0x930a40] (3023 bytes) sub_930A40
// void sub_930A40(int a1, int a2);
// [0x931610] (1299 bytes) sub_931610
// int sub_931610(int a1, int a2);
// [0x931b30] (1371 bytes) sub_931B30
// void sub_931B30(uint32_t *a1, int a2);
// [0x932090] (2862 bytes) sub_932090
// int sub_932090(int a1, int a2);
// [0x932bc0] (567 bytes) sub_932BC0
// int *sub_932BC0(int *a1, int **a2);
// [0x932e00] (7 bytes) sub_932E00
// int sub_932E00(int a1);
// [0x932e10] (463 bytes) sub_932E10
// int sub_932E10(uint32_t *a1);
// [0x932fe0] (333 bytes) sub_932FE0
// uint32_t *sub_932FE0(uint32_t *a1, int a2);
// [0x933130] (1185 bytes) sub_933130
// void sub_933130(int *a1, char a2);
// [0x9335e0] (2024 bytes) sub_9335E0
// 0x9335e0 sub_9335E0
// [0x933dd0] (123 bytes) sub_933DD0
// void sub_933DD0(int a1, char a2);
// [0x933e50] (411 bytes) sub_933E50
// void sub_933E50(int a1, char a2);
// [0x934460] (1240 bytes) sub_934460
// void sub_934460(int a1, char a2);
// [0x934940] (581 bytes) sub_934940
// void sub_934940(float *a1, char a2);
// [0x934b90] (289 bytes) sub_934B90
// char sub_934B90(uint32_t *a1, int a2);
// [0x934cc0] (149 bytes) sub_934CC0
// void sub_934CC0(int a1);
// [0x934d60] (81 bytes) sub_934D60
// uint32_t *sub_934D60(int a1);
// [0x934dc0] (146 bytes) sub_934DC0
// int sub_934DC0(int a1);
// [0x934e60] (146 bytes) sub_934E60
// int sub_934E60(int a1);
// [0x934f00] (223 bytes) sub_934F00
// void sub_934F00(long double a1, uint32_t *a2);
// [0x934fe0] (552 bytes) sub_934FE0
// void sub_934FE0(int a1, char a2);
// [0x935210] (520 bytes) sub_935210
// void sub_935210(int a1, char a2);
// [0x935420] (793 bytes) sub_935420
// void sub_935420(int a1, char a2);
// [0x935740] (728 bytes) sub_935740
// void sub_935740(int a1, char a2);
// [0x935a20] (89 bytes) sub_935A20
// void sub_935A20(float a1, float a2, float a3, float a4, int a5, int a6);
// [0x935a80] (483 bytes) sub_935A80
// void sub_935A80(int a1, char a2);
// [0x935c70] (7 bytes) sub_935C70
// int sub_935C70(int a1);
// [0x935c80] (403 bytes) sub_935C80
// void sub_935C80(char *a1);
// [0x935e20] (7 bytes) sub_935E20
// int sub_935E20(int a1);
// [0x935e30] (537 bytes) sub_935E30
// int sub_935E30(uint32_t *a1);
// [0x936050] (7 bytes) sub_936050
// int sub_936050(int a1);
// [0x936060] (56 bytes) sub_936060
// void sub_936060(uint32_t *a1);
// [0x9360a0] (7 bytes) sub_9360A0
// int sub_9360A0(int a1);
// [0x9360b0] (600 bytes) sub_9360B0
// int sub_9360B0(uint32_t *a1);
// [0x936310] (7 bytes) sub_936310
// int sub_936310(int a1);
// [0x936320] (56 bytes) sub_936320
// void sub_936320(uint32_t *a1);
// [0x936360] (7 bytes) sub_936360
// int sub_936360(int a1);
// [0x936370] (278 bytes) sub_936370
// int sub_936370(int a1);
// [0x936490] (7 bytes) sub_936490
// int sub_936490(int a1);
// [0x9364a0] (395 bytes) sub_9364A0
// int sub_9364A0(int a1);
// [0x936630] (343 bytes) sub_936630
// 0x936630 sub_936630
// [0x936790] (343 bytes) sub_936790
// 0x936790 sub_936790
// [0x9368f0] (455 bytes) sub_9368F0
// 0x9368f0 sub_9368F0
// [0x936ac0] (7 bytes) sub_936AC0
// int sub_936AC0(int a1);
// [0x936ad0] (286 bytes) sub_936AD0
// void sub_936AD0(char *a1);
// [0x936bf0] (749 bytes) sub_936BF0
// void sub_936BF0(int *a1, char a2);
// [0x937100] (290 bytes) sub_937100
// void sub_937100(int a1, char a2);
// [0x937230] (597 bytes) sub_937230
// int sub_937230(int a1, char a2);
// [0x937490] (338 bytes) sub_937490
// int sub_937490(int a1, char a2);
// [0x9375f0] (1899 bytes) sub_9375F0
// uint32_t *sub_9375F0(int a1, int a2);
// [0x937d60] (896 bytes) sub_937D60
// void sub_937D60(int a1, char a2);
// [0x9380e0] (1173 bytes) sub_9380E0
// int sub_9380E0(uint32_t *a1);
// [0x938580] (2591 bytes) sub_938580
// void sub_938580(long double a1, int a2, int a3);
// [0x938fa0] (7 bytes) sub_938FA0
// int sub_938FA0(int a1);
// [0x938fb0] (471 bytes) sub_938FB0
// void sub_938FB0(uint32_t *a1);
// [0x939190] (7 bytes) sub_939190
// int sub_939190(int a1);
// [0x9391a0] (815 bytes) sub_9391A0
// int sub_9391A0(int a1);
// [0x9394d0] (7 bytes) sub_9394D0
// int sub_9394D0(int a1);
// [0x9394e0] (823 bytes) sub_9394E0
// void sub_9394E0(uint32_t *a1);
// [0x939820] (1078 bytes) sub_939820
// 0x939820 sub_939820
// [0x939c60] (7 bytes) sub_939C60
// int sub_939C60(int a1);
// [0x939c70] (818 bytes) sub_939C70
// int sub_939C70(uint32_t *a1);
// [0x939fb0] (7 bytes) sub_939FB0
// int sub_939FB0(int a1);
// [0x939fc0] (56 bytes) sub_939FC0
// void sub_939FC0(uint32_t *a1);
// [0x93a000] (1075 bytes) sub_93A000
// int sub_93A000(int *a1, int a2);
// [0x93b1f0] (5877 bytes) sub_93B1F0
// int sub_93B1F0(uint32_t *a1);
// [0x93c8f0] (1719 bytes) sub_93C8F0
// int sub_93C8F0(int *a1);
// [0x93cfb0] (5117 bytes) sub_93CFB0
// int sub_93CFB0(uint32_t *a1);
// [0x93e3b0] (4709 bytes) sub_93E3B0
// char *sub_93E3B0(uint32_t *a1);
// [0x93f620] (102 bytes) sub_93F620
// int sub_93F620(int a1);
// [0x93f690] (1862 bytes) sub_93F690
// int sub_93F690(uint32_t *a1);
// [0x93fde0] (500 bytes) sub_93FDE0
// int sub_93FDE0(uint32_t *a1);
// [0x93ffe0] (35 bytes) sub_93FFE0
// int sub_93FFE0(uint32_t *a1);
// [0x940010] (284 bytes) sub_940010
// uint32_t *sub_940010(uint32_t *a1, int a2, int *a3, int *a4);
// [0x940130] (215 bytes) sub_940130
// int sub_940130(int a1, int *a2);
// [0x940210] (284 bytes) sub_940210
// uint32_t *sub_940210(uint32_t *a1, int a2, int *a3, int *a4);
// [0x940330] (215 bytes) sub_940330
// int sub_940330(int a1, int *a2);
// [0x940410] (341 bytes) sub_940410
// int sub_940410(uint32_t *a1, glf **a2, int a3, int *a4, glf **a5);
// [0x940570] (1170 bytes) sub_940570
// void sub_940570(int a1, char **a2);
// [0x940a10] (543 bytes) sub_940A10
// int sub_940A10(int a1, char *s);
// [0x940c30] (333 bytes) sub_940C30
// int sub_940C30(uint32_t *a1, glf **a2, int a3, int *a4, glf **a5);
// [0x940d80] (97030 bytes) sub_940D80
// 0x940d80 sub_940D80
// [0x958890] (347 bytes) sub_958890
// int sub_958890(char **a1);
// [0x9589f0] (485 bytes) sub_9589F0
// uint32_t *sub_9589F0(int a1);
// [0x959350] (100 bytes) sub_959350
// int sub_959350(float a1, int a2, char a3);
// [0x9593c0] (100 bytes) sub_9593C0
// int sub_9593C0(float a1, int a2, char a3);
// [0x959430] (385 bytes) sub_959430
// uint32_t *sub_959430();
// [0x9595c0] (678 bytes) sub_9595C0
// uint32_t *sub_9595C0(int a1, char a2);
// [0x959870] (830 bytes) sub_959870
// uint32_t *sub_959870(int a1, char a2);
// [0x95a810] (205 bytes) sub_95A810
// unsigned int sub_95A810(int a1, int a2, int a3);
// [0x95a8e0] (205 bytes) sub_95A8E0
// unsigned int sub_95A8E0(int a1, int a2, int a3);
// [0x95a9b0] (3058 bytes) sub_95A9B0
// void sub_95A9B0(int a1, int a2, uint32_t *a3);
// [0x95b5b0] (100 bytes) sub_95B5B0
// void sub_95B5B0(uint32_t *a1, int a2, uint32_t *a3);
// [0x95b620] (445 bytes) sub_95B620
// int sub_95B620(uint32_t *a1, uint32_t *a2);
// [0x95b7e0] (187 bytes) sub_95B7E0
// int sub_95B7E0(int a1, uint32_t *a2);
// [0x95b8a0] (278 bytes) sub_95B8A0
// void sub_95B8A0(int a1);
// [0x95b9c0] (432 bytes) sub_95B9C0
// void sub_95B9C0(int a1, int a2);
// [0x95bb70] (309 bytes) sub_95BB70
// void sub_95BB70(int a1);
// [0x95bcb0] (108 bytes) sub_95BCB0
// void sub_95BCB0(int a1, int16_t a2);
// [0x95bd20] (117 bytes) sub_95BD20
// void sub_95BD20(int a1);
// [0x95bda0] (4623 bytes) sub_95BDA0
// unsigned int sub_95BDA0(int a1, uint8_t a2, char a3);
// [0x95cfb0] (853 bytes) sub_95CFB0
// void sub_95CFB0(int a1, char a2, uint8_t a3);
// [0x95d310] (318 bytes) sub_95D310
// int *sub_95D310(int a1, int a2, int a3);
// [0x95d450] (201 bytes) sub_95D450
// void sub_95D450(uint32_t *a1, int a2);
// [0x95d520] (812 bytes) sub_95D520
// void sub_95D520(glitch::os::Timer *a1);
// [0x95d850] (559 bytes) sub_95D850
// int sub_95D850(int a1, int a2, char *s);
// [0x95da80] (2918 bytes) sub_95DA80
// int sub_95DA80(glitch::os::Timer *a1);
// [0x95e5f0] (854 bytes) sub_95E5F0
// int sub_95E5F0(int a1, int a2);
// [0x95e950] (22 bytes) sub_95E950
// int *sub_95E950();
// [0x95e970] (22 bytes) sub_95E970
// int *sub_95E970();
// [0x95e990] (15 bytes) sub_95E990
// long double sub_95E990(int a1);
// [0x95e9a0] (14 bytes) sub_95E9A0
// int sub_95E9A0(int a1);
// [0x95e9b0] (12 bytes) sub_95E9B0
// int sub_95E9B0();
// [0x95e9c0] (15 bytes) sub_95E9C0
// int sub_95E9C0(int a1);
// [0x95e9d0] (19 bytes) sub_95E9D0
// int sub_95E9D0(int a1);
// [0x95e9f0] (16 bytes) sub_95E9F0
// int sub_95E9F0(int a1);
// [0x95ea00] (17 bytes) sub_95EA00
// int sub_95EA00(int a1, char a2);
// [0x95ea20] (15 bytes) sub_95EA20
// long double sub_95EA20(int a1);
// [0x95ea30] (14 bytes) sub_95EA30
// int sub_95EA30(int a1);
// [0x95ea40] (15 bytes) sub_95EA40
// int sub_95EA40(int a1);
// [0x95ea50] (17 bytes) sub_95EA50
// int sub_95EA50(int a1, int a2);
// [0x95ea70] (15 bytes) sub_95EA70
// int sub_95EA70(int a1);
// [0x95ea80] (27 bytes) sub_95EA80
// char *sub_95EA80(int a1);
// [0x95eaa0] (32 bytes) sub_95EAA0
// int sub_95EAA0(int a1);
// [0x95eac0] (27 bytes) sub_95EAC0
// bool sub_95EAC0(int a1);
// [0x95eae0] (9 bytes) sub_95EAE0
// long double sub_95EAE0();
// [0x95eaf0] (9 bytes) sub_95EAF0
// int sub_95EAF0();
// [0x95eb08] (1 bytes) nullsub_358
// void nullsub_358();
// [0x95eb18] (1 bytes) nullsub_359
// void nullsub_359();
// [0x95eb28] (1 bytes) nullsub_360
// void nullsub_360();
// [0x95eb38] (1 bytes) nullsub_361
// void nullsub_361();
// [0x95eb40] (15 bytes) sub_95EB40
// int sub_95EB40(int a1);
// [0x95eb58] (1 bytes) nullsub_362
// void nullsub_362();
// [0x95eb68] (1 bytes) nullsub_363
// void nullsub_363();
// [0x95eb78] (1 bytes) nullsub_364
// void nullsub_364();
// [0x95eb80] (17 bytes) sub_95EB80
// int sub_95EB80(int a1, char a2);
// [0x95eba8] (1 bytes) nullsub_365
// void nullsub_365();
// [0x95ebb0] (22 bytes) sub_95EBB0
// long double sub_95EBB0();
// [0x95ebd8] (1 bytes) nullsub_366
// void nullsub_366();
// [0x95ebe0] (16 bytes) sub_95EBE0
// int sub_95EBE0(int a1);
// [0x95ebf0] (9 bytes) sub_95EBF0
// int sub_95EBF0();
// [0x95ec08] (1 bytes) nullsub_367
// void nullsub_367();
// [0x95ec10] (22 bytes) sub_95EC10
// int *sub_95EC10();
// [0x95ec30] (17 bytes) sub_95EC30
// int sub_95EC30(int a1, char a2);
// [0x95ec50] (16 bytes) sub_95EC50
// int sub_95EC50(int a1);
// [0x95ec60] (12 bytes) sub_95EC60
// int sub_95EC60();
// [0x95ec78] (1 bytes) nullsub_368
// void nullsub_368();
// [0x95ec80] (22 bytes) sub_95EC80
// int *sub_95EC80();
// [0x95eca0] (17 bytes) sub_95ECA0
// bool sub_95ECA0(int a1);
// [0x95ecc0] (22 bytes) sub_95ECC0
// int *sub_95ECC0();
// [0x95ece0] (22 bytes) sub_95ECE0
// int *sub_95ECE0();
// [0x95ed00] (22 bytes) sub_95ED00
// int *sub_95ED00();
// [0x95ed28] (1 bytes) nullsub_369
// void nullsub_369();
// [0x95ed38] (1 bytes) nullsub_370
// void nullsub_370();
// [0x95ed40] (12 bytes) sub_95ED40
// int sub_95ED40();
// [0x95ed50] (12 bytes) sub_95ED50
// int sub_95ED50();
// [0x95ed60] (60 bytes) sub_95ED60
// int sub_95ED60(int a1);
// [0x95eda8] (1 bytes) nullsub_371
// void nullsub_371();
// [0x95edb8] (1 bytes) nullsub_372
// void nullsub_372();
// [0x95edc8] (1 bytes) nullsub_373
// void nullsub_373();
// [0x95edd0] (12 bytes) sub_95EDD0
// int sub_95EDD0();
// [0x95ede0] (9 bytes) sub_95EDE0
// int sub_95EDE0();
// [0x95edf0] (22 bytes) sub_95EDF0
// int *sub_95EDF0();
// [0x95ee10] (22 bytes) sub_95EE10
// int *sub_95EE10();
// [0x95ee30] (22 bytes) sub_95EE30
// int *sub_95EE30();
// [0x95ee50] (22 bytes) sub_95EE50
// int *sub_95EE50();
// [0x95ee70] (16 bytes) sub_95EE70
// int sub_95EE70(int a1);
// [0x95ee80] (16 bytes) sub_95EE80
// int sub_95EE80(int a1);
// [0x95ee90] (16 bytes) sub_95EE90
// int sub_95EE90(int a1);
// [0x95eea0] (22 bytes) sub_95EEA0
// int *sub_95EEA0();
// [0x95eec0] (22 bytes) sub_95EEC0
// int *sub_95EEC0();
// [0x95eee0] (22 bytes) sub_95EEE0
// int *sub_95EEE0();
// [0x95ef00] (22 bytes) sub_95EF00
// int *sub_95EF00();
// [0x95ef20] (22 bytes) sub_95EF20
// int *sub_95EF20();
// [0x95ef40] (9 bytes) sub_95EF40
// int sub_95EF40();
// [0x95ef50] (22 bytes) sub_95EF50
// int *sub_95EF50();
// [0x95ef78] (1 bytes) nullsub_374
// void nullsub_374();
// [0x95ef80] (17 bytes) sub_95EF80
// uint32_t *sub_95EF80(uint32_t *a1);
// [0x95efa0] (12 bytes) sub_95EFA0
// int sub_95EFA0(int a1);
// [0x95efb0] (12 bytes) sub_95EFB0
// int sub_95EFB0();
// [0x95efc8] (1 bytes) nullsub_375
// void nullsub_375();
// [0x95efd0] (24 bytes) sub_95EFD0
// uint32_t *sub_95EFD0(uint32_t *a1);
// [0x95f000] (22 bytes) sub_95F000
// int *sub_95F000();
// [0x95f020] (9 bytes) sub_95F020
// int sub_95F020();
// [0x95f030] (48 bytes) sub_95F030
// long double sub_95F030(int a1);
// [0x95f060] (22 bytes) sub_95F060
// int *sub_95F060();
// [0x95f080] (15 bytes) sub_95F080
// long double sub_95F080(int a1);
// [0x95f090] (28 bytes) sub_95F090
// int sub_95F090(int a1);
// [0x95f0b0] (22 bytes) sub_95F0B0
// int *sub_95F0B0();
// [0x95f0d0] (9 bytes) sub_95F0D0
// int sub_95F0D0();
// [0x95f0e0] (30 bytes) sub_95F0E0
// bool sub_95F0E0(int a1);
// [0x95f100] (48 bytes) sub_95F100
// long double sub_95F100(int a1);
// [0x95f130] (22 bytes) sub_95F130
// int *sub_95F130();
// [0x95f158] (1 bytes) nullsub_376
// void nullsub_376();
// [0x95f160] (9 bytes) sub_95F160
// int sub_95F160();
// [0x95f178] (1 bytes) nullsub_377
// void nullsub_377();
// [0x95f180] (48 bytes) sub_95F180
// long double sub_95F180(int a1);
// [0x95f1b0] (15 bytes) sub_95F1B0
// long double sub_95F1B0(int a1);
// [0x95f1c0] (39 bytes) sub_95F1C0
// bool sub_95F1C0(int a1);
// [0x95f1f0] (22 bytes) sub_95F1F0
// int *sub_95F1F0();
// [0x95f210] (9 bytes) sub_95F210
// int sub_95F210();
// [0x95f220] (15 bytes) sub_95F220
// long double sub_95F220(int a1);
// [0x95f230] (22 bytes) sub_95F230
// int *sub_95F230();
// [0x95f258] (1 bytes) nullsub_378
// void nullsub_378();
// [0x95f268] (1 bytes) nullsub_379
// void nullsub_379();
// [0x95f270] (9 bytes) sub_95F270
// int sub_95F270();
// [0x95f280] (12 bytes) sub_95F280
// int sub_95F280();
// [0x95f290] (9 bytes) sub_95F290
// int sub_95F290();
// [0x95f2a0] (9 bytes) sub_95F2A0
// int sub_95F2A0();
// [0x95f2b0] (9 bytes) sub_95F2B0
// int sub_95F2B0();
// [0x95f2c0] (12 bytes) sub_95F2C0
// int sub_95F2C0();
// [0x95f2d0] (12 bytes) sub_95F2D0
// int sub_95F2D0();
// [0x95f2e0] (48 bytes) sub_95F2E0
// long double sub_95F2E0(int a1);
// [0x95f310] (37 bytes) sub_95F310
// int sub_95F310(int a1);
// [0x95f340] (36 bytes) sub_95F340
// int sub_95F340(int a1, int *a2);
// [0x95f370] (12 bytes) sub_95F370
// int sub_95F370(int a1);
// [0x95f380] (42 bytes) sub_95F380
// int sub_95F380(int a1, int a2);
// [0x95f3b0] (42 bytes) sub_95F3B0
// void sub_95F3B0(uint32_t *a1);
// [0x95f3e0] (46 bytes) sub_95F3E0
// void sub_95F3E0(uint8_t *a1);
// [0x95f410] (42 bytes) sub_95F410
// void sub_95F410(glitch::collada::CColladaFactory *a1);
// [0x95f440] (81 bytes) sub_95F440
// int (**sub_95F440(int a1))(int);
// [0x95f4a0] (88 bytes) sub_95F4A0
// int sub_95F4A0(int a1, int a2);
// [0x95f500] (62 bytes) sub_95F500
// int sub_95F500(int a1);
// [0x95f540] (50 bytes) sub_95F540
// int sub_95F540(int a1);
// [0x95f580] (61 bytes) sub_95F580
// int sub_95F580(int a1);
// [0x95f5c0] (64 bytes) sub_95F5C0
// void sub_95F5C0(glitch::collada::CColladaFactory *a1);
// [0x95f600] (42 bytes) sub_95F600
// void sub_95F600(glitch::collada::CColladaFactory *a1);
// [0x95f630] (64 bytes) sub_95F630
// void sub_95F630(glitch::collada::CColladaFactory *a1);
// [0x95f670] (89 bytes) sub_95F670
// void sub_95F670(uint8_t *a1);
// [0x95f6d0] (152 bytes) sub_95F6D0
// int sub_95F6D0(int a1);
// [0x95f770] (166 bytes) std::__fill_bvector(std::_Bit_iterator,std::_Bit_iterator,bool)
// uint32_t *std::__fill_bvector(uint32_t *a1, int a2, uint32_t *a3, int a4, char a5);
// [0x95f820] (705 bytes) std::fill(std::_Bit_iterator,std::_Bit_iterator,bool const&)
// unsigned int *std::fill(unsigned int *a1, int a2, unsigned int *a3, int a4, char *a5);
// [0x95faf0] (161 bytes) sub_95FAF0
// float *sub_95FAF0(float *a1, float a2, float *a3);
// [0x95fba0] (91 bytes) sub_95FBA0
// char *sub_95FBA0( int a1, int a2, const void **a3, const char **a4, int a5, std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a6, std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a7);
// [0x95fc00] (81 bytes) sub_95FC00
// glitch::collada::CColladaFactory *sub_95FC00(glitch::collada::CColladaFactory *a1, int a2, int a3);
// [0x95fc60] (97 bytes) sub_95FC60
// glitch::IObject **sub_95FC60(glitch::IObject **a1, int a2, int a3, int a4, int a5);
// [0x95fcd0] (58 bytes) sub_95FCD0
// int sub_95FCD0(int a1);
// [0x95fd10] (66 bytes) sub_95FD10
// int sub_95FD10(int a1);
// [0x95fd60] (89 bytes) sub_95FD60
// int sub_95FD60(int a1, int a2, int a3, int a4);
// [0x95fdc0] (89 bytes) sub_95FDC0
// int sub_95FDC0(int a1, int a2, int a3, int a4);
// [0x95fe20] (67 bytes) sub_95FE20
// int sub_95FE20(int a1, int a2, int a3, uint32_t *a4);
// [0x95fe70] (97 bytes) sub_95FE70
// glitch::collada::CColladaFactory *sub_95FE70( glitch::collada::CColladaFactory *a1, int a2, char *a3, char *a4, int a5);
// [0x95fee0] (97 bytes) sub_95FEE0
// int *sub_95FEE0(int *a1, int a2, int a3, int a4, int a5);
// [0x95ff50] (107 bytes) sub_95FF50
// char sub_95FF50(uint32_t *a1);
// [0x95ffc0] (85 bytes) sub_95FFC0
// int sub_95FFC0(int a1);
// [0x960020] (61 bytes) sub_960020
// bool sub_960020(int a1);
// [0x960060] (177 bytes) sub_960060
// int sub_960060(int a1);
// [0x960120] (61 bytes) sub_960120
// bool sub_960120(int a1);
// [0x960160] (61 bytes) sub_960160
// bool sub_960160(int a1);
// [0x9601a0] (81 bytes) sub_9601A0
// int sub_9601A0(int a1);
// [0x960200] (90 bytes) sub_960200
// int sub_960200(int a1);
// [0x960260] (461 bytes) sub_960260
// const char *sub_960260(int a1);
// [0x960430] (1925 bytes) sub_960430
// const char *sub_960430(int a1);
// [0x960bc0] (629 bytes) sub_960BC0
// const char *sub_960BC0(int a1);
// [0x960e40] (347 bytes) std::vector<int,std::allocator<int>>::push_back(int const&)
// char *std::vector<int>::push_back(std::vector<int> *this, const int *a2);
// [0x960fa0] (413 bytes) sub_960FA0
// int sub_960FA0(int a1);
// [0x961140] (185 bytes) std::vector<PhysicsCollisionInput *,std::allocator<PhysicsCollisionInput *>>::vector(std::vector<PhysicsCollisionInput *,std::allocator<PhysicsCollisionInput *>> const&)
// void *std::vector<PhysicsCollisionInput *>::vector( std::vector<PhysicsCollisionInput *> *this, const std::vector<PhysicsCollisionInput *> *a2);
// [0x961200] (260 bytes) std::map<int,vox::EmitterHandle,std::less<int>,std::allocator<std::pair<int const,vox::EmitterHandle>>>::operator[](int const&)
// uint32_t *std::map<int,vox::EmitterHandle>::operator[](std::map<int,vox::EmitterHandle> *this, int *a2);
// [0x961310] (187 bytes) std::vector<int,std::allocator<int>>::vector(std::vector<int,std::allocator<int>> const&)
// void *std::vector<int>::vector(std::vector<int> *this, const std::vector<int> *a2);
// [0x9613d0] (233 bytes) __gnu_cxx::__normal_iterator<int *,std::vector<int,std::allocator<int>>> std::find<__gnu_cxx::__normal_iterator<int *,std::vector<int,std::allocator<int>>>,int>(__gnu_cxx::__normal_iterator<int *,std::vector<int,std::allocator<int>>>,__gnu_cxx::__normal_iterator<int *,std::vector<int,std::allocator<int>>>,int const&)
// uint32_t *std::find<__gnu_cxx::__normal_iterator<int *,std::vector<int>>,int>( uint32_t *a1, uint32_t *a2, int a3, int *a4);
// [0x9614c0] (594 bytes) std::map<int,GrenadeDefinition,std::less<int>,std::allocator<std::pair<int const,GrenadeDefinition>>>::operator[](int const&)
// uint32_t *std::map<int,GrenadeDefinition>::operator[](std::map<int,GrenadeDefinition> *this, int *a2);
// [0x961720] (116 bytes) sub_961720
// int sub_961720(int a1);
// [0x9617a0] (116 bytes) sub_9617A0
// int sub_9617A0(int a1);
// [0x961820] (116 bytes) sub_961820
// int sub_961820(int a1);
// [0x9618a0] (124 bytes) sub_9618A0
// void sub_9618A0(char *a1);
// [0x961920] (124 bytes) sub_961920
// void sub_961920(char *a1);
// [0x9619a0] (124 bytes) sub_9619A0
// void sub_9619A0(char *a1);
// [0x961a20] (116 bytes) sub_961A20
// int sub_961A20(int a1);
// [0x961aa0] (124 bytes) sub_961AA0
// void sub_961AA0(char *a1);
// [0x961b20] (182 bytes) sub_961B20
// void sub_961B20(char *a1);
// [0x961be0] (174 bytes) sub_961BE0
// int sub_961BE0(int a1);
// [0x961c90] (436 bytes) std::vector<CoverObject *,std::allocator<CoverObject *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<CoverObject **,std::vector<CoverObject *,std::allocator<CoverObject *>>>,CoverObject * const&)
// void std::vector<CoverObject *>::_M_insert_aux(int a1, char *src, int *a3);
// [0x961e50] (425 bytes) std::_Rb_tree<int,std::pair<int const,GrenadeDefinition>,std::_Select1st<std::pair<int const,GrenadeDefinition>>,std::less<int>,std::allocator<std::pair<int const,GrenadeDefinition>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,GrenadeDefinition>> *)
// void std::_Rb_tree<int,std::pair<int const,GrenadeDefinition>,std::_Select1st<std::pair<int const,GrenadeDefinition>>,std::less<int>,std::allocator<std::pair<int const,GrenadeDefinition>>>::_M_erase( int a1, uint32_t *a2);
// [0x962000] (99 bytes) sub_962000
// void sub_962000(uint32_t *a1, int a2);
// [0x962070] (143 bytes) sub_962070
// void sub_962070(int a1);
// [0x962100] (151 bytes) sub_962100
// void sub_962100(char *a1);
// [0x9621a0] (151 bytes) sub_9621A0
// void sub_9621A0(char *a1);
// [0x962240] (143 bytes) sub_962240
// void sub_962240(int a1);
// [0x9622d0] (933 bytes) std::vector<Path::Waypoint,std::allocator<Path::Waypoint>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Path::Waypoint*,std::vector<Path::Waypoint,std::allocator<Path::Waypoint>>>,Path::Waypoint const&)
// int std::vector<Path::Waypoint>::_M_insert_aux(int a1, char *a2, int *a3);
// [0x962680] (87 bytes) std::vector<Gangstar::Handle<VFX,false>,std::allocator<Gangstar::Handle<VFX,false>>>::~vector()
// void std::vector<Gangstar::Handle<VFX,false>>::~vector(std::vector<Gangstar::Handle<VFX, false>> *this);
// [0x9626e0] (248 bytes) sub_9626E0
// uint32_t *sub_9626E0(uint32_t *a1, uint32_t *a2);
// [0x9627e0] (3139 bytes) sub_9627E0
// uint32_t *sub_9627E0(uint32_t *a1, uint32_t *a2);
// [0x963430] (567 bytes) std::_Rb_tree<int,std::pair<int const,vox::EmitterHandle>,std::_Select1st<std::pair<int const,vox::EmitterHandle>>,std::less<int>,std::allocator<std::pair<int const,vox::EmitterHandle>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,vox::EmitterHandle>> *)
// void std::_Rb_tree<int,std::pair<int const,vox::EmitterHandle>,std::_Select1st<std::pair<int const,vox::EmitterHandle>>,std::less<int>,std::allocator<std::pair<int const,vox::EmitterHandle>>>::_M_erase( int a1, uint32_t *a2);
// [0x963670] (919 bytes) std::vector<AmmoDefinition,std::allocator<AmmoDefinition>>::_M_fill_insert(__gnu_cxx::__normal_iterator<AmmoDefinition*,std::vector<AmmoDefinition,std::allocator<AmmoDefinition>>>,unsigned int,AmmoDefinition const&)
// unsigned int std::vector<AmmoDefinition>::_M_fill_insert(int a1, char *a2, unsigned int a3, uint32_t *a4);
