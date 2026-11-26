#pragma once
// ============================================================================
// TU07_HavokVehicleAndBuoyancy.h
// Complete Translation Unit [07/41]
// Binary Range in lib/x86/libGangstar4.so: 0x6b9e80 .. 0x6d3c20 (103 KB)
// Total Decompiled Functions in TU: 375 (100% coverage)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// Function Table in Translation Unit:
// [0x6b9e80] (711 bytes) sub_6B9E80
// int sub_6B9E80();
// [0x6ba150] (12 bytes) sub_6BA150
// int sub_6BA150();
// [0x6ba168] (1 bytes) nullsub_134
// void nullsub_134();
// [0x6ba170] (9 bytes) sub_6BA170
// int sub_6BA170();
// [0x6ba180] (20 bytes) sub_6BA180
// int sub_6BA180(int a1, int a2);
// [0x6ba1a0] (16 bytes) sub_6BA1A0
// int sub_6BA1A0(int a1, int a2);
// [0x6ba1b0] (12 bytes) sub_6BA1B0
// int sub_6BA1B0();
// [0x6ba1c8] (1 bytes) nullsub_135
// void nullsub_135();
// [0x6ba1d8] (1 bytes) nullsub_136
// void nullsub_136();
// [0x6ba1e0] (34 bytes) sub_6BA1E0
// int sub_6BA1E0(int a1);
// [0x6ba210] (27 bytes) sub_6BA210
// bool sub_6BA210(int a1);
// [0x6ba230] (12 bytes) sub_6BA230
// int sub_6BA230();
// [0x6ba240] (13 bytes) sub_6BA240
// int sub_6BA240(int a1, int a2);
// [0x6ba258] (1 bytes) nullsub_137
// void nullsub_137();
// [0x6ba268] (1 bytes) nullsub_138
// void nullsub_138();
// [0x6ba270] (27 bytes) sub_6BA270
// bool sub_6BA270(int a1);
// [0x6ba290] (24 bytes) sub_6BA290
// uint32_t *sub_6BA290(uint32_t *a1);
// [0x6ba2b0] (12 bytes) sub_6BA2B0
// int sub_6BA2B0();
// [0x6ba2c0] (12 bytes) sub_6BA2C0
// int sub_6BA2C0();
// [0x6ba2d8] (1 bytes) nullsub_139
// void nullsub_139();
// [0x6ba2e8] (1 bytes) nullsub_140
// void nullsub_140();
// [0x6ba2f8] (1 bytes) nullsub_141
// void nullsub_141();
// [0x6ba300] (27 bytes) sub_6BA300
// bool sub_6BA300(int a1);
// [0x6ba320] (12 bytes) sub_6BA320
// int sub_6BA320();
// [0x6ba338] (1 bytes) nullsub_142
// void nullsub_142();
// [0x6ba348] (1 bytes) nullsub_143
// void nullsub_143();
// [0x6ba350] (12 bytes) sub_6BA350
// int sub_6BA350();
// [0x6ba368] (1 bytes) nullsub_144
// void nullsub_144();
// [0x6ba378] (1 bytes) nullsub_145
// void nullsub_145();
// [0x6ba380] (356 bytes) sub_6BA380
// float *sub_6BA380(float *a1);
// [0x6ba4f0] (27 bytes) sub_6BA4F0
// bool sub_6BA4F0(int a1);
// [0x6ba510] (12 bytes) sub_6BA510
// int sub_6BA510();
// [0x6ba528] (1 bytes) nullsub_146
// void nullsub_146();
// [0x6ba538] (1 bytes) nullsub_147
// void nullsub_147();
// [0x6ba540] (62 bytes) sub_6BA540
// float *sub_6BA540(float *a1);
// [0x6ba580] (27 bytes) sub_6BA580
// bool sub_6BA580(int a1);
// [0x6ba5a0] (24 bytes) sub_6BA5A0
// uint32_t *sub_6BA5A0(uint32_t *a1);
// [0x6ba5c0] (12 bytes) sub_6BA5C0
// int sub_6BA5C0();
// [0x6ba5d8] (1 bytes) nullsub_148
// void nullsub_148();
// [0x6ba5e8] (1 bytes) nullsub_149
// void nullsub_149();
// [0x6ba5f8] (1 bytes) nullsub_150
// void nullsub_150();
// [0x6ba600] (12 bytes) sub_6BA600
// int sub_6BA600();
// [0x6ba618] (1 bytes) nullsub_151
// void nullsub_151();
// [0x6ba628] (1 bytes) nullsub_152
// void nullsub_152();
// [0x6ba630] (350 bytes) sub_6BA630
// float *sub_6BA630(float *a1);
// [0x6ba790] (27 bytes) sub_6BA790
// bool sub_6BA790(int a1);
// [0x6ba7b0] (12 bytes) sub_6BA7B0
// int sub_6BA7B0();
// [0x6ba7c8] (1 bytes) nullsub_153
// void nullsub_153();
// [0x6ba7d8] (1 bytes) nullsub_154
// void nullsub_154();
// [0x6ba7e0] (62 bytes) sub_6BA7E0
// float *sub_6BA7E0(float *a1);
// [0x6ba820] (27 bytes) sub_6BA820
// bool sub_6BA820(int a1);
// [0x6ba840] (24 bytes) sub_6BA840
// uint32_t *sub_6BA840(uint32_t *a1);
// [0x6ba860] (24 bytes) sub_6BA860
// uint32_t *sub_6BA860(uint32_t *a1);
// [0x6ba880] (130 bytes) sub_6BA880
// int sub_6BA880(uint32_t *a1, int a2, int a3, int a4);
// [0x6ba910] (12 bytes) sub_6BA910
// int sub_6BA910();
// [0x6ba920] (24 bytes) sub_6BA920
// uint32_t *sub_6BA920(uint32_t *a1);
// [0x6ba948] (1 bytes) nullsub_155
// void nullsub_155();
// [0x6ba958] (1 bytes) nullsub_156
// void nullsub_156();
// [0x6ba968] (1 bytes) nullsub_157
// void nullsub_157();
// [0x6ba970] (12 bytes) sub_6BA970
// int sub_6BA970();
// [0x6ba980] (24 bytes) sub_6BA980
// uint32_t *sub_6BA980(uint32_t *a1);
// [0x6ba9a0] (28 bytes) sub_6BA9A0
// int sub_6BA9A0(uint32_t *a1);
// [0x6ba9c0] (26 bytes) sub_6BA9C0
// int sub_6BA9C0(int a1, int a2);
// [0x6ba9e0] (39 bytes) sub_6BA9E0
// int sub_6BA9E0(int a1, int a2);
// [0x6baa10] (15 bytes) sub_6BAA10
// int sub_6BAA10(uint32_t *a1);
// [0x6baa20] (37 bytes) sub_6BAA20
// int sub_6BAA20(int a1);
// [0x6baa50] (46 bytes) sub_6BAA50
// 0x6baa50 sub_6BAA50
// [0x6baa80] (49 bytes) sub_6BAA80
// 0x6baa80 sub_6BAA80
// [0x6baac0] (7 bytes) sub_6BAAC0
// int sub_6BAAC0(int a1, hkpEntity *a2);
// [0x6baad0] (42 bytes) sub_6BAAD0
// int sub_6BAAD0(hkpUnaryAction *a1, hkpEntity *a2);
// [0x6bab00] (42 bytes) sub_6BAB00
// void sub_6BAB00(uint32_t *a1);
// [0x6bab30] (42 bytes) sub_6BAB30
// void sub_6BAB30(uint32_t *a1);
// [0x6bab60] (42 bytes) sub_6BAB60
// void sub_6BAB60(uint32_t *a1);
// [0x6bab90] (42 bytes) sub_6BAB90
// void sub_6BAB90(uint32_t *a1);
// [0x6babc0] (42 bytes) sub_6BABC0
// void sub_6BABC0(uint32_t *a1);
// [0x6babf0] (42 bytes) sub_6BABF0
// void sub_6BABF0(uint32_t *a1);
// [0x6bac20] (7 bytes) sub_6BAC20
// int sub_6BAC20(int a1);
// [0x6bac30] (51 bytes) sub_6BAC30
// void sub_6BAC30(hkpUnaryAction *a1);
// [0x6bac70] (43 bytes) sub_6BAC70
// int sub_6BAC70(int a1);
// [0x6baca0] (102 bytes) sub_6BACA0
// uint32_t *sub_6BACA0(uint32_t *a1, int a2, int a3);
// [0x6bad10] (102 bytes) sub_6BAD10
// int sub_6BAD10(int a1, int a2, int a3);
// [0x6bad80] (51 bytes) sub_6BAD80
// int sub_6BAD80(int a1, int a2);
// [0x6badc0] (92 bytes) sub_6BADC0
// int *sub_6BADC0(int *a1, int a2);
// [0x6bae20] (15 bytes) sub_6BAE20
// int sub_6BAE20(uint32_t *a1);
// [0x6bae30] (7 bytes) sub_6BAE30
// int sub_6BAE30(int a1);
// [0x6bae40] (142 bytes) sub_6BAE40
// void sub_6BAE40(int *a1);
// [0x6baed0] (42 bytes) sub_6BAED0
// void sub_6BAED0(uint32_t *a1);
// [0x6baf00] (89 bytes) sub_6BAF00
// int sub_6BAF00(hkpAction *a1);
// [0x6baf60] (146 bytes) sub_6BAF60
// int sub_6BAF60(int a1, int a2, int a3, int a4);
// [0x6bb000] (146 bytes) sub_6BB000
// int sub_6BB000(int a1, int a2, int a3, int a4);
// [0x6bb0a0] (146 bytes) sub_6BB0A0
// int sub_6BB0A0(int a1, int a2, int a3, int a4);
// [0x6bb140] (146 bytes) sub_6BB140
// int sub_6BB140(int a1, int a2, int a3, int a4);
// [0x6bb1e0] (146 bytes) sub_6BB1E0
// int sub_6BB1E0(int a1, int a2, int a3, int a4);
// [0x6bb280] (146 bytes) sub_6BB280
// int sub_6BB280(int a1, int a2, int a3, int a4);
// [0x6bb320] (7 bytes) sub_6BB320
// hkpAction *PhysicsHavokBuoyancyAction::addToWorld_thunk(int a1, int a2);
// [0x6bb330] (65 bytes) sub_6BB330
// hkpAction *PhysicsHavokBuoyancyAction::addToWorld(hkpAction *a1, int a2);
// [0x6bb380] (7 bytes) sub_6BB380
// int sub_6BB380(int a1, int a2);
// [0x6bb390] (65 bytes) sub_6BB390
// hkpAction *sub_6BB390(hkpAction *a1, int a2);
// [0x6bb3e0] (269 bytes) sub_6BB3E0
// int sub_6BB3E0(int a1, int a2, int a3, int a4);
// [0x6bb4f0] (261 bytes) sub_6BB4F0
// int sub_6BB4F0(int a1, int a2, int a3, int a4);
// [0x6bb600] (15 bytes) sub_6BB600
// int sub_6BB600(uint32_t *a1, int a2);
// [0x6bb610] (234 bytes) sub_6BB610
// int sub_6BB610(uint32_t *a1, int a2);
// [0x6bb700] (102 bytes) sub_6BB700
// int sub_6BB700(hkpAction *a1);
// [0x6bb770] (59 bytes) sub_6BB770
// hkpEntity *sub_6BB770(int a1);
// [0x6bb7b0] (60 bytes) sub_6BB7B0
// hkpEntity *sub_6BB7B0(int a1, hkpWorld *a2);
// [0x6bb7f0] (105 bytes) sub_6BB7F0
// int sub_6BB7F0(uint32_t *a1);
// [0x6bb860] (357 bytes) sub_6BB860
// int sub_6BB860(int a1, int a2, int a3, float *a4);
// [0x6bb9d0] (306 bytes) sub_6BB9D0
// void sub_6BB9D0(int a1, int a2, int a3, int a4);
// [0x6bbb10] (15 bytes) sub_6BBB10
// int sub_6BBB10(uint32_t *a1, int a2);
// [0x6bbb20] (247 bytes) sub_6BBB20
// int sub_6BBB20(long double a1, uint32_t *a2, int a3);
// [0x6bbc20] (64 bytes) sub_6BBC20
// void sub_6BBC20(uint32_t *a1);
// [0x6bbc60] (7 bytes) sub_6BBC60
// int sub_6BBC60(int a1);
// [0x6bbc70] (128 bytes) sub_6BBC70
// int sub_6BBC70(hkpUnaryAction *a1);
// [0x6bbcf0] (105 bytes) sub_6BBCF0
// int sub_6BBCF0(int a1);
// [0x6bbd60] (162 bytes) sub_6BBD60
// hkpUnaryAction *sub_6BBD60(int a1, hkpEntity ***a2);
// [0x6bbe10] (183 bytes) sub_6BBE10
// int sub_6BBE10(uint32_t *a1, uint32_t *a2, uint32_t *a3);
// [0x6bbed0] (15 bytes) sub_6BBED0
// int sub_6BBED0(uint32_t *a1);
// [0x6bbee0] (7 bytes) sub_6BBEE0
// int sub_6BBEE0(int a1);
// [0x6bbef0] (181 bytes) sub_6BBEF0
// int sub_6BBEF0(int *a1);
// [0x6bbfb0] (130 bytes) sub_6BBFB0
// int sub_6BBFB0(uint32_t *a1, int a2, int a3, int a4);
// [0x6bc040] (130 bytes) sub_6BC040
// int sub_6BC040(uint32_t *a1, int a2, int a3, int a4);
// [0x6bc0d0] (130 bytes) sub_6BC0D0
// int sub_6BC0D0(uint32_t *a1, int a2, int a3, int a4);
// [0x6bc160] (1442 bytes) sub_6BC160
// int sub_6BC160( float *a1, float a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int64_t a30, float a31, float a32, float a33, int a34, float a35, float a36, float a37, int a38, float a39, float a40, float a41, float a42, float a43, float a44, float a45, float a46);
// [0x6bc710] (183 bytes) sub_6BC710
// int sub_6BC710(uint32_t *a1, uint32_t *a2, uint32_t *a3);
// [0x6bc7d0] (183 bytes) sub_6BC7D0
// int sub_6BC7D0(uint32_t *a1, uint32_t *a2, uint32_t *a3);
// [0x6bc890] (183 bytes) sub_6BC890
// int sub_6BC890(uint32_t *a1, uint32_t *a2, uint32_t *a3);
// [0x6bc950] (183 bytes) sub_6BC950
// int sub_6BC950(uint32_t *a1, uint32_t *a2, uint32_t *a3);
// [0x6bca10] (723 bytes) sub_6BCA10
// int sub_6BCA10(int a1, float a2, uint32_t *a3, int a4, int a5);
// [0x6bccf0] (112 bytes) sub_6BCCF0
// int sub_6BCCF0(uint32_t *a1);
// [0x6bcd60] (112 bytes) sub_6BCD60
// int sub_6BCD60(uint32_t *a1);
// [0x6bcdd0] (206 bytes) sub_6BCDD0
// __m128 sub_6BCDD0(int a1);
// [0x6bcea0] (7 bytes) sub_6BCEA0
// int PhysicsHavokBuoyancyAction::removeReference_thunk(int a1);
// [0x6bceb0] (87 bytes) sub_6BCEB0
// int PhysicsHavokBuoyancyAction::removeReference(int a1);
// [0x6bcf10] (15 bytes) sub_6BCF10
// int sub_6BCF10(uint32_t *a1);
// [0x6bcf20] (122 bytes) sub_6BCF20
// int sub_6BCF20(uint32_t *a1);
// [0x6bcfa0] (15 bytes) sub_6BCFA0
// int sub_6BCFA0(uint32_t *a1);
// [0x6bcfb0] (114 bytes) sub_6BCFB0
// int sub_6BCFB0(int a1);
// [0x6bd030] (15 bytes) sub_6BD030
// int sub_6BD030(uint32_t *a1);
// [0x6bd040] (122 bytes) sub_6BD040
// int sub_6BD040(int a1);
// [0x6bd0c0] (15 bytes) sub_6BD0C0
// int sub_6BD0C0(uint32_t *a1);
// [0x6bd0d0] (178 bytes) sub_6BD0D0
// void sub_6BD0D0(int *a1);
// [0x6bd190] (15 bytes) sub_6BD190
// int sub_6BD190(uint32_t *a1);
// [0x6bd1a0] (218 bytes) sub_6BD1A0
// int sub_6BD1A0(int *a1);
// [0x6bd280] (15 bytes) sub_6BD280
// int sub_6BD280(uint32_t *a1);
// [0x6bd290] (7 bytes) sub_6BD290
// int sub_6BD290(int a1);
// [0x6bd2a0] (218 bytes) sub_6BD2A0
// void sub_6BD2A0(int *a1);
// [0x6bd380] (15 bytes) sub_6BD380
// int sub_6BD380(uint32_t *a1);
// [0x6bd390] (7 bytes) sub_6BD390
// int sub_6BD390(int a1);
// [0x6bd3a0] (258 bytes) sub_6BD3A0
// int sub_6BD3A0(int *a1);
// [0x6bd4b0] (15 bytes) sub_6BD4B0
// int sub_6BD4B0(uint32_t *a1);
// [0x6bd4c0] (7 bytes) sub_6BD4C0
// int sub_6BD4C0(int a1);
// [0x6bd4d0] (194 bytes) sub_6BD4D0
// void sub_6BD4D0(int *a1);
// [0x6bd5a0] (15 bytes) sub_6BD5A0
// int sub_6BD5A0(uint32_t *a1);
// [0x6bd5b0] (7 bytes) sub_6BD5B0
// int sub_6BD5B0(int a1);
// [0x6bd5c0] (234 bytes) sub_6BD5C0
// int sub_6BD5C0(int *a1);
// [0x6bd6b0] (219 bytes) sub_6BD6B0
// int sub_6BD6B0(int result, float *a2);
// [0x6bd790] (2624 bytes) sub_6BD790
// int sub_6BD790(int a1, int a2, int a3, float *a4);
// [0x6be1d0] (902 bytes) sub_6BE1D0
// int sub_6BE1D0(int a1, int a2, int a3, float *a4);
// [0x6be560] (902 bytes) sub_6BE560
// int sub_6BE560(int a1, int a2, int a3, float *a4);
// [0x6be8f0] (400 bytes) sub_6BE8F0
// int sub_6BE8F0(int a1, uint32_t *a2, float *a3, float *a4);
// [0x6bea80] (1469 bytes) sub_6BEA80
// int sub_6BEA80(uint32_t *a1, int a2, int a3, int a4);
// [0x6bf040] (8355 bytes) sub_6BF040
// int PhysicsHavokBuoyancyAction::applyAction( long double a1, int a2, int a3, const hkMatrix3f *a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, float a18, float a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, int a53, int a54, int a55, int a56, float a57, float a58, float a59, float a60, float a61, float a62, float a63, float a64);
// [0x6c10f0] (15 bytes) sub_6C10F0
// int sub_6C10F0(uint32_t *a1, int a2);
// [0x6c1100] (665 bytes) sub_6C1100
// int sub_6C1100(uint32_t *a1, int a2);
// [0x6c13a0] (15 bytes) sub_6C13A0
// int sub_6C13A0(uint32_t *a1, int a2);
// [0x6c13b0] (460 bytes) sub_6C13B0
// 0x6c13b0 sub_6C13B0
// [0x6c1580] (31 bytes) sub_6C1580
// uint32_t *sub_6C1580(uint32_t *a1);
// [0x6c15c0] (57 bytes) sub_6C15C0
// int sub_6C15C0(int a1);
// [0x6c16c0] (45 bytes) sub_6C16C0
// uint32_t *sub_6C16C0(uint32_t *a1);
// [0x6c1750] (34 bytes) sub_6C1750
// uint32_t *sub_6C1750(uint32_t *a1, int a2);
// [0x6c1780] (62 bytes) sub_6C1780
// uint32_t *sub_6C1780(uint32_t *a1);
// [0x6c1820] (72 bytes) sub_6C1820
// uint32_t *sub_6C1820(uint32_t *a1);
// [0x6c1870] (108 bytes) sub_6C1870
// uint32_t *sub_6C1870(uint32_t *a1, uint32_t *a2);
// [0x6c18e0] (90 bytes) sub_6C18E0
// int sub_6C18E0(int a1, int a2, int a3);
// [0x6c1940] (14 bytes) sub_6C1940
// int sub_6C1940(int a1, char a2);
// [0x6c1990] (520 bytes) sub_6C1990
// int (**sub_6C1990(int a1))(int);
// [0x6c1bf0] (55 bytes) sub_6C1BF0
// uint32_t *sub_6C1BF0(uint32_t *a1);
// [0x6c1c30] (92 bytes) sub_6C1C30
// uint32_t *sub_6C1C30(uint32_t *a1, uint32_t *a2);
// [0x6c1c90] (45 bytes) sub_6C1C90
// uint32_t *sub_6C1C90(uint32_t *a1);
// [0x6c1d20] (96 bytes) sub_6C1D20
// uint32_t *sub_6C1D20(uint32_t *a1, uint32_t *a2);
// [0x6c1d80] (1093 bytes) sub_6C1D80
// int64_t sub_6C1D80(int64_t a1);
// [0x6c21d0] (1441 bytes) sub_6C21D0
// void sub_6C21D0(int a1, int a2, int a3, float *a4);
// [0x6c2780] (3212 bytes) sub_6C2780
// int *sub_6C2780(int a1, int a2, int a3, float *a4);
// [0x6c3410] (3364 bytes) sub_6C3410
// int *sub_6C3410(int a1, int a2, int a3, float *a4);
// [0x6c4140] (24 bytes) sub_6C4140
// uint32_t *sub_6C4140(uint32_t *a1);
// [0x6c4160] (24 bytes) sub_6C4160
// uint32_t *sub_6C4160(uint32_t *a1);
// [0x6c4180] (254 bytes) sub_6C4180
// int sub_6C4180(int a1, int a2);
// [0x6c4280] (24 bytes) sub_6C4280
// uint32_t *sub_6C4280(uint32_t *a1);
// [0x6c42a0] (78 bytes) sub_6C42A0
// uint32_t *sub_6C42A0(uint32_t *a1, uint32_t *a2);
// [0x6c42f0] (61 bytes) sub_6C42F0
// uint32_t *sub_6C42F0(uint32_t *a1, uint32_t *a2);
// [0x6c4330] (43 bytes) sub_6C4330
// uint32_t *sub_6C4330(uint32_t *a1, int a2, int a3);
// [0x6c4360] (392 bytes) sub_6C4360
// int (**sub_6C4360(int a1))(int);
// [0x6c4530] (44 bytes) sub_6C4530
// uint32_t *sub_6C4530(uint32_t *a1);
// [0x6c4560] (74 bytes) sub_6C4560
// uint32_t *sub_6C4560(uint32_t *a1, uint32_t *a2);
// [0x6c45b0] (24 bytes) sub_6C45B0
// uint32_t *sub_6C45B0(uint32_t *a1);
// [0x6c45d0] (35 bytes) sub_6C45D0
// int sub_6C45D0(int a1);
// [0x6c4600] (80 bytes) sub_6C4600
// int64_t sub_6C4600(int64_t a1, float a2);
// [0x6c4650] (159 bytes) sub_6C4650
// int sub_6C4650(int a1, char a2, float a3, int a4, float a5);
// [0x6c46f0] (216 bytes) sub_6C46F0
// uint32_t *sub_6C46F0(uint32_t *a1, uint32_t *a2);
// [0x6c47d0] (24 bytes) sub_6C47D0
// uint32_t *sub_6C47D0(uint32_t *a1);
// [0x6c47f0] (78 bytes) sub_6C47F0
// uint32_t *sub_6C47F0(uint32_t *a1, uint32_t *a2);
// [0x6c4880] (43 bytes) sub_6C4880
// uint32_t *sub_6C4880(uint32_t *a1, int a2, int a3);
// [0x6c48b0] (416 bytes) sub_6C48B0
// int (**sub_6C48B0(int a1))(int);
// [0x6c4ab0] (44 bytes) sub_6C4AB0
// uint32_t *sub_6C4AB0(uint32_t *a1);
// [0x6c4ae0] (74 bytes) sub_6C4AE0
// uint32_t *sub_6C4AE0(uint32_t *a1, uint32_t *a2);
// [0x6c4b30] (43 bytes) sub_6C4B30
// uint32_t *sub_6C4B30(uint32_t *a1, int a2, int a3);
// [0x6c4b60] (12 bytes) sub_6C4B60
// int sub_6C4B60(int a1);
// [0x6c4b80] (296 bytes) sub_6C4B80
// int sub_6C4B80(int a1);
// [0x6c4cb0] (44 bytes) sub_6C4CB0
// uint32_t *sub_6C4CB0(uint32_t *a1);
// [0x6c4ce0] (66 bytes) sub_6C4CE0
// uint32_t *sub_6C4CE0(uint32_t *a1, uint32_t *a2);
// [0x6c4d30] (194 bytes) sub_6C4D30
// unsigned int sub_6C4D30(int a1);
// [0x6c4e00] (53 bytes) sub_6C4E00
// int sub_6C4E00(int a1);
// [0x6c4e40] (69 bytes) sub_6C4E40
// int sub_6C4E40(int a1, int a2);
// [0x6c4ea0] (43 bytes) sub_6C4EA0
// uint32_t *sub_6C4EA0(uint32_t *a1, int a2, int a3);
// [0x6c4ed0] (768 bytes) sub_6C4ED0
// int (**sub_6C4ED0(int a1))(int);
// [0x6c51d0] (44 bytes) sub_6C51D0
// uint32_t *sub_6C51D0(uint32_t *a1);
// [0x6c5200] (74 bytes) sub_6C5200
// uint32_t *sub_6C5200(uint32_t *a1, uint32_t *a2);
// [0x6c5590] (153 bytes) sub_6C5590
// int sub_6C5590(int a1, hkMemoryAllocator *a2);
// [0x6c5630] (482 bytes) sub_6C5630
// int *sub_6C5630(int *a1, int a2, int a3, int a4);
// [0x6c5820] (112 bytes) sub_6C5820
// int sub_6C5820(int *a1, int a2, int a3);
// [0x6c6960] (1486 bytes) sub_6C6960
// int sub_6C6960(uint32_t *a1, hkGeometry *a2);
// [0x6c6f30] (8866 bytes) sub_6C6F30
// unsigned int hkpStaticGeometryUtil::createCompressedMeshShape( int a1, unsigned int a2, hkQsTransformf *a3, float *a4, float *a5, uint32_t *a6, uint8_t *a7, int a8);
// [0x6c9ec0] (3283 bytes) sub_6C9EC0
// int sub_6C9EC0( uint32_t *a1, uint32_t *a2, __m128 a3, __m128 a4, float *a5, int a6);
// [0x6caba0] (498 bytes) sub_6CABA0
// int sub_6CABA0(__m128 a1, __m128 a2, hkpWorld *a3, float *a4, int a5);
// [0x6cada0] (60 bytes) sub_6CADA0
// uint32_t *sub_6CADA0(uint32_t *a1);
// [0x6cade0] (134 bytes) sub_6CADE0
// int sub_6CADE0(int *a1, int *a2, int a3);
// [0x6cae70] (160 bytes) sub_6CAE70
// int (**sub_6CAE70(uint32_t *a1, int *a2))(int);
// [0x6caf10] (202 bytes) sub_6CAF10
// int *sub_6CAF10(int *a1, int *a2);
// [0x6cafe0] (131 bytes) sub_6CAFE0
// int sub_6CAFE0(int *a1, int *a2, int a3);
// [0x6cb070] (151 bytes) sub_6CB070
// int (**sub_6CB070(uint32_t *a1, int *a2))(int);
// [0x6cb110] (194 bytes) sub_6CB110
// int *sub_6CB110(int *a1, int *a2);
// [0x6cb1e0] (95 bytes) sub_6CB1E0
// int sub_6CB1E0(int *a1, int *a2);
// [0x6cb240] (112 bytes) sub_6CB240
// int (**sub_6CB240(int *a1, int *a2))(int);
// [0x6cb2b0] (170 bytes) sub_6CB2B0
// int *sub_6CB2B0(int *a1, int *a2);
// [0x6cb360] (112 bytes) sub_6CB360
// int sub_6CB360(hkpUnaryAction *a1, hkpEntity *a2, int a3);
// [0x6cb3d0] (88 bytes) sub_6CB3D0
// int (**sub_6CB3D0(uint32_t *a1, int a2))(int);
// [0x6cb430] (1339 bytes) sub_6CB430
// int sub_6CB430(hkpUnaryAction *a1, int a2, int a3);
// [0x6cb970] (64 bytes) sub_6CB970
// int (**sub_6CB970(uint32_t *a1, int *a2))(int);
// [0x6cb9b0] (145 bytes) sub_6CB9B0
// int sub_6CB9B0(int *a1, int *a2);
// [0x6cba50] (165 bytes) sub_6CBA50
// int (**sub_6CBA50(int *a1, int *a2))(int);
// [0x6cbb00] (126 bytes) sub_6CBB00
// int *sub_6CBB00(int *a1, int *a2);
// [0x6cbb80] (2802 bytes) sub_6CBB80
// int sub_6CBB80(int a1, float *a2, float *a3, float *a4);
// [0x6cc680] (95 bytes) sub_6CC680
// uint32_t *sub_6CC680(uint32_t *result, uint32_t *a2);
// [0x6cc6e0] (172 bytes) sub_6CC6E0
// int sub_6CC6E0(int a1, int a2);
// [0x6cc790] (259 bytes) sub_6CC790
// int sub_6CC790(int a1, int a2);
// [0x6cc8a0] (278 bytes) sub_6CC8A0
// int sub_6CC8A0(int a1, int a2);
// [0x6cc9c0] (291 bytes) sub_6CC9C0
// int sub_6CC9C0(int a1, int a2);
// [0x6ccaf0] (239 bytes) sub_6CCAF0
// int sub_6CCAF0(int a1, int a2);
// [0x6ccbe0] (480 bytes) sub_6CCBE0
// int sub_6CCBE0(int a1, int a2);
// [0x6ccdc0] (433 bytes) sub_6CCDC0
// int sub_6CCDC0(int a1, int a2);
// [0x6ccf80] (317 bytes) sub_6CCF80
// int sub_6CCF80(int a1, int a2);
// [0x6cd0c0] (480 bytes) sub_6CD0C0
// int sub_6CD0C0(int a1, int a2);
// [0x6cd2a0] (11252 bytes) sub_6CD2A0
// int *sub_6CD2A0(int a1, int a2, int a3, float *a4);
// [0x6cfea0] (9193 bytes) sub_6CFEA0
// int *sub_6CFEA0(int a1, int a2, int a3, float *a4);
// [0x6d2290] (24 bytes) sub_6D2290
// uint32_t *sub_6D2290(uint32_t *a1);
// [0x6d22b0] (24 bytes) sub_6D22B0
// uint32_t *sub_6D22B0(uint32_t *a1);
// [0x6d22d0] (24 bytes) sub_6D22D0
// uint32_t *sub_6D22D0(uint32_t *a1);
// [0x6d22f0] (12 bytes) sub_6D22F0
// int sub_6D22F0();
// [0x6d2308] (1 bytes) nullsub_158
// void nullsub_158();
// [0x6d2310] (12 bytes) sub_6D2310
// int sub_6D2310();
// [0x6d2320] (12 bytes) sub_6D2320
// int sub_6D2320();
// [0x6d2330] (12 bytes) sub_6D2330
// int sub_6D2330();
// [0x6d2340] (24 bytes) sub_6D2340
// uint32_t *sub_6D2340(uint32_t *a1);
// [0x6d2360] (24 bytes) sub_6D2360
// uint32_t *sub_6D2360(uint32_t *a1);
// [0x6d2380] (24 bytes) sub_6D2380
// uint32_t *sub_6D2380(uint32_t *a1);
// [0x6d23a0] (12 bytes) sub_6D23A0
// int sub_6D23A0();
// [0x6d23b0] (12 bytes) sub_6D23B0
// int sub_6D23B0();
// [0x6d23c0] (24 bytes) sub_6D23C0
// uint32_t *sub_6D23C0(uint32_t *a1);
// [0x6d23e0] (24 bytes) sub_6D23E0
// uint32_t *sub_6D23E0(uint32_t *a1);
// [0x6d2400] (12 bytes) sub_6D2400
// int sub_6D2400();
// [0x6d2410] (12 bytes) sub_6D2410
// int sub_6D2410();
// [0x6d2420] (24 bytes) sub_6D2420
// uint32_t *sub_6D2420(uint32_t *a1);
// [0x6d2440] (24 bytes) sub_6D2440
// uint32_t *sub_6D2440(uint32_t *a1);
// [0x6d2460] (24 bytes) sub_6D2460
// uint32_t *sub_6D2460(uint32_t *a1);
// [0x6d2480] (24 bytes) sub_6D2480
// uint32_t *sub_6D2480(uint32_t *a1);
// [0x6d24a0] (18 bytes) sub_6D24A0
// int sub_6D24A0(uint32_t *a1);
// [0x6d24c0] (11 bytes) sub_6D24C0
// int sub_6D24C0(int a1);
// [0x6d24d0] (18 bytes) sub_6D24D0
// int sub_6D24D0(uint32_t *a1);
// [0x6d24f0] (7 bytes) sub_6D24F0
// int sub_6D24F0(int a1);
// [0x6d2500] (9 bytes) sub_6D2500
// int sub_6D2500();
// [0x6d2510] (7 bytes) sub_6D2510
// int sub_6D2510(int a1);
// [0x6d2520] (16 bytes) sub_6D2520
// int sub_6D2520(int a1);
// [0x6d2530] (18 bytes) sub_6D2530
// int sub_6D2530(uint32_t *a1);
// [0x6d2550] (11 bytes) sub_6D2550
// int sub_6D2550(int a1);
// [0x6d2560] (18 bytes) sub_6D2560
// int sub_6D2560(uint32_t *a1);
// [0x6d2580] (7 bytes) sub_6D2580
// int sub_6D2580(int a1);
// [0x6d2590] (9 bytes) sub_6D2590
// int sub_6D2590();
// [0x6d25a0] (7 bytes) sub_6D25A0
// int sub_6D25A0(int a1);
// [0x6d25b0] (13 bytes) sub_6D25B0
// int sub_6D25B0(int a1);
// [0x6d25c0] (18 bytes) sub_6D25C0
// int sub_6D25C0(uint32_t *a1);
// [0x6d25e0] (11 bytes) sub_6D25E0
// int sub_6D25E0(int a1);
// [0x6d25f0] (12 bytes) sub_6D25F0
// int sub_6D25F0(int a1);
// [0x6d2600] (18 bytes) sub_6D2600
// int sub_6D2600(uint32_t *a1);
// [0x6d2620] (11 bytes) sub_6D2620
// int sub_6D2620(int a1);
// [0x6d2630] (18 bytes) sub_6D2630
// int sub_6D2630(uint32_t *a1);
// [0x6d2650] (7 bytes) sub_6D2650
// int sub_6D2650(int a1);
// [0x6d2660] (9 bytes) sub_6D2660
// int sub_6D2660();
// [0x6d2670] (7 bytes) sub_6D2670
// int sub_6D2670(int a1);
// [0x6d2680] (33 bytes) sub_6D2680
// int sub_6D2680(int a1);
// [0x6d26b0] (115 bytes) sub_6D26B0
// int (**sub_6D26B0(uint32_t *a1))(int);
// [0x6d2730] (36 bytes) sub_6D2730
// uint32_t *sub_6D2730(uint32_t *a1);
// [0x6d2760] (24 bytes) sub_6D2760
// uint32_t *sub_6D2760(uint32_t *a1);
// [0x6d2780] (24 bytes) sub_6D2780
// uint32_t *sub_6D2780(uint32_t *a1);
// [0x6d27a0] (24 bytes) sub_6D27A0
// uint32_t *sub_6D27A0(uint32_t *a1);
// [0x6d27c0] (24 bytes) sub_6D27C0
// uint32_t *sub_6D27C0(uint32_t *a1);
// [0x6d27e0] (24 bytes) sub_6D27E0
// uint32_t *sub_6D27E0(uint32_t *a1);
// [0x6d2800] (24 bytes) sub_6D2800
// uint32_t *sub_6D2800(uint32_t *a1);
// [0x6d2820] (24 bytes) sub_6D2820
// uint32_t *sub_6D2820(uint32_t *a1);
// [0x6d2840] (24 bytes) sub_6D2840
// uint32_t *sub_6D2840(uint32_t *a1);
// [0x6d2860] (24 bytes) sub_6D2860
// uint32_t *sub_6D2860(uint32_t *a1);
// [0x6d2880] (24 bytes) sub_6D2880
// uint32_t *sub_6D2880(uint32_t *a1);
// [0x6d28a0] (24 bytes) sub_6D28A0
// uint32_t *sub_6D28A0(uint32_t *a1);
// [0x6d28c0] (24 bytes) sub_6D28C0
// uint32_t *sub_6D28C0(uint32_t *a1);
// [0x6d28e0] (24 bytes) sub_6D28E0
// uint32_t *sub_6D28E0(uint32_t *a1);
// [0x6d2900] (24 bytes) sub_6D2900
// uint32_t *sub_6D2900(uint32_t *a1);
// [0x6d2920] (24 bytes) sub_6D2920
// uint32_t *sub_6D2920(uint32_t *a1);
// [0x6d2940] (24 bytes) sub_6D2940
// uint32_t *sub_6D2940(uint32_t *a1);
// [0x6d2960] (42 bytes) sub_6D2960
// void sub_6D2960(uint32_t *a1);
// [0x6d2990] (42 bytes) sub_6D2990
// void sub_6D2990(uint32_t *a1);
// [0x6d29c0] (42 bytes) sub_6D29C0
// void sub_6D29C0(uint32_t *a1);
// [0x6d29f0] (42 bytes) sub_6D29F0
// void sub_6D29F0(uint32_t *a1);
// [0x6d2a20] (42 bytes) sub_6D2A20
// void sub_6D2A20(uint32_t *a1);
// [0x6d2a50] (42 bytes) sub_6D2A50
// void sub_6D2A50(uint32_t *a1);
// [0x6d2a80] (42 bytes) sub_6D2A80
// void sub_6D2A80(uint32_t *a1);
// [0x6d2ab0] (42 bytes) sub_6D2AB0
// void sub_6D2AB0(uint32_t *a1);
// [0x6d2ae0] (42 bytes) sub_6D2AE0
// void sub_6D2AE0(uint32_t *a1);
// [0x6d2b10] (42 bytes) sub_6D2B10
// void sub_6D2B10(uint32_t *a1);
// [0x6d2b40] (42 bytes) sub_6D2B40
// void sub_6D2B40(uint32_t *a1);
// [0x6d2b70] (42 bytes) sub_6D2B70
// void sub_6D2B70(uint32_t *a1);
// [0x6d2ba0] (42 bytes) sub_6D2BA0
// void sub_6D2BA0(uint32_t *a1);
// [0x6d2bd0] (42 bytes) sub_6D2BD0
// void sub_6D2BD0(uint32_t *a1);
// [0x6d2c00] (42 bytes) sub_6D2C00
// void sub_6D2C00(uint32_t *a1);
// [0x6d2c30] (42 bytes) sub_6D2C30
// void sub_6D2C30(uint32_t *a1);
// [0x6d2c60] (42 bytes) sub_6D2C60
// void sub_6D2C60(uint32_t *a1);
// [0x6d2c90] (42 bytes) sub_6D2C90
// void sub_6D2C90(uint32_t *a1);
// [0x6d2cc0] (42 bytes) sub_6D2CC0
// void sub_6D2CC0(uint32_t *a1);
// [0x6d2cf0] (42 bytes) sub_6D2CF0
// void sub_6D2CF0(uint32_t *a1);
// [0x6d2d20] (42 bytes) sub_6D2D20
// void sub_6D2D20(uint32_t *a1);
// [0x6d2d50] (42 bytes) sub_6D2D50
// void sub_6D2D50(uint32_t *a1);
// [0x6d2d80] (42 bytes) sub_6D2D80
// void sub_6D2D80(uint32_t *a1);
// [0x6d2db0] (42 bytes) sub_6D2DB0
// void sub_6D2DB0(uint32_t *a1);
// [0x6d2de0] (42 bytes) sub_6D2DE0
// void sub_6D2DE0(uint32_t *a1);
// [0x6d2e10] (42 bytes) sub_6D2E10
// void sub_6D2E10(uint32_t *a1);
// [0x6d2e40] (42 bytes) sub_6D2E40
// void sub_6D2E40(uint32_t *a1);
// [0x6d2e70] (54 bytes) sub_6D2E70
// void sub_6D2E70(uint32_t *a1);
// [0x6d2eb0] (51 bytes) sub_6D2EB0
// char *sub_6D2EB0(long double a1, int a2, int a3);
// [0x6d2ef0] (51 bytes) sub_6D2EF0
// int sub_6D2EF0(int a1, unsigned int a2);
// [0x6d2f30] (15 bytes) sub_6D2F30
// int sub_6D2F30(uint32_t *a1, char a2);
// [0x6d2f40] (7 bytes) sub_6D2F40
// int sub_6D2F40(int a1, char a2);
// [0x6d2f50] (53 bytes) sub_6D2F50
// int sub_6D2F50(int a1, char a2);
// [0x6d2f90] (57 bytes) sub_6D2F90
// int sub_6D2F90(long double a1, int a2, char a3, int a4);
// [0x6d2fd0] (51 bytes) sub_6D2FD0
// int sub_6D2FD0(int a1, int a2);
// [0x6d3010] (43 bytes) sub_6D3010
// int sub_6D3010(int a1);
// [0x6d3040] (18 bytes) sub_6D3040
// int sub_6D3040(uint32_t *a1);
// [0x6d3060] (43 bytes) sub_6D3060
// int sub_6D3060(int a1);
// [0x6d3090] (18 bytes) sub_6D3090
// int sub_6D3090(uint32_t *a1, int a2, char a3);
// [0x6d30b0] (7 bytes) sub_6D30B0
// int sub_6D30B0(int a1, int a2, char a3);
// [0x6d30c0] (61 bytes) sub_6D30C0
// int sub_6D30C0(int a1, float *a2);
// [0x6d3100] (59 bytes) sub_6D3100
// int sub_6D3100(int a1, int a2, int a3);
// [0x6d3140] (100 bytes) sub_6D3140
// int sub_6D3140(int a1, int a2, int a3);
// [0x6d31b0] (49 bytes) sub_6D31B0
// int sub_6D31B0(int a1, int a2);
// [0x6d31f0] (57 bytes) sub_6D31F0
// int sub_6D31F0(int a1, int a2, float a3);
// [0x6d3230] (163 bytes) sub_6D3230
// int PhysicsHavokBuoyancyAction::clone();
// [0x6d32e0] (128 bytes) sub_6D32E0
// double *sub_6D32E0(double *a1, int a2, int a3);
// [0x6d3360] (111 bytes) sub_6D3360
// int sub_6D3360(int a1);
// [0x6d33d0] (178 bytes) sub_6D33D0
// int sub_6D33D0(int a1);
// [0x6d3490] (10 bytes) sub_6D3490
// int sub_6D3490(int a1);
// [0x6d34a0] (171 bytes) sub_6D34A0
// void sub_6D34A0(hkpUnaryAction *a1);
// [0x6d3550] (156 bytes) sub_6D3550
// int (**sub_6D3550(uint32_t *a1))(int);
// [0x6d35f0] (7 bytes) sub_6D35F0
// int sub_6D35F0(int a1);
// [0x6d3600] (228 bytes) sub_6D3600
// int PhysicsHavokBuoyancyAction::~PhysicsHavokBuoyancyAction(hkpUnaryAction *a1);
// [0x6d36f0] (213 bytes) sub_6D36F0
// int sub_6D36F0(int a1);
// [0x6d37d0] (201 bytes) sub_6D37D0
// int sub_6D37D0(int a1, int a2, int a3);
// [0x6d38a0] (201 bytes) sub_6D38A0
// int sub_6D38A0(int a1, int a2, int a3);
// [0x6d3970] (673 bytes) sub_6D3970
// float *sub_6D3970(float *a1, float *a2, float *a3);
