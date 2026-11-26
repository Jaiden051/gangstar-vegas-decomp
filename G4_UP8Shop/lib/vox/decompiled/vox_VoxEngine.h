#pragma once
// ============================================================================
// G4_UP8Shop/lib/vox/decompiled/vox_VoxEngine.h
// Library: vox | Module: vox_VoxEngine
// Binary Address Span: 0xfd3da0 .. 0xfdaa80 (199 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xfd3da0] (141 bytes) vox::VoxEngine::VoxEngine(void)
// vox::VoxEngine *vox::VoxEngine::VoxEngine(vox::VoxEngine *this);
// [0xfd3e30] (127 bytes) vox::VoxEngine::GetVoxEngine(void)
// vox::VoxEngine *vox::VoxEngine::GetVoxEngine();
// [0xfd3eb0] (70 bytes) vox::VoxEngine::Shutdown(void)
// vox::VoxThread *vox::VoxEngine::Shutdown(vox::VoxThread **this);
// [0xfd3f00] (118 bytes) vox::VoxEngine::~VoxEngine()
// void vox::VoxEngine::~VoxEngine(vox::VoxThread **this);
// [0xfd3f80] (72 bytes) vox::VoxEngine::DestroyVoxEngine(void)
// int vox::VoxEngine::DestroyVoxEngine();
// [0xfd3fd0] (63 bytes) vox::VoxEngine::RegisterStreamType(vox::StreamInterface * (*)(void *))
// int vox::VoxEngine::RegisterStreamType(vox::VoxEngine *this, vox::StreamInterface *(*a2)(void *));
// [0xfd4010] (63 bytes) vox::VoxEngine::RegisterDecoderType(vox::DecoderInterface * (*)(void *))
// int vox::VoxEngine::RegisterDecoderType(int a1, int a2);
// [0xfd4050] (389 bytes) vox::VoxEngine::Initialize(void)
// void vox::VoxEngine::Initialize(vox::VoxEngine *this);
// [0xfd41e0] (123 bytes) vox::VoxEngine::AddPriorityBank(vox::priority_bank::CreationSettings &)
// int vox::VoxEngine::AddPriorityBank(int a1, int a2);
// [0xfd4260] (131 bytes) vox::VoxEngine::ReconfigurePriorityBank(unsigned int,vox::priority_bank::CreationSettings &)
// int vox::VoxEngine::ReconfigurePriorityBank(int a1, unsigned int a2, int a3);
// [0xfd42f0] (129 bytes) vox::VoxEngine::IsPriorityBankPresent(char const*)
// int vox::VoxEngine::IsPriorityBankPresent(vox::VoxEngine *this, char *a2);
// [0xfd4380] (126 bytes) vox::VoxEngine::GetPriorityBankIdFromName(char const*)
// int vox::VoxEngine::GetPriorityBankIdFromName(vox::VoxEngine *this, char *a2);
// [0xfd4400] (123 bytes) vox::VoxEngine::SetMicrophoneCallback(vox::RecordedAudioReceptor *)
// int vox::VoxEngine::SetMicrophoneCallback(int a1, int a2);
// [0xfd4480] (101 bytes) vox::VoxEngine::RemoveMicrophoneCallback(void)
// void vox::VoxEngine::RemoveMicrophoneCallback();
// [0xfd44f0] (147 bytes) vox::VoxEngine::RegisterAudioDataSink(vox::AudioSinkInterface::ProviderId,vox::AudioSinkInterface*,vox::AudioSinkInterface::AudioFormat &,vox::AudioSinkInterface::DataFlowEvent &)
// int vox::VoxEngine::RegisterAudioDataSink(int a1, int a2, int a3, int a4, int a5);
// [0xfd4590] (117 bytes) vox::VoxEngine::UnregisterAudioDataSink(vox::AudioSinkInterface::ProviderId,vox::AudioSinkInterface*)
// void vox::VoxEngine::UnregisterAudioDataSink(int a1, int a2, int a3);
// [0xfd4610] (101 bytes) vox::VoxEngine::SuspendEngine(void)
// void vox::VoxEngine::SuspendEngine();
// [0xfd4680] (101 bytes) vox::VoxEngine::ResumeEngine(void)
// void vox::VoxEngine::ResumeEngine();
// [0xfd46f0] (118 bytes) vox::VoxEngine::IsEngineSuspended(void)
// int vox::VoxEngine::IsEngineSuspended();
// [0xfd4770] (101 bytes) vox::VoxEngine::ResetDriver(void)
// void vox::VoxEngine::ResetDriver();
// [0xfd47e0] (81 bytes) vox::VoxEngine::Update(float)
// void vox::VoxEngine::Update();
// [0xfd4840] (81 bytes) vox::VoxEngine::UpdateSources(void)
// void vox::VoxEngine::UpdateSources();
// [0xfd48a0] (81 bytes) vox::VoxEngine::UpdateEmitters(float)
// void vox::VoxEngine::UpdateEmitters();
// [0xfd4900] (194 bytes) vox::VoxEngine::LoadDataSource(vox::data_source::CreationSettings const&)
// vox::VoxEngine *vox::VoxEngine::LoadDataSource( vox::VoxEngine *this, const vox::data_source::CreationSettings *a2);
// [0xfd49d0] (226 bytes) vox::VoxEngine::LoadDataSource(int,void *,int,void *,unsigned int)
// vox::VoxEngine *vox::VoxEngine::LoadDataSource( vox::VoxEngine *this, int a2, void *a3, int a4, void *a5, unsigned int a6);
// [0xfd4ac0] (246 bytes) vox::VoxEngine::LoadDataSource(int,void *,int,void *,char const*)
// vox::VoxEngine *vox::VoxEngine::LoadDataSource( vox::VoxEngine *this, int a2, void *a3, int a4, void *a5, const char *a6, char *a7);
// [0xfd4bc0] (194 bytes) vox::VoxEngine::LoadDataSourceAsync(vox::data_source::CreationSettings const&)
// vox::VoxEngine *vox::VoxEngine::LoadDataSourceAsync( vox::VoxEngine *this, const vox::data_source::CreationSettings *a2);
// [0xfd4c90] (234 bytes) vox::VoxEngine::LoadDataSourceAsync(int,void *,int,void *,unsigned int,vox::VoxSourceLoadingFlags)
// vox::DataHandle *vox::VoxEngine::LoadDataSourceAsync(vox::DataHandle *a1);
// [0xfd4d80] (254 bytes) vox::VoxEngine::LoadDataSourceAsync(int,void *,int,void *,char const*,vox::VoxSourceLoadingFlags)
// vox::DataHandle *vox::VoxEngine::LoadDataSourceAsync( vox::DataHandle *a1, int a2, int a3, int a4, int a5, int a6, char *a7);
// [0xfd4e80] (213 bytes) vox::VoxEngine::ConvertToRawSource(vox::DataHandle &)
// vox::VoxEngine *vox::VoxEngine::ConvertToRawSource(vox::VoxEngine *this, vox::DataHandle *a2, int a3);
// [0xfd4f60] (213 bytes) vox::VoxEngine::ConvertToRamBufferSource(vox::DataHandle &)
// vox::VoxEngine *vox::VoxEngine::ConvertToRamBufferSource(vox::VoxEngine *this, vox::DataHandle *a2, int a3);
// [0xfd5040] (136 bytes) vox::VoxEngine::SetUserData(vox::DataHandle &,vox::DataHandleUserData &)
// void vox::VoxEngine::SetUserData(int a1, int a2, int a3);
// [0xfd50d0] (170 bytes) vox::VoxEngine::GetUserData(vox::DataHandle &)
// vox::VoxEngine *vox::VoxEngine::GetUserData(vox::VoxEngine *this, vox::DataHandle *a2, int a3);
// [0xfd5180] (136 bytes) vox::VoxEngine::SetPriorityBankId(vox::DataHandle &,unsigned int)
// void vox::VoxEngine::SetPriorityBankId(vox::VoxEngine *this, vox::DataHandle *a2, unsigned int a3);
// [0xfd5210] (136 bytes) vox::VoxEngine::SetPriorityBankId(vox::EmitterHandle &,unsigned int)
// void vox::VoxEngine::SetPriorityBankId(vox::VoxEngine *this, vox::EmitterHandle *a2, unsigned int a3);
// [0xfd52a0] (136 bytes) vox::VoxEngine::SetUid(vox::DataHandle &,int)
// void vox::VoxEngine::SetUid(vox::VoxEngine *this, vox::DataHandle *a2, int a3);
// [0xfd5330] (148 bytes) vox::VoxEngine::GetUid(vox::DataHandle &)
// int vox::VoxEngine::GetUid(vox::VoxEngine *this, vox::DataHandle *a2);
// [0xfd53d0] (148 bytes) vox::VoxEngine::GetUid(vox::EmitterHandle &)
// int vox::VoxEngine::GetUid(vox::VoxEngine *this, vox::EmitterHandle *a2);
// [0xfd5470] (128 bytes) vox::VoxEngine::ReleaseDatasource(vox::DataHandle &)
// void vox::VoxEngine::ReleaseDatasource(vox::VoxEngine *this, vox::DataHandle *a2);
// [0xfd54f0] (109 bytes) vox::VoxEngine::ReleaseDatasourceGroup(unsigned int)
// void vox::VoxEngine::ReleaseDatasourceGroup(vox::VoxEngine *this, unsigned int a2);
// [0xfd5560] (133 bytes) vox::VoxEngine::ReleaseDatasourceGroup(char const*)
// void vox::VoxEngine::ReleaseDatasourceGroup(vox::VoxEngine *this, char *a2);
// [0xfd55f0] (154 bytes) vox::VoxEngine::GetEmitterHandles(vox::DataHandle &,vox::EmitterHandle *,int)
// int vox::VoxEngine::GetEmitterHandles( vox::VoxEngine *this, vox::DataHandle *a2, vox::EmitterHandle *a3, int a4);
// [0xfd5690] (131 bytes) vox::VoxEngine::GetAllDataSources(vox::DataHandle *,int)
// int vox::VoxEngine::GetAllDataSources(vox::VoxEngine *this, vox::DataHandle *a2, int a3);
// [0xfd5720] (139 bytes) vox::VoxEngine::IsReady(vox::DataHandle &)
// int vox::VoxEngine::IsReady(vox::VoxEngine *this, vox::DataHandle *a2);
// [0xfd57b0] (139 bytes) vox::VoxEngine::IsValid(vox::DataHandle &)
// int vox::VoxEngine::IsValid(vox::VoxEngine *this, vox::DataHandle *a2);
// [0xfd5840] (140 bytes) vox::VoxEngine::GetDuration(vox::DataHandle &)
// long double vox::VoxEngine::GetDuration(vox::VoxEngine *this, vox::DataHandle *a2);
// [0xfd58d0] (221 bytes) vox::VoxEngine::CreateEmitter(vox::DataHandle &,vox::emitter::CreationSettings const&)
// vox::VoxEngine *vox::VoxEngine::CreateEmitter( vox::VoxEngine *this, vox::DataHandle *a2, const vox::emitter::CreationSettings *a3);
// [0xfd59b0] (229 bytes) vox::VoxEngine::CreateEmitter(vox::DataHandle &,int,void *)
// vox::VoxEngine *vox::VoxEngine::CreateEmitter(vox::VoxEngine *this, vox::DataHandle *a2, int a3, void *a4);
// [0xfd5aa0] (221 bytes) vox::VoxEngine::CreateEmitterAsync(vox::DataHandle &,vox::emitter::CreationSettings const&)
// vox::VoxEngine *vox::VoxEngine::CreateEmitterAsync( vox::VoxEngine *this, vox::DataHandle *a2, const vox::emitter::CreationSettings *a3);
// [0xfd5b80] (229 bytes) vox::VoxEngine::CreateEmitterAsync(vox::DataHandle &,int,void *)
// vox::VoxEngine *vox::VoxEngine::CreateEmitterAsync( vox::VoxEngine *this, vox::DataHandle *a2, int a3, void *a4);
// [0xfd5c70] (136 bytes) vox::VoxEngine::SetUserData(vox::EmitterHandle &,vox::EmitterHandleUserData &)
// void vox::VoxEngine::SetUserData(int a1, int a2, int a3);
// [0xfd5d00] (170 bytes) vox::VoxEngine::GetUserData(vox::EmitterHandle &)
// vox::VoxEngine *vox::VoxEngine::GetUserData(vox::VoxEngine *this, vox::EmitterHandle *a2, int a3);
// [0xfd5db0] (128 bytes) vox::VoxEngine::ReleaseEmitter(vox::EmitterHandle &)
// void vox::VoxEngine::ReleaseEmitter(vox::VoxEngine *this, vox::EmitterHandle *a2);
// [0xfd5e30] (213 bytes) vox::VoxEngine::GetData(vox::EmitterHandle &)
// vox::VoxEngine *vox::VoxEngine::GetData(vox::VoxEngine *this, vox::EmitterHandle *a2, int a3);
// [0xfd5f10] (144 bytes) vox::VoxEngine::SetGain(vox::EmitterHandle &,float,float)
// void vox::VoxEngine::SetGain(vox::VoxEngine *this, vox::EmitterHandle *a2, float a3, float a4);
// [0xfd5fa0] (58 bytes) vox::VoxEngine::SetGain(vox::EmitterHandle &,float)
// void vox::VoxEngine::SetGain(vox::VoxEngine *this, vox::EmitterHandle *a2, float a3);
// [0xfd5fe0] (140 bytes) vox::VoxEngine::GetGain(vox::EmitterHandle &)
// long double vox::VoxEngine::GetGain(vox::VoxEngine *this, vox::EmitterHandle *a2);
// [0xfd6070] (149 bytes) vox::VoxEngine::SetLoop(vox::EmitterHandle &,bool)
// void vox::VoxEngine::SetLoop(vox::VoxEngine *this, vox::EmitterHandle *a2, bool a3);
// [0xfd6110] (144 bytes) vox::VoxEngine::SetPitch(vox::EmitterHandle &,float,float)
// void vox::VoxEngine::SetPitch(vox::VoxEngine *this, vox::EmitterHandle *a2, float a3, float a4);
// [0xfd61a0] (58 bytes) vox::VoxEngine::SetPitch(vox::EmitterHandle &,float)
// void vox::VoxEngine::SetPitch(vox::VoxEngine *this, vox::EmitterHandle *a2, float a3);
// [0xfd61e0] (140 bytes) vox::VoxEngine::GetPitch(vox::EmitterHandle &)
// long double vox::VoxEngine::GetPitch(vox::VoxEngine *this, vox::EmitterHandle *a2);
// [0xfd6270] (139 bytes) vox::VoxEngine::GetLoop(vox::EmitterHandle &)
// int vox::VoxEngine::GetLoop(vox::VoxEngine *this, vox::EmitterHandle *a2);
// [0xfd6300] (136 bytes) vox::VoxEngine::SetPriority(vox::EmitterHandle &,int)
// void vox::VoxEngine::SetPriority(vox::VoxEngine *this, vox::EmitterHandle *a2, int a3);
// [0xfd6390] (148 bytes) vox::VoxEngine::GetPriority(vox::EmitterHandle &)
// int vox::VoxEngine::GetPriority(vox::VoxEngine *this, vox::EmitterHandle *a2);
// [0xfd6430] (157 bytes) vox::VoxEngine::Play(vox::EmitterHandle &,bool,float)
// void vox::VoxEngine::Play(vox::VoxEngine *this, vox::EmitterHandle *a2, bool a3, float a4);
// [0xfd64d0] (149 bytes) vox::VoxEngine::Play(vox::EmitterHandle &,bool)
// void vox::VoxEngine::Play(vox::VoxEngine *this, vox::EmitterHandle *a2, bool a3);
// [0xfd6570] (163 bytes) vox::VoxEngine::Play(vox::EmitterHandle &,float)
// void vox::VoxEngine::Play(vox::VoxEngine *this, vox::EmitterHandle *a2, float a3);
// [0xfd6620] (128 bytes) vox::VoxEngine::Play(vox::EmitterHandle &)
// void vox::VoxEngine::Play(vox::VoxEngine *this, vox::EmitterHandle *a2);
// [0xfd66a0] (144 bytes) vox::VoxEngine::PlayInteractiveMusic(vox::EmitterHandle &,char const*,float)
// void vox::VoxEngine::PlayInteractiveMusic( vox::VoxEngine *this, vox::EmitterHandle *a2, const char *a3, float a4);
// [0xfd6730] (136 bytes) vox::VoxEngine::PlayInteractiveMusic(vox::EmitterHandle &,char const*)
// void vox::VoxEngine::PlayInteractiveMusic(vox::VoxEngine *this, vox::EmitterHandle *a2, const char *a3);
// [0xfd67c0] (136 bytes) vox::VoxEngine::Stop(vox::EmitterHandle &,float)
// void vox::VoxEngine::Stop(vox::VoxEngine *this, vox::EmitterHandle *a2, float a3);
// [0xfd6850] (128 bytes) vox::VoxEngine::Stop(vox::EmitterHandle &)
// void vox::VoxEngine::Stop(vox::VoxEngine *this, vox::EmitterHandle *a2);
// [0xfd68d0] (136 bytes) vox::VoxEngine::Pause(vox::EmitterHandle &,float)
// void vox::VoxEngine::Pause(vox::VoxEngine *this, vox::EmitterHandle *a2, float a3);
// [0xfd6960] (128 bytes) vox::VoxEngine::Pause(vox::EmitterHandle &)
// void vox::VoxEngine::Pause(vox::VoxEngine *this, vox::EmitterHandle *a2);
// [0xfd69e0] (136 bytes) vox::VoxEngine::Resume(vox::EmitterHandle &,float)
// void vox::VoxEngine::Resume(vox::VoxEngine *this, vox::EmitterHandle *a2, float a3);
// [0xfd6a70] (128 bytes) vox::VoxEngine::Resume(vox::EmitterHandle &)
// void vox::VoxEngine::Resume(vox::VoxEngine *this, vox::EmitterHandle *a2);
// [0xfd6af0] (131 bytes) vox::VoxEngine::GetAllEmitters(vox::EmitterHandle *,int)
// int vox::VoxEngine::GetAllEmitters(vox::VoxEngine *this, vox::EmitterHandle *a2, int a3);
// [0xfd6b80] (117 bytes) vox::VoxEngine::PlayGroup(unsigned int,float)
// void vox::VoxEngine::PlayGroup(vox::VoxEngine *this, unsigned int a2, float a3);
// [0xfd6c00] (141 bytes) vox::VoxEngine::PlayGroup(char const*,float)
// void vox::VoxEngine::PlayGroup(vox::VoxEngine *this, char *a2, float a3);
// [0xfd6c90] (117 bytes) vox::VoxEngine::StopGroup(unsigned int,float)
// void vox::VoxEngine::StopGroup(vox::VoxEngine *this, unsigned int a2, float a3);
// [0xfd6d10] (141 bytes) vox::VoxEngine::StopGroup(char const*,float)
// void vox::VoxEngine::StopGroup(vox::VoxEngine *this, char *a2, float a3);
// [0xfd6da0] (117 bytes) vox::VoxEngine::PauseGroup(unsigned int,float)
// void vox::VoxEngine::PauseGroup(vox::VoxEngine *this, unsigned int a2, float a3);
// [0xfd6e20] (141 bytes) vox::VoxEngine::PauseGroup(char const*,float)
// void vox::VoxEngine::PauseGroup(vox::VoxEngine *this, char *a2, float a3);
// [0xfd6eb0] (117 bytes) vox::VoxEngine::ResumeGroup(unsigned int,float)
// void vox::VoxEngine::ResumeGroup(vox::VoxEngine *this, unsigned int a2, float a3);
// [0xfd6f30] (141 bytes) vox::VoxEngine::ResumeGroup(char const*,float)
// void vox::VoxEngine::ResumeGroup(vox::VoxEngine *this, char *a2, float a3);
// [0xfd6fc0] (109 bytes) vox::VoxEngine::PlayGroup(unsigned int)
// void vox::VoxEngine::PlayGroup(vox::VoxEngine *this, unsigned int a2);
// [0xfd7030] (133 bytes) vox::VoxEngine::PlayGroup(char const*)
// void vox::VoxEngine::PlayGroup(vox::VoxEngine *this, char *a2);
// [0xfd70c0] (109 bytes) vox::VoxEngine::StopGroup(unsigned int)
// void vox::VoxEngine::StopGroup(vox::VoxEngine *this, unsigned int a2);
// [0xfd7130] (133 bytes) vox::VoxEngine::StopGroup(char const*)
// void vox::VoxEngine::StopGroup(vox::VoxEngine *this, char *a2);
// [0xfd71c0] (109 bytes) vox::VoxEngine::PauseGroup(unsigned int)
// void vox::VoxEngine::PauseGroup(vox::VoxEngine *this, unsigned int a2);
// [0xfd7230] (133 bytes) vox::VoxEngine::PauseGroup(char const*)
// void vox::VoxEngine::PauseGroup(vox::VoxEngine *this, char *a2);
// [0xfd72c0] (109 bytes) vox::VoxEngine::ResumeGroup(unsigned int)
// void vox::VoxEngine::ResumeGroup(vox::VoxEngine *this, unsigned int a2);
// [0xfd7330] (133 bytes) vox::VoxEngine::ResumeGroup(char const*)
// void vox::VoxEngine::ResumeGroup(vox::VoxEngine *this, char *a2);
// [0xfd73c0] (126 bytes) vox::VoxEngine::AddGroup(vox::group::CreationSettings &)
// int vox::VoxEngine::AddGroup(int a1, int a2);
// [0xfd7440] (131 bytes) vox::VoxEngine::ReconfigureGroup(unsigned int,vox::group::CreationSettings &)
// int vox::VoxEngine::ReconfigureGroup(int a1, int a2, int a3);
// [0xfd74d0] (152 bytes) vox::VoxEngine::ReconfigureGroup(char const*,vox::group::CreationSettings &)
// int vox::VoxEngine::ReconfigureGroup(int a1, char *a2, int a3);
// [0xfd7570] (129 bytes) vox::VoxEngine::IsGroupPresent(char const*)
// int vox::VoxEngine::IsGroupPresent(vox::VoxEngine *this, char *a2);
// [0xfd7600] (126 bytes) vox::VoxEngine::GetGroupId(char const*)
// int vox::VoxEngine::GetGroupId(vox::VoxEngine *this, char *a2);
// [0xfd7680] (139 bytes) vox::VoxEngine::GetGroupName(unsigned int,char *,int)
// int vox::VoxEngine::GetGroupName(vox::VoxEngine *this, unsigned int a2, char *a3, size_t a4);
// [0xfd7710] (136 bytes) vox::VoxEngine::SetGroup(vox::EmitterHandle &,unsigned int)
// void vox::VoxEngine::SetGroup(vox::VoxEngine *this, vox::EmitterHandle *a2, unsigned int a3);
// [0xfd77a0] (156 bytes) vox::VoxEngine::SetGroup(vox::EmitterHandle &,char const*)
// void vox::VoxEngine::SetGroup(vox::VoxEngine *this, vox::EmitterHandle *a2, char *a3);
// [0xfd7840] (138 bytes) vox::VoxEngine::GetGroup(vox::EmitterHandle &)
// int vox::VoxEngine::GetGroup(vox::VoxEngine *this, vox::EmitterHandle *a2);
// [0xfd78d0] (151 bytes) vox::VoxEngine::IsMemberOfGroupById(vox::EmitterHandle &,unsigned int,bool)
// int vox::VoxEngine::IsMemberOfGroupById(vox::VoxEngine *this, vox::EmitterHandle *a2, unsigned int a3, bool a4);
// [0xfd7970] (170 bytes) vox::VoxEngine::IsMemberOfGroupByName(vox::EmitterHandle &,char const*,bool)
// int vox::VoxEngine::IsMemberOfGroupByName(vox::VoxEngine *this, vox::EmitterHandle *a2, char *a3, bool a4);
// [0xfd7a20] (123 bytes) vox::VoxEngine::LoadGroupSnapshotConfiguration(char const*)
// int vox::VoxEngine::LoadGroupSnapshotConfiguration(vox::VoxEngine *this, const char *a2);
// [0xfd7aa0] (123 bytes) vox::VoxEngine::PushGroupSnapshot(char const*)
// int vox::VoxEngine::PushGroupSnapshot(vox::VoxEngine *this, char *a2);
// [0xfd7b20] (123 bytes) vox::VoxEngine::PopGroupSnapshot(char const*)
// int vox::VoxEngine::PopGroupSnapshot(vox::VoxEngine *this, char *a2);
// [0xfd7ba0] (101 bytes) vox::VoxEngine::ResetGroupSnapshot(void)
// void vox::VoxEngine::ResetGroupSnapshot();
// [0xfd7c10] (140 bytes) vox::VoxEngine::GetPlayCursor(vox::EmitterHandle &)
// long double vox::VoxEngine::GetPlayCursor(vox::VoxEngine *this, vox::EmitterHandle *a2);
// [0xfd7ca0] (140 bytes) vox::VoxEngine::GetTotalPlayTime(vox::EmitterHandle &)
// long double vox::VoxEngine::GetTotalPlayTime(vox::VoxEngine *this, vox::EmitterHandle *a2);
// [0xfd7d30] (136 bytes) vox::VoxEngine::SetPlayCursor(vox::EmitterHandle &,float)
// void vox::VoxEngine::SetPlayCursor(vox::VoxEngine *this, vox::EmitterHandle *a2, float a3);
// [0xfd7dc0] (139 bytes) vox::VoxEngine::GetRandomStartPositionMode(vox::EmitterHandle &)
// int vox::VoxEngine::GetRandomStartPositionMode(vox::VoxEngine *this, vox::EmitterHandle *a2);
// [0xfd7e50] (149 bytes) vox::VoxEngine::SetRandomStartPositionMode(vox::EmitterHandle &,bool)
// void vox::VoxEngine::SetRandomStartPositionMode(vox::VoxEngine *this, vox::EmitterHandle *a2, bool a3);
// [0xfd7ef0] (140 bytes) vox::VoxEngine::GetPlaybackDelay(vox::EmitterHandle &)
// long double vox::VoxEngine::GetPlaybackDelay(vox::VoxEngine *this, vox::EmitterHandle *a2);
// [0xfd7f80] (136 bytes) vox::VoxEngine::SetPlaybackDelay(vox::EmitterHandle &,float)
// void vox::VoxEngine::SetPlaybackDelay(vox::VoxEngine *this, vox::EmitterHandle *a2, float a3);
// [0xfd8010] (139 bytes) vox::VoxEngine::IsReady(vox::EmitterHandle &)
// int vox::VoxEngine::IsReady(vox::VoxEngine *this, vox::EmitterHandle *a2);
// [0xfd80a0] (139 bytes) vox::VoxEngine::IsValid(vox::EmitterHandle &)
// int vox::VoxEngine::IsValid(vox::VoxEngine *this, vox::EmitterHandle *a2);
// [0xfd8130] (139 bytes) vox::VoxEngine::IsAlive(vox::EmitterHandle &)
// int vox::VoxEngine::IsAlive(vox::VoxEngine *this, vox::EmitterHandle *a2);
// [0xfd81c0] (139 bytes) vox::VoxEngine::IsPlaying(vox::EmitterHandle &)
// int vox::VoxEngine::IsPlaying(vox::VoxEngine *this, vox::EmitterHandle *a2);
// [0xfd8250] (123 bytes) vox::VoxEngine::CanPlay(vox::emitter::CreationSettings const&)
// int vox::VoxEngine::CanPlay(vox::VoxEngine *this, const vox::emitter::CreationSettings *a2);
// [0xfd82d0] (142 bytes) vox::VoxEngine::IsDone(vox::EmitterHandle &)
// int vox::VoxEngine::IsDone(vox::VoxEngine *this, vox::EmitterHandle *a2);
// [0xfd8360] (148 bytes) vox::VoxEngine::GetPauseCount(vox::EmitterHandle &)
// int vox::VoxEngine::GetPauseCount(vox::VoxEngine *this, vox::EmitterHandle *a2);
// [0xfd8400] (138 bytes) vox::VoxEngine::GetStatus(vox::EmitterHandle &)
// int vox::VoxEngine::GetStatus(vox::VoxEngine *this, vox::EmitterHandle *a2);
// [0xfd8490] (117 bytes) vox::VoxEngine::SetMasterGain(float,float)
// void vox::VoxEngine::SetMasterGain(vox::VoxEngine *this, float a2, float a3);
// [0xfd8510] (117 bytes) vox::VoxEngine::SetMasterGain(float)
// void vox::VoxEngine::SetMasterGain(vox::VoxEngine *this, float a2);
// [0xfd8590] (113 bytes) vox::VoxEngine::GetMasterGain(void)
// long double vox::VoxEngine::GetMasterGain();
// [0xfd8610] (125 bytes) vox::VoxEngine::SetGroupVolume(unsigned int,float,float)
// void vox::VoxEngine::SetGroupVolume(vox::VoxEngine *this, unsigned int a2, float a3, float a4);
// [0xfd8690] (149 bytes) vox::VoxEngine::SetGroupVolume(char const*,float,float)
// void vox::VoxEngine::SetGroupVolume(vox::VoxEngine *this, char *a2, float a3, float a4);
// [0xfd8730] (58 bytes) vox::VoxEngine::SetGroupVolume(unsigned int,float)
// void vox::VoxEngine::SetGroupVolume(vox::VoxEngine *this, unsigned int a2, float a3);
// [0xfd8770] (58 bytes) vox::VoxEngine::SetGroupVolume(char const*,float)
// void vox::VoxEngine::SetGroupVolume(vox::VoxEngine *this, char *a2, float a3);
// [0xfd87b0] (125 bytes) vox::VoxEngine::SetGroupPitch(unsigned int,float,float)
// void vox::VoxEngine::SetGroupPitch(vox::VoxEngine *this, unsigned int a2, float a3, float a4);
// [0xfd8830] (149 bytes) vox::VoxEngine::SetGroupPitch(char const*,float,float)
// void vox::VoxEngine::SetGroupPitch(vox::VoxEngine *this, char *a2, float a3, float a4);
// [0xfd88d0] (58 bytes) vox::VoxEngine::SetGroupPitch(unsigned int,float)
// void vox::VoxEngine::SetGroupPitch(vox::VoxEngine *this, unsigned int a2, float a3);
// [0xfd8910] (58 bytes) vox::VoxEngine::SetGroupPitch(char const*,float)
// void vox::VoxEngine::SetGroupPitch(vox::VoxEngine *this, char *a2, float a3);
// [0xfd8950] (121 bytes) vox::VoxEngine::GetGroupVolume(unsigned int)
// long double vox::VoxEngine::GetGroupVolume(vox::VoxEngine *this, unsigned int a2);
// [0xfd89d0] (145 bytes) vox::VoxEngine::GetGroupVolume(char const*)
// long double vox::VoxEngine::GetGroupVolume(vox::VoxEngine *this, char *a2);
// [0xfd8a70] (121 bytes) vox::VoxEngine::GetGroupEffectiveVolume(unsigned int)
// long double vox::VoxEngine::GetGroupEffectiveVolume(vox::VoxEngine *this, unsigned int a2);
// [0xfd8af0] (145 bytes) vox::VoxEngine::GetGroupEffectiveVolume(char const*)
// long double vox::VoxEngine::GetGroupEffectiveVolume(vox::VoxEngine *this, char *a2);
// [0xfd8b90] (121 bytes) vox::VoxEngine::GetGroupPitch(unsigned int)
// long double vox::VoxEngine::GetGroupPitch(vox::VoxEngine *this, unsigned int a2);
// [0xfd8c10] (145 bytes) vox::VoxEngine::GetGroupPitch(char const*)
// long double vox::VoxEngine::GetGroupPitch(vox::VoxEngine *this, char *a2);
// [0xfd8cb0] (140 bytes) vox::VoxEngine::SetGroupEnable(unsigned int,bool,float)
// void vox::VoxEngine::SetGroupEnable(vox::VoxEngine *this, unsigned int a2, bool a3, float a4);
// [0xfd8d40] (159 bytes) vox::VoxEngine::SetGroupEnable(char const*,bool,float)
// void vox::VoxEngine::SetGroupEnable(vox::VoxEngine *this, char *a2, bool a3, float a4);
// [0xfd8de0] (59 bytes) vox::VoxEngine::SetGroupEnable(unsigned int,bool)
// void vox::VoxEngine::SetGroupEnable(vox::VoxEngine *this, unsigned int a2, bool a3);
// [0xfd8e20] (59 bytes) vox::VoxEngine::SetGroupEnable(char const*,bool)
// void vox::VoxEngine::SetGroupEnable(vox::VoxEngine *this, char *a2, bool a3);
// [0xfd8e60] (123 bytes) vox::VoxEngine::GetGroupEnable(unsigned int)
// int vox::VoxEngine::GetGroupEnable(vox::VoxEngine *this, unsigned int a2);
// [0xfd8ee0] (144 bytes) vox::VoxEngine::GetGroupEnable(char const*)
// int vox::VoxEngine::GetGroupEnable(vox::VoxEngine *this, char *a2);
// [0xfd8f70] (152 bytes) vox::VoxEngine::Set3DEmitterPosition(vox::EmitterHandle &,float,float,float)
// void vox::VoxEngine::Set3DEmitterPosition( vox::VoxEngine *this, vox::EmitterHandle *a2, float a3, float a4, float a5);
// [0xfd9010] (152 bytes) vox::VoxEngine::Set3DEmitterVelocity(vox::EmitterHandle &,float,float,float)
// void vox::VoxEngine::Set3DEmitterVelocity( vox::VoxEngine *this, vox::EmitterHandle *a2, float a3, float a4, float a5);
// [0xfd90b0] (152 bytes) vox::VoxEngine::Set3DEmitterDirection(vox::EmitterHandle &,float,float,float)
// void vox::VoxEngine::Set3DEmitterDirection( vox::VoxEngine *this, vox::EmitterHandle *a2, float a3, float a4, float a5);
// [0xfd9150] (136 bytes) vox::VoxEngine::Set3DEmitterParameters(vox::EmitterHandle &,vox::Vox3DEmitterParameters const&)
// void vox::VoxEngine::Set3DEmitterParameters( vox::VoxEngine *this, vox::EmitterHandle *a2, const vox::Vox3DEmitterParameters *a3);
// [0xfd91e0] (144 bytes) vox::VoxEngine::Set3DEmitterParameterf(vox::EmitterHandle &,int,float)
// void vox::VoxEngine::Set3DEmitterParameterf(vox::VoxEngine *this, vox::EmitterHandle *a2, int a3, float a4);
// [0xfd9270] (144 bytes) vox::VoxEngine::Set3DEmitterParameteri(vox::EmitterHandle &,int,int)
// void vox::VoxEngine::Set3DEmitterParameteri(vox::VoxEngine *this, vox::EmitterHandle *a2, int a3, int a4);
// [0xfd9300] (152 bytes) vox::VoxEngine::Get3DEmitterPosition(vox::EmitterHandle &,float &,float &,float &)
// void vox::VoxEngine::Get3DEmitterPosition( vox::VoxEngine *this, vox::EmitterHandle *a2, float *a3, float *a4, float *a5);
// [0xfd93a0] (152 bytes) vox::VoxEngine::Get3DEmitterVelocity(vox::EmitterHandle &,float &,float &,float &)
// void vox::VoxEngine::Get3DEmitterVelocity( vox::VoxEngine *this, vox::EmitterHandle *a2, float *a3, float *a4, float *a5);
// [0xfd9440] (152 bytes) vox::VoxEngine::Get3DEmitterDirection(vox::EmitterHandle &,float &,float &,float &)
// void vox::VoxEngine::Get3DEmitterDirection( vox::VoxEngine *this, vox::EmitterHandle *a2, float *a3, float *a4, float *a5);
// [0xfd94e0] (136 bytes) vox::VoxEngine::Get3DEmitterParameters(vox::EmitterHandle &,vox::Vox3DEmitterParameters &)
// void vox::VoxEngine::Get3DEmitterParameters( vox::VoxEngine *this, vox::EmitterHandle *a2, vox::Vox3DEmitterParameters *a3);
// [0xfd9570] (144 bytes) vox::VoxEngine::Get3DEmitterParameterf(vox::EmitterHandle &,int,float &)
// void vox::VoxEngine::Get3DEmitterParameterf(vox::VoxEngine *this, vox::EmitterHandle *a2, int a3, float *a4);
// [0xfd9600] (144 bytes) vox::VoxEngine::Get3DEmitterParameteri(vox::EmitterHandle &,int,int &)
// void vox::VoxEngine::Get3DEmitterParameteri(vox::VoxEngine *this, vox::EmitterHandle *a2, int a3, int *a4);
// [0xfd9690] (125 bytes) vox::VoxEngine::Set3DListenerPosition(float,float,float)
// void vox::VoxEngine::Set3DListenerPosition(vox::VoxEngine *this, float a2, float a3, float a4);
// [0xfd9710] (125 bytes) vox::VoxEngine::Set3DListenerVelocity(float,float,float)
// void vox::VoxEngine::Set3DListenerVelocity(vox::VoxEngine *this, float a2, float a3, float a4);
// [0xfd9790] (149 bytes) vox::VoxEngine::Set3DListenerOrientation(float,float,float,float,float,float)
// void vox::VoxEngine::Set3DListenerOrientation( vox::VoxEngine *this, float a2, float a3, float a4, float a5, float a6, float a7);
// [0xfd9830] (109 bytes) vox::VoxEngine::Set3DGeneralParameter(vox::Vox3DGeneralParameters const&)
// void vox::VoxEngine::Set3DGeneralParameter(vox::VoxEngine *this, const vox::Vox3DGeneralParameters *a2);
// [0xfd98a0] (117 bytes) vox::VoxEngine::Set3DGeneralParameterf(int,float)
// void vox::VoxEngine::Set3DGeneralParameterf(vox::VoxEngine *this, int a2, float a3);
// [0xfd9920] (117 bytes) vox::VoxEngine::Set3DGeneralParameteri(int,int)
// void vox::VoxEngine::Set3DGeneralParameteri(vox::VoxEngine *this, int a2, int a3);
// [0xfd99a0] (125 bytes) vox::VoxEngine::Get3DListenerPosition(float &,float &,float &)
// void vox::VoxEngine::Get3DListenerPosition(vox::VoxEngine *this, float *a2, float *a3, float *a4);
// [0xfd9a20] (125 bytes) vox::VoxEngine::Get3DListenerVelocity(float &,float &,float &)
// void vox::VoxEngine::Get3DListenerVelocity(vox::VoxEngine *this, float *a2, float *a3, float *a4);
// [0xfd9aa0] (149 bytes) vox::VoxEngine::Get3DListenerOrientation(float &,float &,float &,float &,float &,float &)
// void vox::VoxEngine::Get3DListenerOrientation( vox::VoxEngine *this, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7);
// [0xfd9b40] (109 bytes) vox::VoxEngine::Get3DGeneralParameter(vox::Vox3DGeneralParameters &)
// void vox::VoxEngine::Get3DGeneralParameter(vox::VoxEngine *this, vox::Vox3DGeneralParameters *a2);
// [0xfd9bb0] (117 bytes) vox::VoxEngine::Get3DGeneralParameterf(int,float &)
// void vox::VoxEngine::Get3DGeneralParameterf(vox::VoxEngine *this, int a2, float *a3);
// [0xfd9c30] (117 bytes) vox::VoxEngine::Get3DGeneralParameteri(int,int &)
// void vox::VoxEngine::Get3DGeneralParameteri(vox::VoxEngine *this, int a2, int *a3);
// [0xfd9cb0] (131 bytes) vox::VoxEngine::AttachDSP(char const*,vox::CustomDSP *)
// int vox::VoxEngine::AttachDSP(vox::VoxEngine *this, char *a2, vox::CustomDSP *a3);
// [0xfd9d40] (118 bytes) vox::VoxEngine::DetachDSP(char const*)
// int vox::VoxEngine::DetachDSP(vox::VoxEngine *this, char *a2);
// [0xfd9dc0] (149 bytes) vox::VoxEngine::SetRoutingVolume(char const*,char const*,vox::VoxDSPGeneralParameter::BusRoutingType,float,float,float)
// void vox::VoxEngine::SetRoutingVolume(int a1, char *a2, char *a3, char *a4, char *a5, char *a6, char *a7);
// [0xfd9e60] (82 bytes) vox::VoxEngine::SetRoutingVolume(char const*,char const*,vox::VoxDSPGeneralParameter::BusRoutingType,float,float)
// void vox::VoxEngine::SetRoutingVolume(int a1, char *a2, char *a3, char *a4, char *a5, char *a6);
// [0xfd9ec0] (144 bytes) vox::VoxEngine::SetDSPEmitterParameter(vox::EmitterHandle &,int,void const*)
// void vox::VoxEngine::SetDSPEmitterParameter(vox::VoxEngine *this, vox::EmitterHandle *a2, int a3, char *a4);
// [0xfd9f50] (136 bytes) vox::VoxEngine::SetInteractiveMusicState(vox::EmitterHandle &,char const*)
// void vox::VoxEngine::SetInteractiveMusicState(vox::VoxEngine *this, vox::EmitterHandle *a2, const char *a3);
// [0xfd9fe0] (149 bytes) vox::VoxEngine::SetKillOnResume(vox::EmitterHandle &,bool)
// void vox::VoxEngine::SetKillOnResume(vox::VoxEngine *this, vox::EmitterHandle *a2, bool a3);
// [0xfda080] (139 bytes) vox::VoxEngine::GetKillOnResume(vox::EmitterHandle &)
// int vox::VoxEngine::GetKillOnResume(vox::VoxEngine *this, vox::EmitterHandle *a2);
// [0xfda110] (144 bytes) vox::VoxEngine::RegisterForEmitterStateChangeNotification(vox::EmitterHandle &,void (*)(vox::EmitterHandle &,void *,vox::EmitterExternState),void *)
// void vox::VoxEngine::RegisterForEmitterStateChangeNotification(int a1, int a2, int a3, int a4);
// [0xfda1a0] (128 bytes) vox::VoxEngine::UnregisterForEmitterStateChangeNotification(vox::EmitterHandle &)
// void vox::VoxEngine::UnregisterForEmitterStateChangeNotification(vox::VoxEngine *this, vox::EmitterHandle *a2);
// [0xfda220] (127 bytes) vox::VoxEngine::GetOutputMode(void)
// int vox::VoxEngine::GetOutputMode();
// [0xfda2a0] (123 bytes) vox::VoxEngine::SetOutputMode(vox::VoxOutputMode)
// int vox::VoxEngine::SetOutputMode(int a1, int a2);
// [0xfda320] (101 bytes) vox::VoxEngine::PrintDebug(void)
// void vox::VoxEngine::PrintDebug();
// [0xfda390] (109 bytes) vox::VoxEngine::GetDebugInfo(vox::DebugInfo &)
// void vox::VoxEngine::GetDebugInfo(int a1, int a2);
// [0xfda400] (140 bytes) vox::VoxEngine::RegisterExternalDataGenerator(vox::MinibusDataGeneratorInterface *,char const*)
// int vox::VoxEngine::RegisterExternalDataGenerator(int a1, int a2, char *a3);
// [0xfda490] (130 bytes) vox::VoxEngine::UnregisterExternalDataGenerator(vox::MinibusDataGeneratorInterface *)
// void vox::VoxEngine::UnregisterExternalDataGenerator(int a1, int a2);
// [0xfda520] (101 bytes) vox::VoxEngine::UpdateSourcesThreaded(void)
// void vox::VoxEngine::UpdateSourcesThreaded();
// [0xfda590] (47 bytes) vox::VoxEngine::UpdateSourcesThreaded(void *,void *)
// void vox::VoxEngine::UpdateSourcesThreaded();
// [0xfda5c0] (174 bytes) vox::VoxEngine::UpdateEmittersThreaded(void)
// void vox::VoxEngine::UpdateEmittersThreaded(vox::VoxEngine *this);
// [0xfda670] (47 bytes) vox::VoxEngine::UpdateEmittersThreaded(void *,void *)
// void vox::VoxEngine::UpdateEmittersThreaded(vox::VoxEngine *this);
// [0xfda6a0] (109 bytes) vox::VoxEngine::UpdateThreaded(void)
// void vox::VoxEngine::UpdateThreaded(vox::VoxEngine *this);
// [0xfda710] (47 bytes) vox::VoxEngine::UpdateThreaded(void *,void *)
// void vox::VoxEngine::UpdateThreaded(vox::VoxEngine *this);
// [0xfda740] (127 bytes) vox::VoxEngine::DebugStreamCreate(void)
// int vox::VoxEngine::DebugStreamCreate();
// [0xfda7c0] (123 bytes) vox::VoxEngine::DebugStreamDestroy(int)
// int vox::VoxEngine::DebugStreamDestroy(vox::VoxEngine *this, int a2);
// [0xfda840] (135 bytes) vox::VoxEngine::DebugStreamGetMessageCount(int)
// int vox::VoxEngine::DebugStreamGetMessageCount(vox::VoxEngine *this, int a2);
// [0xfda8d0] (135 bytes) vox::VoxEngine::DebugStreamGetTopMessageSize(int)
// int vox::VoxEngine::DebugStreamGetTopMessageSize(vox::VoxEngine *this, int a2);
// [0xfda960] (139 bytes) vox::VoxEngine::DebugStreamGetMessage(int,char *,int)
// int vox::VoxEngine::DebugStreamGetMessage(vox::VoxEngine *this, int a2, char *a3, int a4);
// [0xfda9f0] (131 bytes) vox::VoxEngine::DebugStreamSendCommand(int,char const*)
// int vox::VoxEngine::DebugStreamSendCommand(vox::VoxEngine *this, int a2, const char *a3);
// [0xfdaa80] (113 bytes) vox::VoxEngine::GetInitTime(void)const
// long double vox::VoxEngine::GetInitTime();
