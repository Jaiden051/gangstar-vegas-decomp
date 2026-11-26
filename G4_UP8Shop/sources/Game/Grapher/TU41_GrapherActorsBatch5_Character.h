#pragma once
// ============================================================================
// TU41_GrapherActorsBatch5_Character.h
// Complete Translation Unit [41/41]
// Binary Range in lib/x86/libGangstar4.so: 0xc5aa50 .. 0xc6c3a0 (70 KB)
// Total Decompiled Functions in TU: 157 (100% coverage)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// Function Table in Translation Unit:
// [0xc5aa50] (243 bytes) sub_C5AA50
// int sub_C5AA50();
// [0xc5ab50] (42 bytes) sub_C5AB50
// void ActorGameCharacterSetWeapon::~ActorGameCharacterSetWeapon(grapher::ActorBase *a1);
// [0xc5ab80] (42 bytes) sub_C5AB80
// void ActorGameCharacterSetRandomDestination::~ActorGameCharacterSetRandomDestination(grapher::ActorBase *a1);
// [0xc5abb0] (42 bytes) sub_C5ABB0
// void ActorGameCharacterSetPathDestination::~ActorGameCharacterSetPathDestination(grapher::ActorBase *a1);
// [0xc5abe0] (42 bytes) sub_C5ABE0
// void ActorGameCharacterSetMoveAnimation::~ActorGameCharacterSetMoveAnimation(grapher::ActorBase *a1);
// [0xc5ac10] (42 bytes) sub_C5AC10
// void ActorGameCharacterSetMood::~ActorGameCharacterSetMood(grapher::ActorBase *a1);
// [0xc5ac40] (42 bytes) sub_C5AC40
// void ActorGameCharacterSetMonitoredAnim::~ActorGameCharacterSetMonitoredAnim(grapher::ActorBase *a1);
// [0xc5ac70] (42 bytes) sub_C5AC70
// void ActorGameCharacterSetInVehicle::~ActorGameCharacterSetInVehicle(grapher::ActorBase *a1);
// [0xc5aca0] (42 bytes) sub_C5ACA0
// void ActorGameCharacterSetInteractionPreset::~ActorGameCharacterSetInteractionPreset(grapher::ActorBase *a1);
// [0xc5acd0] (42 bytes) sub_C5ACD0
// void ActorGameCharacterSetDriveBehaviour::~ActorGameCharacterSetDriveBehaviour(grapher::ActorBase *a1);
// [0xc5ad00] (42 bytes) sub_C5AD00
// void ActorGameCharacterRequestToken::~ActorGameCharacterRequestToken(grapher::ActorBase *a1);
// [0xc5ad30] (42 bytes) sub_C5AD30
// void ActorGameCharacterReloadWeapon::~ActorGameCharacterReloadWeapon(grapher::ActorBase *a1);
// [0xc5ad60] (42 bytes) sub_C5AD60
// void ActorGameCharacterRaiseWeapon::~ActorGameCharacterRaiseWeapon(grapher::ActorBase *a1);
// [0xc5ad90] (42 bytes) sub_C5AD90
// void ActorGameCharacterPushOutOfVehicle::~ActorGameCharacterPushOutOfVehicle(grapher::ActorBase *a1);
// [0xc5adc0] (42 bytes) sub_C5ADC0
// void ActorGameCharacterProstrate::~ActorGameCharacterProstrate(grapher::ActorBase *a1);
// [0xc5adf0] (42 bytes) sub_C5ADF0
// void ActorGameCharacterPlayAnim::~ActorGameCharacterPlayAnim(grapher::ActorBase *a1);
// [0xc5ae20] (42 bytes) sub_C5AE20
// void ActorGameCharacterMove::~ActorGameCharacterMove(grapher::ActorBase *a1);
// [0xc5ae50] (42 bytes) sub_C5AE50
// void ActorGameCharacterMeleeAttack::~ActorGameCharacterMeleeAttack(grapher::ActorBase *a1);
// [0xc5ae80] (42 bytes) sub_C5AE80
// void ActorGameCharacterMelee::~ActorGameCharacterMelee(grapher::ActorBase *a1);
// [0xc5aeb0] (42 bytes) sub_C5AEB0
// void ActorGameCharacterLockWantedLevel::~ActorGameCharacterLockWantedLevel(grapher::ActorBase *a1);
// [0xc5aee0] (42 bytes) sub_C5AEE0
// void ActorGameCharacterKill::~ActorGameCharacterKill(grapher::ActorBase *a1);
// [0xc5af10] (42 bytes) sub_C5AF10
// void ActorGameCharacterGetWeaponDamage::~ActorGameCharacterGetWeaponDamage(grapher::ActorBase *a1);
// [0xc5af40] (42 bytes) sub_C5AF40
// void ActorGameCharacterGetOut::~ActorGameCharacterGetOut(grapher::ActorBase *a1);
// [0xc5af70] (42 bytes) sub_C5AF70
// void ActorGameCharacterGetIn::~ActorGameCharacterGetIn(grapher::ActorBase *a1);
// [0xc5afa0] (42 bytes) sub_C5AFA0
// void ActorGameCharacterCoverObject::~ActorGameCharacterCoverObject(grapher::ActorBase *a1);
// [0xc5afd0] (42 bytes) sub_C5AFD0
// void ActorGameCharacterFollow::~ActorGameCharacterFollow(grapher::ActorBase *a1);
// [0xc5b000] (42 bytes) sub_C5B000
// void ActorGameCharacterFlinch::~ActorGameCharacterFlinch(grapher::ActorBase *a1);
// [0xc5b030] (240 bytes) sub_C5B030
// int sub_C5B030(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc5b120] (103 bytes) sub_C5B120
// int sub_C5B120(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc5b190] (64 bytes) sub_C5B190
// void sub_C5B190(grapher::ActorBase *a1);
// [0xc5b1d0] (64 bytes) sub_C5B1D0
// void sub_C5B1D0(grapher::ActorBase *a1);
// [0xc5b210] (64 bytes) sub_C5B210
// void sub_C5B210(grapher::ActorBase *a1);
// [0xc5b250] (64 bytes) sub_C5B250
// void sub_C5B250(grapher::ActorBase *a1);
// [0xc5b290] (64 bytes) sub_C5B290
// void sub_C5B290(grapher::ActorBase *a1);
// [0xc5b2d0] (64 bytes) sub_C5B2D0
// void sub_C5B2D0(grapher::ActorBase *a1);
// [0xc5b310] (64 bytes) sub_C5B310
// void sub_C5B310(grapher::ActorBase *a1);
// [0xc5b350] (64 bytes) sub_C5B350
// void sub_C5B350(grapher::ActorBase *a1);
// [0xc5b390] (64 bytes) sub_C5B390
// void sub_C5B390(grapher::ActorBase *a1);
// [0xc5b3d0] (64 bytes) sub_C5B3D0
// void sub_C5B3D0(grapher::ActorBase *a1);
// [0xc5b410] (64 bytes) sub_C5B410
// void sub_C5B410(grapher::ActorBase *a1);
// [0xc5b450] (64 bytes) sub_C5B450
// void sub_C5B450(grapher::ActorBase *a1);
// [0xc5b490] (64 bytes) sub_C5B490
// void sub_C5B490(grapher::ActorBase *a1);
// [0xc5b4d0] (64 bytes) sub_C5B4D0
// void sub_C5B4D0(grapher::ActorBase *a1);
// [0xc5b510] (64 bytes) sub_C5B510
// void sub_C5B510(grapher::ActorBase *a1);
// [0xc5b550] (64 bytes) sub_C5B550
// void sub_C5B550(grapher::ActorBase *a1);
// [0xc5b590] (64 bytes) sub_C5B590
// void sub_C5B590(grapher::ActorBase *a1);
// [0xc5b5d0] (64 bytes) sub_C5B5D0
// void sub_C5B5D0(grapher::ActorBase *a1);
// [0xc5b610] (64 bytes) sub_C5B610
// void sub_C5B610(grapher::ActorBase *a1);
// [0xc5b650] (64 bytes) sub_C5B650
// void sub_C5B650(grapher::ActorBase *a1);
// [0xc5b690] (64 bytes) sub_C5B690
// void sub_C5B690(grapher::ActorBase *a1);
// [0xc5b6d0] (64 bytes) sub_C5B6D0
// void sub_C5B6D0(grapher::ActorBase *a1);
// [0xc5b710] (64 bytes) sub_C5B710
// void sub_C5B710(grapher::ActorBase *a1);
// [0xc5b750] (64 bytes) sub_C5B750
// void sub_C5B750(grapher::ActorBase *a1);
// [0xc5b790] (64 bytes) sub_C5B790
// void sub_C5B790(grapher::ActorBase *a1);
// [0xc5b7d0] (64 bytes) sub_C5B7D0
// void sub_C5B7D0(grapher::ActorBase *a1);
// [0xc5b810] (420 bytes) sub_C5B810
// void sub_C5B810(int a1, uint32_t *a2);
// [0xc5b9c0] (257 bytes) sub_C5B9C0
// int sub_C5B9C0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc5bad0] (214 bytes) sub_C5BAD0
// int sub_C5BAD0(grapher::ActorBase *a1, grapher::ActorContext *a2);
// [0xc5bbb0] (498 bytes) sub_C5BBB0
// int sub_C5BBB0(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);
// [0xc5bdb0] (514 bytes) sub_C5BDB0
// __guard *sub_C5BDB0(uint32_t *a1);
// [0xc5bfc0] (341 bytes) sub_C5BFC0
// void *sub_C5BFC0(uint32_t *a1, unsigned int a2);
// [0xc5c120] (1513 bytes) sub_C5C120
// int sub_C5C120(grapher::ActorBase *a1);
// [0xc5c710] (402 bytes) sub_C5C710
// void sub_C5C710(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc5c8b0] (310 bytes) sub_C5C8B0
// int sub_C5C8B0(grapher::ActorBase *a1);
// [0xc5c9f0] (1088 bytes) sub_C5C9F0
// int sub_C5C9F0(grapher::ActorBase *a1);
// [0xc5ce30] (1280 bytes) sub_C5CE30
// int sub_C5CE30(grapher::ActorBase *a1);
// [0xc5d330] (2149 bytes) sub_C5D330
// int sub_C5D330(grapher::ActorBase *a1);
// [0xc5dba0] (2635 bytes) sub_C5DBA0
// int sub_C5DBA0(grapher::ActorBase *a1);
// [0xc5e5f0] (1486 bytes) sub_C5E5F0
// int sub_C5E5F0(grapher::ActorBase *a1);
// [0xc5ebc0] (1500 bytes) sub_C5EBC0
// int sub_C5EBC0(grapher::ActorBase *a1);
// [0xc5f1a0] (2040 bytes) sub_C5F1A0
// int sub_C5F1A0(grapher::ActorBase *a1);
// [0xc5f9a0] (1536 bytes) sub_C5F9A0
// int sub_C5F9A0(grapher::ActorBase *a1);
// [0xc5ffa0] (655 bytes) sub_C5FFA0
// int sub_C5FFA0(grapher::ActorBase *a1);
// [0xc60230] (2430 bytes) sub_C60230
// int sub_C60230(grapher::ActorBase *a1);
// [0xc60bb0] (1088 bytes) sub_C60BB0
// int sub_C60BB0(grapher::ActorBase *a1);
// [0xc60ff0] (729 bytes) sub_C60FF0
// int sub_C60FF0(grapher::ActorBase *a1);
// [0xc612d0] (729 bytes) sub_C612D0
// int sub_C612D0(grapher::ActorBase *a1);
// [0xc615b0] (1051 bytes) sub_C615B0
// int sub_C615B0(grapher::ActorBase *a1);
// [0xc619d0] (803 bytes) sub_C619D0
// int sub_C619D0(grapher::ActorBase *a1);
// [0xc61d00] (1060 bytes) sub_C61D00
// int sub_C61D00(grapher::ActorBase *a1);
// [0xc62130] (655 bytes) sub_C62130
// int sub_C62130(grapher::ActorBase *a1);
// [0xc623c0] (1280 bytes) sub_C623C0
// int sub_C623C0(grapher::ActorBase *a1);
// [0xc628c0] (1014 bytes) sub_C628C0
// int sub_C628C0(grapher::ActorBase *a1);
// [0xc62cc0] (1151 bytes) sub_C62CC0
// int sub_C62CC0(grapher::ActorBase *a1);
// [0xc63140] (3903 bytes) sub_C63140
// int sub_C63140(grapher::ActorBase *a1);
// [0xc64080] (903 bytes) sub_C64080
// int sub_C64080(grapher::ActorBase *a1);
// [0xc64410] (1540 bytes) sub_C64410
// int sub_C64410(grapher::ActorBase *a1);
// [0xc64a20] (1392 bytes) sub_C64A20
// int sub_C64A20(grapher::ActorBase *a1);
// [0xc64f90] (857 bytes) sub_C64F90
// int sub_C64F90(grapher::ActorBase *a1);
// [0xc652f0] (551 bytes) sub_C652F0
// int sub_C652F0(grapher::ActorBase *a1);
// [0xc65520] (181 bytes) sub_C65520
// int sub_C65520(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc655e0] (210 bytes) sub_C655E0
// int sub_C655E0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc656c0] (207 bytes) sub_C656C0
// int sub_C656C0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc65790] (184 bytes) sub_C65790
// int sub_C65790(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc65850] (192 bytes) sub_C65850
// int sub_C65850(__m128i a1, grapher::ActorBase *a2, int a3, grapher::ActorContext *a4);
// [0xc65910] (233 bytes) sub_C65910
// int sub_C65910(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc65a00] (341 bytes) sub_C65A00
// int sub_C65A00(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc65b60] (236 bytes) sub_C65B60
// int sub_C65B60(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc65c50] (1313 bytes) sub_C65C50
// void sub_C65C50(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc66180] (389 bytes) sub_C66180
// int *sub_C66180(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc66310] (64 bytes) sub_C66310
// int (**ActorGameCharacterFlinch::ActorGameCharacterFlinch(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc66350] (64 bytes) sub_C66350
// int (**ActorGameCharacterFollow::ActorGameCharacterFollow(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc66390] (64 bytes) sub_C66390
// int (**ActorGameCharacterCoverObject::ActorGameCharacterCoverObject(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc663d0] (72 bytes) sub_C663D0
// int (**ActorGameCharacterGetIn::ActorGameCharacterGetIn(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc66420] (64 bytes) sub_C66420
// int (**ActorGameCharacterGetOut::ActorGameCharacterGetOut(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc66460] (64 bytes) sub_C66460
// int (**ActorGameCharacterGetWeaponDamage::ActorGameCharacterGetWeaponDamage(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc664a0] (64 bytes) sub_C664A0
// int (**ActorGameCharacterKill::ActorGameCharacterKill(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc664e0] (64 bytes) sub_C664E0
// int (**ActorGameCharacterLockWantedLevel::ActorGameCharacterLockWantedLevel(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc66520] (64 bytes) sub_C66520
// int (**ActorGameCharacterMelee::ActorGameCharacterMelee(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc66560] (64 bytes) sub_C66560
// int (**ActorGameCharacterMeleeAttack::ActorGameCharacterMeleeAttack(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc665a0] (64 bytes) sub_C665A0
// int (**ActorGameCharacterMove::ActorGameCharacterMove(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc665e0] (64 bytes) sub_C665E0
// int (**ActorGameCharacterPlayAnim::ActorGameCharacterPlayAnim(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc66620] (64 bytes) sub_C66620
// int (**ActorGameCharacterProstrate::ActorGameCharacterProstrate(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc66660] (64 bytes) sub_C66660
// int (**ActorGameCharacterPushOutOfVehicle::ActorGameCharacterPushOutOfVehicle(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc666a0] (64 bytes) sub_C666A0
// int (**ActorGameCharacterRaiseWeapon::ActorGameCharacterRaiseWeapon(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc666e0] (64 bytes) sub_C666E0
// int (**ActorGameCharacterReloadWeapon::ActorGameCharacterReloadWeapon(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc66720] (64 bytes) sub_C66720
// int (**ActorGameCharacterRequestToken::ActorGameCharacterRequestToken(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc66760] (64 bytes) sub_C66760
// int (**ActorGameCharacterSetDriveBehaviour::ActorGameCharacterSetDriveBehaviour(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc667a0] (64 bytes) sub_C667A0
// int (**ActorGameCharacterSetInteractionPreset::ActorGameCharacterSetInteractionPreset(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc667e0] (64 bytes) sub_C667E0
// int (**ActorGameCharacterSetInVehicle::ActorGameCharacterSetInVehicle(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc66820] (64 bytes) sub_C66820
// int (**ActorGameCharacterSetMonitoredAnim::ActorGameCharacterSetMonitoredAnim(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc66860] (64 bytes) sub_C66860
// int (**ActorGameCharacterSetMood::ActorGameCharacterSetMood(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc668a0] (64 bytes) sub_C668A0
// int (**ActorGameCharacterSetMoveAnimation::ActorGameCharacterSetMoveAnimation(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc668e0] (64 bytes) sub_C668E0
// int (**ActorGameCharacterSetPathDestination::ActorGameCharacterSetPathDestination(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc66920] (64 bytes) sub_C66920
// int (**ActorGameCharacterSetRandomDestination::ActorGameCharacterSetRandomDestination(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc66960] (64 bytes) sub_C66960
// int (**ActorGameCharacterSetWeapon::ActorGameCharacterSetWeapon(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc669a0] (471 bytes) sub_C669A0
// int sub_C669A0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc66b80] (78 bytes) sub_C66B80
// int (**ActorGameCharacterGoTo::ActorGameCharacterGoTo(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc66bd0] (88 bytes) sub_C66BD0
// void ActorGameCharacterSetPath::~ActorGameCharacterSetPath(grapher::ActorBase *a1);
// [0xc66c30] (78 bytes) sub_C66C30
// int (**ActorGameCharacterSetPath::ActorGameCharacterSetPath(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc66c80] (108 bytes) sub_C66C80
// void ActorGameCharacterGoTo::~ActorGameCharacterGoTo(grapher::ActorBase *a1);
// [0xc66cf0] (96 bytes) sub_C66CF0
// void sub_C66CF0(grapher::ActorBase *a1);
// [0xc66d50] (116 bytes) sub_C66D50
// void sub_C66D50(grapher::ActorBase *a1);
// [0xc66dd0] (1391 bytes) sub_C66DD0
// 0xc66dd0 sub_C66DD0
// [0xc67340] (2137 bytes) sub_C67340
// int sub_C67340(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc67ba0] (210 bytes) sub_C67BA0
// int sub_C67BA0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc67c80] (325 bytes) sub_C67C80
// int sub_C67C80(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc67dd0] (325 bytes) sub_C67DD0
// int sub_C67DD0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc67f20] (237 bytes) sub_C67F20
// 0xc67f20 sub_C67F20
// [0xc68010] (478 bytes) sub_C68010
// int sub_C68010( int a1, int a2, int a3, grapher::ActorBase *a4, int a5, grapher::ActorContext *a6);
// [0xc681f0] (1367 bytes) sub_C681F0
// int sub_C681F0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc68750] (375 bytes) sub_C68750
// int sub_C68750(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc688d0] (677 bytes) sub_C688D0
// int sub_C688D0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc68b80] (1384 bytes) sub_C68B80
// int sub_C68B80(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc690f0] (437 bytes) sub_C690F0
// int sub_C690F0( grapher::ActorContext *a1, grapher::ActorBase *a2, int a3, grapher::ActorContext *a4);
// [0xc692b0] (1726 bytes) sub_C692B0
// int sub_C692B0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc69970] (1565 bytes) sub_C69970
// char sub_C69970(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc69f90] (284 bytes) sub_C69F90
// uint32_t *sub_C69F90(uint32_t *a1, int a2, int *a3, int *a4);
// [0xc6a0b0] (215 bytes) sub_C6A0B0
// int sub_C6A0B0(int a1, int *a2);
// [0xc6a190] (770 bytes) sub_C6A190
// int sub_C6A190(const char *a1);
// [0xc6a4a0] (377 bytes) sub_C6A4A0
// int sub_C6A4A0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc6a620] (757 bytes) sub_C6A620
// int sub_C6A620(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc6a920] (3467 bytes) sub_C6A920
// void sub_C6A920(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc6b6b0] (284 bytes) sub_C6B6B0
// uint32_t *sub_C6B6B0(uint32_t *a1, int a2, int *a3, int *a4);
// [0xc6b7d0] (215 bytes) sub_C6B7D0
// int sub_C6B7D0(int a1, int *a2);
// [0xc6b8b0] (481 bytes) sub_C6B8B0
// int sub_C6B8B0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc6baa0] (2295 bytes) sub_C6BAA0
// int sub_C6BAA0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
