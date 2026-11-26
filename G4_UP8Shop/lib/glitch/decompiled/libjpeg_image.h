#pragma once
// ============================================================================
// G4_UP8Shop/lib/glitch/decompiled/libjpeg_image.h
// Library: glitch | Module: libjpeg_image
// Binary Address Span: 0xf82f30 .. 0xfc86b0 (91 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xf82f30] (416 bytes) jpeg_CreateCompress
// int jpeg_CreateCompress(uint32_t *a1, int a2, int a3);
// [0xf830d0] (34 bytes) jpeg_destroy_compress
// int jpeg_destroy_compress(int a1);
// [0xf83100] (34 bytes) jpeg_abort_compress
// int jpeg_abort_compress(int a1);
// [0xf83130] (171 bytes) jpeg_suppress_tables
// int jpeg_suppress_tables(uint32_t *a1, char a2);
// [0xf831e0] (298 bytes) jpeg_finish_compress
// int jpeg_finish_compress(uint32_t *a1);
// [0xf83310] (149 bytes) jpeg_write_marker
// int jpeg_write_marker(uint32_t *a1, int a2, uint8_t *a3, int a4);
// [0xf833b0] (88 bytes) jpeg_write_m_header
// int jpeg_write_m_header(uint32_t *a1, int a2, int a3);
// [0xf83410] (33 bytes) jpeg_write_m_byte
// int jpeg_write_m_byte(int a1, int a2);
// [0xf83440] (104 bytes) jpeg_write_tables
// int jpeg_write_tables(uint32_t *a1);
// [0xf834b0] (162 bytes) jpeg_start_compress
// int jpeg_start_compress(uint32_t *a1, char a2);
// [0xf83560] (216 bytes) jpeg_write_scanlines
// int jpeg_write_scanlines(uint32_t *a1, int a2, unsigned int a3);
// [0xf83640] (236 bytes) jpeg_write_raw_data
// unsigned int jpeg_write_raw_data(uint32_t *a1, int a2, unsigned int a3);
// [0xf83730] (245 bytes) jinit_compress_master
// int jinit_compress_master(int a1);
// [0xf83980] (201 bytes) jinit_c_main_controller
// int (*jinit_c_main_controller(int a1, char a2))(int a1, int a2);
// [0xf86100] (127 bytes) jinit_marker_writer
// int (**jinit_marker_writer(int a1))(int a1);
// [0xf879c0] (853 bytes) jinit_c_master_control
// int jinit_c_master_control(int a1, char a2);
// [0xf87d20] (79 bytes) jpeg_abort
// int jpeg_abort(int a1);
// [0xf87d70] (42 bytes) jpeg_destroy
// int jpeg_destroy(int a1);
// [0xf87da0] (44 bytes) jpeg_alloc_quant_table
// int jpeg_alloc_quant_table(int a1);
// [0xf87dd0] (44 bytes) jpeg_alloc_huff_table
// int jpeg_alloc_huff_table(int a1);
// [0xf87e00] (342 bytes) jpeg_add_quant_table
// int jpeg_add_quant_table(uint32_t *a1, unsigned int a2, int a3, int a4, char a5);
// [0xf87f60] (133 bytes) jpeg_set_linear_quality
// int jpeg_set_linear_quality(uint32_t *a1, int a2, char a3);
// [0xf87ff0] (55 bytes) jpeg_quality_scaling
// int16_t jpeg_quality_scaling(int a1);
// [0xf88030] (79 bytes) jpeg_set_quality
// int jpeg_set_quality(uint32_t *a1, int a2, char a3);
// [0xf88080] (1161 bytes) jpeg_set_colorspace
// uint32_t *jpeg_set_colorspace(int a1, int a2);
// [0xf88510] (182 bytes) jpeg_default_colorspace
// uint32_t *jpeg_default_colorspace(uint32_t *a1);
// [0xf885d0] (1012 bytes) jpeg_set_defaults
// uint32_t *jpeg_set_defaults(int a1);
// [0xf889d0] (1706 bytes) jpeg_simple_progression
// int *jpeg_simple_progression(uint32_t *a1);
// [0xf8d890] (141 bytes) jinit_phuff_encoder
// int (**jinit_phuff_encoder(int a1))(int a1, char a2);
// [0xf8df10] (932 bytes) jinit_c_prep_controller
// int jinit_c_prep_controller(int a1, char a2);
// [0xf8f2e0] (533 bytes) jinit_downsampler
// void *jinit_downsampler(uint32_t *a1);
// [0xf8f500] (448 bytes) jpeg_CreateDecompress
// int jpeg_CreateDecompress(uint32_t *a1, int a2, int a3);
// [0xf8f6c0] (34 bytes) jpeg_destroy_decompress
// int jpeg_destroy_decompress(int a1);
// [0xf8f6f0] (34 bytes) jpeg_abort_decompress
// int jpeg_abort_decompress(int a1);
// [0xf8f720] (718 bytes) jpeg_consume_input
// int jpeg_consume_input(int *a1);
// [0xf8f9f0] (154 bytes) jpeg_read_header
// int jpeg_read_header(int *a1, char a2);
// [0xf8fa90] (62 bytes) jpeg_input_complete
// int jpeg_input_complete(uint32_t *a1);
// [0xf8fad0] (62 bytes) jpeg_has_multiple_scans
// int jpeg_has_multiple_scans(uint32_t *a1);
// [0xf8fb10] (226 bytes) jpeg_finish_decompress
// int jpeg_finish_decompress(int a1);
// [0xf8fc00] (474 bytes) jpeg_start_decompress
// int jpeg_start_decompress(int a1);
// [0xf8fde0] (169 bytes) jpeg_read_scanlines
// int jpeg_read_scanlines(uint32_t *a1, int a2, int a3);
// [0xf8fe90] (212 bytes) jpeg_read_raw_data
// unsigned int jpeg_read_raw_data(uint32_t *a1, int a2, unsigned int a3);
// [0xf8ff70] (331 bytes) jpeg_start_output
// int jpeg_start_output(int a1, int a2);
// [0xf900c0] (163 bytes) jpeg_finish_output
// int jpeg_finish_output(int a1);
// [0xf909d0] (117 bytes) jinit_input_controller
// int jinit_input_controller(int a1);
// [0xf92fc0] (602 bytes) jpeg_resync_to_restart
// int jpeg_resync_to_restart(uint32_t *a1, int a2);
// [0xf93220] (429 bytes) jinit_marker_reader
// int jinit_marker_reader(unsigned int a1);
// [0xf933d0] (279 bytes) jpeg_save_markers
// unsigned int jpeg_save_markers(uint32_t *a1, int a2, signed int a3);
// [0xf934f0] (128 bytes) jpeg_set_marker_processor
// int jpeg_set_marker_processor(uint32_t *a1, int a2, int a3);
// [0xf937c0] (879 bytes) jpeg_calc_output_dimensions
// int *jpeg_calc_output_dimensions(uint32_t *a1);
// [0xf93b30] (141 bytes) jpeg_new_colormap
// int jpeg_new_colormap(int a1);
// [0xf93bc0] (1947 bytes) jinit_master_decompress
// int jinit_master_decompress(int a1);
// [0xf94970] (400 bytes) jinit_merged_upsampler
// int jinit_merged_upsampler(int a1);
// [0xf95dc0] (349 bytes) jinit_phuff_decoder
// uint32_t *jinit_phuff_decoder(int a1);
// [0xf96300] (248 bytes) jinit_d_post_controller
// int (*(*jinit_d_post_controller(int a1, char a2))(;
// [0xf97080] (670 bytes) jinit_upsampler
// uint32_t *(*jinit_upsampler(int a1))(int *a1, int a2, uint32_t *a3, int a4, int a5, uint32_t *a6, int a7);
// [0xf97550] (121 bytes) jpeg_std_error
// void (__noreturn **jpeg_std_error(void (__noreturn **a1)(int a1)))(int a1);
// [0xf98f70] (390 bytes) jinit_memory_mgr
// const char *jinit_memory_mgr(uint32_t *a1);
// [0xf99b80] (1335 bytes) jinit_1pass_quantizer
// int jinit_1pass_quantizer(uint32_t *a1);
// [0xf9c030] (565 bytes) jinit_2pass_quantizer
// uint32_t *jinit_2pass_quantizer(int a1);
// [0xfb9e50] (632 bytes) jinit_c_coef_controller
// int jinit_c_coef_controller(int a1, char a2, int a3, uint32_t *a4);
// [0xfbaa00] (606 bytes) jinit_color_converter
// int (*jinit_color_converter(int a1))(int a1, int a2, int a3, int a4, int a5);
// [0xfbce30] (239 bytes) jinit_forward_dct
// int (**jinit_forward_dct(int a1))(int a1);
// [0xfbded0] (979 bytes) jpeg_make_c_derived_tbl
// int jpeg_make_c_derived_tbl(int (***a1)(uint32_t, uint32_t, uint32_t), char a2, unsigned int a3, int *a4);
// [0xfbe590] (753 bytes) jpeg_gen_optimal_table
// int jpeg_gen_optimal_table(int a1, int a2, int a3);
// [0xfbe9b0] (178 bytes) jinit_huff_encoder
// int (**jinit_huff_encoder(int a1))(int a1, char a2);
// [0xfbfd40] (714 bytes) jinit_d_coef_controller
// int (*jinit_d_coef_controller(int a1, char a2))(uint32_t *a1, int a2);
// [0xfc0440] (985 bytes) jinit_color_deconverter
// const char *jinit_color_deconverter(int a1);
// [0xfc1970] (249 bytes) jinit_inverse_dct
// int (*jinit_inverse_dct(int a1))(uint32_t *a1);
// [0xfc1a70] (1156 bytes) jpeg_make_d_derived_tbl
// int jpeg_make_d_derived_tbl(int (***a1)(uint32_t, uint32_t, uint32_t), char a2, unsigned int a3, int *a4);
// [0xfc2090] (342 bytes) jpeg_fill_bit_buffer
// int jpeg_fill_bit_buffer(uint8_t **a1, int a2, int a3, int a4);
// [0xfc21f0] (314 bytes) jpeg_huff_decode
// int jpeg_huff_decode(int a1, int a2, int a3, int a4, int a5);
// [0xfc2960] (131 bytes) jinit_huff_decoder
// uint32_t *jinit_huff_decoder(int a1);
// [0xfc32d0] (520 bytes) jinit_d_main_controller
// int jinit_d_main_controller(int a1, char a2);
// [0xfc34e0] (3135 bytes) jpeg_fdct_float
// float *jpeg_fdct_float(int a1);
// [0xfc4120] (3763 bytes) jpeg_fdct_ifast
// int32_t *jpeg_fdct_ifast(__m128 *a1);
// [0xfc4fe0] (5428 bytes) jpeg_fdct_islow
// int32_t *jpeg_fdct_islow(__m128 *a1);
// [0xfc6520] (1411 bytes) jpeg_idct_float
// float *jpeg_idct_float(int a1, int a2, int a3, uint32_t *a4, int a5);
// [0xfc6ab0] (1636 bytes) jpeg_idct_ifast
// int *jpeg_idct_ifast(int a1, int a2, int a3, int a4, int a5);
// [0xfc7120] (1872 bytes) jpeg_idct_islow
// int *jpeg_idct_islow(int a1, int a2, int a3, int a4, int a5);
// [0xfc7870] (2506 bytes) jpeg_idct_4x4
// uint8_t *jpeg_idct_4x4(int a1, int a2, int a3, uint32_t *a4, int a5);
// [0xfc8240] (813 bytes) jpeg_idct_2x2
// int jpeg_idct_2x2(int a1, int a2, int a3, uint32_t *a4, int a5);
// [0xfc8570] (60 bytes) jpeg_idct_1x1
// int jpeg_idct_1x1(int a1, int a2, int16_t *a3, uint32_t *a4, int a5);
// [0xfc85b0] (34 bytes) jpeg_get_small
// int jpeg_get_small(int a1, size_t a2);
// [0xfc85e0] (34 bytes) jpeg_free_small
// int jpeg_free_small(int a1, int a2);
// [0xfc8610] (34 bytes) jpeg_get_large
// int jpeg_get_large(int a1, size_t a2);
// [0xfc8640] (34 bytes) jpeg_free_large
// int jpeg_free_large(int a1, int a2);
// [0xfc8670] (11 bytes) jpeg_mem_available
// int jpeg_mem_available(int a1, int a2, int a3);
// [0xfc8680] (29 bytes) jpeg_open_backing_store
// int jpeg_open_backing_store(int a1);
// [0xfc86a0] (9 bytes) jpeg_mem_init
// int jpeg_mem_init();
// [0xfc86b0] (9 bytes) jpeg_mem_term
// void jpeg_mem_term();
