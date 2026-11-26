#pragma once
// ============================================================================
// TU12_GrapherActorsBatch1.h
// Complete Translation Unit [12/41]
// Binary Range in lib/x86/libGangstar4.so: 0x81e660 .. 0x838820 (104 KB)
// Total Decompiled Functions in TU: 363 (100% coverage)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// Function Table in Translation Unit:
// [0x81e660] (701 bytes) sub_81E660
// int sub_81E660();
// [0x81e920] (15 bytes) sub_81E920
// int sub_81E920(int a1);
// [0x81e930] (98 bytes) sub_81E930
// int sub_81E930(int a1, int a2);
// [0x81e9a0] (42 bytes) sub_81E9A0
// int sub_81E9A0(grapher::ActorBase *a1);
// [0x81e9d0] (42 bytes) sub_81E9D0
// int ActorGameWorldTimeFormat::~ActorGameWorldTimeFormat(grapher::ActorBase *a1);
// [0x81ea00] (42 bytes) sub_81EA00
// int ActorGameWorldTime::~ActorGameWorldTime(grapher::ActorBase *a1);
// [0x81ea30] (42 bytes) sub_81EA30
// int ActorGameWorldSetLock::~ActorGameWorldSetLock(grapher::ActorBase *a1);
// [0x81ea60] (42 bytes) sub_81EA60
// int ActorGameWorldChangeLocation::~ActorGameWorldChangeLocation(grapher::ActorBase *a1);
// [0x81ea90] (42 bytes) sub_81EA90
// int ActorGameWorldItem::~ActorGameWorldItem(grapher::ActorBase *a1);
// [0x81eac0] (42 bytes) sub_81EAC0
// int ActorGameWorldCoverEligible::~ActorGameWorldCoverEligible(grapher::ActorBase *a1);
// [0x81eaf0] (42 bytes) sub_81EAF0
// int ActorGameVehicleToggleRadio::~ActorGameVehicleToggleRadio(grapher::ActorBase *a1);
// [0x81eb20] (42 bytes) sub_81EB20
// int ActorGameVehicleSetSpeed::~ActorGameVehicleSetSpeed(grapher::ActorBase *a1);
// [0x81eb50] (42 bytes) sub_81EB50
// int ActorGameVehicleLockDoors::~ActorGameVehicleLockDoors(grapher::ActorBase *a1);
// [0x81eb80] (42 bytes) sub_81EB80
// int ActorGameVehicleDestroy::~ActorGameVehicleDestroy(grapher::ActorBase *a1);
// [0x81ebb0] (42 bytes) sub_81EBB0
// int ActorGameTrackVehicleSold::~ActorGameTrackVehicleSold(grapher::ActorBase *a1);
// [0x81ebe0] (42 bytes) sub_81EBE0
// int ActorGameStatCounters::~ActorGameStatCounters(grapher::ActorBase *a1);
// [0x81ec10] (42 bytes) sub_81EC10
// int ActorGameSoundMusic::~ActorGameSoundMusic(grapher::ActorBase *a1);
// [0x81ec40] (42 bytes) sub_81EC40
// int ActorGameSoundOneLiners::~ActorGameSoundOneLiners(grapher::ActorBase *a1);
// [0x81ec70] (42 bytes) sub_81EC70
// int ActorGameSoundAmbience::~ActorGameSoundAmbience(grapher::ActorBase *a1);
// [0x81eca0] (42 bytes) sub_81ECA0
// int ActorGameSoundFX::~ActorGameSoundFX(grapher::ActorBase *a1);
// [0x81ecd0] (42 bytes) sub_81ECD0
// int ActorGameScriptExec::~ActorGameScriptExec(grapher::ActorBase *a1);
// [0x81ed00] (42 bytes) sub_81ED00
// int ActorGamePlayerSetThrowable::~ActorGamePlayerSetThrowable(grapher::ActorBase *a1);
// [0x81ed30] (42 bytes) sub_81ED30
// int ActorGamePlayerGiveRespect::~ActorGamePlayerGiveRespect(grapher::ActorBase *a1);
// [0x81ed60] (42 bytes) sub_81ED60
// int ActorGamePlayerGiveItem::~ActorGamePlayerGiveItem(grapher::ActorBase *a1);
// [0x81ed90] (42 bytes) sub_81ED90
// int ActorGamePlayerGiveCurrency::~ActorGamePlayerGiveCurrency(grapher::ActorBase *a1);
// [0x81edc0] (42 bytes) sub_81EDC0
// int ActorGamePlayerEquipGear::~ActorGamePlayerEquipGear(grapher::ActorBase *a1);
// [0x81edf0] (42 bytes) sub_81EDF0
// int ActorGamePhysicsExplosion::~ActorGamePhysicsExplosion(grapher::ActorBase *a1);
// [0x81ee20] (108 bytes) sub_81EE20
// int ActorGameWorldRace::~ActorGameWorldRace(grapher::ActorBase *a1);
// [0x81ee90] (48 bytes) sub_81EE90
// int (**sub_81EE90(uint32_t *a1))(int);
// [0x81eec0] (48 bytes) sub_81EEC0
// int (**sub_81EEC0(uint32_t *a1))(int);
// [0x81eef0] (48 bytes) sub_81EEF0
// int (**sub_81EEF0(uint32_t *a1))(int);
// [0x81ef20] (48 bytes) sub_81EF20
// int (**sub_81EF20(uint32_t *a1))(int);
// [0x81ef50] (48 bytes) sub_81EF50
// int (**sub_81EF50(uint32_t *a1))(int);
// [0x81ef80] (106 bytes) sub_81EF80
// int sub_81EF80(int a1);
// [0x81eff0] (132 bytes) sub_81EFF0
// int sub_81EFF0(int a1);
// [0x81f080] (336 bytes) sub_81F080
// int sub_81F080(int a1);
// [0x81f1d0] (139 bytes) sub_81F1D0
// int (**sub_81F1D0(uint32_t *a1))(int);
// [0x81f260] (292 bytes) sub_81F260
// int sub_81F260(int a1);
// [0x81f390] (90 bytes) sub_81F390
// int sub_81F390(uint32_t *a1);
// [0x81f3f0] (304 bytes) sub_81F3F0
// int sub_81F3F0(uint32_t *a1, int a2);
// [0x81f520] (48 bytes) sub_81F520
// int (**sub_81F520(uint32_t *a1))(int);
// [0x81f550] (106 bytes) sub_81F550
// int sub_81F550(int a1);
// [0x81f5c0] (70 bytes) sub_81F5C0
// int sub_81F5C0(int a1);
// [0x81f610] (70 bytes) sub_81F610
// int sub_81F610(int a1);
// [0x81f660] (665 bytes) sub_81F660
// int *sub_81F660(int *a1, int *a2, int a3, int a4);
// [0x81f900] (92 bytes) sub_81F900
// int sub_81F900(uint32_t *a1);
// [0x81f960] (295 bytes) sub_81F960
// int sub_81F960(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x81fa90] (54 bytes) sub_81FA90
// int sub_81FA90(int a1, int a2);
// [0x81fad0] (54 bytes) sub_81FAD0
// int *sub_81FAD0(int a1, int a2);
// [0x81fb10] (368 bytes) sub_81FB10
// int sub_81FB10(int a1);
// [0x81fc80] (344 bytes) sub_81FC80
// int sub_81FC80(int a1);
// [0x81fde0] (619 bytes) sub_81FDE0
// int16_t sub_81FDE0(int a1, int a2);
// [0x820050] (382 bytes) sub_820050
// size_t sub_820050(int *a1, uint32_t *a2);
// [0x8201d0] (551 bytes) sub_8201D0
// int sub_8201D0(grapher::ActorBase *a1);
// [0x820400] (234 bytes) sub_820400
// void sub_820400(grapher::ActorBase *a1, int a2, int a3, int a4);
// [0x8204f0] (64 bytes) sub_8204F0
// void sub_8204F0(grapher::ActorBase *a1);
// [0x820530] (64 bytes) sub_820530
// void sub_820530(grapher::ActorBase *a1);
// [0x820570] (64 bytes) sub_820570
// void sub_820570(grapher::ActorBase *a1);
// [0x8205b0] (64 bytes) sub_8205B0
// void sub_8205B0(grapher::ActorBase *a1);
// [0x8205f0] (64 bytes) sub_8205F0
// void sub_8205F0(grapher::ActorBase *a1);
// [0x820630] (64 bytes) sub_820630
// void sub_820630(grapher::ActorBase *a1);
// [0x820670] (64 bytes) sub_820670
// void sub_820670(grapher::ActorBase *a1);
// [0x8206b0] (64 bytes) sub_8206B0
// void sub_8206B0(grapher::ActorBase *a1);
// [0x8206f0] (64 bytes) sub_8206F0
// void sub_8206F0(grapher::ActorBase *a1);
// [0x820730] (64 bytes) sub_820730
// void sub_820730(grapher::ActorBase *a1);
// [0x820770] (64 bytes) sub_820770
// void sub_820770(grapher::ActorBase *a1);
// [0x8207b0] (64 bytes) sub_8207B0
// void sub_8207B0(grapher::ActorBase *a1);
// [0x8207f0] (64 bytes) sub_8207F0
// void sub_8207F0(grapher::ActorBase *a1);
// [0x820830] (64 bytes) sub_820830
// void sub_820830(grapher::ActorBase *a1);
// [0x820870] (64 bytes) sub_820870
// void sub_820870(grapher::ActorBase *a1);
// [0x8208b0] (64 bytes) sub_8208B0
// void sub_8208B0(grapher::ActorBase *a1);
// [0x8208f0] (64 bytes) sub_8208F0
// void sub_8208F0(grapher::ActorBase *a1);
// [0x820930] (64 bytes) sub_820930
// void sub_820930(grapher::ActorBase *a1);
// [0x820970] (64 bytes) sub_820970
// void sub_820970(grapher::ActorBase *a1);
// [0x8209b0] (64 bytes) sub_8209B0
// void sub_8209B0(grapher::ActorBase *a1);
// [0x8209f0] (64 bytes) sub_8209F0
// void sub_8209F0(grapher::ActorBase *a1);
// [0x820a30] (64 bytes) sub_820A30
// void sub_820A30(grapher::ActorBase *a1);
// [0x820a70] (64 bytes) sub_820A70
// void sub_820A70(grapher::ActorBase *a1);
// [0x820ab0] (64 bytes) sub_820AB0
// void sub_820AB0(grapher::ActorBase *a1);
// [0x820af0] (70 bytes) sub_820AF0
// void sub_820AF0(uint32_t *a1);
// [0x820b40] (70 bytes) sub_820B40
// void sub_820B40(uint32_t *a1);
// [0x820b90] (70 bytes) sub_820B90
// void sub_820B90(uint32_t *a1);
// [0x820be0] (70 bytes) sub_820BE0
// void sub_820BE0(uint32_t *a1);
// [0x820c30] (70 bytes) sub_820C30
// void sub_820C30(uint32_t *a1);
// [0x820c80] (70 bytes) sub_820C80
// void sub_820C80(uint32_t *a1);
// [0x820cd0] (433 bytes) sub_820CD0
// int sub_820CD0(int *a1);
// [0x820e90] (305 bytes) sub_820E90
// void sub_820E90(int a1);
// [0x820fd0] (420 bytes) sub_820FD0
// void sub_820FD0(int a1, uint32_t *a2);
// [0x821180] (701 bytes) sub_821180
// void sub_821180(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x821440] (275 bytes) sub_821440
// void sub_821440(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x821560] (479 bytes) sub_821560
// int sub_821560(int a1, int a2);
// [0x821740] (630 bytes) sub_821740
// 0x821740 sub_821740
// [0x8219c0] (230 bytes) sub_8219C0
// int sub_8219C0(int a1);
// [0x821ab0] (230 bytes) sub_821AB0
// int sub_821AB0(int a1);
// [0x821ba0] (908 bytes) sub_821BA0
// void sub_821BA0(int a1);
// [0x821f30] (116 bytes) sub_821F30
// void sub_821F30(grapher::ActorBase *a1);
// [0x821fb0] (306 bytes) sub_821FB0
// uint32_t *sub_821FB0(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5);
// [0x8220f0] (219 bytes) sub_8220F0
// int sub_8220F0(int a1, int a2, unsigned int *a3);
// [0x8221d0] (493 bytes) sub_8221D0
// void sub_8221D0(int a1);
// [0x8223c0] (370 bytes) sub_8223C0
// unsigned int sub_8223C0(int *a1);
// [0x822540] (294 bytes) sub_822540
// int *sub_822540(grapher::ActorBase *a1, grapher::ActorContext *a2);
// [0x822670] (869 bytes) sub_822670
// void sub_822670(int a1);
// [0x8229e0] (209 bytes) sub_8229E0
// int sub_8229E0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x822ac0] (493 bytes) sub_822AC0
// int sub_822AC0(int *a1);
// [0x822cb0] (318 bytes) sub_822CB0
// int sub_822CB0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x822df0] (853 bytes) sub_822DF0
// void sub_822DF0(int a1);
// [0x823150] (1864 bytes) sub_823150
// int sub_823150(grapher::ActorBase *a1);
// [0x8238a0] (769 bytes) sub_8238A0
// int sub_8238A0(grapher::ActorBase *a1);
// [0x823bb0] (943 bytes) sub_823BB0
// int sub_823BB0(grapher::ActorBase *a1);
// [0x823f60] (1191 bytes) sub_823F60
// int sub_823F60(grapher::ActorBase *a1);
// [0x824410] (1124 bytes) sub_824410
// int sub_824410(grapher::ActorBase *a1);
// [0x824880] (1091 bytes) sub_824880
// int sub_824880(grapher::ActorBase *a1);
// [0x824cd0] (727 bytes) sub_824CD0
// int sub_824CD0(grapher::ActorBase *a1);
// [0x824fb0] (729 bytes) sub_824FB0
// int sub_824FB0(grapher::ActorBase *a1);
// [0x825290] (977 bytes) sub_825290
// int sub_825290(grapher::ActorBase *a1);
// [0x825670] (943 bytes) sub_825670
// int sub_825670(grapher::ActorBase *a1);
// [0x825a20] (903 bytes) sub_825A20
// int sub_825A20(grapher::ActorBase *a1);
// [0x825db0] (1414 bytes) sub_825DB0
// int sub_825DB0(grapher::ActorBase *a1);
// [0x826340] (803 bytes) sub_826340
// int sub_826340(grapher::ActorBase *a1);
// [0x826670] (1151 bytes) sub_826670
// int sub_826670(grapher::ActorBase *a1);
// [0x826af0] (843 bytes) sub_826AF0
// int sub_826AF0(grapher::ActorBase *a1);
// [0x826e40] (1386 bytes) sub_826E40
// int sub_826E40(grapher::ActorBase *a1);
// [0x8273b0] (1017 bytes) sub_8273B0
// int sub_8273B0(grapher::ActorBase *a1);
// [0x8277b0] (2740 bytes) sub_8277B0
// int sub_8277B0(grapher::ActorBase *a1);
// [0x828270] (803 bytes) sub_828270
// int sub_828270(grapher::ActorBase *a1);
// [0x8285a0] (551 bytes) sub_8285A0
// int sub_8285A0(grapher::ActorBase *a1);
// [0x8287d0] (384 bytes) sub_8287D0
// int sub_8287D0(grapher::ActorBase *a1);
// [0x828950] (384 bytes) sub_828950
// int sub_828950(grapher::ActorBase *a1);
// [0x828ad0] (935 bytes) sub_828AD0
// int sub_828AD0(grapher::ActorBase *a1);
// [0x828e80] (1015 bytes) sub_828E80
// int sub_828E80(grapher::ActorBase *a1);
// [0x829280] (1261 bytes) sub_829280
// int sub_829280(grapher::ActorBase *a1);
// [0x829770] (147 bytes) sub_829770
// void sub_829770(uint32_t *a1);
// [0x829810] (64 bytes) sub_829810
// int (**ActorGamePhysicsExplosion::ActorGamePhysicsExplosion(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x829850] (64 bytes) sub_829850
// int (**ActorGamePlayerEquipGear::ActorGamePlayerEquipGear(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x829890] (64 bytes) sub_829890
// int (**ActorGamePlayerGiveCurrency::ActorGamePlayerGiveCurrency(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x8298d0] (64 bytes) sub_8298D0
// int (**ActorGamePlayerGiveItem::ActorGamePlayerGiveItem(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x829910] (64 bytes) sub_829910
// int (**ActorGamePlayerGiveRespect::ActorGamePlayerGiveRespect(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x829950] (64 bytes) sub_829950
// int (**ActorGamePlayerSetThrowable::ActorGamePlayerSetThrowable(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x829990] (64 bytes) sub_829990
// int (**ActorGameScriptExec::ActorGameScriptExec(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x8299d0] (64 bytes) sub_8299D0
// int (**ActorGameSoundFX::ActorGameSoundFX(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x829a10] (64 bytes) sub_829A10
// int (**ActorGameSoundAmbience::ActorGameSoundAmbience(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x829a50] (64 bytes) sub_829A50
// int (**ActorGameSoundOneLiners::ActorGameSoundOneLiners(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x829a90] (64 bytes) sub_829A90
// int (**ActorGameSoundMusic::ActorGameSoundMusic(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x829ad0] (64 bytes) sub_829AD0
// int (**ActorGameStatCounters::ActorGameStatCounters(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x829b10] (64 bytes) sub_829B10
// int (**ActorGameTrackVehicleSold::ActorGameTrackVehicleSold(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x829b50] (64 bytes) sub_829B50
// int (**ActorGameVehicleDestroy::ActorGameVehicleDestroy(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x829b90] (64 bytes) sub_829B90
// int (**ActorGameVehicleLockDoors::ActorGameVehicleLockDoors(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x829bd0] (64 bytes) sub_829BD0
// int (**ActorGameVehicleSetSpeed::ActorGameVehicleSetSpeed(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x829c10] (64 bytes) sub_829C10
// int (**ActorGameVehicleToggleRadio::ActorGameVehicleToggleRadio(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x829c50] (64 bytes) sub_829C50
// int (**ActorGameWorldCoverEligible::ActorGameWorldCoverEligible(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x829c90] (64 bytes) sub_829C90
// int (**ActorGameWorldItem::ActorGameWorldItem(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x829cd0] (71 bytes) sub_829CD0
// int (**ActorGameWorldChangeLocation::ActorGameWorldChangeLocation(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x829d20] (134 bytes) sub_829D20
// int (**ActorGameWorldRace::ActorGameWorldRace(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x829db0] (739 bytes) sub_829DB0
// int sub_829DB0(int *a1, int a2);
// [0x82a0a0] (64 bytes) sub_82A0A0
// int (**ActorGameWorldSetLock::ActorGameWorldSetLock(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x82a0e0] (64 bytes) sub_82A0E0
// int (**ActorGameWorldTime::ActorGameWorldTime(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x82a120] (64 bytes) sub_82A120
// int (**ActorGameWorldTimeFormat::ActorGameWorldTimeFormat(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x82a160] (64 bytes) sub_82A160
// int (**ActorGameWorldTimeScale::ActorGameWorldTimeScale(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x82a1a0] (74 bytes) sub_82A1A0
// void sub_82A1A0(int a1, int a2);
// [0x82a1f0] (130 bytes) sub_82A1F0
// uint32_t *sub_82A1F0(int a1, unsigned int a2, char a3, char a4);
// [0x82a280] (213 bytes) sub_82A280
// int sub_82A280(int a1, unsigned int a2, char a3, char a4);
// [0x82a360] (182 bytes) sub_82A360
// void sub_82A360(int a1, int *a2, char a3, char a4);
// [0x82a420] (92 bytes) sub_82A420
// int *sub_82A420(int a1, int a2, char a3);
// [0x82a480] (47 bytes) sub_82A480
// int sub_82A480(int a1, unsigned int a2);
// [0x82a4b0] (47 bytes) sub_82A4B0
// int sub_82A4B0(int a1, unsigned int a2);
// [0x82a4e0] (123 bytes) sub_82A4E0
// int sub_82A4E0(int a1, unsigned int a2);
// [0x82a560] (51 bytes) sub_82A560
// int sub_82A560(int a1, int a2);
// [0x82a5a0] (51 bytes) sub_82A5A0
// int sub_82A5A0(int a1, int a2);
// [0x82a5e0] (25 bytes) sub_82A5E0
// int sub_82A5E0(int a1, int a2);
// [0x82a600] (174 bytes) sub_82A600
// unsigned int sub_82A600(int a1, int a2);
// [0x82a6b0] (16 bytes) sub_82A6B0
// int sub_82A6B0(int a1);
// [0x82a6c0] (135 bytes) sub_82A6C0
// uint32_t *sub_82A6C0(int a1);
// [0x82a750] (572 bytes) sub_82A750
// int sub_82A750(int a1, int a2);
// [0x82a990] (166 bytes) sub_82A990
// unsigned int sub_82A990(int a1, int a2);
// [0x82aa40] (110 bytes) sub_82AA40
// int sub_82AA40(int a1, int a2);
// [0x82aab0] (13 bytes) sub_82AAB0
// int sub_82AAB0(int a1);
// [0x82aac0] (13 bytes) sub_82AAC0
// int sub_82AAC0(int a1);
// [0x82aad0] (13 bytes) sub_82AAD0
// int sub_82AAD0(int a1);
// [0x82aae0] (81 bytes) sub_82AAE0
// int sub_82AAE0(int a1);
// [0x82ab40] (447 bytes) sub_82AB40
// void sub_82AB40();
// [0x82ad00] (78 bytes) sub_82AD00
// int sub_82AD00(int a1);
// [0x82ad50] (78 bytes) sub_82AD50
// int sub_82AD50(int a1);
// [0x82ada0] (371 bytes) sub_82ADA0
// int sub_82ADA0(int a1, int a2, char a3, char a4);
// [0x82af20] (207 bytes) sub_82AF20
// uint32_t *sub_82AF20(int a1, uint32_t *a2, char a3);
// [0x82aff0] (51 bytes) sub_82AFF0
// void sub_82AFF0(int a1, int a2);
// [0x82b030] (9 bytes) sub_82B030
// void sub_82B030();
// [0x82b040] (78 bytes) sub_82B040
// int sub_82B040(int a1);
// [0x82b090] (103 bytes) sub_82B090
// void sub_82B090(int a1);
// [0x82b100] (201 bytes) sub_82B100
// int *sub_82B100(int a1, int a2);
// [0x82b1d0] (51 bytes) sub_82B1D0
// unsigned int sub_82B1D0(int a1, int a2);
// [0x82b210] (325 bytes) sub_82B210
// int sub_82B210(int a1, int a2);
// [0x82b360] (325 bytes) sub_82B360
// int sub_82B360(int a1, int a2);
// [0x82b4b0] (461 bytes) sub_82B4B0
// int sub_82B4B0(int a1, char *a2);
// [0x82b680] (325 bytes) sub_82B680
// int sub_82B680(int a1, int a2);
// [0x82b7d0] (33 bytes) sub_82B7D0
// int sub_82B7D0(int a1, int a2);
// [0x82b810] (27 bytes) sub_82B810
// int sub_82B810(int a1);
// [0x82b830] (70 bytes) sub_82B830
// void sub_82B830(int a1, int a2, int a3);
// [0x82b880] (55 bytes) sub_82B880
// int sub_82B880(int a1);
// [0x82b8c0] (84 bytes) sub_82B8C0
// int sub_82B8C0(int a1, int a2, int a3);
// [0x82b920] (84 bytes) sub_82B920
// void sub_82B920(int a1, int a2, int a3);
// [0x82b980] (323 bytes) sub_82B980
// void sub_82B980(int a1, unsigned int a2, int a3, char a4);
// [0x82bae0] (150 bytes) sub_82BAE0
// int *sub_82BAE0();
// [0x82bb88] (1 bytes) nullsub_290
// void nullsub_290();
// [0x82bb98] (1 bytes) nullsub_291
// void nullsub_291();
// [0x82bbc8] (1 bytes) nullsub_292
// void nullsub_292();
// [0x82bbd8] (1 bytes) nullsub_293
// void nullsub_293();
// [0x82bbe0] (319 bytes) sub_82BBE0
// int sub_82BBE0(int a1, int a2, char *a3, char *a4);
// [0x82bd20] (82 bytes) sub_82BD20
// int sub_82BD20(int a1, int a2, int a3, int a4);
// [0x82bd80] (112 bytes) sub_82BD80
// int sub_82BD80(int *a1, float a2);
// [0x82bdf0] (144 bytes) sub_82BDF0
// int sub_82BDF0(int *a1, int a2, int a3);
// [0x82be80] (117 bytes) sub_82BE80
// int (**sub_82BE80(uint32_t *a1, int a2, char *a3))(int);
// [0x82bf00] (352 bytes) sub_82BF00
// unsigned int sub_82BF00(uint32_t *a1, int a2, char *a3, int a4, char a5);
// [0x82c060] (869 bytes) sub_82C060
// void sub_82C060(int a1, int a2, int a3);
// [0x82c3d0] (156 bytes) sub_82C3D0
// int sub_82C3D0(int a1, int a2, int a3, int a4);
// [0x82c470] (190 bytes) sub_82C470
// void sub_82C470(int a1, char a2, int a3);
// [0x82c530] (65 bytes) sub_82C530
// int sub_82C530(int a1, int a2, uint8_t a3);
// [0x82c580] (82 bytes) sub_82C580
// int sub_82C580(int a1, int a2, int a3);
// [0x82c5e0] (102 bytes) sub_82C5E0
// uint32_t *sub_82C5E0();
// [0x82c650] (131 bytes) sub_82C650
// int sub_82C650(int a1, int a2, char *a3, int a4);
// [0x82c6e0] (110 bytes) sub_82C6E0
// int (**sub_82C6E0(uint32_t *a1, int a2, char *a3))(int);
// [0x82c750] (132 bytes) sub_82C750
// int sub_82C750(uint32_t *a1, int a2, char *a3);
// [0x82c7e0] (117 bytes) sub_82C7E0
// int (**sub_82C7E0(uint32_t *a1, int a2, char *a3))(int);
// [0x82c860] (117 bytes) sub_82C860
// int (**sub_82C860(uint32_t *a1, int a2, char *a3))(int);
// [0x82c8e0] (686 bytes) sub_82C8E0
// char sub_82C8E0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x82cb90] (1018 bytes) sub_82CB90
// int sub_82CB90(int a1, unsigned int a2, int a3, int a4, uint8_t a5);
// [0x82cf90] (193 bytes) sub_82CF90
// int sub_82CF90(int a1, char a2);
// [0x82d060] (119 bytes) sub_82D060
// int sub_82D060(int a1, char a2);
// [0x82d0e0] (842 bytes) sub_82D0E0
// int sub_82D0E0(int a1, char a2);
// [0x82d430] (25 bytes) sub_82D430
// int sub_82D430(int a1, char a2);
// [0x82d450] (251 bytes) sub_82D450
// int sub_82D450(int a1, uint8_t a2);
// [0x82d550] (76 bytes) sub_82D550
// int sub_82D550(int a1, int a2, char a3);
// [0x82d5a0] (76 bytes) sub_82D5A0
// int sub_82D5A0(int a1, int a2, char a3);
// [0x82d5f0] (78 bytes) sub_82D5F0
// int sub_82D5F0(uint32_t *a1);
// [0x82d640] (117 bytes) sub_82D640
// int sub_82D640(int a1, char *a2);
// [0x82d6c0] (725 bytes) sub_82D6C0
// void sub_82D6C0(int a1, int a2, uint32_t *a3);
// [0x82d9a0] (62 bytes) sub_82D9A0
// void sub_82D9A0(int a1, uint32_t *a2);
// [0x82d9e0] (67 bytes) sub_82D9E0
// void sub_82D9E0(uint32_t *a1, int a2);
// [0x82da30] (119 bytes) sub_82DA30
// void sub_82DA30(int a1, int a2);
// [0x82dab0] (333 bytes) sub_82DAB0
// void sub_82DAB0(int a1);
// [0x82dc00] (381 bytes) sub_82DC00
// void sub_82DC00();
// [0x82dd80] (266 bytes) sub_82DD80
// int sub_82DD80(int a1, char a2);
// [0x82de90] (506 bytes) sub_82DE90
// int sub_82DE90(int a1, int a2);
// [0x82e090] (1391 bytes) sub_82E090
// int sub_82E090(int a1, int a2);
// [0x82e600] (1008 bytes) sub_82E600
// int sub_82E600(uint32_t *a1);
// [0x82e9f0] (1302 bytes) sub_82E9F0
// void sub_82E9F0(int a1);
// [0x82ef10] (259 bytes) sub_82EF10
// int sub_82EF10(int *a1, int a2);
// [0x82f020] (86 bytes) sub_82F020
// void sub_82F020(uint32_t *a1);
// [0x82f080] (107 bytes) sub_82F080
// int sub_82F080(int a1, int a2);
// [0x82f0f0] (1223 bytes) sub_82F0F0
// int sub_82F0F0(int *a1, int a2, int a3);
// [0x82f5c0] (369 bytes) sub_82F5C0
// int sub_82F5C0(uint32_t *a1, char *a2);
// [0x82f740] (205 bytes) sub_82F740
// void sub_82F740(int a1, int a2, int a3, int a4);
// [0x82f810] (137 bytes) sub_82F810
// int sub_82F810(int *a1, int a2);
// [0x82f8a0] (678 bytes) sub_82F8A0
// uint32_t *sub_82F8A0(uint32_t *a1, int a2, char *a3);
// [0x82fb50] (6243 bytes) sub_82FB50
// void sub_82FB50(int a1);
// [0x8313c0] (150 bytes) sub_8313C0
// void sub_8313C0(int a1, int a2);
// [0x831460] (145 bytes) sub_831460
// int sub_831460(int *a1, int a2);
// [0x831500] (425 bytes) sub_831500
// int sub_831500(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x8316b0] (179 bytes) sub_8316B0
// int sub_8316B0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x831770] (500 bytes) sub_831770
// int *sub_831770(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x831970] (172 bytes) sub_831970
// int sub_831970(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x831a20] (293 bytes) sub_831A20
// int sub_831A20(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x831b50] (255 bytes) sub_831B50
// int sub_831B50(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x831c50] (837 bytes) sub_831C50
// int sub_831C50(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x831fa0] (920 bytes) sub_831FA0
// int sub_831FA0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x832340] (1685 bytes) sub_832340
// int sub_832340( long double a1, grapher::ActorBase *a2, unsigned int a3, grapher::ActorContext *a4);
// [0x8329e0] (139 bytes) sub_8329E0
// int sub_8329E0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x832a70] (548 bytes) sub_832A70
// int sub_832A70(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x832ca0] (644 bytes) sub_832CA0
// int sub_832CA0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x832f30] (653 bytes) sub_832F30
// void sub_832F30(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x8331c0] (566 bytes) sub_8331C0
// int sub_8331C0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x833400] (546 bytes) sub_833400
// void sub_833400(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x833630] (940 bytes) sub_833630
// int sub_833630(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x8339e0] (661 bytes) sub_8339E0
// char sub_8339E0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x833c80] (462 bytes) sub_833C80
// int sub_833C80(grapher::ActorBase *a1);
// [0x833e50] (502 bytes) sub_833E50
// int sub_833E50(grapher::ActorBase *a1, char *a2, grapher::ActorContext *a3);
// [0x834050] (1011 bytes) sub_834050
// int sub_834050(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x834450] (895 bytes) sub_834450
// int sub_834450(grapher::ActorBase *a1);
// [0x8347d0] (679 bytes) sub_8347D0
// int sub_8347D0(grapher::ActorBase *a1);
// [0x834a80] (606 bytes) sub_834A80
// int sub_834A80(grapher::ActorBase *a1, char *a2, grapher::ActorContext *a3);
// [0x834ce0] (1624 bytes) sub_834CE0
// void sub_834CE0(__guard *a1, int a2, grapher::ActorContext *a3);
// [0x835340] (124 bytes) sub_835340
// int sub_835340(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x8353c0] (177 bytes) sub_8353C0
// int sub_8353C0(int a1);
// [0x835480] (7 bytes) sub_835480
// int sub_835480(int a1);
// [0x835490] (119 bytes) sub_835490
// int (**sub_835490(int a1))(int);
// [0x835510] (7 bytes) sub_835510
// int sub_835510(int a1);
// [0x835520] (127 bytes) sub_835520
// void sub_835520(char *a1);
// [0x8355a0] (207 bytes) sub_8355A0
// int sub_8355A0(int a1);
// [0x835670] (284 bytes) sub_835670
// uint32_t *sub_835670(uint32_t *a1, int a2, int *a3, int *a4);
// [0x835790] (441 bytes) sub_835790
// int sub_835790(int a1, int *a2);
// [0x835950] (1083 bytes) sub_835950
// void sub_835950(int a1, int a2, int a3, char a4);
// [0x835d90] (24 bytes) sub_835D90
// uint32_t *sub_835D90(uint32_t *a1);
// [0x835db0] (9 bytes) sub_835DB0
// void sub_835DB0();
// [0x835dc0] (9 bytes) sub_835DC0
// void sub_835DC0();
// [0x835dd0] (9 bytes) sub_835DD0
// int sub_835DD0();
// [0x835de0] (12 bytes) sub_835DE0
// int sub_835DE0();
// [0x835df8] (1 bytes) nullsub_294
// void nullsub_294();
// [0x835e00] (28 bytes) sub_835E00
// int sub_835E00(int a1);
// [0x835e20] (24 bytes) sub_835E20
// uint32_t *sub_835E20(uint32_t *a1);
// [0x835e40] (24 bytes) sub_835E40
// uint32_t *sub_835E40(uint32_t *a1);
// [0x835e60] (24 bytes) sub_835E60
// uint32_t *sub_835E60(uint32_t *a1);
// [0x835e80] (24 bytes) sub_835E80
// uint32_t *sub_835E80(uint32_t *a1);
// [0x835ea0] (67 bytes) sub_835EA0
// void (__noreturn **sub_835EA0(uint32_t *a1))();
// [0x835ef0] (24 bytes) sub_835EF0
// uint32_t *sub_835EF0(uint32_t *a1);
// [0x835f10] (24 bytes) sub_835F10
// uint32_t *sub_835F10(uint32_t *a1);
// [0x835f30] (24 bytes) sub_835F30
// uint32_t *sub_835F30(uint32_t *a1);
// [0x835f50] (24 bytes) sub_835F50
// uint32_t *sub_835F50(uint32_t *a1);
// [0x835f70] (42 bytes) sub_835F70
// void sub_835F70(uint32_t *a1);
// [0x835fa0] (42 bytes) sub_835FA0
// void sub_835FA0(uint32_t *a1);
// [0x835fd0] (42 bytes) sub_835FD0
// void sub_835FD0(uint32_t *a1);
// [0x836000] (42 bytes) sub_836000
// void sub_836000(uint32_t *a1);
// [0x836030] (42 bytes) sub_836030
// void sub_836030(uint32_t *a1);
// [0x836060] (42 bytes) sub_836060
// void sub_836060(uint32_t *a1);
// [0x836090] (42 bytes) sub_836090
// void sub_836090(uint32_t *a1);
// [0x8360c0] (42 bytes) sub_8360C0
// void sub_8360C0(uint32_t *a1);
// [0x8360f0] (42 bytes) sub_8360F0
// void sub_8360F0(uint32_t *a1);
// [0x836120] (46 bytes) sub_836120
// void sub_836120(uint8_t *a1);
// [0x836150] (42 bytes) sub_836150
// int sub_836150(grapher::ActorBase *a1);
// [0x836180] (48 bytes) sub_836180
// int (**sub_836180(uint32_t *a1))(int);
// [0x8361b0] (115 bytes) sub_8361B0
// int (**sub_8361B0(uint32_t *a1))(int);
// [0x836230] (97 bytes) sub_836230
// grapher::HolderT<float> *sub_836230(int a1);
// [0x8362a0] (65 bytes) sub_8362A0
// uint32_t *sub_8362A0(int a1, uint32_t *a2);
// [0x8362f0] (65 bytes) sub_8362F0
// uint32_t *sub_8362F0(int a1, uint32_t *a2);
// [0x836340] (65 bytes) sub_836340
// uint32_t *sub_836340(int a1, uint32_t *a2);
// [0x836390] (65 bytes) sub_836390
// uint32_t *sub_836390(int a1, uint32_t *a2);
// [0x8363e0] (65 bytes) sub_8363E0
// uint32_t *sub_8363E0(int a1, uint32_t *a2);
// [0x836430] (109 bytes) sub_836430
// uint32_t *sub_836430(int a1);
// [0x8364a0] (66 bytes) sub_8364A0
// uint8_t *sub_8364A0(int a1, uint8_t *a2);
// [0x8364f0] (66 bytes) sub_8364F0
// uint8_t *sub_8364F0(int a1, uint8_t *a2);
// [0x836540] (66 bytes) sub_836540
// uint8_t *sub_836540(int a1, uint8_t *a2);
// [0x836590] (97 bytes) sub_836590
// grapher::HolderT<bool> *sub_836590(int a1);
// [0x836600] (66 bytes) sub_836600
// uint8_t *sub_836600(int a1, uint8_t *a2);
// [0x836650] (66 bytes) sub_836650
// uint8_t *sub_836650(int a1, uint8_t *a2);
// [0x8366a0] (69 bytes) sub_8366A0
// uint64_t *sub_8366A0(int a1, uint64_t *a2);
// [0x8366f0] (69 bytes) sub_8366F0
// uint64_t *sub_8366F0(int a1, uint64_t *a2);
// [0x836740] (97 bytes) sub_836740
// grapher::HolderT<double> *sub_836740(int a1);
// [0x8367b0] (69 bytes) sub_8367B0
// uint64_t *sub_8367B0(int a1, uint64_t *a2);
// [0x836800] (69 bytes) sub_836800
// uint64_t *sub_836800(int a1, uint64_t *a2);
// [0x836850] (69 bytes) sub_836850
// uint64_t *sub_836850(int a1, uint64_t *a2);
// [0x8368a0] (65 bytes) sub_8368A0
// uint32_t *sub_8368A0(int a1, uint32_t *a2);
// [0x8368f0] (97 bytes) sub_8368F0
// grapher::HolderT<int> *sub_8368F0(int a1);
// [0x836960] (65 bytes) sub_836960
// uint32_t *sub_836960(int a1, uint32_t *a2);
// [0x8369b0] (65 bytes) sub_8369B0
// uint32_t *sub_8369B0(int a1, uint32_t *a2);
// [0x836a00] (65 bytes) sub_836A00
// uint32_t *sub_836A00(int a1, uint32_t *a2);
// [0x836a50] (65 bytes) sub_836A50
// uint32_t *sub_836A50(int a1, uint32_t *a2);
// [0x836aa0] (40 bytes) std::vector<HudElement *,GameAllocator<HudElement *>>::~vector()
// void std::vector<HudElement *,GameAllocator<HudElement *>>::~vector( std::vector<HudElement *, GameAllocator<HudElement *>> *this);
// [0x836ad0] (70 bytes) sub_836AD0
// void sub_836AD0(uint32_t *a1);
// [0x836b20] (64 bytes) sub_836B20
// void sub_836B20(grapher::ActorBase *a1);
// [0x836b60] (75 bytes) sub_836B60
// void sub_836B60(char *a1);
// [0x836bb0] (123 bytes) sub_836BB0
// int sub_836BB0(int a1, int a2);
// [0x836c30] (123 bytes) sub_836C30
// int sub_836C30(int a1, int a2);
// [0x836cb0] (123 bytes) sub_836CB0
// int sub_836CB0(int a1, int a2);
// [0x836d30] (123 bytes) sub_836D30
// int sub_836D30(int a1, int a2);
// [0x836db0] (123 bytes) sub_836DB0
// int sub_836DB0(int a1, int a2);
// [0x836e30] (111 bytes) sub_836E30
// void sub_836E30(uint32_t *a1);
// [0x836ea0] (94 bytes) sub_836EA0
// bool sub_836EA0(int a1);
// [0x836f00] (61 bytes) sub_836F00
// bool sub_836F00(int a1);
// [0x836f40] (392 bytes) sub_836F40
// void sub_836F40(grapher::ActorBase *a1, int a2, int a3, grapher::ActorContext *obj);
// [0x8370d0] (292 bytes) std::map<unsigned int,std::vector<HudElement *,GameAllocator<HudElement *>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<HudElement *,GameAllocator<HudElement *>>>>>::operator[](unsigned int const&)
// uint32_t *std::map<unsigned int,std::vector<HudElement *,GameAllocator<HudElement *>>>::operator[]( std::map<unsigned int,std::vector<HudElement *, GameAllocator<HudElement *>>> *this, unsigned int *a2);
// [0x837200] (1319 bytes) sub_837200
// grapher::ActorContext *sub_837200( int a1, grapher::ActorVariable *a2, grapher::ActorContext *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, grapher::ActorContext *a12);
// [0x837730] (1330 bytes) sub_837730
// int sub_837730( int a1, grapher::ActorVariable *a2, grapher::ActorContext *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, ...);
// [0x837c70] (1002 bytes) sub_837C70
// uint32_t *sub_837C70( uint32_t *a1, int a2, grapher::ActorVariable *a3, grapher::ActorContext *a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
// [0x838060] (1352 bytes) sub_838060
// long double sub_838060( int a1, grapher::ActorVariable *a2, grapher::ActorContext *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, grapher::ActorContext *a12);
// [0x8385b0] (613 bytes) std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::vector<HudElement *,GameAllocator<HudElement *>>>,std::_Select1st<std::pair<unsigned int const,std::vector<HudElement *,GameAllocator<HudElement *>>>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<HudElement *,GameAllocator<HudElement *>>>>>::_M_erase(std::_Rb_tree_node<std::pair<unsigned int const,std::vector<HudElement *,GameAllocator<HudElement *>>>> *)
// void std::_Rb_tree<unsigned int,std::pair<unsigned int const,std::vector<HudElement *,GameAllocator<HudElement *>>>,std::_Select1st<std::pair<unsigned int const,std::vector<HudElement *,GameAllocator<HudElement *>>>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::vector<HudElement *,GameAllocator<HudElement *>>>>>::_M_erase( int a1, uint32_t *a2);
