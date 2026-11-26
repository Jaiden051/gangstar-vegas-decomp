#pragma once
// ============================================================================
// TU32_MenuControllerPart12.h
// Complete Translation Unit [32/41]
// Binary Range in lib/x86/libGangstar4.so: 0xc10c70 .. 0xc1c5f0 (46 KB)
// Total Decompiled Functions in TU: 124 (100% coverage)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// Function Table in Translation Unit:
// [0xc10c70] (556 bytes) sub_C10C70
// int sub_C10C70();
// [0xc10ea0] (9 bytes) sub_C10EA0
// int sub_C10EA0();
// [0xc10eb8] (1 bytes) nullsub_522
// void nullsub_522();
// [0xc10ec0] (15 bytes) sub_C10EC0
// int sub_C10EC0(int a1);
// [0xc10ed0] (15 bytes) sub_C10ED0
// int sub_C10ED0(int a1);
// [0xc10ee0] (106 bytes) sub_C10EE0
// int sub_C10EE0(int a1, int a2);
// [0xc10f50] (9 bytes) sub_C10F50
// void sub_C10F50();
// [0xc10f68] (1 bytes) nullsub_523
// void nullsub_523();
// [0xc10f78] (1 bytes) nullsub_524
// void nullsub_524();
// [0xc10f80] (9 bytes) sub_C10F80
// void sub_C10F80();
// [0xc10f90] (31 bytes) sub_C10F90
// int sub_C10F90(int64_t a1, char a2);
// [0xc10fb8] (1 bytes) nullsub_525
// void nullsub_525();
// [0xc10fc8] (1 bytes) nullsub_526
// void nullsub_526();
// [0xc10fd0] (16 bytes) sub_C10FD0
// int sub_C10FD0(int a1);
// [0xc10fe0] (92 bytes) sub_C10FE0
// int sub_C10FE0(uint8_t *a1);
// [0xc11040] (12 bytes) sub_C11040
// int sub_C11040(int a1);
// [0xc11050] (15 bytes) sub_C11050
// int sub_C11050(int a1);
// [0xc11060] (32 bytes) sub_C11060
// int sub_C11060(int a1);
// [0xc11080] (253 bytes) sub_C11080
// uint32_t **sub_C11080(uint32_t *a1);
// [0xc11180] (827 bytes) sub_C11180
// int sub_C11180(int a1, uint8_t a2);
// [0xc114c0] (170 bytes) sub_C114C0
// char sub_C114C0(int *a1, int a2, char a3);
// [0xc11570] (94 bytes) sub_C11570
// void sub_C11570(uint8_t *a1, int a2, int a3);
// [0xc115d0] (171 bytes) sub_C115D0
// int sub_C115D0(uint32_t *a1, uint32_t *a2);
// [0xc11680] (175 bytes) sub_C11680
// int sub_C11680(int a1);
// [0xc11730] (191 bytes) sub_C11730
// int sub_C11730(int a1);
// [0xc117f0] (382 bytes) sub_C117F0
// size_t sub_C117F0(int *a1, uint32_t *a2);
// [0xc11970] (1244 bytes) sub_C11970
// int sub_C11970(float *a1, float *a2);
// [0xc11e50] (420 bytes) sub_C11E50
// void sub_C11E50(int a1, uint32_t *a2);
// [0xc12000] (116 bytes) sub_C12000
// int sub_C12000(uint32_t *a1, uint32_t *a2);
// [0xc12080] (571 bytes) sub_C12080
// float *sub_C12080(float *result, float *a2);
// [0xc122c0] (485 bytes) sub_C122C0
// void sub_C122C0(float *a1, float *a2);
// [0xc124b0] (143 bytes) sub_C124B0
// uint32_t *sub_C124B0(uint32_t *result);
// [0xc12540] (219 bytes) sub_C12540
// int sub_C12540(int *a1, float *a2);
// [0xc12620] (190 bytes) sub_C12620
// int sub_C12620(int a1);
// [0xc126e0] (211 bytes) sub_C126E0
// float *sub_C126E0(float *a1, float *a2);
// [0xc127c0] (248 bytes) sub_C127C0
// float *sub_C127C0(float *a1, int a2);
// [0xc128c0] (341 bytes) sub_C128C0
// void *sub_C128C0(uint32_t *a1, unsigned int a2);
// [0xc12a20] (240 bytes) sub_C12A20
// float *sub_C12A20(float *a1, int a2);
// [0xc12b10] (240 bytes) sub_C12B10
// float *sub_C12B10(float *a1, int a2);
// [0xc12c00] (248 bytes) sub_C12C00
// float *sub_C12C00(float *a1, int a2);
// [0xc12d00] (7841 bytes) sub_C12D00
// int sub_C12D00(int a1);
// [0xc14bb0] (3460 bytes) sub_C14BB0
// unsigned int sub_C14BB0(int a1, char a2, int a3);
// [0xc15940] (947 bytes) sub_C15940
// int sub_C15940(int a1);
// [0xc15d00] (405 bytes) sub_C15D00
// uint32_t *sub_C15D00(int a1);
// [0xc15ea0] (293 bytes) sub_C15EA0
// int sub_C15EA0(int a1, uint32_t **a2);
// [0xc15fd0] (643 bytes) sub_C15FD0
// int sub_C15FD0(int a1);
// [0xc16268] (1 bytes) nullsub_527
// void nullsub_527();
// [0xc16270] (105 bytes) sub_C16270
// char sub_C16270(int a1, int a2);
// [0xc162e0] (48 bytes) sub_C162E0
// int sub_C162E0(int a1, int a2, int a3, int a4);
// [0xc16310] (52 bytes) sub_C16310
// int sub_C16310(uint8_t *a1, uint8_t a2);
// [0xc16350] (80 bytes) sub_C16350
// int sub_C16350(uint32_t *a1, int a2);
// [0xc163a0] (17 bytes) sub_C163A0
// int sub_C163A0(int a1, int a2);
// [0xc163c0] (15 bytes) sub_C163C0
// int sub_C163C0(int a1);
// [0xc163d0] (15 bytes) sub_C163D0
// int sub_C163D0(int a1);
// [0xc163e0] (26 bytes) sub_C163E0
// unsigned int sub_C163E0(int a1, unsigned int a2);
// [0xc16400] (78 bytes) sub_C16400
// int sub_C16400(int a1, int a2);
// [0xc16450] (325 bytes) sub_C16450
// int sub_C16450(uint32_t *a1);
// [0xc165a0] (253 bytes) sub_C165A0
// int sub_C165A0(int *a1);
// [0xc166a0] (164 bytes) sub_C166A0
// int sub_C166A0(int a1);
// [0xc16750] (30 bytes) sub_C16750
// int sub_C16750(int a1, uint8_t a2);
// [0xc16770] (21 bytes) sub_C16770
// int sub_C16770(int a1);
// [0xc16790] (50 bytes) sub_C16790
// int sub_C16790(uint32_t *a1);
// [0xc167d0] (17 bytes) sub_C167D0
// int sub_C167D0(int a1, int a2);
// [0xc167f0] (56 bytes) sub_C167F0
// int sub_C167F0(int a1, uint8_t a2);
// [0xc16830] (190 bytes) sub_C16830
// int sub_C16830(int a1);
// [0xc168f0] (17 bytes) sub_C168F0
// bool sub_C168F0(int a1);
// [0xc16910] (233 bytes) sub_C16910
// long double sub_C16910(int a1, float *a2);
// [0xc16a00] (177 bytes) sub_C16A00
// long double sub_C16A00(uint32_t *a1);
// [0xc16ac0] (145 bytes) sub_C16AC0
// int sub_C16AC0(uint32_t *a1);
// [0xc16b60] (140 bytes) sub_C16B60
// int sub_C16B60(uint32_t *a1);
// [0xc16bf0] (158 bytes) sub_C16BF0
// uint32_t *sub_C16BF0(int a1);
// [0xc16c90] (693 bytes) sub_C16C90
// int sub_C16C90(int a1);
// [0xc16f50] (321 bytes) sub_C16F50
// int sub_C16F50(int a1, int a2);
// [0xc170a0] (16 bytes) sub_C170A0
// int sub_C170A0(int a1);
// [0xc170b0] (389 bytes) sub_C170B0
// int sub_C170B0(int a1);
// [0xc17240] (2125 bytes) sub_C17240
// int sub_C17240(int a1, char a2);
// [0xc17a90] (147 bytes) sub_C17A90
// int sub_C17A90(int a1, float *a2);
// [0xc17b30] (116 bytes) sub_C17B30
// int sub_C17B30(uint32_t *a1, uint32_t *a2);
// [0xc17bb0] (122 bytes) sub_C17BB0
// uint32_t *sub_C17BB0(uint32_t *a1, uint32_t *a2);
// [0xc17c30] (73 bytes) sub_C17C30
// int sub_C17C30(int a1, char *s);
// [0xc17c80] (47 bytes) sub_C17C80
// int sub_C17C80(int a1, int a2);
// [0xc17cb0] (196 bytes) sub_C17CB0
// int sub_C17CB0(int a1);
// [0xc17d80] (717 bytes) sub_C17D80
// int sub_C17D80(uint32_t *a1);
// [0xc18050] (120 bytes) sub_C18050
// int sub_C18050(int a1, int a2, char *s);
// [0xc180d0] (29 bytes) sub_C180D0
// uint32_t *sub_C180D0(uint32_t *a1);
// [0xc180f0] (89 bytes) sub_C180F0
// int sub_C180F0(int a1, char a2);
// [0xc18150] (109 bytes) sub_C18150
// unsigned int sub_C18150(int a1, char a2);
// [0xc181c0] (237 bytes) sub_C181C0
// unsigned int sub_C181C0(int a1);
// [0xc182b0] (100 bytes) sub_C182B0
// unsigned int sub_C182B0(int a1, char a2);
// [0xc18320] (102 bytes) sub_C18320
// bool sub_C18320(int a1);
// [0xc18390] (124 bytes) sub_C18390
// bool sub_C18390(int a1, unsigned int a2);
// [0xc18410] (64 bytes) sub_C18410
// int sub_C18410(uint8_t *a1);
// [0xc18450] (46 bytes) sub_C18450
// int sub_C18450(int a1);
// [0xc18480] (46 bytes) sub_C18480
// int sub_C18480(int a1);
// [0xc184b0] (1345 bytes) sub_C184B0
// glitch::scene::ISceneNode *sub_C184B0( float a1, float a2, float a3, __m128 a4, float a5, int32_t a6, float a7, float a8, float a9, float a10, float a11, float a12, float a13, float a14, float a15, int a16, float a17, float a18, float a19, int a20, float a21, float a22, float a23, int a24, float a25, float a26, float a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, float a41, float a42, float a43, int a44, float a45, float a46, float a47, int a48, float a49, float a50, float a51, int a52, float a53, float a54, float a55, int a56, float a57, float a58, float a59, int a60);
// [0xc18a00] (813 bytes) sub_C18A00
// uint32_t *sub_C18A00( uint8_t *a1, int a2, int a3, uint32_t *a4, int a5, int a6, uint8_t *a7, uint32_t *a8, float a9, float a10, float a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31);
// [0xc18d50] (609 bytes) sub_C18D50
// int sub_C18D50(float *a1);
// [0xc18fc0] (35 bytes) sub_C18FC0
// uint32_t *sub_C18FC0(uint32_t *a1, uint32_t *a2);
// [0xc18ff0] (44 bytes) sub_C18FF0
// uint32_t *sub_C18FF0(uint32_t *a1, uint32_t *a2);
// [0xc19020] (81 bytes) sub_C19020
// int sub_C19020(uint32_t *a1);
// [0xc19080] (118 bytes) sub_C19080
// int sub_C19080(int a1);
// [0xc19100] (293 bytes) sub_C19100
// int sub_C19100(int a1, uint32_t **a2);
// [0xc19230] (4305 bytes) sub_C19230
// void sub_C19230(int a1);
// [0xc1a310] (201 bytes) sub_C1A310
// void sub_C1A310(int a1, int a2);
// [0xc1a3e0] (1141 bytes) sub_C1A3E0
// void *sub_C1A3E0(int a1, int a2);
// [0xc1a860] (423 bytes) sub_C1A860
// void sub_C1A860(int a1);
// [0xc1aa10] (260 bytes) sub_C1AA10
// void sub_C1AA10(uint32_t *a1);
// [0xc1ab20] (381 bytes) sub_C1AB20
// void sub_C1AB20(uint32_t *a1, char a2);
// [0xc1aca0] (7 bytes) sub_C1ACA0
// int sub_C1ACA0(int a1);
// [0xc1acb0] (368 bytes) sub_C1ACB0
// void (__noreturn **sub_C1ACB0(uint32_t *a1))();
// [0xc1ae20] (7 bytes) sub_C1AE20
// int sub_C1AE20(int a1);
// [0xc1ae30] (56 bytes) sub_C1AE30
// void sub_C1AE30(uint32_t *a1);
// [0xc1ae70] (514 bytes) sub_C1AE70
// int sub_C1AE70( int a1, float *a2, unsigned int a3, float a4, float a5, int a6, unsigned int a7, char a8, int a9, int a10, int a11, float a12, int a13, int a14, float a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36);
// [0xc1b080] (583 bytes) sub_C1B080
// int sub_C1B080(int *a1);
// [0xc1b2d0] (357 bytes) sub_C1B2D0
// void sub_C1B2D0(int a1, uint32_t *a2);
// [0xc1b440] (940 bytes) sub_C1B440
// int sub_C1B440(int a1, int a2, char a3, int a4);
// [0xc1b7f0] (928 bytes) sub_C1B7F0
// int sub_C1B7F0(uint32_t *a1, int a2, int a3);
// [0xc1bb90] (84 bytes) sub_C1BB90
// int sub_C1BB90(uint32_t *a1);
// [0xc1bbf0] (669 bytes) sub_C1BBF0
// int sub_C1BBF0(int a1);
// [0xc1be90] (284 bytes) sub_C1BE90
// uint32_t *sub_C1BE90(uint32_t *a1, int a2, int *a3, int *a4);
// [0xc1bfb0] (215 bytes) sub_C1BFB0
// int sub_C1BFB0(int a1, int *a2);
// [0xc1c090] (484 bytes) sub_C1C090
// int sub_C1C090(int a1, int a2, char *s);
// [0xc1c280] (22 bytes) sub_C1C280
// int *sub_C1C280();
// [0xc1c2a0] (846 bytes) std::vector<boost::intrusive_ptr<glitch::video::CMaterial>,GameAllocator<boost::intrusive_ptr<glitch::video::CMaterial>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<glitch::video::CMaterial>*,std::vector<boost::intrusive_ptr<glitch::video::CMaterial>,GameAllocator<boost::intrusive_ptr<glitch::video::CMaterial>>>>,boost::intrusive_ptr<glitch::video::CMaterial> const&)
// int std::vector<boost::intrusive_ptr<glitch::video::CMaterial>,GameAllocator<boost::intrusive_ptr<glitch::video::CMaterial>>>::_M_insert_aux( glitch::video::CMaterial **a1, glitch::video::CMaterial **a2, volatile int32_t **a3);
