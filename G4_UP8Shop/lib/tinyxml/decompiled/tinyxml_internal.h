#pragma once
// ============================================================================
// G4_UP8Shop/lib/tinyxml/decompiled/tinyxml_internal.h
// Library: tinyxml | Module: tinyxml_internal
// Binary Address Span: 0x1046a00 .. 0x104f160 (41 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1046a00] (16 bytes) AdpcmState::AdpcmState(void)
// void AdpcmState::AdpcmState(AdpcmState *this);
// [0x1046a10] (9 bytes) AdpcmState::~AdpcmState()
// void AdpcmState::~AdpcmState();
// [0x1046ac0] (86 bytes) sub_1046AC0
// int sub_1046AC0(int a1);
// [0x1046b20] (51 bytes) sub_1046B20
// int sub_1046B20(uint32_t *a1, uint32_t *a2);
// [0x1046b60] (53 bytes) point_compare(void const*,void const*)
// int point_compare(uint16_t *a1, uint16_t *a2);
// [0x1046ba0] (426 bytes) sub_1046BA0
// int sub_1046BA0(int a1, int a2, int a3, int a4, float *a5);
// [0x1046d50] (470 bytes) sub_1046D50
// int sub_1046D50(int a1, int a2, int a3, int a4, float *a5, int a6);
// [0x1046f30] (144 bytes) sub_1046F30
// int sub_1046F30(uint32_t *a1, int a2);
// [0x1046fc0] (175 bytes) sub_1046FC0
// int sub_1046FC0(int a1);
// [0x1047070] (470 bytes) sub_1047070
// int sub_1047070(int *a1, int a2, int a3, int a4);
// [0x1047250] (559 bytes) sub_1047250
// int sub_1047250(int result, int a2, int a3, int a4, int a5, int a6, int a7);
// [0x1047480] (781 bytes) sub_1047480
// int sub_1047480(int result, int a2, int a3, int a4, int a5, int a6);
// [0x1047790] (108 bytes) sub_1047790
// int sub_1047790(int a1);
// [0x1047800] (1535 bytes) sub_1047800
// int sub_1047800(int *a1);
// [0x1047e00] (387 bytes) sub_1047E00
// int sub_1047E00(int a1);
// [0x1047f90] (2820 bytes) sub_1047F90
// int sub_1047F90(int a1);
// [0x1048aa0] (444 bytes) sub_1048AA0
// int sub_1048AA0(int a1);
// [0x1048c60] (1030 bytes) sub_1048C60
// int sub_1048C60(int a1, int a2);
// [0x1049070] (398 bytes) sub_1049070
// int sub_1049070(int a1);
// [0x1049200] (698 bytes) sub_1049200
// int sub_1049200(int a1, int a2, int a3);
// [0x10494c0] (1955 bytes) sub_10494C0
// int sub_10494C0(int a1, int *a2, int a3, int *a4, int *a5, int *a6, int *a7);
// [0x1049c70] (588 bytes) sub_1049C70
// unsigned int sub_1049C70(int a1);
// [0x1049ec0] (6317 bytes) sub_1049EC0
// int sub_1049EC0(uint32_t *a1, int *a2, int a3, int a4, int a5, uint8_t *a6);
// [0x104b770] (11481 bytes) sub_104B770
// int sub_104B770( int a1, uint32_t *a2, uint8_t *a3, uint8_t a4, int a5, int a6, int a7, uint32_t *a8);
// [0x104e450] (12 bytes) get_stb_vorbis_struct_size(void)
// int get_stb_vorbis_struct_size();
// [0x104e460] (34 bytes) stb_vorbis_get_stream_offset(stb_vorbis *)
// int stb_vorbis_get_stream_offset(int a1);
// [0x104e490] (14 bytes) stb_vorbis_get_channel(stb_vorbis *)
// int stb_vorbis_get_channel(int a1);
// [0x104e4a0] (30 bytes) stb_vorbis_get_previous_window(stb_vorbis *,int)
// int stb_vorbis_get_previous_window(int a1, int a2);
// [0x104e4c0] (30 bytes) stb_vorbis_get_buffer(stb_vorbis *,int)
// int stb_vorbis_get_buffer(int a1, int a2);
// [0x104e4e0] (20 bytes) stb_vorbis_set_stream(stb_vorbis *,vox::StreamCursorInterface *)
// int stb_vorbis_set_stream(int a1, int a2);
// [0x104e500] (17 bytes) stb_vorbis_get_blocksize_1(stb_vorbis *)
// int stb_vorbis_get_blocksize_1(int a1);
// [0x104e520] (40 bytes) stb_vorbis_copy(stb_vorbis *,stb_vorbis *)
// void *stb_vorbis_copy(void *a1, const void *a2);
// [0x104e550] (296 bytes) dct_iv_slow(float *,int)
// int dct_iv_slow(float *src, int a2);
// [0x104e680] (974 bytes) inverse_mdct_slow(float *,int,stb_vorbis *,int)
// int inverse_mdct_slow(char *src, int a2);
// [0x104ea50] (92 bytes) stb_vorbis_close(stb_vorbis *)
// void stb_vorbis_close(int *a1);
// [0x104eab0] (26 bytes) stb_vorbis_get_sample_offset(stb_vorbis *)
// int stb_vorbis_get_sample_offset(int a1);
// [0x104ead0] (50 bytes) stb_vorbis_get_info(stb_vorbis *)
// uint32_t *stb_vorbis_get_info(uint32_t *a1, uint32_t *a2);
// [0x104eb10] (17 bytes) stb_vorbis_get_error(stb_vorbis *)
// int stb_vorbis_get_error(int a1);
// [0x104eb30] (83 bytes) stb_vorbis_get_file_offset(stb_vorbis *)
// int stb_vorbis_get_file_offset(int a1);
// [0x104eb90] (1474 bytes) sub_104EB90
// int sub_104EB90(int a1, int *a2, uint32_t *a3);
// [0x104f160] (8507 bytes) sub_104F160
// int sub_104F160(int a1);
