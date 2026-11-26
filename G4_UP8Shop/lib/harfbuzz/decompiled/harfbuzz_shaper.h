#pragma once
// ============================================================================
// G4_UP8Shop/lib/harfbuzz/decompiled/harfbuzz_shaper.h
// Library: harfbuzz | Module: harfbuzz_shaper
// Binary Address Span: 0x12a7ca0 .. 0x12e2510 (359 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x12a7ca0] (62 bytes) hb_segment_properties_equal
// bool hb_segment_properties_equal(uint32_t *a1, uint32_t *a2);
// [0x12a7ce0] (13 bytes) hb_segment_properties_hash
// int hb_segment_properties_hash(uint32_t *a1);
// [0x12aa420] (22 bytes) hb_buffer_get_empty
// void *hb_buffer_get_empty();
// [0x12aa440] (305 bytes) hb_buffer_create
// void **hb_buffer_create();
// [0x12aa580] (27 bytes) hb_buffer_reference
// uint32_t *hb_buffer_reference(uint32_t *a1);
// [0x12aa5a0] (241 bytes) hb_buffer_destroy
// void hb_buffer_destroy(char *a1);
// [0x12aa6a0] (70 bytes) hb_buffer_set_user_data
// int hb_buffer_set_user_data(uint32_t *a1, int a2, int a3, int a4, int a5);
// [0x12aa6f0] (43 bytes) hb_buffer_get_user_data
// int hb_buffer_get_user_data(uint32_t *a1, int a2);
// [0x12aa720] (14 bytes) hb_buffer_set_content_type
// int hb_buffer_set_content_type(int a1, int a2);
// [0x12aa730] (12 bytes) hb_buffer_get_content_type
// int hb_buffer_get_content_type(int a1);
// [0x12aa740] (97 bytes) hb_buffer_set_unicode_funcs
// void hb_buffer_set_unicode_funcs(int a1, int a2);
// [0x12aa7b0] (12 bytes) hb_buffer_get_unicode_funcs
// int hb_buffer_get_unicode_funcs(int a1);
// [0x12aa7c0] (19 bytes) hb_buffer_set_direction
// uint32_t *hb_buffer_set_direction(uint32_t *a1, int a2);
// [0x12aa7e0] (12 bytes) hb_buffer_get_direction
// int hb_buffer_get_direction(int a1);
// [0x12aa7f0] (19 bytes) hb_buffer_set_script
// uint32_t *hb_buffer_set_script(uint32_t *a1, int a2);
// [0x12aa810] (12 bytes) hb_buffer_get_script
// int hb_buffer_get_script(int a1);
// [0x12aa820] (19 bytes) hb_buffer_set_language
// uint32_t *hb_buffer_set_language(uint32_t *a1, int a2);
// [0x12aa840] (12 bytes) hb_buffer_get_language
// int hb_buffer_get_language(int a1);
// [0x12aa850] (43 bytes) hb_buffer_set_segment_properties
// int hb_buffer_set_segment_properties(int64_t a1);
// [0x12aa880] (38 bytes) hb_buffer_get_segment_properties
// uint32_t *hb_buffer_get_segment_properties(uint32_t *a1, uint32_t *a2);
// [0x12aa8b0] (19 bytes) hb_buffer_set_flags
// uint32_t *hb_buffer_set_flags(uint32_t *a1, int a2);
// [0x12aa8d0] (12 bytes) hb_buffer_get_flags
// int hb_buffer_get_flags(int a1);
// [0x12aa8e0] (19 bytes) hb_buffer_set_replacement_codepoint
// uint32_t *hb_buffer_set_replacement_codepoint(uint32_t *a1, int a2);
// [0x12aa900] (12 bytes) hb_buffer_get_replacement_codepoint
// int hb_buffer_get_replacement_codepoint(int a1);
// [0x12aa910] (420 bytes) hb_buffer_reset
// void hb_buffer_reset(int a1);
// [0x12aaac0] (382 bytes) hb_buffer_clear_contents
// int hb_buffer_clear_contents(int a1);
// [0x12aac40] (52 bytes) hb_buffer_pre_allocate
// int hb_buffer_pre_allocate(int a1, unsigned int a2);
// [0x12aac80] (15 bytes) hb_buffer_allocation_successful
// int hb_buffer_allocation_successful(int a1);
// [0x12aac90] (109 bytes) hb_buffer_add
// uint32_t *hb_buffer_add(uint32_t *a1, int a2, int a3);
// [0x12aad00] (252 bytes) hb_buffer_set_length
// bool hb_buffer_set_length(int a1, unsigned int a2);
// [0x12aae00] (12 bytes) hb_buffer_get_length
// int hb_buffer_get_length(int a1);
// [0x12aae10] (21 bytes) hb_buffer_get_glyph_infos
// int hb_buffer_get_glyph_infos(int a1, uint32_t *a2);
// [0x12aae30] (132 bytes) hb_buffer_get_glyph_positions
// int hb_buffer_get_glyph_positions(int a1, uint32_t *a2);
// [0x12aaec0] (483 bytes) hb_buffer_reverse
// unsigned int hb_buffer_reverse(uint32_t *a1);
// [0x12ab0b0] (1533 bytes) hb_buffer_reverse_clusters
// unsigned int hb_buffer_reverse_clusters(uint32_t *a1);
// [0x12ab6b0] (268 bytes) hb_buffer_guess_segment_properties
// int hb_buffer_guess_segment_properties(uint32_t *a1);
// [0x12ab7c0] (3283 bytes) hb_buffer_add_utf8
// unsigned int hb_buffer_add_utf8(uint32_t *a1, char *s, size_t a3, int a4, int a5);
// [0x12ac4a0] (2562 bytes) hb_buffer_add_utf16
// unsigned int hb_buffer_add_utf16(uint32_t *a1, uint16_t *a2, int a3, int a4, int a5);
// [0x12aceb0] (1186 bytes) hb_buffer_add_utf32
// unsigned int hb_buffer_add_utf32(uint32_t *a1, unsigned int *a2, int a3, int a4, unsigned int a5);
// [0x12ad360] (1186 bytes) hb_buffer_add_codepoints
// unsigned int hb_buffer_add_codepoints(uint32_t *a1, unsigned int *a2, int a3, int a4, unsigned int a5);
// [0x12ad810] (2530 bytes) hb_buffer_normalize_glyphs
// int hb_buffer_normalize_glyphs(int a1);
// [0x12ae260] (324 bytes) hb_tag_from_string
// unsigned int hb_tag_from_string(uint8_t *a1, unsigned int a2);
// [0x12ae3b0] (35 bytes) hb_tag_to_string
// uint8_t *hb_tag_to_string(int a1, uint8_t *a2);
// [0x12ae3e0] (135 bytes) hb_direction_from_string
// int hb_direction_from_string(char *a1, int a2);
// [0x12ae470] (38 bytes) hb_direction_to_string
// const char *hb_direction_to_string(int a1);
// [0x12ae4a0] (379 bytes) hb_language_from_string
// char *hb_language_from_string(char *s, signed int a2);
// [0x12ae620] (11 bytes) hb_language_to_string
// int hb_language_to_string(int a1);
// [0x12ae630] (90 bytes) hb_language_get_default
// int hb_language_get_default();
// [0x12ae690] (161 bytes) hb_script_from_iso15924_tag
// unsigned int hb_script_from_iso15924_tag(int a1);
// [0x12ae740] (50 bytes) hb_script_from_string
// unsigned int hb_script_from_string(uint8_t *a1, unsigned int a2);
// [0x12ae780] (11 bytes) hb_script_to_iso15924_tag
// int hb_script_to_iso15924_tag(int a1);
// [0x12ae790] (287 bytes) hb_script_get_horizontal_direction
// int hb_script_get_horizontal_direction(unsigned int a1);
// [0x12aeb80] (31 bytes) hb_version
// uint32_t *hb_version(uint32_t *a1, uint32_t *a2, uint32_t *a3);
// [0x12aeba0] (22 bytes) hb_version_string
// const char *hb_version_string();
// [0x12aebc0] (31 bytes) hb_version_atleast
// bool hb_version_atleast(int a1, int a2, int a3);
// [0x12af440] (22 bytes) hb_font_funcs_get_empty
// void *hb_font_funcs_get_empty();
// [0x12af460] (209 bytes) hb_font_funcs_create
// uint32_t *hb_font_funcs_create();
// [0x12af540] (27 bytes) hb_font_funcs_reference
// uint32_t *hb_font_funcs_reference(uint32_t *a1);
// [0x12af560] (379 bytes) hb_font_funcs_destroy
// void hb_font_funcs_destroy(int *a1);
// [0x12af6e0] (70 bytes) hb_font_funcs_set_user_data
// int hb_font_funcs_set_user_data(uint32_t *a1, int a2, int a3, int a4, int a5);
// [0x12af730] (43 bytes) hb_font_funcs_get_user_data
// int hb_font_funcs_get_user_data(uint32_t *a1, int a2);
// [0x12af760] (19 bytes) hb_font_funcs_make_immutable
// uint32_t *hb_font_funcs_make_immutable(uint32_t *a1);
// [0x12af780] (12 bytes) hb_font_funcs_is_immutable
// int hb_font_funcs_is_immutable(int a1);
// [0x12af790] (164 bytes) hb_font_funcs_set_glyph_func
// int (*hb_font_funcs_set_glyph_func( uint32_t *a1, int a2, int (*a3)(int a1, int a2, int a3, int a4, uint32_t *a5), int (*a4)(int (*)(int a1, int a2, int a3, int a4, uint32_t *a5))))(int a1, int a2, int a3, int a4, uint32_t *a5);
// [0x12af840] (164 bytes) hb_font_funcs_set_glyph_h_advance_func
// int (*hb_font_funcs_set_glyph_h_advance_func( uint32_t *a1, int a2, int (*a3)(int a1, int a2, int a3), int (*a4)(int (*)(int a1, int a2, int a3))))(int a1, int a2, int a3);
// [0x12af8f0] (164 bytes) hb_font_funcs_set_glyph_v_advance_func
// int (*hb_font_funcs_set_glyph_v_advance_func( uint32_t *a1, int a2, int (*a3)(int a1, int a2, int a3), int (*a4)(int (*)(int a1, int a2, int a3))))(int a1, int a2, int a3);
// [0x12af9a0] (164 bytes) hb_font_funcs_set_glyph_h_origin_func
// int (*hb_font_funcs_set_glyph_h_origin_func( uint32_t *a1, int a2, int (*a3)(int a1, int a2, int a3, int *a4, uint32_t *a5), int (*a4)(int (*)(int a1, int a2, int a3, int *a4, uint32_t *a5))))(int a1, int a2, int a3, int *a4, uint32_t *a5);
// [0x12afa50] (164 bytes) hb_font_funcs_set_glyph_v_origin_func
// int (*hb_font_funcs_set_glyph_v_origin_func( uint32_t *a1, int a2, int (*a3)(int a1, int a2, int a3, int *a4, uint32_t *a5), int (*a4)(int (*)(int a1, int a2, int a3, int *a4, uint32_t *a5))))(int a1, int a2, int a3, int *a4, uint32_t *a5);
// [0x12afb00] (164 bytes) hb_font_funcs_set_glyph_h_kerning_func
// int (*hb_font_funcs_set_glyph_h_kerning_func( uint32_t *a1, int a2, int (*a3)(int a1, int a2, int a3, int a4), int (*a4)(int (*)(int a1, int a2, int a3, int a4))))(int a1, int a2, int a3, int a4);
// [0x12afbb0] (164 bytes) hb_font_funcs_set_glyph_v_kerning_func
// int (*hb_font_funcs_set_glyph_v_kerning_func( uint32_t *a1, int a2, int (*a3)(int a1, int a2, int a3, int a4), int (*a4)(int (*)(int a1, int a2, int a3, int a4))))(int a1, int a2, int a3, int a4);
// [0x12afc60] (164 bytes) hb_font_funcs_set_glyph_extents_func
// int (*hb_font_funcs_set_glyph_extents_func( uint32_t *a1, int a2, int (*a3)(uint32_t *a1, int a2, int a3, int *a4), int (*a4)(int (*)(uint32_t *a1, int a2, int a3, int *a4))))(uint32_t *a1, int a2, int a3, int *a4);
// [0x12afd10] (164 bytes) hb_font_funcs_set_glyph_contour_point_func
// int (*hb_font_funcs_set_glyph_contour_point_func( uint32_t *a1, int a2, int (*a3)(int a1, int a2, int a3, int a4, int *a5, uint32_t *a6), int (*a4)(int (*)(int a1, int a2, int a3, int a4, int *a5, uint32_t *a6))))(int a1, int a2, int a3, int a4, int *a5, uint32_t *a6);
// [0x12afdc0] (175 bytes) hb_font_funcs_set_glyph_name_func
// int (*hb_font_funcs_set_glyph_name_func( uint32_t *a1, int a2, int (*a3)(int a1, int a2, int a3, uint8_t *a4, int a5), int (*a4)(int (*)(int a1, int a2, int a3, uint8_t *a4, int a5))))(int a1, int a2, int a3, uint8_t *a4, int a5);
// [0x12afe70] (175 bytes) hb_font_funcs_set_glyph_from_name_func
// int (*hb_font_funcs_set_glyph_from_name_func( uint32_t *a1, int a2, int (*a3)(int a1, int a2, char *s, size_t a4, uint32_t *a5), int (*a4)(int (*)(int a1, int a2, char *s, size_t a4, uint32_t *a5))))(int a1, int a2, char *s, size_t a4, uint32_t *a5);
// [0x12aff20] (68 bytes) hb_font_get_glyph
// int hb_font_get_glyph(int a1, int a2, int a3, uint32_t *a4);
// [0x12aff70] (44 bytes) hb_font_get_glyph_h_advance
// int hb_font_get_glyph_h_advance(int a1, int a2);
// [0x12affa0] (44 bytes) hb_font_get_glyph_v_advance
// int hb_font_get_glyph_v_advance(int a1, int a2);
// [0x12affd0] (88 bytes) hb_font_get_glyph_h_origin
// int hb_font_get_glyph_h_origin(int a1, int a2, uint32_t *a3, uint32_t *a4);
// [0x12b0030] (88 bytes) hb_font_get_glyph_v_origin
// int hb_font_get_glyph_v_origin(int a1, int a2, uint32_t *a3, uint32_t *a4);
// [0x12b0090] (52 bytes) hb_font_get_glyph_h_kerning
// int hb_font_get_glyph_h_kerning(int a1, int a2, int a3);
// [0x12b00d0] (52 bytes) hb_font_get_glyph_v_kerning
// int hb_font_get_glyph_v_kerning(int a1, int a2, int a3);
// [0x12b0110] (81 bytes) hb_font_get_glyph_extents
// int hb_font_get_glyph_extents(int a1, int a2, uint32_t *a3);
// [0x12b0170] (84 bytes) hb_font_get_glyph_contour_point
// int hb_font_get_glyph_contour_point(int a1, int a2, int a3, uint32_t *a4, uint32_t *a5);
// [0x12b01d0] (86 bytes) hb_font_get_glyph_name
// int hb_font_get_glyph_name(int a1, int a2, uint8_t *a3, int a4);
// [0x12b0230] (125 bytes) hb_font_get_glyph_from_name
// int hb_font_get_glyph_from_name(int a1, char *s, size_t a3, uint32_t *a4);
// [0x12b02b0] (133 bytes) hb_font_get_glyph_advance_for_direction
// int hb_font_get_glyph_advance_for_direction(int a1, int a2, int a3, int *a4, int *a5);
// [0x12b0340] (372 bytes) hb_font_get_glyph_origin_for_direction
// int hb_font_get_glyph_origin_for_direction(uint32_t *a1, int a2, int a3, uint32_t *a4, uint32_t *a5);
// [0x12b04c0] (434 bytes) hb_font_add_glyph_origin_for_direction
// int hb_font_add_glyph_origin_for_direction(uint32_t *a1, int a2, int a3, uint32_t *a4, uint32_t *a5);
// [0x12b0680] (434 bytes) hb_font_subtract_glyph_origin_for_direction
// int hb_font_subtract_glyph_origin_for_direction(uint32_t *a1, int a2, int a3, uint32_t *a4, uint32_t *a5);
// [0x12b0840] (149 bytes) hb_font_get_glyph_kerning_for_direction
// int hb_font_get_glyph_kerning_for_direction(int a1, int a2, int a3, int a4, int *a5, int *a6);
// [0x12b08e0] (529 bytes) hb_font_get_glyph_extents_for_origin
// int hb_font_get_glyph_extents_for_origin(uint32_t *a1, int a2, int a3, uint32_t *a4);
// [0x12b0b00] (516 bytes) hb_font_get_glyph_contour_point_for_origin
// int hb_font_get_glyph_contour_point_for_origin(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5, uint32_t *a6);
// [0x12b0d10] (163 bytes) hb_font_glyph_to_string
// int hb_font_glyph_to_string(int a1, int a2, char *s, size_t maxlen);
// [0x12b0dc0] (684 bytes) hb_font_glyph_from_string
// bool hb_font_glyph_from_string( int a1, char *s, int n, unsigned int *a4, int a5, int a6, int a7, char *endptr, int a9, int a10, int a11, ...);
// [0x12b1070] (22 bytes) hb_font_get_empty
// void *hb_font_get_empty();
// [0x12b1090] (172 bytes) hb_font_create
// uint32_t *hb_font_create(uint32_t *a1);
// [0x12b1140] (27 bytes) hb_font_reference
// uint32_t *hb_font_reference(uint32_t *a1);
// [0x12b1160] (247 bytes) hb_font_destroy
// void hb_font_destroy(char *ptr);
// [0x12b1260] (70 bytes) hb_font_set_user_data
// int hb_font_set_user_data(uint32_t *a1, int a2, int a3, int a4, int a5);
// [0x12b12b0] (43 bytes) hb_font_get_user_data
// int hb_font_get_user_data(uint32_t *a1, int a2);
// [0x12b12e0] (19 bytes) hb_font_make_immutable
// uint32_t *hb_font_make_immutable(uint32_t *a1);
// [0x12b1300] (129 bytes) hb_font_create_sub_font
// uint32_t *hb_font_create_sub_font(int a1);
// [0x12b1390] (12 bytes) hb_font_is_immutable
// int hb_font_is_immutable(int a1);
// [0x12b13a0] (12 bytes) hb_font_get_parent
// int hb_font_get_parent(int a1);
// [0x12b13b0] (12 bytes) hb_font_get_face
// int hb_font_get_face(int a1);
// [0x12b13c0] (153 bytes) hb_font_set_funcs
// void hb_font_set_funcs(int a1, uint32_t *a2, int a3, void (*a4)(int));
// [0x12b1460] (87 bytes) hb_font_set_funcs_data
// int (*hb_font_set_funcs_data(uint32_t *a1, int a2, int (*a3)(int)))(uint32_t);
// [0x12b14c0] (26 bytes) hb_font_set_scale
// uint32_t *hb_font_set_scale(uint32_t *a1, int a2, int a3);
// [0x12b14e0] (33 bytes) hb_font_get_scale
// uint32_t *hb_font_get_scale(int a1, uint32_t *a2, uint32_t *a3);
// [0x12b1510] (26 bytes) hb_font_set_ppem
// uint32_t *hb_font_set_ppem(uint32_t *a1, int a2, int a3);
// [0x12b1530] (33 bytes) hb_font_get_ppem
// uint32_t *hb_font_get_ppem(int a1, uint32_t *a2, uint32_t *a3);
// [0x12b15a0] (2263 bytes) hb_feature_from_string
// int hb_feature_from_string(char *s, int a2, __int128 *a3);
// [0x12b1e80] (522 bytes) hb_feature_to_string
// void hb_feature_to_string(uint32_t *a1, void *dest, int a3);
// [0x12b2090] (136 bytes) hb_shape_list_shapers
// uint32_t *hb_shape_list_shapers();
// [0x12b2120] (231 bytes) hb_shape_full
// int hb_shape_full(int a1, int a2, void *src, int a4, int a5);
// [0x12b2210] (66 bytes) hb_shape
// int hb_shape(int a1, int a2, void *a3, int a4);
// [0x12b2260] (22 bytes) hb_shape_plan_get_empty
// void *hb_shape_plan_get_empty();
// [0x12b2280] (789 bytes) hb_shape_plan_create
// uint32_t *hb_shape_plan_create(uint32_t *empty, uint32_t *a2, void *src, int a4, const char **a5);
// [0x12b25a0] (27 bytes) hb_shape_plan_reference
// uint32_t *hb_shape_plan_reference(uint32_t *a1);
// [0x12b25c0] (241 bytes) hb_shape_plan_destroy
// void hb_shape_plan_destroy(char *ptr);
// [0x12b26c0] (70 bytes) hb_shape_plan_set_user_data
// int hb_shape_plan_set_user_data(uint32_t *a1, int a2, int a3, int a4, int a5);
// [0x12b2710] (43 bytes) hb_shape_plan_get_user_data
// int hb_shape_plan_get_user_data(uint32_t *a1, int a2);
// [0x12b2740] (361 bytes) hb_shape_plan_execute
// bool hb_shape_plan_execute(int a1, uint32_t *a2, uint32_t *a3, int a4, int a5);
// [0x12b28b0] (819 bytes) hb_shape_plan_create_cached
// char *hb_shape_plan_create_cached(uint32_t *a1, uint32_t *a2, char *src, int a4, const char **a5);
// [0x12b2bf0] (12 bytes) hb_shape_plan_get_shaper
// int hb_shape_plan_get_shaper(int a1);
// [0x12b2e40] (22 bytes) hb_unicode_funcs_get_empty
// void *hb_unicode_funcs_get_empty();
// [0x12b2e60] (27 bytes) hb_unicode_funcs_get_default
// void *hb_unicode_funcs_get_default();
// [0x12b2e80] (27 bytes) hb_unicode_funcs_reference
// uint32_t *hb_unicode_funcs_reference(uint32_t *a1);
// [0x12b2ea0] (360 bytes) hb_unicode_funcs_destroy
// void hb_unicode_funcs_destroy(char *a1);
// [0x12b3010] (70 bytes) hb_unicode_funcs_set_user_data
// int hb_unicode_funcs_set_user_data(uint32_t *a1, int a2, int a3, int a4, int a5);
// [0x12b3060] (43 bytes) hb_unicode_funcs_get_user_data
// int hb_unicode_funcs_get_user_data(uint32_t *a1, int a2);
// [0x12b3090] (16 bytes) hb_unicode_funcs_make_immutable
// int hb_unicode_funcs_make_immutable(int a1);
// [0x12b30a0] (261 bytes) hb_unicode_funcs_create
// uint32_t *hb_unicode_funcs_create(uint32_t *a1);
// [0x12b31b0] (13 bytes) hb_unicode_funcs_is_immutable
// int hb_unicode_funcs_is_immutable(int a1);
// [0x12b31c0] (51 bytes) hb_unicode_funcs_get_parent
// void *hb_unicode_funcs_get_parent(int a1);
// [0x12b3200] (115 bytes) hb_unicode_funcs_set_combining_class_func
// void hb_unicode_funcs_set_combining_class_func(int a1, int a2, int a3, int a4);
// [0x12b3280] (115 bytes) hb_unicode_funcs_set_eastasian_width_func
// void hb_unicode_funcs_set_eastasian_width_func(int a1, int a2, int a3, int a4);
// [0x12b3300] (115 bytes) hb_unicode_funcs_set_general_category_func
// void hb_unicode_funcs_set_general_category_func(int a1, int a2, int a3, int a4);
// [0x12b3380] (126 bytes) hb_unicode_funcs_set_mirroring_func
// void hb_unicode_funcs_set_mirroring_func(int a1, int a2, int a3, int a4);
// [0x12b3400] (126 bytes) hb_unicode_funcs_set_script_func
// void hb_unicode_funcs_set_script_func(int a1, int a2, int a3, int a4);
// [0x12b3480] (126 bytes) hb_unicode_funcs_set_compose_func
// void hb_unicode_funcs_set_compose_func(int a1, int a2, int a3, int a4);
// [0x12b3500] (126 bytes) hb_unicode_funcs_set_decompose_func
// void hb_unicode_funcs_set_decompose_func(int a1, int a2, int a3, int a4);
// [0x12b3580] (126 bytes) hb_unicode_funcs_set_decompose_compatibility_func
// void hb_unicode_funcs_set_decompose_compatibility_func(int a1, int a2, int a3, int a4);
// [0x12b3600] (34 bytes) hb_unicode_combining_class
// int hb_unicode_combining_class(int a1, int a2);
// [0x12b3630] (34 bytes) hb_unicode_eastasian_width
// int hb_unicode_eastasian_width(int a1, int a2);
// [0x12b3660] (34 bytes) hb_unicode_general_category
// int hb_unicode_general_category(int a1, int a2);
// [0x12b3690] (34 bytes) hb_unicode_mirroring
// int hb_unicode_mirroring(int a1, int a2);
// [0x12b36c0] (34 bytes) hb_unicode_script
// int hb_unicode_script(int a1, int a2);
// [0x12b36f0] (102 bytes) hb_unicode_compose
// int hb_unicode_compose(int a1, int a2, int a3, uint32_t *a4);
// [0x12b3760] (74 bytes) hb_unicode_decompose
// int hb_unicode_decompose(int a1, int a2, uint32_t *a3, uint32_t *a4);
// [0x12b37b0] (86 bytes) hb_unicode_decompose_compatibility
// char hb_unicode_decompose_compatibility(int a1, int a2, uint32_t *a3);
// [0x12b5a60] (68 bytes) hb_ot_shape_plan_collect_lookups
// int hb_ot_shape_plan_collect_lookups(int a1, int a2, int a3);
// [0x12b5ab0] (824 bytes) hb_ot_shape_glyphs_closure
// void hb_ot_shape_glyphs_closure(int a1, uint32_t *a2, char *src, int a4, int a5);
// [0x12b76c0] (659 bytes) OT::Lookup::serialize(OT::hb_serialize_context_t *,unsigned int,unsigned int,unsigned int)
// int OT::Lookup::serialize( OT::Lookup *this, OT::hb_serialize_context_t *a2, int16_t a3, unsigned int a4, int16_t a5);
// [0x12b7960] (1024 bytes) OT::CoverageFormat2::serialize(OT::hb_serialize_context_t *,OT::Supplier<OT::IntType<unsigned short,2u>> &,unsigned int)
// int OT::CoverageFormat2::serialize(uint8_t *a1, int a2, unsigned int *a3, unsigned int a4);
// [0x12b7d60] (954 bytes) OT::Coverage::serialize(OT::hb_serialize_context_t *,OT::Supplier<OT::IntType<unsigned short,2u>> &,unsigned int)
// int OT::Coverage::serialize(uint8_t *a1, int a2, unsigned int *a3, unsigned int a4);
// [0x12b8120] (1718 bytes) OT::SingleSubstFormat2::serialize(OT::hb_serialize_context_t *,OT::Supplier<OT::IntType<unsigned short,2u>> &,OT::Supplier<OT::IntType<unsigned short,2u>> &,unsigned int)
// int OT::SingleSubstFormat2::serialize(uint8_t *a1, int a2, unsigned int *a3, unsigned int *a4, unsigned int a5);
// [0x12b87e0] (746 bytes) OT::SingleSubst::serialize(OT::hb_serialize_context_t *,OT::Supplier<OT::IntType<unsigned short,2u>> &,OT::Supplier<OT::IntType<unsigned short,2u>> &,unsigned int)
// int OT::SingleSubst::serialize(uint8_t *a1, int a2, int a3, int a4, unsigned int a5);
// [0x12b8ad0] (803 bytes) OT::Ligature::serialize(OT::hb_serialize_context_t *,OT::IntType<unsigned short,2u>,OT::Supplier<OT::IntType<unsigned short,2u>> &,unsigned int)
// int OT::Ligature::serialize(unsigned int a1, int a2, int16_t a3, unsigned int *a4, int a5);
// [0x12b8e00] (863 bytes) OT::LigatureSet::serialize(OT::hb_serialize_context_t *,OT::Supplier<OT::IntType<unsigned short,2u>> &,OT::Supplier<unsigned int> &,unsigned int,OT::Supplier<OT::IntType<unsigned short,2u>> &)
// int OT::LigatureSet::serialize( uint8_t *a1, int a2, unsigned int *a3, unsigned int *a4, unsigned int a5, unsigned int *a6);
// [0x12b9160] (1741 bytes) OT::LigatureSubstFormat1::serialize(OT::hb_serialize_context_t *,OT::Supplier<OT::IntType<unsigned short,2u>> &,OT::Supplier<unsigned int> &,unsigned int,OT::Supplier<OT::IntType<unsigned short,2u>> &,OT::Supplier<unsigned int> &,OT::Supplier<OT::IntType<unsigned short,2u>> &)
// int OT::LigatureSubstFormat1::serialize( uint8_t *a1, int a2, unsigned int *a3, unsigned int *a4, unsigned int a5, unsigned int *a6, unsigned int *a7, unsigned int *a8);
// [0x12b9830] (148 bytes) OT::SubstLookup * OT::hb_serialize_context_t::copy<OT::SubstLookup>(void)
// OT::SubstLookup *OT::hb_serialize_context_t::copy<OT::SubstLookup>(OT::hb_serialize_context_t *this);
// [0x12c3bb0] (190 bytes) hb_ft_face_create
// int hb_ft_face_create(int a1, int a2);
// [0x12c3c70] (113 bytes) hb_ft_face_create_cached
// int hb_ft_face_create_cached(int a1);
// [0x12c3cf0] (246 bytes) hb_ft_font_create
// uint32_t *hb_ft_font_create(int a1, int a2);
// [0x12c3df0] (471 bytes) hb_ft_font_set_funcs
// int hb_ft_font_set_funcs(int a1);
// [0x12c3fd0] (64 bytes) hb_ft_font_get_face
// int hb_ft_font_get_face(int a1);
// [0x12c42a0] (22 bytes) hb_face_get_empty
// void *hb_face_get_empty();
// [0x12c42c0] (172 bytes) hb_face_create_for_tables
// uint32_t *hb_face_create_for_tables(int a1, int a2, void (*a3)(int));
// [0x12c4370] (27 bytes) hb_face_reference
// uint32_t *hb_face_reference(uint32_t *a1);
// [0x12c4390] (284 bytes) hb_face_destroy
// void hb_face_destroy(int *a1);
// [0x12c44b0] (70 bytes) hb_face_set_user_data
// int hb_face_set_user_data(uint32_t *a1, int a2, int a3, int a4, int a5);
// [0x12c4500] (43 bytes) hb_face_get_user_data
// int hb_face_get_user_data(uint32_t *a1, int a2);
// [0x12c4530] (19 bytes) hb_face_make_immutable
// uint32_t *hb_face_make_immutable(uint32_t *a1);
// [0x12c4550] (12 bytes) hb_face_is_immutable
// int hb_face_is_immutable(int a1);
// [0x12c4560] (75 bytes) hb_face_reference_table
// int hb_face_reference_table(int a1, int a2);
// [0x12c45b0] (75 bytes) hb_face_reference_blob
// int hb_face_reference_blob(int a1);
// [0x12c4600] (19 bytes) hb_face_set_index
// int hb_face_set_index(int a1, int a2);
// [0x12c4620] (12 bytes) hb_face_get_index
// int hb_face_get_index(int a1);
// [0x12c4630] (19 bytes) hb_face_set_upem
// int hb_face_set_upem(int a1, int a2);
// [0x12c4790] (33 bytes) hb_face_get_upem
// int hb_face_get_upem(uint32_t *a1);
// [0x12c47c0] (19 bytes) hb_face_set_glyph_count
// int hb_face_set_glyph_count(int a1, int a2);
// [0x12c4920] (41 bytes) hb_face_get_glyph_count
// int hb_face_get_glyph_count(uint32_t *a1);
// [0x12c4950] (163 bytes) hb_face_create
// uint32_t *hb_face_create(int a1, int a2);
// [0x12c4a00] (482 bytes) OT::ArrayOf<OT::OffsetTo<OT::OffsetTable,OT::IntType<unsigned int,4u>>,OT::IntType<unsigned int,4u>>::sanitize(OT::hb_sanitize_context_t *,void *)
// int OT::ArrayOf<OT::OffsetTo<OT::OffsetTable,OT::IntType<unsigned int,4u>>,OT::IntType<unsigned int,4u>>::sanitize( OT::ArrayOf<OT::OffsetTo<OT::OffsetTable, OT::IntType<unsigned int, 4u>>, OT::IntType<unsigned int, 4u>> *this, OT::hb_sanitize_context_t *a2, char *a3);
// [0x12c4bf0] (1000 bytes) OT::Sanitizer<OT::OpenTypeFontFile>::sanitize(hb_blob_t *)
// void *OT::Sanitizer<OT::OpenTypeFontFile>::sanitize(void *a1);
// [0x12c6230] (233 bytes) hb_blob_destroy
// void hb_blob_destroy(int *a1);
// [0x12c6320] (22 bytes) hb_blob_get_empty
// void *hb_blob_get_empty();
// [0x12c6340] (293 bytes) hb_blob_create
// int *hb_blob_create(void *src, int n, int a3, int a4, void (*a5)(int));
// [0x12c6470] (27 bytes) hb_blob_reference
// uint32_t *hb_blob_reference(uint32_t *a1);
// [0x12c6490] (70 bytes) hb_blob_set_user_data
// int hb_blob_set_user_data(uint32_t *a1, int a2, int a3, int a4, int a5);
// [0x12c64e0] (43 bytes) hb_blob_get_user_data
// int hb_blob_get_user_data(uint32_t *a1, int a2);
// [0x12c6510] (16 bytes) hb_blob_make_immutable
// int hb_blob_make_immutable(int a1);
// [0x12c6520] (145 bytes) hb_blob_create_sub_blob
// int *hb_blob_create_sub_blob(uint32_t *a1, unsigned int a2, unsigned int a3);
// [0x12c65c0] (13 bytes) hb_blob_is_immutable
// int hb_blob_is_immutable(int a1);
// [0x12c65d0] (12 bytes) hb_blob_get_length
// int hb_blob_get_length(int a1);
// [0x12c65e0] (21 bytes) hb_blob_get_data
// int hb_blob_get_data(int a1, uint32_t *a2);
// [0x12c6600] (228 bytes) hb_blob_get_data_writable
// int hb_blob_get_data_writable(int a1, uint32_t *a2);
// [0x12c66f0] (22 bytes) hb_set_get_empty
// void *hb_set_get_empty();
// [0x12c6710] (137 bytes) hb_set_create
// char *hb_set_create();
// [0x12c67a0] (27 bytes) hb_set_reference
// uint32_t *hb_set_reference(uint32_t *a1);
// [0x12c67c0] (201 bytes) hb_set_destroy
// void hb_set_destroy(int *a1);
// [0x12c6890] (70 bytes) hb_set_set_user_data
// int hb_set_set_user_data(uint32_t *a1, int a2, int a3, int a4, int a5);
// [0x12c68e0] (43 bytes) hb_set_get_user_data
// int hb_set_get_user_data(uint32_t *a1, int a2);
// [0x12c6910] (15 bytes) hb_set_allocation_successful
// int hb_set_allocation_successful(int a1);
// [0x12c6920] (62 bytes) hb_set_clear
// void *hb_set_clear(uint8_t *a1);
// [0x12c6960] (37 bytes) hb_set_is_empty
// int16_t hb_set_is_empty(int a1);
// [0x12c6990] (41 bytes) hb_set_has
// bool hb_set_has(int a1, unsigned int a2);
// [0x12c69c0] (50 bytes) hb_set_add
// int hb_set_add(int a1, unsigned int a2);
// [0x12c6a00] (72 bytes) hb_set_add_range
// unsigned int hb_set_add_range(int a1, unsigned int a2, int a3);
// [0x12c6a50] (52 bytes) hb_set_del
// int hb_set_del(int a1, unsigned int a2);
// [0x12c6a90] (74 bytes) hb_set_del_range
// unsigned int hb_set_del_range(int a1, unsigned int a2, int a3);
// [0x12c6ae0] (46 bytes) hb_set_is_equal
// int16_t hb_set_is_equal(int a1, int a2);
// [0x12c6b10] (95 bytes) hb_set_set
// void hb_set_set(int a1, int a2);
// [0x12c6b70] (111 bytes) hb_set_union
// void hb_set_union(int a1, int a2);
// [0x12c6be0] (111 bytes) hb_set_intersect
// void hb_set_intersect(int a1, int a2);
// [0x12c6c50] (113 bytes) hb_set_subtract
// void hb_set_subtract(int a1, int a2);
// [0x12c6cd0] (111 bytes) hb_set_symmetric_difference
// void hb_set_symmetric_difference(int a1, int a2);
// [0x12c6d40] (241 bytes) hb_set_invert
// void hb_set_invert(int a1);
// [0x12c6e40] (68 bytes) hb_set_get_population
// int hb_set_get_population(int a1);
// [0x12c6e90] (82 bytes) hb_set_get_min
// int hb_set_get_min(int a1);
// [0x12c6ef0] (98 bytes) hb_set_get_max
// int hb_set_get_max(int a1);
// [0x12c6f60] (124 bytes) hb_set_next
// int hb_set_next(int a1, unsigned int *a2);
// [0x12c6fe0] (317 bytes) hb_set_next_range
// int hb_set_next_range(int a1, unsigned int *a2, unsigned int *a3);
// [0x12c8980] (88 bytes) hb_ot_layout_has_glyph_classes
// bool hb_ot_layout_has_glyph_classes(int a1);
// [0x12c89e0] (315 bytes) hb_ot_layout_get_glyphs_in_class
// unsigned int hb_ot_layout_get_glyphs_in_class(int a1, int a2, hb_set_t *a3);
// [0x12c8b20] (322 bytes) hb_ot_layout_table_get_script_tags
// int hb_ot_layout_table_get_script_tags(int a1, int a2, unsigned int a3, unsigned int *a4, int a5);
// [0x12c8c70] (274 bytes) hb_ot_layout_table_find_script
// int hb_ot_layout_table_find_script(int a1, int a2, unsigned int a3, unsigned int *a4);
// [0x12c8d90] (608 bytes) hb_ot_layout_table_choose_script
// int hb_ot_layout_table_choose_script(int a1, int a2, unsigned int *a3, unsigned int *a4, unsigned int *a5);
// [0x12c8ff0] (322 bytes) hb_ot_layout_table_get_feature_tags
// int hb_ot_layout_table_get_feature_tags(int a1, int a2, unsigned int a3, unsigned int *a4, int a5);
// [0x12c9140] (378 bytes) hb_ot_layout_script_get_language_tags
// int hb_ot_layout_script_get_language_tags( int a1, int a2, unsigned int a3, unsigned int a4, unsigned int *a5, int a6);
// [0x12c92c0] (436 bytes) hb_ot_layout_script_find_language
// int hb_ot_layout_script_find_language(int a1, int a2, unsigned int a3, unsigned int a4, unsigned int *a5);
// [0x12c9480] (521 bytes) hb_ot_layout_language_get_required_feature
// bool hb_ot_layout_language_get_required_feature( int a1, int a2, unsigned int a3, unsigned int a4, unsigned int *a5, int *a6);
// [0x12c9690] (74 bytes) hb_ot_layout_language_get_required_feature_index
// bool hb_ot_layout_language_get_required_feature_index( int a1, int a2, unsigned int a3, unsigned int a4, unsigned int *a5);
// [0x12c96e0] (912 bytes) hb_ot_layout_language_get_feature_indexes
// int hb_ot_layout_language_get_feature_indexes( int a1, int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int *a6, unsigned int a7);
// [0x12c9a70] (1112 bytes) hb_ot_layout_language_get_feature_tags
// int hb_ot_layout_language_get_feature_tags( int a1, int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int *a6, unsigned int a7);
// [0x12c9ed0] (583 bytes) hb_ot_layout_language_find_feature
// int hb_ot_layout_language_find_feature( int a1, int a2, unsigned int a3, unsigned int a4, int a5, unsigned int *a6);
// [0x12ca120] (793 bytes) hb_ot_layout_feature_get_lookups
// int hb_ot_layout_feature_get_lookups( int a1, int a2, unsigned int a3, unsigned int a4, unsigned int *a5, unsigned int a6);
// [0x12caac0] (47 bytes) hb_ot_layout_table_get_lookup_count
// int hb_ot_layout_table_get_lookup_count(int a1, int a2);
// [0x12caaf0] (233 bytes) hb_ot_layout_collect_lookups
// int hb_ot_layout_collect_lookups(int a1, int a2, unsigned int *a3, unsigned int *a4, int *a5, hb_set_t *a6);
// [0x12cabe0] (87 bytes) hb_ot_layout_has_substitution
// bool hb_ot_layout_has_substitution(int a1);
// [0x12cac50] (87 bytes) hb_ot_layout_has_positioning
// bool hb_ot_layout_has_positioning(int a1);
// [0x12caf80] (555 bytes) hb_ot_layout_get_size_params
// int hb_ot_layout_get_size_params(int a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, uint32_t *a6);
// [0x12cb200] (104 bytes) hb_ot_layout_get_glyph_class
// int hb_ot_layout_get_glyph_class(int a1, unsigned int a2);
// [0x12cb450] (786 bytes) hb_ot_layout_get_attach_points
// int hb_ot_layout_get_attach_points(int a1, unsigned int a2, unsigned int a3, unsigned int *a4, unsigned int a5);
// [0x12cb770] (302 bytes) hb_ot_layout_get_ligature_carets
// int hb_ot_layout_get_ligature_carets(int a1, int a2, unsigned int a3, int a4, uint32_t *a5, int a6);
// [0x12cd0b0] (129 bytes) hb_ot_layout_lookup_would_substitute
// int hb_ot_layout_lookup_would_substitute(int a1, unsigned int a2, unsigned int *a3, int a4, int a5);
// [0x12ceb90] (204 bytes) hb_ot_layout_lookup_substitute_closure
// int hb_ot_layout_lookup_substitute_closure(int a1, unsigned int a2, int a3);
// [0x12cec60] (2244 bytes) hb_ot_layout_lookup_collect_glyphs
// void hb_ot_layout_lookup_collect_glyphs( int a1, int a2, unsigned int a3, void *empty, hb_set_t *a5, void *a6, void *a7);
// [0x12d0450] (116 bytes) OT::hb_sanitize_context_t::check_array(void const*,unsigned int,unsigned int)const
// bool OT::hb_sanitize_context_t::check_array( OT::hb_sanitize_context_t *this, const void *a2, unsigned int a3, unsigned int a4);
// [0x12d04d0] (179 bytes) OT::Script::find_lang_sys_index(unsigned int,unsigned int *)const
// int OT::Script::find_lang_sys_index(OT::Script *this, unsigned int a2, unsigned int *a3);
// [0x12d0590] (486 bytes) OT::FeatureParams::sanitize(OT::hb_sanitize_context_t *,unsigned int)
// char OT::FeatureParams::sanitize(OT::FeatureParams *this, OT::hb_sanitize_context_t *a2, unsigned int a3);
// [0x12d0780] (229 bytes) OT::Coverage::Iter::next(void)
// OT::Coverage::Iter *OT::Coverage::Iter::next(OT::Coverage::Iter *this);
// [0x12d0870] (369 bytes) OT::Coverage::intersects(hb_set_t const*)const
// int OT::Coverage::intersects(OT::Coverage *this, const hb_set_t *a2);
// [0x12d09f0] (1654 bytes) OT::LigGlyph::get_lig_carets(hb_font_t *,hb_direction_t,unsigned int,unsigned int,unsigned int *,int *)const
// int OT::LigGlyph::get_lig_carets( uint8_t *a1, uint32_t *a2, int a3, int a4, unsigned int a5, unsigned int *a6, int a7);
// [0x12d1070] (630 bytes) OT::MarkGlyphSetsFormat1::sanitize(OT::hb_sanitize_context_t *)
// int OT::MarkGlyphSetsFormat1::sanitize(OT::MarkGlyphSetsFormat1 *this, OT::hb_sanitize_context_t *a2);
// [0x12d12f0] (441 bytes) OT::RuleSet::closure(OT::hb_closure_context_t *,OT::ContextClosureLookupContext &)const
// int OT::RuleSet::closure(uint8_t *a1, uint32_t *a2, int a3);
// [0x12d14b0] (545 bytes) OT::RuleSet::collect_glyphs(OT::hb_collect_glyphs_context_t *,OT::ContextCollectGlyphsLookupContext &)const
// int OT::RuleSet::collect_glyphs(uint8_t *a1, uint32_t *a2, int a3);
// [0x12d16e0] (742 bytes) OT::ChainRuleSet::closure(OT::hb_closure_context_t *,OT::ChainContextClosureLookupContext &)const
// int OT::ChainRuleSet::closure(uint8_t *a1, uint32_t *a2, int a3);
// [0x12d19d0] (789 bytes) OT::ChainRuleSet::collect_glyphs(OT::hb_collect_glyphs_context_t *,OT::ChainContextCollectGlyphsLookupContext &)const
// int OT::ChainRuleSet::collect_glyphs(uint8_t *a1, uint32_t *a2, int a3);
// [0x12d1cf0] (743 bytes) OT::ChainContextFormat2::closure(OT::hb_closure_context_t *)const
// unsigned int OT::ChainContextFormat2::closure(OT::ChainContextFormat2 *this, const hb_set_t **a2);
// [0x12d1fe0] (609 bytes) OT::ChainContextFormat3::closure(OT::hb_closure_context_t *)const
// int OT::ChainContextFormat3::closure(OT::ChainContextFormat3 *this, const hb_set_t **a2);
// [0x12d2250] (220 bytes) OT::GSUBGPOS::find_script_index(unsigned int,unsigned int *)const
// int OT::GSUBGPOS::find_script_index(OT::GSUBGPOS *this, unsigned int a2, unsigned int *a3);
// [0x12d2330] (676 bytes) OT::MultipleSubstFormat1::closure(OT::hb_closure_context_t *)const
// int OT::MultipleSubstFormat1::closure(OT::MultipleSubstFormat1 *this, OT::hb_closure_context_t *a2);
// [0x12d25e0] (848 bytes) OT::LigatureSubstFormat1::closure(OT::hb_closure_context_t *)const
// int OT::LigatureSubstFormat1::closure(OT::LigatureSubstFormat1 *this, OT::hb_closure_context_t *a2);
// [0x12d2930] (891 bytes) OT::LigatureSubstFormat1::collect_glyphs(OT::hb_collect_glyphs_context_t *)const
// OT::Coverage::Iter *OT::LigatureSubstFormat1::collect_glyphs( OT::LigatureSubstFormat1 *this, OT::hb_collect_glyphs_context_t *a2);
// [0x12d2cb0] (109 bytes) OT::SubstLookup::get_subtable(unsigned int)const
// char *OT::SubstLookup::get_subtable(OT::SubstLookup *this, unsigned int a2);
// [0x12d2d20] (1389 bytes) OT::ValueFormat::apply_value(hb_font_t *,hb_direction_t,void const*,OT::IntType<unsigned short,2u> const*,hb_glyph_position_t &)const
// int OT::ValueFormat::apply_value( uint8_t *a1, hb_font_t *a2, int a3, int a4, uint8_t *a5, int *a6);
// [0x12d3290] (1567 bytes) OT::Anchor::get_anchor(hb_font_t *,unsigned int,int *,int *)const
// int OT::Anchor::get_anchor(OT::Anchor *this, hb_font_t *a2, unsigned int a3, int *a4, int *a5);
// [0x12d3a40] (491 bytes) OT::ArrayOf<OT::Record<OT::LangSys>,OT::IntType<unsigned short,2u>>::sanitize(OT::hb_sanitize_context_t *,void *)
// int OT::ArrayOf<OT::Record<OT::LangSys>,OT::IntType<unsigned short,2u>>::sanitize( OT::ArrayOf<OT::Record<OT::LangSys>, OT::IntType<unsigned short, 2u>> *this, OT::hb_sanitize_context_t *a2, char *a3);
// [0x12d3ce0] (109 bytes) OT::ArrayOf<OT::IntType<unsigned short,2u>,OT::IntType<unsigned short,2u>>::sanitize(OT::hb_sanitize_context_t *)
// bool OT::ArrayOf<OT::IntType<unsigned short,2u>,OT::IntType<unsigned short,2u>>::sanitize( OT::ArrayOf<OT::IntType<unsigned short, 2u>, OT::IntType<unsigned short, 2u>> *this, OT::hb_sanitize_context_t *a2);
// [0x12d3de0] (243 bytes) OT::ClassDef::get_class(unsigned int)const
// int OT::ClassDef::get_class(OT::ClassDef *this, unsigned int a2);
// [0x12d3ee0] (281 bytes) OT::hb_apply_context_t::_set_glyph_props(unsigned int,unsigned int,bool,bool)const
// OT::hb_apply_context_t *OT::hb_apply_context_t::_set_glyph_props( uint8_t **this, unsigned int a2, unsigned int a3, bool a4, bool a5);
// [0x12d4000] (255 bytes) OT::hb_apply_context_t::replace_glyph(unsigned int)const
// int OT::hb_apply_context_t::replace_glyph(OT::hb_apply_context_t *this, unsigned int a2);
// [0x12d4100] (296 bytes) OT::Coverage::get_coverage(unsigned int)const
// int OT::Coverage::get_coverage(OT::Coverage *this, unsigned int a2);
// [0x12d4230] (295 bytes) OT::AlternateSubstFormat1::apply(OT::hb_apply_context_t *)const
// int OT::AlternateSubstFormat1::apply(OT::AlternateSubstFormat1 *this, OT::hb_apply_context_t *a2);
// [0x12d4360] (324 bytes) OT::hb_apply_context_t::check_glyph_property(hb_glyph_info_t const*,unsigned int)const
// char OT::hb_apply_context_t::check_glyph_property(int a1, int a2, unsigned int a3);
// [0x12d44b0] (522 bytes) OT::hb_apply_context_t::skipping_forward_iterator_t::next(void)
// int OT::hb_apply_context_t::skipping_forward_iterator_t::next( OT::hb_apply_context_t::skipping_forward_iterator_t *this);
// [0x12d46c0] (1145 bytes) OT::Ligature::apply(OT::hb_apply_context_t *)const
// int OT::Ligature::apply(OT::Ligature *this, OT::hb_apply_context_t *a2);
// [0x12d4b40] (267 bytes) OT::RuleSet::apply(OT::hb_apply_context_t *,OT::ContextApplyLookupContext &)const
// int OT::RuleSet::apply(uint8_t *a1, uint32_t *a2, int *a3);
// [0x12d4c50] (355 bytes) OT::ChainRuleSet::apply(OT::hb_apply_context_t *,OT::ChainContextApplyLookupContext &)const
// int OT::ChainRuleSet::apply(uint8_t *a1, uint32_t *a2, int *a3);
// [0x12d4dc0] (693 bytes) OT::PairPosFormat2::apply(OT::hb_apply_context_t *)const
// int OT::PairPosFormat2::apply(OT::PairPosFormat2 *this, OT::hb_apply_context_t *a2);
// [0x12d5080] (317 bytes) OT::ChainContextFormat2::apply(OT::hb_apply_context_t *)const
// int OT::ChainContextFormat2::apply(OT::ChainContextFormat2 *this, OT::hb_apply_context_t *a2);
// [0x12d51c0] (299 bytes) OT::ChainContextFormat3::apply(OT::hb_apply_context_t *)const
// int OT::ChainContextFormat3::apply(OT::ChainContextFormat3 *this, OT::hb_apply_context_t *a2);
// [0x12d52f0] (407 bytes) OT::ReverseChainSingleSubstFormat1::apply(OT::hb_apply_context_t *)const
// int OT::ReverseChainSingleSubstFormat1::apply( OT::ReverseChainSingleSubstFormat1 *this, OT::hb_apply_context_t *a2);
// [0x12d5490] (428 bytes) OT::MultipleSubstFormat1::apply(OT::hb_apply_context_t *)const
// int OT::MultipleSubstFormat1::apply(OT::MultipleSubstFormat1 *this, OT::hb_apply_context_t *a2);
// [0x12d5640] (325 bytes) OT::LigatureSubstFormat1::apply(OT::hb_apply_context_t *)const
// int OT::LigatureSubstFormat1::apply(OT::LigatureSubstFormat1 *this, OT::hb_apply_context_t *a2);
// [0x12d5790] (381 bytes) OT::LigatureSubstFormat1::would_apply(OT::hb_would_apply_context_t *)const
// int OT::LigatureSubstFormat1::would_apply(uint8_t *a1, int a2);
// [0x12d5910] (1163 bytes) OT::CursivePosFormat1::apply(OT::hb_apply_context_t *)const
// int OT::CursivePosFormat1::apply(OT::CursivePosFormat1 *this, OT::hb_apply_context_t *a2);
// [0x12d5da0] (749 bytes) OT::PairPosFormat1::apply(OT::hb_apply_context_t *)const
// int OT::PairPosFormat1::apply(OT::PairPosFormat1 *this, OT::hb_apply_context_t *a2);
// [0x12d6090] (465 bytes) OT::MarkBasePosFormat1::apply(OT::hb_apply_context_t *)const
// char OT::MarkBasePosFormat1::apply(OT::MarkBasePosFormat1 *this, OT::hb_apply_context_t *a2);
// [0x12d6270] (589 bytes) OT::MarkMarkPosFormat1::apply(OT::hb_apply_context_t *)const
// int OT::MarkMarkPosFormat1::apply(OT::MarkMarkPosFormat1 *this, OT::hb_apply_context_t *a2);
// [0x12d64c0] (682 bytes) OT::MarkLigPosFormat1::apply(OT::hb_apply_context_t *)const
// int OT::MarkLigPosFormat1::apply(OT::MarkLigPosFormat1 *this, OT::hb_apply_context_t *a2);
// [0x12d6770] (396 bytes) OT::OffsetTo<OT::Coverage,OT::IntType<unsigned short,2u>>::sanitize(OT::hb_sanitize_context_t *,void *)
// int OT::OffsetTo<OT::Coverage,OT::IntType<unsigned short,2u>>::sanitize( OT::OffsetTo<OT::Coverage, OT::IntType<unsigned short, 2u>> *this, OT::hb_sanitize_context_t *a2, char *a3);
// [0x12d6900] (445 bytes) OT::MultipleSubstFormat1::sanitize(OT::hb_sanitize_context_t *)
// int OT::MultipleSubstFormat1::sanitize(OT::MultipleSubstFormat1 *this, OT::hb_sanitize_context_t *a2);
// [0x12d6ac0] (776 bytes) OT::LigatureSubstFormat1::sanitize(OT::hb_sanitize_context_t *)
// int OT::LigatureSubstFormat1::sanitize(OT::LigatureSubstFormat1 *this, OT::hb_sanitize_context_t *a2);
// [0x12d6dd0] (408 bytes) OT::ArrayOf<OT::OffsetTo<OT::ArrayOf<OT::IntType<unsigned short,2u>,OT::IntType<unsigned short,2u>>,OT::IntType<unsigned short,2u>>,OT::IntType<unsigned short,2u>>::sanitize(OT::hb_sanitize_context_t *,void *)
// int OT::ArrayOf<OT::OffsetTo<OT::ArrayOf<OT::IntType<unsigned short,2u>,OT::IntType<unsigned short,2u>>,OT::IntType<unsigned short,2u>>,OT::IntType<unsigned short,2u>>::sanitize( OT::ArrayOf<OT::OffsetTo<OT::ArrayOf<OT::IntType<unsigned short, 2u>, OT::IntType<unsigned short, 2u>>, OT::IntType<unsigned short, 2u>>, OT::IntType<unsigned short, 2u>> *this, OT::hb_sanitize_context_t *a2, char *a3);
// [0x12d6f70] (264 bytes) OT::OffsetTo<OT::Device,OT::IntType<unsigned short,2u>>::sanitize(OT::hb_sanitize_context_t *,void *)
// int OT::OffsetTo<OT::Device,OT::IntType<unsigned short,2u>>::sanitize( OT::OffsetTo<OT::Device, OT::IntType<unsigned short, 2u>> *this, OT::hb_sanitize_context_t *a2, char *a3);
// [0x12d7080] (313 bytes) OT::ValueFormat::sanitize_value_devices(OT::hb_sanitize_context_t *,void *,OT::IntType<unsigned short,2u> *)
// int OT::ValueFormat::sanitize_value_devices(int a1, OT::hb_sanitize_context_t *a2, char *a3, int a4);
// [0x12d71c0] (415 bytes) OT::ValueFormat::sanitize_values_stride_unsafe(OT::hb_sanitize_context_t *,void *,OT::IntType<unsigned short,2u> *,unsigned int,unsigned int)
// int OT::ValueFormat::sanitize_values_stride_unsafe( int a1, OT::hb_sanitize_context_t *a2, char *a3, int a4, int a5, int a6);
// [0x12d7360] (852 bytes) OT::SinglePos::sanitize(OT::hb_sanitize_context_t *)
// int OT::SinglePos::sanitize(OT::SinglePos *this, OT::hb_sanitize_context_t *a2);
// [0x12d76c0] (755 bytes) OT::ArrayOf<OT::OffsetTo<OT::LigGlyph,OT::IntType<unsigned short,2u>>,OT::IntType<unsigned short,2u>>::sanitize(OT::hb_sanitize_context_t *,void *)
// int OT::ArrayOf<OT::OffsetTo<OT::LigGlyph,OT::IntType<unsigned short,2u>>,OT::IntType<unsigned short,2u>>::sanitize( OT::ArrayOf<OT::OffsetTo<OT::LigGlyph, OT::IntType<unsigned short, 2u>>, OT::IntType<unsigned short, 2u>> *this, OT::hb_sanitize_context_t *a2, char *a3);
// [0x12d79c0] (415 bytes) OT::OffsetTo<OT::ClassDef,OT::IntType<unsigned short,2u>>::sanitize(OT::hb_sanitize_context_t *,void *)
// int OT::OffsetTo<OT::ClassDef,OT::IntType<unsigned short,2u>>::sanitize( OT::OffsetTo<OT::ClassDef, OT::IntType<unsigned short, 2u>> *this, OT::hb_sanitize_context_t *a2, char *a3);
// [0x12d7b60] (1846 bytes) OT::PairPos::sanitize(OT::hb_sanitize_context_t *)
// int OT::PairPos::sanitize(OT::PairPos *this, OT::hb_sanitize_context_t *a2);
// [0x12d82a0] (707 bytes) OT::GDEF::sanitize(OT::hb_sanitize_context_t *)
// int OT::GDEF::sanitize(OT::GDEF *this, OT::hb_sanitize_context_t *a2);
// [0x12d8720] (692 bytes) OT::ChainContextFormat3::collect_glyphs(OT::hb_collect_glyphs_context_t *)const
// hb_set_t *OT::ChainContextFormat3::collect_glyphs(OT::ChainContextFormat3 *this, hb_set_t **a2);
// [0x12d89e0] (553 bytes) OT::ReverseChainSingleSubstFormat1::collect_glyphs(OT::hb_collect_glyphs_context_t *)const
// hb_set_t *OT::ReverseChainSingleSubstFormat1::collect_glyphs( OT::ReverseChainSingleSubstFormat1 *this, hb_set_t **a2);
// [0x12d8c10] (519 bytes) OT::ArrayOf<OT::OffsetTo<OT::Rule,OT::IntType<unsigned short,2u>>,OT::IntType<unsigned short,2u>>::sanitize(OT::hb_sanitize_context_t *,void *)
// int OT::ArrayOf<OT::OffsetTo<OT::Rule,OT::IntType<unsigned short,2u>>,OT::IntType<unsigned short,2u>>::sanitize( OT::ArrayOf<OT::OffsetTo<OT::Rule, OT::IntType<unsigned short, 2u>>, OT::IntType<unsigned short, 2u>> *this, OT::hb_sanitize_context_t *a2, char *a3);
// [0x12d8e20] (328 bytes) OT::ArrayOf<OT::OffsetTo<OT::RuleSet,OT::IntType<unsigned short,2u>>,OT::IntType<unsigned short,2u>>::sanitize(OT::hb_sanitize_context_t *,void *)
// int OT::ArrayOf<OT::OffsetTo<OT::RuleSet,OT::IntType<unsigned short,2u>>,OT::IntType<unsigned short,2u>>::sanitize( OT::ArrayOf<OT::OffsetTo<OT::RuleSet, OT::IntType<unsigned short, 2u>>, OT::IntType<unsigned short, 2u>> *this, OT::hb_sanitize_context_t *a2, char *a3);
// [0x12d8f70] (455 bytes) OT::Context::sanitize(OT::hb_sanitize_context_t *)
// int OT::Context::sanitize(OT::Context *this, OT::hb_sanitize_context_t *a2);
// [0x12d9140] (109 bytes) OT::ArrayOf<OT::LookupRecord,OT::IntType<unsigned short,2u>>::sanitize(OT::hb_sanitize_context_t *)
// bool OT::ArrayOf<OT::LookupRecord,OT::IntType<unsigned short,2u>>::sanitize( OT::ArrayOf<OT::LookupRecord, OT::IntType<unsigned short, 2u>> *this, OT::hb_sanitize_context_t *a2);
// [0x12d91b0] (1054 bytes) OT::ArrayOf<OT::OffsetTo<OT::ChainRuleSet,OT::IntType<unsigned short,2u>>,OT::IntType<unsigned short,2u>>::sanitize(OT::hb_sanitize_context_t *,void *)
// int OT::ArrayOf<OT::OffsetTo<OT::ChainRuleSet,OT::IntType<unsigned short,2u>>,OT::IntType<unsigned short,2u>>::sanitize( OT::ArrayOf<OT::OffsetTo<OT::ChainRuleSet, OT::IntType<unsigned short, 2u>>, OT::IntType<unsigned short, 2u>> *this, OT::hb_sanitize_context_t *a2, char *a3);
// [0x12d95d0] (185 bytes) OT::ArrayOf<OT::OffsetTo<OT::Coverage,OT::IntType<unsigned short,2u>>,OT::IntType<unsigned short,2u>>::sanitize(OT::hb_sanitize_context_t *,void *)
// int OT::ArrayOf<OT::OffsetTo<OT::Coverage,OT::IntType<unsigned short,2u>>,OT::IntType<unsigned short,2u>>::sanitize( OT::ArrayOf<OT::OffsetTo<OT::Coverage, OT::IntType<unsigned short, 2u>>, OT::IntType<unsigned short, 2u>> *this, OT::hb_sanitize_context_t *a2, char *a3);
// [0x12d9690] (480 bytes) OT::ChainContext::sanitize(OT::hb_sanitize_context_t *)
// int OT::ChainContext::sanitize(OT::ChainContext *this, OT::hb_sanitize_context_t *a2);
// [0x12d9870] (1130 bytes) OT::OffsetTo<OT::RecordListOf<OT::Feature>,OT::IntType<unsigned short,2u>>::sanitize(OT::hb_sanitize_context_t *,void *)
// int OT::OffsetTo<OT::RecordListOf<OT::Feature>,OT::IntType<unsigned short,2u>>::sanitize( OT::OffsetTo<OT::RecordListOf<OT::Feature>, OT::IntType<unsigned short, 2u>> *this, OT::hb_sanitize_context_t *a2, char *a3);
// [0x12d9ce0] (680 bytes) OT::OffsetTo<OT::OffsetListOf<OT::Lookup>,OT::IntType<unsigned short,2u>>::sanitize(OT::hb_sanitize_context_t *,void *)
// int OT::OffsetTo<OT::OffsetListOf<OT::Lookup>,OT::IntType<unsigned short,2u>>::sanitize( OT::OffsetTo<OT::OffsetListOf<OT::Lookup>, OT::IntType<unsigned short, 2u>> *this, OT::hb_sanitize_context_t *a2, char *a3);
// [0x12d9f90] (206 bytes) OT::Extension<OT::ExtensionSubst>::sanitize(OT::hb_sanitize_context_t *)
// int OT::Extension<OT::ExtensionSubst>::sanitize( OT::Extension<OT::ExtensionSubst> *this, OT::hb_sanitize_context_t *a2);
// [0x12da060] (795 bytes) OT::SubstLookupSubTable::sanitize(OT::hb_sanitize_context_t *,unsigned int)
// int OT::SubstLookupSubTable::sanitize( OT::SubstLookupSubTable *this, OT::hb_sanitize_context_t *a2, unsigned int a3);
// [0x12da3e0] (49 bytes) OT::Extension<OT::ExtensionSubst>::get_type(void)const
// int OT::Extension<OT::ExtensionSubst>::get_type(OT::Extension<OT::ExtensionSubst> *this);
// [0x12da420] (1201 bytes) OT::OffsetTo<OT::OffsetListOf<OT::SubstLookup>,OT::IntType<unsigned short,2u>>::sanitize(OT::hb_sanitize_context_t *,void *)
// int OT::OffsetTo<OT::OffsetListOf<OT::SubstLookup>,OT::IntType<unsigned short,2u>>::sanitize( OT::OffsetTo<OT::OffsetListOf<OT::SubstLookup>, OT::IntType<unsigned short, 2u>> *this, OT::hb_sanitize_context_t *a2, char *a3);
// [0x12da8e0] (111 bytes) OT::SubstLookupSubTable const& OT::Extension<OT::ExtensionSubst>::get_subtable<OT::SubstLookupSubTable>(void)const
// char *OT::Extension<OT::ExtensionSubst>::get_subtable<OT::SubstLookupSubTable>( OT::Extension<OT::ExtensionSubst> *this);
// [0x12da950] (362 bytes) OT::OffsetTo<OT::Anchor,OT::IntType<unsigned short,2u>>::sanitize(OT::hb_sanitize_context_t *,void *)
// int OT::OffsetTo<OT::Anchor,OT::IntType<unsigned short,2u>>::sanitize( OT::OffsetTo<OT::Anchor, OT::IntType<unsigned short, 2u>> *this, OT::hb_sanitize_context_t *a2, char *a3);
// [0x12daac0] (352 bytes) OT::OffsetTo<OT::MarkArray,OT::IntType<unsigned short,2u>>::sanitize(OT::hb_sanitize_context_t *,void *)
// int OT::OffsetTo<OT::MarkArray,OT::IntType<unsigned short,2u>>::sanitize( OT::OffsetTo<OT::MarkArray, OT::IntType<unsigned short, 2u>> *this, OT::hb_sanitize_context_t *a2, char *a3);
// [0x12dad50] (443 bytes) OT::MarkLigPosFormat1::sanitize(OT::hb_sanitize_context_t *)
// int OT::MarkLigPosFormat1::sanitize(OT::MarkLigPosFormat1 *this, OT::hb_sanitize_context_t *a2);
// [0x12daf10] (206 bytes) OT::Extension<OT::ExtensionPos>::sanitize(OT::hb_sanitize_context_t *)
// int OT::Extension<OT::ExtensionPos>::sanitize( OT::Extension<OT::ExtensionPos> *this, OT::hb_sanitize_context_t *a2);
// [0x12dafe0] (733 bytes) OT::PosLookupSubTable::sanitize(OT::hb_sanitize_context_t *,unsigned int)
// int OT::PosLookupSubTable::sanitize( OT::PosLookupSubTable *this, OT::hb_sanitize_context_t *a2, unsigned int a3);
// [0x12db2c0] (452 bytes) OT::Sanitizer<OT::GDEF>::sanitize(hb_blob_t *)
// int *OT::Sanitizer<OT::GDEF>::sanitize(int *a1);
// [0x12db490] (1057 bytes) OT::hb_closure_context_t::return_t OT::SingleSubst::dispatch<OT::hb_closure_context_t>(OT::hb_closure_context_t::return_t*)const
// int OT::SingleSubst::dispatch<OT::hb_closure_context_t>(uint8_t *a1, int a2);
// [0x12db8c0] (1395 bytes) OT::hb_closure_context_t::return_t OT::Context::dispatch<OT::hb_closure_context_t>(OT::hb_closure_context_t::return_t*)const
// int OT::Context::dispatch<OT::hb_closure_context_t>(uint8_t *a1, int a2);
// [0x12dbe40] (1017 bytes) OT::hb_collect_glyphs_context_t::return_t OT::SingleSubst::dispatch<OT::hb_collect_glyphs_context_t>(OT::hb_collect_glyphs_context_t::return_t*)const
// int OT::SingleSubst::dispatch<OT::hb_collect_glyphs_context_t>(uint8_t *a1, int a2);
// [0x12dc240] (1014 bytes) OT::hb_collect_glyphs_context_t::return_t OT::Context::dispatch<OT::hb_collect_glyphs_context_t>(OT::hb_collect_glyphs_context_t::return_t*)const
// int OT::Context::dispatch<OT::hb_collect_glyphs_context_t>(uint8_t *a1, int a2);
// [0x12dc640] (364 bytes) OT::hb_collect_glyphs_context_t::return_t OT::ChainContext::dispatch<OT::hb_collect_glyphs_context_t>(OT::hb_collect_glyphs_context_t::return_t*)const
// int OT::ChainContext::dispatch<OT::hb_collect_glyphs_context_t>(OT::ChainContextFormat3 *a1, hb_set_t **a2);
// [0x12dc7b0] (629 bytes) OT::hb_apply_context_t::return_t OT::Context::dispatch<OT::hb_apply_context_t>(OT::hb_apply_context_t::return_t*)const
// int OT::Context::dispatch<OT::hb_apply_context_t>(uint8_t *a1, uint32_t *a2);
// [0x12dca30] (492 bytes) OT::hb_apply_context_t::return_t OT::Extension<OT::ExtensionSubst>::dispatch<OT::hb_apply_context_t>(OT::hb_apply_context_t::return_t*)const
// int OT::Extension<OT::ExtensionSubst>::dispatch<OT::hb_apply_context_t>( uint8_t *a1, OT::hb_apply_context_t *a2);
// [0x12dcc20] (401 bytes) OT::hb_apply_context_t::return_t OT::SubstLookupSubTable::dispatch<OT::hb_apply_context_t>(OT::hb_apply_context_t::return_t*,unsigned int)const
// int OT::SubstLookupSubTable::dispatch<OT::hb_apply_context_t>( OT::AlternateSubstFormat1 *a1, OT::hb_apply_context_t *a2, int a3);
// [0x12dcdc0] (1877 bytes) OT::hb_apply_context_t::return_t OT::SubstLookup::dispatch<OT::hb_apply_context_t>(OT::hb_apply_context_t::return_t*)const
// int OT::SubstLookup::dispatch<OT::hb_apply_context_t>(uint8_t *a1, OT::hb_apply_context_t *a2);
// [0x12dd520] (279 bytes) OT::SubstLookup::apply_recurse_func(OT::hb_apply_context_t *,unsigned int)
// int OT::SubstLookup::apply_recurse_func(OT::SubstLookup *this, OT::hb_apply_context_t *a2);
// [0x12dd640] (580 bytes) OT::hb_apply_context_t::return_t OT::Extension<OT::ExtensionPos>::dispatch<OT::hb_apply_context_t>(OT::hb_apply_context_t::return_t*)const
// char OT::Extension<OT::ExtensionPos>::dispatch<OT::hb_apply_context_t>( uint8_t *a1, OT::hb_apply_context_t *a2);
// [0x12dd890] (489 bytes) OT::hb_apply_context_t::return_t OT::PosLookupSubTable::dispatch<OT::hb_apply_context_t>(OT::hb_apply_context_t::return_t*,unsigned int)const
// char OT::PosLookupSubTable::dispatch<OT::hb_apply_context_t>( OT::PairPosFormat2 *a1, OT::hb_apply_context_t *a2, int a3);
// [0x12dda80] (1149 bytes) OT::hb_apply_context_t::return_t OT::PosLookup::dispatch<OT::hb_apply_context_t>(OT::hb_apply_context_t::return_t*)const
// char OT::PosLookup::dispatch<OT::hb_apply_context_t>(uint8_t *a1, OT::hb_apply_context_t *a2);
// [0x12ddf00] (279 bytes) OT::PosLookup::apply_recurse_func(OT::hb_apply_context_t *,unsigned int)
// int OT::PosLookup::apply_recurse_func(OT::PosLookup *this, OT::hb_apply_context_t *a2);
// [0x12de020] (411 bytes) OT::Record<OT::Script>::sanitize(OT::hb_sanitize_context_t *,void *)
// int OT::Record<OT::Script>::sanitize(OT::Record<OT::Script> *this, OT::hb_sanitize_context_t *a2, char *a3);
// [0x12de1c0] (390 bytes) OT::GSUBGPOS::sanitize(OT::hb_sanitize_context_t *)
// int OT::GSUBGPOS::sanitize(OT::GSUBGPOS *this, OT::hb_sanitize_context_t *a2);
// [0x12de350] (516 bytes) OT::Sanitizer<OT::GSUB>::sanitize(hb_blob_t *)
// int *OT::Sanitizer<OT::GSUB>::sanitize(int *a1);
// [0x12ded10] (494 bytes) OT::hb_closure_context_t::return_t OT::Extension<OT::ExtensionSubst>::dispatch<OT::hb_closure_context_t>(OT::hb_closure_context_t::return_t*)const
// int OT::Extension<OT::ExtensionSubst>::dispatch<OT::hb_closure_context_t>( uint8_t *a1, OT::hb_closure_context_t *a2);
// [0x12def00] (427 bytes) OT::hb_closure_context_t::return_t OT::SubstLookupSubTable::dispatch<OT::hb_closure_context_t>(OT::hb_closure_context_t::return_t*,unsigned int)const
// int OT::SubstLookupSubTable::dispatch<OT::hb_closure_context_t>( OT::ChainContextFormat2 *a1, OT::hb_closure_context_t *a2, int a3);
// [0x12df0b0] (661 bytes) OT::hb_closure_context_t::return_t OT::SubstLookup::dispatch<OT::hb_closure_context_t>(OT::hb_closure_context_t::return_t*)const
// int OT::SubstLookup::dispatch<OT::hb_closure_context_t>(uint8_t *a1, OT::hb_closure_context_t *a2);
// [0x12df350] (164 bytes) OT::hb_closure_context_t::return_t OT::SubstLookup::dispatch_recurse_func<OT::hb_closure_context_t>(OT::hb_closure_context_t::return_t*,unsigned int)
// int OT::SubstLookup::dispatch_recurse_func<OT::hb_closure_context_t>( OT::hb_closure_context_t *a1, unsigned int a2);
// [0x12df6a0] (426 bytes) OT::hb_collect_glyphs_context_t::return_t OT::Extension<OT::ExtensionSubst>::dispatch<OT::hb_collect_glyphs_context_t>(OT::hb_collect_glyphs_context_t::return_t*)const
// int OT::Extension<OT::ExtensionSubst>::dispatch<OT::hb_collect_glyphs_context_t>( uint8_t *a1, OT::hb_collect_glyphs_context_t *a2);
// [0x12df850] (361 bytes) OT::hb_collect_glyphs_context_t::return_t OT::SubstLookupSubTable::dispatch<OT::hb_collect_glyphs_context_t>(OT::hb_collect_glyphs_context_t::return_t*,unsigned int)const
// int OT::SubstLookupSubTable::dispatch<OT::hb_collect_glyphs_context_t>( OT::ChainContextFormat3 *a1, OT::hb_collect_glyphs_context_t *a2, int a3);
// [0x12df9c0] (909 bytes) OT::hb_collect_glyphs_context_t::return_t OT::SubstLookup::dispatch<OT::hb_collect_glyphs_context_t>(OT::hb_collect_glyphs_context_t::return_t*)const
// int OT::SubstLookup::dispatch<OT::hb_collect_glyphs_context_t>(uint8_t *a1, hb_set_t **a2);
// [0x12dfd50] (164 bytes) OT::hb_collect_glyphs_context_t::return_t OT::SubstLookup::dispatch_recurse_func<OT::hb_collect_glyphs_context_t>(OT::hb_collect_glyphs_context_t::return_t*,unsigned int)
// int OT::SubstLookup::dispatch_recurse_func<OT::hb_collect_glyphs_context_t>(hb_set_t **a1, unsigned int a2);
// [0x12dfe00] (654 bytes) OT::OffsetTo<OT::PosLookup,OT::IntType<unsigned short,2u>>::sanitize(OT::hb_sanitize_context_t *,void *)
// int OT::OffsetTo<OT::PosLookup,OT::IntType<unsigned short,2u>>::sanitize( OT::OffsetTo<OT::PosLookup, OT::IntType<unsigned short, 2u>> *this, OT::hb_sanitize_context_t *a2, char *a3);
// [0x12e0090] (302 bytes) OT::GPOS::sanitize(OT::hb_sanitize_context_t *)
// int OT::GPOS::sanitize(OT::GPOS *this, OT::hb_sanitize_context_t *a2);
// [0x12e01c0] (741 bytes) OT::Sanitizer<OT::GPOS>::sanitize(hb_blob_t *)
// int *OT::Sanitizer<OT::GPOS>::sanitize(int *a1);
// [0x12e1ca0] (383 bytes) hb_ot_tags_from_script
// int hb_ot_tags_from_script(unsigned int a1, int *a2, int *a3);
// [0x12e1e20] (223 bytes) hb_ot_tag_to_script
// int16_t hb_ot_tag_to_script(unsigned int a1);
// [0x12e1f00] (1537 bytes) hb_ot_tag_from_language
// unsigned int hb_ot_tag_from_language(int a1);
// [0x12e2510] (298 bytes) hb_ot_tag_to_language
// char *hb_ot_tag_to_language(int a1);
