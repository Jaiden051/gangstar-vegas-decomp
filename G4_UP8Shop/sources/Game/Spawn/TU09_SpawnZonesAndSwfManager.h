#pragma once
// ============================================================================
// TU09_SpawnZonesAndSwfManager.h
// Complete Translation Unit [09/41]
// Binary Range in lib/x86/libGangstar4.so: 0x7148e0 .. 0x779ee0 (405 KB)
// Total Decompiled Functions in TU: 920 (100% coverage)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// Function Table in Translation Unit:
// [0x7148e0] (529 bytes) sub_7148E0
// int sub_7148E0();
// [0x714b20] (16 bytes) sub_714B20
// bool sub_714B20(uint32_t *a1, uint32_t *a2);
// [0x714b58] (1 bytes) nullsub_190
// void nullsub_190();
// [0x714b68] (1 bytes) nullsub_191
// void nullsub_191();
// [0x714b78] (1 bytes) nullsub_192
// void nullsub_192();
// [0x714b88] (1 bytes) nullsub_193
// void nullsub_193();
// [0x714b98] (1 bytes) nullsub_194
// void nullsub_194();
// [0x714ba0] (36 bytes) sub_714BA0
// bool sub_714BA0(int a1);
// [0x714bd0] (78 bytes) sub_714BD0
// int sub_714BD0(uint32_t *a1);
// [0x714c20] (78 bytes) sub_714C20
// int sub_714C20(uint32_t *a1);
// [0x714c70] (78 bytes) sub_714C70
// int sub_714C70(uint32_t *a1);
// [0x714cc0] (81 bytes) sub_714CC0
// int sub_714CC0(uint32_t *a1);
// [0x714d20] (81 bytes) sub_714D20
// int sub_714D20(uint32_t *a1);
// [0x714d88] (1 bytes) nullsub_195
// void nullsub_195();
// [0x714d98] (1 bytes) nullsub_196
// void nullsub_196();
// [0x714da0] (39 bytes) sub_714DA0
// bool sub_714DA0(int a1);
// [0x714dd0] (23 bytes) sub_714DD0
// int sub_714DD0(int a1);
// [0x714df0] (77 bytes) sub_714DF0
// int sub_714DF0(uint32_t *a1);
// [0x714e40] (47 bytes) sub_714E40
// int sub_714E40(uint32_t *a1);
// [0x714e70] (37 bytes) sub_714E70
// int sub_714E70(uint32_t *a1);
// [0x714ea8] (1 bytes) nullsub_197
// void nullsub_197();
// [0x714eb8] (1 bytes) nullsub_198
// void nullsub_198();
// [0x714ec8] (1 bytes) nullsub_199
// void nullsub_199();
// [0x714ed8] (1 bytes) nullsub_200
// void nullsub_200();
// [0x714ee0] (15 bytes) sub_714EE0
// int sub_714EE0(int a1);
// [0x714ef0] (10 bytes) sub_714EF0
// int sub_714EF0(int a1);
// [0x714f00] (12 bytes) sub_714F00
// int sub_714F00();
// [0x714f10] (15 bytes) sub_714F10
// int sub_714F10(int a1);
// [0x714f20] (58 bytes) sub_714F20
// int sub_714F20(int a1);
// [0x714f68] (1 bytes) nullsub_201
// void nullsub_201();
// [0x714f70] (15 bytes) sub_714F70
// int sub_714F70(int a1);
// [0x714f88] (1 bytes) nullsub_202
// void nullsub_202();
// [0x714f98] (1 bytes) nullsub_203
// void nullsub_203();
// [0x714fa8] (1 bytes) nullsub_204
// void nullsub_204();
// [0x714fb0] (83 bytes) sub_714FB0
// int sub_714FB0(int a1);
// [0x715010] (49 bytes) sub_715010
// int sub_715010(uint32_t *a1);
// [0x715050] (34 bytes) sub_715050
// bool sub_715050(int a1, int a2);
// [0x715080] (137 bytes) sub_715080
// int sub_715080(int *a1);
// [0x715110] (92 bytes) sub_715110
// uint16_t *sub_715110(int a1);
// [0x715170] (92 bytes) sub_715170
// uint16_t *sub_715170(int a1);
// [0x7151d0] (92 bytes) sub_7151D0
// uint16_t *sub_7151D0(int a1);
// [0x715230] (7 bytes) sub_715230
// int sub_715230(int a1);
// [0x715240] (51 bytes) sub_715240
// int sub_715240(uint32_t *a1);
// [0x715280] (115 bytes) sub_715280
// int sub_715280(uint32_t *a1);
// [0x715300] (92 bytes) sub_715300
// int sub_715300();
// [0x715360] (78 bytes) sub_715360
// int sub_715360(uint32_t *a1);
// [0x7153b0] (157 bytes) sub_7153B0
// int sub_7153B0(uint32_t *a1);
// [0x715450] (109 bytes) sub_715450
// int sub_715450(int a1, int a2);
// [0x7154c0] (374 bytes) sub_7154C0
// int sub_7154C0(int a1, char *a2);
// [0x715640] (251 bytes) sub_715640
// int sub_715640(int a1);
// [0x715740] (1244 bytes) sub_715740
// int sub_715740(float *a1, float *a2);
// [0x715c20] (218 bytes) sub_715C20
// int sub_715C20(char **a1, char **a2, int a3);
// [0x715d00] (382 bytes) sub_715D00
// size_t sub_715D00(int *a1, uint32_t *a2);
// [0x715e80] (382 bytes) sub_715E80
// size_t sub_715E80(int *a1, uint32_t *a2);
// [0x716000] (524 bytes) sub_716000
// int sub_716000(int a1, uint32_t *a2);
// [0x716210] (7 bytes) sub_716210
// int sub_716210(int a1);
// [0x716220] (72 bytes) sub_716220
// void sub_716220(uint32_t *a1);
// [0x716270] (71 bytes) sub_716270
// void sub_716270(uint32_t *a1);
// [0x7162c0] (242 bytes) sub_7162C0
// __m128 sub_7162C0(float *a1);
// [0x7163c0] (82 bytes) sub_7163C0
// int *sub_7163C0(int *result);
// [0x716420] (371 bytes) sub_716420
// void sub_716420(int a1, uint32_t *a2);
// [0x7165a0] (723 bytes) sub_7165A0
// int sub_7165A0(int *a1, int a2, int a3);
// [0x716880] (650 bytes) sub_716880
// uint32_t *sub_716880(uint32_t **a1);
// [0x716b10] (420 bytes) sub_716B10
// void sub_716B10(int a1, uint32_t *a2);
// [0x716cc0] (345 bytes) sub_716CC0
// int sub_716CC0(int a1);
// [0x716e20] (198 bytes) sub_716E20
// void sub_716E20(int a1, float a2);
// [0x716ef0] (205 bytes) sub_716EF0
// int sub_716EF0(int result, int a2);
// [0x716fc0] (740 bytes) sub_716FC0
// uint32_t *sub_716FC0(uint32_t *result, uint8_t (*a2)(uint32_t *, uint32_t *));
// [0x7172b0] (329 bytes) sub_7172B0
// int sub_7172B0(int a1, uint32_t *a2, const char **a3, const char **a4);
// [0x717400] (862 bytes) sub_717400
// int sub_717400(const char **a1, const char **a2);
// [0x717760] (7 bytes) sub_717760
// int sub_717760(int a1);
// [0x717770] (188 bytes) sub_717770
// void sub_717770(uint32_t *a1);
// [0x717830] (131 bytes) sub_717830
// uint16_t *sub_717830(int a1);
// [0x7178c0] (637 bytes) sub_7178C0
// float *sub_7178C0(float *a1, float *a2, float *a3, float *a4);
// [0x717b40] (467 bytes) sub_717B40
// int sub_717B40(int *a1);
// [0x717d20] (190 bytes) sub_717D20
// int sub_717D20(int a1);
// [0x717de0] (190 bytes) sub_717DE0
// int sub_717DE0(int a1);
// [0x717ea0] (7 bytes) sub_717EA0
// int sub_717EA0(int a1);
// [0x717eb0] (180 bytes) sub_717EB0
// int sub_717EB0(uint32_t *a1);
// [0x717f70] (7 bytes) sub_717F70
// int sub_717F70(int a1);
// [0x717f80] (228 bytes) sub_717F80
// void sub_717F80(uint32_t *a1);
// [0x718070] (7 bytes) sub_718070
// int sub_718070(int a1);
// [0x718080] (188 bytes) sub_718080
// void sub_718080(uint32_t *a1);
// [0x718140] (7 bytes) sub_718140
// int sub_718140(int a1);
// [0x718150] (188 bytes) sub_718150
// void sub_718150(uint32_t *a1);
// [0x718210] (7 bytes) sub_718210
// int sub_718210(int a1);
// [0x718220] (180 bytes) sub_718220
// int sub_718220(uint32_t *a1);
// [0x7182e0] (7 bytes) sub_7182E0
// int sub_7182E0(int a1);
// [0x7182f0] (220 bytes) sub_7182F0
// int sub_7182F0(uint32_t *a1);
// [0x7183d0] (7 bytes) sub_7183D0
// int sub_7183D0(int a1);
// [0x7183e0] (180 bytes) sub_7183E0
// int sub_7183E0(uint32_t *a1);
// [0x7184a0] (7 bytes) sub_7184A0
// int sub_7184A0(int a1);
// [0x7184b0] (151 bytes) sub_7184B0
// void sub_7184B0(void *a1);
// [0x718550] (129 bytes) sub_718550
// int sub_718550(int a1);
// [0x7185e0] (688 bytes) sub_7185E0
// int *sub_7185E0(int *a1, uint32_t *a2);
// [0x718890] (249 bytes) sub_718890
// int sub_718890(uint32_t *a1);
// [0x718990] (10 bytes) sub_718990
// int sub_718990(int a1, int a2, int a3);
// [0x7189a0] (409 bytes) sub_7189A0
// void sub_7189A0(int a1, int a2, int a3);
// [0x718b40] (6422 bytes) sub_718B40
// int sub_718B40(int result, int a2, int a3, int a4);
// [0x71a460] (1769 bytes) sub_71A460
// int sub_71A460(uint32_t *a1, uint32_t *a2);
// [0x71ab50] (265 bytes) sub_71AB50
// int sub_71AB50(const char **a1);
// [0x71ac60] (1174 bytes) sub_71AC60
// void sub_71AC60(int *a1);
// [0x71b100] (1062 bytes) sub_71B100
// int sub_71B100(uint32_t *a1);
// [0x71b530] (837 bytes) sub_71B530
// 0x71b530 sub_71B530
// [0x71b880] (491 bytes) sub_71B880
// int sub_71B880(int *a1, int a2);
// [0x71ba70] (598 bytes) sub_71BA70
// int sub_71BA70(int a1);
// [0x71bcd0] (405 bytes) sub_71BCD0
// int sub_71BCD0(int a1, float *a2);
// [0x71be70] (257 bytes) sub_71BE70
// int *sub_71BE70(int a1);
// [0x71bf80] (433 bytes) sub_71BF80
// int sub_71BF80(int a1);
// [0x71c140] (7 bytes) sub_71C140
// int sub_71C140(int a1);
// [0x71c150] (192 bytes) sub_71C150
// void (__noreturn **sub_71C150(int a1))();
// [0x71c210] (7 bytes) sub_71C210
// int sub_71C210(int a1);
// [0x71c220] (143 bytes) sub_71C220
// void (__noreturn **sub_71C220(int a1))();
// [0x71c2b0] (7 bytes) sub_71C2B0
// int sub_71C2B0(int a1);
// [0x71c2c0] (151 bytes) sub_71C2C0
// void sub_71C2C0(void *a1);
// [0x71c360] (7 bytes) sub_71C360
// int sub_71C360(int a1);
// [0x71c370] (143 bytes) sub_71C370
// void (__noreturn **sub_71C370(int a1))();
// [0x71c400] (7 bytes) sub_71C400
// int sub_71C400(int a1);
// [0x71c410] (151 bytes) sub_71C410
// void sub_71C410(void *a1);
// [0x71c4b0] (7 bytes) sub_71C4B0
// int sub_71C4B0(int a1);
// [0x71c4c0] (143 bytes) sub_71C4C0
// void (__noreturn **sub_71C4C0(int a1))();
// [0x71c550] (7 bytes) sub_71C550
// int sub_71C550(int a1);
// [0x71c560] (175 bytes) sub_71C560
// void (__noreturn **sub_71C560(int a1))();
// [0x71c610] (7 bytes) sub_71C610
// int sub_71C610(int a1);
// [0x71c620] (175 bytes) sub_71C620
// void (__noreturn **sub_71C620(int a1))();
// [0x71c6d0] (7 bytes) sub_71C6D0
// int sub_71C6D0(int a1);
// [0x71c6e0] (183 bytes) sub_71C6E0
// void sub_71C6E0(char *a1);
// [0x71c7a0] (7 bytes) sub_71C7A0
// int sub_71C7A0(int a1);
// [0x71c7b0] (375 bytes) sub_71C7B0
// void (__noreturn **sub_71C7B0(int a1))();
// [0x71c930] (7 bytes) sub_71C930
// int sub_71C930(int a1);
// [0x71c940] (183 bytes) sub_71C940
// void sub_71C940(char *a1);
// [0x71ca00] (7 bytes) sub_71CA00
// int sub_71CA00(int a1);
// [0x71ca10] (175 bytes) sub_71CA10
// void (__noreturn **sub_71CA10(int a1))();
// [0x71cac0] (7 bytes) sub_71CAC0
// int sub_71CAC0(int a1);
// [0x71cad0] (183 bytes) sub_71CAD0
// void sub_71CAD0(char *a1);
// [0x71cb90] (7 bytes) sub_71CB90
// int sub_71CB90(int a1);
// [0x71cba0] (383 bytes) sub_71CBA0
// void sub_71CBA0(char *a1);
// [0x71cd20] (7 bytes) sub_71CD20
// int sub_71CD20(int a1);
// [0x71cd30] (216 bytes) sub_71CD30
// void (__noreturn **sub_71CD30(int a1))();
// [0x71ce10] (7 bytes) sub_71CE10
// int sub_71CE10(int a1);
// [0x71ce20] (224 bytes) sub_71CE20
// void sub_71CE20(char *a1);
// [0x71cf00] (7 bytes) sub_71CF00
// int sub_71CF00(int a1);
// [0x71cf10] (200 bytes) sub_71CF10
// void sub_71CF10(void *a1);
// [0x71cfe0] (7 bytes) sub_71CFE0
// int sub_71CFE0(int a1);
// [0x71cff0] (256 bytes) sub_71CFF0
// void (__noreturn **sub_71CFF0(int a1))();
// [0x71d0f0] (7 bytes) sub_71D0F0
// int sub_71D0F0(int a1);
// [0x71d100] (264 bytes) sub_71D100
// void sub_71D100(char *a1);
// [0x71d210] (345 bytes) sub_71D210
// int sub_71D210(int a1);
// [0x71d370] (865 bytes) sub_71D370
// int sub_71D370(int a1);
// [0x71d6e0] (357 bytes) sub_71D6E0
// int sub_71D6E0(int a1);
// [0x71d850] (601 bytes) sub_71D850
// int sub_71D850(int a1);
// [0x71dab0] (1713 bytes) sub_71DAB0
// int sub_71DAB0(int a1);
// [0x71e170] (729 bytes) sub_71E170
// int sub_71E170(int a1);
// [0x71e450] (729 bytes) sub_71E450
// int sub_71E450(int a1);
// [0x71e730] (1665 bytes) sub_71E730
// int sub_71E730(int a1);
// [0x71edc0] (3113 bytes) sub_71EDC0
// int sub_71EDC0(int a1);
// [0x71f9f0] (310 bytes) sub_71F9F0
// int sub_71F9F0(int a1);
// [0x71fb30] (465 bytes) sub_71FB30
// int sub_71FB30(int a1);
// [0x71fd10] (310 bytes) sub_71FD10
// int sub_71FD10(int a1);
// [0x71fe50] (162 bytes) sub_71FE50
// int (**sub_71FE50(int a1))(int);
// [0x71ff00] (569 bytes) sub_71FF00
// int sub_71FF00(int a1);
// [0x720140] (162 bytes) sub_720140
// void sub_720140(char *a1);
// [0x7201f0] (397 bytes) sub_7201F0
// int sub_7201F0(int a1);
// [0x720380] (1341 bytes) sub_720380
// int sub_720380(float *a1);
// [0x7208d0] (258 bytes) sub_7208D0
// int *sub_7208D0(int *a1, int a2);
// [0x7209e0] (328 bytes) sub_7209E0
// int sub_7209E0(int a1, gameswf::ASArray *a2, const char **a3, const char **a4);
// [0x720b38] (1 bytes) nullsub_205
// void nullsub_205();
// [0x720b40] (169 bytes) sub_720B40
// int sub_720B40(gameswf::ASValue **a1);
// [0x720bf0] (1096 bytes) sub_720BF0
// int sub_720BF0(int a1);
// [0x721040] (201 bytes) sub_721040
// int sub_721040(int a1);
// [0x721110] (397 bytes) sub_721110
// uint32_t *sub_721110(int a1);
// [0x7212a0] (103 bytes) sub_7212A0
// int sub_7212A0(int a1);
// [0x721310] (263 bytes) sub_721310
// int sub_721310(int a1);
// [0x721420] (2860 bytes) sub_721420
// int sub_721420(int a1);
// [0x721f50] (2005 bytes) sub_721F50
// int sub_721F50(int a1);
// [0x722730] (653 bytes) sub_722730
// int sub_722730(int a1);
// [0x7229c0] (825 bytes) sub_7229C0
// int *sub_7229C0(int a1);
// [0x722d00] (844 bytes) sub_722D00
// int *sub_722D00(int a1);
// [0x723050] (332 bytes) sub_723050
// int sub_723050(int a1, gameswf::ASArray *a2, float *a3);
// [0x7231a0] (197 bytes) sub_7231A0
// int sub_7231A0(int a1, int a2, int a3);
// [0x723270] (2533 bytes) sub_723270
// void sub_723270(int a1);
// [0x723c60] (610 bytes) sub_723C60
// int sub_723C60(int a1, gameswf::ASArray *a2, uint32_t *a3, int a4);
// [0x723ed0] (294 bytes) sub_723ED0
// int sub_723ED0(int a1, int a2, int a3, char a4);
// [0x724000] (265 bytes) sub_724000
// void sub_724000(int a1);
// [0x724110] (61 bytes) sub_724110
// int sub_724110(gameswf::ASValue **a1);
// [0x724150] (50 bytes) sub_724150
// int sub_724150(gameswf::ASValue **a1);
// [0x724190] (44 bytes) sub_724190
// int sub_724190(gameswf::ASValue **a1);
// [0x7241c0] (59 bytes) sub_7241C0
// int sub_7241C0(gameswf::ASValue **a1);
// [0x724200] (613 bytes) sub_724200
// int sub_724200(int a1);
// [0x724470] (477 bytes) sub_724470
// int sub_724470(int a1);
// [0x724650] (953 bytes) sub_724650
// int sub_724650(int a1);
// [0x724a10] (177 bytes) sub_724A10
// int sub_724A10(gameswf::ASValue **a1);
// [0x724ad0] (56 bytes) sub_724AD0
// int sub_724AD0(int a1);
// [0x724b10] (49 bytes) sub_724B10
// int sub_724B10(gameswf::ASValue **a1);
// [0x724b50] (169 bytes) sub_724B50
// int sub_724B50(gameswf::ASValue **a1);
// [0x724c00] (38 bytes) sub_724C00
// int sub_724C00();
// [0x724c38] (1 bytes) nullsub_206
// void nullsub_206();
// [0x724c40] (473 bytes) sub_724C40
// uint32_t *sub_724C40(int a1);
// [0x724e20] (951 bytes) sub_724E20
// int sub_724E20(int a1);
// [0x7251e0] (497 bytes) sub_7251E0
// uint32_t *sub_7251E0(int a1);
// [0x7253e0] (1213 bytes) sub_7253E0
// int sub_7253E0(int a1);
// [0x7258a0] (94 bytes) sub_7258A0
// int sub_7258A0(int a1);
// [0x725900] (50 bytes) sub_725900
// int sub_725900(gameswf::ASValue **a1);
// [0x725940] (46 bytes) sub_725940
// int sub_725940(gameswf::ASValue **a1);
// [0x725970] (50 bytes) sub_725970
// int sub_725970(gameswf::ASValue **a1);
// [0x7259b0] (94 bytes) sub_7259B0
// int sub_7259B0(int a1);
// [0x725a10] (158 bytes) sub_725A10
// int sub_725A10();
// [0x725ab0] (150 bytes) sub_725AB0
// int sub_725AB0();
// [0x725b50] (150 bytes) sub_725B50
// int sub_725B50();
// [0x725bf0] (150 bytes) sub_725BF0
// int sub_725BF0();
// [0x725c90] (185 bytes) sub_725C90
// int sub_725C90(gameswf::ASValue **a1);
// [0x725d50] (175 bytes) sub_725D50
// int sub_725D50(int a1);
// [0x725e00] (44 bytes) sub_725E00
// int sub_725E00(gameswf::ASValue **a1);
// [0x725e30] (52 bytes) sub_725E30
// int sub_725E30(gameswf::ASValue **a1);
// [0x725e70] (126 bytes) sub_725E70
// int sub_725E70(int a1);
// [0x725ef0] (50 bytes) sub_725EF0
// int sub_725EF0(gameswf::ASValue **a1);
// [0x725f30] (120 bytes) sub_725F30
// int sub_725F30(long double a1, int a2);
// [0x725fb0] (27 bytes) sub_725FB0
// int sub_725FB0();
// [0x725fd0] (909 bytes) sub_725FD0
// int sub_725FD0(int a1);
// [0x726360] (98 bytes) sub_726360
// int sub_726360(gameswf::ASValue **a1);
// [0x7263d0] (518 bytes) sub_7263D0
// int sub_7263D0(int a1, gameswf::ASArray *a2, char *s, int a4, int a5, char *a6);
// [0x7265e0] (675 bytes) sub_7265E0
// int sub_7265E0(int a1);
// [0x726890] (273 bytes) sub_726890
// void sub_726890(int a1);
// [0x7269b0] (159 bytes) sub_7269B0
// int sub_7269B0(gameswf::ASValue **a1);
// [0x726a50] (193 bytes) sub_726A50
// int sub_726A50(gameswf::ASValue **a1);
// [0x726b20] (38 bytes) sub_726B20
// int sub_726B20();
// [0x726b50] (58 bytes) sub_726B50
// int sub_726B50(gameswf::ASValue **a1);
// [0x726b90] (169 bytes) sub_726B90
// int sub_726B90(gameswf::ASValue **a1);
// [0x726c40] (373 bytes) sub_726C40
// void sub_726C40(int a1);
// [0x726dc0] (309 bytes) sub_726DC0
// void sub_726DC0(int a1);
// [0x726f00] (62 bytes) sub_726F00
// int sub_726F00(gameswf::ASValue **a1);
// [0x726f40] (52 bytes) sub_726F40
// int sub_726F40(gameswf::ASValue **a1);
// [0x726f80] (198 bytes) sub_726F80
// int sub_726F80();
// [0x727050] (101 bytes) sub_727050
// int sub_727050(int a1);
// [0x7270c0] (43 bytes) sub_7270C0
// int sub_7270C0();
// [0x7270f0] (177 bytes) sub_7270F0
// int sub_7270F0(gameswf::ASValue **a1);
// [0x7271b0] (49 bytes) sub_7271B0
// int sub_7271B0(gameswf::ASValue **a1);
// [0x7271f0] (56 bytes) sub_7271F0
// int sub_7271F0(int a1);
// [0x727230] (100 bytes) sub_727230
// int sub_727230(gameswf::ASValue **a1);
// [0x7272a0] (91 bytes) sub_7272A0
// int sub_7272A0(gameswf::ASValue **a1);
// [0x727300] (93 bytes) sub_727300
// int sub_727300(int a1);
// [0x727360] (103 bytes) sub_727360
// int sub_727360(gameswf::ASValue **a1);
// [0x7273d0] (442 bytes) sub_7273D0
// void sub_7273D0(int a1);
// [0x727590] (76 bytes) sub_727590
// int sub_727590(int a1);
// [0x7275e0] (61 bytes) sub_7275E0
// int sub_7275E0(gameswf::ASValue **a1);
// [0x727620] (52 bytes) sub_727620
// int sub_727620(gameswf::ASValue **a1);
// [0x727660] (52 bytes) sub_727660
// int sub_727660(gameswf::ASValue **a1);
// [0x7276a0] (52 bytes) sub_7276A0
// int sub_7276A0(gameswf::ASValue **a1);
// [0x7276e0] (59 bytes) sub_7276E0
// int sub_7276E0(gameswf::ASValue **a1);
// [0x727720] (35 bytes) sub_727720
// int sub_727720(int a1);
// [0x727750] (244 bytes) sub_727750
// int sub_727750(int a1);
// [0x727858] (1 bytes) nullsub_207
// void nullsub_207();
// [0x727860] (201 bytes) sub_727860
// void sub_727860(int a1);
// [0x727930] (217 bytes) sub_727930
// int sub_727930(int a1);
// [0x727a10] (44 bytes) sub_727A10
// int sub_727A10(gameswf::ASValue **a1);
// [0x727a40] (169 bytes) sub_727A40
// int sub_727A40(gameswf::ASValue **a1);
// [0x727af0] (44 bytes) sub_727AF0
// int sub_727AF0(gameswf::ASValue **a1);
// [0x727b28] (1 bytes) nullsub_208
// void nullsub_208();
// [0x727b38] (1 bytes) nullsub_209
// void nullsub_209();
// [0x727b48] (1 bytes) nullsub_210
// void nullsub_210();
// [0x727b50] (425 bytes) sub_727B50
// int sub_727B50();
// [0x727d00] (38 bytes) sub_727D00
// int sub_727D00();
// [0x727d30] (38 bytes) sub_727D30
// int sub_727D30();
// [0x727d68] (1 bytes) nullsub_211
// void nullsub_211();
// [0x727d70] (417 bytes) sub_727D70
// int sub_727D70();
// [0x727f28] (1 bytes) nullsub_212
// void nullsub_212();
// [0x727f30] (44 bytes) sub_727F30
// int sub_727F30(gameswf::ASValue **a1);
// [0x727f60] (169 bytes) sub_727F60
// int sub_727F60(gameswf::ASValue **a1);
// [0x728010] (439 bytes) sub_728010
// int sub_728010(gameswf::ASValue **a1);
// [0x7281d0] (185 bytes) sub_7281D0
// int sub_7281D0(gameswf::ASValue **a1);
// [0x728290] (142 bytes) sub_728290
// int sub_728290(gameswf::ASValue **a1);
// [0x728320] (177 bytes) sub_728320
// int sub_728320(gameswf::ASValue **a1);
// [0x7283e0] (862 bytes) sub_7283E0
// void sub_7283E0(int a1);
// [0x728740] (405 bytes) sub_728740
// int sub_728740(int a1, int a2);
// [0x7288e0] (3701 bytes) sub_7288E0
// int sub_7288E0(int a1);
// [0x729760] (190 bytes) sub_729760
// int sub_729760(int a1);
// [0x729828] (1 bytes) nullsub_213
// void nullsub_213();
// [0x729838] (1 bytes) nullsub_214
// void nullsub_214();
// [0x729848] (1 bytes) nullsub_215
// void nullsub_215();
// [0x729850] (684 bytes) sub_729850
// void sub_729850(int a1);
// [0x729b00] (2763 bytes) sub_729B00
// int sub_729B00(int a1);
// [0x72a5d0] (317 bytes) sub_72A5D0
// int sub_72A5D0(int a1);
// [0x72a710] (861 bytes) sub_72A710
// int sub_72A710(int a1);
// [0x72aa70] (672 bytes) sub_72AA70
// int sub_72AA70(int a1);
// [0x72ad10] (94 bytes) sub_72AD10
// int sub_72AD10(int a1);
// [0x72ad70] (177 bytes) sub_72AD70
// int sub_72AD70(gameswf::ASValue **a1);
// [0x72ae30] (565 bytes) sub_72AE30
// int sub_72AE30(gameswf::ASValue **a1);
// [0x72b070] (51 bytes) sub_72B070
// int sub_72B070(gameswf::ASValue **a1);
// [0x72b0b0] (509 bytes) sub_72B0B0
// void sub_72B0B0(int a1);
// [0x72b2b0] (629 bytes) sub_72B2B0
// void sub_72B2B0(int a1);
// [0x72b530] (645 bytes) sub_72B530
// int sub_72B530(int a1);
// [0x72b7c0] (493 bytes) sub_72B7C0
// int sub_72B7C0(int a1);
// [0x72b9b0] (813 bytes) sub_72B9B0
// int sub_72B9B0(int a1);
// [0x72bce0] (177 bytes) sub_72BCE0
// int sub_72BCE0(gameswf::ASValue **a1);
// [0x72bda0] (301 bytes) sub_72BDA0
// int sub_72BDA0(int a1);
// [0x72bed0] (309 bytes) sub_72BED0
// int sub_72BED0(int a1);
// [0x72c010] (461 bytes) sub_72C010
// int sub_72C010(int a1);
// [0x72c1e0] (541 bytes) sub_72C1E0
// int sub_72C1E0(int a1);
// [0x72c400] (59 bytes) sub_72C400
// int sub_72C400(gameswf::ASValue **a1);
// [0x72c440] (140 bytes) sub_72C440
// int sub_72C440(gameswf::ASValue **a1);
// [0x72c4d0] (148 bytes) sub_72C4D0
// int sub_72C4D0(gameswf::ASValue **a1);
// [0x72c570] (109 bytes) sub_72C570
// int sub_72C570(int a1);
// [0x72c5e0] (148 bytes) sub_72C5E0
// int sub_72C5E0(gameswf::ASValue **a1);
// [0x72c680] (109 bytes) sub_72C680
// int sub_72C680(int a1);
// [0x72c6f0] (140 bytes) sub_72C6F0
// int sub_72C6F0(gameswf::ASValue **a1);
// [0x72c780] (124 bytes) sub_72C780
// void sub_72C780(int a1);
// [0x72c800] (191 bytes) sub_72C800
// int sub_72C800(int a1);
// [0x72c8c0] (140 bytes) sub_72C8C0
// int sub_72C8C0(gameswf::ASValue **a1);
// [0x72c950] (156 bytes) sub_72C950
// int *sub_72C950(int a1);
// [0x72c9f0] (148 bytes) sub_72C9F0
// int sub_72C9F0(gameswf::ASValue **a1);
// [0x72ca90] (109 bytes) sub_72CA90
// int sub_72CA90(int a1);
// [0x72cb00] (109 bytes) sub_72CB00
// int sub_72CB00(int a1);
// [0x72cb70] (217 bytes) sub_72CB70
// void sub_72CB70(gameswf::ASValue **a1);
// [0x72cc50] (269 bytes) sub_72CC50
// void sub_72CC50(int a1);
// [0x72cd60] (405 bytes) sub_72CD60
// int sub_72CD60(int a1);
// [0x72cf00] (150 bytes) sub_72CF00
// int sub_72CF00();
// [0x72cfa0] (169 bytes) sub_72CFA0
// int sub_72CFA0(gameswf::ASValue **a1);
// [0x72d050] (150 bytes) sub_72D050
// int *sub_72D050();
// [0x72d0f0] (169 bytes) sub_72D0F0
// int sub_72D0F0(gameswf::ASValue **a1);
// [0x72d1a0] (193 bytes) sub_72D1A0
// int (**sub_72D1A0())(int);
// [0x72d270] (169 bytes) sub_72D270
// int sub_72D270(gameswf::ASValue **a1);
// [0x72d320] (64 bytes) sub_72D320
// int sub_72D320(gameswf::ASValue **a1);
// [0x72d360] (62 bytes) sub_72D360
// int sub_72D360(gameswf::ASValue **a1);
// [0x72d3a0] (51 bytes) sub_72D3A0
// int sub_72D3A0(gameswf::ASValue **a1);
// [0x72d3e0] (70 bytes) sub_72D3E0
// int sub_72D3E0(gameswf::ASValue **a1);
// [0x72d430] (412 bytes) sub_72D430
// int sub_72D430(int a1);
// [0x72d5d0] (405 bytes) sub_72D5D0
// int sub_72D5D0(int a1);
// [0x72d770] (669 bytes) sub_72D770
// int sub_72D770(int a1);
// [0x72da10] (50 bytes) sub_72DA10
// int sub_72DA10(gameswf::ASValue **a1);
// [0x72da50] (311 bytes) sub_72DA50
// int sub_72DA50(gameswf::ASValue **a1);
// [0x72db90] (707 bytes) sub_72DB90
// int sub_72DB90(gameswf::ASValue **a1);
// [0x72de60] (667 bytes) sub_72DE60
// int sub_72DE60(gameswf::ASValue **a1);
// [0x72e100] (707 bytes) sub_72E100
// int sub_72E100();
// [0x72e3d0] (863 bytes) sub_72E3D0
// int sub_72E3D0(int a1);
// [0x72e730] (297 bytes) sub_72E730
// int sub_72E730(gameswf::ASValue **a1);
// [0x72e860] (312 bytes) sub_72E860
// int sub_72E860(int a1);
// [0x72e9a0] (337 bytes) sub_72E9A0
// int sub_72E9A0(int a1, uint32_t *a2, const char **a3, const char **a4);
// [0x72ee70] (135 bytes) sub_72EE70
// int sub_72EE70(int a1);
// [0x72ef00] (91 bytes) sub_72EF00
// int sub_72EF00(gameswf::ASValue **a1);
// [0x72ef60] (46 bytes) sub_72EF60
// int sub_72EF60(gameswf::ASValue **a1);
// [0x72ef90] (53 bytes) sub_72EF90
// int sub_72EF90(gameswf::ASValue **a1);
// [0x72efd0] (142 bytes) sub_72EFD0
// int sub_72EFD0(gameswf::ASValue **a1);
// [0x72f060] (118 bytes) sub_72F060
// int sub_72F060(int a1);
// [0x72f0e0] (158 bytes) sub_72F0E0
// int sub_72F0E0(gameswf::ASValue **a1);
// [0x72f180] (134 bytes) sub_72F180
// int sub_72F180(int a1);
// [0x72f210] (185 bytes) sub_72F210
// int sub_72F210(gameswf::ASValue **a1);
// [0x72f2d0] (185 bytes) sub_72F2D0
// int sub_72F2D0(gameswf::ASValue **a1);
// [0x72f390] (169 bytes) sub_72F390
// int sub_72F390(gameswf::ASValue **a1);
// [0x72f440] (158 bytes) sub_72F440
// int sub_72F440(gameswf::ASValue **a1);
// [0x72f4e0] (158 bytes) sub_72F4E0
// int sub_72F4E0(gameswf::ASValue **a1);
// [0x72f580] (158 bytes) sub_72F580
// int sub_72F580(gameswf::ASValue **a1);
// [0x72f620] (633 bytes) sub_72F620
// int sub_72F620(int a1);
// [0x72f8a8] (1 bytes) nullsub_216
// void nullsub_216();
// [0x72f8b0] (1010 bytes) sub_72F8B0
// int sub_72F8B0(int a1);
// [0x72fcb8] (1 bytes) nullsub_217
// void nullsub_217();
// [0x72fcc8] (1 bytes) nullsub_218
// void nullsub_218();
// [0x72fcd8] (1 bytes) nullsub_219
// void nullsub_219();
// [0x72fce0] (177 bytes) sub_72FCE0
// int sub_72FCE0(gameswf::ASValue **a1);
// [0x72fda0] (177 bytes) sub_72FDA0
// int sub_72FDA0(gameswf::ASValue **a1);
// [0x72fe60] (177 bytes) sub_72FE60
// int sub_72FE60(gameswf::ASValue **a1);
// [0x72ff20] (177 bytes) sub_72FF20
// int sub_72FF20(gameswf::ASValue **a1);
// [0x72ffe0] (177 bytes) sub_72FFE0
// int sub_72FFE0(gameswf::ASValue **a1);
// [0x7300a0] (326 bytes) sub_7300A0
// int sub_7300A0(int a1, gameswf::ASArray *a2, const char **a3, const char **a4);
// [0x7301f0] (50 bytes) sub_7301F0
// int sub_7301F0(gameswf::ASValue **a1);
// [0x730230] (200 bytes) sub_730230
// int sub_730230(int a1);
// [0x730300] (131 bytes) sub_730300
// int sub_730300(int a1);
// [0x730390] (49 bytes) sub_730390
// int sub_730390(gameswf::ASValue **a1);
// [0x7303d0] (981 bytes) sub_7303D0
// int sub_7303D0(int a1);
// [0x7307b0] (1471 bytes) sub_7307B0
// int (**sub_7307B0(long double a1, int a2))(int);
// [0x730d70] (647 bytes) sub_730D70
// void sub_730D70(long double a1, uint32_t *a2);
// [0x731000] (289 bytes) sub_731000
// int sub_731000(int a1);
// [0x731130] (289 bytes) sub_731130
// int (**sub_731130(long double a1, int a2))(int);
// [0x731260] (127 bytes) sub_731260
// int sub_731260(gameswf::ASValue **a1);
// [0x7312e0] (85 bytes) sub_7312E0
// int sub_7312E0(int a1);
// [0x731340] (177 bytes) sub_731340
// int sub_731340(gameswf::ASValue **a1);
// [0x731400] (190 bytes) sub_731400
// int sub_731400(int a1);
// [0x7314c0] (856 bytes) sub_7314C0
// int sub_7314C0(gameswf::ASValue **a1);
// [0x731820] (44 bytes) sub_731820
// int sub_731820(gameswf::ASValue **a1);
// [0x731850] (264 bytes) sub_731850
// int sub_731850(int a1);
// [0x731960] (62 bytes) sub_731960
// int sub_731960(gameswf::ASValue **a1);
// [0x7319a0] (308 bytes) sub_7319A0
// int sub_7319A0(int a1);
// [0x731ae0] (177 bytes) sub_731AE0
// int sub_731AE0(gameswf::ASValue **a1);
// [0x731ba0] (1957 bytes) sub_731BA0
// int sub_731BA0(int a1);
// [0x732350] (87 bytes) sub_732350
// int sub_732350(int a1);
// [0x7323b0] (91 bytes) sub_7323B0
// int sub_7323B0(int a1);
// [0x732410] (192 bytes) sub_732410
// int sub_732410(int a1);
// [0x7324d0] (44 bytes) sub_7324D0
// int sub_7324D0(gameswf::ASValue **a1);
// [0x732500] (771 bytes) sub_732500
// int sub_732500(gameswf::ASValue **a1);
// [0x732810] (585 bytes) sub_732810
// int sub_732810();
// [0x732a60] (34 bytes) sub_732A60
// int sub_732A60();
// [0x732a90] (49 bytes) sub_732A90
// int sub_732A90(gameswf::ASValue **a1);
// [0x732ad0] (152 bytes) sub_732AD0
// int sub_732AD0(int a1);
// [0x732b70] (68 bytes) sub_732B70
// int sub_732B70(int a1, int a2, int a3, int a4);
// [0x732bc0] (111 bytes) sub_732BC0
// int sub_732BC0(int a1, int a2, ...);
// [0x732c30] (122 bytes) sub_732C30
// uint32_t *sub_732C30(uint32_t *a1, int a2, int a3);
// [0x732cb0] (22 bytes) sub_732CB0
// int sub_732CB0();
// [0x732cd8] (1 bytes) nullsub_220
// void nullsub_220();
// [0x732ce0] (26 bytes) sub_732CE0
// int sub_732CE0();
// [0x732d00] (318 bytes) sub_732D00
// int sub_732D00(int a1);
// [0x732e40] (469 bytes) sub_732E40
// int sub_732E40(int a1);
// [0x733020] (1593 bytes) sub_733020
// int sub_733020(int a1);
// [0x733680] (479 bytes) sub_733680
// int *sub_733680(long double a1, int a2, int a3);
// [0x733860] (206 bytes) sub_733860
// unsigned int sub_733860(int a1);
// [0x733930] (35 bytes) sub_733930
// unsigned int sub_733930(int a1, unsigned int a2);
// [0x7339a0] (158 bytes) sub_7339A0
// int sub_7339A0(int a1, gameswf::RenderFX *a2);
// [0x733a40] (30 bytes) sub_733A40
// bool sub_733A40(int a1, unsigned int a2);
// [0x733a60] (19 bytes) sub_733A60
// int sub_733A60(int a1, unsigned int a2);
// [0x733a80] (23 bytes) sub_733A80
// int sub_733A80(int a1);
// [0x733aa0] (33 bytes) sub_733AA0
// int sub_733AA0(int a1);
// [0x733ad0] (81 bytes) sub_733AD0
// int sub_733AD0(int a1, int a2);
// [0x733b30] (92 bytes) sub_733B30
// int sub_733B30(int a1, gameswf::RenderFX *a2, int a3, uint8_t a4);
// [0x733ba0] (198 bytes) sub_733BA0
// int sub_733BA0(int a1, int *a2);
// [0x733c70] (242 bytes) sub_733C70
// gameswf::RenderFX *sub_733C70(int a1);
// [0x733d70] (88 bytes) sub_733D70
// int sub_733D70(uint32_t *a1, int a2);
// [0x733dd0] (445 bytes) sub_733DD0
// int sub_733DD0(int a1);
// [0x733f90] (107 bytes) sub_733F90
// int sub_733F90(int *a1);
// [0x734000] (184 bytes) sub_734000
// int sub_734000(int a1);
// [0x7340c0] (208 bytes) sub_7340C0
// int (**sub_7340C0(uint32_t *a1, char *a2))(int);
// [0x734190] (236 bytes) sub_734190
// int (**sub_734190(uint32_t *a1, char *a2))(int);
// [0x734280] (165 bytes) sub_734280
// int (**sub_734280(uint32_t *a1, char *a2))(int);
// [0x734330] (194 bytes) sub_734330
// int sub_734330(uint32_t *a1, char *a2);
// [0x734400] (640 bytes) sub_734400
// int sub_734400(int a1, char *a2);
// [0x734680] (475 bytes) sub_734680
// bool sub_734680(float *a1, float *a2);
// [0x734860] (26 bytes) sub_734860
// uint32_t *sub_734860(uint32_t *a1);
// [0x734880] (26 bytes) sub_734880
// uint32_t *sub_734880(uint32_t *a1);
// [0x7348a0] (43 bytes) sub_7348A0
// int sub_7348A0();
// [0x7348d0] (64 bytes) sub_7348D0
// int sub_7348D0(int a1);
// [0x734910] (188 bytes) sub_734910
// void sub_734910(int a1);
// [0x7349d0] (71 bytes) sub_7349D0
// int *sub_7349D0(int a1, char a2);
// [0x734a20] (68 bytes) sub_734A20
// int *sub_734A20(int a1);
// [0x734a70] (158 bytes) sub_734A70
// int sub_734A70(uint32_t *a1, char *a2);
// [0x734b10] (26 bytes) sub_734B10
// uint32_t *sub_734B10(uint32_t *a1, uint32_t *a2);
// [0x734b50] (147 bytes) sub_734B50
// int (**sub_734B50(uint32_t *a1, char *a2))(int);
// [0x734bf0] (78 bytes) sub_734BF0
// int sub_734BF0(uint32_t *a1);
// [0x734c40] (81 bytes) sub_734C40
// int sub_734C40(uint32_t *a1);
// [0x734ca0] (81 bytes) sub_734CA0
// int sub_734CA0(uint32_t *a1);
// [0x734d00] (77 bytes) sub_734D00
// int sub_734D00(uint32_t *a1);
// [0x734d50] (77 bytes) sub_734D50
// int sub_734D50(uint32_t *a1);
// [0x734da0] (17 bytes) sub_734DA0
// int sub_734DA0(int a1, int a2);
// [0x734dc0] (17 bytes) sub_734DC0
// int sub_734DC0(int a1, int a2);
// [0x734de0] (17 bytes) sub_734DE0
// int sub_734DE0(int a1, int a2);
// [0x734e00] (729 bytes) sub_734E00
// int sub_734E00(int *a1);
// [0x7350e0] (154 bytes) sub_7350E0
// int sub_7350E0(int *a1, int a2);
// [0x735180] (107 bytes) sub_735180
// bool sub_735180(uint8_t *a1, float *a2);
// [0x7351f0] (114 bytes) sub_7351F0
// bool sub_7351F0(int a1, float *a2);
// [0x735280] (57 bytes) sub_735280
// int sub_735280(int a1);
// [0x7352c0] (314 bytes) sub_7352C0
// void sub_7352C0(int a1);
// [0x735400] (78 bytes) sub_735400
// void sub_735400(int a1);
// [0x735470] (505 bytes) sub_735470
// int sub_735470(uint32_t *a1);
// [0x735670] (182 bytes) sub_735670
// int sub_735670(uint32_t *a1);
// [0x735730] (311 bytes) sub_735730
// int sub_735730();
// [0x735870] (415 bytes) sub_735870
// float *sub_735870(float *a1);
// [0x735a10] (719 bytes) sub_735A10
// char *sub_735A10(int a1, int a2);
// [0x735ce8] (1 bytes) nullsub_221
// void nullsub_221();
// [0x735cf0] (36 bytes) sub_735CF0
// int sub_735CF0(int a1, unsigned int a2);
// [0x735d20] (129 bytes) sub_735D20
// int sub_735D20(int a1, int a2);
// [0x735db0] (131 bytes) sub_735DB0
// int sub_735DB0(int a1, int a2);
// [0x735e40] (35 bytes) sub_735E40
// int sub_735E40(int a1, int a2);
// [0x735e78] (1 bytes) nullsub_222
// void nullsub_222();
// [0x735e80] (54 bytes) sub_735E80
// int sub_735E80(int a1, int (*a2)(int));
// [0x735ec0] (773 bytes) sub_735EC0
// int *sub_735EC0(uint32_t *a1);
// [0x7361d0] (170 bytes) sub_7361D0
// uint32_t *sub_7361D0(uint32_t *a1, char *a2);
// [0x7362c0] (59 bytes) sub_7362C0
// int sub_7362C0(int a1);
// [0x736300] (482 bytes) sub_736300
// int *sub_736300(uint32_t *a1);
// [0x7364f0] (679 bytes) sub_7364F0
// int sub_7364F0(uint32_t *a1);
// [0x7367a0] (201 bytes) sub_7367A0
// int sub_7367A0(uint32_t *a1);
// [0x7368c0] (14 bytes) sub_7368C0
// int sub_7368C0(int a1, char a2);
// [0x736d80] (35 bytes) sub_736D80
// unsigned int sub_736D80(unsigned int a1, int a2);
// [0x736db0] (35 bytes) sub_736DB0
// unsigned int sub_736DB0(unsigned int a1, int a2);
// [0x736e10] (32 bytes) sub_736E10
// bool sub_736E10(int a1, int a2);
// [0x736e30] (324 bytes) sub_736E30
// int sub_736E30(int a1, int a2);
// [0x736f80] (87 bytes) sub_736F80
// bool sub_736F80(int a1, int a2);
// [0x736fe0] (312 bytes) sub_736FE0
// void sub_736FE0(int a1);
// [0x737120] (9 bytes) sub_737120
// void sub_737120();
// [0x737140] (9 bytes) sub_737140
// void sub_737140();
// [0x737160] (75 bytes) sub_737160
// int sub_737160(int a1, int a2);
// [0x7371b0] (180 bytes) sub_7371B0
// bool sub_7371B0(int a1);
// [0x7374a0] (195 bytes) sub_7374A0
// int sub_7374A0(int a1, int a2, uint32_t *a3, uint32_t *a4);
// [0x737570] (686 bytes) sub_737570
// float *sub_737570(float *a1, int a2, int a3);
// [0x737820] (201 bytes) sub_737820
// void sub_737820(uint32_t *a1);
// [0x7378f0] (425 bytes) sub_7378F0
// unsigned int sub_7378F0(uint32_t *a1);
// [0x737aa0] (327 bytes) sub_737AA0
// void sub_737AA0(int a1, int a2, int a3, char *a4, char *a5);
// [0x737bf0] (720 bytes) sub_737BF0
// int (**sub_737BF0(int a1, int a2))(int);
// [0x737ec0] (39 bytes) sub_737EC0
// bool sub_737EC0(int a1);
// [0x737ef0] (760 bytes) sub_737EF0
// int sub_737EF0(int a1, int a2);
// [0x7381f0] (39 bytes) sub_7381F0
// bool sub_7381F0(int a1);
// [0x738220] (226 bytes) sub_738220
// int sub_738220(int a1, const char **a2);
// [0x738310] (736 bytes) sub_738310
// int (**sub_738310(int a1, int a2))(int);
// [0x7385f0] (39 bytes) sub_7385F0
// bool sub_7385F0(int a1);
// [0x738620] (746 bytes) sub_738620
// char *sub_738620(int a1);
// [0x738910] (653 bytes) sub_738910
// uint32_t *sub_738910(int a1);
// [0x738ba0] (680 bytes) sub_738BA0
// int sub_738BA0(int a1, int a2);
// [0x738e50] (123 bytes) sub_738E50
// float *sub_738E50(float *a1, float *a2, float *a3);
// [0x738ed0] (643 bytes) sub_738ED0
// float *sub_738ED0(float *a1, float *a2, float *a3, float *a4);
// [0x739160] (133 bytes) sub_739160
// float *sub_739160(float *a1, float *a2, float *a3);
// [0x7391f0] (301 bytes) sub_7391F0
// int sub_7391F0(uint32_t *a1);
// [0x739330] (415 bytes) sub_739330
// float *sub_739330(float *a1);
// [0x7394d0] (914 bytes) sub_7394D0
// bool sub_7394D0(int a1, int a2, char a3);
// [0x739870] (650 bytes) sub_739870
// bool sub_739870(int a1, float *a2, float a3, char a4);
// [0x739b10] (39 bytes) sub_739B10
// int sub_739B10(int a1);
// [0x739b70] (399 bytes) sub_739B70
// int sub_739B70(int a1);
// [0x739d00] (149 bytes) sub_739D00
// int sub_739D00(uint8_t *a1);
// [0x739da0] (507 bytes) sub_739DA0
// int sub_739DA0(int *a1);
// [0x739fa0] (97 bytes) sub_739FA0
// void sub_739FA0(int a1, int a2);
// [0x73a240] (200 bytes) sub_73A240
// int sub_73A240(uint32_t *a1, int a2);
// [0x73a310] (405 bytes) sub_73A310
// uint16_t *sub_73A310(int a1);
// [0x73a4b0] (67 bytes) sub_73A4B0
// int sub_73A4B0(gameswf::ASValue **a1);
// [0x73a500] (67 bytes) sub_73A500
// int sub_73A500(gameswf::ASValue **a1);
// [0x73a550] (76 bytes) sub_73A550
// int sub_73A550(gameswf::ASValue **a1);
// [0x73a5a0] (114 bytes) sub_73A5A0
// int sub_73A5A0(int a1);
// [0x73a620] (88 bytes) sub_73A620
// void sub_73A620(int a1);
// [0x73a680] (49 bytes) sub_73A680
// int sub_73A680(gameswf::ASValue **a1);
// [0x73a6c0] (75 bytes) sub_73A6C0
// int sub_73A6C0(gameswf::ASValue **a1);
// [0x73a710] (125 bytes) sub_73A710
// int sub_73A710(int a1);
// [0x73a790] (209 bytes) sub_73A790
// int sub_73A790(int a1, int a2, char a3, char a4);
// [0x73a870] (139 bytes) sub_73A870
// int sub_73A870(int a1);
// [0x73a900] (81 bytes) sub_73A900
// int sub_73A900(int a1);
// [0x73a960] (109 bytes) sub_73A960
// int sub_73A960(int a1);
// [0x73a9d0] (131 bytes) sub_73A9D0
// int sub_73A9D0(int a1);
// [0x73aa60] (71 bytes) sub_73AA60
// int sub_73AA60(gameswf::ASValue **a1);
// [0x73aab0] (104 bytes) sub_73AAB0
// int sub_73AAB0(gameswf::ASValue **a1);
// [0x73ab20] (221 bytes) sub_73AB20
// int sub_73AB20(gameswf::ASValue **a1);
// [0x73ac00] (230 bytes) sub_73AC00
// int sub_73AC00(int a1);
// [0x73acf0] (201 bytes) sub_73ACF0
// int sub_73ACF0(int a1);
// [0x73adc0] (146 bytes) sub_73ADC0
// int sub_73ADC0(gameswf::ASValue **a1);
// [0x73ae60] (822 bytes) sub_73AE60
// int sub_73AE60(int a1);
// [0x73b1a0] (294 bytes) sub_73B1A0
// int sub_73B1A0(int a1);
// [0x73b2d0] (277 bytes) sub_73B2D0
// int sub_73B2D0(int a1);
// [0x73b3f0] (225 bytes) sub_73B3F0
// int sub_73B3F0(gameswf::ASValue **a1);
// [0x73b4e0] (909 bytes) sub_73B4E0
// int sub_73B4E0(int a1);
// [0x73b870] (225 bytes) sub_73B870
// int sub_73B870(gameswf::ASValue **a1);
// [0x73b960] (1556 bytes) sub_73B960
// int sub_73B960(int a1);
// [0x73bf80] (230 bytes) sub_73BF80
// int sub_73BF80();
// [0x73c070] (254 bytes) sub_73C070
// int sub_73C070(int a1);
// [0x73c170] (385 bytes) sub_73C170
// void sub_73C170(int a1);
// [0x73c300] (363 bytes) sub_73C300
// int sub_73C300(gameswf::ASValue **a1);
// [0x73c470] (525 bytes) sub_73C470
// int sub_73C470(int a1);
// [0x73c680] (3494 bytes) sub_73C680
// int sub_73C680(int a1);
// [0x73d430] (70 bytes) sub_73D430
// bool sub_73D430(int a1, int a2);
// [0x73d480] (120 bytes) sub_73D480
// int sub_73D480(int a1, int a2);
// [0x73d500] (129 bytes) sub_73D500
// long double sub_73D500();
// [0x73d590] (178 bytes) sub_73D590
// int sub_73D590(gameswf::ASValue **a1);
// [0x73d650] (100 bytes) sub_73D650
// int sub_73D650(gameswf::ASValue **a1);
// [0x73d6c0] (108 bytes) sub_73D6C0
// int sub_73D6C0(gameswf::ASValue **a1);
// [0x73d730] (56 bytes) sub_73D730
// int sub_73D730(gameswf::ASValue **a1);
// [0x73d770] (55 bytes) sub_73D770
// int sub_73D770(gameswf::ASValue **a1);
// [0x73d7b0] (275 bytes) sub_73D7B0
// int sub_73D7B0(unsigned int *a1, int *a2);
// [0x73d8d0] (139 bytes) sub_73D8D0
// int sub_73D8D0(int a1);
// [0x73d960] (206 bytes) sub_73D960
// int sub_73D960(int a1);
// [0x73da30] (561 bytes) sub_73DA30
// int sub_73DA30(int a1);
// [0x73dc70] (268 bytes) sub_73DC70
// int sub_73DC70(int a1);
// [0x73dd80] (316 bytes) sub_73DD80
// int sub_73DD80(int a1);
// [0x73dec0] (265 bytes) sub_73DEC0
// int sub_73DEC0(gameswf::ASValue **a1);
// [0x73dfd0] (217 bytes) sub_73DFD0
// int *sub_73DFD0(long double a1);
// [0x73e0b0] (341 bytes) sub_73E0B0
// int sub_73E0B0(long double a1);
// [0x73e210] (509 bytes) sub_73E210
// int *sub_73E210(long double a1);
// [0x73e410] (1903 bytes) sub_73E410
// int sub_73E410(int a1);
// [0x73eb80] (212 bytes) sub_73EB80
// int sub_73EB80(int a1);
// [0x73ec60] (477 bytes) sub_73EC60
// int sub_73EC60(gameswf::ASValue **a1);
// [0x73ee40] (1885 bytes) sub_73EE40
// void sub_73EE40(int a1);
// [0x73f5a0] (1877 bytes) sub_73F5A0
// void sub_73F5A0(int a1);
// [0x73fd00] (68 bytes) sub_73FD00
// bool sub_73FD00(int a1);
// [0x73fd50] (69 bytes) sub_73FD50
// bool sub_73FD50(int a1);
// [0x73fda0] (69 bytes) sub_73FDA0
// bool sub_73FDA0(int a1);
// [0x73fdf0] (69 bytes) sub_73FDF0
// bool sub_73FDF0(int a1);
// [0x73fe40] (131 bytes) sub_73FE40
// bool sub_73FE40(uint32_t *a1);
// [0x73fed0] (352 bytes) sub_73FED0
// int sub_73FED0(int a1);
// [0x740030] (139 bytes) sub_740030
// int sub_740030(gameswf::ASValue **a1);
// [0x7400c0] (146 bytes) sub_7400C0
// int *sub_7400C0(int a1);
// [0x740160] (49 bytes) sub_740160
// int sub_740160(gameswf::ASValue **a1);
// [0x7401a0] (119 bytes) sub_7401A0
// int (**sub_7401A0(int a1))(int);
// [0x740220] (49 bytes) sub_740220
// int sub_740220(gameswf::ASValue **a1);
// [0x740260] (49 bytes) sub_740260
// int sub_740260(gameswf::ASValue **a1);
// [0x7402a0] (146 bytes) sub_7402A0
// int sub_7402A0(__m128d a1, gameswf::ASValue **a2);
// [0x740340] (199 bytes) sub_740340
// int sub_740340(int a1);
// [0x740410] (278 bytes) sub_740410
// int sub_740410(int a1);
// [0x740530] (73 bytes) sub_740530
// int sub_740530();
// [0x740580] (121 bytes) sub_740580
// int (**sub_740580(int a1))(int);
// [0x740600] (49 bytes) sub_740600
// int sub_740600(gameswf::ASValue **a1);
// [0x740640] (56 bytes) sub_740640
// int sub_740640(gameswf::ASValue **a1);
// [0x740680] (69 bytes) sub_740680
// int sub_740680(gameswf::ASValue **a1);
// [0x7406d0] (49 bytes) sub_7406D0
// int sub_7406D0(gameswf::ASValue **a1);
// [0x740710] (49 bytes) sub_740710
// int sub_740710(gameswf::ASValue **a1);
// [0x740750] (358 bytes) sub_740750
// void sub_740750(int a1);
// [0x7408c0] (83 bytes) sub_7408C0
// int sub_7408C0();
// [0x740920] (59 bytes) sub_740920
// int sub_740920(gameswf::ASValue **a1);
// [0x740960] (72 bytes) sub_740960
// int sub_740960(gameswf::ASValue **a1);
// [0x7409b0] (385 bytes) sub_7409B0
// int sub_7409B0(int a1);
// [0x740b40] (918 bytes) sub_740B40
// int sub_740B40(int a1);
// [0x740ee0] (382 bytes) sub_740EE0
// int sub_740EE0(int a1);
// [0x741060] (333 bytes) sub_741060
// int sub_741060(int a1);
// [0x7411b0] (306 bytes) sub_7411B0
// int sub_7411B0(int a1);
// [0x7412f0] (1275 bytes) sub_7412F0
// gameswf::ASArray *sub_7412F0(int a1, gameswf::ASArray *a2, int a3);
// [0x7417f0] (552 bytes) sub_7417F0
// int sub_7417F0(int a1);
// [0x741a20] (193 bytes) sub_741A20
// int sub_741A20(int a1, gameswf::ASArray *a2, int a3, int a4);
// [0x741af0] (615 bytes) sub_741AF0
// int sub_741AF0(int a1, gameswf::ASArray *a2, int a3, int a4);
// [0x741d60] (540 bytes) sub_741D60
// int sub_741D60(int a1, gameswf::ASArray *a2, int a3, int a4);
// [0x741f80] (1809 bytes) sub_741F80
// 0x741f80 sub_741F80
// [0x7426a0] (587 bytes) sub_7426A0
// void sub_7426A0(int a1);
// [0x7428f0] (1546 bytes) sub_7428F0
// char *sub_7428F0(int a1, gameswf::ASArray *a2, unsigned int a3, int a4, char a5);
// [0x742f00] (150 bytes) sub_742F00
// char *sub_742F00(int a1);
// [0x742fa0] (150 bytes) sub_742FA0
// char *sub_742FA0(int a1);
// [0x743040] (1013 bytes) sub_743040
// int sub_743040(int a1);
// [0x743440] (273 bytes) sub_743440
// int sub_743440(int a1);
// [0x743580] (144 bytes) sub_743580
// int (**sub_743580(int a1))(int);
// [0x743610] (290 bytes) sub_743610
// int (**sub_743610(int a1))(int);
// [0x743740] (361 bytes) sub_743740
// int *sub_743740(int a1);
// [0x7438b0] (1775 bytes) sub_7438B0
// int sub_7438B0(int a1, int a2, char a3);
// [0x743fa0] (110 bytes) sub_743FA0
// int sub_743FA0(int a1, int a2, int a3, char a4);
// [0x744010] (749 bytes) sub_744010
// int (**sub_744010(int a1))(int);
// [0x744300] (1690 bytes) sub_744300
// int sub_744300(int a1);
// [0x7449a0] (439 bytes) sub_7449A0
// int sub_7449A0(int a1);
// [0x744b60] (289 bytes) sub_744B60
// int sub_744B60(gameswf::ASValue **a1);
// [0x744c90] (301 bytes) sub_744C90
// uint8_t *sub_744C90(gameswf::ASValue **a1);
// [0x744dc0] (1085 bytes) sub_744DC0
// void sub_744DC0(int a1);
// [0x745200] (937 bytes) sub_745200
// int (**sub_745200(long double a1, int a2))(int);
// [0x7455b0] (2097 bytes) sub_7455B0
// void *sub_7455B0(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
// [0x746cd0] (3098 bytes) sub_746CD0
// int sub_746CD0(int a1);
// [0x7478f0] (1797 bytes) sub_7478F0
// int sub_7478F0(int a1, gameswf::ASArray *a2, uint32_t *a3, int a4, char a5);
// [0x748000] (3782 bytes) sub_748000
// int sub_748000(int a1, int a2, int a3, char a4);
// [0x748ed0] (180 bytes) sub_748ED0
// int sub_748ED0(int a1);
// [0x748f90] (417 bytes) sub_748F90
// int sub_748F90(int a1);
// [0x749140] (1309 bytes) sub_749140
// int sub_749140(int a1);
// [0x749660] (3396 bytes) sub_749660
// int sub_749660(int a1);
// [0x74a3b0] (3220 bytes) sub_74A3B0
// int sub_74A3B0(int a1);
// [0x74b050] (1271 bytes) sub_74B050
// int sub_74B050(int a1);
// [0x74b550] (116 bytes) sub_74B550
// char sub_74B550();
// [0x74b5d0] (108 bytes) sub_74B5D0
// char sub_74B5D0();
// [0x74b640] (76 bytes) sub_74B640
// int sub_74B640(gameswf::ASValue **a1);
// [0x74b690] (114 bytes) sub_74B690
// uint32_t *sub_74B690(int a1);
// [0x74b710] (55 bytes) sub_74B710
// int sub_74B710(gameswf::ASValue **a1);
// [0x74b750] (69 bytes) sub_74B750
// int sub_74B750(gameswf::ASValue **a1);
// [0x74b7a0] (83 bytes) sub_74B7A0
// int sub_74B7A0(gameswf::ASValue **a1);
// [0x74b800] (27 bytes) sub_74B800
// int sub_74B800();
// [0x74b820] (115 bytes) sub_74B820
// int sub_74B820(int a1);
// [0x74b8a0] (153 bytes) sub_74B8A0
// int sub_74B8A0(int a1);
// [0x74b940] (66 bytes) sub_74B940
// int sub_74B940(gameswf::ASValue **a1);
// [0x74b990] (56 bytes) sub_74B990
// int sub_74B990(gameswf::ASValue **a1);
// [0x74b9d0] (70 bytes) sub_74B9D0
// int sub_74B9D0(gameswf::ASValue **a1);
// [0x74ba20] (56 bytes) sub_74BA20
// int sub_74BA20(gameswf::ASValue **a1);
// [0x74ba60] (74 bytes) sub_74BA60
// uint8_t *sub_74BA60(int a1);
// [0x74bab0] (116 bytes) sub_74BAB0
// uint8_t sub_74BAB0();
// [0x74bb30] (116 bytes) sub_74BB30
// void sub_74BB30();
// [0x74bbb0] (95 bytes) sub_74BBB0
// int sub_74BBB0(gameswf::ASValue **a1);
// [0x74bc10] (161 bytes) sub_74BC10
// int sub_74BC10(int a1);
// [0x74bcc0] (279 bytes) sub_74BCC0
// uint32_t *sub_74BCC0(int a1);
// [0x74bde0] (1097 bytes) sub_74BDE0
// int sub_74BDE0(int a1);
// [0x74c230] (738 bytes) sub_74C230
// int sub_74C230(int a1);
// [0x74c520] (206 bytes) sub_74C520
// int sub_74C520(int a1);
// [0x74c5f0] (87 bytes) sub_74C5F0
// int sub_74C5F0(gameswf::ASValue **a1);
// [0x74c650] (634 bytes) sub_74C650
// int sub_74C650(int a1);
// [0x74c8d0] (309 bytes) sub_74C8D0
// int sub_74C8D0(int a1);
// [0x74ca10] (1048 bytes) sub_74CA10
// int sub_74CA10(int a1);
// [0x74ce30] (492 bytes) sub_74CE30
// int sub_74CE30(gameswf::ASValue **a1);
// [0x74d020] (739 bytes) sub_74D020
// int sub_74D020(int a1);
// [0x74d310] (407 bytes) sub_74D310
// int sub_74D310(int a1);
// [0x74d4b0] (1676 bytes) sub_74D4B0
// int sub_74D4B0(int a1);
// [0x74db40] (1252 bytes) sub_74DB40
// int sub_74DB40(int a1);
// [0x74e030] (837 bytes) sub_74E030
// int sub_74E030(int a1);
// [0x74e380] (804 bytes) sub_74E380
// int sub_74E380(int a1);
// [0x74e6b0] (470 bytes) sub_74E6B0
// uint32_t *sub_74E6B0(int a1);
// [0x74e890] (155 bytes) sub_74E890
// int sub_74E890(gameswf::ASValue **a1);
// [0x74e930] (1088 bytes) sub_74E930
// int sub_74E930(int a1);
// [0x74ed70] (2749 bytes) sub_74ED70
// int sub_74ED70(int a1);
// [0x74f830] (214 bytes) sub_74F830
// int sub_74F830(int a1);
// [0x74f910] (422 bytes) sub_74F910
// int sub_74F910(int a1);
// [0x74fac0] (422 bytes) sub_74FAC0
// int sub_74FAC0(int a1);
// [0x74fc70] (5650 bytes) sub_74FC70
// int sub_74FC70(int a1);
// [0x751290] (1529 bytes) sub_751290
// int sub_751290(int a1);
// [0x751890] (389 bytes) sub_751890
// int *sub_751890(int a1);
// [0x751a20] (1295 bytes) sub_751A20
// int sub_751A20(int a1, char a2);
// [0x751f30] (726 bytes) sub_751F30
// int sub_751F30(int a1);
// [0x752210] (2494 bytes) sub_752210
// int sub_752210(int a1);
// [0x752bd0] (265 bytes) sub_752BD0
// int sub_752BD0(int a1);
// [0x752ce0] (362 bytes) sub_752CE0
// int sub_752CE0(int a1);
// [0x752e50] (1265 bytes) sub_752E50
// void sub_752E50(int a1);
// [0x753350] (293 bytes) sub_753350
// uint8_t sub_753350();
// [0x753480] (2303 bytes) sub_753480
// int sub_753480(int a1);
// [0x753d80] (840 bytes) sub_753D80
// int sub_753D80(int a1);
// [0x7540d0] (317 bytes) sub_7540D0
// int sub_7540D0(int a1);
// [0x754210] (450 bytes) sub_754210
// int sub_754210(int a1);
// [0x7543e0] (351 bytes) sub_7543E0
// int sub_7543E0(int a1);
// [0x754540] (830 bytes) sub_754540
// int sub_754540(int a1);
// [0x754880] (333 bytes) sub_754880
// void sub_754880();
// [0x7549d0] (629 bytes) sub_7549D0
// int sub_7549D0(int a1);
// [0x754c50] (501 bytes) sub_754C50
// int sub_754C50(gameswf::ASValue **a1);
// [0x754e50] (1249 bytes) sub_754E50
// int sub_754E50(int a1);
// [0x755340] (1231 bytes) sub_755340
// void sub_755340(int a1);
// [0x755810] (309 bytes) sub_755810
// void sub_755810(int a1);
// [0x755950] (427 bytes) sub_755950
// int sub_755950(int a1);
// [0x755b00] (375 bytes) sub_755B00
// int sub_755B00(int a1);
// [0x755c80] (501 bytes) sub_755C80
// int sub_755C80(int a1);
// [0x755e80] (1216 bytes) sub_755E80
// int sub_755E80(int a1);
// [0x756340] (874 bytes) sub_756340
// int sub_756340(int a1);
// [0x7566b0] (1146 bytes) sub_7566B0
// int sub_7566B0(int a1);
// [0x756b30] (1072 bytes) sub_756B30
// int sub_756B30(int a1);
// [0x756f60] (800 bytes) sub_756F60
// int sub_756F60(int a1);
// [0x757280] (800 bytes) sub_757280
// int sub_757280(int a1);
// [0x7575a0] (616 bytes) sub_7575A0
// int sub_7575A0();
// [0x757810] (616 bytes) sub_757810
// int sub_757810();
// [0x757a80] (866 bytes) sub_757A80
// int sub_757A80(int a1);
// [0x757df0] (866 bytes) sub_757DF0
// int sub_757DF0(int a1);
// [0x758160] (642 bytes) sub_758160
// int sub_758160(int a1);
// [0x7583f0] (584 bytes) sub_7583F0
// int sub_7583F0();
// [0x758640] (740 bytes) sub_758640
// int (**sub_758640(int a1))(int);
// [0x758930] (1346 bytes) sub_758930
// int sub_758930(int a1);
// [0x758e80] (1232 bytes) sub_758E80
// int sub_758E80(int a1);
// [0x759350] (1152 bytes) sub_759350
// int sub_759350(int a1);
// [0x7597d0] (1344 bytes) sub_7597D0
// int sub_7597D0(int a1);
// [0x759d10] (1266 bytes) sub_759D10
// int sub_759D10(int a1);
// [0x75a210] (806 bytes) sub_75A210
// void sub_75A210(int a1);
// [0x75a550] (1758 bytes) sub_75A550
// int sub_75A550(int a1);
// [0x75ac30] (5075 bytes) sub_75AC30
// int sub_75AC30(int a1);
// [0x75c010] (1866 bytes) sub_75C010
// long double sub_75C010(int a1);
// [0x75c760] (81 bytes) sub_75C760
// int sub_75C760(gameswf::ASValue **a1);
// [0x75c7c0] (45 bytes) sub_75C7C0
// int sub_75C7C0(gameswf::ASValue **a1);
// [0x75c7f0] (481 bytes) sub_75C7F0
// void sub_75C7F0(int a1, std::list<int, GameAllocator<int>> *a2);
// [0x75c9e0] (1863 bytes) sub_75C9E0
// float *sub_75C9E0(int a1, int a2);
// [0x75d130] (330 bytes) sub_75D130
// char sub_75D130(float *a1, int a2);
// [0x75d280] (525 bytes) sub_75D280
// char sub_75D280(int a1, int a2);
// [0x75d490] (330 bytes) sub_75D490
// char sub_75D490(float *a1, int a2);
// [0x75d5e0] (354 bytes) sub_75D5E0
// char sub_75D5E0(float *a1, int a2);
// [0x75d750] (487 bytes) sub_75D750
// int sub_75D750(int a1);
// [0x75d940] (491 bytes) sub_75D940
// void sub_75D940(int a1);
// [0x75db30] (495 bytes) sub_75DB30
// char *sub_75DB30(int a1);
// [0x75dd20] (491 bytes) sub_75DD20
// void sub_75DD20(int a1);
// [0x75df10] (603 bytes) sub_75DF10
// int sub_75DF10(int a1, int a2);
// [0x75e170] (202 bytes) sub_75E170
// char *sub_75E170(int a1, char *a2);
// [0x75e240] (407 bytes) sub_75E240
// int sub_75E240(int a1, int a2);
// [0x75e3e0] (1113 bytes) sub_75E3E0
// int sub_75E3E0(__m128 a1, int a2, float *a3, int a4, int a5);
// [0x75e840] (557 bytes) sub_75E840
// int sub_75E840(int a1);
// [0x75ea70] (1449 bytes) sub_75EA70
// void sub_75EA70(int a1);
// [0x75f020] (2678 bytes) sub_75F020
// int sub_75F020(long double a1, int a2);
// [0x75faa0] (2213 bytes) sub_75FAA0
// int sub_75FAA0(int a1);
// [0x760350] (3171 bytes) sub_760350
// int sub_760350(long double a1, int a2);
// [0x760fc0] (4661 bytes) sub_760FC0
// uint32_t *sub_760FC0(long double a1, int a2, int a3, int a4);
// [0x762200] (9748 bytes) sub_762200
// int sub_762200(int a1);
// [0x764820] (2906 bytes) sub_764820
// int sub_764820(int a1);
// [0x765380] (242 bytes) sub_765380
// void sub_765380(int a1, int a2);
// [0x765480] (1292 bytes) sub_765480
// int sub_765480(int a1, gameswf **a2, unsigned int a3);
// [0x765990] (509 bytes) sub_765990
// int *sub_765990(int a1);
// [0x765b90] (1959 bytes) sub_765B90
// int sub_765B90(uint32_t *a1);
// [0x766340] (7 bytes) sub_766340
// int sub_766340(int a1);
// [0x766350] (249 bytes) sub_766350
// void sub_766350(char *a1);
// [0x766450] (70 bytes) sub_766450
// uint32_t *sub_766450(int a1);
// [0x7664a0] (161 bytes) sub_7664A0
// int sub_7664A0(int a1, int a2);
// [0x766550] (775 bytes) sub_766550
// void sub_766550(int *a1, uint32_t *a2, uint32_t *a3);
// [0x766860] (157 bytes) sub_766860
// void sub_766860(int *a1, int a2);
// [0x766900] (163 bytes) sub_766900
// int sub_766900(int a1);
// [0x7669b0] (673 bytes) sub_7669B0
// int sub_7669B0(int a1, int a2);
// [0x766c60] (211 bytes) sub_766C60
// void sub_766C60(uint32_t *a1);
// [0x766d40] (56 bytes) sub_766D40
// void sub_766D40(uint32_t *a1);
// [0x766d80] (7 bytes) sub_766D80
// int sub_766D80(int a1);
// [0x766d90] (241 bytes) sub_766D90
// void (__noreturn **sub_766D90(int a1))();
// [0x766e90] (130 bytes) sub_766E90
// int sub_766E90(int a1);
// [0x766f20] (744 bytes) sub_766F20
// uint32_t *sub_766F20(int *a1, int a2);
// [0x767210] (269 bytes) sub_767210
// int sub_767210(int a1, char **a2, int a3, int a4, int a5, uint8_t *a6, int *a7);
// [0x767320] (776 bytes) sub_767320
// size_t sub_767320(int *a1, int a2, int a3);
// [0x767630] (718 bytes) sub_767630
// int sub_767630(int a1, int a2, int a3);
// [0x767900] (486 bytes) sub_767900
// int sub_767900(int result, int a2);
// [0x767af0] (839 bytes) sub_767AF0
// int sub_767AF0(int result, int a2);
// [0x767e40] (768 bytes) sub_767E40
// gameswf::FlashFX *sub_767E40(int a1, unsigned int a2, char a3, int a4);
// [0x768140] (134 bytes) sub_768140
// int sub_768140(int a1, int a2);
// [0x768340] (441 bytes) sub_768340
// int *sub_768340(int a1, char *a2, unsigned int a3);
// [0x768500] (509 bytes) sub_768500
// int sub_768500(int a1, char *a2);
// [0x768700] (565 bytes) sub_768700
// uint32_t *sub_768700(int a1, char *a2);
// [0x768bb0] (649 bytes) sub_768BB0
// char *sub_768BB0(int a1, int a2);
// [0x768e40] (11401 bytes) sub_768E40
// void sub_768E40(int a1, int a2);
// [0x76bad0] (197 bytes) sub_76BAD0
// void sub_76BAD0(int a1);
// [0x76bba0] (1880 bytes) sub_76BBA0
// char sub_76BBA0(int a1);
// [0x76c300] (183 bytes) sub_76C300
// unsigned int sub_76C300(uint32_t *a1);
// [0x76c3c0] (646 bytes) sub_76C3C0
// unsigned int sub_76C3C0(int a1);
// [0x76c650] (182 bytes) sub_76C650
// unsigned int sub_76C650(int a1);
// [0x76c710] (233 bytes) sub_76C710
// unsigned int sub_76C710();
// [0x76c800] (2662 bytes) sub_76C800
// void sub_76C800(int a1);
// [0x76d270] (458 bytes) sub_76D270
// int sub_76D270(int a1);
// [0x76d440] (4701 bytes) sub_76D440
// void sub_76D440(int a1, int a2);
// [0x76e6a0] (350 bytes) sub_76E6A0
// unsigned int sub_76E6A0(int a1);
// [0x76e800] (118 bytes) sub_76E800
// bool sub_76E800(int a1);
// [0x76e880] (2148 bytes) sub_76E880
// char sub_76E880(int a1);
// [0x76f0f0] (480 bytes) sub_76F0F0
// uint32_t *sub_76F0F0(int a1);
// [0x76f2d0] (326 bytes) sub_76F2D0
// int sub_76F2D0(glf::TaskDirector *a1);
// [0x76f420] (398 bytes) sub_76F420
// int (**sub_76F420(void **a1))(int);
// [0x76f5b0] (406 bytes) sub_76F5B0
// void sub_76F5B0(void **a1);
// [0x76f750] (284 bytes) sub_76F750
// uint32_t *sub_76F750(uint32_t *a1, int a2, int *a3, int *a4);
// [0x76f870] (215 bytes) sub_76F870
// int sub_76F870(int a1, int *a2);
// [0x76f950] (284 bytes) sub_76F950
// uint32_t *sub_76F950(uint32_t *a1, int a2, int *a3, int *a4);
// [0x76fa70] (215 bytes) sub_76FA70
// int sub_76FA70(int a1, int *a2);
// [0x76fb50] (251 bytes) sub_76FB50
// uint32_t *sub_76FB50(uint32_t *a1, int a2);
// [0x76fc50] (265 bytes) sub_76FC50
// int sub_76FC50(int a1);
// [0x76fd60] (2733 bytes) sub_76FD60
// int sub_76FD60(int a1);
// [0x770810] (770 bytes) sub_770810
// int sub_770810(const char *a1);
// [0x770b20] (922 bytes) sub_770B20
// void sub_770B20(int a1, char *a2);
// [0x770ec0] (2931 bytes) sub_770EC0
// void sub_770EC0(int a1);
// [0x771a40] (2043 bytes) sub_771A40
// void sub_771A40(int a1);
// [0x772240] (934 bytes) sub_772240
// unsigned int sub_772240(int16_t a1, unsigned int a2, int *a3);
// [0x7725f0] (457 bytes) sub_7725F0
// unsigned int *sub_7725F0(unsigned int *a1, int a2, unsigned int a3);
// [0x7727c0] (2005 bytes) sub_7727C0
// int sub_7727C0(int a1, unsigned int a2, int a3);
// [0x772fa0] (4375 bytes) sub_772FA0
// void sub_772FA0(int a1);
// [0x7740c0] (24 bytes) sub_7740C0
// uint32_t *sub_7740C0(uint32_t *a1);
// [0x7740e0] (24 bytes) sub_7740E0
// uint32_t *sub_7740E0(uint32_t *a1);
// [0x774100] (25 bytes) sub_774100
// int sub_774100(int a1);
// [0x774120] (22 bytes) sub_774120
// int *sub_774120();
// [0x774140] (9 bytes) sub_774140
// int sub_774140();
// [0x774150] (22 bytes) sub_774150
// int *sub_774150();
// [0x774178] (1 bytes) nullsub_223
// void nullsub_223();
// [0x774188] (1 bytes) nullsub_224
// void nullsub_224();
// [0x774190] (28 bytes) sub_774190
// uint32_t *sub_774190(uint32_t *a1, uint32_t *a2);
// [0x7741b0] (12 bytes) sub_7741B0
// int sub_7741B0(int a1);
// [0x7741c0] (22 bytes) sub_7741C0
// int *sub_7741C0();
// [0x7741e0] (12 bytes) sub_7741E0
// int sub_7741E0(int a1);
// [0x7741f0] (22 bytes) sub_7741F0
// int *sub_7741F0();
// [0x774210] (12 bytes) sub_774210
// int sub_774210();
// [0x774220] (22 bytes) sub_774220
// int *sub_774220();
// [0x774240] (22 bytes) sub_774240
// int *sub_774240();
// [0x774260] (22 bytes) sub_774260
// int *sub_774260();
// [0x774280] (22 bytes) sub_774280
// int *sub_774280();
// [0x7742a0] (22 bytes) sub_7742A0
// int *sub_7742A0();
// [0x7742c0] (22 bytes) sub_7742C0
// int *sub_7742C0();
// [0x7742e0] (22 bytes) sub_7742E0
// int *sub_7742E0();
// [0x774300] (22 bytes) sub_774300
// int *sub_774300();
// [0x774320] (12 bytes) sub_774320
// int sub_774320();
// [0x774330] (12 bytes) sub_774330
// int sub_774330();
// [0x774340] (22 bytes) sub_774340
// int *sub_774340();
// [0x774360] (24 bytes) sub_774360
// uint32_t *sub_774360(uint32_t *a1);
// [0x774380] (28 bytes) sub_774380
// int sub_774380(int a1);
// [0x7743a0] (28 bytes) sub_7743A0
// int sub_7743A0(int a1);
// [0x7743c0] (22 bytes) sub_7743C0
// int *sub_7743C0();
// [0x7743e0] (22 bytes) sub_7743E0
// int *sub_7743E0();
// [0x774400] (22 bytes) sub_774400
// int *sub_774400();
// [0x774420] (24 bytes) sub_774420
// uint32_t *sub_774420(uint32_t *a1);
// [0x774440] (24 bytes) sub_774440
// uint32_t *sub_774440(uint32_t *a1);
// [0x774460] (27 bytes) sub_774460
// uint32_t *sub_774460(uint32_t *a1);
// [0x774480] (9 bytes) sub_774480
// int sub_774480();
// [0x774490] (9 bytes) sub_774490
// int sub_774490();
// [0x7744a0] (67 bytes) sub_7744A0
// bool sub_7744A0(int a1, int a2);
// [0x7744f0] (35 bytes) sub_7744F0
// uint32_t *sub_7744F0(uint32_t *a1, int a2);
// [0x774520] (59 bytes) sub_774520
// bool sub_774520(int a1, int a2);
// [0x774560] (34 bytes) sub_774560
// int sub_774560(uint32_t *a1, int a2);
// [0x774590] (56 bytes) sub_774590
// bool sub_774590(int a1, int a2);
// [0x7745d0] (42 bytes) sub_7745D0
// void sub_7745D0(uint32_t *a1);
// [0x774600] (42 bytes) sub_774600
// void sub_774600(uint32_t *a1);
// [0x774630] (42 bytes) sub_774630
// void sub_774630(uint32_t *a1);
// [0x774660] (42 bytes) sub_774660
// void sub_774660(uint32_t *a1);
// [0x774690] (42 bytes) sub_774690
// void sub_774690(uint32_t *a1);
// [0x7746c0] (46 bytes) sub_7746C0
// void sub_7746C0(uint8_t *a1);
// [0x7746f0] (46 bytes) sub_7746F0
// void sub_7746F0(uint8_t *a1);
// [0x774720] (37 bytes) sub_774720
// void sub_774720(int a1);
// [0x774750] (56 bytes) std::list<SpawnZone *,std::allocator<SpawnZone *>>::~list()
// void std::list<SpawnZone *>::~list(std::list<SpawnZone *> *this);
// [0x774790] (174 bytes) sub_774790
// int sub_774790(int a1, int a2, int a3);
// [0x774840] (42 bytes) sub_774840
// void sub_774840(glf::TaskThreadImpl *a1);
// [0x774870] (42 bytes) sub_774870
// void sub_774870(glf::Task *a1);
// [0x7748a0] (52 bytes) sub_7748A0
// int sub_7748A0(int a1, int a2, uint32_t *a3);
// [0x7748e0] (52 bytes) sub_7748E0
// int sub_7748E0(int a1, int a2, uint32_t *a3);
// [0x774920] (52 bytes) sub_774920
// int sub_774920(int a1, int a2, uint32_t *a3);
// [0x774960] (64 bytes) sub_774960
// void sub_774960(glf::Task *a1);
// [0x7749a0] (64 bytes) sub_7749A0
// void sub_7749A0(glf::TaskThreadImpl *a1);
// [0x7749e0] (45 bytes) sub_7749E0
// int sub_7749E0(uint32_t *a1);
// [0x774a10] (165 bytes) sub_774A10
// uint32_t *sub_774A10(uint32_t *a1);
// [0x774ac0] (141 bytes) sub_774AC0
// uint32_t *sub_774AC0(uint32_t *a1);
// [0x774b50] (45 bytes) sub_774B50
// int sub_774B50(uint32_t *a1);
// [0x774b80] (45 bytes) sub_774B80
// int sub_774B80(uint32_t *a1);
// [0x774bb0] (45 bytes) sub_774BB0
// int sub_774BB0(uint32_t *a1);
// [0x774be0] (67 bytes) sub_774BE0
// void sub_774BE0(char *a1);
// [0x774c30] (67 bytes) sub_774C30
// void sub_774C30(char *a1);
// [0x774c80] (67 bytes) sub_774C80
// void sub_774C80(char *a1);
// [0x774cd0] (67 bytes) sub_774CD0
// void sub_774CD0(char *a1);
// [0x774d20] (115 bytes) sub_774D20
// void sub_774D20(uint32_t *a1);
// [0x774da0] (107 bytes) sub_774DA0
// int sub_774DA0(uint32_t *a1);
// [0x774e10] (115 bytes) sub_774E10
// void sub_774E10(uint32_t *a1);
// [0x774e90] (107 bytes) sub_774E90
// int sub_774E90(uint32_t *a1);
// [0x774f00] (207 bytes) sub_774F00
// int sub_774F00(uint32_t *a1, int a2);
// [0x774fd0] (209 bytes) sub_774FD0
// int sub_774FD0();
// [0x7750b0] (145 bytes) sub_7750B0
// int sub_7750B0();
// [0x775150] (290 bytes) sub_775150
// void sub_775150(int a1, glf::TaskCondition *a2);
// [0x775280] (290 bytes) sub_775280
// void sub_775280(int a1, glf::TaskCondition *a2);
// [0x7753b0] (330 bytes) sub_7753B0
// void sub_7753B0(uint32_t *a1);
// [0x775500] (322 bytes) sub_775500
// int (**sub_775500(uint32_t *a1))(int);
// [0x775650] (322 bytes) sub_775650
// int (**sub_775650(uint32_t *a1))(int);
// [0x7757a0] (330 bytes) sub_7757A0
// void sub_7757A0(uint32_t *a1);
// [0x7758f0] (1054 bytes) sub_7758F0
// void sub_7758F0(glf::TaskThreadImpl *a1);
// [0x775d10] (62 bytes) sub_775D10
// int sub_775D10(volatile int32_t **a1);
// [0x775d50] (310 bytes) sub_775D50
// int sub_775D50(int a1, int a2, char *a3);
// [0x775e90] (313 bytes) sub_775E90
// int sub_775E90(int a1, int a2, char *a3);
// [0x775fd0] (283 bytes) sub_775FD0
// int sub_775FD0(int a1);
// [0x7760f0] (283 bytes) sub_7760F0
// int sub_7760F0(int a1, int a2, int a3);
// [0x776210] (261 bytes) sub_776210
// float *sub_776210(float *a1, float *a2, float *a3);
// [0x776320] (157 bytes) sub_776320
// unsigned int sub_776320(gameswf::String *a1, gameswf *s);
// [0x7763c0] (382 bytes) sub_7763C0
// unsigned int sub_7763C0(gameswf::String *a1, char *a2);
// [0x776540] (127 bytes) sub_776540
// int sub_776540(int a1, gameswf *a2, int a3);
// [0x7765c0] (169 bytes) sub_7765C0
// int sub_7765C0(int a1);
// [0x776670] (927 bytes) sub_776670
// int sub_776670(int a1, int a2);
// [0x776a10] (142 bytes) sub_776A10
// void *sub_776A10();
// [0x776aa0] (718 bytes) void std::list<int,GameAllocator<int>>::sort<bool (*)(int const&,int const&)>(bool (*)(int const&,int const&))
// void std::list<int,GameAllocator<int>>::sort<bool (*)(int const&,int const&)>(;
// [0x776d70] (233 bytes) __gnu_cxx::__normal_iterator<Pickupable **,std::vector<Pickupable *,std::allocator<Pickupable *>>> std::find<__gnu_cxx::__normal_iterator<Pickupable **,std::vector<Pickupable *,std::allocator<Pickupable *>>>,Pickupable *>(__gnu_cxx::__normal_iterator<Pickupable **,std::vector<Pickupable *,std::allocator<Pickupable *>>>,__gnu_cxx::__normal_iterator<Pickupable **,std::vector<Pickupable *,std::allocator<Pickupable *>>>,Pickupable * const&)
// uint32_t *std::find<__gnu_cxx::__normal_iterator<Pickupable **,std::vector<Pickupable *>>,Pickupable *>( uint32_t *a1, uint32_t *a2, int a3, int *a4);
// [0x776e60] (482 bytes) sub_776E60
// char sub_776E60(uint32_t *a1, float *a2, float **a3, float *a4, int a5, int a6);
// [0x777050] (210 bytes) sub_777050
// int sub_777050(int a1, int a2);
// [0x777130] (67 bytes) sub_777130
// void sub_777130(uint32_t *a1);
// [0x777180] (85 bytes) sub_777180
// uint32_t *sub_777180(int a1);
// [0x7771e0] (1285 bytes) sub_7771E0
// int sub_7771E0(int a1, int a2);
// [0x7776f0] (957 bytes) std::vector<boost::shared_ptr<SwfManager::MenuInfo>,GameAllocator<boost::shared_ptr<SwfManager::MenuInfo>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<SwfManager::MenuInfo>*,std::vector<boost::shared_ptr<SwfManager::MenuInfo>,GameAllocator<boost::shared_ptr<SwfManager::MenuInfo>>>>,boost::shared_ptr<SwfManager::MenuInfo> const&)
// int std::vector<boost::shared_ptr<SwfManager::MenuInfo>,GameAllocator<boost::shared_ptr<SwfManager::MenuInfo>>>::_M_insert_aux( size_t **a1, size_t *a2, size_t *a3);
// [0x777ab0] (436 bytes) std::vector<Pickupable *,std::allocator<Pickupable *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Pickupable **,std::vector<Pickupable *,std::allocator<Pickupable *>>>,Pickupable * const&)
// void std::vector<Pickupable *>::_M_insert_aux(int a1, char *src, int *a3);
// [0x777c70] (169 bytes) sub_777C70
// void sub_777C70(uint32_t *a1, int a2);
// [0x777d20] (436 bytes) std::vector<ParkedSpawnPoint *,std::allocator<ParkedSpawnPoint *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<ParkedSpawnPoint **,std::vector<ParkedSpawnPoint *,std::allocator<ParkedSpawnPoint *>>>,ParkedSpawnPoint * const&)
// void std::vector<ParkedSpawnPoint *>::_M_insert_aux(int a1, char *src, int *a3);
// [0x777ee0] (436 bytes) std::vector<RoadBlockSpawnPoint *,std::allocator<RoadBlockSpawnPoint *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<RoadBlockSpawnPoint **,std::vector<RoadBlockSpawnPoint *,std::allocator<RoadBlockSpawnPoint *>>>,RoadBlockSpawnPoint * const&)
// void std::vector<RoadBlockSpawnPoint *>::_M_insert_aux(int a1, char *src, int *a3);
// [0x7780a0] (436 bytes) std::vector<SpawnZone *,std::allocator<SpawnZone *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<SpawnZone **,std::vector<SpawnZone *,std::allocator<SpawnZone *>>>,SpawnZone * const&)
// void std::vector<SpawnZone *>::_M_insert_aux(int a1, char *src, int *a3);
// [0x778260] (472 bytes) void std::__insertion_sort<__gnu_cxx::__normal_iterator<StockItem::StockItemInfo *,std::vector<StockItem::StockItemInfo,std::allocator<StockItem::StockItemInfo>>>>(__gnu_cxx::__normal_iterator<StockItem::StockItemInfo *,std::vector<StockItem::StockItemInfo,std::allocator<StockItem::StockItemInfo>>>,__gnu_cxx::__normal_iterator<StockItem::StockItemInfo *,std::vector<StockItem::StockItemInfo,std::allocator<StockItem::StockItemInfo>>>)
// int std::__insertion_sort<__gnu_cxx::__normal_iterator<StockItem::StockItemInfo *,std::vector<StockItem::StockItemInfo>>>( int a1, int a2);
// [0x778440] (1131 bytes) std::vector<ProtectedUnsignedInt,GameAllocator<ProtectedUnsignedInt>>::_M_fill_insert(__gnu_cxx::__normal_iterator<ProtectedUnsignedInt*,std::vector<ProtectedUnsignedInt,GameAllocator<ProtectedUnsignedInt>>>,unsigned int,ProtectedUnsignedInt const&)
// void std::vector<ProtectedUnsignedInt,GameAllocator<ProtectedUnsignedInt>>::_M_fill_insert( int *a1, char *a2, unsigned int a3, unsigned int *a4);
// [0x7788b0] (1209 bytes) std::vector<SpawnManager::StructInfoPersistantData,std::allocator<SpawnManager::StructInfoPersistantData>>::_M_fill_insert(__gnu_cxx::__normal_iterator<SpawnManager::StructInfoPersistantData*,std::vector<SpawnManager::StructInfoPersistantData,std::allocator<SpawnManager::StructInfoPersistantData>>>,unsigned int,SpawnManager::StructInfoPersistantData const&)
// void std::vector<SpawnManager::StructInfoPersistantData>::_M_fill_insert( int a1, unsigned int *src, unsigned int a3, unsigned int *a4);
// [0x778d70] (554 bytes) sub_778D70
// int sub_778D70(int a1);
// [0x778fa0] (169 bytes) void std::iter_swap<__gnu_cxx::__normal_iterator<StockItem::StockItemInfo *,std::vector<StockItem::StockItemInfo,std::allocator<StockItem::StockItemInfo>>>,__gnu_cxx::__normal_iterator<StockItem::StockItemInfo *,std::vector<StockItem::StockItemInfo,std::allocator<StockItem::StockItemInfo>>>>(__gnu_cxx::__normal_iterator<StockItem::StockItemInfo *,std::vector<StockItem::StockItemInfo,std::allocator<StockItem::StockItemInfo>>>,__gnu_cxx::__normal_iterator<StockItem::StockItemInfo *,std::vector<StockItem::StockItemInfo,std::allocator<StockItem::StockItemInfo>>>)
// int std::iter_swap<__gnu_cxx::__normal_iterator<StockItem::StockItemInfo *,std::vector<StockItem::StockItemInfo>>,__gnu_cxx::__normal_iterator<StockItem::StockItemInfo *,std::vector<StockItem::StockItemInfo>>>( int a1, int a2);
// [0x779050] (846 bytes) void std::make_heap<__gnu_cxx::__normal_iterator<StockItem::StockItemInfo *,std::vector<StockItem::StockItemInfo,std::allocator<StockItem::StockItemInfo>>>>(__gnu_cxx::__normal_iterator<StockItem::StockItemInfo *,std::vector<StockItem::StockItemInfo,std::allocator<StockItem::StockItemInfo>>>,__gnu_cxx::__normal_iterator<StockItem::StockItemInfo *,std::vector<StockItem::StockItemInfo,std::allocator<StockItem::StockItemInfo>>>)
// int std::make_heap<__gnu_cxx::__normal_iterator<StockItem::StockItemInfo *,std::vector<StockItem::StockItemInfo>>>( int a1, int a2);
// [0x7793a0] (795 bytes) void std::__pop_heap<__gnu_cxx::__normal_iterator<StockItem::StockItemInfo *,std::vector<StockItem::StockItemInfo,std::allocator<StockItem::StockItemInfo>>>>(__gnu_cxx::__normal_iterator<StockItem::StockItemInfo *,std::vector<StockItem::StockItemInfo,std::allocator<StockItem::StockItemInfo>>>,__gnu_cxx::__normal_iterator<StockItem::StockItemInfo *,std::vector<StockItem::StockItemInfo,std::allocator<StockItem::StockItemInfo>>>,__gnu_cxx::__normal_iterator<StockItem::StockItemInfo *,std::vector<StockItem::StockItemInfo,std::allocator<StockItem::StockItemInfo>>>)
// int std::__pop_heap<__gnu_cxx::__normal_iterator<StockItem::StockItemInfo *,std::vector<StockItem::StockItemInfo>>>( int a1, int a2, int a3);
// [0x7796c0] (651 bytes) void std::__introsort_loop<__gnu_cxx::__normal_iterator<StockItem::StockItemInfo *,std::vector<StockItem::StockItemInfo,std::allocator<StockItem::StockItemInfo>>>,int>(__gnu_cxx::__normal_iterator<StockItem::StockItemInfo *,std::vector<StockItem::StockItemInfo,std::allocator<StockItem::StockItemInfo>>>,__gnu_cxx::__normal_iterator<StockItem::StockItemInfo *,std::vector<StockItem::StockItemInfo,std::allocator<StockItem::StockItemInfo>>>,int)
// int std::__introsort_loop<__gnu_cxx::__normal_iterator<StockItem::StockItemInfo *,std::vector<StockItem::StockItemInfo>>,int>( int a1, unsigned int a2, int a3);
// [0x779950] (369 bytes) void std::sort<__gnu_cxx::__normal_iterator<StockItem::StockItemInfo *,std::vector<StockItem::StockItemInfo,std::allocator<StockItem::StockItemInfo>>>>(__gnu_cxx::__normal_iterator<StockItem::StockItemInfo *,std::vector<StockItem::StockItemInfo,std::allocator<StockItem::StockItemInfo>>>,__gnu_cxx::__normal_iterator<StockItem::StockItemInfo *,std::vector<StockItem::StockItemInfo,std::allocator<StockItem::StockItemInfo>>>)
// void std::sort<__gnu_cxx::__normal_iterator<StockItem::StockItemInfo *,std::vector<StockItem::StockItemInfo>>>( int a1, unsigned int a2);
// [0x779ad0] (45 bytes) sub_779AD0
// void sub_779AD0(uint32_t *a1);
// [0x779b00] (526 bytes) std::vector<std::string,GameAllocator<std::string>>::operator=(std::vector<std::string,GameAllocator<std::string>> const&)
// std::vector<std::string, GameAllocator<std::string>> *std::vector<std::string,GameAllocator<std::string>>::operator=( std::vector<std::string, GameAllocator<std::string>> *this, const std::vector<std::string, GameAllocator<std::string>> *a2);
// [0x779d10] (162 bytes) sub_779D10
// uint32_t *sub_779D10(int a1);
// [0x779dc0] (48 bytes) sub_779DC0
// std::vector<std::string, GameAllocator<std::string>> *sub_779DC0(int a1, int a2);
// [0x779df0] (237 bytes) sub_779DF0
// int sub_779DF0(int a1, int a2, char *a3);
