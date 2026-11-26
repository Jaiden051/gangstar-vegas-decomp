#pragma once
// ============================================================================
// G4_UP8Shop/lib/glf/decompiled/glf_internal.h
// Library: glf | Module: glf_internal
// Binary Address Span: 0xc6c3a0 .. 0xcdda30 (157 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xc6c3a0] (243 bytes) sub_C6C3A0
// int sub_C6C3A0();
// [0xc6d640] (9 bytes) Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_initGL
// void Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_initGL();
// [0xc6d650] (9 bytes) Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_setPaths
// void Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_setPaths();
// [0xc6d660] (27 bytes) Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_pause
// uint32_t *Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_pause();
// [0xc6d680] (27 bytes) Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_resume
// uint32_t *Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_resume();
// [0xc6d6a0] (27 bytes) Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_systemTimeChanged
// int Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_systemTimeChanged();
// [0xc6d6c0] (50 bytes) Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_accelerometerEvent
// int Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_accelerometerEvent( int a1, int a2, glf *a3, float a4, float a5);
// [0xc6d700] (23 bytes) Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_onKeyboardFinish
// void *Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_onKeyboardFinish();
// [0xc6d720] (166 bytes) AndroidOS_setKeyboardText
// int AndroidOS_setKeyboardText(int a1);
// [0xc6d7d0] (224 bytes) AndroidOS_showKeyboard
// int AndroidOS_showKeyboard(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
// [0xc6d8b0] (304 bytes) AndroidOS_getKeyboardText
// char *AndroidOS_getKeyboardText(char *dest);
// [0xc6da20] (595 bytes) Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_init
// int Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_init(glf *a1, int a2);
// [0xc6dce0] (40 bytes) Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_stateChanged
// int Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_stateChanged(int a1, int a2, char a3);
// [0xc6dda0] (42 bytes) Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_resize
// int Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_resize(int a1, int a2, glf *a3, int a4);
// [0xc6de00] (27 bytes) Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_step
// int Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_step();
// [0xc6df80] (34 bytes) Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_orientationChanged
// int Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_orientationChanged(int a1, int a2, glf *a3);
// [0xc6dfe0] (34 bytes) Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_setNumExtraContext
// int Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_setNumExtraContext(int a1, int a2, glf *a3);
// [0xc6e7d0] (58 bytes) Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_touchEvent
// int Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_touchEvent( int a1, int a2, glf *a3, int a4, int a5, int a6);
// [0xc6e810] (38 bytes) Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_getNumExtraContext
// int Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_getNumExtraContext();
// [0xc6ecd0] (263 bytes) Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_keyboardKeyPressed
// int Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_keyboardKeyPressed(int a1, int a2, char a3, int a4);
// [0xc71800] (189 bytes) Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_getViewSettings
// int Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_getViewSettings();
// [0xc71950] (27 bytes) Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_destroy
// int Java_com_gameloft_android_GAND_GloftGGSS_GL2JNILib_destroy();
// [0xc721d0] (327 bytes) sub_C721D0
// int sub_C721D0();
// [0xc72ba0] (160 bytes) sub_C72BA0
// int sub_C72BA0();
// [0xc72f10] (242 bytes) sub_C72F10
// int *sub_C72F10(int *a1, int a2, int a3, int a4, uint32_t *a5);
// [0xc73010] (668 bytes) sub_C73010
// int sub_C73010(int a1, char *a2, int a3);
// [0xc732b0] (450 bytes) sub_C732B0
// int sub_C732B0(int a1, uint32_t *a2, int *a3);
// [0xc7b610] (15 bytes) `virtual thunk to'glf::basic_fstream<char,std::char_traits<char>>::~basic_fstream()
// void `virtual thunk to'glf::basic_fstream<char,std::char_traits<char>>::~basic_fstream( glf::basic_fstream<char, std::char_traits<char>> *this);
// [0xc7b620] (7 bytes) `non-virtual thunk to'glf::basic_fstream<char,std::char_traits<char>>::~basic_fstream()
// void `non-virtual thunk to'glf::basic_fstream<char,std::char_traits<char>>::~basic_fstream( glf::basic_fstream<char, std::char_traits<char>> *this);
// [0xc7b960] (15 bytes) `virtual thunk to'glf::basic_fstream<char,std::char_traits<char>>::~basic_fstream()
// void `virtual thunk to'glf::basic_fstream<char,std::char_traits<char>>::~basic_fstream( glf::basic_fstream<char, std::char_traits<char>> *this);
// [0xc7b970] (7 bytes) `non-virtual thunk to'glf::basic_fstream<char,std::char_traits<char>>::~basic_fstream()
// void `non-virtual thunk to'glf::basic_fstream<char,std::char_traits<char>>::~basic_fstream( glf::basic_fstream<char, std::char_traits<char>> *this);
// [0xc7bb20] (1137 bytes) std::map<int,glf::EventManager::TypeInfo,std::less<int>,std::allocator<std::pair<int const,glf::EventManager::TypeInfo>>>::operator[](int const&)
// int std::map<int,glf::EventManager::TypeInfo>::operator[]( std::map<int,glf::EventManager::TypeInfo> *this, int *a2);
// [0xc7bfa0] (681 bytes) std::list<glf::EventManager::EventReceiverData,std::allocator<glf::EventManager::EventReceiverData>>::resize(unsigned int,glf::EventManager::EventReceiverData)
// void std::list<glf::EventManager::EventReceiverData>::resize(void **a1, int a2, uint32_t *a3);
// [0xc7c250] (754 bytes) std::list<glf::EventManager::EventReceiverData,std::allocator<glf::EventManager::EventReceiverData>>::sort(void)
// void std::list<glf::EventManager::EventReceiverData>::sort( std::list<glf::EventManager::EventReceiverData> *this);
// [0xc7c550] (436 bytes) std::vector<glf::Macro *,std::allocator<glf::Macro *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<glf::Macro **,std::vector<glf::Macro *,std::allocator<glf::Macro *>>>,glf::Macro * const&)
// void std::vector<glf::Macro *>::_M_insert_aux(int a1, char *src, int *a3);
// [0xc7c710] (983 bytes) std::_Rb_tree<int,std::pair<int const,glf::EventManager::TypeInfo>,std::_Select1st<std::pair<int const,glf::EventManager::TypeInfo>>,std::less<int>,std::allocator<std::pair<int const,glf::EventManager::TypeInfo>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,glf::EventManager::TypeInfo>> *)
// void std::_Rb_tree<int,std::pair<int const,glf::EventManager::TypeInfo>,std::_Select1st<std::pair<int const,glf::EventManager::TypeInfo>>,std::less<int>,std::allocator<std::pair<int const,glf::EventManager::TypeInfo>>>::_M_erase( int a1, uint32_t *a2);
// [0xc7caf0] (623 bytes) std::vector<unsigned char,std::allocator<unsigned char>>::_M_fill_insert(__gnu_cxx::__normal_iterator<unsigned char *,std::vector<unsigned char,std::allocator<unsigned char>>>,unsigned int,unsigned char const&)
// void std::vector<unsigned char>::_M_fill_insert(int a1, char *src, size_t n, uint8_t *a4);
// [0xc7ce50] (66 bytes) sub_C7CE50
// int sub_C7CE50();
// [0xc7f310] (1441 bytes) std::_Rb_tree<std::string,std::pair<std::string const,glf::PropertyMap::Value>,std::_Select1st<std::pair<std::string const,glf::PropertyMap::Value>>,std::less<std::string>,std::allocator<std::pair<std::string const,glf::PropertyMap::Value>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,glf::PropertyMap::Value>> *)
// void std::_Rb_tree<std::string,std::pair<std::string const,glf::PropertyMap::Value>,std::_Select1st<std::pair<std::string const,glf::PropertyMap::Value>>,std::less<std::string>,std::allocator<std::pair<std::string const,glf::PropertyMap::Value>>>::_M_erase( int a1, uint32_t *a2);
// [0xc826f0] (252 bytes) sub_C826F0
// int sub_C826F0();
// [0xc83430] (813 bytes) sub_C83430
// int sub_C83430(int a1, uint32_t *a2, int a3);
// [0xc83760] (1819 bytes) sub_C83760
// int *sub_C83760(int *a1, uint32_t *a2, int a3, int a4);
// [0xc866a0] (2498 bytes) std::_Rb_tree<std::string,std::pair<std::string const,glf::core::SZipFileEntry>,std::_Select1st<std::pair<std::string const,glf::core::SZipFileEntry>>,glf::core::StringComp,std::allocator<std::pair<std::string const,glf::core::SZipFileEntry>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,glf::core::SZipFileEntry>> *)
// void std::_Rb_tree<std::string,std::pair<std::string const,glf::core::SZipFileEntry>,std::_Select1st<std::pair<std::string const,glf::core::SZipFileEntry>>,glf::core::StringComp,std::allocator<std::pair<std::string const,glf::core::SZipFileEntry>>>::_M_erase( int a1, uint32_t *a2);
// [0xc881b0] (834 bytes) sub_C881B0
// int sub_C881B0(int *a1, int a2, int a3);
// [0xc89130] (1596 bytes) std::vector<glf::DrawInfo,std::allocator<glf::DrawInfo>>::_M_fill_insert(__gnu_cxx::__normal_iterator<glf::DrawInfo*,std::vector<glf::DrawInfo,std::allocator<glf::DrawInfo>>>,unsigned int,glf::DrawInfo const&)
// void std::vector<glf::DrawInfo>::_M_fill_insert(int *a1, int a2, unsigned int a3, int *a4);
// [0xc89770] (1434 bytes) sub_C89770
// void sub_C89770(int a1, uint32_t *a2);
// [0xc89d10] (3270 bytes) sub_C89D10
// int sub_C89D10(char *a1, char *a2, int a3);
// [0xc8a9e0] (601 bytes) sub_C8A9E0
// int sub_C8A9E0(int a1, uint32_t *a2, const void **a3);
// [0xc8ac40] (647 bytes) sub_C8AC40
// int sub_C8AC40(int a1, uint32_t *a2, int a3);
// [0xc8aed0] (1366 bytes) sub_C8AED0
// uint32_t *sub_C8AED0(uint32_t *a1, uint32_t *a2, int a3, int a4);
// [0xc903b0] (1441 bytes) std::_Rb_tree<std::string,std::pair<std::string const,glf::LoadingReport::Entry>,std::_Select1st<std::pair<std::string const,glf::LoadingReport::Entry>>,std::less<std::string>,std::allocator<std::pair<std::string const,glf::LoadingReport::Entry>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,glf::LoadingReport::Entry>> *)
// void std::_Rb_tree<std::string,std::pair<std::string const,glf::LoadingReport::Entry>,std::_Select1st<std::pair<std::string const,glf::LoadingReport::Entry>>,std::less<std::string>,std::allocator<std::pair<std::string const,glf::LoadingReport::Entry>>>::_M_erase( int a1, uint32_t *a2);
// [0xc90c50] (67 bytes) sub_C90C50
// int sub_C90C50();
// [0xc928c0] (757 bytes) sub_C928C0
// int sub_C928C0(int a1, int a2, int a3, char *format, __gnuc_va_list __varargs);
// [0xc931e0] (854 bytes) std::vector<glf::intrusive_ptr<glf::LogStream>,std::allocator<glf::intrusive_ptr<glf::LogStream>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<glf::intrusive_ptr<glf::LogStream>*,std::vector<glf::intrusive_ptr<glf::LogStream>,std::allocator<glf::intrusive_ptr<glf::LogStream>>>>,glf::intrusive_ptr<glf::LogStream> const&)
// int std::vector<glf::intrusive_ptr<glf::LogStream>>::_M_insert_aux( int *a1, volatile int32_t **a2, volatile int32_t **a3);
// [0xc96ee0] (533 bytes) sub_C96EE0
// void sub_C96EE0(glf::fs2::Path *a1, glf::fs2::Path *a2, glf::fs2::Path *a3);
// [0xc97100] (550 bytes) sub_C97100
// void sub_C97100(int a1, uint32_t *a2);
// [0xc97330] (324 bytes) sub_C97330
// int sub_C97330(int result, uint32_t *a2);
// [0xc97480] (1791 bytes) sub_C97480
// int sub_C97480(size_t *a1, char *a2, int a3);
// [0xc9ddd0] (1213 bytes) sub_C9DDD0
// void sub_C9DDD0(uint32_t *a1, const glf::fs2::Path *a2, glf::fs2::Path *a3, char *s);
// [0xca12e0] (40 bytes) std::vector<glf::fs2::FileSystem *,std::allocator<glf::fs2::FileSystem *>>::~vector()
// void std::vector<glf::fs2::FileSystem *>::~vector(void **this);
// [0xca1500] (154 bytes) std::list<glf::fs2::MountPoint,glf::allocator<glf::fs2::MountPoint>>::~list()
// void std::list<glf::fs2::MountPoint,glf::allocator<glf::fs2::MountPoint>>::~list( std::list<glf::fs2::MountPoint, glf::allocator<glf::fs2::MountPoint>> *this);
// [0xca15a0] (321 bytes) std::map<glf::fs2::Path,glf::fs2::PathInfo *,std::less<glf::fs2::Path>,std::allocator<std::pair<glf::fs2::Path const,glf::fs2::PathInfo *>>>::insert(std::pair<glf::fs2::Path const,glf::fs2::PathInfo *> const&)
// int std::map<glf::fs2::Path,glf::fs2::PathInfo *>::insert(int a1, uint32_t *a2, glf::fs2::Path *a3);
// [0xca16f0] (436 bytes) std::vector<glf::fs2::FileSystem *,std::allocator<glf::fs2::FileSystem *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<glf::fs2::FileSystem **,std::vector<glf::fs2::FileSystem *,std::allocator<glf::fs2::FileSystem *>>>,glf::fs2::FileSystem * const&)
// void std::vector<glf::fs2::FileSystem *>::_M_insert_aux(int a1, char *src, int *a3);
// [0xca18b0] (585 bytes) std::vector<glf::LimitString,glf::EphemeralAllocator<glf::LimitString>>::_M_insert_aux(__gnu_cxx::__normal_iterator<glf::LimitString*,std::vector<glf::LimitString,glf::EphemeralAllocator<glf::LimitString>>>,glf::LimitString const&)
// uint32_t *std::vector<glf::LimitString,glf::EphemeralAllocator<glf::LimitString>>::_M_insert_aux( int a1, char *a2, uint32_t *a3);
// [0xca1b00] (639 bytes) std::vector<glf::fs2::MountPoint,glf::allocator<glf::fs2::MountPoint>>::_M_insert_aux(__gnu_cxx::__normal_iterator<glf::fs2::MountPoint*,std::vector<glf::fs2::MountPoint,glf::allocator<glf::fs2::MountPoint>>>,glf::fs2::MountPoint const&)
// void std::vector<glf::fs2::MountPoint,glf::allocator<glf::fs2::MountPoint>>::_M_insert_aux( int a1, glf::RefCounted *a2, glf::fs2::MountPoint *a3);
// [0xca1d80] (680 bytes) std::vector<glf::intrusive_ptr<glf::fs2::IndexData>,glf::allocator<glf::intrusive_ptr<glf::fs2::IndexData>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<glf::intrusive_ptr<glf::fs2::IndexData>*,std::vector<glf::intrusive_ptr<glf::fs2::IndexData>,glf::allocator<glf::intrusive_ptr<glf::fs2::IndexData>>>>,glf::intrusive_ptr<glf::fs2::IndexData> const&)
// int std::vector<glf::intrusive_ptr<glf::fs2::IndexData>,glf::allocator<glf::intrusive_ptr<glf::fs2::IndexData>>>::_M_insert_aux( glf ***a1, glf **a2, volatile int32_t **a3);
// [0xca2030] (3586 bytes) std::vector<glf::fs2::FileEntry,glf::allocator<glf::fs2::FileEntry>>::_M_insert_aux(__gnu_cxx::__normal_iterator<glf::fs2::FileEntry*,std::vector<glf::fs2::FileEntry,glf::allocator<glf::fs2::FileEntry>>>,glf::fs2::FileEntry const&)
// glf *std::vector<glf::fs2::FileEntry,glf::allocator<glf::fs2::FileEntry>>::_M_insert_aux( glf **a1, char *a2, char *src);
// [0xca2e40] (178 bytes) sub_CA2E40
// int sub_CA2E40();
// [0xca5130] (727 bytes) sub_CA5130
// glf *sub_CA5130(glf *result, glf *src, unsigned int a3, uint32_t *a4);
// [0xca5410] (1002 bytes) sub_CA5410
// char *sub_CA5410(int a1, char *a2, unsigned int a3, int16_t *a4);
// [0xca58c0] (1074 bytes) sub_CA58C0
// unsigned int *sub_CA58C0(int a1, glf *a2, unsigned int a3, unsigned int *a4);
// [0xcae1e0] (15 bytes) `virtual thunk to'glf::basic_ifstream<char,std::char_traits<char>>::~basic_ifstream()
// void `virtual thunk to'glf::basic_ifstream<char,std::char_traits<char>>::~basic_ifstream( glf::basic_ifstream<char, std::char_traits<char>> *this);
// [0xcae320] (15 bytes) `virtual thunk to'glf::basic_ofstream<char,std::char_traits<char>>::~basic_ofstream()
// void `virtual thunk to'glf::basic_ofstream<char,std::char_traits<char>>::~basic_ofstream( glf::basic_ofstream<char, std::char_traits<char>> *this);
// [0xcae450] (15 bytes) `virtual thunk to'glf::basic_ofstream<char,std::char_traits<char>>::~basic_ofstream()
// void `virtual thunk to'glf::basic_ofstream<char,std::char_traits<char>>::~basic_ofstream( glf::basic_ofstream<char, std::char_traits<char>> *this);
// [0xcae590] (15 bytes) `virtual thunk to'glf::basic_ifstream<char,std::char_traits<char>>::~basic_ifstream()
// void `virtual thunk to'glf::basic_ifstream<char,std::char_traits<char>>::~basic_ifstream( glf::basic_ifstream<char, std::char_traits<char>> *this);
// [0xcae6d0] (1023 bytes) void std::__introsort_loop<__gnu_cxx::__normal_iterator<glf::fs2::IndexData::Hash *,std::vector<glf::fs2::IndexData::Hash,glf::allocator<glf::fs2::IndexData::Hash>>>,int>(__gnu_cxx::__normal_iterator<glf::fs2::IndexData::Hash *,std::vector<glf::fs2::IndexData::Hash,glf::allocator<glf::fs2::IndexData::Hash>>>,__gnu_cxx::__normal_iterator<glf::fs2::IndexData::Hash *,std::vector<glf::fs2::IndexData::Hash,glf::allocator<glf::fs2::IndexData::Hash>>>,int)
// int std::__introsort_loop<__gnu_cxx::__normal_iterator<glf::fs2::IndexData::Hash *,std::vector<glf::fs2::IndexData::Hash,glf::allocator<glf::fs2::IndexData::Hash>>>,int>( char *a1, char *a2, int a3);
// [0xcaead0] (678 bytes) void std::vector<char,glf::allocator<char>>::_M_range_insert<char const*>(__gnu_cxx::__normal_iterator<char *,std::vector<char,glf::allocator<char>>>,char const*,char const*,std::forward_iterator_tag)
// void std::vector<char,glf::allocator<char>>::_M_range_insert<char const*>( int a1, char *src, char *a3, char *a4);
// [0xcaed80] (1067 bytes) std::vector<glf::fs2::FileSystem *,glf::allocator<glf::fs2::FileSystem *>>::_M_fill_insert(__gnu_cxx::__normal_iterator<glf::fs2::FileSystem **,std::vector<glf::fs2::FileSystem *,glf::allocator<glf::fs2::FileSystem *>>>,unsigned int,glf::fs2::FileSystem * const&)
// void std::vector<glf::fs2::FileSystem *,glf::allocator<glf::fs2::FileSystem *>>::_M_fill_insert( int a1, char *src, unsigned int a3, unsigned int *a4);
// [0xcaf1b0] (935 bytes) std::vector<glf::fs2::Path,glf::allocator<glf::fs2::Path>>::_M_fill_insert(__gnu_cxx::__normal_iterator<glf::fs2::Path*,std::vector<glf::fs2::Path,glf::allocator<glf::fs2::Path>>>,unsigned int,glf::fs2::Path const&)
// void std::vector<glf::fs2::Path,glf::allocator<glf::fs2::Path>>::_M_fill_insert( glf::fs2::Path **a1, glf::fs2::Path *a2, unsigned int a3, glf::fs2::Path *a4);
// [0xcaf560] (1073 bytes) std::vector<unsigned short,glf::allocator<unsigned short>>::_M_fill_insert(__gnu_cxx::__normal_iterator<unsigned short *,std::vector<unsigned short,glf::allocator<unsigned short>>>,unsigned int,unsigned short const&)
// void std::vector<unsigned short,glf::allocator<unsigned short>>::_M_fill_insert( int a1, char *src, unsigned int a3, uint16_t *a4);
// [0xcaf9a0] (644 bytes) std::vector<unsigned char,glf::allocator<unsigned char>>::_M_fill_insert(__gnu_cxx::__normal_iterator<unsigned char *,std::vector<unsigned char,glf::allocator<unsigned char>>>,unsigned int,unsigned char const&)
// void std::vector<unsigned char,glf::allocator<unsigned char>>::_M_fill_insert( size_t *a1, char *src, size_t n, char *a4);
// [0xcafc30] (644 bytes) std::vector<char,glf::allocator<char>>::_M_fill_insert(__gnu_cxx::__normal_iterator<char *,std::vector<char,glf::allocator<char>>>,unsigned int,char const&)
// void std::vector<char,glf::allocator<char>>::_M_fill_insert(size_t *a1, char *src, size_t n, char *a4);
// [0xcafec0] (1067 bytes) std::vector<unsigned int,glf::allocator<unsigned int>>::_M_fill_insert(__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int,glf::allocator<unsigned int>>>,unsigned int,unsigned int const&)
// void std::vector<unsigned int,glf::allocator<unsigned int>>::_M_fill_insert( int a1, char *src, unsigned int a3, unsigned int *a4);
// [0xcb02f0] (802 bytes) std::vector<long long,glf::allocator<long long>>::_M_fill_insert(__gnu_cxx::__normal_iterator<long long *,std::vector<long long,glf::allocator<long long>>>,unsigned int,long long const&)
// char *std::vector<long long,glf::allocator<long long>>::_M_fill_insert( uint32_t *a1, char *src, unsigned int a3, int *a4);
// [0xcb2b20] (235 bytes) sub_CB2B20
// int sub_CB2B20();
// [0xcb4790] (965 bytes) sub_CB4790
// int sub_CB4790();
// [0xcb5fe0] (425 bytes) std::_Rb_tree<glf::InputDevice *,glf::InputDevice *,std::_Identity<glf::InputDevice *>,std::less<glf::InputDevice *>,std::allocator<glf::InputDevice *>>::_M_erase(std::_Rb_tree_node<glf::InputDevice *> *)
// void std::_Rb_tree<glf::InputDevice *,glf::InputDevice *,std::_Identity<glf::InputDevice *>,std::less<glf::InputDevice *>,std::allocator<glf::InputDevice *>>::_M_erase( int a1, uint32_t *a2);
// [0xcb70e0] (516 bytes) std::vector<glf::ArchiveManager::ArchiveInfo,std::allocator<glf::ArchiveManager::ArchiveInfo>>::_M_insert_aux(__gnu_cxx::__normal_iterator<glf::ArchiveManager::ArchiveInfo*,std::vector<glf::ArchiveManager::ArchiveInfo,std::allocator<glf::ArchiveManager::ArchiveInfo>>>,glf::ArchiveManager::ArchiveInfo const&)
// uint32_t *std::vector<glf::ArchiveManager::ArchiveInfo>::_M_insert_aux(void **a1, char *a2, int *a3);
// [0xcb8e20] (85 bytes) std::deque<glf::FileStreamImplCallback *,std::allocator<glf::FileStreamImplCallback *>>::~deque()
// void std::deque<glf::FileStreamImplCallback *>::~deque(std::deque<glf::FileStreamImplCallback *> *this);
// [0xcba130] (409 bytes) sub_CBA130
// int sub_CBA130();
// [0xcba2d0] (623 bytes) sub_CBA2D0
// int sub_CBA2D0(int a1, const void **a2);
// [0xcbea10] (101 bytes) sub_CBEA10
// int sub_CBEA10();
// [0xcbf700] (262 bytes) sub_CBF700
// void sub_CBF700();
// [0xcbfe50] (614 bytes) std::vector<glf::io2::FileDevice::MapInfo,std::allocator<glf::io2::FileDevice::MapInfo>>::_M_insert_aux(__gnu_cxx::__normal_iterator<glf::io2::FileDevice::MapInfo*,std::vector<glf::io2::FileDevice::MapInfo,std::allocator<glf::io2::FileDevice::MapInfo>>>,glf::io2::FileDevice::MapInfo const&)
// void std::vector<glf::io2::FileDevice::MapInfo>::_M_insert_aux(int a1, char *src, size_t *a3);
// [0xcc0250] (9 bytes) lsof(void)
// void lsof();
// [0xcc0c70] (31 bytes) sub_CC0C70
// uint32_t *sub_CC0C70(uint32_t *a1);
// [0xcc0c98] (1 bytes) nullsub_530
// void nullsub_530();
// [0xcc0ca0] (41 bytes) sub_CC0CA0
// void sub_CC0CA0(int a1);
// [0xcc0cd0] (34 bytes) sub_CC0CD0
// void sub_CC0CD0(glf::TlsNode *a1);
// [0xcc1280] (532 bytes) sub_CC1280
// int sub_CC1280();
// [0xcc3370] (250 bytes) sub_CC3370
// uint32_t *sub_CC3370(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5);
// [0xcc3cd0] (2395 bytes) std::map<long,std::list<glf::TaskHandlerBase *,std::allocator<glf::TaskHandlerBase *>>,std::less<long>,std::allocator<std::pair<long const,std::list<glf::TaskHandlerBase *,std::allocator<glf::TaskHandlerBase *>>>>>::operator[](long const&)
// char *std::map<long,std::list<glf::TaskHandlerBase *>>::operator[]( std::map<long,std::list<glf::TaskHandlerBase *>> *this, const int *a2);
// [0xcc4630] (770 bytes) std::_Rb_tree<long,std::pair<long const,std::list<glf::TaskHandlerBase *,std::allocator<glf::TaskHandlerBase *>>>,std::_Select1st<std::pair<long const,std::list<glf::TaskHandlerBase *,std::allocator<glf::TaskHandlerBase *>>>>,std::less<long>,std::allocator<std::pair<long const,std::list<glf::TaskHandlerBase *,std::allocator<glf::TaskHandlerBase *>>>>>::_M_erase(std::_Rb_tree_node<std::pair<long const,std::list<glf::TaskHandlerBase *,std::allocator<glf::TaskHandlerBase *>>>> *)
// void std::_Rb_tree<long,std::pair<long const,std::list<glf::TaskHandlerBase *>>,std::_Select1st<std::pair<long const,std::list<glf::TaskHandlerBase *>>>,std::less<long>,std::allocator<std::pair<long const,std::list<glf::TaskHandlerBase *>>>>::_M_erase( int a1, uint32_t *a2);
// [0xcc5720] (168 bytes) sub_CC5720
// int sub_CC5720();
// [0xcc5f00] (2261 bytes) sub_CC5F00
// int sub_CC5F00( uint8_t *a1, unsigned int a2, int a3, int a4, int a5, int a6, int a7, int a8, char *src, int a10, unsigned int a11);
// [0xcc67e0] (3053 bytes) sub_CC67E0
// int sub_CC67E0( uint32_t *a1, char *a2, uint8_t *a3, int a4, unsigned int a5, int a6, int a7, int a8, int a9);
// [0xcc94a0] (9 bytes) Test(void)
// void Test();
// [0xcc94b0] (9 bytes) IsDebuggerPresent(void)
// int IsDebuggerPresent();
// [0xcc9b60] (854 bytes) sub_CC9B60
// int sub_CC9B60(void **a1, volatile int32_t **a2, volatile int32_t **a3);
// [0xccb450] (633 bytes) sub_CCB450
// int sub_CCB450(int a1, int a2);
// [0xccd410] (983 bytes) std::_Rb_tree<std::string,std::pair<std::string const,std::pair<unsigned int,bool>>,std::_Select1st<std::pair<std::string const,std::pair<unsigned int,bool>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::pair<unsigned int,bool>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,std::pair<unsigned int,bool>>> *)
// void std::_Rb_tree<std::string,std::pair<std::string const,std::pair<unsigned int,bool>>,std::_Select1st<std::pair<std::string const,std::pair<unsigned int,bool>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::pair<unsigned int,bool>>>>::_M_erase( int a1, uint32_t *a2);
// [0xccd7f0] (41 bytes) std::map<std::string,std::pair<unsigned int,bool>,std::less<std::string>,std::allocator<std::pair<std::string const,std::pair<unsigned int,bool>>>>::~map()
// void std::map<std::string,std::pair<unsigned int,bool>>::~map( std::map<std::string,std::pair<unsigned int, bool>> *this);
// [0xccd820] (127 bytes) sub_CCD820
// int sub_CCD820();
// [0xcd0d00] (141 bytes) sub_CD0D00
// bool sub_CD0D00(int a1, int a2);
// [0xcd0d90] (126 bytes) sub_CD0D90
// char sub_CD0D90(uint32_t *a1, uint32_t *a2);
// [0xcd0e10] (128 bytes) sub_CD0E10
// bool sub_CD0E10(uint32_t *a1, uint32_t *a2);
// [0xcd0e90] (194 bytes) sub_CD0E90
// uint32_t *sub_CD0E90(uint32_t *a1, int a2, char a3);
// [0xcd0f60] (365 bytes) sub_CD0F60
// uint32_t *sub_CD0F60(uint32_t *a1);
// [0xcd10d0] (141 bytes) sub_CD10D0
// uint32_t *sub_CD10D0(uint32_t *a1, uint32_t *a2, unsigned int a3);
// [0xcd1160] (362 bytes) sub_CD1160
// char *sub_CD1160(int *a1, uint8_t *a2);
// [0xcd12d0] (31 bytes) sub_CD12D0
// int sub_CD12D0(uint32_t *a1, int a2);
// [0xcd12f0] (93 bytes) sub_CD12F0
// char *sub_CD12F0(uint8_t **a1);
// [0xcd1350] (183 bytes) sub_CD1350
// uint8_t **sub_CD1350(uint8_t **result);
// [0xcd1410] (65 bytes) sub_CD1410
// int sub_CD1410(int *a1, int a2, int a3);
// [0xcd1460] (148 bytes) sub_CD1460
// uint32_t *sub_CD1460(uint32_t *a1, uint32_t *a2, uint32_t *a3, int a4);
// [0xcd1500] (169 bytes) sub_CD1500
// char *sub_CD1500(char *result, char *a2);
// [0xcd15b0] (462 bytes) sub_CD15B0
// int sub_CD15B0(int *a1, int a2, int a3);
// [0xcd1780] (356 bytes) sub_CD1780
// void sub_CD1780(int a1, uint32_t *a2);
// [0xcd18f0] (245 bytes) sub_CD18F0
// uint32_t *sub_CD18F0(int a1, uint32_t *a2);
// [0xcd19f0] (150 bytes) sub_CD19F0
// int sub_CD19F0();
// [0xcd1a90] (245 bytes) sub_CD1A90
// uint32_t *sub_CD1A90(int a1, uint32_t *a2);
// [0xcd1bf0] (245 bytes) sub_CD1BF0
// uint32_t *sub_CD1BF0(int a1, uint32_t *a2);
// [0xcd1cf0] (6725 bytes) sub_CD1CF0
// unsigned int sub_CD1CF0(int a1, int a2, int a3, int a4, int a5);
// [0xcd3740] (341 bytes) sub_CD3740
// void *sub_CD3740(uint32_t *a1, unsigned int a2);
// [0xcd38a0] (266 bytes) sub_CD38A0
// int sub_CD38A0(int a1);
// [0xcd39b0] (340 bytes) sub_CD39B0
// uint32_t *sub_CD39B0(uint32_t *a1, const char *s);
// [0xcd3b10] (66 bytes) sub_CD3B10
// int sub_CD3B10(int *a1, int a2);
// [0xcd3b60] (74 bytes) sub_CD3B60
// uint32_t *sub_CD3B60(uint32_t *a1, uint32_t *a2, uint32_t *a3);
// [0xcd3bb0] (74 bytes) sub_CD3BB0
// uint32_t *sub_CD3BB0(uint32_t *a1, uint32_t *a2, uint32_t *a3);
// [0xcd3c20] (620 bytes) sub_CD3C20
// int sub_CD3C20(int result, uint32_t *a2);
// [0xcd3e90] (709 bytes) sub_CD3E90
// int sub_CD3E90(int a1, int a2, int a3, int a4, unsigned int a5, int a6, int a7, int a8);
// [0xcd4160] (1046 bytes) sub_CD4160
// int sub_CD4160(uint32_t *a1, char *a2, int a3);
// [0xcd4cd0] (42 bytes) glitch_malloc
// int glitch_malloc(size_t a1);
// [0xcd4d00] (34 bytes) glitch_free
// int glitch_free(int a1);
// [0xcd6b40] (42 bytes) operator new[](unsigned int,glitch::memory::E_MEMORY_HINT)
// int operator new[](size_t a1);
// [0xcd6b70] (370 bytes) sub_CD6B70
// uint32_t *sub_CD6B70(uint32_t *a1);
// [0xcd6cf0] (548 bytes) sub_CD6CF0
// void sub_CD6CF0(int a1, glf::Console *a2, __gnuc_va_list __varargs);
// [0xcd6fb0] (42 bytes) irr_malloc
// int irr_malloc(size_t a1);
// [0xcd6fe0] (36 bytes) irr_free
// int irr_free(int a1);
// [0xcd7060] (66 bytes) operator new[](unsigned int,glitch::memory::E_MEMORY_HINT,int,char const*,int)
// int operator new[](size_t a1, int a2, int a3, int a4, int a5);
// [0xcd96f0] (69 bytes) sub_CD96F0
// glitch::streaming::SGeometricObject *sub_CD96F0( const glitch::streaming::SGeometricObject *a1, const glitch::streaming::SGeometricObject *a2, glitch::streaming::SGeometricObject *a3);
// [0xcdb340] (39 bytes) PVRTCDecompress(void const*,int,int,int,unsigned char *)
// unsigned int PVRTCDecompress(const void *a1, int a2, int a3, int a4, uint8_t *a5);
// [0xcdb370] (27 bytes) util_number_is_power_2(unsigned int)
// bool util_number_is_power_2(unsigned int a1);
// [0xcdb3f0] (909 bytes) sub_CDB3F0
// void sub_CDB3F0(int *a1, int a2, int *a3);
// [0xcdd810] (95 bytes) sub_CDD810
// uint32_t *sub_CDD810(uint32_t *result, uint32_t *a2);
// [0xcdd870] (435 bytes) sub_CDD870
// volatile int32_t *sub_CDD870( int a1, int a2, int a3, glitch::streaming::SCommandAndRegisterer *a4, uint8_t (*a5)(int, const glitch::streaming::SCommandAndRegisterer *));
// [0xcdda30] (584 bytes) sub_CDDA30
// volatile int32_t *sub_CDDA30( int a1, int a2, int a3, glitch::streaming::SCommandAndRegisterer *a4);
