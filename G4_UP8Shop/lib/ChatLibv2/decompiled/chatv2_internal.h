#pragma once
// ============================================================================
// G4_UP8Shop/lib/ChatLibv2/decompiled/chatv2_internal.h
// Library: ChatLibv2 | Module: chatv2_internal
// Binary Address Span: 0x12062f0 .. 0x1277cd9 (248 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x12062f0] (2984 bytes) sub_12062F0
// int sub_12062F0(int a1, int a2, uint32_t *a3);
// [0x1206ec0] (668 bytes) sub_1206EC0
// int sub_1206EC0(size_t *a1);
// [0x1207160] (518 bytes) sub_1207160
// int sub_1207160(size_t a1, const char *a2, uint32_t *a3);
// [0x1207370] (923 bytes) sub_1207370
// int sub_1207370(int *a1, int a2, int a3, unsigned int a4, int a5);
// [0x1207710] (797 bytes) sub_1207710
// int sub_1207710(size_t a1, const char *a2, uint32_t *a3);
// [0x1207a80] (1915 bytes) sub_1207A80
// int sub_1207A80(int a1, int a2);
// [0x1208200] (1400 bytes) sub_1208200
// int sub_1208200(int a1, int a2);
// [0x1208780] (1915 bytes) sub_1208780
// int sub_1208780(int a1, int a2);
// [0x1208f00] (2650 bytes) sub_1208F00
// int sub_1208F00(int a1, int a2);
// [0x1209960] (298 bytes) sub_1209960
// int sub_1209960(int a1, int a2);
// [0x1209a8a] (498 bytes) sub_1209A8A
// unsigned int sub_1209A8A(int a1, int a2);
// [0x1209c7c] (542 bytes) sub_1209C7C
// int sub_1209C7C(char a1, int a2, int a3, int a4, char a5, char a6);
// [0x1209e9a] (71 bytes) sub_1209E9A
// int sub_1209E9A(int a1, int a2, int a3, int a4);
// [0x1209ee1] (447 bytes) sub_1209EE1
// int sub_1209EE1(char a1, int a2, int a3, int a4);
// [0x120a0a0] (588 bytes) sub_120A0A0
// int sub_120A0A0(int a1, int a2, int a3, int a4, int a5);
// [0x120a2ec] (336 bytes) sub_120A2EC
// int sub_120A2EC(unsigned int a1, unsigned int a2, int *a3, int a4, int *a5, int a6);
// [0x120a43c] (517 bytes) sub_120A43C
// uint32_t *sub_120A43C(uint32_t *a1, int a2);
// [0x120a650] (53 bytes) sub_120A650
// int sub_120A650(int a1, int a2);
// [0x120a690] (30 bytes) sub_120A690
// int sub_120A690(uint32_t *a1);
// [0x120a6b0] (21 bytes) sub_120A6B0
// int sub_120A6B0(int a1);
// [0x120a6d0] (122 bytes) sub_120A6D0
// int sub_120A6D0(int a1, unsigned int a2);
// [0x120a750] (160 bytes) sub_120A750
// int sub_120A750(int a1, unsigned int *a2);
// [0x120a7f0] (31 bytes) sub_120A7F0
// int sub_120A7F0(int a1, uint32_t *a2, uint32_t *a3);
// [0x120a810] (104 bytes) sub_120A810
// int sub_120A810(int *a1, int a2);
// [0x120a880] (369 bytes) sub_120A880
// int sub_120A880(int a1, int *a2, unsigned int a3);
// [0x120aa00] (897 bytes) sub_120AA00
// int *sub_120AA00(int *result);
// [0x120ad90] (248 bytes) sub_120AD90
// int sub_120AD90(int a1);
// [0x120ae90] (44 bytes) sub_120AE90
// const char *sub_120AE90(int a1, char *a2);
// [0x120aec0] (252 bytes) sub_120AEC0
// int sub_120AEC0(uint8_t *a1);
// [0x120afc0] (184 bytes) sub_120AFC0
// int sub_120AFC0(uint8_t *a1);
// [0x120b080] (944 bytes) sub_120B080
// int sub_120B080(int *a1, uint8_t *a2, uint8_t *a3, int a4);
// [0x120b430] (166 bytes) sub_120B430
// int sub_120B430(int *a1, uint8_t *a2, uint8_t *a3, int a4);
// [0x120b4e0] (237 bytes) sub_120B4E0
// int sub_120B4E0(int *a1, int *a2);
// [0x120b5d0] (291 bytes) sub_120B5D0
// int sub_120B5D0(uint8_t *a1);
// [0x120b700] (343 bytes) sub_120B700
// int sub_120B700(int a1, char *s2, uint32_t *a3);
// [0x120b860] (4307 bytes) sub_120B860
// int sub_120B860(uint8_t *a1, int a2, int a3, int a4, int a5);
// [0x120c940] (6472 bytes) sub_120C940
// int sub_120C940(uint32_t *a1, size_t a2, int a3);
// [0x120e290] (4296 bytes) sub_120E290
// int sub_120E290(uint32_t *a1, const char *a2, char *a3);
// [0x120f360] (5055 bytes) sub_120F360
// int sub_120F360(uint8_t *a1, int a2, int a3, uint32_t *a4, int *a5);
// [0x1210720] (1876 bytes) sub_1210720
// int sub_1210720(char *s2, int a2, int a3, uint32_t *a4, uint32_t *a5);
// [0x1210e80] (68 bytes) sub_1210E80
// int sub_1210E80(int a1, int a2, int a3, uint32_t *a4);
// [0x1210ed0] (15 bytes) sub_1210ED0
// bool sub_1210ED0(int a1);
// [0x1210ee0] (19 bytes) sub_1210EE0
// int sub_1210EE0(int a1);
// [0x1210f00] (39 bytes) sub_1210F00
// int sub_1210F00(int a1, uint8_t *a2);
// [0x1210f30] (71 bytes) sub_1210F30
// char sub_1210F30(int a1, unsigned int a2, uint32_t *a3);
// [0x1210f80] (20 bytes) sub_1210F80
// int sub_1210F80(int a1);
// [0x1210fa0] (58 bytes) sub_1210FA0
// int sub_1210FA0(int a1);
// [0x1210fe8] (1 bytes) nullsub_551
// void nullsub_551();
// [0x1210ff0] (24 bytes) sub_1210FF0
// int sub_1210FF0(uint32_t *a1);
// [0x1211010] (16 bytes) sub_1211010
// int sub_1211010(int a1);
// [0x1211020] (26 bytes) sub_1211020
// int sub_1211020(int a1, unsigned int a2);
// [0x1211040] (68 bytes) sub_1211040
// int sub_1211040(int a1, unsigned int *a2);
// [0x1211090] (126 bytes) sub_1211090
// int sub_1211090(uint32_t *a1);
// [0x1211110] (41 bytes) sub_1211110
// int sub_1211110(int a1, int a2);
// [0x1211140] (41 bytes) sub_1211140
// int sub_1211140(int a1, int a2);
// [0x1211178] (1 bytes) nullsub_552
// void nullsub_552();
// [0x1211180] (740 bytes) sub_1211180
// signed int sub_1211180(int *a1, int a2, int a3, int a4, int a5, int *a6, signed int *a7);
// [0x1211470] (74 bytes) sub_1211470
// int sub_1211470(uint32_t *a1);
// [0x12114c0] (112 bytes) sub_12114C0
// int sub_12114C0(int a1);
// [0x1211530] (1049 bytes) sub_1211530
// int sub_1211530(uint8_t *a1, unsigned int a2, int a3, int *a4);
// [0x1211950] (161 bytes) sub_1211950
// int sub_1211950(uint32_t *a1, uint32_t *a2);
// [0x1211a00] (181 bytes) sub_1211A00
// int sub_1211A00(int a1, char *s1);
// [0x1211ac0] (77 bytes) sub_1211AC0
// int sub_1211AC0(uint32_t *a1, unsigned int a2);
// [0x1211b10] (260 bytes) sub_1211B10
// int sub_1211B10(int a1, int a2);
// [0x1211c20] (778 bytes) sub_1211C20
// unsigned int sub_1211C20(uint32_t *a1, uint32_t *a2, uint32_t *a3);
// [0x1211f30] (102 bytes) sub_1211F30
// int sub_1211F30(int a1);
// [0x1211fa0] (103 bytes) sub_1211FA0
// int sub_1211FA0(int a1, unsigned int a2);
// [0x1212010] (135 bytes) sub_1212010
// int sub_1212010(uint32_t *a1);
// [0x12120a0] (579 bytes) sub_12120A0
// int sub_12120A0(int a1, uint32_t *a2, char a3);
// [0x12122f0] (764 bytes) sub_12122F0
// int *sub_12122F0(int a1, int a2, int a3, int *a4, int a5, char a6, int *a7);
// [0x12125f0] (135 bytes) sub_12125F0
// int sub_12125F0(int a1, int a2);
// [0x1212680] (232 bytes) sub_1212680
// int sub_1212680(int a1, const char *a2, uint32_t *a3);
// [0x1212770] (527 bytes) sub_1212770
// int sub_1212770(int a1, const char *a2, signed int *a3);
// [0x1212980] (137 bytes) sub_1212980
// const char *sub_1212980(int a1, char *a2);
// [0x1212a10] (557 bytes) sub_1212A10
// int sub_1212A10(int a1, int *a2);
// [0x1212c40] (379 bytes) sub_1212C40
// int sub_1212C40(int *a1, int a2);
// [0x1212dc0] (458 bytes) sub_1212DC0
// int sub_1212DC0(int *a1, int *a2);
// [0x1212f90] (352 bytes) sub_1212F90
// int sub_1212F90(uint8_t **a1, int a2);
// [0x12130f0] (233 bytes) sub_12130F0
// int sub_12130F0(uint8_t **a1);
// [0x12131e0] (3843 bytes) sub_12131E0
// int sub_12131E0(uint32_t *a1);
// [0x12140f0] (1958 bytes) sub_12140F0
// void sub_12140F0(uint32_t *a1);
// [0x12148a0] (101 bytes) sub_12148A0
// int sub_12148A0(int a1, int a2);
// [0x1214910] (165 bytes) sub_1214910
// int sub_1214910(int a1, int a2, uint8_t *a3, unsigned int a4);
// [0x12149c0] (239 bytes) sub_12149C0
// int sub_12149C0(int a1);
// [0x1214ab0] (4999 bytes) sub_1214AB0
// int *sub_1214AB0(int *a1, uint32_t *a2, int a3, int a4, int a5, char a6);
// [0x1215e40] (601 bytes) sub_1215E40
// unsigned int sub_1215E40(int *a1, int a2, uint32_t *a3, int a4, int a5);
// [0x12160a0] (1661 bytes) sub_12160A0
// unsigned int sub_12160A0(int *a1, int a2, int *a3, unsigned int a4, int a5, char a6);
// [0x1216720] (445 bytes) sub_1216720
// int sub_1216720(int a1, int *a2);
// [0x12168e0] (274 bytes) sub_12168E0
// char sub_12168E0(int a1, int *a2, int *a3, uint32_t *a4);
// [0x1216a00] (749 bytes) sub_1216A00
// int sub_1216A00(int a1, uint32_t *a2);
// [0x1216cf0] (857 bytes) sub_1216CF0
// int sub_1216CF0(int a1);
// [0x1217050] (585 bytes) sub_1217050
// int sub_1217050(int a1);
// [0x12172a0] (870 bytes) sub_12172A0
// uint32_t *sub_12172A0(int a1, unsigned int a2);
// [0x1217610] (693 bytes) sub_1217610
// int sub_1217610(uint32_t **a1, unsigned int a2, uint32_t *a3, unsigned int *a4);
// [0x12178d0] (290 bytes) sub_12178D0
// int sub_12178D0(int a1, int *a2, unsigned int a3, uint32_t *a4);
// [0x1217a00] (7308 bytes) sub_1217A00
// int sub_1217A00(int *a1, int a2, signed int a3, int a4, int a5);
// [0x1219690] (918 bytes) sub_1219690
// int sub_1219690(int a1, int a2, int a3);
// [0x1219a30] (1022 bytes) sub_1219A30
// int *sub_1219A30(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
// [0x1219e30] (900 bytes) sub_1219E30
// unsigned int sub_1219E30(int a1);
// [0x121a1c0] (1372 bytes) sub_121A1C0
// int sub_121A1C0(uint32_t *a1);
// [0x121a720] (2953 bytes) sub_121A720
// int sub_121A720(uint32_t *a1);
// [0x121b2b0] (859 bytes) sub_121B2B0
// uint32_t *sub_121B2B0(int a1, int a2, int *a3, uint32_t *a4, uint8_t *a5);
// [0x121b610] (825 bytes) sub_121B610
// int sub_121B610(int a1, int *a2, int *a3, int a4, uint8_t *a5, char a6);
// [0x121b950] (15397 bytes) sub_121B950
// int sub_121B950( int a1, uint32_t *a2, void (**a3)(uint32_t, int *), int *a4, char a5, int a6, int a7, uint32_t *a8);
// [0x121f580] (4065 bytes) sub_121F580
// int sub_121F580(int *a1, int a2, int a3);
// [0x1220570] (4303 bytes) sub_1220570
// int sub_1220570(int a1, uint32_t *a2, unsigned int a3, int a4);
// [0x1221640] (150 bytes) sub_1221640
// int sub_1221640(int a1, uint32_t *a2, unsigned int a3, int a4);
// [0x12216e0] (370 bytes) sub_12216E0
// char sub_12216E0(int a1, unsigned int a2, int a3, int a4, int a5);
// [0x1221852] (201 bytes) sub_1221852
// int sub_1221852(uint32_t *a1, int a2, int a3);
// [0x122191b] (951 bytes) sub_122191B
// int sub_122191B(int a1, char **a2, uint32_t *a3);
// [0x1221cd2] (577 bytes) sub_1221CD2
// int sub_1221CD2(uint32_t *a1, uint8_t *a2, unsigned int a3);
// [0x1221f13] (824 bytes) sub_1221F13
// int sub_1221F13(int a1, int a2, unsigned int a3, int a4, int a5, int a6);
// [0x1222250] (1458 bytes) sub_1222250
// int sub_1222250( int *a1, unsigned int a2, unsigned int a3, int a4, int a5, uint32_t *a6, unsigned int *a7, int a8, uint32_t *a9, unsigned int *a10);
// [0x1222810] (341 bytes) sub_1222810
// int sub_1222810(unsigned int a1, uint8_t *a2, unsigned int a3);
// [0x1222970] (382 bytes) sub_1222970
// int sub_1222970(uint32_t *a1, uint32_t *a2, int a3);
// [0x1222af0] (42 bytes) sub_1222AF0
// int sub_1222AF0(int a1, int a2);
// [0x1222b20] (42 bytes) sub_1222B20
// int sub_1222B20(int a1, int a2);
// [0x1222b50] (55 bytes) sub_1222B50
// void *sub_1222B50(int a1, int a2, int a3);
// [0x1222b90] (55 bytes) sub_1222B90
// void *sub_1222B90(int a1, int a2, int a3);
// [0x1222bd0] (406 bytes) sub_1222BD0
// int sub_1222BD0(int a1);
// [0x1222d70] (4967 bytes) sub_1222D70
// int sub_1222D70(uint32_t *a1, uint8_t **a2, int a3);
// [0x12240e0] (1210 bytes) sub_12240E0
// int sub_12240E0(uint32_t *a1, int a2);
// [0x12245a0] (12679 bytes) sub_12245A0
// int sub_12245A0(uint8_t **a1, int a2);
// [0x1227730] (1025 bytes) sub_1227730
// int sub_1227730(int a1, unsigned int a2, char *dest, size_t a4);
// [0x1227b40] (32 bytes) sub_1227B40
// int sub_1227B40(uint32_t *a1, size_t a2, char *a3, size_t a4);
// [0x12289c0] (116 bytes) sub_12289C0
// int sub_12289C0(int a1);
// [0x1229460] (469 bytes) sub_1229460
// int sub_1229460(int a1, unsigned int a2, int a3, size_t a4);
// [0x122c5c7] (111 bytes) sub_122C5C7
// void __noreturn sub_122C5C7(int *a1, char *a2);
// [0x122c8c0] (965 bytes) std::string jcore::Format<std::string,char [25],std::string>(char [25] const&,std::string const&)
// uint32_t *jcore::Format<std::string,char [25],std::string>(uint32_t *a1, char *a2, uint32_t *a3);
// [0x122cc90] (965 bytes) std::string jcore::Format<std::string,char [28],std::string>(char [28] const&,std::string const&)
// uint32_t *jcore::Format<std::string,char [28],std::string>(uint32_t *a1, char *a2, uint32_t *a3);
// [0x122d9f0] (1083 bytes) void jcore::parsing::FormatToString<std::string,jcore::parsing::Placeholder>(std::string &,unsigned int &,jcore::parsing::Placeholder const&,int)
// int jcore::parsing::FormatToString<std::string,jcore::parsing::Placeholder>( int *a1, unsigned int *a2, uint8_t *a3, int a4);
// [0x122e7a0] (1158 bytes) sub_122E7A0
// int *sub_122E7A0();
// [0x122ec30] (1117 bytes) sub_122EC30
// uint32_t *sub_122EC30(uint32_t *a1, char a2);
// [0x122f090] (1580 bytes) sub_122F090
// uint32_t *sub_122F090(uint32_t *a1, uint8_t *a2, int a3);
// [0x122f6c0] (1008 bytes) sub_122F6C0
// int *sub_122F6C0(int *a1, uint8_t *a2, uint8_t *a3, unsigned int **a4);
// [0x122fab0] (7871 bytes) sub_122FAB0
// int64_t *sub_122FAB0(int64_t *a1, int a2, uint8_t *a3);
// [0x12357ed] (111 bytes) sub_12357ED
// void __noreturn sub_12357ED(int *a1, char *a2);
// [0x1235d60] (177 bytes) sub_1235D60
// int (**sub_1235D60(uint32_t *a1, int a2, char *a3))(std::exception *);
// [0x1236630] (516 bytes) sub_1236630
// uint32_t *sub_1236630(void **a1, char *a2, int *a3);
// [0x1236840] (129 bytes) sub_1236840
// uint32_t *sub_1236840(int a1, int a2, int a3);
// [0x1236ff0] (1181 bytes) sub_1236FF0
// int *sub_1236FF0();
// [0x1237ecf] (89 bytes) sub_1237ECF
// void __noreturn sub_1237ECF();
// [0x1237f28] (89 bytes) sub_1237F28
// void __noreturn sub_1237F28();
// [0x1237f81] (89 bytes) sub_1237F81
// void __noreturn sub_1237F81();
// [0x1238330] (211 bytes) sub_1238330
// int *sub_1238330();
// [0x12385c0] (26 bytes) sub_12385C0
// int sub_12385C0();
// [0x12385e0] (1458 bytes) sub_12385E0
// int sub_12385E0();
// [0x1239ef2] (89 bytes) sub_1239EF2
// void __noreturn sub_1239EF2();
// [0x1239f4b] (111 bytes) sub_1239F4B
// void __noreturn sub_1239F4B(int *a1, char *a2);
// [0x123a0f0] (1036 bytes) sub_123A0F0
// int *sub_123A0F0();
// [0x123a750] (178 bytes) sub_123A750
// int *sub_123A750();
// [0x123a860] (395 bytes) sub_123A860
// int sub_123A860(float *a1, unsigned int a2);
// [0x123a9f0] (254 bytes) sub_123A9F0
// uint32_t *sub_123A9F0(uint32_t *a1, uint32_t *a2, unsigned int a3, const void **a4);
// [0x123abc0] (973 bytes) sub_123ABC0
// uint32_t *sub_123ABC0(uint32_t *result, char *a2, uint32_t *a3);
// [0x123b150] (296 bytes) sub_123B150
// uint32_t *sub_123B150(uint32_t *a1, int a2, int a3, int a4, volatile int32_t **a5);
// [0x123ca40] (681 bytes) sub_123CA40
// int sub_123CA40(pthread_mutex_t *a1, uint32_t *a2);
// [0x124259d] (111 bytes) sub_124259D
// void __noreturn sub_124259D(int *a1, char *a2);
// [0x1243080] (146 bytes) sub_1243080
// int (**sub_1243080(uint32_t *a1))(std::exception *);
// [0x1243920] (965 bytes) std::string jcore::Format<std::string,char [35],std::string>(char [35] const&,std::string const&)
// uint32_t *jcore::Format<std::string,char [35],std::string>(uint32_t *a1, char *a2, uint32_t *a3);
// [0x12454f0] (1466 bytes) sub_12454F0
// int *sub_12454F0();
// [0x12466da] (111 bytes) sub_12466DA
// void __noreturn sub_12466DA(int *a1, char *a2);
// [0x1246750] (1118 bytes) std::string jcore::Format<std::string,char [68],std::string,chatv2::Core::ChannelType>(char [68] const&,std::string const&,chatv2::Core::ChannelType const&)
// uint32_t *jcore::Format<std::string,char [68],std::string,chatv2::Core::ChannelType>( uint32_t *a1, uint8_t *a2, uint32_t *a3, int *a4);
// [0x1246bb0] (975 bytes) sub_1246BB0
// int *sub_1246BB0();
// [0x1247379] (111 bytes) sub_1247379
// void __noreturn sub_1247379(int *a1, char *a2);
// [0x12474a0] (975 bytes) sub_12474A0
// int *sub_12474A0();
// [0x1248a19] (111 bytes) sub_1248A19
// void __noreturn sub_1248A19(int *a1, char *a2);
// [0x1248b40] (1157 bytes) sub_1248B40
// int *sub_1248B40();
// [0x124b068] (89 bytes) sub_124B068
// void __noreturn sub_124B068();
// [0x124b0c1] (111 bytes) sub_124B0C1
// void __noreturn sub_124B0C1(int *a1, char *a2);
// [0x124b130] (1530 bytes) std::string jcore::Format<std::string,char [99],std::string,std::string,std::string,std::string>(char [99] const&,std::string const&,std::string const&,std::string const&,std::string const&)
// uint32_t *jcore::Format<std::string,char [99],std::string,std::string,std::string,std::string>( uint32_t *a1, char *a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, uint32_t *a6);
// [0x124b730] (2066 bytes) std::string jcore::Format<std::string,char [95],bool,chatv2::Connectivity::ClientStateEnum,bool>(char [95] const&,bool const&,chatv2::Connectivity::ClientStateEnum const&,bool const&)
// uint32_t *jcore::Format<std::string,char [95],bool,chatv2::Connectivity::ClientStateEnum,bool>( uint32_t *a1, char *a2, uint8_t *a3, int *a4, uint8_t *a5);
// [0x124bf50] (1181 bytes) sub_124BF50
// int *sub_124BF50();
// [0x124d825] (111 bytes) sub_124D825
// void __noreturn sub_124D825(int *a1, char *a2);
// [0x124d8a0] (1157 bytes) sub_124D8A0
// int *sub_124D8A0();
// [0x124ddb0] (244 bytes) sub_124DDB0
// int sub_124DDB0(int *a1, uint8_t *a2);
// [0x124e160] (599 bytes) sub_124E160
// char *sub_124E160(int a1);
// [0x124e3c0] (332 bytes) sub_124E3C0
// int sub_124E3C0( int a1, char **a2, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *a3);
// [0x12503a0] (9 bytes) rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::~GenericValue()
// void rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::~GenericValue();
// [0x1250932] (89 bytes) sub_1250932
// void __noreturn sub_1250932();
// [0x125098b] (111 bytes) sub_125098B
// void __noreturn sub_125098B(int *a1, char *a2);
// [0x1250af0] (965 bytes) std::string jcore::Format<std::string,char [41],std::string>(char [41] const&,std::string const&)
// uint32_t *jcore::Format<std::string,char [41],std::string>(uint32_t *a1, char *a2, uint32_t *a3);
// [0x1250ec0] (184 bytes) rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>::Malloc(unsigned int)
// int rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>::Malloc( rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *this, unsigned int a2);
// [0x1250f80] (413 bytes) rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::EndObject(unsigned int)
// void *rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::EndObject( rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *this, unsigned int a2);
// [0x1251120] (4508 bytes) void rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::ParseString<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>(rapidjson::GenericStringStream<rapidjson::UTF8<char>> &,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> &)
// int rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::ParseString<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>( unsigned int ***a1, uint8_t **a2, int a3);
// [0x12522c0] (413 bytes) rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::EndArray(unsigned int)
// void *rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::EndArray( rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *this, unsigned int a2);
// [0x1252460] (2224 bytes) void rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::ParseNumber<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>(rapidjson::GenericStringStream<rapidjson::UTF8<char>> &,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> &)
// int rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::ParseNumber<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>( int a1, int a2);
// [0x1252d10] (1826 bytes) void rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::ParseArray<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>(rapidjson::GenericStringStream<rapidjson::UTF8<char>> &,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> &)
// void *rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::ParseArray<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>( int a1, int a2, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *a3);
// [0x1253440] (2065 bytes) void rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::ParseObject<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>(rapidjson::GenericStringStream<rapidjson::UTF8<char>> &,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> &)
// void *rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::ParseObject<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>( int a1, int a2, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *a3);
// [0x1253c60] (1087 bytes) sub_1253C60
// int *sub_1253C60();
// [0x1254639] (111 bytes) sub_1254639
// void __noreturn sub_1254639(int *a1, char *a2);
// [0x12546b0] (1013 bytes) sub_12546B0
// int *sub_12546B0();
// [0x12565f4] (111 bytes) sub_12565F4
// void __noreturn sub_12565F4(int *a1, char *a2);
// [0x1256670] (1013 bytes) sub_1256670
// int *sub_1256670();
// [0x1257ee5] (111 bytes) sub_1257EE5
// void __noreturn sub_1257EE5(int *a1, char *a2);
// [0x1257f60] (1016 bytes) void jcore::parsing::FormatToString<std::string,jcore::parsing::Placeholder>(std::string &,unsigned int &,jcore::parsing::Placeholder const&,unsigned int)
// int jcore::parsing::FormatToString<std::string,jcore::parsing::Placeholder>( int *a1, unsigned int *a2, uint8_t *a3, jcore::parsing::detail *a4);
// [0x1258360] (1013 bytes) sub_1258360
// int *sub_1258360();
// [0x125937b] (111 bytes) sub_125937B
// void __noreturn sub_125937B(int *a1, char *a2);
// [0x12593f0] (981 bytes) sub_12593F0
// int *sub_12593F0();
// [0x1259ac0] (411 bytes) sub_1259AC0
// uint8_t *sub_1259AC0();
// [0x125c920] (211 bytes) sub_125C920
// int *sub_125C920();
// [0x125d80c] (111 bytes) sub_125D80C
// void __noreturn sub_125D80C(int *a1, char *a2);
// [0x125d880] (949 bytes) sub_125D880
// int *sub_125D880();
// [0x125e010] (211 bytes) sub_125E010
// int *sub_125E010();
// [0x125e0f0] (103 bytes) sub_125E0F0
// void sub_125E0F0(int a1);
// [0x125e160] (21 bytes) sub_125E160
// uint32_t *sub_125E160(uint32_t *result, int a2, int a3, int a4);
// [0x125e180] (21 bytes) sub_125E180
// uint32_t *sub_125E180(uint32_t *result, int a2, int a3, int a4);
// [0x125e1a0] (21 bytes) sub_125E1A0
// uint32_t *sub_125E1A0(uint32_t *result, int a2, int a3, int a4);
// [0x125e1c0] (368 bytes) sub_125E1C0
// char *sub_125E1C0(char *result, int a2);
// [0x125e920] (1485 bytes) sub_125E920
// uint32_t *sub_125E920( uint32_t *result, char *a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, uint32_t *a6);
// [0x125eef0] (1461 bytes) sub_125EEF0
// int sub_125EEF0(int a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, uint32_t *a5);
// [0x125f4b0] (150 bytes) sub_125F4B0
// void __noreturn sub_125F4B0(int *a1);
// [0x125f550] (287 bytes) sub_125F550
// uint32_t *sub_125F550(uint32_t *a1, int a2, int a3, int a4, int *a5);
// [0x1262e90] (33 bytes) boost_asio_detail_posix_thread_function
// int boost_asio_detail_posix_thread_function(int a1);
// [0x12633a2] (111 bytes) sub_12633A2
// void __noreturn sub_12633A2(int *a1, char *a2);
// [0x1263412] (76 bytes) sub_1263412
// void __noreturn sub_1263412();
// [0x126345e] (33 bytes) sub_126345E
// void __noreturn sub_126345E();
// [0x1265080] (1499 bytes) sub_1265080
// char **sub_1265080(char **a1, char **a2, char *a3, char *a4);
// [0x1265660] (4251 bytes) sub_1265660
// char **sub_1265660(char **a1, unsigned int *a2, int a3);
// [0x1267820] (1166 bytes) sub_1267820
// int *sub_1267820();
// [0x1269a17] (111 bytes) sub_1269A17
// void __noreturn sub_1269A17(int *a1, char *a2);
// [0x1269ce0] (949 bytes) sub_1269CE0
// int *sub_1269CE0();
// [0x126a0f0] (169 bytes) sub_126A0F0
// unsigned int sub_126A0F0(unsigned int *a1, uint32_t *a2, uint32_t *a3);
// [0x126a3b0] (1580 bytes) sub_126A3B0
// uint32_t *sub_126A3B0(uint32_t *a1, uint8_t *a2, int a3);
// [0x126ab10] (879 bytes) sub_126AB10
// int *sub_126AB10( int *a1, uint8_t *a2, uint8_t *a3, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *a4);
// [0x126d589] (111 bytes) sub_126D589
// void __noreturn sub_126D589(int *a1, char *a2);
// [0x126d730] (1099 bytes) rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::Bool(bool)
// rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::Bool( rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *this, bool a2);
// [0x126db80] (491 bytes) rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::Prefix(rapidjson::Type)
// int rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::Prefix( uint32_t *a1, int a2);
// [0x126dd70] (639 bytes) rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::Level * rapidjson::internal::Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::Push<rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::Level>(unsigned int)
// char *rapidjson::internal::Stack<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::Push<rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::Level>( int a1, int a2);
// [0x126dff0] (133 bytes) rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>::Put(char)
// uint8_t *rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>::Put( rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator> *this, char a2);
// [0x126e080] (2833 bytes) rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const& rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::Accept<rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>(rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> &)const
// const rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::Accept<rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>( rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *this, rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *a2);
// [0x126eba0] (1157 bytes) sub_126EBA0
// int *sub_126EBA0();
// [0x126f619] (111 bytes) sub_126F619
// void __noreturn sub_126F619(int *a1, char *a2);
// [0x126f690] (1013 bytes) sub_126F690
// int *sub_126F690();
// [0x1270d06] (89 bytes) sub_1270D06
// void __noreturn sub_1270D06();
// [0x1270d5f] (111 bytes) sub_1270D5F
// void __noreturn sub_1270D5F(int *a1, char *a2);
// [0x1270dd0] (975 bytes) sub_1270DD0
// int *sub_1270DD0();
// [0x12726ca] (89 bytes) sub_12726CA
// void __noreturn sub_12726CA();
// [0x1272723] (111 bytes) sub_1272723
// void __noreturn sub_1272723(int *a1, char *a2);
// [0x1272fc0] (1003 bytes) sub_1272FC0
// int *sub_1272FC0();
// [0x1273500] (21 bytes) sub_1273500
// uint32_t *sub_1273500(uint32_t *result, int a2, int a3, int a4);
// [0x1273520] (140 bytes) sub_1273520
// __m128i *sub_1273520( __m128i *result, uint32_t *a2, uint32_t *a3, int a4, uint32_t *a5, uint32_t **a6);
// [0x12735b0] (158 bytes) sub_12735B0
// __m128i *sub_12735B0(__m128i *result, int a2, uint32_t *a3, __m128i *a4);
// [0x1273730] (973 bytes) sub_1273730
// uint32_t *sub_1273730(uint32_t *result, char *a2, uint32_t *a3);
// [0x1273b00] (241 bytes) sub_1273B00
// uint32_t *sub_1273B00(uint32_t *a1, int a2, int a3, int a4, int *a5);
// [0x1273c00] (259 bytes) sub_1273C00
// void sub_1273C00(int *a1, int *a2);
// [0x1273e70] (646 bytes) sub_1273E70
// uint32_t *sub_1273E70( uint32_t *a1, int a2, int a3, int a4, int *a5, int a6, int a7, int a8, uint32_t *a9);
// [0x1274880] (630 bytes) sub_1274880
// void sub_1274880(int (***a1)(int, int, int), int (**a2)(int, int, int));
// [0x1277cd9] (111 bytes) sub_1277CD9
// void __noreturn sub_1277CD9(int *a1, char *a2);
