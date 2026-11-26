#include "Core/Utils/DecompTypes.h"
#include "vox_MiniBusManager.h"

// ----------------------------------------------------------------------------
// Function: vox::MiniBusManager::Destroy  (binary VA: 0xfdb520)
// Original: vox::MiniBusManager::~MiniBusManager
// ----------------------------------------------------------------------------
void vox::MiniBusManager::Destroy(void ***self)
{
  vox::MiniBusManager::Self *v1;
  void **v2;
  char *v3;
  void **v4;
  void **v5;
  void **v6;
  void **v7;
  void **v8;
  vox::MiniBusManager::Self *v9;
  void **v10;
  void *v11;
  char *v12;
  char *v13;
  void **v14;
  void **v15;
  vox::Mutex::Self *v16;
  int CurThreadId;
  char *v18;
  vox::Mutex::Self *v19;
  vox::Mutex::Self *v20;
  vox::MiniBusManager::Self *v21;
  void **v22;

  v1 = (vox::MiniBusManager::Self *)self;
  *self = (void **)((uint32_t)(uintptr_t)&off_208CC48);
  CurThreadId = vox::VoxThread::GetCurThreadId(v16);
  sub_BA06A0();
  vox::MiniBusManager::s_isActive = 0;
  v19 = (vox::Mutex::Self *)(self + 14);
  vox::Mutex::Lock((vox::Mutex::Self *)(self + 14));
  v2 = *(self + 8);
  v18 = (char *)(self + 8);
  if ( v2 != (void **)(self + 8) )
  {
    do
    {
      if ( v2[2] != nullptr )
        VoxFreeInternal(v2[2]);
      v2 = (void **)*v2;
    }
    while ( self + 8 != (void ***)v2 );
    v2 = *(self + 8);
  }
  if ( v2 != (void **)v18 )
  {
    while ( 1 )
    {
      v3 = (char *)*v2;
      VoxFreeInternal(v2);
      if ( v3 == v18 )
        break;
      v2 = (void **)v3;
    }
    v1 = (vox::MiniBusManager::Self *)self;
  }
  v4 = (void **)((char *)v1 + 24);
  *((uint32_t *)v1 + 8) = (uint32_t)(uintptr_t)(v18);
  *((uint32_t *)v1 + 9) = (uint32_t)(uintptr_t)(v18);
  vox::Mutex::Unlock(v19);
  v20 = (vox::Mutex::Self *)((vox::MiniBusManager::Self *)((char *)v1 + 52));
  vox::Mutex::Lock((vox::MiniBusManager::Self *)((char *)v1 + 52));
  v5 = *((void ***)v1 + 6);
  if ( v5 != (void **)((char *)v1 + 24) )
  {
    do
    {
      if ( v5[2] != nullptr )
        VoxFreeInternal(v5[2]);
      v5 = (void **)*v5;
    }
    while ( v4 != v5 );
    v5 = *((void ***)v1 + 6);
  }
  if ( v5 != v4 )
  {
    v21 = v1;
    while ( 1 )
    {
      v6 = (void **)*v5;
      VoxFreeInternal(v5);
      if ( v6 == v4 )
        break;
      v5 = v6;
    }
    v1 = v21;
  }
  v7 = *((void ***)v1 + 3);
  v8 = *((void ***)v1 + 4);
  *((uint32_t *)v1 + 6) = (uint32_t)(uintptr_t)(v4);
  *((uint32_t *)v1 + 7) = (uint32_t)(uintptr_t)(v4);
  if ( v7 != v8 )
  {
    v22 = v4;
    v9 = v1;
    v10 = v8;
    do
    {
      if ( *v7 != nullptr )
      {
        (**(void (***)(void *, int))*v7)(*v7, CurThreadId);
        VoxFreeInternal(*v7);
      }
      ++v7;
    }
    while ( v10 != v7 );
    v1 = v9;
    v4 = v22;
    v7 = *((void ***)v1 + 3);
  }
  v11 = *((void **)v1 + 11);
  *((uint32_t *)v1 + 4) = (uint32_t)(uintptr_t)(v7);
  if ( v11 != nullptr )
  {
    VoxFreeInternal(v11);
    *((uint32_t *)v1 + 11) = 0;
  }
  vox::MiniAuxBus::Clean();
  vox::Mutex::Unlock(v20);
  sub_BA06B0();
  vox::Mutex::Destroy(v19);
  vox::Mutex::Destroy(v20);
  v12 = *((char **)v1 + 8);
  if ( v12 != v18 )
  {
    while ( 1 )
    {
      v13 = *(char **)v12;
      VoxFreeInternal(v12);
      if ( v13 == v18 )
        break;
      v12 = v13;
    }
  }
  v14 = *((void ***)v1 + 6);
  if ( v14 != v4 )
  {
    while ( 1 )
    {
      v15 = (void **)*v14;
      VoxFreeInternal(v14);
      if ( v15 == v4 )
        break;
      v14 = v15;
    }
  }
  if ( *((uint32_t *)v1 + 3) != 0 )
    VoxFreeInternal(*((void **)v1 + 3));
}

