#pragma once
// ============================================================================
// G4_UP8Shop/lib/openssl/decompiled/openssl_internal_0_part02.h
// Library: openssl | Module: openssl_internal_0_part02
// Binary Address Span: 0x1982520 .. 0x19bc320 (500 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1982520] (25 bytes) OPENSSL_stderr
// char *OPENSSL_stderr();
// [0x1982540] (11 bytes) sub_1982540
// int sub_1982540(int a1);
// [0x1982550] (13 bytes) sub_1982550
// int sub_1982550(uint32_t *a1, uint32_t *a2);
// [0x1982560] (134 bytes) sub_1982560
// void sub_1982560();
// [0x19825f0] (131 bytes) sub_19825F0
// int sub_19825F0();
// [0x1982680] (34 bytes) sub_1982680
// int sub_1982680(void *a1);
// [0x19826b0] (178 bytes) sub_19826B0
// bool sub_19826B0();
// [0x1982770] (367 bytes) sub_1982770
// uint32_t *sub_1982770(int a1);
// [0x19828e0] (411 bytes) sub_19828E0
// int sub_19828E0(int a1, int a2, int a3, int a4, int a5, int a6);
// [0x1982a80] (105 bytes) sub_1982A80
// int sub_1982A80();
// [0x1982af0] (69 bytes) sub_1982AF0
// int sub_1982AF0(void **a1);
// [0x1982f30] (502 bytes) sub_1982F30
// uint32_t *sub_1982F30(int a1, int a2, uint32_t *a3);
// [0x1983130] (545 bytes) sub_1983130
// int sub_1983130(int a1, int *a2, uint32_t *a3);
// [0x1983360] (489 bytes) sub_1983360
// int sub_1983360(int a1, int a2, uint32_t *a3);
// [0x1983550] (35 bytes) sub_1983550
// void *sub_1983550(size_t size);
// [0x1983580] (43 bytes) sub_1983580
// void *sub_1983580(void *ptr, size_t size);
// [0x19835b0] (35 bytes) sub_19835B0
// void *sub_19835B0(size_t size);
// [0x1984030] (122 bytes) OPENSSL_cleanse
// void *OPENSSL_cleanse(uint8_t *s, size_t n);
// [0x19840b0] (13 bytes) sub_19840B0
// int sub_19840B0(uint32_t *a1, uint32_t *a2);
// [0x19840c0] (63 bytes) sub_19840C0
// int sub_19840C0(uint32_t *a1);
// [0x1984100] (52 bytes) sub_1984100
// int sub_1984100(uint32_t *a1, int (**a2)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t));
// [0x1984140] (81 bytes) sub_1984140
// int sub_1984140(int a1);
// [0x19841a0] (845 bytes) sub_19841A0
// int sub_19841A0(int a1, int *a2);
// [0x19844f0] (13 bytes) sub_19844F0
// int sub_19844F0(int a1, int *a2);
// [0x1984500] (42 bytes) sub_1984500
// int sub_1984500(void *a1, void *a2);
// [0x1984530] (89 bytes) sub_1984530
// int sub_1984530(uint32_t *a1);
// [0x1984590] (161 bytes) sub_1984590
// uint32_t *sub_1984590(int a1, int a2);
// [0x1985150] (300 bytes) OPENSSL_DIR_read
// int OPENSSL_DIR_read(int a1, int a2, void **a3, char *name);
// [0x1985280] (111 bytes) OPENSSL_DIR_end
// int OPENSSL_DIR_end(int a1, int a2, DIR ***a3);
// [0x19853a0] (486 bytes) i2c_ASN1_INTEGER
// int i2c_ASN1_INTEGER(int a1, char **a2);
// [0x1985590] (614 bytes) c2i_ASN1_INTEGER
// void *c2i_ASN1_INTEGER(uint32_t *a1, char **a2, size_t a3);
// [0x1985df0] (17 bytes) sub_1985DF0
// int sub_1985DF0(uint32_t **a1, uint32_t **a2);
// [0x1985e10] (17 bytes) sub_1985E10
// int sub_1985E10(uint32_t **a1, uint32_t **a2);
// [0x19865a0] (115 bytes) sub_19865A0
// char sub_19865A0(int a1);
// [0x1986a10] (9 bytes) asn1_Finish
// char asn1_Finish(int a1);
// [0x1986a20] (9 bytes) asn1_const_Finish
// char asn1_const_Finish(int a1);
// [0x1986a30] (203 bytes) asn1_GetSequence
// int asn1_GetSequence(int a1, int *a2);
// [0x1986f20] (160 bytes) asn1_add_error
// int asn1_add_error(int a1, int a2);
// [0x1987320] (84 bytes) sub_1987320
// int sub_1987320(int a1, int a2);
// [0x19875e0] (657 bytes) sub_19875E0
// int sub_19875E0( uint32_t *a1, uint32_t *a2, uint8_t *a3, uint8_t *a4, uint8_t *a5, uint32_t *a6, int a7, int a8, int a9, char a10, int a11);
// [0x1987880] (757 bytes) sub_1987880
// int sub_1987880(int *a1, void **a2, int a3, char a4, int a5);
// [0x1987ba0] (1110 bytes) asn1_ex_c2i
// int asn1_ex_c2i(int *a1, char *s, size_t a3, int a4, uint8_t *a5, int a6);
// [0x1988000] (1619 bytes) sub_1988000
// int sub_1988000(int *a1, char **a2, int a3, int a4, int a5, int a6, char a7, uint8_t *a8);
// [0x1989210] (895 bytes) sub_1989210
// int sub_1989210(int *a1, char **a2, int a3, uint32_t *a4, char a5, uint8_t *a6);
// [0x1989590] (642 bytes) sub_1989590
// int sub_1989590(int *a1, char **a2, int a3, int *a4, char a5, uint8_t *a6);
// [0x19898e0] (92 bytes) sub_19898E0
// int sub_19898E0(int a1, int a2);
// [0x1989940] (555 bytes) asn1_ex_i2c
// int asn1_ex_i2c(int *a1, void *dest, int *a3, int a4);
// [0x1989b70] (375 bytes) sub_1989B70
// int sub_1989B70(int *a1, void **a2, int a3, int a4, char a5);
// [0x198a1c0] (1514 bytes) sub_198A1C0
// int sub_198A1C0(int *a1, void **a2, int *a3, int a4, int a5);
// [0x198a7e0] (257 bytes) sub_198A7E0
// int sub_198A7E0(int a1, void **a2, int a3, int a4);
// [0x198aa60] (590 bytes) sub_198AA60
// int sub_198AA60(int result, uint8_t *a2, int a3);
// [0x198aeb0] (899 bytes) sub_198AEB0
// int sub_198AEB0(int *a1, int a2, int a3, int a4);
// [0x198c380] (36 bytes) DISPLAYTEXT_new
// int DISPLAYTEXT_new();
// [0x198c3b0] (44 bytes) DISPLAYTEXT_free
// int DISPLAYTEXT_free(char a1);
// [0x198c460] (36 bytes) DIRECTORYSTRING_new
// int DIRECTORYSTRING_new();
// [0x198c490] (44 bytes) DIRECTORYSTRING_free
// int DIRECTORYSTRING_free(char a1);
// [0x198c5c0] (17 bytes) asn1_get_choice_selector
// int asn1_get_choice_selector(uint32_t *a1, int a2);
// [0x198c5e0] (22 bytes) asn1_set_choice_selector
// int asn1_set_choice_selector(uint32_t *a1, int a2, int a3);
// [0x198c600] (170 bytes) asn1_do_lock
// int asn1_do_lock(uint32_t *a1, int a2, int a3);
// [0x198c6b0] (59 bytes) asn1_enc_init
// uint32_t *asn1_enc_init(uint32_t **a1, int a2);
// [0x198c6f0] (106 bytes) asn1_enc_free
// uint32_t *asn1_enc_free(uint32_t *a1, int a2);
// [0x198c760] (174 bytes) asn1_enc_save
// int asn1_enc_save(uint32_t *a1, void *src, size_t n, int a4);
// [0x198c810] (152 bytes) asn1_enc_restore
// int asn1_enc_restore(uint32_t *a1, void **a2, uint32_t *a3, int a4);
// [0x198c8b0] (21 bytes) asn1_get_field_ptr
// int asn1_get_field_ptr(uint32_t *a1, uint32_t *a2);
// [0x198c8d0] (209 bytes) asn1_do_adb
// uint32_t *asn1_do_adb(uint32_t *a1, uint32_t *a2, int a3);
// [0x198cfc0] (73 bytes) sub_198CFC0
// int sub_198CFC0(int a1, uint32_t *a2, int a3, int a4, int a5);
// [0x198d010] (126 bytes) sub_198D010
// int sub_198D010(int a1, void **a2);
// [0x198d090] (44 bytes) sub_198D090
// int sub_198D090(void *a1);
// [0x198d0c0] (34 bytes) sub_198D0C0
// int sub_198D0C0(void *a1);
// [0x198d0f0] (118 bytes) sub_198D0F0
// int sub_198D0F0(void ***a1);
// [0x198d170] (263 bytes) sub_198D170
// int sub_198D170(uint32_t *a1);
// [0x198d360] (824 bytes) sub_198D360
// int sub_198D360(uint32_t *a1, int a2, int a3);
// [0x198d6a0] (591 bytes) sub_198D6A0
// int sub_198D6A0(int a1, int a2, void **a3);
// [0x198d8f0] (515 bytes) sub_198D8F0
// int sub_198D8F0(void ***a1, char **a2, int a3, int a4, int a5, int a6, char a7, uint8_t *a8);
// [0x198dcc0] (355 bytes) sub_198DCC0
// int sub_198DCC0(int a1, int *a2);
// [0x198e290] (76 bytes) sub_198E290
// int sub_198E290(int a1);
// [0x198e7a0] (271 bytes) sub_198E7A0
// const void **sub_198E7A0(const void **result, void **a2, size_t *a3, int *a4, char a5);
// [0x198e8b0] (977 bytes) sub_198E8B0
// const void **sub_198E8B0( const void **a1, void **a2, int64_t a3, int64_t a4, unsigned int a5, int a6, int a7, char a8);
// [0x198ec90] (3188 bytes) sub_198EC90
// uint32_t *sub_198EC90( const void **a1, void **a2, int *a3, uint32_t *a4, uint32_t *a5, char *a6, unsigned int *a7);
// [0x198fae0] (59 bytes) sub_198FAE0
// int sub_198FAE0(int a1, int a2, int a3);
// [0x198fb20] (124 bytes) sub_198FB20
// int sub_198FB20(int a1);
// [0x198fba0] (261 bytes) sub_198FBA0
// int sub_198FBA0(uint32_t *a1);
// [0x198fcb0] (1349 bytes) sub_198FCB0
// int sub_198FCB0(int a1, int a2, signed int n, uint32_t *src);
// [0x1990200] (317 bytes) sub_1990200
// int sub_1990200(int a1, uint8_t *a2, int a3);
// [0x1990340] (338 bytes) sub_1990340
// int sub_1990340(int a1, char *dest, int a3);
// [0x19904a0] (436 bytes) sub_19904A0
// int sub_19904A0(int a1, char *src, int a3);
// [0x1990660] (68 bytes) sub_1990660
// int sub_1990660(int a1, char *s);
// [0x1991780] (128 bytes) sub_1991780
// int sub_1991780(int a1);
// [0x1991800] (92 bytes) sub_1991800
// int sub_1991800(int a1);
// [0x1991860] (330 bytes) sub_1991860
// int sub_1991860(int a1, char *dest, unsigned int a3);
// [0x19919b0] (236 bytes) sub_19919B0
// int sub_19919B0(int a1, uint32_t *a2);
// [0x1991aa0] (162 bytes) sub_1991AA0
// int sub_1991AA0(int a1, uint32_t *a2);
// [0x1991b50] (1175 bytes) sub_1991B50
// char sub_1991B50(uint32_t *a1, int a2, int a3, uint32_t *a4);
// [0x1991ff0] (319 bytes) sub_1991FF0
// int sub_1991FF0(int a1, char *a2, size_t a3);
// [0x1992130] (68 bytes) sub_1992130
// int sub_1992130(int a1, char *s);
// [0x19925b0] (38 bytes) sub_19925B0
// int sub_19925B0(uint32_t *a1);
// [0x19925e0] (93 bytes) sub_19925E0
// size_t sub_19925E0(int a1, char *s, int n);
// [0x1992640] (111 bytes) sub_1992640
// char sub_1992640(int a1);
// [0x19926b0] (888 bytes) sub_19926B0
// int sub_19926B0(int a1, int a2, int off, char *filename);
// [0x1992a30] (202 bytes) sub_1992A30
// size_t sub_1992A30(int a1, void *ptr, size_t n);
// [0x1992b00] (112 bytes) sub_1992B00
// int sub_1992B00(int a1, const void *ptr, size_t size);
// [0x1992b70] (68 bytes) sub_1992B70
// int sub_1992B70(int a1, char *s);
// [0x1992dc0] (79 bytes) sub_1992DC0
// int sub_1992DC0(uint32_t *a1);
// [0x1992e10] (102 bytes) sub_1992E10
// char sub_1992E10(int a1);
// [0x1992e80] (391 bytes) sub_1992E80
// int sub_1992E80(int a1, int a2, int a3, int **a4);
// [0x1993010] (216 bytes) sub_1993010
// int sub_1993010(int a1, void *dest, signed int a3);
// [0x19930f0] (150 bytes) sub_19930F0
// int sub_19930F0(int a1, uint8_t *a2, int a3);
// [0x1993190] (269 bytes) sub_1993190
// size_t sub_1993190(int a1, void *src, size_t n);
// [0x19932a0] (68 bytes) sub_19932A0
// size_t sub_19932A0(int a1, char *s);
// [0x19933c0] (38 bytes) sub_19933C0
// int sub_19933C0(uint32_t *a1);
// [0x19933f0] (120 bytes) sub_19933F0
// char sub_19933F0(uint32_t *a1);
// [0x1993470] (196 bytes) sub_1993470
// int sub_1993470(uint32_t *a1, int a2, int a3, int *a4);
// [0x1993640] (158 bytes) sub_1993640
// ssize_t sub_1993640(int a1, int a2, int a3, void *buf, size_t nbytes);
// [0x19936e0] (142 bytes) sub_19936E0
// ssize_t sub_19936E0(int a1, int a2, int a3, void *buf, size_t n);
// [0x1993770] (68 bytes) sub_1993770
// ssize_t sub_1993770(int a1, char *s);
// [0x1993cd0] (446 bytes) sub_1993CD0
// uint8_t *sub_1993CD0(int a1, int a2);
// [0x19942d0] (112 bytes) bn_expand2
// int bn_expand2(int a1, int a2);
// [0x19944e0] (146 bytes) bn_dup_expand
// void **bn_dup_expand(uint32_t *a1, int a2);
// [0x1994bf0] (93 bytes) bn_cmp_words
// int bn_cmp_words(int a1, int a2, int a3);
// [0x1994c50] (146 bytes) bn_cmp_part_words
// int bn_cmp_part_words(int a1, int a2, int a3, int a4);
// [0x1994cf0] (140 bytes) BUF_MEM_new
// uint32_t *BUF_MEM_new();
// [0x1994d80] (93 bytes) BUF_MEM_free
// void BUF_MEM_free(void *a1);
// [0x1994de0] (295 bytes) BUF_MEM_grow
// unsigned int BUF_MEM_grow(unsigned int *a1, unsigned int a2);
// [0x1994f10] (351 bytes) BUF_MEM_grow_clean
// size_t BUF_MEM_grow_clean(size_t *a1, size_t a2);
// [0x1995070] (170 bytes) BUF_memdup
// void *BUF_memdup(void *src, size_t n);
// [0x1995120] (116 bytes) BUF_strlcpy
// int BUF_strlcpy(char *a1, char *a2, unsigned int a3);
// [0x19951a0] (170 bytes) BUF_strndup
// char *BUF_strndup(char *a1, int a2);
// [0x1995250] (66 bytes) BUF_strdup
// char *BUF_strdup(char *s);
// [0x19952a0] (85 bytes) BUF_strlcat
// int BUF_strlcat(char *a1, char *a2, unsigned int a3);
// [0x1995300] (100 bytes) BUF_reverse
// char *BUF_reverse(char *a1, int a2, unsigned int a3);
// [0x1995370] (59 bytes) sub_1995370
// int sub_1995370(int a1, int a2, int a3);
// [0x19953b0] (34 bytes) sub_19953B0
// int sub_19953B0(int a1, void *a2);
// [0x19953e0] (147 bytes) sub_19953E0
// int sub_19953E0(uint32_t *a1);
// [0x1995480] (655 bytes) sub_1995480
// int sub_1995480(int a1, int a2, int a3, uint32_t *a4);
// [0x1995710] (154 bytes) sub_1995710
// int sub_1995710(int a1, int a2, int a3, int a4, int a5);
// [0x19957b0] (164 bytes) sub_19957B0
// int sub_19957B0(int a1, int a2, int a3, int a4, int a5);
// [0x1995860] (126 bytes) sub_1995860
// int sub_1995860(int a1);
// [0x19958e0] (331 bytes) sub_19958E0
// int sub_19958E0(int a1);
// [0x1995a30] (107 bytes) sub_1995A30
// uint8_t *sub_1995A30(int a1, int a2, int a3);
// [0x1995aa0] (284 bytes) sub_1995AA0
// int sub_1995AA0(uint32_t *a1);
// [0x1995bc0] (507 bytes) sub_1995BC0
// int sub_1995BC0(int a1, int a2, int a3);
// [0x1995dc0] (566 bytes) sub_1995DC0
// int sub_1995DC0(int a1, int a2, int a3);
// [0x1996000] (239 bytes) COMP_zlib
// void *COMP_zlib();
// [0x19960f0] (9 bytes) COMP_zlib_cleanup
// void COMP_zlib_cleanup();
// [0x1996120] (224 bytes) COMP_CTX_new
// uint8_t *COMP_CTX_new(int a1);
// [0x1996200] (66 bytes) COMP_CTX_free
// void COMP_CTX_free(void *a1);
// [0x1996250] (87 bytes) COMP_compress_block
// int COMP_compress_block(uint32_t *a1, int a2, int a3, int a4, int a5);
// [0x19962b0] (87 bytes) COMP_expand_block
// int COMP_expand_block(uint32_t *a1, int a2, int a3, int a4, int a5);
// [0x1996310] (196 bytes) sub_1996310
// uint32_t *sub_1996310(int a1, char *a2, int a3, int a4, int a5);
// [0x1997430] (30 bytes) sub_1997430
// bool sub_1997430(int a1);
// [0x1997450] (37 bytes) sub_1997450
// int sub_1997450(int a1);
// [0x1997480] (78 bytes) sub_1997480
// unsigned int sub_1997480(unsigned int result, unsigned int *a2);
// [0x19974d0] (40 bytes) sub_19974D0
// int sub_19974D0(int a1);
// [0x1997500] (159 bytes) sub_1997500
// int sub_1997500(int a1, int a2);
// [0x19975a0] (45 bytes) sub_19975A0
// int sub_19975A0(int a1, int a2);
// [0x19975d0] (37 bytes) sub_19975D0
// int sub_19975D0(int a1);
// [0x1997600] (403 bytes) sub_1997600
// int sub_1997600(uint32_t *a1, int a2);
// [0x19977a0] (405 bytes) sub_19977A0
// int sub_19977A0(char *a1, int a2);
// [0x1997940] (363 bytes) sub_1997940
// int sub_1997940(int a1, int a2);
// [0x1997ab0] (520 bytes) sub_1997AB0
// int sub_1997AB0(char *a1, int a2);
// [0x1997cc0] (741 bytes) sub_1997CC0
// int sub_1997CC0(uint32_t *a1, unsigned int *a2, int a3, int a4);
// [0x1997fb0] (32 bytes) sub_1997FB0
// int sub_1997FB0(uint32_t *a1, int a2, int a3);
// [0x1997fd0] (32 bytes) sub_1997FD0
// int sub_1997FD0(uint32_t *a1, int a2, int a3);
// [0x1997ff0] (32 bytes) sub_1997FF0
// int sub_1997FF0(uint32_t *a1, int a2, int a3);
// [0x1998010] (115 bytes) sub_1998010
// bool sub_1998010(int a1, int a2);
// [0x1998090] (103 bytes) sub_1998090
// bool sub_1998090(int a1, int a2);
// [0x1998100] (142 bytes) sub_1998100
// int sub_1998100(char *a1, int a2, int a3);
// [0x1998190] (29 bytes) DHparams_print
// int DHparams_print(uint32_t *a1, unsigned int *a2);
// [0x19981b0] (130 bytes) sub_19981B0
// int sub_19981B0(int a1, void **a2);
// [0x19982c0] (44 bytes) DHparams_dup
// int DHparams_dup(int a1);
// [0x19982f0] (16 bytes) sub_19982F0
// int sub_19982F0(int a1);
// [0x1998300] (46 bytes) sub_1998300
// int sub_1998300(int a1);
// [0x1998330] (554 bytes) sub_1998330
// int sub_1998330(uint8_t *a1, int a2, int a3);
// [0x1998560] (627 bytes) sub_1998560
// int sub_1998560(int a1);
// [0x19987e0] (160 bytes) sub_19987E0
// int sub_19987E0(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
// [0x1998e80] (37 bytes) sub_1998E80
// bool sub_1998E80(int a1);
// [0x1998eb0] (45 bytes) sub_1998EB0
// int sub_1998EB0(int a1, int a2);
// [0x1998ee0] (37 bytes) sub_1998EE0
// int sub_1998EE0(int a1);
// [0x1998f10] (78 bytes) sub_1998F10
// unsigned int sub_1998F10(unsigned int result, unsigned int *a2);
// [0x1998f60] (40 bytes) sub_1998F60
// int sub_1998F60(int a1);
// [0x1998f90] (701 bytes) sub_1998F90
// bool sub_1998F90(uint32_t *a1, unsigned int *a2, int a3, int a4);
// [0x1999250] (32 bytes) sub_1999250
// bool sub_1999250(uint32_t *a1, int a2, int a3);
// [0x1999270] (32 bytes) sub_1999270
// bool sub_1999270(uint32_t *a1, int a2, int a3);
// [0x1999290] (32 bytes) sub_1999290
// bool sub_1999290(uint32_t *a1, int a2, int a3);
// [0x19992b0] (62 bytes) sub_19992B0
// bool sub_19992B0(int a1, int a2);
// [0x19992f0] (205 bytes) sub_19992F0
// int sub_19992F0(int a1, int a2);
// [0x19993c0] (45 bytes) sub_19993C0
// int sub_19993C0(int a1, int a2);
// [0x19993f0] (37 bytes) sub_19993F0
// int sub_19993F0(int a1);
// [0x1999420] (403 bytes) sub_1999420
// int sub_1999420(uint32_t *a1, int a2);
// [0x19995c0] (1030 bytes) sub_19995C0
// int sub_19995C0(char *a1, uint32_t *a2);
// [0x19999d0] (395 bytes) sub_19999D0
// int sub_19999D0(int a1, int a2);
// [0x1999b60] (621 bytes) sub_1999B60
// int sub_1999B60(char *a1, int a2);
// [0x1999dd0] (142 bytes) sub_1999DD0
// int sub_1999DD0(char *a1, int a2, int a3);
// [0x1999e60] (344 bytes) sub_1999E60
// int sub_1999E60(int a1, int a2, int a3, uint32_t *a4);
// [0x1999fc0] (160 bytes) sub_1999FC0
// bool sub_1999FC0(int a1, int a2);
// [0x199a060] (142 bytes) sub_199A060
// int sub_199A060(char *a1, int a2, int a3);
// [0x199a0f0] (130 bytes) sub_199A0F0
// int sub_199A0F0(int a1, void **a2);
// [0x199a180] (175 bytes) sub_199A180
// int sub_199A180(int a1, uint32_t *a2);
// [0x199a490] (44 bytes) DSAparams_dup
// int DSAparams_dup(int a1);
// [0x199ab30] (16 bytes) sub_199AB30
// int sub_199AB30(int a1);
// [0x199ab40] (46 bytes) sub_199AB40
// int sub_199AB40(int a1);
// [0x199ab70] (1217 bytes) sub_199AB70
// int sub_199AB70(uint8_t *a1, int a2, uint32_t **a3, int a4);
// [0x199b040] (706 bytes) sub_199B040
// uint32_t *sub_199B040(uint8_t *a1, int a2, int a3);
// [0x199b310] (913 bytes) sub_199B310
// int sub_199B310(uint32_t *a1, void **a2, uint8_t ***a3, uint8_t ***a4);
// [0x199b890] (24 bytes) DSO_set_default_method
// int DSO_set_default_method(int a1);
// [0x199b8b0] (22 bytes) DSO_get_default_method
// int DSO_get_default_method();
// [0x199b8d0] (11 bytes) DSO_get_method
// int DSO_get_method(int a1);
// [0x199b8e0] (13 bytes) DSO_set_method
// int DSO_set_method(int *a1, int a2);
// [0x199b8f0] (420 bytes) DSO_new_method
// int *DSO_new_method(int a1);
// [0x199baa0] (34 bytes) DSO_new
// int *DSO_new();
// [0x199bad0] (351 bytes) DSO_free
// int DSO_free(int *a1);
// [0x199bc30] (14 bytes) DSO_flags
// int DSO_flags(int a1);
// [0x199bc40] (126 bytes) DSO_up_ref
// int DSO_up_ref(int a1);
// [0x199bcc0] (229 bytes) DSO_bind_var
// int DSO_bind_var(int a1, int a2);
// [0x199bdb0] (229 bytes) DSO_bind_func
// int DSO_bind_func(int a1, int a2);
// [0x199bea0] (252 bytes) DSO_ctrl
// int DSO_ctrl(uint32_t *a1, int a2, int a3, int a4);
// [0x199bfa0] (106 bytes) DSO_set_name_converter
// int DSO_set_name_converter(int a1, int a2, uint32_t *a3);
// [0x199c010] (83 bytes) DSO_get_filename
// int DSO_get_filename(int a1);
// [0x199c070] (343 bytes) DSO_set_filename
// int DSO_set_filename(int a1, char *s);
// [0x199c1d0] (603 bytes) DSO_load
// int *DSO_load(int *a1, char *a2, int a3, int a4);
// [0x199c430] (162 bytes) DSO_merge
// int DSO_merge(int a1, int a2, int a3);
// [0x199c4e0] (370 bytes) DSO_convert_filename
// char *DSO_convert_filename(int a1, char *a2);
// [0x199c660] (83 bytes) DSO_get_loaded_filename
// int DSO_get_loaded_filename(int a1);
// [0x199c6c0] (124 bytes) DSO_pathbyaddr
// int DSO_pathbyaddr(int a1, int a2, int a3);
// [0x199c740] (106 bytes) DSO_global_lookup
// int DSO_global_lookup(int a1);
// [0x199c7b0] (27 bytes) DSO_METHOD_openssl
// int DSO_METHOD_openssl();
// [0x199c7d0] (45 bytes) sub_199C7D0
// int sub_199C7D0(int a1, int a2);
// [0x199c800] (37 bytes) sub_199C800
// int sub_199C800(int a1);
// [0x199c830] (45 bytes) sub_199C830
// bool sub_199C830(int a1);
// [0x199c860] (1038 bytes) sub_199C860
// int sub_199C860(uint32_t *a1, int a2, size_t a3, int a4);
// [0x199cc70] (32 bytes) sub_199CC70
// int sub_199CC70(uint32_t *a1, int a2, size_t a3);
// [0x199cc90] (32 bytes) sub_199CC90
// int sub_199CC90(uint32_t *a1, int a2, size_t a3);
// [0x199ccb0] (32 bytes) sub_199CCB0
// int sub_199CCB0(uint32_t *a1, int a2, size_t a3);
// [0x199ccd0] (96 bytes) sub_199CCD0
// bool sub_199CCD0(int a1, int a2);
// [0x199cd30] (118 bytes) sub_199CD30
// int sub_199CD30(int a1, int a2);
// [0x199cdb0] (45 bytes) sub_199CDB0
// int sub_199CDB0(int a1, int a2);
// [0x199cde0] (118 bytes) sub_199CDE0
// int sub_199CDE0(int a1);
// [0x199ce60] (37 bytes) sub_199CE60
// int sub_199CE60(int a1);
// [0x199ce90] (371 bytes) sub_199CE90
// int sub_199CE90(int a1, uint32_t *a2);
// [0x199d010] (621 bytes) sub_199D010
// int sub_199D010(char *a1, int a2);
// [0x199d280] (144 bytes) sub_199D280
// int sub_199D280(int a1, int a2);
// [0x199d310] (142 bytes) sub_199D310
// int sub_199D310(char *a1, int a2, int a3);
// [0x199d3a0] (344 bytes) sub_199D3A0
// int sub_199D3A0(int a1, int a2, int a3, uint32_t *a4);
// [0x199d500] (142 bytes) sub_199D500
// int sub_199D500(char *a1, int a2, int a3);
// [0x199d590] (323 bytes) sub_199D590
// int sub_199D590(uint32_t *a1, void ***a2, int a3);
// [0x199d6e0] (559 bytes) sub_199D6E0
// bool sub_199D6E0(uint32_t *a1, int a2);
// [0x199d910] (354 bytes) sub_199D910
// int sub_199D910(int a1, int a2);
// [0x199da80] (363 bytes) sub_199DA80
// int sub_199DA80(char *a1, int a2);
// [0x199dbf0] (2806 bytes) sub_199DBF0
// uint32_t *sub_199DBF0(int *a1);
// [0x199e900] (36 bytes) X9_62_PENTANOMIAL_new
// int X9_62_PENTANOMIAL_new();
// [0x199e930] (44 bytes) X9_62_PENTANOMIAL_free
// int X9_62_PENTANOMIAL_free(char a1);
// [0x199e960] (36 bytes) X9_62_CHARACTERISTIC_TWO_new
// int X9_62_CHARACTERISTIC_TWO_new();
// [0x199e990] (44 bytes) X9_62_CHARACTERISTIC_TWO_free
// int X9_62_CHARACTERISTIC_TWO_free(char a1);
// [0x199e9c0] (36 bytes) ECPARAMETERS_new
// int ECPARAMETERS_new();
// [0x199e9f0] (44 bytes) ECPARAMETERS_free
// int ECPARAMETERS_free(char a1);
// [0x199eaa0] (36 bytes) ECPKPARAMETERS_new
// int ECPKPARAMETERS_new();
// [0x199ead0] (44 bytes) ECPKPARAMETERS_free
// int ECPKPARAMETERS_free(char a1);
// [0x199eb00] (3501 bytes) sub_199EB00
// uint32_t *sub_199EB00(int a1, int a2);
// [0x19a0440] (330 bytes) o2i_ECPublicKey
// uint32_t *o2i_ECPublicKey(uint32_t *a1, uint32_t *a2, int a3);
// [0x19a0590] (437 bytes) i2o_ECPublicKey
// int i2o_ECPublicKey(uint32_t *a1, void **a2);
// [0x19a4250] (87 bytes) sub_19A4250
// int sub_19A4250(int a1);
// [0x19a42b0] (710 bytes) sub_19A42B0
// uint8_t *sub_19A42B0(uint32_t *a1, int a2, unsigned int *a3);
// [0x19a4580] (190 bytes) sub_19A4580
// void sub_19A4580(uint8_t *a1);
// [0x19a4640] (158 bytes) sub_19A4640
// void sub_19A4640(uint32_t *a1);
// [0x19a46e0] (3458 bytes) ec_wNAF_mul
// int ec_wNAF_mul(int a1, uint32_t *a2, uint32_t *a3, unsigned int a4, uint32_t **a5, int a6, int a7);
// [0x19a5470] (1668 bytes) ec_wNAF_precompute_mult
// bool ec_wNAF_precompute_mult(int a1, int *a2);
// [0x19a5b00] (75 bytes) ec_wNAF_have_precompute_mult
// bool ec_wNAF_have_precompute_mult(int a1);
// [0x19a6030] (124 bytes) ECParameters_print
// int ECParameters_print(int a1, int a2);
// [0x19a60b0] (178 bytes) ECParameters_print_fp
// int ECParameters_print_fp(int a1, int a2);
// [0x19a6170] (3013 bytes) ECPKParameters_print
// int ECPKParameters_print(uint32_t *a1, int a2, signed int a3);
// [0x19a6d40] (186 bytes) ECPKParameters_print_fp
// int ECPKParameters_print_fp(int a1, int a2, size_t a3);
// [0x19a6e00] (480 bytes) ec_GFp_mont_group_set_curve
// int ec_GFp_mont_group_set_curve(int a1, int a2, int a3, int a4, void **a5);
// [0x19a6fe0] (104 bytes) ec_GFp_mont_group_clear_finish
// int ec_GFp_mont_group_clear_finish(int a1);
// [0x19a7050] (104 bytes) ec_GFp_mont_group_finish
// int ec_GFp_mont_group_finish(int a1);
// [0x19a70c0] (68 bytes) ec_GFp_mont_group_init
// int ec_GFp_mont_group_init(int a1);
// [0x19a7110] (118 bytes) ec_GFp_mont_field_set_to_one
// bool ec_GFp_mont_field_set_to_one(int a1, uint32_t *a2);
// [0x19a7190] (126 bytes) ec_GFp_mont_field_decode
// int ec_GFp_mont_field_decode(int a1, int a2, int a3, int a4);
// [0x19a7210] (134 bytes) ec_GFp_mont_field_encode
// int ec_GFp_mont_field_encode(int a1, int a2, int a3, int a4);
// [0x19a72a0] (126 bytes) ec_GFp_mont_field_sqr
// int ec_GFp_mont_field_sqr(int a1, int a2, int a3, int a4);
// [0x19a7320] (134 bytes) ec_GFp_mont_field_mul
// int ec_GFp_mont_field_mul(int a1, int a2, int a3, int a4, int a5);
// [0x19a73b0] (248 bytes) ec_GFp_mont_group_copy
// int ec_GFp_mont_group_copy(int a1, int a2);
// [0x19a74d0] (280 bytes) ec_GFp_nist_field_sqr
// bool ec_GFp_nist_field_sqr(int a1, int a2, int a3, void **a4);
// [0x19a75f0] (288 bytes) ec_GFp_nist_field_mul
// bool ec_GFp_nist_field_mul(int a1, int a2, int a3, int a4, void **a5);
// [0x19a7710] (463 bytes) ec_GFp_nist_group_set_curve
// int ec_GFp_nist_group_set_curve(int a1, uint32_t *a2, int a3, int a4, int *a5);
// [0x19a78e0] (54 bytes) ec_GFp_nist_group_copy
// int ec_GFp_nist_group_copy(int a1, int a2);
// [0x19a7940] (16 bytes) ec_GFp_simple_is_at_infinity
// bool ec_GFp_simple_is_at_infinity(int a1, int a2);
// [0x19a7950] (61 bytes) ec_GFp_simple_field_sqr
// int ec_GFp_simple_field_sqr(int a1, int a2, int a3, int a4);
// [0x19a7990] (69 bytes) ec_GFp_simple_field_mul
// int ec_GFp_simple_field_mul(int a1, int a2, int a3, int a4, int a5);
// [0x19a79e0] (57 bytes) ec_GFp_simple_point_set_to_infinity
// int ec_GFp_simple_point_set_to_infinity(int a1, int a2);
// [0x19a7a20] (440 bytes) ec_GFp_simple_get_Jprojective_coordinates_GFp
// bool ec_GFp_simple_get_Jprojective_coordinates_GFp( int a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, void **a6);
// [0x19a7be0] (403 bytes) ec_GFp_simple_group_get_curve
// int ec_GFp_simple_group_get_curve(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, void **a5);
// [0x19a7d80] (80 bytes) ec_GFp_simple_point_clear_finish
// void *ec_GFp_simple_point_clear_finish(int a1);
// [0x19a7dd0] (76 bytes) ec_GFp_simple_group_clear_finish
// void *ec_GFp_simple_group_clear_finish(uint8_t **a1);
// [0x19a7e20] (1061 bytes) ec_GFp_simple_point_get_affine_coordinates
// bool ec_GFp_simple_point_get_affine_coordinates(int a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, int *a5);
// [0x19a8250] (1590 bytes) ec_GFp_simple_dbl
// bool ec_GFp_simple_dbl(uint32_t *a1, int a2, uint32_t *a3, int *a4);
// [0x19a8890] (37 bytes) ec_GFp_simple_group_get_degree
// int ec_GFp_simple_group_get_degree(int a1);
// [0x19a88c0] (998 bytes) ec_GFp_simple_oct2point
// int ec_GFp_simple_oct2point(int a1, uint32_t *a2, uint8_t *a3, int a4, int *a5);
// [0x19a8cb0] (978 bytes) ec_GFp_simple_point2oct
// unsigned int ec_GFp_simple_point2oct(int a1, uint32_t *a2, int a3, uint8_t *a4, unsigned int a5, int *a6);
// [0x19a9090] (551 bytes) ec_GFp_simple_set_Jprojective_coordinates_GFp
// int ec_GFp_simple_set_Jprojective_coordinates_GFp(int a1, int a2, int a3, int a4, int a5, void **a6);
// [0x19a92c0] (1467 bytes) ec_GFp_simple_set_compressed_coordinates
// bool ec_GFp_simple_set_compressed_coordinates( int a1, int a2, uint32_t *a3, uint32_t *a4, int a5, int a6, int a7);
// [0x19a9880] (73 bytes) ec_GFp_simple_point_finish
// void ec_GFp_simple_point_finish(void **a1);
// [0x19a98d0] (76 bytes) ec_GFp_simple_group_finish
// void ec_GFp_simple_group_finish(void **a1);
// [0x19a9920] (85 bytes) ec_GFp_simple_point_init
// int ec_GFp_simple_point_init(uint32_t *a1);
// [0x19a9980] (91 bytes) ec_GFp_simple_group_init
// int ec_GFp_simple_group_init(uint32_t *a1);
// [0x19a99e0] (713 bytes) ec_GFp_simple_group_check_discriminant
// bool ec_GFp_simple_group_check_discriminant(uint32_t *a1, int *a2);
// [0x19a9cb0] (140 bytes) ec_GFp_simple_point_copy
// int ec_GFp_simple_point_copy(uint32_t *a1, uint32_t *a2);
// [0x19a9d40] (152 bytes) ec_GFp_simple_group_copy
// int ec_GFp_simple_group_copy(uint32_t *a1, uint32_t *a2);
// [0x19a9de0] (1433 bytes) ec_GFp_simple_points_make_affine
// int ec_GFp_simple_points_make_affine(int a1, unsigned int a2, int a3, int *a4);
// [0x19aa380] (371 bytes) ec_GFp_simple_make_affine
// int ec_GFp_simple_make_affine(int a1, uint32_t *a2, int *a3);
// [0x19aa500] (976 bytes) ec_GFp_simple_cmp
// int ec_GFp_simple_cmp(int a1, int *a2, int *a3, int *a4);
// [0x19aa8d0] (955 bytes) ec_GFp_simple_is_on_curve
// int ec_GFp_simple_is_on_curve(uint32_t *a1, uint32_t *a2, int *a3);
// [0x19aac90] (114 bytes) ec_GFp_simple_invert
// int ec_GFp_simple_invert(int a1, uint32_t *a2);
// [0x19aad10] (2064 bytes) ec_GFp_simple_add
// int ec_GFp_simple_add(int *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, int a5);
// [0x19ab520] (162 bytes) ec_GFp_simple_point_set_affine_coordinates
// int ec_GFp_simple_point_set_affine_coordinates(int a1, uint32_t *a2, int a3, int a4, int a5);
// [0x19ab5d0] (602 bytes) ec_GFp_simple_group_set_curve
// int ec_GFp_simple_group_set_curve(uint32_t *a1, uint32_t *a2, int a3, int a4, int *a5);
// [0x19ab8c0] (102 bytes) sub_19AB8C0
// int sub_19AB8C0(uint8_t *a1);
// [0x19ab990] (276 bytes) sub_19AB990
// uint32_t *sub_19AB990();
// [0x19abab0] (19 bytes) sub_19ABAB0
// uint32_t *sub_19ABAB0(int a1);
// [0x19abad0] (139 bytes) ecdh_check
// uint32_t *ecdh_check(int a1);
// [0x19abca0] (1083 bytes) sub_19ABCA0
// int sub_19ABCA0( void *dest, signed int a2, int a3, int a4, int (*a5)(uint8_t *, size_t, void *, signed int *));
// [0x19ac100] (102 bytes) sub_19AC100
// int sub_19AC100(uint8_t *a1);
// [0x19ac1d0] (276 bytes) sub_19AC1D0
// uint32_t *sub_19AC1D0();
// [0x19ac2f0] (19 bytes) sub_19AC2F0
// uint32_t *sub_19AC2F0(int a1);
// [0x19ac310] (139 bytes) ecdsa_check
// uint32_t *ecdsa_check(int a1);
// [0x19ac5c0] (1340 bytes) sub_19AC5C0
// int sub_19AC5C0(uint8_t *a1, int a2, uint32_t **a3, int a4);
// [0x19acb00] (980 bytes) sub_19ACB00
// int sub_19ACB00(int a1, void **a2, uint8_t ***a3, uint8_t ***a4);
// [0x19acee0] (1217 bytes) sub_19ACEE0
// uint32_t **sub_19ACEE0(uint8_t *a1, int a2, void *a3, uint32_t *a4, int a5);
// [0x19ad6e0] (56 bytes) engine_unlocked_init
// int engine_unlocked_init(uint32_t *a1);
// [0x19ad720] (259 bytes) engine_unlocked_finish
// int engine_unlocked_finish(uint32_t *a1, int a2);
// [0x19ad9e0] (50 bytes) sub_19AD9E0
// int sub_19AD9E0(void (**a1)(void));
// [0x19adb30] (123 bytes) engine_set_all_null
// uint32_t *engine_set_all_null(uint32_t *a1);
// [0x19adbb0] (269 bytes) engine_free_util
// int engine_free_util(uint32_t *a1, int a2);
// [0x19adcf0] (121 bytes) engine_cleanup_add_first
// uint8_t *engine_cleanup_add_first(int a1);
// [0x19add70] (113 bytes) engine_cleanup_add_last
// uint8_t *engine_cleanup_add_last(int a1, int a2);
// [0x19ae140] (36 bytes) sub_19AE140
// int sub_19AE140();
// [0x19ae170] (192 bytes) sub_19AE170
// int sub_19AE170(int a1, int a2, int a3, int a4);
// [0x19ae4e0] (144 bytes) engine_pkey_asn1_meths_free
// char *engine_pkey_asn1_meths_free(int a1);
// [0x19ae730] (36 bytes) sub_19AE730
// int sub_19AE730();
// [0x19ae8f0] (36 bytes) sub_19AE8F0
// int sub_19AE8F0();
// [0x19aeab0] (36 bytes) sub_19AEAB0
// int sub_19AEAB0();
// [0x19aec70] (36 bytes) sub_19AEC70
// int sub_19AEC70();
// [0x19aee30] (36 bytes) sub_19AEE30
// int sub_19AEE30();
// [0x19af110] (144 bytes) engine_pkey_meths_free
// char *engine_pkey_meths_free(int a1);
// [0x19af1a0] (64 bytes) sub_19AF1A0
// unsigned int sub_19AF1A0(uint32_t *a1);
// [0x19af1e0] (13 bytes) sub_19AF1E0
// int sub_19AF1E0(uint32_t *a1, uint32_t *a2);
// [0x19af1f0] (98 bytes) sub_19AF1F0
// int sub_19AF1F0(int a1, int *a2);
// [0x19af260] (112 bytes) sub_19AF260
// int sub_19AF260(int result);
// [0x19af2d0] (131 bytes) sub_19AF2D0
// int *sub_19AF2D0();
// [0x19af360] (134 bytes) sub_19AF360
// void sub_19AF360();
// [0x19af3f0] (123 bytes) sub_19AF3F0
// void sub_19AF3F0(uint32_t *a1);
// [0x19af470] (220 bytes) sub_19AF470
// int sub_19AF470(int a1);
// [0x19af550] (212 bytes) sub_19AF550
// int sub_19AF550(int a1);
// [0x19af630] (42 bytes) sub_19AF630
// int sub_19AF630(void *a1, void *a2);
// [0x19af660] (40 bytes) sub_19AF660
// int sub_19AF660(int a1);
// [0x19af690] (158 bytes) sub_19AF690
// void sub_19AF690();
// [0x19af730] (170 bytes) sub_19AF730
// int sub_19AF730(int a1);
// [0x19af7e0] (256 bytes) sub_19AF7E0
// int sub_19AF7E0(int a1);
// [0x19af8e0] (185 bytes) sub_19AF8E0
// int sub_19AF8E0(int a1);
// [0x19af9a0] (170 bytes) sub_19AF9A0
// int sub_19AF9A0(int a1);
// [0x19afa50] (185 bytes) sub_19AFA50
// int sub_19AFA50(int a1);
// [0x19afb10] (170 bytes) sub_19AFB10
// int sub_19AFB10(int a1);
// [0x19b0530] (516 bytes) sub_19B0530
// int sub_19B0530(int a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, uint32_t *a6);
// [0x19b0e50] (37 bytes) OPENSSL_add_all_algorithms_noconf
// int OPENSSL_add_all_algorithms_noconf();
// [0x19b0e80] (1915 bytes) OpenSSL_add_all_ciphers
// int OpenSSL_add_all_ciphers();
// [0x19b1600] (470 bytes) OpenSSL_add_all_digests
// int OpenSSL_add_all_digests();
// [0x19b2170] (158 bytes) sub_19B2170
// int sub_19B2170(int a1, int a2, int a3, unsigned int a4);
// [0x19b2210] (158 bytes) sub_19B2210
// int sub_19B2210(int a1, int a2, int a3, unsigned int a4);
// [0x19b22b0] (158 bytes) sub_19B22B0
// int sub_19B22B0(int a1, int a2, int a3, unsigned int a4);
// [0x19b2350] (172 bytes) sub_19B2350
// int sub_19B2350(int a1, int a2, int a3, unsigned int a4);
// [0x19b2400] (172 bytes) sub_19B2400
// int sub_19B2400(int a1, int a2, int a3, unsigned int a4);
// [0x19b24b0] (172 bytes) sub_19B24B0
// int sub_19B24B0(int a1, int a2, int a3, unsigned int a4);
// [0x19b2560] (116 bytes) sub_19B2560
// int sub_19B2560(uint32_t *a1, int a2, int a3, unsigned int a4);
// [0x19b25e0] (116 bytes) sub_19B25E0
// int sub_19B25E0(uint32_t *a1, int a2, int a3, unsigned int a4);
// [0x19b2660] (116 bytes) sub_19B2660
// int sub_19B2660(uint32_t *a1, int a2, int a3, unsigned int a4);
// [0x19b26e0] (244 bytes) sub_19B26E0
// int sub_19B26E0(int a1, int a2, int a3, unsigned int a4);
// [0x19b27e0] (244 bytes) sub_19B27E0
// int sub_19B27E0(int a1, int a2, int a3, unsigned int a4);
// [0x19b28e0] (244 bytes) sub_19B28E0
// int sub_19B28E0(int a1, int a2, int a3, unsigned int a4);
// [0x19b29e0] (158 bytes) sub_19B29E0
// int sub_19B29E0(int a1, int a2, int a3, unsigned int a4);
// [0x19b2a80] (158 bytes) sub_19B2A80
// int sub_19B2A80(int a1, int a2, int a3, unsigned int a4);
// [0x19b2b20] (158 bytes) sub_19B2B20
// int sub_19B2B20(int a1, int a2, int a3, unsigned int a4);
// [0x19b2bc0] (235 bytes) sub_19B2BC0
// int sub_19B2BC0(int a1, int a2, int a3, unsigned int a4);
// [0x19b2cb0] (235 bytes) sub_19B2CB0
// int sub_19B2CB0(int a1, int a2, int a3, unsigned int a4);
// [0x19b2da0] (235 bytes) sub_19B2DA0
// int sub_19B2DA0(int a1, int a2, int a3, unsigned int a4);
// [0x19b2e90] (186 bytes) sub_19B2E90
// int sub_19B2E90(uint32_t *a1, int a2, int a3, int a4);
// [0x19b3190] (116 bytes) sub_19B3190
// int sub_19B3190(uint32_t *a1, int a2, int a3, unsigned int a4);
// [0x19b3210] (76 bytes) sub_19B3210
// int sub_19B3210(int a1, int a2);
// [0x19b3260] (244 bytes) sub_19B3260
// int sub_19B3260(int a1, int a2, int a3, unsigned int a4);
// [0x19b3360] (158 bytes) sub_19B3360
// int sub_19B3360(int a1, int a2, int a3, unsigned int a4);
// [0x19b3400] (235 bytes) sub_19B3400
// int sub_19B3400(int a1, int a2, int a3, unsigned int a4);
// [0x19b3570] (158 bytes) sub_19B3570
// int sub_19B3570(int a1, int a2, int a3, unsigned int a4);
// [0x19b3610] (158 bytes) sub_19B3610
// int sub_19B3610(int a1, int a2, int a3, unsigned int a4);
// [0x19b36b0] (158 bytes) sub_19B36B0
// int sub_19B36B0(int a1, int a2, int a3, unsigned int a4);
// [0x19b3750] (172 bytes) sub_19B3750
// int sub_19B3750(int a1, int a2, int a3, unsigned int a4);
// [0x19b3800] (172 bytes) sub_19B3800
// int sub_19B3800(int a1, int a2, int a3, unsigned int a4);
// [0x19b38b0] (172 bytes) sub_19B38B0
// int sub_19B38B0(int a1, int a2, int a3, unsigned int a4);
// [0x19b3960] (116 bytes) sub_19B3960
// int sub_19B3960(uint32_t *a1, int a2, int a3, unsigned int a4);
// [0x19b39e0] (116 bytes) sub_19B39E0
// int sub_19B39E0(uint32_t *a1, int a2, int a3, unsigned int a4);
// [0x19b3a60] (116 bytes) sub_19B3A60
// int sub_19B3A60(uint32_t *a1, int a2, int a3, unsigned int a4);
// [0x19b3ae0] (244 bytes) sub_19B3AE0
// int sub_19B3AE0(int a1, int a2, int a3, unsigned int a4);
// [0x19b3be0] (244 bytes) sub_19B3BE0
// int sub_19B3BE0(int a1, int a2, int a3, unsigned int a4);
// [0x19b3ce0] (244 bytes) sub_19B3CE0
// int sub_19B3CE0(int a1, int a2, int a3, unsigned int a4);
// [0x19b3de0] (158 bytes) sub_19B3DE0
// int sub_19B3DE0(int a1, int a2, int a3, unsigned int a4);
// [0x19b3e80] (158 bytes) sub_19B3E80
// int sub_19B3E80(int a1, int a2, int a3, unsigned int a4);
// [0x19b3f20] (158 bytes) sub_19B3F20
// int sub_19B3F20(int a1, int a2, int a3, unsigned int a4);
// [0x19b3fc0] (235 bytes) sub_19B3FC0
// int sub_19B3FC0(int a1, int a2, int a3, unsigned int a4);
// [0x19b40b0] (235 bytes) sub_19B40B0
// int sub_19B40B0(int a1, int a2, int a3, unsigned int a4);
// [0x19b41a0] (235 bytes) sub_19B41A0
// int sub_19B41A0(int a1, int a2, int a3, unsigned int a4);
// [0x19b4290] (128 bytes) sub_19B4290
// int sub_19B4290(int a1, int a2);
// [0x19b4550] (116 bytes) sub_19B4550
// int sub_19B4550(uint32_t *a1, int a2, int a3, unsigned int a4);
// [0x19b45d0] (76 bytes) sub_19B45D0
// int sub_19B45D0(int a1, int a2);
// [0x19b4620] (244 bytes) sub_19B4620
// int sub_19B4620(int a1, int a2, int a3, unsigned int a4);
// [0x19b4720] (158 bytes) sub_19B4720
// int sub_19B4720(int a1, int a2, int a3, unsigned int a4);
// [0x19b47c0] (235 bytes) sub_19B47C0
// int sub_19B47C0(int a1, int a2, int a3, unsigned int a4);
// [0x19b4930] (106 bytes) sub_19B4930
// int sub_19B4930(int a1, int a2, int a3, int a4);
// [0x19b49a0] (251 bytes) sub_19B49A0
// int sub_19B49A0(int a1, int a2, int a3, unsigned int a4);
// [0x19b4aa0] (305 bytes) sub_19B4AA0
// int sub_19B4AA0(int a1, int a2, int a3, unsigned int a4);
// [0x19b4be0] (50 bytes) sub_19B4BE0
// int sub_19B4BE0(int a1, uint8_t *a2);
// [0x19b4c20] (116 bytes) sub_19B4C20
// int sub_19B4C20(int *a1, int a2, uint8_t *a3, unsigned int a4);
// [0x19b4ca0] (244 bytes) sub_19B4CA0
// int sub_19B4CA0(int a1, int a2, int a3, unsigned int a4);
// [0x19b4da0] (258 bytes) sub_19B4DA0
// int sub_19B4DA0(int a1, int a2, int a3, unsigned int a4);
// [0x19b4eb0] (235 bytes) sub_19B4EB0
// int sub_19B4EB0(int a1, int a2, int a3, unsigned int a4);
// [0x19b5060] (136 bytes) sub_19B5060
// int sub_19B5060(uint32_t *a1, int a2, int a3, unsigned int a4);
// [0x19b50f0] (116 bytes) sub_19B50F0
// int sub_19B50F0(int a1, uint8_t *a2);
// [0x19b5170] (209 bytes) sub_19B5170
// int sub_19B5170(int a1, uint8_t *a2);
// [0x19b5250] (288 bytes) sub_19B5250
// int sub_19B5250(int a1, int a2, int a3, unsigned int a4);
// [0x19b5370] (226 bytes) sub_19B5370
// int sub_19B5370(int a1, int a2, int a3, int a4);
// [0x19b5460] (235 bytes) sub_19B5460
// int sub_19B5460(int a1, int a2, int a3, unsigned int a4);
// [0x19b5550] (250 bytes) sub_19B5550
// int sub_19B5550(int a1, int a2, int a3, unsigned int a4);
// [0x19b5650] (235 bytes) sub_19B5650
// int sub_19B5650(int a1, int a2, int a3, unsigned int a4);
// [0x19b5740] (149 bytes) sub_19B5740
// int sub_19B5740(int a1, int a2, int a3, int a4);
// [0x19b5960] (117 bytes) sub_19B5960
// int sub_19B5960(uint32_t *a1, int a2, int a3, unsigned int a4);
// [0x19b59e0] (244 bytes) sub_19B59E0
// int sub_19B59E0(int a1, int a2, int a3, unsigned int a4);
// [0x19b5ae0] (158 bytes) sub_19B5AE0
// int sub_19B5AE0(int a1, int a2, int a3, unsigned int a4);
// [0x19b5b80] (235 bytes) sub_19B5B80
// int sub_19B5B80(int a1, int a2, int a3, unsigned int a4);
// [0x19b5c70] (213 bytes) sub_19B5C70
// int sub_19B5C70(int a1, int a2, int a3, int a4);
// [0x19b5dd0] (12 bytes) sub_19B5DD0
// int sub_19B5DD0();
// [0x19b5de0] (59 bytes) sub_19B5DE0
// int sub_19B5DE0(int a1, void *dest, void *src, size_t n);
// [0x19b5e40] (434 bytes) sub_19B5E40
// int sub_19B5E40(int a1, int a2);
// [0x19b6000] (172 bytes) sub_19B6000
// int sub_19B6000(int a1, int a2);
// [0x19b60b0] (241 bytes) sub_19B60B0
// int sub_19B60B0(int a1, int a2, int a3, unsigned int a4);
// [0x19b61b0] (96 bytes) sub_19B61B0
// int sub_19B61B0(int a1, int a2);
// [0x19b6210] (119 bytes) sub_19B6210
// int sub_19B6210(uint32_t *a1, int a2, int a3, unsigned int a4);
// [0x19b6290] (247 bytes) sub_19B6290
// int sub_19B6290(int a1, int a2, int a3, unsigned int a4);
// [0x19b6390] (161 bytes) sub_19B6390
// int sub_19B6390(int a1, int a2, int a3, unsigned int a4);
// [0x19b6440] (173 bytes) sub_19B6440
// int sub_19B6440(int a1, int a2, int a3, uint32_t *a4);
// [0x19b65b0] (66 bytes) sub_19B65B0
// int sub_19B65B0(int a1, int a2, int a3, int a4);
// [0x19b6600] (76 bytes) sub_19B6600
// int sub_19B6600(int a1, int a2);
// [0x19b6690] (116 bytes) sub_19B6690
// int sub_19B6690(uint32_t *a1, int a2, int a3, unsigned int a4);
// [0x19b6710] (50 bytes) sub_19B6710
// int sub_19B6710(int a1, int a2);
// [0x19b6750] (244 bytes) sub_19B6750
// int sub_19B6750(int a1, int a2, int a3, unsigned int a4);
// [0x19b6850] (158 bytes) sub_19B6850
// int sub_19B6850(int a1, int a2, int a3, unsigned int a4);
// [0x19b68f0] (235 bytes) sub_19B68F0
// int sub_19B68F0(int a1, int a2, int a3, unsigned int a4);
// [0x19b6a60] (272 bytes) sub_19B6A60
// int sub_19B6A60(int a1, int a2, int a3, unsigned int a4);
// [0x19b6b70] (114 bytes) sub_19B6B70
// int sub_19B6B70(int a1, int a2);
// [0x19b8c30] (45 bytes) sub_19B8C30
// int sub_19B8C30(int a1, int a2);
// [0x19b8c60] (53 bytes) sub_19B8C60
// int sub_19B8C60(int a1, void *a2, size_t a3);
// [0x19b8ca0] (37 bytes) sub_19B8CA0
// int sub_19B8CA0(int a1);
// [0x19b8cf0] (45 bytes) sub_19B8CF0
// int sub_19B8CF0(int a1, int a2);
// [0x19b8d20] (53 bytes) sub_19B8D20
// int sub_19B8D20(int a1, void *a2, size_t a3);
// [0x19b8d60] (37 bytes) sub_19B8D60
// int sub_19B8D60(int a1);
// [0x19b8db0] (45 bytes) sub_19B8DB0
// int sub_19B8DB0(int a1, int a2);
// [0x19b8de0] (53 bytes) sub_19B8DE0
// int sub_19B8DE0(int a1, void *a2, size_t a3);
// [0x19b8e20] (37 bytes) sub_19B8E20
// int sub_19B8E20(int a1);
// [0x19b8e70] (45 bytes) sub_19B8E70
// int sub_19B8E70(int a1, int a2);
// [0x19b8ea0] (53 bytes) sub_19B8EA0
// int sub_19B8EA0(int a1, void *a2, size_t a3);
// [0x19b8ee0] (37 bytes) sub_19B8EE0
// int sub_19B8EE0(int a1);
// [0x19b8f30] (45 bytes) sub_19B8F30
// int sub_19B8F30(int a1, uint32_t *a2);
// [0x19b8f60] (53 bytes) sub_19B8F60
// int sub_19B8F60(int a1, char *a2, size_t a3);
// [0x19b8fa0] (37 bytes) sub_19B8FA0
// int sub_19B8FA0(int a1);
// [0x19b8ff0] (45 bytes) sub_19B8FF0
// int sub_19B8FF0(int a1, int a2);
// [0x19b9020] (53 bytes) sub_19B9020
// int sub_19B9020(int a1, void *a2, size_t a3);
// [0x19b9060] (37 bytes) sub_19B9060
// int sub_19B9060(int a1);
// [0x19b90b0] (45 bytes) sub_19B90B0
// int sub_19B90B0(int a1, int a2);
// [0x19b90e0] (53 bytes) sub_19B90E0
// int sub_19B90E0(int a1, void *a2, size_t a3);
// [0x19b9120] (37 bytes) sub_19B9120
// int sub_19B9120(int a1);
// [0x19b9170] (45 bytes) sub_19B9170
// int sub_19B9170(int a1, int a2);
// [0x19b91a0] (53 bytes) sub_19B91A0
// int sub_19B91A0(int a1, void *a2, size_t a3);
// [0x19b91e0] (37 bytes) sub_19B91E0
// int sub_19B91E0(int a1);
// [0x19b9230] (45 bytes) sub_19B9230
// int sub_19B9230(int a1, int a2);
// [0x19b9260] (53 bytes) sub_19B9260
// int sub_19B9260(int a1, void *a2, size_t a3);
// [0x19b92a0] (37 bytes) sub_19B92A0
// int sub_19B92A0(int a1);
// [0x19b92d0] (37 bytes) sub_19B92D0
// int sub_19B92D0(int a1);
// [0x19b9300] (45 bytes) sub_19B9300
// int sub_19B9300(int a1, int a2);
// [0x19b9330] (53 bytes) sub_19B9330
// int sub_19B9330(int a1, void *a2, size_t a3);
// [0x19b9370] (37 bytes) sub_19B9370
// int sub_19B9370(int a1);
// [0x19b93a0] (37 bytes) sub_19B93A0
// int sub_19B93A0(int a1);
// [0x19b93d0] (45 bytes) sub_19B93D0
// int sub_19B93D0(int a1, int a2);
// [0x19b9400] (53 bytes) sub_19B9400
// int sub_19B9400(int a1, void *a2, size_t a3);
// [0x19b9440] (37 bytes) sub_19B9440
// int sub_19B9440(int a1);
// [0x19b9510] (459 bytes) sub_19B9510
// bool sub_19B9510(int a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, int a5, int a6);
// [0x19b9a90] (45 bytes) sub_19B9A90
// int sub_19B9A90(int a1, int a2);
// [0x19b9ac0] (53 bytes) sub_19B9AC0
// int sub_19B9AC0(int a1, int a2, int a3);
// [0x19b9b00] (37 bytes) sub_19B9B00
// int sub_19B9B00(int a1);
// [0x19b9b50] (85 bytes) sub_19B9B50
// int sub_19B9B50(uint32_t *a1, int *a2);
// [0x19b9bb0] (85 bytes) sub_19B9BB0
// int sub_19B9BB0(uint32_t *a1, int *a2);
// [0x19b9f80] (117 bytes) sub_19B9F80
// int sub_19B9F80(uint32_t *a1, uint32_t *a2, int a3, int a4);
// [0x19ba000] (341 bytes) sub_19BA000
// int sub_19BA000(uint32_t *a1, int a2, char *a3, size_t a4);
// [0x19bbe10] (41 bytes) sub_19BBE10
// int sub_19BBE10(int a1, int a2, int a3);
// [0x19bc220] (38 bytes) evp_pkey_set_cb_translate
// uint32_t *evp_pkey_set_cb_translate(uint32_t *a1, int a2);
// [0x19bc320] (17 bytes) sub_19BC320
// int sub_19BC320(uint32_t **a1, uint32_t **a2);
