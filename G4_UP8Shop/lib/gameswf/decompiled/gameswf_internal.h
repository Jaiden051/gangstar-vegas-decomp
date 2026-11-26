#pragma once
// ============================================================================
// G4_UP8Shop/lib/gameswf/decompiled/gameswf_internal.h
// Library: gameswf | Module: gameswf_internal
// Binary Address Span: 0x10512a0 .. 0x117abd0 (176 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x10512a0] (374 bytes) stb_vorbis_seek_start(stb_vorbis *)
// int stb_vorbis_seek_start(int a1);
// [0x1051420] (1919 bytes) stb_vorbis_stream_length_in_samples(stb_vorbis *)
// int stb_vorbis_stream_length_in_samples(int a1);
// [0x1051ba0] (104 bytes) stb_vorbis_stream_length_in_seconds(stb_vorbis *)
// long double stb_vorbis_stream_length_in_seconds(uint32_t *a1);
// [0x1051c10] (544 bytes) stb_vorbis_get_frame_float(stb_vorbis *,int *,float ***)
// int stb_vorbis_get_frame_float(uint8_t *a1, int *a2, uint32_t *a3);
// [0x1051e30] (4514 bytes) sub_1051E30
// int sub_1051E30(int a1, int a2, int a3, unsigned int a4, int a5);
// [0x1052fe0] (2754 bytes) sub_1052FE0
// int sub_1052FE0(uint32_t *a1, unsigned int a2, __m128d a3, int a4);
// [0x1053ab0] (21 bytes) stb_vorbis_seek(stb_vorbis *,unsigned int)
// int stb_vorbis_seek(__m128d a1, uint32_t *a2, unsigned int a3);
// [0x1053ad0] (21 bytes) stb_vorbis_seek_frame(stb_vorbis *,unsigned int)
// int stb_vorbis_seek_frame(__m128d a1, uint32_t *a2, unsigned int a3);
// [0x1053af0] (525 bytes) stb_vorbis_open_file_section(vox::StreamCursorInterface *,int,int *,stb_vorbis_alloc *,unsigned int)
// int *stb_vorbis_open_file_section(vox::StreamCursorInterface *a1, int a2, uint32_t *a3, int *a4, int a5);
// [0x1053d00] (158 bytes) stb_vorbis_open_file(vox::StreamCursorInterface *,int,int *,stb_vorbis_alloc *)
// int *stb_vorbis_open_file(vox::StreamCursorInterface *a1, int a2, uint32_t *a3, int *a4);
// [0x1053da0] (17 bytes) stb_vorbis_open_filename(char *,int *,stb_vorbis_alloc *)
// int stb_vorbis_open_filename(int a1, uint32_t *a2);
// [0x1053dc0] (557 bytes) stb_vorbis_open_memory(unsigned char *,int,int *,stb_vorbis_alloc *)
// uint32_t *stb_vorbis_open_memory(int a1, int a2, uint32_t *a3, int *a4);
// [0x1053ff0] (386 bytes) stb_vorbis_get_frame_short(stb_vorbis *,int,short **,int)
// int stb_vorbis_get_frame_short(int a1, int a2, int a3, int a4);
// [0x1054180] (606 bytes) stb_vorbis_get_frame_short_interleaved(stb_vorbis *,int,short *,int)
// int stb_vorbis_get_frame_short_interleaved(int a1, int a2, int a3, int a4);
// [0x10543e0] (765 bytes) stb_vorbis_get_samples_short_interleaved(stb_vorbis *,int,short *,int)
// int stb_vorbis_get_samples_short_interleaved(int a1, int a2, int a3, int a4);
// [0x10546e0] (640 bytes) stb_vorbis_get_samples_short(stb_vorbis *,int,short **,int)
// int stb_vorbis_get_samples_short(int a1, int a2, int a3, int a4);
// [0x1054960] (383 bytes) stb_vorbis_decode_filename(char *,int *,short **)
// int stb_vorbis_decode_filename(char *a1, int *a2, int16_t **a3);
// [0x1054ae0] (399 bytes) stb_vorbis_decode_memory(unsigned char *,int,int *,int *,short **)
// int stb_vorbis_decode_memory(uint8_t *a1, int a2, int *a3, int *a4, int16_t **a5);
// [0x1054c70] (561 bytes) stb_vorbis_get_samples_float_interleaved(stb_vorbis *,int,float *,int)
// int stb_vorbis_get_samples_float_interleaved(int a1, int a2, uint32_t *a3, int a4);
// [0x1054eb0] (397 bytes) stb_vorbis_get_samples_float(stb_vorbis *,int,float **,int)
// int stb_vorbis_get_samples_float(int a1, int a2, int a3, int a4);
// [0x105503d] (107 bytes) sub_105503D
// int sub_105503D(uint32_t *a1, int a2);
// [0x10550a8] (122 bytes) sub_10550A8
// float sub_10550A8(int a1);
// [0x1055122] (874 bytes) sub_1055122
// int sub_1055122(uint32_t *a1, int a2, int a3);
// [0x105548c] (63 bytes) sub_105548C
// uint32_t *sub_105548C(uint32_t *result, int a2, int a3);
// [0x1055580] (9 bytes) VoxSetDataThreshold
// void VoxSetDataThreshold();
// [0x1055590] (24 bytes) VoxSetAndroidAPILevel
// uint32_t *VoxSetAndroidAPILevel(int a1);
// [0x1057380] (557 bytes) std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>>::assign(char const*,unsigned int)
// void **std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>>::assign(;
// [0x1059da0] (3812 bytes) std::vector<vox::Group,vox::SAllocator<vox::Group,(vox::VoxMemHint)0>>::_M_fill_insert(__gnu_cxx::__normal_iterator<vox::Group*,std::vector<vox::Group,vox::SAllocator<vox::Group,(vox::VoxMemHint)0>>>,unsigned int,vox::Group const&)
// void std::vector<vox::Group,vox::SAllocator<vox::Group,(vox::VoxMemHint)0>>::_M_fill_insert(;
// [0x105ac90] (3347 bytes) huff_init_lut
// int huff_init_lut(int a1);
// [0x1066130] (144 bytes) operator+(TiXmlString const&,TiXmlString const&)
// size_t **operator+(size_t **a1, size_t **a2, size_t **a3);
// [0x10661c0] (147 bytes) operator+(TiXmlString const&,char const*)
// size_t **operator+(size_t **a1, const char *a2, char *s);
// [0x1066260] (149 bytes) operator+(char const*,TiXmlString const&)
// size_t **operator+(size_t **a1, const TiXmlString *s, size_t **a3);
// [0x1066c60] (30 bytes) sub_1066C60
// void *sub_1066C60();
// [0x1066e90] (42 bytes) operator new[](unsigned int,gameswf::MemHint)
// int operator new[](size_t a1);
// [0x1066f00] (58 bytes) operator new[](unsigned int,gameswf::MemHint,char const*,int)
// int operator new[](size_t a1, int a2, int a3, int a4);
// [0x106aa10] (74 bytes) sub_106AA10
// uint32_t *sub_106AA10();
// [0x106ee60] (96 bytes) sub_106EE60
// int sub_106EE60();
// [0x106f070] (108 bytes) sub_106F070
// char *sub_106F070();
// [0x106f530] (172 bytes) sub_106F530
// char *sub_106F530(char a1, int a2);
// [0x1082be0] (223 bytes) sub_1082BE0
// int sub_1082BE0();
// [0x10876f0] (94 bytes) sub_10876F0
// int sub_10876F0();
// [0x10877f0] (1640 bytes) sub_10877F0
// int sub_10877F0(int a1, uint32_t *a2, int a3);
// [0x1088630] (295 bytes) sub_1088630
// void __noreturn sub_1088630();
// [0x108db60] (66 bytes) sub_108DB60
// int sub_108DB60();
// [0x10949a0] (89 bytes) sub_10949A0
// int sub_10949A0();
// [0x1098950] (90 bytes) sub_1098950
// int sub_1098950();
// [0x10a5100] (2531 bytes) void std::__introsort_loop<gameswf::ASValue *,int,gameswf::FrameLabelSorter>(gameswf::ASValue *,gameswf::ASValue *,int,gameswf::FrameLabelSorter)
// int std::__introsort_loop<gameswf::ASValue *,int,gameswf::FrameLabelSorter>( uint32_t *a1, gameswf::ASValue *a2, int a3);
// [0x10a5af0] (385 bytes) void std::__insertion_sort<gameswf::ASValue *,gameswf::FrameLabelSorter>(gameswf::ASValue *,gameswf::ASValue *,gameswf::FrameLabelSorter)
// gameswf::ASValue *std::__insertion_sort<gameswf::ASValue *,gameswf::FrameLabelSorter>( gameswf::ASValue *a1, gameswf::ASValue *a2);
// [0x10a6720] (223 bytes) sub_10A6720
// int sub_10A6720();
// [0x10aad10] (414 bytes) sub_10AAD10
// int sub_10AAD10(uint32_t *a1, char **a2);
// [0x10add90] (613 bytes) sub_10ADD90
// uint8_t *sub_10ADD90(int *a1, char *a2);
// [0x10b19e0] (66 bytes) sub_10B19E0
// int sub_10B19E0();
// [0x10b5330] (55 bytes) sub_10B5330
// int sub_10B5330();
// [0x10bec00] (772 bytes) sub_10BEC00
// int sub_10BEC00();
// [0x10c45e0] (885 bytes) sub_10C45E0
// void sub_10C45E0(int a1, volatile int32_t **a2, __m128d a3);
// [0x10c4960] (349 bytes) sub_10C4960
// void sub_10C4960( int a1, volatile int32_t **a2, __m128d a3, int a4, glitch::core::detail::SSharedStringHeapEntry::SData *a5);
// [0x10c4ac0] (1096 bytes) sub_10C4AC0
// int sub_10C4AC0(int result, int a2, int *a3, float *a4);
// [0x10c6160] (2378 bytes) sub_10C6160
// int sub_10C6160(int a1);
// [0x10c6ab0] (1763 bytes) sub_10C6AB0
// uint32_t *sub_10C6AB0(int a1, float **a2, char a3, uint32_t *a4, float *a5, uint32_t *a6);
// [0x10c71a0] (2078 bytes) sub_10C71A0
// int sub_10C71A0( int a1, int *a2, float *a3, float *a4, gameswf::Matrix *a5, gameswf::Matrix *a6);
// [0x10d17f0] (89 bytes) sub_10D17F0
// int sub_10D17F0();
// [0x10d5170] (74 bytes) sub_10D5170
// int sub_10D5170();
// [0x10d51f0] (286 bytes) sub_10D51F0
// bool sub_10D51F0(float *a1, float *a2, float *a3, float *a4);
// [0x10da7c0] (89 bytes) sub_10DA7C0
// int sub_10DA7C0();
// [0x10da820] (42 bytes) sub_10DA820
// int sub_10DA820(float **a1, float **a2);
// [0x10e2480] (448 bytes) sub_10E2480
// int sub_10E2480(int *a1);
// [0x10e2ed0] (716 bytes) sub_10E2ED0
// gameswf *sub_10E2ED0(int a1);
// [0x10e31a0] (788 bytes) sub_10E31A0
// int sub_10E31A0(int a1, char *a2);
// [0x10ead60] (89 bytes) sub_10EAD60
// int sub_10EAD60();
// [0x10ec860] (71 bytes) sub_10EC860
// int sub_10EC860();
// [0x10ef190] (769 bytes) sub_10EF190
// int sub_10EF190(int a1, int a2);
// [0x10f0980] (4279 bytes) sub_10F0980
// int sub_10F0980(int a1, gameswf::MeshSet *a2, int a3);
// [0x10f1a40] (1396 bytes) sub_10F1A40
// int sub_10F1A40(int a1, gameswf::MeshSet *a2, uint32_t *a3);
// [0x10f9100] (26 bytes) sub_10F9100
// void sub_10F9100();
// [0x10f9450] (108 bytes) sub_10F9450
// char *sub_10F9450();
// [0x10f9840] (279 bytes) sub_10F9840
// int sub_10F9840();
// [0x10f9960] (274 bytes) sub_10F9960
// int sub_10F9960(int result, int a2);
// [0x10f9b70] (244 bytes) sub_10F9B70
// uint16_t *sub_10F9B70(int a1, uint32_t *a2);
// [0x10f9c70] (10245 bytes) sub_10F9C70
// gameswf *sub_10F9C70( gameswf *result, uint32_t *a2, long double PixelScale, int a4, float *a5, unsigned int *a6, uint8_t a7, uint8_t a8, uint8_t a9, gameswf **a10, int a11);
// [0x11003b0] (139 bytes) sub_11003B0
// int sub_11003B0(uint32_t *a1, int a2, uint16_t *a3);
// [0x1102850] (655 bytes) sub_1102850
// int sub_1102850(uint32_t *a1, gameswf::EditTextCharacter *a2, long double a3);
// [0x1107900] (40 bytes) std::vector<wchar_t,std::allocator<wchar_t>>::~vector()
// void std::vector<wchar_t>::~vector(void **this);
// [0x110c870] (254 bytes) sub_110C870
// int sub_110C870();
// [0x110e800] (716 bytes) sub_110E800
// gameswf *sub_110E800(int a1);
// [0x1114380] (1843 bytes) sub_1114380
// char *sub_1114380(int **a1, char *a2);
// [0x111baa0] (108 bytes) sub_111BAA0
// char *sub_111BAA0();
// [0x111bc00] (374 bytes) sub_111BC00
// int sub_111BC00(int a1, char *a2);
// [0x111cd90] (1074 bytes) sub_111CD90
// int sub_111CD90(int result, char *a2, int a3);
// [0x111d1d0] (857 bytes) sub_111D1D0
// int sub_111D1D0(int a1, int a2, int a3, gameswf::ASValue *a4, int *a5);
// [0x111d530] (5379 bytes) sub_111D530
// int sub_111D530(gameswf::ASValue *a1, const gameswf::ASValue *a2, int a3, int a4);
// [0x1122f60] (2668 bytes) void std::__introsort_loop<gameswf::ASValue *,int,gameswf::StandardArraySorter>(gameswf::ASValue *,gameswf::ASValue *,int,gameswf::StandardArraySorter)
// void std::__introsort_loop<gameswf::ASValue *,int,gameswf::StandardArraySorter>( gameswf::ASValue *a1, gameswf::ASValue *a2, int a3, int a4);
// [0x11239d0] (341 bytes) void std::__insertion_sort<gameswf::ASValue *,gameswf::StandardArraySorter>(gameswf::ASValue *,gameswf::ASValue *,gameswf::StandardArraySorter)
// gameswf::ASValue *std::__insertion_sort<gameswf::ASValue *,gameswf::StandardArraySorter>( gameswf::ASValue *a1, gameswf::ASValue *a2, int a3);
// [0x1124640] (3206 bytes) void std::__introsort_loop<gameswf::ASValue *,int,gameswf::CustomArraySorter>(gameswf::ASValue *,gameswf::ASValue *,int,gameswf::CustomArraySorter)
// void std::__introsort_loop<gameswf::ASValue *,int,gameswf::CustomArraySorter>( gameswf::ASValue *a1, gameswf::ASValue *a2, int a3, const gameswf::ASValue *a4, const gameswf::ASValue *a5);
// [0x11252d0] (361 bytes) void std::__insertion_sort<gameswf::ASValue *,gameswf::CustomArraySorter>(gameswf::ASValue *,gameswf::ASValue *,gameswf::CustomArraySorter)
// gameswf::ASValue *std::__insertion_sort<gameswf::ASValue *,gameswf::CustomArraySorter>( gameswf::ASValue *a1, gameswf::ASValue *a2, int a3, int a4);
// [0x112c3a0] (1397 bytes) sub_112C3A0
// int *sub_112C3A0(int **a1, char **a2, gameswf::ASValue *a3);
// [0x112f730] (1397 bytes) sub_112F730
// int *sub_112F730(int **a1, char **a2, gameswf::ASValue *a3);
// [0x1136e90] (187 bytes) sub_1136E90
// void *sub_1136E90(int a1, size_t *a2, int a3, int a4);
// [0x113aa60] (36 bytes) sub_113AA60
// int sub_113AA60(long double a1, gameswf::ASNetStream *a2);
// [0x1146880] (1971 bytes) sub_1146880
// char *sub_1146880( gameswf::hash<gameswf::StringI, gameswf::String, gameswf::stringi_hash_functor<gameswf::StringI>> **a1, char *a2);
// [0x1147050] (2454 bytes) sub_1147050
// char *sub_1147050(int a1, char *s);
// [0x1149720] (88 bytes) sub_1149720
// gameswf **sub_1149720();
// [0x1149b90] (350 bytes) sub_1149B90
// int sub_1149B90();
// [0x1150560] (548 bytes) sub_1150560
// gameswf::RefCounted *sub_1150560(int a1, int a2, int a3, gameswf::RefCounted **a4);
// [0x1151870] (277 bytes) sub_1151870
// int sub_1151870(uint32_t *a1, int a2);
// [0x115ea20] (1675 bytes) sub_115EA20
// int sub_115EA20(int a1);
// [0x1163520] (1135 bytes) void std::__introsort_loop<gameswf::DisplayObjectInfo *,int,gameswf::DistanceSorter>(gameswf::DisplayObjectInfo *,gameswf::DisplayObjectInfo *,int,gameswf::DistanceSorter)
// int std::__introsort_loop<gameswf::DisplayObjectInfo *,int,gameswf::DistanceSorter>( gameswf::RefCounted **a1, gameswf::RefCounted **a2, int a3);
// [0x1163b60] (556 bytes) void std::__insertion_sort<gameswf::DisplayObjectInfo *,gameswf::DistanceSorter>(gameswf::DisplayObjectInfo *,gameswf::DisplayObjectInfo *,gameswf::DistanceSorter)
// gameswf::RefCounted **std::__insertion_sort<gameswf::DisplayObjectInfo *,gameswf::DistanceSorter>( gameswf::RefCounted **a1, gameswf::RefCounted **a2);
// [0x1163d90] (252 bytes) void std::__unguarded_linear_insert<gameswf::DisplayObjectInfo *,gameswf::DistanceSorter>(gameswf::DisplayObjectInfo *,gameswf::DistanceSorter)
// int std::__unguarded_linear_insert<gameswf::DisplayObjectInfo *,gameswf::DistanceSorter>( gameswf::RefCounted **a1);
// [0x11642b0] (193 bytes) sub_11642B0
// int sub_11642B0();
// [0x1164450] (108 bytes) sub_1164450
// char *sub_1164450();
// [0x1166b80] (501 bytes) sub_1166B80
// gameswf::String *sub_1166B80(int *a1, char *a2);
// [0x1168270] (219 bytes) sub_1168270
// int sub_1168270( gameswf::hash<gameswf::String, gameswf::array<gameswf::ASEventDispatcher::Entry>, gameswf::string_hash_functor<gameswf::String>> *a1, const gameswf::String *a2);
// [0x1168930] (2681 bytes) sub_1168930
// int sub_1168930(int a1, int a2);
// [0x11693b0] (819 bytes) sub_11693B0
// int sub_11693B0(char *a1, int a2, int a3, int a4);
// [0x11696f0] (209 bytes) sub_11696F0
// int sub_11696F0(char *a1, int a2, char *a3);
// [0x11697d0] (2541 bytes) sub_11697D0
// int sub_11697D0(char *a1, int a2, char *a3, int a4);
// [0x116b850] (871 bytes) void std::__insertion_sort<gameswf::ASEventDispatcher::Entry *,gameswf::ASEventDispatcher::PrioritySorter>(gameswf::ASEventDispatcher::Entry *,gameswf::ASEventDispatcher::Entry *,gameswf::ASEventDispatcher::PrioritySorter)
// int std::__insertion_sort<gameswf::ASEventDispatcher::Entry *,gameswf::ASEventDispatcher::PrioritySorter>( int a1, int a2);
// [0x116caa0] (607 bytes) void std::__merge_without_buffer<gameswf::ASEventDispatcher::Entry *,int,gameswf::ASEventDispatcher::PrioritySorter>(gameswf::ASEventDispatcher::Entry *,gameswf::ASEventDispatcher::Entry *,gameswf::ASEventDispatcher::Entry *,int,int,gameswf::ASEventDispatcher::PrioritySorter)
// gameswf *std::__merge_without_buffer<gameswf::ASEventDispatcher::Entry *,int,gameswf::ASEventDispatcher::PrioritySorter>( int a1, gameswf *a2, int a3, gameswf *a4, gameswf *a5);
// [0x116cde0] (1559 bytes) void std::__merge_adaptive<gameswf::ASEventDispatcher::Entry *,int,gameswf::ASEventDispatcher::Entry *,gameswf::ASEventDispatcher::PrioritySorter>(gameswf::ASEventDispatcher::Entry *,gameswf::ASEventDispatcher::Entry *,gameswf::ASEventDispatcher::Entry *,int,int,gameswf::ASEventDispatcher::Entry *,int,gameswf::ASEventDispatcher::PrioritySorter)
// int std::__merge_adaptive<gameswf::ASEventDispatcher::Entry *,int,gameswf::ASEventDispatcher::Entry *,gameswf::ASEventDispatcher::PrioritySorter>( int a1, int a2, int a3, int a4, int a5, int a6, int a7);
// [0x1170f88] (1 bytes) nullsub_537
// void nullsub_537();
// [0x1170f98] (1 bytes) nullsub_538
// void nullsub_538();
// [0x1170fa8] (1 bytes) nullsub_539
// void nullsub_539();
// [0x1170fb8] (1 bytes) nullsub_540
// void nullsub_540();
// [0x1170fc8] (1 bytes) nullsub_541
// void nullsub_541();
// [0x1170fd8] (1 bytes) nullsub_542
// void nullsub_542();
// [0x1170fe8] (1 bytes) nullsub_543
// void nullsub_543();
// [0x1170ff0] (9 bytes) __gl_noBeginData(int,void *)
// void __gl_noBeginData();
// [0x1171000] (9 bytes) __gl_noEdgeFlagData(char,void *)
// void __gl_noEdgeFlagData();
// [0x1171010] (9 bytes) __gl_noVertexData(void *,void *)
// void __gl_noVertexData();
// [0x1171020] (9 bytes) __gl_noEndData(void *)
// void __gl_noEndData();
// [0x1171030] (9 bytes) __gl_noErrorData(int,void *)
// void __gl_noErrorData();
// [0x1171040] (9 bytes) __gl_noCombineData(double *,void **,float *,void **,void *)
// void __gl_noCombineData();
// [0x1171050] (255 bytes) gluNewTess(void)
// int gluNewTess();
// [0x1171150] (271 bytes) gluTessProperty(GLUtesselator *,int,double)
// int gluTessProperty(GLUtesselator *a1, int a2, double a3);
// [0x1171260] (164 bytes) gluGetTessProperty(GLUtesselator *,int,double *)
// int gluGetTessProperty(GLUtesselator *a1, int a2, double *a3);
// [0x1171310] (38 bytes) gluTessNormal(GLUtesselator *,double,double,double)
// GLUtesselator *gluTessNormal(GLUtesselator *a1, double a2, double a3, double a4);
// [0x1171340] (447 bytes) gluTessCallback(GLUtesselator *,int,void (*)(void))
// void (*gluTessCallback(GLUtesselator *a1, int a2, void (*a3)()))();
// [0x1171500] (212 bytes) gluTessEndContour(GLUtesselator *)
// int gluTessEndContour(GLUtesselator *a1);
// [0x11715e0] (244 bytes) gluTessBeginPolygon(GLUtesselator *,void *)
// void *gluTessBeginPolygon(GLUtesselator *a1, void *a2);
// [0x11716e0] (236 bytes) gluTessBeginContour(GLUtesselator *)
// int gluTessBeginContour(GLUtesselator *a1);
// [0x11717d0] (1305 bytes) gluTessVertex(GLUtesselator *,double *,void *)
// int gluTessVertex(GLUtesselator *a1, double *a2, void *a3);
// [0x1171cf0] (228 bytes) gluDeleteTess(GLUtesselator *)
// int gluDeleteTess(gameswf **a1);
// [0x1171de0] (1079 bytes) gluTessEndPolygon(GLUtesselator *)
// GLUtesselator *gluTessEndPolygon(GLUtesselator *a1);
// [0x1172220] (64 bytes) gluBeginPolygon(GLUtesselator *)
// int gluBeginPolygon(GLUtesselator *a1);
// [0x1172260] (56 bytes) gluNextContour(GLUtesselator *,int)
// int gluNextContour(GLUtesselator *a1);
// [0x11722a0] (56 bytes) gluEndPolygon(GLUtesselator *)
// GLUtesselator *gluEndPolygon(GLUtesselator *a1);
// [0x11722e0] (630 bytes) __gl_meshTessellateMonoRegion(GLUface *)
// int __gl_meshTessellateMonoRegion(int a1);
// [0x1172560] (86 bytes) __gl_meshTessellateInterior(GLUmesh *)
// int __gl_meshTessellateInterior(int a1);
// [0x11725c0] (68 bytes) __gl_meshDiscardExterior(GLUmesh *)
// gameswf *__gl_meshDiscardExterior(int a1);
// [0x1172610] (183 bytes) __gl_meshSetWindingNumber(GLUmesh *,int,char)
// int __gl_meshSetWindingNumber(int a1, int a2, char a3);
// [0x11726d0] (37 bytes) sub_11726D0
// int sub_11726D0(int a1, int a2, int a3);
// [0x1172700] (9 bytes) sub_1172700
// int sub_1172700();
// [0x1172710] (72 bytes) sub_1172710
// int sub_1172710(int a1, int a2);
// [0x1172760] (39 bytes) sub_1172760
// int sub_1172760(int a1);
// [0x1172790] (21 bytes) sub_1172790
// int sub_1172790(int a1);
// [0x11727b0] (14 bytes) sub_11727B0
// bool sub_11727B0(int a1);
// [0x11727c0] (12 bytes) sub_11727C0
// int sub_11727C0(uint32_t *a1);
// [0x11727d0] (12 bytes) sub_11727D0
// int sub_11727D0(int a1);
// [0x11727e0] (13 bytes) sub_11727E0
// bool sub_11727E0(uint32_t *a1);
// [0x1172980] (69 bytes) sub_1172980
// int sub_1172980(gameswf *a1);
// [0x1172af0] (101 bytes) sub_1172AF0
// size_t sub_1172AF0(void *dest, int a2, uint32_t *a3);
// [0x1172b60] (164 bytes) sub_1172B60
// size_t sub_1172B60(void *a1, size_t n, gameswf::MemBuf *a3);
// [0x1172c10] (70 bytes) sub_1172C10
// int sub_1172C10(gameswf *a1);
// [0x1172c60] (34 bytes) sub_1172C60
// bool sub_1172C60(glf::IOStream *a1);
// [0x1172c90] (46 bytes) sub_1172C90
// int sub_1172C90(FILE *stream);
// [0x1172cc0] (34 bytes) sub_1172CC0
// int sub_1172CC0(FILE *stream);
// [0x1172cf0] (62 bytes) sub_1172CF0
// int sub_1172CF0(FILE *stream);
// [0x1172d30] (84 bytes) sub_1172D30
// int sub_1172D30(int off, FILE *stream);
// [0x1172d90] (58 bytes) sub_1172D90
// size_t sub_1172D90(void *ptr, size_t n, FILE *s);
// [0x1172dd0] (58 bytes) sub_1172DD0
// size_t sub_1172DD0(void *ptr, size_t n, FILE *stream);
// [0x1172e10] (57 bytes) sub_1172E10
// char sub_1172E10(int a1, int *a2);
// [0x1174f60] (36 bytes) sub_1174F60
// gameswf::random::Generator *sub_1174F60();
// [0x11754c0] (212 bytes) sub_11754C0
// int sub_11754C0(uint32_t *a1);
// [0x11755c0] (363 bytes) sub_11755C0
// int sub_11755C0(int a1, int *a2);
// [0x1176330] (406 bytes) sub_1176330
// int sub_1176330(int *a1, char **a2);
// [0x117abd0] (445 bytes) sub_117ABD0
// int sub_117ABD0( gameswf::hash<gameswf::StringPointer, bool, gameswf::string_pointer_hash_functor<gameswf::StringPointer>> *a1, int a2, uint8_t *a3);
