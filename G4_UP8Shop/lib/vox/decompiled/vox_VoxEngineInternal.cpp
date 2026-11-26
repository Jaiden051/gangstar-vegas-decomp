#include "Core/Utils/DecompTypes.h"
#include "vox_VoxEngineInternal.h"

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::AddPriorityBank  (binary VA: 0x1021750)
// Original: vox::VoxEngineInternal::AddPriorityBank
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::AddPriorityBank(int a1, int a2)
{
  int result;

  result = -1;
  if ( *(uint32_t *)(a1 + 212) != 0 )
    return vox::PriorityBankManager::AddPriorityBank(*(uint32_t *)(a1 + 212), a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::ReconfigurePriorityBank  (binary VA: 0x1021790)
// Original: vox::VoxEngineInternal::ReconfigurePriorityBank
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::ReconfigurePriorityBank(int a1, unsigned int a2, int a3)
{
  int result;

  result = 0;
  if ( *(uint32_t *)(a1 + 212) != 0 )
    return vox::PriorityBankManager::SetPriorityBank(*(vox::PriorityBankManager::Self **)(a1 + 212), a2, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::GetPriorityBankId  (binary VA: 0x10217d0)
// Original: vox::VoxEngineInternal::GetPriorityBankId
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::GetPriorityBankId(vox::PriorityBankManager::Self **self, char *a2)
{
  int result;

  result = -1;
  if ( *(self + 53) != nullptr )
    return vox::PriorityBankManager::GetPriorityBankId(*(self + 53), a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Initialize  (binary VA: 0x1021810)
// Original: vox::VoxEngineInternal::Initialize
// ----------------------------------------------------------------------------
vox::FileSystemStdio::Self * vox::VoxEngineInternal::Initialize(vox::VoxEngineInternal::Self *self)
{
  vox::Self *v2;

  if ( *((uint32_t *)self + 170) == 0 )
    *((uint32_t *)self + 170) = (uint32_t)(uintptr_t)(vox::CreateDriver(v2));
  return vox::FileSystemInterface::GetInstance();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::SetMicrophoneCallback  (binary VA: 0x1021860)
// Original: vox::VoxEngineInternal::SetMicrophoneCallback
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::SetMicrophoneCallback(int a1, int a2)
{
  int result;
  uint8_t v3;

  result = 0;
  if ( *(uint32_t *)(a1 + 680) != 0 )
  {
    vox::Mutex::Lock((pthread_mutex_t **)(a1 + 220));
    v3 = (*(int (**)(uint32_t, int))(**(uint32_t **)(a1 + 680) + 68))(*(uint32_t *)(a1 + 680), a2);
    vox::Mutex::Unlock((pthread_mutex_t **)(a1 + 220));
    return v3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::RemoveMicrophoneCallback  (binary VA: 0x10218e0)
// Original: vox::VoxEngineInternal::RemoveMicrophoneCallback
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::VoxEngineInternal::RemoveMicrophoneCallback(pthread_mutex_t **self)
{
  pthread_mutex_t *result;

  if ( *(self + 170) != nullptr )
  {
    vox::Mutex::Lock(self + 55);
    (*(void (**)(uint32_t))(G4_MUTEX_LOCK((*(self + 170))) + 72))((uint32_t)(uintptr_t)(*(self + 170)));
    return vox::Mutex::Unlock(self + 55);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::RegisterAudioDataSink  (binary VA: 0x1021940)
// Original: vox::VoxEngineInternal::RegisterAudioDataSink
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::RegisterAudioDataSink()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::UnregisterAudioDataSink  (binary VA: 0x1021950)
// Original: vox::VoxEngineInternal::UnregisterAudioDataSink
// ----------------------------------------------------------------------------
void vox::VoxEngineInternal::UnregisterAudioDataSink()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Suspend  (binary VA: 0x1021960)
// Original: vox::VoxEngineInternal::Suspend
// ----------------------------------------------------------------------------
void vox::VoxEngineInternal::Suspend(pthread_mutex_t **self)
{
  int v1;

  if ( *(self + 170) != nullptr )
  {
    vox::Mutex::Lock(self + 55);
    if ( *(self + 190) == nullptr )
    {
      v1 = (int)(uintptr_t)(*(self + 170));
      if ( v1 != 0 )
        (*(void (**)(uint32_t))(*(uint32_t *)v1 + 16))((uint32_t)(uintptr_t)(*(self + 170)));
    }
    *(self + 190) = (pthread_mutex_t *)((char *)*(self + 190) + 1);
    vox::Mutex::Unlock(self + 55);
  }
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::IsSuspended  (binary VA: 0x10219e0)
// Original: vox::VoxEngineInternal::IsSuspended
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::IsSuspended(pthread_mutex_t **self)
{
  int v1;
  int v2;

  vox::Mutex::Lock(self + 55);
  v1 = (int)(uintptr_t)(*(self + 190));
  LOBYTE(v1) = v1 > 0;
  v2 = v1;
  vox::Mutex::Unlock(self + 55);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::ResetDriver  (binary VA: 0x1021a40)
// Original: vox::VoxEngineInternal::ResetDriver
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::VoxEngineInternal::ResetDriver(pthread_mutex_t **self)
{
  int v1;

  vox::Mutex::Lock(self + 55);
  v1 = (int)(uintptr_t)(*(self + 170));
  if ( v1 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v1 + 24))((uint32_t)(uintptr_t)(*(self + 170)));
  return vox::Mutex::Unlock(self + 55);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::RegisterStreamType  (binary VA: 0x1021aa0)
// Original: vox::VoxEngineInternal::RegisterStreamType
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::RegisterStreamType(vox::VoxEngineInternal::Self *self, vox::StreamInterface::Self *(*a2)(void *))
{
  int result;

  result = *((uint32_t *)self + 136);
  if ( result > 30 )
    return -1;
  *((uint32_t *)self + 136) = result + 1;
  *((uint32_t *)self + result + 104) = (uint32_t)(uintptr_t)(a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::RegisterDecoderType  (binary VA: 0x1021ad0)
// Original: vox::VoxEngineInternal::RegisterDecoderType
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::RegisterDecoderType(int a1, int a2)
{
  int result;

  result = *(uint32_t *)(a1 + 676);
  if ( result > 30 )
    return -1;
  *(uint32_t *)(a1 + 676) = result + 1;
  *(uint32_t *)(a1 + 4 * result + 548) = a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::DebugStreamCreate  (binary VA: 0x1021b00)
// Original: vox::VoxEngineInternal::DebugStreamCreate
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::DebugStreamCreate(vox::VoxEngineInternal::Self *self)
{
  vox::VoxDebugStreamManager::Self *v1;
  int DebugStream;

  v1 = *((vox::VoxDebugStreamManager::Self **)self + 191);
  if ( v1 == nullptr )
    return -1;
  vox::VoxDebugStreamManager::Lock(*((vox::VoxDebugStreamManager::Self **)self + 191));
  DebugStream = vox::VoxDebugStreamManager::CreateDebugStream(*((vox::VoxDebugStreamManager::Self **)self + 191));
  vox::VoxDebugStreamManager::Unlock(v1);
  return DebugStream;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::DebugStreamDestroy  (binary VA: 0x1021b70)
// Original: vox::VoxEngineInternal::DebugStreamDestroy
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::DebugStreamDestroy(vox::VoxEngineInternal::Self *self, int a2)
{
  int result;
  vox::VoxDebugStreamManager::Self *v3;
  uint8_t v4;

  result = 0;
  v3 = *((vox::VoxDebugStreamManager::Self **)self + 191);
  if ( v3 != nullptr )
  {
    vox::VoxDebugStreamManager::Lock(*((vox::VoxDebugStreamManager::Self **)self + 191));
    v4 = vox::VoxDebugStreamManager::DestroyDebugStream(*((vox::VoxDebugStreamManager::Self **)self + 191), a2);
    vox::VoxDebugStreamManager::Unlock(v3);
    return v4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::DebugStreamGetMessageCount  (binary VA: 0x1021be0)
// Original: vox::VoxEngineInternal::DebugStreamGetMessageCount
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::DebugStreamGetMessageCount(vox::VoxEngineInternal::Self *self, int a2)
{
  vox::VoxDebugStreamManager::Self *v2;
  int Stream;
  uint32_t *v4;
  int i;

  v2 = *((vox::VoxDebugStreamManager::Self **)self + 191);
  if ( v2 == nullptr )
    return -1;
  vox::VoxDebugStreamManager::Lock(*((vox::VoxDebugStreamManager::Self **)self + 191));
  Stream = (int)(uintptr_t)(vox::VoxDebugStreamManager::GetStream(*((vox::VoxDebugStreamManager::Self **)self + 191), a2));
  if ( Stream == 0 || *(uint8_t *)(Stream + 53) != 0 )
  {
    i = -1;
    vox::VoxDebugStreamManager::Unlock(v2);
  }
  else
  {
    v4 = *(uint32_t **)(Stream + 8);
    for ( i = 0; (uint32_t *)(Stream + 8) != v4; ++i )
      v4 = (uint32_t *)*v4;
    vox::VoxDebugStreamManager::Unlock(v2);
  }
  return i;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::DebugStreamGetTopMessageSize  (binary VA: 0x1021c70)
// Original: vox::VoxEngineInternal::DebugStreamGetTopMessageSize
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::DebugStreamGetTopMessageSize(vox::VoxEngineInternal::Self *self, int a2)
{
  vox::VoxDebugStreamManager::Self *v2;
  int Stream;
  int v4;
  int v6;

  v2 = *((vox::VoxDebugStreamManager::Self **)self + 191);
  if ( v2 == nullptr )
    return -1;
  vox::VoxDebugStreamManager::Lock(*((vox::VoxDebugStreamManager::Self **)self + 191));
  Stream = (int)(uintptr_t)(vox::VoxDebugStreamManager::GetStream(*((vox::VoxDebugStreamManager::Self **)self + 191), a2));
  if ( Stream == 0 || *(uint8_t *)(Stream + 53) != 0 || (v4 = *(uint32_t *)(Stream + 8)) == Stream + 8 )
  {
    vox::VoxDebugStreamManager::Unlock(v2);
    return -1;
  }
  else
  {
    v6 = *(uint32_t *)(*(uint32_t *)(v4 + 8) - 12) + 1;
    vox::VoxDebugStreamManager::Unlock(v2);
    return v6;
  }
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::DebugStreamGetMessage  (binary VA: 0x1021d10)
// Original: vox::VoxEngineInternal::DebugStreamGetMessage
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::DebugStreamGetMessage(vox::VoxEngineInternal::Self *self, int a2, char *dest, int a4)
{
  int result;
  vox::VoxDebugStreamManager::Self *v5;
  int Stream;
  int v7;
  int v8;
  uint32_t *src;
  uint32_t *v10;
  int v11;
  size_t n;

  result = 0;
  v5 = *((vox::VoxDebugStreamManager::Self **)self + 191);
  if ( v5 != nullptr )
  {
    vox::VoxDebugStreamManager::Lock(*((vox::VoxDebugStreamManager::Self **)self + 191));
    Stream = (int)(uintptr_t)(vox::VoxDebugStreamManager::GetStream(*((vox::VoxDebugStreamManager::Self **)self + 191), a2));
    v7 = Stream;
    if ( Stream == 0
      || *(uint8_t *)(Stream + 53) != 0
      || (v8 = *(uint32_t *)(Stream + 8)) == v7 + 8
      || *((src = *(uint32_t **)(v8 + 8)) - 3) >= a4 )
    {
      vox::VoxDebugStreamManager::Unlock(v5);
      return 0;
    }
    else
    {
      n = *(src - 3);
      memcpy(dest, src, n);
      dest[n] = 0;
      v10 = *(uint32_t **)(v7 + 8);
      sub_1901940(v10);
      v11 = v10[2];
      if ( (uint32_t *)(v11 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v11 - 12));
      }
      VoxFreeInternal(v10);
      vox::VoxDebugStreamManager::Unlock(v5);
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::DebugStreamSendCommand  (binary VA: 0x1021e20)
// Original: vox::VoxEngineInternal::DebugStreamSendCommand
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::DebugStreamSendCommand(vox::VoxEngineInternal::Self *self, int a2, char *a3)
{
  vox::VoxDebugStreamManager::Self *v3;
  int Stream;
  int v6;
  int v7;
  void *v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef uint32_t _g4_t_v11[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (26u + sizeof(_g4_t_v10)) > _g4_s1 ? (26u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v11)) > _g4_s2 ? (28u + sizeof(_g4_t_v11)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 26u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  v3 = *((vox::VoxDebugStreamManager::Self **)self + 191);
  if ( a3 == nullptr || v3 == nullptr )
    return 0;
  vox::VoxDebugStreamManager::Lock(*((vox::VoxDebugStreamManager::Self **)self + 191));
  Stream = (int)(uintptr_t)(vox::VoxDebugStreamManager::GetStream(*((vox::VoxDebugStreamManager::Self **)self + 191), a2));
  v6 = Stream;
  if ( Stream != 0 && *(uint8_t *)(Stream + 53) == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v11), a3, (int)(uintptr_t)(&v10));
    v7 = VoxAllocInternal(0xCu, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    if ( v7 != -8 )
    {
      v9 = v7;
      g4_std::string::construct_copy(v7 + 8, v11);
      v7 = v9;
    }
    sub_1901920(v7, v6);
    v8 = (void *)(v11[0] - 12);
    if ( (uint32_t *)(v11[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v11[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v8);
    }
    vox::VoxDebugStreamManager::Unlock(v3);
    return 1;
  }
  else
  {
    vox::VoxDebugStreamManager::Unlock(v3);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::GetInitTime  (binary VA: 0x1021f60)
// Original: vox::VoxEngineInternal::GetInitTime
// ----------------------------------------------------------------------------
long double vox::VoxEngineInternal::GetInitTime(vox::VoxEngineInternal::Self *self)
{
  return *(double *)((char *)self + 772);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Update3D  (binary VA: 0x1021f70)
// Original: vox::VoxEngineInternal::Update3D
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::Update3D(vox::VoxEngineInternal::Self *self)
{
  int result;
  bool v2;
  uint32_t v3[9];

  result = *((uint32_t *)self + 170);
  if ( result != 0 )
  {
    if ( *((uint8_t *)self + 380) != 0 )
    {
      result = G4_VCALL<int>(result, 40, 0, (char *)self + 272);
      *((uint8_t *)self + 380) = 0;
    }
    if ( *((uint8_t *)self + 381) != 0 )
    {
      result = (*(int (**)(uint32_t, int, char *))(**((uint32_t **)self + 170) + 40))(
                 *((uint32_t *)self + 170),
                 1,
                 (char *)self + 276);
      *((uint8_t *)self + 381) = 0;
    }
    if ( *((uint8_t *)self + 382) != 0 )
    {
      result = (*(int (**)(uint32_t, int, char *))(**((uint32_t **)self + 170) + 40))(
                 *((uint32_t *)self + 170),
                 2,
                 (char *)self + 280);
      *((uint8_t *)self + 382) = 0;
    }
    if ( *((uint8_t *)self + 383) != 0 )
    {
      result = (*(int (**)(uint32_t, int, char *))(**((uint32_t **)self + 170) + 40))(
                 *((uint32_t *)self + 170),
                 3,
                 (char *)self + 284);
      *((uint8_t *)self + 383) = 0;
    }
    if ( *((uint8_t *)self + 384) != 0 )
    {
      result = (*(int (**)(uint32_t, int, char *))(**((uint32_t **)self + 170) + 40))(
                 *((uint32_t *)self + 170),
                 4,
                 (char *)self + 224);
      *((uint8_t *)self + 384) = 0;
    }
    if ( *((uint8_t *)self + 385) != 0 )
    {
      result = (*(int (**)(uint32_t, int, char *))(**((uint32_t **)self + 170) + 40))(
                 *((uint32_t *)self + 170),
                 5,
                 (char *)self + 236);
      *((uint8_t *)self + 385) = 0;
    }
    if ( *((uint8_t *)self + 386) != 0 )
    {
      std::memcpy(v3, (char *)self + 248, 24);
      result = (*(int (**)(uint32_t, int, uint32_t *))(**((uint32_t **)self + 170) + 40))(
                 *((uint32_t *)self + 170),
                 6,
                 v3);
      v2 = *((uint8_t *)self + 387) == 0;
      *((uint8_t *)self + 386) = 0;
      if ( v2 )
      {
LABEL_16:
        if ( *((uint8_t *)self + 388) == 0 )
          goto LABEL_17;
        goto LABEL_37;
      }
    }
    else if ( *((uint8_t *)self + 387) == 0 )
    {
      goto LABEL_16;
    }
    result = (*(int (**)(uint32_t, int, char *))(**((uint32_t **)self + 170) + 40))(
               *((uint32_t *)self + 170),
               7,
               (char *)self + 308);
    v2 = *((uint8_t *)self + 388) == 0;
    *((uint8_t *)self + 387) = 0;
    if ( v2 )
    {
LABEL_17:
      if ( *((uint8_t *)self + 389) == 0 )
        goto LABEL_18;
      goto LABEL_38;
    }
LABEL_37:
    result = (*(int (**)(uint32_t, int, char *))(**((uint32_t **)self + 170) + 40))(
               *((uint32_t *)self + 170),
               8,
               (char *)self + 312);
    v2 = *((uint8_t *)self + 389) == 0;
    *((uint8_t *)self + 388) = 0;
    if ( v2 )
    {
LABEL_18:
      if ( *((uint8_t *)self + 390) == 0 )
        goto LABEL_19;
      goto LABEL_39;
    }
LABEL_38:
    result = (*(int (**)(uint32_t, int, char *))(**((uint32_t **)self + 170) + 40))(
               *((uint32_t *)self + 170),
               9,
               (char *)self + 316);
    v2 = *((uint8_t *)self + 390) == 0;
    *((uint8_t *)self + 389) = 0;
    if ( v2 )
    {
LABEL_19:
      if ( *((uint8_t *)self + 391) == 0 )
        goto LABEL_20;
      goto LABEL_40;
    }
LABEL_39:
    result = (*(int (**)(uint32_t, int, char *))(**((uint32_t **)self + 170) + 40))(
               *((uint32_t *)self + 170),
               10,
               (char *)self + 320);
    v2 = *((uint8_t *)self + 391) == 0;
    *((uint8_t *)self + 390) = 0;
    if ( v2 )
    {
LABEL_20:
      if ( *((uint8_t *)self + 392) == 0 )
        goto LABEL_21;
      goto LABEL_41;
    }
LABEL_40:
    result = (*(int (**)(uint32_t, int, char *))(**((uint32_t **)self + 170) + 40))(
               *((uint32_t *)self + 170),
               11,
               (char *)self + 324);
    v2 = *((uint8_t *)self + 392) == 0;
    *((uint8_t *)self + 391) = 0;
    if ( v2 )
    {
LABEL_21:
      if ( *((uint8_t *)self + 393) == 0 )
        goto LABEL_22;
      goto LABEL_42;
    }
LABEL_41:
    result = (*(int (**)(uint32_t, int, char *))(**((uint32_t **)self + 170) + 40))(
               *((uint32_t *)self + 170),
               12,
               (char *)self + 328);
    v2 = *((uint8_t *)self + 393) == 0;
    *((uint8_t *)self + 392) = 0;
    if ( v2 )
    {
LABEL_22:
      if ( *((uint8_t *)self + 394) == 0 )
        goto LABEL_23;
      goto LABEL_43;
    }
LABEL_42:
    result = (*(int (**)(uint32_t, int, char *))(**((uint32_t **)self + 170) + 40))(
               *((uint32_t *)self + 170),
               13,
               (char *)self + 332);
    v2 = *((uint8_t *)self + 394) == 0;
    *((uint8_t *)self + 393) = 0;
    if ( v2 )
    {
LABEL_23:
      if ( *((uint8_t *)self + 395) == 0 )
        goto LABEL_24;
      goto LABEL_44;
    }
LABEL_43:
    result = (*(int (**)(uint32_t, int, char *))(**((uint32_t **)self + 170) + 40))(
               *((uint32_t *)self + 170),
               14,
               (char *)self + 336);
    v2 = *((uint8_t *)self + 395) == 0;
    *((uint8_t *)self + 394) = 0;
    if ( v2 )
    {
LABEL_24:
      if ( *((uint8_t *)self + 396) == 0 )
        goto LABEL_25;
      goto LABEL_45;
    }
LABEL_44:
    result = (*(int (**)(uint32_t, int, char *))(**((uint32_t **)self + 170) + 40))(
               *((uint32_t *)self + 170),
               15,
               (char *)self + 340);
    v2 = *((uint8_t *)self + 396) == 0;
    *((uint8_t *)self + 395) = 0;
    if ( v2 )
    {
LABEL_25:
      if ( *((uint8_t *)self + 397) == 0 )
        goto LABEL_26;
      goto LABEL_46;
    }
LABEL_45:
    result = (*(int (**)(uint32_t, int, char *))(**((uint32_t **)self + 170) + 40))(
               *((uint32_t *)self + 170),
               16,
               (char *)self + 344);
    v2 = *((uint8_t *)self + 397) == 0;
    *((uint8_t *)self + 396) = 0;
    if ( v2 )
    {
LABEL_26:
      if ( *((uint8_t *)self + 398) == 0 )
        goto LABEL_27;
      goto LABEL_47;
    }
LABEL_46:
    result = (*(int (**)(uint32_t, int, char *))(**((uint32_t **)self + 170) + 40))(
               *((uint32_t *)self + 170),
               17,
               (char *)self + 348);
    v2 = *((uint8_t *)self + 398) == 0;
    *((uint8_t *)self + 397) = 0;
    if ( v2 )
    {
LABEL_27:
      if ( *((uint8_t *)self + 399) == 0 )
        goto LABEL_28;
      goto LABEL_48;
    }
LABEL_47:
    result = (*(int (**)(uint32_t, int, char *))(**((uint32_t **)self + 170) + 40))(
               *((uint32_t *)self + 170),
               18,
               (char *)self + 352);
    v2 = *((uint8_t *)self + 399) == 0;
    *((uint8_t *)self + 398) = 0;
    if ( v2 )
    {
LABEL_28:
      if ( *((uint8_t *)self + 400) == 0 )
        goto LABEL_29;
      goto LABEL_49;
    }
LABEL_48:
    result = (*(int (**)(uint32_t, int, char *))(**((uint32_t **)self + 170) + 40))(
               *((uint32_t *)self + 170),
               19,
               (char *)self + 356);
    v2 = *((uint8_t *)self + 400) == 0;
    *((uint8_t *)self + 399) = 0;
    if ( v2 )
    {
LABEL_29:
      if ( *((uint8_t *)self + 401) == 0 )
        goto LABEL_30;
      goto LABEL_50;
    }
LABEL_49:
    result = (*(int (**)(uint32_t, int, char *))(**((uint32_t **)self + 170) + 40))(
               *((uint32_t *)self + 170),
               20,
               (char *)self + 360);
    v2 = *((uint8_t *)self + 401) == 0;
    *((uint8_t *)self + 400) = 0;
    if ( v2 )
    {
LABEL_30:
      if ( *((uint8_t *)self + 402) == 0 )
        goto LABEL_31;
      goto LABEL_51;
    }
LABEL_50:
    result = (*(int (**)(uint32_t, int, char *))(**((uint32_t **)self + 170) + 40))(
               *((uint32_t *)self + 170),
               21,
               (char *)self + 364);
    v2 = *((uint8_t *)self + 402) == 0;
    *((uint8_t *)self + 401) = 0;
    if ( v2 )
    {
LABEL_31:
      if ( *((uint8_t *)self + 403) != 0 )
      {
LABEL_52:
        result = (*(int (**)(uint32_t, int, char *))(**((uint32_t **)self + 170) + 40))(
                   *((uint32_t *)self + 170),
                   23,
                   (char *)self + 372);
        *((uint8_t *)self + 403) = 0;
      }
LABEL_32:
      if ( *((uint8_t *)self + 404) != 0 )
      {
        result = (*(int (**)(uint32_t, int, char *))(**((uint32_t **)self + 170) + 40))(
                   *((uint32_t *)self + 170),
                   24,
                   (char *)self + 376);
        *((uint8_t *)self + 404) = 0;
      }
      return result;
    }
LABEL_51:
    result = (*(int (**)(uint32_t, int, char *))(**((uint32_t **)self + 170) + 40))(
               *((uint32_t *)self + 170),
               22,
               (char *)self + 368);
    v2 = *((uint8_t *)self + 403) == 0;
    *((uint8_t *)self + 402) = 0;
    if ( v2 )
      goto LABEL_32;
    goto LABEL_52;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::UpdateDSP  (binary VA: 0x10225f0)
// Original: vox::VoxEngineInternal::UpdateDSP
// ----------------------------------------------------------------------------
char * vox::VoxEngineInternal::UpdateDSP(vox::VoxEngineInternal::Self *self)
{
  char *v1;
  char *result;
  uint32_t *v3;
  int v4;
  void **v5;

  v1 = (char *)self + 408;
  while ( 1 )
  {
    result = *((char **)self + 102);
    if ( v1 == result )
      break;
    while ( 1 )
    {
      do
        result = *(char **)result;
      while ( v1 != result );
      v3 = *((uint32_t **)self + 103);
      v5 = (void **)v3[2];
      sub_1901940(v3);
      VoxFreeInternal(v3);
      v4 = *((uint32_t *)self + 170);
      if ( v4 != 0 )
        G4_VCALL<void>(v4, 44, 0, v5);
      if ( v5 == nullptr )
        break;
      if ( *v5 != nullptr )
        VoxFreeInternal(*v5);
      if ( v5[1] != nullptr )
        VoxFreeInternal(v5[1]);
      VoxFreeInternal(v5);
      result = *((char **)self + 102);
      if ( v1 == result )
        return result;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::LoadGroupSnapshotConfiguration  (binary VA: 0x10226c0)
// Original: vox::VoxEngineInternal::LoadGroupSnapshotConfiguration
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::LoadGroupSnapshotConfiguration(pthread_mutex_t **self, const char *a2)
{
  vox::GroupManager::Self *v2;
  int SnapshotConfiguration;

  vox::Mutex::Lock(self + 55);
  v2 = (vox::GroupManager::Self *)*(self + 54);
  SnapshotConfiguration = 0;
  if ( v2 != nullptr )
    SnapshotConfiguration = vox::GroupManager::LoadSnapshotConfiguration(v2, a2);
  vox::Mutex::Unlock(self + 55);
  return SnapshotConfiguration;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::PushGroupSnapshot  (binary VA: 0x1022730)
// Original: vox::VoxEngineInternal::PushGroupSnapshot
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::PushGroupSnapshot(pthread_mutex_t **self, char *a2)
{
  vox::GroupManager::Self *v2;
  int v3;

  vox::Mutex::Lock(self + 55);
  v2 = (vox::GroupManager::Self *)*(self + 54);
  v3 = 0;
  if ( v2 != nullptr )
    v3 = vox::GroupManager::PushGroupSnapshot(v2, a2);
  vox::Mutex::Unlock(self + 55);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::PopGroupSnapshot  (binary VA: 0x10227a0)
// Original: vox::VoxEngineInternal::PopGroupSnapshot
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::PopGroupSnapshot(pthread_mutex_t **self, char *a2)
{
  vox::GroupManager::Self *v2;
  int v3;

  vox::Mutex::Lock(self + 55);
  v2 = (vox::GroupManager::Self *)*(self + 54);
  v3 = 0;
  if ( v2 != nullptr )
    v3 = vox::GroupManager::PopGroupSnapshot(v2, a2);
  vox::Mutex::Unlock(self + 55);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::ResetGroupSnapshot  (binary VA: 0x1022810)
// Original: vox::VoxEngineInternal::ResetGroupSnapshot
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::VoxEngineInternal::ResetGroupSnapshot(vox::VoxEngineInternal::Self *self)
{
  vox::Mutex::Lock((pthread_mutex_t **)self + 55);
  if ( *((uint32_t *)self + 54) != 0 )
    vox::GroupManager::ResetGroupSnapshot(*((vox::GroupManager::Self **)self + 54));
  return vox::Mutex::Unlock((pthread_mutex_t **)self + 55);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::SetMasterGain  (binary VA: 0x1022880)
// Original: vox::VoxEngineInternal::SetMasterGain
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::VoxEngineInternal::SetMasterGain(pthread_mutex_t **self, float a2, float a3)
{
  vox::GroupManager::Self *v3;

  vox::Mutex::Lock(self + 55);
  v3 = (vox::GroupManager::Self *)*(self + 54);
  if ( v3 != nullptr )
    vox::GroupManager::SetVolume(v3, 0, fmaxf(fminf(a2, 1.0), 0.0), a3);
  return vox::Mutex::Unlock(self + 55);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::GetMasterGain  (binary VA: 0x1022910)
// Original: vox::VoxEngineInternal::GetMasterGain
// ----------------------------------------------------------------------------
long double vox::VoxEngineInternal::GetMasterGain(pthread_mutex_t **self)
{
  vox::GroupManager::Self *v1;

  vox::Mutex::Lock(self + 55);
  v1 = (vox::GroupManager::Self *)*(self + 54);
  if ( v1 != nullptr )
    vox::GroupManager::GetVolume(v1, 0);
  vox::Mutex::Unlock(self + 55);
  return (float)0.0;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::SetDataSourceToUpdate  (binary VA: 0x1022980)
// Original: vox::VoxEngineInternal::SetDataSourceToUpdate
// ----------------------------------------------------------------------------
void vox::VoxEngineInternal::SetDataSourceToUpdate(pthread_mutex_t **self, vox::DataObj::Self *a2)
{
  int v2;

  if ( a2 != nullptr )
  {
    vox::Mutex::Lock(self + 27);
    if ( *((uint8_t *)a2 + 76) == 0 )
    {
      *((uint8_t *)a2 + 76) = 1;
      v2 = VoxAllocInternal(0xCu, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      if ( v2 != -8 )
        *(uint32_t *)(v2 + 8) = (uint32_t)(uintptr_t)(a2);
      sub_1901920(v2, self + 25);
    }
    vox::Mutex::Unlock(self + 27);
  }
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::GetCurrentDataSourceToUpdate  (binary VA: 0x1022a30)
// Original: vox::VoxEngineInternal::GetCurrentDataSourceToUpdate
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::GetCurrentDataSourceToUpdate(pthread_mutex_t **self)
{
  uint32_t *v1;
  int v2;

  vox::Mutex::Lock(self + 27);
  v1 = (uint32_t *)(*(self + 25));
  v2 = v1[2];
  sub_1901940(v1);
  VoxFreeInternal(v1);
  vox::Mutex::Unlock(self + 27);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::GetDataSourcesToUpdateSize  (binary VA: 0x1022aa0)
// Original: vox::VoxEngineInternal::GetDataSourcesToUpdateSize
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::GetDataSourcesToUpdateSize(pthread_mutex_t **self)
{
  vox::VoxEngineInternal::Self *v1;
  int i;

  vox::Mutex::Lock(self + 27);
  v1 = (vox::VoxEngineInternal::Self *)*(self + 25);
  for ( i = 0; self + 25 != (pthread_mutex_t **)v1; ++i )
    v1 = *(vox::VoxEngineInternal::Self **)v1;
  vox::Mutex::Unlock(self + 27);
  return i;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::AddGroup  (binary VA: 0x1022af0)
// Original: vox::VoxEngineInternal::AddGroup
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::AddGroup(int a1, int a2)
{
  int v2;
  int v3;

  vox::Mutex::Lock((pthread_mutex_t **)(a1 + 220));
  v2 = *(uint32_t *)(a1 + 216);
  v3 = -1;
  if ( v2 != 0 )
    v3 = vox::GroupManager::AddGroup(v2, a2);
  vox::Mutex::Unlock((pthread_mutex_t **)(a1 + 220));
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::ReconfigureGroup  (binary VA: 0x1022b60)
// Original: vox::VoxEngineInternal::ReconfigureGroup
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::ReconfigureGroup(int a1, int a2, int a3)
{
  vox::GroupManager::Self *v3;
  int v4;

  vox::Mutex::Lock((pthread_mutex_t **)(a1 + 220));
  v3 = *(vox::GroupManager::Self **)(a1 + 216);
  v4 = 0;
  if ( v3 != nullptr )
    v4 = vox::GroupManager::ReconfigureGroup(v3, a2, a3);
  vox::Mutex::Unlock((pthread_mutex_t **)(a1 + 220));
  return v4;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::GetGroupId  (binary VA: 0x1022bd0)
// Original: vox::VoxEngineInternal::GetGroupId
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::GetGroupId(pthread_mutex_t **self, char *a2)
{
  vox::GroupManager::Self *v2;
  int GroupId;

  vox::Mutex::Lock(self + 55);
  v2 = (vox::GroupManager::Self *)*(self + 54);
  GroupId = -1;
  if ( v2 != nullptr )
    GroupId = vox::GroupManager::GetGroupId(v2, a2);
  vox::Mutex::Unlock(self + 55);
  return GroupId;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::GetGroupName  (binary VA: 0x1022c40)
// Original: vox::VoxEngineInternal::GetGroupName
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::GetGroupName(pthread_mutex_t **self, unsigned int a2, char *dest, size_t a4)
{
  vox::GroupManager::Self *v4;
  int GroupName;

  vox::Mutex::Lock(self + 55);
  v4 = (vox::GroupManager::Self *)*(self + 54);
  GroupName = 0;
  if ( v4 != nullptr )
    GroupName = vox::GroupManager::GetGroupName(v4, a2, dest, a4);
  vox::Mutex::Unlock(self + 55);
  return GroupName;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::IsGroupValid  (binary VA: 0x1022cc0)
// Original: vox::VoxEngineInternal::IsGroupValid
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::IsGroupValid(pthread_mutex_t **self, unsigned int a2)
{
  vox::GroupManager::Self *v2;
  int IsGroupValid;

  vox::Mutex::Lock(self + 55);
  v2 = (vox::GroupManager::Self *)*(self + 54);
  IsGroupValid = 0;
  if ( v2 != nullptr )
    IsGroupValid = vox::GroupManager::IsGroupValid(v2, a2);
  vox::Mutex::Unlock(self + 55);
  return IsGroupValid;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::SetGroupVolume  (binary VA: 0x1022d30)
// Original: vox::VoxEngineInternal::SetGroupVolume
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::VoxEngineInternal::SetGroupVolume(pthread_mutex_t **self, unsigned int a2, float a3, float a4)
{
  vox::GroupManager::Self *v4;

  vox::Mutex::Lock(self + 55);
  v4 = (vox::GroupManager::Self *)*(self + 54);
  if ( v4 != nullptr )
    vox::GroupManager::SetVolume(v4, a2, fmaxf(fminf(a3, 1.0), 0.0), a4);
  return vox::Mutex::Unlock(self + 55);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::GetGroupVolume  (binary VA: 0x1022dc0)
// Original: vox::VoxEngineInternal::GetGroupVolume
// ----------------------------------------------------------------------------
long double vox::VoxEngineInternal::GetGroupVolume(vox::VoxEngineInternal::Self *self, unsigned int a2)
{
  vox::Mutex::Lock((pthread_mutex_t **)self + 55);
  if ( *((uint32_t *)self + 54) != 0 )
    vox::GroupManager::GetVolume(*((vox::GroupManager::Self **)self + 54), a2);
  vox::Mutex::Unlock((pthread_mutex_t **)self + 55);
  return (float)0.0;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::GetGroupEffectiveVolume  (binary VA: 0x1022e30)
// Original: vox::VoxEngineInternal::GetGroupEffectiveVolume
// ----------------------------------------------------------------------------
long double vox::VoxEngineInternal::GetGroupEffectiveVolume(vox::VoxEngineInternal::Self *self, unsigned int a2)
{
  vox::Mutex::Lock((pthread_mutex_t **)self + 55);
  if ( *((uint32_t *)self + 54) != 0 )
    vox::GroupManager::GetEffectiveVolume(*((vox::GroupManager::Self **)self + 54), a2);
  vox::Mutex::Unlock((pthread_mutex_t **)self + 55);
  return (float)0.0;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::SetGroupPitch  (binary VA: 0x1022ea0)
// Original: vox::VoxEngineInternal::SetGroupPitch
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::VoxEngineInternal::SetGroupPitch(pthread_mutex_t **self, unsigned int a2, float a3, float a4)
{
  vox::GroupManager::Self *v4;

  vox::Mutex::Lock(self + 55);
  v4 = (vox::GroupManager::Self *)*(self + 54);
  if ( v4 != nullptr )
    vox::GroupManager::SetPitch(v4, a2, fmaxf(fminf(a3, 2.0), 0.0), a4);
  return vox::Mutex::Unlock(self + 55);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::GetGroupPitch  (binary VA: 0x1022f30)
// Original: vox::VoxEngineInternal::GetGroupPitch
// ----------------------------------------------------------------------------
long double vox::VoxEngineInternal::GetGroupPitch(vox::VoxEngineInternal::Self *self, unsigned int a2)
{
  vox::Mutex::Lock((pthread_mutex_t **)self + 55);
  if ( *((uint32_t *)self + 54) != 0 )
    vox::GroupManager::GetPitch(*((vox::GroupManager::Self **)self + 54), a2);
  vox::Mutex::Unlock((pthread_mutex_t **)self + 55);
  return (float)0.0;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::SetGroupEnable  (binary VA: 0x1022fa0)
// Original: vox::VoxEngineInternal::SetGroupEnable
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::VoxEngineInternal::SetGroupEnable(pthread_mutex_t **self, unsigned int a2, bool a3, float a4)
{
  vox::GroupManager::Self *v4;

  vox::Mutex::Lock(self + 55);
  v4 = (vox::GroupManager::Self *)*(self + 54);
  if ( v4 != nullptr )
    vox::GroupManager::SetEnable(v4, a2, a3, a4);
  return vox::Mutex::Unlock(self + 55);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::GetGroupEnable  (binary VA: 0x1023020)
// Original: vox::VoxEngineInternal::GetGroupEnable
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::GetGroupEnable(pthread_mutex_t **self, unsigned int a2)
{
  vox::GroupManager::Self *v2;
  int Enable;

  vox::Mutex::Lock(self + 55);
  v2 = (vox::GroupManager::Self *)*(self + 54);
  Enable = 0;
  if ( v2 != nullptr )
    Enable = vox::GroupManager::GetEnable(v2, a2);
  vox::Mutex::Unlock(self + 55);
  return Enable;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Set3DListenerPosition  (binary VA: 0x1023090)
// Original: vox::VoxEngineInternal::Set3DListenerPosition
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::VoxEngineInternal::Set3DListenerPosition(pthread_mutex_t **self, float a2, float a3, float a4)
{
  vox::Mutex::Lock(self + 55);
  *((uint8_t *)self + 384) = 1;
  *((float *)self + 56) = a2;
  *((float *)self + 57) = a3;
  *((float *)self + 58) = a4;
  return vox::Mutex::Unlock(self + 55);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Set3DListenerVelocity  (binary VA: 0x1023100)
// Original: vox::VoxEngineInternal::Set3DListenerVelocity
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::VoxEngineInternal::Set3DListenerVelocity(pthread_mutex_t **self, float a2, float a3, float a4)
{
  vox::Mutex::Lock(self + 55);
  *((uint8_t *)self + 385) = 1;
  *((float *)self + 59) = a2;
  *((float *)self + 60) = a3;
  *((float *)self + 61) = a4;
  return vox::Mutex::Unlock(self + 55);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Set3DListenerOrientation  (binary VA: 0x1023170)
// Original: vox::VoxEngineInternal::Set3DListenerOrientation
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::VoxEngineInternal::Set3DListenerOrientation(pthread_mutex_t **self, float a2, float a3, float a4, float a5, float a6, float a7)
{
  vox::Mutex::Lock(self + 55);
  *((uint8_t *)self + 386) = 1;
  *((float *)self + 62) = a2;
  *((float *)self + 63) = a3;
  *((float *)self + 64) = a4;
  *((float *)self + 65) = a5;
  *((float *)self + 66) = a6;
  *((float *)self + 67) = a7;
  return vox::Mutex::Unlock(self + 55);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Set3DGeneralParameter  (binary VA: 0x1023200)
// Original: vox::VoxEngineInternal::Set3DGeneralParameter
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::VoxEngineInternal::Set3DGeneralParameter(pthread_mutex_t **self, const vox::Vox3DGeneralParameters *a2)
{
  vox::Mutex::Lock(self + 55);
  std::memcpy(self + 68, a2, 108);
  *((uint8_t *)self + 380) = 1;
  *((uint8_t *)self + 381) = 1;
  *((uint8_t *)self + 382) = 1;
  *((uint8_t *)self + 383) = 1;
  *((uint8_t *)self + 387) = 1;
  *((uint8_t *)self + 388) = 1;
  *((uint8_t *)self + 389) = 1;
  *((uint8_t *)self + 390) = 1;
  *((uint8_t *)self + 391) = 1;
  *((uint8_t *)self + 392) = 1;
  *((uint8_t *)self + 393) = 1;
  *((uint8_t *)self + 394) = 1;
  *((uint8_t *)self + 395) = 1;
  *((uint8_t *)self + 396) = 1;
  *((uint8_t *)self + 397) = 1;
  *((uint8_t *)self + 398) = 1;
  *((uint8_t *)self + 399) = 1;
  *((uint8_t *)self + 400) = 1;
  *((uint8_t *)self + 401) = 1;
  *((uint8_t *)self + 402) = 1;
  *((uint8_t *)self + 403) = 1;
  *((uint8_t *)self + 404) = 1;
  return vox::Mutex::Unlock(self + 55);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Set3DGeneralParameterf  (binary VA: 0x1023310)
// Original: vox::VoxEngineInternal::Set3DGeneralParameterf
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::VoxEngineInternal::Set3DGeneralParameterf(pthread_mutex_t **self, int a2, float a3)
{
  vox::Mutex::Lock(self + 55);
  switch ( a2 )
  {
    case 0:
      *((uint8_t *)self + 380) = 1;
      *((float *)self + 68) = a3;
      break;
    case 1:
      *((uint8_t *)self + 381) = 1;
      *((float *)self + 69) = a3;
      break;
    case 7:
      *((uint8_t *)self + 387) = 1;
      *((float *)self + 77) = a3;
      break;
    case 8:
      *((uint8_t *)self + 388) = 1;
      *((float *)self + 78) = a3;
      break;
    case 9:
      *((uint8_t *)self + 389) = 1;
      *((float *)self + 79) = a3;
      break;
    case 10:
      *((uint8_t *)self + 390) = 1;
      *((float *)self + 80) = a3;
      break;
    case 11:
      *((uint8_t *)self + 391) = 1;
      *((float *)self + 81) = a3;
      break;
    case 12:
      *((uint8_t *)self + 392) = 1;
      *((float *)self + 82) = a3;
      break;
    case 13:
      *((uint8_t *)self + 393) = 1;
      *((float *)self + 83) = a3;
      break;
    case 14:
      *((uint8_t *)self + 394) = 1;
      *((float *)self + 84) = a3;
      break;
    case 15:
      *((uint8_t *)self + 395) = 1;
      *((float *)self + 85) = a3;
      break;
    case 16:
      *((uint8_t *)self + 396) = 1;
      *((float *)self + 86) = a3;
      break;
    case 17:
      *((uint8_t *)self + 397) = 1;
      *((float *)self + 87) = a3;
      break;
    case 18:
      *((uint8_t *)self + 398) = 1;
      *((float *)self + 88) = a3;
      break;
    case 19:
      *((uint8_t *)self + 399) = 1;
      *((float *)self + 89) = a3;
      break;
    case 20:
      *((uint8_t *)self + 400) = 1;
      *((float *)self + 90) = a3;
      break;
    case 21:
      *((uint8_t *)self + 401) = 1;
      *((float *)self + 91) = a3;
      break;
    case 22:
      *((uint8_t *)self + 402) = 1;
      *((float *)self + 92) = a3;
      break;
    case 23:
      *((uint8_t *)self + 403) = 1;
      *((float *)self + 93) = a3;
      break;
    case 24:
      *((uint8_t *)self + 404) = 1;
      *((float *)self + 94) = a3;
      break;
    default:
      return vox::Mutex::Unlock(self + 55);
  }
  return vox::Mutex::Unlock(self + 55);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Set3DGeneralParameteri  (binary VA: 0x10235d0)
// Original: vox::VoxEngineInternal::Set3DGeneralParameteri
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::VoxEngineInternal::Set3DGeneralParameteri(pthread_mutex_t **self, int a2, pthread_mutex_t *a3)
{
  vox::Mutex::Lock(self + 55);
  if ( a2 == 2 )
  {
    *((uint8_t *)self + 382) = 1;
    *(self + 70) = a3;
  }
  else if ( a2 == 3 )
  {
    *((uint8_t *)self + 383) = 1;
    *(self + 71) = a3;
  }
  return vox::Mutex::Unlock(self + 55);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::SetDefault3DParameters  (binary VA: 0x1023660)
// Original: vox::VoxEngineInternal::_SetDefault3DParameters
// ----------------------------------------------------------------------------
void vox::VoxEngineInternal::SetDefault3DParameters()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Construct  (binary VA: 0x1023670)
// Original: vox::VoxEngineInternal::VoxEngineInternal
// ----------------------------------------------------------------------------
vox::VoxEngineInternal::Self * vox::VoxEngineInternal::Construct(long double a1, vox::VoxEngineInternal::Self *self)
{
  uint32_t *v2;
  unsigned int v3;
  uint32_t *v4;
  int i;
  vox::GroupManager::Self *v6;
  char *v7;
  unsigned int v8;
  char *v9;
  vox::VoxEngineInternal::Self *result;
  uint32_t *v11;
  int v12;
  uint32_t *v13;
  void *v14;
  int v15;
  unsigned int v16;
  uint32_t *v17;
  int v18;
  uint32_t *v19;
  void *v20;
  vox::Self *v21;
  vox::PriorityBankManager::Self *v22;
  int v23;
  int v24;
  int v25;
  int v26;

  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)((char *)self + 4);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)((char *)self + 4);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 11) = (uint32_t)(uintptr_t)((char *)self + 36);
  *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)((char *)self + 36);
  *((uint32_t *)self + 6) = 1;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 1;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 20) = 0;
  vox::Mutex::Construct((vox::VoxEngineInternal::Self *)((char *)self + 84));
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  vox::Mutex::Construct((vox::VoxEngineInternal::Self *)((char *)self + 96));
  *((uint32_t *)self + 25) = (uint32_t)(uintptr_t)((char *)self + 100);
  *((uint32_t *)self + 26) = (uint32_t)(uintptr_t)((char *)self + 100);
  vox::Mutex::Construct((vox::VoxEngineInternal::Self *)((char *)self + 108));
  *((uint32_t *)self + 29) = 0;
  *((uint32_t *)self + 31) = (uint32_t)(uintptr_t)((char *)self + 116);
  *((uint32_t *)self + 32) = (uint32_t)(uintptr_t)((char *)self + 116);
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 33) = 0;
  *((uint32_t *)self + 39) = (uint32_t)(uintptr_t)((char *)self + 148);
  *((uint32_t *)self + 40) = (uint32_t)(uintptr_t)((char *)self + 148);
  *((uint32_t *)self + 34) = 1;
  *((uint32_t *)self + 35) = 0;
  *((uint32_t *)self + 37) = 0;
  *((uint32_t *)self + 38) = 0;
  *((uint32_t *)self + 41) = 0;
  *((uint32_t *)self + 42) = 1;
  *((uint32_t *)self + 43) = 0;
  *((uint32_t *)self + 44) = 0;
  *((uint32_t *)self + 45) = 0;
  *((uint32_t *)self + 46) = 0;
  *((uint32_t *)self + 47) = 0;
  *((uint32_t *)self + 48) = 0;
  vox::Mutex::Construct((vox::VoxEngineInternal::Self *)((char *)self + 196));
  *((uint32_t *)self + 50) = 0;
  *((uint32_t *)self + 51) = 0;
  vox::Mutex::Construct((vox::VoxEngineInternal::Self *)((char *)self + 208));
  vox::Mutex::Construct((vox::VoxEngineInternal::Self *)((char *)self + 220));
  *((uint32_t *)self + 56) = 0;
  *((uint32_t *)self + 57) = 0;
  *((uint32_t *)self + 58) = 0;
  *((uint32_t *)self + 59) = 0;
  *((uint32_t *)self + 60) = 0;
  *((uint32_t *)self + 61) = 0;
  *((uint32_t *)self + 62) = 0;
  *((uint32_t *)self + 63) = 0;
  *((uint32_t *)self + 64) = 0;
  *((uint32_t *)self + 65) = 0;
  *((uint32_t *)self + 66) = 0;
  *((uint32_t *)self + 67) = 0;
  vox::Vox3DGeneralParameters::Construct((vox::VoxEngineInternal::Self *)((char *)self + 272));
  v2 = *((uint32_t **)self + 44);
  *((uint32_t *)self + 102) = (uint32_t)(uintptr_t)((char *)self + 408);
  *((uint32_t *)self + 103) = (uint32_t)(uintptr_t)((char *)self + 408);
  *((uint32_t *)self + 188) = (uint32_t)(uintptr_t)((char *)self + 752);
  *((uint32_t *)self + 189) = (uint32_t)(uintptr_t)((char *)self + 752);
  v3 = *((uint32_t *)self + 46) - (uint32_t)(uintptr_t)(v2);
  *((uint32_t *)self + 136) = 0;
  *((uint32_t *)self + 169) = 0;
  if ( v3 > 0x1FF )
  {
    v4 = *((uint32_t **)self + 16);
    if ( (unsigned int)(*((uint32_t *)self + 18) - (uint32_t)(uintptr_t)(v4)) > 0x1FF )
      goto LABEL_3;
    goto LABEL_22;
  }
  v11 = *((uint32_t **)self + 45);
  v25 = v11 - v2;
  v12 = VoxAllocInternal(0x200u, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
  if ( v2 != v11 )
  {
    v13 = (uint32_t *)v12;
    do
    {
      if ( v13 != nullptr )
        *v13 = *v2;
      ++v2;
      ++v13;
    }
    while ( v11 != v2 );
  }
  v14 = *((void **)self + 44);
  if ( v14 != nullptr )
  {
    v23 = v12;
    VoxFreeInternal(v14);
    v12 = v23;
  }
  *((uint32_t *)self + 44) = v12;
  v4 = *((uint32_t **)self + 16);
  v15 = v12 + 4 * v25;
  *((uint32_t *)self + 46) = v12 + 512;
  v16 = *((uint32_t *)self + 18) - (uint32_t)(uintptr_t)(v4);
  *((uint32_t *)self + 45) = v15;
  if ( v16 <= 0x1FF )
  {
LABEL_22:
    v17 = *((uint32_t **)self + 17);
    v26 = v17 - v4;
    v18 = VoxAllocInternal(0x200u, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    if ( v4 != v17 )
    {
      v19 = (uint32_t *)v18;
      do
      {
        if ( v19 != nullptr )
          *v19 = *v4;
        ++v4;
        ++v19;
      }
      while ( v17 != v4 );
    }
    v20 = *((void **)self + 16);
    if ( v20 != nullptr )
    {
      v24 = v18;
      VoxFreeInternal(v20);
      v18 = v24;
    }
    *((uint32_t *)self + 16) = v18;
    *((uint32_t *)self + 17) = v18 + 4 * v26;
    *((uint32_t *)self + 18) = v18 + 512;
  }
LABEL_3:
  vox::neonInstructionsPresent(v21);
  for ( i = 0; i != 25; ++i )
    *((uint8_t *)self + i + 380) = 0;
  vox::VoxEngineInternal::SetDefault3DParameters(self);
  v22 = (vox::PriorityBankManager::Self *)VoxAllocInternal(
                                      0x10u,
                                      0,
                                      (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_internal.cpp"),
                                      (int)(uintptr_t)("VoxEngineInternal"),
                                      61);
  vox::PriorityBankManager::Construct(v22);
  *((uint32_t *)self + 53) = (uint32_t)(uintptr_t)(v22);
  v6 = (vox::GroupManager::Self *)VoxAllocInternal(
                              0x10u,
                              0,
                              (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_internal.cpp"),
                              (int)(uintptr_t)("VoxEngineInternal"),
                              62);
  vox::GroupManager::Construct(v6);
  *((uint32_t *)self + 54) = (uint32_t)(uintptr_t)(v6);
  v7 = (char *)self + 684;
  *((uint32_t *)self + 170) = 0;
  v8 = 64;
  if ( (((unsigned int)(uintptr_t)(self) + 684) & 1) != 0 )
  {
    *((uint8_t *)self + 684) = 0;
    v7 = (char *)self + 685;
    LOBYTE(v8) = 63;
  }
  if ( ((uint8_t)(uintptr_t)(v7) & 2) != 0 )
  {
    *(uint16_t *)v7 = 0;
    v8 -= 2;
    v7 += 2;
  }
  memset(v7, 0, 4 * (v8 >> 2));
  v9 = &v7[4 * (v8 >> 2)];
  if ( (v8 & 2) != 0 )
  {
    *(uint16_t *)v9 = 0;
    v9 += 2;
  }
  if ( (v8 & 1) != 0 )
    *v9 = 0;
  *((uint32_t *)self + 187) = 0;
  *((uint32_t *)self + 190) = 0;
  (void)GetTime();
  result = self;
  *(double *)((char *)self + 772) = a1;
  *((uint32_t *)self + 191) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::GetVoxEngineInternal  (binary VA: 0x1023b80)
// Original: vox::VoxEngineInternal::GetVoxEngineInternal
// ----------------------------------------------------------------------------
vox::VoxEngineInternal::Self * vox::VoxEngineInternal::GetVoxEngineInternal(long double a1)
{
  vox::VoxEngineInternal::Self *result;
  vox::VoxEngineInternal::Self *v2;

  result = (vox::VoxEngineInternal::Self *)vox::VoxEngineInternal::s_voxEngineInternal;
  if ( vox::VoxEngineInternal::s_voxEngineInternal == 0 )
  {
    v2 = (vox::VoxEngineInternal::Self *)VoxAllocInternal(
                                     0x31Cu,
                                     0,
                                     (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_internal.cpp"),
                                     (int)(uintptr_t)("GetVoxEngineInternal"),
                                     40);
    vox::VoxEngineInternal::Construct(a1, v2);
    vox::VoxEngineInternal::s_voxEngineInternal = (uintptr_t)(uintptr_t)(v2);
    return v2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Get3DListenerPosition  (binary VA: 0x1023c00)
// Original: vox::VoxEngineInternal::Get3DListenerPosition
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::VoxEngineInternal::Get3DListenerPosition(pthread_mutex_t **self, float *a2, float *a3, float *a4)
{
  vox::Mutex::Lock(self + 55);
  *(uint32_t *)a2 = (uint32_t)(uintptr_t)(*(self + 56));
  *(uint32_t *)a3 = (uint32_t)(uintptr_t)(*(self + 57));
  *(uint32_t *)a4 = (uint32_t)(uintptr_t)(*(self + 58));
  return vox::Mutex::Unlock(self + 55);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Get3DListenerVelocity  (binary VA: 0x1023c70)
// Original: vox::VoxEngineInternal::Get3DListenerVelocity
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::VoxEngineInternal::Get3DListenerVelocity(pthread_mutex_t **self, float *a2, float *a3, float *a4)
{
  vox::Mutex::Lock(self + 55);
  *(uint32_t *)a2 = (uint32_t)(uintptr_t)(*(self + 59));
  *(uint32_t *)a3 = (uint32_t)(uintptr_t)(*(self + 60));
  *(uint32_t *)a4 = (uint32_t)(uintptr_t)(*(self + 61));
  return vox::Mutex::Unlock(self + 55);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Get3DListenerOrientation  (binary VA: 0x1023ce0)
// Original: vox::VoxEngineInternal::Get3DListenerOrientation
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::VoxEngineInternal::Get3DListenerOrientation(pthread_mutex_t **self, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7)
{
  vox::Mutex::Lock(self + 55);
  *(uint32_t *)a2 = (uint32_t)(uintptr_t)(*(self + 62));
  *(uint32_t *)a3 = (uint32_t)(uintptr_t)(*(self + 63));
  *(uint32_t *)a4 = (uint32_t)(uintptr_t)(*(self + 64));
  *(uint32_t *)a5 = (uint32_t)(uintptr_t)(*(self + 65));
  *(uint32_t *)a6 = (uint32_t)(uintptr_t)(*(self + 66));
  *(uint32_t *)a7 = (uint32_t)(uintptr_t)(*(self + 67));
  return vox::Mutex::Unlock(self + 55);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Get3DGeneralParameter  (binary VA: 0x1023d70)
// Original: vox::VoxEngineInternal::Get3DGeneralParameter
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::VoxEngineInternal::Get3DGeneralParameter(pthread_mutex_t **self, vox::Vox3DGeneralParameters *a2)
{
  vox::Mutex::Lock(self + 55);
  std::memcpy(a2, self + 68, 108);
  return vox::Mutex::Unlock(self + 55);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Get3DGeneralParameterf  (binary VA: 0x1023dd0)
// Original: vox::VoxEngineInternal::Get3DGeneralParameterf
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::VoxEngineInternal::Get3DGeneralParameterf(pthread_mutex_t **self, int a2, float *a3)
{
  vox::Mutex::Lock(self + 55);
  switch ( a2 )
  {
    case 0:
      *(uint32_t *)a3 = (uint32_t)(uintptr_t)(*(self + 68));
      break;
    case 1:
      *(uint32_t *)a3 = (uint32_t)(uintptr_t)(*(self + 69));
      break;
    case 7:
      *(uint32_t *)a3 = (uint32_t)(uintptr_t)(*(self + 77));
      break;
    case 8:
      *(uint32_t *)a3 = (uint32_t)(uintptr_t)(*(self + 78));
      break;
    case 9:
      *(uint32_t *)a3 = (uint32_t)(uintptr_t)(*(self + 79));
      break;
    case 10:
      *(uint32_t *)a3 = (uint32_t)(uintptr_t)(*(self + 80));
      break;
    case 11:
      *(uint32_t *)a3 = (uint32_t)(uintptr_t)(*(self + 81));
      break;
    case 12:
      *(uint32_t *)a3 = (uint32_t)(uintptr_t)(*(self + 82));
      break;
    case 13:
      *(uint32_t *)a3 = (uint32_t)(uintptr_t)(*(self + 83));
      break;
    case 14:
      *(uint32_t *)a3 = (uint32_t)(uintptr_t)(*(self + 84));
      break;
    case 15:
      *(uint32_t *)a3 = (uint32_t)(uintptr_t)(*(self + 85));
      break;
    case 16:
      *(uint32_t *)a3 = (uint32_t)(uintptr_t)(*(self + 86));
      break;
    case 17:
      *(uint32_t *)a3 = (uint32_t)(uintptr_t)(*(self + 87));
      break;
    case 18:
      *(uint32_t *)a3 = (uint32_t)(uintptr_t)(*(self + 88));
      break;
    case 19:
      *(uint32_t *)a3 = (uint32_t)(uintptr_t)(*(self + 89));
      break;
    case 20:
      *(uint32_t *)a3 = (uint32_t)(uintptr_t)(*(self + 90));
      break;
    case 21:
      *(uint32_t *)a3 = (uint32_t)(uintptr_t)(*(self + 91));
      break;
    case 22:
      *(uint32_t *)a3 = (uint32_t)(uintptr_t)(*(self + 92));
      break;
    case 23:
      *(uint32_t *)a3 = (uint32_t)(uintptr_t)(*(self + 93));
      break;
    case 24:
      *(uint32_t *)a3 = (uint32_t)(uintptr_t)(*(self + 94));
      break;
    default:
      return vox::Mutex::Unlock(self + 55);
  }
  return vox::Mutex::Unlock(self + 55);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Get3DGeneralParameteri  (binary VA: 0x1023fe0)
// Original: vox::VoxEngineInternal::Get3DGeneralParameteri
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::VoxEngineInternal::Get3DGeneralParameteri(pthread_mutex_t **self, int a2, int *a3)
{
  vox::Mutex::Lock(self + 55);
  if ( a2 == 2 )
    *a3 = (int)(uintptr_t)(*(self + 70));
  return vox::Mutex::Unlock(self + 55);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::GetEmitterAttenuation  (binary VA: 0x1024040)
// Original: vox::VoxEngineInternal::_GetEmitterAttenuation
// ----------------------------------------------------------------------------
long double vox::VoxEngineInternal::GetEmitterAttenuation(pthread_mutex_t **self, const vox::emitter::CreationSettings::Self *a2)
{
  float v2; // xmm3_4
  float v3; // xmm1_4
  float v4; // xmm0_4
  float v5; // xmm2_4
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm2_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  typedef float _g4_t_v15;
  typedef float _g4_t_v16[4];
  typedef float _g4_t_v17[4];
  typedef float _g4_t_v18[3];
  typedef int _g4_t_v19[5];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v15)) > _g4_s0 ? (8u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v16)) > _g4_s1 ? (16u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v17)) > _g4_s2 ? (32u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v18)) > _g4_s3 ? (48u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v19)) > _g4_s4 ? (60u + sizeof(_g4_t_v19)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 60u);

  v2 = 0.0;
  v3 = 0.0;
  v4 = 0.0;
  if ( *((uint32_t *)a2 + 13) == 0 )
  {
    vox::VoxEngineInternal::Get3DListenerPosition(self, v16, v17, v18);
    v4 = v16[0];
    v3 = v17[0];
    v2 = v18[0];
  }
  v5 = *((float *)a2 + 20) - v4;
  v6 = *((float *)a2 + 21) - v3;
  v7 = *((float *)a2 + 22);
  v16[0] = v5;
  v17[0] = v6;
  v18[0] = v7 - v2;
  v8 = sqrt((float)((float)((float)(v6 * v6) + (float)(v5 * v5)) + (float)(v18[0] * v18[0])));
  v15 = v8;
  vox::VoxEngineInternal::Get3DGeneralParameteri(self, 2, v19);
  if ( v19[0] == 2 )
  {
    v14 = *((float *)a2 + 15);
    v9 = 1.0;
    if ( v14 <= v8 && (float)(*((float *)a2 + 14) - v14) > 0.0 )
      return (float)((float)((float)((float)(fminf(v8, *((float *)a2 + 14)) - v14) * *((float *)a2 + 16))
                           / (float)(v14 - *((float *)a2 + 14)))
                   + 1.0);
  }
  else if ( v19[0] == 3 )
  {
    v12 = *((float *)a2 + 15);
    v9 = 1.0;
    if ( v12 <= v8 && v12 < 0.0 )
    {
      v13 = *((float *)a2 + 16);
      if ( v13 >= 0.0 )
        return (float)pow((float)(fminf(v8, *((float *)a2 + 14)) / v12), (float)-v13);
    }
  }
  else
  {
    v9 = 1.0;
    if ( v19[0] == 1 )
    {
      v11 = *((float *)a2 + 15);
      v9 = 1.0;
      if ( v11 <= v15 && v11 != 0.0 )
        return (float)((float)((float)((float)(fminf(v15, *((float *)a2 + 14)) - v11) * *((float *)a2 + 16)) + v11) / v11);
    }
  }
  return v9;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::CanPlay  (binary VA: 0x1024260)
// Original: vox::VoxEngineInternal::CanPlay
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::CanPlay(vox::VoxEngineInternal::Self *self, const vox::emitter::CreationSettings::Self *a2)
{
  int result;
  float EmitterAttenuation;

  result = 0;
  if ( *((uint32_t *)self + 53) != 0 )
  {
    EmitterAttenuation = vox::VoxEngineInternal::GetEmitterAttenuation((pthread_mutex_t **)self, a2);
    return vox::PriorityBankManager::CanAddEmitter(
             *((vox::PriorityBankManager::Self **)self + 53),
             *((uint32_t *)a2 + 10),
             *((uint32_t *)a2 + 11),
             EmitterAttenuation);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::SetRoutingVolume  (binary VA: 0x10242d0)
// Original: vox::VoxEngineInternal::SetRoutingVolume
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::SetRoutingVolume(int a1, char *s, char *src, char *a4, char *a5, char *a6, char *a7)
{
  char **v8;
  signed int v9;
  char *v10;
  signed int v11;
  char *v12;
  int v13;
  int v14;

  vox::Mutex::Lock((vox::Mutex::Self *)(a1 + 220));
  if ( src != nullptr && s != nullptr )
  {
    v8 = (char **)VoxAllocInternal(
                    0x18u,
                    0,
                    (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_internal.cpp"),
                    (int)(uintptr_t)("SetRoutingVolume"),
                    4083);
    *v8 = nullptr;
    v8[1] = nullptr;
    v8[2] = a4;
    v8[3] = a5;
    v8[4] = a6;
    v8[5] = a7;
    v9 = strlen(s);
    if ( v9 > 0 )
    {
      v10 = (char *)VoxAllocInternal(
                      v9 + 1,
                      0,
                      (int)(uintptr_t)("../../../../../lib/vox/include/vox_minibus_system.h"),
                      (int)(uintptr_t)("BusRoutingChange"),
                      166);
      *v8 = v10;
      if ( v10 != nullptr )
        strcpy(v10, s);
    }
    v11 = strlen(src);
    if ( v11 > 0 )
    {
      v12 = (char *)VoxAllocInternal(
                      v11 + 1,
                      0,
                      (int)(uintptr_t)("../../../../../lib/vox/include/vox_minibus_system.h"),
                      (int)(uintptr_t)("BusRoutingChange"),
                      174);
      v8[1] = v12;
      if ( v12 != nullptr )
        strcpy(v12, src);
    }
    v13 = *(uint32_t *)(a1 + 408);
    v14 = VoxAllocInternal(0xCu, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    if ( v14 != -8 )
      *(uint32_t *)(v14 + 8) = (uint32_t)(uintptr_t)(v8);
    sub_1901920(v14, v13);
  }
  return (int)(uintptr_t)(vox::Mutex::Unlock((vox::Mutex::Self *)(a1 + 220)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::AttachDSP  (binary VA: 0x1024490)
// Original: vox::VoxEngineInternal::AttachDSP
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::AttachDSP(pthread_mutex_t **self, char *a2, vox::CustomDSP::Self *a3)
{
  int v3;
  vox::MiniAuxBus::Self ***Instance;

  v3 = 0;
  vox::Mutex::Lock(self + 55);
  Instance = (vox::MiniAuxBus::Self ***)vox::MiniBusManager::GetInstance();
  if ( Instance != nullptr )
    v3 = vox::MiniBusManager::AttachDSP(Instance, a2, a3);
  vox::Mutex::Unlock(self + 55);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::GetOutputMode  (binary VA: 0x1024500)
// Original: vox::VoxEngineInternal::GetOutputMode
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::GetOutputMode(vox::VoxEngineInternal::Self *self)
{
  int v1;

  v1 = *((uint32_t *)self + 170);
  if ( v1 != 0 )
    return (*(int (**)(uint32_t))(*(uint32_t *)v1 + 52))(*((uint32_t *)self + 170));
  else
    return -1;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::SetOutputMode  (binary VA: 0x1024530)
// Original: vox::VoxEngineInternal::SetOutputMode
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::SetOutputMode(int a1, int a2)
{
  int v2;
  int result;

  v2 = *(uint32_t *)(a1 + 680);
  result = 0;
  if ( v2 != 0 )
    return G4_VCALL<int>(v2, 48, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::RegisterExternalDataGenerator  (binary VA: 0x1024560)
// Original: vox::VoxEngineInternal::RegisterExternalDataGenerator
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::RegisterExternalDataGenerator(int a1, int a2, char *s1)
{
  int v3;
  vox::MiniBusManager::Self *Instance;
  int v5;
  int v6;
  int v7;
  int v9;
  vox::MiniBusManager::Self *v10;

  v3 = 0;
  vox::Mutex::Lock((pthread_mutex_t **)(a1 + 220));
  if ( a2 != 0 )
  {
    Instance = vox::MiniBusManager::GetInstance();
    if ( Instance != nullptr )
    {
      v10 = Instance;
      v5 = strcasecmp(s1, "AUX1");
      v6 = 0;
      v7 = (int)(uintptr_t)(v10);
      if ( v5 != 0 )
      {
        v9 = strcasecmp(s1, "AUX2");
        v7 = (int)(uintptr_t)(v10);
        v6 = 2 - (v9 == 0);
      }
      v3 = 1;
      vox::MiniBusManager::AttachDataGeneratorToBus(v7, v6, a2);
    }
  }
  vox::Mutex::Unlock((pthread_mutex_t **)(a1 + 220));
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::UnregisterExternalDataGenerator  (binary VA: 0x1024630)
// Original: vox::VoxEngineInternal::UnregisterExternalDataGenerator
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::VoxEngineInternal::UnregisterExternalDataGenerator(int a1, int a2)
{
  pthread_mutex_t **v2;
  vox::MiniBusManager::Self *Instance;

  v2 = (pthread_mutex_t **)(a1 + 220);
  vox::Mutex::Lock((pthread_mutex_t **)(a1 + 220));
  if ( a2 == 0 )
    return vox::Mutex::Unlock(v2);
  Instance = vox::MiniBusManager::GetInstance();
  if ( Instance == nullptr )
    return vox::Mutex::Unlock(v2);
  vox::MiniBusManager::DetachDataGeneratorFromBus(Instance, a2);
  return vox::Mutex::Unlock(v2);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::GetEmitterObject  (binary VA: 0x1025850)
// Original: vox::VoxEngineInternal::GetEmitterObject
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::GetEmitterObject(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2)
{
  int64_t v2; // rax
  int v3;
  int v4;
  int result;
  int64_t v6; // rax
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef uint32_t _g4_t_v10[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v9)) > _g4_s2 ? (24u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v10)) > _g4_s3 ? (28u + sizeof(_g4_t_v10)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);

  G4_VCALL<void>(a2, 16, &v9, v10);
  if ( *((uint32_t *)self + v10[0] + 171) != v9
    || (result = (*(int (**)(vox::EmitterHandle::Self *))(*(uint32_t *)a2 + 12))(a2)) == 0 )
  {
    v2 = ((int64_t (*)(vox::EmitterHandle::Self *))*(uint32_t *)(*(uint32_t *)a2 + 8))(a2);
    v3 = vox::HandlableContainer::Find((vox::VoxEngineInternal::Self *)((char *)self + 112), v2);
    if ( v3 != 0 )
    {
      v4 = *(uint32_t *)a2;
      v10[0] = *(uint32_t *)(v3 + 16);
      v7 = v3;
      (*(void (**)(vox::EmitterHandle::Self *, uint32_t, uint32_t))(v4 + 20))(
        a2,
        *((uint32_t *)self + v10[0] + 171),
        v10[0]);
      return v7;
    }
    else
    {
      vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 200));
      v6 = ((int64_t (*)(vox::EmitterHandle::Self *))*(uint32_t *)(*(uint32_t *)a2 + 8))(a2);
      v8 = vox::HandlableContainer::Find((vox::VoxEngineInternal::Self *)((char *)self + 144), v6);
      vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 200));
      result = v8;
      if ( v8 != 0 )
      {
        G4_VCALL<void>(a2, 20, *((uint32_t *)self + *(uint32_t *)(v8 + 16) + 171), *(uint32_t *)(v8 + 16));
        return v8;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::SetPriorityBankId  (binary VA: 0x1025980)
// Original: vox::VoxEngineInternal::SetPriorityBankId
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::SetPriorityBankId(vox::PriorityBankManager::Self **self, vox::EmitterHandle::Self *a2, unsigned int a3)
{
  int EmitterObject;
  vox::PriorityBankManager::Self *v4;

  vox::AccessController::GetReadAccess((vox::AccessController::Self *)(self + 47));
  EmitterObject = vox::VoxEngineInternal::GetEmitterObject((vox::VoxEngineInternal::Self *)self, a2);
  if ( EmitterObject != 0 )
  {
    v4 = *(self + 53);
    if ( v4 != nullptr )
    {
      if ( *(uint8_t *)(EmitterObject + 48) != 0 )
      {
        vox::PriorityBankManager::RemoveEmitter(v4, *(uint32_t *)(EmitterObject + 44), (vox::EmitterObj::Self *)EmitterObject);
        *(uint32_t *)(EmitterObject + 44) = a3;
        vox::PriorityBankManager::AddEmitter(*(self + 53), a3, (vox::EmitterObj::Self *)EmitterObject);
      }
      else
      {
        *(uint32_t *)(EmitterObject + 44) = a3;
      }
    }
  }
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::AccessController::Self *)(self + 47)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::IsValid  (binary VA: 0x1025a40)
// Original: vox::VoxEngineInternal::IsValid
// ----------------------------------------------------------------------------
bool vox::VoxEngineInternal::IsValid(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2)
{
  int EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = vox::VoxEngineInternal::GetEmitterObject(self, a2);
  vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  return EmitterObject != 0;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::GetPriority  (binary VA: 0x1025aa0)
// Original: vox::VoxEngineInternal::GetPriority
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::GetPriority(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2)
{
  int EmitterObject;
  int v3;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = vox::VoxEngineInternal::GetEmitterObject(self, a2);
  if ( EmitterObject != 0 )
    v3 = *(uint32_t *)(EmitterObject + 40);
  else
    v3 = -1073741824;
  vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::SetPriority  (binary VA: 0x1025b10)
// Original: vox::VoxEngineInternal::SetPriority
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::SetPriority(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2, int a3)
{
  int EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = vox::VoxEngineInternal::GetEmitterObject(self, a2);
  if ( EmitterObject != 0 )
    *(uint32_t *)(EmitterObject + 40) = a3;
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::IncreaseEmitterObjectRefCount  (binary VA: 0x1025b80)
// Original: vox::VoxEngineInternal::IncreaseEmitterObjectRefCount
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::IncreaseEmitterObjectRefCount(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2)
{
  int EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = vox::VoxEngineInternal::GetEmitterObject(self, a2);
  if ( EmitterObject != 0 )
    G4_VCALL<void>(EmitterObject, 8);
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::DecreaseEmitterObjectRefCount  (binary VA: 0x1025d10)
// Original: vox::VoxEngineInternal::DecreaseEmitterObjectRefCount
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::DecreaseEmitterObjectRefCount(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2)
{
  int EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = vox::VoxEngineInternal::GetEmitterObject(self, a2);
  if ( EmitterObject != 0 )
    G4_VCALL<void>(EmitterObject, 12);
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::GetDataObject  (binary VA: 0x1025ec0)
// Original: vox::VoxEngineInternal::GetDataObject
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::GetDataObject(vox::HandlableContainer::Self *a1, int *a2)
{
  int64_t v2; // rax
  int v3;
  int v4;
  int result;
  int64_t v6; // rax
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef uint32_t _g4_t_v10[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v9)) > _g4_s2 ? (24u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v10)) > _g4_s3 ? (28u + sizeof(_g4_t_v10)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);

  G4_VCALL<void>(a2, 16, &v9, v10);
  if ( *((uint32_t *)a1 + v10[0] + 171) != v9 || (result = (*(int (**)(int *))(*a2 + 12))(a2)) == 0 )
  {
    v2 = ((int64_t (*)(int *))*(uint32_t *)(*a2 + 8))(a2);
    v3 = vox::HandlableContainer::Find(a1, v2);
    if ( v3 != 0 )
    {
      v4 = *a2;
      v10[0] = *(uint32_t *)(v3 + 16);
      v7 = v3;
      (*(void (**)(int *, uint32_t, uint32_t))(v4 + 20))(a2, *((uint32_t *)a1 + v10[0] + 171), v10[0]);
      return v7;
    }
    else
    {
      vox::AccessController::GetReadAccess((vox::HandlableContainer::Self *)((char *)a1 + 88));
      v6 = ((int64_t (*)(int *))*(uint32_t *)(*a2 + 8))(a2);
      v8 = vox::HandlableContainer::Find((vox::HandlableContainer::Self *)((char *)a1 + 32), v6);
      vox::AccessController::ReleaseReadAccess((vox::HandlableContainer::Self *)((char *)a1 + 88));
      result = v8;
      if ( v8 != 0 )
      {
        G4_VCALL<void>(a2, 20, *((uint32_t *)a1 + *(uint32_t *)(v8 + 16) + 171), *(uint32_t *)(v8 + 16));
        return v8;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::GetUserData  (binary VA: 0x1025fe0)
// Original: vox::VoxEngineInternal::GetUserData
// ----------------------------------------------------------------------------
vox::VoxEngineInternal::Self * vox::VoxEngineInternal::GetUserData(vox::VoxEngineInternal::Self *self, vox::DataHandle::Self *a2, int *a3)
{
  int DataObject;
  typedef int _g4_t_v5;
  typedef char _g4_t_v6;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  *(uint32_t *)self = -1;
  *((uint8_t *)self + 4) = 0;
  vox::AccessController::GetReadAccess((vox::DataHandle::Self *)((char *)a2 + 76));
  DataObject = vox::VoxEngineInternal::GetDataObject((vox::HandlableContainer::Self *)(a2), a3);
  if ( DataObject != 0 )
  {
    vox::DataObj::GetUserData((vox::DataObj::Self *)&v5, DataObject);
    *(uint32_t *)self = v5;
    *((uint8_t *)self + 4) = v6;
  }
  vox::AccessController::ReleaseReadAccess((vox::DataHandle::Self *)((char *)a2 + 76));
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::SetUserData  (binary VA: 0x1026080)
// Original: vox::VoxEngineInternal::SetUserData
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::SetUserData(vox::HandlableContainer::Self *a1, int *a2, int a3)
{
  int DataObject;

  vox::AccessController::GetReadAccess((vox::HandlableContainer::Self *)((char *)a1 + 76));
  DataObject = vox::VoxEngineInternal::GetDataObject(a1, a2);
  if ( DataObject != 0 )
    vox::DataObj::SetUserData(DataObject, a3);
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::HandlableContainer::Self *)((char *)a1 + 76)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::GetUid  (binary VA: 0x10260f0)
// Original: vox::VoxEngineInternal::GetUid
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::GetUid(vox::HandlableContainer::Self *a1, int *a2)
{
  int DataObject;
  int v3;

  vox::AccessController::GetReadAccess((vox::HandlableContainer::Self *)((char *)a1 + 76));
  DataObject = vox::VoxEngineInternal::GetDataObject(a1, a2);
  if ( DataObject != 0 )
    v3 = *(uint32_t *)(DataObject + 32);
  else
    v3 = -1;
  vox::AccessController::ReleaseReadAccess((vox::HandlableContainer::Self *)((char *)a1 + 76));
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::SetUid  (binary VA: 0x1026160)
// Original: vox::VoxEngineInternal::SetUid
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::SetUid(vox::HandlableContainer::Self *a1, int *a2, int a3)
{
  int DataObject;

  vox::AccessController::GetReadAccess((vox::HandlableContainer::Self *)((char *)a1 + 76));
  DataObject = vox::VoxEngineInternal::GetDataObject(a1, a2);
  if ( DataObject != 0 )
    *(uint32_t *)(DataObject + 32) = a3;
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::HandlableContainer::Self *)((char *)a1 + 76)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::SetPriorityBankId  (binary VA: 0x10261c0)
// Original: vox::VoxEngineInternal::SetPriorityBankId
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::SetPriorityBankId(vox::HandlableContainer::Self *a1, int *a2, int a3)
{
  int DataObject;

  vox::AccessController::GetReadAccess((vox::HandlableContainer::Self *)((char *)a1 + 76));
  DataObject = vox::VoxEngineInternal::GetDataObject(a1, a2);
  if ( DataObject != 0 )
    *(uint32_t *)(DataObject + 28) = a3;
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::HandlableContainer::Self *)((char *)a1 + 76)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::GetDuration  (binary VA: 0x1026220)
// Original: vox::VoxEngineInternal::GetDuration
// ----------------------------------------------------------------------------
long double vox::VoxEngineInternal::GetDuration(vox::HandlableContainer::Self *a1, int *a2)
{
  pthread_mutex_t **DataObject;
  long double Duration; // fst7
  float v5;

  vox::AccessController::GetReadAccess((vox::HandlableContainer::Self *)((char *)a1 + 76));
  DataObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetDataObject(a1, a2);
  Duration = 0.0;
  if ( DataObject != nullptr )
    Duration = vox::DataObj::GetDuration(DataObject);
  v5 = Duration;
  vox::AccessController::ReleaseReadAccess((vox::HandlableContainer::Self *)((char *)a1 + 76));
  return v5;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::IsValid  (binary VA: 0x1026290)
// Original: vox::VoxEngineInternal::IsValid
// ----------------------------------------------------------------------------
bool vox::VoxEngineInternal::IsValid(vox::HandlableContainer::Self *a1, int *a2)
{
  int DataObject;

  vox::AccessController::GetReadAccess((vox::HandlableContainer::Self *)((char *)a1 + 76));
  DataObject = vox::VoxEngineInternal::GetDataObject(a1, a2);
  vox::AccessController::ReleaseReadAccess((vox::HandlableContainer::Self *)((char *)a1 + 76));
  return DataObject != 0;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::IsReady  (binary VA: 0x10262f0)
// Original: vox::VoxEngineInternal::IsReady
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::IsReady(vox::HandlableContainer::Self *a1, int *a2)
{
  int IsReady;
  pthread_mutex_t **DataObject;

  vox::AccessController::GetReadAccess((vox::HandlableContainer::Self *)((char *)a1 + 76));
  IsReady = 0;
  DataObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetDataObject(a1, a2);
  if ( DataObject != nullptr )
    IsReady = vox::DataObj::IsReady(DataObject);
  vox::AccessController::ReleaseReadAccess((vox::HandlableContainer::Self *)((char *)a1 + 76));
  return IsReady;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::IncreaseDataObjectRefCount  (binary VA: 0x1026360)
// Original: vox::VoxEngineInternal::IncreaseDataObjectRefCount
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::IncreaseDataObjectRefCount(vox::HandlableContainer::Self *a1, int *a2)
{
  int DataObject;

  vox::AccessController::GetReadAccess((vox::HandlableContainer::Self *)((char *)a1 + 76));
  DataObject = vox::VoxEngineInternal::GetDataObject(a1, a2);
  if ( DataObject != 0 )
    G4_VCALL<void>(DataObject, 8);
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::HandlableContainer::Self *)((char *)a1 + 76)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::GetData  (binary VA: 0x1026450)
// Original: vox::VoxEngineInternal::GetData
// ----------------------------------------------------------------------------
vox::VoxEngineInternal::Self * vox::VoxEngineInternal::GetData(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2, vox::EmitterHandle::Self *a3)
{
  vox::AccessController::Self *v3;
  int EmitterObject;
  int v5;
  unsigned int v7;
  unsigned int v8;

  v3 = (vox::AccessController::Self *)((vox::EmitterHandle::Self *)((char *)a2 + 188));
  vox::AccessController::GetReadAccess((vox::EmitterHandle::Self *)((char *)a2 + 188));
  EmitterObject = vox::VoxEngineInternal::GetEmitterObject((vox::VoxEngineInternal::Self *)(a2), a3);
  if ( EmitterObject != 0 && (v5 = *(uint32_t *)(EmitterObject + 360)) != 0 )
  {
    v8 = *(uint32_t *)(v5 + 4);
    v7 = *(uint32_t *)(v5 + 8);
    vox::AccessController::ReleaseReadAccess(v3);
    vox::DataHandle::Construct(
      self,
      __SPAIR64__(v7, v8),
      (vox::VoxEngineInternal::Self **)&vox::VoxEngineInternal::s_voxEngineInternal,
      nullptr,
      0,
      0);
  }
  else
  {
    vox::AccessController::ReleaseReadAccess(v3);
    vox::DataHandle::Construct(self, -1, nullptr, nullptr, 0, 0);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::ReleaseDatasource  (binary VA: 0x10265f0)
// Original: vox::VoxEngineInternal::ReleaseDatasource
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::ReleaseDatasource(vox::VoxEngineInternal::Self *self, vox::DataHandle::Self *a2)
{
  pthread_mutex_t **DataObject;
  vox::DataObj::Self *v3;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 76));
  DataObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetDataObject((vox::HandlableContainer::Self *)(self), (int *)a2);
  v3 = (vox::DataObj::Self *)DataObject;
  if ( DataObject != nullptr )
  {
    vox::DataObj::NeedToDie(DataObject);
    vox::VoxEngineInternal::SetDataSourceToUpdate((pthread_mutex_t **)self, v3);
  }
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 76)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::DecreaseDataObjectRefCount  (binary VA: 0x1026670)
// Original: vox::VoxEngineInternal::DecreaseDataObjectRefCount
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::DecreaseDataObjectRefCount(vox::VoxEngineInternal::Self *self, vox::DataHandle::Self *a2)
{
  int DataObject;
  vox::DataObj::Self *v3;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 76));
  DataObject = vox::VoxEngineInternal::GetDataObject((vox::HandlableContainer::Self *)(self), (int *)a2);
  v3 = (vox::DataObj::Self *)DataObject;
  if ( DataObject != 0 )
  {
    G4_VCALL<void>(DataObject, 12);
    vox::VoxEngineInternal::SetDataSourceToUpdate((pthread_mutex_t **)self, v3);
  }
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 76)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::DetachEmitterObject  (binary VA: 0x1026980)
// Original: vox::VoxEngineInternal::DetachEmitterObject
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::DetachEmitterObject(vox::VoxEngineInternal::Self *self, int64_t a2)
{
  int result;
  vox::AccessController::Self *v3;

  result = vox::HandlableContainer::Detach((vox::VoxEngineInternal::Self *)((char *)self + 112), a2);
  if ( result == 0 )
  {
    vox::AccessController::GetWriteAccess((vox::VoxEngineInternal::Self *)((char *)self + 200));
    v3 = (vox::AccessController::Self *)vox::HandlableContainer::Detach((vox::VoxEngineInternal::Self *)((char *)self + 144), a2);
    vox::AccessController::ReleaseWriteAccess((vox::VoxEngineInternal::Self *)((char *)self + 200));
    return (int)(uintptr_t)(v3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::DetachDataObject  (binary VA: 0x1026a20)
// Original: vox::VoxEngineInternal::DetachDataObject
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::DetachDataObject(vox::VoxEngineInternal::Self *self, int64_t a2)
{
  int result;
  vox::AccessController::Self *v3;

  result = vox::HandlableContainer::Detach(self, a2);
  if ( result == 0 )
  {
    vox::AccessController::GetWriteAccess((vox::VoxEngineInternal::Self *)((char *)self + 88));
    v3 = (vox::AccessController::Self *)vox::HandlableContainer::Detach((vox::VoxEngineInternal::Self *)((char *)self + 32), a2);
    vox::AccessController::ReleaseWriteAccess((vox::VoxEngineInternal::Self *)((char *)self + 88));
    return (int)(uintptr_t)(v3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::GetFreeEmitterObjectId  (binary VA: 0x1026af0)
// Original: vox::VoxEngineInternal::GetFreeEmitterObjectId
// ----------------------------------------------------------------------------
uint64_t vox::VoxEngineInternal::GetFreeEmitterObjectId(vox::VoxEngineInternal::Self *self)
{
  return vox::HandlableContainer::GetFreeHandleId((vox::VoxEngineInternal::Self *)((char *)self + 112));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::GetFreeDataObjectId  (binary VA: 0x1026b20)
// Original: vox::VoxEngineInternal::GetFreeDataObjectId
// ----------------------------------------------------------------------------
uint64_t vox::VoxEngineInternal::GetFreeDataObjectId(vox::VoxEngineInternal::Self *self)
{
  return vox::HandlableContainer::GetFreeHandleId(self);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::LoadDataSourceAsync  (binary VA: 0x1026b50)
// Original: vox::VoxEngineInternal::LoadDataSourceAsync
// ----------------------------------------------------------------------------
vox::DataHandle::Self * vox::VoxEngineInternal::LoadDataSourceAsync(vox::DataHandle::Self *a1, vox::VoxEngineInternal::Self *a2, int a3, int a4, int a5, int a6, unsigned int a7, uint16_t a8)
{
  bool v8;
  unsigned int v9;
  int (*v10)(int);
  int (*v12)(int);
  uint64_t FreeDataObjectId; // rax
  int v14;
  int v15;
  int v16;
  unsigned int v20;
  typedef void (***_g4_t_v17)(uint32_t);
  typedef int _g4_t_v18;
  typedef uint8_t _g4_t_v19[60];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v17)) > _g4_s0 ? (8u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v18)) > _g4_s1 ? (12u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v19)) > _g4_s2 ? (16u + sizeof(_g4_t_v19)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);

  v8 = (uint8_t)vox::VoxEngineInternal::IsGroupValid((pthread_mutex_t **)a2, a7) == 0;
  v9 = 0;
  if ( !v8 )
    v9 = a7;
  v20 = v9;
  if ( a3 < 0 )
    goto LABEL_10;
  if ( a3 >= *((uint32_t *)a2 + 136) )
    goto LABEL_10;
  v10 = *((int (**)(int))a2 + a3 + 104);
  if ( v10 == nullptr )
    goto LABEL_10;
  v17 = (void (***)(uint32_t))v10(a4);
  if ( v17 == nullptr )
    goto LABEL_10;
  if ( a5 < 0
    || a5 >= *((uint32_t *)a2 + 169)
    || (v12 = *((int (**)(int))a2 + a5 + 137)) == nullptr
    || (v18 = v12(a6)) == 0 )
  {
    (**v17)((uint32_t)(uintptr_t)(v17));
    VoxFreeInternal(v17);
LABEL_10:
    vox::DataHandle::Construct(a1, -1, nullptr, nullptr, 0, 0);
    return a1;
  }
  FreeDataObjectId = vox::VoxEngineInternal::GetFreeDataObjectId(a2);
  v14 = HIDWORD(FreeDataObjectId);
  v15 = FreeDataObjectId;
  v16 = VoxAllocInternal(
          0x5Cu,
          0,
          (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_internal.cpp"),
          (int)(uintptr_t)("LoadDataSourceAsync"),
          1063);
  *(uint32_t *)v16 = ((uint32_t)(uintptr_t)&off_208D8C8);
  *(uint32_t *)(v16 + 4) = v15;
  *(uint32_t *)(v16 + 8) = v14;
  *(uint32_t *)(v16 + 12) = 0;
  vox::Mutex::Construct((vox::Mutex::Self *)(v16 + 20));
  *(uint32_t *)(v16 + 24) = v20;
  *(uint32_t *)v16 = ((uint32_t)(uintptr_t)&off_208D940);
  *(uint32_t *)(v16 + 52) = (uint32_t)(uintptr_t)(v17);
  *(uint32_t *)(v16 + 56) = v18;
  *(uint32_t *)(v16 + 60) = v16 + 60;
  *(uint32_t *)(v16 + 64) = v16 + 60;
  *(uint32_t *)(v16 + 28) = 0;
  *(uint32_t *)(v16 + 84) = a8;
  *(uint32_t *)(v16 + 32) = -1;
  *(uint32_t *)(v16 + 36) = 0;
  *(uint32_t *)(v16 + 40) = 0;
  *(uint32_t *)(v16 + 44) = 0;
  *(uint32_t *)(v16 + 48) = 0;
  *(uint32_t *)(v16 + 68) = -1;
  *(uint8_t *)(v16 + 72) = 0;
  *(uint8_t *)(v16 + 76) = 0;
  *(uint8_t *)(v16 + 77) = 0;
  *(uint32_t *)(v16 + 80) = 2;
  vox::Mutex::Construct((vox::Mutex::Self *)(v16 + 88));
  *(uint32_t *)(v16 + 16) = *((uint32_t *)a2 + 187);
  vox::DataHandle::Construct(
    (vox::DataHandle::Self *)v19,
    *(uint64_t *)(v16 + 4),
    (vox::VoxEngineInternal::Self **)&vox::VoxEngineInternal::s_voxEngineInternal,
    (vox::Handlable::Self *)v16,
    *((uint32_t *)a2 + *((uint32_t *)a2 + 187) + 171),
    *((uint32_t *)a2 + 187));
  *((uint32_t *)a2 + 187) = ((uint8_t)*((uint32_t *)a2 + 187) + 1) & 0xF;
  vox::AccessController::GetWriteAccess((vox::VoxEngineInternal::Self *)((char *)a2 + 88));
  vox::HandlableContainer::Add((vox::VoxEngineInternal::Self *)((char *)a2 + 32), (vox::Handlable::Self *)v16);
  vox::AccessController::ReleaseWriteAccess((vox::VoxEngineInternal::Self *)((char *)a2 + 88));
  vox::VoxEngineInternal::SetDataSourceToUpdate((pthread_mutex_t **)a2, (vox::DataObj::Self *)v16);
  vox::DataHandle::Construct(a1, (const vox::DataHandle::Self *)v19);
  vox::DataHandle::Destroy((vox::DataHandle::Self *)v19);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::LoadDataSourceAsync  (binary VA: 0x1026e20)
// Original: vox::VoxEngineInternal::LoadDataSourceAsync
// ----------------------------------------------------------------------------
vox::VoxEngineInternal::Self * vox::VoxEngineInternal::LoadDataSourceAsync(vox::VoxEngineInternal::Self *self, const vox::data_source::CreationSettings::Self *a2, int a3)
{
  uint8_t v4[44];

  *((uint32_t *)self + 1) = -1;
  *((uint32_t *)self + 2) = -1;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D888);
  vox::VoxEngineInternal::LoadDataSourceAsync(
    (vox::DataHandle::Self *)v4,
    a2,
    *(uint32_t *)a3,
    *(uint32_t *)(a3 + 4),
    *(uint32_t *)(a3 + 8),
    *(uint32_t *)(a3 + 12),
    *(uint32_t *)(a3 + 24),
    *(uint16_t *)(a3 + 16));
  vox::DataHandle::opAssign(self, (const vox::DataHandle::Self *)v4);
  vox::DataHandle::Destroy((vox::DataHandle::Self *)v4);
  vox::VoxEngineInternal::SetUid(a2, (int *)self, *(uint32_t *)(a3 + 20));
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::LoadDataSource  (binary VA: 0x1026f10)
// Original: vox::VoxEngineInternal::LoadDataSource
// ----------------------------------------------------------------------------
vox::VoxEngineInternal::Self * vox::VoxEngineInternal::LoadDataSource(vox::VoxEngineInternal::Self *self, vox::VoxEngineInternal::Self *a2, int a3, int a4, int a5, unsigned int a6, unsigned int a7)
{
  bool v7;
  unsigned int v8;
  int (*v9)(int);
  void *v10;
  int (*v12)(unsigned int);
  int v13;
  uint32_t *v14;
  int v15;
  uint64_t FreeDataObjectId;
  int v17;
  unsigned int v27;
  typedef int _g4_t_v18;
  typedef vox::Handlable::Self *_g4_t_v19;
  typedef void *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint8_t _g4_t_v26[60];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v18)) > _g4_s0 ? (0u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v19)) > _g4_s1 ? (4u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v20)) > _g4_s2 ? (8u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v21)) > _g4_s3 ? (12u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v22)) > _g4_s4 ? (16u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v23)) > _g4_s5 ? (20u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v24)) > _g4_s6 ? (24u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v25)) > _g4_s7 ? (28u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v26)) > _g4_s8 ? (32u + sizeof(_g4_t_v26)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);

  v7 = (uint8_t)vox::VoxEngineInternal::IsGroupValid((pthread_mutex_t **)a2, a7) == 0;
  v8 = 0;
  if ( !v7 )
    v8 = a7;
  v27 = v8;
  if ( a3 >= 0 && a3 < *((uint32_t *)a2 + 136) )
  {
    v9 = *((int (**)(int))a2 + a3 + 104);
    if ( v9 != nullptr )
    {
      v20 = (void *)v9(a4);
      if ( v20 != nullptr )
      {
        if ( a5 >= 0
          && a5 < *((uint32_t *)a2 + 169)
          && (v12 = *((int (**)(unsigned int))a2 + a5 + 137)) != nullptr
          && (v21 = v12(a6)) != 0 )
        {
          v13 = G4_VCALL<int>(v20, 20);
          if ( v13 != 0 )
          {
            v18 = v13;
            v14 = (uint32_t *)G4_VCALL<int>(v21, 16, v13);
            v15 = v18;
            if ( v14 != nullptr
              && (v22 = v14[1],
                  v25 = v14[2],
                  v24 = v14[3],
                  v23 = v14[4],
                  (*(void (**)(int, int, uint32_t *))(*(uint32_t *)v21 + 20))(v18, v21, v14),
                  v15 = v18,
                  v22 > 0) )
            {
              FreeDataObjectId = vox::VoxEngineInternal::GetFreeDataObjectId(a2);
              v17 = VoxAllocInternal(
                      0x5Cu,
                      0,
                      (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_internal.cpp"),
                      (int)(uintptr_t)("LoadDataSource"),
                      978);
              *(uint32_t *)v17 = ((uint32_t)(uintptr_t)&off_208D8C8);
              *(uint64_t *)(v17 + 4) = FreeDataObjectId;
              *(uint32_t *)(v17 + 12) = 0;
              v19 = (vox::Handlable::Self *)v17;
              vox::Mutex::Construct((vox::Mutex::Self *)(v17 + 20));
              *((uint32_t *)v19 + 6) = v27;
              *((uint32_t *)v19 + 9) = v22;
              *(uint32_t *)v19 = ((uint32_t)(uintptr_t)&off_208D940);
              *((uint32_t *)v19 + 10) = v25;
              *((uint32_t *)v19 + 11) = v24;
              *((uint32_t *)v19 + 13) = (uint32_t)(uintptr_t)(v20);
              *((uint32_t *)v19 + 12) = v23;
              *((uint32_t *)v19 + 14) = v21;
              *((uint32_t *)v19 + 7) = 0;
              *((uint32_t *)v19 + 8) = -1;
              *((uint32_t *)v19 + 15) = (uint32_t)(uintptr_t)((char *)v19 + 60);
              *((uint32_t *)v19 + 16) = (uint32_t)(uintptr_t)((char *)v19 + 60);
              *((uint32_t *)v19 + 17) = -1;
              *((uint8_t *)v19 + 72) = 0;
              *((uint8_t *)v19 + 76) = 0;
              *((uint8_t *)v19 + 77) = 0;
              *((uint32_t *)v19 + 20) = 0;
              vox::Mutex::Construct((vox::Handlable::Self *)((char *)v19 + 88));
              G4_VCALL<void>(v20, 24, v18);
              if ( v19 != nullptr )
              {
                *((uint32_t *)v19 + 4) = *((uint32_t *)a2 + 187);
                vox::DataHandle::Construct(
                  (vox::DataHandle::Self *)v26,
                  *(uint64_t *)((char *)v19 + 4),
                  (vox::VoxEngineInternal::Self **)&vox::VoxEngineInternal::s_voxEngineInternal,
                  v19,
                  *((uint32_t *)a2 + *((uint32_t *)a2 + 187) + 171),
                  *((uint32_t *)a2 + 187));
                *((uint32_t *)a2 + 187) = ((uint8_t)*((uint32_t *)a2 + 187) + 1) & 0xF;
                vox::AccessController::GetWriteAccess((vox::VoxEngineInternal::Self *)((char *)a2 + 88));
                vox::HandlableContainer::Add((vox::VoxEngineInternal::Self *)((char *)a2 + 32), v19);
                vox::AccessController::ReleaseWriteAccess((vox::VoxEngineInternal::Self *)((char *)a2 + 88));
                vox::DataHandle::Construct(self, (const vox::DataHandle::Self *)v26);
                vox::DataHandle::Destroy((vox::DataHandle::Self *)v26);
                return self;
              }
            }
            else
            {
              G4_VCALL<void>(v20, 24, v15);
            }
          }
          (**(void (***)(void *))v20)(v20);
          VoxFreeInternal(v20);
          (**(void (***)(int))v21)(v21);
          v10 = (void *)v21;
        }
        else
        {
          (**(void (***)(void *))v20)(v20);
          v10 = v20;
        }
        VoxFreeInternal(v10);
      }
    }
  }
  vox::DataHandle::Construct(self, -1, nullptr, nullptr, 0, 0);
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::ConvertToRamBufferSource  (binary VA: 0x1027280)
// Original: vox::VoxEngineInternal::ConvertToRamBufferSource
// ----------------------------------------------------------------------------
vox::VoxEngineInternal::Self * vox::VoxEngineInternal::ConvertToRamBufferSource(vox::VoxEngineInternal::Self *self, vox::DataHandle::Self *a2, int *a3)
{
  int DataObject;
  int v4;
  int v5;
  signed int v7;
  int v8;
  unsigned int Group;
  unsigned int v10;
  int v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef vox::AccessController::Self *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16[2];
  typedef char _g4_t_v17;
  typedef char _g4_t_v18;
  typedef uint32_t _g4_t_v19[8];
  typedef uint8_t _g4_t_v20[60];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v13)) > _g4_s1 ? (4u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v14)) > _g4_s2 ? (8u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v15)) > _g4_s3 ? (12u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v16)) > _g4_s4 ? (20u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v17)) > _g4_s5 ? (28u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (29u + sizeof(_g4_t_v18)) > _g4_s6 ? (29u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v19)) > _g4_s7 ? (32u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v20)) > _g4_s8 ? (64u + sizeof(_g4_t_v20)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 29u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 64u);

  v14 = (vox::AccessController::Self *)((vox::DataHandle::Self *)((char *)a2 + 76));
  vox::AccessController::GetReadAccess((vox::DataHandle::Self *)((char *)a2 + 76));
  DataObject = vox::VoxEngineInternal::GetDataObject(a2, a3);
  if ( DataObject == 0 )
  {
    vox::AccessController::ReleaseReadAccess(v14);
    vox::DataHandle::Construct(self, -1, nullptr, nullptr, 0, 0);
    return self;
  }
  v19[1] = -1;
  v19[2] = -1;
  v19[0] = ((uint32_t)(uintptr_t)&off_208D888);
  v4 = *(uint32_t *)(DataObject + 80);
  memset(&v19[3], 0, 20);
  v5 = *(uint32_t *)(DataObject + 52);
  if ( v4 == 0
    && (v15 = *(uint32_t *)(DataObject + 56)) != 0
    && v5 != 0
    && (v13 = G4_VCALL<int>(v5, 20)) != 0 )
  {
    v7 = G4_VCALL<int>(v5, 16);
    if ( v7 <= 0 )
    {
      G4_VCALL<void>(v5, 24, v13);
      vox::AccessController::ReleaseReadAccess(v14);
      vox::DataHandle::Construct(self, -1, nullptr, nullptr, 0, 0);
      goto LABEL_6;
    }
    v8 = VoxAllocInternal(
           v7,
           0,
           (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_internal.cpp"),
           (int)(uintptr_t)("ConvertToRamBufferSource"),
           1221);
    if ( v8 != 0 )
    {
      v12 = v8;
      G4_VCALL<void>(v13, 16, 0, 0);
      G4_VCALL<void>(v13, 28, v12, v7);
      G4_VCALL<void>(v5, 24, v13);
      vox::AccessController::ReleaseReadAccess(v14);
      v16[1] = v7;
      v16[0] = v12;
      v17 = 0;
      v18 = 1;
      Group = vox::DataObj::GetGroup((pthread_mutex_t **)DataObject);
      v10 = G4_VCALL<int>(v15, 28);
      v11 = G4_VCALL<int>(v15, 24);
      vox::VoxEngineInternal::LoadDataSource((vox::VoxEngineInternal::Self *)v20, a2, 0, (int)(uintptr_t)(v16), v11, v10, Group);
      vox::DataHandle::opAssign((vox::DataHandle::Self *)v19, (const vox::DataHandle::Self *)v20);
      vox::DataHandle::Destroy((vox::DataHandle::Self *)v20);
    }
    else
    {
      G4_VCALL<void>(v5, 24, v13);
      vox::AccessController::ReleaseReadAccess(v14);
    }
  }
  else
  {
    vox::AccessController::ReleaseReadAccess(v14);
  }
  vox::DataHandle::Construct(self, (const vox::DataHandle::Self *)v19);
LABEL_6:
  vox::DataHandle::Destroy((vox::DataHandle::Self *)v19);
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::ConvertToRawSource  (binary VA: 0x1027590)
// Original: vox::VoxEngineInternal::ConvertToRawSource
// ----------------------------------------------------------------------------
vox::VoxEngineInternal::Self * vox::VoxEngineInternal::ConvertToRawSource(vox::VoxEngineInternal::Self *self, vox::DataHandle::Self *a2, int *a3)
{
  int DataObject;
  int v4;
  int v5;
  int v6;
  unsigned int *v7;
  unsigned int *v8;
  signed int v9;
  int v10;
  int v11;
  unsigned int Group;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef vox::AccessController::Self *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20[2];
  typedef char _g4_t_v21;
  typedef char _g4_t_v22;
  typedef unsigned int _g4_t_v23;
  typedef unsigned int _g4_t_v24;
  typedef unsigned int _g4_t_v25;
  typedef unsigned int _g4_t_v26;
  typedef uint32_t _g4_t_v27[8];
  typedef uint8_t _g4_t_v28[60];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (8u + sizeof(_g4_t_v14)) > _g4_s0 ? (8u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v15)) > _g4_s1 ? (12u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v16)) > _g4_s2 ? (16u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v17)) > _g4_s3 ? (20u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v18)) > _g4_s4 ? (24u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v19)) > _g4_s5 ? (28u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v20)) > _g4_s6 ? (36u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v21)) > _g4_s7 ? (44u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (45u + sizeof(_g4_t_v22)) > _g4_s8 ? (45u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v23)) > _g4_s9 ? (48u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v24)) > _g4_s10 ? (52u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v25)) > _g4_s11 ? (56u + sizeof(_g4_t_v25)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v26)) > _g4_s12 ? (60u + sizeof(_g4_t_v26)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v27)) > _g4_s13 ? (64u + sizeof(_g4_t_v27)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v28)) > _g4_s14 ? (96u + sizeof(_g4_t_v28)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 45u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 56u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 60u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 64u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 96u);

  v17 = (vox::AccessController::Self *)((vox::DataHandle::Self *)((char *)a2 + 76));
  vox::AccessController::GetReadAccess((vox::DataHandle::Self *)((char *)a2 + 76));
  DataObject = vox::VoxEngineInternal::GetDataObject(a2, a3);
  v4 = DataObject;
  if ( DataObject == 0 )
  {
    vox::AccessController::ReleaseReadAccess(v17);
    vox::DataHandle::Construct(self, -1, nullptr, nullptr, 0, 0);
    return self;
  }
  v5 = *(uint32_t *)(DataObject + 52);
  v27[1] = -1;
  v27[0] = ((uint32_t)(uintptr_t)&off_208D888);
  v6 = *(uint32_t *)(DataObject + 80);
  v27[2] = -1;
  memset(&v27[3], 0, 20);
  v15 = v5;
  if ( v6 == 0
    && (v16 = *(uint32_t *)(v4 + 56), v5 != 0)
    && (v18 = G4_VCALL<int>(v5, 20)) != 0 )
  {
    if ( v16 != 0
      && (v7 = (unsigned int *)G4_VCALL<int>(v16, 16, v18), v8 = v7, v7 != nullptr) )
    {
      v9 = ((int)v7[3] >> 3) * v7[4] * v7[1];
      if ( v9 <= 0 )
      {
        G4_VCALL<void>(v16, 20, v7);
        G4_VCALL<void>(v15, 24, v18);
        vox::AccessController::ReleaseReadAccess(v17);
        vox::DataHandle::Construct(self, -1, nullptr, nullptr, 0, 0);
        goto LABEL_13;
      }
      v10 = VoxAllocInternal(
              v9,
              0,
              (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_internal.cpp"),
              (int)(uintptr_t)("ConvertToRawSource"),
              1137);
      v11 = 0;
      v19 = v10;
      if ( v10 != 0 )
      {
        G4_VCALL<void>(v8, 44, 0);
        v11 = G4_VCALL<int>(v8, 16, v19, v9);
      }
      v26 = 0;
      v25 = 0;
      v24 = 0;
      v23 = v8[1];
      v24 = v8[2];
      v25 = v8[3];
      v26 = v8[4];
      v14 = v11;
      G4_VCALL<void>(v16, 20, v8);
      G4_VCALL<void>(v15, 24, v18);
      vox::AccessController::ReleaseReadAccess(v17);
      if ( v19 != 0 )
      {
        v20[1] = v14;
        v21 = 0;
        v20[0] = v19;
        v22 = 1;
        Group = vox::DataObj::GetGroup((pthread_mutex_t **)v4);
        vox::VoxEngineInternal::LoadDataSource(
          (vox::VoxEngineInternal::Self *)v28,
          a2,
          0,
          (int)(uintptr_t)(v20),
          0,
          (unsigned int)(uintptr_t)(&v23),
          Group);
        vox::DataHandle::opAssign((vox::DataHandle::Self *)v27, (const vox::DataHandle::Self *)v28);
        vox::DataHandle::Destroy((vox::DataHandle::Self *)v28);
      }
    }
    else
    {
      G4_VCALL<void>(v15, 24, v18);
    }
  }
  else
  {
    vox::AccessController::ReleaseReadAccess(v17);
  }
  vox::DataHandle::Construct(self, (const vox::DataHandle::Self *)v27);
LABEL_13:
  vox::DataHandle::Destroy((vox::DataHandle::Self *)v27);
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::LoadDataSource  (binary VA: 0x1027920)
// Original: vox::VoxEngineInternal::LoadDataSource
// ----------------------------------------------------------------------------
vox::VoxEngineInternal::Self * vox::VoxEngineInternal::LoadDataSource(vox::VoxEngineInternal::Self *self, const vox::data_source::CreationSettings::Self *a2, int *a3)
{
  int v3;
  typedef vox::DataHandle::Self *_g4_t_v5;
  typedef uint8_t _g4_t_v6[32];
  typedef uint8_t _g4_t_v7[32];
  typedef uint8_t _g4_t_v8[32];
  typedef uint8_t _g4_t_v9[32];
  typedef uint8_t _g4_t_v10[32];
  typedef uint8_t _g4_t_v11[44];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v6)) > _g4_s1 ? (16u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v7)) > _g4_s2 ? (48u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (80u + sizeof(_g4_t_v8)) > _g4_s3 ? (80u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (112u + sizeof(_g4_t_v9)) > _g4_s4 ? (112u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (144u + sizeof(_g4_t_v10)) > _g4_s5 ? (144u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (176u + sizeof(_g4_t_v11)) > _g4_s6 ? (176u + sizeof(_g4_t_v11)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 48u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 80u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 112u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 144u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 176u);

  *((uint32_t *)self + 1) = -1;
  *((uint32_t *)self + 2) = -1;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208D888);
  v3 = a3[4];
  if ( (v3 & 0x10000) != 0 )
  {
    v5 = (vox::DataHandle::Self *)v6;
    vox::VoxEngineInternal::LoadDataSourceAsync((vox::DataHandle::Self *)v6, a2, *a3, a3[1], a3[2], a3[3], a3[6], v3);
  }
  else if ( (v3 & 1) != 0 )
  {
    vox::VoxEngineInternal::LoadDataSource((vox::VoxEngineInternal::Self *)v7, a2, *a3, a3[1], a3[2], a3[3], a3[6]);
    vox::DataHandle::opAssign(self, (const vox::DataHandle::Self *)v7);
    vox::DataHandle::Destroy((vox::DataHandle::Self *)v7);
    v5 = (vox::DataHandle::Self *)v8;
    vox::VoxEngineInternal::ConvertToRamBufferSource((vox::VoxEngineInternal::Self *)v8, a2, (int *)self);
  }
  else if ( v3 == 2 )
  {
    vox::VoxEngineInternal::LoadDataSource((vox::VoxEngineInternal::Self *)v9, a2, *a3, a3[1], a3[2], a3[3], a3[6]);
    vox::DataHandle::opAssign(self, (const vox::DataHandle::Self *)v9);
    vox::DataHandle::Destroy((vox::DataHandle::Self *)v9);
    v5 = (vox::DataHandle::Self *)v10;
    vox::VoxEngineInternal::ConvertToRawSource((vox::VoxEngineInternal::Self *)v10, a2, (int *)self);
  }
  else
  {
    v5 = (vox::DataHandle::Self *)v11;
    vox::VoxEngineInternal::LoadDataSource((vox::VoxEngineInternal::Self *)v11, a2, *a3, a3[1], a3[2], a3[3], a3[6]);
  }
  vox::DataHandle::opAssign(self, v5);
  vox::DataHandle::Destroy(v5);
  vox::VoxEngineInternal::SetUid(a2, (int *)self, a3[5]);
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::ReleaseDatasourceGroup  (binary VA: 0x1027bc0)
// Original: vox::VoxEngineInternal::ReleaseDatasourceGroup
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::ReleaseDatasourceGroup(long double a1, pthread_mutex_t **self, unsigned int a3)
{
  unsigned int v3;
  int v4;
  int v5;
  vox::DataObj::Self *v6;
  int v7;
  int v8;
  vox::DataObj::Self *v9;
  typedef unsigned int _g4_t_v11;
  typedef uint32_t _g4_t_v12[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);

  v3 = a3;
  vox::AccessController::GetReadAccess((vox::AccessController::Self *)(self + 19));
  vox::HandlableContainer::begin((vox::HandlableContainer::Self *)v12, (int)(uintptr_t)(self));
  v4 = v12[0];
  vox::HandlableContainer::end((vox::HandlableContainer::Self *)v12, (int)(uintptr_t)(self));
  if ( v4 != v12[0] )
  {
    v5 = v12[0];
    do
    {
      while ( 1 )
      {
        v6 = *(vox::DataObj::Self **)(v4 + 24);
        if ( (uint8_t)vox::DataObj::IsChild(a1, v6, a3) != 0 )
          break;
        v4 = sub_1904890(v4);
        if ( v4 == v5 )
          goto LABEL_6;
      }
      vox::DataObj::NeedToDie((pthread_mutex_t **)v6);
      vox::VoxEngineInternal::SetDataSourceToUpdate(self, v6);
      v4 = sub_1904890(v4);
    }
    while ( v4 != v5 );
LABEL_6:
    v3 = a3;
  }
  vox::AccessController::ReleaseReadAccess((vox::AccessController::Self *)(self + 19));
  vox::AccessController::GetReadAccess((vox::AccessController::Self *)(self + 22));
  vox::HandlableContainer::begin((vox::HandlableContainer::Self *)v12, (int)(uintptr_t)(self + 8));
  v7 = v12[0];
  vox::HandlableContainer::end((vox::HandlableContainer::Self *)v12, (int)(uintptr_t)(self + 8));
  if ( v7 != v12[0] )
  {
    v11 = v3;
    v8 = v12[0];
    do
    {
      while ( 1 )
      {
        v9 = *(vox::DataObj::Self **)(v7 + 24);
        if ( (uint8_t)vox::DataObj::IsChild(a1, v9, v11) != 0 )
          break;
        v7 = sub_1904890(v7);
        if ( v7 == v8 )
          return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::AccessController::Self *)(self + 22)));
      }
      vox::DataObj::NeedToDie((pthread_mutex_t **)v9);
      vox::VoxEngineInternal::SetDataSourceToUpdate(self, v9);
      v7 = sub_1904890(v7);
    }
    while ( v7 != v8 );
  }
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::AccessController::Self *)(self + 22)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::GetAllEmitters  (binary VA: 0x1027d50)
// Original: vox::VoxEngineInternal::GetAllEmitters
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::GetAllEmitters(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2, int a3)
{
  int v3;
  int v4;
  vox::EmitterHandle::Self *v5;
  int v6;
  vox::EmitterHandle::Self *v7;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint8_t _g4_t_v12[32];
  typedef uint8_t _g4_t_v13[60];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v11)) > _g4_s2 ? (28u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v12)) > _g4_s3 ? (32u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v13)) > _g4_s4 ? (64u + sizeof(_g4_t_v13)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 64u);

  v3 = 0;
  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 200));
  vox::HandlableContainer::begin((vox::HandlableContainer::Self *)&v11, (int)(uintptr_t)(self) + 112);
  v4 = v11;
  vox::HandlableContainer::end((vox::HandlableContainer::Self *)&v11, (int)(uintptr_t)(self) + 112);
  v9 = v11;
  if ( v11 != v4 && a3 > 0 )
  {
    v5 = a2;
    do
    {
      ++v3;
      vox::EmitterHandle::Construct(
        (vox::EmitterHandle::Self *)v12,
        *(uint64_t *)(*(uint32_t *)(v4 + 24) + 4),
        (vox::VoxEngineInternal::Self **)&vox::VoxEngineInternal::s_voxEngineInternal,
        *(vox::Handlable::Self **)(v4 + 24),
        *((uint32_t *)self + *(uint32_t *)(*(uint32_t *)(v4 + 24) + 16) + 171),
        *(uint32_t *)(*(uint32_t *)(v4 + 24) + 16));
      vox::EmitterHandle::opAssign(v5, (const vox::EmitterHandle::Self *)v12);
      vox::EmitterHandle::Destroy((vox::EmitterHandle::Self *)v12);
      v4 = sub_1904890(v4);
      if ( v9 == v4 )
        break;
      v5 = (vox::EmitterHandle::Self *)((char *)v5 + 32);
    }
    while ( v3 != a3 );
  }
  vox::HandlableContainer::begin((vox::HandlableContainer::Self *)&v11, (int)(uintptr_t)(self) + 144);
  v6 = v11;
  vox::HandlableContainer::end((vox::HandlableContainer::Self *)&v11, (int)(uintptr_t)(self) + 144);
  v10 = v11;
  if ( v6 != v11 && a3 > v3 )
  {
    v7 = (vox::EmitterHandle::Self *)((char *)a2 + 32 * v3);
    do
    {
      ++v3;
      vox::EmitterHandle::Construct(
        (vox::EmitterHandle::Self *)v13,
        *(uint64_t *)(*(uint32_t *)(v6 + 24) + 4),
        (vox::VoxEngineInternal::Self **)&vox::VoxEngineInternal::s_voxEngineInternal,
        *(vox::Handlable::Self **)(v6 + 24),
        *((uint32_t *)self + *(uint32_t *)(*(uint32_t *)(v6 + 24) + 16) + 171),
        *(uint32_t *)(*(uint32_t *)(v6 + 24) + 16));
      vox::EmitterHandle::opAssign(v7, (const vox::EmitterHandle::Self *)v13);
      vox::EmitterHandle::Destroy((vox::EmitterHandle::Self *)v13);
      v6 = sub_1904890(v6);
      if ( v10 == v6 )
        break;
      v7 = (vox::EmitterHandle::Self *)((char *)v7 + 32);
    }
    while ( v3 != a3 );
  }
  vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 200));
  vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::GetEmitterHandles  (binary VA: 0x1027fa0)
// Original: vox::VoxEngineInternal::GetEmitterHandles
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::GetEmitterHandles(vox::VoxEngineInternal::Self *self, vox::DataHandle::Self *a2, vox::EmitterHandle::Self *a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int i;
  int v10;
  typedef int _g4_t_DataObject;
  typedef int _g4_t_v13;
  typedef uint8_t _g4_t_v14[32];
  typedef uint8_t _g4_t_v15[60];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_DataObject)) > _g4_s0 ? (12u + sizeof(_g4_t_DataObject)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v13)) > _g4_s1 ? (28u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v14)) > _g4_s2 ? (32u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v15)) > _g4_s3 ? (64u + sizeof(_g4_t_v15)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_DataObject &DataObject = *reinterpret_cast<_g4_t_DataObject *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 64u);

  v4 = 0;
  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 76));
  DataObject = vox::VoxEngineInternal::GetDataObject(self, (int *)a2);
  if ( DataObject != 0 )
  {
    vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
    vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 200));
    vox::HandlableContainer::begin((vox::HandlableContainer::Self *)&v13, (int)(uintptr_t)(self) + 112);
    v5 = v13;
    vox::HandlableContainer::end((vox::HandlableContainer::Self *)&v13, (int)(uintptr_t)(self) + 112);
    v6 = v13;
    if ( v13 != v5 && a4 > 0 )
    {
      do
      {
        v7 = *(uint32_t *)(v5 + 24);
        if ( DataObject == *(uint32_t *)(v7 + 360) )
        {
          vox::EmitterHandle::Construct(
            (vox::EmitterHandle::Self *)v14,
            *(uint64_t *)(v7 + 4),
            (vox::VoxEngineInternal::Self **)&vox::VoxEngineInternal::s_voxEngineInternal,
            (vox::Handlable::Self *)v7,
            *((uint32_t *)self + *(uint32_t *)(v7 + 16) + 171),
            *(uint32_t *)(v7 + 16));
          vox::EmitterHandle::opAssign((vox::EmitterHandle::Self *)((char *)a3 + 32 * v4++), (const vox::EmitterHandle::Self *)v14);
          vox::EmitterHandle::Destroy((vox::EmitterHandle::Self *)v14);
        }
        v5 = sub_1904890(v5);
      }
      while ( v6 != v5 && v4 < a4 );
    }
    vox::HandlableContainer::begin((vox::HandlableContainer::Self *)&v13, (int)(uintptr_t)(self) + 144);
    v8 = v13;
    vox::HandlableContainer::end((vox::HandlableContainer::Self *)&v13, (int)(uintptr_t)(self) + 144);
    for ( i = v13; i != v8 && v4 < a4; v8 = sub_1904890(v8) )
    {
      v10 = *(uint32_t *)(v8 + 24);
      if ( DataObject == *(uint32_t *)(v10 + 360) )
      {
        vox::EmitterHandle::Construct(
          (vox::EmitterHandle::Self *)v15,
          *(uint64_t *)(v10 + 4),
          (vox::VoxEngineInternal::Self **)&vox::VoxEngineInternal::s_voxEngineInternal,
          (vox::Handlable::Self *)v10,
          *((uint32_t *)self + *(uint32_t *)(v10 + 16) + 171),
          *(uint32_t *)(v10 + 16));
        vox::EmitterHandle::opAssign((vox::EmitterHandle::Self *)((char *)a3 + 32 * v4++), (const vox::EmitterHandle::Self *)v15);
        vox::EmitterHandle::Destroy((vox::EmitterHandle::Self *)v15);
      }
    }
    vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 200));
    vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  }
  vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 76));
  return v4;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::GetAllDataSources  (binary VA: 0x1028230)
// Original: vox::VoxEngineInternal::GetAllDataSources
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::GetAllDataSources(vox::VoxEngineInternal::Self *self, vox::DataHandle::Self *a2, int a3)
{
  int v3;
  int v4;
  vox::DataHandle::Self *v5;
  int v6;
  vox::DataHandle::Self *v7;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint8_t _g4_t_v12[32];
  typedef uint8_t _g4_t_v13[60];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v11)) > _g4_s2 ? (28u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v12)) > _g4_s3 ? (32u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v13)) > _g4_s4 ? (64u + sizeof(_g4_t_v13)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 64u);

  v3 = 0;
  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 76));
  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 88));
  vox::HandlableContainer::begin((vox::HandlableContainer::Self *)&v11, (int)(uintptr_t)(self));
  v4 = v11;
  vox::HandlableContainer::end((vox::HandlableContainer::Self *)&v11, (int)(uintptr_t)(self));
  v9 = v11;
  if ( v11 != v4 && a3 > 0 )
  {
    v5 = a2;
    do
    {
      ++v3;
      vox::DataHandle::Construct(
        (vox::DataHandle::Self *)v12,
        *(uint64_t *)(*(uint32_t *)(v4 + 24) + 4),
        (vox::VoxEngineInternal::Self **)&vox::VoxEngineInternal::s_voxEngineInternal,
        *(vox::Handlable::Self **)(v4 + 24),
        *((uint32_t *)self + *(uint32_t *)(*(uint32_t *)(v4 + 24) + 16) + 171),
        *(uint32_t *)(*(uint32_t *)(v4 + 24) + 16));
      vox::DataHandle::opAssign(v5, (const vox::DataHandle::Self *)v12);
      vox::DataHandle::Destroy((vox::DataHandle::Self *)v12);
      v4 = sub_1904890(v4);
      if ( v9 == v4 )
        break;
      v5 = (vox::DataHandle::Self *)((char *)v5 + 32);
    }
    while ( v3 != a3 );
  }
  vox::HandlableContainer::begin((vox::HandlableContainer::Self *)&v11, (int)(uintptr_t)(self) + 32);
  v6 = v11;
  vox::HandlableContainer::end((vox::HandlableContainer::Self *)&v11, (int)(uintptr_t)(self) + 32);
  v10 = v11;
  if ( v6 != v11 && a3 > v3 )
  {
    v7 = (vox::DataHandle::Self *)((char *)a2 + 32 * v3);
    do
    {
      ++v3;
      vox::DataHandle::Construct(
        (vox::DataHandle::Self *)v13,
        *(uint64_t *)(*(uint32_t *)(v6 + 24) + 4),
        (vox::VoxEngineInternal::Self **)&vox::VoxEngineInternal::s_voxEngineInternal,
        *(vox::Handlable::Self **)(v6 + 24),
        *((uint32_t *)self + *(uint32_t *)(*(uint32_t *)(v6 + 24) + 16) + 171),
        *(uint32_t *)(*(uint32_t *)(v6 + 24) + 16));
      vox::DataHandle::opAssign(v7, (const vox::DataHandle::Self *)v13);
      vox::DataHandle::Destroy((vox::DataHandle::Self *)v13);
      v6 = sub_1904890(v6);
      if ( v10 == v6 )
        break;
      v7 = (vox::DataHandle::Self *)((char *)v7 + 32);
    }
    while ( v3 != a3 );
  }
  vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 88));
  vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 76));
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::KillEmitter  (binary VA: 0x1028650)
// Original: vox::VoxEngineInternal::KillEmitter
// ----------------------------------------------------------------------------
void vox::VoxEngineInternal::KillEmitter(vox::VoxEngineInternal::Self *self, vox::EmitterObj::Self *a2)
{
  int v2;
  int v3;
  void (***v4)(uint32_t);
  void (***v5)(uint32_t);
  int v6;
  int v7;
  void *v8;
  void (***v9)(uint32_t);

  if ( a2 != nullptr )
  {
    ++*((uint32_t *)self + *((uint32_t *)a2 + 4) + 171);
    if ( *((uint8_t *)a2 + 48) != 0 )
      vox::PriorityBankManager::RemoveEmitter(*((vox::PriorityBankManager::Self **)self + 53), *((uint32_t *)a2 + 11), a2);
    if ( *((uint32_t *)a2 + 88) != 0 )
    {
      v2 = *((uint32_t *)self + 170);
      if ( v2 != 0 )
        G4_VCALL<void>(v2, 64, *((uint32_t *)a2 + 88));
    }
    vox::EmitterObj::CleanUp(a2);
    vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 76));
    v3 = *((uint32_t *)a2 + 90);
    if ( v3 != 0 )
    {
      v4 = *((void (****)(uint32_t))a2 + 89);
      v9 = v4;
      if ( v4 != nullptr )
      {
        v5 = (void (***)(uint32_t))((int (*)(uint32_t))(*v4)[13])((uint32_t)(uintptr_t)(v4));
        if ( v5 != nullptr )
        {
          v6 = *(uint32_t *)(v3 + 52);
          if ( v6 != 0 )
          {
            G4_VCALL<void>(v6, 24, v5);
          }
          else
          {
            v8 = v5;
            (**v5)((uint32_t)(uintptr_t)(v5));
            VoxFreeInternal(v8);
          }
        }
        v7 = *(uint32_t *)(v3 + 56);
        if ( v7 != 0 )
        {
          G4_VCALL<void>(v7, 20, v9);
        }
        else
        {
          (**v9)((uint32_t)(uintptr_t)(v9));
          VoxFreeInternal(v9);
        }
      }
      vox::DataObj::UnregisterEmitter((pthread_mutex_t **)v3, *(uint64_t *)((char *)a2 + 4));
      vox::VoxEngineInternal::SetDataSourceToUpdate((pthread_mutex_t **)self, (vox::DataObj::Self *)v3);
    }
    vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 76));
    (**(void (***)(vox::EmitterObj::Self *))a2)(a2);
    VoxFreeInternal(a2);
  }
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::ReleaseDatasource  (binary VA: 0x10287e0)
// Original: vox::VoxEngineInternal::ReleaseDatasource
// ----------------------------------------------------------------------------
void vox::VoxEngineInternal::ReleaseDatasource(vox::VoxEngineInternal::Self *self, vox::DataObj::Self *a2)
{
  vox::DataObj::Self *v2;
  vox::DataObj::Self *v3;
  vox::EmitterObj::Self *v4;
  void (***v5)(uint32_t);
  void (***v6)(uint32_t);

  if ( a2 != nullptr )
  {
    v2 = (vox::DataObj::Self *)((char *)a2 + 60);
    ++*((uint32_t *)self + *((uint32_t *)a2 + 4) + 171);
    vox::AccessController::GetWriteAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
    v3 = *((vox::DataObj::Self **)a2 + 15);
    if ( (vox::DataObj::Self *)((char *)a2 + 60) != v3 )
    {
      do
      {
        do
          v3 = *(vox::DataObj::Self **)v3;
        while ( v2 != v3 );
        v4 = (vox::EmitterObj::Self *)vox::VoxEngineInternal::DetachEmitterObject(self, *(uint64_t *)(*((uint32_t *)a2 + 16) + 8));
        vox::VoxEngineInternal::KillEmitter(self, v4);
        v3 = *((vox::DataObj::Self **)a2 + 15);
      }
      while ( v2 != v3 );
    }
    vox::AccessController::ReleaseWriteAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
    v5 = *((void (****)(uint32_t))a2 + 14);
    if ( v5 != nullptr )
    {
      (**v5)(*((uint32_t *)a2 + 14));
      VoxFreeInternal(v5);
    }
    v6 = *((void (****)(uint32_t))a2 + 13);
    if ( v6 != nullptr )
    {
      (**v6)(*((uint32_t *)a2 + 13));
      VoxFreeInternal(v6);
    }
    (**(void (***)(vox::DataObj::Self *))a2)(a2);
    VoxFreeInternal(a2);
  }
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Stop  (binary VA: 0x1029d80)
// Original: vox::VoxEngineInternal::Stop
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::VoxEngineInternal::Stop(vox::PriorityBankManager::Self **self, vox::EmitterObj::Self *a2, float a3)
{
  pthread_mutex_t *result;

  if ( a2 != nullptr )
  {
    if ( *((uint8_t *)a2 + 48) != 0 )
      vox::PriorityBankManager::RemoveEmitter(*(self + 53), *((uint32_t *)a2 + 11), a2);
    *((uint8_t *)a2 + 48) = 0;
    return vox::EmitterObj::Stop((pthread_mutex_t **)a2, a3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Stop  (binary VA: 0x1029df0)
// Original: vox::VoxEngineInternal::Stop
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::Stop(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2, float a3)
{
  vox::EmitterObj::Self *EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = (vox::EmitterObj::Self *)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  vox::VoxEngineInternal::Stop((vox::PriorityBankManager::Self **)self, EmitterObject, a3);
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Pause  (binary VA: 0x102a080)
// Original: vox::VoxEngineInternal::Pause
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::VoxEngineInternal::Pause(vox::VoxEngineInternal::Self *self, pthread_mutex_t **a2, float a3)
{
  pthread_mutex_t *result;

  result = (pthread_mutex_t *)a2;
  if ( a2 != nullptr )
    return vox::EmitterObj::Pause(a2, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Pause  (binary VA: 0x102a0b0)
// Original: vox::VoxEngineInternal::Pause
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::Pause(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2, float a3)
{
  pthread_mutex_t **EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  vox::VoxEngineInternal::Pause(self, EmitterObject, a3);
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Resume  (binary VA: 0x102a220)
// Original: vox::VoxEngineInternal::Resume
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::VoxEngineInternal::Resume(vox::VoxEngineInternal::Self *self, pthread_mutex_t **a2, float a3)
{
  pthread_mutex_t *result;

  result = (pthread_mutex_t *)a2;
  if ( a2 != nullptr )
    return vox::EmitterObj::Resume(a2, a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Resume  (binary VA: 0x102a250)
// Original: vox::VoxEngineInternal::Resume
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::Resume(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2, float a3)
{
  pthread_mutex_t **EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  vox::VoxEngineInternal::Resume(self, EmitterObject, a3);
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::RegisterForEmitterStateChangeNotification  (binary VA: 0x102a320)
// Original: vox::VoxEngineInternal::RegisterForEmitterStateChangeNotification
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::RegisterForEmitterStateChangeNotification(int a1, vox::EmitterHandle::Self *a2, int a3, int a4)
{
  int EmitterObject;

  vox::AccessController::GetReadAccess((vox::AccessController::Self *)(a1 + 188));
  EmitterObject = vox::VoxEngineInternal::GetEmitterObject((vox::VoxEngineInternal::Self *)a1, a2);
  if ( EmitterObject != 0 )
    vox::EmitterObj::RegisterStateChangedCallback(EmitterObject, a3, a4);
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::AccessController::Self *)(a1 + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::UnregisterForEmitterStateChangeNotification  (binary VA: 0x102a400)
// Original: vox::VoxEngineInternal::UnregisterForEmitterStateChangeNotification
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::UnregisterForEmitterStateChangeNotification(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2)
{
  pthread_mutex_t **EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  if ( EmitterObject != nullptr )
    vox::EmitterObj::UnregisterStateChangedCallback(EmitterObject);
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::SetAutoKillAfterDone  (binary VA: 0x102a5c0)
// Original: vox::VoxEngineInternal::SetAutoKillAfterDone
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::SetAutoKillAfterDone(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2, bool a3)
{
  pthread_mutex_t **EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  if ( EmitterObject != nullptr )
    vox::EmitterObj::SetAutoKillAfterDone(EmitterObject, a3);
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::ReleaseEmitter  (binary VA: 0x102a690)
// Original: vox::VoxEngineInternal::ReleaseEmitter
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::ReleaseEmitter(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2)
{
  pthread_mutex_t **EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  if ( EmitterObject != nullptr )
    vox::EmitterObj::NeedToDie(EmitterObject);
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::KillEmittersOnResume  (binary VA: 0x102a750)
// Original: vox::VoxEngineInternal::KillEmittersOnResume
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::KillEmittersOnResume(vox::PriorityBankManager::Self **self)
{
  int v1;
  int i;
  pthread_mutex_t **v3;
  int v4;
  int j;
  pthread_mutex_t **v6;
  uint32_t v8[8];

  vox::AccessController::GetReadAccess((vox::AccessController::Self *)(self + 47));
  vox::AccessController::GetReadAccess((vox::AccessController::Self *)(self + 50));
  vox::HandlableContainer::begin((vox::HandlableContainer::Self *)v8, (int)(uintptr_t)(self + 28));
  v1 = v8[0];
  vox::HandlableContainer::end((vox::HandlableContainer::Self *)v8, (int)(uintptr_t)(self + 28));
  for ( i = v8[0]; v1 != i; v1 = sub_1904890(v1) )
  {
    while ( 1 )
    {
      v3 = *(pthread_mutex_t ***)(v1 + 24);
      if ( (uint8_t)vox::EmitterObj::GetKillOnResume(v3) != 0 )
        break;
      v1 = sub_1904890(v1);
      if ( v1 == i )
        goto LABEL_6;
    }
    vox::VoxEngineInternal::Stop(self, (vox::EmitterObj::Self *)v3, 0.0);
  }
LABEL_6:
  vox::HandlableContainer::begin((vox::HandlableContainer::Self *)v8, (int)(uintptr_t)(self + 36));
  v4 = v8[0];
  vox::HandlableContainer::end((vox::HandlableContainer::Self *)v8, (int)(uintptr_t)(self + 36));
  for ( j = v8[0]; v4 != j; v4 = sub_1904890(v4) )
  {
    while ( 1 )
    {
      v6 = *(pthread_mutex_t ***)(v4 + 24);
      if ( (uint8_t)vox::EmitterObj::GetKillOnResume(v6) != 0 )
        break;
      v4 = sub_1904890(v4);
      if ( v4 == j )
        goto LABEL_11;
    }
    vox::VoxEngineInternal::Stop(self, (vox::EmitterObj::Self *)v6, 0.0);
  }
LABEL_11:
  vox::AccessController::ReleaseReadAccess((vox::AccessController::Self *)(self + 50));
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::AccessController::Self *)(self + 47)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Resume  (binary VA: 0x102a8c0)
// Original: vox::VoxEngineInternal::Resume
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::VoxEngineInternal::Resume(vox::VoxEngineInternal::Self *self)
{
  pthread_mutex_t *result;
  int v2;
  int v3;

  result = *((pthread_mutex_t **)self + 170);
  if ( result != nullptr )
  {
    vox::Mutex::Lock((pthread_mutex_t **)self + 55);
    v2 = *((uint32_t *)self + 190);
    if ( v2 <= 1 )
    {
      if ( v2 == 1 )
      {
        vox::VoxEngineInternal::KillEmittersOnResume((vox::PriorityBankManager::Self **)self);
        v3 = *((uint32_t *)self + 170);
        if ( v3 != 0 )
          (*(void (**)(uint32_t))(*(uint32_t *)v3 + 20))(*((uint32_t *)self + 170));
        *((uint32_t *)self + 190) = 0;
      }
    }
    else
    {
      *((uint32_t *)self + 190) = v2 - 1;
    }
    return vox::Mutex::Unlock((pthread_mutex_t **)self + 55);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::GetKillOnResume  (binary VA: 0x102a960)
// Original: vox::VoxEngineInternal::GetKillOnResume
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::GetKillOnResume(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2)
{
  int KillOnResume;
  pthread_mutex_t **EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  KillOnResume = 0;
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  if ( EmitterObject != nullptr )
    KillOnResume = vox::EmitterObj::GetKillOnResume(EmitterObject);
  vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  return KillOnResume;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::SetKillOnResume  (binary VA: 0x102aa30)
// Original: vox::VoxEngineInternal::SetKillOnResume
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::SetKillOnResume(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2, bool a3)
{
  pthread_mutex_t **EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  if ( EmitterObject != nullptr )
    vox::EmitterObj::SetKillOnResume(EmitterObject, a3);
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Resume  (binary VA: 0x102ab10)
// Original: vox::VoxEngineInternal::Resume
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::VoxEngineInternal::Resume(vox::VoxEngineInternal::Self *self, pthread_mutex_t **a2)
{
  pthread_mutex_t *result;
  float FadeOnPlay;

  if ( a2 != nullptr )
  {
    FadeOnPlay = vox::EmitterObj::GetFadeOnPlay(a2);
    return vox::VoxEngineInternal::Resume(self, a2, FadeOnPlay);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Resume  (binary VA: 0x102ab60)
// Original: vox::VoxEngineInternal::Resume
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::Resume(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2)
{
  pthread_mutex_t **EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  vox::VoxEngineInternal::Resume(self, EmitterObject);
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Pause  (binary VA: 0x102ac30)
// Original: vox::VoxEngineInternal::Pause
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::VoxEngineInternal::Pause(vox::VoxEngineInternal::Self *self, pthread_mutex_t **a2)
{
  pthread_mutex_t *result;
  float FadeOnStop;

  if ( a2 != nullptr )
  {
    FadeOnStop = vox::EmitterObj::GetFadeOnStop(a2);
    return vox::VoxEngineInternal::Pause(self, a2, FadeOnStop);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Pause  (binary VA: 0x102ac80)
// Original: vox::VoxEngineInternal::Pause
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::Pause(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2)
{
  pthread_mutex_t **EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  vox::VoxEngineInternal::Pause(self, EmitterObject);
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Stop  (binary VA: 0x102acf0)
// Original: vox::VoxEngineInternal::Stop
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::VoxEngineInternal::Stop(vox::PriorityBankManager::Self **self, pthread_mutex_t **a2)
{
  pthread_mutex_t *result;
  float FadeOnStop;

  if ( a2 != nullptr )
  {
    FadeOnStop = vox::EmitterObj::GetFadeOnStop(a2);
    return vox::VoxEngineInternal::Stop(self, (vox::EmitterObj::Self *)a2, FadeOnStop);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Stop  (binary VA: 0x102ad40)
// Original: vox::VoxEngineInternal::Stop
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::Stop(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2)
{
  pthread_mutex_t **EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  vox::VoxEngineInternal::Stop((vox::PriorityBankManager::Self **)self, EmitterObject);
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::GetGroup  (binary VA: 0x102ae10)
// Original: vox::VoxEngineInternal::GetGroup
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::GetGroup(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2)
{
  int Group;
  pthread_mutex_t **EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  Group = 0;
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  if ( EmitterObject != nullptr )
    Group = vox::EmitterObj::GetGroup(EmitterObject);
  vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  return Group;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::SetGroup  (binary VA: 0x102aed0)
// Original: vox::VoxEngineInternal::SetGroup
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::SetGroup(pthread_mutex_t **self, vox::EmitterHandle::Self *a2, pthread_mutex_t *a3)
{
  pthread_mutex_t *v3;
  pthread_mutex_t **EmitterObject;

  v3 = a3;
  if ( (uint8_t)vox::VoxEngineInternal::IsGroupValid(self, (unsigned int)(uintptr_t)(a3)) == 0 )
    v3 = nullptr;
  vox::AccessController::GetReadAccess((vox::AccessController::Self *)(self + 47));
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject((vox::VoxEngineInternal::Self *)self, a2);
  if ( EmitterObject != nullptr )
    vox::EmitterObj::SetGroup(EmitterObject, v3);
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::AccessController::Self *)(self + 47)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::IsMemberOfGroup  (binary VA: 0x102b000)
// Original: vox::VoxEngineInternal::IsMemberOfGroup
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::IsMemberOfGroup(long double a1, vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a3, unsigned int a4, bool a5)
{
  int IsMemberOfGroup;
  vox::EmitterObj::Self *EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  IsMemberOfGroup = 0;
  EmitterObject = (vox::EmitterObj::Self *)vox::VoxEngineInternal::GetEmitterObject(self, a3);
  if ( EmitterObject != nullptr )
    IsMemberOfGroup = vox::EmitterObj::IsMemberOfGroup(a1, EmitterObject, a4, a5);
  vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  return IsMemberOfGroup;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::ResumeGroup  (binary VA: 0x102b110)
// Original: vox::VoxEngineInternal::ResumeGroup
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::ResumeGroup(long double a1, vox::VoxEngineInternal::Self *self, unsigned int a3)
{
  unsigned int v3;
  int v4;
  int v5;
  vox::EmitterObj::Self *v6;
  int v7;
  int v8;
  vox::EmitterObj::Self *v9;
  typedef unsigned int _g4_t_v11;
  typedef uint32_t _g4_t_v12[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v11)) > _g4_s0 ? (0u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);

  v3 = a3;
  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 200));
  vox::HandlableContainer::begin((vox::HandlableContainer::Self *)v12, (int)(uintptr_t)(self) + 112);
  v4 = v12[0];
  vox::HandlableContainer::end((vox::HandlableContainer::Self *)v12, (int)(uintptr_t)(self) + 112);
  if ( v4 != v12[0] )
  {
    v5 = v12[0];
    do
    {
      while ( 1 )
      {
        v6 = *(vox::EmitterObj::Self **)(v4 + 24);
        if ( (uint8_t)vox::EmitterObj::IsChild(a1, v6, a3) != 0 )
          break;
        v4 = sub_1904890(v4);
        if ( v4 == v5 )
          goto LABEL_6;
      }
      vox::VoxEngineInternal::Resume(self, (pthread_mutex_t **)v6);
      v4 = sub_1904890(v4);
    }
    while ( v4 != v5 );
LABEL_6:
    v3 = a3;
  }
  vox::HandlableContainer::begin((vox::HandlableContainer::Self *)v12, (int)(uintptr_t)(self) + 144);
  v7 = v12[0];
  vox::HandlableContainer::end((vox::HandlableContainer::Self *)v12, (int)(uintptr_t)(self) + 144);
  if ( v7 != v12[0] )
  {
    v11 = v3;
    v8 = v12[0];
    do
    {
      while ( 1 )
      {
        v9 = *(vox::EmitterObj::Self **)(v7 + 24);
        if ( (uint8_t)vox::EmitterObj::IsChild(a1, v9, v11) != 0 )
          break;
        v7 = sub_1904890(v7);
        if ( v7 == v8 )
          goto LABEL_12;
      }
      vox::VoxEngineInternal::Resume(self, (pthread_mutex_t **)v9);
      v7 = sub_1904890(v7);
    }
    while ( v7 != v8 );
  }
LABEL_12:
  vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 200));
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::ResumeGroup  (binary VA: 0x102b290)
// Original: vox::VoxEngineInternal::ResumeGroup
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::ResumeGroup(long double a1, vox::VoxEngineInternal::Self *self, unsigned int a3, float a4)
{
  unsigned int v4;
  int v5;
  int v6;
  vox::EmitterObj::Self *v7;
  int v8;
  int v9;
  vox::EmitterObj::Self *v10;
  typedef unsigned int _g4_t_v12;
  typedef uint32_t _g4_t_v13[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v13)) > _g4_s1 ? (12u + sizeof(_g4_t_v13)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);

  v4 = a3;
  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 200));
  vox::HandlableContainer::begin((vox::HandlableContainer::Self *)v13, (int)(uintptr_t)(self) + 112);
  v5 = v13[0];
  vox::HandlableContainer::end((vox::HandlableContainer::Self *)v13, (int)(uintptr_t)(self) + 112);
  if ( v5 != v13[0] )
  {
    v6 = v13[0];
    do
    {
      while ( 1 )
      {
        v7 = *(vox::EmitterObj::Self **)(v5 + 24);
        if ( (uint8_t)vox::EmitterObj::IsChild(a1, v7, a3) != 0 )
          break;
        v5 = sub_1904890(v5);
        if ( v5 == v6 )
          goto LABEL_6;
      }
      vox::VoxEngineInternal::Resume(self, (pthread_mutex_t **)v7, a4);
      v5 = sub_1904890(v5);
    }
    while ( v5 != v6 );
LABEL_6:
    v4 = a3;
  }
  vox::HandlableContainer::begin((vox::HandlableContainer::Self *)v13, (int)(uintptr_t)(self) + 144);
  v8 = v13[0];
  vox::HandlableContainer::end((vox::HandlableContainer::Self *)v13, (int)(uintptr_t)(self) + 144);
  if ( v8 != v13[0] )
  {
    v12 = v4;
    v9 = v13[0];
    do
    {
      while ( 1 )
      {
        v10 = *(vox::EmitterObj::Self **)(v8 + 24);
        if ( (uint8_t)vox::EmitterObj::IsChild(a1, v10, v12) != 0 )
          break;
        v8 = sub_1904890(v8);
        if ( v8 == v9 )
          goto LABEL_12;
      }
      vox::VoxEngineInternal::Resume(self, (pthread_mutex_t **)v10, a4);
      v8 = sub_1904890(v8);
    }
    while ( v8 != v9 );
  }
LABEL_12:
  vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 200));
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::PauseGroup  (binary VA: 0x102b430)
// Original: vox::VoxEngineInternal::PauseGroup
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::PauseGroup(long double a1, vox::VoxEngineInternal::Self *self, unsigned int a3)
{
  unsigned int v3;
  int v4;
  int v5;
  vox::EmitterObj::Self *v6;
  int v7;
  int v8;
  vox::EmitterObj::Self *v9;
  typedef unsigned int _g4_t_v11;
  typedef uint32_t _g4_t_v12[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v11)) > _g4_s0 ? (0u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);

  v3 = a3;
  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 200));
  vox::HandlableContainer::begin((vox::HandlableContainer::Self *)v12, (int)(uintptr_t)(self) + 112);
  v4 = v12[0];
  vox::HandlableContainer::end((vox::HandlableContainer::Self *)v12, (int)(uintptr_t)(self) + 112);
  if ( v4 != v12[0] )
  {
    v5 = v12[0];
    do
    {
      while ( 1 )
      {
        v6 = *(vox::EmitterObj::Self **)(v4 + 24);
        if ( (uint8_t)vox::EmitterObj::IsChild(a1, v6, a3) != 0 )
          break;
        v4 = sub_1904890(v4);
        if ( v4 == v5 )
          goto LABEL_6;
      }
      vox::VoxEngineInternal::Pause(self, (pthread_mutex_t **)v6);
      v4 = sub_1904890(v4);
    }
    while ( v4 != v5 );
LABEL_6:
    v3 = a3;
  }
  vox::HandlableContainer::begin((vox::HandlableContainer::Self *)v12, (int)(uintptr_t)(self) + 144);
  v7 = v12[0];
  vox::HandlableContainer::end((vox::HandlableContainer::Self *)v12, (int)(uintptr_t)(self) + 144);
  if ( v7 != v12[0] )
  {
    v11 = v3;
    v8 = v12[0];
    do
    {
      while ( 1 )
      {
        v9 = *(vox::EmitterObj::Self **)(v7 + 24);
        if ( (uint8_t)vox::EmitterObj::IsChild(a1, v9, v11) != 0 )
          break;
        v7 = sub_1904890(v7);
        if ( v7 == v8 )
          goto LABEL_12;
      }
      vox::VoxEngineInternal::Pause(self, (pthread_mutex_t **)v9);
      v7 = sub_1904890(v7);
    }
    while ( v7 != v8 );
  }
LABEL_12:
  vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 200));
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::PauseGroup  (binary VA: 0x102b5b0)
// Original: vox::VoxEngineInternal::PauseGroup
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::PauseGroup(long double a1, vox::VoxEngineInternal::Self *self, unsigned int a3, float a4)
{
  unsigned int v4;
  int v5;
  int v6;
  vox::EmitterObj::Self *v7;
  int v8;
  int v9;
  vox::EmitterObj::Self *v10;
  typedef unsigned int _g4_t_v12;
  typedef uint32_t _g4_t_v13[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v13)) > _g4_s1 ? (12u + sizeof(_g4_t_v13)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);

  v4 = a3;
  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 200));
  vox::HandlableContainer::begin((vox::HandlableContainer::Self *)v13, (int)(uintptr_t)(self) + 112);
  v5 = v13[0];
  vox::HandlableContainer::end((vox::HandlableContainer::Self *)v13, (int)(uintptr_t)(self) + 112);
  if ( v5 != v13[0] )
  {
    v6 = v13[0];
    do
    {
      while ( 1 )
      {
        v7 = *(vox::EmitterObj::Self **)(v5 + 24);
        if ( (uint8_t)vox::EmitterObj::IsChild(a1, v7, a3) != 0 )
          break;
        v5 = sub_1904890(v5);
        if ( v5 == v6 )
          goto LABEL_6;
      }
      vox::VoxEngineInternal::Pause(self, (pthread_mutex_t **)v7, a4);
      v5 = sub_1904890(v5);
    }
    while ( v5 != v6 );
LABEL_6:
    v4 = a3;
  }
  vox::HandlableContainer::begin((vox::HandlableContainer::Self *)v13, (int)(uintptr_t)(self) + 144);
  v8 = v13[0];
  vox::HandlableContainer::end((vox::HandlableContainer::Self *)v13, (int)(uintptr_t)(self) + 144);
  if ( v8 != v13[0] )
  {
    v12 = v4;
    v9 = v13[0];
    do
    {
      while ( 1 )
      {
        v10 = *(vox::EmitterObj::Self **)(v8 + 24);
        if ( (uint8_t)vox::EmitterObj::IsChild(a1, v10, v12) != 0 )
          break;
        v8 = sub_1904890(v8);
        if ( v8 == v9 )
          goto LABEL_12;
      }
      vox::VoxEngineInternal::Pause(self, (pthread_mutex_t **)v10, a4);
      v8 = sub_1904890(v8);
    }
    while ( v8 != v9 );
  }
LABEL_12:
  vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 200));
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::StopGroup  (binary VA: 0x102b750)
// Original: vox::VoxEngineInternal::StopGroup
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::StopGroup(long double a1, vox::PriorityBankManager::Self **self, unsigned int a3)
{
  unsigned int v3;
  int v4;
  int v5;
  vox::EmitterObj::Self *v6;
  int v7;
  int v8;
  vox::EmitterObj::Self *v9;
  typedef unsigned int _g4_t_v11;
  typedef uint32_t _g4_t_v12[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v11)) > _g4_s0 ? (0u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);

  v3 = a3;
  vox::AccessController::GetReadAccess((vox::AccessController::Self *)(self + 47));
  vox::AccessController::GetReadAccess((vox::AccessController::Self *)(self + 50));
  vox::HandlableContainer::begin((vox::HandlableContainer::Self *)v12, (int)(uintptr_t)(self + 28));
  v4 = v12[0];
  vox::HandlableContainer::end((vox::HandlableContainer::Self *)v12, (int)(uintptr_t)(self + 28));
  if ( v4 != v12[0] )
  {
    v5 = v12[0];
    do
    {
      while ( 1 )
      {
        v6 = *(vox::EmitterObj::Self **)(v4 + 24);
        if ( (uint8_t)vox::EmitterObj::IsChild(a1, v6, a3) != 0 )
          break;
        v4 = sub_1904890(v4);
        if ( v4 == v5 )
          goto LABEL_6;
      }
      vox::VoxEngineInternal::Stop(self, (pthread_mutex_t **)v6);
      v4 = sub_1904890(v4);
    }
    while ( v4 != v5 );
LABEL_6:
    v3 = a3;
  }
  vox::HandlableContainer::begin((vox::HandlableContainer::Self *)v12, (int)(uintptr_t)(self + 36));
  v7 = v12[0];
  vox::HandlableContainer::end((vox::HandlableContainer::Self *)v12, (int)(uintptr_t)(self + 36));
  if ( v7 != v12[0] )
  {
    v11 = v3;
    v8 = v12[0];
    do
    {
      while ( 1 )
      {
        v9 = *(vox::EmitterObj::Self **)(v7 + 24);
        if ( (uint8_t)vox::EmitterObj::IsChild(a1, v9, v11) != 0 )
          break;
        v7 = sub_1904890(v7);
        if ( v7 == v8 )
          goto LABEL_12;
      }
      vox::VoxEngineInternal::Stop(self, (pthread_mutex_t **)v9);
      v7 = sub_1904890(v7);
    }
    while ( v7 != v8 );
  }
LABEL_12:
  vox::AccessController::ReleaseReadAccess((vox::AccessController::Self *)(self + 50));
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::AccessController::Self *)(self + 47)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::StopGroup  (binary VA: 0x102b8d0)
// Original: vox::VoxEngineInternal::StopGroup
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::StopGroup(long double a1, vox::PriorityBankManager::Self **self, unsigned int a3, float a4)
{
  unsigned int v4;
  int v5;
  int v6;
  vox::EmitterObj::Self *v7;
  int v8;
  int v9;
  vox::EmitterObj::Self *v10;
  typedef unsigned int _g4_t_v12;
  typedef uint32_t _g4_t_v13[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v13)) > _g4_s1 ? (12u + sizeof(_g4_t_v13)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);

  v4 = a3;
  vox::AccessController::GetReadAccess((vox::AccessController::Self *)(self + 47));
  vox::AccessController::GetReadAccess((vox::AccessController::Self *)(self + 50));
  vox::HandlableContainer::begin((vox::HandlableContainer::Self *)v13, (int)(uintptr_t)(self + 28));
  v5 = v13[0];
  vox::HandlableContainer::end((vox::HandlableContainer::Self *)v13, (int)(uintptr_t)(self + 28));
  if ( v5 != v13[0] )
  {
    v6 = v13[0];
    do
    {
      while ( 1 )
      {
        v7 = *(vox::EmitterObj::Self **)(v5 + 24);
        if ( (uint8_t)vox::EmitterObj::IsChild(a1, v7, a3) != 0 )
          break;
        v5 = sub_1904890(v5);
        if ( v5 == v6 )
          goto LABEL_6;
      }
      vox::VoxEngineInternal::Stop(self, v7, a4);
      v5 = sub_1904890(v5);
    }
    while ( v5 != v6 );
LABEL_6:
    v4 = a3;
  }
  vox::HandlableContainer::begin((vox::HandlableContainer::Self *)v13, (int)(uintptr_t)(self + 36));
  v8 = v13[0];
  vox::HandlableContainer::end((vox::HandlableContainer::Self *)v13, (int)(uintptr_t)(self + 36));
  if ( v8 != v13[0] )
  {
    v12 = v4;
    v9 = v13[0];
    do
    {
      while ( 1 )
      {
        v10 = *(vox::EmitterObj::Self **)(v8 + 24);
        if ( (uint8_t)vox::EmitterObj::IsChild(a1, v10, v12) != 0 )
          break;
        v8 = sub_1904890(v8);
        if ( v8 == v9 )
          goto LABEL_12;
      }
      vox::VoxEngineInternal::Stop(self, v10, a4);
      v8 = sub_1904890(v8);
    }
    while ( v8 != v9 );
  }
LABEL_12:
  vox::AccessController::ReleaseReadAccess((vox::AccessController::Self *)(self + 50));
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::AccessController::Self *)(self + 47)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::GetGain  (binary VA: 0x102bac0)
// Original: vox::VoxEngineInternal::GetGain
// ----------------------------------------------------------------------------
long double vox::VoxEngineInternal::GetGain(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2)
{
  pthread_mutex_t **EmitterObject;
  long double Gain; // fst7
  float v5;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  Gain = 0.0;
  if ( EmitterObject != nullptr )
    Gain = vox::EmitterObj::GetGain(EmitterObject);
  v5 = Gain;
  vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  return v5;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::GetUid  (binary VA: 0x102bb80)
// Original: vox::VoxEngineInternal::GetUid
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::GetUid(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2)
{
  pthread_mutex_t **EmitterObject;
  int Uid;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  if ( EmitterObject != nullptr )
    Uid = vox::EmitterObj::GetUid(EmitterObject);
  else
    Uid = -1;
  vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  return Uid;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::SetGain  (binary VA: 0x102bcd0)
// Original: vox::VoxEngineInternal::SetGain
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::SetGain(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2, float a3, float a4)
{
  pthread_mutex_t **EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  if ( EmitterObject != nullptr )
    vox::EmitterObj::SetGain(EmitterObject, a3, a4);
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::GetPitch  (binary VA: 0x102c020)
// Original: vox::VoxEngineInternal::GetPitch
// ----------------------------------------------------------------------------
long double vox::VoxEngineInternal::GetPitch(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2)
{
  pthread_mutex_t **EmitterObject;
  long double Pitch; // fst7
  float v5;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  Pitch = 0.0;
  if ( EmitterObject != nullptr )
    Pitch = vox::EmitterObj::GetPitch(EmitterObject);
  v5 = Pitch;
  vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  return v5;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::SetPitch  (binary VA: 0x102c1a0)
// Original: vox::VoxEngineInternal::SetPitch
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::SetPitch(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2, float a3, float a4)
{
  pthread_mutex_t **EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  if ( EmitterObject != nullptr )
    vox::EmitterObj::SetPitch(EmitterObject, a3, a4);
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::GetLoop  (binary VA: 0x102c310)
// Original: vox::VoxEngineInternal::GetLoop
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::GetLoop(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2)
{
  int Loop;
  pthread_mutex_t **EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  Loop = 0;
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  if ( EmitterObject != nullptr )
    Loop = vox::EmitterObj::GetLoop(EmitterObject);
  vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  return Loop;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::SetLoop  (binary VA: 0x102c3e0)
// Original: vox::VoxEngineInternal::SetLoop
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::SetLoop(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2, bool a3)
{
  pthread_mutex_t **EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  if ( EmitterObject != nullptr )
    vox::EmitterObj::SetLoop(EmitterObject, a3);
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::IsReady  (binary VA: 0x102c4c0)
// Original: vox::VoxEngineInternal::IsReady
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::IsReady(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2)
{
  int IsReady;
  vox::EmitterObj::Self *EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  IsReady = 0;
  EmitterObject = (vox::EmitterObj::Self *)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  if ( EmitterObject != nullptr )
    IsReady = vox::EmitterObj::IsReady(EmitterObject);
  vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  return IsReady;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Play  (binary VA: 0x102c5a0)
// Original: vox::VoxEngineInternal::Play
// ----------------------------------------------------------------------------
void vox::VoxEngineInternal::Play(vox::PriorityBankManager::Self **self, vox::EmitterObj::Self *a2, bool a3, float a4)
{
  vox::PriorityBankManager::Self *v4;

  if ( a2 != nullptr )
  {
    if ( *((uint8_t *)a2 + 48) != 0 )
    {
      vox::PriorityBankManager::RemoveEmitter(*(self + 53), *((uint32_t *)a2 + 11), a2);
      *((uint8_t *)a2 + 48) = 0;
    }
    v4 = *(self + 53);
    if ( v4 != nullptr )
    {
      if ( (uint8_t)vox::PriorityBankManager::AddEmitter(v4, *((uint32_t *)a2 + 11), a2) != 0 )
      {
        if ( (uint8_t)vox::EmitterObj::IsPlaying((pthread_mutex_t **)a2) != 0 )
          vox::EmitterObj::Reset((pthread_mutex_t **)a2);
        vox::EmitterObj::Play((pthread_mutex_t **)a2, a4);
        vox::EmitterObj::SetLoop((pthread_mutex_t **)a2, a3);
        *((uint8_t *)a2 + 48) = 1;
      }
      else
      {
        *((uint8_t *)a2 + 48) = 0;
        vox::EmitterObj::Stop((pthread_mutex_t **)a2, 0.0);
        vox::EmitterObj::ForceStateChanged(a2, true);
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Play  (binary VA: 0x102c6a0)
// Original: vox::VoxEngineInternal::Play
// ----------------------------------------------------------------------------
void vox::VoxEngineInternal::Play(vox::PriorityBankManager::Self **self, pthread_mutex_t **a2, bool a3)
{
  float FadeOnPlay;

  if ( a2 != nullptr )
  {
    FadeOnPlay = vox::EmitterObj::GetFadeOnPlay(a2);
    vox::VoxEngineInternal::Play(self, (vox::EmitterObj::Self *)a2, a3, FadeOnPlay);
  }
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::PlayGroup  (binary VA: 0x102c700)
// Original: vox::VoxEngineInternal::PlayGroup
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::PlayGroup(long double a1, vox::PriorityBankManager::Self **self, unsigned int a3)
{
  unsigned int v3;
  int v4;
  int v5;
  vox::EmitterObj::Self *v6;
  char Loop;
  int v8;
  int v9;
  vox::EmitterObj::Self *v10;
  char v11;
  typedef unsigned int _g4_t_v13;
  typedef uint32_t _g4_t_v14[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v14)) > _g4_s1 ? (12u + sizeof(_g4_t_v14)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);

  v3 = a3;
  vox::AccessController::GetReadAccess((vox::AccessController::Self *)(self + 47));
  vox::AccessController::GetReadAccess((vox::AccessController::Self *)(self + 50));
  vox::HandlableContainer::begin((vox::HandlableContainer::Self *)v14, (int)(uintptr_t)(self + 28));
  v4 = v14[0];
  vox::HandlableContainer::end((vox::HandlableContainer::Self *)v14, (int)(uintptr_t)(self + 28));
  if ( v4 != v14[0] )
  {
    v5 = v14[0];
    do
    {
      while ( 1 )
      {
        v6 = *(vox::EmitterObj::Self **)(v4 + 24);
        if ( (uint8_t)vox::EmitterObj::IsChild(a1, v6, a3) != 0 )
          break;
        v4 = sub_1904890(v4);
        if ( v4 == v5 )
          goto LABEL_6;
      }
      Loop = vox::EmitterObj::GetLoop((pthread_mutex_t **)v6);
      vox::VoxEngineInternal::Play(self, (pthread_mutex_t **)v6, Loop);
      v4 = sub_1904890(v4);
    }
    while ( v4 != v5 );
LABEL_6:
    v3 = a3;
  }
  vox::HandlableContainer::begin((vox::HandlableContainer::Self *)v14, (int)(uintptr_t)(self + 36));
  v8 = v14[0];
  vox::HandlableContainer::end((vox::HandlableContainer::Self *)v14, (int)(uintptr_t)(self + 36));
  if ( v8 != v14[0] )
  {
    v13 = v3;
    v9 = v14[0];
    do
    {
      while ( 1 )
      {
        v10 = *(vox::EmitterObj::Self **)(v8 + 24);
        if ( (uint8_t)vox::EmitterObj::IsChild(a1, v10, v13) != 0 )
          break;
        v8 = sub_1904890(v8);
        if ( v8 == v9 )
          goto LABEL_12;
      }
      v11 = vox::EmitterObj::GetLoop((pthread_mutex_t **)v10);
      vox::VoxEngineInternal::Play(self, (pthread_mutex_t **)v10, v11);
      v8 = sub_1904890(v8);
    }
    while ( v8 != v9 );
  }
LABEL_12:
  vox::AccessController::ReleaseReadAccess((vox::AccessController::Self *)(self + 50));
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::AccessController::Self *)(self + 47)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::PlayGroup  (binary VA: 0x102c8a0)
// Original: vox::VoxEngineInternal::PlayGroup
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::PlayGroup(long double a1, vox::PriorityBankManager::Self **self, unsigned int a3, float a4)
{
  unsigned int v4;
  int v5;
  int v6;
  vox::EmitterObj::Self *v7;
  char Loop;
  int v9;
  int v10;
  vox::EmitterObj::Self *v11;
  char v12;
  typedef unsigned int _g4_t_v14;
  typedef uint32_t _g4_t_v15[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v15)) > _g4_s1 ? (12u + sizeof(_g4_t_v15)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);

  v4 = a3;
  vox::AccessController::GetReadAccess((vox::AccessController::Self *)(self + 47));
  vox::AccessController::GetReadAccess((vox::AccessController::Self *)(self + 50));
  vox::HandlableContainer::begin((vox::HandlableContainer::Self *)v15, (int)(uintptr_t)(self + 28));
  v5 = v15[0];
  vox::HandlableContainer::end((vox::HandlableContainer::Self *)v15, (int)(uintptr_t)(self + 28));
  if ( v5 != v15[0] )
  {
    v6 = v15[0];
    do
    {
      while ( 1 )
      {
        v7 = *(vox::EmitterObj::Self **)(v5 + 24);
        if ( (uint8_t)vox::EmitterObj::IsChild(a1, v7, a3) != 0 )
          break;
        v5 = sub_1904890(v5);
        if ( v5 == v6 )
          goto LABEL_6;
      }
      Loop = vox::EmitterObj::GetLoop((pthread_mutex_t **)v7);
      vox::VoxEngineInternal::Play(self, v7, Loop, a4);
      v5 = sub_1904890(v5);
    }
    while ( v5 != v6 );
LABEL_6:
    v4 = a3;
  }
  vox::HandlableContainer::begin((vox::HandlableContainer::Self *)v15, (int)(uintptr_t)(self + 36));
  v9 = v15[0];
  vox::HandlableContainer::end((vox::HandlableContainer::Self *)v15, (int)(uintptr_t)(self + 36));
  if ( v9 != v15[0] )
  {
    v14 = v4;
    v10 = v15[0];
    do
    {
      while ( 1 )
      {
        v11 = *(vox::EmitterObj::Self **)(v9 + 24);
        if ( (uint8_t)vox::EmitterObj::IsChild(a1, v11, v14) != 0 )
          break;
        v9 = sub_1904890(v9);
        if ( v9 == v10 )
          goto LABEL_12;
      }
      v12 = vox::EmitterObj::GetLoop((pthread_mutex_t **)v11);
      vox::VoxEngineInternal::Play(self, v11, v12, a4);
      v9 = sub_1904890(v9);
    }
    while ( v9 != v10 );
  }
LABEL_12:
  vox::AccessController::ReleaseReadAccess((vox::AccessController::Self *)(self + 50));
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::AccessController::Self *)(self + 47)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::GetDebugInfo  (binary VA: 0x102ca50)
// Original: vox::VoxEngineInternal::GetDebugInfo
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::GetDebugInfo(uint32_t *a1, uint32_t *a2)
{
  int v2;
  int v3;
  uint32_t v5[8];

  vox::AccessController::GetReadAccess((vox::AccessController::Self *)(a1 + 19));
  *a2 = a1[5];
  vox::AccessController::ReleaseReadAccess((vox::AccessController::Self *)(a1 + 19));
  vox::AccessController::GetReadAccess((vox::AccessController::Self *)(a1 + 47));
  a2[1] = a1[33];
  vox::HandlableContainer::begin((vox::HandlableContainer::Self *)v5, (int)(uintptr_t)(a1 + 28));
  v2 = v5[0];
  vox::HandlableContainer::end((vox::HandlableContainer::Self *)v5, (int)(uintptr_t)(a1 + 28));
  v3 = v5[0];
  for ( a2[2] = 0; v2 != v3; v2 = sub_1904890(v2) )
  {
    if ( (uint8_t)vox::EmitterObj::IsPlaying(*(pthread_mutex_t ***)(v2 + 24)) != 0 )
      ++a2[2];
  }
  a2[3] = -1;
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::AccessController::Self *)(a1 + 47)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::IsPlaying  (binary VA: 0x102cb20)
// Original: vox::VoxEngineInternal::IsPlaying
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::IsPlaying(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2)
{
  int IsPlaying;
  pthread_mutex_t **EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  IsPlaying = 0;
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  if ( EmitterObject != nullptr )
    IsPlaying = vox::EmitterObj::IsPlaying(EmitterObject);
  vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  return IsPlaying;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::IsDone  (binary VA: 0x102cc30)
// Original: vox::VoxEngineInternal::IsDone
// ----------------------------------------------------------------------------
bool vox::VoxEngineInternal::IsDone(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2)
{
  bool IsDone;
  pthread_mutex_t **EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  IsDone = true;
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  if ( EmitterObject != nullptr )
    IsDone = vox::EmitterObj::IsDone(EmitterObject);
  vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  return IsDone;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::IsAlive  (binary VA: 0x102cd50)
// Original: vox::VoxEngineInternal::IsAlive
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::IsAlive(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2)
{
  int IsAlive;
  pthread_mutex_t **EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  IsAlive = 0;
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  if ( EmitterObject != nullptr )
    IsAlive = vox::EmitterObj::IsAlive(EmitterObject);
  vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  return IsAlive;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::GetStatus  (binary VA: 0x102ce60)
// Original: vox::VoxEngineInternal::GetStatus
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::GetStatus(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2)
{
  int Status;
  pthread_mutex_t **EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  Status = 0;
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  if ( EmitterObject != nullptr )
    Status = vox::EmitterObj::GetStatus(EmitterObject);
  vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  return Status;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::GetPauseCount  (binary VA: 0x102cf20)
// Original: vox::VoxEngineInternal::GetPauseCount
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::GetPauseCount(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2)
{
  pthread_mutex_t **EmitterObject;
  int PauseCount;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  if ( EmitterObject != nullptr )
    PauseCount = vox::EmitterObj::GetPauseCount(EmitterObject);
  else
    PauseCount = -1;
  vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  return PauseCount;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::GetPlayCursor  (binary VA: 0x102d040)
// Original: vox::VoxEngineInternal::GetPlayCursor
// ----------------------------------------------------------------------------
long double vox::VoxEngineInternal::GetPlayCursor(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2)
{
  pthread_mutex_t **EmitterObject;
  long double PlayCursor; // fst7
  float v5;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  PlayCursor = 0.0;
  if ( EmitterObject != nullptr )
    PlayCursor = vox::EmitterObj::GetPlayCursor(EmitterObject);
  v5 = PlayCursor;
  vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  return v5;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::GetTotalPlayTime  (binary VA: 0x102d150)
// Original: vox::VoxEngineInternal::GetTotalPlayTime
// ----------------------------------------------------------------------------
long double vox::VoxEngineInternal::GetTotalPlayTime(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2)
{
  pthread_mutex_t **EmitterObject;
  long double TotalPlayTime; // fst7
  float v5;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  TotalPlayTime = 0.0;
  if ( EmitterObject != nullptr )
    TotalPlayTime = vox::EmitterObj::GetTotalPlayTime(EmitterObject);
  v5 = TotalPlayTime;
  vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  return v5;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::SetPlayCursor  (binary VA: 0x102d2c0)
// Original: vox::VoxEngineInternal::SetPlayCursor
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::SetPlayCursor(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2, float a3)
{
  pthread_mutex_t **EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  if ( EmitterObject != nullptr )
    vox::EmitterObj::SetPlayCursor(EmitterObject, a3);
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::GetRandomStartPositionMode  (binary VA: 0x102d3c0)
// Original: vox::VoxEngineInternal::GetRandomStartPositionMode
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::GetRandomStartPositionMode(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2)
{
  int RandomStartPositionMode;
  pthread_mutex_t **EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  RandomStartPositionMode = 0;
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  if ( EmitterObject != nullptr )
    RandomStartPositionMode = vox::EmitterObj::GetRandomStartPositionMode(EmitterObject);
  vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  return RandomStartPositionMode;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::SetRandomStartPositionMode  (binary VA: 0x102d4c0)
// Original: vox::VoxEngineInternal::SetRandomStartPositionMode
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::SetRandomStartPositionMode(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2, bool a3)
{
  pthread_mutex_t **EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  if ( EmitterObject != nullptr )
    vox::EmitterObj::SetRandomStartPositionMode(EmitterObject, a3);
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::GetPlaybackDelay  (binary VA: 0x102d5d0)
// Original: vox::VoxEngineInternal::GetPlaybackDelay
// ----------------------------------------------------------------------------
long double vox::VoxEngineInternal::GetPlaybackDelay(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2)
{
  pthread_mutex_t **EmitterObject;
  long double PlaybackDelay; // fst7
  float v5;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  PlaybackDelay = 0.0;
  if ( EmitterObject != nullptr )
    PlaybackDelay = vox::EmitterObj::GetPlaybackDelay(EmitterObject);
  v5 = PlaybackDelay;
  vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  return v5;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::SetPlaybackDelay  (binary VA: 0x102d6d0)
// Original: vox::VoxEngineInternal::SetPlaybackDelay
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::SetPlaybackDelay(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2, float a3)
{
  pthread_mutex_t **EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  if ( EmitterObject != nullptr )
    vox::EmitterObj::SetPlaybackDelay(EmitterObject, a3);
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::SetUserData  (binary VA: 0x102db10)
// Original: vox::VoxEngineInternal::SetUserData
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::SetUserData(int a1, vox::EmitterHandle::Self *a2, int a3)
{
  int EmitterObject;

  vox::AccessController::GetReadAccess((vox::AccessController::Self *)(a1 + 188));
  EmitterObject = vox::VoxEngineInternal::GetEmitterObject((vox::VoxEngineInternal::Self *)a1, a2);
  if ( EmitterObject != 0 )
    vox::EmitterObj::SetUserData(EmitterObject, a3);
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::AccessController::Self *)(a1 + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::GetUserData  (binary VA: 0x102dbf0)
// Original: vox::VoxEngineInternal::GetUserData
// ----------------------------------------------------------------------------
vox::VoxEngineInternal::Self * vox::VoxEngineInternal::GetUserData(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2, vox::EmitterHandle::Self *a3)
{
  int EmitterObject;
  typedef int _g4_t_v5;
  typedef char _g4_t_v6;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  *(uint32_t *)self = -1;
  *((uint8_t *)self + 4) = 0;
  vox::AccessController::GetReadAccess((vox::EmitterHandle::Self *)((char *)a2 + 188));
  EmitterObject = vox::VoxEngineInternal::GetEmitterObject((vox::VoxEngineInternal::Self *)(a2), a3);
  if ( EmitterObject != 0 )
  {
    vox::EmitterObj::GetUserData((vox::EmitterObj::Self *)&v5, EmitterObject);
    *(uint32_t *)self = v5;
    *((uint8_t *)self + 4) = v6;
  }
  vox::AccessController::ReleaseReadAccess((vox::EmitterHandle::Self *)((char *)a2 + 188));
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Set3DEmitterParameteri  (binary VA: 0x102dcf0)
// Original: vox::VoxEngineInternal::Set3DEmitterParameteri
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::Set3DEmitterParameteri(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2, int a3, pthread_mutex_t *a4)
{
  pthread_mutex_t **EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  if ( EmitterObject != nullptr )
    vox::EmitterObj::Set3DParameteri(EmitterObject, a3, a4);
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Set3DEmitterParameterf  (binary VA: 0x102de70)
// Original: vox::VoxEngineInternal::Set3DEmitterParameterf
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::Set3DEmitterParameterf(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2, int a3, float a4)
{
  pthread_mutex_t **EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  if ( EmitterObject != nullptr )
    vox::EmitterObj::Set3DParameterf(EmitterObject, a3, a4);
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Set3DEmitterParameters  (binary VA: 0x102def0)
// Original: vox::VoxEngineInternal::Set3DEmitterParameters
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::Set3DEmitterParameters(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2, const vox::Vox3DEmitterParameters::Self *a3)
{
  pthread_mutex_t **EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  if ( EmitterObject != nullptr )
  {
    vox::EmitterObj::Set3DParameteri(EmitterObject, 0, *(pthread_mutex_t **)a3);
    vox::EmitterObj::Set3DParameterf(EmitterObject, 1, *((float *)a3 + 1));
    vox::EmitterObj::Set3DParameterf(EmitterObject, 2, *((float *)a3 + 2));
    vox::EmitterObj::Set3DParameterf(EmitterObject, 3, *((float *)a3 + 3));
    vox::EmitterObj::Set3DParameterf(EmitterObject, 4, *((float *)a3 + 4));
    vox::EmitterObj::Set3DParameterf(EmitterObject, 5, *((float *)a3 + 5));
    vox::EmitterObj::Set3DParameterf(EmitterObject, 6, *((float *)a3 + 6));
  }
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Set3DEmitterDirection  (binary VA: 0x102e110)
// Original: vox::VoxEngineInternal::Set3DEmitterDirection
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::Set3DEmitterDirection(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2, float a3, float a4, float a5)
{
  pthread_mutex_t **EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  if ( EmitterObject != nullptr )
    vox::EmitterObj::Set3DParameter3f(EmitterObject, 9, a3, a4, a5);
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Set3DEmitterVelocity  (binary VA: 0x102e1a0)
// Original: vox::VoxEngineInternal::Set3DEmitterVelocity
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::Set3DEmitterVelocity(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2, float a3, float a4, float a5)
{
  pthread_mutex_t **EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  if ( EmitterObject != nullptr )
    vox::EmitterObj::Set3DParameter3f(EmitterObject, 8, a3, a4, a5);
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Set3DEmitterPosition  (binary VA: 0x102e230)
// Original: vox::VoxEngineInternal::Set3DEmitterPosition
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::Set3DEmitterPosition(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2, float a3, float a4, float a5)
{
  pthread_mutex_t **EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  if ( EmitterObject != nullptr )
    vox::EmitterObj::Set3DParameter3f(EmitterObject, 7, a3, a4, a5);
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Get3DEmitterParameteri  (binary VA: 0x102f590)
// Original: vox::VoxEngineInternal::Get3DEmitterParameteri
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::Get3DEmitterParameteri(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2, int a3, int *a4)
{
  pthread_mutex_t **EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  if ( EmitterObject != nullptr )
    vox::EmitterObj::Get3DParameteri(EmitterObject, a3, a4);
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Get3DEmitterParameterf  (binary VA: 0x102f6e0)
// Original: vox::VoxEngineInternal::Get3DEmitterParameterf
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::Get3DEmitterParameterf(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2, int a3, float *a4)
{
  pthread_mutex_t **EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  if ( EmitterObject != nullptr )
    vox::EmitterObj::Get3DParameterf(EmitterObject, a3, a4);
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Get3DEmitterParameters  (binary VA: 0x102f760)
// Original: vox::VoxEngineInternal::Get3DEmitterParameters
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::Get3DEmitterParameters(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2, vox::Vox3DEmitterParameters::Self *a3)
{
  pthread_mutex_t **EmitterObject;
  pthread_mutex_t **v4;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  v4 = EmitterObject;
  if ( EmitterObject != nullptr )
  {
    vox::EmitterObj::Get3DParameteri(EmitterObject, 0, (int *)a3);
    vox::EmitterObj::Get3DParameterf(v4, 1, (float *)a3 + 1);
    vox::EmitterObj::Get3DParameterf(v4, 2, (float *)a3 + 2);
    vox::EmitterObj::Get3DParameterf(v4, 3, (float *)a3 + 3);
    vox::EmitterObj::Get3DParameterf(v4, 4, (float *)a3 + 4);
    vox::EmitterObj::Get3DParameterf(v4, 5, (float *)a3 + 5);
    vox::EmitterObj::Get3DParameterf(v4, 6, (float *)a3 + 6);
  }
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Get3DEmitterDirection  (binary VA: 0x102f950)
// Original: vox::VoxEngineInternal::Get3DEmitterDirection
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::Get3DEmitterDirection(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2, float *a3, float *a4, float *a5)
{
  pthread_mutex_t **EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  if ( EmitterObject != nullptr )
    vox::EmitterObj::Get3DParameter3f(EmitterObject, 9, a3, a4, a5);
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Get3DEmitterVelocity  (binary VA: 0x102f9e0)
// Original: vox::VoxEngineInternal::Get3DEmitterVelocity
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::Get3DEmitterVelocity(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2, float *a3, float *a4, float *a5)
{
  pthread_mutex_t **EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  if ( EmitterObject != nullptr )
    vox::EmitterObj::Get3DParameter3f(EmitterObject, 8, a3, a4, a5);
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Get3DEmitterPosition  (binary VA: 0x102fa70)
// Original: vox::VoxEngineInternal::Get3DEmitterPosition
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::Get3DEmitterPosition(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2, float *a3, float *a4, float *a5)
{
  pthread_mutex_t **EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  if ( EmitterObject != nullptr )
    vox::EmitterObj::Get3DParameter3f(EmitterObject, 7, a3, a4, a5);
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::SetDSPEmitterParameter  (binary VA: 0x102fcf0)
// Original: vox::VoxEngineInternal::SetDSPEmitterParameter
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::SetDSPEmitterParameter(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2, int a3, char *a4)
{
  vox::EmitterObj::Self *EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = (vox::EmitterObj::Self *)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  if ( EmitterObject != nullptr )
    vox::EmitterObj::SetDSPParameter(EmitterObject, a3, a4);
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::CreateEmitterAsync  (binary VA: 0x1030660)
// Original: vox::VoxEngineInternal::CreateEmitterAsync
// ----------------------------------------------------------------------------
vox::VoxEngineInternal::Self * vox::VoxEngineInternal::CreateEmitterAsync(vox::VoxEngineInternal::Self *self, vox::DataHandle::Self *a2, const vox::emitter::CreationSettings::Self *a3, vox::emitter::CreationSettings::Self *a4)
{
  int DataObject;
  vox::DataObj::Self *v5;
  uint64_t FreeEmitterObjectId; // rax
  unsigned int v7;
  unsigned int v8;
  pthread_mutex_t **v9;
  pthread_mutex_t **v10;
  pthread_mutex_t *v11;
  pthread_mutex_t **v12;
  pthread_mutex_t **v13;
  int v15;
  int v16;
  pthread_mutex_t *Group;
  int v18;
  typedef vox::DataObj::Self *_g4_t_v19;
  typedef vox::DataObj::Self *_g4_t_v20;
  typedef pthread_mutex_t **_g4_t_v21;
  typedef pthread_mutex_t **_g4_t_v22;
  typedef vox::EmitterObj::Self *_g4_t_v23;
  typedef pthread_mutex_t **_g4_t_v24;
  typedef pthread_mutex_t **_g4_t_v25;
  typedef pthread_mutex_t **_g4_t_v26;
  typedef char _g4_t_v27;
  typedef vox::DriverSourceInterface::Self *_g4_t_v28;
  typedef vox::AccessController::Self *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef uint8_t _g4_t_v34[44];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v19)) > _g4_s0 ? (12u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v20)) > _g4_s1 ? (12u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v21)) > _g4_s2 ? (12u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v22)) > _g4_s3 ? (12u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v23)) > _g4_s4 ? (16u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v24)) > _g4_s5 ? (16u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v25)) > _g4_s6 ? (16u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v26)) > _g4_s7 ? (16u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (23u + sizeof(_g4_t_v27)) > _g4_s8 ? (23u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v28)) > _g4_s9 ? (24u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v29)) > _g4_s10 ? (28u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v30)) > _g4_s11 ? (32u + sizeof(_g4_t_v30)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v31)) > _g4_s12 ? (36u + sizeof(_g4_t_v31)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v32)) > _g4_s13 ? (40u + sizeof(_g4_t_v32)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v33)) > _g4_s14 ? (44u + sizeof(_g4_t_v33)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v34)) > _g4_s15 ? (48u + sizeof(_g4_t_v34)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 23u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 36u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 40u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 44u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 48u);

  v29 = (vox::AccessController::Self *)((vox::DataHandle::Self *)((char *)a2 + 76));
  vox::AccessController::GetReadAccess((vox::DataHandle::Self *)((char *)a2 + 76));
  DataObject = vox::VoxEngineInternal::GetDataObject(a2, (int *)a3);
  if ( DataObject == 0 )
    goto LABEL_13;
  if ( *((uint32_t *)a2 + 170) == 0 )
  {
    v30 = *(uint32_t *)(DataObject + 36);
    v31 = *(uint32_t *)(DataObject + 40);
    v32 = *(uint32_t *)(DataObject + 44);
    v33 = *(uint32_t *)(DataObject + 48);
    goto LABEL_13;
  }
  v19 = (vox::DataObj::Self *)DataObject;
  if ( (uint8_t)vox::DataObj::IsReady((pthread_mutex_t **)DataObject) != 0 )
  {
    v15 = *((uint32_t *)a2 + 170);
    v30 = *((uint32_t *)v19 + 9);
    v31 = *((uint32_t *)v19 + 10);
    v32 = *((uint32_t *)v19 + 11);
    v33 = *((uint32_t *)v19 + 12);
    if ( v15 == 0 )
      goto LABEL_13;
    if ( v30 <= 0 )
      goto LABEL_13;
    v16 = G4_VCALL<int>(v15, 60);
    v28 = (vox::DriverSourceInterface::Self *)v16;
    if ( v16 == 0 )
      goto LABEL_13;
    G4_VCALL<void>(v16, 8, &v30, (int)(uintptr_t)(a4) + 160);
    v27 = 0;
    v5 = v19;
  }
  else
  {
    v28 = (vox::DriverSourceInterface::Self *)(*(int (**)(uint32_t))(**((uint32_t **)a2 + 170) + 60))(*((uint32_t *)a2 + 170));
    v5 = v19;
    if ( v28 == nullptr )
      goto LABEL_13;
    v27 = 1;
  }
  v20 = v5;
  FreeEmitterObjectId = vox::VoxEngineInternal::GetFreeEmitterObjectId((vox::VoxEngineInternal::Self *)(a2));
  v7 = HIDWORD(FreeEmitterObjectId);
  v8 = FreeEmitterObjectId;
  v23 = (vox::EmitterObj::Self *)VoxAllocInternal(
                             0x1ACu,
                             0,
                             (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_internal.cpp"),
                             (int)(uintptr_t)("CreateEmitterAsync"),
                             1697);
  vox::EmitterObj::Construct(v23, __SPAIR64__(v7, v8), a4, v28, v20);
  v9 = (pthread_mutex_t **)v23;
  v10 = (pthread_mutex_t **)v20;
  if ( v23 != nullptr )
  {
    if ( v27 != 0 )
    {
      vox::EmitterObj::SetMustInitDriverSource(v23);
      v10 = (pthread_mutex_t **)v20;
      v9 = (pthread_mutex_t **)v23;
      v11 = *((pthread_mutex_t **)a4 + 9);
      if ( v11 != (pthread_mutex_t *)-1 )
        goto LABEL_9;
    }
    else
    {
      v11 = *((pthread_mutex_t **)a4 + 9);
      if ( v11 != (pthread_mutex_t *)-1 )
      {
LABEL_9:
        v24 = v9;
        v21 = v10;
        vox::EmitterObj::SetGroup(v9, v11);
        v12 = v21;
        v13 = v24;
LABEL_10:
        v25 = v13;
        vox::DataObj::RegisterEmitter(v12, *(uint64_t *)(v13 + 1));
        vox::AccessController::ReleaseReadAccess(v29);
        v25[4] = *((pthread_mutex_t **)a2 + 187);
        vox::EmitterHandle::Construct(
          (vox::EmitterHandle::Self *)v34,
          *(uint64_t *)(v25 + 1),
          (vox::VoxEngineInternal::Self **)&vox::VoxEngineInternal::s_voxEngineInternal,
          (vox::Handlable::Self *)v25,
          *((uint32_t *)a2 + *((uint32_t *)a2 + 187) + 171),
          *((uint32_t *)a2 + 187));
        *((uint32_t *)a2 + 187) = ((uint8_t)*((uint32_t *)a2 + 187) + 1) & 0xF;
        vox::AccessController::GetWriteAccess((vox::DataHandle::Self *)((char *)a2 + 200));
        vox::HandlableContainer::Add((vox::DataHandle::Self *)((char *)a2 + 144), (vox::Handlable::Self *)v25);
        vox::AccessController::ReleaseWriteAccess((vox::DataHandle::Self *)((char *)a2 + 200));
        vox::EmitterHandle::Construct(self, (const vox::EmitterHandle::Self *)v34);
        vox::EmitterHandle::Destroy((vox::EmitterHandle::Self *)v34);
        return self;
      }
    }
    v22 = v10;
    v26 = v9;
    Group = (pthread_mutex_t *)vox::DataObj::GetGroup(v10);
    vox::EmitterObj::SetGroup(v26, Group);
    v13 = v26;
    v12 = v22;
    goto LABEL_10;
  }
  v18 = *((uint32_t *)a2 + 170);
  if ( v18 != 0 )
    G4_VCALL<void>(v18, 64, v28);
LABEL_13:
  vox::AccessController::ReleaseReadAccess(v29);
  vox::EmitterHandle::Construct(self, -1, nullptr, nullptr, 0, 0);
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::CreateEmitter  (binary VA: 0x1031750)
// Original: vox::VoxEngineInternal::CreateEmitter
// ----------------------------------------------------------------------------
vox::VoxEngineInternal::Self * vox::VoxEngineInternal::CreateEmitter(vox::VoxEngineInternal::Self *self, vox::DataHandle::Self *a2, const vox::emitter::CreationSettings::Self *a3, vox::emitter::CreationSettings::Self *a4)
{
  pthread_mutex_t **DataObject;
  int v5;
  int v6;
  vox::DecoderCursorInterface::Self *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint64_t FreeEmitterObjectId; // rax
  unsigned int v14;
  unsigned int v15;
  pthread_mutex_t *Group;
  typedef vox::EmitterObj::Self *_g4_t_v17;
  typedef vox::DataObj::Self *_g4_t_v18;
  typedef vox::AccessController::Self *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef vox::DriverSourceInterface::Self *_g4_t_v23;
  typedef g4_int128_t _g4_t_v24;
  typedef uint8_t _g4_t_v25[60];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v17)) > _g4_s0 ? (4u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v18)) > _g4_s1 ? (8u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v19)) > _g4_s2 ? (12u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v20)) > _g4_s3 ? (16u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v21)) > _g4_s4 ? (20u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v22)) > _g4_s5 ? (24u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v23)) > _g4_s6 ? (28u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v24)) > _g4_s7 ? (32u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v25)) > _g4_s8 ? (48u + sizeof(_g4_t_v25)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);

  v19 = (vox::AccessController::Self *)((vox::DataHandle::Self *)((char *)a2 + 76));
  vox::AccessController::GetReadAccess((vox::DataHandle::Self *)((char *)a2 + 76));
  DataObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetDataObject(a2, (int *)a3);
  v18 = (vox::DataObj::Self *)DataObject;
  if ( DataObject == nullptr )
    goto LABEL_16;
  if ( (uint8_t)vox::DataObj::IsReady(DataObject) == 0 )
    goto LABEL_16;
  v20 = *((uint32_t *)v18 + 13);
  if ( *((uint32_t *)v18 + 20) != 0 )
    goto LABEL_16;
  v21 = *((uint32_t *)v18 + 14);
  if ( v21 == 0 )
    goto LABEL_16;
  if ( v20 == 0 )
    goto LABEL_16;
  v5 = G4_VCALL<int>(v20, 20);
  v22 = v5;
  if ( v5 == 0 )
    goto LABEL_16;
  v6 = G4_VCALL<int>(v21, 16, v5);
  v7 = (vox::DecoderCursorInterface::Self *)v6;
  if ( v6 == 0 )
  {
    G4_VCALL<void>(v20, 24, v22);
    goto LABEL_16;
  }
  v24 = *(g4_int128_t *)(v6 + 4);
  if ( (int)v24 <= 0
    || (v8 = *((uint32_t *)a2 + 170)) == 0
    || (v9 = (*(int (**)(uint32_t))(*(uint32_t *)v8 + 60))(*((uint32_t *)a2 + 170)),
        v23 = (vox::DriverSourceInterface::Self *)v9,
        v9 == 0) )
  {
    G4_VCALL<void>(v20, 24, v22);
    G4_VCALL<void>(v21, 20, v7);
LABEL_16:
    vox::AccessController::ReleaseReadAccess(v19);
    vox::EmitterHandle::Construct(self, -1, nullptr, nullptr, 0, 0);
    return self;
  }
  G4_VCALL<void>(v9, 8, &v24, (int)(uintptr_t)(a4) + 160);
  if ( G4_VCALL<uint8_t>(v23, 76) != 0
    && G4_VCALL<uint8_t>(v7, 56) != 0 )
  {
    v10 = *((uint32_t *)v7 + 4) * *((uint32_t *)v7 + 3) / 8;
  }
  else
  {
    v10 = *((uint32_t *)v7 + 2) * (*((uint32_t *)v7 + 3) * *((uint32_t *)v7 + 1) / 8) / 4;
  }
  if ( v10 <= 0
    || (FreeEmitterObjectId = vox::VoxEngineInternal::GetFreeEmitterObjectId((vox::VoxEngineInternal::Self *)(a2)),
        v14 = HIDWORD(FreeEmitterObjectId),
        v15 = FreeEmitterObjectId,
        v17 = (vox::EmitterObj::Self *)VoxAllocInternal(
                                   0x1ACu,
                                   0,
                                   (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_internal.cpp"),
                                   (int)(uintptr_t)("CreateEmitter"),
                                   1515),
        vox::EmitterObj::Construct(v17, __SPAIR64__(v14, v15), a4, v23, v7, v18),
        v17 == nullptr) )
  {
    G4_VCALL<void>(v20, 24, v22);
    G4_VCALL<void>(v21, 20, v7);
    v11 = *((uint32_t *)a2 + 170);
    if ( v11 != 0 )
      G4_VCALL<void>(v11, 64, v23);
    goto LABEL_16;
  }
  Group = *((pthread_mutex_t **)a4 + 9);
  if ( Group == (pthread_mutex_t *)-1 )
    Group = (pthread_mutex_t *)vox::DataObj::GetGroup((pthread_mutex_t **)v18);
  vox::EmitterObj::SetGroup((pthread_mutex_t **)v17, Group);
  vox::DataObj::RegisterEmitter((pthread_mutex_t **)v18, *(uint64_t *)((char *)v17 + 4));
  vox::AccessController::ReleaseReadAccess(v19);
  *((uint32_t *)v17 + 4) = *((uint32_t *)a2 + 187);
  vox::EmitterHandle::Construct(
    (vox::EmitterHandle::Self *)v25,
    *(uint64_t *)((char *)v17 + 4),
    (vox::VoxEngineInternal::Self **)&vox::VoxEngineInternal::s_voxEngineInternal,
    v17,
    *((uint32_t *)a2 + *((uint32_t *)a2 + 187) + 171),
    *((uint32_t *)a2 + 187));
  *((uint32_t *)a2 + 187) = ((uint8_t)*((uint32_t *)a2 + 187) + 1) & 0xF;
  vox::AccessController::GetWriteAccess((vox::DataHandle::Self *)((char *)a2 + 200));
  vox::HandlableContainer::Add((vox::DataHandle::Self *)((char *)a2 + 144), v17);
  vox::AccessController::ReleaseWriteAccess((vox::DataHandle::Self *)((char *)a2 + 200));
  vox::EmitterHandle::Construct(self, (const vox::EmitterHandle::Self *)v25);
  vox::EmitterHandle::Destroy((vox::EmitterHandle::Self *)v25);
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::UpdateDebugStream  (binary VA: 0x1033740)
// Original: vox::VoxEngineInternal::UpdateDebugStream
// ----------------------------------------------------------------------------
void vox::VoxEngineInternal::UpdateDebugStream(vox::VoxDebugStreamManager::Self **self)
{
  vox::VoxDebugStreamManager::Self *v1;
  vox::VoxDebugStreamManager::Self *v2;
  int v3;
  unsigned int v4;
  bool v5;
  uint32_t *v6;
  unsigned int i;
  void *v8;
  int v9;
  void *v10;
  int v11;
  void **v12;
  int v13;
  void *v14;
  int v15;
  int v16;
  int v17;
  void **v18;
  int v19;
  void *v20;
  int v21;
  int v22;
  char *GroupName;
  void *v24;
  void *v25;
  void *v26;
  void *v27;
  void *v28;
  void *v29;
  uint8_t *v30;
  uint32_t *v31;
  size_t v32;
  uint32_t *v33;
  uint32_t *v34;
  uint32_t *v35;
  void *v36;
  vox::VoxDebugStreamManager::Self *v37;
  int v38;
  void *v39;
  void **v40;
  void **v41;
  void **v42;
  void **v43;
  uint32_t *v44;
  void **v45;
  int v46;
  void *v47;
  int v48;
  void *v49;
  void *v50;
  int v51;
  uint32_t *v52;
  size_t v53;
  uint32_t *v54;
  uint32_t *v55;
  int v56;
  typedef char *_g4_t_na;
  typedef size_t _g4_t_n;
  typedef size_t _g4_t_nb;
  typedef size_t _g4_t_nc;
  typedef int _g4_t_Group;
  typedef unsigned int _g4_t_v62;
  typedef unsigned int _g4_t_v63;
  typedef unsigned int _g4_t_v64;
  typedef uint32_t *_g4_t_v65;
  typedef uint32_t *_g4_t_StreamList;
  typedef int _g4_t_v67;
  typedef uint32_t *_g4_t_v68;
  typedef double _g4_t_v69 __attribute__((aligned(1)));
  typedef double _g4_t_v70 __attribute__((aligned(1)));
  typedef double _g4_t_v71 __attribute__((aligned(1)));
  typedef double _g4_t_v72 __attribute__((aligned(1)));
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef vox::VoxEngineInternal::Self *_g4_t_v76;
  typedef uint32_t _g4_t_v77[3];
  typedef uint32_t _g4_t_v78[4];
  typedef uint32_t _g4_t_v79[2];
  typedef uint32_t *_g4_t_v80;
  typedef uint32_t *_g4_t_v81;
  typedef int _g4_t_v82;
  typedef int (**_g4_t_v83)(int);
  typedef int _g4_t_v84;
  typedef int (**_g4_t_v85)(int);
  typedef uint32_t _g4_t_v86[3];
  typedef uint8_t *_g4_t_v87;
  typedef void *_g4_t_src;
  typedef uint8_t *_g4_t_v89;
  typedef int _g4_t_v90;
  typedef char _g4_t_v91[4];
  typedef int _g4_t_v92;
  typedef uint32_t *_g4_t_v93;
  typedef uint32_t _g4_t_v94[29];
  typedef char _g4_t_v95;
  typedef char _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef int _g4_t_v100;
  typedef void *_g4_t_v101[2];
  typedef void *_g4_t_v102[8];
  enum : size_t {
    _g4_s0 = 416u,
    _g4_s1 = (0u + sizeof(_g4_t_na)) > _g4_s0 ? (0u + sizeof(_g4_t_na)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_n)) > _g4_s1 ? (0u + sizeof(_g4_t_n)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_nb)) > _g4_s2 ? (0u + sizeof(_g4_t_nb)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_nc)) > _g4_s3 ? (0u + sizeof(_g4_t_nc)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_Group)) > _g4_s4 ? (4u + sizeof(_g4_t_Group)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v62)) > _g4_s5 ? (4u + sizeof(_g4_t_v62)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v63)) > _g4_s6 ? (4u + sizeof(_g4_t_v63)) : _g4_s6,
    _g4_s8 = (4u + sizeof(_g4_t_v64)) > _g4_s7 ? (4u + sizeof(_g4_t_v64)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v65)) > _g4_s8 ? (8u + sizeof(_g4_t_v65)) : _g4_s8,
    _g4_s10 = (12u + sizeof(_g4_t_StreamList)) > _g4_s9 ? (12u + sizeof(_g4_t_StreamList)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v67)) > _g4_s10 ? (20u + sizeof(_g4_t_v67)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v68)) > _g4_s11 ? (24u + sizeof(_g4_t_v68)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v69)) > _g4_s12 ? (28u + sizeof(_g4_t_v69)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v70)) > _g4_s13 ? (28u + sizeof(_g4_t_v70)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v71)) > _g4_s14 ? (36u + sizeof(_g4_t_v71)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v72)) > _g4_s15 ? (36u + sizeof(_g4_t_v72)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v73)) > _g4_s16 ? (44u + sizeof(_g4_t_v73)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v74)) > _g4_s17 ? (48u + sizeof(_g4_t_v74)) : _g4_s17,
    _g4_s19 = (48u + sizeof(_g4_t_v75)) > _g4_s18 ? (48u + sizeof(_g4_t_v75)) : _g4_s18,
    _g4_s20 = (52u + sizeof(_g4_t_v76)) > _g4_s19 ? (52u + sizeof(_g4_t_v76)) : _g4_s19,
    _g4_s21 = (64u + sizeof(_g4_t_v77)) > _g4_s20 ? (64u + sizeof(_g4_t_v77)) : _g4_s20,
    _g4_s22 = (84u + sizeof(_g4_t_v78)) > _g4_s21 ? (84u + sizeof(_g4_t_v78)) : _g4_s21,
    _g4_s23 = (100u + sizeof(_g4_t_v79)) > _g4_s22 ? (100u + sizeof(_g4_t_v79)) : _g4_s22,
    _g4_s24 = (108u + sizeof(_g4_t_v80)) > _g4_s23 ? (108u + sizeof(_g4_t_v80)) : _g4_s23,
    _g4_s25 = (112u + sizeof(_g4_t_v81)) > _g4_s24 ? (112u + sizeof(_g4_t_v81)) : _g4_s24,
    _g4_s26 = (116u + sizeof(_g4_t_v82)) > _g4_s25 ? (116u + sizeof(_g4_t_v82)) : _g4_s25,
    _g4_s27 = (120u + sizeof(_g4_t_v83)) > _g4_s26 ? (120u + sizeof(_g4_t_v83)) : _g4_s26,
    _g4_s28 = (124u + sizeof(_g4_t_v84)) > _g4_s27 ? (124u + sizeof(_g4_t_v84)) : _g4_s27,
    _g4_s29 = (128u + sizeof(_g4_t_v85)) > _g4_s28 ? (128u + sizeof(_g4_t_v85)) : _g4_s28,
    _g4_s30 = (132u + sizeof(_g4_t_v86)) > _g4_s29 ? (132u + sizeof(_g4_t_v86)) : _g4_s29,
    _g4_s31 = (144u + sizeof(_g4_t_v87)) > _g4_s30 ? (144u + sizeof(_g4_t_v87)) : _g4_s30,
    _g4_s32 = (148u + sizeof(_g4_t_src)) > _g4_s31 ? (148u + sizeof(_g4_t_src)) : _g4_s31,
    _g4_s33 = (152u + sizeof(_g4_t_v89)) > _g4_s32 ? (152u + sizeof(_g4_t_v89)) : _g4_s32,
    _g4_s34 = (156u + sizeof(_g4_t_v90)) > _g4_s33 ? (156u + sizeof(_g4_t_v90)) : _g4_s33,
    _g4_s35 = (160u + sizeof(_g4_t_v91)) > _g4_s34 ? (160u + sizeof(_g4_t_v91)) : _g4_s34,
    _g4_s36 = (164u + sizeof(_g4_t_v92)) > _g4_s35 ? (164u + sizeof(_g4_t_v92)) : _g4_s35,
    _g4_s37 = (168u + sizeof(_g4_t_v93)) > _g4_s36 ? (168u + sizeof(_g4_t_v93)) : _g4_s36,
    _g4_s38 = (172u + sizeof(_g4_t_v94)) > _g4_s37 ? (172u + sizeof(_g4_t_v94)) : _g4_s37,
    _g4_s39 = (288u + sizeof(_g4_t_v95)) > _g4_s38 ? (288u + sizeof(_g4_t_v95)) : _g4_s38,
    _g4_s40 = (289u + sizeof(_g4_t_v96)) > _g4_s39 ? (289u + sizeof(_g4_t_v96)) : _g4_s39,
    _g4_s41 = (292u + sizeof(_g4_t_v97)) > _g4_s40 ? (292u + sizeof(_g4_t_v97)) : _g4_s40,
    _g4_s42 = (296u + sizeof(_g4_t_v98)) > _g4_s41 ? (296u + sizeof(_g4_t_v98)) : _g4_s41,
    _g4_s43 = (300u + sizeof(_g4_t_v99)) > _g4_s42 ? (300u + sizeof(_g4_t_v99)) : _g4_s42,
    _g4_s44 = (304u + sizeof(_g4_t_v100)) > _g4_s43 ? (304u + sizeof(_g4_t_v100)) : _g4_s43,
    _g4_s45 = (308u + sizeof(_g4_t_v101)) > _g4_s44 ? (308u + sizeof(_g4_t_v101)) : _g4_s44,
    _g4_s46 = (316u + sizeof(_g4_t_v102)) > _g4_s45 ? (316u + sizeof(_g4_t_v102)) : _g4_s45
  };
  alignas(16) uint8_t _g4_sf[_g4_s46];
  _g4_t_na &na = *reinterpret_cast<_g4_t_na *>(_g4_sf + 0u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 0u);
  _g4_t_nb &nb = *reinterpret_cast<_g4_t_nb *>(_g4_sf + 0u);
  _g4_t_nc &nc = *reinterpret_cast<_g4_t_nc *>(_g4_sf + 0u);
  _g4_t_Group &Group = *reinterpret_cast<_g4_t_Group *>(_g4_sf + 4u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 4u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 4u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 4u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 8u);
  _g4_t_StreamList &StreamList = *reinterpret_cast<_g4_t_StreamList *>(_g4_sf + 12u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 20u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 24u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 28u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 28u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 36u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 36u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 44u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 48u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 48u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 52u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 64u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 84u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 100u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 108u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 112u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 116u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 120u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 124u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 128u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 132u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 144u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 148u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 152u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 156u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 160u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 164u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 168u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 172u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 288u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 289u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 292u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 296u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 300u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 304u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 308u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 316u);

  v102[4] = &self;
  v76 = (vox::VoxEngineInternal::Self *)self;
  v1 = *(self + 191);
  if ( v1 != nullptr )
  {
    vox::VoxDebugStreamManager::Lock(*(self + 191));
    vox::VoxDebugStreamManager::PrepareStreamList(*((vox::VoxDebugStreamManager::Self **)v76 + 191));
    vox::VoxDebugStreamManager::Unlock(v1);
    StreamList = (uint32_t *)vox::VoxDebugStreamManager::GetStreamList(*((vox::VoxDebugStreamManager::Self **)v76 + 191));
    v68 = (uint32_t *)*StreamList;
    if ( (uint32_t *)*StreamList != StreamList )
    {
      do
      {
        v2 = *((vox::VoxDebugStreamManager::Self **)v76 + 191);
        v3 = v68[2];
        if ( v2 != nullptr )
        {
          vox::VoxDebugStreamManager::Lock(v2);
          vox::VoxDebugStream::ProcessCommand((vox::VoxDebugStream::Self *)v3);
          vox::VoxDebugStreamManager::Unlock(v2);
        }
        else
        {
          vox::VoxDebugStream::ProcessCommand((vox::VoxDebugStream::Self *)v68[2]);
        }
        v4 = *(uint32_t *)(v3 + 44) + 1;
        v5 = *(uint8_t *)(v3 + 52) == 0;
        *(uint32_t *)(v3 + 44) = v4;
        if ( v5 || *(uint32_t *)(v3 + 36) == 0 )
          goto LABEL_99;
        v6 = *(uint32_t **)(v3 + 8);
        v65 = (uint32_t *)(v3 + 8);
        for ( i = 0; v65 != v6; ++i )
          v6 = (uint32_t *)*v6;
        if ( *(uint32_t *)(v3 + 48) <= i || v4 < *(uint32_t *)(v3 + 40) )
          goto LABEL_99;
        *(uint32_t *)(v3 + 44) = 0;
        v82 = 6;
        sub_1900810(v94);
        v94[28] = 0;
        v95 = 0;
        v96 = 0;
        v97 = 0;
        v98 = 0;
        v99 = 0;
        v94[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
        v100 = 0;
        v83 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
        *(int (***)(int))((char *)&v83 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
        v84 = 0;
        sub_19119D0((char *)&v83 + (uint32_t)(uintptr_t)(*(v83 - 3)), 0);
        v85 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
        *(uint32_t *)((char *)&v86[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
        sub_19119D0((char *)&v86[-1] + (uint32_t)(uintptr_t)(*(v85 - 3)), 0);
        v83 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
        *(int (***)(int))((char *)&v83 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
        v86[1] = 0;
        v86[2] = 0;
        v87 = nullptr;
        src = nullptr;
        v89 = nullptr;
        v90 = 0;
        v83 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
        v94[0] = (uint32_t)(uintptr_t)(&off_20AB014);
        v85 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
        v86[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
        sub_1903A70(v91);
        v92 = 24;
        v86[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
        v93 = &dword_213B814;
        sub_19119D0(v94, v86);
        v101[0] = v101;
        v101[1] = v101;
        v102[0] = v102;
        v102[1] = v102;
        v74 = v82;
        *(uint32_t *)((char *)v86 + (uint32_t)(uintptr_t)(*(v85 - 3))) = v82;
        if ( v102[0] != v102 && *((uint8_t *)v102[0] + 8) != 0 )
        {
          if ( v101[0] == v101 )
            goto LABEL_21;
          if ( *((uint8_t *)v101[0] + 8) != 0 )
            *((uint8_t *)v101[0] + 8) = 0;
          else
            g4_std_compat::ostream_write(&v85, ",", 1);
        }
        v8 = v101[0];
        v9 = opNew(0xCu);
        if ( v9 != -8 )
          *(uint8_t *)(v9 + 8) = 1;
        sub_1901920(v9, v8);
        v10 = v102[0];
        v11 = opNew(0xCu);
        if ( v11 != -8 )
          *(uint8_t *)(v11 + 8) = 0;
        sub_1901920(v11, v10);
        g4_std_compat::ostream_write(&v85, "{", 1);
        v74 = v82;
LABEL_21:
        v82 = 12;
        v71 = *(double *)((char *)v76 + 780);
        v69 = *(double *)((char *)v76 + 772);
        *(uint32_t *)((char *)v86 + (uint32_t)(uintptr_t)(*(v85 - 3))) = 12;
        if ( v101[0] != v101 )
        {
          if ( *((uint8_t *)v101[0] + 8) != 0 )
            *((uint8_t *)v101[0] + 8) = 0;
          else
            g4_std_compat::ostream_write(&v85, ",", 1);
          g4_std_compat::ostream_write(&v85, "\"", 1);
          g4_std_compat::ostream_write(&v85, "update_begin_timestamp", 22);
          g4_std_compat::ostream_write(&v85, "\":", 2);
          g4_std::ostream::op_shl_double(&v85, COERCE__INT64(v71 - v69));
          v72 = *(double *)((char *)v76 + 788);
          v70 = *(double *)((char *)v76 + 772);
          if ( v101[0] != v101 )
          {
            if ( *((uint8_t *)v101[0] + 8) != 0 )
              *((uint8_t *)v101[0] + 8) = 0;
            else
              g4_std_compat::ostream_write(&v85, ",", 1);
            g4_std_compat::ostream_write(&v85, "\"", 1);
            g4_std_compat::ostream_write(&v85, "update_end_timestamp", 20);
            g4_std_compat::ostream_write(&v85, "\":", 2);
            g4_std::ostream::op_shl_double(&v85, COERCE__INT64(v72 - v70));
          }
        }
        v82 = v74;
        *(uint32_t *)((char *)v86 + (uint32_t)(uintptr_t)(*(v85 - 3))) = v74;
        if ( v101[0] == v101 )
        {
          v12 = v101;
        }
        else
        {
          if ( *((uint8_t *)v101[0] + 8) != 0 )
            *((uint8_t *)v101[0] + 8) = 0;
          else
            g4_std_compat::ostream_write(&v85, ",", 1);
          g4_std_compat::ostream_write(&v85, "\"", 1);
          g4_std_compat::ostream_write(&v85, "components", 10);
          g4_std_compat::ostream_write(&v85, "\":", 2);
          v12 = (void **)v101[0];
        }
        if ( v102[0] != v102 && *((uint8_t *)v102[0] + 8) != 0 )
        {
          if ( v12 == v101 )
            goto LABEL_43;
          if ( *((uint8_t *)v12 + 8) != 0 )
            *((uint8_t *)v12 + 8) = 0;
          else
            g4_std_compat::ostream_write(&v85, ",", 1);
          v12 = (void **)v101[0];
        }
        v13 = opNew(0xCu);
        if ( v13 != -8 )
          *(uint8_t *)(v13 + 8) = 1;
        sub_1901920(v13, v12);
        v14 = v102[0];
        v15 = opNew(0xCu);
        if ( v15 != -8 )
          *(uint8_t *)(v15 + 8) = 0;
        sub_1901920(v15, v14);
        g4_std_compat::ostream_write(&v85, "{", 1);
LABEL_43:
        v75 = *(uint32_t *)(v3 + 28);
        v67 = v3 + 20;
        if ( v75 != v3 + 20 )
        {
          while ( 1 )
          {
            v16 = v75 + 16;
            if ( g4_std::string::compare(v75 + 16, "emitters") == 0 )
              break;
            if ( g4_std::string::compare(v16, "driver") != 0 )
            {
              if ( g4_std::string::compare(v16, "groups") != 0 )
              {
                if ( g4_std::string::compare(v16, "priority_banks") == 0 )
                {
                  v56 = *((uint32_t *)v76 + 53);
                  if ( v56 != 0 )
                  {
                    if ( v101[0] != v101 )
                    {
                      if ( *((uint8_t *)v101[0] + 8) != 0 )
                        *((uint8_t *)v101[0] + 8) = 0;
                      else
                        g4_std_compat::ostream_write(&v85, ",", 1);
                      g4_std_compat::ostream_write(&v85, "\"", 1);
                      g4_std_compat::ostream_write(&v85, "priority_banks", 14);
                      g4_std_compat::ostream_write(&v85, "\":", 2);
                      v56 = *((uint32_t *)v76 + 53);
                    }
                    vox::PriorityBankManager::Serialize(v56, &v82, *(uint32_t *)(v75 + 20), *(uint32_t *)(v75 + 24));
                  }
                }
              }
              else
              {
                v51 = *((uint32_t *)v76 + 54);
                if ( v51 != 0 )
                {
                  if ( v101[0] != v101 )
                  {
                    if ( *((uint8_t *)v101[0] + 8) != 0 )
                      *((uint8_t *)v101[0] + 8) = 0;
                    else
                      g4_std_compat::ostream_write(&v85, ",", 1);
                    g4_std_compat::ostream_write(&v85, "\"", 1);
                    g4_std_compat::ostream_write(&v85, "groups", 6);
                    g4_std_compat::ostream_write(&v85, "\":", 2);
                    v51 = *((uint32_t *)v76 + 54);
                  }
                  vox::GroupManager::Serialize(v51, &v82, *(uint32_t *)(v75 + 20), *(uint32_t *)(v75 + 24));
                }
              }
              goto LABEL_66;
            }
            if ( *((uint32_t *)v76 + 170) != 0 )
            {
              if ( v101[0] == v101 )
              {
                v45 = v101;
              }
              else
              {
                if ( *((uint8_t *)v101[0] + 8) != 0 )
                  *((uint8_t *)v101[0] + 8) = 0;
                else
                  g4_std_compat::ostream_write(&v85, ",", 1);
                g4_std_compat::ostream_write(&v85, "\"", 1);
                g4_std_compat::ostream_write(&v85, "driver", 6);
                g4_std_compat::ostream_write(&v85, "\":", 2);
                v45 = (void **)v101[0];
              }
              if ( v102[0] == v102 || *((uint8_t *)v102[0] + 8) == 0 )
              {
LABEL_113:
                v46 = opNew(0xCu);
                if ( v46 != -8 )
                  *(uint8_t *)(v46 + 8) = 1;
                sub_1901920(v46, v45);
                v47 = v102[0];
                v48 = opNew(0xCu);
                if ( v48 != -8 )
                  *(uint8_t *)(v48 + 8) = 1;
                sub_1901920(v48, v47);
                g4_std_compat::ostream_write(&v85, "[", 1);
              }
              else if ( v45 != v101 )
              {
                if ( *((uint8_t *)v45 + 8) != 0 )
                  *((uint8_t *)v45 + 8) = 0;
                else
                  g4_std_compat::ostream_write(&v85, ",", 1);
                v45 = (void **)v101[0];
                goto LABEL_113;
              }
              (*(void (**)(uint32_t, int *, uint32_t, uint32_t))(**((uint32_t **)v76 + 170) + 76))(
                *((uint32_t *)v76 + 170),
                &v82,
                *(uint32_t *)(v75 + 20),
                *(uint32_t *)(v75 + 24));
              v49 = v101[0];
              if ( v101[0] != v101 && v102[0] != v102 )
              {
                sub_1901940(v101[0]);
                opDelete(v49);
                v50 = v102[0];
                sub_1901940(v102[0]);
                opDelete(v50);
                g4_std_compat::ostream_write(&v85, "]", 1);
              }
            }
LABEL_66:
            v75 = sub_1904890(v75);
            if ( v67 == v75 )
              goto LABEL_67;
          }
          vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)v76 + 188));
          vox::HandlableContainer::begin((vox::HandlableContainer::Self *)v77, (int)(uintptr_t)(v76) + 112);
          v17 = v77[0];
          vox::HandlableContainer::end((vox::HandlableContainer::Self *)v77, (int)(uintptr_t)(v76) + 112);
          v73 = v77[0];
          if ( v101[0] == v101 )
          {
            v18 = v101;
          }
          else
          {
            if ( *((uint8_t *)v101[0] + 8) != 0 )
              *((uint8_t *)v101[0] + 8) = 0;
            else
              g4_std_compat::ostream_write(&v85, ",", 1);
            g4_std_compat::ostream_write(&v85, "\"", 1);
            g4_std_compat::ostream_write(&v85, "emitters", 8);
            g4_std_compat::ostream_write(&v85, "\":", 2);
            v18 = (void **)v101[0];
          }
          if ( v102[0] == v102 || *((uint8_t *)v102[0] + 8) == 0 )
          {
LABEL_55:
            v19 = opNew(0xCu);
            if ( v19 != -8 )
              *(uint8_t *)(v19 + 8) = 1;
            sub_1901920(v19, v18);
            v20 = v102[0];
            v21 = opNew(0xCu);
            if ( v21 != -8 )
              *(uint8_t *)(v21 + 8) = 1;
            sub_1901920(v21, v20);
            g4_std_compat::ostream_write(&v85, "[", 1);
          }
          else if ( v18 != v101 )
          {
            if ( *((uint8_t *)v18 + 8) != 0 )
              *((uint8_t *)v18 + 8) = 0;
            else
              g4_std_compat::ostream_write(&v85, ",", 1);
            v18 = (void **)v101[0];
            goto LABEL_55;
          }
          while ( v73 != v17 )
          {
            v22 = *(uint32_t *)(v17 + 24);
            Group = vox::EmitterObj::GetGroup((pthread_mutex_t **)v22);
            na = (char *)vox::PriorityBankManager::GetBankName(
                           *((vox::PriorityBankManager::Self **)v76 + 53),
                           *(uint32_t *)(v22 + 44));
            GroupName = (char *)vox::GroupManager::GetGroupName(*((vox::GroupManager::Self **)v76 + 54), Group);
            vox::EmitterObj::Serialize(
              (vox::EmitterObj::Self *)v22,
              &v82,
              *(uint32_t *)(v75 + 20),
              *(uint32_t *)(v75 + 24),
              GroupName,
              na);
            v17 = sub_1904890(v17);
          }
          v24 = v101[0];
          if ( v101[0] != v101 && v102[0] != v102 )
          {
            sub_1901940(v101[0]);
            opDelete(v24);
            v25 = v102[0];
            sub_1901940(v102[0]);
            opDelete(v25);
            g4_std_compat::ostream_write(&v85, "]", 1);
          }
          vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)v76 + 188));
          goto LABEL_66;
        }
LABEL_67:
        v26 = v101[0];
        if ( v101[0] != v101 && v102[0] != v102 )
        {
          sub_1901940(v101[0]);
          opDelete(v26);
          v27 = v102[0];
          sub_1901940(v102[0]);
          opDelete(v27);
          g4_std_compat::ostream_write(&v85, "}", 1);
          v28 = v101[0];
          if ( v101[0] != v101 && v102[0] != v102 )
          {
            sub_1901940(v101[0]);
            opDelete(v28);
            v29 = v102[0];
            sub_1901940(v102[0]);
            opDelete(v29);
            g4_std_compat::ostream_write(&v85, "}", 1);
          }
        }
        v78[0] = (uint32_t)(uintptr_t)(&dword_213B814);
        v79[0] = (uint32_t)(uintptr_t)(&dword_213B814);
        if ( v89 != nullptr )
        {
          v30 = (uint8_t *)(src);
          if ( v89 > v87 )
          {
            if ( v89 == src )
            {
              v34 = &dword_213B814;
            }
            else
            {
              if ( src == nullptr )
                goto LABEL_160;
              n = v89 - (uint8_t *)src;
              v31 = (uint32_t *)sub_1938930(v89 - (uint8_t *)src, 0);
              v32 = n;
              v33 = v31;
              v34 = v31 + 3;
              if ( n == 1 )
              {
                *((uint8_t *)v31 + 12) = *v30;
              }
              else
              {
                v62 = (unsigned int)(uintptr_t)(v31);
                memcpy(v31 + 3, v30, n);
                v32 = n;
                v33 = (uint32_t *)v62;
              }
              if ( v33 != dword_213B808 )
              {
                v33[2] = 0;
                *v33 = v32;
                *((uint8_t *)v33 + v32 + 12) = 0;
              }
            }
            v81 = v34;
            g4_std::string::assign_str(v79, &v81);
            v35 = v81 - 3;
            if ( v81 - 3 == dword_213B808 || __sync_fetch_and_add(v81 - 1, 0xFFFFFFFF) > 0 )
              goto LABEL_81;
LABEL_141:
            g4_std::string::Rep::M_destroy(v35);
            goto LABEL_81;
          }
          if ( v87 == src )
          {
            v55 = &dword_213B814;
          }
          else
          {
            if ( src != nullptr )
            {
              nb = v87 - (uint8_t *)src;
              v52 = (uint32_t *)sub_1938930(v87 - (uint8_t *)src, 0);
              v53 = nb;
              v54 = v52;
              v55 = v52 + 3;
              if ( nb != 1 )
                goto LABEL_136;
              *((uint8_t *)v52 + 12) = *v30;
            }
            else
            {
              if ( v87 != nullptr )
LABEL_160:
                sub_18FFFD0("basic_string::_S_construct null not valid");
              v54 = (uint32_t *)sub_1938930(0, 0);
              v55 = v54 + 3;
              v53 = 0;
LABEL_136:
              v64 = (unsigned int)(uintptr_t)(v54);
              nc = v53;
              memcpy(v55, v30, v53);
              v53 = nc;
              v54 = (uint32_t *)v64;
            }
            if ( v54 != dword_213B808 )
            {
              v54[2] = 0;
              *v54 = v53;
              *((uint8_t *)v55 + v53) = 0;
            }
          }
          v80 = v55;
          g4_std::string::assign_str(v79, &v80);
          v35 = v80 - 3;
          if ( v80 - 3 == dword_213B808 || __sync_fetch_and_add(v80 - 1, 0xFFFFFFFF) > 0 )
            goto LABEL_81;
          goto LABEL_141;
        }
        g4_std::string::assign_str(v79, &v93);
LABEL_81:
        sub_1937C90(v78, v79);
        v36 = (void *)(v79[0] - 12);
        if ( (uint32_t *)(v79[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v79[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v36);
        }
        v37 = *((vox::VoxDebugStreamManager::Self **)v76 + 191);
        if ( v37 != nullptr )
          vox::VoxDebugStreamManager::Lock(*((vox::VoxDebugStreamManager::Self **)v76 + 191));
        v38 = VoxAllocInternal(0xCu, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
        if ( v38 != -8 )
        {
          v63 = v38;
          g4_std::string::construct_copy(v38 + 8, v78);
          v38 = v63;
        }
        sub_1901920(v38, v65);
        if ( v37 != nullptr )
          vox::VoxDebugStreamManager::Unlock(v37);
        v39 = (void *)(v78[0] - 12);
        if ( (uint32_t *)(v78[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v78[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v39);
        }
        v40 = (void **)v102[0];
        if ( v102[0] != v102 )
        {
          while ( 1 )
          {
            v41 = (void **)*v40;
            opDelete(v40);
            if ( v41 == v102 )
              break;
            v40 = v41;
          }
        }
        v42 = (void **)v101[0];
        if ( v101[0] != v101 )
        {
          while ( 1 )
          {
            v43 = (void **)*v42;
            opDelete(v42);
            if ( v43 == v101 )
              break;
            v42 = v43;
          }
        }
        v83 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
        v94[0] = (uint32_t)(uintptr_t)(&off_20AB014);
        v85 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
        v86[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
        v44 = v93 - 3;
        if ( v93 - 3 != dword_213B808 && __sync_fetch_and_add(v93 - 1, 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v44);
        v86[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
        sub_1902180(v91);
        v83 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
        *(int (***)(int))((char *)&v83 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
        v85 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
        *(uint32_t *)((char *)&v86[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
        v83 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
        *(int (***)(int))((char *)&v83 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
        v84 = 0;
        v94[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
        sub_1900B90(v94);
LABEL_99:
        v5 = StreamList == (uint32_t *)*v68;
        v68 = (uint32_t *)*v68;
      }
      while ( !v5 );
    }
  }
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::PrintDebug  (binary VA: 0x1034c30)
// Original: vox::VoxEngineInternal::PrintDebug
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::PrintDebug(pthread_mutex_t **self)
{
  int v1;
  int v2;
  int *v3;
  int *j;
  pthread_mutex_t **v5;
  typedef int _g4_t_v7;
  typedef pthread_mutex_t **_g4_t_v8;
  typedef int _g4_t_i;
  typedef uint32_t _g4_t_v10[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_i)) > _g4_s2 ? (16u + sizeof(_g4_t_i)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v10)) > _g4_s3 ? (28u + sizeof(_g4_t_v10)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);

  v8 = self + 55;
  vox::Mutex::Lock(self + 55);
  v1 = (int)(uintptr_t)(*(self + 170));
  if ( v1 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v1 + 56))((uint32_t)(uintptr_t)(*(self + 170)));
  vox::Mutex::Unlock(v8);
  vox::AccessController::GetReadAccess((vox::AccessController::Self *)(self + 19));
  vox::AccessController::GetReadAccess((vox::AccessController::Self *)(self + 47));
  vox::HandlableContainer::begin((vox::HandlableContainer::Self *)v10, (int)(uintptr_t)(self));
  v7 = v10[0];
  vox::HandlableContainer::end((vox::HandlableContainer::Self *)v10, (int)(uintptr_t)(self));
  for ( i = v10[0]; i != v7; v7 = sub_1904890(v7) )
  {
    vox::DataObj::PrintDebug(*(pthread_mutex_t ***)(v7 + 24));
    vox::Mutex::Lock(v8);
    v2 = *(uint32_t *)(v7 + 24);
    v3 = *(int **)(v2 + 60);
    for ( j = (int *)(v2 + 60); j != v3; v3 = (int *)*v3 )
    {
      v5 = (pthread_mutex_t **)vox::HandlableContainer::Find(
                                 (vox::HandlableContainer::Self *)(self + 28),
                                 *((uint64_t *)v3 + 1));
      if ( v5 != nullptr )
        vox::EmitterObj::PrintDebug(v5);
    }
    vox::Mutex::Unlock(v8);
  }
  vox::AccessController::ReleaseReadAccess((vox::AccessController::Self *)(self + 47));
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::AccessController::Self *)(self + 19)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::CreateEmitterAsync  (binary VA: 0x1034db0)
// Original: vox::VoxEngineInternal::CreateEmitterAsync
// ----------------------------------------------------------------------------
vox::VoxEngineInternal::Self * vox::VoxEngineInternal::CreateEmitterAsync(vox::VoxEngineInternal::Self *self, vox::DataHandle::Self *a2, int *a3, void *a4, int a5)
{
  int v5;
  uint64_t FreeEmitterObjectId;
  pthread_mutex_t *Group;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  typedef int _g4_t_v14;
  typedef char _g4_t_v15;
  typedef vox::DriverSourceInterface::Self *_g4_t_v16;
  typedef vox::AccessController::Self *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_DataObject;
  typedef uint32_t _g4_t_v20[4];
  typedef uint32_t _g4_t_v21[4];
  typedef uint8_t _g4_t_v22[44];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v14)) > _g4_s0 ? (8u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v15)) > _g4_s1 ? (15u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v16)) > _g4_s2 ? (16u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v17)) > _g4_s3 ? (20u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v18)) > _g4_s4 ? (24u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_DataObject)) > _g4_s5 ? (28u + sizeof(_g4_t_DataObject)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v20)) > _g4_s6 ? (32u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v21)) > _g4_s7 ? (48u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v22)) > _g4_s8 ? (64u + sizeof(_g4_t_v22)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 15u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_DataObject &DataObject = *reinterpret_cast<_g4_t_DataObject *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 64u);

  v17 = (vox::AccessController::Self *)((vox::DataHandle::Self *)((char *)a2 + 76));
  vox::AccessController::GetReadAccess((vox::DataHandle::Self *)((char *)a2 + 76));
  DataObject = vox::VoxEngineInternal::GetDataObject(a2, a3);
  if ( DataObject == 0 )
    goto LABEL_18;
  vox::DriverSourceParam::DriverSourceParam((vox::DriverSourceParam::Self *)v20);
  if ( a5 != 0 )
  {
    v20[1] = *(uint32_t *)(a5 + 4);
    v20[2] = *(uint32_t *)(a5 + 8);
  }
  if ( (uint8_t)vox::DataObj::IsReady((pthread_mutex_t **)DataObject) == 0 )
  {
    v5 = *((uint32_t *)a2 + 170);
    if ( v5 != 0 )
    {
      v16 = (vox::DriverSourceInterface::Self *)(*(int (**)(uint32_t))(*(uint32_t *)v5 + 60))(*((uint32_t *)a2 + 170));
      if ( v16 != nullptr )
      {
        v15 = 1;
        goto LABEL_8;
      }
LABEL_18:
      vox::AccessController::ReleaseReadAccess(v17);
      vox::EmitterHandle::Construct(self, -1, nullptr, nullptr, 0, 0);
      return self;
    }
  }
  v9 = *(uint32_t *)(DataObject + 36);
  v21[1] = *(uint32_t *)(DataObject + 40);
  v21[2] = *(uint32_t *)(DataObject + 44);
  v10 = *(uint32_t *)(DataObject + 48);
  v21[0] = v9;
  v21[3] = v10;
  if ( v9 <= 0 )
    goto LABEL_18;
  v11 = *((uint32_t *)a2 + 170);
  if ( v11 == 0 )
    goto LABEL_18;
  v12 = (*(int (**)(uint32_t))(*(uint32_t *)v11 + 60))(*((uint32_t *)a2 + 170));
  v16 = (vox::DriverSourceInterface::Self *)v12;
  if ( v12 == 0 )
    goto LABEL_18;
  G4_VCALL<void>(v12, 8, v21, v20);
  v15 = 0;
LABEL_8:
  FreeEmitterObjectId = vox::VoxEngineInternal::GetFreeEmitterObjectId((vox::VoxEngineInternal::Self *)(a2));
  v14 = *(uint32_t *)(DataObject + 28);
  v18 = VoxAllocInternal(
          0x1ACu,
          0,
          (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_internal.cpp"),
          (int)(uintptr_t)("CreateEmitterAsync"),
          1777);
  vox::EmitterObj::Construct(
    (vox::EmitterObj::Self *)v18,
    FreeEmitterObjectId,
    (int)(uintptr_t)(a4),
    v14,
    (vox::DriverSourceParam::Self *)v20,
    v16,
    (vox::DataObj::Self *)DataObject);
  if ( v18 == 0 )
  {
    v13 = *((uint32_t *)a2 + 170);
    if ( v13 != 0 )
      G4_VCALL<void>(v13, 64, v16);
    goto LABEL_18;
  }
  if ( v15 != 0 )
    vox::EmitterObj::SetMustInitDriverSource((vox::EmitterObj::Self *)v18);
  Group = (pthread_mutex_t *)vox::DataObj::GetGroup((pthread_mutex_t **)DataObject);
  vox::EmitterObj::SetGroup((pthread_mutex_t **)v18, Group);
  vox::DataObj::RegisterEmitter((pthread_mutex_t **)DataObject, *(uint64_t *)(v18 + 4));
  vox::AccessController::ReleaseReadAccess(v17);
  *(uint32_t *)(v18 + 16) = *((uint32_t *)a2 + 187);
  vox::EmitterHandle::Construct(
    (vox::EmitterHandle::Self *)v22,
    *(uint64_t *)(v18 + 4),
    (vox::VoxEngineInternal::Self **)&vox::VoxEngineInternal::s_voxEngineInternal,
    (vox::Handlable::Self *)v18,
    *((uint32_t *)a2 + *((uint32_t *)a2 + 187) + 171),
    *((uint32_t *)a2 + 187));
  *((uint32_t *)a2 + 187) = ((uint8_t)*((uint32_t *)a2 + 187) + 1) & 0xF;
  vox::AccessController::GetWriteAccess((vox::DataHandle::Self *)((char *)a2 + 200));
  vox::HandlableContainer::Add((vox::DataHandle::Self *)((char *)a2 + 144), (vox::Handlable::Self *)v18);
  vox::AccessController::ReleaseWriteAccess((vox::DataHandle::Self *)((char *)a2 + 200));
  vox::EmitterObj::SetDSPParameter((vox::EmitterObj::Self *)v18, 0, "master");
  vox::EmitterHandle::Construct(self, (const vox::EmitterHandle::Self *)v22);
  vox::EmitterHandle::Destroy((vox::EmitterHandle::Self *)v22);
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::CreateEmitter  (binary VA: 0x1035120)
// Original: vox::VoxEngineInternal::CreateEmitter
// ----------------------------------------------------------------------------
vox::VoxEngineInternal::Self * vox::VoxEngineInternal::CreateEmitter(vox::VoxEngineInternal::Self *self, vox::DataHandle::Self *a2, int *a3, void *a4, int a5)
{
  pthread_mutex_t **DataObject;
  int v6;
  int v7;
  vox::DecoderCursorInterface::Self *v8;
  int v9;
  uint64_t FreeEmitterObjectId;
  pthread_mutex_t *Group;
  int v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef vox::DecoderCursorInterface::Self *_g4_t_v16;
  typedef vox::DecoderCursorInterface::Self *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef vox::DriverSourceInterface::Self *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef pthread_mutex_t *_g4_t_v21;
  typedef pthread_mutex_t *_g4_t_v22;
  typedef vox::AccessController::Self *_g4_t_v23;
  typedef pthread_mutex_t **_g4_t_v24;
  typedef uint32_t _g4_t_v25[4];
  typedef uint32_t _g4_t_v26[4];
  typedef g4_int128_t _g4_t_v27;
  typedef uint8_t _g4_t_v28[44];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v15)) > _g4_s1 ? (16u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v16)) > _g4_s2 ? (16u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v17)) > _g4_s3 ? (16u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v18)) > _g4_s4 ? (20u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v19)) > _g4_s5 ? (24u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v20)) > _g4_s6 ? (28u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v21)) > _g4_s7 ? (32u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v22)) > _g4_s8 ? (36u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v23)) > _g4_s9 ? (40u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v24)) > _g4_s10 ? (44u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v25)) > _g4_s11 ? (48u + sizeof(_g4_t_v25)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v26)) > _g4_s12 ? (64u + sizeof(_g4_t_v26)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v27)) > _g4_s13 ? (80u + sizeof(_g4_t_v27)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v28)) > _g4_s14 ? (96u + sizeof(_g4_t_v28)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 64u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 80u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 96u);

  v23 = (vox::AccessController::Self *)((vox::DataHandle::Self *)((char *)a2 + 76));
  vox::AccessController::GetReadAccess((vox::DataHandle::Self *)((char *)a2 + 76));
  DataObject = (pthread_mutex_t **)vox::VoxEngineInternal::GetDataObject(a2, a3);
  v24 = DataObject;
  if ( DataObject != nullptr && (uint8_t)vox::DataObj::IsReady(DataObject) != 0 )
  {
    v22 = v24[13];
    if ( v24[20] == nullptr )
    {
      v21 = v24[14];
      if ( v21 != nullptr && v22 != nullptr )
      {
        v6 = (*(int (**)(pthread_mutex_t *))(((int32_t *)(v22))[0] + 20))(v22);
        v20 = v6;
        if ( v6 != 0 )
        {
          v7 = (*(int (**)(pthread_mutex_t *, int))(((int32_t *)(v21))[0] + 16))(v21, v6);
          v8 = (vox::DecoderCursorInterface::Self *)v7;
          if ( v7 != 0 )
          {
            v27 = *(g4_int128_t *)(v7 + 4);
            if ( (int)v27 <= 0 || *((uint32_t *)a2 + 170) == 0 )
              goto LABEL_22;
            v15 = v7;
            vox::DriverSourceParam::DriverSourceParam((vox::DriverSourceParam::Self *)v25);
            if ( a5 != 0 )
            {
              v25[1] = *(uint32_t *)(a5 + 4);
              v25[2] = *(uint32_t *)(a5 + 8);
            }
            v9 = (*(int (**)(uint32_t))(**((uint32_t **)a2 + 170) + 60))(*((uint32_t *)a2 + 170));
            v19 = (vox::DriverSourceInterface::Self *)v9;
            v8 = (vox::DecoderCursorInterface::Self *)v15;
            if ( v9 != 0 )
            {
              (*(void (**)(int, int, g4_int128_t *, uint32_t *))(*(uint32_t *)v9 + 8))(v15, v9, &v27, v25);
              v8 = (vox::DecoderCursorInterface::Self *)v15;
            }
            v25[0] = ((uint32_t)(uintptr_t)&off_208D968);
            if ( v19 != nullptr )
            {
              v16 = v8;
              vox::DriverSourceParam::DriverSourceParam((vox::DriverSourceParam::Self *)v26);
              if ( a5 != 0 )
              {
                v26[1] = *(uint32_t *)(a5 + 4);
                v26[2] = *(uint32_t *)(a5 + 8);
              }
              FreeEmitterObjectId = vox::VoxEngineInternal::GetFreeEmitterObjectId((vox::VoxEngineInternal::Self *)(a2));
              v18 = (int)(uintptr_t)(v24[7]);
              v14 = VoxAllocInternal(
                      0x1ACu,
                      0,
                      (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_internal.cpp"),
                      (int)(uintptr_t)("CreateEmitter"),
                      1619);
              vox::EmitterObj::Construct(
                (vox::EmitterObj::Self *)v14,
                FreeEmitterObjectId,
                (int)(uintptr_t)(a4),
                v18,
                (vox::DriverSourceParam::Self *)v26,
                v19,
                v16,
                (vox::DataObj::Self *)v24);
              if ( v14 != 0 )
              {
                Group = (pthread_mutex_t *)vox::DataObj::GetGroup(v24);
                vox::EmitterObj::SetGroup((pthread_mutex_t **)v14, Group);
                vox::DataObj::RegisterEmitter(v24, *(uint64_t *)(v14 + 4));
                vox::AccessController::ReleaseReadAccess(v23);
                *(uint32_t *)(v14 + 16) = *((uint32_t *)a2 + 187);
                vox::EmitterHandle::Construct(
                  (vox::EmitterHandle::Self *)v28,
                  *(uint64_t *)(v14 + 4),
                  (vox::VoxEngineInternal::Self **)&vox::VoxEngineInternal::s_voxEngineInternal,
                  (vox::Handlable::Self *)v14,
                  *((uint32_t *)a2 + *((uint32_t *)a2 + 187) + 171),
                  *((uint32_t *)a2 + 187));
                *((uint32_t *)a2 + 187) = ((uint8_t)*((uint32_t *)a2 + 187) + 1) & 0xF;
                vox::AccessController::GetWriteAccess((vox::DataHandle::Self *)((char *)a2 + 200));
                vox::HandlableContainer::Add((vox::DataHandle::Self *)((char *)a2 + 144), (vox::Handlable::Self *)v14);
                vox::AccessController::ReleaseWriteAccess((vox::DataHandle::Self *)((char *)a2 + 200));
                vox::EmitterObj::SetDSPParameter((vox::EmitterObj::Self *)v14, 0, "master");
                vox::EmitterHandle::Construct(self, (const vox::EmitterHandle::Self *)v28);
                vox::EmitterHandle::Destroy((vox::EmitterHandle::Self *)v28);
                return self;
              }
              (*(void (**)(pthread_mutex_t *, int))(((int32_t *)(v22))[0] + 24))(v22, v20);
              (*(void (**)(pthread_mutex_t *, vox::DecoderCursorInterface::Self *))(((int32_t *)(v21))[0] + 20))(v21, v16);
              v13 = *((uint32_t *)a2 + 170);
              if ( v13 != 0 )
                G4_VCALL<void>(v13, 64, v19);
            }
            else
            {
LABEL_22:
              v17 = v8;
              (*(void (**)(pthread_mutex_t *, int))(((int32_t *)(v22))[0] + 24))(v22, v20);
              (*(void (**)(pthread_mutex_t *, vox::DecoderCursorInterface::Self *))(((int32_t *)(v21))[0] + 20))(v21, v17);
            }
          }
          else
          {
            (*(void (**)(pthread_mutex_t *, int))(((int32_t *)(v22))[0] + 24))(v22, v20);
          }
        }
      }
    }
  }
  vox::AccessController::ReleaseReadAccess(v23);
  vox::EmitterHandle::Construct(self, -1, nullptr, nullptr, 0, 0);
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::SetInteractiveMusicState  (binary VA: 0x1036910)
// Original: vox::VoxEngineInternal::SetInteractiveMusicState
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::SetInteractiveMusicState(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2, char *a3)
{
  vox::EmitterObj::Self *EmitterObject;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = (vox::EmitterObj::Self *)vox::VoxEngineInternal::GetEmitterObject(self, a2);
  if ( EmitterObject != nullptr )
    vox::EmitterObj::SetInteractiveMusicState(EmitterObject, a3, false, false);
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::PlayInteractiveMusic  (binary VA: 0x1036990)
// Original: vox::VoxEngineInternal::PlayInteractiveMusic
// ----------------------------------------------------------------------------
void vox::VoxEngineInternal::PlayInteractiveMusic(vox::PriorityBankManager::Self **self, vox::EmitterObj::Self *a2, char *a3)
{
  if ( a2 != nullptr )
  {
    vox::EmitterObj::SetInteractiveMusicState(a2, a3, true, a3 != nullptr);
    vox::VoxEngineInternal::Play(self, (pthread_mutex_t **)a2, false);
  }
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::PlayInteractiveMusic  (binary VA: 0x1036a00)
// Original: vox::VoxEngineInternal::PlayInteractiveMusic
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::PlayInteractiveMusic(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2, char *a3)
{
  int EmitterObject;
  vox::EmitterObj::Self *v4;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = vox::VoxEngineInternal::GetEmitterObject(self, a2);
  v4 = (vox::EmitterObj::Self *)EmitterObject;
  if ( EmitterObject != 0
    && (*(int (**)(uint32_t))(**(uint32_t **)(*(uint32_t *)(EmitterObject + 360) + 56) + 24))(*(uint32_t *)(*(uint32_t *)(EmitterObject + 360) + 56)) == 4 )
  {
    vox::VoxEngineInternal::PlayInteractiveMusic((vox::PriorityBankManager::Self **)self, v4, a3);
  }
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Play  (binary VA: 0x1036aa0)
// Original: vox::VoxEngineInternal::Play
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::Play(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2)
{
  int EmitterObject;
  vox::EmitterObj::Self *v3;
  char Loop;
  char *DefaultInteractiveMusicState;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = vox::VoxEngineInternal::GetEmitterObject(self, a2);
  v3 = (vox::EmitterObj::Self *)EmitterObject;
  if ( EmitterObject != 0 )
  {
    if ( (*(int (**)(uint32_t))(**(uint32_t **)(*(uint32_t *)(EmitterObject + 360) + 56) + 24))(*(uint32_t *)(*(uint32_t *)(EmitterObject + 360) + 56)) == 4 )
    {
      DefaultInteractiveMusicState = (char *)vox::EmitterObj::GetDefaultInteractiveMusicState(v3);
      vox::VoxEngineInternal::PlayInteractiveMusic((vox::PriorityBankManager::Self **)self, v3, DefaultInteractiveMusicState);
    }
    else
    {
      Loop = vox::EmitterObj::GetLoop((pthread_mutex_t **)v3);
      vox::VoxEngineInternal::Play((vox::PriorityBankManager::Self **)self, (pthread_mutex_t **)v3, Loop);
    }
  }
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Play  (binary VA: 0x1036b50)
// Original: vox::VoxEngineInternal::Play
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::Play(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2, bool a3)
{
  int EmitterObject;
  vox::EmitterObj::Self *v4;
  char *DefaultInteractiveMusicState;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = vox::VoxEngineInternal::GetEmitterObject(self, a2);
  v4 = (vox::EmitterObj::Self *)EmitterObject;
  if ( EmitterObject != 0 )
  {
    if ( (*(int (**)(uint32_t))(**(uint32_t **)(*(uint32_t *)(EmitterObject + 360) + 56) + 24))(*(uint32_t *)(*(uint32_t *)(EmitterObject + 360) + 56)) == 4 )
    {
      DefaultInteractiveMusicState = (char *)vox::EmitterObj::GetDefaultInteractiveMusicState(v4);
      vox::VoxEngineInternal::PlayInteractiveMusic((vox::PriorityBankManager::Self **)self, v4, DefaultInteractiveMusicState);
    }
    else
    {
      vox::VoxEngineInternal::Play((vox::PriorityBankManager::Self **)self, (pthread_mutex_t **)v4, a3);
    }
  }
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::PlayInteractiveMusic  (binary VA: 0x1036c10)
// Original: vox::VoxEngineInternal::PlayInteractiveMusic
// ----------------------------------------------------------------------------
void vox::VoxEngineInternal::PlayInteractiveMusic(vox::PriorityBankManager::Self **self, vox::EmitterObj::Self *a2, char *a3, float a4)
{
  if ( a2 != nullptr )
  {
    vox::EmitterObj::SetInteractiveMusicState(a2, a3, true, a3 != nullptr);
    vox::VoxEngineInternal::Play(self, a2, false, a4);
  }
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::PlayInteractiveMusic  (binary VA: 0x1036c80)
// Original: vox::VoxEngineInternal::PlayInteractiveMusic
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::PlayInteractiveMusic(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2, char *a3, float a4)
{
  int EmitterObject;
  vox::EmitterObj::Self *v5;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = vox::VoxEngineInternal::GetEmitterObject(self, a2);
  v5 = (vox::EmitterObj::Self *)EmitterObject;
  if ( EmitterObject != 0
    && (*(int (**)(uint32_t))(**(uint32_t **)(*(uint32_t *)(EmitterObject + 360) + 56) + 24))(*(uint32_t *)(*(uint32_t *)(EmitterObject + 360) + 56)) == 4 )
  {
    vox::VoxEngineInternal::PlayInteractiveMusic((vox::PriorityBankManager::Self **)self, v5, a3, a4);
  }
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Play  (binary VA: 0x1036d20)
// Original: vox::VoxEngineInternal::Play
// ----------------------------------------------------------------------------
int vox::VoxEngineInternal::Play(vox::VoxEngineInternal::Self *self, vox::EmitterHandle::Self *a2, bool a3, float a4)
{
  int EmitterObject;
  vox::EmitterObj::Self *v5;
  char *DefaultInteractiveMusicState;

  vox::AccessController::GetReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
  EmitterObject = vox::VoxEngineInternal::GetEmitterObject(self, a2);
  v5 = (vox::EmitterObj::Self *)EmitterObject;
  if ( EmitterObject != 0 )
  {
    if ( (*(int (**)(uint32_t))(**(uint32_t **)(*(uint32_t *)(EmitterObject + 360) + 56) + 24))(*(uint32_t *)(*(uint32_t *)(EmitterObject + 360) + 56)) == 4 )
    {
      DefaultInteractiveMusicState = (char *)vox::EmitterObj::GetDefaultInteractiveMusicState(v5);
      vox::VoxEngineInternal::PlayInteractiveMusic(
        (vox::PriorityBankManager::Self **)self,
        v5,
        DefaultInteractiveMusicState,
        a4);
    }
    else
    {
      vox::VoxEngineInternal::Play((vox::PriorityBankManager::Self **)self, v5, a3, a4);
    }
  }
  return (int)(uintptr_t)(vox::AccessController::ReleaseReadAccess((vox::VoxEngineInternal::Self *)((char *)self + 188)));
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::UpdateSources  (binary VA: 0x1036df0)
// Original: vox::VoxEngineInternal::UpdateSources
// ----------------------------------------------------------------------------
void vox::VoxEngineInternal::UpdateSources(void **self)
{
  int CurrentDataSourceToUpdate;
  vox::AccessController::Self *i;
  int DataSourcesToUpdateSize;

  vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  if ( (int)(uintptr_t)(*(self + 190)) <= 0 )
  {
    vox::VoxThread::GetCurThreadId();
    sub_BA06A0();
    vox::AccessController::GetWriteAccess((vox::AccessController::Self *)(self + 19));
    vox::AccessController::GetWriteAccess((vox::AccessController::Self *)(self + 22));
    if ( (int)(uintptr_t)(*(self + 13)) > 0 )
    {
      vox::HandlableContainer::Merge((vox::HandlableContainer::Self *)self, (vox::HandlableContainer::Self *)(self + 8));
      g4_std::Rb_tree_long_long_pair_long_long_00a3e4::M_erase(
        (int)(uintptr_t)(self + 8),
        *(self + 10));
      *(self + 10) = nullptr;
      *(self + 11) = self + 9;
      *(self + 12) = self + 9;
      *(self + 13) = nullptr;
    }
    vox::AccessController::ReleaseWriteAccess((vox::AccessController::Self *)(self + 22));
    vox::AccessController::ReleaseWriteAccess((vox::AccessController::Self *)(self + 19));
    sub_BA06B0();
    DataSourcesToUpdateSize = vox::VoxEngineInternal::GetDataSourcesToUpdateSize((pthread_mutex_t **)self);
    if ( DataSourcesToUpdateSize > 0 )
    {
      for ( i = nullptr; i != (vox::AccessController::Self *)DataSourcesToUpdateSize; i = (vox::AccessController::Self *)((char *)i + 1) )
      {
        vox::AccessController::GetWriteAccess((vox::AccessController::Self *)(self + 19));
        CurrentDataSourceToUpdate = vox::VoxEngineInternal::GetCurrentDataSourceToUpdate((pthread_mutex_t **)self);
        if ( (uint8_t)vox::DataObj::ShouldDie((pthread_mutex_t **)CurrentDataSourceToUpdate) != 0 )
        {
          vox::VoxEngineInternal::DetachDataObject(
            (vox::VoxEngineInternal::Self *)self,
            *(uint64_t *)(CurrentDataSourceToUpdate + 4));
          vox::AccessController::ReleaseWriteAccess((vox::AccessController::Self *)(self + 19));
          vox::VoxEngineInternal::ReleaseDatasource(
            (vox::VoxEngineInternal::Self *)self,
            (vox::DataObj::Self *)CurrentDataSourceToUpdate);
        }
        else
        {
          *(uint8_t *)(CurrentDataSourceToUpdate + 76) = 0;
          vox::AccessController::ReleaseWriteAccess((vox::AccessController::Self *)(self + 19));
          vox::AccessController::GetReadAccess((vox::AccessController::Self *)(self + 19));
          if ( vox::DataObj::Update((vox::DataObj::Self *)CurrentDataSourceToUpdate) == -1 )
            vox::VoxEngineInternal::SetDataSourceToUpdate(
              (pthread_mutex_t **)self,
              (vox::DataObj::Self *)CurrentDataSourceToUpdate);
          vox::AccessController::ReleaseReadAccess((vox::AccessController::Self *)(self + 19));
        }
      }
    }
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::UpdateEmitters  (binary VA: 0x1036fb0)
// Original: vox::VoxEngineInternal::UpdateEmitters
// ----------------------------------------------------------------------------
void vox::VoxEngineInternal::UpdateEmitters(long double a1, vox::VoxEngineInternal::Self *self, float a3)
{
  int v3;
  int v4;
  unsigned int Group;
  unsigned int v6;
  uint32_t *v7;
  int v8;
  int v9;
  char *v10;
  unsigned int v11;
  vox::EmitterHandle::Self **v12;
  char *v13;
  uint32_t *v14;
  char *v15;
  char *v16;
  uint32_t *v17;
  int v18;
  vox::EmitterObj::Self *v19;
  unsigned int v20;
  typedef float _g4_t_v21;
  typedef float _g4_t_v22;
  typedef vox::EmitterHandle::Self *_g4_t_v23;
  typedef vox::VoxCallback::Self *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef float _g4_t_v26;
  typedef int _g4_t_j;
  typedef size_t _g4_t_i;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef char *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef unsigned int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef vox::HandlableContainer::Self *_g4_t_v36;
  typedef vox::AccessController::Self *_g4_t_v37;
  typedef vox::VoxCallbackManager::Self *_g4_t_v38;
  typedef uint32_t _g4_t_v39[2];
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef uint8_t _g4_t_v43[32];
  typedef uint8_t _g4_t_v44[60];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (4u + sizeof(_g4_t_v21)) > _g4_s0 ? (4u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v22)) > _g4_s1 ? (4u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v23)) > _g4_s2 ? (36u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v24)) > _g4_s3 ? (40u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v25)) > _g4_s4 ? (40u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v26)) > _g4_s5 ? (44u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_j)) > _g4_s6 ? (44u + sizeof(_g4_t_j)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_i)) > _g4_s7 ? (48u + sizeof(_g4_t_i)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v29)) > _g4_s8 ? (48u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v30)) > _g4_s9 ? (52u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v31)) > _g4_s10 ? (52u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v32)) > _g4_s11 ? (56u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v33)) > _g4_s12 ? (56u + sizeof(_g4_t_v33)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v34)) > _g4_s13 ? (60u + sizeof(_g4_t_v34)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v35)) > _g4_s14 ? (60u + sizeof(_g4_t_v35)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v36)) > _g4_s15 ? (64u + sizeof(_g4_t_v36)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v37)) > _g4_s16 ? (68u + sizeof(_g4_t_v37)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v38)) > _g4_s17 ? (80u + sizeof(_g4_t_v38)) : _g4_s17,
    _g4_s19 = (92u + sizeof(_g4_t_v39)) > _g4_s18 ? (92u + sizeof(_g4_t_v39)) : _g4_s18,
    _g4_s20 = (100u + sizeof(_g4_t_v40)) > _g4_s19 ? (100u + sizeof(_g4_t_v40)) : _g4_s19,
    _g4_s21 = (104u + sizeof(_g4_t_v41)) > _g4_s20 ? (104u + sizeof(_g4_t_v41)) : _g4_s20,
    _g4_s22 = (108u + sizeof(_g4_t_v42)) > _g4_s21 ? (108u + sizeof(_g4_t_v42)) : _g4_s21,
    _g4_s23 = (112u + sizeof(_g4_t_v43)) > _g4_s22 ? (112u + sizeof(_g4_t_v43)) : _g4_s22,
    _g4_s24 = (144u + sizeof(_g4_t_v44)) > _g4_s23 ? (144u + sizeof(_g4_t_v44)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_j &j = *reinterpret_cast<_g4_t_j *>(_g4_sf + 44u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 48u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 48u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 52u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 52u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 56u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 56u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 60u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 60u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 64u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 68u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 80u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 92u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 100u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 104u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 108u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 112u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 144u);

  vox::VoxThread::GetCurThreadId();
  sub_BA06A0();
  vox::Mutex::Lock((pthread_mutex_t **)self + 55);
  if ( *((int *)self + 190) > 0 )
  {
    vox::Mutex::Unlock((pthread_mutex_t **)self + 55);
  }
  else
  {
    v26 = fmaxf(fminf(a3, 0.1f), 0.0);
    vox::VoxEngineInternal::Update3D(self);
    vox::VoxEngineInternal::UpdateDSP(self);
    v3 = *((uint32_t *)self + 170);
    if ( v3 != 0 )
      (*(void (**)(uint32_t, float))(*(uint32_t *)v3 + 36))(*((uint32_t *)self + 170), COERCE_FLOAT(LODWORD(v26)));
    if ( *((uint32_t *)self + 54) != 0 )
      vox::GroupManager::Update(*((vox::GroupManager::Self **)self + 54), v26);
    vox::Mutex::Unlock((pthread_mutex_t **)self + 55);
    v37 = (vox::AccessController::Self *)((vox::VoxEngineInternal::Self *)((char *)self + 188));
    vox::AccessController::GetWriteAccess((vox::VoxEngineInternal::Self *)((char *)self + 188));
    vox::AccessController::GetWriteAccess((vox::VoxEngineInternal::Self *)((char *)self + 200));
    v36 = (vox::HandlableContainer::Self *)((vox::VoxEngineInternal::Self *)((char *)self + 112));
    if ( *((int *)self + 41) > 0 )
    {
      vox::HandlableContainer::Merge(
        (vox::VoxEngineInternal::Self *)((char *)self + 112),
        (vox::VoxEngineInternal::Self *)((char *)self + 144));
      g4_std::Rb_tree_long_long_pair_long_long_00a3e4::M_erase(
        (int)(uintptr_t)(self) + 144,
        *((void **)self + 38));
      *((uint32_t *)self + 38) = 0;
      *((uint32_t *)self + 39) = (uint32_t)(uintptr_t)((char *)self + 148);
      *((uint32_t *)self + 40) = (uint32_t)(uintptr_t)((char *)self + 148);
      *((uint32_t *)self + 41) = 0;
    }
    vox::AccessController::ReleaseWriteAccess((vox::VoxEngineInternal::Self *)((char *)self + 200));
    vox::AccessController::ReleaseWriteAccess(v37);
    vox::AccessController::GetReadAccess(v37);
    vox::HandlableContainer::begin((vox::HandlableContainer::Self *)v39, (int)(uintptr_t)(v36));
    v4 = v39[0];
    vox::HandlableContainer::end((vox::HandlableContainer::Self *)v39, (int)(uintptr_t)(v36));
    v38 = (vox::VoxCallbackManager::Self *)((vox::VoxEngineInternal::Self *)((char *)self + 752));
    for ( i = v39[0]; i != v4; v4 = sub_1904890(v4) )
    {
      while ( 1 )
      {
        if ( *((uint32_t *)self + 54) != 0 )
        {
          Group = vox::EmitterObj::GetGroup(*(pthread_mutex_t ***)(v4 + 24));
          vox::GroupManager::GetEffectiveVolume(*((vox::GroupManager::Self **)self + 54), Group);
          v21 = a1;
          vox::EmitterObj::SetGainModifier(*(vox::EmitterObj::Self **)(v4 + 24), v21);
          v6 = vox::EmitterObj::GetGroup(*(pthread_mutex_t ***)(v4 + 24));
          vox::GroupManager::GetEffectivePitch(*((vox::GroupManager::Self **)self + 54), v6);
          v22 = a1;
          vox::EmitterObj::SetPitchModifier(*(vox::EmitterObj::Self **)(v4 + 24), v22);
        }
        vox::EmitterObj::Update(*(pthread_mutex_t ***)(v4 + 24), v26);
        if ( (uint8_t)vox::EmitterObj::NeedToSendStateChangedCallback(*(uint32_t *)(v4 + 24), &v40, &v41, &v42) != 0 )
          break;
        v4 = sub_1904890(v4);
        if ( i == v4 )
          goto LABEL_15;
      }
      vox::EmitterHandle::Construct(
        (vox::EmitterHandle::Self *)v43,
        *(uint64_t *)(*(uint32_t *)(v4 + 24) + 4),
        (vox::VoxEngineInternal::Self **)&vox::VoxEngineInternal::s_voxEngineInternal,
        *(vox::Handlable::Self **)(v4 + 24),
        *((uint32_t *)self + *(uint32_t *)(*(uint32_t *)(v4 + 24) + 16) + 171),
        *(uint32_t *)(*(uint32_t *)(v4 + 24) + 16));
      vox::EmitterHandle::Construct((vox::EmitterHandle::Self *)v44, (const vox::EmitterHandle::Self *)v43);
      v7 = (uint32_t *)VoxAllocInternal(
                       0x30u,
                       0,
                       (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_internal.cpp"),
                       (int)(uintptr_t)("UpdateEmitters"),
                       438);
      v32 = v42;
      v34 = v41;
      v30 = v40;
      *v7 = ((uint32_t)(uintptr_t)&off_208D918);
      v24 = (vox::VoxCallback::Self *)v7;
      vox::EmitterHandle::Construct((vox::EmitterHandle::Self *)(v7 + 1), (const vox::EmitterHandle::Self *)v44);
      *((uint32_t *)v24 + 9) = v30;
      *((uint32_t *)v24 + 10) = v34;
      *((uint32_t *)v24 + 11) = v32;
      vox::VoxCallbackManager::Add(v38, v24);
      vox::EmitterHandle::Destroy((vox::EmitterHandle::Self *)v44);
      vox::EmitterHandle::Destroy((vox::EmitterHandle::Self *)v43);
    }
LABEL_15:
    vox::HandlableContainer::begin((vox::HandlableContainer::Self *)v39, (int)(uintptr_t)(v36));
    v8 = v39[0];
    vox::HandlableContainer::end((vox::HandlableContainer::Self *)v39, (int)(uintptr_t)(v36));
    for ( j = v39[0]; j != v8; v8 = sub_1904890(v8) )
    {
      while ( (uint8_t)vox::EmitterObj::ShouldDie(*(pthread_mutex_t ***)(v8 + 24)) == 0 )
      {
LABEL_20:
        v8 = sub_1904890(v8);
        if ( j == v8 )
          goto LABEL_41;
      }
      v10 = *((char **)self + 45);
      if ( v10 != *((char **)self + 46) )
      {
        v9 = 0;
        if ( v10 != nullptr )
        {
          *(uint32_t *)v10 = *(uint32_t *)(v8 + 24);
          v9 = *((uint32_t *)self + 45);
        }
        *((uint32_t *)self + 45) = v9 + 4;
        goto LABEL_20;
      }
      v11 = (int)(uintptr_t)(&v10[-*((uint32_t *)self + 44)]) >> 2;
      v29 = 4;
      if ( v11 != 0 )
      {
        if ( v11 > 2 * v11 || 2 * v11 > 0x3FFFFFFF )
          v29 = -4;
        else
          v29 = 8 * v11;
      }
      v23 = *(vox::EmitterHandle::Self **)(v8 + 24);
      v25 = (int)(uintptr_t)(&v10[-*((uint32_t *)self + 44)]) >> 2;
      v35 = VoxAllocInternal(v29, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      v33 = v35 + 4;
      v12 = (vox::EmitterHandle::Self **)(v35 + 4 * v25);
      if ( v12 != nullptr )
        *v12 = v23;
      v13 = *((char **)self + 44);
      v31 = v13;
      if ( v10 != v13 )
      {
        v14 = (uint32_t *)v35;
        do
        {
          if ( v14 != nullptr )
            *v14 = *(uint32_t *)v13;
          v13 += 4;
          ++v14;
        }
        while ( v10 != v13 );
        v33 = v35 + 4 * ((unsigned int)(v10 - (v31 + 4)) >> 2) + 8;
      }
      v15 = *((char **)self + 45);
      if ( v10 != v15 )
      {
        v16 = v10;
        v17 = (uint32_t *)v33;
        do
        {
          if ( v17 != nullptr )
            *v17 = *(uint32_t *)v16;
          v16 += 4;
          ++v17;
        }
        while ( v15 != v16 );
        v33 += 4 * ((unsigned int)(v15 - (v10 + 4)) >> 2) + 4;
      }
      if ( *((uint32_t *)self + 44) != 0 )
        VoxFreeInternal(*((void **)self + 44));
      *((uint32_t *)self + 44) = v35;
      *((uint32_t *)self + 45) = v33;
      *((uint32_t *)self + 46) = v29 + v35;
    }
LABEL_41:
    if ( *((uint32_t *)self + 53) != 0 )
      vox::PriorityBankManager::Update(*((vox::PriorityBankManager::Self **)self + 53));
    vox::AccessController::ReleaseReadAccess(v37);
    if ( (unsigned int)(*((uint32_t *)self + 45) - *((uint32_t *)self + 44)) >> 2 != 0 )
    {
      vox::AccessController::GetWriteAccess(v37);
      v18 = *((uint32_t *)self + 45);
      if ( (unsigned int)(v18 - *((uint32_t *)self + 44)) >> 2 != 0 )
      {
        do
        {
          v19 = (vox::EmitterObj::Self *)vox::HandlableContainer::Detach(v36, *(uint64_t *)(*(uint32_t *)(v18 - 4) + 4));
          vox::VoxEngineInternal::KillEmitter(self, v19);
          v18 = *((uint32_t *)self + 45) - 4;
          v20 = (unsigned int)(v18 - *((uint32_t *)self + 44)) >> 2;
          *((uint32_t *)self + 45) = v18;
        }
        while ( v20 != 0 );
      }
      vox::AccessController::ReleaseWriteAccess(v37);
    }
    vox::VoxCallbackManager::SendAll(v38);
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::ReleaseAllDatasource  (binary VA: 0x1037a00)
// Original: vox::VoxEngineInternal::_ReleaseAllDatasource
// ----------------------------------------------------------------------------
void ** vox::VoxEngineInternal::ReleaseAllDatasource(void **self)
{
  void **v1;
  int v2;
  int i;
  int v4;
  int j;
  uint32_t *k;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  uint32_t *v11;
  uint32_t *v12;
  uint32_t *v13;
  int v14;
  int v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  uint32_t *v22;
  uint32_t *v23;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef uint32_t *_g4_t_v29;
  typedef uint32_t *_g4_t_v30;
  typedef uint32_t *_g4_t_v31;
  typedef uint32_t *_g4_t_v32;
  typedef uint32_t *_g4_t_v33;
  typedef uint32_t *_g4_t_v34;
  typedef uint32_t *_g4_t_v35;
  typedef uint32_t *_g4_t_v36;
  typedef uint32_t _g4_t_v37[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v25)) > _g4_s0 ? (4u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v26)) > _g4_s1 ? (4u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v27)) > _g4_s2 ? (4u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v28)) > _g4_s3 ? (4u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v29)) > _g4_s4 ? (8u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v30)) > _g4_s5 ? (12u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v31)) > _g4_s6 ? (16u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v32)) > _g4_s7 ? (20u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v33)) > _g4_s8 ? (24u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v34)) > _g4_s9 ? (28u + sizeof(_g4_t_v34)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v35)) > _g4_s10 ? (32u + sizeof(_g4_t_v35)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v36)) > _g4_s11 ? (36u + sizeof(_g4_t_v36)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v37)) > _g4_s12 ? (44u + sizeof(_g4_t_v37)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 4u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 4u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 4u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 8u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 20u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 32u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 36u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 44u);

  v1 = self;
  vox::HandlableContainer::begin((vox::HandlableContainer::Self *)v37, (int)(uintptr_t)(self));
  v25 = v37[0];
  vox::HandlableContainer::end((vox::HandlableContainer::Self *)v37, (int)(uintptr_t)(self));
  v2 = v37[0];
  for ( i = v25; i != v2; i = sub_1904890(v26) )
  {
    v26 = i;
    vox::VoxEngineInternal::ReleaseDatasource((vox::VoxEngineInternal::Self *)self, *(vox::DataObj::Self **)(i + 24));
  }
  g4_std::Rb_tree_long_long_pair_long_long_00a3e4::M_erase(
    (int)(uintptr_t)(self),
    *(self + 2));
  *(self + 2) = nullptr;
  *(self + 3) = self + 1;
  *(self + 4) = self + 1;
  *(self + 5) = nullptr;
  vox::HandlableContainer::begin((vox::HandlableContainer::Self *)v37, (int)(uintptr_t)(self + 8));
  v27 = v37[0];
  vox::HandlableContainer::end((vox::HandlableContainer::Self *)v37, (int)(uintptr_t)(self + 8));
  v4 = v37[0];
  for ( j = v27; j != v4; j = sub_1904890(v28) )
  {
    v28 = j;
    vox::VoxEngineInternal::ReleaseDatasource((vox::VoxEngineInternal::Self *)self, *(vox::DataObj::Self **)(j + 24));
  }
  v31 = (uint32_t *)(*(self + 10));
  if ( v31 != nullptr )
  {
    for ( k = (uint32_t *)(*(self + 10)); ; k = v23 )
    {
      v7 = (uint32_t *)k[3];
      v32 = v7;
      if ( v7 != nullptr )
      {
        while ( 1 )
        {
          v8 = (uint32_t *)v7[3];
          v33 = v8;
          if ( v8 != nullptr )
          {
            while ( 1 )
            {
              v9 = (uint32_t *)v8[3];
              v34 = v9;
              if ( v9 != nullptr )
              {
                while ( 1 )
                {
                  v10 = (uint32_t *)v9[3];
                  v35 = v10;
                  if ( v10 != nullptr )
                  {
                    while ( 1 )
                    {
                      v11 = (uint32_t *)v10[3];
                      v36 = v11;
                      if ( v11 != nullptr )
                      {
                        while ( 1 )
                        {
                          v12 = (uint32_t *)v11[3];
                          v30 = v12;
                          if ( v12 != nullptr )
                          {
                            while ( 1 )
                            {
                              v13 = (uint32_t *)v12[3];
                              v29 = v13;
                              if ( v13 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v14 = v13[3];
                                  if ( v14 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_long_long_pair_long_long_00a3e4::M_erase(
                                        (int)(uintptr_t)(self + 8),
                                        *(void **)(v14 + 12));
                                      v15 = *(uint32_t *)(v14 + 8);
                                      VoxFreeInternal((void *)v14);
                                      if ( v15 == 0 )
                                        break;
                                      v14 = v15;
                                    }
                                  }
                                  v16 = (uint32_t *)v29[2];
                                  VoxFreeInternal(v29);
                                  if ( v16 == nullptr )
                                    break;
                                  v29 = v16;
                                  v13 = v16;
                                }
                              }
                              v17 = (uint32_t *)v30[2];
                              VoxFreeInternal(v30);
                              if ( v17 == nullptr )
                                break;
                              v30 = v17;
                              v12 = v17;
                            }
                          }
                          v18 = (uint32_t *)v36[2];
                          VoxFreeInternal(v36);
                          if ( v18 == nullptr )
                            break;
                          v36 = v18;
                          v11 = v18;
                        }
                      }
                      v19 = (uint32_t *)v35[2];
                      VoxFreeInternal(v35);
                      if ( v19 == nullptr )
                        break;
                      v35 = v19;
                      v10 = v19;
                    }
                  }
                  v20 = (uint32_t *)v34[2];
                  VoxFreeInternal(v34);
                  if ( v20 == nullptr )
                    break;
                  v34 = v20;
                  v9 = v20;
                }
              }
              v21 = (uint32_t *)v33[2];
              VoxFreeInternal(v33);
              if ( v21 == nullptr )
                break;
              v33 = v21;
              v8 = v21;
            }
          }
          v22 = (uint32_t *)v32[2];
          VoxFreeInternal(v32);
          if ( v22 == nullptr )
            break;
          v32 = v22;
          v7 = v22;
        }
      }
      v23 = (uint32_t *)v31[2];
      VoxFreeInternal(v31);
      if ( v23 == nullptr )
        break;
      v31 = v23;
    }
    v1 = self;
  }
  v1[10] = nullptr;
  v1[13] = nullptr;
  v1[11] = v1 + 9;
  v1[12] = v1 + 9;
  return v1 + 9;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxEngineInternal::Destroy  (binary VA: 0x1037cb0)
// Original: vox::VoxEngineInternal::~VoxEngineInternal
// ----------------------------------------------------------------------------
void vox::VoxEngineInternal::Destroy(vox::VoxEngineInternal::Self *self)
{
  void (***v1)(uint32_t);
  char *v2;
  char *v3;
  uint32_t *v4;
  void **v5;
  void *v6;
  char *v7;
  char *v8;
  vox::VoxEngineInternal::Self **v9;
  vox::VoxEngineInternal::Self *v10;
  void **v11;
  void **v12;

  vox::VoxEngineInternal::ReleaseAllDatasource((void **)self);
  vox::VoxNativeSubDecoder::Clean();
  if ( *((uint32_t *)self + 53) != 0 )
  {
    vox::PriorityBankManager::Destroy(*((vox::PriorityBankManager::Self **)self + 53));
    VoxFreeInternal(*((void **)self + 53));
  }
  if ( *((uint32_t *)self + 54) != 0 )
  {
    vox::GroupManager::Destroy(*((vox::GroupManager::Self **)self + 54));
    VoxFreeInternal(*((void **)self + 54));
  }
  v1 = *((void (****)(uint32_t))self + 170);
  if ( v1 != nullptr )
  {
    (**v1)(*((uint32_t *)self + 170));
    VoxFreeInternal(*((void **)self + 170));
  }
  vox::FileSystemInterface::DestroyInstance();
  v2 = (char *)self + 408;
  while ( 1 )
  {
    v3 = *((char **)self + 102);
    if ( v2 == v3 )
      break;
    while ( 1 )
    {
      do
        v3 = *(char **)v3;
      while ( v2 != v3 );
      v4 = *((uint32_t **)self + 103);
      v11 = (void **)v4[2];
      sub_1901940(v4);
      VoxFreeInternal(v4);
      v5 = v11;
      if ( v11 == nullptr )
        break;
      if ( *v11 != nullptr )
      {
        VoxFreeInternal(*v11);
        v5 = v11;
      }
      v6 = v5[1];
      if ( v6 != nullptr )
      {
        v12 = v5;
        VoxFreeInternal(v6);
        v5 = v12;
      }
      VoxFreeInternal(v5);
      v3 = *((char **)self + 102);
      if ( v2 == v3 )
        goto LABEL_16;
    }
  }
LABEL_16:
  if ( *((uint32_t *)self + 191) != 0 )
  {
    vox::VoxDebugStreamManager::Destroy(*((vox::VoxDebugStreamManager::Self **)self + 191));
    VoxFreeInternal(*((void **)self + 191));
  }
  vox::MiniBusManager::ReleaseInstance();
  vox::VoxEngineInternal::s_voxEngineInternal = 0;
  vox::VoxCallbackManager::Destroy((vox::VoxEngineInternal::Self *)((char *)self + 752));
  v7 = *((char **)self + 102);
  if ( v7 != v2 )
  {
    while ( 1 )
    {
      v8 = *(char **)v7;
      VoxFreeInternal(v7);
      if ( v8 == v2 )
        break;
      v7 = v8;
    }
  }
  vox::Mutex::Destroy((pthread_mutex_t **)self + 55);
  vox::Mutex::Unlock((pthread_mutex_t **)self + 52);
  vox::Mutex::Destroy((pthread_mutex_t **)self + 52);
  vox::Mutex::Unlock((pthread_mutex_t **)self + 49);
  vox::Mutex::Destroy((pthread_mutex_t **)self + 49);
  if ( *((uint32_t *)self + 44) != 0 )
    VoxFreeInternal(*((void **)self + 44));
  vox::HandlableContainer::Destroy((vox::VoxEngineInternal::Self *)((char *)self + 144));
  vox::HandlableContainer::Destroy((vox::VoxEngineInternal::Self *)((char *)self + 112));
  vox::Mutex::Destroy((pthread_mutex_t **)self + 27);
  v9 = *((vox::VoxEngineInternal::Self ***)self + 25);
  if ( v9 != (vox::VoxEngineInternal::Self **)((char *)self + 100) )
  {
    while ( 1 )
    {
      v10 = *v9;
      VoxFreeInternal(v9);
      if ( v10 == (vox::VoxEngineInternal::Self *)((char *)self + 100) )
        break;
      v9 = (vox::VoxEngineInternal::Self **)v10;
    }
  }
  vox::Mutex::Unlock((pthread_mutex_t **)self + 24);
  vox::Mutex::Destroy((pthread_mutex_t **)self + 24);
  vox::Mutex::Unlock((pthread_mutex_t **)self + 21);
  vox::Mutex::Destroy((pthread_mutex_t **)self + 21);
  if ( *((uint32_t *)self + 16) != 0 )
    VoxFreeInternal(*((void **)self + 16));
  vox::HandlableContainer::Destroy((vox::VoxEngineInternal::Self *)((char *)self + 32));
  vox::HandlableContainer::Destroy(self);
}


