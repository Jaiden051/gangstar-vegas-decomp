#pragma once
// ============================================================================
// TU13_ActorCharacterStateAndCine.h
// Complete Translation Unit [13/41]
// Binary Range in lib/x86/libGangstar4.so: 0x838820 .. 0x84c490 (79 KB)
// Total Decompiled Functions in TU: 211 (100% coverage)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// Function Table in Translation Unit:
// [0x838820] (291 bytes) sub_838820
// int sub_838820();
// [0x838958] (1 bytes) nullsub_295
// void nullsub_295();
// [0x838960] (13 bytes) sub_838960
// int sub_838960(int a1, int a2);
// [0x838970] (50 bytes) sub_838970
// int sub_838970(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x8389b0] (42 bytes) sub_8389B0
// int ActorGameCinematicStop::~ActorGameCinematicStop(grapher::ActorBase *a1);
// [0x8389e0] (42 bytes) sub_8389E0
// int ActorGameCinematicStart::~ActorGameCinematicStart(grapher::ActorBase *a1);
// [0x838a10] (42 bytes) sub_838A10
// int ActorGameCinematicShakeCam::~ActorGameCinematicShakeCam(grapher::ActorBase *a1);
// [0x838a40] (42 bytes) sub_838A40
// int ActorGameCinematicSetPreanimatedCam::~ActorGameCinematicSetPreanimatedCam(grapher::ActorBase *a1);
// [0x838a70] (42 bytes) sub_838A70
// int ActorGameCinematicSetCam::~ActorGameCinematicSetCam(grapher::ActorBase *a1);
// [0x838aa0] (42 bytes) sub_838AA0
// int ActorGameCinematicPlayFX::~ActorGameCinematicPlayFX(grapher::ActorBase *a1);
// [0x838ad0] (42 bytes) sub_838AD0
// int ActorGameCinematicPlay::~ActorGameCinematicPlay(grapher::ActorBase *a1);
// [0x838b00] (42 bytes) sub_838B00
// int ActorGameCinematicFadeOut::~ActorGameCinematicFadeOut(grapher::ActorBase *a1);
// [0x838b30] (42 bytes) sub_838B30
// int ActorGameCinematicFadeIn::~ActorGameCinematicFadeIn(grapher::ActorBase *a1);
// [0x838b60] (42 bytes) sub_838B60
// int ActorGameCinematicDialog::~ActorGameCinematicDialog(grapher::ActorBase *a1);
// [0x838b90] (42 bytes) sub_838B90
// int ActorGameSetActionZone::~ActorGameSetActionZone(grapher::ActorBase *a1);
// [0x838bc0] (42 bytes) sub_838BC0
// int ActorGameCharacterWantedLevel::~ActorGameCharacterWantedLevel(grapher::ActorBase *a1);
// [0x838bf0] (42 bytes) sub_838BF0
// int ActorGameCharacterVehicleDoor::~ActorGameCharacterVehicleDoor(grapher::ActorBase *a1);
// [0x838c20] (42 bytes) sub_838C20
// int ActorGameCharacterUseCover::~ActorGameCharacterUseCover(grapher::ActorBase *a1);
// [0x838c50] (42 bytes) sub_838C50
// int ActorGameCharacterTurnToward::~ActorGameCharacterTurnToward(grapher::ActorBase *a1);
// [0x838c80] (42 bytes) sub_838C80
// int ActorGameCharacterToggleUseCover::~ActorGameCharacterToggleUseCover(grapher::ActorBase *a1);
// [0x838cb0] (42 bytes) sub_838CB0
// int ActorGameCharacterToggleScripted::~ActorGameCharacterToggleScripted(grapher::ActorBase *a1);
// [0x838ce0] (42 bytes) sub_838CE0
// int ActorGameCharacterToggleRubberBanding::~ActorGameCharacterToggleRubberBanding(grapher::ActorBase *a1);
// [0x838d10] (42 bytes) sub_838D10
// int ActorGameCharacterToggleFlee::~ActorGameCharacterToggleFlee(grapher::ActorBase *a1);
// [0x838d40] (42 bytes) sub_838D40
// int ActorGameCharacterToggleFight::~ActorGameCharacterToggleFight(grapher::ActorBase *a1);
// [0x838d70] (42 bytes) sub_838D70
// int ActorGameCharacterToggleAggro::~ActorGameCharacterToggleAggro(grapher::ActorBase *a1);
// [0x838da0] (42 bytes) sub_838DA0
// int ActorGameCharacterThrowOutOfVehicle::~ActorGameCharacterThrowOutOfVehicle(grapher::ActorBase *a1);
// [0x838dd0] (42 bytes) sub_838DD0
// int ActorGameCharacterThrownOutVehicle::~ActorGameCharacterThrownOutVehicle(grapher::ActorBase *a1);
// [0x838e00] (42 bytes) sub_838E00
// int ActorGameCharacterStopForObject::~ActorGameCharacterStopForObject(grapher::ActorBase *a1);
// [0x838e30] (42 bytes) sub_838E30
// int ActorGameCharacterSteerTowardDeepWater::~ActorGameCharacterSteerTowardDeepWater(grapher::ActorBase *a1);
// [0x838e60] (42 bytes) sub_838E60
// int ActorGameCharacterState::~ActorGameCharacterState(grapher::ActorBase *a1);
// [0x838e90] (42 bytes) sub_838E90
// int ActorGameCharacterSpawnAI::~ActorGameCharacterSpawnAI(grapher::ActorBase *a1);
// [0x838ec0] (42 bytes) sub_838EC0
// int ActorGameCharacterSnapToTarget::~ActorGameCharacterSnapToTarget(grapher::ActorBase *a1);
// [0x838ef0] (42 bytes) sub_838EF0
// int ActorGameCharacterShoot::~ActorGameCharacterShoot(grapher::ActorBase *a1);
// [0x838f20] (54 bytes) sub_838F20
// int sub_838F20(int a1, int a2);
// [0x838f60] (106 bytes) sub_838F60
// int sub_838F60(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x838fd0] (281 bytes) sub_838FD0
// void sub_838FD0(uint32_t *a1);
// [0x8390f0] (134 bytes) sub_8390F0
// int sub_8390F0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x839180] (310 bytes) sub_839180
// int sub_839180(grapher::ActorBase *a1);
// [0x8392c0] (234 bytes) sub_8392C0
// void sub_8392C0(grapher::ActorBase *a1, int a2, int a3, int a4);
// [0x8393b0] (187 bytes) sub_8393B0
// int *sub_8393B0(int *a1, int a2, int a3, int a4, int *a5);
// [0x839470] (64 bytes) sub_839470
// void sub_839470(grapher::ActorBase *a1);
// [0x8394b0] (64 bytes) sub_8394B0
// void sub_8394B0(grapher::ActorBase *a1);
// [0x8394f0] (64 bytes) sub_8394F0
// void sub_8394F0(grapher::ActorBase *a1);
// [0x839530] (64 bytes) sub_839530
// void sub_839530(grapher::ActorBase *a1);
// [0x839570] (64 bytes) sub_839570
// void sub_839570(grapher::ActorBase *a1);
// [0x8395b0] (64 bytes) sub_8395B0
// void sub_8395B0(grapher::ActorBase *a1);
// [0x8395f0] (64 bytes) sub_8395F0
// void sub_8395F0(grapher::ActorBase *a1);
// [0x839630] (64 bytes) sub_839630
// void sub_839630(grapher::ActorBase *a1);
// [0x839670] (64 bytes) sub_839670
// void sub_839670(grapher::ActorBase *a1);
// [0x8396b0] (64 bytes) sub_8396B0
// void sub_8396B0(grapher::ActorBase *a1);
// [0x8396f0] (64 bytes) sub_8396F0
// void sub_8396F0(grapher::ActorBase *a1);
// [0x839730] (64 bytes) sub_839730
// void sub_839730(grapher::ActorBase *a1);
// [0x839770] (64 bytes) sub_839770
// void sub_839770(grapher::ActorBase *a1);
// [0x8397b0] (64 bytes) sub_8397B0
// void sub_8397B0(grapher::ActorBase *a1);
// [0x8397f0] (64 bytes) sub_8397F0
// void sub_8397F0(grapher::ActorBase *a1);
// [0x839830] (64 bytes) sub_839830
// void sub_839830(grapher::ActorBase *a1);
// [0x839870] (64 bytes) sub_839870
// void sub_839870(grapher::ActorBase *a1);
// [0x8398b0] (64 bytes) sub_8398B0
// void sub_8398B0(grapher::ActorBase *a1);
// [0x8398f0] (64 bytes) sub_8398F0
// void sub_8398F0(grapher::ActorBase *a1);
// [0x839930] (64 bytes) sub_839930
// void sub_839930(grapher::ActorBase *a1);
// [0x839970] (64 bytes) sub_839970
// void sub_839970(grapher::ActorBase *a1);
// [0x8399b0] (64 bytes) sub_8399B0
// void sub_8399B0(grapher::ActorBase *a1);
// [0x8399f0] (64 bytes) sub_8399F0
// void sub_8399F0(grapher::ActorBase *a1);
// [0x839a30] (64 bytes) sub_839A30
// void sub_839A30(grapher::ActorBase *a1);
// [0x839a70] (64 bytes) sub_839A70
// void sub_839A70(grapher::ActorBase *a1);
// [0x839ab0] (64 bytes) sub_839AB0
// void sub_839AB0(grapher::ActorBase *a1);
// [0x839af0] (64 bytes) sub_839AF0
// void sub_839AF0(grapher::ActorBase *a1);
// [0x839b30] (64 bytes) sub_839B30
// void sub_839B30(grapher::ActorBase *a1);
// [0x839b70] (64 bytes) sub_839B70
// void sub_839B70(grapher::ActorBase *a1);
// [0x839bb0] (420 bytes) sub_839BB0
// void sub_839BB0(int a1, uint32_t *a2);
// [0x839d60] (211 bytes) sub_839D60
// int *sub_839D60(int a1, int a2);
// [0x839e40] (265 bytes) sub_839E40
// int sub_839E40(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x839f50] (163 bytes) sub_839F50
// void sub_839F50(uint32_t *a1);
// [0x83a000] (60 bytes) sub_83A000
// bool sub_83A000(int a1);
// [0x83a040] (60 bytes) sub_83A040
// bool sub_83A040(int a1);
// [0x83a080] (373 bytes) sub_83A080
// int sub_83A080(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x83a200] (330 bytes) sub_83A200
// uint8_t *sub_83A200(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x83a350] (211 bytes) sub_83A350
// int sub_83A350(grapher::ActorBase *a1, grapher::ActorContext *a2);
// [0x83a430] (211 bytes) sub_83A430
// int sub_83A430(grapher::ActorBase *a1, grapher::ActorContext *a2);
// [0x83a510] (199 bytes) sub_83A510
// int sub_83A510(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x83a5e0] (236 bytes) sub_83A5E0
// int sub_83A5E0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x83a6d0] (291 bytes) sub_83A6D0
// int sub_83A6D0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x83a800] (201 bytes) sub_83A800
// int sub_83A800(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x83a8d0] (162 bytes) sub_83A8D0
// int sub_83A8D0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x83a980] (214 bytes) sub_83A980
// int sub_83A980(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x83aa60] (210 bytes) sub_83AA60
// int sub_83AA60(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x83ab40] (201 bytes) sub_83AB40
// int sub_83AB40(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x83ac10] (308 bytes) sub_83AC10
// int sub_83AC10(int a1, uint32_t *a2, int *a3);
// [0x83ad50] (310 bytes) sub_83AD50
// int sub_83AD50(grapher::ActorBase *a1);
// [0x83ae90] (699 bytes) sub_83AE90
// int sub_83AE90(grapher::ActorBase *a1);
// [0x83b150] (310 bytes) sub_83B150
// int sub_83B150(grapher::ActorBase *a1);
// [0x83b290] (861 bytes) sub_83B290
// int sub_83B290(grapher::ActorBase *a1);
// [0x83b5f0] (729 bytes) sub_83B5F0
// int sub_83B5F0(grapher::ActorBase *a1);
// [0x83b8d0] (3193 bytes) sub_83B8D0
// int sub_83B8D0(grapher::ActorBase *a1);
// [0x83c550] (729 bytes) sub_83C550
// int sub_83C550(grapher::ActorBase *a1);
// [0x83c830] (655 bytes) sub_83C830
// int sub_83C830(grapher::ActorBase *a1);
// [0x83cac0] (655 bytes) sub_83CAC0
// int sub_83CAC0(grapher::ActorBase *a1);
// [0x83cd50] (1088 bytes) sub_83CD50
// int sub_83CD50(grapher::ActorBase *a1);
// [0x83d190] (1088 bytes) sub_83D190
// int sub_83D190(grapher::ActorBase *a1);
// [0x83d5d0] (1572 bytes) sub_83D5D0
// int sub_83D5D0(grapher::ActorBase *a1);
// [0x83dc00] (1414 bytes) sub_83DC00
// int sub_83DC00(grapher::ActorBase *a1);
// [0x83e190] (803 bytes) sub_83E190
// int sub_83E190(grapher::ActorBase *a1);
// [0x83e4c0] (1886 bytes) sub_83E4C0
// int sub_83E4C0(grapher::ActorBase *a1);
// [0x83ec20] (1180 bytes) sub_83EC20
// int sub_83EC20(grapher::ActorBase *a1);
// [0x83f0c0] (803 bytes) sub_83F0C0
// int sub_83F0C0(grapher::ActorBase *a1);
// [0x83f3f0] (1280 bytes) sub_83F3F0
// int sub_83F3F0(grapher::ActorBase *a1);
// [0x83f8f0] (803 bytes) sub_83F8F0
// int sub_83F8F0(grapher::ActorBase *a1);
// [0x83fc20] (1180 bytes) sub_83FC20
// int sub_83FC20(grapher::ActorBase *a1);
// [0x8400c0] (3279 bytes) sub_8400C0
// int sub_8400C0(grapher::ActorBase *a1);
// [0x840d90] (1015 bytes) sub_840D90
// int sub_840D90(grapher::ActorBase *a1);
// [0x841190] (1015 bytes) sub_841190
// int sub_841190(grapher::ActorBase *a1);
// [0x841590] (2072 bytes) sub_841590
// int sub_841590(grapher::ActorBase *a1);
// [0x841db0] (1683 bytes) sub_841DB0
// int sub_841DB0(grapher::ActorBase *a1);
// [0x842450] (1886 bytes) sub_842450
// int sub_842450(grapher::ActorBase *a1);
// [0x842bb0] (1534 bytes) sub_842BB0
// int sub_842BB0(grapher::ActorBase *a1);
// [0x8431b0] (1630 bytes) sub_8431B0
// int sub_8431B0(grapher::ActorBase *a1);
// [0x843810] (158 bytes) sub_843810
// int sub_843810();
// [0x8438b0] (209 bytes) sub_8438B0
// int *sub_8438B0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x843990] (193 bytes) sub_843990
// int sub_843990(grapher::ActorBase *a1, grapher::ActorContext *a2);
// [0x843a60] (774 bytes) sub_843A60
// int sub_843A60(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x843d70] (182 bytes) sub_843D70
// int sub_843D70(grapher::ActorBase *a1, grapher::ActorContext *a2);
// [0x843e30] (217 bytes) sub_843E30
// int sub_843E30(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x843f10] (446 bytes) sub_843F10
// int sub_843F10(grapher::ActorBase *a1, grapher::ActorContext *a2);
// [0x8440d0] (778 bytes) sub_8440D0
// int sub_8440D0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x8443e0] (114 bytes) sub_8443E0
// int *sub_8443E0(uint32_t *a1);
// [0x844460] (549 bytes) sub_844460
// int sub_844460();
// [0x844690] (62 bytes) sub_844690
// int sub_844690(grapher::ActorBase *a1, grapher::ActorContext *a2);
// [0x8446d0] (746 bytes) sub_8446D0
// int *sub_8446D0(int *result, uint32_t *a2, int a3, int *a4);
// [0x8449c0] (64 bytes) sub_8449C0
// int (**ActorGameCharacterShoot::ActorGameCharacterShoot(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x844a00] (64 bytes) sub_844A00
// int (**ActorGameCharacterSnapToTarget::ActorGameCharacterSnapToTarget(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x844a40] (64 bytes) sub_844A40
// int (**ActorGameCharacterState::ActorGameCharacterState(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x844a80] (606 bytes) sub_844A80
// int sub_844A80(int a1, int a2);
// [0x844ce0] (574 bytes) sub_844CE0
// int sub_844CE0(int a1, uint32_t *a2);
// [0x844f20] (197 bytes) sub_844F20
// int sub_844F20(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x844ff0] (71 bytes) sub_844FF0
// int *sub_844FF0(int a1, int a2);
// [0x845040] (64 bytes) sub_845040
// int (**ActorGameCharacterSteerTowardDeepWater::ActorGameCharacterSteerTowardDeepWater(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x845080] (64 bytes) sub_845080
// int (**ActorGameCharacterStopForObject::ActorGameCharacterStopForObject(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x8450c0] (64 bytes) sub_8450C0
// int (**ActorGameCharacterThrownOutVehicle::ActorGameCharacterThrownOutVehicle(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x845100] (64 bytes) sub_845100
// int (**ActorGameCharacterThrowOutOfVehicle::ActorGameCharacterThrowOutOfVehicle(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x845140] (64 bytes) sub_845140
// int (**ActorGameCharacterToggleAggro::ActorGameCharacterToggleAggro(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x845180] (50 bytes) sub_845180
// int sub_845180(int a1, int a2);
// [0x8451c0] (64 bytes) sub_8451C0
// int (**ActorGameCharacterToggleFight::ActorGameCharacterToggleFight(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x845200] (64 bytes) sub_845200
// int (**ActorGameCharacterToggleFlee::ActorGameCharacterToggleFlee(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x845240] (64 bytes) sub_845240
// int (**ActorGameCharacterToggleRubberBanding::ActorGameCharacterToggleRubberBanding(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x845280] (64 bytes) sub_845280
// int (**ActorGameCharacterToggleScripted::ActorGameCharacterToggleScripted(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x8452c0] (64 bytes) sub_8452C0
// int (**ActorGameCharacterToggleUseCover::ActorGameCharacterToggleUseCover(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x845300] (64 bytes) sub_845300
// int (**ActorGameCharacterTurnToward::ActorGameCharacterTurnToward(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x845340] (64 bytes) sub_845340
// int (**ActorGameCharacterUseCover::ActorGameCharacterUseCover(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x845380] (64 bytes) sub_845380
// int (**ActorGameCharacterVehicleDoor::ActorGameCharacterVehicleDoor(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x8453c0] (64 bytes) sub_8453C0
// int (**ActorGameCharacterWantedLevel::ActorGameCharacterWantedLevel(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x845400] (64 bytes) sub_845400
// int (**ActorGameSetActionZone::ActorGameSetActionZone(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x845440] (64 bytes) sub_845440
// int (**ActorGameCinematicDialog::ActorGameCinematicDialog(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x845480] (71 bytes) sub_845480
// int (**ActorGameCinematicFadeIn::ActorGameCinematicFadeIn(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x8454d0] (71 bytes) sub_8454D0
// int (**ActorGameCinematicFadeOut::ActorGameCinematicFadeOut(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x845520] (79 bytes) sub_845520
// int (**ActorGameCinematicPlay::ActorGameCinematicPlay(int a1, unsigned int a2))(int);
// [0x845570] (201 bytes) sub_845570
// int sub_845570(int a1);
// [0x845640] (64 bytes) sub_845640
// int (**ActorGameCinematicSetCam::ActorGameCinematicSetCam(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x845680] (68 bytes) sub_845680
// int (**ActorGameCinematicSetPreanimatedCam::ActorGameCinematicSetPreanimatedCam(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x8456d0] (33 bytes) sub_8456D0
// int sub_8456D0();
// [0x845700] (1009 bytes) sub_845700
// int sub_845700(const char **a1, int a2);
// [0x845b00] (64 bytes) sub_845B00
// int (**ActorGameCinematicShakeCam::ActorGameCinematicShakeCam(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x845b40] (68 bytes) sub_845B40
// int (**ActorGameCinematicStart::ActorGameCinematicStart(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x845b90] (64 bytes) sub_845B90
// int (**ActorGameCinematicStop::ActorGameCinematicStop(grapher::ActorBase *a1, unsigned int a2))(int);
// [0x845bd0] (82 bytes) sub_845BD0
// int ActorGameCinematicPlayFX::ActorGameCinematicPlayFX(grapher::ActorBase *a1, unsigned int a2);
// [0x845c30] (145 bytes) sub_845C30
// int ActorGameCharacterSpawnAI::ActorGameCharacterSpawnAI(grapher::ActorBase *a1, unsigned int a2);
// [0x845cd0] (79 bytes) sub_845CD0
// int sub_845CD0(grapher::ActorBase *a1, grapher::ActorContext *a2);
// [0x845d20] (381 bytes) sub_845D20
// uint32_t *sub_845D20(grapher::ActorBase *a1, grapher::ActorContext *a2);
// [0x845ea0] (661 bytes) sub_845EA0
// 0x845ea0 sub_845EA0
// [0x846140] (853 bytes) sub_846140
// int sub_846140( grapher::ActorContext *a1, grapher::ActorBase *a2, int a3, grapher::ActorContext *a4);
// [0x8464a0] (905 bytes) sub_8464A0
// int sub_8464A0( grapher::ActorContext *a1, grapher::ActorBase *a2, int a3, grapher::ActorContext *a4);
// [0x846830] (625 bytes) sub_846830
// int sub_846830( grapher::ActorContext *a1, grapher::ActorBase *a2, int a3, grapher::ActorContext *a4);
// [0x846ab0] (398 bytes) sub_846AB0
// int sub_846AB0(grapher::ActorBase *a1, grapher::ActorContext *a2);
// [0x846c40] (279 bytes) sub_846C40
// int sub_846C40(grapher::ActorBase *a1, grapher::ActorContext *a2);
// [0x846d60] (415 bytes) sub_846D60
// int sub_846D60(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x846f00] (453 bytes) sub_846F00
// int sub_846F00(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x8470d0] (1584 bytes) sub_8470D0
// void sub_8470D0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x847700] (733 bytes) sub_847700
// int sub_847700(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x8479e0] (403 bytes) sub_8479E0
// void sub_8479E0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x847b80] (951 bytes) sub_847B80
// int sub_847B80(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x847f40] (1293 bytes) sub_847F40
// int sub_847F40(long double a1, grapher::ActorBase *a2, int a3, grapher::ActorContext *a4);
// [0x848450] (1450 bytes) sub_848450
// int sub_848450(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x848a00] (1883 bytes) sub_848A00
// int sub_848A00(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x849160] (290 bytes) sub_849160
// uint32_t *sub_849160(uint32_t *a1, int a2, int *a3, uint32_t *a4);
// [0x849290] (207 bytes) sub_849290
// int sub_849290(int a1, int *a2);
// [0x849360] (525 bytes) sub_849360
// int *sub_849360(int *a1);
// [0x849570] (1464 bytes) sub_849570
// int sub_849570(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x849b30] (112 bytes) sub_849B30
// int sub_849B30(int a1, ...);
// [0x849ba0] (1015 bytes) sub_849BA0
// int sub_849BA0(grapher::ActorBase *a1, int a2, int a3, grapher::ActorContext *a4);
// [0x849fa0] (1280 bytes) sub_849FA0
// uint32_t *sub_849FA0(grapher::ActorBase *a1, int a2, uint32_t *a3);
// [0x84a4a0] (496 bytes) sub_84A4A0
// void sub_84A4A0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x84a690] (1073 bytes) sub_84A690
// int sub_84A690(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x84aad0] (253 bytes) sub_84AAD0
// void sub_84AAD0(grapher::ActorContext *a1, grapher::ActorBase *a2, int a3);
// [0x84abd0] (475 bytes) sub_84ABD0
// void sub_84ABD0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x84adb0] (808 bytes) sub_84ADB0
// void sub_84ADB0(int a1, int a2);
// [0x84b0e0] (284 bytes) sub_84B0E0
// uint32_t *sub_84B0E0(uint32_t *a1, int a2, int *a3, int *a4);
// [0x84b200] (215 bytes) sub_84B200
// int sub_84B200(int a1, int *a2);
// [0x84b2e0] (821 bytes) sub_84B2E0
// int sub_84B2E0(grapher::ActorBase *a1, int a2, grapher::ActorContext *a3);
// [0x84b620] (24 bytes) sub_84B620
// uint32_t *sub_84B620(uint32_t *a1);
// [0x84b640] (24 bytes) sub_84B640
// uint32_t *sub_84B640(uint32_t *a1);
// [0x84b660] (42 bytes) sub_84B660
// void sub_84B660(uint32_t *a1);
// [0x84b690] (42 bytes) sub_84B690
// void sub_84B690(uint32_t *a1);
// [0x84b6c0] (72 bytes) std::list<ActorGameCharacterState::CharacterState,GameAllocator<ActorGameCharacterState::CharacterState>>::~list()
// void std::list<ActorGameCharacterState::CharacterState,GameAllocator<ActorGameCharacterState::CharacterState>>::~list( std::list<ActorGameCharacterState::CharacterState, GameAllocator<ActorGameCharacterState::CharacterState>> *this);
// [0x84b710] (70 bytes) sub_84B710
// int sub_84B710(uint32_t **a1);
// [0x84b760] (945 bytes) sub_84B760
// const char *sub_84B760(int a1);
// [0x84bb20] (439 bytes) sub_84BB20
// int sub_84BB20(uint32_t *a1, int a2);
// [0x84bce0] (108 bytes) std::map<void *,grapher::ActorContext::ICVar *,std::less<void *>,std::allocator<std::pair<void * const,grapher::ActorContext::ICVar *>>>::operator[](void * const&)
// uint32_t *std::map<void *,grapher::ActorContext::ICVar *>::operator[]( std::map<void *,grapher::ActorContext::ICVar *> *this, void *const *a2);
// [0x84bd50] (359 bytes) sub_84BD50
// uint32_t *sub_84BD50(uint32_t *a1, uint32_t *a2);
// [0x84bec0] (178 bytes) sub_84BEC0
// uint32_t *sub_84BEC0(uint32_t *a1, uint32_t *a2);
// [0x84bf80] (169 bytes) sub_84BF80
// void sub_84BF80(uint32_t *a1, int a2);
// [0x84c030] (1067 bytes) std::_Rb_tree<int,std::pair<int const,std::list<Gangstar::Handle<LevelObject,true>,std::allocator<Gangstar::Handle<LevelObject,true>>>>,std::_Select1st<std::pair<int const,std::list<Gangstar::Handle<LevelObject,true>,std::allocator<Gangstar::Handle<LevelObject,true>>>>>,std::less<int>,std::allocator<std::pair<int const,std::list<Gangstar::Handle<LevelObject,true>,std::allocator<Gangstar::Handle<LevelObject,true>>>>>>::_M_erase(std::_Rb_tree_node<std::pair<int const,std::list<Gangstar::Handle<LevelObject,true>,std::allocator<Gangstar::Handle<LevelObject,true>>>>> *)
// void std::_Rb_tree<int,std::pair<int const,std::list<Gangstar::Handle<LevelObject,true>>>,std::_Select1st<std::pair<int const,std::list<Gangstar::Handle<LevelObject,true>>>>,std::less<int>,std::allocator<std::pair<int const,std::list<Gangstar::Handle<LevelObject,true>>>>>::_M_erase( int a1, uint32_t *a2);
// [0x84c460] (41 bytes) std::map<int,std::list<Gangstar::Handle<LevelObject,true>,std::allocator<Gangstar::Handle<LevelObject,true>>>,std::less<int>,std::allocator<std::pair<int const,std::list<Gangstar::Handle<LevelObject,true>,std::allocator<Gangstar::Handle<LevelObject,true>>>>>>::~map()
// void std::map<int,std::list<Gangstar::Handle<LevelObject,true>>>::~map( std::map<int,std::list<Gangstar::Handle<LevelObject, true>>> *this);
