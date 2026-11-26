#include "Core/Utils/DecompTypes.h"
#include "vox_VoxEngine.h"

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::Construct  (binary VA: 0xfd3da0)
// Original: vox::VoxEngine::VoxEngine
// ----------------------------------------------------------------------------
vox::VoxEngine::Self * vox::VoxEngine::Construct(vox::VoxEngine::Self *self)
{
  vox::Mutex::Self *v1;
  vox::VoxEngine::Self *result;
  vox::VoxEngineInternal::Self *v3;

  *((uint64_t *)self + 1) = 0;
  *((uint8_t *)self + 20) = 0;
  *(uint32_t *)self = 0;
  v1 = (vox::Mutex::Self *)VoxAllocInternal(4u, 0, (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox.cpp"), (int)(uintptr_t)("VoxEngine"), 159);
  vox::Mutex::Construct(v1);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(v1);
  result = (vox::VoxEngine::Self *)vox::VoxEngineInternal::GetVoxEngineInternal(v3);
  vox::VoxEngine::m_internal[0] = (uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::GetVoxEngine  (binary VA: 0xfd3e30)
// Original: vox::VoxEngine::GetVoxEngine
// ----------------------------------------------------------------------------
vox::VoxEngine::Self * vox::VoxEngine::GetVoxEngine()
{
  vox::VoxEngine::Self *result;
  vox::VoxEngine::Self *v1;

  result = (vox::VoxEngine::Self *)vox::VoxEngine::s_voxEngine;
  if ( vox::VoxEngine::s_voxEngine == 0 )
  {
    v1 = (vox::VoxEngine::Self *)VoxAllocInternal(
                             0x18u,
                             0,
                             (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox.cpp"),
                             (int)(uintptr_t)("GetVoxEngine"),
                             128);
    vox::VoxEngine::Construct(v1);
    vox::VoxEngine::s_voxEngine = (uintptr_t)(uintptr_t)(v1);
    return v1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::Shutdown  (binary VA: 0xfd3eb0)
// Original: vox::VoxEngine::Shutdown
// ----------------------------------------------------------------------------
vox::VoxThread::Self * vox::VoxEngine::Shutdown(vox::VoxThread::Self **self)
{
  vox::VoxThread::Self *result;

  result = *self;
  if ( *self != nullptr )
  {
    vox::VoxThread::Destroy(*self);
    result = (vox::VoxThread::Self *)VoxFreeInternal(*self);
    *self = nullptr;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::Destroy  (binary VA: 0xfd3f00)
// Original: vox::VoxEngine::~VoxEngine
// ----------------------------------------------------------------------------
void vox::VoxEngine::Destroy(vox::VoxThread::Self **self)
{
  vox::Mutex::Self *v1;

  vox::VoxEngine::Shutdown(self);
  if ( (vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0] != 0 )
  {
    vox::VoxEngineInternal::Destroy((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0]);
    VoxFreeInternal((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0]);
  }
  v1 = (vox::Mutex::Self *)(*(self + 4));
  vox::VoxEngine::m_internal[0] = (uintptr_t)(0);
  if ( v1 != nullptr )
  {
    vox::Mutex::Destroy(v1);
    VoxFreeInternal(*(self + 4));
  }
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::DestroyVoxEngine  (binary VA: 0xfd3f80)
// Original: vox::VoxEngine::DestroyVoxEngine
// ----------------------------------------------------------------------------
int vox::VoxEngine::DestroyVoxEngine()
{
  int result;

  result = vox::VoxEngine::s_voxEngine;
  if ( vox::VoxEngine::s_voxEngine != 0 )
  {
    vox::VoxEngine::Destroy((vox::VoxThread::Self **)(uintptr_t)(vox::VoxEngine::s_voxEngine));
    result = VoxFreeInternal(vox::VoxEngine::s_voxEngine);
    vox::VoxEngine::s_voxEngine = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::RegisterStreamType  (binary VA: 0xfd3fd0)
// Original: vox::VoxEngine::RegisterStreamType
// ----------------------------------------------------------------------------
int vox::VoxEngine::RegisterStreamType(vox::VoxEngine::Self *self, vox::StreamInterface::Self *(*a2)(void *))
{
  if ( (vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0] != 0 )
    return vox::VoxEngineInternal::RegisterStreamType((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  else
    return -1;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::RegisterDecoderType  (binary VA: 0xfd4010)
// Original: vox::VoxEngine::RegisterDecoderType
// ----------------------------------------------------------------------------
int vox::VoxEngine::RegisterDecoderType(int a1, int a2)
{
  if ( (vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0] != 0 )
    return vox::VoxEngineInternal::RegisterDecoderType((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  else
    return -1;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::Initialize  (binary VA: 0xfd4050)
// Original: vox::VoxEngine::Initialize
// ----------------------------------------------------------------------------
void vox::VoxEngine::Initialize(vox::VoxEngine::Self *self)
{
  vox::VoxEngineInternal::Self *v1;
  vox::VoxThread::Self *v2;
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  v1 = (vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0];
  if ( (vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0] != 0 && *((uint8_t *)self + 20) == 0 )
  {
    *((uint8_t *)self + 20) = 1;
    vox::VoxEngineInternal::Initialize(v1);
    vox::VoxEngine::RegisterStreamType(self, (vox::StreamInterface::Self *(*)(void *))vox::StreamMemoryBufferFactory);
    vox::VoxEngine::RegisterStreamType(self, (vox::StreamInterface::Self *(*)(void *))vox::StreamCFileFactory);
    vox::VoxEngine::RegisterDecoderType((int)(uintptr_t)(self), (int)(uintptr_t)(vox::DecoderRawFactory));
    vox::VoxEngine::RegisterDecoderType((int)(uintptr_t)(self), (int)(uintptr_t)(vox::DecoderMSWavFactory));
    vox::VoxEngine::RegisterDecoderType((int)(uintptr_t)(self), (int)(uintptr_t)(vox::DecoderStbVorbisFactory));
    vox::VoxEngine::RegisterDecoderType((int)(uintptr_t)(self), (int)(uintptr_t)(vox::DecoderMPC8Factory));
    vox::VoxEngine::RegisterDecoderType((int)(uintptr_t)(self), (int)(uintptr_t)(vox::DecoderNativeFactory));
    vox::VoxEngine::RegisterDecoderType((int)(uintptr_t)(self), 0);
    v3 = (vox::VoxThread::Self *)VoxAllocInternal(
                             0x60u,
                             0,
                             (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox.cpp"),
                             (int)(uintptr_t)("Initialize"),
                             228);
    vox::VoxThread::Construct(
      v3,
      (void (*)(void *, void *))((void (*)(vox::VoxEngine::Self *))vox::VoxEngine::UpdateThreaded),
      self,
      nullptr,
      "Vox::UpdEmtrs");
    *(uint32_t *)self = (uint32_t)(uintptr_t)(v3);
    *((double *)self + 1) = GetTime();
    sub_BA06B0();
  }
  else
  {
    sub_BA06B0();
  }
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::AddPriorityBank  (binary VA: 0xfd41e0)
// Original: vox::VoxEngine::AddPriorityBank
// ----------------------------------------------------------------------------
int vox::VoxEngine::AddPriorityBank(int a1, int a2)
{
  int v2;
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  v2 = 0;
  if ( (vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0] != 0 )
    v2 = vox::VoxEngineInternal::AddPriorityBank((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  sub_BA06B0();
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::ReconfigurePriorityBank  (binary VA: 0xfd4260)
// Original: vox::VoxEngine::ReconfigurePriorityBank
// ----------------------------------------------------------------------------
int vox::VoxEngine::ReconfigurePriorityBank(int a1, unsigned int a2, int a3)
{
  int v3;
  vox::VoxThread::Self *v5;

  vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  v3 = 0;
  if ( (vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0] != 0 )
    v3 = vox::VoxEngineInternal::ReconfigurePriorityBank((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3);
  sub_BA06B0();
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::IsPriorityBankPresent  (binary VA: 0xfd42f0)
// Original: vox::VoxEngine::IsPriorityBankPresent
// ----------------------------------------------------------------------------
int vox::VoxEngine::IsPriorityBankPresent(vox::VoxEngine::Self *self, char *a2)
{
  int v2;
  int PriorityBankId;
  vox::VoxThread::Self *v5;

  vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  v2 = 0;
  if ( (vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0] != 0 )
  {
    PriorityBankId = vox::VoxEngineInternal::GetPriorityBankId((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
    LOBYTE(PriorityBankId) = PriorityBankId != -1;
    v2 = PriorityBankId;
  }
  sub_BA06B0();
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::GetPriorityBankIdFromName  (binary VA: 0xfd4380)
// Original: vox::VoxEngine::GetPriorityBankIdFromName
// ----------------------------------------------------------------------------
int vox::VoxEngine::GetPriorityBankIdFromName(vox::VoxEngine::Self *self, char *a2)
{
  int PriorityBankId;
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  PriorityBankId = -1;
  if ( (vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0] != 0 )
    PriorityBankId = vox::VoxEngineInternal::GetPriorityBankId((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  sub_BA06B0();
  return PriorityBankId;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::SetMicrophoneCallback  (binary VA: 0xfd4400)
// Original: vox::VoxEngine::SetMicrophoneCallback
// ----------------------------------------------------------------------------
int vox::VoxEngine::SetMicrophoneCallback(int a1, int a2)
{
  int v2;
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  v2 = 0;
  if ( (vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0] != 0 )
    v2 = vox::VoxEngineInternal::SetMicrophoneCallback((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  sub_BA06B0();
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::RemoveMicrophoneCallback  (binary VA: 0xfd4480)
// Original: vox::VoxEngine::RemoveMicrophoneCallback
// ----------------------------------------------------------------------------
void vox::VoxEngine::RemoveMicrophoneCallback()
{
  vox::VoxThread::Self *v0;

  vox::VoxThread::GetCurThreadId(v0);
  sub_BA06A0();
  if ( (vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::RemoveMicrophoneCallback((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0]);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::RegisterAudioDataSink  (binary VA: 0xfd44f0)
// Original: vox::VoxEngine::RegisterAudioDataSink
// ----------------------------------------------------------------------------
int vox::VoxEngine::RegisterAudioDataSink(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  vox::VoxThread::Self *v7;

  vox::VoxThread::GetCurThreadId(v7);
  sub_BA06A0();
  v5 = 0;
  if ( (vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0] != 0 )
    v5 = vox::VoxEngineInternal::RegisterAudioDataSink((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3, a4, a5);
  sub_BA06B0();
  return v5;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::UnregisterAudioDataSink  (binary VA: 0xfd4590)
// Original: vox::VoxEngine::UnregisterAudioDataSink
// ----------------------------------------------------------------------------
void vox::VoxEngine::UnregisterAudioDataSink(int a1, int a2, int a3)
{
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( (vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::UnregisterAudioDataSink((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::SuspendEngine  (binary VA: 0xfd4610)
// Original: vox::VoxEngine::SuspendEngine
// ----------------------------------------------------------------------------
void vox::VoxEngine::SuspendEngine()
{
  vox::VoxThread::Self *v0;

  vox::VoxThread::GetCurThreadId(v0);
  sub_BA06A0();
  if ( (vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::Suspend((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0]);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::ResumeEngine  (binary VA: 0xfd4680)
// Original: vox::VoxEngine::ResumeEngine
// ----------------------------------------------------------------------------
void vox::VoxEngine::ResumeEngine()
{
  vox::VoxThread::Self *v0;

  vox::VoxThread::GetCurThreadId(v0);
  sub_BA06A0();
  if ( (vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::Resume((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0]);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::IsEngineSuspended  (binary VA: 0xfd46f0)
// Original: vox::VoxEngine::IsEngineSuspended
// ----------------------------------------------------------------------------
int vox::VoxEngine::IsEngineSuspended()
{
  int IsSuspended;
  vox::VoxThread::Self *v2;

  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  IsSuspended = 1;
  if ( (vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0] != 0 )
    IsSuspended = vox::VoxEngineInternal::IsSuspended((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0]);
  sub_BA06B0();
  return IsSuspended;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::ResetDriver  (binary VA: 0xfd4770)
// Original: vox::VoxEngine::ResetDriver
// ----------------------------------------------------------------------------
void vox::VoxEngine::ResetDriver()
{
  vox::VoxThread::Self *v0;

  vox::VoxThread::GetCurThreadId(v0);
  sub_BA06A0();
  if ( (vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::ResetDriver((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0]);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::Update  (binary VA: 0xfd47e0)
// Original: vox::VoxEngine::Update
// ----------------------------------------------------------------------------
void vox::VoxEngine::Update()
{
  vox::VoxThread::Self *v0;

  vox::VoxThread::GetCurThreadId(v0);
  sub_BA06A0();
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::UpdateSources  (binary VA: 0xfd4840)
// Original: vox::VoxEngine::UpdateSources
// ----------------------------------------------------------------------------
void vox::VoxEngine::UpdateSources()
{
  vox::VoxThread::Self *v0;

  vox::VoxThread::GetCurThreadId(v0);
  sub_BA06A0();
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::UpdateEmitters  (binary VA: 0xfd48a0)
// Original: vox::VoxEngine::UpdateEmitters
// ----------------------------------------------------------------------------
void vox::VoxEngine::UpdateEmitters()
{
  vox::VoxThread::Self *v0;

  vox::VoxThread::GetCurThreadId(v0);
  sub_BA06A0();
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::LoadDataSource  (binary VA: 0xfd4900)
// Original: vox::VoxEngine::LoadDataSource
// ----------------------------------------------------------------------------
vox::VoxEngine::Self * vox::VoxEngine::LoadDataSource(vox::VoxEngine::Self *self, const vox::data_source::CreationSettings::Self *a2)
{
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( (vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::LoadDataSource(self, (vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0]);
  else
    vox::DataHandle::Construct(self, -1, nullptr, nullptr, 0, 0);
  sub_BA06B0();
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::LoadDataSource  (binary VA: 0xfd49d0)
// Original: vox::VoxEngine::LoadDataSource
// ----------------------------------------------------------------------------
vox::VoxEngine::Self * vox::VoxEngine::LoadDataSource(vox::VoxEngine::Self *self, int a2, void *a3, int a4, void *a5, unsigned int a6)
{
  vox::VoxThread::Self *v7;

  vox::VoxThread::GetCurThreadId(v7);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::LoadDataSource(self, vox::VoxEngine::m_internal[0], a3, a4, a5, a6);
  else
    vox::DataHandle::Construct(self, -1, nullptr, nullptr, 0, 0);
  sub_BA06B0();
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::LoadDataSource  (binary VA: 0xfd4ac0)
// Original: vox::VoxEngine::LoadDataSource
// ----------------------------------------------------------------------------
vox::VoxEngine::Self * vox::VoxEngine::LoadDataSource(vox::VoxEngine::Self *self, int a2, void *a3, int a4, void *a5, const char *a6, char *a7)
{
  vox::VoxThread::Self *v8;

  vox::VoxThread::GetCurThreadId(v8);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
  {
    vox::VoxEngineInternal::GetGroupId((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a7);
    vox::VoxEngineInternal::LoadDataSource(self, vox::VoxEngine::m_internal[0], a3, a4, a5, (unsigned int)(uintptr_t)(a6));
  }
  else
  {
    vox::DataHandle::Construct(self, -1, nullptr, nullptr, 0, 0);
  }
  sub_BA06B0();
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::LoadDataSourceAsync  (binary VA: 0xfd4bc0)
// Original: vox::VoxEngine::LoadDataSourceAsync
// ----------------------------------------------------------------------------
vox::VoxEngine::Self * vox::VoxEngine::LoadDataSourceAsync(vox::VoxEngine::Self *self, const vox::data_source::CreationSettings::Self *a2)
{
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::LoadDataSourceAsync(
      self,
      (const vox::data_source::CreationSettings::Self *)vox::VoxEngine::m_internal[0]);
  else
    vox::DataHandle::Construct(self, -1, nullptr, nullptr, 0, 0);
  sub_BA06B0();
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::LoadDataSourceAsync  (binary VA: 0xfd4c90)
// Original: vox::VoxEngine::LoadDataSourceAsync
// ----------------------------------------------------------------------------
vox::DataHandle::Self * vox::VoxEngine::LoadDataSourceAsync(vox::DataHandle::Self *a1)
{
  vox::VoxThread::Self *v2;

  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::LoadDataSourceAsync(a1);
  else
    vox::DataHandle::Construct(a1, -1, nullptr, nullptr, 0, 0);
  sub_BA06B0();
  return a1;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::LoadDataSourceAsync  (binary VA: 0xfd4d80)
// Original: vox::VoxEngine::LoadDataSourceAsync
// ----------------------------------------------------------------------------
vox::DataHandle::Self * vox::VoxEngine::LoadDataSourceAsync(vox::DataHandle::Self *a1, int a2, int a3, int a4, int a5, int a6, char *a7)
{
  vox::VoxThread::Self *v8;

  vox::VoxThread::GetCurThreadId(v8);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
  {
    vox::VoxEngineInternal::GetGroupId((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a7);
    vox::VoxEngineInternal::LoadDataSourceAsync(a1);
  }
  else
  {
    vox::DataHandle::Construct(a1, -1, nullptr, nullptr, 0, 0);
  }
  sub_BA06B0();
  return a1;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::ConvertToRawSource  (binary VA: 0xfd4e80)
// Original: vox::VoxEngine::ConvertToRawSource
// ----------------------------------------------------------------------------
vox::VoxEngine::Self * vox::VoxEngine::ConvertToRawSource(vox::VoxEngine::Self *self, vox::DataHandle::Self *a2, int a3)
{
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*(uint32_t *)(a3 + 8) & *(uint32_t *)(a3 + 4)) != -1 )
    vox::VoxEngineInternal::ConvertToRawSource(self, (vox::DataHandle::Self *)vox::VoxEngine::m_internal[0]);
  else
    vox::DataHandle::Construct(self, -1, nullptr, nullptr, 0, 0);
  sub_BA06B0();
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::ConvertToRamBufferSource  (binary VA: 0xfd4f60)
// Original: vox::VoxEngine::ConvertToRamBufferSource
// ----------------------------------------------------------------------------
vox::VoxEngine::Self * vox::VoxEngine::ConvertToRamBufferSource(vox::VoxEngine::Self *self, vox::DataHandle::Self *a2, int a3)
{
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*(uint32_t *)(a3 + 8) & *(uint32_t *)(a3 + 4)) != -1 )
    vox::VoxEngineInternal::ConvertToRamBufferSource(self, (vox::DataHandle::Self *)vox::VoxEngine::m_internal[0]);
  else
    vox::DataHandle::Construct(self, -1, nullptr, nullptr, 0, 0);
  sub_BA06B0();
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::SetUserData  (binary VA: 0xfd5040)
// Original: vox::VoxEngine::SetUserData
// ----------------------------------------------------------------------------
void vox::VoxEngine::SetUserData(int a1, int a2, int a3)
{
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*(uint32_t *)(a2 + 8) & *(uint32_t *)(a2 + 4)) != -1 )
    vox::VoxEngineInternal::SetUserData((vox::HandlableContainer::Self *)vox::VoxEngine::m_internal[0], a2, a3);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::GetUserData  (binary VA: 0xfd50d0)
// Original: vox::VoxEngine::GetUserData
// ----------------------------------------------------------------------------
vox::VoxEngine::Self * vox::VoxEngine::GetUserData(vox::VoxEngine::Self *self, vox::DataHandle::Self *a2, int a3)
{
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*(uint32_t *)(a3 + 8) & *(uint32_t *)(a3 + 4)) != -1 )
  {
    vox::VoxEngineInternal::GetUserData(self, (vox::DataHandle::Self *)vox::VoxEngine::m_internal[0]);
  }
  else
  {
    *(uint32_t *)self = -1;
    *((uint8_t *)self + 4) = 0;
  }
  sub_BA06B0();
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::SetPriorityBankId  (binary VA: 0xfd5180)
// Original: vox::VoxEngine::SetPriorityBankId
// ----------------------------------------------------------------------------
void vox::VoxEngine::SetPriorityBankId(vox::VoxEngine::Self *self, vox::DataHandle::Self *a2, unsigned int a3)
{
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::SetPriorityBankId((vox::HandlableContainer::Self *)vox::VoxEngine::m_internal[0], (int)(uintptr_t)(a2), a3);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::SetPriorityBankId  (binary VA: 0xfd5210)
// Original: vox::VoxEngine::SetPriorityBankId
// ----------------------------------------------------------------------------
void vox::VoxEngine::SetPriorityBankId(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2, unsigned int a3)
{
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::SetPriorityBankId((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::SetUid  (binary VA: 0xfd52a0)
// Original: vox::VoxEngine::SetUid
// ----------------------------------------------------------------------------
void vox::VoxEngine::SetUid(vox::VoxEngine::Self *self, vox::DataHandle::Self *a2, int a3)
{
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::SetUid((vox::HandlableContainer::Self *)vox::VoxEngine::m_internal[0], (int)(uintptr_t)(a2), a3);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::GetUid  (binary VA: 0xfd5330)
// Original: vox::VoxEngine::GetUid
// ----------------------------------------------------------------------------
int vox::VoxEngine::GetUid(vox::VoxEngine::Self *self, vox::DataHandle::Self *a2)
{
  int Uid;
  vox::VoxThread::Self *v4;
  int v5;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
  {
    Uid = -1;
    if ( (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
      Uid = vox::VoxEngineInternal::GetUid((vox::HandlableContainer::Self *)vox::VoxEngine::m_internal[0], (int)(uintptr_t)(a2));
  }
  else
  {
    Uid = -1;
  }
  v5 = Uid;
  sub_BA06B0();
  return v5;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::GetUid  (binary VA: 0xfd53d0)
// Original: vox::VoxEngine::GetUid
// ----------------------------------------------------------------------------
int vox::VoxEngine::GetUid(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2)
{
  int Uid;
  vox::VoxThread::Self *v4;
  int v5;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
  {
    Uid = -1;
    if ( (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
      Uid = vox::VoxEngineInternal::GetUid((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  }
  else
  {
    Uid = -1;
  }
  v5 = Uid;
  sub_BA06B0();
  return v5;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::ReleaseDatasource  (binary VA: 0xfd5470)
// Original: vox::VoxEngine::ReleaseDatasource
// ----------------------------------------------------------------------------
void vox::VoxEngine::ReleaseDatasource(vox::VoxEngine::Self *self, vox::DataHandle::Self *a2)
{
  vox::VoxThread::Self *v2;

  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::ReleaseDatasource((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::ReleaseDatasourceGroup  (binary VA: 0xfd54f0)
// Original: vox::VoxEngine::ReleaseDatasourceGroup
// ----------------------------------------------------------------------------
void vox::VoxEngine::ReleaseDatasourceGroup(vox::VoxEngine::Self *self, unsigned int a2)
{
  vox::VoxThread::Self *v2;

  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::ReleaseDatasourceGroup((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::ReleaseDatasourceGroup  (binary VA: 0xfd5560)
// Original: vox::VoxEngine::ReleaseDatasourceGroup
// ----------------------------------------------------------------------------
void vox::VoxEngine::ReleaseDatasourceGroup(vox::VoxEngine::Self *self, char *a2)
{
  unsigned int GroupId;
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
  {
    GroupId = vox::VoxEngineInternal::GetGroupId((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
    vox::VoxEngineInternal::ReleaseDatasourceGroup((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], GroupId);
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::GetEmitterHandles  (binary VA: 0xfd55f0)
// Original: vox::VoxEngine::GetEmitterHandles
// ----------------------------------------------------------------------------
int vox::VoxEngine::GetEmitterHandles(vox::VoxEngine::Self *self, vox::DataHandle::Self *a2, vox::EmitterHandle::Self *a3, int a4)
{
  int EmitterHandles;
  vox::VoxThread::Self *v6;
  int v7;

  vox::VoxThread::GetCurThreadId(v6);
  sub_BA06A0();
  EmitterHandles = 0;
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    EmitterHandles = vox::VoxEngineInternal::GetEmitterHandles(
                       (vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0],
                       a2,
                       a3,
                       a4);
  v7 = EmitterHandles;
  sub_BA06B0();
  return v7;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::GetAllDataSources  (binary VA: 0xfd5690)
// Original: vox::VoxEngine::GetAllDataSources
// ----------------------------------------------------------------------------
int vox::VoxEngine::GetAllDataSources(vox::VoxEngine::Self *self, vox::DataHandle::Self *a2, int a3)
{
  int AllDataSources;
  vox::VoxThread::Self *v5;

  vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  AllDataSources = 0;
  if ( vox::VoxEngine::m_internal[0] != 0 )
    AllDataSources = vox::VoxEngineInternal::GetAllDataSources(
                       (vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0],
                       a2,
                       a3);
  sub_BA06B0();
  return AllDataSources;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::IsReady  (binary VA: 0xfd5720)
// Original: vox::VoxEngine::IsReady
// ----------------------------------------------------------------------------
int vox::VoxEngine::IsReady(vox::VoxEngine::Self *self, vox::DataHandle::Self *a2)
{
  uint8_t IsReady;
  vox::VoxThread::Self *v4;
  uint8_t v5;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  IsReady = 0;
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    IsReady = vox::VoxEngineInternal::IsReady((vox::HandlableContainer::Self *)vox::VoxEngine::m_internal[0], (int)(uintptr_t)(a2));
  v5 = IsReady;
  sub_BA06B0();
  return v5;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::IsValid  (binary VA: 0xfd57b0)
// Original: vox::VoxEngine::IsValid
// ----------------------------------------------------------------------------
int vox::VoxEngine::IsValid(vox::VoxEngine::Self *self, vox::DataHandle::Self *a2)
{
  uint8_t IsValid;
  vox::VoxThread::Self *v4;
  uint8_t v5;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  IsValid = 0;
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    IsValid = vox::VoxEngineInternal::IsValid((vox::HandlableContainer::Self *)vox::VoxEngine::m_internal[0], (int)(uintptr_t)(a2));
  v5 = IsValid;
  sub_BA06B0();
  return v5;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::GetDuration  (binary VA: 0xfd5840)
// Original: vox::VoxEngine::GetDuration
// ----------------------------------------------------------------------------
long double vox::VoxEngine::GetDuration(vox::VoxEngine::Self *self, vox::DataHandle::Self *a2)
{
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::GetDuration((vox::HandlableContainer::Self *)vox::VoxEngine::m_internal[0], (int)(uintptr_t)(a2));
  sub_BA06B0();
  return (float)0.0;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::CreateEmitter  (binary VA: 0xfd58d0)
// Original: vox::VoxEngine::CreateEmitter
// ----------------------------------------------------------------------------
vox::VoxEngine::Self * vox::VoxEngine::CreateEmitter(vox::VoxEngine::Self *self, vox::DataHandle::Self *a2, const vox::emitter::CreationSettings::Self *a3)
{
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a3 + 2) & *((uint32_t *)a3 + 1)) != -1 )
    vox::VoxEngineInternal::CreateEmitter(self, (vox::DataHandle::Self *)vox::VoxEngine::m_internal[0], a3);
  else
    vox::EmitterHandle::Construct(self, -1, nullptr, nullptr, 0, 0);
  sub_BA06B0();
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::CreateEmitter  (binary VA: 0xfd59b0)
// Original: vox::VoxEngine::CreateEmitter
// ----------------------------------------------------------------------------
vox::VoxEngine::Self * vox::VoxEngine::CreateEmitter(vox::VoxEngine::Self *self, vox::DataHandle::Self *a2, int a3, void *a4)
{
  vox::VoxThread::Self *v5;

  vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*(uint32_t *)(a3 + 8) & *(uint32_t *)(a3 + 4)) != -1 )
    vox::VoxEngineInternal::CreateEmitter(self, (vox::DataHandle::Self *)vox::VoxEngine::m_internal[0], a3, a4);
  else
    vox::EmitterHandle::Construct(self, -1, nullptr, nullptr, 0, 0);
  sub_BA06B0();
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::CreateEmitterAsync  (binary VA: 0xfd5aa0)
// Original: vox::VoxEngine::CreateEmitterAsync
// ----------------------------------------------------------------------------
vox::VoxEngine::Self * vox::VoxEngine::CreateEmitterAsync(vox::VoxEngine::Self *self, vox::DataHandle::Self *a2, const vox::emitter::CreationSettings::Self *a3)
{
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a3 + 2) & *((uint32_t *)a3 + 1)) != -1 )
    vox::VoxEngineInternal::CreateEmitterAsync(self, (vox::DataHandle::Self *)vox::VoxEngine::m_internal[0], a3);
  else
    vox::EmitterHandle::Construct(self, -1, nullptr, nullptr, 0, 0);
  sub_BA06B0();
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::CreateEmitterAsync  (binary VA: 0xfd5b80)
// Original: vox::VoxEngine::CreateEmitterAsync
// ----------------------------------------------------------------------------
vox::VoxEngine::Self * vox::VoxEngine::CreateEmitterAsync(vox::VoxEngine::Self *self, vox::DataHandle::Self *a2, int a3, void *a4)
{
  vox::VoxThread::Self *v5;

  vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*(uint32_t *)(a3 + 8) & *(uint32_t *)(a3 + 4)) != -1 )
    vox::VoxEngineInternal::CreateEmitterAsync(self, (vox::DataHandle::Self *)vox::VoxEngine::m_internal[0], a3, a4);
  else
    vox::EmitterHandle::Construct(self, -1, nullptr, nullptr, 0, 0);
  sub_BA06B0();
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::SetUserData_eafd5c70  (binary VA: 0xfd5c70)
// Original: vox::VoxEngine::SetUserData
// ----------------------------------------------------------------------------
void vox::VoxEngine::SetUserData_eafd5c70(int a1, int a2, int a3)
{
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*(uint32_t *)(a2 + 8) & *(uint32_t *)(a2 + 4)) != -1 )
    vox::VoxEngineInternal::SetUserData(vox::VoxEngine::m_internal[0], a2, a3);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::GetUserData  (binary VA: 0xfd5d00)
// Original: vox::VoxEngine::GetUserData
// ----------------------------------------------------------------------------
vox::VoxEngine::Self * vox::VoxEngine::GetUserData(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2, int a3)
{
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*(uint32_t *)(a3 + 8) & *(uint32_t *)(a3 + 4)) != -1 )
  {
    vox::VoxEngineInternal::GetUserData(self, (vox::EmitterHandle::Self *)vox::VoxEngine::m_internal[0]);
  }
  else
  {
    *(uint32_t *)self = -1;
    *((uint8_t *)self + 4) = 0;
  }
  sub_BA06B0();
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::ReleaseEmitter  (binary VA: 0xfd5db0)
// Original: vox::VoxEngine::ReleaseEmitter
// ----------------------------------------------------------------------------
void vox::VoxEngine::ReleaseEmitter(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2)
{
  vox::VoxThread::Self *v2;

  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::ReleaseEmitter((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::GetData  (binary VA: 0xfd5e30)
// Original: vox::VoxEngine::GetData
// ----------------------------------------------------------------------------
vox::VoxEngine::Self * vox::VoxEngine::GetData(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2, int a3)
{
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*(uint32_t *)(a3 + 8) & *(uint32_t *)(a3 + 4)) != -1 )
    vox::VoxEngineInternal::GetData(self, (vox::EmitterHandle::Self *)vox::VoxEngine::m_internal[0]);
  else
    vox::DataHandle::Construct(self, -1, nullptr, nullptr, 0, 0);
  sub_BA06B0();
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::SetGain  (binary VA: 0xfd5f10)
// Original: vox::VoxEngine::SetGain
// ----------------------------------------------------------------------------
void vox::VoxEngine::SetGain(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2, float a3, float a4)
{
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::SetGain((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3, a4);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::SetGain  (binary VA: 0xfd5fa0)
// Original: vox::VoxEngine::SetGain
// ----------------------------------------------------------------------------
void vox::VoxEngine::SetGain(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2, float a3)
{
  vox::VoxEngine::SetGain(self, a2, a3, 0.05f);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::GetGain  (binary VA: 0xfd5fe0)
// Original: vox::VoxEngine::GetGain
// ----------------------------------------------------------------------------
long double vox::VoxEngine::GetGain(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2)
{
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::GetGain((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  sub_BA06B0();
  return (float)0.0;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::SetLoop  (binary VA: 0xfd6070)
// Original: vox::VoxEngine::SetLoop
// ----------------------------------------------------------------------------
void vox::VoxEngine::SetLoop(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2, bool a3)
{
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::SetLoop((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::SetPitch  (binary VA: 0xfd6110)
// Original: vox::VoxEngine::SetPitch
// ----------------------------------------------------------------------------
void vox::VoxEngine::SetPitch(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2, float a3, float a4)
{
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::SetPitch((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3, a4);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::SetPitch  (binary VA: 0xfd61a0)
// Original: vox::VoxEngine::SetPitch
// ----------------------------------------------------------------------------
void vox::VoxEngine::SetPitch(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2, float a3)
{
  vox::VoxEngine::SetPitch(self, a2, a3, 0.05f);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::GetPitch  (binary VA: 0xfd61e0)
// Original: vox::VoxEngine::GetPitch
// ----------------------------------------------------------------------------
long double vox::VoxEngine::GetPitch(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2)
{
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::GetPitch((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  sub_BA06B0();
  return (float)0.0;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::GetLoop  (binary VA: 0xfd6270)
// Original: vox::VoxEngine::GetLoop
// ----------------------------------------------------------------------------
int vox::VoxEngine::GetLoop(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2)
{
  uint8_t Loop;
  vox::VoxThread::Self *v4;
  uint8_t v5;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  Loop = 0;
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    Loop = vox::VoxEngineInternal::GetLoop((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  v5 = Loop;
  sub_BA06B0();
  return v5;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::SetPriority  (binary VA: 0xfd6300)
// Original: vox::VoxEngine::SetPriority
// ----------------------------------------------------------------------------
void vox::VoxEngine::SetPriority(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2, int a3)
{
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::SetPriority((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::GetPriority  (binary VA: 0xfd6390)
// Original: vox::VoxEngine::GetPriority
// ----------------------------------------------------------------------------
int vox::VoxEngine::GetPriority(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2)
{
  int Priority;
  vox::VoxThread::Self *v4;
  int v5;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
  {
    Priority = -1073741824;
    if ( (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
      Priority = vox::VoxEngineInternal::GetPriority((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  }
  else
  {
    Priority = -1073741824;
  }
  v5 = Priority;
  sub_BA06B0();
  return v5;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::Play  (binary VA: 0xfd6430)
// Original: vox::VoxEngine::Play
// ----------------------------------------------------------------------------
void vox::VoxEngine::Play(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2, bool a3, float a4)
{
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::Play((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3, a4);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::Play  (binary VA: 0xfd64d0)
// Original: vox::VoxEngine::Play
// ----------------------------------------------------------------------------
void vox::VoxEngine::Play(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2, bool a3)
{
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::Play((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::Play  (binary VA: 0xfd6570)
// Original: vox::VoxEngine::Play
// ----------------------------------------------------------------------------
void vox::VoxEngine::Play(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2, float a3)
{
  char Loop;
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
  {
    Loop = vox::VoxEngineInternal::GetLoop((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
    vox::VoxEngineInternal::Play((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, Loop, a3);
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::Play  (binary VA: 0xfd6620)
// Original: vox::VoxEngine::Play
// ----------------------------------------------------------------------------
void vox::VoxEngine::Play(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2)
{
  vox::VoxThread::Self *v2;

  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::Play((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::PlayInteractiveMusic  (binary VA: 0xfd66a0)
// Original: vox::VoxEngine::PlayInteractiveMusic
// ----------------------------------------------------------------------------
void vox::VoxEngine::PlayInteractiveMusic(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2, const char *a3, float a4)
{
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::PlayInteractiveMusic((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3, a4);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::PlayInteractiveMusic  (binary VA: 0xfd6730)
// Original: vox::VoxEngine::PlayInteractiveMusic
// ----------------------------------------------------------------------------
void vox::VoxEngine::PlayInteractiveMusic(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2, const char *a3)
{
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::PlayInteractiveMusic((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::Stop  (binary VA: 0xfd67c0)
// Original: vox::VoxEngine::Stop
// ----------------------------------------------------------------------------
void vox::VoxEngine::Stop(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2, float a3)
{
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::Stop((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::Stop  (binary VA: 0xfd6850)
// Original: vox::VoxEngine::Stop
// ----------------------------------------------------------------------------
void vox::VoxEngine::Stop(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2)
{
  vox::VoxThread::Self *v2;

  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::Stop((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::Pause  (binary VA: 0xfd68d0)
// Original: vox::VoxEngine::Pause
// ----------------------------------------------------------------------------
void vox::VoxEngine::Pause(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2, float a3)
{
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::Pause((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::Pause  (binary VA: 0xfd6960)
// Original: vox::VoxEngine::Pause
// ----------------------------------------------------------------------------
void vox::VoxEngine::Pause(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2)
{
  vox::VoxThread::Self *v2;

  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::Pause((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::Resume  (binary VA: 0xfd69e0)
// Original: vox::VoxEngine::Resume
// ----------------------------------------------------------------------------
void vox::VoxEngine::Resume(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2, float a3)
{
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::Resume((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::Resume  (binary VA: 0xfd6a70)
// Original: vox::VoxEngine::Resume
// ----------------------------------------------------------------------------
void vox::VoxEngine::Resume(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2)
{
  vox::VoxThread::Self *v2;

  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::Resume((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::GetAllEmitters  (binary VA: 0xfd6af0)
// Original: vox::VoxEngine::GetAllEmitters
// ----------------------------------------------------------------------------
int vox::VoxEngine::GetAllEmitters(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2, int a3)
{
  int AllEmitters;
  vox::VoxThread::Self *v5;

  vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  AllEmitters = 0;
  if ( vox::VoxEngine::m_internal[0] != 0 )
    AllEmitters = vox::VoxEngineInternal::GetAllEmitters(
                    (vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0],
                    a2,
                    a3);
  sub_BA06B0();
  return AllEmitters;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::PlayGroup  (binary VA: 0xfd6b80)
// Original: vox::VoxEngine::PlayGroup
// ----------------------------------------------------------------------------
void vox::VoxEngine::PlayGroup(vox::VoxEngine::Self *self, unsigned int a2, float a3)
{
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::PlayGroup((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::PlayGroup  (binary VA: 0xfd6c00)
// Original: vox::VoxEngine::PlayGroup
// ----------------------------------------------------------------------------
void vox::VoxEngine::PlayGroup(vox::VoxEngine::Self *self, char *a2, float a3)
{
  unsigned int GroupId;
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
  {
    GroupId = vox::VoxEngineInternal::GetGroupId((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
    vox::VoxEngineInternal::PlayGroup((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], GroupId, a3);
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::StopGroup  (binary VA: 0xfd6c90)
// Original: vox::VoxEngine::StopGroup
// ----------------------------------------------------------------------------
void vox::VoxEngine::StopGroup(vox::VoxEngine::Self *self, unsigned int a2, float a3)
{
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::StopGroup((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::StopGroup  (binary VA: 0xfd6d10)
// Original: vox::VoxEngine::StopGroup
// ----------------------------------------------------------------------------
void vox::VoxEngine::StopGroup(vox::VoxEngine::Self *self, char *a2, float a3)
{
  unsigned int GroupId;
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
  {
    GroupId = vox::VoxEngineInternal::GetGroupId((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
    vox::VoxEngineInternal::StopGroup((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], GroupId, a3);
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::PauseGroup  (binary VA: 0xfd6da0)
// Original: vox::VoxEngine::PauseGroup
// ----------------------------------------------------------------------------
void vox::VoxEngine::PauseGroup(vox::VoxEngine::Self *self, unsigned int a2, float a3)
{
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::PauseGroup((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::PauseGroup  (binary VA: 0xfd6e20)
// Original: vox::VoxEngine::PauseGroup
// ----------------------------------------------------------------------------
void vox::VoxEngine::PauseGroup(vox::VoxEngine::Self *self, char *a2, float a3)
{
  unsigned int GroupId;
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
  {
    GroupId = vox::VoxEngineInternal::GetGroupId((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
    vox::VoxEngineInternal::PauseGroup((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], GroupId, a3);
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::ResumeGroup  (binary VA: 0xfd6eb0)
// Original: vox::VoxEngine::ResumeGroup
// ----------------------------------------------------------------------------
void vox::VoxEngine::ResumeGroup(vox::VoxEngine::Self *self, unsigned int a2, float a3)
{
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::ResumeGroup((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::ResumeGroup  (binary VA: 0xfd6f30)
// Original: vox::VoxEngine::ResumeGroup
// ----------------------------------------------------------------------------
void vox::VoxEngine::ResumeGroup(vox::VoxEngine::Self *self, char *a2, float a3)
{
  unsigned int GroupId;
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
  {
    GroupId = vox::VoxEngineInternal::GetGroupId((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
    vox::VoxEngineInternal::ResumeGroup((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], GroupId, a3);
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::PlayGroup  (binary VA: 0xfd6fc0)
// Original: vox::VoxEngine::PlayGroup
// ----------------------------------------------------------------------------
void vox::VoxEngine::PlayGroup(vox::VoxEngine::Self *self, unsigned int a2)
{
  vox::VoxThread::Self *v2;

  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::PlayGroup((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::PlayGroup  (binary VA: 0xfd7030)
// Original: vox::VoxEngine::PlayGroup
// ----------------------------------------------------------------------------
void vox::VoxEngine::PlayGroup(vox::VoxEngine::Self *self, char *a2)
{
  unsigned int GroupId;
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
  {
    GroupId = vox::VoxEngineInternal::GetGroupId((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
    vox::VoxEngineInternal::PlayGroup((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], GroupId);
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::StopGroup  (binary VA: 0xfd70c0)
// Original: vox::VoxEngine::StopGroup
// ----------------------------------------------------------------------------
void vox::VoxEngine::StopGroup(vox::VoxEngine::Self *self, unsigned int a2)
{
  vox::VoxThread::Self *v2;

  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::StopGroup((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::StopGroup  (binary VA: 0xfd7130)
// Original: vox::VoxEngine::StopGroup
// ----------------------------------------------------------------------------
void vox::VoxEngine::StopGroup(vox::VoxEngine::Self *self, char *a2)
{
  unsigned int GroupId;
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
  {
    GroupId = vox::VoxEngineInternal::GetGroupId((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
    vox::VoxEngineInternal::StopGroup((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], GroupId);
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::PauseGroup  (binary VA: 0xfd71c0)
// Original: vox::VoxEngine::PauseGroup
// ----------------------------------------------------------------------------
void vox::VoxEngine::PauseGroup(vox::VoxEngine::Self *self, unsigned int a2)
{
  vox::VoxThread::Self *v2;

  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::PauseGroup((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::PauseGroup  (binary VA: 0xfd7230)
// Original: vox::VoxEngine::PauseGroup
// ----------------------------------------------------------------------------
void vox::VoxEngine::PauseGroup(vox::VoxEngine::Self *self, char *a2)
{
  unsigned int GroupId;
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
  {
    GroupId = vox::VoxEngineInternal::GetGroupId((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
    vox::VoxEngineInternal::PauseGroup((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], GroupId);
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::ResumeGroup  (binary VA: 0xfd72c0)
// Original: vox::VoxEngine::ResumeGroup
// ----------------------------------------------------------------------------
void vox::VoxEngine::ResumeGroup(vox::VoxEngine::Self *self, unsigned int a2)
{
  vox::VoxThread::Self *v2;

  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::ResumeGroup((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::ResumeGroup  (binary VA: 0xfd7330)
// Original: vox::VoxEngine::ResumeGroup
// ----------------------------------------------------------------------------
void vox::VoxEngine::ResumeGroup(vox::VoxEngine::Self *self, char *a2)
{
  unsigned int GroupId;
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
  {
    GroupId = vox::VoxEngineInternal::GetGroupId((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
    vox::VoxEngineInternal::ResumeGroup((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], GroupId);
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::AddGroup  (binary VA: 0xfd73c0)
// Original: vox::VoxEngine::AddGroup
// ----------------------------------------------------------------------------
int vox::VoxEngine::AddGroup(int a1, int a2)
{
  int v2;
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  v2 = -1;
  if ( vox::VoxEngine::m_internal[0] != 0 )
    v2 = vox::VoxEngineInternal::AddGroup(vox::VoxEngine::m_internal[0], a2);
  sub_BA06B0();
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::ReconfigureGroup  (binary VA: 0xfd7440)
// Original: vox::VoxEngine::ReconfigureGroup
// ----------------------------------------------------------------------------
int vox::VoxEngine::ReconfigureGroup(int a1, int a2, int a3)
{
  int v3;
  vox::VoxThread::Self *v5;

  vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  v3 = 0;
  if ( vox::VoxEngine::m_internal[0] != 0 )
    v3 = vox::VoxEngineInternal::ReconfigureGroup(vox::VoxEngine::m_internal[0], a2, a3);
  sub_BA06B0();
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::ReconfigureGroup  (binary VA: 0xfd74d0)
// Original: vox::VoxEngine::ReconfigureGroup
// ----------------------------------------------------------------------------
int vox::VoxEngine::ReconfigureGroup(int a1, char *a2, int a3)
{
  uint8_t v3;
  int GroupId;
  vox::VoxThread::Self *v6;
  uint8_t v7;

  vox::VoxThread::GetCurThreadId(v6);
  sub_BA06A0();
  v3 = 0;
  if ( vox::VoxEngine::m_internal[0] != 0 )
  {
    GroupId = vox::VoxEngineInternal::GetGroupId((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
    v3 = vox::VoxEngineInternal::ReconfigureGroup(vox::VoxEngine::m_internal[0], GroupId, a3);
  }
  v7 = v3;
  sub_BA06B0();
  return v7;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::IsGroupPresent  (binary VA: 0xfd7570)
// Original: vox::VoxEngine::IsGroupPresent
// ----------------------------------------------------------------------------
int vox::VoxEngine::IsGroupPresent(vox::VoxEngine::Self *self, char *a2)
{
  int v2;
  int GroupId;
  vox::VoxThread::Self *v5;

  vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  v2 = 0;
  if ( vox::VoxEngine::m_internal[0] != 0 )
  {
    GroupId = vox::VoxEngineInternal::GetGroupId((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
    LOBYTE(GroupId) = GroupId != -1;
    v2 = GroupId;
  }
  sub_BA06B0();
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::GetGroupId  (binary VA: 0xfd7600)
// Original: vox::VoxEngine::GetGroupId
// ----------------------------------------------------------------------------
int vox::VoxEngine::GetGroupId(vox::VoxEngine::Self *self, char *a2)
{
  int GroupId;
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  GroupId = -1;
  if ( vox::VoxEngine::m_internal[0] != 0 )
    GroupId = vox::VoxEngineInternal::GetGroupId((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  sub_BA06B0();
  return GroupId;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::GetGroupName  (binary VA: 0xfd7680)
// Original: vox::VoxEngine::GetGroupName
// ----------------------------------------------------------------------------
int vox::VoxEngine::GetGroupName(vox::VoxEngine::Self *self, unsigned int a2, char *a3, size_t a4)
{
  int GroupName;
  vox::VoxThread::Self *v6;

  vox::VoxThread::GetCurThreadId(v6);
  sub_BA06A0();
  GroupName = 0;
  if ( vox::VoxEngine::m_internal[0] != 0 )
    GroupName = vox::VoxEngineInternal::GetGroupName(
                  (vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0],
                  a2,
                  a3,
                  a4);
  sub_BA06B0();
  return GroupName;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::SetGroup  (binary VA: 0xfd7710)
// Original: vox::VoxEngine::SetGroup
// ----------------------------------------------------------------------------
void vox::VoxEngine::SetGroup(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2, unsigned int a3)
{
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::SetGroup((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::SetGroup  (binary VA: 0xfd77a0)
// Original: vox::VoxEngine::SetGroup
// ----------------------------------------------------------------------------
void vox::VoxEngine::SetGroup(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2, char *a3)
{
  unsigned int GroupId;
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
  {
    GroupId = vox::VoxEngineInternal::GetGroupId((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a3);
    vox::VoxEngineInternal::SetGroup((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, GroupId);
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::GetGroup  (binary VA: 0xfd7840)
// Original: vox::VoxEngine::GetGroup
// ----------------------------------------------------------------------------
int vox::VoxEngine::GetGroup(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2)
{
  int Group;
  vox::VoxThread::Self *v4;
  int v5;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  Group = 0;
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    Group = vox::VoxEngineInternal::GetGroup((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  v5 = Group;
  sub_BA06B0();
  return v5;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::IsMemberOfGroupById  (binary VA: 0xfd78d0)
// Original: vox::VoxEngine::IsMemberOfGroupById
// ----------------------------------------------------------------------------
int vox::VoxEngine::IsMemberOfGroupById(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2, unsigned int a3, bool a4)
{
  uint8_t IsMemberOfGroup;
  vox::VoxThread::Self *v6;
  uint8_t v7;

  vox::VoxThread::GetCurThreadId(v6);
  sub_BA06A0();
  IsMemberOfGroup = 0;
  if ( vox::VoxEngine::m_internal[0] != 0 )
    IsMemberOfGroup = vox::VoxEngineInternal::IsMemberOfGroup(
                        (vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0],
                        a2,
                        a3,
                        a4);
  v7 = IsMemberOfGroup;
  sub_BA06B0();
  return v7;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::IsMemberOfGroupByName  (binary VA: 0xfd7970)
// Original: vox::VoxEngine::IsMemberOfGroupByName
// ----------------------------------------------------------------------------
int vox::VoxEngine::IsMemberOfGroupByName(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2, char *a3, bool a4)
{
  uint8_t IsMemberOfGroup;
  unsigned int GroupId;
  vox::VoxThread::Self *v7;
  uint8_t v8;

  vox::VoxThread::GetCurThreadId(v7);
  sub_BA06A0();
  IsMemberOfGroup = 0;
  if ( vox::VoxEngine::m_internal[0] != 0 )
  {
    GroupId = vox::VoxEngineInternal::GetGroupId((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a3);
    IsMemberOfGroup = vox::VoxEngineInternal::IsMemberOfGroup(
                        (vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0],
                        a2,
                        GroupId,
                        a4);
  }
  v8 = IsMemberOfGroup;
  sub_BA06B0();
  return v8;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::LoadGroupSnapshotConfiguration  (binary VA: 0xfd7a20)
// Original: vox::VoxEngine::LoadGroupSnapshotConfiguration
// ----------------------------------------------------------------------------
int vox::VoxEngine::LoadGroupSnapshotConfiguration(vox::VoxEngine::Self *self, const char *a2)
{
  int GroupSnapshotConfiguration;
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  GroupSnapshotConfiguration = 0;
  if ( vox::VoxEngine::m_internal[0] != 0 )
    GroupSnapshotConfiguration = vox::VoxEngineInternal::LoadGroupSnapshotConfiguration(
                                   (vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0],
                                   a2);
  sub_BA06B0();
  return GroupSnapshotConfiguration;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::PushGroupSnapshot  (binary VA: 0xfd7aa0)
// Original: vox::VoxEngine::PushGroupSnapshot
// ----------------------------------------------------------------------------
int vox::VoxEngine::PushGroupSnapshot(vox::VoxEngine::Self *self, char *a2)
{
  int v2;
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  v2 = 0;
  if ( vox::VoxEngine::m_internal[0] != 0 )
    v2 = vox::VoxEngineInternal::PushGroupSnapshot((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  sub_BA06B0();
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::PopGroupSnapshot  (binary VA: 0xfd7b20)
// Original: vox::VoxEngine::PopGroupSnapshot
// ----------------------------------------------------------------------------
int vox::VoxEngine::PopGroupSnapshot(vox::VoxEngine::Self *self, char *a2)
{
  int v2;
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  v2 = 0;
  if ( vox::VoxEngine::m_internal[0] != 0 )
    v2 = vox::VoxEngineInternal::PopGroupSnapshot((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  sub_BA06B0();
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::ResetGroupSnapshot  (binary VA: 0xfd7ba0)
// Original: vox::VoxEngine::ResetGroupSnapshot
// ----------------------------------------------------------------------------
void vox::VoxEngine::ResetGroupSnapshot()
{
  vox::VoxThread::Self *v0;

  vox::VoxThread::GetCurThreadId(v0);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::ResetGroupSnapshot((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0]);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::GetPlayCursor  (binary VA: 0xfd7c10)
// Original: vox::VoxEngine::GetPlayCursor
// ----------------------------------------------------------------------------
long double vox::VoxEngine::GetPlayCursor(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2)
{
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::GetPlayCursor((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  sub_BA06B0();
  return (float)0.0;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::GetTotalPlayTime  (binary VA: 0xfd7ca0)
// Original: vox::VoxEngine::GetTotalPlayTime
// ----------------------------------------------------------------------------
long double vox::VoxEngine::GetTotalPlayTime(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2)
{
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::GetTotalPlayTime((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  sub_BA06B0();
  return (float)0.0;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::SetPlayCursor  (binary VA: 0xfd7d30)
// Original: vox::VoxEngine::SetPlayCursor
// ----------------------------------------------------------------------------
void vox::VoxEngine::SetPlayCursor(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2, float a3)
{
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::SetPlayCursor((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::GetRandomStartPositionMode  (binary VA: 0xfd7dc0)
// Original: vox::VoxEngine::GetRandomStartPositionMode
// ----------------------------------------------------------------------------
int vox::VoxEngine::GetRandomStartPositionMode(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2)
{
  uint8_t RandomStartPositionMode;
  vox::VoxThread::Self *v4;
  uint8_t v5;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  RandomStartPositionMode = 0;
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    RandomStartPositionMode = vox::VoxEngineInternal::GetRandomStartPositionMode(
                                (vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0],
                                a2);
  v5 = RandomStartPositionMode;
  sub_BA06B0();
  return v5;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::SetRandomStartPositionMode  (binary VA: 0xfd7e50)
// Original: vox::VoxEngine::SetRandomStartPositionMode
// ----------------------------------------------------------------------------
void vox::VoxEngine::SetRandomStartPositionMode(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2, bool a3)
{
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::SetRandomStartPositionMode((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::GetPlaybackDelay  (binary VA: 0xfd7ef0)
// Original: vox::VoxEngine::GetPlaybackDelay
// ----------------------------------------------------------------------------
long double vox::VoxEngine::GetPlaybackDelay(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2)
{
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::GetPlaybackDelay((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  sub_BA06B0();
  return (float)0.0;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::SetPlaybackDelay  (binary VA: 0xfd7f80)
// Original: vox::VoxEngine::SetPlaybackDelay
// ----------------------------------------------------------------------------
void vox::VoxEngine::SetPlaybackDelay(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2, float a3)
{
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::SetPlaybackDelay((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::IsReady  (binary VA: 0xfd8010)
// Original: vox::VoxEngine::IsReady
// ----------------------------------------------------------------------------
int vox::VoxEngine::IsReady(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2)
{
  uint8_t IsReady;
  vox::VoxThread::Self *v4;
  uint8_t v5;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  IsReady = 0;
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    IsReady = vox::VoxEngineInternal::IsReady((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  v5 = IsReady;
  sub_BA06B0();
  return v5;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::IsValid  (binary VA: 0xfd80a0)
// Original: vox::VoxEngine::IsValid
// ----------------------------------------------------------------------------
int vox::VoxEngine::IsValid(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2)
{
  uint8_t IsValid;
  vox::VoxThread::Self *v4;
  uint8_t v5;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  IsValid = 0;
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    IsValid = vox::VoxEngineInternal::IsValid((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  v5 = IsValid;
  sub_BA06B0();
  return v5;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::IsAlive  (binary VA: 0xfd8130)
// Original: vox::VoxEngine::IsAlive
// ----------------------------------------------------------------------------
int vox::VoxEngine::IsAlive(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2)
{
  uint8_t IsAlive;
  vox::VoxThread::Self *v4;
  uint8_t v5;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  IsAlive = 0;
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    IsAlive = vox::VoxEngineInternal::IsAlive((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  v5 = IsAlive;
  sub_BA06B0();
  return v5;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::IsPlaying  (binary VA: 0xfd81c0)
// Original: vox::VoxEngine::IsPlaying
// ----------------------------------------------------------------------------
int vox::VoxEngine::IsPlaying(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2)
{
  uint8_t IsPlaying;
  vox::VoxThread::Self *v4;
  uint8_t v5;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  IsPlaying = 0;
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    IsPlaying = vox::VoxEngineInternal::IsPlaying((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  v5 = IsPlaying;
  sub_BA06B0();
  return v5;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::CanPlay  (binary VA: 0xfd8250)
// Original: vox::VoxEngine::CanPlay
// ----------------------------------------------------------------------------
int vox::VoxEngine::CanPlay(vox::VoxEngine::Self *self, const vox::emitter::CreationSettings::Self *a2)
{
  int CanPlay;
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  CanPlay = 0;
  if ( vox::VoxEngine::m_internal[0] != 0 )
    CanPlay = vox::VoxEngineInternal::CanPlay((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  sub_BA06B0();
  return CanPlay;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::IsDone  (binary VA: 0xfd82d0)
// Original: vox::VoxEngine::IsDone
// ----------------------------------------------------------------------------
int vox::VoxEngine::IsDone(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2)
{
  char IsDone;
  vox::VoxThread::Self *v4;
  uint8_t v5;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  IsDone = 1;
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    IsDone = vox::VoxEngineInternal::IsDone((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  v5 = IsDone;
  sub_BA06B0();
  return v5;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::GetPauseCount  (binary VA: 0xfd8360)
// Original: vox::VoxEngine::GetPauseCount
// ----------------------------------------------------------------------------
int vox::VoxEngine::GetPauseCount(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2)
{
  int PauseCount;
  vox::VoxThread::Self *v4;
  int v5;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
  {
    PauseCount = -1;
    if ( (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
      PauseCount = vox::VoxEngineInternal::GetPauseCount((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  }
  else
  {
    PauseCount = -1;
  }
  v5 = PauseCount;
  sub_BA06B0();
  return v5;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::GetStatus  (binary VA: 0xfd8400)
// Original: vox::VoxEngine::GetStatus
// ----------------------------------------------------------------------------
int vox::VoxEngine::GetStatus(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2)
{
  int Status;
  vox::VoxThread::Self *v4;
  int v5;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  Status = 0;
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    Status = vox::VoxEngineInternal::GetStatus((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  v5 = Status;
  sub_BA06B0();
  return v5;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::SetMasterGain  (binary VA: 0xfd8490)
// Original: vox::VoxEngine::SetMasterGain
// ----------------------------------------------------------------------------
void vox::VoxEngine::SetMasterGain(vox::VoxEngine::Self *self, float a2, float a3)
{
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::SetMasterGain((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::SetMasterGain  (binary VA: 0xfd8510)
// Original: vox::VoxEngine::SetMasterGain
// ----------------------------------------------------------------------------
void vox::VoxEngine::SetMasterGain(vox::VoxEngine::Self *self, float a2)
{
  vox::VoxThread::Self *v2;

  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::SetMasterGain((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, 0.05f);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::GetMasterGain  (binary VA: 0xfd8590)
// Original: vox::VoxEngine::GetMasterGain
// ----------------------------------------------------------------------------
long double vox::VoxEngine::GetMasterGain()
{
  vox::VoxThread::Self *v1;

  vox::VoxThread::GetCurThreadId(v1);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::GetMasterGain((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0]);
  sub_BA06B0();
  return (float)0.0;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::SetGroupVolume  (binary VA: 0xfd8610)
// Original: vox::VoxEngine::SetGroupVolume
// ----------------------------------------------------------------------------
void vox::VoxEngine::SetGroupVolume(vox::VoxEngine::Self *self, unsigned int a2, float a3, float a4)
{
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::SetGroupVolume((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3, a4);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::SetGroupVolume  (binary VA: 0xfd8690)
// Original: vox::VoxEngine::SetGroupVolume
// ----------------------------------------------------------------------------
void vox::VoxEngine::SetGroupVolume(vox::VoxEngine::Self *self, char *a2, float a3, float a4)
{
  unsigned int GroupId;
  vox::VoxThread::Self *v5;

  vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
  {
    GroupId = vox::VoxEngineInternal::GetGroupId((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
    vox::VoxEngineInternal::SetGroupVolume((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], GroupId, a3, a4);
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::SetGroupVolume  (binary VA: 0xfd8730)
// Original: vox::VoxEngine::SetGroupVolume
// ----------------------------------------------------------------------------
void vox::VoxEngine::SetGroupVolume(vox::VoxEngine::Self *self, unsigned int a2, float a3)
{
  vox::VoxEngine::SetGroupVolume(self, a2, a3, 0.05f);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::SetGroupVolume  (binary VA: 0xfd8770)
// Original: vox::VoxEngine::SetGroupVolume
// ----------------------------------------------------------------------------
void vox::VoxEngine::SetGroupVolume(vox::VoxEngine::Self *self, char *a2, float a3)
{
  vox::VoxEngine::SetGroupVolume(self, a2, a3, 0.05f);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::SetGroupPitch  (binary VA: 0xfd87b0)
// Original: vox::VoxEngine::SetGroupPitch
// ----------------------------------------------------------------------------
void vox::VoxEngine::SetGroupPitch(vox::VoxEngine::Self *self, unsigned int a2, float a3, float a4)
{
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::SetGroupPitch((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3, a4);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::SetGroupPitch  (binary VA: 0xfd8830)
// Original: vox::VoxEngine::SetGroupPitch
// ----------------------------------------------------------------------------
void vox::VoxEngine::SetGroupPitch(vox::VoxEngine::Self *self, char *a2, float a3, float a4)
{
  unsigned int GroupId;
  vox::VoxThread::Self *v5;

  vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
  {
    GroupId = vox::VoxEngineInternal::GetGroupId((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
    vox::VoxEngineInternal::SetGroupPitch((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], GroupId, a3, a4);
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::SetGroupPitch  (binary VA: 0xfd88d0)
// Original: vox::VoxEngine::SetGroupPitch
// ----------------------------------------------------------------------------
void vox::VoxEngine::SetGroupPitch(vox::VoxEngine::Self *self, unsigned int a2, float a3)
{
  vox::VoxEngine::SetGroupPitch(self, a2, a3, 0.05f);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::SetGroupPitch  (binary VA: 0xfd8910)
// Original: vox::VoxEngine::SetGroupPitch
// ----------------------------------------------------------------------------
void vox::VoxEngine::SetGroupPitch(vox::VoxEngine::Self *self, char *a2, float a3)
{
  vox::VoxEngine::SetGroupPitch(self, a2, a3, 0.05f);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::GetGroupVolume  (binary VA: 0xfd8950)
// Original: vox::VoxEngine::GetGroupVolume
// ----------------------------------------------------------------------------
long double vox::VoxEngine::GetGroupVolume(vox::VoxEngine::Self *self, unsigned int a2)
{
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::GetGroupVolume((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  sub_BA06B0();
  return (float)0.0;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::GetGroupVolume  (binary VA: 0xfd89d0)
// Original: vox::VoxEngine::GetGroupVolume
// ----------------------------------------------------------------------------
long double vox::VoxEngine::GetGroupVolume(vox::VoxEngine::Self *self, char *a2)
{
  unsigned int GroupId;
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
  {
    GroupId = vox::VoxEngineInternal::GetGroupId((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
    vox::VoxEngineInternal::GetGroupVolume((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], GroupId);
  }
  sub_BA06B0();
  return (float)0.0;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::GetGroupEffectiveVolume  (binary VA: 0xfd8a70)
// Original: vox::VoxEngine::GetGroupEffectiveVolume
// ----------------------------------------------------------------------------
long double vox::VoxEngine::GetGroupEffectiveVolume(vox::VoxEngine::Self *self, unsigned int a2)
{
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::GetGroupEffectiveVolume((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  sub_BA06B0();
  return (float)0.0;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::GetGroupEffectiveVolume  (binary VA: 0xfd8af0)
// Original: vox::VoxEngine::GetGroupEffectiveVolume
// ----------------------------------------------------------------------------
long double vox::VoxEngine::GetGroupEffectiveVolume(vox::VoxEngine::Self *self, char *a2)
{
  unsigned int GroupId;
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
  {
    GroupId = vox::VoxEngineInternal::GetGroupId((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
    vox::VoxEngineInternal::GetGroupEffectiveVolume((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], GroupId);
  }
  sub_BA06B0();
  return (float)0.0;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::GetGroupPitch  (binary VA: 0xfd8b90)
// Original: vox::VoxEngine::GetGroupPitch
// ----------------------------------------------------------------------------
long double vox::VoxEngine::GetGroupPitch(vox::VoxEngine::Self *self, unsigned int a2)
{
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::GetGroupPitch((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  sub_BA06B0();
  return (float)0.0;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::GetGroupPitch  (binary VA: 0xfd8c10)
// Original: vox::VoxEngine::GetGroupPitch
// ----------------------------------------------------------------------------
long double vox::VoxEngine::GetGroupPitch(vox::VoxEngine::Self *self, char *a2)
{
  unsigned int GroupId;
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
  {
    GroupId = vox::VoxEngineInternal::GetGroupId((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
    vox::VoxEngineInternal::GetGroupPitch((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], GroupId);
  }
  sub_BA06B0();
  return (float)0.0;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::SetGroupEnable  (binary VA: 0xfd8cb0)
// Original: vox::VoxEngine::SetGroupEnable
// ----------------------------------------------------------------------------
void vox::VoxEngine::SetGroupEnable(vox::VoxEngine::Self *self, unsigned int a2, bool a3, float a4)
{
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::SetGroupEnable((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3, a4);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::SetGroupEnable  (binary VA: 0xfd8d40)
// Original: vox::VoxEngine::SetGroupEnable
// ----------------------------------------------------------------------------
void vox::VoxEngine::SetGroupEnable(vox::VoxEngine::Self *self, char *a2, bool a3, float a4)
{
  unsigned int GroupId;
  vox::VoxThread::Self *v5;

  vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
  {
    GroupId = vox::VoxEngineInternal::GetGroupId((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
    vox::VoxEngineInternal::SetGroupEnable((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], GroupId, a3, a4);
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::SetGroupEnable  (binary VA: 0xfd8de0)
// Original: vox::VoxEngine::SetGroupEnable
// ----------------------------------------------------------------------------
void vox::VoxEngine::SetGroupEnable(vox::VoxEngine::Self *self, unsigned int a2, bool a3)
{
  vox::VoxEngine::SetGroupEnable(self, a2, a3, 0.05f);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::SetGroupEnable  (binary VA: 0xfd8e20)
// Original: vox::VoxEngine::SetGroupEnable
// ----------------------------------------------------------------------------
void vox::VoxEngine::SetGroupEnable(vox::VoxEngine::Self *self, char *a2, bool a3)
{
  vox::VoxEngine::SetGroupEnable(self, a2, a3, 0.05f);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::GetGroupEnable  (binary VA: 0xfd8e60)
// Original: vox::VoxEngine::GetGroupEnable
// ----------------------------------------------------------------------------
int vox::VoxEngine::GetGroupEnable(vox::VoxEngine::Self *self, unsigned int a2)
{
  int GroupEnable;
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  GroupEnable = 0;
  if ( vox::VoxEngine::m_internal[0] != 0 )
    GroupEnable = vox::VoxEngineInternal::GetGroupEnable((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  sub_BA06B0();
  return GroupEnable;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::GetGroupEnable  (binary VA: 0xfd8ee0)
// Original: vox::VoxEngine::GetGroupEnable
// ----------------------------------------------------------------------------
int vox::VoxEngine::GetGroupEnable(vox::VoxEngine::Self *self, char *a2)
{
  uint8_t GroupEnable;
  unsigned int GroupId;
  vox::VoxThread::Self *v5;
  uint8_t v6;

  vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  GroupEnable = 0;
  if ( vox::VoxEngine::m_internal[0] != 0 )
  {
    GroupId = vox::VoxEngineInternal::GetGroupId((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
    GroupEnable = vox::VoxEngineInternal::GetGroupEnable(
                    (vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0],
                    GroupId);
  }
  v6 = GroupEnable;
  sub_BA06B0();
  return v6;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::Set3DEmitterPosition  (binary VA: 0xfd8f70)
// Original: vox::VoxEngine::Set3DEmitterPosition
// ----------------------------------------------------------------------------
void vox::VoxEngine::Set3DEmitterPosition(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2, float a3, float a4, float a5)
{
  vox::VoxThread::Self *v5;

  vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::Set3DEmitterPosition(
      (vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0],
      a2,
      a3,
      a4,
      a5);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::Set3DEmitterVelocity  (binary VA: 0xfd9010)
// Original: vox::VoxEngine::Set3DEmitterVelocity
// ----------------------------------------------------------------------------
void vox::VoxEngine::Set3DEmitterVelocity(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2, float a3, float a4, float a5)
{
  vox::VoxThread::Self *v5;

  vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::Set3DEmitterVelocity(
      (vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0],
      a2,
      a3,
      a4,
      a5);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::Set3DEmitterDirection  (binary VA: 0xfd90b0)
// Original: vox::VoxEngine::Set3DEmitterDirection
// ----------------------------------------------------------------------------
void vox::VoxEngine::Set3DEmitterDirection(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2, float a3, float a4, float a5)
{
  vox::VoxThread::Self *v5;

  vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::Set3DEmitterDirection(
      (vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0],
      a2,
      a3,
      a4,
      a5);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::Set3DEmitterParameters  (binary VA: 0xfd9150)
// Original: vox::VoxEngine::Set3DEmitterParameters
// ----------------------------------------------------------------------------
void vox::VoxEngine::Set3DEmitterParameters(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2, const vox::Vox3DEmitterParameters::Self *a3)
{
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::Set3DEmitterParameters((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::Set3DEmitterParameterf  (binary VA: 0xfd91e0)
// Original: vox::VoxEngine::Set3DEmitterParameterf
// ----------------------------------------------------------------------------
void vox::VoxEngine::Set3DEmitterParameterf(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2, int a3, float a4)
{
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::Set3DEmitterParameterf((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3, a4);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::Set3DEmitterParameteri  (binary VA: 0xfd9270)
// Original: vox::VoxEngine::Set3DEmitterParameteri
// ----------------------------------------------------------------------------
void vox::VoxEngine::Set3DEmitterParameteri(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2, int a3, int a4)
{
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::Set3DEmitterParameteri((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3, a4);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::Get3DEmitterPosition  (binary VA: 0xfd9300)
// Original: vox::VoxEngine::Get3DEmitterPosition
// ----------------------------------------------------------------------------
void vox::VoxEngine::Get3DEmitterPosition(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2, float *a3, float *a4, float *a5)
{
  vox::VoxThread::Self *v5;

  vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::Get3DEmitterPosition(
      (vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0],
      a2,
      a3,
      a4,
      a5);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::Get3DEmitterVelocity  (binary VA: 0xfd93a0)
// Original: vox::VoxEngine::Get3DEmitterVelocity
// ----------------------------------------------------------------------------
void vox::VoxEngine::Get3DEmitterVelocity(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2, float *a3, float *a4, float *a5)
{
  vox::VoxThread::Self *v5;

  vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::Get3DEmitterVelocity(
      (vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0],
      a2,
      a3,
      a4,
      a5);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::Get3DEmitterDirection  (binary VA: 0xfd9440)
// Original: vox::VoxEngine::Get3DEmitterDirection
// ----------------------------------------------------------------------------
void vox::VoxEngine::Get3DEmitterDirection(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2, float *a3, float *a4, float *a5)
{
  vox::VoxThread::Self *v5;

  vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::Get3DEmitterDirection(
      (vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0],
      a2,
      a3,
      a4,
      a5);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::Get3DEmitterParameters  (binary VA: 0xfd94e0)
// Original: vox::VoxEngine::Get3DEmitterParameters
// ----------------------------------------------------------------------------
void vox::VoxEngine::Get3DEmitterParameters(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2, vox::Vox3DEmitterParameters::Self *a3)
{
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::Get3DEmitterParameters((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::Get3DEmitterParameterf  (binary VA: 0xfd9570)
// Original: vox::VoxEngine::Get3DEmitterParameterf
// ----------------------------------------------------------------------------
void vox::VoxEngine::Get3DEmitterParameterf(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2, int a3, float *a4)
{
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::Get3DEmitterParameterf((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3, a4);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::Get3DEmitterParameteri  (binary VA: 0xfd9600)
// Original: vox::VoxEngine::Get3DEmitterParameteri
// ----------------------------------------------------------------------------
void vox::VoxEngine::Get3DEmitterParameteri(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2, int a3, int *a4)
{
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::Get3DEmitterParameteri((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3, a4);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::Set3DListenerPosition  (binary VA: 0xfd9690)
// Original: vox::VoxEngine::Set3DListenerPosition
// ----------------------------------------------------------------------------
void vox::VoxEngine::Set3DListenerPosition(vox::VoxEngine::Self *self, float a2, float a3, float a4)
{
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::Set3DListenerPosition((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3, a4);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::Set3DListenerVelocity  (binary VA: 0xfd9710)
// Original: vox::VoxEngine::Set3DListenerVelocity
// ----------------------------------------------------------------------------
void vox::VoxEngine::Set3DListenerVelocity(vox::VoxEngine::Self *self, float a2, float a3, float a4)
{
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::Set3DListenerVelocity((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3, a4);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::Set3DListenerOrientation  (binary VA: 0xfd9790)
// Original: vox::VoxEngine::Set3DListenerOrientation
// ----------------------------------------------------------------------------
void vox::VoxEngine::Set3DListenerOrientation(vox::VoxEngine::Self *self, float a2, float a3, float a4, float a5, float a6, float a7)
{
  vox::VoxThread::Self *v7;

  vox::VoxThread::GetCurThreadId(v7);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::Set3DListenerOrientation(
      (vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0],
      a2,
      a3,
      a4,
      a5,
      a6,
      a7);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::Set3DGeneralParameter  (binary VA: 0xfd9830)
// Original: vox::VoxEngine::Set3DGeneralParameter
// ----------------------------------------------------------------------------
void vox::VoxEngine::Set3DGeneralParameter(vox::VoxEngine::Self *self, const vox::Vox3DGeneralParameters *a2)
{
  vox::VoxThread::Self *v2;

  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::Set3DGeneralParameter((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::Set3DGeneralParameterf  (binary VA: 0xfd98a0)
// Original: vox::VoxEngine::Set3DGeneralParameterf
// ----------------------------------------------------------------------------
void vox::VoxEngine::Set3DGeneralParameterf(vox::VoxEngine::Self *self, int a2, float a3)
{
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::Set3DGeneralParameterf((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::Set3DGeneralParameteri  (binary VA: 0xfd9920)
// Original: vox::VoxEngine::Set3DGeneralParameteri
// ----------------------------------------------------------------------------
void vox::VoxEngine::Set3DGeneralParameteri(vox::VoxEngine::Self *self, int a2, int a3)
{
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::Set3DGeneralParameteri((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::Get3DListenerPosition  (binary VA: 0xfd99a0)
// Original: vox::VoxEngine::Get3DListenerPosition
// ----------------------------------------------------------------------------
void vox::VoxEngine::Get3DListenerPosition(vox::VoxEngine::Self *self, float *a2, float *a3, float *a4)
{
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::Get3DListenerPosition((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3, a4);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::Get3DListenerVelocity  (binary VA: 0xfd9a20)
// Original: vox::VoxEngine::Get3DListenerVelocity
// ----------------------------------------------------------------------------
void vox::VoxEngine::Get3DListenerVelocity(vox::VoxEngine::Self *self, float *a2, float *a3, float *a4)
{
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::Get3DListenerVelocity((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3, a4);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::Get3DListenerOrientation  (binary VA: 0xfd9aa0)
// Original: vox::VoxEngine::Get3DListenerOrientation
// ----------------------------------------------------------------------------
void vox::VoxEngine::Get3DListenerOrientation(vox::VoxEngine::Self *self, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7)
{
  vox::VoxThread::Self *v7;

  vox::VoxThread::GetCurThreadId(v7);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::Get3DListenerOrientation(
      (vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0],
      a2,
      a3,
      a4,
      a5,
      a6,
      a7);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::Get3DGeneralParameter  (binary VA: 0xfd9b40)
// Original: vox::VoxEngine::Get3DGeneralParameter
// ----------------------------------------------------------------------------
void vox::VoxEngine::Get3DGeneralParameter(vox::VoxEngine::Self *self, vox::Vox3DGeneralParameters *a2)
{
  vox::VoxThread::Self *v2;

  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::Get3DGeneralParameter((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::Get3DGeneralParameterf  (binary VA: 0xfd9bb0)
// Original: vox::VoxEngine::Get3DGeneralParameterf
// ----------------------------------------------------------------------------
void vox::VoxEngine::Get3DGeneralParameterf(vox::VoxEngine::Self *self, int a2, float *a3)
{
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::Get3DGeneralParameterf((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::Get3DGeneralParameteri  (binary VA: 0xfd9c30)
// Original: vox::VoxEngine::Get3DGeneralParameteri
// ----------------------------------------------------------------------------
void vox::VoxEngine::Get3DGeneralParameteri(vox::VoxEngine::Self *self, int a2, int *a3)
{
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::Get3DGeneralParameteri((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::AttachDSP  (binary VA: 0xfd9cb0)
// Original: vox::VoxEngine::AttachDSP
// ----------------------------------------------------------------------------
int vox::VoxEngine::AttachDSP(vox::VoxEngine::Self *self, char *a2, vox::CustomDSP::Self *a3)
{
  int v3;
  vox::VoxThread::Self *v5;

  vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  v3 = 0;
  if ( vox::VoxEngine::m_internal[0] != 0 )
    v3 = vox::VoxEngineInternal::AttachDSP((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3);
  sub_BA06B0();
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::DetachDSP  (binary VA: 0xfd9d40)
// Original: vox::VoxEngine::DetachDSP
// ----------------------------------------------------------------------------
int vox::VoxEngine::DetachDSP(vox::VoxEngine::Self *self, char *a2)
{
  vox::VoxThread::Self *v3;
  uint8_t v4;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  v4 = vox::VoxEngine::AttachDSP(self, a2, nullptr);
  sub_BA06B0();
  return v4;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::SetRoutingVolume  (binary VA: 0xfd9dc0)
// Original: vox::VoxEngine::SetRoutingVolume
// ----------------------------------------------------------------------------
void vox::VoxEngine::SetRoutingVolume(int a1, char *a2, char *a3, char *a4, char *a5, char *a6, char *a7)
{
  vox::VoxThread::Self *v7;

  vox::VoxThread::GetCurThreadId(v7);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::SetRoutingVolume(vox::VoxEngine::m_internal[0], a2, a3, a4, a5, a6, a7);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::SetRoutingVolume  (binary VA: 0xfd9e60)
// Original: vox::VoxEngine::SetRoutingVolume
// ----------------------------------------------------------------------------
void vox::VoxEngine::SetRoutingVolume(int a1, char *a2, char *a3, char *a4, char *a5, char *a6)
{
  vox::VoxEngine::SetRoutingVolume(a1, a2, a3, a4, a5, a6, (char *)0x3D4CCCCD);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::SetDSPEmitterParameter  (binary VA: 0xfd9ec0)
// Original: vox::VoxEngine::SetDSPEmitterParameter
// ----------------------------------------------------------------------------
void vox::VoxEngine::SetDSPEmitterParameter(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2, int a3, char *a4)
{
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::SetDSPEmitterParameter((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3, a4);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::SetInteractiveMusicState  (binary VA: 0xfd9f50)
// Original: vox::VoxEngine::SetInteractiveMusicState
// ----------------------------------------------------------------------------
void vox::VoxEngine::SetInteractiveMusicState(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2, const char *a3)
{
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::SetInteractiveMusicState((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::SetKillOnResume  (binary VA: 0xfd9fe0)
// Original: vox::VoxEngine::SetKillOnResume
// ----------------------------------------------------------------------------
void vox::VoxEngine::SetKillOnResume(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2, bool a3)
{
  vox::VoxThread::Self *v3;

  vox::VoxThread::GetCurThreadId(v3);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::SetKillOnResume((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::GetKillOnResume  (binary VA: 0xfda080)
// Original: vox::VoxEngine::GetKillOnResume
// ----------------------------------------------------------------------------
int vox::VoxEngine::GetKillOnResume(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2)
{
  uint8_t KillOnResume;
  vox::VoxThread::Self *v4;
  uint8_t v5;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  KillOnResume = 0;
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    KillOnResume = vox::VoxEngineInternal::GetKillOnResume((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  v5 = KillOnResume;
  sub_BA06B0();
  return v5;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::RegisterForEmitterStateChangeNotification  (binary VA: 0xfda110)
// Original: vox::VoxEngine::RegisterForEmitterStateChangeNotification
// ----------------------------------------------------------------------------
void vox::VoxEngine::RegisterForEmitterStateChangeNotification(int a1, int a2, int a3, int a4)
{
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*(uint32_t *)(a2 + 8) & *(uint32_t *)(a2 + 4)) != -1 )
    vox::VoxEngineInternal::RegisterForEmitterStateChangeNotification(vox::VoxEngine::m_internal[0], a2, a3, a4);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::UnregisterForEmitterStateChangeNotification  (binary VA: 0xfda1a0)
// Original: vox::VoxEngine::UnregisterForEmitterStateChangeNotification
// ----------------------------------------------------------------------------
void vox::VoxEngine::UnregisterForEmitterStateChangeNotification(vox::VoxEngine::Self *self, vox::EmitterHandle::Self *a2)
{
  vox::VoxThread::Self *v2;

  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 && (*((uint32_t *)a2 + 2) & *((uint32_t *)a2 + 1)) != -1 )
    vox::VoxEngineInternal::UnregisterForEmitterStateChangeNotification(
      (vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0],
      a2);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::GetOutputMode  (binary VA: 0xfda220)
// Original: vox::VoxEngine::GetOutputMode
// ----------------------------------------------------------------------------
int vox::VoxEngine::GetOutputMode()
{
  int OutputMode;
  vox::VoxThread::Self *v2;

  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    OutputMode = vox::VoxEngineInternal::GetOutputMode((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0]);
  else
    OutputMode = -1;
  sub_BA06B0();
  return OutputMode;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::SetOutputMode  (binary VA: 0xfda2a0)
// Original: vox::VoxEngine::SetOutputMode
// ----------------------------------------------------------------------------
int vox::VoxEngine::SetOutputMode(int a1, int a2)
{
  int v2;
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  v2 = 0;
  if ( vox::VoxEngine::m_internal[0] != 0 )
    v2 = vox::VoxEngineInternal::SetOutputMode(vox::VoxEngine::m_internal[0], a2);
  sub_BA06B0();
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::PrintDebug  (binary VA: 0xfda320)
// Original: vox::VoxEngine::PrintDebug
// ----------------------------------------------------------------------------
void vox::VoxEngine::PrintDebug()
{
  vox::VoxThread::Self *v0;

  vox::VoxThread::GetCurThreadId(v0);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::PrintDebug((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0]);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::GetDebugInfo  (binary VA: 0xfda390)
// Original: vox::VoxEngine::GetDebugInfo
// ----------------------------------------------------------------------------
void vox::VoxEngine::GetDebugInfo(int a1, int a2)
{
  vox::VoxThread::Self *v2;

  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::GetDebugInfo(vox::VoxEngine::m_internal[0], a2);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::RegisterExternalDataGenerator  (binary VA: 0xfda400)
// Original: vox::VoxEngine::RegisterExternalDataGenerator
// ----------------------------------------------------------------------------
int vox::VoxEngine::RegisterExternalDataGenerator(int a1, int a2, char *a3)
{
  int v3;
  vox::VoxThread::Self *v5;

  vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  if ( a2 != 0 && vox::VoxEngine::m_internal[0] != 0 )
    v3 = vox::VoxEngineInternal::RegisterExternalDataGenerator(vox::VoxEngine::m_internal[0], a2, a3);
  else
    v3 = 0;
  sub_BA06B0();
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::UnregisterExternalDataGenerator  (binary VA: 0xfda490)
// Original: vox::VoxEngine::UnregisterExternalDataGenerator
// ----------------------------------------------------------------------------
void vox::VoxEngine::UnregisterExternalDataGenerator(int a1, int a2)
{
  vox::VoxThread::Self *v2;

  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  if ( a2 != 0 && vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::UnregisterExternalDataGenerator(vox::VoxEngine::m_internal[0], a2);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::UpdateSourcesThreaded  (binary VA: 0xfda520)
// Original: vox::VoxEngine::UpdateSourcesThreaded
// ----------------------------------------------------------------------------
void vox::VoxEngine::UpdateSourcesThreaded()
{
  vox::VoxThread::Self *v0;

  vox::VoxThread::GetCurThreadId(v0);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::UpdateSources((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0]);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::UpdateSourcesThreaded_eafda590  (binary VA: 0xfda590)
// Original: vox::VoxEngine::UpdateSourcesThreaded
// ----------------------------------------------------------------------------
void vox::VoxEngine::UpdateSourcesThreaded_eafda590()
{
  vox::VoxThread::Self *v0;

  vox::VoxThread::GetCurThreadId(v0);
  sub_BA0690();
  vox::VoxEngine::UpdateSourcesThreaded();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::UpdateEmittersThreaded  (binary VA: 0xfda5c0)
// Original: vox::VoxEngine::UpdateEmittersThreaded
// ----------------------------------------------------------------------------
void vox::VoxEngine::UpdateEmittersThreaded(vox::VoxEngine::Self *self)
{
  float TimeDT; // xmm0_4
  vox::VoxThread::Self *v2;
  double Time;

  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
  {
    Time = GetTime();
    TimeDT = GetTimeDT(*((double *)self + 1), Time);
    *((double *)self + 1) = Time;
    vox::VoxEngineInternal::UpdateEmitters((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], TimeDT);
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::UpdateEmittersThreaded_eafda670  (binary VA: 0xfda670)
// Original: vox::VoxEngine::UpdateEmittersThreaded
// ----------------------------------------------------------------------------
void vox::VoxEngine::UpdateEmittersThreaded_eafda670(vox::VoxEngine::Self *self)
{
  vox::VoxThread::Self *v1;

  vox::VoxThread::GetCurThreadId(v1);
  sub_BA0690();
  vox::VoxEngine::UpdateEmittersThreaded(self);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::UpdateThreaded  (binary VA: 0xfda6a0)
// Original: vox::VoxEngine::UpdateThreaded
// ----------------------------------------------------------------------------
void vox::VoxEngine::UpdateThreaded(vox::VoxEngine::Self *self)
{
  vox::VoxThread::Self *v1;

  vox::VoxThread::GetCurThreadId(v1);
  sub_BA06A0();
  vox::VoxEngine::UpdateSourcesThreaded();
  vox::VoxEngine::UpdateEmittersThreaded(self);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::UpdateThreaded_eafda710  (binary VA: 0xfda710)
// Original: vox::VoxEngine::UpdateThreaded
// ----------------------------------------------------------------------------
void vox::VoxEngine::UpdateThreaded_eafda710(vox::VoxEngine::Self *self)
{
  vox::VoxThread::Self *v1;

  vox::VoxThread::GetCurThreadId(v1);
  sub_BA0690();
  vox::VoxEngine::UpdateThreaded(self);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::DebugStreamCreate  (binary VA: 0xfda740)
// Original: vox::VoxEngine::DebugStreamCreate
// ----------------------------------------------------------------------------
int vox::VoxEngine::DebugStreamCreate()
{
  int v0;
  vox::VoxThread::Self *v2;

  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    v0 = vox::VoxEngineInternal::DebugStreamCreate((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0]);
  else
    v0 = -1;
  sub_BA06B0();
  return v0;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::DebugStreamDestroy  (binary VA: 0xfda7c0)
// Original: vox::VoxEngine::DebugStreamDestroy
// ----------------------------------------------------------------------------
int vox::VoxEngine::DebugStreamDestroy(vox::VoxEngine::Self *self, int a2)
{
  int v2;
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  v2 = 0;
  if ( vox::VoxEngine::m_internal[0] != 0 )
    v2 = vox::VoxEngineInternal::DebugStreamDestroy((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2);
  sub_BA06B0();
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::DebugStreamGetMessageCount  (binary VA: 0xfda840)
// Original: vox::VoxEngine::DebugStreamGetMessageCount
// ----------------------------------------------------------------------------
int vox::VoxEngine::DebugStreamGetMessageCount(vox::VoxEngine::Self *self, int a2)
{
  int MessageCount;
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    MessageCount = vox::VoxEngineInternal::DebugStreamGetMessageCount(
                     (vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0],
                     a2);
  else
    MessageCount = -1;
  sub_BA06B0();
  return MessageCount;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::DebugStreamGetTopMessageSize  (binary VA: 0xfda8d0)
// Original: vox::VoxEngine::DebugStreamGetTopMessageSize
// ----------------------------------------------------------------------------
int vox::VoxEngine::DebugStreamGetTopMessageSize(vox::VoxEngine::Self *self, int a2)
{
  int TopMessageSize;
  vox::VoxThread::Self *v4;

  vox::VoxThread::GetCurThreadId(v4);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    TopMessageSize = vox::VoxEngineInternal::DebugStreamGetTopMessageSize(
                       (vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0],
                       a2);
  else
    TopMessageSize = -1;
  sub_BA06B0();
  return TopMessageSize;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::DebugStreamGetMessage  (binary VA: 0xfda960)
// Original: vox::VoxEngine::DebugStreamGetMessage
// ----------------------------------------------------------------------------
int vox::VoxEngine::DebugStreamGetMessage(vox::VoxEngine::Self *self, int a2, char *a3, int a4)
{
  int Message;
  vox::VoxThread::Self *v6;

  vox::VoxThread::GetCurThreadId(v6);
  sub_BA06A0();
  Message = 0;
  if ( vox::VoxEngine::m_internal[0] != 0 )
    Message = vox::VoxEngineInternal::DebugStreamGetMessage(
                (vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0],
                a2,
                a3,
                a4);
  sub_BA06B0();
  return Message;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::DebugStreamSendCommand  (binary VA: 0xfda9f0)
// Original: vox::VoxEngine::DebugStreamSendCommand
// ----------------------------------------------------------------------------
int vox::VoxEngine::DebugStreamSendCommand(vox::VoxEngine::Self *self, int a2, const char *a3)
{
  int v3;
  vox::VoxThread::Self *v5;

  vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  v3 = 0;
  if ( vox::VoxEngine::m_internal[0] != 0 )
    v3 = vox::VoxEngineInternal::DebugStreamSendCommand((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0], a2, a3);
  sub_BA06B0();
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngine::GetInitTime  (binary VA: 0xfdaa80)
// Original: vox::VoxEngine::GetInitTime
// ----------------------------------------------------------------------------
long double vox::VoxEngine::GetInitTime()
{
  vox::VoxThread::Self *v1;

  vox::VoxThread::GetCurThreadId(v1);
  sub_BA06A0();
  if ( vox::VoxEngine::m_internal[0] != 0 )
    vox::VoxEngineInternal::GetInitTime((vox::VoxEngineInternal::Self *)vox::VoxEngine::m_internal[0]);
  sub_BA06B0();
  return (double)0.0;
}


