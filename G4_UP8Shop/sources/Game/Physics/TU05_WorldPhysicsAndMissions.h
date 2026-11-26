#pragma once
// ============================================================================
// TU05_WorldPhysicsAndMissions.h
// Complete Translation Unit [05/41]
// Binary Range in lib/x86/libGangstar4.so: 0x657390 .. 0x681e40 (170 KB)
// Total Decompiled Functions in TU: 478 (100% coverage)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// Function Table in Translation Unit:
// [0x657390] (2080 bytes) sub_657390
// int sub_657390();
// [0x657bb0] (145 bytes) sub_657BB0
// int sub_657BB0(int a1, int a2);
// [0x657c50] (24 bytes) sub_657C50
// int sub_657C50(int a1);
// [0x657c70] (158 bytes) sub_657C70
// int sub_657C70(uint32_t *a1);
// [0x657d10] (24 bytes) sub_657D10
// int sub_657D10(int a1);
// [0x657d30] (18 bytes) sub_657D30
// int sub_657D30(uint32_t *a1);
// [0x657d50] (21 bytes) sub_657D50
// int sub_657D50(int a1);
// [0x657d70] (21 bytes) sub_657D70
// int sub_657D70(int a1);
// [0x657d90] (12 bytes) sub_657D90
// int sub_657D90();
// [0x657da0] (18 bytes) sub_657DA0
// int sub_657DA0(uint32_t *a1);
// [0x657dc0] (244 bytes) sub_657DC0
// int sub_657DC0(uint32_t *a1);
// [0x657ec0] (77 bytes) sub_657EC0
// int sub_657EC0(int a1);
// [0x657f10] (51 bytes) sub_657F10
// int sub_657F10(int a1, int a2);
// [0x657f50] (64 bytes) sub_657F50
// int sub_657F50(int a1);
// [0x657f98] (1 bytes) nullsub_113
// void nullsub_113();
// [0x657fa0] (12 bytes) sub_657FA0
// int sub_657FA0();
// [0x657fb0] (12 bytes) sub_657FB0
// int sub_657FB0();
// [0x657fc0] (12 bytes) sub_657FC0
// int sub_657FC0();
// [0x657fd0] (12 bytes) sub_657FD0
// int sub_657FD0();
// [0x657fe0] (12 bytes) sub_657FE0
// int sub_657FE0();
// [0x657ff0] (12 bytes) sub_657FF0
// int sub_657FF0();
// [0x658008] (1 bytes) nullsub_114
// void nullsub_114();
// [0x658010] (12 bytes) sub_658010
// int sub_658010();
// [0x658020] (12 bytes) sub_658020
// int sub_658020();
// [0x658030] (12 bytes) sub_658030
// int sub_658030();
// [0x658040] (12 bytes) sub_658040
// int sub_658040();
// [0x658050] (12 bytes) sub_658050
// int sub_658050();
// [0x658060] (12 bytes) sub_658060
// int sub_658060();
// [0x658078] (1 bytes) nullsub_115
// void nullsub_115();
// [0x658080] (12 bytes) sub_658080
// int sub_658080();
// [0x658090] (12 bytes) sub_658090
// int sub_658090();
// [0x6580a0] (12 bytes) sub_6580A0
// int sub_6580A0();
// [0x6580b0] (12 bytes) sub_6580B0
// int sub_6580B0();
// [0x6580c0] (12 bytes) sub_6580C0
// int sub_6580C0();
// [0x6580d0] (12 bytes) sub_6580D0
// int sub_6580D0();
// [0x6580e0] (15 bytes) sub_6580E0
// int sub_6580E0(uint32_t *a1, int a2);
// [0x6580f0] (150 bytes) sub_6580F0
// int sub_6580F0(int a1, int a2);
// [0x658190] (296 bytes) sub_658190
// int sub_658190(int a1, char *needle, char *a3);
// [0x6582c0] (296 bytes) sub_6582C0
// int sub_6582C0(int a1, char *needle, char *a3);
// [0x6583f0] (37 bytes) sub_6583F0
// int sub_6583F0(int a1);
// [0x658420] (37 bytes) sub_658420
// int sub_658420(int a1);
// [0x658450] (37 bytes) sub_658450
// int sub_658450(int a1);
// [0x658480] (15 bytes) sub_658480
// int sub_658480(uint32_t *a1);
// [0x658490] (54 bytes) sub_658490
// int sub_658490(uint32_t *a1);
// [0x6584d0] (15 bytes) sub_6584D0
// int sub_6584D0(uint32_t *a1);
// [0x6584e0] (114 bytes) sub_6584E0
// int sub_6584E0(uint32_t *a1);
// [0x658560] (18 bytes) sub_658560
// int sub_658560(uint32_t *a1);
// [0x658580] (44 bytes) sub_658580
// int sub_658580(int a1);
// [0x6585b0] (18 bytes) sub_6585B0
// int sub_6585B0(uint32_t *a1);
// [0x6585d0] (44 bytes) sub_6585D0
// int sub_6585D0(int a1);
// [0x658600] (115 bytes) sub_658600
// int sub_658600(int a1, int a2);
// [0x658680] (46 bytes) sub_658680
// int sub_658680(int a1);
// [0x6586b0] (150 bytes) sub_6586B0
// void sub_6586B0(int a1, int a2, int a3);
// [0x658750] (76 bytes) sub_658750
// void sub_658750(uint32_t *a1, int a2, char a3);
// [0x6587a0] (371 bytes) sub_6587A0
// void sub_6587A0(int a1, uint32_t *a2);
// [0x658920] (179 bytes) sub_658920
// int *sub_658920(int *a1, int a2, int a3, int a4, uint32_t *a5);
// [0x6589e0] (234 bytes) sub_6589E0
// uint32_t *sub_6589E0(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5);
// [0x658ad0] (15 bytes) sub_658AD0
// int sub_658AD0(char *a1);
// [0x658ae0] (75 bytes) sub_658AE0
// void sub_658AE0(uint32_t *a1);
// [0x658b30] (152 bytes) sub_658B30
// int sub_658B30(uint32_t *a1);
// [0x658bd0] (15 bytes) sub_658BD0
// int sub_658BD0(uint32_t *a1);
// [0x658be0] (115 bytes) sub_658BE0
// int sub_658BE0(uint32_t *a1);
// [0x658c60] (15 bytes) sub_658C60
// int sub_658C60(uint32_t *a1);
// [0x658c70] (115 bytes) sub_658C70
// int sub_658C70(uint32_t *a1);
// [0x658cf0] (15 bytes) sub_658CF0
// int sub_658CF0(uint32_t *a1);
// [0x658d00] (146 bytes) sub_658D00
// int sub_658D00(uint32_t *a1);
// [0x658da0] (723 bytes) sub_658DA0
// int sub_658DA0(int *a1, int a2, int a3);
// [0x659080] (380 bytes) sub_659080
// float *sub_659080(float *a1, int a2, int a3);
// [0x659200] (420 bytes) sub_659200
// void sub_659200(int a1, uint32_t *a2);
// [0x6593b0] (154 bytes) sub_6593B0
// int sub_6593B0(int a1, int a2);
// [0x659450] (145 bytes) sub_659450
// int sub_659450(int a1, int a2);
// [0x6594f0] (145 bytes) sub_6594F0
// int sub_6594F0(int a1, int a2);
// [0x659590] (15 bytes) sub_659590
// int sub_659590(char *a1);
// [0x6595a0] (122 bytes) sub_6595A0
// void sub_6595A0(uint32_t *a1);
// [0x659620] (122 bytes) sub_659620
// int sub_659620(int a1, int a2, int a3);
// [0x6596a0] (862 bytes) sub_6596A0
// uint32_t *sub_6596A0();
// [0x659a00] (15 bytes) sub_659A00
// int sub_659A00(char *a1);
// [0x659a10] (123 bytes) sub_659A10
// void sub_659A10(uint32_t *a1);
// [0x659a90] (15 bytes) sub_659A90
// int sub_659A90(char *a1);
// [0x659aa0] (123 bytes) sub_659AA0
// void sub_659AA0(uint32_t *a1);
// [0x659b20] (190 bytes) sub_659B20
// float *sub_659B20(float *a1, int a2, int a3);
// [0x659be0] (15 bytes) sub_659BE0
// int sub_659BE0(char *a1);
// [0x659bf0] (154 bytes) sub_659BF0
// void sub_659BF0(uint32_t *a1);
// [0x659c90] (242 bytes) sub_659C90
// int *sub_659C90(int *a1, int a2, int a3, int a4, int a5);
// [0x659d90] (314 bytes) sub_659D90
// int sub_659D90(int *a1, int a2);
// [0x659ed0] (125 bytes) sub_659ED0
// int sub_659ED0(uint32_t *a1, int a2);
// [0x659f50] (125 bytes) sub_659F50
// int sub_659F50(uint32_t *a1, int a2);
// [0x659fd0] (248 bytes) sub_659FD0
// int sub_659FD0(int a1, float *a2);
// [0x65a0d0] (41 bytes) sub_65A0D0
// int sub_65A0D0(int a1);
// [0x65a100] (15 bytes) sub_65A100
// int sub_65A100(uint32_t *a1);
// [0x65a110] (2074 bytes) sub_65A110
// int sub_65A110(float *a1, int32_t a2);
// [0x65a930] (44 bytes) sub_65A930
// int sub_65A930(int a1);
// [0x65a960] (15 bytes) sub_65A960
// int sub_65A960(uint32_t *a1);
// [0x65a970] (1545 bytes) sub_65A970
// int sub_65A970(float *a1, float a2);
// [0x65af80] (143 bytes) sub_65AF80
// uint32_t *sub_65AF80(uint32_t *result);
// [0x65b010] (117 bytes) sub_65B010
// int sub_65B010(int a1);
// [0x65b090] (357 bytes) sub_65B090
// int sub_65B090(int *a1, int a2);
// [0x65b200] (341 bytes) sub_65B200
// int sub_65B200(int a1, uint32_t *a2, int *a3);
// [0x65b360] (132 bytes) sub_65B360
// int sub_65B360(int a1);
// [0x65b3f0] (286 bytes) sub_65B3F0
// int sub_65B3F0(int a1, char *a2);
// [0x65b510] (355 bytes) sub_65B510
// void sub_65B510(int a1, char *a2);
// [0x65b680] (731 bytes) sub_65B680
// int sub_65B680( uint32_t *i, char *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, uint32_t *a16, int a17, int a18, int a19);
// [0x65b960] (551 bytes) sub_65B960
// uint32_t *sub_65B960(int a1, void **a2, int a3, uint32_t *a4, uint32_t *a5);
// [0x65bb90] (595 bytes) sub_65BB90
// int sub_65BB90(int a1, int *a2);
// [0x65bdf0] (639 bytes) sub_65BDF0
// uint32_t *sub_65BDF0(int a1, void **a2, int a3, uint32_t *a4, uint32_t *a5);
// [0x65c070] (377 bytes) sub_65C070
// unsigned int sub_65C070(uint32_t *a1);
// [0x65c1f0] (387 bytes) sub_65C1F0
// void sub_65C1F0(int a1);
// [0x65c380] (661 bytes) sub_65C380
// int sub_65C380(int a1, float *a2);
// [0x65c620] (353 bytes) sub_65C620
// int sub_65C620(int a1, float *a2);
// [0x65c790] (1095 bytes) sub_65C790
// int sub_65C790(int a1, int a2, int a3, float *a4);
// [0x65cbe0] (3596 bytes) sub_65CBE0
// void sub_65CBE0(void ***a1, int a2, char *a3, int a4);
// [0x65d9f0] (202 bytes) sub_65D9F0
// uint32_t *sub_65D9F0(int a1);
// [0x65dac0] (202 bytes) sub_65DAC0
// uint32_t *sub_65DAC0(int a1);
// [0x65db90] (210 bytes) sub_65DB90
// void sub_65DB90(volatile int32_t **a1);
// [0x65dc70] (210 bytes) sub_65DC70
// void sub_65DC70(volatile int32_t **a1);
// [0x65dd50] (540 bytes) sub_65DD50
// uint32_t *sub_65DD50(uint32_t *a1);
// [0x65df70] (76 bytes) sub_65DF70
// int64_t sub_65DF70(int a1, int64_t a2);
// [0x65dfc0] (88 bytes) sub_65DFC0
// int sub_65DFC0(int a1, int a2, int a3);
// [0x65e020] (64 bytes) sub_65E020
// int sub_65E020(int a1, int64_t a2);
// [0x65e060] (94 bytes) sub_65E060
// int sub_65E060(int a1, int64_t a2);
// [0x65e0c0] (551 bytes) sub_65E0C0
// int sub_65E0C0(int *a1, int *a2);
// [0x65e2f0] (537 bytes) sub_65E2F0
// int sub_65E2F0(int a1, int a2);
// [0x65e510] (123 bytes) sub_65E510
// int sub_65E510(int *a1, int *a2);
// [0x65e590] (115 bytes) sub_65E590
// int sub_65E590(uint32_t *a1, int a2);
// [0x65e610] (537 bytes) sub_65E610
// int sub_65E610(int *a1, int a2);
// [0x65e830] (559 bytes) sub_65E830
// int sub_65E830(int *a1, int *a2);
// [0x65ea60] (556 bytes) sub_65EA60
// int sub_65EA60(int a1, int a2);
// [0x65ec90] (123 bytes) sub_65EC90
// int sub_65EC90(int *a1, int *a2);
// [0x65ed10] (115 bytes) sub_65ED10
// int sub_65ED10(uint32_t *a1, int a2);
// [0x65edb0] (356 bytes) sub_65EDB0
// int sub_65EDB0(int a1, char *a2, int a3);
// [0x65ef20] (97 bytes) sub_65EF20
// long double sub_65EF20(int a1, int a2, float a3);
// [0x65ef90] (155 bytes) sub_65EF90
// int sub_65EF90(int a1, int a2, int a3);
// [0x65f030] (671 bytes) sub_65F030
// int sub_65F030(int *a1, int *a2);
// [0x65f2d0] (668 bytes) sub_65F2D0
// int sub_65F2D0(int a1, int a2);
// [0x65f570] (145 bytes) sub_65F570
// int sub_65F570(int *a1, int *a2);
// [0x65f610] (115 bytes) sub_65F610
// int sub_65F610(uint32_t *a1, int a2);
// [0x65f690] (743 bytes) sub_65F690
// float *sub_65F690(uint32_t *a1, int a2);
// [0x65f980] (605 bytes) sub_65F980
// int sub_65F980(int a1, int a2);
// [0x65fbe0] (15 bytes) sub_65FBE0
// int sub_65FBE0(uint32_t *a1);
// [0x65fbf0] (2055 bytes) sub_65FBF0
// void sub_65FBF0(int a1, int a2);
// [0x660400] (289 bytes) sub_660400
// void sub_660400(int a1, int a2);
// [0x660530] (156 bytes) sub_660530
// int sub_660530(float *a1);
// [0x6605d0] (705 bytes) sub_6605D0
// float *sub_6605D0(uint32_t **a1);
// [0x6608a0] (14 bytes) sub_6608A0
// int sub_6608A0(int a1, int a2);
// [0x6608b0] (62 bytes) sub_6608B0
// int sub_6608B0(int a1);
// [0x6608f0] (303 bytes) sub_6608F0
// float *sub_6608F0(int a1, int a2, int a3, int a4);
// [0x660a20] (1295 bytes) sub_660A20
// uint32_t **sub_660A20(uint32_t **a1, float *a2, int a3, float *a4);
// [0x660f30] (1946 bytes) sub_660F30
// float *sub_660F30(uint32_t **a1, float *a2, int a3, float *a4);
// [0x6616d0] (345 bytes) sub_6616D0
// int sub_6616D0(uint32_t **a1, float *a2);
// [0x661830] (109 bytes) sub_661830
// int sub_661830(uint32_t **a1, float *a2, int a3, float *a4);
// [0x6618a0] (67 bytes) sub_6618A0
// int sub_6618A0(int a1);
// [0x6618f0] (77 bytes) sub_6618F0
// int sub_6618F0(int a1);
// [0x661940] (109 bytes) sub_661940
// int sub_661940(int a1);
// [0x6619b0] (182 bytes) sub_6619B0
// float *sub_6619B0(float *a1, int a2, int a3);
// [0x661a70] (115 bytes) sub_661A70
// double *sub_661A70(double *a1, int a2, int a3);
// [0x661af0] (40 bytes) sub_661AF0
// int sub_661AF0(int a1, int a2);
// [0x661b20] (116 bytes) sub_661B20
// int sub_661B20(int a1);
// [0x661ba0] (344 bytes) sub_661BA0
// int sub_661BA0(int a1);
// [0x661d00] (233 bytes) sub_661D00
// int sub_661D00(int a1, int *a2);
// [0x661df0] (161 bytes) sub_661DF0
// int sub_661DF0(int a1);
// [0x661f00] (646 bytes) sub_661F00
// double *sub_661F00(double *a1);
// [0x662190] (222 bytes) sub_662190
// int sub_662190(int a1, int a2);
// [0x662270] (643 bytes) sub_662270
// uint32_t *sub_662270(double *a1, int a2);
// [0x662500] (93 bytes) sub_662500
// uint32_t *sub_662500(int a1);
// [0x662560] (128 bytes) sub_662560
// int sub_662560(int a1);
// [0x662610] (83 bytes) sub_662610
// bool sub_662610(float *a1);
// [0x6626c0] (83 bytes) sub_6626C0
// bool sub_6626C0(float *a1);
// [0x662720] (140 bytes) sub_662720
// bool sub_662720(float *a1);
// [0x6627b0] (24 bytes) sub_6627B0
// uint32_t *sub_6627B0(uint32_t *a1);
// [0x662810] (83 bytes) sub_662810
// bool sub_662810(float *a1);
// [0x662870] (102 bytes) sub_662870
// int sub_662870(float *a1, float a2);
// [0x6628e0] (237 bytes) sub_6628E0
// int sub_6628E0(float *a1, float a2);
// [0x6629d0] (600 bytes) sub_6629D0
// float *sub_6629D0(float *a1, unsigned int *a2, float *a3, float *a4, char a5);
// [0x662c30] (229 bytes) sub_662C30
// float *sub_662C30(float *a1, unsigned int *a2, float *a3, float *a4);
// [0x662d20] (1335 bytes) sub_662D20
// int sub_662D20(int a1, float *a2, float *a3, float *a4, float *a5);
// [0x663260] (648 bytes) sub_663260
// int sub_663260(int a1, float *a2, float *a3, float *a4, float *a5, uint32_t *a6);
// [0x6634f0] (720 bytes) sub_6634F0
// int sub_6634F0(int a1, float *a2, float *a3, float *a4, float *a5);
// [0x6637c0] (44 bytes) sub_6637C0
// double *sub_6637C0(double *a1);
// [0x6637f0] (72 bytes) sub_6637F0
// uint32_t *sub_6637F0(uint32_t *a1, uint32_t *a2, int *a3, uint32_t *a4, int *a5);
// [0x663840] (34 bytes) sub_663840
// int sub_663840(int a1);
// [0x663870] (276 bytes) sub_663870
// int sub_663870(int64_t a1, float *a2, char a3);
// [0x663990] (45 bytes) sub_663990
// bool sub_663990(int a1, float *a2);
// [0x6639c0] (22 bytes) sub_6639C0
// int *sub_6639C0(int *a1, int *a2);
// [0x6639e0] (75 bytes) sub_6639E0
// int (**sub_6639E0(uint32_t *a1, int a2))(int);
// [0x663a30] (22 bytes) sub_663A30
// int *sub_663A30(int *a1, int *a2);
// [0x663a50] (35 bytes) sub_663A50
// bool sub_663A50(float *a1);
// [0x663a80] (12 bytes) sub_663A80
// int sub_663A80();
// [0x663a90] (799 bytes) sub_663A90
// int sub_663A90(int *a1, int *a2);
// [0x663db0] (796 bytes) sub_663DB0
// int sub_663DB0(int a1, int a2);
// [0x6640d0] (82 bytes) sub_6640D0
// int sub_6640D0(int *a1, int *a2);
// [0x664130] (206 bytes) sub_664130
// char sub_664130(int a1, float a2);
// [0x664200] (155 bytes) sub_664200
// int sub_664200(uint32_t *a1, int a2);
// [0x6642a0] (332 bytes) sub_6642A0
// int sub_6642A0(uint32_t *a1, int a2);
// [0x6643f0] (24 bytes) sub_6643F0
// int sub_6643F0(int a1);
// [0x664410] (190 bytes) sub_664410
// uint32_t *sub_664410(uint32_t *a1, char *a2);
// [0x6644d0] (269 bytes) sub_6644D0
// int sub_6644D0(char *a1);
// [0x6645e0] (33 bytes) sub_6645E0
// int sub_6645E0();
// [0x664610] (27 bytes) sub_664610
// int sub_664610();
// [0x664630] (284 bytes) sub_664630
// int sub_664630(int a1, int a2);
// [0x664750] (1703 bytes) sub_664750
// void sub_664750(unsigned int a1, int *a2);
// [0x664e00] (756 bytes) sub_664E00
// char *sub_664E00(int a1, int a2, int a3);
// [0x665100] (38 bytes) sub_665100
// char *sub_665100(int a1, int *a2);
// [0x665130] (280 bytes) sub_665130
// int *sub_665130(int a1, int a2, int a3, uint8_t *a4);
// [0x665250] (95 bytes) sub_665250
// int sub_665250(int a1, int a2, int a3);
// [0x6652b0] (270 bytes) sub_6652B0
// int sub_6652B0(int a1, int a2, char a3);
// [0x6653c0] (144 bytes) sub_6653C0
// int sub_6653C0(int a1, void **a2);
// [0x665450] (683 bytes) sub_665450
// int sub_665450(int a1, float *a2, uint32_t *a3);
// [0x665700] (151 bytes) sub_665700
// int sub_665700(int a1, float *a2, int *a3, int *a4, int *a5);
// [0x6657a0] (153 bytes) sub_6657A0
// int sub_6657A0(int a1, float *a2);
// [0x665840] (36 bytes) sub_665840
// bool sub_665840();
// [0x665890] (138 bytes) sub_665890
// int sub_665890(int a1, uint8_t a2, int a3);
// [0x665920] (1360 bytes) sub_665920
// uint32_t *sub_665920(uint32_t *a1, int a2, float *a3, float a4);
// [0x665e70] (123 bytes) sub_665E70
// void sub_665E70(uint32_t *a1, int a2);
// [0x665ef0] (243 bytes) sub_665EF0
// int sub_665EF0(int a1, float *a2);
// [0x665ff0] (59 bytes) sub_665FF0
// uint32_t *sub_665FF0(uint32_t *a1, int a2);
// [0x666030] (1998 bytes) sub_666030
// void sub_666030(int a1);
// [0x666800] (383 bytes) sub_666800
// int sub_666800(uint32_t *a1);
// [0x666980] (138 bytes) sub_666980
// int sub_666980(int a1);
// [0x666a10] (451 bytes) sub_666A10
// glitch::video::CVertexStreams *sub_666A10(int a1, int a2, int a3, int a4, int a5);
// [0x666be0] (581 bytes) sub_666BE0
// int sub_666BE0(int a1);
// [0x666e30] (113 bytes) sub_666E30
// glitch::video::CVertexStreams *sub_666E30(int a1);
// [0x666eb0] (170 bytes) sub_666EB0
// float *sub_666EB0(float *a1, float *a2);
// [0x666f60] (56 bytes) sub_666F60
// uint32_t *sub_666F60(uint32_t *a1, int *a2);
// [0x666fa0] (31 bytes) sub_666FA0
// uint32_t *sub_666FA0(uint32_t *a1, int a2);
// [0x666fc0] (321 bytes) sub_666FC0
// float *sub_666FC0(float *a1, int a2, uint32_t *a3, float a4, float a5, char a6, int a7, float a8);
// [0x667110] (9 bytes) sub_667110
// void sub_667110();
// [0x667120] (57 bytes) sub_667120
// int sub_667120(int a1);
// [0x667160] (114 bytes) sub_667160
// int sub_667160(int a1);
// [0x6671e0] (549 bytes) sub_6671E0
// void sub_6671E0(float *a1);
// [0x667410] (33 bytes) sub_667410
// uint32_t *sub_667410(uint32_t *a1, int a2, int a3);
// [0x667440] (26 bytes) sub_667440
// long double sub_667440(int a1, int a2, int a3);
// [0x667470] (34 bytes) sub_667470
// uint32_t *sub_667470(uint32_t *a1, uint32_t *a2);
// [0x6674a0] (1335 bytes) sub_6674A0
// char *sub_6674A0(int a1);
// [0x667a40] (59 bytes) sub_667A40
// uint32_t *sub_667A40(uint32_t *a1, int a2);
// [0x667a80] (1434 bytes) sub_667A80
// void sub_667A80(uint32_t *a1);
// [0x668020] (253 bytes) sub_668020
// int32_t sub_668020( int a1, int a2, int a3, volatile int32_t *a4, int a5, int a6, volatile int32_t *a7);
// [0x668120] (2163 bytes) sub_668120
// void sub_668120(int a1, char a2);
// [0x6689a0] (12 bytes) sub_6689A0
// int sub_6689A0(int a1);
// [0x6689b0] (166 bytes) sub_6689B0
// int sub_6689B0(int a1);
// [0x668a60] (317 bytes) sub_668A60
// int sub_668A60(int a1);
// [0x668ba0] (27 bytes) sub_668BA0
// int sub_668BA0(int a1);
// [0x668be0] (37 bytes) sub_668BE0
// int sub_668BE0(int a1, int a2, char a3, char a4);
// [0x668c10] (43 bytes) sub_668C10
// int sub_668C10(int a1, int a2);
// [0x668c40] (92 bytes) sub_668C40
// int sub_668C40(int a1, int a2, int a3, char a4);
// [0x668ca0] (173 bytes) sub_668CA0
// int sub_668CA0(int a1, int a2, int a3, char a4, int a5);
// [0x668d50] (314 bytes) sub_668D50
// unsigned int sub_668D50(int a1, int a2, int a3, char a4, int a5);
// [0x668e90] (325 bytes) sub_668E90
// int sub_668E90(int a1, int a2);
// [0x668fe0] (174 bytes) sub_668FE0
// char sub_668FE0(int a1, int a2, int a3);
// [0x669090] (57 bytes) sub_669090
// bool sub_669090(int a1, int a2);
// [0x6690d0] (88 bytes) sub_6690D0
// int sub_6690D0(int a1);
// [0x669130] (23 bytes) sub_669130
// int sub_669130(int a1, int a2);
// [0x669150] (147 bytes) sub_669150
// void sub_669150(int a1);
// [0x6691f0] (260 bytes) sub_6691F0
// void sub_6691F0(uint32_t *a1, int a2);
// [0x669300] (373 bytes) sub_669300
// void sub_669300(int a1);
// [0x669480] (16 bytes) sub_669480
// int sub_669480(int a1, int a2);
// [0x669490] (12 bytes) sub_669490
// int sub_669490(int a1);
// [0x6694a0] (12 bytes) sub_6694A0
// int sub_6694A0(int a1);
// [0x6694b0] (13 bytes) sub_6694B0
// int sub_6694B0(int a1);
// [0x6694c0] (13 bytes) sub_6694C0
// int sub_6694C0(int a1);
// [0x6694e0] (12 bytes) sub_6694E0
// int sub_6694E0(int a1);
// [0x6694f0] (126 bytes) sub_6694F0
// int sub_6694F0(uint32_t *a1, int a2);
// [0x669570] (586 bytes) sub_669570
// int sub_669570(int a1, int a2, int a3, char a4, uint8_t a5);
// [0x6697c0] (11411 bytes) sub_6697C0
// int sub_6697C0(__guard *a1, char a2, __guard *a3, char a4);
// [0x66c460] (265 bytes) sub_66C460
// int sub_66C460(int a1, float *a2);
// [0x66c570] (19 bytes) sub_66C570
// int sub_66C570(int a1, int a2, int a3);
// [0x66c590] (331 bytes) sub_66C590
// float *sub_66C590(float *a1, int a2, int a3);
// [0x66c6e0] (14 bytes) sub_66C6E0
// bool sub_66C6E0(int a1);
// [0x66c6f0] (12 bytes) sub_66C6F0
// int sub_66C6F0(int a1);
// [0x66c720] (14 bytes) sub_66C720
// bool sub_66C720(int a1);
// [0x66c730] (12 bytes) sub_66C730
// int sub_66C730(int a1);
// [0x66c740] (73 bytes) sub_66C740
// int sub_66C740(int a1);
// [0x66c790] (113 bytes) sub_66C790
// int sub_66C790(int a1, int a2, int a3);
// [0x66c810] (173 bytes) sub_66C810
// bool sub_66C810(int a1, int a2);
// [0x66c8c0] (163 bytes) sub_66C8C0
// bool sub_66C8C0(int a1, int a2);
// [0x66c970] (404 bytes) sub_66C970
// uint32_t *sub_66C970(uint32_t *a1);
// [0x66cb10] (127 bytes) sub_66CB10
// int sub_66CB10(int a1, int a2, int a3, int a4);
// [0x66cb90] (335 bytes) sub_66CB90
// int sub_66CB90(int a1, int a2, uint32_t *a3);
// [0x66cce0] (201 bytes) sub_66CCE0
// void sub_66CCE0(uint32_t **a1);
// [0x66cdb0] (531 bytes) sub_66CDB0
// int sub_66CDB0(int a1, int *a2);
// [0x66cfd0] (214 bytes) sub_66CFD0
// int sub_66CFD0(int **a1);
// [0x66d0b0] (717 bytes) sub_66D0B0
// int sub_66D0B0(int **a1, float *a2);
// [0x66d380] (85 bytes) sub_66D380
// uint32_t *sub_66D380(int a1, float *a2, int a3, uint32_t *a4, uint32_t *a5);
// [0x66d3e0] (233 bytes) sub_66D3E0
// unsigned int sub_66D3E0(unsigned int *a1);
// [0x66d4d0] (118 bytes) sub_66D4D0
// bool sub_66D4D0(float *a1, int a2);
// [0x66d550] (243 bytes) sub_66D550
// int sub_66D550(float *a1, int *a2);
// [0x66d650] (124 bytes) sub_66D650
// float *sub_66D650(float *a1, float *a2, int a3, int a4, int a5, int a6, int a7);
// [0x66d6d0] (143 bytes) sub_66D6D0
// int sub_66D6D0(float *a1, float *a2, int a3, int a4);
// [0x66d760] (116 bytes) sub_66D760
// long double sub_66D760(float *a1, float *a2, int a3, int a4);
// [0x66d7e0] (83 bytes) sub_66D7E0
// int sub_66D7E0(int a1);
// [0x66d860] (366 bytes) sub_66D860
// int sub_66D860(int *a1, uint8_t a2);
// [0x66d9d0] (1904 bytes) sub_66D9D0
// char *sub_66D9D0(int a1, int a2);
// [0x66e1f0] (389 bytes) sub_66E1F0
// int sub_66E1F0();
// [0x66e380] (225 bytes) sub_66E380
// int sub_66E380(uint8_t a1);
// [0x66e470] (307 bytes) sub_66E470
// int sub_66E470(int a1);
// [0x66e5b0] (26 bytes) sub_66E5B0
// void sub_66E5B0();
// [0x66e5d0] (190 bytes) sub_66E5D0
// bool sub_66E5D0();
// [0x66e690] (32 bytes) sub_66E690
// bool sub_66E690();
// [0x66e6b0] (66 bytes) sub_66E6B0
// int sub_66E6B0();
// [0x66e708] (1 bytes) nullsub_116
// void nullsub_116();
// [0x66e710] (245 bytes) sub_66E710
// int sub_66E710(uint32_t *a1);
// [0x66e810] (809 bytes) sub_66E810
// int sub_66E810(int a1, glitch::video::IVideoDriver *a2, int a3);
// [0x66ee10] (253 bytes) sub_66EE10
// void sub_66EE10(int *a1);
// [0x66ef10] (885 bytes) sub_66EF10
// void sub_66EF10();
// [0x66f290] (3572 bytes) sub_66F290
// int sub_66F290(int a1, int a2, int a3, char a4, char a5);
// [0x670090] (2636 bytes) sub_670090
// int sub_670090(uint32_t *a1);
// [0x670ae0] (1213 bytes) sub_670AE0
// int sub_670AE0(int a1, int a2, int a3);
// [0x670fa0] (193 bytes) sub_670FA0
// int sub_670FA0(int a1, int a2, int a3);
// [0x671070] (191 bytes) sub_671070
// int sub_671070(uint32_t *a1, uint32_t *a2);
// [0x671130] (40 bytes) sub_671130
// int sub_671130(int *a1);
// [0x671160] (201 bytes) sub_671160
// int sub_671160(int a1);
// [0x671230] (76 bytes) sub_671230
// int sub_671230(int a1);
// [0x671280] (89 bytes) sub_671280
// int sub_671280(uint32_t *a1);
// [0x6712e0] (92 bytes) sub_6712E0
// int sub_6712E0(uint32_t *a1);
// [0x671340] (66 bytes) sub_671340
// int sub_671340(uint32_t *a1);
// [0x671390] (215 bytes) sub_671390
// int sub_671390(int *a1);
// [0x671470] (148 bytes) sub_671470
// int sub_671470(int *a1);
// [0x671510] (219 bytes) sub_671510
// int sub_671510(int *a1);
// [0x6715f0] (389 bytes) sub_6715F0
// void sub_6715F0(int a1);
// [0x671780] (248 bytes) sub_671780
// void sub_671780();
// [0x671880] (1031 bytes) sub_671880
// void sub_671880(int a1);
// [0x671c90] (554 bytes) sub_671C90
// int sub_671C90();
// [0x671ec0] (105 bytes) sub_671EC0
// int sub_671EC0(int a1);
// [0x671f30] (476 bytes) sub_671F30
// uint32_t *sub_671F30(int a1, int a2, int a3);
// [0x672110] (147 bytes) sub_672110
// float *sub_672110(int a1, int a2, int a3, int a4);
// [0x6721b0] (148 bytes) sub_6721B0
// int sub_6721B0(uint32_t *a1);
// [0x672250] (141 bytes) sub_672250
// int sub_672250(uint32_t *a1, int a2);
// [0x6722e0] (92 bytes) sub_6722E0
// uint32_t *sub_6722E0(uint32_t *a1, uint32_t *a2, uint32_t *a3);
// [0x672340] (101 bytes) sub_672340
// int sub_672340(uint32_t *a1, uint32_t *a2);
// [0x6723b0] (218 bytes) sub_6723B0
// int sub_6723B0(uint32_t *a1, uint32_t *a2);
// [0x672490] (83 bytes) sub_672490
// int sub_672490(uint32_t *a1);
// [0x6724f0] (116 bytes) sub_6724F0
// int sub_6724F0(int a1);
// [0x672570] (95 bytes) sub_672570
// int sub_672570(uint32_t *a1);
// [0x6725d0] (1134 bytes) sub_6725D0
// int sub_6725D0(int a1, int a2, int a3);
// [0x672a40] (368 bytes) sub_672A40
// char *sub_672A40(int a1, int a2);
// [0x672bb0] (684 bytes) sub_672BB0
// int sub_672BB0(int *a1, char *a2, uint32_t *a3);
// [0x672e60] (160 bytes) sub_672E60
// uint32_t *sub_672E60(int a1, int a2);
// [0x672f00] (625 bytes) sub_672F00
// int sub_672F00(uint32_t *a1, int a2, int a3, int a4, int a5, int a6);
// [0x673180] (15 bytes) sub_673180
// uint8_t *sub_673180(uint32_t *a1, float a2);
// [0x673190] (3119 bytes) sub_673190
// uint8_t *sub_673190(int *a1, float a2);
// [0x673dc0] (811 bytes) sub_673DC0
// int sub_673DC0(int a1, int a2);
// [0x6740f0] (381 bytes) sub_6740F0
// void sub_6740F0(int *a1, int a2);
// [0x674270] (675 bytes) sub_674270
// int sub_674270(__m128i *a1);
// [0x674520] (392 bytes) sub_674520
// int sub_674520(uint32_t *a1);
// [0x6746b0] (221 bytes) sub_6746B0
// int sub_6746B0(uint32_t *a1);
// [0x674790] (104 bytes) sub_674790
// void sub_674790(char *a1);
// [0x674800] (676 bytes) sub_674800
// uint32_t *sub_674800(int *a1);
// [0x674ab0] (741 bytes) sub_674AB0
// int sub_674AB0(uint32_t *a1);
// [0x674da0] (159 bytes) sub_674DA0
// int sub_674DA0(uint32_t *a1);
// [0x674e40] (81 bytes) sub_674E40
// uint32_t *sub_674E40(uint32_t *a1, uint32_t *a2, uint32_t *a3);
// [0x674ea0] (167 bytes) sub_674EA0
// void sub_674EA0(uint32_t *a1);
// [0x674f50] (88 bytes) sub_674F50
// void sub_674F50(int a1);
// [0x674fb0] (96 bytes) sub_674FB0
// void sub_674FB0(void **a1);
// [0x675010] (353 bytes) sub_675010
// int sub_675010(int a1, char *s);
// [0x675180] (318 bytes) sub_675180
// void sub_675180(uint32_t *a1, unsigned int a2);
// [0x6752c0] (150 bytes) sub_6752C0
// int sub_6752C0(int a1);
// [0x675360] (567 bytes) sub_675360
// void sub_675360(int a1);
// [0x6755a0] (56 bytes) sub_6755A0
// void sub_6755A0(void *a1);
// [0x6755e0] (301 bytes) sub_6755E0
// void sub_6755E0(uint32_t *a1, int a2);
// [0x675710] (150 bytes) sub_675710
// int sub_675710(int a1, int a2, int a3);
// [0x6757b0] (311 bytes) sub_6757B0
// void sub_6757B0(int a1);
// [0x6758f0] (56 bytes) sub_6758F0
// void sub_6758F0(void *a1);
// [0x675930] (209 bytes) sub_675930
// float *sub_675930(int a1, float *a2, float a3);
// [0x675a10] (148 bytes) sub_675A10
// int sub_675A10(int a1);
// [0x675ab0] (7529 bytes) sub_675AB0
// 0x675ab0 sub_675AB0
// [0x677820] (174 bytes) sub_677820
// int sub_677820(int a1);
// [0x6778d0] (1420 bytes) sub_6778D0
// void *sub_6778D0(int a1, long double a2, int a3, int a4, int a5);
// [0x677e60] (2620 bytes) sub_677E60
// char *sub_677E60(int a1, int a2);
// [0x6788a0] (52 bytes) sub_6788A0
// int sub_6788A0(int a1);
// [0x6788e0] (74 bytes) sub_6788E0
// void sub_6788E0(void **a1);
// [0x678930] (1085 bytes) sub_678930
// int sub_678930(int a1, int a2, int a3, char *a4, int a5, char *a6);
// [0x678d70] (4680 bytes) sub_678D70
// void sub_678D70(int a1);
// [0x679fc0] (283 bytes) sub_679FC0
// void sub_679FC0(int *a1, int a2, char a3);
// [0x67a0e0] (257 bytes) sub_67A0E0
// int sub_67A0E0(uint32_t *a1, unsigned int a2);
// [0x67a1f0] (491 bytes) sub_67A1F0
// int sub_67A1F0(int a1);
// [0x67a3e0] (642 bytes) sub_67A3E0
// int sub_67A3E0(uint32_t *a1, uint32_t *a2, int a3, int a4, int a5);
// [0x67a670] (1398 bytes) sub_67A670
// int sub_67A670(int a1, int a2);
// [0x67abf0] (15 bytes) sub_67ABF0
// int sub_67ABF0(uint32_t *a1, int a2);
// [0x67ac00] (593 bytes) sub_67AC00
// int sub_67AC00(uint32_t *a1, uint32_t *a2);
// [0x67ae60] (15 bytes) sub_67AE60
// int sub_67AE60(uint32_t *a1, int a2);
// [0x67ae70] (601 bytes) sub_67AE70
// int sub_67AE70(uint32_t *a1, int a2);
// [0x67b0d0] (15 bytes) sub_67B0D0
// int sub_67B0D0(uint32_t *a1, int a2);
// [0x67b0e0] (2133 bytes) sub_67B0E0
// int sub_67B0E0(uint32_t *a1, uint32_t *a2);
// [0x67b940] (1922 bytes) sub_67B940
// bool sub_67B940(uint32_t *a1);
// [0x67c0d0] (72 bytes) sub_67C0D0
// bool sub_67C0D0(uint32_t *a1);
// [0x67c120] (682 bytes) sub_67C120
// int sub_67C120(uint32_t *a1);
// [0x67c3d0] (284 bytes) sub_67C3D0
// uint32_t *sub_67C3D0(uint32_t *a1, int a2, int *a3, int *a4);
// [0x67c4f0] (215 bytes) sub_67C4F0
// int sub_67C4F0(int a1, int *a2);
// [0x67c5d0] (269 bytes) sub_67C5D0
// uint32_t *sub_67C5D0(uint32_t *a1, int a2);
// [0x67c6e0] (3654 bytes) sub_67C6E0
// int sub_67C6E0(float *a1);
// [0x67d530] (43 bytes) sub_67D530
// int sub_67D530(int a1, uint32_t *a2);
// [0x67d560] (24 bytes) sub_67D560
// uint32_t *sub_67D560(uint32_t *a1);
// [0x67d588] (1 bytes) nullsub_117
// void nullsub_117();
// [0x67d590] (12 bytes) sub_67D590
// int sub_67D590(int a1);
// [0x67d5a0] (12 bytes) sub_67D5A0
// long double sub_67D5A0(int a1);
// [0x67d5b0] (12 bytes) sub_67D5B0
// long double sub_67D5B0(int a1);
// [0x67d5c0] (13 bytes) sub_67D5C0
// int sub_67D5C0(int a1);
// [0x67d5d0] (14 bytes) sub_67D5D0
// int sub_67D5D0(int a1, int a2);
// [0x67d5e0] (12 bytes) sub_67D5E0
// int sub_67D5E0(int a1);
// [0x67d608] (1 bytes) nullsub_118
// void nullsub_118();
// [0x67d618] (1 bytes) nullsub_119
// void nullsub_119();
// [0x67d620] (9 bytes) sub_67D620
// int sub_67D620();
// [0x67d630] (17 bytes) sub_67D630
// uint32_t *sub_67D630(uint32_t *a1);
// [0x67d650] (35 bytes) sub_67D650
// double *sub_67D650(double *a1);
// [0x67d680] (9 bytes) sub_67D680
// int sub_67D680();
// [0x67d690] (9 bytes) sub_67D690
// int sub_67D690();
// [0x67d6a0] (17 bytes) sub_67D6A0
// uint32_t *sub_67D6A0(uint32_t *a1);
// [0x67d6c0] (17 bytes) sub_67D6C0
// uint32_t *sub_67D6C0(uint32_t *a1);
// [0x67d6e0] (9 bytes) sub_67D6E0
// int sub_67D6E0();
// [0x67d6f0] (9 bytes) sub_67D6F0
// int sub_67D6F0();
// [0x67d700] (9 bytes) sub_67D700
// int sub_67D700();
// [0x67d710] (9 bytes) sub_67D710
// int sub_67D710();
// [0x67d720] (27 bytes) sub_67D720
// uint32_t *sub_67D720(uint32_t *a1);
// [0x67d740] (12 bytes) sub_67D740
// long double sub_67D740(int a1);
// [0x67d750] (14 bytes) sub_67D750
// int sub_67D750(int a1, uint32_t *a2);
// [0x67d760] (12 bytes) sub_67D760
// long double sub_67D760(int a1);
// [0x67d770] (14 bytes) sub_67D770
// int sub_67D770(int a1, uint32_t *a2);
// [0x67d790] (15 bytes) sub_67D790
// int sub_67D790(uint32_t *a1);
// [0x67d7a0] (12 bytes) sub_67D7A0
// int sub_67D7A0();
// [0x67d7b0] (18 bytes) sub_67D7B0
// int sub_67D7B0(uint32_t *a1);
// [0x67d7d0] (9 bytes) sub_67D7D0
// int sub_67D7D0();
// [0x67d7e0] (12 bytes) sub_67D7E0
// int sub_67D7E0(int a1);
// [0x67d7f0] (26 bytes) sub_67D7F0
// uint32_t *sub_67D7F0(uint32_t *a1, uint32_t *a2);
// [0x67d810] (27 bytes) sub_67D810
// uint32_t *sub_67D810(uint32_t *a1);
// [0x67d840] (15 bytes) sub_67D840
// int sub_67D840(uint32_t *a1);
// [0x67d850] (12 bytes) sub_67D850
// int sub_67D850();
// [0x67d860] (18 bytes) sub_67D860
// int sub_67D860(uint32_t *a1);
// [0x67d880] (9 bytes) sub_67D880
// int sub_67D880();
// [0x67d890] (12 bytes) sub_67D890
// int sub_67D890(int a1);
// [0x67d8a0] (26 bytes) sub_67D8A0
// uint32_t *sub_67D8A0(uint32_t *a1, uint32_t *a2);
// [0x67d8c0] (15 bytes) sub_67D8C0
// int sub_67D8C0(uint32_t *a1);
// [0x67d8d0] (12 bytes) sub_67D8D0
// int sub_67D8D0();
// [0x67d8f0] (15 bytes) sub_67D8F0
// int sub_67D8F0(uint32_t *a1);
// [0x67d900] (12 bytes) sub_67D900
// int sub_67D900();
// [0x67d910] (12 bytes) sub_67D910
// int sub_67D910(int a1);
// [0x67d920] (26 bytes) sub_67D920
// uint32_t *sub_67D920(uint32_t *a1, uint32_t *a2);
// [0x67d940] (28 bytes) sub_67D940
// int sub_67D940(int a1);
// [0x67d960] (27 bytes) std::auto_ptr<WorldPhysicsLoadTask>::~auto_ptr()
// void std::auto_ptr<WorldPhysicsLoadTask>::~auto_ptr(std::auto_ptr<WorldPhysicsLoadTask> *this);
// [0x67d980] (42 bytes) sub_67D980
// void sub_67D980(uint32_t *a1);
// [0x67d9b0] (46 bytes) sub_67D9B0
// void sub_67D9B0(uint8_t *a1);
// [0x67d9e0] (45 bytes) sub_67D9E0
// void sub_67D9E0(uint32_t *a1);
// [0x67da10] (41 bytes) sub_67DA10
// void sub_67DA10(int a1);
// [0x67da40] (42 bytes) sub_67DA40
// void sub_67DA40(glf::Task *a1);
// [0x67da70] (183 bytes) sub_67DA70
// char sub_67DA70(int a1, unsigned int a2, unsigned int a3, char a4);
// [0x67db30] (64 bytes) sub_67DB30
// void sub_67DB30(glf::Task *a1);
// [0x67db70] (157 bytes) sub_67DB70
// int sub_67DB70(int a1);
// [0x67dc10] (157 bytes) sub_67DC10
// int sub_67DC10(int a1);
// [0x67dcb0] (87 bytes) sub_67DCB0
// void sub_67DCB0(int a1);
// [0x67dd10] (112 bytes) sub_67DD10
// void sub_67DD10(uint32_t *a1);
// [0x67dd80] (104 bytes) sub_67DD80
// int (**sub_67DD80(uint32_t *a1))(int);
// [0x67ddf0] (113 bytes) sub_67DDF0
// int sub_67DDF0(int a1, float a2);
// [0x67de70] (1537 bytes) sub_67DE70
// uint32_t *sub_67DE70(int a1, int a2);
// [0x67e480] (931 bytes) sub_67E480
// void sub_67E480(uint32_t *a1);
// [0x67e830] (10 bytes) sub_67E830
// void sub_67E830(int a1);
// [0x67e840] (89 bytes) sub_67E840
// void sub_67E840(void ***a1);
// [0x67e8a0] (90 bytes) std::vector<std::pair<std::string,gameswf::ASValue>,GameAllocator<std::pair<std::string,gameswf::ASValue>>>::~vector()
// void std::vector<std::pair<std::string,gameswf::ASValue>,GameAllocator<std::pair<std::string,gameswf::ASValue>>>::~vector( std::vector<std::pair<std::string, gameswf::ASValue>, GameAllocator<std::pair<std::string, gameswf::ASValue>>> *this);
// [0x67e900] (142 bytes) sub_67E900
// void *sub_67E900();
// [0x67e990] (137 bytes) sub_67E990
// void sub_67E990(uint32_t *a1, int a2);
// [0x67ea20] (567 bytes) std::_Rb_tree<std::string,std::pair<std::string const,glitch::core::aabbox3d<float>>,std::_Select1st<std::pair<std::string const,glitch::core::aabbox3d<float>>>,std::less<std::string>,std::allocator<std::pair<std::string const,glitch::core::aabbox3d<float>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,glitch::core::aabbox3d<float>>> *)
// void std::_Rb_tree<std::string,std::pair<std::string const,glitch::core::aabbox3d<float>>,std::_Select1st<std::pair<std::string const,glitch::core::aabbox3d<float>>>,std::less<std::string>,std::allocator<std::pair<std::string const,glitch::core::aabbox3d<float>>>>::_M_erase( int a1, uint32_t *a2);
// [0x67ec60] (425 bytes) std::_Rb_tree<PhysicsBreakablePartListener *,PhysicsBreakablePartListener *,std::_Identity<PhysicsBreakablePartListener *>,std::less<PhysicsBreakablePartListener *>,std::allocator<PhysicsBreakablePartListener *>>::_M_erase(std::_Rb_tree_node<PhysicsBreakablePartListener *> *)
// void std::_Rb_tree<PhysicsBreakablePartListener *,PhysicsBreakablePartListener *,std::_Identity<PhysicsBreakablePartListener *>,std::less<PhysicsBreakablePartListener *>,std::allocator<PhysicsBreakablePartListener *>>::_M_erase( int a1, uint32_t *a2);
// [0x67ee10] (567 bytes) std::_Rb_tree<std::string,std::pair<std::string const,PhysicsStateManager *>,std::_Select1st<std::pair<std::string const,PhysicsStateManager *>>,std::less<std::string>,std::allocator<std::pair<std::string const,PhysicsStateManager *>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,PhysicsStateManager *>> *)
// void std::_Rb_tree<std::string,std::pair<std::string const,PhysicsStateManager *>,std::_Select1st<std::pair<std::string const,PhysicsStateManager *>>,std::less<std::string>,std::allocator<std::pair<std::string const,PhysicsStateManager *>>>::_M_erase( int a1, uint32_t *a2);
// [0x67f050] (436 bytes) std::vector<PhysicsExplosion *,std::allocator<PhysicsExplosion *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<PhysicsExplosion **,std::vector<PhysicsExplosion *,std::allocator<PhysicsExplosion *>>>,PhysicsExplosion * const&)
// void std::vector<PhysicsExplosion *>::_M_insert_aux(int a1, char *src, int *a3);
// [0x67f210] (436 bytes) std::vector<BreakablePieceInfo *,std::allocator<BreakablePieceInfo *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<BreakablePieceInfo **,std::vector<BreakablePieceInfo *,std::allocator<BreakablePieceInfo *>>>,BreakablePieceInfo * const&)
// void std::vector<BreakablePieceInfo *>::_M_insert_aux(int a1, char *src, int *a3);
// [0x67f3d0] (425 bytes) std::_Rb_tree<PhysicsStreamerListener *,PhysicsStreamerListener *,std::_Identity<PhysicsStreamerListener *>,std::less<PhysicsStreamerListener *>,std::allocator<PhysicsStreamerListener *>>::_M_erase(std::_Rb_tree_node<PhysicsStreamerListener *> *)
// void std::_Rb_tree<PhysicsStreamerListener *,PhysicsStreamerListener *,std::_Identity<PhysicsStreamerListener *>,std::less<PhysicsStreamerListener *>,std::allocator<PhysicsStreamerListener *>>::_M_erase( int a1, uint32_t *a2);
// [0x67f580] (425 bytes) std::_Rb_tree<int const,std::pair<int const,glitch::core::aabbox3d<float>>,std::_Select1st<std::pair<int const,glitch::core::aabbox3d<float>>>,std::less<int const>,std::allocator<std::pair<int const,glitch::core::aabbox3d<float>>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,glitch::core::aabbox3d<float>>> *)
// void std::_Rb_tree<int const,std::pair<int const,glitch::core::aabbox3d<float>>,std::_Select1st<std::pair<int const,glitch::core::aabbox3d<float>>>,std::less<int const>,std::allocator<std::pair<int const,glitch::core::aabbox3d<float>>>>::_M_erase( int a1, uint32_t *a2);
// [0x67f730] (854 bytes) std::vector<glitch::core::aabbox3d<float>,std::allocator<glitch::core::aabbox3d<float>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<glitch::core::aabbox3d<float>*,std::vector<glitch::core::aabbox3d<float>,std::allocator<glitch::core::aabbox3d<float>>>>,glitch::core::aabbox3d<float> const&)
// uint32_t *std::vector<glitch::core::aabbox3d<float>>::_M_insert_aux(void **a1, char *a2, int *a3);
// [0x67fa90] (425 bytes) std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_erase(std::_Rb_tree_node<int> *)
// void std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_erase( int a1, uint32_t *a2);
// [0x67fc40] (747 bytes) std::_Rb_tree<int,std::pair<int const,RenderBuffer>,std::_Select1st<std::pair<int const,RenderBuffer>>,std::less<int>,std::allocator<std::pair<int const,RenderBuffer>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,RenderBuffer>> *)
// void std::_Rb_tree<int,std::pair<int const,RenderBuffer>,std::_Select1st<std::pair<int const,RenderBuffer>>,std::less<int>,std::allocator<std::pair<int const,RenderBuffer>>>::_M_erase( int a1, void *a2);
// [0x67ff30] (168 bytes) sub_67FF30
// int (**sub_67FF30(int a1))(int);
// [0x67ffe0] (176 bytes) sub_67FFE0
// void sub_67FFE0(void **a1);
// [0x680090] (358 bytes) sub_680090
// int sub_680090(int *a1, int *a2);
// [0x680200] (900 bytes) sub_680200
// int sub_680200(int a1, int *a2);
// [0x680590] (2478 bytes) std::vector<FrameBuffer,std::allocator<FrameBuffer>>::_M_insert_aux(__gnu_cxx::__normal_iterator<FrameBuffer*,std::vector<FrameBuffer,std::allocator<FrameBuffer>>>,FrameBuffer const&)
// volatile int32_t *std::vector<FrameBuffer>::_M_insert_aux(int *a1, int a2, int *a3);
// [0x680f40] (1638 bytes) std::_Rb_tree<int,std::pair<int const,Mission::LastObjectiveInfo>,std::_Select1st<std::pair<int const,Mission::LastObjectiveInfo>>,std::less<int>,std::allocator<std::pair<int const,Mission::LastObjectiveInfo>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,Mission::LastObjectiveInfo>> *)
// void std::_Rb_tree<int,std::pair<int const,Mission::LastObjectiveInfo>,std::_Select1st<std::pair<int const,Mission::LastObjectiveInfo>>,std::less<int>,std::allocator<std::pair<int const,Mission::LastObjectiveInfo>>>::_M_erase( int a1, uint32_t *a2);
// [0x6815b0] (169 bytes) sub_6815B0
// void sub_6815B0(uint32_t *a1, int a2);
// [0x681660] (172 bytes) std::_Rb_tree<PhysicsBreakablePartListener *,PhysicsBreakablePartListener *,std::_Identity<PhysicsBreakablePartListener *>,std::less<PhysicsBreakablePartListener *>,std::allocator<PhysicsBreakablePartListener *>>::_M_insert_(std::_Rb_tree_node_base const*,std::_Rb_tree_node_base const*,PhysicsBreakablePartListener * const&)
// int *std::_Rb_tree<PhysicsBreakablePartListener *,PhysicsBreakablePartListener *,std::_Identity<PhysicsBreakablePartListener *>,std::less<PhysicsBreakablePartListener *>,std::allocator<PhysicsBreakablePartListener *>>::_M_insert_( int *a1, int a2, int a3, int a4, uint32_t *a5);
// [0x681710] (1209 bytes) std::vector<glitch::video::E_PIXEL_FORMAT,std::allocator<glitch::video::E_PIXEL_FORMAT>>::_M_fill_insert(__gnu_cxx::__normal_iterator<glitch::video::E_PIXEL_FORMAT*,std::vector<glitch::video::E_PIXEL_FORMAT,std::allocator<glitch::video::E_PIXEL_FORMAT>>>,unsigned int,glitch::video::E_PIXEL_FORMAT const&)
// void std::vector<glitch::video::E_PIXEL_FORMAT>::_M_fill_insert( int a1, unsigned int *src, unsigned int a3, unsigned int *a4);
// [0x681bd0] (97 bytes) Gangstar::Handle<Character,false> * std::copy_backward<Gangstar::Handle<Character,false> *,Gangstar::Handle<Character,false> *>(Gangstar::Handle<Character,false> *,Gangstar::Handle<Character,false> *,Gangstar::Handle<Character,false> *)
// int std::copy_backward<Gangstar::Handle<Character,false> *,Gangstar::Handle<Character,false> *>( int a1, int a2, int a3);
// [0x681c40] (504 bytes) PhysicsBox* std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<PhysicsBox const*,std::vector<PhysicsBox,std::allocator<PhysicsBox>>>,PhysicsBox*>(__gnu_cxx::__normal_iterator<PhysicsBox const*,std::vector<PhysicsBox,std::allocator<PhysicsBox>>>,__gnu_cxx::__normal_iterator<PhysicsBox const*,std::vector<PhysicsBox,std::allocator<PhysicsBox>>>,PhysicsBox*)
// char *std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<PhysicsBox const*,std::vector<PhysicsBox>>,PhysicsBox*>( uint32_t *a1, uint32_t *a2, uint32_t *a3);
