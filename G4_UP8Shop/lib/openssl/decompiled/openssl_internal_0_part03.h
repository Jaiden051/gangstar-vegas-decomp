#pragma once
// ============================================================================
// G4_UP8Shop/lib/openssl/decompiled/openssl_internal_0_part03.h
// Library: openssl | Module: openssl_internal_0_part03
// Binary Address Span: 0x19bc340 .. 0x19ce2a0 (84 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x19bc340] (17 bytes) sub_19BC340
// int sub_19BC340(uint32_t **a1, uint32_t **a2);
// [0x19bc7b0] (575 bytes) sub_19BC7B0
// void **sub_19BC7B0(uint32_t *a1, uint32_t *a2, int a3);
// [0x19bcf10] (12 bytes) sub_19BCF10
// int sub_19BCF10();
// [0x19bcf20] (32 bytes) sub_19BCF20
// int sub_19BCF20(int a1, int a2, int a3, uint32_t *a4);
// [0x19bcf40] (149 bytes) sub_19BCF40
// int sub_19BCF40(int a1, void **a2);
// [0x19bcfe0] (126 bytes) sub_19BCFE0
// int sub_19BCFE0(char *a1, char **a2, size_t a3);
// [0x19bd060] (76 bytes) sub_19BD060
// int sub_19BD060(int a1);
// [0x19bd0b0] (219 bytes) sub_19BD0B0
// int sub_19BD0B0(int *a1, int a2, int a3, char *a4);
// [0x19bd190] (142 bytes) sub_19BD190
// int sub_19BD190(int a1, int a2, int *a3, int a4);
// [0x19bd220] (70 bytes) sub_19BD220
// int sub_19BD220(int a1, int a2);
// [0x19bd270] (64 bytes) sub_19BD270
// int sub_19BD270(int a1, int a2, int a3);
// [0x19bd2b0] (97 bytes) sub_19BD2B0
// int sub_19BD2B0(int a1, char *a2);
// [0x19bd320] (113 bytes) sub_19BD320
// int sub_19BD320(int a1);
// [0x19bd3a0] (146 bytes) sub_19BD3A0
// int sub_19BD3A0(int a1);
// [0x19bd440] (226 bytes) sub_19BD440
// int sub_19BD440(int *a1, const char *a2, char *a3);
// [0x19bd530] (155 bytes) sub_19BD530
// bool sub_19BD530(int a1, int a2);
// [0x19bdc40] (225 bytes) HMAC
// void *HMAC(uint32_t *a1, void *a2, size_t a3, int a4, int a5, void *a6, uint32_t *a7);
// [0x19bdda0] (2462 bytes) idea_encrypt
// int idea_encrypt(unsigned int *a1, uint32_t *a2);
// [0x19be740] (1685 bytes) idea_cbc_encrypt
// int idea_cbc_encrypt(int a1, uint8_t *a2, int a3, uint32_t *a4, int a5, int a6);
// [0x19bede0] (519 bytes) idea_cfb64_encrypt
// int *idea_cfb64_encrypt(char *a1, uint8_t *a2, int a3, uint32_t *a4, int a5, int *a6, int a7);
// [0x19beff0] (22 bytes) idea_options
// const char *idea_options();
// [0x19bf010] (182 bytes) idea_ecb_encrypt
// unsigned int idea_ecb_encrypt(unsigned int *a1, uint8_t *a2, uint32_t *a3);
// [0x19bf0d0] (472 bytes) idea_ofb64_encrypt
// int *idea_ofb64_encrypt(uint8_t *a1, uint8_t *a2, int a3, uint32_t *a4, int a5, int *a6);
// [0x19bf2b0] (376 bytes) idea_set_encrypt_key
// int *idea_set_encrypt_key(uint8_t *a1, int *a2);
// [0x19bf430] (432 bytes) idea_set_decrypt_key
// int idea_set_decrypt_key(int *a1, int *a2);
// [0x19bf5e0] (138 bytes) sub_19BF5E0
// uint32_t *sub_19BF5E0(int a1, int a2, unsigned int *a3);
// [0x19bf670] (84 bytes) lh_strhash
// int lh_strhash(char *a1);
// [0x19bf6d0] (331 bytes) lh_new
// uint32_t *lh_new(int (*a1)(char *a1), int (**a2)(const char *s1, const char *s2));
// [0x19bf820] (109 bytes) lh_free
// void lh_free(void **a1);
// [0x19bf890] (416 bytes) lh_insert
// int *lh_insert(uint32_t *a1, int a2);
// [0x19bfa30] (306 bytes) lh_delete
// int lh_delete(int a1, int a2);
// [0x19bfb70] (62 bytes) lh_retrieve
// uint32_t *lh_retrieve(uint32_t *a1, int a2);
// [0x19bfbb0] (98 bytes) lh_doall
// void lh_doall(uint32_t *a1, void (*a2)(uint32_t));
// [0x19bfc20] (120 bytes) lh_doall_arg
// void lh_doall_arg(uint32_t *a1, void (*a2)(uint32_t, int), int a3);
// [0x19bfca0] (14 bytes) lh_num_items
// int lh_num_items(int a1);
// [0x19bfcb0] (133 bytes) MD4_Init
// int MD4_Init(int a1);
// [0x19bfd40] (1473 bytes) md4_block_data_order
// int *md4_block_data_order(int *a1, int *a2, int *a3);
// [0x19c0310] (325 bytes) MD4_Final
// int MD4_Final(int *a1, int *a2);
// [0x19c0460] (50 bytes) MD4_Transform
// int *MD4_Transform(int *a1, int *a2);
// [0x19c04a0] (456 bytes) MD4_Update
// int MD4_Update(int a1, char *src, size_t a3);
// [0x19c0670] (507 bytes) sub_19C0670
// unsigned int sub_19C0670(int a1, uint8_t *a2, unsigned int a3);
// [0x19c0870] (51 bytes) MDC2_Init
// int MDC2_Init(uint32_t *a1);
// [0x19c08b0] (236 bytes) MDC2_Update
// int MDC2_Update(uint8_t *a1, char *src, size_t a3);
// [0x19c09a0] (150 bytes) MDC2_Final
// int MDC2_Final(uint32_t *a1, int a2);
// [0x19c0a40] (34 bytes) sub_19C0A40
// int sub_19C0A40(void *a1);
// [0x19c0a70] (52 bytes) sub_19C0A70
// int sub_19C0A70(int a1, int a2);
// [0x19c0ab0] (121 bytes) sub_19C0AB0
// int sub_19C0AB0(int a1);
// [0x19c0b30] (42 bytes) sub_19C0B30
// int sub_19C0B30(uint32_t *a1, int a2);
// [0x19c0b60] (41 bytes) sub_19C0B60
// uint32_t *sub_19C0B60(uint32_t *a1, uint32_t *a2);
// [0x19c0b90] (140 bytes) sub_19C0B90
// int sub_19C0B90(int a1, int a2);
// [0x19c10d0] (69 bytes) sub_19C10D0
// int sub_19C10D0(int *a1);
// [0x19c1300] (22 bytes) sub_19C1300
// int sub_19C1300(int a1);
// [0x19c1320] (14 bytes) sub_19C1320
// int sub_19C1320(int a1);
// [0x19c1330] (75 bytes) sub_19C1330
// int sub_19C1330(void *a1);
// [0x19c1380] (58 bytes) sub_19C1380
// int sub_19C1380(const char ***a1, uint32_t *a2);
// [0x19c13c0] (59 bytes) sub_19C13C0
// int sub_19C13C0(int a1, uint32_t *a2);
// [0x19c1400] (90 bytes) sub_19C1400
// int sub_19C1400(int a1, uint32_t *a2);
// [0x19c1460] (256 bytes) sub_19C1460
// int sub_19C1460(int *a1);
// [0x19c1560] (227 bytes) sub_19C1560
// int sub_19C1560(int *a1, uint32_t *a2);
// [0x19c1650] (42 bytes) check_defer
// void check_defer(int a1);
// [0x19c2b50] (13 bytes) sub_19C2B50
// int sub_19C2B50(uint32_t *a1, uint32_t *a2);
// [0x19c2b60] (17 bytes) sub_19C2B60
// int sub_19C2B60(uint32_t **a1, uint32_t **a2);
// [0x19c2b80] (34 bytes) sub_19C2B80
// int sub_19C2B80(void *a1);
// [0x19c2bd0] (2 bytes) sub_19C2BD0
// int sub_19C2BD0(int a1, int a2);
// [0x19c7180] (135 bytes) pem_check_suffix
// int pem_check_suffix(char *s, char *s2);
// [0x19c83e0] (174 bytes) sub_19C83E0
// int sub_19C83E0(int a1, uint32_t *a2, int a3, uint32_t *a4);
// [0x19c8490] (68 bytes) sub_19C8490
// int sub_19C8490(int a1, int a2);
// [0x19c84e0] (68 bytes) sub_19C84E0
// int sub_19C84E0(int a1, int a2);
// [0x19c8eb0] (176 bytes) sub_19C8EB0
// int sub_19C8EB0(int a1, unsigned int a2);
// [0x19c8f60] (517 bytes) sub_19C8F60
// int sub_19C8F60(uint32_t *a1, uint32_t *a2, int a3, uint32_t *a4);
// [0x19c9170] (112 bytes) sub_19C9170
// int sub_19C9170(int a1);
// [0x19c91e0] (293 bytes) sub_19C91E0
// int sub_19C91E0(int *a1, int a2, int a3, int a4, int a5);
// [0x19c9310] (235 bytes) sub_19C9310
// int sub_19C9310(int *a1, int **a2, int a3);
// [0x19c9400] (352 bytes) sub_19C9400
// int sub_19C9400(uint32_t **a1, int *a2);
// [0x19ccb30] (321 bytes) RC2_encrypt
// int RC2_encrypt(int *a1, int a2);
// [0x19ccc80] (446 bytes) RC2_decrypt
// int RC2_decrypt(int *a1, int a2);
// [0x19cce40] (1744 bytes) RC2_cbc_encrypt
// unsigned int RC2_cbc_encrypt(uint8_t *a1, int a2, int a3, int a4, uint8_t *a5, int a6);
// [0x19cd510] (223 bytes) RC2_ecb_encrypt
// unsigned int RC2_ecb_encrypt(uint8_t *a1, uint8_t *a2, int a3, int a4);
// [0x19cd5f0] (427 bytes) RC2_set_key
// uint8_t *RC2_set_key(uint8_t *a1, int a2, int a3, int a4);
// [0x19cd7a0] (511 bytes) RC2_cfb64_encrypt
// int *RC2_cfb64_encrypt( uint8_t *a1, uint8_t *a2, int a3, int a4, uint8_t *a5, int *a6, int a7);
// [0x19cd9a0] (484 bytes) RC2_ofb64_encrypt
// int *RC2_ofb64_encrypt(uint8_t *a1, uint8_t *a2, int a3, int a4, uint8_t *a5, int *a6);
// [0x19cdb90] (1769 bytes) RC4
// uint32_t *RC4(uint32_t *a1, unsigned int a2, uint8_t *a3, uint8_t *a4);
// [0x19ce280] (22 bytes) RC4_options
// const char *RC4_options();
// [0x19ce2a0] (342 bytes) RC4_set_key
// int *RC4_set_key(uint32_t *a1, int a2, int a3);
