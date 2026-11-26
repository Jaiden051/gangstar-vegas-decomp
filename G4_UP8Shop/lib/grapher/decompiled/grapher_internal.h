#pragma once
// ============================================================================
// G4_UP8Shop/lib/grapher/decompiled/grapher_internal.h
// Library: grapher | Module: grapher_internal
// Binary Address Span: 0x13a3cb0 .. 0x13d4ee0 (55 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x13a3cb0] (1670 bytes) double grapher::ActorBase::_GetFromVar<double>(grapher::ActorVariable *,grapher::ActorContext const*)
// long double grapher::ActorBase::_GetFromVar<double>( grapher::ActorBase *this, grapher::ActorVariable *a2, const grapher::ActorContext *a3);
// [0x13a4c00] (1376 bytes) sub_13A4C00
// int *sub_13A4C00(int *a1, uint32_t *a2, uint32_t *a3, unsigned int *a4);
// [0x13b44d0] (411 bytes) sub_13B44D0
// uint32_t *sub_13B44D0(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5);
// [0x13b4670] (412 bytes) sub_13B4670
// int sub_13B4670(int a1, uint32_t *a2, int *a3);
// [0x13b4810] (442 bytes) sub_13B4810
// int sub_13B4810(int a1, uint32_t *a2, int *a3);
// [0x13b49d0] (578 bytes) sub_13B49D0
// int sub_13B49D0(int a1, uint32_t *a2, int *a3);
// [0x13b4c20] (1151 bytes) sub_13B4C20
// int *sub_13B4C20(int *a1, uint32_t *a2, uint32_t *a3, int *a4);
// [0x13ba7b0] (1242 bytes) std::map<int,std::string,std::less<int>,grapher::allocator<std::pair<int const,std::string>>>::operator[](int const&)
// int std::map<int,std::string,std::less<int>,grapher::allocator<std::pair<int const,std::string>>>::operator[]( std::map<int, std::string, std::less<int>, grapher::allocator<std::pair<int const, std::string>>> *this, int *a2);
// [0x13bac90] (870 bytes) std::_Rb_tree<int,std::pair<int const,std::vector<grapher::ActorInputEvent,grapher::allocator<grapher::ActorInputEvent>>>,std::_Select1st<std::pair<int const,std::vector<grapher::ActorInputEvent,grapher::allocator<grapher::ActorInputEvent>>>>,std::less<int>,grapher::allocator<std::pair<int const,std::vector<grapher::ActorInputEvent,grapher::allocator<grapher::ActorInputEvent>>>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,std::vector<grapher::ActorInputEvent,grapher::allocator<grapher::ActorInputEvent>>>> *)
// void std::_Rb_tree<int,std::pair<int const,std::vector<grapher::ActorInputEvent,grapher::allocator<grapher::ActorInputEvent>>>,std::_Select1st<std::pair<int const,std::vector<grapher::ActorInputEvent,grapher::allocator<grapher::ActorInputEvent>>>>,std::less<int>,grapher::allocator<std::pair<int const,std::vector<grapher::ActorInputEvent,grapher::allocator<grapher::ActorInputEvent>>>>>::_M_erase( int a1, uint32_t *a2);
// [0x13bb000] (1622 bytes) std::_Rb_tree<std::string,std::pair<std::string const,grapher::PinInfo>,std::_Select1st<std::pair<std::string const,grapher::PinInfo>>,std::less<std::string>,grapher::allocator<std::pair<std::string const,grapher::PinInfo>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,grapher::PinInfo>> *)
// int std::_Rb_tree<std::string,std::pair<std::string const,grapher::PinInfo>,std::_Select1st<std::pair<std::string const,grapher::PinInfo>>,std::less<std::string>,grapher::allocator<std::pair<std::string const,grapher::PinInfo>>>::_M_erase( int a1, int a2);
// [0x13bb660] (983 bytes) std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,grapher::allocator<std::pair<std::string const,int>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,int>> *)
// int std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,grapher::allocator<std::pair<std::string const,int>>>::_M_erase( int a1, int a2);
// [0x13bba40] (425 bytes) std::_Rb_tree<int,std::pair<int const,bool>,std::_Select1st<std::pair<int const,bool>>,std::less<int>,grapher::allocator<std::pair<int const,bool>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,bool>> *)
// void std::_Rb_tree<int,std::pair<int const,bool>,std::_Select1st<std::pair<int const,bool>>,std::less<int>,grapher::allocator<std::pair<int const,bool>>>::_M_erase( int a1, int a2);
// [0x13bbbf0] (983 bytes) std::_Rb_tree<int,std::pair<int const,std::string>,std::_Select1st<std::pair<int const,std::string>>,std::less<int>,grapher::allocator<std::pair<int const,std::string>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,std::string>> *)
// int std::_Rb_tree<int,std::pair<int const,std::string>,std::_Select1st<std::pair<int const,std::string>>,std::less<int>,grapher::allocator<std::pair<int const,std::string>>>::_M_erase( int a1, int a2);
// [0x13bbfd0] (643 bytes) std::vector<grapher::ActorInputEvent,grapher::allocator<grapher::ActorInputEvent>>::_M_insert_aux(__gnu_cxx::__normal_iterator<grapher::ActorInputEvent*,std::vector<grapher::ActorInputEvent,grapher::allocator<grapher::ActorInputEvent>>>,grapher::ActorInputEvent const&)
// int std::vector<grapher::ActorInputEvent,grapher::allocator<grapher::ActorInputEvent>>::_M_insert_aux( int *a1, void (***a2)(size_t), int a3);
// [0x13bc260] (1928 bytes) std::_Rb_tree<std::string,std::pair<std::string const,grapher::PinInfo>,std::_Select1st<std::pair<std::string const,grapher::PinInfo>>,std::less<std::string>,grapher::allocator<std::pair<std::string const,grapher::PinInfo>>>::_M_copy(std::_Rb_tree_node<std::pair<std::string const,grapher::PinInfo>> const*,std::_Rb_tree_node<std::pair<std::string const,grapher::PinInfo>>*)
// uint32_t *std::_Rb_tree<std::string,std::pair<std::string const,grapher::PinInfo>,std::_Select1st<std::pair<std::string const,grapher::PinInfo>>,std::less<std::string>,grapher::allocator<std::pair<std::string const,grapher::PinInfo>>>::_M_copy( int a1, uint32_t *a2, int a3);
// [0x13bc9f0] (2331 bytes) std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,grapher::allocator<std::pair<std::string const,int>>>::_M_copy(std::_Rb_tree_node<std::pair<std::string const,int>> const*,std::_Rb_tree_node<std::pair<std::string const,int>>*)
// uint32_t *std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,grapher::allocator<std::pair<std::string const,int>>>::_M_copy( int a1, uint32_t *a2, int a3);
// [0x13bd310] (2091 bytes) std::_Rb_tree<int,std::pair<int const,bool>,std::_Select1st<std::pair<int const,bool>>,std::less<int>,grapher::allocator<std::pair<int const,bool>>>::_M_copy(std::_Rb_tree_node<std::pair<int const,bool>> const*,std::_Rb_tree_node<std::pair<int const,bool>>*)
// uint32_t *std::_Rb_tree<int,std::pair<int const,bool>,std::_Select1st<std::pair<int const,bool>>,std::less<int>,grapher::allocator<std::pair<int const,bool>>>::_M_copy( int a1, int *a2, int a3);
// [0x13bdb40] (2355 bytes) std::_Rb_tree<int,std::pair<int const,std::string>,std::_Select1st<std::pair<int const,std::string>>,std::less<int>,grapher::allocator<std::pair<int const,std::string>>>::_M_copy(std::_Rb_tree_node<std::pair<int const,std::string>> const*,std::_Rb_tree_node<std::pair<int const,std::string>>*)
// uint32_t *std::_Rb_tree<int,std::pair<int const,std::string>,std::_Select1st<std::pair<int const,std::string>>,std::less<int>,grapher::allocator<std::pair<int const,std::string>>>::_M_copy( int a1, uint32_t *a2, int a3);
// [0x13be7a0] (1157 bytes) std::vector<grapher::ActorProperty *,grapher::allocator<grapher::ActorProperty *>>::_M_fill_insert(__gnu_cxx::__normal_iterator<grapher::ActorProperty **,std::vector<grapher::ActorProperty *,grapher::allocator<grapher::ActorProperty *>>>,unsigned int,grapher::ActorProperty * const&)
// void std::vector<grapher::ActorProperty *,grapher::allocator<grapher::ActorProperty *>>::_M_fill_insert( int *a1, char *src, unsigned int a3, unsigned int *a4);
// [0x13bec30] (283 bytes) std::_Rb_tree<std::string,std::pair<std::string const,grapher::PinInfo>,std::_Select1st<std::pair<std::string const,grapher::PinInfo>>,std::less<std::string>,grapher::allocator<std::pair<std::string const,grapher::PinInfo>>>::_M_insert_(std::_Rb_tree_node_base const*,std::_Rb_tree_node_base const*,std::pair<std::string const,grapher::PinInfo> const&)
// int *std::_Rb_tree<std::string,std::pair<std::string const,grapher::PinInfo>,std::_Select1st<std::pair<std::string const,grapher::PinInfo>>,std::less<std::string>,grapher::allocator<std::pair<std::string const,grapher::PinInfo>>>::_M_insert_( int *a1, int a2, int a3, int a4, const void **a5);
// [0x13bed50] (545 bytes) std::_Rb_tree<std::string,std::pair<std::string const,grapher::PinInfo>,std::_Select1st<std::pair<std::string const,grapher::PinInfo>>,std::less<std::string>,grapher::allocator<std::pair<std::string const,grapher::PinInfo>>>::_M_insert_unique(std::pair<std::string const,grapher::PinInfo> const&)
// int std::_Rb_tree<std::string,std::pair<std::string const,grapher::PinInfo>,std::_Select1st<std::pair<std::string const,grapher::PinInfo>>,std::less<std::string>,grapher::allocator<std::pair<std::string const,grapher::PinInfo>>>::_M_insert_unique( int a1, uint32_t *a2, const void **a3);
// [0x13bef80] (1193 bytes) std::_Rb_tree<std::string,std::pair<std::string const,grapher::PinInfo>,std::_Select1st<std::pair<std::string const,grapher::PinInfo>>,std::less<std::string>,grapher::allocator<std::pair<std::string const,grapher::PinInfo>>>::_M_insert_unique_(std::_Rb_tree_const_iterator<std::pair<std::string const,grapher::PinInfo>>,std::pair<std::string const,grapher::PinInfo> const&)
// int *std::_Rb_tree<std::string,std::pair<std::string const,grapher::PinInfo>,std::_Select1st<std::pair<std::string const,grapher::PinInfo>>,std::less<std::string>,grapher::allocator<std::pair<std::string const,grapher::PinInfo>>>::_M_insert_unique_( int *a1, uint32_t *a2, int a3, const void **a4);
// [0x13bf430] (490 bytes) std::map<std::string,grapher::PinInfo,std::less<std::string>,grapher::allocator<std::pair<std::string const,grapher::PinInfo>>>::operator[](std::string const&)
// int std::map<std::string,grapher::PinInfo,std::less<std::string>,grapher::allocator<std::pair<std::string const,grapher::PinInfo>>>::operator[]( uint32_t *a1, void **a2);
// [0x13bf620] (267 bytes) std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,grapher::allocator<std::pair<std::string const,int>>>::_M_insert_(std::_Rb_tree_node_base const*,std::_Rb_tree_node_base const*,std::pair<std::string const,int> const&)
// int *std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,grapher::allocator<std::pair<std::string const,int>>>::_M_insert_( int *a1, int a2, int a3, int a4, int a5);
// [0x13bf730] (533 bytes) std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,grapher::allocator<std::pair<std::string const,int>>>::_M_insert_unique(std::pair<std::string const,int> const&)
// int std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,grapher::allocator<std::pair<std::string const,int>>>::_M_insert_unique( int a1, uint32_t *a2, void **a3);
// [0x13bf950] (1161 bytes) std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,grapher::allocator<std::pair<std::string const,int>>>::_M_insert_unique_(std::_Rb_tree_const_iterator<std::pair<std::string const,int>>,std::pair<std::string const,int> const&)
// int *std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,grapher::allocator<std::pair<std::string const,int>>>::_M_insert_unique_( int *a1, uint32_t *a2, int a3, int a4);
// [0x13bfde0] (71 bytes) sub_13BFDE0
// int sub_13BFDE0();
// [0x13c1220] (425 bytes) std::_Rb_tree<void *,std::pair<void * const,grapher::ActorContext::ICVar *>,std::_Select1st<std::pair<void * const,grapher::ActorContext::ICVar *>>,std::less<void *>,std::allocator<std::pair<void * const,grapher::ActorContext::ICVar *>>>::_M_erase(std::_Rb_tree_node<std::pair<void * const,grapher::ActorContext::ICVar *>> *)
// void std::_Rb_tree<void *,std::pair<void * const,grapher::ActorContext::ICVar *>,std::_Select1st<std::pair<void * const,grapher::ActorContext::ICVar *>>,std::less<void *>,std::allocator<std::pair<void * const,grapher::ActorContext::ICVar *>>>::_M_erase( int a1, uint32_t *a2);
// [0x13c13d0] (425 bytes) std::_Rb_tree<grapher::ActorVariable *,std::pair<grapher::ActorVariable * const,grapher::ActorVariable *>,std::_Select1st<std::pair<grapher::ActorVariable * const,grapher::ActorVariable *>>,std::less<grapher::ActorVariable *>,std::allocator<std::pair<grapher::ActorVariable * const,grapher::ActorVariable *>>>::_M_erase(std::_Rb_tree_node<std::pair<grapher::ActorVariable * const,grapher::ActorVariable *>> *)
// void std::_Rb_tree<grapher::ActorVariable *,std::pair<grapher::ActorVariable * const,grapher::ActorVariable *>,std::_Select1st<std::pair<grapher::ActorVariable * const,grapher::ActorVariable *>>,std::less<grapher::ActorVariable *>,std::allocator<std::pair<grapher::ActorVariable * const,grapher::ActorVariable *>>>::_M_erase( int a1, uint32_t *a2);
// [0x13c1580] (1147 bytes) sub_13C1580
// uint32_t *sub_13C1580(uint32_t *a1, grapher::ActorVariable *a2);
// [0x13c55f0] (66 bytes) sub_13C55F0
// int sub_13C55F0();
// [0x13c5640] (420 bytes) sub_13C5640
// void sub_13C5640(int a1, uint32_t *a2);
// [0x13c57f0] (1434 bytes) sub_13C57F0
// void sub_13C57F0(int a1, uint32_t *a2);
// [0x13c5d90] (630 bytes) sub_13C5D90
// int sub_13C5D90(int *a1, uint32_t *a2, int a3);
// [0x13cbe40] (983 bytes) std::_Rb_tree<std::string,std::pair<std::string const,grapher::ActorBase * (*)(unsigned int,std::string,pugi::xml_node)>,std::_Select1st<std::pair<std::string const,grapher::ActorBase * (*)(unsigned int,std::string,pugi::xml_node)>>,std::less<std::string>,grapher::allocator<std::pair<std::string const,grapher::ActorBase * (*)(unsigned int,std::string,pugi::xml_node)>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,grapher::ActorBase * (*)(unsigned int,std::string,pugi::xml_node)>> *)
// int std::_Rb_tree<std::string,std::pair<std::string const,grapher::ActorBase * (*)(unsigned int,std::string,pugi::xml_node)>,std::_Select1st<std::pair<std::string const,grapher::ActorBase * (*)(unsigned int,std::string,pugi::xml_node)>>,std::less<std::string>,grapher::allocator<std::pair<std::string const,grapher::ActorBase * (*)(unsigned int,std::string,pugi::xml_node)>>>::_M_erase(;
// [0x13cc220] (425 bytes) std::_Rb_tree<grapher::ContextualActor,std::pair<grapher::ContextualActor const,grapher::ActorBase *>,std::_Select1st<std::pair<grapher::ContextualActor const,grapher::ActorBase *>>,std::less<grapher::ContextualActor>,grapher::allocator<std::pair<grapher::ContextualActor const,grapher::ActorBase *>>>::_M_erase(std::_Rb_tree_node<std::pair<grapher::ContextualActor const,grapher::ActorBase *>> *)
// int std::_Rb_tree<grapher::ContextualActor,std::pair<grapher::ContextualActor const,grapher::ActorBase *>,std::_Select1st<std::pair<grapher::ContextualActor const,grapher::ActorBase *>>,std::less<grapher::ContextualActor>,grapher::allocator<std::pair<grapher::ContextualActor const,grapher::ActorBase *>>>::_M_erase( int a1, int a2);
// [0x13cc3d0] (425 bytes) std::_Rb_tree<unsigned int,std::pair<unsigned int const,grapher::ManualEventActor>,std::_Select1st<std::pair<unsigned int const,grapher::ManualEventActor>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,grapher::ManualEventActor>>>::_M_erase(std::_Rb_tree_node<std::pair<unsigned int const,grapher::ManualEventActor>> *)
// void std::_Rb_tree<unsigned int,std::pair<unsigned int const,grapher::ManualEventActor>,std::_Select1st<std::pair<unsigned int const,grapher::ManualEventActor>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,grapher::ManualEventActor>>>::_M_erase( int a1, uint32_t *a2);
// [0x13cc580] (66 bytes) sub_13CC580
// int sub_13CC580();
// [0x13cd0b0] (97 bytes) sub_13CD0B0
// int sub_13CD0B0();
// [0x13cfa10] (610 bytes) sub_13CFA10
// int sub_13CFA10();
// [0x13d0190] (2039 bytes) sub_13D0190
// char *sub_13D0190(char *a1, int a2, int a3, int a4);
// [0x13d0e80] (707 bytes) sub_13D0E80
// int sub_13D0E80(int a1, uint32_t *a2, int a3);
// [0x13d1150] (1783 bytes) sub_13D1150
// uint32_t *sub_13D1150(uint32_t *a1, uint32_t *a2, int a3, int a4);
// [0x13d1ec0] (983 bytes) std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,grapher::DebugConstants::compareMap,std::allocator<std::pair<std::string const,int>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,int>> *)
// void std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,grapher::DebugConstants::compareMap,std::allocator<std::pair<std::string const,int>>>::_M_erase( int a1, uint32_t *a2);
// [0x13d22a0] (2121 bytes) std::_Rb_tree<std::string,std::pair<std::string const,std::map<std::string,int,grapher::DebugConstants::compareMap,std::allocator<std::pair<std::string const,int>>>>,std::_Select1st<std::pair<std::string const,std::map<std::string,int,grapher::DebugConstants::compareMap,std::allocator<std::pair<std::string const,int>>>>>,grapher::DebugConstants::compareMap,std::allocator<std::pair<std::string const,std::map<std::string,int,grapher::DebugConstants::compareMap,std::allocator<std::pair<std::string const,int>>>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,std::map<std::string,int,grapher::DebugConstants::compareMap,std::allocator<std::pair<std::string const,int>>>>> *)
// void std::_Rb_tree<std::string,std::pair<std::string const,std::map<std::string,int,grapher::DebugConstants::compareMap,std::allocator<std::pair<std::string const,int>>>>,std::_Select1st<std::pair<std::string const,std::map<std::string,int,grapher::DebugConstants::compareMap,std::allocator<std::pair<std::string const,int>>>>>,grapher::DebugConstants::compareMap,std::allocator<std::pair<std::string const,std::map<std::string,int,grapher::DebugConstants::compareMap,std::allocator<std::pair<std::string const,int>>>>>>::_M_erase( int a1, uint32_t *a2);
// [0x13d2af0] (2043 bytes) std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,grapher::DebugConstants::compareMap,std::allocator<std::pair<std::string const,int>>>::_M_copy(std::_Rb_tree_node<std::pair<std::string const,int>> const*,std::_Rb_tree_node<std::pair<std::string const,int>>*)
// uint32_t *std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,grapher::DebugConstants::compareMap,std::allocator<std::pair<std::string const,int>>>::_M_copy( int a1, uint32_t *a2, int a3);
// [0x13d3440] (66 bytes) sub_13D3440
// int sub_13D3440();
// [0x13d3520] (619 bytes) sub_13D3520
// int sub_13D3520(int a1, uint32_t *a2, int a3);
// [0x13d3790] (173 bytes) GLFUtils::ToLowerCase(std::string &,int,int)
// int GLFUtils::ToLowerCase(int *a1, int a2, int a3);
// [0x13d3840] (1175 bytes) grapher_getFiles(std::vector<GLFUtils::FileListEntry,std::allocator<GLFUtils::FileListEntry>> &,char const*,bool,bool)
// void grapher_getFiles(std::vector<GLFUtils::FileListEntry> *a1, char *name, bool a3, bool a4);
// [0x13d3ce0] (128 bytes) GLFUtils::ListDir(std::vector<GLFUtils::FileListEntry,std::allocator<GLFUtils::FileListEntry>> &,char const*,bool,bool)
// void GLFUtils::ListDir(GLFUtils *this, std::vector<GLFUtils::FileListEntry> *name, const char *a3, bool a4);
// [0x13d3d60] (2277 bytes) GLFUtils::ListDir(std::map<std::string,GLFUtils::FileListEntry,std::less<std::string>,std::allocator<std::pair<std::string const,GLFUtils::FileListEntry>>> &,char const*,bool,bool)
// void GLFUtils::ListDir(uint32_t *a1, std::vector<GLFUtils::FileListEntry> *a2, uint8_t a3, char a4);
// [0x13d4650] (81 bytes) GLFUtils::CheckExtension(char const*,char const*)
// int GLFUtils::CheckExtension(GLFUtils *this, char *a2);
// [0x13d4900] (66 bytes) sub_13D4900
// int sub_13D4900();
// [0x13d4ee0] (954 bytes) std::vector<glwebtools::NetInterfaceInfo,glwebtools::SAllocator<glwebtools::NetInterfaceInfo,(glwebtools::MemHint)4>>::_M_insert_aux(__gnu_cxx::__normal_iterator<glwebtools::NetInterfaceInfo*,std::vector<glwebtools::NetInterfaceInfo,glwebtools::SAllocator<glwebtools::NetInterfaceInfo,(glwebtools::MemHint)4>>>,glwebtools::NetInterfaceInfo const&)
// int std::vector<glwebtools::NetInterfaceInfo,glwebtools::SAllocator<glwebtools::NetInterfaceInfo,(glwebtools::MemHint)4>>::_M_insert_aux(;
