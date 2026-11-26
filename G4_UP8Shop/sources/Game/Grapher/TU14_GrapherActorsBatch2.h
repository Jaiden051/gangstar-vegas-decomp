#pragma once
// ============================================================================
// TU14_GrapherActorsBatch2.h
// Complete Translation Unit [14/41]
// Binary Range in lib/x86/libGangstar4.so: 0x84c490 .. 0x85b0d0 (59 KB)
// Total Decompiled Functions in TU: 201 (100% coverage)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// Function Table in Translation Unit:
// [0x84c490] (432 bytes) sub_84C490
// int sub_84C490();
// [0x84c640] (28 bytes) sub_84C640
// int sub_84C640(int a1);
// [0x84c660] (7 bytes) sub_84C660
// int sub_84C660(int a1, int a2);
// [0x84c670] (94 bytes) sub_84C670
// int sub_84C670(int a1, int a2);
// [0x84c6d8] (1 bytes) nullsub_296
// void nullsub_296();
// [0x84c6e8] (1 bytes) nullsub_297
// void nullsub_297();
// [0x84c6f0] (46 bytes) sub_84C6F0
// void sub_84C6F0(uint8_t *a1);
// [0x84c720] (172 bytes) sub_84C720
// int sub_84C720(grapher::ActorBase *a1);
// [0x84c7d0] (851 bytes) sub_84C7D0
// int sub_84C7D0(grapher::ActorBase *a1);
// [0x84cb30] (543 bytes) sub_84CB30
// int sub_84CB30(grapher::ActorBase *a1);
// [0x84cd50] (42 bytes) sub_84CD50
// void ActorGameBase::~ActorGameBase(grapher::ActorBase *a1);
// [0x84cd80] (187 bytes) sub_84CD80
// int *sub_84CD80(int *a1, int a2, int a3, int a4, int *a5);
// [0x84ce40] (42 bytes) sub_84CE40
// void ActorGameCharacterEnterVehicle::~ActorGameCharacterEnterVehicle(grapher::ActorBase *a1);
// [0x84ce70] (64 bytes) sub_84CE70
// void sub_84CE70(grapher::ActorBase *a1);
// [0x84ceb0] (42 bytes) sub_84CEB0
// void ActorGameCharacterExitVehicle::~ActorGameCharacterExitVehicle(grapher::ActorBase *a1);
// [0x84cee0] (42 bytes) sub_84CEE0
// void ActorGameCharacterEquipWeapon::~ActorGameCharacterEquipWeapon(grapher::ActorBase *a1);
// [0x84cf10] (42 bytes) sub_84CF10
// void ActorGameCharacterEjectVehicle::~ActorGameCharacterEjectVehicle(grapher::ActorBase *a1);
// [0x84cf40] (42 bytes) sub_84CF40
// void ActorGameCharacterDrivingManeuver::~ActorGameCharacterDrivingManeuver(grapher::ActorBase *a1);
// [0x84cf70] (42 bytes) sub_84CF70
// void ActorGameCharacterDrive::~ActorGameCharacterDrive(grapher::ActorBase *a1);
// [0x84cfa0] (42 bytes) sub_84CFA0
// void ActorGameCharacterCover::~ActorGameCharacterCover(grapher::ActorBase *a1);
// [0x84cfd0] (42 bytes) sub_84CFD0
// void ActorGameCharacterCorrectCrash::~ActorGameCharacterCorrectCrash(grapher::ActorBase *a1);
// [0x84d000] (42 bytes) sub_84D000
// void ActorGameCharacterClimb::~ActorGameCharacterClimb(grapher::ActorBase *a1);
// [0x84d030] (42 bytes) sub_84D030
// void ActorGameCharacterCheckCollision::~ActorGameCharacterCheckCollision(grapher::ActorBase *a1);
// [0x84d060] (42 bytes) sub_84D060
// void ActorGameCharacterBurst::~ActorGameCharacterBurst(grapher::ActorBase *a1);
// [0x84d090] (42 bytes) sub_84D090
// void ActorGameCharacterAttack::~ActorGameCharacterAttack(grapher::ActorBase *a1);
// [0x84d0c0] (42 bytes) sub_84D0C0
// void ActorGameCharacterAssignObject::~ActorGameCharacterAssignObject(grapher::ActorBase *a1);
// [0x84d0f0] (42 bytes) sub_84D0F0
// void ActorGameCharacterAim::~ActorGameCharacterAim(grapher::ActorBase *a1);
// [0x84d120] (42 bytes) sub_84D120
// void ActorSoundAction::~ActorSoundAction(grapher::ActorBase *a1);
// [0x84d150] (42 bytes) sub_84D150
// void ActorGameCharacterSwitchJetpackMode::~ActorGameCharacterSwitchJetpackMode(grapher::ActorBase *a1);
// [0x84d180] (42 bytes) sub_84D180
// void ActorGameCharacterPickUpVehicle::~ActorGameCharacterPickUpVehicle(grapher::ActorBase *a1);
// [0x84d1b0] (42 bytes) sub_84D1B0
// void ActorGameCharacterParachute::~ActorGameCharacterParachute(grapher::ActorBase *a1);
// [0x84d1e0] (42 bytes) sub_84D1E0
// void ActorGameCharacterLaunchCharacter::~ActorGameCharacterLaunchCharacter(grapher::ActorBase *a1);
// [0x84d210] (42 bytes) sub_84D210
// void ActorGameCameraPreset::~ActorGameCameraPreset(grapher::ActorBase *a1);
// [0x84d240] (42 bytes) sub_84D240
// void ActorTimer::~ActorTimer(grapher::ActorBase *a1);
// [0x84d270] (42 bytes) sub_84D270
// void ActorBehaviorChild::~ActorBehaviorChild(grapher::ActorBase *a1);
// [0x84d2a0] (42 bytes) sub_84D2A0
// void ActorAnimation::~ActorAnimation(grapher::ActorBase *a1);
// [0x84d2d0] (64 bytes) sub_84D2D0
// void sub_84D2D0(grapher::ActorBase *a1);
// [0x84d310] (64 bytes) sub_84D310
// void sub_84D310(grapher::ActorBase *a1);
// [0x84d350] (64 bytes) sub_84D350
// void sub_84D350(grapher::ActorBase *a1);
// [0x84d390] (64 bytes) sub_84D390
// void sub_84D390(grapher::ActorBase *a1);
// [0x84d3d0] (64 bytes) sub_84D3D0
// void sub_84D3D0(grapher::ActorBase *a1);
// [0x84d410] (64 bytes) sub_84D410
// void sub_84D410(grapher::ActorBase *a1);
// [0x84d450] (64 bytes) sub_84D450
// void sub_84D450(grapher::ActorBase *a1);
// [0x84d490] (64 bytes) sub_84D490
// void sub_84D490(grapher::ActorBase *a1);
// [0x84d4d0] (64 bytes) sub_84D4D0
// void sub_84D4D0(grapher::ActorBase *a1);
// [0x84d510] (64 bytes) sub_84D510
// void sub_84D510(grapher::ActorBase *a1);
// [0x84d550] (64 bytes) sub_84D550
// void sub_84D550(grapher::ActorBase *a1);
// [0x84d590] (64 bytes) sub_84D590
// void sub_84D590(grapher::ActorBase *a1);
// [0x84d5d0] (64 bytes) sub_84D5D0
// void sub_84D5D0(grapher::ActorBase *a1);
// [0x84d610] (64 bytes) sub_84D610
// void sub_84D610(grapher::ActorBase *a1);
// [0x84d650] (64 bytes) sub_84D650
// void sub_84D650(grapher::ActorBase *a1);
// [0x84d690] (64 bytes) sub_84D690
// void sub_84D690(grapher::ActorBase *a1);
// [0x84d6d0] (64 bytes) sub_84D6D0
// void sub_84D6D0(grapher::ActorBase *a1);
// [0x84d710] (64 bytes) sub_84D710
// void sub_84D710(grapher::ActorBase *a1);
// [0x84d750] (64 bytes) sub_84D750
// void sub_84D750(grapher::ActorBase *a1);
// [0x84d790] (64 bytes) sub_84D790
// void sub_84D790(grapher::ActorBase *a1);
// [0x84d7d0] (64 bytes) sub_84D7D0
// void sub_84D7D0(grapher::ActorBase *a1);
// [0x84d810] (64 bytes) sub_84D810
// void sub_84D810(grapher::ActorBase *a1);
// [0x84d850] (64 bytes) sub_84D850
// void sub_84D850(grapher::ActorBase *a1);
// [0x84d890] (64 bytes) sub_84D890
// void sub_84D890(grapher::ActorBase *a1);
// [0x84d8d0] (42 bytes) sub_84D8D0
// void ActorBehavior::~ActorBehavior(grapher::ActorBase *a1);
// [0x84d900] (152 bytes) sub_84D900
// int sub_84D900(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x84d9a0] (152 bytes) sub_84D9A0
// int sub_84D9A0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x84da40] (308 bytes) sub_84DA40
// int sub_84DA40(int a1, uint32_t *a2, int *a3);
// [0x84db80] (416 bytes) sub_84DB80
// int sub_84DB80(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x84dd20] (15 bytes) sub_84DD20
// int sub_84DD20(char *a1);
// [0x84dd30] (15 bytes) sub_84DD30
// int sub_84DD30(char *a1);
// [0x84dd40] (7 bytes) sub_84DD40
// int sub_84DD40(int a1);
// [0x84dd50] (501 bytes) sub_84DD50
// void sub_84DD50(uint32_t *a1);
// [0x84df50] (15 bytes) sub_84DF50
// int sub_84DF50(uint32_t *a1);
// [0x84df60] (15 bytes) sub_84DF60
// int sub_84DF60(uint32_t *a1);
// [0x84df70] (7 bytes) sub_84DF70
// int sub_84DF70(int a1);
// [0x84df80] (493 bytes) sub_84DF80
// int (**sub_84DF80(uint32_t *a1))(int);
// [0x84e170] (771 bytes) sub_84E170
// int sub_84E170(grapher::ActorBase *a1);
// [0x84e480] (1936 bytes) sub_84E480
// int sub_84E480(grapher::ActorBase *a1);
// [0x84ec10] (1476 bytes) sub_84EC10
// int sub_84EC10(grapher::ActorBase *a1);
// [0x84f1e0] (1534 bytes) sub_84F1E0
// int sub_84F1E0(grapher::ActorBase *a1);
// [0x84f7e0] (648 bytes) sub_84F7E0
// int sub_84F7E0(grapher::ActorBase *a1);
// [0x84fa70] (1224 bytes) sub_84FA70
// int sub_84FA70(grapher::ActorBase *a1);
// [0x84ff40] (919 bytes) sub_84FF40
// int sub_84FF40(grapher::ActorBase *a1);
// [0x8502e0] (1224 bytes) sub_8502E0
// int sub_8502E0(grapher::ActorBase *a1);
// [0x8507b0] (1224 bytes) sub_8507B0
// int sub_8507B0(grapher::ActorBase *a1);
// [0x850c80] (1067 bytes) sub_850C80
// int sub_850C80(grapher::ActorBase *a1);
// [0x8510b0] (921 bytes) sub_8510B0
// int sub_8510B0(grapher::ActorBase *a1);
// [0x851450] (771 bytes) sub_851450
// int sub_851450(grapher::ActorBase *a1);
// [0x851760] (845 bytes) sub_851760
// int sub_851760(grapher::ActorBase *a1);
// [0x851ab0] (845 bytes) sub_851AB0
// int sub_851AB0(grapher::ActorBase *a1);
// [0x851e00] (771 bytes) sub_851E00
// int sub_851E00(grapher::ActorBase *a1);
// [0x852110] (1676 bytes) sub_852110
// int sub_852110(grapher::ActorBase *a1);
// [0x8527a0] (771 bytes) sub_8527A0
// int sub_8527A0(grapher::ActorBase *a1);
// [0x852ab0] (1021 bytes) sub_852AB0
// int sub_852AB0(grapher::ActorBase *a1);
// [0x852eb0] (1091 bytes) sub_852EB0
// int sub_852EB0(grapher::ActorBase *a1);
// [0x853300] (1224 bytes) sub_853300
// int sub_853300(grapher::ActorBase *a1);
// [0x8537d0] (845 bytes) sub_8537D0
// int sub_8537D0(grapher::ActorBase *a1);
// [0x853b20] (1148 bytes) sub_853B20
// int sub_853B20(grapher::ActorBase *a1);
// [0x853fa0] (548 bytes) sub_853FA0
// bool sub_853FA0(int a1, int a2);
// [0x8541d0] (746 bytes) sub_8541D0
// int *sub_8541D0(int *result, uint32_t *a2, int a3, int *a4);
// [0x8544c0] (28 bytes) sub_8544C0
// int sub_8544C0(int a1);
// [0x8544e8] (1 bytes) nullsub_298
// void nullsub_298();
// [0x8544f8] (1 bytes) nullsub_299
// void nullsub_299();
// [0x854500] (453 bytes) sub_854500
// int (**sub_854500(int *a1, int *a2))(int);
// [0x8546d0] (616 bytes) sub_8546D0
// int sub_8546D0(glitch::video::ITexture *a1, int a2);
// [0x854940] (295 bytes) sub_854940
// int sub_854940(int *a1);
// [0x854a70] (12 bytes) sub_854A70
// int sub_854A70();
// [0x854a80] (22 bytes) sub_854A80
// const char *sub_854A80();
// [0x854aa0] (22 bytes) sub_854AA0
// const char *sub_854AA0();
// [0x854ac0] (22 bytes) sub_854AC0
// const char *sub_854AC0();
// [0x854ae0] (64 bytes) sub_854AE0
// int (**ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(grapher::ActorBase *a1, unsigned int a2))(grapher::ActorBase *);
// [0x854b20] (71 bytes) sub_854B20
// int (**ActorBehavior::ActorBehavior(grapher::ActorBase *a1, unsigned int a2))(grapher::ActorBase *);
// [0x854b70] (71 bytes) sub_854B70
// int (**ActorBehaviorChild::ActorBehaviorChild(grapher::ActorBase *a1, unsigned int a2))(grapher::ActorBase *);
// [0x854bc0] (64 bytes) sub_854BC0
// int (**ActorGameCameraPreset::ActorGameCameraPreset(grapher::ActorBase *a1, unsigned int a2))(grapher::ActorBase *);
// [0x854c00] (64 bytes) sub_854C00
// int (**ActorGameCharacterLaunchCharacter::ActorGameCharacterLaunchCharacter(grapher::ActorBase *a1, unsigned int a2))(grapher::ActorBase *);
// [0x854c40] (64 bytes) sub_854C40
// int (**ActorGameCharacterParachute::ActorGameCharacterParachute(grapher::ActorBase *a1, unsigned int a2))(grapher::ActorBase *);
// [0x854c80] (64 bytes) sub_854C80
// int (**ActorGameCharacterPickUpVehicle::ActorGameCharacterPickUpVehicle(grapher::ActorBase *a1, unsigned int a2))(grapher::ActorBase *);
// [0x854cc0] (68 bytes) sub_854CC0
// int (**ActorGameCharacterSwitchJetpackMode::ActorGameCharacterSwitchJetpackMode(grapher::ActorBase *a1, unsigned int a2))(grapher::ActorBase *);
// [0x854d10] (64 bytes) sub_854D10
// int (**ActorSoundAction::ActorSoundAction(grapher::ActorBase *a1, unsigned int a2))(grapher::ActorBase *);
// [0x854d50] (64 bytes) sub_854D50
// int (**ActorGameCharacterAim::ActorGameCharacterAim(grapher::ActorBase *a1, unsigned int a2))(grapher::ActorBase *);
// [0x854d90] (64 bytes) sub_854D90
// int (**ActorGameCharacterAssignObject::ActorGameCharacterAssignObject(grapher::ActorBase *a1, unsigned int a2))(grapher::ActorBase *);
// [0x854dd0] (64 bytes) sub_854DD0
// int (**ActorGameCharacterAttack::ActorGameCharacterAttack(grapher::ActorBase *a1, unsigned int a2))(grapher::ActorBase *);
// [0x854e10] (64 bytes) sub_854E10
// int (**ActorGameCharacterBurst::ActorGameCharacterBurst(grapher::ActorBase *a1, unsigned int a2))(grapher::ActorBase *);
// [0x854e50] (64 bytes) sub_854E50
// int (**ActorGameCharacterCheckCollision::ActorGameCharacterCheckCollision(grapher::ActorBase *a1, unsigned int a2))(grapher::ActorBase *);
// [0x854e90] (64 bytes) sub_854E90
// int (**ActorGameCharacterClimb::ActorGameCharacterClimb(grapher::ActorBase *a1, unsigned int a2))(grapher::ActorBase *);
// [0x854ed0] (64 bytes) sub_854ED0
// int (**ActorGameCharacterCorrectCrash::ActorGameCharacterCorrectCrash(grapher::ActorBase *a1, unsigned int a2))(grapher::ActorBase *);
// [0x854f10] (64 bytes) sub_854F10
// int (**ActorGameCharacterCover::ActorGameCharacterCover(grapher::ActorBase *a1, unsigned int a2))(grapher::ActorBase *);
// [0x854f50] (64 bytes) sub_854F50
// int (**ActorGameCharacterDrive::ActorGameCharacterDrive(grapher::ActorBase *a1, unsigned int a2))(grapher::ActorBase *);
// [0x854f90] (64 bytes) sub_854F90
// int (**ActorGameCharacterDrivingManeuver::ActorGameCharacterDrivingManeuver(grapher::ActorBase *a1, unsigned int a2))(grapher::ActorBase *);
// [0x854fd0] (64 bytes) sub_854FD0
// int (**ActorGameCharacterEjectVehicle::ActorGameCharacterEjectVehicle(grapher::ActorBase *a1, unsigned int a2))(grapher::ActorBase *);
// [0x855010] (64 bytes) sub_855010
// int (**ActorGameCharacterEnterVehicle::ActorGameCharacterEnterVehicle(grapher::ActorBase *a1, unsigned int a2))(grapher::ActorBase *);
// [0x855050] (64 bytes) sub_855050
// int (**ActorGameCharacterEquipWeapon::ActorGameCharacterEquipWeapon(grapher::ActorBase *a1, unsigned int a2))(grapher::ActorBase *);
// [0x855090] (64 bytes) sub_855090
// int (**ActorGameCharacterExitVehicle::ActorGameCharacterExitVehicle(grapher::ActorBase *a1, unsigned int a2))(grapher::ActorBase *);
// [0x8550d0] (1011 bytes) sub_8550D0
// void sub_8550D0(uint32_t *a1, int a2, int a3, int a4, int a5, char *a6, int a7, int a8);
// [0x8558b0] (90 bytes) sub_8558B0
// int ActorAnimation::ActorAnimation(grapher::ActorBase *a1, unsigned int a2);
// [0x855910] (511 bytes) sub_855910
// int ActorTimer::ActorTimer(grapher::ActorBase *a1, unsigned int a2);
// [0x855b10] (1043 bytes) sub_855B10
// int sub_855B10(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x855f30] (367 bytes) sub_855F30
// int sub_855F30(grapher::ActorBase *a1);
// [0x8560a0] (1755 bytes) sub_8560A0
// void sub_8560A0(grapher::ActorBase *a1, int a2, int a3, int a4, int a5);
// [0x856780] (1897 bytes) sub_856780
// void sub_856780(grapher::ActorBase *a1, int a2, int a3, int a4, int a5);
// [0x856ef0] (234 bytes) sub_856EF0
// void sub_856EF0(grapher::ActorBase *a1, int a2, int a3);
// [0x856fe0] (482 bytes) sub_856FE0
// void sub_856FE0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x8571d0] (139 bytes) sub_8571D0
// void **sub_8571D0(grapher::ActorBase *a1, int a2, void *a3, int a4);
// [0x857260] (111 bytes) sub_857260
// int sub_857260(grapher::ActorBase *a1, int a2, int a3);
// [0x8572d0] (198 bytes) sub_8572D0
// int sub_8572D0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x8573a0] (280 bytes) sub_8573A0
// int sub_8573A0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x8574c0] (280 bytes) sub_8574C0
// int sub_8574C0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x8575e0] (263 bytes) sub_8575E0
// int sub_8575E0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x8576f0] (369 bytes) sub_8576F0
// int sub_8576F0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x857870] (270 bytes) sub_857870
// int sub_857870(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x857980] (330 bytes) sub_857980
// int sub_857980(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x857ad0] (198 bytes) sub_857AD0
// int sub_857AD0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x857ba0] (198 bytes) sub_857BA0
// int sub_857BA0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x857c70] (326 bytes) sub_857C70
// void sub_857C70(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x857dc0] (248 bytes) sub_857DC0
// int sub_857DC0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x857ec0] (396 bytes) sub_857EC0
// int sub_857EC0(grapher::ActorBase *a1, int a2, int a3);
// [0x858050] (361 bytes) sub_858050
// int sub_858050(grapher::ActorBase *a1, int a2, int a3);
// [0x8581c0] (474 bytes) sub_8581C0
// int sub_8581C0(grapher::ActorBase *a1, int a2, int a3);
// [0x8583a0] (367 bytes) sub_8583A0
// int sub_8583A0(grapher::ActorBase *a1);
// [0x858510] (581 bytes) sub_858510
// int sub_858510(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x858760] (1055 bytes) sub_858760
// int *sub_858760(grapher::ActorBase *a1, int *a2, grapher::ActorContext *a3);
// [0x858b80] (1331 bytes) sub_858B80
// uint32_t *sub_858B80(grapher::ActorBase *a1, uint32_t *a2, grapher::ActorContext *a3);
// [0x8590c0] (589 bytes) sub_8590C0
// int sub_8590C0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x859310] (2790 bytes) sub_859310
// int sub_859310(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x859e00] (1496 bytes) sub_859E00
// int sub_859E00(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x85a3e0] (24 bytes) sub_85A3E0
// uint32_t *sub_85A3E0(uint32_t *a1);
// [0x85a400] (9 bytes) sub_85A400
// void sub_85A400();
// [0x85a410] (28 bytes) sub_85A410
// int sub_85A410(int a1);
// [0x85a430] (24 bytes) sub_85A430
// uint32_t *sub_85A430(uint32_t *a1);
// [0x85a450] (42 bytes) sub_85A450
// void sub_85A450(uint32_t *a1);
// [0x85a480] (42 bytes) sub_85A480
// void sub_85A480(uint32_t *a1);
// [0x85a4b0] (46 bytes) sub_85A4B0
// void sub_85A4B0(uint8_t *a1);
// [0x85a4e0] (61 bytes) sub_85A4E0
// bool sub_85A4E0(uint32_t *a1, int a2, int a3);
// [0x85a520] (59 bytes) sub_85A520
// unsigned int sub_85A520(uint32_t *a1, int a2, int a3);
// [0x85a560] (15 bytes) sub_85A560
// int sub_85A560(uint32_t *a1);
// [0x85a570] (15 bytes) sub_85A570
// int sub_85A570(uint32_t *a1);
// [0x85a580] (7 bytes) sub_85A580
// int sub_85A580(int a1);
// [0x85a590] (154 bytes) sub_85A590
// int (**sub_85A590(uint32_t *a1))(int);
// [0x85a630] (64 bytes) sub_85A630
// bool sub_85A630(uint32_t *a1, int a2, int a3);
// [0x85a670] (55 bytes) sub_85A670
// int sub_85A670(int a1);
// [0x85a6b0] (15 bytes) sub_85A6B0
// int sub_85A6B0(char *a1);
// [0x85a6c0] (15 bytes) sub_85A6C0
// int sub_85A6C0(char *a1);
// [0x85a6d0] (7 bytes) sub_85A6D0
// int sub_85A6D0(int a1);
// [0x85a6e0] (162 bytes) sub_85A6E0
// void sub_85A6E0(uint32_t *a1);
// [0x85a790] (159 bytes) sub_85A790
// int sub_85A790(int a1);
// [0x85a830] (108 bytes) sub_85A830
// int sub_85A830(int a1, int a2);
// [0x85a8a0] (15 bytes) sub_85A8A0
// int sub_85A8A0(uint32_t *a1);
// [0x85a8b0] (15 bytes) sub_85A8B0
// int sub_85A8B0(uint32_t *a1);
// [0x85a8c0] (7 bytes) sub_85A8C0
// int sub_85A8C0(int a1);
// [0x85a8d0] (301 bytes) sub_85A8D0
// int (**sub_85A8D0(uint32_t *a1))(int);
// [0x85aa00] (405 bytes) sub_85AA00
// int sub_85AA00(uint32_t *a1, int a2);
// [0x85aba0] (15 bytes) sub_85ABA0
// int sub_85ABA0(char *a1);
// [0x85abb0] (15 bytes) sub_85ABB0
// int sub_85ABB0(char *a1);
// [0x85abc0] (7 bytes) sub_85ABC0
// int sub_85ABC0(int a1);
// [0x85abd0] (309 bytes) sub_85ABD0
// void sub_85ABD0(uint32_t *a1);
// [0x85ad10] (15 bytes) sub_85AD10
// int sub_85AD10(char *a1);
// [0x85ad20] (15 bytes) sub_85AD20
// int sub_85AD20(char *a1);
// [0x85ad30] (7 bytes) sub_85AD30
// int sub_85AD30(int a1);
// [0x85ad40] (397 bytes) sub_85AD40
// void sub_85AD40(uint32_t *a1);
// [0x85aed0] (15 bytes) sub_85AED0
// int sub_85AED0(uint32_t *a1);
// [0x85aee0] (15 bytes) sub_85AEE0
// int sub_85AEE0(uint32_t *a1);
// [0x85aef0] (7 bytes) sub_85AEF0
// int sub_85AEF0(int a1);
// [0x85af00] (389 bytes) sub_85AF00
// int (**sub_85AF00(uint32_t *a1))(int);
// [0x85b090] (64 bytes) std::list<LevelObject *,std::allocator<LevelObject *>>::push_back(LevelObject * const&)
// int std::list<LevelObject *>::push_back(int a1, uint32_t *a2);
