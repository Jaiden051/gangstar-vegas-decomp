#pragma once
// ============================================================================
// TU03_ProjectilesAndInput.h
// Complete Translation Unit [03/41]
// Binary Range in lib/x86/libGangstar4.so: 0x5a7380 .. 0x61e7d0 (477 KB)
// Total Decompiled Functions in TU: 1265 (100% coverage)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// Function Table in Translation Unit:
// [0x5a7380] (2134 bytes) sub_5A7380
// const char *sub_5A7380();
// [0x5a7be0] (24 bytes) sub_5A7BE0
// uint32_t *sub_5A7BE0(uint32_t *a1);
// [0x5a7c00] (31 bytes) sub_5A7C00
// uint32_t *sub_5A7C00(uint32_t *a1);
// [0x5a7c28] (1 bytes) nullsub_33
// void nullsub_33();
// [0x5a7c30] (44 bytes) sub_5A7C30
// int sub_5A7C30(int a1, int a2);
// [0x5a7c60] (26 bytes) sub_5A7C60
// int sub_5A7C60(int a1);
// [0x5a7c80] (85 bytes) sub_5A7C80
// uint32_t *sub_5A7C80(int a1);
// [0x5a7ce0] (72 bytes) sub_5A7CE0
// int sub_5A7CE0(int a1, int a2);
// [0x5a7d30] (115 bytes) sub_5A7D30
// int sub_5A7D30(int a1, int a2);
// [0x5a7db0] (61 bytes) sub_5A7DB0
// int sub_5A7DB0(int a1, int a2);
// [0x5a7df0] (34 bytes) sub_5A7DF0
// int sub_5A7DF0(int a1, int a2);
// [0x5a7e40] (31 bytes) sub_5A7E40
// int sub_5A7E40(int a1);
// [0x5a7e60] (21 bytes) sub_5A7E60
// int sub_5A7E60(int a1);
// [0x5a7e80] (48 bytes) sub_5A7E80
// float *sub_5A7E80(float *a1);
// [0x5a7eb0] (15 bytes) sub_5A7EB0
// int sub_5A7EB0(uint32_t *a1);
// [0x5a7ec0] (30 bytes) sub_5A7EC0
// int sub_5A7EC0(uint32_t *a1);
// [0x5a7ee0] (15 bytes) sub_5A7EE0
// int sub_5A7EE0(uint32_t *a1);
// [0x5a7ef0] (63 bytes) sub_5A7EF0
// int sub_5A7EF0(uint32_t *a1);
// [0x5a7f30] (15 bytes) sub_5A7F30
// int sub_5A7F30(uint32_t *a1);
// [0x5a7f40] (30 bytes) sub_5A7F40
// char *sub_5A7F40(uint32_t *a1);
// [0x5a7f60] (34 bytes) sub_5A7F60
// uint32_t *sub_5A7F60(uint32_t *a1);
// [0x5a7f90] (34 bytes) sub_5A7F90
// uint32_t *sub_5A7F90(uint32_t *a1);
// [0x5a7fc0] (12 bytes) sub_5A7FC0
// int sub_5A7FC0();
// [0x5a7fd0] (22 bytes) sub_5A7FD0
// void *sub_5A7FD0();
// [0x5a7ff0] (22 bytes) sub_5A7FF0
// void *sub_5A7FF0();
// [0x5a8010] (22 bytes) sub_5A8010
// void *sub_5A8010();
// [0x5a8030] (35 bytes) sub_5A8030
// int sub_5A8030(int a1, int *a2);
// [0x5a8060] (24 bytes) sub_5A8060
// uint32_t *sub_5A8060(uint32_t *a1);
// [0x5a8080] (97 bytes) sub_5A8080
// int sub_5A8080(uint32_t *a1, int *a2, int a3);
// [0x5a80f0] (136 bytes) sub_5A80F0
// int sub_5A80F0(int a1, uint32_t *a2, int a3);
// [0x5a8180] (53 bytes) sub_5A8180
// int sub_5A8180(int a1, int a2, int a3);
// [0x5a81c0] (31 bytes) sub_5A81C0
// int sub_5A81C0(int a1, int a2);
// [0x5a81e0] (28 bytes) sub_5A81E0
// int sub_5A81E0(int a1, int a2);
// [0x5a8200] (81 bytes) sub_5A8200
// uint16_t *sub_5A8200(uint16_t *a1, int a2, int a3);
// [0x5a8260] (572 bytes) sub_5A8260
// int sub_5A8260(uint32_t *a1, int a2);
// [0x5a84a0] (112 bytes) sub_5A84A0
// int sub_5A84A0(int a1, float *a2);
// [0x5a8510] (291 bytes) sub_5A8510
// char *sub_5A8510(char *result, char *a2);
// [0x5a8640] (344 bytes) sub_5A8640
// unsigned int sub_5A8640(int a1, int a2, int a3, unsigned int a4, unsigned int a5);
// [0x5a87a0] (42 bytes) sub_5A87A0
// void sub_5A87A0(uint32_t *a1);
// [0x5a87d0] (52 bytes) sub_5A87D0
// void sub_5A87D0(uint32_t *a1);
// [0x5a8810] (52 bytes) sub_5A8810
// void sub_5A8810(uint32_t *a1);
// [0x5a8850] (42 bytes) sub_5A8850
// void sub_5A8850(uint32_t *a1);
// [0x5a8880] (93 bytes) sub_5A8880
// void sub_5A8880(char *a1);
// [0x5a88e0] (100 bytes) sub_5A88E0
// int (**sub_5A88E0(uint32_t *a1))(int);
// [0x5a8950] (109 bytes) sub_5A8950
// int (**sub_5A8950(int a1))(int);
// [0x5a89c0] (88 bytes) sub_5A89C0
// int sub_5A89C0(int a1, int a2);
// [0x5a8a20] (7 bytes) sub_5A8A20
// int sub_5A8A20(int a1);
// [0x5a8a30] (108 bytes) sub_5A8A30
// int sub_5A8A30(uint32_t *a1);
// [0x5a8aa0] (7 bytes) sub_5A8AA0
// int sub_5A8AA0(int a1, int a2, int a3);
// [0x5a8ab0] (199 bytes) sub_5A8AB0
// int sub_5A8AB0(int a1, int *a2, int a3);
// [0x5a8b80] (62 bytes) sub_5A8B80
// int sub_5A8B80(int a1);
// [0x5a8bc0] (198 bytes) sub_5A8BC0
// int sub_5A8BC0(uint32_t *a1);
// [0x5a8c90] (30 bytes) sub_5A8C90
// int sub_5A8C90(int a1, int a2);
// [0x5a8cb0] (30 bytes) sub_5A8CB0
// int sub_5A8CB0(int a1, int a2);
// [0x5a8cd0] (131 bytes) sub_5A8CD0
// int sub_5A8CD0(int a1);
// [0x5a8d60] (119 bytes) sub_5A8D60
// unsigned int sub_5A8D60(int a1, int a2);
// [0x5a8de0] (77 bytes) sub_5A8DE0
// uint32_t *sub_5A8DE0(uint32_t *a1, uint32_t *a2);
// [0x5a8e30] (125 bytes) sub_5A8E30
// int sub_5A8E30(char *a1);
// [0x5a8eb0] (411 bytes) sub_5A8EB0
// uint32_t *sub_5A8EB0(uint32_t *a1);
// [0x5a9050] (69 bytes) sub_5A9050
// int sub_5A9050(int a1, int a2, int a3);
// [0x5a90a0] (375 bytes) sub_5A90A0
// int sub_5A90A0(int *a1, int a2);
// [0x5a9220] (382 bytes) sub_5A9220
// size_t sub_5A9220(int *a1, uint32_t *a2);
// [0x5a93a0] (382 bytes) sub_5A93A0
// size_t sub_5A93A0(int *a1, uint32_t *a2);
// [0x5a9520] (370 bytes) sub_5A9520
// uint32_t *sub_5A9520(uint32_t *a1);
// [0x5a96a0] (308 bytes) sub_5A96A0
// int sub_5A96A0(int a1, unsigned int a2, unsigned int a3);
// [0x5a97e0] (290 bytes) sub_5A97E0
// int sub_5A97E0(unsigned int a1, float a2, __m128d a3);
// [0x5a9910] (230 bytes) sub_5A9910
// int sub_5A9910(int a1, int a2, int a3);
// [0x5a9a00] (316 bytes) sub_5A9A00
// int sub_5A9A00(int a1, char *a2, int a3, int a4);
// [0x5a9b40] (561 bytes) sub_5A9B40
// uint32_t *sub_5A9B40(int a1, uint32_t *a2);
// [0x5a9d80] (1106 bytes) sub_5A9D80
// int sub_5A9D80(int a1, int **a2, int a3);
// [0x5aa1e0] (65 bytes) sub_5AA1E0
// unsigned int *sub_5AA1E0(unsigned int *result);
// [0x5aa230] (65 bytes) sub_5AA230
// unsigned int *sub_5AA230(unsigned int *result);
// [0x5aa280] (414 bytes) sub_5AA280
// int sub_5AA280(int a1, int a2);
// [0x5aa420] (185 bytes) sub_5AA420
// uint32_t *sub_5AA420(uint32_t *a1, int a2, int *a3, uint32_t *a4);
// [0x5aa4e0] (187 bytes) sub_5AA4E0
// int *sub_5AA4E0(int *a1, int a2, int a3, int a4, int *a5);
// [0x5aa5a0] (187 bytes) sub_5AA5A0
// int *sub_5AA5A0(int *a1, int a2, int a3, int a4, int *a5);
// [0x5aa660] (393 bytes) sub_5AA660
// int sub_5AA660(char *a1, int a2, void (*a3)(uint8_t *, char *, int, int, int, int));
// [0x5aa7f0] (703 bytes) sub_5AA7F0
// int sub_5AA7F0(int a1, char *a2, int *a3);
// [0x5aaab0] (506 bytes) sub_5AAAB0
// int sub_5AAAB0(int a1, char *a2, int *a3);
// [0x5aacb0] (215 bytes) sub_5AACB0
// int *sub_5AACB0(int *a1, int a2, int a3, int a4, uint32_t *a5);
// [0x5aad90] (514 bytes) sub_5AAD90
// int sub_5AAD90(int *a1, char *a2, int *a3);
// [0x5aafa0] (187 bytes) sub_5AAFA0
// int *sub_5AAFA0(int *a1, int a2, int a3, int a4, int *a5);
// [0x5ab060] (206 bytes) sub_5AB060
// uint32_t *sub_5AB060(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5);
// [0x5ab130] (199 bytes) sub_5AB130
// int *sub_5AB130(int *a1, int a2, int *a3, int *a4);
// [0x5ab200] (368 bytes) sub_5AB200
// int sub_5AB200();
// [0x5ab370] (115 bytes) sub_5AB370
// int sub_5AB370(int a1, float *a2);
// [0x5ab3f0] (115 bytes) sub_5AB3F0
// int sub_5AB3F0(int a1, float *a2);
// [0x5ab470] (281 bytes) sub_5AB470
// int *sub_5AB470(int *a1, int a2, int a3, int a4, int a5);
// [0x5ab590] (256 bytes) sub_5AB590
// int sub_5AB590(int a1, int a2, int a3);
// [0x5ab690] (213 bytes) sub_5AB690
// int *sub_5AB690(int *a1, int a2, int a3, int a4, int a5);
// [0x5ab770] (213 bytes) sub_5AB770
// int *sub_5AB770(int *a1, int a2, int a3, int a4, int a5);
// [0x5ab850] (666 bytes) sub_5AB850
// uint32_t *sub_5AB850(uint32_t **a1);
// [0x5abaf0] (116 bytes) sub_5ABAF0
// int (**sub_5ABAF0(int a1))(int);
// [0x5abb70] (420 bytes) sub_5ABB70
// void sub_5ABB70(int a1, uint32_t *a2);
// [0x5abd20] (414 bytes) sub_5ABD20
// int sub_5ABD20(float *a1, int a2, float a3, int a4, float *a5);
// [0x5abec0] (414 bytes) sub_5ABEC0
// int sub_5ABEC0(float *a1, int a2, float a3, int a4, float *a5);
// [0x5ac060] (108 bytes) sub_5AC060
// void sub_5AC060(uint32_t *a1);
// [0x5ac0d0] (57 bytes) sub_5AC0D0
// int sub_5AC0D0(int a1);
// [0x5ac110] (57 bytes) sub_5AC110
// int sub_5AC110(int a1);
// [0x5ac150] (276 bytes) sub_5AC150
// int sub_5AC150(uint32_t *a1, int a2, char a3);
// [0x5ac270] (105 bytes) sub_5AC270
// void sub_5AC270(void *a1);
// [0x5ac2e0] (270 bytes) sub_5AC2E0
// uint32_t *sub_5AC2E0();
// [0x5ac3f0] (86 bytes) sub_5AC3F0
// long double sub_5AC3F0(float *a1, float *a2);
// [0x5ac450] (142 bytes) sub_5AC450
// __m128i *sub_5AC450(__m128i *result, int a2, uint32_t *a3, __m128i *a4);
// [0x5ac4e0] (68 bytes) sub_5AC4E0
// int sub_5AC4E0(int a1, uint32_t *a2, uint32_t *a3);
// [0x5ac530] (640 bytes) sub_5AC530
// 0x5ac530 sub_5AC530
// [0x5ac7b0] (277 bytes) sub_5AC7B0
// int sub_5AC7B0(int a1, uint32_t *a2);
// [0x5ac8d0] (277 bytes) sub_5AC8D0
// int sub_5AC8D0(int a1, uint32_t *a2);
// [0x5ac9f0] (380 bytes) sub_5AC9F0
// void sub_5AC9F0(int a1, uint32_t *a2);
// [0x5acb70] (637 bytes) sub_5ACB70
// uint32_t *sub_5ACB70(uint32_t *result, int a2, int *a3, uint32_t *a4);
// [0x5acdf0] (18 bytes) sub_5ACDF0
// int sub_5ACDF0(int a1);
// [0x5ace10] (15 bytes) sub_5ACE10
// int sub_5ACE10(uint32_t *a1);
// [0x5ace20] (168 bytes) sub_5ACE20
// int sub_5ACE20(uint32_t *a1);
// [0x5aced0] (18 bytes) sub_5ACED0
// int sub_5ACED0(uint32_t *a1);
// [0x5acef0] (15 bytes) sub_5ACEF0
// int sub_5ACEF0(char *a1);
// [0x5acf00] (176 bytes) sub_5ACF00
// void sub_5ACF00(uint32_t *a1);
// [0x5acfb0] (7 bytes) sub_5ACFB0
// int sub_5ACFB0(int a1);
// [0x5acfc0] (116 bytes) sub_5ACFC0
// void sub_5ACFC0(uint32_t *a1);
// [0x5ad040] (18 bytes) sub_5AD040
// int sub_5AD040(int a1);
// [0x5ad060] (15 bytes) sub_5AD060
// int sub_5AD060(uint32_t *a1);
// [0x5ad070] (225 bytes) sub_5AD070
// int sub_5AD070(uint32_t *a1);
// [0x5ad160] (209 bytes) sub_5AD160
// int sub_5AD160(int a1, int a2, int a3);
// [0x5ad240] (124 bytes) sub_5AD240
// void sub_5AD240(uint32_t *a1);
// [0x5ad2c0] (714 bytes) sub_5AD2C0
// char *sub_5AD2C0(char *result, int a2);
// [0x5ad590] (365 bytes) sub_5AD590
// int sub_5AD590(int a1, int a2, char a3, char a4);
// [0x5ad700] (445 bytes) sub_5AD700
// int sub_5AD700(uint32_t *a1, int a2);
// [0x5ad8c0] (143 bytes) sub_5AD8C0
// uint32_t *sub_5AD8C0(uint32_t *result);
// [0x5ad950] (308 bytes) sub_5AD950
// int sub_5AD950(int a1, uint32_t *a2, int *a3);
// [0x5ada90] (308 bytes) sub_5ADA90
// int sub_5ADA90(int a1, uint32_t *a2, int *a3);
// [0x5adbd0] (18 bytes) sub_5ADBD0
// int sub_5ADBD0(uint32_t *a1);
// [0x5adbf0] (15 bytes) sub_5ADBF0
// int sub_5ADBF0(char *a1);
// [0x5adc00] (233 bytes) sub_5ADC00
// void sub_5ADC00(uint32_t *a1);
// [0x5adcf0] (587 bytes) sub_5ADCF0
// _OWORD *sub_5ADCF0(_OWORD *a1, char **a2, uint32_t *a3, char **a4);
// [0x5adf40] (681 bytes) sub_5ADF40
// _OWORD *sub_5ADF40(_OWORD *a1, uint32_t *a2, int *a3, unsigned int *a4);
// [0x5ae1f0] (308 bytes) sub_5AE1F0
// int sub_5AE1F0(int a1, uint32_t *a2, int *a3);
// [0x5ae330] (338 bytes) sub_5AE330
// int sub_5AE330(int a1, int *a2);
// [0x5ae490] (325 bytes) sub_5AE490
// int sub_5AE490(int a1, uint32_t *a2, int *a3);
// [0x5ae5e0] (323 bytes) sub_5AE5E0
// int sub_5AE5E0(int a1, uint32_t *a2, int *a3);
// [0x5ae730] (363 bytes) sub_5AE730
// int sub_5AE730(int a1, uint32_t *a2, int a3);
// [0x5ae8a0] (582 bytes) sub_5AE8A0
// int *sub_5AE8A0(int *a1, uint32_t *a2, int a3, int a4);
// [0x5aeaf0] (363 bytes) sub_5AEAF0
// int sub_5AEAF0(int a1, uint32_t *a2, int a3);
// [0x5aec60] (2168 bytes) sub_5AEC60
// uint32_t *sub_5AEC60(uint32_t *a1, int a2);
// [0x5af4e0] (1094 bytes) sub_5AF4E0
// char *sub_5AF4E0(char *result, char *a2, int a3);
// [0x5af930] (229 bytes) sub_5AF930
// char *sub_5AF930(char *result, char *a2);
// [0x5afa20] (245 bytes) sub_5AFA20
// volatile int32_t **sub_5AFA20(volatile int32_t **result, int a2);
// [0x5afb20] (598 bytes) sub_5AFB20
// int *sub_5AFB20(int *result, int *a2, int *a3);
// [0x5afd80] (726 bytes) sub_5AFD80
// unsigned int sub_5AFD80(int a1);
// [0x5b0060] (185 bytes) sub_5B0060
// uint32_t *sub_5B0060(int a1);
// [0x5b0120] (185 bytes) sub_5B0120
// uint32_t *sub_5B0120(int a1);
// [0x5b01e0] (185 bytes) sub_5B01E0
// uint32_t *sub_5B01E0(int a1);
// [0x5b02a0] (111 bytes) sub_5B02A0
// uint32_t *sub_5B02A0(uint32_t *a1, int a2);
// [0x5b0310] (39 bytes) sub_5B0310
// bool sub_5B0310(int a1);
// [0x5b0340] (137 bytes) sub_5B0340
// int sub_5B0340(uint32_t *a1);
// [0x5b03d0] (1891 bytes) sub_5B03D0
// int sub_5B03D0(float *a1, int a2);
// [0x5b0b40] (724 bytes) sub_5B0B40
// int sub_5B0B40(uint32_t *a1, bool *a2, uint32_t *a3, int *a4);
// [0x5b0e20] (47 bytes) sub_5B0E20
// int sub_5B0E20(int a1);
// [0x5b0e50] (114 bytes) sub_5B0E50
// bool sub_5B0E50(int a1, float *a2);
// [0x5b0ed0] (34 bytes) sub_5B0ED0
// bool sub_5B0ED0(int a1);
// [0x5b0f00] (68 bytes) sub_5B0F00
// int sub_5B0F00(int a1);
// [0x5b0f50] (223 bytes) sub_5B0F50
// float *sub_5B0F50(float *a1, float *a2);
// [0x5b1030] (62 bytes) sub_5B1030
// int sub_5B1030(int a1);
// [0x5b1070] (105 bytes) sub_5B1070
// void sub_5B1070(int a1);
// [0x5b10e0] (397 bytes) sub_5B10E0
// void sub_5B10E0(uint32_t *a1);
// [0x5b1270] (168 bytes) sub_5B1270
// char *sub_5B1270(int a1, int a2);
// [0x5b1320] (415 bytes) sub_5B1320
// float *sub_5B1320(float *a1);
// [0x5b14c0] (136 bytes) sub_5B14C0
// void sub_5B14C0(int a1, int a2);
// [0x5b1590] (35 bytes) sub_5B1590
// int sub_5B1590(int *a1);
// [0x5b15c0] (160 bytes) sub_5B15C0
// int sub_5B15C0(uint32_t *a1, int a2);
// [0x5b1700] (41 bytes) sub_5B1700
// uint32_t *sub_5B1700(uint32_t *a1, int a2);
// [0x5b1730] (172 bytes) sub_5B1730
// float *sub_5B1730(int a1, float *a2, float *a3, float a4);
// [0x5b17e8] (1 bytes) nullsub_34
// void nullsub_34();
// [0x5b17f0] (39 bytes) sub_5B17F0
// bool sub_5B17F0(int a1);
// [0x5b1820] (15 bytes) sub_5B1820
// int sub_5B1820(int a1);
// [0x5b1840] (15 bytes) sub_5B1840
// int sub_5B1840(int a1);
// [0x5b1850] (33 bytes) sub_5B1850
// int sub_5B1850(int a1);
// [0x5b1880] (40 bytes) sub_5B1880
// char sub_5B1880(int a1);
// [0x5b18b0] (15 bytes) sub_5B18B0
// int sub_5B18B0(int a1);
// [0x5b18c0] (15 bytes) sub_5B18C0
// int sub_5B18C0(int a1);
// [0x5b18d0] (39 bytes) sub_5B18D0
// int sub_5B18D0(int a1);
// [0x5b1900] (39 bytes) sub_5B1900
// int sub_5B1900(int a1);
// [0x5b1940] (15 bytes) sub_5B1940
// long double sub_5B1940(int a1);
// [0x5b1960] (112 bytes) sub_5B1960
// int sub_5B1960(int a1, int a2);
// [0x5b19d0] (16 bytes) sub_5B19D0
// bool sub_5B19D0(int a1);
// [0x5b1a00] (37 bytes) sub_5B1A00
// int sub_5B1A00(int a1);
// [0x5b1a50] (29 bytes) sub_5B1A50
// bool sub_5B1A50(int a1);
// [0x5b1a70] (17 bytes) sub_5B1A70
// bool sub_5B1A70(int a1);
// [0x5b1ab0] (37 bytes) sub_5B1AB0
// int sub_5B1AB0(int a1);
// [0x5b1ae0] (37 bytes) sub_5B1AE0
// int sub_5B1AE0(int a1);
// [0x5b1b10] (17 bytes) sub_5B1B10
// bool sub_5B1B10(int a1);
// [0x5b1b30] (17 bytes) sub_5B1B30
// bool sub_5B1B30(int a1);
// [0x5b1b70] (17 bytes) sub_5B1B70
// bool sub_5B1B70(int a1);
// [0x5b1b90] (17 bytes) sub_5B1B90
// bool sub_5B1B90(int a1);
// [0x5b1bb0] (40 bytes) sub_5B1BB0
// bool sub_5B1BB0(int a1);
// [0x5b1be0] (40 bytes) sub_5B1BE0
// bool sub_5B1BE0(int a1);
// [0x5b1c10] (40 bytes) sub_5B1C10
// bool sub_5B1C10(int a1);
// [0x5b1c40] (16 bytes) sub_5B1C40
// int sub_5B1C40(int a1);
// [0x5b1c50] (17 bytes) sub_5B1C50
// bool sub_5B1C50(int a1);
// [0x5b1c70] (30 bytes) sub_5B1C70
// int sub_5B1C70(int a1);
// [0x5b1c90] (970 bytes) sub_5B1C90
// long double sub_5B1C90(int a1, int a2);
// [0x5b2060] (88 bytes) sub_5B2060
// int sub_5B2060(int a1);
// [0x5b20c0] (210 bytes) sub_5B20C0
// int sub_5B20C0(int *a1, char a2, char a3);
// [0x5b21a0] (96 bytes) sub_5B21A0
// int sub_5B21A0(int a1);
// [0x5b2200] (96 bytes) sub_5B2200
// int sub_5B2200(int a1);
// [0x5b2260] (88 bytes) sub_5B2260
// int sub_5B2260(int a1);
// [0x5b22c0] (114 bytes) sub_5B22C0
// int sub_5B22C0(int a1);
// [0x5b2340] (140 bytes) sub_5B2340
// int sub_5B2340(int a1);
// [0x5b23d0] (290 bytes) sub_5B23D0
// bool sub_5B23D0(int a1, float a2, char a3);
// [0x5b2500] (1549 bytes) sub_5B2500
// int sub_5B2500(int a1);
// [0x5b2b10] (512 bytes) sub_5B2B10
// int sub_5B2B10(int a1, int a2);
// [0x5b2d10] (24 bytes) sub_5B2D10
// int64_t sub_5B2D10(int64_t a1);
// [0x5b2d30] (269 bytes) sub_5B2D30
// int sub_5B2D30(int a1, unsigned int *a2, float *a3);
// [0x5b2e40] (84 bytes) sub_5B2E40
// int sub_5B2E40(int a1, int a2);
// [0x5b2ea0] (84 bytes) sub_5B2EA0
// int sub_5B2EA0(int a1);
// [0x5b2f00] (112 bytes) sub_5B2F00
// int sub_5B2F00(int a1);
// [0x5b2f70] (27 bytes) sub_5B2F70
// int sub_5B2F70(int a1);
// [0x5b2f90] (35 bytes) sub_5B2F90
// int sub_5B2F90(int a1);
// [0x5b2fc0] (35 bytes) sub_5B2FC0
// int sub_5B2FC0(int a1);
// [0x5b2ff0] (57 bytes) sub_5B2FF0
// int sub_5B2FF0(uint32_t **a1);
// [0x5b3030] (26 bytes) sub_5B3030
// int sub_5B3030(int a1);
// [0x5b3050] (123 bytes) sub_5B3050
// int sub_5B3050(int a1);
// [0x5b30d0] (123 bytes) sub_5B30D0
// int sub_5B30D0(int a1);
// [0x5b3150] (64 bytes) sub_5B3150
// long double sub_5B3150(int a1);
// [0x5b3190] (27 bytes) sub_5B3190
// int sub_5B3190(int a1);
// [0x5b31b0] (217 bytes) sub_5B31B0
// int sub_5B31B0(int a1, char a2);
// [0x5b32c0] (59 bytes) sub_5B32C0
// uint32_t *sub_5B32C0(uint32_t *a1);
// [0x5b3300] (60 bytes) sub_5B3300
// uint32_t *sub_5B3300(int a1);
// [0x5b3340] (27 bytes) sub_5B3340
// int sub_5B3340(int a1);
// [0x5b3360] (56 bytes) sub_5B3360
// uint32_t *sub_5B3360(int a1, uint32_t *a2, int a3);
// [0x5b33a0] (61 bytes) sub_5B33A0
// int sub_5B33A0(int a1, int a2, int a3);
// [0x5b3400] (66 bytes) sub_5B3400
// int sub_5B3400(int a1, int (***a2)(uint32_t, int, uint32_t));
// [0x5b3450] (87 bytes) sub_5B3450
// uint32_t *sub_5B3450(int a1, int a2, char a3);
// [0x5b34b0] (57 bytes) sub_5B34B0
// int sub_5B34B0(int a1);
// [0x5b34f8] (1 bytes) nullsub_35
// void nullsub_35();
// [0x5b3508] (1 bytes) nullsub_36
// void nullsub_36();
// [0x5b3510] (1260 bytes) sub_5B3510
// void *sub_5B3510();
// [0x5b3a00] (198 bytes) sub_5B3A00
// int sub_5B3A00(char *s);
// [0x5b3ad8] (1 bytes) nullsub_37
// void nullsub_37();
// [0x5b3ae8] (1 bytes) nullsub_38
// void nullsub_38();
// [0x5b3af0] (322 bytes) sub_5B3AF0
// uint32_t *sub_5B3AF0(int a1);
// [0x5b3c40] (150 bytes) sub_5B3C40
// int sub_5B3C40();
// [0x5b3ce0] (373 bytes) sub_5B3CE0
// unsigned int sub_5B3CE0(uint32_t *a1);
// [0x5b3e60] (289 bytes) sub_5B3E60
// void sub_5B3E60(int a1, int a2);
// [0x5b3f90] (68 bytes) sub_5B3F90
// int sub_5B3F90(int a1, char *a2, int a3, int a4);
// [0x5b3fe0] (126 bytes) sub_5B3FE0
// int sub_5B3FE0(int a1, const char **a2);
// [0x5b4060] (83 bytes) sub_5B4060
// int sub_5B4060(int a1, int (***a2)(uint32_t, int, uint32_t));
// [0x5b40c0] (555 bytes) sub_5B40C0
// int sub_5B40C0(int a1, int *a2, int a3);
// [0x5b42f0] (331 bytes) sub_5B42F0
// uint32_t *sub_5B42F0(int a1, int64_t a2, int *a3);
// [0x5b4440] (18 bytes) sub_5B4440
// int sub_5B4440(int a1, int a2);
// [0x5b4460] (50 bytes) sub_5B4460
// int sub_5B4460(int a1, int a2, int a3);
// [0x5b44a0] (56 bytes) sub_5B44A0
// int sub_5B44A0(int a1, int a2);
// [0x5b44e0] (654 bytes) sub_5B44E0
// int sub_5B44E0(int a1, int a2, unsigned int a3);
// [0x5b4770] (417 bytes) sub_5B4770
// int sub_5B4770(int a1, int a2, unsigned int a3);
// [0x5b4920] (112 bytes) sub_5B4920
// int sub_5B4920(int a1);
// [0x5b4990] (132 bytes) sub_5B4990
// void sub_5B4990(int a1, int a2);
// [0x5b4a20] (190 bytes) sub_5B4A20
// int sub_5B4A20(int a1, int a2, int (*a3)(int), int (*a4)(int));
// [0x5b4ae0] (63 bytes) sub_5B4AE0
// int sub_5B4AE0(int a1, int a2);
// [0x5b4b28] (1 bytes) nullsub_39
// void nullsub_39();
// [0x5b4b30] (181 bytes) sub_5B4B30
// const char *sub_5B4B30(int a1, int a2, char *s1);
// [0x5b4bf0] (66 bytes) sub_5B4BF0
// int sub_5B4BF0(int a1, int a2);
// [0x5b4c40] (456 bytes) sub_5B4C40
// void sub_5B4C40(uint32_t *a1, uint32_t *a2);
// [0x5b4e30] (131 bytes) sub_5B4E30
// int sub_5B4E30(int a1, char a2);
// [0x5b4ec0] (58 bytes) sub_5B4EC0
// int sub_5B4EC0(int a1);
// [0x5b4f00] (45 bytes) sub_5B4F00
// int sub_5B4F00(int a1, uint8_t *a2);
// [0x5b4f30] (268 bytes) sub_5B4F30
// bool sub_5B4F30(int a1, int a2);
// [0x5b5040] (65 bytes) sub_5B5040
// size_t sub_5B5040(int *a1, int a2);
// [0x5b5090] (305 bytes) sub_5B5090
// int sub_5B5090(int a1, uint32_t *a2);
// [0x5b51d0] (177 bytes) sub_5B51D0
// int sub_5B51D0(int a1, int a2, int a3);
// [0x5b5290] (137 bytes) sub_5B5290
// int sub_5B5290(int a1, int a2, char *a3);
// [0x5b5320] (263 bytes) sub_5B5320
// int sub_5B5320(int a1);
// [0x5b5430] (155 bytes) sub_5B5430
// int sub_5B5430(int a1);
// [0x5b54d0] (189 bytes) sub_5B54D0
// uint32_t *sub_5B54D0(int a1);
// [0x5b55d0] (443 bytes) sub_5B55D0
// int sub_5B55D0(int *a1);
// [0x5b5790] (54 bytes) sub_5B5790
// int sub_5B5790(int a1, int a2);
// [0x5b57d0] (40 bytes) sub_5B57D0
// char sub_5B57D0(int a1, int a2);
// [0x5b5800] (37 bytes) sub_5B5800
// int sub_5B5800(int a1, int a2);
// [0x5b5830] (185 bytes) sub_5B5830
// int sub_5B5830(uint32_t *a1, int a2);
// [0x5b5920] (207 bytes) sub_5B5920
// size_t sub_5B5920(uint32_t *a1, int a2, int *a3);
// [0x5b59f0] (351 bytes) sub_5B59F0
// int sub_5B59F0(uint32_t *a1, int a2, char a3, char a4);
// [0x5b5b50] (326 bytes) sub_5B5B50
// int sub_5B5B50(int a1, int a2);
// [0x5b5ca0] (72 bytes) sub_5B5CA0
// unsigned int sub_5B5CA0(unsigned int a1, int a2, int a3);
// [0x5b5cf0] (51 bytes) sub_5B5CF0
// unsigned int sub_5B5CF0(unsigned int a1, int a2);
// [0x5b5d30] (25 bytes) sub_5B5D30
// int sub_5B5D30(int a1, int a2);
// [0x5b5d50] (38 bytes) sub_5B5D50
// int sub_5B5D50(int a1, int a2);
// [0x5b5d80] (149 bytes) sub_5B5D80
// int sub_5B5D80(int a1, int a2, int a3);
// [0x5b5e20] (125 bytes) sub_5B5E20
// int sub_5B5E20(int a1, int a2);
// [0x5b5ea0] (104 bytes) sub_5B5EA0
// void sub_5B5EA0(int a1, int a2);
// [0x5b5f10] (272 bytes) sub_5B5F10
// size_t sub_5B5F10(int a1, int a2, size_t a3);
// [0x5b6020] (121 bytes) sub_5B6020
// void sub_5B6020(int a1, size_t a2);
// [0x5b60a0] (1424 bytes) sub_5B60A0
// void sub_5B60A0(uint32_t *a1, size_t a2, uint8_t a3);
// [0x5b6630] (886 bytes) sub_5B6630
// int sub_5B6630(uint32_t *a1, uint32_t *a2, int a3, char a4, char a5);
// [0x5b69b0] (236 bytes) sub_5B69B0
// int sub_5B69B0(uint32_t *a1, uint32_t *a2, int a3, char a4, int a5, char a6, char a7);
// [0x5b6aa0] (169 bytes) sub_5B6AA0
// void sub_5B6AA0(uint32_t *a1, int a2);
// [0x5b6b50] (145 bytes) sub_5B6B50
// void sub_5B6B50(uint32_t *a1, uint32_t *a2);
// [0x5b6bf0] (240 bytes) sub_5B6BF0
// int sub_5B6BF0(uint32_t *a1, int a2, int a3, int a4, uint8_t a5, int a6);
// [0x5b6ce0] (157 bytes) sub_5B6CE0
// void sub_5B6CE0(uint32_t *a1, uint32_t *a2, int a3);
// [0x5b6d80] (437 bytes) sub_5B6D80
// int sub_5B6D80(uint32_t *a1, int a2);
// [0x5b6f40] (77 bytes) sub_5B6F40
// void sub_5B6F40(uint32_t *a1, int a2, int a3);
// [0x5b6f90] (85 bytes) sub_5B6F90
// void sub_5B6F90(uint32_t *a1, int a2);
// [0x5b6ff0] (34 bytes) sub_5B6FF0
// int sub_5B6FF0(int a1, int a2);
// [0x5b7020] (582 bytes) sub_5B7020
// void sub_5B7020(uint32_t *a1);
// [0x5b7270] (62 bytes) sub_5B7270
// int sub_5B7270(int a1);
// [0x5b72b0] (457 bytes) sub_5B72B0
// void sub_5B72B0(uint32_t *a1, int a2);
// [0x5b7480] (177 bytes) sub_5B7480
// int sub_5B7480(int a1, int a2);
// [0x5b7560] (33 bytes) sub_5B7560
// bool sub_5B7560(int a1, int a2);
// [0x5b7590] (56 bytes) sub_5B7590
// bool sub_5B7590(int a1, int a2);
// [0x5b75d0] (55 bytes) sub_5B75D0
// bool sub_5B75D0(int a1, int a2);
// [0x5b7610] (65 bytes) sub_5B7610
// bool sub_5B7610(int a1, int a2);
// [0x5b7660] (55 bytes) sub_5B7660
// bool sub_5B7660(int a1, int a2);
// [0x5b76a0] (55 bytes) sub_5B76A0
// bool sub_5B76A0(int a1, int a2);
// [0x5b76e0] (238 bytes) sub_5B76E0
// char sub_5B76E0(int a1, signed int a2, char a3);
// [0x5b77d0] (61 bytes) sub_5B77D0
// int sub_5B77D0(int a1, int a2);
// [0x5b7810] (1189 bytes) sub_5B7810
// int sub_5B7810(uint32_t *a1, int a2, int a3, int *a4);
// [0x5b7cc0] (22 bytes) sub_5B7CC0
// int sub_5B7CC0();
// [0x5b7ce0] (41 bytes) sub_5B7CE0
// int sub_5B7CE0(int a1, int a2);
// [0x5b7d10] (239 bytes) sub_5B7D10
// int sub_5B7D10(int a1, int a2, unsigned int a3);
// [0x5b7e00] (295 bytes) sub_5B7E00
// int sub_5B7E00(int a1, int a2, unsigned int a3);
// [0x5b7f30] (182 bytes) sub_5B7F30
// int sub_5B7F30(int a1, int a2);
// [0x5b7ff0] (44 bytes) sub_5B7FF0
// int sub_5B7FF0(int a1, int a2);
// [0x5b8020] (51 bytes) sub_5B8020
// int sub_5B8020(int a1, int a2);
// [0x5b8060] (64 bytes) sub_5B8060
// int sub_5B8060(int a1, int a2, int a3);
// [0x5b80a0] (263 bytes) sub_5B80A0
// void sub_5B80A0(int a1, int a2, int a3);
// [0x5b81b0] (225 bytes) sub_5B81B0
// void sub_5B81B0(int a1, int a2, int a3);
// [0x5b82a0] (16 bytes) sub_5B82A0
// int sub_5B82A0(int a1);
// [0x5b82b0] (104 bytes) sub_5B82B0
// int sub_5B82B0(int a1, int a2, int a3, int a4);
// [0x5b8320] (677 bytes) sub_5B8320
// void sub_5B8320(uint32_t *a1);
// [0x5b85d0] (249 bytes) sub_5B85D0
// int sub_5B85D0(uint32_t *a1);
// [0x5b86d0] (164 bytes) sub_5B86D0
// int sub_5B86D0(int a1, char *s);
// [0x5b8780] (78 bytes) sub_5B8780
// int sub_5B8780(int a1, int a2);
// [0x5b87d0] (111 bytes) sub_5B87D0
// unsigned int sub_5B87D0(int a1, int a2);
// [0x5b8840] (79 bytes) sub_5B8840
// unsigned int sub_5B8840(int a1, char *s);
// [0x5b8890] (57 bytes) sub_5B8890
// int sub_5B8890(int a1, int a2);
// [0x5b88d0] (569 bytes) sub_5B88D0
// int sub_5B88D0(int a1, int a2);
// [0x5b8b10] (224 bytes) sub_5B8B10
// int sub_5B8B10(int a1, const void **a2);
// [0x5b8bf0] (292 bytes) sub_5B8BF0
// int *sub_5B8BF0(int *a1, int a2, int a3);
// [0x5b8d20] (1149 bytes) sub_5B8D20
// int sub_5B8D20(int a1, int a2);
// [0x5b91a0] (125 bytes) sub_5B91A0
// int sub_5B91A0(uint32_t *a1, int a2);
// [0x5b9220] (559 bytes) sub_5B9220
// void sub_5B9220(int a1, int a2, char a3);
// [0x5b9450] (533 bytes) sub_5B9450
// uint32_t *sub_5B9450(int a1);
// [0x5b9670] (27 bytes) sub_5B9670
// int sub_5B9670(int a1, int a2);
// [0x5b96a0] (15 bytes) sub_5B96A0
// int sub_5B96A0(int a1);
// [0x5b96b0] (150 bytes) sub_5B96B0
// int sub_5B96B0();
// [0x5b9750] (177 bytes) sub_5B9750
// int sub_5B9750(int a1, int a2, int a3);
// [0x5b9810] (15 bytes) sub_5B9810
// int sub_5B9810(int a1);
// [0x5b9820] (34 bytes) sub_5B9820
// uint32_t *sub_5B9820(uint32_t *a1, int a2);
// [0x5b9850] (36 bytes) sub_5B9850
// int sub_5B9850(int a1, char *a2);
// [0x5b9880] (19 bytes) sub_5B9880
// int sub_5B9880(int a1, uint8_t a2);
// [0x5b98a0] (120 bytes) sub_5B98A0
// int sub_5B98A0(int a1);
// [0x5b9920] (161 bytes) sub_5B9920
// int sub_5B9920(int a1);
// [0x5b99d0] (353 bytes) sub_5B99D0
// int sub_5B99D0(int a1, int a2);
// [0x5b9b40] (217 bytes) sub_5B9B40
// void sub_5B9B40(int a1, int a2);
// [0x5b9c20] (69 bytes) sub_5B9C20
// int sub_5B9C20(int a1, int a2);
// [0x5b9c78] (1 bytes) nullsub_40
// void nullsub_40();
// [0x5b9c90] (527 bytes) sub_5B9C90
// int sub_5B9C90(uint32_t *a1);
// [0x5b9ea8] (1 bytes) nullsub_41
// void nullsub_41();
// [0x5b9ec8] (1 bytes) nullsub_42
// void nullsub_42();
// [0x5b9ed0] (235 bytes) sub_5B9ED0
// int sub_5B9ED0(int a1);
// [0x5b9fc0] (481 bytes) sub_5B9FC0
// void sub_5B9FC0(int a1);
// [0x5ba1d0] (1399 bytes) sub_5BA1D0
// void sub_5BA1D0(int a1, int a2);
// [0x5ba750] (88 bytes) sub_5BA750
// int sub_5BA750(uint32_t *a1, int a2, int a3, int a4);
// [0x5ba7b0] (329 bytes) sub_5BA7B0
// int sub_5BA7B0(int a1, uint8_t a2);
// [0x5ba900] (13 bytes) sub_5BA900
// int sub_5BA900(int a1);
// [0x5ba930] (88 bytes) sub_5BA930
// int sub_5BA930(uint32_t *a1, int a2, int a3, int a4);
// [0x5ba990] (115 bytes) sub_5BA990
// int sub_5BA990(float *a1, float a2, float a3, float a4);
// [0x5baa10] (2951 bytes) sub_5BAA10
// int sub_5BAA10(int *a1, int *a2);
// [0x5bb5a0] (231 bytes) sub_5BB5A0
// int sub_5BB5A0(int a1);
// [0x5bb690] (336 bytes) sub_5BB690
// void sub_5BB690(void ****a1);
// [0x5bb7e0] (328 bytes) sub_5BB7E0
// int sub_5BB7E0(uint32_t *a1, int a2, int a3);
// [0x5bb930] (448 bytes) sub_5BB930
// void *sub_5BB930(uint32_t *a1, int a2, int a3);
// [0x5bbaf0] (472 bytes) sub_5BBAF0
// void sub_5BBAF0(uint32_t *a1);
// [0x5bbcd0] (764 bytes) sub_5BBCD0
// void *sub_5BBCD0(int *a1);
// [0x5bbfd0] (54 bytes) sub_5BBFD0
// void *sub_5BBFD0(int a1, int a2);
// [0x5bc010] (12 bytes) sub_5BC010
// int sub_5BC010(int a1);
// [0x5bc030] (43 bytes) sub_5BC030
// int sub_5BC030(int a1, int a2);
// [0x5bc060] (317 bytes) sub_5BC060
// int sub_5BC060(int a1, int a2);
// [0x5bc1a0] (153 bytes) sub_5BC1A0
// int sub_5BC1A0(int a1, int a2);
// [0x5bc240] (218 bytes) sub_5BC240
// int sub_5BC240(uint32_t *a1);
// [0x5bc320] (176 bytes) sub_5BC320
// int sub_5BC320(int a1);
// [0x5bc3d0] (133 bytes) sub_5BC3D0
// int *sub_5BC3D0(int *a1, int *a2);
// [0x5bc460] (449 bytes) sub_5BC460
// uint32_t *sub_5BC460(int a1, int a2);
// [0x5bc630] (137 bytes) sub_5BC630
// int sub_5BC630(int *a1, int *a2);
// [0x5bc6c0] (79 bytes) sub_5BC6C0
// int *sub_5BC6C0(int *a1, int *a2);
// [0x5bc710] (350 bytes) sub_5BC710
// uint32_t *sub_5BC710(int a1, int a2);
// [0x5bc870] (80 bytes) sub_5BC870
// int sub_5BC870(int *a1, int *a2);
// [0x5bc8c0] (30 bytes) sub_5BC8C0
// uint32_t *sub_5BC8C0(uint32_t *a1);
// [0x5bc8e8] (1 bytes) nullsub_43
// void nullsub_43();
// [0x5bc8f0] (30 bytes) sub_5BC8F0
// uint32_t *sub_5BC8F0(uint32_t *a1);
// [0x5bc910] (39 bytes) sub_5BC910
// uint32_t *sub_5BC910(uint32_t *a1, int a2, int a3, int a4, int a5, int a6);
// [0x5bc940] (49 bytes) sub_5BC940
// int sub_5BC940();
// [0x5bc980] (35 bytes) sub_5BC980
// int sub_5BC980(int a1);
// [0x5bc9b0] (185 bytes) sub_5BC9B0
// int sub_5BC9B0(int a1);
// [0x5bca78] (1 bytes) nullsub_44
// void nullsub_44();
// [0x5bca80] (36 bytes) sub_5BCA80
// int sub_5BCA80(int a1);
// [0x5bcad0] (132 bytes) sub_5BCAD0
// char sub_5BCAD0(int a1, int a2);
// [0x5bcb60] (13 bytes) sub_5BCB60
// int sub_5BCB60(int a1);
// [0x5bcb70] (13 bytes) sub_5BCB70
// int sub_5BCB70(int a1);
// [0x5bcb90] (206 bytes) sub_5BCB90
// int (**sub_5BCB90(int a1))(int);
// [0x5bcc60] (81 bytes) sub_5BCC60
// int sub_5BCC60(int *a1);
// [0x5bccc0] (181 bytes) sub_5BCCC0
// uint32_t *sub_5BCCC0(uint32_t *a1, int a2);
// [0x5bcd80] (91 bytes) sub_5BCD80
// uint32_t *sub_5BCD80(uint32_t *a1, uint32_t *a2);
// [0x5bcde0] (91 bytes) sub_5BCDE0
// uint32_t *sub_5BCDE0(uint32_t *a1, uint32_t *a2);
// [0x5bce40] (16 bytes) sub_5BCE40
// int sub_5BCE40(int a1);
// [0x5bce50] (68 bytes) sub_5BCE50
// int sub_5BCE50(int a1, uint32_t *a2, uint32_t *a3);
// [0x5bcea0] (1378 bytes) sub_5BCEA0
// int sub_5BCEA0(int a1);
// [0x5bd410] (119 bytes) sub_5BD410
// int sub_5BD410(int a1);
// [0x5bd490] (212 bytes) sub_5BD490
// int sub_5BD490(int a1, uint32_t *a2);
// [0x5bd570] (334 bytes) sub_5BD570
// void sub_5BD570(int a1, uint32_t *a2);
// [0x5bd6c0] (43 bytes) sub_5BD6C0
// int sub_5BD6C0(int a1);
// [0x5bd6f0] (225 bytes) sub_5BD6F0
// int sub_5BD6F0(int a1);
// [0x5bd7e0] (465 bytes) sub_5BD7E0
// int sub_5BD7E0(int a1);
// [0x5bd9c0] (1137 bytes) sub_5BD9C0
// int sub_5BD9C0(int a1);
// [0x5bde40] (495 bytes) sub_5BDE40
// int sub_5BDE40();
// [0x5be030] (1002 bytes) sub_5BE030
// int sub_5BE030(int a1, int a2);
// [0x5be420] (13 bytes) sub_5BE420
// int sub_5BE420(int a1);
// [0x5be430] (14 bytes) sub_5BE430
// int sub_5BE430(int a1, char a2);
// [0x5be440] (1192 bytes) sub_5BE440
// int sub_5BE440(int a1, int a2, char a3);
// [0x5be8f0] (112 bytes) sub_5BE8F0
// int sub_5BE8F0(int a1, int a2);
// [0x5be960] (64 bytes) sub_5BE960
// int sub_5BE960(uint32_t *a1);
// [0x5be9a0] (329 bytes) sub_5BE9A0
// unsigned int sub_5BE9A0(int a1, uint8_t a2);
// [0x5beaf0] (797 bytes) sub_5BEAF0
// uint32_t *sub_5BEAF0(int *a1, uint8_t a2);
// [0x5bee10] (235 bytes) sub_5BEE10
// int (**sub_5BEE10(int a1))(int);
// [0x5bef00] (56 bytes) sub_5BEF00
// void sub_5BEF00(void *a1);
// [0x5bef40] (953 bytes) sub_5BEF40
// int sub_5BEF40(int a1);
// [0x5bf300] (882 bytes) sub_5BF300
// int sub_5BF300(int a1, int a2);
// [0x5bf680] (553 bytes) sub_5BF680
// int sub_5BF680(int a1);
// [0x5bf8b0] (273 bytes) sub_5BF8B0
// int sub_5BF8B0(int a1);
// [0x5bf9d0] (164 bytes) sub_5BF9D0
// int sub_5BF9D0();
// [0x5bfa80] (164 bytes) sub_5BFA80
// int sub_5BFA80();
// [0x5bfb30] (164 bytes) sub_5BFB30
// int sub_5BFB30();
// [0x5bfbe0] (164 bytes) sub_5BFBE0
// int sub_5BFBE0();
// [0x5bfc90] (164 bytes) sub_5BFC90
// int sub_5BFC90();
// [0x5bfd40] (273 bytes) sub_5BFD40
// int sub_5BFD40(uint32_t *a1, int a2);
// [0x5bfe60] (381 bytes) sub_5BFE60
// int sub_5BFE60(int a1);
// [0x5bffe0] (37 bytes) sub_5BFFE0
// int sub_5BFFE0(int *a1);
// [0x5c0010] (149 bytes) sub_5C0010
// int sub_5C0010(int a1);
// [0x5c00b0] (235 bytes) sub_5C00B0
// void sub_5C00B0(char *a1);
// [0x5c01a0] (227 bytes) sub_5C01A0
// int (**sub_5C01A0(int a1))(int);
// [0x5c0290] (3789 bytes) sub_5C0290
// int sub_5C0290(int a1, int32_t a2);
// [0x5c1160] (100 bytes) sub_5C1160
// int sub_5C1160(int a1, int a2);
// [0x5c11d0] (120 bytes) sub_5C11D0
// int sub_5C11D0(uint32_t *a1, uint32_t *a2);
// [0x5c1250] (112 bytes) sub_5C1250
// int sub_5C1250(uint32_t *a1, uint32_t *a2, uint8_t a3);
// [0x5c12c0] (139 bytes) sub_5C12C0
// int sub_5C12C0(uint8_t (***a1)(uint32_t, int, int), int a2, int *a3);
// [0x5c1350] (494 bytes) sub_5C1350
// int *sub_5C1350(uint32_t *a1, char *a2, char a3);
// [0x5c1540] (724 bytes) sub_5C1540
// int sub_5C1540(int a1, char **a2, int a3, int a4, int a5, int a6);
// [0x5c1820] (277 bytes) sub_5C1820
// int sub_5C1820( int a1, int (***a2)(uint32_t, int, uint32_t), uint8_t (***a3)(uint32_t, int, int));
// [0x5c1940] (260 bytes) sub_5C1940
// int sub_5C1940( int a1, int (***a2)(uint32_t, int, uint32_t), uint8_t (***a3)(uint32_t, int, int));
// [0x5c1a50] (301 bytes) sub_5C1A50
// int sub_5C1A50(int a1, uint8_t (***a2)(uint32_t, int, int), int a3, int a4, int *a5);
// [0x5c1b80] (1249 bytes) sub_5C1B80
// int sub_5C1B80(int a1);
// [0x5c2070] (120 bytes) sub_5C2070
// int sub_5C2070(int a1);
// [0x5c20f0] (15 bytes) sub_5C20F0
// int sub_5C20F0(uint32_t *a1);
// [0x5c2100] (154 bytes) sub_5C2100
// int sub_5C2100(uint32_t *a1);
// [0x5c21a0] (15 bytes) sub_5C21A0
// int sub_5C21A0(uint32_t *a1);
// [0x5c21b0] (573 bytes) sub_5C21B0
// int sub_5C21B0(uint32_t *a1);
// [0x5c23f0] (4201 bytes) sub_5C23F0
// int sub_5C23F0(int a1);
// [0x5c3460] (15 bytes) sub_5C3460
// int sub_5C3460(uint32_t *a1);
// [0x5c3470] (43 bytes) sub_5C3470
// int sub_5C3470(int a1);
// [0x5c34a0] (15 bytes) sub_5C34A0
// int sub_5C34A0(uint32_t *a1);
// [0x5c34b0] (98 bytes) sub_5C34B0
// char *sub_5C34B0(uint32_t *a1);
// [0x5c3520] (15 bytes) sub_5C3520
// int sub_5C3520(uint32_t *a1);
// [0x5c3530] (148 bytes) sub_5C3530
// int sub_5C3530(uint32_t *a1);
// [0x5c35d0] (292 bytes) sub_5C35D0
// uint32_t *sub_5C35D0(uint32_t *a1);
// [0x5c3700] (105 bytes) sub_5C3700
// int sub_5C3700(int a1);
// [0x5c3770] (15 bytes) sub_5C3770
// int sub_5C3770(uint32_t *a1);
// [0x5c3780] (238 bytes) sub_5C3780
// void sub_5C3780(uint32_t *a1);
// [0x5c3870] (1196 bytes) sub_5C3870
// void sub_5C3870(int a1, uint32_t *a2, int a3);
// [0x5c3d20] (34 bytes) sub_5C3D20
// void sub_5C3D20(int a1, uint32_t *a2, int a3);
// [0x5c3d50] (108 bytes) sub_5C3D50
// void sub_5C3D50(int a1, int a2, char a3);
// [0x5c3dc0] (440 bytes) sub_5C3DC0
// void sub_5C3DC0(int a1, uint32_t *a2, int a3);
// [0x5c3fa0] (153 bytes) sub_5C3FA0
// void sub_5C3FA0(int a1, uint32_t *a2);
// [0x5c4040] (161 bytes) sub_5C4040
// void sub_5C4040(int a1, uint32_t *a2);
// [0x5c40f0] (546 bytes) sub_5C40F0
// void sub_5C40F0(uint32_t *a1, uint32_t *a2);
// [0x5c4320] (149 bytes) sub_5C4320
// void sub_5C4320(int a1, uint32_t *a2, char a3);
// [0x5c43c0] (410 bytes) sub_5C43C0
// void sub_5C43C0(int a1, int *a2, int a3);
// [0x5c4560] (567 bytes) sub_5C4560
// void sub_5C4560(int a1, uint32_t *a2);
// [0x5c47a0] (686 bytes) sub_5C47A0
// int sub_5C47A0(uint8_t *a1);
// [0x5c4a50] (277 bytes) sub_5C4A50
// int sub_5C4A50(uint32_t *a1);
// [0x5c4b70] (15 bytes) sub_5C4B70
// int sub_5C4B70(uint32_t *a1);
// [0x5c4b80] (380 bytes) sub_5C4B80
// int sub_5C4B80(uint32_t *a1);
// [0x5c4d00] (15 bytes) sub_5C4D00
// int sub_5C4D00(int a1);
// [0x5c4d10] (753 bytes) sub_5C4D10
// uint32_t *sub_5C4D10(uint32_t *a1, int *a2, float *a3);
// [0x5c5010] (15 bytes) sub_5C5010
// int sub_5C5010(uint32_t *a1);
// [0x5c5020] (292 bytes) sub_5C5020
// uint32_t *sub_5C5020(uint32_t *a1);
// [0x5c5150] (151 bytes) sub_5C5150
// void sub_5C5150(uint8_t *a1);
// [0x5c51f0] (85 bytes) sub_5C51F0
// bool sub_5C51F0(int a1);
// [0x5c5250] (85 bytes) sub_5C5250
// bool sub_5C5250(int a1);
// [0x5c52b0] (101 bytes) sub_5C52B0
// void sub_5C52B0(int a1, int a2);
// [0x5c5320] (3832 bytes) sub_5C5320
// void sub_5C5320(uint32_t *a1, int a2);
// [0x5c6220] (1921 bytes) sub_5C6220
// int sub_5C6220(int a1);
// [0x5c69b0] (401 bytes) sub_5C69B0
// uint8_t *sub_5C69B0(uint32_t *a1, int a2, int a3, uint8_t *a4);
// [0x5c6b50] (6147 bytes) sub_5C6B50
// int sub_5C6B50(int a1, glf::Gamepad *a2, std::map<int,bool> *a3, std::map<int,AnalogStickMov> *a4);
// [0x5c8360] (299 bytes) sub_5C8360
// std::list<long, GameAllocator<long>> *sub_5C8360(std::list<long, GameAllocator<long>> *a1, int a2);
// [0x5c8490] (95 bytes) sub_5C8490
// uint32_t *sub_5C8490(uint32_t *result, uint32_t *a2);
// [0x5c84f0] (497 bytes) sub_5C84F0
// int sub_5C84F0( int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, uint32_t *a16, float a17, float a18, float a19, float a20, float a21, float a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36);
// [0x5c86f0] (187 bytes) sub_5C86F0
// int sub_5C86F0(int a1, int a2);
// [0x5c87b0] (437 bytes) sub_5C87B0
// int sub_5C87B0(int a1, char *a2);
// [0x5c8970] (33 bytes) sub_5C8970
// int sub_5C8970(int a1, int a2);
// [0x5c89a0] (114 bytes) sub_5C89A0
// int sub_5C89A0(int a1, int a2);
// [0x5c8a20] (509 bytes) sub_5C8A20
// uint32_t *sub_5C8A20(int a1, char **a2, uint32_t *a3);
// [0x5c8c20] (361 bytes) sub_5C8C20
// int sub_5C8C20(int a1, int a2, uint8_t a3);
// [0x5c8d90] (2607 bytes) sub_5C8D90
// int sub_5C8D90(uint32_t *a1, char *s1, char a3);
// [0x5c97c0] (721 bytes) sub_5C97C0
// int sub_5C97C0(uint32_t *a1, char *a2);
// [0x5c9aa0] (610 bytes) sub_5C9AA0
// int sub_5C9AA0(int a1, char *a2, void *a3, char a4);
// [0x5c9d10] (1181 bytes) sub_5C9D10
// uint32_t *sub_5C9D10(int a1, int a2, uint8_t a3, float *a4, float a5, float a6, float a7, float a8);
// [0x5ca1b0] (4030 bytes) sub_5CA1B0
// int sub_5CA1B0(uint8_t *a1, char *a2, int a3, int a4);
// [0x5cb170] (266 bytes) sub_5CB170
// int sub_5CB170(int a1, int a2);
// [0x5cb280] (737 bytes) sub_5CB280
// int sub_5CB280(int a1, int a2);
// [0x5cb570] (655 bytes) sub_5CB570
// int sub_5CB570(int a1);
// [0x5cb800] (266 bytes) sub_5CB800
// int sub_5CB800(int a1, int a2);
// [0x5cb910] (4094 bytes) sub_5CB910
// int sub_5CB910(uint8_t *a1, char *a2, int ***a3, int a4, int a5, int a6);
// [0x5cc910] (76 bytes) sub_5CC910
// int sub_5CC910(uint8_t *a1, char *a2, int ***a3);
// [0x5cc960] (2441 bytes) sub_5CC960
// unsigned int sub_5CC960(int a1);
// [0x5cd2f0] (2215 bytes) sub_5CD2F0
// 0x5cd2f0 sub_5CD2F0
// [0x5cdba0] (2097 bytes) sub_5CDBA0
// int sub_5CDBA0(int a1, int a2);
// [0x5ce3e0] (206 bytes) sub_5CE3E0
// int sub_5CE3E0(float *a1, int a2);
// [0x5ce4b0] (7 bytes) sub_5CE4B0
// int sub_5CE4B0(int a1);
// [0x5ce4c0] (339 bytes) sub_5CE4C0
// int sub_5CE4C0(int a1);
// [0x5ce620] (7 bytes) sub_5CE620
// int sub_5CE620(int a1);
// [0x5ce630] (56 bytes) sub_5CE630
// void sub_5CE630(void *a1);
// [0x5ce670] (1423 bytes) sub_5CE670
// int *sub_5CE670(int a1, int a2);
// [0x5cec00] (771 bytes) sub_5CEC00
// int sub_5CEC00(int *a1, int a2, int a3);
// [0x5cef10] (389 bytes) sub_5CEF10
// int sub_5CEF10(int a1, int a2, int a3);
// [0x5cf0a0] (7 bytes) sub_5CF0A0
// int sub_5CF0A0(int a1);
// [0x5cf0b0] (536 bytes) sub_5CF0B0
// int sub_5CF0B0(int a1);
// [0x5cf2d0] (7 bytes) sub_5CF2D0
// int sub_5CF2D0(int a1);
// [0x5cf2e0] (56 bytes) sub_5CF2E0
// void sub_5CF2E0(void *a1);
// [0x5cf320] (253 bytes) sub_5CF320
// int sub_5CF320(int a1, int a2);
// [0x5cf420] (1070 bytes) sub_5CF420
// int sub_5CF420(int *a1, float *a2);
// [0x5cf850] (6239 bytes) sub_5CF850
// 0x5cf850 sub_5CF850
// [0x5d10b0] (1451 bytes) sub_5D10B0
// int sub_5D10B0(int a1, int a2, float *a3, float *a4);
// [0x5d1f80] (220 bytes) sub_5D1F80
// int *sub_5D1F80(uint32_t *a1, int a2);
// [0x5d2060] (265 bytes) sub_5D2060
// char *sub_5D2060(int a1, int a2);
// [0x5d2170] (785 bytes) sub_5D2170
// int sub_5D2170(uint32_t *a1);
// [0x5d2610] (788 bytes) sub_5D2610
// int sub_5D2610(uint32_t *a1);
// [0x5d2930] (1114 bytes) sub_5D2930
// unsigned int sub_5D2930(int a1);
// [0x5d2d90] (2415 bytes) sub_5D2D90
// unsigned int sub_5D2D90( int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, uint32_t *a28, int a29, int a30, uint32_t *a31, unsigned int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, __m128 a40, __m128 a41, float a42, float a43, float a44, float a45, float a46, float a47, float a48, float a49);
// [0x5d3700] (3278 bytes) sub_5D3700
// int sub_5D3700(int a1);
// [0x5d43d0] (119 bytes) sub_5D43D0
// int (**sub_5D43D0(int a1))(int);
// [0x5d4450] (127 bytes) sub_5D4450
// void sub_5D4450(uint32_t *a1);
// [0x5d44d0] (1050 bytes) sub_5D44D0
// uint32_t *sub_5D44D0(int a1);
// [0x5d48f0] (1125 bytes) sub_5D48F0
// void *sub_5D48F0(uint32_t *a1, int a2, int a3);
// [0x5d4d60] (166 bytes) sub_5D4D60
// int sub_5D4D60(int a1, int a2, uint32_t *a3);
// [0x5d4e10] (337 bytes) sub_5D4E10
// int sub_5D4E10(uint32_t *a1, int a2, int a3, char a4, char a5);
// [0x5d4f70] (942 bytes) sub_5D4F70
// void sub_5D4F70(uint32_t *a1, int a2, int a3, int a4, char a5);
// [0x5d5320] (1014 bytes) sub_5D5320
// void sub_5D5320(uint32_t *a1, int a2, int a3, int a4, char a5);
// [0x5d5720] (1568 bytes) sub_5D5720
// uint32_t *sub_5D5720(int a1);
// [0x5d5d40] (94 bytes) sub_5D5D40
// uint32_t *sub_5D5D40(int a1);
// [0x5d5da0] (500 bytes) sub_5D5DA0
// int sub_5D5DA0(int a1, int *a2, float *a3);
// [0x5d5fa0] (660 bytes) sub_5D5FA0
// int sub_5D5FA0(uint32_t *a1);
// [0x5d6240] (156 bytes) sub_5D6240
// volatile int32_t *sub_5D6240(uint32_t *a1);
// [0x5d62e0] (225 bytes) sub_5D62E0
// int sub_5D62E0(int a1);
// [0x5d63d0] (2637 bytes) sub_5D63D0
// int sub_5D63D0(int a1);
// [0x5d6e20] (25 bytes) sub_5D6E20
// int sub_5D6E20(int a1);
// [0x5d6e40] (193 bytes) sub_5D6E40
// int *sub_5D6E40(uint32_t *a1, int a2);
// [0x5d6f10] (305 bytes) sub_5D6F10
// int *sub_5D6F10(int a1);
// [0x5d7050] (15 bytes) sub_5D7050
// int sub_5D7050(uint32_t *a1);
// [0x5d7060] (350 bytes) sub_5D7060
// int sub_5D7060(uint32_t *a1);
// [0x5d71c0] (1344 bytes) sub_5D71C0
// unsigned int sub_5D71C0(uint8_t *a1, uint32_t *a2);
// [0x5d7700] (246 bytes) sub_5D7700
// int sub_5D7700(uint32_t *a1, int a2, int a3, int a4, int a5);
// [0x5d7800] (1018 bytes) sub_5D7800
// unsigned int sub_5D7800(int *a1, int a2, unsigned int a3, int a4);
// [0x5d7c00] (296 bytes) sub_5D7C00
// unsigned int sub_5D7C00(int a1, int a2);
// [0x5d7d30] (1230 bytes) sub_5D7D30
// int *sub_5D7D30(uint8_t *a1);
// [0x5d8200] (849 bytes) sub_5D8200
// uint32_t *sub_5D8200(int a1);
// [0x5d8560] (784 bytes) sub_5D8560
// int sub_5D8560(int a1, uint32_t *a2, int a3, int a4, int a5, int a6);
// [0x5d8870] (134 bytes) sub_5D8870
// int sub_5D8870(int a1, uint32_t *a2, char a3);
// [0x5d8900] (658 bytes) sub_5D8900
// int sub_5D8900(int a1, int a2);
// [0x5d8ba0] (880 bytes) sub_5D8BA0
// int sub_5D8BA0( int *a1, char *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, ...);
// [0x5d8f10] (2301 bytes) sub_5D8F10
// int sub_5D8F10(uint32_t *a1);
// [0x5d9810] (4351 bytes) sub_5D9810
// int sub_5D9810(int a1, std::map<int,std::string> *a2);
// [0x5da910] (1278 bytes) sub_5DA910
// void sub_5DA910(uint32_t *a1);
// [0x5dae10] (2677 bytes) sub_5DAE10
// int sub_5DAE10(uint32_t *a1);
// [0x5db890] (1062 bytes) sub_5DB890
// float *sub_5DB890(unsigned int *a1, int a2, float *a3, int a4);
// [0x5dbcc0] (598 bytes) sub_5DBCC0
// float *sub_5DBCC0(unsigned int *a1, int a2, int a3);
// [0x5dbf20] (2395 bytes) sub_5DBF20
// int sub_5DBF20(int a1, int a2, int a3, uint32_t *a4, uint32_t *a5);
// [0x5dc880] (2413 bytes) sub_5DC880
// int sub_5DC880(int a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5);
// [0x5dd1f0] (2684 bytes) sub_5DD1F0
// int sub_5DD1F0(int a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5);
// [0x5ddc70] (165 bytes) sub_5DDC70
// int sub_5DDC70(std::deque<SSegmentExt *, GameAllocator<SSegmentExt *>> *a1, uint32_t *a2);
// [0x5ddd20] (254 bytes) sub_5DDD20
// int sub_5DDD20(uint32_t *a1, int a2);
// [0x5dde20] (284 bytes) sub_5DDE20
// uint32_t *sub_5DDE20(uint32_t *a1, int a2, int *a3, int *a4);
// [0x5ddf40] (215 bytes) sub_5DDF40
// int sub_5DDF40(int a1, int *a2);
// [0x5de020] (284 bytes) sub_5DE020
// uint32_t *sub_5DE020(uint32_t *a1, int a2, int *a3, int *a4);
// [0x5de140] (215 bytes) sub_5DE140
// int sub_5DE140(int a1, int *a2);
// [0x5de220] (994 bytes) sub_5DE220
// int sub_5DE220(char *a1, Json::Value *a2);
// [0x5de610] (528 bytes) sub_5DE610
// void sub_5DE610(char *a1);
// [0x5de820] (502 bytes) sub_5DE820
// void sub_5DE820(int a1);
// [0x5df910] (49 bytes) sub_5DF910
// void sub_5DF910(int a1, int a2, int a3);
// [0x5df950] (225 bytes) sub_5DF950
// int sub_5DF950();
// [0x5dfa40] (374 bytes) sub_5DFA40
// int sub_5DFA40(int a1);
// [0x5dfbc0] (423 bytes) sub_5DFBC0
// int sub_5DFBC0(char *a1, int a2);
// [0x5dfd70] (656 bytes) sub_5DFD70
// int sub_5DFD70(char *a1, int a2);
// [0x5e0000] (580 bytes) sub_5E0000
// int sub_5E0000(int a1, char **a2, char a3);
// [0x5e0250] (732 bytes) sub_5E0250
// int sub_5E0250(int a1, char **a2, char a3);
// [0x5e0530] (184 bytes) sub_5E0530
// int sub_5E0530(uint32_t *a1, char a2, uint8_t a3);
// [0x5e05f0] (276 bytes) sub_5E05F0
// int sub_5E05F0(int a1, uint32_t *a2, uint8_t a3, char a4, char a5);
// [0x5e0710] (721 bytes) sub_5E0710
// int sub_5E0710(int a1, uint32_t *a2);
// [0x5e09f0] (302 bytes) sub_5E09F0
// int sub_5E09F0();
// [0x5e0b20] (183 bytes) sub_5E0B20
// int *sub_5E0B20();
// [0x5e0be0] (848 bytes) sub_5E0BE0
// void sub_5E0BE0(int a1, int a2);
// [0x5e0f30] (5046 bytes) sub_5E0F30
// void sub_5E0F30(uint32_t *a1);
// [0x5e22f0] (381 bytes) sub_5E22F0
// void sub_5E22F0(int a1, int a2);
// [0x5e2470] (4905 bytes) sub_5E2470
// int sub_5E2470(int a1, float *a2);
// [0x5e37a0] (770 bytes) sub_5E37A0
// int sub_5E37A0(const char *a1);
// [0x5e3ab0] (249 bytes) sub_5E3AB0
// int sub_5E3AB0(int a1, char a2);
// [0x5e3bb0] (639 bytes) sub_5E3BB0
// int sub_5E3BB0(uint32_t *a1, int a2, int *a3, int a4, float a5);
// [0x5e3e50] (199 bytes) sub_5E3E50
// void sub_5E3E50(int a1, char a2);
// [0x5e3f20] (595 bytes) sub_5E3F20
// void sub_5E3F20(uint32_t *a1, void *a2);
// [0x5e4180] (961 bytes) sub_5E4180
// int sub_5E4180(uint32_t *a1, int a2);
// [0x5e4550] (1804 bytes) sub_5E4550
// void sub_5E4550(int *a1);
// [0x5e4c60] (590 bytes) sub_5E4C60
// unsigned int sub_5E4C60(unsigned int *a1);
// [0x5e4eb0] (172 bytes) sub_5E4EB0
// unsigned int sub_5E4EB0();
// [0x5e4f60] (210 bytes) sub_5E4F60
// int sub_5E4F60(int a1, int a2, unsigned int a3, int a4);
// [0x5e5040] (210 bytes) sub_5E5040
// int sub_5E5040(int a1, int a2, unsigned int a3, int a4);
// [0x5e5120] (1513 bytes) sub_5E5120
// int sub_5E5120(uint32_t *a1, char *a2);
// [0x5e5710] (511 bytes) sub_5E5710
// bool sub_5E5710(int a1);
// [0x5e5910] (382 bytes) sub_5E5910
// unsigned int sub_5E5910(int a1, int *a2, unsigned int a3);
// [0x5e5a90] (1265 bytes) sub_5E5A90
// char sub_5E5A90(int a1, int a2);
// [0x5e5f90] (24 bytes) sub_5E5F90
// uint32_t *sub_5E5F90(uint32_t *a1);
// [0x5e5fb0] (9 bytes) sub_5E5FB0
// int sub_5E5FB0();
// [0x5e5fc0] (9 bytes) sub_5E5FC0
// int sub_5E5FC0();
// [0x5e5fd0] (24 bytes) sub_5E5FD0
// uint32_t *sub_5E5FD0(uint32_t *a1);
// [0x5e5ff0] (24 bytes) sub_5E5FF0
// uint32_t *sub_5E5FF0(uint32_t *a1);
// [0x5e6010] (24 bytes) sub_5E6010
// uint32_t *sub_5E6010(uint32_t *a1);
// [0x5e6030] (24 bytes) sub_5E6030
// uint32_t *sub_5E6030(uint32_t *a1);
// [0x5e6050] (24 bytes) sub_5E6050
// uint32_t *sub_5E6050(uint32_t *a1);
// [0x5e6070] (24 bytes) sub_5E6070
// uint32_t *sub_5E6070(uint32_t *a1);
// [0x5e6090] (13 bytes) sub_5E6090
// int64_t sub_5E6090(int a1);
// [0x5e60a0] (12 bytes) sub_5E60A0
// int sub_5E60A0(int a1);
// [0x5e60b0] (23 bytes) sub_5E60B0
// uint32_t *sub_5E60B0(int a1, uint32_t *a2, uint32_t *a3);
// [0x5e60d0] (19 bytes) sub_5E60D0
// int sub_5E60D0(int a1, int a2, int a3);
// [0x5e60f0] (24 bytes) sub_5E60F0
// uint32_t *sub_5E60F0(uint32_t *a1);
// [0x5e6118] (1 bytes) nullsub_45
// void nullsub_45();
// [0x5e6128] (1 bytes) nullsub_46
// void nullsub_46();
// [0x5e6138] (1 bytes) nullsub_47
// void nullsub_47();
// [0x5e6148] (1 bytes) nullsub_48
// void nullsub_48();
// [0x5e6150] (22 bytes) sub_5E6150
// void *sub_5E6150();
// [0x5e6170] (12 bytes) sub_5E6170
// int sub_5E6170(int a1);
// [0x5e6180] (9 bytes) sub_5E6180
// int sub_5E6180();
// [0x5e6190] (9 bytes) sub_5E6190
// int sub_5E6190();
// [0x5e61a0] (9 bytes) sub_5E61A0
// int sub_5E61A0();
// [0x5e61b0] (9 bytes) sub_5E61B0
// int sub_5E61B0();
// [0x5e61c0] (24 bytes) sub_5E61C0
// uint32_t *sub_5E61C0(uint32_t *a1);
// [0x5e61e0] (24 bytes) sub_5E61E0
// uint32_t *sub_5E61E0(uint32_t *a1);
// [0x5e6208] (1 bytes) nullsub_49
// void nullsub_49();
// [0x5e6218] (1 bytes) nullsub_50
// void nullsub_50();
// [0x5e6228] (1 bytes) nullsub_51
// void nullsub_51();
// [0x5e6230] (57 bytes) sub_5E6230
// int sub_5E6230(int a1);
// [0x5e6270] (57 bytes) sub_5E6270
// int sub_5E6270(int a1);
// [0x5e62b8] (1 bytes) nullsub_52
// void nullsub_52();
// [0x5e62c8] (1 bytes) nullsub_53
// void nullsub_53();
// [0x5e62d0] (9 bytes) sub_5E62D0
// int sub_5E62D0();
// [0x5e62e0] (9 bytes) sub_5E62E0
// int sub_5E62E0();
// [0x5e62f8] (1 bytes) nullsub_54
// void nullsub_54();
// [0x5e6308] (1 bytes) nullsub_55
// void nullsub_55();
// [0x5e6310] (9 bytes) sub_5E6310
// int sub_5E6310();
// [0x5e6320] (9 bytes) sub_5E6320
// int sub_5E6320();
// [0x5e6330] (9 bytes) sub_5E6330
// int sub_5E6330();
// [0x5e6340] (15 bytes) sub_5E6340
// int sub_5E6340(int a1);
// [0x5e6350] (16 bytes) sub_5E6350
// bool sub_5E6350(int a1);
// [0x5e6360] (9 bytes) sub_5E6360
// int sub_5E6360();
// [0x5e6370] (9 bytes) sub_5E6370
// int sub_5E6370();
// [0x5e6380] (15 bytes) sub_5E6380
// int sub_5E6380(int a1);
// [0x5e6390] (12 bytes) sub_5E6390
// int sub_5E6390();
// [0x5e63a0] (12 bytes) sub_5E63A0
// uint32_t *sub_5E63A0(uint32_t *a1);
// [0x5e63b0] (9 bytes) sub_5E63B0
// int sub_5E63B0();
// [0x5e63c0] (12 bytes) sub_5E63C0
// int sub_5E63C0();
// [0x5e63d0] (9 bytes) sub_5E63D0
// long double sub_5E63D0();
// [0x5e63e0] (17 bytes) sub_5E63E0
// uint32_t *sub_5E63E0(uint32_t *a1);
// [0x5e6400] (37 bytes) sub_5E6400
// long double sub_5E6400(int a1);
// [0x5e6430] (15 bytes) sub_5E6430
// long double sub_5E6430(int a1);
// [0x5e6440] (9 bytes) sub_5E6440
// int sub_5E6440();
// [0x5e6450] (16 bytes) sub_5E6450
// bool sub_5E6450(int a1);
// [0x5e6460] (12 bytes) sub_5E6460
// int sub_5E6460();
// [0x5e6470] (29 bytes) sub_5E6470
// bool sub_5E6470(int a1);
// [0x5e6490] (9 bytes) sub_5E6490
// int sub_5E6490();
// [0x5e64a0] (17 bytes) sub_5E64A0
// int sub_5E64A0(int a1, char a2);
// [0x5e64c8] (1 bytes) nullsub_56
// void nullsub_56();
// [0x5e64d8] (1 bytes) nullsub_57
// void nullsub_57();
// [0x5e64e8] (1 bytes) nullsub_58
// void nullsub_58();
// [0x5e64f0] (9 bytes) sub_5E64F0
// int sub_5E64F0();
// [0x5e6500] (9 bytes) sub_5E6500
// int sub_5E6500();
// [0x5e6518] (1 bytes) nullsub_59
// void nullsub_59();
// [0x5e6520] (9 bytes) sub_5E6520
// int sub_5E6520();
// [0x5e6538] (1 bytes) nullsub_60
// void nullsub_60();
// [0x5e6548] (1 bytes) nullsub_61
// void nullsub_61();
// [0x5e6570] (12 bytes) sub_5E6570
// int sub_5E6570();
// [0x5e6590] (12 bytes) sub_5E6590
// int sub_5E6590();
// [0x5e65b0] (23 bytes) sub_5E65B0
// int sub_5E65B0(int a1);
// [0x5e65e0] (12 bytes) sub_5E65E0
// int sub_5E65E0();
// [0x5e6600] (64 bytes) sub_5E6600
// long double sub_5E6600(int a1);
// [0x5e6640] (64 bytes) sub_5E6640
// long double sub_5E6640(int a1);
// [0x5e6680] (15 bytes) sub_5E6680
// int sub_5E6680(int a1);
// [0x5e6690] (19 bytes) sub_5E6690
// int sub_5E6690(int a1);
// [0x5e66b0] (17 bytes) sub_5E66B0
// bool sub_5E66B0(int a1);
// [0x5e66d0] (17 bytes) sub_5E66D0
// bool sub_5E66D0(int a1);
// [0x5e66f0] (15 bytes) sub_5E66F0
// int sub_5E66F0(int a1);
// [0x5e6700] (22 bytes) sub_5E6700
// int *sub_5E6700();
// [0x5e6720] (28 bytes) sub_5E6720
// int sub_5E6720(int a1);
// [0x5e6740] (22 bytes) sub_5E6740
// int *sub_5E6740();
// [0x5e6760] (19 bytes) sub_5E6760
// bool sub_5E6760(int a1);
// [0x5e6788] (1 bytes) nullsub_62
// void nullsub_62();
// [0x5e6790] (24 bytes) sub_5E6790
// uint32_t *sub_5E6790(uint32_t *a1);
// [0x5e67b0] (24 bytes) sub_5E67B0
// uint32_t *sub_5E67B0(uint32_t *a1);
// [0x5e67d8] (1 bytes) nullsub_63
// void nullsub_63();
// [0x5e67e8] (1 bytes) nullsub_64
// void nullsub_64();
// [0x5e67f0] (9 bytes) sub_5E67F0
// long double sub_5E67F0();
// [0x5e6800] (9 bytes) sub_5E6800
// int sub_5E6800();
// [0x5e6818] (1 bytes) nullsub_65
// void nullsub_65();
// [0x5e6820] (12 bytes) sub_5E6820
// int sub_5E6820();
// [0x5e6830] (12 bytes) sub_5E6830
// int sub_5E6830();
// [0x5e6840] (28 bytes) sub_5E6840
// int sub_5E6840(int a1);
// [0x5e6860] (28 bytes) sub_5E6860
// int sub_5E6860(int a1);
// [0x5e6880] (12 bytes) sub_5E6880
// int sub_5E6880();
// [0x5e6890] (24 bytes) sub_5E6890
// uint32_t *sub_5E6890(uint32_t *a1);
// [0x5e68b0] (12 bytes) sub_5E68B0
// int sub_5E68B0(int a1);
// [0x5e68c0] (22 bytes) sub_5E68C0
// int *sub_5E68C0();
// [0x5e68e0] (12 bytes) sub_5E68E0
// int sub_5E68E0();
// [0x5e68f0] (28 bytes) sub_5E68F0
// uint32_t *sub_5E68F0(uint32_t *a1, uint32_t *a2);
// [0x5e6910] (14 bytes) sub_5E6910
// int sub_5E6910(int a1);
// [0x5e6920] (28 bytes) sub_5E6920
// uint32_t *sub_5E6920(uint32_t *a1, uint32_t *a2);
// [0x5e6940] (12 bytes) sub_5E6940
// long double sub_5E6940(int a1);
// [0x5e6950] (12 bytes) sub_5E6950
// long double sub_5E6950(int a1);
// [0x5e6960] (15 bytes) sub_5E6960
// long double sub_5E6960(int a1);
// [0x5e6978] (1 bytes) nullsub_66
// void nullsub_66();
// [0x5e6980] (16 bytes) sub_5E6980
// int sub_5E6980(int a1);
// [0x5e6990] (12 bytes) sub_5E6990
// int sub_5E6990(int a1);
// [0x5e69a0] (12 bytes) sub_5E69A0
// int sub_5E69A0(int a1);
// [0x5e69b0] (15 bytes) sub_5E69B0
// int sub_5E69B0(uint32_t *a1);
// [0x5e69c0] (22 bytes) sub_5E69C0
// int *sub_5E69C0();
// [0x5e69e0] (15 bytes) sub_5E69E0
// int sub_5E69E0(uint32_t *a1);
// [0x5e69f0] (22 bytes) sub_5E69F0
// int *sub_5E69F0();
// [0x5e6a10] (15 bytes) sub_5E6A10
// int sub_5E6A10(int a1);
// [0x5e6a20] (78 bytes) sub_5E6A20
// uint32_t *sub_5E6A20(uint32_t *a1);
// [0x5e6a70] (28 bytes) sub_5E6A70
// int sub_5E6A70(int a1);
// [0x5e6a90] (28 bytes) sub_5E6A90
// int sub_5E6A90(int a1);
// [0x5e6ab0] (24 bytes) sub_5E6AB0
// uint32_t *sub_5E6AB0(uint32_t *a1);
// [0x5e6ad0] (28 bytes) sub_5E6AD0
// int sub_5E6AD0(int a1);
// [0x5e6af0] (24 bytes) sub_5E6AF0
// uint32_t *sub_5E6AF0(uint32_t *a1);
// [0x5e6b18] (1 bytes) nullsub_67
// void nullsub_67();
// [0x5e6b20] (25 bytes) sub_5E6B20
// void sub_5E6B20();
// [0x5e6b40] (28 bytes) sub_5E6B40
// int sub_5E6B40(int a1);
// [0x5e6b60] (24 bytes) sub_5E6B60
// uint32_t *sub_5E6B60(uint32_t *a1);
// [0x5e6b88] (1 bytes) nullsub_68
// void nullsub_68();
// [0x5e6b98] (1 bytes) nullsub_69
// void nullsub_69();
// [0x5e6ba0] (29 bytes) sub_5E6BA0
// int64_t sub_5E6BA0(int a1);
// [0x5e6bc0] (12 bytes) sub_5E6BC0
// int sub_5E6BC0();
// [0x5e6bd0] (9 bytes) sub_5E6BD0
// int sub_5E6BD0();
// [0x5e6be0] (45 bytes) sub_5E6BE0
// int64_t sub_5E6BE0(int a1, int a2, int a3);
// [0x5e6c10] (9 bytes) sub_5E6C10
// int64_t sub_5E6C10();
// [0x5e6c20] (40 bytes) sub_5E6C20
// int sub_5E6C20(int a1, int a2);
// [0x5e6c50] (29 bytes) sub_5E6C50
// int64_t sub_5E6C50(int a1);
// [0x5e6c70] (45 bytes) sub_5E6C70
// int sub_5E6C70(uint32_t *a1);
// [0x5e6ca0] (28 bytes) sub_5E6CA0
// int sub_5E6CA0(int a1);
// [0x5e6cc0] (12 bytes) sub_5E6CC0
// int sub_5E6CC0();
// [0x5e6cd0] (14 bytes) sub_5E6CD0
// int sub_5E6CD0(int a1, int a2);
// [0x5e6ce0] (17 bytes) sub_5E6CE0
// int sub_5E6CE0(int a1);
// [0x5e6d00] (7 bytes) sub_5E6D00
// int sub_5E6D00(int a1);
// [0x5e6d10] (12 bytes) sub_5E6D10
// int sub_5E6D10();
// [0x5e6d20] (12 bytes) sub_5E6D20
// int sub_5E6D20(int a1);
// [0x5e6d30] (14 bytes) sub_5E6D30
// int sub_5E6D30(int a1, int a2);
// [0x5e6d40] (24 bytes) sub_5E6D40
// uint32_t *sub_5E6D40(uint32_t *a1);
// [0x5e6d68] (1 bytes) nullsub_70
// void nullsub_70();
// [0x5e6d70] (112 bytes) sub_5E6D70
// int sub_5E6D70(int a1, int a2, char a3);
// [0x5e6de0] (14 bytes) sub_5E6DE0
// int sub_5E6DE0(int a1);
// [0x5e6df0] (24 bytes) sub_5E6DF0
// uint32_t *sub_5E6DF0(uint32_t *a1);
// [0x5e6e10] (24 bytes) sub_5E6E10
// uint32_t *sub_5E6E10(uint32_t *a1);
// [0x5e6e30] (23 bytes) sub_5E6E30
// bool sub_5E6E30(int a1, int a2);
// [0x5e6e50] (18 bytes) sub_5E6E50
// int sub_5E6E50(int a1, int a2);
// [0x5e6e70] (59 bytes) sub_5E6E70
// bool sub_5E6E70(int a1, int a2);
// [0x5e6eb0] (29 bytes) sub_5E6EB0
// uint32_t *sub_5E6EB0(uint32_t *a1, int a2);
// [0x5e6ed8] (1 bytes) nullsub_71
// void nullsub_71();
// [0x5e6ee0] (23 bytes) sub_5E6EE0
// int sub_5E6EE0(int a1);
// [0x5e6f00] (12 bytes) sub_5E6F00
// int sub_5E6F00();
// [0x5e6f10] (9 bytes) sub_5E6F10
// int sub_5E6F10();
// [0x5e6f20] (14 bytes) sub_5E6F20
// int sub_5E6F20(int a1, int a2);
// [0x5e6f30] (27 bytes) sub_5E6F30
// int sub_5E6F30(int a1);
// [0x5e6f50] (27 bytes) sub_5E6F50
// int sub_5E6F50(int a1);
// [0x5e6f70] (242 bytes) sub_5E6F70
// int sub_5E6F70(int a1, int a2);
// [0x5e7070] (52 bytes) sub_5E7070
// int sub_5E7070(int a1, int a2);
// [0x5e70b0] (27 bytes) sub_5E70B0
// int sub_5E70B0(int a1);
// [0x5e70d0] (17 bytes) sub_5E70D0
// int sub_5E70D0(int a1, int a2, int a3);
// [0x5e70f0] (15 bytes) sub_5E70F0
// int sub_5E70F0(int a1);
// [0x5e7100] (12 bytes) sub_5E7100
// int sub_5E7100();
// [0x5e7110] (25 bytes) sub_5E7110
// char *sub_5E7110(uint32_t *a1);
// [0x5e7130] (25 bytes) sub_5E7130
// char *sub_5E7130(uint32_t *a1);
// [0x5e7158] (1 bytes) nullsub_72
// void nullsub_72();
// [0x5e7168] (1 bytes) nullsub_73
// void nullsub_73();
// [0x5e7178] (1 bytes) nullsub_74
// void nullsub_74();
// [0x5e7180] (9 bytes) sub_5E7180
// int sub_5E7180();
// [0x5e7190] (9 bytes) sub_5E7190
// int sub_5E7190();
// [0x5e71a0] (9 bytes) sub_5E71A0
// int sub_5E71A0();
// [0x5e71b0] (9 bytes) sub_5E71B0
// int sub_5E71B0();
// [0x5e71c0] (22 bytes) sub_5E71C0
// bool sub_5E71C0(int a1, int a2);
// [0x5e71e0] (17 bytes) sub_5E71E0
// int sub_5E71E0(int a1, int a2);
// [0x5e7200] (17 bytes) sub_5E7200
// int sub_5E7200(int a1, int a2);
// [0x5e7220] (12 bytes) sub_5E7220
// int sub_5E7220();
// [0x5e7230] (12 bytes) sub_5E7230
// int sub_5E7230();
// [0x5e7240] (12 bytes) sub_5E7240
// int sub_5E7240();
// [0x5e7250] (12 bytes) sub_5E7250
// int sub_5E7250();
// [0x5e7268] (1 bytes) nullsub_75
// void nullsub_75();
// [0x5e7278] (1 bytes) nullsub_76
// void nullsub_76();
// [0x5e7280] (30 bytes) sub_5E7280
// int sub_5E7280(int a1, int a2);
// [0x5e72a0] (7 bytes) sub_5E72A0
// int sub_5E72A0(int a1);
// [0x5e72b0] (12 bytes) sub_5E72B0
// int sub_5E72B0();
// [0x5e72c0] (7 bytes) sub_5E72C0
// int sub_5E72C0(int a1, int a2, int a3);
// [0x5e72d0] (36 bytes) sub_5E72D0
// int sub_5E72D0(int a1, int a2, int16_t a3);
// [0x5e7300] (25 bytes) sub_5E7300
// void sub_5E7300();
// [0x5e7320] (7 bytes) sub_5E7320
// int sub_5E7320(int a1);
// [0x5e7330] (24 bytes) sub_5E7330
// int sub_5E7330(int a1);
// [0x5e7350] (24 bytes) sub_5E7350
// bool sub_5E7350(int a1, int a2);
// [0x5e7370] (18 bytes) sub_5E7370
// int sub_5E7370(int a1, int a2);
// [0x5e7390] (23 bytes) sub_5E7390
// bool sub_5E7390(int a1, int a2);
// [0x5e73b0] (18 bytes) sub_5E73B0
// int sub_5E73B0(int a1, int a2);
// [0x5e73d0] (23 bytes) sub_5E73D0
// bool sub_5E73D0(int a1, int a2);
// [0x5e73f0] (18 bytes) sub_5E73F0
// int sub_5E73F0(int a1, int a2);
// [0x5e7410] (24 bytes) sub_5E7410
// bool sub_5E7410(int a1, int a2);
// [0x5e7430] (19 bytes) sub_5E7430
// int sub_5E7430(int a1, int a2);
// [0x5e7458] (1 bytes) nullsub_77
// void nullsub_77();
// [0x5e7460] (24 bytes) sub_5E7460
// uint32_t *sub_5E7460(uint32_t *a1);
// [0x5e7480] (42 bytes) sub_5E7480
// void sub_5E7480(uint32_t *a1);
// [0x5e74b0] (42 bytes) sub_5E74B0
// void sub_5E74B0(uint32_t *a1);
// [0x5e74e0] (42 bytes) sub_5E74E0
// void sub_5E74E0(uint32_t *a1);
// [0x5e7510] (42 bytes) sub_5E7510
// void sub_5E7510(uint32_t *a1);
// [0x5e7540] (42 bytes) sub_5E7540
// void sub_5E7540(uint32_t *a1);
// [0x5e7570] (42 bytes) sub_5E7570
// void sub_5E7570(uint32_t *a1);
// [0x5e75a0] (42 bytes) sub_5E75A0
// void sub_5E75A0(uint32_t *a1);
// [0x5e75d0] (42 bytes) sub_5E75D0
// void sub_5E75D0(uint32_t *a1);
// [0x5e7600] (42 bytes) sub_5E7600
// void sub_5E7600(uint32_t *a1);
// [0x5e7630] (42 bytes) sub_5E7630
// void sub_5E7630(uint32_t *a1);
// [0x5e7660] (42 bytes) sub_5E7660
// void sub_5E7660(uint32_t *a1);
// [0x5e7690] (42 bytes) sub_5E7690
// void sub_5E7690(uint32_t *a1);
// [0x5e76c0] (42 bytes) sub_5E76C0
// void sub_5E76C0(uint32_t *a1);
// [0x5e76f0] (42 bytes) sub_5E76F0
// void sub_5E76F0(uint32_t *a1);
// [0x5e7720] (42 bytes) sub_5E7720
// void sub_5E7720(uint32_t *a1);
// [0x5e7750] (42 bytes) sub_5E7750
// void sub_5E7750(uint32_t *a1);
// [0x5e7780] (42 bytes) sub_5E7780
// void sub_5E7780(uint32_t *a1);
// [0x5e77b0] (42 bytes) sub_5E77B0
// void sub_5E77B0(uint32_t *a1);
// [0x5e77e0] (46 bytes) sub_5E77E0
// void sub_5E77E0(uint8_t *a1);
// [0x5e7810] (46 bytes) sub_5E7810
// void sub_5E7810(uint8_t *a1);
// [0x5e7840] (46 bytes) sub_5E7840
// void sub_5E7840(uint8_t *a1);
// [0x5e7870] (46 bytes) sub_5E7870
// void sub_5E7870(uint8_t *a1);
// [0x5e78a0] (46 bytes) sub_5E78A0
// void sub_5E78A0(uint8_t *a1);
// [0x5e78d0] (46 bytes) sub_5E78D0
// void sub_5E78D0(uint8_t *a1);
// [0x5e7900] (46 bytes) sub_5E7900
// void sub_5E7900(uint8_t *a1);
// [0x5e7930] (46 bytes) sub_5E7930
// void sub_5E7930(uint8_t *a1);
// [0x5e7960] (42 bytes) sub_5E7960
// void sub_5E7960(uint32_t *a1);
// [0x5e7990] (42 bytes) sub_5E7990
// void sub_5E7990(uint32_t *a1);
// [0x5e79c0] (119 bytes) sub_5E79C0
// int (**sub_5E79C0(int a1))(int);
// [0x5e7a40] (123 bytes) sub_5E7A40
// int sub_5E7A40(int a1);
// [0x5e7ac0] (10 bytes) sub_5E7AC0
// int sub_5E7AC0(int a1);
// [0x5e7ad0] (55 bytes) sub_5E7AD0
// int sub_5E7AD0(int a1);
// [0x5e7b10] (45 bytes) sub_5E7B10
// void sub_5E7B10(uint32_t *a1);
// [0x5e7b40] (34 bytes) sub_5E7B40
// void sub_5E7B40(glf::TlsNode *a1);
// [0x5e7b70] (48 bytes) sub_5E7B70
// int sub_5E7B70(int a1, int a2);
// [0x5e7ba0] (184 bytes) sub_5E7BA0
// int sub_5E7BA0(int a1, int a2, int a3);
// [0x5e7c60] (195 bytes) sub_5E7C60
// int sub_5E7C60(int a1, int a2, char *a3);
// [0x5e7d30] (114 bytes) sub_5E7D30
// bool sub_5E7D30(uint32_t *a1, int a2);
// [0x5e7db0] (178 bytes) sub_5E7DB0
// int sub_5E7DB0(int a1, int a2, int a3);
// [0x5e7e70] (188 bytes) sub_5E7E70
// int sub_5E7E70(int a1, int a2, char *a3);
// [0x5e7f30] (177 bytes) sub_5E7F30
// int sub_5E7F30(int a1, int a2, int a3);
// [0x5e7ff0] (188 bytes) sub_5E7FF0
// int sub_5E7FF0(int a1, int a2, char *a3);
// [0x5e80b0] (177 bytes) sub_5E80B0
// int sub_5E80B0(int a1, int a2, int a3);
// [0x5e8170] (188 bytes) sub_5E8170
// int sub_5E8170(int a1, int a2, char *a3);
// [0x5e8230] (181 bytes) sub_5E8230
// int sub_5E8230(int a1, int a2, int a3);
// [0x5e82f0] (42 bytes) sub_5E82F0
// void sub_5E82F0(glitch::collada::CColladaFactory *a1);
// [0x5e8320] (67 bytes) sub_5E8320
// int sub_5E8320(int a1, int a2, int a3);
// [0x5e8370] (120 bytes) sub_5E8370
// void *sub_5E8370(int a1);
// [0x5e83f0] (15 bytes) sub_5E83F0
// int sub_5E83F0(glitch::scene::ISceneNode *a1);
// [0x5e8400] (15 bytes) sub_5E8400
// int sub_5E8400(glitch::scene::ISceneNode *a1);
// [0x5e8410] (137 bytes) sub_5E8410
// int (**sub_5E8410(glitch::scene::ISceneNode *a1))(int);
// [0x5e84a0] (192 bytes) sub_5E84A0
// int sub_5E84A0(int a1, int a2, char *a3);
// [0x5e8560] (174 bytes) sub_5E8560
// int sub_5E8560(int a1, int a2, int a3);
// [0x5e8610] (188 bytes) sub_5E8610
// int sub_5E8610(int a1, int a2, char *a3);
// [0x5e86d0] (174 bytes) sub_5E86D0
// int sub_5E86D0(int a1, int a2, int a3);
// [0x5e8780] (40 bytes) std::vector<MyTp,GameAllocator<MyTp>>::~vector()
// void std::vector<MyTp,GameAllocator<MyTp>>::~vector(std::vector<MyTp, GameAllocator<MyTp>> *this);
// [0x5e87b0] (174 bytes) sub_5E87B0
// int sub_5E87B0(int a1);
// [0x5e8860] (185 bytes) sub_5E8860
// int sub_5E8860(int a1, int a2, char *a3);
// [0x5e8920] (71 bytes) sub_5E8920
// int (**sub_5E8920(int a1))(int);
// [0x5e8970] (105 bytes) sub_5E8970
// int (**sub_5E8970(int a1))(int);
// [0x5e89e0] (65 bytes) sub_5E89E0
// vox::EmitterHandle *sub_5E89E0(vox::EmitterHandle *a1, int a2);
// [0x5e8a30] (52 bytes) sub_5E8A30
// int sub_5E8A30(int a1, int a2, uint32_t *a3);
// [0x5e8a70] (52 bytes) sub_5E8A70
// int sub_5E8A70(int a1, int a2, uint32_t *a3);
// [0x5e8ab0] (52 bytes) sub_5E8AB0
// int sub_5E8AB0(int a1, int a2, uint32_t *a3);
// [0x5e8af0] (52 bytes) sub_5E8AF0
// int sub_5E8AF0(int a1, int a2, uint32_t *a3);
// [0x5e8b30] (52 bytes) sub_5E8B30
// int sub_5E8B30(int a1, int a2, uint32_t *a3);
// [0x5e8b70] (52 bytes) sub_5E8B70
// int sub_5E8B70(int a1, int a2, uint32_t *a3);
// [0x5e8bb0] (52 bytes) sub_5E8BB0
// int sub_5E8BB0(int a1, int a2, uint32_t *a3);
// [0x5e8bf0] (52 bytes) sub_5E8BF0
// int sub_5E8BF0(int a1, int a2, uint32_t *a3);
// [0x5e8c30] (115 bytes) sub_5E8C30
// uint32_t *sub_5E8C30(int a1, int a2, uint32_t *a3);
// [0x5e8cb0] (48 bytes) sub_5E8CB0
// int sub_5E8CB0(int a1, int a2, char a3);
// [0x5e8ce0] (67 bytes) sub_5E8CE0
// void sub_5E8CE0(uint32_t *a1);
// [0x5e8d30] (64 bytes) sub_5E8D30
// void sub_5E8D30(glitch::collada::CColladaFactory *a1);
// [0x5e8d70] (42 bytes) sub_5E8D70
// void sub_5E8D70(glitch::collada::CColladaFactory *a1);
// [0x5e8da0] (64 bytes) sub_5E8DA0
// void sub_5E8DA0(glitch::collada::CColladaFactory *a1);
// [0x5e8de0] (79 bytes) sub_5E8DE0
// void sub_5E8DE0(char *a1);
// [0x5e8e30] (7 bytes) sub_5E8E30
// int sub_5E8E30(int a1);
// [0x5e8e40] (77 bytes) sub_5E8E40
// void sub_5E8E40(uint8_t *a1);
// [0x5e8e90] (81 bytes) sub_5E8E90
// int sub_5E8E90(uint32_t *a1, int a2, int *a3);
// [0x5e8ef0] (89 bytes) sub_5E8EF0
// int sub_5E8EF0(uint32_t *a1, int a2, int a3);
// [0x5e8f50] (89 bytes) sub_5E8F50
// int sub_5E8F50(uint32_t *a1, int a2, int a3);
// [0x5e8fb0] (157 bytes) sub_5E8FB0
// int sub_5E8FB0(uint32_t *a1, int a2, int *a3);
// [0x5e9050] (67 bytes) sub_5E9050
// void sub_5E9050(char *a1);
// [0x5e90a0] (144 bytes) sub_5E90A0
// uint32_t *sub_5E90A0(int a1);
// [0x5e9130] (165 bytes) sub_5E9130
// uint32_t *sub_5E9130(int a1);
// [0x5e91e0] (129 bytes) sub_5E91E0
// uint32_t *sub_5E91E0(int a1);
// [0x5e9270] (129 bytes) sub_5E9270
// uint32_t *sub_5E9270(int a1);
// [0x5e9300] (129 bytes) sub_5E9300
// uint32_t *sub_5E9300(int a1);
// [0x5e9390] (130 bytes) sub_5E9390
// int sub_5E9390(int a1);
// [0x5e9420] (136 bytes) sub_5E9420
// uint32_t *sub_5E9420(int a1);
// [0x5e94b0] (152 bytes) sub_5E94B0
// uint32_t *sub_5E94B0(uint32_t *a1);
// [0x5e9550] (15 bytes) sub_5E9550
// int sub_5E9550(glitch::scene::ISceneNode *a1);
// [0x5e9560] (15 bytes) sub_5E9560
// int sub_5E9560(glitch::scene::ISceneNode *a1);
// [0x5e9570] (145 bytes) sub_5E9570
// void sub_5E9570(glitch::scene::ISceneNode *a1);
// [0x5e9610] (98 bytes) sub_5E9610
// bool sub_5E9610(int a1, int a2);
// [0x5e9680] (386 bytes) sub_5E9680
// int sub_5E9680(int a1);
// [0x5e9810] (90 bytes) sub_5E9810
// void sub_5E9810(uint32_t *a1);
// [0x5e9870] (45 bytes) sub_5E9870
// int sub_5E9870(uint32_t *a1);
// [0x5e98a0] (45 bytes) sub_5E98A0
// int sub_5E98A0(uint32_t *a1);
// [0x5e98d0] (45 bytes) sub_5E98D0
// int sub_5E98D0(uint32_t *a1);
// [0x5e9900] (45 bytes) sub_5E9900
// int sub_5E9900(uint32_t *a1);
// [0x5e9930] (45 bytes) sub_5E9930
// int sub_5E9930(uint32_t *a1);
// [0x5e9960] (45 bytes) sub_5E9960
// int sub_5E9960(uint32_t *a1);
// [0x5e9990] (67 bytes) sub_5E9990
// void sub_5E9990(char *a1);
// [0x5e99e0] (78 bytes) sub_5E99E0
// int sub_5E99E0(uint32_t *a1);
// [0x5e9a30] (82 bytes) sub_5E9A30
// int sub_5E9A30(uint32_t *a1);
// [0x5e9a90] (67 bytes) sub_5E9A90
// void sub_5E9A90(char *a1);
// [0x5e9ae0] (67 bytes) sub_5E9AE0
// void sub_5E9AE0(char *a1);
// [0x5e9b30] (67 bytes) sub_5E9B30
// void sub_5E9B30(char *a1);
// [0x5e9b80] (67 bytes) sub_5E9B80
// void sub_5E9B80(char *a1);
// [0x5e9bd0] (45 bytes) sub_5E9BD0
// int sub_5E9BD0(uint32_t *a1);
// [0x5e9c00] (67 bytes) sub_5E9C00
// void sub_5E9C00(char *a1);
// [0x5e9c50] (45 bytes) sub_5E9C50
// int sub_5E9C50(uint32_t *a1);
// [0x5e9c80] (45 bytes) sub_5E9C80
// int sub_5E9C80(uint32_t *a1);
// [0x5e9cb0] (45 bytes) sub_5E9CB0
// int sub_5E9CB0(uint32_t *a1);
// [0x5e9ce0] (67 bytes) sub_5E9CE0
// void sub_5E9CE0(char *a1);
// [0x5e9d30] (45 bytes) sub_5E9D30
// int sub_5E9D30(uint32_t *a1);
// [0x5e9d60] (67 bytes) sub_5E9D60
// void sub_5E9D60(char *a1);
// [0x5e9db0] (45 bytes) sub_5E9DB0
// int sub_5E9DB0(uint32_t *a1);
// [0x5e9de0] (67 bytes) sub_5E9DE0
// void sub_5E9DE0(char *a1);
// [0x5e9e30] (67 bytes) sub_5E9E30
// void sub_5E9E30(char *a1);
// [0x5e9e80] (45 bytes) sub_5E9E80
// int sub_5E9E80(uint32_t *a1);
// [0x5e9eb0] (67 bytes) sub_5E9EB0
// void sub_5E9EB0(char *a1);
// [0x5e9f00] (67 bytes) sub_5E9F00
// void sub_5E9F00(char *a1);
// [0x5e9f50] (45 bytes) sub_5E9F50
// int sub_5E9F50(uint32_t *a1);
// [0x5e9f80] (67 bytes) sub_5E9F80
// void sub_5E9F80(char *a1);
// [0x5e9fd0] (45 bytes) sub_5E9FD0
// int sub_5E9FD0(uint32_t *a1);
// [0x5ea000] (67 bytes) sub_5EA000
// void sub_5EA000(char *a1);
// [0x5ea050] (67 bytes) sub_5EA050
// void sub_5EA050(char *a1);
// [0x5ea0a0] (82 bytes) sub_5EA0A0
// int sub_5EA0A0(uint32_t *a1);
// [0x5ea100] (86 bytes) sub_5EA100
// void sub_5EA100(char *a1);
// [0x5ea160] (97 bytes) sub_5EA160
// int sub_5EA160(uint32_t *a1);
// [0x5ea1d0] (105 bytes) sub_5EA1D0
// void sub_5EA1D0(char *a1);
// [0x5ea240] (90 bytes) sub_5EA240
// void sub_5EA240(uint32_t *a1);
// [0x5ea2a0] (105 bytes) sub_5EA2A0
// void sub_5EA2A0(void *a1);
// [0x5ea310] (109 bytes) sub_5EA310
// int (**sub_5EA310(int a1))(int);
// [0x5ea380] (187 bytes) sub_5EA380
// int sub_5EA380(int a1, int a2, char *a3);
// [0x5ea440] (113 bytes) sub_5EA440
// void sub_5EA440(char *a1);
// [0x5ea4c0] (75 bytes) sub_5EA4C0
// int sub_5EA4C0(int a1, int a2, char *s);
// [0x5ea510] (248 bytes) sub_5EA510
// int sub_5EA510(int a1, int a2, int a3);
// [0x5ea610] (127 bytes) sub_5EA610
// void sub_5EA610(void **a1);
// [0x5ea690] (13 bytes) sub_5EA690
// uint32_t *sub_5EA690(uint32_t *a1);
// [0x5ea6a0] (28 bytes) sub_5EA6A0
// uint32_t *sub_5EA6A0(uint32_t *a1, int a2);
// [0x5ea6c0] (13 bytes) sub_5EA6C0
// uint32_t *sub_5EA6C0(uint32_t *a1);
// [0x5ea6d0] (7 bytes) sub_5EA6D0
// int sub_5EA6D0(int a1);
// [0x5ea6e0] (964 bytes) sub_5EA6E0
// void sub_5EA6E0(int a1);
// [0x5eaab0] (13 bytes) sub_5EAAB0
// uint32_t *sub_5EAAB0(uint32_t *a1);
// [0x5eaac0] (13 bytes) sub_5EAAC0
// uint32_t *sub_5EAAC0(uint32_t *a1);
// [0x5eaad0] (200 bytes) sub_5EAAD0
// int sub_5EAAD0(int a1, int a2, int a3);
// [0x5eaba0] (173 bytes) sub_5EABA0
// uint32_t *sub_5EABA0(uint32_t *a1, int a2, int a3);
// [0x5eac50] (173 bytes) sub_5EAC50
// uint32_t *sub_5EAC50(uint32_t *a1, int a2, int a3);
// [0x5ead00] (13 bytes) sub_5EAD00
// uint32_t *sub_5EAD00(uint32_t *a1);
// [0x5ead10] (7 bytes) sub_5EAD10
// int sub_5EAD10(int a1);
// [0x5ead20] (485 bytes) sub_5EAD20
// int sub_5EAD20(int a1);
// [0x5eaf10] (372 bytes) sub_5EAF10
// int sub_5EAF10(uint32_t *a1, int a2);
// [0x5eb090] (476 bytes) sub_5EB090
// uint32_t *sub_5EB090(uint32_t *a1);
// [0x5eb270] (854 bytes) sub_5EB270
// void sub_5EB270(float *a1, float *a2);
// [0x5eb5d0] (703 bytes) sub_5EB5D0
// int sub_5EB5D0(int a1, float *a2, float *a3);
// [0x5eb890] (25 bytes) sub_5EB890
// volatile int32_t *sub_5EB890(volatile int32_t **a1);
// [0x5eb8b0] (277 bytes) sub_5EB8B0
// int sub_5EB8B0(int a1);
// [0x5eb9d0] (10 bytes) sub_5EB9D0
// int sub_5EB9D0(int a1);
// [0x5eb9e0] (235 bytes) sub_5EB9E0
// int (**sub_5EB9E0(int a1))(int);
// [0x5ebad0] (93 bytes) sub_5EBAD0
// int (**sub_5EBAD0(int a1))(int);
// [0x5ebb30] (101 bytes) sub_5EBB30
// void sub_5EBB30(void *a1);
// [0x5ebba0] (15 bytes) sub_5EBBA0
// int sub_5EBBA0(glitch::scene::ISceneNode *a1);
// [0x5ebbb0] (15 bytes) sub_5EBBB0
// int sub_5EBBB0(glitch::scene::ISceneNode *a1);
// [0x5ebbc0] (492 bytes) sub_5EBBC0
// int (**sub_5EBBC0(glitch::scene::ISceneNode *a1))(int);
// [0x5ebdb0] (15 bytes) sub_5EBDB0
// int sub_5EBDB0(glitch::scene::ISceneNode *a1);
// [0x5ebdc0] (15 bytes) sub_5EBDC0
// int sub_5EBDC0(glitch::scene::ISceneNode *a1);
// [0x5ebdd0] (56 bytes) sub_5EBDD0
// void sub_5EBDD0(glitch::scene::ISceneNode *a1);
// [0x5ebe10] (7 bytes) sub_5EBE10
// int sub_5EBE10(int a1);
// [0x5ebe20] (243 bytes) sub_5EBE20
// void sub_5EBE20(char *a1);
// [0x5ebf20] (149 bytes) sub_5EBF20
// float *sub_5EBF20(float *a1, int *a2);
// [0x5ebfc0] (1088 bytes) sub_5EBFC0
// int sub_5EBFC0(int a1);
// [0x5ec400] (148 bytes) sub_5EC400
// unsigned int sub_5EC400(char *a1);
// [0x5ec4a0] (200 bytes) sub_5EC4A0
// int *sub_5EC4A0(int a1);
// [0x5ec570] (135 bytes) sub_5EC570
// int *sub_5EC570();
// [0x5ec600] (91 bytes) sub_5EC600
// int sub_5EC600( int a1, int a2, int a3, int a4, int a5, std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a6, std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a7);
// [0x5ec660] (81 bytes) sub_5EC660
// glitch::collada::CColladaFactory *sub_5EC660(glitch::collada::CColladaFactory *a1);
// [0x5ec6c0] (97 bytes) sub_5EC6C0
// int sub_5EC6C0(int a1);
// [0x5ec730] (58 bytes) sub_5EC730
// int sub_5EC730(int a1);
// [0x5ec770] (66 bytes) sub_5EC770
// int sub_5EC770(int a1);
// [0x5ec7c0] (89 bytes) sub_5EC7C0
// int sub_5EC7C0(int a1);
// [0x5ec820] (89 bytes) sub_5EC820
// int sub_5EC820(int a1);
// [0x5ec880] (67 bytes) sub_5EC880
// int sub_5EC880(int a1, int a2, int a3, int a4);
// [0x5ec8d0] (97 bytes) sub_5EC8D0
// glitch::collada::CColladaFactory *sub_5EC8D0(glitch::collada::CColladaFactory *a1);
// [0x5ec940] (97 bytes) sub_5EC940
// int sub_5EC940(int a1);
// [0x5ec9b0] (79 bytes) sub_5EC9B0
// int sub_5EC9B0(uint32_t *a1);
// [0x5eca00] (60 bytes) sub_5ECA00
// bool sub_5ECA00(int a1);
// [0x5eca40] (1138 bytes) sub_5ECA40
// int sub_5ECA40(int a1);
// [0x5ecec0] (150 bytes) sub_5ECEC0
// int sub_5ECEC0(uint32_t *a1);
// [0x5ecf60] (69 bytes) sub_5ECF60
// long double sub_5ECF60(float *a1);
// [0x5ecfb0] (736 bytes) sub_5ECFB0
// unsigned int sub_5ECFB0(int a1, int a2);
// [0x5ed290] (310 bytes) sub_5ED290
// unsigned int sub_5ED290(uint32_t *a1, int **a2);
// [0x5ed3d0] (126 bytes) sub_5ED3D0
// float *sub_5ED3D0(float *a1);
// [0x5ed450] (48 bytes) sub_5ED450
// volatile int32_t **sub_5ED450(volatile int32_t **a1, volatile int32_t **a2);
// [0x5ed480] (111 bytes) sub_5ED480
// int sub_5ED480(int *a1);
// [0x5ed4f0] (114 bytes) sub_5ED4F0
// int sub_5ED4F0(glitch::video::CMaterial **a1);
// [0x5ed570] (93 bytes) sub_5ED570
// int sub_5ED570(volatile int32_t **a1);
// [0x5ed5d0] (753 bytes) sub_5ED5D0
// int sub_5ED5D0(float *a1, float *a2, float *a3, float *a4);
// [0x5ed8d0] (1793 bytes) sub_5ED8D0
// int sub_5ED8D0(float *a1, float *a2);
// [0x5edfe0] (25 bytes) sub_5EDFE0
// uint32_t *sub_5EDFE0(uint32_t **a1);
// [0x5ee000] (1054 bytes) sub_5EE000
// uint32_t *sub_5EE000(int a1);
// [0x5ee420] (325 bytes) sub_5EE420
// uint32_t *sub_5EE420(int a1);
// [0x5ee570] (310 bytes) sub_5EE570
// int (**sub_5EE570(int a1))(int);
// [0x5ee6b0] (56 bytes) sub_5EE6B0
// void sub_5EE6B0(void *a1);
// [0x5ee6f0] (93 bytes) sub_5EE6F0
// int sub_5EE6F0(volatile int32_t **a1);
// [0x5ee750] (142 bytes) sub_5EE750
// int *sub_5EE750();
// [0x5ee7e0] (78 bytes) sub_5EE7E0
// int sub_5EE7E0(int a1);
// [0x5ee830] (355 bytes) sub_5EE830
// int sub_5EE830(glf *a1, uint32_t *a2, uint8_t *a3);
// [0x5ee9a0] (355 bytes) sub_5EE9A0
// int sub_5EE9A0(glf *a1, uint32_t *a2, uint8_t *a3);
// [0x5eeb10] (355 bytes) sub_5EEB10
// int sub_5EEB10(glf *a1, uint32_t *a2, uint8_t *a3);
// [0x5eec80] (355 bytes) sub_5EEC80
// int sub_5EEC80(glf *a1, uint32_t *a2, uint8_t *a3);
// [0x5eedf0] (355 bytes) sub_5EEDF0
// int sub_5EEDF0(glf *a1, uint32_t *a2, uint8_t *a3);
// [0x5eef60] (363 bytes) sub_5EEF60
// int sub_5EEF60(glf *a1, uint32_t *a2, uint8_t *a3);
// [0x5ef0d0] (363 bytes) sub_5EF0D0
// int sub_5EF0D0(glf *a1, uint32_t *a2, uint8_t *a3);
// [0x5ef240] (355 bytes) sub_5EF240
// int sub_5EF240(glf *a1, uint32_t *a2, uint8_t *a3);
// [0x5ef3b0] (355 bytes) sub_5EF3B0
// int sub_5EF3B0(glf *a1, uint32_t *a2, uint8_t *a3);
// [0x5ef520] (355 bytes) sub_5EF520
// int sub_5EF520(glf *a1, uint32_t *a2, uint8_t *a3);
// [0x5ef690] (355 bytes) sub_5EF690
// int sub_5EF690(glf *a1, uint32_t *a2, uint8_t *a3);
// [0x5ef800] (355 bytes) sub_5EF800
// int sub_5EF800(glf *a1, uint32_t *a2, uint8_t *a3);
// [0x5ef970] (379 bytes) sub_5EF970
// uint32_t *sub_5EF970(glf *a1, uint32_t *a2, uint8_t *a3);
// [0x5efaf0] (355 bytes) sub_5EFAF0
// int sub_5EFAF0(glf *a1, uint32_t *a2, uint8_t *a3);
// [0x5efc60] (355 bytes) sub_5EFC60
// int sub_5EFC60(glf *a1, uint32_t *a2, uint8_t *a3);
// [0x5efdd0] (355 bytes) sub_5EFDD0
// int sub_5EFDD0(glf *a1, uint32_t *a2, uint8_t *a3);
// [0x5eff40] (355 bytes) sub_5EFF40
// int sub_5EFF40(glf *a1, uint32_t *a2, uint8_t *a3);
// [0x5f00b0] (355 bytes) sub_5F00B0
// int sub_5F00B0(glf *a1, uint32_t *a2, uint8_t *a3);
// [0x5f0220] (355 bytes) sub_5F0220
// int sub_5F0220(glf *a1, uint32_t *a2, uint8_t *a3);
// [0x5f0390] (355 bytes) sub_5F0390
// int sub_5F0390(glf *a1, uint32_t *a2, uint8_t *a3);
// [0x5f0500] (355 bytes) sub_5F0500
// int sub_5F0500(glf *a1, uint32_t *a2, uint8_t *a3);
// [0x5f0670] (355 bytes) sub_5F0670
// int sub_5F0670(glf *a1, uint32_t *a2, uint8_t *a3);
// [0x5f07e0] (355 bytes) sub_5F07E0
// int sub_5F07E0(glf *a1, uint32_t *a2, uint8_t *a3);
// [0x5f0950] (355 bytes) sub_5F0950
// int sub_5F0950(glf *a1, uint32_t *a2, uint8_t *a3);
// [0x5f0ac0] (355 bytes) sub_5F0AC0
// int sub_5F0AC0(glf *a1, uint32_t *a2, uint8_t *a3);
// [0x5f0c30] (355 bytes) sub_5F0C30
// int sub_5F0C30(glf *a1, uint32_t *a2, uint8_t *a3);
// [0x5f0da0] (355 bytes) sub_5F0DA0
// int sub_5F0DA0(glf *a1, uint32_t *a2, uint8_t *a3);
// [0x5f0f10] (355 bytes) sub_5F0F10
// int sub_5F0F10(glf *a1, uint32_t *a2, uint8_t *a3);
// [0x5f1080] (355 bytes) sub_5F1080
// int sub_5F1080(glf *a1, uint32_t *a2, uint8_t *a3);
// [0x5f11f0] (355 bytes) sub_5F11F0
// int sub_5F11F0(glf *a1, uint32_t *a2, uint8_t *a3);
// [0x5f1360] (728 bytes) sub_5F1360
// int sub_5F1360(glf *a1, uint32_t *a2, uint8_t *a3);
// [0x5f1640] (643 bytes) sub_5F1640
// int sub_5F1640(glf *a1, uint32_t *a2, uint8_t *a3);
// [0x5f18d0] (824 bytes) sub_5F18D0
// int sub_5F18D0(glf *a1, uint32_t *a2, uint8_t *a3);
// [0x5f1c10] (168 bytes) sub_5F1C10
// int sub_5F1C10(int a1, char *a2, int a3, int a4);
// [0x5f1cc0] (3089 bytes) sub_5F1CC0
// int sub_5F1CC0(int *a1);
// [0x5f28e0] (142 bytes) sub_5F28E0
// int *sub_5F28E0();
// [0x5f2970] (233 bytes) __gnu_cxx::__normal_iterator<Projectile * const*,std::vector<Projectile *,std::allocator<Projectile *>>> std::find<__gnu_cxx::__normal_iterator<Projectile * const*,std::vector<Projectile *,std::allocator<Projectile *>>>,Projectile *>(__gnu_cxx::__normal_iterator<Projectile * const*,std::vector<Projectile *,std::allocator<Projectile *>>>,__gnu_cxx::__normal_iterator<Projectile * const*,std::vector<Projectile *,std::allocator<Projectile *>>>,Projectile * const&)
// uint32_t *std::find<__gnu_cxx::__normal_iterator<Projectile * const*,std::vector<Projectile *>>,Projectile *>( uint32_t *a1, uint32_t *a2, int a3, int *a4);
// [0x5f2a60] (142 bytes) sub_5F2A60
// void *sub_5F2A60();
// [0x5f2af0] (550 bytes) sub_5F2AF0
// uint32_t *sub_5F2AF0(unsigned int *a1);
// [0x5f2d20] (531 bytes) sub_5F2D20
// int sub_5F2D20(unsigned int *a1);
// [0x5f2f40] (408 bytes) std::deque<ValueMap,std::allocator<ValueMap>>::~deque()
// void std::deque<ValueMap>::~deque(std::deque<ValueMap> *this);
// [0x5f30f0] (2450 bytes) sub_5F30F0
// void sub_5F30F0( int a1, uint32_t *a2, int *a3, char a4, char a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, unsigned int a15);
// [0x5f3a90] (1348 bytes) sub_5F3A90
// int *sub_5F3A90(int *a1, int a2, int a3, int a4);
// [0x5f3fe0] (395 bytes) sub_5F3FE0
// int sub_5F3FE0(int a1, int a2);
// [0x5f4170] (566 bytes) sub_5F4170
// int sub_5F4170(int a1, int a2, int a3);
// [0x5f43f0] (109 bytes) sub_5F43F0
// int sub_5F43F0(int a1, int a2);
// [0x5f4460] (28 bytes) sub_5F4460
// int sub_5F4460(uint32_t *a1, uint32_t *a2);
// [0x5f4480] (14 bytes) sub_5F4480
// int sub_5F4480(int a1, int a2);
// [0x5f4490] (14 bytes) sub_5F4490
// int sub_5F4490(int a1, int a2);
// [0x5f44a0] (37 bytes) sub_5F44A0
// int sub_5F44A0(int a1);
// [0x5f44d0] (37 bytes) sub_5F44D0
// int sub_5F44D0(int a1);
// [0x5f4500] (292 bytes) sub_5F4500
// int sub_5F4500(int a1, float *a2, uint32_t *a3, int *a4);
// [0x5f4630] (104 bytes) sub_5F4630
// uint32_t *sub_5F4630(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4);
// [0x5f46b0] (1065 bytes) sub_5F46B0
// void sub_5F46B0(int a1, int a2);
// [0x5f4b00] (809 bytes) sub_5F4B00
// int sub_5F4B00(int a1, float *a2, float a3);
// [0x5f4e30] (215 bytes) sub_5F4E30
// int sub_5F4E30(int a1, int a2, int a3, int a4);
// [0x5f4f40] (378 bytes) sub_5F4F40
// uint16_t *sub_5F4F40(int a1, uint32_t *a2);
// [0x5f50c0] (788 bytes) sub_5F50C0
// int sub_5F50C0(int a1, float *a2, float a3);
// [0x5f53f0] (91 bytes) sub_5F53F0
// int sub_5F53F0(int *a1, uint32_t *a2);
// [0x5f5450] (69 bytes) sub_5F5450
// uint16_t *sub_5F5450(int *a1, uint16_t *a2);
// [0x5f54d0] (56 bytes) sub_5F54D0
// uint16_t *sub_5F54D0(int a1, int *a2);
// [0x5f5550] (142 bytes) sub_5F5550
// int *sub_5F5550();
// [0x5f55e0] (106 bytes) sub_5F55E0
// glitch::core *sub_5F55E0(glitch::core **a1);
// [0x5f5650] (58 bytes) sub_5F5650
// int sub_5F5650(glf *a1, char *a2, ...);
// [0x5f5690] (590 bytes) std::map<std::string,MyLodRanges *,std::less<std::string>,std::allocator<std::pair<std::string const,MyLodRanges *>>>::operator[](std::string const&)
// int std::map<std::string,MyLodRanges *>::operator[](uint32_t *a1, int a2);
// [0x5f58e0] (632 bytes) std::map<int,std::string,std::less<int>,std::allocator<std::pair<int const,std::string>>>::operator[](int const&)
// uint32_t *std::map<int,std::string>::operator[](std::map<int,std::string> *this, int *a2);
// [0x5f5b60] (475 bytes) std::map<int,bool,std::less<int>,std::allocator<std::pair<int const,bool>>>::operator[](int const&)
// char *std::map<int,bool>::operator[](std::map<int,bool> *this, int *a2);
// [0x5f5d40] (407 bytes) std::map<int,AnalogStickMov,std::less<int>,std::allocator<std::pair<int const,AnalogStickMov>>>::operator[](int const&)
// uint32_t *std::map<int,AnalogStickMov>::operator[](std::map<int,AnalogStickMov> *this, int *a2);
// [0x5f5ee0] (636 bytes) std::list<long,GameAllocator<long>>::sort(void)
// std::list<long, GameAllocator<long>> *std::list<long,GameAllocator<long>>::sort( std::list<long, GameAllocator<long>> *this);
// [0x5f6160] (184 bytes) std::map<std::string,AD_AVAILABILITY,std::less<std::string>,std::allocator<std::pair<std::string const,AD_AVAILABILITY>>>::operator[](std::string const&)
// int std::map<std::string,AD_AVAILABILITY>::operator[](uint32_t *a1, int a2);
// [0x5f6220] (1244 bytes) sub_5F6220
// int sub_5F6220(float *a1, float *a2);
// [0x5f6700] (567 bytes) std::_Rb_tree<int,std::pair<int const,ValueMap::ValueData>,std::_Select1st<std::pair<int const,ValueMap::ValueData>>,std::less<int>,std::allocator<std::pair<int const,ValueMap::ValueData>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,ValueMap::ValueData>> *)
// void std::_Rb_tree<int,std::pair<int const,ValueMap::ValueData>,std::_Select1st<std::pair<int const,ValueMap::ValueData>>,std::less<int>,std::allocator<std::pair<int const,ValueMap::ValueData>>>::_M_erase( int a1, uint32_t *a2);
// [0x5f6940] (84 bytes) sub_5F6940
// void sub_5F6940(int a1);
// [0x5f69a0] (92 bytes) sub_5F69A0
// void sub_5F69A0(uint32_t **a1);
// [0x5f6a00] (436 bytes) std::vector<Gangstar::Handleable **,std::allocator<Gangstar::Handleable **>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Gangstar::Handleable ***,std::vector<Gangstar::Handleable **,std::allocator<Gangstar::Handleable **>>>,Gangstar::Handleable ** const&)
// void std::vector<Gangstar::Handleable **>::_M_insert_aux(int a1, char *src, int *a3);
// [0x5f6bc0] (1755 bytes) sub_5F6BC0
// int sub_5F6BC0(glf *a1, uint32_t *a2, uint8_t *a3);
// [0x5f72a0] (595 bytes) sub_5F72A0
// int sub_5F72A0(glf *a1, uint32_t *a2, uint8_t *a3);
// [0x5f7500] (436 bytes) std::vector<Gangstar::Handle<PhysicsBody,false> *,std::allocator<Gangstar::Handle<PhysicsBody,false> *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Gangstar::Handle<PhysicsBody,false> **,std::vector<Gangstar::Handle<PhysicsBody,false> *,std::allocator<Gangstar::Handle<PhysicsBody,false> *>>>,Gangstar::Handle<PhysicsBody,false> * const&)
// void std::vector<Gangstar::Handle<PhysicsBody,false> *,std::allocator<Gangstar::Handle<PhysicsBody,false> *>>::_M_insert_aux( int a1, char *src, int *a3);
// [0x5f76c0] (169 bytes) sub_5F76C0
// void sub_5F76C0(uint32_t *a1, int a2);
// [0x5f7770] (169 bytes) sub_5F7770
// void sub_5F7770(uint32_t *a1, int a2);
// [0x5f7820] (137 bytes) sub_5F7820
// void sub_5F7820(uint32_t *a1, int a2);
// [0x5f78b0] (333 bytes) sub_5F78B0
// int sub_5F78B0(uint32_t *a1, int a2);
// [0x5f7a00] (596 bytes) sub_5F7A00
// uint32_t *sub_5F7A00(uint32_t *a1, uint32_t *a2);
// [0x5f7c60] (2460 bytes) std::vector<PhysicsBox,std::allocator<PhysicsBox>>::_M_insert_aux(__gnu_cxx::__normal_iterator<PhysicsBox*,std::vector<PhysicsBox,std::allocator<PhysicsBox>>>,PhysicsBox const&)
// void std::vector<PhysicsBox>::_M_insert_aux(int *a1, void **a2, uint32_t *a3);
// [0x5f8600] (436 bytes) std::vector<Projectile *,std::allocator<Projectile *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Projectile **,std::vector<Projectile *,std::allocator<Projectile *>>>,Projectile * const&)
// void std::vector<Projectile *>::_M_insert_aux(int a1, char *src, int *a3);
// [0x5f87c0] (1075 bytes) sub_5F87C0
// float *sub_5F87C0(float *a1, float *a2, float *a3);
// [0x5f8c00] (425 bytes) std::_Rb_tree<unsigned int,std::pair<unsigned int const,ObjectCreationMapItem>,std::_Select1st<std::pair<unsigned int const,ObjectCreationMapItem>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ObjectCreationMapItem>>>::_M_erase(std::_Rb_tree_node<std::pair<unsigned int const,ObjectCreationMapItem>> *)
// void std::_Rb_tree<unsigned int,std::pair<unsigned int const,ObjectCreationMapItem>,std::_Select1st<std::pair<unsigned int const,ObjectCreationMapItem>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ObjectCreationMapItem>>>::_M_erase( int a1, uint32_t *a2);
// [0x5f8db0] (41 bytes) std::map<unsigned int,ObjectCreationMapItem,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ObjectCreationMapItem>>>::~map()
// void std::map<unsigned int,ObjectCreationMapItem>::~map(std::map<unsigned int,ObjectCreationMapItem> *this);
// [0x5f8de0] (698 bytes) std::_Rb_tree<std::string,std::pair<std::string const,GLFUtils::FileListEntry>,std::_Select1st<std::pair<std::string const,GLFUtils::FileListEntry>>,std::less<std::string>,std::allocator<std::pair<std::string const,GLFUtils::FileListEntry>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,GLFUtils::FileListEntry>> *)
// void std::_Rb_tree<std::string,std::pair<std::string const,GLFUtils::FileListEntry>,std::_Select1st<std::pair<std::string const,GLFUtils::FileListEntry>>,std::less<std::string>,std::allocator<std::pair<std::string const,GLFUtils::FileListEntry>>>::_M_erase( int a1, uint32_t *a2);
// [0x5f90a0] (536 bytes) std::deque<ValueMap,std::allocator<ValueMap>>::_M_push_back_aux(ValueMap const&)
// char *std::deque<ValueMap>::_M_push_back_aux(void **a1, int a2);
// [0x5f92c0] (425 bytes) std::_Rb_tree<int,std::pair<int const,int>,std::_Select1st<std::pair<int const,int>>,std::less<int>,std::allocator<std::pair<int const,int>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,int>> *)
// void std::_Rb_tree<int,std::pair<int const,int>,std::_Select1st<std::pair<int const,int>>,std::less<int>,std::allocator<std::pair<int const,int>>>::_M_erase( int a1, uint32_t *a2);
// [0x5f9470] (454 bytes) std::vector<int,GameAllocator<int>>::_M_insert_aux(__gnu_cxx::__normal_iterator<int *,std::vector<int,GameAllocator<int>>>,int const&)
// int std::vector<int,GameAllocator<int>>::_M_insert_aux(int *a1, char *src, int *a3);
// [0x5f9640] (1122 bytes) sub_5F9640
// int sub_5F9640(float *a1, int a2, uint32_t *a3);
// [0x5f9ab0] (612 bytes) std::vector<glitch::core::line2d<float>,glitch::core::SAllocator<glitch::core::line2d<float>,(glitch::memory::E_MEMORY_HINT)0>>::_M_insert_aux(__gnu_cxx::__normal_iterator<glitch::core::line2d<float>*,std::vector<glitch::core::line2d<float>,glitch::core::SAllocator<glitch::core::line2d<float>,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::core::line2d<float> const&)
// char *std::vector<glitch::core::line2d<float>,glitch::core::SAllocator<glitch::core::line2d<float>,(glitch::memory::E_MEMORY_HINT)0>>::_M_insert_aux(;
// [0x5f9d20] (425 bytes) std::_Rb_tree<SSegmentExt *,SSegmentExt *,std::_Identity<SSegmentExt *>,std::less<SSegmentExt *>,std::allocator<SSegmentExt *>>::_M_erase(std::_Rb_tree_node<SSegmentExt *> *)
// void std::_Rb_tree<SSegmentExt *,SSegmentExt *,std::_Identity<SSegmentExt *>,std::less<SSegmentExt *>,std::allocator<SSegmentExt *>>::_M_erase( int a1, uint32_t *a2);
// [0x5f9ed0] (4054 bytes) sub_5F9ED0
// uint32_t *sub_5F9ED0(int a1);
// [0x5faeb0] (425 bytes) std::_Rb_tree<unsigned int,std::pair<unsigned int const,Spline *>,std::_Select1st<std::pair<unsigned int const,Spline *>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Spline *>>>::_M_erase(std::_Rb_tree_node<std::pair<unsigned int const,Spline *>> *)
// void std::_Rb_tree<unsigned int,std::pair<unsigned int const,Spline *>,std::_Select1st<std::pair<unsigned int const,Spline *>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Spline *>>>::_M_erase( int a1, uint32_t *a2);
// [0x5fb060] (337 bytes) sub_5FB060
// volatile int32_t *sub_5FB060(int a1);
// [0x5fb1c0] (10 bytes) sub_5FB1C0
// int sub_5FB1C0(int a1);
// [0x5fb1d0] (709 bytes) sub_5FB1D0
// void (__noreturn **sub_5FB1D0(int a1))();
// [0x5fb4a0] (7 bytes) sub_5FB4A0
// int sub_5FB4A0(int a1);
// [0x5fb4b0] (56 bytes) sub_5FB4B0
// void sub_5FB4B0(void *a1);
// [0x5fb4f0] (374 bytes) sub_5FB4F0
// unsigned int sub_5FB4F0(int a1, unsigned int a2);
// [0x5fb670] (7 bytes) sub_5FB670
// int sub_5FB670(int a1, int a2);
// [0x5fb680] (325 bytes) sub_5FB680
// int sub_5FB680(int a1, int a2);
// [0x5fb7d0] (408 bytes) sub_5FB7D0
// void *sub_5FB7D0(uint32_t *a1, void **a2, void **a3, unsigned int a4);
// [0x5fb970] (1161 bytes) sub_5FB970
// void *sub_5FB970(int a1);
// [0x5fbe00] (29 bytes) sub_5FBE00
// int sub_5FBE00(int a1, uint32_t *a2);
// [0x5fbe20] (605 bytes) sub_5FBE20
// int sub_5FBE20(int a1);
// [0x5fc080] (613 bytes) sub_5FC080
// int sub_5FC080(int a1);
// [0x5fc2f0] (81 bytes) sub_5FC2F0
// int sub_5FC2F0(uint32_t *a1, int a2);
// [0x5fc350] (408 bytes) sub_5FC350
// void *sub_5FC350(uint32_t *a1, void **a2, void **a3, unsigned int a4);
// [0x5fc4f0] (283 bytes) sub_5FC4F0
// void sub_5FC4F0(glitch::core::interleaved_data_allocator::SInPlaceMetaDataPolicy *a1);
// [0x5fc610] (283 bytes) sub_5FC610
// void sub_5FC610(glitch::core::interleaved_data_allocator::SInPlaceMetaDataPolicy *a1);
// [0x5fc730] (792 bytes) sub_5FC730
// int sub_5FC730(int a1, uint32_t *a2);
// [0x5fca50] (102 bytes) sub_5FCA50
// int sub_5FCA50(int a1);
// [0x5fcac0] (498 bytes) std::vector<WorldPart::SDistanceSegExtEntry,std::allocator<WorldPart::SDistanceSegExtEntry>>::_M_insert_aux(__gnu_cxx::__normal_iterator<WorldPart::SDistanceSegExtEntry*,std::vector<WorldPart::SDistanceSegExtEntry,std::allocator<WorldPart::SDistanceSegExtEntry>>>,WorldPart::SDistanceSegExtEntry const&)
// void std::vector<WorldPart::SDistanceSegExtEntry>::_M_insert_aux(int a1, char *src, int *a3);
// [0x5fccc0] (436 bytes) std::vector<WorldPart *,std::allocator<WorldPart *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<WorldPart **,std::vector<WorldPart *,std::allocator<WorldPart *>>>,WorldPart * const&)
// void std::vector<WorldPart *>::_M_insert_aux(int a1, char *src, int *a3);
// [0x5fce80] (602 bytes) std::vector<glitch::core::vector3d<float>,GameAllocator<glitch::core::vector3d<float>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<glitch::core::vector3d<float>*,std::vector<glitch::core::vector3d<float>,GameAllocator<glitch::core::vector3d<float>>>>,glitch::core::vector3d<float> const&)
// uint32_t *std::vector<glitch::core::vector3d<float>,GameAllocator<glitch::core::vector3d<float>>>::_M_insert_aux( int *a1, char *a2, int *a3);
// [0x5fd0e0] (570 bytes) std::vector<MyTp,GameAllocator<MyTp>>::_M_insert_aux(__gnu_cxx::__normal_iterator<MyTp*,std::vector<MyTp,GameAllocator<MyTp>>>,MyTp const&)
// size_t std::vector<MyTp,GameAllocator<MyTp>>::_M_insert_aux(int *a1, int a2, int *a3);
// [0x5fd320] (781 bytes) std::vector<RewardItem,std::allocator<RewardItem>>::_M_insert_aux(__gnu_cxx::__normal_iterator<RewardItem*,std::vector<RewardItem,std::allocator<RewardItem>>>,RewardItem const&)
// int std::vector<RewardItem>::_M_insert_aux(void **a1, char *a2, int *a3);
// [0x5fd630] (145 bytes) sub_5FD630
// int sub_5FD630();
// [0x5fd6d0] (1084 bytes) std::vector<float,glitch::core::SAllocator<float,(glitch::memory::E_MEMORY_HINT)0>>::_M_fill_insert(__gnu_cxx::__normal_iterator<float *,std::vector<float,glitch::core::SAllocator<float,(glitch::memory::E_MEMORY_HINT)0>>>,unsigned int,float const&)
// void std::vector<float,glitch::core::SAllocator<float,(glitch::memory::E_MEMORY_HINT)0>>::_M_fill_insert(;
// [0x5fdb10] (145 bytes) sub_5FDB10
// int sub_5FDB10();
// [0x5fdbb0] (139 bytes) GameObjectManager::Alias * std::copy_backward<GameObjectManager::Alias *,GameObjectManager::Alias *>(GameObjectManager::Alias *,GameObjectManager::Alias *,GameObjectManager::Alias *)
// int std::copy_backward<GameObjectManager::Alias *,GameObjectManager::Alias *>(int a1, int a2, int a3);
// [0x5fdc40] (91 bytes) std::vector<GameObjectManager::Alias,GameAllocator<GameObjectManager::Alias>>::_M_check_len(unsigned int,char const*)const
// int std::vector<GameObjectManager::Alias,GameAllocator<GameObjectManager::Alias>>::_M_check_len( std::vector<GameObjectManager::Alias, GameAllocator<GameObjectManager::Alias>> *this, unsigned int a2, char *a3);
// [0x5fdca0] (475 bytes) sub_5FDCA0
// uint32_t *sub_5FDCA0(int a1, int a2);
// [0x5fde80] (9017 bytes) std::vector<glitch::scene::regular_grid_streaming::SFrustumEntry,std::allocator<glitch::scene::regular_grid_streaming::SFrustumEntry>>::_M_insert_aux(__gnu_cxx::__normal_iterator<glitch::scene::regular_grid_streaming::SFrustumEntry*,std::vector<glitch::scene::regular_grid_streaming::SFrustumEntry,std::allocator<glitch::scene::regular_grid_streaming::SFrustumEntry>>>,glitch::scene::regular_grid_streaming::SFrustumEntry const&)
// size_t std::vector<glitch::scene::regular_grid_streaming::SFrustumEntry>::_M_insert_aux( int a1, char *a2, int a3);
// [0x6001c0] (1043 bytes) sub_6001C0
// int sub_6001C0(uint32_t *a1, int a2);
// [0x6005e0] (117 bytes) sub_6005E0
// int sub_6005E0(uint32_t *a1);
// [0x600660] (2726 bytes) std::vector<boost::tuples::tuple<unsigned int,unsigned int,std::vector<unsigned int,std::allocator<unsigned int>>,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>,std::allocator<boost::tuples::tuple<unsigned int,unsigned int,std::vector<unsigned int,std::allocator<unsigned int>>,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::tuples::tuple<unsigned int,unsigned int,std::vector<unsigned int,std::allocator<unsigned int>>,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>*,std::vector<boost::tuples::tuple<unsigned int,unsigned int,std::vector<unsigned int,std::allocator<unsigned int>>,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>,std::allocator<boost::tuples::tuple<unsigned int,unsigned int,std::vector<unsigned int,std::allocator<unsigned int>>,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>>>,boost::tuples::tuple<unsigned int,unsigned int,std::vector<unsigned int,std::allocator<unsigned int>>,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type> const&)
// void std::vector<boost::tuples::tuple<unsigned int,unsigned int,std::vector<unsigned int>,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type,boost::tuples::null_type>>::_M_insert_aux( void ***a1, void **a2, unsigned int a3);
// [0x601110] (3932 bytes) sub_601110
// void sub_601110(int a1, int a2, size_t a3);
// [0x602070] (41 bytes) std::set<std::string,std::less<std::string>,std::allocator<std::string>>::~set()
// void std::set<std::string>::~set(std::set<std::string> *this);
// [0x6020a0] (1268 bytes) sub_6020A0
// int sub_6020A0(int a1, int a2, uint32_t *a3);
// [0x6025a0] (96 bytes) sub_6025A0
// char *sub_6025A0(uint32_t *a1);
// [0x602600] (165 bytes) sub_602600
// char *sub_602600(uint32_t *a1);
// [0x6026b0] (10 bytes) sub_6026B0
// int sub_6026B0(int a1);
// [0x6026c0] (792 bytes) sub_6026C0
// int (**sub_6026C0(int a1))(int);
// [0x6029e0] (7 bytes) sub_6029E0
// int sub_6029E0(int a1);
// [0x6029f0] (56 bytes) sub_6029F0
// void sub_6029F0(void *a1);
// [0x602a30] (616 bytes) std::vector<boost::intrusive_ptr<glitch::scene::ILODSelector>,glitch::core::SAllocator<boost::intrusive_ptr<glitch::scene::ILODSelector>,(glitch::memory::E_MEMORY_HINT)0>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<glitch::scene::ILODSelector>*,std::vector<boost::intrusive_ptr<glitch::scene::ILODSelector>,glitch::core::SAllocator<boost::intrusive_ptr<glitch::scene::ILODSelector>,(glitch::memory::E_MEMORY_HINT)0>>>,boost::intrusive_ptr<glitch::scene::ILODSelector> const&)
// int std::vector<boost::intrusive_ptr<glitch::scene::ILODSelector>,glitch::core::SAllocator<boost::intrusive_ptr<glitch::scene::ILODSelector>,(glitch::memory::E_MEMORY_HINT)0>>::_M_insert_aux(;
// [0x602ca0] (172 bytes) std::_Rb_tree<unsigned int,unsigned int,std::_Identity<unsigned int>,std::less<unsigned int>,std::allocator<unsigned int>>::_M_insert_(std::_Rb_tree_node_base const*,std::_Rb_tree_node_base const*,unsigned int const&)
// int *std::_Rb_tree<unsigned int,unsigned int,std::_Identity<unsigned int>,std::less<unsigned int>,std::allocator<unsigned int>>::_M_insert_( int *a1, int a2, int a3, int a4, uint32_t *a5);
// [0x602d50] (172 bytes) std::_Rb_tree<SSegmentExt *,SSegmentExt *,std::_Identity<SSegmentExt *>,std::less<SSegmentExt *>,std::allocator<SSegmentExt *>>::_M_insert_(std::_Rb_tree_node_base const*,std::_Rb_tree_node_base const*,SSegmentExt * const&)
// int *std::_Rb_tree<SSegmentExt *,SSegmentExt *,std::_Identity<SSegmentExt *>,std::less<SSegmentExt *>,std::allocator<SSegmentExt *>>::_M_insert_( int *a1, int a2, int a3, int a4, uint32_t *a5);
// [0x602e00] (567 bytes) std::_Rb_tree<int,std::pair<int const,std::string>,std::_Select1st<std::pair<int const,std::string>>,std::less<int>,std::allocator<std::pair<int const,std::string>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,std::string>> *)
// void std::_Rb_tree<int,std::pair<int const,std::string>,std::_Select1st<std::pair<int const,std::string>>,std::less<int>,std::allocator<std::pair<int const,std::string>>>::_M_erase( int a1, uint32_t *a2);
// [0x603040] (169 bytes) void std::__insertion_sort<long *>(long *,long *)
// void std::__insertion_sort<long *>(int *src, int *a2);
// [0x6030f0] (899 bytes) void std::vector<std::string,std::allocator<std::string>>::_M_range_insert<__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string,std::allocator<std::string>>>>(__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string,std::allocator<std::string>>>,std::forward_iterator_tag)
// void std::vector<std::string>::_M_range_insert<__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>>( uint32_t *a1, size_t a2, int a3, int a4);
// [0x603480] (999 bytes) std::vector<ObjectPool<Cannonball>::PooledObject,std::allocator<ObjectPool<Cannonball>::PooledObject>>::_M_fill_insert(__gnu_cxx::__normal_iterator<ObjectPool<Cannonball>::PooledObject*,std::vector<ObjectPool<Cannonball>::PooledObject,std::allocator<ObjectPool<Cannonball>::PooledObject>>>,unsigned int,ObjectPool<Cannonball>::PooledObject const&)
// void std::vector<ObjectPool<Cannonball>::PooledObject,std::allocator<ObjectPool<Cannonball>::PooledObject>>::_M_fill_insert( int *a1, char *a2, unsigned int a3, uint32_t *a4);
// [0x603870] (1125 bytes) std::vector<ObjectPool<TrajectoryPoint>::PooledObject,std::allocator<ObjectPool<TrajectoryPoint>::PooledObject>>::_M_fill_insert(__gnu_cxx::__normal_iterator<ObjectPool<TrajectoryPoint>::PooledObject*,std::vector<ObjectPool<TrajectoryPoint>::PooledObject,std::allocator<ObjectPool<TrajectoryPoint>::PooledObject>>>,unsigned int,ObjectPool<TrajectoryPoint>::PooledObject const&)
// void std::vector<ObjectPool<TrajectoryPoint>::PooledObject,std::allocator<ObjectPool<TrajectoryPoint>::PooledObject>>::_M_fill_insert( int *a1, char *a2, unsigned int a3, uint32_t *a4);
// [0x603ce0] (304 bytes) glitch::core::vector3d<float> * std::partition<glitch::core::vector3d<float> *,glitch::util::SLinePartition<glitch::util::SConvexHullVector3df,glitch::core::SAxisMapping<0u,1u,2u>>>(glitch::core::vector3d<float> *,glitch::core::vector3d<float> *,glitch::util::SLinePartition<glitch::util::SConvexHullVector3df,glitch::core::SAxisMapping<0u,1u,2u>>)
// int std::partition<glitch::core::vector3d<float> *,glitch::util::SLinePartition<glitch::util::SConvexHullVector3df,glitch::core::SAxisMapping<0u,1u,2u>>>( int a1, int a2, float *a3);
// [0x603e10] (53 bytes) sub_603E10
// int sub_603E10(int a1, int a2);
// [0x603e50] (53 bytes) sub_603E50
// int sub_603E50(int a1, int a2);
// [0x603e90] (580 bytes) std::vector<glitch::scene::CRegularGridStreaming<glitch::core::SAxisMapping<0u,1u,2u>,unsigned short>::SSegmentOffsetInfo,std::allocator<glitch::scene::CRegularGridStreaming<glitch::core::SAxisMapping<0u,1u,2u>,unsigned short>::SSegmentOffsetInfo>>::_M_insert_aux(__gnu_cxx::__normal_iterator<glitch::scene::CRegularGridStreaming<glitch::core::SAxisMapping<0u,1u,2u>,unsigned short>::SSegmentOffsetInfo*,std::vector<glitch::scene::CRegularGridStreaming<glitch::core::SAxisMapping<0u,1u,2u>,unsigned short>::SSegmentOffsetInfo,std::allocator<glitch::scene::CRegularGridStreaming<glitch::core::SAxisMapping<0u,1u,2u>,unsigned short>::SSegmentOffsetInfo>>>,glitch::scene::CRegularGridStreaming<glitch::core::SAxisMapping<0u,1u,2u>,unsigned short>::SSegmentOffsetInfo const&)
// char *std::vector<glitch::scene::CRegularGridStreaming<glitch::core::SAxisMapping<0u,1u,2u>,unsigned short>::SSegmentOffsetInfo,std::allocator<glitch::scene::CRegularGridStreaming<glitch::core::SAxisMapping<0u,1u,2u>,unsigned short>::SSegmentOffsetInfo>>::_M_insert_aux( int a1, _OWORD *a2, unsigned int *a3);
// [0x6040e0] (821 bytes) sub_6040E0
// int sub_6040E0(int a1, uint32_t *a2, int a3, int a4, int a5);
// [0x604420] (126 bytes) sub_604420
// int sub_604420(int *a1, uint16_t *a2);
// [0x6044a0] (249 bytes) sub_6044A0
// int sub_6044A0(int *a1, int *a2);
// [0x6045a0] (489 bytes) sub_6045A0
// int sub_6045A0(int a1, int *a2, float *a3, float a4, int a5, int a6);
// [0x604790] (69 bytes) sub_604790
// int sub_604790(int a1, int a2, int a3, int a4);
// [0x6047e0] (3527 bytes) sub_6047E0
// int sub_6047E0(int a1, float *a2, float a3, int a4, int a5);
// [0x6055b0] (1163 bytes) sub_6055B0
// void sub_6055B0(int a1, int a2, size_t a3);
// [0x605a40] (196 bytes) sub_605A40
// uint32_t *sub_605A40();
// [0x605b10] (53 bytes) sub_605B10
// uint32_t *sub_605B10(uint32_t *a1, uint32_t *a2);
// [0x605b50] (138 bytes) sub_605B50
// void *sub_605B50();
// [0x605be0] (1130 bytes) std::vector<glitch::scene::SOffsetSize,glitch::core::SAllocator<glitch::scene::SOffsetSize,(glitch::memory::E_MEMORY_HINT)0>>::_M_fill_insert(__gnu_cxx::__normal_iterator<glitch::scene::SOffsetSize*,std::vector<glitch::scene::SOffsetSize,glitch::core::SAllocator<glitch::scene::SOffsetSize,(glitch::memory::E_MEMORY_HINT)0>>>,unsigned int,glitch::scene::SOffsetSize const&)
// void std::vector<glitch::scene::SOffsetSize,glitch::core::SAllocator<glitch::scene::SOffsetSize,(glitch::memory::E_MEMORY_HINT)0>>::_M_fill_insert(;
// [0x606050] (392 bytes) std::deque<SSegmentExt *,GameAllocator<SSegmentExt *>>::_M_reallocate_map(unsigned int,bool)
// int std::deque<SSegmentExt *,GameAllocator<SSegmentExt *>>::_M_reallocate_map( std::deque<SSegmentExt *, GameAllocator<SSegmentExt *>> *this, unsigned int a2, bool a3);
// [0x6061e0] (424 bytes) std::deque<SSegmentExt *,GameAllocator<SSegmentExt *>>::_M_reserve_elements_at_front(unsigned int)
// std::deque<SSegmentExt *, GameAllocator<SSegmentExt *>> *std::deque<SSegmentExt *,GameAllocator<SSegmentExt *>>::_M_reserve_elements_at_front( std::deque<SSegmentExt *, GameAllocator<SSegmentExt *>> *this, std::deque<SSegmentExt *, GameAllocator<SSegmentExt *>> *a2, unsigned int a3);
// [0x606390] (417 bytes) std::deque<SSegmentExt *,GameAllocator<SSegmentExt *>>::_M_reserve_elements_at_back(unsigned int)
// std::deque<SSegmentExt *, GameAllocator<SSegmentExt *>> *std::deque<SSegmentExt *,GameAllocator<SSegmentExt *>>::_M_reserve_elements_at_back( std::deque<SSegmentExt *, GameAllocator<SSegmentExt *>> *this, std::deque<SSegmentExt *, GameAllocator<SSegmentExt *>> *a2, unsigned int a3);
// [0x606540] (563 bytes) std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::_M_mutate(unsigned int,unsigned int,unsigned int)
// int *std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::_M_mutate(;
// [0x606780] (2695 bytes) sub_606780
// int sub_606780( int a1, uint32_t *a2, int *a3, uint32_t *a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, unsigned int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28);
// [0x607210] (2672 bytes) sub_607210
// int **sub_607210(int a1);
// [0x607c80] (5602 bytes) sub_607C80
// void sub_607C80(int a1, float *a2, float a3, float a4, float a5);
// [0x609270] (549 bytes) sub_609270
// uint32_t *sub_609270(int a1);
// [0x6094a0] (49 bytes) sub_6094A0
// uint32_t *sub_6094A0(uint32_t *a1);
// [0x6094e0] (557 bytes) sub_6094E0
// uint32_t *sub_6094E0(int a1, int a2, float *a3);
// [0x60a7b0] (1136 bytes) sub_60A7B0
// uint32_t *sub_60A7B0(int a1, int a2, int a3);
// [0x60ac20] (9428 bytes) sub_60AC20
// void sub_60AC20(int a1, char a2);
// [0x60d100] (52 bytes) sub_60D100
// int32_t sub_60D100(int a1, int a2);
// [0x60d140] (52 bytes) sub_60D140
// int32_t sub_60D140(int a1, int a2);
// [0x60d180] (909 bytes) void std::fill<SSegmentExt *>(std::_Deque_iterator<SSegmentExt *,SSegmentExt *&,SSegmentExt **> const&,std::_Deque_iterator<SSegmentExt *,SSegmentExt *&,SSegmentExt **> const&,SSegmentExt * const&)
// unsigned int *std::fill<SSegmentExt *>(uint32_t *a1, unsigned int *a2, unsigned int *a3);
// [0x60d510] (3230 bytes) std::deque<SSegmentExt *,GameAllocator<SSegmentExt *>>::_M_insert_aux(std::_Deque_iterator<SSegmentExt *,SSegmentExt *&,SSegmentExt **>,unsigned int,SSegmentExt * const&)
// unsigned int *std::deque<SSegmentExt *,GameAllocator<SSegmentExt *>>::_M_insert_aux( std::deque<SSegmentExt *, GameAllocator<SSegmentExt *>> *a1, unsigned int *a2, unsigned int a3, unsigned int *a4);
// [0x60e1b0] (1596 bytes) sub_60E1B0
// void ***sub_60E1B0(void ***a1, void ***a2);
// [0x60e7f0] (2004 bytes) std::vector<RadioStationController::RadioUse,std::allocator<RadioStationController::RadioUse>>::_M_fill_insert(__gnu_cxx::__normal_iterator<RadioStationController::RadioUse*,std::vector<RadioStationController::RadioUse,std::allocator<RadioStationController::RadioUse>>>,unsigned int,RadioStationController::RadioUse const&)
// void std::vector<RadioStationController::RadioUse>::_M_fill_insert( int *a1, void ***a2, unsigned int a3, unsigned int a4);
// [0x60efd0] (169 bytes) sub_60EFD0
// uint32_t *sub_60EFD0(uint32_t **a1, uint32_t *a2, int a3, unsigned int a4);
// [0x60f080] (394 bytes) sub_60F080
// uint32_t *sub_60F080(int a1, uint32_t *a2, uint32_t *a3);
// [0x60f210] (394 bytes) sub_60F210
// uint32_t *sub_60F210(int a1, uint32_t *a2, uint32_t *a3);
// [0x60f3a0] (3689 bytes) sub_60F3A0
// void sub_60F3A0(int a1, char a2);
// [0x610210] (7 bytes) sub_610210
// int sub_610210(int a1, int a2);
// [0x610220] (14 bytes) sub_610220
// void sub_610220(int a1, char a2);
// [0x610230] (10 bytes) sub_610230
// int sub_610230(int a1);
// [0x610240] (2197 bytes) sub_610240
// int (**sub_610240(int a1))(int);
// [0x610ae0] (7 bytes) sub_610AE0
// int sub_610AE0(int a1);
// [0x610af0] (56 bytes) sub_610AF0
// void sub_610AF0(void *a1);
// [0x610b30] (5725 bytes) sub_610B30
// unsigned int sub_610B30( uint32_t *a1, int **a2, uint32_t *a3, int *a4, boost::intrusive_ptr<glitch::io::IReadFile> *a5, glitch::collada::CColladaFactory *a6, unsigned int a7, size_t a8, int a9, volatile int32_t **a10, volatile int32_t **a11, unsigned int a12, size_t a13, int a14, char a15);
// [0x612190] (6671 bytes) sub_612190
// int sub_612190(int a1);
// [0x613ba0] (543 bytes) std::deque<unsigned int,glitch::core::SAllocator<unsigned int,(glitch::memory::E_MEMORY_HINT)0>>::push_back(unsigned int const&)
// uint32_t *std::deque<unsigned int,glitch::core::SAllocator<unsigned int,(glitch::memory::E_MEMORY_HINT)0>>::push_back(;
// [0x613dc0] (97 bytes) sub_613DC0
// uint32_t *sub_613DC0(uint32_t *a1, unsigned int a2);
// [0x613e30] (957 bytes) sub_613E30
// int sub_613E30(uint32_t *a1, uint32_t *a2, uint8_t a3);
// [0x6141f0] (957 bytes) sub_6141F0
// int sub_6141F0(uint32_t *a1, uint32_t *a2, uint8_t a3);
// [0x6145b0] (318 bytes) sub_6145B0
// void **sub_6145B0(uint32_t *a1, int a2, int a3, char a4);
// [0x6146f0] (7 bytes) sub_6146F0
// int sub_6146F0(int a1, int a2, char a3);
// [0x614700] (928 bytes) sub_614700
// int sub_614700(int a1, int a2, char a3);
// [0x614aa0] (7 bytes) sub_614AA0
// int sub_614AA0(int a1);
// [0x614ab0] (1035 bytes) sub_614AB0
// int sub_614AB0(uint32_t *a1);
// [0x614ec0] (232 bytes) void std::__adjust_heap<long *,int,long>(long *,int,int,long)
// void std::__adjust_heap<long *,int,long>(int *a1, int a2, int a3, int a4);
// [0x614fb0] (790 bytes) void std::__introsort_loop<long *,int>(long *,long *,int)
// void std::__introsort_loop<long *,int>(int *a1, int *a2, int a3);
// [0x6152d0] (156 bytes) sub_6152D0
// int sub_6152D0(glf::SpinLock *a1, uint32_t **a2, int *a3, uint32_t *a4);
// [0x615370] (792 bytes) sub_615370
// int sub_615370(int a1, uint32_t *a2);
// [0x615690] (187 bytes) sub_615690
// int sub_615690(int a1, int a2);
// [0x615750] (81 bytes) sub_615750
// uint32_t *sub_615750(uint32_t *a1);
// [0x6157b0] (156 bytes) sub_6157B0
// int sub_6157B0(glf::SpinLock *a1, uint32_t **a2, int *a3, uint32_t *a4);
// [0x615850] (393 bytes) std::vector<glitch::scene::Range,std::allocator<glitch::scene::Range>>::push_back(glitch::scene::Range const&)
// size_t std::vector<glitch::scene::Range>::push_back(int *a1, int *a2);
// [0x6159e0] (490 bytes) std::vector<glitch::scene::CDoubleBufferedLODStreaming<glitch::scene::CDoubleBufferedDynamicBatchMesh<SDoubleBufferedDynamicBatchMeshConfig>,SSegmentExtPtr,SSegmentExtPtr,GroupExtraDataHandlingPolicy,LodExtraDataHandlingPolicy>::SGroupReadInfo,std::allocator<glitch::scene::CDoubleBufferedLODStreaming<glitch::scene::CDoubleBufferedDynamicBatchMesh<SDoubleBufferedDynamicBatchMeshConfig>,SSegmentExtPtr,SSegmentExtPtr,GroupExtraDataHandlingPolicy,LodExtraDataHandlingPolicy>::SGroupReadInfo>>::_M_insert_aux(__gnu_cxx::__normal_iterator<glitch::scene::CDoubleBufferedLODStreaming<glitch::scene::CDoubleBufferedDynamicBatchMesh<SDoubleBufferedDynamicBatchMeshConfig>,SSegmentExtPtr,SSegmentExtPtr,GroupExtraDataHandlingPolicy,LodExtraDataHandlingPolicy>::SGroupReadInfo*,std::vector<glitch::scene::CDoubleBufferedLODStreaming<glitch::scene::CDoubleBufferedDynamicBatchMesh<SDoubleBufferedDynamicBatchMeshConfig>,SSegmentExtPtr,SSegmentExtPtr,GroupExtraDataHandlingPolicy,LodExtraDataHandlingPolicy>::SGroupReadInfo,std::allocator<glitch::scene::CDoubleBufferedLODStreaming<glitch::scene::CDoubleBufferedDynamicBatchMesh<SDoubleBufferedDynamicBatchMeshConfig>,SSegmentExtPtr,SSegmentExtPtr,GroupExtraDataHandlingPolicy,LodExtraDataHandlingPolicy>::SGroupReadInfo>>>,glitch::scene::CDoubleBufferedLODStreaming<glitch::scene::CDoubleBufferedDynamicBatchMesh<SDoubleBufferedDynamicBatchMeshConfig>,SSegmentExtPtr,SSegmentExtPtr,GroupExtraDataHandlingPolicy,LodExtraDataHandlingPolicy>::SGroupReadInfo const&)
// void std::vector<glitch::scene::CDoubleBufferedLODStreaming<glitch::scene::CDoubleBufferedDynamicBatchMesh<SDoubleBufferedDynamicBatchMeshConfig>,SSegmentExtPtr,SSegmentExtPtr,GroupExtraDataHandlingPolicy,LodExtraDataHandlingPolicy>::SGroupReadInfo,std::allocator<glitch::scene::CDoubleBufferedLODStreaming<glitch::scene::CDoubleBufferedDynamicBatchMesh<SDoubleBufferedDynamicBatchMeshConfig>,SSegmentExtPtr,SSegmentExtPtr,GroupExtraDataHandlingPolicy,LodExtraDataHandlingPolicy>::SGroupReadInfo>>::_M_insert_aux( int a1, char *src, int *a3);
// [0x615bd0] (621 bytes) sub_615BD0
// unsigned int sub_615BD0(uint32_t *a1, int a2);
// [0x615e40] (7 bytes) sub_615E40
// int sub_615E40(int a1, int a2);
// [0x615e50] (241 bytes) sub_615E50
// int sub_615E50(int a1, int a2);
// [0x615f50] (1837 bytes) sub_615F50
// int sub_615F50(int a1, int a2, int a3, char a4);
// [0x616680] (542 bytes) sub_616680
// int sub_616680(int a1, unsigned int *a2, int *a3, uint32_t *a4);
// [0x6168a0] (110 bytes) sub_6168A0
// int sub_6168A0(int a1, unsigned int **a2, int *a3, uint32_t *a4);
// [0x616910] (542 bytes) sub_616910
// int sub_616910(int a1, unsigned int *a2, int *a3, uint32_t *a4);
// [0x616b30] (110 bytes) sub_616B30
// int sub_616B30(int a1, unsigned int **a2, int *a3, uint32_t *a4);
// [0x616ba0] (1429 bytes) sub_616BA0
// int sub_616BA0( glitch::core::interleaved_data_allocator::SInPlaceMetaDataPolicy *a1, unsigned int a2, int a3, int a4, int a5, const void **a6, int *a7, int a8, unsigned int *a9);
// [0x617140] (1575 bytes) sub_617140
// uint32_t *sub_617140( glitch::core::interleaved_data_allocator::SInPlaceMetaDataPolicy *a1, int a2, unsigned int a3, int a4);
// [0x617770] (1429 bytes) sub_617770
// int sub_617770( glitch::core::interleaved_data_allocator::SInPlaceMetaDataPolicy *a1, unsigned int a2, int a3, int a4, int a5, const void **a6, int *a7, int a8, unsigned int *a9);
// [0x617d10] (1575 bytes) sub_617D10
// uint32_t *sub_617D10( glitch::core::interleaved_data_allocator::SInPlaceMetaDataPolicy *a1, int a2, unsigned int a3, int a4);
// [0x618340] (682 bytes) std::vector<glitch::core::interleaved_data_allocator::SRangeInfo,glitch::core::SAllocator<glitch::core::interleaved_data_allocator::SRangeInfo,(glitch::memory::E_MEMORY_HINT)0>>::_M_insert_aux(__gnu_cxx::__normal_iterator<glitch::core::interleaved_data_allocator::SRangeInfo*,std::vector<glitch::core::interleaved_data_allocator::SRangeInfo,glitch::core::SAllocator<glitch::core::interleaved_data_allocator::SRangeInfo,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::core::interleaved_data_allocator::SRangeInfo const&)
// int std::vector<glitch::core::interleaved_data_allocator::SRangeInfo,glitch::core::SAllocator<glitch::core::interleaved_data_allocator::SRangeInfo,(glitch::memory::E_MEMORY_HINT)0>>::_M_insert_aux(;
// [0x6185f0] (876 bytes) sub_6185F0
// int sub_6185F0(int a1, unsigned int a2, char a3);
// [0x618960] (876 bytes) sub_618960
// int sub_618960(int a1, unsigned int a2, char a3);
// [0x618cd0] (1973 bytes) sub_618CD0
// int sub_618CD0(int a1, int a2);
// [0x619490] (7 bytes) sub_619490
// int sub_619490(int a1, int a2, int a3, int a4, int a5, char a6);
// [0x6194a0] (3671 bytes) sub_6194A0
// int sub_6194A0(int a1, int *a2, int a3, int a4, int a5, char a6);
// [0x61a300] (7 bytes) sub_61A300
// int sub_61A300(int a1);
// [0x61a310] (2946 bytes) sub_61A310
// int sub_61A310(int a1, int a2);
// [0x61aea0] (1593 bytes) std::vector<glitch::scene::SLodSegmentInfo,glitch::core::SAllocator<glitch::scene::SLodSegmentInfo,(glitch::memory::E_MEMORY_HINT)0>>::_M_fill_insert(__gnu_cxx::__normal_iterator<glitch::scene::SLodSegmentInfo*,std::vector<glitch::scene::SLodSegmentInfo,glitch::core::SAllocator<glitch::scene::SLodSegmentInfo,(glitch::memory::E_MEMORY_HINT)0>>>,unsigned int,glitch::scene::SLodSegmentInfo const&)
// int std::vector<glitch::scene::SLodSegmentInfo,glitch::core::SAllocator<glitch::scene::SLodSegmentInfo,(glitch::memory::E_MEMORY_HINT)0>>::_M_fill_insert(;
// [0x61b4e0] (771 bytes) sub_61B4E0
// int sub_61B4E0(int a1, int a2, uint32_t *a3, int a4);
// [0x61b7f0] (5934 bytes) sub_61B7F0
// int sub_61B7F0( int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, glf::ReadWriteSpinLock *a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, uint32_t *a30);
// [0x61cf20] (341 bytes) sub_61CF20
// int sub_61CF20(__m128d a1, int a2, unsigned int a3);
// [0x61d080] (593 bytes) sub_61D080
// uint32_t *sub_61D080(__m128d a1, int a2, unsigned int *a3);
// [0x61d2e0] (1859 bytes) sub_61D2E0
// int sub_61D2E0(__m128d a1, int a2, int a3);
// [0x61da30] (2097 bytes) sub_61DA30
// glitch::core *sub_61DA30(__m128d a1, int a2);
// [0x61e270] (1330 bytes) sub_61E270
// char sub_61E270(__m128d a1, int a2, unsigned int a3, int a4);
// [0x61e7b0] (25 bytes) sub_61E7B0
// char sub_61E7B0(int a1, int a2);
