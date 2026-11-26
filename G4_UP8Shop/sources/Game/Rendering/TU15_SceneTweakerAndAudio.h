#pragma once
// ============================================================================
// TU15_SceneTweakerAndAudio.h
// Complete Translation Unit [15/41]
// Binary Range in lib/x86/libGangstar4.so: 0x85b0d0 .. 0x8da7a0 (509 KB)
// Total Decompiled Functions in TU: 1323 (100% coverage)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// Function Table in Translation Unit:
// [0x85b0d0] (339 bytes) sub_85B0D0
// int sub_85B0D0();
// [0x85b230] (61 bytes) sub_85B230
// long double sub_85B230(int a1);
// [0x85b278] (1 bytes) nullsub_300
// void nullsub_300();
// [0x85b280] (60 bytes) sub_85B280
// int sub_85B280(int a1, uint32_t *a2);
// [0x85b2c0] (60 bytes) sub_85B2C0
// int sub_85B2C0(int a1, uint32_t *a2);
// [0x85b300] (22 bytes) sub_85B300
// const char *sub_85B300();
// [0x85b320] (22 bytes) sub_85B320
// const char *sub_85B320();
// [0x85b340] (22 bytes) sub_85B340
// int sub_85B340(int a1);
// [0x85b360] (22 bytes) sub_85B360
// int sub_85B360(int a1);
// [0x85b388] (1 bytes) nullsub_301
// void nullsub_301();
// [0x85b390] (12 bytes) sub_85B390
// int sub_85B390();
// [0x85b3a0] (28 bytes) sub_85B3A0
// int sub_85B3A0(int a1);
// [0x85b3c0] (9 bytes) sub_85B3C0
// void sub_85B3C0();
// [0x85b3d0] (33 bytes) sub_85B3D0
// unsigned int sub_85B3D0(int a1, int a2);
// [0x85b400] (528 bytes) sub_85B400
// void sub_85B400(int a1, int a2);
// [0x85b618] (1 bytes) nullsub_302
// void nullsub_302();
// [0x85b620] (24 bytes) sub_85B620
// int sub_85B620(int a1);
// [0x85b640] (12 bytes) sub_85B640
// int sub_85B640();
// [0x85b650] (72 bytes) sub_85B650
// long double sub_85B650(int a1);
// [0x85b6a0] (92 bytes) sub_85B6A0
// uint32_t *sub_85B6A0(uint32_t *a1, int a2);
// [0x85b700] (59 bytes) sub_85B700
// bool sub_85B700(int a1);
// [0x85b740] (389 bytes) sub_85B740
// int sub_85B740(float *a1, float *a2, int a3);
// [0x85b8d0] (38 bytes) sub_85B8D0
// int sub_85B8D0(int a1, int a2);
// [0x85b908] (1 bytes) nullsub_303
// void nullsub_303();
// [0x85b918] (1 bytes) nullsub_304
// void nullsub_304();
// [0x85b920] (9 bytes) sub_85B920
// long double sub_85B920();
// [0x85b930] (9 bytes) sub_85B930
// long double sub_85B930();
// [0x85b940] (79 bytes) sub_85B940
// int sub_85B940(int a1, uint8_t a2);
// [0x85b998] (1 bytes) nullsub_305
// void nullsub_305();
// [0x85b9a0] (12 bytes) sub_85B9A0
// int sub_85B9A0();
// [0x85b9b0] (104 bytes) sub_85B9B0
// int sub_85B9B0(int a1);
// [0x85ba20] (12 bytes) sub_85BA20
// bool sub_85BA20(int a1, int a2);
// [0x85ba30] (36 bytes) sub_85BA30
// int sub_85BA30(int a1);
// [0x85ba60] (61 bytes) sub_85BA60
// long double sub_85BA60(int a1);
// [0x85baa0] (101 bytes) sub_85BAA0
// int sub_85BAA0(int a1, int a2, int a3);
// [0x85bb10] (40 bytes) sub_85BB10
// int sub_85BB10(int a1, int a2, int a3);
// [0x85bb40] (32 bytes) sub_85BB40
// int sub_85BB40(int a1, int a2);
// [0x85bb60] (9 bytes) sub_85BB60
// int sub_85BB60();
// [0x85bb70] (12 bytes) sub_85BB70
// int sub_85BB70();
// [0x85bb80] (12 bytes) sub_85BB80
// int sub_85BB80(int a1);
// [0x85bb90] (15 bytes) sub_85BB90
// int sub_85BB90(int a1);
// [0x85bba0] (57 bytes) sub_85BBA0
// int sub_85BBA0(int a1, int a2);
// [0x85bbe0] (57 bytes) sub_85BBE0
// int sub_85BBE0(int a1, int a2);
// [0x85bc20] (86 bytes) sub_85BC20
// int (**sub_85BC20(uint32_t *a1))(int);
// [0x85bc80] (9 bytes) sub_85BC80
// int sub_85BC80();
// [0x85bc90] (14 bytes) sub_85BC90
// int sub_85BC90(int a1);
// [0x85bca0] (37 bytes) sub_85BCA0
// int sub_85BCA0(int a1, int a2);
// [0x85bcd0] (26 bytes) sub_85BCD0
// int sub_85BCD0(int a1, int a2);
// [0x85bcf0] (12 bytes) sub_85BCF0
// int sub_85BCF0();
// [0x85bd00] (42 bytes) sub_85BD00
// int sub_85BD00(glitch::scene::CEmptySceneNode *a1, void *a2);
// [0x85bd30] (42 bytes) sub_85BD30
// int sub_85BD30(glitch::collada::CRootSceneNode *a1, float a2);
// [0x85bd60] (42 bytes) sub_85BD60
// int sub_85BD60(int a1, int a2);
// [0x85bd90] (46 bytes) sub_85BD90
// void sub_85BD90(uint8_t *a1);
// [0x85bdc0] (250 bytes) sub_85BDC0
// int sub_85BDC0(int a1);
// [0x85bec0] (147 bytes) sub_85BEC0
// int sub_85BEC0(int a1);
// [0x85bf60] (126 bytes) sub_85BF60
// int (**sub_85BF60(int a1))(int);
// [0x85bfe0] (88 bytes) sub_85BFE0
// int sub_85BFE0(int a1);
// [0x85c040] (15 bytes) sub_85C040
// int sub_85C040(uint32_t *a1);
// [0x85c050] (15 bytes) sub_85C050
// int sub_85C050(uint32_t *a1);
// [0x85c060] (113 bytes) sub_85C060
// int (**sub_85C060(glitch::collada::CRootSceneNode *a1))(int);
// [0x85c0e0] (7 bytes) sub_85C0E0
// int sub_85C0E0(int a1);
// [0x85c0f0] (150 bytes) sub_85C0F0
// void sub_85C0F0(glf::debugger::Tweakable *a1);
// [0x85c190] (182 bytes) sub_85C190
// int sub_85C190(int a1, int a2);
// [0x85c250] (1278 bytes) sub_85C250
// int sub_85C250(int a1, int a2);
// [0x85c750] (97 bytes) sub_85C750
// int sub_85C750(int a1);
// [0x85c7c0] (62 bytes) sub_85C7C0
// int sub_85C7C0(int a1);
// [0x85c800] (187 bytes) sub_85C800
// long double sub_85C800(float *a1, float a2, float a3, float a4);
// [0x85c8c0] (79 bytes) sub_85C8C0
// int sub_85C8C0(int a1, int a2);
// [0x85c910] (112 bytes) sub_85C910
// int sub_85C910(int a1);
// [0x85c980] (293 bytes) sub_85C980
// int sub_85C980(uint8_t *a1);
// [0x85cab0] (318 bytes) sub_85CAB0
// int sub_85CAB0(int a1, char a2);
// [0x85cbf0] (147 bytes) sub_85CBF0
// float *sub_85CBF0(int a1);
// [0x85cc90] (94 bytes) sub_85CC90
// uint32_t *sub_85CC90(int a1, int a2);
// [0x85ccf0] (230 bytes) sub_85CCF0
// uint32_t *sub_85CCF0(int a1, uint32_t *a2);
// [0x85cde0] (34 bytes) sub_85CDE0
// int sub_85CDE0(int a1);
// [0x85ce10] (182 bytes) sub_85CE10
// int sub_85CE10(int a1);
// [0x85ced0] (193 bytes) sub_85CED0
// long double sub_85CED0(int a1);
// [0x85cfa0] (38 bytes) sub_85CFA0
// int sub_85CFA0(int a1, int a2);
// [0x85cfd0] (237 bytes) sub_85CFD0
// void *sub_85CFD0(float *a1, int a2);
// [0x85d0c0] (71 bytes) sub_85D0C0
// int sub_85D0C0(int *a1, char a2);
// [0x85d110] (103 bytes) sub_85D110
// bool sub_85D110(uint32_t *a1);
// [0x85d180] (100 bytes) sub_85D180
// int sub_85D180(int a1, uint8_t a2);
// [0x85d1f0] (30 bytes) sub_85D1F0
// int sub_85D1F0(int a1, int a2, char a3);
// [0x85d210] (10 bytes) sub_85D210
// int sub_85D210(int a1, int a2, int a3, int a4);
// [0x85d220] (114 bytes) sub_85D220
// long double sub_85D220(int a1, int a2, int a3, float a4);
// [0x85d2a0] (48 bytes) sub_85D2A0
// int sub_85D2A0(int a1, int *a2);
// [0x85d2d0] (47 bytes) sub_85D2D0
// int sub_85D2D0(int a1, int a2, int a3);
// [0x85d300] (92 bytes) sub_85D300
// int sub_85D300();
// [0x85d360] (935 bytes) sub_85D360
// int sub_85D360(int a1, uint8_t a2);
// [0x85d710] (423 bytes) sub_85D710
// void sub_85D710(int *a1, int a2);
// [0x85d8c0] (276 bytes) sub_85D8C0
// void sub_85D8C0(int a1, int a2, int a3);
// [0x85d9e0] (134 bytes) sub_85D9E0
// uint32_t *sub_85D9E0(int a1, int a2, int a3, int a4);
// [0x85da70] (550 bytes) sub_85DA70
// int sub_85DA70(int a1, int a2);
// [0x85dca0] (91 bytes) sub_85DCA0
// unsigned int sub_85DCA0(char *a1, char *a2, uint32_t *a3);
// [0x85dd00] (370 bytes) sub_85DD00
// uint32_t *sub_85DD00(uint32_t *a1);
// [0x85de80] (390 bytes) sub_85DE80
// size_t sub_85DE80(int *a1, uint32_t *a2);
// [0x85e010] (445 bytes) sub_85E010
// int sub_85E010(int *a1, int a2);
// [0x85e1d0] (371 bytes) sub_85E1D0
// void sub_85E1D0(int a1, uint32_t *a2);
// [0x85e350] (100 bytes) sub_85E350
// uint32_t *sub_85E350(uint32_t *result, int a2, uint32_t *a3);
// [0x85e3c0] (141 bytes) sub_85E3C0
// uint32_t *sub_85E3C0(char *a1, char *a2, uint32_t *a3);
// [0x85e450] (387 bytes) sub_85E450
// int sub_85E450(int *a1, int16_t *a2);
// [0x85e5e0] (241 bytes) sub_85E5E0
// char sub_85E5E0(int a1, int a2, int a3, int a4, uint8_t a5);
// [0x85e6e0] (529 bytes) sub_85E6E0
// int *sub_85E6E0(int *result, int *a2);
// [0x85e900] (187 bytes) sub_85E900
// int *sub_85E900(int *a1, int a2, int a3, int a4, int *a5);
// [0x85e9c0] (506 bytes) sub_85E9C0
// int sub_85E9C0(int a1, char *a2, int *a3);
// [0x85ebc0] (514 bytes) sub_85EBC0
// int sub_85EBC0(int *a1, char *a2, int *a3);
// [0x85edd0] (541 bytes) sub_85EDD0
// size_t sub_85EDD0(int *a1, char *a2, int *a3);
// [0x85eff0] (433 bytes) sub_85EFF0
// uint32_t *sub_85EFF0(int a1, uint32_t *a2);
// [0x85f1b0] (517 bytes) sub_85F1B0
// int sub_85F1B0(int *a1, int a2, int *a3);
// [0x85f3c0] (739 bytes) sub_85F3C0
// unsigned int sub_85F3C0(uint32_t *a1, int a2, int *a3);
// [0x85f6b0] (742 bytes) sub_85F6B0
// char *sub_85F6B0(int *a1, char *src, int *a3);
// [0x85f9a0] (196 bytes) sub_85F9A0
// int sub_85F9A0(int *a1, int a2);
// [0x85fa70] (96 bytes) sub_85FA70
// int (**sub_85FA70(uint32_t *a1))(int);
// [0x85fad0] (226 bytes) sub_85FAD0
// uint32_t *sub_85FAD0(int a1);
// [0x85fbc0] (61 bytes) sub_85FBC0
// int sub_85FBC0(int a1);
// [0x85fc00] (54 bytes) sub_85FC00
// bool sub_85FC00(int a1);
// [0x85fc40] (94 bytes) sub_85FC40
// int sub_85FC40(int a1);
// [0x85fca0] (15 bytes) sub_85FCA0
// int sub_85FCA0(char *a1);
// [0x85fcb0] (15 bytes) sub_85FCB0
// int sub_85FCB0(char *a1);
// [0x85fcc0] (121 bytes) sub_85FCC0
// void sub_85FCC0(glitch::collada::CRootSceneNode *a1);
// [0x85fd40] (104 bytes) sub_85FD40
// void sub_85FD40(uint32_t *a1);
// [0x85fdb0] (420 bytes) sub_85FDB0
// void sub_85FDB0(int a1, uint32_t *a2);
// [0x85ff60] (1082 bytes) sub_85FF60
// int sub_85FF60(int a1, int a2);
// [0x8603a0] (186 bytes) sub_8603A0
// int sub_8603A0(int a1, int a2);
// [0x860460] (94 bytes) sub_860460
// void sub_860460(uint32_t *a1);
// [0x8604c0] (51 bytes) sub_8604C0
// int sub_8604C0(int a1, int a2);
// [0x860500] (414 bytes) sub_860500
// int sub_860500(float *a1, int a2, float a3, int a4, float *a5);
// [0x8606a0] (414 bytes) sub_8606A0
// int sub_8606A0(float *a1, int a2, float a3, int a4, float *a5);
// [0x860840] (302 bytes) sub_860840
// int sub_860840(uint32_t *a1);
// [0x860970] (260 bytes) sub_860970
// int sub_860970(uint32_t *a1);
// [0x860a80] (511 bytes) sub_860A80
// float *sub_860A80(float *a1, float a2, float a3, float a4);
// [0x860c80] (148 bytes) sub_860C80
// bool sub_860C80(int a1, char *s);
// [0x860d20] (154 bytes) sub_860D20
// glitch::collada::CSkinnedMeshSceneNode *sub_860D20(int a1, glitch::collada::CSkinnedMeshSceneNode *a2);
// [0x860dc0] (277 bytes) sub_860DC0
// int sub_860DC0(int a1, uint32_t *a2);
// [0x860ee0] (277 bytes) sub_860EE0
// int sub_860EE0(int a1, uint32_t *a2);
// [0x861000] (211 bytes) sub_861000
// long double sub_861000(int a1, float a2);
// [0x8610e0] (216 bytes) sub_8610E0
// long double sub_8610E0(int a1);
// [0x8611c0] (7 bytes) sub_8611C0
// int sub_8611C0(int a1);
// [0x8611d0] (158 bytes) sub_8611D0
// void sub_8611D0(glf::debugger::Tweakable *a1);
// [0x861270] (158 bytes) sub_861270
// int sub_861270(uint32_t *a1);
// [0x861310] (254 bytes) sub_861310
// int sub_861310(int a1, char a2);
// [0x861410] (254 bytes) sub_861410
// void sub_861410(int a1, char a2);
// [0x861510] (254 bytes) sub_861510
// void sub_861510(int a1, char a2);
// [0x861610] (254 bytes) sub_861610
// int sub_861610(int a1, char a2);
// [0x861710] (134 bytes) sub_861710
// void sub_861710(uint32_t *a1);
// [0x8617a0] (201 bytes) sub_8617A0
// int sub_8617A0(int a1, int a2);
// [0x861870] (453 bytes) sub_861870
// int sub_861870(int a1);
// [0x861a40] (952 bytes) sub_861A40
// int sub_861A40(uint32_t *a1, uint32_t *a2, float a3, uint32_t *a4);
// [0x861e00] (483 bytes) sub_861E00
// long double sub_861E00(int a1, float *a2);
// [0x861ff0] (210 bytes) sub_861FF0
// uint32_t *sub_861FF0(uint32_t *a1, int a2, void **a3);
// [0x8620d0] (341 bytes) sub_8620D0
// void *sub_8620D0(uint32_t *a1, unsigned int a2);
// [0x862230] (266 bytes) sub_862230
// int sub_862230(int a1);
// [0x862340] (340 bytes) sub_862340
// uint32_t *sub_862340(uint32_t *a1, const char *s);
// [0x8624a0] (462 bytes) sub_8624A0
// int sub_8624A0(int *a1, int a2, int a3);
// [0x862670] (2371 bytes) sub_862670
// int sub_862670(float a1, int a2, int a3);
// [0x862fc0] (226 bytes) sub_862FC0
// uint32_t *sub_862FC0(uint32_t *a1);
// [0x8630b0] (445 bytes) sub_8630B0
// int sub_8630B0(int a1, char a2, float a3);
// [0x863270] (327 bytes) sub_863270
// int *sub_863270(int *a1, int a2, int a3, int a4, int a5);
// [0x8633c0] (349 bytes) sub_8633C0
// int sub_8633C0(int a1, int a2, void **a3);
// [0x863520] (1111 bytes) sub_863520
// int sub_863520(uint32_t *a1, const void **a2);
// [0x863980] (308 bytes) sub_863980
// int sub_863980(int a1, uint32_t *a2, int *a3);
// [0x863ac0] (143 bytes) sub_863AC0
// uint32_t *sub_863AC0(uint32_t *result);
// [0x863b50] (660 bytes) sub_863B50
// int sub_863B50(int *a1);
// [0x863df0] (1077 bytes) sub_863DF0
// int sub_863DF0(int a1, int a2);
// [0x864230] (1012 bytes) sub_864230
// int sub_864230(int a1, int a2, int a3);
// [0x864630] (550 bytes) sub_864630
// int sub_864630(int a1, int a2);
// [0x864860] (977 bytes) sub_864860
// int sub_864860(int a1, char a2);
// [0x864c40] (4354 bytes) sub_864C40
// long double sub_864C40(int a1, char a2);
// [0x865d50] (421 bytes) sub_865D50
// int sub_865D50(uint32_t *a1, int a2);
// [0x865f00] (421 bytes) sub_865F00
// int sub_865F00(uint32_t *a1, int a2);
// [0x8660b0] (421 bytes) sub_8660B0
// int sub_8660B0(uint32_t *a1, int a2);
// [0x866260] (519 bytes) sub_866260
// uint32_t *sub_866260( uint32_t *a1, uint32_t *a2, int a3, int a4, int a5, int a6, int a7, int **a8, uint32_t *a9, int a10, int a11, int a12, int a13, char a14);
// [0x866470] (1569 bytes) sub_866470
// int sub_866470(int *a1, int a2, int a3, int a4, uint32_t *a5);
// [0x866aa0] (875 bytes) sub_866AA0
// glitch::core *sub_866AA0(uint32_t *a1, uint32_t *a2, int a3);
// [0x866e10] (10 bytes) sub_866E10
// int sub_866E10(int a1);
// [0x866e20] (219 bytes) sub_866E20
// int sub_866E20(int a1);
// [0x866f00] (32 bytes) sub_866F00
// uint32_t *sub_866F00(uint32_t *result, uint32_t *a2);
// [0x866f20] (161 bytes) sub_866F20
// uint32_t *sub_866F20(uint32_t *a1, int a2, int a3, int a4);
// [0x866fd0] (13 bytes) sub_866FD0
// uint32_t *sub_866FD0(uint32_t *a1);
// [0x866fe0] (104 bytes) sub_866FE0
// int sub_866FE0(int a1, int a2, int a3);
// [0x867050] (494 bytes) sub_867050
// int sub_867050(int a1, int *a2);
// [0x867240] (56 bytes) sub_867240
// void __noreturn sub_867240(uint32_t *a1);
// [0x867280] (329 bytes) sub_867280
// int sub_867280(int a1);
// [0x8673d0] (189 bytes) sub_8673D0
// int sub_8673D0(int a1, const char *a2);
// [0x867490] (138 bytes) sub_867490
// int sub_867490();
// [0x867520] (973 bytes) sub_867520
// int sub_867520(int a1, int **a2, int *a3, char a4, char a5);
// [0x8678f0] (411 bytes) sub_8678F0
// glitch::collada::CSceneNodeAnimatorBlender **sub_8678F0( glitch::collada::CSceneNodeAnimatorBlender **a1, int a2, int a3, int a4, int a5);
// [0x867a90] (1476 bytes) sub_867A90
// int sub_867A90(uint32_t *a1, int a2, int **a3);
// [0x868060] (326 bytes) sub_868060
// void sub_868060(float *a1);
// [0x8681b0] (1258 bytes) sub_8681B0
// int sub_8681B0(int *a1, int *a2);
// [0x8686a0] (370 bytes) sub_8686A0
// int sub_8686A0(glitch::collada::CRootSceneNode *a1, void *a2);
// [0x868820] (370 bytes) sub_868820
// int sub_868820(glitch::collada::CMeshSceneNode *a1, void *a2);
// [0x8689a0] (1382 bytes) sub_8689A0
// int *sub_8689A0(glitch::collada::CMeshSceneNode *a1, void *a2);
// [0x868f10] (7 bytes) sub_868F10
// int sub_868F10(int a1);
// [0x868f20] (2641 bytes) sub_868F20
// volatile int32_t *sub_868F20(int a1, volatile int32_t *a2);
// [0x869980] (280 bytes) sub_869980
// void sub_869980(int a1, int *a2, float *a3, int a4, int a5, float *a6, int a7);
// [0x869aa0] (1765 bytes) sub_869AA0
// 0x869aa0 sub_869AA0
// [0x86a190] (1089 bytes) sub_86A190
// uint32_t *sub_86A190(uint32_t *a1, int a2);
// [0x86a5e0] (106 bytes) sub_86A5E0
// int sub_86A5E0(int a1);
// [0x86a650] (103 bytes) sub_86A650
// int sub_86A650(int a1);
// [0x86a6c0] (52 bytes) sub_86A6C0
// void sub_86A6C0(int a1, int a2);
// [0x86a700] (115 bytes) sub_86A700
// int sub_86A700(int a1);
// [0x86a780] (126 bytes) sub_86A780
// unsigned int sub_86A780(int a1);
// [0x86a800] (41 bytes) sub_86A800
// int sub_86A800(int a1);
// [0x86a840] (39 bytes) sub_86A840
// int sub_86A840(int a1);
// [0x86a870] (9 bytes) sub_86A870
// void sub_86A870();
// [0x86a880] (120 bytes) sub_86A880
// int sub_86A880(int a1, char *a2);
// [0x86a900] (64 bytes) sub_86A900
// int sub_86A900(int a1, int a2, int a3);
// [0x86a940] (64 bytes) sub_86A940
// int sub_86A940(int a1, int a2, int a3);
// [0x86a980] (64 bytes) sub_86A980
// int sub_86A980(int a1, int a2, int a3);
// [0x86a9c0] (68 bytes) sub_86A9C0
// int sub_86A9C0(int a1, int a2);
// [0x86aa10] (68 bytes) sub_86AA10
// int sub_86AA10(int a1, int a2);
// [0x86aa60] (110 bytes) sub_86AA60
// int sub_86AA60(int a1, int a2);
// [0x86aad0] (64 bytes) sub_86AAD0
// uint32_t *sub_86AAD0(uint32_t *a1);
// [0x86ab10] (42 bytes) sub_86AB10
// int sub_86AB10(int a1);
// [0x86ab40] (21 bytes) sub_86AB40
// int sub_86AB40(int a1);
// [0x86ab60] (16 bytes) sub_86AB60
// int sub_86AB60(int a1);
// [0x86ab70] (48 bytes) sub_86AB70
// int sub_86AB70(int a1);
// [0x86aba0] (45 bytes) sub_86ABA0
// uint32_t *sub_86ABA0(uint32_t *a1, uint32_t *a2);
// [0x86abd0] (45 bytes) sub_86ABD0
// bool sub_86ABD0(int a1);
// [0x86ac00] (209 bytes) sub_86AC00
// uint32_t *sub_86AC00(int a1, int a2);
// [0x86ace0] (69 bytes) sub_86ACE0
// void sub_86ACE0(int a1);
// [0x86ad30] (34 bytes) sub_86AD30
// int sub_86AD30(int a1);
// [0x86ad60] (1080 bytes) sub_86AD60
// void sub_86AD60(int a1, int a2);
// [0x86b1a0] (340 bytes) sub_86B1A0
// __m128 sub_86B1A0(int a1, int a2);
// [0x86b300] (381 bytes) sub_86B300
// __m128 sub_86B300(int a1);
// [0x86b480] (48 bytes) sub_86B480
// bool sub_86B480(int a1);
// [0x86b4b0] (24 bytes) sub_86B4B0
// int sub_86B4B0(int a1);
// [0x86b4d0] (90 bytes) sub_86B4D0
// int sub_86B4D0(int a1, uint32_t *a2);
// [0x86b530] (64 bytes) sub_86B530
// long double sub_86B530(int a1);
// [0x86b570] (201 bytes) sub_86B570
// int sub_86B570(int a1, uint8_t a2);
// [0x86b640] (829 bytes) sub_86B640
// int sub_86B640(int a1, uint8_t a2);
// [0x86b980] (185 bytes) sub_86B980
// void sub_86B980(char **a1, uint32_t *a2);
// [0x86ba40] (925 bytes) sub_86BA40
// uint32_t *sub_86BA40(char **a1);
// [0x86bde0] (24 bytes) sub_86BDE0
// bool sub_86BDE0(int a1, int a2);
// [0x86be00] (121 bytes) sub_86BE00
// int sub_86BE00(uint32_t *a1, int a2);
// [0x86be80] (115 bytes) sub_86BE80
// int sub_86BE80(int a1);
// [0x86bf00] (121 bytes) sub_86BF00
// int sub_86BF00(uint32_t *a1);
// [0x86bf80] (126 bytes) sub_86BF80
// int sub_86BF80(int *a1);
// [0x86c040] (109 bytes) sub_86C040
// int sub_86C040(int a1, int a2);
// [0x86c0b0] (86 bytes) sub_86C0B0
// int sub_86C0B0(int a1);
// [0x86c160] (37 bytes) sub_86C160
// int sub_86C160(int a1, int a2);
// [0x86c190] (112 bytes) sub_86C190
// void sub_86C190(int a1, int a2, int a3, int a4, int a5);
// [0x86c200] (225 bytes) sub_86C200
// void sub_86C200(int a1);
// [0x86c300] (381 bytes) sub_86C300
// uint32_t *sub_86C300(uint32_t *a1, uint32_t *a2);
// [0x86c480] (9 bytes) sub_86C480
// void sub_86C480();
// [0x86c490] (176 bytes) sub_86C490
// void sub_86C490(int a1);
// [0x86c540] (152 bytes) sub_86C540
// void sub_86C540(int a1);
// [0x86c5e0] (408 bytes) sub_86C5E0
// int sub_86C5E0(int a1);
// [0x86c780] (65 bytes) sub_86C780
// int sub_86C780(int a1, int a2);
// [0x86c7d0] (49 bytes) sub_86C7D0
// bool sub_86C7D0(int a1, int a2);
// [0x86c860] (49 bytes) sub_86C860
// bool sub_86C860(int a1, int a2);
// [0x86c8a0] (49 bytes) sub_86C8A0
// bool sub_86C8A0(int a1, int a2);
// [0x86c8e0] (67 bytes) sub_86C8E0
// int sub_86C8E0(int a1);
// [0x86c930] (364 bytes) sub_86C930
// float *sub_86C930(float *a1, int a2);
// [0x86caa0] (1024 bytes) sub_86CAA0
// uint32_t *sub_86CAA0(int a1, int a2);
// [0x86cea0] (155 bytes) sub_86CEA0
// void sub_86CEA0(int a1, int a2, int a3, int a4);
// [0x86cf40] (255 bytes) sub_86CF40
// void sub_86CF40(uint32_t *a1);
// [0x86d040] (97 bytes) sub_86D040
// glitch::collada::CSkinnedMeshSceneNode *sub_86D040(uint32_t *a1);
// [0x86d0c0] (56 bytes) sub_86D0C0
// int sub_86D0C0(int a1, bool a2);
// [0x86d100] (9 bytes) sub_86D100
// void sub_86D100();
// [0x86d120] (351 bytes) sub_86D120
// unsigned int sub_86D120(int a1);
// [0x86d280] (155 bytes) sub_86D280
// int sub_86D280(int a1);
// [0x86d320] (509 bytes) sub_86D320
// int sub_86D320(int a1, int a2);
// [0x86d520] (150 bytes) sub_86D520
// int sub_86D520(int a1, float a2, char a3);
// [0x86d5c8] (1 bytes) nullsub_306
// void nullsub_306();
// [0x86d5d8] (1 bytes) nullsub_307
// void nullsub_307();
// [0x86d5e0] (37 bytes) sub_86D5E0
// int sub_86D5E0(int a1);
// [0x86d610] (37 bytes) sub_86D610
// int sub_86D610(int a1);
// [0x86d640] (51 bytes) sub_86D640
// int sub_86D640(int a1);
// [0x86d688] (1 bytes) nullsub_308
// void nullsub_308();
// [0x86d690] (44 bytes) sub_86D690
// char sub_86D690(int a1, int a2);
// [0x86d6c0] (44 bytes) sub_86D6C0
// char sub_86D6C0(int a1, int a2);
// [0x86d6f0] (224 bytes) sub_86D6F0
// char sub_86D6F0(int a1, int a2);
// [0x86d7d0] (224 bytes) sub_86D7D0
// char sub_86D7D0(int a1, int a2);
// [0x86d8b0] (224 bytes) sub_86D8B0
// char sub_86D8B0(int a1, int a2);
// [0x86d990] (224 bytes) sub_86D990
// char sub_86D990(int a1, int a2);
// [0x86da70] (44 bytes) sub_86DA70
// char sub_86DA70(int a1, int a2);
// [0x86daa0] (44 bytes) sub_86DAA0
// char sub_86DAA0(int a1, int a2);
// [0x86dad0] (33 bytes) sub_86DAD0
// int sub_86DAD0(int a1, unsigned int a2);
// [0x86db00] (33 bytes) sub_86DB00
// int sub_86DB00(int a1, unsigned int a2);
// [0x86db80] (70 bytes) sub_86DB80
// int sub_86DB80(int a1);
// [0x86dbd0] (260 bytes) sub_86DBD0
// bool sub_86DBD0(int a1);
// [0x86dce0] (87 bytes) sub_86DCE0
// int sub_86DCE0(int a1, int a2);
// [0x86dd40] (3721 bytes) sub_86DD40
// int sub_86DD40(int a1);
// [0x86ebf0] (42 bytes) sub_86EBF0
// int sub_86EBF0(int a1);
// [0x86ec20] (126 bytes) sub_86EC20
// void sub_86EC20(int a1, float *a2);
// [0x86eca0] (149 bytes) sub_86ECA0
// long double sub_86ECA0(int a1, float a2, float a3, int a4);
// [0x86ed40] (208 bytes) sub_86ED40
// int sub_86ED40(int a1, float a2, int a3);
// [0x86ee10] (99 bytes) sub_86EE10
// int sub_86EE10(int a1, float a2);
// [0x86ee80] (99 bytes) sub_86EE80
// int sub_86EE80(int a1, float a2);
// [0x86eef0] (76 bytes) sub_86EEF0
// int sub_86EEF0(int a1);
// [0x86ef40] (76 bytes) sub_86EF40
// int sub_86EF40(int a1);
// [0x86ef90] (174 bytes) sub_86EF90
// float *sub_86EF90(float *a1);
// [0x86f040] (16 bytes) sub_86F040
// int sub_86F040(int a1);
// [0x86f080] (110 bytes) sub_86F080
// int sub_86F080(int a1, int a2, int a3);
// [0x86f0f0] (359 bytes) sub_86F0F0
// int sub_86F0F0(int a1, int a2);
// [0x86f260] (35 bytes) sub_86F260
// int sub_86F260(int a1, int a2);
// [0x86f290] (26 bytes) sub_86F290
// int sub_86F290(int a1);
// [0x86f2b0] (25 bytes) sub_86F2B0
// int sub_86F2B0(int a1);
// [0x86f2d0] (38 bytes) sub_86F2D0
// int sub_86F2D0(int a1, int a2);
// [0x86f300] (557 bytes) sub_86F300
// int sub_86F300(int a1, int a2);
// [0x86f550] (39 bytes) sub_86F550
// int64_t sub_86F550(int64_t a1, char a2);
// [0x86f580] (15 bytes) sub_86F580
// long double sub_86F580(int a1);
// [0x86f590] (35 bytes) sub_86F590
// int sub_86F590(int a1, int a2);
// [0x86f5c0] (24 bytes) sub_86F5C0
// bool sub_86F5C0(int a1, int a2);
// [0x86f610] (271 bytes) sub_86F610
// int sub_86F610(uint32_t *a1, int a2, int a3);
// [0x86f720] (253 bytes) sub_86F720
// int sub_86F720(int a1, int a2);
// [0x86f820] (114 bytes) sub_86F820
// float *sub_86F820(float *a1, uint32_t *a2, int a3);
// [0x86f8a0] (59 bytes) sub_86F8A0
// int sub_86F8A0(int a1, int a2);
// [0x86f8e0] (19 bytes) sub_86F8E0
// int sub_86F8E0(int a1);
// [0x86f900] (109 bytes) sub_86F900
// int sub_86F900(int a1, int a2);
// [0x86f970] (15 bytes) sub_86F970
// int sub_86F970(int a1);
// [0x86f980] (44 bytes) sub_86F980
// bool sub_86F980(int a1, int a2);
// [0x86f9b0] (18 bytes) sub_86F9B0
// int sub_86F9B0(int a1, int a2);
// [0x86f9d0] (51 bytes) sub_86F9D0
// int sub_86F9D0(int a1);
// [0x86fa10] (44 bytes) sub_86FA10
// bool sub_86FA10(int a1, int a2);
// [0x86fa40] (18 bytes) sub_86FA40
// int sub_86FA40(int a1, int a2);
// [0x86fa60] (196 bytes) sub_86FA60
// unsigned int sub_86FA60(int a1, int a2, char a3);
// [0x86fb30] (64 bytes) sub_86FB30
// int sub_86FB30(int a1, float a2);
// [0x86fb80] (64 bytes) sub_86FB80
// int sub_86FB80(int a1, float a2);
// [0x86fbd0] (56 bytes) sub_86FBD0
// int sub_86FBD0(int a1, float a2);
// [0x86fc20] (64 bytes) sub_86FC20
// int sub_86FC20(int a1, float a2);
// [0x86fc70] (186 bytes) sub_86FC70
// int sub_86FC70(int a1);
// [0x86fd40] (313 bytes) sub_86FD40
// bool sub_86FD40(int a1);
// [0x86fe80] (16 bytes) sub_86FE80
// bool sub_86FE80(int a1);
// [0x86ff10] (1677 bytes) sub_86FF10
// void sub_86FF10(int a1, int a2, float a3);
// [0x8705a0] (174 bytes) sub_8705A0
// int sub_8705A0(int a1, int a2, int a3, int a4, int a5, int a6);
// [0x870650] (9 bytes) sub_870650
// void sub_870650();
// [0x8706a0] (39 bytes) sub_8706A0
// int sub_8706A0(int a1, int a2);
// [0x8706d0] (38 bytes) sub_8706D0
// int sub_8706D0(int a1, int a2);
// [0x870740] (67 bytes) sub_870740
// bool sub_870740(int a1);
// [0x870790] (96 bytes) sub_870790
// int sub_870790(uint8_t *a1);
// [0x8707f0] (46 bytes) sub_8707F0
// int sub_8707F0(int a1);
// [0x870820] (98 bytes) sub_870820
// int sub_870820(int a1);
// [0x870890] (108 bytes) sub_870890
// int sub_870890(int a1, int a2);
// [0x870900] (54 bytes) sub_870900
// int sub_870900(int a1, int a2);
// [0x870960] (80 bytes) sub_870960
// uint32_t *sub_870960(int a1);
// [0x8709b0] (88 bytes) sub_8709B0
// uint32_t *sub_8709B0(int a1, uint32_t *a2);
// [0x870a10] (256 bytes) sub_870A10
// uint32_t *sub_870A10(int a1);
// [0x870b10] (416 bytes) sub_870B10
// int64_t sub_870B10(int a1, char a2, float a3);
// [0x870cb0] (290 bytes) sub_870CB0
// int sub_870CB0(float *a1);
// [0x870de0] (96 bytes) sub_870DE0
// int sub_870DE0(int a1);
// [0x870e40] (130 bytes) sub_870E40
// int sub_870E40(uint32_t *a1);
// [0x870ed0] (140 bytes) sub_870ED0
// uint32_t *sub_870ED0(uint32_t *a1);
// [0x870f60] (120 bytes) sub_870F60
// int sub_870F60(uint32_t *a1, uint8_t a2);
// [0x870fe0] (280 bytes) sub_870FE0
// char sub_870FE0(int a1, int a2, int a3, int a4, int a5, uint8_t a6);
// [0x871130] (364 bytes) sub_871130
// char sub_871130(int a1, int a2, float a3);
// [0x8712a0] (827 bytes) sub_8712A0
// char sub_8712A0(int a1, float a2);
// [0x8715e0] (49 bytes) sub_8715E0
// int sub_8715E0(int a1);
// [0x871620] (25 bytes) sub_871620
// unsigned int sub_871620(int a1, unsigned int a2);
// [0x871650] (24 bytes) sub_871650
// int sub_871650(int a1);
// [0x871670] (99 bytes) sub_871670
// int sub_871670(int a1);
// [0x8716e0] (359 bytes) sub_8716E0
// int sub_8716E0(int *a1, int *a2);
// [0x871850] (272 bytes) sub_871850
// volatile int32_t *sub_871850(volatile int32_t **a1);
// [0x871960] (104 bytes) sub_871960
// uint32_t *sub_871960(uint32_t *a1);
// [0x8719d0] (133 bytes) sub_8719D0
// int sub_8719D0(int a1, uint32_t *a2, void **a3);
// [0x871a60] (217 bytes) sub_871A60
// uint32_t *sub_871A60(uint32_t *a1, char *a2);
// [0x871b40] (173 bytes) sub_871B40
// glf::IOStream *sub_871B40(int a1, char *a2);
// [0x871bf0] (64 bytes) sub_871BF0
// int (**sub_871BF0( glitch::video::CDefaultTexturePolicy *a1, glitch::video::CTextureMemoryPoolManager *a2))(int);
// [0x871c30] (84 bytes) sub_871C30
// int sub_871C30(int a1);
// [0x871c90] (37 bytes) sub_871C90
// int sub_871C90(int a1);
// [0x871cc0] (189 bytes) sub_871CC0
// int (**sub_871CC0(glitch::video::ITexturePolicySelector *a1, glitch::video::CTextureManager *a2))(int);
// [0x871d80] (215 bytes) sub_871D80
// void sub_871D80(int a1);
// [0x871e68] (1 bytes) nullsub_309
// void nullsub_309();
// [0x871e70] (38 bytes) sub_871E70
// int sub_871E70(int a1, int a2);
// [0x871eb0] (216 bytes) sub_871EB0
// int sub_871EB0(glf::debugger::Tweakable *a1);
// [0x871f90] (379 bytes) sub_871F90
// void sub_871F90(uint32_t *a1);
// [0x872110] (223 bytes) sub_872110
// int sub_872110(glitch::IObject *a1, int *a2, int a3, int a4);
// [0x8721f0] (233 bytes) sub_8721F0
// int (**sub_8721F0(glitch::IObject *a1, int a2, int a3))(glitch::scene::CSceneManager *);
// [0x8722e0] (217 bytes) sub_8722E0
// int sub_8722E0(int a1);
// [0x8723c0] (67 bytes) sub_8723C0
// uint32_t *sub_8723C0(uint32_t *a1, int a2);
// [0x872410] (146 bytes) sub_872410
// int sub_872410(int a1, int a2, char a3);
// [0x8724b0] (220 bytes) sub_8724B0
// int sub_8724B0(int a1, int a2, char a3);
// [0x872590] (120 bytes) sub_872590
// int sub_872590(int a1);
// [0x872610] (14 bytes) sub_872610
// bool sub_872610(int a1);
// [0x872620] (899 bytes) sub_872620
// volatile int32_t *sub_872620(int a1, int *a2, uint32_t *a3, int a4, int a5, int a6, int a7, int a8);
// [0x872d50] (149 bytes) sub_872D50
// int sub_872D50(glitch::IObject *a1, int *a2, int a3, int a4, int a5, int a6, int a7, int a8);
// [0x872df0] (166 bytes) sub_872DF0
// int (**sub_872DF0( glitch::IObject *a1, int a2, int a3, int a4, int a5, int a6, int a7))(glitch::collada::CMeshSceneNode *);
// [0x872ea0] (149 bytes) sub_872EA0
// int sub_872EA0(glitch::IObject *a1, int *a2, int a3, int a4, int a5, int a6, int a7, int a8);
// [0x872f40] (166 bytes) sub_872F40
// int (**sub_872F40( glitch::IObject *a1, int a2, int a3, int a4, int a5, int a6, int a7))(glitch::collada::CMeshSceneNode *);
// [0x872ff0] (109 bytes) sub_872FF0
// int sub_872FF0(glitch::collada::CRootSceneNode *a1, int *a2);
// [0x873060] (138 bytes) sub_873060
// int (**sub_873060(glitch::collada::CRootSceneNode *a1))(int);
// [0x8730f0] (83 bytes) sub_8730F0
// void sub_8730F0(glitch::collada::CRootSceneNode *a1, int *a2);
// [0x873150] (238 bytes) sub_873150
// glitch::collada::CColladaFactory *sub_873150( glitch::collada::CColladaFactory *a1, glitch::collada::CColladaDatabase *a2, int a3, char a4);
// [0x873240] (382 bytes) sub_873240
// glitch::IObject **sub_873240(glitch::IObject **a1, int a2, int a3, int a4, int a5, char a6);
// [0x8733c0] (84 bytes) sub_8733C0
// int sub_8733C0(int a1, int a2, int a3, int a4, char a5);
// [0x873420] (84 bytes) sub_873420
// int sub_873420(int a1, int a2, int a3, int a4, char a5);
// [0x873480] (112 bytes) sub_873480
// int sub_873480(int a1, int a2, int a3, uint32_t *a4, char a5);
// [0x8734f0] (97 bytes) sub_8734F0
// int (**sub_8734F0(int *a1, int *a2, int a3))(int);
// [0x873560] (107 bytes) sub_873560
// int (**sub_873560(uint32_t *a1, int a2))(int);
// [0x8735d0] (106 bytes) sub_8735D0
// int sub_8735D0(int a1, int a2, int a3);
// [0x873640] (52 bytes) sub_873640
// uint32_t *sub_873640(uint32_t *a1);
// [0x873680] (356 bytes) sub_873680
// int *sub_873680(int *a1, int a2);
// [0x8737f0] (251 bytes) sub_8737F0
// void sub_8737F0(int a1);
// [0x8738f0] (164 bytes) sub_8738F0
// int sub_8738F0(int a1, int a2);
// [0x8739c0] (69 bytes) sub_8739C0
// uint32_t *sub_8739C0(uint32_t *a1, int a2);
// [0x873a10] (69 bytes) sub_873A10
// uint32_t *sub_873A10(uint32_t *a1, int a2);
// [0x873a60] (9 bytes) sub_873A60
// void sub_873A60();
// [0x873a70] (289 bytes) sub_873A70
// int sub_873A70(int a1, unsigned int a2, unsigned int a3);
// [0x873bb8] (1 bytes) nullsub_310
// void nullsub_310();
// [0x873bc0] (144 bytes) sub_873BC0
// uint32_t *sub_873BC0(int a1);
// [0x873c50] (19 bytes) sub_873C50
// int sub_873C50(int a1, int a2, int a3);
// [0x873c70] (19 bytes) sub_873C70
// int sub_873C70(int a1, int a2, int a3);
// [0x873c90] (13 bytes) sub_873C90
// uint8_t *sub_873C90(uint8_t *a1, char a2);
// [0x873ca0] (142 bytes) sub_873CA0
// void sub_873CA0(int a1, char *s);
// [0x873d40] (148 bytes) sub_873D40
// int sub_873D40(uint32_t *a1);
// [0x873de0] (172 bytes) sub_873DE0
// int sub_873DE0(int a1);
// [0x873e90] (63 bytes) sub_873E90
// int sub_873E90(int a1);
// [0x873ed0] (13 bytes) sub_873ED0
// int sub_873ED0(int a1);
// [0x873ee0] (40 bytes) sub_873EE0
// int sub_873EE0(int a1);
// [0x873f10] (30 bytes) sub_873F10
// int sub_873F10(int a1);
// [0x873f30] (116 bytes) sub_873F30
// int sub_873F30(int a1, int a2);
// [0x873fb0] (164 bytes) sub_873FB0
// int sub_873FB0(int a1);
// [0x874060] (164 bytes) sub_874060
// void sub_874060(int a1, int a2);
// [0x874110] (161 bytes) sub_874110
// int sub_874110(int a1, int a2);
// [0x8741c0] (153 bytes) sub_8741C0
// void sub_8741C0(uint32_t *a1);
// [0x874260] (172 bytes) sub_874260
// int sub_874260(int a1);
// [0x874310] (177 bytes) sub_874310
// int sub_874310(int a1, int a2);
// [0x8743d0] (46 bytes) sub_8743D0
// int sub_8743D0(int a1, int a2);
// [0x874400] (554 bytes) sub_874400
// void sub_874400(int a1);
// [0x874630] (48 bytes) sub_874630
// int (*sub_874630(int a1))(int, uint32_t);
// [0x874660] (48 bytes) sub_874660
// int (*sub_874660(int a1))(int, uint32_t);
// [0x874690] (102 bytes) sub_874690
// uint32_t *sub_874690(int a1);
// [0x874700] (393 bytes) sub_874700
// int sub_874700(int a1);
// [0x874890] (84 bytes) sub_874890
// void sub_874890(int a1);
// [0x8748f0] (127 bytes) sub_8748F0
// bool sub_8748F0(int a1);
// [0x874970] (15 bytes) sub_874970
// int sub_874970(glitch::scene::ISceneNode *a1);
// [0x874980] (15 bytes) sub_874980
// int sub_874980(glitch::scene::ISceneNode *a1);
// [0x874990] (146 bytes) sub_874990
// int (**sub_874990(glitch::scene::ISceneNode *a1))(int);
// [0x874a30] (130 bytes) sub_874A30
// void sub_874A30(glitch::scene::ISceneNode *a1, int *a2);
// [0x874ac0] (839 bytes) sub_874AC0
// glitch::collada::CColladaFactory *sub_874AC0( glitch::collada::CColladaFactory *a1, glitch::collada::CColladaDatabase *a2, char *a3, char *a4, int a5, char a6);
// [0x874e10] (254 bytes) sub_874E10
// int sub_874E10(char *src, char *dest, unsigned int a3);
// [0x8751e0] (34 bytes) sub_8751E0
// int *sub_8751E0(int a1, int a2, int a3, int a4, int *a5);
// [0x875210] (1176 bytes) sub_875210
// int *sub_875210( int *a1, std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a2, int *a3);
// [0x8756b0] (1636 bytes) sub_8756B0
// void sub_8756B0(uint32_t *a1, std::vector<GLFUtils::FileListEntry> *a2, uint8_t a3);
// [0x875d20] (90 bytes) sub_875D20
// void sub_875D20(uint32_t *a1, std::vector<GLFUtils::FileListEntry> *a2, uint8_t a3);
// [0x875d80] (15 bytes) sub_875D80
// int sub_875D80(glitch::scene::ISceneNode *a1);
// [0x875d90] (15 bytes) sub_875D90
// int sub_875D90(glitch::scene::ISceneNode *a1);
// [0x875da0] (154 bytes) sub_875DA0
// void sub_875DA0(glitch::scene::ISceneNode *a1);
// [0x875e40] (330 bytes) sub_875E40
// int sub_875E40(int a1, char *src);
// [0x875f90] (1489 bytes) sub_875F90
// int *sub_875F90(int *a1, char *a2, char *a3);
// [0x876570] (1383 bytes) sub_876570
// unsigned int sub_876570(int *a1, char *src);
// [0x876ae0] (144 bytes) sub_876AE0
// void sub_876AE0(uint32_t *a1);
// [0x876b70] (67 bytes) sub_876B70
// int *sub_876B70(int *a1, int *a2);
// [0x876bc0] (636 bytes) sub_876BC0
// int sub_876BC0(int a1, glitch::video::ITexture *a2, char *a3, char a4);
// [0x876e40] (596 bytes) sub_876E40
// uint32_t *sub_876E40(uint32_t *a1, int a2, char *needle);
// [0x8770a0] (792 bytes) sub_8770A0
// int sub_8770A0(int a1, int a2);
// [0x8773c0] (198 bytes) sub_8773C0
// int sub_8773C0(int a1);
// [0x877490] (408 bytes) sub_877490
// int sub_877490(int a1, int a2);
// [0x877630] (352 bytes) sub_877630
// int sub_877630(int a1);
// [0x877790] (221 bytes) sub_877790
// int sub_877790(int a1, char a2);
// [0x877870] (439 bytes) sub_877870
// int sub_877870(int a1);
// [0x877a30] (135 bytes) sub_877A30
// glitch::video::CMaterial *sub_877A30(int a1, int a2);
// [0x877ac0] (1548 bytes) sub_877AC0
// int sub_877AC0(int a1, float a2, float a3);
// [0x8780d0] (977 bytes) sub_8780D0
// int sub_8780D0(uint32_t *a1, int a2, int a3);
// [0x8784b0] (954 bytes) sub_8784B0
// int sub_8784B0(uint32_t *a1);
// [0x878870] (2001 bytes) sub_878870
// int sub_878870(uint8_t *a1);
// [0x879050] (210 bytes) sub_879050
// int sub_879050(int a1, int a2, int a3);
// [0x879130] (235 bytes) sub_879130
// int sub_879130(int a1, int a2);
// [0x879220] (282 bytes) sub_879220
// void sub_879220(glf::Mutex *a1);
// [0x879340] (2112 bytes) sub_879340
// int sub_879340(int16_t *a1);
// [0x879b80] (954 bytes) sub_879B80
// int sub_879B80(uint32_t *a1);
// [0x879f40] (498 bytes) sub_879F40
// int sub_879F40(glitch::video::CMaterial ***a1, glitch::video::CMaterial **a2, uint8_t a3);
// [0x87a140] (385 bytes) sub_87A140
// int sub_87A140(glf::Mutex *a1, glitch::video::CMaterial **a2, uint8_t a3);
// [0x87a2d0] (191 bytes) sub_87A2D0
// uint32_t *sub_87A2D0(uint32_t *a1, glitch::scene::ISceneNode *a2);
// [0x87a390] (1302 bytes) sub_87A390
// int sub_87A390(int a1, int a2);
// [0x87a8b0] (521 bytes) sub_87A8B0
// int sub_87A8B0(int a1, glf::Mutex *a2, glitch::video::CMaterial **a3, uint8_t a4);
// [0x87aac0] (647 bytes) sub_87AAC0
// int sub_87AAC0(int a1, glitch::video::CMaterial ***a2, glitch::video::CMaterial **a3, uint8_t a4);
// [0x87ad50] (1212 bytes) sub_87AD50
// int sub_87AD50(int a1);
// [0x87b210] (1276 bytes) sub_87B210
// int sub_87B210(int a1, char a2);
// [0x87b710] (415 bytes) sub_87B710
// glitch::video::CMaterial *sub_87B710( glitch::video::CMaterial *result, glitch::video::CMaterial *a2);
// [0x87b8b0] (564 bytes) sub_87B8B0
// int sub_87B8B0(int a1, int a2, int a3, int a4);
// [0x87baf0] (1203 bytes) sub_87BAF0
// int sub_87BAF0(int *a1, int *a2, int a3);
// [0x87bfb0] (291 bytes) sub_87BFB0
// glitch::video::CMaterial *sub_87BFB0(glitch::video::CMaterial *result, int *a2);
// [0x87c0e0] (374 bytes) sub_87C0E0
// int sub_87C0E0(int a1);
// [0x87c260] (399 bytes) sub_87C260
// uint32_t *sub_87C260(const char **a1, int a2, int a3);
// [0x87c3f0] (284 bytes) sub_87C3F0
// int sub_87C3F0(int a1);
// [0x87c510] (109 bytes) sub_87C510
// int sub_87C510(int a1);
// [0x87c580] (140 bytes) sub_87C580
// uint32_t *sub_87C580(int a1);
// [0x87c610] (140 bytes) sub_87C610
// uint32_t *sub_87C610(int a1);
// [0x87c6a0] (140 bytes) sub_87C6A0
// uint32_t *sub_87C6A0(int a1);
// [0x87c730] (605 bytes) sub_87C730
// uint32_t *sub_87C730(uint32_t *a1);
// [0x87c990] (584 bytes) sub_87C990
// uint32_t *sub_87C990(int a1);
// [0x87cbe0] (347 bytes) sub_87CBE0
// uint32_t *sub_87CBE0(int a1, char a2, float a3);
// [0x87ce80] (507 bytes) sub_87CE80
// int sub_87CE80(uint32_t *a1, uint32_t *a2);
// [0x87d080] (468 bytes) sub_87D080
// int sub_87D080(int a1);
// [0x87d260] (347 bytes) sub_87D260
// int sub_87D260(int a1);
// [0x87d3c0] (15 bytes) sub_87D3C0
// int sub_87D3C0(glitch::scene::CSceneManager *a1);
// [0x87d3d0] (15 bytes) sub_87D3D0
// int sub_87D3D0(glitch::scene::CSceneManager *a1);
// [0x87d3e0] (766 bytes) sub_87D3E0
// int (**sub_87D3E0(glitch::scene::CSceneManager *a1))(int);
// [0x87d6e0] (15 bytes) sub_87D6E0
// int sub_87D6E0(glitch::scene::CSceneManager *a1);
// [0x87d6f0] (15 bytes) sub_87D6F0
// int sub_87D6F0(glitch::scene::CSceneManager *a1);
// [0x87d700] (56 bytes) sub_87D700
// void sub_87D700(glitch::scene::CSceneManager *a1);
// [0x87d740] (742 bytes) sub_87D740
// void sub_87D740(glitch::scene::CSceneManager *a1, int *a2);
// [0x87da30] (1926 bytes) sub_87DA30
// uint32_t *sub_87DA30( glitch::IObject *a1, int *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, uint32_t *a11);
// [0x87e1c0] (121 bytes) sub_87E1C0
// 0x87e1c0 sub_87E1C0
// [0x87e240] (1862 bytes) sub_87E240
// uint32_t *sub_87E240( glitch::IObject *a1, int *a2, int *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, uint32_t *a11);
// [0x87e990] (2009 bytes) sub_87E990
// int sub_87E990(const char **a1, int a2, char *a3);
// [0x87f170] (2219 bytes) sub_87F170
// glitch::scene::ISceneNode **sub_87F170( glitch::scene::ISceneNode **a1, glf *a2, glitch::collada::CColladaFactory *a3, int a4, char a5);
// [0x87fa20] (375 bytes) sub_87FA20
// uint32_t *sub_87FA20(const char **a1, int a2, int a3);
// [0x87fba0] (517 bytes) sub_87FBA0
// uint32_t *sub_87FBA0(uint32_t *a1, char *a2, glitch::collada::CColladaFactory *a3);
// [0x87fdb0] (94 bytes) sub_87FDB0
// char *sub_87FDB0(char **a1);
// [0x87fe10] (15 bytes) sub_87FE10
// int sub_87FE10(glitch::scene::ISceneNode *a1);
// [0x87fe20] (15 bytes) sub_87FE20
// int sub_87FE20(glitch::scene::ISceneNode *a1);
// [0x87fe30] (898 bytes) sub_87FE30
// int (**sub_87FE30(glitch::scene::ISceneNode *a1))(int);
// [0x8801c0] (15 bytes) sub_8801C0
// int sub_8801C0(glitch::scene::ISceneNode *a1);
// [0x8801d0] (15 bytes) sub_8801D0
// int sub_8801D0(glitch::scene::ISceneNode *a1);
// [0x8801e0] (56 bytes) sub_8801E0
// void sub_8801E0(glitch::scene::ISceneNode *a1);
// [0x880220] (932 bytes) sub_880220
// void sub_880220(glitch::scene::ISceneNode *a1, int *a2);
// [0x8805d0] (201 bytes) sub_8805D0
// uint32_t *sub_8805D0(uint32_t *a1);
// [0x8806a0] (91 bytes) sub_8806A0
// uint32_t *sub_8806A0(int a1);
// [0x880700] (268 bytes) sub_880700
// int sub_880700(int a1);
// [0x880810] (577 bytes) sub_880810
// int (*sub_880810(int a1))(uint32_t *, uint32_t);
// [0x880ab0] (173 bytes) sub_880AB0
// int (*sub_880AB0(int a1, char *s, int a3))(uint32_t *, uint32_t);
// [0x880b60] (1965 bytes) sub_880B60
// int sub_880B60(int a1);
// [0x881310] (5505 bytes) sub_881310
// int sub_881310(int a1);
// [0x8828a0] (126 bytes) sub_8828A0
// int sub_8828A0(int a1);
// [0x882920] (6765 bytes) sub_882920
// int sub_882920(int a1);
// [0x884390] (143 bytes) sub_884390
// void sub_884390(int a1);
// [0x884420] (209 bytes) sub_884420
// int sub_884420(int a1);
// [0x884500] (209 bytes) sub_884500
// int sub_884500(int a1);
// [0x8845e0] (135 bytes) sub_8845E0
// void sub_8845E0(int a1);
// [0x884670] (118 bytes) sub_884670
// char sub_884670(int a1);
// [0x8846f0] (100 bytes) sub_8846F0
// char sub_8846F0(int a1);
// [0x884760] (294 bytes) sub_884760
// void sub_884760(uint32_t *a1);
// [0x884890] (354 bytes) sub_884890
// void sub_884890(int a1, int a2);
// [0x884a00] (187 bytes) sub_884A00
// int sub_884A00(uint32_t *a1);
// [0x884ac0] (861 bytes) sub_884AC0
// void sub_884AC0(int a1, int a2);
// [0x884e20] (276 bytes) sub_884E20
// void sub_884E20(int a1);
// [0x884f40] (440 bytes) sub_884F40
// void sub_884F40(uint32_t *a1);
// [0x885100] (304 bytes) sub_885100
// void sub_885100(uint32_t *a1);
// [0x885230] (155 bytes) sub_885230
// int sub_885230(int *a1);
// [0x8852d0] (925 bytes) sub_8852D0
// int sub_8852D0(int a1);
// [0x885670] (433 bytes) sub_885670
// void sub_885670(int a1);
// [0x885830] (178 bytes) sub_885830
// int sub_885830(int a1, int a2);
// [0x8858f0] (712 bytes) sub_8858F0
// int sub_8858F0(int a1);
// [0x885bc0] (123 bytes) sub_885BC0
// int sub_885BC0(int a1);
// [0x885c50] (422 bytes) sub_885C50
// void sub_885C50(long double a1, int a2);
// [0x885e00] (123 bytes) sub_885E00
// void sub_885E00(long double a1, int a2);
// [0x885e80] (890 bytes) sub_885E80
// char sub_885E80(int a1);
// [0x886200] (1100 bytes) sub_886200
// void sub_886200(int a1);
// [0x886660] (733 bytes) sub_886660
// void sub_886660(long double a1, int a2);
// [0x886940] (190 bytes) sub_886940
// int sub_886940(uint32_t *a1, char a2);
// [0x886a00] (689 bytes) sub_886A00
// int sub_886A00(uint32_t *a1);
// [0x886ce0] (767 bytes) sub_886CE0
// int sub_886CE0(uint32_t *a1, char a2);
// [0x886fe0] (1895 bytes) sub_886FE0
// char sub_886FE0(int a1, char *a2);
// [0x887750] (157 bytes) sub_887750
// void sub_887750(int a1);
// [0x8877f0] (1247 bytes) sub_8877F0
// int sub_8877F0(int a1, char *s);
// [0x887cd0] (424 bytes) sub_887CD0
// void sub_887CD0(int a1, char a2);
// [0x887e80] (952 bytes) sub_887E80
// int sub_887E80(uint32_t *a1, int a2, char a3);
// [0x888240] (658 bytes) sub_888240
// int sub_888240(int a1);
// [0x8884e0] (879 bytes) sub_8884E0
// void sub_8884E0(int a1);
// [0x888f90] (21 bytes) sub_888F90
// int sub_888F90(char *a1, int a2, char **a3, char *a4, int a5);
// [0x888fb0] (1304 bytes) sub_888FB0
// glitch::collada::CAnimationSet **sub_888FB0( glitch::collada::CAnimationSet **a1, int a2, std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, char a12);
// [0x8894d0] (1591 bytes) sub_8894D0
// void sub_8894D0(int *a1, int a2);
// [0x889b10] (2430 bytes) sub_889B10
// long double sub_889B10(uint32_t *a1, uint32_t *a2, char a3);
// [0x88a490] (2614 bytes) sub_88A490
// long double sub_88A490(int *a1);
// [0x88aed0] (917 bytes) sub_88AED0
// int sub_88AED0(uint32_t *a1, glitch::video::CMaterial **a2, int a3, int a4);
// [0x88b270] (837 bytes) sub_88B270
// int sub_88B270(uint32_t *a1, glitch::video::CMaterial **a2, int a3);
// [0x88bdd0] (986 bytes) sub_88BDD0
// int *sub_88BDD0(int *a1, int a2, int a3, int a4, int a5, char a6);
// [0x88c1b0] (444 bytes) sub_88C1B0
// int *sub_88C1B0(int *a1, int a2, int a3, int a4, int a5);
// [0x88c370] (1539 bytes) sub_88C370
// char *sub_88C370( int a1, int a2, const void **a3, const char **a4, int a5, std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a6, std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a7, char a8);
// [0x88c980] (427 bytes) sub_88C980
// int *sub_88C980(int *a1, int a2);
// [0x88cb30] (3060 bytes) sub_88CB30
// int sub_88CB30(int a1);
// [0x88d730] (270 bytes) sub_88D730
// void sub_88D730(int16_t a1, char *a2, int a3);
// [0x88d840] (348 bytes) sub_88D840
// int sub_88D840(int a1, int a2, char *a3, int a4);
// [0x88d9a0] (4135 bytes) sub_88D9A0
// int sub_88D9A0( glf::debugger::Tweakable *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, uint32_t *a38, uint32_t *a39, int a40, int a41, uint32_t *a42, uint32_t *a43, int a44, int a45, uint32_t *a46, uint32_t *a47, int a48, int a49, uint32_t *a50, uint32_t *a51, int a52, int a53, uint32_t *a54, uint32_t *a55, ...);
// [0x88e9d0] (671 bytes) sub_88E9D0
// int sub_88E9D0(uint32_t *a1, uint8_t a2);
// [0x88ec70] (1515 bytes) sub_88EC70
// int sub_88EC70(int result, int a2);
// [0x88f260] (265 bytes) sub_88F260
// void sub_88F260(uint32_t *a1, uint32_t *a2, uint32_t *a3, int a4, int a5);
// [0x88f370] (2724 bytes) sub_88F370
// bool sub_88F370(int a1);
// [0x88fe20] (1572 bytes) sub_88FE20
// int sub_88FE20(uint32_t *a1, int a2, int a3);
// [0x890450] (43 bytes) sub_890450
// int sub_890450(uint32_t *a1, int a2, int a3);
// [0x890480] (126 bytes) sub_890480
// int sub_890480(uint32_t *a1);
// [0x890500] (2198 bytes) sub_890500
// void sub_890500(int a1, int a2);
// [0x890da0] (674 bytes) sub_890DA0
// int sub_890DA0(uint32_t *a1, int a2);
// [0x891050] (1221 bytes) sub_891050
// int sub_891050(int a1, int a2);
// [0x891520] (106 bytes) sub_891520
// void sub_891520(int a1, int a2);
// [0x891590] (36 bytes) sub_891590
// void sub_891590(int a1, int a2);
// [0x8915c0] (100 bytes) sub_8915C0
// void sub_8915C0(int a1, int a2, int a3);
// [0x891630] (111 bytes) sub_891630
// int sub_891630(int a1);
// [0x8916a0] (190 bytes) sub_8916A0
// void sub_8916A0(int a1);
// [0x891760] (220 bytes) sub_891760
// int sub_891760(uint32_t *a1);
// [0x891840] (229 bytes) sub_891840
// void sub_891840(int a1, int a2);
// [0x891930] (828 bytes) sub_891930
// int sub_891930(int a1, int a2);
// [0x891c70] (69 bytes) sub_891C70
// void sub_891C70(int a1, char a2, int a3);
// [0x891cc0] (953 bytes) sub_891CC0
// int sub_891CC0(uint32_t *a1, int a2, int *a3);
// [0x892080] (1407 bytes) sub_892080
// int sub_892080(float *a1, int a2, int a3);
// [0x892600] (43 bytes) sub_892600
// int sub_892600(int a1, int a2, int a3);
// [0x892630] (33 bytes) sub_892630
// int sub_892630(int a1, int a2);
// [0x892660] (243 bytes) sub_892660
// int sub_892660(int a1, int a2);
// [0x892760] (197 bytes) sub_892760
// int sub_892760(int *a1, int a2);
// [0x892830] (95 bytes) sub_892830
// int sub_892830(int a1, int a2);
// [0x892890] (717 bytes) sub_892890
// int sub_892890(uint32_t *a1, int a2, int a3, char a4);
// [0x892b60] (102 bytes) sub_892B60
// int sub_892B60(uint32_t *a1, int a2, int a3, char a4);
// [0x892bd0] (166 bytes) sub_892BD0
// int sub_892BD0(uint32_t *a1, uint32_t *a2, int a3, char a4);
// [0x892c80] (1960 bytes) sub_892C80
// int sub_892C80(int a1, int a2);
// [0x893430] (233 bytes) sub_893430
// int sub_893430(uint32_t *a1, int a2, char a3);
// [0x893520] (94 bytes) sub_893520
// int sub_893520(int a1, int a2);
// [0x893580] (924 bytes) sub_893580
// int sub_893580(uint32_t *a1);
// [0x893930] (21 bytes) sub_893930
// int sub_893930(uint32_t *a1);
// [0x893950] (1398 bytes) sub_893950
// int sub_893950( int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, void **a25, void **a26);
// [0x893ed0] (3809 bytes) sub_893ED0
// int sub_893ED0(uint32_t *a1);
// [0x894dc0] (5029 bytes) sub_894DC0
// int sub_894DC0(float *a1);
// [0x8961a0] (80 bytes) sub_8961A0
// void sub_8961A0(int a1);
// [0x8961f0] (547 bytes) sub_8961F0
// int (**sub_8961F0(int a1, int a2))(int);
// [0x896420] (167 bytes) sub_896420
// void (**sub_896420(int a1))(vox::EmitterHandle *__hidden this);
// [0x8964d0] (3672 bytes) sub_8964D0
// void (**sub_8964D0(int a1, int a2))(vox::EmitterHandle *__hidden this);
// [0x897330] (111 bytes) sub_897330
// uint32_t *sub_897330(uint32_t *a1, int a2);
// [0x8973a0] (1575 bytes) sub_8973A0
// int sub_8973A0(int a1, int a2);
// [0x8979d0] (81 bytes) sub_8979D0
// uint32_t *sub_8979D0(int a1);
// [0x897a30] (7 bytes) sub_897A30
// int sub_897A30(int a1);
// [0x897a40] (287 bytes) sub_897A40
// int sub_897A40(uint32_t *a1);
// [0x897b60] (329 bytes) sub_897B60
// uint32_t *sub_897B60(uint32_t *a1);
// [0x897cb0] (684 bytes) sub_897CB0
// void sub_897CB0(int *a1, int *a2, int *a3);
// [0x897f60] (5367 bytes) sub_897F60
// int sub_897F60(int a1, int a2);
// [0x899460] (767 bytes) sub_899460
// int sub_899460(int a1, int a2);
// [0x899760] (799 bytes) sub_899760
// char sub_899760(int a1, int a2, int a3);
// [0x899a80] (3303 bytes) sub_899A80
// void sub_899A80(int a1, int a2);
// [0x89a770] (1122 bytes) sub_89A770
// int sub_89A770(uint8_t *a1, int a2);
// [0x89abe0] (69 bytes) sub_89ABE0
// int sub_89ABE0(uint8_t *a1, int a2);
// [0x89ac30] (69 bytes) sub_89AC30
// int sub_89AC30(uint8_t *a1, int a2);
// [0x89ac80] (842 bytes) sub_89AC80
// char sub_89AC80( int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, float a18, int a19, int a20, int a21, int a22, int a23, int a24, float a25, int a26, float a27);
// [0x89afd0] (2386 bytes) sub_89AFD0
// void sub_89AFD0(int a1, char a2, uint8_t a3, char a4);
// [0x89b930] (401 bytes) sub_89B930
// void sub_89B930(uint32_t *a1, char a2);
// [0x89bad0] (531 bytes) sub_89BAD0
// void sub_89BAD0(int a1, char a2);
// [0x89bcf0] (1904 bytes) sub_89BCF0
// int sub_89BCF0(uint32_t *a1);
// [0x89c460] (264 bytes) sub_89C460
// int sub_89C460(int a1);
// [0x89c580] (234 bytes) sub_89C580
// int sub_89C580(int a1);
// [0x89c670] (161 bytes) sub_89C670
// void sub_89C670(int a1, char a2);
// [0x89c720] (138 bytes) sub_89C720
// int *sub_89C720(int a1);
// [0x89c7b0] (1027 bytes) sub_89C7B0
// void sub_89C7B0(int *a1);
// [0x89cbc0] (127 bytes) sub_89CBC0
// int sub_89CBC0(int a1);
// [0x89cc40] (541 bytes) sub_89CC40
// int sub_89CC40(int a1);
// [0x89ce60] (7 bytes) sub_89CE60
// int sub_89CE60(int a1);
// [0x89ce70] (295 bytes) sub_89CE70
// void sub_89CE70(uint32_t *a1);
// [0x89cfa0] (1543 bytes) sub_89CFA0
// void sub_89CFA0(int a1, char a2);
// [0x89d5b0] (460 bytes) sub_89D5B0
// int sub_89D5B0(int a1);
// [0x89d780] (846 bytes) sub_89D780
// int sub_89D780(uint32_t *a1, int a2);
// [0x89dad0] (2858 bytes) sub_89DAD0
// int sub_89DAD0(int a1);
// [0x89e600] (476 bytes) sub_89E600
// int sub_89E600(int a1, uint32_t *a2, uint32_t *a3);
// [0x89e7e0] (476 bytes) sub_89E7E0
// int sub_89E7E0(int result, uint32_t *a2, uint32_t *a3);
// [0x89e9c0] (757 bytes) sub_89E9C0
// void sub_89E9C0(int a1, char a2);
// [0x89ecc0] (781 bytes) sub_89ECC0
// void sub_89ECC0(int a1, uint8_t a2);
// [0x89efd0] (300 bytes) sub_89EFD0
// unsigned int sub_89EFD0(int a1);
// [0x89f100] (7 bytes) sub_89F100
// int sub_89F100(int a1);
// [0x89f110] (2333 bytes) sub_89F110
// int sub_89F110(int a1);
// [0x89fa30] (7 bytes) sub_89FA30
// int sub_89FA30(int a1);
// [0x89fa40] (56 bytes) sub_89FA40
// void sub_89FA40(void *a1);
// [0x89fa80] (7 bytes) sub_89FA80
// int sub_89FA80(int a1);
// [0x89fa90] (102 bytes) sub_89FA90
// int sub_89FA90(uint32_t *a1);
// [0x89fb00] (7 bytes) sub_89FB00
// int sub_89FB00(int a1);
// [0x89fb10] (363 bytes) sub_89FB10
// int sub_89FB10(uint32_t *a1);
// [0x89fc80] (7 bytes) sub_89FC80
// int sub_89FC80(int a1);
// [0x89fc90] (110 bytes) sub_89FC90
// void sub_89FC90(uint32_t *a1);
// [0x89fd00] (7 bytes) sub_89FD00
// int sub_89FD00(int a1);
// [0x89fd10] (371 bytes) sub_89FD10
// void sub_89FD10(uint32_t *a1);
// [0x89fe90] (1018 bytes) sub_89FE90
// uint32_t *sub_89FE90(glf *a1);
// [0x8a0290] (1039 bytes) sub_8A0290
// uint32_t *sub_8A0290(int a1);
// [0x8a06b0] (1092 bytes) sub_8A06B0
// unsigned int sub_8A06B0(int a1);
// [0x8a0b10] (1485 bytes) sub_8A0B10
// uint32_t *sub_8A0B10(uint32_t *a1, uint32_t *a2);
// [0x8a10e0] (2204 bytes) sub_8A10E0
// uint32_t *sub_8A10E0(int a1);
// [0x8a1980] (1570 bytes) sub_8A1980
// char *sub_8A1980(unsigned int *a1, unsigned int *a2, unsigned int *a3, int *a4);
// [0x8a1fb0] (857 bytes) sub_8A1FB0
// char *sub_8A1FB0(int a1, unsigned int *a2, int *a3);
// [0x8a2310] (500 bytes) sub_8A2310
// int sub_8A2310(int a1, int *a2, float *a3);
// [0x8a2510] (1144 bytes) sub_8A2510
// unsigned int sub_8A2510(int a1, char *src, char a3, char a4);
// [0x8a2990] (3096 bytes) sub_8A2990
// 0x8a2990 sub_8A2990
// [0x8a35b0] (4112 bytes) sub_8A35B0
// char *sub_8A35B0(int a1);
// [0x8a48f0] (205 bytes) sub_8A48F0
// int sub_8A48F0(glitch::scene::CEmptySceneNode *a1, int a2, char *s);
// [0x8a49c0] (177 bytes) sub_8A49C0
// int sub_8A49C0(glitch::scene::CEmptySceneNode *a1, int *a2, int a3, char *s);
// [0x8a4a80] (6209 bytes) sub_8A4A80
// char *sub_8A4A80(char *a1, uint8_t a2);
// [0x8a62d0] (1071 bytes) sub_8A62D0
// int sub_8A62D0( int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, uint32_t *a22, int a23, float a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, float a38, int a39);
// [0x8a6700] (402 bytes) sub_8A6700
// 0x8a6700 sub_8A6700
// [0x8a68a0] (3028 bytes) sub_8A68A0
// uint32_t *sub_8A68A0(int a1, int a2, int a3);
// [0x8a8030] (118 bytes) sub_8A8030
// int (**sub_8A8030(int a1))(int);
// [0x8a80b0] (720 bytes) sub_8A80B0
// void sub_8A80B0(int a1, std::vector<GLFUtils::FileListEntry> *a2, uint8_t a3);
// [0x8a8380] (90 bytes) sub_8A8380
// void sub_8A8380(int a1, std::vector<GLFUtils::FileListEntry> *a2, uint8_t a3);
// [0x8a83e0] (1053 bytes) sub_8A83E0
// void sub_8A83E0(int a1);
// [0x8a8800] (126 bytes) sub_8A8800
// void sub_8A8800(void *a1);
// [0x8a8880] (949 bytes) sub_8A8880
// int sub_8A8880(uint32_t *a1, uint32_t *a2, float a3, uint32_t *a4);
// [0x8a8c40] (5141 bytes) sub_8A8C40
// int sub_8A8C40(int a1, int a2);
// [0x8aa060] (2616 bytes) sub_8AA060
// int sub_8AA060(int a1, int a2);
// [0x8aaaa0] (4250 bytes) sub_8AAAA0
// uint32_t *sub_8AAAA0(int a1, int a2);
// [0x8abb40] (425 bytes) sub_8ABB40
// uint32_t *sub_8ABB40(uint32_t *a1, int a2, uint32_t **a3);
// [0x8abcf0] (590 bytes) sub_8ABCF0
// uint32_t *sub_8ABCF0(uint32_t *a1);
// [0x8abf40] (172 bytes) sub_8ABF40
// uint32_t *sub_8ABF40();
// [0x8abff0] (284 bytes) sub_8ABFF0
// uint32_t *sub_8ABFF0(uint32_t *a1, int a2, int *a3, int *a4);
// [0x8ac110] (215 bytes) sub_8AC110
// int sub_8AC110(int a1, int *a2);
// [0x8ac1f0] (786 bytes) sub_8AC1F0
// int sub_8AC1F0(const char *a1);
// [0x8ac510] (210 bytes) sub_8AC510
// int *sub_8AC510(int a1, int a2, unsigned int a3, int a4);
// [0x8ac5f0] (210 bytes) sub_8AC5F0
// int *sub_8AC5F0(int a1, int a2, unsigned int a3, int a4);
// [0x8ac6d0] (213 bytes) sub_8AC6D0
// uint32_t *sub_8AC6D0(uint32_t **a1, int a2);
// [0x8ac7b0] (1162 bytes) sub_8AC7B0
// char sub_8AC7B0(int a1, int a2);
// [0x8acc40] (9 bytes) sub_8ACC40
// int sub_8ACC40();
// [0x8acc50] (9 bytes) sub_8ACC50
// int sub_8ACC50();
// [0x8acc60] (9 bytes) sub_8ACC60
// int sub_8ACC60();
// [0x8acc70] (24 bytes) sub_8ACC70
// uint32_t *sub_8ACC70(uint32_t *a1);
// [0x8acc90] (9 bytes) sub_8ACC90
// int sub_8ACC90();
// [0x8acca0] (9 bytes) sub_8ACCA0
// int sub_8ACCA0();
// [0x8accb0] (9 bytes) sub_8ACCB0
// int sub_8ACCB0();
// [0x8accc0] (9 bytes) sub_8ACCC0
// int sub_8ACCC0();
// [0x8accd0] (9 bytes) sub_8ACCD0
// int sub_8ACCD0();
// [0x8acce8] (1 bytes) nullsub_311
// void nullsub_311();
// [0x8accf8] (1 bytes) nullsub_312
// void nullsub_312();
// [0x8acd00] (9 bytes) sub_8ACD00
// int sub_8ACD00();
// [0x8acd10] (9 bytes) sub_8ACD10
// int sub_8ACD10();
// [0x8acd20] (9 bytes) sub_8ACD20
// int sub_8ACD20();
// [0x8acd30] (9 bytes) sub_8ACD30
// int sub_8ACD30();
// [0x8acd40] (9 bytes) sub_8ACD40
// int sub_8ACD40();
// [0x8acd50] (9 bytes) sub_8ACD50
// int sub_8ACD50();
// [0x8acd60] (9 bytes) sub_8ACD60
// int sub_8ACD60();
// [0x8acd70] (9 bytes) sub_8ACD70
// int sub_8ACD70();
// [0x8acd80] (9 bytes) sub_8ACD80
// int sub_8ACD80();
// [0x8acd90] (9 bytes) sub_8ACD90
// int sub_8ACD90();
// [0x8acda0] (9 bytes) sub_8ACDA0
// int sub_8ACDA0();
// [0x8acdb0] (9 bytes) sub_8ACDB0
// int sub_8ACDB0();
// [0x8acdc0] (24 bytes) sub_8ACDC0
// uint32_t *sub_8ACDC0(uint32_t *a1);
// [0x8acde0] (9 bytes) sub_8ACDE0
// int sub_8ACDE0();
// [0x8acdf0] (9 bytes) sub_8ACDF0
// int sub_8ACDF0();
// [0x8ace00] (9 bytes) sub_8ACE00
// int sub_8ACE00();
// [0x8ace20] (9 bytes) sub_8ACE20
// int sub_8ACE20();
// [0x8ace30] (24 bytes) sub_8ACE30
// uint32_t *sub_8ACE30(uint32_t *a1);
// [0x8ace50] (35 bytes) sub_8ACE50
// uint32_t *sub_8ACE50(uint32_t *a1);
// [0x8ace80] (22 bytes) sub_8ACE80
// int *sub_8ACE80();
// [0x8acea8] (1 bytes) nullsub_313
// void nullsub_313();
// [0x8aceb8] (1 bytes) nullsub_314
// void nullsub_314();
// [0x8acec8] (1 bytes) nullsub_315
// void nullsub_315();
// [0x8aced0] (14 bytes) sub_8ACED0
// int sub_8ACED0(int a1);
// [0x8acee0] (15 bytes) sub_8ACEE0
// int sub_8ACEE0(int a1);
// [0x8acef0] (15 bytes) sub_8ACEF0
// long double sub_8ACEF0(int a1);
// [0x8acf00] (12 bytes) sub_8ACF00
// int sub_8ACF00();
// [0x8acf10] (15 bytes) sub_8ACF10
// int sub_8ACF10(int a1);
// [0x8acf20] (19 bytes) sub_8ACF20
// int sub_8ACF20(int a1);
// [0x8acf40] (15 bytes) sub_8ACF40
// int sub_8ACF40(int a1);
// [0x8acf50] (19 bytes) sub_8ACF50
// int sub_8ACF50(int a1);
// [0x8acf70] (16 bytes) sub_8ACF70
// int sub_8ACF70(int a1);
// [0x8acf80] (17 bytes) sub_8ACF80
// int sub_8ACF80(int a1, char a2);
// [0x8acfa0] (27 bytes) sub_8ACFA0
// char *sub_8ACFA0(int a1);
// [0x8acfc0] (16 bytes) sub_8ACFC0
// int sub_8ACFC0(int a1);
// [0x8acfd0] (27 bytes) sub_8ACFD0
// int sub_8ACFD0(int a1);
// [0x8acff0] (9 bytes) sub_8ACFF0
// long double sub_8ACFF0();
// [0x8ad000] (17 bytes) sub_8AD000
// int sub_8AD000(int a1, int a2);
// [0x8ad020] (25 bytes) sub_8AD020
// int sub_8AD020(int a1, int a2, int a3);
// [0x8ad048] (1 bytes) nullsub_316
// void nullsub_316();
// [0x8ad050] (12 bytes) sub_8AD050
// int sub_8AD050();
// [0x8ad068] (1 bytes) nullsub_317
// void nullsub_317();
// [0x8ad070] (44 bytes) sub_8AD070
// uint32_t *sub_8AD070(int a1);
// [0x8ad0a0] (44 bytes) sub_8AD0A0
// uint32_t *sub_8AD0A0(int a1);
// [0x8ad0d0] (15 bytes) sub_8AD0D0
// int sub_8AD0D0(int a1);
// [0x8ad0e0] (17 bytes) sub_8AD0E0
// int sub_8AD0E0(int a1, int a2);
// [0x8ad100] (18 bytes) sub_8AD100
// bool sub_8AD100(int a1, int a2);
// [0x8ad120] (17 bytes) sub_8AD120
// bool sub_8AD120(int a1);
// [0x8ad140] (12 bytes) sub_8AD140
// int sub_8AD140();
// [0x8ad150] (69 bytes) sub_8AD150
// long double sub_8AD150(int a1);
// [0x8ad1a0] (64 bytes) sub_8AD1A0
// long double sub_8AD1A0(int a1);
// [0x8ad1e0] (69 bytes) sub_8AD1E0
// long double sub_8AD1E0(int a1);
// [0x8ad230] (9 bytes) sub_8AD230
// int sub_8AD230();
// [0x8ad240] (12 bytes) sub_8AD240
// int sub_8AD240();
// [0x8ad250] (69 bytes) sub_8AD250
// bool sub_8AD250(int a1);
// [0x8ad2a0] (12 bytes) sub_8AD2A0
// int sub_8AD2A0();
// [0x8ad2b0] (15 bytes) sub_8AD2B0
// int sub_8AD2B0(int a1);
// [0x8ad2c0] (37 bytes) sub_8AD2C0
// long double sub_8AD2C0(int a1);
// [0x8ad2f0] (9 bytes) sub_8AD2F0
// int sub_8AD2F0();
// [0x8ad308] (1 bytes) nullsub_318
// void nullsub_318();
// [0x8ad318] (1 bytes) nullsub_319
// void nullsub_319();
// [0x8ad328] (1 bytes) nullsub_320
// void nullsub_320();
// [0x8ad330] (22 bytes) sub_8AD330
// long double sub_8AD330();
// [0x8ad358] (1 bytes) nullsub_321
// void nullsub_321();
// [0x8ad368] (1 bytes) nullsub_322
// void nullsub_322();
// [0x8ad370] (32 bytes) sub_8AD370
// int sub_8AD370(int a1);
// [0x8ad390] (9 bytes) sub_8AD390
// int sub_8AD390();
// [0x8ad3a0] (9 bytes) sub_8AD3A0
// int sub_8AD3A0();
// [0x8ad3c0] (22 bytes) sub_8AD3C0
// int *sub_8AD3C0();
// [0x8ad3e0] (15 bytes) sub_8AD3E0
// long double sub_8AD3E0(int a1);
// [0x8ad3f0] (9 bytes) sub_8AD3F0
// int sub_8AD3F0();
// [0x8ad400] (22 bytes) sub_8AD400
// int *sub_8AD400();
// [0x8ad420] (9 bytes) sub_8AD420
// int sub_8AD420();
// [0x8ad430] (9 bytes) sub_8AD430
// long double sub_8AD430();
// [0x8ad448] (1 bytes) nullsub_323
// void nullsub_323();
// [0x8ad458] (1 bytes) nullsub_324
// void nullsub_324();
// [0x8ad460] (9 bytes) sub_8AD460
// int sub_8AD460();
// [0x8ad470] (9 bytes) sub_8AD470
// int sub_8AD470();
// [0x8ad488] (1 bytes) nullsub_325
// void nullsub_325();
// [0x8ad498] (1 bytes) nullsub_326
// void nullsub_326();
// [0x8ad4b0] (24 bytes) sub_8AD4B0
// uint32_t *sub_8AD4B0(uint32_t *a1);
// [0x8ad4d0] (28 bytes) sub_8AD4D0
// int sub_8AD4D0(int a1);
// [0x8ad4f0] (22 bytes) sub_8AD4F0
// int *sub_8AD4F0();
// [0x8ad510] (12 bytes) sub_8AD510
// int sub_8AD510();
// [0x8ad520] (15 bytes) sub_8AD520
// long double sub_8AD520(int a1);
// [0x8ad530] (48 bytes) sub_8AD530
// long double sub_8AD530(int a1);
// [0x8ad560] (9 bytes) sub_8AD560
// int sub_8AD560();
// [0x8ad570] (9 bytes) sub_8AD570
// int sub_8AD570();
// [0x8ad580] (12 bytes) sub_8AD580
// int sub_8AD580(int a1);
// [0x8ad598] (1 bytes) nullsub_327
// void nullsub_327();
// [0x8ad5a0] (12 bytes) sub_8AD5A0
// int sub_8AD5A0(int a1);
// [0x8ad5b0] (9 bytes) sub_8AD5B0
// int sub_8AD5B0();
// [0x8ad5c0] (9 bytes) sub_8AD5C0
// int sub_8AD5C0();
// [0x8ad5d0] (9 bytes) sub_8AD5D0
// int sub_8AD5D0();
// [0x8ad5e0] (24 bytes) sub_8AD5E0
// uint32_t *sub_8AD5E0(uint32_t *a1);
// [0x8ad600] (24 bytes) sub_8AD600
// uint32_t *sub_8AD600(uint32_t *a1);
// [0x8ad620] (12 bytes) sub_8AD620
// int sub_8AD620();
// [0x8ad630] (24 bytes) sub_8AD630
// uint32_t *sub_8AD630(uint32_t *a1);
// [0x8ad650] (24 bytes) sub_8AD650
// uint32_t *sub_8AD650(uint32_t *a1);
// [0x8ad670] (24 bytes) sub_8AD670
// uint32_t *sub_8AD670(uint32_t *a1);
// [0x8ad690] (24 bytes) sub_8AD690
// uint32_t *sub_8AD690(uint32_t *a1);
// [0x8ad6b0] (24 bytes) sub_8AD6B0
// uint32_t *sub_8AD6B0(uint32_t *a1);
// [0x8ad6d0] (14 bytes) sub_8AD6D0
// int sub_8AD6D0(int a1, int a2);
// [0x8ad6e8] (1 bytes) nullsub_328
// void nullsub_328();
// [0x8ad6f0] (47 bytes) sub_8AD6F0
// const char *sub_8AD6F0(int a1);
// [0x8ad720] (28 bytes) sub_8AD720
// int sub_8AD720(int a1);
// [0x8ad740] (28 bytes) sub_8AD740
// int sub_8AD740(int a1);
// [0x8ad760] (28 bytes) sub_8AD760
// int sub_8AD760(int a1);
// [0x8ad788] (1 bytes) nullsub_329
// void nullsub_329();
// [0x8ad790] (12 bytes) sub_8AD790
// int sub_8AD790();
// [0x8ad7a8] (1 bytes) nullsub_330
// void nullsub_330();
// [0x8ad7b8] (1 bytes) nullsub_331
// void nullsub_331();
// [0x8ad7c0] (24 bytes) sub_8AD7C0
// int sub_8AD7C0(int a1, int a2);
// [0x8ad7e0] (24 bytes) sub_8AD7E0
// uint32_t *sub_8AD7E0(uint32_t *a1);
// [0x8ad808] (1 bytes) nullsub_332
// void nullsub_332();
// [0x8ad810] (24 bytes) sub_8AD810
// uint32_t *sub_8AD810(uint32_t *a1);
// [0x8ad830] (24 bytes) sub_8AD830
// uint32_t *sub_8AD830(uint32_t *a1);
// [0x8ad850] (24 bytes) sub_8AD850
// uint32_t *sub_8AD850(uint32_t *a1);
// [0x8ad870] (24 bytes) sub_8AD870
// uint32_t *sub_8AD870(uint32_t *a1);
// [0x8ad890] (24 bytes) sub_8AD890
// uint32_t *sub_8AD890(uint32_t *a1);
// [0x8ad8b0] (24 bytes) sub_8AD8B0
// uint32_t *sub_8AD8B0(uint32_t *a1);
// [0x8ad8d0] (24 bytes) sub_8AD8D0
// uint32_t *sub_8AD8D0(uint32_t *a1);
// [0x8ad8f0] (24 bytes) sub_8AD8F0
// uint32_t *sub_8AD8F0(uint32_t *a1);
// [0x8ad910] (9 bytes) sub_8AD910
// int sub_8AD910();
// [0x8ad920] (9 bytes) sub_8AD920
// int sub_8AD920();
// [0x8ad930] (28 bytes) sub_8AD930
// int sub_8AD930(int a1);
// [0x8ad950] (9 bytes) sub_8AD950
// int sub_8AD950();
// [0x8ad960] (9 bytes) sub_8AD960
// int sub_8AD960();
// [0x8ad970] (28 bytes) sub_8AD970
// int sub_8AD970(int a1);
// [0x8ad990] (9 bytes) sub_8AD990
// int sub_8AD990();
// [0x8ad9a0] (9 bytes) sub_8AD9A0
// int sub_8AD9A0();
// [0x8ad9b0] (9 bytes) sub_8AD9B0
// int sub_8AD9B0();
// [0x8ad9c0] (9 bytes) sub_8AD9C0
// int sub_8AD9C0();
// [0x8ad9d0] (9 bytes) sub_8AD9D0
// int sub_8AD9D0();
// [0x8ad9e0] (9 bytes) sub_8AD9E0
// int sub_8AD9E0();
// [0x8ad9f0] (14 bytes) sub_8AD9F0
// int sub_8AD9F0(int a1);
// [0x8ada00] (37 bytes) sub_8ADA00
// int sub_8ADA00(int a1, int a2);
// [0x8ada30] (12 bytes) sub_8ADA30
// int sub_8ADA30();
// [0x8ada40] (7 bytes) sub_8ADA40
// int sub_8ADA40(int a1, int a2);
// [0x8ada50] (14 bytes) sub_8ADA50
// int sub_8ADA50(int a1, int a2);
// [0x8ada60] (7 bytes) sub_8ADA60
// int sub_8ADA60(int a1);
// [0x8ada70] (12 bytes) sub_8ADA70
// int sub_8ADA70(int a1);
// [0x8ada88] (1 bytes) nullsub_333
// void nullsub_333();
// [0x8ada90] (54 bytes) sub_8ADA90
// uint32_t *sub_8ADA90(uint32_t *a1, uint32_t *a2);
// [0x8adad0] (27 bytes) sub_8ADAD0
// int sub_8ADAD0(int a1);
// [0x8adaf0] (27 bytes) sub_8ADAF0
// int sub_8ADAF0(int a1);
// [0x8adb10] (52 bytes) sub_8ADB10
// int sub_8ADB10(int a1, int a2);
// [0x8adb50] (27 bytes) sub_8ADB50
// int sub_8ADB50(int a1);
// [0x8adb70] (17 bytes) sub_8ADB70
// int sub_8ADB70(int a1, int a2, int a3);
// [0x8adb90] (15 bytes) sub_8ADB90
// int sub_8ADB90(int a1);
// [0x8adba0] (12 bytes) sub_8ADBA0
// int sub_8ADBA0();
// [0x8adbb0] (25 bytes) sub_8ADBB0
// char *sub_8ADBB0(uint32_t *a1);
// [0x8adbd0] (25 bytes) sub_8ADBD0
// char *sub_8ADBD0(uint32_t *a1);
// [0x8adbf8] (1 bytes) nullsub_334
// void nullsub_334();
// [0x8adc00] (9 bytes) sub_8ADC00
// int sub_8ADC00();
// [0x8adc18] (1 bytes) nullsub_335
// void nullsub_335();
// [0x8adc20] (14 bytes) sub_8ADC20
// int sub_8ADC20(int a1);
// [0x8adc30] (62 bytes) sub_8ADC30
// uint32_t *sub_8ADC30(uint32_t *a1, uint32_t *a2);
// [0x8adc78] (1 bytes) nullsub_336
// void nullsub_336();
// [0x8adc88] (1 bytes) nullsub_337
// void nullsub_337();
// [0x8adca0] (136 bytes) sub_8ADCA0
// int sub_8ADCA0(uint32_t *a1, uint32_t *a2);
// [0x8add40] (136 bytes) sub_8ADD40
// int sub_8ADD40(uint32_t *a1, uint32_t *a2);
// [0x8adde0] (136 bytes) sub_8ADDE0
// int sub_8ADDE0(uint32_t *a1, uint32_t *a2);
// [0x8ade80] (136 bytes) sub_8ADE80
// int sub_8ADE80(uint32_t *a1, uint32_t *a2);
// [0x8adf20] (136 bytes) sub_8ADF20
// int sub_8ADF20(uint32_t *a1, uint32_t *a2);
// [0x8adfb0] (9 bytes) sub_8ADFB0
// int sub_8ADFB0();
// [0x8adfc0] (24 bytes) sub_8ADFC0
// int sub_8ADFC0(int a1, int a2);
// [0x8adfe0] (27 bytes) sub_8ADFE0
// int sub_8ADFE0(int a1);
// [0x8ae000] (27 bytes) sub_8AE000
// int sub_8AE000(int a1);
// [0x8ae020] (132 bytes) sub_8AE020
// int sub_8AE020(int a1, int a2);
// [0x8ae0b0] (52 bytes) sub_8AE0B0
// int sub_8AE0B0(int a1, int a2);
// [0x8ae0f0] (27 bytes) sub_8AE0F0
// int sub_8AE0F0(int a1);
// [0x8ae110] (17 bytes) sub_8AE110
// int sub_8AE110(int a1, int a2, int a3);
// [0x8ae130] (15 bytes) sub_8AE130
// int sub_8AE130(int a1);
// [0x8ae140] (12 bytes) sub_8AE140
// int sub_8AE140();
// [0x8ae150] (25 bytes) sub_8AE150
// char *sub_8AE150(uint32_t *a1);
// [0x8ae170] (25 bytes) sub_8AE170
// char *sub_8AE170(uint32_t *a1);
// [0x8ae198] (1 bytes) nullsub_338
// void nullsub_338();
// [0x8ae1a0] (13 bytes) sub_8AE1A0
// uint32_t *sub_8AE1A0(uint32_t *a1);
// [0x8ae1b0] (14 bytes) sub_8AE1B0
// int sub_8AE1B0(int a1);
// [0x8ae1c0] (68 bytes) sub_8AE1C0
// uint32_t *sub_8AE1C0(uint32_t *a1, uint32_t *a2);
// [0x8ae210] (30 bytes) sub_8AE210
// int sub_8AE210(int a1, int a2);
// [0x8ae230] (57 bytes) sub_8AE230
// int sub_8AE230(int a1, int a2, uint16_t *a3, uint16_t *a4);
// [0x8ae270] (57 bytes) sub_8AE270
// int sub_8AE270(int a1, int a2, uint16_t *a3, uint16_t *a4);
// [0x8ae2b0] (55 bytes) sub_8AE2B0
// int sub_8AE2B0(int a1, int a2, uint32_t *a3, uint32_t *a4);
// [0x8ae2f0] (55 bytes) sub_8AE2F0
// int sub_8AE2F0(int a1, int a2, uint32_t *a3, uint32_t *a4);
// [0x8ae330] (125 bytes) sub_8AE330
// int sub_8AE330(int a1, int a2, int a3);
// [0x8ae3b0] (12 bytes) sub_8AE3B0
// int sub_8AE3B0();
// [0x8ae3c0] (67 bytes) sub_8AE3C0
// int sub_8AE3C0(int a1, int a2);
// [0x8ae410] (72 bytes) sub_8AE410
// int sub_8AE410(int a1, int a2, char a3);
// [0x8ae460] (34 bytes) sub_8AE460
// int sub_8AE460(int a1, int a2);
// [0x8ae490] (34 bytes) sub_8AE490
// int sub_8AE490(int a1, int a2);
// [0x8ae4c0] (12 bytes) sub_8AE4C0
// int sub_8AE4C0();
// [0x8ae4d0] (12 bytes) sub_8AE4D0
// int sub_8AE4D0();
// [0x8ae4e0] (12 bytes) sub_8AE4E0
// int sub_8AE4E0();
// [0x8ae4f0] (12 bytes) sub_8AE4F0
// int sub_8AE4F0();
// [0x8ae500] (15 bytes) sub_8AE500
// int sub_8AE500(int a1, int a2);
// [0x8ae510] (12 bytes) sub_8AE510
// int sub_8AE510();
// [0x8ae520] (9 bytes) sub_8AE520
// int sub_8AE520();
// [0x8ae538] (1 bytes) nullsub_339
// void nullsub_339();
// [0x8ae540] (9 bytes) sub_8AE540
// int sub_8AE540();
// [0x8ae550] (9 bytes) sub_8AE550
// int sub_8AE550();
// [0x8ae568] (1 bytes) nullsub_340
// void nullsub_340();
// [0x8ae570] (35 bytes) sub_8AE570
// int sub_8AE570(int a1, int a2);
// [0x8ae5a0] (35 bytes) sub_8AE5A0
// int sub_8AE5A0(int a1, int a2);
// [0x8ae5d0] (28 bytes) sub_8AE5D0
// int sub_8AE5D0(int a1, int a2, int a3);
// [0x8ae5f0] (28 bytes) sub_8AE5F0
// int sub_8AE5F0(int a1, int a2, int a3);
// [0x8ae610] (26 bytes) sub_8AE610
// uint32_t *sub_8AE610(uint32_t *a1, int a2, int a3);
// [0x8ae630] (26 bytes) sub_8AE630
// uint32_t *sub_8AE630(uint32_t *a1, int a2, int a3);
// [0x8ae658] (1 bytes) nullsub_341
// void nullsub_341();
// [0x8ae660] (24 bytes) sub_8AE660
// uint32_t *sub_8AE660(uint32_t *a1);
// [0x8ae680] (79 bytes) sub_8AE680
// int sub_8AE680(int a1, int a2, int a3, int a4, int a5, int a6);
// [0x8ae6d0] (63 bytes) sub_8AE6D0
// int sub_8AE6D0(int a1, int a2, int a3, int a4, int a5);
// [0x8ae718] (1 bytes) nullsub_342
// void nullsub_342();
// [0x8ae728] (1 bytes) nullsub_343
// void nullsub_343();
// [0x8ae738] (1 bytes) nullsub_344
// void nullsub_344();
// [0x8ae748] (1 bytes) nullsub_345
// void nullsub_345();
// [0x8ae750] (42 bytes) sub_8AE750
// void sub_8AE750(uint32_t *a1);
// [0x8ae780] (42 bytes) sub_8AE780
// void sub_8AE780(uint32_t *a1);
// [0x8ae7b0] (42 bytes) sub_8AE7B0
// void sub_8AE7B0(uint32_t *a1);
// [0x8ae7e0] (42 bytes) sub_8AE7E0
// void sub_8AE7E0(uint32_t *a1);
// [0x8ae810] (42 bytes) sub_8AE810
// void sub_8AE810(uint32_t *a1);
// [0x8ae840] (42 bytes) sub_8AE840
// void sub_8AE840(uint32_t *a1);
// [0x8ae870] (42 bytes) sub_8AE870
// void sub_8AE870(uint32_t *a1);
// [0x8ae8a0] (42 bytes) sub_8AE8A0
// void sub_8AE8A0(uint32_t *a1);
// [0x8ae8d0] (42 bytes) sub_8AE8D0
// void sub_8AE8D0(uint32_t *a1);
// [0x8ae900] (42 bytes) sub_8AE900
// void sub_8AE900(uint32_t *a1);
// [0x8ae930] (42 bytes) sub_8AE930
// void sub_8AE930(uint32_t *a1);
// [0x8ae960] (42 bytes) sub_8AE960
// void sub_8AE960(uint32_t *a1);
// [0x8ae990] (42 bytes) sub_8AE990
// void sub_8AE990(uint32_t *a1);
// [0x8ae9c0] (42 bytes) sub_8AE9C0
// void sub_8AE9C0(uint32_t *a1);
// [0x8ae9f0] (53 bytes) sub_8AE9F0
// void sub_8AE9F0(uint32_t *a1);
// [0x8aea30] (42 bytes) sub_8AEA30
// void sub_8AEA30(uint32_t *a1);
// [0x8aea60] (42 bytes) sub_8AEA60
// void sub_8AEA60(uint32_t *a1);
// [0x8aea90] (42 bytes) sub_8AEA90
// void sub_8AEA90(uint32_t *a1);
// [0x8aeac0] (46 bytes) sub_8AEAC0
// void sub_8AEAC0(uint8_t *a1);
// [0x8aeaf0] (46 bytes) sub_8AEAF0
// void sub_8AEAF0(uint8_t *a1);
// [0x8aeb20] (46 bytes) sub_8AEB20
// void sub_8AEB20(uint8_t *a1);
// [0x8aeb50] (46 bytes) sub_8AEB50
// void sub_8AEB50(uint8_t *a1);
// [0x8aeb80] (42 bytes) sub_8AEB80
// void sub_8AEB80(uint32_t *a1);
// [0x8aebb0] (42 bytes) sub_8AEBB0
// void sub_8AEBB0(uint32_t *a1);
// [0x8aebe0] (42 bytes) sub_8AEBE0
// void sub_8AEBE0(uint32_t *a1);
// [0x8aec10] (37 bytes) sub_8AEC10
// void sub_8AEC10(int a1);
// [0x8aec40] (37 bytes) sub_8AEC40
// void sub_8AEC40(int a1);
// [0x8aec70] (71 bytes) sub_8AEC70
// int (**sub_8AEC70(int a1))(int);
// [0x8aecc0] (42 bytes) sub_8AECC0
// void sub_8AECC0(glitch::io::CGlfFileSystem *a1);
// [0x8aecf0] (42 bytes) sub_8AECF0
// void sub_8AECF0(glitch::collada::CColladaFactory *a1);
// [0x8aed20] (42 bytes) sub_8AED20
// void sub_8AED20(glitch::video::ITexturePolicySelector *a1);
// [0x8aed50] (42 bytes) sub_8AED50
// void sub_8AED50(glitch::CIrrFactory *a1);
// [0x8aed80] (15 bytes) sub_8AED80
// int sub_8AED80(glitch::scene::ISceneNode *a1);
// [0x8aed90] (15 bytes) sub_8AED90
// int sub_8AED90(glitch::scene::ISceneNode *a1);
// [0x8aeda0] (137 bytes) sub_8AEDA0
// int (**sub_8AEDA0(glitch::scene::ISceneNode *a1))(int);
// [0x8aee30] (45 bytes) sub_8AEE30
// int sub_8AEE30(uint32_t *a1);
// [0x8aee60] (67 bytes) sub_8AEE60
// int (**sub_8AEE60(uint32_t *a1))(int);
// [0x8aeeb0] (15 bytes) sub_8AEEB0
// int sub_8AEEB0(glitch::collada::CMeshSceneNode *a1);
// [0x8aeec0] (15 bytes) sub_8AEEC0
// int sub_8AEEC0(glitch::collada::CMeshSceneNode *a1);
// [0x8aeed0] (113 bytes) sub_8AEED0
// int (**sub_8AEED0(glitch::collada::CMeshSceneNode *a1))(int);
// [0x8aef50] (15 bytes) sub_8AEF50
// int sub_8AEF50(glitch::collada::CMeshSceneNode *a1);
// [0x8aef60] (15 bytes) sub_8AEF60
// int sub_8AEF60(glitch::collada::CMeshSceneNode *a1);
// [0x8aef70] (113 bytes) sub_8AEF70
// int (**sub_8AEF70(glitch::collada::CMeshSceneNode *a1))(int);
// [0x8aeff0] (42 bytes) sub_8AEFF0
// void sub_8AEFF0(glf::Task *a1);
// [0x8af020] (73 bytes) sub_8AF020
// 0x8af020 sub_8AF020
// [0x8af070] (42 bytes) sub_8AF070
// void sub_8AF070(glitch::io::CZipReader *a1);
// [0x8af0a0] (43 bytes) sub_8AF0A0
// int sub_8AF0A0(int a1);
// [0x8af0d0] (37 bytes) sub_8AF0D0
// int sub_8AF0D0(int a1);
// [0x8af100] (76 bytes) sub_8AF100
// int sub_8AF100(int a1);
// [0x8af150] (43 bytes) sub_8AF150
// int sub_8AF150(int a1);
// [0x8af180] (59 bytes) sub_8AF180
// int sub_8AF180(int a1, int a2);
// [0x8af1c0] (53 bytes) sub_8AF1C0
// int sub_8AF1C0(int a1, int a2, int a3);
// [0x8af200] (45 bytes) sub_8AF200
// bool sub_8AF200(int a1);
// [0x8af230] (44 bytes) sub_8AF230
// bool sub_8AF230(int a1);
// [0x8af260] (55 bytes) sub_8AF260
// int sub_8AF260(int a1);
// [0x8af2a0] (91 bytes) sub_8AF2A0
// void sub_8AF2A0(uint32_t *a1, uint32_t *a2);
// [0x8af300] (123 bytes) sub_8AF300
// int sub_8AF300(uint32_t *a1, int a2);
// [0x8af380] (91 bytes) sub_8AF380
// void sub_8AF380(uint32_t *a1, uint32_t *a2);
// [0x8af3e0] (123 bytes) sub_8AF3E0
// int sub_8AF3E0(uint32_t *a1, int a2);
// [0x8af460] (91 bytes) sub_8AF460
// void sub_8AF460(uint32_t *a1, uint32_t *a2);
// [0x8af4c0] (123 bytes) sub_8AF4C0
// int sub_8AF4C0(uint32_t *a1, int a2);
// [0x8af540] (91 bytes) sub_8AF540
// void sub_8AF540(uint32_t *a1, uint32_t *a2);
// [0x8af5a0] (123 bytes) sub_8AF5A0
// int sub_8AF5A0(uint32_t *a1, int a2);
// [0x8af620] (91 bytes) sub_8AF620
// void sub_8AF620(uint32_t *a1, uint32_t *a2);
// [0x8af680] (123 bytes) sub_8AF680
// int sub_8AF680(uint32_t *a1, int a2);
// [0x8af700] (103 bytes) sub_8AF700
// int sub_8AF700(glitch::io::CGlfFileSystem *a1, char *a2, bool a3, bool a4, unsigned int a5);
// [0x8af770] (82 bytes) sub_8AF770
// bool sub_8AF770(int a1, int a2, char a3);
// [0x8af7c2] (33 bytes) sub_8AF7C2
// void __noreturn sub_8AF7C2(int a1);
// [0x8af7e4] (33 bytes) sub_8AF7E4
// void __noreturn sub_8AF7E4(int a1);
// [0x8af810] (99 bytes) sub_8AF810
// uint32_t *sub_8AF810(int a1, int a2, uint32_t *a3);
// [0x8af880] (136 bytes) sub_8AF880
// int sub_8AF880(int a1, int a2, uint32_t *a3);
// [0x8af910] (82 bytes) sub_8AF910
// int sub_8AF910(int a1);
// [0x8af970] (75 bytes) sub_8AF970
// void sub_8AF970(uint32_t *a1);
// [0x8af9c0] (64 bytes) sub_8AF9C0
// void sub_8AF9C0(glitch::video::ITexturePolicySelector *a1);
// [0x8afa00] (64 bytes) sub_8AFA00
// void sub_8AFA00(glf::Task *a1);
// [0x8afa40] (64 bytes) sub_8AFA40
// void sub_8AFA40(glitch::io::CGlfFileSystem *a1);
// [0x8afa80] (64 bytes) sub_8AFA80
// void sub_8AFA80(glitch::CIrrFactory *a1);
// [0x8afac0] (67 bytes) sub_8AFAC0
// void sub_8AFAC0(uint32_t *a1);
// [0x8afb10] (75 bytes) sub_8AFB10
// void sub_8AFB10(glf::debugger::Tweakable *a1);
// [0x8afb60] (64 bytes) sub_8AFB60
// void sub_8AFB60(glitch::collada::CColladaFactory *a1);
// [0x8afba0] (64 bytes) sub_8AFBA0
// void sub_8AFBA0(glitch::io::CZipReader *a1);
// [0x8afbe0] (42 bytes) sub_8AFBE0
// void sub_8AFBE0(glitch::collada::CColladaFactory *a1);
// [0x8afc10] (64 bytes) sub_8AFC10
// void sub_8AFC10(glitch::collada::CColladaFactory *a1);
// [0x8afc50] (135 bytes) sub_8AFC50
// int sub_8AFC50(int a1, const char **a2);
// [0x8afce0] (79 bytes) sub_8AFCE0
// void sub_8AFCE0(void **a1);
// [0x8afd30] (83 bytes) sub_8AFD30
// void sub_8AFD30(glf::debugger::Tweakable *a1);
// [0x8afd90] (104 bytes) sub_8AFD90
// void sub_8AFD90(uint32_t *a1);
// [0x8afe00] (96 bytes) sub_8AFE00
// int (**sub_8AFE00(uint32_t *a1))(int);
// [0x8afe60] (15 bytes) sub_8AFE60
// int sub_8AFE60(glitch::collada::CMeshSceneNode *a1);
// [0x8afe70] (15 bytes) sub_8AFE70
// int sub_8AFE70(glitch::collada::CMeshSceneNode *a1);
// [0x8afe80] (121 bytes) sub_8AFE80
// void sub_8AFE80(glitch::collada::CMeshSceneNode *a1);
// [0x8aff00] (15 bytes) sub_8AFF00
// int sub_8AFF00(glitch::collada::CMeshSceneNode *a1);
// [0x8aff10] (15 bytes) sub_8AFF10
// int sub_8AFF10(glitch::collada::CMeshSceneNode *a1);
// [0x8aff20] (121 bytes) sub_8AFF20
// void sub_8AFF20(glitch::collada::CMeshSceneNode *a1);
// [0x8affa0] (15 bytes) sub_8AFFA0
// int sub_8AFFA0(glitch::scene::ISceneNode *a1);
// [0x8affb0] (15 bytes) sub_8AFFB0
// int sub_8AFFB0(glitch::scene::ISceneNode *a1);
// [0x8affc0] (176 bytes) sub_8AFFC0
// int (**sub_8AFFC0(glitch::scene::ISceneNode *a1))(int);
// [0x8b0070] (15 bytes) sub_8B0070
// int sub_8B0070(glitch::scene::ISceneNode *a1);
// [0x8b0080] (15 bytes) sub_8B0080
// int sub_8B0080(glitch::scene::ISceneNode *a1);
// [0x8b0090] (145 bytes) sub_8B0090
// void sub_8B0090(glitch::scene::ISceneNode *a1);
// [0x8b0130] (15 bytes) sub_8B0130
// int sub_8B0130(glitch::scene::ISceneNode *a1);
// [0x8b0140] (15 bytes) sub_8B0140
// int sub_8B0140(glitch::scene::ISceneNode *a1);
// [0x8b0150] (184 bytes) sub_8B0150
// void sub_8B0150(glitch::scene::ISceneNode *a1);
// [0x8b0210] (186 bytes) sub_8B0210
// int sub_8B0210(uint32_t *a1);
// [0x8b02d0] (77 bytes) sub_8B02D0
// bool sub_8B02D0(int a1, int a2);
// [0x8b0320] (93 bytes) sub_8B0320
// int sub_8B0320(int a1, int a2);
// [0x8b0380] (101 bytes) sub_8B0380
// int sub_8B0380(int a1, int a2);
// [0x8b03f0] (69 bytes) sub_8B03F0
// int sub_8B03F0(int a1, int a2);
// [0x8b0440] (69 bytes) sub_8B0440
// int sub_8B0440(int a1, int a2);
// [0x8b0490] (193 bytes) sub_8B0490
// int sub_8B0490(int a1, int a2, char a3);
// [0x8b0560] (77 bytes) sub_8B0560
// bool sub_8B0560(int a1, int a2);
// [0x8b05b0] (224 bytes) sub_8B05B0
// int sub_8B05B0(int a1, int a2, int a3);
// [0x8b0690] (130 bytes) sub_8B0690
// int sub_8B0690(uint32_t *a1);
// [0x8b0720] (142 bytes) sub_8B0720
// void sub_8B0720(uint32_t *a1);
// [0x8b07b0] (7 bytes) sub_8B07B0
// int sub_8B07B0(int a1);
// [0x8b07c0] (1108 bytes) sub_8B07C0
// int sub_8B07C0(uint32_t *a1);
// [0x8b0c20] (1024 bytes) sub_8B0C20
// int sub_8B0C20(int a1, unsigned int a2, int a3, unsigned int a4, int **a5, int a6, int a7);
// [0x8b1020] (735 bytes) sub_8B1020
// void sub_8B1020(int a1);
// [0x8b1300] (617 bytes) sub_8B1300
// int sub_8B1300(uint32_t *a1);
// [0x8b1570] (538 bytes) sub_8B1570
// glitch::core *sub_8B1570(int a1, uint32_t *a2, int a3);
// [0x8b1790] (874 bytes) sub_8B1790
// void sub_8B1790(float *a1, float *a2);
// [0x8b1b00] (13 bytes) sub_8B1B00
// volatile int32_t *sub_8B1B00(volatile int32_t *a1);
// [0x8b1b10] (13 bytes) sub_8B1B10
// uint32_t *sub_8B1B10(uint32_t *a1);
// [0x8b1b20] (28 bytes) sub_8B1B20
// uint32_t *sub_8B1B20(uint32_t *a1);
// [0x8b1b40] (28 bytes) sub_8B1B40
// uint32_t *sub_8B1B40(uint32_t *a1);
// [0x8b1b60] (28 bytes) sub_8B1B60
// uint32_t *sub_8B1B60(uint32_t *a1);
// [0x8b1b80] (111 bytes) sub_8B1B80
// volatile int32_t **sub_8B1B80(volatile int32_t **a1, int a2, glf::Fs *a3);
// [0x8b1bf0] (13 bytes) sub_8B1BF0
// uint32_t *sub_8B1BF0(uint32_t *a1);
// [0x8b1c00] (13 bytes) sub_8B1C00
// uint32_t *sub_8B1C00(uint32_t *a1);
// [0x8b1c10] (13 bytes) sub_8B1C10
// uint32_t *sub_8B1C10(uint32_t *a1);
// [0x8b1c20] (13 bytes) sub_8B1C20
// uint32_t *sub_8B1C20(uint32_t *a1);
// [0x8b1c30] (46 bytes) sub_8B1C30
// uint32_t *sub_8B1C30(uint32_t *a1, int a2);
// [0x8b1c60] (46 bytes) sub_8B1C60
// uint32_t *sub_8B1C60(uint32_t *a1, int a2);
// [0x8b1c90] (50 bytes) sub_8B1C90
// volatile int32_t **sub_8B1C90(volatile int32_t **a1, int a2, int a3);
// [0x8b1cd0] (13 bytes) sub_8B1CD0
// uint32_t *sub_8B1CD0(uint32_t *a1);
// [0x8b1ce0] (52 bytes) sub_8B1CE0
// int *sub_8B1CE0(int *a1, int a2, int a3);
// [0x8b1d20] (40 bytes) sub_8B1D20
// uint32_t *sub_8B1D20(uint32_t *a1, int a2);
// [0x8b1d50] (50 bytes) sub_8B1D50
// volatile int32_t **sub_8B1D50(volatile int32_t **a1, int a2, int a3);
// [0x8b1d90] (756 bytes) sub_8B1D90
// int sub_8B1D90(uint32_t *a1, int a2, int a3, int a4, char a5, int a6, int a7, int a8);
// [0x8b2090] (395 bytes) sub_8B2090
// volatile int32_t *sub_8B2090( int a1, int a2, const boost::intrusive_ptr<glitch::io::IReadFile> *a3, int a4, char a5);
// [0x8b2220] (134 bytes) sub_8B2220
// int (**sub_8B2220(int a1))(int);
// [0x8b22b0] (15 bytes) sub_8B22B0
// int sub_8B22B0(glitch::collada::ISceneNodeAnimator *a1);
// [0x8b22c0] (7 bytes) sub_8B22C0
// int sub_8B22C0(int a1);
// [0x8b22d0] (206 bytes) sub_8B22D0
// int (**sub_8B22D0(glitch::collada::ISceneNodeAnimator *a1))(int);
// [0x8b23a0] (116 bytes) sub_8B23A0
// uint32_t *sub_8B23A0(uint32_t *a1, int a2);
// [0x8b2420] (15 bytes) sub_8B2420
// int sub_8B2420(glitch::scene::CSceneManager *a1);
// [0x8b2430] (15 bytes) sub_8B2430
// int sub_8B2430(glitch::scene::CSceneManager *a1);
// [0x8b2440] (199 bytes) sub_8B2440
// int (**sub_8B2440(glitch::scene::CSceneManager *a1))(int);
// [0x8b2510] (15 bytes) sub_8B2510
// int sub_8B2510(glitch::scene::CSceneManager *a1);
// [0x8b2520] (15 bytes) sub_8B2520
// int sub_8B2520(glitch::scene::CSceneManager *a1);
// [0x8b2530] (207 bytes) sub_8B2530
// void sub_8B2530(glitch::scene::CSceneManager *a1);
// [0x8b2600] (142 bytes) sub_8B2600
// void sub_8B2600(void *a1);
// [0x8b2690] (101 bytes) sub_8B2690
// uint32_t *sub_8B2690(uint32_t *a1);
// [0x8b2700] (111 bytes) sub_8B2700
// uint32_t *sub_8B2700(uint32_t *a1);
// [0x8b2770] (96 bytes) sub_8B2770
// void sub_8B2770(uint32_t *a1);
// [0x8b27d0] (96 bytes) sub_8B27D0
// void sub_8B27D0(uint32_t *a1);
// [0x8b2830] (101 bytes) sub_8B2830
// uint32_t *sub_8B2830(uint32_t *a1);
// [0x8b28a0] (112 bytes) sub_8B28A0
// void sub_8B28A0(uint32_t *a1);
// [0x8b2910] (75 bytes) sub_8B2910
// void sub_8B2910(int a1);
// [0x8b2960] (25 bytes) sub_8B2960
// volatile int32_t *sub_8B2960(volatile int32_t **a1);
// [0x8b2980] (15 bytes) sub_8B2980
// int sub_8B2980(glitch::scene::ISceneNode *a1);
// [0x8b2990] (15 bytes) sub_8B2990
// int sub_8B2990(glitch::scene::ISceneNode *a1);
// [0x8b29a0] (242 bytes) sub_8B29A0
// int (**sub_8B29A0(glitch::scene::ISceneNode *a1))(int);
// [0x8b2aa0] (15 bytes) sub_8B2AA0
// int sub_8B2AA0(glitch::scene::ISceneNode *a1);
// [0x8b2ab0] (15 bytes) sub_8B2AB0
// int sub_8B2AB0(glitch::scene::ISceneNode *a1);
// [0x8b2ac0] (434 bytes) sub_8B2AC0
// int (**sub_8B2AC0(glitch::scene::ISceneNode *a1))(int);
// [0x8b2c80] (15 bytes) sub_8B2C80
// int sub_8B2C80(glitch::scene::ISceneNode *a1);
// [0x8b2c90] (15 bytes) sub_8B2C90
// int sub_8B2C90(glitch::scene::ISceneNode *a1);
// [0x8b2ca0] (56 bytes) sub_8B2CA0
// void sub_8B2CA0(glitch::scene::ISceneNode *a1);
// [0x8b2ce0] (15 bytes) sub_8B2CE0
// int sub_8B2CE0(glitch::scene::ISceneNode *a1);
// [0x8b2cf0] (15 bytes) sub_8B2CF0
// int sub_8B2CF0(glitch::scene::ISceneNode *a1);
// [0x8b2d00] (492 bytes) sub_8B2D00
// int (**sub_8B2D00(glitch::scene::ISceneNode *a1))(int);
// [0x8b2ef0] (15 bytes) sub_8B2EF0
// int sub_8B2EF0(glitch::scene::ISceneNode *a1);
// [0x8b2f00] (15 bytes) sub_8B2F00
// int sub_8B2F00(glitch::scene::ISceneNode *a1);
// [0x8b2f10] (56 bytes) sub_8B2F10
// void sub_8B2F10(glitch::scene::ISceneNode *a1);
// [0x8b2f50] (534 bytes) sub_8B2F50
// volatile int32_t **sub_8B2F50(uint32_t *a1, int a2);
// [0x8b3170] (15 bytes) sub_8B3170
// int sub_8B3170(glitch::scene::ISceneNode *a1);
// [0x8b3180] (15 bytes) sub_8B3180
// int sub_8B3180(glitch::scene::ISceneNode *a1);
// [0x8b3190] (226 bytes) sub_8B3190
// void sub_8B3190(glitch::scene::ISceneNode *a1);
// [0x8b3280] (15 bytes) sub_8B3280
// int sub_8B3280(glitch::collada::ISceneNodeAnimator *a1);
// [0x8b3290] (7 bytes) sub_8B3290
// int sub_8B3290(int a1);
// [0x8b32a0] (211 bytes) sub_8B32A0
// void sub_8B32A0(glitch::collada::ISceneNodeAnimator *a1);
// [0x8b3380] (15 bytes) sub_8B3380
// int sub_8B3380(glitch::collada::ISceneNodeAnimator *a1);
// [0x8b3390] (7 bytes) sub_8B3390
// int sub_8B3390(int a1);
// [0x8b33a0] (214 bytes) sub_8B33A0
// void sub_8B33A0(glitch::collada::ISceneNodeAnimator *a1);
// [0x8b3480] (15 bytes) sub_8B3480
// int sub_8B3480(glitch::collada::ISceneNodeAnimator *a1);
// [0x8b3490] (7 bytes) sub_8B3490
// int sub_8B3490(int a1);
// [0x8b34a0] (203 bytes) sub_8B34A0
// int (**sub_8B34A0(glitch::collada::ISceneNodeAnimator *a1))(int);
// [0x8b3570] (111 bytes) sub_8B3570
// int sub_8B3570(glitch::video::CMaterialRenderer *a1, glitch::core::detail::SSharedStringHeapEntry::SData *a2);
// [0x8b35e0] (241 bytes) sub_8B35E0
// int sub_8B35E0(glitch::video::CMaterial *a1, uint8_t a2);
// [0x8b36e0] (598 bytes) sub_8B36E0
// int sub_8B36E0(glitch::video::CMaterialRenderer **a1, glitch::video::CMaterialRenderer **a2);
// [0x8b3940] (393 bytes) sub_8B3940
// int sub_8B3940(glitch::video::CMaterialRenderer **a1);
// [0x8b3ad0] (917 bytes) sub_8B3AD0
// char sub_8B3AD0(glitch::video::CMaterialRenderer **a1, glitch::video::CMaterialRenderer **a2);
// [0x8b3e70] (237 bytes) sub_8B3E70
// float *sub_8B3E70(float *a1, float *a2);
// [0x8b3f60] (58 bytes) sub_8B3F60
// int sub_8B3F60(int a1);
// [0x8b3fa0] (66 bytes) sub_8B3FA0
// int sub_8B3FA0(int a1);
// [0x8b3ff0] (73 bytes) sub_8B3FF0
// glitch::collada::CColladaFactory *sub_8B3FF0(glitch::collada::CColladaFactory *a1);
// [0x8b4040] (89 bytes) sub_8B4040
// int sub_8B4040(int a1);
// [0x8b40a0] (41 bytes) sub_8B40A0
// int sub_8B40A0(int a1);
// [0x8b40d0] (41 bytes) sub_8B40D0
// int sub_8B40D0(int a1);
// [0x8b4100] (59 bytes) sub_8B4100
// int sub_8B4100(int a1, int a2, int a3, int a4);
// [0x8b4140] (2144 bytes) sub_8B4140
// uint32_t *sub_8B4140(int a1);
// [0x8b49a0] (130 bytes) sub_8B49A0
// int sub_8B49A0(uint32_t *a1);
// [0x8b4a30] (1662 bytes) sub_8B4A30
// int sub_8B4A30(int a1, uint32_t *a2);
// [0x8b50b0] (207 bytes) sub_8B50B0
// int sub_8B50B0(int a1);
// [0x8b5180] (432 bytes) sub_8B5180
// int (**sub_8B5180(int a1))(int);
// [0x8b5330] (249 bytes) sub_8B5330
// void sub_8B5330(void *a1);
// [0x8b5430] (241 bytes) sub_8B5430
// int (**sub_8B5430(int a1))(int);
// [0x8b5530] (297 bytes) sub_8B5530
// int (**sub_8B5530(int a1))(int);
// [0x8b5660] (305 bytes) sub_8B5660
// void sub_8B5660(void *a1);
// [0x8b57a0] (56 bytes) sub_8B57A0
// void sub_8B57A0(void *a1);
// [0x8b57e0] (61 bytes) std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::~basic_string()
// void std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::~basic_string(;
// [0x8b5820] (71 bytes) sub_8B5820
// glitch::collada::CColladaFactory *sub_8B5820( glitch::collada::CColladaFactory *a1, int a2, char *a3, char *a4, int a5);
// [0x8b5870] (2643 bytes) sub_8B5870
// 0x8b5870 sub_8B5870
// [0x8b62d0] (945 bytes) sub_8B62D0
// int sub_8B62D0( int a1, uint32_t *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, volatile int32_t *a15);
// [0x8b6690] (1161 bytes) std::basic_stringstream<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::str(void)const
// std::basic_stringstream<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *std::basic_stringstream<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::str(;
// [0x8b6b20] (15 bytes) sub_8B6B20
// int sub_8B6B20(char *a1);
// [0x8b6b30] (15 bytes) sub_8B6B30
// int sub_8B6B30(char *a1);
// [0x8b6b40] (7 bytes) sub_8B6B40
// int sub_8B6B40(int a1);
// [0x8b6b50] (285 bytes) sub_8B6B50
// void sub_8B6B50(char *a1);
// [0x8b6c70] (119 bytes) sub_8B6C70
// int sub_8B6C70(int a1, int a2);
// [0x8b6cf0] (15 bytes) sub_8B6CF0
// int sub_8B6CF0(uint32_t *a1);
// [0x8b6d00] (15 bytes) sub_8B6D00
// int sub_8B6D00(uint32_t *a1);
// [0x8b6d10] (7 bytes) sub_8B6D10
// int sub_8B6D10(int a1);
// [0x8b6d20] (277 bytes) sub_8B6D20
// int (**sub_8B6D20(int a1))(int);
// [0x8b6e40] (1416 bytes) sub_8B6E40
// int sub_8B6E40(int a1, int a2);
// [0x8b73d0] (223 bytes) sub_8B73D0
// unsigned int sub_8B73D0(int a1, unsigned int a2, glitch::video::CMaterial **a3, volatile int32_t **a4);
// [0x8b74b0] (144 bytes) sub_8B74B0
// float *sub_8B74B0(float *a1, float *a2);
// [0x8b7540] (560 bytes) sub_8B7540
// int sub_8B7540(int a1, int a2);
// [0x8b7770] (547 bytes) sub_8B7770
// int sub_8B7770(int a1, int a2);
// [0x8b79a0] (137 bytes) sub_8B79A0
// uint32_t *sub_8B79A0(int a1);
// [0x8b7a30] (297 bytes) sub_8B7A30
// int sub_8B7A30(int a1, char *a2, int a3, int a4);
// [0x8b7b60] (168 bytes) sub_8B7B60
// int sub_8B7B60(int a1, char *a2, int a3, int a4);
// [0x8b7c10] (329 bytes) std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::append(char const*)
// std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::append(;
// [0x8b7d60] (77 bytes) sub_8B7D60
// long double sub_8B7D60(float *a1, float *a2);
// [0x8b7db0] (78 bytes) sub_8B7DB0
// int sub_8B7DB0(int a1);
// [0x8b7e00] (437 bytes) std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::basic_string(std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const&,unsigned int,unsigned int)
// std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::basic_string(;
// [0x8b7fc0] (260 bytes) sub_8B7FC0
// int *sub_8B7FC0();
// [0x8b80d0] (71 bytes) sub_8B80D0
// int *sub_8B80D0(int *a1, int a2, int a3, int a4, int a5);
// [0x8b8120] (1454 bytes) sub_8B8120
// int sub_8B8120(uint32_t *a1, int a2, int *a3, char a4);
// [0x8b86d0] (108 bytes) sub_8B86D0
// int sub_8B86D0(int **a1, char a2);
// [0x8b8740] (136 bytes) std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::push_back(char)
// int std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::push_back(;
// [0x8b87d0] (78 bytes) sub_8B87D0
// char *sub_8B87D0( int a1, int a2, const void **a3, const char **a4, int a5, std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a6, std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a7);
// [0x8b8820] (407 bytes) sub_8B8820
// int sub_8B8820(int a1, char *a2, int a3);
// [0x8b89c0] (407 bytes) sub_8B89C0
// int sub_8B89C0(int a1, char *a2, int a3);
// [0x8b8b60] (407 bytes) sub_8B8B60
// int sub_8B8B60(int a1, char *a2, int a3);
// [0x8b8d00] (1079 bytes) sub_8B8D00
// void sub_8B8D00(uint32_t *a1, int a2, char *a3, char *a4);
// [0x8b9140] (712 bytes) std::vector<boost::intrusive_ptr<glitch::scene::ICuller>,glitch::core::SAllocator<boost::intrusive_ptr<glitch::scene::ICuller>,(glitch::memory::E_MEMORY_HINT)0>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<glitch::scene::ICuller>*,std::vector<boost::intrusive_ptr<glitch::scene::ICuller>,glitch::core::SAllocator<boost::intrusive_ptr<glitch::scene::ICuller>,(glitch::memory::E_MEMORY_HINT)0>>>,boost::intrusive_ptr<glitch::scene::ICuller> const&)
// volatile int32_t *std::vector<boost::intrusive_ptr<glitch::scene::ICuller>,glitch::core::SAllocator<boost::intrusive_ptr<glitch::scene::ICuller>,(glitch::memory::E_MEMORY_HINT)0>>::_M_insert_aux(;
// [0x8b9410] (379 bytes) sub_8B9410
// int (**sub_8B9410(int a1))(int);
// [0x8b9590] (56 bytes) sub_8B9590
// void sub_8B9590(void *a1);
// [0x8b95d0] (90 bytes) std::vector<PhysicsWorld::CollideOutput,std::allocator<PhysicsWorld::CollideOutput>>::~vector()
// void std::vector<PhysicsWorld::CollideOutput>::~vector(std::vector<PhysicsWorld::CollideOutput> *this);
// [0x8b9630] (436 bytes) std::vector<TweakerRangeType *,std::allocator<TweakerRangeType *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<TweakerRangeType **,std::vector<TweakerRangeType *,std::allocator<TweakerRangeType *>>>,TweakerRangeType * const&)
// void std::vector<TweakerRangeType *>::_M_insert_aux(int a1, char *src, int *a3);
// [0x8b97f0] (65 bytes) sub_8B97F0
// int sub_8B97F0( int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, void **a24, void **a25);
// [0x8b9840] (265 bytes) sub_8B9840
// int sub_8B9840( int a1, const char **a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, void **a24, void **a25);
// [0x8b9950] (238 bytes) sub_8B9950
// void sub_8B9950(int *a1, uint32_t *a2);
// [0x8b9a40] (238 bytes) sub_8B9A40
// void sub_8B9A40(int *a1, uint32_t *a2);
// [0x8b9b30] (238 bytes) sub_8B9B30
// void sub_8B9B30(int *a1, uint32_t *a2);
// [0x8b9c20] (238 bytes) sub_8B9C20
// void sub_8B9C20(int *a1, uint32_t *a2);
// [0x8b9d10] (238 bytes) sub_8B9D10
// void sub_8B9D10(int *a1, uint32_t *a2);
// [0x8b9e00] (660 bytes) sub_8B9E00
// int sub_8B9E00(uint32_t **a1);
// [0x8ba0a0] (459 bytes) sub_8BA0A0
// float *sub_8BA0A0(float *a1, float *a2);
// [0x8ba270] (169 bytes) sub_8BA270
// void sub_8BA270(uint32_t *a1, int a2);
// [0x8ba320] (926 bytes) std::vector<GenericVehicleLightNodeInfo,std::allocator<GenericVehicleLightNodeInfo>>::_M_insert_aux(__gnu_cxx::__normal_iterator<GenericVehicleLightNodeInfo*,std::vector<GenericVehicleLightNodeInfo,std::allocator<GenericVehicleLightNodeInfo>>>,GenericVehicleLightNodeInfo const&)
// uint32_t *std::vector<GenericVehicleLightNodeInfo>::_M_insert_aux(int *a1, __m128i *a2, int a3);
// [0x8ba6c0] (562 bytes) std::vector<glitch::core::SBlockRange,glitch::core::SAllocator<glitch::core::SBlockRange,(glitch::memory::E_MEMORY_HINT)0>>::_M_insert_aux(__gnu_cxx::__normal_iterator<glitch::core::SBlockRange*,std::vector<glitch::core::SBlockRange,glitch::core::SAllocator<glitch::core::SBlockRange,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::core::SBlockRange const&)
// int std::vector<glitch::core::SBlockRange,glitch::core::SAllocator<glitch::core::SBlockRange,(glitch::memory::E_MEMORY_HINT)0>>::_M_insert_aux(;
// [0x8ba900] (9261 bytes) sub_8BA900
// int sub_8BA900(int a1);
// [0x8bcd30] (289 bytes) sub_8BCD30
// int sub_8BCD30(int a1, uint32_t *a2);
// [0x8bce60] (106 bytes) sub_8BCE60
// glitch::core *sub_8BCE60(glitch::core **a1);
// [0x8bced0] (3021 bytes) sub_8BCED0
// int sub_8BCED0(float *a1, int a2, int **a3, uint32_t *a4, uint32_t *a5);
// [0x8bdaa0] (635 bytes) std::vector<GLFUtils::FileListEntry,std::allocator<GLFUtils::FileListEntry>>::_M_insert_aux(__gnu_cxx::__normal_iterator<GLFUtils::FileListEntry*,std::vector<GLFUtils::FileListEntry,std::allocator<GLFUtils::FileListEntry>>>,GLFUtils::FileListEntry const&)
// int std::vector<GLFUtils::FileListEntry>::_M_insert_aux(void **a1, char *a2, int a3);
// [0x8bdd20] (670 bytes) std::vector<glitch::core::SSharedString,std::allocator<glitch::core::SSharedString>>::_M_insert_aux(__gnu_cxx::__normal_iterator<glitch::core::SSharedString*,std::vector<glitch::core::SSharedString,std::allocator<glitch::core::SSharedString>>>,glitch::core::SSharedString const&)
// glitch::core::detail::SSharedStringHeapEntry::SData *std::vector<glitch::core::SSharedString>::_M_insert_aux( int *a1, glitch::core::detail::SSharedStringHeapEntry::SData **a2, volatile int32_t **a3);
// [0x8bdfc0] (567 bytes) std::_Rb_tree<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>,std::pair<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const,unsigned int>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const,unsigned int>>,std::less<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::core::SAllocator<std::pair<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const,unsigned int>,(glitch::memory::E_MEMORY_HINT)0>>::_M_erase(std::_Rb_tree_node<std::pair<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const,unsigned int>> *)
// void std::_Rb_tree<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>,std::pair<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const,unsigned int>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const,unsigned int>>,std::less<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::core::SAllocator<std::pair<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const,unsigned int>,(glitch::memory::E_MEMORY_HINT)0>>::_M_erase(;
// [0x8be200] (2116 bytes) sub_8BE200
// 0x8be200 sub_8BE200
// [0x8bea50] (436 bytes) std::vector<CCustomSceneManagerTweaker::GlitchListTweakerRange<std::vector<glitch::scene::CSceneManager::SUnsortedNodeEntry,glitch::core::SAllocator<glitch::scene::CSceneManager::SUnsortedNodeEntry,(glitch::memory::E_MEMORY_HINT)0>>> *,std::allocator<CCustomSceneManagerTweaker::GlitchListTweakerRange<std::vector<glitch::scene::CSceneManager::SUnsortedNodeEntry,glitch::core::SAllocator<glitch::scene::CSceneManager::SUnsortedNodeEntry,(glitch::memory::E_MEMORY_HINT)0>>> *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<CCustomSceneManagerTweaker::GlitchListTweakerRange<std::vector<glitch::scene::CSceneManager::SUnsortedNodeEntry,glitch::core::SAllocator<glitch::scene::CSceneManager::SUnsortedNodeEntry,(glitch::memory::E_MEMORY_HINT)0>>> **,std::vector<CCustomSceneManagerTweaker::GlitchListTweakerRange<std::vector<glitch::scene::CSceneManager::SUnsortedNodeEntry,glitch::core::SAllocator<glitch::scene::CSceneManager::SUnsortedNodeEntry,(glitch::memory::E_MEMORY_HINT)0>>> *,std::allocator<CCustomSceneManagerTweaker::GlitchListTweakerRange<std::vector<glitch::scene::CSceneManager::SUnsortedNodeEntry,glitch::core::SAllocator<glitch::scene::CSceneManager::SUnsortedNodeEntry,(glitch::memory::E_MEMORY_HINT)0>>> *>>>,CCustomSceneManagerTweaker::GlitchListTweakerRange<std::vector<glitch::scene::CSceneManager::SUnsortedNodeEntry,glitch::core::SAllocator<glitch::scene::CSceneManager::SUnsortedNodeEntry,(glitch::memory::E_MEMORY_HINT)0>>> * const&)
// void std::vector<CCustomSceneManagerTweaker::GlitchListTweakerRange<std::vector<glitch::scene::CSceneManager::SUnsortedNodeEntry,glitch::core::SAllocator<glitch::scene::CSceneManager::SUnsortedNodeEntry,(glitch::memory::E_MEMORY_HINT)0>>> *,std::allocator<CCustomSceneManagerTweaker::GlitchListTweakerRange<std::vector<glitch::scene::CSceneManager::SUnsortedNodeEntry,glitch::core::SAllocator<glitch::scene::CSceneManager::SUnsortedNodeEntry,(glitch::memory::E_MEMORY_HINT)0>>> *>>::_M_insert_aux(;
// [0x8bec10] (436 bytes) std::vector<CCustomSceneManagerTweaker::GlitchListTweakerRange<std::vector<glitch::scene::CSceneManager::SDrawLayerDistanceNodeEntry,glitch::core::SAllocator<glitch::scene::CSceneManager::SDrawLayerDistanceNodeEntry,(glitch::memory::E_MEMORY_HINT)0>>> *,std::allocator<CCustomSceneManagerTweaker::GlitchListTweakerRange<std::vector<glitch::scene::CSceneManager::SDrawLayerDistanceNodeEntry,glitch::core::SAllocator<glitch::scene::CSceneManager::SDrawLayerDistanceNodeEntry,(glitch::memory::E_MEMORY_HINT)0>>> *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<CCustomSceneManagerTweaker::GlitchListTweakerRange<std::vector<glitch::scene::CSceneManager::SDrawLayerDistanceNodeEntry,glitch::core::SAllocator<glitch::scene::CSceneManager::SDrawLayerDistanceNodeEntry,(glitch::memory::E_MEMORY_HINT)0>>> **,std::vector<CCustomSceneManagerTweaker::GlitchListTweakerRange<std::vector<glitch::scene::CSceneManager::SDrawLayerDistanceNodeEntry,glitch::core::SAllocator<glitch::scene::CSceneManager::SDrawLayerDistanceNodeEntry,(glitch::memory::E_MEMORY_HINT)0>>> *,std::allocator<CCustomSceneManagerTweaker::GlitchListTweakerRange<std::vector<glitch::scene::CSceneManager::SDrawLayerDistanceNodeEntry,glitch::core::SAllocator<glitch::scene::CSceneManager::SDrawLayerDistanceNodeEntry,(glitch::memory::E_MEMORY_HINT)0>>> *>>>,CCustomSceneManagerTweaker::GlitchListTweakerRange<std::vector<glitch::scene::CSceneManager::SDrawLayerDistanceNodeEntry,glitch::core::SAllocator<glitch::scene::CSceneManager::SDrawLayerDistanceNodeEntry,(glitch::memory::E_MEMORY_HINT)0>>> * const&)
// void std::vector<CCustomSceneManagerTweaker::GlitchListTweakerRange<std::vector<glitch::scene::CSceneManager::SDrawLayerDistanceNodeEntry,glitch::core::SAllocator<glitch::scene::CSceneManager::SDrawLayerDistanceNodeEntry,(glitch::memory::E_MEMORY_HINT)0>>> *,std::allocator<CCustomSceneManagerTweaker::GlitchListTweakerRange<std::vector<glitch::scene::CSceneManager::SDrawLayerDistanceNodeEntry,glitch::core::SAllocator<glitch::scene::CSceneManager::SDrawLayerDistanceNodeEntry,(glitch::memory::E_MEMORY_HINT)0>>> *>>::_M_insert_aux(;
// [0x8bedd0] (436 bytes) std::vector<CCustomSceneManagerTweaker::GlitchListTweakerRange<std::vector<glitch::scene::CSceneManager::SRenderDataSortNodeEntry,glitch::core::SAllocator<glitch::scene::CSceneManager::SRenderDataSortNodeEntry,(glitch::memory::E_MEMORY_HINT)0>>> *,std::allocator<CCustomSceneManagerTweaker::GlitchListTweakerRange<std::vector<glitch::scene::CSceneManager::SRenderDataSortNodeEntry,glitch::core::SAllocator<glitch::scene::CSceneManager::SRenderDataSortNodeEntry,(glitch::memory::E_MEMORY_HINT)0>>> *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<CCustomSceneManagerTweaker::GlitchListTweakerRange<std::vector<glitch::scene::CSceneManager::SRenderDataSortNodeEntry,glitch::core::SAllocator<glitch::scene::CSceneManager::SRenderDataSortNodeEntry,(glitch::memory::E_MEMORY_HINT)0>>> **,std::vector<CCustomSceneManagerTweaker::GlitchListTweakerRange<std::vector<glitch::scene::CSceneManager::SRenderDataSortNodeEntry,glitch::core::SAllocator<glitch::scene::CSceneManager::SRenderDataSortNodeEntry,(glitch::memory::E_MEMORY_HINT)0>>> *,std::allocator<CCustomSceneManagerTweaker::GlitchListTweakerRange<std::vector<glitch::scene::CSceneManager::SRenderDataSortNodeEntry,glitch::core::SAllocator<glitch::scene::CSceneManager::SRenderDataSortNodeEntry,(glitch::memory::E_MEMORY_HINT)0>>> *>>>,CCustomSceneManagerTweaker::GlitchListTweakerRange<std::vector<glitch::scene::CSceneManager::SRenderDataSortNodeEntry,glitch::core::SAllocator<glitch::scene::CSceneManager::SRenderDataSortNodeEntry,(glitch::memory::E_MEMORY_HINT)0>>> * const&)
// void std::vector<CCustomSceneManagerTweaker::GlitchListTweakerRange<std::vector<glitch::scene::CSceneManager::SRenderDataSortNodeEntry,glitch::core::SAllocator<glitch::scene::CSceneManager::SRenderDataSortNodeEntry,(glitch::memory::E_MEMORY_HINT)0>>> *,std::allocator<CCustomSceneManagerTweaker::GlitchListTweakerRange<std::vector<glitch::scene::CSceneManager::SRenderDataSortNodeEntry,glitch::core::SAllocator<glitch::scene::CSceneManager::SRenderDataSortNodeEntry,(glitch::memory::E_MEMORY_HINT)0>>> *>>::_M_insert_aux(;
// [0x8bef90] (436 bytes) std::vector<CCustomSceneManagerTweaker::GlitchListTweakerRange<std::vector<glitch::scene::CSceneManager::SDefaultNodeEntry,glitch::core::SAllocator<glitch::scene::CSceneManager::SDefaultNodeEntry,(glitch::memory::E_MEMORY_HINT)0>>> *,std::allocator<CCustomSceneManagerTweaker::GlitchListTweakerRange<std::vector<glitch::scene::CSceneManager::SDefaultNodeEntry,glitch::core::SAllocator<glitch::scene::CSceneManager::SDefaultNodeEntry,(glitch::memory::E_MEMORY_HINT)0>>> *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<CCustomSceneManagerTweaker::GlitchListTweakerRange<std::vector<glitch::scene::CSceneManager::SDefaultNodeEntry,glitch::core::SAllocator<glitch::scene::CSceneManager::SDefaultNodeEntry,(glitch::memory::E_MEMORY_HINT)0>>> **,std::vector<CCustomSceneManagerTweaker::GlitchListTweakerRange<std::vector<glitch::scene::CSceneManager::SDefaultNodeEntry,glitch::core::SAllocator<glitch::scene::CSceneManager::SDefaultNodeEntry,(glitch::memory::E_MEMORY_HINT)0>>> *,std::allocator<CCustomSceneManagerTweaker::GlitchListTweakerRange<std::vector<glitch::scene::CSceneManager::SDefaultNodeEntry,glitch::core::SAllocator<glitch::scene::CSceneManager::SDefaultNodeEntry,(glitch::memory::E_MEMORY_HINT)0>>> *>>>,CCustomSceneManagerTweaker::GlitchListTweakerRange<std::vector<glitch::scene::CSceneManager::SDefaultNodeEntry,glitch::core::SAllocator<glitch::scene::CSceneManager::SDefaultNodeEntry,(glitch::memory::E_MEMORY_HINT)0>>> * const&)
// void std::vector<CCustomSceneManagerTweaker::GlitchListTweakerRange<std::vector<glitch::scene::CSceneManager::SDefaultNodeEntry,glitch::core::SAllocator<glitch::scene::CSceneManager::SDefaultNodeEntry,(glitch::memory::E_MEMORY_HINT)0>>> *,std::allocator<CCustomSceneManagerTweaker::GlitchListTweakerRange<std::vector<glitch::scene::CSceneManager::SDefaultNodeEntry,glitch::core::SAllocator<glitch::scene::CSceneManager::SDefaultNodeEntry,(glitch::memory::E_MEMORY_HINT)0>>> *>>::_M_insert_aux(;
// [0x8bf150] (436 bytes) std::vector<CCustomSceneManagerTweaker::GlitchListTweakerRange<std::vector<glitch::scene::CSceneManager::STransparentNodeEntry,glitch::core::SAllocator<glitch::scene::CSceneManager::STransparentNodeEntry,(glitch::memory::E_MEMORY_HINT)0>>> *,std::allocator<CCustomSceneManagerTweaker::GlitchListTweakerRange<std::vector<glitch::scene::CSceneManager::STransparentNodeEntry,glitch::core::SAllocator<glitch::scene::CSceneManager::STransparentNodeEntry,(glitch::memory::E_MEMORY_HINT)0>>> *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<CCustomSceneManagerTweaker::GlitchListTweakerRange<std::vector<glitch::scene::CSceneManager::STransparentNodeEntry,glitch::core::SAllocator<glitch::scene::CSceneManager::STransparentNodeEntry,(glitch::memory::E_MEMORY_HINT)0>>> **,std::vector<CCustomSceneManagerTweaker::GlitchListTweakerRange<std::vector<glitch::scene::CSceneManager::STransparentNodeEntry,glitch::core::SAllocator<glitch::scene::CSceneManager::STransparentNodeEntry,(glitch::memory::E_MEMORY_HINT)0>>> *,std::allocator<CCustomSceneManagerTweaker::GlitchListTweakerRange<std::vector<glitch::scene::CSceneManager::STransparentNodeEntry,glitch::core::SAllocator<glitch::scene::CSceneManager::STransparentNodeEntry,(glitch::memory::E_MEMORY_HINT)0>>> *>>>,CCustomSceneManagerTweaker::GlitchListTweakerRange<std::vector<glitch::scene::CSceneManager::STransparentNodeEntry,glitch::core::SAllocator<glitch::scene::CSceneManager::STransparentNodeEntry,(glitch::memory::E_MEMORY_HINT)0>>> * const&)
// void std::vector<CCustomSceneManagerTweaker::GlitchListTweakerRange<std::vector<glitch::scene::CSceneManager::STransparentNodeEntry,glitch::core::SAllocator<glitch::scene::CSceneManager::STransparentNodeEntry,(glitch::memory::E_MEMORY_HINT)0>>> *,std::allocator<CCustomSceneManagerTweaker::GlitchListTweakerRange<std::vector<glitch::scene::CSceneManager::STransparentNodeEntry,glitch::core::SAllocator<glitch::scene::CSceneManager::STransparentNodeEntry,(glitch::memory::E_MEMORY_HINT)0>>> *>>::_M_insert_aux(;
// [0x8bf310] (305 bytes) std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::assign(char const*,unsigned int)
// std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::assign(;
// [0x8bf450] (1765 bytes) sub_8BF450
// int sub_8BF450(int a1, int a2, uint32_t *a3, int a4);
// [0x8bfb40] (407 bytes) std::vector<unsigned short,std::allocator<unsigned short>>::_M_insert_aux(__gnu_cxx::__normal_iterator<unsigned short *,std::vector<unsigned short,std::allocator<unsigned short>>>,unsigned short const&)
// void std::vector<unsigned short>::_M_insert_aux(int a1, char *src, int16_t *a3);
// [0x8bfce0] (425 bytes) std::_Rb_tree<unsigned int,std::pair<unsigned int const,unsigned int>,std::_Select1st<std::pair<unsigned int const,unsigned int>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>>::_M_erase(std::_Rb_tree_node<std::pair<unsigned int const,unsigned int>> *)
// void std::_Rb_tree<unsigned int,std::pair<unsigned int const,unsigned int>,std::_Select1st<std::pair<unsigned int const,unsigned int>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>>::_M_erase( int a1, uint32_t *a2);
// [0x8bfe90] (193 bytes) std::_Rb_tree<ObjectDist,ObjectDist,std::_Identity<ObjectDist>,ObjectDistLt,std::allocator<ObjectDist>>::_M_insert_(std::_Rb_tree_node_base const*,std::_Rb_tree_node_base const*,ObjectDist const&)
// int *std::_Rb_tree<ObjectDist,ObjectDist,std::_Identity<ObjectDist>,ObjectDistLt,std::allocator<ObjectDist>>::_M_insert_( int *a1, int a2, int a3, int a4, float *a5);
// [0x8bff60] (747 bytes) std::_Rb_tree<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>,std::pair<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const,boost::intrusive_ptr<glitch::io::IReadFile>>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const,boost::intrusive_ptr<glitch::io::IReadFile>>>,std::less<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const,boost::intrusive_ptr<glitch::io::IReadFile>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const,boost::intrusive_ptr<glitch::io::IReadFile>>> *)
// void std::_Rb_tree<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>,std::pair<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const,boost::intrusive_ptr<glitch::io::IReadFile>>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const,boost::intrusive_ptr<glitch::io::IReadFile>>>,std::less<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const,boost::intrusive_ptr<glitch::io::IReadFile>>>>::_M_erase(;
// [0x8c0250] (41 bytes) std::map<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>,boost::intrusive_ptr<glitch::io::IReadFile>,std::less<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const,boost::intrusive_ptr<glitch::io::IReadFile>>>>::~map()
// void std::map<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>,boost::intrusive_ptr<glitch::io::IReadFile>>::~map(;
// [0x8c0280] (632 bytes) sub_8C0280
// void sub_8C0280(int a1, int a2, int a3);
// [0x8c0500] (225 bytes) sub_8C0500
// void sub_8C0500(int *a1, int a2);
// [0x8c05f0] (700 bytes) sub_8C05F0
// void sub_8C05F0(int a1, glitch::video::CMaterial *a2, int a3);
// [0x8c08b0] (241 bytes) sub_8C08B0
// void sub_8C08B0(int *a1, int a2);
// [0x8c09b0] (330 bytes) sub_8C09B0
// int (**sub_8C09B0(uint32_t *a1))(int);
// [0x8c0b00] (56 bytes) sub_8C0B00
// void sub_8C0B00(uint32_t *a1);
// [0x8c0b40] (119 bytes) sub_8C0B40
// int sub_8C0B40(unsigned int a1);
// [0x8c0bc0] (73 bytes) sub_8C0BC0
// int sub_8C0BC0(int a1);
// [0x8c0c10] (73 bytes) sub_8C0C10
// int sub_8C0C10(int a1);
// [0x8c0c60] (74 bytes) sub_8C0C60
// long double sub_8C0C60(int a1);
// [0x8c0cb0] (74 bytes) sub_8C0CB0
// long double sub_8C0CB0(int a1);
// [0x8c0d00] (74 bytes) sub_8C0D00
// long double sub_8C0D00(int a1);
// [0x8c0d50] (74 bytes) sub_8C0D50
// long double sub_8C0D50(int a1);
// [0x8c0da0] (74 bytes) sub_8C0DA0
// long double sub_8C0DA0(int a1);
// [0x8c0df0] (74 bytes) sub_8C0DF0
// long double sub_8C0DF0(int a1);
// [0x8c0e40] (74 bytes) sub_8C0E40
// long double sub_8C0E40(int a1);
// [0x8c0e90] (74 bytes) sub_8C0E90
// long double sub_8C0E90(int a1);
// [0x8c0ee0] (73 bytes) sub_8C0EE0
// int sub_8C0EE0(int a1);
// [0x8c0f30] (73 bytes) sub_8C0F30
// int sub_8C0F30(int a1);
// [0x8c0f80] (73 bytes) sub_8C0F80
// int sub_8C0F80(int a1);
// [0x8c0fd0] (73 bytes) sub_8C0FD0
// int sub_8C0FD0(int a1);
// [0x8c1020] (73 bytes) sub_8C1020
// int sub_8C1020(int a1);
// [0x8c1070] (73 bytes) sub_8C1070
// int sub_8C1070(int a1);
// [0x8c10c0] (136 bytes) sub_8C10C0
// long double sub_8C10C0(const char **a1);
// [0x8c1150] (136 bytes) sub_8C1150
// long double sub_8C1150(const char **a1);
// [0x8c11e0] (73 bytes) sub_8C11E0
// int sub_8C11E0(int a1);
// [0x8c1230] (91 bytes) std::vector<unsigned int,std::allocator<unsigned int>>::_M_check_len(unsigned int,char const*)const
// int std::vector<unsigned int>::_M_check_len(std::vector<unsigned int> *this, unsigned int a2, char *a3);
// [0x8c1290] (201 bytes) sub_8C1290
// volatile int32_t *sub_8C1290(int a1);
// [0x8c1360] (744 bytes) std::vector<boost::intrusive_ptr<glitch::scene::ISceneNode>,glitch::core::SAllocator<boost::intrusive_ptr<glitch::scene::ISceneNode>,(glitch::memory::E_MEMORY_HINT)0>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<glitch::scene::ISceneNode>*,std::vector<boost::intrusive_ptr<glitch::scene::ISceneNode>,glitch::core::SAllocator<boost::intrusive_ptr<glitch::scene::ISceneNode>,(glitch::memory::E_MEMORY_HINT)0>>>,boost::intrusive_ptr<glitch::scene::ISceneNode> const&)
// uint32_t *std::vector<boost::intrusive_ptr<glitch::scene::ISceneNode>,glitch::core::SAllocator<boost::intrusive_ptr<glitch::scene::ISceneNode>,(glitch::memory::E_MEMORY_HINT)0>>::_M_insert_aux(;
// [0x8c1650] (511 bytes) std::vector<glitch::streaming::SPriorityFrameSwappable,glitch::core::SAllocator<glitch::streaming::SPriorityFrameSwappable,(glitch::memory::E_MEMORY_HINT)0>>::_M_insert_aux(__gnu_cxx::__normal_iterator<glitch::streaming::SPriorityFrameSwappable*,std::vector<glitch::streaming::SPriorityFrameSwappable,glitch::core::SAllocator<glitch::streaming::SPriorityFrameSwappable,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::streaming::SPriorityFrameSwappable const&)
// int std::vector<glitch::streaming::SPriorityFrameSwappable,glitch::core::SAllocator<glitch::streaming::SPriorityFrameSwappable,(glitch::memory::E_MEMORY_HINT)0>>::_M_insert_aux(;
// [0x8c1850] (165 bytes) sub_8C1850
// char *sub_8C1850(uint32_t *a1);
// [0x8c1900] (349 bytes) sub_8C1900
// void sub_8C1900(char **a1);
// [0x8c1a60] (490 bytes) sub_8C1A60
// int (**sub_8C1A60(int a1))(int);
// [0x8c1c50] (56 bytes) sub_8C1C50
// void sub_8C1C50(void *a1);
// [0x8c1c90] (1808 bytes) std::_Rb_tree<unsigned int,std::pair<unsigned int const,glitch::streaming::CGridStreamingCuller<CustomNoStreamingFactoryConfig>::SGridData>,std::_Select1st<std::pair<unsigned int const,glitch::streaming::CGridStreamingCuller<CustomNoStreamingFactoryConfig>::SGridData>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,glitch::streaming::CGridStreamingCuller<CustomNoStreamingFactoryConfig>::SGridData>>>::_M_erase(std::_Rb_tree_node<std::pair<unsigned int const,glitch::streaming::CGridStreamingCuller<CustomNoStreamingFactoryConfig>::SGridData>> *)
// void std::_Rb_tree<unsigned int,std::pair<unsigned int const,glitch::streaming::CGridStreamingCuller<CustomNoStreamingFactoryConfig>::SGridData>,std::_Select1st<std::pair<unsigned int const,glitch::streaming::CGridStreamingCuller<CustomNoStreamingFactoryConfig>::SGridData>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,glitch::streaming::CGridStreamingCuller<CustomNoStreamingFactoryConfig>::SGridData>>>::_M_erase( int a1, uint32_t *a2);
// [0x8c23a0] (7 bytes) sub_8C23A0
// int sub_8C23A0(int a1);
// [0x8c23b0] (7 bytes) sub_8C23B0
// int sub_8C23B0(int a1);
// [0x8c23c0] (236 bytes) sub_8C23C0
// void sub_8C23C0(void *a1);
// [0x8c24b0] (523 bytes) sub_8C24B0
// int sub_8C24B0(int a1, int a2, unsigned int a3, unsigned int a4, int a5);
// [0x8c26c0] (10 bytes) sub_8C26C0
// int sub_8C26C0(int a1);
// [0x8c26d0] (10 bytes) sub_8C26D0
// int sub_8C26D0(int a1);
// [0x8c26e0] (229 bytes) sub_8C26E0
// int (**sub_8C26E0(int a1))(int);
// [0x8c27d0] (1365 bytes) std::vector<unsigned long,std::allocator<unsigned long>>::_M_fill_insert(__gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long,std::allocator<unsigned long>>>,unsigned int,unsigned long const&)
// void std::vector<unsigned long>::_M_fill_insert(int a1, unsigned int *src, unsigned int a3, unsigned int *a4);
// [0x8c2d30] (4191 bytes) sub_8C2D30
// uint32_t **sub_8C2D30(uint32_t *a1, int a2, int a3, int a4, int a5);
// [0x8c3d90] (1487 bytes) sub_8C3D90
// void sub_8C3D90(glitch::scene::ICullerBase *a1, uint32_t *a2, int *a3);
// [0x8c4360] (345 bytes) sub_8C4360
// volatile int32_t *sub_8C4360( int a1, int a2, boost::intrusive_ptr<glitch::io::IReadFile> *a3, glitch::streaming::CBaseGridStreamingManager **a4);
// [0x8c44c0] (3412 bytes) sub_8C44C0
// int (***sub_8C44C0( int a1, int a2, const boost::intrusive_ptr<glitch::io::IReadFile> *a3, int a4))(uint32_t, int, int, volatile int32_t *, glitch::streaming::CBaseGridStreamingManager *);
// [0x8c5220] (346 bytes) sub_8C5220
// int sub_8C5220(int a1, __m128d a2, int a3, unsigned int a4);
// [0x8c5380] (720 bytes) sub_8C5380
// uint32_t *sub_8C5380(__m128d a1, int a2, unsigned int a3);
// [0x8c5650] (391 bytes) sub_8C5650
// int sub_8C5650(__m128d a1, int a2, uint32_t *a3, unsigned int **a4);
// [0x8c57e0] (795 bytes) sub_8C57E0
// int sub_8C57E0(__m128d a1, int a2, int a3, int a4, uint32_t *a5);
// [0x8c6a60] (347 bytes) sub_8C6A60
// int sub_8C6A60(int a1, int *a2);
// [0x8c6bc0] (2026 bytes) sub_8C6BC0
// char *sub_8C6BC0(uint32_t *a1);
// [0x8c73b0] (25 bytes) sub_8C73B0
// char *sub_8C73B0(int a1);
// [0x8c73d0] (792 bytes) sub_8C73D0
// int sub_8C73D0(int a1, uint32_t *a2);
// [0x8c76f0] (187 bytes) sub_8C76F0
// int sub_8C76F0(int a1, int a2);
// [0x8c77b0] (999 bytes) sub_8C77B0
// void sub_8C77B0(int a1, int a2, int a3, int a4, int a5, unsigned int a6);
// [0x8c7ba0] (1301 bytes) sub_8C7BA0
// char sub_8C7BA0(int a1);
// [0x8c80c0] (1760 bytes) sub_8C80C0
// char sub_8C80C0(int a1, int a2, int a3);
// [0x8c87a0] (229 bytes) sub_8C87A0
// uint32_t *sub_8C87A0(uint32_t *a1, uint32_t *a2);
// [0x8c8890] (2081 bytes) sub_8C8890
// int sub_8C8890(int a1, int a2, int a3, char a4);
// [0x8c90c0] (81 bytes) sub_8C90C0
// int sub_8C90C0(int a1, uint32_t *a2, int a3);
// [0x8c9120] (489 bytes) sub_8C9120
// void sub_8C9120(glitch::streaming::detail::SInPlaceMetaDataPolicy *a1, uint32_t *a2);
// [0x8c9310] (833 bytes) sub_8C9310
// uint32_t *sub_8C9310( uint32_t *a1, glitch::streaming::detail::SInPlaceMetaDataPolicy *a2, char *a3, int a4, unsigned int a5, int a6, int a7, uint32_t *a8);
// [0x8c9660] (316 bytes) sub_8C9660
// int sub_8C9660(uint32_t *a1, int a2);
// [0x8c97a0] (1061 bytes) std::vector<glitch::scene::SSegmentConstructInfo,glitch::core::SAllocator<glitch::scene::SSegmentConstructInfo,(glitch::memory::E_MEMORY_HINT)0>>::_M_insert_aux(__gnu_cxx::__normal_iterator<glitch::scene::SSegmentConstructInfo*,std::vector<glitch::scene::SSegmentConstructInfo,glitch::core::SAllocator<glitch::scene::SSegmentConstructInfo,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::scene::SSegmentConstructInfo const&)
// int std::vector<glitch::scene::SSegmentConstructInfo,glitch::core::SAllocator<glitch::scene::SSegmentConstructInfo,(glitch::memory::E_MEMORY_HINT)0>>::_M_insert_aux(;
// [0x8c9bd0] (2149 bytes) sub_8C9BD0
// int sub_8C9BD0(int a1, int a2, int a3, char a4);
// [0x8ca440] (911 bytes) sub_8CA440
// void sub_8CA440(int a1, int a2);
// [0x8ca7d0] (635 bytes) std::vector<unsigned char,glitch::core::SAllocator<unsigned char,(glitch::memory::E_MEMORY_HINT)0>>::_M_fill_insert(__gnu_cxx::__normal_iterator<unsigned char *,std::vector<unsigned char,glitch::core::SAllocator<unsigned char,(glitch::memory::E_MEMORY_HINT)0>>>,unsigned int,unsigned char const&)
// void std::vector<unsigned char,glitch::core::SAllocator<unsigned char,(glitch::memory::E_MEMORY_HINT)0>>::_M_fill_insert(;
// [0x8caa50] (52 bytes) sub_8CAA50
// int32_t sub_8CAA50(int a1, int a2);
// [0x8caa90] (394 bytes) sub_8CAA90
// uint32_t *sub_8CAA90(int a1, uint32_t *a2, uint32_t *a3);
// [0x8cac20] (566 bytes) sub_8CAC20
// int *sub_8CAC20(int a1, unsigned int *a2, int *a3, uint32_t *a4);
// [0x8cae60] (384 bytes) sub_8CAE60
// int sub_8CAE60(int a1, int a2);
// [0x8cafe0] (52 bytes) sub_8CAFE0
// int32_t sub_8CAFE0(int a1, int a2);
// [0x8cb020] (394 bytes) sub_8CB020
// uint32_t *sub_8CB020(int a1, uint32_t *a2, uint32_t *a3);
// [0x8cb1b0] (566 bytes) sub_8CB1B0
// int *sub_8CB1B0(int a1, unsigned int *a2, int *a3, uint32_t *a4);
// [0x8cb3f0] (110 bytes) sub_8CB3F0
// int sub_8CB3F0(int a1, unsigned int **a2, int *a3, uint32_t *a4);
// [0x8cb460] (2059 bytes) sub_8CB460
// bool sub_8CB460(int a1);
// [0x8cbc70] (496 bytes) sub_8CBC70
// int sub_8CBC70(int a1, int a2);
// [0x8cbe60] (742 bytes) std::vector<glitch::scene::SSegmentConstructInfo,glitch::core::SAllocator<glitch::scene::SSegmentConstructInfo,(glitch::memory::E_MEMORY_HINT)0>>::operator=(std::vector<glitch::scene::SSegmentConstructInfo,glitch::core::SAllocator<glitch::scene::SSegmentConstructInfo,(glitch::memory::E_MEMORY_HINT)0>> const&)
// std::vector<glitch::scene::SSegmentConstructInfo, glitch::core::SAllocator<glitch::scene::SSegmentConstructInfo, (glitch::memory::E_MEMORY_HINT)0>> *std::vector<glitch::scene::SSegmentConstructInfo,glitch::core::SAllocator<glitch::scene::SSegmentConstructInfo,(glitch::memory::E_MEMORY_HINT)0>>::operator=(;
// [0x8cc150] (2040 bytes) std::vector<glitch::scene::SBatchMetaInfo,glitch::core::SAllocator<glitch::scene::SBatchMetaInfo,(glitch::memory::E_MEMORY_HINT)0>>::_M_insert_aux(__gnu_cxx::__normal_iterator<glitch::scene::SBatchMetaInfo*,std::vector<glitch::scene::SBatchMetaInfo,glitch::core::SAllocator<glitch::scene::SBatchMetaInfo,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::scene::SBatchMetaInfo const&)
// int std::vector<glitch::scene::SBatchMetaInfo,glitch::core::SAllocator<glitch::scene::SBatchMetaInfo,(glitch::memory::E_MEMORY_HINT)0>>::_M_insert_aux(;
// [0x8cc950] (10802 bytes) sub_8CC950
// 0x8cc950 sub_8CC950
// [0x8cf390] (177 bytes) sub_8CF390
// void sub_8CF390(int a1, int *a2);
// [0x8cf450] (1179 bytes) sub_8CF450
// int sub_8CF450(int a1, uint16_t *a2);
// [0x8cf8f0] (2253 bytes) sub_8CF8F0
// int sub_8CF8F0(float *a1, int a2, int a3, uint32_t *a4, uint32_t *a5);
// [0x8d01c0] (92 bytes) sub_8D01C0
// int sub_8D01C0(int a1, int a2, int *a3);
// [0x8d0220] (69 bytes) sub_8D0220
// int sub_8D0220(int a1);
// [0x8d0270] (1205 bytes) sub_8D0270
// int sub_8D0270(int a1, int *a2);
// [0x8d0730] (1342 bytes) sub_8D0730
// int sub_8D0730(int a1, int a2);
// [0x8d0c70] (403 bytes) sub_8D0C70
// int *sub_8D0C70(uint32_t *a1);
// [0x8d0e10] (1106 bytes) sub_8D0E10
// int sub_8D0E10(int a1);
// [0x8d1270] (77 bytes) sub_8D1270
// int sub_8D1270(int a1);
// [0x8d12c0] (1879 bytes) std::vector<glitch::scene::SBatchMeshSegmentInternal<void>,glitch::core::SAllocator<glitch::scene::SBatchMeshSegmentInternal<void>,(glitch::memory::E_MEMORY_HINT)0>>::_M_fill_insert(__gnu_cxx::__normal_iterator<glitch::scene::SBatchMeshSegmentInternal<void>*,std::vector<glitch::scene::SBatchMeshSegmentInternal<void>,glitch::core::SAllocator<glitch::scene::SBatchMeshSegmentInternal<void>,(glitch::memory::E_MEMORY_HINT)0>>>,unsigned int,glitch::scene::SBatchMeshSegmentInternal<void> const&)
// void std::vector<glitch::scene::SBatchMeshSegmentInternal<void>,glitch::core::SAllocator<glitch::scene::SBatchMeshSegmentInternal<void>,(glitch::memory::E_MEMORY_HINT)0>>::_M_fill_insert(;
// [0x8d1a20] (212 bytes) void std::__insertion_sort<__gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>,std::allocator<std::pair<unsigned int,unsigned int>>>>,glitch::streaming::detail::vertex_data_allocator::SBlockSort>(__gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>,std::allocator<std::pair<unsigned int,unsigned int>>>>,__gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>,std::allocator<std::pair<unsigned int,unsigned int>>>>,glitch::streaming::detail::vertex_data_allocator::SBlockSort)
// unsigned int *std::__insertion_sort<__gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>,glitch::streaming::detail::vertex_data_allocator::SBlockSort>( unsigned int *a1, unsigned int *a2);
// [0x8d1b00] (561 bytes) std::deque<unsigned int,std::allocator<unsigned int>>::push_back(unsigned int const&)
// uint32_t *std::deque<unsigned int>::push_back(std::deque<unsigned int> *this, const unsigned int *a2);
// [0x8d1d40] (1106 bytes) sub_8D1D40
// int *sub_8D1D40(uint32_t *a1);
// [0x8d21a0] (31 bytes) sub_8D21A0
// int *sub_8D21A0(uint32_t *a1);
// [0x8d21c0] (720 bytes) sub_8D21C0
// uint32_t *sub_8D21C0(__m128d a1, int a2, unsigned int a3);
// [0x8d2490] (1486 bytes) sub_8D2490
// int sub_8D2490(__m128d a1, int a2, int a3);
// [0x8d2a60] (2129 bytes) sub_8D2A60
// glitch::core *sub_8D2A60(__m128d a1, int a2);
// [0x8d32c0] (1672 bytes) sub_8D32C0
// char sub_8D32C0(__m128d a1, int a2, unsigned int a3, uint32_t *a4);
// [0x8d3950] (25 bytes) sub_8D3950
// char sub_8D3950(int a1, int a2);
// [0x8d3970] (1647 bytes) sub_8D3970
// int sub_8D3970(int a1, int *a2);
// [0x8d3fe0] (8461 bytes) sub_8D3FE0
// int sub_8D3FE0(int *a1, size_t **a2, unsigned int a3, int a4, int a5);
// [0x8d60f0] (494 bytes) sub_8D60F0
// uint32_t *sub_8D60F0(uint32_t *a1, uint32_t *a2);
// [0x8d62e0] (2890 bytes) sub_8D62E0
// int sub_8D62E0( int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, char *a22, char *a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, char *a34, char *a35);
// [0x8d6e30] (280 bytes) void std::__adjust_heap<__gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>,std::allocator<std::pair<unsigned int,unsigned int>>>>,int,std::pair<unsigned int,unsigned int>,glitch::streaming::detail::vertex_data_allocator::SBlockSort>(__gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>,std::allocator<std::pair<unsigned int,unsigned int>>>>,int,int,std::pair<unsigned int,unsigned int>,glitch::streaming::detail::vertex_data_allocator::SBlockSort)
// unsigned int std::__adjust_heap<__gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>,int,std::pair<unsigned int,unsigned int>,glitch::streaming::detail::vertex_data_allocator::SBlockSort>( int a1, int a2, int a3, unsigned int a4, unsigned int a5);
// [0x8d6f50] (1075 bytes) void std::__introsort_loop<__gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>,std::allocator<std::pair<unsigned int,unsigned int>>>>,int,glitch::streaming::detail::vertex_data_allocator::SBlockSort>(__gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>,std::allocator<std::pair<unsigned int,unsigned int>>>>,__gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>,std::allocator<std::pair<unsigned int,unsigned int>>>>,int,glitch::streaming::detail::vertex_data_allocator::SBlockSort)
// int std::__introsort_loop<__gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>,int,glitch::streaming::detail::vertex_data_allocator::SBlockSort>( char *a1, char *a2, int a3);
// [0x8d7390] (2508 bytes) sub_8D7390
// uint32_t *sub_8D7390( uint32_t *a1, glitch::streaming::detail::SInPlaceMetaDataPolicy *a2, int a3, unsigned int a4, char *a5);
// [0x8d7d60] (2745 bytes) sub_8D7D60
// int sub_8D7D60(int a1, int *a2);
// [0x8d8820] (346 bytes) sub_8D8820
// int sub_8D8820(int a1, __m128d a2, int a3, unsigned int a4);
// [0x8d8980] (720 bytes) sub_8D8980
// uint32_t *sub_8D8980(__m128d a1, int a2, unsigned int a3);
// [0x8d8c50] (387 bytes) sub_8D8C50
// int sub_8D8C50(__m128d a1, int a2, uint32_t *a3, unsigned int *a4, uint32_t **a5);
// [0x8d8de0] (373 bytes) sub_8D8DE0
// uint32_t *sub_8D8DE0(__m128d a1, uint32_t *a2, int a3, unsigned int a4);
// [0x8d8f60] (5090 bytes) sub_8D8F60
// void sub_8D8F60(int a1, int a2, glitch::streaming::CBaseStreamingManager *a3, uint32_t *a4);
// [0x8da350] (111 bytes) sub_8DA350
// int sub_8DA350(glitch::streaming::CBaseStreamingManager *a1);
// [0x8da3c0] (980 bytes) sub_8DA3C0
// int sub_8DA3C0(__m128d a1, glitch::streaming::CBaseStreamingManager *a2, int a3);
