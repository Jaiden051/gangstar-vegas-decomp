#pragma once
// ============================================================================
// TU17_CharacterAndAnimation.h
// Complete Translation Unit [17/41]
// Binary Range in lib/x86/libGangstar4.so: 0x963a10 .. 0xa184f0 (722 KB)
// Total Decompiled Functions in TU: 1202 (100% coverage)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// Function Table in Translation Unit:
// [0x963a10] (4874 bytes) sub_963A10
// const char *sub_963A10();
// [0x964d20] (7 bytes) sub_964D20
// int sub_964D20(int a1);
// [0x964d30] (37 bytes) sub_964D30
// int sub_964D30(int a1);
// [0x964d60] (26 bytes) sub_964D60
// uint32_t *sub_964D60(uint32_t *a1, uint32_t *a2);
// [0x964d80] (12 bytes) sub_964D80
// int sub_964D80(int a1);
// [0x964d90] (28 bytes) sub_964D90
// uint32_t *sub_964D90(uint32_t *a1, uint32_t *a2);
// [0x964db0] (85 bytes) sub_964DB0
// int sub_964DB0(int a1, float a2);
// [0x964e10] (44 bytes) sub_964E10
// int sub_964E10(int a1);
// [0x964e40] (33 bytes) sub_964E40
// uint32_t *sub_964E40(int a1);
// [0x964e70] (9 bytes) sub_964E70
// int sub_964E70();
// [0x964e80] (56 bytes) sub_964E80
// uint32_t *sub_964E80(uint32_t *a1, int a2);
// [0x964ec0] (18 bytes) sub_964EC0
// int sub_964EC0(int a1);
// [0x964ee0] (61 bytes) sub_964EE0
// int sub_964EE0(int a1);
// [0x964f20] (13 bytes) sub_964F20
// int sub_964F20(int a1);
// [0x964f30] (9 bytes) sub_964F30
// int sub_964F30();
// [0x964f48] (1 bytes) nullsub_380
// void nullsub_380();
// [0x964f50] (13 bytes) sub_964F50
// int sub_964F50(int a1);
// [0x964f60] (114 bytes) sub_964F60
// void sub_964F60(int a1);
// [0x964fe0] (124 bytes) sub_964FE0
// int sub_964FE0(uint32_t *a1);
// [0x965060] (12 bytes) sub_965060
// int sub_965060(int a1);
// [0x965078] (1 bytes) nullsub_381
// void nullsub_381();
// [0x965088] (1 bytes) nullsub_382
// void nullsub_382();
// [0x965098] (1 bytes) nullsub_383
// void nullsub_383();
// [0x9650a0] (29 bytes) sub_9650A0
// int sub_9650A0(int a1);
// [0x9650c0] (12 bytes) sub_9650C0
// int sub_9650C0();
// [0x9650d0] (12 bytes) sub_9650D0
// int sub_9650D0(int a1);
// [0x9650e0] (12 bytes) sub_9650E0
// int sub_9650E0();
// [0x9650f0] (12 bytes) sub_9650F0
// int sub_9650F0(int a1);
// [0x965108] (1 bytes) nullsub_384
// void nullsub_384();
// [0x965110] (12 bytes) sub_965110
// int sub_965110();
// [0x965120] (12 bytes) sub_965120
// int sub_965120(int a1);
// [0x965130] (42 bytes) sub_965130
// int sub_965130(int a1, int a2);
// [0x965160] (42 bytes) sub_965160
// int sub_965160(int a1, int a2);
// [0x965190] (94 bytes) sub_965190
// uint32_t *sub_965190(int a1, uint8_t a2, int a3);
// [0x9651f0] (42 bytes) sub_9651F0
// int sub_9651F0(int a1, int a2);
// [0x965220] (50 bytes) sub_965220
// int sub_965220(int a1, int a2, int a3);
// [0x965268] (1 bytes) nullsub_385
// void nullsub_385();
// [0x965278] (1 bytes) nullsub_386
// void nullsub_386();
// [0x965280] (44 bytes) sub_965280
// uint32_t *sub_965280(int a1);
// [0x9652b0] (194 bytes) sub_9652B0
// void sub_9652B0(uint32_t *a1);
// [0x965380] (328 bytes) sub_965380
// int sub_965380(int a1);
// [0x9654d0] (105 bytes) sub_9654D0
// long double sub_9654D0(int a1, int a2, int a3, float a4);
// [0x965540] (9 bytes) sub_965540
// int sub_965540();
// [0x965550] (16 bytes) sub_965550
// int sub_965550(int a1);
// [0x965560] (56 bytes) sub_965560
// unsigned int sub_965560(uint32_t *a1);
// [0x9655a0] (26 bytes) sub_9655A0
// uint32_t *sub_9655A0(uint32_t *a1);
// [0x9655c0] (17 bytes) sub_9655C0
// int sub_9655C0(int a1, char a2);
// [0x9655e8] (1 bytes) nullsub_387
// void nullsub_387();
// [0x9655f8] (1 bytes) nullsub_388
// void nullsub_388();
// [0x965600] (9 bytes) sub_965600
// void sub_965600();
// [0x965610] (40 bytes) sub_965610
// int sub_965610(int a1, char a2);
// [0x965640] (88 bytes) sub_965640
// int sub_965640(int a1);
// [0x9656a0] (43 bytes) sub_9656A0
// int sub_9656A0(int a1, uint8_t a2);
// [0x9656d0] (93 bytes) sub_9656D0
// int sub_9656D0(int a1);
// [0x965730] (102 bytes) sub_965730
// int sub_965730(int a1, int a2, uint8_t a3, int a4);
// [0x9657a0] (7 bytes) sub_9657A0
// int sub_9657A0(int a1);
// [0x9657b0] (55 bytes) sub_9657B0
// void sub_9657B0(uint32_t *a1);
// [0x9657f0] (75 bytes) sub_9657F0
// int (**sub_9657F0(int a1))(int);
// [0x965840] (124 bytes) sub_965840
// int sub_965840(uint32_t *a1);
// [0x9658c0] (63 bytes) sub_9658C0
// int sub_9658C0(int a1);
// [0x965900] (105 bytes) sub_965900
// int sub_965900(uint8_t *a1);
// [0x965970] (113 bytes) sub_965970
// int sub_965970(int *a1, int a2);
// [0x9659f0] (239 bytes) sub_9659F0
// long double sub_9659F0(int a1, int a2, int a3, float a4);
// [0x965ae0] (7 bytes) sub_965AE0
// int sub_965AE0(int a1);
// [0x965af0] (128 bytes) sub_965AF0
// int sub_965AF0(uint32_t *a1);
// [0x965b70] (209 bytes) sub_965B70
// int sub_965B70(int a1, float a2, float a3);
// [0x965c50] (168 bytes) sub_965C50
// int sub_965C50(int a1, int a2);
// [0x965d00] (100 bytes) sub_965D00
// int sub_965D00(int a1, uint8_t a2);
// [0x965d70] (101 bytes) sub_965D70
// int sub_965D70(int a1);
// [0x965de0] (80 bytes) sub_965DE0
// int sub_965DE0(int a1);
// [0x965e30] (48 bytes) sub_965E30
// int sub_965E30(uint32_t *a1, char a2);
// [0x965e60] (48 bytes) sub_965E60
// int sub_965E60(uint32_t *a1, char a2);
// [0x965e90] (464 bytes) sub_965E90
// int sub_965E90(int a1);
// [0x966060] (138 bytes) sub_966060
// void sub_966060(uint32_t *a1);
// [0x9660f0] (46 bytes) sub_9660F0
// bool sub_9660F0(int a1);
// [0x966120] (144 bytes) sub_966120
// int *sub_966120();
// [0x9661b0] (65 bytes) sub_9661B0
// void sub_9661B0(long double a1, int a2);
// [0x966200] (65 bytes) sub_966200
// void sub_966200(long double a1, int a2);
// [0x966250] (158 bytes) sub_966250
// void sub_966250(vox::Handle *a1, vox::Handle *a2, int a3);
// [0x9662f0] (144 bytes) sub_9662F0
// int sub_9662F0(uint32_t *a1);
// [0x966380] (117 bytes) sub_966380
// int sub_966380(uint32_t *a1, uint8_t a2);
// [0x966400] (213 bytes) sub_966400
// uint32_t *sub_966400(uint32_t *a1, uint32_t *a2, uint32_t *a3);
// [0x9664e0] (115 bytes) sub_9664E0
// unsigned int sub_9664E0(char *a1, char *a2, uint32_t *a3);
// [0x966560] (280 bytes) sub_966560
// int sub_966560(int a1, int a2, int a3);
// [0x966680] (1244 bytes) sub_966680
// int sub_966680(float *a1, float *a2);
// [0x966b60] (589 bytes) sub_966B60
// uint32_t *sub_966B60(int a1, char *a2, int *a3);
// [0x966db0] (581 bytes) sub_966DB0
// uint32_t *sub_966DB0(int *a1, char *a2, int *a3);
// [0x967000] (136 bytes) sub_967000
// uint32_t *sub_967000(uint32_t *a1, char *s, uint32_t *a3);
// [0x967090] (191 bytes) sub_967090
// void sub_967090(void **a1);
// [0x967150] (83 bytes) sub_967150
// void sub_967150(void **a1);
// [0x9671b0] (281 bytes) sub_9671B0
// int *sub_9671B0(int *a1, int a2, int a3, int a4, int a5);
// [0x9672d0] (213 bytes) sub_9672D0
// int *sub_9672D0(int *a1, int a2, int a3, int a4, int a5);
// [0x9673b0] (76 bytes) sub_9673B0
// int sub_9673B0();
// [0x967400] (117 bytes) sub_967400
// int sub_967400(int a1, uint32_t *a2, char a3);
// [0x967480] (1369 bytes) sub_967480
// unsigned int *sub_967480(unsigned int *result, unsigned int a2, unsigned int *a3);
// [0x9679e0] (356 bytes) sub_9679E0
// void sub_9679E0(int a1, uint32_t *a2);
// [0x967b50] (420 bytes) sub_967B50
// void sub_967B50(int a1, uint32_t *a2);
// [0x967d00] (287 bytes) sub_967D00
// void sub_967D00(uint32_t *a1, int a2);
// [0x967e20] (139 bytes) sub_967E20
// const char *sub_967E20(int a1);
// [0x967eb0] (132 bytes) sub_967EB0
// void sub_967EB0(uint32_t *a1);
// [0x967f40] (20 bytes) sub_967F40
// uint32_t *sub_967F40(uint32_t *result, uint32_t *a2);
// [0x967f60] (341 bytes) sub_967F60
// void *sub_967F60(uint32_t *a1, unsigned int a2);
// [0x9680c0] (266 bytes) sub_9680C0
// int sub_9680C0(int a1);
// [0x9681d0] (340 bytes) sub_9681D0
// uint32_t *sub_9681D0(uint32_t *a1, const char *s);
// [0x968330] (573 bytes) sub_968330
// uint32_t *sub_968330(int a1, const char *a2);
// [0x968570] (98 bytes) sub_968570
// float *sub_968570(float *a1, float *a2);
// [0x9685e0] (150 bytes) sub_9685E0
// unsigned int sub_9685E0(int a1);
// [0x968680] (465 bytes) sub_968680
// void sub_968680();
// [0x968860] (200 bytes) sub_968860
// int sub_968860(int a1, float a2);
// [0x968930] (1862 bytes) sub_968930
// unsigned int sub_968930(int a1, int a2, void ***a3, unsigned int *a4);
// [0x969080] (143 bytes) sub_969080
// int sub_969080(float *a1);
// [0x969110] (470 bytes) sub_969110
// int *sub_969110(int a1);
// [0x9692f0] (217 bytes) sub_9692F0
// int sub_9692F0(int a1);
// [0x9693d0] (285 bytes) sub_9693D0
// int sub_9693D0(int a1);
// [0x9694f0] (7 bytes) sub_9694F0
// int sub_9694F0(int a1);
// [0x969500] (1085 bytes) sub_969500
// int sub_969500(int a1);
// [0x969940] (199 bytes) sub_969940
// void sub_969940(void **a1);
// [0x969a10] (97 bytes) sub_969A10
// int sub_969A10(int a1, int a2, int a3);
// [0x969a80] (123 bytes) sub_969A80
// const char *sub_969A80(int a1);
// [0x969b00] (95 bytes) sub_969B00
// uint32_t *sub_969B00(uint32_t *result, uint32_t *a2);
// [0x969b60] (613 bytes) sub_969B60
// float *sub_969B60(int a1, int a2);
// [0x969dd0] (363 bytes) sub_969DD0
// int sub_969DD0(int a1, uint32_t *a2, int a3);
// [0x969f40] (13 bytes) sub_969F40
// uint32_t *sub_969F40(uint32_t *a1);
// [0x969f50] (370 bytes) sub_969F50
// int sub_969F50(int a1, int a2, int a3);
// [0x96a0d0] (411 bytes) sub_96A0D0
// int sub_96A0D0(int a1, uint32_t *a2, int a3);
// [0x96a270] (309 bytes) sub_96A270
// int sub_96A270(int a1);
// [0x96a3b0] (606 bytes) sub_96A3B0
// int *sub_96A3B0(int a1);
// [0x96a610] (1065 bytes) sub_96A610
// int sub_96A610(uint32_t *a1);
// [0x96aa40] (1149 bytes) sub_96AA40
// int sub_96AA40(int result, unsigned int a2, int *a3);
// [0x96aec0] (159 bytes) sub_96AEC0
// int sub_96AEC0();
// [0x96af60] (799 bytes) sub_96AF60
// int sub_96AF60(uint32_t *a1, int a2);
// [0x96b280] (790 bytes) sub_96B280
// int *sub_96B280(int *a1, uint32_t *a2, int a3, int a4);
// [0x96b5a0] (1932 bytes) sub_96B5A0
// volatile int32_t *sub_96B5A0( volatile int32_t ***a1, volatile int32_t **a2, int *a3);
// [0x96bd30] (481 bytes) sub_96BD30
// int sub_96BD30(int *a1, int a2);
// [0x96bf20] (579 bytes) sub_96BF20
// int sub_96BF20(uint32_t *a1, int a2, float a3, float a4, float a5, ...);
// [0x96c170] (28 bytes) sub_96C170
// uint32_t *sub_96C170(uint32_t **a1);
// [0x96c190] (137 bytes) sub_96C190
// int sub_96C190(uint32_t *a1);
// [0x96c220] (15 bytes) sub_96C220
// int sub_96C220(glitch::scene::ISceneNode *a1);
// [0x96c230] (15 bytes) sub_96C230
// int sub_96C230(glitch::scene::ISceneNode *a1);
// [0x96c240] (269 bytes) sub_96C240
// int (**sub_96C240(glitch::scene::ISceneNode *a1))(int);
// [0x96c350] (365 bytes) sub_96C350
// int32_t sub_96C350(int a1);
// [0x96c4c0] (15 bytes) sub_96C4C0
// int sub_96C4C0(glitch::scene::ISceneNode *a1);
// [0x96c4d0] (15 bytes) sub_96C4D0
// int sub_96C4D0(glitch::scene::ISceneNode *a1);
// [0x96c4e0] (277 bytes) sub_96C4E0
// void sub_96C4E0(glitch::scene::ISceneNode *a1);
// [0x96c600] (721 bytes) sub_96C600
// uint32_t *sub_96C600();
// [0x96c8e0] (206 bytes) sub_96C8E0
// int sub_96C8E0(int a1);
// [0x96c9b0] (125 bytes) sub_96C9B0
// void sub_96C9B0(volatile int32_t **a1);
// [0x96ca30] (389 bytes) sub_96CA30
// void sub_96CA30(void *a1);
// [0x96cbc0] (124 bytes) sub_96CBC0
// int sub_96CBC0(int a1);
// [0x96cc40] (162 bytes) sub_96CC40
// void sub_96CC40(int a1);
// [0x96ccf0] (158 bytes) sub_96CCF0
// float *sub_96CCF0(float *a1, int a2);
// [0x96cd90] (158 bytes) sub_96CD90
// float *sub_96CD90(float *a1, int a2);
// [0x96ce30] (496 bytes) sub_96CE30
// void sub_96CE30(int a1, int *a2);
// [0x96d020] (636 bytes) sub_96D020
// void sub_96D020(int a1);
// [0x96d2a0] (295 bytes) sub_96D2A0
// int sub_96D2A0(int a1, int a2, int a3);
// [0x96d3d0] (459 bytes) sub_96D3D0
// int sub_96D3D0(int a1, char a2, char a3);
// [0x96d5a0] (110 bytes) sub_96D5A0
// uint32_t *sub_96D5A0(uint32_t *a1, uint8_t a2);
// [0x96d610] (66 bytes) sub_96D610
// int sub_96D610(uint32_t *a1);
// [0x96d660] (99 bytes) sub_96D660
// int sub_96D660(uint32_t *a1);
// [0x96d6d0] (111 bytes) sub_96D6D0
// int sub_96D6D0(int a1, uint32_t *a2);
// [0x96d740] (68 bytes) sub_96D740
// long double sub_96D740(int a1);
// [0x96d790] (199 bytes) sub_96D790
// uint32_t *sub_96D790(uint32_t *a1, int a2);
// [0x96d860] (328 bytes) sub_96D860
// int sub_96D860(uint32_t *a1);
// [0x96d9b0] (361 bytes) sub_96D9B0
// uint32_t *sub_96D9B0(uint32_t *a1, float *a2);
// [0x96db20] (134 bytes) sub_96DB20
// int sub_96DB20(uint32_t *a1);
// [0x96dbb0] (164 bytes) sub_96DBB0
// int sub_96DBB0(uint32_t *a1);
// [0x96dc60] (16 bytes) sub_96DC60
// __m128i *sub_96DC60(__m128i *a1);
// [0x96dc70] (123 bytes) sub_96DC70
// int sub_96DC70(int a1);
// [0x96dcf0] (122 bytes) sub_96DCF0
// unsigned int sub_96DCF0(int a1, int a2);
// [0x96dd70] (305 bytes) sub_96DD70
// int sub_96DD70(int **a1, int a2);
// [0x96deb8] (1 bytes) nullsub_389
// void nullsub_389();
// [0x96dec0] (76 bytes) sub_96DEC0
// uint32_t *sub_96DEC0(uint32_t *a1);
// [0x96df10] (495 bytes) sub_96DF10
// int sub_96DF10(void **a1);
// [0x96e100] (2455 bytes) sub_96E100
// int sub_96E100( int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int16_t a20, int a21, unsigned int a22, size_t a23, int (**a24)(int), int a25, int a26);
// [0x96eaa0] (691 bytes) sub_96EAA0
// void sub_96EAA0(uint32_t *a1);
// [0x96ed68] (1 bytes) nullsub_390
// void nullsub_390();
// [0x96ed70] (332 bytes) sub_96ED70
// unsigned int sub_96ED70(int a1, int a2, int a3);
// [0x96eec0] (365 bytes) sub_96EEC0
// void sub_96EEC0(int a1, int a2);
// [0x96f030] (365 bytes) sub_96F030
// void sub_96F030(int a1, int a2);
// [0x96f1a0] (365 bytes) sub_96F1A0
// void sub_96F1A0(int a1, int a2);
// [0x96f310] (62 bytes) sub_96F310
// int sub_96F310(int a1);
// [0x96f350] (65 bytes) sub_96F350
// void sub_96F350(int a1);
// [0x96f3a0] (51 bytes) sub_96F3A0
// int sub_96F3A0(int a1);
// [0x96f3e0] (93 bytes) sub_96F3E0
// void sub_96F3E0(int a1);
// [0x96f440] (5150 bytes) sub_96F440
// void sub_96F440(int a1, int *a2);
// [0x970860] (477 bytes) sub_970860
// int sub_970860(int a1, int a2);
// [0x970a40] (150 bytes) sub_970A40
// int sub_970A40(int a1, int a2);
// [0x970af0] (20 bytes) sub_970AF0
// uint32_t *sub_970AF0(uint32_t *a1);
// [0x970b10] (9 bytes) sub_970B10
// void sub_970B10();
// [0x970b20] (18 bytes) sub_970B20
// uint32_t *sub_970B20(uint32_t *a1, int a2);
// [0x970b40] (1504 bytes) sub_970B40
// int sub_970B40(uint32_t **a1, uint32_t *a2, uint8_t a3);
// [0x971120] (609 bytes) sub_971120
// int sub_971120(int a1, uint32_t **a2);
// [0x971390] (601 bytes) sub_971390
// int sub_971390(int a1, uint32_t **a2);
// [0x9715f0] (313 bytes) sub_9715F0
// int sub_9715F0(int a1, uint32_t **a2, int a3);
// [0x971920] (103 bytes) sub_971920
// int sub_971920(int a1);
// [0x971990] (943 bytes) sub_971990
// long double sub_971990(int a1, int a2);
// [0x971d40] (401 bytes) sub_971D40
// void sub_971D40(int a1);
// [0x971ee0] (33 bytes) sub_971EE0
// bool sub_971EE0(int a1, int a2);
// [0x971f10] (30 bytes) sub_971F10
// bool sub_971F10(int a1, int a2);
// [0x971f30] (77 bytes) sub_971F30
// int sub_971F30(int a1);
// [0x971f80] (866 bytes) sub_971F80
// char sub_971F80(uint32_t *a1, int a2);
// [0x9722f0] (7 bytes) sub_9722F0
// int sub_9722F0(int a1, int a2);
// [0x972300] (807 bytes) sub_972300
// char sub_972300(int a1, int a2);
// [0x972630] (100 bytes) sub_972630
// char sub_972630(uint32_t *a1, int a2);
// [0x9726a0] (270 bytes) sub_9726A0
// int sub_9726A0(int a1, int a2);
// [0x9727c0] (67 bytes) sub_9727C0
// char sub_9727C0(int a1);
// [0x972810] (138 bytes) sub_972810
// char sub_972810(uint32_t *a1);
// [0x9728a0] (130 bytes) sub_9728A0
// char sub_9728A0(uint32_t *a1);
// [0x972930] (108 bytes) sub_972930
// int sub_972930(int a1, int a2, int a3);
// [0x9729a0] (13 bytes) sub_9729A0
// int sub_9729A0(int a1);
// [0x9729b0] (52 bytes) sub_9729B0
// int sub_9729B0(int a1, int a2);
// [0x972a00] (162 bytes) sub_972A00
// int sub_972A00(int a1);
// [0x972ab0] (146 bytes) sub_972AB0
// bool sub_972AB0(int a1);
// [0x972b50] (63 bytes) sub_972B50
// int sub_972B50(int a1, int a2);
// [0x972b90] (146 bytes) sub_972B90
// int sub_972B90(int a1);
// [0x972c30] (49 bytes) sub_972C30
// int sub_972C30(int a1, int a2);
// [0x972c70] (177 bytes) sub_972C70
// int sub_972C70(int a1);
// [0x972d30] (15 bytes) sub_972D30
// int sub_972D30(int a1);
// [0x972d40] (70 bytes) sub_972D40
// int sub_972D40(int a1);
// [0x972d98] (1 bytes) nullsub_391
// void nullsub_391();
// [0x972da0] (98 bytes) sub_972DA0
// int sub_972DA0(int a1);
// [0x972e10] (363 bytes) sub_972E10
// long double sub_972E10(int a1);
// [0x972f80] (371 bytes) sub_972F80
// long double sub_972F80(int a1);
// [0x973100] (615 bytes) sub_973100
// int sub_973100(int a1);
// [0x973370] (733 bytes) sub_973370
// int sub_973370(int a1);
// [0x973650] (48 bytes) sub_973650
// int sub_973650(int a1, int a2);
// [0x973680] (37 bytes) sub_973680
// int sub_973680();
// [0x9736b0] (49 bytes) sub_9736B0
// int sub_9736B0();
// [0x973700] (23 bytes) sub_973700
// int sub_973700();
// [0x973720] (225 bytes) sub_973720
// void *sub_973720(int a1, int a2);
// [0x973810] (281 bytes) sub_973810
// void *sub_973810(int a1);
// [0x973930] (281 bytes) sub_973930
// void *sub_973930(int a1);
// [0x973a50] (33 bytes) sub_973A50
// int sub_973A50(int a1, int a2);
// [0x973a80] (110 bytes) sub_973A80
// long double sub_973A80(int a1);
// [0x973af0] (12 bytes) sub_973AF0
// int sub_973AF0();
// [0x973b00] (22 bytes) sub_973B00
// long double sub_973B00();
// [0x973b20] (122 bytes) sub_973B20
// long double sub_973B20(int a1);
// [0x973ba0] (99 bytes) sub_973BA0
// int sub_973BA0(int a1);
// [0x973c10] (46 bytes) sub_973C10
// long double sub_973C10(float a1);
// [0x973c40] (42 bytes) sub_973C40
// long double sub_973C40(float a1);
// [0x973c70] (97 bytes) sub_973C70
// int sub_973C70(uint32_t *a1);
// [0x973ce0] (16 bytes) sub_973CE0
// int sub_973CE0(int a1);
// [0x973cf0] (160 bytes) sub_973CF0
// bool sub_973CF0(int a1, int a2);
// [0x973d98] (1 bytes) nullsub_392
// void nullsub_392();
// [0x973da8] (1 bytes) nullsub_393
// void nullsub_393();
// [0x973dd0] (12 bytes) sub_973DD0
// int sub_973DD0(int a1);
// [0x973df0] (9 bytes) sub_973DF0
// void sub_973DF0();
// [0x973e20] (104 bytes) sub_973E20
// int64_t sub_973E20(int64_t a1);
// [0x973ea0] (326 bytes) sub_973EA0
// int sub_973EA0(int a1, int a2, float a3);
// [0x973ff0] (318 bytes) sub_973FF0
// int sub_973FF0(int a1, float a2);
// [0x974130] (160 bytes) sub_974130
// int sub_974130(int a1, int a2);
// [0x9741d0] (63 bytes) sub_9741D0
// int sub_9741D0(int a1, int a2);
// [0x974210] (84 bytes) sub_974210
// uint32_t *sub_974210(uint32_t *a1, int a2);
// [0x9742a0] (171 bytes) sub_9742A0
// bool sub_9742A0(uint32_t *a1, int a2);
// [0x974350] (267 bytes) sub_974350
// int sub_974350(uint32_t *a1);
// [0x974460] (12 bytes) sub_974460
// int sub_974460(int a1);
// [0x974480] (17 bytes) sub_974480
// int sub_974480(int a1, int a2);
// [0x9744a0] (193 bytes) sub_9744A0
// int sub_9744A0(int a1);
// [0x974570] (472 bytes) sub_974570
// int sub_974570(int a1, int a2);
// [0x974750] (405 bytes) sub_974750
// int sub_974750(int a1, int a2, int a3);
// [0x9748f0] (401 bytes) sub_9748F0
// int sub_9748F0(int a1);
// [0x974a90] (370 bytes) sub_974A90
// int sub_974A90(int a1, int a2, int a3);
// [0x974c10] (339 bytes) sub_974C10
// float *sub_974C10(float *a1, int a2, int a3);
// [0x974d70] (166 bytes) sub_974D70
// int sub_974D70(int a1, glitch::scene::ISceneNode *a2);
// [0x974e20] (23 bytes) sub_974E20
// int sub_974E20(uint32_t *a1);
// [0x974e40] (814 bytes) sub_974E40
// int sub_974E40(int a1, int a2);
// [0x975170] (46 bytes) sub_975170
// int sub_975170(int a1, uint8_t a2);
// [0x9751a0] (71 bytes) sub_9751A0
// int sub_9751A0(int a1, float a2);
// [0x9751f0] (71 bytes) sub_9751F0
// int sub_9751F0(int a1, float a2);
// [0x975240] (47 bytes) sub_975240
// int sub_975240(int a1, int a2);
// [0x975298] (1 bytes) nullsub_394
// void nullsub_394();
// [0x9752a8] (1 bytes) nullsub_395
// void nullsub_395();
// [0x9752b8] (1 bytes) nullsub_396
// void nullsub_396();
// [0x9752c0] (229 bytes) sub_9752C0
// float *sub_9752C0(float *a1);
// [0x9753b8] (1 bytes) nullsub_397
// void nullsub_397();
// [0x9753c0] (2112 bytes) sub_9753C0
// int sub_9753C0(float *a1);
// [0x975c00] (591 bytes) sub_975C00
// void sub_975C00(int a1);
// [0x975e50] (57 bytes) sub_975E50
// int sub_975E50(float *a1);
// [0x975e90] (12 bytes) sub_975E90
// long double sub_975E90(int a1);
// [0x975ea0] (12 bytes) sub_975EA0
// long double sub_975EA0(int a1);
// [0x975eb0] (211 bytes) sub_975EB0
// long double sub_975EB0(float a1, float a2, float y);
// [0x975f90] (211 bytes) sub_975F90
// int *sub_975F90(int **a1);
// [0x976070] (438 bytes) sub_976070
// uint32_t *sub_976070(int a1, int a2, glitch::scene::ISceneNode **a3, glitch::scene::ISceneNode *a4);
// [0x976230] (681 bytes) sub_976230
// uint32_t *sub_976230(int a1);
// [0x9764e8] (1 bytes) nullsub_398
// void nullsub_398();
// [0x9764f8] (1 bytes) nullsub_399
// void nullsub_399();
// [0x976500] (169 bytes) sub_976500
// int sub_976500(int a1);
// [0x9765b8] (1 bytes) nullsub_400
// void nullsub_400();
// [0x9765c0] (77 bytes) sub_9765C0
// int sub_9765C0(int a1, int a2);
// [0x976610] (77 bytes) sub_976610
// int sub_976610(int a1, int a2);
// [0x976660] (13 bytes) sub_976660
// int sub_976660(int a1);
// [0x976670] (13 bytes) sub_976670
// int sub_976670(int a1);
// [0x976680] (9 bytes) sub_976680
// void sub_976680();
// [0x976690] (100 bytes) sub_976690
// int sub_976690(int a1);
// [0x976700] (206 bytes) sub_976700
// int sub_976700(int a1);
// [0x9767d0] (13 bytes) sub_9767D0
// bool sub_9767D0(int a1);
// [0x9767e0] (49 bytes) sub_9767E0
// bool sub_9767E0(int a1);
// [0x976820] (19 bytes) sub_976820
// int sub_976820(int a1, int a2, int a3);
// [0x976840] (19 bytes) sub_976840
// int sub_976840(int a1, int a2, int a3);
// [0x976860] (153 bytes) sub_976860
// int sub_976860(int a1);
// [0x976930] (177 bytes) sub_976930
// char sub_976930(int a1, char a2);
// [0x9769f0] (38 bytes) sub_9769F0
// int sub_9769F0(int a1, char a2);
// [0x976a20] (721 bytes) sub_976A20
// void sub_976A20(int a1, int **a2, uint32_t *a3);
// [0x976d00] (89 bytes) sub_976D00
// int sub_976D00(int a1);
// [0x976d60] (201 bytes) sub_976D60
// void sub_976D60();
// [0x976e30] (130 bytes) sub_976E30
// int sub_976E30(int a1, int a2);
// [0x976ec0] (627 bytes) sub_976EC0
// int sub_976EC0(int a1, int a2, int a3);
// [0x977140] (105 bytes) sub_977140
// uint32_t *sub_977140(int a1, char *needle);
// [0x9771b0] (43 bytes) sub_9771B0
// int sub_9771B0(int a1, int a2, char a3);
// [0x9771e0] (1511 bytes) sub_9771E0
// int sub_9771E0(int a1, int a2, char a3);
// [0x9777d0] (44 bytes) sub_9777D0
// int sub_9777D0(int a1, char a2);
// [0x977800] (16 bytes) sub_977800
// long double sub_977800(int a1);
// [0x977810] (64 bytes) sub_977810
// int sub_977810(int a1);
// [0x977850] (13 bytes) sub_977850
// bool sub_977850(int a1);
// [0x977870] (22 bytes) sub_977870
// int sub_977870();
// [0x977890] (186 bytes) sub_977890
// int sub_977890(int a1);
// [0x977950] (81 bytes) sub_977950
// void sub_977950(vox::EmitterHandle *a1);
// [0x9779c0] (9 bytes) sub_9779C0
// void sub_9779C0();
// [0x9779d8] (1 bytes) nullsub_401
// void nullsub_401();
// [0x977a00] (25 bytes) sub_977A00
// __m128i *sub_977A00(__m128i *a1);
// [0x977a40] (24 bytes) sub_977A40
// bool sub_977A40(int a1);
// [0x977a60] (22 bytes) sub_977A60
// bool sub_977A60(int a1);
// [0x977a80] (61 bytes) sub_977A80
// void sub_977A80(uint32_t *a1);
// [0x977ac0] (98 bytes) sub_977AC0
// void sub_977AC0(int a1);
// [0x977b30] (24 bytes) sub_977B30
// bool sub_977B30(int a1);
// [0x977b50] (13 bytes) sub_977B50
// bool sub_977B50(int a1);
// [0x977b60] (75 bytes) sub_977B60
// int sub_977B60(int a1, int a2, int a3);
// [0x977bb0] (114 bytes) sub_977BB0
// int sub_977BB0(int a1, int a2);
// [0x977c30] (33 bytes) sub_977C30
// bool sub_977C30(int a1, int a2);
// [0x977c60] (104 bytes) sub_977C60
// int sub_977C60(int a1);
// [0x977cd0] (238 bytes) sub_977CD0
// int sub_977CD0(int a1, char a2, uint8_t a3, uint8_t a4);
// [0x977dc0] (477 bytes) sub_977DC0
// int sub_977DC0(int a1, int a2, int a3, int a4, char a5);
// [0x977fa0] (201 bytes) sub_977FA0
// int sub_977FA0(int a1, char a2, uint8_t a3);
// [0x978070] (341 bytes) sub_978070
// int sub_978070(int a1, int a2);
// [0x9781d0] (80 bytes) sub_9781D0
// int sub_9781D0(int a1, int a2);
// [0x978220] (63 bytes) sub_978220
// int sub_978220(int a1);
// [0x978260] (14 bytes) sub_978260
// bool sub_978260(int a1);
// [0x978270] (551 bytes) sub_978270
// char *sub_978270(int a1);
// [0x9784a0] (13 bytes) sub_9784A0
// int sub_9784A0(int a1);
// [0x9784b0] (13 bytes) sub_9784B0
// int sub_9784B0(int a1);
// [0x9784c0] (13 bytes) sub_9784C0
// int sub_9784C0(int a1);
// [0x9784d0] (36 bytes) sub_9784D0
// int sub_9784D0(int a1, int a2);
// [0x978500] (30 bytes) sub_978500
// int sub_978500(int a1);
// [0x978520] (197 bytes) sub_978520
// int sub_978520(uint32_t *a1);
// [0x9785f0] (32 bytes) sub_9785F0
// int sub_9785F0(int a1, int a2);
// [0x978620] (285 bytes) sub_978620
// int sub_978620(int a1);
// [0x978740] (136 bytes) sub_978740
// uint32_t *sub_978740(uint32_t *a1, int a2);
// [0x9787e0] (231 bytes) sub_9787E0
// int *sub_9787E0(int a1, int a2);
// [0x9788d0] (108 bytes) sub_9788D0
// int sub_9788D0(int a1, int a2);
// [0x978940] (71 bytes) sub_978940
// int sub_978940(int a1, int a2);
// [0x978990] (759 bytes) sub_978990
// long double sub_978990(int a1, float a2);
// [0x978c90] (41 bytes) sub_978C90
// long double sub_978C90(int *a1, float a2);
// [0x978cc0] (107 bytes) sub_978CC0
// void sub_978CC0(int a1, int a2);
// [0x978d30] (64 bytes) sub_978D30
// int sub_978D30(int a1, int a2);
// [0x978d70] (217 bytes) sub_978D70
// int sub_978D70(int a1);
// [0x978e50] (179 bytes) sub_978E50
// int sub_978E50(int a1, float *a2);
// [0x978f10] (252 bytes) sub_978F10
// int sub_978F10(int a1, int a2);
// [0x979010] (179 bytes) sub_979010
// uint32_t *sub_979010(int a1);
// [0x9790d0] (135 bytes) sub_9790D0
// void sub_9790D0(int a1, int a2);
// [0x979470] (51 bytes) sub_979470
// int sub_979470(int a1, int a2);
// [0x9794b0] (1052 bytes) sub_9794B0
// int sub_9794B0(int a1, int a2);
// [0x9798d0] (217 bytes) sub_9798D0
// int sub_9798D0(int a1);
// [0x9799b0] (75 bytes) sub_9799B0
// void sub_9799B0(int a1, int a2);
// [0x979a00] (49 bytes) sub_979A00
// int sub_979A00(int a1);
// [0x979a40] (51 bytes) sub_979A40
// int sub_979A40(int a1, int a2);
// [0x979a80] (169 bytes) sub_979A80
// int sub_979A80(int a1);
// [0x979b30] (96 bytes) sub_979B30
// int sub_979B30(int a1);
// [0x979b98] (1 bytes) nullsub_402
// void nullsub_402();
// [0x97a990] (191 bytes) sub_97A990
// int sub_97A990(uint32_t *a1);
// [0x97aa50] (186 bytes) sub_97AA50
// int32_t sub_97AA50(int a1);
// [0x97ab10] (312 bytes) sub_97AB10
// int sub_97AB10(int a1, int a2);
// [0x97ac50] (295 bytes) sub_97AC50
// int sub_97AC50(int a1, int a2);
// [0x97ad88] (1 bytes) nullsub_403
// void nullsub_403();
// [0x97ad90] (2016 bytes) sub_97AD90
// unsigned int sub_97AD90(int a1, int a2, float *a3, float *a4, float *a5, int a6);
// [0x97b570] (161 bytes) sub_97B570
// int sub_97B570(uint32_t *a1);
// [0x97b650] (100 bytes) sub_97B650
// int sub_97B650(int a1, int *a2, int a3, int a4, int a5);
// [0x97b6c0] (2165 bytes) sub_97B6C0
// uint32_t *sub_97B6C0(int a1, uint32_t *a2, int a3);
// [0x97bf40] (100 bytes) sub_97BF40
// uint32_t *sub_97BF40(int a1);
// [0x97bfb0] (1069 bytes) sub_97BFB0
// int sub_97BFB0(uint32_t *a1, int a2, int a3);
// [0x97c3e0] (106 bytes) sub_97C3E0
// uint32_t *sub_97C3E0(int a1, int a2);
// [0x97c450] (113 bytes) sub_97C450
// uint32_t *sub_97C450(uint32_t *a1, int a2);
// [0x97c4d0] (100 bytes) sub_97C4D0
// uint32_t *sub_97C4D0(int a1);
// [0x97c540] (766 bytes) sub_97C540
// int sub_97C540(uint32_t *a1, uint8_t a2, int a3, uint8_t a4);
// [0x97c840] (14 bytes) sub_97C840
// int sub_97C840(uint32_t *a1, uint8_t a2, int a3, uint8_t a4);
// [0x97c850] (95 bytes) sub_97C850
// uint32_t *sub_97C850(int a1);
// [0x97c8b0] (112 bytes) sub_97C8B0
// int sub_97C8B0(int a1, int a2, int a3);
// [0x97c920] (72 bytes) sub_97C920
// int sub_97C920(int a1, int a2, int a3, int a4);
// [0x97c970] (114 bytes) sub_97C970
// int sub_97C970(int a1);
// [0x97c9f0] (577 bytes) sub_97C9F0
// long double sub_97C9F0(int a1, int a2);
// [0x97cc40] (236 bytes) sub_97CC40
// int sub_97CC40(int a1);
// [0x97cd30] (233 bytes) sub_97CD30
// int sub_97CD30(int a1, int a2, int a3);
// [0x97ce20] (236 bytes) sub_97CE20
// long double sub_97CE20(int a1, int a2);
// [0x97cf30] (160 bytes) sub_97CF30
// int sub_97CF30(int a1, uint8_t a2);
// [0x97cfd0] (847 bytes) sub_97CFD0
// int sub_97CFD0(int a1);
// [0x97d320] (713 bytes) sub_97D320
// int sub_97D320(uint32_t *a1, int a2, uint8_t a3, int a4, uint8_t a5);
// [0x97d5f0] (399 bytes) sub_97D5F0
// int sub_97D5F0(int a1, int a2, int a3);
// [0x97d780] (304 bytes) sub_97D780
// int sub_97D780(uint32_t *a1, int a2);
// [0x97d8b0] (1286 bytes) sub_97D8B0
// int sub_97D8B0(uint32_t *a1, int a2);
// [0x97ddc0] (261 bytes) sub_97DDC0
// void sub_97DDC0(glitch::scene::ISceneNode *a1, int *a2);
// [0x97ded0] (512 bytes) sub_97DED0
// int sub_97DED0(uint32_t *a1, float *a2, float *a3, char a4, uint32_t *a5, int a6, int a7, uint32_t *a8, uint32_t *a9);
// [0x97e0d0] (38 bytes) sub_97E0D0
// int sub_97E0D0();
// [0x97e100] (43 bytes) sub_97E100
// bool sub_97E100();
// [0x97e130] (1240 bytes) sub_97E130
// uint32_t *sub_97E130();
// [0x97e610] (105 bytes) sub_97E610
// int sub_97E610();
// [0x97e680] (186 bytes) sub_97E680
// int sub_97E680(int a1);
// [0x97e740] (386 bytes) sub_97E740
// int sub_97E740(int a1, int a2, int a3);
// [0x97e8d0] (32 bytes) sub_97E8D0
// int sub_97E8D0(int a1, int a2, uint8_t a3);
// [0x97e8f0] (29 bytes) sub_97E8F0
// int sub_97E8F0(int a1);
// [0x97e970] (86 bytes) sub_97E970
// int sub_97E970(int a1, int a2);
// [0x97e9d0] (433 bytes) sub_97E9D0
// bool sub_97E9D0(int a1, uint8_t *a2);
// [0x97eb90] (59 bytes) sub_97EB90
// bool sub_97EB90(int a1);
// [0x97ebd0] (52 bytes) sub_97EBD0
// int sub_97EBD0(int a1);
// [0x97ec10] (1185 bytes) sub_97EC10
// bool sub_97EC10(__m128i a1, int a2, uint32_t *a3);
// [0x97f0c0] (167 bytes) sub_97F0C0
// int sub_97F0C0(int a1);
// [0x97f170] (269 bytes) sub_97F170
// char sub_97F170(int a1, uint32_t *a2);
// [0x97f280] (64 bytes) sub_97F280
// int sub_97F280(int a1, uint32_t *a2);
// [0x97f2c0] (64 bytes) sub_97F2C0
// int sub_97F2C0(int a1, uint32_t *a2);
// [0x97f300] (330 bytes) sub_97F300
// void sub_97F300(int a1);
// [0x97f450] (971 bytes) sub_97F450
// void sub_97F450(int *a1);
// [0x97f820] (1293 bytes) sub_97F820
// void sub_97F820(int a1);
// [0x97fd30] (17 bytes) sub_97FD30
// bool sub_97FD30(int a1);
// [0x97fd50] (34 bytes) sub_97FD50
// bool sub_97FD50(int a1);
// [0x97fd80] (124 bytes) sub_97FD80
// uint32_t *sub_97FD80(int a1);
// [0x97fe00] (187 bytes) sub_97FE00
// uint32_t *sub_97FE00(uint32_t *a1);
// [0x97fec0] (168 bytes) sub_97FEC0
// int sub_97FEC0(int a1);
// [0x97ff70] (723 bytes) sub_97FF70
// int sub_97FF70(int a1, float a2);
// [0x980250] (123 bytes) sub_980250
// long double sub_980250(float a1, float a2, float a3);
// [0x9802f0] (43 bytes) sub_9802F0
// float *sub_9802F0(int a1);
// [0x980320] (22 bytes) sub_980320
// int sub_980320(int a1, int a2);
// [0x980340] (102 bytes) sub_980340
// int sub_980340(int a1);
// [0x9803b8] (1 bytes) nullsub_404
// void nullsub_404();
// [0x9803c0] (9 bytes) sub_9803C0
// void sub_9803C0();
// [0x9803d0] (57 bytes) sub_9803D0
// int sub_9803D0(int a1, unsigned int a2, char a3);
// [0x980410] (49 bytes) sub_980410
// int sub_980410(int a1, char a2);
// [0x980450] (163 bytes) sub_980450
// bool sub_980450(uint32_t *a1, float a2);
// [0x980500] (60 bytes) sub_980500
// int sub_980500(int64_t a1);
// [0x980540] (322 bytes) sub_980540
// bool sub_980540(int a1, int a2);
// [0x980690] (213 bytes) sub_980690
// int sub_980690(int a1);
// [0x980770] (511 bytes) sub_980770
// int sub_980770(int *a1, int a2, char a3);
// [0x980970] (16 bytes) sub_980970
// int sub_980970(int a1);
// [0x980980] (627 bytes) sub_980980
// int sub_980980(int a1, int a2);
// [0x980c00] (125 bytes) sub_980C00
// int sub_980C00(int a1);
// [0x980c80] (136 bytes) sub_980C80
// char *sub_980C80(int a1);
// [0x980d10] (198 bytes) sub_980D10
// long double sub_980D10(int *a1);
// [0x980de0] (1242 bytes) sub_980DE0
// uint32_t *sub_980DE0(uint32_t *a1);
// [0x9812c0] (290 bytes) sub_9812C0
// long double sub_9812C0(int a1, int a2);
// [0x9813f0] (423 bytes) sub_9813F0
// long double sub_9813F0(int a1, int a2, float a3, float *a4, float *a5);
// [0x9815a8] (1 bytes) nullsub_405
// void nullsub_405();
// [0x9815b0] (34 bytes) sub_9815B0
// int sub_9815B0(int a1);
// [0x9815e0] (38 bytes) sub_9815E0
// int sub_9815E0(int a1);
// [0x981610] (87 bytes) sub_981610
// int sub_981610(int a1);
// [0x981670] (87 bytes) sub_981670
// int sub_981670(int a1);
// [0x9816d0] (24 bytes) sub_9816D0
// int sub_9816D0(int a1);
// [0x9816f0] (83 bytes) sub_9816F0
// bool sub_9816F0(int a1, int a2);
// [0x981750] (83 bytes) sub_981750
// int sub_981750(int a1, int a2, int a3);
// [0x9817b0] (39 bytes) sub_9817B0
// int sub_9817B0(int a1, int a2);
// [0x9817e0] (299 bytes) sub_9817E0
// int sub_9817E0(int a1, int a2, int a3, int a4, int a5);
// [0x981910] (76 bytes) sub_981910
// int sub_981910(int a1);
// [0x981980] (68 bytes) sub_981980
// int sub_981980(uint32_t *a1);
// [0x9819d0] (64 bytes) sub_9819D0
// int sub_9819D0(uint32_t *a1);
// [0x981a10] (168 bytes) sub_981A10
// int sub_981A10(uint8_t *a1);
// [0x981ac0] (89 bytes) sub_981AC0
// void sub_981AC0(int a1, int a2);
// [0x981b20] (256 bytes) sub_981B20
// int sub_981B20(float *a1);
// [0x981c20] (73 bytes) sub_981C20
// int sub_981C20(int a1, int a2);
// [0x981ca0] (27 bytes) sub_981CA0
// int sub_981CA0(int a1);
// [0x981ce0] (499 bytes) sub_981CE0
// int sub_981CE0(uint32_t *a1);
// [0x981ee0] (212 bytes) sub_981EE0
// void sub_981EE0(int a1, char a2);
// [0x981fc0] (129 bytes) sub_981FC0
// bool sub_981FC0(int a1);
// [0x982050] (308 bytes) sub_982050
// int sub_982050(int a1);
// [0x982190] (644 bytes) sub_982190
// char sub_982190(int a1);
// [0x982420] (37 bytes) sub_982420
// bool sub_982420(int a1, unsigned int a2);
// [0x982450] (252 bytes) sub_982450
// void sub_982450(uint32_t *a1);
// [0x982550] (76 bytes) sub_982550
// bool sub_982550(int a1);
// [0x9825a0] (136 bytes) sub_9825A0
// long double sub_9825A0(int a1, float a2);
// [0x982630] (185 bytes) sub_982630
// bool sub_982630(int a1, int a2);
// [0x9826f0] (915 bytes) sub_9826F0
// int sub_9826F0( int a1, float a2, char a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, float a16, float a17, float a18, float a19, float a20, float a21, float a22, float a23, int a24);
// [0x982a90] (332 bytes) sub_982A90
// int sub_982A90(int a1, float a2, float a3, float a4);
// [0x982c00] (463 bytes) sub_982C00
// int sub_982C00(int a1);
// [0x982dd0] (129 bytes) sub_982DD0
// int sub_982DD0(uint32_t *a1, int a2, int a3, char a4);
// [0x982e60] (779 bytes) sub_982E60
// int sub_982E60(int a1, int a2, char a3);
// [0x983170] (176 bytes) sub_983170
// int sub_983170(int a1);
// [0x983220] (63 bytes) sub_983220
// int sub_983220(uint8_t *a1, char a2, char a3);
// [0x9832e0] (50 bytes) sub_9832E0
// int sub_9832E0(int a1, char a2);
// [0x983328] (1 bytes) nullsub_406
// void nullsub_406();
// [0x983330] (672 bytes) sub_983330
// bool sub_983330(uint32_t *a1);
// [0x9835d0] (68 bytes) sub_9835D0
// char sub_9835D0(int a1);
// [0x983620] (261 bytes) sub_983620
// int sub_983620(int a1, float a2, char a3);
// [0x983730] (78 bytes) sub_983730
// uint32_t *sub_983730(int a1, uint32_t *a2, ...);
// [0x983780] (102 bytes) sub_983780
// int sub_983780(int a1);
// [0x9837f0] (597 bytes) sub_9837F0
// int sub_9837F0(uint32_t *a1, int a2);
// [0x983a50] (160 bytes) sub_983A50
// bool sub_983A50(int a1, int a2);
// [0x983af0] (102 bytes) sub_983AF0
// uint32_t *sub_983AF0(uint32_t *a1, uint32_t *a2);
// [0x983b60] (158 bytes) sub_983B60
// int sub_983B60(int a1, int a2);
// [0x983c00] (158 bytes) sub_983C00
// int sub_983C00();
// [0x983ca0] (158 bytes) sub_983CA0
// int sub_983CA0();
// [0x983d40] (158 bytes) sub_983D40
// int sub_983D40();
// [0x983e10] (125 bytes) sub_983E10
// int sub_983E10(uint8_t *a1);
// [0x983e90] (138 bytes) sub_983E90
// long double sub_983E90(int a1);
// [0x983f20] (138 bytes) sub_983F20
// long double sub_983F20(int a1);
// [0x983fb0] (65 bytes) sub_983FB0
// bool sub_983FB0(uint8_t *a1);
// [0x984000] (179 bytes) sub_984000
// unsigned int sub_984000(int a1);
// [0x9840c0] (15 bytes) sub_9840C0
// long double sub_9840C0(int a1);
// [0x984110] (61 bytes) sub_984110
// int sub_984110(int a1, uint32_t *a2);
// [0x9841a0] (135 bytes) sub_9841A0
// bool sub_9841A0(uint8_t *a1, float a2);
// [0x984230] (376 bytes) sub_984230
// int sub_984230(int a1, float a2);
// [0x9843b0] (112 bytes) sub_9843B0
// int sub_9843B0(int a1, int a2);
// [0x984420] (109 bytes) sub_984420
// unsigned int sub_984420(int a1);
// [0x984490] (137 bytes) sub_984490
// unsigned int sub_984490(int a1);
// [0x984520] (15 bytes) sub_984520
// int sub_984520(int a1);
// [0x984550] (94 bytes) sub_984550
// int sub_984550(int a1, uint8_t a2);
// [0x9845b0] (46 bytes) sub_9845B0
// int sub_9845B0(uint8_t *a1, uint8_t a2);
// [0x9845e0] (293 bytes) sub_9845E0
// int sub_9845E0(int a1);
// [0x984740] (122 bytes) sub_984740
// uint32_t *sub_984740(int a1, int *a2);
// [0x9847c0] (78 bytes) sub_9847C0
// void sub_9847C0(int a1);
// [0x984830] (17 bytes) sub_984830
// bool sub_984830(int a1);
// [0x984850] (17 bytes) sub_984850
// bool sub_984850(int a1);
// [0x984870] (17 bytes) sub_984870
// bool sub_984870(int a1);
// [0x984890] (17 bytes) sub_984890
// bool sub_984890(int a1);
// [0x9848b0] (70 bytes) sub_9848B0
// int sub_9848B0(int a1);
// [0x984900] (40 bytes) sub_984900
// int sub_984900(int a1, int a2);
// [0x984930] (190 bytes) sub_984930
// int sub_984930(int a1);
// [0x984a10] (1286 bytes) sub_984A10
// int sub_984A10(int a1, int a2);
// [0x984f20] (99 bytes) sub_984F20
// int sub_984F20(int a1, char a2);
// [0x984f90] (119 bytes) sub_984F90
// int sub_984F90(int a1);
// [0x985010] (124 bytes) sub_985010
// unsigned int sub_985010(int a1);
// [0x9850b0] (374 bytes) sub_9850B0
// int sub_9850B0(float *a1);
// [0x985230] (1123 bytes) sub_985230
// int sub_985230(int a1, uint8_t a2);
// [0x9856a0] (39 bytes) sub_9856A0
// bool sub_9856A0(int a1);
// [0x9856d0] (90 bytes) sub_9856D0
// bool sub_9856D0(uint32_t *a1);
// [0x985730] (35 bytes) sub_985730
// bool sub_985730(int a1);
// [0x985760] (100 bytes) sub_985760
// int sub_985760(uint32_t *a1);
// [0x9857d0] (81 bytes) sub_9857D0
// int sub_9857D0(int a1);
// [0x985850] (219 bytes) sub_985850
// int sub_985850(int a1);
// [0x985930] (30 bytes) sub_985930
// int sub_985930(int a1);
// [0x985950] (126 bytes) sub_985950
// bool sub_985950(int a1);
// [0x9859d0] (672 bytes) sub_9859D0
// int sub_9859D0(int *a1);
// [0x985c70] (173 bytes) sub_985C70
// uint8_t *sub_985C70(int a1);
// [0x985d20] (182 bytes) sub_985D20
// int sub_985D20(int a1, int a2, uint32_t *a3);
// [0x985de0] (74 bytes) sub_985DE0
// int sub_985DE0(int a1, int a2, uint32_t *a3, char a4);
// [0x985e30] (148 bytes) sub_985E30
// int sub_985E30(int a1, uint32_t *a2);
// [0x985ed0] (94 bytes) sub_985ED0
// bool sub_985ED0(int a1);
// [0x985f30] (15 bytes) sub_985F30
// int sub_985F30(int a1);
// [0x985f40] (17 bytes) sub_985F40
// int sub_985F40(int a1, int a2);
// [0x985f60] (19 bytes) sub_985F60
// int sub_985F60(int a1);
// [0x985f80] (214 bytes) sub_985F80
// int sub_985F80(int a1);
// [0x986060] (16 bytes) sub_986060
// int sub_986060(int a1);
// [0x986070] (17 bytes) sub_986070
// int sub_986070(int a1, char a2);
// [0x986090] (256 bytes) sub_986090
// void sub_986090(int a1);
// [0x9861b0] (162 bytes) sub_9861B0
// int sub_9861B0(int a1, uint32_t *a2);
// [0x986260] (15 bytes) sub_986260
// int sub_986260(int a1);
// [0x986280] (15 bytes) sub_986280
// int sub_986280(int a1);
// [0x986290] (39 bytes) sub_986290
// bool sub_986290(int a1);
// [0x9862d0] (36 bytes) sub_9862D0
// int sub_9862D0(int a1);
// [0x986300] (35 bytes) sub_986300
// int sub_986300(int a1);
// [0x986330] (35 bytes) sub_986330
// int sub_986330(int a1);
// [0x986360] (35 bytes) sub_986360
// int sub_986360(int a1);
// [0x986390] (37 bytes) sub_986390
// uint32_t *sub_986390(uint32_t *a1, uint32_t *a2);
// [0x9863f0] (516 bytes) sub_9863F0
// bool sub_9863F0(int a1);
// [0x986600] (526 bytes) sub_986600
// bool sub_986600(int a1, float *a2);
// [0x986810] (208 bytes) sub_986810
// bool sub_986810(int a1);
// [0x9868e0] (615 bytes) sub_9868E0
// int sub_9868E0(int *a1);
// [0x986b50] (42 bytes) sub_986B50
// int sub_986B50(int a1, uint32_t *a2);
// [0x986b80] (44 bytes) sub_986B80
// uint32_t *sub_986B80(uint32_t *a1, int a2);
// [0x986bb0] (16 bytes) sub_986BB0
// int sub_986BB0(int a1);
// [0x986c40] (114 bytes) sub_986C40
// int sub_986C40(int a1, int a2, int a3, char a4, char a5, int a6, int a7, int a8);
// [0x986cc0] (26 bytes) sub_986CC0
// int sub_986CC0(int a1, int a2);
// [0x986ce0] (145 bytes) sub_986CE0
// int sub_986CE0(int a1);
// [0x986d80] (1047 bytes) sub_986D80
// int sub_986D80(int a1, int *a2);
// [0x9871a0] (31 bytes) sub_9871A0
// int sub_9871A0(uint32_t *a1);
// [0x9871c0] (120 bytes) sub_9871C0
// int sub_9871C0(uint32_t *a1);
// [0x987240] (51 bytes) sub_987240
// int sub_987240(int a1);
// [0x987280] (142 bytes) sub_987280
// int sub_987280(uint32_t *a1);
// [0x987310] (22 bytes) sub_987310
// bool sub_987310(int a1, int a2);
// [0x987330] (17 bytes) sub_987330
// int sub_987330(int a1, int a2);
// [0x987350] (17 bytes) sub_987350
// int sub_987350(int a1, int a2);
// [0x987370] (19 bytes) sub_987370
// int sub_987370(int a1);
// [0x987390] (17 bytes) sub_987390
// int sub_987390(int a1, int a2);
// [0x9873b0] (19 bytes) sub_9873B0
// int sub_9873B0(int a1);
// [0x9873e0] (16 bytes) sub_9873E0
// bool sub_9873E0(int a1);
// [0x9873f0] (18 bytes) sub_9873F0
// bool sub_9873F0(int a1, int a2);
// [0x987430] (19 bytes) sub_987430
// int sub_987430(int a1);
// [0x987460] (16 bytes) sub_987460
// bool sub_987460(int a1);
// [0x987490] (40 bytes) sub_987490
// int sub_987490(int a1);
// [0x9874c0] (17 bytes) sub_9874C0
// bool sub_9874C0(int a1);
// [0x9874e0] (17 bytes) sub_9874E0
// bool sub_9874E0(int a1);
// [0x987540] (50 bytes) sub_987540
// int sub_987540(int a1, char a2);
// [0x987580] (50 bytes) sub_987580
// int sub_987580(int a1, char a2);
// [0x9875c0] (50 bytes) sub_9875C0
// int sub_9875C0(int a1, char a2);
// [0x987600] (50 bytes) sub_987600
// int sub_987600(int a1, char a2);
// [0x987640] (235 bytes) sub_987640
// int sub_987640(uint32_t *a1);
// [0x987730] (246 bytes) sub_987730
// unsigned int sub_987730(uint32_t *a1);
// [0x987840] (17 bytes) sub_987840
// int sub_987840(int a1, char a2);
// [0x987860] (62 bytes) sub_987860
// int sub_987860(int a1);
// [0x9878a0] (61 bytes) sub_9878A0
// int sub_9878A0(uint32_t *a1);
// [0x9878e0] (16 bytes) sub_9878E0
// int sub_9878E0(int a1);
// [0x9878f0] (186 bytes) sub_9878F0
// char sub_9878F0(int a1);
// [0x9879b0] (122 bytes) sub_9879B0
// int sub_9879B0(int64_t a1);
// [0x987a30] (16 bytes) sub_987A30
// int sub_987A30(int a1);
// [0x987a40] (56 bytes) sub_987A40
// char sub_987A40(int a1);
// [0x987a80] (17 bytes) sub_987A80
// int sub_987A80(int a1, char a2);
// [0x987aa0] (189 bytes) sub_987AA0
// int sub_987AA0(int a1);
// [0x987b60] (469 bytes) sub_987B60
// unsigned int sub_987B60(int a1);
// [0x987d40] (102 bytes) sub_987D40
// int sub_987D40(int *a1);
// [0x987db0] (179 bytes) sub_987DB0
// int sub_987DB0(int a1);
// [0x987e70] (72 bytes) sub_987E70
// void sub_987E70(int *a1);
// [0x987ee0] (68 bytes) sub_987EE0
// int sub_987EE0(uint32_t *a1);
// [0x987f30] (149 bytes) sub_987F30
// int sub_987F30(uint32_t *a1);
// [0x987fd0] (305 bytes) sub_987FD0
// int sub_987FD0(int a1);
// [0x988110] (73 bytes) sub_988110
// bool sub_988110(uint8_t *a1);
// [0x988160] (53 bytes) sub_988160
// int sub_988160(int a1);
// [0x9881a0] (17 bytes) sub_9881A0
// bool sub_9881A0(int a1);
// [0x9881d0] (45 bytes) sub_9881D0
// int sub_9881D0(int a1);
// [0x988200] (108 bytes) sub_988200
// glitch::scene::ISceneNode *sub_988200(int a1);
// [0x988270] (66 bytes) sub_988270
// bool sub_988270(uint32_t *a1, int a2, char a3);
// [0x9882c0] (34 bytes) sub_9882C0
// bool sub_9882C0(int a1, int a2);
// [0x9882f0] (29 bytes) sub_9882F0
// bool sub_9882F0(int a1, int a2);
// [0x988310] (32 bytes) sub_988310
// int sub_988310(int a1, char a2);
// [0x988330] (121 bytes) sub_988330
// int sub_988330(int a1);
// [0x9883b0] (45 bytes) sub_9883B0
// long double sub_9883B0(int a1);
// [0x9883e0] (121 bytes) sub_9883E0
// int sub_9883E0(int a1);
// [0x988460] (315 bytes) sub_988460
// int sub_988460( int a1, uint32_t *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20);
// [0x9885a0] (172 bytes) sub_9885A0
// void sub_9885A0(uint32_t *a1, int a2, int a3);
// [0x988650] (172 bytes) sub_988650
// void sub_988650(uint32_t *a1, int a2);
// [0x988700] (54 bytes) sub_988700
// int sub_988700(int a1, int a2);
// [0x988740] (1000 bytes) sub_988740
// int sub_988740(int a1, uint32_t *a2);
// [0x988b30] (223 bytes) sub_988B30
// char sub_988B30(int a1);
// [0x988c10] (87 bytes) sub_988C10
// int sub_988C10(int a1);
// [0x988cd0] (85 bytes) sub_988CD0
// int sub_988CD0(int a1);
// [0x988d70] (85 bytes) sub_988D70
// int sub_988D70(int a1);
// [0x988dd0] (564 bytes) sub_988DD0
// int sub_988DD0(int a1);
// [0x989010] (789 bytes) sub_989010
// bool sub_989010(int a1, int a2);
// [0x989330] (69 bytes) sub_989330
// int sub_989330(int a1, int a2);
// [0x989380] (54 bytes) sub_989380
// bool sub_989380(uint32_t *a1);
// [0x9893c0] (736 bytes) sub_9893C0
// long double sub_9893C0(int a1, float a2);
// [0x9896a0] (496 bytes) sub_9896A0
// bool sub_9896A0(int a1, int a2);
// [0x989890] (1293 bytes) sub_989890
// void sub_989890(int a1, uint32_t *a2);
// [0x989da0] (247 bytes) sub_989DA0
// int sub_989DA0(int a1);
// [0x989ea0] (372 bytes) sub_989EA0
// uint16_t *sub_989EA0(int a1);
// [0x98a020] (144 bytes) sub_98A020
// float *sub_98A020(float *a1, int a2);
// [0x98a0b0] (180 bytes) sub_98A0B0
// int sub_98A0B0(int a1, float *a2);
// [0x98a170] (1365 bytes) sub_98A170
// int sub_98A170(uint32_t *a1);
// [0x98a6d0] (518 bytes) sub_98A6D0
// float *sub_98A6D0(int a1);
// [0x98a8e0] (2367 bytes) sub_98A8E0
// unsigned int sub_98A8E0(int a1, float a2);
// [0x98b220] (4569 bytes) sub_98B220
// void sub_98B220(int a1, float a2);
// [0x98c400] (1146 bytes) sub_98C400
// void sub_98C400(int a1);
// [0x98c880] (798 bytes) sub_98C880
// void sub_98C880(int a1, int a2, int a3);
// [0x98cba0] (1582 bytes) sub_98CBA0
// uint16_t *sub_98CBA0(int a1);
// [0x98d1d0] (5808 bytes) sub_98D1D0
// uint16_t *sub_98D1D0(int a1);
// [0x98e880] (1209 bytes) sub_98E880
// int sub_98E880(uint32_t *a1);
// [0x98ed40] (686 bytes) sub_98ED40
// uint32_t *sub_98ED40(int a1, uint32_t *a2, float *a3);
// [0x98eff0] (853 bytes) sub_98EFF0
// int sub_98EFF0(int a1, int a2, char a3);
// [0x98f350] (6748 bytes) sub_98F350
// void sub_98F350(uint32_t *a1, char a2);
// [0x990db0] (6560 bytes) sub_990DB0
// void sub_990DB0(uint32_t *a1, int a2);
// [0x992750] (85 bytes) sub_992750
// int (**sub_992750(int a1))(int);
// [0x9927b0] (376 bytes) sub_9927B0
// long double sub_9927B0(int *a1);
// [0x992930] (203 bytes) sub_992930
// uint32_t *sub_992930(uint32_t *a1, int a2, int a3, int a4, int a5, int a6, int a7, char *a8, char *a9);
// [0x992a00] (589 bytes) sub_992A00
// int sub_992A00(int a1, char a2);
// [0x992c50] (217 bytes) sub_992C50
// int sub_992C50(uint32_t *a1);
// [0x992d30] (56 bytes) sub_992D30
// int sub_992D30(uint32_t *a1);
// [0x992d70] (84 bytes) sub_992D70
// int sub_992D70(int a1);
// [0x992dd0] (7 bytes) sub_992DD0
// int sub_992DD0(int a1);
// [0x992de0] (469 bytes) sub_992DE0
// int (**sub_992DE0(int a1))(int);
// [0x992fc0] (7 bytes) sub_992FC0
// int sub_992FC0(int a1);
// [0x992fd0] (56 bytes) sub_992FD0
// void sub_992FD0(void *a1);
// [0x993010] (347 bytes) sub_993010
// glitch::scene::ISceneNode *sub_993010(int a1, glitch::scene::ISceneNode **a2, glitch::scene::ISceneNode **a3);
// [0x993170] (2548 bytes) sub_993170
// glitch::scene::ISceneNode *sub_993170( uint32_t *a1, glitch::scene::ISceneNode *a2, char a3, char a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, glitch::scene::ISceneNode *a13, float a14, float a15, float a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, float a24, float a25, float a26, float a27, float a28, float a29, float a30, float a31, float a32, float a33, float a34, float a35, float a36, float a37, float a38, float a39, float a40, float a41, float a42, float a43, float a44, float a45, float a46, float a47, float a48, float a49, float a50, float a51, float a52, float a53, float a54, float a55, float a56, float a57, float a58, float a59, float a60, float a61, float a62, float a63, float a64);
// [0x993b70] (1765 bytes) sub_993B70
// uint32_t *sub_993B70(int a1);
// [0x994260] (212 bytes) sub_994260
// int sub_994260(int a1, uint8_t a2);
// [0x994340] (315 bytes) sub_994340
// int sub_994340(int **a1, glitch::scene::ISceneNode **a2);
// [0x994480] (411 bytes) sub_994480
// int sub_994480(int a1, char a2);
// [0x994620] (342 bytes) sub_994620
// char sub_994620( int *a1, char a2, int a3, int a4, int a5, int a6, int a7, uint32_t *a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, uint32_t *a16);
// [0x994780] (93 bytes) sub_994780
// void sub_994780(uint32_t **a1);
// [0x9947e0] (2343 bytes) sub_9947E0
// uint32_t *sub_9947E0(int a1);
// [0x995110] (829 bytes) sub_995110
// uint32_t *sub_995110(int *a1, int a2);
// [0x995450] (148 bytes) sub_995450
// int *sub_995450(int *result, int a2);
// [0x9954f0] (403 bytes) sub_9954F0
// uint32_t *sub_9954F0(uint32_t *a1, int a2, int a3);
// [0x995690] (1416 bytes) sub_995690
// uint32_t *sub_995690(uint32_t *a1);
// [0x995c20] (1001 bytes) sub_995C20
// int sub_995C20(uint32_t *a1);
// [0x996010] (349 bytes) sub_996010
// int sub_996010(uint32_t *a1);
// [0x996170] (3861 bytes) sub_996170
// void sub_996170(int a1, int a2);
// [0x997090] (439 bytes) sub_997090
// int sub_997090(uint32_t *a1, uint32_t *a2);
// [0x997250] (10 bytes) sub_997250
// int sub_997250(int a1, int a2, int a3, int a4, int a5);
// [0x997260] (367 bytes) sub_997260
// int sub_997260(int a1, int a2, float *a3, int a4, float a5);
// [0x9973d0] (422 bytes) sub_9973D0
// int sub_9973D0(uint32_t *a1);
// [0x997580] (145 bytes) sub_997580
// int sub_997580(int a1);
// [0x997620] (1110 bytes) sub_997620
// int sub_997620(uint32_t *a1);
// [0x997a80] (467 bytes) sub_997A80
// int sub_997A80(int a1, char *a2, char *a3);
// [0x997c60] (211 bytes) sub_997C60
// int sub_997C60(int a1, int a2, int a3, int a4, int a5, int a6, uint32_t *a7, char *a8, char *a9, int a10);
// [0x997d40] (245 bytes) sub_997D40
// int sub_997D40( int a1, char *a2, int a3, int a4, int a5, int a6, uint32_t *a7, glitch::collada::CModularSkinnedMeshSceneNode **a8, glitch::collada::CModularSkinnedMeshSceneNode **a9, int a10);
// [0x997e40] (232 bytes) sub_997E40
// int sub_997E40( int a1, int a2, int a3, int a4, int a5, int a6, uint32_t *a7, glitch::collada::CModularSkinnedMeshSceneNode **a8, glitch::collada::CModularSkinnedMeshSceneNode **a9, int a10);
// [0x997f30] (250 bytes) sub_997F30
// int sub_997F30( int a1, char *a2, int a3, int a4, int a5, int a6, uint32_t *a7, glitch::collada::CModularSkinnedMeshSceneNode **a8, glitch::collada::CModularSkinnedMeshSceneNode **a9, int a10);
// [0x998030] (460 bytes) sub_998030
// int sub_998030(char *a1, char *a2, char *a3, int a4, int a5, int a6, uint32_t *a7, int a8, int a9, int a10);
// [0x998200] (3004 bytes) sub_998200
// void sub_998200(int a1, int a2);
// [0x998dc0] (825 bytes) sub_998DC0
// glitch::scene::ISceneNode *sub_998DC0(int a1);
// [0x999100] (2590 bytes) sub_999100
// uint32_t *sub_999100(char *a1, int a2, int *a3);
// [0x999b20] (2430 bytes) sub_999B20
// uint32_t *sub_999B20(const char *a1, char *a2, int a3);
// [0x99a4a0] (365 bytes) sub_99A4A0
// int sub_99A4A0(int a1);
// [0x99a610] (482 bytes) sub_99A610
// int sub_99A610(int a1);
// [0x99a800] (383 bytes) sub_99A800
// int sub_99A800(int a1);
// [0x99a980] (493 bytes) sub_99A980
// int sub_99A980(int a1, long double a2);
// [0x99ab90] (493 bytes) sub_99AB90
// int sub_99AB90(int a1, long double a2);
// [0x99ada0] (493 bytes) sub_99ADA0
// int sub_99ADA0(int a1, long double a2);
// [0x99afb0] (357 bytes) sub_99AFB0
// void sub_99AFB0(int a1, int a2);
// [0x99b120] (357 bytes) sub_99B120
// int sub_99B120(int a1);
// [0x99b290] (573 bytes) sub_99B290
// void sub_99B290(int a1, int a2);
// [0x99b4d0] (197 bytes) sub_99B4D0
// int sub_99B4D0(int a1, int a2);
// [0x99b5a0] (306 bytes) sub_99B5A0
// long double sub_99B5A0(int a1);
// [0x99b6e0] (110 bytes) sub_99B6E0
// void sub_99B6E0(uint8_t *a1);
// [0x99b750] (150 bytes) sub_99B750
// int sub_99B750(long double a1, uint32_t *a2);
// [0x99b7f0] (486 bytes) sub_99B7F0
// int sub_99B7F0(int a1);
// [0x99b9e0] (546 bytes) sub_99B9E0
// int sub_99B9E0(int a1);
// [0x99bc10] (353 bytes) sub_99BC10
// void sub_99BC10(char **a1);
// [0x99bd80] (637 bytes) sub_99BD80
// void sub_99BD80( int a1, float a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17);
// [0x99c000] (263 bytes) sub_99C000
// int sub_99C000(int a1, int a2);
// [0x99c110] (263 bytes) sub_99C110
// int sub_99C110(int a1, int a2);
// [0x99c220] (780 bytes) sub_99C220
// int sub_99C220(int a1);
// [0x99c530] (76 bytes) sub_99C530
// void sub_99C530(int a1);
// [0x99c580] (1044 bytes) sub_99C580
// int sub_99C580(int a1, long double a2, int a3);
// [0x99c9a0] (21 bytes) sub_99C9A0
// int sub_99C9A0(long double a1, int a2);
// [0x99c9c0] (231 bytes) sub_99C9C0
// void sub_99C9C0(long double a1, int a2, uint32_t *a3);
// [0x99cab0] (334 bytes) sub_99CAB0
// int sub_99CAB0(uint32_t *a1, int a2);
// [0x99cc00] (278 bytes) sub_99CC00
// int sub_99CC00(int a1, int a2);
// [0x99cd20] (373 bytes) sub_99CD20
// int sub_99CD20(int a1, int a2, int a3);
// [0x99cea0] (564 bytes) sub_99CEA0
// int sub_99CEA0(int *a1);
// [0x99d0e0] (4921 bytes) sub_99D0E0
// int sub_99D0E0(int a1);
// [0x99e420] (1090 bytes) sub_99E420
// unsigned int sub_99E420(int a1, int a2);
// [0x99e870] (9380 bytes) sub_99E870
// int sub_99E870(int a1, int a2);
// [0x9a0d20] (1133 bytes) sub_9A0D20
// int sub_9A0D20(glf::debugger::Tweakable *a1, int a2, int a3, int a4);
// [0x9a1190] (310 bytes) sub_9A1190
// int sub_9A1190(int *a1, char *a2);
// [0x9a12d0] (142 bytes) sub_9A12D0
// int sub_9A12D0(int a1);
// [0x9a1360] (273 bytes) sub_9A1360
// int sub_9A1360(int a1);
// [0x9a1480] (324 bytes) sub_9A1480
// uint32_t *sub_9A1480(uint32_t *a1, int a2);
// [0x9a15d0] (213 bytes) sub_9A15D0
// int sub_9A15D0(uint32_t *a1);
// [0x9a16b0] (1403 bytes) sub_9A16B0
// uint32_t *sub_9A16B0(int a1, int a2);
// [0x9a1c30] (508 bytes) sub_9A1C30
// void sub_9A1C30(int a1);
// [0x9a1e30] (1548 bytes) sub_9A1E30
// float *sub_9A1E30(float *a1, int *a2, int *a3, char a4);
// [0x9a2440] (922 bytes) sub_9A2440
// void sub_9A2440(int a1);
// [0x9a27e0] (918 bytes) sub_9A27E0
// int sub_9A27E0(int *a1);
// [0x9a2b80] (10992 bytes) sub_9A2B80
// void sub_9A2B80(float *a1, float a2);
// [0x9a5670] (89 bytes) sub_9A5670
// void sub_9A5670(float *a1, int a2);
// [0x9a56d0] (47 bytes) sub_9A56D0
// void sub_9A56D0(int a1);
// [0x9a5700] (34 bytes) sub_9A5700
// void sub_9A5700(int a1);
// [0x9a5730] (124 bytes) sub_9A5730
// int sub_9A5730(int a1, int a2, int a3, int a4, int a5);
// [0x9a57b0] (34 bytes) sub_9A57B0
// void sub_9A57B0(int a1);
// [0x9a57e0] (219 bytes) sub_9A57E0
// char sub_9A57E0(uint32_t *a1, int a2);
// [0x9a58f0] (34 bytes) sub_9A58F0
// void sub_9A58F0(int a1, int a2);
// [0x9a5920] (57 bytes) sub_9A5920
// uint32_t *sub_9A5920(uint32_t *a1, int a2);
// [0x9a5960] (124 bytes) sub_9A5960
// int sub_9A5960(uint32_t *a1, uint32_t *a2, int a3, int a4);
// [0x9a59e0] (154 bytes) sub_9A59E0
// uint32_t *sub_9A59E0(int a1, int a2);
// [0x9a5a80] (400 bytes) sub_9A5A80
// uint32_t *sub_9A5A80(float *a1, int a2);
// [0x9a5c10] (559 bytes) sub_9A5C10
// float *sub_9A5C10(int *a1, uint32_t *a2);
// [0x9a5e40] (311 bytes) sub_9A5E40
// uint32_t *sub_9A5E40(int a1, int a2);
// [0x9a5f80] (1441 bytes) sub_9A5F80
// uint32_t *sub_9A5F80(int *a1, int a2);
// [0x9a6530] (605 bytes) sub_9A6530
// uint32_t *sub_9A6530(int a1, int a2);
// [0x9a67d0] (78 bytes) sub_9A67D0
// void sub_9A67D0(uint32_t *a1);
// [0x9a6820] (86 bytes) sub_9A6820
// void sub_9A6820(uint32_t *a1);
// [0x9a6880] (78 bytes) sub_9A6880
// void sub_9A6880(uint32_t *a1);
// [0x9a68d0] (78 bytes) sub_9A68D0
// void sub_9A68D0(uint32_t *a1);
// [0x9a6920] (78 bytes) sub_9A6920
// void sub_9A6920(uint32_t *a1);
// [0x9a6970] (78 bytes) sub_9A6970
// void sub_9A6970(uint32_t *a1);
// [0x9a69c0] (78 bytes) sub_9A69C0
// void sub_9A69C0(uint32_t *a1);
// [0x9a6a10] (7 bytes) sub_9A6A10
// int sub_9A6A10(int a1);
// [0x9a6a20] (7 bytes) sub_9A6A20
// int sub_9A6A20(int a1);
// [0x9a6a30] (111 bytes) sub_9A6A30
// void sub_9A6A30(uint32_t *a1);
// [0x9a6aa0] (86 bytes) sub_9A6AA0
// void sub_9A6AA0(uint32_t *a1);
// [0x9a6b00] (86 bytes) sub_9A6B00
// void sub_9A6B00(uint32_t *a1);
// [0x9a6b60] (86 bytes) sub_9A6B60
// void sub_9A6B60(uint32_t *a1);
// [0x9a6bc0] (86 bytes) sub_9A6BC0
// void sub_9A6BC0(uint32_t *a1);
// [0x9a6c20] (86 bytes) sub_9A6C20
// void sub_9A6C20(uint32_t *a1);
// [0x9a6c80] (7 bytes) sub_9A6C80
// int sub_9A6C80(int a1);
// [0x9a6c90] (7 bytes) sub_9A6C90
// int sub_9A6C90(int a1);
// [0x9a6ca0] (107 bytes) sub_9A6CA0
// void sub_9A6CA0(uint32_t *a1);
// [0x9a6d10] (137 bytes) sub_9A6D10
// void sub_9A6D10(float *a1, int a2);
// [0x9a6da0] (395 bytes) sub_9A6DA0
// unsigned int sub_9A6DA0(int a1);
// [0x9a6f30] (685 bytes) sub_9A6F30
// uint32_t *sub_9A6F30(int a1, int a2);
// [0x9a71e0] (335 bytes) sub_9A71E0
// uint32_t *sub_9A71E0(int a1, int a2, int a3);
// [0x9a7330] (271 bytes) sub_9A7330
// int (**sub_9A7330(int a1))(int);
// [0x9a7440] (655 bytes) sub_9A7440
// uint32_t *sub_9A7440(int a1);
// [0x9a76d0] (3295 bytes) sub_9A76D0
// int sub_9A76D0(uint32_t *a1, int a2, float *a3);
// [0x9a83b0] (829 bytes) sub_9A83B0
// uint32_t *sub_9A83B0(int a1);
// [0x9a86f0] (1155 bytes) sub_9A86F0
// void sub_9A86F0(int a1, int a2, int a3);
// [0x9a8b80] (1205 bytes) sub_9A8B80
// void sub_9A8B80(int a1, int a2);
// [0x9a9040] (782 bytes) sub_9A9040
// uint32_t *sub_9A9040(int a1);
// [0x9a9350] (60 bytes) sub_9A9350
// void sub_9A9350(uint32_t *a1);
// [0x9a9390] (81 bytes) sub_9A9390
// void sub_9A9390(uint32_t *a1);
// [0x9a93f0] (83 bytes) sub_9A93F0
// int sub_9A93F0(int a1, int a2, int a3);
// [0x9a9450] (178 bytes) sub_9A9450
// void sub_9A9450(int a1, char a2);
// [0x9a9510] (34 bytes) sub_9A9510
// void sub_9A9510(int a1, int a2);
// [0x9a9540] (34 bytes) sub_9A9540
// void sub_9A9540(int a1, int a2);
// [0x9a9570] (78 bytes) sub_9A9570
// void sub_9A9570(int a1);
// [0x9a95c0] (137 bytes) sub_9A95C0
// uint32_t *sub_9A95C0(uint32_t *a1);
// [0x9a9650] (261 bytes) sub_9A9650
// int (**sub_9A9650(uint32_t *a1))(int);
// [0x9a9760] (261 bytes) sub_9A9760
// int (**sub_9A9760(uint32_t *a1))(int);
// [0x9a9870] (775 bytes) sub_9A9870
// void sub_9A9870(int *a1, uint32_t *a2, uint32_t *a3);
// [0x9a9b80] (269 bytes) sub_9A9B80
// void sub_9A9B80(uint32_t *a1);
// [0x9a9c90] (269 bytes) sub_9A9C90
// void sub_9A9C90(uint32_t *a1);
// [0x9a9da0] (2171 bytes) sub_9A9DA0
// void sub_9A9DA0(int a1);
// [0x9aa620] (266 bytes) sub_9AA620
// void sub_9AA620(uint32_t *a1);
// [0x9aa730] (193 bytes) sub_9AA730
// uint32_t *sub_9AA730(uint32_t *a1);
// [0x9aa800] (325 bytes) sub_9AA800
// void sub_9AA800(int a1);
// [0x9aa950] (278 bytes) sub_9AA950
// void sub_9AA950(uint32_t *a1);
// [0x9aaa70] (517 bytes) sub_9AAA70
// void sub_9AAA70(int a1, uint32_t *a2);
// [0x9aac80] (208 bytes) sub_9AAC80
// void sub_9AAC80(int a1, int a2);
// [0x9aad50] (208 bytes) sub_9AAD50
// void sub_9AAD50(int a1, int a2);
// [0x9aae20] (1111 bytes) sub_9AAE20
// void sub_9AAE20(uint32_t *a1, int a2, uint32_t *a3);
// [0x9ab280] (1365 bytes) sub_9AB280
// void sub_9AB280(int a1, int a2);
// [0x9ab7e0] (503 bytes) sub_9AB7E0
// void sub_9AB7E0(int a1, char a2);
// [0x9ab9e0] (782 bytes) sub_9AB9E0
// void sub_9AB9E0(int a1, uint32_t *a2);
// [0x9abcf0] (243 bytes) sub_9ABCF0
// void sub_9ABCF0(uint32_t *a1);
// [0x9abdf0] (278 bytes) sub_9ABDF0
// void sub_9ABDF0(uint32_t *a1, uint32_t *a2);
// [0x9abf10] (132 bytes) sub_9ABF10
// int sub_9ABF10(int a1);
// [0x9abfa0] (292 bytes) sub_9ABFA0
// int sub_9ABFA0();
// [0x9ac0d0] (168 bytes) sub_9AC0D0
// int (**sub_9AC0D0(int a1))(int);
// [0x9ac180] (176 bytes) sub_9AC180
// void sub_9AC180(char *a1);
// [0x9ac230] (143 bytes) sub_9AC230
// void sub_9AC230(int a1, int a2);
// [0x9ac2c0] (36 bytes) sub_9AC2C0
// void sub_9AC2C0(int a1, int a2);
// [0x9ac2f0] (34 bytes) sub_9AC2F0
// void sub_9AC2F0(int a1);
// [0x9ac350] (778 bytes) sub_9AC350
// int sub_9AC350(uint32_t *a1, int a2);
// [0x9ac660] (128 bytes) sub_9AC660
// void sub_9AC660(int a1, int a2);
// [0x9ac6e0] (36 bytes) sub_9AC6E0
// void sub_9AC6E0(int a1, int a2);
// [0x9ac710] (34 bytes) sub_9AC710
// void sub_9AC710(int a1, int a2);
// [0x9ac740] (101 bytes) sub_9AC740
// void sub_9AC740(int a1, int a2);
// [0x9ac7b0] (60 bytes) sub_9AC7B0
// void sub_9AC7B0(uint32_t *a1);
// [0x9ac7f0] (181 bytes) sub_9AC7F0
// int sub_9AC7F0(int a1);
// [0x9ac8b0] (217 bytes) sub_9AC8B0
// int (**sub_9AC8B0(uint32_t *a1))(int);
// [0x9ac990] (325 bytes) sub_9AC990
// int (**sub_9AC990(uint32_t *a1))(int);
// [0x9acae0] (225 bytes) sub_9ACAE0
// void sub_9ACAE0(uint32_t *a1);
// [0x9acbd0] (333 bytes) sub_9ACBD0
// void sub_9ACBD0(uint32_t *a1);
// [0x9acd20] (308 bytes) sub_9ACD20
// int sub_9ACD20(int a1, uint8_t a2, uint8_t *a3);
// [0x9ace60] (669 bytes) sub_9ACE60
// int sub_9ACE60(int a1, char a2, char a3);
// [0x9ad100] (558 bytes) sub_9AD100
// int sub_9AD100(int a1);
// [0x9ad330] (519 bytes) sub_9AD330
// void sub_9AD330(int a1);
// [0x9ad540] (80 bytes) sub_9AD540
// void sub_9AD540(int a1);
// [0x9ad590] (8369 bytes) sub_9AD590
// int sub_9AD590(int a1, int a2);
// [0x9af650] (325 bytes) sub_9AF650
// uint32_t *sub_9AF650(int *a1);
// [0x9af7a0] (1130 bytes) sub_9AF7A0
// int sub_9AF7A0(uint32_t *a1);
// [0x9afc10] (949 bytes) sub_9AFC10
// int32_t sub_9AFC10(uint32_t *a1);
// [0x9affd0] (1136 bytes) sub_9AFFD0
// void sub_9AFFD0(uint32_t *a1, int a2, int a3, uint32_t *a4);
// [0x9b0440] (629 bytes) sub_9B0440
// int sub_9B0440(int a1);
// [0x9b0890] (325 bytes) sub_9B0890
// int *sub_9B0890(int *a1, int a2);
// [0x9b09e0] (385 bytes) sub_9B09E0
// void sub_9B09E0(int *a1);
// [0x9b0ec0] (712 bytes) sub_9B0EC0
// void sub_9B0EC0(int a1, int a2, int a3);
// [0x9b1190] (157 bytes) sub_9B1190
// void sub_9B1190(int a1, int a2, int a3, int a4, int a5);
// [0x9b1230] (7 bytes) sub_9B1230
// int sub_9B1230(int a1);
// [0x9b1240] (2333 bytes) sub_9B1240
// int sub_9B1240(int a1);
// [0x9b1b60] (7 bytes) sub_9B1B60
// int sub_9B1B60(int a1);
// [0x9b1b70] (56 bytes) sub_9B1B70
// void sub_9B1B70(void *a1);
// [0x9b1bb0] (1117 bytes) sub_9B1BB0
// void sub_9B1BB0(int *a1);
// [0x9b2010] (6128 bytes) sub_9B2010
// 0x9b2010 sub_9B2010
// [0x9b3800] (3156 bytes) sub_9B3800
// float *sub_9B3800(int a1, float *a2, int a3, int a4, uint8_t a5, int a6);
// [0x9b4460] (229 bytes) sub_9B4460
// uint8_t sub_9B4460(int a1, float *a2, int a3, int a4, uint8_t a5, int a6);
// [0x9b4550] (672 bytes) sub_9B4550
// void sub_9B4550(int a1);
// [0x9b47f0] (469 bytes) sub_9B47F0
// char sub_9B47F0(int a1);
// [0x9b49d0] (1243 bytes) sub_9B49D0
// void sub_9B49D0(int a1);
// [0x9b4eb0] (1165 bytes) sub_9B4EB0
// char sub_9B4EB0(int a1);
// [0x9b5340] (7813 bytes) sub_9B5340
// void sub_9B5340(int a1, char a2);
// [0x9b71d0] (452 bytes) sub_9B71D0
// void sub_9B71D0(uint32_t *a1, float *a2, char a3);
// [0x9b73a0] (420 bytes) sub_9B73A0
// void sub_9B73A0(uint32_t *a1, float *a2);
// [0x9b7550] (477 bytes) sub_9B7550
// char sub_9B7550(int a1);
// [0x9b7730] (47 bytes) sub_9B7730
// void sub_9B7730(int a1);
// [0x9b7760] (200 bytes) sub_9B7760
// void sub_9B7760(uint32_t *a1, char a2);
// [0x9b7830] (1303 bytes) sub_9B7830
// void sub_9B7830(int a1, uint32_t *a2);
// [0x9b7d50] (3010 bytes) sub_9B7D50
// void sub_9B7D50(int a1, int a2, int a3);
// [0x9b8920] (262 bytes) sub_9B8920
// int sub_9B8920(uint32_t *a1, int a2);
// [0x9b8a30] (4930 bytes) sub_9B8A30
// 0x9b8a30 sub_9B8A30
// [0x9b9d80] (205 bytes) sub_9B9D80
// int sub_9B9D80(int a1);
// [0x9b9e50] (1051 bytes) sub_9B9E50
// float *sub_9B9E50(int a1, int a2, int a3, char a4, char a5, int a6, int a7, float *a8);
// [0x9ba270] (659 bytes) sub_9BA270
// char sub_9BA270(int a1);
// [0x9ba510] (426 bytes) sub_9BA510
// uint32_t *sub_9BA510(int a1, int *a2, int *a3, int a4);
// [0x9ba6c0] (163 bytes) sub_9BA6C0
// int sub_9BA6C0(int a1);
// [0x9ba770] (430 bytes) sub_9BA770
// int sub_9BA770(uint32_t *a1, int a2);
// [0x9ba920] (2006 bytes) sub_9BA920
// void sub_9BA920(int a1, int a2);
// [0x9bb100] (70 bytes) sub_9BB100
// void sub_9BB100(int a1);
// [0x9bb150] (327 bytes) sub_9BB150
// void sub_9BB150(glitch::IObject *a1);
// [0x9bb2a0] (292 bytes) sub_9BB2A0
// void sub_9BB2A0(glitch::IObject *a1, int *a2);
// [0x9bb3d0] (513 bytes) sub_9BB3D0
// int sub_9BB3D0();
// [0x9bb5e0] (97 bytes) sub_9BB5E0
// int sub_9BB5E0();
// [0x9bb650] (591 bytes) sub_9BB650
// int sub_9BB650(int a1, float *a2, int a3);
// [0x9bb8a0] (598 bytes) sub_9BB8A0
// int sub_9BB8A0(int a1, float *a2, int a3);
// [0x9bbb00] (2254 bytes) sub_9BBB00
// float *sub_9BBB00(float *a1, uint32_t *a2, float *a3, float a4);
// [0x9bc3d0] (284 bytes) sub_9BC3D0
// uint32_t *sub_9BC3D0(uint32_t *a1, int a2, int *a3, int *a4);
// [0x9bc4f0] (215 bytes) sub_9BC4F0
// int sub_9BC4F0(int a1, int *a2);
// [0x9bc5d0] (284 bytes) sub_9BC5D0
// uint32_t *sub_9BC5D0(uint32_t *a1, int a2, int *a3, int *a4);
// [0x9bc6f0] (215 bytes) sub_9BC6F0
// int sub_9BC6F0(int a1, int *a2);
// [0x9bc7d0] (770 bytes) sub_9BC7D0
// int sub_9BC7D0(const char *a1);
// [0x9c08c0] (89 bytes) sub_9C08C0
// int sub_9C08C0(int a1, uint32_t *a2, int a3);
// [0x9c0920] (1644 bytes) sub_9C0920
// int sub_9C0920(int *a1, int a2, int a3, char a4);
// [0x9c0f90] (338 bytes) sub_9C0F90
// int sub_9C0F90(int a1, int a2, int a3);
// [0x9c10f0] (163 bytes) sub_9C10F0
// int sub_9C10F0(int a1, uint8_t a2);
// [0x9c11a0] (1478 bytes) sub_9C11A0
// int sub_9C11A0(uint32_t *a1, uint8_t *a2);
// [0x9c1770] (375 bytes) sub_9C1770
// int sub_9C1770(float *a1, uint8_t *a2, float *a3);
// [0x9c18f0] (537 bytes) sub_9C18F0
// int sub_9C18F0(int a1, uint8_t *a2);
// [0x9c1b10] (920 bytes) sub_9C1B10
// int sub_9C1B10();
// [0x9c1eb0] (561 bytes) sub_9C1EB0
// int sub_9C1EB0(int a1, uint8_t *a2, char a3);
// [0x9c20f0] (789 bytes) sub_9C20F0
// int sub_9C20F0();
// [0x9c2410] (776 bytes) sub_9C2410
// int sub_9C2410(int a1, int a2);
// [0x9c2720] (1003 bytes) sub_9C2720
// void sub_9C2720(uint8_t *a1);
// [0x9c2b10] (3960 bytes) sub_9C2B10
// int sub_9C2B10(uint32_t *a1, char a2);
// [0x9c3a90] (2627 bytes) sub_9C3A90
// __m128 *sub_9C3A90(__m128 *a1, int *a2, float a3);
// [0x9c44e0] (4219 bytes) sub_9C44E0
// float sub_9C44E0(uint32_t *a1, float result, int a3);
// [0x9c5560] (119 bytes) sub_9C5560
// int sub_9C5560(int a1, float a2);
// [0x9c55e0] (1561 bytes) sub_9C55E0
// int sub_9C55E0(int a1);
// [0x9c5c00] (487 bytes) sub_9C5C00
// void sub_9C5C00(int a1);
// [0x9c5df0] (5831 bytes) sub_9C5DF0
// void sub_9C5DF0(__m128i a1, uint32_t *a2);
// [0x9c74c0] (21 bytes) sub_9C74C0
// int sub_9C74C0();
// [0x9c74e0] (1144 bytes) sub_9C74E0
// char *sub_9C74E0(int a1, float *a2);
// [0x9c7960] (114 bytes) sub_9C7960
// char *sub_9C7960(int a1, int a2);
// [0x9c79e0] (866 bytes) sub_9C79E0
// void sub_9C79E0(int a1, float *a2);
// [0x9c7d50] (51 bytes) sub_9C7D50
// uint32_t *sub_9C7D50(int a1);
// [0x9c7d90] (256 bytes) sub_9C7D90
// int sub_9C7D90(int a1);
// [0x9c7e90] (435 bytes) sub_9C7E90
// uint32_t *sub_9C7E90(int a1, char a2, char a3, char a4);
// [0x9c8050] (94 bytes) sub_9C8050
// uint32_t *sub_9C8050(int a1, char a2, char a3, char a4);
// [0x9c80b0] (163 bytes) sub_9C80B0
// uint8_t *sub_9C80B0(int a1, int a2);
// [0x9c8160] (953 bytes) sub_9C8160
// int sub_9C8160(int a1);
// [0x9c8520] (119 bytes) sub_9C8520
// int sub_9C8520();
// [0x9c85a0] (119 bytes) sub_9C85A0
// int sub_9C85A0();
// [0x9c8620] (127 bytes) sub_9C8620
// uint32_t *sub_9C8620(int a1, int a2);
// [0x9c86a0] (148 bytes) sub_9C86A0
// uint32_t *sub_9C86A0();
// [0x9c8740] (129 bytes) sub_9C8740
// int sub_9C8740(int a1);
// [0x9c87d0] (191 bytes) sub_9C87D0
// int sub_9C87D0(int a1);
// [0x9c8890] (2287 bytes) sub_9C8890
// float *sub_9C8890(float *a1, __guard *a2);
// [0x9c9180] (185 bytes) sub_9C9180
// float *sub_9C9180(int a1, float a2);
// [0x9c9240] (345 bytes) sub_9C9240
// int sub_9C9240(int a1);
// [0x9c93a0] (179 bytes) sub_9C93A0
// int sub_9C93A0(int a1, int a2);
// [0x9c9460] (411 bytes) sub_9C9460
// int sub_9C9460(int a1, int a2);
// [0x9c9600] (286 bytes) sub_9C9600
// int sub_9C9600(int a1, int a2);
// [0x9c9720] (127 bytes) sub_9C9720
// uint32_t *sub_9C9720(int a1, int a2);
// [0x9c97a0] (293 bytes) sub_9C97A0
// int sub_9C97A0(int a1);
// [0x9c98d0] (715 bytes) sub_9C98D0
// uint32_t *sub_9C98D0(int a1);
// [0x9c9ba0] (284 bytes) sub_9C9BA0
// float *sub_9C9BA0(float *a1);
// [0x9c9cc0] (4976 bytes) sub_9C9CC0
// int sub_9C9CC0(int a1);
// [0x9cb030] (3977 bytes) sub_9CB030
// int sub_9CB030(int a1, unsigned int a2, int a3, float a4, int a5, uint8_t a6, int a7, int a8);
// [0x9cbfc0] (3793 bytes) sub_9CBFC0
// void sub_9CBFC0(int a1, unsigned int a2, float a3, int a4, char a5);
// [0x9ccea0] (469 bytes) sub_9CCEA0
// int sub_9CCEA0(int a1);
// [0x9cd080] (175 bytes) sub_9CD080
// void sub_9CD080(int a1, glitch::scene::ISceneNode *a2);
// [0x9cd130] (244 bytes) sub_9CD130
// void sub_9CD130();
// [0x9cd230] (303 bytes) sub_9CD230
// void sub_9CD230(int a1, float a2);
// [0x9cd360] (134 bytes) sub_9CD360
// void sub_9CD360(int a1, float a2);
// [0x9cd3f0] (506 bytes) sub_9CD3F0
// int sub_9CD3F0(uint32_t *a1);
// [0x9cd5f0] (3445 bytes) sub_9CD5F0
// void sub_9CD5F0(int a1, int a2);
// [0x9ce370] (177 bytes) sub_9CE370
// void sub_9CE370(int a1, float a2);
// [0x9ce430] (164 bytes) sub_9CE430
// void sub_9CE430(int a1);
// [0x9ce4e0] (7 bytes) sub_9CE4E0
// int sub_9CE4E0(int a1);
// [0x9ce4f0] (7 bytes) sub_9CE4F0
// int sub_9CE4F0(int a1);
// [0x9ce500] (188 bytes) sub_9CE500
// void sub_9CE500(int a1);
// [0x9ce5c0] (7 bytes) sub_9CE5C0
// int sub_9CE5C0(int a1);
// [0x9ce5d0] (7 bytes) sub_9CE5D0
// int sub_9CE5D0(int a1);
// [0x9ce5e0] (199 bytes) sub_9CE5E0
// void sub_9CE5E0(uint32_t *a1);
// [0x9ce6b0] (554 bytes) sub_9CE6B0
// int sub_9CE6B0(int a1);
// [0x9ce8e0] (4351 bytes) sub_9CE8E0
// void sub_9CE8E0(float *a1, float a2);
// [0x9cf9e0] (8372 bytes) sub_9CF9E0
// float *sub_9CF9E0(float *a1, float a2);
// [0x9d1aa0] (172 bytes) sub_9D1AA0
// int sub_9D1AA0(int a1, int a2, int a3, uint32_t *a4);
// [0x9d1b50] (341 bytes) sub_9D1B50
// int sub_9D1B50(int a1, int a2, float a3, float a4, uint32_t *a5);
// [0x9d23b0] (1565 bytes) sub_9D23B0
// int sub_9D23B0(int a1, int a2, float a3, float a4, uint32_t *a5);
// [0x9d29d0] (622 bytes) sub_9D29D0
// int sub_9D29D0(int a1, float a2, float a3);
// [0x9d2c40] (195 bytes) sub_9D2C40
// int sub_9D2C40(int a1);
// [0x9d2d10] (445 bytes) sub_9D2D10
// int sub_9D2D10(uint32_t *a1, int a2, uint32_t *a3, int a4);
// [0x9d2ed0] (469 bytes) sub_9D2ED0
// int sub_9D2ED0(int a1);
// [0x9d30b0] (3309 bytes) sub_9D30B0
// int sub_9D30B0( uint32_t *a1, int a2, int a3, unsigned int a4, uint8_t *a5, uint8_t *a6, uint32_t *a7, char a8);
// [0x9d3da0] (772 bytes) sub_9D3DA0
// int sub_9D3DA0(int a1, int a2, uint32_t *a3, int a4);
// [0x9d40b0] (913 bytes) sub_9D40B0
// int sub_9D40B0(int a1, uint32_t *a2, uint32_t *a3, int a4);
// [0x9d4450] (2074 bytes) sub_9D4450
// int sub_9D4450(int a1, int a2, int a3, int a4, int a5, char a6);
// [0x9d4c70] (649 bytes) sub_9D4C70
// float *sub_9D4C70(int a1, uint8_t a2);
// [0x9d4f00] (114 bytes) sub_9D4F00
// int sub_9D4F00(int a1);
// [0x9d4f80] (136 bytes) sub_9D4F80
// int sub_9D4F80(int *a1);
// [0x9d5010] (335 bytes) sub_9D5010
// int sub_9D5010(uint32_t *a1);
// [0x9d5160] (236 bytes) sub_9D5160
// int sub_9D5160(uint32_t *a1, int a2, int a3);
// [0x9d5250] (712 bytes) sub_9D5250
// 0x9d5250 sub_9D5250
// [0x9d5520] (261 bytes) sub_9D5520
// void sub_9D5520(uint32_t *a1);
// [0x9d5630] (197 bytes) sub_9D5630
// int sub_9D5630(int a1);
// [0x9d5700] (1414 bytes) sub_9D5700
// void sub_9D5700(uint8_t *a1, uint32_t *a2, uint8_t a3);
// [0x9d5c90] (1013 bytes) sub_9D5C90
// 0x9d5c90 sub_9D5C90
// [0x9d6090] (1172 bytes) sub_9D6090
// void sub_9D6090(int a1);
// [0x9d6530] (278 bytes) sub_9D6530
// void sub_9D6530(int a1);
// [0x9d6650] (297 bytes) sub_9D6650
// int sub_9D6650(int a1, uint32_t *a2, uint32_t *a3, int a4);
// [0x9d6780] (370 bytes) sub_9D6780
// int sub_9D6780(int a1, int a2);
// [0x9d6900] (514 bytes) sub_9D6900
// int sub_9D6900(int a1, int a2);
// [0x9d6b10] (834 bytes) sub_9D6B10
// char sub_9D6B10(int a1);
// [0x9d6e60] (145 bytes) sub_9D6E60
// int sub_9D6E60(int a1, int a2, int a3, int a4, float a5);
// [0x9d6f00] (1156 bytes) sub_9D6F00
// void sub_9D6F00(uint32_t *a1);
// [0x9d7390] (62 bytes) sub_9D7390
// int sub_9D7390(uint32_t *a1);
// [0x9d73d0] (304 bytes) sub_9D73D0
// int sub_9D73D0(uint32_t *a1, uint8_t a2);
// [0x9d7500] (169 bytes) sub_9D7500
// int sub_9D7500(int a1);
// [0x9d75b0] (63 bytes) sub_9D75B0
// int sub_9D75B0(int a1);
// [0x9d75f0] (63 bytes) sub_9D75F0
// int sub_9D75F0(int a1);
// [0x9d7630] (468 bytes) sub_9D7630
// int sub_9D7630(int a1);
// [0x9d7810] (178 bytes) sub_9D7810
// int sub_9D7810(int a1);
// [0x9d78d0] (9153 bytes) sub_9D78D0
// int sub_9D78D0(int a1, uint32_t *a2, float a3, float a4, uint8_t a5);
// [0x9d9ca0] (191 bytes) sub_9D9CA0
// int sub_9D9CA0(uint8_t *a1, uint32_t *a2, float a3, float a4, uint8_t a5);
// [0x9d9d60] (361 bytes) sub_9D9D60
// char sub_9D9D60(int a1, int a2);
// [0x9d9ed0] (434 bytes) sub_9D9ED0
// void sub_9D9ED0(int a1, int a2, long double a3, int a4, int a5);
// [0x9da090] (444 bytes) sub_9DA090
// void sub_9DA090(int a1, long double a2, int a3, float *a4);
// [0x9da250] (533 bytes) sub_9DA250
// char sub_9DA250(int a1, int a2);
// [0x9da470] (738 bytes) sub_9DA470
// unsigned int sub_9DA470(int a1, char a2);
// [0x9da760] (5309 bytes) sub_9DA760
// long double sub_9DA760(int a1, float a2, char a3);
// [0x9dbc20] (1115 bytes) sub_9DBC20
// void sub_9DBC20(uint32_t *a1);
// [0x9dc080] (2313 bytes) sub_9DC080
// int sub_9DC080(int a1, int a2, char a3);
// [0x9dc990] (485 bytes) sub_9DC990
// int sub_9DC990(int a1);
// [0x9dcb80] (373 bytes) sub_9DCB80
// int sub_9DCB80(int a1);
// [0x9dcd00] (1395 bytes) sub_9DCD00
// void sub_9DCD00(int a1, int64_t a2);
// [0x9dd280] (3174 bytes) sub_9DD280
// void sub_9DD280(int a1, int a2, int a3);
// [0x9ddef0] (160 bytes) sub_9DDEF0
// void sub_9DDEF0(int a1, int a2);
// [0x9ddf90] (4077 bytes) sub_9DDF90
// int sub_9DDF90(int a1, int *a2, uint8_t *a3);
// [0x9def80] (4153 bytes) sub_9DEF80
// int sub_9DEF80(int a1, int *a2, uint8_t *a3);
// [0x9dffc0] (853 bytes) sub_9DFFC0
// void sub_9DFFC0(uint32_t *a1, int a2);
// [0x9e0320] (469 bytes) sub_9E0320
// int sub_9E0320(int a1);
// [0x9e0500] (897 bytes) sub_9E0500
// int sub_9E0500(uint32_t *a1);
// [0x9e0890] (2448 bytes) sub_9E0890
// int sub_9E0890(int a1);
// [0x9e1220] (858 bytes) sub_9E1220
// int sub_9E1220(uint32_t *a1, int a2, int a3);
// [0x9e1580] (594 bytes) sub_9E1580
// int sub_9E1580(int a1, int a2);
// [0x9e17e0] (1487 bytes) sub_9E17E0
// int sub_9E17E0(int a1, char a2, ...);
// [0x9e1db0] (1817 bytes) sub_9E1DB0
// int sub_9E1DB0(glitch::os::Timer *a1, int a2);
// [0x9e24d0] (827 bytes) sub_9E24D0
// int sub_9E24D0(glitch::os::Timer *a1);
// [0x9e2810] (177 bytes) sub_9E2810
// int sub_9E2810(glitch::os::Timer *a1);
// [0x9e28d0] (9745 bytes) sub_9E28D0
// int sub_9E28D0(__guard *a1, int a2, int a3, __guard a4, __guard *a5);
// [0x9e4ef0] (1285 bytes) sub_9E4EF0
// int sub_9E4EF0(int a1);
// [0x9e5400] (175 bytes) sub_9E5400
// int sub_9E5400(uint32_t *a1);
// [0x9e54b0] (3581 bytes) sub_9E54B0
// 0x9e54b0 sub_9E54B0
// [0x9e62b0] (2770 bytes) sub_9E62B0
// int sub_9E62B0(float *a1, float a2, float a3);
// [0x9e6d90] (2913 bytes) sub_9E6D90
// void sub_9E6D90(int a1, int a2, int a3);
// [0x9e7900] (824 bytes) sub_9E7900
// void sub_9E7900(int a1);
// [0x9e7c40] (3967 bytes) sub_9E7C40
// int sub_9E7C40(int a1, int a2);
// [0x9e9740] (648 bytes) sub_9E9740
// int sub_9E9740(int a1);
// [0x9e99d0] (566 bytes) sub_9E99D0
// void sub_9E99D0(int a1);
// [0x9e9c10] (1126 bytes) sub_9E9C10
// int sub_9E9C10(int a1, int a2);
// [0x9ea080] (939 bytes) sub_9EA080
// void sub_9EA080(int a1, int a2);
// [0x9ea430] (1019 bytes) sub_9EA430
// void sub_9EA430(int a1, uint32_t *a2);
// [0x9ea830] (870 bytes) sub_9EA830
// int sub_9EA830(int a1);
// [0x9eaba0] (308 bytes) sub_9EABA0
// int sub_9EABA0(int a1);
// [0x9eace0] (1584 bytes) sub_9EACE0
// int sub_9EACE0(int a1, char a2, char a3);
// [0x9eb310] (41 bytes) sub_9EB310
// int sub_9EB310(int a1, char a2, char a3);
// [0x9eb340] (201 bytes) sub_9EB340
// void sub_9EB340(int a1, char a2);
// [0x9eb410] (8331 bytes) sub_9EB410
// void sub_9EB410(int a1, int a2, int a3);
// [0x9ed4a0] (173 bytes) sub_9ED4A0
// void sub_9ED4A0(int a1, int a2);
// [0x9ed550] (755 bytes) sub_9ED550
// int sub_9ED550(int a1);
// [0x9ed850] (229 bytes) sub_9ED850
// void sub_9ED850(int a1);
// [0x9ed940] (157 bytes) sub_9ED940
// void sub_9ED940(long double a1, int a2, int a3);
// [0x9ed9e0] (235 bytes) sub_9ED9E0
// void sub_9ED9E0(long double a1, int a2, uint32_t *a3);
// [0x9edad0] (332 bytes) sub_9EDAD0
// uint32_t *sub_9EDAD0(int a1, int a2);
// [0x9edc20] (277 bytes) sub_9EDC20
// char sub_9EDC20(int a1, int a2);
// [0x9edd40] (616 bytes) sub_9EDD40
// uint8_t *sub_9EDD40(long double a1, int a2, int a3);
// [0x9edfb0] (223 bytes) sub_9EDFB0
// char *sub_9EDFB0(long double a1, int a2, float *a3);
// [0x9ee090] (2081 bytes) sub_9EE090
// uint32_t *sub_9EE090(int a1, char a2);
// [0x9ee8c0] (13944 bytes) sub_9EE8C0
// int sub_9EE8C0(int a1, const char **a2);
// [0x9f1f40] (5126 bytes) sub_9F1F40
// int sub_9F1F40(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);
// [0x9f3350] (415 bytes) sub_9F3350
// int sub_9F3350(int a1);
// [0x9f34f0] (1451 bytes) sub_9F34F0
// void sub_9F34F0(vox::EmitterHandle *a1, int a2);
// [0x9f3aa0] (3199 bytes) sub_9F3AA0
// void sub_9F3AA0(int a1, int a2, int a3);
// [0x9f4720] (846 bytes) sub_9F4720
// int sub_9F4720(int a1);
// [0x9f4a70] (8798 bytes) sub_9F4A70
// void sub_9F4A70(long double a1, int a2, char *a3, int a4, int a5, uint8_t a6);
// [0x9f6cd0] (261 bytes) sub_9F6CD0
// void sub_9F6CD0(long double a1, int a2, char *a3, char *a4, int a5, uint8_t a6);
// [0x9f6de0] (2469 bytes) sub_9F6DE0
// void sub_9F6DE0(long double a1, int a2, int a3);
// [0x9f7790] (5367 bytes) sub_9F7790
// int sub_9F7790(float *a1, int a2);
// [0x9f8c90] (5380 bytes) sub_9F8C90
// int sub_9F8C90(int a1, int a2);
// [0x9fc930] (69 bytes) sub_9FC930
// void sub_9FC930(int a1, int a2, int a3, int a4);
// [0x9fc980] (2834 bytes) sub_9FC980
// int sub_9FC980(int a1, uint32_t *a2, char **a3, int a4, const char **a5, int a6);
// [0x9fe180] (17 bytes) sub_9FE180
// int sub_9FE180(int a1, int a2, int a3, int a4, int a5, int a6);
// [0x9fe1a0] (198 bytes) sub_9FE1A0
// int *sub_9FE1A0(int a1, int a2, int a3);
// [0x9fece0] (3247 bytes) sub_9FECE0
// int sub_9FECE0( int a1, int a2, uint32_t *a3, char **a4, int a5, const char **a6, int a7, int a8, int a9, int a10, void *a11);
// [0x9ff990] (677 bytes) sub_9FF990
// int sub_9FF990(int a1);
// [0x9ffc40] (757 bytes) sub_9FFC40
// int sub_9FFC40(int a1, int a2, int a3);
// [0x9fff40] (584 bytes) sub_9FFF40
// int sub_9FFF40(int a1, int a2, int a3, char a4, char a5);
// [0xa00190] (3255 bytes) sub_A00190
// 0xa00190 sub_A00190
// [0xa00e50] (167 bytes) sub_A00E50
// int sub_A00E50(uint32_t *a1);
// [0xa00f00] (651 bytes) sub_A00F00
// int sub_A00F00(uint32_t *a1);
// [0xa01190] (773 bytes) sub_A01190
// int sub_A01190(int *a1);
// [0xa014a0] (2362 bytes) sub_A014A0
// void sub_A014A0(int a1);
// [0xa01de0] (1876 bytes) sub_A01DE0
// int sub_A01DE0(int a1);
// [0xa02540] (4572 bytes) sub_A02540
// uint32_t *sub_A02540(glitch::os::Timer *a1);
// [0xa03720] (24 bytes) sub_A03720
// uint32_t *sub_A03720(uint32_t *a1);
// [0xa03750] (22 bytes) sub_A03750
// int *sub_A03750();
// [0xa03770] (24 bytes) sub_A03770
// uint32_t *sub_A03770(uint32_t *a1);
// [0xa03798] (1 bytes) nullsub_407
// void nullsub_407();
// [0xa037a0] (24 bytes) sub_A037A0
// uint32_t *sub_A037A0(uint32_t *a1);
// [0xa037c0] (64 bytes) sub_A037C0
// void sub_A037C0(int a1, int a2, uint8_t a3);
// [0xa03808] (1 bytes) nullsub_408
// void nullsub_408();
// [0xa03810] (17 bytes) sub_A03810
// int sub_A03810(int a1, char a2);
// [0xa03830] (17 bytes) sub_A03830
// int sub_A03830(int a1, char a2);
// [0xa03850] (17 bytes) sub_A03850
// int sub_A03850(int a1, char a2);
// [0xa03870] (17 bytes) sub_A03870
// int sub_A03870(int a1, char a2);
// [0xa03890] (17 bytes) sub_A03890
// int sub_A03890(int a1, char a2);
// [0xa038b0] (17 bytes) sub_A038B0
// int sub_A038B0(int a1, char a2);
// [0xa038d0] (17 bytes) sub_A038D0
// int sub_A038D0(int a1, char a2);
// [0xa038f0] (17 bytes) sub_A038F0
// int sub_A038F0(int a1, char a2);
// [0xa03910] (17 bytes) sub_A03910
// int sub_A03910(int a1, char a2);
// [0xa03930] (17 bytes) sub_A03930
// int sub_A03930(int a1, char a2);
// [0xa03950] (19 bytes) sub_A03950
// int sub_A03950(int a1, uint8_t a2);
// [0xa03970] (17 bytes) sub_A03970
// int sub_A03970(int a1, char a2);
// [0xa03990] (39 bytes) sub_A03990
// int sub_A03990(int a1, uint8_t a2);
// [0xa039c0] (17 bytes) sub_A039C0
// int sub_A039C0(int a1, char a2);
// [0xa039e0] (17 bytes) sub_A039E0
// int sub_A039E0(int a1, char a2);
// [0xa03a00] (17 bytes) sub_A03A00
// int sub_A03A00(int a1, char a2);
// [0xa03a20] (17 bytes) sub_A03A20
// int sub_A03A20(int a1, char a2);
// [0xa03a40] (17 bytes) sub_A03A40
// int sub_A03A40(int a1, char a2);
// [0xa03a60] (87 bytes) sub_A03A60
// uint32_t *sub_A03A60(int a1, char a2);
// [0xa03ac0] (25 bytes) sub_A03AC0
// int sub_A03AC0(int a1, uint8_t a2);
// [0xa03ae0] (28 bytes) sub_A03AE0
// int sub_A03AE0(int a1);
// [0xa03b00] (28 bytes) sub_A03B00
// int sub_A03B00(int a1);
// [0xa03b20] (13 bytes) sub_A03B20
// int sub_A03B20(int a1);
// [0xa03b30] (13 bytes) sub_A03B30
// int sub_A03B30(int a1);
// [0xa03b48] (1 bytes) nullsub_409
// void nullsub_409();
// [0xa03b58] (1 bytes) nullsub_410
// void nullsub_410();
// [0xa03b68] (1 bytes) nullsub_411
// void nullsub_411();
// [0xa03b78] (1 bytes) nullsub_412
// void nullsub_412();
// [0xa03b80] (12 bytes) sub_A03B80
// int sub_A03B80();
// [0xa03b90] (12 bytes) sub_A03B90
// int sub_A03B90(int a1);
// [0xa03ba0] (14 bytes) sub_A03BA0
// int sub_A03BA0(int a1, int a2);
// [0xa03bb0] (12 bytes) sub_A03BB0
// long double sub_A03BB0(int a1);
// [0xa03bc0] (31 bytes) sub_A03BC0
// long double sub_A03BC0(int a1);
// [0xa03be0] (7 bytes) sub_A03BE0
// int sub_A03BE0(int a1);
// [0xa03bf0] (22 bytes) sub_A03BF0
// int *sub_A03BF0();
// [0xa03c10] (7 bytes) sub_A03C10
// int sub_A03C10(int a1);
// [0xa03c20] (16 bytes) sub_A03C20
// int sub_A03C20(int a1);
// [0xa03c30] (7 bytes) sub_A03C30
// int sub_A03C30(int a1);
// [0xa03c40] (16 bytes) sub_A03C40
// int sub_A03C40(int a1);
// [0xa03c50] (32 bytes) sub_A03C50
// int sub_A03C50(int a1);
// [0xa03c70] (9 bytes) sub_A03C70
// int sub_A03C70();
// [0xa03c80] (7 bytes) sub_A03C80
// int sub_A03C80(int a1);
// [0xa03c90] (22 bytes) sub_A03C90
// int *sub_A03C90();
// [0xa03cb0] (28 bytes) sub_A03CB0
// int sub_A03CB0(int a1);
// [0xa03cd8] (1 bytes) nullsub_413
// void nullsub_413();
// [0xa03ce8] (1 bytes) nullsub_414
// void nullsub_414();
// [0xa03cf0] (12 bytes) sub_A03CF0
// int sub_A03CF0();
// [0xa03d00] (12 bytes) sub_A03D00
// int sub_A03D00();
// [0xa03d18] (1 bytes) nullsub_415
// void nullsub_415();
// [0xa03d28] (1 bytes) nullsub_416
// void nullsub_416();
// [0xa03d30] (28 bytes) sub_A03D30
// int sub_A03D30(int a1);
// [0xa03d50] (28 bytes) sub_A03D50
// int sub_A03D50(int a1);
// [0xa03d70] (24 bytes) sub_A03D70
// uint32_t *sub_A03D70(uint32_t *a1);
// [0xa03d90] (42 bytes) sub_A03D90
// void sub_A03D90(uint32_t *a1);
// [0xa03dc0] (42 bytes) sub_A03DC0
// void sub_A03DC0(uint32_t *a1);
// [0xa03df0] (42 bytes) sub_A03DF0
// void sub_A03DF0(uint32_t *a1);
// [0xa03e20] (42 bytes) sub_A03E20
// void sub_A03E20(uint32_t *a1);
// [0xa03e50] (46 bytes) sub_A03E50
// void sub_A03E50(uint8_t *a1);
// [0xa03e80] (46 bytes) sub_A03E80
// void sub_A03E80(uint8_t *a1);
// [0xa03eb0] (46 bytes) sub_A03EB0
// void sub_A03EB0(uint8_t *a1);
// [0xa03ee0] (46 bytes) sub_A03EE0
// void sub_A03EE0(uint8_t *a1);
// [0xa03f10] (46 bytes) sub_A03F10
// void sub_A03F10(uint8_t *a1);
// [0xa03f40] (40 bytes) std::vector<Character::InteractionFunctor *,std::allocator<Character::InteractionFunctor *>>::~vector()
// void std::vector<Character::InteractionFunctor *>::~vector(void **this);
// [0xa03f70] (45 bytes) sub_A03F70
// int sub_A03F70(int a1, int a2);
// [0xa03fa0] (67 bytes) sub_A03FA0
// void sub_A03FA0(glitch::collada::CAnimationFilterBase *a1);
// [0xa03ff0] (64 bytes) sub_A03FF0
// void sub_A03FF0(glf::debugger::Tweakable *a1);
// [0xa04030] (42 bytes) sub_A04030
// void sub_A04030(glf::debugger::Tweakable *a1);
// [0xa04060] (42 bytes) sub_A04060
// void sub_A04060(glitch::collada::CColladaFactory *a1);
// [0xa04090] (64 bytes) sub_A04090
// void sub_A04090(glitch::collada::CColladaFactory *a1);
// [0xa040d0] (75 bytes) sub_A040D0
// void sub_A040D0(glitch::collada::CAnimationFilterBase *a1);
// [0xa04120] (151 bytes) sub_A04120
// float *sub_A04120(float *a1);
// [0xa041c0] (579 bytes) sub_A041C0
// float *sub_A041C0(float *a1, float *a2);
// [0xa04410] (1460 bytes) sub_A04410
// int sub_A04410( int a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8, float a9, float a10);
// [0xa049d0] (86 bytes) sub_A049D0
// int sub_A049D0(int a1);
// [0xa04a30] (90 bytes) sub_A04A30
// int sub_A04A30(uint32_t *a1, int a2, int a3);
// [0xa04a90] (108 bytes) sub_A04A90
// int64_t sub_A04A90(uint32_t *a1, int a2, int a3);
// [0xa04b00] (236 bytes) sub_A04B00
// int sub_A04B00(int a1, char *a2, char *s, char *a4);
// [0xa04bf0] (100 bytes) sub_A04BF0
// int sub_A04BF0();
// [0xa04c60] (163 bytes) sub_A04C60
// int sub_A04C60(int a1, uint32_t *a2, uint32_t *a3, float a4);
// [0xa04d10] (113 bytes) sub_A04D10
// long double sub_A04D10(float *a1);
// [0xa04d90] (74 bytes) sub_A04D90
// bool sub_A04D90(int a1);
// [0xa04de0] (116 bytes) sub_A04DE0
// int sub_A04DE0(uint32_t *a1);
// [0xa04e60] (49 bytes) sub_A04E60
// bool sub_A04E60(int a1);
// [0xa04ea0] (110 bytes) sub_A04EA0
// bool sub_A04EA0(int a1);
// [0xa04f10] (64 bytes) sub_A04F10
// uint32_t *sub_A04F10(uint32_t *a1, uint32_t *a2);
// [0xa04f50] (1799 bytes) sub_A04F50
// const char *sub_A04F50(int a1);
// [0xa05660] (178 bytes) sub_A05660
// int *sub_A05660(int *a1, int *a2);
// [0xa05720] (17745 bytes) sub_A05720
// const char *sub_A05720(int a1);
// [0xa09c80] (325 bytes) sub_A09C80
// int sub_A09C80(int a1, int a2);
// [0xa09dd0] (79 bytes) std::vector<CineMeshMapping,GameAllocator<CineMeshMapping>>::~vector()
// void std::vector<CineMeshMapping,GameAllocator<CineMeshMapping>>::~vector( std::vector<CineMeshMapping, GameAllocator<CineMeshMapping>> *this);
// [0xa09e20] (58 bytes) sub_A09E20
// int sub_A09E20(glf *a1, char *a2, ...);
// [0xa09e60] (142 bytes) sub_A09E60
// void *sub_A09E60();
// [0xa09ef0] (211 bytes) sub_A09EF0
// float *sub_A09EF0(float *a1, double a2, float *a3);
// [0xa09fd0] (650 bytes) sub_A09FD0
// int sub_A09FD0(int a1, float a2);
// [0xa0a260] (59 bytes) sub_A0A260
// long double sub_A0A260(float *a1);
// [0xa0a2a0] (129 bytes) sub_A0A2A0
// float *sub_A0A2A0(float *a1, float *a2);
// [0xa0a330] (137 bytes) sub_A0A330
// float *sub_A0A330(float *a1, float *a2, float *a3);
// [0xa0a3c0] (85 bytes) std::deque<glitch::scene::ISceneNode *,std::allocator<glitch::scene::ISceneNode *>>::~deque()
// void std::deque<glitch::scene::ISceneNode *>::~deque(std::deque<glitch::scene::ISceneNode *> *this);
// [0xa0a420] (457 bytes) std::stack<glitch::scene::ISceneNode *,std::deque<glitch::scene::ISceneNode *,std::allocator<glitch::scene::ISceneNode *>>>::stack(std::deque<glitch::scene::ISceneNode *,std::allocator<glitch::scene::ISceneNode *>> const&)
// uint32_t *std::stack<glitch::scene::ISceneNode *>::stack( std::stack<glitch::scene::ISceneNode *> *this, const std::deque<glitch::scene::ISceneNode *> *a2);
// [0xa0a5f0] (184 bytes) sub_A0A5F0
// int sub_A0A5F0(int a1, char *a2, int a3);
// [0xa0a6b0] (142 bytes) sub_A0A6B0
// void *sub_A0A6B0();
// [0xa0a740] (384 bytes) sub_A0A740
// float *sub_A0A740(float *a1, float *a2, float *a3);
// [0xa0a8c0] (78 bytes) sub_A0A8C0
// int sub_A0A8C0(int a1);
// [0xa0a910] (9094 bytes) sub_A0A910
// int sub_A0A910(int a1);
// [0xa0cca0] (31706 bytes) sub_A0CCA0
// int sub_A0CCA0(int *a1);
// [0xa14880] (432 bytes) sub_A14880
// int sub_A14880(int a1, char *a2, int a3);
// [0xa14a30] (432 bytes) sub_A14A30
// int sub_A14A30(int a1, char *a2, int a3);
// [0xa14be0] (432 bytes) sub_A14BE0
// int sub_A14BE0(int a1, char *a2, int a3);
// [0xa14d90] (436 bytes) std::vector<glf::debugger::Tweakable::Group *,std::allocator<glf::debugger::Tweakable::Group *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<glf::debugger::Tweakable::Group **,std::vector<glf::debugger::Tweakable::Group *,std::allocator<glf::debugger::Tweakable::Group *>>>,glf::debugger::Tweakable::Group * const&)
// void std::vector<glf::debugger::Tweakable::Group *>::_M_insert_aux(int a1, char *src, int *a3);
// [0xa14f50] (164 bytes) sub_A14F50
// int (**sub_A14F50(uint32_t *a1))(int);
// [0xa15000] (172 bytes) sub_A15000
// void sub_A15000(uint32_t *a1);
// [0xa150b0] (29 bytes) sub_A150B0
// void sub_A150B0(uint32_t *a1);
// [0xa150d0] (132 bytes) std::vector<Gangstar::Handle<Character,false>,std::allocator<Gangstar::Handle<Character,false>>>::erase(__gnu_cxx::__normal_iterator<Gangstar::Handle<Character,false>*,std::vector<Gangstar::Handle<Character,false>,std::allocator<Gangstar::Handle<Character,false>>>>)
// uint32_t *std::vector<Gangstar::Handle<Character,false>>::erase(uint32_t *a1, int a2, uint32_t *a3);
// [0xa15160] (567 bytes) std::_Rb_tree<std::string,std::pair<std::string const,Behavior *>,std::_Select1st<std::pair<std::string const,Behavior *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Behavior *>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,Behavior *>> *)
// void std::_Rb_tree<std::string,std::pair<std::string const,Behavior *>,std::_Select1st<std::pair<std::string const,Behavior *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Behavior *>>>::_M_erase( int a1, uint32_t *a2);
// [0xa153a0] (561 bytes) std::deque<glitch::scene::ISceneNode *,std::allocator<glitch::scene::ISceneNode *>>::push_back(glitch::scene::ISceneNode * const&)
// glitch::scene::ISceneNode **std::deque<glitch::scene::ISceneNode *>::push_back( std::deque<glitch::scene::ISceneNode *> *this, glitch::scene::ISceneNode **a2);
// [0xa155e0] (806 bytes) std::vector<PathNodeInfo,std::allocator<PathNodeInfo>>::_M_insert_aux(__gnu_cxx::__normal_iterator<PathNodeInfo*,std::vector<PathNodeInfo,std::allocator<PathNodeInfo>>>,PathNodeInfo const&)
// uint32_t *std::vector<PathNodeInfo>::_M_insert_aux(int a1, char *a2, int *a3);
// [0xa15910] (710 bytes) std::vector<PathEdgeInfo,std::allocator<PathEdgeInfo>>::_M_insert_aux(__gnu_cxx::__normal_iterator<PathEdgeInfo*,std::vector<PathEdgeInfo,std::allocator<PathEdgeInfo>>>,PathEdgeInfo const&)
// int std::vector<PathEdgeInfo>::_M_insert_aux(int a1, char *a2, uint32_t *a3);
// [0xa15be0] (1037 bytes) std::vector<Character::DebugWeaponInfo,GameAllocator<Character::DebugWeaponInfo>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Character::DebugWeaponInfo*,std::vector<Character::DebugWeaponInfo,GameAllocator<Character::DebugWeaponInfo>>>,Character::DebugWeaponInfo const&)
// uint32_t *std::vector<Character::DebugWeaponInfo,GameAllocator<Character::DebugWeaponInfo>>::_M_insert_aux( int *a1, char *a2, int *a3);
// [0xa15ff0] (176 bytes) std::_Deque_base<glitch::scene::ISceneNode *,std::allocator<glitch::scene::ISceneNode *>>::_M_initialize_map(unsigned int)
// int std::_Deque_base<glitch::scene::ISceneNode *>::_M_initialize_map( std::_Deque_base<glitch::scene::ISceneNode *> *this, unsigned int a2);
// [0xa160a0] (3584 bytes) std::vector<CameraParameters,std::allocator<CameraParameters>>::_M_fill_insert(__gnu_cxx::__normal_iterator<CameraParameters*,std::vector<CameraParameters,std::allocator<CameraParameters>>>,unsigned int,CameraParameters const&)
// void std::vector<CameraParameters>::_M_fill_insert(int a1, double *a2, unsigned int a3, double **a4);
// [0xa16ea0] (1150 bytes) std::vector<FadeContext,std::allocator<FadeContext>>::_M_fill_insert(__gnu_cxx::__normal_iterator<FadeContext*,std::vector<FadeContext,std::allocator<FadeContext>>>,unsigned int,FadeContext const&)
// void std::vector<FadeContext>::_M_fill_insert(int *a1, char *a2, unsigned int a3, int *a4);
// [0xa17320] (91 bytes) std::vector<int,GameAllocator<int>>::_M_check_len(unsigned int,char const*)const
// int std::vector<int,GameAllocator<int>>::_M_check_len( std::vector<int, GameAllocator<int>> *this, unsigned int a2, char *a3);
// [0xa17380] (2105 bytes) std::vector<BulletTraceManager::Bullet,std::allocator<BulletTraceManager::Bullet>>::_M_fill_insert(__gnu_cxx::__normal_iterator<BulletTraceManager::Bullet*,std::vector<BulletTraceManager::Bullet,std::allocator<BulletTraceManager::Bullet>>>,unsigned int,BulletTraceManager::Bullet const&)
// void std::vector<BulletTraceManager::Bullet>::_M_fill_insert(int *a1, int a2, unsigned int a3, int *a4);
// [0xa17bc0] (1067 bytes) std::vector<int,GameAllocator<int>>::_M_fill_insert(__gnu_cxx::__normal_iterator<int *,std::vector<int,GameAllocator<int>>>,unsigned int,int const&)
// void std::vector<int,GameAllocator<int>>::_M_fill_insert(int *a1, char *src, unsigned int a3, unsigned int *a4);
// [0xa17ff0] (1030 bytes) std::vector<CharacterTab::ModuleInfo,GameAllocator<CharacterTab::ModuleInfo>>::_M_fill_insert(__gnu_cxx::__normal_iterator<CharacterTab::ModuleInfo*,std::vector<CharacterTab::ModuleInfo,GameAllocator<CharacterTab::ModuleInfo>>>,unsigned int,CharacterTab::ModuleInfo const&)
// unsigned int std::vector<CharacterTab::ModuleInfo,GameAllocator<CharacterTab::ModuleInfo>>::_M_fill_insert( int *a1, size_t a2, unsigned int a3, int a4);
// [0xa18400] (225 bytes) void std::__insertion_sort<__gnu_cxx::__normal_iterator<PathFindingNodeDist<WaypointPathFindingEdge *> *,std::vector<PathFindingNodeDist<WaypointPathFindingEdge *>,std::allocator<PathFindingNodeDist<WaypointPathFindingEdge *>>>>,PathFindingNodeDistLt<WaypointPathFindingEdge *>>(__gnu_cxx::__normal_iterator<PathFindingNodeDist<WaypointPathFindingEdge *> *,std::vector<PathFindingNodeDist<WaypointPathFindingEdge *>,std::allocator<PathFindingNodeDist<WaypointPathFindingEdge *>>>>,__gnu_cxx::__normal_iterator<PathFindingNodeDist<WaypointPathFindingEdge *> *,std::vector<PathFindingNodeDist<WaypointPathFindingEdge *>,std::allocator<PathFindingNodeDist<WaypointPathFindingEdge *>>>>,PathFindingNodeDistLt<WaypointPathFindingEdge *>)
// int std::__insertion_sort<__gnu_cxx::__normal_iterator<PathFindingNodeDist<WaypointPathFindingEdge *> *,std::vector<PathFindingNodeDist<WaypointPathFindingEdge *>>>,PathFindingNodeDistLt<WaypointPathFindingEdge *>>( int a1, int a2);
