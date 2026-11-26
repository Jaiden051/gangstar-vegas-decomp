#pragma once
// ============================================================================
// TU02_StateBaseAndClanEvents.h
// Complete Translation Unit [02/41]
// Binary Range in lib/x86/libGangstar4.so: 0x54e890 .. 0x5a7380 (354 KB)
// Total Decompiled Functions in TU: 679 (100% coverage)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// Function Table in Translation Unit:
// [0x54e890] (1590 bytes) sub_54E890
// const char *sub_54E890();
// [0x54eed8] (1 bytes) nullsub_25
// void nullsub_25();
// [0x54eee0] (7 bytes) sub_54EEE0
// int sub_54EEE0(int a1);
// [0x54eef0] (13 bytes) sub_54EEF0
// int sub_54EEF0(int a1);
// [0x54ef00] (25 bytes) sub_54EF00
// void sub_54EF00();
// [0x54ef20] (24 bytes) sub_54EF20
// uint32_t *sub_54EF20(uint32_t *a1);
// [0x54ef40] (24 bytes) sub_54EF40
// uint32_t *sub_54EF40(uint32_t *a1);
// [0x54ef60] (24 bytes) sub_54EF60
// uint32_t *sub_54EF60(uint32_t *a1);
// [0x54ef88] (1 bytes) nullsub_26
// void nullsub_26();
// [0x54ef90] (133 bytes) sub_54EF90
// int sub_54EF90(uint32_t *a1);
// [0x54f020] (168 bytes) sub_54F020
// int sub_54F020(uint32_t *a1);
// [0x54f0d0] (105 bytes) sub_54F0D0
// int sub_54F0D0();
// [0x54f140] (42 bytes) sub_54F140
// void sub_54F140(uint32_t *a1);
// [0x54f170] (42 bytes) sub_54F170
// void sub_54F170(uint32_t *a1);
// [0x54f1a0] (42 bytes) sub_54F1A0
// void sub_54F1A0(uint32_t *a1);
// [0x54f1d0] (103 bytes) sub_54F1D0
// void sub_54F1D0(int a1, int a2, int a3, int a4);
// [0x54f240] (75 bytes) sub_54F240
// Json::Value *sub_54F240(const Json::Value *a1, const Json::Value *a2, Json::Value *a3);
// [0x54f290] (86 bytes) sub_54F290
// uint32_t *sub_54F290(int a1, unsigned int a2);
// [0x54f2f0] (382 bytes) sub_54F2F0
// size_t sub_54F2F0(int *a1, uint32_t *a2);
// [0x54f470] (371 bytes) sub_54F470
// void sub_54F470(int a1, uint32_t *a2);
// [0x54f5f0] (504 bytes) sub_54F5F0
// int sub_54F5F0(int a1, uint32_t *a2);
// [0x54f7f0] (371 bytes) sub_54F7F0
// void sub_54F7F0(int a1, uint32_t *a2);
// [0x54f970] (1093 bytes) sub_54F970
// void sub_54F970(int a1, Json::Value *a2);
// [0x54fdc0] (67 bytes) sub_54FDC0
// uint32_t **sub_54FDC0(uint32_t **result);
// [0x54fe10] (157 bytes) sub_54FE10
// int sub_54FE10(int a1, char *s);
// [0x54feb0] (122 bytes) sub_54FEB0
// int sub_54FEB0(int a1, gameswf *a2, int a3);
// [0x54ff30] (269 bytes) sub_54FF30
// glwebtools *sub_54FF30(glwebtools::JsonWriter *a1, int a2);
// [0x550040] (226 bytes) sub_550040
// uint32_t *sub_550040(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5);
// [0x550130] (206 bytes) sub_550130
// int *sub_550130(int *a1, int a2, int a3, int a4, uint32_t *a5);
// [0x550200] (206 bytes) sub_550200
// int *sub_550200(int *a1, int a2, int a3, int a4, uint32_t *a5);
// [0x5502d0] (261 bytes) sub_5502D0
// glwebtools *sub_5502D0(glwebtools::JsonWriter *a1, int a2);
// [0x5503e0] (187 bytes) sub_5503E0
// int *sub_5503E0(int *a1, int a2, int a3, int a4, int *a5);
// [0x5504a0] (218 bytes) sub_5504A0
// uint32_t *sub_5504A0(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5);
// [0x550580] (420 bytes) sub_550580
// void sub_550580(int a1, uint32_t *a2);
// [0x550730] (243 bytes) sub_550730
// int *sub_550730(int *a1, int a2, int a3, int a4, int a5);
// [0x550830] (213 bytes) sub_550830
// int *sub_550830(int *a1, int a2, int a3, int a4, int a5);
// [0x550910] (200 bytes) sub_550910
// int sub_550910(int a1, int a2);
// [0x5509e0] (141 bytes) sub_5509E0
// void sub_5509E0(char *a1);
// [0x550a70] (277 bytes) sub_550A70
// int (**sub_550A70(int a1))(int);
// [0x550b90] (109 bytes) sub_550B90
// int (**sub_550B90(int a1))(int);
// [0x550c00] (117 bytes) sub_550C00
// void sub_550C00(uint32_t *a1);
// [0x550c80] (476 bytes) sub_550C80
// void sub_550C80(const Json::Value **a1, const Json::Value *a2);
// [0x550e60] (129 bytes) sub_550E60
// void sub_550E60(const Json::Value **a1, const Json::Value *a2);
// [0x550ef0] (432 bytes) sub_550EF0
// unsigned int sub_550EF0(int a1, int a2);
// [0x5510a0] (471 bytes) sub_5510A0
// char **sub_5510A0(char **a1, char **a2);
// [0x551280] (176 bytes) sub_551280
// void sub_551280(char *a1);
// [0x551330] (289 bytes) sub_551330
// int sub_551330(int a1, uint32_t *a2, int a3);
// [0x551460] (308 bytes) sub_551460
// int sub_551460(int a1, uint32_t *a2, int *a3);
// [0x5515a0] (201 bytes) sub_5515A0
// int sub_5515A0(int a1, int a2);
// [0x551670] (459 bytes) sub_551670
// int sub_551670(int a1, uint32_t *a2, int a3);
// [0x551840] (481 bytes) sub_551840
// int sub_551840(int a1, char **a2, int a3);
// [0x551a30] (325 bytes) sub_551A30
// int sub_551A30(int a1, uint32_t *a2, unsigned int *a3);
// [0x551b80] (325 bytes) sub_551B80
// int sub_551B80(int a1, uint32_t *a2, unsigned int *a3);
// [0x551cd0] (329 bytes) sub_551CD0
// int sub_551CD0(int a1, uint32_t *a2, unsigned int *a3);
// [0x551e20] (285 bytes) sub_551E20
// void sub_551E20(char *a1);
// [0x551f40] (568 bytes) sub_551F40
// int *sub_551F40(int *a1, uint32_t *a2, int a3, unsigned int *a4);
// [0x552180] (375 bytes) sub_552180
// int sub_552180(int a1, uint32_t *a2, int a3);
// [0x552300] (665 bytes) sub_552300
// int *sub_552300(int *result, uint32_t *a2, int a3, int *a4);
// [0x5525a0] (363 bytes) sub_5525A0
// int sub_5525A0(int a1, uint32_t *a2, int a3);
// [0x552710] (352 bytes) sub_552710
// void sub_552710(char *a1);
// [0x552870] (344 bytes) sub_552870
// int (**sub_552870(int a1))(int);
// [0x5529d0] (646 bytes) sub_5529D0
// int *sub_5529D0(int *a1, uint32_t *a2, int a3, int a4);
// [0x552c60] (676 bytes) sub_552C60
// int *sub_552C60(int *result, uint32_t *a2, int a3, uint32_t *a4);
// [0x552f10] (273 bytes) sub_552F10
// int sub_552F10(int a1);
// [0x553030] (165 bytes) sub_553030
// int sub_553030(uint32_t *a1);
// [0x5530e0] (173 bytes) sub_5530E0
// void sub_5530E0(uint32_t *a1);
// [0x553190] (177 bytes) sub_553190
// int sub_553190(int a1, char **a2, int a3, char a4, int a5);
// [0x553250] (63 bytes) sub_553250
// int sub_553250(int a1);
// [0x553290] (598 bytes) sub_553290
// char **sub_553290(char **a1, int a2);
// [0x553510] (35 bytes) sub_553510
// int sub_553510(int a1, char a2, int a3);
// [0x553540] (413 bytes) sub_553540
// uint32_t *sub_553540(uint32_t *a1, int a2, int a3);
// [0x5536e0] (82 bytes) sub_5536E0
// int sub_5536E0(int a1, int a2);
// [0x553740] (232 bytes) sub_553740
// int sub_553740(int a1);
// [0x5538d0] (379 bytes) sub_5538D0
// uint32_t *sub_5538D0(uint32_t *a1, int a2);
// [0x553a50] (493 bytes) sub_553A50
// int sub_553A50();
// [0x553c40] (297 bytes) sub_553C40
// uint32_t *sub_553C40(uint32_t *a1, int a2, int a3);
// [0x553d70] (509 bytes) sub_553D70
// int sub_553D70(int a1);
// [0x553f70] (302 bytes) sub_553F70
// int32_t sub_553F70(__m128i *a1);
// [0x5540a0] (28 bytes) sub_5540A0
// bool sub_5540A0(int a1, unsigned int a2);
// [0x5540c0] (27 bytes) sub_5540C0
// int sub_5540C0(int a1, unsigned int a2);
// [0x5540e0] (531 bytes) sub_5540E0
// int sub_5540E0(int a1, int a2, unsigned int a3, unsigned int a4, int a5, char a6, unsigned int a7);
// [0x554300] (216 bytes) sub_554300
// int sub_554300(int a1, int a2, unsigned int a3, unsigned int a4);
// [0x5543e0] (220 bytes) sub_5543E0
// bool sub_5543E0(uint32_t *a1, unsigned int a2);
// [0x5544c0] (109 bytes) sub_5544C0
// uint32_t *sub_5544C0(int a1, unsigned int a2, unsigned int a3);
// [0x554530] (150 bytes) sub_554530
// int sub_554530();
// [0x5545d0] (138 bytes) sub_5545D0
// int sub_5545D0(int a1, uint32_t *a2, int a3);
// [0x554660] (39 bytes) sub_554660
// int sub_554660(int a1);
// [0x554690] (106 bytes) sub_554690
// int sub_554690(int a1);
// [0x554700] (389 bytes) sub_554700
// int sub_554700(int a1);
// [0x554890] (39 bytes) sub_554890
// int sub_554890(int a1);
// [0x5548c0] (57 bytes) sub_5548C0
// int sub_5548C0();
// [0x554900] (27 bytes) sub_554900
// int sub_554900();
// [0x554920] (27 bytes) sub_554920
// int sub_554920();
// [0x554940] (99 bytes) sub_554940
// int sub_554940(int a1);
// [0x5549b0] (665 bytes) sub_5549B0
// int sub_5549B0(int a1, int a2);
// [0x554c60] (16 bytes) sub_554C60
// int sub_554C60(int a1);
// [0x554c70] (47 bytes) sub_554C70
// int sub_554C70(int a1, int a2);
// [0x554ca0] (1106 bytes) sub_554CA0
// int sub_554CA0(int a1, char a2, char *s, int a4, char *a5);
// [0x555100] (235 bytes) sub_555100
// int sub_555100(int a1);
// [0x555210] (87 bytes) sub_555210
// int sub_555210(int a1, char a2);
// [0x555270] (87 bytes) sub_555270
// int sub_555270(int a1, char a2);
// [0x5552d0] (14 bytes) sub_5552D0
// bool sub_5552D0(int a1);
// [0x555300] (22 bytes) sub_555300
// int sub_555300(int a1);
// [0x555320] (80 bytes) sub_555320
// int sub_555320(int a1);
// [0x555370] (77 bytes) sub_555370
// int sub_555370(int a1);
// [0x5553c0] (57 bytes) sub_5553C0
// int sub_5553C0(int a1);
// [0x555400] (107 bytes) sub_555400
// int sub_555400(int a1, int a2);
// [0x555470] (71 bytes) sub_555470
// int sub_555470(int a1, const char *a2);
// [0x5554c0] (42 bytes) sub_5554C0
// char *sub_5554C0(int a1, int a2);
// [0x5554f0] (94 bytes) sub_5554F0
// int sub_5554F0(int a1, char *s1);
// [0x555550] (853 bytes) sub_555550
// int sub_555550(int a1, char *s1, char *a3, int a4);
// [0x5558b0] (397 bytes) sub_5558B0
// int sub_5558B0(int a1, char *a2);
// [0x555a40] (525 bytes) sub_555A40
// uint32_t *sub_555A40(uint32_t *a1, int a2, char *s1, int a4);
// [0x555c50] (574 bytes) sub_555C50
// uint32_t *sub_555C50(long double a1, uint32_t *a2, int a3, iap::StoreItemLegacy *a4);
// [0x555e90] (162 bytes) sub_555E90
// int sub_555E90(int a1, double a2, int a3, double a4, int a5);
// [0x555f50] (144 bytes) sub_555F50
// int sub_555F50(int a1, uint32_t *a2, int a3);
// [0x555fe0] (28 bytes) sub_555FE0
// int sub_555FE0(int a1, unsigned int a2);
// [0x556000] (22 bytes) sub_556000
// int sub_556000(int a1);
// [0x556020] (235 bytes) sub_556020
// int sub_556020(int a1);
// [0x556110] (291 bytes) sub_556110
// int sub_556110(int a1, int a2);
// [0x556240] (225 bytes) sub_556240
// int sub_556240(int a1, int a2, int a3);
// [0x556330] (331 bytes) sub_556330
// int sub_556330(int a1);
// [0x556480] (359 bytes) sub_556480
// int sub_556480(int a1);
// [0x5565f0] (165 bytes) sub_5565F0
// int sub_5565F0(int a1, char *s1);
// [0x5566b0] (354 bytes) sub_5566B0
// unsigned int sub_5566B0(int a1, int a2);
// [0x556820] (103 bytes) sub_556820
// int sub_556820(int a1, int a2);
// [0x5568b0] (22 bytes) sub_5568B0
// int sub_5568B0(int a1, char a2);
// [0x5568d0] (164 bytes) sub_5568D0
// int sub_5568D0(int a1, int a2, iap::StoreItemLegacy *a3);
// [0x556980] (757 bytes) sub_556980
// int sub_556980(int a1, int a2, int a3);
// [0x556c80] (865 bytes) sub_556C80
// int sub_556C80(int a1, int a2);
// [0x556ff0] (865 bytes) sub_556FF0
// int sub_556FF0(int a1, int a2);
// [0x557360] (344 bytes) sub_557360
// int sub_557360(int a1, int a2, glwebtools::Codec **a3, unsigned int a4);
// [0x5574c0] (338 bytes) sub_5574C0
// int sub_5574C0(int a1, uint32_t *a2, int a3, unsigned int a4);
// [0x557620] (164 bytes) sub_557620
// int sub_557620(int a1, uint32_t *a2);
// [0x5576d0] (529 bytes) sub_5576D0
// int sub_5576D0(int a1, char **a2, int a3);
// [0x5578f0] (164 bytes) sub_5578F0
// int sub_5578F0(int a1, int a2);
// [0x5579a0] (231 bytes) sub_5579A0
// int sub_5579A0(int a1, int a2);
// [0x557a90] (37 bytes) sub_557A90
// void sub_557A90();
// [0x557ac0] (67 bytes) sub_557AC0
// bool sub_557AC0(char a1);
// [0x557b10] (96 bytes) sub_557B10
// bool sub_557B10();
// [0x557b70] (495 bytes) sub_557B70
// int sub_557B70(int a1);
// [0x557d60] (13 bytes) sub_557D60
// int sub_557D60(int a1);
// [0x557d70] (265 bytes) sub_557D70
// int sub_557D70(int a1);
// [0x557e80] (233 bytes) sub_557E80
// void sub_557E80(int a1);
// [0x557f70] (55 bytes) sub_557F70
// int sub_557F70(int a1);
// [0x557fb0] (63 bytes) sub_557FB0
// int sub_557FB0(int a1, int a2);
// [0x557ff0] (217 bytes) sub_557FF0
// int sub_557FF0(int a1, int a2);
// [0x5580d0] (276 bytes) sub_5580D0
// int sub_5580D0(int a1, int a2, int a3, char a4);
// [0x5581f0] (225 bytes) sub_5581F0
// int sub_5581F0(int a1, int a2, int a3);
// [0x5582e0] (476 bytes) sub_5582E0
// void sub_5582E0(int a1);
// [0x5584c0] (730 bytes) sub_5584C0
// int sub_5584C0(int a1, int a2, int a3, char *s);
// [0x5587c8] (1 bytes) nullsub_27
// void nullsub_27();
// [0x5587d8] (1 bytes) nullsub_28
// void nullsub_28();
// [0x5587e8] (1 bytes) nullsub_29
// void nullsub_29();
// [0x5587f8] (1 bytes) nullsub_30
// void nullsub_30();
// [0x558800] (70 bytes) sub_558800
// int sub_558800(int a1);
// [0x558850] (13 bytes) sub_558850
// int sub_558850(int a1);
// [0x558860] (1007 bytes) sub_558860
// int sub_558860(int a1, int a2, unsigned int a3, unsigned int a4, int a5, char a6, unsigned int a7);
// [0x558c50] (244 bytes) sub_558C50
// int sub_558C50(int a1, int a2, unsigned int a3, unsigned int a4);
// [0x558d50] (310 bytes) sub_558D50
// char sub_558D50(int a1, unsigned int a2);
// [0x558ed0] (128 bytes) sub_558ED0
// void sub_558ED0(int a1);
// [0x558f50] (429 bytes) sub_558F50
// int sub_558F50(int a1);
// [0x559100] (395 bytes) sub_559100
// char sub_559100(int a1);
// [0x5592a0] (3 bytes) nullsub_1
// void nullsub_1(int a1);
// [0x5592b0] (437 bytes) sub_5592B0
// int sub_5592B0(int a1, int a2);
// [0x559478] (1 bytes) nullsub_31
// void nullsub_31();
// [0x559480] (107 bytes) sub_559480
// int sub_559480();
// [0x5594f0] (1209 bytes) sub_5594F0
// int sub_5594F0(int a1, int a2, const char **a3);
// [0x5599b0] (993 bytes) sub_5599B0
// int sub_5599B0(int a1);
// [0x559da0] (133 bytes) sub_559DA0
// int sub_559DA0(int a1);
// [0x559e30] (377 bytes) sub_559E30
// int sub_559E30(int a1, int a2, void *a3, unsigned int a4);
// [0x559fb0] (361 bytes) sub_559FB0
// int sub_559FB0(int a1, int a2, uint32_t *a3, unsigned int *a4);
// [0x55a120] (883 bytes) sub_55A120
// uint8_t *sub_55A120(int a1);
// [0x55a4a0] (220 bytes) sub_55A4A0
// char *sub_55A4A0( int a1, const char **a2, const char **a3, const char **a4, const char **a5, const char **a6, char a7, int a8, int a9);
// [0x55a580] (45 bytes) sub_55A580
// uint32_t *sub_55A580(uint32_t *a1);
// [0x55a5b0] (45 bytes) sub_55A5B0
// uint32_t *sub_55A5B0(uint32_t *a1, int a2, int a3, int a4);
// [0x55a5e0] (36 bytes) sub_55A5E0
// int sub_55A5E0(int a1);
// [0x55a610] (110 bytes) sub_55A610
// int sub_55A610(int a1);
// [0x55a680] (354 bytes) sub_55A680
// uint8_t *sub_55A680(int a1);
// [0x55a7f0] (111 bytes) sub_55A7F0
// char *sub_55A7F0(char *dest, char *src, int a3, char a4, char a5, int a6, char *a7);
// [0x55a860] (186 bytes) sub_55A860
// uint8_t *sub_55A860(int a1);
// [0x55a920] (82 bytes) sub_55A920
// char *sub_55A920(char *dest, char *src, int a3, char a4, char a5, int a6);
// [0x55a980] (312 bytes) sub_55A980
// int sub_55A980(int a1);
// [0x55aac0] (321 bytes) sub_55AAC0
// unsigned int sub_55AAC0(int a1, int a2);
// [0x55ac10] (632 bytes) sub_55AC10
// void sub_55AC10(int a1, int a2);
// [0x55ae90] (95 bytes) sub_55AE90
// int sub_55AE90(int a1, int a2);
// [0x55aef0] (84 bytes) sub_55AEF0
// int sub_55AEF0(int a1, int a2);
// [0x55af50] (344 bytes) sub_55AF50
// uint32_t *sub_55AF50(uint32_t *a1, int a2, uint32_t *a3);
// [0x55b0b0] (20 bytes) sub_55B0B0
// int sub_55B0B0(int a1);
// [0x55b0e0] (92 bytes) sub_55B0E0
// int sub_55B0E0(int a1, int a2);
// [0x55b140] (103 bytes) sub_55B140
// int sub_55B140(int a1);
// [0x55b1b0] (437 bytes) sub_55B1B0
// int sub_55B1B0(int a1);
// [0x55b370] (369 bytes) sub_55B370
// int sub_55B370(int a1, int a2);
// [0x55b4f0] (65 bytes) sub_55B4F0
// void sub_55B4F0(int a1);
// [0x55b540] (190 bytes) sub_55B540
// void sub_55B540(uint32_t *a1);
// [0x55b600] (314 bytes) sub_55B600
// void sub_55B600(uint32_t *a1);
// [0x55b740] (371 bytes) sub_55B740
// int *sub_55B740(int a1, char *s);
// [0x55b8f0] (531 bytes) sub_55B8F0
// int sub_55B8F0(int a1, Json::Value *a2);
// [0x55bb10] (241 bytes) sub_55BB10
// int sub_55BB10(int a1, char *a2);
// [0x55bc10] (67 bytes) sub_55BC10
// int sub_55BC10(int a1);
// [0x55bc60] (163 bytes) sub_55BC60
// int sub_55BC60(int a1, int a2, int *a3);
// [0x55bd10] (52 bytes) sub_55BD10
// bool sub_55BD10(int a1, int a2);
// [0x55bd50] (405 bytes) sub_55BD50
// int sub_55BD50(uint32_t *a1, const char **a2);
// [0x55bef0] (136 bytes) sub_55BEF0
// int sub_55BEF0(int a1);
// [0x55bf80] (693 bytes) sub_55BF80
// void sub_55BF80(uint32_t *a1, int a2);
// [0x55c240] (68 bytes) sub_55C240
// bool sub_55C240(int a1, const char *a2);
// [0x55c290] (68 bytes) sub_55C290
// bool sub_55C290(int a1, const char *a2);
// [0x55c2e0] (68 bytes) sub_55C2E0
// bool sub_55C2E0(int a1, const char *a2);
// [0x55c330] (68 bytes) sub_55C330
// bool sub_55C330(int a1, const char *a2);
// [0x55c380] (68 bytes) sub_55C380
// bool sub_55C380(int a1, const char *a2);
// [0x55c3d0] (68 bytes) sub_55C3D0
// bool sub_55C3D0(int a1, const char *a2);
// [0x55c420] (68 bytes) sub_55C420
// bool sub_55C420(int a1, const char *a2);
// [0x55c470] (54 bytes) sub_55C470
// int sub_55C470(int a1);
// [0x55c4b0] (57 bytes) sub_55C4B0
// int sub_55C4B0(int a1);
// [0x55c4f0] (14 bytes) sub_55C4F0
// int sub_55C4F0(int a1, int a2);
// [0x55c500] (12 bytes) sub_55C500
// int sub_55C500(int a1);
// [0x55c690] (588 bytes) sub_55C690
// int sub_55C690(int a1, int a2);
// [0x55c8e0] (493 bytes) sub_55C8E0
// int sub_55C8E0(int a1, uint8_t *a2, Json::Value *a3);
// [0x55cad0] (554 bytes) sub_55CAD0
// int sub_55CAD0(int a1, int a2);
// [0x55cd00] (909 bytes) sub_55CD00
// int sub_55CD00(int a1, int a2, int a3);
// [0x55d090] (225 bytes) sub_55D090
// uint32_t *sub_55D090(uint32_t *a1, int a2, char a3);
// [0x55d180] (205 bytes) sub_55D180
// int sub_55D180(int a1, int a2);
// [0x55d250] (164 bytes) sub_55D250
// int sub_55D250(int a1);
// [0x55d300] (425 bytes) sub_55D300
// int sub_55D300(int a1, int a2);
// [0x55d4b0] (133 bytes) sub_55D4B0
// int sub_55D4B0(int a1, int a2);
// [0x55d540] (99 bytes) sub_55D540
// int sub_55D540(int a1, int a2);
// [0x55d5b0] (176 bytes) sub_55D5B0
// int sub_55D5B0(int a1);
// [0x55d660] (169 bytes) sub_55D660
// uint32_t *sub_55D660(uint32_t *a1);
// [0x55d710] (257 bytes) sub_55D710
// int sub_55D710(int a1, int a2, void *a3, unsigned int a4);
// [0x55d820] (291 bytes) sub_55D820
// int sub_55D820(int a1, int a2, uint32_t *a3, unsigned int *a4);
// [0x55d950] (236 bytes) sub_55D950
// int sub_55D950(int a1, uint32_t *a2);
// [0x55da40] (251 bytes) sub_55DA40
// int sub_55DA40(chatv2::ChatLib *a1);
// [0x55db40] (993 bytes) sub_55DB40
// int sub_55DB40(int a1);
// [0x55df30] (679 bytes) sub_55DF30
// int sub_55DF30(int a1, int a2);
// [0x55e1e0] (305 bytes) sub_55E1E0
// int sub_55E1E0(int a1, uint32_t *a2, int a3);
// [0x55e320] (231 bytes) sub_55E320
// int sub_55E320(int a1);
// [0x55e410] (194 bytes) sub_55E410
// int sub_55E410(uint32_t *a1, int a2, char a3, int a4);
// [0x55e4e0] (118 bytes) sub_55E4E0
// void sub_55E4E0(int a1, int a2);
// [0x55e560] (116 bytes) sub_55E560
// int sub_55E560(uint32_t *a1);
// [0x55e5e0] (461 bytes) sub_55E5E0
// void sub_55E5E0(int a1, char *a2);
// [0x55e7b0] (422 bytes) sub_55E7B0
// int sub_55E7B0(int a1, char *s, uint32_t *a3);
// [0x55e960] (176 bytes) sub_55E960
// int sub_55E960(int a1, char *s);
// [0x55ea10] (144 bytes) sub_55EA10
// int sub_55EA10(int a1, int a2);
// [0x55eaa0] (144 bytes) sub_55EAA0
// int sub_55EAA0(int a1, int a2);
// [0x55eb30] (122 bytes) sub_55EB30
// int sub_55EB30(uint8_t *a1, uint8_t *a2);
// [0x55ebb0] (122 bytes) sub_55EBB0
// int sub_55EBB0(uint8_t *a1, uint8_t *a2);
// [0x55ec48] (1 bytes) nullsub_32
// void nullsub_32();
// [0x55ec50] (78 bytes) sub_55EC50
// uint32_t *sub_55EC50(uint32_t *a1);
// [0x55eca0] (51 bytes) sub_55ECA0
// int sub_55ECA0(int a1, int a2, Json::Value *a3);
// [0x55ece0] (312 bytes) sub_55ECE0
// int sub_55ECE0(int a1, int a2, Json::Value *a3);
// [0x55ee20] (35 bytes) sub_55EE20
// int sub_55EE20();
// [0x55ee50] (35 bytes) sub_55EE50
// int sub_55EE50();
// [0x55ee80] (146 bytes) sub_55EE80
// unsigned int sub_55EE80(int a1, int *a2);
// [0x55ef20] (146 bytes) sub_55EF20
// unsigned int sub_55EF20(int a1, int *a2);
// [0x55efc0] (281 bytes) sub_55EFC0
// unsigned int sub_55EFC0(int a1, uint32_t *a2);
// [0x55f0e0] (218 bytes) sub_55F0E0
// int sub_55F0E0(int a1, int a2, int a3);
// [0x55f1c0] (84 bytes) sub_55F1C0
// int sub_55F1C0(int a1, char a2);
// [0x55f220] (209 bytes) sub_55F220
// int sub_55F220();
// [0x55f300] (457 bytes) sub_55F300
// int sub_55F300(int a1, Json::Value *a2);
// [0x55f4d0] (138 bytes) sub_55F4D0
// int sub_55F4D0(int a1, int a2, int a3, uint32_t *a4, void **a5);
// [0x55f560] (720 bytes) sub_55F560
// int sub_55F560(uint32_t *a1, int a2, int a3, void **a4);
// [0x55f850] (60 bytes) sub_55F850
// void sub_55F850(void **a1);
// [0x55f890] (71 bytes) sub_55F890
// void sub_55F890(int a1, int a2, int a3, uint32_t *a4);
// [0x55f8e0] (654 bytes) sub_55F8E0
// int sub_55F8E0(int a1);
// [0x55fb80] (168 bytes) sub_55FB80
// int sub_55FB80(int a1, int a2, int a3, int a4);
// [0x55fc30] (85 bytes) sub_55FC30
// void sub_55FC30(int a1);
// [0x55fcb0] (352 bytes) sub_55FCB0
// int sub_55FCB0(int a1);
// [0x55fe10] (446 bytes) sub_55FE10
// void sub_55FE10(int a1, Json::Value *a2, int a3);
// [0x55ffd0] (284 bytes) sub_55FFD0
// int sub_55FFD0(int a1, Json::Value *a2, int a3);
// [0x5600f0] (370 bytes) sub_5600F0
// void sub_5600F0(int a1);
// [0x560270] (733 bytes) sub_560270
// int sub_560270(uint32_t *a1);
// [0x560550] (99 bytes) sub_560550
// int sub_560550(int a1, int a2, int a3);
// [0x5605c0] (95 bytes) sub_5605C0
// int sub_5605C0(int a1, int a2);
// [0x560620] (517 bytes) sub_560620
// int sub_560620(int a1);
// [0x560830] (2945 bytes) sub_560830
// int sub_560830(int a1);
// [0x5613c0] (109 bytes) sub_5613C0
// int sub_5613C0(void *this, int a2);
// [0x561430] (345 bytes) sub_561430
// int sub_561430(int a1);
// [0x561590] (199 bytes) sub_561590
// int sub_561590(void *this, int a2);
// [0x561660] (201 bytes) sub_561660
// int sub_561660(void *this, int a2);
// [0x561730] (156 bytes) sub_561730
// int sub_561730(int a1);
// [0x5617d0] (204 bytes) sub_5617D0
// int sub_5617D0(int a1, int a2, int a3);
// [0x5618a0] (15 bytes) sub_5618A0
// int sub_5618A0(int a1, int a2);
// [0x5618b0] (15 bytes) sub_5618B0
// int sub_5618B0(int a1, int a2);
// [0x5618c0] (47 bytes) sub_5618C0
// int sub_5618C0(int a1, char a2, char a3);
// [0x5618f0] (47 bytes) sub_5618F0
// int sub_5618F0(int a1, char a2, char a3);
// [0x561920] (24 bytes) sub_561920
// int sub_561920(int a1, char a2);
// [0x561940] (12 bytes) sub_561940
// int sub_561940();
// [0x561950] (132 bytes) sub_561950
// int sub_561950(int a1);
// [0x5619e0] (117 bytes) sub_5619E0
// int sub_5619E0(int a1, int a2, int a3);
// [0x561a60] (224 bytes) sub_561A60
// uint32_t *sub_561A60(uint32_t *a1);
// [0x561b40] (224 bytes) sub_561B40
// glwebtools::UrlConnection **sub_561B40(uint32_t *a1);
// [0x561c20] (109 bytes) sub_561C20
// void sub_561C20(uint32_t *a1);
// [0x561c90] (64 bytes) sub_561C90
// int sub_561C90(int a1);
// [0x561cd0] (65 bytes) sub_561CD0
// bool sub_561CD0(int a1);
// [0x561d20] (142 bytes) sub_561D20
// int sub_561D20(int a1);
// [0x561db0] (777 bytes) sub_561DB0
// Json::Value *sub_561DB0(Json::Value *a1, int a2, int a3);
// [0x5620c0] (285 bytes) sub_5620C0
// int sub_5620C0(int a1, int a2, char **a3);
// [0x5621e0] (99 bytes) sub_5621E0
// int sub_5621E0(int a1, uint32_t *a2, int a3, int a4);
// [0x562250] (90 bytes) sub_562250
// int sub_562250(int a1, int a2);
// [0x5622b0] (112 bytes) sub_5622B0
// int sub_5622B0(int a1, int a2);
// [0x562320] (101 bytes) sub_562320
// int sub_562320(int a1, int a2);
// [0x562390] (88 bytes) sub_562390
// int sub_562390(int a1, int a2);
// [0x5623f0] (90 bytes) sub_5623F0
// int sub_5623F0(int a1, int a2);
// [0x562450] (93 bytes) sub_562450
// int sub_562450(int a1, int a2);
// [0x5624b0] (158 bytes) sub_5624B0
// int sub_5624B0(int a1, int a2);
// [0x562550] (296 bytes) sub_562550
// bool sub_562550(int a1, int a2);
// [0x562680] (364 bytes) sub_562680
// char **sub_562680(char **a1, int a2);
// [0x5627f0] (602 bytes) sub_5627F0
// int sub_5627F0(int a1, int a2);
// [0x562a50] (279 bytes) sub_562A50
// iap::StoreItemLegacy *sub_562A50(int a1, int a2);
// [0x562b70] (129 bytes) sub_562B70
// int sub_562B70(int a1, int a2);
// [0x562c00] (706 bytes) sub_562C00
// Json::Value *sub_562C00(Json::Value *a1, int a2, int a3);
// [0x562ed0] (417 bytes) sub_562ED0
// int sub_562ED0(int a1, uint32_t *a2);
// [0x563080] (1145 bytes) sub_563080
// gaia::BaseJSONServiceResponse *sub_563080(int a1, int a2, gaia::BaseJSONServiceResponse *a3, uint32_t *a4);
// [0x563500] (669 bytes) sub_563500
// uint32_t *sub_563500(uint32_t *a1, int a2, uint32_t *a3, int a4);
// [0x5637a0] (698 bytes) sub_5637A0
// uint32_t *sub_5637A0(uint32_t *a1, int a2, uint32_t *a3, unsigned int a4);
// [0x563a60] (101 bytes) sub_563A60
// int sub_563A60(int a1, int a2);
// [0x563ad0] (82 bytes) sub_563AD0
// int sub_563AD0(int a1, int a2);
// [0x563b30] (1105 bytes) sub_563B30
// int sub_563B30(uint32_t *a1, int a2, char a3, int a4, int a5, int a6);
// [0x563f90] (167 bytes) sub_563F90
// int sub_563F90(uint32_t *a1, int a2, int a3, int a4, int a5);
// [0x564040] (1011 bytes) sub_564040
// int sub_564040(uint32_t *a1);
// [0x564440] (128 bytes) sub_564440
// int sub_564440(int a1);
// [0x5644c0] (894 bytes) sub_5644C0
// int sub_5644C0();
// [0x564840] (191 bytes) sub_564840
// int sub_564840(uint32_t *a1, int a2);
// [0x564900] (966 bytes) sub_564900
// int sub_564900(int a1, int a2);
// [0x564cd0] (1113 bytes) sub_564CD0
// int sub_564CD0(uint32_t *a1, int a2, char a3, int a4, int a5, int a6);
// [0x565130] (147 bytes) sub_565130
// bool sub_565130(int a1, int a2, int a3);
// [0x5651d0] (562 bytes) sub_5651D0
// int sub_5651D0(uint32_t *a1, int a2, int a3);
// [0x565410] (160 bytes) sub_565410
// uint8_t *sub_565410(int a1, int a2, uint8_t *a3);
// [0x5654b0] (365 bytes) sub_5654B0
// uint32_t *sub_5654B0(int a1, int a2, int a3, int a4);
// [0x565620] (29 bytes) sub_565620
// uint8_t *sub_565620(int a1);
// [0x565950] (251 bytes) sub_565950
// int sub_565950(int a1);
// [0x565a50] (845 bytes) sub_565A50
// int sub_565A50(long double a1, int a2, int a3);
// [0x565da0] (199 bytes) sub_565DA0
// void sub_565DA0(long double a1, int a2, char a3, char *a4);
// [0x565e70] (543 bytes) sub_565E70
// uint32_t *sub_565E70(int a1, int a2, int a3);
// [0x566090] (412 bytes) sub_566090
// void sub_566090(uint32_t *a1, int a2, int a3);
// [0x566230] (468 bytes) sub_566230
// void sub_566230(int a1, long double a2);
// [0x566410] (500 bytes) sub_566410
// void sub_566410(long double a1, int a2);
// [0x566610] (429 bytes) sub_566610
// int sub_566610(int a1);
// [0x5667c0] (35 bytes) sub_5667C0
// int sub_5667C0();
// [0x5667f0] (101 bytes) sub_5667F0
// char sub_5667F0();
// [0x566860] (35 bytes) sub_566860
// unsigned int sub_566860();
// [0x566890] (172 bytes) sub_566890
// int sub_566890(int a1);
// [0x566940] (103 bytes) sub_566940
// int sub_566940();
// [0x5669b0] (146 bytes) sub_5669B0
// void *sub_5669B0();
// [0x566a50] (1025 bytes) sub_566A50
// int sub_566A50(int a1);
// [0x566e60] (435 bytes) sub_566E60
// int sub_566E60(int a1, uint32_t *a2);
// [0x567020] (447 bytes) sub_567020
// int sub_567020(int a1);
// [0x5671e0] (232 bytes) sub_5671E0
// int sub_5671E0(int a1);
// [0x5672d0] (944 bytes) sub_5672D0
// int sub_5672D0(int a1, uint32_t *a2, int a3, uint32_t *a4, uint32_t *a5);
// [0x567680] (508 bytes) sub_567680
// unsigned int sub_567680(void *a1, uint32_t *a2);
// [0x567880] (1209 bytes) sub_567880
// bool sub_567880(int a1, uint32_t *a2);
// [0x567d40] (1021 bytes) sub_567D40
// int sub_567D40(int a1, int a2, int a3);
// [0x568140] (3261 bytes) sub_568140
// int sub_568140(int a1, __guard *a2, int a3, char *a4, int a5);
// [0x568e00] (915 bytes) sub_568E00
// int sub_568E00(int a1, int a2, int a3);
// [0x5691a0] (807 bytes) sub_5691A0
// char *sub_5691A0(uint32_t *a1);
// [0x5694d0] (892 bytes) sub_5694D0
// void sub_5694D0(uint32_t *a1, int a2);
// [0x569850] (882 bytes) sub_569850
// void sub_569850(void *a1);
// [0x569bd0] (1211 bytes) sub_569BD0
// int sub_569BD0(int a1, int a2);
// [0x56a090] (2715 bytes) sub_56A090
// void sub_56A090(int a1, char a2, char a3, char a4, char a5);
// [0x56ab30] (503 bytes) sub_56AB30
// void sub_56AB30(int a1, char a2, char a3, char a4, char a5);
// [0x56ad30] (1109 bytes) sub_56AD30
// char *sub_56AD30(int a1, int a2);
// [0x56b190] (1031 bytes) sub_56B190
// int sub_56B190(uint32_t *a1);
// [0x56b640] (437 bytes) sub_56B640
// unsigned int sub_56B640(int a1, int a2);
// [0x56b800] (1398 bytes) sub_56B800
// int sub_56B800(uint32_t *a1, unsigned int a2);
// [0x56bd80] (1543 bytes) sub_56BD80
// int sub_56BD80(int a1, int a2, Json::Value *a3);
// [0x56c390] (3718 bytes) sub_56C390
// bool sub_56C390( int a1, int a2, int a3, int a4, int a5, uint32_t *a6, char a7, uint8_t a8, int a9);
// [0x56d220] (179 bytes) sub_56D220
// bool sub_56D220( int a1, unsigned int a2, int a3, int a4, int a5, uint32_t *a6, char a7, uint8_t a8, int a9);
// [0x56d2e0] (126 bytes) sub_56D2E0
// char *sub_56D2E0(int a1, char *s);
// [0x56d360] (891 bytes) sub_56D360
// int *sub_56D360(int a1);
// [0x56d6e0] (1708 bytes) sub_56D6E0
// void sub_56D6E0(uint32_t *a1);
// [0x56dd90] (651 bytes) sub_56DD90
// int sub_56DD90(uint32_t *a1, int a2);
// [0x56e020] (1034 bytes) sub_56E020
// void sub_56E020(uint32_t *a1);
// [0x56e430] (129 bytes) sub_56E430
// int sub_56E430(uint32_t *a1, int a2);
// [0x56e4c0] (265 bytes) sub_56E4C0
// glf::Mutex *sub_56E4C0(uint32_t *a1, int a2);
// [0x56e5d0] (1807 bytes) sub_56E5D0
// void *sub_56E5D0(int a1);
// [0x56ece0] (109 bytes) sub_56ECE0
// int sub_56ECE0(int a1, int a2, int a3, int *a4);
// [0x56ed50] (203 bytes) sub_56ED50
// bool sub_56ED50(int a1, const char **a2);
// [0x56ee20] (125 bytes) sub_56EE20
// int sub_56EE20(uint8_t *a1);
// [0x56eea0] (160 bytes) sub_56EEA0
// int sub_56EEA0(int a1);
// [0x56ef40] (305 bytes) sub_56EF40
// int sub_56EF40(int a1);
// [0x56f080] (359 bytes) sub_56F080
// int sub_56F080(int a1);
// [0x56f1f0] (6524 bytes) sub_56F1F0
// char *sub_56F1F0(gaia::GaiaRequest *a1);
// [0x570b70] (268 bytes) sub_570B70
// unsigned int sub_570B70(uint32_t *a1, int a2);
// [0x570c80] (139 bytes) sub_570C80
// int sub_570C80(int a1);
// [0x570d10] (445 bytes) sub_570D10
// int sub_570D10(int a1, int a2);
// [0x570ed0] (214 bytes) sub_570ED0
// int sub_570ED0(int a1);
// [0x570fb0] (383 bytes) sub_570FB0
// int sub_570FB0(int a1);
// [0x571130] (4158 bytes) sub_571130
// char **sub_571130(char **a1, unsigned int *a2, size_t *a3);
// [0x572170] (365 bytes) sub_572170
// int sub_572170(int a1);
// [0x5722e0] (2261 bytes) sub_5722E0
// int sub_5722E0(int a1, int a2, int a3, int a4);
// [0x5730f0] (1719 bytes) sub_5730F0
// void sub_5730F0(int a1);
// [0x5737b0] (321 bytes) sub_5737B0
// int sub_5737B0(int a1);
// [0x573900] (321 bytes) sub_573900
// int sub_573900(int a1);
// [0x573a50] (820 bytes) sub_573A50
// void sub_573A50(uint32_t *a1);
// [0x573d90] (56 bytes) sub_573D90
// void sub_573D90(uint32_t *a1);
// [0x573dd0] (185 bytes) sub_573DD0
// void sub_573DD0(int a1, int a2);
// [0x573e90] (2296 bytes) sub_573E90
// int sub_573E90(int a1, Json::Value *a2, int a3);
// [0x574790] (964 bytes) sub_574790
// int sub_574790(int a1, uint32_t *a2);
// [0x574b60] (249 bytes) sub_574B60
// int sub_574B60(int a1, Json::Value *a2);
// [0x574c60] (89 bytes) sub_574C60
// int (**sub_574C60(int a1))(int);
// [0x574cc0] (97 bytes) sub_574CC0
// void sub_574CC0(void **a1);
// [0x574d30] (104 bytes) sub_574D30
// uint32_t *sub_574D30(uint32_t *a1);
// [0x574da0] (162 bytes) sub_574DA0
// int sub_574DA0(int a1);
// [0x574e60] (113 bytes) sub_574E60
// void sub_574E60(char *a1);
// [0x574ee0] (732 bytes) sub_574EE0
// void sub_574EE0(int a1);
// [0x5751c0] (56 bytes) sub_5751C0
// void sub_5751C0(void *a1);
// [0x575200] (159 bytes) sub_575200
// void sub_575200(int a1);
// [0x5752a0] (1241 bytes) sub_5752A0
// unsigned int sub_5752A0(uint32_t *a1);
// [0x575780] (310 bytes) sub_575780
// void sub_575780(uint32_t *a1, int a2);
// [0x5758c0] (2523 bytes) sub_5758C0
// int sub_5758C0(long double a1, int a2, int a3);
// [0x5762a0] (167 bytes) sub_5762A0
// void sub_5762A0(uint32_t *a1);
// [0x576350] (273 bytes) sub_576350
// int sub_576350(int a1, int a2, int a3);
// [0x576470] (841 bytes) sub_576470
// void sub_576470(gaia::GaiaRequest *a1);
// [0x5767c0] (236 bytes) sub_5767C0
// int sub_5767C0(int a1);
// [0x5768b0] (244 bytes) sub_5768B0
// void sub_5768B0(void **a1);
// [0x5769b0] (2641 bytes) sub_5769B0
// void sub_5769B0(uint32_t *a1, int a2, uint32_t *a3);
// [0x577410] (2531 bytes) sub_577410
// void sub_577410(gaia::GaiaRequest *a1);
// [0x577e00] (1416 bytes) sub_577E00
// void sub_577E00(gaia::GaiaRequest *a1);
// [0x578390] (387 bytes) sub_578390
// int sub_578390(int a1);
// [0x578520] (198 bytes) sub_578520
// int sub_578520(uint32_t *a1);
// [0x5785f0] (436 bytes) sub_5785F0
// int (**sub_5785F0(int a1))(int);
// [0x5787b0] (56 bytes) sub_5787B0
// void sub_5787B0(void *a1);
// [0x5787f0] (194 bytes) sub_5787F0
// void sub_5787F0(chatv2::ChatLib *a1);
// [0x5788c0] (1564 bytes) sub_5788C0
// int sub_5788C0(int a1, int a2);
// [0x578ee0] (2402 bytes) sub_578EE0
// int sub_578EE0(int a1, const char **a2, glwebtools::Time **a3, int a4, const char **a5, int a6);
// [0x579850] (452 bytes) sub_579850
// int sub_579850(int a1);
// [0x579a20] (2398 bytes) sub_579A20
// void sub_579A20(int a1);
// [0x57a380] (1836 bytes) sub_57A380
// int (**sub_57A380(int a1))(int);
// [0x57aab0] (56 bytes) sub_57AAB0
// void sub_57AAB0(void *a1);
// [0x57aaf0] (193 bytes) sub_57AAF0
// int sub_57AAF0(uint32_t *a1, int a2);
// [0x57abc0] (214 bytes) sub_57ABC0
// int sub_57ABC0(gaia::Gaia *a1);
// [0x57aca0] (252 bytes) sub_57ACA0
// int sub_57ACA0(gaia::Gaia *a1, int a2);
// [0x57ada0] (760 bytes) sub_57ADA0
// void sub_57ADA0(gaia::Gaia *a1);
// [0x57b0a0] (808 bytes) sub_57B0A0
// void sub_57B0A0(uint32_t *a1);
// [0x57b3d0] (47 bytes) sub_57B3D0
// int sub_57B3D0(int a1);
// [0x57b400] (619 bytes) sub_57B400
// void sub_57B400(uint32_t *a1, int a2, int a3);
// [0x57b670] (237 bytes) sub_57B670
// int sub_57B670(int a1, int a2, int a3);
// [0x57b760] (615 bytes) sub_57B760
// int sub_57B760(int a1, int a2, int a3);
// [0x57b9d0] (101 bytes) sub_57B9D0
// int sub_57B9D0(uint32_t *a1, int a2, int a3);
// [0x57ba40] (112 bytes) sub_57BA40
// int sub_57BA40(int a1, int a2, int a3);
// [0x57bab0] (839 bytes) sub_57BAB0
// int sub_57BAB0(int a1, int a2, unsigned int a3, unsigned int a4, bool a5);
// [0x57be00] (134 bytes) sub_57BE00
// int sub_57BE00(uint32_t *a1, int a2, unsigned int a3, unsigned int a4, bool a5);
// [0x57be90] (331 bytes) sub_57BE90
// int sub_57BE90(int a1, int a2, unsigned int a3, unsigned int a4);
// [0x57bfe0] (651 bytes) sub_57BFE0
// void sub_57BFE0(uint32_t *a1, int a2, int a3);
// [0x57c270] (171 bytes) sub_57C270
// int sub_57C270(int a1, int a2, int a3);
// [0x57c320] (616 bytes) sub_57C320
// void sub_57C320(uint32_t *a1, int a2);
// [0x57c590] (83 bytes) sub_57C590
// int sub_57C590(uint32_t *a1);
// [0x57c5f0] (1087 bytes) sub_57C5F0
// int sub_57C5F0(int a1, int a2, int a3, int a4, int a5);
// [0x57ca30] (131 bytes) sub_57CA30
// int sub_57CA30(uint32_t *a1, int a2, int a3, int a4, int a5);
// [0x57cac0] (137 bytes) sub_57CAC0
// int sub_57CAC0(int a1, int a2, int a3, int a4, uint8_t a5);
// [0x57cb50] (1965 bytes) sub_57CB50
// uint32_t *sub_57CB50(uint32_t *a1);
// [0x57d300] (36 bytes) sub_57D300
// int sub_57D300(uint32_t *a1);
// [0x57d330] (877 bytes) sub_57D330
// int sub_57D330(uint32_t *a1, int a2, unsigned int a3);
// [0x57d6a0] (1451 bytes) sub_57D6A0
// int sub_57D6A0(uint8_t *a1, int a2, int a3, char a4);
// [0x57dc50] (617 bytes) sub_57DC50
// int sub_57DC50(uint8_t *a1, int a2, int a3);
// [0x57dec0] (1986 bytes) sub_57DEC0
// int sub_57DEC0(int a1, int a2);
// [0x57e690] (859 bytes) sub_57E690
// void sub_57E690(uint32_t *a1, int a2, int a3, unsigned int a4, unsigned int a5);
// [0x57e9f0] (891 bytes) sub_57E9F0
// void sub_57E9F0(uint32_t *a1, int a2, uint32_t *a3, unsigned int a4, unsigned int a5);
// [0x57ed70] (488 bytes) sub_57ED70
// void sub_57ED70(int a1, int a2);
// [0x57ef60] (77 bytes) sub_57EF60
// void sub_57EF60(uint32_t *a1, int a2);
// [0x57efb0] (182 bytes) sub_57EFB0
// int sub_57EFB0(int a1, int a2);
// [0x57f070] (105 bytes) sub_57F070
// int sub_57F070(int a1, int a2);
// [0x57f0e0] (1773 bytes) sub_57F0E0
// void sub_57F0E0( uint32_t *a1, unsigned int a2, int a3, int a4, int a5, unsigned int a6, std::map<std::string,std::string> *a7, int a8, int a9, int *a10, int *a11);
// [0x57f7d0] (140 bytes) sub_57F7D0
// int sub_57F7D0( int a1, int a2, int a3, int a4, int a5, unsigned int a6, int *a7, std::map<std::string,std::string> *a8, uint8_t a9, int *a10, int *a11);
// [0x57f860] (557 bytes) sub_57F860
// int sub_57F860(int a1, int a2, int a3, char a4, int a5, int *a6, int *a7);
// [0x57fa90] (1251 bytes) sub_57FA90
// void sub_57FA90( uint32_t *a1, unsigned int a2, int a3, int a4, int a5, unsigned int a6, std::map<std::string,std::string> *a7, uint32_t *a8, int a9);
// [0x57ff80] (187 bytes) sub_57FF80
// int sub_57FF80(int a1, int a2, int a3, int a4, std::map<std::string,std::string> *a5, uint8_t a6);
// [0x580040] (517 bytes) sub_580040
// int sub_580040(int a1, int a2, int a3, uint32_t *a4, int a5);
// [0x580250] (539 bytes) sub_580250
// void sub_580250(gaia::Gaia *a1, int a2);
// [0x580470] (238 bytes) sub_580470
// int sub_580470(gaia::Gaia *a1);
// [0x580560] (459 bytes) sub_580560
// int sub_580560(uint32_t *a1);
// [0x580730] (244 bytes) sub_580730
// int sub_580730(uint32_t *a1);
// [0x580830] (231 bytes) sub_580830
// int sub_580830(int a1);
// [0x580920] (240 bytes) sub_580920
// int sub_580920(int a1);
// [0x580a10] (184 bytes) sub_580A10
// int sub_580A10(gaia::Gaia *a1, int a2);
// [0x580ad0] (225 bytes) sub_580AD0
// int sub_580AD0(int a1, int a2);
// [0x580bc0] (739 bytes) sub_580BC0
// void sub_580BC0(gaia::Gaia *a1);
// [0x580eb0] (539 bytes) sub_580EB0
// void sub_580EB0(uint32_t *a1);
// [0x5810d0] (244 bytes) sub_5810D0
// int sub_5810D0(gaia::Gaia *a1, int a2, int a3, int a4);
// [0x5811d0] (307 bytes) sub_5811D0
// int sub_5811D0(int a1, int a2);
// [0x581310] (288 bytes) sub_581310
// int sub_581310(int a1, int a2);
// [0x581430] (233 bytes) sub_581430
// int sub_581430(int a1, int a2, int a3, int a4);
// [0x581520] (425 bytes) sub_581520
// int sub_581520(uint32_t *a1, int a2);
// [0x5816d0] (249 bytes) sub_5816D0
// int sub_5816D0(gaia::Gaia *a1, int a2, int a3, int a4);
// [0x5817d0] (382 bytes) sub_5817D0
// int sub_5817D0(int a1, int a2);
// [0x581950] (306 bytes) sub_581950
// int sub_581950(int a1, char a2);
// [0x581a90] (306 bytes) sub_581A90
// int sub_581A90(int a1, char a2);
// [0x581bd0] (444 bytes) sub_581BD0
// void sub_581BD0(long double a1, int a2);
// [0x581d90] (387 bytes) sub_581D90
// int sub_581D90(gaia::Gaia *a1, int a2, int a3, int a4, int a5);
// [0x581f20] (591 bytes) sub_581F20
// int sub_581F20(gaia::Gaia *a1, int a2, int a3);
// [0x582170] (328 bytes) sub_582170
// int sub_582170(gaia::Gaia *a1, char a2);
// [0x5822c0] (184 bytes) sub_5822C0
// int sub_5822C0(uint32_t *a1);
// [0x582380] (1483 bytes) sub_582380
// int sub_582380(int a1, uint32_t *a2, unsigned int a3, unsigned int a4);
// [0x582950] (1014 bytes) sub_582950
// int sub_582950(int a1, uint32_t *a2);
// [0x582d50] (1001 bytes) sub_582D50
// int sub_582D50(int a1, unsigned int a2, int a3, unsigned int a4);
// [0x583140] (456 bytes) sub_583140
// int sub_583140(uint32_t *a1);
// [0x583310] (492 bytes) sub_583310
// void sub_583310(gaia::Gaia *a1);
// [0x583500] (2457 bytes) sub_583500
// void sub_583500(long double a1, int a2, int a3, int a4, int a5);
// [0x583ea0] (588 bytes) sub_583EA0
// int sub_583EA0(int a1);
// [0x5840f0] (314 bytes) sub_5840F0
// int sub_5840F0(gaia::Gaia **a1, int a2, int a3, int a4);
// [0x584230] (208 bytes) sub_584230
// int sub_584230(int a1, int a2, Json::Value *a3);
// [0x584300] (626 bytes) sub_584300
// void sub_584300(int a1, int a2, char a3);
// [0x584580] (364 bytes) sub_584580
// void sub_584580(int a1, const char **a2);
// [0x5846f0] (575 bytes) sub_5846F0
// void sub_5846F0(int a1, bool a2, bool a3);
// [0x584930] (599 bytes) sub_584930
// void sub_584930(int a1, bool a2);
// [0x584b90] (575 bytes) sub_584B90
// void sub_584B90(int a1, long double a2);
// [0x584dd0] (60 bytes) sub_584DD0
// void sub_584DD0(long double a1, int a2);
// [0x584e10] (293 bytes) sub_584E10
// int sub_584E10(long double a1, int a2);
// [0x584f40] (1202 bytes) sub_584F40
// void sub_584F40(int a1, long double a2);
// [0x585420] (372 bytes) sub_585420
// void sub_585420(int a1, const char **a2);
// [0x5855a0] (364 bytes) sub_5855A0
// void sub_5855A0(int a1, const char **a2);
// [0x585710] (324 bytes) sub_585710
// void sub_585710();
// [0x585860] (364 bytes) sub_585860
// void sub_585860(int a1, const char **a2);
// [0x5859d0] (524 bytes) sub_5859D0
// void sub_5859D0(int a1, const char **a2, int a3, char a4);
// [0x585be0] (364 bytes) sub_585BE0
// void sub_585BE0(int a1, const char **a2);
// [0x585d50] (364 bytes) sub_585D50
// void sub_585D50(int a1, const char **a2);
// [0x585ec0] (364 bytes) sub_585EC0
// void sub_585EC0(int a1, const char **a2);
// [0x586030] (428 bytes) sub_586030
// void sub_586030(int a1, const char **a2);
// [0x5861e0] (364 bytes) sub_5861E0
// void sub_5861E0(int a1, const char **a2);
// [0x586350] (428 bytes) sub_586350
// void sub_586350(int a1, const char **a2);
// [0x586500] (364 bytes) sub_586500
// void sub_586500(int a1, const char **a2);
// [0x586670] (364 bytes) sub_586670
// void sub_586670(int a1, int a2);
// [0x5867e0] (436 bytes) sub_5867E0
// void sub_5867E0(int a1, int a2, bool a3);
// [0x5869a0] (4889 bytes) sub_5869A0
// char *sub_5869A0(long double a1, int a2, iap::TransactionInfoLegacy *a3);
// [0x587cc0] (2918 bytes) sub_587CC0
// int sub_587CC0(long double a1, int a2);
// [0x588830] (474 bytes) sub_588830
// int sub_588830(long double a1, int a2, int a3);
// [0x588a10] (852 bytes) sub_588A10
// int *sub_588A10(int a1);
// [0x588d70] (682 bytes) sub_588D70
// void sub_588D70(int a1, int a2, int a3);
// [0x589020] (89 bytes) sub_589020
// int sub_589020(int a1, Json::Value *a2);
// [0x589080] (5462 bytes) sub_589080
// void sub_589080(int a1, int a2, int a3, int a4);
// [0x58a5e0] (3473 bytes) sub_58A5E0
// bool sub_58A5E0( int a1, int a2, int a3, char a4, char a5, int a6, int a7, char a8, int a9, int a10);
// [0x58b380] (312 bytes) sub_58B380
// bool sub_58B380(int a1, unsigned int a2, int a3, char a4, char a5, int a6, int a7, char a8, int a9, int a10);
// [0x58b4c0] (690 bytes) sub_58B4C0
// int sub_58B4C0(uint8_t *a1, int a2, int a3, int a4, int a5, int a6);
// [0x58b780] (3070 bytes) sub_58B780
// int sub_58B780(int a1, int a2, int a3, int a4, int a5, char a6, char a7, char **a8);
// [0x58c380] (468 bytes) sub_58C380
// void sub_58C380(int a1, int a2, int a3, int a4);
// [0x58c560] (2352 bytes) sub_58C560
// void sub_58C560(int a1, int a2);
// [0x58e1b0] (4889 bytes) sub_58E1B0
// const oi::BillingMethod *sub_58E1B0( int a1, int *a2, long double a3, oi::StoreOfflineItem *a4);
// [0x58f4d0] (3766 bytes) sub_58F4D0
// void sub_58F4D0(uint32_t *a1, int a2);
// [0x590390] (404 bytes) sub_590390
// void sub_590390(long double a1, int a2, int a3, int a4, int a5);
// [0x590530] (284 bytes) sub_590530
// uint32_t *sub_590530(uint32_t *a1, int a2, int *a3, int *a4);
// [0x590650] (215 bytes) sub_590650
// int sub_590650(int a1, int *a2);
// [0x590730] (1455 bytes) sub_590730
// void sub_590730(int a1, uint32_t *a2, Json::Value *a3);
// [0x590ce0] (1488 bytes) sub_590CE0
// void sub_590CE0(int a1, uint32_t *a2, Json::Value *a3);
// [0x5912b0] (1573 bytes) sub_5912B0
// int sub_5912B0(int a1, int a2);
// [0x5918e0] (663 bytes) sub_5918E0
// int sub_5918E0(int a1, const char **a2, char **a3, int a4);
// [0x591b80] (294 bytes) sub_591B80
// char *sub_591B80(int a1, oi::StoreOfflineItem *a2, uint32_t *a3);
// [0x591cb0] (675 bytes) sub_591CB0
// void sub_591CB0(long double a1, int a2, oi::OfflineStore *a3);
// [0x591f60] (310 bytes) sub_591F60
// int sub_591F60(long double a1, int a2, int a3);
// [0x5920a0] (417 bytes) sub_5920A0
// int sub_5920A0(uint32_t *a1, int a2);
// [0x592250] (2889 bytes) sub_592250
// void sub_592250(uint32_t *a1, Json::Value *a2);
// [0x592da0] (1074 bytes) sub_592DA0
// int sub_592DA0(uint32_t *a1);
// [0x5931e0] (906 bytes) sub_5931E0
// char *sub_5931E0(gaia::Gaia *a1, int a2);
// [0x593570] (31052 bytes) sub_593570
// void sub_593570(int a1);
// [0x59aec0] (3869 bytes) sub_59AEC0
// void sub_59AEC0(long double a1, int a2, unsigned int a3);
// [0x59bde0] (99 bytes) sub_59BDE0
// int sub_59BDE0(int a1);
// [0x59be50] (1367 bytes) sub_59BE50
// int sub_59BE50(int a1, int a2);
// [0x59c3b0] (42 bytes) isalpha
// int isalpha(int a1);
// [0x59c3e0] (24 bytes) sub_59C3E0
// uint32_t *sub_59C3E0(uint32_t *a1);
// [0x59c400] (28 bytes) sub_59C400
// int sub_59C400(int a1);
// [0x59c420] (28 bytes) sub_59C420
// int sub_59C420(int a1);
// [0x59c440] (28 bytes) sub_59C440
// int sub_59C440(int a1);
// [0x59c460] (28 bytes) sub_59C460
// int sub_59C460(int a1);
// [0x59c480] (28 bytes) sub_59C480
// int sub_59C480(int a1);
// [0x59c4a0] (28 bytes) sub_59C4A0
// int sub_59C4A0(int a1);
// [0x59c4c0] (28 bytes) sub_59C4C0
// int sub_59C4C0(int a1);
// [0x59c4e0] (28 bytes) sub_59C4E0
// int sub_59C4E0(int a1);
// [0x59c500] (28 bytes) sub_59C500
// int sub_59C500(int a1);
// [0x59c520] (42 bytes) sub_59C520
// void sub_59C520(uint32_t *a1);
// [0x59c550] (46 bytes) sub_59C550
// void sub_59C550(uint8_t *a1);
// [0x59c580] (46 bytes) sub_59C580
// void sub_59C580(uint8_t *a1);
// [0x59c5b0] (46 bytes) sub_59C5B0
// void sub_59C5B0(uint8_t *a1);
// [0x59c5e0] (46 bytes) sub_59C5E0
// void sub_59C5E0(uint8_t *a1);
// [0x59c610] (46 bytes) sub_59C610
// void sub_59C610(uint8_t *a1);
// [0x59c640] (46 bytes) sub_59C640
// void sub_59C640(uint8_t *a1);
// [0x59c670] (46 bytes) sub_59C670
// void sub_59C670(uint8_t *a1);
// [0x59c6a0] (46 bytes) sub_59C6A0
// void sub_59C6A0(uint8_t *a1);
// [0x59c6d0] (46 bytes) sub_59C6D0
// void sub_59C6D0(uint8_t *a1);
// [0x59c700] (42 bytes) sub_59C700
// int sub_59C700(std::exception *a1);
// [0x59c730] (138 bytes) sub_59C730
// int (**sub_59C730(int a1))(int);
// [0x59c7c0] (67 bytes) sub_59C7C0
// int (**sub_59C7C0(int a1))(int);
// [0x59c810] (42 bytes) sub_59C810
// void sub_59C810(iap::StoreItemLegacyArray::Comparator *a1);
// [0x59c840] (305 bytes) sub_59C840
// bool sub_59C840(int a1, iap::StoreItemLegacy *a2, iap::StoreItemLegacy *a3);
// [0x59c972] (86 bytes) sub_59C972
// void __noreturn sub_59C972();
// [0x59c9d0] (301 bytes) sub_59C9D0
// void sub_59C9D0(size_t **a1, size_t **a2, int a3);
// [0x59cb00] (64 bytes) sub_59CB00
// void sub_59CB00(std::exception *a1);
// [0x59cb40] (75 bytes) sub_59CB40
// void sub_59CB40(glwebtools::Mutex **a1);
// [0x59cb90] (64 bytes) sub_59CB90
// void sub_59CB90(iap::StoreItemLegacyArray::Comparator *a1);
// [0x59cbd0] (70 bytes) sub_59CBD0
// int sub_59CBD0(std::exception *a1);
// [0x59cc20] (70 bytes) sub_59CC20
// int sub_59CC20(std::exception *a1);
// [0x59cc70] (70 bytes) sub_59CC70
// int sub_59CC70(std::exception *a1);
// [0x59ccc0] (78 bytes) sub_59CCC0
// void sub_59CCC0(std::exception *a1);
// [0x59cd10] (78 bytes) sub_59CD10
// void sub_59CD10(std::exception *a1);
// [0x59cd60] (78 bytes) sub_59CD60
// void sub_59CD60(std::exception *a1);
// [0x59cdb0] (146 bytes) sub_59CDB0
// void sub_59CDB0(void **a1);
// [0x59ce50] (62 bytes) sub_59CE50
// int sub_59CE50(int a1);
// [0x59ce90] (120 bytes) sub_59CE90
// void sub_59CE90(gameswf **a1, gameswf *s);
// [0x59cf10] (304 bytes) sub_59CF10
// int sub_59CF10(int a1);
// [0x59d040] (237 bytes) sub_59D040
// int sub_59D040(int a1, int a2);
// [0x59d130] (121 bytes) sub_59D130
// int sub_59D130(uint32_t *a1);
// [0x59d1b0] (129 bytes) sub_59D1B0
// void sub_59D1B0(char *a1);
// [0x59d240] (239 bytes) sub_59D240
// int sub_59D240(int a1, int a2);
// [0x59d330] (365 bytes) sub_59D330
// int sub_59D330(int a1);
// [0x59d4a0] (251 bytes) sub_59D4A0
// int sub_59D4A0(int a1);
// [0x59d5a0] (142 bytes) sub_59D5A0
// int sub_59D5A0(int a1);
// [0x59d630] (9 bytes) sub_59D630
// int sub_59D630();
// [0x59d640] (92 bytes) sub_59D640
// int sub_59D640(int a1);
// [0x59d6a0] (96 bytes) std::basic_string<char,std::char_traits<char>,std::allocator<char>> std::operator+<char,std::char_traits<char>,std::allocator<char>>(std::basic_string<char,std::char_traits<char>,std::allocator<char>> const&,char const*)
// int std::operator+<char>(int a1, int a2, char *s);
// [0x59d700] (98 bytes) __gnu_cxx::__enable_if<std::__is_char<char>::__value,bool>::__type std::operator==<char>(std::basic_string<char,std::char_traits<char>,std::allocator<char>> const&,std::basic_string<char,std::char_traits<char>,std::allocator<char>> const&)
// bool std::operator==<char>(const void **a1, const void **a2);
// [0x59d770] (142 bytes) sub_59D770
// int *sub_59D770();
// [0x59d800] (99 bytes) std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>>::clear(void)
// int std::vector<gaia::BaseJSONServiceResponse>::clear(std::vector<gaia::BaseJSONServiceResponse> *this);
// [0x59d870] (167 bytes) std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>>::vector(std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> const&)
// Json::Value *std::vector<gaia::BaseJSONServiceResponse>::vector( int a1, int a2, std::vector<gaia::BaseJSONServiceResponse> *this, const std::vector<gaia::BaseJSONServiceResponse> *a4);
// [0x59d920] (142 bytes) sub_59D920
// int *sub_59D920();
// [0x59d9b0] (142 bytes) sub_59D9B0
// void *sub_59D9B0();
// [0x59da40] (269 bytes) sub_59DA40
// glwebtools *sub_59DA40(glwebtools::JsonWriter *a1, int a2);
// [0x59db50] (184 bytes) std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::operator[](std::string const&)
// int std::map<std::string,int>::operator[](uint32_t *a1, int a2);
// [0x59dc10] (823 bytes) std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::operator[](std::string const&)
// uint32_t *std::map<std::string,std::string>::operator[](uint32_t *a1, int a2);
// [0x59df50] (1007 bytes) std::map<unsigned int,SavedClanSocialEvent,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,SavedClanSocialEvent>>>::operator[](unsigned int const&)
// char *std::map<unsigned int,SavedClanSocialEvent>::operator[]( std::map<unsigned int,SavedClanSocialEvent> *this, unsigned int *a2);
// [0x59e340] (142 bytes) sub_59E340
// uint32_t *sub_59E340(uint32_t *a1, char *s, uint32_t *a3);
// [0x59e3d0] (46 bytes) std::deque<ProfileAvatar *,std::allocator<ProfileAvatar *>>::push_front(ProfileAvatar * const&)
// int std::deque<ProfileAvatar *>::push_front(int a1, uint32_t *a2);
// [0x59e400] (1644 bytes) std::deque<ProfileAvatar *,std::allocator<ProfileAvatar *>>::erase(std::_Deque_iterator<ProfileAvatar *,ProfileAvatar *&,ProfileAvatar **>)
// _OWORD *std::deque<ProfileAvatar *>::erase(_OWORD *a1, int a2, int *a3);
// [0x59ea70] (562 bytes) sub_59EA70
// void sub_59EA70(int a1, const void **a2);
// [0x59ecb0] (136 bytes) std::set<std::string,std::less<std::string>,std::allocator<std::string>>::find(std::string const&)
// uint32_t *std::set<std::string>::find(uint32_t *a1, int a2, int a3);
// [0x59ed40] (313 bytes) std::deque<Json::Value,std::allocator<Json::Value>>::~deque()
// void std::deque<Json::Value>::~deque(std::deque<Json::Value> *this);
// [0x59ee80] (87 bytes) std::list<Json::Value,std::allocator<Json::Value>>::push_back(Json::Value const&)
// int std::list<Json::Value>::push_back(std::list<Json::Value> *this, const Json::Value *a2);
// [0x59eee0] (142 bytes) sub_59EEE0
// int *sub_59EEE0();
// [0x59ef70] (69 bytes) std::list<Json::Value,std::allocator<Json::Value>>::pop_front(void)
// void std::list<Json::Value>::pop_front(std::list<Json::Value> *this);
// [0x59efc0] (596 bytes) std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>>::operator=(std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> const&)
// std::vector<gaia::BaseJSONServiceResponse> *std::vector<gaia::BaseJSONServiceResponse>::operator=( std::vector<gaia::BaseJSONServiceResponse> *this, const std::vector<gaia::BaseJSONServiceResponse> *a2);
// [0x59f220] (287 bytes) sub_59F220
// void sub_59F220(int a1);
// [0x59f340] (820 bytes) sub_59F340
// int sub_59F340(int a1, int a2);
// [0x59f680] (436 bytes) std::vector<online::socialNetwork::OsirisUser *,std::allocator<online::socialNetwork::OsirisUser *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<online::socialNetwork::OsirisUser **,std::vector<online::socialNetwork::OsirisUser *,std::allocator<online::socialNetwork::OsirisUser *>>>,online::socialNetwork::OsirisUser * const&)
// void std::vector<online::socialNetwork::OsirisUser *>::_M_insert_aux(int a1, char *src, int *a3);
// [0x59f840] (90 bytes) std::vector<online::socialNetwork::OsirisUser *,std::allocator<online::socialNetwork::OsirisUser *>>::push_back(online::socialNetwork::OsirisUser * const&)
// void std::vector<online::socialNetwork::OsirisUser *>::push_back(int a1, int *a2);
// [0x59f8a0] (425 bytes) std::_Rb_tree<BanManager::BanType,std::pair<BanManager::BanType const,BanManager::BanState *>,std::_Select1st<std::pair<BanManager::BanType const,BanManager::BanState *>>,std::less<BanManager::BanType>,std::allocator<std::pair<BanManager::BanType const,BanManager::BanState *>>>::_M_erase(std::_Rb_tree_node<std::pair<BanManager::BanType const,BanManager::BanState *>> *)
// void std::_Rb_tree<BanManager::BanType,std::pair<BanManager::BanType const,BanManager::BanState *>,std::_Select1st<std::pair<BanManager::BanType const,BanManager::BanState *>>,std::less<BanManager::BanType>,std::allocator<std::pair<BanManager::BanType const,BanManager::BanState *>>>::_M_erase( int a1, uint32_t *a2);
// [0x59fa50] (567 bytes) std::_Rb_tree<unsigned int,std::pair<unsigned int const,DynamicPricingItem>,std::_Select1st<std::pair<unsigned int const,DynamicPricingItem>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,DynamicPricingItem>>>::_M_erase(std::_Rb_tree_node<std::pair<unsigned int const,DynamicPricingItem>> *)
// void std::_Rb_tree<unsigned int,std::pair<unsigned int const,DynamicPricingItem>,std::_Select1st<std::pair<unsigned int const,DynamicPricingItem>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,DynamicPricingItem>>>::_M_erase( int a1, uint32_t *a2);
// [0x59fc90] (1368 bytes) std::vector<ClanBattleParticipant::ParticipantMember,std::allocator<ClanBattleParticipant::ParticipantMember>>::_M_insert_aux(__gnu_cxx::__normal_iterator<ClanBattleParticipant::ParticipantMember*,std::vector<ClanBattleParticipant::ParticipantMember,std::allocator<ClanBattleParticipant::ParticipantMember>>>,ClanBattleParticipant::ParticipantMember const&)
// int std::vector<ClanBattleParticipant::ParticipantMember>::_M_insert_aux(int *a1, int a2, int a3);
// [0x5a01f0] (870 bytes) std::_Rb_tree<std::pair<int,std::vector<RewardInfo,std::allocator<RewardInfo>>>,std::pair<int,std::vector<RewardInfo,std::allocator<RewardInfo>>>,std::_Identity<std::pair<int,std::vector<RewardInfo,std::allocator<RewardInfo>>>>,SocialEvent::BracketComp,std::allocator<std::pair<int,std::vector<RewardInfo,std::allocator<RewardInfo>>>>>::_M_erase(std::_Rb_tree_node<std::pair<int,std::vector<RewardInfo,std::allocator<RewardInfo>>>> *)
// void std::_Rb_tree<std::pair<int,std::vector<RewardInfo>>,std::pair<int,std::vector<RewardInfo>>,std::_Identity<std::pair<int,std::vector<RewardInfo>>>,SocialEvent::BracketComp,std::allocator<std::pair<int,std::vector<RewardInfo>>>>::_M_erase( int a1, uint32_t *a2);
// [0x5a0560] (509 bytes) std::_Rb_tree<std::pair<int,RewardInfo>,std::pair<int,RewardInfo>,std::_Identity<std::pair<int,RewardInfo>>,SocialEvent::MilestoneBracketComp,std::allocator<std::pair<int,RewardInfo>>>::_M_erase(std::_Rb_tree_node<std::pair<int,RewardInfo>> *)
// void std::_Rb_tree<std::pair<int,RewardInfo>,std::pair<int,RewardInfo>,std::_Identity<std::pair<int,RewardInfo>>,SocialEvent::MilestoneBracketComp,std::allocator<std::pair<int,RewardInfo>>>::_M_erase( int a1, uint32_t *a2);
// [0x5a0760] (222 bytes) std::vector<RewardInfo,std::allocator<RewardInfo>>::vector(std::vector<RewardInfo,std::allocator<RewardInfo>> const&)
// int std::vector<RewardInfo>::vector(std::vector<RewardInfo> *this, const std::vector<RewardInfo> *a2);
// [0x5a0840] (2130 bytes) std::_Rb_tree<std::string,std::pair<std::string const,ClanBattleParticipant>,std::_Select1st<std::pair<std::string const,ClanBattleParticipant>>,std::less<std::string>,std::allocator<std::pair<std::string const,ClanBattleParticipant>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,ClanBattleParticipant>> *)
// void std::_Rb_tree<std::string,std::pair<std::string const,ClanBattleParticipant>,std::_Select1st<std::pair<std::string const,ClanBattleParticipant>>,std::less<std::string>,std::allocator<std::pair<std::string const,ClanBattleParticipant>>>::_M_erase( int a1, uint32_t *a2);
// [0x5a10a0] (669 bytes) std::map<std::string,ClanBattleParticipant,std::less<std::string>,std::allocator<std::pair<std::string const,ClanBattleParticipant>>>::erase(std::string const&)
// int std::map<std::string,ClanBattleParticipant>::erase(uint32_t *a1, int a2);
// [0x5a1340] (567 bytes) std::_Rb_tree<std::string,std::pair<std::string const,AssetFetcherWithEtag *>,std::_Select1st<std::pair<std::string const,AssetFetcherWithEtag *>>,std::less<std::string>,std::allocator<std::pair<std::string const,AssetFetcherWithEtag *>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,AssetFetcherWithEtag *>> *)
// void std::_Rb_tree<std::string,std::pair<std::string const,AssetFetcherWithEtag *>,std::_Select1st<std::pair<std::string const,AssetFetcherWithEtag *>>,std::less<std::string>,std::allocator<std::pair<std::string const,AssetFetcherWithEtag *>>>::_M_erase( int a1, uint32_t *a2);
// [0x5a1580] (425 bytes) std::_Rb_tree<unsigned int,std::pair<unsigned int const,SavedSocialEvent>,std::_Select1st<std::pair<unsigned int const,SavedSocialEvent>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,SavedSocialEvent>>>::_M_erase(std::_Rb_tree_node<std::pair<unsigned int const,SavedSocialEvent>> *)
// void std::_Rb_tree<unsigned int,std::pair<unsigned int const,SavedSocialEvent>,std::_Select1st<std::pair<unsigned int const,SavedSocialEvent>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,SavedSocialEvent>>>::_M_erase( int a1, uint32_t *a2);
// [0x5a1730] (425 bytes) std::_Rb_tree<unsigned int,std::pair<unsigned int const,SavedClanSocialEvent>,std::_Select1st<std::pair<unsigned int const,SavedClanSocialEvent>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,SavedClanSocialEvent>>>::_M_erase(std::_Rb_tree_node<std::pair<unsigned int const,SavedClanSocialEvent>> *)
// void std::_Rb_tree<unsigned int,std::pair<unsigned int const,SavedClanSocialEvent>,std::_Select1st<std::pair<unsigned int const,SavedClanSocialEvent>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,SavedClanSocialEvent>>>::_M_erase( int a1, uint32_t *a2);
// [0x5a18e0] (239 bytes) sub_5A18E0
// int sub_5A18E0(int a1, int a2);
// [0x5a19d0] (567 bytes) std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(std::_Rb_tree_node<std::string> *)
// void std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase( int a1, uint32_t *a2);
// [0x5a1c10] (2185 bytes) std::_Rb_tree<int,std::pair<int const,std::deque<CrmActionInfo,std::allocator<CrmActionInfo>>>,std::_Select1st<std::pair<int const,std::deque<CrmActionInfo,std::allocator<CrmActionInfo>>>>,std::less<int>,std::allocator<std::pair<int const,std::deque<CrmActionInfo,std::allocator<CrmActionInfo>>>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,std::deque<CrmActionInfo,std::allocator<CrmActionInfo>>>> *)
// void std::_Rb_tree<int,std::pair<int const,std::deque<CrmActionInfo>>,std::_Select1st<std::pair<int const,std::deque<CrmActionInfo>>>,std::less<int>,std::allocator<std::pair<int const,std::deque<CrmActionInfo>>>>::_M_erase( int a1, uint32_t *a2);
// [0x5a24a0] (425 bytes) std::_Rb_tree<unsigned int,std::pair<unsigned int const,SeshatData>,std::_Select1st<std::pair<unsigned int const,SeshatData>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,SeshatData>>>::_M_erase(std::_Rb_tree_node<std::pair<unsigned int const,SeshatData>> *)
// void std::_Rb_tree<unsigned int,std::pair<unsigned int const,SeshatData>,std::_Select1st<std::pair<unsigned int const,SeshatData>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,SeshatData>>>::_M_erase( int a1, uint32_t *a2);
// [0x5a2650] (641 bytes) std::vector<RequestStatus,std::allocator<RequestStatus>>::_M_insert_aux(__gnu_cxx::__normal_iterator<RequestStatus*,std::vector<RequestStatus,std::allocator<RequestStatus>>>,RequestStatus const&)
// int std::vector<RequestStatus>::_M_insert_aux(int a1, char *a2, int *a3);
// [0x5a28e0] (719 bytes) std::vector<std::pair<std::string,Json::Value>,std::allocator<std::pair<std::string,Json::Value>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<std::pair<std::string,Json::Value>*,std::vector<std::pair<std::string,Json::Value>,std::allocator<std::pair<std::string,Json::Value>>>>,std::pair<std::string,Json::Value> const&)
// int std::vector<std::pair<std::string,Json::Value>>::_M_insert_aux(size_t *a1, int a2, int a3);
// [0x5a2bb0] (577 bytes) std::deque<Json::Value,std::allocator<Json::Value>>::push_back(Json::Value const&)
// Json::Value *std::deque<Json::Value>::push_back(std::deque<Json::Value> *this, const Json::Value *a2);
// [0x5a2e00] (567 bytes) std::_Rb_tree<std::string,std::pair<std::string const,online::socialNetwork::OsirisUser *>,std::_Select1st<std::pair<std::string const,online::socialNetwork::OsirisUser *>>,std::less<std::string>,std::allocator<std::pair<std::string const,online::socialNetwork::OsirisUser *>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,online::socialNetwork::OsirisUser *>> *)
// void std::_Rb_tree<std::string,std::pair<std::string const,online::socialNetwork::OsirisUser *>,std::_Select1st<std::pair<std::string const,online::socialNetwork::OsirisUser *>>,std::less<std::string>,std::allocator<std::pair<std::string const,online::socialNetwork::OsirisUser *>>>::_M_erase( int a1, uint32_t *a2);
// [0x5a3040] (436 bytes) std::vector<online::socialNetwork::MembershipRequest *,std::allocator<online::socialNetwork::MembershipRequest *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<online::socialNetwork::MembershipRequest **,std::vector<online::socialNetwork::MembershipRequest *,std::allocator<online::socialNetwork::MembershipRequest *>>>,online::socialNetwork::MembershipRequest * const&)
// void std::vector<online::socialNetwork::MembershipRequest *>::_M_insert_aux(int a1, char *src, int *a3);
// [0x5a3200] (202 bytes) sub_5A3200
// int sub_5A3200(int a1, int a2);
// [0x5a32d0] (1968 bytes) std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_copy(std::_Rb_tree_node<std::pair<std::string const,std::string>> const*,std::_Rb_tree_node<std::pair<std::string const,std::string>>*)
// uint32_t *std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_copy( int a1, uint32_t *a2, int a3);
// [0x5a3a80] (200 bytes) void std::__insertion_sort<__gnu_cxx::__normal_iterator<SocialEvent **,std::vector<SocialEvent *,std::allocator<SocialEvent *>>>,SocialEventCompare>(__gnu_cxx::__normal_iterator<SocialEvent **,std::vector<SocialEvent *,std::allocator<SocialEvent *>>>,__gnu_cxx::__normal_iterator<SocialEvent **,std::vector<SocialEvent *,std::allocator<SocialEvent *>>>,SocialEventCompare)
// void std::__insertion_sort<__gnu_cxx::__normal_iterator<SocialEvent **,std::vector<SocialEvent *>>,SocialEventCompare>( char *src, char *a2);
// [0x5a3b50] (158 bytes) gaia::BaseJSONServiceResponse * std::copy_backward<gaia::BaseJSONServiceResponse *,gaia::BaseJSONServiceResponse *>(gaia::BaseJSONServiceResponse *,gaia::BaseJSONServiceResponse *,gaia::BaseJSONServiceResponse *)
// gaia::BaseJSONServiceResponse *std::copy_backward<gaia::BaseJSONServiceResponse *,gaia::BaseJSONServiceResponse *>( gaia::BaseJSONServiceResponse *a1, gaia::BaseJSONServiceResponse *a2, gaia::BaseJSONServiceResponse *a3);
// [0x5a3bf0] (342 bytes) void std::__insertion_sort<__gnu_cxx::__normal_iterator<online::socialNetwork::OsirisGroup **,std::vector<online::socialNetwork::OsirisGroup *,std::allocator<online::socialNetwork::OsirisGroup *>>>,GroupsCompare>(__gnu_cxx::__normal_iterator<online::socialNetwork::OsirisGroup **,std::vector<online::socialNetwork::OsirisGroup *,std::allocator<online::socialNetwork::OsirisGroup *>>>,__gnu_cxx::__normal_iterator<online::socialNetwork::OsirisGroup **,std::vector<online::socialNetwork::OsirisGroup *,std::allocator<online::socialNetwork::OsirisGroup *>>>,GroupsCompare)
// int *std::__insertion_sort<__gnu_cxx::__normal_iterator<online::socialNetwork::OsirisGroup **,std::vector<online::socialNetwork::OsirisGroup *>>,GroupsCompare>( char *src, char *a2);
// [0x5a3d50] (378 bytes) std::_Rb_tree<unsigned int,std::pair<unsigned int const,DynamicPricingItem>,std::_Select1st<std::pair<unsigned int const,DynamicPricingItem>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,DynamicPricingItem>>>::_M_insert_(std::_Rb_tree_node_base const*,std::_Rb_tree_node_base const*,std::pair<unsigned int const,DynamicPricingItem> const&)
// int *std::_Rb_tree<unsigned int,std::pair<unsigned int const,DynamicPricingItem>,std::_Select1st<std::pair<unsigned int const,DynamicPricingItem>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,DynamicPricingItem>>>::_M_insert_( int *a1, int a2, int a3, int a4, int a5);
// [0x5a3ed0] (223 bytes) std::_Rb_tree<unsigned int,std::pair<unsigned int const,DynamicPricingItem>,std::_Select1st<std::pair<unsigned int const,DynamicPricingItem>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,DynamicPricingItem>>>::_M_insert_unique(std::pair<unsigned int const,DynamicPricingItem> const&)
// int std::_Rb_tree<unsigned int,std::pair<unsigned int const,DynamicPricingItem>,std::_Select1st<std::pair<unsigned int const,DynamicPricingItem>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,DynamicPricingItem>>>::_M_insert_unique( int a1, int a2, unsigned int *a3);
// [0x5a3fb0] (391 bytes) std::_Rb_tree<unsigned int,std::pair<unsigned int const,DynamicPricingItem>,std::_Select1st<std::pair<unsigned int const,DynamicPricingItem>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,DynamicPricingItem>>>::_M_insert_unique_(std::_Rb_tree_const_iterator<std::pair<unsigned int const,DynamicPricingItem>>,std::pair<unsigned int const,DynamicPricingItem> const&)
// int *std::_Rb_tree<unsigned int,std::pair<unsigned int const,DynamicPricingItem>,std::_Select1st<std::pair<unsigned int const,DynamicPricingItem>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,DynamicPricingItem>>>::_M_insert_unique_( int *a1, uint32_t *a2, int a3, unsigned int *a4);
// [0x5a4140] (410 bytes) std::_Rb_tree<std::string,std::pair<std::string const,ClanBattleParticipant>,std::_Select1st<std::pair<std::string const,ClanBattleParticipant>>,std::less<std::string>,std::allocator<std::pair<std::string const,ClanBattleParticipant>>>::_M_insert_(std::_Rb_tree_node_base const*,std::_Rb_tree_node_base const*,std::pair<std::string const,ClanBattleParticipant> const&)
// int *std::_Rb_tree<std::string,std::pair<std::string const,ClanBattleParticipant>,std::_Select1st<std::pair<std::string const,ClanBattleParticipant>>,std::less<std::string>,std::allocator<std::pair<std::string const,ClanBattleParticipant>>>::_M_insert_( int *a1, int a2, int a3, int a4, int a5);
// [0x5a42e0] (385 bytes) std::_Rb_tree<std::string,std::pair<std::string const,ClanBattleParticipant>,std::_Select1st<std::pair<std::string const,ClanBattleParticipant>>,std::less<std::string>,std::allocator<std::pair<std::string const,ClanBattleParticipant>>>::_M_insert_unique(std::pair<std::string const,ClanBattleParticipant> const&)
// int std::_Rb_tree<std::string,std::pair<std::string const,ClanBattleParticipant>,std::_Select1st<std::pair<std::string const,ClanBattleParticipant>>,std::less<std::string>,std::allocator<std::pair<std::string const,ClanBattleParticipant>>>::_M_insert_unique( int a1, uint32_t *a2, int a3);
// [0x5a4470] (624 bytes) std::_Rb_tree<std::string,std::pair<std::string const,ClanBattleParticipant>,std::_Select1st<std::pair<std::string const,ClanBattleParticipant>>,std::less<std::string>,std::allocator<std::pair<std::string const,ClanBattleParticipant>>>::_M_insert_unique_(std::_Rb_tree_const_iterator<std::pair<std::string const,ClanBattleParticipant>>,std::pair<std::string const,ClanBattleParticipant> const&)
// int *std::_Rb_tree<std::string,std::pair<std::string const,ClanBattleParticipant>,std::_Select1st<std::pair<std::string const,ClanBattleParticipant>>,std::less<std::string>,std::allocator<std::pair<std::string const,ClanBattleParticipant>>>::_M_insert_unique_( int *a1, uint32_t *a2, uint32_t *a3, int a4);
// [0x5a46e0] (105 bytes) void std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<online::socialNetwork::OsirisGroup **,std::vector<online::socialNetwork::OsirisGroup *,std::allocator<online::socialNetwork::OsirisGroup *>>>,GroupsCompare>(__gnu_cxx::__normal_iterator<online::socialNetwork::OsirisGroup **,std::vector<online::socialNetwork::OsirisGroup *,std::allocator<online::socialNetwork::OsirisGroup *>>>,GroupsCompare)
// unsigned int std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<online::socialNetwork::OsirisGroup **,std::vector<online::socialNetwork::OsirisGroup *>>,GroupsCompare>( int *a1);
// [0x5a4750] (211 bytes) std::_Rb_tree<std::string,std::pair<std::string const,online::socialNetwork::OsirisUser *>,std::_Select1st<std::pair<std::string const,online::socialNetwork::OsirisUser *>>,std::less<std::string>,std::allocator<std::pair<std::string const,online::socialNetwork::OsirisUser *>>>::_M_insert_(std::_Rb_tree_node_base const*,std::_Rb_tree_node_base const*,std::pair<std::string const,online::socialNetwork::OsirisUser *> const&)
// int *std::_Rb_tree<std::string,std::pair<std::string const,online::socialNetwork::OsirisUser *>,std::_Select1st<std::pair<std::string const,online::socialNetwork::OsirisUser *>>,std::less<std::string>,std::allocator<std::pair<std::string const,online::socialNetwork::OsirisUser *>>>::_M_insert_( int *a1, int a2, int a3, int a4, int a5);
// [0x5a4830] (369 bytes) std::_Rb_tree<std::string,std::pair<std::string const,online::socialNetwork::OsirisUser *>,std::_Select1st<std::pair<std::string const,online::socialNetwork::OsirisUser *>>,std::less<std::string>,std::allocator<std::pair<std::string const,online::socialNetwork::OsirisUser *>>>::_M_insert_unique(std::pair<std::string const,online::socialNetwork::OsirisUser *> const&)
// int std::_Rb_tree<std::string,std::pair<std::string const,online::socialNetwork::OsirisUser *>,std::_Select1st<std::pair<std::string const,online::socialNetwork::OsirisUser *>>,std::less<std::string>,std::allocator<std::pair<std::string const,online::socialNetwork::OsirisUser *>>>::_M_insert_unique( int a1, uint32_t *a2, int a3);
// [0x5a49b0] (672 bytes) std::_Rb_tree<std::string,std::pair<std::string const,online::socialNetwork::OsirisUser *>,std::_Select1st<std::pair<std::string const,online::socialNetwork::OsirisUser *>>,std::less<std::string>,std::allocator<std::pair<std::string const,online::socialNetwork::OsirisUser *>>>::_M_insert_unique_(std::_Rb_tree_const_iterator<std::pair<std::string const,online::socialNetwork::OsirisUser *>>,std::pair<std::string const,online::socialNetwork::OsirisUser *> const&)
// int *std::_Rb_tree<std::string,std::pair<std::string const,online::socialNetwork::OsirisUser *>,std::_Select1st<std::pair<std::string const,online::socialNetwork::OsirisUser *>>,std::less<std::string>,std::allocator<std::pair<std::string const,online::socialNetwork::OsirisUser *>>>::_M_insert_unique_( int *a1, uint32_t *a2, uint32_t *a3, int a4);
// [0x5a4c50] (116 bytes) gaia::BaseJSONServiceResponse * std::__copy_move_a<false,gaia::BaseJSONServiceResponse *,gaia::BaseJSONServiceResponse *>(gaia::BaseJSONServiceResponse *,gaia::BaseJSONServiceResponse *,gaia::BaseJSONServiceResponse *)
// gaia::BaseJSONServiceResponse *std::__copy_move_a<false,gaia::BaseJSONServiceResponse *,gaia::BaseJSONServiceResponse *>( gaia::BaseJSONServiceResponse *a1, gaia::BaseJSONServiceResponse *a2, gaia::BaseJSONServiceResponse *a3);
// [0x5a4cd0] (949 bytes) void std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>>::insert<__gnu_cxx::__normal_iterator<gaia::BaseJSONServiceResponse*,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>>>>(__gnu_cxx::__normal_iterator<gaia::BaseJSONServiceResponse*,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>>>,__gnu_cxx::__normal_iterator<gaia::BaseJSONServiceResponse*,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>>>,__gnu_cxx::__normal_iterator<gaia::BaseJSONServiceResponse*,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>>>)
// void std::vector<gaia::BaseJSONServiceResponse>::insert<__gnu_cxx::__normal_iterator<gaia::BaseJSONServiceResponse*,std::vector<gaia::BaseJSONServiceResponse>>>( int a1, gaia::BaseJSONServiceResponse *a2, gaia::BaseJSONServiceResponse *a3, gaia::BaseJSONServiceResponse *a4);
// [0x5a5090] (2035 bytes) std::_Rb_tree<unsigned int,std::pair<unsigned int const,unsigned int>,std::_Select1st<std::pair<unsigned int const,unsigned int>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>>::_M_copy(std::_Rb_tree_node<std::pair<unsigned int const,unsigned int>> const*,std::_Rb_tree_node<std::pair<unsigned int const,unsigned int>>*)
// uint32_t *std::_Rb_tree<unsigned int,std::pair<unsigned int const,unsigned int>,std::_Select1st<std::pair<unsigned int const,unsigned int>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>>::_M_copy( int a1, int *a2, int a3);
// [0x5a5890] (704 bytes) sub_5A5890
// int sub_5A5890(char *s, unsigned int a2);
// [0x5a5b50] (175 bytes) void std::__insertion_sort<char *>(char *,char *)
// void std::__insertion_sort<char *>(char *src, char *a2);
// [0x5a5c00] (135 bytes) sub_5A5C00
// bool sub_5A5C00(int a1, char a2);
// [0x5a5c90] (1499 bytes) sub_5A5C90
// char **sub_5A5C90(char **a1, char **a2, char *a3, char *a4);
// [0x5a6270] (250 bytes) void std::__adjust_heap<__gnu_cxx::__normal_iterator<SocialEvent **,std::vector<SocialEvent *,std::allocator<SocialEvent *>>>,int,SocialEvent *,SocialEventCompare>(__gnu_cxx::__normal_iterator<SocialEvent **,std::vector<SocialEvent *,std::allocator<SocialEvent *>>>,int,int,SocialEvent *,SocialEventCompare)
// int std::__adjust_heap<__gnu_cxx::__normal_iterator<SocialEvent **,std::vector<SocialEvent *>>,int,SocialEvent *,SocialEventCompare>( int a1, int a2, int a3, int a4);
// [0x5a6370] (1043 bytes) void std::__introsort_loop<__gnu_cxx::__normal_iterator<SocialEvent **,std::vector<SocialEvent *,std::allocator<SocialEvent *>>>,int,SocialEventCompare>(__gnu_cxx::__normal_iterator<SocialEvent **,std::vector<SocialEvent *,std::allocator<SocialEvent *>>>,__gnu_cxx::__normal_iterator<SocialEvent **,std::vector<SocialEvent *,std::allocator<SocialEvent *>>>,int,SocialEventCompare)
// int std::__introsort_loop<__gnu_cxx::__normal_iterator<SocialEvent **,std::vector<SocialEvent *>>,int,SocialEventCompare>( uint32_t *a1, char *a2, int a3);
// [0x5a6790] (324 bytes) void std::__adjust_heap<__gnu_cxx::__normal_iterator<online::socialNetwork::OsirisGroup **,std::vector<online::socialNetwork::OsirisGroup *,std::allocator<online::socialNetwork::OsirisGroup *>>>,int,online::socialNetwork::OsirisGroup *,GroupsCompare>(__gnu_cxx::__normal_iterator<online::socialNetwork::OsirisGroup **,std::vector<online::socialNetwork::OsirisGroup *,std::allocator<online::socialNetwork::OsirisGroup *>>>,int,int,online::socialNetwork::OsirisGroup *,GroupsCompare)
// int std::__adjust_heap<__gnu_cxx::__normal_iterator<online::socialNetwork::OsirisGroup **,std::vector<online::socialNetwork::OsirisGroup *>>,int,online::socialNetwork::OsirisGroup *,GroupsCompare>( int a1, int a2, int a3, int a4);
// [0x5a68e0] (1535 bytes) void std::__introsort_loop<__gnu_cxx::__normal_iterator<online::socialNetwork::OsirisGroup **,std::vector<online::socialNetwork::OsirisGroup *,std::allocator<online::socialNetwork::OsirisGroup *>>>,int,GroupsCompare>(__gnu_cxx::__normal_iterator<online::socialNetwork::OsirisGroup **,std::vector<online::socialNetwork::OsirisGroup *,std::allocator<online::socialNetwork::OsirisGroup *>>>,__gnu_cxx::__normal_iterator<online::socialNetwork::OsirisGroup **,std::vector<online::socialNetwork::OsirisGroup *,std::allocator<online::socialNetwork::OsirisGroup *>>>,int,GroupsCompare)
// int std::__introsort_loop<__gnu_cxx::__normal_iterator<online::socialNetwork::OsirisGroup **,std::vector<online::socialNetwork::OsirisGroup *>>,int,GroupsCompare>( char *a1, char *a2, int a3);
// [0x5a6ee0] (246 bytes) void std::__adjust_heap<char *,int,char>(char *,int,int,char)
// void std::__adjust_heap<char *,int,char>(char *a1, int a2, int a3, char a4);
// [0x5a6fe0] (917 bytes) void std::__introsort_loop<char *,int>(char *,char *,int)
// void std::__introsort_loop<char *,int>(char *a1, char *a2, int a3);
