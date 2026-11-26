#pragma once
// ============================================================================
// TU04_VehicleCollisionEffects.h
// Complete Translation Unit [04/41]
// Binary Range in lib/x86/libGangstar4.so: 0x61e7d0 .. 0x657390 (226 KB)
// Total Decompiled Functions in TU: 576 (100% coverage)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// Function Table in Translation Unit:
// [0x61e7d0] (924 bytes) sub_61E7D0
// const char *sub_61E7D0();
// [0x61eb70] (7 bytes) sub_61EB70
// int sub_61EB70(int a1, int a2);
// [0x61eb80] (21 bytes) sub_61EB80
// int sub_61EB80(int a1, int a2);
// [0x61eba8] (1 bytes) nullsub_78
// void nullsub_78();
// [0x61ebb8] (1 bytes) nullsub_79
// void nullsub_79();
// [0x61ebc8] (1 bytes) nullsub_80
// void nullsub_80();
// [0x61ebd0] (24 bytes) sub_61EBD0
// uint32_t *sub_61EBD0(uint32_t *a1);
// [0x61ebf8] (1 bytes) nullsub_81
// void nullsub_81();
// [0x61ec08] (1 bytes) nullsub_82
// void nullsub_82();
// [0x61ec18] (1 bytes) nullsub_83
// void nullsub_83();
// [0x61ec28] (1 bytes) nullsub_84
// void nullsub_84();
// [0x61ec38] (1 bytes) nullsub_85
// void nullsub_85();
// [0x61ec48] (1 bytes) nullsub_86
// void nullsub_86();
// [0x61ec50] (24 bytes) sub_61EC50
// uint32_t *sub_61EC50(uint32_t *a1);
// [0x61ec78] (1 bytes) nullsub_87
// void nullsub_87();
// [0x61ec88] (1 bytes) nullsub_88
// void nullsub_88();
// [0x61ec98] (1 bytes) nullsub_89
// void nullsub_89();
// [0x61eca0] (24 bytes) sub_61ECA0
// uint32_t *sub_61ECA0(uint32_t *a1);
// [0x61ecc8] (1 bytes) nullsub_90
// void nullsub_90();
// [0x61ecd0] (87 bytes) sub_61ECD0
// int sub_61ECD0(uint32_t *a1);
// [0x61ed30] (14 bytes) sub_61ED30
// int sub_61ED30(int a1, int a2);
// [0x61ed40] (12 bytes) sub_61ED40
// int sub_61ED40(int a1);
// [0x61ed50] (15 bytes) sub_61ED50
// bool sub_61ED50(int a1, int a2);
// [0x61ed60] (122 bytes) sub_61ED60
// float *sub_61ED60(float *a1);
// [0x61ede8] (1 bytes) nullsub_91
// void nullsub_91();
// [0x61edf0] (71 bytes) sub_61EDF0
// int sub_61EDF0(int a1, int a2, uint32_t *a3, int a4, uint32_t *a5);
// [0x61ee40] (12 bytes) sub_61EE40
// int sub_61EE40(int a1);
// [0x61ee50] (49 bytes) sub_61EE50
// int sub_61EE50(int a1);
// [0x61ee90] (14 bytes) sub_61EE90
// int sub_61EE90(int a1);
// [0x61eea0] (103 bytes) sub_61EEA0
// float *sub_61EEA0(float *a1, int a2);
// [0x61ef10] (32 bytes) sub_61EF10
// int sub_61EF10(int a1, int a2);
// [0x61ef30] (65 bytes) sub_61EF30
// unsigned int sub_61EF30(int a1, int a2);
// [0x61ef80] (78 bytes) sub_61EF80
// int (**sub_61EF80(uint32_t *a1))(int);
// [0x61efd0] (49 bytes) sub_61EFD0
// int sub_61EFD0(int a1);
// [0x61f010] (102 bytes) sub_61F010
// float *sub_61F010(float *a1, int a2);
// [0x61f080] (49 bytes) sub_61F080
// int sub_61F080(int a1);
// [0x61f0c0] (42 bytes) sub_61F0C0
// void sub_61F0C0(uint32_t *a1);
// [0x61f0f0] (42 bytes) sub_61F0F0
// void sub_61F0F0(uint32_t *a1);
// [0x61f120] (42 bytes) sub_61F120
// void sub_61F120(uint32_t *a1);
// [0x61f150] (107 bytes) sub_61F150
// void sub_61F150(char *a1);
// [0x61f1c0] (86 bytes) sub_61F1C0
// void sub_61F1C0(uint32_t *a1);
// [0x61f220] (106 bytes) sub_61F220
// int sub_61F220(uint32_t *a1, uint32_t *a2);
// [0x61f290] (436 bytes) sub_61F290
// uint32_t *sub_61F290(int a1, uint32_t *a2);
// [0x61f450] (210 bytes) sub_61F450
// float *sub_61F450(float *a1, int a2);
// [0x61f530] (237 bytes) sub_61F530
// int sub_61F530(uint32_t *a1);
// [0x61f620] (7 bytes) sub_61F620
// int sub_61F620(int a1);
// [0x61f630] (120 bytes) sub_61F630
// int sub_61F630(uint32_t *a1);
// [0x61f6b0] (7 bytes) sub_61F6B0
// int sub_61F6B0(int a1);
// [0x61f6c0] (96 bytes) sub_61F6C0
// int sub_61F6C0(int a1);
// [0x61f720] (73 bytes) sub_61F720
// int sub_61F720(int a1);
// [0x61f770] (66 bytes) sub_61F770
// int sub_61F770(int a1, uint8_t a2);
// [0x61f7c0] (349 bytes) sub_61F7C0
// int sub_61F7C0(int a1, int a2);
// [0x61f920] (100 bytes) sub_61F920
// int sub_61F920(int a1, int a2);
// [0x61f990] (38 bytes) sub_61F990
// int sub_61F990();
// [0x61f9c0] (128 bytes) sub_61F9C0
// void sub_61F9C0(int a1, int a2, char a3);
// [0x61fa40] (92 bytes) sub_61FA40
// int sub_61FA40();
// [0x61faa0] (92 bytes) sub_61FAA0
// int sub_61FAA0();
// [0x61fb00] (66 bytes) sub_61FB00
// int sub_61FB00(uint32_t **a1, int a2);
// [0x61fb50] (44 bytes) sub_61FB50
// int sub_61FB50(int a1);
// [0x61fb80] (27 bytes) sub_61FB80
// int sub_61FB80(uint32_t *a1);
// [0x61fba0] (169 bytes) sub_61FBA0
// void sub_61FBA0(int a1, int a2);
// [0x61fc50] (25 bytes) sub_61FC50
// bool sub_61FC50(int a1);
// [0x61fc70] (362 bytes) sub_61FC70
// int sub_61FC70(int a1, int a2);
// [0x61fde0] (65 bytes) sub_61FDE0
// unsigned int *sub_61FDE0(unsigned int *result);
// [0x61fe30] (382 bytes) sub_61FE30
// size_t sub_61FE30(int *a1, uint32_t *a2);
// [0x61ffb0] (1244 bytes) sub_61FFB0
// int sub_61FFB0(float *a1, float *a2);
// [0x620490] (406 bytes) sub_620490
// size_t sub_620490(uint16_t *a1);
// [0x620630] (370 bytes) sub_620630
// int sub_620630(uint32_t *a1);
// [0x6207b0] (519 bytes) sub_6207B0
// uint32_t *sub_6207B0(int *a1);
// [0x6209c0] (1155 bytes) sub_6209C0
// unsigned int *sub_6209C0(int a1, char *a2, unsigned int a3, unsigned int *a4);
// [0x620e50] (723 bytes) sub_620E50
// int sub_620E50(int *a1, int a2, int a3);
// [0x621130] (420 bytes) sub_621130
// void sub_621130(int a1, uint32_t *a2);
// [0x6212e0] (92 bytes) sub_6212E0
// int sub_6212E0(int a1);
// [0x621340] (7 bytes) sub_621340
// int sub_621340(int a1);
// [0x621350] (233 bytes) sub_621350
// void sub_621350(uint32_t *a1);
// [0x621440] (7 bytes) sub_621440
// int sub_621440(int a1);
// [0x621450] (225 bytes) sub_621450
// int (**sub_621450(uint32_t *a1))(int);
// [0x621540] (7 bytes) sub_621540
// int sub_621540(int a1);
// [0x621550] (104 bytes) sub_621550
// void sub_621550(char *a1);
// [0x6215c0] (7 bytes) sub_6215C0
// int sub_6215C0(int a1);
// [0x6215d0] (116 bytes) sub_6215D0
// void sub_6215D0(uint32_t *a1);
// [0x621650] (559 bytes) sub_621650
// int sub_621650(int a1, char a2, int a3);
// [0x621880] (169 bytes) sub_621880
// uint32_t *sub_621880(uint32_t *a1);
// [0x621930] (20 bytes) sub_621930
// uint32_t *sub_621930(uint32_t *result, uint32_t *a2);
// [0x621950] (14 bytes) sub_621950
// uint32_t *sub_621950(uint32_t *result, int a2);
// [0x621960] (288 bytes) sub_621960
// unsigned int sub_621960(int a1, int a2, int a3, unsigned int a4, int a5);
// [0x621a80] (206 bytes) sub_621A80
// int sub_621A80(int a1);
// [0x621b50] (266 bytes) sub_621B50
// int sub_621B50(int a1);
// [0x621c60] (341 bytes) sub_621C60
// void *sub_621C60(uint32_t *a1, unsigned int a2);
// [0x621dc0] (462 bytes) sub_621DC0
// int sub_621DC0(int *a1, int a2, int a3);
// [0x621f90] (904 bytes) sub_621F90
// unsigned int sub_621F90(int a1, int a2);
// [0x622320] (95 bytes) sub_622320
// uint32_t *sub_622320(uint32_t *result, uint32_t *a2);
// [0x622380] (1520 bytes) sub_622380
// char *sub_622380();
// [0x622970] (306 bytes) sub_622970
// int sub_622970(int a1);
// [0x622ab0] (2699 bytes) sub_622AB0
// int *sub_622AB0(float *a1, int *a2);
// [0x623540] (116 bytes) sub_623540
// char sub_623540(int a1, int *a2);
// [0x6235d0] (1345 bytes) sub_6235D0
// int sub_6235D0(int a1);
// [0x623b20] (3729 bytes) sub_623B20
// int sub_623B20(int a1);
// [0x6249c0] (1894 bytes) sub_6249C0
// int sub_6249C0(int a1, int a2);
// [0x625130] (155 bytes) sub_625130
// uint32_t *sub_625130(int a1);
// [0x6251d0] (71 bytes) sub_6251D0
// int *sub_6251D0(int *result);
// [0x625220] (258 bytes) sub_625220
// int sub_625220(uint32_t *a1, uint8_t a2);
// [0x625330] (167 bytes) sub_625330
// uint32_t *sub_625330(uint32_t *a1);
// [0x6253e0] (216 bytes) sub_6253E0
// uint32_t *sub_6253E0(uint32_t *a1);
// [0x6254c0] (182 bytes) sub_6254C0
// int sub_6254C0(int a1);
// [0x625580] (352 bytes) sub_625580
// unsigned int sub_625580(int a1);
// [0x6256e0] (318 bytes) sub_6256E0
// int (**sub_6256E0(int a1))(int);
// [0x625820] (326 bytes) sub_625820
// void sub_625820(uint32_t *a1);
// [0x625970] (677 bytes) sub_625970
// uint32_t *sub_625970(int a1);
// [0x625c20] (589 bytes) sub_625C20
// uint32_t *sub_625C20(int a1);
// [0x625e70] (282 bytes) sub_625E70
// int32_t sub_625E70(int a1);
// [0x625f90] (298 bytes) sub_625F90
// void sub_625F90(void *a1);
// [0x6260c0] (87 bytes) sub_6260C0
// float *sub_6260C0(float *a1, uint32_t *a2);
// [0x626120] (87 bytes) sub_626120
// float *sub_626120(float *a1, uint32_t *a2);
// [0x626180] (69 bytes) sub_626180
// bool sub_626180();
// [0x6261d0] (69 bytes) sub_6261D0
// bool sub_6261D0();
// [0x626220] (22 bytes) sub_626220
// int sub_626220();
// [0x626240] (22 bytes) sub_626240
// int sub_626240();
// [0x626260] (43 bytes) sub_626260
// uint32_t *sub_626260(uint32_t *a1);
// [0x626290] (22 bytes) sub_626290
// int sub_626290();
// [0x6262b0] (241 bytes) sub_6262B0
// uint32_t *sub_6262B0(int a1, uint32_t *a2, char *a3);
// [0x626ae0] (153 bytes) sub_626AE0
// int sub_626AE0(int *a1, int a2);
// [0x626b80] (134 bytes) sub_626B80
// int sub_626B80(uint32_t *a1, uint32_t *a2);
// [0x626c10] (2148 bytes) sub_626C10
// void *sub_626C10(const char *a1, int a2);
// [0x627480] (586 bytes) sub_627480
// uint32_t *sub_627480(int a1, int a2);
// [0x6276d0] (286 bytes) sub_6276D0
// void sub_6276D0(const char *a1, glitch::video::IVideoDriver **a2, int a3);
// [0x627840] (933 bytes) sub_627840
// glitch::scene::ISceneNode *sub_627840(glitch::scene::ISceneNode *a1);
// [0x627bf0] (1099 bytes) sub_627BF0
// uint32_t *sub_627BF0(uint32_t *a1, char *needle);
// [0x628040] (999 bytes) sub_628040
// uint32_t *sub_628040(uint32_t *a1, int a2);
// [0x628430] (1764 bytes) sub_628430
// char *sub_628430(glitch::scene::ISceneNode *a1);
// [0x628b20] (277 bytes) sub_628B20
// int sub_628B20(char *s);
// [0x628c50] (9 bytes) sub_628C50
// void sub_628C50();
// [0x628c60] (879 bytes) sub_628C60
// int sub_628C60(int a1);
// [0x628fd0] (375 bytes) sub_628FD0
// time_t sub_628FD0(int a1);
// [0x629150] (500 bytes) sub_629150
// void sub_629150();
// [0x629350] (203 bytes) sub_629350
// int sub_629350(const char **a1);
// [0x629420] (91 bytes) sub_629420
// int sub_629420();
// [0x629480] (201 bytes) sub_629480
// bool sub_629480();
// [0x629550] (567 bytes) sub_629550
// int sub_629550();
// [0x629790] (24 bytes) sub_629790
// bool sub_629790();
// [0x6297b0] (22 bytes) sub_6297B0
// int sub_6297B0();
// [0x6297d0] (831 bytes) sub_6297D0
// int sub_6297D0();
// [0x629b10] (340 bytes) sub_629B10
// int sub_629B10(int a1);
// [0x629c70] (223 bytes) sub_629C70
// int sub_629C70(int a1);
// [0x629d50] (1078 bytes) sub_629D50
// uint32_t *sub_629D50(int a1, int a2);
// [0x62a190] (258 bytes) sub_62A190
// uint32_t *sub_62A190(int a1, int a2);
// [0x62a2a0] (2136 bytes) sub_62A2A0
// int sub_62A2A0( glitch::scene::ISceneNode *a1, char a2, int i, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, char a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40);
// [0x62ab00] (74 bytes) sub_62AB00
// int sub_62AB00(int *a1, int *a2);
// [0x62ab50] (529 bytes) sub_62AB50
// uint16_t *sub_62AB50(int *a1, int *a2, int a3);
// [0x62ad70] (51 bytes) sub_62AD70
// uint16_t *sub_62AD70(int a1, int a2, float a3, int a4);
// [0x62adb0] (1424 bytes) sub_62ADB0
// uint16_t *sub_62ADB0(int a1, float *a2, float a3, int a4);
// [0x62b340] (1322 bytes) sub_62B340
// int sub_62B340(int a1, float a2, unsigned int a3, int *a4);
// [0x62b870] (1527 bytes) sub_62B870
// uint16_t *sub_62B870(float *a1, int a2, float *a3);
// [0x62c630] (305 bytes) sub_62C630
// void *sub_62C630(int *a1);
// [0x62c770] (458 bytes) sub_62C770
// uint16_t *sub_62C770(int *a1);
// [0x62c940] (3303 bytes) sub_62C940
// void sub_62C940(int a1);
// [0x62d630] (459 bytes) sub_62D630
// uint16_t *sub_62D630(int *a1, int *a2);
// [0x62d800] (137 bytes) sub_62D800
// uint16_t *sub_62D800(float *a1, int *a2);
// [0x62d890] (529 bytes) sub_62D890
// uint16_t *sub_62D890(int *a1, int *a2, int a3, int a4);
// [0x62dab0] (470 bytes) sub_62DAB0
// uint16_t *sub_62DAB0(int *a1, int a2);
// [0x62dc90] (146 bytes) sub_62DC90
// uint16_t *sub_62DC90(float *a1, float a2, float a3, int a4);
// [0x62dd30] (2233 bytes) sub_62DD30
// void sub_62DD30(int *a1);
// [0x62e5f0] (626 bytes) sub_62E5F0
// unsigned int sub_62E5F0(int a1);
// [0x62e870] (531 bytes) sub_62E870
// int sub_62E870(int a1);
// [0x62ea90] (180 bytes) sub_62EA90
// int sub_62EA90(int a1, int *a2);
// [0x62eb60] (218 bytes) sub_62EB60
// int sub_62EB60(const char **a1, char *needle, void *dest);
// [0x62ec40] (221 bytes) sub_62EC40
// int sub_62EC40(int a1);
// [0x62ed20] (74 bytes) sub_62ED20
// uint32_t *sub_62ED20(int a1);
// [0x62ed70] (9 bytes) sub_62ED70
// void sub_62ED70();
// [0x62ed88] (1 bytes) nullsub_92
// void nullsub_92();
// [0x62ed90] (23 bytes) sub_62ED90
// bool sub_62ED90();
// [0x62edb0] (22 bytes) sub_62EDB0
// int sub_62EDB0();
// [0x62edd0] (181 bytes) sub_62EDD0
// int sub_62EDD0();
// [0x62ee90] (45 bytes) sub_62EE90
// int sub_62EE90();
// [0x62eec0] (177 bytes) sub_62EEC0
// int sub_62EEC0(int a1);
// [0x62ef80] (195 bytes) sub_62EF80
// int sub_62EF80(int a1);
// [0x62f050] (645 bytes) sub_62F050
// int sub_62F050(uint32_t *a1, char a2);
// [0x62f2e0] (219 bytes) sub_62F2E0
// int sub_62F2E0();
// [0x62f3c0] (134 bytes) sub_62F3C0
// int sub_62F3C0(int a1);
// [0x62f450] (353 bytes) sub_62F450
// int sub_62F450(char a1);
// [0x62f5d0] (30 bytes) sub_62F5D0
// char *sub_62F5D0();
// [0x62f5f0] (190 bytes) sub_62F5F0
// char *sub_62F5F0();
// [0x62f6b0] (22 bytes) sub_62F6B0
// int sub_62F6B0();
// [0x62f6d0] (1546 bytes) sub_62F6D0
// char *sub_62F6D0(char a1);
// [0x62fce8] (1 bytes) nullsub_93
// void nullsub_93();
// [0x62fcf0] (484 bytes) sub_62FCF0
// int *sub_62FCF0();
// [0x62fee0] (447 bytes) sub_62FEE0
// char *sub_62FEE0();
// [0x6300a0] (425 bytes) sub_6300A0
// int sub_6300A0(int a1);
// [0x630250] (131 bytes) sub_630250
// unsigned int sub_630250();
// [0x6302e0] (26 bytes) sub_6302E0
// void sub_6302E0();
// [0x630300] (839 bytes) sub_630300
// void sub_630300();
// [0x630650] (297 bytes) sub_630650
// int sub_630650(unsigned int a1);
// [0x630780] (652 bytes) sub_630780
// int sub_630780();
// [0x630a10] (193 bytes) sub_630A10
// int *sub_630A10();
// [0x630ae0] (47 bytes) sub_630AE0
// bool sub_630AE0(int a1);
// [0x630b10] (24 bytes) sub_630B10
// uint32_t *sub_630B10(uint32_t *a1);
// [0x630b30] (13 bytes) sub_630B30
// int sub_630B30(int a1);
// [0x630b40] (14 bytes) sub_630B40
// int sub_630B40(int a1, int a2);
// [0x630b50] (12 bytes) sub_630B50
// int sub_630B50(int a1);
// [0x630b60] (38 bytes) sub_630B60
// uint32_t *sub_630B60(uint32_t *a1);
// [0x630b90] (51 bytes) sub_630B90
// char *sub_630B90(int a1);
// [0x630bf0] (908 bytes) sub_630BF0
// int sub_630BF0(int a1);
// [0x630f80] (58 bytes) sub_630F80
// int sub_630F80(int a1);
// [0x630fc0] (158 bytes) sub_630FC0
// int sub_630FC0();
// [0x631060] (16 bytes) sub_631060
// int sub_631060(int a1);
// [0x631070] (48 bytes) sub_631070
// bool sub_631070(int a1);
// [0x6310a0] (32 bytes) sub_6310A0
// int sub_6310A0(int a1, int a2, int a3);
// [0x6310c0] (46 bytes) sub_6310C0
// int sub_6310C0(int a1, int a2);
// [0x6310f0] (541 bytes) sub_6310F0
// int sub_6310F0(int a1, int a2, int a3, char a4, char a5);
// [0x631310] (45 bytes) sub_631310
// int sub_631310(int a1, char a2, char a3);
// [0x631340] (80 bytes) sub_631340
// uint32_t *sub_631340(uint32_t *a1, int a2, int a3, int a4);
// [0x6313c0] (45 bytes) sub_6313C0
// int sub_6313C0(int a1, int a2);
// [0x6313f0] (12 bytes) sub_6313F0
// int sub_6313F0(int a1);
// [0x631400] (68 bytes) sub_631400
// int sub_631400(int a1);
// [0x631450] (53 bytes) sub_631450
// int sub_631450(int a1);
// [0x631490] (56 bytes) sub_631490
// int sub_631490(int a1);
// [0x6314d0] (60 bytes) sub_6314D0
// int sub_6314D0(int a1);
// [0x631510] (41 bytes) sub_631510
// int sub_631510(int a1);
// [0x631540] (41 bytes) sub_631540
// int sub_631540(int a1);
// [0x631570] (41 bytes) sub_631570
// int sub_631570(int a1);
// [0x6315f0] (15 bytes) sub_6315F0
// int sub_6315F0(int a1);
// [0x631600] (82 bytes) sub_631600
// int sub_631600(int a1, int a2);
// [0x631660] (53 bytes) sub_631660
// int sub_631660(int a1, int a2);
// [0x6316a0] (14 bytes) sub_6316A0
// int sub_6316A0(int a1);
// [0x6316b0] (252 bytes) sub_6316B0
// int *sub_6316B0(int *a1, int a2, int a3);
// [0x6317b0] (22 bytes) sub_6317B0
// int sub_6317B0();
// [0x6317d0] (2935 bytes) sub_6317D0
// int sub_6317D0(int a1);
// [0x632350] (208 bytes) sub_632350
// int sub_632350(int a1, int a2);
// [0x632470] (152 bytes) sub_632470
// int sub_632470(int a1, int a2);
// [0x632510] (291 bytes) sub_632510
// const char *sub_632510(int a1);
// [0x632640] (16 bytes) sub_632640
// int sub_632640(int a1);
// [0x632650] (133 bytes) sub_632650
// int sub_632650(uint32_t *a1);
// [0x6326e0] (133 bytes) sub_6326E0
// int sub_6326E0(uint32_t *a1);
// [0x632770] (133 bytes) sub_632770
// int sub_632770(uint32_t *a1);
// [0x632800] (133 bytes) sub_632800
// int sub_632800(uint32_t *a1);
// [0x632890] (80 bytes) sub_632890
// bool sub_632890(int a1, int a2);
// [0x6328e0] (22 bytes) sub_6328E0
// int sub_6328E0();
// [0x632900] (93 bytes) sub_632900
// int sub_632900(int a1, int a2);
// [0x632960] (129 bytes) sub_632960
// int *sub_632960(int a1, int a2, int a3);
// [0x6329f0] (751 bytes) sub_6329F0
// int sub_6329F0(int a1, int a2);
// [0x632ce0] (96 bytes) sub_632CE0
// int sub_632CE0(int a1, int a2);
// [0x632d40] (230 bytes) sub_632D40
// int sub_632D40(int a1);
// [0x632e30] (131 bytes) sub_632E30
// unsigned int *sub_632E30(uint32_t *a1);
// [0x632ec0] (180 bytes) sub_632EC0
// bool sub_632EC0(uint32_t *a1, int a2, int a3);
// [0x632f80] (176 bytes) sub_632F80
// bool sub_632F80(uint32_t *a1, int a2, int a3, int a4);
// [0x633030] (623 bytes) sub_633030
// int sub_633030(uint32_t *a1, int a2, char a3);
// [0x6332a0] (632 bytes) sub_6332A0
// uint32_t *sub_6332A0(uint32_t *a1, int a2, int a3);
// [0x633520] (120 bytes) sub_633520
// char sub_633520(int a1, int a2, char a3);
// [0x6335a0] (591 bytes) sub_6335A0
// int sub_6335A0(int a1, int a2);
// [0x6337f0] (343 bytes) sub_6337F0
// bool sub_6337F0(int a1, int a2);
// [0x633950] (150 bytes) sub_633950
// int sub_633950(int a1, int a2);
// [0x6339f0] (116 bytes) sub_6339F0
// int sub_6339F0(int a1, int a2);
// [0x633a70] (68 bytes) sub_633A70
// bool sub_633A70(int a1, int a2);
// [0x633ac0] (85 bytes) sub_633AC0
// int sub_633AC0(int a1, int a2);
// [0x633b20] (177 bytes) sub_633B20
// int sub_633B20();
// [0x633be0] (1366 bytes) sub_633BE0
// void sub_633BE0(uint32_t *a1, void **a2);
// [0x634140] (417 bytes) sub_634140
// int sub_634140(uint32_t *a1);
// [0x6342f0] (96 bytes) sub_6342F0
// int sub_6342F0(int a1, int a2, int a3);
// [0x634350] (395 bytes) sub_634350
// int sub_634350(int a1, int a2, int a3);
// [0x6344e0] (316 bytes) sub_6344E0
// int sub_6344E0(int a1);
// [0x634620] (369 bytes) sub_634620
// void sub_634620(int a1);
// [0x6347a0] (91 bytes) sub_6347A0
// uint32_t *sub_6347A0();
// [0x634800] (175 bytes) sub_634800
// int sub_634800(int a1);
// [0x6348c0] (157 bytes) sub_6348C0
// void sub_6348C0(int a1);
// [0x634980] (451 bytes) sub_634980
// int sub_634980(int a1);
// [0x634b58] (1 bytes) nullsub_94
// void nullsub_94();
// [0x634bc0] (1004 bytes) sub_634BC0
// int sub_634BC0(int a1, int a2, char a3);
// [0x634fb0] (941 bytes) sub_634FB0
// int sub_634FB0(uint32_t *a1, uint32_t *a2, uint32_t *a3, char a4);
// [0x635360] (669 bytes) sub_635360
// int sub_635360(int a1, int a2, uint32_t *a3, char a4);
// [0x635600] (1394 bytes) sub_635600
// int sub_635600(int a1);
// [0x635b88] (1 bytes) nullsub_95
// void nullsub_95();
// [0x635b90] (44 bytes) sub_635B90
// int sub_635B90(int a1, int a2);
// [0x635bc0] (76 bytes) sub_635BC0
// int sub_635BC0(int a1);
// [0x635c10] (221 bytes) sub_635C10
// int sub_635C10(int a1, int *a2, int a3);
// [0x635cf0] (71 bytes) sub_635CF0
// void sub_635CF0(int a1, int a2);
// [0x635d40] (32 bytes) sub_635D40
// void sub_635D40(int a1);
// [0x635d60] (511 bytes) sub_635D60
// int sub_635D60(int a1);
// [0x635f68] (1 bytes) nullsub_96
// void nullsub_96();
// [0x635f70] (1064 bytes) sub_635F70
// uint32_t *sub_635F70(int a1, int a2);
// [0x6363a0] (126 bytes) sub_6363A0
// int sub_6363A0(int a1, glf **a2);
// [0x6366b0] (84 bytes) sub_6366B0
// int sub_6366B0(int a1);
// [0x636710] (210 bytes) sub_636710
// float *sub_636710(float *a1, float *a2);
// [0x6368e0] (62 bytes) sub_6368E0
// int sub_6368E0(int a1, float *a2);
// [0x636920] (367 bytes) sub_636920
// float *sub_636920(float *a1, float *a2, float *a3, float a4, char a5);
// [0x636a90] (199 bytes) sub_636A90
// float *sub_636A90(float *a1, float *a2, float *a3, float a4);
// [0x636bc0] (131 bytes) sub_636BC0
// uint32_t *sub_636BC0(uint32_t *a1, int a2);
// [0x636c50] (1357 bytes) sub_636C50
// uint32_t *sub_636C50(int a1, int a2);
// [0x6371a0] (132 bytes) sub_6371A0
// int sub_6371A0(int a1);
// [0x637230] (56 bytes) sub_637230
// int sub_637230(int a1, int a2);
// [0x637270] (69 bytes) sub_637270
// uint32_t *sub_637270(uint32_t *a1, int a2);
// [0x6372c0] (56 bytes) sub_6372C0
// int sub_6372C0(int a1, int a2);
// [0x637300] (96 bytes) sub_637300
// int sub_637300(int a1, int a2);
// [0x637360] (182 bytes) sub_637360
// uint32_t *sub_637360(uint32_t *a1, int a2);
// [0x637420] (126 bytes) sub_637420
// int sub_637420(int a1, glf **a2);
// [0x6374a0] (35 bytes) sub_6374A0
// int sub_6374A0(int a1, int a2);
// [0x6374d0] (64 bytes) sub_6374D0
// int sub_6374D0(uint32_t **a1);
// [0x637510] (9 bytes) sub_637510
// int sub_637510();
// [0x637560] (76 bytes) sub_637560
// uint32_t *sub_637560(uint32_t *a1, int a2);
// [0x6375b0] (56 bytes) sub_6375B0
// int sub_6375B0(int a1, int a2);
// [0x637600] (41 bytes) sub_637600
// uint32_t *sub_637600(uint32_t *a1, int a2);
// [0x637630] (119 bytes) sub_637630
// int sub_637630(int a1, int a2);
// [0x6376b0] (30 bytes) sub_6376B0
// int sub_6376B0(int a1, uint32_t *a2);
// [0x6376d0] (214 bytes) sub_6376D0
// int sub_6376D0(int a1);
// [0x6377b0] (344 bytes) sub_6377B0
// int sub_6377B0(uint32_t *a1);
// [0x637910] (12 bytes) sub_637910
// int sub_637910();
// [0x637920] (64 bytes) sub_637920
// int sub_637920(uint32_t *a1);
// [0x637960] (162 bytes) sub_637960
// uint32_t *sub_637960(uint32_t *a1);
// [0x637a30] (440 bytes) sub_637A30
// void sub_637A30(int a1);
// [0x637bf0] (78 bytes) sub_637BF0
// int sub_637BF0(int a1);
// [0x637c40] (172 bytes) sub_637C40
// char *sub_637C40(int a1);
// [0x637cf0] (95 bytes) sub_637CF0
// int (**sub_637CF0(uint32_t *a1))(int);
// [0x637d50] (73 bytes) sub_637D50
// bool sub_637D50(uint32_t *a1);
// [0x637da0] (95 bytes) sub_637DA0
// int (**sub_637DA0(uint32_t *a1))(int);
// [0x637e00] (73 bytes) sub_637E00
// bool sub_637E00(uint32_t *a1);
// [0x637e50] (83 bytes) sub_637E50
// void sub_637E50();
// [0x637eb0] (61 bytes) sub_637EB0
// bool sub_637EB0();
// [0x637ef0] (348 bytes) sub_637EF0
// void sub_637EF0(int a1);
// [0x638050] (574 bytes) sub_638050
// void sub_638050(int a1);
// [0x638290] (93 bytes) sub_638290
// void sub_638290(int a1);
// [0x6382f0] (191 bytes) sub_6382F0
// void sub_6382F0(int a1, int a2);
// [0x6383b0] (199 bytes) sub_6383B0
// void sub_6383B0(int a1, int a2);
// [0x638480] (293 bytes) sub_638480
// int (**sub_638480(uint32_t *a1))(int);
// [0x6385b0] (786 bytes) sub_6385B0
// int sub_6385B0(int a1);
// [0x6388e0] (103 bytes) sub_6388E0
// void sub_6388E0(uint32_t *a1);
// [0x638950] (103 bytes) sub_638950
// void sub_638950(uint32_t *a1);
// [0x6389c0] (653 bytes) sub_6389C0
// int sub_6389C0();
// [0x638c50] (301 bytes) sub_638C50
// void sub_638C50(uint32_t *a1);
// [0x638d80] (193 bytes) sub_638D80
// int sub_638D80(uint32_t *a1, glitch::core::CMatrix4<float> *a2);
// [0x638e50] (190 bytes) sub_638E50
// uint32_t *sub_638E50(void **a1);
// [0x638f10] (35 bytes) sub_638F10
// int sub_638F10();
// [0x638f40] (96 bytes) sub_638F40
// int sub_638F40();
// [0x638fa0] (1650 bytes) sub_638FA0
// int sub_638FA0(int a1, int a2);
// [0x639620] (3283 bytes) sub_639620
// int sub_639620(int a1);
// [0x63a530] (1949 bytes) sub_63A530
// int sub_63A530();
// [0x63ace0] (839 bytes) sub_63ACE0
// int sub_63ACE0(uint8_t *a1);
// [0x63b030] (2485 bytes) sub_63B030
// 0x63b030 sub_63B030
// [0x63b9f0] (288 bytes) sub_63B9F0
// int sub_63B9F0(int a1, int a2, int a3, int a4, float a5, float a6);
// [0x63bb10] (465 bytes) sub_63BB10
// int sub_63BB10(int a1, int a2, int a3, int a4, int a5, float a6, float a7);
// [0x63bcf0] (67 bytes) sub_63BCF0
// int sub_63BCF0();
// [0x63bd40] (118 bytes) sub_63BD40
// int sub_63BD40(int a1);
// [0x63bdc0] (116 bytes) sub_63BDC0
// char *sub_63BDC0(uint32_t *a1);
// [0x63be40] (105 bytes) sub_63BE40
// int sub_63BE40();
// [0x63beb0] (59 bytes) sub_63BEB0
// int sub_63BEB0();
// [0x63bef0] (59 bytes) sub_63BEF0
// int sub_63BEF0();
// [0x63bf30] (59 bytes) sub_63BF30
// int sub_63BF30();
// [0x63bf70] (266 bytes) sub_63BF70
// int (**sub_63BF70(uint32_t *a1))(int);
// [0x63c080] (1573 bytes) sub_63C080
// int sub_63C080(int a1, char a2);
// [0x63c6b0] (799 bytes) sub_63C6B0
// int sub_63C6B0(int a1, char a2, __guard *a3, char a4);
// [0x63c9d0] (225 bytes) sub_63C9D0
// int sub_63C9D0();
// [0x63cac0] (647 bytes) sub_63CAC0
// int sub_63CAC0();
// [0x63cd50] (274 bytes) sub_63CD50
// void sub_63CD50(uint32_t *a1);
// [0x63ce70] (1892 bytes) sub_63CE70
// int sub_63CE70(long double a1, int a2);
// [0x63d5e0] (183 bytes) sub_63D5E0
// int sub_63D5E0(int a1, int a2);
// [0x63d6a0] (92 bytes) sub_63D6A0
// bool sub_63D6A0(int a1, int a2);
// [0x63d700] (573 bytes) sub_63D700
// int sub_63D700(int a1, int a2, int a3, char a4, char a5, char a6);
// [0x63d940] (871 bytes) sub_63D940
// char sub_63D940(uint32_t *a1);
// [0x63dcb0] (183 bytes) sub_63DCB0
// int sub_63DCB0(uint8_t *a1);
// [0x63dd70] (2183 bytes) sub_63DD70
// int sub_63DD70(long double a1, uint32_t *a2, uint8_t a3, char a4, int a5);
// [0x63e600] (245 bytes) sub_63E600
// char *sub_63E600(int a1);
// [0x63e700] (407 bytes) sub_63E700
// int sub_63E700(long double a1);
// [0x63e8a0] (391 bytes) sub_63E8A0
// int sub_63E8A0(long double a1);
// [0x63ea30] (2127 bytes) sub_63EA30
// int sub_63EA30(uint32_t *a1, char a2, int a3, long double a4);
// [0x63f280] (864 bytes) sub_63F280
// int sub_63F280(long double a1, int a2);
// [0x63f5e0] (62 bytes) sub_63F5E0
// bool sub_63F5E0(int a1);
// [0x63f620] (2909 bytes) sub_63F620
// int sub_63F620(int a1, int a2);
// [0x640180] (3244 bytes) sub_640180
// int sub_640180( int result, int *a2, unsigned int a3, std::vector<int, GameAllocator<int>> *a4);
// [0x640e30] (3284 bytes) sub_640E30
// int sub_640E30(uint32_t *a1);
// [0x641b10] (267 bytes) sub_641B10
// void sub_641B10(int a1, int a2, int a3, int a4);
// [0x641c20] (1829 bytes) sub_641C20
// int sub_641C20(int a1, int *a2, int a3, float *a4, float *a5);
// [0x642350] (92 bytes) sub_642350
// int sub_642350(int a1, int a2, int a3, float *a4, float *a5);
// [0x6423b0] (549 bytes) sub_6423B0
// int sub_6423B0(int a1, int a2, float *a3, float *a4);
// [0x6425e0] (2855 bytes) sub_6425E0
// int sub_6425E0(int a1, int a2);
// [0x643110] (664 bytes) sub_643110
// void sub_643110();
// [0x6433b0] (611 bytes) sub_6433B0
// void sub_6433B0(int a1);
// [0x643620] (88 bytes) sub_643620
// int sub_643620(uint32_t *a1);
// [0x643680] (147 bytes) sub_643680
// int sub_643680(uint32_t *a1, int a2);
// [0x643720] (787 bytes) sub_643720
// int sub_643720(uint32_t *a1, int a2);
// [0x643a40] (220 bytes) sub_643A40
// int (**sub_643A40(int a1))(int);
// [0x643b20] (56 bytes) sub_643B20
// void sub_643B20(void *a1);
// [0x643b60] (67 bytes) sub_643B60
// void sub_643B60(uint32_t *a1, int a2);
// [0x643bb0] (2223 bytes) sub_643BB0
// 0x643bb0 sub_643BB0
// [0x644460] (99 bytes) sub_644460
// int (**sub_644460(uint32_t *a1, int a2))(int);
// [0x6444d0] (103 bytes) sub_6444D0
// int (**sub_6444D0(int a1, int a2))(int);
// [0x644540] (357 bytes) sub_644540
// uint32_t *sub_644540(int a1);
// [0x6446b0] (489 bytes) sub_6446B0
// void sub_6446B0(int a1, int a2, float *a3, float *a4);
// [0x6448a0] (357 bytes) sub_6448A0
// uint32_t *sub_6448A0(int a1);
// [0x644a10] (75 bytes) sub_644A10
// int (**sub_644A10(uint32_t *a1))(int);
// [0x644a60] (83 bytes) sub_644A60
// void sub_644A60(uint32_t *a1);
// [0x644ac0] (1029 bytes) sub_644AC0
// uint32_t *sub_644AC0(int a1);
// [0x644ed0] (629 bytes) sub_644ED0
// void sub_644ED0(uint32_t *a1, int a2);
// [0x645150] (2953 bytes) sub_645150
// 0x645150 sub_645150
// [0x645ce0] (2824 bytes) sub_645CE0
// int sub_645CE0(int a1);
// [0x6467f0] (394 bytes) sub_6467F0
// int (**sub_6467F0(int a1))(int);
// [0x646980] (56 bytes) sub_646980
// void sub_646980(void *a1);
// [0x6469c0] (1346 bytes) sub_6469C0
// int sub_6469C0(float *a1);
// [0x646f10] (249 bytes) sub_646F10
// int sub_646F10(int a1, int *a2);
// [0x647010] (239 bytes) sub_647010
// int sub_647010(int a1, int *a2);
// [0x647100] (1471 bytes) sub_647100
// uint32_t *sub_647100(int a1, float *a2, uint32_t *a3);
// [0x6476c0] (4179 bytes) sub_6476C0
// int sub_6476C0(int a1, float *a2, int a3);
// [0x648720] (1007 bytes) sub_648720
// int *sub_648720(int a1, int a2);
// [0x648b10] (4179 bytes) sub_648B10
// int sub_648B10(int a1, float *a2, int a3);
// [0x64a950] (538 bytes) sub_64A950
// int sub_64A950(int a1, uint32_t *a2);
// [0x64ab70] (1235 bytes) sub_64AB70
// int sub_64AB70(int a1, int a2, int a3, float *a4);
// [0x64b050] (3801 bytes) sub_64B050
// int sub_64B050(int a1);
// [0x64bf30] (23 bytes) sub_64BF30
// int sub_64BF30(int a1);
// [0x64bf50] (793 bytes) sub_64BF50
// int sub_64BF50(int a1, int a2);
// [0x64c270] (1168 bytes) sub_64C270
// int sub_64C270(int a1, int a2);
// [0x64c700] (217 bytes) sub_64C700
// int sub_64C700();
// [0x64c7e0] (175 bytes) sub_64C7E0
// int sub_64C7E0();
// [0x64c890] (549 bytes) sub_64C890
// int sub_64C890(int a1);
// [0x64cac0] (3570 bytes) sub_64CAC0
// int sub_64CAC0(int a1);
// [0x64d8c0] (5704 bytes) sub_64D8C0
// char sub_64D8C0(int a1);
// [0x64ef10] (284 bytes) sub_64EF10
// uint32_t *sub_64EF10(uint32_t *a1, int a2, int *a3, int *a4);
// [0x64f030] (215 bytes) sub_64F030
// int sub_64F030(int a1, int *a2);
// [0x64f110] (341 bytes) sub_64F110
// int sub_64F110(int a1, int a2);
// [0x64f270] (723 bytes) sub_64F270
// long double sub_64F270(int a1, float *a2, int a3);
// [0x64f550] (116 bytes) sub_64F550
// bool sub_64F550(int a1, char **a2);
// [0x64f5d0] (792 bytes) sub_64F5D0
// void sub_64F5D0(int a1, int a2);
// [0x64f8f0] (1015 bytes) sub_64F8F0
// char sub_64F8F0(int a1, long double a2, int a3);
// [0x64fcf0] (7 bytes) sub_64FCF0
// int sub_64FCF0(int a1, int a2, int a3);
// [0x64fd00] (1365 bytes) sub_64FD00
// char sub_64FD00(int a1, long double a2, int a3, int a4, int a5);
// [0x650260] (5563 bytes) sub_650260
// int sub_650260(long double a1, int a2);
// [0x651820] (207 bytes) sub_651820
// void sub_651820(int a1);
// [0x6518f0] (3222 bytes) sub_6518F0
// void sub_6518F0(int a1, int a2);
// [0x652590] (190 bytes) sub_652590
// int sub_652590(int a1);
// [0x652650] (2282 bytes) sub_652650
// int sub_652650(long double a1, int a2);
// [0x652f40] (163 bytes) sub_652F40
// int sub_652F40();
// [0x652ff0] (24 bytes) sub_652FF0
// uint32_t *sub_652FF0(uint32_t *a1);
// [0x653010] (22 bytes) sub_653010
// int *sub_653010();
// [0x653038] (1 bytes) nullsub_97
// void nullsub_97();
// [0x653048] (1 bytes) nullsub_98
// void nullsub_98();
// [0x653058] (1 bytes) nullsub_99
// void nullsub_99();
// [0x653068] (1 bytes) nullsub_100
// void nullsub_100();
// [0x653078] (1 bytes) nullsub_101
// void nullsub_101();
// [0x653088] (1 bytes) nullsub_102
// void nullsub_102();
// [0x653098] (1 bytes) nullsub_103
// void nullsub_103();
// [0x6530a8] (1 bytes) nullsub_104
// void nullsub_104();
// [0x6530b8] (1 bytes) nullsub_105
// void nullsub_105();
// [0x6530c0] (12 bytes) sub_6530C0
// int sub_6530C0();
// [0x6530d0] (24 bytes) sub_6530D0
// uint32_t *sub_6530D0(uint32_t *a1);
// [0x6530f0] (22 bytes) sub_6530F0
// int *sub_6530F0();
// [0x653110] (13 bytes) sub_653110
// int sub_653110(int a1);
// [0x653120] (9 bytes) sub_653120
// int sub_653120();
// [0x653130] (22 bytes) sub_653130
// int *sub_653130();
// [0x653150] (22 bytes) sub_653150
// int *sub_653150();
// [0x653170] (22 bytes) sub_653170
// int *sub_653170();
// [0x653190] (9 bytes) sub_653190
// int sub_653190();
// [0x6531a8] (1 bytes) nullsub_106
// void nullsub_106();
// [0x6531b8] (1 bytes) nullsub_107
// void nullsub_107();
// [0x6531c0] (38 bytes) sub_6531C0
// int sub_6531C0(uint8_t *a1);
// [0x6531f0] (22 bytes) sub_6531F0
// int *sub_6531F0();
// [0x653218] (1 bytes) nullsub_108
// void nullsub_108();
// [0x653228] (1 bytes) nullsub_109
// void nullsub_109();
// [0x653230] (29 bytes) sub_653230
// int sub_653230(int a1);
// [0x653250] (15 bytes) sub_653250
// int sub_653250(int a1);
// [0x653260] (22 bytes) sub_653260
// int *sub_653260();
// [0x653280] (22 bytes) sub_653280
// int *sub_653280();
// [0x6532a0] (22 bytes) sub_6532A0
// int *sub_6532A0();
// [0x6532c0] (22 bytes) sub_6532C0
// int *sub_6532C0();
// [0x6532e0] (22 bytes) sub_6532E0
// int *sub_6532E0();
// [0x653300] (28 bytes) sub_653300
// int sub_653300(int a1);
// [0x653320] (24 bytes) sub_653320
// uint32_t *sub_653320(uint32_t *a1);
// [0x653340] (24 bytes) sub_653340
// uint32_t *sub_653340(uint32_t *a1);
// [0x653368] (1 bytes) nullsub_110
// void nullsub_110();
// [0x653378] (1 bytes) nullsub_111
// void nullsub_111();
// [0x653388] (1 bytes) nullsub_112
// void nullsub_112();
// [0x653390] (13 bytes) sub_653390
// int sub_653390(int a1);
// [0x6533a0] (12 bytes) sub_6533A0
// int sub_6533A0(int a1);
// [0x6533b0] (12 bytes) sub_6533B0
// int sub_6533B0();
// [0x6533c0] (44 bytes) sub_6533C0
// long double sub_6533C0(int a1);
// [0x6533f0] (12 bytes) sub_6533F0
// int sub_6533F0(int a1);
// [0x653400] (24 bytes) sub_653400
// uint32_t *sub_653400(uint32_t *a1);
// [0x653420] (24 bytes) sub_653420
// uint32_t *sub_653420(uint32_t *a1);
// [0x653440] (24 bytes) sub_653440
// uint32_t *sub_653440(uint32_t *a1);
// [0x653460] (24 bytes) sub_653460
// uint32_t *sub_653460(uint32_t *a1);
// [0x653480] (42 bytes) sub_653480
// void sub_653480(uint32_t *a1);
// [0x6534b0] (42 bytes) sub_6534B0
// void sub_6534B0(uint32_t *a1);
// [0x6534e0] (42 bytes) sub_6534E0
// void sub_6534E0(uint32_t *a1);
// [0x653510] (42 bytes) sub_653510
// void sub_653510(uint32_t *a1);
// [0x653540] (42 bytes) sub_653540
// void sub_653540(uint32_t *a1);
// [0x653570] (42 bytes) sub_653570
// void sub_653570(uint32_t *a1);
// [0x6535a0] (42 bytes) sub_6535A0
// void sub_6535A0(uint32_t *a1);
// [0x6535d0] (42 bytes) sub_6535D0
// void sub_6535D0(uint32_t *a1);
// [0x653600] (46 bytes) sub_653600
// void sub_653600(uint8_t *a1);
// [0x653630] (40 bytes) std::vector<glitch::core::vector3d<float>,GameAllocator<glitch::core::vector3d<float>>>::~vector()
// void std::vector<glitch::core::vector3d<float>,GameAllocator<glitch::core::vector3d<float>>>::~vector( std::vector<glitch::core::vector3d<float>, GameAllocator<glitch::core::vector3d<float>>> *this);
// [0x653660] (40 bytes) std::vector<glitch::video::SColor,GameAllocator<glitch::video::SColor>>::~vector()
// void std::vector<glitch::video::SColor,GameAllocator<glitch::video::SColor>>::~vector( std::vector<glitch::video::SColor, GameAllocator<glitch::video::SColor>> *this);
// [0x653690] (40 bytes) std::vector<unsigned short,GameAllocator<unsigned short>>::~vector()
// void std::vector<unsigned short,GameAllocator<unsigned short>>::~vector( std::vector<unsigned short, GameAllocator<unsigned short>> *this);
// [0x6536c0] (42 bytes) sub_6536C0
// void sub_6536C0(glitch::collada::CColladaFactory *a1);
// [0x6536f0] (42 bytes) sub_6536F0
// void sub_6536F0(glitch::collada::CColladaFactory *a1);
// [0x653720] (114 bytes) std::basic_stringbuf<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::pbackfail(int)
// int std::basic_stringbuf<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::pbackfail(;
// [0x6537a0] (282 bytes) std::basic_stringbuf<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::seekpos(std::fpos<mbstate_t>,std::_Ios_Openmode)
// uint32_t *std::basic_stringbuf<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::seekpos(;
// [0x6538c0] (42 bytes) sub_6538C0
// void sub_6538C0(glitch::collada::CColladaFactory *a1);
// [0x6538f0] (42 bytes) sub_6538F0
// void sub_6538F0(glitch::collada::CColladaFactory *a1);
// [0x653920] (64 bytes) sub_653920
// void sub_653920(glitch::collada::CColladaFactory *a1);
// [0x653960] (64 bytes) sub_653960
// void sub_653960(glitch::collada::CColladaFactory *a1);
// [0x6539a0] (64 bytes) sub_6539A0
// void sub_6539A0(glitch::collada::CColladaFactory *a1);
// [0x6539e0] (64 bytes) sub_6539E0
// void sub_6539E0(glitch::collada::CColladaFactory *a1);
// [0x653a20] (42 bytes) sub_653A20
// void sub_653A20(glitch::collada::CColladaFactory *a1);
// [0x653a50] (64 bytes) sub_653A50
// void sub_653A50(glitch::collada::CColladaFactory *a1);
// [0x653a90] (55 bytes) std::basic_stringbuf<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::underflow(void)
// int std::basic_stringbuf<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::underflow(;
// [0x653ad0] (38 bytes) std::basic_stringbuf<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::showmanyc(void)
// int std::basic_stringbuf<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::showmanyc(;
// [0x653b00] (679 bytes) std::basic_stringbuf<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::seekoff(long long,std::_Ios_Seekdir,std::_Ios_Openmode)
// uint32_t *std::basic_stringbuf<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::seekoff(;
// [0x653db0] (117 bytes) std::basic_stringbuf<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::~basic_stringbuf()
// void std::basic_stringbuf<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::~basic_stringbuf(;
// [0x653e30] (109 bytes) std::basic_stringbuf<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::~basic_stringbuf()
// void std::basic_stringbuf<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::~basic_stringbuf(;
// [0x653ea0] (15 bytes) `virtual thunk to'std::basic_stringstream<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::~basic_stringstream()
// void `virtual thunk to'std::basic_stringstream<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::~basic_stringstream(;
// [0x653eb0] (7 bytes) `non-virtual thunk to'std::basic_stringstream<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::~basic_stringstream()
// void `non-virtual thunk to'std::basic_stringstream<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::~basic_stringstream(;
// [0x653ec0] (175 bytes) std::basic_stringstream<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::~basic_stringstream()
// void std::basic_stringstream<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::~basic_stringstream(;
// [0x653f70] (15 bytes) `virtual thunk to'std::basic_stringstream<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::~basic_stringstream()
// void `virtual thunk to'std::basic_stringstream<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::~basic_stringstream(;
// [0x653f80] (7 bytes) `non-virtual thunk to'std::basic_stringstream<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::~basic_stringstream()
// void `non-virtual thunk to'std::basic_stringstream<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::~basic_stringstream(;
// [0x653f90] (183 bytes) std::basic_stringstream<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::~basic_stringstream()
// void std::basic_stringstream<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::~basic_stringstream(;
// [0x654050] (966 bytes) std::basic_stringbuf<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::overflow(int)
// int std::basic_stringbuf<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::overflow(;
// [0x654420] (198 bytes) std::basic_stringbuf<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::setbuf(char *,int)
// std::basic_stringbuf<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *std::basic_stringbuf<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::setbuf(;
// [0x6544f0] (571 bytes) sub_6544F0
// float *sub_6544F0(float *a1, float *a2);
// [0x654730] (279 bytes) sub_654730
// float *sub_654730(float *a1, float *a2, float *a3);
// [0x654850] (89 bytes) sub_654850
// int (**sub_654850(int a1))(int);
// [0x6548b0] (104 bytes) sub_6548B0
// void sub_6548B0(uint32_t **a1);
// [0x654920] (108 bytes) sub_654920
// int (**sub_654920(int a1))(int);
// [0x654990] (97 bytes) sub_654990
// void sub_654990(uint32_t **a1);
// [0x654a00] (161 bytes) sub_654A00
// int (**sub_654A00(int a1))(int);
// [0x654ab0] (169 bytes) sub_654AB0
// void sub_654AB0(uint32_t *a1);
// [0x654b60] (128 bytes) sub_654B60
// void *grapher::ActorManager::GetInstance();
// [0x654be0] (86 bytes) sub_654BE0
// bool sub_654BE0(int a1, char a2);
// [0x654c40] (60 bytes) sub_654C40
// int sub_654C40(int a1);
// [0x654c80] (91 bytes) sub_654C80
// int sub_654C80( int a1, int a2, int a3, int a4, int a5, std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a6, std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a7);
// [0x654ce0] (81 bytes) sub_654CE0
// glitch::collada::CColladaFactory *sub_654CE0(glitch::collada::CColladaFactory *a1);
// [0x654d40] (97 bytes) sub_654D40
// int sub_654D40(int a1);
// [0x654db0] (58 bytes) sub_654DB0
// int sub_654DB0(int a1);
// [0x654df0] (66 bytes) sub_654DF0
// int sub_654DF0(int a1);
// [0x654e40] (89 bytes) sub_654E40
// int sub_654E40(int a1);
// [0x654ea0] (89 bytes) sub_654EA0
// int sub_654EA0(int a1);
// [0x654f00] (67 bytes) sub_654F00
// int sub_654F00(int a1, int a2, int a3, int a4);
// [0x654f50] (97 bytes) sub_654F50
// glitch::collada::CColladaFactory *sub_654F50(glitch::collada::CColladaFactory *a1);
// [0x654fc0] (97 bytes) sub_654FC0
// int sub_654FC0(int a1);
// [0x655030] (91 bytes) sub_655030
// int sub_655030( int a1, int a2, int a3, int a4, int a5, std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a6, std::basic_string<char, std::char_traits<char>, glitch::core::SAllocator<char, (glitch::memory::E_MEMORY_HINT)0>> *a7);
// [0x655090] (81 bytes) sub_655090
// glitch::collada::CColladaFactory *sub_655090(glitch::collada::CColladaFactory *a1);
// [0x6550f0] (97 bytes) sub_6550F0
// int sub_6550F0(int a1);
// [0x655160] (58 bytes) sub_655160
// int sub_655160(int a1);
// [0x6551a0] (66 bytes) sub_6551A0
// int sub_6551A0(int a1);
// [0x6551f0] (89 bytes) sub_6551F0
// int sub_6551F0(int a1);
// [0x655250] (89 bytes) sub_655250
// int sub_655250(int a1);
// [0x6552b0] (67 bytes) sub_6552B0
// int sub_6552B0(int a1, int a2, int a3, int a4);
// [0x655300] (97 bytes) sub_655300
// glitch::collada::CColladaFactory *sub_655300(glitch::collada::CColladaFactory *a1);
// [0x655370] (97 bytes) sub_655370
// int sub_655370(int a1);
// [0x6553e0] (135 bytes) sub_6553E0
// int *sub_6553E0();
// [0x655470] (223 bytes) sub_655470
// int sub_655470(int a1);
// [0x655550] (1239 bytes) sub_655550
// const char *sub_655550(int a1);
// [0x655a30] (93 bytes) sub_655A30
// int sub_655A30(volatile int32_t **a1);
// [0x655a90] (28 bytes) sub_655A90
// uint32_t *sub_655A90(uint32_t *a1, uint32_t **a2);
// [0x655ab0] (71 bytes) sub_655AB0
// uint32_t **sub_655AB0(uint32_t **a1, uint32_t **a2);
// [0x655b00] (142 bytes) sub_655B00
// void *sub_655B00();
// [0x655b90] (142 bytes) sub_655B90
// void *sub_655B90();
// [0x655c20] (142 bytes) sub_655C20
// int *sub_655C20();
// [0x655cb0] (142 bytes) sub_655CB0
// int *sub_655CB0();
// [0x655d40] (142 bytes) sub_655D40
// int *sub_655D40();
// [0x655dd0] (208 bytes) sub_655DD0
// int *sub_655DD0();
// [0x655ea0] (142 bytes) sub_655EA0
// int *sub_655EA0();
// [0x655f30] (1118 bytes) sub_655F30
// int *sub_655F30();
// [0x656390] (142 bytes) sub_656390
// int *sub_656390();
// [0x656420] (142 bytes) sub_656420
// void *sub_656420();
// [0x6564b0] (153 bytes) std::vector<int,GameAllocator<int>>::vector(std::vector<int,GameAllocator<int>> const&)
// int std::vector<int,GameAllocator<int>>::vector( std::vector<int, GameAllocator<int>> *this, const std::vector<int, GameAllocator<int>> *a2);
// [0x656550] (531 bytes) sub_656550
// int sub_656550(unsigned int *a1);
// [0x656770] (42 bytes) sub_656770
// int sub_656770(int *a1);
// [0x6567a0] (169 bytes) sub_6567A0
// void sub_6567A0(uint32_t *a1, int a2);
// [0x656850] (87 bytes) std::vector<Gangstar::Handle<Vehicle,false>,GameAllocator<Gangstar::Handle<Vehicle,false>>>::~vector()
// void std::vector<Gangstar::Handle<Vehicle,false>,GameAllocator<Gangstar::Handle<Vehicle,false>>>::~vector( std::vector<Gangstar::Handle<Vehicle, false>, GameAllocator<Gangstar::Handle<Vehicle, false>>> *this);
// [0x6568b0] (75 bytes) sub_6568B0
// int (**sub_6568B0(uint32_t *a1))(int);
// [0x656900] (83 bytes) sub_656900
// void sub_656900(uint32_t *a1);
// [0x656960] (75 bytes) sub_656960
// int (**sub_656960(uint32_t *a1))(int);
// [0x6569b0] (83 bytes) sub_6569B0
// void sub_6569B0(uint32_t *a1);
// [0x656a10] (169 bytes) sub_656A10
// void sub_656A10(uint32_t *a1, int a2);
// [0x656ac0] (87 bytes) std::vector<Gangstar::Handle<NPC,false>,GameAllocator<Gangstar::Handle<NPC,false>>>::~vector()
// void std::vector<Gangstar::Handle<NPC,false>,GameAllocator<Gangstar::Handle<NPC,false>>>::~vector( std::vector<Gangstar::Handle<NPC, false>, GameAllocator<Gangstar::Handle<NPC, false>>> *this);
// [0x656b20] (169 bytes) sub_656B20
// void sub_656B20(uint32_t *a1, int a2);
// [0x656bd0] (87 bytes) std::vector<Gangstar::Handle<Player,false>,GameAllocator<Gangstar::Handle<Player,false>>>::~vector()
// void std::vector<Gangstar::Handle<Player,false>,GameAllocator<Gangstar::Handle<Player,false>>>::~vector( std::vector<Gangstar::Handle<Player, false>, GameAllocator<Gangstar::Handle<Player, false>>> *this);
// [0x656c30] (567 bytes) std::_Rb_tree<std::string,std::pair<std::string const,StoryManager::_DelayedNotification>,std::_Select1st<std::pair<std::string const,StoryManager::_DelayedNotification>>,std::less<std::string>,std::allocator<std::pair<std::string const,StoryManager::_DelayedNotification>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,StoryManager::_DelayedNotification>> *)
// void std::_Rb_tree<std::string,std::pair<std::string const,StoryManager::_DelayedNotification>,std::_Select1st<std::pair<std::string const,StoryManager::_DelayedNotification>>,std::less<std::string>,std::allocator<std::pair<std::string const,StoryManager::_DelayedNotification>>>::_M_erase( int a1, uint32_t *a2);
// [0x656e70] (436 bytes) std::vector<MountedWeaponScene::auxiliaryTurret *,std::allocator<MountedWeaponScene::auxiliaryTurret *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<MountedWeaponScene::auxiliaryTurret **,std::vector<MountedWeaponScene::auxiliaryTurret *,std::allocator<MountedWeaponScene::auxiliaryTurret *>>>,MountedWeaponScene::auxiliaryTurret * const&)
// void std::vector<MountedWeaponScene::auxiliaryTurret *>::_M_insert_aux(int a1, char *src, int *a3);
// [0x657030] (425 bytes) std::_Rb_tree<int,std::pair<int const,bool>,std::_Select1st<std::pair<int const,bool>>,std::less<int>,std::allocator<std::pair<int const,bool>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,bool>> *)
// void std::_Rb_tree<int,std::pair<int const,bool>,std::_Select1st<std::pair<int const,bool>>,std::less<int>,std::allocator<std::pair<int const,bool>>>::_M_erase( int a1, uint32_t *a2);
// [0x6571e0] (425 bytes) std::_Rb_tree<int,std::pair<int const,AnalogStickMov>,std::_Select1st<std::pair<int const,AnalogStickMov>>,std::less<int>,std::allocator<std::pair<int const,AnalogStickMov>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,AnalogStickMov>> *)
// void std::_Rb_tree<int,std::pair<int const,AnalogStickMov>,std::_Select1st<std::pair<int const,AnalogStickMov>>,std::less<int>,std::allocator<std::pair<int const,AnalogStickMov>>>::_M_erase( int a1, uint32_t *a2);