// ----------------------------------------------------------------------------
// Function: vox::MiniBusManager::Destroy_eafdb740  (binary VA: 0xfdb740)
// Original: vox::MiniBusManager::~MiniBusManager
// ----------------------------------------------------------------------------
void vox::MiniBusManager::Destroy_eafdb740(void ***self)
{
  vox::MiniBusManager::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: vox::MiniBusManager::ReleaseInstance  (binary VA: 0xfdbee0)
// Original: vox::MiniBusManager::ReleaseInstance
// ----------------------------------------------------------------------------
void vox::MiniBusManager::ReleaseInstance()
{
  int CurThreadId;
  vox::VoxThread::Self *v1;

  CurThreadId = vox::VoxThread::GetCurThreadId(v1);
  sub_BA06A0();
  if ( vox::MiniBusManager::s_pInstance != 0 )
  {
    (*(void (**)(uint32_t, int))*(uintptr_t *)(vox::MiniBusManager::s_pInstance))(vox::MiniBusManager::s_pInstance, CurThreadId);
    VoxFreeInternal(vox::MiniBusManager::s_pInstance);
  }
  vox::MiniBusManager::s_pInstance = 0;
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::MiniBusManager::Construct  (binary VA: 0xfdbf60)
// Original: vox::MiniBusManager::MiniBusManager
// ----------------------------------------------------------------------------
vox::MiniBusManager::Self * vox::MiniBusManager::Construct(vox::MiniBusManager::Self *self)
{
  vox::MiniAuxBus::Self *v1;
  vox::MiniAuxBus::Self **v2;
  int v3;
  vox::MiniAuxBus::Self *v4;
  vox::MiniAuxBus::Self **v5;
  int v6;
  unsigned int v8;
  unsigned int v9;
  int v10;
  vox::MiniAuxBus::Self **v11;
  vox::MiniAuxBus::Self **v12;
  vox::MiniAuxBus::Self **v13;
  vox::MiniAuxBus::Self **v14;
  uint32_t *v15;
  void *v16;
  unsigned int v17;
  vox::MiniAuxBus::Self **v18;
  vox::MiniAuxBus::Self **v19;
  vox::MiniAuxBus::Self **v20;
  vox::MiniAuxBus::Self **v21;
  char *v22;
  vox::MiniAuxBus::Self **v23;
  vox::MiniAuxBus::Self **v24;
  int v25;
  int v26;
  bool v27; // cc
  size_t v28;
  vox::VoxThread::Self *v29;
  int v30;
  int CurThreadId;
  unsigned int v32;
  vox::MiniAuxBus::Self **v33;
  char *v34;
  int v35;
  size_t v36;
  size_t v37;
  vox::MiniAuxBus::Self **v38;
  vox::MiniAuxBus::Self **v39;
  unsigned int v40;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208CC48);
  *((uint32_t *)self + 1) = 44100;
  *((uint32_t *)self + 2) = 1;
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)((char *)self + 24);
  *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)((char *)self + 24);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)((char *)self + 32);
  *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)((char *)self + 32);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 10) = 0;
  vox::Mutex::Construct((vox::MiniBusManager::Self *)((char *)self + 52));
  vox::Mutex::Construct((vox::MiniBusManager::Self *)((char *)self + 56));
  CurThreadId = vox::VoxThread::GetCurThreadId(v29);
  sub_BA06A0("MiniBusManager::MiniBusManager", CurThreadId);
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  v1 = (vox::MiniAuxBus::Self *)VoxAllocInternal(
                            0x40u,
                            0,
                            (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_minibus_system.cpp"),
                            (int)(uintptr_t)("MiniBusManager"),
                            327);
  vox::MiniAuxBus::MiniAuxBus(v1);
  if ( v1 == nullptr )
    return (sub_BA06B0("MiniBusManager::MiniBusManager", CurThreadId), (vox::MiniBusManager::Self *)0);
  v2 = *((vox::MiniAuxBus::Self ***)self + 4);
  if ( v2 == *((vox::MiniAuxBus::Self ***)self + 5) )
  {
    v8 = ((int)(uintptr_t)(v2) - *((uint32_t *)self + 3)) >> 2;
    v36 = 4;
    v32 = v8;
    if ( v8 != 0 )
    {
      v9 = 2 * v8;
      if ( v8 <= 2 * v8 )
      {
        v26 = 8 * v8;
        v27 = v9 <= 0x3FFFFFFF;
        v28 = 0xFFFFFFFC;
        if ( v27 )
          v28 = v26;
        v36 = v28;
        v10 = VoxAllocInternal(v28, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
        goto LABEL_17;
      }
      v36 = 0xFFFFFFFC;
    }
    v10 = VoxAllocInternal(v36, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
LABEL_17:
    v38 = (vox::MiniAuxBus::Self **)v10;
    v40 = v10 + 4;
    v11 = (vox::MiniAuxBus::Self **)(v10 + 4 * v32);
    if ( v11 != nullptr )
      *v11 = v1;
    v12 = *((vox::MiniAuxBus::Self ***)self + 3);
    v33 = v12;
    if ( v2 != v12 )
    {
      v13 = v38;
      do
      {
        if ( v13 != nullptr )
          *v13 = *v12;
        ++v12;
        ++v13;
      }
      while ( v2 != v12 );
      v40 = (unsigned int)(uintptr_t)(&v38[((unsigned int)((char *)v2 - (char *)(v33 + 1)) >> 2) + 2]);
    }
    v34 = *((char **)self + 4);
    if ( v2 != (vox::MiniAuxBus::Self **)v34 )
    {
      v14 = v2;
      v15 = (uint32_t *)v40;
      do
      {
        if ( v15 != nullptr )
          *v15 = (uint32_t)(uintptr_t)(*v14);
        ++v14;
        ++v15;
      }
      while ( v34 != (char *)v14 );
      v40 += 4 * ((unsigned int)(v34 - (char *)(v2 + 1)) >> 2) + 4;
    }
    v16 = *((void **)self + 3);
    if ( v16 != nullptr )
      VoxFreeInternal(v16);
    *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v38);
    *((uint32_t *)self + 4) = v40;
    *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)((char *)v38 + v36);
    goto LABEL_6;
  }
  v3 = 0;
  if ( v2 != nullptr )
  {
    *v2 = v1;
    v3 = *((uint32_t *)self + 4);
  }
  *((uint32_t *)self + 4) = v3 + 4;
LABEL_6:
  v4 = (vox::MiniAuxBus::Self *)VoxAllocInternal(
                            0x40u,
                            0,
                            (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_minibus_system.cpp"),
                            (int)(uintptr_t)("MiniBusManager"),
                            338);
  vox::MiniAuxBus::MiniAuxBus(v4);
  if ( v4 != nullptr )
  {
    v5 = *((vox::MiniAuxBus::Self ***)self + 4);
    if ( v5 == *((vox::MiniAuxBus::Self ***)self + 5) )
    {
      v17 = ((int)(uintptr_t)(v5) - *((uint32_t *)self + 3)) >> 2;
      v37 = 4;
      if ( v17 != 0 )
      {
        v37 = 0xFFFFFFFC;
        if ( v17 <= 2 * v17 )
        {
          v25 = 8 * v17;
          if ( 2 * v17 > 0x3FFFFFFF )
            v25 = -4;
          v37 = v25;
        }
      }
      v30 = ((int)(uintptr_t)(v5) - *((uint32_t *)self + 3)) >> 2;
      v35 = VoxAllocInternal(v37, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      v18 = (vox::MiniAuxBus::Self **)(v35 + 4 * v30);
      if ( v18 != nullptr )
        *v18 = v4;
      v19 = *((vox::MiniAuxBus::Self ***)self + 3);
      v20 = (vox::MiniAuxBus::Self **)v35;
      if ( v5 != v19 )
      {
        v21 = *((vox::MiniAuxBus::Self ***)self + 3);
        do
        {
          if ( v20 != nullptr )
            *v20 = *v21;
          ++v21;
          ++v20;
        }
        while ( v5 != v21 );
        v20 = (vox::MiniAuxBus::Self **)(v35 + 4 * ((unsigned int)((char *)v5 - (char *)(v19 + 1)) >> 2) + 4);
      }
      v22 = *((char **)self + 4);
      v23 = v20 + 1;
      v39 = v23;
      if ( v5 != (vox::MiniAuxBus::Self **)v22 )
      {
        v24 = v5;
        do
        {
          if ( v23 != nullptr )
            *v23 = *v24;
          ++v24;
          ++v23;
        }
        while ( v22 != (char *)v24 );
        v39 += ((unsigned int)(v22 - (char *)(v5 + 1)) >> 2) + 1;
      }
      if ( *((uint32_t *)self + 3) != 0 )
        VoxFreeInternal(*((void **)self + 3));
      *((uint32_t *)self + 3) = v35;
      *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(v39);
      *((uint32_t *)self + 5) = v37 + v35;
    }
    else
    {
      v6 = 0;
      if ( v5 != nullptr )
      {
        *v5 = v4;
        v6 = *((uint32_t *)self + 4);
      }
      *((uint32_t *)self + 4) = v6 + 4;
    }
    vox::MiniBusManager::s_isActive = 1;
  }
  return (sub_BA06B0("MiniBusManager::MiniBusManager", CurThreadId), (vox::MiniBusManager::Self *)0);
}

// ----------------------------------------------------------------------------
// Function: vox::MiniBusManager::GetInstance  (binary VA: 0xfdc390)
// Original: vox::MiniBusManager::GetInstance
// ----------------------------------------------------------------------------
vox::MiniBusManager::Self * vox::MiniBusManager::GetInstance()
{
  vox::MiniBusManager::Self *v0;
  vox::VoxThread::Self *v2;
  vox::MiniBusManager::Self *v3;

  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  v0 = (vox::MiniBusManager::Self *)vox::MiniBusManager::s_pInstance;
  if ( vox::MiniBusManager::s_pInstance == 0 )
  {
    v3 = (vox::MiniBusManager::Self *)VoxAllocInternal(
                                  0x3Cu,
                                  0,
                                  (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_minibus_system.cpp"),
                                  (int)(uintptr_t)("GetInstance"),
                                  287);
    vox::MiniBusManager::Construct(v3);
    vox::MiniBusManager::s_pInstance = (uintptr_t)(uintptr_t)(v3);
    if ( vox::MiniBusManager::s_isActive != 0 )
    {
      v0 = v3;
    }
    else
    {
      if ( v3 != nullptr )
      {
        (**(void (***)(vox::MiniBusManager::Self *))v3)(v3);
        VoxFreeInternal(vox::MiniBusManager::s_pInstance);
      }
      vox::MiniBusManager::s_pInstance = 0;
    }
  }
  sub_BA06B0();
  return v0;
}

// ----------------------------------------------------------------------------
// Function: vox::MiniBusManager::AttachDataGeneratorToBus  (binary VA: 0xfdc490)
// Original: vox::MiniBusManager::AttachDataGeneratorToBus
// ----------------------------------------------------------------------------
void vox::MiniBusManager::AttachDataGeneratorToBus(int a1, int a2, int a3)
{
  uint32_t *v3;
  int v4;
  vox::VoxThread::Self *v5;
  uint32_t *v6;

  vox::VoxThread::GetCurThreadId(v5);
  sub_BA06A0();
  vox::Mutex::Lock((vox::Mutex::Self *)(a1 + 56));
  if ( vox::MiniBusManager::s_isActive != 0 )
  {
    v3 = (uint32_t *)VoxAllocInternal(
                     8u,
                     0,
                     (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_minibus_system.cpp"),
                     (int)(uintptr_t)("AttachDataGeneratorToBus"),
                     431);
    *v3 = a2;
    v3[1] = a3;
    v6 = v3;
    v4 = VoxAllocInternal(0xCu, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    if ( v4 != -8 )
      *(uint32_t *)(v4 + 8) = (uint32_t)(uintptr_t)(v6);
    sub_1901920(v4, a1 + 32);
  }
  vox::Mutex::Unlock((vox::Mutex::Self *)(a1 + 56));
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::MiniBusManager::DetachDataGeneratorFromBus  (binary VA: 0xfdc5b0)
// Original: vox::MiniBusManager::DetachDataGeneratorFromBus
// ----------------------------------------------------------------------------
void vox::MiniBusManager::DetachDataGeneratorFromBus(uint32_t *a1, int a2)
{
  vox::Mutex::Self *v2;
  uint32_t *v3;
  uint32_t *v4;
  vox::Mutex::Self *v5;
  vox::Mutex::Self *v6;

  vox::VoxThread::GetCurThreadId(v6);
  sub_BA06A0();
  vox::Mutex::Lock((vox::Mutex::Self *)(a1 + 14));
  v2 = (vox::Mutex::Self *)(a1 + 14);
  if ( vox::MiniBusManager::s_isActive != 0 )
  {
    v3 = (uint32_t *)a1[8];
    if ( v3 != a1 + 8 )
    {
      while ( a2 != *(uint32_t *)(v3[2] + 4) )
      {
        v3 = (uint32_t *)*v3;
        if ( a1 + 8 == v3 )
          goto LABEL_7;
      }
      VoxFreeInternal((void *)v3[2]);
      sub_1901940(v3);
      VoxFreeInternal(v3);
      v2 = (vox::Mutex::Self *)(a1 + 14);
    }
LABEL_7:
    vox::Mutex::Unlock(v2);
    vox::Mutex::Lock((vox::Mutex::Self *)(a1 + 13));
    v4 = (uint32_t *)a1[6];
    v5 = (vox::Mutex::Self *)(a1 + 13);
    if ( v4 != a1 + 6 )
    {
      while ( a2 != *(uint32_t *)(v4[2] + 4) )
      {
        v4 = (uint32_t *)*v4;
        if ( a1 + 6 == v4 )
          goto LABEL_12;
      }
      VoxFreeInternal((void *)v4[2]);
      sub_1901940(v4);
      VoxFreeInternal(v4);
      v5 = (vox::Mutex::Self *)(a1 + 13);
    }
LABEL_12:
    vox::Mutex::Unlock(v5);
  }
  else
  {
    vox::Mutex::Unlock((vox::Mutex::Self *)(a1 + 14));
  }
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::MiniBusManager::AttachDSP  (binary VA: 0xfdc6d0)
// Original: vox::MiniBusManager::AttachDSP
// ----------------------------------------------------------------------------
int vox::MiniBusManager::AttachDSP(vox::MiniAuxBus::Self ***self, char *a2, vox::CustomDSP::Self *a3)
{
  char *s1;
  uint8_t v5;

  vox::VoxThread::GetCurThreadId((vox::VoxThread::Self *)s1);
  sub_BA06A0();
  vox::Mutex::Lock((vox::Mutex::Self *)(self + 13));
  v5 = 0;
  if ( vox::MiniBusManager::s_isActive != 0 )
  {
    if ( strcasecmp(a2, "AUX1") == 0 )
    {
      if ( a3 == nullptr || a3 != (vox::CustomDSP::Self *)vox::MiniAuxBus::GetDSP((*(self + 3))[1]) )
      {
        vox::MiniAuxBus::SetDSP(**(self + 3), a3);
        v5 = 1;
      }
    }
    else if ( strcasecmp(a2, "AUX2") == 0
           && (a3 == nullptr || a3 != (vox::CustomDSP::Self *)vox::MiniAuxBus::GetDSP(**(self + 3))) )
    {
      vox::MiniAuxBus::SetDSP((*(self + 3))[1], a3);
      v5 = 1;
    }
  }
  vox::Mutex::Unlock((vox::Mutex::Self *)(self + 13));
  sub_BA06B0();
  return v5;
}

// ----------------------------------------------------------------------------
// Function: vox::MiniBusManager::InitializeBusBuffers  (binary VA: 0xfdc810)
// Original: vox::MiniBusManager::_InitializeBusBuffers
// ----------------------------------------------------------------------------
int vox::MiniBusManager::InitializeBusBuffers(vox::MiniBusManager::Self *self, int a2)
{
  char *v2;
  int v3;
  vox::VoxThread::Self *s;

  vox::VoxThread::GetCurThreadId(s);
  sub_BA06A0();
  v2 = *((char **)self + 11);
  if ( a2 > *((uint32_t *)self + 10) )
  {
    if ( v2 != nullptr )
      VoxFreeInternal(*((void **)self + 11));
    v2 = (char *)VoxAllocInternal(
                   16 * a2,
                   0,
                   (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_minibus_system.cpp"),
                   (int)(uintptr_t)("_InitializeBusBuffers"),
                   654);
    *((uint32_t *)self + 11) = (uint32_t)(uintptr_t)(v2);
    if ( v2 == nullptr )
    {
      *((uint32_t *)self + 10) = 0;
      v3 = 0;
      goto LABEL_7;
    }
    *((uint32_t *)self + 10) = a2;
    *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)(&v2[8 * a2]);
  }
  memset(v2, 0, 8 * a2);
  v3 = 1;
  memset(*((void **)self + 12), 0, 8 * a2);
LABEL_7:
  sub_BA06B0();
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::MiniBusManager::UpdateDataGeneratorsList  (binary VA: 0xfdc920)
// Original: vox::MiniBusManager::UpdateDataGeneratorsList
// ----------------------------------------------------------------------------
void vox::MiniBusManager::UpdateDataGeneratorsList(vox::MiniBusManager::Self *self)
{
  void **v1;
  char *v2;
  char *v3;
  uint32_t *v4;
  uint32_t *v5;
  int v6;
  int v7;
  char *v8;
  vox::VoxThread::Self *v9;
  void **v10;

  vox::VoxThread::GetCurThreadId(v9);
  sub_BA06A0();
  vox::Mutex::Lock((vox::MiniBusManager::Self *)((char *)self + 56));
  v1 = *((void ***)self + 8);
  v10 = (void **)((char *)self + 32);
  if ( v1 != (void **)((char *)self + 32) )
  {
    v2 = (char *)self + 24;
    while ( 1 )
    {
      v3 = *((char **)self + 6);
      if ( v3 == v2 )
        goto LABEL_8;
      v4 = (uint32_t *)(v1[2]);
      v5 = *((uint32_t **)v3 + 2);
      v6 = v4[1];
      if ( v6 != v5[1] )
        break;
LABEL_18:
      *v5 = *v4;
      if ( v1[2] != nullptr )
        VoxFreeInternal(v1[2]);
LABEL_11:
      v1 = (void **)*v1;
      if ( v10 == v1 )
      {
        v1 = *((void ***)self + 8);
        goto LABEL_13;
      }
    }
    while ( 1 )
    {
      v3 = *(char **)v3;
      if ( v2 == v3 )
        break;
      v5 = *((uint32_t **)v3 + 2);
      if ( v5[1] == v6 )
        goto LABEL_18;
    }
LABEL_8:
    v7 = VoxAllocInternal(0xCu, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    if ( v7 != -8 )
      *(uint32_t *)(v7 + 8) = (uint32_t)(uintptr_t)(v1[2]);
    sub_1901920(v7, v2);
    goto LABEL_11;
  }
LABEL_13:
  if ( v10 != v1 )
  {
    while ( 1 )
    {
      v8 = (char *)*v1;
      VoxFreeInternal(v1);
      if ( v10 == (void **)v8 )
        break;
      v1 = (void **)v8;
    }
  }
  *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(v10);
  *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(v10);
  vox::Mutex::Unlock((vox::MiniBusManager::Self *)((char *)self + 56));
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::MiniBusManager::FillBuffer  (binary VA: 0xfdca90)
// Original: vox::MiniBusManager::FillBuffer
// ----------------------------------------------------------------------------
void vox::MiniBusManager::FillBuffer(vox::MiniAuxBus::Self ***self, int *a2, int a3)
{
  vox::MiniAuxBus::Self ***v3;
  vox::Mutex::Self *v4;
  char *v5;
  char *v6;
  int *v7;
  int v8;
  vox::Mutex::Self *v9;
  float v10;

  v3 = self;
  vox::VoxThread::GetCurThreadId(v9);
  v4 = (vox::Mutex::Self *)(self + 13);
  sub_BA06A0();
  vox::Mutex::Lock((vox::Mutex::Self *)(self + 13));
  if ( vox::MiniBusManager::s_isActive == 0 )
    goto LABEL_15;
  vox::MiniBusManager::UpdateDataGeneratorsList((vox::MiniBusManager::Self *)self);
  v10 = (float)a3 / (float)(int)(uintptr_t)(*(self + 1));
  vox::MiniAuxBus::UpdateVolumes(**(self + 3), v10);
  vox::MiniAuxBus::UpdateVolumes((*(self + 3))[1], v10);
  if ( (uint8_t)vox::MiniBusManager::InitializeBusBuffers((vox::MiniBusManager::Self *)self, a3) == 0 )
    goto LABEL_15;
  if ( *(self + 6) == (vox::MiniAuxBus::Self **)(self + 6) )
    goto LABEL_12;
  v5 = (char *)*(self + 6);
  v6 = (char *)(self + 6);
  do
  {
    while ( 1 )
    {
      v7 = *((int **)v5 + 2);
      v8 = *v7;
      if ( *v7 != 2 )
        break;
      G4_VCALL<void>(v7[1], 8, a2, a3, *(self + 1));
LABEL_7:
      v5 = *(char **)v5;
      if ( v6 == v5 )
        goto LABEL_11;
    }
    if ( v8 != 0 )
    {
      if ( v8 == 1 )
        G4_VCALL<void>(v7[1], 8, *(self + 12), a3, *(self + 1));
      goto LABEL_7;
    }
    G4_VCALL<void>(v7[1], 8, *(self + 11), a3, *(self + 1));
    v5 = *(char **)v5;
  }
  while ( v6 != v5 );
LABEL_11:
  v3 = self;
  v4 = (vox::Mutex::Self *)(self + 13);
LABEL_12:
  if ( v3[2] == (vox::MiniAuxBus::Self **)((char *)&dword_0 + 1) )
    vox::MiniAuxBus::FillBuffer(*v3[3], (int *)v3[11], a2, a3);
  else
    vox::MiniAuxBus::FillBuffer(*v3[3], (int *)v3[11], (int *)v3[12], a3);
  vox::MiniAuxBus::FillBuffer(v3[3][1], (int *)v3[12], a2, a3);
LABEL_15:
  vox::Mutex::Unlock(v4);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::MiniBusManager::SetBusRoutingVolumeChange  (binary VA: 0xfdcc90)
// Original: vox::MiniBusManager::SetBusRoutingVolumeChange
// ----------------------------------------------------------------------------
void vox::MiniBusManager::SetBusRoutingVolumeChange(int a1, int a2)
{
  int v2;
  char *s1;
  char *v4;
  char *v5;
  char *v6;

  vox::VoxThread::GetCurThreadId((vox::VoxThread::Self *)s1);
  sub_BA06A0();
  vox::Mutex::Lock((vox::Mutex::Self *)(a1 + 52));
  if ( vox::MiniBusManager::s_isActive == 0 )
    goto LABEL_8;
  v2 = *(uint32_t *)(a2 + 8);
  switch ( v2 )
  {
    case 1:
      v6 = *(char **)a2;
      if ( strcasecmp(*(const char **)a2, "AUX1") != 0 )
      {
        if ( strcasecmp(v6, "AUX2") != 0 )
          break;
        goto LABEL_12;
      }
LABEL_17:
      vox::MiniBus::SetVolume(**(uint32_t **)(a1 + 12), 1, *(uint32_t *)(a2 + 16), *(uint32_t *)(a2 + 20));
      break;
    case 2:
      v5 = *(char **)a2;
      if ( strcasecmp(*(const char **)a2, "AUX1") != 0 )
      {
        if ( strcasecmp(v5, "AUX2") != 0 )
          break;
        vox::MiniBus::SetVolume(*(uint32_t *)(*(uint32_t *)(a1 + 12) + 4), 0, *(uint32_t *)(a2 + 12), *(uint32_t *)(a2 + 20));
LABEL_12:
        vox::MiniBus::SetVolume(*(uint32_t *)(*(uint32_t *)(a1 + 12) + 4), 1, *(uint32_t *)(a2 + 16), *(uint32_t *)(a2 + 20));
        break;
      }
      vox::MiniBus::SetVolume(**(uint32_t **)(a1 + 12), 0, *(uint32_t *)(a2 + 12), *(uint32_t *)(a2 + 20));
      goto LABEL_17;
    case 0:
      v4 = *(char **)a2;
      if ( strcasecmp(*(const char **)a2, "AUX1") == 0 )
      {
        vox::MiniBus::SetVolume(**(uint32_t **)(a1 + 12), 0, *(uint32_t *)(a2 + 12), *(uint32_t *)(a2 + 20));
      }
      else if ( strcasecmp(v4, "AUX2") == 0 )
      {
        vox::MiniBus::SetVolume(*(uint32_t *)(*(uint32_t *)(a1 + 12) + 4), 0, *(uint32_t *)(a2 + 12), *(uint32_t *)(a2 + 20));
      }
      break;
    default:
      break;
  }
LABEL_8:
  vox::Mutex::Unlock((vox::Mutex::Self *)(a1 + 52));
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::MiniBusManager::SetMixingSampleRate  (binary VA: 0xfdcef0)
// Original: vox::MiniBusManager::SetMixingSampleRate
// ----------------------------------------------------------------------------
void vox::MiniBusManager::SetMixingSampleRate(vox::MiniBusManager::Self *self, int a2)
{
  vox::Mutex::Self *v2;

  vox::VoxThread::GetCurThreadId(v2);
  sub_BA06A0();
  vox::Mutex::Lock((vox::MiniBusManager::Self *)((char *)self + 52));
  if ( vox::MiniBusManager::s_isActive != 0 )
  {
    *((uint32_t *)self + 1) = a2;
    vox::MiniBus::s_mixingSampleRate = a2;
  }
  vox::Mutex::Unlock((vox::MiniBusManager::Self *)((char *)self + 52));
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::MiniBusManager::Serialize  (binary VA: 0xfdcf90)
// Original: vox::MiniBusManager::Serialize
// ----------------------------------------------------------------------------
int vox::MiniBusManager::Serialize(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint8_t *v8;
  int v9;
  int v10;
  int v11;
  long double Volume; // fst7
  uint8_t *v13;
  int v14;
  long double v15; // fst7
  uint8_t *v16;
  int v17;
  uint8_t *v18;
  int v19;
  uint32_t *v20;
  size_t *v21;
  const void *v22;
  uint32_t *v23;
  void *v24;
  int v25;
  uint32_t *v26;
  uint32_t *v27;
  uint32_t *v28;
  uint32_t *v29;
  uint32_t *v30;
  uint8_t *v31;
  int v32;
  void *v33;
  int v34;
  int v35;
  int v36;
  uint8_t *v37;
  uint8_t *v38;
  long double v39; // fst7
  uint8_t *v40;
  int v41;
  long double v42; // fst7
  uint8_t *v43;
  int v44;
  uint8_t *v45;
  int v46;
  uint32_t *v47;
  size_t *v48;
  const void *v49;
  uint32_t *v50;
  void *v51;
  int v52;
  uint32_t *v53;
  uint32_t *v54;
  uint32_t *v55;
  uint32_t *v56;
  uint32_t *v57;
  uint8_t *v58;
  void *v59;
  int v60;
  void *v61;
  size_t *v63;
  const void *v64;
  size_t *v65;
  const void *v66;
  uint32_t *v67;
  uint8_t *v68;
  int v69;
  uint8_t *v70;
  int v71;
  typedef void *_g4_t_v72;
  typedef char *_g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef uint8_t *_g4_t_v76;
  typedef int _g4_t_v77;
  typedef uint8_t *_g4_t_v78;
  typedef size_t *_g4_t_v79;
  typedef void *_g4_t_v80;
  typedef uint8_t *_g4_t_v81;
  typedef int _g4_t_v82;
  typedef uint8_t *_g4_t_v83;
  typedef size_t *_g4_t_v84;
  typedef void *_g4_t_v85;
  typedef uint8_t *_g4_t_v86;
  typedef size_t *_g4_t_v87;
  typedef uint8_t *_g4_t_v88;
  typedef size_t *_g4_t_v89;
  typedef const void *_g4_t_v90;
  typedef const void *_g4_t_v91;
  typedef int _g4_t_DSP;
  typedef size_t _g4_t_v93;
  typedef size_t _g4_t_v94;
  typedef int _g4_t_v95;
  typedef uint8_t *_g4_t_v96;
  typedef int _g4_t_v97;
  typedef size_t _g4_t_v98;
  typedef size_t _g4_t_v99;
  typedef uint8_t *_g4_t_v100;
  typedef float _g4_t_v101;
  typedef float _g4_t_v102;
  typedef float _g4_t_v103;
  typedef float _g4_t_v104;
  typedef int16_t _g4_t_v105;
  typedef uint32_t _g4_t_v106[4];
  typedef uint32_t _g4_t_v107[4];
  typedef uint32_t *_g4_t_v108;
  typedef uint32_t *_g4_t_v109;
  typedef uint32_t *_g4_t_v110;
  typedef uint32_t *_g4_t_v111;
  typedef int _g4_t_v112;
  typedef int (**_g4_t_v113)(int);
  typedef int _g4_t_v114;
  typedef int (**_g4_t_v115)(int);
  typedef uint32_t _g4_t_v116[3];
  typedef uint8_t *_g4_t_v117;
  typedef uint8_t *_g4_t_v118;
  typedef uint8_t *_g4_t_v119;
  typedef int _g4_t_v120;
  typedef uint32_t _g4_t_v121[2];
  typedef uint32_t *_g4_t_v122;
  typedef uint32_t _g4_t_v123[34];
  typedef uint32_t *_g4_t_v124;
  typedef uint32_t **_g4_t_v125;
  typedef uint32_t *_g4_t_v126;
  typedef uint32_t **_g4_t_v127;
  enum : size_t {
    _g4_s0 = 432u,
    _g4_s1 = (0u + sizeof(_g4_t_v72)) > _g4_s0 ? (0u + sizeof(_g4_t_v72)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v73)) > _g4_s1 ? (8u + sizeof(_g4_t_v73)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v74)) > _g4_s2 ? (16u + sizeof(_g4_t_v74)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v75)) > _g4_s3 ? (16u + sizeof(_g4_t_v75)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v76)) > _g4_s4 ? (16u + sizeof(_g4_t_v76)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v77)) > _g4_s5 ? (16u + sizeof(_g4_t_v77)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v78)) > _g4_s6 ? (16u + sizeof(_g4_t_v78)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v79)) > _g4_s7 ? (16u + sizeof(_g4_t_v79)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v80)) > _g4_s8 ? (16u + sizeof(_g4_t_v80)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v81)) > _g4_s9 ? (16u + sizeof(_g4_t_v81)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v82)) > _g4_s10 ? (16u + sizeof(_g4_t_v82)) : _g4_s10,
    _g4_s12 = (16u + sizeof(_g4_t_v83)) > _g4_s11 ? (16u + sizeof(_g4_t_v83)) : _g4_s11,
    _g4_s13 = (16u + sizeof(_g4_t_v84)) > _g4_s12 ? (16u + sizeof(_g4_t_v84)) : _g4_s12,
    _g4_s14 = (16u + sizeof(_g4_t_v85)) > _g4_s13 ? (16u + sizeof(_g4_t_v85)) : _g4_s13,
    _g4_s15 = (16u + sizeof(_g4_t_v86)) > _g4_s14 ? (16u + sizeof(_g4_t_v86)) : _g4_s14,
    _g4_s16 = (16u + sizeof(_g4_t_v87)) > _g4_s15 ? (16u + sizeof(_g4_t_v87)) : _g4_s15,
    _g4_s17 = (16u + sizeof(_g4_t_v88)) > _g4_s16 ? (16u + sizeof(_g4_t_v88)) : _g4_s16,
    _g4_s18 = (16u + sizeof(_g4_t_v89)) > _g4_s17 ? (16u + sizeof(_g4_t_v89)) : _g4_s17,
    _g4_s19 = (16u + sizeof(_g4_t_v90)) > _g4_s18 ? (16u + sizeof(_g4_t_v90)) : _g4_s18,
    _g4_s20 = (16u + sizeof(_g4_t_v91)) > _g4_s19 ? (16u + sizeof(_g4_t_v91)) : _g4_s19,
    _g4_s21 = (40u + sizeof(_g4_t_DSP)) > _g4_s20 ? (40u + sizeof(_g4_t_DSP)) : _g4_s20,
    _g4_s22 = (40u + sizeof(_g4_t_v93)) > _g4_s21 ? (40u + sizeof(_g4_t_v93)) : _g4_s21,
    _g4_s23 = (40u + sizeof(_g4_t_v94)) > _g4_s22 ? (40u + sizeof(_g4_t_v94)) : _g4_s22,
    _g4_s24 = (48u + sizeof(_g4_t_v95)) > _g4_s23 ? (48u + sizeof(_g4_t_v95)) : _g4_s23,
    _g4_s25 = (68u + sizeof(_g4_t_v96)) > _g4_s24 ? (68u + sizeof(_g4_t_v96)) : _g4_s24,
    _g4_s26 = (72u + sizeof(_g4_t_v97)) > _g4_s25 ? (72u + sizeof(_g4_t_v97)) : _g4_s25,
    _g4_s27 = (72u + sizeof(_g4_t_v98)) > _g4_s26 ? (72u + sizeof(_g4_t_v98)) : _g4_s26,
    _g4_s28 = (72u + sizeof(_g4_t_v99)) > _g4_s27 ? (72u + sizeof(_g4_t_v99)) : _g4_s27,
    _g4_s29 = (76u + sizeof(_g4_t_v100)) > _g4_s28 ? (76u + sizeof(_g4_t_v100)) : _g4_s28,
    _g4_s30 = (76u + sizeof(_g4_t_v101)) > _g4_s29 ? (76u + sizeof(_g4_t_v101)) : _g4_s29,
    _g4_s31 = (76u + sizeof(_g4_t_v102)) > _g4_s30 ? (76u + sizeof(_g4_t_v102)) : _g4_s30,
    _g4_s32 = (76u + sizeof(_g4_t_v103)) > _g4_s31 ? (76u + sizeof(_g4_t_v103)) : _g4_s31,
    _g4_s33 = (76u + sizeof(_g4_t_v104)) > _g4_s32 ? (76u + sizeof(_g4_t_v104)) : _g4_s32,
    _g4_s34 = (82u + sizeof(_g4_t_v105)) > _g4_s33 ? (82u + sizeof(_g4_t_v105)) : _g4_s33,
    _g4_s35 = (96u + sizeof(_g4_t_v106)) > _g4_s34 ? (96u + sizeof(_g4_t_v106)) : _g4_s34,
    _g4_s36 = (112u + sizeof(_g4_t_v107)) > _g4_s35 ? (112u + sizeof(_g4_t_v107)) : _g4_s35,
    _g4_s37 = (128u + sizeof(_g4_t_v108)) > _g4_s36 ? (128u + sizeof(_g4_t_v108)) : _g4_s36,
    _g4_s38 = (132u + sizeof(_g4_t_v109)) > _g4_s37 ? (132u + sizeof(_g4_t_v109)) : _g4_s37,
    _g4_s39 = (136u + sizeof(_g4_t_v110)) > _g4_s38 ? (136u + sizeof(_g4_t_v110)) : _g4_s38,
    _g4_s40 = (140u + sizeof(_g4_t_v111)) > _g4_s39 ? (140u + sizeof(_g4_t_v111)) : _g4_s39,
    _g4_s41 = (144u + sizeof(_g4_t_v112)) > _g4_s40 ? (144u + sizeof(_g4_t_v112)) : _g4_s40,
    _g4_s42 = (148u + sizeof(_g4_t_v113)) > _g4_s41 ? (148u + sizeof(_g4_t_v113)) : _g4_s41,
    _g4_s43 = (152u + sizeof(_g4_t_v114)) > _g4_s42 ? (152u + sizeof(_g4_t_v114)) : _g4_s42,
    _g4_s44 = (156u + sizeof(_g4_t_v115)) > _g4_s43 ? (156u + sizeof(_g4_t_v115)) : _g4_s43,
    _g4_s45 = (160u + sizeof(_g4_t_v116)) > _g4_s44 ? (160u + sizeof(_g4_t_v116)) : _g4_s44,
    _g4_s46 = (172u + sizeof(_g4_t_v117)) > _g4_s45 ? (172u + sizeof(_g4_t_v117)) : _g4_s45,
    _g4_s47 = (176u + sizeof(_g4_t_v118)) > _g4_s46 ? (176u + sizeof(_g4_t_v118)) : _g4_s46,
    _g4_s48 = (180u + sizeof(_g4_t_v119)) > _g4_s47 ? (180u + sizeof(_g4_t_v119)) : _g4_s47,
    _g4_s49 = (184u + sizeof(_g4_t_v120)) > _g4_s48 ? (184u + sizeof(_g4_t_v120)) : _g4_s48,
    _g4_s50 = (188u + sizeof(_g4_t_v121)) > _g4_s49 ? (188u + sizeof(_g4_t_v121)) : _g4_s49,
    _g4_s51 = (196u + sizeof(_g4_t_v122)) > _g4_s50 ? (196u + sizeof(_g4_t_v122)) : _g4_s50,
    _g4_s52 = (200u + sizeof(_g4_t_v123)) > _g4_s51 ? (200u + sizeof(_g4_t_v123)) : _g4_s51,
    _g4_s53 = (336u + sizeof(_g4_t_v124)) > _g4_s52 ? (336u + sizeof(_g4_t_v124)) : _g4_s52,
    _g4_s54 = (340u + sizeof(_g4_t_v125)) > _g4_s53 ? (340u + sizeof(_g4_t_v125)) : _g4_s53,
    _g4_s55 = (344u + sizeof(_g4_t_v126)) > _g4_s54 ? (344u + sizeof(_g4_t_v126)) : _g4_s54,
    _g4_s56 = (348u + sizeof(_g4_t_v127)) > _g4_s55 ? (348u + sizeof(_g4_t_v127)) : _g4_s55
  };
  alignas(16) uint8_t _g4_sf[_g4_s56];
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 0u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 8u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 16u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 16u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 16u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 16u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 16u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 16u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 16u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 16u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 16u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 16u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 16u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 16u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 16u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 16u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 16u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 16u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 16u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 16u);
  _g4_t_DSP &DSP = *reinterpret_cast<_g4_t_DSP *>(_g4_sf + 40u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 40u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 40u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 48u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 68u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 72u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 72u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 72u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 76u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 76u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 76u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 76u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 76u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 82u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 96u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 112u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 128u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 132u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 136u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 140u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 144u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 148u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 152u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 156u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 160u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 172u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 176u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 180u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 184u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 188u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 196u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 200u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 336u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 340u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 344u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 348u);

  v2 = a2;
  vox::Mutex::Lock((vox::Mutex::Self *)(a1 + 52));
  v3 = *(uint32_t *)(a2 + 200);
  v95 = a2 + 200;
  if ( v3 == a2 + 200 )
  {
    v4 = a2 + 12;
    v100 = (uint8_t *)(a2 + 192);
  }
  else
  {
    v4 = a2 + 12;
    v100 = (uint8_t *)(a2 + 192);
    if ( *(uint8_t *)(v3 + 8) != 0 )
    {
      v8 = *(uint8_t **)(a2 + 192);
      if ( v8 == (uint8_t *)(a2 + 192) )
      {
        v96 = *(uint8_t **)(a2 + 192);
        goto LABEL_17;
      }
      if ( v8[8] != 0 )
        v8[8] = 0;
      else
        g4_std_compat::ostream_write(a2 + 12, ",", 1);
    }
  }
  v74 = *(uint32_t *)(a2 + 192);
  v5 = opNew(0xCu);
  if ( v5 != -8 )
    *(uint8_t *)(v5 + 8) = 1;
  sub_1901920(v5, v74);
  v75 = *(uint32_t *)(a2 + 200);
  v6 = opNew(0xCu);
  if ( v6 != -8 )
    *(uint8_t *)(v6 + 8) = 1;
  sub_1901920(v6, v75);
  g4_std_compat::ostream_write(v4, "[", 1);
  v7 = *(uint32_t *)(a2 + 200);
  v8 = *(uint8_t **)(a2 + 192);
  if ( v95 != v7 && *(uint8_t *)(v7 + 8) != 0 )
  {
    v96 = v100;
    if ( v100 == v8 )
      goto LABEL_17;
    if ( v8[8] != 0 )
      v8[8] = 0;
    else
      g4_std_compat::ostream_write(v4, ",", 1);
    v8 = *(uint8_t **)(a2 + 192);
  }
  v76 = v8;
  v9 = opNew(0xCu);
  if ( v9 != -8 )
    *(uint8_t *)(v9 + 8) = 1;
  sub_1901920(v9, v76);
  v77 = *(uint32_t *)(a2 + 200);
  v10 = opNew(0xCu);
  if ( v10 != -8 )
    *(uint8_t *)(v10 + 8) = 0;
  sub_1901920(v10, v77);
  g4_std_compat::ostream_write(v4, "{", 1);
  v8 = *(uint8_t **)(a2 + 192);
  v96 = v100;
  if ( v8 != v100 )
  {
    if ( v8[8] != 0 )
      v8[8] = 0;
    else
      g4_std_compat::ostream_write(v4, ",", 1);
    g4_std_compat::ostream_write(v4, "\"", 1);
    g4_std_compat::ostream_write(v4, "name", 4);
    g4_std_compat::ostream_write(v4, "\":\"", 3);
    g4_std_compat::ostream_write(v4, "AUX1", 4);
    g4_std_compat::ostream_write(v4, "\"", 1);
    v8 = *(uint8_t **)(a2 + 192);
  }
LABEL_17:
  if ( *(uint32_t *)(a1 + 8) != 0 )
  {
    if ( v8 == v96 )
      goto LABEL_27;
    if ( v8[8] != 0 )
    {
      v8[8] = 0;
      v11 = a2 + 12;
    }
    else
    {
      v11 = a2 + 12;
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
    }
    g4_std_compat::ostream_write(v11, "\"", 1);
    g4_std_compat::ostream_write(v11, "route_to", 8);
    g4_std_compat::ostream_write(v11, "\":\"", 3);
    g4_std_compat::ostream_write(v11, "MASTER", 6);
  }
  else
  {
    if ( v8 == v96 )
      goto LABEL_27;
    if ( v8[8] != 0 )
    {
      v8[8] = 0;
      v11 = a2 + 12;
    }
    else
    {
      v11 = a2 + 12;
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
    }
    g4_std_compat::ostream_write(v11, "\"", 1);
    g4_std_compat::ostream_write(v11, "route_to", 8);
    g4_std_compat::ostream_write(v11, "\":\"", 3);
    g4_std_compat::ostream_write(v11, "AUX2", 4);
  }
  g4_std_compat::ostream_write(v11, "\"", 1);
LABEL_27:
  Volume = vox::MiniBus::GetVolume((int *)**(uint32_t **)(a1 + 12), 0);
  v13 = *(uint8_t **)(a2 + 192);
  if ( v96 != v13 )
  {
    if ( v13[8] != 0 )
    {
      v13[8] = 0;
      v14 = a2 + 12;
    }
    else
    {
      v14 = a2 + 12;
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
    }
    g4_std_compat::ostream_write(v14, "\"", 1);
    g4_std_compat::ostream_write(v14, "route_dry_gain", 14);
    g4_std_compat::ostream_write(v14, "\":", 2);
    v101 = Volume;
    g4_std::ostream::op_shl_double(v14, COERCE__INT64(v101));
  }
  v15 = vox::MiniBus::GetVolume((int *)**(uint32_t **)(a1 + 12), 1);
  v16 = *(uint8_t **)(a2 + 192);
  if ( v96 != v16 )
  {
    if ( v16[8] != 0 )
    {
      v16[8] = 0;
      v17 = a2 + 12;
    }
    else
    {
      v17 = a2 + 12;
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
    }
    g4_std_compat::ostream_write(v17, "\"", 1);
    g4_std_compat::ostream_write(v17, "route_wet_gain", 14);
    g4_std_compat::ostream_write(v17, "\":", 2);
    v102 = v15;
    g4_std::ostream::op_shl_double(v17, COERCE__INT64(v102));
  }
  DSP = vox::MiniAuxBus::GetDSP(**(vox::MiniAuxBus::Self ***)(a1 + 12));
  v18 = *(uint8_t **)(a2 + 192);
  if ( v96 != v18 )
  {
    if ( v18[8] != 0 )
    {
      v18[8] = 0;
      v19 = a2 + 12;
    }
    else
    {
      v19 = a2 + 12;
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
    }
    g4_std_compat::ostream_write(v19, "\"", 1);
    g4_std_compat::ostream_write(v19, "dsp_set", 7);
    g4_std_compat::ostream_write(v19, "\":", 2);
    g4_std::ostream::op_shl_int(v19, DSP != 0);
  }
  if ( DSP != 0 )
  {
    v112 = 6;
    sub_1900810(v123);
    v123[28] = 0;
    LOWORD(v123[29]) = 0;
    memset(&v123[30], 0, 16);
    v123[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    v113 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
    *(int (***)(int))((char *)&v113 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
    v114 = 0;
    sub_19119D0((char *)&v113 + (uint32_t)(uintptr_t)(*(v113 - 3)), 0);
    v115 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
    *(uint32_t *)((char *)&v116[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
    sub_19119D0((char *)&v116[-1] + (uint32_t)(uintptr_t)(*(v115 - 3)), 0);
    v113 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
    *(int (***)(int))((char *)&v113 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
    v116[1] = 0;
    v116[2] = 0;
    v117 = nullptr;
    v118 = nullptr;
    v119 = nullptr;
    v120 = 0;
    v113 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
    v123[0] = (uint32_t)(uintptr_t)(&off_20AB014);
    v115 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
    v116[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
    sub_1903A70(v121);
    v121[1] = 24;
    v20 = &dword_213B814;
    v116[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
    v122 = &dword_213B814;
    sub_19119D0(v123, v116);
    v124 = (uint32_t *)(&v124);
    v125 = &v124;
    v126 = (uint32_t *)(&v126);
    v127 = &v126;
    *(uint32_t *)((char *)v116 + (uint32_t)(uintptr_t)(*(v115 - 3))) = v112;
    if ( G4_VCALL<int>(DSP, 24, &v112) < 0 )
    {
LABEL_53:
      v26 = v126;
      if ( v126 != (uint32_t *)(uintptr_t)(&v126) )
      {
        while ( 1 )
        {
          v27 = (uint32_t *)*v26;
          opDelete(v26);
          if ( v27 == (uint32_t *)(uintptr_t)(&v126) )
            break;
          v26 = v27;
        }
        v2 = a2;
      }
      v28 = v124;
      if ( v124 != (uint32_t *)(uintptr_t)(&v124) )
      {
        while ( 1 )
        {
          v29 = (uint32_t *)*v28;
          opDelete(v28);
          if ( v29 == (uint32_t *)(uintptr_t)(&v124) )
            break;
          v28 = v29;
        }
      }
      v113 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
      v123[0] = (uint32_t)(uintptr_t)(&off_20AB014);
      v115 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
      v116[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
      v30 = v122 - 3;
      if ( v122 - 3 != dword_213B808 && __sync_fetch_and_add(v122 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v30);
      v116[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
      sub_1902180(v121);
      v113 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
      *(int (***)(int))((char *)&v113 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
      v115 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
      *(uint32_t *)((char *)&v116[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
      v113 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
      *(int (***)(int))((char *)&v113 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
      v114 = 0;
      v123[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
      sub_1900B90(v123);
      goto LABEL_64;
    }
    v106[0] = (uint32_t)(uintptr_t)(&dword_213B814);
    v107[0] = (uint32_t)(uintptr_t)(&dword_213B814);
    if ( v119 == nullptr )
    {
      g4_std::string::assign_str(v107, &v122);
LABEL_50:
      sub_1937C90(v106, v107);
      v24 = (void *)(v107[0] - 12);
      if ( (uint32_t *)(v107[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v107[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v24);
      }
      v25 = v106[0];
      if ( *(uint32_t *)(v106[0] - 12) != 0 )
      {
        v68 = *(uint8_t **)(a2 + 192);
        if ( v96 != v68 )
        {
          if ( v68[8] != 0 )
          {
            v68[8] = 0;
            v69 = a2 + 12;
          }
          else
          {
            v69 = a2 + 12;
            g4_std_compat::ostream_write(a2 + 12, ",", 1);
          }
          g4_std_compat::ostream_write(v69, "\"", 1);
          g4_std_compat::ostream_write(v69, &off_1B65F33, 3);
          g4_std_compat::ostream_write(v69, "\":", 2);
          g4_std_compat::ostream_write(v69, v106[0], *(uint32_t *)(v106[0] - 12));
          v25 = v106[0];
        }
      }
      if ( (uint32_t *)(v25 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v25 - 12));
      }
      goto LABEL_53;
    }
    if ( v119 > v117 )
    {
      if ( v119 != v118 )
      {
        if ( v118 == nullptr )
          goto LABEL_174;
        v78 = v118;
        v93 = v119 - v118;
        v73 = (char *)&v105 + 1;
        v21 = (size_t *)sub_1938930(v119 - v118, 0);
        v20 = (uint32_t *)(v21 + 3);
        v22 = v78;
        if ( v93 == 1 )
        {
          *((uint8_t *)v21 + 12) = *v78;
        }
        else
        {
          v79 = v21;
          memcpy(v20, v22, v93);
          v21 = v79;
        }
        if ( v21 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          v21[2] = 0;
          *v21 = v93;
          *((uint8_t *)v21 + v93 + 12) = 0;
        }
      }
      v109 = v20;
      g4_std::string::assign_str(v107, &v109);
      v23 = v109 - 3;
      if ( v109 - 3 != dword_213B808 && __sync_fetch_and_add(v109 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v23);
      goto LABEL_50;
    }
    if ( v117 == v118 )
    {
LABEL_157:
      v108 = v20;
      g4_std::string::assign_str(v107, &v108);
      v67 = v108 - 3;
      if ( v108 - 3 != dword_213B808 && __sync_fetch_and_add(v108 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v67);
      goto LABEL_50;
    }
    if ( v118 != nullptr )
    {
      v94 = v117 - v118;
      v88 = v118;
      v73 = (char *)&v105;
      v65 = (size_t *)sub_1938930(v117 - v118, 0);
      v20 = (uint32_t *)(v65 + 3);
      v66 = v88;
      if ( v94 == 1 )
      {
        *((uint8_t *)v65 + 12) = *v88;
LABEL_155:
        if ( v65 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          v65[2] = 0;
          *v65 = v94;
          *((uint8_t *)v20 + v94) = 0;
        }
        goto LABEL_157;
      }
    }
    else
    {
      if ( v117 != nullptr )
        goto LABEL_174;
      v91 = v118;
      v65 = (size_t *)sub_1938930(0, 0);
      v20 = (uint32_t *)(v65 + 3);
      v94 = 0;
      v66 = v91;
    }
    v89 = v65;
    memcpy(v20, v66, v94);
    v65 = v89;
    goto LABEL_155;
  }
LABEL_64:
  v31 = *(uint8_t **)(v2 + 192);
  if ( v96 != v31 )
  {
    v32 = v2 + 12;
    if ( v95 == *(uint32_t *)(v2 + 200) )
      goto LABEL_69;
    v80 = *(void **)(v2 + 192);
    sub_1901940(v80);
    opDelete(v80);
    v33 = *(void **)(v2 + 200);
    sub_1901940(v33);
    opDelete(v33);
    g4_std_compat::ostream_write(v2 + 12, "}", 1);
    v31 = *(uint8_t **)(v2 + 192);
  }
  v34 = *(uint32_t *)(v2 + 200);
  v32 = v2 + 12;
  if ( v95 != v34 && *(uint8_t *)(v34 + 8) != 0 )
  {
    if ( v31 == v96 )
      goto LABEL_80;
    if ( v31[8] != 0 )
      v31[8] = 0;
    else
      g4_std_compat::ostream_write(v2 + 12, ",", 1);
    v31 = *(uint8_t **)(v2 + 192);
  }
LABEL_69:
  v81 = v31;
  v35 = opNew(0xCu);
  if ( v35 != -8 )
    *(uint8_t *)(v35 + 8) = 1;
  sub_1901920(v35, v81);
  v82 = *(uint32_t *)(v2 + 200);
  v36 = opNew(0xCu);
  if ( v36 != -8 )
    *(uint8_t *)(v36 + 8) = 0;
  sub_1901920(v36, v82);
  g4_std_compat::ostream_write(v32, "{", 1);
  v37 = *(uint8_t **)(v2 + 192);
  if ( v96 != v37 )
  {
    if ( v37[8] != 0 )
      v37[8] = 0;
    else
      g4_std_compat::ostream_write(v32, ",", 1);
    g4_std_compat::ostream_write(v32, "\"", 1);
    g4_std_compat::ostream_write(v32, "name", 4);
    g4_std_compat::ostream_write(v32, "\":\"", 3);
    g4_std_compat::ostream_write(v32, "AUX2", 4);
    g4_std_compat::ostream_write(v32, "\"", 1);
    v38 = *(uint8_t **)(v2 + 192);
    if ( v96 != v38 )
    {
      if ( v38[8] != 0 )
        v38[8] = 0;
      else
        g4_std_compat::ostream_write(v32, ",", 1);
      g4_std_compat::ostream_write(v32, "\"", 1);
      g4_std_compat::ostream_write(v32, "route_to", 8);
      g4_std_compat::ostream_write(v32, "\":\"", 3);
      g4_std_compat::ostream_write(v32, "MASTER", 6);
      g4_std_compat::ostream_write(v32, "\"", 1);
    }
  }
LABEL_80:
  v39 = vox::MiniBus::GetVolume((int *)*(uint32_t *)(*(uint32_t *)(a1 + 12) + 4), 0);
  v40 = *(uint8_t **)(v2 + 192);
  if ( v96 != v40 )
  {
    if ( v40[8] != 0 )
    {
      v40[8] = 0;
      v41 = v2 + 12;
    }
    else
    {
      v41 = v2 + 12;
      g4_std_compat::ostream_write(v2 + 12, ",", 1);
    }
    g4_std_compat::ostream_write(v41, "\"", 1);
    g4_std_compat::ostream_write(v41, "route_dry_gain", 14);
    g4_std_compat::ostream_write(v41, "\":", 2);
    v103 = v39;
    g4_std::ostream::op_shl_double(v41, COERCE__INT64(v103));
  }
  v42 = vox::MiniBus::GetVolume((int *)*(uint32_t *)(*(uint32_t *)(a1 + 12) + 4), 1);
  v43 = *(uint8_t **)(v2 + 192);
  if ( v96 != v43 )
  {
    if ( v43[8] != 0 )
    {
      v43[8] = 0;
      v44 = v2 + 12;
    }
    else
    {
      v44 = v2 + 12;
      g4_std_compat::ostream_write(v2 + 12, ",", 1);
    }
    g4_std_compat::ostream_write(v44, "\"", 1);
    g4_std_compat::ostream_write(v44, "route_wet_gain", 14);
    g4_std_compat::ostream_write(v44, "\":", 2);
    v104 = v42;
    g4_std::ostream::op_shl_double(v44, COERCE__INT64(v104));
  }
  v97 = vox::MiniAuxBus::GetDSP(*(vox::MiniAuxBus::Self **)(*(uint32_t *)(a1 + 12) + 4));
  v45 = *(uint8_t **)(v2 + 192);
  if ( v96 != v45 )
  {
    if ( v45[8] != 0 )
    {
      v45[8] = 0;
      v46 = v2 + 12;
    }
    else
    {
      v46 = v2 + 12;
      g4_std_compat::ostream_write(v2 + 12, ",", 1);
    }
    g4_std_compat::ostream_write(v46, "\"", 1);
    g4_std_compat::ostream_write(v46, "dsp_set", 7);
    g4_std_compat::ostream_write(v46, "\":", 2);
    g4_std::ostream::op_shl_int(v46, v97 != 0);
  }
  if ( v97 != 0 )
  {
    v112 = 6;
    sub_1900810(v123);
    v123[28] = 0;
    LOWORD(v123[29]) = 0;
    memset(&v123[30], 0, 16);
    v123[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    v113 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
    *(int (***)(int))((char *)&v113 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
    v114 = 0;
    sub_19119D0((char *)&v113 + (uint32_t)(uintptr_t)(*(v113 - 3)), 0);
    v115 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
    *(uint32_t *)((char *)&v116[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
    sub_19119D0((char *)&v116[-1] + (uint32_t)(uintptr_t)(*(v115 - 3)), 0);
    v113 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
    *(int (***)(int))((char *)&v113 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
    v116[1] = 0;
    v116[2] = 0;
    v117 = nullptr;
    v118 = nullptr;
    v119 = nullptr;
    v120 = 0;
    v113 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
    v123[0] = (uint32_t)(uintptr_t)(&off_20AB014);
    v115 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
    v116[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
    sub_1903A70(v121);
    v121[1] = 24;
    v47 = &dword_213B814;
    v116[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
    v122 = &dword_213B814;
    sub_19119D0(v123, v116);
    v124 = (uint32_t *)(&v124);
    v125 = &v124;
    v126 = (uint32_t *)(&v126);
    v127 = &v126;
    *(uint32_t *)((char *)v116 + (uint32_t)(uintptr_t)(*(v115 - 3))) = v112;
    if ( G4_VCALL<int>(v97, 24, &v112, v73) < 0 )
    {
LABEL_106:
      v53 = v126;
      if ( v126 != (uint32_t *)(uintptr_t)(&v126) )
      {
        while ( 1 )
        {
          v54 = (uint32_t *)*v53;
          opDelete(v53);
          if ( v54 == (uint32_t *)(uintptr_t)(&v126) )
            break;
          v53 = v54;
        }
      }
      v55 = v124;
      if ( v124 != (uint32_t *)(uintptr_t)(&v124) )
      {
        while ( 1 )
        {
          v56 = (uint32_t *)*v55;
          opDelete(v55);
          if ( v56 == (uint32_t *)(uintptr_t)(&v124) )
            break;
          v55 = v56;
        }
      }
      v113 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
      v123[0] = (uint32_t)(uintptr_t)(&off_20AB014);
      v115 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
      v116[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
      v57 = v122 - 3;
      if ( v122 - 3 != dword_213B808 && __sync_fetch_and_add(v122 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v57);
      v116[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
      sub_1902180(v121);
      v113 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
      *(int (***)(int))((char *)&v113 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
      v115 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
      *(uint32_t *)((char *)&v116[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
      v113 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
      *(int (***)(int))((char *)&v113 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
      v114 = 0;
      v123[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
      sub_1900B90(v123);
      goto LABEL_116;
    }
    v106[0] = (uint32_t)(uintptr_t)(&dword_213B814);
    v107[0] = (uint32_t)(uintptr_t)(&dword_213B814);
    if ( v119 == nullptr )
    {
      g4_std::string::assign_str(v107, &v122);
LABEL_103:
      sub_1937C90(v106, v107);
      v51 = (void *)(v107[0] - 12);
      if ( (uint32_t *)(v107[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v107[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v51);
      }
      v52 = v106[0];
      if ( *(uint32_t *)(v106[0] - 12) != 0 )
      {
        v70 = *(uint8_t **)(v2 + 192);
        if ( v96 != v70 )
        {
          if ( v70[8] != 0 )
          {
            v70[8] = 0;
            v71 = v2 + 12;
          }
          else
          {
            v71 = v2 + 12;
            g4_std_compat::ostream_write(v2 + 12, ",", 1);
          }
          g4_std_compat::ostream_write(v71, "\"", 1);
          g4_std_compat::ostream_write(v71, &off_1B65F37, 3);
          g4_std_compat::ostream_write(v71, "\":", 2);
          g4_std_compat::ostream_write(v71, v106[0], *(uint32_t *)(v106[0] - 12));
          v52 = v106[0];
        }
      }
      if ( (uint32_t *)(v52 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v52 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v52 - 12));
      }
      goto LABEL_106;
    }
    if ( v119 > v117 )
    {
      if ( v119 == v118 )
        goto LABEL_102;
      if ( v118 != nullptr )
      {
        v83 = v118;
        v98 = v119 - v118;
        v48 = (size_t *)sub_1938930(v119 - v118, 0);
        v47 = (uint32_t *)(v48 + 3);
        v49 = v83;
        if ( v98 == 1 )
        {
          *((uint8_t *)v48 + 12) = *v83;
        }
        else
        {
          v84 = v48;
          memcpy(v47, v49, v98);
          v48 = v84;
        }
        if ( v48 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          v48[2] = 0;
          *v48 = v98;
          *((uint8_t *)v48 + v98 + 12) = 0;
        }
LABEL_102:
        v111 = v47;
        g4_std::string::assign_str(v107, &v111);
        v50 = v111 - 3;
        if ( v111 - 3 == dword_213B808 || __sync_fetch_and_add(v111 - 1, 0xFFFFFFFF) > 0 )
          goto LABEL_103;
        goto LABEL_150;
      }
LABEL_174:
      sub_18FFFD0("basic_string::_S_construct null not valid");
    }
    if ( v117 == v118 )
    {
LABEL_148:
      v110 = v47;
      g4_std::string::assign_str(v107, &v110);
      v50 = v110 - 3;
      if ( v110 - 3 == dword_213B808 || __sync_fetch_and_add(v110 - 1, 0xFFFFFFFF) > 0 )
        goto LABEL_103;
LABEL_150:
      g4_std::string::Rep::M_destroy(v50);
      goto LABEL_103;
    }
    if ( v118 != nullptr )
    {
      v99 = v117 - v118;
      v86 = v118;
      v63 = (size_t *)sub_1938930(v117 - v118, 0);
      v47 = (uint32_t *)(v63 + 3);
      v64 = v86;
      if ( v99 == 1 )
      {
        *((uint8_t *)v63 + 12) = *v86;
LABEL_146:
        if ( v63 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          v63[2] = 0;
          *v63 = v99;
          *((uint8_t *)v47 + v99) = 0;
        }
        goto LABEL_148;
      }
    }
    else
    {
      if ( v117 != nullptr )
        goto LABEL_174;
      v90 = v118;
      v63 = (size_t *)sub_1938930(0, 0);
      v47 = (uint32_t *)(v63 + 3);
      v99 = 0;
      v64 = v90;
    }
    v87 = v63;
    memcpy(v47, v64, v99);
    v63 = v87;
    goto LABEL_146;
  }
LABEL_116:
  v58 = *(uint8_t **)(v2 + 192);
  if ( v96 != v58 && v95 != *(uint32_t *)(v2 + 200) )
  {
    sub_1901940(*(uint32_t *)(v2 + 192));
    opDelete(v58);
    v59 = *(void **)(v2 + 200);
    sub_1901940(v59);
    v72 = v59;
    v60 = v2 + 12;
    opDelete(v72);
    g4_std_compat::ostream_write(v2 + 12, "}", 1);
    if ( *(uint8_t **)(v2 + 192) != v96 && v95 != *(uint32_t *)(v2 + 200) )
    {
      v85 = *(void **)(v2 + 192);
      sub_1901940(v85);
      opDelete(v85);
      v61 = *(void **)(v2 + 200);
      sub_1901940(v61);
      opDelete(v61);
      g4_std_compat::ostream_write(v60, "]", 1);
    }
  }
  vox::Mutex::Unlock((vox::Mutex::Self *)(a1 + 52));
  return 0;
}


