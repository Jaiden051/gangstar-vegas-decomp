#pragma once
// ============================================================================
// TU40_GrapherActorsBatch4_VehicleZone.h
// Complete Translation Unit [40/41]
// Binary Range in lib/x86/libGangstar4.so: 0xc3f080 .. 0xc5aa50 (110 KB)
// Total Decompiled Functions in TU: 264 (100% coverage)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// Function Table in Translation Unit:
// [0xc3f080] (243 bytes) sub_C3F080
// int sub_C3F080();
// [0xc3f180] (7 bytes) sub_C3F180
// int sub_C3F180(int a1, int a2);
// [0xc3f190] (49 bytes) sub_C3F190
// void sub_C3F190(int a1, uint8_t *a2);
// [0xc3f1d0] (42 bytes) sub_C3F1D0
// void ActorGameItemShop::~ActorGameItemShop(grapher::ActorBase *a1);
// [0xc3f200] (42 bytes) sub_C3F200
// void ActorGameTimer::~ActorGameTimer(grapher::ActorBase *a1);
// [0xc3f230] (42 bytes) sub_C3F230
// void ActorGameHUDTutorial::~ActorGameHUDTutorial(grapher::ActorBase *a1);
// [0xc3f260] (42 bytes) sub_C3F260
// void ActorGameHUDSetVarText::~ActorGameHUDSetVarText(grapher::ActorBase *a1);
// [0xc3f290] (42 bytes) sub_C3F290
// void ActorGameHudSetWarning::~ActorGameHudSetWarning(grapher::ActorBase *a1);
// [0xc3f2c0] (42 bytes) sub_C3F2C0
// void ActorGameHUDSetText::~ActorGameHUDSetText(grapher::ActorBase *a1);
// [0xc3f2f0] (48 bytes) sub_C3F2F0
// void ActorGameHUDSetInteractionButton::~ActorGameHUDSetInteractionButton(grapher::ActorBase *a1);
// [0xc3f320] (42 bytes) sub_C3F320
// void ActorGameHUDHighlight::~ActorGameHUDHighlight(grapher::ActorBase *a1);
// [0xc3f350] (42 bytes) sub_C3F350
// void ActorGameHUDGenericText::~ActorGameHUDGenericText(grapher::ActorBase *a1);
// [0xc3f380] (42 bytes) sub_C3F380
// void ActorGameHUDControls::~ActorGameHUDControls(grapher::ActorBase *a1);
// [0xc3f3b0] (42 bytes) sub_C3F3B0
// void ActorGameHUDRaceLockControls::~ActorGameHUDRaceLockControls(grapher::ActorBase *a1);
// [0xc3f3e0] (42 bytes) sub_C3F3E0
// void ActorGameHUDFollowerStatus::~ActorGameHUDFollowerStatus(grapher::ActorBase *a1);
// [0xc3f410] (42 bytes) sub_C3F410
// void ActorGameHUD::~ActorGameHUD(grapher::ActorBase *a1);
// [0xc3f440] (42 bytes) sub_C3F440
// void ActorGameGangBattlesRetrieveMember::~ActorGameGangBattlesRetrieveMember(grapher::ActorBase *a1);
// [0xc3f470] (42 bytes) sub_C3F470
// void ActorGameGangBattlesResetMemberList::~ActorGameGangBattlesResetMemberList(grapher::ActorBase *a1);
// [0xc3f4a0] (42 bytes) sub_C3F4A0
// void ActorGameGangBattlesApplyProfile::~ActorGameGangBattlesApplyProfile(grapher::ActorBase *a1);
// [0xc3f4d0] (42 bytes) sub_C3F4D0
// void ActorGameScriptLODFilter::~ActorGameScriptLODFilter(grapher::ActorBase *a1);
// [0xc3f500] (42 bytes) sub_C3F500
// void ActorGameEventsHudOnTouch::~ActorGameEventsHudOnTouch(grapher::ActorBase *a1);
// [0xc3f530] (42 bytes) sub_C3F530
// void ActorGameConditionWantedLevel::~ActorGameConditionWantedLevel(grapher::ActorBase *a1);
// [0xc3f560] (42 bytes) sub_C3F560
// void ActorGameConditionLanded::~ActorGameConditionLanded(grapher::ActorBase *a1);
// [0xc3f590] (42 bytes) sub_C3F590
// void ActorGameConditionIsIdle::~ActorGameConditionIsIdle(grapher::ActorBase *a1);
// [0xc3f5c0] (42 bytes) sub_C3F5C0
// void ActorGameConditionIsAttacked::~ActorGameConditionIsAttacked(grapher::ActorBase *a1);
// [0xc3f5f0] (42 bytes) sub_C3F5F0
// void ActorGameConditionHasVehicle::~ActorGameConditionHasVehicle(grapher::ActorBase *a1);
// [0xc3f620] (67 bytes) sub_C3F620
// void ActorGameHudSetObjective::~ActorGameHudSetObjective(grapher::ActorBase *a1);
// [0xc3f670] (54 bytes) sub_C3F670
// int sub_C3F670(int a1, int a2);
// [0xc3f6b0] (54 bytes) sub_C3F6B0
// int *sub_C3F6B0(int a1, int a2);
// [0xc3f6f0] (54 bytes) sub_C3F6F0
// int sub_C3F6F0(int a1, int a2);
// [0xc3f730] (54 bytes) sub_C3F730
// int sub_C3F730(int a1, int a2);
// [0xc3f770] (54 bytes) sub_C3F770
// int sub_C3F770(int a1, int a2);
// [0xc3f7b0] (54 bytes) sub_C3F7B0
// int sub_C3F7B0(int a1, int a2);
// [0xc3f7f0] (207 bytes) sub_C3F7F0
// int sub_C3F7F0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc3f8c0] (187 bytes) sub_C3F8C0
// int *sub_C3F8C0(int *a1, int a2, int a3, int a4, int *a5);
// [0xc3f980] (187 bytes) sub_C3F980
// int *sub_C3F980(int *a1, int a2, int a3, int a4, int *a5);
// [0xc3fa40] (219 bytes) sub_C3FA40
// int sub_C3FA40(int a1, int a2, int *a3);
// [0xc3fb20] (417 bytes) sub_C3FB20
// int *sub_C3FB20(int *a1, uint32_t *a2, int a3, int *a4);
// [0xc3fcd0] (64 bytes) sub_C3FCD0
// void sub_C3FCD0(grapher::ActorBase *a1);
// [0xc3fd10] (64 bytes) sub_C3FD10
// void sub_C3FD10(grapher::ActorBase *a1);
// [0xc3fd50] (64 bytes) sub_C3FD50
// void sub_C3FD50(grapher::ActorBase *a1);
// [0xc3fd90] (64 bytes) sub_C3FD90
// void sub_C3FD90(grapher::ActorBase *a1);
// [0xc3fdd0] (64 bytes) sub_C3FDD0
// void sub_C3FDD0(grapher::ActorBase *a1);
// [0xc3fe10] (64 bytes) sub_C3FE10
// void sub_C3FE10(grapher::ActorBase *a1);
// [0xc3fe50] (64 bytes) sub_C3FE50
// void sub_C3FE50(grapher::ActorBase *a1);
// [0xc3fe90] (64 bytes) sub_C3FE90
// void sub_C3FE90(grapher::ActorBase *a1);
// [0xc3fed0] (64 bytes) sub_C3FED0
// void sub_C3FED0(grapher::ActorBase *a1);
// [0xc3ff10] (64 bytes) sub_C3FF10
// void sub_C3FF10(grapher::ActorBase *a1);
// [0xc3ff50] (64 bytes) sub_C3FF50
// void sub_C3FF50(grapher::ActorBase *a1);
// [0xc3ff90] (64 bytes) sub_C3FF90
// void sub_C3FF90(grapher::ActorBase *a1);
// [0xc3ffd0] (64 bytes) sub_C3FFD0
// void sub_C3FFD0(grapher::ActorBase *a1);
// [0xc40010] (64 bytes) sub_C40010
// void sub_C40010(grapher::ActorBase *a1);
// [0xc40050] (64 bytes) sub_C40050
// void sub_C40050(grapher::ActorBase *a1);
// [0xc40090] (64 bytes) sub_C40090
// void sub_C40090(grapher::ActorBase *a1);
// [0xc400d0] (64 bytes) sub_C400D0
// void sub_C400D0(grapher::ActorBase *a1);
// [0xc40110] (70 bytes) sub_C40110
// void sub_C40110(grapher::ActorBase *a1);
// [0xc40160] (64 bytes) sub_C40160
// void sub_C40160(grapher::ActorBase *a1);
// [0xc401a0] (64 bytes) sub_C401A0
// void sub_C401A0(grapher::ActorBase *a1);
// [0xc401e0] (64 bytes) sub_C401E0
// void sub_C401E0(grapher::ActorBase *a1);
// [0xc40220] (64 bytes) sub_C40220
// void sub_C40220(grapher::ActorBase *a1);
// [0xc40260] (64 bytes) sub_C40260
// void sub_C40260(grapher::ActorBase *a1);
// [0xc402a0] (75 bytes) sub_C402A0
// void sub_C402A0(grapher::ActorBase *a1);
// [0xc402f0] (82 bytes) sub_C402F0
// int *sub_C402F0(int *result);
// [0xc40350] (420 bytes) sub_C40350
// void sub_C40350(int a1, uint32_t *a2);
// [0xc40500] (314 bytes) sub_C40500
// int sub_C40500(int a1, char *a2, int a3, int a4, int a5, gameswf::ASValue *a6, int *a7);
// [0xc40640] (723 bytes) sub_C40640
// int sub_C40640(int *a1, int a2, int a3);
// [0xc40920] (185 bytes) sub_C40920
// int sub_C40920(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc409e0] (185 bytes) sub_C409E0
// int sub_C409E0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc40aa0] (301 bytes) sub_C40AA0
// void sub_C40AA0(int a1, void *a2);
// [0xc40bd0] (7 bytes) sub_C40BD0
// int sub_C40BD0(int a1);
// [0xc40be0] (245 bytes) sub_C40BE0
// void sub_C40BE0(grapher::ActorBase *a1);
// [0xc40ce0] (7 bytes) sub_C40CE0
// int sub_C40CE0(int a1);
// [0xc40cf0] (233 bytes) sub_C40CF0
// void ActorGameEventOnPickUp::~ActorGameEventOnPickUp(grapher::ActorBase *a1);
// [0xc40de0] (7 bytes) sub_C40DE0
// int sub_C40DE0(int a1);
// [0xc40df0] (233 bytes) sub_C40DF0
// void ActorGameEventOnKill::~ActorGameEventOnKill(grapher::ActorBase *a1);
// [0xc40ee0] (7 bytes) sub_C40EE0
// int sub_C40EE0(int a1);
// [0xc40ef0] (233 bytes) sub_C40EF0
// void ActorGameEventLockLootDrop::~ActorGameEventLockLootDrop(grapher::ActorBase *a1);
// [0xc40fe0] (297 bytes) sub_C40FE0
// int sub_C40FE0(int a1, int a2);
// [0xc41110] (297 bytes) sub_C41110
// int sub_C41110(int a1, int a2);
// [0xc41240] (7 bytes) sub_C41240
// int sub_C41240(int a1);
// [0xc41250] (245 bytes) sub_C41250
// void sub_C41250(grapher::ActorBase *a1);
// [0xc41350] (7 bytes) sub_C41350
// int sub_C41350(int a1);
// [0xc41360] (245 bytes) sub_C41360
// void sub_C41360(grapher::ActorBase *a1);
// [0xc41460] (289 bytes) sub_C41460
// int sub_C41460(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc41590] (289 bytes) sub_C41590
// int sub_C41590(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc416c0] (134 bytes) sub_C416C0
// int sub_C416C0(uint32_t *a1);
// [0xc41750] (195 bytes) sub_C41750
// int sub_C41750(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc41820] (203 bytes) sub_C41820
// int sub_C41820(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc418f0] (203 bytes) sub_C418F0
// int sub_C418F0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc419c0] (504 bytes) sub_C419C0
// char sub_C419C0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc41bc0] (308 bytes) sub_C41BC0
// int sub_C41BC0(int a1, uint32_t *a2, int *a3);
// [0xc41d00] (384 bytes) sub_C41D00
// int sub_C41D00(grapher::ActorBase *a1);
// [0xc41e80] (384 bytes) sub_C41E80
// int sub_C41E80(grapher::ActorBase *a1);
// [0xc42000] (384 bytes) sub_C42000
// int sub_C42000(grapher::ActorBase *a1);
// [0xc42180] (551 bytes) sub_C42180
// int sub_C42180(grapher::ActorBase *a1);
// [0xc423b0] (384 bytes) sub_C423B0
// int sub_C423B0(grapher::ActorBase *a1);
// [0xc42530] (384 bytes) sub_C42530
// int sub_C42530(grapher::ActorBase *a1);
// [0xc426b0] (1087 bytes) sub_C426B0
// int sub_C426B0(grapher::ActorBase *a1);
// [0xc42af0] (1939 bytes) sub_C42AF0
// int sub_C42AF0(grapher::ActorBase *a1);
// [0xc43290] (1866 bytes) sub_C43290
// int sub_C43290(grapher::ActorBase *a1);
// [0xc439e0] (1576 bytes) sub_C439E0
// int sub_C439E0(grapher::ActorBase *a1);
// [0xc44010] (803 bytes) sub_C44010
// int sub_C44010(grapher::ActorBase *a1);
// [0xc44340] (729 bytes) sub_C44340
// int sub_C44340(grapher::ActorBase *a1);
// [0xc44620] (1306 bytes) sub_C44620
// int sub_C44620(grapher::ActorBase *a1);
// [0xc44b40] (901 bytes) sub_C44B40
// int sub_C44B40(grapher::ActorBase *a1);
// [0xc44ed0] (2119 bytes) sub_C44ED0
// int sub_C44ED0(grapher::ActorBase *a1);
// [0xc45720] (1091 bytes) sub_C45720
// int sub_C45720(grapher::ActorBase *a1);
// [0xc45b70] (1614 bytes) sub_C45B70
// int sub_C45B70(grapher::ActorBase *a1);
// [0xc461c0] (843 bytes) sub_C461C0
// int sub_C461C0(grapher::ActorBase *a1);
// [0xc46510] (1410 bytes) sub_C46510
// int sub_C46510(grapher::ActorBase *a1);
// [0xc46aa0] (655 bytes) sub_C46AA0
// int sub_C46AA0(grapher::ActorBase *a1);
// [0xc46d30] (903 bytes) sub_C46D30
// int sub_C46D30(grapher::ActorBase *a1);
// [0xc470c0] (2007 bytes) sub_C470C0
// int sub_C470C0(grapher::ActorBase *a1);
// [0xc478a0] (1152 bytes) sub_C478A0
// int sub_C478A0(grapher::ActorBase *a1);
// [0xc47d20] (4579 bytes) sub_C47D20
// int sub_C47D20(grapher::ActorBase *a1);
// [0xc48f10] (3262 bytes) sub_C48F10
// int sub_C48F10(grapher::ActorBase *a1);
// [0xc49bd0] (1050 bytes) sub_C49BD0
// int sub_C49BD0(grapher::ActorBase *a1);
// [0xc49ff0] (2773 bytes) sub_C49FF0
// int sub_C49FF0(grapher::ActorBase *a1);
// [0xc4aad0] (1814 bytes) sub_C4AAD0
// int sub_C4AAD0(grapher::ActorBase *a1);
// [0xc4b1f0] (2316 bytes) sub_C4B1F0
// int sub_C4B1F0(grapher::ActorBase *a1);
// [0xc4bb00] (1500 bytes) sub_C4BB00
// int sub_C4BB00(grapher::ActorBase *a1);
// [0xc4c0e0] (1125 bytes) sub_C4C0E0
// int sub_C4C0E0(grapher::ActorBase *a1);
// [0xc4c550] (1815 bytes) sub_C4C550
// int sub_C4C550(grapher::ActorBase *a1);
// [0xc4cc70] (1956 bytes) sub_C4CC70
// int sub_C4CC70(grapher::ActorBase *a1);
// [0xc4d420] (166 bytes) sub_C4D420
// int *sub_C4D420(grapher::ActorBase *a1, grapher::ActorContext *a2);
// [0xc4d4d0] (185 bytes) sub_C4D4D0
// int sub_C4D4D0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc4d590] (831 bytes) sub_C4D590
// int sub_C4D590(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc4d8d0] (318 bytes) sub_C4D8D0
// int sub_C4D8D0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc4da10] (392 bytes) sub_C4DA10
// void sub_C4DA10(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc4dba0] (406 bytes) sub_C4DBA0
// void sub_C4DBA0(grapher::ActorBase *a1, int a2, int a3, grapher::ActorContext *a4);
// [0xc4dd40] (1465 bytes) sub_C4DD40
// void sub_C4DD40(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc4e300] (419 bytes) sub_C4E300
// int sub_C4E300(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc4e4b0] (665 bytes) sub_C4E4B0
// int *sub_C4E4B0(int *result, uint32_t *a2, int a3, int *a4);
// [0xc4e7b0] (84 bytes) sub_C4E7B0
// int sub_C4E7B0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc4e810] (559 bytes) sub_C4E810
// void sub_C4E810(grapher::ActorBase *a1, grapher::ActorContext *a2);
// [0xc4ea40] (86 bytes) sub_C4EA40
// int sub_C4EA40(char *a1, int a2, grapher::ActorContext *a3);
// [0xc4eaa0] (78 bytes) sub_C4EAA0
// int sub_C4EAA0(grapher::ActorBase *a1, grapher::ActorContext *a2);
// [0xc4eaf0] (94 bytes) sub_C4EAF0
// int sub_C4EAF0(grapher::ActorBase *a1, grapher::ActorContext *a2, int a3);
// [0xc4eb90] (87 bytes) sub_C4EB90
// int sub_C4EB90(int a1);
// [0xc4ebf0] (94 bytes) sub_C4EBF0
// uint32_t *ActorGameConditionIsAlive::ActorGameConditionIsAlive(grapher::ActorBase *a1, unsigned int a2);
// [0xc4ec50] (490 bytes) sub_C4EC50
// int *sub_C4EC50(grapher::ActorBase *a1, unsigned int a2, grapher::ActorContext *a3);
// [0xc4ee40] (190 bytes) sub_C4EE40
// int sub_C4EE40(grapher::ActorBase *a1, unsigned int a2, grapher::ActorContext *a3);
// [0xc4ef00] (109 bytes) sub_C4EF00
// int sub_C4EF00(int a1, unsigned int a2);
// [0xc4ef70] (126 bytes) sub_C4EF70
// int *sub_C4EF70(int a1, unsigned int a2, char a3);
// [0xc4eff0] (68 bytes) sub_C4EFF0
// int (**ActorGameConditionIsAttacked::ActorGameConditionIsAttacked(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc4f040] (64 bytes) sub_C4F040
// int (**ActorGameConditionIsIdle::ActorGameConditionIsIdle(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc4f080] (64 bytes) sub_C4F080
// int (**ActorGameConditionLanded::ActorGameConditionLanded(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc4f0c0] (82 bytes) sub_C4F0C0
// int (**ActorGameConditionWantedLevel::ActorGameConditionWantedLevel(int a1, unsigned int a2))(int);
// [0xc4f120] (351 bytes) sub_C4F120
// int sub_C4F120(grapher::ActorBase *a1, grapher::ActorContext *a2);
// [0xc4f280] (351 bytes) sub_C4F280
// int sub_C4F280(grapher::ActorBase *a1, grapher::ActorContext *a2);
// [0xc4f3e0] (94 bytes) sub_C4F3E0
// int sub_C4F3E0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc4f480] (89 bytes) sub_C4F480
// uint32_t *ActorGameConditionWithin::ActorGameConditionWithin(grapher::ActorBase *a1, unsigned int a2);
// [0xc4f4e0] (91 bytes) sub_C4F4E0
// int sub_C4F4E0(grapher::ActorBase *a1, grapher::ActorContext *a2, int a3);
// [0xc4f580] (79 bytes) sub_C4F580
// uint32_t *ActorGameEventLockLootDrop::ActorGameEventLockLootDrop(grapher::ActorBase *a1, unsigned int a2);
// [0xc4f5d0] (64 bytes) sub_C4F5D0
// int (**ActorGameScriptLODFilter::ActorGameScriptLODFilter(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc4f610] (64 bytes) sub_C4F610
// int (**ActorGameGangBattlesApplyProfile::ActorGameGangBattlesApplyProfile(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc4f650] (553 bytes) sub_C4F650
// int sub_C4F650(int a1, const void **a2, int a3);
// [0xc4f880] (64 bytes) sub_C4F880
// int (**ActorGameGangBattlesResetMemberList::ActorGameGangBattlesResetMemberList(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc4f8c0] (64 bytes) sub_C4F8C0
// int (**ActorGameGangBattlesRetrieveMember::ActorGameGangBattlesRetrieveMember(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc4f900] (64 bytes) sub_C4F900
// int (**ActorGameHUD::ActorGameHUD(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc4f940] (64 bytes) sub_C4F940
// int (**ActorGameHUDFollowerStatus::ActorGameHUDFollowerStatus(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc4f980] (64 bytes) sub_C4F980
// int (**ActorGameHUDRaceLockControls::ActorGameHUDRaceLockControls(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc4f9c0] (64 bytes) sub_C4F9C0
// int (**ActorGameHUDControls::ActorGameHUDControls(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc4fa00] (165 bytes) sub_C4FA00
// int ActorGameHUDGenericText::ActorGameHUDGenericText(uint8_t *a1, unsigned int a2);
// [0xc4fac0] (64 bytes) sub_C4FAC0
// int (**ActorGameHUDHighlight::ActorGameHUDHighlight(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc4fb00] (64 bytes) sub_C4FB00
// int (**ActorGameHUDSetText::ActorGameHUDSetText(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc4fb40] (76 bytes) sub_C4FB40
// void *ActorGameHudSetObjective::ActorGameHudSetObjective(grapher::ActorBase *a1, unsigned int a2);
// [0xc4fb90] (86 bytes) sub_C4FB90
// int (**ActorGameHudSetWarning::ActorGameHudSetWarning(int a1, unsigned int a2))(int);
// [0xc4fbf0] (64 bytes) sub_C4FBF0
// int (**ActorGameHUDSetVarText::ActorGameHUDSetVarText(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc4fc30] (64 bytes) sub_C4FC30
// int (**ActorGameHUDTutorial::ActorGameHUDTutorial(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc4fc70] (64 bytes) sub_C4FC70
// int (**ActorGameItemShop::ActorGameItemShop(grapher::ActorBase *a1, unsigned int a2))(int);
// [0xc4fcb0] (96 bytes) sub_C4FCB0
// int ActorGameHUDSetInteractionButton::ActorGameHUDSetInteractionButton(grapher::ActorBase *a1, unsigned int a2);
// [0xc4fd10] (94 bytes) sub_C4FD10
// int ActorGameEventsHudOnTouch::ActorGameEventsHudOnTouch(int a1, unsigned int a2);
// [0xc4fd70] (105 bytes) sub_C4FD70
// int ActorGameEventOnPickUp::ActorGameEventOnPickUp(grapher::ActorBase *a1, unsigned int a2);
// [0xc4fde0] (105 bytes) sub_C4FDE0
// int ActorGameEventOnKill::ActorGameEventOnKill(grapher::ActorBase *a1, unsigned int a2);
// [0xc4fe50] (90 bytes) sub_C4FE50
// int ActorGameConditionHasVehicle::ActorGameConditionHasVehicle(grapher::ActorBase *a1, unsigned int a2);
// [0xc4feb0] (151 bytes) sub_C4FEB0
// int ActorGameTimer::ActorGameTimer(int a1, unsigned int a2);
// [0xc4ff50] (171 bytes) sub_C4FF50
// int sub_C4FF50(int a1, int a2);
// [0xc50000] (200 bytes) sub_C50000
// int sub_C50000(int a1, int a2);
// [0xc500d0] (387 bytes) sub_C500D0
// int *sub_C500D0(int *a1, int a2, int a3, int a4, int a5);
// [0xc50260] (219 bytes) sub_C50260
// int sub_C50260(int a1, int a2, int *a3);
// [0xc50340] (96 bytes) sub_C50340
// void sub_C50340(grapher::ActorBase *a1);
// [0xc503a0] (96 bytes) sub_C503A0
// void sub_C503A0(grapher::ActorBase *a1);
// [0xc50400] (75 bytes) sub_C50400
// int (**ActorGameConditionStolen::ActorGameConditionStolen(int a1, unsigned int a2))(int);
// [0xc50450] (88 bytes) sub_C50450
// void ActorGameConditionStolen::~ActorGameConditionStolen(grapher::ActorBase *a1);
// [0xc504b0] (1177 bytes) sub_C504B0
// int sub_C504B0(int a1, grapher::ActorContext *a2);
// [0xc50950] (201 bytes) sub_C50950
// int *sub_C50950(int a1, grapher::ActorContext *a2);
// [0xc50a20] (201 bytes) sub_C50A20
// int sub_C50A20(int a1, int a2, grapher::ActorContext *a3);
// [0xc50af0] (88 bytes) sub_C50AF0
// void ActorGameConditionInRange::~ActorGameConditionInRange(grapher::ActorBase *a1);
// [0xc50b50] (86 bytes) sub_C50B50
// int (**ActorGameConditionInRange::ActorGameConditionInRange(int a1, unsigned int a2))(int);
// [0xc50bb0] (88 bytes) sub_C50BB0
// void ActorGameConditionAnimEnded::~ActorGameConditionAnimEnded(grapher::ActorBase *a1);
// [0xc50c10] (700 bytes) sub_C50C10
// int ActorGameConditionAnimEnded::ActorGameConditionAnimEnded(int a1, unsigned int a2);
// [0xc50ed0] (96 bytes) sub_C50ED0
// void sub_C50ED0(grapher::ActorBase *a1);
// [0xc50f30] (1397 bytes) sub_C50F30
// int sub_C50F30(uint32_t *a1, char *a2);
// [0xc514b0] (13 bytes) sub_C514B0
// int sub_C514B0(uint32_t *a1, int a2, char *a3);
// [0xc514c0] (1237 bytes) sub_C514C0
// void sub_C514C0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc519a0] (2027 bytes) sub_C519A0
// int sub_C519A0(int a1, int a2, char *a3);
// [0xc52190] (321 bytes) sub_C52190
// int sub_C52190(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc522e0] (520 bytes) sub_C522E0
// void sub_C522E0(grapher::ActorBase *a1, int a2);
// [0xc524f0] (7 bytes) sub_C524F0
// int sub_C524F0(int a1, int a2);
// [0xc52500] (81 bytes) sub_C52500
// void sub_C52500(grapher::ActorBase *a1, int a2);
// [0xc52560] (630 bytes) sub_C52560
// grapher::ActorContext *sub_C52560(uint32_t *a1, void *a2, void *a3, int a4);
// [0xc527e0] (7 bytes) sub_C527E0
// int sub_C527E0(int a1, int a2);
// [0xc527f0] (71 bytes) sub_C527F0
// void sub_C527F0(uint32_t *a1, int a2);
// [0xc52840] (445 bytes) sub_C52840
// int sub_C52840( grapher::ActorContext *a1, grapher::ActorBase *a2, int a3, grapher::ActorContext *a4);
// [0xc52a00] (245 bytes) sub_C52A00
// int sub_C52A00( grapher::ActorContext *a1, grapher::ActorBase *a2, int a3, grapher::ActorContext *a4);
// [0xc52b00] (194 bytes) sub_C52B00
// 0xc52b00 sub_C52B00
// [0xc52bd0] (381 bytes) sub_C52BD0
// int sub_C52BD0( grapher::ActorContext *a1, grapher::ActorBase *a2, int a3, grapher::ActorContext *a4);
// [0xc52d50] (227 bytes) sub_C52D50
// int sub_C52D50( grapher::ActorContext *a1, grapher::ActorBase *a2, int a3, grapher::ActorContext *a4);
// [0xc52e40] (710 bytes) sub_C52E40
// int sub_C52E40(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc53110] (462 bytes) sub_C53110
// void sub_C53110(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc532e0] (261 bytes) sub_C532E0
// int sub_C532E0( grapher::ActorContext *a1, grapher::ActorBase *a2, int a3, grapher::ActorContext *a4);
// [0xc533f0] (1357 bytes) sub_C533F0
// int sub_C533F0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc53940] (319 bytes) sub_C53940
// 0xc53940 sub_C53940
// [0xc53a80] (1394 bytes) sub_C53A80
// int sub_C53A80(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc54000] (381 bytes) sub_C54000
// int sub_C54000( grapher::ActorContext *a1, grapher::ActorBase *a2, int a3, grapher::ActorContext *a4);
// [0xc54180] (606 bytes) sub_C54180
// int sub_C54180(grapher::ActorContext *a1, grapher::ActorBase *a2, grapher::ActorContext *a3);
// [0xc543e0] (13 bytes) sub_C543E0
// int sub_C543E0( grapher::ActorContext *a1, grapher::ActorBase *a2, int a3, grapher::ActorContext *a4);
// [0xc543f0] (235 bytes) sub_C543F0
// int sub_C543F0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc544e0] (871 bytes) sub_C544E0
// uint32_t *sub_C544E0(grapher::ActorBase *a1, grapher::ActorContext *a2);
// [0xc54850] (78 bytes) sub_C54850
// int sub_C54850(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc548a0] (385 bytes) sub_C548A0
// int sub_C548A0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc54a30] (663 bytes) sub_C54A30
// 0xc54a30 sub_C54A30
// [0xc54cd0] (1657 bytes) sub_C54CD0
// uint32_t *sub_C54CD0(int a1, __guard *a2, uint32_t *a3);
// [0xc55350] (270 bytes) sub_C55350
// 0xc55350 sub_C55350
// [0xc55460] (1215 bytes) sub_C55460
// int sub_C55460(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc55920] (1676 bytes) sub_C55920
// grapher::ActorContext *sub_C55920(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc55fb0] (4244 bytes) sub_C55FB0
// int *sub_C55FB0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc57050] (484 bytes) sub_C57050
// void sub_C57050(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc57240] (209 bytes) sub_C57240
// void sub_C57240(void **a1, grapher::ActorContext *a2);
// [0xc57320] (121 bytes) sub_C57320
// void ActorGameConditionIsAlive::~ActorGameConditionIsAlive(int a1);
// [0xc573a0] (129 bytes) sub_C573A0
// void sub_C573A0(void **a1);
// [0xc57430] (122 bytes) sub_C57430
// void ActorGameConditionWithin::~ActorGameConditionWithin(uint32_t *a1);
// [0xc574b0] (1198 bytes) sub_C574B0
// 0xc574b0 sub_C574B0
// [0xc57960] (130 bytes) sub_C57960
// void sub_C57960(uint32_t *a1);
// [0xc579f0] (246 bytes) sub_C579F0
// int sub_C579F0(grapher::ActorBase *a1, grapher::ActorContext *a2);
// [0xc57af0] (246 bytes) sub_C57AF0
// int sub_C57AF0(grapher::ActorBase *a1, grapher::ActorContext *a2);
// [0xc57bf0] (429 bytes) sub_C57BF0
// int sub_C57BF0(grapher::ActorBase *a1, grapher::ActorContext *a2);
// [0xc57da0] (7 bytes) sub_C57DA0
// int sub_C57DA0(int a1, int a2, int a3);
// [0xc57db0] (142 bytes) sub_C57DB0
// void sub_C57DB0(grapher::ActorBase *a1, int a2, int a3);
// [0xc57e40] (690 bytes) sub_C57E40
// int sub_C57E40(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc58100] (2393 bytes) sub_C58100
// int sub_C58100(grapher::ActorBase *a1, grapher::ActorContext *a2, char a3);
// [0xc58a60] (613 bytes) sub_C58A60
// int sub_C58A60(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc58cd0] (284 bytes) sub_C58CD0
// uint32_t *sub_C58CD0(uint32_t *a1, int a2, int *a3, int *a4);
// [0xc58df0] (215 bytes) sub_C58DF0
// int sub_C58DF0(int a1, int *a2);
// [0xc58ed0] (1755 bytes) sub_C58ED0
// int sub_C58ED0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc595b0] (1267 bytes) sub_C595B0
// int sub_C595B0(grapher::ActorBase *a1, grapher::ActorContext *a2);
// [0xc59ab0] (233 bytes) sub_C59AB0
// int sub_C59AB0(grapher::ActorBase *a1, grapher::ActorContext *a2);
// [0xc59ba0] (438 bytes) sub_C59BA0
// int sub_C59BA0( grapher::ActorContext *a1, grapher::ActorBase *a2, int a3, grapher::ActorContext *a4);
// [0xc59d60] (1093 bytes) sub_C59D60
// void *sub_C59D60(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0xc5a1b0] (24 bytes) sub_C5A1B0
// uint32_t *sub_C5A1B0(uint32_t *a1);
// [0xc5a1d0] (42 bytes) sub_C5A1D0
// void sub_C5A1D0(uint32_t *a1);
// [0xc5a200] (42 bytes) sub_C5A200
// void sub_C5A200(grapher::ActorBase *a1);
// [0xc5a230] (64 bytes) sub_C5A230
// void sub_C5A230(grapher::ActorBase *a1);
// [0xc5a270] (287 bytes) sub_C5A270
// const char *sub_C5A270(int a1);
// [0xc5a390] (447 bytes) sub_C5A390
// int sub_C5A390(uint8_t *a1, uint8_t a2);
// [0xc5a550] (185 bytes) sub_C5A550
// void sub_C5A550(uint32_t *a1, int a2, char a3);
// [0xc5a610] (88 bytes) sub_C5A610
// int (**sub_C5A610(uint32_t *a1))(int);
// [0xc5a670] (96 bytes) sub_C5A670
// void sub_C5A670(uint32_t *a1);
// [0xc5a6d0] (70 bytes) std::map<void *,grapher::ActorContext::ICVar *,std::less<void *>,std::allocator<std::pair<void * const,grapher::ActorContext::ICVar *>>>::find(void * const&)
// std::map<void *,grapher::ActorContext::ICVar *> *std::map<void *,grapher::ActorContext::ICVar *>::find( std::map<void *,grapher::ActorContext::ICVar *> *this, void *const *a2, unsigned int *a3);
// [0xc5a720] (179 bytes) sub_C5A720
// uint32_t *sub_C5A720(uint32_t *a1, uint8_t *a2);
// [0xc5a7e0] (425 bytes) std::_Rb_tree<LevelObject const*,std::pair<LevelObject const* const,bool>,std::_Select1st<std::pair<LevelObject const* const,bool>>,std::less<LevelObject const*>,std::allocator<std::pair<LevelObject const* const,bool>>>::_M_erase(std::_Rb_tree_node<std::pair<LevelObject const* const,bool>> *)
// void std::_Rb_tree<LevelObject const*,std::pair<LevelObject const* const,bool>,std::_Select1st<std::pair<LevelObject const* const,bool>>,std::less<LevelObject const*>,std::allocator<std::pair<LevelObject const* const,bool>>>::_M_erase( int a1, uint32_t *a2);
// [0xc5a990] (89 bytes) std::_List_base<Gangstar::Handle<LevelObject,true>,std::allocator<Gangstar::Handle<LevelObject,true>>>::_M_clear(void)
// void std::_List_base<Gangstar::Handle<LevelObject,true>>::_M_clear( std::_List_base<Gangstar::Handle<LevelObject, true>> *this);
// [0xc5a9f0] (89 bytes) std::_List_base<Gangstar::Handle<TriggerZone,true>,std::allocator<Gangstar::Handle<TriggerZone,true>>>::_M_clear(void)
// void std::_List_base<Gangstar::Handle<TriggerZone,true>>::_M_clear( std::_List_base<Gangstar::Handle<TriggerZone, true>> *this);
