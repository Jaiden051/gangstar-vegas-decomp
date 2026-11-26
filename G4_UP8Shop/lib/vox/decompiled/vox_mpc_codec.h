#pragma once
// ============================================================================
// G4_UP8Shop/lib/vox/decompiled/vox_mpc_codec.h
// Library: vox | Module: vox_mpc_codec
// Binary Address Span: 0xfe1fb0 .. 0x1046990 (28 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xfe1fb0] (72 bytes) mpc_demux_pos
// int mpc_demux_pos(uint32_t *a1);
// [0xfe2000] (69 bytes) mpc_demux_chap_nb
// int mpc_demux_chap_nb(uint32_t *a1);
// [0xfe2050] (127 bytes) mpc_demux_chap
// int mpc_demux_chap(uint32_t *a1, int a2);
// [0xfe20d0] (4771 bytes) mpc_demux_init
// uint32_t *mpc_demux_init(int (**a1)(uint32_t, int, int));
// [0xfe3380] (87 bytes) mpc_demux_exit
// int mpc_demux_exit(uint32_t *a1);
// [0xfe33e0] (145 bytes) mpc_demux_get_info
// unsigned int mpc_demux_get_info(int a1, uint8_t *a2);
// [0xfe3480] (2041 bytes) mpc_demux_decode
// int mpc_demux_decode(uint32_t *a1, int a2);
// [0xfe3c80] (2894 bytes) mpc_demux_seek_sample
// int mpc_demux_seek_sample( uint32_t *a1, int64_t a2, int a3, int a4, int64_t a5, int a6, unsigned int a7, int a8, unsigned int a9, int64_t a10, int a11, int a12, char s1, int a14);
// [0xfe47d0] (83 bytes) mpc_demux_seek_second
// 0xfe47d0 mpc_demux_seek_second
// [0xfe4830] (406 bytes) mpc_set_replay_level
// int mpc_set_replay_level(int a1, float a2, uint8_t a3, char a4, uint8_t a5);
// [0xfe49d0] (125 bytes) mpc_decoder_scale_output
// int64_t mpc_decoder_scale_output(int a1, double a2);
// [0xfe4a50] (46 bytes) mpc_decoder_init_quant
// int64_t mpc_decoder_init_quant(int a1, double a2);
// [0xfe58e0] (112 bytes) mpc_streaminfo_get_length
// long double mpc_streaminfo_get_length(int a1);
// [0xfe5950] (17 bytes) mpc_streaminfo_get_length_samples
// int64_t mpc_streaminfo_get_length_samples(int a1);
// [0x10411f0] (225 bytes) mpc_bits_golomb_dec
// int mpc_bits_golomb_dec(uint8_t **a1, unsigned int a2);
// [0x10412e0] (281 bytes) mpc_bits_log_dec
// unsigned int mpc_bits_log_dec(int *a1, int a2);
// [0x1041400] (160 bytes) mpc_bits_get_size
// int mpc_bits_get_size(uint8_t **a1, uint64_t *a2);
// [0x10414a0] (214 bytes) mpc_bits_get_block
// int mpc_bits_get_block(int a1, int a2);
// [0x1041580] (222 bytes) mpc_decoder_reset_scf
// unsigned int mpc_decoder_reset_scf(uint16_t *a1, uint8_t a2);
// [0x1041660] (100 bytes) mpc_decoder_setup
// int64_t mpc_decoder_setup(void *s);
// [0x10416d0] (187 bytes) mpc_decoder_set_streaminfo
// int mpc_decoder_set_streaminfo(uint32_t *a1, int a2);
// [0x1041790] (120 bytes) mpc_decoder_init
// void *mpc_decoder_init(int a1);
// [0x1041810] (34 bytes) mpc_decoder_exit
// int mpc_decoder_exit(int a1);
// [0x1041840] (5287 bytes) mpc_decoder_read_bitstream_sv7
// int16_t mpc_decoder_read_bitstream_sv7(int a1, uint8_t **a2);
// [0x1042cf0] (6906 bytes) mpc_decoder_read_bitstream_sv8
// int mpc_decoder_read_bitstream_sv8(uint32_t *a1, int *a2, char a3);
// [0x10447f0] (3247 bytes) mpc_decoder_decode_frame
// int mpc_decoder_decode_frame(__m128 a1, int a2, int *a3, int a4);
// [0x10465e0] (937 bytes) mpc_decoder_synthese_filter_float
// int mpc_decoder_synthese_filter_float(float *a1, float *a2, int a3);
// [0x1046990] (105 bytes) mpc_random_int
// int mpc_random_int(int a1);
