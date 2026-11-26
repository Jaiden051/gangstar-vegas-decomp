#include "Core/Utils/DecompTypes.h"
#include "vox_VoxDebugStreamManager.h"

// ----------------------------------------------------------------------------
// Function: vox::VoxDebugStreamManager::Lock  (binary VA: 0x103e8a0)
// Original: vox::VoxDebugStreamManager::Lock
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::VoxDebugStreamManager::Lock(pthread_mutex_t **self)
{
  return vox::Mutex::Lock(self + 1);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxDebugStreamManager::Unlock  (binary VA: 0x103e8d0)
// Original: vox::VoxDebugStreamManager::Unlock
// ----------------------------------------------------------------------------
pthread_mutex_t * vox::VoxDebugStreamManager::Unlock(pthread_mutex_t **self)
{
  return vox::Mutex::Unlock(self + 1);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxDebugStreamManager::CreateDebugStream  (binary VA: 0x103e900)
// Original: vox::VoxDebugStreamManager::CreateDebugStream
// ----------------------------------------------------------------------------
int vox::VoxDebugStreamManager::CreateDebugStream(vox::VoxDebugStreamManager::Self *self)
{
  int v1;
  int v2;
  int v3;

  v1 = (*(uint32_t *)self)++;
  v2 = VoxAllocInternal(
         0x3Cu,
         0,
         (int)(uintptr_t)("F:/G4/G4_UP8Shop/lib/vox/src/vox_debug_stream.cpp"),
         (int)(uintptr_t)("CreateDebugStream"),
         164);
  *(uint32_t *)v2 = v2;
  *(uint32_t *)(v2 + 4) = v2;
  *(uint32_t *)(v2 + 20) = 0;
  *(uint32_t *)(v2 + 24) = 0;
  *(uint32_t *)(v2 + 36) = 0;
  *(uint32_t *)(v2 + 40) = 1;
  *(uint32_t *)(v2 + 44) = 0;
  *(uint32_t *)(v2 + 48) = -1;
  *(uint8_t *)(v2 + 52) = 0;
  *(uint8_t *)(v2 + 53) = 0;
  *(uint32_t *)(v2 + 56) = v1;
  *(uint32_t *)(v2 + 8) = v2 + 8;
  *(uint32_t *)(v2 + 12) = v2 + 8;
  *(uint32_t *)(v2 + 28) = v2 + 20;
  *(uint32_t *)(v2 + 32) = v2 + 20;
  v3 = VoxAllocInternal(0xCu, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
  if ( v3 != -8 )
    *(uint32_t *)(v3 + 8) = v2;
  sub_1901920(v3, (char *)self + 16);
  return *(uint32_t *)(v2 + 56);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxDebugStreamManager::GetStream  (binary VA: 0x103ea10)
// Original: vox::VoxDebugStreamManager::GetStream
// ----------------------------------------------------------------------------
char * vox::VoxDebugStreamManager::GetStream(vox::VoxDebugStreamManager::Self *self, int a2)
{
  uint32_t *v2;
  char *result;
  char **v4;
  char *v5;
  char *v6;

  v2 = *((uint32_t **)self + 2);
  if ( v2 == (uint32_t *)((char *)self + 8) )
  {
LABEL_6:
    v4 = *((char ***)self + 4);
    v5 = (char *)self + 16;
    result = nullptr;
    if ( v4 != (char **)((char *)self + 16) )
    {
      result = v4[2];
      if ( a2 != *((uint32_t *)result + 14) )
      {
        v6 = *v4;
        if ( v5 == v6 )
        {
          return nullptr;
        }
        else
        {
          while ( 1 )
          {
            result = *((char **)v6 + 2);
            if ( a2 == *((uint32_t *)result + 14) )
              break;
            v6 = *(char **)v6;
            if ( v5 == v6 )
              return nullptr;
          }
        }
      }
    }
  }
  else
  {
    while ( 1 )
    {
      result = (char *)v2[2];
      if ( *((uint32_t *)result + 14) == a2 )
        break;
      v2 = (uint32_t *)*v2;
      if ( (uint32_t *)((char *)self + 8) == v2 )
        goto LABEL_6;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxDebugStreamManager::DestroyDebugStream  (binary VA: 0x103ea80)
// Original: vox::VoxDebugStreamManager::DestroyDebugStream
// ----------------------------------------------------------------------------
int vox::VoxDebugStreamManager::DestroyDebugStream(vox::VoxDebugStreamManager::Self *self, int a2)
{
  char *Stream;

  Stream = vox::VoxDebugStreamManager::GetStream(self, a2);
  if ( Stream != nullptr && Stream[53] == 0 )
    Stream[53] = 1;
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxDebugStreamManager::GetStreamList  (binary VA: 0x103eac0)
// Original: vox::VoxDebugStreamManager::GetStreamList
// ----------------------------------------------------------------------------
char * vox::VoxDebugStreamManager::GetStreamList(vox::VoxDebugStreamManager::Self *self)
{
  return (char *)self + 8;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxDebugStreamManager::PrepareStreamList  (binary VA: 0x103ead0)
// Original: vox::VoxDebugStreamManager::PrepareStreamList
// ----------------------------------------------------------------------------
void ** vox::VoxDebugStreamManager::PrepareStreamList(vox::VoxDebugStreamManager::Self *self)
{
  char *v1;
  int v2;
  uint32_t *v3;
  uint32_t *v4;
  char *v5;
  char *v6;
  char *v7;
  void **result;
  int v9;
  uint32_t *v10;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  int v14;
  uint32_t *v15;
  void **v16;
  typedef char *_g4_t_v17;
  typedef void **_g4_t_v18;
  typedef char *_g4_t_v19;
  typedef uint32_t *_g4_t_v20;
  typedef uint32_t _g4_t_v21[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v17)) > _g4_s0 ? (0u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v18)) > _g4_s1 ? (8u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v19)) > _g4_s2 ? (12u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v20)) > _g4_s3 ? (12u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v21)) > _g4_s4 ? (32u + sizeof(_g4_t_v21)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);

  v19 = (char *)self + 16;
  v21[0] = (uint32_t)(uintptr_t)(v21);
  v21[1] = (uint32_t)(uintptr_t)(v21);
  v1 = *((char **)self + 4);
  v17 = (char *)self + 8;
  if ( v1 != (char *)self + 16 )
  {
    do
    {
      v2 = VoxAllocInternal(0xCu, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      if ( v2 != -8 )
        *(uint32_t *)(v2 + 8) = *((uint32_t *)v1 + 2);
      sub_1901920(v2, v21);
      v1 = *(char **)v1;
    }
    while ( v19 != v1 );
    if ( (uint32_t *)v21[0] != v21 )
    {
      sub_19018A0(v17, v21[0], v21);
      v3 = (uint32_t *)v21[0];
      if ( (uint32_t *)v21[0] != v21 )
      {
        while ( 1 )
        {
          v4 = (uint32_t *)*v3;
          VoxFreeInternal(v3);
          if ( v4 == v21 )
            break;
          v3 = v4;
        }
      }
    }
  }
  v5 = *((char **)self + 4);
  if ( v5 != v19 )
  {
    while ( 1 )
    {
      v6 = *(char **)v5;
      VoxFreeInternal(v5);
      if ( v6 == v19 )
        break;
      v5 = v6;
    }
  }
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(v19);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v19);
  v7 = *((char **)self + 2);
  result = (void **)((char *)self + 8);
  v18 = (void **)v7;
  while ( v17 != v7 )
  {
    v9 = *((uint32_t *)v7 + 2);
    v20 = (uint32_t *)v9;
    if ( *(uint8_t *)(v9 + 53) != 0 )
    {
      g4_std::Rb_tree_string_pair_string_const_73770e::M_erase(
        v9 + 16,
        *(void **)(v9 + 24));
      v10 = (uint32_t *)v20[2];
      if ( v10 != v20 + 2 )
      {
        while ( 1 )
        {
          v11 = v10[2];
          v12 = (uint32_t *)*v10;
          if ( (uint32_t *)(v11 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v11 - 12));
          }
          VoxFreeInternal(v10);
          if ( v12 == v20 + 2 )
            break;
          v10 = v12;
        }
      }
      v13 = (uint32_t *)*v20;
      if ( (uint32_t *)*v20 != v20 )
      {
        while ( 1 )
        {
          v14 = v13[2];
          v15 = (uint32_t *)*v13;
          if ( (uint32_t *)(v14 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v14 - 12));
          }
          VoxFreeInternal(v13);
          if ( v15 == v20 )
            break;
          v13 = v15;
        }
      }
      VoxFreeInternal(v18[2]);
      v16 = (void **)*v18;
      sub_1901940(v18);
      result = (void **)VoxFreeInternal(v18);
      v18 = v16;
      v7 = (char *)v16;
    }
    else
    {
      result = (void **)*v18;
      v18 = result;
      v7 = (char *)result;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxDebugStreamManager::Destroy  (binary VA: 0x103f990)
// Original: vox::VoxDebugStreamManager::~VoxDebugStreamManager
// ----------------------------------------------------------------------------
void vox::VoxDebugStreamManager::Destroy(vox::VoxDebugStreamManager::Self *self)
{
  void **v1;
  char *v2;
  char *v3;
  char *v4;
  int v5;
  char *v6;
  char *v7;
  int v8;
  char *v9;
  void **i;
  char *v11;
  vox::VoxDebugStreamManager::Self **v12;
  vox::VoxDebugStreamManager::Self *v13;
  char *v14;
  char *v15;
  void **v16;
  char *v17;
  char *v18;

  v17 = (char *)self + 8;
  v1 = *((void ***)self + 2);
  v16 = v1;
  if ( v1 != (void **)((char *)self + 8) )
  {
    do
    {
      v2 = (char *)v1[2];
      if ( v2 != nullptr )
      {
        g4_std::Rb_tree_string_pair_string_const_73770e::M_erase(
          (int)(uintptr_t)(v2 + 16),
          *((void **)v2 + 6));
        v3 = *((char **)v2 + 2);
        if ( v3 != v2 + 8 )
        {
          v18 = v2;
          v4 = v2 + 8;
          while ( 1 )
          {
            v5 = *((uint32_t *)v3 + 2);
            v6 = *(char **)v3;
            if ( (uint32_t *)(v5 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy((void *)(v5 - 12));
            }
            VoxFreeInternal(v3);
            if ( v6 == v4 )
              break;
            v3 = v6;
          }
          v2 = v18;
        }
        v7 = *(char **)v2;
        if ( *(char **)v2 != v2 )
        {
          while ( 1 )
          {
            v8 = *((uint32_t *)v7 + 2);
            v9 = *(char **)v7;
            if ( (uint32_t *)(v8 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy((void *)(v8 - 12));
            }
            VoxFreeInternal(v7);
            if ( v9 == v2 )
              break;
            v7 = v9;
          }
        }
        VoxFreeInternal(v16[2]);
        v1 = v16;
      }
      v1 = (void **)*v1;
      v16 = v1;
    }
    while ( v17 != (char *)v1 );
    v16 = *((void ***)self + 2);
  }
  if ( v16 != (void **)v17 )
  {
    for ( i = v16; ; i = (void **)v11 )
    {
      v11 = (char *)*i;
      VoxFreeInternal(i);
      if ( v11 == v17 )
        break;
    }
  }
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v17);
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(v17);
  v12 = *((vox::VoxDebugStreamManager::Self ***)self + 4);
  if ( v12 != (vox::VoxDebugStreamManager::Self **)((char *)self + 16) )
  {
    while ( 1 )
    {
      v13 = *v12;
      VoxFreeInternal(v12);
      if ( v13 == (vox::VoxDebugStreamManager::Self *)((char *)self + 16) )
        break;
      v12 = (vox::VoxDebugStreamManager::Self **)v13;
    }
    v14 = *((char **)self + 2);
    if ( v14 != v17 )
    {
      while ( 1 )
      {
        v15 = *(char **)v14;
        VoxFreeInternal(v14);
        if ( v15 == v17 )
          break;
        v14 = v15;
      }
    }
  }
  vox::Mutex::Destroy((pthread_mutex_t **)self + 1);
}


