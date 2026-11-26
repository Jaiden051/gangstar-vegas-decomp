#pragma once
// ============================================================================
// G4_UP8Shop/lib/savemanager/decompiled/savemanager_internal.h
// Library: savemanager | Module: savemanager_internal
// Binary Address Span: 0x1388270 .. 0x139f840 (123 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1388270] (2103 bytes) th_decode_headerin
// int th_decode_headerin(int a1, void **a2, char **a3, uint32_t *a4);
// [0x1388ab0] (74 bytes) th_setup_free
// void th_setup_free(char *ptr);
// [0x1388b00] (928 bytes) sub_1388B00
// uint8_t *sub_1388B00( uint8_t *a1, int a2, uint8_t *a3, int a4, int a5, signed int a6, uint32_t *a7, uint32_t *a8);
// [0x1388ea0] (678 bytes) sub_1388EA0
// uint8_t *sub_1388EA0(uint8_t *result, int a2, int a3, signed int a4, uint32_t *a5);
// [0x1389150] (3599 bytes) sub_1389150
// uint8_t *sub_1389150(uint8_t *a1, int a2, char a3, int a4, int a5, int a6);
// [0x1389f60] (145 bytes) sub_1389F60
// int sub_1389F60(int a1);
// [0x138a000] (42 bytes) sub_138A000
// int sub_138A000(int a1);
// [0x138a030] (175 bytes) sub_138A030
// int sub_138A030(int a1);
// [0x138a0e0] (55 bytes) sub_138A0E0
// int sub_138A0E0(int a1);
// [0x138a120] (228 bytes) sub_138A120
// int sub_138A120(int a1);
// [0x138a210] (871 bytes) th_decode_alloc
// uint32_t *th_decode_alloc(int a1, uint32_t *a2);
// [0x138a580] (130 bytes) th_decode_free
// void th_decode_free(void **ptr);
// [0x138a610] (418 bytes) th_decode_ctl
// int th_decode_ctl(int a1, int a2, uint32_t *a3, int a4);
// [0x138a7c0] (18922 bytes) th_decode_packetin
// int th_decode_packetin(int a1, uint32_t *a2, int64_t *a3);
// [0x138f1b0] (71 bytes) th_decode_ycbcr_out
// int th_decode_ycbcr_out(int a1, int a2);
// [0x138f200] (1060 bytes) oc_quant_params_unpack
// int oc_quant_params_unpack(int a1, int a2);
// [0x138f630] (807 bytes) oc_quant_params_clear
// void oc_quant_params_clear(int a1);
// [0x138f960] (39 bytes) oc_frag_copy
// int oc_frag_copy(int a1, int a2, int a3, int a4);
// [0x138f990] (137 bytes) oc_frag_copy_c
// int oc_frag_copy_c(uint32_t *a1, uint32_t *a2, int a3);
// [0x138fa20] (39 bytes) oc_frag_recon_intra
// int oc_frag_recon_intra(int a1, int a2, int a3, int a4);
// [0x138fa50] (2270 bytes) oc_frag_recon_intra_c
// int oc_frag_recon_intra_c(uint8_t *a1, int a2, int16_t *a3);
// [0x1390330] (47 bytes) oc_frag_recon_inter
// int oc_frag_recon_inter(int a1, int a2, int a3, int a4, int a5);
// [0x1390360] (608 bytes) oc_frag_recon_inter_c
// int oc_frag_recon_inter_c(uint8_t *a1, uint8_t *a2, int a3, int a4);
// [0x13905c0] (55 bytes) oc_frag_recon_inter2
// int oc_frag_recon_inter2(int a1, int a2, int a3, int a4, int a5, int a6);
// [0x1390600] (741 bytes) oc_frag_recon_inter2_c
// int oc_frag_recon_inter2_c(uint8_t *a1, uint8_t *a2, uint8_t *a3, int a4, int a5);
// [0x13908f0] (16 bytes) oc_restore_fpu
// int oc_restore_fpu(int a1);
// [0x1390900] (9 bytes) oc_restore_fpu_c
// void oc_restore_fpu_c();
// [0x1390910] (1291 bytes) sub_1390910
// int sub_1390910(char *a1);
// [0x1390e20] (909 bytes) sub_1390E20
// int sub_1390E20(uint8_t *a1, int a2);
// [0x13911b0] (4183 bytes) sub_13911B0
// uint8_t *sub_13911B0(char *a1, uint8_t **a2);
// [0x1392210] (1957 bytes) sub_1392210
// int sub_1392210(int a1);
// [0x13929c0] (2095 bytes) sub_13929C0
// int sub_13929C0(char *a1, int a2);
// [0x13931f0] (2595 bytes) sub_13931F0
// uint8_t *sub_13931F0(int a1, uint8_t **a2);
// [0x1393c20] (2203 bytes) sub_1393C20
// uint8_t *sub_1393C20(uint32_t *a1, int a2, int a3, int a4, uint8_t **a5);
// [0x13944c0] (1678 bytes) sub_13944C0
// int sub_13944C0(int a1, int a2, int a3);
// [0x1394b50] (586 bytes) oc_huff_trees_unpack
// int oc_huff_trees_unpack(int a1, int a2);
// [0x1394da0] (616 bytes) oc_huff_trees_copy
// char oc_huff_trees_copy(int a1, int a2);
// [0x1395010] (51 bytes) oc_huff_trees_clear
// void oc_huff_trees_clear(int a1);
// [0x1395050] (208 bytes) oc_huff_token_decode
// int oc_huff_token_decode(unsigned int *a1, uint8_t *a2);
// [0x1395120] (117 bytes) th_info_init
// int th_info_init(int a1);
// [0x13951a0] (93 bytes) th_info_clear
// int th_info_clear(uint8_t *a1);
// [0x1395200] (32 bytes) th_comment_init
// uint32_t *th_comment_init(uint32_t *a1);
// [0x1395220] (225 bytes) th_comment_add
// int th_comment_add(int a1, char *s);
// [0x1395310] (173 bytes) th_comment_add_tag
// void th_comment_add_tag(int a1, const char *s, char *src);
// [0x13953c0] (244 bytes) th_comment_query
// int th_comment_query(int *a1, char *s, int a3);
// [0x13954c0] (212 bytes) th_comment_query_count
// int th_comment_query_count(int *a1, char *s);
// [0x13955a0] (128 bytes) th_comment_clear
// void th_comment_clear(int a1);
// [0x1395620] (88 bytes) sub_1395620
// int sub_1395620(uint8_t *a1, char *a2);
// [0x1395680] (111 bytes) sub_1395680
// int sub_1395680(uint8_t *a1, char *a2);
// [0x13956f0] (111 bytes) sub_13956F0
// int sub_13956F0(uint8_t *a1, char *a2);
// [0x1395760] (19 bytes) sub_1395760
// uint32_t *sub_1395760(uint32_t *a1, uint32_t *a2);
// [0x1395780] (24 bytes) oc_ilog
// int oc_ilog(unsigned int a1);
// [0x13957a0] (93 bytes) oc_malloc_2d
// uint32_t *oc_malloc_2d(int a1, int a2, int a3);
// [0x1395800] (101 bytes) oc_calloc_2d
// uint32_t *oc_calloc_2d(int a1, int a2, int a3);
// [0x1395870] (34 bytes) oc_free_2d
// void oc_free_2d(void *ptr);
// [0x13958a0] (139 bytes) oc_ycbcr_buffer_flip
// uint32_t *oc_ycbcr_buffer_flip(uint32_t *a1, uint32_t *a2);
// [0x1395930] (22 bytes) th_version_string
// const char *th_version_string();
// [0x1395950] (12 bytes) th_version_number
// int th_version_number();
// [0x1395960] (25 bytes) th_packet_isheader
// int th_packet_isheader(int a1);
// [0x1395980] (36 bytes) th_packet_iskeyframe
// int th_packet_iskeyframe(int a1);
// [0x13959b0] (1070 bytes) oc_dequant_tables_init
// int oc_dequant_tables_init(int a1, int a2, int a3);
// [0x1395de0] (43 bytes) sub_1395DE0
// int sub_1395DE0(int a1, uint32_t *a2, int a3, int a4);
// [0x1395e10] (58 bytes) sub_1395E10
// int sub_1395E10(uint32_t *a1, uint32_t *a2, int a3, int a4);
// [0x1395e50] (60 bytes) sub_1395E50
// uint32_t *sub_1395E50(uint32_t *a1, uint32_t *a2, int a3, int a4);
// [0x1395e90] (78 bytes) sub_1395E90
// int *sub_1395E90(int *a1, int a2);
// [0x1395ee0] (171 bytes) oc_state_frag_copy_list_c
// int oc_state_frag_copy_list_c(int a1, int a2, int a3, int a4, int a5, int a6);
// [0x1395f90] (5282 bytes) oc_state_loop_filter_frag_rows_c
// int oc_state_loop_filter_frag_rows_c(int a1, int a2, int a3, int a4, int a5, int a6);
// [0x1397440] (106 bytes) oc_state_vtable_init_c
// uint32_t *oc_state_vtable_init_c(uint32_t *a1);
// [0x13974b0] (34 bytes) oc_state_vtable_init
// uint32_t *oc_state_vtable_init(uint32_t *a1);
// [0x13974e0] (6494 bytes) oc_state_init
// int oc_state_init(void **s, int a2, unsigned int a3);
// [0x1398e40] (154 bytes) oc_state_clear
// void oc_state_clear(void **a1);
// [0x1398ee0] (246 bytes) oc_state_borders_fill_rows
// char *oc_state_borders_fill_rows(int a1, int a2, int a3, int a4, int a5);
// [0x1398fe0] (300 bytes) oc_state_borders_fill_caps
// char *oc_state_borders_fill_caps(int a1, int a2, int a3);
// [0x1399110] (243 bytes) oc_state_borders_fill
// char *oc_state_borders_fill(int a1, int a2);
// [0x1399210] (241 bytes) oc_state_get_mv_offsets
// int oc_state_get_mv_offsets(int a1, int *a2, int a3, int a4, int a5);
// [0x1399310] (589 bytes) oc_state_frag_recon_c
// int oc_state_frag_recon_c(uint32_t *a1, int a2, int a3, int a4, int a5, uint16_t a6);
// [0x1399560] (60 bytes) oc_state_frag_recon
// int oc_state_frag_recon(int a1, int a2, int a3, int a4, int a5, uint16_t a6);
// [0x13995a0] (59 bytes) oc_state_frag_copy_list
// int oc_state_frag_copy_list(int a1, int a2, int a3, int a4, int a5, int a6);
// [0x13995e0] (262 bytes) oc_state_loop_filter_init
// int oc_state_loop_filter_init(int a1, uint8_t *a2);
// [0x13996f0] (59 bytes) oc_state_loop_filter_frag_rows
// int oc_state_loop_filter_frag_rows(int a1, int a2, int a3, int a4, int a5, int a6);
// [0x1399730] (236 bytes) th_granule_frame
// int th_granule_frame(int a1, int64_t a2);
// [0x1399820] (170 bytes) th_granule_time
// long double th_granule_time(int a1, int64_t a2);
// [0x13998d0] (39 bytes) oc_pack_readinit
// uint32_t *oc_pack_readinit(uint32_t *a1, int a2, int a3);
// [0x1399900] (158 bytes) oc_pack_look1
// unsigned int oc_pack_look1(unsigned int *a1);
// [0x13999a0] (13 bytes) oc_pack_adv1
// uint32_t *oc_pack_adv1(uint32_t *a1);
// [0x13999b0] (209 bytes) oc_pack_read
// unsigned int oc_pack_read(unsigned int *a1, int a2);
// [0x1399a90] (158 bytes) oc_pack_read1
// unsigned int oc_pack_read1(int *a1);
// [0x1399b30] (31 bytes) oc_pack_bytes_left
// int oc_pack_bytes_left(uint32_t *a1);
// [0x1399b50] (31 bytes) oc_idct8x8
// int oc_idct8x8(int a1, int a2, int a3);
// [0x1399b70] (16120 bytes) oc_idct8x8_c
// __m128i *oc_idct8x8_c(__m128i *a1, int a2);
// [0x139da70] (13 bytes) ogg_page_version
// int ogg_page_version(int a1);
// [0x139da80] (14 bytes) ogg_page_continued
// int ogg_page_continued(int a1);
// [0x139da90] (14 bytes) ogg_page_bos
// int ogg_page_bos(int a1);
// [0x139daa0] (14 bytes) ogg_page_eos
// int ogg_page_eos(int a1);
// [0x139dab0] (136 bytes) ogg_page_granulepos
// int ogg_page_granulepos(int a1);
// [0x139db40] (38 bytes) ogg_page_serialno
// int ogg_page_serialno(int a1);
// [0x139db70] (38 bytes) ogg_page_pageno
// int ogg_page_pageno(int a1);
// [0x139dba0] (53 bytes) ogg_page_packets
// int ogg_page_packets(int a1);
// [0x139dbe0] (20 bytes) ogg_stream_check
// int ogg_stream_check(uint32_t *a1);
// [0x139dc00] (178 bytes) ogg_stream_clear
// int ogg_stream_clear(void **a1);
// [0x139dcc0] (279 bytes) ogg_stream_init
// int ogg_stream_init(int a1, int a2);
// [0x139dde0] (62 bytes) ogg_stream_destroy
// int ogg_stream_destroy(void **ptr);
// [0x139de20] (236 bytes) ogg_page_checksum_set
// void ogg_page_checksum_set(uint32_t *a1);
// [0x139df10] (912 bytes) ogg_stream_iovecin
// int ogg_stream_iovecin(int a1, int a2, int a3, int a4, int a5, int a6);
// [0x139e2a0] (110 bytes) ogg_stream_packetin
// int ogg_stream_packetin(int a1, uint32_t *a2);
// [0x139e310] (1530 bytes) ogg_stream_flush
// int ogg_stream_flush(uint32_t *a1, uint32_t *a2);
// [0x139e910] (145 bytes) ogg_stream_pageout
// int ogg_stream_pageout(uint32_t *a1, uint32_t *a2);
// [0x139e9b0] (65 bytes) ogg_stream_eos
// int ogg_stream_eos(uint32_t *a1);
// [0x139ea00] (114 bytes) ogg_sync_init
// int ogg_sync_init(int a1);
// [0x139ea80] (146 bytes) ogg_sync_clear
// int ogg_sync_clear(void **a1);
// [0x139eb20] (62 bytes) ogg_sync_destroy
// int ogg_sync_destroy(void **ptr);
// [0x139eb60] (13 bytes) ogg_sync_check
// int ogg_sync_check(int a1);
// [0x139eb70] (198 bytes) ogg_sync_buffer
// char *ogg_sync_buffer(int a1, int a2);
// [0x139ec40] (76 bytes) ogg_sync_wrote
// int ogg_sync_wrote(int a1, int a2);
// [0x139ec90] (471 bytes) ogg_sync_pageseek
// int ogg_sync_pageseek(int *a1, int *a2);
// [0x139ee70] (132 bytes) ogg_sync_pageout
// int ogg_sync_pageout(int *a1, int *a2);
// [0x139ef00] (1381 bytes) ogg_stream_pagein
// int ogg_stream_pagein(void **a1, int *a2);
// [0x139f470] (96 bytes) ogg_sync_reset
// int ogg_sync_reset(uint32_t *a1);
// [0x139f4d0] (164 bytes) ogg_stream_reset
// int ogg_stream_reset(uint32_t *a1);
// [0x139f580] (79 bytes) ogg_stream_reset_serialno
// int ogg_stream_reset_serialno(uint32_t *a1, int a2);
// [0x139f5d0] (310 bytes) ogg_stream_packetout
// int ogg_stream_packetout(uint32_t *a1, uint32_t *a2);
// [0x139f710] (293 bytes) ogg_stream_packetpeek
// int ogg_stream_packetpeek(uint32_t *a1, uint32_t *a2);
// [0x139f840] (133 bytes) ogg_packet_clear
// int ogg_packet_clear(void **a1);
