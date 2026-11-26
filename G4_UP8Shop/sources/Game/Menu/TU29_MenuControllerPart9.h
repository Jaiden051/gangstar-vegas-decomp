#pragma once
// ============================================================================
// TU29_MenuControllerPart9.h
// Complete Translation Unit [29/41]
// Binary Range in lib/x86/libGangstar4.so: 0xc05710 .. 0xc0c730 (28 KB)
// Total Decompiled Functions in TU: 42 (100% coverage)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// Function Table in Translation Unit:
// [0xc05710] (243 bytes) sub_C05710
// int sub_C05710();
// [0xc05830] (187 bytes) sub_C05830
// int *sub_C05830(int *a1, int a2, int a3, int a4, int *a5);
// [0xc058f0] (423 bytes) sub_C058F0
// int sub_C058F0(int a1, int a2, int a3, int a4);
// [0xc05aa0] (382 bytes) sub_C05AA0
// int sub_C05AA0(int result, int a2);
// [0xc05c20] (308 bytes) sub_C05C20
// int sub_C05C20(int a1, uint32_t *a2, int *a3);
// [0xc05d60] (727 bytes) sub_C05D60
// char *sub_C05D60(int a1, unsigned int a2);
// [0xc06040] (3732 bytes) sub_C06040
// int sub_C06040(int a1, unsigned int a2, int a3);
// [0xc06ee0] (665 bytes) sub_C06EE0
// int *sub_C06EE0(int *result, uint32_t *a2, int a3, int *a4);
// [0xc07180] (260 bytes) sub_C07180
// int *sub_C07180(int *a1, int a2, int a3, int a4, int a5);
// [0xc07290] (268 bytes) sub_C07290
// int *sub_C07290(int *a1, int a2, int a3, int a4, int a5);
// [0xc073a0] (483 bytes) sub_C073A0
// int sub_C073A0(int a1, uint32_t *a2, void **a3);
// [0xc07590] (492 bytes) sub_C07590
// int sub_C07590(uint32_t *a1, void **a2);
// [0xc07780] (202 bytes) sub_C07780
// int sub_C07780(int a1, void **a2);
// [0xc07850] (186 bytes) sub_C07850
// char sub_C07850(uint32_t *a1, int a2);
// [0xc07910] (311 bytes) sub_C07910
// int sub_C07910(uint32_t *a1);
// [0xc07a50] (183 bytes) sub_C07A50
// uint32_t *sub_C07A50(uint32_t *a1, int a2);
// [0xc07b10] (65 bytes) sub_C07B10
// int sub_C07B10(uint32_t *a1, unsigned int a2);
// [0xc07b60] (29 bytes) sub_C07B60
// int sub_C07B60(int a1, unsigned int a2);
// [0xc07b80] (1250 bytes) sub_C07B80
// int sub_C07B80(int a1, int a2, unsigned int a3);
// [0xc08070] (81 bytes) sub_C08070
// int sub_C08070(int a1, int a2, int a3);
// [0xc08110] (295 bytes) sub_C08110
// int sub_C08110(int a1);
// [0xc08240] (1048 bytes) sub_C08240
// int sub_C08240(int a1);
// [0xc08660] (1500 bytes) sub_C08660
// int sub_C08660(int a1);
// [0xc08c40] (2043 bytes) sub_C08C40
// int sub_C08C40(int a1, char a2);
// [0xc09440] (193 bytes) sub_C09440
// int sub_C09440(int a1);
// [0xc09510] (468 bytes) sub_C09510
// const void **sub_C09510(const void **a1, int a2, unsigned int a3);
// [0xc096f0] (63 bytes) sub_C096F0
// int sub_C096F0(int a1, int a2);
// [0xc09730] (15 bytes) sub_C09730
// int sub_C09730(int a1, int a2);
// [0xc09a90] (811 bytes) sub_C09A90
// int sub_C09A90(int a1, int a2, int a3);
// [0xc09dc0] (377 bytes) sub_C09DC0
// void sub_C09DC0(int a1, Json::Value *a2, std::map<int,int> *a3, int a4);
// [0xc09f40] (350 bytes) sub_C09F40
// void sub_C09F40(Json::Value *a1, std::map<int,int> *a2, int a3);
// [0xc0a0a0] (446 bytes) sub_C0A0A0
// uint32_t *sub_C0A0A0(int a1);
// [0xc0a260] (56 bytes) sub_C0A260
// void sub_C0A260(void *a1);
// [0xc0a2a0] (4863 bytes) sub_C0A2A0
// void sub_C0A2A0(size_t a1, Json::Value *a2);
// [0xc0b5a0] (415 bytes) sub_C0B5A0
// void sub_C0B5A0(size_t a1);
// [0xc0b740] (1135 bytes) sub_C0B740
// void sub_C0B740(size_t a1);
// [0xc0bbb0] (544 bytes) sub_C0BBB0
// void sub_C0BBB0(size_t a1);
// [0xc0bdd0] (72 bytes) sub_C0BDD0
// int sub_C0BDD0();
// [0xc0be20] (1046 bytes) std::map<std::string,VIPSettingStorage::MissionInfo,std::less<std::string>,std::allocator<std::pair<std::string const,VIPSettingStorage::MissionInfo>>>::operator[](std::string const&)
// int std::map<std::string,VIPSettingStorage::MissionInfo>::operator[](uint32_t *a1, const void **a2);
// [0xc0c240] (108 bytes) std::map<int,int,std::less<int>,std::allocator<std::pair<int const,int>>>::operator[](int const&)
// uint32_t *std::map<int,int>::operator[](std::map<int,int> *this, int *a2);
// [0xc0c2b0] (567 bytes) std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,unsigned int>> *)
// void std::_Rb_tree<std::string,std::pair<std::string const,unsigned int>,std::_Select1st<std::pair<std::string const,unsigned int>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned int>>>::_M_erase( int a1, uint32_t *a2);
// [0xc0c4f0] (567 bytes) std::_Rb_tree<std::string,std::pair<std::string const,VIPSettingStorage::MissionInfo>,std::_Select1st<std::pair<std::string const,VIPSettingStorage::MissionInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,VIPSettingStorage::MissionInfo>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,VIPSettingStorage::MissionInfo>> *)
// void std::_Rb_tree<std::string,std::pair<std::string const,VIPSettingStorage::MissionInfo>,std::_Select1st<std::pair<std::string const,VIPSettingStorage::MissionInfo>>,std::less<std::string>,std::allocator<std::pair<std::string const,VIPSettingStorage::MissionInfo>>>::_M_erase( int a1, uint32_t *a2);
