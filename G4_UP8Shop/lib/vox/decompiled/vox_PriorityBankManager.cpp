#include "Core/Utils/DecompTypes.h"
#include "vox_PriorityBankManager.h"

// ----------------------------------------------------------------------------
// Function: vox::PriorityBankManager::Construct  (binary VA: 0x103a1f0)
// Original: vox::PriorityBankManager::PriorityBankManager
// ----------------------------------------------------------------------------
vox::PriorityBankManager::Self * vox::PriorityBankManager::Construct(vox::PriorityBankManager::Self *self)
{
  uint32_t *v1;
  int v2;
  vox::PriorityBankManager::Self *result;
  int *v4;
  int v5;
  uint32_t *v6;
  int v7;
  uint32_t *v8;
  unsigned int v9;
  int *v10;
  int v11;
  int *v12;
  int *v13;
  int *v14;
  int *v15;
  uint32_t *v16;
  int v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef size_t _g4_t_v20;
  typedef size_t _g4_t_v21;
  typedef int _g4_t_v22;
  typedef unsigned int _g4_t_v23;
  typedef uint32_t _g4_t_v24[10];
  typedef char _g4_t_v25;
  typedef int _g4_t_v26;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v18)) > _g4_s0 ? (0u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v19)) > _g4_s1 ? (0u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v20)) > _g4_s2 ? (4u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v21)) > _g4_s3 ? (4u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v22)) > _g4_s4 ? (8u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v23)) > _g4_s5 ? (12u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v24)) > _g4_s6 ? (16u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v25)) > _g4_s7 ? (56u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v26)) > _g4_s8 ? (60u + sizeof(_g4_t_v26)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 56u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 60u);

  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  vox::Mutex::Construct((vox::PriorityBankManager::Self *)((char *)self + 12));
  v1 = *(uint32_t **)self;
  if ( (unsigned int)(*((uint32_t *)self + 2) - *(uint32_t *)self) <= 0x7F )
  {
    v6 = *((uint32_t **)self + 1);
    v20 = v6 - v1;
    v7 = VoxAllocInternal(0x80u, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    if ( v1 != v6 )
    {
      v8 = (uint32_t *)v7;
      do
      {
        if ( v8 != nullptr )
          *v8 = *v1;
        ++v1;
        ++v8;
      }
      while ( v6 != v1 );
    }
    if ( *(uint32_t *)self != 0 )
    {
      v18 = v7;
      VoxFreeInternal(*(void **)self);
      v7 = v18;
    }
    *(uint32_t *)self = v7;
    *((uint32_t *)self + 1) = v7 + 4 * v20;
    *((uint32_t *)self + 2) = v7 + 128;
  }
  v24[1] = -2147483647;
  v24[0] = (uint32_t)(uintptr_t)("default");
  v24[2] = 4;
  v24[8] = 4;
  v24[9] = 0;
  v25 = 0;
  v26 = 0;
  memset(&v24[3], 255, 20);
  v2 = VoxAllocInternal(
         0x28u,
         0,
         (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_priority_bank.cpp"),
         (int)(uintptr_t)("PriorityBankManager"),
         661);
  result = (vox::PriorityBankManager::Self *)vox::PriorityBank::Construct(v2, (int)(uintptr_t)(v24), 0);
  if ( v2 != 0 )
  {
    v4 = *((int **)self + 1);
    if ( v4 == *((int **)self + 2) )
    {
      v9 = ((int)(uintptr_t)(v4) - *(uint32_t *)self) >> 2;
      v21 = 4;
      if ( v9 != 0 )
      {
        v21 = 0xFFFFFFFC;
        if ( v9 <= 2 * v9 )
        {
          v17 = 8 * v9;
          if ( 2 * v9 > 0x3FFFFFFF )
            v17 = -4;
          v21 = v17;
        }
      }
      v19 = ((int)(uintptr_t)(v4) - *(uint32_t *)self) >> 2;
      v22 = VoxAllocInternal(v21, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      v23 = v22 + 4;
      v10 = (int *)(v22 + 4 * v19);
      if ( v10 != nullptr )
        *v10 = v2;
      v11 = *(uint32_t *)self;
      if ( v4 != *(int **)self )
      {
        v12 = *(int **)self;
        v13 = (int *)v22;
        do
        {
          if ( v13 != nullptr )
            *v13 = *v12;
          ++v12;
          ++v13;
        }
        while ( v4 != v12 );
        v23 = v22 + 4 * (((unsigned int)(uintptr_t)(v4) - v11 - 4) >> 2) + 8;
      }
      v14 = *((int **)self + 1);
      if ( v4 != v14 )
      {
        v15 = v4;
        v16 = (uint32_t *)v23;
        do
        {
          if ( v16 != nullptr )
            *v16 = *v15;
          ++v15;
          ++v16;
        }
        while ( v14 != v15 );
        v23 += 4 * ((unsigned int)((char *)v14 - (char *)(v4 + 1)) >> 2) + 4;
      }
      if ( *(uint32_t *)self != 0 )
        VoxFreeInternal(*(void **)self);
      *(uint32_t *)self = v22;
      *((uint32_t *)self + 1) = v23;
      *((uint32_t *)self + 2) = v21 + v22;
      return (vox::PriorityBankManager::Self *)(v21 + v22);
    }
    else
    {
      v5 = 0;
      if ( v4 != nullptr )
      {
        *v4 = v2;
        v5 = *((uint32_t *)self + 1);
      }
      result = (vox::PriorityBankManager::Self *)(v5 + 4);
      *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(result);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::PriorityBankManager::Destroy  (binary VA: 0x103a4c0)
// Original: vox::PriorityBankManager::~PriorityBankManager
// ----------------------------------------------------------------------------
void vox::PriorityBankManager::Destroy(pthread_mutex_t **self)
{
  int v1;
  pthread_mutex_t *v2;
  pthread_mutex_t *v3;
  int v4;
  int v5;
  int v6;
  void *v7;
  int v8;
  pthread_mutex_t **v9;

  v9 = self + 3;
  vox::Mutex::Lock(self + 3);
  v1 = (int)(uintptr_t)(*(self + 1));
  v2 = *self;
  if ( (unsigned int)(v1 - (uint32_t)(uintptr_t)(*self)) >> 2 != 0 )
  {
    v3 = *self;
    v4 = 0;
    while ( 1 )
    {
      v5 = *(&((int32_t *)(v2))[0] + v4);
      v6 = 4 * v4;
      if ( v5 != 0 )
      {
        if ( *(uint32_t *)v5 != 0 )
        {
          VoxFreeInternal(*(void **)v5);
          v6 = 4 * v4;
        }
        v7 = *(void **)(v5 + 28);
        *(uint32_t *)(v5 + 32) = (uint32_t)(uintptr_t)(v7);
        if ( v7 != nullptr )
        {
          v8 = v6;
          VoxFreeInternal(v7);
          v6 = v8;
        }
        VoxFreeInternal(*(void **)((char *)&G4_MUTEX_LOCK(*self) + v6));
        v3 = *self;
        v1 = (int)(uintptr_t)(*(self + 1));
      }
      if ( ++v4 >= (unsigned int)((v1 - (int)(uintptr_t)(v3)) >> 2) )
        break;
      v2 = v3;
    }
  }
  vox::Mutex::Unlock(v9);
  vox::Mutex::Destroy(v9);
  if ( *self != nullptr )
    VoxFreeInternal(*self);
}

// ----------------------------------------------------------------------------
// Function: vox::PriorityBankManager::AddPriorityBank  (binary VA: 0x103a5a0)
// Original: vox::PriorityBankManager::AddPriorityBank
// ----------------------------------------------------------------------------
int vox::PriorityBankManager::AddPriorityBank(pthread_mutex_t **a1, uint32_t *a2)
{
  int v2;
  int v3;
  int *v4;
  int *v5;
  pthread_mutex_t *v6;
  pthread_mutex_t *v7;
  int *v9;
  unsigned int v10;
  int *v11;
  int *v12;
  char *v13;
  pthread_mutex_t *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int *v19;
  unsigned int v20;
  pthread_mutex_t *v21;
  char *v22;
  int *v23;
  size_t v24;

  v2 = -1;
  vox::Mutex::Lock(a1 + 3);
  if ( *a2 != 0 )
  {
    v17 = *(&G4_MUTEX_LOCK(*a1) + a2[9]);
    v3 = VoxAllocInternal(
           0x28u,
           0,
           (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_priority_bank.cpp"),
           (int)(uintptr_t)("AddPriorityBank"),
           697);
    v16 = v17;
    v18 = v3;
    vox::PriorityBank::Construct(v3, (int)(uintptr_t)(a2), v16);
    if ( v18 != 0 )
    {
      v4 = (int *)a1[1];
      v5 = (int *)*a1;
      v20 = ((char *)v4 - (char *)*a1) >> 2;
      if ( v4 == (int *)a1[2] )
      {
        v24 = 4;
        if ( v20 != 0 )
        {
          v24 = 0xFFFFFFFC;
          if ( v20 <= 2 * v20 )
          {
            v15 = 8 * v20;
            if ( 2 * v20 > 0x3FFFFFFF )
              v15 = -4;
            v24 = v15;
          }
        }
        v5 = (int *)VoxAllocInternal(
                      v24,
                      0,
                      (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                      (int)(uintptr_t)("internal_new"),
                      181);
        v23 = v5;
        v9 = &v5[v20];
        if ( v9 != nullptr )
          *v9 = v18;
        v21 = *a1;
        v10 = (unsigned int)(uintptr_t)(v5);
        if ( v4 != (int *)*a1 )
        {
          v11 = (int *)*a1;
          v12 = v5;
          do
          {
            if ( v12 != nullptr )
              *v12 = *v11;
            ++v11;
            ++v12;
          }
          while ( v4 != v11 );
          v10 = (unsigned int)(uintptr_t)(&v5[((unsigned int)((char *)v4 - (char *)(&((int32_t *)(v21))[0] + 1)) >> 2) + 1]);
        }
        v7 = (pthread_mutex_t *)(v10 + 4);
        v22 = (char *)a1[1];
        if ( v4 != (int *)v22 )
        {
          v13 = (char *)v4;
          v14 = v7;
          do
          {
            if ( v14 != nullptr )
              ((int32_t *)(v14))[0] = *(uint32_t *)v13;
            v13 += 4;
            v14 = (pthread_mutex_t *)((char *)v14 + 4);
          }
          while ( v22 != v13 );
          v7 = (pthread_mutex_t *)((char *)v7 + 4 * ((unsigned int)(v22 - (char *)(v4 + 1)) >> 2) + 4);
        }
        if ( *a1 != nullptr )
        {
          v19 = v5;
          VoxFreeInternal(*a1);
          v5 = v19;
        }
        *a1 = (pthread_mutex_t *)v23;
        a1[1] = v7;
        a1[2] = (pthread_mutex_t *)((char *)v23 + v24);
      }
      else
      {
        v6 = nullptr;
        if ( v4 != nullptr )
        {
          *v4 = v18;
          v6 = a1[1];
          v5 = (int *)*a1;
        }
        v7 = (pthread_mutex_t *)(&((int32_t *)(v6))[0] + 1);
        a1[1] = v7;
      }
      v2 = (((char *)v7 - (char *)v5) >> 2) - 1;
      if ( v2 != v20 )
        v2 = -1;
    }
  }
  vox::Mutex::Unlock(a1 + 3);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::PriorityBankManager::IsChild  (binary VA: 0x103a800)
// Original: vox::PriorityBankManager::_IsChild
// ----------------------------------------------------------------------------
int vox::PriorityBankManager::IsChild(vox::PriorityBankManager::Self *self, unsigned int a2, unsigned int a3)
{
  int v3;
  int result;
  unsigned int v5;

  v3 = *(uint32_t *)self;
  result = 0;
  v5 = (*((uint32_t *)self + 1) - *(uint32_t *)self) >> 2;
  if ( a2 < v5 && a3 < v5 )
  {
    result = 1;
    if ( a2 != a3 )
    {
      result = *(uint32_t *)(v3 + 4 * a2);
      while ( 1 )
      {
        result = *(uint32_t *)(result + 16);
        if ( result == 0 )
          break;
        if ( *(uint32_t *)(v3 + 4 * a3) == result )
          return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::PriorityBankManager::SetPriorityBank  (binary VA: 0x103a850)
// Original: vox::PriorityBankManager::SetPriorityBank
// ----------------------------------------------------------------------------
int vox::PriorityBankManager::SetPriorityBank(pthread_mutex_t **a1, unsigned int a2, int a3)
{
  unsigned int v3;
  pthread_mutex_t *v4;
  char v5;
  int v6;
  pthread_mutex_t *v7;
  int v8;
  unsigned int v9;
  unsigned int v10;
  uint32_t *v11;
  uint32_t *v12;
  uint32_t *v13;
  int v14;
  uint32_t *v15;
  void *v16;
  size_t v18;
  vox::PriorityBank::Self *v19;
  int v20;
  int v21;
  int v22;
  int v23;
  uint8_t v24;
  uint32_t *v25;
  pthread_mutex_t *v26;
  char *s1;
  char *v28;
  pthread_mutex_t *v29;
  size_t v30;
  unsigned int v31;

  v3 = a2;
  sub_BA06A0();
  vox::Mutex::Lock(a1 + 3);
  v4 = *a1;
  v5 = 0;
  if ( a2 >= ((char *)a1[1] - (char *)*a1) >> 2 || *(uint32_t *)a3 == 0 )
    goto LABEL_21;
  v26 = *a1;
  s1 = **((char ***)&((int32_t *)(v4))[0] + a2);
  v22 = *(&((int32_t *)(v4))[0] + a2);
  v6 = strcasecmp(s1, *(const char **)a3);
  v7 = v26;
  v8 = v22;
  if ( v6 != 0 )
  {
    VoxFreeInternal(s1);
    **((uint32_t **)&G4_MUTEX_LOCK(*a1) + a2) = 0;
    if ( *(uint32_t *)a3 != 0 )
    {
      v18 = strlen(*(const char **)a3);
      v25 = (uint32_t *)*(&G4_MUTEX_LOCK(*a1) + a2);
      *v25 = VoxAllocInternal(
               v18 + 1,
               0,
               (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_priority_bank.cpp"),
               (int)(uintptr_t)("SetPriorityBank"),
               762);
      v7 = *a1;
      v8 = *(&G4_MUTEX_LOCK(*a1) + a2);
      if ( *(uint32_t *)v8 == 0 )
        goto LABEL_4;
      strcpy(*(char **)v8, *(const char **)a3);
    }
    v7 = *a1;
    v8 = *(&G4_MUTEX_LOCK(*a1) + a2);
  }
LABEL_4:
  v31 = *(uint32_t *)(a3 + 36);
  if ( *(uint32_t *)(v8 + 16) != *(&((int32_t *)(v7))[0] + v31) && a2 != 0 && v31 < ((char *)a1[1] - (char *)v7) >> 2 && a2 != v31 )
  {
    if ( (uint8_t)vox::PriorityBankManager::IsChild((vox::PriorityBankManager::Self *)a1, v31, a2) == 0 )
    {
      v29 = *a1;
      v19 = (vox::PriorityBank::Self *)*(&G4_MUTEX_LOCK(*a1) + a2);
      v20 = *((uint32_t *)v19 + 7);
      v21 = -1431655765 * ((*((uint32_t *)v19 + 8) - v20) >> 2);
      if ( v21 != 0 )
      {
        do
        {
          vox::PriorityBank::RemoveEmitter(v19, *(vox::EmitterObj::Self **)(v20 + 4 * (3 * v21 - 3)), true, true, true);
          v19 = (vox::PriorityBank::Self *)*(&G4_MUTEX_LOCK(*a1) + a2);
          v20 = *((uint32_t *)v19 + 7);
          v21 = -1431655765 * ((*((uint32_t *)v19 + 8) - v20) >> 2);
        }
        while ( v21 != 0 );
        v29 = *a1;
        v3 = a2;
      }
      *((uint32_t *)v19 + 4) = *(&((int32_t *)(v29))[0] + *(uint32_t *)(a3 + 36));
    }
    v8 = *(&G4_MUTEX_LOCK(*a1) + v3);
  }
  v9 = *(uint32_t *)(a3 + 4 * *(uint32_t *)(a3 + 8) + 12);
  *(uint32_t *)(v8 + 4) = *(uint32_t *)(a3 + 4);
  *(uint32_t *)(*(&G4_MUTEX_LOCK(*a1) + v3) + 8) = v9;
  *(uint32_t *)(*(&G4_MUTEX_LOCK(*a1) + v3) + 12) = *(uint32_t *)(a3 + 32);
  *(uint32_t *)(*(&G4_MUTEX_LOCK(*a1) + v3) + 24) = *(uint32_t *)(a3 + 44);
  *(uint8_t *)(*(&G4_MUTEX_LOCK(*a1) + v3) + 20) = *(uint8_t *)(a3 + 40);
  v10 = 32;
  if ( v9 <= 0x20 )
    v10 = v9;
  v5 = 1;
  v11 = (uint32_t *)*(&G4_MUTEX_LOCK(*a1) + v3);
  v12 = (uint32_t *)v11[7];
  if ( v10 > -1431655765 * ((v11[9] - (int)(uintptr_t)(v12)) >> 2) )
  {
    v13 = (uint32_t *)v11[8];
    v14 = 0;
    v30 = 0;
    v28 = (char *)(-1431655765 * (v13 - v12));
    if ( v10 != 0 )
    {
      v30 = 12 * v10;
      v14 = VoxAllocInternal(12 * v10, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    }
    if ( v12 != v13 )
    {
      v15 = (uint32_t *)v14;
      do
      {
        if ( v15 != nullptr )
        {
          *v15 = *v12;
          v15[1] = v12[1];
          v15[2] = v12[2];
        }
        v12 += 3;
        v15 += 3;
      }
      while ( v13 != v12 );
    }
    v16 = (void *)v11[7];
    if ( v16 != nullptr )
    {
      v23 = v14;
      VoxFreeInternal(v16);
      v14 = v23;
    }
    v11[7] = v14;
    v11[9] = v30 + v14;
    v11[8] = v14 + 12 * (uint32_t)(uintptr_t)(v28);
    v5 = 1;
  }
LABEL_21:
  v24 = v5;
  vox::Mutex::Unlock(a1 + 3);
  sub_BA06B0();
  return v24;
}

// ----------------------------------------------------------------------------
// Function: vox::PriorityBankManager::GetPriorityBankId  (binary VA: 0x103abe0)
// Original: vox::PriorityBankManager::GetPriorityBankId
// ----------------------------------------------------------------------------
int vox::PriorityBankManager::GetPriorityBankId(pthread_mutex_t **self, char *s1)
{
  int v2;
  pthread_mutex_t *v3;
  int v5;

  v2 = -1;
  vox::Mutex::Lock(self + 3);
  if ( s1 != nullptr )
  {
    v3 = *self;
    v5 = ((char *)*(self + 1) - (char *)*self) >> 2;
    if ( v5 != 0 )
    {
      v2 = 0;
      while ( **((uint32_t **)&((int32_t *)(v3))[0] + v2) == 0 || strcasecmp(s1, **((const char ***)&((int32_t *)(v3))[0] + v2)) != 0 )
      {
        if ( ++v2 == v5 )
        {
          v2 = -1;
          break;
        }
      }
    }
  }
  vox::Mutex::Unlock(self + 3);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: vox::PriorityBankManager::AddEmitter  (binary VA: 0x103ac70)
// Original: vox::PriorityBankManager::AddEmitter
// ----------------------------------------------------------------------------
int vox::PriorityBankManager::AddEmitter(long double a1, pthread_mutex_t **self, unsigned int a3, vox::EmitterObj::Self *a4)
{
  uint8_t v5;

  sub_BA06A0();
  vox::Mutex::Lock(self + 3);
  v5 = 0;
  if ( a4 != nullptr && a3 < ((char *)*(self + 1) - (char *)*self) >> 2 && *((uint8_t *)a4 + 48) == 0 )
    v5 = vox::PriorityBank::AddEmitter(
           a1,
           *((vox::PriorityBank::Self **)&G4_MUTEX_LOCK(*self) + a3),
           a4,
           nullptr,
           *((uint32_t *)a4 + 10));
  vox::Mutex::Unlock(self + 3);
  sub_BA06B0();
  return v5;
}

// ----------------------------------------------------------------------------
// Function: vox::PriorityBankManager::RemoveEmitter  (binary VA: 0x103ad40)
// Original: vox::PriorityBankManager::RemoveEmitter
// ----------------------------------------------------------------------------
int vox::PriorityBankManager::RemoveEmitter(pthread_mutex_t **self, unsigned int a2, vox::EmitterObj::Self *a3)
{
  int v3;

  sub_BA06A0();
  vox::Mutex::Lock(self + 3);
  v3 = 0;
  if ( a2 < ((char *)*(self + 1) - (char *)*self) >> 2 && a3 != nullptr && *((uint8_t *)a3 + 48) != 0 )
    v3 = vox::PriorityBank::RemoveEmitter(*((vox::PriorityBank::Self **)&G4_MUTEX_LOCK(*self) + a2), a3, false, true, true);
  vox::Mutex::Unlock(self + 3);
  sub_BA06B0();
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::PriorityBankManager::CanAddEmitter  (binary VA: 0x103ae10)
// Original: vox::PriorityBankManager::CanAddEmitter
// ----------------------------------------------------------------------------
int vox::PriorityBankManager::CanAddEmitter(long double a1, pthread_mutex_t **self, unsigned int a3, int a4, float a5)
{
  int v5;
  int v7;

  sub_BA06A0();
  vox::Mutex::Lock(self + 3);
  v5 = 0;
  if ( a3 < ((char *)*(self + 1) - (char *)*self) >> 2 )
  {
    LOBYTE(v7) = vox::PriorityBank::CanAddEmitter(a1, *((vox::PriorityBank::Self **)&G4_MUTEX_LOCK(*self) + a3), nullptr, a4, a5);
    v5 = v7;
  }
  vox::Mutex::Unlock(self + 3);
  sub_BA06B0();
  return v5;
}

// ----------------------------------------------------------------------------
// Function: vox::PriorityBankManager::Update  (binary VA: 0x103aed0)
// Original: vox::PriorityBankManager::Update
// ----------------------------------------------------------------------------
void vox::PriorityBankManager::Update(pthread_mutex_t **self)
{
  pthread_mutex_t *v1;
  unsigned int v2;
  vox::PriorityBank::Self *v3;

  sub_BA06A0();
  vox::Mutex::Lock(self + 3);
  v1 = *self;
  if ( (unsigned int)((char *)*(self + 1) - (char *)*self) >> 2 != 0 )
  {
    v2 = 0;
    do
    {
      v3 = (vox::PriorityBank::Self *)*(&((int32_t *)(v1))[0] + v2++);
      vox::PriorityBank::Update(v3);
      v1 = *self;
    }
    while ( v2 < ((char *)*(self + 1) - (char *)*self) >> 2 );
  }
  vox::Mutex::Unlock(self + 3);
  sub_BA06B0();
}

// ----------------------------------------------------------------------------
// Function: vox::PriorityBankManager::Serialize  (binary VA: 0x103af70)
// Original: vox::PriorityBankManager::Serialize
// ----------------------------------------------------------------------------
int vox::PriorityBankManager::Serialize(int *a1, uint32_t *a2, char a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  void *v11;
  int v13;
  size_t v14;
  uint32_t *v15;
  int v16;

  v3 = a2[50];
  v15 = a2 + 3;
  if ( (uint32_t *)v3 != a2 + 50 && *(uint8_t *)(v3 + 8) != 0 )
  {
    v13 = a2[48];
    if ( (uint32_t *)v13 == a2 + 48 )
      goto LABEL_8;
    if ( *(uint8_t *)(v13 + 8) != 0 )
      *(uint8_t *)(v13 + 8) = 0;
    else
      g4_std_compat::ostream_write(v15, ",", 1);
  }
  v4 = a2[48];
  v5 = opNew(0xCu);
  if ( v5 != -8 )
    *(uint8_t *)(v5 + 8) = 1;
  sub_1901920(v5, v4);
  v6 = a2[50];
  v7 = opNew(0xCu);
  if ( v7 != -8 )
    *(uint8_t *)(v7 + 8) = 1;
  sub_1901920(v7, v6);
  g4_std_compat::ostream_write(v15, "[", 1);
LABEL_8:
  v8 = *a1;
  v16 = (a1[1] - *a1) >> 2;
  if ( v16 != 0 )
  {
    v9 = 0;
    while ( 1 )
    {
      v14 = *(uint32_t *)(v8 + 4 * v9++);
      vox::PriorityBank::Serialize(v14, a2, a3);
      if ( v9 == v16 )
        break;
      v8 = *a1;
    }
  }
  v10 = (uint32_t *)a2[48];
  if ( v10 != a2 + 48 && a2 + 50 != (uint32_t *)a2[50] )
  {
    sub_1901940(a2[48]);
    opDelete(v10);
    v11 = (void *)a2[50];
    sub_1901940(v11);
    opDelete(v11);
    g4_std_compat::ostream_write(a2 + 3, "]", 1);
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::PriorityBankManager::GetBankName  (binary VA: 0x103b130)
// Original: vox::PriorityBankManager::GetBankName
// ----------------------------------------------------------------------------
int vox::PriorityBankManager::GetBankName(vox::PriorityBankManager::Self *self, unsigned int a2)
{
  int result;

  result = 0;
  if ( a2 < (*((uint32_t *)self + 1) - *(uint32_t *)self) >> 2 )
    return **(uint32_t **)(*(uint32_t *)self + 4 * a2);
  return result;
}


