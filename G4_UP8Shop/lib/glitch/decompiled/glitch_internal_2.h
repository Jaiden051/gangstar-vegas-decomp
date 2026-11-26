#pragma once
// ============================================================================
// G4_UP8Shop/lib/glitch/decompiled/glitch_internal_2.h
// Library: glitch | Module: glitch_internal_2
// Binary Address Span: 0xde4320 .. 0xe54a9e (149 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xde4320] (613 bytes) std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::vector<unsigned int,std::allocator<unsigned int>>>,std::_Select1st<std::pair<unsigned int const,std::vector<unsigned int,std::allocator<unsigned int>>>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned int,std::allocator<unsigned int>>>>>::_M_erase(std::_Rb_tree_node<std::pair<unsigned int const,std::vector<unsigned int,std::allocator<unsigned int>>>> *)
// void std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::vector<unsigned int>>,std::_Select1st<std::pair<unsigned int const,std::vector<unsigned int>>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<unsigned int>>>>::_M_erase( int a1, void *a2);
// [0xde4be0] (1111 bytes) std::_Rb_tree<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>,std::pair<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const,boost::intrusive_ptr<glitch::collada::CResFile>>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const,boost::intrusive_ptr<glitch::collada::CResFile>>>,std::less<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::core::SAllocator<std::pair<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const,boost::intrusive_ptr<glitch::collada::CResFile>>,(glitch::memory::E_MEMORY_HINT)0>>::_M_erase(std::_Rb_tree_node<std::pair<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const,boost::intrusive_ptr<glitch::collada::CResFile>>> *)
// int std::_Rb_tree<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>,std::pair<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const,boost::intrusive_ptr<glitch::collada::CResFile>>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const,boost::intrusive_ptr<glitch::collada::CResFile>>>,std::less<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::core::SAllocator<std::pair<std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>> const,boost::intrusive_ptr<glitch::collada::CResFile>>,(glitch::memory::E_MEMORY_HINT)0>>::_M_erase(;
// [0xde5040] (175 bytes) void std::__insertion_sort<unsigned char *>(unsigned char *,unsigned char *)
// void std::__insertion_sort<unsigned char *>(uint8_t *src, uint8_t *a2);
// [0xde5230] (1142 bytes) __gnu_cxx::__normal_iterator<std::pair<unsigned int,glitch::core::aabbox3d<float>> *,std::vector<std::pair<unsigned int,glitch::core::aabbox3d<float>>,glitch::core::SAllocator<std::pair<unsigned int,glitch::core::aabbox3d<float>>,(glitch::memory::E_MEMORY_HINT)0>>> std::remove_if<__gnu_cxx::__normal_iterator<std::pair<unsigned int,glitch::core::aabbox3d<float>> *,std::vector<std::pair<unsigned int,glitch::core::aabbox3d<float>>,glitch::core::SAllocator<std::pair<unsigned int,glitch::core::aabbox3d<float>>,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::core::CKdTree<std::pair<unsigned int,glitch::core::aabbox3d<float>>>::SEqPredicate>(__gnu_cxx::__normal_iterator<std::pair<unsigned int,glitch::core::aabbox3d<float>> *,std::vector<std::pair<unsigned int,glitch::core::aabbox3d<float>>,glitch::core::SAllocator<std::pair<unsigned int,glitch::core::aabbox3d<float>>,(glitch::memory::E_MEMORY_HINT)0>>>,__gnu_cxx::__normal_iterator<std::pair<unsigned int,glitch::core::aabbox3d<float>> *,std::vector<std::pair<unsigned int,glitch::core::aabbox3d<float>>,glitch::core::SAllocator<std::pair<unsigned int,glitch::core::aabbox3d<float>>,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::core::CKdTree<std::pair<unsigned int,glitch::core::aabbox3d<float>>>::SEqPredicate)
// uint32_t *std::remove_if<__gnu_cxx::__normal_iterator<std::pair<unsigned int,glitch::core::aabbox3d<float>> *,std::vector<std::pair<unsigned int,glitch::core::aabbox3d<float>>,glitch::core::SAllocator<std::pair<unsigned int,glitch::core::aabbox3d<float>>,(glitch::memory::E_MEMORY_HINT)0>>>,glitch::core::CKdTree<std::pair<unsigned int,glitch::core::aabbox3d<float>>>::SEqPredicate>(;
// [0xde56b0] (1184 bytes) std::vector<std::pair<unsigned int,glitch::core::aabbox3d<float>>,glitch::core::SAllocator<std::pair<unsigned int,glitch::core::aabbox3d<float>>,(glitch::memory::E_MEMORY_HINT)0>>::_M_insert_aux(__gnu_cxx::__normal_iterator<std::pair<unsigned int,glitch::core::aabbox3d<float>>*,std::vector<std::pair<unsigned int,glitch::core::aabbox3d<float>>,glitch::core::SAllocator<std::pair<unsigned int,glitch::core::aabbox3d<float>>,(glitch::memory::E_MEMORY_HINT)0>>>,std::pair<unsigned int,glitch::core::aabbox3d<float>> const&)
// int std::vector<std::pair<unsigned int,glitch::core::aabbox3d<float>>,glitch::core::SAllocator<std::pair<unsigned int,glitch::core::aabbox3d<float>>,(glitch::memory::E_MEMORY_HINT)0>>::_M_insert_aux(;
// [0xde7cb0] (353 bytes) std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::reserve(unsigned int)
// int std::basic_string<char,std::char_traits<char>,glitch::core::SAllocator<char,(glitch::memory::E_MEMORY_HINT)0>>::reserve(;
// [0xde7e20] (269 bytes) void std::__adjust_heap<__gnu_cxx::__normal_iterator<glitch::core::CKdTree<std::pair<unsigned int,glitch::core::aabbox3d<float>>>::SKdDistance *,std::vector<glitch::core::CKdTree<std::pair<unsigned int,glitch::core::aabbox3d<float>>>::SKdDistance,std::allocator<glitch::core::CKdTree<std::pair<unsigned int,glitch::core::aabbox3d<float>>>::SKdDistance>>>,int,glitch::core::CKdTree<std::pair<unsigned int,glitch::core::aabbox3d<float>>>::SKdDistance,std::less<glitch::core::CKdTree<std::pair<unsigned int,glitch::core::aabbox3d<float>>>::SKdDistance>>(__gnu_cxx::__normal_iterator<glitch::core::CKdTree<std::pair<unsigned int,glitch::core::aabbox3d<float>>>::SKdDistance *,std::vector<glitch::core::CKdTree<std::pair<unsigned int,glitch::core::aabbox3d<float>>>::SKdDistance,std::allocator<glitch::core::CKdTree<std::pair<unsigned int,glitch::core::aabbox3d<float>>>::SKdDistance>>>,int,int,glitch::core::CKdTree<std::pair<unsigned int,glitch::core::aabbox3d<float>>>::SKdDistance,std::less<glitch::core::CKdTree<std::pair<unsigned int,glitch::core::aabbox3d<float>>>::SKdDistance>)
// int std::__adjust_heap<__gnu_cxx::__normal_iterator<glitch::core::CKdTree<std::pair<unsigned int,glitch::core::aabbox3d<float>>>::SKdDistance *,std::vector<glitch::core::CKdTree<std::pair<unsigned int,glitch::core::aabbox3d<float>>>::SKdDistance,std::allocator<glitch::core::CKdTree<std::pair<unsigned int,glitch::core::aabbox3d<float>>>::SKdDistance>>>,int,glitch::core::CKdTree<std::pair<unsigned int,glitch::core::aabbox3d<float>>>::SKdDistance,std::less<glitch::core::CKdTree<std::pair<unsigned int,glitch::core::aabbox3d<float>>>::SKdDistance>>( int a1, int a2, int a3, float a4, int a5);
// [0xde7f30] (174 bytes) std::_Rb_tree<unsigned short,std::pair<unsigned short const,unsigned short>,std::_Select1st<std::pair<unsigned short const,unsigned short>>,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,unsigned short>>>::_M_insert_(std::_Rb_tree_node_base const*,std::_Rb_tree_node_base const*,std::pair<unsigned short const,unsigned short> const&)
// int *std::_Rb_tree<unsigned short,std::pair<unsigned short const,unsigned short>,std::_Select1st<std::pair<unsigned short const,unsigned short>>,std::less<unsigned short>,std::allocator<std::pair<unsigned short const,unsigned short>>>::_M_insert_( int *a1, int a2, int a3, int a4, uint16_t *a5);
// [0xde7fe0] (296 bytes) void std::__unguarded_linear_insert<glitch::video::SShaderVertexAttributeDef *>(glitch::video::SShaderVertexAttributeDef *)
// void std::__unguarded_linear_insert<glitch::video::SShaderVertexAttributeDef *>( glitch::video::SShaderVertexAttributeDef *a1);
// [0xdedfe0] (131 bytes) void std::__push_heap<__gnu_cxx::__normal_iterator<glitch::core::CKdTree<std::pair<unsigned int,glitch::core::aabbox3d<float>>>::SKdDistance *,std::vector<glitch::core::CKdTree<std::pair<unsigned int,glitch::core::aabbox3d<float>>>::SKdDistance,std::allocator<glitch::core::CKdTree<std::pair<unsigned int,glitch::core::aabbox3d<float>>>::SKdDistance>>>,int,glitch::core::CKdTree<std::pair<unsigned int,glitch::core::aabbox3d<float>>>::SKdDistance,std::less<glitch::core::CKdTree<std::pair<unsigned int,glitch::core::aabbox3d<float>>>::SKdDistance>>(__gnu_cxx::__normal_iterator<glitch::core::CKdTree<std::pair<unsigned int,glitch::core::aabbox3d<float>>>::SKdDistance *,std::vector<glitch::core::CKdTree<std::pair<unsigned int,glitch::core::aabbox3d<float>>>::SKdDistance,std::allocator<glitch::core::CKdTree<std::pair<unsigned int,glitch::core::aabbox3d<float>>>::SKdDistance>>>,int,int,glitch::core::CKdTree<std::pair<unsigned int,glitch::core::aabbox3d<float>>>::SKdDistance,std::less<glitch::core::CKdTree<std::pair<unsigned int,glitch::core::aabbox3d<float>>>::SKdDistance>)
// int std::__push_heap<__gnu_cxx::__normal_iterator<glitch::core::CKdTree<std::pair<unsigned int,glitch::core::aabbox3d<float>>>::SKdDistance *,std::vector<glitch::core::CKdTree<std::pair<unsigned int,glitch::core::aabbox3d<float>>>::SKdDistance,std::allocator<glitch::core::CKdTree<std::pair<unsigned int,glitch::core::aabbox3d<float>>>::SKdDistance>>>,int,glitch::core::CKdTree<std::pair<unsigned int,glitch::core::aabbox3d<float>>>::SKdDistance,std::less<glitch::core::CKdTree<std::pair<unsigned int,glitch::core::aabbox3d<float>>>::SKdDistance>>( int a1, int a2, int a3, float a4, int a5);
// [0xdeecc0] (246 bytes) void std::__adjust_heap<unsigned char *,int,unsigned char>(unsigned char *,int,int,unsigned char)
// void std::__adjust_heap<unsigned char *,int,unsigned char>( uint8_t *a1, int a2, int a3, uint8_t a4);
// [0xdeedc0] (917 bytes) void std::__introsort_loop<unsigned char *,int>(unsigned char *,unsigned char *,int)
// void std::__introsort_loop<unsigned char *,int>(uint8_t *a1, uint8_t *a2, int a3);
// [0xdfb9f0] (166 bytes) sub_DFB9F0
// int sub_DFB9F0();
// [0xdfbae0] (24 bytes) sub_DFBAE0
// uint32_t *sub_DFBAE0(uint32_t *a1);
// [0xdfbb00] (39 bytes) sub_DFBB00
// bool sub_DFBB00(int a1, uint32_t *a2);
// [0xdfbb30] (24 bytes) sub_DFBB30
// uint32_t *sub_DFBB30(uint32_t *a1);
// [0xdfbe90] (608 bytes) sub_DFBE90
// int sub_DFBE90(int a1, int a2, int a3);
// [0xdfc290] (681 bytes) sub_DFC290
// unsigned int sub_DFC290(uint32_t *a1);
// [0xdfc540] (273 bytes) sub_DFC540
// int sub_DFC540(int a1);
// [0xdfc660] (176 bytes) sub_DFC660
// int sub_DFC660(int a1);
// [0xdfc750] (75 bytes) sub_DFC750
// int sub_DFC750(int a1);
// [0xdfc7a8] (1 bytes) nullsub_531
// void nullsub_531();
// [0xdfc830] (20 bytes) sub_DFC830
// uint32_t *sub_DFC830(int a1);
// [0xdfc850] (103 bytes) sub_DFC850
// int sub_DFC850(uint32_t *a1);
// [0xdfc8e0] (12 bytes) sub_DFC8E0
// int sub_DFC8E0(int a1);
// [0xdfc8f0] (7 bytes) sub_DFC8F0
// int sub_DFC8F0(int a1);
// [0xdfc900] (12 bytes) sub_DFC900
// int sub_DFC900(int a1);
// [0xdfc910] (7 bytes) sub_DFC910
// int sub_DFC910(int a1);
// [0xdfc920] (12 bytes) sub_DFC920
// int sub_DFC920(int a1);
// [0xdfc930] (82 bytes) sub_DFC930
// int sub_DFC930(int a1, int a2, uint8_t a3);
// [0xdfcb00] (264 bytes) sub_DFCB00
// int sub_DFCB00(uint32_t *a1);
// [0xdfcc10] (376 bytes) sub_DFCC10
// int sub_DFCC10(uint32_t *a1);
// [0xdfcd90] (200 bytes) sub_DFCD90
// uint32_t *sub_DFCD90(uint32_t *a1);
// [0xdfce60] (194 bytes) sub_DFCE60
// uint32_t *sub_DFCE60(uint32_t *a1);
// [0xdfcf30] (268 bytes) sub_DFCF30
// uint32_t *sub_DFCF30(uint32_t *a1);
// [0xdfd040] (27 bytes) sub_DFD040
// uint32_t *sub_DFD040(uint32_t *a1);
// [0xdfd060] (27 bytes) sub_DFD060
// uint32_t *sub_DFD060(uint32_t *a1);
// [0xdfd080] (68 bytes) sub_DFD080
// int sub_DFD080(int a1);
// [0xdfd0d0] (45 bytes) sub_DFD0D0
// void sub_DFD0D0(uint32_t *a1);
// [0xdfd100] (45 bytes) sub_DFD100
// void sub_DFD100(uint32_t *a1);
// [0xdfd2b0] (42 bytes) sub_DFD2B0
// void sub_DFD2B0(uint32_t *a1);
// [0xdfd2e0] (42 bytes) sub_DFD2E0
// void sub_DFD2E0(uint32_t *a1);
// [0xdfd6b0] (103 bytes) sub_DFD6B0
// uint32_t *sub_DFD6B0(int a1);
// [0xdfd720] (92 bytes) sub_DFD720
// void __noreturn sub_DFD720(int a1, int a2);
// [0xdfd780] (92 bytes) sub_DFD780
// void __noreturn sub_DFD780(int a1, int a2);
// [0xdfd7e0] (52 bytes) sub_DFD7E0
// void __noreturn sub_DFD7E0(int a1);
// [0xdfe170] (82 bytes) sub_DFE170
// int sub_DFE170(uint32_t *a1);
// [0xdfe1d0] (505 bytes) sub_DFE1D0
// int sub_DFE1D0( int a1, uint16_t a2, uint16_t a3, uint8_t a4, signed int *a5);
// [0xdfef50] (82 bytes) sub_DFEF50
// char sub_DFEF50(int a1, int a2);
// [0xdfefb0] (120 bytes) sub_DFEFB0
// int sub_DFEFB0(uint32_t *a1, uint32_t *a2);
// [0xdff070] (154 bytes) sub_DFF070
// uint8_t *sub_DFF070(int a1, float *a2, int a3, int a4, int a5);
// [0xdff110] (154 bytes) sub_DFF110
// uint8_t *sub_DFF110(int a1, float *a2, int a3, int a4, int a5);
// [0xdff1b0] (128 bytes) sub_DFF1B0
// float *sub_DFF1B0(int a1, uint8_t *a2, int a3, int a4, int a5);
// [0xdff230] (128 bytes) sub_DFF230
// float *sub_DFF230(int a1, uint8_t *a2, int a3, int a4, int a5);
// [0xdff370] (108 bytes) sub_DFF370
// uint32_t *sub_DFF370();
// [0xdff3e0] (390 bytes) sub_DFF3E0
// size_t sub_DFF3E0(int *a1, uint32_t *a2);
// [0xdff570] (354 bytes) sub_DFF570
// uint32_t *sub_DFF570(uint32_t *a1);
// [0xdff6e0] (307 bytes) sub_DFF6E0
// int sub_DFF6E0(int a1, int a2, unsigned int a3);
// [0xdff820] (211 bytes) sub_DFF820
// uint32_t *sub_DFF820(uint32_t *a1, unsigned int a2, int a3, int a4, uint32_t *s1);
// [0xdff900] (383 bytes) sub_DFF900
// size_t sub_DFF900(int *a1, uint32_t *a2);
// [0xdffa80] (383 bytes) sub_DFFA80
// size_t sub_DFFA80(int *a1, uint32_t *a2);
// [0xdffc00] (383 bytes) sub_DFFC00
// size_t sub_DFFC00(int *a1, uint32_t *a2);
// [0xdffd80] (383 bytes) sub_DFFD80
// size_t sub_DFFD80(int *a1, uint32_t *a2);
// [0xdfff00] (383 bytes) sub_DFFF00
// size_t sub_DFFF00(int *a1, uint32_t *a2);
// [0xe00080] (383 bytes) sub_E00080
// size_t sub_E00080(int *a1, uint32_t *a2);
// [0xe00200] (383 bytes) sub_E00200
// size_t sub_E00200(int *a1, uint32_t *a2);
// [0xe00380] (417 bytes) sub_E00380
// int sub_E00380(int result, glitch::core *a2, int a3);
// [0xe00530] (420 bytes) sub_E00530
// int sub_E00530(int result, glitch::core *a2, int a3);
// [0xe006e0] (384 bytes) sub_E006E0
// int sub_E006E0(uint32_t *a1);
// [0xe00860] (301 bytes) sub_E00860
// char *sub_E00860(char *result, char *a2);
// [0xe00990] (237 bytes) sub_E00990
// int sub_E00990(uint32_t *a1);
// [0xe00a80] (352 bytes) sub_E00A80
// uint32_t *sub_E00A80(uint32_t *a1);
// [0xe00be0] (697 bytes) sub_E00BE0
// int sub_E00BE0(int a1);
// [0xe00f60] (302 bytes) sub_E00F60
// uint32_t *sub_E00F60(int a1, char *a2, ...);
// [0xe01090] (248 bytes) sub_E01090
// uint32_t *sub_E01090(uint32_t *a1, char *a2, unsigned int *a3);
// [0xe01190] (265 bytes) sub_E01190
// int sub_E01190(uint32_t *a1, int a2);
// [0xe01840] (266 bytes) sub_E01840
// int sub_E01840(int a1);
// [0xe01950] (341 bytes) sub_E01950
// int *sub_E01950(uint32_t *a1, unsigned int a2);
// [0xe01ab0] (340 bytes) sub_E01AB0
// char **sub_E01AB0(char **a1, const char *s);
// [0xe01c10] (143 bytes) sub_E01C10
// uint32_t *sub_E01C10(uint32_t *result);
// [0xe01ca0] (928 bytes) sub_E01CA0
// int sub_E01CA0(int a1, int a2, uint32_t *a3, char a4);
// [0xe02040] (381 bytes) sub_E02040
// int sub_E02040(int a1, uint32_t *a2, uint32_t *s1);
// [0xe021c0] (779 bytes) sub_E021C0
// char *sub_E021C0(const char *a1, int a2);
// [0xe024d0] (223 bytes) sub_E024D0
// uint32_t *sub_E024D0(int a1);
// [0xe025b0] (337 bytes) sub_E025B0
// void sub_E025B0(int a1);
// [0xe02710] (345 bytes) sub_E02710
// int sub_E02710(int a1, int a2, char a3);
// [0xe02870] (670 bytes) sub_E02870
// int sub_E02870(int a1, uint32_t *a2);
// [0xe030f0] (180 bytes) sub_E030F0
// int *sub_E030F0(int a1, int a2);
// [0xe033a0] (1358 bytes) sub_E033A0
// int sub_E033A0(unsigned int *a1, char *a2, int a3);
// [0xe038f0] (7814 bytes) sub_E038F0
// int sub_E038F0( int a1, uint16_t *a2, int a3, int a4, int *a5, int a6, int a7, int a8, char a9, int a10);
// [0xe05780] (7831 bytes) sub_E05780
// int sub_E05780( int a1, uint8_t *a2, int a3, int a4, uint16_t *a5, int a6, int a7, int a8, char a9, int a10);
// [0xe07620] (18917 bytes) sub_E07620
// int sub_E07620( int a1, uint8_t *a2, int a3, int a4, uint8_t *a5, int a6, int a7, int a8, char a9, int a10);
// [0xe0c010] (18867 bytes) sub_E0C010
// int sub_E0C010( int a1, unsigned int *a2, int a3, int a4, unsigned int *a5, int a6, int a7, int a8, char a9, int a10);
// [0xe109d0] (18951 bytes) sub_E109D0
// int sub_E109D0( int a1, uint16_t *a2, int a3, int a4, uint16_t *a5, int a6, int a7, int a8, char a9, int a10);
// [0xe153e0] (7813 bytes) sub_E153E0
// int sub_E153E0( int a1, unsigned int *a2, int a3, int a4, uint8_t *a5, int a6, int a7, int a8, char a9, int a10);
// [0xe17270] (7814 bytes) sub_E17270
// int sub_E17270( int a1, uint16_t *a2, int a3, int a4, uint8_t *a5, int a6, int a7, int a8, char a9, int a10);
// [0xe19100] (7814 bytes) sub_E19100
// int sub_E19100( int a1, uint8_t *a2, int a3, int a4, int *a5, int a6, int a7, int a8, char a9, int a10);
// [0xe1af90] (7822 bytes) sub_E1AF90
// int sub_E1AF90( int a1, unsigned int *a2, int a3, int a4, uint16_t *a5, int a6, int a7, int a8, char a9, int a10);
// [0xe1ce20] (560 bytes) sub_E1CE20
// uint32_t *sub_E1CE20(int a1);
// [0xe1d050] (90 bytes) sub_E1D050
// int (**sub_E1D050(uint32_t *a1))(int);
// [0xe1d0b0] (1415 bytes) sub_E1D0B0
// uint32_t *sub_E1D0B0( uint32_t *a1, uint32_t *a2, volatile int32_t **a3, int a4, int a5, int16_t a6, char a7);
// [0xe1d640] (340 bytes) sub_E1D640
// uint32_t *sub_E1D640(int a1, uint32_t *a2);
// [0xe1d7a0] (98 bytes) sub_E1D7A0
// void sub_E1D7A0(uint32_t *a1);
// [0xe1dc00] (787 bytes) sub_E1DC00
// int *sub_E1DC00(int *a1, uint32_t *a2);
// [0xe1e320] (1939 bytes) sub_E1E320
// int *sub_E1E320(volatile int32_t ***a1, int **a2, int *a3);
// [0xe27ea0] (6244 bytes) sub_E27EA0
// int sub_E27EA0( int a1, uint16_t *a2, int a3, int a4, uint8_t *a5, int a6, int a7, int a8, char a9, int a10);
// [0xe29710] (9314 bytes) sub_E29710
// int sub_E29710( int a1, uint8_t *a2, int a3, int a4, int a5, int a6, uint8_t *a7, int a8, int a9, int a10, char a11, int a12);
// [0xe2c2e0] (1013 bytes) sub_E2C2E0
// int sub_E2C2E0( int a1, char *a2, int a3, char *a4, int a5, int a6, unsigned int a7, char a8, int a9);
// [0xe30d90] (663 bytes) sub_E30D90
// int sub_E30D90(int a1, int *a2, int a3);
// [0xe31050] (2518 bytes) sub_E31050
// int sub_E31050( int a1, unsigned int *a2, int a3, int a4, uint8_t *a5, unsigned int a6, unsigned int a7, unsigned int a8, char a9);
// [0xe33280] (53 bytes) sub_E33280
// int sub_E33280(int a1);
// [0xe33490] (37 bytes) sub_E33490
// uint8_t *sub_E33490(int a1);
// [0xe334f0] (144 bytes) sub_E334F0
// void sub_E334F0(uint32_t *a1);
// [0xe33580] (7 bytes) sub_E33580
// int sub_E33580(int a1);
// [0xe33590] (146 bytes) sub_E33590
// void sub_E33590(glitch::video::IImageLoader::IDataReader::IOutputBufferPolicy *a1);
// [0xe33630] (291 bytes) sub_E33630
// int sub_E33630(int a1, int a2, uint8_t a3);
// [0xe33760] (7 bytes) sub_E33760
// int sub_E33760(int a1, int a2, char a3);
// [0xe33770] (291 bytes) sub_E33770
// int sub_E33770(int a1, int a2, uint8_t a3);
// [0xe338a0] (7 bytes) sub_E338A0
// int sub_E338A0(int a1);
// [0xe338b0] (178 bytes) sub_E338B0
// void sub_E338B0(glitch::video::IImageLoader::IDataReader::IOutputBufferPolicy *a1);
// [0xe33970] (134 bytes) sub_E33970
// void sub_E33970(uint32_t *a1);
// [0xe33a00] (7 bytes) sub_E33A00
// int sub_E33A00(int a1);
// [0xe33a10] (146 bytes) sub_E33A10
// void sub_E33A10(glitch::video::IImageLoader::IDataReader::IOutputBufferPolicy *a1);
// [0xe33ab0] (7 bytes) sub_E33AB0
// int sub_E33AB0(int a1);
// [0xe33ac0] (146 bytes) sub_E33AC0
// void sub_E33AC0(glitch::video::IImageLoader::IDataReader::IOutputBufferPolicy *a1);
// [0xe33b60] (7 bytes) sub_E33B60
// int sub_E33B60(int a1);
// [0xe33b70] (146 bytes) sub_E33B70
// void sub_E33B70(glitch::video::IImageLoader::IDataReader::IOutputBufferPolicy *a1);
// [0xe33c10] (7 bytes) sub_E33C10
// int sub_E33C10(int a1);
// [0xe33c20] (146 bytes) sub_E33C20
// void sub_E33C20(glitch::video::IImageLoader::IDataReader::IOutputBufferPolicy *a1);
// [0xe33cc0] (7 bytes) sub_E33CC0
// int sub_E33CC0(int a1);
// [0xe33cd0] (146 bytes) sub_E33CD0
// void sub_E33CD0(glitch::video::IImageLoader::IDataReader::IOutputBufferPolicy *a1);
// [0xe33d70] (7 bytes) sub_E33D70
// int sub_E33D70(int a1);
// [0xe33d80] (178 bytes) sub_E33D80
// void sub_E33D80(glitch::video::IImageLoader::IDataReader::IOutputBufferPolicy *a1);
// [0xe3e830] (95 bytes) sub_E3E830
// uint32_t *sub_E3E830(uint32_t *result, uint32_t *a2);
// [0xe428d0] (840 bytes) sub_E428D0
// int sub_E428D0(int *a1, const char *a2, int *a3);
// [0xe43710] (100 bytes) sub_E43710
// int (**sub_E43710(int a1))(int);
// [0xe43e00] (70 bytes) sub_E43E00
// int (**sub_E43E00(uint32_t *a1))(int);
// [0xe44d00] (78 bytes) sub_E44D00
// void sub_E44D00(int *a1);
// [0xe44db0] (96 bytes) sub_E44DB0
// void sub_E44DB0(void *a1);
// [0xe47d30] (630 bytes) sub_E47D30
// volatile int32_t *sub_E47D30(int a1, int a2);
// [0xe47fb0] (12 bytes) sub_E47FB0
// volatile int32_t *sub_E47FB0(int a1);
// [0xe4b460] (185 bytes) sub_E4B460
// void sub_E4B460(int a1, volatile int32_t **a2, int a3, int a4, int a5);
// [0xe50a70] (536 bytes) sub_E50A70
// int sub_E50A70(int a1, int a2, volatile int32_t **a3);
// [0xe50c90] (743 bytes) sub_E50C90
// glitch::core **sub_E50C90(glitch::core **a1, int a2, int a3, int a4);
// [0xe50f80] (523 bytes) sub_E50F80
// uint32_t *sub_E50F80(uint32_t *a1, volatile int32_t **a2, int16_t a3);
// [0xe51190] (326 bytes) sub_E51190
// uint32_t *sub_E51190(int a1, uint32_t *a2);
// [0xe512e0] (1431 bytes) sub_E512E0
// uint32_t *sub_E512E0(uint32_t *a1, int a2);
// [0xe51880] (2782 bytes) sub_E51880
// int sub_E51880(int a1, int a2);
// [0xe54a9e] (76 bytes) sub_E54A9E
// uint32_t *sub_E54A9E(int a1);
