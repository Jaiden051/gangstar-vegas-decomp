#pragma once
// ============================================================================
// G4_UP8Shop/lib/vox/decompiled/vox_VoxEngineInternal.h
// Library: vox | Module: vox_VoxEngineInternal
// Binary Address Span: 0x1021750 .. 0x1037cb0 (189 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1021750] (57 bytes) vox::VoxEngineInternal::AddPriorityBank(vox::priority_bank::CreationSettings &)
// int vox::VoxEngineInternal::AddPriorityBank(int a1, int a2);
// [0x1021790] (62 bytes) vox::VoxEngineInternal::ReconfigurePriorityBank(unsigned int,vox::priority_bank::CreationSettings &)
// int vox::VoxEngineInternal::ReconfigurePriorityBank(int a1, unsigned int a2, int a3);
// [0x10217d0] (57 bytes) vox::VoxEngineInternal::GetPriorityBankId(char const*)
// int vox::VoxEngineInternal::GetPriorityBankId(vox::PriorityBankManager **this, char *a2);
// [0x1021810] (69 bytes) vox::VoxEngineInternal::Initialize(void)
// vox::FileSystemStdio *vox::VoxEngineInternal::Initialize(vox::VoxEngineInternal *this);
// [0x1021860] (113 bytes) vox::VoxEngineInternal::SetMicrophoneCallback(vox::RecordedAudioReceptor *)
// int vox::VoxEngineInternal::SetMicrophoneCallback(int a1, int a2);
// [0x10218e0] (94 bytes) vox::VoxEngineInternal::RemoveMicrophoneCallback(void)
// pthread_mutex_t *vox::VoxEngineInternal::RemoveMicrophoneCallback(pthread_mutex_t **this);
// [0x1021940] (9 bytes) vox::VoxEngineInternal::RegisterAudioDataSink(vox::AudioSinkInterface::ProviderId,vox::AudioSinkInterface*,vox::AudioSinkInterface::AudioFormat &,vox::AudioSinkInterface::DataFlowEvent &)
// int vox::VoxEngineInternal::RegisterAudioDataSink();
// [0x1021950] (9 bytes) vox::VoxEngineInternal::UnregisterAudioDataSink(vox::AudioSinkInterface::ProviderId,vox::AudioSinkInterface*)
// void vox::VoxEngineInternal::UnregisterAudioDataSink();
// [0x1021960] (123 bytes) vox::VoxEngineInternal::Suspend(void)
// void vox::VoxEngineInternal::Suspend(pthread_mutex_t **this);
// [0x10219e0] (85 bytes) vox::VoxEngineInternal::IsSuspended(void)
// int vox::VoxEngineInternal::IsSuspended(pthread_mutex_t **this);
// [0x1021a40] (88 bytes) vox::VoxEngineInternal::ResetDriver(void)
// pthread_mutex_t *vox::VoxEngineInternal::ResetDriver(pthread_mutex_t **this);
// [0x1021aa0] (46 bytes) vox::VoxEngineInternal::RegisterStreamType(vox::StreamInterface * (*)(void *))
// int vox::VoxEngineInternal::RegisterStreamType( vox::VoxEngineInternal *this, vox::StreamInterface *(*a2)(void *));
// [0x1021ad0] (46 bytes) vox::VoxEngineInternal::RegisterDecoderType(vox::DecoderInterface * (*)(void *))
// int vox::VoxEngineInternal::RegisterDecoderType(int a1, int a2);
// [0x1021b00] (103 bytes) vox::VoxEngineInternal::DebugStreamCreate(void)
// int vox::VoxEngineInternal::DebugStreamCreate(vox::VoxEngineInternal *this);
// [0x1021b70] (107 bytes) vox::VoxEngineInternal::DebugStreamDestroy(int)
// int vox::VoxEngineInternal::DebugStreamDestroy(vox::VoxEngineInternal *this, int a2);
// [0x1021be0] (137 bytes) vox::VoxEngineInternal::DebugStreamGetMessageCount(int)
// int vox::VoxEngineInternal::DebugStreamGetMessageCount(vox::VoxEngineInternal *this, int a2);
// [0x1021c70] (159 bytes) vox::VoxEngineInternal::DebugStreamGetTopMessageSize(int)
// int vox::VoxEngineInternal::DebugStreamGetTopMessageSize(vox::VoxEngineInternal *this, int a2);
// [0x1021d10] (259 bytes) vox::VoxEngineInternal::DebugStreamGetMessage(int,char *,int)
// int vox::VoxEngineInternal::DebugStreamGetMessage(vox::VoxEngineInternal *this, int a2, char *dest, int a4);
// [0x1021e20] (310 bytes) vox::VoxEngineInternal::DebugStreamSendCommand(int,char const*)
// int vox::VoxEngineInternal::DebugStreamSendCommand(vox::VoxEngineInternal *this, int a2, char *a3);
// [0x1021f60] (15 bytes) vox::VoxEngineInternal::GetInitTime(void)const
// long double vox::VoxEngineInternal::GetInitTime(vox::VoxEngineInternal *this);
// [0x1021f70] (1662 bytes) vox::VoxEngineInternal::Update3D(void)
// int vox::VoxEngineInternal::Update3D(vox::VoxEngineInternal *this);
// [0x10225f0] (197 bytes) vox::VoxEngineInternal::UpdateDSP(float)
// char *vox::VoxEngineInternal::UpdateDSP(vox::VoxEngineInternal *this);
// [0x10226c0] (102 bytes) vox::VoxEngineInternal::LoadGroupSnapshotConfiguration(char const*)
// int vox::VoxEngineInternal::LoadGroupSnapshotConfiguration(pthread_mutex_t **this, const char *a2);
// [0x1022730] (102 bytes) vox::VoxEngineInternal::PushGroupSnapshot(char const*)
// int vox::VoxEngineInternal::PushGroupSnapshot(pthread_mutex_t **this, char *a2);
// [0x10227a0] (102 bytes) vox::VoxEngineInternal::PopGroupSnapshot(char const*)
// int vox::VoxEngineInternal::PopGroupSnapshot(pthread_mutex_t **this, char *a2);
// [0x1022810] (98 bytes) vox::VoxEngineInternal::ResetGroupSnapshot(void)
// pthread_mutex_t *vox::VoxEngineInternal::ResetGroupSnapshot(vox::VoxEngineInternal *this);
// [0x1022880] (132 bytes) vox::VoxEngineInternal::SetMasterGain(float,float)
// pthread_mutex_t *vox::VoxEngineInternal::SetMasterGain(pthread_mutex_t **this, float a2, float a3);
// [0x1022910] (108 bytes) vox::VoxEngineInternal::GetMasterGain(void)
// long double vox::VoxEngineInternal::GetMasterGain(pthread_mutex_t **this);
// [0x1022980] (173 bytes) vox::VoxEngineInternal::SetDataSourceToUpdate(vox::DataObj *)
// void vox::VoxEngineInternal::SetDataSourceToUpdate(pthread_mutex_t **this, vox::DataObj *a2);
// [0x1022a30] (99 bytes) vox::VoxEngineInternal::GetCurrentDataSourceToUpdate(void)
// int vox::VoxEngineInternal::GetCurrentDataSourceToUpdate(pthread_mutex_t **this);
// [0x1022aa0] (75 bytes) vox::VoxEngineInternal::GetDataSourcesToUpdateSize(void)
// int vox::VoxEngineInternal::GetDataSourcesToUpdateSize(pthread_mutex_t **this);
// [0x1022af0] (105 bytes) vox::VoxEngineInternal::AddGroup(vox::group::CreationSettings &)
// int vox::VoxEngineInternal::AddGroup(int a1, int a2);
// [0x1022b60] (110 bytes) vox::VoxEngineInternal::ReconfigureGroup(unsigned int,vox::group::CreationSettings &)
// int vox::VoxEngineInternal::ReconfigureGroup(int a1, int a2, int a3);
// [0x1022bd0] (105 bytes) vox::VoxEngineInternal::GetGroupId(char const*)
// int vox::VoxEngineInternal::GetGroupId(pthread_mutex_t **this, char *a2);
// [0x1022c40] (118 bytes) vox::VoxEngineInternal::GetGroupName(unsigned int,char *,int)
// int vox::VoxEngineInternal::GetGroupName(pthread_mutex_t **this, unsigned int a2, char *dest, size_t a4);
// [0x1022cc0] (102 bytes) vox::VoxEngineInternal::IsGroupValid(unsigned int)
// int vox::VoxEngineInternal::IsGroupValid(pthread_mutex_t **this, unsigned int a2);
// [0x1022d30] (132 bytes) vox::VoxEngineInternal::SetGroupVolume(unsigned int,float,float)
// pthread_mutex_t *vox::VoxEngineInternal::SetGroupVolume( pthread_mutex_t **this, unsigned int a2, float a3, float a4);
// [0x1022dc0] (108 bytes) vox::VoxEngineInternal::GetGroupVolume(unsigned int)
// long double vox::VoxEngineInternal::GetGroupVolume(vox::VoxEngineInternal *this, unsigned int a2);
// [0x1022e30] (108 bytes) vox::VoxEngineInternal::GetGroupEffectiveVolume(unsigned int)
// long double vox::VoxEngineInternal::GetGroupEffectiveVolume(vox::VoxEngineInternal *this, unsigned int a2);
// [0x1022ea0] (132 bytes) vox::VoxEngineInternal::SetGroupPitch(unsigned int,float,float)
// pthread_mutex_t *vox::VoxEngineInternal::SetGroupPitch( pthread_mutex_t **this, unsigned int a2, float a3, float a4);
// [0x1022f30] (108 bytes) vox::VoxEngineInternal::GetGroupPitch(unsigned int)
// long double vox::VoxEngineInternal::GetGroupPitch(vox::VoxEngineInternal *this, unsigned int a2);
// [0x1022fa0] (127 bytes) vox::VoxEngineInternal::SetGroupEnable(unsigned int,bool,float)
// pthread_mutex_t *vox::VoxEngineInternal::SetGroupEnable( pthread_mutex_t **this, unsigned int a2, bool a3, float a4);
// [0x1023020] (102 bytes) vox::VoxEngineInternal::GetGroupEnable(unsigned int)
// int vox::VoxEngineInternal::GetGroupEnable(pthread_mutex_t **this, unsigned int a2);
// [0x1023090] (107 bytes) vox::VoxEngineInternal::Set3DListenerPosition(float,float,float)
// pthread_mutex_t *vox::VoxEngineInternal::Set3DListenerPosition( pthread_mutex_t **this, float a2, float a3, float a4);
// [0x1023100] (107 bytes) vox::VoxEngineInternal::Set3DListenerVelocity(float,float,float)
// pthread_mutex_t *vox::VoxEngineInternal::Set3DListenerVelocity( pthread_mutex_t **this, float a2, float a3, float a4);
// [0x1023170] (137 bytes) vox::VoxEngineInternal::Set3DListenerOrientation(float,float,float,float,float,float)
// pthread_mutex_t *vox::VoxEngineInternal::Set3DListenerOrientation( pthread_mutex_t **this, float a2, float a3, float a4, float a5, float a6, float a7);
// [0x1023200] (257 bytes) vox::VoxEngineInternal::Set3DGeneralParameter(vox::Vox3DGeneralParameters const&)
// pthread_mutex_t *vox::VoxEngineInternal::Set3DGeneralParameter( pthread_mutex_t **this, const vox::Vox3DGeneralParameters *a2);
// [0x1023310] (698 bytes) vox::VoxEngineInternal::Set3DGeneralParameterf(int,float)
// pthread_mutex_t *vox::VoxEngineInternal::Set3DGeneralParameterf(pthread_mutex_t **this, int a2, float a3);
// [0x10235d0] (131 bytes) vox::VoxEngineInternal::Set3DGeneralParameteri(int,int)
// pthread_mutex_t *vox::VoxEngineInternal::Set3DGeneralParameteri( pthread_mutex_t **this, int a2, pthread_mutex_t *a3);
// [0x1023660] (9 bytes) vox::VoxEngineInternal::_SetDefault3DParameters(void)
// void vox::VoxEngineInternal::_SetDefault3DParameters();
// [0x1023670] (1295 bytes) vox::VoxEngineInternal::VoxEngineInternal(void)
// vox::VoxEngineInternal *vox::VoxEngineInternal::VoxEngineInternal( long double a1, vox::VoxEngineInternal *this);
// [0x1023b80] (127 bytes) vox::VoxEngineInternal::GetVoxEngineInternal(void)
// vox::VoxEngineInternal *vox::VoxEngineInternal::GetVoxEngineInternal(long double a1);
// [0x1023c00] (106 bytes) vox::VoxEngineInternal::Get3DListenerPosition(float &,float &,float &)
// pthread_mutex_t *vox::VoxEngineInternal::Get3DListenerPosition( pthread_mutex_t **this, float *a2, float *a3, float *a4);
// [0x1023c70] (106 bytes) vox::VoxEngineInternal::Get3DListenerVelocity(float &,float &,float &)
// pthread_mutex_t *vox::VoxEngineInternal::Get3DListenerVelocity( pthread_mutex_t **this, float *a2, float *a3, float *a4);
// [0x1023ce0] (142 bytes) vox::VoxEngineInternal::Get3DListenerOrientation(float &,float &,float &,float &,float &,float &)
// pthread_mutex_t *vox::VoxEngineInternal::Get3DListenerOrientation( pthread_mutex_t **this, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7);
// [0x1023d70] (95 bytes) vox::VoxEngineInternal::Get3DGeneralParameter(vox::Vox3DGeneralParameters &)
// pthread_mutex_t *vox::VoxEngineInternal::Get3DGeneralParameter( pthread_mutex_t **this, vox::Vox3DGeneralParameters *a2);
// [0x1023dd0] (521 bytes) vox::VoxEngineInternal::Get3DGeneralParameterf(int,float &)
// pthread_mutex_t *vox::VoxEngineInternal::Get3DGeneralParameterf(pthread_mutex_t **this, int a2, float *a3);
// [0x1023fe0] (89 bytes) vox::VoxEngineInternal::Get3DGeneralParameteri(int,int &)
// pthread_mutex_t *vox::VoxEngineInternal::Get3DGeneralParameteri(pthread_mutex_t **this, int a2, int *a3);
// [0x1024040] (540 bytes) vox::VoxEngineInternal::_GetEmitterAttenuation(vox::emitter::CreationSettings const&)
// long double vox::VoxEngineInternal::_GetEmitterAttenuation( pthread_mutex_t **this, const vox::emitter::CreationSettings *a2);
// [0x1024260] (108 bytes) vox::VoxEngineInternal::CanPlay(vox::emitter::CreationSettings const&)
// int vox::VoxEngineInternal::CanPlay(vox::VoxEngineInternal *this, const vox::emitter::CreationSettings *a2);
// [0x10242d0] (437 bytes) vox::VoxEngineInternal::SetRoutingVolume(char const*,char const*,vox::VoxDSPGeneralParameter::BusRoutingType,float,float,float)
// int vox::VoxEngineInternal::SetRoutingVolume( int a1, char *s, char *src, char *a4, char *a5, char *a6, char *a7);
// [0x1024490] (109 bytes) vox::VoxEngineInternal::AttachDSP(char const*,vox::CustomDSP *)
// int vox::VoxEngineInternal::AttachDSP(pthread_mutex_t **this, char *a2, vox::CustomDSP *a3);
// [0x1024500] (39 bytes) vox::VoxEngineInternal::GetOutputMode(void)
// int vox::VoxEngineInternal::GetOutputMode(vox::VoxEngineInternal *this);
// [0x1024530] (41 bytes) vox::VoxEngineInternal::SetOutputMode(vox::VoxOutputMode)
// int vox::VoxEngineInternal::SetOutputMode(int a1, int a2);
// [0x1024560] (196 bytes) vox::VoxEngineInternal::RegisterExternalDataGenerator(vox::MinibusDataGeneratorInterface *,char const*)
// int vox::VoxEngineInternal::RegisterExternalDataGenerator(int a1, int a2, char *s1);
// [0x1024630] (114 bytes) vox::VoxEngineInternal::UnregisterExternalDataGenerator(vox::MinibusDataGeneratorInterface *)
// pthread_mutex_t *vox::VoxEngineInternal::UnregisterExternalDataGenerator(int a1, int a2);
// [0x1025850] (295 bytes) vox::VoxEngineInternal::GetEmitterObject(vox::EmitterHandle &)
// int vox::VoxEngineInternal::GetEmitterObject(vox::VoxEngineInternal *this, vox::EmitterHandle *a2);
// [0x1025980] (178 bytes) vox::VoxEngineInternal::SetPriorityBankId(vox::EmitterHandle &,unsigned int)
// int vox::VoxEngineInternal::SetPriorityBankId( vox::PriorityBankManager **this, vox::EmitterHandle *a2, unsigned int a3);
// [0x1025a40] (93 bytes) vox::VoxEngineInternal::IsValid(vox::EmitterHandle &)
// bool vox::VoxEngineInternal::IsValid(vox::VoxEngineInternal *this, vox::EmitterHandle *a2);
// [0x1025aa0] (102 bytes) vox::VoxEngineInternal::GetPriority(vox::EmitterHandle &)
// int vox::VoxEngineInternal::GetPriority(vox::VoxEngineInternal *this, vox::EmitterHandle *a2);
// [0x1025b10] (97 bytes) vox::VoxEngineInternal::SetPriority(vox::EmitterHandle &,int)
// int vox::VoxEngineInternal::SetPriority(vox::VoxEngineInternal *this, vox::EmitterHandle *a2, int a3);
// [0x1025b80] (98 bytes) vox::VoxEngineInternal::IncreaseEmitterObjectRefCount(vox::EmitterHandle &)
// int vox::VoxEngineInternal::IncreaseEmitterObjectRefCount(vox::VoxEngineInternal *this, vox::EmitterHandle *a2);
// [0x1025d10] (98 bytes) vox::VoxEngineInternal::DecreaseEmitterObjectRefCount(vox::EmitterHandle &)
// int vox::VoxEngineInternal::DecreaseEmitterObjectRefCount(vox::VoxEngineInternal *this, vox::EmitterHandle *a2);
// [0x1025ec0] (281 bytes) vox::VoxEngineInternal::GetDataObject(vox::DataHandle &)
// int vox::VoxEngineInternal::GetDataObject(vox::HandlableContainer *a1, int *a2);
// [0x1025fe0] (147 bytes) vox::VoxEngineInternal::GetUserData(vox::DataHandle &)
// vox::VoxEngineInternal *vox::VoxEngineInternal::GetUserData( vox::VoxEngineInternal *this, vox::DataHandle *a2, int *a3);
// [0x1026080] (103 bytes) vox::VoxEngineInternal::SetUserData(vox::DataHandle &,vox::DataHandleUserData &)
// int vox::VoxEngineInternal::SetUserData(vox::HandlableContainer *a1, int *a2, int a3);
// [0x10260f0] (99 bytes) vox::VoxEngineInternal::GetUid(vox::DataHandle &)
// int vox::VoxEngineInternal::GetUid(vox::HandlableContainer *a1, int *a2);
// [0x1026160] (94 bytes) vox::VoxEngineInternal::SetUid(vox::DataHandle &,int)
// int vox::VoxEngineInternal::SetUid(vox::HandlableContainer *a1, int *a2, int a3);
// [0x10261c0] (94 bytes) vox::VoxEngineInternal::SetPriorityBankId(vox::DataHandle &,unsigned int)
// int vox::VoxEngineInternal::SetPriorityBankId(vox::HandlableContainer *a1, int *a2, int a3);
// [0x1026220] (107 bytes) vox::VoxEngineInternal::GetDuration(vox::DataHandle &)
// long double vox::VoxEngineInternal::GetDuration(vox::HandlableContainer *a1, int *a2);
// [0x1026290] (90 bytes) vox::VoxEngineInternal::IsValid(vox::DataHandle &)
// bool vox::VoxEngineInternal::IsValid(vox::HandlableContainer *a1, int *a2);
// [0x10262f0] (101 bytes) vox::VoxEngineInternal::IsReady(vox::DataHandle &)
// int vox::VoxEngineInternal::IsReady(vox::HandlableContainer *a1, int *a2);
// [0x1026360] (95 bytes) vox::VoxEngineInternal::IncreaseDataObjectRefCount(vox::DataHandle &)
// int vox::VoxEngineInternal::IncreaseDataObjectRefCount(vox::HandlableContainer *a1, int *a2);
// [0x1026450] (258 bytes) vox::VoxEngineInternal::GetData(vox::EmitterHandle &)
// vox::VoxEngineInternal *vox::VoxEngineInternal::GetData( vox::VoxEngineInternal *this, vox::EmitterHandle *a2, vox::EmitterHandle *a3);
// [0x10265f0] (117 bytes) vox::VoxEngineInternal::ReleaseDatasource(vox::DataHandle &)
// int vox::VoxEngineInternal::ReleaseDatasource(vox::VoxEngineInternal *this, vox::DataHandle *a2);
// [0x1026670] (117 bytes) vox::VoxEngineInternal::DecreaseDataObjectRefCount(vox::DataHandle &)
// int vox::VoxEngineInternal::DecreaseDataObjectRefCount(vox::VoxEngineInternal *this, vox::DataHandle *a2);
// [0x1026980] (150 bytes) vox::VoxEngineInternal::DetachEmitterObject(long long)
// int vox::VoxEngineInternal::DetachEmitterObject(vox::VoxEngineInternal *this, int64_t a2);
// [0x1026a20] (144 bytes) vox::VoxEngineInternal::DetachDataObject(long long)
// int vox::VoxEngineInternal::DetachDataObject(vox::VoxEngineInternal *this, int64_t a2);
// [0x1026af0] (37 bytes) vox::VoxEngineInternal::GetFreeEmitterObjectId(void)
// uint64_t vox::VoxEngineInternal::GetFreeEmitterObjectId(vox::VoxEngineInternal *this);
// [0x1026b20] (34 bytes) vox::VoxEngineInternal::GetFreeDataObjectId(void)
// uint64_t vox::VoxEngineInternal::GetFreeDataObjectId(vox::VoxEngineInternal *this);
// [0x1026b50] (715 bytes) vox::VoxEngineInternal::LoadDataSourceAsync(int,void *,int,void *,unsigned int,vox::VoxSourceLoadingFlags)
// vox::DataHandle *vox::VoxEngineInternal::LoadDataSourceAsync( vox::DataHandle *a1, vox::VoxEngineInternal *a2, int a3, int a4, int a5, int a6, unsigned int a7, uint16_t a8);
// [0x1026e20] (237 bytes) vox::VoxEngineInternal::LoadDataSourceAsync(vox::data_source::CreationSettings const&)
// vox::VoxEngineInternal *vox::VoxEngineInternal::LoadDataSourceAsync( vox::VoxEngineInternal *this, const vox::data_source::CreationSettings *a2, int a3);
// [0x1026f10] (875 bytes) vox::VoxEngineInternal::LoadDataSource(int,void *,int,void *,unsigned int)
// vox::VoxEngineInternal *vox::VoxEngineInternal::LoadDataSource( vox::VoxEngineInternal *this, vox::VoxEngineInternal *a2, int a3, int a4, int a5, unsigned int a6, unsigned int a7);
// [0x1027280] (784 bytes) vox::VoxEngineInternal::ConvertToRamBufferSource(vox::DataHandle &)
// vox::VoxEngineInternal *vox::VoxEngineInternal::ConvertToRamBufferSource( vox::VoxEngineInternal *this, vox::DataHandle *a2, int *a3);
// [0x1027590] (912 bytes) vox::VoxEngineInternal::ConvertToRawSource(vox::DataHandle &)
// vox::VoxEngineInternal *vox::VoxEngineInternal::ConvertToRawSource( vox::VoxEngineInternal *this, vox::DataHandle *a2, int *a3);
// [0x1027920] (625 bytes) vox::VoxEngineInternal::LoadDataSource(vox::data_source::CreationSettings const&)
// vox::VoxEngineInternal *vox::VoxEngineInternal::LoadDataSource( vox::VoxEngineInternal *this, const vox::data_source::CreationSettings *a2, int *a3);
// [0x1027bc0] (392 bytes) vox::VoxEngineInternal::ReleaseDatasourceGroup(unsigned int)
// int vox::VoxEngineInternal::ReleaseDatasourceGroup( long double a1, pthread_mutex_t **this, unsigned int a3);
// [0x1027d50] (579 bytes) vox::VoxEngineInternal::GetAllEmitters(vox::EmitterHandle *,int)
// int vox::VoxEngineInternal::GetAllEmitters(vox::VoxEngineInternal *this, vox::EmitterHandle *a2, int a3);
// [0x1027fa0] (653 bytes) vox::VoxEngineInternal::GetEmitterHandles(vox::DataHandle &,vox::EmitterHandle *,int)
// int vox::VoxEngineInternal::GetEmitterHandles( vox::VoxEngineInternal *this, vox::DataHandle *a2, vox::EmitterHandle *a3, int a4);
// [0x1028230] (571 bytes) vox::VoxEngineInternal::GetAllDataSources(vox::DataHandle *,int)
// int vox::VoxEngineInternal::GetAllDataSources(vox::VoxEngineInternal *this, vox::DataHandle *a2, int a3);
// [0x1028650] (388 bytes) vox::VoxEngineInternal::KillEmitter(vox::EmitterObj *)
// void vox::VoxEngineInternal::KillEmitter(vox::VoxEngineInternal *this, vox::EmitterObj *a2);
// [0x10287e0] (210 bytes) vox::VoxEngineInternal::ReleaseDatasource(vox::DataObj *)
// void vox::VoxEngineInternal::ReleaseDatasource(vox::VoxEngineInternal *this, vox::DataObj *a2);
// [0x1029d80] (103 bytes) vox::VoxEngineInternal::Stop(vox::EmitterObj *,float)
// pthread_mutex_t *vox::VoxEngineInternal::Stop(vox::PriorityBankManager **this, vox::EmitterObj *a2, float a3);
// [0x1029df0] (106 bytes) vox::VoxEngineInternal::Stop(vox::EmitterHandle &,float)
// int vox::VoxEngineInternal::Stop(vox::VoxEngineInternal *this, vox::EmitterHandle *a2, float a3);
// [0x102a080] (46 bytes) vox::VoxEngineInternal::Pause(vox::EmitterObj *,float)
// pthread_mutex_t *vox::VoxEngineInternal::Pause(vox::VoxEngineInternal *this, pthread_mutex_t **a2, float a3);
// [0x102a0b0] (106 bytes) vox::VoxEngineInternal::Pause(vox::EmitterHandle &,float)
// int vox::VoxEngineInternal::Pause(vox::VoxEngineInternal *this, vox::EmitterHandle *a2, float a3);
// [0x102a220] (46 bytes) vox::VoxEngineInternal::Resume(vox::EmitterObj *,float)
// pthread_mutex_t *vox::VoxEngineInternal::Resume(vox::VoxEngineInternal *this, pthread_mutex_t **a2, float a3);
// [0x102a250] (106 bytes) vox::VoxEngineInternal::Resume(vox::EmitterHandle &,float)
// int vox::VoxEngineInternal::Resume(vox::VoxEngineInternal *this, vox::EmitterHandle *a2, float a3);
// [0x102a320] (114 bytes) vox::VoxEngineInternal::RegisterForEmitterStateChangeNotification(vox::EmitterHandle &,void (*)(vox::EmitterHandle &,void *,vox::EmitterExternState),void *)
// int vox::VoxEngineInternal::RegisterForEmitterStateChangeNotification( int a1, vox::EmitterHandle *a2, int a3, int a4);
// [0x102a400] (98 bytes) vox::VoxEngineInternal::UnregisterForEmitterStateChangeNotification(vox::EmitterHandle &)
// int vox::VoxEngineInternal::UnregisterForEmitterStateChangeNotification( vox::VoxEngineInternal *this, vox::EmitterHandle *a2);
// [0x102a5c0] (121 bytes) vox::VoxEngineInternal::SetAutoKillAfterDone(vox::EmitterHandle &,bool)
// int vox::VoxEngineInternal::SetAutoKillAfterDone(vox::VoxEngineInternal *this, vox::EmitterHandle *a2, bool a3);
// [0x102a690] (98 bytes) vox::VoxEngineInternal::ReleaseEmitter(vox::EmitterHandle &)
// int vox::VoxEngineInternal::ReleaseEmitter(vox::VoxEngineInternal *this, vox::EmitterHandle *a2);
// [0x102a750] (364 bytes) vox::VoxEngineInternal::KillEmittersOnResume(void)
// int vox::VoxEngineInternal::KillEmittersOnResume(vox::PriorityBankManager **this);
// [0x102a8c0] (155 bytes) vox::VoxEngineInternal::Resume(void)
// pthread_mutex_t *vox::VoxEngineInternal::Resume(vox::VoxEngineInternal *this);
// [0x102a960] (104 bytes) vox::VoxEngineInternal::GetKillOnResume(vox::EmitterHandle &)
// int vox::VoxEngineInternal::GetKillOnResume(vox::VoxEngineInternal *this, vox::EmitterHandle *a2);
// [0x102aa30] (121 bytes) vox::VoxEngineInternal::SetKillOnResume(vox::EmitterHandle &,bool)
// int vox::VoxEngineInternal::SetKillOnResume(vox::VoxEngineInternal *this, vox::EmitterHandle *a2, bool a3);
// [0x102ab10] (72 bytes) vox::VoxEngineInternal::Resume(vox::EmitterObj *)
// pthread_mutex_t *vox::VoxEngineInternal::Resume(vox::VoxEngineInternal *this, pthread_mutex_t **a2);
// [0x102ab60] (98 bytes) vox::VoxEngineInternal::Resume(vox::EmitterHandle &)
// int vox::VoxEngineInternal::Resume(vox::VoxEngineInternal *this, vox::EmitterHandle *a2);
// [0x102ac30] (72 bytes) vox::VoxEngineInternal::Pause(vox::EmitterObj *)
// pthread_mutex_t *vox::VoxEngineInternal::Pause(vox::VoxEngineInternal *this, pthread_mutex_t **a2);
// [0x102ac80] (98 bytes) vox::VoxEngineInternal::Pause(vox::EmitterHandle &)
// int vox::VoxEngineInternal::Pause(vox::VoxEngineInternal *this, vox::EmitterHandle *a2);
// [0x102acf0] (72 bytes) vox::VoxEngineInternal::Stop(vox::EmitterObj *)
// pthread_mutex_t *vox::VoxEngineInternal::Stop(vox::PriorityBankManager **this, pthread_mutex_t **a2);
// [0x102ad40] (98 bytes) vox::VoxEngineInternal::Stop(vox::EmitterHandle &)
// int vox::VoxEngineInternal::Stop(vox::VoxEngineInternal *this, vox::EmitterHandle *a2);
// [0x102ae10] (104 bytes) vox::VoxEngineInternal::GetGroup(vox::EmitterHandle &)
// int vox::VoxEngineInternal::GetGroup(vox::VoxEngineInternal *this, vox::EmitterHandle *a2);
// [0x102aed0] (136 bytes) vox::VoxEngineInternal::SetGroup(vox::EmitterHandle &,unsigned int)
// int vox::VoxEngineInternal::SetGroup(pthread_mutex_t **this, vox::EmitterHandle *a2, pthread_mutex_t *a3);
// [0x102b000] (135 bytes) vox::VoxEngineInternal::IsMemberOfGroup(vox::EmitterHandle &,unsigned int,bool)
// int vox::VoxEngineInternal::IsMemberOfGroup( long double a1, vox::VoxEngineInternal *this, vox::EmitterHandle *a3, unsigned int a4, bool a5);
// [0x102b110] (380 bytes) vox::VoxEngineInternal::ResumeGroup(unsigned int)
// int vox::VoxEngineInternal::ResumeGroup( long double a1, vox::VoxEngineInternal *this, unsigned int a3);
// [0x102b290] (408 bytes) vox::VoxEngineInternal::ResumeGroup(unsigned int,float)
// int vox::VoxEngineInternal::ResumeGroup( long double a1, vox::VoxEngineInternal *this, unsigned int a3, float a4);
// [0x102b430] (380 bytes) vox::VoxEngineInternal::PauseGroup(unsigned int)
// int vox::VoxEngineInternal::PauseGroup( long double a1, vox::VoxEngineInternal *this, unsigned int a3);
// [0x102b5b0] (408 bytes) vox::VoxEngineInternal::PauseGroup(unsigned int,float)
// int vox::VoxEngineInternal::PauseGroup( long double a1, vox::VoxEngineInternal *this, unsigned int a3, float a4);
// [0x102b750] (380 bytes) vox::VoxEngineInternal::StopGroup(unsigned int)
// int vox::VoxEngineInternal::StopGroup( long double a1, vox::PriorityBankManager **this, unsigned int a3);
// [0x102b8d0] (408 bytes) vox::VoxEngineInternal::StopGroup(unsigned int,float)
// int vox::VoxEngineInternal::StopGroup( long double a1, vox::PriorityBankManager **this, unsigned int a3, float a4);
// [0x102bac0] (110 bytes) vox::VoxEngineInternal::GetGain(vox::EmitterHandle &)
// long double vox::VoxEngineInternal::GetGain(vox::VoxEngineInternal *this, vox::EmitterHandle *a2);
// [0x102bb80] (111 bytes) vox::VoxEngineInternal::GetUid(vox::EmitterHandle &)
// int vox::VoxEngineInternal::GetUid(vox::VoxEngineInternal *this, vox::EmitterHandle *a2);
// [0x102bcd0] (114 bytes) vox::VoxEngineInternal::SetGain(vox::EmitterHandle &,float,float)
// int vox::VoxEngineInternal::SetGain(vox::VoxEngineInternal *this, vox::EmitterHandle *a2, float a3, float a4);
// [0x102c020] (110 bytes) vox::VoxEngineInternal::GetPitch(vox::EmitterHandle &)
// long double vox::VoxEngineInternal::GetPitch(vox::VoxEngineInternal *this, vox::EmitterHandle *a2);
// [0x102c1a0] (114 bytes) vox::VoxEngineInternal::SetPitch(vox::EmitterHandle &,float,float)
// int vox::VoxEngineInternal::SetPitch(vox::VoxEngineInternal *this, vox::EmitterHandle *a2, float a3, float a4);
// [0x102c310] (104 bytes) vox::VoxEngineInternal::GetLoop(vox::EmitterHandle &)
// int vox::VoxEngineInternal::GetLoop(vox::VoxEngineInternal *this, vox::EmitterHandle *a2);
// [0x102c3e0] (121 bytes) vox::VoxEngineInternal::SetLoop(vox::EmitterHandle &,bool)
// int vox::VoxEngineInternal::SetLoop(vox::VoxEngineInternal *this, vox::EmitterHandle *a2, bool a3);
// [0x102c4c0] (104 bytes) vox::VoxEngineInternal::IsReady(vox::EmitterHandle &)
// int vox::VoxEngineInternal::IsReady(vox::VoxEngineInternal *this, vox::EmitterHandle *a2);
// [0x102c5a0] (250 bytes) vox::VoxEngineInternal::Play(vox::EmitterObj *,bool,float)
// void vox::VoxEngineInternal::Play(vox::PriorityBankManager **this, vox::EmitterObj *a2, bool a3, float a4);
// [0x102c6a0] (95 bytes) vox::VoxEngineInternal::Play(vox::EmitterObj *,bool)
// void vox::VoxEngineInternal::Play(vox::PriorityBankManager **this, pthread_mutex_t **a2, bool a3);
// [0x102c700] (411 bytes) vox::VoxEngineInternal::PlayGroup(unsigned int)
// int vox::VoxEngineInternal::PlayGroup( long double a1, vox::PriorityBankManager **this, unsigned int a3);
// [0x102c8a0] (431 bytes) vox::VoxEngineInternal::PlayGroup(unsigned int,float)
// int vox::VoxEngineInternal::PlayGroup( long double a1, vox::PriorityBankManager **this, unsigned int a3, float a4);
// [0x102ca50] (205 bytes) vox::VoxEngineInternal::GetDebugInfo(vox::DebugInfo &)
// int vox::VoxEngineInternal::GetDebugInfo(uint32_t *a1, uint32_t *a2);
// [0x102cb20] (104 bytes) vox::VoxEngineInternal::IsPlaying(vox::EmitterHandle &)
// int vox::VoxEngineInternal::IsPlaying(vox::VoxEngineInternal *this, vox::EmitterHandle *a2);
// [0x102cc30] (107 bytes) vox::VoxEngineInternal::IsDone(vox::EmitterHandle &)
// bool vox::VoxEngineInternal::IsDone(vox::VoxEngineInternal *this, vox::EmitterHandle *a2);
// [0x102cd50] (104 bytes) vox::VoxEngineInternal::IsAlive(vox::EmitterHandle &)
// int vox::VoxEngineInternal::IsAlive(vox::VoxEngineInternal *this, vox::EmitterHandle *a2);
// [0x102ce60] (104 bytes) vox::VoxEngineInternal::GetStatus(vox::EmitterHandle &)
// int vox::VoxEngineInternal::GetStatus(vox::VoxEngineInternal *this, vox::EmitterHandle *a2);
// [0x102cf20] (111 bytes) vox::VoxEngineInternal::GetPauseCount(vox::EmitterHandle &)
// int vox::VoxEngineInternal::GetPauseCount(vox::VoxEngineInternal *this, vox::EmitterHandle *a2);
// [0x102d040] (110 bytes) vox::VoxEngineInternal::GetPlayCursor(vox::EmitterHandle &)
// long double vox::VoxEngineInternal::GetPlayCursor(vox::VoxEngineInternal *this, vox::EmitterHandle *a2);
// [0x102d150] (110 bytes) vox::VoxEngineInternal::GetTotalPlayTime(vox::EmitterHandle &)
// long double vox::VoxEngineInternal::GetTotalPlayTime(vox::VoxEngineInternal *this, vox::EmitterHandle *a2);
// [0x102d2c0] (106 bytes) vox::VoxEngineInternal::SetPlayCursor(vox::EmitterHandle &,float)
// int vox::VoxEngineInternal::SetPlayCursor(vox::VoxEngineInternal *this, vox::EmitterHandle *a2, float a3);
// [0x102d3c0] (104 bytes) vox::VoxEngineInternal::GetRandomStartPositionMode(vox::EmitterHandle &)
// int vox::VoxEngineInternal::GetRandomStartPositionMode(vox::VoxEngineInternal *this, vox::EmitterHandle *a2);
// [0x102d4c0] (121 bytes) vox::VoxEngineInternal::SetRandomStartPositionMode(vox::EmitterHandle &,bool)
// int vox::VoxEngineInternal::SetRandomStartPositionMode( vox::VoxEngineInternal *this, vox::EmitterHandle *a2, bool a3);
// [0x102d5d0] (110 bytes) vox::VoxEngineInternal::GetPlaybackDelay(vox::EmitterHandle &)
// long double vox::VoxEngineInternal::GetPlaybackDelay(vox::VoxEngineInternal *this, vox::EmitterHandle *a2);
// [0x102d6d0] (106 bytes) vox::VoxEngineInternal::SetPlaybackDelay(vox::EmitterHandle &,float)
// int vox::VoxEngineInternal::SetPlaybackDelay(vox::VoxEngineInternal *this, vox::EmitterHandle *a2, float a3);
// [0x102db10] (106 bytes) vox::VoxEngineInternal::SetUserData(vox::EmitterHandle &,vox::EmitterHandleUserData &)
// int vox::VoxEngineInternal::SetUserData(int a1, vox::EmitterHandle *a2, int a3);
// [0x102dbf0] (150 bytes) vox::VoxEngineInternal::GetUserData(vox::EmitterHandle &)
// vox::VoxEngineInternal *vox::VoxEngineInternal::GetUserData( vox::VoxEngineInternal *this, vox::EmitterHandle *a2, vox::EmitterHandle *a3);
// [0x102dcf0] (114 bytes) vox::VoxEngineInternal::Set3DEmitterParameteri(vox::EmitterHandle &,int,int)
// int vox::VoxEngineInternal::Set3DEmitterParameteri( vox::VoxEngineInternal *this, vox::EmitterHandle *a2, int a3, pthread_mutex_t *a4);
// [0x102de70] (114 bytes) vox::VoxEngineInternal::Set3DEmitterParameterf(vox::EmitterHandle &,int,float)
// int vox::VoxEngineInternal::Set3DEmitterParameterf( vox::VoxEngineInternal *this, vox::EmitterHandle *a2, int a3, float a4);
// [0x102def0] (268 bytes) vox::VoxEngineInternal::Set3DEmitterParameters(vox::EmitterHandle &,vox::Vox3DEmitterParameters const&)
// int vox::VoxEngineInternal::Set3DEmitterParameters( vox::VoxEngineInternal *this, vox::EmitterHandle *a2, const vox::Vox3DEmitterParameters *a3);
// [0x102e110] (130 bytes) vox::VoxEngineInternal::Set3DEmitterDirection(vox::EmitterHandle &,float,float,float)
// int vox::VoxEngineInternal::Set3DEmitterDirection( vox::VoxEngineInternal *this, vox::EmitterHandle *a2, float a3, float a4, float a5);
// [0x102e1a0] (130 bytes) vox::VoxEngineInternal::Set3DEmitterVelocity(vox::EmitterHandle &,float,float,float)
// int vox::VoxEngineInternal::Set3DEmitterVelocity( vox::VoxEngineInternal *this, vox::EmitterHandle *a2, float a3, float a4, float a5);
// [0x102e230] (130 bytes) vox::VoxEngineInternal::Set3DEmitterPosition(vox::EmitterHandle &,float,float,float)
// int vox::VoxEngineInternal::Set3DEmitterPosition( vox::VoxEngineInternal *this, vox::EmitterHandle *a2, float a3, float a4, float a5);
// [0x102f590] (114 bytes) vox::VoxEngineInternal::Get3DEmitterParameteri(vox::EmitterHandle &,int,int &)
// int vox::VoxEngineInternal::Get3DEmitterParameteri( vox::VoxEngineInternal *this, vox::EmitterHandle *a2, int a3, int *a4);
// [0x102f6e0] (114 bytes) vox::VoxEngineInternal::Get3DEmitterParameterf(vox::EmitterHandle &,int,float &)
// int vox::VoxEngineInternal::Get3DEmitterParameterf( vox::VoxEngineInternal *this, vox::EmitterHandle *a2, int a3, float *a4);
// [0x102f760] (266 bytes) vox::VoxEngineInternal::Get3DEmitterParameters(vox::EmitterHandle &,vox::Vox3DEmitterParameters &)
// int vox::VoxEngineInternal::Get3DEmitterParameters( vox::VoxEngineInternal *this, vox::EmitterHandle *a2, vox::Vox3DEmitterParameters *a3);
// [0x102f950] (130 bytes) vox::VoxEngineInternal::Get3DEmitterDirection(vox::EmitterHandle &,float &,float &,float &)
// int vox::VoxEngineInternal::Get3DEmitterDirection( vox::VoxEngineInternal *this, vox::EmitterHandle *a2, float *a3, float *a4, float *a5);
// [0x102f9e0] (130 bytes) vox::VoxEngineInternal::Get3DEmitterVelocity(vox::EmitterHandle &,float &,float &,float &)
// int vox::VoxEngineInternal::Get3DEmitterVelocity( vox::VoxEngineInternal *this, vox::EmitterHandle *a2, float *a3, float *a4, float *a5);
// [0x102fa70] (130 bytes) vox::VoxEngineInternal::Get3DEmitterPosition(vox::EmitterHandle &,float &,float &,float &)
// int vox::VoxEngineInternal::Get3DEmitterPosition( vox::VoxEngineInternal *this, vox::EmitterHandle *a2, float *a3, float *a4, float *a5);
// [0x102fcf0] (114 bytes) vox::VoxEngineInternal::SetDSPEmitterParameter(vox::EmitterHandle &,int,void const*)
// int vox::VoxEngineInternal::SetDSPEmitterParameter( vox::VoxEngineInternal *this, vox::EmitterHandle *a2, int a3, char *a4);
// [0x1030660] (934 bytes) vox::VoxEngineInternal::CreateEmitterAsync(vox::DataHandle &,vox::emitter::CreationSettings const&)
// vox::VoxEngineInternal *vox::VoxEngineInternal::CreateEmitterAsync( vox::VoxEngineInternal *this, vox::DataHandle *a2, const vox::emitter::CreationSettings *a3, vox::emitter::CreationSettings *a4);
// [0x1031750] (1106 bytes) vox::VoxEngineInternal::CreateEmitter(vox::DataHandle &,vox::emitter::CreationSettings const&)
// vox::VoxEngineInternal *vox::VoxEngineInternal::CreateEmitter( vox::VoxEngineInternal *this, vox::DataHandle *a2, const vox::emitter::CreationSettings *a3, vox::emitter::CreationSettings *a4);
// [0x1033740] (5264 bytes) vox::VoxEngineInternal::UpdateDebugStream(void)
// void vox::VoxEngineInternal::UpdateDebugStream(vox::VoxDebugStreamManager **this);
// [0x1034c30] (331 bytes) vox::VoxEngineInternal::PrintDebug(void)
// int vox::VoxEngineInternal::PrintDebug(pthread_mutex_t **this);
// [0x1034db0] (865 bytes) vox::VoxEngineInternal::CreateEmitterAsync(vox::DataHandle &,int,void *)
// vox::VoxEngineInternal *vox::VoxEngineInternal::CreateEmitterAsync( vox::VoxEngineInternal *this, vox::DataHandle *a2, int *a3, void *a4, int a5);
// [0x1035120] (1137 bytes) vox::VoxEngineInternal::CreateEmitter(vox::DataHandle &,int,void *)
// vox::VoxEngineInternal *vox::VoxEngineInternal::CreateEmitter( vox::VoxEngineInternal *this, vox::DataHandle *a2, int *a3, void *a4, int a5);
// [0x1036910] (122 bytes) vox::VoxEngineInternal::SetInteractiveMusicState(vox::EmitterHandle &,char const*)
// int vox::VoxEngineInternal::SetInteractiveMusicState( vox::VoxEngineInternal *this, vox::EmitterHandle *a2, char *a3);
// [0x1036990] (103 bytes) vox::VoxEngineInternal::PlayInteractiveMusic(vox::EmitterObj *,char const*)
// void vox::VoxEngineInternal::PlayInteractiveMusic( vox::PriorityBankManager **this, vox::EmitterObj *a2, char *a3);
// [0x1036a00] (150 bytes) vox::VoxEngineInternal::PlayInteractiveMusic(vox::EmitterHandle &,char const*)
// int vox::VoxEngineInternal::PlayInteractiveMusic( vox::VoxEngineInternal *this, vox::EmitterHandle *a2, char *a3);
// [0x1036aa0] (175 bytes) vox::VoxEngineInternal::Play(vox::EmitterHandle &)
// int vox::VoxEngineInternal::Play(vox::VoxEngineInternal *this, vox::EmitterHandle *a2);
// [0x1036b50] (178 bytes) vox::VoxEngineInternal::Play(vox::EmitterHandle &,bool)
// int vox::VoxEngineInternal::Play(vox::VoxEngineInternal *this, vox::EmitterHandle *a2, bool a3);
// [0x1036c10] (111 bytes) vox::VoxEngineInternal::PlayInteractiveMusic(vox::EmitterObj *,char const*,float)
// void vox::VoxEngineInternal::PlayInteractiveMusic( vox::PriorityBankManager **this, vox::EmitterObj *a2, char *a3, float a4);
// [0x1036c80] (158 bytes) vox::VoxEngineInternal::PlayInteractiveMusic(vox::EmitterHandle &,char const*,float)
// int vox::VoxEngineInternal::PlayInteractiveMusic( vox::VoxEngineInternal *this, vox::EmitterHandle *a2, char *a3, float a4);
// [0x1036d20] (206 bytes) vox::VoxEngineInternal::Play(vox::EmitterHandle &,bool,float)
// int vox::VoxEngineInternal::Play(vox::VoxEngineInternal *this, vox::EmitterHandle *a2, bool a3, float a4);
// [0x1036df0] (438 bytes) vox::VoxEngineInternal::UpdateSources(void)
// void vox::VoxEngineInternal::UpdateSources(void **this);
// [0x1036fb0] (1675 bytes) vox::VoxEngineInternal::UpdateEmitters(float)
// void vox::VoxEngineInternal::UpdateEmitters(long double a1, vox::VoxEngineInternal *this, float a3);
// [0x1037a00] (686 bytes) vox::VoxEngineInternal::_ReleaseAllDatasource(void)
// void **vox::VoxEngineInternal::_ReleaseAllDatasource(void **this);
// [0x1037cb0] (585 bytes) vox::VoxEngineInternal::~VoxEngineInternal()
// void vox::VoxEngineInternal::~VoxEngineInternal(vox::VoxEngineInternal *this);
