#pragma once
// ============================================================================
// TU01_CoreAppAndOnlineTracking.h
// Complete Translation Unit [01/41]
// Binary Range in lib/x86/libGangstar4.so: 0x4ee360 .. 0x54e890 (385 KB)
// Total Decompiled Functions in TU: 650 (100% coverage)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// Function Table in Translation Unit:
// [0x4ee360] (243 bytes) sub_4EE360
// int sub_4EE360();
// [0x4ee460] (7 bytes) sub_4EE460
// int sub_4EE460(int a1);
// [0x4ee470] (12 bytes) sub_4EE470
// int sub_4EE470();
// [0x4ee480] (7 bytes) sub_4EE480
// int sub_4EE480(int a1);
// [0x4ee490] (54 bytes) sub_4EE490
// int sub_4EE490(int a1);
// [0x4ee4d0] (7 bytes) sub_4EE4D0
// int sub_4EE4D0(int a1);
// [0x4ee4e0] (53 bytes) sub_4EE4E0
// int sub_4EE4E0(int a1);
// [0x4ee520] (38 bytes) sub_4EE520
// uint32_t *sub_4EE520(uint32_t *a1);
// [0x4ee558] (1 bytes) nullsub_2
// void nullsub_2();
// [0x4ee560] (56 bytes) sub_4EE560
// void sub_4EE560(uint32_t *a1);
// [0x4ee5a0] (913 bytes) sub_4EE5A0
// bool sub_4EE5A0(int a1, int a2, int a3, float *a4, float *a5, float a6, float a7, int a8);
// [0x4ee940] (105 bytes) sub_4EE940
// void sub_4EE940(int a1, int a2, int a3, int a4);
// [0x4ee9b0] (7 bytes) sub_4EE9B0
// int sub_4EE9B0(int a1);
// [0x4ee9c0] (101 bytes) sub_4EE9C0
// void sub_4EE9C0(glitch::core::IStatic3DTree *a1);
// [0x4eea30] (7 bytes) sub_4EEA30
// int sub_4EEA30(int a1);
// [0x4eea40] (7 bytes) sub_4EEA40
// int sub_4EEA40(int a1);
// [0x4eea50] (7 bytes) sub_4EEA50
// int sub_4EEA50(int a1);
// [0x4eea60] (108 bytes) sub_4EEA60
// int (**sub_4EEA60(int a1))(int);
// [0x4eead0] (93 bytes) sub_4EEAD0
// int sub_4EEAD0(int a1);
// [0x4eeb30] (1937 bytes) sub_4EEB30
// int sub_4EEB30(int a1, int a2);
// [0x4ef2d0] (138 bytes) sub_4EF2D0
// unsigned int sub_4EF2D0(uint32_t *a1, int a2);
// [0x4ef360] (7 bytes) sub_4EF360
// int sub_4EF360(int a1);
// [0x4ef370] (51 bytes) sub_4EF370
// int sub_4EF370(int a1);
// [0x4ef3b0] (7 bytes) sub_4EF3B0
// int sub_4EF3B0(int a1);
// [0x4ef3c0] (51 bytes) sub_4EF3C0
// int sub_4EF3C0(int a1);
// [0x4ef400] (136 bytes) sub_4EF400
// uint32_t *sub_4EF400(uint32_t *a1, char *s, uint32_t *a3);
// [0x4ef490] (157 bytes) sub_4EF490
// int sub_4EF490(int a1, char *s);
// [0x4ef530] (169 bytes) sub_4EF530
// Json::Value *sub_4EF530(Json::Value **a1, const Json::Value **a2);
// [0x4ef5e0] (218 bytes) sub_4EF5E0
// int sub_4EF5E0(char **a1, char **a2, int a3);
// [0x4ef6c0] (1093 bytes) sub_4EF6C0
// void sub_4EF6C0(int a1, Json::Value *a2);
// [0x4efb10] (382 bytes) sub_4EFB10
// size_t sub_4EFB10(int *a1, uint32_t *a2);
// [0x4efc90] (7 bytes) sub_4EFC90
// int sub_4EFC90(int a1);
// [0x4efca0] (7 bytes) sub_4EFCA0
// int sub_4EFCA0(int a1);
// [0x4efcb0] (7 bytes) sub_4EFCB0
// int sub_4EFCB0(int a1);
// [0x4efcc0] (116 bytes) sub_4EFCC0
// void sub_4EFCC0(uint32_t *a1);
// [0x4efd40] (191 bytes) sub_4EFD40
// int (**sub_4EFD40(int a1))(int);
// [0x4efe00] (97 bytes) sub_4EFE00
// int sub_4EFE00(int a1, int a2, int a3);
// [0x4efe70] (7 bytes) sub_4EFE70
// int sub_4EFE70(int a1);
// [0x4efe80] (109 bytes) sub_4EFE80
// void sub_4EFE80(glitch::core::IStatic3DTree *a1);
// [0x4efef0] (221 bytes) sub_4EFEF0
// volatile int32_t **sub_4EFEF0( volatile int32_t **a1, int a2, int a3, int a4, int a5, int a6);
// [0x4effd0] (221 bytes) sub_4EFFD0
// volatile int32_t **sub_4EFFD0( volatile int32_t **a1, int a2, int a3, int a4, int a5, int a6);
// [0x4f00b0] (132 bytes) sub_4F00B0
// int sub_4F00B0(int a1, int a2);
// [0x4f0140] (243 bytes) sub_4F0140
// int *sub_4F0140(int *a1, int a2, int a3, int a4, int a5);
// [0x4f0240] (221 bytes) sub_4F0240
// int *sub_4F0240(int *a1, int a2, int a3, int a4, int a5);
// [0x4f0320] (88 bytes) sub_4F0320
// int sub_4F0320(int result, int a2);
// [0x4f0380] (161 bytes) sub_4F0380
// uint32_t *sub_4F0380(uint32_t *a1, int a2);
// [0x4f0430] (1894 bytes) sub_4F0430
// void sub_4F0430(int a1, const char **a2, int a3, int a4);
// [0x4f0ba0] (491 bytes) sub_4F0BA0
// int sub_4F0BA0(float *a1, int a2, float a3, int a4, float *a5);
// [0x4f0d90] (491 bytes) sub_4F0D90
// int sub_4F0D90(float *a1, int a2, float a3, int a4, float *a5);
// [0x4f0f80] (554 bytes) sub_4F0F80
// int sub_4F0F80(__guard **a1, char *a2);
// [0x4f11b0] (324 bytes) sub_4F11B0
// void sub_4F11B0(int a1);
// [0x4f1300] (816 bytes) sub_4F1300
// glitch::IObject **sub_4F1300(glitch::IObject **a1, int a2, int a3, int a4);
// [0x4f1630] (2501 bytes) sub_4F1630
// void sub_4F1630(uint8_t *a1, int a2, long double a3);
// [0x4f2000] (246 bytes) sub_4F2000
// void sub_4F2000(uint32_t *a1);
// [0x4f2100] (238 bytes) sub_4F2100
// int sub_4F2100(uint32_t *a1);
// [0x4f21f0] (1115 bytes) sub_4F21F0
// int sub_4F21F0(int *a1, int a2, int a3);
// [0x4f2650] (1639 bytes) sub_4F2650
// _OWORD *sub_4F2650(_OWORD *a1, uint32_t *a2, int *a3);
// [0x4f2cc0] (809 bytes) sub_4F2CC0
// int sub_4F2CC0(int a1, int a2, int a3, int a4);
// [0x4f2ff0] (1913 bytes) sub_4F2FF0
// void sub_4F2FF0(int a1, const char **a2);
// [0x4f3770] (1449 bytes) sub_4F3770
// gaia::BaseJSONServiceResponse *sub_4F3770(int a1, int a2, gaia::BaseJSONServiceResponse *a3, int a4);
// [0x4f3d20] (2560 bytes) sub_4F3D20
// void sub_4F3D20(int a1, int a2, int a3, uint32_t *a4);
// [0x4f4720] (398 bytes) sub_4F4720
// int (**sub_4F4720(int a1))(int);
// [0x4f48b0] (56 bytes) sub_4F48B0
// void sub_4F48B0(void *a1);
// [0x4f48f0] (480 bytes) sub_4F48F0
// int sub_4F48F0(int a1, int *a2);
// [0x4f4ad0] (660 bytes) sub_4F4AD0
// volatile int32_t *sub_4F4AD0(volatile int32_t *result, const char *a2);
// [0x4f4d70] (218 bytes) sub_4F4D70
// int *sub_4F4D70(int *a1, int a2, int a3, int a4, int a5, uint32_t *a6);
// [0x4f4e50] (2263 bytes) sub_4F4E50
// void sub_4F4E50(int a1, int a2);
// [0x4f5730] (364 bytes) sub_4F5730
// int sub_4F5730(int a1, uint32_t *a2, int a3);
// [0x4f58a0] (199 bytes) sub_4F58A0
// void sub_4F58A0(uint32_t *a1);
// [0x4f5970] (375 bytes) sub_4F5970
// int sub_4F5970(int a1, uint32_t *a2, int a3);
// [0x4f5af0] (2072 bytes) sub_4F5AF0
// int sub_4F5AF0(int a1, char **a2);
// [0x4f6310] (3051 bytes) sub_4F6310
// void sub_4F6310(int a1, char *a2, int a3);
// [0x4f6f00] (1326 bytes) sub_4F6F00
// int sub_4F6F00(uint32_t *a1, int a2, int a3, int a4);
// [0x4f7430] (1991 bytes) sub_4F7430
// char *sub_4F7430();
// [0x4f7c00] (930 bytes) sub_4F7C00
// int sub_4F7C00(int a1, float *a2, float *a3, int a4);
// [0x4f7fb0] (334 bytes) sub_4F7FB0
// void sub_4F7FB0(char *a1);
// [0x4f8100] (1734 bytes) sub_4F8100
// uint32_t *sub_4F8100(uint32_t *a1, glwebtools::Codec **a2);
// [0x4f87d0] (384 bytes) sub_4F87D0
// int sub_4F87D0(int a1, int a2, int a3, int a4, int a5, const char *a6);
// [0x4f8950] (865 bytes) sub_4F8950
// int sub_4F8950(int a1, int a2, char *a3, char a4);
// [0x4f8cc0] (148 bytes) sub_4F8CC0
// int sub_4F8CC0(int a1, char *s);
// [0x4f8d70] (18 bytes) sub_4F8D70
// int sub_4F8D70(int a1);
// [0x4f8d90] (12 bytes) sub_4F8D90
// int sub_4F8D90(int a1);
// [0x4f8da0] (87 bytes) sub_4F8DA0
// unsigned int sub_4F8DA0(int a1);
// [0x4f8e00] (12 bytes) sub_4F8E00
// int sub_4F8E00(int a1);
// [0x4f8e20] (148 bytes) sub_4F8E20
// int sub_4F8E20(int a1, char *s);
// [0x4f8ec0] (2072 bytes) sub_4F8EC0
// int sub_4F8EC0(int a1, const char **a2);
// [0x4f96e0] (275 bytes) sub_4F96E0
// int sub_4F96E0(int a1, int a2);
// [0x4f9808] (1 bytes) nullsub_3
// void nullsub_3();
// [0x4f9810] (57 bytes) sub_4F9810
// bool sub_4F9810(int a1);
// [0x4f9850] (2259 bytes) sub_4F9850
// void sub_4F9850(int a1, int a2, int a3);
// [0x4fa130] (3185 bytes) sub_4FA130
// int sub_4FA130(int a1, int a2, int a3, int a4, unsigned int **a5);
// [0x4fadb0] (401 bytes) sub_4FADB0
// void sub_4FADB0(int a1);
// [0x4faf50] (17 bytes) sub_4FAF50
// int sub_4FAF50(int a1, char a2);
// [0x4faf70] (17 bytes) sub_4FAF70
// int sub_4FAF70(int a1, char a2);
// [0x4faf90] (16 bytes) sub_4FAF90
// int sub_4FAF90(int a1);
// [0x4fafa0] (90 bytes) sub_4FAFA0
// int sub_4FAFA0(int a1);
// [0x4fb000] (118 bytes) sub_4FB000
// int sub_4FB000(int a1, int a2);
// [0x4fb0c0] (62 bytes) sub_4FB0C0
// int sub_4FB0C0(int a1, int a2, char a3);
// [0x4fb110] (36 bytes) sub_4FB110
// int sub_4FB110(int a1, int a2);
// [0x4fb140] (220 bytes) sub_4FB140
// int sub_4FB140(int a1, int a2);
// [0x4fb220] (255 bytes) sub_4FB220
// int sub_4FB220(int a1, int a2, int a3);
// [0x4fb320] (231 bytes) sub_4FB320
// int sub_4FB320(int a1, int a2, int a3);
// [0x4fb4a0] (486 bytes) sub_4FB4A0
// int sub_4FB4A0(int a1, const void **a2);
// [0x4fb690] (527 bytes) sub_4FB690
// int sub_4FB690(int a1, int a2);
// [0x4fb8c0] (308 bytes) sub_4FB8C0
// uint32_t *sub_4FB8C0(uint32_t *a1, unsigned int a2);
// [0x4fba00] (35 bytes) sub_4FBA00
// char sub_4FBA00(int a1, int a2);
// [0x4fba30] (38 bytes) sub_4FBA30
// int sub_4FBA30();
// [0x4fba90] (105 bytes) sub_4FBA90
// int sub_4FBA90(int a1, int a2, int a3);
// [0x4fbb00] (138 bytes) sub_4FBB00
// uint32_t *sub_4FBB00(uint32_t *a1, int a2, int a3);
// [0x4fbb90] (1147 bytes) sub_4FBB90
// gaia::BaseJSONServiceResponse **sub_4FBB90(uint32_t *a1);
// [0x4fc010] (795 bytes) sub_4FC010
// int sub_4FC010(int a1, unsigned int *a2, uint8_t *a3);
// [0x4fc330] (448 bytes) sub_4FC330
// int sub_4FC330(int a1, int *a2);
// [0x4fc4f0] (326 bytes) sub_4FC4F0
// uint32_t *sub_4FC4F0(uint32_t *a1, int a2, char a3);
// [0x4fc740] (128 bytes) sub_4FC740
// int sub_4FC740(int a1, int a2);
// [0x4fc7c0] (191 bytes) sub_4FC7C0
// unsigned int sub_4FC7C0(int a1);
// [0x4fc880] (101 bytes) sub_4FC880
// unsigned int sub_4FC880(int a1);
// [0x4fc930] (681 bytes) sub_4FC930
// int sub_4FC930(uint32_t *a1);
// [0x4fcbe0] (47 bytes) sub_4FCBE0
// int sub_4FCBE0(int a1, int a2);
// [0x4fce90] (321 bytes) sub_4FCE90
// void sub_4FCE90(uint32_t *a1);
// [0x4fcfe0] (1550 bytes) sub_4FCFE0
// uint32_t *sub_4FCFE0(uint32_t *a1, int a2);
// [0x4fd5f0] (1518 bytes) sub_4FD5F0
// uint32_t *sub_4FD5F0(uint32_t *a1, int a2);
// [0x4fdbe0] (1718 bytes) sub_4FDBE0
// uint32_t *sub_4FDBE0(uint32_t *a1, int a2, glwebtools::Codec **a3);
// [0x4fe2a0] (2408 bytes) sub_4FE2A0
// int sub_4FE2A0(int a1, int a2, char a3);
// [0x4fec10] (677 bytes) sub_4FEC10
// int sub_4FEC10(int a1);
// [0x4feef0] (332 bytes) sub_4FEEF0
// int sub_4FEEF0(int a1);
// [0x4ff040] (1469 bytes) sub_4FF040
// uint32_t *sub_4FF040(uint32_t *a1, uint32_t *a2);
// [0x4ff600] (2182 bytes) sub_4FF600
// uint32_t *sub_4FF600(uint32_t *a1, uint32_t *a2);
// [0x4ffe90] (380 bytes) sub_4FFE90
// void sub_4FFE90(int a1, char a2);
// [0x500010] (9 bytes) sub_500010
// void sub_500010();
// [0x500020] (47 bytes) sub_500020
// int *sub_500020(int *a1);
// [0x500050] (47 bytes) sub_500050
// uint32_t *sub_500050(uint32_t *a1, int a2, int a3);
// [0x5000d0] (13 bytes) sub_5000D0
// int sub_5000D0(int a1);
// [0x5000e0] (13 bytes) sub_5000E0
// int sub_5000E0(int a1);
// [0x500100] (269 bytes) sub_500100
// int sub_500100();
// [0x500210] (2146 bytes) sub_500210
// uint32_t *sub_500210(uint8_t *a1);
// [0x500a80] (701 bytes) sub_500A80
// void sub_500A80(int a1, char a2);
// [0x500d40] (16 bytes) sub_500D40
// int sub_500D40(int a1);
// [0x500d50] (445 bytes) sub_500D50
// int sub_500D50(int a1, uint8_t a2);
// [0x500f10] (97 bytes) sub_500F10
// int sub_500F10(int a1, char a2);
// [0x500f80] (102 bytes) sub_500F80
// int sub_500F80();
// [0x500ff0] (675 bytes) sub_500FF0
// int sub_500FF0(int a1);
// [0x5012a0] (102 bytes) sub_5012A0
// int sub_5012A0();
// [0x501310] (604 bytes) sub_501310
// int sub_501310(int a1);
// [0x501570] (441 bytes) sub_501570
// int sub_501570(int a1, int a2);
// [0x501750] (17 bytes) sub_501750
// bool sub_501750(int a1);
// [0x501770] (1958 bytes) sub_501770
// void sub_501770(int *a1);
// [0x501f20] (389 bytes) sub_501F20
// void sub_501F20(int a1);
// [0x5020b0] (366 bytes) sub_5020B0
// int sub_5020B0(int a1);
// [0x502220] (585 bytes) sub_502220
// int sub_502220();
// [0x502470] (22 bytes) sub_502470
// int sub_502470();
// [0x502490] (365 bytes) sub_502490
// int sub_502490(long double a1, int a2, int a3, int a4, char *a5);
// [0x502600] (62 bytes) sub_502600
// int sub_502600();
// [0x502640] (9 bytes) sub_502640
// void sub_502640();
// [0x502658] (1 bytes) nullsub_4
// void nullsub_4();
// [0x502660] (24 bytes) sub_502660
// int sub_502660(int a1);
// [0x502680] (60 bytes) sub_502680
// const char **sub_502680(const char ***a1);
// [0x5026c0] (94 bytes) sub_5026C0
// int sub_5026C0(uint32_t *a1);
// [0x502720] (60 bytes) sub_502720
// const char **sub_502720(const char ***a1);
// [0x502770] (474 bytes) sub_502770
// int sub_502770(int *a1, int a2);
// [0x502950] (172 bytes) sub_502950
// uint8_t *sub_502950(int a1, uint8_t *a2, int a3);
// [0x502a00] (12 bytes) sub_502A00
// int sub_502A00(int a1);
// [0x502a10] (26 bytes) sub_502A10
// int sub_502A10(int a1, int a2);
// [0x502a30] (12 bytes) sub_502A30
// int sub_502A30(int a1);
// [0x502a40] (12 bytes) sub_502A40
// int sub_502A40(int a1);
// [0x502a50] (12 bytes) sub_502A50
// int sub_502A50(int a1);
// [0x502a60] (165 bytes) sub_502A60
// int sub_502A60(int a1, char *s1);
// [0x502b10] (190 bytes) sub_502B10
// int sub_502B10(int a1, int a2);
// [0x502bd0] (368 bytes) sub_502BD0
// int sub_502BD0(int a1, int a2, uint32_t *a3, uint32_t *a4, int *a5);
// [0x502d40] (305 bytes) sub_502D40
// int sub_502D40(int a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, int *a6);
// [0x502e80] (1911 bytes) sub_502E80
// void sub_502E80(int a1, int a2, int a3, int a4, int a5);
// [0x503600] (94 bytes) sub_503600
// int sub_503600(int a1, int a2, int a3, int a4);
// [0x503660] (2592 bytes) sub_503660
// int sub_503660(uint32_t *a1, char *a2, char *a3, int a4, int a5);
// [0x5040d0] (106 bytes) sub_5040D0
// void sub_5040D0(int a1, int a2, int a3, int a4, int a5);
// [0x504140] (3193 bytes) sub_504140
// int sub_504140(int a1, int a2, int a3, int a4, int a5, unsigned int **a6);
// [0x504dc0] (2479 bytes) sub_504DC0
// void sub_504DC0(int a1);
// [0x505770] (2021 bytes) sub_505770
// void sub_505770(int a1, int a2, int a3);
// [0x505f60] (2527 bytes) sub_505F60
// void sub_505F60(int *a1, int a2, int a3, int a4, int a5, char a6, int a7);
// [0x506960] (253 bytes) sub_506960
// int sub_506960(int a1, int *a2);
// [0x506a60] (4021 bytes) sub_506A60
// int sub_506A60( uint32_t *a1, char a2, char a3, int a4, int a5, int a6, int a7, int a8, uint32_t *a9, glotv3::EventValue *a10, int a11);
// [0x507a20] (2939 bytes) sub_507A20
// void sub_507A20(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);
// [0x5085a0] (2175 bytes) sub_5085A0
// int sub_5085A0(int a1, int a2);
// [0x508e20] (2638 bytes) sub_508E20
// void sub_508E20(int a1, int a2, int a3, int a4);
// [0x509890] (32 bytes) sub_509890
// int sub_509890(unsigned int a1);
// [0x5098b0] (107 bytes) sub_5098B0
// int sub_5098B0(uint32_t *a1, char a2);
// [0x509920] (1906 bytes) sub_509920
// void sub_509920(int a1, int a2);
// [0x50a0a0] (3083 bytes) sub_50A0A0
// void sub_50A0A0(int a1, char *s, int a3, int a4, int a5);
// [0x50acb0] (1911 bytes) sub_50ACB0
// void sub_50ACB0(int a1, int a2);
// [0x50b430] (1967 bytes) sub_50B430
// void sub_50B430(int a1, int a2, unsigned int a3);
// [0x50bbe0] (407 bytes) sub_50BBE0
// int sub_50BBE0(int a1, uint8_t a2);
// [0x50bd80] (2169 bytes) sub_50BD80
// void sub_50BD80(int a1, const char **a2);
// [0x50c600] (1898 bytes) sub_50C600
// void sub_50C600(int a1, char a2, int a3);
// [0x50cd70] (4009 bytes) sub_50CD70
// void sub_50CD70(uint32_t *a1, const char **a2, int a3);
// [0x50dd20] (226 bytes) sub_50DD20
// uint32_t *sub_50DD20(uint32_t *a1, int a2);
// [0x50de18] (1 bytes) nullsub_5
// void nullsub_5();
// [0x50de20] (1871 bytes) sub_50DE20
// void sub_50DE20(int a1, int a2);
// [0x50e570] (2232 bytes) sub_50E570
// void sub_50E570(int a1, const char **a2, int a3, int a4, char a5, int a6);
// [0x50ee30] (1906 bytes) sub_50EE30
// void sub_50EE30(int a1);
// [0x50f5b0] (1871 bytes) sub_50F5B0
// void sub_50F5B0(int a1, int a2);
// [0x50fd00] (4957 bytes) sub_50FD00
// int sub_50FD00( int a1, int a2, int a3, const char **a4, int a5, int a6, int a7, int a8, int a9, int a10, char a11);
// [0x511060] (2440 bytes) sub_511060
// void sub_511060(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
// [0x5119f0] (1866 bytes) sub_5119F0
// void sub_5119F0(int a1, int a2);
// [0x512140] (1871 bytes) sub_512140
// void sub_512140(int a1, int a2);
// [0x512890] (2126 bytes) sub_512890
// int sub_512890(int a1, int a2, int a3);
// [0x5130e0] (253 bytes) sub_5130E0
// void sub_5130E0(long double a1, uint8_t *a2, unsigned int a3, char a4);
// [0x5131e0] (1871 bytes) sub_5131E0
// void sub_5131E0(int a1, int a2);
// [0x513930] (39 bytes) sub_513930
// int sub_513930();
// [0x513960] (100 bytes) sub_513960
// int sub_513960(int a1, int a2);
// [0x5139f0] (9 bytes) sub_5139F0
// int sub_5139F0();
// [0x513a00] (20 bytes) sub_513A00
// int sub_513A00(int a1, int a2);
// [0x513a20] (783 bytes) sub_513A20
// void sub_513A20(int a1, int a2);
// [0x513d30] (449 bytes) sub_513D30
// void sub_513D30(long double a1, int a2, const char **a3, const char **a4);
// [0x513f00] (21 bytes) sub_513F00
// void sub_513F00(int a1, int a2, int a3);
// [0x513f20] (225 bytes) sub_513F20
// unsigned int sub_513F20();
// [0x514010] (1446 bytes) sub_514010
// unsigned int sub_514010(long double a1, int a2, int a3, char *nptr, char *a5);
// [0x5145c0] (1887 bytes) sub_5145C0
// void sub_5145C0(int a1, int a2, const char **a3, int a4, int a5);
// [0x514d20] (2453 bytes) sub_514D20
// int sub_514D20(int a1, int a2);
// [0x5156c0] (65 bytes) sub_5156C0
// bool sub_5156C0(int a1);
// [0x515710] (34 bytes) sub_515710
// void sub_515710(int a1);
// [0x515740] (12 bytes) sub_515740
// int sub_515740(int a1);
// [0x515750] (9 bytes) sub_515750
// void sub_515750();
// [0x515770] (63 bytes) sub_515770
// int64_t sub_515770(int64_t a1, char a2);
// [0x5157b0] (35 bytes) sub_5157B0
// int sub_5157B0(int a1, int a2);
// [0x5157e0] (35 bytes) sub_5157E0
// int sub_5157E0(int a1, int a2);
// [0x515810] (178 bytes) sub_515810
// int sub_515810(long double a1, int a2);
// [0x5158d0] (43 bytes) sub_5158D0
// int sub_5158D0();
// [0x515900] (2456 bytes) sub_515900
// void sub_515900(int a1, int a2, int a3, int a4);
// [0x5162a0] (30 bytes) sub_5162A0
// int sub_5162A0(int a1, unsigned int a2);
// [0x5162c0] (1980 bytes) sub_5162C0
// void sub_5162C0(int a1, unsigned int a2);
// [0x516a80] (125 bytes) sub_516A80
// int sub_516A80(int a1, const void **a2);
// [0x516b00] (134 bytes) sub_516B00
// int sub_516B00(int a1, void **a2);
// [0x516b90] (329 bytes) sub_516B90
// int sub_516B90(int a1, int a2);
// [0x516ce0] (329 bytes) sub_516CE0
// int sub_516CE0(int a1, int a2);
// [0x516e30] (134 bytes) sub_516E30
// int sub_516E30(int a1, void **a2);
// [0x516ec0] (1899 bytes) sub_516EC0
// void sub_516EC0(int a1, unsigned int a2);
// [0x517630] (3185 bytes) sub_517630
// int sub_517630(int a1, int a2, int a3, int a4, int a5);
// [0x5182b0] (2851 bytes) sub_5182B0
// void sub_5182B0(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, char a9);
// [0x518de0] (3516 bytes) sub_518DE0
// int sub_518DE0( int a1, int a2, int a3, __guard *a4, int a5, int a6, char a7, int a8, int a9, int a10, char a11, char a12, char a13, char a14, uint8_t a15, uint8_t a16);
// [0x519ba0] (2109 bytes) sub_519BA0
// void sub_519BA0(int a1, int a2, int a3, int a4);
// [0x51a3e0] (1871 bytes) sub_51A3E0
// void sub_51A3E0(int a1, int a2);
// [0x51ab30] (2239 bytes) sub_51AB30
// int sub_51AB30();
// [0x51b3f0] (1885 bytes) sub_51B3F0
// void sub_51B3F0(int a1, char *s);
// [0x51bb50] (1871 bytes) sub_51BB50
// void sub_51BB50(int a1, int a2);
// [0x51c2a0] (1979 bytes) sub_51C2A0
// void sub_51C2A0(int a1, int a2, int a3, int a4);
// [0x51ca60] (2146 bytes) sub_51CA60
// void sub_51CA60(int a1, int a2, int a3, int a4, int a5, int a6, int a7, char *a8, char *s);
// [0x51d2d0] (2031 bytes) sub_51D2D0
// int sub_51D2D0(int a1, int a2);
// [0x51dac0] (353 bytes) sub_51DAC0
// void sub_51DAC0(int a1);
// [0x51dc30] (94 bytes) sub_51DC30
// int sub_51DC30(int a1);
// [0x51dc98] (1 bytes) nullsub_6
// void nullsub_6();
// [0x51dca0] (437 bytes) sub_51DCA0
// int sub_51DCA0(int *a1, int a2);
// [0x51de60] (103 bytes) sub_51DE60
// int sub_51DE60(int *a1, int a2);
// [0x51ded0] (103 bytes) sub_51DED0
// int sub_51DED0(int a1);
// [0x51df40] (12 bytes) sub_51DF40
// int sub_51DF40(int a1);
// [0x51df50] (109 bytes) sub_51DF50
// void sub_51DF50(int a1);
// [0x51dfc0] (48 bytes) sub_51DFC0
// int sub_51DFC0(int a1);
// [0x51dff0] (45 bytes) sub_51DFF0
// int sub_51DFF0(int a1);
// [0x51e020] (1126 bytes) sub_51E020
// int *sub_51E020(const char *a1);
// [0x51e490] (178 bytes) sub_51E490
// int (**sub_51E490(int a1, int a2, int a3, int a4, uint32_t *a5))(glitch::collada::CMorphingMesh *);
// [0x51e570] (55 bytes) sub_51E570
// int sub_51E570(int a1, float a2);
// [0x51e5b0] (67 bytes) sub_51E5B0
// unsigned int sub_51E5B0(int a1, float a2);
// [0x51e600] (67 bytes) sub_51E600
// unsigned int sub_51E600(int a1, float a2);
// [0x51e650] (13 bytes) sub_51E650
// long double sub_51E650(int a1);
// [0x51e660] (25 bytes) sub_51E660
// long double sub_51E660(int a1);
// [0x51e6a0] (63 bytes) sub_51E6A0
// int sub_51E6A0(int a1, float a2);
// [0x51e6e0] (82 bytes) sub_51E6E0
// unsigned int sub_51E6E0(int a1, float a2);
// [0x51e740] (82 bytes) sub_51E740
// unsigned int sub_51E740(int a1, float a2);
// [0x51e7a8] (1 bytes) nullsub_7
// void nullsub_7();
// [0x51e7b8] (1 bytes) nullsub_8
// void nullsub_8();
// [0x51e7c0] (1292 bytes) sub_51E7C0
// void sub_51E7C0(int16_t a1, int a2, int a3, int a4);
// [0x51ecd0] (136 bytes) sub_51ECD0
// int sub_51ECD0(int a1, int a2, int a3, int a4);
// [0x51ed80] (433 bytes) sub_51ED80
// glitch::video::IVideoDriver *sub_51ED80();
// [0x51ef40] (441 bytes) sub_51EF40
// int sub_51EF40();
// [0x51f100] (441 bytes) sub_51F100
// glitch::video::IVideoDriver *sub_51F100();
// [0x51f2c0] (441 bytes) sub_51F2C0
// glitch::video::IVideoDriver *sub_51F2C0();
// [0x51f480] (233 bytes) sub_51F480
// int sub_51F480(int a1);
// [0x51f578] (1 bytes) nullsub_9
// void nullsub_9();
// [0x51f580] (9 bytes) sub_51F580
// void sub_51F580();
// [0x51f598] (1 bytes) nullsub_10
// void nullsub_10();
// [0x51f5a0] (420 bytes) sub_51F5A0
// char **sub_51F5A0(int a1, int a2, int a3);
// [0x51f758] (1 bytes) nullsub_11
// void nullsub_11();
// [0x51f768] (1 bytes) nullsub_12
// void nullsub_12();
// [0x51f778] (1 bytes) nullsub_13
// void nullsub_13();
// [0x51f780] (338 bytes) sub_51F780
// int sub_51F780(int a1, int a2, glf *a3, glf *a4);
// [0x51f8e0] (200 bytes) sub_51F8E0
// int sub_51F8E0(int a1, int a2, char a3);
// [0x51f9b0] (1181 bytes) sub_51F9B0
// int sub_51F9B0(int a1, int a2, int a3, glf *a4);
// [0x51fe50] (9 bytes) sub_51FE50
// void sub_51FE50();
// [0x51fe60] (238 bytes) sub_51FE60
// char ***sub_51FE60(int a1, int a2, char ***a3);
// [0x51ff50] (96 bytes) sub_51FF50
// int sub_51FF50(uint32_t *a1);
// [0x51fff0] (124 bytes) sub_51FFF0
// int64_t sub_51FFF0();
// [0x520070] (67 bytes) sub_520070
// void sub_520070(int a1);
// [0x5200c0] (96 bytes) sub_5200C0
// int sub_5200C0(int a1);
// [0x520120] (47 bytes) sub_520120
// int64_t sub_520120(int a1);
// [0x520150] (100 bytes) sub_520150
// int sub_520150(int a1, int a2);
// [0x5201c0] (38 bytes) sub_5201C0
// uint32_t *sub_5201C0(uint32_t *a1);
// [0x5201f0] (38 bytes) sub_5201F0
// uint32_t *sub_5201F0(uint32_t *a1);
// [0x520220] (38 bytes) sub_520220
// uint32_t *sub_520220(uint32_t *a1, int a2, int a3);
// [0x520250] (21 bytes) sub_520250
// int sub_520250(int a1);
// [0x520270] (19 bytes) sub_520270
// int sub_520270(int a1, int a2, int a3);
// [0x520290] (99 bytes) sub_520290
// int sub_520290(int a1);
// [0x520300] (115 bytes) sub_520300
// int sub_520300(int a1);
// [0x520380] (112 bytes) sub_520380
// long double sub_520380(float a1, float a2, float a3);
// [0x5203f0] (1097 bytes) sub_5203F0
// void sub_5203F0(int *a1, char *a2, char *a3, int a4);
// [0x520870] (143 bytes) sub_520870
// void sub_520870(uint32_t **a1, char *a2, int a3);
// [0x520900] (309 bytes) sub_520900
// volatile int32_t *sub_520900(volatile int32_t *a1, uint32_t **a2, const char *a3);
// [0x520a40] (284 bytes) sub_520A40
// unsigned int sub_520A40(unsigned int *a1, int a2);
// [0x520b60] (176 bytes) sub_520B60
// uint32_t *sub_520B60(uint32_t *a1, const char **a2, int a3);
// [0x520c10] (176 bytes) sub_520C10
// uint32_t *sub_520C10(uint32_t *a1, const char **a2, int a3);
// [0x520cc0] (354 bytes) sub_520CC0
// glitch::video::CMaterial **sub_520CC0(glitch::video::CMaterial **a1, uint32_t *a2, char *a3);
// [0x520e30] (1298 bytes) sub_520E30
// int sub_520E30(uint32_t *a1, int a2, int a3, int a4);
// [0x521350] (260 bytes) sub_521350
// int sub_521350(int a1, uint32_t **a2, int a3);
// [0x521460] (255 bytes) sub_521460
// uint32_t *sub_521460(uint32_t *a1, uint32_t *a2);
// [0x521560] (621 bytes) sub_521560
// glitch::collada::CColladaDatabase *sub_521560( glitch::collada::CColladaDatabase *a1, const char *a2, int a3, int a4);
// [0x5217d0] (596 bytes) sub_5217D0
// float *sub_5217D0(float *a1, float *a2, float *a3, float a4);
// [0x521a30] (266 bytes) sub_521A30
// float *sub_521A30(float *a1, float *a2, float *a3, float *a4);
// [0x521b40] (247 bytes) sub_521B40
// bool sub_521B40(float *a1, float a2, float *a3, float *a4);
// [0x521c40] (55 bytes) sub_521C40
// long double sub_521C40(float *a1, float *a2);
// [0x521c80] (755 bytes) sub_521C80
// uint32_t *sub_521C80(uint32_t *a1, int a2);
// [0x521f80] (111 bytes) sub_521F80
// int (**sub_521F80(glitch::core::IStatic3DTree *a1))(int);
// [0x521ff0] (128 bytes) sub_521FF0
// int sub_521FF0(glitch::core::IStatic3DTree *a1);
// [0x522070] (62 bytes) sub_522070
// int sub_522070(uint32_t *a1);
// [0x5220b0] (913 bytes) sub_5220B0
// void sub_5220B0(glitch::core::IStatic3DTree *a1, int a2, int a3, int a4);
// [0x522460] (2832 bytes) sub_522460
// void sub_522460(int a1, float a2, float *a3, float *a4, float *a5, float *a6);
// [0x522f70] (2058 bytes) sub_522F70
// void sub_522F70(int a1, float a2, char a3, char a4, char a5);
// [0x523788] (1 bytes) nullsub_14
// void nullsub_14();
// [0x523798] (1 bytes) nullsub_15
// void nullsub_15();
// [0x5237a8] (1 bytes) nullsub_16
// void nullsub_16();
// [0x5237b8] (1 bytes) nullsub_17
// void nullsub_17();
// [0x5237c0] (188 bytes) sub_5237C0
// int *sub_5237C0();
// [0x523880] (445 bytes) sub_523880
// int *sub_523880(unsigned int a1);
// [0x523a40] (323 bytes) sub_523A40
// int sub_523A40(int *a1);
// [0x523b90] (787 bytes) sub_523B90
// int sub_523B90(int a1);
// [0x523eb0] (499 bytes) sub_523EB0
// void *Core::Memory::AllocateTracked(size_t a1, int a2, int a3, char a4);
// [0x5240b0] (355 bytes) sub_5240B0
// void sub_5240B0(int *ptr);
// [0x524220] (54 bytes) sub_524220
// uint32_t *sub_524220(uint32_t *a1);
// [0x524260] (83 bytes) sub_524260
// int sub_524260(int a1);
// [0x5242c0] (83 bytes) sub_5242C0
// int sub_5242C0(int a1);
// [0x524320] (88 bytes) sub_524320
// int sub_524320(int a1, int a2, int a3);
// [0x524380] (85 bytes) sub_524380
// int sub_524380(int a1);
// [0x5243e0] (397 bytes) sub_5243E0
// int sub_5243E0(int a1, int a2, const char *length, int a4);
// [0x524570] (164 bytes) sub_524570
// int sub_524570(uint32_t *a1, int a2, const char *length, int a4);
// [0x524620] (94 bytes) sub_524620
// int sub_524620(uint32_t *a1, void *src, size_t n);
// [0x524680] (200 bytes) sub_524680
// int sub_524680(int *a1, int a2);
// [0x524750] (96 bytes) sub_524750
// int sub_524750(uint32_t *a1, void *dest, size_t n);
// [0x5247b0] (275 bytes) sub_5247B0
// int sub_5247B0(uint32_t *a1, int a2);
// [0x5248d0] (93 bytes) sub_5248D0
// int sub_5248D0(uint32_t *a1, void *dest, size_t n);
// [0x524950] (82 bytes) sub_524950
// int sub_524950(int a1);
// [0x5249b0] (229 bytes) sub_5249B0
// int sub_5249B0(int a1, int a2);
// [0x524d30] (82 bytes) sub_524D30
// int sub_524D30(int a1);
// [0x524da0] (226 bytes) sub_524DA0
// int sub_524DA0(int a1, int a2);
// [0x524e90] (31 bytes) sub_524E90
// int sub_524E90(int a1);
// [0x524eb0] (405 bytes) sub_524EB0
// int sub_524EB0(int a1, int a2);
// [0x525050] (305 bytes) sub_525050
// int sub_525050(uint32_t *a1);
// [0x525190] (305 bytes) sub_525190
// int sub_525190(uint32_t *a1);
// [0x5252d0] (217 bytes) sub_5252D0
// int sub_5252D0(int a1);
// [0x5253b0] (313 bytes) sub_5253B0
// void sub_5253B0(int a1, int a2);
// [0x5254f0] (217 bytes) sub_5254F0
// int sub_5254F0(int a1);
// [0x5255d0] (665 bytes) sub_5255D0
// int sub_5255D0(int a1, int a2);
// [0x525870] (550 bytes) sub_525870
// int sub_525870(int a1, int a2);
// [0x525aa0] (706 bytes) sub_525AA0
// void sub_525AA0(int a1, int a2);
// [0x525d70] (604 bytes) sub_525D70
// int sub_525D70(int a1);
// [0x525fd0] (297 bytes) sub_525FD0
// int sub_525FD0(int a1);
// [0x526100] (313 bytes) sub_526100
// void sub_526100(int a1, int a2);
// [0x526240] (2552 bytes) sub_526240
// void sub_526240(long double a1, int a2, int a3);
// [0x526c40] (112 bytes) sub_526C40
// int sub_526C40(int a1, int a2, char a3);
// [0x526cb0] (40 bytes) sub_526CB0
// uint32_t *sub_526CB0(uint32_t *a1);
// [0x526ce0] (128 bytes) sub_526CE0
// uint32_t *sub_526CE0(int a1, unsigned int a2);
// [0x526d60] (172 bytes) sub_526D60
// void sub_526D60(uint32_t *a1);
// [0x526e10] (56 bytes) sub_526E10
// uint32_t *sub_526E10(uint32_t *a1);
// [0x526e50] (99 bytes) sub_526E50
// uint32_t *sub_526E50(uint32_t *a1);
// [0x527090] (2916 bytes) sub_527090
// int sub_527090(uint32_t *a1);
// [0x527c00] (2741 bytes) sub_527C00
// int sub_527C00(int a1);
// [0x5286c0] (577 bytes) sub_5286C0
// int sub_5286C0(uint32_t *a1);
// [0x528910] (1593 bytes) sub_528910
// void sub_528910(int a1, uint32_t *a2);
// [0x528f50] (756 bytes) sub_528F50
// void sub_528F50(uint32_t *a1, int a2);
// [0x529250] (204 bytes) sub_529250
// int sub_529250(int a1);
// [0x529320] (2131 bytes) sub_529320
// unsigned int *sub_529320(uint32_t *a1, char a2, unsigned int *a3);
// [0x529b80] (850 bytes) sub_529B80
// void sub_529B80(int a1, int a2);
// [0x529ee0] (1362 bytes) sub_529EE0
// int (**sub_529EE0(int a1))(int);
// [0x52a440] (56 bytes) sub_52A440
// void sub_52A440(void *a1);
// [0x52a480] (2471 bytes) sub_52A480
// int sub_52A480(int a1);
// [0x52ae30] (3651 bytes) sub_52AE30
// void sub_52AE30(int a1);
// [0x52bc80] (167 bytes) sub_52BC80
// void sub_52BC80(uint32_t *a1, int a2, int a3, int a4);
// [0x52bd30] (1356 bytes) sub_52BD30
// int sub_52BD30(uint32_t *a1, char a2);
// [0x52c280] (301 bytes) sub_52C280
// gaia::Gaia *sub_52C280(gaia::Gaia *a1);
// [0x52c3b0] (937 bytes) sub_52C3B0
// uint32_t *sub_52C3B0(uint32_t *a1);
// [0x52c760] (2549 bytes) sub_52C760
// int sub_52C760(uint32_t *a1, char *a2, int a3, char *a4, int a5, char *s, char *a7, int a8, char *a9);
// [0x52d160] (1635 bytes) sub_52D160
// void sub_52D160(int a1);
// [0x52d7d0] (416 bytes) sub_52D7D0
// int sub_52D7D0(int *a1, int a2);
// [0x52d970] (645 bytes) sub_52D970
// int sub_52D970(int a1);
// [0x52dc00] (557 bytes) sub_52DC00
// int sub_52DC00(int a1);
// [0x52de30] (988 bytes) sub_52DE30
// int *sub_52DE30(int a1);
// [0x52e210] (502 bytes) sub_52E210
// int *sub_52E210(int *a1, int a2);
// [0x52e410] (5597 bytes) sub_52E410
// int sub_52E410(int a1, uint8_t a2);
// [0x52f9f0] (273 bytes) sub_52F9F0
// char sub_52F9F0(int a1, int a2);
// [0x530930] (3613 bytes) sub_530930
// int sub_530930(int a1, unsigned int a2, int a3, void *a4, char a5, char a6);
// [0x531750] (1506 bytes) sub_531750
// int sub_531750(int a1);
// [0x531d40] (3911 bytes) sub_531D40
// void sub_531D40(uint32_t *a1, int a2);
// [0x532ca0] (236 bytes) sub_532CA0
// void sub_532CA0(int a1, int a2, int a3, int a4);
// [0x532d90] (518 bytes) sub_532D90
// int sub_532D90(int a1, int *a2);
// [0x532fa0] (678 bytes) sub_532FA0
// void sub_532FA0(uint32_t *a1);
// [0x533250] (665 bytes) sub_533250
// int sub_533250(int a1, int *a2);
// [0x5334f0] (288 bytes) sub_5334F0
// int sub_5334F0(uint32_t *a1, void **a2, int a3);
// [0x533610] (286 bytes) sub_533610
// uint32_t *sub_533610(uint32_t *a1, void **a2, int a3);
// [0x533730] (3619 bytes) sub_533730
// int sub_533730( uint32_t *a1, int a2, int a3, int a4, unsigned int a5, unsigned int a6, int a7, int a8, int a9, char *s, int a11, int a12, int a13, unsigned int a14, int a15, int a16, int a17);
// [0x534560] (357 bytes) sub_534560
// int sub_534560(int a1, int a2, int a3, unsigned int a4);
// [0x5346d0] (404 bytes) sub_5346D0
// int sub_5346D0(uint32_t *a1, void **a2, int a3);
// [0x534870] (1189 bytes) sub_534870
// int sub_534870(uint32_t *a1, uint32_t *a2, int a3, char a4);
// [0x534d20] (1357 bytes) sub_534D20
// unsigned int *sub_534D20(uint32_t *a1, int a2, char a3);
// [0x5352a0] (1569 bytes) sub_5352A0
// int sub_5352A0(int a1, int a2);
// [0x5358d0] (1176 bytes) sub_5358D0
// void sub_5358D0(int a1, int a2);
// [0x535d70] (1170 bytes) sub_535D70
// void sub_535D70(int a1);
// [0x536210] (1228 bytes) sub_536210
// uint32_t *sub_536210(uint32_t *a1, unsigned int *a2, char a3);
// [0x5366e0] (1673 bytes) sub_5366E0
// void sub_5366E0(int a1, unsigned int *a2, char a3);
// [0x536d70] (78 bytes) sub_536D70
// void sub_536D70(int a1, unsigned int a2, char a3);
// [0x536dc0] (78 bytes) sub_536DC0
// void sub_536DC0(int a1, unsigned int a2, char a3);
// [0x536e10] (137 bytes) sub_536E10
// int sub_536E10(uint32_t *a1, char a2);
// [0x536ea0] (417 bytes) sub_536EA0
// void sub_536EA0(int a1, int a2);
// [0x537050] (689 bytes) sub_537050
// void sub_537050(int a1);
// [0x537310] (3037 bytes) sub_537310
// int sub_537310(int a1, int a2);
// [0x537ef0] (271 bytes) sub_537EF0
// int sub_537EF0(int a1, int a2);
// [0x538000] (100 bytes) sub_538000
// int sub_538000(int a1, int a2);
// [0x538070] (299 bytes) sub_538070
// void sub_538070(int a1);
// [0x5381a0] (501 bytes) sub_5381A0
// unsigned int *sub_5381A0(int a1);
// [0x5383a0] (751 bytes) sub_5383A0
// unsigned int *sub_5383A0(int a1);
// [0x538690] (524 bytes) sub_538690
// void sub_538690(int a1);
// [0x538e10] (130 bytes) sub_538E10
// void sub_538E10(int a1, int a2);
// [0x538ea0] (766 bytes) sub_538EA0
// int sub_538EA0(int a1, int a2);
// [0x5391a0] (456 bytes) sub_5391A0
// void sub_5391A0(uint32_t *a1, int a2);
// [0x539370] (421 bytes) sub_539370
// void sub_539370(int a1);
// [0x539520] (469 bytes) sub_539520
// int sub_539520(int a1, uint32_t *a2, int a3, char a4);
// [0x539700] (532 bytes) sub_539700
// int sub_539700(int a1, int a2);
// [0x539920] (4324 bytes) sub_539920
// int sub_539920(int a1, int a2);
// [0x53aa10] (1771 bytes) sub_53AA10
// int sub_53AA10(int a1, int a2, int a3, int a4, int a5, int a6);
// [0x53b100] (523 bytes) sub_53B100
// int sub_53B100(int a1, int a2, int a3);
// [0x53b310] (1961 bytes) sub_53B310
// int sub_53B310(uint32_t *a1);
// [0x53bac0] (214 bytes) sub_53BAC0
// int sub_53BAC0(uint32_t *a1);
// [0x53bba0] (2554 bytes) sub_53BBA0
// void sub_53BBA0(int a1, char a2, int a3);
// [0x53c5a0] (350 bytes) sub_53C5A0
// int (**sub_53C5A0(int a1))(int);
// [0x53c700] (56 bytes) sub_53C700
// void sub_53C700(void *a1);
// [0x53c740] (321 bytes) sub_53C740
// int sub_53C740(int a1);
// [0x53c890] (2354 bytes) sub_53C890
// int sub_53C890(int a1);
// [0x53d1d0] (172 bytes) sub_53D1D0
// unsigned int sub_53D1D0(int a1, void *src, int a3);
// [0x53d280] (1541 bytes) sub_53D280
// void sub_53D280(uint32_t *a1, int a2, char a3);
// [0x53d890] (413 bytes) sub_53D890
// void sub_53D890(int a1, char *a2, char *a3, int a4, int a5);
// [0x53da30] (1593 bytes) sub_53DA30
// int sub_53DA30(int a1, char *a2);
// [0x53e070] (410 bytes) sub_53E070
// void sub_53E070(int a1, unsigned int *a2, uint8_t *a3);
// [0x53e210] (5382 bytes) sub_53E210
// void sub_53E210(__guard *a1);
// [0x53f720] (8372 bytes) sub_53F720
// int sub_53F720(int a1);
// [0x5417e0] (28 bytes) sub_5417E0
// int sub_5417E0(int a1);
// [0x541800] (9 bytes) sub_541800
// void sub_541800();
// [0x541810] (24 bytes) sub_541810
// uint32_t *sub_541810(uint32_t *a1);
// [0x541830] (9 bytes) sub_541830
// int sub_541830();
// [0x541840] (9 bytes) sub_541840
// int sub_541840();
// [0x541850] (9 bytes) sub_541850
// int sub_541850();
// [0x541860] (9 bytes) sub_541860
// int sub_541860();
// [0x541870] (9 bytes) sub_541870
// int sub_541870();
// [0x541880] (9 bytes) sub_541880
// int sub_541880();
// [0x541890] (9 bytes) sub_541890
// void sub_541890();
// [0x5418a0] (24 bytes) sub_5418A0
// uint32_t *sub_5418A0(uint32_t *a1);
// [0x5418c0] (28 bytes) sub_5418C0
// int sub_5418C0(int a1);
// [0x5418e0] (24 bytes) sub_5418E0
// uint32_t *sub_5418E0(uint32_t *a1);
// [0x541900] (24 bytes) sub_541900
// uint32_t *sub_541900(uint32_t *a1);
// [0x541920] (24 bytes) sub_541920
// uint32_t *sub_541920(uint32_t *a1);
// [0x541940] (24 bytes) sub_541940
// uint32_t *sub_541940(uint32_t *a1);
// [0x541960] (20 bytes) sub_541960
// uint32_t *sub_541960(uint32_t *a1, int a2, int a3);
// [0x541980] (109 bytes) sub_541980
// bool sub_541980(int a1, int a2, uint32_t *a3);
// [0x5419f0] (26 bytes) sub_5419F0
// bool sub_5419F0(int a1, uint32_t *a2, int a3);
// [0x541a10] (28 bytes) sub_541A10
// int sub_541A10(int a1);
// [0x541a30] (28 bytes) sub_541A30
// int sub_541A30(int a1);
// [0x541a58] (1 bytes) nullsub_18
// void nullsub_18();
// [0x541a60] (22 bytes) sub_541A60
// const char *sub_541A60();
// [0x541a80] (24 bytes) sub_541A80
// uint32_t *sub_541A80(uint32_t *a1);
// [0x541aa0] (22 bytes) sub_541AA0
// const char *sub_541AA0();
// [0x541ac0] (24 bytes) sub_541AC0
// uint32_t *sub_541AC0(uint32_t *a1);
// [0x541ae0] (22 bytes) sub_541AE0
// const char *sub_541AE0();
// [0x541b00] (24 bytes) sub_541B00
// uint32_t *sub_541B00(uint32_t *a1);
// [0x541b20] (28 bytes) sub_541B20
// int sub_541B20(int a1);
// [0x541b40] (28 bytes) sub_541B40
// int sub_541B40(int a1);
// [0x541b60] (28 bytes) sub_541B60
// int sub_541B60(int a1);
// [0x541b80] (28 bytes) sub_541B80
// int sub_541B80(int a1);
// [0x541ba0] (70 bytes) sub_541BA0
// int sub_541BA0(uint32_t *a1);
// [0x541bf0] (28 bytes) sub_541BF0
// int sub_541BF0(int a1);
// [0x541c18] (1 bytes) nullsub_19
// void nullsub_19();
// [0x541c28] (1 bytes) nullsub_20
// void nullsub_20();
// [0x541c38] (1 bytes) nullsub_21
// void nullsub_21();
// [0x541c48] (1 bytes) nullsub_22
// void nullsub_22();
// [0x541c58] (1 bytes) nullsub_23
// void nullsub_23();
// [0x541c68] (1 bytes) nullsub_24
// void nullsub_24();
// [0x541c70] (42 bytes) sub_541C70
// void sub_541C70(uint32_t *a1);
// [0x541ca0] (42 bytes) sub_541CA0
// void sub_541CA0(uint32_t *a1);
// [0x541cd0] (42 bytes) sub_541CD0
// void sub_541CD0(uint32_t *a1);
// [0x541d00] (42 bytes) sub_541D00
// void sub_541D00(uint32_t *a1);
// [0x541d30] (42 bytes) sub_541D30
// void sub_541D30(uint32_t *a1);
// [0x541d60] (46 bytes) sub_541D60
// void sub_541D60(uint8_t *a1);
// [0x541d90] (46 bytes) sub_541D90
// void sub_541D90(uint8_t *a1);
// [0x541dc0] (46 bytes) sub_541DC0
// void sub_541DC0(uint8_t *a1);
// [0x541df0] (46 bytes) sub_541DF0
// void sub_541DF0(uint8_t *a1);
// [0x541e20] (46 bytes) sub_541E20
// void sub_541E20(uint8_t *a1);
// [0x541e50] (46 bytes) sub_541E50
// void sub_541E50(uint8_t *a1);
// [0x541e80] (46 bytes) sub_541E80
// void sub_541E80(uint8_t *a1);
// [0x541eb0] (46 bytes) sub_541EB0
// void sub_541EB0(uint8_t *a1);
// [0x541ee0] (46 bytes) sub_541EE0
// void sub_541EE0(uint8_t *a1);
// [0x541f10] (42 bytes) sub_541F10
// void sub_541F10(uint32_t *a1);
// [0x541f40] (42 bytes) sub_541F40
// void sub_541F40(uint32_t *a1);
// [0x541f70] (42 bytes) sub_541F70
// void sub_541F70(uint32_t *a1);
// [0x541fa0] (42 bytes) sub_541FA0
// void sub_541FA0(uint32_t *a1);
// [0x541fd0] (82 bytes) std::vector<online::tracking::BITracker::PeripheralUsage,std::allocator<online::tracking::BITracker::PeripheralUsage>>::~vector()
// void std::vector<online::tracking::BITracker::PeripheralUsage>::~vector( std::vector<online::tracking::BITracker::PeripheralUsage> *this);
// [0x542030] (70 bytes) sub_542030
// int sub_542030(std::exception *a1);
// [0x542080] (42 bytes) sub_542080
// void sub_542080(glitch::collada::CColladaFactory *a1);
// [0x5420b0] (42 bytes) sub_5420B0
// void sub_5420B0(glitch::collada::CColladaFactory *a1);
// [0x5420e0] (42 bytes) sub_5420E0
// void sub_5420E0(glitch::collada::CColladaFactory *a1);
// [0x542110] (42 bytes) sub_542110
// void sub_542110(glitch::collada::CColladaFactory *a1);
// [0x542140] (45 bytes) sub_542140
// void sub_542140(glitch::collada::CColladaFactory *a1);
// [0x542170] (42 bytes) sub_542170
// void sub_542170(glitch::collada::CColladaFactory *a1);
// [0x5421a0] (42 bytes) sub_5421A0
// void sub_5421A0(glitch::collada::CColladaFactory *a1);
// [0x5421d0] (231 bytes) sub_5421D0
// int sub_5421D0(int a1, int a2, int a3);
// [0x5422c0] (148 bytes) sub_5422C0
// int sub_5422C0(int a1, int a2, int a3);
// [0x542360] (231 bytes) sub_542360
// int sub_542360(int a1, int a2, int a3);
// [0x542450] (42 bytes) sub_542450
// void sub_542450(glitch::collada::CMorphingMesh *a1);
// [0x542480] (169 bytes) sub_542480
// int sub_542480(int a1);
// [0x542530] (14 bytes) sub_542530
// int sub_542530(int a1);
// [0x542540] (42 bytes) sub_542540
// int (**sub_542540(uint32_t *a1))(int);
// [0x542570] (42 bytes) sub_542570
// void sub_542570(glf::FileStreamImpl *a1);
// [0x5425a0] (202 bytes) sub_5425A0
// int sub_5425A0(int a1);
// [0x542670] (40 bytes) sub_542670
// int sub_542670(volatile int32_t *a1);
// [0x5426a0] (64 bytes) sub_5426A0
// void sub_5426A0(glitch::collada::CColladaFactory *a1);
// [0x5426e0] (64 bytes) sub_5426E0
// void sub_5426E0(glitch::collada::CMorphingMesh *a1);
// [0x542720] (64 bytes) sub_542720
// void sub_542720(glitch::collada::CColladaFactory *a1);
// [0x542760] (64 bytes) sub_542760
// void sub_542760(glitch::collada::CColladaFactory *a1);
// [0x5427a0] (42 bytes) sub_5427A0
// void sub_5427A0(glitch::collada::CColladaFactory *a1);
// [0x5427d0] (64 bytes) sub_5427D0
// void sub_5427D0(glitch::collada::CColladaFactory *a1);
// [0x542810] (64 bytes) sub_542810
// void sub_542810(glitch::collada::CColladaFactory *a1);
// [0x542850] (42 bytes) sub_542850
// void sub_542850(glitch::collada::CColladaFactory *a1);
// [0x542880] (64 bytes) sub_542880
// void sub_542880(glitch::collada::CColladaFactory *a1);
// [0x5428c0] (42 bytes) sub_5428C0
// void sub_5428C0(glitch::collada::CColladaFactory *a1);
// [0x5428f0] (64 bytes) sub_5428F0
// void sub_5428F0(glitch::collada::CColladaFactory *a1);
// [0x542930] (64 bytes) sub_542930
// void sub_542930(glf::FileStreamImpl *a1);
// [0x542970] (64 bytes) sub_542970
// void sub_542970(uint32_t *a1);
// [0x5429b0] (42 bytes) sub_5429B0
// void sub_5429B0(glitch::collada::CColladaFactory *a1);
// [0x5429e0] (64 bytes) sub_5429E0
// void sub_5429E0(glitch::collada::CColladaFactory *a1);
// [0x542a20] (64 bytes) sub_542A20
// void sub_542A20(glitch::collada::CColladaFactory *a1);
// [0x542a60] (42 bytes) sub_542A60
// void sub_542A60(glitch::collada::CColladaFactory *a1);
// [0x542a90] (64 bytes) sub_542A90
// void sub_542A90(glitch::collada::CColladaFactory *a1);
// [0x542ad0] (42 bytes) sub_542AD0
// void sub_542AD0(glitch::collada::CColladaFactory *a1);
// [0x542b00] (64 bytes) sub_542B00
// void sub_542B00(glitch::collada::CColladaFactory *a1);
// [0x542b40] (78 bytes) sub_542B40
// void sub_542B40(char *a1);
// [0x542b90] (78 bytes) sub_542B90
// void sub_542B90(std::exception *a1);
// [0x542be0] (747 bytes) sub_542BE0
// int (**sub_542BE0(int a1))(int);
// [0x542ed0] (56 bytes) sub_542ED0
// void sub_542ED0(void *a1);
// [0x542f10] (212 bytes) boost::system::system_error::what(void)const
// int boost::system::system_error::what(boost::system::system_error *this);
// [0x542ff0] (100 bytes) sub_542FF0
// int (**sub_542FF0(int a1))(int);
// [0x543060] (108 bytes) sub_543060
// void sub_543060(uint32_t *a1);
// [0x5430d0] (202 bytes) sub_5430D0
// int sub_5430D0( int a1, int a2, int a3, int a4, int a5, std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a6, std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a7);
// [0x5431a0] (202 bytes) sub_5431A0
// int sub_5431A0(int a1);
// [0x543270] (202 bytes) sub_543270
// int sub_543270( int a1, int a2, int a3, int a4, int a5, std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a6, std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a7);
// [0x543340] (186 bytes) sub_543340
// glitch::collada::CColladaFactory *sub_543340(glitch::collada::CColladaFactory *a1);
// [0x543400] (202 bytes) sub_543400
// int sub_543400(int a1);
// [0x5434d0] (194 bytes) sub_5434D0
// int sub_5434D0(int a1);
// [0x5435a0] (202 bytes) sub_5435A0
// int sub_5435A0(int a1);
// [0x543670] (194 bytes) sub_543670
// int sub_543670(int a1);
// [0x543740] (194 bytes) sub_543740
// int sub_543740(int a1);
// [0x543810] (178 bytes) sub_543810
// int sub_543810(int a1, int a2, int a3, int a4);
// [0x5438d0] (202 bytes) sub_5438D0
// glitch::collada::CColladaFactory *sub_5438D0(glitch::collada::CColladaFactory *a1);
// [0x5439a0] (202 bytes) sub_5439A0
// int sub_5439A0(int a1);
// [0x543a70] (202 bytes) sub_543A70
// int sub_543A70( int a1, int a2, int a3, int a4, int a5, std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a6, std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a7);
// [0x543b40] (186 bytes) sub_543B40
// glitch::collada::CColladaFactory *sub_543B40(glitch::collada::CColladaFactory *a1);
// [0x543c00] (202 bytes) sub_543C00
// int sub_543C00(int a1);
// [0x543cd0] (194 bytes) sub_543CD0
// int sub_543CD0(int a1);
// [0x543da0] (202 bytes) sub_543DA0
// int sub_543DA0(int a1);
// [0x543e70] (194 bytes) sub_543E70
// int sub_543E70(int a1);
// [0x543f40] (194 bytes) sub_543F40
// int sub_543F40(int a1);
// [0x544010] (178 bytes) sub_544010
// int sub_544010(int a1, int a2, int a3, int a4);
// [0x5440d0] (202 bytes) sub_5440D0
// glitch::collada::CColladaFactory *sub_5440D0(glitch::collada::CColladaFactory *a1);
// [0x5441a0] (202 bytes) sub_5441A0
// int sub_5441A0(int a1);
// [0x544270] (186 bytes) sub_544270
// glitch::collada::CColladaFactory *sub_544270(glitch::collada::CColladaFactory *a1);
// [0x544330] (202 bytes) sub_544330
// int sub_544330(int a1);
// [0x544400] (194 bytes) sub_544400
// int sub_544400(int a1);
// [0x5444d0] (202 bytes) sub_5444D0
// int sub_5444D0(int a1);
// [0x5445a0] (194 bytes) sub_5445A0
// int sub_5445A0(int a1);
// [0x544670] (194 bytes) sub_544670
// int sub_544670(int a1);
// [0x544740] (178 bytes) sub_544740
// int sub_544740(int a1, int a2, int a3, int a4);
// [0x544800] (202 bytes) sub_544800
// glitch::collada::CColladaFactory *sub_544800(glitch::collada::CColladaFactory *a1);
// [0x5448d0] (202 bytes) sub_5448D0
// int sub_5448D0(int a1);
// [0x5449a0] (202 bytes) sub_5449A0
// int sub_5449A0( int a1, int a2, int a3, int a4, int a5, std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a6, std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a7);
// [0x544a70] (186 bytes) sub_544A70
// glitch::collada::CColladaFactory *sub_544A70(glitch::collada::CColladaFactory *a1);
// [0x544b30] (202 bytes) sub_544B30
// int sub_544B30(int a1);
// [0x544c00] (194 bytes) sub_544C00
// int sub_544C00(int a1);
// [0x544cd0] (202 bytes) sub_544CD0
// int sub_544CD0(int a1);
// [0x544da0] (194 bytes) sub_544DA0
// int sub_544DA0(int a1);
// [0x544e70] (194 bytes) sub_544E70
// int sub_544E70(int a1);
// [0x544f40] (178 bytes) sub_544F40
// int sub_544F40(int a1, int a2, int a3, int a4);
// [0x545000] (202 bytes) sub_545000
// glitch::collada::CColladaFactory *sub_545000(glitch::collada::CColladaFactory *a1);
// [0x5450d0] (202 bytes) sub_5450D0
// int sub_5450D0(int a1);
// [0x5451a0] (202 bytes) sub_5451A0
// int sub_5451A0( int a1, int a2, int a3, int a4, int a5, std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a6, std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a7);
// [0x545270] (186 bytes) sub_545270
// glitch::collada::CColladaFactory *sub_545270(glitch::collada::CColladaFactory *a1);
// [0x545330] (194 bytes) sub_545330
// int sub_545330(int a1);
// [0x545400] (202 bytes) sub_545400
// int sub_545400(int a1);
// [0x5454d0] (194 bytes) sub_5454D0
// int sub_5454D0(int a1);
// [0x5455a0] (194 bytes) sub_5455A0
// int sub_5455A0(int a1);
// [0x545670] (178 bytes) sub_545670
// int sub_545670(int a1, int a2, int a3, int a4);
// [0x545730] (202 bytes) sub_545730
// glitch::collada::CColladaFactory *sub_545730(glitch::collada::CColladaFactory *a1);
// [0x545800] (439 bytes) sub_545800
// void sub_545800(int a1);
// [0x5459c0] (46 bytes) sub_5459C0
// int sub_5459C0(volatile int32_t *a1);
// [0x5459f0] (273 bytes) sub_5459F0
// int sub_5459F0(int a1, int a2);
// [0x545b10] (88 bytes) sub_545B10
// int sub_545B10(int a1);
// [0x545b70] (1067 bytes) sub_545B70
// Json::Value *sub_545B70(Json::Value *a1, int *a2);
// [0x545fa0] (116 bytes) sub_545FA0
// int sub_545FA0(int a1);
// [0x546020] (67 bytes) sub_546020
// void sub_546020(glitch::collada::CColladaFactory *a1);
// [0x546070] (9044 bytes) sub_546070
// const char *sub_546070(int a1);
// [0x5483d0] (64 bytes) sub_5483D0
// void sub_5483D0(glitch::collada::CColladaFactory *a1);
// [0x548410] (79 bytes) std::vector<std::string,std::allocator<std::string>>::~vector()
// void std::vector<std::string>::~vector(std::vector<std::string> *this);
// [0x548460] (79 bytes) std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>>::~vector()
// void std::vector<gaia::BaseJSONServiceResponse>::~vector(std::vector<gaia::BaseJSONServiceResponse> *this);
// [0x5484b0] (72 bytes) sub_5484B0
// int sub_5484B0();
// [0x548500] (142 bytes) sub_548500
// void *sub_548500();
// [0x548590] (142 bytes) sub_548590
// void *sub_548590();
// [0x548620] (643 bytes) sub_548620
// int *sub_548620();
// [0x5488b0] (561 bytes) std::deque<online::socialNetwork::SocialNetworkManager::RunningState,std::allocator<online::socialNetwork::SocialNetworkManager::RunningState>>::push_back(online::socialNetwork::SocialNetworkManager::RunningState const&)
// char *std::deque<online::socialNetwork::SocialNetworkManager::RunningState>::push_back(void **a1, uint32_t *a2);
// [0x548af0] (142 bytes) sub_548AF0
// int *sub_548AF0();
// [0x548b80] (585 bytes) std::deque<online::socialNetwork::SocialNetworkManager::SocialNetworkTask,std::allocator<online::socialNetwork::SocialNetworkManager::SocialNetworkTask>>::push_back(online::socialNetwork::SocialNetworkManager::SocialNetworkTask const&)
// char *std::deque<online::socialNetwork::SocialNetworkManager::SocialNetworkTask>::push_back( void **a1, uint32_t *a2);
// [0x548dd0] (142 bytes) sub_548DD0
// int *sub_548DD0();
// [0x548e60] (436 bytes) std::vector<int,std::allocator<int>>::_M_insert_aux(__gnu_cxx::__normal_iterator<int *,std::vector<int,std::allocator<int>>>,int const&)
// void std::vector<int>::_M_insert_aux(int a1, char *src, int *a3);
// [0x549020] (536 bytes) std::vector<std::string,std::allocator<std::string>>::_M_insert_aux(__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string,std::allocator<std::string>>>,std::string const&)
// int std::vector<std::string>::_M_insert_aux(int *a1, char *a2, int a3);
// [0x549240] (98 bytes) std::vector<std::string,std::allocator<std::string>>::push_back(std::string const&)
// char *std::vector<std::string>::push_back(int *a1, int a2);
// [0x5492b0] (142 bytes) sub_5492B0
// void *sub_5492B0();
// [0x549340] (567 bytes) std::_Rb_tree<std::string,std::pair<std::string const,AD_AVAILABILITY>,std::_Select1st<std::pair<std::string const,AD_AVAILABILITY>>,std::less<std::string>,std::allocator<std::pair<std::string const,AD_AVAILABILITY>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,AD_AVAILABILITY>> *)
// void std::_Rb_tree<std::string,std::pair<std::string const,AD_AVAILABILITY>,std::_Select1st<std::pair<std::string const,AD_AVAILABILITY>>,std::less<std::string>,std::allocator<std::pair<std::string const,AD_AVAILABILITY>>>::_M_erase( int a1, uint32_t *a2);
// [0x549580] (273 bytes) sub_549580
// int (**sub_549580(int a1))(int);
// [0x5496a0] (281 bytes) sub_5496A0
// void sub_5496A0(uint32_t *a1);
// [0x5497c0] (567 bytes) std::_Rb_tree<std::string,std::pair<std::string const,online::socialNetwork::SocialFriend *>,std::_Select1st<std::pair<std::string const,online::socialNetwork::SocialFriend *>>,std::less<std::string>,std::allocator<std::pair<std::string const,online::socialNetwork::SocialFriend *>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,online::socialNetwork::SocialFriend *>> *)
// void std::_Rb_tree<std::string,std::pair<std::string const,online::socialNetwork::SocialFriend *>,std::_Select1st<std::pair<std::string const,online::socialNetwork::SocialFriend *>>,std::less<std::string>,std::allocator<std::pair<std::string const,online::socialNetwork::SocialFriend *>>>::_M_erase( int a1, uint32_t *a2);
// [0x549a00] (425 bytes) std::_Rb_tree<unsigned int,unsigned int,std::_Identity<unsigned int>,std::less<unsigned int>,std::allocator<unsigned int>>::_M_erase(std::_Rb_tree_node<unsigned int> *)
// void std::_Rb_tree<unsigned int,unsigned int,std::_Identity<unsigned int>,std::less<unsigned int>,std::allocator<unsigned int>>::_M_erase( int a1, uint32_t *a2);
// [0x549bb0] (567 bytes) std::_Rb_tree<online::socialNetwork::UserCredentials,online::socialNetwork::UserCredentials,std::_Identity<online::socialNetwork::UserCredentials>,std::less<online::socialNetwork::UserCredentials>,std::allocator<online::socialNetwork::UserCredentials>>::_M_erase(std::_Rb_tree_node<online::socialNetwork::UserCredentials> *)
// void std::_Rb_tree<online::socialNetwork::UserCredentials,online::socialNetwork::UserCredentials,std::_Identity<online::socialNetwork::UserCredentials>,std::less<online::socialNetwork::UserCredentials>,std::allocator<online::socialNetwork::UserCredentials>>::_M_erase( int a1, uint32_t *a2);
// [0x549df0] (567 bytes) std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,int>> *)
// void std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_erase( int a1, uint32_t *a2);
// [0x54a030] (567 bytes) std::_Rb_tree<std::string,std::pair<std::string const,bool>,std::_Select1st<std::pair<std::string const,bool>>,std::less<std::string>,std::allocator<std::pair<std::string const,bool>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,bool>> *)
// void std::_Rb_tree<std::string,std::pair<std::string const,bool>,std::_Select1st<std::pair<std::string const,bool>>,std::less<std::string>,std::allocator<std::pair<std::string const,bool>>>::_M_erase( int a1, uint32_t *a2);
// [0x54a270] (1345 bytes) std::vector<online::socialNetwork::SNLoginStatus,std::allocator<online::socialNetwork::SNLoginStatus>>::_M_insert_aux(__gnu_cxx::__normal_iterator<online::socialNetwork::SNLoginStatus*,std::vector<online::socialNetwork::SNLoginStatus,std::allocator<online::socialNetwork::SNLoginStatus>>>,online::socialNetwork::SNLoginStatus const&)
// int std::vector<online::socialNetwork::SNLoginStatus>::_M_insert_aux(void **a1, char *a2, char *a3);
// [0x54a7c0] (142 bytes) sub_54A7C0
// void *sub_54A7C0();
// [0x54a850] (1659 bytes) sub_54A850
// int sub_54A850(int a1);
// [0x54aed0] (1942 bytes) void std::__introsort_loop<__gnu_cxx::__normal_iterator<std::pair<std::string,online::socialNetwork::SocialFriend *> *,std::vector<std::pair<std::string,online::socialNetwork::SocialFriend *>,std::allocator<std::pair<std::string,online::socialNetwork::SocialFriend *>>>>,int,friends_cmp<std::pair<std::string,online::socialNetwork::SocialFriend *>>>(__gnu_cxx::__normal_iterator<std::pair<std::string,online::socialNetwork::SocialFriend *> *,std::vector<std::pair<std::string,online::socialNetwork::SocialFriend *>,std::allocator<std::pair<std::string,online::socialNetwork::SocialFriend *>>>>,__gnu_cxx::__normal_iterator<std::pair<std::string,online::socialNetwork::SocialFriend *> *,std::vector<std::pair<std::string,online::socialNetwork::SocialFriend *>,std::allocator<std::pair<std::string,online::socialNetwork::SocialFriend *>>>>,int,friends_cmp<std::pair<std::string,online::socialNetwork::SocialFriend *>>)
// int std::__introsort_loop<__gnu_cxx::__normal_iterator<std::pair<std::string,online::socialNetwork::SocialFriend *> *,std::vector<std::pair<std::string,online::socialNetwork::SocialFriend *>>>,int,friends_cmp<std::pair<std::string,online::socialNetwork::SocialFriend *>>>( int a1, unsigned int a2, int a3);
// [0x54b670] (934 bytes) std::vector<online::socialNetwork::BasicUserData,std::allocator<online::socialNetwork::BasicUserData>>::_M_insert_aux(__gnu_cxx::__normal_iterator<online::socialNetwork::BasicUserData*,std::vector<online::socialNetwork::BasicUserData,std::allocator<online::socialNetwork::BasicUserData>>>,online::socialNetwork::BasicUserData const&)
// int std::vector<online::socialNetwork::BasicUserData>::_M_insert_aux(int *a1, char *a2, int a3);
// [0x54ba20] (781 bytes) std::vector<online::tracking::BITracker::PeripheralUsage,std::allocator<online::tracking::BITracker::PeripheralUsage>>::_M_insert_aux(__gnu_cxx::__normal_iterator<online::tracking::BITracker::PeripheralUsage*,std::vector<online::tracking::BITracker::PeripheralUsage,std::allocator<online::tracking::BITracker::PeripheralUsage>>>,online::tracking::BITracker::PeripheralUsage const&)
// int std::vector<online::tracking::BITracker::PeripheralUsage>::_M_insert_aux(void **a1, char *a2, int *a3);
// [0x54bd30] (627 bytes) std::vector<std::pair<std::string,int>,std::allocator<std::pair<std::string,int>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<std::pair<std::string,int>*,std::vector<std::pair<std::string,int>,std::allocator<std::pair<std::string,int>>>>,std::pair<std::string,int> const&)
// int std::vector<std::pair<std::string,int>>::_M_insert_aux(void **a1, char *a2, int a3);
// [0x54bfb0] (425 bytes) std::_Rb_tree<int,std::pair<int const,ExecLog::LogStatInfo *>,std::_Select1st<std::pair<int const,ExecLog::LogStatInfo *>>,std::less<int>,std::allocator<std::pair<int const,ExecLog::LogStatInfo *>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,ExecLog::LogStatInfo *>> *)
// void std::_Rb_tree<int,std::pair<int const,ExecLog::LogStatInfo *>,std::_Select1st<std::pair<int const,ExecLog::LogStatInfo *>>,std::less<int>,std::allocator<std::pair<int const,ExecLog::LogStatInfo *>>>::_M_erase( int a1, uint32_t *a2);
// [0x54c160] (851 bytes) std::vector<GameDataFilesMgr::FileInfo,GameAllocator<GameDataFilesMgr::FileInfo>>::_M_insert_aux(__gnu_cxx::__normal_iterator<GameDataFilesMgr::FileInfo*,std::vector<GameDataFilesMgr::FileInfo,GameAllocator<GameDataFilesMgr::FileInfo>>>,GameDataFilesMgr::FileInfo const&)
// int std::vector<GameDataFilesMgr::FileInfo,GameAllocator<GameDataFilesMgr::FileInfo>>::_M_insert_aux( int *a1, uint32_t *a2, int *a3);
// [0x54c4c0] (1141 bytes) std::vector<unsigned int,glitch::core::SAllocator<unsigned int,(glitch::memory::E_MEMORY_HINT)0>>::_M_fill_insert(__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int,glitch::core::SAllocator<unsigned int,(glitch::memory::E_MEMORY_HINT)0>>>,unsigned int,unsigned int const&)
// void std::vector<unsigned int,glitch::core::SAllocator<unsigned int,(glitch::memory::E_MEMORY_HINT)0>>::_M_fill_insert(;
// [0x54c940] (685 bytes) void std::__insertion_sort<__gnu_cxx::__normal_iterator<std::pair<std::string,online::socialNetwork::SocialFriend *> *,std::vector<std::pair<std::string,online::socialNetwork::SocialFriend *>,std::allocator<std::pair<std::string,online::socialNetwork::SocialFriend *>>>>,friends_cmp<std::pair<std::string,online::socialNetwork::SocialFriend *>>>(__gnu_cxx::__normal_iterator<std::pair<std::string,online::socialNetwork::SocialFriend *> *,std::vector<std::pair<std::string,online::socialNetwork::SocialFriend *>,std::allocator<std::pair<std::string,online::socialNetwork::SocialFriend *>>>>,__gnu_cxx::__normal_iterator<std::pair<std::string,online::socialNetwork::SocialFriend *> *,std::vector<std::pair<std::string,online::socialNetwork::SocialFriend *>,std::allocator<std::pair<std::string,online::socialNetwork::SocialFriend *>>>>,friends_cmp<std::pair<std::string,online::socialNetwork::SocialFriend *>>)
// void std::__insertion_sort<__gnu_cxx::__normal_iterator<std::pair<std::string,online::socialNetwork::SocialFriend *> *,std::vector<std::pair<std::string,online::socialNetwork::SocialFriend *>>>,friends_cmp<std::pair<std::string,online::socialNetwork::SocialFriend *>>>( int a1, int a2);
// [0x54cbf0] (2043 bytes) std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_copy(std::_Rb_tree_node<std::pair<std::string const,int>> const*,std::_Rb_tree_node<std::pair<std::string const,int>>*)
// uint32_t *std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_copy( int a1, uint32_t *a2, int a3);
// [0x54d3f0] (2261 bytes) std::vector<glitch::pvs::builder::STriangleData,glitch::core::SAllocator<glitch::pvs::builder::STriangleData,(glitch::memory::E_MEMORY_HINT)0>>::_M_fill_insert(__gnu_cxx::__normal_iterator<glitch::pvs::builder::STriangleData*,std::vector<glitch::pvs::builder::STriangleData,glitch::core::SAllocator<glitch::pvs::builder::STriangleData,(glitch::memory::E_MEMORY_HINT)0>>>,unsigned int,glitch::pvs::builder::STriangleData const&)
// void std::vector<glitch::pvs::builder::STriangleData,glitch::core::SAllocator<glitch::pvs::builder::STriangleData,(glitch::memory::E_MEMORY_HINT)0>>::_M_fill_insert(;
// [0x54dcd0] (211 bytes) std::_Rb_tree<std::string,std::pair<std::string const,online::socialNetwork::SocialFriend *>,std::_Select1st<std::pair<std::string const,online::socialNetwork::SocialFriend *>>,std::less<std::string>,std::allocator<std::pair<std::string const,online::socialNetwork::SocialFriend *>>>::_M_insert_(std::_Rb_tree_node_base const*,std::_Rb_tree_node_base const*,std::pair<std::string const,online::socialNetwork::SocialFriend *> const&)
// int *std::_Rb_tree<std::string,std::pair<std::string const,online::socialNetwork::SocialFriend *>,std::_Select1st<std::pair<std::string const,online::socialNetwork::SocialFriend *>>,std::less<std::string>,std::allocator<std::pair<std::string const,online::socialNetwork::SocialFriend *>>>::_M_insert_( int *a1, int a2, int a3, int a4, int a5);
// [0x54ddb0] (369 bytes) std::_Rb_tree<std::string,std::pair<std::string const,online::socialNetwork::SocialFriend *>,std::_Select1st<std::pair<std::string const,online::socialNetwork::SocialFriend *>>,std::less<std::string>,std::allocator<std::pair<std::string const,online::socialNetwork::SocialFriend *>>>::_M_insert_unique(std::pair<std::string const,online::socialNetwork::SocialFriend *> const&)
// int std::_Rb_tree<std::string,std::pair<std::string const,online::socialNetwork::SocialFriend *>,std::_Select1st<std::pair<std::string const,online::socialNetwork::SocialFriend *>>,std::less<std::string>,std::allocator<std::pair<std::string const,online::socialNetwork::SocialFriend *>>>::_M_insert_unique( int a1, uint32_t *a2, int a3);
// [0x54df30] (885 bytes) std::_Rb_tree<std::string,std::pair<std::string const,online::socialNetwork::SocialFriend *>,std::_Select1st<std::pair<std::string const,online::socialNetwork::SocialFriend *>>,std::less<std::string>,std::allocator<std::pair<std::string const,online::socialNetwork::SocialFriend *>>>::_M_insert_unique_(std::_Rb_tree_const_iterator<std::pair<std::string const,online::socialNetwork::SocialFriend *>>,std::pair<std::string const,online::socialNetwork::SocialFriend *> const&)
// int *std::_Rb_tree<std::string,std::pair<std::string const,online::socialNetwork::SocialFriend *>,std::_Select1st<std::pair<std::string const,online::socialNetwork::SocialFriend *>>,std::less<std::string>,std::allocator<std::pair<std::string const,online::socialNetwork::SocialFriend *>>>::_M_insert_unique_( int *a1, uint32_t *a2, int a3, int a4);
// [0x54e2b0] (211 bytes) std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_insert_(std::_Rb_tree_node_base const*,std::_Rb_tree_node_base const*,std::pair<std::string const,int> const&)
// int *std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_insert_( int *a1, int a2, int a3, int a4, int a5);
// [0x54e390] (369 bytes) std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_insert_unique(std::pair<std::string const,int> const&)
// int std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_insert_unique( int a1, uint32_t *a2, int a3);
// [0x54e510] (885 bytes) std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_insert_unique_(std::_Rb_tree_const_iterator<std::pair<std::string const,int>>,std::pair<std::string const,int> const&)
// int *std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_insert_unique_( int *a1, uint32_t *a2, int a3, int a4);
