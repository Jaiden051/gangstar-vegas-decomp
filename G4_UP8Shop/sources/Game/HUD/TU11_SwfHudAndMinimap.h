#pragma once
// ============================================================================
// TU11_SwfHudAndMinimap.h
// Complete Translation Unit [11/41]
// Binary Range in lib/x86/libGangstar4.so: 0x7f36b0 .. 0x81e660 (171 KB)
// Total Decompiled Functions in TU: 547 (100% coverage)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// Function Table in Translation Unit:
// [0x7f36b0] (1108 bytes) sub_7F36B0
// const char *sub_7F36B0();
// [0x7f3b10] (21 bytes) sub_7F3B10
// int sub_7F3B10(int a1);
// [0x7f3b38] (1 bytes) nullsub_266
// void nullsub_266();
// [0x7f3b48] (1 bytes) nullsub_267
// void nullsub_267();
// [0x7f3b50] (21 bytes) sub_7F3B50
// int sub_7F3B50(int a1, char a2);
// [0x7f3b70] (113 bytes) sub_7F3B70
// int sub_7F3B70(int a1);
// [0x7f3bf0] (77 bytes) sub_7F3BF0
// int sub_7F3BF0(int a1);
// [0x7f3c40] (251 bytes) sub_7F3C40
// int sub_7F3C40(int a1);
// [0x7f3d40] (7 bytes) sub_7F3D40
// int sub_7F3D40(int a1, int a2);
// [0x7f3d50] (28 bytes) sub_7F3D50
// int sub_7F3D50(int a1, unsigned int a2);
// [0x7f3d70] (243 bytes) sub_7F3D70
// int sub_7F3D70( int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
// [0x7f3e70] (34 bytes) sub_7F3E70
// uint32_t *sub_7F3E70(uint32_t *a1);
// [0x7f3ea0] (102 bytes) sub_7F3EA0
// int sub_7F3EA0(int a1, int a2);
// [0x7f3f10] (21 bytes) sub_7F3F10
// int sub_7F3F10(int a1);
// [0x7f3f30] (21 bytes) sub_7F3F30
// int sub_7F3F30(int a1);
// [0x7f3f50] (21 bytes) sub_7F3F50
// int sub_7F3F50(int a1);
// [0x7f3f70] (109 bytes) sub_7F3F70
// int sub_7F3F70(uint32_t *a1);
// [0x7f3fe0] (24 bytes) sub_7F3FE0
// uint32_t *sub_7F3FE0(uint32_t *a1);
// [0x7f4008] (1 bytes) nullsub_268
// void nullsub_268();
// [0x7f4018] (1 bytes) nullsub_269
// void nullsub_269();
// [0x7f4028] (1 bytes) nullsub_270
// void nullsub_270();
// [0x7f4030] (45 bytes) sub_7F4030
// int sub_7F4030(int a1);
// [0x7f4060] (173 bytes) sub_7F4060
// int sub_7F4060(int a1);
// [0x7f4110] (96 bytes) sub_7F4110
// int sub_7F4110();
// [0x7f4170] (28 bytes) sub_7F4170
// int sub_7F4170(int a1);
// [0x7f4190] (42 bytes) sub_7F4190
// void sub_7F4190(uint32_t *a1);
// [0x7f41c0] (46 bytes) sub_7F41C0
// void sub_7F41C0(uint8_t *a1);
// [0x7f41f0] (72 bytes) sub_7F41F0
// uint32_t *sub_7F41F0(uint32_t *a1);
// [0x7f4240] (140 bytes) sub_7F4240
// int16_t sub_7F4240(int a1, int a2);
// [0x7f42d0] (179 bytes) sub_7F42D0
// int sub_7F42D0(int a1);
// [0x7f4390] (172 bytes) sub_7F4390
// int sub_7F4390(int a1);
// [0x7f4440] (113 bytes) sub_7F4440
// int sub_7F4440(uint32_t *a1);
// [0x7f44c0] (373 bytes) sub_7F44C0
// int sub_7F44C0(uint32_t *a1);
// [0x7f4640] (195 bytes) sub_7F4640
// int sub_7F4640(int a1, int a2, int a3);
// [0x7f4710] (380 bytes) sub_7F4710
// void sub_7F4710(int a1, int a2);
// [0x7f4890] (190 bytes) sub_7F4890
// int sub_7F4890(int a1, float *a2);
// [0x7f4950] (253 bytes) sub_7F4950
// int sub_7F4950(int a1);
// [0x7f4a50] (61 bytes) sub_7F4A50
// void sub_7F4A50(uint32_t *a1, int a2);
// [0x7f4a90] (163 bytes) sub_7F4A90
// void sub_7F4A90(int a1);
// [0x7f4b40] (180 bytes) sub_7F4B40
// void sub_7F4B40(int a1);
// [0x7f4c00] (586 bytes) sub_7F4C00
// int sub_7F4C00(int a1);
// [0x7f4e50] (122 bytes) sub_7F4E50
// int sub_7F4E50(int a1, unsigned int a2);
// [0x7f4ed0] (1065 bytes) sub_7F4ED0
// float *sub_7F4ED0(float *result, float *a2, float *a3);
// [0x7f5300] (179 bytes) sub_7F5300
// int *sub_7F5300(int *a1, int a2, int *a3, int *a4);
// [0x7f53c0] (187 bytes) sub_7F53C0
// int *sub_7F53C0(int *a1, int a2, int a3, int a4, int *a5);
// [0x7f5480] (224 bytes) sub_7F5480
// uint32_t *sub_7F5480(uint32_t *a1, int a2, int a3, int a4, int a5);
// [0x7f5560] (205 bytes) sub_7F5560
// uint32_t *sub_7F5560(uint32_t *a1, int a2, int a3, int a4, int a5);
// [0x7f5630] (190 bytes) sub_7F5630
// int *sub_7F5630(int *a1, int a2, int a3, int a4, int a5);
// [0x7f56f0] (213 bytes) sub_7F56F0
// int *sub_7F56F0(int *a1, int a2, int a3, int a4, int a5);
// [0x7f57d0] (221 bytes) sub_7F57D0
// int *sub_7F57D0(int *a1, int a2, int a3, int a4, int a5);
// [0x7f58b0] (156 bytes) sub_7F58B0
// char sub_7F58B0(int a1, char a2);
// [0x7f5950] (262 bytes) sub_7F5950
// void sub_7F5950(int a1, int a2);
// [0x7f5a60] (420 bytes) sub_7F5A60
// void sub_7F5A60(int a1, uint32_t *a2);
// [0x7f5c10] (72 bytes) sub_7F5C10
// uint32_t *sub_7F5C10(uint32_t *a1);
// [0x7f5c60] (81 bytes) sub_7F5C60
// void sub_7F5C60(uint32_t *a1);
// [0x7f5cc0] (72 bytes) sub_7F5CC0
// uint32_t *sub_7F5CC0(uint32_t *a1);
// [0x7f5d10] (81 bytes) sub_7F5D10
// void sub_7F5D10(uint32_t *a1);
// [0x7f5d70] (81 bytes) sub_7F5D70
// void sub_7F5D70(uint32_t *a1);
// [0x7f5dd0] (177 bytes) sub_7F5DD0
// uint8_t *sub_7F5DD0(uint32_t *a1, char a2);
// [0x7f5e90] (114 bytes) sub_7F5E90
// void sub_7F5E90(int a1);
// [0x7f5f10] (391 bytes) sub_7F5F10
// int sub_7F5F10(int a1);
// [0x7f60a0] (512 bytes) sub_7F60A0
// char *sub_7F60A0(int a1, int a2, char *src, char a4, char a5, char *a6);
// [0x7f62a0] (170 bytes) sub_7F62A0
// int (**sub_7F62A0(int a1))(int);
// [0x7f6350] (178 bytes) sub_7F6350
// void sub_7F6350(uint32_t *a1);
// [0x7f6410] (7 bytes) sub_7F6410
// int sub_7F6410(int a1, int a2);
// [0x7f6420] (241 bytes) sub_7F6420
// int sub_7F6420(int *a1, int a2);
// [0x7f6520] (493 bytes) sub_7F6520
// int sub_7F6520(int a1);
// [0x7f6710] (679 bytes) sub_7F6710
// int sub_7F6710(int a1);
// [0x7f69c0] (122 bytes) sub_7F69C0
// void sub_7F69C0(int a1, int a2);
// [0x7f6a40] (214 bytes) sub_7F6A40
// int sub_7F6A40(uint32_t *a1);
// [0x7f6b20] (986 bytes) sub_7F6B20
// void sub_7F6B20( uint32_t *a1, float *a2, float a3, float a4, float a5, int a6, int a7, int a8, uint32_t *a9);
// [0x7f6f00] (214 bytes) sub_7F6F00
// int sub_7F6F00(uint32_t *a1);
// [0x7f6fe0] (349 bytes) sub_7F6FE0
// int sub_7F6FE0(uint32_t *a1);
// [0x7f7140] (246 bytes) sub_7F7140
// int sub_7F7140(uint32_t *a1, int a2);
// [0x7f7240] (246 bytes) sub_7F7240
// uint32_t *sub_7F7240(uint32_t *a1);
// [0x7f7340] (470 bytes) sub_7F7340
// int sub_7F7340(int a1, int a2);
// [0x7f7520] (246 bytes) sub_7F7520
// int sub_7F7520(uint32_t *a1, int a2);
// [0x7f7620] (346 bytes) sub_7F7620
// int sub_7F7620(int a1);
// [0x7f7780] (792 bytes) sub_7F7780
// int sub_7F7780(int a1);
// [0x7f7aa0] (718 bytes) sub_7F7AA0
// void sub_7F7AA0(uint32_t *a1);
// [0x7f7d70] (691 bytes) sub_7F7D70
// int sub_7F7D70(uint32_t *a1);
// [0x7f8030] (345 bytes) sub_7F8030
// int (**sub_7F8030(int a1))(int);
// [0x7f8190] (122 bytes) sub_7F8190
// void sub_7F8190(int a1, int a2);
// [0x7f8210] (122 bytes) sub_7F8210
// void sub_7F8210(int a1, int a2);
// [0x7f8290] (318 bytes) sub_7F8290
// int sub_7F8290(int a1, uint32_t *a2, float *a3);
// [0x7f83d0] (324 bytes) sub_7F83D0
// int sub_7F83D0(int a1, uint32_t *a2, float *a3);
// [0x7f8520] (413 bytes) sub_7F8520
// int sub_7F8520(uint32_t *a1, int a2, int a3, int (**a4)(int), int a5, int a6, int a7, int a8, int a9);
// [0x7f86c0] (330 bytes) sub_7F86C0
// int sub_7F86C0(int a1, uint32_t *a2, float *a3);
// [0x7f8810] (248 bytes) sub_7F8810
// int sub_7F8810(uint32_t *a1);
// [0x7f8910] (169 bytes) sub_7F8910
// bool sub_7F8910();
// [0x7f89c0] (286 bytes) sub_7F89C0
// int sub_7F89C0(int a1);
// [0x7f8ae0] (701 bytes) sub_7F8AE0
// int *sub_7F8AE0(int a1);
// [0x7f8da0] (565 bytes) sub_7F8DA0
// void sub_7F8DA0(int a1, int a2, int a3);
// [0x7f8fe0] (727 bytes) sub_7F8FE0
// char *sub_7F8FE0(int a1, unsigned int a2);
// [0x7f92c0] (308 bytes) sub_7F92C0
// int sub_7F92C0(int a1, uint32_t *a2, int *a3);
// [0x7f9400] (311 bytes) sub_7F9400
// int sub_7F9400(int a1, int *a2);
// [0x7f9540] (363 bytes) sub_7F9540
// int sub_7F9540(int a1, uint32_t *a2, int a3);
// [0x7f96b0] (118 bytes) sub_7F96B0
// void sub_7F96B0(int a1, int a2);
// [0x7f9730] (369 bytes) sub_7F9730
// int sub_7F9730(int a1, uint32_t *a2, int a3);
// [0x7f98b0] (646 bytes) sub_7F98B0
// int *sub_7F98B0(int *a1, uint32_t *a2, int a3, int a4);
// [0x7f9b40] (192 bytes) sub_7F9B40
// int sub_7F9B40(uint32_t *a1, int a2);
// [0x7f9c00] (256 bytes) sub_7F9C00
// void sub_7F9C00(uint32_t *a1);
// [0x7f9d00] (248 bytes) sub_7F9D00
// int (**sub_7F9D00(int a1))(int);
// [0x7f9e00] (665 bytes) sub_7F9E00
// int *sub_7F9E00(int *result, uint32_t *a2, int a3, int *a4);
// [0x7fa0a0] (483 bytes) sub_7FA0A0
// int sub_7FA0A0(int a1, gameswf::CharacterHandle *a2);
// [0x7fa290] (393 bytes) sub_7FA290
// bool sub_7FA290(int a1, uint32_t *a2, int a3);
// [0x7fa610] (256 bytes) sub_7FA610
// gameswf *sub_7FA610(int a1, void *a2, int a3);
// [0x7fa710] (151 bytes) sub_7FA710
// gameswf *sub_7FA710(int a1, int a2, int a3);
// [0x7fa7b0] (199 bytes) sub_7FA7B0
// gameswf *sub_7FA7B0(int a1, int a2, int a3);
// [0x7fa880] (1608 bytes) sub_7FA880
// gameswf *sub_7FA880(int a1, int a2);
// [0x7faed0] (98 bytes) sub_7FAED0
// void sub_7FAED0(int a1);
// [0x7faf40] (977 bytes) sub_7FAF40
// int sub_7FAF40(uint32_t *a1);
// [0x7fb320] (548 bytes) sub_7FB320
// int sub_7FB320(void *a1, gameswf::CharacterHandle *a2, char a3);
// [0x7fb550] (220 bytes) sub_7FB550
// void sub_7FB550(uint32_t *a1, int a2, int a3);
// [0x7fb630] (597 bytes) sub_7FB630
// void sub_7FB630(int a1);
// [0x7fb890] (236 bytes) sub_7FB890
// void sub_7FB890(uint32_t *a1, int a2, int a3, char a4);
// [0x7fb980] (391 bytes) sub_7FB980
// void sub_7FB980(uint32_t *a1, int a2);
// [0x7fbb10] (689 bytes) sub_7FBB10
// void sub_7FBB10(int a1);
// [0x7fbdd0] (323 bytes) sub_7FBDD0
// int *sub_7FBDD0(int *a1, int a2, int a3, int a4, int a5);
// [0x7fbf20] (348 bytes) sub_7FBF20
// int sub_7FBF20(int a1, int a2, int a3);
// [0x7fc080] (1035 bytes) sub_7FC080
// int sub_7FC080(uint32_t *a1, int a2);
// [0x7fc490] (535 bytes) sub_7FC490
// void sub_7FC490(int a1, char *a2, char *a3);
// [0x7fc6b0] (114 bytes) sub_7FC6B0
// int (**sub_7FC6B0(int a1, int a2, char *a3))(int);
// [0x7fc730] (97 bytes) sub_7FC730
// int sub_7FC730(int a1, int a2);
// [0x7fc7a0] (118 bytes) sub_7FC7A0
// int (**sub_7FC7A0(int a1, int a2, char *a3))(int);
// [0x7fc820] (114 bytes) sub_7FC820
// int (**sub_7FC820(int a1, int a2, char *a3))(int);
// [0x7fc8a0] (114 bytes) sub_7FC8A0
// int (**sub_7FC8A0(int a1, int a2, char *a3))(int);
// [0x7fc920] (528 bytes) sub_7FC920
// char *sub_7FC920(int a1, int a2, char *src, char a4, void *a5, char a6, char *a7);
// [0x7fcb30] (79 bytes) sub_7FCB30
// void sub_7FCB30(int a1, int a2);
// [0x7fcb80] (84 bytes) sub_7FCB80
// int sub_7FCB80(uint32_t *a1, uint8_t a2, uint8_t a3);
// [0x7fcbe0] (123 bytes) sub_7FCBE0
// int sub_7FCBE0(int *a1);
// [0x7fcc60] (329 bytes) sub_7FCC60
// unsigned int sub_7FCC60(uint32_t *a1);
// [0x7fcdb0] (188 bytes) sub_7FCDB0
// unsigned int sub_7FCDB0(uint32_t *a1);
// [0x7fce70] (110 bytes) sub_7FCE70
// uint8_t *sub_7FCE70(uint32_t *a1);
// [0x7fcee0] (133 bytes) sub_7FCEE0
// unsigned int sub_7FCEE0(uint32_t *a1);
// [0x7fcf70] (21 bytes) sub_7FCF70
// uint32_t *sub_7FCF70(uint32_t *a1);
// [0x7fcf90] (508 bytes) sub_7FCF90
// int sub_7FCF90(int a1);
// [0x7fd190] (573 bytes) sub_7FD190
// int sub_7FD190(int *a1);
// [0x7fd3d0] (54 bytes) sub_7FD3D0
// int sub_7FD3D0(int a1, int a2);
// [0x7fd410] (192 bytes) sub_7FD410
// int sub_7FD410(uint32_t *a1);
// [0x7fd4d0] (94 bytes) sub_7FD4D0
// int sub_7FD4D0(uint32_t *a1);
// [0x7fd530] (95 bytes) sub_7FD530
// int sub_7FD530(uint32_t *a1);
// [0x7fd590] (7 bytes) sub_7FD590
// int sub_7FD590(int a1, int a2);
// [0x7fd5a0] (183 bytes) sub_7FD5A0
// int sub_7FD5A0(uint32_t *a1, int a2);
// [0x7fd660] (95 bytes) sub_7FD660
// int sub_7FD660(uint32_t *a1);
// [0x7fd6c0] (95 bytes) sub_7FD6C0
// int sub_7FD6C0(uint32_t *a1);
// [0x7fd720] (61 bytes) sub_7FD720
// int sub_7FD720(int a1, int a2);
// [0x7fd760] (136 bytes) sub_7FD760
// const char *sub_7FD760(int a1, char a2);
// [0x7fd7f0] (225 bytes) sub_7FD7F0
// int sub_7FD7F0(int a1);
// [0x7fd8e0] (9 bytes) sub_7FD8E0
// void sub_7FD8E0();
// [0x7fd908] (1 bytes) nullsub_271
// void nullsub_271();
// [0x7fd910] (125 bytes) sub_7FD910
// int (**sub_7FD910(int a1, int a2, char *a3, int a4))(int);
// [0x7fd990] (127 bytes) sub_7FD990
// int sub_7FD990(int *a1);
// [0x7fda10] (190 bytes) sub_7FDA10
// int sub_7FDA10(int a1, int a2, char *a3);
// [0x7fdad0] (606 bytes) sub_7FDAD0
// void sub_7FDAD0(int a1, int a2, int a3);
// [0x7fdd30] (458 bytes) sub_7FDD30
// uint8_t *sub_7FDD30(uint32_t *a1);
// [0x7fdf00] (185 bytes) sub_7FDF00
// int sub_7FDF00(int a1, char a2);
// [0x7fdfc0] (146 bytes) sub_7FDFC0
// int sub_7FDFC0(int a1, int a2);
// [0x7fe060] (77 bytes) sub_7FE060
// int sub_7FE060(int a1, int a2);
// [0x7fe0b0] (77 bytes) sub_7FE0B0
// int sub_7FE0B0(int a1, int a2);
// [0x7fe100] (147 bytes) sub_7FE100
// int sub_7FE100(int a1, int a2, int a3);
// [0x7fe1a0] (15 bytes) sub_7FE1A0
// int sub_7FE1A0(int a1);
// [0x7fe1b0] (1247 bytes) sub_7FE1B0
// int sub_7FE1B0(int a1, int16_t *a2);
// [0x7fe690] (185 bytes) sub_7FE690
// int sub_7FE690(int a1);
// [0x7fe750] (151 bytes) sub_7FE750
// int sub_7FE750(int a1, uint8_t *a2);
// [0x7fe7f0] (217 bytes) sub_7FE7F0
// int sub_7FE7F0(int *a1, int a2);
// [0x7fed40] (677 bytes) sub_7FED40
// long double sub_7FED40(int a1, unsigned int a2, unsigned int *a3, float *a4);
// [0x7feff0] (1369 bytes) sub_7FEFF0
// int sub_7FEFF0(int *a1, int a2);
// [0x7ff550] (161 bytes) sub_7FF550
// int sub_7FF550(int a1, int a2, uint8_t a3);
// [0x7ff600] (56 bytes) sub_7FF600
// bool sub_7FF600(int a1, int a2);
// [0x7ff640] (329 bytes) sub_7FF640
// int sub_7FF640(int a1, int a2, char a3);
// [0x7ff790] (76 bytes) sub_7FF790
// char sub_7FF790(uint32_t *a1, char a2);
// [0x7ff7e0] (15 bytes) sub_7FF7E0
// int sub_7FF7E0(int a1, char a2);
// [0x7ff7f0] (124 bytes) sub_7FF7F0
// int (**sub_7FF7F0(uint32_t *a1, int a2, char *a3, int a4))(int);
// [0x7ff870] (151 bytes) sub_7FF870
// gameswf *sub_7FF870(int a1, int a2, int a3);
// [0x7ff910] (118 bytes) sub_7FF910
// int (**sub_7FF910(uint32_t *a1, int a2, char *a3, int a4, char a5))(int);
// [0x7ff990] (97 bytes) sub_7FF990
// int sub_7FF990(int a1, int a2);
// [0x7ffa00] (103 bytes) sub_7FFA00
// int sub_7FFA00(int a1);
// [0x7ffa70] (103 bytes) sub_7FFA70
// int (**sub_7FFA70(uint32_t *a1, int a2, char *a3))(int);
// [0x7ffae0] (555 bytes) sub_7FFAE0
// unsigned int sub_7FFAE0(int a1, int a2, char *a3, int a4);
// [0x7ffd10] (349 bytes) sub_7FFD10
// bool sub_7FFD10(uint32_t *a1, int a2, int a3);
// [0x7ffe70] (154 bytes) sub_7FFE70
// uint8_t *sub_7FFE70(uint32_t *a1);
// [0x7fff10] (231 bytes) sub_7FFF10
// bool sub_7FFF10(int a1, int a2, uint32_t *a3);
// [0x800000] (201 bytes) sub_800000
// char sub_800000(int a1, int a2);
// [0x8000d0] (201 bytes) sub_8000D0
// char sub_8000D0(int a1, int a2);
// [0x800320] (201 bytes) sub_800320
// int sub_800320(uint32_t *a1);
// [0x8003f0] (685 bytes) sub_8003F0
// uint32_t *sub_8003F0(uint8_t *a1, int a2);
// [0x8006a0] (390 bytes) sub_8006A0
// uint32_t *sub_8006A0();
// [0x800830] (9 bytes) sub_800830
// void sub_800830();
// [0x800840] (654 bytes) sub_800840
// void sub_800840(uint32_t *a1);
// [0x800ad0] (260 bytes) sub_800AD0
// int sub_800AD0(int a1, int a2, char *a3, int a4);
// [0x800be0] (200 bytes) sub_800BE0
// int sub_800BE0(uint32_t *a1, int a2, int a3);
// [0x800cb0] (156 bytes) sub_800CB0
// int sub_800CB0(int a1, float a2);
// [0x800d50] (15 bytes) sub_800D50
// long double sub_800D50(int a1);
// [0x800d60] (96 bytes) sub_800D60
// int (**sub_800D60(uint32_t *a1, int a2, char *a3))(int);
// [0x800dc0] (99 bytes) sub_800DC0
// int (**sub_800DC0(uint32_t *a1, int a2, char *a3, char a4, char a5, uint8_t a6))(int);
// [0x800e30] (96 bytes) sub_800E30
// int (**sub_800E30(uint32_t *a1, int a2, char *a3))(int);
// [0x800e90] (100 bytes) sub_800E90
// int (**sub_800E90(int a1, int a2, char *a3))(int);
// [0x800f00] (156 bytes) sub_800F00
// int sub_800F00(uint32_t *a1, int a2, char *a3, int a4);
// [0x800fa0] (122 bytes) sub_800FA0
// int (**sub_800FA0(int a1, int a2, char *a3, int a4, char a5))(int);
// [0x801020] (527 bytes) sub_801020
// int sub_801020(int a1, float *a2, float a3, bool a4);
// [0x801230] (202 bytes) sub_801230
// int sub_801230(int a1, uint32_t *a2);
// [0x801330] (363 bytes) sub_801330
// int sub_801330(uint32_t *a1, int a2, char *a3, int a4, char a5);
// [0x8014a0] (119 bytes) sub_8014A0
// int sub_8014A0(uint32_t *a1, int a2, char *a3, int a4, char a5, uint8_t a6);
// [0x801520] (124 bytes) sub_801520
// int sub_801520(uint32_t *a1, int a2, char *a3);
// [0x8015a0] (122 bytes) sub_8015A0
// int sub_8015A0(int a1, uint8_t a2);
// [0x801620] (157 bytes) sub_801620
// int sub_801620(int a1, int a2, char *a3);
// [0x8016c0] (272 bytes) sub_8016C0
// int sub_8016C0(int a1, int a2);
// [0x8017d0] (93 bytes) sub_8017D0
// gameswf *sub_8017D0(int *a1);
// [0x801830] (541 bytes) sub_801830
// void sub_801830(int a1, char *a2, int a3);
// [0x801a50] (325 bytes) sub_801A50
// void sub_801A50(int a1);
// [0x801ba0] (31 bytes) sub_801BA0
// uint32_t *sub_801BA0(uint32_t *a1, int a2);
// [0x801be0] (27 bytes) sub_801BE0
// int (***sub_801BE0(int a1))(uint32_t);
// [0x801c00] (28 bytes) sub_801C00
// int sub_801C00(int a1);
// [0x801c20] (36 bytes) sub_801C20
// int sub_801C20(int a1, int a2);
// [0x801c50] (58 bytes) sub_801C50
// int sub_801C50(int a1, int a2, uint8_t a3, int a4);
// [0x801c90] (46 bytes) sub_801C90
// int sub_801C90(int a1, int a2, int a3);
// [0x801cc0] (68 bytes) sub_801CC0
// int sub_801CC0(int a1, int a2, int a3, int a4, int a5, int a6);
// [0x801d10] (66 bytes) sub_801D10
// int sub_801D10(int a1, int a2, uint8_t a3, int a4, int a5);
// [0x801d60] (71 bytes) sub_801D60
// int sub_801D60(int a1, int a2, int a3, int a4, uint8_t a5);
// [0x801db0] (66 bytes) sub_801DB0
// int sub_801DB0(int a1, int a2, uint8_t a3, int a4, int a5);
// [0x801e00] (52 bytes) sub_801E00
// int sub_801E00(int a1, int a2, int a3, int a4);
// [0x801e40] (44 bytes) sub_801E40
// int sub_801E40(int a1, int a2, int a3);
// [0x801e70] (60 bytes) sub_801E70
// int sub_801E70(int a1, int a2, int a3, int a4, int a5);
// [0x801eb0] (80 bytes) sub_801EB0
// int sub_801EB0(int a1, int a2, int a3, int a4, int a5, int a6, uint8_t a7);
// [0x801f00] (80 bytes) sub_801F00
// int sub_801F00(int a1, int a2, int a3, int a4, int a5, int a6, uint8_t a7);
// [0x801f50] (52 bytes) sub_801F50
// int sub_801F50(int a1, int a2, int a3, int a4);
// [0x801f90] (57 bytes) sub_801F90
// int sub_801F90(int a1, int a2, int a3, uint8_t a4, int a5);
// [0x801fd0] (36 bytes) sub_801FD0
// int sub_801FD0(int a1, int a2);
// [0x802000] (217 bytes) sub_802000
// int sub_802000();
// [0x8020e0] (336 bytes) sub_8020E0
// int sub_8020E0(uint32_t *a1);
// [0x802230] (228 bytes) sub_802230
// void sub_802230(uint32_t *a1, int a2, int a3);
// [0x802320] (244 bytes) sub_802320
// int sub_802320(int a1, int a2, int a3, uint8_t a4);
// [0x802420] (184 bytes) sub_802420
// uint32_t *sub_802420(uint32_t *a1, int a2);
// [0x8024e0] (94 bytes) sub_8024E0
// int sub_8024E0(int a1);
// [0x802540] (429 bytes) sub_802540
// int sub_802540(int a1, gameswf::CharacterHandle *a2);
// [0x8026f0] (829 bytes) sub_8026F0
// gameswf::CharacterHandle *sub_8026F0(gameswf::CharacterHandle *a1, int a2, char *a3, char *a4);
// [0x802a30] (416 bytes) sub_802A30
// void sub_802A30(uint32_t *a1, char *a2, int a3, char *a4);
// [0x802bd0] (435 bytes) sub_802BD0
// void sub_802BD0(int a1, char *a2, int a3, int a4, uint32_t *a5, uint32_t *a6, char a7);
// [0x802d90] (396 bytes) sub_802D90
// void sub_802D90(int a1, char *a2, int a3, int a4, uint32_t *a5, uint32_t *a6, char a7);
// [0x802f20] (402 bytes) sub_802F20
// void sub_802F20(int a1, float a2, float a3, char *a4, char *a5);
// [0x8030c0] (113 bytes) sub_8030C0
// void sub_8030C0(int a1, char *a2, float a3, char *a4);
// [0x803140] (183 bytes) sub_803140
// void sub_803140(int a1, char *a2, char a3, uint32_t *a4, char *a5);
// [0x803200] (538 bytes) sub_803200
// int sub_803200(long double a1, int a2, gameswf *a3, char *a4, char *a5, char a6);
// [0x803420] (242 bytes) sub_803420
// void sub_803420(int a1, gameswf *a2, char *a3, char *a4, char *a5);
// [0x803520] (242 bytes) sub_803520
// void sub_803520(int a1, gameswf *a2, float a3, char *a4, char *a5);
// [0x803620] (151 bytes) sub_803620
// void sub_803620(int a1, char *s, char a3, char *a4, char *a5);
// [0x8036c0] (493 bytes) sub_8036C0
// void sub_8036C0(int a1, char *a2, gameswf::ASValue *a3, int *a4, char *a5, int a6);
// [0x8038b0] (118 bytes) sub_8038B0
// int sub_8038B0(int a1, char *a2, char *a3);
// [0x803930] (127 bytes) sub_803930
// void sub_803930(int a1, char *a2, bool a3, char *a4);
// [0x8039b0] (973 bytes) sub_8039B0
// int sub_8039B0(void *a1, gameswf::CharacterHandle *a2, char a3, char a4);
// [0x804120] (178 bytes) sub_804120
// int sub_804120( void *a1, gameswf::CharacterHandle *a2, gameswf *a3, void (*a4)(const gameswf::ASNativeEventState *), char a5, int a6);
// [0x804290] (316 bytes) sub_804290
// int sub_804290(uint32_t *a1);
// [0x8043d0] (569 bytes) sub_8043D0
// int *sub_8043D0(uint32_t *a1, int a2);
// [0x804610] (517 bytes) sub_804610
// int sub_804610(uint32_t *a1, int a2, int a3);
// [0x804820] (158 bytes) sub_804820
// int sub_804820(int a1, int a2);
// [0x804900] (248 bytes) sub_804900
// uint32_t *sub_804900(int a1);
// [0x804a00] (12 bytes) sub_804A00
// int sub_804A00(int a1);
// [0x804a10] (63 bytes) sub_804A10
// int sub_804A10(int a1, int a2);
// [0x804a50] (13 bytes) sub_804A50
// int sub_804A50(int a1);
// [0x804a60] (13 bytes) sub_804A60
// int sub_804A60(int a1);
// [0x804a70] (16 bytes) sub_804A70
// int *sub_804A70(int a1, int a2);
// [0x804a80] (199 bytes) sub_804A80
// int sub_804A80(uint32_t *a1);
// [0x804b50] (165 bytes) sub_804B50
// int sub_804B50(int a1);
// [0x804c00] (1371 bytes) sub_804C00
// unsigned int sub_804C00(uint32_t *a1);
// [0x805160] (123 bytes) sub_805160
// long double sub_805160(int a1, int a2, char a3);
// [0x8051e0] (468 bytes) sub_8051E0
// void sub_8051E0(int a1, int a2, int a3);
// [0x8053c0] (54 bytes) sub_8053C0
// const char *sub_8053C0(int a1, int a2);
// [0x805400] (53 bytes) sub_805400
// int sub_805400(int a1, int a2);
// [0x805440] (99 bytes) sub_805440
// int sub_805440(int a1, int a2, int a3);
// [0x8054b0] (26 bytes) sub_8054B0
// int sub_8054B0(int a1, int a2);
// [0x8054d0] (1848 bytes) sub_8054D0
// int *sub_8054D0(int a1, int a2, unsigned int a3);
// [0x805c10] (241 bytes) sub_805C10
// void sub_805C10(int a1, int a2);
// [0x805d10] (62 bytes) sub_805D10
// uint32_t *sub_805D10(uint32_t *a1, int a2);
// [0x805d50] (72 bytes) sub_805D50
// void sub_805D50(int a1);
// [0x805da8] (1 bytes) nullsub_272
// void nullsub_272();
// [0x805db0] (629 bytes) sub_805DB0
// int sub_805DB0(unsigned int *a1);
// [0x806030] (866 bytes) sub_806030
// int sub_806030(unsigned int *a1);
// [0x8063c0] (1093 bytes) sub_8063C0
// int sub_8063C0(int a1, int a2);
// [0x806810] (1181 bytes) sub_806810
// int sub_806810(uint32_t *a1, int a2, int a3);
// [0x806cb0] (37 bytes) sub_806CB0
// int sub_806CB0(uint32_t *a1);
// [0x806ce0] (37 bytes) sub_806CE0
// int sub_806CE0(uint32_t *a1);
// [0x806d10] (37 bytes) sub_806D10
// int sub_806D10(uint32_t *a1);
// [0x806d40] (37 bytes) sub_806D40
// long double sub_806D40(uint32_t *a1);
// [0x806d70] (37 bytes) sub_806D70
// int sub_806D70(uint32_t *a1);
// [0x806da0] (37 bytes) sub_806DA0
// int sub_806DA0(uint32_t *a1);
// [0x806dd0] (73 bytes) sub_806DD0
// const char *sub_806DD0(uint32_t *a1);
// [0x806e20] (73 bytes) sub_806E20
// const char *sub_806E20(uint32_t *a1);
// [0x806e70] (37 bytes) sub_806E70
// int sub_806E70(uint32_t *a1);
// [0x807250] (452 bytes) sub_807250
// int sub_807250(uint32_t *a1, unsigned int a2, char a3);
// [0x807420] (88 bytes) sub_807420
// int sub_807420(int a1, int a2);
// [0x807488] (1 bytes) nullsub_273
// void nullsub_273();
// [0x807490] (70 bytes) sub_807490
// int sub_807490(int a1);
// [0x8074f0] (35 bytes) sub_8074F0
// int sub_8074F0(uint32_t *a1);
// [0x807520] (61 bytes) sub_807520
// long double sub_807520(uint32_t *a1);
// [0x807560] (380 bytes) sub_807560
// int sub_807560(int a1);
// [0x8076e0] (407 bytes) sub_8076E0
// int sub_8076E0(int a1);
// [0x807880] (101 bytes) sub_807880
// int sub_807880(int a1);
// [0x8078f0] (285 bytes) sub_8078F0
// int (**sub_8078F0(int a1))(int);
// [0x807a10] (45 bytes) sub_807A10
// int sub_807A10(int a1);
// [0x807a40] (164 bytes) sub_807A40
// int sub_807A40(uint32_t *a1, int a2);
// [0x807af0] (150 bytes) sub_807AF0
// void sub_807AF0(int a1);
// [0x807b90] (37 bytes) sub_807B90
// int sub_807B90(int a1);
// [0x807bc0] (142 bytes) sub_807BC0
// void sub_807BC0(int a1);
// [0x807c50] (49 bytes) sub_807C50
// int sub_807C50(int a1, unsigned int a2);
// [0x807c90] (49 bytes) sub_807C90
// int sub_807C90(int a1, unsigned int a2);
// [0x807cd0] (102 bytes) sub_807CD0
// uint32_t *sub_807CD0(int a1, unsigned int a2);
// [0x807d40] (78 bytes) sub_807D40
// int sub_807D40(int a1, int a2);
// [0x807d90] (39 bytes) sub_807D90
// int sub_807D90(int a1, unsigned int a2, int a3);
// [0x807dc0] (132 bytes) sub_807DC0
// int sub_807DC0(int a1, unsigned int a2, char a3);
// [0x807e50] (33 bytes) sub_807E50
// unsigned int sub_807E50(int a1, unsigned int a2);
// [0x807e80] (169 bytes) sub_807E80
// unsigned int sub_807E80(int a1, unsigned int a2, uint8_t a3);
// [0x807f30] (64 bytes) sub_807F30
// int sub_807F30(int a1, unsigned int a2, int a3, uint8_t a4);
// [0x807f70] (111 bytes) sub_807F70
// void *sub_807F70(int a1, int a2);
// [0x807fe0] (62 bytes) sub_807FE0
// void sub_807FE0(int a1);
// [0x808020] (129 bytes) sub_808020
// int sub_808020(int a1, uint8_t a2);
// [0x8080e0] (48 bytes) sub_8080E0
// int sub_8080E0(int a1);
// [0x808110] (89 bytes) sub_808110
// int sub_808110(int a1, int a2);
// [0x808170] (90 bytes) sub_808170
// void sub_808170(uint32_t *a1);
// [0x8081d0] (123 bytes) sub_8081D0
// int (**sub_8081D0(int a1))(int);
// [0x808250] (123 bytes) sub_808250
// int (**sub_808250(int a1))(int);
// [0x8082d0] (28 bytes) sub_8082D0
// int sub_8082D0(int a1);
// [0x8082f0] (305 bytes) sub_8082F0
// void sub_8082F0( int a1, uint32_t *a2, float *a3, float a4, float a5, float a6, uint32_t *a7, int a8, char a9, int a10, uint32_t *a11);
// [0x808430] (717 bytes) sub_808430
// void sub_808430( int a1, float *a2, float a3, float a4, float a5, uint32_t *a6, int a7, char a8, int a9, uint32_t *a10);
// [0x808700] (1199 bytes) sub_808700
// float *sub_808700( float *a1, float *a2, char a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, float a24, float a25, int a26, float a27, float a28, float a29, int a30, float a31, float a32, unsigned int a33, unsigned int a34, float a35, float a36, unsigned int a37, unsigned int a38, float a39, float a40, float a41, int a42, float a43, float a44, float a45, int a46, float a47, float a48, unsigned int a49, unsigned int a50, float a51, float a52, unsigned int a53, unsigned int a54, float a55, float a56, float a57, int a58, float a59, float a60, float a61, int a62, float a63, float a64);
// [0x808bb0] (857 bytes) sub_808BB0
// void sub_808BB0(int a1, unsigned int a2);
// [0x808f10] (926 bytes) sub_808F10
// int sub_808F10();
// [0x8092b0] (294 bytes) sub_8092B0
// int sub_8092B0(int a1, unsigned int a2);
// [0x8093e0] (279 bytes) sub_8093E0
// void sub_8093E0(char *a1, gameswf::CharacterHandle *a2, int a3, int a4, int a5, char a6, int a7);
// [0x809500] (426 bytes) sub_809500
// int sub_809500(int a1, gameswf::CharacterHandle *a2);
// [0x8096b0] (863 bytes) sub_8096B0
// void sub_8096B0(int a1);
// [0x80a380] (1868 bytes) sub_80A380
// int sub_80A380(int *a1, char *a2);
// [0x80aad0] (1913 bytes) sub_80AAD0
// uint32_t *sub_80AAD0(uint32_t *a1, int a2, float *a3, int *a4, char a5);
// [0x80b250] (2062 bytes) sub_80B250
// int sub_80B250(float *a1, int a2, int a3, char a4, int a5);
// [0x80ba60] (834 bytes) sub_80BA60
// int sub_80BA60( int a1, int *a2, int a3, int a4, int a5, int a6, int a7, char *a8, char *a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19);
// [0x80bdb0] (994 bytes) sub_80BDB0
// 0x80bdb0 sub_80BDB0
// [0x80c1a0] (744 bytes) sub_80C1A0
// uint32_t *sub_80C1A0(int a1, int a2, int a3);
// [0x80c490] (1204 bytes) sub_80C490
// unsigned int sub_80C490(int a1);
// [0x80c950] (1311 bytes) sub_80C950
// int sub_80C950(int a1);
// [0x80ce70] (604 bytes) sub_80CE70
// int sub_80CE70( int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, float a19, int a20, float a21, int a22, float a23);
// [0x80d0d0] (190 bytes) sub_80D0D0
// int sub_80D0D0(int a1, int a2, char *a3, int a4, char a5);
// [0x80d190] (79 bytes) sub_80D190
// void sub_80D190(int a1, gameswf::CharacterHandle *a2);
// [0x80d1e0] (34 bytes) sub_80D1E0
// void sub_80D1E0(int a1, int a2);
// [0x80d210] (749 bytes) sub_80D210
// void sub_80D210(int a1);
// [0x80d500] (131 bytes) sub_80D500
// void sub_80D500(uint32_t *a1, int a2);
// [0x80d590] (137 bytes) sub_80D590
// uint32_t *sub_80D590(uint32_t *a1);
// [0x80d620] (177 bytes) sub_80D620
// void sub_80D620(uint32_t *a1);
// [0x80d6e0] (170 bytes) sub_80D6E0
// int sub_80D6E0(int *a1);
// [0x80d790] (165 bytes) sub_80D790
// void sub_80D790(int a1, int a2);
// [0x80d840] (176 bytes) sub_80D840
// int (**sub_80D840(uint32_t *a1))(int);
// [0x80d8f0] (73 bytes) sub_80D8F0
// int (**sub_80D8F0(uint32_t *a1))(int);
// [0x80d940] (34 bytes) sub_80D940
// int (**sub_80D940(uint32_t *a1))(int);
// [0x80d970] (34 bytes) sub_80D970
// int (**sub_80D970(uint32_t *a1))(int);
// [0x80d9a0] (90 bytes) sub_80D9A0
// int (**sub_80D9A0(int a1))(int);
// [0x80da00] (56 bytes) sub_80DA00
// void sub_80DA00(uint32_t *a1);
// [0x80da40] (34 bytes) sub_80DA40
// int (**sub_80DA40(uint32_t *a1))(int);
// [0x80da70] (70 bytes) sub_80DA70
// void sub_80DA70(uint32_t *a1);
// [0x80dac0] (70 bytes) sub_80DAC0
// void sub_80DAC0(uint32_t *a1);
// [0x80db10] (70 bytes) sub_80DB10
// void sub_80DB10(uint32_t *a1);
// [0x80db60] (70 bytes) sub_80DB60
// void sub_80DB60(uint32_t *a1);
// [0x80dbb0] (34 bytes) sub_80DBB0
// int (**sub_80DBB0(uint32_t *a1))(int);
// [0x80dbe0] (34 bytes) sub_80DBE0
// int (**sub_80DBE0(uint32_t *a1))(int);
// [0x80dc10] (70 bytes) sub_80DC10
// void sub_80DC10(uint32_t *a1);
// [0x80dc60] (34 bytes) sub_80DC60
// int (**sub_80DC60(uint32_t *a1))(int);
// [0x80dc90] (34 bytes) sub_80DC90
// int (**sub_80DC90(uint32_t *a1))(int);
// [0x80dcc0] (70 bytes) sub_80DCC0
// void sub_80DCC0(uint32_t *a1);
// [0x80dd10] (70 bytes) sub_80DD10
// void sub_80DD10(uint32_t *a1);
// [0x80dd60] (70 bytes) sub_80DD60
// void sub_80DD60(uint32_t *a1);
// [0x80ddb0] (34 bytes) sub_80DDB0
// int (**sub_80DDB0(uint32_t *a1))(int);
// [0x80dde0] (34 bytes) sub_80DDE0
// int (**sub_80DDE0(uint32_t *a1))(int);
// [0x80de10] (34 bytes) sub_80DE10
// int (**sub_80DE10(uint32_t *a1))(int);
// [0x80de40] (70 bytes) sub_80DE40
// void sub_80DE40(uint32_t *a1);
// [0x80de90] (70 bytes) sub_80DE90
// void sub_80DE90(uint32_t *a1);
// [0x80dee0] (34 bytes) sub_80DEE0
// int (**sub_80DEE0(uint32_t *a1))(int);
// [0x80df10] (81 bytes) sub_80DF10
// void sub_80DF10(uint32_t *a1);
// [0x80df70] (70 bytes) sub_80DF70
// void sub_80DF70(uint32_t *a1);
// [0x80dfc0] (34 bytes) sub_80DFC0
// int (**sub_80DFC0(uint32_t *a1))(int);
// [0x80dff0] (34 bytes) sub_80DFF0
// int (**sub_80DFF0(uint32_t *a1))(int);
// [0x80e020] (34 bytes) sub_80E020
// int (**sub_80E020(uint32_t *a1))(int);
// [0x80e050] (34 bytes) sub_80E050
// int (**sub_80E050(uint32_t *a1))(int);
// [0x80e080] (161 bytes) sub_80E080
// int (**sub_80E080(int *a1))(int);
// [0x80e130] (70 bytes) sub_80E130
// void sub_80E130(uint32_t *a1);
// [0x80e180] (70 bytes) sub_80E180
// void sub_80E180(uint32_t *a1);
// [0x80e1d0] (70 bytes) sub_80E1D0
// void sub_80E1D0(uint32_t *a1);
// [0x80e220] (122 bytes) sub_80E220
// int (**sub_80E220(uint32_t *a1))(int);
// [0x80e2a0] (107 bytes) sub_80E2A0
// int (**sub_80E2A0(uint32_t *a1))(int);
// [0x80e310] (70 bytes) sub_80E310
// void sub_80E310(uint32_t *a1);
// [0x80e360] (115 bytes) sub_80E360
// void sub_80E360(uint32_t *a1);
// [0x80e3e0] (169 bytes) sub_80E3E0
// void sub_80E3E0(int *a1);
// [0x80e490] (130 bytes) sub_80E490
// void sub_80E490(uint32_t *a1);
// [0x80e520] (232 bytes) sub_80E520
// void sub_80E520(void *a1);
// [0x80e610] (322 bytes) sub_80E610
// void sub_80E610(uint32_t *a1);
// [0x80e760] (56 bytes) sub_80E760
// void sub_80E760(uint32_t *a1);
// [0x80e7a0] (221 bytes) sub_80E7A0
// void sub_80E7A0(uint32_t *a1, int a2);
// [0x80e880] (175 bytes) sub_80E880
// unsigned int sub_80E880(unsigned int a1, int a2);
// [0x80e930] (984 bytes) sub_80E930
// int *sub_80E930(int *a1, int *a2);
// [0x80ed10] (192 bytes) sub_80ED10
// char *sub_80ED10(int a1);
// [0x80edd0] (612 bytes) sub_80EDD0
// int sub_80EDD0(uint32_t *a1, int a2);
// [0x80f040] (695 bytes) sub_80F040
// int sub_80F040(uint32_t *a1, int a2);
// [0x80f300] (664 bytes) sub_80F300
// void sub_80F300(int a1, gameswf::CharacterHandle *a2);
// [0x80f5a0] (142 bytes) sub_80F5A0
// int sub_80F5A0(int *a1, gameswf::CharacterHandle *a2);
// [0x80f630] (672 bytes) sub_80F630
// void sub_80F630(int a1, gameswf::CharacterHandle *a2, int a3);
// [0x80f8d0] (3612 bytes) sub_80F8D0
// int sub_80F8D0(long double a1, uint32_t *a2, float *a3, uint32_t *a4, char a5, int a6);
// [0x8106f0] (763 bytes) sub_8106F0
// int sub_8106F0(long double a1, int a2, uint32_t *a3, float *a4);
// [0x8109f0] (566 bytes) sub_8109F0
// void sub_8109F0(long double a1, int a2, unsigned int a3, float *a4);
// [0x810c30] (712 bytes) sub_810C30
// int sub_810C30(long double a1, int a2, float *a3);
// [0x810f00] (1258 bytes) sub_810F00
// int sub_810F00(int a1, float *a2, long double a3);
// [0x8113f0] (3175 bytes) sub_8113F0
// int sub_8113F0(int a1, int a2);
// [0x812060] (3596 bytes) sub_812060
// void sub_812060(gameswf *a1, int a2);
// [0x812e70] (905 bytes) sub_812E70
// int sub_812E70(int a1, int a2, char *a3, char *a4);
// [0x813200] (157 bytes) sub_813200
// int sub_813200(int a1);
// [0x8132a0] (10 bytes) sub_8132A0
// int sub_8132A0(int a1);
// [0x8132b0] (7 bytes) sub_8132B0
// int sub_8132B0(int a1);
// [0x8132c0] (501 bytes) sub_8132C0
// void (__noreturn **sub_8132C0(int a1))();
// [0x8134c0] (10 bytes) sub_8134C0
// int sub_8134C0(int a1);
// [0x8134d0] (7 bytes) sub_8134D0
// int sub_8134D0(int a1);
// [0x8134e0] (509 bytes) sub_8134E0
// void sub_8134E0(char *a1);
// [0x8136e0] (201 bytes) sub_8136E0
// int (**sub_8136E0(int a1))(int);
// [0x8137b0] (209 bytes) sub_8137B0
// void sub_8137B0(uint32_t *a1);
// [0x813890] (2922 bytes) sub_813890
// void sub_813890(int a1, int a2, char a3);
// [0x814400] (3311 bytes) sub_814400
// void sub_814400(int16_t a1, int a2, char a3);
// [0x8150f0] (656 bytes) sub_8150F0
// int sub_8150F0(uint32_t *a1);
// [0x815380] (181 bytes) sub_815380
// int sub_815380(uint32_t *a1);
// [0x815440] (341 bytes) sub_815440
// int sub_815440(uint32_t *a1);
// [0x8155a0] (261 bytes) sub_8155A0
// int sub_8155A0(int a1);
// [0x8156b0] (373 bytes) sub_8156B0
// void sub_8156B0(uint32_t *a1, int a2);
// [0x815830] (1540 bytes) sub_815830
// int sub_815830(int a1, int *a2);
// [0x815e40] (4348 bytes) sub_815E40
// int sub_815E40(int a1);
// [0x816f40] (452 bytes) sub_816F40
// int sub_816F40(int a1, int a2);
// [0x817110] (46 bytes) sub_817110
// int sub_817110(int a1, int a2);
// [0x817140] (39 bytes) sub_817140
// int sub_817140(int a1);
// [0x817170] (46 bytes) sub_817170
// int sub_817170(int a1);
// [0x8171a0] (284 bytes) sub_8171A0
// uint32_t *sub_8171A0(uint32_t *a1, int a2, int *a3, int *a4);
// [0x8172c0] (215 bytes) sub_8172C0
// int sub_8172C0(int a1, int *a2);
// [0x8173a0] (834 bytes) sub_8173A0
// int sub_8173A0(uint32_t *a1, int a2);
// [0x8176f0] (2533 bytes) sub_8176F0
// uint32_t *sub_8176F0(uint32_t *a1, int a2, int a3, int a4);
// [0x8180e0] (284 bytes) sub_8180E0
// uint32_t *sub_8180E0(uint32_t *a1, int a2, int *a3, int *a4);
// [0x818200] (215 bytes) sub_818200
// int sub_818200(int a1, int *a2);
// [0x8182e0] (151 bytes) sub_8182E0
// long double sub_8182E0(int a1, char *s, char a3);
// [0x818380] (47 bytes) sub_818380
// int sub_818380(int a1, char *s);
// [0x8183b0] (82 bytes) sub_8183B0
// int sub_8183B0(int a1, char *s);
// [0x818410] (220 bytes) sub_818410
// long double sub_818410(int a1, int a2);
// [0x8184f0] (220 bytes) sub_8184F0
// long double sub_8184F0(int a1, int a2);
// [0x8185d0] (220 bytes) sub_8185D0
// long double sub_8185D0(int a1, int a2);
// [0x8186b8] (1 bytes) nullsub_274
// void nullsub_274();
// [0x8186c8] (1 bytes) nullsub_275
// void nullsub_275();
// [0x8186d0] (13 bytes) sub_8186D0
// int sub_8186D0(int a1);
// [0x8186e0] (14 bytes) sub_8186E0
// bool sub_8186E0(int a1);
// [0x8186f0] (14 bytes) sub_8186F0
// bool sub_8186F0(int a1);
// [0x818708] (1 bytes) nullsub_276
// void nullsub_276();
// [0x818710] (7 bytes) sub_818710
// int sub_818710(int a1);
// [0x818720] (14 bytes) sub_818720
// bool sub_818720(int a1);
// [0x818730] (21 bytes) sub_818730
// int sub_818730(int a1, char a2);
// [0x818750] (9 bytes) sub_818750
// int sub_818750();
// [0x818768] (1 bytes) nullsub_277
// void nullsub_277();
// [0x818778] (1 bytes) nullsub_278
// void nullsub_278();
// [0x818788] (1 bytes) nullsub_279
// void nullsub_279();
// [0x818798] (1 bytes) nullsub_280
// void nullsub_280();
// [0x8187a8] (1 bytes) nullsub_281
// void nullsub_281();
// [0x8187b8] (1 bytes) nullsub_282
// void nullsub_282();
// [0x8187c8] (1 bytes) nullsub_283
// void nullsub_283();
// [0x8187d8] (1 bytes) nullsub_284
// void nullsub_284();
// [0x8187e0] (20 bytes) sub_8187E0
// uint32_t *sub_8187E0(uint32_t *a1, int a2, int a3, int a4);
// [0x818810] (24 bytes) sub_818810
// uint32_t *sub_818810(uint32_t *a1);
// [0x818830] (24 bytes) sub_818830
// uint32_t *sub_818830(uint32_t *a1);
// [0x818850] (24 bytes) sub_818850
// uint32_t *sub_818850(uint32_t *a1);
// [0x818870] (24 bytes) sub_818870
// uint32_t *sub_818870(uint32_t *a1);
// [0x818890] (28 bytes) sub_818890
// int sub_818890(int a1);
// [0x8188b0] (28 bytes) sub_8188B0
// int sub_8188B0(int a1);
// [0x8188d0] (12 bytes) sub_8188D0
// int sub_8188D0(int a1);
// [0x8188e0] (9 bytes) sub_8188E0
// int sub_8188E0();
// [0x8188f8] (1 bytes) nullsub_285
// void nullsub_285();
// [0x818900] (28 bytes) sub_818900
// int sub_818900(int a1);
// [0x818920] (28 bytes) sub_818920
// int sub_818920(int a1);
// [0x818940] (32 bytes) sub_818940
// uint32_t *sub_818940(uint32_t *a1, int a2, uint32_t *a3);
// [0x818960] (34 bytes) sub_818960
// uint32_t *sub_818960(uint32_t *a1, uint32_t *a2);
// [0x818998] (1 bytes) nullsub_286
// void nullsub_286();
// [0x8189a0] (26 bytes) sub_8189A0
// uint32_t *sub_8189A0(uint32_t *a1, int a2, uint32_t *a3);
// [0x8189c0] (28 bytes) sub_8189C0
// uint32_t *sub_8189C0(uint32_t *a1, uint32_t *a2);
// [0x8189e8] (1 bytes) nullsub_287
// void nullsub_287();
// [0x8189f0] (20 bytes) sub_8189F0
// int sub_8189F0(int a1, int a2, uint32_t *a3);
// [0x818a10] (22 bytes) sub_818A10
// uint32_t *sub_818A10(uint32_t *a1, int a2);
// [0x818a38] (1 bytes) nullsub_288
// void nullsub_288();
// [0x818a40] (14 bytes) sub_818A40
// int sub_818A40(int a1, int a2, uint32_t *a3);
// [0x818a50] (12 bytes) sub_818A50
// long double sub_818A50(int a1);
// [0x818a68] (1 bytes) nullsub_289
// void nullsub_289();
// [0x818a70] (42 bytes) sub_818A70
// void sub_818A70(uint32_t *a1);
// [0x818aa0] (42 bytes) sub_818AA0
// void sub_818AA0(uint32_t *a1);
// [0x818ad0] (42 bytes) sub_818AD0
// void sub_818AD0(uint32_t *a1);
// [0x818b00] (42 bytes) sub_818B00
// void sub_818B00(uint32_t *a1);
// [0x818b30] (46 bytes) sub_818B30
// void sub_818B30(uint8_t *a1);
// [0x818b60] (46 bytes) sub_818B60
// void sub_818B60(uint8_t *a1);
// [0x818b90] (46 bytes) sub_818B90
// void sub_818B90(uint8_t *a1);
// [0x818bc0] (46 bytes) sub_818BC0
// void sub_818BC0(uint8_t *a1);
// [0x818bf0] (40 bytes) std::vector<glitch::core::aabbox3d<float>,GameAllocator<glitch::core::aabbox3d<float>>>::~vector()
// void std::vector<glitch::core::aabbox3d<float>,GameAllocator<glitch::core::aabbox3d<float>>>::~vector( std::vector<glitch::core::aabbox3d<float>, GameAllocator<glitch::core::aabbox3d<float>>> *this);
// [0x818c20] (294 bytes) sub_818C20
// int sub_818C20(int a1, int a2, float a3);
// [0x818d50] (308 bytes) sub_818D50
// float *sub_818D50(float *a1, int a2, float a3);
// [0x818e90] (264 bytes) sub_818E90
// float *sub_818E90(float *a1, int a2, float a3);
// [0x818fa0] (190 bytes) sub_818FA0
// long double sub_818FA0(int a1, float a2);
// [0x819060] (620 bytes) sub_819060
// int sub_819060(uint32_t *a1, float a2, uint32_t *a3);
// [0x8192d0] (556 bytes) sub_8192D0
// int sub_8192D0(uint32_t *a1, float a2, int *a3);
// [0x819500] (655 bytes) sub_819500
// int sub_819500(uint32_t *a1, float a2, uint32_t *a3);
// [0x819790] (414 bytes) sub_819790
// int sub_819790(int a1, int a2);
// [0x819930] (440 bytes) sub_819930
// const char *sub_819930(int a1);
// [0x819af0] (916 bytes) sub_819AF0
// float *sub_819AF0(float *a1, float *a2, float *a3);
// [0x819e90] (638 bytes) std::map<std::string,bool (SwfHud::*)(void),std::less<std::string>,std::allocator<std::pair<std::string const,bool (SwfHud::*)(void)>>>::operator[](std::string const&)
// uint32_t *std::map<std::string,bool (SwfHud::*)(void),std::less<std::string>,std::allocator<std::pair<std::string const,bool (SwfHud::*)(void)>>>::operator[](;
// [0x81a110] (67 bytes) sub_81A110
// long double sub_81A110(int a1, int a2, int a3);
// [0x81a160] (144 bytes) sub_81A160
// int sub_81A160(int a1, int a2, int a3);
// [0x81a1f0] (159 bytes) sub_81A1F0
// uint32_t *sub_81A1F0(uint32_t *a1, int a2, int a3);
// [0x81a290] (148 bytes) sub_81A290
// double *sub_81A290(double *a1, int a2, int a3);
// [0x81a330] (279 bytes) sub_81A330
// void sub_81A330(int a1, float *a2);
// [0x81a450] (199 bytes) sub_81A450
// void sub_81A450(int a1, float *a2);
// [0x81a520] (677 bytes) sub_81A520
// int sub_81A520(int a1, int a2, int a3);
// [0x81a7d0] (172 bytes) std::vector<std::pair<Gangstar::Handle<LevelObject,false>,std::string>,GameAllocator<std::pair<Gangstar::Handle<LevelObject,false>,std::string>>>::erase(__gnu_cxx::__normal_iterator<std::pair<Gangstar::Handle<LevelObject,false>,std::string>*,std::vector<std::pair<Gangstar::Handle<LevelObject,false>,std::string>,GameAllocator<std::pair<Gangstar::Handle<LevelObject,false>,std::string>>>>)
// uint32_t *std::vector<std::pair<Gangstar::Handle<LevelObject,false>,std::string>,GameAllocator<std::pair<Gangstar::Handle<LevelObject,false>,std::string>>>::erase( uint32_t *a1, int a2, int a3);
// [0x81a880] (34 bytes) sub_81A880
// int (**sub_81A880(uint32_t *a1))(int);
// [0x81a8b0] (34 bytes) sub_81A8B0
// int (**sub_81A8B0(uint32_t *a1))(int);
// [0x81a8e0] (108 bytes) sub_81A8E0
// int (**sub_81A8E0(uint32_t *a1))(int);
// [0x81a950] (70 bytes) sub_81A950
// void sub_81A950(uint32_t *a1);
// [0x81a9a0] (70 bytes) sub_81A9A0
// void sub_81A9A0(uint32_t *a1);
// [0x81a9f0] (116 bytes) sub_81A9F0
// void sub_81A9F0(uint32_t *a1);
// [0x81aa70] (905 bytes) std::vector<std::pair<Gangstar::Handle<LevelObject,false>,std::string>,GameAllocator<std::pair<Gangstar::Handle<LevelObject,false>,std::string>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<std::pair<Gangstar::Handle<LevelObject,false>,std::string>*,std::vector<std::pair<Gangstar::Handle<LevelObject,false>,std::string>,GameAllocator<std::pair<Gangstar::Handle<LevelObject,false>,std::string>>>>,std::pair<Gangstar::Handle<LevelObject,false>,std::string> const&)
// void std::vector<std::pair<Gangstar::Handle<LevelObject,false>,std::string>,GameAllocator<std::pair<Gangstar::Handle<LevelObject,false>,std::string>>>::_M_insert_aux( int *a1, uint32_t *a2, uint32_t *a3);
// [0x81ae00] (1222 bytes) std::vector<SwfMinimapHud::MinimapIconData,GameAllocator<SwfMinimapHud::MinimapIconData>>::_M_insert_aux(__gnu_cxx::__normal_iterator<SwfMinimapHud::MinimapIconData*,std::vector<SwfMinimapHud::MinimapIconData,GameAllocator<SwfMinimapHud::MinimapIconData>>>,SwfMinimapHud::MinimapIconData const&)
// void std::vector<SwfMinimapHud::MinimapIconData,GameAllocator<SwfMinimapHud::MinimapIconData>>::_M_insert_aux( int *a1, int a2, int a3);
// [0x81b2d0] (567 bytes) std::_Rb_tree<std::string,std::pair<std::string const,HudElement *>,std::_Select1st<std::pair<std::string const,HudElement *>>,std::less<std::string>,std::allocator<std::pair<std::string const,HudElement *>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,HudElement *>> *)
// void std::_Rb_tree<std::string,std::pair<std::string const,HudElement *>,std::_Select1st<std::pair<std::string const,HudElement *>>,std::less<std::string>,std::allocator<std::pair<std::string const,HudElement *>>>::_M_erase( int a1, uint32_t *a2);
// [0x81b510] (425 bytes) std::_Rb_tree<int,std::pair<int const,SwfHud::TouchedTargetInfo *>,std::_Select1st<std::pair<int const,SwfHud::TouchedTargetInfo *>>,std::less<int>,std::allocator<std::pair<int const,SwfHud::TouchedTargetInfo *>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,SwfHud::TouchedTargetInfo *>> *)
// void std::_Rb_tree<int,std::pair<int const,SwfHud::TouchedTargetInfo *>,std::_Select1st<std::pair<int const,SwfHud::TouchedTargetInfo *>>,std::less<int>,std::allocator<std::pair<int const,SwfHud::TouchedTargetInfo *>>>::_M_erase( int a1, uint32_t *a2);
// [0x81b6c0] (820 bytes) std::_Rb_tree<std::pair<std::string,std::string>,std::pair<std::pair<std::string,std::string> const,gameswf::CharacterHandle>,std::_Select1st<std::pair<std::pair<std::string,std::string> const,gameswf::CharacterHandle>>,std::less<std::pair<std::string,std::string>>,std::allocator<std::pair<std::pair<std::string,std::string> const,gameswf::CharacterHandle>>>::_M_erase(std::_Rb_tree_node<std::pair<std::pair<std::string,std::string> const,gameswf::CharacterHandle>> *)
// void std::_Rb_tree<std::pair<std::string,std::string>,std::pair<std::pair<std::string,std::string> const,gameswf::CharacterHandle>,std::_Select1st<std::pair<std::pair<std::string,std::string> const,gameswf::CharacterHandle>>,std::less<std::pair<std::string,std::string>>,std::allocator<std::pair<std::pair<std::string,std::string> const,gameswf::CharacterHandle>>>::_M_erase( int a1, uint32_t *a2);
// [0x81ba00] (567 bytes) std::_Rb_tree<std::string,std::pair<std::string const,bool (SwfHud::*)(void)>,std::_Select1st<std::pair<std::string const,bool (SwfHud::*)(void)>>,std::less<std::string>,std::allocator<std::pair<std::string const,bool (SwfHud::*)(void)>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,bool (SwfHud::*)(void)>> *)
// void std::_Rb_tree<std::string,std::pair<std::string const,bool (SwfHud::*)(void)>,std::_Select1st<std::pair<std::string const,bool (SwfHud::*)(void)>>,std::less<std::string>,std::allocator<std::pair<std::string const,bool (SwfHud::*)(void)>>>::_M_erase(;
// [0x81bc40] (810 bytes) sub_81BC40
// int sub_81BC40(int a1, int a2);
// [0x81bf70] (41 bytes) std::map<int,int,std::less<int>,std::allocator<std::pair<int const,int>>>::~map()
// void std::map<int,int>::~map(std::map<int,int> *this);
// [0x81bfa0] (735 bytes) std::vector<std::pair<std::string,gameswf::ASValue>,GameAllocator<std::pair<std::string,gameswf::ASValue>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<std::pair<std::string,gameswf::ASValue>*,std::vector<std::pair<std::string,gameswf::ASValue>,GameAllocator<std::pair<std::string,gameswf::ASValue>>>>,std::pair<std::string,gameswf::ASValue> const&)
// int std::vector<std::pair<std::string,gameswf::ASValue>,GameAllocator<std::pair<std::string,gameswf::ASValue>>>::_M_insert_aux( int *a1, int a2, int a3);
// [0x81c280] (91 bytes) std::vector<AbilityManager::Ability *,std::allocator<AbilityManager::Ability *>>::_M_check_len(unsigned int,char const*)const
// int std::vector<AbilityManager::Ability *>::_M_check_len( std::vector<AbilityManager::Ability *> *this, unsigned int a2, char *a3);
// [0x81c2e0] (91 bytes) std::vector<AbilityManager::AbilityDefinition *,std::allocator<AbilityManager::AbilityDefinition *>>::_M_check_len(unsigned int,char const*)const
// int std::vector<AbilityManager::AbilityDefinition *>::_M_check_len( std::vector<AbilityManager::AbilityDefinition *> *this, unsigned int a2, char *a3);
// [0x81c340] (1365 bytes) std::vector<Value<float> *,std::allocator<Value<float> *>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Value<float> **,std::vector<Value<float> *,std::allocator<Value<float> *>>>,unsigned int,Value<float> * const&)
// void std::vector<Value<float> *,std::allocator<Value<float> *>>::_M_fill_insert( int a1, unsigned int *src, unsigned int a3, unsigned int *a4);
// [0x81c8a0] (1365 bytes) std::vector<Value<glitch::core::vector2d<float>> *,std::allocator<Value<glitch::core::vector2d<float>> *>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Value<glitch::core::vector2d<float>> **,std::vector<Value<glitch::core::vector2d<float>> *,std::allocator<Value<glitch::core::vector2d<float>> *>>>,unsigned int,Value<glitch::core::vector2d<float>> * const&)
// unsigned int *std::vector<Value<glitch::core::vector2d<float>> *,std::allocator<Value<glitch::core::vector2d<float>> *>>::_M_fill_insert( int a1, unsigned int *src, unsigned int a3, unsigned int *a4);
// [0x81ce00] (1365 bytes) std::vector<Value<glitch::core::vector3d<float>> *,std::allocator<Value<glitch::core::vector3d<float>> *>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Value<glitch::core::vector3d<float>> **,std::vector<Value<glitch::core::vector3d<float>> *,std::allocator<Value<glitch::core::vector3d<float>> *>>>,unsigned int,Value<glitch::core::vector3d<float>> * const&)
// void std::vector<Value<glitch::core::vector3d<float>> *,std::allocator<Value<glitch::core::vector3d<float>> *>>::_M_fill_insert( int a1, unsigned int *src, unsigned int a3, unsigned int *a4);
// [0x81d360] (1365 bytes) std::vector<Value<glitch::core::vector4d<float>> *,std::allocator<Value<glitch::core::vector4d<float>> *>>::_M_fill_insert(__gnu_cxx::__normal_iterator<Value<glitch::core::vector4d<float>> **,std::vector<Value<glitch::core::vector4d<float>> *,std::allocator<Value<glitch::core::vector4d<float>> *>>>,unsigned int,Value<glitch::core::vector4d<float>> * const&)
// unsigned int *std::vector<Value<glitch::core::vector4d<float>> *,std::allocator<Value<glitch::core::vector4d<float>> *>>::_M_fill_insert( int a1, unsigned int *src, unsigned int a3, unsigned int *a4);
// [0x81d8c0] (425 bytes) std::_Rb_tree<float,std::pair<float const,float>,std::_Select1st<std::pair<float const,float>>,std::less<float>,std::allocator<std::pair<float const,float>>>::_M_erase(std::_Rb_tree_node<std::pair<float const,float>> *)
// void std::_Rb_tree<float,std::pair<float const,float>,std::_Select1st<std::pair<float const,float>>,std::less<float>,std::allocator<std::pair<float const,float>>>::_M_erase( int a1, uint32_t *a2);
// [0x81da70] (81 bytes) sub_81DA70
// int sub_81DA70(int a1);
// [0x81dad0] (425 bytes) std::_Rb_tree<float,std::pair<float const,glitch::core::vector2d<float>>,std::_Select1st<std::pair<float const,glitch::core::vector2d<float>>>,std::less<float>,std::allocator<std::pair<float const,glitch::core::vector2d<float>>>>::_M_erase(std::_Rb_tree_node<std::pair<float const,glitch::core::vector2d<float>>> *)
// void std::_Rb_tree<float,std::pair<float const,glitch::core::vector2d<float>>,std::_Select1st<std::pair<float const,glitch::core::vector2d<float>>>,std::less<float>,std::allocator<std::pair<float const,glitch::core::vector2d<float>>>>::_M_erase( int a1, uint32_t *a2);
// [0x81dc80] (81 bytes) sub_81DC80
// int sub_81DC80(int a1);
// [0x81dce0] (425 bytes) std::_Rb_tree<float,std::pair<float const,glitch::core::vector3d<float>>,std::_Select1st<std::pair<float const,glitch::core::vector3d<float>>>,std::less<float>,std::allocator<std::pair<float const,glitch::core::vector3d<float>>>>::_M_erase(std::_Rb_tree_node<std::pair<float const,glitch::core::vector3d<float>>> *)
// void std::_Rb_tree<float,std::pair<float const,glitch::core::vector3d<float>>,std::_Select1st<std::pair<float const,glitch::core::vector3d<float>>>,std::less<float>,std::allocator<std::pair<float const,glitch::core::vector3d<float>>>>::_M_erase( int a1, uint32_t *a2);
// [0x81de90] (81 bytes) sub_81DE90
// int sub_81DE90(int a1);
// [0x81def0] (425 bytes) std::_Rb_tree<float,std::pair<float const,glitch::core::vector4d<float>>,std::_Select1st<std::pair<float const,glitch::core::vector4d<float>>>,std::less<float>,std::allocator<std::pair<float const,glitch::core::vector4d<float>>>>::_M_erase(std::_Rb_tree_node<std::pair<float const,glitch::core::vector4d<float>>> *)
// void std::_Rb_tree<float,std::pair<float const,glitch::core::vector4d<float>>,std::_Select1st<std::pair<float const,glitch::core::vector4d<float>>>,std::less<float>,std::allocator<std::pair<float const,glitch::core::vector4d<float>>>>::_M_erase( int a1, uint32_t *a2);
// [0x81e0a0] (81 bytes) sub_81E0A0
// int sub_81E0A0(int a1);
// [0x81e100] (204 bytes) std::_Rb_tree<float,std::pair<float const,glitch::core::vector4d<float>>,std::_Select1st<std::pair<float const,glitch::core::vector4d<float>>>,std::less<float>,std::allocator<std::pair<float const,glitch::core::vector4d<float>>>>::_M_insert_(std::_Rb_tree_node_base const*,std::_Rb_tree_node_base const*,std::pair<float const,glitch::core::vector4d<float>> const&)
// uint32_t *std::_Rb_tree<float,std::pair<float const,glitch::core::vector4d<float>>,std::_Select1st<std::pair<float const,glitch::core::vector4d<float>>>,std::less<float>,std::allocator<std::pair<float const,glitch::core::vector4d<float>>>>::_M_insert_( uint32_t *a1, int a2, int a3, int a4, int a5);
// [0x81e1d0] (360 bytes) std::_Rb_tree<float,std::pair<float const,glitch::core::vector4d<float>>,std::_Select1st<std::pair<float const,glitch::core::vector4d<float>>>,std::less<float>,std::allocator<std::pair<float const,glitch::core::vector4d<float>>>>::_M_insert_unique(std::pair<float const,glitch::core::vector4d<float>> const&)
// int std::_Rb_tree<float,std::pair<float const,glitch::core::vector4d<float>>,std::_Select1st<std::pair<float const,glitch::core::vector4d<float>>>,std::less<float>,std::allocator<std::pair<float const,glitch::core::vector4d<float>>>>::_M_insert_unique( int a1, uint32_t *a2, int a3);
// [0x81e340] (600 bytes) std::_Rb_tree<float,std::pair<float const,glitch::core::vector4d<float>>,std::_Select1st<std::pair<float const,glitch::core::vector4d<float>>>,std::less<float>,std::allocator<std::pair<float const,glitch::core::vector4d<float>>>>::_M_insert_unique_(std::_Rb_tree_const_iterator<std::pair<float const,glitch::core::vector4d<float>>>,std::pair<float const,glitch::core::vector4d<float>> const&)
// int *std::_Rb_tree<float,std::pair<float const,glitch::core::vector4d<float>>,std::_Select1st<std::pair<float const,glitch::core::vector4d<float>>>,std::less<float>,std::allocator<std::pair<float const,glitch::core::vector4d<float>>>>::_M_insert_unique_( int *a1, uint32_t *a2, int a3, int a4);
// [0x81e5a0] (188 bytes) sub_81E5A0
// int sub_81E5A0(int a1, float a2, uint32_t *a3);
