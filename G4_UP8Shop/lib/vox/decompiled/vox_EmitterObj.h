#pragma once
// ============================================================================
// G4_UP8Shop/lib/vox/decompiled/vox_EmitterObj.h
// Library: vox | Module: vox_EmitterObj
// Binary Address Span: 0x10215e0 .. 0x1036440 (81 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x10215e0] (290 bytes) vox::EmitterObj::~EmitterObj()
// void vox::EmitterObj::~EmitterObj(vox::EmitterObj *this);
// [0x1021710] (56 bytes) vox::EmitterObj::~EmitterObj()
// void vox::EmitterObj::~EmitterObj(vox::EmitterObj *this);
// [0x1028500] (16 bytes) vox::EmitterObj::SetMustInitDriverSource(void)
// vox::EmitterObj *vox::EmitterObj::SetMustInitDriverSource(vox::EmitterObj *this);
// [0x1028510] (310 bytes) vox::EmitterObj::CleanUp(void)
// void vox::EmitterObj::CleanUp(vox::EmitterObj *this);
// [0x10288c0] (17 bytes) vox::EmitterObj::ForceStateChanged(bool)
// vox::EmitterObj *vox::EmitterObj::ForceStateChanged(vox::EmitterObj *this, bool a2);
// [0x10288e0] (2212 bytes) vox::EmitterObj::ProcessNativeData(float)
// void vox::EmitterObj::ProcessNativeData(vox::EmitterObj *this, float a2);
// [0x1029190] (778 bytes) vox::EmitterObj::ProcessNonNativeData(float)
// int vox::EmitterObj::ProcessNonNativeData(vox::EmitterObj *this, float a2);
// [0x10294a0] (801 bytes) vox::EmitterObj::Update3D(void)
// void vox::EmitterObj::Update3D(vox::EmitterObj *this);
// [0x10297d0] (195 bytes) vox::EmitterObj::UpdateDSP(float)
// void vox::EmitterObj::UpdateDSP(void **this, float a2);
// [0x10298a0] (719 bytes) vox::EmitterObj::Play(float)
// void vox::EmitterObj::Play(pthread_mutex_t **this, float a2);
// [0x1029b70] (519 bytes) vox::EmitterObj::Stop(float)
// pthread_mutex_t *vox::EmitterObj::Stop(pthread_mutex_t **this, float a2);
// [0x1029e60] (529 bytes) vox::EmitterObj::Pause(float)
// pthread_mutex_t *vox::EmitterObj::Pause(pthread_mutex_t **this, float a2);
// [0x102a120] (247 bytes) vox::EmitterObj::Resume(float)
// pthread_mutex_t *vox::EmitterObj::Resume(pthread_mutex_t **this, float a2);
// [0x102a2c0] (87 bytes) vox::EmitterObj::RegisterStateChangedCallback(void (*)(vox::EmitterHandle &,void *,vox::EmitterExternState),void *)
// pthread_mutex_t *vox::EmitterObj::RegisterStateChangedCallback(int a1, int a2, int a3);
// [0x102a3a0] (87 bytes) vox::EmitterObj::UnregisterStateChangedCallback(void)
// pthread_mutex_t *vox::EmitterObj::UnregisterStateChangedCallback(pthread_mutex_t **this);
// [0x102a470] (233 bytes) vox::EmitterObj::NeedToSendStateChangedCallback(void (*&)(vox::EmitterHandle &,void *,vox::EmitterExternState),void *&,vox::EmitterExternState&)
// int vox::EmitterObj::NeedToSendStateChangedCallback(int a1, uint32_t *a2, uint32_t *a3, uint32_t *a4);
// [0x102a560] (87 bytes) vox::EmitterObj::SetAutoKillAfterDone(bool)
// pthread_mutex_t *vox::EmitterObj::SetAutoKillAfterDone(pthread_mutex_t **this, bool a2);
// [0x102a640] (74 bytes) vox::EmitterObj::NeedToDie(void)
// pthread_mutex_t *vox::EmitterObj::NeedToDie(pthread_mutex_t **this);
// [0x102a700] (76 bytes) vox::EmitterObj::GetKillOnResume(void)
// int vox::EmitterObj::GetKillOnResume(pthread_mutex_t **this);
// [0x102a9d0] (87 bytes) vox::EmitterObj::SetKillOnResume(bool)
// pthread_mutex_t *vox::EmitterObj::SetKillOnResume(pthread_mutex_t **this, bool a2);
// [0x102aab0] (81 bytes) vox::EmitterObj::GetFadeOnPlay(void)
// long double vox::EmitterObj::GetFadeOnPlay(pthread_mutex_t **this);
// [0x102abd0] (81 bytes) vox::EmitterObj::GetFadeOnStop(void)
// long double vox::EmitterObj::GetFadeOnStop(pthread_mutex_t **this);
// [0x102adb0] (15 bytes) vox::EmitterObj::GetDefaultInteractiveMusicState(void)const
// int vox::EmitterObj::GetDefaultInteractiveMusicState(vox::EmitterObj *this);
// [0x102adc0] (72 bytes) vox::EmitterObj::GetGroup(void)
// int vox::EmitterObj::GetGroup(pthread_mutex_t **this);
// [0x102ae80] (74 bytes) vox::EmitterObj::SetGroup(unsigned int)
// pthread_mutex_t *vox::EmitterObj::SetGroup(pthread_mutex_t **this, pthread_mutex_t *a2);
// [0x102af60] (154 bytes) vox::EmitterObj::IsMemberOfGroup(unsigned int,bool)
// int vox::EmitterObj::IsMemberOfGroup( long double a1, vox::EmitterObj *this, unsigned int a3, bool a4);
// [0x102b090] (119 bytes) vox::EmitterObj::IsChild(unsigned int)
// int vox::EmitterObj::IsChild(long double a1, vox::EmitterObj *this, unsigned int a3);
// [0x102ba70] (78 bytes) vox::EmitterObj::GetGain(void)
// long double vox::EmitterObj::GetGain(pthread_mutex_t **this);
// [0x102bb30] (75 bytes) vox::EmitterObj::GetUid(void)
// int vox::EmitterObj::GetUid(pthread_mutex_t **this);
// [0x102bbf0] (223 bytes) vox::EmitterObj::SetGain(float,float)
// pthread_mutex_t *vox::EmitterObj::SetGain(pthread_mutex_t **this, float a2, float a3);
// [0x102bd50] (14 bytes) vox::EmitterObj::SetGainModifier(float)
// vox::EmitterObj *vox::EmitterObj::SetGainModifier(vox::EmitterObj *this, float a2);
// [0x102bd60] (14 bytes) vox::EmitterObj::SetPitchModifier(float)
// vox::EmitterObj *vox::EmitterObj::SetPitchModifier(vox::EmitterObj *this, float a2);
// [0x102bd70] (581 bytes) vox::EmitterObj::GetAttenuation(void)
// long double vox::EmitterObj::GetAttenuation(long double a1, vox::EmitterObj *this);
// [0x102bfc0] (81 bytes) vox::EmitterObj::GetPitch(void)
// long double vox::EmitterObj::GetPitch(pthread_mutex_t **this);
// [0x102c090] (266 bytes) vox::EmitterObj::SetPitch(float,float)
// pthread_mutex_t *vox::EmitterObj::SetPitch(pthread_mutex_t **this, float a2, float a3);
// [0x102c220] (75 bytes) vox::EmitterObj::GetState(void)
// int vox::EmitterObj::GetState(pthread_mutex_t **this);
// [0x102c270] (77 bytes) vox::EmitterObj::SetState(int)
// pthread_mutex_t *vox::EmitterObj::SetState(pthread_mutex_t **this, pthread_mutex_t *a2);
// [0x102c2c0] (76 bytes) vox::EmitterObj::GetLoop(void)
// int vox::EmitterObj::GetLoop(pthread_mutex_t **this);
// [0x102c380] (87 bytes) vox::EmitterObj::SetLoop(bool)
// pthread_mutex_t *vox::EmitterObj::SetLoop(pthread_mutex_t **this, bool a2);
// [0x102c460] (74 bytes) vox::EmitterObj::Reset(void)
// pthread_mutex_t *vox::EmitterObj::Reset(pthread_mutex_t **this);
// [0x102c4b0] (14 bytes) vox::EmitterObj::IsReady(void)
// int vox::EmitterObj::IsReady(vox::EmitterObj *this);
// [0x102c530] (103 bytes) vox::EmitterObj::IsPlaying(void)
// int vox::EmitterObj::IsPlaying(pthread_mutex_t **this);
// [0x102cb90] (51 bytes) vox::EmitterObj::_IsDone(void)
// bool vox::EmitterObj::_IsDone(vox::EmitterObj *this);
// [0x102cbd0] (84 bytes) vox::EmitterObj::IsDone(void)
// bool vox::EmitterObj::IsDone(pthread_mutex_t **this);
// [0x102cca0] (127 bytes) vox::EmitterObj::ShouldDie(void)
// int vox::EmitterObj::ShouldDie(pthread_mutex_t **this);
// [0x102cd20] (37 bytes) vox::EmitterObj::IsAlive(void)
// int vox::EmitterObj::IsAlive(pthread_mutex_t **this);
// [0x102cdc0] (153 bytes) vox::EmitterObj::GetStatus(void)
// int vox::EmitterObj::GetStatus(pthread_mutex_t **this);
// [0x102ced0] (75 bytes) vox::EmitterObj::GetPauseCount(void)
// int vox::EmitterObj::GetPauseCount(pthread_mutex_t **this);
// [0x102cf90] (162 bytes) vox::EmitterObj::GetPlayCursor(void)
// long double vox::EmitterObj::GetPlayCursor(pthread_mutex_t **this);
// [0x102d0b0] (146 bytes) vox::EmitterObj::GetTotalPlayTime(void)
// long double vox::EmitterObj::GetTotalPlayTime(pthread_mutex_t **this);
// [0x102d1c0] (110 bytes) vox::EmitterObj::_SetPlayCursor(float)
// void vox::EmitterObj::_SetPlayCursor(vox::EmitterObj *this, float a2);
// [0x102d230] (136 bytes) vox::EmitterObj::SetPlayCursor(float)
// void vox::EmitterObj::SetPlayCursor(pthread_mutex_t **this, float a2);
// [0x102d330] (129 bytes) vox::EmitterObj::GetRandomStartPositionMode(void)
// int vox::EmitterObj::GetRandomStartPositionMode(pthread_mutex_t **this);
// [0x102d430] (138 bytes) vox::EmitterObj::SetRandomStartPositionMode(bool)
// void vox::EmitterObj::SetRandomStartPositionMode(pthread_mutex_t **this, bool a2);
// [0x102d540] (134 bytes) vox::EmitterObj::GetPlaybackDelay(void)
// long double vox::EmitterObj::GetPlaybackDelay(pthread_mutex_t **this);
// [0x102d640] (130 bytes) vox::EmitterObj::SetPlaybackDelay(float)
// void vox::EmitterObj::SetPlaybackDelay(pthread_mutex_t **this, float a2);
// [0x102d740] (402 bytes) vox::EmitterObj::_ResetInteractiveMusicState(void)
// void vox::EmitterObj::_ResetInteractiveMusicState(vox::EmitterObj *this);
// [0x102d8e0] (120 bytes) vox::EmitterObj::_GetRandomStartPosition(void)
// long double vox::EmitterObj::_GetRandomStartPosition(vox::EmitterObj *this);
// [0x102d960] (312 bytes) vox::EmitterObj::_SkipToPosition(void)
// void vox::EmitterObj::_SkipToPosition(vox::EmitterObj *this);
// [0x102daa0] (98 bytes) vox::EmitterObj::SetUserData(vox::EmitterHandleUserData &)
// pthread_mutex_t *vox::EmitterObj::SetUserData(int a1, int a2);
// [0x102db80] (111 bytes) vox::EmitterObj::GetUserData(void)
// vox::EmitterObj *vox::EmitterObj::GetUserData(vox::EmitterObj *this, int a2);
// [0x102dc90] (92 bytes) vox::EmitterObj::Set3DParameteri(int,int)
// pthread_mutex_t *vox::EmitterObj::Set3DParameteri(pthread_mutex_t **this, int a2, pthread_mutex_t *a3);
// [0x102dd70] (250 bytes) vox::EmitterObj::Set3DParameterf(int,float)
// pthread_mutex_t *vox::EmitterObj::Set3DParameterf(pthread_mutex_t **this, int a2, float a3);
// [0x102e000] (270 bytes) vox::EmitterObj::Set3DParameter3f(int,float,float,float)
// pthread_mutex_t *vox::EmitterObj::Set3DParameter3f( pthread_mutex_t **this, int a2, float a3, float a4, float a5);
// [0x102e2c0] (230 bytes) vox::EmitterObj::Set3DParameterfv(int,vox::VoxVector3f const&)
// pthread_mutex_t *vox::EmitterObj::Set3DParameterfv(int a1, int a2, uint32_t *a3);
// [0x102e3b0] (367 bytes) vox::EmitterObj::SetDefaultParameters(void)
// void vox::EmitterObj::SetDefaultParameters(pthread_mutex_t **this);
// [0x102e520] (1023 bytes) vox::EmitterObj::EmitterObj(long long,int,int,vox::DriverSourceParam &,vox::DriverSourceInterface *,vox::DataObj *)
// void vox::EmitterObj::EmitterObj( vox::EmitterObj *this, int64_t a2, int a3, int a4, vox::DriverSourceParam *a5, vox::DriverSourceInterface *a6, vox::DataObj *a7);
// [0x102e920] (3082 bytes) vox::EmitterObj::EmitterObj(long long,int,int,vox::DriverSourceParam &,vox::DriverSourceInterface *,vox::DecoderCursorInterface *,vox::DataObj *)
// 0x102e920 vox::EmitterObj::EmitterObj(long long,int,int,vox::DriverSourceParam &,vox::DriverSourceInterface *,vox::DecoderCursorInterface *,vox::DataObj *)
// [0x102f530] (87 bytes) vox::EmitterObj::Get3DParameteri(int,int &)
// pthread_mutex_t *vox::EmitterObj::Get3DParameteri(pthread_mutex_t **this, int a2, int *a3);
// [0x102f610] (198 bytes) vox::EmitterObj::Get3DParameterf(int,float &)
// pthread_mutex_t *vox::EmitterObj::Get3DParameterf(pthread_mutex_t **this, int a2, float *a3);
// [0x102f870] (217 bytes) vox::EmitterObj::Get3DParameter3f(int,float &,float &,float &)
// pthread_mutex_t *vox::EmitterObj::Get3DParameter3f( pthread_mutex_t **this, int a2, float *a3, float *a4, float *a5);
// [0x102fb00] (204 bytes) vox::EmitterObj::Get3DParameterfv(int,vox::VoxVector3f &)
// pthread_mutex_t *vox::EmitterObj::Get3DParameterfv(int a1, int a2, uint32_t *a3);
// [0x102fbd0] (279 bytes) vox::EmitterObj::SetDSPParameter(int,void const*)
// void vox::EmitterObj::SetDSPParameter(vox::EmitterObj *this, int a2, char *s);
// [0x102fd70] (1232 bytes) vox::EmitterObj::Parametrize(vox::emitter::CreationSettings const&)
// pthread_mutex_t *vox::EmitterObj::Parametrize(vox::EmitterObj *this, const vox::emitter::CreationSettings *a2);
// [0x1030240] (1051 bytes) vox::EmitterObj::EmitterObj(long long,vox::emitter::CreationSettings const&,vox::DriverSourceInterface *,vox::DataObj *)
// void vox::EmitterObj::EmitterObj( vox::EmitterObj *this, int64_t a2, const vox::emitter::CreationSettings *a3, vox::DriverSourceInterface *a4, vox::DataObj *a5);
// [0x1030a10] (3380 bytes) vox::EmitterObj::EmitterObj(long long,vox::emitter::CreationSettings const&,vox::DriverSourceInterface *,vox::DecoderCursorInterface *,vox::DataObj *)
// 0x1030a10 vox::EmitterObj::EmitterObj(long long,vox::emitter::CreationSettings const&,vox::DriverSourceInterface *,vox::DecoderCursorInterface *,vox::DataObj *)
// [0x1031bb0] (7048 bytes) vox::EmitterObj::Serialize(vox::VoxJsonLinearSerializer &,unsigned long long,char const*,char const*)
// int vox::EmitterObj::Serialize(vox::EmitterObj *a1, uint32_t *a2, int a3, int a4, char *a5, char *a6);
// [0x1034bd0] (85 bytes) vox::EmitterObj::PrintDebug(void)
// pthread_mutex_t *vox::EmitterObj::PrintDebug(pthread_mutex_t **this);
// [0x10356f0] (1658 bytes) vox::EmitterObj::LoadAsync(void)
// int vox::EmitterObj::LoadAsync(vox::EmitterObj *this);
// [0x1035d70] (1735 bytes) vox::EmitterObj::Update(float)
// void vox::EmitterObj::Update(pthread_mutex_t **this, float a2);
// [0x1036440] (1227 bytes) vox::EmitterObj::SetInteractiveMusicState(char const*,bool,bool)
// void vox::EmitterObj::SetInteractiveMusicState(vox::EmitterObj *this, char *s, bool a3, bool a4);
