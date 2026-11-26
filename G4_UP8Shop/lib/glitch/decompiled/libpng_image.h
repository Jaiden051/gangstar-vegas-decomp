#pragma once
// ============================================================================
// G4_UP8Shop/lib/glitch/decompiled/libpng_image.h
// Library: glitch | Module: libpng_image
// Binary Address Span: 0xf9c3a0 .. 0xfb7e20 (297 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xf9c3a0] (100 bytes) png_set_sig_bytes
// void png_set_sig_bytes(int a1, int a2);
// [0xf9c410] (145 bytes) png_sig_cmp
// int png_sig_cmp(int a1, unsigned int a2, size_t n);
// [0xf9c4b0] (134 bytes) png_zalloc
// int png_zalloc(int a1, unsigned int a2, unsigned int a3);
// [0xf9c540] (42 bytes) png_zfree
// int png_zfree(int a1, void *a2);
// [0xf9c570] (60 bytes) png_reset_crc
// int png_reset_crc(int a1);
// [0xf9c5b0] (123 bytes) png_calculate_crc
// void png_calculate_crc(int a1, int a2, int a3);
// [0xf9c630] (186 bytes) png_info_init_3
// void png_info_init_3(void **a1, unsigned int a2);
// [0xf9c6f0] (112 bytes) png_create_info_struct
// void *png_create_info_struct(int a1);
// [0xf9c760] (133 bytes) png_data_freer
// int png_data_freer(int a1, int a2, int a3, int a4);
// [0xf9c7f0] (1437 bytes) png_free_data
// void png_free_data(int a1, uint32_t *a2, int a3, int a4);
// [0xf9cd90] (140 bytes) png_info_destroy
// void png_info_destroy(int a1, uint32_t *a2);
// [0xf9ce20] (120 bytes) png_destroy_info_struct
// int png_destroy_info_struct(int a1, uint32_t **a2);
// [0xf9cea0] (19 bytes) png_get_io_ptr
// int png_get_io_ptr(int a1);
// [0xf9cec0] (18 bytes) png_init_io
// int png_init_io(int a1, int a2);
// [0xf9cee0] (316 bytes) png_convert_to_rfc1123
// int png_convert_to_rfc1123(int a1, uint16_t *a2);
// [0xf9d020] (22 bytes) png_get_copyright
// const char *png_get_copyright();
// [0xf9d040] (22 bytes) png_get_libpng_ver
// const char *png_get_libpng_ver();
// [0xf9d060] (22 bytes) png_get_header_ver
// const char *png_get_header_ver();
// [0xf9d080] (22 bytes) png_get_header_version
// const char *png_get_header_version();
// [0xf9d0a0] (125 bytes) png_handle_as_unknown
// int png_handle_as_unknown(int a1, void *s1);
// [0xf9d120] (55 bytes) png_reset_zstream
// int png_reset_zstream(int a1);
// [0xf9d160] (12 bytes) png_access_version_number
// int png_access_version_number();
// [0xf9d170] (114 bytes) png_64bit_product
// unsigned int png_64bit_product(unsigned int a1, unsigned int a2, uint32_t *a3, unsigned int *a4);
// [0xf9d1f0] (506 bytes) png_check_cHRM_fixed
// int png_check_cHRM_fixed(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);
// [0xf9d3f0] (927 bytes) png_check_IHDR
// int png_check_IHDR(int a1, int a2, int a3, int a4, unsigned int a5, int a6, int a7, int a8);
// [0xf9d790] (188 bytes) png_error
// void __noreturn png_error(int a1, int a2);
// [0xf9d850] (167 bytes) png_warning
// int png_warning(int a1, uint8_t *a2);
// [0xf9d900] (708 bytes) png_chunk_error
// void __noreturn png_chunk_error(uint8_t *a1, uint32_t *a2);
// [0xf9dbd0] (708 bytes) png_chunk_warning
// int png_chunk_warning(uint8_t *a1, int a2);
// [0xf9dea0] (27 bytes) png_set_longjmp_fn
// int png_set_longjmp_fn(int a1, int a2, int a3);
// [0xf9dec0] (32 bytes) png_set_error_fn
// uint32_t *png_set_error_fn(uint32_t *a1, int a2, int a3, int a4);
// [0xf9dee0] (19 bytes) png_get_error_ptr
// int png_get_error_ptr(int a1);
// [0xf9df00] (27 bytes) png_get_valid
// int png_get_valid(int a1, int a2, int a3);
// [0xf9df20] (27 bytes) png_get_rowbytes
// int png_get_rowbytes(int a1, int a2);
// [0xf9df40] (27 bytes) png_get_rows
// int png_get_rows(int a1, int a2);
// [0xf9df60] (27 bytes) png_get_image_width
// int png_get_image_width(int a1, int a2);
// [0xf9df80] (27 bytes) png_get_image_height
// int png_get_image_height(int a1, int a2);
// [0xf9dfa0] (27 bytes) png_get_bit_depth
// int png_get_bit_depth(int a1, int a2);
// [0xf9dfc0] (27 bytes) png_get_color_type
// int png_get_color_type(int a1, int a2);
// [0xf9dfe0] (27 bytes) png_get_filter_type
// int png_get_filter_type(int a1, int a2);
// [0xf9e000] (27 bytes) png_get_interlace_type
// int png_get_interlace_type(int a1, int a2);
// [0xf9e020] (27 bytes) png_get_compression_type
// int png_get_compression_type(int a1, int a2);
// [0xf9e040] (49 bytes) png_get_x_pixels_per_meter
// int png_get_x_pixels_per_meter(int a1, int a2);
// [0xf9e080] (49 bytes) png_get_y_pixels_per_meter
// int png_get_y_pixels_per_meter(int a1, int a2);
// [0xf9e0c0] (55 bytes) png_get_pixels_per_meter
// int png_get_pixels_per_meter(int a1, int a2);
// [0xf9e100] (126 bytes) png_get_pixel_aspect_ratio
// long double png_get_pixel_aspect_ratio(int a1, int a2);
// [0xf9e180] (49 bytes) png_get_x_offset_microns
// int png_get_x_offset_microns(int a1, int a2);
// [0xf9e1c0] (49 bytes) png_get_y_offset_microns
// int png_get_y_offset_microns(int a1, int a2);
// [0xf9e200] (41 bytes) png_get_x_offset_pixels
// int png_get_x_offset_pixels(int a1, int a2);
// [0xf9e230] (41 bytes) png_get_y_offset_pixels
// int png_get_y_offset_pixels(int a1, int a2);
// [0xf9e260] (27 bytes) png_get_channels
// int png_get_channels(int a1, int a2);
// [0xf9e280] (27 bytes) png_get_signature
// int png_get_signature(int a1, int a2);
// [0xf9e2a0] (59 bytes) png_get_bKGD
// int png_get_bKGD(int a1, int a2, uint32_t *a3);
// [0xf9e2e0] (306 bytes) png_get_cHRM
// int png_get_cHRM( int a1, int a2, double *a3, double *a4, double *a5, double *a6, double *a7, double *a8, double *a9, double *a10);
// [0xf9e420] (216 bytes) png_get_cHRM_fixed
// int png_get_cHRM_fixed( int a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, uint32_t *a7, uint32_t *a8, uint32_t *a9, uint32_t *a10);
// [0xf9e500] (59 bytes) png_get_gAMA
// int png_get_gAMA(int a1, int a2, double *a3);
// [0xf9e540] (59 bytes) png_get_gAMA_fixed
// int png_get_gAMA_fixed(int a1, int a2, uint32_t *a3);
// [0xf9e580] (59 bytes) png_get_sRGB
// int png_get_sRGB(int a1, int a2, uint32_t *a3);
// [0xf9e5c0] (126 bytes) png_get_iCCP
// int png_get_iCCP(int a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, uint32_t *a6);
// [0xf9e640] (41 bytes) png_get_sPLT
// int png_get_sPLT(int a1, int a2, uint32_t *a3);
// [0xf9e670] (59 bytes) png_get_hIST
// int png_get_hIST(int a1, int a2, uint32_t *a3);
// [0xf9e6b0] (279 bytes) png_get_IHDR
// int png_get_IHDR( int a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, uint32_t *a7, uint32_t *a8, uint32_t *a9);
// [0xf9e7d0] (110 bytes) png_get_oFFs
// int png_get_oFFs(int a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5);
// [0xf9e840] (194 bytes) png_get_pCAL
// int png_get_pCAL( int a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, uint32_t *a7, uint32_t *a8, uint32_t *a9);
// [0xf9e910] (81 bytes) png_get_sCAL
// int png_get_sCAL(int a1, int a2, uint32_t *a3, uint64_t *a4, uint64_t *a5);
// [0xf9e970] (101 bytes) png_get_pHYs
// int png_get_pHYs(int a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5);
// [0xf9e9e0] (67 bytes) png_get_PLTE
// int png_get_PLTE(int a1, int a2, uint32_t *a3, uint32_t *a4);
// [0xf9ea30] (59 bytes) png_get_sBIT
// int png_get_sBIT(int a1, int a2, uint32_t *a3);
// [0xf9ea70] (70 bytes) png_get_text
// int png_get_text(int a1, int a2, uint32_t *a3, uint32_t *a4);
// [0xf9eac0] (59 bytes) png_get_tIME
// int png_get_tIME(int a1, int a2, uint32_t *a3);
// [0xf9eb00] (129 bytes) png_get_tRNS
// int png_get_tRNS(int a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5);
// [0xf9eb90] (41 bytes) png_get_unknown_chunks
// int png_get_unknown_chunks(int a1, int a2, uint32_t *a3);
// [0xf9ebc0] (18 bytes) png_get_rgb_to_gray_status
// int png_get_rgb_to_gray_status(int a1);
// [0xf9ebe0] (19 bytes) png_get_user_chunk_ptr
// int png_get_user_chunk_ptr(int a1);
// [0xf9ec00] (17 bytes) png_get_compression_buffer_size
// int png_get_compression_buffer_size(int a1);
// [0xf9ec20] (17 bytes) png_get_user_width_max
// int png_get_user_width_max(int a1);
// [0xf9ec40] (17 bytes) png_get_user_height_max
// int png_get_user_height_max(int a1);
// [0xf9ec60] (17 bytes) png_get_chunk_cache_max
// int png_get_chunk_cache_max(int a1);
// [0xf9ec80] (17 bytes) png_get_chunk_malloc_max
// int png_get_chunk_malloc_max(int a1);
// [0xf9eca0] (15 bytes) png_get_io_state
// int png_get_io_state(int a1);
// [0xf9ecb0] (14 bytes) png_get_io_chunk_name
// int png_get_io_chunk_name(int a1);
// [0xf9ecc0] (185 bytes) png_create_struct_2
// void *png_create_struct_2(int a1, int (*a2)(uint8_t *, size_t), int a3);
// [0xf9ed80] (50 bytes) png_create_struct
// void *png_create_struct(int a1);
// [0xf9edc0] (97 bytes) png_destroy_struct_2
// void png_destroy_struct_2(void *ptr, void (*a2)(uint8_t *, void *), int a3);
// [0xf9ee30] (50 bytes) png_destroy_struct
// void png_destroy_struct(void *a1);
// [0xf9ee70] (56 bytes) png_malloc_default
// void *png_malloc_default(int a1, size_t size);
// [0xf9eeb0] (151 bytes) png_malloc
// void *png_malloc(int a1, size_t a2);
// [0xf9ef50] (92 bytes) png_calloc
// void *png_calloc(int a1, size_t n);
// [0xf9efb0] (54 bytes) png_free_default
// void png_free_default(int a1, void *ptr);
// [0xf9eff0] (75 bytes) png_free
// void png_free(int a1, void *a2);
// [0xf9f040] (86 bytes) png_malloc_warn
// void *png_malloc_warn(int a1, size_t a2);
// [0xf9f0a0] (41 bytes) png_set_mem_fn
// uint32_t *png_set_mem_fn(uint32_t *a1, int a2, int a3, int a4);
// [0xf9f0d0] (19 bytes) png_get_mem_ptr
// int png_get_mem_ptr(int a1);
// [0xf9f0f0] (1210 bytes) png_create_read_struct_2
// char *png_create_read_struct_2(char *a1, int a2, int a3, int a4, int a5, int a6, int a7);
// [0xf9f5b0] (82 bytes) png_create_read_struct
// char *png_create_read_struct(char *a1, int a2, int a3, int a4);
// [0xf9f610] (2609 bytes) png_read_info
// void png_read_info(int a1, int a2);
// [0xfa0050] (98 bytes) png_read_update_info
// int png_read_update_info(int a1, int a2);
// [0xfa00c0] (44 bytes) png_start_read_image
// int png_start_read_image(int a1);
// [0xfa00f0] (1502 bytes) png_read_row
// void png_read_row(int a1, void *a2, void *a3);
// [0xfa06d0] (230 bytes) png_read_rows
// void png_read_rows(int a1, int a2, int a3, int a4);
// [0xfa07c0] (150 bytes) png_read_image
// void png_read_image(int a1, int a2);
// [0xfa0860] (2183 bytes) png_read_end
// void png_read_end(int a1, int a2);
// [0xfa10f0] (1005 bytes) png_read_destroy
// int png_read_destroy(int a1, uint32_t *a2, uint32_t *a3);
// [0xfa14e0] (312 bytes) png_destroy_read_struct
// uint32_t **png_destroy_read_struct(uint32_t **a1, uint32_t **a2, uint32_t **a3);
// [0xfa1620] (21 bytes) png_set_read_status_fn
// int png_set_read_status_fn(int a1, int a2);
// [0xfa1640] (756 bytes) png_read_png
// void png_read_png(int a1, uint32_t *a2, int16_t a3);
// [0xfa1940] (109 bytes) png_default_read_data
// void png_default_read_data(int a1, void *ptr, size_t n);
// [0xfa19b0] (80 bytes) png_read_data
// int png_read_data(int a1, int a2, int a3);
// [0xfa1a00] (127 bytes) png_set_read_fn
// void (*png_set_read_fn( uint32_t *a1, int a2, void (*a3)(int a1, void *ptr, size_t n)))(int a1, void *ptr, size_t n);
// [0xfa1a80] (236 bytes) png_set_crc_action
// int16_t png_set_crc_action(int a1, int a2, int a3);
// [0xfa1b70] (164 bytes) png_set_background
// int png_set_background(int a1, int a2, int a3, int a4, double a5);
// [0xfa1c20] (18 bytes) png_set_strip_16
// int png_set_strip_16(int a1);
// [0xfa1c40] (18 bytes) png_set_strip_alpha
// int png_set_strip_alpha(int a1);
// [0xfa1c60] (2912 bytes) png_set_quantize
// void png_set_quantize(int a1, uint8_t *a2, signed int a3, int a4, int a5, int a6);
// [0xfa27c0] (131 bytes) png_set_gamma
// int png_set_gamma(int a1, double a2, double a3);
// [0xfa2850] (22 bytes) png_set_expand
// int png_set_expand(int a1);
// [0xfa2870] (22 bytes) png_set_palette_to_rgb
// int png_set_palette_to_rgb(int a1);
// [0xfa2890] (22 bytes) png_set_expand_gray_1_2_4_to_8
// int png_set_expand_gray_1_2_4_to_8(int a1);
// [0xfa28b0] (18 bytes) png_set_tRNS_to_alpha
// int png_set_tRNS_to_alpha(int a1);
// [0xfa28d0] (18 bytes) png_set_gray_to_rgb
// int png_set_gray_to_rgb(int a1);
// [0xfa28f0] (342 bytes) png_set_rgb_to_gray_fixed
// void png_set_rgb_to_gray_fixed(int a1, int a2, int a3, int a4);
// [0xfa2a50] (122 bytes) png_set_rgb_to_gray
// void png_set_rgb_to_gray(int a1, int a2, double a3, double a4);
// [0xfa2ad0] (25 bytes) png_set_read_user_transform_fn
// int png_set_read_user_transform_fn(int a1, int a2);
// [0xfa2af0] (665 bytes) png_read_transform_info
// unsigned int png_read_transform_info(int a1, int a2);
// [0xfa2d90] (467 bytes) png_do_unpack
// int png_do_unpack(int *a1, int a2);
// [0xfa2f70] (1009 bytes) png_do_unshift
// int png_do_unshift(int *a1, int a2, uint8_t *a3);
// [0xfa3370] (286 bytes) png_do_chop
// int png_do_chop(int64_t a1);
// [0xfa3490] (322 bytes) png_do_read_swap_alpha
// int png_do_read_swap_alpha(int *a1, int a2);
// [0xfa35e0] (183 bytes) png_do_read_invert_alpha
// int png_do_read_invert_alpha(int *a1, int a2);
// [0xfa36a0] (1111 bytes) png_do_read_filler
// int png_do_read_filler(int a1, uint8_t *a2, int16_t a3, char a4);
// [0xfa3b00] (525 bytes) png_do_gray_to_rgb
// unsigned int png_do_gray_to_rgb(int *a1, int a2);
// [0xfa3d10] (2245 bytes) png_do_rgb_to_gray
// int png_do_rgb_to_gray(int a1, int *a2, uint8_t *a3);
// [0xfa45e0] (80 bytes) png_build_grayscale_palette
// void png_build_grayscale_palette(int a1, uint8_t *a2);
// [0xfa4630] (5046 bytes) png_do_background
// void png_do_background( int *a1, uint8_t *a2, uint16_t *a3, int a4, uint16_t *a5, int a6, int a7, int a8, int a9, int a10, int a11, char a12);
// [0xfa59f0] (1207 bytes) png_do_gamma
// int png_do_gamma(unsigned int *a1, uint8_t *a2, int a3, int a4, char a5);
// [0xfa5eb0] (823 bytes) png_do_expand_palette
// int png_do_expand_palette(int *a1, int a2, int a3, int a4, int a5);
// [0xfa61f0] (1392 bytes) png_do_expand
// int *png_do_expand(int *a1, int a2, int a3);
// [0xfa6760] (492 bytes) png_do_quantize
// unsigned int png_do_quantize(int *a1, uint8_t *a2, int a3, unsigned int a4);
// [0xfa6950] (1666 bytes) png_do_read_transformations
// unsigned int png_do_read_transformations(int a1);
// [0xfa6fe0] (2611 bytes) png_build_gamma_table
// void png_build_gamma_table(int a1, uint8_t a2);
// [0xfa7a20] (4646 bytes) png_init_read_transformations
// int png_init_read_transformations(int a1);
// [0xfa8c50] (260 bytes) png_do_read_intrapixel
// int png_do_read_intrapixel(int *a1, int a2);
// [0xfa8d60] (115 bytes) png_get_uint_31
// int png_get_uint_31(int a1, uint8_t *a2);
// [0xfa8de0] (100 bytes) png_crc_read
// void png_crc_read(int a1, int a2, int a3);
// [0xfa8e50] (185 bytes) png_crc_error
// bool png_crc_error(int a1);
// [0xfa8f10] (219 bytes) png_crc_finish
// int png_crc_finish(int a1, unsigned int a2);
// [0xfa8ff0] (1168 bytes) png_decompress_chunk
// void png_decompress_chunk(int a1, int a2, unsigned int a3, size_t n, size_t *a5);
// [0xfa9480] (519 bytes) png_handle_IHDR
// int png_handle_IHDR(int a1, int a2, int a3);
// [0xfa9690] (574 bytes) png_handle_PLTE
// int png_handle_PLTE(int a1, int a2, signed int a3);
// [0xfa98d0] (119 bytes) png_handle_IEND
// int png_handle_IEND(int a1, int a2, unsigned int a3);
// [0xfa9950] (504 bytes) png_handle_gAMA
// int png_handle_gAMA(int a1, int a2, unsigned int a3);
// [0xfa9b50] (443 bytes) png_handle_sBIT
// int png_handle_sBIT(int a1, int a2, unsigned int a3);
// [0xfa9d10] (1475 bytes) png_handle_cHRM
// int png_handle_cHRM(int a1, int a2, unsigned int a3);
// [0xfaa2e0] (615 bytes) png_handle_sRGB
// int png_handle_sRGB(int a1, int a2, unsigned int a3);
// [0xfaa550] (811 bytes) png_handle_iCCP
// void png_handle_iCCP(int a1, int a2, int a3);
// [0xfaa880] (903 bytes) png_handle_sPLT
// void png_handle_sPLT(int a1, int a2, unsigned int a3);
// [0xfaac10] (679 bytes) png_handle_tRNS
// int png_handle_tRNS(int a1, int a2, unsigned int a3);
// [0xfaaec0] (568 bytes) png_handle_bKGD
// int png_handle_bKGD(int a1, int a2, unsigned int a3);
// [0xfab100] (338 bytes) png_handle_hIST
// int png_handle_hIST(int a1, int a2, unsigned int a3);
// [0xfab260] (355 bytes) png_handle_pHYs
// int png_handle_pHYs(int a1, int a2, unsigned int a3);
// [0xfab3d0] (451 bytes) png_handle_oFFs
// int png_handle_oFFs(int a1, int a2, unsigned int a3);
// [0xfab5a0] (1047 bytes) png_handle_pCAL
// void png_handle_pCAL(int a1, int a2, unsigned int a3);
// [0xfab9c0] (601 bytes) png_handle_sCAL
// void png_handle_sCAL(int a1, int a2, unsigned int a3);
// [0xfabc20] (331 bytes) png_handle_tIME
// int png_handle_tIME(int a1, int a2, unsigned int a3);
// [0xfabd70] (567 bytes) png_handle_tEXt
// void png_handle_tEXt(int a1, int a2, unsigned int a3);
// [0xfabfb0] (695 bytes) png_handle_zTXt
// void png_handle_zTXt(int a1, int a2, int a3);
// [0xfac270] (904 bytes) png_handle_iTXt
// void png_handle_iTXt(int a1, int a2, int a3);
// [0xfac600] (623 bytes) png_handle_unknown
// int png_handle_unknown(int a1, int a2, size_t a3);
// [0xfac870] (129 bytes) png_check_chunk_name
// int png_check_chunk_name(uint8_t *a1, uint8_t *a2);
// [0xfac900] (172 bytes) png_read_chunk_header
// int png_read_chunk_header(int a1);
// [0xfac9b0] (882 bytes) png_combine_row
// char png_combine_row(int a1, uint8_t *a2, int a3);
// [0xfacd30] (1558 bytes) png_do_read_interlace
// int png_do_read_interlace(int a1);
// [0xfad350] (1425 bytes) png_read_filter_row
// unsigned int png_read_filter_row(int a1, int a2, uint8_t *a3, unsigned int a4, int a5);
// [0xfad8f0] (1097 bytes) png_read_finish_row
// unsigned int png_read_finish_row(int a1);
// [0xfadd40] (1010 bytes) png_read_start_row
// void *png_read_start_row(int a1);
// [0xfae140] (49 bytes) png_set_bKGD
// int png_set_bKGD(int a1, int64_t a2);
// [0xfae180] (373 bytes) png_set_cHRM
// int png_set_cHRM( int a1, int a2, double a3, double a4, double a5, double a6, double a7, double a8, double a9, double a10);
// [0xfae300] (420 bytes) png_set_cHRM_fixed
// int png_set_cHRM_fixed(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);
// [0xfae4b0] (196 bytes) png_set_gAMA
// int png_set_gAMA(int a1, float *a2, double a3);
// [0xfae580] (163 bytes) png_set_gAMA_fixed
// int png_set_gAMA_fixed(int a1, float *a2, int a3);
// [0xfae630] (240 bytes) png_set_hIST
// void png_set_hIST(int a1, int a2, int a3);
// [0xfae720] (332 bytes) png_set_IHDR
// int16_t png_set_IHDR( int a1, int a2, unsigned int a3, int a4, uint8_t a5, uint8_t a6, uint8_t a7, uint8_t a8, uint8_t a9);
// [0xfae870] (47 bytes) png_set_oFFs
// int png_set_oFFs(int a1, int a2, int a3, int a4, char a5);
// [0xfae8a0] (539 bytes) png_set_pCAL
// void png_set_pCAL(int a1, int a2, char *s, int a4, int a5, char a6, int a7, char *a8, int a9);
// [0xfaeac0] (62 bytes) png_set_sCAL
// int png_set_sCAL(int a1, int a2, char a3, int64_t a4, int64_t a5);
// [0xfaeb00] (47 bytes) png_set_pHYs
// int png_set_pHYs(int a1, int a2, int a3, int a4, char a5);
// [0xfaeb30] (222 bytes) png_set_PLTE
// void png_set_PLTE(int a1, int a2, void *src, unsigned int a4);
// [0xfaec10] (41 bytes) png_set_sBIT
// int png_set_sBIT(int a1, int64_t a2);
// [0xfaec40] (33 bytes) png_set_sRGB
// int png_set_sRGB(int a1, int a2, char a3);
// [0xfaec70] (331 bytes) png_set_sRGB_gAMA_and_cHRM
// int png_set_sRGB_gAMA_and_cHRM(int a1, float *a2, char a3);
// [0xfaedc0] (351 bytes) png_set_iCCP
// void png_set_iCCP(int a1, int a2, char *s, char a4, void *src, size_t a6);
// [0xfaef20] (869 bytes) png_set_text_2
// int png_set_text_2(int a1, uint32_t *a2, int a3, int a4);
// [0xfaf290] (94 bytes) png_set_text
// int png_set_text(int a1, uint32_t *a2, int a3, int a4);
// [0xfaf2f0] (51 bytes) png_set_tIME
// uint32_t *png_set_tIME(int a1, uint32_t *a2, uint32_t *a3);
// [0xfaf330] (374 bytes) png_set_tRNS
// void png_set_tRNS(int a1, int a2, void *src, size_t n, int a5);
// [0xfaf4b0] (547 bytes) png_set_sPLT
// void png_set_sPLT(int a1, int a2, int a3, int a4);
// [0xfaf6e0] (479 bytes) png_set_unknown_chunks
// void png_set_unknown_chunks(int a1, int a2, uint32_t *a3, int a4);
// [0xfaf8c0] (52 bytes) png_set_unknown_chunk_location
// int png_set_unknown_chunk_location(int a1, int64_t a2, int a3);
// [0xfaf900] (24 bytes) png_permit_mng_features
// int png_permit_mng_features(int a1, char a2);
// [0xfaf920] (349 bytes) png_set_keep_unknown_chunks
// void png_set_keep_unknown_chunks(int a1, int a2, void *a3, int a4);
// [0xfafa80] (31 bytes) png_set_read_user_chunk_fn
// int png_set_read_user_chunk_fn(int a1, int a2, int a3);
// [0xfafaa0] (123 bytes) png_set_rows
// void png_set_rows(int a1, uint32_t *a2, int a3);
// [0xfafb20] (110 bytes) png_set_compression_buffer_size
// void png_set_compression_buffer_size(int a1, size_t a2);
// [0xfafb90] (28 bytes) png_set_invalid
// int png_set_invalid(int a1, int a2, int a3);
// [0xfafbb0] (31 bytes) png_set_user_limits
// int png_set_user_limits(int a1, int a2, int a3);
// [0xfafbd0] (21 bytes) png_set_chunk_cache_max
// int png_set_chunk_cache_max(int a1, int a2);
// [0xfafbf0] (21 bytes) png_set_chunk_malloc_max
// int png_set_chunk_malloc_max(int a1, int a2);
// [0xfafc10] (15 bytes) png_set_bgr
// int png_set_bgr(int a1);
// [0xfafc20] (29 bytes) png_set_swap
// int png_set_swap(int a1);
// [0xfafc40] (31 bytes) png_set_packing
// int png_set_packing(int a1);
// [0xfafc60] (27 bytes) png_set_packswap
// int png_set_packswap(int a1);
// [0xfafc80] (35 bytes) png_set_shift
// int png_set_shift(int64_t a1);
// [0xfafcb0] (29 bytes) png_set_interlace_handling
// char png_set_interlace_handling(int a1);
// [0xfafcd0] (97 bytes) png_set_filler
// int png_set_filler(int a1, int16_t a2, int a3);
// [0xfafd40] (75 bytes) png_set_add_alpha
// int png_set_add_alpha(int a1, int16_t a2, int a3);
// [0xfafd90] (18 bytes) png_set_swap_alpha
// int png_set_swap_alpha(int a1);
// [0xfafdb0] (18 bytes) png_set_invert_alpha
// int png_set_invert_alpha(int a1);
// [0xfafdd0] (15 bytes) png_set_invert_mono
// int png_set_invert_mono(int a1);
// [0xfafde0] (297 bytes) png_do_invert
// uint8_t *png_do_invert(int a1, int a2);
// [0xfaff10] (244 bytes) png_do_swap
// __m128i *png_do_swap(__m128i *a1, __m128i *a2);
// [0xfb0010] (112 bytes) png_do_packswap
// uint8_t *png_do_packswap(int a1, uint8_t *a2);
// [0xfb0080] (2498 bytes) png_do_strip_filler
// int png_do_strip_filler(int a1, unsigned int a2, int a3);
// [0xfb0a50] (253 bytes) png_do_bgr
// uint8_t *png_do_bgr(int *a1, uint8_t *a2);
// [0xfb0b50] (32 bytes) png_set_user_transform_info
// int png_set_user_transform_info(int a1, int a2, char a3, char a4);
// [0xfb0b70] (19 bytes) png_get_user_transform_ptr
// int png_get_user_transform_ptr(int a1);
// [0xfb0b90] (41 bytes) png_default_flush
// int png_default_flush(int a1);
// [0xfb0bc0] (109 bytes) png_default_write_data
// void png_default_write_data(int a1, void *ptr, size_t n);
// [0xfb0c30] (80 bytes) png_write_data
// int png_write_data(int a1, int a2, int a3);
// [0xfb0c80] (28 bytes) png_flush
// int (*png_flush(int a1))(int);
// [0xfb0ca0] (124 bytes) png_set_write_fn
// int (*png_set_write_fn( uint32_t *a1, int a2, void (*a3)(int a1, void *ptr, size_t n), int (*a4)(int a1)))(int a1);
// [0xfb0d20] (720 bytes) png_write_info_before_PLTE
// void png_write_info_before_PLTE(int a1, int a2);
// [0xfb0ff0] (1108 bytes) png_write_info
// void png_write_info(int a1, int a2);
// [0xfb1450] (519 bytes) png_write_end
// void png_write_end(int a1, int a2);
// [0xfb1660] (52 bytes) png_convert_from_struct_tm
// int png_convert_from_struct_tm(int a1, uint32_t *a2);
// [0xfb16a0] (50 bytes) png_convert_from_time_t
// int png_convert_from_time_t(int a1, time_t timer);
// [0xfb16e0] (693 bytes) png_write_row
// void png_write_row(int a1, void *src);
// [0xfb19a0] (124 bytes) png_write_image
// void png_write_image(int a1, int a2);
// [0xfb1a20] (87 bytes) png_write_rows
// void png_write_rows(int a1, int a2, int a3);
// [0xfb1a80] (26 bytes) png_set_flush
// void png_set_flush(int a1, int a2);
// [0xfb1aa0] (265 bytes) png_write_flush
// void png_write_flush(uint32_t *a1);
// [0xfb1bb0] (576 bytes) png_write_destroy
// int png_write_destroy(int a1);
// [0xfb1df0] (287 bytes) png_destroy_write_struct
// void png_destroy_write_struct(int *a1, uint32_t **a2);
// [0xfb1f10] (701 bytes) png_set_filter
// int png_set_filter(int a1, int a2, int a3);
// [0xfb21d0] (1500 bytes) png_set_filter_heuristics
// int png_set_filter_heuristics(int a1, int a2, signed int a3, int a4, double *a5);
// [0xfb27b0] (919 bytes) png_create_write_struct_2
// void *png_create_write_struct_2(char *a1, int a2, int a3, int a4, int a5, int a6, int a7);
// [0xfb2b50] (82 bytes) png_create_write_struct
// void *png_create_write_struct(char *a1, int a2, int a3, int a4);
// [0xfb2bb0] (25 bytes) png_set_compression_level
// int png_set_compression_level(int a1, int a2);
// [0xfb2bd0] (25 bytes) png_set_compression_mem_level
// int png_set_compression_mem_level(int a1, int a2);
// [0xfb2bf0] (25 bytes) png_set_compression_strategy
// int png_set_compression_strategy(int a1, int a2);
// [0xfb2c10] (160 bytes) png_set_compression_window_bits
// int png_set_compression_window_bits(int a1, int a2);
// [0xfb2cb0] (89 bytes) png_set_compression_method
// int png_set_compression_method(int a1, int a2);
// [0xfb2d10] (21 bytes) png_set_write_status_fn
// int png_set_write_status_fn(int a1, int a2);
// [0xfb2d30] (25 bytes) png_set_write_user_transform_fn
// int png_set_write_user_transform_fn(int a1, int a2);
// [0xfb2d50] (485 bytes) png_write_png
// void png_write_png(int a1, int a2, int16_t a3);
// [0xfb2f40] (478 bytes) png_do_pack
// int png_do_pack(uint32_t *a1, uint8_t *a2, int a3);
// [0xfb3120] (894 bytes) png_do_shift
// int png_do_shift(int a1, uint8_t *a2, uint8_t *a3);
// [0xfb34a0] (2757 bytes) png_do_write_swap_alpha
// unsigned int png_do_write_swap_alpha(unsigned int a1, __m128i *a2);
// [0xfb3f70] (386 bytes) png_do_write_invert_alpha
// __m128i *png_do_write_invert_alpha(__m128i *a1, __m128i *a2);
// [0xfb4100] (537 bytes) png_do_write_transformations
// void png_do_write_transformations(int a1);
// [0xfb4320] (260 bytes) png_do_write_intrapixel
// int png_do_write_intrapixel(int *a1, int a2);
// [0xfb47b0] (35 bytes) png_save_uint_32
// uint8_t *png_save_uint_32(uint8_t *a1, int a2);
// [0xfb47e0] (35 bytes) png_save_int_32
// uint8_t *png_save_int_32(uint8_t *a1, int a2);
// [0xfb4810] (19 bytes) png_save_uint_16
// uint8_t *png_save_uint_16(uint8_t *a1, int16_t a2);
// [0xfb4830] (128 bytes) png_write_sig
// int png_write_sig(int a1);
// [0xfb48b0] (166 bytes) png_write_chunk_start
// void png_write_chunk_start(int a1, int *a2, int a3);
// [0xfb4960] (110 bytes) png_write_chunk_data
// void png_write_chunk_data(int a1, int a2, int a3);
// [0xfb49d0] (104 bytes) png_write_chunk_end
// int png_write_chunk_end(int a1);
// [0xfb4a40] (104 bytes) png_write_chunk
// int png_write_chunk(int a1, int *a2, int a3, int a4);
// [0xfb4ab0] (1313 bytes) png_write_IHDR
// int png_write_IHDR(int a1, int a2, int a3, unsigned int a4, int a5, int a6, int a7, unsigned int a8);
// [0xfb4fe0] (308 bytes) png_write_PLTE
// int png_write_PLTE(int a1, uint8_t *a2, unsigned int a3);
// [0xfb5120] (396 bytes) png_write_IDAT
// int png_write_IDAT(int a1, uint8_t *a2, unsigned int a3);
// [0xfb52b0] (101 bytes) png_write_IEND
// int png_write_IEND(int a1);
// [0xfb5320] (184 bytes) png_write_gAMA
// int png_write_gAMA(int a1, double a2);
// [0xfb53e0] (113 bytes) png_write_gAMA_fixed
// int png_write_gAMA_fixed(int a1, int a2);
// [0xfb5460] (139 bytes) png_write_sRGB
// int png_write_sRGB(int a1, int a2);
// [0xfb54f0] (318 bytes) png_write_sBIT
// int png_write_sBIT(int a1, uint8_t *a2, int a3);
// [0xfb5630] (916 bytes) png_write_cHRM
// int png_write_cHRM( int a1, double a2, double a3, double a4, double a5, double a6, double a7, double a8, double a9);
// [0xfb59d0] (418 bytes) png_write_cHRM_fixed
// int png_write_cHRM_fixed(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);
// [0xfb5b80] (463 bytes) png_write_tRNS
// int png_write_tRNS(int a1, int a2, int a3, int a4, int a5);
// [0xfb5d50] (455 bytes) png_write_bKGD
// int png_write_bKGD(int a1, uint8_t *a2, int a3);
// [0xfb5f20] (210 bytes) png_write_hIST
// int png_write_hIST(int a1, int a2, int a3);
// [0xfb6000] (736 bytes) png_check_keyword
// int png_check_keyword(int a1, char *s, void **a3);
// [0xfb62e0] (492 bytes) png_write_sPLT
// void png_write_sPLT(int a1, int a2);
// [0xfb64d0] (778 bytes) png_write_iCCP
// void png_write_iCCP(uint32_t *a1, char *a2, int a3, unsigned int *a4, int a5);
// [0xfb67e0] (279 bytes) png_write_tEXt
// void png_write_tEXt(int a1, char *a2, char *s);
// [0xfb6900] (546 bytes) png_write_zTXt
// void png_write_zTXt(uint32_t *a1, char *a2, char *s, int a4, int a5);
// [0xfb6b30] (746 bytes) png_write_iTXt
// void png_write_iTXt(uint32_t *a1, int a2, char *a3, char *a4, char *s, char *a6);
// [0xfb6e20] (176 bytes) png_write_oFFs
// int png_write_oFFs(int a1, int a2, int a3, int a4);
// [0xfb6ed0] (687 bytes) png_write_pCAL
// int png_write_pCAL(int a1, char *a2, int a3, int a4, int a5, int a6, char *s, int a8);
// [0xfb7180] (280 bytes) png_write_sCAL
// int png_write_sCAL(int a1, char a2, double a3, double a4);
// [0xfb72a0] (176 bytes) png_write_pHYs
// int png_write_pHYs(int a1, int a2, int a3, int a4);
// [0xfb7350] (231 bytes) png_write_tIME
// int png_write_tIME(int a1, int a2);
// [0xfb7440] (469 bytes) png_write_start_row
// int png_write_start_row(int a1);
// [0xfb7620] (835 bytes) png_write_finish_row
// unsigned int png_write_finish_row(int a1);
// [0xfb7970] (905 bytes) png_do_write_interlace
// unsigned int png_do_write_interlace(unsigned int *a1, uint8_t *dest, int a3);
// [0xfb7d00] (281 bytes) png_write_filtered_row
// void png_write_filtered_row(int a1, int a2);
// [0xfb7e20] (5170 bytes) png_write_find_filter
// void png_write_find_filter(int a1, int a2);
