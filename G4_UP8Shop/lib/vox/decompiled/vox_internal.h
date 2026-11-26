#pragma once
// ============================================================================
// G4_UP8Shop/lib/vox/decompiled/vox_internal.h
// Library: vox | Module: vox_internal
// Binary Address Span: 0xfb9260 .. 0x10454a0 (98 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xfb9260] (831 bytes) sub_FB9260
// int sub_FB9260(uint32_t *a1, int a2);
// [0xfb95a0] (314 bytes) sub_FB95A0
// int (*sub_FB95A0(uint32_t *a1, int a2))(int);
// [0xfb96e0] (601 bytes) sub_FB96E0
// int sub_FB96E0(uint32_t *a1);
// [0xfb9940] (1292 bytes) sub_FB9940
// int sub_FB9940(uint32_t *a1, int a2);
// [0xfba0d0] (1200 bytes) sub_FBA0D0
// int sub_FBA0D0(int a1);
// [0xfba580] (301 bytes) sub_FBA580
// int sub_FBA580(int a1, int a2, uint32_t *a3, int a4, int a5);
// [0xfba6b0] (173 bytes) sub_FBA6B0
// int sub_FBA6B0(int a1, int a2, uint32_t *a3, int a4, int a5);
// [0xfba760] (348 bytes) sub_FBA760
// int sub_FBA760(int a1, int a2, uint32_t *a3, int a4, int a5);
// [0xfba8c0] (123 bytes) sub_FBA8C0
// int sub_FBA8C0(int a1, int a2, int *a3, int a4, int a5);
// [0xfba940] (163 bytes) sub_FBA940
// int sub_FBA940(int a1, int a2, int a3, int a4, int a5);
// [0xfba9f8] (1 bytes) nullsub_535
// void nullsub_535();
// [0xfbac60] (5242 bytes) sub_FBAC60
// int sub_FBAC60(int a1);
// [0xfbc0e0] (1112 bytes) sub_FBC0E0
// int sub_FBC0E0(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
// [0xfbc540] (2288 bytes) sub_FBC540
// int sub_FBC540(int a1, int a2, int a3, __m128i *a4, int a5, int a6, int a7);
// [0xfbcf20] (533 bytes) sub_FBCF20
// int sub_FBCF20(uint32_t *a1, int a2);
// [0xfbd140] (439 bytes) sub_FBD140
// int sub_FBD140(uint32_t *a1);
// [0xfbd300] (3016 bytes) sub_FBD300
// int sub_FBD300(uint32_t *a1, int a2);
// [0xfbe2b0] (725 bytes) sub_FBE2B0
// int sub_FBE2B0(int a1, char a2);
// [0xfbe890] (278 bytes) sub_FBE890
// int sub_FBE890(int a1);
// [0xfbea70] (505 bytes) sub_FBEA70
// void sub_FBEA70(int a1);
// [0xfbec70] (9 bytes) sub_FBEC70
// int sub_FBEC70();
// [0xfbec80] (649 bytes) sub_FBEC80
// int sub_FBEC80(uint32_t *a1);
// [0xfbef10] (2107 bytes) sub_FBEF10
// int sub_FBEF10(uint32_t *a1, int a2);
// [0xfbf750] (524 bytes) sub_FBF750
// int sub_FBF750(int a1, int a2);
// [0xfbf960] (117 bytes) sub_FBF960
// uint32_t *sub_FBF960(uint32_t *a1);
// [0xfbf9e0] (852 bytes) sub_FBF9E0
// int sub_FBF9E0(uint32_t *a1, int a2);
// [0xfc0010] (317 bytes) sub_FC0010
// int sub_FC0010(uint32_t *a1, uint32_t *a2, int a3, int a4, int a5);
// [0xfc0150] (163 bytes) sub_FC0150
// char *sub_FC0150(int a1, int a2, int a3, char *a4, int a5);
// [0xfc0200] (112 bytes) sub_FC0200
// uint8_t *sub_FC0200(int a1, uint32_t *a2, int a3, int a4, int a5);
// [0xfc0270] (361 bytes) sub_FC0270
// int sub_FC0270(uint32_t *a1, uint32_t *a2, int a3, int a4, int a5);
// [0xfc03e8] (1 bytes) nullsub_536
// void nullsub_536();
// [0xfc03f0] (79 bytes) sub_FC03F0
// void *sub_FC03F0(int a1, int *a2, int a3, int a4, int a5);
// [0xfc0820] (4423 bytes) sub_FC0820
// int sub_FC0820(uint32_t *a1);
// [0xfc1f00] (393 bytes) sub_FC1F00
// int sub_FC1F00(uint32_t *a1);
// [0xfc2330] (1574 bytes) sub_FC2330
// int sub_FC2330(uint32_t *a1, int a2);
// [0xfc29f0] (157 bytes) sub_FC29F0
// int sub_FC29F0(uint32_t *a1, int a2, int a3, int a4);
// [0xfc2a90] (961 bytes) sub_FC2A90
// unsigned int sub_FC2A90(uint32_t *a1, int a2, unsigned int *a3, unsigned int a4);
// [0xfc2e60] (73 bytes) sub_FC2E60
// int sub_FC2E60(int a1, int a2, int a3, int a4);
// [0xfc2eb0] (1056 bytes) sub_FC2EB0
// unsigned int sub_FC2EB0(uint32_t *a1, int a2);
// [0xfcf7c0] (425 bytes) std::_Rb_tree<int,std::pair<int const,vox::vs::VSStreamBuffer>,std::_Select1st<std::pair<int const,vox::vs::VSStreamBuffer>>,vox::vs::VSIntComp,vox::SAllocator<std::pair<int const,vox::vs::VSStreamBuffer>,(vox::VoxMemHint)0>>::_M_erase(std::_Rb_tree_node<std::pair<int const,vox::vs::VSStreamBuffer>> *)
// void std::_Rb_tree<int,std::pair<int const,vox::vs::VSStreamBuffer>,std::_Select1st<std::pair<int const,vox::vs::VSStreamBuffer>>,vox::vs::VSIntComp,vox::SAllocator<std::pair<int const,vox::vs::VSStreamBuffer>,(vox::VoxMemHint)0>>::_M_erase(;
// [0xfcf9a0] (2506 bytes) sub_FCF9A0
// int *sub_FCF9A0(int *a1, uint32_t *a2, int a3, int a4);
// [0xfd31e0] (425 bytes) std::_Rb_tree<char *,std::pair<char * const,vox::AmbienceElementParams *>,std::_Select1st<std::pair<char * const,vox::AmbienceElementParams *>>,vox::c8stringcompare,vox::SAllocator<std::pair<char * const,vox::AmbienceElementParams *>,(vox::VoxMemHint)0>>::_M_erase(std::_Rb_tree_node<std::pair<char * const,vox::AmbienceElementParams *>> *)
// uint32_t *std::_Rb_tree<char *,std::pair<char * const,vox::AmbienceElementParams *>,std::_Select1st<std::pair<char * const,vox::AmbienceElementParams *>>,vox::c8stringcompare,vox::SAllocator<std::pair<char * const,vox::AmbienceElementParams *>,(vox::VoxMemHint)0>>::_M_erase(;
// [0xfd3390] (425 bytes) std::_Rb_tree<char *,std::pair<char * const,vox::AmbienceFileParams *>,std::_Select1st<std::pair<char * const,vox::AmbienceFileParams *>>,vox::c8stringcompare,vox::SAllocator<std::pair<char * const,vox::AmbienceFileParams *>,(vox::VoxMemHint)0>>::_M_erase(std::_Rb_tree_node<std::pair<char * const,vox::AmbienceFileParams *>> *)
// uint32_t *std::_Rb_tree<char *,std::pair<char * const,vox::AmbienceFileParams *>,std::_Select1st<std::pair<char * const,vox::AmbienceFileParams *>>,vox::c8stringcompare,vox::SAllocator<std::pair<char * const,vox::AmbienceFileParams *>,(vox::VoxMemHint)0>>::_M_erase(;
// [0xfd3540] (2012 bytes) std::_Rb_tree<char *,std::pair<char * const,vox::AmbienceFileParams *>,std::_Select1st<std::pair<char * const,vox::AmbienceFileParams *>>,vox::c8stringcompare,vox::SAllocator<std::pair<char * const,vox::AmbienceFileParams *>,(vox::VoxMemHint)0>>::_M_insert_unique_(std::_Rb_tree_const_iterator<std::pair<char * const,vox::AmbienceFileParams *>>,std::pair<char * const,vox::AmbienceFileParams *> const&)
// int *std::_Rb_tree<char *,std::pair<char * const,vox::AmbienceFileParams *>,std::_Select1st<std::pair<char * const,vox::AmbienceFileParams *>>,vox::c8stringcompare,vox::SAllocator<std::pair<char * const,vox::AmbienceFileParams *>,(vox::VoxMemHint)0>>::_M_insert_unique_(;
// [0xfd3d20] (48 bytes) GetTimeDT(double,double)
// long double GetTimeDT(double a1, double a2);
// [0xfd3d50] (76 bytes) _GetTime(void)
// long double _GetTime();
// [0xfdfab0] (114 bytes) mpc_tell(mpc_reader_t *)
// int mpc_tell(int a1);
// [0xfdfb30] (130 bytes) mpc_read(mpc_reader_t *,void *,int)
// int mpc_read(int a1, int a2, int a3);
// [0xfdfbc0] (135 bytes) mpc_seek(mpc_reader_t *,int)
// int mpc_seek(int a1, int a2);
// [0xfdfc50] (114 bytes) mpc_getsize(mpc_reader_t *)
// int mpc_getsize(int a1);
// [0xfdfcd0] (86 bytes) mpc_canseek(mpc_reader_t *)
// int mpc_canseek();
// [0xfe0d50] (829 bytes) sub_FE0D50
// int sub_FE0D50(int a1);
// [0xfe1090] (3864 bytes) sub_FE1090
// int sub_FE1090(uint32_t *a1);
// [0xfe4a80] (1875 bytes) streaminfo_read_header_sv7
// int streaminfo_read_header_sv7(int a1, uint8_t **a2);
// [0xfe51e0] (276 bytes) streaminfo_gain
// uint8_t *streaminfo_gain(uint16_t *a1, uint32_t *a2);
// [0xfe5300] (760 bytes) streaminfo_read_header_sv8
// int streaminfo_read_header_sv8(int a1, int *a2, int a3);
// [0xfe5600] (731 bytes) streaminfo_encoder_info
// int streaminfo_encoder_info(int a1, uint32_t *a2);
// [0xfe5cb0] (412 bytes) sub_FE5CB0
// uint32_t **sub_FE5CB0(uint32_t **result);
// [0xfe9de0] (135 bytes) fgetc(vox::StreamCursorInterface *)
// int fgetc(vox::StreamCursorInterface *a1);
// [0xfe9e70] (143 bytes) fread(void *,unsigned int,unsigned int,vox::StreamCursorInterface *)
// unsigned int fread(void *a1, unsigned int a2, unsigned int a3, vox::StreamCursorInterface *a4);
// [0xfe9f00] (119 bytes) ftell(vox::StreamCursorInterface *)
// int ftell(vox::StreamCursorInterface *a1);
// [0xfe9f80] (135 bytes) fseek(vox::StreamCursorInterface *,int,int)
// int fseek(vox::StreamCursorInterface *a1, int a2, int a3);
// [0xfea010] (9 bytes) fclose(vox::StreamCursorInterface *)
// int fclose();
// [0xfef9a0] (911 bytes) std::_Rb_tree<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>>,std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int>>,vox::StringCompare,vox::SAllocator<std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int>,(vox::VoxMemHint)0>>::_M_erase(std::_Rb_tree_node<std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int>> *)
// uint32_t *std::_Rb_tree<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>>,std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int>>,vox::StringCompare,vox::SAllocator<std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int>,(vox::VoxMemHint)0>>::_M_erase(;
// [0xfefd30] (1330 bytes) std::_Rb_tree<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>>,std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int>>,vox::StringCompare,vox::SAllocator<std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int>,(vox::VoxMemHint)0>>::_M_insert_unique(std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int> const&)
// int std::_Rb_tree<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>>,std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int>>,vox::StringCompare,vox::SAllocator<std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int>,(vox::VoxMemHint)0>>::_M_insert_unique(;
// [0xff0270] (3856 bytes) std::_Rb_tree<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>>,std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int>>,vox::StringCompare,vox::SAllocator<std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int>,(vox::VoxMemHint)0>>::_M_insert_unique_(std::_Rb_tree_const_iterator<std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int>>,std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int> const&)
// int *std::_Rb_tree<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>>,std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int>>,vox::StringCompare,vox::SAllocator<std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,int>,(vox::VoxMemHint)0>>::_M_insert_unique_(;
// [0xffbba0] (425 bytes) std::_Rb_tree<int,std::pair<int const,vox::MpcSegmentDecoder *>,std::_Select1st<std::pair<int const,vox::MpcSegmentDecoder *>>,vox::SegmentIdCompare,vox::SAllocator<std::pair<int const,vox::MpcSegmentDecoder *>,(vox::VoxMemHint)0>>::_M_erase(std::_Rb_tree_node<std::pair<int const,vox::MpcSegmentDecoder *>> *)
// uint32_t *std::_Rb_tree<int,std::pair<int const,vox::MpcSegmentDecoder *>,std::_Select1st<std::pair<int const,vox::MpcSegmentDecoder *>>,vox::SegmentIdCompare,vox::SAllocator<std::pair<int const,vox::MpcSegmentDecoder *>,(vox::VoxMemHint)0>>::_M_erase(;
// [0xffe9c0] (750 bytes) sub_FFE9C0
// int sub_FFE9C0(int a1, char *src, uint32_t *a3);
// [0xfffbe0] (352 bytes) sub_FFFBE0
// int sub_FFFBE0(int a1, const char *a2, float *a3);
// [0x1008650] (74 bytes) sub_1008650
// int *sub_1008650();
// [0x100d600] (66 bytes) sub_100D600
// uint32_t *sub_100D600();
// [0x100f0e0] (711 bytes) void std::vector<char,vox::SAllocator<char,(vox::VoxMemHint)0>>::insert<__gnu_cxx::__normal_iterator<char *,std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>>>>(__gnu_cxx::__normal_iterator<char *,std::vector<char,vox::SAllocator<char,(vox::VoxMemHint)0>>>,__gnu_cxx::__normal_iterator<char *,std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>>>,__gnu_cxx::__normal_iterator<char *,std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>>>)
// void std::vector<char,vox::SAllocator<char,(vox::VoxMemHint)0>>::insert<__gnu_cxx::__normal_iterator<char *,std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>>>>(;
// [0x100f3b0] (719 bytes) void std::vector<char,vox::SAllocator<char,(vox::VoxMemHint)0>>::_M_range_insert<char const*>(__gnu_cxx::__normal_iterator<char *,std::vector<char,vox::SAllocator<char,(vox::VoxMemHint)0>>>,char const*,char const*,std::forward_iterator_tag)
// void std::vector<char,vox::SAllocator<char,(vox::VoxMemHint)0>>::_M_range_insert<char const*>(;
// [0x100f680] (523 bytes) __gnu_cxx::__normal_iterator<vox::VoxFolderArchiveValue *,std::vector<vox::VoxFolderArchiveValue,vox::SAllocator<vox::VoxFolderArchiveValue,(vox::VoxMemHint)0>>> std::__unguarded_partition_pivot<__gnu_cxx::__normal_iterator<vox::VoxFolderArchiveValue *,std::vector<vox::VoxFolderArchiveValue,vox::SAllocator<vox::VoxFolderArchiveValue,(vox::VoxMemHint)0>>>>(__gnu_cxx::__normal_iterator<vox::VoxFolderArchiveValue *,std::vector<vox::VoxFolderArchiveValue,vox::SAllocator<vox::VoxFolderArchiveValue,(vox::VoxMemHint)0>>>,__gnu_cxx::__normal_iterator<vox::VoxFolderArchiveValue *,std::vector<vox::VoxFolderArchiveValue,vox::SAllocator<vox::VoxFolderArchiveValue,(vox::VoxMemHint)0>>>)
// unsigned int **std::__unguarded_partition_pivot<__gnu_cxx::__normal_iterator<vox::VoxFolderArchiveValue *,std::vector<vox::VoxFolderArchiveValue,vox::SAllocator<vox::VoxFolderArchiveValue,(vox::VoxMemHint)0>>>>(;
// [0x100f890] (6977 bytes) void std::__introsort_loop<__gnu_cxx::__normal_iterator<vox::VoxFolderArchiveValue *,std::vector<vox::VoxFolderArchiveValue,vox::SAllocator<vox::VoxFolderArchiveValue,(vox::VoxMemHint)0>>>,int>(__gnu_cxx::__normal_iterator<vox::VoxFolderArchiveValue *,std::vector<vox::VoxFolderArchiveValue,vox::SAllocator<vox::VoxFolderArchiveValue,(vox::VoxMemHint)0>>>,__gnu_cxx::__normal_iterator<vox::VoxFolderArchiveValue *,std::vector<vox::VoxFolderArchiveValue,vox::SAllocator<vox::VoxFolderArchiveValue,(vox::VoxMemHint)0>>>,int)
// int std::__introsort_loop<__gnu_cxx::__normal_iterator<vox::VoxFolderArchiveValue *,std::vector<vox::VoxFolderArchiveValue,vox::SAllocator<vox::VoxFolderArchiveValue,(vox::VoxMemHint)0>>>,int>(;
// [0x10117f0] (1949 bytes) sub_10117F0
// uint32_t *sub_10117F0(uint32_t *a1, int a2, int a3, int a4, int a5);
// [0x1011f90] (3228 bytes) sub_1011F90
// int sub_1011F90(uint32_t *a1, uint32_t *a2);
// [0x1015d50] (564 bytes) std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>>::operator=(char const*)
// void **std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>>::operator=(;
// [0x1015f90] (2178 bytes) std::_Rb_tree<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>>,std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,vox::SZipFileEntry>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,vox::SZipFileEntry>>,vox::StringComp,vox::SAllocator<std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,vox::SZipFileEntry>,(vox::VoxMemHint)0>>::_M_erase(std::_Rb_tree_node<std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,vox::SZipFileEntry>> *)
// uint32_t *std::_Rb_tree<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>>,std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,vox::SZipFileEntry>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,vox::SZipFileEntry>>,vox::StringComp,vox::SAllocator<std::pair<std::basic_string<char,std::char_traits<char>,vox::SAllocator<char,(vox::VoxMemHint)0>> const,vox::SZipFileEntry>,(vox::VoxMemHint)0>>::_M_erase(;
// [0x1016820] (58 bytes) VoxAllocInternal(unsigned int,char const*,char const*,int)
// int VoxAllocInternal(size_t a1, const char *a2, const char *a3, int a4);
// [0x1016860] (34 bytes) VoxAllocInternal(unsigned int)
// int VoxAllocInternal(size_t a1);
// [0x1016890] (42 bytes) VoxAllocInternal(unsigned int,vox::VoxMemHint)
// int VoxAllocInternal(size_t a1);
// [0x10168c0] (66 bytes) VoxAllocInternal(unsigned int,vox::VoxMemHint,char const*,char const*,int)
// int VoxAllocInternal(size_t a1, int a2, int a3, int a4, int a5);
// [0x1016910] (34 bytes) VoxFreeInternal(void *)
// int VoxFreeInternal(void *a1);
// [0x1016940] (58 bytes) VoxAlloc_c
// int VoxAlloc_c(size_t a1, int a2, int a3, int a4);
// [0x1016980] (34 bytes) VoxFree_c
// int VoxFree_c(int a1);
// [0x1016f20] (6972 bytes) sub_1016F20
// int sub_1016F20(unsigned int *a1, unsigned int *a2, int a3);
// [0x1020ab0] (785 bytes) std::vector<vox::SoundXMLDef,vox::SAllocator<vox::SoundXMLDef,(vox::VoxMemHint)0>>::operator=(std::vector<vox::SoundXMLDef,vox::SAllocator<vox::SoundXMLDef,(vox::VoxMemHint)0>> const&)
// std::vector<vox::SoundXMLDef, vox::SAllocator<vox::SoundXMLDef, (vox::VoxMemHint)0>> *std::vector<vox::SoundXMLDef,vox::SAllocator<vox::SoundXMLDef,(vox::VoxMemHint)0>>::operator=(;
// [0x10211d0] (415 bytes) sub_10211D0
// size_t sub_10211D0(int *a1, uint32_t *a2);
// [0x1021370] (180 bytes) sub_1021370
// int sub_1021370(int a1, int a2);
// [0x1021430] (425 bytes) sub_1021430
// int sub_1021430(int a1, int a2);
// [0x10381f0] (256 bytes) std::vector<unsigned char *,vox::SAllocator<unsigned char *,(vox::VoxMemHint)0>>::reserve(unsigned int)
// unsigned int std::vector<unsigned char *,vox::SAllocator<unsigned char *,(vox::VoxMemHint)0>>::reserve(;
// [0x10382f0] (425 bytes) std::_Rb_tree<long long,std::pair<long long const,vox::Handlable *>,std::_Select1st<std::pair<long long const,vox::Handlable *>>,vox::HandleIdCompStruct,vox::SAllocator<std::pair<long long const,vox::Handlable *>,(vox::VoxMemHint)0>>::_M_erase(std::_Rb_tree_node<std::pair<long long const,vox::Handlable *>> *)
// void std::_Rb_tree<long long,std::pair<long long const,vox::Handlable *>,std::_Select1st<std::pair<long long const,vox::Handlable *>>,vox::HandleIdCompStruct,vox::SAllocator<std::pair<long long const,vox::Handlable *>,(vox::VoxMemHint)0>>::_M_erase(;
// [0x10384a0] (605 bytes) sub_10384A0
// int sub_10384A0(int a1, char *a2, int *a3);
// [0x103e600] (657 bytes) sub_103E600
// int sub_103E600(int a1, uint32_t *a2, int a3);
// [0x103fb60] (983 bytes) std::_Rb_tree<std::string,std::pair<std::string const,unsigned long long>,std::_Select1st<std::pair<std::string const,unsigned long long>>,std::less<std::string>,vox::SAllocator<std::pair<std::string const,unsigned long long>,(vox::VoxMemHint)0>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,unsigned long long>> *)
// uint32_t *std::_Rb_tree<std::string,std::pair<std::string const,unsigned long long>,std::_Select1st<std::pair<std::string const,unsigned long long>>,std::less<std::string>,vox::SAllocator<std::pair<std::string const,unsigned long long>,(vox::VoxMemHint)0>>::_M_erase(;
// [0x10410e0] (265 bytes) crc32mpc
// int crc32mpc(int a1, int a2);
// [0x10454a0] (4403 bytes) sub_10454A0
// int *sub_10454A0(float *a1, float *a2);
