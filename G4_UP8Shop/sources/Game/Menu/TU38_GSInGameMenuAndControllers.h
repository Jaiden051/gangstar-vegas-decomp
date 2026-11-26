#pragma once
// ============================================================================
// TU38_GSInGameMenuAndControllers.h
// Complete Translation Unit [38/41]
// Binary Range in lib/x86/libGangstar4.so: 0xc22af0 .. 0xc2aba0 (32 KB)
// Total Decompiled Functions in TU: 55 (100% coverage)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// Function Table in Translation Unit:
// [0xc22af0] (243 bytes) sub_C22AF0
// int sub_C22AF0();
// [0xc22bf0] (99 bytes) sub_C22BF0
// int sub_C22BF0(int a1, int a2);
// [0xc22c60] (137 bytes) sub_C22C60
// void sub_C22C60(uint32_t *a1);
// [0xc22cf0] (220 bytes) sub_C22CF0
// uint32_t *sub_C22CF0(uint32_t *a1);
// [0xc22dd0] (106 bytes) sub_C22DD0
// int sub_C22DD0(int a1, uint32_t *a2);
// [0xc22e40] (157 bytes) sub_C22E40
// int sub_C22E40(int a1, char *s);
// [0xc22ee0] (228 bytes) sub_C22EE0
// void sub_C22EE0(uint32_t *a1);
// [0xc22fd0] (1241 bytes) sub_C22FD0
// void sub_C22FD0(unsigned int a1, char *a2, int a3);
// [0xc234b0] (343 bytes) sub_C234B0
// void sub_C234B0(uint32_t *a1, int a2);
// [0xc23610] (222 bytes) sub_C23610
// void sub_C23610(uint32_t *a1, int a2);
// [0xc23700] (335 bytes) sub_C23700
// void sub_C23700(uint32_t *a1, int a2);
// [0xc23850] (222 bytes) sub_C23850
// void sub_C23850(uint32_t *a1, int a2);
// [0xc23940] (868 bytes) sub_C23940
// float sub_C23940(float result, int a2, int a3, float a4, uint8_t a5);
// [0xc23cb0] (145 bytes) sub_C23CB0
// void sub_C23CB0(uint32_t *a1);
// [0xc24280] (95 bytes) sub_C24280
// int sub_C24280(int a1);
// [0xc242e0] (1479 bytes) sub_C242E0
// void sub_C242E0(uint32_t *a1, int a2);
// [0xc248b0] (183 bytes) sub_C248B0
// int sub_C248B0(uint32_t *a1, int a2);
// [0xc24970] (1162 bytes) sub_C24970
// void sub_C24970(uint32_t *a1, int a2);
// [0xc24e00] (591 bytes) sub_C24E00
// int sub_C24E00(uint32_t *a1, int a2);
// [0xc25050] (159 bytes) sub_C25050
// int sub_C25050(uint32_t *a1, int a2);
// [0xc250f0] (159 bytes) sub_C250F0
// int sub_C250F0(uint32_t *a1, int a2);
// [0xc25190] (2213 bytes) sub_C25190
// void sub_C25190(float *a1, int a2);
// [0xc25a40] (813 bytes) sub_C25A40
// void sub_C25A40( float *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15);
// [0xc25d70] (202 bytes) sub_C25D70
// int sub_C25D70(uint32_t *a1, int a2);
// [0xc25e40] (2154 bytes) sub_C25E40
// int sub_C25E40(int a1);
// [0xc266b0] (1082 bytes) sub_C266B0
// int sub_C266B0(int a1);
// [0xc26af0] (1644 bytes) sub_C26AF0
// int sub_C26AF0(int a1);
// [0xc27160] (444 bytes) sub_C27160
// int sub_C27160(uint32_t *a1);
// [0xc27320] (461 bytes) sub_C27320
// int (**sub_C27320(uint32_t *a1))(int);
// [0xc274f0] (444 bytes) sub_C274F0
// int sub_C274F0(uint32_t *a1);
// [0xc276b0] (82 bytes) sub_C276B0
// gameswf::CharacterHandle *sub_C276B0(uint32_t *a1);
// [0xc27710] (508 bytes) sub_C27710
// int sub_C27710(int a1);
// [0xc27910] (1215 bytes) sub_C27910
// int sub_C27910(int a1);
// [0xc27dd0] (1985 bytes) sub_C27DD0
// int sub_C27DD0(int a1, int a2);
// [0xc285a0] (1925 bytes) sub_C285A0
// int sub_C285A0(int a1);
// [0xc28d30] (1922 bytes) sub_C28D30
// unsigned int sub_C28D30(unsigned int a1, int a2, float a3, char a4, char a5, float a6);
// [0xc294c0] (1908 bytes) sub_C294C0
// void sub_C294C0(int a1, int a2, float a3);
// [0xc29c40] (1321 bytes) sub_C29C40
// char sub_C29C40(int a1, int a2, char a3);
// [0xc2a170] (137 bytes) sub_C2A170
// void sub_C2A170(uint32_t *a1);
// [0xc2a200] (137 bytes) sub_C2A200
// void sub_C2A200(uint32_t *a1);
// [0xc2a290] (137 bytes) sub_C2A290
// void sub_C2A290(uint32_t *a1);
// [0xc2a320] (137 bytes) sub_C2A320
// void sub_C2A320(uint32_t *a1);
// [0xc2a3b0] (145 bytes) sub_C2A3B0
// void sub_C2A3B0(uint32_t *a1);
// [0xc2a450] (145 bytes) sub_C2A450
// void sub_C2A450(uint32_t *a1);
// [0xc2a4f0] (145 bytes) sub_C2A4F0
// void sub_C2A4F0(uint32_t *a1);
// [0xc2a590] (137 bytes) sub_C2A590
// void sub_C2A590(uint32_t *a1);
// [0xc2a620] (161 bytes) sub_C2A620
// void sub_C2A620(uint32_t *a1);
// [0xc2a6d0] (153 bytes) sub_C2A6D0
// void sub_C2A6D0(uint32_t *a1);
// [0xc2a770] (137 bytes) sub_C2A770
// void sub_C2A770(uint32_t *a1);
// [0xc2a800] (145 bytes) sub_C2A800
// void sub_C2A800(uint32_t *a1);
// [0xc2a8a0] (145 bytes) sub_C2A8A0
// void sub_C2A8A0(uint32_t *a1);
// [0xc2a940] (137 bytes) sub_C2A940
// void sub_C2A940(uint32_t *a1);
// [0xc2a9d0] (145 bytes) sub_C2A9D0
// void sub_C2A9D0(uint32_t *a1);
// [0xc2aa70] (145 bytes) sub_C2AA70
// void sub_C2AA70(uint32_t *a1);
// [0xc2ab10] (143 bytes) sub_C2AB10
// int sub_C2AB10(unsigned int *a1, unsigned int a2);
