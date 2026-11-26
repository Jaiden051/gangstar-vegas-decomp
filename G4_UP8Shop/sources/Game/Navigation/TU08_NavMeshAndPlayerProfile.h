#pragma once
// ============================================================================
// TU08_NavMeshAndPlayerProfile.h
// Complete Translation Unit [08/41]
// Binary Range in lib/x86/libGangstar4.so: 0x6d3c20 .. 0x7148e0 (259 KB)
// Total Decompiled Functions in TU: 597 (100% coverage)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// Function Table in Translation Unit:
// [0x6d3c20] (243 bytes) sub_6D3C20
// int sub_6D3C20();
// [0x6d3d20] (24 bytes) sub_6D3D20
// uint32_t *sub_6D3D20(uint32_t *a1);
// [0x6d3d40] (12 bytes) sub_6D3D40
// int sub_6D3D40(int a1);
// [0x6d3d50] (16 bytes) sub_6D3D50
// int sub_6D3D50(int a1);
// [0x6d3d60] (21 bytes) sub_6D3D60
// bool sub_6D3D60(int a1, uint16_t a2);
// [0x6d3d80] (72 bytes) sub_6D3D80
// int sub_6D3D80(int a1, int16_t a2, char a3);
// [0x6d3dd0] (70 bytes) sub_6D3DD0
// int16_t sub_6D3DD0(int a1, int16_t a2, int16_t a3);
// [0x6d3e20] (13 bytes) sub_6D3E20
// int sub_6D3E20(int a1);
// [0x6d3e30] (16 bytes) sub_6D3E30
// int sub_6D3E30(int a1, int a2);
// [0x6d3e40] (24 bytes) sub_6D3E40
// uint32_t *sub_6D3E40(uint32_t *a1);
// [0x6d3e60] (35 bytes) sub_6D3E60
// double *sub_6D3E60(double *a1);
// [0x6d3e98] (1 bytes) nullsub_159
// void nullsub_159();
// [0x6d3ea0] (60 bytes) sub_6D3EA0
// uint32_t *sub_6D3EA0(uint32_t *a1, int a2);
// [0x6d3ee0] (70 bytes) sub_6D3EE0
// int sub_6D3EE0(uint32_t *a1, int a2);
// [0x6d3f30] (14 bytes) sub_6D3F30
// int sub_6D3F30(int a1);
// [0x6d3f40] (75 bytes) sub_6D3F40
// int sub_6D3F40(uint32_t *a1, int a2);
// [0x6d3f90] (110 bytes) sub_6D3F90
// long double sub_6D3F90(int a1);
// [0x6d4000] (103 bytes) sub_6D4000
// long double sub_6D4000(int a1, int a2, int a3, int a4);
// [0x6d4070] (24 bytes) sub_6D4070
// uint32_t *sub_6D4070(uint32_t *a1);
// [0x6d4090] (12 bytes) sub_6D4090
// int sub_6D4090();
// [0x6d40a0] (12 bytes) sub_6D40A0
// int sub_6D40A0();
// [0x6d40b0] (12 bytes) sub_6D40B0
// int sub_6D40B0();
// [0x6d40c0] (12 bytes) sub_6D40C0
// int sub_6D40C0();
// [0x6d40d0] (12 bytes) sub_6D40D0
// int sub_6D40D0();
// [0x6d40e0] (14 bytes) sub_6D40E0
// int sub_6D40E0(int a1);
// [0x6d40f0] (12 bytes) sub_6D40F0
// int sub_6D40F0();
// [0x6d4100] (12 bytes) sub_6D4100
// int sub_6D4100();
// [0x6d4110] (18 bytes) sub_6D4110
// int sub_6D4110(int a1);
// [0x6d4130] (12 bytes) sub_6D4130
// int sub_6D4130();
// [0x6d4140] (12 bytes) sub_6D4140
// int sub_6D4140();
// [0x6d4150] (12 bytes) sub_6D4150
// int sub_6D4150();
// [0x6d4160] (12 bytes) sub_6D4160
// int sub_6D4160();
// [0x6d4170] (12 bytes) sub_6D4170
// int sub_6D4170();
// [0x6d4180] (12 bytes) sub_6D4180
// int sub_6D4180();
// [0x6d4190] (12 bytes) sub_6D4190
// int sub_6D4190();
// [0x6d41a0] (12 bytes) sub_6D41A0
// int sub_6D41A0();
// [0x6d41b0] (12 bytes) sub_6D41B0
// int sub_6D41B0();
// [0x6d41c0] (12 bytes) sub_6D41C0
// int sub_6D41C0();
// [0x6d41d0] (12 bytes) sub_6D41D0
// int sub_6D41D0();
// [0x6d41e8] (1 bytes) nullsub_160
// void nullsub_160();
// [0x6d41f8] (1 bytes) nullsub_161
// void nullsub_161();
// [0x6d4200] (12 bytes) sub_6D4200
// int sub_6D4200();
// [0x6d4218] (1 bytes) nullsub_162
// void nullsub_162();
// [0x6d4228] (1 bytes) nullsub_163
// void nullsub_163();
// [0x6d4230] (252 bytes) sub_6D4230
// float *sub_6D4230(float *a1);
// [0x6d4330] (27 bytes) sub_6D4330
// bool sub_6D4330(int a1);
// [0x6d4350] (12 bytes) sub_6D4350
// int sub_6D4350();
// [0x6d4368] (1 bytes) nullsub_164
// void nullsub_164();
// [0x6d4378] (1 bytes) nullsub_165
// void nullsub_165();
// [0x6d4380] (122 bytes) sub_6D4380
// float *sub_6D4380(float *a1);
// [0x6d4400] (27 bytes) sub_6D4400
// bool sub_6D4400(int a1);
// [0x6d4420] (12 bytes) sub_6D4420
// int sub_6D4420();
// [0x6d4430] (13 bytes) sub_6D4430
// int sub_6D4430(int a1, int a2, int a3, int a4, int a5);
// [0x6d4448] (1 bytes) nullsub_166
// void nullsub_166();
// [0x6d4458] (1 bytes) nullsub_167
// void nullsub_167();
// [0x6d4460] (12 bytes) sub_6D4460
// int sub_6D4460();
// [0x6d4478] (1 bytes) nullsub_168
// void nullsub_168();
// [0x6d4488] (1 bytes) nullsub_169
// void nullsub_169();
// [0x6d4490] (146 bytes) sub_6D4490
// float *sub_6D4490(float *a1);
// [0x6d4530] (27 bytes) sub_6D4530
// bool sub_6D4530(int a1);
// [0x6d4550] (12 bytes) sub_6D4550
// int sub_6D4550();
// [0x6d4568] (1 bytes) nullsub_170
// void nullsub_170();
// [0x6d4578] (1 bytes) nullsub_171
// void nullsub_171();
// [0x6d4580] (276 bytes) sub_6D4580
// float *sub_6D4580(float *a1);
// [0x6d46a0] (27 bytes) sub_6D46A0
// bool sub_6D46A0(int a1);
// [0x6d46c0] (12 bytes) sub_6D46C0
// int sub_6D46C0();
// [0x6d46d8] (1 bytes) nullsub_172
// void nullsub_172();
// [0x6d46e8] (1 bytes) nullsub_173
// void nullsub_173();
// [0x6d46f0] (16 bytes) sub_6D46F0
// uint32_t *sub_6D46F0(int a1, int a2, int a3, uint32_t *a4);
// [0x6d4700] (12 bytes) sub_6D4700
// int sub_6D4700();
// [0x6d4718] (1 bytes) nullsub_174
// void nullsub_174();
// [0x6d4728] (1 bytes) nullsub_175
// void nullsub_175();
// [0x6d4738] (1 bytes) nullsub_176
// void nullsub_176();
// [0x6d4740] (12 bytes) sub_6D4740
// int sub_6D4740();
// [0x6d4758] (1 bytes) nullsub_177
// void nullsub_177();
// [0x6d4768] (1 bytes) nullsub_178
// void nullsub_178();
// [0x6d4770] (118 bytes) sub_6D4770
// float *sub_6D4770(float *a1);
// [0x6d47f0] (27 bytes) sub_6D47F0
// bool sub_6D47F0(int a1);
// [0x6d4810] (12 bytes) sub_6D4810
// int sub_6D4810();
// [0x6d4828] (1 bytes) nullsub_179
// void nullsub_179();
// [0x6d4838] (1 bytes) nullsub_180
// void nullsub_180();
// [0x6d4848] (1 bytes) nullsub_181
// void nullsub_181();
// [0x6d4850] (12 bytes) sub_6D4850
// int sub_6D4850();
// [0x6d4868] (1 bytes) nullsub_182
// void nullsub_182();
// [0x6d4878] (1 bytes) nullsub_183
// void nullsub_183();
// [0x6d4880] (182 bytes) sub_6D4880
// float *sub_6D4880(float *a1);
// [0x6d4940] (27 bytes) sub_6D4940
// bool sub_6D4940(int a1);
// [0x6d4960] (12 bytes) sub_6D4960
// int sub_6D4960();
// [0x6d4970] (54 bytes) sub_6D4970
// uint32_t *sub_6D4970(int a1, int a2, uint32_t *a3, uint32_t *a4);
// [0x6d49b0] (12 bytes) sub_6D49B0
// int sub_6D49B0();
// [0x6d49c0] (54 bytes) sub_6D49C0
// uint32_t *sub_6D49C0(int a1, int a2, uint32_t *a3, uint32_t *a4);
// [0x6d4a00] (12 bytes) sub_6D4A00
// int sub_6D4A00();
// [0x6d4a18] (1 bytes) nullsub_184
// void nullsub_184();
// [0x6d4a28] (1 bytes) nullsub_185
// void nullsub_185();
// [0x6d4a30] (9 bytes) sub_6D4A30
// void sub_6D4A30();
// [0x6d4a40] (27 bytes) sub_6D4A40
// bool sub_6D4A40(int a1);
// [0x6d4a60] (67 bytes) sub_6D4A60
// int (**sub_6D4A60(uint32_t *a1))(int);
// [0x6d4ab0] (42 bytes) sub_6D4AB0
// void sub_6D4AB0(uint32_t *a1);
// [0x6d4ae0] (42 bytes) sub_6D4AE0
// void sub_6D4AE0(uint32_t *a1);
// [0x6d4b10] (42 bytes) sub_6D4B10
// void sub_6D4B10(uint32_t *a1);
// [0x6d4b40] (71 bytes) sub_6D4B40
// int (**sub_6D4B40(int a1))(int);
// [0x6d4b90] (67 bytes) sub_6D4B90
// int (**sub_6D4B90(uint32_t *a1))(int);
// [0x6d4be0] (7 bytes) sub_6D4BE0
// int sub_6D4BE0(int a1);
// [0x6d4bf0] (127 bytes) sub_6D4BF0
// int (**sub_6D4BF0(int a1))(int);
// [0x6d4c70] (144 bytes) sub_6D4C70
// void sub_6D4C70(int a1);
// [0x6d4d00] (46 bytes) sub_6D4D00
// int sub_6D4D00(int a1, int a2);
// [0x6d4d30] (53 bytes) sub_6D4D30
// int sub_6D4D30(int a1, int a2);
// [0x6d4d70] (34 bytes) sub_6D4D70
// int sub_6D4D70();
// [0x6d4da0] (34 bytes) sub_6D4DA0
// int sub_6D4DA0();
// [0x6d4dd0] (34 bytes) sub_6D4DD0
// int sub_6D4DD0();
// [0x6d4e00] (50 bytes) sub_6D4E00
// int sub_6D4E00(uint32_t *a1, uint32_t *a2, uint32_t *a3);
// [0x6d4e40] (50 bytes) sub_6D4E40
// int sub_6D4E40(uint32_t *a1, uint32_t *a2, uint32_t *a3);
// [0x6d4e80] (50 bytes) sub_6D4E80
// int sub_6D4E80(uint32_t *a1, uint32_t *a2, uint32_t *a3);
// [0x6d4ec0] (58 bytes) sub_6D4EC0
// int sub_6D4EC0(uint32_t *a1, int a2, int a3, int a4);
// [0x6d4f00] (42 bytes) sub_6D4F00
// uint32_t *sub_6D4F00(uint32_t *a1);
// [0x6d4f30] (42 bytes) sub_6D4F30
// uint32_t *sub_6D4F30(uint32_t *a1);
// [0x6d4f60] (42 bytes) sub_6D4F60
// uint32_t *sub_6D4F60(uint32_t *a1);
// [0x6d4f90] (213 bytes) sub_6D4F90
// int sub_6D4F90(int a1, int a2, int a3, float *a4);
// [0x6d5070] (90 bytes) sub_6D5070
// int sub_6D5070(uint32_t *a1, int a2);
// [0x6d50d0] (74 bytes) sub_6D50D0
// int sub_6D50D0(int a1, int a2);
// [0x6d5120] (41 bytes) sub_6D5120
// int sub_6D5120(int a1, int16_t a2);
// [0x6d5150] (138 bytes) sub_6D5150
// int sub_6D5150(int a1, int a2, int a3, int a4);
// [0x6d51e0] (138 bytes) sub_6D51E0
// int sub_6D51E0(int a1, int a2, int a3, int a4);
// [0x6d5270] (138 bytes) sub_6D5270
// int sub_6D5270(int a1, int a2, int a3, int a4);
// [0x6d5300] (138 bytes) sub_6D5300
// int sub_6D5300(int a1, int a2, int a3, int a4);
// [0x6d5390] (138 bytes) sub_6D5390
// int sub_6D5390(int a1, int a2, int a3, int a4);
// [0x6d5420] (138 bytes) sub_6D5420
// int sub_6D5420(int a1, int a2, int a3, int a4);
// [0x6d54b0] (138 bytes) sub_6D54B0
// int sub_6D54B0(int a1, int a2, int a3, int a4);
// [0x6d5540] (138 bytes) sub_6D5540
// int sub_6D5540(int a1, int a2, int a3, int a4);
// [0x6d55d0] (138 bytes) sub_6D55D0
// int sub_6D55D0(int a1, int a2, int a3, int a4);
// [0x6d5660] (138 bytes) sub_6D5660
// int sub_6D5660(int a1, int a2, int a3, int a4);
// [0x6d56f0] (138 bytes) sub_6D56F0
// int sub_6D56F0(int a1, int a2, int a3, int a4);
// [0x6d5780] (269 bytes) sub_6D5780
// int sub_6D5780(int a1, int a2, int a3, int a4);
// [0x6d5890] (213 bytes) sub_6D5890
// int sub_6D5890(int a1, int a2, int a3, int a4);
// [0x6d5970] (57 bytes) sub_6D5970
// int sub_6D5970(uint32_t *a1);
// [0x6d59b0] (70 bytes) sub_6D59B0
// int sub_6D59B0(int a1);
// [0x6d5a00] (205 bytes) sub_6D5A00
// int sub_6D5A00(int a1);
// [0x6d5ad0] (218 bytes) sub_6D5AD0
// uint32_t *sub_6D5AD0(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5);
// [0x6d5bb0] (506 bytes) sub_6D5BB0
// int sub_6D5BB0(int a1, char *a2, int *a3);
// [0x6d5db0] (428 bytes) sub_6D5DB0
// void sub_6D5DB0(int a1, uint32_t *a2, int *a3);
// [0x6d5f60] (64 bytes) sub_6D5F60
// void sub_6D5F60(uint32_t *a1);
// [0x6d5fa0] (64 bytes) sub_6D5FA0
// void sub_6D5FA0(uint32_t *a1);
// [0x6d5fe0] (64 bytes) sub_6D5FE0
// void sub_6D5FE0(uint32_t *a1);
// [0x6d6020] (75 bytes) sub_6D6020
// void sub_6D6020(uint32_t *a1);
// [0x6d6070] (79 bytes) sub_6D6070
// void sub_6D6070(void **a1);
// [0x6d60c0] (304 bytes) sub_6D60C0
// char sub_6D60C0(int a1, int a2);
// [0x6d61f0] (75 bytes) sub_6D61F0
// void sub_6D61F0(char *a1);
// [0x6d6240] (7 bytes) sub_6D6240
// int sub_6D6240(int a1);
// [0x6d6250] (135 bytes) sub_6D6250
// void sub_6D6250(uint32_t *a1);
// [0x6d62e0] (97 bytes) sub_6D62E0
// int sub_6D62E0(int a1, int a2);
// [0x6d6350] (1412 bytes) sub_6D6350
// float *sub_6D6350(int a1, float *a2, float a3, int *a4, float *a5, int a6, int a7);
// [0x6d68e0] (53 bytes) sub_6D68E0
// int sub_6D68E0(int a1, int a2, int a3, int a4);
// [0x6d6920] (606 bytes) sub_6D6920
// int sub_6D6920(int a1, uint32_t *a2);
// [0x6d6b80] (218 bytes) sub_6D6B80
// int sub_6D6B80(uint32_t *a1, int a2, float *a3, float *a4);
// [0x6d6c60] (218 bytes) sub_6D6C60
// int sub_6D6C60(uint32_t *a1, int a2, float *a3, float *a4);
// [0x6d6d40] (96 bytes) sub_6D6D40
// int sub_6D6D40(uint32_t *a1, int a2);
// [0x6d6da0] (97 bytes) sub_6D6DA0
// int sub_6D6DA0(int a1, int a2);
// [0x6d6e10] (97 bytes) sub_6D6E10
// int sub_6D6E10(int a1, int a2);
// [0x6d6e80] (97 bytes) sub_6D6E80
// int sub_6D6E80(int a1, int a2);
// [0x6d6ef0] (97 bytes) sub_6D6EF0
// int sub_6D6EF0(int a1, int a2);
// [0x6d6f60] (93 bytes) sub_6D6F60
// int sub_6D6F60(int a1, int a2);
// [0x6d6fc0] (93 bytes) sub_6D6FC0
// int sub_6D6FC0(int a1, int a2);
// [0x6d7020] (107 bytes) sub_6D7020
// int sub_6D7020(uint32_t *a1, int a2);
// [0x6d7090] (96 bytes) sub_6D7090
// int sub_6D7090(uint32_t *a1, int a2);
// [0x6d70f0] (85 bytes) sub_6D70F0
// int sub_6D70F0(uint32_t *a1, int a2);
// [0x6d7150] (107 bytes) sub_6D7150
// void sub_6D7150(int a1, int a2);
// [0x6d71c0] (85 bytes) sub_6D71C0
// void sub_6D71C0(int a1, int a2);
// [0x6d7220] (85 bytes) sub_6D7220
// int sub_6D7220(int a1, int a2);
// [0x6d7280] (189 bytes) sub_6D7280
// int sub_6D7280(int a1, int a2);
// [0x6d7340] (118 bytes) sub_6D7340
// int sub_6D7340(int a1, int a2);
// [0x6d73c0] (196 bytes) sub_6D73C0
// void sub_6D73C0(int a1, int a2);
// [0x6d7490] (253 bytes) sub_6D7490
// int sub_6D7490(int a1, int a2);
// [0x6d7590] (120 bytes) sub_6D7590
// int sub_6D7590(uint32_t *a1, int a2);
// [0x6d7610] (1154 bytes) sub_6D7610
// int sub_6D7610(int a1, int a2, int a3, float *a4);
// [0x6d7aa0] (2764 bytes) sub_6D7AA0
// int sub_6D7AA0(int a1, int a2, int a3, float *a4);
// [0x6d8570] (113 bytes) sub_6D8570
// int sub_6D8570(uint32_t *a1, int a2);
// [0x6d85f0] (113 bytes) sub_6D85F0
// int sub_6D85F0(uint32_t *a1, int a2);
// [0x6d8670] (113 bytes) sub_6D8670
// int sub_6D8670(uint32_t *a1, int a2);
// [0x6d86f0] (113 bytes) sub_6D86F0
// int sub_6D86F0(uint32_t *a1, int a2);
// [0x6d8770] (113 bytes) sub_6D8770
// int sub_6D8770(uint32_t *a1, int a2);
// [0x6d87f0] (113 bytes) sub_6D87F0
// int sub_6D87F0(uint32_t *a1, int a2);
// [0x6d8870] (113 bytes) sub_6D8870
// int sub_6D8870(uint32_t *a1, int a2);
// [0x6d88f0] (135 bytes) sub_6D88F0
// int sub_6D88F0(uint32_t *a1, int a2);
// [0x6d8980] (120 bytes) sub_6D8980
// int sub_6D8980(uint32_t *a1, int a2);
// [0x6d8a00] (105 bytes) sub_6D8A00
// int sub_6D8A00(uint32_t *a1, int a2);
// [0x6d8a70] (165 bytes) sub_6D8A70
// uint32_t *sub_6D8A70(uint32_t *a1, int a2);
// [0x6d8b20] (135 bytes) sub_6D8B20
// int sub_6D8B20(uint32_t *a1, int a2);
// [0x6d8bb0] (105 bytes) sub_6D8BB0
// int sub_6D8BB0(uint32_t *a1, int a2);
// [0x6d8c20] (106 bytes) sub_6D8C20
// int sub_6D8C20(int a1, int a2);
// [0x6d8c90] (134 bytes) sub_6D8C90
// int sub_6D8C90(uint32_t *a1, int a2);
// [0x6d8d20] (249 bytes) sub_6D8D20
// int sub_6D8D20(int a1, int a2);
// [0x6d8e20] (152 bytes) sub_6D8E20
// int sub_6D8E20(int a1, int a2);
// [0x6d8ec0] (548 bytes) sub_6D8EC0
// int sub_6D8EC0(uint32_t *a1, const char **a2);
// [0x6d90f0] (152 bytes) sub_6D90F0
// void sub_6D90F0(void *a1);
// [0x6d9190] (5620 bytes) sub_6D9190
// char sub_6D9190(int a1, float *a2, float a3, int *a4, float *a5, int a6, int a7);
// [0x6da790] (5463 bytes) sub_6DA790
// int sub_6DA790(int a1, int a2, int a3, int a4);
// [0x6dbcf0] (2676 bytes) sub_6DBCF0
// int *sub_6DBCF0(int a1, int a2, int a3, float *a4);
// [0x6dc770] (1873 bytes) sub_6DC770
// void sub_6DC770(int a1, int a2, int a3, float *a4);
// [0x6dced0] (1223 bytes) sub_6DCED0
// int sub_6DCED0(int a1, int a2, int a3, float *a4);
// [0x6dd3a0] (329 bytes) sub_6DD3A0
// int sub_6DD3A0(int a1, uint32_t *a2, unsigned int *a3);
// [0x6dd4f0] (1935 bytes) sub_6DD4F0
// void sub_6DD4F0(int a1, int a2, int a3, float *a4);
// [0x6ddc80] (367 bytes) sub_6DDC80
// long double sub_6DDC80(int a1);
// [0x6dddf0] (315 bytes) sub_6DDDF0
// int sub_6DDDF0(int a1, int a2);
// [0x6ddf30] (891 bytes) sub_6DDF30
// uint16_t *sub_6DDF30(int a1, float *a2, int *a3);
// [0x6de2b0] (1135 bytes) sub_6DE2B0
// int sub_6DE2B0(uint32_t *a1, int a2);
// [0x6de720] (1711 bytes) sub_6DE720
// int sub_6DE720(float *a1, char *a2, int a3);
// [0x6dedd0] (57 bytes) sub_6DEDD0
// int sub_6DEDD0(int a1);
// [0x6dee10] (57 bytes) sub_6DEE10
// int sub_6DEE10(int a1);
// [0x6dee80] (2114 bytes) sub_6DEE80
// int sub_6DEE80(int a1, uint32_t *a2, int a3, int a4);
// [0x6df6d0] (917 bytes) sub_6DF6D0
// int sub_6DF6D0(int a1, int a2);
// [0x6dfa98] (1 bytes) nullsub_186
// void nullsub_186();
// [0x6dfaa0] (93 bytes) sub_6DFAA0
// int sub_6DFAA0(int a1);
// [0x6dfb00] (556 bytes) sub_6DFB00
// int sub_6DFB00(uint32_t *a1, const char **a2);
// [0x6dfd30] (115 bytes) sub_6DFD30
// int sub_6DFD30(uint32_t *a1, int a2);
// [0x6dfdb0] (114 bytes) sub_6DFDB0
// int sub_6DFDB0(uint32_t *a1, int a2);
// [0x6dfe30] (214 bytes) sub_6DFE30
// int sub_6DFE30(int a1, float *a2, float *a3);
// [0x6dff10] (71 bytes) sub_6DFF10
// int sub_6DFF10(int a1, int a2);
// [0x6dff60] (257 bytes) sub_6DFF60
// int sub_6DFF60(int a1);
// [0x6e0070] (99 bytes) sub_6E0070
// unsigned int sub_6E0070(uint32_t *a1, int a2, char a3);
// [0x6e00e0] (158 bytes) sub_6E00E0
// int sub_6E00E0(int a1, int a2, int a3);
// [0x6e0180] (410 bytes) sub_6E0180
// int sub_6E0180(int a1, int a2, int a3);
// [0x6e0320] (1834 bytes) sub_6E0320
// int sub_6E0320(int a1, int a2, uint8_t *a3, int a4, uint32_t *a5, uint32_t *a6, int *a7, float *a8, int64_t a9);
// [0x6e0a50] (86 bytes) sub_6E0A50
// int sub_6E0A50(int a1, float *a2, float *a3, float *a4);
// [0x6e0ae0] (71 bytes) sub_6E0AE0
// unsigned int sub_6E0AE0(int a1, char a2);
// [0x6e0b30] (126 bytes) sub_6E0B30
// int sub_6E0B30(int a1);
// [0x6e0bb0] (12 bytes) sub_6E0BB0
// int sub_6E0BB0(int a1);
// [0x6e0bc0] (1609 bytes) sub_6E0BC0
// float *sub_6E0BC0(float *a1, int a2);
// [0x6e1210] (1897 bytes) sub_6E1210
// float *sub_6E1210(float *a1, int a2, int a3);
// [0x6e1980] (1138 bytes) sub_6E1980
// long double sub_6E1980(int a1, int a2, int a3, int a4);
// [0x6e1e00] (534 bytes) sub_6E1E00
// int sub_6E1E00(int a1, int a2);
// [0x6e2020] (899 bytes) sub_6E2020
// uint16_t *sub_6E2020(int a1, float *a2, int *a3);
// [0x6e23b0] (42 bytes) sub_6E23B0
// uint32_t *sub_6E23B0(uint32_t *a1);
// [0x6e23e0] (64 bytes) sub_6E23E0
// int sub_6E23E0(int a1);
// [0x6e2420] (40 bytes) sub_6E2420
// void sub_6E2420(void **a1);
// [0x6e2450] (1439 bytes) sub_6E2450
// int sub_6E2450(int a1, int **a2);
// [0x6e29f0] (1247 bytes) sub_6E29F0
// int sub_6E29F0(int a1, int a2);
// [0x6e2ed8] (1 bytes) nullsub_187
// void nullsub_187();
// [0x6e2ee0] (138 bytes) sub_6E2EE0
// uint32_t *sub_6E2EE0(uint32_t *a1);
// [0x6e2f70] (47 bytes) sub_6E2F70
// int sub_6E2F70(uint32_t *a1, int a2);
// [0x6e2fa0] (1605 bytes) sub_6E2FA0
// int sub_6E2FA0(int a1, float a2, float *a3);
// [0x6e35f0] (102 bytes) sub_6E35F0
// uint32_t *sub_6E35F0(uint32_t *a1);
// [0x6e3660] (350 bytes) sub_6E3660
// int sub_6E3660(int a1, float *a2, float *a3, int a4, char a5, char a6);
// [0x6e37c0] (60 bytes) sub_6E37C0
// int sub_6E37C0(uint8_t **a1);
// [0x6e3800] (94 bytes) sub_6E3800
// long double sub_6E3800(int a1, int a2);
// [0x6e3860] (76 bytes) sub_6E3860
// int sub_6E3860(uint32_t *a1, char a2);
// [0x6e38b0] (73 bytes) sub_6E38B0
// float *sub_6E38B0(float *a1, int a2);
// [0x6e3900] (68 bytes) sub_6E3900
// int sub_6E3900(int a1, int a2);
// [0x6e3950] (117 bytes) sub_6E3950
// float *sub_6E3950(float *a1, int a2);
// [0x6e39d0] (89 bytes) sub_6E39D0
// int sub_6E39D0(int a1, int a2);
// [0x6e3a30] (598 bytes) sub_6E3A30
// float *sub_6E3A30(float *a1, int a2, int a3, float *a4);
// [0x6e3c90] (52 bytes) sub_6E3C90
// uint32_t *sub_6E3C90(uint32_t *a1, int a2);
// [0x6e3cd0] (55 bytes) sub_6E3CD0
// long double sub_6E3CD0(int a1, int a2);
// [0x6e3d10] (255 bytes) sub_6E3D10
// long double sub_6E3D10(int a1, int a2);
// [0x6e3e10] (38 bytes) sub_6E3E10
// long double sub_6E3E10(uint32_t *a1, int a2);
// [0x6e3e40] (16 bytes) sub_6E3E40
// long double sub_6E3E40(int a1, int a2);
// [0x6e3e50] (415 bytes) sub_6E3E50
// int sub_6E3E50(int a1, int a2, int a3, int a4, int a5);
// [0x6e3ff0] (156 bytes) sub_6E3FF0
// int sub_6E3FF0(uint8_t **a1);
// [0x6e4090] (145 bytes) sub_6E4090
// int sub_6E4090(uint8_t **a1);
// [0x6e4130] (1185 bytes) sub_6E4130
// int sub_6E4130(float *a1, float *a2, char a3);
// [0x6e45e0] (31 bytes) sub_6E45E0
// uint32_t *sub_6E45E0(uint32_t *a1);
// [0x6e4600] (36 bytes) sub_6E4600
// uint32_t *sub_6E4600(uint32_t *a1);
// [0x6e4630] (14 bytes) sub_6E4630
// int sub_6E4630(int a1, int a2);
// [0x6e4640] (111 bytes) sub_6E4640
// bool sub_6E4640(int a1, int a2);
// [0x6e46b0] (146 bytes) sub_6E46B0
// bool sub_6E46B0(int a1, int a2);
// [0x6e4750] (111 bytes) sub_6E4750
// bool sub_6E4750(int a1, int a2);
// [0x6e47c0] (1212 bytes) sub_6E47C0
// int sub_6E47C0(int a1, int a2);
// [0x6e4c80] (238 bytes) sub_6E4C80
// int sub_6E4C80(int a1, int a2);
// [0x6e4d70] (413 bytes) sub_6E4D70
// int sub_6E4D70(int a1, int a2);
// [0x6e4f10] (508 bytes) sub_6E4F10
// int sub_6E4F10(int a1, int a2);
// [0x6e5110] (811 bytes) sub_6E5110
// int sub_6E5110(int a1, int a2);
// [0x6e5460] (66 bytes) sub_6E5460
// int sub_6E5460(int a1);
// [0x6e54b0] (60 bytes) sub_6E54B0
// int sub_6E54B0(uint32_t *a1);
// [0x6e54f0] (22 bytes) sub_6E54F0
// const char *sub_6E54F0();
// [0x6e5510] (87 bytes) sub_6E5510
// int sub_6E5510(int a1, char *a2);
// [0x6e5570] (53 bytes) sub_6E5570
// uint8_t *sub_6E5570(int a1, char *haystack);
// [0x6e55b0] (23 bytes) sub_6E55B0
// void sub_6E55B0();
// [0x6e55d0] (188 bytes) sub_6E55D0
// int sub_6E55D0(int a1);
// [0x6e5690] (182 bytes) sub_6E5690
// void sub_6E5690(int a1);
// [0x6e5770] (22 bytes) sub_6E5770
// int sub_6E5770(int a1, char a2);
// [0x6e5790] (110 bytes) sub_6E5790
// bool sub_6E5790(int a1);
// [0x6e5800] (389 bytes) sub_6E5800
// int sub_6E5800(int a1);
// [0x6e5990] (408 bytes) sub_6E5990
// int sub_6E5990(int a1);
// [0x6e5b30] (528 bytes) sub_6E5B30
// char sub_6E5B30(int a1);
// [0x6e5d40] (470 bytes) sub_6E5D40
// char sub_6E5D40(int a1);
// [0x6e5f20] (77 bytes) sub_6E5F20
// bool sub_6E5F20(int a1);
// [0x6e5f70] (144 bytes) sub_6E5F70
// int sub_6E5F70(int a1);
// [0x6e6000] (496 bytes) sub_6E6000
// int *sub_6E6000(int a1);
// [0x6e61f0] (269 bytes) sub_6E61F0
// uint32_t *sub_6E61F0(int a1);
// [0x6e6300] (382 bytes) sub_6E6300
// int sub_6E6300(int a1);
// [0x6e6480] (668 bytes) sub_6E6480
// int sub_6E6480(int a1, int a2);
// [0x6e6720] (89 bytes) sub_6E6720
// bool sub_6E6720(int a1);
// [0x6e6780] (803 bytes) sub_6E6780
// int sub_6E6780( int a1, int a2, int a3, int a4, int a5, int a6, int a7, int (**a8)(int), int a9, int a10, int a11, int a12, int a13, int a14, int a15, int (**a16)(int), int a17, int a18, int a19, int a20, int a21);
// [0x6e6ab0] (2029 bytes) sub_6E6AB0
// char *sub_6E6AB0(long double a1);
// [0x6e72a0] (177 bytes) sub_6E72A0
// int sub_6E72A0(int a1);
// [0x6e7360] (96 bytes) sub_6E7360
// int sub_6E7360(int a1, char *haystack);
// [0x6e74a0] (62 bytes) sub_6E74A0
// int sub_6E74A0();
// [0x6e74f0] (567 bytes) sub_6E74F0
// int sub_6E74F0(int a1);
// [0x6e7730] (13571 bytes) sub_6E7730
// int sub_6E7730(int a1, char *a2, Json::Value *a3);
// [0x6eb5f0] (3944 bytes) sub_6EB5F0
// int sub_6EB5F0(long double a1, int a2, Json::Value *a3, int a4);
// [0x6ec560] (631 bytes) sub_6EC560
// __time_t sub_6EC560(int a1, int a2);
// [0x6ec7e0] (430 bytes) sub_6EC7E0
// int sub_6EC7E0(int16_t a1, int a2);
// [0x6ec990] (546 bytes) sub_6EC990
// bool sub_6EC990(int a1, char *a2, uint32_t *a3);
// [0x6ecbc0] (552 bytes) sub_6ECBC0
// bool sub_6ECBC0(int a1, char *a2, uint32_t *a3);
// [0x6ecdf0] (70 bytes) sub_6ECDF0
// int sub_6ECDF0(int a1);
// [0x6ece40] (198 bytes) sub_6ECE40
// int sub_6ECE40(int a1, int a2, int a3);
// [0x6ecf10] (105 bytes) sub_6ECF10
// int sub_6ECF10(int a1, int a2);
// [0x6ecf80] (1141 bytes) sub_6ECF80
// int sub_6ECF80(int a1, int a2);
// [0x6ed400] (597 bytes) sub_6ED400
// int sub_6ED400(int a1, int a2);
// [0x6ed660] (1230 bytes) sub_6ED660
// int sub_6ED660( int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int (**a32)(int), int a33, int a34, char a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, char a51);
// [0x6edb30] (505 bytes) sub_6EDB30
// int sub_6EDB30( int a1, int a2, int a3, int a4, int a5, int a6, int a7, int (**a8)(int), int a9, int a10, int a11, int a12);
// [0x6edd30] (254 bytes) sub_6EDD30
// int sub_6EDD30(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int (**a8)(int));
// [0x6ede30] (66 bytes) sub_6EDE30
// int sub_6EDE30(int a1, int a2);
// [0x6ede80] (421 bytes) sub_6EDE80
// int sub_6EDE80( int a1, int a2, int a3, int a4, int a5, int a6, int a7, int (**a8)(int), int a9, int a10, int a11, int a12);
// [0x6ee030] (584 bytes) sub_6EE030
// int sub_6EE030(int a1, int a2);
// [0x6ee280] (146 bytes) sub_6EE280
// int sub_6EE280(uint32_t *a1);
// [0x6ee320] (233 bytes) sub_6EE320
// int sub_6EE320(int a1, int a2);
// [0x6ee410] (713 bytes) sub_6EE410
// int sub_6EE410(int a1, char **a2, int a3);
// [0x6ee6e0] (157 bytes) sub_6EE6E0
// int (**sub_6EE6E0())(int);
// [0x6ee780] (145 bytes) sub_6EE780
// int (**sub_6EE780(int a1))(int);
// [0x6ee820] (24 bytes) sub_6EE820
// uint32_t *sub_6EE820(uint32_t *a1);
// [0x6ee840] (24 bytes) sub_6EE840
// uint32_t *sub_6EE840(uint32_t *a1);
// [0x6ee860] (198 bytes) sub_6EE860
// uint32_t *sub_6EE860(uint32_t *a1, uint32_t *a2);
// [0x6ee930] (67 bytes) sub_6EE930
// int sub_6EE930(int a1);
// [0x6ee980] (24 bytes) sub_6EE980
// uint32_t *sub_6EE980(uint32_t *a1);
// [0x6ee9a0] (90 bytes) sub_6EE9A0
// uint32_t *sub_6EE9A0(uint32_t *a1, uint32_t *a2);
// [0x6eea00] (72 bytes) sub_6EEA00
// int (**sub_6EEA00(uint32_t *a1, int a2, int a3))(int);
// [0x6eea50] (146 bytes) sub_6EEA50
// int sub_6EEA50(int a1);
// [0x6eeaf0] (182 bytes) sub_6EEAF0
// int sub_6EEAF0(int a1, int a2);
// [0x6eebb0] (154 bytes) sub_6EEBB0
// int sub_6EEBB0(int a1, int a2);
// [0x6eecc0] (71 bytes) sub_6EECC0
// int (**sub_6EECC0(int a1))(int);
// [0x6eed10] (92 bytes) sub_6EED10
// int sub_6EED10(int a1, int a2);
// [0x6eed70] (24 bytes) sub_6EED70
// uint32_t *sub_6EED70(uint32_t *a1);
// [0x6eed90] (24 bytes) sub_6EED90
// uint32_t *sub_6EED90(uint32_t *a1);
// [0x6eedb0] (84 bytes) sub_6EEDB0
// uint32_t *sub_6EEDB0(uint32_t *a1, uint32_t *a2);
// [0x6eee10] (24 bytes) sub_6EEE10
// uint32_t *sub_6EEE10(uint32_t *a1);
// [0x6eee30] (144 bytes) sub_6EEE30
// uint32_t *sub_6EEE30(uint32_t *a1, uint32_t *a2);
// [0x6eeec0] (24 bytes) sub_6EEEC0
// uint32_t *sub_6EEEC0(uint32_t *a1);
// [0x6eeee0] (72 bytes) sub_6EEEE0
// int (**sub_6EEEE0(uint32_t *a1, int a2, int a3))(int);
// [0x6eef30] (146 bytes) sub_6EEF30
// int sub_6EEF30(int a1);
// [0x6eefd0] (154 bytes) sub_6EEFD0
// int sub_6EEFD0(int a1, int a2);
// [0x6ef070] (350 bytes) sub_6EF070
// uint32_t *sub_6EF070(int a1, int a2);
// [0x6ef1d0] (79 bytes) sub_6EF1D0
// int sub_6EF1D0(int a1);
// [0x6ef220] (80 bytes) sub_6EF220
// int sub_6EF220(int a1);
// [0x6ef270] (115 bytes) sub_6EF270
// int sub_6EF270(int a1, int a2);
// [0x6ef2f0] (24 bytes) sub_6EF2F0
// uint32_t *sub_6EF2F0(uint32_t *a1);
// [0x6ef310] (24 bytes) sub_6EF310
// uint32_t *sub_6EF310(uint32_t *a1);
// [0x6ef330] (72 bytes) sub_6EF330
// uint32_t *sub_6EF330(uint32_t *a1, uint32_t *a2);
// [0x6ef380] (24 bytes) sub_6EF380
// uint32_t *sub_6EF380(uint32_t *a1);
// [0x6ef3a0] (24 bytes) sub_6EF3A0
// uint32_t *sub_6EF3A0(uint32_t *a1);
// [0x6ef3c0] (126 bytes) sub_6EF3C0
// uint32_t *sub_6EF3C0(uint32_t *a1, uint32_t *a2);
// [0x6ef440] (72 bytes) sub_6EF440
// int (**sub_6EF440(uint32_t *a1, int a2, int a3))(int);
// [0x6ef490] (76 bytes) sub_6EF490
// int (**sub_6EF490(uint32_t *a1))(int);
// [0x6ef4e0] (84 bytes) sub_6EF4E0
// int (**sub_6EF4E0(uint32_t *a1, int a2))(int);
// [0x6ef540] (96 bytes) sub_6EF540
// int sub_6EF540(uint32_t *a1, int a2);
// [0x6ef5c0] (85 bytes) sub_6EF5C0
// int sub_6EF5C0(uint32_t *a1);
// [0x6ef620] (126 bytes) sub_6EF620
// int sub_6EF620(uint32_t *a1, uint32_t *a2);
// [0x6ef6a0] (45 bytes) sub_6EF6A0
// uint32_t *sub_6EF6A0(uint32_t *a1);
// [0x6ef730] (34 bytes) sub_6EF730
// uint32_t *sub_6EF730(uint32_t *a1, int a2);
// [0x6ef760] (3057 bytes) sub_6EF760
// int sub_6EF760(int a1, const char **a2, int a3);
// [0x6f0360] (3246 bytes) sub_6F0360
// int sub_6F0360(const char **a1, int a2);
// [0x6f1010] (270 bytes) sub_6F1010
// int sub_6F1010(int a1, int a2, int a3);
// [0x6f1120] (282 bytes) sub_6F1120
// int sub_6F1120( int a1, int a2, int a3, int a4, int a5, int a6, const char *a7, int (**a8)(int), int a9, int a10, int a11);
// [0x6f1240] (557 bytes) sub_6F1240
// int sub_6F1240(int a1, char *a2, int a3);
// [0x6f1470] (158 bytes) sub_6F1470
// int sub_6F1470( int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);
// [0x6f1510] (312 bytes) sub_6F1510
// unsigned int sub_6F1510(uint32_t *a1, float a2, float *a3);
// [0x6f1650] (599 bytes) sub_6F1650
// int sub_6F1650( uint8_t *a1, int a2, char a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19);
// [0x6f18b0] (246 bytes) sub_6F18B0
// bool sub_6F18B0(int a1);
// [0x6f19b0] (3650 bytes) sub_6F19B0
// bool sub_6F19B0(int a1, int a2);
// [0x6f2800] (432 bytes) sub_6F2800
// int sub_6F2800(int a1);
// [0x6f29b0] (2099 bytes) sub_6F29B0
// char sub_6F29B0(long double a1, int a2);
// [0x6f31f0] (161 bytes) sub_6F31F0
// int sub_6F31F0(long double a1, int a2, int a3);
// [0x6f32a0] (1037 bytes) sub_6F32A0
// int sub_6F32A0(long double a1, savemanager::SaveGameManager *a2);
// [0x6f36b0] (10046 bytes) sub_6F36B0
// bool sub_6F36B0(int a1);
// [0x6f5df0] (6605 bytes) sub_6F5DF0
// int sub_6F5DF0(int a1, char *a2);
// [0x6f77c0] (4331 bytes) sub_6F77C0
// int sub_6F77C0(int a1, char a2);
// [0x6f88b0] (405 bytes) sub_6F88B0
// int sub_6F88B0(uint32_t *a1, int a2, int a3, int a4, int a5, int a6, int a7, char *a8, char *a9, char *a10);
// [0x6f8a50] (981 bytes) sub_6F8A50
// void sub_6F8A50(int a1);
// [0x6f8e30] (333 bytes) sub_6F8E30
// int sub_6F8E30(uint32_t *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, char *a9, char *a10);
// [0x6f8f80] (2409 bytes) sub_6F8F80
// void sub_6F8F80(int a1);
// [0x6f98f0] (2609 bytes) sub_6F98F0
// int sub_6F98F0(int a1, int a2);
// [0x6fa330] (2210 bytes) sub_6FA330
// int sub_6FA330( int a1, int *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, uint16_t a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27);
// [0x6fabe0] (3206 bytes) sub_6FABE0
// int sub_6FABE0(int a1, glitch::scene::ISceneNode **a2);
// [0x6fb870] (1518 bytes) sub_6FB870
// void sub_6FB870(int *a1, const char *a2, int a3);
// [0x6fbe60] (3248 bytes) sub_6FBE60
// int sub_6FBE60(int a1, float *a2, float *a3, int *a4, int a5, int a6);
// [0x6fcb10] (181 bytes) sub_6FCB10
// int (**sub_6FCB10(int a1))(int);
// [0x6fcbd0] (189 bytes) sub_6FCBD0
// void sub_6FCBD0(char *a1);
// [0x6fcc90] (180 bytes) sub_6FCC90
// int *sub_6FCC90(int a1, int a2);
// [0x6fcd50] (441 bytes) sub_6FCD50
// int sub_6FCD50(int *a1);
// [0x6fcf10] (7 bytes) sub_6FCF10
// int sub_6FCF10(int a1);
// [0x6fcf20] (280 bytes) sub_6FCF20
// void sub_6FCF20(int a1);
// [0x6fd040] (7 bytes) sub_6FD040
// int sub_6FD040(int a1);
// [0x6fd050] (288 bytes) sub_6FD050
// void sub_6FD050(void *a1);
// [0x6fd170] (138 bytes) sub_6FD170
// int sub_6FD170(uint32_t *a1, int a2);
// [0x6fd200] (852 bytes) sub_6FD200
// void sub_6FD200(int a1, float *a2, float a3, int a4, float *a5, int a6, int a7);
// [0x6fd560] (137 bytes) sub_6FD560
// int sub_6FD560(int a1, int a2);
// [0x6fd5f0] (3015 bytes) sub_6FD5F0
// int sub_6FD5F0(int a1);
// [0x6fe1c0] (306 bytes) sub_6FE1C0
// int sub_6FE1C0(int a1, int a2);
// [0x6fe300] (5357 bytes) sub_6FE300
// int sub_6FE300(gaia::Gaia *a1, char a2);
// [0x6ff7f0] (470 bytes) sub_6FF7F0
// int sub_6FF7F0(int a1, char a2);
// [0x6ff9d0] (558 bytes) sub_6FF9D0
// char sub_6FF9D0(int a1, int a2);
// [0x6ffc00] (11469 bytes) sub_6FFC00
// __guard *sub_6FFC00(int a1, int a2);
// [0x7028d0] (3421 bytes) sub_7028D0
// int sub_7028D0(uint32_t *a1, char a2, char a3);
// [0x703630] (3564 bytes) sub_703630
// int sub_703630(uint32_t *a1, int a2);
// [0x704420] (23 bytes) sub_704420
// bool sub_704420(uint32_t *a1);
// [0x704440] (1566 bytes) sub_704440
// int sub_704440(uint32_t *a1, const char **a2);
// [0x704a60] (1630 bytes) sub_704A60
// uint32_t *sub_704A60(uint32_t *a1, const char **a2);
// [0x7050c0] (113 bytes) sub_7050C0
// uint32_t *sub_7050C0(uint32_t *a1, int a2);
// [0x705140] (112 bytes) sub_705140
// uint32_t *sub_705140(uint32_t *a1, int a2);
// [0x7051b0] (185 bytes) sub_7051B0
// void sub_7051B0(int a1);
// [0x705270] (193 bytes) sub_705270
// void sub_705270(void *a1);
// [0x705340] (1541 bytes) sub_705340
// uint32_t *sub_705340(uint32_t *a1, int a2, float *a3, float *a4, int *a5, float *a6, int a7, int a8);
// [0x705950] (1487 bytes) sub_705950
// uint32_t *sub_705950( uint32_t *a1, int a2, float *a3, float *a4, int *a5, float *a6, int a7, int a8);
// [0x705f20] (631 bytes) sub_705F20
// int sub_705F20( int a1, int a2, float *a3, uint32_t *a4, int a5, uint32_t *a6, int a7, uint8_t a8, int a9, float *a10, float *a11, int a12, int a13);
// [0x7061a0] (305 bytes) sub_7061A0
// float *sub_7061A0(int a1, float *a2, int a3, int a4, int a5);
// [0x7062e0] (5612 bytes) sub_7062E0
// int sub_7062E0(int a1);
// [0x7078d0] (319 bytes) sub_7078D0
// float *sub_7078D0(int a1);
// [0x707a10] (871 bytes) sub_707A10
// int sub_707A10(int a1, float *a2, float *a3, int a4, int a5);
// [0x707d80] (386 bytes) sub_707D80
// int sub_707D80(int a1, char *filename);
// [0x707f10] (468 bytes) sub_707F10
// int sub_707F10(int a1, float *a2, int a3, float *a4, char a5, int a6, int a7);
// [0x7080f0] (952 bytes) sub_7080F0
// int sub_7080F0( int a1, uint32_t *a2, float *a3, uint32_t *a4, int *a5, int a6, uint32_t *a7, int a8, uint8_t a9, int *a10, int a11, int a12);
// [0x7084b0] (1689 bytes) sub_7084B0
// int sub_7084B0(int a1, int a2, float a3, uint8_t *a4, unsigned int a5);
// [0x708b50] (1585 bytes) sub_708B50
// int sub_708B50(int a1, float *a2, float *a3, int a4, int a5);
// [0x709190] (9 bytes) sub_709190
// int sub_709190();
// [0x7091a0] (12 bytes) sub_7091A0
// int sub_7091A0();
// [0x7091b0] (28 bytes) sub_7091B0
// unsigned int sub_7091B0(int a1, int a2);
// [0x7091d0] (14 bytes) sub_7091D0
// bool sub_7091D0(int a1);
// [0x7091e0] (29 bytes) sub_7091E0
// int sub_7091E0(int a1);
// [0x709200] (28 bytes) sub_709200
// int sub_709200(int a1);
// [0x709220] (12 bytes) sub_709220
// int sub_709220();
// [0x709230] (27 bytes) sub_709230
// uint32_t *sub_709230(uint32_t *a1);
// [0x709250] (12 bytes) sub_709250
// int sub_709250(int a1);
// [0x709260] (12 bytes) sub_709260
// int sub_709260(int a1);
// [0x709270] (15 bytes) sub_709270
// bool sub_709270(int a1, int a2);
// [0x709280] (28 bytes) sub_709280
// int sub_709280(int64_t a1, char a2);
// [0x7092a0] (25 bytes) sub_7092A0
// int sub_7092A0(int a1, int a2, int a3);
// [0x7092c0] (24 bytes) sub_7092C0
// uint32_t *sub_7092C0(uint32_t *a1);
// [0x7092e0] (12 bytes) sub_7092E0
// int sub_7092E0();
// [0x7092f0] (12 bytes) sub_7092F0
// int sub_7092F0();
// [0x709308] (1 bytes) nullsub_188
// void nullsub_188();
// [0x709310] (27 bytes) sub_709310
// uint32_t *sub_709310(uint32_t *a1);
// [0x709330] (27 bytes) sub_709330
// uint32_t *sub_709330(uint32_t *a1);
// [0x709350] (24 bytes) sub_709350
// uint32_t *sub_709350(uint32_t *a1);
// [0x709370] (24 bytes) sub_709370
// uint32_t *sub_709370(uint32_t *a1);
// [0x709390] (24 bytes) sub_709390
// uint32_t *sub_709390(uint32_t *a1);
// [0x7093b0] (24 bytes) sub_7093B0
// uint32_t *sub_7093B0(uint32_t *a1);
// [0x7093d0] (12 bytes) sub_7093D0
// int sub_7093D0();
// [0x7093e8] (1 bytes) nullsub_189
// void nullsub_189();
// [0x7093f0] (12 bytes) sub_7093F0
// int sub_7093F0();
// [0x709400] (27 bytes) sub_709400
// uint32_t *sub_709400(uint32_t *a1);
// [0x709420] (27 bytes) sub_709420
// uint32_t *sub_709420(uint32_t *a1);
// [0x709440] (28 bytes) sub_709440
// int sub_709440(int a1);
// [0x709460] (24 bytes) sub_709460
// uint32_t *sub_709460(uint32_t *a1);
// [0x709480] (24 bytes) sub_709480
// uint32_t *sub_709480(uint32_t *a1);
// [0x7094a0] (24 bytes) sub_7094A0
// uint32_t *sub_7094A0(uint32_t *a1);
// [0x7094c0] (24 bytes) sub_7094C0
// uint32_t *sub_7094C0(uint32_t *a1);
// [0x7094e0] (24 bytes) sub_7094E0
// uint32_t *sub_7094E0(uint32_t *a1);
// [0x709500] (24 bytes) sub_709500
// uint32_t *sub_709500(uint32_t *a1);
// [0x709520] (24 bytes) sub_709520
// uint32_t *sub_709520(uint32_t *a1);
// [0x709540] (24 bytes) sub_709540
// uint32_t *sub_709540(uint32_t *a1);
// [0x709560] (24 bytes) sub_709560
// uint32_t *sub_709560(uint32_t *a1);
// [0x709580] (24 bytes) sub_709580
// uint32_t *sub_709580(uint32_t *a1);
// [0x7095a0] (24 bytes) sub_7095A0
// uint32_t *sub_7095A0(uint32_t *a1);
// [0x7095c0] (24 bytes) sub_7095C0
// uint32_t *sub_7095C0(uint32_t *a1);
// [0x7095e0] (24 bytes) sub_7095E0
// uint32_t *sub_7095E0(uint32_t *a1);
// [0x709600] (24 bytes) sub_709600
// uint32_t *sub_709600(uint32_t *a1);
// [0x709620] (12 bytes) sub_709620
// int sub_709620();
// [0x709630] (12 bytes) sub_709630
// int sub_709630();
// [0x709640] (27 bytes) sub_709640
// uint32_t *sub_709640(uint32_t *a1);
// [0x709660] (27 bytes) sub_709660
// uint32_t *sub_709660(uint32_t *a1);
// [0x709680] (27 bytes) sub_709680
// uint32_t *sub_709680(uint32_t *a1);
// [0x7096a0] (27 bytes) sub_7096A0
// uint32_t *sub_7096A0(uint32_t *a1);
// [0x7096c0] (27 bytes) sub_7096C0
// uint32_t *sub_7096C0(uint32_t *a1);
// [0x7096e0] (27 bytes) sub_7096E0
// uint32_t *sub_7096E0(uint32_t *a1);
// [0x709700] (27 bytes) sub_709700
// uint32_t *sub_709700(uint32_t *a1);
// [0x709720] (24 bytes) sub_709720
// uint32_t *sub_709720(uint32_t *a1);
// [0x709740] (42 bytes) sub_709740
// void sub_709740(uint32_t *a1);
// [0x709770] (42 bytes) sub_709770
// void sub_709770(uint32_t *a1);
// [0x7097a0] (42 bytes) sub_7097A0
// void sub_7097A0(uint32_t *a1);
// [0x7097d0] (42 bytes) sub_7097D0
// void sub_7097D0(uint32_t *a1);
// [0x709800] (42 bytes) sub_709800
// void sub_709800(uint32_t *a1);
// [0x709830] (42 bytes) sub_709830
// void sub_709830(uint32_t *a1);
// [0x709860] (42 bytes) sub_709860
// void sub_709860(uint32_t *a1);
// [0x709890] (42 bytes) sub_709890
// void sub_709890(uint32_t *a1);
// [0x7098c0] (42 bytes) sub_7098C0
// void sub_7098C0(uint32_t *a1);
// [0x7098f0] (42 bytes) sub_7098F0
// void sub_7098F0(uint32_t *a1);
// [0x709920] (42 bytes) sub_709920
// void sub_709920(uint32_t *a1);
// [0x709950] (42 bytes) sub_709950
// void sub_709950(uint32_t *a1);
// [0x709980] (42 bytes) sub_709980
// void sub_709980(uint32_t *a1);
// [0x7099b0] (42 bytes) sub_7099B0
// void sub_7099B0(uint32_t *a1);
// [0x7099e0] (42 bytes) sub_7099E0
// void sub_7099E0(uint32_t *a1);
// [0x709a10] (42 bytes) sub_709A10
// void sub_709A10(uint32_t *a1);
// [0x709a40] (42 bytes) sub_709A40
// void sub_709A40(uint32_t *a1);
// [0x709a70] (42 bytes) sub_709A70
// void sub_709A70(uint32_t *a1);
// [0x709aa0] (42 bytes) sub_709AA0
// void sub_709AA0(uint32_t *a1);
// [0x709ad0] (42 bytes) sub_709AD0
// void sub_709AD0(uint32_t *a1);
// [0x709b00] (46 bytes) sub_709B00
// void sub_709B00(uint8_t *a1);
// [0x709b30] (46 bytes) sub_709B30
// void sub_709B30(uint8_t *a1);
// [0x709b60] (45 bytes) sub_709B60
// void sub_709B60(uint32_t *a1);
// [0x709b90] (45 bytes) sub_709B90
// void sub_709B90(uint32_t *a1);
// [0x709bc0] (45 bytes) sub_709BC0
// void sub_709BC0(uint32_t *a1);
// [0x709bf0] (45 bytes) sub_709BF0
// void sub_709BF0(uint32_t *a1);
// [0x709c20] (45 bytes) sub_709C20
// void sub_709C20(uint32_t *a1);
// [0x709c50] (45 bytes) sub_709C50
// void sub_709C50(uint32_t *a1);
// [0x709c80] (45 bytes) sub_709C80
// void sub_709C80(uint32_t *a1);
// [0x709cb0] (45 bytes) sub_709CB0
// void sub_709CB0(uint32_t *a1);
// [0x709ce0] (45 bytes) sub_709CE0
// void sub_709CE0(uint32_t *a1);
// [0x709d10] (45 bytes) sub_709D10
// void sub_709D10(uint32_t *a1);
// [0x709d40] (45 bytes) sub_709D40
// void sub_709D40(uint32_t *a1);
// [0x709d70] (45 bytes) sub_709D70
// void sub_709D70(uint32_t *a1);
// [0x709da0] (77 bytes) sub_709DA0
// int (**sub_709DA0(int a1))(int);
// [0x709df0] (67 bytes) sub_709DF0
// int (**sub_709DF0(uint32_t *a1))(int);
// [0x709e40] (42 bytes) sub_709E40
// uint32_t *sub_709E40(uint32_t *a1);
// [0x709e70] (42 bytes) sub_709E70
// uint32_t *sub_709E70(uint32_t *a1);
// [0x709ea0] (42 bytes) sub_709EA0
// uint32_t *sub_709EA0(uint32_t *a1);
// [0x709ed0] (42 bytes) sub_709ED0
// uint32_t *sub_709ED0(uint32_t *a1);
// [0x709f00] (42 bytes) sub_709F00
// uint32_t *sub_709F00(uint32_t *a1);
// [0x709f30] (42 bytes) sub_709F30
// uint32_t *sub_709F30(uint32_t *a1);
// [0x709f60] (42 bytes) sub_709F60
// uint32_t *sub_709F60(uint32_t *a1);
// [0x709f90] (42 bytes) sub_709F90
// uint32_t *sub_709F90(uint32_t *a1);
// [0x709fc0] (42 bytes) sub_709FC0
// uint32_t *sub_709FC0(uint32_t *a1);
// [0x709ff0] (42 bytes) sub_709FF0
// uint32_t *sub_709FF0(uint32_t *a1);
// [0x70a020] (42 bytes) sub_70A020
// uint32_t *sub_70A020(uint32_t *a1);
// [0x70a050] (42 bytes) sub_70A050
// uint32_t *sub_70A050(uint32_t *a1);
// [0x70a080] (42 bytes) sub_70A080
// uint32_t *sub_70A080(uint32_t *a1);
// [0x70a0b0] (42 bytes) sub_70A0B0
// uint32_t *sub_70A0B0(uint32_t *a1);
// [0x70a0e0] (67 bytes) sub_70A0E0
// void sub_70A0E0(glf::MemoryStream *a1);
// [0x70a130] (192 bytes) sub_70A130
// int sub_70A130(const void **a1, void *a2, unsigned int a3);
// [0x70a1f0] (64 bytes) sub_70A1F0
// void sub_70A1F0(uint32_t *a1);
// [0x70a230] (64 bytes) sub_70A230
// void sub_70A230(uint32_t *a1);
// [0x70a270] (64 bytes) sub_70A270
// void sub_70A270(uint32_t *a1);
// [0x70a2b0] (64 bytes) sub_70A2B0
// void sub_70A2B0(uint32_t *a1);
// [0x70a2f0] (64 bytes) sub_70A2F0
// void sub_70A2F0(uint32_t *a1);
// [0x70a330] (64 bytes) sub_70A330
// void sub_70A330(uint32_t *a1);
// [0x70a370] (64 bytes) sub_70A370
// void sub_70A370(uint32_t *a1);
// [0x70a3b0] (64 bytes) sub_70A3B0
// void sub_70A3B0(uint32_t *a1);
// [0x70a3f0] (64 bytes) sub_70A3F0
// void sub_70A3F0(uint32_t *a1);
// [0x70a430] (64 bytes) sub_70A430
// void sub_70A430(uint32_t *a1);
// [0x70a470] (64 bytes) sub_70A470
// void sub_70A470(uint32_t *a1);
// [0x70a4b0] (64 bytes) sub_70A4B0
// void sub_70A4B0(uint32_t *a1);
// [0x70a4f0] (64 bytes) sub_70A4F0
// void sub_70A4F0(uint32_t *a1);
// [0x70a530] (64 bytes) sub_70A530
// void sub_70A530(uint32_t *a1);
// [0x70a570] (75 bytes) sub_70A570
// void sub_70A570(uint32_t *a1);
// [0x70a5c0] (85 bytes) sub_70A5C0
// void sub_70A5C0(void **a1);
// [0x70a620] (75 bytes) sub_70A620
// void sub_70A620(glf::MemoryStream *a1);
// [0x70a670] (129 bytes) sub_70A670
// int sub_70A670(const void **a1);
// [0x70a700] (1643 bytes) sub_70A700
// bool sub_70A700(int a1, float *a2, float *a3, float *a4);
// [0x70ad70] (538 bytes) sub_70AD70
// const char *sub_70AD70(int a1);
// [0x70af90] (75 bytes) sub_70AF90
// int sub_70AF90(int a1);
// [0x70afe0] (844 bytes) sub_70AFE0
// int sub_70AFE0(int a1, int a2);
// [0x70b330] (47 bytes) bool std::operator==<char,std::char_traits<char>,std::allocator<char>>(std::basic_string<char,std::char_traits<char>,std::allocator<char>> const&,char const*)
// bool std::operator==<char>(int a1, char *a2);
// [0x70b360] (251 bytes) sub_70B360
// int *sub_70B360();
// [0x70b460] (108 bytes) std::vector<boost::intrusive_ptr<glitch::scene::ISceneNode>,glitch::core::SAllocator<boost::intrusive_ptr<glitch::scene::ISceneNode>,(glitch::memory::E_MEMORY_HINT)0>>::~vector()
// void std::vector<boost::intrusive_ptr<glitch::scene::ISceneNode>,glitch::core::SAllocator<boost::intrusive_ptr<glitch::scene::ISceneNode>,(glitch::memory::E_MEMORY_HINT)0>>::~vector(;
// [0x70b4d0] (1207 bytes) sub_70B4D0
// int sub_70B4D0(int a1, int a2);
// [0x70b990] (1071 bytes) sub_70B990
// void sub_70B990(int a1, int a2, int a3);
// [0x70bdc0] (6074 bytes) sub_70BDC0
// char sub_70BDC0(int a1, float *a2, float a3, int *a4, float *a5, int a6, int a7);
// [0x70d580] (142 bytes) sub_70D580
// int *sub_70D580();
// [0x70d610] (142 bytes) sub_70D610
// int *sub_70D610();
// [0x70d6a0] (602 bytes) std::vector<glitch::core::vector3d<float>,std::allocator<glitch::core::vector3d<float>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<glitch::core::vector3d<float>*,std::vector<glitch::core::vector3d<float>,std::allocator<glitch::core::vector3d<float>>>>,glitch::core::vector3d<float> const&)
// uint32_t *std::vector<glitch::core::vector3d<float>>::_M_insert_aux(int a1, char *a2, int *a3);
// [0x70d900] (425 bytes) std::_Rb_tree<unsigned int,std::pair<unsigned int const,NavMeshData>,std::_Select1st<std::pair<unsigned int const,NavMeshData>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,NavMeshData>>>::_M_erase(std::_Rb_tree_node<std::pair<unsigned int const,NavMeshData>> *)
// void std::_Rb_tree<unsigned int,std::pair<unsigned int const,NavMeshData>,std::_Select1st<std::pair<unsigned int const,NavMeshData>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,NavMeshData>>>::_M_erase( int a1, uint32_t *a2);
// [0x70dab0] (1153 bytes) sub_70DAB0
// uint32_t *sub_70DAB0(uint32_t *a1);
// [0x70df40] (1207 bytes) sub_70DF40
// int sub_70DF40(int a1, int a2);
// [0x70e400] (1071 bytes) sub_70E400
// void sub_70E400(int a1, int a2, int a3);
// [0x70e830] (436 bytes) std::vector<NavMeshPathFindingNode *,std::allocator<NavMeshPathFindingNode *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<NavMeshPathFindingNode **,std::vector<NavMeshPathFindingNode *,std::allocator<NavMeshPathFindingNode *>>>,NavMeshPathFindingNode * const&)
// void std::vector<NavMeshPathFindingNode *>::_M_insert_aux(int a1, char *src, int *a3);
// [0x70e9f0] (200 bytes) std::multiset<NavMeshPathFindingNode *,PathFindingNodeLt<NavMeshPathFindingNode *>,std::allocator<NavMeshPathFindingNode *>>::insert(NavMeshPathFindingNode * const&)
// int *std::multiset<NavMeshPathFindingNode *,PathFindingNodeLt<NavMeshPathFindingNode *>,std::allocator<NavMeshPathFindingNode *>>::insert( int *a1, uint32_t *a2, int a3);
// [0x70eac0] (425 bytes) std::_Rb_tree<NavMeshPathFindingNode *,NavMeshPathFindingNode *,std::_Identity<NavMeshPathFindingNode *>,PathFindingNodeLt<NavMeshPathFindingNode *>,std::allocator<NavMeshPathFindingNode *>>::_M_erase(std::_Rb_tree_node<NavMeshPathFindingNode *> *)
// void std::_Rb_tree<NavMeshPathFindingNode *,NavMeshPathFindingNode *,std::_Identity<NavMeshPathFindingNode *>,PathFindingNodeLt<NavMeshPathFindingNode *>,std::allocator<NavMeshPathFindingNode *>>::_M_erase( int a1, uint32_t *a2);
// [0x70ec70] (136 bytes) sub_70EC70
// void sub_70EC70(int a1);
// [0x70ed00] (1590 bytes) sub_70ED00
// bool sub_70ED00(int a1, int a2, float *a3, char **a4, uint32_t *a5, char a6, int a7, int a8, int a9);
// [0x70f340] (144 bytes) sub_70F340
// void sub_70F340(void *a1);
// [0x70f3d0] (1153 bytes) sub_70F3D0
// uint32_t *sub_70F3D0(uint32_t *a1);
// [0x70f860] (436 bytes) std::vector<WaypointPathFindingEdge *,std::allocator<WaypointPathFindingEdge *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<WaypointPathFindingEdge **,std::vector<WaypointPathFindingEdge *,std::allocator<WaypointPathFindingEdge *>>>,WaypointPathFindingEdge * const&)
// void std::vector<WaypointPathFindingEdge *>::_M_insert_aux(int a1, char *src, int *a3);
// [0x70fa20] (200 bytes) std::multiset<WaypointPathFindingEdge *,PathFindingNodeLt<WaypointPathFindingEdge *>,std::allocator<WaypointPathFindingEdge *>>::insert(WaypointPathFindingEdge * const&)
// int *std::multiset<WaypointPathFindingEdge *,PathFindingNodeLt<WaypointPathFindingEdge *>,std::allocator<WaypointPathFindingEdge *>>::insert( int *a1, uint32_t *a2, int a3);
// [0x70faf0] (516 bytes) std::vector<WaypointPathFindingNeighbor,std::allocator<WaypointPathFindingNeighbor>>::_M_insert_aux(__gnu_cxx::__normal_iterator<WaypointPathFindingNeighbor*,std::vector<WaypointPathFindingNeighbor,std::allocator<WaypointPathFindingNeighbor>>>,WaypointPathFindingNeighbor const&)
// uint32_t *std::vector<WaypointPathFindingNeighbor>::_M_insert_aux(void **a1, char *a2, int *a3);
// [0x70fd00] (620 bytes) std::vector<AwardedEventInfo,std::allocator<AwardedEventInfo>>::_M_insert_aux(__gnu_cxx::__normal_iterator<AwardedEventInfo*,std::vector<AwardedEventInfo,std::allocator<AwardedEventInfo>>>,AwardedEventInfo const&)
// uint32_t *std::vector<AwardedEventInfo>::_M_insert_aux(int *a1, int a2, int a3);
// [0x70ff70] (425 bytes) std::_Rb_tree<unsigned int const,std::pair<unsigned int const,CountdownTime::State>,std::_Select1st<std::pair<unsigned int const,CountdownTime::State>>,std::less<unsigned int const>,std::allocator<std::pair<unsigned int const,CountdownTime::State>>>::_M_erase(std::_Rb_tree_node<std::pair<unsigned int const,CountdownTime::State>> *)
// void std::_Rb_tree<unsigned int const,std::pair<unsigned int const,CountdownTime::State>,std::_Select1st<std::pair<unsigned int const,CountdownTime::State>>,std::less<unsigned int const>,std::allocator<std::pair<unsigned int const,CountdownTime::State>>>::_M_erase( int a1, uint32_t *a2);
// [0x710120] (74 bytes) sub_710120
// int (**sub_710120(int a1))(int);
// [0x710170] (82 bytes) sub_710170
// void sub_710170(uint32_t **a1);
// [0x7101d0] (194 bytes) std::_Rb_tree<unsigned int,std::pair<unsigned int const,NavMeshData>,std::_Select1st<std::pair<unsigned int const,NavMeshData>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,NavMeshData>>>::_M_insert_(std::_Rb_tree_node_base const*,std::_Rb_tree_node_base const*,std::pair<unsigned int const,NavMeshData> const&)
// uint32_t *std::_Rb_tree<unsigned int,std::pair<unsigned int const,NavMeshData>,std::_Select1st<std::pair<unsigned int const,NavMeshData>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,NavMeshData>>>::_M_insert_( uint32_t *a1, int a2, int a3, int a4, uint32_t *a5);
// [0x7102a0] (348 bytes) std::_Rb_tree<unsigned int,std::pair<unsigned int const,NavMeshData>,std::_Select1st<std::pair<unsigned int const,NavMeshData>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,NavMeshData>>>::_M_insert_unique(std::pair<unsigned int const,NavMeshData> const&)
// int std::_Rb_tree<unsigned int,std::pair<unsigned int const,NavMeshData>,std::_Select1st<std::pair<unsigned int const,NavMeshData>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,NavMeshData>>>::_M_insert_unique( int a1, uint32_t *a2, unsigned int *a3);
// [0x710400] (637 bytes) std::_Rb_tree<unsigned int,std::pair<unsigned int const,NavMeshData>,std::_Select1st<std::pair<unsigned int const,NavMeshData>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,NavMeshData>>>::_M_insert_unique_(std::_Rb_tree_const_iterator<std::pair<unsigned int const,NavMeshData>>,std::pair<unsigned int const,NavMeshData> const&)
// int *std::_Rb_tree<unsigned int,std::pair<unsigned int const,NavMeshData>,std::_Select1st<std::pair<unsigned int const,NavMeshData>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,NavMeshData>>>::_M_insert_unique_( int *a1, uint32_t *a2, int a3, unsigned int *a4);
// [0x710680] (2204 bytes) std::_Rb_tree<NavMeshPathFindingNode *,NavMeshPathFindingNode *,std::_Identity<NavMeshPathFindingNode *>,PathFindingNodeLt<NavMeshPathFindingNode *>,std::allocator<NavMeshPathFindingNode *>>::_M_copy(std::_Rb_tree_node<NavMeshPathFindingNode *> const*,std::_Rb_tree_node<NavMeshPathFindingNode *>*)
// uint32_t *std::_Rb_tree<NavMeshPathFindingNode *,NavMeshPathFindingNode *,std::_Identity<NavMeshPathFindingNode *>,PathFindingNodeLt<NavMeshPathFindingNode *>,std::allocator<NavMeshPathFindingNode *>>::_M_copy( int a1, uint32_t *a2, int a3);
// [0x710f20] (425 bytes) std::_Rb_tree<WaypointPathFindingEdge *,WaypointPathFindingEdge *,std::_Identity<WaypointPathFindingEdge *>,PathFindingNodeLt<WaypointPathFindingEdge *>,std::allocator<WaypointPathFindingEdge *>>::_M_erase(std::_Rb_tree_node<WaypointPathFindingEdge *> *)
// void std::_Rb_tree<WaypointPathFindingEdge *,WaypointPathFindingEdge *,std::_Identity<WaypointPathFindingEdge *>,PathFindingNodeLt<WaypointPathFindingEdge *>,std::allocator<WaypointPathFindingEdge *>>::_M_erase( int a1, uint32_t *a2);
// [0x7110d0] (136 bytes) sub_7110D0
// void sub_7110D0(int a1);
// [0x711160] (1590 bytes) sub_711160
// bool sub_711160(int a1, int a2, float *a3, char **a4, uint32_t *a5, char a6, int a7, int a8, int a9);
// [0x7117a0] (144 bytes) sub_7117A0
// void sub_7117A0(void *a1);
// [0x711830] (481 bytes) void std::__insertion_sort<__gnu_cxx::__normal_iterator<PathFindingEdgeDist<WaypointPathFindingEdge *> *,std::vector<PathFindingEdgeDist<WaypointPathFindingEdge *>,std::allocator<PathFindingEdgeDist<WaypointPathFindingEdge *>>>>,PathFindingEdgeDistLt<WaypointPathFindingEdge *>>(__gnu_cxx::__normal_iterator<PathFindingEdgeDist<WaypointPathFindingEdge *> *,std::vector<PathFindingEdgeDist<WaypointPathFindingEdge *>,std::allocator<PathFindingEdgeDist<WaypointPathFindingEdge *>>>>,__gnu_cxx::__normal_iterator<PathFindingEdgeDist<WaypointPathFindingEdge *> *,std::vector<PathFindingEdgeDist<WaypointPathFindingEdge *>,std::allocator<PathFindingEdgeDist<WaypointPathFindingEdge *>>>>,PathFindingEdgeDistLt<WaypointPathFindingEdge *>)
// int std::__insertion_sort<__gnu_cxx::__normal_iterator<PathFindingEdgeDist<WaypointPathFindingEdge *> *,std::vector<PathFindingEdgeDist<WaypointPathFindingEdge *>>>,PathFindingEdgeDistLt<WaypointPathFindingEdge *>>( int a1, int a2);
// [0x711a20] (321 bytes) void std::__insertion_sort<__gnu_cxx::__normal_iterator<WaypointPathFindingNeighbor *,std::vector<WaypointPathFindingNeighbor,std::allocator<WaypointPathFindingNeighbor>>>,WaypointPathFindingNeighborLt>(__gnu_cxx::__normal_iterator<WaypointPathFindingNeighbor *,std::vector<WaypointPathFindingNeighbor,std::allocator<WaypointPathFindingNeighbor>>>,__gnu_cxx::__normal_iterator<WaypointPathFindingNeighbor *,std::vector<WaypointPathFindingNeighbor,std::allocator<WaypointPathFindingNeighbor>>>,WaypointPathFindingNeighborLt)
// float *std::__insertion_sort<__gnu_cxx::__normal_iterator<WaypointPathFindingNeighbor *,std::vector<WaypointPathFindingNeighbor>>,WaypointPathFindingNeighborLt>( float *a1, float *a2);
// [0x711b70] (516 bytes) std::vector<PathFindingNodeDist<NavMeshPathFindingNode *>,std::allocator<PathFindingNodeDist<NavMeshPathFindingNode *>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<PathFindingNodeDist<NavMeshPathFindingNode *>*,std::vector<PathFindingNodeDist<NavMeshPathFindingNode *>,std::allocator<PathFindingNodeDist<NavMeshPathFindingNode *>>>>,PathFindingNodeDist<NavMeshPathFindingNode *> const&)
// uint32_t *std::vector<PathFindingNodeDist<NavMeshPathFindingNode *>>::_M_insert_aux(void **a1, char *a2, int *a3);
// [0x711d80] (703 bytes) sub_711D80
// float *sub_711D80(int a1, float *a2, int a3, int a4, int a5);
// [0x712040] (225 bytes) void std::__insertion_sort<__gnu_cxx::__normal_iterator<PathFindingNodeDist<NavMeshPathFindingNode *> *,std::vector<PathFindingNodeDist<NavMeshPathFindingNode *>,std::allocator<PathFindingNodeDist<NavMeshPathFindingNode *>>>>,PathFindingNodeDistLt<NavMeshPathFindingNode *>>(__gnu_cxx::__normal_iterator<PathFindingNodeDist<NavMeshPathFindingNode *> *,std::vector<PathFindingNodeDist<NavMeshPathFindingNode *>,std::allocator<PathFindingNodeDist<NavMeshPathFindingNode *>>>>,__gnu_cxx::__normal_iterator<PathFindingNodeDist<NavMeshPathFindingNode *> *,std::vector<PathFindingNodeDist<NavMeshPathFindingNode *>,std::allocator<PathFindingNodeDist<NavMeshPathFindingNode *>>>>,PathFindingNodeDistLt<NavMeshPathFindingNode *>)
// int std::__insertion_sort<__gnu_cxx::__normal_iterator<PathFindingNodeDist<NavMeshPathFindingNode *> *,std::vector<PathFindingNodeDist<NavMeshPathFindingNode *>>>,PathFindingNodeDistLt<NavMeshPathFindingNode *>>( int a1, int a2);
// [0x712130] (516 bytes) std::vector<PathFindingNodeDist<WaypointPathFindingEdge *>,std::allocator<PathFindingNodeDist<WaypointPathFindingEdge *>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<PathFindingNodeDist<WaypointPathFindingEdge *>*,std::vector<PathFindingNodeDist<WaypointPathFindingEdge *>,std::allocator<PathFindingNodeDist<WaypointPathFindingEdge *>>>>,PathFindingNodeDist<WaypointPathFindingEdge *> const&)
// uint32_t *std::vector<PathFindingNodeDist<WaypointPathFindingEdge *>>::_M_insert_aux( void **a1, char *a2, int *a3);
// [0x712340] (4676 bytes) sub_712340
// char sub_712340(int a1, float *a2, int a3, int a4, int a5);
// [0x713590] (490 bytes) void std::__adjust_heap<__gnu_cxx::__normal_iterator<WaypointPathFindingNeighbor *,std::vector<WaypointPathFindingNeighbor,std::allocator<WaypointPathFindingNeighbor>>>,int,WaypointPathFindingNeighbor,WaypointPathFindingNeighborLt>(__gnu_cxx::__normal_iterator<WaypointPathFindingNeighbor *,std::vector<WaypointPathFindingNeighbor,std::allocator<WaypointPathFindingNeighbor>>>,int,int,WaypointPathFindingNeighbor,WaypointPathFindingNeighborLt)
// float *std::__adjust_heap<__gnu_cxx::__normal_iterator<WaypointPathFindingNeighbor *,std::vector<WaypointPathFindingNeighbor>>,int,WaypointPathFindingNeighbor,WaypointPathFindingNeighborLt>( int a1, int a2, int a3, int a4, float a5);
// [0x713780] (1628 bytes) void std::__introsort_loop<__gnu_cxx::__normal_iterator<WaypointPathFindingNeighbor *,std::vector<WaypointPathFindingNeighbor,std::allocator<WaypointPathFindingNeighbor>>>,int,WaypointPathFindingNeighborLt>(__gnu_cxx::__normal_iterator<WaypointPathFindingNeighbor *,std::vector<WaypointPathFindingNeighbor,std::allocator<WaypointPathFindingNeighbor>>>,__gnu_cxx::__normal_iterator<WaypointPathFindingNeighbor *,std::vector<WaypointPathFindingNeighbor,std::allocator<WaypointPathFindingNeighbor>>>,int,WaypointPathFindingNeighborLt)
// int std::__introsort_loop<__gnu_cxx::__normal_iterator<WaypointPathFindingNeighbor *,std::vector<WaypointPathFindingNeighbor>>,int,WaypointPathFindingNeighborLt>( int a1, unsigned int a2, int a3);
// [0x713de0] (277 bytes) void std::__adjust_heap<__gnu_cxx::__normal_iterator<PathFindingNodeDist<NavMeshPathFindingNode *> *,std::vector<PathFindingNodeDist<NavMeshPathFindingNode *>,std::allocator<PathFindingNodeDist<NavMeshPathFindingNode *>>>>,int,PathFindingNodeDist<NavMeshPathFindingNode *>,PathFindingNodeDistLt<NavMeshPathFindingNode *>>(__gnu_cxx::__normal_iterator<PathFindingNodeDist<NavMeshPathFindingNode *> *,std::vector<PathFindingNodeDist<NavMeshPathFindingNode *>,std::allocator<PathFindingNodeDist<NavMeshPathFindingNode *>>>>,int,int,PathFindingNodeDist<NavMeshPathFindingNode *>,PathFindingNodeDistLt<NavMeshPathFindingNode *>)
// int std::__adjust_heap<__gnu_cxx::__normal_iterator<PathFindingNodeDist<NavMeshPathFindingNode *> *,std::vector<PathFindingNodeDist<NavMeshPathFindingNode *>>>,int,PathFindingNodeDist<NavMeshPathFindingNode *>,PathFindingNodeDistLt<NavMeshPathFindingNode *>>( int a1, int a2, int a3, int a4, float a5);
// [0x713f00] (1107 bytes) void std::__introsort_loop<__gnu_cxx::__normal_iterator<PathFindingNodeDist<NavMeshPathFindingNode *> *,std::vector<PathFindingNodeDist<NavMeshPathFindingNode *>,std::allocator<PathFindingNodeDist<NavMeshPathFindingNode *>>>>,int,PathFindingNodeDistLt<NavMeshPathFindingNode *>>(__gnu_cxx::__normal_iterator<PathFindingNodeDist<NavMeshPathFindingNode *> *,std::vector<PathFindingNodeDist<NavMeshPathFindingNode *>,std::allocator<PathFindingNodeDist<NavMeshPathFindingNode *>>>>,__gnu_cxx::__normal_iterator<PathFindingNodeDist<NavMeshPathFindingNode *> *,std::vector<PathFindingNodeDist<NavMeshPathFindingNode *>,std::allocator<PathFindingNodeDist<NavMeshPathFindingNode *>>>>,int,PathFindingNodeDistLt<NavMeshPathFindingNode *>)
// int std::__introsort_loop<__gnu_cxx::__normal_iterator<PathFindingNodeDist<NavMeshPathFindingNode *> *,std::vector<PathFindingNodeDist<NavMeshPathFindingNode *>>>,int,PathFindingNodeDistLt<NavMeshPathFindingNode *>>( char *a1, char *a2, int a3);
// [0x714360] (277 bytes) void std::__adjust_heap<__gnu_cxx::__normal_iterator<PathFindingNodeDist<WaypointPathFindingEdge *> *,std::vector<PathFindingNodeDist<WaypointPathFindingEdge *>,std::allocator<PathFindingNodeDist<WaypointPathFindingEdge *>>>>,int,PathFindingNodeDist<WaypointPathFindingEdge *>,PathFindingNodeDistLt<WaypointPathFindingEdge *>>(__gnu_cxx::__normal_iterator<PathFindingNodeDist<WaypointPathFindingEdge *> *,std::vector<PathFindingNodeDist<WaypointPathFindingEdge *>,std::allocator<PathFindingNodeDist<WaypointPathFindingEdge *>>>>,int,int,PathFindingNodeDist<WaypointPathFindingEdge *>,PathFindingNodeDistLt<WaypointPathFindingEdge *>)
// int std::__adjust_heap<__gnu_cxx::__normal_iterator<PathFindingNodeDist<WaypointPathFindingEdge *> *,std::vector<PathFindingNodeDist<WaypointPathFindingEdge *>>>,int,PathFindingNodeDist<WaypointPathFindingEdge *>,PathFindingNodeDistLt<WaypointPathFindingEdge *>>( int a1, int a2, int a3, int a4, float a5);
// [0x714480] (1107 bytes) void std::__introsort_loop<__gnu_cxx::__normal_iterator<PathFindingNodeDist<WaypointPathFindingEdge *> *,std::vector<PathFindingNodeDist<WaypointPathFindingEdge *>,std::allocator<PathFindingNodeDist<WaypointPathFindingEdge *>>>>,int,PathFindingNodeDistLt<WaypointPathFindingEdge *>>(__gnu_cxx::__normal_iterator<PathFindingNodeDist<WaypointPathFindingEdge *> *,std::vector<PathFindingNodeDist<WaypointPathFindingEdge *>,std::allocator<PathFindingNodeDist<WaypointPathFindingEdge *>>>>,__gnu_cxx::__normal_iterator<PathFindingNodeDist<WaypointPathFindingEdge *> *,std::vector<PathFindingNodeDist<WaypointPathFindingEdge *>,std::allocator<PathFindingNodeDist<WaypointPathFindingEdge *>>>>,int,PathFindingNodeDistLt<WaypointPathFindingEdge *>)
// int std::__introsort_loop<__gnu_cxx::__normal_iterator<PathFindingNodeDist<WaypointPathFindingEdge *> *,std::vector<PathFindingNodeDist<WaypointPathFindingEdge *>>>,int,PathFindingNodeDistLt<WaypointPathFindingEdge *>>( char *a1, char *a2, int a3);
