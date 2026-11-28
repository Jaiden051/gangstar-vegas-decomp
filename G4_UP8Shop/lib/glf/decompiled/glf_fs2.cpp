#include "Core/Utils/DecompTypes.h"
#include "glf_fs2.h"

// ----------------------------------------------------------------------------
// Function: glf::fs2::LockedSearchPaths::Destroy  (binary VA: 0xc96e50)
// Original: glf::fs2::LockedSearchPaths::~LockedSearchPaths
// ----------------------------------------------------------------------------
void glf::fs2::LockedSearchPaths::Destroy(pthread_mutex_t ***self)
{
  *self = (pthread_mutex_t **)((uint32_t)(uintptr_t)&off_206DCF0);
  if ( *(self + 3) != nullptr )
    glf::Mutex::Unlock(*(self + 3));
  *self = (pthread_mutex_t **)((uint32_t)(uintptr_t)&off_206D470);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::LockedSearchPaths::Destroy_eac96ea0  (binary VA: 0xc96ea0)
// Original: glf::fs2::LockedSearchPaths::~LockedSearchPaths
// ----------------------------------------------------------------------------
void glf::fs2::LockedSearchPaths::Destroy_eac96ea0(pthread_mutex_t ***self)
{
  glf::fs2::LockedSearchPaths::Destroy(self);
  glf::MemObject::opDelete((glf::Self *)self);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::Destroy  (binary VA: 0xc97b80)
// Original: glf::fs2::FileSystem::~FileSystem
// ----------------------------------------------------------------------------
void glf::fs2::FileSystem::Destroy(glf::fs2::FileSystem::Self *self)
{
  glf::fs2::FileSystem::Self *v1;
  int v2;
  glf::fs2::FileSystem::Self **v3;
  int v4;
  int v5;
  glf::fs2::FileSystem::Self **v6;
  glf::fs2::FileSystem::Self **v7;
  glf::fs2::FileSystem::Self **v8;
  glf::Self *v9;
  glf::Self *v10;
  int v11;
  volatile int32_t *v12;
  char **v13;
  int v14;
  char *v15;
  volatile int32_t *v16;
  glf::Self *v17;
  volatile int32_t **v18;
  int v19;
  volatile int32_t *v20;
  glf::fs2::Path::Self *dest;
  char *v22;
  glf::Self *v23;
  glf::fs2::FileSystem::Self *v24;
  glf::Self **v25;

  v1 = self;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206DCA8);
  v2 = (int)(uintptr_t)((*(uint8_t **)unk_20DF444));
  v3 = (glf::fs2::FileSystem::Self **)glf::fs2::gAllFileSystems;
  v4 = ((int)(uintptr_t)((*(uint8_t **)unk_20DF444)) - (int)(uintptr_t)(glf::fs2::gAllFileSystems)) >> 4;
  v5 = ((int)(uintptr_t)((*(uint8_t **)unk_20DF444)) - (int)(uintptr_t)(glf::fs2::gAllFileSystems)) >> 2;
  if ( v4 <= 0 )
  {
LABEL_13:
    if ( v5 != 2 )
    {
      if ( v5 != 3 )
      {
        if ( v5 != 1 )
        {
          v3 = (glf::fs2::FileSystem::Self **)(*(uint8_t **)unk_20DF444);
          goto LABEL_17;
        }
        goto LABEL_58;
      }
      if ( self == *v3 )
        goto LABEL_17;
      ++v3;
    }
    if ( self == *v3 )
      goto LABEL_17;
    ++v3;
LABEL_58:
    if ( self != *v3 )
      v3 = (glf::fs2::FileSystem::Self **)(*(uint8_t **)unk_20DF444);
    goto LABEL_17;
  }
  if ( self != (glf::fs2::FileSystem::Self *)*(uintptr_t *)(glf::fs2::gAllFileSystems) )
  {
    if ( self == *(glf::fs2::FileSystem::Self **)(glf::fs2::gAllFileSystems + 4) )
    {
      v3 = (glf::fs2::FileSystem::Self **)(glf::fs2::gAllFileSystems + 4);
    }
    else if ( self == *(glf::fs2::FileSystem::Self **)(glf::fs2::gAllFileSystems + 8) )
    {
      v3 = (glf::fs2::FileSystem::Self **)(glf::fs2::gAllFileSystems + 8);
    }
    else if ( self == *(glf::fs2::FileSystem::Self **)(glf::fs2::gAllFileSystems + 12) )
    {
      v3 = (glf::fs2::FileSystem::Self **)(glf::fs2::gAllFileSystems + 12);
    }
    else
    {
      do
      {
        --v4;
        v7 = v3 + 4;
        v3 += 4;
        if ( v4 == 0 )
        {
          v5 = ((int)(uintptr_t)((*(uint8_t **)unk_20DF444)) - (int)(uintptr_t)(v3)) >> 2;
          goto LABEL_13;
        }
        if ( self == *v7 )
          goto LABEL_17;
        v6 = v3 + 1;
        if ( self == v7[1] )
          break;
        v6 = v3 + 2;
        if ( self == v7[2] )
          break;
        v6 = v3 + 3;
      }
      while ( self != v7[3] );
      v3 = v6;
    }
  }
LABEL_17:
  v8 = v3 + 1;
  if ( (glf::fs2::FileSystem::Self **)(*(uint8_t **)unk_20DF444) != v3 + 1 && ((int)(uintptr_t)((*(uint8_t **)unk_20DF444)) - (int)(uintptr_t)(v8)) >> 2 != 0 )
  {
    memmove(v3, v3 + 1, 4 * (((int)(uintptr_t)((*(uint8_t **)unk_20DF444)) - (int)(uintptr_t)(v8)) >> 2));
    v2 = (int)(uintptr_t)((*(uint8_t **)unk_20DF444));
  }
  *(uintptr_t *)(unk_20DF444) = (uintptr_t)(v2 - 4);
  glf::fs2::Path::Destroy((glf::fs2::FileSystem::Self *)((char *)self + 176));
  glf::Mutex::Destroy((pthread_mutex_t **)self + 43);
  v9 = *((glf::Self **)self + 40);
  if ( *((glf::Self **)self + 41) != v9 )
  {
    v10 = *((glf::Self **)self + 41);
    while ( 1 )
    {
      while ( 1 )
      {
        v12 = *(volatile int32_t **)v9;
        if ( *(uint32_t *)v9 != 0 )
          break;
LABEL_24:
        v9 = (glf::Self *)((char *)v9 + 4);
        if ( v10 == v9 )
          goto LABEL_28;
      }
      if ( __sync_fetch_and_add(v12 + 1, 0xFFFFFFFF) != 1 )
      {
        v11 = *((uint32_t *)v12 + 1);
        _mm_mfence();
        if ( v11 == 1 )
          G4_VCALL<void>(v12, 12);
        goto LABEL_24;
      }
      v9 = (glf::Self *)((char *)v9 + 4);
      G4_VCALL<void>(v12, 8);
      G4_VCALL<void>(v12, 16);
      if ( v10 == v9 )
      {
LABEL_28:
        v1 = self;
        v9 = *((glf::Self **)self + 40);
        break;
      }
    }
  }
  if ( v9 != nullptr )
    glf::Free(v9);
  glf::TlsNode::Destroy((glf::fs2::FileSystem::Self *)((char *)v1 + 124));
  glf::Mutex::Destroy((pthread_mutex_t **)v1 + 30);
  v13 = *((char ***)v1 + 28);
  v22 = (char *)v1 + 112;
  if ( v13 != (char **)((char *)v1 + 112) )
  {
    v24 = v1;
    while ( 1 )
    {
      v15 = *v13;
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)(v13 + 5));
      v16 = (volatile int32_t *)v13[4];
      if ( v16 != nullptr )
      {
        if ( __sync_fetch_and_add(v16 + 1, 0xFFFFFFFF) == 1 )
        {
          G4_VCALL<void>(v16, 8);
          G4_VCALL<void>(v16, 16);
        }
        else
        {
          v14 = *((uint32_t *)v16 + 1);
          _mm_mfence();
          if ( v14 == 1 )
            G4_VCALL<void>(v16, 12);
        }
      }
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)(v13 + 2));
      glf::Free((glf::Self *)v13);
      if ( v15 == v22 )
        break;
      v13 = (char **)v15;
    }
    v1 = v24;
  }
  glf::TlsNode::Destroy((glf::fs2::FileSystem::Self *)((char *)v1 + 76));
  glf::Mutex::Destroy((pthread_mutex_t **)v1 + 18);
  v17 = *((glf::Self **)v1 + 15);
  v23 = *((glf::Self **)v1 + 16);
  if ( v23 != v17 )
  {
    v18 = *((volatile int32_t ***)v1 + 15);
    v25 = (glf::Self **)v1;
    do
    {
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)(v18 + 3));
      v20 = v18[2];
      if ( v20 != nullptr )
      {
        if ( __sync_fetch_and_add(v20 + 1, 0xFFFFFFFF) == 1 )
        {
          G4_VCALL<void>(v20, 8);
          G4_VCALL<void>(v20, 16);
        }
        else
        {
          v19 = *((uint32_t *)v20 + 1);
          _mm_mfence();
          if ( v19 == 1 )
            G4_VCALL<void>(v20, 12);
        }
      }
      dest = (glf::fs2::Path::Self *)v18;
      v18 += 6;
      glf::fs2::Path::Destroy(dest);
    }
    while ( v23 != (glf::Self *)v18 );
    v1 = (glf::fs2::FileSystem::Self *)v25;
    v17 = v25[15];
  }
  if ( v17 != nullptr )
    glf::Free(v17);
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_206D470);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::Destroy_eac97ee0  (binary VA: 0xc97ee0)
// Original: glf::fs2::FileSystem::~FileSystem
// ----------------------------------------------------------------------------
void glf::fs2::FileSystem::Destroy_eac97ee0(glf::fs2::FileSystem::Self *self)
{
  glf::fs2::FileSystem::Destroy(self);
  glf::MemObject::opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::GetFsFromName  (binary VA: 0xc97fc0)
// Original: glf::fs2::GetFsFromName
// ----------------------------------------------------------------------------
uint32_t * glf::fs2::GetFsFromName(uint32_t *a1, const void **a2)
{
  int *v2;
  volatile int32_t *v3;
  bool v4;
  int v6;
  bool v7;
  typedef bool _g4_t_v8;
  typedef void *_g4_t_s1;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_s1)) > _g4_s1 ? (16u + sizeof(_g4_t_s1)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 16u);

  v2 = (int *)glf::fs2::gAllFileSystems;
  if ( (uint8_t *)(uintptr_t)(glf::fs2::gAllFileSystems) == (*(uint8_t **)unk_20DF444) )
  {
LABEL_8:
    *a1 = 0;
    return a1;
  }
  while ( 1 )
  {
    (*(void (**)(void **))(*(uint32_t *)*v2 + 20))(&s1);
    v3 = (volatile int32_t *)s1;
    v4 = false;
    if ( *((uint32_t *)s1 - 3) == *((uint32_t *)*a2 - 3) )
      v4 = memcmp(s1, *a2, *((uint32_t *)s1 - 3)) == 0;
    if ( v3 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v3 - 1, 0xFFFFFFFF) <= 0 )
    {
      v8 = v4;
      g4_std::string::Rep::M_destroy((void *)(v3 - 3));
      v4 = v8;
    }
    if ( v4 )
      break;
    if ( ++v2 == (int *)(*(uint8_t **)unk_20DF444) )
      goto LABEL_8;
  }
  v6 = *v2;
  v7 = *v2 == 0;
  *a1 = *v2;
  if ( v7 )
    return a1;
  __sync_add_and_fetch((volatile int32_t *)(v6 + 4), 1u);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::SetDebugFlag  (binary VA: 0xc980c0)
// Original: glf::fs2::SetDebugFlag
// ----------------------------------------------------------------------------
uint32_t * glf::fs2::SetDebugFlag(glf::fs2::Self *self)
{
  glf::fs2::gDebugFlags[0] = (uintptr_t)(uintptr_t)(self);
  return (uint32_t *)(glf::fs2::gDebugFlags);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::AddDebugFlags  (binary VA: 0xc980e0)
// Original: glf::fs2::AddDebugFlags
// ----------------------------------------------------------------------------
uint32_t * glf::fs2::AddDebugFlags(glf::fs2::Self *self)
{
  glf::fs2::gDebugFlags[0] |= (unsigned int)(uintptr_t)(self);
  return (uint32_t *)(glf::fs2::gDebugFlags);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::ClearDebugFlag  (binary VA: 0xc98100)
// Original: glf::fs2::ClearDebugFlag
// ----------------------------------------------------------------------------
unsigned int glf::fs2::ClearDebugFlag(glf::fs2::Self *self)
{
  glf::fs2::gDebugFlags[0] &= ~(unsigned int)(uintptr_t)(self);
  return ~(unsigned int)(uintptr_t)(self);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::GetDebugFlags  (binary VA: 0xc98120)
// Original: glf::fs2::GetDebugFlags
// ----------------------------------------------------------------------------
int glf::fs2::GetDebugFlags()
{
  return glf::fs2::gDebugFlags[0];
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::TestAnyDebugFlags  (binary VA: 0xc98140)
// Original: glf::fs2::TestAnyDebugFlags
// ----------------------------------------------------------------------------
bool glf::fs2::TestAnyDebugFlags(glf::fs2::Self *self)
{
  return ((unsigned int)(uintptr_t)(self) & glf::fs2::gDebugFlags[0]) != 0;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::TestDebugFlags  (binary VA: 0xc98160)
// Original: glf::fs2::TestDebugFlags
// ----------------------------------------------------------------------------
bool glf::fs2::TestDebugFlags(glf::fs2::Self *self)
{
  return self == (glf::fs2::Self *)((unsigned int)(uintptr_t)(self) & glf::fs2::gDebugFlags[0]);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::android::SetPaths  (binary VA: 0xc98180)
// Original: glf::fs2::android::SetPaths
// ----------------------------------------------------------------------------
int glf::fs2::android::SetPaths(glf::fs2::android::Self *self, const glf::fs2::Path::Self *a2, const glf::fs2::Path::Self *a3)
{
  glf::fs2::Path::opAssign((glf::fs2::Path::Self *)&glf::fs2::android::sDataDirectory, self);
  glf::fs2::Path::opAssign((glf::fs2::Path::Self *)&glf::fs2::android::sHomeDirectory, a2);
  return (int)(uintptr_t)(glf::fs2::Path::opAssign((glf::fs2::Path::Self *)&glf::fs2::android::sTempDirectory, a3));
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::other::GetCurrentWorkingDirectory  (binary VA: 0xc981e0)
// Original: glf::fs2::other::GetCurrentWorkingDirectory
// ----------------------------------------------------------------------------
glf::fs2::other::Self * glf::fs2::other::GetCurrentWorkingDirectory(glf::fs2::other::Self *self)
{
  glf::fs2::Path::Construct(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::other::GetExecutableDirectory  (binary VA: 0xc98220)
// Original: glf::fs2::other::GetExecutableDirectory
// ----------------------------------------------------------------------------
glf::fs2::other::Self * glf::fs2::other::GetExecutableDirectory(glf::fs2::other::Self *self)
{
  glf::fs2::Path::Construct(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::other::GetExecutable  (binary VA: 0xc98260)
// Original: glf::fs2::other::GetExecutable
// ----------------------------------------------------------------------------
glf::fs2::other::Self * glf::fs2::other::GetExecutable(glf::fs2::other::Self *self)
{
  glf::fs2::Path::Construct(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::other::GetTempDirectory  (binary VA: 0xc982a0)
// Original: glf::fs2::other::GetTempDirectory
// ----------------------------------------------------------------------------
glf::fs2::other::Self * glf::fs2::other::GetTempDirectory(glf::fs2::other::Self *self)
{
  glf::fs2::Path::Construct(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::other::Init  (binary VA: 0xc982e0)
// Original: glf::fs2::other::Init
// ----------------------------------------------------------------------------
void glf::fs2::other::Init()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::MountPoint::NextId  (binary VA: 0xc982f0)
// Original: glf::fs2::MountPoint::NextId
// ----------------------------------------------------------------------------
int glf::fs2::MountPoint::NextId()
{
  int result;
  int v1;

  result = dword_20C1D00;
  v1 = dword_20C1D00 + 1;
  if ( dword_20C1D00 == 0 )
  {
    v1 = 2;
    result = 1;
  }
  dword_20C1D00 = v1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::MountPoint::GetId  (binary VA: 0xc98320)
// Original: glf::fs2::MountPoint::GetId
// ----------------------------------------------------------------------------
int glf::fs2::MountPoint::GetId(glf::fs2::MountPoint::Self *self)
{
  return *((uint32_t *)self + 5);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::MountPoint::Construct  (binary VA: 0xc98330)
// Original: glf::fs2::MountPoint::MountPoint
// ----------------------------------------------------------------------------
int glf::fs2::MountPoint::Construct(glf::fs2::Path::Self *a1, int *a2)
{
  int v2;
  bool v3;
  int result;

  glf::fs2::Path::Construct(a1);
  v2 = *a2;
  v3 = *a2 == 0;
  *((uint32_t *)a1 + 2) = *a2;
  if ( !v3 )
    __sync_add_and_fetch((volatile int32_t *)(v2 + 4), 1u);
  glf::fs2::Path::Construct((glf::fs2::Path::Self *)((char *)a1 + 12));
  result = glf::fs2::MountPoint::NextId();
  *((uint32_t *)a1 + 5) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::MountPoint::Construct  (binary VA: 0xc98390)
// Original: glf::fs2::MountPoint::MountPoint
// ----------------------------------------------------------------------------
glf::fs2::MountPoint::Self * glf::fs2::MountPoint::Construct(glf::fs2::MountPoint::Self *self, const glf::fs2::MountPoint::Self *a2)
{
  int v2;
  glf::fs2::MountPoint::Self *result;

  glf::fs2::Path::Construct(self, a2);
  v2 = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 2) = v2;
  if ( v2 != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v2 + 4), 1u);
  glf::fs2::Path::Construct((glf::fs2::MountPoint::Self *)((char *)self + 12), (const glf::fs2::MountPoint::Self *)((char *)a2 + 12));
  result = *((glf::fs2::MountPoint::Self **)a2 + 5);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::MountPoint::opAssign  (binary VA: 0xc98400)
// Original: glf::fs2::MountPoint::operator=
// ----------------------------------------------------------------------------
glf::fs2::MountPoint::Self * glf::fs2::MountPoint::opAssign(glf::Self **self, glf::Self **a2)
{
  volatile int32_t *v2;
  glf::Self *v3;
  glf::RefCounted::Self *v5;

  if ( self != a2 )
  {
    glf::fs2::Path::opAssign((glf::fs2::Path::Self *)self, (const glf::fs2::Path::Self *)a2);
    v2 = (volatile int32_t *)a2[2];
    if ( v2 != nullptr )
      __sync_add_and_fetch(v2 + 1, 1u);
    v3 = *(self + 2);
    *(self + 2) = (glf::Self *)v2;
    if ( v3 != nullptr )
      glf::intrusive_ptr_release(v3, v5);
    glf::fs2::Path::opAssign((glf::fs2::Path::Self *)(self + 3), (const glf::fs2::Path::Self *)(a2 + 3));
    *(self + 5) = a2[5];
  }
  return (glf::fs2::MountPoint::Self *)self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::MountPoint::opEq  (binary VA: 0xc98480)
// Original: glf::fs2::MountPoint::operator==
// ----------------------------------------------------------------------------
int glf::fs2::MountPoint::opEq(glf::fs2::MountPoint::Self *self, const glf::fs2::MountPoint::Self *a2)
{
  int v2;
  int v3;

  v2 = glf::fs2::Path::Compare(self, a2);
  v3 = 0;
  if ( v2 == 0 && *((uint32_t *)self + 2) == *((uint32_t *)a2 + 2) )
    LOBYTE(v3) = glf::fs2::Path::Compare(
                   (glf::fs2::MountPoint::Self *)((char *)self + 12),
                   (const glf::fs2::MountPoint::Self *)((char *)a2 + 12)) == 0;
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::MountPoint::IsValid  (binary VA: 0xc984f0)
// Original: glf::fs2::MountPoint::IsValid
// ----------------------------------------------------------------------------
bool glf::fs2::MountPoint::IsValid(glf::fs2::MountPoint::Self *self)
{
  return *((uint32_t *)self + 2) != 0;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Metrics::Reset  (binary VA: 0xc98500)
// Original: glf::fs2::Metrics::Reset
// ----------------------------------------------------------------------------
int glf::fs2::Metrics::Reset(glf::fs2::Metrics::Self *self)
{
  int result;

  for ( result = 0; result != 13; ++result )
    *((uint32_t *)self + result) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Metrics::Construct  (binary VA: 0xc98520)
// Original: glf::fs2::Metrics::Metrics
// ----------------------------------------------------------------------------
glf::fs2::Metrics::Self * glf::fs2::Metrics::Construct(glf::fs2::Metrics::Self *self)
{
  return (glf::fs2::Metrics::Self *)glf::fs2::Metrics::Reset(self);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Metrics::opSub  (binary VA: 0xc98550)
// Original: glf::fs2::Metrics::operator-
// ----------------------------------------------------------------------------
glf::fs2::Metrics::Self * glf::fs2::Metrics::opSub(glf::fs2::Metrics::Self *self, const glf::fs2::Metrics::Self *a2, int a3)
{
  glf::fs2::Metrics::Self *result;
  int v4;
  int i;

  result = self;
  *(uint32_t *)self = *(uint32_t *)a2;
  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 2) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 3) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 4) = *((uint32_t *)a2 + 4);
  *((uint32_t *)self + 5) = *((uint32_t *)a2 + 5);
  *((uint32_t *)self + 6) = *((uint32_t *)a2 + 6);
  *((uint32_t *)self + 7) = *((uint32_t *)a2 + 7);
  *((uint32_t *)self + 8) = *((uint32_t *)a2 + 8);
  *((uint32_t *)self + 9) = *((uint32_t *)a2 + 9);
  *((uint32_t *)self + 10) = *((uint32_t *)a2 + 10);
  v4 = *((uint32_t *)a2 + 12);
  *((uint32_t *)self + 11) = *((uint32_t *)a2 + 11);
  *((uint32_t *)self + 12) = v4;
  for ( i = 0; i != 13; ++i )
    *((uint32_t *)self + i) -= *(uint32_t *)(a3 + 4 * i);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::GetNativeFs  (binary VA: 0xc985d0)
// Original: glf::fs2::GetNativeFs
// ----------------------------------------------------------------------------
int * glf::fs2::GetNativeFs()
{
  if ( byte_20DF450 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20DF450) != 0 )
  {
    dword_20DF458 = 0;
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20DF450);
    __cxa_atexit(
      (void (*)(void *))glf::intrusive_ptr_glf_fs2_FileSystem_89e543::Destroy,
      &dword_20DF458,
      &unk_20D1280);
  }
  return (int *)(&dword_20DF458);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::UnlinkSelf  (binary VA: 0xc98660)
// Original: glf::fs2::FileSystem::UnlinkSelf
// ----------------------------------------------------------------------------
int glf::fs2::FileSystem::UnlinkSelf(glf::fs2::FileSystem::Self *self)
{
  glf::Self **v1;
  glf::Self **v2;
  glf::Self **v4;
  int v5;
  glf::Self **v6;
  glf::RefCounted::Self *v7;

  glf::Mutex::Lock((pthread_mutex_t **)self + 18);
  v1 = *((glf::Self ***)self + 15);
  v2 = *((glf::Self ***)self + 16);
  while ( v2 != v1 )
  {
    if ( self == (glf::fs2::FileSystem::Self *)(uintptr_t)(v1[2]) )
    {
      if ( v2 != v1 + 6 )
      {
        v4 = v1;
        v5 = -1431655765 * (((char *)v2 - (char *)(v1 + 6)) >> 3);
        if ( v5 > 0 )
        {
          while ( 1 )
          {
            v6 = v4 + 6;
            glf::fs2::MountPoint::opAssign(v4, v4 + 6);
            if ( --v5 == 0 )
              break;
            v4 = v6;
          }
          v2 = *((glf::Self ***)self + 16);
        }
      }
      *((uint32_t *)self + 16) = (uint32_t)(uintptr_t)(v2 - 6);
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)(v2 - 3));
      if ( *(v2 - 4) != nullptr )
        glf::intrusive_ptr_release(*(v2 - 4), v7);
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)(v2 - 6));
      v2 = *((glf::Self ***)self + 16);
    }
    else
    {
      v1 += 6;
    }
  }
  return glf::Mutex::Unlock((pthread_mutex_t **)self + 18);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::GetRoot  (binary VA: 0xc98740)
// Original: glf::fs2::FileSystem::GetRoot
// ----------------------------------------------------------------------------
char * glf::fs2::FileSystem::GetRoot(glf::fs2::FileSystem::Self *self)
{
  return (char *)self + 176;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IsInit  (binary VA: 0xc98750)
// Original: glf::fs2::IsInit
// ----------------------------------------------------------------------------
bool glf::fs2::IsInit()
{
  return *glf::fs2::GetNativeFs() != 0;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::Get  (binary VA: 0xc98780)
// Original: glf::fs2::FileSystem::Get
// ----------------------------------------------------------------------------
glf::fs2::FileSystem::Self * glf::fs2::FileSystem::Get(glf::fs2::FileSystem::Self *self)
{
  int v1;
  glf::Console::Self *v3;
  glf::Console::Self *v4;

  v1 = *(uint32_t *)glf::fs2::GetNativeFs(v3);
  *(uint32_t *)self = v1;
  if ( v1 != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v1 + 4), 1u);
  if ( (uint8_t)glf::fs2::IsInit(v4) == 0 && byte_20DF45C == 0 )
  {
    glf::Console::Println(
      (glf::Console::Self *)"%s(%d): %s - %s",
      "F:/G4/G4_UP8Shop/lib/glf/source/fs2/fileSystem.cpp",
      321,
      &off_1CA62F0,
      "glf::fs2::Init() must be called before FileSystem::Get() is valid.");
    byte_20DF45C = 1;
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::GetName  (binary VA: 0xc98810)
// Original: glf::fs2::FileSystem::GetName
// ----------------------------------------------------------------------------
glf::fs2::FileSystem::Self * glf::fs2::FileSystem::GetName(glf::fs2::FileSystem::Self *self, int a2)
{
  int v2;
  glf::fs2::FileSystem::Self *v3;
  int v4;
  typedef const glf::RefCounted::Self *_g4_t_v6;
  typedef glf::Self *_g4_t_v7;
  typedef glf::Self *_g4_t_v8[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (31u + sizeof(_g4_t_v7)) > _g4_s1 ? (31u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v8)) > _g4_s2 ? (32u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 31u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);

  v8[6] = (glf::Self *)&self;
  v2 = a2;
  v3 = self;
  glf::fs2::FileSystem::Get((glf::fs2::FileSystem::Self *)v8);
  if ( (glf::Self *)v2 == v8[0] )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v3), "<ze_native_fs>", (int)(uintptr_t)(&v7));
  }
  else
  {
    v4 = (int)(uintptr_t)(glf::fs2::Path::String((glf::fs2::Path::Self *)(v2 + 176)));
    g4_std::string::construct_copy(v3, v4);
  }
  if ( v8[0] != nullptr )
    glf::intrusive_ptr_release(v8[0], v6);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Deinit  (binary VA: 0xc988b0)
// Original: glf::fs2::Deinit
// ----------------------------------------------------------------------------
glf::fs2::FileSystem::Self * glf::fs2::Deinit()
{
  int *NativeFs;
  glf::fs2::FileSystem::Self *result;
  const glf::RefCounted::Self *v2;

  NativeFs = glf::fs2::GetNativeFs();
  result = (glf::fs2::FileSystem::Self *)*NativeFs;
  if ( *NativeFs != 0 )
  {
    glf::fs2::FileSystem::UnlinkSelf(result);
    result = (glf::fs2::FileSystem::Self *)*NativeFs;
    *NativeFs = 0;
    if ( result != nullptr )
      return (glf::fs2::FileSystem::Self *)glf::intrusive_ptr_release(result, v2);
  }
  else
  {
    *NativeFs = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::MakeAbsolute  (binary VA: 0xc98920)
// Original: glf::fs2::FileSystem::MakeAbsolute
// ----------------------------------------------------------------------------
glf::fs2::FileSystem::Self * glf::fs2::FileSystem::MakeAbsolute(glf::fs2::FileSystem::Self *self, const glf::fs2::Path::Self *a2, const glf::fs2::Path::Self *a3)
{
  const glf::fs2::Path::Self *v3;
  const glf::fs2::Path::Self *v5;
  const glf::fs2::Path::Self *v6;
  const glf::fs2::Path::Self *v7;
  const glf::fs2::Path::Self *v8;
  typedef uint8_t _g4_t_v9[8];
  typedef uint8_t _g4_t_v10[8];
  typedef uint8_t _g4_t_v11[8];
  typedef uint8_t _g4_t_v12[8];
  typedef uint8_t _g4_t_v13[8];
  typedef uint8_t _g4_t_v14[8];
  typedef uint8_t _g4_t_v15[8];
  typedef uint8_t _g4_t_v16[8];
  typedef uint8_t _g4_t_v17[8];
  typedef uint8_t _g4_t_v18[8];
  typedef uint8_t _g4_t_v19[8];
  typedef uint8_t _g4_t_v20[20];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v10)) > _g4_s1 ? (8u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v11)) > _g4_s2 ? (16u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v13)) > _g4_s4 ? (32u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v14)) > _g4_s5 ? (40u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v15)) > _g4_s6 ? (48u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v16)) > _g4_s7 ? (56u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v17)) > _g4_s8 ? (64u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v18)) > _g4_s9 ? (72u + sizeof(_g4_t_v18)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v19)) > _g4_s10 ? (80u + sizeof(_g4_t_v19)) : _g4_s10,
    _g4_s12 = (88u + sizeof(_g4_t_v20)) > _g4_s11 ? (88u + sizeof(_g4_t_v20)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 40u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 48u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 56u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 64u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 72u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 80u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 88u);

  if ( (uint8_t)glf::fs2::Path::HasRootDirectory(a2) != 0 )
  {
    if ( (uint8_t)glf::fs2::Path::HasRootName(a2) != 0 )
    {
      glf::fs2::Path::Construct(self, a2);
    }
    else
    {
      glf::fs2::Path::RootName((glf::fs2::Path::Self *)v9);
      glf::fs2::Path::Construct((glf::fs2::Path::Self *)v16, (const glf::fs2::Path::Self *)v9);
      v5 = (const glf::fs2::Path::Self *)glf::fs2::Path::opDivAssign((glf::fs2::Path::Self *)v16, a2);
      glf::fs2::Path::Construct(self, v5);
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v16);
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v9);
    }
  }
  else if ( (uint8_t)glf::fs2::Path::HasRootName(a2) != 0 )
  {
    glf::fs2::Path::RelativePath((glf::fs2::Path::Self *)v15);
    glf::fs2::Path::RelativePath((glf::fs2::Path::Self *)v13);
    glf::fs2::Path::RootDirectory((glf::fs2::Path::Self *)v11);
    glf::fs2::Path::RootName((glf::fs2::Path::Self *)v10);
    glf::fs2::Path::Construct((glf::fs2::Path::Self *)v17, (const glf::fs2::Path::Self *)v10);
    v6 = (const glf::fs2::Path::Self *)glf::fs2::Path::opDivAssign((glf::fs2::Path::Self *)v17, (const glf::fs2::Path::Self *)v11);
    glf::fs2::Path::Construct((glf::fs2::Path::Self *)v12, v6);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v17);
    glf::fs2::Path::Construct((glf::fs2::Path::Self *)v18, (const glf::fs2::Path::Self *)v12);
    v7 = (const glf::fs2::Path::Self *)glf::fs2::Path::opDivAssign((glf::fs2::Path::Self *)v18, (const glf::fs2::Path::Self *)v13);
    glf::fs2::Path::Construct((glf::fs2::Path::Self *)v14, v7);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v18);
    glf::fs2::Path::Construct((glf::fs2::Path::Self *)v19, (const glf::fs2::Path::Self *)v14);
    v8 = (const glf::fs2::Path::Self *)glf::fs2::Path::opDivAssign((glf::fs2::Path::Self *)v19, (const glf::fs2::Path::Self *)v15);
    glf::fs2::Path::Construct(self, v8);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v19);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v14);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v12);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v10);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v11);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v13);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v15);
  }
  else
  {
    glf::fs2::Path::Construct((glf::fs2::Path::Self *)v20, a3);
    v3 = (const glf::fs2::Path::Self *)glf::fs2::Path::opDivAssign((glf::fs2::Path::Self *)v20, a2);
    glf::fs2::Path::Construct(self, v3);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v20);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::Absolute  (binary VA: 0xc98bc0)
// Original: glf::fs2::FileSystem::Absolute
// ----------------------------------------------------------------------------
glf::fs2::FileSystem::Self * glf::fs2::FileSystem::Absolute(glf::fs2::FileSystem::Self *self, const glf::fs2::Path::Self *a2, glf::fs2::Path::Self *a3)
{
  glf::fs2::FileSystem::MakeAbsolute(self, a3, (const glf::fs2::Path::Self *)((char *)a2 + 176));
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::ResolveFromIndex  (binary VA: 0xc98c10)
// Original: glf::fs2::FileSystem::ResolveFromIndex
// ----------------------------------------------------------------------------
int glf::fs2::FileSystem::ResolveFromIndex(int a1, glf::fs2::Path::Self *a2, glf::fs2::IndexData::Self **a3)
{
  glf::fs2::IndexData::Self **v3;
  uint32_t *v4;
  int v5;
  int v6;
  unsigned int v7;
  unsigned int v8;
  uint32_t *v9;
  const glf::fs2::Path::Self *v10;
  void *v11;
  glf::fs2::IndexData::Self *EntryIdx;
  glf::fs2::IndexData::Self *v13;
  bool v14;
  int v15;
  glf::fs2::IndexData::Self *v17;
  typedef int _g4_t_v18;
  typedef uint8_t _g4_t_v19[36];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v18)) > _g4_s0 ? (4u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v19)) > _g4_s1 ? (8u + sizeof(_g4_t_v19)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);

  *a3 = nullptr;
  a3[1] = nullptr;
  a3[4] = (glf::fs2::IndexData::Self *)-1;
  glf::Mutex::Lock((pthread_mutex_t **)(a1 + 172));
  v3 = *(glf::fs2::IndexData::Self ***)(a1 + 160);
  if ( v3 == *(glf::fs2::IndexData::Self ***)(a1 + 164) )
  {
LABEL_12:
    v15 = 0;
  }
  else
  {
    while ( 1 )
    {
      v13 = *v3;
      v14 = *v3 == nullptr;
      *a3 = *v3;
      if ( !v14 )
      {
        if ( (uint8_t)glf::fs2::Path::Empty((glf::fs2::IndexData::Self *)((char *)v13 + 192)) != 0
          || (v4 = (uint32_t *)glf::fs2::Path::String((glf::fs2::IndexData::Self *)((char *)*a3 + 192)),
              v5 = (int)(uintptr_t)(glf::fs2::Path::String(a2)),
              v6 = g4_std_compat::string_find(v5, *v4, 0, *(uint32_t *)(*v4 - 12)),
              v7 = *(uint32_t *)(*((uint32_t *)*a3 + 48) - 12),
              v6 == -1)
          || v7 >= *(uint32_t *)(*(uint32_t *)a2 - 12) )
        {
          v10 = (const glf::fs2::Path::Self *)(a3 + 2);
          glf::fs2::Path::opAssign((glf::fs2::Path::Self *)(a3 + 2), a2);
        }
        else
        {
          v8 = v7 + 1;
          v9 = (uint32_t *)glf::fs2::Path::String(a2);
          if ( v8 > *(uint32_t *)(*v9 - 12) )
            sub_1900210("basic_string::substr");
          sub_193A6F0(&v18, v9, v8, -1);
          v10 = (const glf::fs2::Path::Self *)(a3 + 2);
          g4_std::string::assign_str(a3 + 2, &v18);
          glf::fs2::Path::Init((glf::fs2::Path::Self *)(a3 + 2));
          v11 = (void *)(v18 - 12);
          if ( (uint32_t *)(v18 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v11);
          }
        }
        EntryIdx = (glf::fs2::IndexData::Self *)glf::fs2::IndexData::GetEntryIdx(*a3, v10);
        a3[4] = EntryIdx;
        if ( EntryIdx != (glf::fs2::IndexData::Self *)-1 )
          break;
      }
      if ( *(glf::fs2::IndexData::Self ***)(a1 + 164) == ++v3 )
        goto LABEL_12;
    }
    v17 = *a3;
    a3[1] = *(glf::fs2::IndexData::Self **)(*((uint32_t *)*a3 + 52) + 4 * *((uint8_t *)EntryIdx + *((uint32_t *)*a3 + 61)));
    glf::fs2::IndexData::GetFullpath((glf::fs2::IndexData::Self *)v19, (unsigned int)(uintptr_t)(v17));
    glf::fs2::Path::opAssign(v10, (const glf::fs2::Path::Self *)v19);
    v15 = 1;
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v19);
  }
  glf::Mutex::Unlock((pthread_mutex_t **)(a1 + 172));
  return v15;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::GatherAllSearchPaths  (binary VA: 0xc98e30)
// Original: glf::fs2::FileSystem::GatherAllSearchPaths
// ----------------------------------------------------------------------------
int glf::fs2::FileSystem::GatherAllSearchPaths(pthread_mutex_t **self, std::list<glf::fs2::MountPoint::Self, glf::allocator<glf::fs2::MountPoint::Self>> *a2, bool a3)
{
  pthread_mutex_t *lock;
  char *v4;
  uint32_t *j;
  int v6;
  volatile int32_t *v7;
  std::list<glf::fs2::MountPoint::Self, glf::allocator<glf::fs2::MountPoint::Self>> *v9;
  glf::Self **v10;
  glf::Self **v11;
  glf::Self **v12;
  std::list<glf::fs2::MountPoint::Self, glf::allocator<glf::fs2::MountPoint::Self>> *v13;
  char *v14;
  uint32_t *i;
  int v16;
  volatile int32_t *v17;
  typedef const glf::RefCounted::Self *_g4_t_v18;
  typedef char *_g4_t_v19;
  typedef char *_g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  typedef std::list<glf::fs2::MountPoint::Self, glf::allocator<glf::fs2::MountPoint::Self>> *_g4_t_Value;
  typedef uint32_t *_g4_t_v23;
  typedef uint32_t *_g4_t_v24;
  typedef uint32_t **_g4_t_v25;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v18)) > _g4_s0 ? (4u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v19)) > _g4_s1 ? (16u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v20)) > _g4_s2 ? (16u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v21)) > _g4_s3 ? (28u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_Value)) > _g4_s4 ? (28u + sizeof(_g4_t_Value)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v23)) > _g4_s5 ? (28u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v24)) > _g4_s6 ? (32u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v25)) > _g4_s7 ? (36u + sizeof(_g4_t_v25)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_Value &Value = *reinterpret_cast<_g4_t_Value *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);

  if ( !a3 )
    goto LABEL_2;
  Value = (std::list<glf::fs2::MountPoint::Self, glf::allocator<glf::fs2::MountPoint::Self>> *)glf::TlsNode::GetValue(
                                                                                     (glf::TlsNode::Self *)(self + 31),
                                                                                     true);
  if ( a2 == Value )
    goto LABEL_2;
  v9 = *(std::list<glf::fs2::MountPoint::Self, glf::allocator<glf::fs2::MountPoint::Self>> **)a2;
  v10 = *(glf::Self ***)Value;
  if ( *(std::list<glf::fs2::MountPoint::Self, glf::allocator<glf::fs2::MountPoint::Self>> **)a2 != a2 )
  {
    v11 = *(glf::Self ***)a2;
    if ( v10 == (glf::Self **)Value )
      goto LABEL_23;
    while ( 1 )
    {
      glf::fs2::MountPoint::opAssign(v11 + 2, v10 + 2);
      v11 = (glf::Self **)*v11;
      v10 = (glf::Self **)*v10;
      if ( a2 == (std::list<glf::fs2::MountPoint::Self, glf::allocator<glf::fs2::MountPoint::Self>> *)v11 )
        break;
      if ( Value == (std::list<glf::fs2::MountPoint::Self, glf::allocator<glf::fs2::MountPoint::Self>> *)v10 )
      {
        v9 = (std::list<glf::fs2::MountPoint::Self, glf::allocator<glf::fs2::MountPoint::Self>> *)v11;
        goto LABEL_23;
      }
    }
    v9 = (std::list<glf::fs2::MountPoint::Self, glf::allocator<glf::fs2::MountPoint::Self>> *)v11;
  }
  if ( Value == (std::list<glf::fs2::MountPoint::Self, glf::allocator<glf::fs2::MountPoint::Self>> *)v10 )
  {
LABEL_23:
    v12 = (glf::Self **)v9;
    if ( a2 != v9 )
    {
      while ( 1 )
      {
        v13 = (std::list<glf::fs2::MountPoint::Self, glf::allocator<glf::fs2::MountPoint::Self>> *)(*v12);
        sub_1901940(v12);
        glf::fs2::Path::Destroy((glf::fs2::Path::Self *)(v12 + 5));
        if ( v12[4] != nullptr )
          glf::intrusive_ptr_release(v12[4], v18);
        glf::fs2::Path::Destroy((glf::fs2::Path::Self *)(v12 + 2));
        glf::Free((glf::Self *)v12);
        if ( a2 == v13 )
          break;
        v12 = (glf::Self **)v13;
      }
    }
    goto LABEL_2;
  }
  v24 = (uint32_t *)(&v24);
  v25 = &v24;
  do
  {
    v14 = (char *)glf::Alloc(0x20u);
    if ( v14 != (char *)-8 )
    {
      v20 = v14;
      glf::fs2::MountPoint::Construct((glf::fs2::MountPoint::Self *)(v14 + 8), (const glf::fs2::MountPoint::Self *)(v10 + 2));
      v14 = v20;
    }
    sub_1901920(v14, &v24);
    v10 = (glf::Self **)*v10;
  }
  while ( Value != (std::list<glf::fs2::MountPoint::Self, glf::allocator<glf::fs2::MountPoint::Self>> *)v10 );
  if ( v24 != (uint32_t *)(uintptr_t)(&v24) )
  {
    sub_19018A0(a2, v24, &v24);
    if ( v24 != (uint32_t *)(uintptr_t)(&v24) )
    {
      for ( i = v24; ; i = v23 )
      {
        v23 = (uint32_t *)*i;
        glf::fs2::Path::Destroy((glf::fs2::Path::Self *)(i + 5));
        v17 = (volatile int32_t *)i[4];
        if ( v17 != nullptr )
        {
          if ( __sync_fetch_and_add(v17 + 1, 0xFFFFFFFF) == 1 )
          {
            G4_VCALL<void>(v17, 8);
            G4_VCALL<void>(v17, 16);
          }
          else
          {
            v16 = *((uint32_t *)v17 + 1);
            _mm_mfence();
            if ( v16 == 1 )
              G4_VCALL<void>(v17, 12);
          }
        }
        glf::fs2::Path::Destroy((glf::fs2::Path::Self *)(i + 2));
        glf::Free((glf::Self *)i);
        if ( v23 == (uint32_t *)(uintptr_t)(&v24) )
          break;
      }
    }
  }
LABEL_2:
  glf::Mutex::Lock(self + 30);
  v24 = (uint32_t *)(&v24);
  v25 = &v24;
  lock = *(self + 28);
  if ( lock != (pthread_mutex_t *)(self + 28) )
  {
    do
    {
      v4 = (char *)glf::Alloc(0x20u);
      if ( v4 != (char *)-8 )
      {
        v19 = v4;
        glf::fs2::MountPoint::Construct(
          (glf::fs2::MountPoint::Self *)(v4 + 8),
          (const glf::fs2::MountPoint::Self *)(&((int32_t *)(lock))[0] + 2));
        v4 = v19;
      }
      sub_1901920(v4, &v24);
      lock = (pthread_mutex_t *)((int32_t *)(lock))[0];
    }
    while ( self + 28 != (pthread_mutex_t **)lock );
    if ( v24 != (uint32_t *)(uintptr_t)(&v24) )
    {
      sub_19018A0(a2, v24, &v24);
      if ( v24 != (uint32_t *)(uintptr_t)(&v24) )
      {
        for ( j = v24; ; j = v21 )
        {
          v21 = (uint32_t *)*j;
          glf::fs2::Path::Destroy((glf::fs2::Path::Self *)(j + 5));
          v7 = (volatile int32_t *)j[4];
          if ( v7 != nullptr )
          {
            if ( __sync_fetch_and_add(v7 + 1, 0xFFFFFFFF) == 1 )
            {
              G4_VCALL<void>(v7, 8);
              G4_VCALL<void>(v7, 16);
            }
            else
            {
              v6 = *((uint32_t *)v7 + 1);
              _mm_mfence();
              if ( v6 == 1 )
                G4_VCALL<void>(v7, 12);
            }
          }
          glf::fs2::Path::Destroy((glf::fs2::Path::Self *)(j + 2));
          glf::Free((glf::Self *)j);
          if ( v21 == (uint32_t *)(uintptr_t)(&v24) )
            break;
        }
      }
    }
  }
  return glf::Mutex::Unlock(self + 30);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::RandomString  (binary VA: 0xc99160)
// Original: glf::fs2::RandomString
// ----------------------------------------------------------------------------
glf::fs2::Self * glf::fs2::RandomString(glf::fs2::Self *self, size_t a2)
{
  int v2;
  unsigned int v3;
  uint8_t *v4;
  int v6[7];

  sub_1938A90((int)(uintptr_t)(self), a2, 95, (int)(uintptr_t)(v6));
  v2 = *(uint32_t *)self;
  if ( *(uint32_t *)(*(uint32_t *)self - 12) != 0 )
  {
    v3 = 0;
    do
    {
      if ( *(int *)(v2 - 4) >= 0 )
      {
        sub_19397C0(self);
        v2 = *(uint32_t *)self;
      }
      v4 = (uint8_t *)(v3 + v2);
      ++v3;
      *v4 = byte_1CA6300[lrand48() % 0x3Fu];
      v2 = *(uint32_t *)self;
    }
    while ( v3 < *(uint32_t *)(*(uint32_t *)self - 12) );
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::ResolveMount  (binary VA: 0xc99200)
// Original: glf::fs2::FileSystem::ResolveMount
// ----------------------------------------------------------------------------
glf::fs2::FileSystem::Self * glf::fs2::FileSystem::ResolveMount(glf::fs2::FileSystem::Self *self, pthread_mutex_t **a2, glf::fs2::Path::Self *a3, glf::fs2::Path::Self *a4)
{
  pthread_mutex_t *v4;
  pthread_mutex_t *v5;
  const char *s;
  size_t v7;
  void *v8;
  unsigned int v9;
  unsigned int v10;
  int owner;
  unsigned int v13;
  const glf::fs2::Path::Self *v14;
  void *v15;
  typedef glf::fs2::Path::Self *_g4_t_v16;
  typedef size_t _g4_t_v17;
  typedef uint32_t *_g4_t_v18;
  typedef int *_g4_t_p_kind;
  typedef pthread_mutex_t *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint8_t _g4_t_v22[8];
  typedef char _g4_t_v23[4];
  typedef int _g4_t_v24;
  typedef uint8_t _g4_t_v25[8];
  typedef uint8_t _g4_t_v26[36];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v16)) > _g4_s0 ? (8u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v17)) > _g4_s1 ? (12u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v18)) > _g4_s2 ? (16u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_p_kind)) > _g4_s3 ? (20u + sizeof(_g4_t_p_kind)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v20)) > _g4_s4 ? (24u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v21)) > _g4_s5 ? (44u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v22)) > _g4_s6 ? (48u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v23)) > _g4_s7 ? (56u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v24)) > _g4_s8 ? (60u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v25)) > _g4_s9 ? (64u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v26)) > _g4_s10 ? (72u + sizeof(_g4_t_v26)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_p_kind &p_kind = *reinterpret_cast<_g4_t_p_kind *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 48u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 56u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 60u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 64u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 72u);

  v18 = (uint32_t *)glf::fs2::Path::String(a3);
  glf::Mutex::Lock(a2 + 18);
  v4 = a2[15];
  v20 = v4;
  if ( v4 == a2[16] )
  {
LABEL_9:
    *(uint32_t *)self = 0;
  }
  else
  {
    v5 = a2[15];
    p_kind = &((int32_t *)(v4))[3];
    while ( 1 )
    {
      s = (const char *)glf::fs2::Path::c_str((glf::fs2::Path::Self *)(&((int32_t *)(v5))[0] + 3));
      v7 = strlen(s);
      v16 = (glf::fs2::Path::Self *)g4_std_compat::string_find(v18, s, 0, v7);
      v17 = *(uint32_t *)(*(int *)((char *)p_kind  + ((uintptr_t)((char *)v5) - (uintptr_t)(char *)(v20))) - 12);
      v8 = (void *)glf::fs2::Path::c_str((glf::fs2::Path::Self *)(&((int32_t *)(v5))[0] + 3));
      sub_1938800((int)(uintptr_t)(v18), 0, *(uint32_t *)(*(int *)((char *)p_kind  + ((uintptr_t)((char *)v5) - (uintptr_t)(char *)(v20))) - 12), v8, v17);
      if ( v16 == nullptr )
        break;
      if ( ++v5 == a2[16] )
        goto LABEL_9;
    }
    glf::fs2::Path::Construct((glf::fs2::Path::Self *)v22, (const glf::fs2::Path::Self *)v5);
    v9 = *(uint32_t *)(*v18 - 12);
    v10 = *(uint32_t *)(((int32_t *)(v5))[3] - 12);
    if ( v9 > v10 )
    {
      v13 = v10 + 1;
      if ( v13 > v9 )
        sub_1900210("basic_string::substr");
      sub_193A6F0(&v21, v18, v13, -1);
      g4_std::string::construct_copy(v23, &v21);
      v24 = 0;
      glf::fs2::Path::Init((glf::fs2::Path::Self *)v23);
      glf::fs2::Path::Construct((glf::fs2::Path::Self *)v26, (const glf::fs2::Path::Self *)v22);
      v14 = (const glf::fs2::Path::Self *)glf::fs2::Path::opDivAssign((glf::fs2::Path::Self *)v26, (const glf::fs2::Path::Self *)v23);
      glf::fs2::Path::Construct((glf::fs2::Path::Self *)v25, v14);
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v26);
      glf::fs2::Path::opAssign((glf::fs2::Path::Self *)v22, (const glf::fs2::Path::Self *)v25);
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v25);
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v23);
      v15 = (void *)(v21 - 12);
      if ( (uint32_t *)(v21 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v15);
      }
    }
    glf::fs2::Path::opAssign(a4, (const glf::fs2::Path::Self *)v22);
    owner = ((int32_t *)(v5))[2];
    *(uint32_t *)self = owner;
    if ( owner != 0 )
      __sync_add_and_fetch((volatile int32_t *)(owner + 4), 1u);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v22);
  }
  glf::Mutex::Unlock(a2 + 18);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::Unmount  (binary VA: 0xc99490)
// Original: glf::fs2::FileSystem::Unmount
// ----------------------------------------------------------------------------
int glf::fs2::FileSystem::Unmount(pthread_mutex_t **self, const glf::fs2::Path::Self *a2)
{
  glf::Self **v2;
  char v3;
  glf::Self **v4;
  int v5;
  glf::Self **v6;
  glf::fs2::Path::Self *v7;
  glf::RefCounted::Self *v9;
  glf::Self **v10;
  uint8_t v11;

  glf::Mutex::Lock(self + 18);
  v2 = (glf::Self **)*(self + 15);
  v3 = 0;
  if ( v2 != (glf::Self **)*(self + 16) )
  {
    while ( glf::fs2::Path::Compare((glf::fs2::Path::Self *)(v2 + 3), a2) != 0 )
    {
      v2 += 6;
      if ( v2 == (glf::Self **)*(self + 16) )
      {
        v3 = 0;
        goto LABEL_12;
      }
    }
    v4 = (glf::Self **)*(self + 16);
    if ( v4 != v2 + 6 )
    {
      v5 = -1431655765 * (((char *)v4 - (char *)(v2 + 6)) >> 3);
      if ( v5 > 0 )
      {
        do
        {
          v6 = v2;
          v2 += 6;
          glf::fs2::MountPoint::opAssign(v6, v2);
          --v5;
        }
        while ( v5 != 0 );
        v4 = (glf::Self **)*(self + 16);
      }
    }
    v7 = (glf::fs2::Path::Self *)(v4 - 6);
    *(self + 16) = (pthread_mutex_t *)(v4 - 6);
    v10 = v4;
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)(v4 - 3));
    if ( *(v10 - 4) != nullptr )
      glf::intrusive_ptr_release(*(v10 - 4), v9);
    glf::fs2::Path::Destroy(v7);
    v3 = 1;
  }
LABEL_12:
  v11 = v3;
  glf::Mutex::Unlock(self + 18);
  return v11;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::GetMounts  (binary VA: 0xc99590)
// Original: glf::fs2::FileSystem::GetMounts
// ----------------------------------------------------------------------------
char * glf::fs2::FileSystem::GetMounts(glf::fs2::FileSystem::Self *self)
{
  return (char *)self + 60;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::Recurse  (binary VA: 0xc995a0)
// Original: glf::fs2::FileSystem::Recurse
// ----------------------------------------------------------------------------
unsigned int glf::fs2::FileSystem::Recurse(glf::fs2::FileSystem::Self *self, glf::fs2::IndexData::Self *a2, int a3, const glf::fs2::PathInfo::Self *a4, char a5)
{
  int v5;
  int v6;
  unsigned int v7;
  unsigned int result;
  unsigned int v9;
  unsigned int v10;
  int v11;
  int v12;
  unsigned int v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  uint16_t v18; // di
  uint32_t *v19;
  unsigned int v20;
  int v21;
  bool v22;
  int v23;
  char v24[4];

  v5 = a3;
  v6 = *(uint32_t *)(a3 + 16);
  v7 = *(uint32_t *)(a3 + 12);
  if ( a5 == 0 )
  {
    result = (v6 - v7) >> 2;
    if ( result == 0 )
      return result;
    result = *(uint32_t *)(a3 + 12);
    *(uint32_t *)v24 = (uint16_t)(uintptr_t)(a4);
    v9 = 0;
    v10 = result;
    v11 = *(uint32_t *)(a3 + 16);
    v12 = a3;
    while ( 1 )
    {
      v14 = *(uint32_t *)(v10 + 4 * v9);
      if ( *(uint32_t *)v14 == 2 )
      {
        v23 = v12;
        ++v9;
        *(uint32_t *)(*((uint32_t *)self + 76)
                  + 4
                  * glf::fs2::IndexData::NewFile(
                      self,
                      (int)(uintptr_t)(a2),
                      (uint16_t)(uintptr_t)(a4),
                      *(const char **)(v14 + 8),
                      *(glf::fs2::FileSystem::Self **)(v14 + 24),
                      *(const glf::fs2::Path::Self **)(v14 + 28))) = *(uint32_t *)(v14 + 32);
        v12 = v23;
        v11 = *(uint32_t *)(v23 + 16);
        result = *(uint32_t *)(v23 + 12);
        v13 = (int)(v11 - result) >> 2;
        if ( v9 >= v13 )
        {
LABEL_8:
          v5 = v12;
          v6 = v11;
          v15 = v13;
LABEL_9:
          if ( v15 != 0 )
          {
            v16 = result;
            v17 = 0;
            v18 = *(uint16_t *)(*((uint32_t *)self + 70) + 12 * *(uint32_t *)v24 + 2);
            while ( 1 )
            {
              v19 = *(uint32_t **)(result + 4 * v17);
              if ( *v19 == 3 )
              {
                ++v17;
                glf::fs2::FileSystem::Recurse(self, a2, (int)(uintptr_t)(v19), (const glf::fs2::PathInfo::Self *)v18, a5);
                v6 = *(uint32_t *)(v5 + 16);
                v16 = *(uint32_t *)(v5 + 12);
                ++v18;
                result = (int)(v6 - v16) >> 2;
                if ( v17 >= result )
                  return result;
              }
              else
              {
                ++v17;
                result = (int)(v6 - v16) >> 2;
                if ( v17 >= result )
                  return result;
              }
              result = v16;
            }
          }
          return result;
        }
      }
      else
      {
        ++v9;
        v13 = (int)(v11 - result) >> 2;
        if ( v9 >= v13 )
          goto LABEL_8;
      }
      v10 = result;
    }
  }
  result = (v6 - v7) >> 2;
  if ( result != 0 )
  {
    result = *(uint32_t *)(a3 + 12);
    v20 = 0;
    *(uint32_t *)v24 = (uint16_t)(uintptr_t)(a4);
    while ( 1 )
    {
      v21 = *(uint32_t *)(v7 + 4 * v20);
      if ( *(uint32_t *)v21 == 3 )
      {
        glf::fs2::IndexData::NewDir(
          self,
          (int)(uintptr_t)(a2),
          (uint16_t)(uintptr_t)(a4),
          *(const char **)(v21 + 8),
          *(glf::fs2::FileSystem::Self **)(v21 + 24),
          *(const glf::fs2::Path::Self **)(v21 + 28));
        result = *(uint32_t *)(a3 + 12);
        v6 = *(uint32_t *)(a3 + 16);
      }
      ++v20;
      v15 = (int)(v6 - result) >> 2;
      if ( v20 >= v15 )
        break;
      v7 = result;
    }
    goto LABEL_9;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::SortChildren  (binary VA: 0xc99780)
// Original: glf::fs2::SortChildren
// ----------------------------------------------------------------------------
unsigned int glf::fs2::SortChildren(glf::fs2::Self *self)
{
  char *v1;
  size_t *v2;
  unsigned int v3;
  char *v4;
  int i;
  size_t v6;
  size_t n;
  size_t v8;
  int v9;
  int v10;
  unsigned int result;
  char *v12;
  unsigned int v13;
  char *j;
  glf::fs2::Self *v15;
  glf::fs2::PathInfo::Self *s2;
  int v17;
  char *v18;
  char *v19;
  int v20;
  char *v21;
  char *v22;

  v22 = *((char **)self + 4);
  v1 = v22;
  v2 = *((size_t **)self + 3);
  if ( v22 != (char *)v2 )
  {
    _BitScanReverse(&v3, (v22 - (char *)v2) >> 2);
    sub_C97480(v2, v22, 2 * (31 - (v3 ^ 0x1F)));
    if ( v22 - (char *)v2 <= 67 )
    {
      sub_C97330((int)(uintptr_t)(v2), v22);
    }
    else
    {
      sub_C97330((int)(uintptr_t)(v2), v2 + 16);
      v21 = (char *)(v2 + 16);
      if ( v22 != (char *)(v2 + 16) )
      {
        do
        {
          v18 = v21;
          v4 = v21 - 4;
          v20 = *(uint32_t *)v21;
          for ( i = *(uint32_t *)v21; ; i = v20 )
          {
            v17 = *(uint32_t *)v4;
            v19 = v4;
            v6 = *(uint32_t *)(*(uint32_t *)(i + 8) - 12);
            n = v6;
            v8 = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)v4 + 8) - 12);
            if ( v8 <= v6 )
              n = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)v4 + 8) - 12);
            v9 = v6 - v8;
            v10 = memcmp(*(const void **)(i + 8), *(const void **)(*(uint32_t *)v4 + 8), n);
            if ( v10 != 0 )
              v9 = v10;
            v4 -= 4;
            if ( v9 >= 0 )
              break;
            *(uint32_t *)v18 = v17;
            v18 = v19;
          }
          v21 += 4;
          *(uint32_t *)v18 = v20;
        }
        while ( v22 != v21 );
      }
    }
    v22 = *((char **)self + 3);
    v1 = *((char **)self + 4);
  }
  result = (unsigned int)(v1 - v22) >> 2;
  if ( result != 0 )
  {
    v12 = v22;
    v13 = 0;
    for ( j = v22; ; j = v12 )
    {
      v15 = *(glf::fs2::Self **)&j[4 * v13];
      if ( *(uint32_t *)v15 == 3 )
      {
        ++v13;
        glf::fs2::SortChildren(v15, s2);
        v1 = *((char **)self + 4);
        v12 = *((char **)self + 3);
        result = (v1 - v12) >> 2;
        if ( v13 >= result )
          return result;
      }
      else
      {
        ++v13;
        result = (v1 - v12) >> 2;
        if ( v13 >= result )
          return result;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::ClearIndex  (binary VA: 0xc99910)
// Original: glf::fs2::FileSystem::ClearIndex
// ----------------------------------------------------------------------------
int glf::fs2::FileSystem::ClearIndex(int a1, uint32_t *a2)
{
  volatile int32_t **v3;
  volatile int32_t **v4;
  volatile int32_t **v6;
  int v7;
  int v8;
  volatile int32_t *v9;
  volatile int32_t *v10;
  glf::Self *v11;
  const glf::RefCounted::Self *v12;
  uint32_t *v13;
  volatile int32_t **v14;
  uint32_t *v15;

  glf::Mutex::Lock((pthread_mutex_t **)(a1 + 172));
  v3 = *(volatile int32_t ***)(a1 + 160);
  v4 = *(volatile int32_t ***)(a1 + 164);
  while ( v3 != v4 )
  {
    if ( *v3 != (volatile int32_t *)*a2 )
    {
      ++v3;
      continue;
    }
    if ( v3 + 1 == v4 || v4 - (v3 + 1) <= 0 )
      goto LABEL_18;
    v6 = v3;
    v14 = v3;
    v15 = a2;
    v7 = v4 - (v3 + 1);
    do
    {
      while ( 1 )
      {
        v9 = v6[1];
        if ( v9 != nullptr )
          __sync_add_and_fetch(v9 + 1, 1u);
        v10 = *v6;
        *v6 = v9;
        if ( v10 != nullptr )
        {
          if ( __sync_fetch_and_add(v10 + 1, 0xFFFFFFFF) == 1 )
            break;
          v8 = *((uint32_t *)v10 + 1);
          _mm_mfence();
          if ( v8 == 1 )
            G4_VCALL<void>(v10, 12);
        }
        ++v6;
        if ( --v7 == 0 )
          goto LABEL_17;
      }
      G4_VCALL<void>(v10, 8);
      ++v6;
      G4_VCALL<void>(v10, 16);
      --v7;
    }
    while ( v7 != 0 );
LABEL_17:
    v3 = v14;
    a2 = v15;
    v4 = *(volatile int32_t ***)(a1 + 164);
LABEL_18:
    *(uint32_t *)(a1 + 164) = (uint32_t)(uintptr_t)(v4 - 1);
    v11 = (glf::Self *)*--v4;
    if ( v11 != nullptr )
    {
      v13 = a2;
      glf::intrusive_ptr_release(v11, v12);
      a2 = v13;
      v4 = *(volatile int32_t ***)(a1 + 164);
    }
  }
  return glf::Mutex::Unlock((pthread_mutex_t **)(a1 + 172));
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::GetError  (binary VA: 0xc99a60)
// Original: glf::fs2::FileSystem::GetError
// ----------------------------------------------------------------------------
void * glf::fs2::FileSystem::GetError(glf::fs2::FileSystem::Self *self)
{
  return glf::TlsNode::GetValue((glf::fs2::FileSystem::Self *)((char *)self + 76), true);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::SetError  (binary VA: 0xc99a90)
// Original: glf::fs2::FileSystem::SetError
// ----------------------------------------------------------------------------
uint32_t * glf::fs2::FileSystem::SetError(glf::fs2::FileSystem::Self *self, int a2, const glf::ErrorCategory::Self *a3, const char *a4)
{
  uint32_t *result;

  result = (uint32_t *)(glf::TlsNode::GetValue((glf::fs2::FileSystem::Self *)((char *)self + 76), true));
  result[2] = a2;
  *result = (uint32_t)(uintptr_t)(a3);
  result[1] = (uint32_t)(uintptr_t)(a4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::Copy  (binary VA: 0xc99ae0)
// Original: glf::fs2::FileSystem::Copy
// ----------------------------------------------------------------------------
int glf::fs2::FileSystem::Copy(glf::fs2::FileSystem::Self *self)
{
  const glf::ErrorCategory::Self *SystemCategory;
  glf::Self *v3;

  SystemCategory = (const glf::ErrorCategory::Self *)glf::GetSystemCategory(v3);
  glf::fs2::FileSystem::SetError(self, 2, SystemCategory, "Copy");
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::Remove  (binary VA: 0xc99b20)
// Original: glf::fs2::FileSystem::Remove
// ----------------------------------------------------------------------------
int glf::fs2::FileSystem::Remove(glf::fs2::FileSystem::Self *self)
{
  const glf::ErrorCategory::Self *SystemCategory;
  glf::Self *v3;

  SystemCategory = (const glf::ErrorCategory::Self *)glf::GetSystemCategory(v3);
  glf::fs2::FileSystem::SetError(self, 2, SystemCategory, "Remove");
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::Move  (binary VA: 0xc99b60)
// Original: glf::fs2::FileSystem::Move
// ----------------------------------------------------------------------------
int glf::fs2::FileSystem::Move(glf::fs2::FileSystem::Self *self)
{
  const glf::ErrorCategory::Self *SystemCategory;
  glf::Self *v3;

  SystemCategory = (const glf::ErrorCategory::Self *)glf::GetSystemCategory(v3);
  glf::fs2::FileSystem::SetError(self, 2, SystemCategory, "Move");
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::Mkdir  (binary VA: 0xc99ba0)
// Original: glf::fs2::FileSystem::Mkdir
// ----------------------------------------------------------------------------
int glf::fs2::FileSystem::Mkdir(glf::fs2::FileSystem::Self *self)
{
  const glf::ErrorCategory::Self *SystemCategory;
  glf::Self *v3;

  SystemCategory = (const glf::ErrorCategory::Self *)glf::GetSystemCategory(v3);
  glf::fs2::FileSystem::SetError(self, 2, SystemCategory, "Mkdir");
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::OpenV  (binary VA: 0xc99be0)
// Original: glf::fs2::FileSystem::OpenV
// ----------------------------------------------------------------------------
int glf::fs2::FileSystem::OpenV(glf::fs2::FileSystem::Self *a1)
{
  const glf::ErrorCategory::Self *SystemCategory;
  glf::Self *v3;

  SystemCategory = (const glf::ErrorCategory::Self *)glf::GetSystemCategory(v3);
  glf::fs2::FileSystem::SetError(a1, 2, SystemCategory, "OpenV");
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::GetStatusV  (binary VA: 0xc99c20)
// Original: glf::fs2::FileSystem::GetStatusV
// ----------------------------------------------------------------------------
glf::fs2::FileSystem::Self * glf::fs2::FileSystem::GetStatusV(glf::fs2::FileSystem::Self *self, const glf::fs2::Path::Self *a2)
{
  const glf::ErrorCategory::Self *SystemCategory;
  glf::Self *v4;

  SystemCategory = (const glf::ErrorCategory::Self *)glf::GetSystemCategory(v4);
  glf::fs2::FileSystem::SetError((glf::fs2::FileSystem::Self *)(a2), 2, SystemCategory, "GetStatusV");
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0xFFFF;
  *((uint32_t *)self + 3) = -1;
  *((uint32_t *)self + 4) = -1;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = -1;
  *((uint32_t *)self + 7) = -1;
  *((uint32_t *)self + 8) = -1;
  *((uint32_t *)self + 9) = -1;
  *((uint32_t *)self + 10) = -1;
  *((uint32_t *)self + 11) = -1;
  *((uint32_t *)self + 12) = -1;
  glf::fs2::Path::Construct((glf::fs2::FileSystem::Self *)((char *)self + 52));
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::OpenDirV  (binary VA: 0xc99cd0)
// Original: glf::fs2::FileSystem::OpenDirV
// ----------------------------------------------------------------------------
uint32_t * glf::fs2::FileSystem::OpenDirV(uint32_t *a1, glf::fs2::FileSystem::Self *a2)
{
  const glf::ErrorCategory::Self *SystemCategory;
  glf::Self *v4;

  SystemCategory = (const glf::ErrorCategory::Self *)glf::GetSystemCategory(v4);
  glf::fs2::FileSystem::SetError(a2, 2, SystemCategory, "OpenDirV");
  *a1 = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::LoadIndex  (binary VA: 0xc99d30)
// Original: glf::fs2::FileSystem::LoadIndex
// ----------------------------------------------------------------------------
int * glf::fs2::FileSystem::LoadIndex(int *a1, int a2, int a3, volatile int32_t **a4)
{
  volatile int32_t *v4;
  int v5;
  typedef glf::Self *_g4_t_v7;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);

  v4 = *a4;
  v7 = (glf::Self *)v4;
  if ( v4 != nullptr )
    __sync_add_and_fetch(v4 + 1, 1u);
  v5 = (int)(uintptr_t)(glf::fs2::IndexData::FromFile(a3));
  if ( v7 != nullptr )
    glf::intrusive_ptr_release(v7, (const glf::RefCounted::Self *)&v7);
  *a1 = v5;
  if ( v5 != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v5 + 4), 1u);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::RemoveIndex  (binary VA: 0xc99db0)
// Original: glf::fs2::FileSystem::RemoveIndex
// ----------------------------------------------------------------------------
int glf::fs2::FileSystem::RemoveIndex(int a1, volatile int32_t **a2)
{
  volatile int32_t **v2;
  volatile int32_t **v3;
  volatile int32_t **v5;
  int v6;
  int v7;
  volatile int32_t *v8;
  volatile int32_t *v9;
  const glf::RefCounted::Self *v10;

  glf::Mutex::Lock((pthread_mutex_t **)(a1 + 172));
  v2 = *(volatile int32_t ***)(a1 + 160);
  v3 = *(volatile int32_t ***)(a1 + 164);
  if ( v2 == v3 )
    return glf::Mutex::Unlock((pthread_mutex_t **)(a1 + 172));
  while ( *a2 != *v2 )
  {
    if ( ++v2 == v3 )
      return glf::Mutex::Unlock((pthread_mutex_t **)(a1 + 172));
  }
  v5 = v2 + 1;
  if ( v2 + 1 == v3 )
    goto LABEL_20;
  v6 = v3 - v5;
  if ( v6 <= 0 )
    goto LABEL_20;
  while ( 1 )
  {
    v8 = v2[1];
    if ( v8 != nullptr )
      __sync_add_and_fetch(v8 + 1, 1u);
    v9 = *v2;
    *v2 = v8;
    if ( v9 != nullptr )
      break;
LABEL_12:
    --v6;
    v2 = v5;
    if ( v6 == 0 )
      goto LABEL_19;
LABEL_13:
    ++v5;
  }
  if ( __sync_fetch_and_add(v9 + 1, 0xFFFFFFFF) != 1 )
  {
    v7 = *((uint32_t *)v9 + 1);
    _mm_mfence();
    if ( v7 == 1 )
      G4_VCALL<void>(v9, 12);
    goto LABEL_12;
  }
  G4_VCALL<void>(v9, 8);
  G4_VCALL<void>(v9, 16);
  --v6;
  v2 = v5;
  if ( v6 != 0 )
    goto LABEL_13;
LABEL_19:
  v3 = *(volatile int32_t ***)(a1 + 164);
LABEL_20:
  *(uint32_t *)(a1 + 164) = (uint32_t)(uintptr_t)(v3 - 1);
  if ( *(v3 - 1) != nullptr )
    glf::intrusive_ptr_release((glf::Self *)*(v3 - 1), v10);
  return glf::Mutex::Unlock((pthread_mutex_t **)(a1 + 172));
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::ForceLowerCase  (binary VA: 0xc99ec0)
// Original: glf::fs2::FileSystem::ForceLowerCase
// ----------------------------------------------------------------------------
glf::fs2::FileSystem::Self * glf::fs2::FileSystem::ForceLowerCase(glf::fs2::FileSystem::Self *self, bool a2)
{
  *((uint8_t *)self + 188) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::IsForcingLowerCase  (binary VA: 0xc99ee0)
// Original: glf::fs2::FileSystem::IsForcingLowerCase
// ----------------------------------------------------------------------------
int glf::fs2::FileSystem::IsForcingLowerCase(glf::fs2::FileSystem::Self *self)
{
  return *((uint8_t *)self + 188);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::GetMetrics  (binary VA: 0xc99ef0)
// Original: glf::fs2::FileSystem::GetMetrics
// ----------------------------------------------------------------------------
char * glf::fs2::FileSystem::GetMetrics(glf::fs2::FileSystem::Self *self)
{
  return (char *)self + 8;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::GetMetrics_eac99f00  (binary VA: 0xc99f00)
// Original: glf::fs2::FileSystem::GetMetrics
// ----------------------------------------------------------------------------
char * glf::fs2::FileSystem::GetMetrics_eac99f00(glf::fs2::FileSystem::Self *self)
{
  return (char *)self + 8;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::ResetMetrics  (binary VA: 0xc99f10)
// Original: glf::fs2::FileSystem::ResetMetrics
// ----------------------------------------------------------------------------
int glf::fs2::FileSystem::ResetMetrics(glf::fs2::FileSystem::Self *self)
{
  return glf::fs2::Metrics::Reset((glf::fs2::Metrics::Self *)((glf::fs2::FileSystem::Self *)((char *)self + 8)));
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::LockedSearchPaths::Construct  (binary VA: 0xc99f40)
// Original: glf::fs2::LockedSearchPaths::LockedSearchPaths
// ----------------------------------------------------------------------------
uint32_t * glf::fs2::LockedSearchPaths::Construct(uint32_t *a1, int a2, pthread_mutex_t **a3)
{
  uint32_t *result;

  result = a1;
  *a1 = ((uint32_t)(uintptr_t)&off_206DCF0);
  a1[1] = 0;
  a1[2] = a2;
  a1[3] = (uint32_t)(uintptr_t)(a3);
  if ( a3 != nullptr )
    return (uint32_t *)glf::Mutex::Lock(a3);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::GetThreadSearchPaths  (binary VA: 0xc99f90)
// Original: glf::fs2::FileSystem::GetThreadSearchPaths
// ----------------------------------------------------------------------------
glf::fs2::FileSystem::Self * glf::fs2::FileSystem::GetThreadSearchPaths(glf::fs2::FileSystem::Self *self, int a2)
{
  void *Value;
  volatile int32_t *v3;

  Value = glf::TlsNode::GetValue((glf::TlsNode::Self *)(a2 + 124), true);
  v3 = (volatile int32_t *)glf::MemObject::opNew(0x10u);
  glf::fs2::LockedSearchPaths::Construct((uint32_t *)(v3), (int)(uintptr_t)(Value), nullptr);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(v3);
  if ( v3 != nullptr )
    __sync_add_and_fetch(v3 + 1, 1u);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::GetSearchPaths  (binary VA: 0xc9a020)
// Original: glf::fs2::FileSystem::GetSearchPaths
// ----------------------------------------------------------------------------
glf::fs2::FileSystem::Self * glf::fs2::FileSystem::GetSearchPaths(glf::fs2::FileSystem::Self *self, int a2)
{
  volatile int32_t *v2;

  v2 = (volatile int32_t *)glf::MemObject::opNew(0x10u);
  glf::fs2::LockedSearchPaths::Construct((uint32_t *)(v2), a2 + 112, (pthread_mutex_t **)(a2 + 120));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(v2);
  if ( v2 != nullptr )
    __sync_add_and_fetch(v2 + 1, 1u);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::LockedSearchPaths::get  (binary VA: 0xc9a090)
// Original: glf::fs2::LockedSearchPaths::get
// ----------------------------------------------------------------------------
int glf::fs2::LockedSearchPaths::get(glf::fs2::LockedSearchPaths::Self *self)
{
  return *((uint32_t *)self + 2);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::LockedSearchPaths::get_eac9a0a0  (binary VA: 0xc9a0a0)
// Original: glf::fs2::LockedSearchPaths::get
// ----------------------------------------------------------------------------
int glf::fs2::LockedSearchPaths::get_eac9a0a0(glf::fs2::LockedSearchPaths::Self *self)
{
  return *((uint32_t *)self + 2);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::LockedSearchPaths::push_back  (binary VA: 0xc9a0b0)
// Original: glf::fs2::LockedSearchPaths::push_back
// ----------------------------------------------------------------------------
bool glf::fs2::LockedSearchPaths::push_back(glf::fs2::LockedSearchPaths::Self *self, const glf::fs2::MountPoint::Self *a2)
{
  int v3;
  char *v4;

  if ( glf::fs2::MountPoint::IsValid((glf::fs2::MountPoint::Self *)(a2)) )
  {
    v3 = *((uint32_t *)self + 2);
    v4 = (char *)glf::Alloc(0x20u);
    if ( v4 != (char *)-8 )
      glf::fs2::MountPoint::Construct((glf::fs2::MountPoint::Self *)(v4 + 8), a2);
    sub_1901920(v4, v3);
  }
  return glf::fs2::MountPoint::IsValid((glf::fs2::MountPoint::Self *)(a2));
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::LockedSearchPaths::push_front  (binary VA: 0xc9a140)
// Original: glf::fs2::LockedSearchPaths::push_front
// ----------------------------------------------------------------------------
bool glf::fs2::LockedSearchPaths::push_front(glf::fs2::LockedSearchPaths::Self *self, const glf::fs2::MountPoint::Self *a2)
{
  int v3;
  char *v4;

  if ( glf::fs2::MountPoint::IsValid((glf::fs2::MountPoint::Self *)(a2)) )
  {
    v3 = **((uint32_t **)self + 2);
    v4 = (char *)glf::Alloc(0x20u);
    if ( v4 != (char *)-8 )
      glf::fs2::MountPoint::Construct((glf::fs2::MountPoint::Self *)(v4 + 8), a2);
    sub_1901920(v4, v3);
  }
  return glf::fs2::MountPoint::IsValid((glf::fs2::MountPoint::Self *)(a2));
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::LockedSearchPaths::pop_back  (binary VA: 0xc9a1d0)
// Original: glf::fs2::LockedSearchPaths::pop_back
// ----------------------------------------------------------------------------
void glf::fs2::LockedSearchPaths::pop_back(glf::fs2::LockedSearchPaths::Self *self)
{
  glf::Self **v1;
  const glf::RefCounted::Self *v2;

  v1 = *(glf::Self ***)(*((uint32_t *)self + 2) + 4);
  sub_1901940(v1);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)(v1 + 5));
  if ( v1[4] != nullptr )
    glf::intrusive_ptr_release(v1[4], v2);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)(v1 + 2));
  glf::Free((glf::Self *)v1);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::LockedSearchPaths::pop_front  (binary VA: 0xc9a240)
// Original: glf::fs2::LockedSearchPaths::pop_front
// ----------------------------------------------------------------------------
void glf::fs2::LockedSearchPaths::pop_front(glf::fs2::LockedSearchPaths::Self *self)
{
  glf::Self **v1;
  const glf::RefCounted::Self *v2;

  v1 = **((glf::Self ****)self + 2);
  sub_1901940(v1);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)(v1 + 5));
  if ( v1[4] != nullptr )
    glf::intrusive_ptr_release(v1[4], v2);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)(v1 + 2));
  glf::Free((glf::Self *)v1);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::LockedSearchPaths::remove  (binary VA: 0xc9a2b0)
// Original: glf::fs2::LockedSearchPaths::remove
// ----------------------------------------------------------------------------
int glf::fs2::LockedSearchPaths::remove(glf::fs2::LockedSearchPaths::Self *self, const glf::fs2::Path::Self *a2, bool a3)
{
  uint32_t **v3;
  uint32_t *v4;
  volatile int32_t *v5;
  int v6;
  volatile int32_t *v8;
  uint8_t v9;
  uint32_t *v10;

  v9 = 0;
  v3 = *((uint32_t ***)self + 2);
  v4 = *v3;
  while ( v3 != (uint32_t **)(uintptr_t)(v4) )
  {
    if ( glf::fs2::Path::Compare((glf::fs2::Path::Self *)(v4 + 2), a2) != 0 )
    {
      v4 = (uint32_t *)*v4;
    }
    else
    {
      v10 = (uint32_t *)*v4;
      sub_1901940(v4);
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)(v4 + 5));
      v5 = (volatile int32_t *)v4[4];
      if ( v5 != nullptr )
      {
        if ( __sync_fetch_and_add(v5 + 1, 0xFFFFFFFF) == 1 )
        {
          v8 = v5;
          G4_VCALL<void>(v5, 8);
          G4_VCALL<void>(v8, 16);
        }
        else
        {
          v6 = *((uint32_t *)v5 + 1);
          _mm_mfence();
          if ( v6 == 1 )
            G4_VCALL<void>(v5, 12);
        }
      }
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)(v4 + 2));
      glf::Free((glf::Self *)v4);
      if ( a3 )
        return 1;
      v4 = v10;
      v9 = 1;
    }
    v3 = *((uint32_t ***)self + 2);
  }
  return v9;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::LockedSearchPaths::remove  (binary VA: 0xc9a3b0)
// Original: glf::fs2::LockedSearchPaths::remove
// ----------------------------------------------------------------------------
int glf::fs2::LockedSearchPaths::remove(glf::fs2::LockedSearchPaths::Self *self, int a2, bool a3)
{
  uint32_t *v3;
  int result;
  uint32_t *v5;
  uint32_t *v6;
  glf::Self *v7;
  const glf::RefCounted::Self *v8;

  v3 = *((uint32_t **)self + 2);
  result = 0;
  v5 = (uint32_t *)*v3;
  if ( a3 )
  {
    while ( 1 )
    {
      if ( v3 == v5 )
        return 0;
      if ( v5[7] == a2 )
        break;
      v5 = (uint32_t *)*v5;
    }
    sub_1901940(v5);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)(v5 + 5));
    if ( v5[4] != 0 )
      glf::intrusive_ptr_release((glf::Self *)v5[4], v8);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)(v5 + 2));
    glf::Free((glf::Self *)v5);
    return 1;
  }
  else
  {
    while ( v3 != v5 )
    {
      while ( v5[7] == a2 )
      {
        v6 = (uint32_t *)*v5;
        sub_1901940(v5);
        glf::fs2::Path::Destroy((glf::fs2::Path::Self *)(v5 + 5));
        if ( v5[4] != 0 )
          glf::intrusive_ptr_release((glf::Self *)v5[4], v8);
        glf::fs2::Path::Destroy((glf::fs2::Path::Self *)(v5 + 2));
        v7 = (glf::Self *)v5;
        v5 = v6;
        glf::Free(v7);
        v3 = *((uint32_t **)self + 2);
        result = 1;
        if ( v3 == v6 )
          return result;
      }
      v5 = (uint32_t *)*v5;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::LockedSearchPaths::remove  (binary VA: 0xc9a4a0)
// Original: glf::fs2::LockedSearchPaths::remove
// ----------------------------------------------------------------------------
int glf::fs2::LockedSearchPaths::remove(glf::fs2::LockedSearchPaths::Self *self, const glf::fs2::MountPoint::Self *a2, bool a3)
{
  return glf::fs2::LockedSearchPaths::remove(self, *((uint32_t *)a2 + 5), a3);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::LockedSearchPaths::size  (binary VA: 0xc9a4e0)
// Original: glf::fs2::LockedSearchPaths::size
// ----------------------------------------------------------------------------
int glf::fs2::LockedSearchPaths::size(glf::fs2::LockedSearchPaths::Self *self)
{
  uint32_t **v1;
  int result;
  uint32_t *i;

  v1 = *((uint32_t ***)self + 2);
  result = 0;
  for ( i = *v1; v1 != (uint32_t **)(uintptr_t)(i); ++result )
    i = (uint32_t *)*i;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::LockedSearchPaths::clear  (binary VA: 0xc9a500)
// Original: glf::fs2::LockedSearchPaths::clear
// ----------------------------------------------------------------------------
uint32_t * glf::fs2::LockedSearchPaths::clear(glf::fs2::LockedSearchPaths::Self *self)
{
  uint32_t *v1;
  int v2;
  uint32_t *v3;
  volatile int32_t *v4;
  uint32_t *v6;

  v6 = *((uint32_t **)self + 2);
  v1 = (uint32_t *)*v6;
  if ( (uint32_t *)*v6 != v6 )
  {
    while ( 1 )
    {
      v3 = (uint32_t *)*v1;
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)(v1 + 5));
      v4 = (volatile int32_t *)v1[4];
      if ( v4 != nullptr )
      {
        if ( __sync_fetch_and_add(v4 + 1, 0xFFFFFFFF) == 1 )
        {
          G4_VCALL<void>(v4, 8);
          G4_VCALL<void>(v4, 16);
        }
        else
        {
          v2 = *((uint32_t *)v4 + 1);
          _mm_mfence();
          if ( v2 == 1 )
            G4_VCALL<void>(v4, 12);
        }
      }
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)(v1 + 2));
      glf::Free((glf::Self *)v1);
      if ( v3 == v6 )
        break;
      v1 = v3;
    }
  }
  *v6 = (uint32_t)(uintptr_t)(v6);
  v6[1] = (uint32_t)(uintptr_t)(v6);
  return v6;
}



// ============================================================================
// Address:   0xc9a5b0 (size: 17 bytes)
// Symbol:    _ZN3glf3fs210FileSystem21SetModifyPathFunctionEPFvRNS0_4PathEE
// Demangled: glf::fs2::FileSystem::SetModifyPathFunction(void (*)(glf::fs2::Path &))
// ============================================================================
void (*glf::fs2::FileSystem::SetModifyPathFunction(
        glf::fs2::FileSystem::Self *self,
        void (*a2)(glf::fs2::Path::Self *)))(glf::fs2::Path::Self *)
{
  *((uint32_t *)self + 46) = (uint32_t)(uintptr_t)(a2);
  return a2;
}
// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::GetModifyPathFunction  (binary VA: 0xc9a5d0)
// Original: glf::fs2::FileSystem::GetModifyPathFunction
// ----------------------------------------------------------------------------
int glf::fs2::FileSystem::GetModifyPathFunction(glf::fs2::FileSystem::Self *self)
{
  return *((uint32_t *)self + 46);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::FixPath  (binary VA: 0xc9a5e0)
// Original: glf::fs2::FileSystem::FixPath
// ----------------------------------------------------------------------------
glf::fs2::FileSystem::Self * glf::fs2::FileSystem::FixPath(glf::fs2::FileSystem::Self *self, const glf::fs2::Path::Self *a2, glf::fs2::Path::Self *a3)
{
  void (*v3)(glf::fs2::FileSystem::Self *);

  glf::fs2::Path::Construct(self, a3);
  v3 = *((void (**)(glf::fs2::FileSystem::Self *))a2 + 46);
  if ( v3 != nullptr )
    v3(self);
  if ( *((uint8_t *)a2 + 188) != 0 )
    glf::fs2::Path::MakeLower(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::OpenDirNoSearchPaths  (binary VA: 0xc9a650)
// Original: glf::fs2::FileSystem::OpenDirNoSearchPaths
// ----------------------------------------------------------------------------
uint32_t * glf::fs2::FileSystem::OpenDirNoSearchPaths(uint32_t *a1, glf::fs2::Path::Self *a2, glf::fs2::Path::Self *a3, int a4, int a5)
{
  int v5;
  volatile int32_t *v6;
  int v8;
  uint32_t *v9;
  const char *s;
  size_t v11;
  void *v12;
  unsigned int v13;
  unsigned int v14;
  glf::Self *v15;
  unsigned int v16;
  const glf::fs2::Path::Self *v17;
  void *v18;
  volatile int32_t *v19;
  typedef glf::RefCounted::Self *_g4_t_v20;
  typedef glf::fs2::Path::Self *_g4_t_v21;
  typedef size_t _g4_t_v22;
  typedef uint32_t *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef pthread_mutex_t **_g4_t_v26;
  typedef int _g4_t_v27;
  typedef glf::Self *_g4_t_v28;
  typedef unsigned int _g4_t_v29[2];
  typedef uint8_t _g4_t_v30[8];
  typedef uint8_t _g4_t_v31[4];
  typedef int _g4_t_v32;
  typedef uint8_t _g4_t_v33[8];
  typedef uint8_t _g4_t_v34[8];
  typedef int _g4_t_v35[2];
  typedef uint8_t _g4_t_v36[8];
  typedef int _g4_t_v37;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (4u + sizeof(_g4_t_v20)) > _g4_s0 ? (4u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v21)) > _g4_s1 ? (40u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v22)) > _g4_s2 ? (44u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v23)) > _g4_s3 ? (48u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v24)) > _g4_s4 ? (52u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v25)) > _g4_s5 ? (56u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v26)) > _g4_s6 ? (60u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v27)) > _g4_s7 ? (76u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v28)) > _g4_s8 ? (80u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (84u + sizeof(_g4_t_v29)) > _g4_s9 ? (84u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_v30)) > _g4_s10 ? (92u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (100u + sizeof(_g4_t_v31)) > _g4_s11 ? (100u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (104u + sizeof(_g4_t_v32)) > _g4_s12 ? (104u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (108u + sizeof(_g4_t_v33)) > _g4_s13 ? (108u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (116u + sizeof(_g4_t_v34)) > _g4_s14 ? (116u + sizeof(_g4_t_v34)) : _g4_s14,
    _g4_s16 = (124u + sizeof(_g4_t_v35)) > _g4_s15 ? (124u + sizeof(_g4_t_v35)) : _g4_s15,
    _g4_s17 = (132u + sizeof(_g4_t_v36)) > _g4_s16 ? (132u + sizeof(_g4_t_v36)) : _g4_s16,
    _g4_s18 = (140u + sizeof(_g4_t_v37)) > _g4_s17 ? (140u + sizeof(_g4_t_v37)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 44u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 56u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 60u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 76u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 80u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 84u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 92u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 100u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 104u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 108u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 116u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 124u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 132u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 140u);

  glf::fs2::FileSystem::FixPath((glf::fs2::FileSystem::Self *)v29, a2, a3);
  if ( (a4 & 0x10) != 0 )
  {
    v19 = (volatile int32_t *)glf::MemObject::opNew(0x464u);
    glf::fs2::RecursiveDir::Construct(v19, a2, v29, a4 & 0xFFFFFFEF, a5);
    *a1 = (uint32_t)(uintptr_t)(v19);
    if ( v19 != nullptr )
      __sync_add_and_fetch(v19 + 1, 1u);
  }
  else
  {
    glf::fs2::Path::Construct((glf::fs2::Path::Self *)v36);
    v35[0] = 0;
    v35[1] = 0;
    v37 = -1;
    if ( (uint8_t)glf::fs2::FileSystem::ResolveFromIndex(
                            (int)(uintptr_t)(a2),
                            (glf::fs2::Path::Self *)v29,
                            (glf::fs2::IndexData::Self **)v35) != 0 )
    {
      v5 = (uint16_t)v37;
      v6 = (volatile int32_t *)glf::MemObject::opNew(0x46Cu);
      glf::fs2::DirectoryIndexed::Construct(
        (glf::fs2::Dir::Self *)v6,
        (int)(uintptr_t)(a2),
        v35[0],
        v5,
        (glf::fs2::Path::Self *)v36,
        a4,
        a5);
      *a1 = (uint32_t)(uintptr_t)(v6);
      if ( v6 != nullptr )
        __sync_add_and_fetch(v6 + 1, 1u);
    }
    else
    {
      v23 = (uint32_t *)glf::fs2::Path::String((glf::fs2::Path::Self *)v29);
      v26 = (pthread_mutex_t **)((char *)a2 + 72);
      glf::Mutex::Lock((pthread_mutex_t **)a2 + 18);
      v8 = *((uint32_t *)a2 + 15);
      v25 = v8;
      if ( v8 == *((uint32_t *)a2 + 16) )
      {
LABEL_14:
        glf::Mutex::Unlock(v26);
        (*(void (**)(uint32_t *))(*(uint32_t *)a2 + 48))(a1);
      }
      else
      {
        v9 = *((uint32_t **)a2 + 15);
        v24 = v8 + 12;
        while ( 1 )
        {
          while ( 1 )
          {
            s = (const char *)glf::fs2::Path::c_str((glf::fs2::Path::Self *)(v9 + 3));
            v11 = strlen(s);
            v21 = (glf::fs2::Path::Self *)g4_std_compat::string_find(v23, s, 0, v11);
            v22 = *(uint32_t *)(*(uint32_t *)((char *)v9 + v24 - v25) - 12);
            v12 = (void *)glf::fs2::Path::c_str((glf::fs2::Path::Self *)(v9 + 3));
            sub_1938800((int)(uintptr_t)(v23), 0, *(uint32_t *)(*(uint32_t *)((char *)v9 + v24 - v25) - 12), v12, v22);
            if ( v21 == nullptr )
              break;
            v9 += 6;
            if ( v9 == *((uint32_t **)a2 + 16) )
              goto LABEL_14;
          }
          glf::fs2::Path::Construct((glf::fs2::Path::Self *)v30, (const glf::fs2::Path::Self *)v9);
          v13 = *(uint32_t *)(*v23 - 12);
          v14 = *(uint32_t *)(*(uint32_t *)((char *)v9 + v24 - v25) - 12);
          if ( v13 > v14 )
          {
            v16 = v14 + 1;
            if ( v16 > v13 )
              sub_1900210("basic_string::substr");
            sub_193A6F0(&v27, v23, v16, -1);
            g4_std::string::construct_copy(v31, &v27);
            v32 = 0;
            glf::fs2::Path::Init((glf::fs2::Path::Self *)v31);
            glf::fs2::Path::Construct((glf::fs2::Path::Self *)v34, (const glf::fs2::Path::Self *)v30);
            v17 = (const glf::fs2::Path::Self *)glf::fs2::Path::opDivAssign((glf::fs2::Path::Self *)v34, (const glf::fs2::Path::Self *)v31);
            glf::fs2::Path::Construct((glf::fs2::Path::Self *)v33, v17);
            glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v34);
            glf::fs2::Path::opAssign((glf::fs2::Path::Self *)v30, (const glf::fs2::Path::Self *)v33);
            glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v33);
            glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v31);
            v18 = (void *)(v27 - 12);
            if ( (uint32_t *)(v27 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v18);
            }
          }
          v20 = (glf::RefCounted::Self *)v9[2];
          glf::fs2::FileSystem::OpenDir(&v28);
          v15 = v28;
          if ( v28 != nullptr )
            break;
          v9 += 6;
          glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v30);
          if ( v9 == *((uint32_t **)a2 + 16) )
            goto LABEL_14;
        }
        *a1 = (uint32_t)(uintptr_t)(v28);
        __sync_add_and_fetch((volatile int32_t *)v15 + 1, 1u);
        if ( v28 != nullptr )
          glf::intrusive_ptr_release(v28, v20);
        glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v30);
        glf::Mutex::Unlock(v26);
      }
    }
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v36);
  }
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v29);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::OpenDir  (binary VA: 0xc9ab00)
// Original: glf::fs2::FileSystem::OpenDir
// ----------------------------------------------------------------------------
glf::Self ** glf::fs2::FileSystem::OpenDir(glf::Self **a1, pthread_mutex_t **a2, glf::fs2::Path::Self *a3, int a4, int a5)
{
  glf::Self *v5;
  const glf::fs2::Path::Self *v6;
  glf::Self *v7;
  glf::Self *v8;
  glf::Self **result;
  volatile int32_t *v10;
  int v11;
  volatile int32_t *v12;
  glf::Self *v13;
  int v14;
  volatile int32_t *v15;
  typedef const glf::RefCounted::Self *_g4_t_v16;
  typedef pthread_mutex_t **_g4_t_v17;
  typedef glf::Self **_g4_t_v18;
  typedef int _g4_t_v19;
  typedef glf::Self **_g4_t_v20;
  typedef int _g4_t_v21;
  typedef glf::fs2::Path::Self *_g4_t_v22;
  typedef glf::Self **_g4_t_v23;
  typedef glf::Self *_g4_t_v24;
  typedef glf::Self *_g4_t_v25[4];
  typedef uint8_t _g4_t_v26[8];
  typedef uint32_t _g4_t_v27[8];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v17)) > _g4_s1 ? (32u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v18)) > _g4_s2 ? (36u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v19)) > _g4_s3 ? (40u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v20)) > _g4_s4 ? (44u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v21)) > _g4_s5 ? (48u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v22)) > _g4_s6 ? (52u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v23)) > _g4_s7 ? (52u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v24)) > _g4_s8 ? (72u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v25)) > _g4_s9 ? (76u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_v26)) > _g4_s10 ? (92u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (100u + sizeof(_g4_t_v27)) > _g4_s11 ? (100u + sizeof(_g4_t_v27)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 52u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 52u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 72u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 76u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 92u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 100u);

  v27[4] = (uint32_t)(uintptr_t)(&a1);
  v17 = a2;
  v22 = a3;
  v21 = a4;
  v18 = a1;
  v19 = a5;
  if ( (uint8_t)glf::fs2::Path::IsAbsolute(a3) == 0 )
  {
    if ( (v21 & 0x20) != 0 )
    {
      v10 = (volatile int32_t *)glf::MemObject::opNew(0x464u);
      glf::fs2::DirWithSearchPaths::Construct(v10, v17, v22, v21 & 0xFFFFFFDF, v19);
      result = v18;
      *v18 = (glf::Self *)v10;
      if ( v10 != nullptr )
      {
        __sync_add_and_fetch(v10 + 1, 1u);
        return v18;
      }
      return result;
    }
    v25[0] = (glf::Self *)v25;
    v25[1] = (glf::Self *)v25;
    glf::fs2::FileSystem::GatherAllSearchPaths(
      v17,
      (std::list<glf::fs2::MountPoint::Self, glf::allocator<glf::fs2::MountPoint::Self>> *)v25,
      true);
    v5 = v25[0];
    if ( (glf::Self **)v25[0] != v25 )
    {
      do
      {
        glf::fs2::Path::Construct((glf::fs2::Path::Self *)v27, (glf::Self *)((char *)v5 + 8));
        v6 = (const glf::fs2::Path::Self *)glf::fs2::Path::opDivAssign((glf::fs2::Path::Self *)v27, v22);
        glf::fs2::Path::Construct((glf::fs2::Path::Self *)v26, v6);
        glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v27);
        glf::fs2::FileSystem::OpenDirNoSearchPaths((uint32_t *)(&v24), *((glf::fs2::Path::Self **)v5 + 4), (glf::fs2::Path::Self *)v26, v21, v19);
        v7 = v24;
        if ( v24 != nullptr )
        {
          *v18 = v24;
          __sync_add_and_fetch((volatile int32_t *)v7 + 1, 1u);
          if ( v24 != nullptr )
            glf::intrusive_ptr_release(v24, v16);
          glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v26);
          v8 = v25[0];
          if ( (glf::Self **)v25[0] != v25 )
          {
            while ( 1 )
            {
              v23 = *(glf::Self ***)v8;
              glf::fs2::Path::Destroy((glf::Self *)((char *)v8 + 20));
              v12 = *((volatile int32_t **)v8 + 4);
              if ( v12 != nullptr )
              {
                if ( __sync_fetch_and_add(v12 + 1, 0xFFFFFFFF) == 1 )
                {
                  G4_VCALL<void>(v12, 8);
                  G4_VCALL<void>(v12, 16);
                }
                else
                {
                  v11 = *((uint32_t *)v12 + 1);
                  _mm_mfence();
                  if ( v11 == 1 )
                    G4_VCALL<void>(v12, 12);
                }
              }
              glf::fs2::Path::Destroy((glf::Self *)((char *)v8 + 8));
              glf::Free(v8);
              if ( v23 == v25 )
                break;
              v8 = (glf::Self *)v23;
            }
          }
          return v18;
        }
        glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v26);
        v5 = *(glf::Self **)v5;
      }
      while ( v5 != (glf::Self *)v25 );
      v13 = v25[0];
      if ( (glf::Self **)v25[0] != v25 )
      {
        while ( 1 )
        {
          v20 = *(glf::Self ***)v13;
          glf::fs2::Path::Destroy((glf::Self *)((char *)v13 + 20));
          v15 = *((volatile int32_t **)v13 + 4);
          if ( v15 != nullptr )
          {
            if ( __sync_fetch_and_add(v15 + 1, 0xFFFFFFFF) == 1 )
            {
              G4_VCALL<void>(v15, 8);
              G4_VCALL<void>(v15, 16);
            }
            else
            {
              v14 = *((uint32_t *)v15 + 1);
              _mm_mfence();
              if ( v14 == 1 )
                G4_VCALL<void>(v15, 12);
            }
          }
          glf::fs2::Path::Destroy((glf::Self *)((char *)v13 + 8));
          glf::Free(v13);
          if ( v20 == v25 )
            break;
          v13 = (glf::Self *)v20;
        }
      }
    }
  }
  glf::fs2::FileSystem::OpenDirNoSearchPaths((uint32_t *)(v18), (glf::fs2::Path::Self *)v17, v22, v21, v19);
  return v18;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::Walk  (binary VA: 0xc9ade0)
// Original: glf::fs2::FileSystem::Walk
// ----------------------------------------------------------------------------
unsigned int glf::fs2::FileSystem::Walk(pthread_mutex_t **self, const glf::fs2::Path::Self *a2, glf::fs2::IndexData::Self *a3, int a4, uint16_t a5, const glf::fs2::Path::Self *a6, bool a7)
{
  uint16_t v7; // si
  glf::Self *v8;
  bool v9;
  glf::Self *v10;
  const char *v11;
  uint16_t *v12;
  int v13;
  int v14;
  unsigned int result;
  char *FolderName;
  const glf::fs2::Path::Self *v17;
  glf::Self *v18;
  const char *v19;
  int v20;
  uint32_t *v21;
  int v22;
  uint16_t *v23;
  typedef const glf::RefCounted::Self *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef bool _g4_t_v26;
  typedef glf::fs2::Path::Self *_g4_t_v27;
  typedef glf::fs2::Path::Self *_g4_t_v28;
  typedef glf::fs2::FileSystem::Self *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef uint16_t _g4_t_v31[2];
  typedef uint16_t _g4_t_v32[2];
  typedef glf::fs2::IndexData::Self *_g4_t_v33;
  typedef glf::fs2::Dir::Self *_g4_t_v34;
  typedef glf::Self *_g4_t_v35[4];
  typedef int _g4_t_v36[2];
  typedef uint32_t _g4_t_v37[8];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_v24)) > _g4_s0 ? (4u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v25)) > _g4_s1 ? (32u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (43u + sizeof(_g4_t_v26)) > _g4_s2 ? (43u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v27)) > _g4_s3 ? (48u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v28)) > _g4_s4 ? (52u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v29)) > _g4_s5 ? (56u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v30)) > _g4_s6 ? (60u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v31)) > _g4_s7 ? (68u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v32)) > _g4_s8 ? (68u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v33)) > _g4_s9 ? (72u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (95u + sizeof(_g4_t_v34)) > _g4_s10 ? (95u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v35)) > _g4_s11 ? (96u + sizeof(_g4_t_v35)) : _g4_s11,
    _g4_s13 = (112u + sizeof(_g4_t_v36)) > _g4_s12 ? (112u + sizeof(_g4_t_v36)) : _g4_s12,
    _g4_s14 = (120u + sizeof(_g4_t_v37)) > _g4_s13 ? (120u + sizeof(_g4_t_v37)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 4u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 43u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 52u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 56u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 60u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 68u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 68u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 72u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 95u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 96u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 112u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 120u);

  v37[4] = (uint32_t)(uintptr_t)(&self);
  v29 = (glf::fs2::FileSystem::Self *)self;
  v28 = (glf::fs2::Path::Self *)(a2);
  v33 = a3;
  v30 = a4;
  v7 = a5;
  v27 = (glf::fs2::Path::Self *)(a6);
  v26 = a7;
  if ( a7 )
  {
    glf::fs2::FileSystem::OpenDir(v35, self, (glf::fs2::Path::Self *)(a6), 1, 0);
    v8 = v35[0];
    *(uint32_t *)v31 = v7;
    if ( v35[0] == nullptr )
      goto LABEL_5;
    while ( 1 )
    {
      v9 = G4_VCALL<uint8_t>(v8, 24) == 0;
      v10 = v35[0];
      if ( v9 )
        break;
      v11 = (const char *)G4_VCALL<int>(v35[0], 20);
      glf::fs2::IndexData::NewDir(v33, v30, v7, v11, v29, v28);
      glf::fs2::Dir::MoveNext(v35[0]);
      v8 = v35[0];
      if ( v35[0] == nullptr )
        goto LABEL_5;
    }
  }
  else
  {
    glf::fs2::FileSystem::OpenDir(v35, self, (glf::fs2::Path::Self *)(a6), 2, 0);
    v18 = v35[0];
    *(uint32_t *)v31 = v7;
    if ( v35[0] == nullptr )
      goto LABEL_5;
    while ( 1 )
    {
      v9 = G4_VCALL<uint8_t>(v18, 24) == 0;
      v10 = v35[0];
      if ( v9 )
        break;
      v19 = (const char *)G4_VCALL<int>(v35[0], 20);
      v20 = glf::fs2::IndexData::NewFile(v33, v30, v31[0], v19, v29, v28);
      if ( (v30 & 8) != 0 )
      {
        v21 = (uint32_t *)(*((uint32_t *)v33 + 76) + 4 * v20);
        *v21 = *(uint32_t *)(G4_VCALL<int>(v35[0], 20) + 1036);
      }
      if ( (v30 & 0x4000) != 0 )
      {
        v22 = *((uint32_t *)v33 + 82);
        *(uint32_t *)(v22 + 8 * v20) = 0;
        *(uint32_t *)(v22 + 8 * v20 + 4) = 0;
      }
      if ( (v30 & 0x8000) != 0 )
      {
        v23 = (uint16_t *)(*((uint32_t *)v33 + 85) + 2 * v20);
        *v23 = *(uint32_t *)(G4_VCALL<int>(v35[0], 20) + 1032);
      }
      glf::fs2::Dir::MoveNext(v35[0]);
      v18 = v35[0];
      if ( v35[0] == nullptr )
        goto LABEL_5;
    }
  }
  if ( v10 != nullptr )
    glf::intrusive_ptr_release(v10, v24);
LABEL_5:
  v12 = (uint16_t *)(*((uint32_t *)v33 + 70) + 12 * *(uint32_t *)v31);
  v13 = v12[1];
  LOWORD(v14) = v13;
  result = (uint16_t)v13 + *v12;
  *(uint32_t *)v32 = result;
  if ( result > (uint16_t)v13 )
  {
    do
    {
      v25 = v13;
      FolderName = (char *)glf::fs2::IndexData::GetFolderName(v33, v14);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v36), FolderName, (int)(uintptr_t)(&v34));
      v36[1] = 0;
      glf::fs2::Path::Init((glf::fs2::Path::Self *)v36);
      glf::fs2::Path::Construct((glf::fs2::Path::Self *)v37, v27);
      v17 = (const glf::fs2::Path::Self *)glf::fs2::Path::opDivAssign((glf::fs2::Path::Self *)v37, (const glf::fs2::Path::Self *)v36);
      glf::fs2::Path::Construct((glf::fs2::Path::Self *)v35, v17);
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v37);
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v36);
      glf::fs2::FileSystem::Walk((pthread_mutex_t **)(v29), v28, v33, v30, v14, (const glf::fs2::Path::Self *)v35, v26);
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v35);
      v13 = v25 + 1;
      v14 = (uint16_t)(v25 + 1);
    }
    while ( *(int *)v32 > v14 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::CreateIndex  (binary VA: 0xc9b130)
// Original: glf::fs2::FileSystem::CreateIndex
// ----------------------------------------------------------------------------
glf::fs2::FileSystem::Self * glf::fs2::FileSystem::CreateIndex(glf::fs2::FileSystem::Self *self, const glf::fs2::Path::Self *a2, glf::RefCounted::Self *a3, int a4)
{
  int *v4;
  glf::fs2::Path::Self *Root;
  int v6;
  bool v7;
  glf::fs2::FileSystem::Self *result;
  volatile int32_t *v9;
  uint16_t v10;
  char *v11;
  const char *v12;
  const char *v13;
  typedef glf::fs2::IndexData::Self *_g4_t_v14;
  typedef glf::RefCounted::Self *_g4_t_v15;
  typedef uint16_t _g4_t_v16;
  typedef uint16_t _g4_t_v17;
  typedef pthread_mutex_t **_g4_t_v18;
  typedef uint8_t _g4_t_v19[5];
  typedef int _g4_t_v20[9];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v15)) > _g4_s1 ? (4u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v16)) > _g4_s2 ? (40u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v17)) > _g4_s3 ? (40u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v18)) > _g4_s4 ? (44u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (51u + sizeof(_g4_t_v19)) > _g4_s5 ? (51u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v20)) > _g4_s6 ? (56u + sizeof(_g4_t_v20)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 51u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 56u);

  v18 = (pthread_mutex_t **)((char *)a2 + 172);
  glf::Mutex::Lock((pthread_mutex_t **)a2 + 43);
  v4 = *((int **)a2 + 40);
  if ( v4 == *((int **)a2 + 41) )
  {
LABEL_9:
    glf::Mutex::Unlock(v18);
    *(uint32_t *)&v19[1] = (uint32_t)(uintptr_t)(a2);
    __sync_add_and_fetch((volatile int32_t *)a2 + 1, 1u);
    v9 = (volatile int32_t *)glf::MemObject::opNew(0x190u);
    glf::fs2::IndexData::Construct((glf::fs2::FileSystem::Self *)v9, (int)(uintptr_t)(a3), a4, (int)(uintptr_t)(&v19[1]));
    if ( *(uint32_t *)&v19[1] != 0 )
      glf::intrusive_ptr_release(*(glf::Self **)&v19[1], v15);
    v10 = 0;
    if ( a4 >= 0 )
    {
      v11 = (char *)glf::fs2::Path::c_str(a3);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v20), v11, (int)(uintptr_t)(v19));
      v20[1] = 0;
      glf::fs2::Path::Init((glf::fs2::Path::Self *)v20);
      v12 = (const char *)glf::fs2::Path::c_str(a3);
      v16 = glf::fs2::IndexData::NewDir((glf::fs2::IndexData::Self *)v9, a4, 0, v12, a2, (const glf::fs2::Path::Self *)v20);
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v20);
      v10 = v16;
    }
    v17 = v10;
    glf::fs2::FileSystem::Walk((pthread_mutex_t **)a2, (const glf::fs2::Path::Self *)(a3), (glf::fs2::IndexData::Self *)v9, a4, v10, a3, true);
    glf::fs2::FileSystem::Walk((pthread_mutex_t **)a2, (const glf::fs2::Path::Self *)(a3), (glf::fs2::IndexData::Self *)v9, a4, v17, a3, false);
    glf::fs2::IndexData::Lock((glf::fs2::IndexData::Self *)v9, a4, true);
    v13 = (const char *)glf::fs2::IndexData::ComputeSize((glf::fs2::IndexData::Self *)v9);
    glf::Console::Print((glf::Console::Self *)"total size in heap %d\n", v13);
    result = self;
    *(uint32_t *)self = (uint32_t)(uintptr_t)(v9);
    if ( v9 != nullptr )
    {
      __sync_add_and_fetch(v9 + 1, 1u);
      return self;
    }
  }
  else
  {
    while ( 1 )
    {
      Root = (glf::fs2::Path::Self *)glf::fs2::IndexData::GetRoot(v14);
      if ( glf::fs2::Path::Compare(Root, a3) == 0 )
        break;
      if ( ++v4 == *((int **)a2 + 41) )
        goto LABEL_9;
    }
    v6 = *v4;
    v7 = *v4 == 0;
    *(uint32_t *)self = *v4;
    if ( !v7 )
      __sync_add_and_fetch((volatile int32_t *)(v6 + 4), 1u);
    glf::Mutex::Unlock(v18);
    return self;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::OpenNoSearchPaths  (binary VA: 0xc9b340)
// Original: glf::fs2::FileSystem::OpenNoSearchPaths
// ----------------------------------------------------------------------------
glf::RefCounted::Self * glf::fs2::FileSystem::OpenNoSearchPaths(const glf::fs2::Path::Self *a1, glf::fs2::Path::Self *a2, int a3)
{
  const glf::fs2::Path::Self *v3;
  glf::fs2::IndexData::Self *v4;
  unsigned int v5;
  volatile int32_t *v6;
  const glf::fs2::Path::Self *AltPath;
  const glf::fs2::Path::Self *v8;
  int v9;
  glf::fs2::FileSystem::Self **v10;
  size_t v11;
  glf::fs2::Path::Self *v12;
  int v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  size_t v19;
  glf::fs2::Path::Self *v20;
  int v21;
  unsigned int v22;
  const glf::fs2::Path::Self *v23;
  void *v24;
  typedef void *_g4_t_v25;
  typedef void *_g4_t_v26;
  typedef glf::fs2::Path::Self *_g4_t_v27;
  typedef glf::fs2::Path::Self *_g4_t_v28;
  typedef glf::fs2::Path::Self *_g4_t_v29;
  typedef glf::RefCounted::Self *_g4_t_v30;
  typedef glf::RefCounted::Self *_g4_t_v31;
  typedef glf::RefCounted::Self *_g4_t_v32;
  typedef glf::RefCounted::Self *_g4_t_v33;
  typedef uint32_t *_g4_t_v34;
  typedef pthread_mutex_t **_g4_t_v35;
  typedef glf::fs2::Path::Self *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef size_t _g4_t_v38;
  typedef size_t _g4_t_v39;
  typedef int _g4_t_v40;
  typedef char *_g4_t_sa;
  typedef char *_g4_t_s;
  typedef char *_g4_t_sb;
  typedef glf::fs2::Path::Self *_g4_t_v44;
  typedef glf::fs2::Path::Self *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef uint8_t _g4_t_v47[8];
  typedef uint8_t _g4_t_v48[8];
  typedef uint8_t _g4_t_v49[8];
  typedef uint8_t _g4_t_v50[8];
  typedef int _g4_t_v51[2];
  typedef uint8_t _g4_t_v52[4];
  typedef int _g4_t_v53;
  typedef uint8_t _g4_t_v54[8];
  typedef uint8_t _g4_t_v55[8];
  typedef uint8_t _g4_t_v56[8];
  typedef uint8_t _g4_t_v57[8];
  typedef uint8_t _g4_t_v58[8];
  typedef glf::fs2::IndexData::Self *_g4_t_v59[2];
  typedef uint8_t _g4_t_v60[8];
  typedef unsigned int _g4_t_v61;
  typedef const glf::fs2::Path::Self **_g4_t_v62;
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (0u + sizeof(_g4_t_v25)) > _g4_s0 ? (0u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v26)) > _g4_s1 ? (0u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v27)) > _g4_s2 ? (4u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v28)) > _g4_s3 ? (4u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v29)) > _g4_s4 ? (4u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v30)) > _g4_s5 ? (8u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v31)) > _g4_s6 ? (8u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v32)) > _g4_s7 ? (8u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v33)) > _g4_s8 ? (8u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (12u + sizeof(_g4_t_v34)) > _g4_s9 ? (12u + sizeof(_g4_t_v34)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v35)) > _g4_s10 ? (16u + sizeof(_g4_t_v35)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_v36)) > _g4_s11 ? (20u + sizeof(_g4_t_v36)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v37)) > _g4_s12 ? (24u + sizeof(_g4_t_v37)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v38)) > _g4_s13 ? (28u + sizeof(_g4_t_v38)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v39)) > _g4_s14 ? (28u + sizeof(_g4_t_v39)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v40)) > _g4_s15 ? (32u + sizeof(_g4_t_v40)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_sa)) > _g4_s16 ? (36u + sizeof(_g4_t_sa)) : _g4_s16,
    _g4_s18 = (36u + sizeof(_g4_t_s)) > _g4_s17 ? (36u + sizeof(_g4_t_s)) : _g4_s17,
    _g4_s19 = (36u + sizeof(_g4_t_sb)) > _g4_s18 ? (36u + sizeof(_g4_t_sb)) : _g4_s18,
    _g4_s20 = (40u + sizeof(_g4_t_v44)) > _g4_s19 ? (40u + sizeof(_g4_t_v44)) : _g4_s19,
    _g4_s21 = (40u + sizeof(_g4_t_v45)) > _g4_s20 ? (40u + sizeof(_g4_t_v45)) : _g4_s20,
    _g4_s22 = (48u + sizeof(_g4_t_v46)) > _g4_s21 ? (48u + sizeof(_g4_t_v46)) : _g4_s21,
    _g4_s23 = (52u + sizeof(_g4_t_v47)) > _g4_s22 ? (52u + sizeof(_g4_t_v47)) : _g4_s22,
    _g4_s24 = (60u + sizeof(_g4_t_v48)) > _g4_s23 ? (60u + sizeof(_g4_t_v48)) : _g4_s23,
    _g4_s25 = (68u + sizeof(_g4_t_v49)) > _g4_s24 ? (68u + sizeof(_g4_t_v49)) : _g4_s24,
    _g4_s26 = (76u + sizeof(_g4_t_v50)) > _g4_s25 ? (76u + sizeof(_g4_t_v50)) : _g4_s25,
    _g4_s27 = (84u + sizeof(_g4_t_v51)) > _g4_s26 ? (84u + sizeof(_g4_t_v51)) : _g4_s26,
    _g4_s28 = (92u + sizeof(_g4_t_v52)) > _g4_s27 ? (92u + sizeof(_g4_t_v52)) : _g4_s27,
    _g4_s29 = (96u + sizeof(_g4_t_v53)) > _g4_s28 ? (96u + sizeof(_g4_t_v53)) : _g4_s28,
    _g4_s30 = (100u + sizeof(_g4_t_v54)) > _g4_s29 ? (100u + sizeof(_g4_t_v54)) : _g4_s29,
    _g4_s31 = (108u + sizeof(_g4_t_v55)) > _g4_s30 ? (108u + sizeof(_g4_t_v55)) : _g4_s30,
    _g4_s32 = (116u + sizeof(_g4_t_v56)) > _g4_s31 ? (116u + sizeof(_g4_t_v56)) : _g4_s31,
    _g4_s33 = (124u + sizeof(_g4_t_v57)) > _g4_s32 ? (124u + sizeof(_g4_t_v57)) : _g4_s32,
    _g4_s34 = (132u + sizeof(_g4_t_v58)) > _g4_s33 ? (132u + sizeof(_g4_t_v58)) : _g4_s33,
    _g4_s35 = (140u + sizeof(_g4_t_v59)) > _g4_s34 ? (140u + sizeof(_g4_t_v59)) : _g4_s34,
    _g4_s36 = (148u + sizeof(_g4_t_v60)) > _g4_s35 ? (148u + sizeof(_g4_t_v60)) : _g4_s35,
    _g4_s37 = (156u + sizeof(_g4_t_v61)) > _g4_s36 ? (156u + sizeof(_g4_t_v61)) : _g4_s36,
    _g4_s38 = (180u + sizeof(_g4_t_v62)) > _g4_s37 ? (180u + sizeof(_g4_t_v62)) : _g4_s37
  };
  alignas(16) uint8_t _g4_sf[_g4_s38];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 0u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 4u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 4u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 4u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 8u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 8u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 8u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 8u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 16u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 20u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 24u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 28u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 28u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 32u);
  _g4_t_sa &sa = *reinterpret_cast<_g4_t_sa *>(_g4_sf + 36u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 36u);
  _g4_t_sb &sb = *reinterpret_cast<_g4_t_sb *>(_g4_sf + 36u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 40u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 40u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 48u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 52u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 60u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 68u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 76u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 84u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 92u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 96u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 100u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 108u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 116u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 124u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 132u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 140u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 148u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 156u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 180u);

  v62 = &a1;
  v3 = a1;
  v36 = a2;
  v37 = a3;
  glf::fs2::FileSystem::FixPath((glf::fs2::FileSystem::Self *)v47, a1, a2);
  glf::fs2::Path::Construct((glf::fs2::Path::Self *)v60);
  v59[0] = nullptr;
  v59[1] = nullptr;
  v61 = 0xFFFFFFFF;
  if ( (uint8_t)glf::fs2::FileSystem::ResolveFromIndex((int)(uintptr_t)(v3), (glf::fs2::Path::Self *)v47, v59) != 0 )
  {
    v4 = v59[0];
    v5 = v61;
    v6 = *(volatile int32_t **)(*((uint32_t *)v59[0] + 52)
                                     + 4 * *(uint8_t *)(*((uint32_t *)v59[0] + 61) + v61));
    if ( v6 != nullptr )
    {
      __sync_add_and_fetch(v6 + 1, 1u);
      v5 = v61;
      v4 = v59[0];
    }
    AltPath = (const glf::fs2::Path::Self *)glf::fs2::IndexData::GetAltPath(v4, v5);
    v44 = *(glf::fs2::Path::Self **)(*v6 + 44);
    glf::fs2::Path::Construct((glf::fs2::Path::Self *)v57, AltPath);
    v8 = (const glf::fs2::Path::Self *)glf::fs2::Path::opDivAssign((glf::fs2::Path::Self *)v57, v36);
    glf::fs2::Path::Construct((glf::fs2::Path::Self *)v48, v8);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v57);
    v30 = (glf::RefCounted::Self *)((int (*)(volatile int32_t *))v44)(v6);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v48);
    if ( v30 != nullptr )
    {
      glf::intrusive_ptr_release((glf::Self *)v6, (const glf::RefCounted::Self *)v48);
      v9 = (int)(uintptr_t)(v30);
      goto LABEL_19;
    }
    glf::intrusive_ptr_release((glf::Self *)v6, (const glf::RefCounted::Self *)v48);
  }
  v35 = (pthread_mutex_t **)((char *)v3 + 72);
  glf::Mutex::Lock((pthread_mutex_t **)v3 + 18);
  if ( *((uint32_t *)v3 + 16) == *((uint32_t *)v3 + 15)
    || (v34 = (uint32_t *)glf::fs2::Path::String((glf::fs2::Path::Self *)v47),
        v40 = *((uint32_t *)v3 + 15),
        *((uint32_t *)v3 + 16) == v40) )
  {
LABEL_18:
    glf::Mutex::Unlock(v35);
    v9 = G4_VCALL<int>(v3, 44, v47, v37);
  }
  else
  {
    v10 = *((glf::fs2::FileSystem::Self ***)v3 + 15);
    v45 = (glf::fs2::Path::Self *)(v3);
    while ( 1 )
    {
      while ( 1 )
      {
        if ( glf::fs2::MountPoint::IsValid((glf::fs2::MountPoint::Self *)v10) )
        {
          if ( (uint8_t)glf::fs2::Path::IsAbsolute((glf::fs2::Path::Self *)(v10 + 3)) != 0 )
          {
            glf::fs2::Path::Construct((glf::fs2::Path::Self *)v50);
            glf::fs2::FileSystem::Absolute((glf::fs2::FileSystem::Self *)v49, v45, (glf::fs2::Path::Self *)v47);
            glf::fs2::Path::Canonical((glf::fs2::Path::Self *)v51, (const glf::fs2::Path::Self *)v49);
            glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v49);
            glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v50);
            sa = (char *)glf::fs2::Path::c_str((glf::fs2::Path::Self *)(v10 + 3));
            v27 = (glf::fs2::Path::Self *)glf::fs2::Path::String((glf::fs2::Path::Self *)v51);
            v11 = strlen(sa);
            v12 = (glf::fs2::Path::Self *)g4_std_compat::string_find(v27, sa, 0, v11);
            s = (char *)(v40 + 12);
            v28 = v12;
            v38 = *((uint32_t *)v10[3] - 3);
            v25 = (void *)glf::fs2::Path::c_str((glf::fs2::Path::Self *)(v10 + 3));
            v13 = *((uint32_t *)v10[3] - 3);
            v14 = (int)(uintptr_t)(glf::fs2::Path::String((glf::fs2::Path::Self *)v51));
            sub_1938800(v14, 0, v13, v25, v38);
            glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v51);
          }
          else
          {
            sb = (char *)glf::fs2::Path::c_str((glf::fs2::Path::Self *)(v10 + 3));
            v29 = (glf::fs2::Path::Self *)glf::fs2::Path::String((glf::fs2::Path::Self *)v47);
            v19 = strlen(sb);
            v20 = (glf::fs2::Path::Self *)g4_std_compat::string_find(v29, sb, 0, v19);
            s = (char *)(v40 + 12);
            v28 = v20;
            v39 = *((uint32_t *)v10[3] - 3);
            v26 = (void *)glf::fs2::Path::c_str((glf::fs2::Path::Self *)(v10 + 3));
            v32 = *((glf::RefCounted::Self **)v10[3] - 3);
            v21 = (int)(uintptr_t)(glf::fs2::Path::String((glf::fs2::Path::Self *)v47));
            sub_1938800(v21, 0, (int)(uintptr_t)(v32), v26, v39);
          }
          if ( v28 == nullptr )
            break;
        }
        v3 = v45;
        v10 += 6;
        if ( v10 == *((glf::fs2::FileSystem::Self ***)v45 + 16) )
          goto LABEL_18;
      }
      glf::fs2::Path::Construct((glf::fs2::Path::Self *)v51, (const glf::fs2::Path::Self *)v10);
      v15 = *(uint32_t *)(*v34 - 12);
      v16 = *(uint32_t *)(*(uint32_t *)&s[(uint32_t)(uintptr_t)(v10) - v40] - 12);
      if ( v15 > v16 )
      {
        v22 = v16 + 1;
        if ( v22 > v15 )
          sub_1900210("basic_string::substr");
        sub_193A6F0(&v46, v34, v22, -1);
        g4_std::string::construct_copy(v52, &v46);
        v53 = 0;
        glf::fs2::Path::Init((glf::fs2::Path::Self *)v52);
        glf::fs2::Path::Construct((glf::fs2::Path::Self *)v58, (const glf::fs2::Path::Self *)v51);
        v23 = (const glf::fs2::Path::Self *)glf::fs2::Path::opDivAssign((glf::fs2::Path::Self *)v58, (const glf::fs2::Path::Self *)v52);
        glf::fs2::Path::Construct((glf::fs2::Path::Self *)v54, v23);
        glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v58);
        glf::fs2::Path::opAssign((glf::fs2::Path::Self *)v51, (const glf::fs2::Path::Self *)v54);
        glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v54);
        glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v52);
        v24 = (void *)(v46 - 12);
        if ( (uint32_t *)(v46 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v46 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v24);
        }
      }
      v17 = (int)(uintptr_t)(glf::fs2::FileSystem::Open(v10[2], (int)(uintptr_t)(v51), v37));
      if ( v17 != 0 )
        break;
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v51);
      v3 = v45;
      v10 += 6;
      if ( v10 == *((glf::fs2::FileSystem::Self ***)v45 + 16) )
        goto LABEL_18;
    }
    v33 = (glf::RefCounted::Self *)v17;
    glf::fs2::Path::Construct((glf::fs2::Path::Self *)v55);
    glf::fs2::Path::Canonical((glf::fs2::Path::Self *)v56, v36);
    glf::io2::FileDevice::SetLogicFilename(v33, (const glf::fs2::Path::Self *)v56);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v56);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v55);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v51);
    glf::Mutex::Unlock(v35);
    v9 = (int)(uintptr_t)(v33);
  }
LABEL_19:
  v31 = (glf::RefCounted::Self *)v9;
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v60);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v47);
  return v31;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::Open  (binary VA: 0xc9b9f0)
// Original: glf::fs2::FileSystem::Open
// ----------------------------------------------------------------------------
glf::RefCounted::Self * glf::fs2::FileSystem::Open(glf::fs2::FileSystem::Self *a1, glf::fs2::Path::Self *a2, int a3)
{
  glf::Self *v3;
  const glf::fs2::Path::Self *v4;
  glf::RefCounted::Self *v5;
  glf::Self *v6;
  int v7;
  volatile int32_t *v8;
  typedef glf::RefCounted::Self *_g4_t_v10;
  typedef glf::Self **_g4_t_v11;
  typedef glf::Self *_g4_t_v12[2];
  typedef uint8_t _g4_t_v13[8];
  typedef uint8_t _g4_t_v14[8];
  typedef uint8_t _g4_t_v15[36];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v12)) > _g4_s2 ? (16u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v13)) > _g4_s3 ? (24u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v14)) > _g4_s4 ? (32u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v15)) > _g4_s5 ? (40u + sizeof(_g4_t_v15)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);

  if ( (uint8_t)glf::fs2::Path::IsAbsolute(a2) != 0 )
    return glf::fs2::FileSystem::OpenNoSearchPaths((const glf::fs2::Path::Self *)(a1), a2, a3);
  if ( (a3 & 2) != 0 )
    return glf::fs2::FileSystem::OpenNoSearchPaths((const glf::fs2::Path::Self *)(a1), a2, a3);
  v12[0] = (glf::Self *)v12;
  v12[1] = (glf::Self *)v12;
  glf::fs2::FileSystem::GatherAllSearchPaths(
    (pthread_mutex_t **)a1,
    (std::list<glf::fs2::MountPoint::Self, glf::allocator<glf::fs2::MountPoint::Self>> *)v12,
    true);
  if ( (glf::Self **)v12[0] == v12 )
    return glf::fs2::FileSystem::OpenNoSearchPaths((const glf::fs2::Path::Self *)(a1), a2, a3);
  glf::fs2::FileSystem::FixPath((glf::fs2::FileSystem::Self *)v13, (const glf::fs2::Path::Self *)(a1), a2);
  v3 = v12[0];
  if ( (glf::Self **)v12[0] == v12 )
  {
LABEL_10:
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v13);
    v6 = v12[0];
    if ( (glf::Self **)v12[0] != v12 )
    {
      while ( 1 )
      {
        v11 = *(glf::Self ***)v6;
        glf::fs2::Path::Destroy((glf::Self *)((char *)v6 + 20));
        v8 = *((volatile int32_t **)v6 + 4);
        if ( v8 != nullptr )
        {
          if ( __sync_fetch_and_add(v8 + 1, 0xFFFFFFFF) == 1 )
          {
            G4_VCALL<void>(v8, 8);
            G4_VCALL<void>(v8, 16);
          }
          else
          {
            v7 = *((uint32_t *)v8 + 1);
            _mm_mfence();
            if ( v7 == 1 )
              G4_VCALL<void>(v8, 12);
          }
        }
        glf::fs2::Path::Destroy((glf::Self *)((char *)v6 + 8));
        glf::Free(v6);
        if ( v11 == v12 )
          break;
        v6 = (glf::Self *)v11;
      }
    }
    return glf::fs2::FileSystem::OpenNoSearchPaths((const glf::fs2::Path::Self *)(a1), a2, a3);
  }
  while ( 1 )
  {
    while ( !glf::fs2::MountPoint::IsValid((glf::fs2::MountPoint::Self *)((glf::Self *)((char *)v3 + 8))) )
    {
      v3 = *(glf::Self **)v3;
      if ( v3 == (glf::Self *)v12 )
        goto LABEL_10;
    }
    glf::fs2::Path::Construct((glf::fs2::Path::Self *)v15, (glf::Self *)((char *)v3 + 8));
    v4 = (const glf::fs2::Path::Self *)glf::fs2::Path::opDivAssign((glf::fs2::Path::Self *)v15, (const glf::fs2::Path::Self *)v13);
    glf::fs2::Path::Construct((glf::fs2::Path::Self *)v14, v4);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v15);
    v5 = glf::fs2::FileSystem::OpenNoSearchPaths(*((const glf::fs2::Path::Self **)v3 + 4), (glf::fs2::Path::Self *)v14, a3);
    if ( v5 != nullptr )
      break;
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v14);
    v3 = *(glf::Self **)v3;
    if ( v3 == (glf::Self *)v12 )
      goto LABEL_10;
  }
  v10 = v5;
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v14);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v13);
  g4_noop_dtor((std::list<glf::fs2::MountPoint::Self, glf::allocator<glf::fs2::MountPoint::Self>> *)v12);
  return v10;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::GetStatusNoSearchPaths  (binary VA: 0xc9bbe0)
// Original: glf::fs2::FileSystem::GetStatusNoSearchPaths
// ----------------------------------------------------------------------------
glf::Self ** glf::fs2::FileSystem::GetStatusNoSearchPaths(glf::Self **a1, const glf::fs2::Path::Self *a2, glf::fs2::Path::Self *a3, uint32_t *a4)
{
  const glf::fs2::Path::Self *v4;
  int Permissions;
  volatile int32_t *v6;
  int v7;
  glf::Self *v8;
  uint32_t *v9;
  int v10;
  glf::Self *v11;
  bool v12;
  glf::Self *v13;
  int v14;
  int v15;
  int v16;
  glf::Self *v17;
  glf::Self *v18;
  int v20;
  const glf::fs2::Path::Self **v21;
  const char *v22;
  size_t v23;
  void *v24;
  unsigned int v25;
  unsigned int v26;
  uint32_t *v27;
  int v28;
  glf::Self *v29;
  glf::Self *v30;
  int v31;
  int v32;
  int v33;
  unsigned int v34;
  const glf::fs2::Path::Self *v35;
  void *v36;
  uint32_t *v37;
  int v38;
  glf::Self *v39;
  glf::Self *v40;
  int v41;
  int v42;
  int v43;
  const glf::fs2::Path::Self *v44;
  uint32_t *v45;
  int v46;
  glf::Self *v47;
  glf::Self *v48;
  int v49;
  int v50;
  int v51;
  typedef const glf::RefCounted::Self *_g4_t_v52;
  typedef const glf::RefCounted::Self *_g4_t_v53;
  typedef const glf::RefCounted::Self *_g4_t_v54;
  typedef const glf::RefCounted::Self *_g4_t_v55;
  typedef const glf::RefCounted::Self *_g4_t_v56;
  typedef size_t _g4_t_v57;
  typedef size_t _g4_t_v58;
  typedef pthread_mutex_t **_g4_t_v59;
  typedef glf::Self **_g4_t_v60;
  typedef uint32_t *_g4_t_v61;
  typedef int _g4_t_v62;
  typedef glf::RefCounted::Self *_g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef uint32_t *_g4_t_v66;
  typedef int _g4_t_v67;
  typedef uint8_t _g4_t_v68[8];
  typedef char _g4_t_v69[4];
  typedef int _g4_t_v70;
  typedef uint8_t _g4_t_v71[8];
  typedef uint8_t _g4_t_v72[8];
  typedef glf::fs2::IndexData::Self *_g4_t_v73;
  typedef glf::Self *_g4_t_v74;
  typedef uint8_t _g4_t_v75[8];
  typedef glf::RefCounted::Self *_g4_t_v76;
  typedef int _g4_t_FileType;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_FileSize;
  typedef int _g4_t_v81;
  typedef glf::Self *_g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef uint8_t _g4_t_v90[12];
  typedef uint32_t _g4_t_v91[5];
  typedef glf::Self *_g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef uint8_t _g4_t_v100[12];
  typedef uint32_t _g4_t_v101[5];
  typedef glf::Self *_g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef int _g4_t_v106;
  typedef int _g4_t_v107;
  typedef int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef uint8_t _g4_t_v110[16];
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef int _g4_t_v113;
  typedef int _g4_t_v114;
  typedef int _g4_t_v115;
  typedef glf::Self *_g4_t_v116;
  typedef int _g4_t_v117;
  typedef int _g4_t_v118;
  typedef int _g4_t_v119;
  typedef int _g4_t_v120;
  typedef int _g4_t_v121;
  typedef int _g4_t_v122;
  typedef int _g4_t_v123;
  typedef uint32_t _g4_t_v124[8];
  enum : size_t {
    _g4_s0 = 496u,
    _g4_s1 = (12u + sizeof(_g4_t_v52)) > _g4_s0 ? (12u + sizeof(_g4_t_v52)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v53)) > _g4_s1 ? (12u + sizeof(_g4_t_v53)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v54)) > _g4_s2 ? (12u + sizeof(_g4_t_v54)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v55)) > _g4_s3 ? (12u + sizeof(_g4_t_v55)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v56)) > _g4_s4 ? (12u + sizeof(_g4_t_v56)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v57)) > _g4_s5 ? (52u + sizeof(_g4_t_v57)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v58)) > _g4_s6 ? (52u + sizeof(_g4_t_v58)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v59)) > _g4_s7 ? (56u + sizeof(_g4_t_v59)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v60)) > _g4_s8 ? (60u + sizeof(_g4_t_v60)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v61)) > _g4_s9 ? (64u + sizeof(_g4_t_v61)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v62)) > _g4_s10 ? (68u + sizeof(_g4_t_v62)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v63)) > _g4_s11 ? (72u + sizeof(_g4_t_v63)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v64)) > _g4_s12 ? (76u + sizeof(_g4_t_v64)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v65)) > _g4_s13 ? (80u + sizeof(_g4_t_v65)) : _g4_s13,
    _g4_s15 = (84u + sizeof(_g4_t_v66)) > _g4_s14 ? (84u + sizeof(_g4_t_v66)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v67)) > _g4_s15 ? (96u + sizeof(_g4_t_v67)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v68)) > _g4_s16 ? (100u + sizeof(_g4_t_v68)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v69)) > _g4_s17 ? (108u + sizeof(_g4_t_v69)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v70)) > _g4_s18 ? (112u + sizeof(_g4_t_v70)) : _g4_s18,
    _g4_s20 = (116u + sizeof(_g4_t_v71)) > _g4_s19 ? (116u + sizeof(_g4_t_v71)) : _g4_s19,
    _g4_s21 = (124u + sizeof(_g4_t_v72)) > _g4_s20 ? (124u + sizeof(_g4_t_v72)) : _g4_s20,
    _g4_s22 = (132u + sizeof(_g4_t_v73)) > _g4_s21 ? (132u + sizeof(_g4_t_v73)) : _g4_s21,
    _g4_s23 = (136u + sizeof(_g4_t_v74)) > _g4_s22 ? (136u + sizeof(_g4_t_v74)) : _g4_s22,
    _g4_s24 = (140u + sizeof(_g4_t_v75)) > _g4_s23 ? (140u + sizeof(_g4_t_v75)) : _g4_s23,
    _g4_s25 = (148u + sizeof(_g4_t_v76)) > _g4_s24 ? (148u + sizeof(_g4_t_v76)) : _g4_s24,
    _g4_s26 = (152u + sizeof(_g4_t_FileType)) > _g4_s25 ? (152u + sizeof(_g4_t_FileType)) : _g4_s25,
    _g4_s27 = (156u + sizeof(_g4_t_v78)) > _g4_s26 ? (156u + sizeof(_g4_t_v78)) : _g4_s26,
    _g4_s28 = (160u + sizeof(_g4_t_v79)) > _g4_s27 ? (160u + sizeof(_g4_t_v79)) : _g4_s27,
    _g4_s29 = (164u + sizeof(_g4_t_FileSize)) > _g4_s28 ? (164u + sizeof(_g4_t_FileSize)) : _g4_s28,
    _g4_s30 = (168u + sizeof(_g4_t_v81)) > _g4_s29 ? (168u + sizeof(_g4_t_v81)) : _g4_s29,
    _g4_s31 = (172u + sizeof(_g4_t_v82)) > _g4_s30 ? (172u + sizeof(_g4_t_v82)) : _g4_s30,
    _g4_s32 = (176u + sizeof(_g4_t_v83)) > _g4_s31 ? (176u + sizeof(_g4_t_v83)) : _g4_s31,
    _g4_s33 = (180u + sizeof(_g4_t_v84)) > _g4_s32 ? (180u + sizeof(_g4_t_v84)) : _g4_s32,
    _g4_s34 = (184u + sizeof(_g4_t_v85)) > _g4_s33 ? (184u + sizeof(_g4_t_v85)) : _g4_s33,
    _g4_s35 = (188u + sizeof(_g4_t_v86)) > _g4_s34 ? (188u + sizeof(_g4_t_v86)) : _g4_s34,
    _g4_s36 = (192u + sizeof(_g4_t_v87)) > _g4_s35 ? (192u + sizeof(_g4_t_v87)) : _g4_s35,
    _g4_s37 = (196u + sizeof(_g4_t_v88)) > _g4_s36 ? (196u + sizeof(_g4_t_v88)) : _g4_s36,
    _g4_s38 = (200u + sizeof(_g4_t_v89)) > _g4_s37 ? (200u + sizeof(_g4_t_v89)) : _g4_s37,
    _g4_s39 = (204u + sizeof(_g4_t_v90)) > _g4_s38 ? (204u + sizeof(_g4_t_v90)) : _g4_s38,
    _g4_s40 = (216u + sizeof(_g4_t_v91)) > _g4_s39 ? (216u + sizeof(_g4_t_v91)) : _g4_s39,
    _g4_s41 = (236u + sizeof(_g4_t_v92)) > _g4_s40 ? (236u + sizeof(_g4_t_v92)) : _g4_s40,
    _g4_s42 = (240u + sizeof(_g4_t_v93)) > _g4_s41 ? (240u + sizeof(_g4_t_v93)) : _g4_s41,
    _g4_s43 = (244u + sizeof(_g4_t_v94)) > _g4_s42 ? (244u + sizeof(_g4_t_v94)) : _g4_s42,
    _g4_s44 = (248u + sizeof(_g4_t_v95)) > _g4_s43 ? (248u + sizeof(_g4_t_v95)) : _g4_s43,
    _g4_s45 = (252u + sizeof(_g4_t_v96)) > _g4_s44 ? (252u + sizeof(_g4_t_v96)) : _g4_s44,
    _g4_s46 = (256u + sizeof(_g4_t_v97)) > _g4_s45 ? (256u + sizeof(_g4_t_v97)) : _g4_s45,
    _g4_s47 = (260u + sizeof(_g4_t_v98)) > _g4_s46 ? (260u + sizeof(_g4_t_v98)) : _g4_s46,
    _g4_s48 = (264u + sizeof(_g4_t_v99)) > _g4_s47 ? (264u + sizeof(_g4_t_v99)) : _g4_s47,
    _g4_s49 = (268u + sizeof(_g4_t_v100)) > _g4_s48 ? (268u + sizeof(_g4_t_v100)) : _g4_s48,
    _g4_s50 = (280u + sizeof(_g4_t_v101)) > _g4_s49 ? (280u + sizeof(_g4_t_v101)) : _g4_s49,
    _g4_s51 = (300u + sizeof(_g4_t_v102)) > _g4_s50 ? (300u + sizeof(_g4_t_v102)) : _g4_s50,
    _g4_s52 = (304u + sizeof(_g4_t_v103)) > _g4_s51 ? (304u + sizeof(_g4_t_v103)) : _g4_s51,
    _g4_s53 = (308u + sizeof(_g4_t_v104)) > _g4_s52 ? (308u + sizeof(_g4_t_v104)) : _g4_s52,
    _g4_s54 = (312u + sizeof(_g4_t_v105)) > _g4_s53 ? (312u + sizeof(_g4_t_v105)) : _g4_s53,
    _g4_s55 = (316u + sizeof(_g4_t_v106)) > _g4_s54 ? (316u + sizeof(_g4_t_v106)) : _g4_s54,
    _g4_s56 = (320u + sizeof(_g4_t_v107)) > _g4_s55 ? (320u + sizeof(_g4_t_v107)) : _g4_s55,
    _g4_s57 = (324u + sizeof(_g4_t_v108)) > _g4_s56 ? (324u + sizeof(_g4_t_v108)) : _g4_s56,
    _g4_s58 = (328u + sizeof(_g4_t_v109)) > _g4_s57 ? (328u + sizeof(_g4_t_v109)) : _g4_s57,
    _g4_s59 = (332u + sizeof(_g4_t_v110)) > _g4_s58 ? (332u + sizeof(_g4_t_v110)) : _g4_s58,
    _g4_s60 = (348u + sizeof(_g4_t_v111)) > _g4_s59 ? (348u + sizeof(_g4_t_v111)) : _g4_s59,
    _g4_s61 = (352u + sizeof(_g4_t_v112)) > _g4_s60 ? (352u + sizeof(_g4_t_v112)) : _g4_s60,
    _g4_s62 = (356u + sizeof(_g4_t_v113)) > _g4_s61 ? (356u + sizeof(_g4_t_v113)) : _g4_s61,
    _g4_s63 = (360u + sizeof(_g4_t_v114)) > _g4_s62 ? (360u + sizeof(_g4_t_v114)) : _g4_s62,
    _g4_s64 = (364u + sizeof(_g4_t_v115)) > _g4_s63 ? (364u + sizeof(_g4_t_v115)) : _g4_s63,
    _g4_s65 = (368u + sizeof(_g4_t_v116)) > _g4_s64 ? (368u + sizeof(_g4_t_v116)) : _g4_s64,
    _g4_s66 = (372u + sizeof(_g4_t_v117)) > _g4_s65 ? (372u + sizeof(_g4_t_v117)) : _g4_s65,
    _g4_s67 = (376u + sizeof(_g4_t_v118)) > _g4_s66 ? (376u + sizeof(_g4_t_v118)) : _g4_s66,
    _g4_s68 = (380u + sizeof(_g4_t_v119)) > _g4_s67 ? (380u + sizeof(_g4_t_v119)) : _g4_s67,
    _g4_s69 = (384u + sizeof(_g4_t_v120)) > _g4_s68 ? (384u + sizeof(_g4_t_v120)) : _g4_s68,
    _g4_s70 = (388u + sizeof(_g4_t_v121)) > _g4_s69 ? (388u + sizeof(_g4_t_v121)) : _g4_s69,
    _g4_s71 = (392u + sizeof(_g4_t_v122)) > _g4_s70 ? (392u + sizeof(_g4_t_v122)) : _g4_s70,
    _g4_s72 = (396u + sizeof(_g4_t_v123)) > _g4_s71 ? (396u + sizeof(_g4_t_v123)) : _g4_s71,
    _g4_s73 = (400u + sizeof(_g4_t_v124)) > _g4_s72 ? (400u + sizeof(_g4_t_v124)) : _g4_s72
  };
  alignas(16) uint8_t _g4_sf[_g4_s73];
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 12u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 12u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 12u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 12u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 12u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 52u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 52u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 56u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 60u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 64u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 68u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 72u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 76u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 80u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 84u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 96u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 100u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 108u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 112u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 116u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 124u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 132u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 136u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 140u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 148u);
  _g4_t_FileType &FileType = *reinterpret_cast<_g4_t_FileType *>(_g4_sf + 152u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 156u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 160u);
  _g4_t_FileSize &FileSize = *reinterpret_cast<_g4_t_FileSize *>(_g4_sf + 164u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 168u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 172u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 176u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 180u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 184u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 188u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 192u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 196u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 200u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 204u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 216u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 236u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 240u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 244u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 248u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 252u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 256u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 260u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 264u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 268u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 280u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 300u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 304u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 308u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 312u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 316u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 320u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 324u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 328u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 332u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 348u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 352u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 356u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 360u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 364u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 368u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 372u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 376u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 380u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 384u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 388u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 392u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 396u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 400u);

  v124[4] = (uint32_t)(uintptr_t)(&a1);
  v4 = a3;
  v63 = (glf::RefCounted::Self *)(a2);
  v60 = a1;
  v61 = a4;
  glf::fs2::FileSystem::FixPath((glf::fs2::FileSystem::Self *)v68, a2, a3);
  glf::fs2::Path::Construct((glf::fs2::Path::Self *)v75);
  v73 = nullptr;
  v74 = nullptr;
  v76 = (glf::RefCounted::Self *)-1;
  if ( (uint8_t)glf::fs2::FileSystem::ResolveFromIndex((int)(uintptr_t)(v63), (glf::fs2::Path::Self *)v68, &v73) != 0 )
  {
    Permissions = glf::fs2::IndexData::GetPermissions(v73, (unsigned int)(uintptr_t)(v76));
    FileType = glf::fs2::IndexData::GetFileType(v73, (unsigned int)(uintptr_t)(v76));
    v79 = Permissions;
    v78 = 0;
    FileSize = -1;
    v81 = -1;
    v82 = nullptr;
    v83 = -1;
    v84 = -1;
    v85 = -1;
    v86 = -1;
    v87 = -1;
    v88 = -1;
    v89 = -1;
    glf::fs2::Path::Construct((glf::fs2::Path::Self *)v90);
    (*(void (**)(uint32_t *))(*(uint32_t *)v73 + 40))(v101);
    FileSize = glf::fs2::IndexData::GetFileSize(v73, (unsigned int)(uintptr_t)(v76));
    v6 = (volatile int32_t *)v74;
    v81 = v7;
    if ( v74 != nullptr )
    {
      __sync_add_and_fetch((volatile int32_t *)v74 + 1, 1u);
      __sync_add_and_fetch(v6 + 1, 1u);
    }
    v8 = v82;
    v82 = (glf::Self *)v6;
    if ( v8 != nullptr )
    {
      v57 = (size_t)v6;
      glf::intrusive_ptr_release(v8, v52);
      v6 = (volatile int32_t *)v57;
    }
    if ( v6 != nullptr )
      glf::intrusive_ptr_release((glf::Self *)v6, v52);
    glf::fs2::Path::opAssign((glf::fs2::Path::Self *)v90, v4);
    v9 = v61;
    v10 = v81;
    *v61 = FileType;
    v61[1] = v78;
    v61[2] = v79;
    v61[3] = FileSize;
    v11 = v82;
    v12 = v82 == nullptr;
    v61[4] = v10;
    if ( !v12 )
    {
      __sync_add_and_fetch((volatile int32_t *)v11 + 1, 1u);
      v9 = v61;
    }
    v13 = (glf::Self *)v9[5];
    v9[5] = (uint32_t)(uintptr_t)(v11);
    if ( v13 != nullptr )
    {
      glf::intrusive_ptr_release(v13, v53);
      v9 = v61;
    }
    v14 = v85;
    v9[6] = v83;
    v9[7] = v84;
    v15 = v88;
    v9[8] = v14;
    v9[11] = v15;
    v16 = v86;
    v9[12] = v89;
    v9[9] = v16;
    v9[10] = v87;
    glf::fs2::Path::opAssign((glf::fs2::Path::Self *)(v9 + 13), (const glf::fs2::Path::Self *)v90);
    v17 = v74;
    v12 = v74 == nullptr;
    *v60 = v74;
    if ( !v12 )
      __sync_add_and_fetch((volatile int32_t *)v17 + 1, 1u);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v110);
    if ( v102 != nullptr )
      glf::intrusive_ptr_release(v102, v54);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v90);
    v18 = v82;
    if ( v82 != nullptr )
LABEL_17:
      glf::intrusive_ptr_release(v18, v54);
  }
  else
  {
    v66 = (uint32_t *)glf::fs2::Path::String((glf::fs2::Path::Self *)v68);
    v59 = (pthread_mutex_t **)((char *)v63 + 72);
    glf::Mutex::Lock((pthread_mutex_t **)v63 + 18);
    v20 = *((uint32_t *)v63 + 15);
    v62 = v20;
    if ( v20 == *((uint32_t *)v63 + 16) )
    {
LABEL_28:
      glf::Mutex::Unlock(v59);
      (*(void (**)(uint32_t *))(*(uint32_t *)v63 + 40))(v91);
      if ( v91[0] <= 1u )
      {
        v111 = 0;
        v112 = 0;
        v113 = 0xFFFF;
        v114 = -1;
        v115 = -1;
        v116 = nullptr;
        v117 = -1;
        v118 = -1;
        v119 = -1;
        v120 = -1;
        v121 = -1;
        v122 = -1;
        v123 = -1;
        glf::fs2::Path::Construct((glf::fs2::Path::Self *)v124);
        v45 = v61;
        v46 = v115;
        *v61 = v111;
        v61[1] = v112;
        v61[2] = v113;
        v61[3] = v114;
        v47 = v116;
        v12 = v116 == nullptr;
        v61[4] = v46;
        if ( !v12 )
        {
          __sync_add_and_fetch((volatile int32_t *)v47 + 1, 1u);
          v45 = v61;
        }
        v48 = (glf::Self *)v45[5];
        v45[5] = (uint32_t)(uintptr_t)(v47);
        if ( v48 != nullptr )
        {
          glf::intrusive_ptr_release(v48, v63);
          v45 = v61;
        }
        v49 = v119;
        v45[6] = v117;
        v45[7] = v118;
        v50 = v122;
        v45[8] = v49;
        v45[11] = v50;
        v51 = v120;
        v45[12] = v123;
        v45[9] = v51;
        v45[10] = v121;
        glf::fs2::Path::opAssign((glf::fs2::Path::Self *)(v45 + 13), (const glf::fs2::Path::Self *)v124);
        glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v124);
        if ( v116 != nullptr )
          glf::intrusive_ptr_release(v116, v54);
        *v60 = nullptr;
      }
      else
      {
        v27 = v61;
        v28 = v91[4];
        *v61 = v91[0];
        v61[1] = v91[1];
        v61[2] = v91[2];
        v61[3] = v91[3];
        v29 = v92;
        v12 = v92 == nullptr;
        v61[4] = v28;
        if ( !v12 )
        {
          __sync_add_and_fetch((volatile int32_t *)v29 + 1, 1u);
          v27 = v61;
        }
        v30 = (glf::Self *)v27[5];
        v27[5] = (uint32_t)(uintptr_t)(v29);
        if ( v30 != nullptr )
        {
          glf::intrusive_ptr_release(v30, v63);
          v27 = v61;
        }
        v31 = v95;
        v27[6] = v93;
        v27[7] = v94;
        v32 = v98;
        v27[8] = v31;
        v27[11] = v32;
        v33 = v96;
        v27[12] = v99;
        v27[9] = v33;
        v27[10] = v97;
        glf::fs2::Path::opAssign((glf::fs2::Path::Self *)(v27 + 13), (const glf::fs2::Path::Self *)v100);
        *v60 = (glf::Self *)(v63);
        __sync_add_and_fetch((volatile int32_t *)v63 + 1, 1u);
      }
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v100);
      v18 = v92;
      if ( v92 != nullptr )
        goto LABEL_17;
    }
    else
    {
      v65 = v20 + 12;
      v21 = *((const glf::fs2::Path::Self ***)v63 + 15);
      while ( 1 )
      {
        while ( 1 )
        {
          v22 = (const char *)glf::fs2::Path::c_str((glf::fs2::Path::Self *)(v21 + 3));
          v23 = strlen(v22);
          v64 = g4_std_compat::string_find(v66, v22, 0, v23);
          v58 = *(*(uint32_t **)((char *)v21 + v65 - v62) - 3);
          v24 = (void *)glf::fs2::Path::c_str((glf::fs2::Path::Self *)(v21 + 3));
          sub_1938800((int)(uintptr_t)(v66), 0, *(*(uint32_t **)((char *)v21 + v65 - v62) - 3), v24, v58);
          if ( v64 == 0 )
            break;
          v21 += 6;
          if ( v21 == *((const glf::fs2::Path::Self ***)v63 + 16) )
            goto LABEL_28;
        }
        glf::fs2::Path::Construct((glf::fs2::Path::Self *)&FileType, (const glf::fs2::Path::Self *)v21);
        v25 = *(uint32_t *)(*v66 - 12);
        v26 = *(*(uint32_t **)((char *)v21 + v65 - v62) - 3);
        if ( v25 > v26 )
        {
          v34 = v26 + 1;
          if ( v34 > v25 )
            sub_1900210("basic_string::substr");
          sub_193A6F0(&v67, v66, v34, -1);
          g4_std::string::construct_copy(v69, &v67);
          v70 = 0;
          glf::fs2::Path::Init((glf::fs2::Path::Self *)v69);
          glf::fs2::Path::Construct((glf::fs2::Path::Self *)v72, (const glf::fs2::Path::Self *)&FileType);
          v35 = (const glf::fs2::Path::Self *)glf::fs2::Path::opDivAssign((glf::fs2::Path::Self *)v72, (const glf::fs2::Path::Self *)v69);
          glf::fs2::Path::Construct((glf::fs2::Path::Self *)v71, v35);
          glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v72);
          glf::fs2::Path::opAssign((glf::fs2::Path::Self *)&FileType, (const glf::fs2::Path::Self *)v71);
          glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v71);
          glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v69);
          v36 = (void *)(v67 - 12);
          if ( (uint32_t *)(v67 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v67 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v36);
          }
        }
        glf::fs2::FileSystem::GetStatus((glf::fs2::FileSystem::Self *)v101, v21[2]);
        if ( v101[0] > 1u )
          break;
        glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v110);
        if ( v102 != nullptr )
          glf::intrusive_ptr_release(v102, v55);
        glf::fs2::Path::Destroy((glf::fs2::Path::Self *)&FileType);
        v21 += 6;
        if ( v21 == *((const glf::fs2::Path::Self ***)v63 + 16) )
          goto LABEL_28;
      }
      v37 = v61;
      v38 = v101[4];
      *v61 = v101[0];
      v61[1] = v101[1];
      v61[2] = v101[2];
      v61[3] = v101[3];
      v39 = v102;
      v12 = v102 == nullptr;
      v61[4] = v38;
      if ( !v12 )
      {
        __sync_add_and_fetch((volatile int32_t *)v39 + 1, 1u);
        v37 = v61;
      }
      v40 = (glf::Self *)v37[5];
      v37[5] = (uint32_t)(uintptr_t)(v39);
      if ( v40 != nullptr )
      {
        glf::intrusive_ptr_release(v40, v55);
        v37 = v61;
      }
      v41 = v105;
      v37[6] = v103;
      v37[7] = v104;
      v42 = v108;
      v37[8] = v41;
      v37[11] = v42;
      v43 = v106;
      v37[12] = v109;
      v37[9] = v43;
      v37[10] = v107;
      glf::fs2::Path::opAssign((glf::fs2::Path::Self *)(v37 + 13), (const glf::fs2::Path::Self *)v110);
      v44 = v21[2];
      *v60 = (glf::Self *)(v44);
      if ( v44 != nullptr )
        __sync_add_and_fetch((volatile int32_t *)v44 + 1, 1u);
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v110);
      if ( v102 != nullptr )
        glf::intrusive_ptr_release(v102, v56);
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)&FileType);
      glf::Mutex::Unlock(v59);
    }
  }
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v75);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v68);
  return v60;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::GetStatusNoSearchPaths  (binary VA: 0xc9c550)
// Original: glf::fs2::FileSystem::GetStatusNoSearchPaths
// ----------------------------------------------------------------------------
glf::fs2::FileSystem::Self * glf::fs2::FileSystem::GetStatusNoSearchPaths(glf::fs2::FileSystem::Self *self, const glf::fs2::Path::Self *a2, glf::fs2::Path::Self *a3)
{
  typedef glf::RefCounted::Self *_g4_t_v4;
  typedef glf::Self *_g4_t_v5;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v5)) > _g4_s1 ? (28u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 28u);

  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0xFFFF;
  *((uint32_t *)self + 3) = -1;
  *((uint32_t *)self + 4) = -1;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = -1;
  *((uint32_t *)self + 7) = -1;
  *((uint32_t *)self + 8) = -1;
  *((uint32_t *)self + 9) = -1;
  *((uint32_t *)self + 10) = -1;
  *((uint32_t *)self + 11) = -1;
  *((uint32_t *)self + 12) = -1;
  glf::fs2::Path::Construct((glf::fs2::FileSystem::Self *)((char *)self + 52));
  glf::fs2::FileSystem::GetStatusNoSearchPaths(&v5, a2, a3, self);
  if ( v5 != nullptr )
    glf::intrusive_ptr_release(v5, v4);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::GetStatus  (binary VA: 0xc9c610)
// Original: glf::fs2::FileSystem::GetStatus
// ----------------------------------------------------------------------------
glf::Self ** glf::fs2::FileSystem::GetStatus(glf::Self **a1, glf::fs2::FileSystem::Self *a2, glf::fs2::Path::Self *a3, uint32_t *a4)
{
  glf::Self *v4;
  int v5;
  const glf::fs2::Path::Self *v6;
  glf::Self *v7;
  int Id;
  uint32_t *v10;
  int v11;
  glf::Self *v12;
  glf::Self *v13;
  int v14;
  int v15;
  int v16;
  volatile int32_t *v17;
  glf::Self *v18;
  int v19;
  volatile int32_t *v20;
  glf::Self *v21;
  int v22;
  volatile int32_t *v23;
  typedef const glf::RefCounted::Self *_g4_t_v24;
  typedef const glf::RefCounted::Self *_g4_t_v25;
  typedef glf::fs2::MountPoint::Self *_g4_t_v26;
  typedef glf::fs2::FileSystem::Self *_g4_t_v27;
  typedef glf::Self **_g4_t_v28;
  typedef uint32_t *_g4_t_v29;
  typedef glf::Self **_g4_t_v30;
  typedef glf::fs2::Path::Self *_g4_t_v31;
  typedef glf::Self **_g4_t_v32;
  typedef glf::Self *_g4_t_v33[5];
  typedef uint8_t _g4_t_v34[8];
  typedef uint8_t _g4_t_v35[8];
  typedef uint32_t _g4_t_v36[5];
  typedef glf::Self *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef uint32_t _g4_t_v45[8];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v24)) > _g4_s0 ? (0u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v25)) > _g4_s1 ? (0u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v26)) > _g4_s2 ? (16u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v27)) > _g4_s3 ? (20u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v28)) > _g4_s4 ? (24u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v29)) > _g4_s5 ? (28u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v30)) > _g4_s6 ? (32u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v31)) > _g4_s7 ? (36u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v32)) > _g4_s8 ? (36u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v33)) > _g4_s9 ? (44u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v34)) > _g4_s10 ? (64u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v35)) > _g4_s11 ? (72u + sizeof(_g4_t_v35)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v36)) > _g4_s12 ? (80u + sizeof(_g4_t_v36)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v37)) > _g4_s13 ? (100u + sizeof(_g4_t_v37)) : _g4_s13,
    _g4_s15 = (104u + sizeof(_g4_t_v38)) > _g4_s14 ? (104u + sizeof(_g4_t_v38)) : _g4_s14,
    _g4_s16 = (108u + sizeof(_g4_t_v39)) > _g4_s15 ? (108u + sizeof(_g4_t_v39)) : _g4_s15,
    _g4_s17 = (112u + sizeof(_g4_t_v40)) > _g4_s16 ? (112u + sizeof(_g4_t_v40)) : _g4_s16,
    _g4_s18 = (116u + sizeof(_g4_t_v41)) > _g4_s17 ? (116u + sizeof(_g4_t_v41)) : _g4_s17,
    _g4_s19 = (120u + sizeof(_g4_t_v42)) > _g4_s18 ? (120u + sizeof(_g4_t_v42)) : _g4_s18,
    _g4_s20 = (124u + sizeof(_g4_t_v43)) > _g4_s19 ? (124u + sizeof(_g4_t_v43)) : _g4_s19,
    _g4_s21 = (128u + sizeof(_g4_t_v44)) > _g4_s20 ? (128u + sizeof(_g4_t_v44)) : _g4_s20,
    _g4_s22 = (132u + sizeof(_g4_t_v45)) > _g4_s21 ? (132u + sizeof(_g4_t_v45)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 0u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 20u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 36u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 36u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 44u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 64u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 72u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 80u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 100u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 104u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 108u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 112u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 116u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 120u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 124u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 128u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 132u);

  v45[4] = (uint32_t)(uintptr_t)(&a1);
  v27 = a2;
  v28 = a1;
  v31 = a3;
  v29 = a4;
  if ( (uint8_t)glf::fs2::Path::IsAbsolute(a3) != 0
    || (v33[0] = (glf::Self *)v33,
        v33[1] = (glf::Self *)v33,
        glf::fs2::FileSystem::GatherAllSearchPaths(
          (pthread_mutex_t **)v27,
          (std::list<glf::fs2::MountPoint::Self, glf::allocator<glf::fs2::MountPoint::Self>> *)v33,
          true),
        v4 = v33[0],
        (glf::Self **)v33[0] == v33) )
  {
LABEL_11:
    glf::fs2::FileSystem::GetStatusNoSearchPaths(v28, v27, v31, v29);
  }
  else
  {
    while ( 1 )
    {
      glf::fs2::Path::Construct((glf::fs2::Path::Self *)v35, (glf::Self *)((char *)v4 + 8));
      v6 = (const glf::fs2::Path::Self *)glf::fs2::Path::opDivAssign((glf::fs2::Path::Self *)v35, v31);
      glf::fs2::Path::Construct((glf::fs2::Path::Self *)v34, v6);
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v35);
      glf::fs2::FileSystem::GetStatusNoSearchPaths(
        (glf::fs2::FileSystem::Self *)v36,
        *((const glf::fs2::Path::Self **)v4 + 4),
        (glf::fs2::Path::Self *)v34);
      if ( v36[0] > 1u )
        break;
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v45);
      v7 = v37;
      if ( v37 != nullptr )
      {
        if ( __sync_fetch_and_add((volatile int32_t *)v37 + 1, 0xFFFFFFFF) == 1 )
        {
          v26 = (glf::fs2::MountPoint::Self *)(v7);
          G4_VCALL<void>(v7, 8);
          G4_VCALL<void>(v26, 16);
        }
        else
        {
          v5 = *((uint32_t *)v7 + 1);
          _mm_mfence();
          if ( v5 == 1 )
            G4_VCALL<void>(v7, 12);
        }
      }
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v34);
      v4 = *(glf::Self **)v4;
      if ( v4 == (glf::Self *)v33 )
      {
        v21 = v33[0];
        if ( (glf::Self **)v33[0] != v33 )
        {
          while ( 1 )
          {
            v30 = *(glf::Self ***)v21;
            glf::fs2::Path::Destroy((glf::Self *)((char *)v21 + 20));
            v23 = *((volatile int32_t **)v21 + 4);
            if ( v23 != nullptr )
            {
              if ( __sync_fetch_and_add(v23 + 1, 0xFFFFFFFF) == 1 )
              {
                G4_VCALL<void>(v23, 8);
                G4_VCALL<void>(v23, 16);
              }
              else
              {
                v22 = *((uint32_t *)v23 + 1);
                _mm_mfence();
                if ( v22 == 1 )
                  G4_VCALL<void>(v23, 12);
              }
            }
            glf::fs2::Path::Destroy((glf::Self *)((char *)v21 + 8));
            glf::Free(v21);
            if ( v30 == v33 )
              break;
            v21 = (glf::Self *)v30;
          }
        }
        goto LABEL_11;
      }
    }
    Id = glf::fs2::MountPoint::GetId((glf::fs2::MountPoint::Self *)((glf::Self *)((char *)v4 + 8)));
    v10 = v29;
    v36[1] = Id;
    v11 = v36[0];
    v29[1] = Id;
    v29[2] = v36[2];
    v29[3] = v36[3];
    v12 = v37;
    *v29 = v11;
    v29[4] = v36[4];
    if ( v12 != nullptr )
    {
      __sync_add_and_fetch((volatile int32_t *)v12 + 1, 1u);
      v10 = v29;
    }
    v13 = (glf::Self *)v10[5];
    v10[5] = (uint32_t)(uintptr_t)(v12);
    if ( v13 != nullptr )
    {
      glf::intrusive_ptr_release(v13, v24);
      v10 = v29;
    }
    v29[6] = v38;
    v14 = v40;
    v10[7] = v39;
    v10[8] = v14;
    v15 = v44;
    v10[11] = v43;
    v10[12] = v15;
    v16 = v42;
    v10[9] = v41;
    v10[10] = v16;
    glf::fs2::Path::opAssign((glf::fs2::Path::Self *)(v10 + 13), (const glf::fs2::Path::Self *)v45);
    v17 = *((volatile int32_t **)v4 + 4);
    *v28 = (glf::Self *)v17;
    if ( v17 != nullptr )
      __sync_add_and_fetch(v17 + 1, 1u);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v45);
    if ( v37 != nullptr )
      glf::intrusive_ptr_release(v37, v25);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v34);
    v18 = v33[0];
    if ( (glf::Self **)v33[0] != v33 )
    {
      while ( 1 )
      {
        v32 = *(glf::Self ***)v18;
        glf::fs2::Path::Destroy((glf::Self *)((char *)v18 + 20));
        v20 = *((volatile int32_t **)v18 + 4);
        if ( v20 != nullptr )
        {
          if ( __sync_fetch_and_add(v20 + 1, 0xFFFFFFFF) == 1 )
          {
            G4_VCALL<void>(v20, 8);
            G4_VCALL<void>(v20, 16);
          }
          else
          {
            v19 = *((uint32_t *)v20 + 1);
            _mm_mfence();
            if ( v19 == 1 )
              G4_VCALL<void>(v20, 12);
          }
        }
        glf::fs2::Path::Destroy((glf::Self *)((char *)v18 + 8));
        glf::Free(v18);
        if ( v32 == v33 )
          break;
        v18 = (glf::Self *)v32;
      }
    }
  }
  return v28;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::GetStatus  (binary VA: 0xc9c9b0)
// Original: glf::fs2::FileSystem::GetStatus
// ----------------------------------------------------------------------------
glf::fs2::FileSystem::Self * glf::fs2::FileSystem::GetStatus(glf::fs2::FileSystem::Self *self, const glf::fs2::Path::Self *a2, glf::fs2::Path::Self *a3)
{
  typedef glf::RefCounted::Self *_g4_t_v4;
  typedef glf::Self *_g4_t_v5;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v5)) > _g4_s1 ? (28u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 28u);

  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0xFFFF;
  *((uint32_t *)self + 3) = -1;
  *((uint32_t *)self + 4) = -1;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = -1;
  *((uint32_t *)self + 7) = -1;
  *((uint32_t *)self + 8) = -1;
  *((uint32_t *)self + 9) = -1;
  *((uint32_t *)self + 10) = -1;
  *((uint32_t *)self + 11) = -1;
  *((uint32_t *)self + 12) = -1;
  glf::fs2::Path::Construct((glf::fs2::FileSystem::Self *)((char *)self + 52));
  glf::fs2::FileSystem::GetStatus(&v5, a2, a3, self);
  if ( v5 != nullptr )
    glf::intrusive_ptr_release(v5, v4);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::Exists  (binary VA: 0xc9ca70)
// Original: glf::fs2::FileSystem::Exists
// ----------------------------------------------------------------------------
glf::fs2::FileSystem::Self * glf::fs2::FileSystem::Exists(glf::fs2::FileSystem::Self *self, const glf::fs2::Path::Self *a2)
{
  glf::fs2::FileSystem::Self *Status;
  glf::fs2::FileSystem::Self *v3;
  typedef glf::RefCounted::Self *_g4_t_v5;
  typedef unsigned int _g4_t_v6[5];
  typedef glf::Self *_g4_t_v7;
  typedef char _g4_t_v8[12];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v6)) > _g4_s1 ? (20u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v7)) > _g4_s2 ? (40u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (72u + sizeof(_g4_t_v8)) > _g4_s3 ? (72u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 20u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 40u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 72u);

  Status = glf::fs2::FileSystem::GetStatus((glf::fs2::FileSystem::Self *)v6, self, a2);
  LOBYTE(Status) = v6[0] > 1;
  v3 = Status;
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v8);
  if ( v7 != nullptr )
    glf::intrusive_ptr_release(v7, v5);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::MountPoint::Construct  (binary VA: 0xc9cae0)
// Original: glf::fs2::MountPoint::MountPoint
// ----------------------------------------------------------------------------
glf::fs2::FileSystem::Self * glf::fs2::MountPoint::Construct(glf::fs2::Path::Self *a1, glf::RefCounted::Self *a2, glf::fs2::FileSystem::Self **a3, glf::fs2::Path::Self *a4)
{
  glf::fs2::FileSystem::Self *result;
  glf::Self *v5;
  glf::RefCounted::Self *v6;

  glf::fs2::Path::Construct(a1, a2);
  *((uint32_t *)a1 + 2) = 0;
  glf::fs2::Path::Construct((glf::fs2::Path::Self *)((char *)a1 + 12), a4);
  *((uint32_t *)a1 + 5) = glf::fs2::MountPoint::NextId();
  result = glf::fs2::FileSystem::Exists(*a3, (const glf::fs2::Path::Self *)(a2));
  if ( (uint8_t)(uintptr_t)(result) != 0 )
  {
    result = *a3;
    if ( *a3 != nullptr )
      __sync_add_and_fetch((volatile int32_t *)result + 1, 1u);
    v5 = *((glf::Self **)a1 + 2);
    *((uint32_t *)a1 + 2) = (uint32_t)(uintptr_t)(result);
    if ( v5 != nullptr )
      return (glf::fs2::FileSystem::Self *)glf::intrusive_ptr_release(v5, v6);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::MountPoint::Construct  (binary VA: 0xc9cb90)
// Original: glf::fs2::MountPoint::MountPoint
// ----------------------------------------------------------------------------
glf::fs2::FileSystem::Self * glf::fs2::MountPoint::Construct(glf::fs2::Path::Self *a1, glf::RefCounted::Self *a2, glf::fs2::FileSystem::Self **a3)
{
  glf::fs2::FileSystem::Self *result;
  glf::Self *v4;
  glf::RefCounted::Self *v5;

  glf::fs2::Path::Construct(a1, a2);
  *((uint32_t *)a1 + 2) = 0;
  glf::fs2::Path::Construct((glf::fs2::Path::Self *)((char *)a1 + 12));
  *((uint32_t *)a1 + 5) = glf::fs2::MountPoint::NextId();
  result = glf::fs2::FileSystem::Exists(*a3, (const glf::fs2::Path::Self *)(a2));
  if ( (uint8_t)(uintptr_t)(result) != 0 )
  {
    result = *a3;
    if ( *a3 != nullptr )
      __sync_add_and_fetch((volatile int32_t *)result + 1, 1u);
    v4 = *((glf::Self **)a1 + 2);
    *((uint32_t *)a1 + 2) = (uint32_t)(uintptr_t)(result);
    if ( v4 != nullptr )
      return (glf::fs2::FileSystem::Self *)glf::intrusive_ptr_release(v4, v5);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::IsDirectory  (binary VA: 0xc9cc30)
// Original: glf::fs2::FileSystem::IsDirectory
// ----------------------------------------------------------------------------
glf::fs2::FileSystem::Self * glf::fs2::FileSystem::IsDirectory(glf::fs2::FileSystem::Self *self, const glf::fs2::Path::Self *a2)
{
  glf::fs2::FileSystem::Self *Status;
  glf::fs2::FileSystem::Self *v3;
  typedef glf::RefCounted::Self *_g4_t_v5;
  typedef int _g4_t_v6[5];
  typedef glf::Self *_g4_t_v7;
  typedef char _g4_t_v8[12];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v6)) > _g4_s1 ? (20u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v7)) > _g4_s2 ? (40u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (72u + sizeof(_g4_t_v8)) > _g4_s3 ? (72u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 20u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 40u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 72u);

  Status = glf::fs2::FileSystem::GetStatus((glf::fs2::FileSystem::Self *)v6, self, a2);
  LOBYTE(Status) = v6[0] == 3;
  v3 = Status;
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v8);
  if ( v7 != nullptr )
    glf::intrusive_ptr_release(v7, v5);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::IsFile  (binary VA: 0xc9cca0)
// Original: glf::fs2::FileSystem::IsFile
// ----------------------------------------------------------------------------
glf::fs2::FileSystem::Self * glf::fs2::FileSystem::IsFile(glf::fs2::FileSystem::Self *self, const glf::fs2::Path::Self *a2)
{
  glf::fs2::FileSystem::Self *Status;
  glf::fs2::FileSystem::Self *v3;
  typedef glf::RefCounted::Self *_g4_t_v5;
  typedef int _g4_t_v6[5];
  typedef glf::Self *_g4_t_v7;
  typedef char _g4_t_v8[12];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v6)) > _g4_s1 ? (20u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v7)) > _g4_s2 ? (40u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (72u + sizeof(_g4_t_v8)) > _g4_s3 ? (72u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 20u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 40u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 72u);

  Status = glf::fs2::FileSystem::GetStatus((glf::fs2::FileSystem::Self *)v6, self, a2);
  LOBYTE(Status) = v6[0] == 2;
  v3 = Status;
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v8);
  if ( v7 != nullptr )
    glf::intrusive_ptr_release(v7, v5);
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::FileSize  (binary VA: 0xc9cd10)
// Original: glf::fs2::FileSystem::FileSize
// ----------------------------------------------------------------------------
int glf::fs2::FileSystem::FileSize(glf::fs2::FileSystem::Self *self, const glf::fs2::Path::Self *a2)
{
  int v2;
  typedef glf::RefCounted::Self *_g4_t_v4;
  typedef uint8_t _g4_t_v5[12];
  typedef int _g4_t_v6;
  typedef glf::Self *_g4_t_v7;
  typedef uint8_t _g4_t_v8[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v5)) > _g4_s1 ? (20u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v6)) > _g4_s2 ? (32u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v7)) > _g4_s3 ? (40u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (72u + sizeof(_g4_t_v8)) > _g4_s4 ? (72u + sizeof(_g4_t_v8)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 20u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 32u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 40u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 72u);

  glf::fs2::FileSystem::GetStatus((glf::fs2::FileSystem::Self *)v5, self, a2);
  v2 = v6;
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v8);
  if ( v7 != nullptr )
    glf::intrusive_ptr_release(v7, v4);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::GetFileType  (binary VA: 0xc9cd90)
// Original: glf::fs2::FileSystem::GetFileType
// ----------------------------------------------------------------------------
int glf::fs2::FileSystem::GetFileType(glf::fs2::FileSystem::Self *self, const glf::fs2::Path::Self *a2)
{
  int v2;
  typedef glf::RefCounted::Self *_g4_t_v4;
  typedef uint32_t _g4_t_v5[5];
  typedef glf::Self *_g4_t_v6;
  typedef uint8_t _g4_t_v7[12];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v5)) > _g4_s1 ? (20u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v6)) > _g4_s2 ? (40u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (72u + sizeof(_g4_t_v7)) > _g4_s3 ? (72u + sizeof(_g4_t_v7)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 20u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 40u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 72u);

  glf::fs2::FileSystem::GetStatus((glf::fs2::FileSystem::Self *)v5, self, a2);
  v2 = v5[0];
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v7);
  if ( v6 != nullptr )
    glf::intrusive_ptr_release(v6, v4);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::GetPermissions  (binary VA: 0xc9ce00)
// Original: glf::fs2::FileSystem::GetPermissions
// ----------------------------------------------------------------------------
int glf::fs2::FileSystem::GetPermissions(glf::fs2::FileSystem::Self *self, const glf::fs2::Path::Self *a2)
{
  int v2;
  typedef glf::RefCounted::Self *_g4_t_v4;
  typedef uint8_t _g4_t_v5[8];
  typedef int _g4_t_v6;
  typedef glf::Self *_g4_t_v7;
  typedef uint8_t _g4_t_v8[12];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v5)) > _g4_s1 ? (20u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v6)) > _g4_s2 ? (28u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v7)) > _g4_s3 ? (40u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (72u + sizeof(_g4_t_v8)) > _g4_s4 ? (72u + sizeof(_g4_t_v8)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 20u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 40u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 72u);

  glf::fs2::FileSystem::GetStatus((glf::fs2::FileSystem::Self *)v5, self, a2);
  v2 = v6;
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v8);
  if ( v7 != nullptr )
    glf::intrusive_ptr_release(v7, v4);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::MountPoint::Construct  (binary VA: 0xc9ce70)
// Original: glf::fs2::MountPoint::MountPoint
// ----------------------------------------------------------------------------
glf::fs2::MountPoint::Self * glf::fs2::MountPoint::Construct(glf::fs2::MountPoint::Self *self, const glf::fs2::Path::Self *a2)
{
  glf::fs2::MountPoint::Self *v2;
  glf::fs2::Path::Self *v3;
  glf::Self *v4;
  glf::Self *v5;
  glf::fs2::MountPoint::Self *result;
  typedef const glf::RefCounted::Self *_g4_t_v7;
  typedef const glf::RefCounted::Self *_g4_t_v8;
  typedef glf::Self *_g4_t_v9;
  typedef glf::Self *_g4_t_v10;
  typedef glf::Self *_g4_t_v11;
  typedef uint32_t _g4_t_v12[5];
  typedef glf::Self *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint8_t _g4_t_v21[16];
  typedef uint8_t _g4_t_v22[20];
  typedef glf::Self *_g4_t_v23;
  typedef uint32_t _g4_t_v24[8];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v8)) > _g4_s1 ? (8u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v9)) > _g4_s2 ? (36u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v10)) > _g4_s3 ? (44u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v11)) > _g4_s4 ? (48u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v12)) > _g4_s5 ? (52u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v13)) > _g4_s6 ? (72u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v14)) > _g4_s7 ? (76u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v15)) > _g4_s8 ? (80u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (84u + sizeof(_g4_t_v16)) > _g4_s9 ? (84u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (88u + sizeof(_g4_t_v17)) > _g4_s10 ? (88u + sizeof(_g4_t_v17)) : _g4_s10,
    _g4_s12 = (92u + sizeof(_g4_t_v18)) > _g4_s11 ? (92u + sizeof(_g4_t_v18)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v19)) > _g4_s12 ? (96u + sizeof(_g4_t_v19)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v20)) > _g4_s13 ? (100u + sizeof(_g4_t_v20)) : _g4_s13,
    _g4_s15 = (104u + sizeof(_g4_t_v21)) > _g4_s14 ? (104u + sizeof(_g4_t_v21)) : _g4_s14,
    _g4_s16 = (120u + sizeof(_g4_t_v22)) > _g4_s15 ? (120u + sizeof(_g4_t_v22)) : _g4_s15,
    _g4_s17 = (140u + sizeof(_g4_t_v23)) > _g4_s16 ? (140u + sizeof(_g4_t_v23)) : _g4_s16,
    _g4_s18 = (172u + sizeof(_g4_t_v24)) > _g4_s17 ? (172u + sizeof(_g4_t_v24)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 44u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 48u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 52u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 72u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 76u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 80u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 84u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 88u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 92u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 96u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 100u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 104u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 120u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 140u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 172u);

  v24[4] = (uint32_t)(uintptr_t)(&self);
  v2 = self;
  v3 = (glf::fs2::Path::Self *)(a2);
  glf::fs2::Path::Construct(self, a2);
  *((uint32_t *)v2 + 2) = 0;
  glf::fs2::Path::Construct((glf::fs2::MountPoint::Self *)((char *)v2 + 12));
  *((uint32_t *)v2 + 5) = glf::fs2::MountPoint::NextId();
  glf::fs2::FileSystem::Get((glf::fs2::FileSystem::Self *)&v10);
  glf::fs2::FileSystem::GetStatus((glf::fs2::FileSystem::Self *)v22, v10, v3);
  if ( v10 != nullptr )
    glf::intrusive_ptr_release(v10, v7);
  v12[0] = 0;
  v12[1] = 0;
  v12[2] = 0xFFFF;
  v12[3] = -1;
  v12[4] = -1;
  v13 = nullptr;
  v14 = -1;
  v15 = -1;
  v16 = -1;
  v17 = -1;
  v18 = -1;
  v19 = -1;
  v20 = -1;
  glf::fs2::Path::Construct((glf::fs2::Path::Self *)v21);
  glf::fs2::FileSystem::Get((glf::fs2::FileSystem::Self *)&v11);
  glf::fs2::FileSystem::GetStatus(&v9, v11, v3, v12);
  if ( v11 != nullptr )
    glf::intrusive_ptr_release(v11, v8);
  if ( v12[0] > 1u )
  {
    v4 = v9;
    if ( v9 != nullptr )
      __sync_add_and_fetch((volatile int32_t *)v9 + 1, 1u);
    v5 = *((glf::Self **)v2 + 2);
    *((uint32_t *)v2 + 2) = (uint32_t)(uintptr_t)(v4);
    if ( v5 != nullptr )
      glf::intrusive_ptr_release(v5, v8);
  }
  if ( v9 != nullptr )
    glf::intrusive_ptr_release(v9, v8);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v21);
  if ( v13 != nullptr )
    glf::intrusive_ptr_release(v13, v8);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v24);
  result = (glf::fs2::MountPoint::Self *)(v23);
  if ( v23 != nullptr )
    return (glf::fs2::MountPoint::Self *)glf::intrusive_ptr_release(v23, v8);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::OpenTemp  (binary VA: 0xc9d050)
// Original: glf::fs2::FileSystem::OpenTemp
// ----------------------------------------------------------------------------
glf::RefCounted::Self * glf::fs2::FileSystem::OpenTemp(glf::fs2::Path::Self *a1, int a2, char a3, char *a4, char *a5)
{
  void (*v5)(glf::fs2::Path::Self *, uint8_t *, int, int, int, int, int, int, char *, glf::fs2::Path::Self *, char *, int, int, int, int, int, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, int);
  int v6;
  size_t v7;
  const glf::fs2::Path::Self *v8;
  void *v9;
  void *v10;
  void *v11;
  void *v12;
  glf::Self *v13;
  glf::RefCounted::Self *v14;
  glf::RefCounted::Self *v15;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef glf::Self *_g4_t_v21;
  typedef glf::RefCounted::Self *_g4_t_v22;
  typedef glf::RefCounted::Self *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef char _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef char *_g4_t_v28;
  typedef char *_g4_t_v29;
  typedef glf::fs2::Path::Self *_g4_t_v30;
  typedef glf::fs2::Path::Self *_g4_t_v31;
  typedef char *_g4_t_sa;
  typedef char *_g4_t_s;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef uint32_t _g4_t_v40[4];
  typedef uint32_t _g4_t_v41[4];
  typedef uint32_t _g4_t_v42[2];
  typedef int _g4_t_v43;
  typedef uint8_t _g4_t_v44[8];
  typedef uint8_t _g4_t_v45[8];
  typedef uint8_t _g4_t_v46[8];
  typedef char _g4_t_v47[4];
  typedef int _g4_t_v48;
  typedef uint8_t _g4_t_v49[8];
  typedef unsigned int _g4_t_v50[5];
  typedef glf::Self *_g4_t_v51;
  typedef uint32_t _g4_t_v52[5];
  typedef const glf::RefCounted::Self *_g4_t_v53;
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (4u + sizeof(_g4_t_v17)) > _g4_s0 ? (4u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v18)) > _g4_s1 ? (8u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v19)) > _g4_s2 ? (12u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v20)) > _g4_s3 ? (16u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v21)) > _g4_s4 ? (16u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v22)) > _g4_s5 ? (16u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v23)) > _g4_s6 ? (16u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v24)) > _g4_s7 ? (20u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (23u + sizeof(_g4_t_v25)) > _g4_s8 ? (23u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v26)) > _g4_s9 ? (24u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v27)) > _g4_s10 ? (24u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v28)) > _g4_s11 ? (28u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v29)) > _g4_s12 ? (28u + sizeof(_g4_t_v29)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v30)) > _g4_s13 ? (32u + sizeof(_g4_t_v30)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v31)) > _g4_s14 ? (32u + sizeof(_g4_t_v31)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_sa)) > _g4_s15 ? (36u + sizeof(_g4_t_sa)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_s)) > _g4_s16 ? (36u + sizeof(_g4_t_s)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v34)) > _g4_s17 ? (40u + sizeof(_g4_t_v34)) : _g4_s17,
    _g4_s19 = (40u + sizeof(_g4_t_v35)) > _g4_s18 ? (40u + sizeof(_g4_t_v35)) : _g4_s18,
    _g4_s20 = (44u + sizeof(_g4_t_v36)) > _g4_s19 ? (44u + sizeof(_g4_t_v36)) : _g4_s19,
    _g4_s21 = (48u + sizeof(_g4_t_v37)) > _g4_s20 ? (48u + sizeof(_g4_t_v37)) : _g4_s20,
    _g4_s22 = (52u + sizeof(_g4_t_v38)) > _g4_s21 ? (52u + sizeof(_g4_t_v38)) : _g4_s21,
    _g4_s23 = (56u + sizeof(_g4_t_v39)) > _g4_s22 ? (56u + sizeof(_g4_t_v39)) : _g4_s22,
    _g4_s24 = (60u + sizeof(_g4_t_v40)) > _g4_s23 ? (60u + sizeof(_g4_t_v40)) : _g4_s23,
    _g4_s25 = (76u + sizeof(_g4_t_v41)) > _g4_s24 ? (76u + sizeof(_g4_t_v41)) : _g4_s24,
    _g4_s26 = (92u + sizeof(_g4_t_v42)) > _g4_s25 ? (92u + sizeof(_g4_t_v42)) : _g4_s25,
    _g4_s27 = (100u + sizeof(_g4_t_v43)) > _g4_s26 ? (100u + sizeof(_g4_t_v43)) : _g4_s26,
    _g4_s28 = (104u + sizeof(_g4_t_v44)) > _g4_s27 ? (104u + sizeof(_g4_t_v44)) : _g4_s27,
    _g4_s29 = (112u + sizeof(_g4_t_v45)) > _g4_s28 ? (112u + sizeof(_g4_t_v45)) : _g4_s28,
    _g4_s30 = (120u + sizeof(_g4_t_v46)) > _g4_s29 ? (120u + sizeof(_g4_t_v46)) : _g4_s29,
    _g4_s31 = (128u + sizeof(_g4_t_v47)) > _g4_s30 ? (128u + sizeof(_g4_t_v47)) : _g4_s30,
    _g4_s32 = (132u + sizeof(_g4_t_v48)) > _g4_s31 ? (132u + sizeof(_g4_t_v48)) : _g4_s31,
    _g4_s33 = (136u + sizeof(_g4_t_v49)) > _g4_s32 ? (136u + sizeof(_g4_t_v49)) : _g4_s32,
    _g4_s34 = (144u + sizeof(_g4_t_v50)) > _g4_s33 ? (144u + sizeof(_g4_t_v50)) : _g4_s33,
    _g4_s35 = (164u + sizeof(_g4_t_v51)) > _g4_s34 ? (164u + sizeof(_g4_t_v51)) : _g4_s34,
    _g4_s36 = (196u + sizeof(_g4_t_v52)) > _g4_s35 ? (196u + sizeof(_g4_t_v52)) : _g4_s35,
    _g4_s37 = (216u + sizeof(_g4_t_v53)) > _g4_s36 ? (216u + sizeof(_g4_t_v53)) : _g4_s36
  };
  alignas(16) uint8_t _g4_sf[_g4_s37];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 23u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_sa &sa = *reinterpret_cast<_g4_t_sa *>(_g4_sf + 36u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 36u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 40u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 40u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 44u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 48u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 52u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 56u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 60u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 76u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 92u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 100u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 104u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 112u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 120u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 128u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 132u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 136u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 144u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 164u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 196u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 216u);

  v52[4] = (uint32_t)(uintptr_t)(&a1);
  v30 = a1;
  v26 = a2;
  v28 = a4;
  sa = a5;
  HIBYTE(v24) = a3;
  v5 = *(void (**)(glf::fs2::Path::Self *, uint8_t *, int, int, int, int, int, int, char *, glf::fs2::Path::Self *, char *, int, int, int, int, int, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, int))(*(uint32_t *)a1 + 24);
  glf::fs2::android::GetTempDirectory((glf::fs2::android::Self *)v44);
  v5(
    v30,
    v44,
    v17,
    v18,
    v19,
    v20,
    v24,
    v26,
    v28,
    v30,
    sa,
    v34,
    v36,
    v37,
    v38,
    v39,
    v40[0],
    v40[1],
    v40[2],
    v40[3],
    v41[0],
    v41[1],
    v41[2],
    v41[3],
    v42[0],
    v42[1],
    v43);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v44);
  v35 = 100;
  while ( 1 )
  {
    glf::fs2::RandomString((glf::fs2::Self *)v41, 0x10u);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v40), v29, (int)(uintptr_t)(&v38) + 3);
    g4_std::string::construct_copy(v42, v40);
    g4_std::string::append_str(v42, v41);
    g4_std::string::construct_copy(&v43, v42);
    v7 = strlen(s);
    g4_std::string::append((int)(uintptr_t)(&v43), s, v7);
    g4_std::string::construct_copy(v47, &v43);
    v48 = 0;
    glf::fs2::Path::Init((glf::fs2::Path::Self *)v47);
    glf::fs2::android::GetTempDirectory((glf::fs2::android::Self *)v46);
    glf::fs2::Path::Construct((glf::fs2::Path::Self *)v49, (const glf::fs2::Path::Self *)v46);
    v8 = (const glf::fs2::Path::Self *)glf::fs2::Path::opDivAssign((glf::fs2::Path::Self *)v49, (const glf::fs2::Path::Self *)v47);
    glf::fs2::Path::Construct((glf::fs2::Path::Self *)v45, v8);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v49);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v46);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v47);
    v9 = (void *)(v43 - 12);
    if ( (uint32_t *)(v43 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v43 - 4), 0xFFFFFFFF) <= 0 )
    {
      v53 = (const glf::RefCounted::Self *)&v39;
      g4_std::string::Rep::M_destroy(v9);
    }
    v10 = (void *)(v42[0] - 12);
    if ( (uint32_t *)(v42[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v42[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      v53 = (const glf::RefCounted::Self *)((char *)&v39 + 1);
      g4_std::string::Rep::M_destroy(v10);
    }
    v11 = (void *)(v40[0] - 12);
    if ( (uint32_t *)(v40[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v40[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      v53 = (const glf::RefCounted::Self *)((char *)&v39 + 2);
      g4_std::string::Rep::M_destroy(v11);
    }
    v12 = (void *)(v41[0] - 12);
    if ( (uint32_t *)(v41[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v41[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      v53 = (const glf::RefCounted::Self *)((char *)&v39 + 3);
      g4_std::string::Rep::M_destroy(v12);
    }
    glf::fs2::FileSystem::GetStatusNoSearchPaths((glf::fs2::FileSystem::Self *)v50, v31, (glf::fs2::Path::Self *)v45);
    if ( v50[0] <= 1 )
    {
      v14 = glf::fs2::FileSystem::OpenNoSearchPaths(v31, (glf::fs2::Path::Self *)v45, v27);
      if ( v14 != nullptr )
        break;
    }
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v52);
    v13 = v51;
    if ( v51 != nullptr )
    {
      if ( __sync_fetch_and_add((volatile int32_t *)v51 + 1, 0xFFFFFFFF) == 1 )
      {
        v21 = v13;
        G4_VCALL<void>(v13, 8);
        G4_VCALL<void>(v21, 16);
      }
      else
      {
        v6 = *((uint32_t *)v13 + 1);
        _mm_mfence();
        if ( v6 == 1 )
          G4_VCALL<void>(v13, 12);
      }
    }
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v45);
    if ( --v35 == 0 )
      return nullptr;
  }
  *((uint8_t *)v14 + 28) = v25;
  v22 = v14;
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v52);
  v15 = v22;
  if ( v51 != nullptr )
  {
    glf::intrusive_ptr_release(v51, v53);
    v15 = v22;
  }
  v23 = v15;
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v45);
  return v23;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::GetAbsolute  (binary VA: 0xc9d430)
// Original: glf::fs2::FileSystem::GetAbsolute
// ----------------------------------------------------------------------------
glf::fs2::FileSystem::Self * glf::fs2::FileSystem::GetAbsolute(glf::fs2::FileSystem::Self *self, const glf::fs2::Path::Self *a2, glf::fs2::Path::Self *a3)
{
  glf::Self **v3;
  const glf::fs2::Path::Self *v4;
  glf::Self *v5;
  int v6;
  volatile int32_t *v7;
  const glf::fs2::Path::Self *v8;
  char *Root;
  const glf::fs2::Path::Self *v11;
  typedef const glf::RefCounted::Self *_g4_t_v12;
  typedef const glf::RefCounted::Self *_g4_t_v13;
  typedef glf::fs2::FileSystem::Self *_g4_t_v14;
  typedef glf::fs2::FileSystem::Self *_g4_t_v15;
  typedef glf::fs2::Path::Self *_g4_t_v16;
  typedef glf::Self **_g4_t_v17;
  typedef glf::Self *_g4_t_v18[3];
  typedef uint8_t _g4_t_v19[8];
  typedef uint8_t _g4_t_v20[8];
  typedef uint8_t _g4_t_v21[8];
  typedef uint8_t _g4_t_v22[8];
  typedef uint8_t _g4_t_v23[8];
  typedef unsigned int _g4_t_v24[5];
  typedef glf::Self *_g4_t_v25;
  typedef uint32_t _g4_t_v26[8];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v14)) > _g4_s2 ? (36u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v15)) > _g4_s3 ? (40u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v16)) > _g4_s4 ? (44u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v17)) > _g4_s5 ? (44u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v18)) > _g4_s6 ? (52u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v19)) > _g4_s7 ? (64u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v20)) > _g4_s8 ? (72u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v21)) > _g4_s9 ? (80u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (88u + sizeof(_g4_t_v22)) > _g4_s10 ? (88u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v23)) > _g4_s11 ? (96u + sizeof(_g4_t_v23)) : _g4_s11,
    _g4_s13 = (104u + sizeof(_g4_t_v24)) > _g4_s12 ? (104u + sizeof(_g4_t_v24)) : _g4_s12,
    _g4_s14 = (124u + sizeof(_g4_t_v25)) > _g4_s13 ? (124u + sizeof(_g4_t_v25)) : _g4_s13,
    _g4_s15 = (156u + sizeof(_g4_t_v26)) > _g4_s14 ? (156u + sizeof(_g4_t_v26)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 52u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 64u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 72u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 80u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 88u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 96u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 104u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 124u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 156u);

  v26[4] = (uint32_t)(uintptr_t)(&self);
  v15 = self;
  v14 = (glf::fs2::FileSystem::Self *)(a2);
  v16 = a3;
  if ( (uint8_t)glf::fs2::Path::IsAbsolute(a3) != 0 )
  {
    glf::fs2::Path::Construct(v15, v16);
    return v15;
  }
  v18[0] = (glf::Self *)v18;
  v18[1] = (glf::Self *)v18;
  glf::fs2::FileSystem::GatherAllSearchPaths(
    (pthread_mutex_t **)v14,
    (std::list<glf::fs2::MountPoint::Self, glf::allocator<glf::fs2::MountPoint::Self>> *)v18,
    true);
  v3 = (glf::Self **)v18[0];
  if ( (glf::Self **)v18[0] == v18 )
  {
LABEL_3:
    glf::fs2::Path::Construct((glf::fs2::Path::Self *)v23, (glf::fs2::FileSystem::Self *)((char *)v14 + 176));
    v4 = (const glf::fs2::Path::Self *)glf::fs2::Path::opDivAssign((glf::fs2::Path::Self *)v23, v16);
    glf::fs2::Path::Construct(v15, v4);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v23);
    goto LABEL_4;
  }
  while ( !glf::fs2::MountPoint::IsValid((glf::fs2::MountPoint::Self *)(v3 + 2)) )
  {
LABEL_17:
    v3 = (glf::Self **)*v3;
    if ( v3 == v18 )
      goto LABEL_3;
  }
  glf::fs2::Path::Construct((glf::fs2::Path::Self *)v21, (const glf::fs2::Path::Self *)(v3 + 2));
  v8 = (const glf::fs2::Path::Self *)glf::fs2::Path::opDivAssign((glf::fs2::Path::Self *)v21, v16);
  glf::fs2::Path::Construct((glf::fs2::Path::Self *)v19, v8);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v21);
  glf::fs2::FileSystem::GetStatusNoSearchPaths((glf::fs2::FileSystem::Self *)v24, v3[4], (glf::fs2::Path::Self *)v19);
  if ( v24[0] <= 1 )
  {
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v26);
    if ( v25 != nullptr )
      glf::intrusive_ptr_release(v25, v12);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v19);
    goto LABEL_17;
  }
  if ( (uint8_t)glf::fs2::Path::IsAbsolute((glf::fs2::Path::Self *)v19) == 0 )
  {
    Root = glf::fs2::FileSystem::GetRoot((glf::fs2::FileSystem::Self *)(v3[4]));
    glf::fs2::Path::Construct((glf::fs2::Path::Self *)v22, (const glf::fs2::Path::Self *)Root);
    v11 = (const glf::fs2::Path::Self *)glf::fs2::Path::opDivAssign((glf::fs2::Path::Self *)v22, (const glf::fs2::Path::Self *)v19);
    glf::fs2::Path::Construct((glf::fs2::Path::Self *)v20, v11);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v22);
    glf::fs2::Path::opAssign((glf::fs2::Path::Self *)v19, (const glf::fs2::Path::Self *)v20);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v20);
  }
  glf::fs2::Path::Construct(v15, (const glf::fs2::Path::Self *)v19);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v26);
  if ( v25 != nullptr )
    glf::intrusive_ptr_release(v25, v13);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v19);
LABEL_4:
  v5 = v18[0];
  if ( (glf::Self **)v18[0] != v18 )
  {
    while ( 1 )
    {
      v17 = *(glf::Self ***)v5;
      glf::fs2::Path::Destroy((glf::Self *)((char *)v5 + 20));
      v7 = *((volatile int32_t **)v5 + 4);
      if ( v7 != nullptr )
      {
        if ( __sync_fetch_and_add(v7 + 1, 0xFFFFFFFF) == 1 )
        {
          G4_VCALL<void>(v7, 8);
          G4_VCALL<void>(v7, 16);
        }
        else
        {
          v6 = *((uint32_t *)v7 + 1);
          _mm_mfence();
          if ( v6 == 1 )
            G4_VCALL<void>(v7, 12);
        }
      }
      glf::fs2::Path::Destroy((glf::Self *)((char *)v5 + 8));
      glf::Free(v5);
      if ( v17 == v18 )
        break;
      v5 = (glf::Self *)v17;
    }
  }
  return v15;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::ResolveFromSearchPaths  (binary VA: 0xc9d740)
// Original: glf::fs2::FileSystem::ResolveFromSearchPaths
// ----------------------------------------------------------------------------
glf::fs2::FileSystem::Self * glf::fs2::FileSystem::ResolveFromSearchPaths(glf::fs2::FileSystem::Self *self, const glf::fs2::Path::Self *a2, glf::fs2::Path::Self *a3, glf::fs2::Path::Self *a4, bool a5)
{
  bool v5; // si
  glf::Self *v6;
  int v7;
  const glf::fs2::Path::Self *v8;
  glf::RefCounted::Self *v9;
  glf::Self *v10;
  int v11;
  volatile int32_t *v12;
  unsigned int v13;
  volatile int32_t *v15;
  const glf::fs2::Path::Self *AltPath;
  const glf::fs2::Path::Self *v17;
  glf::Self *v18;
  int v19;
  volatile int32_t *v20;
  const glf::fs2::Path::Self *v21;
  const glf::fs2::Path::Self *v22;
  typedef const glf::RefCounted::Self *_g4_t_v23;
  typedef const glf::RefCounted::Self *_g4_t_v24;
  typedef glf::RefCounted::Self *_g4_t_v25;
  typedef glf::fs2::Path::Self *_g4_t_v26;
  typedef glf::RefCounted::Self *_g4_t_v27;
  typedef glf::fs2::FileSystem::Self *_g4_t_v28;
  typedef glf::fs2::Path::Self *_g4_t_v29;
  typedef unsigned int _g4_t_v30;
  typedef glf::Self **_g4_t_v31;
  typedef glf::Self **_g4_t_v32;
  typedef glf::Self *_g4_t_v33[2];
  typedef uint8_t _g4_t_v34[8];
  typedef uint8_t _g4_t_v35[8];
  typedef uint8_t _g4_t_v36[8];
  typedef uint8_t _g4_t_v37[8];
  typedef uint8_t _g4_t_v38[8];
  typedef glf::fs2::IndexData::Self *_g4_t_v39[2];
  typedef uint8_t _g4_t_v40[8];
  typedef unsigned int _g4_t_v41;
  typedef unsigned int _g4_t_v42[5];
  typedef volatile int32_t *_g4_t_v43;
  typedef char _g4_t_v44[8];
  typedef unsigned int _g4_t_v45[5];
  typedef glf::Self *_g4_t_v46;
  typedef uint32_t _g4_t_v47[8];
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (8u + sizeof(_g4_t_v23)) > _g4_s0 ? (8u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v24)) > _g4_s1 ? (8u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (52u + sizeof(_g4_t_v25)) > _g4_s2 ? (52u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v26)) > _g4_s3 ? (60u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v27)) > _g4_s4 ? (64u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (68u + sizeof(_g4_t_v28)) > _g4_s5 ? (68u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v29)) > _g4_s6 ? (72u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v30)) > _g4_s7 ? (76u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v31)) > _g4_s8 ? (76u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v32)) > _g4_s9 ? (76u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v33)) > _g4_s10 ? (84u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (92u + sizeof(_g4_t_v34)) > _g4_s11 ? (92u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (100u + sizeof(_g4_t_v35)) > _g4_s12 ? (100u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (108u + sizeof(_g4_t_v36)) > _g4_s13 ? (108u + sizeof(_g4_t_v36)) : _g4_s13,
    _g4_s15 = (116u + sizeof(_g4_t_v37)) > _g4_s14 ? (116u + sizeof(_g4_t_v37)) : _g4_s14,
    _g4_s16 = (124u + sizeof(_g4_t_v38)) > _g4_s15 ? (124u + sizeof(_g4_t_v38)) : _g4_s15,
    _g4_s17 = (132u + sizeof(_g4_t_v39)) > _g4_s16 ? (132u + sizeof(_g4_t_v39)) : _g4_s16,
    _g4_s18 = (140u + sizeof(_g4_t_v40)) > _g4_s17 ? (140u + sizeof(_g4_t_v40)) : _g4_s17,
    _g4_s19 = (148u + sizeof(_g4_t_v41)) > _g4_s18 ? (148u + sizeof(_g4_t_v41)) : _g4_s18,
    _g4_s20 = (156u + sizeof(_g4_t_v42)) > _g4_s19 ? (156u + sizeof(_g4_t_v42)) : _g4_s19,
    _g4_s21 = (176u + sizeof(_g4_t_v43)) > _g4_s20 ? (176u + sizeof(_g4_t_v43)) : _g4_s20,
    _g4_s22 = (208u + sizeof(_g4_t_v44)) > _g4_s21 ? (208u + sizeof(_g4_t_v44)) : _g4_s21,
    _g4_s23 = (216u + sizeof(_g4_t_v45)) > _g4_s22 ? (216u + sizeof(_g4_t_v45)) : _g4_s22,
    _g4_s24 = (236u + sizeof(_g4_t_v46)) > _g4_s23 ? (236u + sizeof(_g4_t_v46)) : _g4_s23,
    _g4_s25 = (268u + sizeof(_g4_t_v47)) > _g4_s24 ? (268u + sizeof(_g4_t_v47)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 52u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 60u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 64u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 68u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 72u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 76u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 76u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 76u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 84u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 92u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 100u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 108u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 116u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 124u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 132u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 140u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 148u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 156u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 176u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 208u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 216u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 236u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 268u);

  v47[4] = (uint32_t)(uintptr_t)(&self);
  v27 = (glf::RefCounted::Self *)(a2);
  v29 = a3;
  v26 = a4;
  v28 = self;
  v5 = a5;
  if ( (uint8_t)glf::fs2::Path::IsAbsolute(a3) == 0 )
  {
    v33[0] = (glf::Self *)v33;
    v33[1] = (glf::Self *)v33;
    glf::fs2::FileSystem::GatherAllSearchPaths(
      (pthread_mutex_t **)v27,
      (std::list<glf::fs2::MountPoint::Self, glf::allocator<glf::fs2::MountPoint::Self>> *)v33,
      v5);
    v6 = v33[0];
    if ( (glf::Self **)v33[0] != v33 )
    {
      while ( 1 )
      {
        glf::fs2::Path::Construct((glf::fs2::Path::Self *)v37, (glf::Self *)((char *)v6 + 8));
        v8 = (const glf::fs2::Path::Self *)glf::fs2::Path::opDivAssign((glf::fs2::Path::Self *)v37, v29);
        glf::fs2::Path::Construct((glf::fs2::Path::Self *)v34, v8);
        glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v37);
        glf::fs2::FileSystem::GetStatusNoSearchPaths(
          (glf::fs2::FileSystem::Self *)v42,
          *((const glf::fs2::Path::Self **)v6 + 4),
          (glf::fs2::Path::Self *)v34);
        v30 = v42[0];
        glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v44);
        v9 = (glf::RefCounted::Self *)v43;
        if ( v43 != nullptr )
        {
          if ( __sync_fetch_and_add(v43 + 1, 0xFFFFFFFF) == 1 )
          {
            v25 = v9;
            G4_VCALL<void>(v9, 8);
            G4_VCALL<void>(v25, 16);
            if ( v30 > 1 )
            {
LABEL_11:
              glf::fs2::FileSystem::ResolveFromSearchPaths(
                v28,
                *((const glf::fs2::Path::Self **)v6 + 4),
                (glf::fs2::Path::Self *)v34,
                (bool)v26);
              glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v34);
              v10 = v33[0];
              if ( (glf::Self **)v33[0] != v33 )
              {
                while ( 1 )
                {
                  v31 = *(glf::Self ***)v10;
                  glf::fs2::Path::Destroy((glf::Self *)((char *)v10 + 20));
                  v12 = *((volatile int32_t **)v10 + 4);
                  if ( v12 != nullptr )
                  {
                    if ( __sync_fetch_and_add(v12 + 1, 0xFFFFFFFF) == 1 )
                    {
                      G4_VCALL<void>(v12, 8);
                      G4_VCALL<void>(v12, 16);
                    }
                    else
                    {
                      v11 = *((uint32_t *)v12 + 1);
                      _mm_mfence();
                      if ( v11 == 1 )
                        G4_VCALL<void>(v12, 12);
                    }
                  }
                  glf::fs2::Path::Destroy((glf::Self *)((char *)v10 + 8));
                  glf::Free(v10);
                  if ( v31 == v33 )
                    break;
                  v10 = (glf::Self *)v31;
                }
              }
              return v28;
            }
            goto LABEL_7;
          }
          v7 = *((uint32_t *)v9 + 1);
          _mm_mfence();
          if ( v7 == 1 )
            G4_VCALL<void>(v9, 12);
        }
        if ( v30 > 1 )
          goto LABEL_11;
LABEL_7:
        glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v34);
        v6 = *(glf::Self **)v6;
        if ( v6 == (glf::Self *)v33 )
        {
          v18 = v33[0];
          if ( (glf::Self **)v33[0] != v33 )
          {
            while ( 1 )
            {
              v32 = *(glf::Self ***)v18;
              glf::fs2::Path::Destroy((glf::Self *)((char *)v18 + 20));
              v20 = *((volatile int32_t **)v18 + 4);
              if ( v20 != nullptr )
              {
                if ( __sync_fetch_and_add(v20 + 1, 0xFFFFFFFF) == 1 )
                {
                  G4_VCALL<void>(v20, 8);
                  G4_VCALL<void>(v20, 16);
                }
                else
                {
                  v19 = *((uint32_t *)v20 + 1);
                  _mm_mfence();
                  if ( v19 == 1 )
                    G4_VCALL<void>(v20, 12);
                }
              }
              glf::fs2::Path::Destroy((glf::Self *)((char *)v18 + 8));
              glf::Free(v18);
              if ( v32 == v33 )
                break;
              v18 = (glf::Self *)v32;
            }
          }
          break;
        }
      }
    }
  }
  glf::fs2::Path::Construct((glf::fs2::Path::Self *)v40);
  v39[0] = nullptr;
  v39[1] = nullptr;
  v41 = 0xFFFFFFFF;
  if ( (uint8_t)glf::fs2::FileSystem::ResolveFromIndex((int)(uintptr_t)(v27), v29, v39) != 0 )
  {
    v15 = *(volatile int32_t **)(*((uint32_t *)v39[0] + 52)
                                      + 4 * *(uint8_t *)(*((uint32_t *)v39[0] + 61) + v41));
    if ( v15 != nullptr )
    {
      __sync_add_and_fetch(v15 + 1, 1u);
      AltPath = (const glf::fs2::Path::Self *)glf::fs2::IndexData::GetAltPath(v39[0], v41);
      glf::fs2::Path::Construct((glf::fs2::Path::Self *)v38, AltPath);
      v17 = (const glf::fs2::Path::Self *)glf::fs2::Path::opDivAssign((glf::fs2::Path::Self *)v38, (const glf::fs2::Path::Self *)v40);
      glf::fs2::Path::Construct((glf::fs2::Path::Self *)v35, v17);
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v38);
      glf::fs2::Path::opAssign(v26, (const glf::fs2::Path::Self *)v35);
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v35);
      *(uint32_t *)v28 = (uint32_t)(uintptr_t)(v15);
      __sync_add_and_fetch(v15 + 1, 1u);
      glf::intrusive_ptr_release((glf::Self *)v15, v24);
    }
    else
    {
      v21 = (const glf::fs2::Path::Self *)glf::fs2::IndexData::GetAltPath(v39[0], v41);
      glf::fs2::Path::Construct((glf::fs2::Path::Self *)v38, v21);
      v22 = (const glf::fs2::Path::Self *)glf::fs2::Path::opDivAssign((glf::fs2::Path::Self *)v38, (const glf::fs2::Path::Self *)v40);
      glf::fs2::Path::Construct((glf::fs2::Path::Self *)v35, v22);
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v38);
      glf::fs2::Path::opAssign(v26, (const glf::fs2::Path::Self *)v35);
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v35);
      *(uint32_t *)v28 = 0;
    }
  }
  else
  {
    glf::fs2::FileSystem::GetStatusNoSearchPaths((glf::fs2::FileSystem::Self *)v45, v27, v29);
    v13 = v45[0];
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v47);
    if ( v46 != nullptr )
      glf::intrusive_ptr_release(v46, v23);
    if ( v13 <= 1 )
    {
      *(uint32_t *)v28 = 0;
    }
    else
    {
      glf::fs2::FileSystem::FixPath((glf::fs2::FileSystem::Self *)v36, (const glf::fs2::Path::Self *)(v27), v29);
      glf::fs2::Path::opAssign(v26, (const glf::fs2::Path::Self *)v36);
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v36);
      *(uint32_t *)v28 = (uint32_t)(uintptr_t)(v27);
      if ( v27 != nullptr )
        __sync_add_and_fetch((volatile int32_t *)v27 + 1, 1u);
    }
  }
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v40);
  return v28;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::BaseStatus::ConvertTime  (binary VA: 0xc9dd10)
// Original: glf::fs2::BaseStatus::ConvertTime
// ----------------------------------------------------------------------------
int glf::fs2::BaseStatus::ConvertTime(int64_t a1, int a2, int a3)
{
  int v3;
  int v4;
  int v5;

  v3 = a2;
  v4 = a3;
  v5 = a1;
  if ( a2 != a3 )
  {
    if ( a2 == 0 )
      v3 = 1;
    if ( a3 == 0 )
      v4 = 1;
    if ( v3 == 1 )
    {
      if ( v4 == 2 )
        return (uint32_t)(uintptr_t)(((uint8_t *)(uintptr_t)0x989680u)) * a1 - 717324288;
    }
    else if ( v3 == 2 && v4 == 1 )
    {
      return a1 / (unsigned int)(uintptr_t)(((uint8_t *)(uintptr_t)0x989680u)) + 1240428288;
    }
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::Combine  (binary VA: 0xc9e290)
// Original: glf::fs2::FileSystem::Combine
// ----------------------------------------------------------------------------
volatile int32_t ** glf::fs2::FileSystem::Combine(volatile int32_t **a1, glf::RefCounted::Self **a2, glf::RefCounted::Self **a3)
{
  glf::fs2::Self *v3;
  int *v4;
  int *v5;
  char v6;
  int *v7;
  int v8;
  glf::fs2::Path::Self *v9;
  glf::fs2::Path::Self *v10;
  glf::fs2::Path::Self *v11;
  int i;
  pthread_mutex_t **v13;
  glf::fs2::Path::Self *v14;
  glf::fs2::Path::Self *v15;
  int v16;
  int v17;
  int *j;
  int v19;
  int v20;
  glf::fs2::Path::Self *v21;
  glf::fs2::Path::Self *v22;
  glf::fs2::Path::Self *v24;
  const glf::fs2::Path::Self *v25;
  int v26;
  int v27;
  int v28;
  char v29;
  typedef glf::fs2::Path::Self *_g4_t_v30;
  typedef glf::fs2::Path::Self *_g4_t_v31;
  typedef const glf::RefCounted::Self *_g4_t_v32;
  typedef char _g4_t_v33;
  typedef char *_g4_t_v34;
  typedef char *_g4_t_v35;
  typedef char *_g4_t_v36;
  typedef glf::fs2::Self *_g4_t_v37;
  typedef glf::RefCounted::Self **_g4_t_v38;
  typedef glf::RefCounted::Self **_g4_t_v39;
  typedef uint16_t _g4_t_v40;
  typedef volatile int32_t **_g4_t_v41;
  typedef glf::fs2::Path::Self *_g4_t_v42;
  typedef glf::fs2::Self *_g4_t_v43;
  typedef glf::fs2::Path::Self *_g4_t_v44;
  typedef volatile int32_t *_g4_t_v45;
  typedef uint16_t _g4_t_v46[9];
  typedef glf::RefCounted::Self *_g4_t_v47[2];
  typedef int _g4_t_v48[2];
  typedef uint8_t _g4_t_v49[8];
  typedef char _g4_t_v50[4];
  typedef int _g4_t_v51;
  typedef uint8_t _g4_t_v52[8];
  typedef uint32_t _g4_t_v53[2];
  typedef glf::fs2::Path::Self *_g4_t_v54;
  typedef glf::fs2::Path::Self *_g4_t_v55;
  typedef glf::fs2::Path::Self *_g4_t_v56;
  typedef uint8_t _g4_t_v57[8];
  typedef glf::fs2::Self *_g4_t_v58;
  typedef uint8_t _g4_t_v59[8];
  typedef glf::fs2::Self *_g4_t_v60;
  typedef char _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int *_g4_t_v63;
  typedef int *_g4_t_v64;
  typedef int *_g4_t_v65;
  typedef int _g4_t_v66;
  typedef volatile int32_t ***_g4_t_v67;
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (8u + sizeof(_g4_t_v30)) > _g4_s0 ? (8u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v31)) > _g4_s1 ? (8u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v32)) > _g4_s2 ? (12u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v33)) > _g4_s3 ? (48u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v34)) > _g4_s4 ? (52u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v35)) > _g4_s5 ? (52u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v36)) > _g4_s6 ? (52u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v37)) > _g4_s7 ? (56u + sizeof(_g4_t_v37)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v38)) > _g4_s8 ? (60u + sizeof(_g4_t_v38)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v39)) > _g4_s9 ? (64u + sizeof(_g4_t_v39)) : _g4_s9,
    _g4_s11 = (70u + sizeof(_g4_t_v40)) > _g4_s10 ? (70u + sizeof(_g4_t_v40)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v41)) > _g4_s11 ? (72u + sizeof(_g4_t_v41)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v42)) > _g4_s12 ? (76u + sizeof(_g4_t_v42)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v43)) > _g4_s13 ? (76u + sizeof(_g4_t_v43)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v44)) > _g4_s14 ? (76u + sizeof(_g4_t_v44)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v45)) > _g4_s15 ? (80u + sizeof(_g4_t_v45)) : _g4_s15,
    _g4_s17 = (102u + sizeof(_g4_t_v46)) > _g4_s16 ? (102u + sizeof(_g4_t_v46)) : _g4_s16,
    _g4_s18 = (120u + sizeof(_g4_t_v47)) > _g4_s17 ? (120u + sizeof(_g4_t_v47)) : _g4_s17,
    _g4_s19 = (128u + sizeof(_g4_t_v48)) > _g4_s18 ? (128u + sizeof(_g4_t_v48)) : _g4_s18,
    _g4_s20 = (136u + sizeof(_g4_t_v49)) > _g4_s19 ? (136u + sizeof(_g4_t_v49)) : _g4_s19,
    _g4_s21 = (144u + sizeof(_g4_t_v50)) > _g4_s20 ? (144u + sizeof(_g4_t_v50)) : _g4_s20,
    _g4_s22 = (148u + sizeof(_g4_t_v51)) > _g4_s21 ? (148u + sizeof(_g4_t_v51)) : _g4_s21,
    _g4_s23 = (152u + sizeof(_g4_t_v52)) > _g4_s22 ? (152u + sizeof(_g4_t_v52)) : _g4_s22,
    _g4_s24 = (160u + sizeof(_g4_t_v53)) > _g4_s23 ? (160u + sizeof(_g4_t_v53)) : _g4_s23,
    _g4_s25 = (168u + sizeof(_g4_t_v54)) > _g4_s24 ? (168u + sizeof(_g4_t_v54)) : _g4_s24,
    _g4_s26 = (172u + sizeof(_g4_t_v55)) > _g4_s25 ? (172u + sizeof(_g4_t_v55)) : _g4_s25,
    _g4_s27 = (176u + sizeof(_g4_t_v56)) > _g4_s26 ? (176u + sizeof(_g4_t_v56)) : _g4_s26,
    _g4_s28 = (192u + sizeof(_g4_t_v57)) > _g4_s27 ? (192u + sizeof(_g4_t_v57)) : _g4_s27,
    _g4_s29 = (200u + sizeof(_g4_t_v58)) > _g4_s28 ? (200u + sizeof(_g4_t_v58)) : _g4_s28,
    _g4_s30 = (204u + sizeof(_g4_t_v59)) > _g4_s29 ? (204u + sizeof(_g4_t_v59)) : _g4_s29,
    _g4_s31 = (212u + sizeof(_g4_t_v60)) > _g4_s30 ? (212u + sizeof(_g4_t_v60)) : _g4_s30,
    _g4_s32 = (216u + sizeof(_g4_t_v61)) > _g4_s31 ? (216u + sizeof(_g4_t_v61)) : _g4_s31,
    _g4_s33 = (220u + sizeof(_g4_t_v62)) > _g4_s32 ? (220u + sizeof(_g4_t_v62)) : _g4_s32,
    _g4_s34 = (224u + sizeof(_g4_t_v63)) > _g4_s33 ? (224u + sizeof(_g4_t_v63)) : _g4_s33,
    _g4_s35 = (228u + sizeof(_g4_t_v64)) > _g4_s34 ? (228u + sizeof(_g4_t_v64)) : _g4_s34,
    _g4_s36 = (232u + sizeof(_g4_t_v65)) > _g4_s35 ? (232u + sizeof(_g4_t_v65)) : _g4_s35,
    _g4_s37 = (236u + sizeof(_g4_t_v66)) > _g4_s36 ? (236u + sizeof(_g4_t_v66)) : _g4_s36,
    _g4_s38 = (256u + sizeof(_g4_t_v67)) > _g4_s37 ? (256u + sizeof(_g4_t_v67)) : _g4_s37
  };
  alignas(16) uint8_t _g4_sf[_g4_s38];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 8u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 8u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 12u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 48u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 52u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 52u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 52u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 56u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 60u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 64u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 70u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 72u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 76u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 76u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 76u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 80u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 102u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 120u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 128u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 136u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 144u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 148u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 152u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 160u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 168u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 172u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 176u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 192u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 200u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 204u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 212u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 216u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 220u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 224u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 228u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 232u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 236u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 256u);

  v67 = &a1;
  v38 = a3;
  v39 = a2;
  v41 = a1;
  v45 = (volatile int32_t *)glf::MemObject::opNew(0x190u);
  glf::fs2::IndexData::Construct((glf::fs2::IndexData::Self *)v45);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v48), (char *)&unk_1B15112, (int)(uintptr_t)(v46));
  v48[1] = 0;
  glf::fs2::Path::Init((glf::fs2::Path::Self *)v48);
  v40 = glf::fs2::IndexData::NewDir(
          (glf::fs2::IndexData::Self *)v45,
          4095,
          0xFFFFu,
          (const char *)&unk_1B15112,
          nullptr,
          (const glf::fs2::Path::Self *)v48);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v48);
  glf::fs2::Path::Construct((glf::fs2::Path::Self *)v49);
  v62 = 0;
  v64 = &v62;
  v65 = &v62;
  v63 = nullptr;
  v66 = 0;
  v3 = (glf::fs2::Self *)glf::MemObject::opNew(0x28u);
  *((uint32_t *)v3 + 3) = 0;
  *((uint32_t *)v3 + 4) = 0;
  *((uint32_t *)v3 + 5) = 0;
  *(uint32_t *)v3 = 3;
  *((uint32_t *)v3 + 2) = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std_compat::string_assign((int)(uintptr_t)(v3) + 8, &unk_1B15112, 0);
  *((uint32_t *)v3 + 1) = 0;
  *((uint32_t *)v3 + 6) = 0;
  *((uint32_t *)v3 + 7) = (uint32_t)(uintptr_t)(v49);
  g4_std::string::construct_copy(v50, (char *)v3 + 8);
  v51 = 0;
  glf::fs2::Path::Init((glf::fs2::Path::Self *)v50);
  glf::fs2::Path::Construct((glf::fs2::Path::Self *)v57, (const glf::fs2::Path::Self *)v50);
  v58 = v3;
  glf::fs2::Path::Construct((glf::fs2::Path::Self *)v59, (const glf::fs2::Path::Self *)v57);
  v4 = v63;
  v60 = v58;
  if ( v63 == nullptr )
  {
    v4 = &v62;
    goto LABEL_8;
  }
  while ( (int)glf::fs2::Path::Compare((glf::fs2::Path::Self *)v59, (const glf::fs2::Path::Self *)(v4 + 4)) < 0 )
  {
    v5 = (int *)v4[2];
    v6 = 1;
    if ( v5 == nullptr )
      goto LABEL_7;
LABEL_4:
    v4 = v5;
  }
  v5 = (int *)v4[3];
  v6 = 0;
  if ( v5 != nullptr )
    goto LABEL_4;
LABEL_7:
  if ( v6 == 0 )
  {
    v7 = v4;
    goto LABEL_10;
  }
LABEL_8:
  if ( v64 == v4 )
  {
    LOBYTE(v27) = 1;
    if ( v4 != &v62 )
      v27 = glf::fs2::Path::Compare((glf::fs2::Path::Self *)v59, (const glf::fs2::Path::Self *)(v4 + 4)) >> 31;
    v33 = v27;
    v28 = opNew(0x1Cu);
    v29 = v33;
    if ( v28 != -16 )
    {
      v36 = (char *)v28;
      glf::fs2::Path::Construct((glf::fs2::Path::Self *)(v28 + 16), (const glf::fs2::Path::Self *)v59);
      v28 = (int)(uintptr_t)(v36);
      *((uint32_t *)v36 + 6) = (uint32_t)(uintptr_t)(v60);
      v29 = v33;
    }
    sub_1904970(v29, v28, v4, &v62);
    ++v66;
  }
  else
  {
    v7 = (int *)sub_19048F0(v4);
LABEL_10:
    if ( (int)glf::fs2::Path::Compare((glf::fs2::Path::Self *)(v7 + 4), (const glf::fs2::Path::Self *)v59) < 0 )
    {
      LOBYTE(v44) = 1;
      if ( v4 != &v62 )
        v44 = (glf::fs2::Path::Self *)(glf::fs2::Path::Compare((glf::fs2::Path::Self *)v59, (const glf::fs2::Path::Self *)(v4 + 4)) >> 31);
      v26 = opNew(0x1Cu);
      if ( v26 != -16 )
      {
        v35 = (char *)v26;
        glf::fs2::Path::Construct((glf::fs2::Path::Self *)(v26 + 16), (const glf::fs2::Path::Self *)v59);
        v26 = (int)(uintptr_t)(v35);
        *((uint32_t *)v35 + 6) = (uint32_t)(uintptr_t)(v60);
      }
      sub_1904970((char)(uintptr_t)(v44), v26, v4, &v62);
      ++v66;
    }
  }
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v59);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v57);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v50);
  v54 = nullptr;
  v55 = nullptr;
  v56 = nullptr;
  v8 = opNew(0x10u);
  v9 = v54;
  v42 = (glf::fs2::Path::Self *)v8;
  if ( v55 != v54 )
  {
    v37 = v3;
    v10 = v55;
    do
    {
      v30 = v9;
      v9 = (glf::fs2::Path::Self *)((char *)v9 + 8);
      glf::fs2::Path::Destroy(v30);
    }
    while ( v10 != v9 );
    v3 = v37;
    v9 = v54;
  }
  if ( v9 != nullptr )
    opDelete(v9);
  v11 = v42;
  v43 = v3;
  v54 = v11;
  v55 = v11;
  v56 = (glf::fs2::Path::Self *)((char *)v11 + 16);
  v47[0] = *v39;
  v47[1] = *v38;
  for ( i = 0; i != 2; ++i )
  {
    glf::fs2::Path::Construct((glf::fs2::Path::Self *)v52);
    v13 = (pthread_mutex_t **)v47[i];
    if ( v55 == v56 )
    {
      sub_C96EE0((glf::fs2::Path::Self *)&v54, v55, (glf::fs2::Path::Self *)v52);
      v15 = v55;
    }
    else
    {
      v14 = nullptr;
      if ( v55 != nullptr )
      {
        glf::fs2::Path::Construct(v55, (const glf::fs2::Path::Self *)v52);
        v14 = v55;
      }
      v15 = (glf::fs2::Path::Self *)((char *)v14 + 8);
      v55 = v15;
    }
    v53[1] = (uint32_t)(uintptr_t)((char *)v15 - 8);
    v53[0] = (uint32_t)(uintptr_t)(&v61);
    glf::fs2::FileSystem::OpenDir((glf::Self **)&v46[1], v13, (glf::fs2::Path::Self *)v52, 23, 0);
    v16 = *(uint32_t *)&v46[1];
    if ( *(uint32_t *)&v46[1] != 0 )
    {
      while ( G4_VCALL<uint8_t>(v16, 24) != 0 )
      {
        v34 = (char *)(*(int (**)(uint32_t))(**(uint32_t **)&v46[1] + 20))(*(uint32_t *)&v46[1]);
        v24 = (glf::fs2::Path::Self *)(*(int (**)(uint32_t))(**(uint32_t **)&v46[1] + 28))(*(uint32_t *)&v46[1]);
        v25 = (const glf::fs2::Path::Self *)(*(int (**)(uint32_t))(**(uint32_t **)&v46[1] + 32))(*(uint32_t *)&v46[1]);
        sub_C9DDD0(v53, v25, v24, v34);
        glf::fs2::Dir::MoveNext(*(glf::fs2::Dir::Self **)&v46[1]);
        v16 = *(uint32_t *)&v46[1];
        if ( *(uint32_t *)&v46[1] == 0 )
          goto LABEL_26;
      }
      if ( *(uint32_t *)&v46[1] != 0 )
        glf::intrusive_ptr_release(*(glf::Self **)&v46[1], v32);
    }
LABEL_26:
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v52);
  }
  glf::fs2::SortChildren(v43);
  glf::fs2::FileSystem::Recurse(
    (glf::fs2::FileSystem::Self *)v45,
    (glf::fs2::IndexData::Self *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_FF4)->st_size + 3),
    (int)(uintptr_t)(v43),
    (const glf::fs2::PathInfo::Self *)v40,
    1);
  glf::fs2::FileSystem::Recurse(
    (glf::fs2::FileSystem::Self *)v45,
    (glf::fs2::IndexData::Self *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_FF4)->st_size + 3),
    (int)(uintptr_t)(v43),
    (const glf::fs2::PathInfo::Self *)v40,
    0);
  glf::fs2::IndexData::Lock((glf::fs2::IndexData::Self *)v45, 4095, true);
  for ( j = v64; j != &v62; j = (int *)sub_1904890(j) )
  {
    v19 = j[6];
    if ( v19 != 0 )
    {
      if ( *(uint32_t *)(v19 + 12) != 0 )
        opDelete(*(void **)(v19 + 12));
      v20 = *(uint32_t *)(v19 + 8);
      if ( (uint32_t *)(v20 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v20 - 12));
      }
      glf::MemObject::opDelete((glf::Self *)v19);
    }
  }
  *v41 = v45;
  if ( v45 != nullptr )
    __sync_add_and_fetch(v45 + 1, 1u);
  v21 = v55;
  v22 = v54;
  if ( v55 != v54 )
  {
    do
    {
      v31 = v22;
      v22 = (glf::fs2::Path::Self *)((char *)v22 + 8);
      glf::fs2::Path::Destroy(v31);
    }
    while ( v21 != v22 );
    v22 = v54;
  }
  if ( v22 != nullptr )
    opDelete(v22);
  sub_C97100(v17, v63);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v49);
  return v41;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::CreateIndex  (binary VA: 0xc9e950)
// Original: glf::fs2::FileSystem::CreateIndex
// ----------------------------------------------------------------------------
glf::fs2::FileSystem::Self * glf::fs2::FileSystem::CreateIndex(glf::fs2::FileSystem::Self *self, const std::list<glf::fs2::MountPoint::Self, glf::allocator<glf::fs2::MountPoint::Self>> *a2, uint32_t *a3, glf::fs2::IndexData::Self *a4)
{
  int *v4;
  int *v5;
  char v6;
  int *v7;
  uint32_t *v8;
  int v9;
  unsigned int v10;
  size_t v11;
  int v12;
  glf::fs2::Path::Self *v13;
  glf::fs2::Path::Self *v14;
  uint32_t *v15;
  glf::fs2::Path::Self *v16;
  glf::fs2::Path::Self *v17;
  glf::Self *v18;
  uint32_t *v19;
  int v20;
  int v21;
  int *i;
  int v23;
  int v24;
  glf::fs2::Path::Self *v25;
  glf::fs2::Path::Self *v26;
  glf::fs2::Path::Self *v28;
  const glf::fs2::Path::Self *v29;
  int v30;
  glf::Self *v31;
  int v32;
  int v33;
  int v34;
  char v35;
  typedef glf::fs2::Path::Self *_g4_t_v36;
  typedef glf::fs2::Path::Self *_g4_t_v37;
  typedef const glf::RefCounted::Self *_g4_t_v38;
  typedef const glf::RefCounted::Self *_g4_t_v39;
  typedef const glf::RefCounted::Self *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef char *_g4_t_v43;
  typedef char _g4_t_v44;
  typedef int _g4_t_v45;
  typedef glf::fs2::FileSystem::Self *_g4_t_v46;
  typedef glf::fs2::IndexData::Self *_g4_t_v47;
  typedef char *_g4_t_v48;
  typedef void *_g4_t_v49;
  typedef volatile int32_t *_g4_t_v50;
  typedef glf::RefCounted::Self *_g4_t_v51;
  typedef glf::fs2::Self *_g4_t_v52;
  typedef uint32_t *_g4_t_v53;
  typedef uint16_t _g4_t_v54[9];
  typedef glf::Self *_g4_t_v55;
  typedef glf::Self *_g4_t_v56;
  typedef unsigned int _g4_t_v57[2];
  typedef char _g4_t_v58[4];
  typedef int _g4_t_v59;
  typedef uint8_t _g4_t_v60[8];
  typedef uint8_t _g4_t_v61[8];
  typedef uint32_t _g4_t_v62[2];
  typedef void *_g4_t_v63;
  typedef glf::fs2::Path::Self *_g4_t_v64;
  typedef glf::fs2::Path::Self *_g4_t_v65;
  typedef uint8_t _g4_t_v66[8];
  typedef glf::fs2::Self *_g4_t_v67;
  typedef uint8_t _g4_t_v68[8];
  typedef glf::fs2::Self *_g4_t_v69;
  typedef char _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int *_g4_t_v72;
  typedef int *_g4_t_v73;
  typedef int *_g4_t_v74;
  typedef int _g4_t_v75;
  typedef glf::fs2::FileSystem::Self **_g4_t_v76;
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (12u + sizeof(_g4_t_v36)) > _g4_s0 ? (12u + sizeof(_g4_t_v36)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v37)) > _g4_s1 ? (12u + sizeof(_g4_t_v37)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v38)) > _g4_s2 ? (16u + sizeof(_g4_t_v38)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v39)) > _g4_s3 ? (16u + sizeof(_g4_t_v39)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v40)) > _g4_s4 ? (16u + sizeof(_g4_t_v40)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v41)) > _g4_s5 ? (48u + sizeof(_g4_t_v41)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v42)) > _g4_s6 ? (48u + sizeof(_g4_t_v42)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v43)) > _g4_s7 ? (52u + sizeof(_g4_t_v43)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v44)) > _g4_s8 ? (52u + sizeof(_g4_t_v44)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v45)) > _g4_s9 ? (56u + sizeof(_g4_t_v45)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v46)) > _g4_s10 ? (60u + sizeof(_g4_t_v46)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v47)) > _g4_s11 ? (64u + sizeof(_g4_t_v47)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v48)) > _g4_s12 ? (68u + sizeof(_g4_t_v48)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v49)) > _g4_s13 ? (68u + sizeof(_g4_t_v49)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v50)) > _g4_s14 ? (72u + sizeof(_g4_t_v50)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v51)) > _g4_s15 ? (76u + sizeof(_g4_t_v51)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v52)) > _g4_s16 ? (80u + sizeof(_g4_t_v52)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v53)) > _g4_s17 ? (84u + sizeof(_g4_t_v53)) : _g4_s17,
    _g4_s19 = (106u + sizeof(_g4_t_v54)) > _g4_s18 ? (106u + sizeof(_g4_t_v54)) : _g4_s18,
    _g4_s20 = (124u + sizeof(_g4_t_v55)) > _g4_s19 ? (124u + sizeof(_g4_t_v55)) : _g4_s19,
    _g4_s21 = (128u + sizeof(_g4_t_v56)) > _g4_s20 ? (128u + sizeof(_g4_t_v56)) : _g4_s20,
    _g4_s22 = (132u + sizeof(_g4_t_v57)) > _g4_s21 ? (132u + sizeof(_g4_t_v57)) : _g4_s21,
    _g4_s23 = (140u + sizeof(_g4_t_v58)) > _g4_s22 ? (140u + sizeof(_g4_t_v58)) : _g4_s22,
    _g4_s24 = (144u + sizeof(_g4_t_v59)) > _g4_s23 ? (144u + sizeof(_g4_t_v59)) : _g4_s23,
    _g4_s25 = (148u + sizeof(_g4_t_v60)) > _g4_s24 ? (148u + sizeof(_g4_t_v60)) : _g4_s24,
    _g4_s26 = (156u + sizeof(_g4_t_v61)) > _g4_s25 ? (156u + sizeof(_g4_t_v61)) : _g4_s25,
    _g4_s27 = (164u + sizeof(_g4_t_v62)) > _g4_s26 ? (164u + sizeof(_g4_t_v62)) : _g4_s26,
    _g4_s28 = (172u + sizeof(_g4_t_v63)) > _g4_s27 ? (172u + sizeof(_g4_t_v63)) : _g4_s27,
    _g4_s29 = (176u + sizeof(_g4_t_v64)) > _g4_s28 ? (176u + sizeof(_g4_t_v64)) : _g4_s28,
    _g4_s30 = (180u + sizeof(_g4_t_v65)) > _g4_s29 ? (180u + sizeof(_g4_t_v65)) : _g4_s29,
    _g4_s31 = (196u + sizeof(_g4_t_v66)) > _g4_s30 ? (196u + sizeof(_g4_t_v66)) : _g4_s30,
    _g4_s32 = (204u + sizeof(_g4_t_v67)) > _g4_s31 ? (204u + sizeof(_g4_t_v67)) : _g4_s31,
    _g4_s33 = (208u + sizeof(_g4_t_v68)) > _g4_s32 ? (208u + sizeof(_g4_t_v68)) : _g4_s32,
    _g4_s34 = (216u + sizeof(_g4_t_v69)) > _g4_s33 ? (216u + sizeof(_g4_t_v69)) : _g4_s33,
    _g4_s35 = (220u + sizeof(_g4_t_v70)) > _g4_s34 ? (220u + sizeof(_g4_t_v70)) : _g4_s34,
    _g4_s36 = (224u + sizeof(_g4_t_v71)) > _g4_s35 ? (224u + sizeof(_g4_t_v71)) : _g4_s35,
    _g4_s37 = (228u + sizeof(_g4_t_v72)) > _g4_s36 ? (228u + sizeof(_g4_t_v72)) : _g4_s36,
    _g4_s38 = (232u + sizeof(_g4_t_v73)) > _g4_s37 ? (232u + sizeof(_g4_t_v73)) : _g4_s37,
    _g4_s39 = (236u + sizeof(_g4_t_v74)) > _g4_s38 ? (236u + sizeof(_g4_t_v74)) : _g4_s38,
    _g4_s40 = (240u + sizeof(_g4_t_v75)) > _g4_s39 ? (240u + sizeof(_g4_t_v75)) : _g4_s39,
    _g4_s41 = (260u + sizeof(_g4_t_v76)) > _g4_s40 ? (260u + sizeof(_g4_t_v76)) : _g4_s40
  };
  alignas(16) uint8_t _g4_sf[_g4_s41];
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 12u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 16u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 16u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 16u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 48u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 48u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 52u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 52u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 56u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 60u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 64u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 68u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 68u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 72u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 76u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 80u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 84u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 106u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 124u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 128u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 132u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 140u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 144u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 148u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 156u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 164u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 172u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 176u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 180u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 196u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 204u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 208u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 216u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 220u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 224u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 228u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 232u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 236u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 240u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 260u);

  v76 = &self;
  v46 = self;
  v47 = a4;
  v51 = (glf::RefCounted::Self *)(a2);
  v53 = a3;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v57), (char *)&unk_1B15112, (int)(uintptr_t)(v54));
  v57[1] = 0;
  glf::fs2::Path::Init((glf::fs2::Path::Self *)v57);
  glf::fs2::FileSystem::Get((glf::fs2::FileSystem::Self *)&v56);
  v50 = (volatile int32_t *)glf::MemObject::opNew(0x190u);
  glf::fs2::IndexData::Construct((glf::fs2::FileSystem::Self *)v50, (int)(uintptr_t)(v57), (int)(uintptr_t)(v47), (int)(uintptr_t)(&v56));
  if ( v56 != nullptr )
    glf::intrusive_ptr_release(v56, v38);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v57);
  v71 = 0;
  v73 = &v71;
  v74 = &v71;
  v72 = nullptr;
  v75 = 0;
  v52 = (glf::fs2::Self *)glf::MemObject::opNew(0x28u);
  *((uint32_t *)v52 + 2) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)v52 + 3) = 0;
  *((uint32_t *)v52 + 4) = 0;
  *((uint32_t *)v52 + 5) = 0;
  *(uint32_t *)v52 = 3;
  g4_std_compat::string_assign((int)(uintptr_t)(v52) + 8, &unk_1B15112, 0);
  *((uint32_t *)v52 + 6) = (uint32_t)(uintptr_t)(v51);
  *((uint32_t *)v52 + 1) = 0;
  *((uint32_t *)v52 + 7) = (uint32_t)(uintptr_t)((char *)v51 + 176);
  g4_std::string::construct_copy(v58, (char *)v52 + 8);
  v59 = 0;
  glf::fs2::Path::Init((glf::fs2::Path::Self *)v58);
  glf::fs2::Path::Construct((glf::fs2::Path::Self *)v66, (const glf::fs2::Path::Self *)v58);
  v67 = v52;
  glf::fs2::Path::Construct((glf::fs2::Path::Self *)v68, (const glf::fs2::Path::Self *)v66);
  v4 = v72;
  v69 = v67;
  if ( v72 == nullptr )
  {
    v4 = &v71;
    goto LABEL_10;
  }
  while ( (int)glf::fs2::Path::Compare((glf::fs2::Path::Self *)v68, (const glf::fs2::Path::Self *)(v4 + 4)) < 0 )
  {
    v5 = (int *)v4[2];
    v6 = 1;
    if ( v5 == nullptr )
      goto LABEL_9;
LABEL_6:
    v4 = v5;
  }
  v5 = (int *)v4[3];
  v6 = 0;
  if ( v5 != nullptr )
    goto LABEL_6;
LABEL_9:
  if ( v6 == 0 )
  {
    v7 = v4;
    goto LABEL_12;
  }
LABEL_10:
  if ( v73 == v4 )
  {
    LOBYTE(v33) = 1;
    if ( v4 != &v71 )
      v33 = glf::fs2::Path::Compare((glf::fs2::Path::Self *)v68, (const glf::fs2::Path::Self *)(v4 + 4)) >> 31;
    v44 = v33;
    v34 = opNew(0x1Cu);
    v35 = v44;
    if ( v34 != -16 )
    {
      v42 = v34;
      glf::fs2::Path::Construct((glf::fs2::Path::Self *)(v34 + 16), (const glf::fs2::Path::Self *)v68);
      v34 = v42;
      *(uint32_t *)(v42 + 24) = (uint32_t)(uintptr_t)(v69);
      v35 = v44;
    }
    sub_1904970(v35, v34, v4, &v71);
    ++v75;
  }
  else
  {
    v7 = (int *)sub_19048F0(v4);
LABEL_12:
    if ( (int)glf::fs2::Path::Compare((glf::fs2::Path::Self *)(v7 + 4), (const glf::fs2::Path::Self *)v68) < 0 )
    {
      LOBYTE(v49) = 1;
      if ( v4 != &v71 )
        v49 = (void *)(glf::fs2::Path::Compare((glf::fs2::Path::Self *)v68, (const glf::fs2::Path::Self *)(v4 + 4)) >> 31);
      v32 = opNew(0x1Cu);
      if ( v32 != -16 )
      {
        v41 = v32;
        glf::fs2::Path::Construct((glf::fs2::Path::Self *)(v32 + 16), (const glf::fs2::Path::Self *)v68);
        v32 = v41;
        *(uint32_t *)(v41 + 24) = (uint32_t)(uintptr_t)(v69);
      }
      sub_1904970((char)(uintptr_t)(v49), v32, v4, &v71);
      ++v75;
    }
  }
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v68);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v66);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v58);
  v63 = nullptr;
  v64 = nullptr;
  v65 = nullptr;
  v8 = (uint32_t *)*v53;
  if ( v53 == (uint32_t *)*v53 )
  {
    v45 = 8;
    v11 = 8;
  }
  else
  {
    v9 = 0;
    do
    {
      v8 = (uint32_t *)*v8;
      ++v9;
    }
    while ( v53 != v8 );
    v10 = v9 + 1;
    if ( v10 > 0x1FFFFFFF )
      sub_1900180("vector::reserve");
    v11 = 8 * v10;
    v45 = v11;
  }
  v12 = opNew(v11);
  v13 = v64;
  v14 = (glf::fs2::Path::Self *)v63;
  v48 = (char *)v12;
  if ( v64 != v63 )
  {
    do
    {
      v36 = v14;
      v14 = (glf::fs2::Path::Self *)((char *)v14 + 8);
      glf::fs2::Path::Destroy(v36);
    }
    while ( v13 != v14 );
    v14 = (glf::fs2::Path::Self *)v63;
  }
  if ( v14 != nullptr )
    opDelete(v14);
  v63 = v48;
  v64 = (glf::fs2::Path::Self *)v48;
  v65 = (glf::fs2::Path::Self *)&v48[v45];
  v15 = (uint32_t *)*v53;
  if ( (uint32_t *)*v53 != v53 )
  {
    do
    {
      while ( !glf::fs2::MountPoint::IsValid((glf::fs2::MountPoint::Self *)(v15 + 2)) )
      {
        v15 = (uint32_t *)*v15;
        if ( v53 == v15 )
          goto LABEL_41;
      }
      glf::fs2::FileSystem::FixPath((glf::fs2::FileSystem::Self *)v60, (const glf::fs2::Path::Self *)(v51), (glf::fs2::Path::Self *)(v15 + 2));
      glf::fs2::Path::Construct((glf::fs2::Path::Self *)v61);
      glf::fs2::FileSystem::ResolveMount(
        (glf::fs2::FileSystem::Self *)&v54[1],
        (pthread_mutex_t **)v51,
        (glf::fs2::Path::Self *)v60,
        (glf::fs2::Path::Self *)v61);
      if ( *(uint32_t *)&v54[1] == 0 )
      {
        v30 = v15[4];
        if ( v30 != 0 )
        {
          __sync_add_and_fetch((volatile int32_t *)(v30 + 4), 1u);
          v31 = *(glf::Self **)&v54[1];
          *(uint32_t *)&v54[1] = v30;
          if ( v31 != nullptr )
            glf::intrusive_ptr_release(v31, v39);
        }
        glf::fs2::Path::opAssign((glf::fs2::Path::Self *)v61, (const glf::fs2::Path::Self *)v60);
      }
      if ( v64 == v65 )
      {
        sub_C96EE0((glf::fs2::Path::Self *)&v63, v64, (glf::fs2::Path::Self *)v61);
        v17 = v64;
      }
      else
      {
        v16 = nullptr;
        if ( v64 != nullptr )
        {
          glf::fs2::Path::Construct(v64, (const glf::fs2::Path::Self *)v61);
          v16 = v64;
        }
        v17 = (glf::fs2::Path::Self *)((char *)v16 + 8);
        v64 = v17;
      }
      v62[0] = (uint32_t)(uintptr_t)(&v70);
      v62[1] = (uint32_t)(uintptr_t)((char *)v17 - 8);
      glf::fs2::FileSystem::OpenDir(&v55, *(pthread_mutex_t ***)&v54[1], (glf::fs2::Path::Self *)v61, 23, 0);
      v18 = v55;
      if ( v55 != nullptr )
      {
        while ( G4_VCALL<uint8_t>(v18, 24) != 0 )
        {
          v43 = (char *)G4_VCALL<int>(v55, 20);
          v28 = (glf::fs2::Path::Self *)G4_VCALL<int>(v55, 28);
          v29 = (const glf::fs2::Path::Self *)G4_VCALL<int>(v55, 32);
          sub_C9DDD0(v62, v29, v28, v43);
          glf::fs2::Dir::MoveNext(v55);
          v18 = v55;
          if ( v55 == nullptr )
            goto LABEL_36;
        }
        if ( v55 != nullptr )
          glf::intrusive_ptr_release(v55, v40);
      }
LABEL_36:
      v19 = *(uint32_t **)&v54[1];
      if ( *(uint32_t *)&v54[1] != 0 )
      {
        if ( __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v54[1] + 4), 0xFFFFFFFF) == 1 )
        {
          G4_VCALL<void>(v19, 8);
          G4_VCALL<void>(v19, 16);
        }
        else
        {
          v20 = v19[1];
          _mm_mfence();
          if ( v20 == 1 )
            G4_VCALL<void>(v19, 12);
        }
      }
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v61);
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v60);
      v15 = (uint32_t *)*v15;
    }
    while ( v53 != v15 );
  }
LABEL_41:
  glf::fs2::SortChildren(v52);
  glf::fs2::FileSystem::Recurse((glf::fs2::FileSystem::Self *)v50, v47, (int)(uintptr_t)(v52), nullptr, 1);
  glf::fs2::FileSystem::Recurse((glf::fs2::FileSystem::Self *)v50, v47, (int)(uintptr_t)(v52), nullptr, 0);
  glf::fs2::IndexData::Lock((glf::fs2::IndexData::Self *)v50, (int)(uintptr_t)(v47), true);
  for ( i = v73; i != &v71; i = (int *)sub_1904890(i) )
  {
    v23 = i[6];
    if ( v23 != 0 )
    {
      if ( *(uint32_t *)(v23 + 12) != 0 )
        opDelete(*(void **)(v23 + 12));
      v24 = *(uint32_t *)(v23 + 8);
      if ( (uint32_t *)(v24 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v24 - 12));
      }
      glf::MemObject::opDelete((glf::Self *)v23);
    }
  }
  *(uint32_t *)v46 = (uint32_t)(uintptr_t)(v50);
  if ( v50 != nullptr )
    __sync_add_and_fetch(v50 + 1, 1u);
  v25 = v64;
  v26 = (glf::fs2::Path::Self *)v63;
  if ( v64 != v63 )
  {
    do
    {
      v37 = v26;
      v26 = (glf::fs2::Path::Self *)((char *)v26 + 8);
      glf::fs2::Path::Destroy(v37);
    }
    while ( v25 != v26 );
    v26 = (glf::fs2::Path::Self *)v63;
  }
  if ( v26 != nullptr )
    opDelete(v26);
  sub_C97100(v21, v72);
  return v46;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::Construct  (binary VA: 0xc9f170)
// Original: glf::fs2::FileSystem::FileSystem
// ----------------------------------------------------------------------------
glf::fs2::FileSystem::Self * glf::fs2::FileSystem::Construct(glf::fs2::FileSystem::Self *self, const glf::fs2::Path::Self *a2)
{
  glf::fs2::FileSystem::Self *result;
  int v3;
  int v4[4];

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206DCA8);
  *((uint32_t *)self + 1) = 0;
  glf::fs2::Metrics::Construct((glf::fs2::Metrics::Self *)((glf::fs2::FileSystem::Self *)((char *)self + 8)));
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  glf::Mutex::Construct((pthread_mutex_t **)self + 18, 1);
  glf::TlsNode::Construct(
    (glf::fs2::FileSystem::Self *)((char *)self + 76),
    (void (*)(void *))glf::Type_glf_Error_7e835b::Construct,
    (void (*)(void *))glf::Type_glf_Error_7e835b::Destruct,
    0xCu);
  *((uint32_t *)self + 28) = (uint32_t)(uintptr_t)((char *)self + 112);
  *((uint32_t *)self + 29) = (uint32_t)(uintptr_t)((char *)self + 112);
  glf::Mutex::Construct((pthread_mutex_t **)self + 30, 1);
  glf::TlsNode::Construct(
    (glf::fs2::FileSystem::Self *)((char *)self + 124),
    (void (*)(void *))glf::Type_list_glf_fs2_MountPoint_6be4e3::Construct,
    (void (*)(void *))glf::Type_list_glf_fs2_MountPoint_6be4e3::Destruct,
    8u);
  *((uint32_t *)self + 40) = 0;
  *((uint32_t *)self + 41) = 0;
  *((uint32_t *)self + 42) = 0;
  glf::Mutex::Construct((pthread_mutex_t **)self + 43, 1);
  glf::fs2::Path::Construct((glf::fs2::FileSystem::Self *)((char *)self + 176), a2);
  result = (glf::fs2::FileSystem::Self *)&glf::fs2::gAllFileSystems;
  *((uint32_t *)self + 46) = 0;
  *((uint8_t *)self + 188) = 0;
  v4[0] = (int)(uintptr_t)(self);
  if ( (*(uint8_t **)unk_20DF444) == (*(uint8_t **)unk_20DF448) )
    return (glf::fs2::FileSystem::Self *)g4_std_compat::vector_insert_aux(
                                     (int)(uintptr_t)(&glf::fs2::gAllFileSystems),
                                     (*(uint8_t **)unk_20DF444),
                                     (int)(uintptr_t)(v4));
  v3 = 0;
  if ( (*(uint8_t **)unk_20DF444) != 0 )
  {
    **(uint32_t **)unk_20DF444 = (uint32_t)(uintptr_t)(self);
    v3 = (int)(uintptr_t)((*(uint8_t **)unk_20DF444));
  }
  *(uintptr_t *)(unk_20DF444) = (uintptr_t)(v3 + 4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::Construct  (binary VA: 0xc9f2e0)
// Original: glf::fs2::FileSystem::FileSystem
// ----------------------------------------------------------------------------
glf::fs2::FileSystem::Self * glf::fs2::FileSystem::Construct(glf::fs2::FileSystem::Self *self)
{
  glf::fs2::FileSystem::Self *result;
  char *v2;
  int v3[4];

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206DCA8);
  *((uint32_t *)self + 1) = 0;
  glf::fs2::Metrics::Construct((glf::fs2::Metrics::Self *)((glf::fs2::FileSystem::Self *)((char *)self + 8)));
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  glf::Mutex::Construct((pthread_mutex_t **)self + 18, 1);
  glf::TlsNode::Construct(
    (glf::fs2::FileSystem::Self *)((char *)self + 76),
    (void (*)(void *))glf::Type_glf_Error_7e835b::Construct,
    (void (*)(void *))glf::Type_glf_Error_7e835b::Destruct,
    0xCu);
  *((uint32_t *)self + 28) = (uint32_t)(uintptr_t)((char *)self + 112);
  *((uint32_t *)self + 29) = (uint32_t)(uintptr_t)((char *)self + 112);
  glf::Mutex::Construct((pthread_mutex_t **)self + 30, 1);
  glf::TlsNode::Construct(
    (glf::fs2::FileSystem::Self *)((char *)self + 124),
    (void (*)(void *))glf::Type_list_glf_fs2_MountPoint_6be4e3::Construct,
    (void (*)(void *))glf::Type_list_glf_fs2_MountPoint_6be4e3::Destruct,
    8u);
  *((uint32_t *)self + 40) = 0;
  *((uint32_t *)self + 41) = 0;
  *((uint32_t *)self + 42) = 0;
  glf::Mutex::Construct((pthread_mutex_t **)self + 43, 1);
  glf::fs2::Path::Construct((glf::fs2::FileSystem::Self *)((char *)self + 176));
  result = (glf::fs2::FileSystem::Self *)&glf::fs2::gAllFileSystems;
  *((uint32_t *)self + 46) = 0;
  *((uint8_t *)self + 188) = 0;
  v3[0] = (int)(uintptr_t)(self);
  if ( (void *)(uintptr_t)(dword_20DF444) == (*(void **)unk_20DF448) )
    return (glf::fs2::FileSystem::Self *)g4_std_compat::vector_insert_aux(
                                     (int)(uintptr_t)(&glf::fs2::gAllFileSystems),
                                     dword_20DF444,
                                     (int)(uintptr_t)(v3));
  v2 = nullptr;
  if ( dword_20DF444 != 0 )
  {
    *(uint32_t *)dword_20DF444 = (uint32_t)(uintptr_t)(self);
    v2 = (char *)dword_20DF444;
  }
  dword_20DF444 = (uint32_t)(uintptr_t)(v2 + 4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::TokenizeAbsolutePath  (binary VA: 0xc9f440)
// Original: glf::fs2::TokenizeAbsolutePath
// ----------------------------------------------------------------------------
int glf::fs2::TokenizeAbsolutePath(glf::fs2::Self *self, const glf::fs2::Path::Self *a2)
{
  int result;
  size_t v3;
  int v4;
  void **p_s1;
  typedef void *_g4_t_v6;
  typedef const glf::fs2::Path::Self *_g4_t_v7;
  typedef uint32_t _g4_t_v8[2];
  typedef void *_g4_t_s1;
  typedef size_t _g4_t_n;
  typedef uint32_t _g4_t_v11[10];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v8)) > _g4_s2 ? (16u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_s1)) > _g4_s3 ? (24u + sizeof(_g4_t_s1)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_n)) > _g4_s4 ? (28u + sizeof(_g4_t_n)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v11)) > _g4_s5 ? (32u + sizeof(_g4_t_v11)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 24u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);

  v11[6] = (uint32_t)(uintptr_t)(&self);
  v7 = a2;
  glf::fs2::Path::begin((glf::fs2::Path::Self *)v8);
  while ( 1 )
  {
    glf::fs2::Path::end((glf::fs2::Path::Self *)v11);
    result = v11[0];
    if ( v8[0] == v11[0] && v8[1] == v11[1] )
      break;
    v3 = n;
    v6 = s1;
    if ( memcmp(s1, ".", n != 0) != 0 || v3 != 1 )
    {
      v4 = *((uint32_t *)v7 + 1);
      if ( v4 == *((uint32_t *)v7 + 2) )
      {
        g4_std_compat::vector_insert_aux(
          v7,
          *((uint32_t *)v7 + 1),
          &s1);
      }
      else
      {
        p_s1 = nullptr;
        if ( v4 != 0 )
        {
          p_s1 = &s1;
          if ( (void **)v4 != &s1 )
          {
            *(uint32_t *)(v4 + 4) = v3;
            *(uint32_t *)v4 = (uint32_t)(uintptr_t)(v6);
            p_s1 = *((void ***)v7 + 1);
          }
        }
        *((uint32_t *)v7 + 1) = (uint32_t)(uintptr_t)(p_s1 + 2);
      }
    }
    glf::fs2::Path::iterator::increment((glf::fs2::Path::iterator::Self *)v8);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::ResolveTokens  (binary VA: 0xc9f550)
// Original: glf::fs2::ResolveTokens
// ----------------------------------------------------------------------------
uint32_t * glf::fs2::ResolveTokens(glf::fs2::Self *self, const std::vector<glf::LimitString, glf::EphemeralAllocator<glf::LimitString>> *a2, unsigned int a3)
{
  int v3;
  uint32_t *result;
  int v5;
  void **v6;
  size_t n;
  unsigned int v8;
  void **v9;
  void *s1;
  int v11;

  v3 = a3;
  result = *(uint32_t **)self;
  if ( (*((uint32_t *)self + 1) - *(uint32_t *)self) >> 3 <= a3 )
    v3 = (*((uint32_t *)self + 1) - *(uint32_t *)self) >> 3;
  v11 = v3;
  if ( v3 != 0 )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = (void **)&result[2 * v5];
      n = 2;
      v8 = (unsigned int)(uintptr_t)(v6[1]);
      s1 = *v6;
      if ( v8 <= 2 )
        n = (size_t)v6[1];
      result = (uint32_t *)memcmp(s1, "..", n);
      if ( result == nullptr && v8 == 2 )
        break;
      result = (uint32_t *)memcmp(s1, ".", v8 != 0);
      if ( result == nullptr && v8 == 1 )
        goto LABEL_7;
      v9 = *((void ***)a2 + 1);
      if ( v9 == *((void ***)a2 + 2) )
      {
        result = (uint32_t *)g4_std_compat::vector_insert_aux(
                             a2,
                             v9,
                             v6);
LABEL_7:
        if ( ++v5 == v11 )
          return result;
        goto LABEL_8;
      }
      if ( v9 != nullptr && v6 != v9 )
      {
        v9[1] = (void *)v8;
        *v9 = s1;
        v9 = *((void ***)a2 + 1);
      }
      result = (uint32_t *)(v9 + 2);
      ++v5;
      *((uint32_t *)a2 + 1) = (uint32_t)(uintptr_t)(result);
      if ( v5 == v11 )
        return result;
LABEL_8:
      result = *(uint32_t **)self;
    }
    *((uint32_t *)a2 + 1) -= 8;
    goto LABEL_7;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::ResolveMount2  (binary VA: 0xc9f690)
// Original: glf::fs2::FileSystem::ResolveMount2
// ----------------------------------------------------------------------------
glf::fs2::FileSystem::Self * glf::fs2::FileSystem::ResolveMount2(glf::fs2::FileSystem::Self *self, const glf::fs2::Path::Self *a2, const glf::fs2::IndexData::Self *a3, glf::fs2::Path::Self *a4, glf::fs2::Path::Self *a5)
{
  glf::Self *v5;
  int v6;
  size_t v7;
  unsigned int *v8;
  unsigned int v9;
  int16_t SubFolderIdx;
  const char *v12;
  size_t v13;
  unsigned int v14;
  unsigned int v15;
  glf::Self *v16;
  int v17;
  const glf::fs2::Path::Self *v18;
  unsigned int v19;
  const glf::fs2::Path::Self *v20;
  void *v21;
  glf::Self *v22;
  bool v23;
  typedef const glf::RefCounted::Self *_g4_t_v24;
  typedef glf::fs2::Path::Self *_g4_t_v25;
  typedef void *_g4_t_s1;
  typedef void *_g4_t_s1a;
  typedef glf::fs2::Path::Self *_g4_t_v28;
  typedef glf::RefCounted::Self *_g4_t_v29;
  typedef glf::fs2::FileSystem::Self *_g4_t_v30;
  typedef glf::Self *_g4_t_v31;
  typedef glf::fs2::Path::Self *_g4_t_v32;
  typedef int16_t _g4_t_ParentIdx;
  typedef unsigned int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef uint32_t *_g4_t_v36;
  typedef const glf::fs2::Path::Self **_g4_t_v37;
  typedef glf::Self *_g4_t_v38;
  typedef unsigned int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef glf::Self *_g4_t_v41;
  typedef uint8_t _g4_t_v42[8];
  typedef uint8_t _g4_t_v43[8];
  typedef uint8_t _g4_t_v44[8];
  typedef uint8_t _g4_t_v45[4];
  typedef int _g4_t_v46;
  typedef uint8_t _g4_t_v47[8];
  typedef uint8_t _g4_t_v48[8];
  typedef uint8_t _g4_t_v49[8];
  typedef uint8_t _g4_t_v50[8];
  typedef uint8_t _g4_t_v51[8];
  typedef uint8_t _g4_t_v52[8];
  typedef glf::Self *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef glf::Self *_g4_t_v56[9];
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (8u + sizeof(_g4_t_v24)) > _g4_s0 ? (8u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (48u + sizeof(_g4_t_v25)) > _g4_s1 ? (48u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (52u + sizeof(_g4_t_s1)) > _g4_s2 ? (52u + sizeof(_g4_t_s1)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_s1a)) > _g4_s3 ? (52u + sizeof(_g4_t_s1a)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v28)) > _g4_s4 ? (56u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v29)) > _g4_s5 ? (60u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v30)) > _g4_s6 ? (64u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v31)) > _g4_s7 ? (68u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v32)) > _g4_s8 ? (76u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (84u + sizeof(_g4_t_ParentIdx)) > _g4_s9 ? (84u + sizeof(_g4_t_ParentIdx)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v34)) > _g4_s10 ? (84u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (88u + sizeof(_g4_t_v35)) > _g4_s11 ? (88u + sizeof(_g4_t_v35)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v36)) > _g4_s12 ? (88u + sizeof(_g4_t_v36)) : _g4_s12,
    _g4_s14 = (92u + sizeof(_g4_t_v37)) > _g4_s13 ? (92u + sizeof(_g4_t_v37)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v38)) > _g4_s14 ? (96u + sizeof(_g4_t_v38)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v39)) > _g4_s15 ? (96u + sizeof(_g4_t_v39)) : _g4_s15,
    _g4_s17 = (108u + sizeof(_g4_t_v40)) > _g4_s16 ? (108u + sizeof(_g4_t_v40)) : _g4_s16,
    _g4_s18 = (112u + sizeof(_g4_t_v41)) > _g4_s17 ? (112u + sizeof(_g4_t_v41)) : _g4_s17,
    _g4_s19 = (116u + sizeof(_g4_t_v42)) > _g4_s18 ? (116u + sizeof(_g4_t_v42)) : _g4_s18,
    _g4_s20 = (124u + sizeof(_g4_t_v43)) > _g4_s19 ? (124u + sizeof(_g4_t_v43)) : _g4_s19,
    _g4_s21 = (132u + sizeof(_g4_t_v44)) > _g4_s20 ? (132u + sizeof(_g4_t_v44)) : _g4_s20,
    _g4_s22 = (140u + sizeof(_g4_t_v45)) > _g4_s21 ? (140u + sizeof(_g4_t_v45)) : _g4_s21,
    _g4_s23 = (144u + sizeof(_g4_t_v46)) > _g4_s22 ? (144u + sizeof(_g4_t_v46)) : _g4_s22,
    _g4_s24 = (148u + sizeof(_g4_t_v47)) > _g4_s23 ? (148u + sizeof(_g4_t_v47)) : _g4_s23,
    _g4_s25 = (156u + sizeof(_g4_t_v48)) > _g4_s24 ? (156u + sizeof(_g4_t_v48)) : _g4_s24,
    _g4_s26 = (164u + sizeof(_g4_t_v49)) > _g4_s25 ? (164u + sizeof(_g4_t_v49)) : _g4_s25,
    _g4_s27 = (172u + sizeof(_g4_t_v50)) > _g4_s26 ? (172u + sizeof(_g4_t_v50)) : _g4_s26,
    _g4_s28 = (180u + sizeof(_g4_t_v51)) > _g4_s27 ? (180u + sizeof(_g4_t_v51)) : _g4_s27,
    _g4_s29 = (188u + sizeof(_g4_t_v52)) > _g4_s28 ? (188u + sizeof(_g4_t_v52)) : _g4_s28,
    _g4_s30 = (196u + sizeof(_g4_t_v53)) > _g4_s29 ? (196u + sizeof(_g4_t_v53)) : _g4_s29,
    _g4_s31 = (200u + sizeof(_g4_t_v54)) > _g4_s30 ? (200u + sizeof(_g4_t_v54)) : _g4_s30,
    _g4_s32 = (204u + sizeof(_g4_t_v55)) > _g4_s31 ? (204u + sizeof(_g4_t_v55)) : _g4_s31,
    _g4_s33 = (216u + sizeof(_g4_t_v56)) > _g4_s32 ? (216u + sizeof(_g4_t_v56)) : _g4_s32
  };
  alignas(16) uint8_t _g4_sf[_g4_s33];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 52u);
  _g4_t_s1a &s1a = *reinterpret_cast<_g4_t_s1a *>(_g4_sf + 52u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 56u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 60u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 64u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 68u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 76u);
  _g4_t_ParentIdx &ParentIdx = *reinterpret_cast<_g4_t_ParentIdx *>(_g4_sf + 84u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 84u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 88u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 88u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 92u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 96u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 96u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 108u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 112u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 116u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 124u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 132u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 140u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 144u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 148u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 156u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 164u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 172u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 180u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 188u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 196u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 200u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 204u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 216u);

  v56[5] = (glf::Self *)&self;
  v31 = (glf::Self *)(a2);
  v30 = self;
  v28 = a5;
  v29 = (glf::RefCounted::Self *)(a3);
  v32 = a4;
  v53 = nullptr;
  v54 = 0;
  v55 = 0;
  glf::fs2::TokenizeAbsolutePath((glf::fs2::Self *)(a3), (const glf::fs2::Path::Self *)&v53);
  if ( v31 != nullptr )
    __sync_add_and_fetch((volatile int32_t *)v31 + 1, 1u);
  glf::fs2::Path::Construct((glf::fs2::Path::Self *)v42);
  v5 = v53;
  v35 = v54;
  if ( (unsigned int)(v54 - (uint32_t)(uintptr_t)(v53)) >> 3 == 0 )
  {
LABEL_18:
    glf::fs2::Path::opAssign(v28, v29);
    *(uint32_t *)v30 = (uint32_t)(uintptr_t)(v31);
    if ( v31 == nullptr )
    {
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v42);
      goto LABEL_21;
    }
    __sync_add_and_fetch((volatile int32_t *)v31 + 1, 1u);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v42);
    goto LABEL_20;
  }
  v38 = v53;
  v6 = 0;
  ParentIdx = 0;
  while ( 1 )
  {
    v7 = 2;
    v8 = (unsigned int *)((char *)v5 + 8 * v6);
    v9 = v8[1];
    v25 = (glf::fs2::Path::Self *)v8;
    s1 = (void *)*v8;
    if ( v9 <= 2 )
      v7 = v8[1];
    if ( memcmp((const void *)*v8, "..", v7) != 0 || v9 != 2 )
      break;
    ParentIdx = glf::fs2::IndexData::GetParentIdx(v32, ParentIdx);
    if ( ParentIdx == -1 )
    {
      *(uint32_t *)v30 = 0;
      goto LABEL_25;
    }
    v38 = v53;
    v35 = v54;
LABEL_8:
    if ( ++v6 >= (unsigned int)((v35 - (int)(uintptr_t)(v38)) >> 3) )
      goto LABEL_18;
    v5 = v38;
  }
  if ( memcmp(s1, ".", v9 != 0) == 0 && v9 == 1 )
    goto LABEL_8;
  SubFolderIdx = glf::fs2::IndexData::GetSubFolderIdx(v32, ParentIdx, (int)(uintptr_t)(v25));
  if ( SubFolderIdx != -1 )
  {
    v38 = v53;
    v35 = v54;
    ParentIdx = SubFolderIdx;
    goto LABEL_8;
  }
  if ( glf::fs2::IndexData::GetSubFileIdx(v32, ParentIdx, (int)(uintptr_t)(v53) + 8 * v6) != -1 )
    goto LABEL_18;
  v34 = v6 + 1;
  memset(v56, 0, 12);
  glf::fs2::ResolveTokens(
    (glf::fs2::Self *)&v53,
    (const std::vector<glf::LimitString, glf::EphemeralAllocator<glf::LimitString>> *)v56,
    v6 + 1);
  glf::fs2::Path::Construct(
    (glf::fs2::Path::Self *)v43,
    (const std::vector<glf::LimitString, glf::EphemeralAllocator<glf::LimitString>> *)v56,
    0xFFFFFFFF);
  v36 = (uint32_t *)glf::fs2::Path::String((glf::fs2::Path::Self *)v43);
  glf::Mutex::Lock((pthread_mutex_t **)v31 + 18);
  if ( *((uint32_t *)v31 + 15) == *((uint32_t *)v31 + 16) )
  {
LABEL_42:
    *(uint32_t *)v30 = 0;
    goto LABEL_43;
  }
  v37 = *((const glf::fs2::Path::Self ***)v31 + 15);
  while ( 2 )
  {
    v12 = (const char *)glf::fs2::Path::c_str((glf::fs2::Path::Self *)(v37 + 3));
    v13 = strlen(v12);
    if ( g4_std_compat::string_find(v36, v12, 0, v13) != 0 )
    {
LABEL_30:
      v37 += 6;
      if ( v37 == *((const glf::fs2::Path::Self ***)v31 + 16) )
        goto LABEL_42;
      continue;
    }
    break;
  }
  glf::fs2::Path::Construct((glf::fs2::Path::Self *)v44, (const glf::fs2::Path::Self *)v37);
  v14 = *(uint32_t *)(*v36 - 12);
  v15 = *((uint32_t *)v37[3] - 3);
  if ( v14 > v15 )
  {
    v19 = v15 + 1;
    if ( v19 > v14 )
      sub_1900210("basic_string::substr");
    sub_193A6F0(&v40, v36, v19, -1);
    g4_std::string::construct_copy(v45, &v40);
    v46 = 0;
    glf::fs2::Path::Init((glf::fs2::Path::Self *)v45);
    glf::fs2::Path::Construct((glf::fs2::Path::Self *)v51, (const glf::fs2::Path::Self *)v44);
    v20 = (const glf::fs2::Path::Self *)glf::fs2::Path::opDivAssign((glf::fs2::Path::Self *)v51, (const glf::fs2::Path::Self *)v45);
    glf::fs2::Path::Construct((glf::fs2::Path::Self *)v47, v20);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v51);
    glf::fs2::Path::opAssign((glf::fs2::Path::Self *)v44, (const glf::fs2::Path::Self *)v47);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v47);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v45);
    v21 = (void *)(v40 - 12);
    if ( (uint32_t *)(v40 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v40 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v21);
    }
  }
  v16 = v53;
  if ( v34 < (v54 - (int)(uintptr_t)(v53)) >> 3 )
  {
    v39 = v6 + 1;
    v17 = 8 * v34;
    do
    {
      s1a = (void *)v17;
      glf::fs2::Path::Construct((glf::fs2::Path::Self *)v48, (int)(uintptr_t)(v16) + v17);
      glf::fs2::Path::Construct((glf::fs2::Path::Self *)v52, (const glf::fs2::Path::Self *)v44);
      v18 = (const glf::fs2::Path::Self *)glf::fs2::Path::opDivAssign((glf::fs2::Path::Self *)v52, (const glf::fs2::Path::Self *)v48);
      glf::fs2::Path::Construct((glf::fs2::Path::Self *)v49, v18);
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v52);
      glf::fs2::Path::opAssign((glf::fs2::Path::Self *)v44, (const glf::fs2::Path::Self *)v49);
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v49);
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v48);
      v16 = v53;
      ++v39;
      v17 = (int)(uintptr_t)(s1a) + 8;
    }
    while ( v39 < (v54 - (int)(uintptr_t)(v53)) >> 3 );
  }
  glf::fs2::Path::Construct((glf::fs2::Path::Self *)v50);
  glf::fs2::FileSystem::ResolveMount2((glf::fs2::FileSystem::Self *)&v41, v37[2], (const glf::fs2::IndexData::Self *)v44, nullptr);
  if ( v41 == nullptr )
  {
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v50);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v44);
    goto LABEL_30;
  }
  glf::fs2::Path::opAssign(v28, (const glf::fs2::Path::Self *)v50);
  v22 = v41;
  v23 = v41 == nullptr;
  *(uint32_t *)v30 = (uint32_t)(uintptr_t)(v41);
  if ( !v23 )
  {
    __sync_add_and_fetch((volatile int32_t *)v22 + 1, 1u);
    if ( v41 != nullptr )
      glf::intrusive_ptr_release(v41, v24);
  }
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v50);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v44);
LABEL_43:
  glf::Mutex::Unlock((pthread_mutex_t **)v31 + 18);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v43);
  if ( v56[0] != nullptr )
    glf::freeEphemeralAllocation(v56[0], v24);
LABEL_25:
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v42);
  if ( v31 != nullptr )
LABEL_20:
    glf::intrusive_ptr_release(v31, v24);
LABEL_21:
  if ( v53 != nullptr )
    glf::freeEphemeralAllocation(v53, v24);
  return v30;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::TokenizeCanonicalPath  (binary VA: 0xc9fd80)
// Original: glf::fs2::TokenizeCanonicalPath
// ----------------------------------------------------------------------------
int glf::fs2::TokenizeCanonicalPath(glf::fs2::Self *self, const glf::fs2::Path::Self *a2)
{
  int v2;
  size_t v3;
  int v4;
  void **p_s1;
  size_t v6;
  void *v7;
  int v8;
  void **v9;
  int result;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef const glf::fs2::Path::Self *_g4_t_v13;
  typedef uint32_t _g4_t_v14[2];
  typedef void *_g4_t_s1;
  typedef size_t _g4_t_n;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef glf::fs2::Self **_g4_t_v19;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v11)) > _g4_s0 ? (0u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v12)) > _g4_s1 ? (4u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v13)) > _g4_s2 ? (16u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v14)) > _g4_s3 ? (20u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_s1)) > _g4_s4 ? (28u + sizeof(_g4_t_s1)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_n)) > _g4_s5 ? (32u + sizeof(_g4_t_n)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v17)) > _g4_s6 ? (36u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v18)) > _g4_s7 ? (40u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v19)) > _g4_s8 ? (60u + sizeof(_g4_t_v19)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 28u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 60u);

  v19 = &self;
  v13 = a2;
  glf::fs2::Path::begin((glf::fs2::Path::Self *)v14);
  while ( 1 )
  {
    glf::fs2::Path::end((glf::fs2::Path::Self *)&v17);
    if ( v14[0] == v17 )
    {
      result = v18;
      if ( v14[1] == v18 )
        return result;
    }
    v3 = n;
    v6 = 2;
    v7 = s1;
    if ( n <= 2 )
      v6 = n;
    if ( memcmp(s1, "..", v6) == 0 && v3 == 2 )
    {
      v2 = *((uint32_t *)v13 + 1);
      if ( v2 == *(uint32_t *)v13 )
        goto LABEL_8;
      if ( *(uint32_t *)(v2 - 4) <= 2u )
        v3 = *(uint32_t *)(v2 - 4);
      v12 = *((uint32_t *)v13 + 1);
      v11 = *(uint32_t *)(v2 - 4);
      v4 = memcmp(*(const void **)(v2 - 8), "..", v3);
      v2 = v12;
      if ( v4 == 0 && v11 == 2 )
      {
LABEL_8:
        if ( v2 == *((uint32_t *)v13 + 2) )
        {
          g4_std_compat::vector_insert_aux(v13, v2, &s1);
        }
        else
        {
          p_s1 = nullptr;
          if ( v2 != 0 )
          {
            p_s1 = &s1;
            if ( (void **)v2 != &s1 )
            {
              *(uint32_t *)(v2 + 4) = 2;
              *(uint32_t *)v2 = (uint32_t)(uintptr_t)(v7);
              p_s1 = *((void ***)v13 + 1);
            }
          }
          *((uint32_t *)v13 + 1) = (uint32_t)(uintptr_t)(p_s1 + 2);
        }
      }
      else
      {
        *((uint32_t *)v13 + 1) = v12 - 8;
      }
    }
    else if ( memcmp(v7, ".", v3 != 0) != 0 || v3 != 1 )
    {
      v8 = *((uint32_t *)v13 + 1);
      if ( v8 == *((uint32_t *)v13 + 2) )
      {
        g4_std_compat::vector_insert_aux(v13, v8, &s1);
      }
      else
      {
        v9 = nullptr;
        if ( v8 != 0 )
        {
          v9 = &s1;
          if ( (void **)v8 != &s1 )
          {
            *(uint32_t *)(v8 + 4) = v3;
            *(uint32_t *)v8 = (uint32_t)(uintptr_t)(v7);
            v9 = *((void ***)v13 + 1);
          }
        }
        *((uint32_t *)v13 + 1) = (uint32_t)(uintptr_t)(v9 + 2);
      }
    }
    glf::fs2::Path::iterator::increment((glf::fs2::Path::iterator::Self *)v14);
  }
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::GetNormalized  (binary VA: 0xc9ff70)
// Original: glf::fs2::FileSystem::GetNormalized
// ----------------------------------------------------------------------------
glf::fs2::FileSystem::Self * glf::fs2::FileSystem::GetNormalized(glf::fs2::FileSystem::Self *self, const glf::fs2::Path::Self *a2, glf::fs2::Self *a3)
{
  typedef std::vector<glf::LimitString, glf::EphemeralAllocator<glf::LimitString>> *_g4_t_v4;
  typedef glf::Self *_g4_t_v5[3];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v5)) > _g4_s1 ? (20u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 20u);

  memset(v5, 0, sizeof(v5));
  glf::fs2::TokenizeCanonicalPath(a3, (const glf::fs2::Path::Self *)v5);
  glf::fs2::Path::Construct(
    self,
    (const std::vector<glf::LimitString, glf::EphemeralAllocator<glf::LimitString>> *)v5,
    0xFFFFFFFF);
  if ( v5[0] != nullptr )
    glf::freeEphemeralAllocation(v5[0], v4);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::MakeCanonical  (binary VA: 0xca0000)
// Original: glf::fs2::FileSystem::MakeCanonical
// ----------------------------------------------------------------------------
glf::fs2::FileSystem::Self * glf::fs2::FileSystem::MakeCanonical(glf::fs2::FileSystem::Self *self, const glf::fs2::Path::Self *a2, const glf::fs2::Path::Self *a3)
{
  typedef glf::fs2::Path::Self *_g4_t_v4;
  typedef uint8_t _g4_t_v5[8];
  typedef glf::Self *_g4_t_v6[6];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v5)) > _g4_s1 ? (28u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v6)) > _g4_s2 ? (36u + sizeof(_g4_t_v6)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 28u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 36u);

  memset(v6, 0, 12);
  glf::fs2::FileSystem::MakeAbsolute((glf::fs2::FileSystem::Self *)v5, a2, a3);
  glf::fs2::TokenizeCanonicalPath((glf::fs2::Self *)v5, (const glf::fs2::Path::Self *)v6);
  glf::fs2::Path::Construct(
    self,
    (const std::vector<glf::LimitString, glf::EphemeralAllocator<glf::LimitString>> *)v6,
    0xFFFFFFFF);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v5);
  if ( v6[0] != nullptr )
    glf::freeEphemeralAllocation(v6[0], v4);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::MakeRelative  (binary VA: 0xca00b0)
// Original: glf::fs2::FileSystem::MakeRelative
// ----------------------------------------------------------------------------
glf::fs2::FileSystem::Self * glf::fs2::FileSystem::MakeRelative(glf::fs2::FileSystem::Self *self, const glf::fs2::Path::Self *a2, const glf::fs2::Path::Self *a3)
{
  const glf::fs2::Path::Self *v3;
  size_t v4;
  typedef size_t _g4_t_v6;
  typedef size_t _g4_t_v7;
  typedef int _g4_t_v8;
  typedef size_t _g4_t_v9;
  typedef glf::fs2::FileSystem::Self *_g4_t_v10;
  typedef glf::fs2::Path::Self *_g4_t_v11;
  typedef uint8_t _g4_t_v12[8];
  typedef uint8_t _g4_t_v13[8];
  typedef uint8_t _g4_t_v14[8];
  typedef uint8_t _g4_t_v15[8];
  typedef uint8_t _g4_t_v16[8];
  typedef uint8_t _g4_t_v17[8];
  typedef uint8_t _g4_t_v18[8];
  typedef uint8_t _g4_t_v19[8];
  typedef uint32_t _g4_t_v20[2];
  typedef void *_g4_t_s1;
  typedef size_t _g4_t_n;
  typedef uint32_t _g4_t_v23[2];
  typedef void *_g4_t_s2;
  typedef size_t _g4_t_v25;
  typedef uint32_t _g4_t_v26[4];
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef uint32_t _g4_t_v29[10];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v7)) > _g4_s1 ? (0u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v8)) > _g4_s2 ? (4u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v9)) > _g4_s3 ? (4u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v10)) > _g4_s4 ? (8u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v11)) > _g4_s5 ? (12u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v12)) > _g4_s6 ? (16u + sizeof(_g4_t_v12)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v13)) > _g4_s7 ? (24u + sizeof(_g4_t_v13)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v14)) > _g4_s8 ? (32u + sizeof(_g4_t_v14)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v15)) > _g4_s9 ? (40u + sizeof(_g4_t_v15)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v16)) > _g4_s10 ? (48u + sizeof(_g4_t_v16)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v17)) > _g4_s11 ? (56u + sizeof(_g4_t_v17)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v18)) > _g4_s12 ? (64u + sizeof(_g4_t_v18)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v19)) > _g4_s13 ? (72u + sizeof(_g4_t_v19)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v20)) > _g4_s14 ? (80u + sizeof(_g4_t_v20)) : _g4_s14,
    _g4_s16 = (88u + sizeof(_g4_t_s1)) > _g4_s15 ? (88u + sizeof(_g4_t_s1)) : _g4_s15,
    _g4_s17 = (92u + sizeof(_g4_t_n)) > _g4_s16 ? (92u + sizeof(_g4_t_n)) : _g4_s16,
    _g4_s18 = (96u + sizeof(_g4_t_v23)) > _g4_s17 ? (96u + sizeof(_g4_t_v23)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_s2)) > _g4_s18 ? (104u + sizeof(_g4_t_s2)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v25)) > _g4_s19 ? (108u + sizeof(_g4_t_v25)) : _g4_s19,
    _g4_s21 = (112u + sizeof(_g4_t_v26)) > _g4_s20 ? (112u + sizeof(_g4_t_v26)) : _g4_s20,
    _g4_s22 = (128u + sizeof(_g4_t_v27)) > _g4_s21 ? (128u + sizeof(_g4_t_v27)) : _g4_s21,
    _g4_s23 = (132u + sizeof(_g4_t_v28)) > _g4_s22 ? (132u + sizeof(_g4_t_v28)) : _g4_s22,
    _g4_s24 = (144u + sizeof(_g4_t_v29)) > _g4_s23 ? (144u + sizeof(_g4_t_v29)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 48u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 56u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 64u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 72u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 80u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 88u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 92u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 96u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 104u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 108u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 112u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 128u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 132u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 144u);

  v29[6] = (uint32_t)(uintptr_t)(&self);
  v3 = a2;
  v11 = (glf::fs2::Path::Self *)(a3);
  v10 = self;
  glf::fs2::Path::Construct((glf::fs2::Path::Self *)v13);
  glf::fs2::FileSystem::MakeAbsolute((glf::fs2::FileSystem::Self *)v12, v3, (const glf::fs2::Path::Self *)v13);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v13);
  glf::fs2::Path::Construct((glf::fs2::Path::Self *)v15);
  glf::fs2::FileSystem::MakeCanonical((glf::fs2::FileSystem::Self *)v14, v11, (const glf::fs2::Path::Self *)v15);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v15);
  glf::fs2::Path::RootName((glf::fs2::Path::Self *)v17);
  glf::fs2::Path::RootName((glf::fs2::Path::Self *)v16);
  v8 = glf::fs2::Path::Compare((glf::fs2::Path::Self *)v16, (const glf::fs2::Path::Self *)v17);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v16);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v17);
  if ( v8 != 0 )
  {
    glf::fs2::Path::Construct(v10, v11);
  }
  else
  {
    glf::fs2::Path::Construct((glf::fs2::Path::Self *)v18);
    glf::fs2::Path::begin((glf::fs2::Path::Self *)v20);
    glf::fs2::Path::begin((glf::fs2::Path::Self *)v23);
    glf::fs2::Path::end((glf::fs2::Path::Self *)v26);
    glf::fs2::Path::end((glf::fs2::Path::Self *)&v27);
    if ( v20[0] == v27 )
      goto LABEL_9;
    while ( v23[0] != v26[0] || v23[1] != v26[1] )
    {
      v4 = v25;
      v6 = n;
      v9 = v25;
      if ( n <= v25 )
        v4 = n;
      if ( memcmp(s1, s2, v4) != 0 || v9 != v6 )
        break;
      glf::fs2::Path::iterator::increment((glf::fs2::Path::iterator::Self *)v20);
      glf::fs2::Path::iterator::increment((glf::fs2::Path::iterator::Self *)v23);
      if ( v20[0] == v27 )
      {
LABEL_9:
        if ( v20[1] == v28 )
          break;
      }
    }
    glf::fs2::Path::end((glf::fs2::Path::Self *)&v27);
    while ( v20[0] != v27 || v20[1] != v28 )
    {
      v7 = n;
      if ( memcmp(s1, ".", n != 0) != 0 || v7 != 1 )
        glf::fs2::Path::opDivAssign((glf::fs2::Path::Self *)v18, "..");
      glf::fs2::Path::iterator::increment((glf::fs2::Path::iterator::Self *)v20);
    }
    while ( 1 )
    {
      glf::fs2::Path::end((glf::fs2::Path::Self *)v29);
      if ( v23[0] == v29[0] && v23[1] == v29[1] )
        break;
      glf::fs2::Path::Construct((glf::fs2::Path::Self *)v19, (int)(uintptr_t)(&s2));
      glf::fs2::Path::opDivAssign((glf::fs2::Path::Self *)v18, (const glf::fs2::Path::Self *)v19);
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v19);
      glf::fs2::Path::iterator::increment((glf::fs2::Path::iterator::Self *)v23);
    }
    glf::fs2::Path::Construct(v10, (const glf::fs2::Path::Self *)v18);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v18);
  }
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v14);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v12);
  return v10;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::Relative  (binary VA: 0xca0420)
// Original: glf::fs2::FileSystem::Relative
// ----------------------------------------------------------------------------
glf::fs2::FileSystem::Self * glf::fs2::FileSystem::Relative(glf::fs2::FileSystem::Self *self, const glf::fs2::Path::Self *a2, glf::fs2::Path::Self *a3)
{
  const glf::fs2::Path::Self *v3;
  typedef glf::fs2::Path::Self *_g4_t_v5;
  typedef uint8_t _g4_t_v6[8];
  typedef uint8_t _g4_t_v7[8];
  typedef uint8_t _g4_t_v8[20];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v6)) > _g4_s1 ? (24u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v7)) > _g4_s2 ? (32u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v8)) > _g4_s3 ? (40u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 24u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 32u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 40u);

  v3 = (const glf::fs2::Path::Self *)((char *)a2 + 176);
  if ( (uint8_t)glf::fs2::Path::IsAbsolute(a3) != 0
    && (glf::fs2::Path::RootName((glf::fs2::Path::Self *)v7),
        glf::fs2::Path::RootName((glf::fs2::Path::Self *)v6),
        v5 = (glf::fs2::Path::Self *)glf::fs2::Path::Compare((glf::fs2::Path::Self *)v6, (const glf::fs2::Path::Self *)v7),
        glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v6),
        glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v7),
        v5 != nullptr) )
  {
    glf::fs2::Path::Construct(self, a3);
  }
  else
  {
    glf::fs2::FileSystem::MakeAbsolute((glf::fs2::FileSystem::Self *)v8, a3, v3);
    glf::fs2::FileSystem::MakeRelative(self, v3, (const glf::fs2::Path::Self *)v8);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v8);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::GetRelative  (binary VA: 0xca0540)
// Original: glf::fs2::FileSystem::GetRelative
// ----------------------------------------------------------------------------
glf::fs2::FileSystem::Self * glf::fs2::FileSystem::GetRelative(glf::fs2::FileSystem::Self *self, const glf::fs2::Path::Self *a2, glf::fs2::Path::Self *a3)
{
  typedef uint8_t _g4_t_v4[8];
  typedef uint8_t _g4_t_v5[20];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v5)) > _g4_s1 ? (8u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);

  glf::fs2::FileSystem::GetAbsolute(self, a2, a3);
  glf::fs2::FileSystem::GetNormalized((glf::fs2::FileSystem::Self *)v4, a2, (glf::fs2::Self *)(self));
  glf::fs2::Path::opAssign(self, (const glf::fs2::Path::Self *)v4);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v4);
  glf::fs2::FileSystem::Relative((glf::fs2::FileSystem::Self *)v5, a2, (glf::fs2::Path::Self *)(self));
  glf::fs2::Path::opAssign(self, (const glf::fs2::Path::Self *)v5);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v5);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::Canonical  (binary VA: 0xca05f0)
// Original: glf::fs2::FileSystem::Canonical
// ----------------------------------------------------------------------------
glf::fs2::FileSystem::Self * glf::fs2::FileSystem::Canonical(glf::fs2::FileSystem::Self *self, const glf::fs2::Path::Self *a2, glf::fs2::Path::Self *a3)
{
  glf::fs2::FileSystem::MakeCanonical(self, a3, (const glf::fs2::Path::Self *)((char *)a2 + 176));
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::Normalized  (binary VA: 0xca0640)
// Original: glf::fs2::FileSystem::Normalized
// ----------------------------------------------------------------------------
glf::fs2::FileSystem::Self * glf::fs2::FileSystem::Normalized(glf::fs2::FileSystem::Self *self, const glf::fs2::Path::Self *a2, glf::fs2::Self *a3)
{
  typedef std::vector<glf::LimitString, glf::EphemeralAllocator<glf::LimitString>> *_g4_t_v4;
  typedef glf::Self *_g4_t_v5[3];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v5)) > _g4_s1 ? (20u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 20u);

  memset(v5, 0, sizeof(v5));
  glf::fs2::TokenizeCanonicalPath(a3, (const glf::fs2::Path::Self *)v5);
  glf::fs2::Path::Construct(
    self,
    (const std::vector<glf::LimitString, glf::EphemeralAllocator<glf::LimitString>> *)v5,
    0xFFFFFFFF);
  if ( v5[0] != nullptr )
    glf::freeEphemeralAllocation(v5[0], v4);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::Mount  (binary VA: 0xca06d0)
// Original: glf::fs2::FileSystem::Mount
// ----------------------------------------------------------------------------
int glf::fs2::FileSystem::Mount(int a1, glf::fs2::Path::Self *a2, int *a3, glf::RefCounted::Self *a4)
{
  int v4;
  int v6;
  glf::RefCounted::Self *v7;
  int v8;
  int v9;
  int v10;
  typedef const glf::RefCounted::Self *_g4_t_v11;
  typedef pthread_mutex_t **_g4_t_v12;
  typedef int _g4_t_v13;
  typedef glf::Self *_g4_t_v14[3];
  typedef uint8_t _g4_t_v15[24];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v12)) > _g4_s1 ? (28u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v13)) > _g4_s2 ? (32u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v14)) > _g4_s3 ? (40u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v15)) > _g4_s4 ? (52u + sizeof(_g4_t_v15)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 40u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 52u);

  v12 = (pthread_mutex_t **)(a1 + 72);
  glf::Mutex::Lock((pthread_mutex_t **)(a1 + 72));
  v4 = *(uint32_t *)(a1 + 60);
  if ( v4 == *(uint32_t *)(a1 + 64) )
  {
LABEL_6:
    glf::Mutex::Unlock(v12);
    v6 = *a3;
    v13 = *a3;
    if ( v13 != 0 )
      __sync_add_and_fetch((volatile int32_t *)(v6 + 4), 1u);
    glf::fs2::MountPoint::Construct((glf::fs2::Path::Self *)v14, a4, (glf::fs2::FileSystem::Self **)&v13, a2);
    if ( v13 != 0 )
      glf::intrusive_ptr_release((glf::Self *)v13, v11);
    if ( glf::fs2::MountPoint::IsValid((glf::fs2::MountPoint::Self *)v14) )
    {
      v7 = *(glf::RefCounted::Self **)(a1 + 64);
      if ( v7 == *(glf::RefCounted::Self **)(a1 + 68) )
      {
        g4_std_compat::vector_insert_aux(
          a1 + 60,
          v7,
          (glf::fs2::MountPoint::Self *)v14);
      }
      else
      {
        v8 = 0;
        if ( v7 != nullptr )
        {
          glf::fs2::MountPoint::Construct(v7, (const glf::fs2::MountPoint::Self *)v14);
          v8 = *(uint32_t *)(a1 + 64);
        }
        *(uint32_t *)(a1 + 64) = v8 + 24;
      }
    }
    LOBYTE(v9) = glf::fs2::MountPoint::IsValid((glf::fs2::MountPoint::Self *)v14);
    v10 = v9;
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v15);
    if ( v14[2] != nullptr )
      glf::intrusive_ptr_release(v14[2], v11);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v14);
    return v10;
  }
  else
  {
    while ( glf::fs2::Path::Compare((glf::fs2::Path::Self *)(v4 + 12), a2) != 0 )
    {
      v4 += 24;
      if ( v4 == *(uint32_t *)(a1 + 64) )
        goto LABEL_6;
    }
    glf::Mutex::Unlock(v12);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::Index  (binary VA: 0xca0810)
// Original: glf::fs2::FileSystem::Index
// ----------------------------------------------------------------------------
glf::fs2::FileSystem::Self * glf::fs2::FileSystem::Index(glf::fs2::FileSystem::Self *self, pthread_mutex_t **a2, uint32_t *a3, glf::fs2::IndexData::Self *a4)
{
  pthread_mutex_t *v4;
  pthread_mutex_t *v5;
  int v6;
  bool v7;

  glf::fs2::FileSystem::CreateIndex(
    self,
    (const std::list<glf::fs2::MountPoint::Self, glf::allocator<glf::fs2::MountPoint::Self>> *)a2,
    a3,
    a4);
  glf::Mutex::Lock(a2 + 43);
  v4 = a2[41];
  if ( v4 == a2[42] )
  {
    g4_std_compat::vector_insert_aux(
      a2 + 40,
      v4,
      self);
  }
  else
  {
    v5 = nullptr;
    if ( v4 != nullptr )
    {
      v6 = *(uint32_t *)self;
      v7 = *(uint32_t *)self == 0;
      ((int32_t *)(v4))[0] = *(uint32_t *)self;
      if ( !v7 )
        __sync_add_and_fetch((volatile int32_t *)(v6 + 4), 1u);
      v5 = a2[41];
    }
    a2[41] = (pthread_mutex_t *)(&((int32_t *)(v5))[0] + 1);
  }
  glf::Mutex::Unlock(a2 + 43);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::IndexAll  (binary VA: 0xca08d0)
// Original: glf::fs2::FileSystem::IndexAll
// ----------------------------------------------------------------------------
glf::fs2::FileSystem::Self * glf::fs2::FileSystem::IndexAll(glf::fs2::FileSystem::Self *self, pthread_mutex_t **a2, glf::fs2::IndexData::Self *a3)
{
  glf::TlsNode::Self **v3;
  int v4;
  volatile int32_t *v5;
  void *Value;
  char *v7;
  void *v8;
  glf::TlsNode::Self **v9;
  int v10;
  volatile int32_t *v11;
  glf::Self *v12;
  int v13;
  volatile int32_t *v14;
  glf::Self *v16;
  typedef const glf::RefCounted::Self *_g4_t_v17;
  typedef glf::Self *_g4_t_v18;
  typedef glf::Self *_g4_t_v19;
  typedef glf::Self *_g4_t_v20;
  typedef glf::fs2::IndexData::Self *_g4_t_v21;
  typedef glf::fs2::FileSystem::Self *_g4_t_v22;
  typedef pthread_mutex_t **_g4_t_v23;
  typedef glf::fs2::FileSystem::Self *_g4_t_v24;
  typedef glf::TlsNode::Self *_g4_t_v25;
  typedef glf::TlsNode::Self *_g4_t_v26;
  typedef glf::TlsNode::Self *_g4_t_v27;
  typedef glf::Self **_g4_t_v28;
  typedef glf::Self *_g4_t_v29;
  typedef glf::Self *_g4_t_v30[4];
  typedef uint32_t _g4_t_v31[2];
  typedef uint8_t _g4_t_v32[8];
  typedef glf::Self *_g4_t_v33;
  typedef uint32_t _g4_t_v34[9];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_v17)) > _g4_s0 ? (4u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v18)) > _g4_s1 ? (16u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v19)) > _g4_s2 ? (16u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v20)) > _g4_s3 ? (16u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v21)) > _g4_s4 ? (20u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v22)) > _g4_s5 ? (24u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v23)) > _g4_s6 ? (28u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v24)) > _g4_s7 ? (32u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v25)) > _g4_s8 ? (36u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v26)) > _g4_s9 ? (40u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v27)) > _g4_s10 ? (40u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v28)) > _g4_s11 ? (40u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v29)) > _g4_s12 ? (48u + sizeof(_g4_t_v29)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v30)) > _g4_s13 ? (64u + sizeof(_g4_t_v30)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v31)) > _g4_s14 ? (80u + sizeof(_g4_t_v31)) : _g4_s14,
    _g4_s16 = (88u + sizeof(_g4_t_v32)) > _g4_s15 ? (88u + sizeof(_g4_t_v32)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v33)) > _g4_s16 ? (96u + sizeof(_g4_t_v33)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v34)) > _g4_s17 ? (100u + sizeof(_g4_t_v34)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 40u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 48u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 64u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 80u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 88u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 96u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 100u);

  v34[5] = (uint32_t)(uintptr_t)(&self);
  v24 = (glf::fs2::FileSystem::Self *)a2;
  v22 = self;
  v21 = a3;
  v23 = a2 + 30;
  glf::Mutex::Lock(a2 + 30);
  v30[0] = (glf::Self *)v30;
  v30[1] = (glf::Self *)v30;
  glf::fs2::FileSystem::GatherAllSearchPaths(
    (pthread_mutex_t **)v24,
    (std::list<glf::fs2::MountPoint::Self, glf::allocator<glf::fs2::MountPoint::Self>> *)v30,
    true);
  v3 = *((glf::TlsNode::Self ***)v24 + 28);
  v25 = (glf::TlsNode::Self *)((glf::fs2::FileSystem::Self *)((char *)v24 + 112));
  if ( v3 != (glf::TlsNode::Self **)((char *)v24 + 112) )
  {
    while ( 1 )
    {
      v26 = *v3;
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)(v3 + 5));
      v5 = (volatile int32_t *)v3[4];
      if ( v5 != nullptr )
      {
        if ( __sync_fetch_and_add(v5 + 1, 0xFFFFFFFF) == 1 )
        {
          G4_VCALL<void>(v5, 8);
          G4_VCALL<void>(v5, 16);
        }
        else
        {
          v4 = *((uint32_t *)v5 + 1);
          _mm_mfence();
          if ( v4 == 1 )
            G4_VCALL<void>(v5, 12);
        }
      }
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)(v3 + 2));
      glf::Free((glf::Self *)v3);
      if ( v26 == v25 )
        break;
      v3 = (glf::TlsNode::Self **)v26;
    }
  }
  v31[0] = (uint32_t)(uintptr_t)(v31);
  v31[1] = (uint32_t)(uintptr_t)(v31);
  *((uint32_t *)v24 + 28) = (uint32_t)(uintptr_t)(v25);
  *((uint32_t *)v24 + 29) = (uint32_t)(uintptr_t)(v25);
  Value = glf::TlsNode::GetValue((glf::fs2::FileSystem::Self *)((char *)v24 + 124), true);
  sub_1901820(v31, Value);
  v29 = (glf::Self *)(v24);
  __sync_add_and_fetch((volatile int32_t *)v24 + 1, 1u);
  glf::fs2::MountPoint::Construct((glf::fs2::Path::Self *)v32, (int *)&v29);
  v7 = (char *)glf::Alloc(0x20u);
  if ( v7 != (char *)-8 )
  {
    v18 = (glf::Self *)v7;
    glf::fs2::MountPoint::Construct((glf::fs2::MountPoint::Self *)(v7 + 8), (const glf::fs2::MountPoint::Self *)v32);
    v7 = (char *)v18;
  }
  sub_1901920(v7, v30);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v34);
  if ( v33 != nullptr )
    glf::intrusive_ptr_release(v33, v17);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v32);
  if ( v29 != nullptr )
    glf::intrusive_ptr_release(v29, v17);
  glf::fs2::FileSystem::Index(v22, (pthread_mutex_t **)v24, v30, v21);
  v8 = glf::TlsNode::GetValue((glf::fs2::FileSystem::Self *)((char *)v24 + 124), true);
  sub_1901820(v31, v8);
  v9 = (glf::TlsNode::Self **)v31[0];
  if ( (uint32_t *)v31[0] != v31 )
  {
    while ( 1 )
    {
      v20 = (glf::Self *)v9;
      v27 = *v9;
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)(v9 + 5));
      v16 = v20;
      v11 = *((volatile int32_t **)v20 + 4);
      if ( v11 != nullptr )
      {
        if ( __sync_fetch_and_add(v11 + 1, 0xFFFFFFFF) == 1 )
        {
          G4_VCALL<void>(v11, 8);
          G4_VCALL<void>(v11, 16);
          v16 = v20;
        }
        else
        {
          v10 = *((uint32_t *)v11 + 1);
          _mm_mfence();
          if ( v10 == 1 )
          {
            G4_VCALL<void>(v11, 12);
            v16 = v20;
          }
        }
      }
      v19 = v16;
      glf::fs2::Path::Destroy((glf::Self *)((char *)v16 + 8));
      glf::Free(v19);
      if ( v27 == (glf::TlsNode::Self *)v31 )
        break;
      v9 = (glf::TlsNode::Self **)v27;
    }
  }
  v12 = v30[0];
  if ( (glf::Self **)v30[0] != v30 )
  {
    while ( 1 )
    {
      v28 = *(glf::Self ***)v12;
      glf::fs2::Path::Destroy((glf::Self *)((char *)v12 + 20));
      v14 = *((volatile int32_t **)v12 + 4);
      if ( v14 != nullptr )
      {
        if ( __sync_fetch_and_add(v14 + 1, 0xFFFFFFFF) == 1 )
        {
          G4_VCALL<void>(v14, 8);
          G4_VCALL<void>(v14, 16);
        }
        else
        {
          v13 = *((uint32_t *)v14 + 1);
          _mm_mfence();
          if ( v13 == 1 )
            G4_VCALL<void>(v14, 12);
        }
      }
      glf::fs2::Path::Destroy((glf::Self *)((char *)v12 + 8));
      glf::Free(v12);
      if ( v28 == v30 )
        break;
      v12 = (glf::Self *)v28;
    }
  }
  glf::Mutex::Unlock(v23);
  return v22;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::AddIndex  (binary VA: 0xca0c00)
// Original: glf::fs2::FileSystem::AddIndex
// ----------------------------------------------------------------------------
int glf::fs2::FileSystem::AddIndex(int a1, int *a2)
{
  int *v2;
  int v3;
  int v4;
  bool v5;

  glf::Mutex::Lock((pthread_mutex_t **)(a1 + 172));
  v2 = *(int **)(a1 + 164);
  if ( v2 == *(int **)(a1 + 168) )
  {
    g4_std_compat::vector_insert_aux(
      a1 + 160,
      v2,
      a2);
  }
  else
  {
    v3 = 0;
    if ( v2 != nullptr )
    {
      v4 = *a2;
      v5 = *a2 == 0;
      *v2 = *a2;
      if ( !v5 )
        __sync_add_and_fetch((volatile int32_t *)(v4 + 4), 1u);
      v3 = *(uint32_t *)(a1 + 164);
    }
    *(uint32_t *)(a1 + 164) = v3 + 4;
  }
  return glf::Mutex::Unlock((pthread_mutex_t **)(a1 + 172));
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::Index  (binary VA: 0xca0ca0)
// Original: glf::fs2::FileSystem::Index
// ----------------------------------------------------------------------------
glf::fs2::FileSystem::Self * glf::fs2::FileSystem::Index(glf::fs2::FileSystem::Self *self, pthread_mutex_t **a2, int a3)
{
  pthread_mutex_t *v3;
  pthread_mutex_t *v4;
  int v5;
  bool v6;

  ((void (*)(glf::fs2::FileSystem::Self *))(intptr_t)(((uintptr_t *)(*a2))[13]))(self);
  glf::Mutex::Lock(a2 + 43);
  v3 = a2[41];
  if ( v3 == a2[42] )
  {
    g4_std_compat::vector_insert_aux(
      a2 + 40,
      v3,
      self);
  }
  else
  {
    v4 = nullptr;
    if ( v3 != nullptr )
    {
      v5 = *(uint32_t *)self;
      v6 = *(uint32_t *)self == 0;
      ((int32_t *)(v3))[0] = *(uint32_t *)self;
      if ( !v6 )
        __sync_add_and_fetch((volatile int32_t *)(v5 + 4), 1u);
      v4 = a2[41];
    }
    a2[41] = (pthread_mutex_t *)(&((int32_t *)(v4))[0] + 1);
  }
  glf::Mutex::Unlock(a2 + 43);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::ListDir  (binary VA: 0xca0d60)
// Original: glf::fs2::FileSystem::ListDir
// ----------------------------------------------------------------------------
int glf::fs2::FileSystem::ListDir(pthread_mutex_t **a1, glf::fs2::Path::Self *a2, int a3, int a4, int a5)
{
  char v5; // si
  int result;
  int v7;
  int v8;
  bool v9;
  int v10;
  int v11;
  int v12;
  int v13;
  glf::Self *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  const glf::fs2::Path::Self *v19;
  const glf::fs2::Path::Self *v20;
  const char *v21;
  int v22;
  int v23;
  int v24;
  int v25;
  glf::Self *v26;
  int v27;
  int v28;
  int v29;
  typedef const glf::RefCounted::Self *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef char *_g4_t_dest;
  typedef uint8_t _g4_t_v36[9];
  typedef uint8_t _g4_t_v37[8];
  typedef uint8_t _g4_t_v38[8];
  typedef uint8_t _g4_t_v39[8];
  typedef int _g4_t_v40[2];
  typedef uint32_t _g4_t_v41[8];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_v30)) > _g4_s0 ? (4u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v31)) > _g4_s1 ? (40u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v32)) > _g4_s2 ? (44u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v33)) > _g4_s3 ? (52u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v34)) > _g4_s4 ? (56u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_dest)) > _g4_s5 ? (60u + sizeof(_g4_t_dest)) : _g4_s5,
    _g4_s7 = (79u + sizeof(_g4_t_v36)) > _g4_s6 ? (79u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (88u + sizeof(_g4_t_v37)) > _g4_s7 ? (88u + sizeof(_g4_t_v37)) : _g4_s7,
    _g4_s9 = (96u + sizeof(_g4_t_v38)) > _g4_s8 ? (96u + sizeof(_g4_t_v38)) : _g4_s8,
    _g4_s10 = (104u + sizeof(_g4_t_v39)) > _g4_s9 ? (104u + sizeof(_g4_t_v39)) : _g4_s9,
    _g4_s11 = (112u + sizeof(_g4_t_v40)) > _g4_s10 ? (112u + sizeof(_g4_t_v40)) : _g4_s10,
    _g4_s12 = (120u + sizeof(_g4_t_v41)) > _g4_s11 ? (120u + sizeof(_g4_t_v41)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 4u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 40u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 44u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 52u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 56u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 60u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 79u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 88u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 96u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 104u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 112u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 120u);

  v41[4] = (uint32_t)(uintptr_t)(&a1);
  v5 = a3;
  v34 = a4;
  v32 = a5;
  glf::fs2::FileSystem::OpenDir((glf::Self **)&v36[1], a1, a2, a3, 0);
  result = *(uint32_t *)&v36[1];
  if ( *(uint32_t *)&v36[1] != 0 )
  {
    v33 = v5 & 2;
    v31 = v5 & 1;
    while ( 1 )
    {
      v9 = G4_VCALL<uint8_t>(result, 24) == 0;
      result = *(uint32_t *)&v36[1];
      if ( v9 )
      {
        if ( *(uint32_t *)&v36[1] != 0 )
          return glf::intrusive_ptr_release(*(glf::Self **)&v36[1], v30);
        return result;
      }
      v7 = (*(int (**)(uint32_t))(**(uint32_t **)&v36[1] + 20))(*(uint32_t *)&v36[1]);
      v8 = v7;
      if ( v31 == 1 && *(uint32_t *)(v7 + 1024) == 3 )
        break;
      if ( v33 == 2 && *(uint32_t *)(v7 + 1024) != 3 )
      {
        v22 = *(uint32_t *)(v32 + 4);
        if ( v22 == *(uint32_t *)(v32 + 8) )
        {
          g4_std_compat::vector_insert_aux(
            v32,
            (char *)v22,
            (char *)v7);
          v18 = *(uint32_t *)(v32 + 4);
        }
        else
        {
          v23 = 0;
          if ( v22 != 0 )
          {
            *(uint32_t *)(v22 + 1024) = 0;
            *(uint32_t *)(v22 + 1028) = 0;
            *(uint32_t *)(v22 + 1032) = 0xFFFF;
            *(uint32_t *)(v22 + 1036) = -1;
            *(uint32_t *)(v22 + 1040) = -1;
            *(uint32_t *)(v22 + 1044) = 0;
            *(uint32_t *)(v22 + 1048) = -1;
            *(uint32_t *)(v22 + 1052) = -1;
            *(uint32_t *)(v22 + 1056) = -1;
            *(uint32_t *)(v22 + 1060) = -1;
            *(uint32_t *)(v22 + 1064) = -1;
            *(uint32_t *)(v22 + 1068) = -1;
            *(uint32_t *)(v22 + 1072) = -1;
            glf::fs2::Path::Construct((glf::fs2::Path::Self *)(v22 + 1076));
            strcpy((char *)v22, (const char *)v8);
            if ( v8 != v22 )
            {
              *(uint32_t *)(v22 + 1024) = *(uint32_t *)(v8 + 1024);
              *(uint32_t *)(v22 + 1028) = *(uint32_t *)(v8 + 1028);
              *(uint32_t *)(v22 + 1032) = *(uint32_t *)(v8 + 1032);
              v24 = *(uint32_t *)(v8 + 1040);
              *(uint32_t *)(v22 + 1036) = *(uint32_t *)(v8 + 1036);
              *(uint32_t *)(v22 + 1040) = v24;
              v25 = *(uint32_t *)(v8 + 1044);
              if ( v25 != 0 )
                __sync_add_and_fetch((volatile int32_t *)(v25 + 4), 1u);
              v26 = *(glf::Self **)(v22 + 1044);
              *(uint32_t *)(v22 + 1044) = v25;
              if ( v26 != nullptr )
                glf::intrusive_ptr_release(v26, v30);
              *(uint32_t *)(v22 + 1048) = *(uint32_t *)(v8 + 1048);
              v27 = *(uint32_t *)(v8 + 1056);
              *(uint32_t *)(v22 + 1052) = *(uint32_t *)(v8 + 1052);
              *(uint32_t *)(v22 + 1056) = v27;
              v28 = *(uint32_t *)(v8 + 1072);
              *(uint32_t *)(v22 + 1068) = *(uint32_t *)(v8 + 1068);
              *(uint32_t *)(v22 + 1072) = v28;
              v29 = *(uint32_t *)(v8 + 1064);
              *(uint32_t *)(v22 + 1060) = *(uint32_t *)(v8 + 1060);
              *(uint32_t *)(v22 + 1064) = v29;
              glf::fs2::Path::opAssign((glf::fs2::Path::Self *)(v22 + 1076), (const glf::fs2::Path::Self *)(v8 + 1076));
            }
            v23 = *(uint32_t *)(v32 + 4);
          }
          v18 = v23 + 1084;
          *(uint32_t *)(v32 + 4) = v18;
        }
        goto LABEL_21;
      }
LABEL_5:
      glf::fs2::Dir::MoveNext(*(glf::fs2::Dir::Self **)&v36[1]);
      result = *(uint32_t *)&v36[1];
      if ( *(uint32_t *)&v36[1] == 0 )
        return result;
    }
    v10 = *(uint32_t *)(v34 + 4);
    if ( v10 == *(uint32_t *)(v34 + 8) )
    {
      g4_std_compat::vector_insert_aux(v34, (char *)v10, (char *)v7);
      v18 = *(uint32_t *)(v34 + 4);
    }
    else
    {
      v11 = 0;
      if ( v10 != 0 )
      {
        *(uint32_t *)(v10 + 1024) = 0;
        *(uint32_t *)(v10 + 1028) = 0;
        *(uint32_t *)(v10 + 1032) = 0xFFFF;
        *(uint32_t *)(v10 + 1036) = -1;
        *(uint32_t *)(v10 + 1040) = -1;
        *(uint32_t *)(v10 + 1044) = 0;
        *(uint32_t *)(v10 + 1048) = -1;
        *(uint32_t *)(v10 + 1052) = -1;
        *(uint32_t *)(v10 + 1056) = -1;
        *(uint32_t *)(v10 + 1060) = -1;
        *(uint32_t *)(v10 + 1064) = -1;
        *(uint32_t *)(v10 + 1068) = -1;
        *(uint32_t *)(v10 + 1072) = -1;
        glf::fs2::Path::Construct((glf::fs2::Path::Self *)(v10 + 1076));
        strcpy((char *)v10, (const char *)v8);
        if ( v8 != v10 )
        {
          *(uint32_t *)(v10 + 1024) = *(uint32_t *)(v8 + 1024);
          *(uint32_t *)(v10 + 1028) = *(uint32_t *)(v8 + 1028);
          *(uint32_t *)(v10 + 1032) = *(uint32_t *)(v8 + 1032);
          v12 = *(uint32_t *)(v8 + 1040);
          *(uint32_t *)(v10 + 1036) = *(uint32_t *)(v8 + 1036);
          *(uint32_t *)(v10 + 1040) = v12;
          v13 = *(uint32_t *)(v8 + 1044);
          if ( v13 != 0 )
            __sync_add_and_fetch((volatile int32_t *)(v13 + 4), 1u);
          v14 = *(glf::Self **)(v10 + 1044);
          *(uint32_t *)(v10 + 1044) = v13;
          if ( v14 != nullptr )
            glf::intrusive_ptr_release(v14, v30);
          *(uint32_t *)(v10 + 1048) = *(uint32_t *)(v8 + 1048);
          v15 = *(uint32_t *)(v8 + 1056);
          *(uint32_t *)(v10 + 1052) = *(uint32_t *)(v8 + 1052);
          *(uint32_t *)(v10 + 1056) = v15;
          v16 = *(uint32_t *)(v8 + 1072);
          *(uint32_t *)(v10 + 1068) = *(uint32_t *)(v8 + 1068);
          *(uint32_t *)(v10 + 1072) = v16;
          v17 = *(uint32_t *)(v8 + 1064);
          *(uint32_t *)(v10 + 1060) = *(uint32_t *)(v8 + 1060);
          *(uint32_t *)(v10 + 1064) = v17;
          glf::fs2::Path::opAssign((glf::fs2::Path::Self *)(v10 + 1076), (const glf::fs2::Path::Self *)(v8 + 1076));
        }
        v11 = *(uint32_t *)(v34 + 4);
      }
      v18 = v11 + 1084;
      *(uint32_t *)(v34 + 4) = v18;
    }
LABEL_21:
    dest = (char *)(v18 - 1084);
    if ( v18 != 1084 )
    {
      v19 = (const glf::fs2::Path::Self *)(*(int (**)(uint32_t))(**(uint32_t **)&v36[1] + 28))(*(uint32_t *)&v36[1]);
      glf::fs2::Path::Construct((glf::fs2::Path::Self *)v37, v19);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v40), (char *)v8, (int)(uintptr_t)(v36));
      v40[1] = 0;
      glf::fs2::Path::Init((glf::fs2::Path::Self *)v40);
      glf::fs2::Path::RemovePrefix((glf::fs2::Path::Self *)v39, (const glf::fs2::Path::Self *)v37);
      glf::fs2::Path::Construct((glf::fs2::Path::Self *)v41, (const glf::fs2::Path::Self *)v39);
      v20 = (const glf::fs2::Path::Self *)glf::fs2::Path::opDivAssign((glf::fs2::Path::Self *)v41, (const glf::fs2::Path::Self *)v40);
      glf::fs2::Path::Construct((glf::fs2::Path::Self *)v38, v20);
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v41);
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v39);
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v40);
      v21 = (const char *)glf::fs2::Path::c_str((glf::fs2::Path::Self *)v38);
      strcpy(dest, v21);
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v38);
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v37);
    }
    goto LABEL_5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::PathInfo::LesserThan  (binary VA: 0xca1310)
// Original: glf::fs2::PathInfo::LesserThan
// ----------------------------------------------------------------------------
unsigned int glf::fs2::PathInfo::LesserThan(glf::fs2::PathInfo::Self *self, const glf::fs2::PathInfo::Self *a2)
{
  size_t v2;
  size_t v3;
  size_t n;
  unsigned int v5;
  unsigned int v6;

  v2 = *(uint32_t *)(*((uint32_t *)self + 2) - 12);
  v3 = *(uint32_t *)(*((uint32_t *)a2 + 2) - 12);
  n = v2;
  if ( v3 <= v2 )
    n = *(uint32_t *)(*((uint32_t *)a2 + 2) - 12);
  v5 = v2 - v3;
  v6 = memcmp(*((const void **)self + 2), *((const void **)a2 + 2), n);
  if ( v6 == 0 )
    v6 = v5;
  return v6 >> 31;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystemPosix::Destroy  (binary VA: 0xca2f00)
// Original: glf::fs2::FileSystemPosix::~FileSystemPosix
// ----------------------------------------------------------------------------
void glf::fs2::FileSystemPosix::Destroy(glf::fs2::FileSystemPosix::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206DD28);
  glf::fs2::FileSystem::Destroy((glf::fs2::FileSystem::Self *)(self));
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystemPosix::Destroy_eaca2f30  (binary VA: 0xca2f30)
// Original: glf::fs2::FileSystemPosix::~FileSystemPosix
// ----------------------------------------------------------------------------
void glf::fs2::FileSystemPosix::Destroy_eaca2f30(glf::fs2::FileSystemPosix::Self *self)
{
  glf::fs2::FileSystemPosix::Destroy(self);
  glf::MemObject::opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::GetPosixErrorCategory  (binary VA: 0xca2f70)
// Original: glf::fs2::GetPosixErrorCategory
// ----------------------------------------------------------------------------
int * glf::fs2::GetPosixErrorCategory()
{
  if ( byte_20DF460 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20DF460) != 0 )
  {
    dword_20DF468 = (int)((uint32_t)(uintptr_t)&off_206DD90);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20DF460);
    __cxa_atexit(
      (void (*)(void *))glf::fs2::SystemErrorCategoryPosix::Destroy,
      &dword_20DF468,
      &unk_20D1280);
  }
  return (int *)(&dword_20DF468);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::android::GetDataDirectory  (binary VA: 0xca3000)
// Original: glf::fs2::android::GetDataDirectory
// ----------------------------------------------------------------------------
glf::fs2::android::Self * glf::fs2::android::GetDataDirectory(glf::fs2::android::Self *self)
{
  glf::fs2::Path::Construct(self, (const glf::fs2::Path::Self *)&glf::fs2::android::sDataDirectory);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::android::GetCurrentWorkingDirectory  (binary VA: 0xca3040)
// Original: glf::fs2::android::GetCurrentWorkingDirectory
// ----------------------------------------------------------------------------
glf::fs2::android::Self * glf::fs2::android::GetCurrentWorkingDirectory(glf::fs2::android::Self *self)
{
  char buf[1025];

  getcwd(&buf[1], 0x400u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(self), &buf[1], (int)(uintptr_t)(buf));
  *((uint32_t *)self + 1) = 0;
  glf::fs2::Path::Init(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::android::GetExecutableDirectory  (binary VA: 0xca30d0)
// Original: glf::fs2::android::GetExecutableDirectory
// ----------------------------------------------------------------------------
glf::fs2::android::Self * glf::fs2::android::GetExecutableDirectory(glf::fs2::android::Self *self)
{
  glf::fs2::Path::Construct(self, (const glf::fs2::Path::Self *)&glf::fs2::android::sHomeDirectory);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::android::GetExecutable  (binary VA: 0xca3110)
// Original: glf::fs2::android::GetExecutable
// ----------------------------------------------------------------------------
glf::fs2::android::Self * glf::fs2::android::GetExecutable(glf::fs2::android::Self *self)
{
  glf::fs2::Path::Construct(self, (const glf::fs2::Path::Self *)&glf::fs2::android::sHomeDirectory);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::android::GetTempDirectory  (binary VA: 0xca3150)
// Original: glf::fs2::android::GetTempDirectory
// ----------------------------------------------------------------------------
glf::fs2::android::Self * glf::fs2::android::GetTempDirectory(glf::fs2::android::Self *self)
{
  glf::fs2::Path::Construct(self, (const glf::fs2::Path::Self *)&glf::fs2::android::sTempDirectory);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::InitStartingWorkingDirectory  (binary VA: 0xca3190)
// Original: glf::fs2::InitStartingWorkingDirectory
// ----------------------------------------------------------------------------
glf::fs2::Self * glf::fs2::InitStartingWorkingDirectory(glf::fs2::Self *self, const glf::fs2::Path::Self *a2)
{
  const char *path;
  int v4;
  typedef uint8_t _g4_t_v5[8];
  typedef uint8_t _g4_t_v6[20];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v6)) > _g4_s1 ? (8u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);

  glf::fs2::android::GetCurrentWorkingDirectory((glf::fs2::android::Self *)v6);
  glf::fs2::Path::Canonical((glf::fs2::Path::Self *)v5, a2);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v6);
  path = (const char *)glf::fs2::Path::c_str((glf::fs2::Path::Self *)v5);
  if ( chdir(path) != 0 )
  {
    v4 = glf::fs2::Path::c_str(a2);
    printf("unable to change cwd to %s\n", v4, v6);
    glf::fs2::android::GetCurrentWorkingDirectory((glf::fs2::android::Self *)(self));
  }
  else
  {
    glf::fs2::Path::Construct(self, (const glf::fs2::Path::Self *)v5);
  }
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v5);
  return self;
}



// ============================================================================
// Address:   0xca3260 (size: 67 bytes)
// Symbol:    _ZN3glf3fs215FileSystemPosixC2ERKNS0_4PathE
// Demangled: glf::fs2::FileSystemPosix::FileSystemPosix(glf::fs2::Path const&)
// ============================================================================
// Alternative name is '_ZN3glf3fs215FileSystemPosixC1ERKNS0_4PathE'
void (**glf::fs2::FileSystemPosix::FileSystemPosix(
        glf::fs2::FileSystemPosix::Self *self,
        const glf::fs2::Path::Self *a2))(glf::fs2::FileSystemPosix::Self * self)
{
  glf::fs2::FileSystem::Construct(self, a2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206DD28);
  return (void (**)(glf::fs2::FileSystemPosix::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_206DD28));
}
// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystem::NewNative  (binary VA: 0xca32b0)
// Original: glf::fs2::FileSystem::NewNative
// ----------------------------------------------------------------------------
glf::fs2::FileSystem::Self * glf::fs2::FileSystem::NewNative(glf::fs2::FileSystem::Self *self, const glf::fs2::Path::Self *a2)
{
  volatile int32_t *v2;

  v2 = (volatile int32_t *)glf::MemObject::opNew(0xC0u);
  glf::fs2::FileSystemPosix::FileSystemPosix((glf::fs2::FileSystemPosix::Self *)v2, a2);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(v2);
  if ( v2 != nullptr )
    __sync_add_and_fetch(v2 + 1, 1u);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::NativeInit  (binary VA: 0xca3310)
// Original: glf::fs2::NativeInit
// ----------------------------------------------------------------------------
void glf::fs2::NativeInit(glf::fs2::Self *self)
{
  volatile int32_t *v1;
  int *NativeFs;
  volatile int32_t *v3;
  int v4;
  uint8_t v5[20];

  if ( glf::fs2::IsInit() )
  {
    glf::Log("fs2", 1, "fs2 is already initialized");
    return;
  }
  glf::fs2::InitStartingWorkingDirectory((glf::fs2::Self *)v5, (const glf::fs2::Path::Self *)(self));
  v1 = (volatile int32_t *)glf::MemObject::opNew(0xC0u);
  glf::fs2::FileSystemPosix::FileSystemPosix((glf::fs2::FileSystemPosix::Self *)v1, (const glf::fs2::Path::Self *)v5);
  NativeFs = glf::fs2::GetNativeFs();
  if ( v1 != nullptr )
    __sync_add_and_fetch(v1 + 1, 1u);
  v3 = (volatile int32_t *)*NativeFs;
  *NativeFs = (int)(uintptr_t)(v1);
  if ( v3 == nullptr )
    goto LABEL_9;
  if ( __sync_fetch_and_add(v3 + 1, 0xFFFFFFFF) != 1 )
  {
    v4 = *((uint32_t *)v3 + 1);
    _mm_mfence();
    if ( v4 == 1 )
      G4_VCALL<void>(v3, 12);
LABEL_9:
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v5);
    return;
  }
  G4_VCALL<void>(v3, 8);
  G4_VCALL<void>(v3, 16);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v5);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::android::Init  (binary VA: 0xca3410)
// Original: glf::fs2::android::Init
// ----------------------------------------------------------------------------
void glf::fs2::android::Init(glf::fs2::android::Self *self)
{
  glf::fs2::NativeInit((glf::fs2::Self *)(self));
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystemPosix::CheckLastError  (binary VA: 0xca3440)
// Original: glf::fs2::FileSystemPosix::CheckLastError
// ----------------------------------------------------------------------------
uint32_t * glf::fs2::FileSystemPosix::CheckLastError(glf::fs2::FileSystemPosix::Self *self, char *a2, bool a3)
{
  int *PosixErrorCategory;
  int v4;

  PosixErrorCategory = glf::fs2::GetPosixErrorCategory();
  v4 = 0;
  if ( !a3 )
    v4 = *(uint32_t *)__errno();
  return glf::fs2::FileSystem::SetError((glf::fs2::FileSystem::Self *)(self), v4, (const glf::ErrorCategory::Self *)PosixErrorCategory, a2);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystemPosix::Move  (binary VA: 0xca34b0)
// Original: glf::fs2::FileSystemPosix::Move
// ----------------------------------------------------------------------------
bool glf::fs2::FileSystemPosix::Move(glf::fs2::FileSystemPosix::Self *self, const glf::fs2::Path::Self *a2, const glf::fs2::Path::Self *a3, bool a4)
{
  const char *old;
  typedef char *_g4_t_v6;
  typedef char *_g4_t_v7;
  typedef uint8_t _g4_t_v8[20];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v8)) > _g4_s2 ? (24u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);

  if ( a4 || (uint8_t)(uintptr_t)glf::fs2::FileSystem::Exists((glf::fs2::FileSystem::Self *)(self), a3) == 0 )
  {
    v6 = (char *)glf::fs2::Path::c_str(a3);
    old = (const char *)glf::fs2::Path::c_str(a2);
    v7 = (char *)rename(old, v6);
    glf::fs2::FileSystemPosix::CheckLastError(self, "Move", v7 == nullptr);
    return v7 == nullptr;
  }
  else
  {
    *(uint32_t *)__errno() = 17;
    glf::fs2::Path::Construct((glf::fs2::Path::Self *)v8);
    glf::fs2::FileSystemPosix::CheckLastError(self, "Move", false);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v8);
    return false;
  }
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystemPosix::Mkdir  (binary VA: 0xca35b0)
// Original: glf::fs2::FileSystemPosix::Mkdir
// ----------------------------------------------------------------------------
int glf::fs2::FileSystemPosix::Mkdir(glf::fs2::FileSystemPosix::Self *self, const glf::fs2::Path::Self *a2)
{
  int v2;
  const char *path;
  int v5;
  typedef void (*_g4_t_v6)(glf::fs2::FileSystemPosix::Self *, uint8_t *);
  typedef int _g4_t_v7;
  typedef uint8_t _g4_t_v8[8];
  typedef uint8_t _g4_t_v9[8];
  typedef uint8_t _g4_t_v10[20];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v8)) > _g4_s2 ? (24u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v9)) > _g4_s3 ? (32u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v10)) > _g4_s4 ? (40u + sizeof(_g4_t_v10)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);

  if ( (uint8_t)glf::fs2::Path::Empty(a2) != 0 || (uint8_t)(uintptr_t)glf::fs2::FileSystem::Exists((glf::fs2::FileSystem::Self *)(self), a2) != 0 )
  {
    v2 = 0;
    if ( (uint8_t)glf::fs2::Path::Empty(a2) == 0 )
    {
      *(uint32_t *)__errno() = 17;
      glf::fs2::Path::Construct((glf::fs2::Path::Self *)v10);
      glf::fs2::FileSystemPosix::CheckLastError(self, "Mkdir", false);
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v10);
    }
  }
  else
  {
    v6 = *(void (**)(glf::fs2::FileSystemPosix::Self *, uint8_t *))(*(uint32_t *)self + 24);
    glf::fs2::Path::ParentPath((glf::fs2::Path::Self *)v8);
    v6(self, v8);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v8);
    path = (const char *)glf::fs2::Path::c_str(a2);
    v7 = mkdir(path, 0x1FFu);
    glf::fs2::Path::Construct((glf::fs2::Path::Self *)v9);
    glf::fs2::FileSystemPosix::CheckLastError(self, "Mkdir", v7 == 0);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v9);
    LOBYTE(v5) = v7 == 0;
    return v5;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystemPosix::OpenDirV  (binary VA: 0xca3720)
// Original: glf::fs2::FileSystemPosix::OpenDirV
// ----------------------------------------------------------------------------
uint32_t * glf::fs2::FileSystemPosix::OpenDirV(uint32_t *a1, glf::fs2::FileSystem::Self *a2, glf::fs2::Path::Self *a3, int a4, int a5)
{
  void *v6;
  const char *name;
  DIR *v8;
  uint8_t v9[20];

  if ( (uint8_t)(uintptr_t)glf::fs2::FileSystem::IsDirectory(a2, a3) != 0 )
  {
    v6 = glf::MemObject::opNew(0x460u);
    glf::fs2::Dir::Construct((int)(uintptr_t)(v6), (int)(uintptr_t)(a2), a3, a4, a5);
    *(uint32_t *)v6 = ((uint32_t)(uintptr_t)&off_206DDC8);
    if ( *(uint32_t *)(*(uint32_t *)glf::fs2::Path::String(a3) - 12) != 0 )
    {
      name = (const char *)glf::fs2::Path::c_str(a3);
      v8 = opendir(name);
    }
    else
    {
      v8 = opendir(".");
    }
    *((uint32_t *)v6 + 278) = (uint32_t)(uintptr_t)(v8);
    if ( v8 != nullptr )
      *((struct dirent **)v6 + 279) = readdir(v8);
    else
      *((uint32_t *)v6 + 279) = 0;
    glf::fs2::Dir::Validate((glf::fs2::Dir::Self *)v6);
    glf::fs2::Path::Construct((glf::fs2::Path::Self *)v9);
    glf::fs2::FileSystemPosix::CheckLastError((glf::fs2::FileSystemPosix::Self *)(a2), "OpenDirV", true);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v9);
    *a1 = (uint32_t)(uintptr_t)(v6);
    __sync_add_and_fetch((volatile int32_t *)v6 + 1, 1u);
  }
  else
  {
    *a1 = 0;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystemPosix::OpenV  (binary VA: 0xca3890)
// Original: glf::fs2::FileSystemPosix::OpenV
// ----------------------------------------------------------------------------
glf::io2::FileDevice::Self * glf::fs2::FileSystemPosix::OpenV(glf::fs2::FileSystemPosix::Self *a1, glf::fs2::Path::Self *a2, int a3, int a4, int a5, int a6)
{
  char *v6;
  glf::io2::FileDevice::Self *result;
  uint32_t *v8;
  int v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef glf::io2::FileDevice::Self *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21[2];
  typedef uint32_t _g4_t_v22[5];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v11)) > _g4_s1 ? (8u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v12)) > _g4_s2 ? (12u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v13)) > _g4_s3 ? (16u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v14)) > _g4_s4 ? (20u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v15)) > _g4_s5 ? (24u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v16)) > _g4_s6 ? (28u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v17)) > _g4_s7 ? (32u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v18)) > _g4_s8 ? (36u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v19)) > _g4_s9 ? (40u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v20)) > _g4_s10 ? (44u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v21)) > _g4_s11 ? (48u + sizeof(_g4_t_v21)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v22)) > _g4_s12 ? (56u + sizeof(_g4_t_v22)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 56u);

  v6 = (char *)glf::fs2::Path::c_str(a2);
  v20 = glf::io2::FilePosix::OpenFileDesc(v6, a3);
  glf::fs2::Path::Construct((glf::fs2::Path::Self *)v22);
  glf::fs2::FileSystemPosix::CheckLastError(a1, "OpenV", v20 != -1);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v22);
  result = nullptr;
  if ( v20 != -1 )
  {
    v21[0] = (int)(uintptr_t)(a1);
    if ( a1 != nullptr )
      __sync_add_and_fetch((volatile int32_t *)a1 + 1, 1u);
    v19 = (glf::io2::FileDevice::Self *)glf::MemObject::opNew(0x48u);
    glf::io2::FilePosix::Construct(v19, (int)(uintptr_t)(v21), a2, v20, a3);
    v8 = (uint32_t *)v21[0];
    result = v19;
    if ( v21[0] != 0 )
    {
      if ( __sync_fetch_and_add((volatile int32_t *)(v21[0] + 4), 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v8, 8, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21[0], v21[1], v22[0], v22[1]);
        G4_VCALL<void>(v8, 16);
        return (glf::io2::FileDevice::Self *)a6;
      }
      else
      {
        v9 = v8[1];
        _mm_mfence();
        if ( v9 == 1 )
        {
          G4_VCALL<void>(v8, 12);
          return v19;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystemPosix::Remove  (binary VA: 0xca39c0)
// Original: glf::fs2::FileSystemPosix::Remove
// ----------------------------------------------------------------------------
bool glf::fs2::FileSystemPosix::Remove(glf::fs2::FileSystemPosix::Self *self, const glf::fs2::Path::Self *a2)
{
  uint32_t *v2;
  int v3;
  const char *filename;
  int v6;
  const char *v7;
  typedef char _g4_t_v8;
  typedef bool _g4_t_v9;
  typedef uint8_t _g4_t_v10[8];
  typedef uint32_t _g4_t_v11[5];
  typedef int _g4_t_v12;
  typedef uint8_t _g4_t_v13[20];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v9)) > _g4_s1 ? (15u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v10)) > _g4_s2 ? (28u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v11)) > _g4_s3 ? (36u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v12)) > _g4_s4 ? (56u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (88u + sizeof(_g4_t_v13)) > _g4_s5 ? (88u + sizeof(_g4_t_v13)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 15u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 36u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 56u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 88u);

  glf::fs2::FileSystem::GetStatus((glf::fs2::FileSystem::Self *)v11, self, a2);
  if ( v11[0] == 3 )
  {
    v7 = (const char *)glf::fs2::Path::c_str(a2);
    v6 = rmdir(v7);
  }
  else
  {
    if ( v11[0] != 2 )
    {
      *(uint32_t *)__errno() = 2;
      v9 = true;
      v8 = 1;
      goto LABEL_4;
    }
    filename = (const char *)glf::fs2::Path::c_str(a2);
    v6 = remove(filename);
  }
  v8 = v6 == 0;
  v9 = v6 == 0;
LABEL_4:
  glf::fs2::Path::Construct((glf::fs2::Path::Self *)v10);
  glf::fs2::FileSystemPosix::CheckLastError(self, "Remove", v8);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v10);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v13);
  v2 = (uint32_t *)v12;
  if ( v12 != 0 )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)(v12 + 4), 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v2, 8);
      G4_VCALL<void>(v2, 16);
    }
    else
    {
      v3 = v2[1];
      _mm_mfence();
      if ( v3 == 1 )
        G4_VCALL<void>(v2, 12);
    }
  }
  return v9;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystemPosix::Copy  (binary VA: 0xca3b40)
// Original: glf::fs2::FileSystemPosix::Copy
// ----------------------------------------------------------------------------
bool glf::fs2::FileSystemPosix::Copy(pthread_mutex_t **self, const glf::fs2::Path::Self *a2, const glf::fs2::Path::Self *a3, bool a4)
{
  pthread_mutex_t **v4;
  glf::fs2::Path::Self *v5;
  char v6;
  uint32_t *v7;
  int v8;
  int v10;
  const glf::fs2::Path::Self *v11;
  const glf::fs2::Path::Self *v12;
  char *v13;
  char *v14;
  int v15;
  glf::fs2::Path::Self *v16;
  int v17;
  typedef char *_g4_t_fd;
  typedef int _g4_t_fda;
  typedef glf::fs2::Path::Self *_g4_t_v20;
  typedef bool _g4_t_v21;
  typedef void (*_g4_t_kind)(pthread_mutex_t **, uint8_t *, uint8_t *, int);
  typedef bool _g4_t_in_fd;
  typedef int _g4_t_in_fda;
  typedef const glf::fs2::Path::Self *_g4_t_v25;
  typedef uint16_t _g4_t_v26[3];
  typedef int _g4_t_v27[2];
  typedef uint8_t _g4_t_v28[8];
  typedef int _g4_t_v29[2];
  typedef uint8_t _g4_t_v30[8];
  typedef uint8_t _g4_t_v31[8];
  typedef uint8_t _g4_t_v32[8];
  typedef size_t _g4_t_v33[5];
  typedef int _g4_t_v34;
  typedef uint8_t _g4_t_v35[16];
  typedef glf::fs2::FileSystemPosix::Self **_g4_t_v36;
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (8u + sizeof(_g4_t_fd)) > _g4_s0 ? (8u + sizeof(_g4_t_fd)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_fda)) > _g4_s1 ? (8u + sizeof(_g4_t_fda)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v20)) > _g4_s2 ? (12u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v21)) > _g4_s3 ? (16u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_kind)) > _g4_s4 ? (32u + sizeof(_g4_t_kind)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_in_fd)) > _g4_s5 ? (40u + sizeof(_g4_t_in_fd)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_in_fda)) > _g4_s6 ? (40u + sizeof(_g4_t_in_fda)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v25)) > _g4_s7 ? (44u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (62u + sizeof(_g4_t_v26)) > _g4_s8 ? (62u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v27)) > _g4_s9 ? (68u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v28)) > _g4_s10 ? (76u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v29)) > _g4_s11 ? (84u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (92u + sizeof(_g4_t_v30)) > _g4_s12 ? (92u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v31)) > _g4_s13 ? (100u + sizeof(_g4_t_v31)) : _g4_s13,
    _g4_s15 = (108u + sizeof(_g4_t_v32)) > _g4_s14 ? (108u + sizeof(_g4_t_v32)) : _g4_s14,
    _g4_s16 = (116u + sizeof(_g4_t_v33)) > _g4_s15 ? (116u + sizeof(_g4_t_v33)) : _g4_s15,
    _g4_s17 = (136u + sizeof(_g4_t_v34)) > _g4_s16 ? (136u + sizeof(_g4_t_v34)) : _g4_s16,
    _g4_s18 = (168u + sizeof(_g4_t_v35)) > _g4_s17 ? (168u + sizeof(_g4_t_v35)) : _g4_s17,
    _g4_s19 = (184u + sizeof(_g4_t_v36)) > _g4_s18 ? (184u + sizeof(_g4_t_v36)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_fd &fd = *reinterpret_cast<_g4_t_fd *>(_g4_sf + 8u);
  _g4_t_fda &fda = *reinterpret_cast<_g4_t_fda *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_kind &kind = *reinterpret_cast<_g4_t_kind *>(_g4_sf + 32u);
  _g4_t_in_fd &in_fd = *reinterpret_cast<_g4_t_in_fd *>(_g4_sf + 40u);
  _g4_t_in_fda &in_fda = *reinterpret_cast<_g4_t_in_fda *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 62u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 68u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 76u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 84u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 92u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 100u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 108u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 116u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 136u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 168u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 184u);

  v36 = (glf::fs2::FileSystemPosix::Self **)&self;
  v4 = self;
  v5 = (glf::fs2::Path::Self *)(a2);
  v25 = a3;
  in_fd = a4;
  glf::fs2::FileSystem::GetStatus((glf::fs2::FileSystem::Self *)v33, (const glf::fs2::Path::Self *)self, a2);
  if ( v33[0] == 2 )
  {
    v13 = (char *)glf::fs2::Path::c_str(v5);
    in_fda = glf::io2::FilePosix::OpenFileDesc(v13, 1);
    v14 = (char *)glf::fs2::Path::c_str(v25);
    v15 = glf::io2::FilePosix::OpenFileDesc(v14, 10);
    if ( v15 <= 0 || in_fda <= 0 )
    {
      v6 = 0;
      v21 = false;
    }
    else
    {
      fda = v15;
      v21 = sendfile(v15, in_fda, nullptr, v33[3]) >= 0;
      close(fda);
      close(in_fda);
      v6 = v21;
    }
  }
  else if ( v33[0] == 3 )
  {
    v6 = (((int (*)(pthread_mutex_t **, const glf::fs2::Path::Self *))(intptr_t)(((uintptr_t *)(*v4))[6])))(v4, v25);
    v21 = v6;
    if ( in_fd )
    {
      v6 = 0;
      if ( v21 )
      {
        glf::fs2::FileSystem::OpenDir((glf::Self **)&v26[1], v4, v5, 7, 0);
        v10 = *(uint32_t *)&v26[1];
        if ( *(uint32_t *)&v26[1] != 0 )
        {
          while ( G4_VCALL<uint8_t>(v10, 24) != 0 )
          {
            fd = (char *)(*(int (**)(uint32_t))(**(uint32_t **)&v26[1] + 20))(*(uint32_t *)&v26[1]);
            kind = ((void (*)(pthread_mutex_t **, uint8_t *, uint8_t *, int))(intptr_t)(((uintptr_t *)(*v4))[9]));
            g4_std::string::construct_from_cstr((int)(uintptr_t)(v29), fd, (int)(uintptr_t)(v26));
            v29[1] = 0;
            glf::fs2::Path::Init((glf::fs2::Path::Self *)v29);
            glf::fs2::Path::Construct((glf::fs2::Path::Self *)v31, v25);
            v11 = (const glf::fs2::Path::Self *)glf::fs2::Path::opDivAssign((glf::fs2::Path::Self *)v31, (const glf::fs2::Path::Self *)v29);
            glf::fs2::Path::Construct((glf::fs2::Path::Self *)v30, v11);
            glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v31);
            g4_std::string::construct_from_cstr((int)(uintptr_t)(v27), fd, (int)(uintptr_t)(v26) + 1);
            v27[1] = 0;
            glf::fs2::Path::Init((glf::fs2::Path::Self *)v27);
            glf::fs2::Path::Construct((glf::fs2::Path::Self *)v32, v5);
            v12 = (const glf::fs2::Path::Self *)glf::fs2::Path::opDivAssign((glf::fs2::Path::Self *)v32, (const glf::fs2::Path::Self *)v27);
            glf::fs2::Path::Construct((glf::fs2::Path::Self *)v28, v12);
            glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v32);
            kind(v4, v28, v30, 1);
            glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v28);
            glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v27);
            glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v30);
            glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v29);
            glf::fs2::Dir::MoveNext(*(glf::fs2::Dir::Self **)&v26[1]);
            v10 = *(uint32_t *)&v26[1];
            if ( *(uint32_t *)&v26[1] == 0 )
              goto LABEL_15;
          }
          v16 = *(glf::fs2::Path::Self **)&v26[1];
          if ( *(uint32_t *)&v26[1] != 0 )
          {
            if ( __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v26[1] + 4), 0xFFFFFFFF) == 1 )
            {
              v20 = v16;
              G4_VCALL<void>(v16, 8);
              G4_VCALL<void>(v20, 16);
              v6 = 1;
            }
            else
            {
              v17 = *((uint32_t *)v16 + 1);
              v6 = 1;
              _mm_mfence();
              if ( v17 == 1 )
              {
                G4_VCALL<void>(v16, 12);
                v6 = 1;
              }
            }
          }
          else
          {
            v6 = 1;
          }
        }
        else
        {
LABEL_15:
          v6 = v21;
        }
      }
    }
  }
  else
  {
    *(uint32_t *)__errno() = 2;
    v21 = false;
    v6 = 0;
  }
  glf::fs2::FileSystemPosix::CheckLastError((glf::fs2::FileSystemPosix::Self *)v4, "Copy", v6);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v35);
  v7 = (uint32_t *)v34;
  if ( v34 != 0 )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)(v34 + 4), 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v7, 8);
      G4_VCALL<void>(v7, 16);
    }
    else
    {
      v8 = v7[1];
      _mm_mfence();
      if ( v8 == 1 )
        G4_VCALL<void>(v7, 12);
    }
  }
  return v21;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystemPosix::Remove  (binary VA: 0xca3fc0)
// Original: glf::fs2::FileSystemPosix::Remove
// ----------------------------------------------------------------------------
int glf::fs2::FileSystemPosix::Remove(pthread_mutex_t **self, const glf::fs2::Path::Self *a2, bool a3)
{
  pthread_mutex_t **v3;
  glf::fs2::Path::Self *v4;
  uint32_t *v5;
  int v6;
  const char *v8;
  const char *v9;
  char *v10;
  const glf::fs2::Path::Self *v11;
  glf::fs2::Path::Self *v12;
  int v13;
  typedef glf::fs2::Path::Self *_g4_t_v14;
  typedef bool _g4_t_v15;
  typedef bool _g4_t_v16;
  typedef uint8_t _g4_t_v17;
  typedef int (*_g4_t_owner)(pthread_mutex_t **, uint8_t *, int);
  typedef uint8_t _g4_t_v19[5];
  typedef int _g4_t_v20[2];
  typedef uint8_t _g4_t_v21[8];
  typedef uint8_t _g4_t_v22[8];
  typedef uint8_t _g4_t_v23[8];
  typedef uint32_t _g4_t_v24[5];
  typedef int _g4_t_v25;
  typedef uint32_t _g4_t_v26[8];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_v14)) > _g4_s0 ? (4u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v15)) > _g4_s1 ? (8u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v16)) > _g4_s2 ? (12u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v17)) > _g4_s3 ? (12u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_owner)) > _g4_s4 ? (12u + sizeof(_g4_t_owner)) : _g4_s4,
    _g4_s6 = (31u + sizeof(_g4_t_v19)) > _g4_s5 ? (31u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v20)) > _g4_s6 ? (36u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v21)) > _g4_s7 ? (44u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v22)) > _g4_s8 ? (52u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v23)) > _g4_s9 ? (60u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v24)) > _g4_s10 ? (68u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (88u + sizeof(_g4_t_v25)) > _g4_s11 ? (88u + sizeof(_g4_t_v25)) : _g4_s11,
    _g4_s13 = (120u + sizeof(_g4_t_v26)) > _g4_s12 ? (120u + sizeof(_g4_t_v26)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_owner &owner = *reinterpret_cast<_g4_t_owner *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 31u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 52u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 68u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 88u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 120u);

  v26[4] = (uint32_t)(uintptr_t)(&self);
  v3 = self;
  v4 = (glf::fs2::Path::Self *)(a2);
  v16 = a3;
  glf::fs2::FileSystem::GetStatus((glf::fs2::FileSystem::Self *)v24, (const glf::fs2::Path::Self *)self, a2);
  if ( v24[0] == 3 )
  {
    if ( v16 )
    {
      glf::fs2::FileSystem::OpenDir((glf::Self **)&v19[1], v3, v4, 7, 0);
      while ( *(uint32_t *)&v19[1] != 0 )
      {
        if ( (*(uint8_t (**)(uint32_t))(**(uint32_t **)&v19[1] + 24))(*(uint32_t *)&v19[1]) == 0 )
        {
          v17 = 1;
LABEL_17:
          v12 = *(glf::fs2::Path::Self **)&v19[1];
          if ( *(uint32_t *)&v19[1] != 0 )
          {
            if ( __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v19[1] + 4), 0xFFFFFFFF) == 1 )
            {
              v14 = v12;
              G4_VCALL<void>(v12, 8);
              G4_VCALL<void>(v14, 16);
            }
            else
            {
              v13 = *((uint32_t *)v12 + 1);
              _mm_mfence();
              if ( v13 == 1 )
                G4_VCALL<void>(v12, 12);
            }
          }
          v15 = false;
          if ( v17 == 0 )
            goto LABEL_4;
          break;
        }
        owner = ((int (*)(pthread_mutex_t **, uint8_t *, int))(intptr_t)(((uintptr_t *)(*v3))[8]));
        v10 = (char *)(*(int (**)(uint32_t))(**(uint32_t **)&v19[1] + 20))(*(uint32_t *)&v19[1]);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(v20), v10, (int)(uintptr_t)(v19));
        v20[1] = 0;
        glf::fs2::Path::Init((glf::fs2::Path::Self *)v20);
        glf::fs2::Path::Construct((glf::fs2::Path::Self *)v23, v4);
        v11 = (const glf::fs2::Path::Self *)glf::fs2::Path::opDivAssign((glf::fs2::Path::Self *)v23, (const glf::fs2::Path::Self *)v20);
        glf::fs2::Path::Construct((glf::fs2::Path::Self *)v21, v11);
        glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v23);
        v17 = owner(v3, v21, 1);
        glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v21);
        glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v20);
        glf::fs2::Dir::MoveNext(*(glf::fs2::Dir::Self **)&v19[1]);
        if ( v17 == 0 )
          goto LABEL_17;
      }
    }
    v8 = (const char *)glf::fs2::Path::c_str(v4);
    v17 = rmdir(v8) == 0;
    v15 = v17;
  }
  else if ( v24[0] == 2 )
  {
    v9 = (const char *)glf::fs2::Path::c_str(v4);
    v17 = remove(v9) == 0;
    v15 = v17;
  }
  else
  {
    *(uint32_t *)__errno() = 2;
    v15 = false;
    v17 = 0;
  }
LABEL_4:
  glf::fs2::Path::Construct((glf::fs2::Path::Self *)v22);
  glf::fs2::FileSystemPosix::CheckLastError((glf::fs2::FileSystemPosix::Self *)v3, "Remove", v15);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v22);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v26);
  v5 = (uint32_t *)v25;
  if ( v25 != 0 )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)(v25 + 4), 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v5, 8);
      G4_VCALL<void>(v5, 16);
    }
    else
    {
      v6 = v5[1];
      _mm_mfence();
      if ( v6 == 1 )
        G4_VCALL<void>(v5, 12);
    }
  }
  return v17;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileSystemPosix::GetStatusV  (binary VA: 0xca4310)
// Original: glf::fs2::FileSystemPosix::GetStatusV
// ----------------------------------------------------------------------------
glf::fs2::FileSystemPosix::Self * glf::fs2::FileSystemPosix::GetStatusV(glf::fs2::FileSystemPosix::Self *self, const glf::fs2::Path::Self *a2, glf::fs2::Path::Self *a3)
{
  char *Metrics;
  const char *v5;
  char *v6;
  bool v7;
  volatile int32_t *v8;
  int v9;
  int v10;
  int16_t st_mode;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  uint64_t v30; // xmm0_8
  uint64_t v31; // xmm0_8
  struct stat buf;
  typedef volatile int32_t *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef uint8_t _g4_t_v34[8];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (8u + sizeof(_g4_t_v32)) > _g4_s0 ? (8u + sizeof(_g4_t_v32)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v33)) > _g4_s1 ? (16u + sizeof(_g4_t_v33)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v34)) > _g4_s2 ? (32u + sizeof(_g4_t_v34)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 8u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 16u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 32u);

  if ( (uint8_t)glf::fs2::Path::Empty(a3) != 0 )
  {
    v33 = stat(".", &buf);
  }
  else
  {
    v5 = (const char *)glf::fs2::Path::c_str(a3);
    v33 = stat(v5, &buf);
  }
  glf::fs2::Path::Construct((glf::fs2::Path::Self *)v34);
  glf::fs2::FileSystemPosix::CheckLastError((glf::fs2::FileSystemPosix::Self *)(a2), "GetStatusV", v33 == 0);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v34);
  Metrics = glf::fs2::FileSystem::GetMetrics((glf::fs2::FileSystem::Self *)(a2));
  ++*(uint32_t *)Metrics;
  *(uint32_t *)self = 1;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0xFFFF;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = -1;
  *((uint32_t *)self + 3) = -1;
  *((uint32_t *)self + 4) = -1;
  *((uint32_t *)self + 7) = -1;
  *((uint32_t *)self + 9) = -1;
  *((uint32_t *)self + 11) = -1;
  *((uint32_t *)self + 8) = -1;
  *((uint32_t *)self + 10) = -1;
  *((uint32_t *)self + 12) = -1;
  glf::fs2::Path::Construct((glf::fs2::FileSystemPosix::Self *)((char *)self + 52));
  if ( v33 != 0 )
    return self;
  v6 = glf::fs2::FileSystem::GetMetrics((glf::fs2::FileSystem::Self *)(a2));
  ++*((uint32_t *)v6 + 1);
  *((uint32_t *)self + 3) = buf.st_size;
  v7 = (buf.st_mode & 0xF000) == 0x4000;
  *((uint32_t *)self + 4) = buf.st_blksize;
  *(uint32_t *)self = v7 + 2;
  if ( a2 != nullptr )
  {
    __sync_add_and_fetch((volatile int32_t *)a2 + 1, 1u);
    __sync_add_and_fetch((volatile int32_t *)a2 + 1, 1u);
  }
  v8 = *((volatile int32_t **)self + 5);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(a2);
  if ( v8 != nullptr )
  {
    if ( __sync_fetch_and_add(v8 + 1, 0xFFFFFFFF) == 1 )
    {
      v32 = v8;
      G4_VCALL<void>(v8, 8);
      G4_VCALL<void>(v32, 16);
    }
    else
    {
      v9 = *((uint32_t *)v8 + 1);
      _mm_mfence();
      if ( v9 == 1 )
        G4_VCALL<void>(v8, 12);
    }
  }
  if ( a2 != nullptr )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)a2 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(a2, 8);
      G4_VCALL<void>(a2, 16);
    }
    else
    {
      v10 = *((uint32_t *)a2 + 1);
      _mm_mfence();
      if ( v10 == 1 )
        G4_VCALL<void>(a2, 12);
    }
  }
  glf::fs2::Path::opAssign((glf::fs2::FileSystemPosix::Self *)((char *)self + 52), a3);
  st_mode = buf.st_mode;
  v12 = 7;
  v13 = buf.st_mode & 0x1C0;
  *((uint32_t *)self + 6) = 1;
  if ( v13 != 448 )
    v12 = 0;
  v14 = (4 * ((st_mode & 0x40) != 0)) | (2 * ((st_mode & 0x80u) != 0)) | ((st_mode & 0x100) != 0) | v12;
  v15 = 112;
  if ( (st_mode & 0x38) != 0x38 )
    v15 = 0;
  v16 = v15 | v14;
  v17 = 16;
  if ( (st_mode & 0x20) == 0 )
    v17 = 0;
  v18 = v17 | v16;
  v19 = 32;
  if ( (st_mode & 0x10) == 0 )
    v19 = 0;
  v20 = v19 | v18;
  v21 = 64;
  if ( (st_mode & 8) == 0 )
    v21 = 0;
  v22 = v21 | v20;
  v23 = 1792;
  if ( (st_mode & 7) != 7 )
    v23 = 0;
  v24 = v23 | v22;
  v25 = 256;
  if ( (st_mode & 4) == 0 )
    v25 = 0;
  v26 = v25 | v24;
  v27 = 512;
  if ( (st_mode & 2) == 0 )
    v27 = 0;
  v28 = v27 | v26;
  v29 = 1024;
  if ( (st_mode & 1) == 0 )
    v29 = 0;
  *((uint32_t *)self + 8) = 0;
  v30 =g4_m128_lane<uint64_t>(_mm_cvtsi32_si128(buf.st_mtim.tv_sec), 0);
  *((uint32_t *)self + 2) = v29 | v28;
  *(uint64_t *)((char *)self + 44) = v30;
  v31 =g4_m128_lane<uint64_t>(_mm_cvtsi32_si128(buf.st_ctim.tv_sec), 0);
  *((uint32_t *)self + 7) = (uint32_t)buf.st_ino;
  *(uint64_t *)((char *)self + 36) = v31;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::apple::GetSandboxDirectory  (binary VA: 0xca4660)
// Original: glf::fs2::apple::GetSandboxDirectory
// ----------------------------------------------------------------------------
glf::fs2::apple::Self * glf::fs2::apple::GetSandboxDirectory(glf::fs2::apple::Self *self)
{
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(self), "..", (int)(uintptr_t)(&v2));
  *((uint32_t *)self + 1) = 0;
  glf::fs2::Path::Init(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::apple::GetDocumentsDirectory  (binary VA: 0xca46c0)
// Original: glf::fs2::apple::GetDocumentsDirectory
// ----------------------------------------------------------------------------
glf::fs2::apple::Self * glf::fs2::apple::GetDocumentsDirectory(glf::fs2::apple::Self *self)
{
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(self), "../Documents", (int)(uintptr_t)(&v2));
  *((uint32_t *)self + 1) = 0;
  glf::fs2::Path::Init(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::apple::GetLibraryDirectory  (binary VA: 0xca4720)
// Original: glf::fs2::apple::GetLibraryDirectory
// ----------------------------------------------------------------------------
glf::fs2::apple::Self * glf::fs2::apple::GetLibraryDirectory(glf::fs2::apple::Self *self)
{
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(self), "../Library", (int)(uintptr_t)(&v2));
  *((uint32_t *)self + 1) = 0;
  glf::fs2::Path::Init(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::apple::GetLibraryCachesDirectory  (binary VA: 0xca4780)
// Original: glf::fs2::apple::GetLibraryCachesDirectory
// ----------------------------------------------------------------------------
glf::fs2::apple::Self * glf::fs2::apple::GetLibraryCachesDirectory(glf::fs2::apple::Self *self)
{
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(self), "../Library/Caches", (int)(uintptr_t)(&v2));
  *((uint32_t *)self + 1) = 0;
  glf::fs2::Path::Init(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::apple::GetCurrentWorkingDirectory  (binary VA: 0xca47e0)
// Original: glf::fs2::apple::GetCurrentWorkingDirectory
// ----------------------------------------------------------------------------
glf::fs2::apple::Self * glf::fs2::apple::GetCurrentWorkingDirectory(glf::fs2::apple::Self *self)
{
  glf::fs2::android::GetCurrentWorkingDirectory((glf::fs2::android::Self *)(self));
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::apple::GetExecutableDirectory  (binary VA: 0xca4820)
// Original: glf::fs2::apple::GetExecutableDirectory
// ----------------------------------------------------------------------------
glf::fs2::apple::Self * glf::fs2::apple::GetExecutableDirectory(glf::fs2::apple::Self *self)
{
  glf::fs2::android::GetExecutableDirectory((glf::fs2::android::Self *)(self));
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::apple::GetExecutable  (binary VA: 0xca4860)
// Original: glf::fs2::apple::GetExecutable
// ----------------------------------------------------------------------------
glf::fs2::apple::Self * glf::fs2::apple::GetExecutable(glf::fs2::apple::Self *self)
{
  glf::fs2::android::GetExecutable((glf::fs2::android::Self *)(self));
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::apple::GetTempDirectory  (binary VA: 0xca48a0)
// Original: glf::fs2::apple::GetTempDirectory
// ----------------------------------------------------------------------------
glf::fs2::apple::Self * glf::fs2::apple::GetTempDirectory(glf::fs2::apple::Self *self)
{
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(self), "../tmp", (int)(uintptr_t)(&v2));
  *((uint32_t *)self + 1) = 0;
  glf::fs2::Path::Init(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::apple::InitDirectories  (binary VA: 0xca4900)
// Original: glf::fs2::apple::InitDirectories
// ----------------------------------------------------------------------------
void glf::fs2::apple::InitDirectories()
{
  volatile int32_t *v0;
  void (*v1)(volatile int32_t *, uint8_t *);
  volatile int32_t *v2;
  void (*v3)(volatile int32_t *, uint8_t *);
  volatile int32_t *v4;
  void (*v5)(volatile int32_t *, uint8_t *);
  volatile int32_t *v6;
  void (*v7)(volatile int32_t *, uint8_t *);
  volatile int32_t *v8;
  int v9;
  typedef volatile int32_t *_g4_t_v10;
  typedef uint8_t _g4_t_v11[8];
  typedef uint8_t _g4_t_v12[8];
  typedef uint8_t _g4_t_v13[8];
  typedef uint8_t _g4_t_v14[36];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v11)) > _g4_s1 ? (16u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v12)) > _g4_s2 ? (24u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v13)) > _g4_s3 ? (32u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v14)) > _g4_s4 ? (40u + sizeof(_g4_t_v14)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 40u);

  glf::fs2::FileSystem::Get((glf::fs2::FileSystem::Self *)&v10);
  v0 = v10;
  v1 = *(void (**)(volatile int32_t *, uint8_t *))(*v10 + 24);
  glf::fs2::apple::GetDocumentsDirectory((glf::fs2::apple::Self *)v11);
  v1(v0, v11);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v11);
  v2 = v10;
  v3 = *(void (**)(volatile int32_t *, uint8_t *))(*v10 + 24);
  glf::fs2::apple::GetLibraryDirectory((glf::fs2::apple::Self *)v12);
  v3(v2, v12);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v12);
  v4 = v10;
  v5 = *(void (**)(volatile int32_t *, uint8_t *))(*v10 + 24);
  glf::fs2::apple::GetLibraryCachesDirectory((glf::fs2::apple::Self *)v13);
  v5(v4, v13);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v13);
  v6 = v10;
  v7 = *(void (**)(volatile int32_t *, uint8_t *))(*v10 + 24);
  glf::fs2::apple::GetTempDirectory((glf::fs2::apple::Self *)v14);
  v7(v6, v14);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v14);
  v8 = v10;
  if ( v10 != nullptr )
  {
    if ( __sync_fetch_and_add(v10 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v8, 8);
      G4_VCALL<void>(v8, 16);
    }
    else
    {
      v9 = *((uint32_t *)v8 + 1);
      _mm_mfence();
      if ( v9 == 1 )
        G4_VCALL<void>(v8, 12);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::DirectoryPosix::IsValid  (binary VA: 0xca4a60)
// Original: glf::fs2::DirectoryPosix::IsValid
// ----------------------------------------------------------------------------
bool glf::fs2::DirectoryPosix::IsValid(glf::fs2::DirectoryPosix::Self *self)
{
  return *((uint32_t *)self + 279) != 0;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::SystemErrorCategoryPosix::GetName  (binary VA: 0xca4a70)
// Original: glf::fs2::SystemErrorCategoryPosix::GetName
// ----------------------------------------------------------------------------
const char * glf::fs2::SystemErrorCategoryPosix::GetName()
{
  return "FileSystemPosixError";
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::SystemErrorCategoryPosix::Destroy  (binary VA: 0xca4a90)
// Original: glf::fs2::SystemErrorCategoryPosix::~SystemErrorCategoryPosix
// ----------------------------------------------------------------------------
void glf::fs2::SystemErrorCategoryPosix::Destroy(glf::fs2::SystemErrorCategoryPosix::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206DD70);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::SystemErrorCategoryPosix::Destroy_eaca4ab0  (binary VA: 0xca4ab0)
// Original: glf::fs2::SystemErrorCategoryPosix::~SystemErrorCategoryPosix
// ----------------------------------------------------------------------------
void glf::fs2::SystemErrorCategoryPosix::Destroy_eaca4ab0(glf::fs2::SystemErrorCategoryPosix::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206DD70);
  opDelete(self);
}



// ============================================================================
// Address:   0xca4b10 (size: 64 bytes)
// Symbol:    _ZN3glf3fs214DirectoryPosix8FindNextEv
// Demangled: glf::fs2::DirectoryPosix::FindNext(void)
// ============================================================================
dirent *glf::fs2::DirectoryPosix::FindNext(glf::fs2::DirectoryPosix::Self *self)
{
  struct dirent *result;

  result = *((struct dirent **)self + 278);
  if ( result != nullptr )
  {
    result = readdir(*((DIR **)self + 278));
    *((uint32_t *)self + 279) = (uint32_t)(uintptr_t)(result);
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: glf::fs2::DirectoryPosix::Destroy  (binary VA: 0xca4b50)
// Original: glf::fs2::DirectoryPosix::~DirectoryPosix
// ----------------------------------------------------------------------------
void glf::fs2::DirectoryPosix::Destroy(DIR **self)
{
  *self = (DIR *)((uint32_t)(uintptr_t)&off_206DDC8);
  if ( *(self + 278) != nullptr )
    closedir(*(self + 278));
  glf::fs2::Dir::Destroy((glf::fs2::Dir::Self *)self);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::SystemErrorCategoryPosix::GetMsg  (binary VA: 0xca4ba0)
// Original: glf::fs2::SystemErrorCategoryPosix::GetMsg
// ----------------------------------------------------------------------------
glf::fs2::SystemErrorCategoryPosix::Self * glf::fs2::SystemErrorCategoryPosix::GetMsg(glf::fs2::SystemErrorCategoryPosix::Self *self, int a2, const char *errnum, int a4)
{
  char *v4;
  char v6[1025];

  v4 = strerror((int)(uintptr_t)(errnum));
  sprintf(&v6[1], "%s: %s", a4, v4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(self), &v6[1], (int)(uintptr_t)(v6));
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::SystemErrorCategoryPosix::GetSystemError  (binary VA: 0xca4c40)
// Original: glf::fs2::SystemErrorCategoryPosix::GetSystemError
// ----------------------------------------------------------------------------
int glf::fs2::SystemErrorCategoryPosix::GetSystemError(glf::fs2::SystemErrorCategoryPosix::Self *self, glf::Self *a2)
{
  int v3;

  return glf::SystemFromPosix(a2, v3);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::DirectoryPosix::Destroy_eaca4c70  (binary VA: 0xca4c70)
// Original: glf::fs2::DirectoryPosix::~DirectoryPosix
// ----------------------------------------------------------------------------
void glf::fs2::DirectoryPosix::Destroy_eaca4c70(DIR **self)
{
  *self = (DIR *)((uint32_t)(uintptr_t)&off_206DDC8);
  if ( *(self + 278) != nullptr )
    closedir(*(self + 278));
  glf::fs2::Dir::Destroy((glf::fs2::Dir::Self *)self);
  glf::MemObject::opDelete((glf::Self *)self);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::DirectoryPosix::FillData  (binary VA: 0xca4cd0)
// Original: glf::fs2::DirectoryPosix::FillData
// ----------------------------------------------------------------------------
void glf::fs2::DirectoryPosix::FillData(glf::fs2::DirectoryPosix::Self *self)
{
  const glf::fs2::Path::Self *v1;
  const char *file;
  long st_blksize;
  char v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  struct stat buf;
  typedef glf::fs2::Path::Self *_g4_t_v23;
  typedef int _g4_t_v24[2];
  typedef int _g4_t_v25[2];
  typedef uint8_t _g4_t_v26[8];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (8u + sizeof(_g4_t_v23)) > _g4_s0 ? (8u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (23u + sizeof(_g4_t_v24)) > _g4_s1 ? (23u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v25)) > _g4_s2 ? (32u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v26)) > _g4_s3 ? (40u + sizeof(_g4_t_v26)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 23u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);

  glf::fs2::FileEntry::Clear((glf::fs2::DirectoryPosix::Self *)((char *)self + 28));
  if ( G4_VCALL<uint8_t>(self, 24) != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v25), (char *)(*((uint32_t *)self + 279) + 19), (int)(uintptr_t)(v24));
    v25[1] = 0;
    glf::fs2::Path::Init((glf::fs2::Path::Self *)v25);
    glf::fs2::Path::Construct((glf::fs2::Path::Self *)v26, (glf::fs2::DirectoryPosix::Self *)((char *)self + 12));
    v1 = (const glf::fs2::Path::Self *)glf::fs2::Path::opDivAssign((glf::fs2::Path::Self *)v26, (const glf::fs2::Path::Self *)v25);
    glf::fs2::Path::Construct((glf::fs2::Path::Self *)((char *)v24 + 1), v1);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v26);
    file = (const char *)glf::fs2::Path::c_str((glf::fs2::Path::Self *)((char *)v24 + 1));
    v23 = (glf::fs2::Path::Self *)stat(file, &buf);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)((char *)v24 + 1));
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v25);
    if ( v23 == nullptr )
    {
      strcpy((char *)self + 28, (const char *)(*((uint32_t *)self + 279) + 19));
      st_blksize = buf.st_blksize;
      v4 = *(uint8_t *)(*((uint32_t *)self + 279) + 18);
      *((uint32_t *)self + 266) = buf.st_size;
      *((uint32_t *)self + 267) = st_blksize;
      *((uint32_t *)self + 269) = 1;
      *((uint64_t *)self + 137) =g4_m128_lane<uint64_t>(_mm_cvtsi32_si128(buf.st_mtim.tv_sec), 0);
      *((uint32_t *)self + 263) = 3 - ((v4 & 4) == 0);
      v5 = 7;
      *((uint64_t *)self + 136) =g4_m128_lane<uint64_t>(_mm_cvtsi32_si128(buf.st_ctim.tv_sec), 0);
      *((uint32_t *)self + 270) = *((uint32_t *)self + 272);
      v6 = buf.st_mode & 0x1C0;
      *((uint32_t *)self + 271) = *((uint32_t *)self + 273);
      if ( v6 != 448 )
        v5 = 0;
      v7 = (4 * ((buf.st_mode & 0x40) != 0)) | (2 * (SLOBYTE(buf.st_mode) < 0)) | ((buf.st_mode & 0x100) != 0) | v5;
      v8 = 112;
      if ( (buf.st_mode & 0x38) != 0x38 )
        v8 = 0;
      v9 = v8 | v7;
      v10 = 16;
      if ( (buf.st_mode & 0x20) == 0 )
        v10 = 0;
      v11 = v10 | v9;
      v12 = 32;
      if ( (buf.st_mode & 0x10) == 0 )
        v12 = 0;
      v13 = v12 | v11;
      v14 = 64;
      if ( (buf.st_mode & 8) == 0 )
        v14 = 0;
      v15 = v14 | v13;
      v16 = 1792;
      if ( (buf.st_mode & 7) != 7 )
        v16 = 0;
      v17 = v16 | v15;
      v18 = 256;
      if ( (buf.st_mode & 4) == 0 )
        v18 = 0;
      v19 = v18 | v17;
      v20 = 512;
      if ( (buf.st_mode & 2) == 0 )
        v20 = 0;
      v21 = v20 | v19;
      v22 = 1024;
      if ( (buf.st_mode & 1) == 0 )
        v22 = 0;
      *((uint32_t *)self + 265) = v22 | v21;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::Destroy  (binary VA: 0xca4f60)
// Original: glf::fs2::IndexData::~IndexData
// ----------------------------------------------------------------------------
void glf::fs2::IndexData::Destroy(glf::Self **self)
{
  glf::Self *v1;
  glf::Self *v2;
  glf::Self *v3;

  *self = (glf::Self *)((uint32_t)(uintptr_t)&off_206DE28);
  if ( *(self + 97) != nullptr )
    glf::Free(*(self + 97));
  if ( *(self + 94) != nullptr )
    glf::Free(*(self + 94));
  if ( *(self + 91) != nullptr )
    glf::Free(*(self + 91));
  if ( *(self + 88) != nullptr )
    glf::Free(*(self + 88));
  if ( *(self + 85) != nullptr )
    glf::Free(*(self + 85));
  if ( *(self + 82) != nullptr )
    glf::Free(*(self + 82));
  if ( *(self + 79) != nullptr )
    glf::Free(*(self + 79));
  if ( *(self + 76) != nullptr )
    glf::Free(*(self + 76));
  if ( *(self + 73) != nullptr )
    glf::Free(*(self + 73));
  if ( *(self + 70) != nullptr )
    glf::Free(*(self + 70));
  if ( *(self + 67) != nullptr )
    glf::Free(*(self + 67));
  if ( *(self + 64) != nullptr )
    glf::Free(*(self + 64));
  if ( *(self + 61) != nullptr )
    glf::Free(*(self + 61));
  if ( *(self + 58) != nullptr )
    glf::Free(*(self + 58));
  v1 = *(self + 56);
  v2 = *(self + 55);
  if ( v1 != v2 )
  {
    do
    {
      v3 = v2;
      v2 = (glf::Self *)((char *)v2 + 8);
      glf::fs2::Path::Destroy(v3);
    }
    while ( v1 != v2 );
    v2 = *(self + 55);
  }
  if ( v2 != nullptr )
    glf::Free(v2);
  if ( *(self + 52) != nullptr )
    glf::Free(*(self + 52));
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)(self + 48));
  glf::fs2::FileSystem::Destroy((glf::fs2::FileSystem::Self *)self);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::Destroy_eaca50f0  (binary VA: 0xca50f0)
// Original: glf::fs2::IndexData::~IndexData
// ----------------------------------------------------------------------------
void glf::fs2::IndexData::Destroy_eaca50f0(glf::Self **self)
{
  glf::fs2::IndexData::Destroy(self);
  glf::MemObject::opDelete((glf::Self *)self);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::GetName  (binary VA: 0xca5800)
// Original: glf::fs2::IndexData::GetName
// ----------------------------------------------------------------------------
glf::fs2::IndexData::Self * glf::fs2::IndexData::GetName(glf::fs2::IndexData::Self *self, int a2)
{
  int v2;
  void *v3;
  typedef int _g4_t_v5;
  typedef uint32_t _g4_t_v6[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (10u + sizeof(_g4_t_v5)) > _g4_s0 ? (10u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 10u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  v2 = (int)(uintptr_t)(glf::fs2::Path::String((glf::fs2::Path::Self *)(a2 + 192)));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v6), "index.", (int)(uintptr_t)(&v5));
  g4_std::string::construct_copy(self, v6);
  g4_std::string::append_str(self, v2);
  v3 = (void *)(v6[0] - 12);
  if ( (uint32_t *)(v6[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v6[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::GetRoot  (binary VA: 0xca5d00)
// Original: glf::fs2::IndexData::GetRoot
// ----------------------------------------------------------------------------
void * glf::fs2::IndexData::GetRoot()
{
  if ( byte_20DF470 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20DF470) != 0 )
  {
    glf::fs2::Path::Construct((glf::fs2::Path::Self *)&unk_20DF478);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20DF470);
    __cxa_atexit((void (*)(void *))glf::fs2::Path::Destroy, &unk_20DF478, &unk_20D1280);
  }
  return &unk_20DF478;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::FindFsIdx  (binary VA: 0xca5d80)
// Original: glf::fs2::IndexData::FindFsIdx
// ----------------------------------------------------------------------------
unsigned int glf::fs2::IndexData::FindFsIdx(glf::fs2::IndexData::Self *self, glf::fs2::FileSystem::Self *a2)
{
  glf::fs2::FileSystem::Self **v2;
  glf::fs2::FileSystem::Self **v3;
  unsigned int result;
  glf::fs2::FileSystem::Self **v5;
  int v6;
  unsigned int v7;
  unsigned int v8;
  glf::fs2::FileSystem::Self **v9;
  glf::fs2::FileSystem::Self **v10;
  char *v11;
  glf::fs2::FileSystem::Self **v12;
  glf::fs2::FileSystem::Self **v13;
  glf::fs2::FileSystem::Self **v14;
  uint32_t *v15;
  glf::Self *v16;
  glf::fs2::FileSystem::Self **v17;
  unsigned int v18;
  int v19;
  unsigned int v20;
  glf::fs2::FileSystem::Self **v21;
  char *v22;
  glf::fs2::FileSystem::Self **v23;

  v2 = *((glf::fs2::FileSystem::Self ***)self + 52);
  v3 = *((glf::fs2::FileSystem::Self ***)self + 53);
  if ( v2 != v3 )
  {
    result = 0;
    if ( *v2 == a2 )
      return result;
    v5 = *((glf::fs2::FileSystem::Self ***)self + 52);
    while ( ++v5 != v3 )
    {
      if ( *v5 == a2 )
        return (unsigned int)((char *)v5 - (char *)v2) >> 2;
    }
  }
  if ( *((glf::fs2::FileSystem::Self ***)self + 54) == v3 )
  {
    v19 = 1;
    v8 = v3 - v2;
    v20 = v8;
    if ( v8 != 0 )
    {
      if ( v8 <= 2 * v8 && 2 * v8 <= 0x3FFFFFFF )
      {
        v19 = 2 * v8;
        v9 = (glf::fs2::FileSystem::Self **)glf::Alloc(8 * v8);
        goto LABEL_17;
      }
      v19 = -1;
    }
    v9 = (glf::fs2::FileSystem::Self **)glf::Alloc(v19 * 4);
LABEL_17:
    v23 = v9;
    v10 = v9;
    v17 = v9;
    v7 = (unsigned int)(uintptr_t)(v9 + 1);
    v11 = (char *)&v10[v20];
    if ( v11 != nullptr )
      *(uint32_t *)v11 = (uint32_t)(uintptr_t)(a2);
    v12 = *((glf::fs2::FileSystem::Self ***)self + 52);
    v21 = v12;
    if ( v3 != v12 )
    {
      v13 = v23;
      do
      {
        if ( v13 != nullptr )
          *v13 = *v12;
        ++v12;
        ++v13;
      }
      while ( v3 != v12 );
      v7 = (unsigned int)(uintptr_t)(&v23[((unsigned int)((char *)v3 - (char *)(v21 + 1)) >> 2) + 2]);
    }
    v22 = *((char **)self + 53);
    if ( v3 != (glf::fs2::FileSystem::Self **)v22 )
    {
      v14 = v3;
      v15 = (uint32_t *)v7;
      do
      {
        if ( v15 != nullptr )
          *v15 = (uint32_t)(uintptr_t)(*v14);
        ++v14;
        ++v15;
      }
      while ( v22 != (char *)v14 );
      v7 += 4 * ((unsigned int)(v22 - (char *)(v3 + 1)) >> 2) + 4;
    }
    v16 = *((glf::Self **)self + 52);
    if ( v16 != nullptr )
    {
      v18 = v7;
      glf::Free(v16);
      v7 = v18;
    }
    *((uint32_t *)self + 53) = v7;
    *((uint32_t *)self + 52) = (uint32_t)(uintptr_t)(v23);
    *((uint32_t *)self + 54) = (uint32_t)(uintptr_t)(&v23[v19]);
    return ((int)(v7 - (uint32_t)(uintptr_t)(v17)) >> 2) - 1;
  }
  v6 = 0;
  if ( v3 != nullptr )
  {
    *v3 = a2;
    v6 = *((uint32_t *)self + 53);
    v2 = *((glf::fs2::FileSystem::Self ***)self + 52);
  }
  v7 = v6 + 4;
  v17 = v2;
  *((uint32_t *)self + 53) = v7;
  return ((int)(v7 - (uint32_t)(uintptr_t)(v17)) >> 2) - 1;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::FindFsRootIdx  (binary VA: 0xca5f40)
// Original: glf::fs2::IndexData::FindFsRootIdx
// ----------------------------------------------------------------------------
unsigned int glf::fs2::IndexData::FindFsRootIdx(glf::fs2::Path::Self **self, const glf::fs2::Path::Self *a2)
{
  glf::fs2::IndexData::Self *v2;
  glf::fs2::Path::Self *v3;
  glf::fs2::Path::Self *v4;
  const glf::fs2::Path::Self *v6;
  glf::fs2::Path::Self *v7;
  glf::fs2::Path::Self *v8;
  unsigned int v9;
  glf::fs2::Path::Self *v10;
  glf::fs2::Path::Self *v11;
  glf::fs2::Path::Self *v12;
  const glf::fs2::Path::Self *v13;
  glf::fs2::Path::Self *v14;
  glf::fs2::Path::Self *v15;
  const glf::fs2::Path::Self *v16;
  glf::fs2::Path::Self *v17;
  glf::Self *v18;
  glf::fs2::Path::Self *v19;
  glf::fs2::Path::Self *v20;
  glf::fs2::Path::Self *v21;
  glf::fs2::Path::Self *v22;
  glf::fs2::Path::Self *v23;
  int v24;
  glf::fs2::Path::Self *v25;
  unsigned int v26;
  glf::fs2::IndexData::Self *v27;
  glf::Self **v28;

  v2 = (glf::fs2::IndexData::Self *)self;
  v3 = *(self + 55);
  v4 = *(self + 56);
  if ( v3 == v4 )
  {
LABEL_6:
    v6 = *(self + 57);
    v7 = v4;
    if ( v6 != v4 )
    {
      if ( v4 != nullptr )
      {
        glf::fs2::Path::Construct(v4, a2);
        v7 = *(self + 56);
      }
      v8 = (glf::fs2::Path::Self *)((char *)v7 + 8);
      *(self + 56) = v8;
      v21 = *(self + 55);
      return ((v8 - v21) >> 3) - 1;
    }
    v24 = 8;
    v9 = (v4 - *(self + 55)) >> 3;
    v26 = v9;
    if ( v9 != 0 )
    {
      if ( v9 <= 2 * v9 && 2 * v9 <= 0x1FFFFFFF )
      {
        v24 = 16 * v9;
        v10 = (glf::fs2::Path::Self *)glf::Alloc(16 * v9);
        goto LABEL_15;
      }
      v24 = -8;
    }
    v10 = (glf::fs2::Path::Self *)glf::Alloc(v24);
LABEL_15:
    v25 = v10;
    v11 = v10;
    v21 = v10;
    v8 = (glf::fs2::Path::Self *)((char *)v10 + 8);
    v12 = (glf::fs2::Path::Self *)((char *)v11 + 8 * v26);
    if ( v12 != nullptr )
    {
      v22 = v8;
      glf::fs2::Path::Construct(v12, a2);
      v8 = v22;
    }
    v13 = *(self + 55);
    if ( v6 != v13 )
    {
      v14 = v25;
      do
      {
        if ( v14 != nullptr )
          glf::fs2::Path::Construct(v14, v13);
        v13 = (const glf::fs2::Path::Self *)((char *)v13 + 8);
        v14 = (glf::fs2::Path::Self *)((char *)v14 + 8);
      }
      while ( v6 != v13 );
      v15 = v14;
      v2 = (glf::fs2::IndexData::Self *)self;
      v8 = (glf::fs2::Path::Self *)((char *)v15 + 8);
    }
    v16 = *((const glf::fs2::Path::Self **)v2 + 56);
    if ( v6 != v16 )
    {
      v27 = v2;
      v17 = v8;
      do
      {
        if ( v17 != nullptr )
          glf::fs2::Path::Construct(v17, v6);
        v6 = (const glf::fs2::Path::Self *)((char *)v6 + 8);
        v17 = (glf::fs2::Path::Self *)((char *)v17 + 8);
      }
      while ( v16 != v6 );
      v8 = v17;
      v2 = v27;
      v16 = *((const glf::fs2::Path::Self **)v27 + 56);
    }
    v18 = *((glf::Self **)v2 + 55);
    if ( v18 != (glf::Self *)(uintptr_t)(v16) )
    {
      v28 = (glf::Self **)v2;
      v19 = v8;
      do
      {
        v20 = (glf::fs2::Path::Self *)(v18);
        v18 = (glf::Self *)((char *)v18 + 8);
        glf::fs2::Path::Destroy(v20);
      }
      while ( v18 != (glf::Self *)(uintptr_t)(v16) );
      v8 = v19;
      v2 = (glf::fs2::IndexData::Self *)v28;
      v18 = v28[55];
    }
    if ( v18 != nullptr )
    {
      v23 = v8;
      glf::Free(v18);
      v8 = v23;
    }
    *((uint32_t *)v2 + 55) = (uint32_t)(uintptr_t)(v25);
    *((uint32_t *)v2 + 56) = (uint32_t)(uintptr_t)(v8);
    *((uint32_t *)v2 + 57) = (uint32_t)(uintptr_t)((char *)v25 + v24);
    return ((v8 - v21) >> 3) - 1;
  }
  while ( glf::fs2::Path::Compare(v3, a2) != 0 )
  {
    v3 = (glf::fs2::Path::Self *)((char *)v3 + 8);
    v4 = *(self + 56);
    if ( v3 == v4 )
      goto LABEL_6;
  }
  return (unsigned int)(v3 - *(self + 55)) >> 3;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::ResolveOffsets  (binary VA: 0xca6170)
// Original: glf::fs2::IndexData::ResolveOffsets
// ----------------------------------------------------------------------------
int glf::fs2::IndexData::ResolveOffsets()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::Construct  (binary VA: 0xca6180)
// Original: glf::fs2::IndexData::IndexData
// ----------------------------------------------------------------------------
glf::fs2::IndexData::Self * glf::fs2::IndexData::Construct(glf::fs2::IndexData::Self *self)
{
  glf::fs2::IndexData::Self *result;

  glf::fs2::FileSystem::Construct(self);
  *((uint8_t *)self + 189) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206DE28);
  result = (glf::fs2::IndexData::Self *)(glf::fs2::Path::Construct((glf::fs2::IndexData::Self *)((char *)self + 192)));
  *((uint32_t *)self + 50) = 0;
  *((uint32_t *)self + 51) = 0;
  *((uint32_t *)self + 52) = 0;
  *((uint32_t *)self + 53) = 0;
  *((uint32_t *)self + 54) = 0;
  *((uint32_t *)self + 55) = 0;
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
  *((uint32_t *)self + 68) = 0;
  *((uint32_t *)self + 69) = 0;
  *((uint32_t *)self + 70) = 0;
  *((uint32_t *)self + 71) = 0;
  *((uint32_t *)self + 72) = 0;
  *((uint32_t *)self + 73) = 0;
  *((uint32_t *)self + 74) = 0;
  *((uint32_t *)self + 75) = 0;
  *((uint32_t *)self + 76) = 0;
  *((uint32_t *)self + 77) = 0;
  *((uint32_t *)self + 78) = 0;
  *((uint32_t *)self + 79) = 0;
  *((uint32_t *)self + 80) = 0;
  *((uint32_t *)self + 81) = 0;
  *((uint32_t *)self + 82) = 0;
  *((uint32_t *)self + 83) = 0;
  *((uint32_t *)self + 84) = 0;
  *((uint32_t *)self + 85) = 0;
  *((uint32_t *)self + 86) = 0;
  *((uint32_t *)self + 87) = 0;
  *((uint32_t *)self + 88) = 0;
  *((uint32_t *)self + 89) = 0;
  *((uint32_t *)self + 90) = 0;
  *((uint32_t *)self + 91) = 0;
  *((uint32_t *)self + 92) = 0;
  *((uint32_t *)self + 93) = 0;
  *((uint32_t *)self + 94) = 0;
  *((uint32_t *)self + 95) = 0;
  *((uint32_t *)self + 96) = 0;
  *((uint32_t *)self + 97) = 0;
  *((uint32_t *)self + 98) = 0;
  *((uint32_t *)self + 99) = 0;
  return result;
}



// ============================================================================
// Address:   0xca63c0 (size: 568 bytes)
// Symbol:    _ZN3glf3fs29IndexDataC2EiNS_13intrusive_ptrINS0_10FileSystemEEE
// Demangled: glf::fs2::IndexData::IndexData(int,glf::intrusive_ptr<glf::fs2::FileSystem>)
// ============================================================================
// Alternative name is '_ZN3glf3fs29IndexDataC1EiNS_13intrusive_ptrINS0_10FileSystemEEE'
glf::fs2::Path::Self *glf::fs2::IndexData::Construct(glf::fs2::FileSystem::Self *a1)
{
  struct glf::fs2::Path::Self *result;

  glf::fs2::FileSystem::Construct(a1);
  *((uint8_t *)a1 + 189) = 0;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_206DE28);
  result = glf::fs2::Path::Construct((glf::fs2::FileSystem::Self *)((char *)a1 + 192));
  *((uint32_t *)a1 + 50) = 0;
  *((uint32_t *)a1 + 51) = 0;
  *((uint32_t *)a1 + 52) = 0;
  *((uint32_t *)a1 + 53) = 0;
  *((uint32_t *)a1 + 54) = 0;
  *((uint32_t *)a1 + 55) = 0;
  *((uint32_t *)a1 + 56) = 0;
  *((uint32_t *)a1 + 57) = 0;
  *((uint32_t *)a1 + 58) = 0;
  *((uint32_t *)a1 + 59) = 0;
  *((uint32_t *)a1 + 60) = 0;
  *((uint32_t *)a1 + 61) = 0;
  *((uint32_t *)a1 + 62) = 0;
  *((uint32_t *)a1 + 63) = 0;
  *((uint32_t *)a1 + 64) = 0;
  *((uint32_t *)a1 + 65) = 0;
  *((uint32_t *)a1 + 66) = 0;
  *((uint32_t *)a1 + 67) = 0;
  *((uint32_t *)a1 + 68) = 0;
  *((uint32_t *)a1 + 69) = 0;
  *((uint32_t *)a1 + 70) = 0;
  *((uint32_t *)a1 + 71) = 0;
  *((uint32_t *)a1 + 72) = 0;
  *((uint32_t *)a1 + 73) = 0;
  *((uint32_t *)a1 + 74) = 0;
  *((uint32_t *)a1 + 75) = 0;
  *((uint32_t *)a1 + 76) = 0;
  *((uint32_t *)a1 + 77) = 0;
  *((uint32_t *)a1 + 78) = 0;
  *((uint32_t *)a1 + 79) = 0;
  *((uint32_t *)a1 + 80) = 0;
  *((uint32_t *)a1 + 81) = 0;
  *((uint32_t *)a1 + 82) = 0;
  *((uint32_t *)a1 + 83) = 0;
  *((uint32_t *)a1 + 84) = 0;
  *((uint32_t *)a1 + 85) = 0;
  *((uint32_t *)a1 + 86) = 0;
  *((uint32_t *)a1 + 87) = 0;
  *((uint32_t *)a1 + 88) = 0;
  *((uint32_t *)a1 + 89) = 0;
  *((uint32_t *)a1 + 90) = 0;
  *((uint32_t *)a1 + 91) = 0;
  *((uint32_t *)a1 + 92) = 0;
  *((uint32_t *)a1 + 93) = 0;
  *((uint32_t *)a1 + 94) = 0;
  *((uint32_t *)a1 + 95) = 0;
  *((uint32_t *)a1 + 96) = 0;
  *((uint32_t *)a1 + 97) = 0;
  *((uint32_t *)a1 + 98) = 0;
  *((uint32_t *)a1 + 99) = 0;
  return result;
}
// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::Combine  (binary VA: 0xca6600)
// Original: glf::fs2::IndexData::Combine
// ----------------------------------------------------------------------------
volatile int32_t ** glf::fs2::IndexData::Combine(volatile int32_t **a1)
{
  volatile int32_t *v1;

  v1 = (volatile int32_t *)glf::MemObject::opNew(0x190u);
  glf::fs2::IndexData::Construct((glf::fs2::IndexData::Self *)v1);
  *a1 = v1;
  if ( v1 != nullptr )
    __sync_add_and_fetch(v1 + 1, 1u);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::GetFileSystem  (binary VA: 0xca6660)
// Original: glf::fs2::IndexData::GetFileSystem
// ----------------------------------------------------------------------------
glf::fs2::IndexData::Self * glf::fs2::IndexData::GetFileSystem(glf::fs2::IndexData::Self *self, unsigned int a2, int a3)
{
  glf::fs2::IndexData::Self *result;
  int v4;

  result = self;
  v4 = *(uint32_t *)(*(uint32_t *)(a2 + 208) + 4 * *(uint8_t *)(*(uint32_t *)(a2 + 244) + a3));
  *(uint32_t *)self = v4;
  if ( v4 != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v4 + 4), 1u);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::GetAltPath  (binary VA: 0xca6690)
// Original: glf::fs2::IndexData::GetAltPath
// ----------------------------------------------------------------------------
int glf::fs2::IndexData::GetAltPath(glf::fs2::IndexData::Self *self, unsigned int a2)
{
  return *((uint32_t *)self + 55) + 8 * *(uint8_t *)(*((uint32_t *)self + 64) + a2);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::GetFolderIdx  (binary VA: 0xca66b0)
// Original: glf::fs2::IndexData::GetFolderIdx
// ----------------------------------------------------------------------------
int glf::fs2::IndexData::GetFolderIdx(glf::fs2::IndexData::Self *self, uint16_t a2)
{
  return a2;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::Reserve  (binary VA: 0xca66c0)
// Original: glf::fs2::IndexData::Reserve
// ----------------------------------------------------------------------------
unsigned int glf::fs2::IndexData::Reserve(glf::Self **self, int a2, size_t a3, uint16_t a4)
{
  unsigned int result;
  glf::fs2::IndexData::Self *v5;
  glf::Self *v6;
  glf::Self *v7;
  uint32_t *v8;
  glf::Self *v9;
  glf::Self *v10;
  glf::Self *v11;
  glf::Self *v12;
  glf::Self *v13;
  glf::Self *v14;
  char *v15;
  uint32_t *v16;
  uint32_t *v17;
  glf::Self *v18;
  int v19;
  glf::Self *v20;
  glf::Self *v21;
  uint32_t *v22;
  glf::Self *v23;
  uint32_t *v24;
  glf::Self *v25;
  glf::Self *v26;
  uint16_t *v27;
  char *v28;
  char *v29;
  uint32_t *v30;
  uint32_t *v31;
  glf::Self *v32;
  char *v33;
  glf::Self *v34;
  glf::Self *v35;
  uint16_t *v36;
  char *v37;
  char *v38;
  uint32_t *v39;
  char *v40;
  char *v41;
  uint32_t *v42;
  char *v43;
  char *v44;
  uint32_t *v45;
  glf::Self *v46;
  glf::Self *v47;
  glf::Self *v48;
  uint32_t *v49;
  uint32_t *v50;
  glf::Self *v51;
  glf::Self *v52;
  glf::Self *v53;
  glf::Self *v54;
  glf::Self *v55;
  char *v56;
  char *v57;
  glf::Self *v58;
  char *v59;
  char *v60;
  glf::Self *v61;
  glf::Self *v62;
  char *v63;
  int v64;
  uint32_t *v65;
  int v66;
  uint32_t *v67;
  uint32_t *v68;
  uint16_t *v69;
  size_t v70;
  uint16_t *v71;
  uint32_t *v72;
  uint32_t *v73;
  uint32_t *v74;
  glf::Self *i;
  glf::Self *j;
  glf::Self *k;
  int v78;
  size_t v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  size_t v90;
  size_t v91;
  size_t v92;
  size_t v93;
  size_t v94;
  size_t v95;
  size_t v96;
  size_t v97;

  result = a4;
  v5 = (glf::fs2::IndexData::Self *)self;
  if ( a4 != 0xFFFF )
  {
    v6 = *(self + 70);
    result = a4;
    if ( a4 > (unsigned int)(-1431655765 * ((*(self + 72) - v6) >> 2)) )
    {
      v7 = *(self + 71);
      v90 = 0;
      v65 = nullptr;
      v78 = -1431655765 * ((v7 - v6) >> 2);
      if ( a4 != 0 )
      {
        v58 = *(self + 71);
        v90 = 3 * a4;
        v65 = (uint32_t *)(glf::Alloc(v90 * 4));
        v7 = v58;
      }
      if ( v6 != v7 )
      {
        v8 = v65;
        do
        {
          if ( v8 != nullptr )
          {
            *v8 = *(uint32_t *)v6;
            v8[1] = *((uint32_t *)v6 + 1);
            v8[2] = *((uint32_t *)v6 + 2);
          }
          v6 = (glf::Self *)((char *)v6 + 12);
          v8 += 3;
        }
        while ( v7 != v6 );
      }
      if ( *(self + 70) != nullptr )
        glf::Free(*(self + 70));
      *(self + 70) = (glf::Self *)v65;
      *(self + 71) = (glf::Self *)&v65[3 * v78];
      result = (unsigned int)(uintptr_t)(&v65[v90]);
      *(self + 72) = (glf::Self *)&v65[v90];
    }
  }
  if ( (a2 & 0x10) != 0 )
  {
    v9 = *(self + 61);
    if ( a3 > *(self + 63) - v9 )
    {
      v51 = *(self + 62);
      v87 = v51 - v9;
      v46 = (glf::Self *)glf::Alloc(a3);
      for ( i = v46; v9 != v51; v46 = (glf::Self *)((char *)v46 + 1) )
      {
        if ( v46 != nullptr )
          *(uint8_t *)v46 = *(uint8_t *)v9;
        v9 = (glf::Self *)((char *)v9 + 1);
      }
      if ( *(self + 61) != nullptr )
        glf::Free(*(self + 61));
      *(self + 61) = i;
      *(self + 62) = (glf::Self *)((char *)i + v87);
      *(self + 63) = (glf::Self *)((char *)i + a3);
    }
    v10 = *(self + 64);
    result = *(self + 66) - v10;
    if ( a3 > result )
    {
      v52 = *(self + 65);
      v88 = v52 - v10;
      v47 = (glf::Self *)glf::Alloc(a3);
      for ( j = v47; v10 != v52; v47 = (glf::Self *)((char *)v47 + 1) )
      {
        if ( v47 != nullptr )
          *(uint8_t *)v47 = *(uint8_t *)v10;
        v10 = (glf::Self *)((char *)v10 + 1);
      }
      if ( *(self + 64) != nullptr )
        glf::Free(*(self + 64));
      *(self + 64) = j;
      *(self + 65) = (glf::Self *)((char *)j + v88);
      result = (unsigned int)(uintptr_t)(j) + a3;
      *(self + 66) = (glf::Self *)((char *)j + a3);
    }
  }
  if ( (a2 & 1) == 0 )
    goto LABEL_19;
  if ( a3 > 0x3FFFFFFF )
    goto LABEL_158;
  v11 = *(self + 67);
  result = (*(self + 69) - v11) >> 2;
  if ( a3 > result )
  {
    v23 = *(self + 68);
    v92 = 0;
    v68 = nullptr;
    v81 = (v23 - v11) >> 2;
    if ( a3 != 0 )
    {
      v54 = *(self + 68);
      v92 = a3;
      v68 = (uint32_t *)(glf::Alloc(4 * a3));
      v23 = v54;
    }
    if ( v11 != v23 )
    {
      v24 = v68;
      do
      {
        if ( v24 != nullptr )
          *v24 = *(uint32_t *)v11;
        v11 = (glf::Self *)((char *)v11 + 4);
        ++v24;
      }
      while ( v23 != v11 );
    }
    if ( *(self + 67) != nullptr )
      glf::Free(*(self + 67));
    *(self + 67) = (glf::Self *)v68;
    *(self + 68) = (glf::Self *)&v68[v81];
    result = (unsigned int)(uintptr_t)(&v68[v92]);
    *(self + 69) = (glf::Self *)&v68[v92];
    if ( (a2 & 2) == 0 )
      goto LABEL_20;
  }
  else
  {
LABEL_19:
    if ( (a2 & 2) == 0 )
      goto LABEL_20;
  }
  if ( a3 > 0x7FFFFFFF )
    goto LABEL_158;
  v25 = *(self + 73);
  result = (*(self + 75) - v25) >> 1;
  if ( a3 > result )
  {
    v26 = *(self + 74);
    v93 = 0;
    v69 = nullptr;
    v82 = (v26 - v25) >> 1;
    if ( a3 != 0 )
    {
      v62 = *(self + 74);
      v93 = a3;
      v69 = (uint16_t *)(glf::Alloc(2 * a3));
      v26 = v62;
    }
    if ( v25 != v26 )
    {
      v27 = v69;
      do
      {
        if ( v27 != nullptr )
          *v27 = *(uint16_t *)v25;
        v25 = (glf::Self *)((char *)v25 + 2);
        ++v27;
      }
      while ( v26 != v25 );
    }
    if ( *(self + 73) != nullptr )
      glf::Free(*(self + 73));
    *(self + 73) = (glf::Self *)v69;
    *(self + 74) = (glf::Self *)&v69[v82];
    result = (unsigned int)(uintptr_t)(&v69[v93]);
    *(self + 75) = (glf::Self *)&v69[v93];
  }
LABEL_20:
  if ( (a2 & 8) != 0 )
  {
    if ( a3 > 0x3FFFFFFF )
      goto LABEL_158;
    v12 = *(self + 76);
    result = (*(self + 78) - v12) >> 2;
    if ( a3 > result )
    {
      v21 = *(self + 77);
      v91 = 0;
      v67 = nullptr;
      v80 = (v21 - v12) >> 2;
      if ( a3 != 0 )
      {
        v55 = *(self + 77);
        v91 = a3;
        v67 = (uint32_t *)(glf::Alloc(4 * a3));
        v21 = v55;
      }
      if ( v12 != v21 )
      {
        v22 = v67;
        do
        {
          if ( v22 != nullptr )
            *v22 = *(uint32_t *)v12;
          v12 = (glf::Self *)((char *)v12 + 4);
          ++v22;
        }
        while ( v21 != v12 );
      }
      if ( *(self + 76) != nullptr )
        glf::Free(*(self + 76));
      *(self + 76) = (glf::Self *)v67;
      *(self + 77) = (glf::Self *)&v67[v80];
      result = (unsigned int)(uintptr_t)(&v67[v91]);
      *(self + 78) = (glf::Self *)&v67[v91];
    }
  }
  if ( (a2 & 0x10000) != 0 )
  {
    v13 = *(self + 79);
    result = *(self + 81) - v13;
    if ( a3 > result )
    {
      v53 = *(self + 80);
      v89 = v53 - v13;
      v48 = (glf::Self *)glf::Alloc(a3);
      for ( k = v48; v13 != v53; v48 = (glf::Self *)((char *)v48 + 1) )
      {
        if ( v48 != nullptr )
          *(uint8_t *)v48 = *(uint8_t *)v13;
        v13 = (glf::Self *)((char *)v13 + 1);
      }
      if ( *(self + 79) != nullptr )
        glf::Free(*(self + 79));
      *(self + 79) = k;
      *(self + 80) = (glf::Self *)((char *)k + v89);
      result = (unsigned int)(uintptr_t)(k) + a3;
      *(self + 81) = (glf::Self *)((char *)k + a3);
    }
  }
  if ( (a2 & 0x8000) != 0 )
  {
    if ( a3 > 0x7FFFFFFF )
      goto LABEL_158;
    v34 = *(self + 85);
    result = (*(self + 87) - v34) >> 1;
    if ( a3 > result )
    {
      v35 = *(self + 86);
      v94 = 0;
      v71 = nullptr;
      v83 = (v35 - v34) >> 1;
      if ( a3 != 0 )
      {
        v61 = *(self + 86);
        v94 = a3;
        v71 = (uint16_t *)(glf::Alloc(2 * a3));
        v35 = v61;
      }
      if ( v34 != v35 )
      {
        v36 = v71;
        do
        {
          if ( v36 != nullptr )
            *v36 = *(uint16_t *)v34;
          v34 = (glf::Self *)((char *)v34 + 2);
          ++v36;
        }
        while ( v35 != v34 );
      }
      if ( *(self + 85) != nullptr )
        glf::Free(*(self + 85));
      *(self + 85) = (glf::Self *)v71;
      *(self + 86) = (glf::Self *)&v71[v83];
      result = (unsigned int)(uintptr_t)(&v71[v94]);
      *(self + 87) = (glf::Self *)&v71[v94];
    }
  }
  if ( (a2 & 0x4000) != 0 )
  {
    if ( a3 > 0x1FFFFFFF )
      goto LABEL_158;
    v14 = *(self + 82);
    result = (*(self + 84) - v14) >> 3;
    if ( a3 > result )
    {
      v15 = (char *)*(self + 83);
      v79 = 0;
      v66 = (v15 - (char *)v14) >> 3;
      v16 = nullptr;
      if ( a3 != 0 )
      {
        v56 = (char *)*(self + 83);
        v79 = 2 * a3;
        v16 = (uint32_t *)(glf::Alloc(8 * a3));
        v15 = v56;
      }
      if ( v14 != (glf::Self *)v15 )
      {
        v17 = v16;
        v18 = (glf::Self *)v15;
        do
        {
          if ( v17 != nullptr )
          {
            v19 = *(uint32_t *)v14;
            v17[1] = *((uint32_t *)v14 + 1);
            *v17 = v19;
          }
          v14 = (glf::Self *)((char *)v14 + 8);
          v17 += 2;
        }
        while ( v18 != v14 );
        v5 = (glf::fs2::IndexData::Self *)self;
      }
      v20 = *((glf::Self **)v5 + 82);
      if ( v20 != nullptr )
      {
        v49 = v16;
        glf::Free(v20);
        v16 = v49;
      }
      *((uint32_t *)v5 + 82) = (uint32_t)(uintptr_t)(v16);
      result = (unsigned int)(uintptr_t)(&v16[2 * v66]);
      *((uint32_t *)v5 + 83) = result;
      *((uint32_t *)v5 + 84) = (uint32_t)(uintptr_t)(&v16[v79]);
    }
  }
  if ( (a2 & 0x100000) != 0 )
  {
    if ( a3 > 0x1FFFFFFF )
      goto LABEL_158;
    v43 = *((char **)v5 + 88);
    result = (*((uint32_t *)v5 + 90) - (int)(uintptr_t)(v43)) >> 3;
    if ( a3 > result )
    {
      v44 = *((char **)v5 + 89);
      v97 = 0;
      v74 = nullptr;
      v86 = (v44 - v43) >> 3;
      if ( a3 != 0 )
      {
        v60 = *((char **)v5 + 89);
        v97 = 2 * a3;
        v74 = (uint32_t *)(glf::Alloc(8 * a3));
        v44 = v60;
      }
      if ( v43 != v44 )
      {
        v45 = v74;
        do
        {
          if ( v45 != nullptr )
          {
            *v45 = *(uint32_t *)v43;
            v45[1] = *((uint32_t *)v43 + 1);
          }
          v43 += 8;
          v45 += 2;
        }
        while ( v44 != v43 );
      }
      if ( *((uint32_t *)v5 + 88) != 0 )
        glf::Free(*((glf::Self **)v5 + 88));
      *((uint32_t *)v5 + 88) = (uint32_t)(uintptr_t)(v74);
      *((uint32_t *)v5 + 89) = (uint32_t)(uintptr_t)(&v74[2 * v86]);
      result = (unsigned int)(uintptr_t)(&v74[v97]);
      *((uint32_t *)v5 + 90) = (uint32_t)(uintptr_t)(&v74[v97]);
    }
  }
  if ( (a2 & 0x200000) != 0 )
  {
    if ( a3 > 0x1FFFFFFF )
      goto LABEL_158;
    v40 = *((char **)v5 + 91);
    result = (*((uint32_t *)v5 + 93) - (int)(uintptr_t)(v40)) >> 3;
    if ( a3 > result )
    {
      v41 = *((char **)v5 + 92);
      v96 = 0;
      v73 = nullptr;
      v85 = (v41 - v40) >> 3;
      if ( a3 != 0 )
      {
        v63 = *((char **)v5 + 92);
        v96 = 2 * a3;
        v73 = (uint32_t *)(glf::Alloc(8 * a3));
        v41 = v63;
      }
      if ( v40 != v41 )
      {
        v42 = v73;
        do
        {
          if ( v42 != nullptr )
          {
            *v42 = *(uint32_t *)v40;
            v42[1] = *((uint32_t *)v40 + 1);
          }
          v40 += 8;
          v42 += 2;
        }
        while ( v41 != v40 );
      }
      if ( *((uint32_t *)v5 + 91) != 0 )
        glf::Free(*((glf::Self **)v5 + 91));
      *((uint32_t *)v5 + 91) = (uint32_t)(uintptr_t)(v73);
      *((uint32_t *)v5 + 92) = (uint32_t)(uintptr_t)(&v73[2 * v85]);
      result = (unsigned int)(uintptr_t)(&v73[v96]);
      *((uint32_t *)v5 + 93) = (uint32_t)(uintptr_t)(&v73[v96]);
    }
  }
  if ( (a2 & 0x400000) != 0 )
  {
    if ( a3 > 0x1FFFFFFF )
      goto LABEL_158;
    v37 = *((char **)v5 + 94);
    result = (*((uint32_t *)v5 + 96) - (int)(uintptr_t)(v37)) >> 3;
    if ( a3 > result )
    {
      v38 = *((char **)v5 + 95);
      v95 = 0;
      v72 = nullptr;
      v84 = (v38 - v37) >> 3;
      if ( a3 != 0 )
      {
        v59 = *((char **)v5 + 95);
        v95 = 2 * a3;
        v72 = (uint32_t *)(glf::Alloc(8 * a3));
        v38 = v59;
      }
      if ( v37 != v38 )
      {
        v39 = v72;
        do
        {
          if ( v39 != nullptr )
          {
            *v39 = *(uint32_t *)v37;
            v39[1] = *((uint32_t *)v37 + 1);
          }
          v37 += 8;
          v39 += 2;
        }
        while ( v38 != v37 );
      }
      if ( *((uint32_t *)v5 + 94) != 0 )
        glf::Free(*((glf::Self **)v5 + 94));
      *((uint32_t *)v5 + 94) = (uint32_t)(uintptr_t)(v72);
      *((uint32_t *)v5 + 95) = (uint32_t)(uintptr_t)(&v72[2 * v84]);
      result = (unsigned int)(uintptr_t)(&v72[v95]);
      *((uint32_t *)v5 + 96) = (uint32_t)(uintptr_t)(&v72[v95]);
    }
  }
  if ( (a2 & 0x800000) == 0 )
    return result;
  if ( a3 > 0x1FFFFFFF )
LABEL_158:
    sub_1900180("vector::reserve");
  v28 = *((char **)v5 + 97);
  result = (*((uint32_t *)v5 + 99) - (int)(uintptr_t)(v28)) >> 3;
  if ( a3 > result )
  {
    v29 = *((char **)v5 + 98);
    v30 = nullptr;
    v70 = 0;
    v64 = (v29 - v28) >> 3;
    if ( a3 != 0 )
    {
      v57 = *((char **)v5 + 98);
      v70 = 2 * a3;
      v30 = (uint32_t *)(glf::Alloc(8 * a3));
      v29 = v57;
    }
    if ( v28 != v29 )
    {
      v31 = v30;
      do
      {
        if ( v31 != nullptr )
        {
          *v31 = *(uint32_t *)v28;
          v31[1] = *((uint32_t *)v28 + 1);
        }
        v28 += 8;
        v31 += 2;
      }
      while ( v29 != v28 );
    }
    v32 = *((glf::Self **)v5 + 97);
    if ( v32 != nullptr )
    {
      v50 = v30;
      glf::Free(v32);
      v30 = v50;
    }
    *((uint32_t *)v5 + 97) = (uint32_t)(uintptr_t)(v30);
    v33 = (char *)&v30[2 * v64];
    result = (unsigned int)(uintptr_t)(&v30[v70]);
    *((uint32_t *)v5 + 98) = (uint32_t)(uintptr_t)(v33);
    *((uint32_t *)v5 + 99) = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::ComputeSize  (binary VA: 0xca7180)
// Original: glf::fs2::IndexData::ComputeSize
// ----------------------------------------------------------------------------
unsigned int glf::fs2::IndexData::ComputeSize(glf::fs2::IndexData::Self *self)
{
  return *((uint32_t *)self + 59)
       - *((uint32_t *)self + 58)
       + *((uint32_t *)self + 62)
       - *((uint32_t *)self + 61)
       + *((uint32_t *)self + 65)
       - *((uint32_t *)self + 64)
       + *((uint32_t *)self + 80)
       - *((uint32_t *)self + 79)
       + ((*((uint32_t *)self + 71) - *((uint32_t *)self + 70)) & 0xFFFFFFFC)
       + 2
       * (((*((uint32_t *)self + 74) - *((uint32_t *)self + 73)) >> 1)
        + ((*((uint32_t *)self + 86) - *((uint32_t *)self + 85)) >> 1))
       + 4
       * (((*((uint32_t *)self + 77) - *((uint32_t *)self + 76)) >> 2)
        + ((*((uint32_t *)self + 53) - *((uint32_t *)self + 52)) >> 2)
        + ((*((uint32_t *)self + 68) - *((uint32_t *)self + 67)) >> 2))
       + 8
       * (((*((uint32_t *)self + 98) - *((uint32_t *)self + 97)) >> 3)
        + ((*((uint32_t *)self + 95) - *((uint32_t *)self + 94)) >> 3)
        + ((*((uint32_t *)self + 92) - *((uint32_t *)self + 91)) >> 3)
        + ((*((uint32_t *)self + 89) - *((uint32_t *)self + 88)) >> 3)
        + ((*((uint32_t *)self + 83) - *((uint32_t *)self + 82)) >> 3)
        + ((*((uint32_t *)self + 56) - *((uint32_t *)self + 55)) >> 3));
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::IsIndexed  (binary VA: 0xca7290)
// Original: glf::fs2::IndexData::IsIndexed
// ----------------------------------------------------------------------------
bool glf::fs2::IndexData::IsIndexed(glf::fs2::IndexData::Self *self, int a2)
{
  return (a2 & *((uint32_t *)self + 50)) == a2;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::Clear  (binary VA: 0xca72b0)
// Original: glf::fs2::IndexData::Clear
// ----------------------------------------------------------------------------
int glf::fs2::IndexData::Clear(glf::fs2::IndexData::Self *self, int a2)
{
  glf::Self *v2;
  glf::Self *v3;
  glf::Self *v4;
  glf::Self *v5;
  glf::Self *v6;
  glf::Self *v7;
  glf::Self *v9;
  glf::Self *v10;
  glf::Self *v11;
  glf::Self *v12;

  if ( glf::fs2::IndexData::IsIndexed(self, (int)(uintptr_t)(&dword_0) + 1) )
  {
    v2 = *((glf::Self **)self + 67);
    *((uint32_t *)self + 68) = 0;
    *((uint32_t *)self + 67) = 0;
    *((uint32_t *)self + 69) = 0;
    if ( v2 != nullptr )
      glf::Free(v2);
    v3 = *((glf::Self **)self + 58);
    *((uint32_t *)self + 59) = 0;
    *((uint32_t *)self + 58) = 0;
    *((uint32_t *)self + 60) = 0;
    if ( v3 != nullptr )
      glf::Free(v3);
  }
  if ( glf::fs2::IndexData::IsIndexed(self, (int)(uintptr_t)(&loc_6)) )
  {
    v4 = *((glf::Self **)self + 70);
    *((uint32_t *)self + 71) = 0;
    *((uint32_t *)self + 70) = 0;
    *((uint32_t *)self + 72) = 0;
    if ( v4 != nullptr )
      glf::Free(v4);
  }
  if ( glf::fs2::IndexData::IsIndexed(self, (int)byte_8) )
  {
    v5 = *((glf::Self **)self + 76);
    *((uint32_t *)self + 77) = 0;
    *((uint32_t *)self + 76) = 0;
    *((uint32_t *)self + 78) = 0;
    if ( v5 != nullptr )
      glf::Free(v5);
  }
  if ( glf::fs2::IndexData::IsIndexed(self, (int)(uintptr_t)(&reinterpret_cast<G4Elf32Sym *>(stru_FFF4)->st_info)) )
  {
    v6 = *((glf::Self **)self + 79);
    *((uint32_t *)self + 80) = 0;
    *((uint32_t *)self + 79) = 0;
    *((uint32_t *)self + 81) = 0;
    if ( v6 != nullptr )
      glf::Free(v6);
  }
  if ( glf::fs2::IndexData::IsIndexed(self, (int)(uintptr_t)(&reinterpret_cast<G4Elf32Sym *>(stru_7FF4)->st_info)) )
  {
    v7 = *((glf::Self **)self + 85);
    *((uint32_t *)self + 86) = 0;
    *((uint32_t *)self + 85) = 0;
    *((uint32_t *)self + 87) = 0;
    if ( v7 != nullptr )
      glf::Free(v7);
  }
  if ( glf::fs2::IndexData::IsIndexed(self, (int)(uintptr_t)("nD0Ev")) )
  {
    v12 = *((glf::Self **)self + 88);
    *((uint32_t *)self + 89) = 0;
    *((uint32_t *)self + 88) = 0;
    *((uint32_t *)self + 90) = 0;
    if ( v12 != nullptr )
      glf::Free(v12);
  }
  if ( glf::fs2::IndexData::IsIndexed(self, (int)(uintptr_t)("E0EEEEEESD_RNS0_11SAtlasArrayEPNS_5video12IVideoDriverE")) )
  {
    v11 = *((glf::Self **)self + 91);
    *((uint32_t *)self + 92) = 0;
    *((uint32_t *)self + 91) = 0;
    *((uint32_t *)self + 93) = 0;
    if ( v11 != nullptr )
      glf::Free(v11);
  }
  if ( glf::fs2::IndexData::IsIndexed(self, (int)(uintptr_t)(&stru_3FFFFC.r_info)) )
  {
    v10 = *((glf::Self **)self + 94);
    *((uint32_t *)self + 95) = 0;
    *((uint32_t *)self + 94) = 0;
    *((uint32_t *)self + 96) = 0;
    if ( v10 != nullptr )
      glf::Free(v10);
  }
  if ( glf::fs2::IndexData::IsIndexed(self, (int)(uintptr_t)(sub_800000)) )
  {
    v9 = *((glf::Self **)self + 97);
    *((uint32_t *)self + 98) = 0;
    *((uint32_t *)self + 97) = 0;
    *((uint32_t *)self + 99) = 0;
    if ( v9 != nullptr )
      glf::Free(v9);
  }
  *((uint32_t *)self + 50) &= ~a2;
  return ~a2;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::IsAnyIndexed  (binary VA: 0xca75b0)
// Original: glf::fs2::IndexData::IsAnyIndexed
// ----------------------------------------------------------------------------
bool glf::fs2::IndexData::IsAnyIndexed(glf::fs2::IndexData::Self *self, int a2)
{
  return (a2 & *((uint32_t *)self + 50)) != 0;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::Save  (binary VA: 0xca75d0)
// Original: glf::fs2::IndexData::Save
// ----------------------------------------------------------------------------
int glf::fs2::IndexData::Save(char *a1, glf::fs2::Path::Self *a2, volatile int32_t **a3)
{
  char *v3;
  glf::fs2::Path::Self *v4;
  volatile int32_t *v5;
  volatile int32_t *v6;
  int v7;
  volatile int32_t *v8;
  int v9;
  int v10;
  unsigned int v11;
  int v12;
  int v13;
  unsigned int v14;
  uint32_t *v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  volatile int32_t *v44;
  int v45;
  glf::fs2::FileSystem::Self *v46;
  int v47;
  glf::RefCounted::Self *v49;
  volatile int32_t *v50;
  volatile int32_t *v51;
  int v52;
  typedef int _g4_t_v53;
  typedef volatile int32_t *_g4_t_v54;
  typedef volatile int32_t *_g4_t_v55;
  typedef uint32_t *_g4_t_v56;
  typedef volatile int32_t *_g4_t_v57;
  typedef volatile int32_t *_g4_t_v58;
  typedef volatile int32_t *_g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef uint8_t _g4_t_v62;
  typedef char *_g4_t_v63;
  typedef char *_g4_t_v64;
  typedef uint16_t _g4_t_v65[3];
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72[2];
  typedef void (**_g4_t_v73)(glf::basic_ofstream<char, std::char_traits<char>> *);
  typedef void (**_g4_t_v74)(glf::basic_filebuf<char, std::char_traits<char>> *);
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef uint8_t _g4_t_v81[260];
  typedef glf::fs2::FileSystem::Self *_g4_t_v82;
  typedef volatile int32_t *_g4_t_v83;
  typedef uint32_t _g4_t_v84[5];
  typedef char _g4_t_v85;
  typedef int _g4_t_v86;
  typedef char _g4_t_v87;
  typedef char _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef char **_g4_t_v93;
  enum : size_t {
    _g4_s0 = 640u,
    _g4_s1 = (4u + sizeof(_g4_t_v53)) > _g4_s0 ? (4u + sizeof(_g4_t_v53)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v54)) > _g4_s1 ? (16u + sizeof(_g4_t_v54)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v55)) > _g4_s2 ? (16u + sizeof(_g4_t_v55)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v56)) > _g4_s3 ? (16u + sizeof(_g4_t_v56)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v57)) > _g4_s4 ? (16u + sizeof(_g4_t_v57)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v58)) > _g4_s5 ? (16u + sizeof(_g4_t_v58)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v59)) > _g4_s6 ? (16u + sizeof(_g4_t_v59)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v60)) > _g4_s7 ? (20u + sizeof(_g4_t_v60)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v61)) > _g4_s8 ? (20u + sizeof(_g4_t_v61)) : _g4_s8,
    _g4_s10 = (27u + sizeof(_g4_t_v62)) > _g4_s9 ? (27u + sizeof(_g4_t_v62)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v63)) > _g4_s10 ? (44u + sizeof(_g4_t_v63)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v64)) > _g4_s11 ? (44u + sizeof(_g4_t_v64)) : _g4_s11,
    _g4_s13 = (58u + sizeof(_g4_t_v65)) > _g4_s12 ? (58u + sizeof(_g4_t_v65)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v66)) > _g4_s13 ? (64u + sizeof(_g4_t_v66)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v67)) > _g4_s14 ? (68u + sizeof(_g4_t_v67)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v68)) > _g4_s15 ? (72u + sizeof(_g4_t_v68)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v69)) > _g4_s16 ? (76u + sizeof(_g4_t_v69)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v70)) > _g4_s17 ? (80u + sizeof(_g4_t_v70)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v71)) > _g4_s18 ? (84u + sizeof(_g4_t_v71)) : _g4_s18,
    _g4_s20 = (88u + sizeof(_g4_t_v72)) > _g4_s19 ? (88u + sizeof(_g4_t_v72)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v73)) > _g4_s20 ? (96u + sizeof(_g4_t_v73)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v74)) > _g4_s21 ? (100u + sizeof(_g4_t_v74)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v75)) > _g4_s22 ? (104u + sizeof(_g4_t_v75)) : _g4_s22,
    _g4_s24 = (108u + sizeof(_g4_t_v76)) > _g4_s23 ? (108u + sizeof(_g4_t_v76)) : _g4_s23,
    _g4_s25 = (112u + sizeof(_g4_t_v77)) > _g4_s24 ? (112u + sizeof(_g4_t_v77)) : _g4_s24,
    _g4_s26 = (116u + sizeof(_g4_t_v78)) > _g4_s25 ? (116u + sizeof(_g4_t_v78)) : _g4_s25,
    _g4_s27 = (120u + sizeof(_g4_t_v79)) > _g4_s26 ? (120u + sizeof(_g4_t_v79)) : _g4_s26,
    _g4_s28 = (124u + sizeof(_g4_t_v80)) > _g4_s27 ? (124u + sizeof(_g4_t_v80)) : _g4_s27,
    _g4_s29 = (128u + sizeof(_g4_t_v81)) > _g4_s28 ? (128u + sizeof(_g4_t_v81)) : _g4_s28,
    _g4_s30 = (388u + sizeof(_g4_t_v82)) > _g4_s29 ? (388u + sizeof(_g4_t_v82)) : _g4_s29,
    _g4_s31 = (392u + sizeof(_g4_t_v83)) > _g4_s30 ? (392u + sizeof(_g4_t_v83)) : _g4_s30,
    _g4_s32 = (396u + sizeof(_g4_t_v84)) > _g4_s31 ? (396u + sizeof(_g4_t_v84)) : _g4_s31,
    _g4_s33 = (416u + sizeof(_g4_t_v85)) > _g4_s32 ? (416u + sizeof(_g4_t_v85)) : _g4_s32,
    _g4_s34 = (508u + sizeof(_g4_t_v86)) > _g4_s33 ? (508u + sizeof(_g4_t_v86)) : _g4_s33,
    _g4_s35 = (512u + sizeof(_g4_t_v87)) > _g4_s34 ? (512u + sizeof(_g4_t_v87)) : _g4_s34,
    _g4_s36 = (513u + sizeof(_g4_t_v88)) > _g4_s35 ? (513u + sizeof(_g4_t_v88)) : _g4_s35,
    _g4_s37 = (516u + sizeof(_g4_t_v89)) > _g4_s36 ? (516u + sizeof(_g4_t_v89)) : _g4_s36,
    _g4_s38 = (520u + sizeof(_g4_t_v90)) > _g4_s37 ? (520u + sizeof(_g4_t_v90)) : _g4_s37,
    _g4_s39 = (524u + sizeof(_g4_t_v91)) > _g4_s38 ? (524u + sizeof(_g4_t_v91)) : _g4_s38,
    _g4_s40 = (528u + sizeof(_g4_t_v92)) > _g4_s39 ? (528u + sizeof(_g4_t_v92)) : _g4_s39,
    _g4_s41 = (552u + sizeof(_g4_t_v93)) > _g4_s40 ? (552u + sizeof(_g4_t_v93)) : _g4_s40
  };
  alignas(16) uint8_t _g4_sf[_g4_s41];
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 4u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 16u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 16u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 16u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 16u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 16u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 16u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 20u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 20u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 27u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 44u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 44u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 58u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 64u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 68u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 72u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 76u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 80u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 84u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 88u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 96u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 100u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 104u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 108u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 112u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 116u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 120u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 124u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 128u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 388u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 392u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 396u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 416u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 508u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 512u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 513u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 516u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 520u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 524u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 528u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 552u);

  v93 = &a1;
  v3 = a1;
  v4 = a2;
  v5 = *a3;
  if ( *a3 != nullptr )
    __sync_add_and_fetch(v5 + 1, 1u);
  v54 = v5;
  v63 = (char *)glf::fs2::Path::c_str(v4);
  sub_1900810(v84);
  v86 = 0;
  v87 = 0;
  v88 = 0;
  v89 = 0;
  v90 = 0;
  v91 = 0;
  v92 = 0;
  v84[0] = (uint32_t)(uintptr_t)(&off_206DEE0);
  sub_19119D0(v84, &v74);
  v73 = (void (**)(glf::basic_ofstream<char, std::char_traits<char>> *))(uintptr_t)(((uint32_t)(uintptr_t)&off_206DE8C));
  v84[0] = ((uint32_t)(uintptr_t)&off_206DEA0);
  if ( v54 != nullptr )
  {
    __sync_add_and_fetch(v54 + 1, 1u);
    v75 = 0;
    v76 = 0;
    v77 = 0;
    v78 = 0;
    v79 = 0;
    v74 = (void (**)(glf::basic_filebuf<char, std::char_traits<char>> *))&off_20AB2C8;
    v80 = 0;
    sub_1903A70(v81);
    v6 = v54;
    v82 = (glf::fs2::FileSystem::Self *)v54;
    v74 = (void (**)(glf::basic_filebuf<char, std::char_traits<char>> *))(uintptr_t)(((uint32_t)(uintptr_t)&off_206D728));
    __sync_add_and_fetch(v54 + 1, 1u);
    v83 = nullptr;
    if ( __sync_fetch_and_add(v54 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v54, 8);
      G4_VCALL<void>(v54, 16);
      v8 = v83;
      v6 = v54;
    }
    else
    {
      v7 = *((uint32_t *)v54 + 1);
      _mm_mfence();
      if ( v7 == 1 )
      {
        G4_VCALL<void>(v54, 12);
        v8 = v83;
        v6 = v54;
      }
      else
      {
        v8 = v83;
      }
    }
    if ( v8 != nullptr )
    {
LABEL_8:
      v55 = v6;
      sub_1911530((char *)&v73 + (uint32_t)(uintptr_t)(*(v73 - 3)), *(int *)((char *)&v78 + (uint32_t)(uintptr_t)(*(v73 - 3))) | 4);
      v6 = v55;
      goto LABEL_9;
    }
  }
  else
  {
    v75 = 0;
    v76 = 0;
    v77 = 0;
    v78 = 0;
    v79 = 0;
    v74 = (void (**)(glf::basic_filebuf<char, std::char_traits<char>> *))&off_20AB2C8;
    v80 = 0;
    sub_1903A70(v81);
    v82 = nullptr;
    v83 = nullptr;
    v6 = nullptr;
    v74 = (void (**)(glf::basic_filebuf<char, std::char_traits<char>> *))(uintptr_t)(((uint32_t)(uintptr_t)&off_206D728));
  }
  v58 = v6;
  v60 = glf::io2::Device::ConvertToOpenMode(20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v72), v63, (int)(uintptr_t)(v65));
  v72[1] = 0;
  glf::fs2::Path::Init((glf::fs2::Path::Self *)v72);
  v49 = glf::fs2::FileSystem::Open(v82, (glf::fs2::Path::Self *)v72, v60);
  v50 = v58;
  if ( v49 != nullptr )
    __sync_add_and_fetch((volatile int32_t *)v49 + 1, 1u);
  v51 = v83;
  v83 = (volatile int32_t *)v49;
  if ( v51 != nullptr )
  {
    if ( __sync_fetch_and_add(v51 + 1, 0xFFFFFFFF) == 1 )
    {
      v61 = (int)(uintptr_t)(v51);
      G4_VCALL<void>(v51, 8);
      G4_VCALL<void>(v61, 16);
      v50 = v58;
    }
    else
    {
      v52 = *((uint32_t *)v51 + 1);
      _mm_mfence();
      if ( v52 == 1 )
      {
        G4_VCALL<void>(v51, 12);
        v50 = v58;
      }
    }
  }
  v59 = v50;
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v72);
  v6 = v59;
  if ( v83 == nullptr )
    goto LABEL_8;
LABEL_9:
  if ( v6 != nullptr )
  {
    if ( __sync_fetch_and_add(v6 + 1, 0xFFFFFFFF) == 1 )
    {
      v57 = v6;
      G4_VCALL<void>(v6, 8);
      G4_VCALL<void>(v57, 16);
    }
    else
    {
      v9 = *((uint32_t *)v6 + 1);
      _mm_mfence();
      if ( v9 == 1 )
        G4_VCALL<void>(v6, 12);
    }
  }
  if ( (v85 & 5) == 0 )
  {
    v62 = glf::fs2::IndexData::ResolveOffsets();
    sub_192C9E0(&v73, "FsCd", 4);
    sub_192C9E0(&v73, "", 4);
    v56 = (uint32_t *)glf::fs2::Path::String((glf::fs2::Path::Self *)(v3 + 192));
    v68 = *(uint32_t *)(*v56 - 12);
    sub_192C9E0(&v73, &v68, 4);
    if ( *(uint32_t *)(*v56 - 12) != 0 )
      sub_192C9E0(&v73, *v56, *(uint32_t *)(*v56 - 12));
    sub_192C9E0(&v73, v3 + 200, 4);
    sub_192C9E0(&v73, v3 + 204, 4);
    *(uint32_t *)&v65[1] = (*((uint32_t *)v3 + 53) - *((uint32_t *)v3 + 52)) >> 2;
    sub_192C9E0(&v73, &v65[1], 4);
    v10 = *((uint32_t *)v3 + 52);
    if ( (unsigned int)(*((uint32_t *)v3 + 53) - v10) > 7 )
    {
      v11 = 1;
      do
      {
        (*(void (**)(int *))(**(uint32_t **)(v10 + 4 * v11) + 20))(&v66);
        v69 = *(uint32_t *)(v66 - 12);
        sub_192C9E0(&v73, &v69, 4);
        v12 = v66;
        if ( *(uint32_t *)(v66 - 12) != 0 )
        {
          sub_192C9E0(&v73, v66, *(uint32_t *)(v66 - 12));
          v12 = v66;
        }
        if ( (uint32_t *)(v12 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v12 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v12 - 12));
        }
        v10 = *((uint32_t *)v3 + 52);
        ++v11;
      }
      while ( v11 < (*((uint32_t *)v3 + 53) - v10) >> 2 );
    }
    v67 = (*((uint32_t *)v3 + 56) - *((uint32_t *)v3 + 55)) >> 3;
    sub_192C9E0(&v73, &v67, 4);
    v13 = *((uint32_t *)v3 + 55);
    if ( (unsigned int)(*((uint32_t *)v3 + 56) - v13) >> 3 != 0 )
    {
      v64 = v3;
      v14 = 0;
      do
      {
        v15 = (uint32_t *)glf::fs2::Path::String((glf::fs2::Path::Self *)(v13 + 8 * v14));
        v70 = *(uint32_t *)(*v15 - 12);
        sub_192C9E0(&v73, &v70, 4);
        if ( *(uint32_t *)(*v15 - 12) != 0 )
          sub_192C9E0(&v73, *v15, *(uint32_t *)(*v15 - 12));
        ++v14;
        v13 = *((uint32_t *)v64 + 55);
      }
      while ( v14 < (*((uint32_t *)v64 + 56) - v13) >> 3 );
      v3 = v64;
    }
    v71 = *((uint32_t *)v3 + 59) - *((uint32_t *)v3 + 58);
    sub_192C9E0(&v73, &v71, 4);
    v16 = *((uint32_t *)v3 + 59);
    v17 = *((uint32_t *)v3 + 58);
    if ( v16 != v17 )
      sub_192C9E0(&v73, *((uint32_t *)v3 + 58), v16 - v17);
    v71 = *((uint32_t *)v3 + 62) - *((uint32_t *)v3 + 61);
    sub_192C9E0(&v73, &v71, 4);
    v18 = *((uint32_t *)v3 + 62);
    v19 = *((uint32_t *)v3 + 61);
    if ( v18 != v19 )
      sub_192C9E0(&v73, *((uint32_t *)v3 + 61), v18 - v19);
    v71 = *((uint32_t *)v3 + 65) - *((uint32_t *)v3 + 64);
    sub_192C9E0(&v73, &v71, 4);
    v20 = *((uint32_t *)v3 + 65);
    v21 = *((uint32_t *)v3 + 64);
    if ( v20 != v21 )
      sub_192C9E0(&v73, *((uint32_t *)v3 + 64), v20 - v21);
    v71 = (*((uint32_t *)v3 + 68) - *((uint32_t *)v3 + 67)) >> 2;
    sub_192C9E0(&v73, &v71, 4);
    v22 = *((uint32_t *)v3 + 68);
    v23 = *((uint32_t *)v3 + 67);
    if ( v22 != v23 )
      sub_192C9E0(&v73, *((uint32_t *)v3 + 67), (v22 - v23) & 0xFFFFFFFC);
    v71 = -1431655765 * ((*((uint32_t *)v3 + 71) - *((uint32_t *)v3 + 70)) >> 2);
    sub_192C9E0(&v73, &v71, 4);
    v24 = *((uint32_t *)v3 + 71);
    v25 = *((uint32_t *)v3 + 70);
    if ( v24 != v25 )
      sub_192C9E0(&v73, *((uint32_t *)v3 + 70), (v24 - v25) & 0xFFFFFFFC);
    v71 = (*((uint32_t *)v3 + 74) - *((uint32_t *)v3 + 73)) >> 1;
    sub_192C9E0(&v73, &v71, 4);
    v26 = *((uint32_t *)v3 + 74);
    v27 = *((uint32_t *)v3 + 73);
    if ( v26 != v27 )
      sub_192C9E0(&v73, *((uint32_t *)v3 + 73), (v26 - v27) & 0xFFFFFFFE);
    v71 = (*((uint32_t *)v3 + 77) - *((uint32_t *)v3 + 76)) >> 2;
    sub_192C9E0(&v73, &v71, 4);
    v28 = *((uint32_t *)v3 + 77);
    v29 = *((uint32_t *)v3 + 76);
    if ( v28 != v29 )
      sub_192C9E0(&v73, *((uint32_t *)v3 + 76), (v28 - v29) & 0xFFFFFFFC);
    v71 = *((uint32_t *)v3 + 80) - *((uint32_t *)v3 + 79);
    sub_192C9E0(&v73, &v71, 4);
    v30 = *((uint32_t *)v3 + 80);
    v31 = *((uint32_t *)v3 + 79);
    if ( v30 != v31 )
      sub_192C9E0(&v73, *((uint32_t *)v3 + 79), v30 - v31);
    v71 = (*((uint32_t *)v3 + 83) - *((uint32_t *)v3 + 82)) >> 3;
    sub_192C9E0(&v73, &v71, 4);
    v32 = *((uint32_t *)v3 + 83);
    v33 = *((uint32_t *)v3 + 82);
    if ( v32 != v33 )
      sub_192C9E0(&v73, *((uint32_t *)v3 + 82), (v32 - v33) & 0xFFFFFFF8);
    v71 = (*((uint32_t *)v3 + 86) - *((uint32_t *)v3 + 85)) >> 1;
    sub_192C9E0(&v73, &v71, 4);
    v34 = *((uint32_t *)v3 + 86);
    v35 = *((uint32_t *)v3 + 85);
    if ( v34 != v35 )
      sub_192C9E0(&v73, *((uint32_t *)v3 + 85), (v34 - v35) & 0xFFFFFFFE);
    v71 = (*((uint32_t *)v3 + 89) - *((uint32_t *)v3 + 88)) >> 3;
    sub_192C9E0(&v73, &v71, 4);
    v36 = *((uint32_t *)v3 + 89);
    v37 = *((uint32_t *)v3 + 88);
    if ( v36 != v37 )
      sub_192C9E0(&v73, *((uint32_t *)v3 + 88), (v36 - v37) & 0xFFFFFFF8);
    v71 = (*((uint32_t *)v3 + 92) - *((uint32_t *)v3 + 91)) >> 3;
    sub_192C9E0(&v73, &v71, 4);
    v38 = *((uint32_t *)v3 + 92);
    v39 = *((uint32_t *)v3 + 91);
    if ( v38 != v39 )
      sub_192C9E0(&v73, *((uint32_t *)v3 + 91), (v38 - v39) & 0xFFFFFFF8);
    v71 = (*((uint32_t *)v3 + 95) - *((uint32_t *)v3 + 94)) >> 3;
    sub_192C9E0(&v73, &v71, 4);
    v40 = *((uint32_t *)v3 + 95);
    v41 = *((uint32_t *)v3 + 94);
    if ( v40 != v41 )
      sub_192C9E0(&v73, *((uint32_t *)v3 + 94), (v40 - v41) & 0xFFFFFFF8);
    v71 = (*((uint32_t *)v3 + 98) - *((uint32_t *)v3 + 97)) >> 3;
    sub_192C9E0(&v73, &v71, 4);
    v42 = *((uint32_t *)v3 + 98);
    v43 = *((uint32_t *)v3 + 97);
    if ( v42 != v43 )
      sub_192C9E0(&v73, *((uint32_t *)v3 + 97), (v42 - v43) & 0xFFFFFFF8);
    v53 = v62;
    glf::fs2::IndexData::ResolveOffsets();
  }
  v44 = v83;
  v73 = (void (**)(glf::basic_ofstream<char, std::char_traits<char>> *))(uintptr_t)(((uint32_t)(uintptr_t)&off_206DE8C));
  v84[0] = ((uint32_t)(uintptr_t)&off_206DEA0);
  v74 = (void (**)(glf::basic_filebuf<char, std::char_traits<char>> *))(uintptr_t)(((uint32_t)(uintptr_t)&off_206D728));
  if ( v83 != nullptr )
  {
    if ( __sync_fetch_and_add(v83 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v44, 8, v53);
      G4_VCALL<void>(v44, 16);
    }
    else
    {
      v45 = *((uint32_t *)v44 + 1);
      _mm_mfence();
      if ( v45 == 1 )
        G4_VCALL<void>(v44, 12, v53);
    }
  }
  v46 = v82;
  if ( v82 != nullptr )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)v82 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v46, 8);
      G4_VCALL<void>(v46, 16);
    }
    else
    {
      v47 = *((uint32_t *)v46 + 1);
      _mm_mfence();
      if ( v47 == 1 )
        G4_VCALL<void>(v46, 12);
    }
  }
  v74 = (void (**)(glf::basic_filebuf<char, std::char_traits<char>> *))&off_20AB2C8;
  sub_1902180(v81);
  v73 = (void (**)(glf::basic_ofstream<char, std::char_traits<char>> *))&off_206DECC;
  v84[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  return sub_1900B90(v84);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IsRangeUnique  (binary VA: 0xca82b0)
// Original: glf::fs2::IsRangeUnique
// ----------------------------------------------------------------------------
int glf::fs2::IsRangeUnique(int a1, int a2)
{
  int result;
  int i;
  int v4;
  int v5;

  result = 1;
  if ( a1 != a2 )
  {
    for ( i = a1 + 16; a2 != i - 8; i += 8 )
    {
      v4 = *(uint32_t *)(i - 16);
      if ( v4 == *(uint32_t *)(i - 8) )
        return 0;
      v5 = i;
      while ( a2 != v5 )
      {
        v5 += 8;
        if ( *(uint32_t *)(v5 - 8) == v4 )
          return 0;
      }
    }
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::DoesPathMatch  (binary VA: 0xca8310)
// Original: glf::fs2::DoesPathMatch
// ----------------------------------------------------------------------------
bool glf::fs2::DoesPathMatch(glf::fs2::Self *self, const glf::fs2::Path::Self *a2)
{
  return glf::fs2::Path::Compare(a2, self) == 0;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::IsDir  (binary VA: 0xca8340)
// Original: glf::fs2::IndexData::IsDir
// ----------------------------------------------------------------------------
bool glf::fs2::IndexData::IsDir(glf::fs2::IndexData::Self *self, unsigned int a2)
{
  return a2 < -1431655765 * ((*((uint32_t *)self + 71) - *((uint32_t *)self + 70)) >> 2);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::GetFolderName  (binary VA: 0xca8370)
// Original: glf::fs2::IndexData::GetFolderName
// ----------------------------------------------------------------------------
int glf::fs2::IndexData::GetFolderName(glf::fs2::IndexData::Self *self, uint16_t a2)
{
  if ( *((uint8_t *)self + 189) != 0 )
    return *(uint32_t *)(*((uint32_t *)self + 67) + 4 * a2);
  else
    return *(uint32_t *)(*((uint32_t *)self + 67) + 4 * a2) + *((uint32_t *)self + 58);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::GetFileName  (binary VA: 0xca83b0)
// Original: glf::fs2::IndexData::GetFileName
// ----------------------------------------------------------------------------
int glf::fs2::IndexData::GetFileName(glf::fs2::IndexData::Self *self, unsigned int a2)
{
  if ( *((uint8_t *)self + 189) != 0 )
    return *(uint32_t *)(*((uint32_t *)self + 67) + 4 * a2);
  else
    return *(uint32_t *)(*((uint32_t *)self + 67) + 4 * a2) + *((uint32_t *)self + 58);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::GetSubFileIdx  (binary VA: 0xca83f0)
// Original: glf::fs2::IndexData::GetSubFileIdx
// ----------------------------------------------------------------------------
unsigned int glf::fs2::IndexData::GetSubFileIdx(glf::fs2::IndexData::Self *a1, int16_t a2, size_t a3, int a4, const void **a5, char a6)
{
  const char *s;
  size_t v8;
  size_t v9;
  char *v10;
  unsigned int v11;
  unsigned int v12;
  signed int v13;
  size_t v14;
  size_t v15;
  size_t v16;
  int v17;
  size_t v18;
  size_t n;
  int v20;
  int v21;
  char v22;
  signed int v23;
  size_t v24;
  unsigned int v25;
  size_t v26;
  size_t v27;

  v25 = 0xFFFFFFFF;
  if ( a3 == a4 )
    return v25;
  v25 = a3 + ((a4 - a3) >> 1);
  s = (const char *)glf::fs2::IndexData::GetFileName(a1, v25);
  if ( a6 != 0 )
  {
    v14 = strlen(s);
    v15 = (size_t)a5[1];
    v16 = v15;
    if ( v14 <= v15 )
      v16 = v14;
    v17 = memcmp(*a5, s, v16);
    if ( v17 != 0 )
    {
      if ( v17 >= 0 )
        goto LABEL_25;
    }
    else if ( v14 <= v15 )
    {
      if ( v14 >= v15 )
        return v25;
LABEL_25:
      v22 = 1;
      v18 = v25 + 1;
LABEL_26:
      v21 = (int)(uintptr_t)(a5);
      v20 = a4;
      n = v18;
      return glf::fs2::IndexData::GetSubFileIdx(a1, a2, n, v20, v21, v22);
    }
    v22 = 1;
    v21 = (int)(uintptr_t)(a5);
    v20 = a3 + ((a4 - a3) >> 1);
    n = a3;
    return glf::fs2::IndexData::GetSubFileIdx(a1, a2, n, v20, v21, v22);
  }
  v8 = strlen(s);
  v27 = v8;
  v9 = (size_t)a5[1];
  v10 = (char *)*a5;
  v26 = v9;
  if ( v8 <= v9 )
    v9 = v8;
  v24 = v9;
  if ( v9 != 0 )
  {
    do
    {
      v11 = *v10;
      v23 = v11;
      if ( v11 <= 0xFF )
        v23 = *(int16_t *)(toupper_tab_ + 2 * v11 + 2);
      v12 = *s;
      v13 = v12;
      if ( v12 <= 0xFF )
        v13 = *(int16_t *)(toupper_tab_ + 2 * v12 + 2);
      if ( v23 < v13 )
        goto LABEL_19;
      if ( v11 <= 0xFF )
        v11 = *(int16_t *)(toupper_tab_ + 2 * v11 + 2);
      if ( v12 <= 0xFF )
        v12 = *(int16_t *)(toupper_tab_ + 2 * v12 + 2);
      if ( (int)v11 > (int)v12 )
        goto LABEL_30;
      ++v10;
      ++s;
    }
    while ( --v24 != 0 );
  }
  if ( v27 <= v26 )
  {
    if ( v27 < v26 )
    {
LABEL_30:
      v22 = 0;
      v18 = v25 + 1;
      goto LABEL_26;
    }
    return v25;
  }
LABEL_19:
  v21 = (int)(uintptr_t)(a5);
  v22 = 0;
  v20 = a3 + ((a4 - a3) >> 1);
  n = a3;
  return glf::fs2::IndexData::GetSubFileIdx(a1, a2, n, v20, v21, v22);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::GetSubFileIdx  (binary VA: 0xca8610)
// Original: glf::fs2::IndexData::GetSubFileIdx
// ----------------------------------------------------------------------------
unsigned int glf::fs2::IndexData::GetSubFileIdx(glf::fs2::IndexData::Self *a1, uint16_t a2, const void **a3)
{
  int v3;
  unsigned int result;
  const char *s;
  size_t n;
  size_t v7;
  char *v8;
  unsigned int v9;
  unsigned int v10;
  signed int v11;
  size_t v12;
  signed int v13;
  size_t v14;
  size_t v15;
  int v16;
  uint16_t v17;
  int v18;

  v18 = *((uint32_t *)a1 + 70) + 12 * a2;
  v3 = *((uint32_t *)a1 + 50);
  if ( (v3 & 0x20000000) != 0 )
  {
    result = glf::fs2::IndexData::GetSubFileIdx(
               a1,
               a2,
               *(uint32_t *)(v18 + 8),
               *(uint32_t *)(v18 + 8) + *(uint32_t *)(v18 + 4),
               a3,
               1);
    if ( result != -1 )
      return result;
  }
  else if ( (v3 & 0x40000000) != 0 )
  {
    result = glf::fs2::IndexData::GetSubFileIdx(
               a1,
               a2,
               *(uint32_t *)(v18 + 8),
               *(uint32_t *)(v18 + 4) + *(uint32_t *)(v18 + 8),
               a3,
               0);
    if ( result != -1 )
      return result;
  }
  result = 0xFFFFFFFF;
  if ( *(uint32_t *)(v18 + 4) != 0 )
  {
    v16 = 0;
    v17 = 0;
    while ( 1 )
    {
      s = (const char *)glf::fs2::IndexData::GetFileName(a1, *(uint32_t *)(v18 + 8) + v16);
      n = strlen(s);
      v15 = n;
      if ( (*((uint8_t *)a1 + 202) & 4) != 0 )
      {
        v12 = (size_t)a3[1];
        if ( n > v12 )
          n = (size_t)a3[1];
        if ( memcmp(*a3, s, n) != 0 )
          goto LABEL_21;
      }
      else
      {
        v7 = (size_t)a3[1];
        if ( n <= v7 )
          v7 = n;
        v8 = (char *)*a3;
        v14 = v7;
        if ( v7 != 0 )
        {
          do
          {
            v9 = *v8;
            v13 = v9;
            if ( v9 <= 0xFF )
              v13 = *(int16_t *)(toupper_tab_ + 2 * v9 + 2);
            v10 = *s;
            v11 = v10;
            if ( v10 <= 0xFF )
              v11 = *(int16_t *)(toupper_tab_ + 2 * v10 + 2);
            if ( v13 < v11 )
              goto LABEL_21;
            if ( v9 <= 0xFF )
              v9 = *(int16_t *)(toupper_tab_ + 2 * v9 + 2);
            if ( v10 <= 0xFF )
              v10 = *(int16_t *)(toupper_tab_ + 2 * v10 + 2);
            if ( (int)v9 > (int)v10 )
              goto LABEL_21;
            ++v8;
            ++s;
          }
          while ( --v14 != 0 );
        }
        v12 = (size_t)a3[1];
      }
      if ( v15 <= v12 && v15 >= v12 )
        return *(uint32_t *)(v18 + 8) + v16;
LABEL_21:
      v16 = ++v17;
      if ( (unsigned int)v17 >= *(uint32_t *)(v18 + 4) )
        return -1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::GetSubFolder  (binary VA: 0xca8870)
// Original: glf::fs2::IndexData::GetSubFolder
// ----------------------------------------------------------------------------
int glf::fs2::IndexData::GetSubFolder(glf::fs2::IndexData::Self *self, uint16_t a2, uint16_t a3)
{
  return *((uint32_t *)self + 70) + 12 * (*(uint16_t *)(*((uint32_t *)self + 70) + 12 * a2 + 2) + a3);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::GetSubFolderIdx  (binary VA: 0xca88a0)
// Original: glf::fs2::IndexData::GetSubFolderIdx
// ----------------------------------------------------------------------------
int16_t glf::fs2::IndexData::GetSubFolderIdx(glf::fs2::IndexData::Self *self, uint16_t a2, uint16_t a3)
{
  return *(uint16_t *)(*((uint32_t *)self + 70) + 12 * a2 + 2) + a3;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::GetSubFolderName  (binary VA: 0xca88c0)
// Original: glf::fs2::IndexData::GetSubFolderName
// ----------------------------------------------------------------------------
int glf::fs2::IndexData::GetSubFolderName(glf::fs2::IndexData::Self *self, uint16_t a2, uint16_t a3)
{
  uint16_t SubFolderIdx;

  SubFolderIdx = glf::fs2::IndexData::GetSubFolderIdx(self, a2, a3);
  return glf::fs2::IndexData::GetFolderName(self, SubFolderIdx);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::IsSorted  (binary VA: 0xca8920)
// Original: glf::fs2::IndexData::IsSorted
// ----------------------------------------------------------------------------
int glf::fs2::IndexData::IsSorted(glf::fs2::IndexData::Self *self, uint16_t a2)
{
  int v2;
  int16_t v3;
  uint16_t v4; // bp
  glf::Self *s1;
  const char *SubFolderName;
  const char *s2;
  int v8;
  char v9;
  unsigned int v10;
  const char *v11;
  const char *v12;
  int v13;
  char v14;
  int v15;
  uint16_t v16; // bp
  int v17;
  uint16_t SubFolderIdx;
  const char *v20;
  const char *v21;
  char v22;
  bool v23;
  glf::Self *v24;
  glf::Self *FileName;

  v23 = true;
  v22 = 1;
  v2 = *((uint32_t *)self + 70) + 12 * a2;
  v3 = *(uint16_t *)v2;
  if ( *(uint16_t *)v2 > 1u )
  {
    v4 = 1;
    v24 = (glf::Self *)(*((uint32_t *)self + 70) + 12 * a2);
    do
    {
      s1 = (glf::Self *)glf::fs2::IndexData::GetSubFolderName(self, a2, v4 - 1);
      SubFolderName = (const char *)glf::fs2::IndexData::GetSubFolderName(self, a2, v4);
      s2 = SubFolderName;
      if ( v22 != 0 )
      {
        v20 = SubFolderName;
        v8 = glf::Stricmp(s1, SubFolderName);
        v9 = 0;
        s2 = v20;
        if ( v8 <= 0 )
          v9 = v22;
        v22 = v9;
      }
      if ( v23 )
        v23 = strcmp((const char *)s1, s2) <= 0;
      ++v4;
      v3 = *(uint16_t *)v24;
    }
    while ( *(uint16_t *)v24 > v4 );
    v2 = (int)(uintptr_t)(v24);
  }
  if ( *(uint32_t *)(v2 + 4) > 1u )
  {
    v10 = 1;
    do
    {
      FileName = (glf::Self *)glf::fs2::IndexData::GetFileName(self, v10 + *(uint32_t *)(v2 + 8) - 1);
      v11 = (const char *)glf::fs2::IndexData::GetFileName(self, v10 + *(uint32_t *)(v2 + 8));
      v12 = v11;
      if ( v22 != 0 )
      {
        v21 = v11;
        v13 = glf::Stricmp(FileName, v11);
        v14 = 0;
        v12 = v21;
        if ( v13 <= 0 )
          v14 = v22;
        v22 = v14;
      }
      if ( v23 )
        v23 = strcmp((const char *)FileName, v12) <= 0;
      ++v10;
    }
    while ( *(uint32_t *)(v2 + 4) > v10 );
    v3 = *(uint16_t *)v2;
  }
  v15 = (v23 << 31 >> 31) & 0x20000000;
  if ( v22 != 0 )
    v15 = !v23 ? 0x40000000 : 1610612736;
  if ( v3 != 0 )
  {
    v16 = 0;
    v17 = v15;
    do
    {
      SubFolderIdx = glf::fs2::IndexData::GetSubFolderIdx(self, a2, v16);
      v17 &= glf::fs2::IndexData::IsSorted(self, SubFolderIdx);
      if ( v17 == 0 )
        break;
      ++v16;
    }
    while ( *(uint16_t *)v2 > v16 );
    return v17;
  }
  return v15;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::GetSubFolderIdx  (binary VA: 0xca8b30)
// Original: glf::fs2::IndexData::GetSubFolderIdx
// ----------------------------------------------------------------------------
int glf::fs2::IndexData::GetSubFolderIdx(glf::fs2::IndexData::Self *a1, int16_t a2, uint16_t a3, uint16_t a4, int a5)
{
  int v5;
  int v7;
  size_t v8;
  size_t n;
  int v10;
  const char *s2;
  const char *s;
  void *v14;

  v5 = -1;
  if ( a3 != a4 )
  {
    LOWORD(v7) = glf::fs2::IndexData::GetSubFolderIdx(a1, a2, a3 + (a4 - a3) / 2);
    v5 = v7;
    s = (const char *)glf::fs2::IndexData::GetFolderName(a1, v7);
    v8 = strlen(s);
    n = *(uint32_t *)(a5 + 4);
    if ( v8 <= n )
      n = v8;
    s2 = s;
    v14 = *(void **)(a5 + 4);
    v10 = memcmp(*(const void **)a5, s2, n);
    if ( v10 != 0 )
    {
      if ( v10 >= 0 )
        return glf::fs2::IndexData::GetSubFolderIdx(a1, a2, a3 + (a4 - a3) / 2 + 1, a4, a5);
    }
    else if ( v8 <= (unsigned int)(uintptr_t)(v14) )
    {
      if ( v8 >= (unsigned int)(uintptr_t)(v14) )
        return v5;
      return glf::fs2::IndexData::GetSubFolderIdx(a1, a2, a3 + (a4 - a3) / 2 + 1, a4, a5);
    }
    return glf::fs2::IndexData::GetSubFolderIdx(a1, a2, a3, a3 + (a4 - a3) / 2, a5);
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::Print  (binary VA: 0xca8c80)
// Original: glf::fs2::IndexData::Print
// ----------------------------------------------------------------------------
void glf::fs2::IndexData::Print(glf::fs2::IndexData::Self *a1, uint16_t a2, char *a3, FILE *stream)
{
  int v4;
  int FolderName;
  const char *v6;
  uint16_t v7; // di
  int16_t SubFolderIdx;
  unsigned int v9;
  int FileName;
  int v11;
  unsigned int v12;
  int v13;
  char *format;
  uint16_t v15;
  char *v16;

  v4 = *((uint32_t *)a1 + 70) + 12 * a2;
  FolderName = glf::fs2::IndexData::GetFolderName(a1, a2);
  glf::Console::Print((glf::Console::Self *)"%*c+%s\n", a3, 32, FolderName);
  if ( stream != nullptr )
  {
    v6 = (const char *)glf::fs2::IndexData::GetFolderName(a1, a2);
    fprintf(stream, "%*c+%s\n", (int)(uintptr_t)(a3), 32, v6);
  }
  v7 = 0;
  v16 = a3 + 4;
  while ( *(uint16_t *)v4 > v7 )
  {
    v15 = v7++;
    SubFolderIdx = glf::fs2::IndexData::GetSubFolderIdx(a1, a2, v15);
    glf::fs2::IndexData::Print(a1, SubFolderIdx, v16, stream);
  }
  if ( *(uint32_t *)(v4 + 4) != 0 )
  {
    v9 = 0;
    if ( stream != nullptr )
    {
      do
      {
        FileName = glf::fs2::IndexData::GetFileName(a1, v9 + *(uint32_t *)(v4 + 8));
        glf::Console::Print((glf::Console::Self *)"%*c-%s\n", v16, 32, FileName, stream);
        format = (char *)(v9 + *(uint32_t *)(v4 + 8));
        ++v9;
        v11 = glf::fs2::IndexData::GetFileName(a1, (unsigned int)(uintptr_t)(format));
        fprintf(stream, "%*c-%s\n", v16, 32, v11, stream);
      }
      while ( *(uint32_t *)(v4 + 4) > v9 );
    }
    else
    {
      do
      {
        v12 = v9 + *(uint32_t *)(v4 + 8);
        ++v9;
        v13 = glf::fs2::IndexData::GetFileName(a1, v12);
        glf::Console::Print((glf::Console::Self *)"%*c-%s\n", v16, 32, v13, 0);
      }
      while ( v9 < *(uint32_t *)(v4 + 4) );
    }
  }
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::GetSubFolderIdx  (binary VA: 0xca8e70)
// Original: glf::fs2::IndexData::GetSubFolderIdx
// ----------------------------------------------------------------------------
int glf::fs2::IndexData::GetSubFolderIdx(glf::fs2::IndexData::Self *a1, uint16_t a2, const void **a3)
{
  uint16_t *v3;
  const char *s;
  size_t n;
  size_t v6;
  char *v7;
  unsigned int v8;
  unsigned int v9;
  signed int v10;
  size_t v12;
  bool v13;
  signed int v14;
  size_t v15;
  size_t v16;
  size_t v17;
  uint16_t v18;
  uint16_t SubFolderIdx;
  uint16_t *v20;

  v3 = (uint16_t *)(*((uint32_t *)a1 + 70) + 12 * a2);
  v20 = v3;
  if ( (*((uint8_t *)a1 + 203) & 0x20) == 0 )
  {
    v18 = 0;
    if ( *v3 == 0 )
      return -1;
    while ( 1 )
    {
      SubFolderIdx = glf::fs2::IndexData::GetSubFolderIdx(a1, a2, v18);
      s = (const char *)glf::fs2::IndexData::GetFileName(a1, SubFolderIdx);
      n = strlen(s);
      v16 = n;
      if ( (*((uint8_t *)a1 + 202) & 4) != 0 )
        break;
      v6 = (size_t)a3[1];
      v17 = v6;
      if ( n <= v6 )
        v6 = n;
      v7 = (char *)*a3;
      v15 = v6;
      if ( v6 != 0 )
      {
        do
        {
          v8 = *v7;
          v14 = v8;
          if ( v8 <= 0xFF )
            v14 = *(int16_t *)(toupper_tab_ + 2 * v8 + 2);
          v9 = *s;
          v10 = v9;
          if ( v9 <= 0xFF )
            v10 = *(int16_t *)(toupper_tab_ + 2 * v9 + 2);
          if ( v14 < v10 )
            goto LABEL_19;
          if ( v8 <= 0xFF )
            v8 = *(int16_t *)(toupper_tab_ + 2 * v8 + 2);
          if ( v9 <= 0xFF )
            v9 = *(int16_t *)(toupper_tab_ + 2 * v9 + 2);
          if ( (int)v8 > (int)v9 )
            goto LABEL_19;
          ++v7;
          ++s;
        }
        while ( --v15 != 0 );
      }
      v13 = v16 < v17;
      if ( v16 <= v17 )
        goto LABEL_25;
LABEL_19:
      if ( *v20 <= ++v18 )
        return -1;
    }
    v12 = (size_t)a3[1];
    if ( n > v12 )
      n = (size_t)a3[1];
    if ( memcmp(*a3, s, n) != 0 )
      goto LABEL_19;
    v13 = v16 < v12;
    if ( v16 > v12 )
      goto LABEL_19;
LABEL_25:
    if ( !v13 )
      return SubFolderIdx;
    goto LABEL_19;
  }
  return glf::fs2::IndexData::GetSubFolderIdx(a1, a2, 0, *v3, (int)(uintptr_t)(a3));
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::GetSubFolderIdx  (binary VA: 0xca9070)
// Original: glf::fs2::IndexData::GetSubFolderIdx
// ----------------------------------------------------------------------------
int glf::fs2::IndexData::GetSubFolderIdx(glf::fs2::IndexData::Self *self, uint16_t a2, const char *s)
{
  int v4[3];

  v4[0] = (int)(uintptr_t)(s);
  v4[1] = strlen(s);
  return glf::fs2::IndexData::GetSubFolderIdx(self, a2, (const void **)v4);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::GetEntryIdx  (binary VA: 0xca90d0)
// Original: glf::fs2::IndexData::GetEntryIdx
// ----------------------------------------------------------------------------
unsigned int glf::fs2::IndexData::GetEntryIdx(glf::fs2::IndexData::Self *self, const glf::fs2::Path::Self *a2)
{
  int v2;
  char *v3;
  uint32_t *v4;
  unsigned int v5;
  int v6;
  int v7;
  int v8;
  int k;
  unsigned int *v10;
  unsigned int v11;
  size_t v12;
  size_t v13;
  void *v14;
  uint16_t SubFolderIdx;
  uint16_t v16;
  uint16_t v17; // si
  const char *v19;
  unsigned int v20;
  unsigned int v21;
  glf::fs2::IndexData::Self **v22;
  glf::fs2::IndexData::Self *v23;
  int v24;
  unsigned int *v25;
  int v26;
  unsigned int *v27;
  unsigned int *v28;
  int v29;
  int v30;
  unsigned int *v31;
  unsigned int *v32;
  glf::fs2::IndexData::Self *v33;
  char *FileName;
  unsigned int v35;
  int v36;
  int v37;
  int i;
  int v39;
  unsigned int *v40;
  bool j;
  int v42;
  unsigned int *v43;
  glf::fs2::IndexData::Self *v44;
  glf::fs2::IndexData::Self *v45;
  int v46;
  unsigned int *v47;
  int v48;
  unsigned int *v49;
  unsigned int *v50;
  uint8_t *v51;
  int v52;
  unsigned int *v53;
  unsigned int *v54;
  int v55;
  int v56;
  typedef unsigned int _g4_t_v57;
  typedef glf::fs2::IndexData::Self *_g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef unsigned int *_g4_t_v62;
  typedef uint32_t *_g4_t_v63;
  typedef int _g4_t_v64;
  typedef uint16_t *_g4_t_v65;
  typedef int _g4_t_v66;
  typedef uint16_t _g4_t_v67;
  typedef int _g4_t_v68;
  typedef glf::fs2::IndexData::Self *_g4_t_v69;
  typedef glf::fs2::IndexData::Self *_g4_t_v70;
  typedef glf::fs2::IndexData::Self *_g4_t_v71;
  typedef uint32_t *_g4_t_s2;
  typedef int _g4_t_s2a;
  typedef int _g4_t_s2b;
  typedef uint8_t *_g4_t_s2c;
  typedef int _g4_t_m;
  typedef int _g4_t_ii;
  typedef uint16_t *_g4_t_v78;
  typedef uint16_t _g4_t_v79;
  typedef char *_g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef uint8_t _g4_t_v83[9];
  typedef uint32_t _g4_t_v84[4];
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef uint32_t _g4_t_v89[4];
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef void *_g4_t_s1;
  typedef size_t _g4_t_n;
  typedef uint32_t _g4_t_v94[4];
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef uint32_t _g4_t_v99[4];
  typedef uint32_t _g4_t_v100[10];
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (8u + sizeof(_g4_t_v57)) > _g4_s0 ? (8u + sizeof(_g4_t_v57)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v58)) > _g4_s1 ? (16u + sizeof(_g4_t_v58)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v59)) > _g4_s2 ? (20u + sizeof(_g4_t_v59)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v60)) > _g4_s3 ? (24u + sizeof(_g4_t_v60)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v61)) > _g4_s4 ? (28u + sizeof(_g4_t_v61)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v62)) > _g4_s5 ? (28u + sizeof(_g4_t_v62)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v63)) > _g4_s6 ? (32u + sizeof(_g4_t_v63)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v64)) > _g4_s7 ? (36u + sizeof(_g4_t_v64)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v65)) > _g4_s8 ? (36u + sizeof(_g4_t_v65)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v66)) > _g4_s9 ? (36u + sizeof(_g4_t_v66)) : _g4_s9,
    _g4_s11 = (42u + sizeof(_g4_t_v67)) > _g4_s10 ? (42u + sizeof(_g4_t_v67)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v68)) > _g4_s11 ? (44u + sizeof(_g4_t_v68)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v69)) > _g4_s12 ? (48u + sizeof(_g4_t_v69)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v70)) > _g4_s13 ? (48u + sizeof(_g4_t_v70)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v71)) > _g4_s14 ? (48u + sizeof(_g4_t_v71)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_s2)) > _g4_s15 ? (52u + sizeof(_g4_t_s2)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_s2a)) > _g4_s16 ? (52u + sizeof(_g4_t_s2a)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_s2b)) > _g4_s17 ? (52u + sizeof(_g4_t_s2b)) : _g4_s17,
    _g4_s19 = (52u + sizeof(_g4_t_s2c)) > _g4_s18 ? (52u + sizeof(_g4_t_s2c)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_m)) > _g4_s19 ? (56u + sizeof(_g4_t_m)) : _g4_s19,
    _g4_s21 = (56u + sizeof(_g4_t_ii)) > _g4_s20 ? (56u + sizeof(_g4_t_ii)) : _g4_s20,
    _g4_s22 = (60u + sizeof(_g4_t_v78)) > _g4_s21 ? (60u + sizeof(_g4_t_v78)) : _g4_s21,
    _g4_s23 = (60u + sizeof(_g4_t_v79)) > _g4_s22 ? (60u + sizeof(_g4_t_v79)) : _g4_s22,
    _g4_s24 = (60u + sizeof(_g4_t_v80)) > _g4_s23 ? (60u + sizeof(_g4_t_v80)) : _g4_s23,
    _g4_s25 = (60u + sizeof(_g4_t_v81)) > _g4_s24 ? (60u + sizeof(_g4_t_v81)) : _g4_s24,
    _g4_s26 = (60u + sizeof(_g4_t_v82)) > _g4_s25 ? (60u + sizeof(_g4_t_v82)) : _g4_s25,
    _g4_s27 = (83u + sizeof(_g4_t_v83)) > _g4_s26 ? (83u + sizeof(_g4_t_v83)) : _g4_s26,
    _g4_s28 = (92u + sizeof(_g4_t_v84)) > _g4_s27 ? (92u + sizeof(_g4_t_v84)) : _g4_s27,
    _g4_s29 = (108u + sizeof(_g4_t_v85)) > _g4_s28 ? (108u + sizeof(_g4_t_v85)) : _g4_s28,
    _g4_s30 = (112u + sizeof(_g4_t_v86)) > _g4_s29 ? (112u + sizeof(_g4_t_v86)) : _g4_s29,
    _g4_s31 = (116u + sizeof(_g4_t_v87)) > _g4_s30 ? (116u + sizeof(_g4_t_v87)) : _g4_s30,
    _g4_s32 = (120u + sizeof(_g4_t_v88)) > _g4_s31 ? (120u + sizeof(_g4_t_v88)) : _g4_s31,
    _g4_s33 = (124u + sizeof(_g4_t_v89)) > _g4_s32 ? (124u + sizeof(_g4_t_v89)) : _g4_s32,
    _g4_s34 = (140u + sizeof(_g4_t_v90)) > _g4_s33 ? (140u + sizeof(_g4_t_v90)) : _g4_s33,
    _g4_s35 = (144u + sizeof(_g4_t_v91)) > _g4_s34 ? (144u + sizeof(_g4_t_v91)) : _g4_s34,
    _g4_s36 = (148u + sizeof(_g4_t_s1)) > _g4_s35 ? (148u + sizeof(_g4_t_s1)) : _g4_s35,
    _g4_s37 = (152u + sizeof(_g4_t_n)) > _g4_s36 ? (152u + sizeof(_g4_t_n)) : _g4_s36,
    _g4_s38 = (156u + sizeof(_g4_t_v94)) > _g4_s37 ? (156u + sizeof(_g4_t_v94)) : _g4_s37,
    _g4_s39 = (172u + sizeof(_g4_t_v95)) > _g4_s38 ? (172u + sizeof(_g4_t_v95)) : _g4_s38,
    _g4_s40 = (176u + sizeof(_g4_t_v96)) > _g4_s39 ? (176u + sizeof(_g4_t_v96)) : _g4_s39,
    _g4_s41 = (180u + sizeof(_g4_t_v97)) > _g4_s40 ? (180u + sizeof(_g4_t_v97)) : _g4_s40,
    _g4_s42 = (184u + sizeof(_g4_t_v98)) > _g4_s41 ? (184u + sizeof(_g4_t_v98)) : _g4_s41,
    _g4_s43 = (188u + sizeof(_g4_t_v99)) > _g4_s42 ? (188u + sizeof(_g4_t_v99)) : _g4_s42,
    _g4_s44 = (204u + sizeof(_g4_t_v100)) > _g4_s43 ? (204u + sizeof(_g4_t_v100)) : _g4_s43
  };
  alignas(16) uint8_t _g4_sf[_g4_s44];
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 8u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 16u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 20u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 24u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 28u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 28u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 32u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 36u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 36u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 36u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 42u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 44u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 48u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 48u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 48u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 52u);
  _g4_t_s2a &s2a = *reinterpret_cast<_g4_t_s2a *>(_g4_sf + 52u);
  _g4_t_s2b &s2b = *reinterpret_cast<_g4_t_s2b *>(_g4_sf + 52u);
  _g4_t_s2c &s2c = *reinterpret_cast<_g4_t_s2c *>(_g4_sf + 52u);
  _g4_t_m &m = *reinterpret_cast<_g4_t_m *>(_g4_sf + 56u);
  _g4_t_ii &ii = *reinterpret_cast<_g4_t_ii *>(_g4_sf + 56u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 60u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 60u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 60u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 60u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 60u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 83u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 92u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 108u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 112u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 116u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 120u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 124u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 140u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 144u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 148u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 152u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 156u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 172u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 176u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 180u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 184u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 188u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 204u);

  v100[6] = (uint32_t)(uintptr_t)(&self);
  v69 = self;
  v2 = *((uint32_t *)self + 50);
  if ( (v2 & 0xF00000) == 0 )
  {
    if ( (v2 & 0x20000) != 0 )
    {
      glf::fs2::Path::Filename((glf::fs2::Path::Self *)&v90);
      v33 = v69;
      v11 = -1431655765 * ((*((uint32_t *)v69 + 71) - *((uint32_t *)v69 + 70)) >> 2);
      if ( v11 < (*((uint32_t *)v69 + 68) - *((uint32_t *)v69 + 67)) >> 2 )
      {
        do
        {
          v58 = v33;
          FileName = (char *)glf::fs2::IndexData::GetFileName(v33, v11);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v83[1]), FileName, (int)(uintptr_t)(v83));
          *(uint32_t *)&v83[5] = 0;
          glf::fs2::Path::Init((glf::fs2::Path::Self *)&v83[1]);
          v59 = glf::fs2::Path::Compare((glf::fs2::Path::Self *)&v90, (const glf::fs2::Path::Self *)&v83[1]);
          glf::fs2::Path::Destroy((glf::fs2::Path::Self *)&v83[1]);
          v33 = v58;
          if ( v59 == 0 )
          {
            glf::fs2::Path::Destroy((glf::fs2::Path::Self *)&v90);
            return v11;
          }
          ++v11;
        }
        while ( v11 < (*((uint32_t *)v58 + 68) - *((uint32_t *)v58 + 67)) >> 2 );
      }
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)&v90);
    }
    glf::fs2::Path::begin((glf::fs2::Path::Self *)&v90);
    v79 = 0;
    while ( 1 )
    {
      glf::fs2::Path::end((glf::fs2::Path::Self *)v94);
      if ( v90 == v94[0] && v91 == v94[1] )
        return v79;
      v12 = n;
      v13 = 2;
      v14 = s1;
      if ( n <= 2 )
        v13 = n;
      if ( memcmp(s1, "..", v13) == 0 && v12 == 2 )
      {
        if ( v79 >= (unsigned int)(-1431655765 * ((*((uint32_t *)v69 + 71) - *((uint32_t *)v69 + 70)) >> 2)) )
          return -1;
        v79 = *(uint16_t *)(*((uint32_t *)v69 + 73) + 2 * v79);
        if ( v79 == 0xFFFF )
          return -1;
      }
      else if ( memcmp(v14, ".", v12 != 0) != 0 || v12 != 1 )
      {
        SubFolderIdx = glf::fs2::IndexData::GetSubFolderIdx(v69, v79, (const void **)&s1);
        v16 = v79;
        v17 = SubFolderIdx;
        if ( SubFolderIdx != 0xFFFF )
          v16 = SubFolderIdx;
        v79 = v16;
        glf::fs2::Path::end((glf::fs2::Path::Self *)v100);
        v95 = v100[0];
        v96 = v100[1];
        v97 = v100[2];
        v98 = v100[3];
        glf::fs2::Path::iterator::decrement((glf::fs2::Path::iterator::Self *)&v95);
        if ( v90 == v95 && v91 == v96 )
        {
          if ( v17 == 0xFFFF )
            return glf::fs2::IndexData::GetSubFileIdx(v69, v79, (const void **)&s1);
          else
            return v79;
        }
        if ( v17 == 0xFFFF )
          return -1;
      }
      glf::fs2::Path::iterator::increment((glf::fs2::Path::iterator::Self *)&v90);
    }
  }
  if ( (v2 & 0xC00000) == 0 )
  {
    v3 = (char *)self + 364;
    if ( (v2 & 0x100000) != 0 )
      v3 = (char *)self + 352;
    v63 = (uint32_t *)(v3);
    glf::fs2::Path::begin((glf::fs2::Path::Self *)&v90);
    v67 = 0;
    v4 = (uint32_t *)v63[1];
    s2 = v4;
    while ( 1 )
    {
      glf::fs2::Path::end((glf::fs2::Path::Self *)v84);
      if ( v90 == v84[0] && v91 == v84[1] )
        break;
      if ( (*((uint8_t *)v69 + 202) & 0x10) != 0 )
        v5 = glf::Crc32((glf::Self *)((char *)&dword_0 + 1), (unsigned int)(uintptr_t)(s1), (const char *)n, v57);
      else
        v5 = glf::Crc32Lower((glf::Self *)((char *)&dword_0 + 1), (unsigned int)(uintptr_t)(s1), (const char *)n, v57);
      v6 = *((uint32_t *)v69 + 70);
      v78 = (uint16_t *)(12 * v67 + v6);
      if ( *v78 == 0 )
      {
LABEL_16:
        glf::fs2::Path::end((glf::fs2::Path::Self *)v99);
        v85 = v99[0];
        v86 = v99[1];
        v88 = v99[3];
        v87 = v99[2];
        glf::fs2::Path::iterator::decrement((glf::fs2::Path::iterator::Self *)&v85);
        if ( v90 == v85 && v91 == v86 && *((uint32_t *)v78 + 1) != 0 )
        {
          v36 = *((uint32_t *)v78 + 2);
          v37 = *v63 + 8 * v36;
          for ( i = (*v63 + 8 * (*((uint32_t *)v78 + 1) + v36) - v37) >> 3; i > 0; i = v39 )
          {
            v39 = i >> 1;
            v40 = (unsigned int *)(v37 + 8 * (i >> 1));
            for ( j = v5 < *v40; v5 > *v40; j = v5 < *v40 )
            {
              v37 = (int)(uintptr_t)(v40 + 2);
              i = i - v39 - 1;
              if ( i <= 0 )
                return -1;
              v39 = i >> 1;
              v40 = (unsigned int *)(v37 + 8 * (i >> 1));
            }
            if ( !j )
            {
              s2c = (uint8_t *)v37;
              v66 = i;
              v62 = v40;
              v81 = ((int)(uintptr_t)(v40) - v37) >> 3;
LABEL_112:
              while ( v81 > 0 )
              {
                v48 = v81 >> 1;
                v49 = (unsigned int *)(v37 + 8 * (v81 >> 1));
                if ( v5 <= *v49 )
                {
                  while ( v48 != 0 )
                  {
                    v50 = (unsigned int *)(v37 + 8 * (v48 >> 1));
                    if ( v5 > *v50 )
                    {
                      v37 = (int)(uintptr_t)(v50 + 2);
                      v81 = v48 - (v48 >> 1) - 1;
                      goto LABEL_112;
                    }
                    v48 >>= 1;
                  }
                  break;
                }
                v37 = (int)(uintptr_t)(v49 + 2);
                v81 = v81 - v48 - 1;
              }
              v4 = v40 + 2;
              v51 = s2c;
              s2 = (uint32_t *)v37;
              v82 = (&v51[8 * v66] - (uint8_t *)(v62 + 2)) >> 3;
LABEL_120:
              while ( v82 > 0 )
              {
                v52 = v82 >> 1;
                v53 = &v4[2 * (v82 >> 1)];
                if ( v5 < *v53 )
                {
                  while ( v52 != 0 )
                  {
                    v54 = &v4[2 * (v52 >> 1)];
                    if ( v5 >= *v54 )
                    {
                      v4 = v54 + 2;
                      v82 = v52 - (v52 >> 1) - 1;
                      goto LABEL_120;
                    }
                    v52 >>= 1;
                  }
                  break;
                }
                v4 = v53 + 2;
                v82 = v82 - v52 - 1;
              }
              if ( v4 == s2 )
                return -1;
              goto LABEL_71;
            }
          }
          return -1;
        }
        break;
      }
      v7 = *(uint16_t *)(12 * v67 + v6 + 2);
      v8 = *v63 + 8 * v7;
      for ( k = (*v63 + 8 * (v7 + *v78) - v8) >> 3; ; k >>= 1 )
      {
        if ( k <= 0 )
        {
LABEL_14:
          v4 = (uint32_t *)v8;
LABEL_15:
          s2 = v4;
          goto LABEL_16;
        }
        while ( 1 )
        {
          v10 = (unsigned int *)(v8 + 8 * (k >> 1));
          if ( v5 <= *v10 )
            break;
          v8 = (int)(uintptr_t)(v10 + 2);
          k = k - (k >> 1) - 1;
          if ( k <= 0 )
            goto LABEL_14;
        }
        if ( v5 >= *v10 )
          break;
      }
      v64 = v8;
      v61 = v8 + 8 * (k >> 1);
      v60 = k;
      s2a = (8 * (k >> 1)) >> 3;
LABEL_54:
      while ( s2a > 0 )
      {
        v26 = s2a >> 1;
        v27 = (unsigned int *)(v8 + 8 * (s2a >> 1));
        if ( v5 <= *v27 )
        {
          while ( v26 != 0 )
          {
            v28 = (unsigned int *)(v8 + 8 * (v26 >> 1));
            if ( v5 > *v28 )
            {
              v8 = (int)(uintptr_t)(v28 + 2);
              s2a = v26 - (v26 >> 1) - 1;
              goto LABEL_54;
            }
            v26 >>= 1;
          }
          break;
        }
        v8 = (int)(uintptr_t)(v27 + 2);
        s2a = s2a - v26 - 1;
      }
      v4 = (uint32_t *)(v61 + 8);
      v29 = v64;
      v65 = (uint16_t *)v8;
      s2b = (v29 + 8 * v60 - (v61 + 8)) >> 3;
LABEL_62:
      while ( s2b > 0 )
      {
        v30 = s2b >> 1;
        v31 = &v4[2 * (s2b >> 1)];
        if ( v5 < *v31 )
        {
          while ( v30 != 0 )
          {
            v32 = &v4[2 * (v30 >> 1)];
            if ( v5 >= *v32 )
            {
              v4 = v32 + 2;
              s2b = v30 - (v30 >> 1) - 1;
              goto LABEL_62;
            }
            v30 >>= 1;
          }
          break;
        }
        v4 = v31 + 2;
        s2b = s2b - v30 - 1;
      }
      if ( v4 == (uint32_t *)v65 )
        goto LABEL_15;
      s2 = (uint32_t *)(v65);
      v67 = v65[2];
LABEL_71:
      glf::fs2::Path::iterator::increment((glf::fs2::Path::iterator::Self *)&v90);
    }
    if ( v4 == s2 )
      return -1;
    glf::fs2::Path::end((glf::fs2::Path::Self *)v89);
    v11 = 0xFFFFFFFF;
    if ( v90 == v89[0] && v91 == v89[1] )
      return s2[1];
    return v11;
  }
  v19 = *(const char **)(*(uint32_t *)a2 - 12);
  if ( (v2 & 0x400000) != 0 )
  {
    v35 = glf::fs2::Path::c_str(a2);
    v21 = glf::Crc32((glf::Self *)((char *)&dword_0 + 1), v35, v19, v57);
    v22 = (glf::fs2::IndexData::Self **)((char *)v69 + 376);
  }
  else
  {
    v20 = glf::fs2::Path::c_str(a2);
    v21 = glf::Crc32Lower((glf::Self *)((char *)&dword_0 + 1), v20, v19, v57);
    v22 = (glf::fs2::IndexData::Self **)((char *)v69 + 388);
  }
  v23 = *v22;
  v11 = 0xFFFFFFFF;
  v24 = (v22[1] - *v22) >> 3;
  if ( v24 <= 0 )
    return v11;
  while ( 1 )
  {
    v25 = (unsigned int *)((char *)v23 + 8 * (v24 >> 1));
    if ( v21 <= *v25 )
      break;
    v23 = (glf::fs2::IndexData::Self *)(v25 + 2);
    v24 = v24 - (v24 >> 1) - 1;
LABEL_44:
    if ( v24 <= 0 )
      return -1;
  }
  if ( v21 < *v25 )
  {
    v24 >>= 1;
    goto LABEL_44;
  }
  v70 = v23;
  v68 = v24;
  v80 = (char *)v23 + 8 * (v24 >> 1);
  for ( m = (8 * (v24 >> 1)) >> 3; m > 0; m = v42 - v55 - 1 )
  {
    v42 = m >> 1;
    v43 = (unsigned int *)((char *)v23 + 8 * (m >> 1));
    if ( v21 <= *v43 )
    {
      while ( v42 != 0 )
      {
        v55 = v42 >> 1;
        v43 = (unsigned int *)((char *)v23 + 8 * (v42 >> 1));
        if ( v21 > *v43 )
          goto LABEL_99;
        v42 >>= 1;
      }
      break;
    }
    v55 = m >> 1;
    v42 = m;
LABEL_99:
    v23 = (glf::fs2::IndexData::Self *)(v43 + 2);
  }
  v44 = v70;
  v71 = v23;
  v45 = (glf::fs2::IndexData::Self *)(v80 + 8);
  for ( ii = ((glf::fs2::IndexData::Self *)((char *)v44 + 8 * v68) - (glf::fs2::IndexData::Self *)(v80 + 8)) >> 3;
        ii > 0;
        ii = v46 - v56 - 1 )
  {
    v46 = ii >> 1;
    v47 = (unsigned int *)((char *)v45 + 8 * (ii >> 1));
    if ( v21 < *v47 )
    {
      while ( v46 != 0 )
      {
        v56 = v46 >> 1;
        v47 = (unsigned int *)((char *)v45 + 8 * (v46 >> 1));
        if ( v21 >= *v47 )
          goto LABEL_107;
        v46 >>= 1;
      }
      break;
    }
    v56 = ii >> 1;
    v46 = ii;
LABEL_107:
    v45 = (glf::fs2::IndexData::Self *)(v47 + 2);
  }
  if ( v45 == v71 )
    return -1;
  return *((uint32_t *)v71 + 1);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::GetFolderIdx  (binary VA: 0xca9b30)
// Original: glf::fs2::IndexData::GetFolderIdx
// ----------------------------------------------------------------------------
unsigned int glf::fs2::IndexData::GetFolderIdx(glf::fs2::IndexData::Self *a1, int a2)
{
  unsigned int EntryIdx;
  int v3;
  typedef uint8_t _g4_t_v5[4];
  typedef int _g4_t_v6;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  g4_std::string::construct_copy(v5, a2);
  v6 = 0;
  glf::fs2::Path::Init((glf::fs2::Path::Self *)v5);
  EntryIdx = glf::fs2::IndexData::GetEntryIdx(a1, (const glf::fs2::Path::Self *)v5);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v5);
  v3 = -1;
  if ( EntryIdx < -1431655765 * ((*((uint32_t *)a1 + 71) - *((uint32_t *)a1 + 70)) >> 2) )
    return EntryIdx;
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::OpenDirV  (binary VA: 0xca9bd0)
// Original: glf::fs2::IndexData::OpenDirV
// ----------------------------------------------------------------------------
int * glf::fs2::IndexData::OpenDirV(int *a1, glf::fs2::IndexData::Self *a2, glf::fs2::Path::Self *a3, int a4, int a5)
{
  glf::fs2::IndexData::Self *v5;
  int *v6;
  int v7;
  int FolderIdx;
  glf::fs2::Dir::Self *v9;
  int v10;
  uint32_t *v11;
  int v12;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef glf::fs2::Path::Self *_g4_t_v18;
  typedef uint32_t _g4_t_v19[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v15)) > _g4_s1 ? (0u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v16)) > _g4_s2 ? (4u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v17)) > _g4_s3 ? (8u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v18)) > _g4_s4 ? (12u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v19)) > _g4_s5 ? (16u + sizeof(_g4_t_v19)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);

  v19[6] = (uint32_t)(uintptr_t)(&a1);
  v5 = a2;
  v6 = a1;
  v18 = a3;
  v16 = a5;
  v17 = a4;
  v7 = (int)(uintptr_t)(glf::fs2::Path::String(a3));
  FolderIdx = (uint16_t)glf::fs2::IndexData::GetFolderIdx(v5, v7);
  if ( FolderIdx == 0xFFFF )
  {
    *v6 = 0;
  }
  else
  {
    v14 = FolderIdx;
    glf::fs2::IndexData::GetFileSystem((glf::fs2::IndexData::Self *)v19, (unsigned int)(uintptr_t)(v5), FolderIdx);
    v9 = (glf::fs2::Dir::Self *)glf::MemObject::opNew(0x46Cu);
    v10 = v14;
    v15 = (int)(uintptr_t)(v9);
    glf::fs2::DirectoryIndexed::Construct(v9, (int)(uintptr_t)(v5), (int)(uintptr_t)(v5), v10, v18, v17, v16);
    *v6 = v15;
    if ( v15 != 0 )
      __sync_add_and_fetch((volatile int32_t *)(v15 + 4), 1u);
    v11 = (uint32_t *)v19[0];
    if ( v19[0] != 0 )
    {
      if ( __sync_fetch_and_add((volatile int32_t *)(v19[0] + 4), 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v11, 8);
        G4_VCALL<void>(v11, 16);
      }
      else
      {
        v12 = v11[1];
        _mm_mfence();
        if ( v12 == 1 )
          G4_VCALL<void>(v11, 12);
      }
    }
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::GetStatusV  (binary VA: 0xca9d10)
// Original: glf::fs2::IndexData::GetStatusV
// ----------------------------------------------------------------------------
glf::fs2::IndexData::Self * glf::fs2::IndexData::GetStatusV(glf::fs2::IndexData::Self *self, const glf::fs2::Path::Self *a2, glf::fs2::Path::Self *a3)
{
  int v3;
  int v4;
  volatile int32_t *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  volatile int32_t *v12;
  volatile int32_t *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  typedef volatile int32_t *_g4_t_v19;
  typedef volatile int32_t *_g4_t_v20;
  typedef volatile int32_t *_g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef volatile int32_t *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef volatile int32_t *_g4_t_v25;
  typedef uint64_t _g4_t_v26 __attribute__((aligned(1)));
  typedef glf::fs2::Path::Self *_g4_t_v27;
  typedef unsigned int _g4_t_EntryIdx;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef uint64_t _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef uint8_t _g4_t_v41[24];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v19)) > _g4_s0 ? (12u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v20)) > _g4_s1 ? (12u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v21)) > _g4_s2 ? (12u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v22)) > _g4_s3 ? (12u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v23)) > _g4_s4 ? (12u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v24)) > _g4_s5 ? (16u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v25)) > _g4_s6 ? (16u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v26)) > _g4_s7 ? (20u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v27)) > _g4_s8 ? (32u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_EntryIdx)) > _g4_s9 ? (36u + sizeof(_g4_t_EntryIdx)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v29)) > _g4_s10 ? (44u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v30)) > _g4_s11 ? (48u + sizeof(_g4_t_v30)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v31)) > _g4_s12 ? (52u + sizeof(_g4_t_v31)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v32)) > _g4_s13 ? (56u + sizeof(_g4_t_v32)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v33)) > _g4_s14 ? (64u + sizeof(_g4_t_v33)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v34)) > _g4_s15 ? (68u + sizeof(_g4_t_v34)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v35)) > _g4_s16 ? (72u + sizeof(_g4_t_v35)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v36)) > _g4_s17 ? (76u + sizeof(_g4_t_v36)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v37)) > _g4_s18 ? (80u + sizeof(_g4_t_v37)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v38)) > _g4_s19 ? (84u + sizeof(_g4_t_v38)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v39)) > _g4_s20 ? (88u + sizeof(_g4_t_v39)) : _g4_s20,
    _g4_s22 = (92u + sizeof(_g4_t_v40)) > _g4_s21 ? (92u + sizeof(_g4_t_v40)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v41)) > _g4_s22 ? (96u + sizeof(_g4_t_v41)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_EntryIdx &EntryIdx = *reinterpret_cast<_g4_t_EntryIdx *>(_g4_sf + 36u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 48u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 52u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 56u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 64u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 68u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 72u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 76u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 80u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 84u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 88u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 92u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 96u);

  EntryIdx = glf::fs2::IndexData::GetEntryIdx((glf::fs2::IndexData::Self *)(a2), a3);
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0xFFFF;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = -1;
  *((uint32_t *)self + 4) = -1;
  *((uint32_t *)self + 3) = -1;
  v26 = -1;
  *((uint32_t *)self + 7) = -1;
  *((uint32_t *)self + 9) = -1;
  *((uint32_t *)self + 11) = -1;
  *((uint32_t *)self + 8) = -1;
  *((uint32_t *)self + 10) = -1;
  *((uint32_t *)self + 12) = -1;
  v27 = (glf::fs2::Path::Self *)((glf::fs2::IndexData::Self *)((char *)self + 52));
  glf::fs2::Path::Construct((glf::fs2::IndexData::Self *)((char *)self + 52));
  if ( EntryIdx == -1 )
    return self;
  v24 = 3 - !glf::fs2::IndexData::IsDir((glf::fs2::IndexData::Self *)(a2), EntryIdx);
  if ( !glf::fs2::IndexData::IsDir((glf::fs2::IndexData::Self *)(a2), EntryIdx) )
    v26 =g4_m128_lane<uint64_t>(_mm_cvtsi32_si128(*(uint32_t *)(*((uint32_t *)a2 + 76) + 4 * EntryIdx)), 0);
  v29 = v24;
  v32 = v26;
  v36 = -1;
  v38 = -1;
  v40 = -1;
  v30 = 0;
  v31 = 0xFFFF;
  v33 = 0;
  v34 = -1;
  v35 = -1;
  v37 = -1;
  v39 = -1;
  glf::fs2::Path::Construct((glf::fs2::Path::Self *)v41);
  if ( self != (glf::fs2::IndexData::Self *)&v29 )
  {
    v3 = HIDWORD(v32);
    *(uint32_t *)self = v29;
    *((uint32_t *)self + 1) = v30;
    *((uint32_t *)self + 4) = v3;
    v4 = v33;
    *((uint32_t *)self + 2) = v31;
    *((uint32_t *)self + 3) = v32;
    if ( v4 != 0 )
      __sync_add_and_fetch((volatile int32_t *)(v4 + 4), 1u);
    v5 = *((volatile int32_t **)self + 5);
    *((uint32_t *)self + 5) = v4;
    if ( v5 != nullptr )
    {
      if ( __sync_fetch_and_add(v5 + 1, 0xFFFFFFFF) == 1 )
      {
        v19 = v5;
        G4_VCALL<void>(v5, 8);
        G4_VCALL<void>(v19, 16);
      }
      else
      {
        v6 = *((uint32_t *)v5 + 1);
        _mm_mfence();
        if ( v6 == 1 )
          G4_VCALL<void>(v5, 12);
      }
    }
    v7 = v36;
    *((uint32_t *)self + 6) = v34;
    *((uint32_t *)self + 7) = v35;
    *((uint32_t *)self + 8) = v7;
    v8 = v40;
    *((uint32_t *)self + 11) = v39;
    *((uint32_t *)self + 12) = v8;
    v9 = v37;
    *((uint32_t *)self + 10) = v38;
    *((uint32_t *)self + 9) = v9;
    glf::fs2::Path::opAssign(v27, (const glf::fs2::Path::Self *)v41);
  }
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v41);
  v10 = (uint32_t *)v33;
  if ( v33 != 0 )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)(v33 + 4), 0xFFFFFFFF) == 1 )
    {
      v22 = v10;
      G4_VCALL<void>(v10, 8);
      G4_VCALL<void>(v22, 16);
    }
    else
    {
      v11 = v10[1];
      _mm_mfence();
      if ( v11 == 1 )
        G4_VCALL<void>(v10, 12);
    }
  }
  v12 = *(volatile int32_t **)(*((uint32_t *)a2 + 52) + 4 * *(uint8_t *)(*((uint32_t *)a2 + 61) + EntryIdx));
  if ( v12 != nullptr )
  {
    __sync_add_and_fetch(v12 + 1, 1u);
    __sync_add_and_fetch(v12 + 1, 1u);
  }
  v13 = *((volatile int32_t **)self + 5);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v12);
  if ( v13 == nullptr )
  {
LABEL_22:
    if ( v12 != nullptr )
      goto LABEL_23;
    goto LABEL_26;
  }
  if ( __sync_fetch_and_add(v13 + 1, 0xFFFFFFFF) != 1 )
  {
    v14 = *((uint32_t *)v13 + 1);
    _mm_mfence();
    if ( v14 == 1 )
    {
      v20 = v12;
      G4_VCALL<void>(v13, 12);
      v12 = v20;
    }
    goto LABEL_22;
  }
  v23 = v12;
  v25 = v13;
  G4_VCALL<void>(v13, 8);
  G4_VCALL<void>(v25, 16);
  v12 = v23;
  if ( v23 != nullptr )
  {
LABEL_23:
    if ( __sync_fetch_and_add(v12 + 1, 0xFFFFFFFF) == 1 )
    {
      v21 = v12;
      G4_VCALL<void>(v12, 8);
      G4_VCALL<void>(v21, 16);
    }
    else
    {
      v15 = *((uint32_t *)v12 + 1);
      _mm_mfence();
      if ( v15 == 1 )
        G4_VCALL<void>(v12, 12);
    }
  }
LABEL_26:
  glf::fs2::Path::opAssign(v27, a3);
  v16 = *((uint32_t *)a2 + 82);
  if ( EntryIdx < (*((uint32_t *)a2 + 83) - v16) >> 3 )
  {
    v17 = *(uint32_t *)(v16 + 8 * EntryIdx);
    *((uint32_t *)self + 10) = *(uint32_t *)(v16 + 8 * EntryIdx + 4);
    *((uint32_t *)self + 9) = v17;
    *((uint32_t *)self + 6) = 0;
    *((uint32_t *)self + 7) = -1;
    *((uint32_t *)self + 8) = -1;
    *((uint32_t *)self + 11) = -1;
    *((uint32_t *)self + 12) = -1;
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::GetParentIdx  (binary VA: 0xcaa110)
// Original: glf::fs2::IndexData::GetParentIdx
// ----------------------------------------------------------------------------
int glf::fs2::IndexData::GetParentIdx(glf::fs2::IndexData::Self *self, uint16_t a2)
{
  return *(uint16_t *)(*((uint32_t *)self + 73) + 2 * a2);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::GetParentIdx  (binary VA: 0xcaa130)
// Original: glf::fs2::IndexData::GetParentIdx
// ----------------------------------------------------------------------------
int glf::fs2::IndexData::GetParentIdx(glf::fs2::IndexData::Self *self, unsigned int a2)
{
  return *(uint16_t *)(*((uint32_t *)self + 73) + 2 * a2);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::GetFullpath  (binary VA: 0xcaa150)
// Original: glf::fs2::IndexData::GetFullpath
// ----------------------------------------------------------------------------
glf::fs2::IndexData::Self * glf::fs2::IndexData::GetFullpath(glf::fs2::IndexData::Self *self, glf::fs2::IndexData::Self *a2, unsigned int a3)
{
  unsigned int v3;
  char *FileName;
  const glf::fs2::Path::Self *v6;
  typedef unsigned int _g4_t_v8;
  typedef glf::fs2::IndexData::Self *_g4_t_v9;
  typedef uint8_t _g4_t_v10[9];
  typedef uint8_t _g4_t_v11[8];
  typedef uint8_t _g4_t_v12[36];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (23u + sizeof(_g4_t_v10)) > _g4_s2 ? (23u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v11)) > _g4_s3 ? (32u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v12)) > _g4_s4 ? (40u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 23u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 40u);

  glf::fs2::Path::Construct(self);
  v3 = a3;
  if ( a3 != -1 )
  {
    while ( 1 )
    {
      v9 = a2;
      v8 = v3;
      FileName = (char *)glf::fs2::IndexData::GetFileName(a2, v3);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10[1]), FileName, (int)(uintptr_t)(v10));
      *(uint32_t *)&v10[5] = 0;
      glf::fs2::Path::Init((glf::fs2::Path::Self *)&v10[1]);
      glf::fs2::Path::Construct((glf::fs2::Path::Self *)v12, (const glf::fs2::Path::Self *)&v10[1]);
      v6 = (const glf::fs2::Path::Self *)glf::fs2::Path::opDivAssign((glf::fs2::Path::Self *)v12, self);
      glf::fs2::Path::Construct((glf::fs2::Path::Self *)v11, v6);
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v12);
      glf::fs2::Path::opAssign(self, (const glf::fs2::Path::Self *)v11);
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v11);
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)&v10[1]);
      a2 = v9;
      LOWORD(v3) = *(uint16_t *)(*((uint32_t *)v9 + 73) + 2 * v8);
      if ( (uint16_t)v3 == 0xFFFF )
        break;
      v3 = (uint16_t)v3;
    }
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::OpenV  (binary VA: 0xcaa260)
// Original: glf::fs2::IndexData::OpenV
// ----------------------------------------------------------------------------
int glf::fs2::IndexData::OpenV(glf::fs2::IndexData::Self *a1, glf::fs2::Path::Self *a2, int a3)
{
  unsigned int EntryIdx;
  int v4;
  unsigned int v5;
  const glf::fs2::Path::Self *AltPath;
  const glf::fs2::Path::Self *v7;
  int v8;
  volatile int32_t *v9;
  int v10;
  typedef volatile int32_t *_g4_t_v12;
  typedef uint8_t _g4_t_v13[8];
  typedef uint8_t _g4_t_v14[8];
  typedef uint8_t _g4_t_v15[20];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v12)) > _g4_s0 ? (4u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v14)) > _g4_s2 ? (16u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v15)) > _g4_s3 ? (24u + sizeof(_g4_t_v15)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);

  EntryIdx = glf::fs2::IndexData::GetEntryIdx(a1, a2);
  v4 = 0;
  v5 = EntryIdx;
  if ( EntryIdx != -1 )
  {
    glf::fs2::IndexData::GetFullpath((glf::fs2::IndexData::Self *)v14, a1, EntryIdx);
    AltPath = (const glf::fs2::Path::Self *)glf::fs2::IndexData::GetAltPath(a1, v5);
    glf::fs2::Path::Construct((glf::fs2::Path::Self *)v15, AltPath);
    v7 = (const glf::fs2::Path::Self *)glf::fs2::Path::opDivAssign((glf::fs2::Path::Self *)v15, (const glf::fs2::Path::Self *)v14);
    glf::fs2::Path::Construct((glf::fs2::Path::Self *)v13, v7);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v15);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v14);
    glf::fs2::IndexData::GetFileSystem((glf::fs2::IndexData::Self *)&v12, (unsigned int)(uintptr_t)(a1), v5);
    v8 = G4_VCALL<int>(v12, 44, v13, a3);
    v9 = v12;
    v4 = v8;
    if ( v12 != nullptr )
    {
      if ( __sync_fetch_and_add(v12 + 1, 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v9, 8);
        G4_VCALL<void>(v9, 16);
        glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v13);
        return v4;
      }
      v10 = *((uint32_t *)v9 + 1);
      _mm_mfence();
      if ( v10 == 1 )
        G4_VCALL<void>(v9, 12);
    }
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v13);
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::GetFileType  (binary VA: 0xcaa3c0)
// Original: glf::fs2::IndexData::GetFileType
// ----------------------------------------------------------------------------
int glf::fs2::IndexData::GetFileType(glf::fs2::IndexData::Self *self, unsigned int a2)
{
  int result;

  result = 3;
  if ( a2 >= -1431655765 * ((*((uint32_t *)self + 71) - *((uint32_t *)self + 70)) >> 2) )
    return a2 < *((uint32_t *)self + 51) ? 2 : 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::GetPermissions  (binary VA: 0xcaa400)
// Original: glf::fs2::IndexData::GetPermissions
// ----------------------------------------------------------------------------
int glf::fs2::IndexData::GetPermissions(glf::fs2::IndexData::Self *self, unsigned int a2)
{
  int v2;
  int result;

  v2 = *((uint32_t *)self + 85);
  result = 0xFFFF;
  if ( a2 < (*((uint32_t *)self + 86) - v2) >> 1 )
    return *(uint16_t *)(v2 + 2 * a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::GetFileSize  (binary VA: 0xcaa430)
// Original: glf::fs2::IndexData::GetFileSize
// ----------------------------------------------------------------------------
int64_t glf::fs2::IndexData::GetFileSize(glf::fs2::IndexData::Self *self, unsigned int a2)
{
  int v2;
  unsigned int v3;
  int64_t result; // rax

  v2 = *((uint32_t *)self + 76);
  if ( a2 >= (*((uint32_t *)self + 77) - v2) >> 2 )
    return -1;
  v3 = *(uint32_t *)(v2 + 4 * a2);
  result = *(uint64_t *)&glf::fs2::BaseStatus::InvalidSize;
  if ( v3 != glf::fs2::BaseStatus::InvalidSize )
    return v3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::SortEntries  (binary VA: 0xcaa490)
// Original: glf::fs2::IndexData::SortEntries
// ----------------------------------------------------------------------------
int glf::fs2::IndexData::SortEntries(glf::fs2::IndexData::Self *self, uint16_t a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  unsigned int *v6;
  unsigned int v7;
  unsigned int *v8;
  unsigned int *v9;
  unsigned int *v10;
  uint16_t v11;
  uint16_t v12; // si
  uint16_t v13;
  unsigned int *v14;
  int v15;
  unsigned int v16;
  unsigned int *v17;
  unsigned int v18;
  unsigned int *v19;
  int v20;
  unsigned int *v21;
  unsigned int *v22;
  unsigned int *v23;
  unsigned int v24;
  unsigned int *v25;
  unsigned int *v26;
  unsigned int *v27;
  unsigned int v28;
  unsigned int *v29;
  unsigned int v30;
  int v31;
  unsigned int *v32;
  unsigned int v33;
  unsigned int *v34;
  unsigned int *v35;
  int v36;
  unsigned int *v37;
  unsigned int *v38;
  unsigned int v39;
  unsigned int *v40;
  unsigned int *v41;
  unsigned int *v42;
  unsigned int v43;
  int v44;
  unsigned int v45;
  unsigned int *v46;
  unsigned int v47;
  unsigned int *v48;
  int v49;
  unsigned int *v50;
  unsigned int *v51;
  unsigned int *v52;
  unsigned int v53;
  unsigned int *v54;
  unsigned int *v55;
  unsigned int v56;
  unsigned int *v57;
  unsigned int v58;
  int v59;
  unsigned int *v60;
  unsigned int v61;
  unsigned int *v62;
  unsigned int *v63;
  unsigned int *v64;
  unsigned int *v65;
  unsigned int v66;
  unsigned int *v67;
  unsigned int *v68;
  unsigned int v69;
  unsigned int *v70;
  unsigned int *v71;
  unsigned int v72;
  unsigned int *v73;
  unsigned int *v74;
  unsigned int v75;
  unsigned int *v76;
  unsigned int *v77;
  unsigned int v78;
  unsigned int *v79;
  unsigned int *v80;
  unsigned int v81;
  char *v82;
  char *v83;
  unsigned int v84;
  char *v85;
  unsigned int *v86;
  int v87;
  char *v88;
  char *v89;
  char *v90;
  int v91;
  unsigned int *v92;
  unsigned int *v93;
  unsigned int v94;
  char *v95;
  char *v96;
  unsigned int v97;
  char *v98;
  unsigned int *v99;
  int v100;
  char *v101;
  char *v102;
  char *v103;
  int v104;
  char *v105;
  char *v106;
  unsigned int v107;
  char *v108;
  unsigned int *v109;
  char *v110;
  char *v111;
  char *v112;
  int v113;
  unsigned int *v114;
  unsigned int v115;
  unsigned int *v116;
  unsigned int v117;
  unsigned int *v118;
  unsigned int v119;
  unsigned int *v120;
  unsigned int v121;
  unsigned int *v122;
  unsigned int *v123;
  unsigned int *v124;
  unsigned int *v125;
  unsigned int *v126;
  unsigned int *v127;
  unsigned int *v128;
  unsigned int *v129;
  unsigned int *v130;
  unsigned int *v131;
  unsigned int *v132;
  unsigned int *v133;
  unsigned int v134;
  unsigned int *v135;
  unsigned int *v136;
  unsigned int *v137;
  unsigned int *v138;
  unsigned int v139;
  int v140;
  int v141;
  unsigned int v142;
  int v143;
  unsigned int v144;
  int v145;
  uint16_t *v146;
  unsigned int v147;
  unsigned int v148;
  int v149;
  unsigned int v150;
  unsigned int v151;
  unsigned int v152;
  int v153;
  int v154;

  v146 = (uint16_t *)(*((uint32_t *)self + 70) + 12 * a2);
  v2 = *((uint32_t *)self + 88);
  if ( *((uint32_t *)self + 89) != v2 )
  {
    v3 = *((uint32_t *)v146 + 1);
    if ( v3 != 0 )
    {
      v29 = (unsigned int *)(v2 + 8 * *((uint32_t *)v146 + 2));
      v116 = v29;
      v30 = (unsigned int)(uintptr_t)(&v29[2 * v3]);
      v131 = (unsigned int *)v30;
      if ( v29 != (unsigned int *)v30 )
      {
        v31 = v30 - (uint32_t)(uintptr_t)(v29);
        _BitScanReverse(&v30, (int)(v30 - (uint32_t)(uintptr_t)(v29)) >> 3);
        g4_std_compat::introsort_loop_cd63dd(
          v29,
          v131,
          2 * (31 - (v30 ^ 0x1F)));
        if ( v31 <= 135 )
        {
          v82 = (char *)(v116 + 2);
          if ( v131 != v116 + 2 )
          {
            v83 = (char *)v116;
            v84 = *(uint32_t *)v82;
            v127 = v116 + 4;
            v85 = (char *)(v116 + 2);
            if ( *(uint32_t *)v82 >= *v116 )
              goto LABEL_118;
LABEL_112:
            v86 = v127;
            v139 = *((uint32_t *)v82 + 1);
            v87 = (v82 - v83) >> 3;
            if ( v87 > 0 )
            {
              v88 = &v82[-8 * v87];
              do
              {
                *(uint32_t *)&v88[8 * v87] = *(uint32_t *)&v88[8 * v87 - 8];
                *(uint32_t *)&v88[8 * v87 + 4] = *(uint32_t *)&v88[8 * v87 - 4];
                --v87;
              }
              while ( v87 != 0 );
            }
            *v116 = v84;
            v116[1] = v139;
            while ( 1 )
            {
              v82 += 8;
              v127 += 2;
              if ( v131 == v86 )
                break;
              v83 = (char *)v116;
              v84 = *(uint32_t *)v82;
              v85 = v82;
              if ( *(uint32_t *)v82 < *v116 )
                goto LABEL_112;
LABEL_118:
              v140 = *((uint32_t *)v82 + 1);
              v89 = v82 - 8;
              v90 = v82;
              if ( v84 < *((uint32_t *)v82 - 2) )
              {
                while ( 1 )
                {
                  v90 = v89;
                  *(uint32_t *)v85 = *(uint32_t *)v89;
                  v91 = *((uint32_t *)v89 + 1);
                  v89 -= 8;
                  *((uint32_t *)v85 + 1) = v91;
                  if ( v84 >= *(uint32_t *)v89 )
                    break;
                  v85 = v90;
                }
              }
              *(uint32_t *)v90 = v84;
              *((uint32_t *)v90 + 1) = v140;
              v86 = v127;
            }
          }
        }
        else
        {
          v136 = v116 + 32;
          v32 = v116 + 2;
          v124 = v116 + 4;
          do
          {
            v33 = *v32;
            v34 = v32;
            if ( *v32 >= *v116 )
            {
              v151 = v32[1];
              v70 = v32 - 2;
              v71 = v32;
              if ( v33 < *(v32 - 2) )
              {
                while ( 1 )
                {
                  v71 = v70;
                  *v34 = *v70;
                  v72 = v70[1];
                  v70 -= 2;
                  v34[1] = v72;
                  if ( v33 >= *v70 )
                    break;
                  v34 = v71;
                }
              }
              *v71 = v33;
              v71[1] = v151;
              v35 = v124;
            }
            else
            {
              v35 = v124;
              v148 = v32[1];
              v36 = ((char *)v32 - (char *)v116) >> 3;
              if ( v36 > 0 )
              {
                v37 = &v32[-2 * v36];
                do
                {
                  v37[2 * v36] = v37[2 * v36 - 2];
                  v37[2 * v36 + 1] = v37[2 * v36 - 1];
                  --v36;
                }
                while ( v36 != 0 );
              }
              *v116 = v33;
              v116[1] = v148;
            }
            v32 += 2;
            v124 += 2;
          }
          while ( v136 != v35 );
          if ( v131 != v136 )
          {
            v38 = v116 + 32;
            do
            {
              v39 = *v38;
              v117 = v38[1];
              v40 = v38;
              v41 = v38;
              v42 = v38 - 2;
              if ( *v38 < *(v38 - 2) )
              {
                while ( 1 )
                {
                  v41 = v42;
                  *v40 = *v42;
                  v43 = v42[1];
                  v42 -= 2;
                  v40[1] = v43;
                  if ( v39 >= *v42 )
                    break;
                  v40 = v41;
                }
              }
              v38 += 2;
              *v41 = v39;
              v41[1] = v117;
            }
            while ( v131 != v38 );
          }
        }
      }
    }
    if ( *v146 != 0 )
    {
      v114 = (unsigned int *)(*((uint32_t *)self + 88) + 8 * v146[1]);
      v14 = &v114[2 * *v146];
      v130 = v14;
      if ( v114 != v14 )
      {
        v15 = 8 * *v146;
        _BitScanReverse(&v16, v15 >> 3);
        g4_std_compat::introsort_loop_cd63dd(
          v114,
          v14,
          2 * (31 - (v16 ^ 0x1F)));
        if ( v15 <= 135 )
        {
          v95 = (char *)(v114 + 2);
          if ( v130 != v114 + 2 )
          {
            v96 = (char *)v114;
            v97 = *(uint32_t *)v95;
            v128 = v114 + 4;
            v98 = (char *)(v114 + 2);
            if ( *(uint32_t *)v95 >= *v114 )
              goto LABEL_136;
LABEL_130:
            v99 = v128;
            v142 = *((uint32_t *)v95 + 1);
            v100 = (v95 - v96) >> 3;
            if ( v100 > 0 )
            {
              v101 = &v95[-8 * v100];
              do
              {
                *(uint32_t *)&v101[8 * v100] = *(uint32_t *)&v101[8 * v100 - 8];
                *(uint32_t *)&v101[8 * v100 + 4] = *(uint32_t *)&v101[8 * v100 - 4];
                --v100;
              }
              while ( v100 != 0 );
            }
            *v114 = v97;
            v114[1] = v142;
            while ( 1 )
            {
              v95 += 8;
              v128 += 2;
              if ( v130 == v99 )
                break;
              v96 = (char *)v114;
              v97 = *(uint32_t *)v95;
              v98 = v95;
              if ( *(uint32_t *)v95 < *v114 )
                goto LABEL_130;
LABEL_136:
              v143 = *((uint32_t *)v95 + 1);
              v102 = v95 - 8;
              v103 = v95;
              if ( v97 < *((uint32_t *)v95 - 2) )
              {
                while ( 1 )
                {
                  v103 = v102;
                  *(uint32_t *)v98 = *(uint32_t *)v102;
                  v104 = *((uint32_t *)v102 + 1);
                  v102 -= 8;
                  *((uint32_t *)v98 + 1) = v104;
                  if ( v97 >= *(uint32_t *)v102 )
                    break;
                  v98 = v103;
                }
              }
              *(uint32_t *)v103 = v97;
              *((uint32_t *)v103 + 1) = v143;
              v99 = v128;
            }
          }
        }
        else
        {
          v135 = v114 + 32;
          v17 = v114 + 2;
          v123 = v114 + 4;
          do
          {
            v18 = *v17;
            v19 = v17;
            if ( *v17 >= *v114 )
            {
              v152 = v17[1];
              v73 = v17 - 2;
              v74 = v17;
              if ( v18 < *(v17 - 2) )
              {
                while ( 1 )
                {
                  v74 = v73;
                  *v19 = *v73;
                  v75 = v73[1];
                  v73 -= 2;
                  v19[1] = v75;
                  if ( v18 >= *v73 )
                    break;
                  v19 = v74;
                }
              }
              *v74 = v18;
              v74[1] = v152;
              v21 = v123;
            }
            else
            {
              v20 = ((char *)v17 - (char *)v114) >> 3;
              v147 = v17[1];
              v21 = v123;
              if ( v20 > 0 )
              {
                v22 = &v17[-2 * v20];
                do
                {
                  v22[2 * v20] = v22[2 * v20 - 2];
                  v22[2 * v20 + 1] = v22[2 * v20 - 1];
                  --v20;
                }
                while ( v20 != 0 );
              }
              *v114 = v18;
              v114[1] = v147;
            }
            v17 += 2;
            v123 += 2;
          }
          while ( v135 != v21 );
          if ( v130 != v135 )
          {
            v23 = v114 + 32;
            do
            {
              v24 = *v23;
              v115 = v23[1];
              v25 = v23;
              v26 = v23;
              v27 = v23 - 2;
              if ( *v23 < *(v23 - 2) )
              {
                while ( 1 )
                {
                  v26 = v27;
                  *v25 = *v27;
                  v28 = v27[1];
                  v27 -= 2;
                  v25[1] = v28;
                  if ( v24 >= *v27 )
                    break;
                  v25 = v26;
                }
              }
              v23 += 2;
              *v26 = v24;
              v26[1] = v115;
            }
            while ( v130 != v23 );
          }
        }
      }
    }
  }
  result = *((uint32_t *)self + 91);
  if ( *((uint32_t *)self + 92) == result )
    goto LABEL_16;
  v5 = *((uint32_t *)v146 + 1);
  if ( v5 != 0 )
  {
    v57 = (unsigned int *)(result + 8 * *((uint32_t *)v146 + 2));
    v120 = v57;
    v58 = (unsigned int)(uintptr_t)(&v57[2 * v5]);
    v133 = (unsigned int *)v58;
    if ( v57 != (unsigned int *)v58 )
    {
      v59 = v58 - (uint32_t)(uintptr_t)(v57);
      _BitScanReverse(&v58, (int)(v58 - (uint32_t)(uintptr_t)(v57)) >> 3);
      g4_std_compat::introsort_loop_cd63dd( // void: x86 only left the return value in eax
                 v57,
                 v133,
                 2 * (31 - (v58 ^ 0x1F)));
      if ( v59 <= 135 )
      {
        v105 = (char *)(v120 + 2);
        if ( v133 != v120 + 2 )
        {
          v106 = (char *)v120;
          v107 = *(uint32_t *)v105;
          v129 = v120 + 4;
          v108 = (char *)(v120 + 2);
          if ( *(uint32_t *)v105 >= *v120 )
            goto LABEL_149;
LABEL_143:
          v109 = v129;
          v144 = *((uint32_t *)v105 + 1);
          result = (v105 - v106) >> 3;
          if ( result > 0 )
          {
            v110 = &v105[-8 * result];
            do
            {
              *(uint32_t *)&v110[8 * result] = *(uint32_t *)&v110[8 * result - 8];
              *(uint32_t *)&v110[8 * result + 4] = *(uint32_t *)&v110[8 * result - 4];
              --result;
            }
            while ( result != 0 );
          }
          *v120 = v107;
          v120[1] = v144;
          while ( 1 )
          {
            v105 += 8;
            v129 += 2;
            if ( v133 == v109 )
              break;
            v106 = (char *)v120;
            v107 = *(uint32_t *)v105;
            v108 = v105;
            if ( *(uint32_t *)v105 < *v120 )
              goto LABEL_143;
LABEL_149:
            v145 = *((uint32_t *)v105 + 1);
            v111 = v105 - 8;
            v112 = v105;
            if ( v107 < *((uint32_t *)v105 - 2) )
            {
              while ( 1 )
              {
                v112 = v111;
                *(uint32_t *)v108 = *(uint32_t *)v111;
                v113 = *((uint32_t *)v111 + 1);
                v111 -= 8;
                *((uint32_t *)v108 + 1) = v113;
                if ( v107 >= *(uint32_t *)v111 )
                  break;
                v108 = v112;
              }
            }
            result = v145;
            *(uint32_t *)v112 = v107;
            *((uint32_t *)v112 + 1) = v145;
            v109 = v129;
          }
        }
      }
      else
      {
        v138 = v120 + 32;
        v60 = v120 + 2;
        v126 = v120 + 4;
        do
        {
          v61 = *v60;
          v62 = v60;
          if ( *v60 >= *v120 )
          {
            v154 = v60[1];
            v79 = v60 - 2;
            v80 = v60;
            if ( v61 < *(v60 - 2) )
            {
              while ( 1 )
              {
                v80 = v79;
                *v62 = *v79;
                v81 = v79[1];
                v79 -= 2;
                v62[1] = v81;
                if ( v61 >= *v79 )
                  break;
                v62 = v80;
              }
            }
            result = v154;
            *v80 = v61;
            v80[1] = v154;
            v63 = v126;
          }
          else
          {
            v63 = v126;
            v150 = v60[1];
            result = ((char *)v60 - (char *)v120) >> 3;
            if ( result > 0 )
            {
              v64 = &v60[-2 * result];
              do
              {
                v64[2 * result] = v64[2 * result - 2];
                v64[2 * result + 1] = v64[2 * result - 1];
                --result;
              }
              while ( result != 0 );
            }
            *v120 = v61;
            v120[1] = v150;
          }
          v60 += 2;
          v126 += 2;
        }
        while ( v138 != v63 );
        if ( v133 != v138 )
        {
          v65 = v120 + 32;
          do
          {
            v66 = *v65;
            v121 = v65[1];
            v67 = v65;
            v68 = v65;
            result = (int)(uintptr_t)(v65 - 2);
            if ( *v65 < *(v65 - 2) )
            {
              while ( 1 )
              {
                v68 = (unsigned int *)result;
                *v67 = *(uint32_t *)result;
                v69 = *(uint32_t *)(result + 4);
                result -= 8;
                v67[1] = v69;
                if ( v66 >= *(uint32_t *)result )
                  break;
                v67 = v68;
              }
            }
            v65 += 2;
            *v68 = v66;
            v68[1] = v121;
          }
          while ( v133 != v65 );
        }
      }
    }
  }
  if ( *v146 != 0 )
  {
    v11 = v146[1];
    v118 = (unsigned int *)(*((uint32_t *)self + 91) + 8 * v11);
    v132 = &v118[2 * *v146];
    if ( v118 == v132 )
    {
LABEL_18:
      v12 = 0;
      while ( 1 )
      {
        v13 = v12 + v11;
        ++v12;
        result = glf::fs2::IndexData::SortEntries(self, v13);
        if ( *v146 <= v12 )
          break;
        v11 = v146[1];
      }
      return result;
    }
    v44 = 8 * *v146;
    _BitScanReverse(&v45, v44 >> 3);
    g4_std_compat::introsort_loop_cd63dd( // void: x86 only left the return value in eax
               v118,
               v132,
               2 * (31 - (v45 ^ 0x1F)));
    if ( v44 <= 135 )
    {
      v6 = v118 + 2;
      if ( v132 != v118 + 2 )
      {
        v122 = v118 + 4;
        do
        {
          v7 = *v6;
          v8 = v6;
          if ( *v6 >= *v118 )
          {
            v141 = v6[1];
            v92 = v6 - 2;
            v93 = v6;
            if ( *(v6 - 2) > v7 )
            {
              while ( 1 )
              {
                v93 = v92;
                *v8 = *v92;
                v94 = v92[1];
                v92 -= 2;
                v8[1] = v94;
                if ( v7 >= *v92 )
                  break;
                v8 = v93;
              }
            }
            result = v141;
            *v93 = v7;
            v93[1] = v141;
            v9 = v122;
          }
          else
          {
            v9 = v122;
            v134 = v6[1];
            result = ((char *)v6 - (char *)v118) >> 3;
            if ( result > 0 )
            {
              v10 = &v6[-2 * result];
              do
              {
                v10[2 * result] = v10[2 * result - 2];
                v10[2 * result + 1] = v10[2 * result - 1];
                --result;
              }
              while ( result != 0 );
            }
            *v118 = v7;
            v118[1] = v134;
          }
          v6 += 2;
          v122 += 2;
        }
        while ( v132 != v9 );
      }
    }
    else
    {
      v137 = v118 + 32;
      v46 = v118 + 2;
      v125 = v118 + 4;
      do
      {
        v47 = *v46;
        v48 = v46;
        if ( *v46 >= *v118 )
        {
          v153 = v46[1];
          v76 = v46 - 2;
          v77 = v46;
          if ( *(v46 - 2) > v47 )
          {
            while ( 1 )
            {
              v77 = v76;
              *v48 = *v76;
              v78 = v76[1];
              v76 -= 2;
              v48[1] = v78;
              if ( v47 >= *v76 )
                break;
              v48 = v77;
            }
          }
          result = v153;
          *v77 = v47;
          v77[1] = v153;
          v50 = v125;
        }
        else
        {
          v49 = ((char *)v46 - (char *)v118) >> 3;
          v149 = v46[1];
          v50 = v125;
          if ( v49 > 0 )
          {
            v51 = &v46[-2 * v49];
            do
            {
              v51[2 * v49] = v51[2 * v49 - 2];
              v51[2 * v49 + 1] = v51[2 * v49 - 1];
              --v49;
            }
            while ( v49 != 0 );
          }
          result = v149;
          *v118 = v47;
          v118[1] = v149;
        }
        v46 += 2;
        v125 += 2;
      }
      while ( v137 != v50 );
      if ( v132 != v137 )
      {
        v52 = v118 + 32;
        do
        {
          v53 = *v52;
          v119 = v52[1];
          v54 = v52;
          v55 = v52;
          result = (int)(uintptr_t)(v52 - 2);
          if ( *v52 < *(v52 - 2) )
          {
            while ( 1 )
            {
              v55 = (unsigned int *)result;
              *v54 = *(uint32_t *)result;
              v56 = *(uint32_t *)(result + 4);
              result -= 8;
              v54[1] = v56;
              if ( v53 >= *(uint32_t *)result )
                break;
              v54 = v55;
            }
          }
          v52 += 2;
          *v55 = v53;
          v55[1] = v119;
        }
        while ( v132 != v52 );
      }
    }
LABEL_16:
    if ( *v146 == 0 )
      return result;
    v11 = v146[1];
    goto LABEL_18;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::Lock  (binary VA: 0xcaae70)
// Original: glf::fs2::IndexData::Lock
// ----------------------------------------------------------------------------
int glf::fs2::IndexData::Lock(glf::fs2::IndexData::Self *self, int a2, bool a3)
{
  unsigned int v3;
  int v4;
  unsigned int *v5;
  unsigned int v6;
  unsigned int *v7;
  int v8;
  char *v9;
  unsigned int *v10;
  unsigned int v11;
  int v12;
  unsigned int *v13;
  unsigned int v14;
  unsigned int *v15;
  int v16;
  char *v17;
  unsigned int *v18;
  int result;
  int v20;
  unsigned int *v21;
  unsigned int v22;
  unsigned int *v23;
  int v24;
  char *v25;
  unsigned int *v26;
  char *v27;
  unsigned int v28;
  char *v29;
  char *v30;
  char *v31;
  int v32;
  unsigned int *v33;
  unsigned int v34;
  unsigned int *v35;
  int v36;
  char *v37;
  unsigned int *v38;
  char *v39;
  unsigned int v40;
  char *v41;
  char *v42;
  char *v43;
  int v44;
  unsigned int *v45;
  unsigned int *v46;
  unsigned int v47;
  unsigned int *v48;
  unsigned int *v49;
  unsigned int v50;
  unsigned int *v51;
  unsigned int *v52;
  unsigned int v53;
  unsigned int *v54;
  unsigned int *v55;
  unsigned int v56;
  unsigned int *v57;
  unsigned int *v58;
  int v59;
  int v60;
  char *v61;
  char *v62;
  char *v63;
  char *v64;
  char *v65;
  char *v66;
  unsigned int v67;
  unsigned int v68;
  char *v69;
  char *v70;
  unsigned int v71;
  unsigned int v72;
  unsigned int v73;
  unsigned int v74;
  unsigned int v75;
  unsigned int v76;

  v65 = *((char **)self + 95);
  v3 = *((uint32_t *)self + 94);
  v57 = (unsigned int *)v3;
  if ( v65 != (char *)v3 )
  {
    v4 = (int)(uintptr_t)(&v65[-v3]);
    _BitScanReverse(&v3, (int)(uintptr_t)(&v65[-v3]) >> 3);
    g4_std_compat::introsort_loop_cd63dd(
      v57,
      v65,
      2 * (31 - (v3 ^ 0x1F)));
    if ( v4 > 135 )
    {
      v70 = (char *)(v57 + 32);
      v33 = v57 + 2;
      v64 = (char *)(v57 + 4);
      do
      {
        v34 = *v33;
        v35 = v33;
        if ( *v33 >= *v57 )
        {
          v75 = v33[1];
          v45 = v33;
          v46 = v33 - 2;
          if ( v34 < *(v33 - 2) )
          {
            while ( 1 )
            {
              v45 = v46;
              *v35 = *v46;
              v47 = v46[1];
              v46 -= 2;
              v35[1] = v47;
              if ( v34 >= *v46 )
                break;
              v35 = v45;
            }
          }
          *v45 = v34;
          v45[1] = v75;
          v37 = v64;
        }
        else
        {
          v36 = ((char *)v33 - (char *)v57) >> 3;
          v74 = v33[1];
          v37 = v64;
          if ( v36 > 0 )
          {
            v38 = &v33[-2 * v36];
            do
            {
              v38[2 * v36] = v38[2 * v36 - 2];
              v38[2 * v36 + 1] = v38[2 * v36 - 1];
              --v36;
            }
            while ( v36 != 0 );
          }
          *v57 = v34;
          v57[1] = v74;
        }
        v33 += 2;
        v64 += 8;
      }
      while ( v70 != v37 );
      if ( v65 != v70 )
      {
        v39 = (char *)(v57 + 32);
        do
        {
          v40 = *(uint32_t *)v39;
          v60 = *((uint32_t *)v39 + 1);
          v41 = v39;
          v42 = v39;
          v43 = v39 - 8;
          if ( *(uint32_t *)v39 < *((uint32_t *)v39 - 2) )
          {
            while ( 1 )
            {
              v42 = v43;
              *(uint32_t *)v41 = *(uint32_t *)v43;
              v44 = *((uint32_t *)v43 + 1);
              v43 -= 8;
              *((uint32_t *)v41 + 1) = v44;
              if ( v40 >= *(uint32_t *)v43 )
                break;
              v41 = v42;
            }
          }
          v39 += 8;
          *(uint32_t *)v42 = v40;
          *((uint32_t *)v42 + 1) = v60;
        }
        while ( v65 != v39 );
      }
    }
    else
    {
      v5 = v57 + 2;
      if ( v65 != (char *)(v57 + 2) )
      {
        v61 = (char *)(v57 + 4);
        do
        {
          v6 = *v5;
          v7 = v5;
          if ( *v5 >= *v57 )
          {
            v71 = v5[1];
            v48 = v5;
            v49 = v5 - 2;
            if ( v6 < *(v5 - 2) )
            {
              while ( 1 )
              {
                v48 = v49;
                *v7 = *v49;
                v50 = v49[1];
                v49 -= 2;
                v7[1] = v50;
                if ( v6 >= *v49 )
                  break;
                v7 = v48;
              }
            }
            *v48 = v6;
            v48[1] = v71;
            v9 = v61;
          }
          else
          {
            v8 = ((char *)v5 - (char *)v57) >> 3;
            v67 = v5[1];
            v9 = v61;
            if ( v8 > 0 )
            {
              v10 = &v5[-2 * v8];
              do
              {
                v10[2 * v8] = v10[2 * v8 - 2];
                v10[2 * v8 + 1] = v10[2 * v8 - 1];
                --v8;
              }
              while ( v8 != 0 );
            }
            *v57 = v6;
            v57[1] = v67;
          }
          v5 += 2;
          v61 += 8;
        }
        while ( v65 != v9 );
      }
    }
  }
  v66 = *((char **)self + 98);
  v11 = *((uint32_t *)self + 97);
  v58 = (unsigned int *)v11;
  if ( v66 != (char *)v11 )
  {
    v12 = (int)(uintptr_t)(&v66[-v11]);
    _BitScanReverse(&v11, (int)(uintptr_t)(&v66[-v11]) >> 3);
    g4_std_compat::introsort_loop_cd63dd(
      v58,
      v66,
      2 * (31 - (v11 ^ 0x1F)));
    if ( v12 > 135 )
    {
      v69 = (char *)(v58 + 32);
      v21 = v58 + 2;
      v63 = (char *)(v58 + 4);
      do
      {
        v22 = *v21;
        v23 = v21;
        if ( *v21 >= *v58 )
        {
          v76 = v21[1];
          v51 = v21;
          v52 = v21 - 2;
          if ( v22 < *(v21 - 2) )
          {
            while ( 1 )
            {
              v51 = v52;
              *v23 = *v52;
              v53 = v52[1];
              v52 -= 2;
              v23[1] = v53;
              if ( v22 >= *v52 )
                break;
              v23 = v51;
            }
          }
          *v51 = v22;
          v51[1] = v76;
          v25 = v63;
        }
        else
        {
          v24 = ((char *)v21 - (char *)v58) >> 3;
          v73 = v21[1];
          v25 = v63;
          if ( v24 > 0 )
          {
            v26 = &v21[-2 * v24];
            do
            {
              v26[2 * v24] = v26[2 * v24 - 2];
              v26[2 * v24 + 1] = v26[2 * v24 - 1];
              --v24;
            }
            while ( v24 != 0 );
          }
          *v58 = v22;
          v58[1] = v73;
        }
        v21 += 2;
        v63 += 8;
      }
      while ( v69 != v25 );
      if ( v66 != v69 )
      {
        v27 = (char *)(v58 + 32);
        do
        {
          v28 = *(uint32_t *)v27;
          v59 = *((uint32_t *)v27 + 1);
          v29 = v27;
          v30 = v27;
          v31 = v27 - 8;
          if ( *(uint32_t *)v27 < *((uint32_t *)v27 - 2) )
          {
            while ( 1 )
            {
              v30 = v31;
              *(uint32_t *)v29 = *(uint32_t *)v31;
              v32 = *((uint32_t *)v31 + 1);
              v31 -= 8;
              *((uint32_t *)v29 + 1) = v32;
              if ( v28 >= *(uint32_t *)v31 )
                break;
              v29 = v30;
            }
          }
          v27 += 8;
          *(uint32_t *)v30 = v28;
          *((uint32_t *)v30 + 1) = v59;
        }
        while ( v66 != v27 );
      }
    }
    else
    {
      v13 = v58 + 2;
      if ( v66 != (char *)(v58 + 2) )
      {
        v62 = (char *)(v58 + 4);
        do
        {
          v14 = *v13;
          v15 = v13;
          if ( *v13 >= *v58 )
          {
            v72 = v13[1];
            v54 = v13;
            v55 = v13 - 2;
            if ( v14 < *(v13 - 2) )
            {
              while ( 1 )
              {
                v54 = v55;
                *v15 = *v55;
                v56 = v55[1];
                v55 -= 2;
                v15[1] = v56;
                if ( v14 >= *v55 )
                  break;
                v15 = v54;
              }
            }
            *v54 = v14;
            v54[1] = v72;
            v17 = v62;
          }
          else
          {
            v16 = ((char *)v13 - (char *)v58) >> 3;
            v68 = v13[1];
            v17 = v62;
            if ( v16 > 0 )
            {
              v18 = &v13[-2 * v16];
              do
              {
                v18[2 * v16] = v18[2 * v16 - 2];
                v18[2 * v16 + 1] = v18[2 * v16 - 1];
                --v16;
              }
              while ( v16 != 0 );
            }
            *v58 = v14;
            v58[1] = v68;
          }
          v13 += 2;
          v62 += 8;
        }
        while ( v66 != v17 );
      }
    }
  }
  glf::fs2::IndexData::SortEntries(self, 0);
  result = glf::fs2::IndexData::IsSorted(self, 0);
  v20 = result | a2;
  if ( a3 )
    result = glf::fs2::IndexData::ResolveOffsets();
  *((uint32_t *)self + 50) = v20;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::NewEntry  (binary VA: 0xcab370)
// Original: glf::fs2::IndexData::NewEntry
// ----------------------------------------------------------------------------
unsigned int glf::fs2::IndexData::NewEntry(glf::fs2::IndexData::Self *self, int a2, uint16_t a3, char *a4, glf::fs2::FileSystem::Self *a5, const glf::fs2::Path::Self *a6)
{
  glf::fs2::IndexData::Self *v6;
  int v7;
  uint16_t v8;
  uint32_t *v9;
  int v10;
  uint8_t *v11;
  int v12;
  glf::fs2::FileSystem::Self *v13;
  int v14;
  glf::fs2::FileSystem::Self *v15;
  int v16;
  int v18;
  void *v19;
  char *FileName;
  void *v21;
  glf::Self *v22;
  int v23;
  int v24;
  size_t v25;
  int v26;
  char *v27;
  char *v28;
  char *v29;
  char *v30;
  unsigned int v31;
  unsigned int v32;
  char *v33;
  char *v34;
  glf::fs2::Path::Self *v35;
  uint32_t *v36;
  glf::fs2::FileSystem::Self *v37;
  uint32_t *v38;
  unsigned int v39;
  int v40;
  char *v41;
  glf::fs2::Path::Self *v42;
  char *v43;
  glf::fs2::FileSystem::Self *v44;
  uint8_t *v45;
  unsigned int v46;
  uint32_t *v47;
  uint32_t *v48;
  glf::fs2::FileSystem::Self *v49;
  int v50;
  glf::fs2::FileSystem::Self *v51;
  glf::fs2::FileSystem::Self *v52;
  uint32_t *v53;
  int v54;
  unsigned int v55;
  uint16_t *v56;
  uint16_t *v57;
  glf::fs2::FileSystem::Self *v58;
  glf::fs2::FileSystem::Self *v59;
  uint16_t *v60;
  unsigned int v61;
  char *v62;
  uint8_t *v63;
  unsigned int v64;
  char *v65;
  char **v66;
  int v67;
  int v68;
  char *v69;
  int v70;
  unsigned int v71;
  char *v72;
  uint8_t *v73;
  unsigned int v74;
  char *v75;
  char **v76;
  int v77;
  int v78;
  char *v79;
  int v80;
  unsigned int v81;
  unsigned int v82;
  uint32_t *v83;
  unsigned int v84;
  char *v85;
  uint32_t *v86;
  char *v87;
  glf::fs2::FileSystem::Self *v88;
  unsigned int v89;
  unsigned int v90;
  char **v91;
  unsigned int v92;
  glf::fs2::Path::Self *v93;
  uint32_t *v94;
  char *v95;
  uint32_t *v96;
  unsigned int v97;
  unsigned int v98;
  uint32_t *v99;
  unsigned int v100;
  char *v101;
  uint32_t *v102;
  char *v103;
  glf::fs2::FileSystem::Self *v104;
  unsigned int v105;
  unsigned int v106;
  char **v107;
  unsigned int v108;
  glf::fs2::Path::Self *v109;
  uint32_t *v110;
  char *v111;
  uint32_t *v112;
  int v113;
  int v114;
  int v115;
  bool v116; // cc
  int v117;
  typedef unsigned int _g4_t_v118;
  typedef glf::fs2::FileSystem::Self *_g4_t_v119;
  typedef glf::fs2::Path::Self *_g4_t_v120;
  typedef glf::fs2::Path::Self *_g4_t_v121;
  typedef int _g4_t_v122;
  typedef int _g4_t_v123;
  typedef int _g4_t_v124;
  typedef uint8_t *_g4_t_v125;
  typedef unsigned int _g4_t_v126;
  typedef unsigned int _g4_t_v127;
  typedef int _g4_t_v128;
  typedef unsigned int _g4_t_v129;
  typedef int _g4_t_v130;
  typedef uint16_t _g4_t_v131;
  typedef glf::fs2::IndexData::Self *_g4_t_v132;
  typedef char *_g4_t_v133;
  typedef char *_g4_t_v134;
  typedef glf::fs2::Path::Self *_g4_t_v135;
  typedef glf::fs2::Path::Self *_g4_t_v136;
  typedef glf::fs2::Path::Self *_g4_t_v137;
  typedef int _g4_t_v138;
  typedef glf::fs2::Path::Self *_g4_t_v139;
  typedef int _g4_t_v140;
  typedef glf::fs2::Path::Self *_g4_t_v141;
  typedef glf::fs2::FileSystem::Self *_g4_t_v142;
  typedef glf::fs2::FileSystem::Self *_g4_t_v143;
  typedef glf::fs2::FileSystem::Self *_g4_t_v144;
  typedef glf::fs2::FileSystem::Self *_g4_t_v145;
  typedef glf::fs2::FileSystem::Self *_g4_t_v146;
  typedef glf::fs2::FileSystem::Self *_g4_t_v147;
  typedef unsigned int _g4_t_v148;
  typedef glf::fs2::FileSystem::Self *_g4_t_v149;
  typedef int _g4_t_v150;
  typedef glf::fs2::FileSystem::Self *_g4_t_v151;
  typedef unsigned int _g4_t_v152;
  typedef glf::fs2::FileSystem::Self *_g4_t_v153;
  typedef int _g4_t_v154;
  typedef glf::fs2::FileSystem::Self *_g4_t_v155;
  typedef void *_g4_t_v156;
  typedef size_t _g4_t_v157;
  typedef size_t _g4_t_v158;
  typedef size_t _g4_t_v159;
  typedef size_t _g4_t_v160;
  typedef size_t _g4_t_v161;
  typedef uint32_t *_g4_t_v162;
  typedef size_t _g4_t_v163;
  typedef size_t _g4_t_v164;
  typedef size_t _g4_t_v165;
  typedef size_t _g4_t_v166;
  typedef uint32_t *_g4_t_v167;
  typedef size_t _g4_t_v168;
  typedef size_t _g4_t_v169;
  typedef uint32_t *_g4_t_v170;
  typedef size_t _g4_t_v171;
  typedef size_t _g4_t_v172;
  typedef unsigned int _g4_t_v173;
  typedef unsigned int _g4_t_v174;
  typedef unsigned int _g4_t_v175;
  typedef unsigned int _g4_t_v176;
  typedef unsigned int _g4_t_v177;
  typedef unsigned int _g4_t_v178;
  typedef glf::fs2::Path::Self *_g4_t_v179;
  typedef uint32_t *_g4_t_v180;
  typedef glf::fs2::Path::Self *_g4_t_v181;
  typedef uint8_t *_g4_t_v182;
  typedef uint32_t *_g4_t_v183;
  typedef uint16_t *_g4_t_v184;
  typedef unsigned int _g4_t_v185;
  typedef int _g4_t_v186;
  typedef unsigned int _g4_t_v187;
  typedef int _g4_t_v188;
  typedef char *_g4_t_v189;
  typedef char *_g4_t_v190;
  typedef uint32_t *_g4_t_v191;
  typedef char *_g4_t_v192;
  typedef char *_g4_t_v193;
  typedef uint32_t *_g4_t_v194;
  typedef char *_g4_t_s;
  typedef size_t _g4_t_sa;
  typedef char *_g4_t_sb;
  typedef size_t _g4_t_sc;
  typedef size_t _g4_t_sd;
  typedef char *_g4_t_se;
  typedef char *_g4_t_sf;
  typedef char *_g4_t_sg;
  typedef char *_g4_t_sh;
  typedef char *_g4_t_si;
  typedef char *_g4_t_sj;
  typedef int _g4_t_v206;
  typedef uint16_t _g4_t_v207[8];
  typedef unsigned int _g4_t_v208[2];
  typedef uint32_t _g4_t_v209[8];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (8u + sizeof(_g4_t_v118)) > _g4_s0 ? (8u + sizeof(_g4_t_v118)) : _g4_s0,
    _g4_s2 = (64u + sizeof(_g4_t_v119)) > _g4_s1 ? (64u + sizeof(_g4_t_v119)) : _g4_s1,
    _g4_s3 = (68u + sizeof(_g4_t_v120)) > _g4_s2 ? (68u + sizeof(_g4_t_v120)) : _g4_s2,
    _g4_s4 = (68u + sizeof(_g4_t_v121)) > _g4_s3 ? (68u + sizeof(_g4_t_v121)) : _g4_s3,
    _g4_s5 = (68u + sizeof(_g4_t_v122)) > _g4_s4 ? (68u + sizeof(_g4_t_v122)) : _g4_s4,
    _g4_s6 = (68u + sizeof(_g4_t_v123)) > _g4_s5 ? (68u + sizeof(_g4_t_v123)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v124)) > _g4_s6 ? (68u + sizeof(_g4_t_v124)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v125)) > _g4_s7 ? (72u + sizeof(_g4_t_v125)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v126)) > _g4_s8 ? (72u + sizeof(_g4_t_v126)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v127)) > _g4_s9 ? (72u + sizeof(_g4_t_v127)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v128)) > _g4_s10 ? (72u + sizeof(_g4_t_v128)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v129)) > _g4_s11 ? (72u + sizeof(_g4_t_v129)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v130)) > _g4_s12 ? (72u + sizeof(_g4_t_v130)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v131)) > _g4_s13 ? (72u + sizeof(_g4_t_v131)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v132)) > _g4_s14 ? (80u + sizeof(_g4_t_v132)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v133)) > _g4_s15 ? (80u + sizeof(_g4_t_v133)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v134)) > _g4_s16 ? (80u + sizeof(_g4_t_v134)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v135)) > _g4_s17 ? (84u + sizeof(_g4_t_v135)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v136)) > _g4_s18 ? (84u + sizeof(_g4_t_v136)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v137)) > _g4_s19 ? (84u + sizeof(_g4_t_v137)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v138)) > _g4_s20 ? (84u + sizeof(_g4_t_v138)) : _g4_s20,
    _g4_s22 = (84u + sizeof(_g4_t_v139)) > _g4_s21 ? (84u + sizeof(_g4_t_v139)) : _g4_s21,
    _g4_s23 = (84u + sizeof(_g4_t_v140)) > _g4_s22 ? (84u + sizeof(_g4_t_v140)) : _g4_s22,
    _g4_s24 = (84u + sizeof(_g4_t_v141)) > _g4_s23 ? (84u + sizeof(_g4_t_v141)) : _g4_s23,
    _g4_s25 = (88u + sizeof(_g4_t_v142)) > _g4_s24 ? (88u + sizeof(_g4_t_v142)) : _g4_s24,
    _g4_s26 = (88u + sizeof(_g4_t_v143)) > _g4_s25 ? (88u + sizeof(_g4_t_v143)) : _g4_s25,
    _g4_s27 = (88u + sizeof(_g4_t_v144)) > _g4_s26 ? (88u + sizeof(_g4_t_v144)) : _g4_s26,
    _g4_s28 = (88u + sizeof(_g4_t_v145)) > _g4_s27 ? (88u + sizeof(_g4_t_v145)) : _g4_s27,
    _g4_s29 = (88u + sizeof(_g4_t_v146)) > _g4_s28 ? (88u + sizeof(_g4_t_v146)) : _g4_s28,
    _g4_s30 = (88u + sizeof(_g4_t_v147)) > _g4_s29 ? (88u + sizeof(_g4_t_v147)) : _g4_s29,
    _g4_s31 = (88u + sizeof(_g4_t_v148)) > _g4_s30 ? (88u + sizeof(_g4_t_v148)) : _g4_s30,
    _g4_s32 = (88u + sizeof(_g4_t_v149)) > _g4_s31 ? (88u + sizeof(_g4_t_v149)) : _g4_s31,
    _g4_s33 = (88u + sizeof(_g4_t_v150)) > _g4_s32 ? (88u + sizeof(_g4_t_v150)) : _g4_s32,
    _g4_s34 = (88u + sizeof(_g4_t_v151)) > _g4_s33 ? (88u + sizeof(_g4_t_v151)) : _g4_s33,
    _g4_s35 = (88u + sizeof(_g4_t_v152)) > _g4_s34 ? (88u + sizeof(_g4_t_v152)) : _g4_s34,
    _g4_s36 = (88u + sizeof(_g4_t_v153)) > _g4_s35 ? (88u + sizeof(_g4_t_v153)) : _g4_s35,
    _g4_s37 = (88u + sizeof(_g4_t_v154)) > _g4_s36 ? (88u + sizeof(_g4_t_v154)) : _g4_s36,
    _g4_s38 = (88u + sizeof(_g4_t_v155)) > _g4_s37 ? (88u + sizeof(_g4_t_v155)) : _g4_s37,
    _g4_s39 = (92u + sizeof(_g4_t_v156)) > _g4_s38 ? (92u + sizeof(_g4_t_v156)) : _g4_s38,
    _g4_s40 = (92u + sizeof(_g4_t_v157)) > _g4_s39 ? (92u + sizeof(_g4_t_v157)) : _g4_s39,
    _g4_s41 = (92u + sizeof(_g4_t_v158)) > _g4_s40 ? (92u + sizeof(_g4_t_v158)) : _g4_s40,
    _g4_s42 = (92u + sizeof(_g4_t_v159)) > _g4_s41 ? (92u + sizeof(_g4_t_v159)) : _g4_s41,
    _g4_s43 = (92u + sizeof(_g4_t_v160)) > _g4_s42 ? (92u + sizeof(_g4_t_v160)) : _g4_s42,
    _g4_s44 = (92u + sizeof(_g4_t_v161)) > _g4_s43 ? (92u + sizeof(_g4_t_v161)) : _g4_s43,
    _g4_s45 = (92u + sizeof(_g4_t_v162)) > _g4_s44 ? (92u + sizeof(_g4_t_v162)) : _g4_s44,
    _g4_s46 = (92u + sizeof(_g4_t_v163)) > _g4_s45 ? (92u + sizeof(_g4_t_v163)) : _g4_s45,
    _g4_s47 = (92u + sizeof(_g4_t_v164)) > _g4_s46 ? (92u + sizeof(_g4_t_v164)) : _g4_s46,
    _g4_s48 = (92u + sizeof(_g4_t_v165)) > _g4_s47 ? (92u + sizeof(_g4_t_v165)) : _g4_s47,
    _g4_s49 = (92u + sizeof(_g4_t_v166)) > _g4_s48 ? (92u + sizeof(_g4_t_v166)) : _g4_s48,
    _g4_s50 = (92u + sizeof(_g4_t_v167)) > _g4_s49 ? (92u + sizeof(_g4_t_v167)) : _g4_s49,
    _g4_s51 = (92u + sizeof(_g4_t_v168)) > _g4_s50 ? (92u + sizeof(_g4_t_v168)) : _g4_s50,
    _g4_s52 = (92u + sizeof(_g4_t_v169)) > _g4_s51 ? (92u + sizeof(_g4_t_v169)) : _g4_s51,
    _g4_s53 = (92u + sizeof(_g4_t_v170)) > _g4_s52 ? (92u + sizeof(_g4_t_v170)) : _g4_s52,
    _g4_s54 = (92u + sizeof(_g4_t_v171)) > _g4_s53 ? (92u + sizeof(_g4_t_v171)) : _g4_s53,
    _g4_s55 = (92u + sizeof(_g4_t_v172)) > _g4_s54 ? (92u + sizeof(_g4_t_v172)) : _g4_s54,
    _g4_s56 = (96u + sizeof(_g4_t_v173)) > _g4_s55 ? (96u + sizeof(_g4_t_v173)) : _g4_s55,
    _g4_s57 = (100u + sizeof(_g4_t_v174)) > _g4_s56 ? (100u + sizeof(_g4_t_v174)) : _g4_s56,
    _g4_s58 = (100u + sizeof(_g4_t_v175)) > _g4_s57 ? (100u + sizeof(_g4_t_v175)) : _g4_s57,
    _g4_s59 = (100u + sizeof(_g4_t_v176)) > _g4_s58 ? (100u + sizeof(_g4_t_v176)) : _g4_s58,
    _g4_s60 = (100u + sizeof(_g4_t_v177)) > _g4_s59 ? (100u + sizeof(_g4_t_v177)) : _g4_s59,
    _g4_s61 = (100u + sizeof(_g4_t_v178)) > _g4_s60 ? (100u + sizeof(_g4_t_v178)) : _g4_s60,
    _g4_s62 = (100u + sizeof(_g4_t_v179)) > _g4_s61 ? (100u + sizeof(_g4_t_v179)) : _g4_s61,
    _g4_s63 = (100u + sizeof(_g4_t_v180)) > _g4_s62 ? (100u + sizeof(_g4_t_v180)) : _g4_s62,
    _g4_s64 = (100u + sizeof(_g4_t_v181)) > _g4_s63 ? (100u + sizeof(_g4_t_v181)) : _g4_s63,
    _g4_s65 = (100u + sizeof(_g4_t_v182)) > _g4_s64 ? (100u + sizeof(_g4_t_v182)) : _g4_s64,
    _g4_s66 = (100u + sizeof(_g4_t_v183)) > _g4_s65 ? (100u + sizeof(_g4_t_v183)) : _g4_s65,
    _g4_s67 = (100u + sizeof(_g4_t_v184)) > _g4_s66 ? (100u + sizeof(_g4_t_v184)) : _g4_s66,
    _g4_s68 = (100u + sizeof(_g4_t_v185)) > _g4_s67 ? (100u + sizeof(_g4_t_v185)) : _g4_s67,
    _g4_s69 = (100u + sizeof(_g4_t_v186)) > _g4_s68 ? (100u + sizeof(_g4_t_v186)) : _g4_s68,
    _g4_s70 = (100u + sizeof(_g4_t_v187)) > _g4_s69 ? (100u + sizeof(_g4_t_v187)) : _g4_s69,
    _g4_s71 = (100u + sizeof(_g4_t_v188)) > _g4_s70 ? (100u + sizeof(_g4_t_v188)) : _g4_s70,
    _g4_s72 = (100u + sizeof(_g4_t_v189)) > _g4_s71 ? (100u + sizeof(_g4_t_v189)) : _g4_s71,
    _g4_s73 = (100u + sizeof(_g4_t_v190)) > _g4_s72 ? (100u + sizeof(_g4_t_v190)) : _g4_s72,
    _g4_s74 = (100u + sizeof(_g4_t_v191)) > _g4_s73 ? (100u + sizeof(_g4_t_v191)) : _g4_s73,
    _g4_s75 = (100u + sizeof(_g4_t_v192)) > _g4_s74 ? (100u + sizeof(_g4_t_v192)) : _g4_s74,
    _g4_s76 = (100u + sizeof(_g4_t_v193)) > _g4_s75 ? (100u + sizeof(_g4_t_v193)) : _g4_s75,
    _g4_s77 = (100u + sizeof(_g4_t_v194)) > _g4_s76 ? (100u + sizeof(_g4_t_v194)) : _g4_s76,
    _g4_s78 = (104u + sizeof(_g4_t_s)) > _g4_s77 ? (104u + sizeof(_g4_t_s)) : _g4_s77,
    _g4_s79 = (104u + sizeof(_g4_t_sa)) > _g4_s78 ? (104u + sizeof(_g4_t_sa)) : _g4_s78,
    _g4_s80 = (104u + sizeof(_g4_t_sb)) > _g4_s79 ? (104u + sizeof(_g4_t_sb)) : _g4_s79,
    _g4_s81 = (104u + sizeof(_g4_t_sc)) > _g4_s80 ? (104u + sizeof(_g4_t_sc)) : _g4_s80,
    _g4_s82 = (104u + sizeof(_g4_t_sd)) > _g4_s81 ? (104u + sizeof(_g4_t_sd)) : _g4_s81,
    _g4_s83 = (104u + sizeof(_g4_t_se)) > _g4_s82 ? (104u + sizeof(_g4_t_se)) : _g4_s82,
    _g4_s84 = (104u + sizeof(_g4_t_sf)) > _g4_s83 ? (104u + sizeof(_g4_t_sf)) : _g4_s83,
    _g4_s85 = (104u + sizeof(_g4_t_sg)) > _g4_s84 ? (104u + sizeof(_g4_t_sg)) : _g4_s84,
    _g4_s86 = (104u + sizeof(_g4_t_sh)) > _g4_s85 ? (104u + sizeof(_g4_t_sh)) : _g4_s85,
    _g4_s87 = (104u + sizeof(_g4_t_si)) > _g4_s86 ? (104u + sizeof(_g4_t_si)) : _g4_s86,
    _g4_s88 = (104u + sizeof(_g4_t_sj)) > _g4_s87 ? (104u + sizeof(_g4_t_sj)) : _g4_s87,
    _g4_s89 = (121u + sizeof(_g4_t_v206)) > _g4_s88 ? (121u + sizeof(_g4_t_v206)) : _g4_s88,
    _g4_s90 = (124u + sizeof(_g4_t_v207)) > _g4_s89 ? (124u + sizeof(_g4_t_v207)) : _g4_s89,
    _g4_s91 = (140u + sizeof(_g4_t_v208)) > _g4_s90 ? (140u + sizeof(_g4_t_v208)) : _g4_s90,
    _g4_s92 = (148u + sizeof(_g4_t_v209)) > _g4_s91 ? (148u + sizeof(_g4_t_v209)) : _g4_s91
  };
  alignas(16) uint8_t _g4_sf[_g4_s92];
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 8u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 64u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 68u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 68u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 68u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 68u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 68u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 72u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 72u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 72u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 72u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 72u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 72u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 72u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 80u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 80u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 80u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 84u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 84u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 84u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 84u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 84u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 84u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 84u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 88u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 88u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 88u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 88u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 88u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 88u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 88u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 88u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 88u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 88u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 88u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 88u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 88u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 88u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 92u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 92u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 92u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 92u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 92u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 92u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 92u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 92u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 92u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 92u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 92u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 92u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 92u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 92u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 92u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 92u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 92u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 96u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 100u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 100u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 100u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 100u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 100u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 100u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 100u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 100u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 100u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 100u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 100u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 100u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 100u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 100u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 100u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 100u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 100u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 100u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 100u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 100u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 100u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 104u);
  _g4_t_sa &sa = *reinterpret_cast<_g4_t_sa *>(_g4_sf + 104u);
  _g4_t_sb &sb = *reinterpret_cast<_g4_t_sb *>(_g4_sf + 104u);
  _g4_t_sc &sc = *reinterpret_cast<_g4_t_sc *>(_g4_sf + 104u);
  _g4_t_sd &sd = *reinterpret_cast<_g4_t_sd *>(_g4_sf + 104u);
  _g4_t_se &se = *reinterpret_cast<_g4_t_se *>(_g4_sf + 104u);
  _g4_t_sf &sf = *reinterpret_cast<_g4_t_sf *>(_g4_sf + 104u);
  _g4_t_sg &sg = *reinterpret_cast<_g4_t_sg *>(_g4_sf + 104u);
  _g4_t_sh &sh = *reinterpret_cast<_g4_t_sh *>(_g4_sf + 104u);
  _g4_t_si &si = *reinterpret_cast<_g4_t_si *>(_g4_sf + 104u);
  _g4_t_sj &sj = *reinterpret_cast<_g4_t_sj *>(_g4_sf + 104u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 121u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 124u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 140u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 148u);

  v209[4] = (uint32_t)(uintptr_t)(&self);
  v6 = self;
  v7 = a2;
  s = a4;
  v142 = a5;
  v8 = a3;
  v135 = (glf::fs2::Path::Self *)(a6);
  v173 = *((uint32_t *)self + 51);
  *((uint32_t *)self + 51) = v173 + 1;
  if ( (v7 & 2) == 0 )
  {
    if ( (v7 & 0x10) == 0 )
      goto LABEL_3;
    goto LABEL_43;
  }
  v26 = *((uint32_t *)v6 + 73);
  v156 = *((void **)v6 + 74);
  v207[0] = 0;
  v175 = ((int)(uintptr_t)(v156) - v26) >> 1;
  if ( v175 < v175 + 1 )
  {
    v131 = v8;
    g4_std_compat::vector_fill_insert((int)(uintptr_t)(v6) + 292, v156, 1, (int)(uintptr_t)(v207));
    v8 = v131;
    v157 = *((uint32_t *)v6 + 74);
  }
  else
  {
    v157 = v26 + 2 * (v175 + 1);
    *((uint32_t *)v6 + 74) = v157;
  }
  *(uint16_t *)(v157 - 2) = v8;
  if ( (v7 & 0x10) != 0 )
  {
LABEL_43:
    v27 = *((char **)v6 + 62);
    v158 = *((uint32_t *)v6 + 61);
    LOBYTE(v207[0]) = 0;
    v176 = (unsigned int)(uintptr_t)(&v27[-v158 + 1]);
    if ( (unsigned int)(uintptr_t)(&v27[-v158]) < v176 )
    {
      g4_std_compat::vector_fill_insert((int)(uintptr_t)(v6) + 244, v27, 1u, (int)(uintptr_t)(v207));
      v28 = *((char **)v6 + 62);
    }
    else
    {
      v28 = v27 + 1;
      *((uint32_t *)v6 + 62) = v176 + v158;
    }
    *(v28 - 1) = glf::fs2::IndexData::FindFsIdx(v6, v142);
    v159 = *((uint32_t *)v6 + 64);
    v29 = *((char **)v6 + 65);
    LOBYTE(v207[0]) = 0;
    v177 = (unsigned int)(uintptr_t)(&v29[-v159 + 1]);
    if ( (unsigned int)(uintptr_t)(&v29[-v159]) < v177 )
    {
      g4_std_compat::vector_fill_insert((int)(uintptr_t)(v6) + 256, v29, 1u, (int)(uintptr_t)(v207));
      v30 = *((char **)v6 + 65);
    }
    else
    {
      v30 = v29 + 1;
      *((uint32_t *)v6 + 65) = v177 + v159;
    }
    *(v30 - 1) = glf::fs2::IndexData::FindFsRootIdx((glf::fs2::Path::Self **)v6, v135);
  }
LABEL_3:
  if ( (v7 & 1) != 0 )
  {
    v22 = *((glf::Self **)v6 + 68);
    v23 = *((uint32_t *)v6 + 67);
    v208[0] = 0;
    v174 = ((int)(uintptr_t)(v22) - v23) >> 2;
    if ( v174 < v174 + 1 )
    {
      sub_CA5130((glf::fs2::IndexData::Self *)((char *)v6 + 268), v22, 1u, v208);
      v24 = *((uint32_t *)v6 + 68);
    }
    else
    {
      v24 = v23 + 4 * (v174 + 1);
      *((uint32_t *)v6 + 68) = v24;
    }
    *(uint32_t *)(v24 - 4) = *((uint32_t *)v6 + 59) - *((uint32_t *)v6 + 58);
    v25 = strlen(s);
    g4_std_compat::vector_range_insert(
      (int)(uintptr_t)(v6) + 232,
      *((void **)v6 + 59),
      s,
      (int)(uintptr_t)(&s[v25 + 1]));
  }
  if ( (v7 & 0x300000) != 0 )
  {
    FileName = (char *)glf::fs2::IndexData::GetFileName(v6, v173);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v208), FileName, (int)(uintptr_t)(&v206));
    if ( (v7 & 0x100000) != 0 )
    {
      v123 = (*((uint32_t *)v6 + 89) - *((uint32_t *)v6 + 88)) >> 3;
      v68 = glf::Crc32((glf::Self *)((char *)&dword_0 + 1), v208[0], *(const char **)(v208[0] - 12), v118);
      v69 = *((char **)v6 + 89);
      v186 = v68;
      v133 = v69;
      if ( v69 == *((char **)v6 + 90) )
      {
        v81 = (int)(uintptr_t)(&v69[-*((uint32_t *)v6 + 88)]) >> 3;
        v82 = 1;
        v148 = v81;
        if ( v81 == 0 || (v138 = 0x1FFFFFFF, v82 = 2 * v81, v81 <= 2 * v81) && v82 <= 0x1FFFFFFF )
          v138 = v82;
        v139 = (glf::fs2::Path::Self *)(8 * v138);
        v167 = (uint32_t *)(glf::Alloc((size_t)v139));
        v83 = &v167[2 * v148];
        if ( v83 != nullptr )
        {
          v83[1] = v123;
          *v83 = v186;
        }
        v189 = *((char **)v6 + 88);
        v84 = (unsigned int)(uintptr_t)(v167);
        if ( v133 != v189 )
        {
          v85 = *((char **)v6 + 88);
          v86 = v167;
          do
          {
            if ( v86 != nullptr )
            {
              *v86 = *(uint32_t *)v85;
              v86[1] = *((uint32_t *)v85 + 1);
            }
            v85 += 8;
            v86 += 2;
          }
          while ( v133 != v85 );
          v84 = (unsigned int)(uintptr_t)(&v167[2 * ((unsigned int)(v133 - (v189 + 8)) >> 3) + 2]);
        }
        v149 = (glf::fs2::FileSystem::Self *)(v84 + 8);
        v190 = *((char **)v6 + 89);
        if ( v133 != v190 )
        {
          v87 = v133;
          v88 = v149;
          do
          {
            if ( v88 != nullptr )
            {
              *(uint32_t *)v88 = *(uint32_t *)v87;
              *((uint32_t *)v88 + 1) = *((uint32_t *)v87 + 1);
            }
            v87 += 8;
            v88 = (glf::fs2::FileSystem::Self *)((char *)v88 + 8);
          }
          while ( v190 != v87 );
          v149 = (glf::fs2::FileSystem::Self *)((char *)v149 + 8 * ((unsigned int)(v190 - (v133 + 8)) >> 3) + 8);
        }
        if ( *((uint32_t *)v6 + 88) != 0 )
          glf::Free(*((glf::Self **)v6 + 88));
        *((uint32_t *)v6 + 88) = (uint32_t)(uintptr_t)(v167);
        *((uint32_t *)v6 + 89) = (uint32_t)(uintptr_t)(v149);
        *((uint32_t *)v6 + 90) = (uint32_t)(uintptr_t)((char *)v167 + (uint32_t)(uintptr_t)(v139));
      }
      else
      {
        v70 = 0;
        if ( v69 != nullptr )
        {
          *((uint32_t *)v69 + 1) = v123;
          *(uint32_t *)v69 = v186;
          v70 = *((uint32_t *)v6 + 89);
        }
        *((uint32_t *)v6 + 89) = v70 + 8;
      }
    }
    if ( (v7 & 0x200000) != 0 )
    {
      v61 = v208[0];
      if ( *(int *)(v208[0] - 4) < 0 || (sub_19397C0(v208), v61 = v208[0], *(int *)(v208[0] - 4) < 0) )
      {
        v62 = (char *)v61;
        v185 = v61 + *(uint32_t *)(v61 - 12);
      }
      else
      {
        v127 = v208[0];
        sub_19397C0(v208);
        v62 = (char *)v208[0];
        v185 = v208[0] + *(uint32_t *)(v208[0] - 12);
        v61 = v127;
        if ( *(int *)(v208[0] - 4) >= 0 )
        {
          sub_19397C0(v208);
          v62 = (char *)v208[0];
          v61 = v127;
        }
      }
      if ( (char *)v185 != v62 )
      {
        v63 = (uint8_t *)v61;
        do
        {
          v64 = *v62;
          if ( v64 <= 0xFF )
            LOWORD(v64) = *(uint16_t *)(tolower_tab_ + 2 * v64 + 2);
          ++v62;
          *v63++ = v64;
        }
        while ( v62 != (char *)v185 );
        v62 = (char *)v208[0];
      }
      v128 = (*((uint32_t *)v6 + 92) - *((uint32_t *)v6 + 91)) >> 3;
      v65 = (char *)glf::Crc32((glf::Self *)((char *)&dword_0 + 1), (unsigned int)(uintptr_t)(v62), *((const char **)v62 - 3), v118);
      v66 = *((char ***)v6 + 92);
      se = v65;
      v136 = (glf::fs2::Path::Self *)v66;
      if ( v66 == *((char ***)v6 + 93) )
      {
        v89 = ((int)(uintptr_t)(v66) - *((uint32_t *)v6 + 91)) >> 3;
        v90 = 1;
        v168 = v89;
        if ( v89 == 0 || (v150 = 0x1FFFFFFF, v90 = 2 * v89, v89 <= 2 * v89) && v90 <= 0x1FFFFFFF )
          v150 = v90;
        v151 = (glf::fs2::FileSystem::Self *)(8 * v150);
        v191 = (uint32_t *)(glf::Alloc((size_t)v151));
        v91 = (char **)&v191[2 * v168];
        if ( v91 != nullptr )
        {
          v91[1] = (char *)v128;
          *v91 = se;
        }
        sg = *((char **)v6 + 91);
        v92 = (unsigned int)(uintptr_t)(v191);
        if ( v136 != (glf::fs2::Path::Self *)sg )
        {
          v93 = *((glf::fs2::Path::Self **)v6 + 91);
          v94 = v191;
          do
          {
            if ( v94 != nullptr )
            {
              *v94 = *(uint32_t *)v93;
              v94[1] = *((uint32_t *)v93 + 1);
            }
            v93 = (glf::fs2::Path::Self *)((char *)v93 + 8);
            v94 += 2;
          }
          while ( v136 != v93 );
          v92 = (unsigned int)(uintptr_t)(&v191[2 * ((unsigned int)(v136 - (glf::fs2::Path::Self *)(sg + 8)) >> 3) + 2]);
        }
        v169 = v92 + 8;
        sh = *((char **)v6 + 92);
        if ( v136 != (glf::fs2::Path::Self *)sh )
        {
          v95 = (char *)v136;
          v96 = (uint32_t *)v169;
          do
          {
            if ( v96 != nullptr )
            {
              *v96 = *(uint32_t *)v95;
              v96[1] = *((uint32_t *)v95 + 1);
            }
            v95 += 8;
            v96 += 2;
          }
          while ( sh != v95 );
          v169 += 8 * ((unsigned int)(sh - ((char *)v136 + 8)) >> 3) + 8;
        }
        if ( *((uint32_t *)v6 + 91) != 0 )
          glf::Free(*((glf::Self **)v6 + 91));
        *((uint32_t *)v6 + 91) = (uint32_t)(uintptr_t)(v191);
        *((uint32_t *)v6 + 92) = v169;
        *((uint32_t *)v6 + 93) = (uint32_t)(uintptr_t)((char *)v191 + (uint32_t)(uintptr_t)(v151));
      }
      else
      {
        v67 = 0;
        if ( v66 != nullptr )
        {
          v66[1] = (char *)v128;
          *v66 = se;
          v67 = *((uint32_t *)v6 + 92);
        }
        *((uint32_t *)v6 + 92) = v67 + 8;
      }
    }
    v21 = (void *)(v208[0] - 12);
    if ( (uint32_t *)(v208[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v208[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v21);
    }
  }
  if ( (v7 & 0xC00000) != 0 )
  {
    glf::fs2::IndexData::GetFullpath((glf::fs2::IndexData::Self *)v209, v6, v173);
    v18 = (int)(uintptr_t)(glf::fs2::Path::String((glf::fs2::Path::Self *)v209));
    g4_std::string::construct_copy(v208, v18);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v209);
    if ( (v7 & 0x400000) != 0 )
    {
      v124 = (*((uint32_t *)v6 + 95) - *((uint32_t *)v6 + 94)) >> 3;
      v78 = glf::Crc32((glf::Self *)((char *)&dword_0 + 1), v208[0], *(const char **)(v208[0] - 12), v118);
      v79 = *((char **)v6 + 95);
      v188 = v78;
      v134 = v79;
      if ( v79 == *((char **)v6 + 96) )
      {
        v97 = (int)(uintptr_t)(&v79[-*((uint32_t *)v6 + 94)]) >> 3;
        v98 = 1;
        v152 = v97;
        if ( v97 == 0 || (v140 = 0x1FFFFFFF, v98 = 2 * v97, v97 <= 2 * v97) && v98 <= 0x1FFFFFFF )
          v140 = v98;
        v141 = (glf::fs2::Path::Self *)(8 * v140);
        v170 = (uint32_t *)(glf::Alloc((size_t)v141));
        v99 = &v170[2 * v152];
        if ( v99 != nullptr )
        {
          v99[1] = v124;
          *v99 = v188;
        }
        v192 = *((char **)v6 + 94);
        v100 = (unsigned int)(uintptr_t)(v170);
        if ( v134 != v192 )
        {
          v101 = *((char **)v6 + 94);
          v102 = v170;
          do
          {
            if ( v102 != nullptr )
            {
              *v102 = *(uint32_t *)v101;
              v102[1] = *((uint32_t *)v101 + 1);
            }
            v101 += 8;
            v102 += 2;
          }
          while ( v134 != v101 );
          v100 = (unsigned int)(uintptr_t)(&v170[2 * ((unsigned int)(v134 - (v192 + 8)) >> 3) + 2]);
        }
        v153 = (glf::fs2::FileSystem::Self *)(v100 + 8);
        v193 = *((char **)v6 + 95);
        if ( v134 != v193 )
        {
          v103 = v134;
          v104 = v153;
          do
          {
            if ( v104 != nullptr )
            {
              *(uint32_t *)v104 = *(uint32_t *)v103;
              *((uint32_t *)v104 + 1) = *((uint32_t *)v103 + 1);
            }
            v103 += 8;
            v104 = (glf::fs2::FileSystem::Self *)((char *)v104 + 8);
          }
          while ( v193 != v103 );
          v153 = (glf::fs2::FileSystem::Self *)((char *)v153 + 8 * ((unsigned int)(v193 - (v134 + 8)) >> 3) + 8);
        }
        if ( *((uint32_t *)v6 + 94) != 0 )
          glf::Free(*((glf::Self **)v6 + 94));
        *((uint32_t *)v6 + 94) = (uint32_t)(uintptr_t)(v170);
        *((uint32_t *)v6 + 95) = (uint32_t)(uintptr_t)(v153);
        *((uint32_t *)v6 + 96) = (uint32_t)(uintptr_t)((char *)v170 + (uint32_t)(uintptr_t)(v141));
      }
      else
      {
        v80 = 0;
        if ( v79 != nullptr )
        {
          *((uint32_t *)v79 + 1) = v124;
          *(uint32_t *)v79 = v188;
          v80 = *((uint32_t *)v6 + 95);
        }
        *((uint32_t *)v6 + 95) = v80 + 8;
      }
    }
    if ( (v7 & 0x800000) != 0 )
    {
      v71 = v208[0];
      if ( *(int *)(v208[0] - 4) < 0 || (sub_19397C0(v208), v71 = v208[0], *(int *)(v208[0] - 4) < 0) )
      {
        v72 = (char *)v71;
        v187 = v71 + *(uint32_t *)(v71 - 12);
      }
      else
      {
        v129 = v208[0];
        sub_19397C0(v208);
        v72 = (char *)v208[0];
        v187 = v208[0] + *(uint32_t *)(v208[0] - 12);
        v71 = v129;
        if ( *(int *)(v208[0] - 4) >= 0 )
        {
          sub_19397C0(v208);
          v72 = (char *)v208[0];
          v71 = v129;
        }
      }
      if ( (char *)v187 != v72 )
      {
        v73 = (uint8_t *)v71;
        do
        {
          v74 = *v72;
          if ( v74 <= 0xFF )
            LOWORD(v74) = *(uint16_t *)(tolower_tab_ + 2 * v74 + 2);
          ++v72;
          *v73++ = v74;
        }
        while ( v72 != (char *)v187 );
        v72 = (char *)v208[0];
      }
      v130 = (*((uint32_t *)v6 + 98) - *((uint32_t *)v6 + 97)) >> 3;
      v75 = (char *)glf::Crc32((glf::Self *)((char *)&dword_0 + 1), (unsigned int)(uintptr_t)(v72), *((const char **)v72 - 3), v118);
      v76 = *((char ***)v6 + 98);
      sf = v75;
      v137 = (glf::fs2::Path::Self *)v76;
      if ( v76 == *((char ***)v6 + 99) )
      {
        v105 = ((int)(uintptr_t)(v76) - *((uint32_t *)v6 + 97)) >> 3;
        v106 = 1;
        v171 = v105;
        if ( v105 == 0 || (v154 = 0x1FFFFFFF, v106 = 2 * v105, v105 <= 2 * v105) && v106 <= 0x1FFFFFFF )
          v154 = v106;
        v155 = (glf::fs2::FileSystem::Self *)(8 * v154);
        v194 = (uint32_t *)(glf::Alloc((size_t)v155));
        v107 = (char **)&v194[2 * v171];
        if ( v107 != nullptr )
        {
          v107[1] = (char *)v130;
          *v107 = sf;
        }
        si = *((char **)v6 + 97);
        v108 = (unsigned int)(uintptr_t)(v194);
        if ( v137 != (glf::fs2::Path::Self *)si )
        {
          v109 = *((glf::fs2::Path::Self **)v6 + 97);
          v110 = v194;
          do
          {
            if ( v110 != nullptr )
            {
              *v110 = *(uint32_t *)v109;
              v110[1] = *((uint32_t *)v109 + 1);
            }
            v109 = (glf::fs2::Path::Self *)((char *)v109 + 8);
            v110 += 2;
          }
          while ( v137 != v109 );
          v108 = (unsigned int)(uintptr_t)(&v194[2 * ((unsigned int)(v137 - (glf::fs2::Path::Self *)(si + 8)) >> 3) + 2]);
        }
        v172 = v108 + 8;
        sj = *((char **)v6 + 98);
        if ( v137 != (glf::fs2::Path::Self *)sj )
        {
          v111 = (char *)v137;
          v112 = (uint32_t *)v172;
          do
          {
            if ( v112 != nullptr )
            {
              *v112 = *(uint32_t *)v111;
              v112[1] = *((uint32_t *)v111 + 1);
            }
            v111 += 8;
            v112 += 2;
          }
          while ( sj != v111 );
          v172 += 8 * ((unsigned int)(sj - ((char *)v137 + 8)) >> 3) + 8;
        }
        if ( *((uint32_t *)v6 + 97) != 0 )
          glf::Free(*((glf::Self **)v6 + 97));
        *((uint32_t *)v6 + 97) = (uint32_t)(uintptr_t)(v194);
        *((uint32_t *)v6 + 98) = v172;
        *((uint32_t *)v6 + 99) = (uint32_t)(uintptr_t)((char *)v194 + (uint32_t)(uintptr_t)(v155));
      }
      else
      {
        v77 = 0;
        if ( v76 != nullptr )
        {
          v76[1] = (char *)v130;
          *v76 = sf;
          v77 = *((uint32_t *)v6 + 98);
        }
        *((uint32_t *)v6 + 98) = v77 + 8;
      }
    }
    v19 = (void *)(v208[0] - 12);
    if ( (uint32_t *)(v208[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v208[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v19);
    }
  }
  if ( (v7 & 8) != 0 )
  {
    v9 = *((uint32_t **)v6 + 77);
    if ( v9 == *((uint32_t **)v6 + 78) )
    {
      v31 = ((int)(uintptr_t)(v9) - *((uint32_t *)v6 + 76)) >> 2;
      sa = 4;
      v178 = v31;
      if ( v31 != 0 )
      {
        v32 = 2 * v31;
        if ( v31 <= 2 * v31 )
        {
          v115 = 8 * v31;
          v116 = v32 <= 0x3FFFFFFF;
          v117 = -4;
          if ( v116 )
            v117 = v115;
          sa = v117;
        }
        else
        {
          sa = 0xFFFFFFFC;
        }
      }
      v120 = *((glf::fs2::Path::Self **)v6 + 77);
      v33 = (char *)glf::Alloc(sa);
      v160 = (size_t)v33;
      v34 = &v33[4 * v178];
      if ( v34 != nullptr )
        *(uint32_t *)v34 = -1;
      v179 = *((glf::fs2::Path::Self **)v6 + 76);
      if ( v120 != v179 )
      {
        v35 = *((glf::fs2::Path::Self **)v6 + 76);
        v36 = (uint32_t *)v160;
        do
        {
          if ( v36 != nullptr )
            *v36 = *(uint32_t *)v35;
          v35 = (glf::fs2::Path::Self *)((char *)v35 + 4);
          ++v36;
        }
        while ( v120 != v35 );
        v33 = (char *)(v160 + 4 * ((unsigned int)(v120 - (glf::fs2::Path::Self *)((char *)v179 + 4)) >> 2) + 4);
      }
      v180 = (uint32_t *)(v33 + 4);
      v143 = *((glf::fs2::FileSystem::Self **)v6 + 77);
      if ( v120 != (glf::fs2::Path::Self *)(uintptr_t)(v143) )
      {
        v37 = (glf::fs2::FileSystem::Self *)(v120);
        v38 = v180;
        do
        {
          if ( v38 != nullptr )
            *v38 = *(uint32_t *)v37;
          v37 = (glf::fs2::FileSystem::Self *)((char *)v37 + 4);
          ++v38;
        }
        while ( v143 != v37 );
        v180 += ((unsigned int)(v143 - (glf::fs2::FileSystem::Self *)((glf::fs2::Path::Self *)((char *)v120 + 4))) >> 2) + 1;
      }
      if ( *((uint32_t *)v6 + 76) != 0 )
        glf::Free(*((glf::Self **)v6 + 76));
      *((uint32_t *)v6 + 76) = v160;
      *((uint32_t *)v6 + 77) = (uint32_t)(uintptr_t)(v180);
      *((uint32_t *)v6 + 78) = sa + v160;
    }
    else
    {
      v10 = 0;
      if ( v9 != nullptr )
      {
        *v9 = -1;
        v10 = *((uint32_t *)v6 + 77);
      }
      *((uint32_t *)v6 + 77) = v10 + 4;
    }
  }
  if ( (v7 & 0x10000) != 0 )
  {
    v11 = *((uint8_t **)v6 + 80);
    if ( v11 == *((uint8_t **)v6 + 81) )
    {
      v39 = (unsigned int)(uintptr_t)(&v11[-*((uint32_t *)v6 + 79)]);
      if ( v39 == -1 )
        sub_1900180("vector::_M_insert_aux");
      v161 = 1;
      if ( v39 != 0 )
      {
        v40 = 2 * v39;
        if ( v39 > 2 * v39 )
          v40 = -1;
        v161 = v40;
      }
      v121 = *((glf::fs2::Path::Self **)v6 + 80);
      v125 = &v11[-*((uint32_t *)v6 + 79)];
      v41 = (char *)glf::Alloc(v161);
      sb = v41;
      if ( &v125[(uint32_t)(uintptr_t)(v41)] != nullptr )
        v125[(uint32_t)(uintptr_t)(v41)] = 2;
      v181 = *((glf::fs2::Path::Self **)v6 + 79);
      if ( v121 != v181 )
      {
        v42 = *((glf::fs2::Path::Self **)v6 + 79);
        v43 = sb;
        do
        {
          if ( v43 != nullptr )
            *v43 = *(uint8_t *)v42;
          v42 = (glf::fs2::Path::Self *)((char *)v42 + 1);
          ++v43;
        }
        while ( v42 != v121 );
        v41 = &sb[v121 - v181];
      }
      v182 = (uint8_t *)(v41 + 1);
      if ( v121 != *((glf::fs2::Path::Self **)v6 + 80) )
      {
        v44 = (glf::fs2::FileSystem::Self *)(v121);
        v45 = v182;
        v144 = *((glf::fs2::FileSystem::Self **)v6 + 80);
        do
        {
          if ( v45 != nullptr )
            *v45 = *(uint8_t *)v44;
          v44 = (glf::fs2::FileSystem::Self *)((char *)v44 + 1);
          ++v45;
        }
        while ( v44 != v144 );
        v182 += v44 - (glf::fs2::FileSystem::Self *)(v121);
      }
      if ( *((uint32_t *)v6 + 79) != 0 )
        glf::Free(*((glf::Self **)v6 + 79));
      *((uint32_t *)v6 + 79) = (uint32_t)(uintptr_t)(sb);
      *((uint32_t *)v6 + 80) = (uint32_t)(uintptr_t)(v182);
      *((uint32_t *)v6 + 81) = (uint32_t)(uintptr_t)(&sb[v161]);
    }
    else
    {
      v12 = 0;
      if ( v11 != nullptr )
      {
        *v11 = 2;
        v12 = *((uint32_t *)v6 + 80);
      }
      *((uint32_t *)v6 + 80) = v12 + 1;
    }
  }
  if ( (v7 & 0x4000) != 0 )
  {
    v13 = *((glf::fs2::FileSystem::Self **)v6 + 83);
    v119 = v13;
    if ( v13 == *((glf::fs2::FileSystem::Self **)v6 + 84) )
    {
      sc = 8;
      v46 = ((int)(uintptr_t)(v13) - *((uint32_t *)v6 + 82)) >> 3;
      if ( v46 != 0 )
      {
        if ( v46 <= 2 * v46 )
        {
          v113 = -8;
          if ( 2 * v46 <= 0x1FFFFFFF )
            v113 = 16 * v46;
          sc = v113;
        }
        else
        {
          sc = 0xFFFFFFF8;
        }
      }
      v126 = v46;
      v47 = (uint32_t *)(glf::Alloc(sc));
      v183 = v47;
      v162 = &v47[2 * v126];
      if ( v162 != nullptr )
      {
        *v162 = -1;
        v162[1] = -1;
      }
      v163 = *((uint32_t *)v6 + 82);
      if ( v119 != (glf::fs2::FileSystem::Self *)v163 )
      {
        v48 = v47;
        v145 = (glf::fs2::FileSystem::Self *)(v6);
        v49 = *((glf::fs2::FileSystem::Self **)v6 + 82);
        do
        {
          if ( v48 != nullptr )
          {
            v50 = *(uint32_t *)v49;
            v48[1] = *((uint32_t *)v49 + 1);
            *v48 = v50;
          }
          v49 = (glf::fs2::FileSystem::Self *)((char *)v49 + 8);
          v48 += 2;
        }
        while ( v119 != v49 );
        v6 = (glf::fs2::IndexData::Self *)(v145);
        v47 = &v183[2 * (((unsigned int)(uintptr_t)(v119) - v163 - 8) >> 3) + 2];
      }
      v164 = (size_t)(v47 + 2);
      v146 = *((glf::fs2::FileSystem::Self **)v6 + 83);
      if ( v119 != v146 )
      {
        v51 = *((glf::fs2::FileSystem::Self **)v6 + 83);
        v52 = v119;
        v53 = (uint32_t *)v164;
        v132 = v6;
        do
        {
          if ( v53 != nullptr )
          {
            v54 = *(uint32_t *)v52;
            v53[1] = *((uint32_t *)v52 + 1);
            *v53 = v54;
          }
          v52 = (glf::fs2::FileSystem::Self *)((char *)v52 + 8);
          v53 += 2;
        }
        while ( v51 != v52 );
        v6 = v132;
        v164 += 8 * ((unsigned int)(v146 - (glf::fs2::FileSystem::Self *)((char *)v119 + 8)) >> 3) + 8;
      }
      if ( *((uint32_t *)v6 + 82) != 0 )
        glf::Free(*((glf::Self **)v6 + 82));
      *((uint32_t *)v6 + 82) = (uint32_t)(uintptr_t)(v183);
      *((uint32_t *)v6 + 83) = v164;
      *((uint32_t *)v6 + 84) = (uint32_t)(uintptr_t)((char *)v183 + sc);
    }
    else
    {
      v14 = 0;
      if ( v13 != nullptr )
      {
        *(uint32_t *)v13 = -1;
        *((uint32_t *)v13 + 1) = -1;
        v14 = *((uint32_t *)v6 + 83);
      }
      *((uint32_t *)v6 + 83) = v14 + 8;
    }
  }
  if ( (v7 & 0x8000) != 0 )
  {
    v15 = *((glf::fs2::FileSystem::Self **)v6 + 86);
    if ( v15 == *((glf::fs2::FileSystem::Self **)v6 + 87) )
    {
      v55 = ((int)(uintptr_t)(v15) - *((uint32_t *)v6 + 85)) >> 1;
      sd = 2;
      if ( v55 != 0 )
      {
        if ( v55 <= 2 * v55 )
        {
          v114 = 4 * v55;
          if ( 2 * v55 > 0x7FFFFFFF )
            v114 = -2;
          sd = v114;
        }
        else
        {
          sd = 0xFFFFFFFE;
        }
      }
      v122 = ((int)(uintptr_t)(v15) - *((uint32_t *)v6 + 85)) >> 1;
      v184 = (uint16_t *)(glf::Alloc(sd));
      v56 = &v184[v122];
      if ( v56 != nullptr )
        *v56 = 7;
      v165 = *((uint32_t *)v6 + 85);
      v57 = v184;
      if ( v15 != (glf::fs2::FileSystem::Self *)v165 )
      {
        v58 = *((glf::fs2::FileSystem::Self **)v6 + 85);
        do
        {
          if ( v57 != nullptr )
            *v57 = *(uint16_t *)v58;
          v58 = (glf::fs2::FileSystem::Self *)((char *)v58 + 2);
          ++v57;
        }
        while ( v15 != v58 );
        v57 = &v184[(((unsigned int)(uintptr_t)(v15) - v165 - 2) >> 1) + 1];
      }
      v166 = (size_t)(v57 + 1);
      v147 = *((glf::fs2::FileSystem::Self **)v6 + 86);
      if ( v15 != v147 )
      {
        v59 = v15;
        v60 = v57 + 1;
        do
        {
          if ( v60 != nullptr )
            *v60 = *(uint16_t *)v59;
          v59 = (glf::fs2::FileSystem::Self *)((char *)v59 + 2);
          ++v60;
        }
        while ( v147 != v59 );
        v166 += 2 * ((unsigned int)(v147 - (glf::fs2::FileSystem::Self *)((char *)v15 + 2)) >> 1) + 2;
      }
      if ( *((uint32_t *)v6 + 85) != 0 )
        glf::Free(*((glf::Self **)v6 + 85));
      *((uint32_t *)v6 + 85) = (uint32_t)(uintptr_t)(v184);
      *((uint32_t *)v6 + 86) = v166;
      *((uint32_t *)v6 + 87) = (uint32_t)(uintptr_t)((char *)v184 + sd);
    }
    else
    {
      v16 = 0;
      if ( v15 != nullptr )
      {
        *(uint16_t *)v15 = 7;
        v16 = *((uint32_t *)v6 + 86);
      }
      *((uint32_t *)v6 + 86) = v16 + 2;
    }
  }
  return v173;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::NewFile  (binary VA: 0xcac510)
// Original: glf::fs2::IndexData::NewFile
// ----------------------------------------------------------------------------
unsigned int glf::fs2::IndexData::NewFile(glf::fs2::IndexData::Self *self, int a2, uint16_t a3, char *a4, glf::fs2::FileSystem::Self *a5, const glf::fs2::Path::Self *a6)
{
  unsigned int result;
  int v7;

  result = glf::fs2::IndexData::NewEntry(self, a2, a3, a4, a5, a6);
  if ( (a2 & 6) != 0 && a3 != 0xFFFF )
  {
    v7 = *((uint32_t *)self + 70) + 12 * a3;
    if ( *(uint32_t *)(v7 + 8) == -1 )
      *(uint32_t *)(v7 + 8) = result;
    ++*(uint32_t *)(v7 + 4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::NewDir  (binary VA: 0xcac5b0)
// Original: glf::fs2::IndexData::NewDir
// ----------------------------------------------------------------------------
int glf::fs2::IndexData::NewDir(glf::fs2::IndexData::Self *self, int a2, uint16_t a3, char *a4, glf::fs2::FileSystem::Self *a5, const glf::fs2::Path::Self *a6)
{
  int v6;
  unsigned int v7;
  int v8;
  uint16_t *v9;
  typedef uint16_t _g4_t_v11;
  typedef int16_t _g4_t_v12[14];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);

  memset(v12, 255, 12);
  v6 = *((uint32_t *)self + 70);
  v7 = -1431655765 * ((*((uint32_t *)self + 71) - v6) >> 2);
  v11 = -21845 * ((*((uint32_t *)self + 71) - v6) >> 2);
  if ( v7 < v7 + 1 )
  {
    sub_CA5410((int)(uintptr_t)(self) + 280, *((char **)self + 71), 1u, v12);
    v8 = *((uint32_t *)self + 71);
  }
  else
  {
    v8 = v6 + 12 * (v7 + 1);
    *((uint32_t *)self + 71) = v8;
  }
  glf::fs2::IndexData::NewEntry(self, a2, a3, a4, a5, a6);
  *(uint16_t *)(v8 - 12) = 0;
  *(uint32_t *)(v8 - 8) = 0;
  *(uint32_t *)(v8 - 4) = -1;
  *(uint16_t *)(v8 - 10) = -1;
  if ( (a2 & 0x10000) != 0 )
    *(uint8_t *)(*((uint32_t *)self + 79) + v11) = 3;
  if ( a3 != 0xFFFF )
  {
    v9 = (uint16_t *)(*((uint32_t *)self + 70) + 12 * a3);
    if ( v9[1] == 0xFFFF )
      v9[1] = v11;
    ++*v9;
  }
  return v11;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::Construct  (binary VA: 0xcac700)
// Original: glf::fs2::IndexData::IndexData
// ----------------------------------------------------------------------------
int glf::fs2::IndexData::Construct(glf::fs2::FileSystem::Self *a1, glf::fs2::Path::Self *a2, int a3, glf::fs2::FileSystem::Self **a4)
{
  const glf::fs2::Path::Self *Root;
  int result;

  glf::fs2::FileSystem::Construct(a1);
  *((uint8_t *)a1 + 189) = 0;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_206DE28);
  glf::fs2::Path::Construct((glf::fs2::FileSystem::Self *)((char *)a1 + 192));
  *((uint32_t *)a1 + 50) = 0;
  *((uint32_t *)a1 + 51) = 0;
  *((uint32_t *)a1 + 52) = 0;
  *((uint32_t *)a1 + 53) = 0;
  *((uint32_t *)a1 + 54) = 0;
  *((uint32_t *)a1 + 55) = 0;
  *((uint32_t *)a1 + 56) = 0;
  *((uint32_t *)a1 + 57) = 0;
  *((uint32_t *)a1 + 58) = 0;
  *((uint32_t *)a1 + 59) = 0;
  *((uint32_t *)a1 + 60) = 0;
  *((uint32_t *)a1 + 61) = 0;
  *((uint32_t *)a1 + 62) = 0;
  *((uint32_t *)a1 + 63) = 0;
  *((uint32_t *)a1 + 64) = 0;
  *((uint32_t *)a1 + 65) = 0;
  *((uint32_t *)a1 + 66) = 0;
  *((uint32_t *)a1 + 67) = 0;
  *((uint32_t *)a1 + 68) = 0;
  *((uint32_t *)a1 + 69) = 0;
  *((uint32_t *)a1 + 70) = 0;
  *((uint32_t *)a1 + 71) = 0;
  *((uint32_t *)a1 + 72) = 0;
  *((uint32_t *)a1 + 73) = 0;
  *((uint32_t *)a1 + 74) = 0;
  *((uint32_t *)a1 + 75) = 0;
  *((uint32_t *)a1 + 76) = 0;
  *((uint32_t *)a1 + 77) = 0;
  *((uint32_t *)a1 + 78) = 0;
  *((uint32_t *)a1 + 79) = 0;
  *((uint32_t *)a1 + 80) = 0;
  *((uint32_t *)a1 + 81) = 0;
  *((uint32_t *)a1 + 82) = 0;
  *((uint32_t *)a1 + 83) = 0;
  *((uint32_t *)a1 + 84) = 0;
  *((uint32_t *)a1 + 85) = 0;
  *((uint32_t *)a1 + 86) = 0;
  *((uint32_t *)a1 + 87) = 0;
  *((uint32_t *)a1 + 88) = 0;
  *((uint32_t *)a1 + 89) = 0;
  *((uint32_t *)a1 + 90) = 0;
  *((uint32_t *)a1 + 91) = 0;
  *((uint32_t *)a1 + 92) = 0;
  *((uint32_t *)a1 + 93) = 0;
  *((uint32_t *)a1 + 94) = 0;
  *((uint32_t *)a1 + 95) = 0;
  *((uint32_t *)a1 + 96) = 0;
  *((uint32_t *)a1 + 97) = 0;
  *((uint32_t *)a1 + 98) = 0;
  *((uint32_t *)a1 + 99) = 0;
  Root = (const glf::fs2::Path::Self *)glf::fs2::IndexData::GetRoot();
  glf::fs2::IndexData::NewDir((glf::fs2::IndexData::Self *)(a1), 4095, 0xFFFFu, (char *)&unk_1B15112, *a4, Root);
  result = a3;
  if ( a3 < 0 )
    return (int)(uintptr_t)(glf::fs2::Path::opAssign((glf::fs2::FileSystem::Self *)((char *)a1 + 192), a2));
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::Load  (binary VA: 0xcac9a0)
// Original: glf::fs2::IndexData::Load
// ----------------------------------------------------------------------------
int glf::fs2::IndexData::Load(glf::fs2::IndexData::Self *a1, glf::fs2::Path::Self *a2, volatile int32_t **a3)
{
  glf::fs2::IndexData::Self *v3;
  glf::fs2::Path::Self *v4;
  volatile int32_t *v5;
  volatile int32_t *v6;
  int v7;
  volatile int32_t *v8;
  volatile int32_t *v9;
  int v10;
  int v11;
  int v12;
  void *v13;
  glf::fs2::IndexData::Self *v14;
  size_t v15;
  unsigned int v16;
  uint32_t *v17;
  int v18;
  unsigned int v19;
  uint32_t *v20;
  int v21;
  void *v22;
  int v23;
  int v24;
  char *v25;
  uint8_t *v26;
  char *v27;
  char *v28;
  char *v29;
  char *v30;
  glf::Self *v31;
  glf::Self *v32;
  unsigned int v33;
  char *v34;
  char *v35;
  unsigned int v36;
  uint8_t *v37;
  uint8_t *v38;
  unsigned int v39;
  uint8_t *v40;
  uint8_t *v41;
  char *v42;
  uint8_t *v43;
  uint8_t *v44;
  uint8_t *v45;
  uint8_t *v46;
  uint8_t *v47;
  unsigned int v48;
  glf::Self *v49;
  glf::Self *v50;
  unsigned int v51;
  glf::Self *v52;
  glf::Self *v53;
  unsigned int v54;
  glf::Self *v55;
  glf::Self *v56;
  unsigned int v57;
  glf::Self *v58;
  glf::Self *v59;
  unsigned int v60;
  volatile int32_t *v61;
  int v62;
  glf::fs2::FileSystem::Self *v63;
  int v64;
  int v66;
  unsigned int v67;
  glf::fs2::IndexData::Self *v68;
  glf::fs2::Path::Self *v69;
  unsigned int v70;
  glf::fs2::Path::Self *v71;
  void *v72;
  int v73;
  int v74;
  glf::RefCounted::Self *v75;
  volatile int32_t *v76;
  volatile int32_t *v77;
  int v78;
  typedef glf::fs2::Path::Self *_g4_t_v79;
  typedef int _g4_t_v80;
  typedef volatile int32_t *_g4_t_v81;
  typedef volatile int32_t *_g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef volatile int32_t *_g4_t_v85;
  typedef uint32_t *_g4_t_v86;
  typedef volatile int32_t *_g4_t_v87;
  typedef volatile int32_t *_g4_t_v88;
  typedef glf::fs2::IndexData::Self *_g4_t_v89;
  typedef uint32_t *_g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef glf::fs2::IndexData::Self *_g4_t_v94;
  typedef unsigned int _g4_t_v95;
  typedef unsigned int _g4_t_v96;
  typedef unsigned int _g4_t_v97;
  typedef size_t _g4_t_v98;
  typedef size_t _g4_t_v99;
  typedef unsigned int _g4_t_v100;
  typedef size_t _g4_t_v101;
  typedef size_t _g4_t_v102;
  typedef glf::fs2::IndexData::Self *_g4_t_v103;
  typedef char *_g4_t_v104;
  typedef glf::fs2::IndexData::Self *_g4_t_v105;
  typedef glf::fs2::IndexData::Self *_g4_t_v106;
  typedef unsigned int _g4_t_v107;
  typedef unsigned int _g4_t_v108;
  typedef glf::fs2::IndexData::Self *_g4_t_v109;
  typedef glf::fs2::IndexData::Self *_g4_t_v110;
  typedef int _g4_t_v111;
  typedef int _g4_t_v112;
  typedef int _g4_t_v113;
  typedef size_t _g4_t_v114[2];
  typedef uint8_t _g4_t_v115[8];
  typedef int _g4_t_v116[2];
  typedef unsigned int _g4_t_v117[2];
  typedef unsigned int _g4_t_v118[2];
  typedef unsigned int _g4_t_v119[2];
  typedef unsigned int _g4_t_v120[2];
  typedef int _g4_t_v121[4];
  typedef void (**_g4_t_v122)(glf::basic_ifstream<char, std::char_traits<char>> *);
  typedef int _g4_t_v123;
  typedef void (**_g4_t_v124)(glf::basic_filebuf<char, std::char_traits<char>> *);
  typedef int _g4_t_v125;
  typedef int _g4_t_v126;
  typedef int _g4_t_v127;
  typedef int _g4_t_v128;
  typedef int _g4_t_v129;
  typedef int _g4_t_v130;
  typedef uint8_t _g4_t_v131[260];
  typedef glf::fs2::FileSystem::Self *_g4_t_v132;
  typedef volatile int32_t *_g4_t_v133;
  typedef uint32_t _g4_t_v134[5];
  typedef char _g4_t_v135;
  typedef int _g4_t_v136;
  typedef char _g4_t_v137;
  typedef char _g4_t_v138;
  typedef int _g4_t_v139;
  typedef int _g4_t_v140;
  typedef int _g4_t_v141;
  typedef int _g4_t_v142;
  typedef glf::fs2::IndexData::Self **_g4_t_v143;
  enum : size_t {
    _g4_s0 = 704u,
    _g4_s1 = (4u + sizeof(_g4_t_v79)) > _g4_s0 ? (4u + sizeof(_g4_t_v79)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v80)) > _g4_s1 ? (8u + sizeof(_g4_t_v80)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v81)) > _g4_s2 ? (32u + sizeof(_g4_t_v81)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v82)) > _g4_s3 ? (32u + sizeof(_g4_t_v82)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v83)) > _g4_s4 ? (32u + sizeof(_g4_t_v83)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v84)) > _g4_s5 ? (32u + sizeof(_g4_t_v84)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v85)) > _g4_s6 ? (32u + sizeof(_g4_t_v85)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v86)) > _g4_s7 ? (32u + sizeof(_g4_t_v86)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v87)) > _g4_s8 ? (32u + sizeof(_g4_t_v87)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v88)) > _g4_s9 ? (32u + sizeof(_g4_t_v88)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v89)) > _g4_s10 ? (36u + sizeof(_g4_t_v89)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v90)) > _g4_s11 ? (36u + sizeof(_g4_t_v90)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v91)) > _g4_s12 ? (36u + sizeof(_g4_t_v91)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v92)) > _g4_s13 ? (36u + sizeof(_g4_t_v92)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v93)) > _g4_s14 ? (36u + sizeof(_g4_t_v93)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v94)) > _g4_s15 ? (56u + sizeof(_g4_t_v94)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v95)) > _g4_s16 ? (60u + sizeof(_g4_t_v95)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v96)) > _g4_s17 ? (60u + sizeof(_g4_t_v96)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v97)) > _g4_s18 ? (60u + sizeof(_g4_t_v97)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v98)) > _g4_s19 ? (60u + sizeof(_g4_t_v98)) : _g4_s19,
    _g4_s21 = (60u + sizeof(_g4_t_v99)) > _g4_s20 ? (60u + sizeof(_g4_t_v99)) : _g4_s20,
    _g4_s22 = (60u + sizeof(_g4_t_v100)) > _g4_s21 ? (60u + sizeof(_g4_t_v100)) : _g4_s21,
    _g4_s23 = (60u + sizeof(_g4_t_v101)) > _g4_s22 ? (60u + sizeof(_g4_t_v101)) : _g4_s22,
    _g4_s24 = (60u + sizeof(_g4_t_v102)) > _g4_s23 ? (60u + sizeof(_g4_t_v102)) : _g4_s23,
    _g4_s25 = (60u + sizeof(_g4_t_v103)) > _g4_s24 ? (60u + sizeof(_g4_t_v103)) : _g4_s24,
    _g4_s26 = (64u + sizeof(_g4_t_v104)) > _g4_s25 ? (64u + sizeof(_g4_t_v104)) : _g4_s25,
    _g4_s27 = (64u + sizeof(_g4_t_v105)) > _g4_s26 ? (64u + sizeof(_g4_t_v105)) : _g4_s26,
    _g4_s28 = (64u + sizeof(_g4_t_v106)) > _g4_s27 ? (64u + sizeof(_g4_t_v106)) : _g4_s27,
    _g4_s29 = (64u + sizeof(_g4_t_v107)) > _g4_s28 ? (64u + sizeof(_g4_t_v107)) : _g4_s28,
    _g4_s30 = (64u + sizeof(_g4_t_v108)) > _g4_s29 ? (64u + sizeof(_g4_t_v108)) : _g4_s29,
    _g4_s31 = (64u + sizeof(_g4_t_v109)) > _g4_s30 ? (64u + sizeof(_g4_t_v109)) : _g4_s30,
    _g4_s32 = (64u + sizeof(_g4_t_v110)) > _g4_s31 ? (64u + sizeof(_g4_t_v110)) : _g4_s31,
    _g4_s33 = (80u + sizeof(_g4_t_v111)) > _g4_s32 ? (80u + sizeof(_g4_t_v111)) : _g4_s32,
    _g4_s34 = (84u + sizeof(_g4_t_v112)) > _g4_s33 ? (84u + sizeof(_g4_t_v112)) : _g4_s33,
    _g4_s35 = (88u + sizeof(_g4_t_v113)) > _g4_s34 ? (88u + sizeof(_g4_t_v113)) : _g4_s34,
    _g4_s36 = (92u + sizeof(_g4_t_v114)) > _g4_s35 ? (92u + sizeof(_g4_t_v114)) : _g4_s35,
    _g4_s37 = (100u + sizeof(_g4_t_v115)) > _g4_s36 ? (100u + sizeof(_g4_t_v115)) : _g4_s36,
    _g4_s38 = (108u + sizeof(_g4_t_v116)) > _g4_s37 ? (108u + sizeof(_g4_t_v116)) : _g4_s37,
    _g4_s39 = (116u + sizeof(_g4_t_v117)) > _g4_s38 ? (116u + sizeof(_g4_t_v117)) : _g4_s38,
    _g4_s40 = (124u + sizeof(_g4_t_v118)) > _g4_s39 ? (124u + sizeof(_g4_t_v118)) : _g4_s39,
    _g4_s41 = (132u + sizeof(_g4_t_v119)) > _g4_s40 ? (132u + sizeof(_g4_t_v119)) : _g4_s40,
    _g4_s42 = (140u + sizeof(_g4_t_v120)) > _g4_s41 ? (140u + sizeof(_g4_t_v120)) : _g4_s41,
    _g4_s43 = (148u + sizeof(_g4_t_v121)) > _g4_s42 ? (148u + sizeof(_g4_t_v121)) : _g4_s42,
    _g4_s44 = (164u + sizeof(_g4_t_v122)) > _g4_s43 ? (164u + sizeof(_g4_t_v122)) : _g4_s43,
    _g4_s45 = (168u + sizeof(_g4_t_v123)) > _g4_s44 ? (168u + sizeof(_g4_t_v123)) : _g4_s44,
    _g4_s46 = (172u + sizeof(_g4_t_v124)) > _g4_s45 ? (172u + sizeof(_g4_t_v124)) : _g4_s45,
    _g4_s47 = (176u + sizeof(_g4_t_v125)) > _g4_s46 ? (176u + sizeof(_g4_t_v125)) : _g4_s46,
    _g4_s48 = (180u + sizeof(_g4_t_v126)) > _g4_s47 ? (180u + sizeof(_g4_t_v126)) : _g4_s47,
    _g4_s49 = (184u + sizeof(_g4_t_v127)) > _g4_s48 ? (184u + sizeof(_g4_t_v127)) : _g4_s48,
    _g4_s50 = (188u + sizeof(_g4_t_v128)) > _g4_s49 ? (188u + sizeof(_g4_t_v128)) : _g4_s49,
    _g4_s51 = (192u + sizeof(_g4_t_v129)) > _g4_s50 ? (192u + sizeof(_g4_t_v129)) : _g4_s50,
    _g4_s52 = (196u + sizeof(_g4_t_v130)) > _g4_s51 ? (196u + sizeof(_g4_t_v130)) : _g4_s51,
    _g4_s53 = (200u + sizeof(_g4_t_v131)) > _g4_s52 ? (200u + sizeof(_g4_t_v131)) : _g4_s52,
    _g4_s54 = (460u + sizeof(_g4_t_v132)) > _g4_s53 ? (460u + sizeof(_g4_t_v132)) : _g4_s53,
    _g4_s55 = (464u + sizeof(_g4_t_v133)) > _g4_s54 ? (464u + sizeof(_g4_t_v133)) : _g4_s54,
    _g4_s56 = (468u + sizeof(_g4_t_v134)) > _g4_s55 ? (468u + sizeof(_g4_t_v134)) : _g4_s55,
    _g4_s57 = (488u + sizeof(_g4_t_v135)) > _g4_s56 ? (488u + sizeof(_g4_t_v135)) : _g4_s56,
    _g4_s58 = (580u + sizeof(_g4_t_v136)) > _g4_s57 ? (580u + sizeof(_g4_t_v136)) : _g4_s57,
    _g4_s59 = (584u + sizeof(_g4_t_v137)) > _g4_s58 ? (584u + sizeof(_g4_t_v137)) : _g4_s58,
    _g4_s60 = (585u + sizeof(_g4_t_v138)) > _g4_s59 ? (585u + sizeof(_g4_t_v138)) : _g4_s59,
    _g4_s61 = (588u + sizeof(_g4_t_v139)) > _g4_s60 ? (588u + sizeof(_g4_t_v139)) : _g4_s60,
    _g4_s62 = (592u + sizeof(_g4_t_v140)) > _g4_s61 ? (592u + sizeof(_g4_t_v140)) : _g4_s61,
    _g4_s63 = (596u + sizeof(_g4_t_v141)) > _g4_s62 ? (596u + sizeof(_g4_t_v141)) : _g4_s62,
    _g4_s64 = (600u + sizeof(_g4_t_v142)) > _g4_s63 ? (600u + sizeof(_g4_t_v142)) : _g4_s63,
    _g4_s65 = (620u + sizeof(_g4_t_v143)) > _g4_s64 ? (620u + sizeof(_g4_t_v143)) : _g4_s64
  };
  alignas(16) uint8_t _g4_sf[_g4_s65];
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 4u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 8u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 32u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 32u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 32u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 32u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 32u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 32u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 32u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 32u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 36u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 36u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 36u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 36u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 36u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 56u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 60u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 60u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 60u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 60u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 60u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 60u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 60u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 60u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 60u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 64u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 64u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 64u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 64u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 64u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 64u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 64u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 80u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 84u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 88u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 92u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 100u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 108u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 116u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 124u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 132u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 140u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 148u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 164u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 168u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 172u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 176u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 180u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 184u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 188u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 192u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 196u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 200u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 460u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 464u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 468u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 488u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 580u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 584u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 585u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 588u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 592u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 596u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 600u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 620u);

  v143 = &a1;
  v3 = a1;
  v4 = a2;
  v5 = *a3;
  if ( *a3 != nullptr )
    __sync_add_and_fetch(v5 + 1, 1u);
  v81 = v5;
  v104 = (char *)glf::fs2::Path::c_str(v4);
  sub_1900810(v134);
  v136 = 0;
  v137 = 0;
  v138 = 0;
  v139 = 0;
  v140 = 0;
  v141 = 0;
  v142 = 0;
  v123 = 0;
  v134[0] = (uint32_t)(uintptr_t)(&off_206DF60);
  sub_19119D0(v134, &v124);
  v122 = (void (**)(glf::basic_ifstream<char, std::char_traits<char>> *))(uintptr_t)(((uint32_t)(uintptr_t)&off_206DF0C));
  v134[0] = ((uint32_t)(uintptr_t)&off_206DF20);
  if ( v81 != nullptr )
  {
    __sync_add_and_fetch(v81 + 1, 1u);
    v125 = 0;
    v126 = 0;
    v127 = 0;
    v128 = 0;
    v129 = 0;
    v124 = (void (**)(glf::basic_filebuf<char, std::char_traits<char>> *))&off_20AB2C8;
    v130 = 0;
    sub_1903A70(v131);
    v6 = v81;
    v132 = (glf::fs2::FileSystem::Self *)v81;
    v124 = (void (**)(glf::basic_filebuf<char, std::char_traits<char>> *))(uintptr_t)(((uint32_t)(uintptr_t)&off_206D728));
    __sync_add_and_fetch(v81 + 1, 1u);
    v133 = nullptr;
    if ( __sync_fetch_and_add(v81 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v81, 8);
      G4_VCALL<void>(v81, 16);
      v8 = v133;
      v6 = v81;
    }
    else
    {
      v7 = *((uint32_t *)v81 + 1);
      _mm_mfence();
      if ( v7 == 1 )
      {
        G4_VCALL<void>(v81, 12);
        v8 = v133;
        v6 = v81;
      }
      else
      {
        v8 = v133;
      }
    }
    if ( v8 != nullptr )
    {
LABEL_8:
      v82 = v6;
      sub_1911530((char *)&v122 + (uint32_t)(uintptr_t)(*(v122 - 3)), *(int *)((char *)&v122 + (uint32_t)(uintptr_t)(*(v122 - 3)) + 20) | 4);
      v9 = v82;
      goto LABEL_9;
    }
  }
  else
  {
    v125 = 0;
    v126 = 0;
    v127 = 0;
    v128 = 0;
    v129 = 0;
    v124 = (void (**)(glf::basic_filebuf<char, std::char_traits<char>> *))&off_20AB2C8;
    v130 = 0;
    sub_1903A70(v131);
    v132 = nullptr;
    v133 = nullptr;
    v6 = nullptr;
    v124 = (void (**)(glf::basic_filebuf<char, std::char_traits<char>> *))(uintptr_t)(((uint32_t)(uintptr_t)&off_206D728));
  }
  v87 = v6;
  v92 = glf::io2::Device::ConvertToOpenMode(12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v116), v104, (int)(uintptr_t)(&v111));
  v116[1] = 0;
  glf::fs2::Path::Init((glf::fs2::Path::Self *)v116);
  v75 = glf::fs2::FileSystem::Open(v132, (glf::fs2::Path::Self *)v116, v92);
  v76 = v87;
  if ( v75 != nullptr )
    __sync_add_and_fetch((volatile int32_t *)v75 + 1, 1u);
  v77 = v133;
  v133 = (volatile int32_t *)v75;
  if ( v77 != nullptr )
  {
    if ( __sync_fetch_and_add(v77 + 1, 0xFFFFFFFF) == 1 )
    {
      v93 = (int)(uintptr_t)(v77);
      G4_VCALL<void>(v77, 8);
      G4_VCALL<void>(v93, 16);
      v76 = v87;
    }
    else
    {
      v78 = *((uint32_t *)v77 + 1);
      _mm_mfence();
      if ( v78 == 1 )
      {
        G4_VCALL<void>(v77, 12);
        v76 = v87;
      }
    }
  }
  v88 = v76;
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v116);
  v6 = v88;
  if ( v133 == nullptr )
    goto LABEL_8;
  sub_1911530((char *)&v122 + (uint32_t)(uintptr_t)(*(v122 - 3)), 0);
  v9 = v88;
LABEL_9:
  if ( v9 != nullptr )
  {
    if ( __sync_fetch_and_add(v9 + 1, 0xFFFFFFFF) == 1 )
    {
      v85 = v9;
      G4_VCALL<void>(v9, 8);
      G4_VCALL<void>(v85, 16);
    }
    else
    {
      v10 = *((uint32_t *)v9 + 1);
      _mm_mfence();
      if ( v10 == 1 )
        G4_VCALL<void>(v9, 12);
    }
  }
  if ( (v135 & 5) == 0 )
  {
    *((uint8_t *)v3 + 189) = 0;
    sub_1913BC0(&v122, v114, 4);
    sub_1913BC0(&v122, v114, 4);
    v105 = (glf::fs2::IndexData::Self *)((char *)v3 + 192);
    v121[0] = (int)(uintptr_t)(&dword_213B814);
    sub_1913BC0(&v122, v114, 4);
    sub_1939D80((int)(uintptr_t)(v121), v114[0], 0);
    v11 = v121[0];
    v12 = *(uint32_t *)(v121[0] - 12);
    if ( v12 != 0 )
    {
      if ( *(int *)(v121[0] - 4) >= 0 )
      {
        v84 = *(uint32_t *)(v121[0] - 12);
        sub_19397C0(v121);
        v11 = v121[0];
        v12 = v84;
      }
      sub_1913BC0(&v122, v11, v12);
    }
    g4_std::string::assign_str(v105, v121);
    glf::fs2::Path::Init(v105);
    v13 = (void *)(v121[0] - 12);
    if ( (uint32_t *)(v121[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v121[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v13);
    }
    sub_1913BC0(&v122, (char *)v3 + 200, 4);
    sub_1913BC0(&v122, (char *)v3 + 204, 4);
    sub_1913BC0(&v122, v114, 4);
    v14 = *((glf::fs2::IndexData::Self **)v3 + 52);
    v106 = *((glf::fs2::IndexData::Self **)v3 + 53);
    v15 = v114[0];
    v114[0] = 0;
    v16 = (v106 - v14) >> 2;
    if ( v16 < v15 )
    {
      g4_std_compat::vector_fill_insert(
        (int)(uintptr_t)(v3) + 208,
        v106,
        v15 - v16,
        (int)(uintptr_t)(v114));
      v14 = *((glf::fs2::IndexData::Self **)v3 + 52);
    }
    else if ( v16 > v15 )
    {
      *((uint32_t *)v3 + 53) = (uint32_t)(uintptr_t)((char *)v14 + 4 * v15);
    }
    v89 = v14;
    glf::fs2::FileSystem::Get((glf::fs2::FileSystem::Self *)&v112);
    *(uint32_t *)v89 = v112;
    v17 = (uint32_t *)v112;
    if ( v112 != 0 )
    {
      if ( __sync_fetch_and_add((volatile int32_t *)(v112 + 4), 0xFFFFFFFF) == 1 )
      {
        v86 = v17;
        G4_VCALL<void>(v17, 8);
        G4_VCALL<void>(v86, 16);
      }
      else
      {
        v18 = v17[1];
        _mm_mfence();
        if ( v18 == 1 )
          G4_VCALL<void>(v17, 12);
      }
    }
    if ( (unsigned int)(*((uint32_t *)v3 + 53) - *((uint32_t *)v3 + 52)) > 7 )
    {
      v19 = 1;
      do
      {
        v121[0] = (int)(uintptr_t)(&dword_213B814);
        sub_1913BC0(&v122, v114, 4);
        sub_1939D80((int)(uintptr_t)(v121), v114[0], 0);
        v23 = v121[0];
        v24 = *(uint32_t *)(v121[0] - 12);
        if ( v24 != 0 )
        {
          if ( *(int *)(v121[0] - 4) >= 0 )
          {
            v83 = *(uint32_t *)(v121[0] - 12);
            sub_19397C0(v121);
            v23 = v121[0];
            v24 = v83;
          }
          sub_1913BC0(&v122, v23, v24);
        }
        v90 = (uint32_t *)(*((uint32_t *)v3 + 52) + 4 * v19);
        glf::fs2::GetFsFromName((uint32_t *)(&v113), (const void **)v121);
        *v90 = v113;
        v20 = (uint32_t *)v113;
        if ( v113 != 0 )
        {
          if ( __sync_fetch_and_add((volatile int32_t *)(v113 + 4), 0xFFFFFFFF) == 1 )
          {
            v91 = (int)(uintptr_t)(v20);
            G4_VCALL<void>(v20, 8);
            G4_VCALL<void>(v91, 16);
          }
          else
          {
            v21 = v20[1];
            _mm_mfence();
            if ( v21 == 1 )
              G4_VCALL<void>(v20, 12);
          }
        }
        v22 = (void *)(v121[0] - 12);
        if ( (uint32_t *)(v121[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v121[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v22);
        }
        ++v19;
      }
      while ( v19 < (*((uint32_t *)v3 + 53) - *((uint32_t *)v3 + 52)) >> 2 );
    }
    glf::fs2::Path::Construct((glf::fs2::Path::Self *)v115);
    sub_1913BC0(&v122, v114, 4);
    v66 = *((uint32_t *)v3 + 55);
    v109 = *((glf::fs2::IndexData::Self **)v3 + 56);
    v67 = ((int)(uintptr_t)(v109) - v66) >> 3;
    if ( v114[0] > v67 )
    {
      g4_std_compat::vector_fill_insert(
        (char *)v3 + 220,
        v109,
        v114[0] - v67,
        (glf::fs2::Path::Self *)v115);
    }
    else if ( v114[0] < v67 )
    {
      v68 = (glf::fs2::IndexData::Self *)(v66 + 8 * v114[0]);
      v103 = v68;
      if ( v109 != v68 )
      {
        v94 = v3;
        v69 = (glf::fs2::Path::Self *)(v68);
        do
        {
          v79 = v69;
          v69 = (glf::fs2::Path::Self *)((char *)v69 + 8);
          glf::fs2::Path::Destroy(v79);
        }
        while ( v109 != (glf::fs2::IndexData::Self *)(uintptr_t)(v69) );
        v3 = v94;
      }
      *((uint32_t *)v3 + 56) = (uint32_t)(uintptr_t)(v103);
    }
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v115);
    if ( (unsigned int)(*((uint32_t *)v3 + 56) - *((uint32_t *)v3 + 55)) >> 3 != 0 )
    {
      v110 = v3;
      v70 = 0;
      do
      {
        v121[0] = (int)(uintptr_t)(&dword_213B814);
        sub_1913BC0(&v122, v114, 4);
        sub_1939D80((int)(uintptr_t)(v121), v114[0], 0);
        v73 = v121[0];
        v74 = *(uint32_t *)(v121[0] - 12);
        if ( v74 != 0 )
        {
          if ( *(int *)(v121[0] - 4) >= 0 )
          {
            sub_19397C0(v121);
            v73 = v121[0];
          }
          sub_1913BC0(&v122, v73, v74);
        }
        v71 = (glf::fs2::Path::Self *)(*((uint32_t *)v110 + 55) + 8 * v70);
        g4_std::string::assign_str(v71, v121);
        glf::fs2::Path::Init(v71);
        v72 = (void *)(v121[0] - 12);
        if ( (uint32_t *)(v121[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v121[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v72);
        }
        ++v70;
      }
      while ( v70 < (*((uint32_t *)v110 + 56) - *((uint32_t *)v110 + 55)) >> 3 );
      v3 = v110;
    }
    sub_1913BC0(&v122, v114, 4);
    v25 = *((char **)v3 + 59);
    v95 = v114[0];
    v26 = *((uint8_t **)v3 + 58);
    LOBYTE(v114[0]) = 0;
    if ( v25 - (char *)(v26) < v95 )
    {
      g4_std_compat::vector_fill_insert((int)(uintptr_t)(v3) + 232, v25, v95 - (v25 - (char *)(v26)), (int)(uintptr_t)(v114));
      v25 = *((char **)v3 + 59);
      v26 = *((uint8_t **)v3 + 58);
    }
    else if ( v25 - (char *)(v26) > v95 )
    {
      v25 = (char *)(&v26[v95]);
      *((uint32_t *)v3 + 59) = (uint32_t)(uintptr_t)(&v26[v95]);
    }
    if ( v25 != (char *)(uintptr_t)(v26) )
      sub_1913BC0(&v122, v26, v25 - (char *)(v26));
    sub_1913BC0(&v122, v114, 4);
    v27 = *((char **)v3 + 62);
    v96 = v114[0];
    v28 = *((char **)v3 + 61);
    LOBYTE(v114[0]) = 0;
    if ( v96 > v27 - v28 )
    {
      g4_std_compat::vector_fill_insert(
        (int)(uintptr_t)(v3) + 244,
        v27,
        v96 - (v27 - v28),
        (int)(uintptr_t)(v114));
      v27 = *((char **)v3 + 62);
      v28 = *((char **)v3 + 61);
    }
    else if ( v96 < v27 - v28 )
    {
      v27 = &v28[v96];
      *((uint32_t *)v3 + 62) = (uint32_t)(uintptr_t)(&v28[v96]);
    }
    if ( v28 != v27 )
      sub_1913BC0(&v122, v28, v27 - v28);
    sub_1913BC0(&v122, v114, 4);
    v29 = *((char **)v3 + 65);
    v97 = v114[0];
    v30 = *((char **)v3 + 64);
    LOBYTE(v114[0]) = 0;
    if ( v97 > v29 - v30 )
    {
      g4_std_compat::vector_fill_insert(
        (int)(uintptr_t)(v3) + 256,
        v29,
        v97 - (v29 - v30),
        (int)(uintptr_t)(v114));
      v29 = *((char **)v3 + 65);
      v30 = *((char **)v3 + 64);
    }
    else if ( v97 < v29 - v30 )
    {
      v29 = &v30[v97];
      *((uint32_t *)v3 + 65) = (uint32_t)(uintptr_t)(&v30[v97]);
    }
    if ( v30 != v29 )
      sub_1913BC0(&v122, v30, v29 - v30);
    sub_1913BC0(&v122, v114, 4);
    v31 = *((glf::Self **)v3 + 68);
    v32 = *((glf::Self **)v3 + 67);
    v121[0] = 0;
    v33 = (v31 - v32) >> 2;
    if ( v114[0] > v33 )
    {
      sub_CA5130((glf::fs2::IndexData::Self *)((char *)v3 + 268), v31, v114[0] - v33, v121);
      v31 = *((glf::Self **)v3 + 68);
      v32 = *((glf::Self **)v3 + 67);
    }
    else if ( v114[0] < v33 )
    {
      v31 = (glf::Self *)((char *)v32 + 4 * v114[0]);
      *((uint32_t *)v3 + 68) = (uint32_t)(uintptr_t)(v31);
    }
    if ( v32 != v31 )
      sub_1913BC0(&v122, v32, (v31 - v32) & 0xFFFFFFFC);
    sub_1913BC0(&v122, v114, 4);
    v34 = *((char **)v3 + 70);
    v35 = *((char **)v3 + 71);
    memset(v121, 255, 12);
    v36 = -1431655765 * ((v35 - v34) >> 2);
    if ( v114[0] > v36 )
    {
      sub_CA5410((int)(uintptr_t)(v3) + 280, v35, v114[0] - v36, (int16_t *)v121);
      v35 = *((char **)v3 + 71);
      v34 = *((char **)v3 + 70);
    }
    else if ( v114[0] < v36 )
    {
      v35 = &v34[12 * v114[0]];
      *((uint32_t *)v3 + 71) = (uint32_t)(uintptr_t)(v35);
    }
    if ( v35 != v34 )
      sub_1913BC0(&v122, v34, (v35 - v34) & 0xFFFFFFFC);
    sub_1913BC0(&v122, v114, 4);
    v37 = *((uint8_t **)v3 + 74);
    v98 = v114[0];
    v38 = *((uint8_t **)v3 + 73);
    LOWORD(v114[0]) = 0;
    v39 = (v37 - v38) >> 1;
    if ( v98 > v39 )
    {
      g4_std_compat::vector_fill_insert(
        (int)(uintptr_t)(v3) + 292,
        v37,
        v98 - ((v37 - v38) >> 1),
        (int)(uintptr_t)(v114));
      v37 = *((uint8_t **)v3 + 74);
      v38 = *((uint8_t **)v3 + 73);
    }
    else if ( v98 < v39 )
    {
      v37 = &v38[2 * v98];
      *((uint32_t *)v3 + 74) = (uint32_t)(uintptr_t)(v37);
    }
    if ( v38 != v37 )
      sub_1913BC0(&v122, v38, (v37 - v38) & 0xFFFFFFFE);
    sub_1913BC0(&v122, v114, 4);
    v40 = *((uint8_t **)v3 + 77);
    v99 = v114[0];
    v41 = *((uint8_t **)v3 + 76);
    v114[0] = 0;
    v107 = (v40 - v41) >> 2;
    if ( v107 < v99 )
    {
      g4_std_compat::vector_fill_insert((int)(uintptr_t)(v3) + 304, v40, v99 - v107, (int)(uintptr_t)(v114));
      v40 = *((uint8_t **)v3 + 77);
      v41 = *((uint8_t **)v3 + 76);
    }
    else if ( v107 > v99 )
    {
      v40 = &v41[4 * v99];
      *((uint32_t *)v3 + 77) = (uint32_t)(uintptr_t)(v40);
    }
    if ( v40 != v41 )
      sub_1913BC0(&v122, v41, (v40 - v41) & 0xFFFFFFFC);
    sub_1913BC0(&v122, v114, 4);
    v42 = *((char **)v3 + 80);
    v100 = v114[0];
    v43 = *((uint8_t **)v3 + 79);
    LOBYTE(v114[0]) = 0;
    if ( v100 > v42 - (char *)(v43) )
    {
      g4_std_compat::vector_fill_insert(
        (int)(uintptr_t)(v3) + 316,
        v42,
        v100 - (v42 - (char *)(v43)),
        (int)(uintptr_t)(v114));
      v42 = *((char **)v3 + 80);
      v43 = *((uint8_t **)v3 + 79);
    }
    else if ( v100 < v42 - (char *)(v43) )
    {
      v42 = (char *)(&v43[v100]);
      *((uint32_t *)v3 + 80) = (uint32_t)(uintptr_t)(&v43[v100]);
    }
    if ( v42 != (char *)(uintptr_t)(v43) )
      sub_1913BC0(&v122, v43, v42 - (char *)(v43));
    sub_1913BC0(&v122, v114, 4);
    v44 = *((uint8_t **)v3 + 82);
    v101 = v114[0];
    v45 = *((uint8_t **)v3 + 83);
    v114[0] = 0;
    v114[1] = 0;
    v108 = (v45 - v44) >> 3;
    if ( v108 < v101 )
    {
      g4_std_compat::vector_fill_insert((int)(uintptr_t)(v3) + 328, v45, v101 - v108, (int)(uintptr_t)(v114));
      v45 = *((uint8_t **)v3 + 83);
      v44 = *((uint8_t **)v3 + 82);
    }
    else if ( v108 > v101 )
    {
      v45 = &v44[8 * v101];
      *((uint32_t *)v3 + 83) = (uint32_t)(uintptr_t)(v45);
    }
    if ( v44 != v45 )
      sub_1913BC0(&v122, v44, (v45 - v44) & 0xFFFFFFF8);
    sub_1913BC0(&v122, v114, 4);
    v46 = *((uint8_t **)v3 + 86);
    v102 = v114[0];
    v47 = *((uint8_t **)v3 + 85);
    LOWORD(v114[0]) = 0;
    v48 = (v46 - v47) >> 1;
    if ( v102 > v48 )
    {
      g4_std_compat::vector_fill_insert(
        (int)(uintptr_t)(v3) + 340,
        v46,
        v102 - ((v46 - v47) >> 1),
        (int)(uintptr_t)(v114));
      v46 = *((uint8_t **)v3 + 86);
      v47 = *((uint8_t **)v3 + 85);
    }
    else if ( v102 < v48 )
    {
      v46 = &v47[2 * v102];
      *((uint32_t *)v3 + 86) = (uint32_t)(uintptr_t)(v46);
    }
    if ( v47 != v46 )
      sub_1913BC0(&v122, v47, (v46 - v47) & 0xFFFFFFFE);
    v117[0] = 0xFFFFFFFF;
    v117[1] = 0xFFFFFFFF;
    sub_1913BC0(&v122, v114, 4);
    v49 = *((glf::Self **)v3 + 89);
    v50 = *((glf::Self **)v3 + 88);
    v51 = (v49 - v50) >> 3;
    if ( v51 < v114[0] )
    {
      sub_CA58C0((int)(uintptr_t)(v3) + 352, v49, v114[0] - v51, v117);
      v49 = *((glf::Self **)v3 + 89);
      v50 = *((glf::Self **)v3 + 88);
    }
    else if ( v51 > v114[0] )
    {
      v49 = (glf::Self *)((char *)v50 + 8 * v114[0]);
      *((uint32_t *)v3 + 89) = (uint32_t)(uintptr_t)(v49);
    }
    if ( v50 != v49 )
      sub_1913BC0(&v122, v50, (v49 - v50) & 0xFFFFFFF8);
    v118[0] = 0xFFFFFFFF;
    v118[1] = 0xFFFFFFFF;
    sub_1913BC0(&v122, v114, 4);
    v52 = *((glf::Self **)v3 + 91);
    v53 = *((glf::Self **)v3 + 92);
    v54 = (v53 - v52) >> 3;
    if ( v54 < v114[0] )
    {
      sub_CA58C0((int)(uintptr_t)(v3) + 364, v53, v114[0] - v54, v118);
      v53 = *((glf::Self **)v3 + 92);
      v52 = *((glf::Self **)v3 + 91);
    }
    else if ( v54 > v114[0] )
    {
      v53 = (glf::Self *)((char *)v52 + 8 * v114[0]);
      *((uint32_t *)v3 + 92) = (uint32_t)(uintptr_t)(v53);
    }
    if ( v53 != v52 )
      sub_1913BC0(&v122, v52, (v53 - v52) & 0xFFFFFFF8);
    v119[0] = 0xFFFFFFFF;
    v119[1] = 0xFFFFFFFF;
    sub_1913BC0(&v122, v114, 4);
    v55 = *((glf::Self **)v3 + 94);
    v56 = *((glf::Self **)v3 + 95);
    v57 = (v56 - v55) >> 3;
    if ( v57 < v114[0] )
    {
      sub_CA58C0((int)(uintptr_t)(v3) + 376, v56, v114[0] - v57, v119);
      v56 = *((glf::Self **)v3 + 95);
      v55 = *((glf::Self **)v3 + 94);
    }
    else if ( v57 > v114[0] )
    {
      v56 = (glf::Self *)((char *)v55 + 8 * v114[0]);
      *((uint32_t *)v3 + 95) = (uint32_t)(uintptr_t)(v56);
    }
    if ( v55 != v56 )
      sub_1913BC0(&v122, v55, (v56 - v55) & 0xFFFFFFF8);
    v120[0] = 0xFFFFFFFF;
    v120[1] = 0xFFFFFFFF;
    sub_1913BC0(&v122, v114, 4);
    v58 = *((glf::Self **)v3 + 97);
    v59 = *((glf::Self **)v3 + 98);
    v60 = (v59 - v58) >> 3;
    if ( v60 < v114[0] )
    {
      sub_CA58C0((int)(uintptr_t)(v3) + 388, v59, v114[0] - v60, v120);
      v59 = *((glf::Self **)v3 + 98);
      v58 = *((glf::Self **)v3 + 97);
    }
    else if ( v60 > v114[0] )
    {
      v59 = (glf::Self *)((char *)v58 + 8 * v114[0]);
      *((uint32_t *)v3 + 98) = (uint32_t)(uintptr_t)(v59);
    }
    if ( v59 != v58 )
      sub_1913BC0(&v122, v58, (v59 - v58) & 0xFFFFFFF8);
    v80 = 1;
    glf::fs2::IndexData::ResolveOffsets();
  }
  v61 = v133;
  v122 = (void (**)(glf::basic_ifstream<char, std::char_traits<char>> *))(uintptr_t)(((uint32_t)(uintptr_t)&off_206DF0C));
  v134[0] = ((uint32_t)(uintptr_t)&off_206DF20);
  v124 = (void (**)(glf::basic_filebuf<char, std::char_traits<char>> *))(uintptr_t)(((uint32_t)(uintptr_t)&off_206D728));
  if ( v133 != nullptr )
  {
    if ( __sync_fetch_and_add(v133 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v61, 8, v80);
      G4_VCALL<void>(v61, 16);
    }
    else
    {
      v62 = *((uint32_t *)v61 + 1);
      _mm_mfence();
      if ( v62 == 1 )
        G4_VCALL<void>(v61, 12, v80);
    }
  }
  v63 = v132;
  if ( v132 != nullptr )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)v132 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v63, 8);
      G4_VCALL<void>(v63, 16);
    }
    else
    {
      v64 = *((uint32_t *)v63 + 1);
      _mm_mfence();
      if ( v64 == 1 )
        G4_VCALL<void>(v63, 12);
    }
  }
  v124 = (void (**)(glf::basic_filebuf<char, std::char_traits<char>> *))&off_20AB2C8;
  sub_1902180(v131);
  v123 = 0;
  v122 = (void (**)(glf::basic_ifstream<char, std::char_traits<char>> *))&off_206DF4C;
  v134[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v134);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::IndexData::FromFile  (binary VA: 0xcae080)
// Original: glf::fs2::IndexData::FromFile
// ----------------------------------------------------------------------------
glf::fs2::FileSystem::Self * glf::fs2::IndexData::FromFile(glf::fs2::Path::Self *a1, volatile int32_t **a2)
{
  glf::fs2::FileSystem::Self *v2;
  glf::fs2::FileSystem::Self *v3;
  int v4;
  volatile int32_t *v5;
  volatile int32_t *v6;
  int v7;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef volatile int32_t **_g4_t_v11;
  typedef glf::fs2::Path::Self *_g4_t_v12;
  typedef volatile int32_t *_g4_t_v13;
  typedef glf::fs2::FileSystem::Self *_g4_t_v14;
  typedef int _g4_t_v15[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v10)) > _g4_s1 ? (4u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v11)) > _g4_s2 ? (8u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v12)) > _g4_s3 ? (12u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v13)) > _g4_s4 ? (16u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v14)) > _g4_s5 ? (20u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v15)) > _g4_s6 ? (24u + sizeof(_g4_t_v15)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);

  v15[4] = (int)(uintptr_t)(&a1);
  v11 = a2;
  v12 = a1;
  glf::fs2::Path::Construct((glf::fs2::Path::Self *)v15);
  glf::fs2::FileSystem::Get((glf::fs2::FileSystem::Self *)&v14);
  v2 = (glf::fs2::FileSystem::Self *)glf::MemObject::opNew(0x190u);
  glf::fs2::IndexData::Construct(v2, (glf::fs2::Path::Self *)v15, 0, &v14);
  v3 = v14;
  if ( v14 != nullptr )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)v14 + 1, 0xFFFFFFFF) == 1 )
    {
      v10 = (int)(uintptr_t)(v3);
      G4_VCALL<void>(v3, 8);
      G4_VCALL<void>(v10, 16);
    }
    else
    {
      v4 = *((uint32_t *)v3 + 1);
      _mm_mfence();
      if ( v4 == 1 )
        G4_VCALL<void>(v3, 12);
    }
  }
  v5 = *v11;
  v13 = *v11;
  if ( v13 != nullptr )
    __sync_add_and_fetch(v5 + 1, 1u);
  glf::fs2::IndexData::Load((glf::fs2::IndexData::Self *)(v2), v12, &v13);
  v6 = v13;
  if ( v13 != nullptr )
  {
    if ( __sync_fetch_and_add(v13 + 1, 0xFFFFFFFF) == 1 )
    {
      v9 = (int)(uintptr_t)(v6);
      G4_VCALL<void>(v6, 8);
      G4_VCALL<void>(v9, 16);
    }
    else
    {
      v7 = *((uint32_t *)v6 + 1);
      _mm_mfence();
      if ( v7 == 1 )
        G4_VCALL<void>(v6, 12);
    }
  }
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v15);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::Destroy  (binary VA: 0xcb0620)
// Original: glf::fs2::Path::~Path
// ----------------------------------------------------------------------------
void glf::fs2::Path::Destroy(glf::fs2::Path::Self *self)
{
  uint32_t *v1;

  v1 = (uint32_t *)(*(uint32_t *)self - 12);
  if ( v1 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)self - 4), 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v1);
}



// ============================================================================
// Address:   0xcb0670 (size: 34 bytes)
// Symbol:    _ZN3glf3fs24PathC1Ev
// Demangled: glf::fs2::Path::Path(void)
// ============================================================================
// Alternative name is '_ZN3glf3fs24PathC2Ev'
glf::fs2::Path::Self *glf::fs2::Path::Construct(glf::fs2::Path::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 1) = 19;
  return self;
}
// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::m_parent_path_end  (binary VA: 0xcb06a0)
// Original: glf::fs2::Path::m_parent_path_end
// ----------------------------------------------------------------------------
int glf::fs2::Path::m_parent_path_end(glf::fs2::Path::Self *self)
{
  uint8_t *v1;
  int v2;
  unsigned int v3;
  int v4;
  char v5;
  int v6;
  unsigned int v7;
  char v9;
  unsigned int v10;
  int v11;
  char v12;
  bool v13;

  v1 = *(uint8_t **)self;
  v2 = *(uint32_t *)(*(uint32_t *)self - 12);
  if ( v2 == 2 )
  {
    if ( *v1 == 47 && v1[1] == 47 )
    {
      v3 = 0;
      goto LABEL_20;
    }
LABEL_19:
    v3 = v2 - 1;
    if ( v1[v2 - 1] != 47 )
      goto LABEL_4;
LABEL_20:
    v5 = 1;
    if ( v3 != 2 )
      goto LABEL_10;
LABEL_21:
    if ( *v1 == 47 )
    {
      v13 = true;
      v6 = -1;
      if ( v1[1] == 47 )
        goto LABEL_12;
      goto LABEL_34;
    }
LABEL_22:
    v13 = *v1 != 47;
    v6 = (*v1 == 47) - 1;
    goto LABEL_12;
  }
  if ( v2 != 0 )
    goto LABEL_19;
  v3 = 0xFFFFFFFF;
LABEL_4:
  v11 = v3;
  v3 = 0;
  v4 = sub_1938190((int)(uintptr_t)(self), "/", v11, 1u);
  v1 = *(uint8_t **)self;
  if ( v4 != -1 )
  {
    if ( v4 != 1 || (v3 = 0, *v1 != 47) )
      v3 = v4 + 1;
  }
  if ( *((uint32_t *)v1 - 3) == 0 || (v5 = 1, v1[v3] != 47) )
    v5 = 0;
  if ( v3 == 2 )
    goto LABEL_21;
LABEL_10:
  if ( v3 <= 3 )
  {
    if ( v3 == 0 )
      return 0;
    goto LABEL_22;
  }
  v13 = true;
  v6 = -1;
  if ( *v1 == 47 )
  {
    if ( v1[1] == 47 && v1[2] != 47 )
    {
      v12 = v5;
      v10 = sub_1938090((int)(uintptr_t)(self), "/", 2, 1u);
      v6 = v10;
      v5 = v12;
      if ( v3 <= v10 )
        v6 = -1;
      else
        v13 = v10 != 0;
      goto LABEL_12;
    }
LABEL_34:
    v13 = false;
    v6 = 0;
  }
LABEL_12:
  if ( v3 - 1 != v6 )
  {
    v7 = v3 - 2;
    if ( *(uint8_t *)(*(uint32_t *)self + v3 - 1) == 47 )
    {
      do
      {
        v3 = v7 + 1;
        if ( v7 == -1 )
          break;
        if ( v7 == v6 )
          break;
        v9 = *(uint8_t *)(*(uint32_t *)self + v7--);
      }
      while ( v9 == 47 );
    }
  }
  if ( v3 == 1 && !v13 )
    return v5 == 0 ? 1 : -1;
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::AppendSeparatorIfNeeded  (binary VA: 0xcb0890)
// Original: glf::fs2::Path::AppendSeparatorIfNeeded
// ----------------------------------------------------------------------------
int glf::fs2::Path::AppendSeparatorIfNeeded(glf::fs2::Path::Self *self)
{
  int v1;
  int result;
  uint8_t *v3;
  char v4; // di
  int v5;
  int v6;
  int v7;

  v1 = *(uint32_t *)self;
  result = *(uint32_t *)(*(uint32_t *)self - 12);
  if ( result != 0 )
  {
    if ( *(int *)(v1 - 4) >= 0 )
    {
      sub_19397C0(self);
      v1 = *(uint32_t *)self;
      result = *(uint32_t *)(*(uint32_t *)self - 12);
    }
    v3 = (uint8_t *)(v1 + result);
    v4 = *(uint8_t *)(v1 + result - 1);
    if ( v4 == 58 )
      return 0;
    if ( *(int *)(v1 - 4) >= 0 )
    {
      sub_19397C0(self);
      v1 = *(uint32_t *)self;
      result = *(uint32_t *)(*(uint32_t *)self - 12);
      v3 = (uint8_t *)(*(uint32_t *)self + result);
      v4 = *(v3 - 1);
    }
    if ( v4 == 47 )
    {
      return 0;
    }
    else
    {
      v5 = result + 1;
      if ( (unsigned int)(result + 1) > *(uint32_t *)(v1 - 8) || *(int *)(v1 - 4) > 0 )
      {
        v7 = result;
        sub_1939B80(self, result + 1);
        result = v7;
        v3 = (uint8_t *)(*(uint32_t *)(*(uint32_t *)self - 12) + *(uint32_t *)self);
      }
      *v3 = 47;
      v6 = *(uint32_t *)self;
      if ( (uint32_t *)(*(uint32_t *)self - 12) != dword_213B808 )
      {
        *(uint32_t *)(v6 - 4) = 0;
        *(uint32_t *)(v6 - 12) = v5;
        *(uint8_t *)(v6 + v5) = 0;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::opAssign  (binary VA: 0xcb0980)
// Original: glf::fs2::Path::operator=
// ----------------------------------------------------------------------------
glf::fs2::Path::Self * glf::fs2::Path::opAssign(glf::fs2::Path::Self *self, const glf::fs2::Path::Self *a2)
{
  g4_std::string::assign_str(self, a2);
  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::Clear  (binary VA: 0xcb09d0)
// Original: glf::fs2::Path::Clear
// ----------------------------------------------------------------------------
int glf::fs2::Path::Clear(glf::fs2::Path::Self *self)
{
  int result;

  result = (int)(uintptr_t)(g4_std::string::clear(self, 0, *(uint32_t *)(*(uint32_t *)self - 12), 0));
  *((uint32_t *)self + 1) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::RemoveFilename  (binary VA: 0xcb0a20)
// Original: glf::fs2::Path::RemoveFilename
// ----------------------------------------------------------------------------
glf::fs2::Path::Self * glf::fs2::Path::RemoveFilename(glf::fs2::Path::Self *self)
{
  unsigned int v1;
  unsigned int v2;

  v1 = glf::fs2::Path::m_parent_path_end(self);
  v2 = *(uint32_t *)(*(uint32_t *)self - 12);
  if ( v1 > v2 )
    sub_1900210("basic_string::erase");
  g4_std::string::clear(self, v1, v2 - v1, 0);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::Swap  (binary VA: 0xcb0a90)
// Original: glf::fs2::Path::Swap
// ----------------------------------------------------------------------------
int glf::fs2::Path::Swap(glf::fs2::Path::Self *self, glf::fs2::Path::Self *a2)
{
  return sub_1937C90(self, a2);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::c_str  (binary VA: 0xcb0ac0)
// Original: glf::fs2::Path::c_str
// ----------------------------------------------------------------------------
int glf::fs2::Path::c_str(glf::fs2::Path::Self *self)
{
  return *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::String  (binary VA: 0xcb0ad0)
// Original: glf::fs2::Path::String
// ----------------------------------------------------------------------------
glf::fs2::Path::Self * glf::fs2::Path::String(glf::fs2::Path::Self *self)
{
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::Empty  (binary VA: 0xcb0ae0)
// Original: glf::fs2::Path::Empty
// ----------------------------------------------------------------------------
bool glf::fs2::Path::Empty(glf::fs2::Path::Self *self)
{
  return *(uint32_t *)(*(uint32_t *)self - 12) == 0;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::HasFilename  (binary VA: 0xcb0af0)
// Original: glf::fs2::Path::HasFilename
// ----------------------------------------------------------------------------
bool glf::fs2::Path::HasFilename(glf::fs2::Path::Self *self)
{
  return *(uint32_t *)(*(uint32_t *)self - 12) != 0;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::begin  (binary VA: 0xcb0b00)
// Original: glf::fs2::Path::begin
// ----------------------------------------------------------------------------
glf::fs2::Path::Self * glf::fs2::Path::begin(glf::fs2::Path::Self *self, uint32_t *a2)
{
  int v2;
  unsigned int v3;
  unsigned int v4;
  uint8_t *s1;
  size_t n;
  int v8;

  v2 = 0;
  v3 = 0;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&unk_1B15112);
  *((uint32_t *)self + 3) = 0;
  v4 = *(uint32_t *)(*a2 - 12);
  *((uint32_t *)self + 1) = 0;
  s1 = (uint8_t *)*a2;
  if ( *(uint32_t *)(*a2 - 12) == 0 )
    goto LABEL_15;
  if ( v4 <= 1 )
  {
    v3 = 0;
    if ( *s1 != 47 )
      goto LABEL_6;
    goto LABEL_14;
  }
  if ( *s1 == 47 )
  {
    LOWORD(v3) = 1;
    if ( s1[1] != 47 )
      goto LABEL_15;
    if ( v4 == 2 )
    {
      *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(s1);
      *((uint32_t *)self + 3) = 2;
      v3 = 2;
      n = 1;
      goto LABEL_9;
    }
    LOWORD(v3) = 2;
    if ( s1[2] != 47 )
      goto LABEL_6;
    v8 = 1;
    do
    {
      *((uint32_t *)self + 1) = v8;
      v2 = v8++;
      s1 = (uint8_t *)*a2;
    }
    while ( v8 != v4 && s1[v2 + 1] == 47 );
LABEL_14:
    v3 = 1;
LABEL_15:
    s1 += v2;
    *((uint32_t *)self + 3) = v3;
    *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(s1);
LABEL_8:
    n = v3;
    goto LABEL_9;
  }
  do
  {
    if ( s1[v3] == 47 )
      break;
    ++v3;
LABEL_6:
    ;
  }
  while ( v4 > v3 );
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(s1);
  *((uint32_t *)self + 3) = v3;
  n = 1;
  if ( v3 <= 1 )
    goto LABEL_8;
LABEL_9:
  if ( memcmp(s1, "/", n) == 0 && v3 == 1 )
  {
    *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)("/");
    *((uint32_t *)self + 3) = 1;
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::end  (binary VA: 0xcb0c40)
// Original: glf::fs2::Path::end
// ----------------------------------------------------------------------------
glf::fs2::Path::Self * glf::fs2::Path::end(glf::fs2::Path::Self *self, uint32_t *a2)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&unk_1B15112);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 1) = *(uint32_t *)(*a2 - 12);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::iterator::increment  (binary VA: 0xcb0c80)
// Original: glf::fs2::Path::iterator::increment
// ----------------------------------------------------------------------------
const char * glf::fs2::Path::iterator::increment(glf::fs2::Path::iterator::Self *self)
{
  const char *result;
  unsigned int v2;
  unsigned int v3;
  bool v4;
  uint8_t *v5;
  int v6;
  int v7;
  int v8;
  unsigned int v9;
  uint8_t *v10;
  unsigned int v11;
  int v12;

  result = *(const char **)self;
  v2 = *((uint32_t *)self + 3);
  v3 = v2 + *((uint32_t *)self + 1);
  *((uint32_t *)self + 1) = v3;
  if ( v3 == *(uint32_t *)(*(uint32_t *)result - 12) )
  {
    *((uint32_t *)self + 3) = 0;
    *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&unk_1B15112);
    return (const char *)&unk_1B15112;
  }
  v4 = false;
  if ( v2 > 2 )
  {
    v5 = *((uint8_t **)self + 2);
    if ( *v5 == 47 && v5[1] == 47 )
      v4 = v5[2] != 47;
  }
  if ( *(uint8_t *)(*(uint32_t *)result + v3) != 47 )
    goto LABEL_5;
  if ( v4 )
  {
    *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)("/");
    *((uint32_t *)self + 3) = 1;
    return result;
  }
  while ( 1 )
  {
    v9 = v3 + 1;
    *((uint32_t *)self + 1) = v3 + 1;
    v10 = *(uint8_t **)result;
    if ( v3 + 1 == *(uint32_t *)(*(uint32_t *)result - 12) )
      break;
    if ( v10[v3 + 1] != 47 )
      goto LABEL_11;
    ++v3;
  }
  if ( v3 == 0 )
  {
LABEL_11:
    v3 = v9;
    goto LABEL_5;
  }
  if ( v10[v9 - 2] == 47 )
  {
    do
    {
      v11 = v3--;
      if ( v3 == 0 )
        goto LABEL_11;
    }
    while ( v10[v11 - 2] == 47 );
  }
  if ( v3 <= 2
    || *v10 != 47
    || v10[1] != 47
    || (v12 = sub_1938090((int)(uintptr_t)(result), "/", 2, 1u), v9 = *((uint32_t *)self + 1), v3 != v12) )
  {
    *((uint32_t *)self + 1) = v9 - 1;
    *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(".");
    *((uint32_t *)self + 3) = 1;
    return ".";
  }
  result = *(const char **)self;
  v3 = *((uint32_t *)self + 1);
LABEL_5:
  v6 = sub_1938090((int)(uintptr_t)(result), "/", v3, 1u);
  v7 = **(uint32_t **)self;
  if ( v6 == -1 )
    v6 = *(uint32_t *)(v7 - 12);
  v8 = *((uint32_t *)self + 1);
  result = (const char *)(v6 - v8);
  *((uint32_t *)self + 2) = v8 + v7;
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::Compare  (binary VA: 0xcb0e30)
// Original: glf::fs2::Path::Compare
// ----------------------------------------------------------------------------
int glf::fs2::Path::Compare(glf::fs2::Path::Self *self, const glf::fs2::Path::Self *a2)
{
  const glf::fs2::Path::Self *v2;
  glf::fs2::Path::Self *v3;
  int v4;
  int v5;
  unsigned int v6;
  char *v7;
  char *v8;
  unsigned int v9;
  unsigned int v10;
  int result;
  typedef signed int _g4_t_v12;
  typedef signed int _g4_t_v13;
  typedef unsigned int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef char *_g4_t_v17;
  typedef unsigned int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef char *_g4_t_v23;
  typedef unsigned int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef glf::fs2::Path::Self **_g4_t_v27;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v14)) > _g4_s2 ? (20u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v15)) > _g4_s3 ? (24u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v16)) > _g4_s4 ? (28u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v17)) > _g4_s5 ? (32u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v18)) > _g4_s6 ? (36u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v19)) > _g4_s7 ? (40u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v20)) > _g4_s8 ? (44u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v21)) > _g4_s9 ? (56u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v22)) > _g4_s10 ? (60u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v23)) > _g4_s11 ? (64u + sizeof(_g4_t_v23)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v24)) > _g4_s12 ? (68u + sizeof(_g4_t_v24)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v25)) > _g4_s13 ? (72u + sizeof(_g4_t_v25)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v26)) > _g4_s14 ? (76u + sizeof(_g4_t_v26)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v27)) > _g4_s15 ? (96u + sizeof(_g4_t_v27)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 56u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 60u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 64u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 68u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 72u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 76u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 96u);

  v27 = &self;
  v2 = a2;
  v3 = self;
  glf::fs2::Path::end((glf::fs2::Path::Self *)&v25, (uint32_t *)(a2));
  glf::fs2::Path::begin((glf::fs2::Path::Self *)&v21, (uint32_t *)(v2));
  glf::fs2::Path::end((glf::fs2::Path::Self *)&v19, (uint32_t *)(v3));
  glf::fs2::Path::begin((glf::fs2::Path::Self *)&v15, (uint32_t *)(v3));
  v4 = v15;
  v5 = v19;
  if ( v15 == v19 )
    goto LABEL_22;
  while ( v21 != v25 || v22 != v26 )
  {
    v6 = v24;
    v7 = v23;
    if ( v18 <= v24 )
      v6 = v18;
    v8 = v17;
    v14 = v6;
    if ( v6 != 0 )
    {
      do
      {
        v9 = *v8;
        v13 = v9;
        if ( v9 <= 0xFF )
          v13 = *(int16_t *)(toupper_tab_ + 2 * v9 + 2);
        v10 = *v7;
        v12 = v10;
        if ( v10 <= 0xFF )
          v12 = *(int16_t *)(toupper_tab_ + 2 * v10 + 2);
        if ( v13 < v12 )
          return -1;
        if ( v9 <= 0xFF )
          v9 = *(int16_t *)(toupper_tab_ + 2 * v9 + 2);
        if ( v10 <= 0xFF )
          v10 = *(int16_t *)(toupper_tab_ + 2 * v10 + 2);
        if ( (int)v9 > (int)v10 )
          return 1;
        ++v8;
        ++v7;
      }
      while ( --v14 != 0 );
    }
    if ( v24 > v18 )
      return -1;
    if ( v24 < v18 )
      return 1;
    glf::fs2::Path::iterator::increment((glf::fs2::Path::iterator::Self *)&v15);
    glf::fs2::Path::iterator::increment((glf::fs2::Path::iterator::Self *)&v21);
    v4 = v15;
    v5 = v19;
    if ( v15 == v19 )
    {
LABEL_22:
      if ( v16 == v20 )
      {
        if ( v21 == v25 )
          goto LABEL_24;
        return -1;
      }
    }
  }
  if ( v4 != v5 )
    return 1;
  if ( v20 != v16 )
    return 2 * (v20 != v16) - 1;
LABEL_24:
  result = 0;
  if ( v22 != v26 )
    return -1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::iterator::decrement  (binary VA: 0xcb1020)
// Original: glf::fs2::Path::iterator::decrement
// ----------------------------------------------------------------------------
const char * glf::fs2::Path::iterator::decrement(glf::fs2::Path::iterator::Self *self)
{
  uint32_t *v1;
  unsigned int v2;
  uint8_t *v3;
  int j;
  uint8_t *v5;
  unsigned int v6;
  uint8_t *v7;
  const char *result;
  int v9;
  uint32_t *v10;
  unsigned int v11;
  const void *s1;
  uint8_t *v13;
  unsigned int i;
  int v15;
  uint8_t **v16;
  unsigned int v17;
  uint32_t *v18;

  v1 = *(uint32_t **)self;
  v2 = *((uint32_t *)self + 1);
  v18 = *(uint32_t **)self;
  v3 = **(uint8_t ***)self;
  if ( v2 == *((uint32_t *)v3 - 3) && v2 > 1 )
  {
    v15 = v2 - 1;
    j = v2 - 1;
    if ( v3[v2 - 1] == 47 )
    {
      if ( v3[v2 - 2] == 47 )
      {
        for ( i = v2 - 1; ; --i )
        {
          v17 = i - 1;
          if ( i == 1 )
            break;
          if ( v3[i - 2] != 47 )
            goto LABEL_17;
        }
      }
      else
      {
        v17 = v2 - 1;
LABEL_17:
        if ( v17 <= 2 || *v3 != 47 || v3[1] != 47 )
          goto LABEL_18;
        if ( v17 != sub_1938090((int)(uintptr_t)(v1), "/", 2, 1u) )
        {
          v15 = *((uint32_t *)self + 1) - 1;
LABEL_18:
          *((uint32_t *)self + 3) = 1;
          *((uint32_t *)self + 1) = v15;
          *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(".");
          return ".";
        }
        v1 = *(uint32_t **)self;
        v18 = *(uint32_t **)self;
      }
    }
  }
  else
  {
    j = v2 - 1;
  }
  if ( v2 != 2 )
  {
    if ( v2 > 3 )
    {
      v5 = (uint8_t *)*v1;
      v6 = 0xFFFFFFFF;
      if ( *(uint8_t *)*v1 == 47 )
      {
        if ( v5[1] != 47 || v5[2] == 47 )
        {
          v6 = 0;
        }
        else
        {
          v6 = sub_1938090((int)(uintptr_t)(v1), "/", 2, 1u);
          if ( v2 <= v6 )
            v6 = 0xFFFFFFFF;
          v1 = *(uint32_t **)self;
          v18 = *(uint32_t **)self;
        }
      }
      goto LABEL_6;
    }
    if ( v2 == 0 )
      goto LABEL_24;
    v13 = (uint8_t *)*v1;
LABEL_35:
    v6 = (*v13 == 47) - 1;
    goto LABEL_6;
  }
  v13 = (uint8_t *)*v1;
  if ( *(uint8_t *)*v1 != 47 )
    goto LABEL_35;
  v6 = 0xFFFFFFFF;
  if ( v13[1] != 47 )
    v6 = 0;
LABEL_6:
  if ( v6 != j && *(uint8_t *)(*v1 + j) == 47 )
  {
    for ( j = v2 - 2; ; --j )
    {
      v2 = j + 1;
      if ( j == -1 )
        break;
      if ( j == v6 || *(uint8_t *)(*v1 + j) != 47 )
        goto LABEL_8;
    }
LABEL_24:
    if ( v2 == 0 )
      goto LABEL_25;
    goto LABEL_10;
  }
LABEL_8:
  if ( v2 != 2 )
    goto LABEL_24;
  v7 = (uint8_t *)*v1;
  if ( *(uint8_t *)*v1 != 47 )
  {
LABEL_10:
    v7 = (uint8_t *)*v1;
  }
  else if ( v7[1] == 47 )
  {
    j = 0;
    v10 = v18;
LABEL_30:
    v11 = v2 - j;
    *((uint32_t *)self + 1) = j;
    s1 = (const void *)(*v10 + j);
    *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(s1);
    *((uint32_t *)self + 3) = v11;
    result = (const char *)memcmp(s1, "/", v11 != 0);
    if ( result == nullptr && v11 == 1 )
    {
      *((uint32_t *)self + 3) = 1;
      *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)("/");
    }
    return result;
  }
  if ( v7[j] == 47 )
  {
LABEL_29:
    v10 = v1;
    goto LABEL_30;
  }
LABEL_25:
  v16 = (uint8_t **)v1;
  v9 = sub_1938190((int)(uintptr_t)(v1), "/", j, 1u);
  j = 0;
  if ( v9 != -1 )
  {
    if ( v9 != 1 || (j = 0, **v16 != 47) )
      j = v9 + 1;
  }
  v1 = *(uint32_t **)self;
  goto LABEL_29;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::fix_slash  (binary VA: 0xcb1350)
// Original: glf::fs2::fix_slash
// ----------------------------------------------------------------------------
glf::fs2::Self * glf::fs2::fix_slash(glf::fs2::Self *self)
{
  glf::fs2::Self *result;

  result = self;
  if ( self == (glf::fs2::Self *)&dword_5C )
    return (glf::fs2::Self *)(&word_2E + 1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::fix_backslash  (binary VA: 0xcb1360)
// Original: glf::fs2::fix_backslash
// ----------------------------------------------------------------------------
glf::fs2::Self * glf::fs2::fix_backslash(glf::fs2::Self *self)
{
  glf::fs2::Self *result;

  result = self;
  if ( self == (glf::fs2::Self *)((char *)&word_2E + 1) )
    return (glf::fs2::Self *)&dword_5C;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::BackslashesToSlashes  (binary VA: 0xcb1370)
// Original: glf::fs2::Path::BackslashesToSlashes
// ----------------------------------------------------------------------------
glf::fs2::Path::Self * glf::fs2::Path::BackslashesToSlashes(glf::fs2::Path::Self *self)
{
  *((uint32_t *)self + 1) |= 1u;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::BackslashesToSlashes  (binary VA: 0xcb1380)
// Original: glf::fs2::Path::BackslashesToSlashes
// ----------------------------------------------------------------------------
void glf::fs2::Path::BackslashesToSlashes()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::SlashesToBackslashes  (binary VA: 0xcb1390)
// Original: glf::fs2::Path::SlashesToBackslashes
// ----------------------------------------------------------------------------
glf::fs2::Path::Self * glf::fs2::Path::SlashesToBackslashes(glf::fs2::Path::Self *self)
{
  *((uint32_t *)self + 1) &= ~1u;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::SlashesToBackslashes  (binary VA: 0xcb13a0)
// Original: glf::fs2::Path::SlashesToBackslashes
// ----------------------------------------------------------------------------
void glf::fs2::Path::SlashesToBackslashes()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::TrimTrailingSlashes  (binary VA: 0xcb13b0)
// Original: glf::fs2::Path::TrimTrailingSlashes
// ----------------------------------------------------------------------------
int glf::fs2::Path::TrimTrailingSlashes(glf::fs2::Path::Self *self)
{
  int result;
  int v2;
  unsigned int v3;
  unsigned int v4;

  result = *(uint32_t *)self;
  v2 = *(uint32_t *)self;
  v3 = *(uint32_t *)(*(uint32_t *)self - 12);
  if ( v3 > 1 )
  {
    while ( 1 )
    {
      v4 = v3 - 1;
      if ( *(int *)(v2 - 4) >= 0 )
      {
        sub_19397C0(self);
        result = *(uint32_t *)self;
      }
      if ( *(uint8_t *)(result + v4) != 47 )
        break;
      result = (int)(uintptr_t)(sub_1939D80((int)(uintptr_t)(self), *(uint32_t *)(result - 12) - 1, 0));
      v2 = *(uint32_t *)self;
      v3 = *(uint32_t *)(*(uint32_t *)self - 12);
      if ( v3 <= 1 )
        break;
      result = *(uint32_t *)self;
    }
  }
  *((uint32_t *)self + 1) |= 2u;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::Canonical  (binary VA: 0xcb1420)
// Original: glf::fs2::Path::Canonical
// ----------------------------------------------------------------------------
glf::fs2::Path::Self * glf::fs2::Path::Canonical(glf::fs2::Path::Self *self, const glf::fs2::Path::Self *a2, const glf::fs2::Path::Self *a3)
{
  glf::fs2::FileSystem::MakeCanonical((glf::fs2::FileSystem::Self *)(self), a2, a3);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::MakeCanonical  (binary VA: 0xcb1470)
// Original: glf::fs2::Path::MakeCanonical
// ----------------------------------------------------------------------------
glf::fs2::Path::Self * glf::fs2::Path::MakeCanonical(glf::fs2::Path::Self *self, const glf::fs2::Path::Self *a2)
{
  uint8_t v3[8];

  glf::fs2::FileSystem::MakeCanonical((glf::fs2::FileSystem::Self *)v3, self, a2);
  glf::fs2::Path::opAssign(self, (const glf::fs2::Path::Self *)v3);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v3);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::MyFind  (binary VA: 0xcb14e0)
// Original: glf::fs2::MyFind
// ----------------------------------------------------------------------------
int glf::fs2::MyFind(int a1, int a2, char *s)
{
  size_t v3;
  int v4;

  v3 = strlen(s);
  v4 = g4_std_compat::string_find(a1, s, a2, v3);
  if ( v4 != -1 )
    v4 += strlen(s);
  return v4;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::SetAppFolderName  (binary VA: 0xcb1550)
// Original: glf::fs2::SetAppFolderName
// ----------------------------------------------------------------------------
int glf::fs2::SetAppFolderName(int a1)
{
  char *v1;
  int result;
  char *v3;
  int v4;
  char *v5;

  g4_std::string::assign_str(&glf::fs2::gLowerAppFolderName, a1);
  g4_std::string::assign_str(&glf::fs2::gAppFolderName, a1);
  v1 = (char *)glf::fs2::gLowerAppFolderName;
  result = *(uint32_t *)(glf::fs2::gLowerAppFolderName - 4);
  if ( result < 0
    || (result = (int)(uintptr_t)(sub_19397C0(&glf::fs2::gLowerAppFolderName)),
        v1 = (char *)glf::fs2::gLowerAppFolderName,
        *(int *)(glf::fs2::gLowerAppFolderName - 4) < 0) )
  {
    v3 = v1;
    v4 = (int)(uintptr_t)(&v1[*((uint32_t *)v1 - 3)]);
  }
  else
  {
    result = (int)(uintptr_t)(sub_19397C0(&glf::fs2::gLowerAppFolderName));
    v3 = (char *)glf::fs2::gLowerAppFolderName;
    v4 = glf::fs2::gLowerAppFolderName + *(uint32_t *)(glf::fs2::gLowerAppFolderName - 12);
    if ( *(int *)(glf::fs2::gLowerAppFolderName - 4) >= 0 )
    {
      result = (int)(uintptr_t)(sub_19397C0(&glf::fs2::gLowerAppFolderName));
      v3 = (char *)glf::fs2::gLowerAppFolderName;
    }
  }
  if ( (char *)v4 != v3 )
  {
    v5 = v1;
    do
    {
      result = *v3;
      if ( (unsigned int)result <= 0xFF )
        result = *(int16_t *)(tolower_tab_ + 2 * result + 2);
      ++v3;
      *v5++ = result;
    }
    while ( v3 != (char *)v4 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::GetAppFolderName  (binary VA: 0xcb1610)
// Original: glf::fs2::GetAppFolderName
// ----------------------------------------------------------------------------
int glf::fs2::GetAppFolderName(glf::fs2::Self *self)
{
  if ( (uint8_t)(uintptr_t)(self) != 0 )
    return glf::fs2::gLowerAppFolderName;
  else
    return glf::fs2::gAppFolderName;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::Init  (binary VA: 0xcb1640)
// Original: glf::fs2::Path::Init
// ----------------------------------------------------------------------------
glf::fs2::Path::Self * glf::fs2::Path::Init(glf::fs2::Path::Self *self)
{
  return glf::fs2::Path::BackslashesToSlashes(self);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::Construct  (binary VA: 0xcb1670)
// Original: glf::fs2::Path::Path
// ----------------------------------------------------------------------------
glf::fs2::Path::Self * glf::fs2::Path::Construct(glf::fs2::Path::Self *self, const glf::fs2::Path::Self *a2)
{
  g4_std::string::construct_copy(self, a2);
  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
  return glf::fs2::Path::Init(self);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::opDivAssign  (binary VA: 0xcb16c0)
// Original: glf::fs2::Path::operator/=
// ----------------------------------------------------------------------------
glf::fs2::Path::Self * glf::fs2::Path::opDivAssign(glf::fs2::Path::Self *self, const glf::fs2::Path::Self *a2)
{
  uint8_t *v3;
  uint32_t v4[2];

  if ( !glf::fs2::Path::Empty(a2) )
  {
    if ( self == a2 )
    {
      glf::fs2::Path::Construct((glf::fs2::Path::Self *)v4, self);
      v3 = (uint8_t *)v4[0];
      if ( *(int *)(v4[0] - 4) >= 0 )
      {
        sub_19397C0(v4);
        v3 = (uint8_t *)v4[0];
      }
      if ( *v3 != 47 )
        glf::fs2::Path::AppendSeparatorIfNeeded(self);
      g4_std::string::append_str(self, v4);
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v4);
    }
    else
    {
      if ( **(uint8_t **)a2 != 47 )
        glf::fs2::Path::AppendSeparatorIfNeeded(self);
      g4_std::string::append_str(self, a2);
    }
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::Construct  (binary VA: 0xcb1780)
// Original: glf::fs2::Path::Path
// ----------------------------------------------------------------------------
glf::fs2::Path::Self * glf::fs2::Path::Construct(glf::fs2::Path::Self *a1, int a2)
{
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  sub_193A970((int)(uintptr_t)(a1), *(void **)a2, *(uint32_t *)(a2 + 4), (int)(uintptr_t)(&v3));
  *((uint32_t *)a1 + 1) = 0;
  return glf::fs2::Path::Init(a1);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::RootName  (binary VA: 0xcb17e0)
// Original: glf::fs2::Path::RootName
// ----------------------------------------------------------------------------
glf::fs2::Path::Self * glf::fs2::Path::RootName(glf::fs2::Path::Self *self, uint32_t *a2)
{
  uint32_t *v2;
  glf::fs2::Path::Self *v3;
  typedef uint8_t _g4_t_v5[4];
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef unsigned int _g4_t_v8;
  typedef glf::fs2::Path::Self **_g4_t_v9;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v6)) > _g4_s1 ? (4u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v7)) > _g4_s2 ? (8u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v8)) > _g4_s3 ? (12u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v9)) > _g4_s4 ? (24u + sizeof(_g4_t_v9)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);

  v9 = &self;
  v2 = a2;
  v3 = self;
  glf::fs2::Path::begin((glf::fs2::Path::Self *)v5, a2);
  if ( v6 != *(uint32_t *)(*v2 - 12)
    && (v8 > 1 && *(uint8_t *)v7 == 47 && *(uint8_t *)(v7 + 1) == 47 || *(uint8_t *)(v7 + v8 - 1) == 58) )
  {
    glf::fs2::Path::Construct(v3, (int)(uintptr_t)(&v7));
  }
  else
  {
    glf::fs2::Path::Construct(v3);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::HasRootName  (binary VA: 0xcb1890)
// Original: glf::fs2::Path::HasRootName
// ----------------------------------------------------------------------------
int glf::fs2::Path::HasRootName(glf::fs2::Path::Self *self)
{
  int v1;
  int v2;
  uint8_t v4[8];

  glf::fs2::Path::RootName((glf::fs2::Path::Self *)v4, self);
  LOBYTE(v1) = glf::fs2::Path::Empty((glf::fs2::Path::Self *)v4);
  v2 = v1;
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v4);
  return v2 ^ 1;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::Construct  (binary VA: 0xcb18f0)
// Original: glf::fs2::Path::Path
// ----------------------------------------------------------------------------
glf::fs2::Path::Self * glf::fs2::Path::Construct(glf::fs2::Path::Self *self, const std::vector<glf::LimitString, glf::EphemeralAllocator<glf::LimitString>> *a2, unsigned int a3)
{
  int v3;
  uint32_t *v4;
  size_t v5;
  int v6;
  int v7;
  uint32_t *v8;
  int v9;
  unsigned int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  uint8_t *v15;
  uint32_t *v17;
  int v18;
  int v19;
  uint8_t *v20;
  unsigned int v21;
  bool v22;

  v22 = false;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 1) = 3;
  v3 = *((uint32_t *)a2 + 1);
  v4 = *(uint32_t **)a2;
  if ( v3 != *(uint32_t *)a2 && v4[1] > 3u )
  {
    v20 = (uint8_t *)*v4;
    if ( *(uint8_t *)*v4 == 47 && v20[1] == 47 )
      v22 = v20[2] != 47;
  }
  v5 = 0;
  v6 = (v3 - (int)(uintptr_t)(v4)) >> 3;
  if ( v6 != 0 )
  {
    v7 = 0;
    if ( v22 )
    {
      do
      {
        v17 = &v4[2 * v7];
        if ( *(uint8_t *)*v17 == 47 )
        {
          if ( v7 == 0 )
            v5 += v17[1];
        }
        else
        {
          v5 = v17[1] + v5 - ((v7 == 0) - 1);
        }
        ++v7;
      }
      while ( v7 != v6 );
    }
    else
    {
      do
      {
        v8 = &v4[2 * v7];
        if ( *(uint8_t *)*v8 != 47 )
          v5 = v8[1] + v5 - ((v7 == 0) - 1);
        ++v7;
      }
      while ( v6 != v7 );
    }
  }
  if ( (int)dword_213B808[2] >= 0 )
    sub_19397C0(self);
  sub_1939050((int)(uintptr_t)(self), 0, 0, v5, 32);
  v9 = *(uint32_t *)a2;
  v10 = (*((uint32_t *)a2 + 1) - *(uint32_t *)a2) >> 3;
  if ( v10 > a3 )
    v10 = a3;
  v21 = v10;
  if ( v10 != 0 )
  {
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      v13 = 8 * v11;
      v14 = v9 + 8 * v11;
      v15 = *(uint8_t **)v14;
      if ( **(uint8_t **)v14 != 47 )
        break;
      if ( v11 != 0 )
        goto LABEL_16;
      if ( v22 )
      {
LABEL_15:
        sub_193A9B0((int)(uintptr_t)(self), v12, *(uint32_t *)(v14 + 4), v15, *(uint32_t *)(v14 + 4));
        v9 = *(uint32_t *)a2;
        v12 += *(uint32_t *)(*(uint32_t *)a2 + v13 + 4);
LABEL_16:
        if ( ++v11 == v21 )
          return glf::fs2::Path::Init(self);
      }
      else
      {
        v11 = 1;
        if ( v21 == 1 )
          return glf::fs2::Path::Init(self);
      }
    }
    if ( v11 != 0 )
    {
      v18 = v12 + 1;
      v19 = *(uint32_t *)self;
      if ( *(int *)(*(uint32_t *)self - 4) >= 0 )
      {
        sub_19397C0(self);
        v18 = v12 + 1;
        v19 = *(uint32_t *)self;
      }
      *(uint8_t *)(v19 + v12) = 47;
      v12 = v18;
      v14 = *(uint32_t *)a2 + v13;
      v15 = *(uint8_t **)v14;
    }
    goto LABEL_15;
  }
  return glf::fs2::Path::Init(self);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::RemovePrefix  (binary VA: 0xcb1ae0)
// Original: glf::fs2::Path::RemovePrefix
// ----------------------------------------------------------------------------
glf::fs2::Path::Self * glf::fs2::Path::RemovePrefix(glf::fs2::Path::Self *self, const glf::fs2::Path::Self *a2, glf::fs2::Path::Self *a3)
{
  const void **v3;
  const void *v4;
  size_t n;
  int v6;
  int v8;
  unsigned int v9;
  unsigned int v10;
  void *v11;
  void *v12;
  typedef const void *_g4_t_v13;
  typedef const void **_g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint32_t _g4_t_v16[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v13)) > _g4_s0 ? (8u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v14)) > _g4_s1 ? (12u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v15)) > _g4_s2 ? (24u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v16)) > _g4_s3 ? (28u + sizeof(_g4_t_v16)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);

  v14 = (const void **)glf::fs2::Path::String(a3);
  v3 = (const void **)glf::fs2::Path::String(a2);
  v4 = *v14;
  n = *((uint32_t *)*v3 - 3);
  v6 = *((uint32_t *)*v14 - 3);
  if ( n == v6 )
  {
    v13 = *v14;
    v8 = memcmp(*v3, *v14, n);
    v4 = v13;
    if ( v8 == 0 )
    {
      glf::fs2::Path::Construct(self);
      return self;
    }
  }
  if ( v6 == 0 || g4_std_compat::string_find(v3, v4, 0, v6) != 0 )
  {
    g4_std::string::construct_copy(self, v3);
    *((uint32_t *)self + 1) = 0;
    glf::fs2::Path::Init(self);
    return self;
  }
  v9 = *((uint32_t *)*v14 - 3);
  if ( *((char *)*v14 + v9 - 1) != 47 )
  {
    v10 = v9 + 1;
    if ( v10 <= *((uint32_t *)*v3 - 3) )
    {
      sub_193A6F0(v16, v3, v10, -1);
      g4_std::string::construct_copy(self, v16);
      *((uint32_t *)self + 1) = 0;
      glf::fs2::Path::Init(self);
      v11 = (void *)(v16[0] - 12);
      if ( (uint32_t *)(v16[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v16[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v11);
      }
      return self;
    }
LABEL_17:
    sub_1900210("basic_string::substr");
  }
  if ( v9 > *((uint32_t *)*v3 - 3) )
    goto LABEL_17;
  sub_193A6F0(&v15, v3, *((uint32_t *)*v14 - 3), -1);
  g4_std::string::construct_copy(self, &v15);
  *((uint32_t *)self + 1) = 0;
  glf::fs2::Path::Init(self);
  v12 = (void *)(v15 - 12);
  if ( (uint32_t *)(v15 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v12);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::Filename  (binary VA: 0xcb1cd0)
// Original: glf::fs2::Path::Filename
// ----------------------------------------------------------------------------
glf::fs2::Path::Self * glf::fs2::Path::Filename(glf::fs2::Path::Self *self, uint32_t *a2)
{
  uint8_t *v2;
  int v3;
  int v4;
  int v5;
  unsigned int v6;
  typedef int _g4_t_v8;
  typedef char _g4_t_v9;
  typedef int _g4_t_v10[3];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (46u + sizeof(_g4_t_v9)) > _g4_s1 ? (46u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (47u + sizeof(_g4_t_v10)) > _g4_s2 ? (47u + sizeof(_g4_t_v10)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 46u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 47u);

  v2 = (uint8_t *)*a2;
  v3 = *(uint32_t *)(*a2 - 12);
  if ( v3 == 2 )
  {
    if ( *v2 == 47 && v2[1] == 47 )
    {
      v4 = 0;
      goto LABEL_10;
    }
  }
  else if ( v3 == 0 )
  {
    v4 = -1;
LABEL_4:
    v8 = v4;
    v4 = 0;
    v5 = sub_1938190((int)(uintptr_t)(a2), "/", v8, 1u);
    v2 = (uint8_t *)*a2;
    if ( v5 != -1 )
    {
      if ( v5 != 1 || (v4 = 0, *v2 != 47) )
        v4 = v5 + 1;
    }
    if ( *((uint32_t *)v2 - 3) == 0 )
      goto LABEL_10;
    goto LABEL_8;
  }
  v4 = v3 - 1;
  if ( v2[v3 - 1] != 47 )
    goto LABEL_4;
LABEL_8:
  if ( v4 != 0 )
  {
    v6 = v4;
    if ( v2[v4] == 47 )
    {
      while ( v2[v6 - 1] == 47 )
      {
        if ( v6 == 1 )
          goto LABEL_10;
        --v6;
      }
      if ( v6 != 0 )
      {
        if ( v6 <= 2 || *v2 != 47 || v2[1] != 47 || v6 != sub_1938090((int)(uintptr_t)(a2), "/", 2, 1u) )
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(self), ".", (int)(uintptr_t)(&v9));
          goto LABEL_11;
        }
        v2 = (uint8_t *)*a2;
      }
    }
  }
LABEL_10:
  g4_std::string::construct_from_cstr((int)(uintptr_t)(self), &v2[v4], (int)(uintptr_t)(v10));
LABEL_11:
  *((uint32_t *)self + 1) = 0;
  glf::fs2::Path::Init(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::Stem  (binary VA: 0xcb1e50)
// Original: glf::fs2::Path::Stem
// ----------------------------------------------------------------------------
glf::fs2::Path::Self * glf::fs2::Path::Stem(glf::fs2::Path::Self *self, uint32_t *a2)
{
  glf::fs2::Path::Self *v2;
  size_t v4;
  char *v5;
  void *v6[7];

  v6[6] = &self;
  v2 = self;
  glf::fs2::Path::Filename((glf::fs2::Path::Self *)v6, a2);
  if ( glf::fs2::Path::Compare((glf::fs2::Path::Self *)v6, (const glf::fs2::Path::Self *)&unk_20DF494) != 0
    && glf::fs2::Path::Compare((glf::fs2::Path::Self *)v6, (const glf::fs2::Path::Self *)&unk_20DF49C) != 0
    && (v4 = sub_1938040(v6, 46, -1)) != -1 )
  {
    v5 = (char *)v6[0];
    *((uint32_t *)v2 + 1) = 0;
    *(uint32_t *)v2 = (uint32_t)(uintptr_t)(&dword_213B814);
    if ( &v5[v4] != v5 )
      sub_193A9B0((int)(uintptr_t)(v2), 0, dword_213B808[0], v5, v4);
    glf::fs2::Path::Init(v2);
  }
  else
  {
    glf::fs2::Path::Construct(v2, (const glf::fs2::Path::Self *)v6);
  }
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v6);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::HasStem  (binary VA: 0xcb1f60)
// Original: glf::fs2::Path::HasStem
// ----------------------------------------------------------------------------
int glf::fs2::Path::HasStem(glf::fs2::Path::Self *self)
{
  int v1;
  int v2;
  uint8_t v4[8];

  glf::fs2::Path::Stem((glf::fs2::Path::Self *)v4, (uint32_t *)(self));
  LOBYTE(v1) = glf::fs2::Path::Empty((glf::fs2::Path::Self *)v4);
  v2 = v1;
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v4);
  return v2 ^ 1;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::RelativePath  (binary VA: 0xcb1fc0)
// Original: glf::fs2::Path::RelativePath
// ----------------------------------------------------------------------------
glf::fs2::Path::Self * glf::fs2::Path::RelativePath(glf::fs2::Path::Self *self, int *a2)
{
  int *v2;
  int v3;
  int i;
  typedef glf::fs2::Path::Self *_g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef uint8_t *_g4_t_v9;
  typedef glf::fs2::Path::Self **_g4_t_v10;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (19u + sizeof(_g4_t_v7)) > _g4_s1 ? (19u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v8)) > _g4_s2 ? (24u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v9)) > _g4_s3 ? (28u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v10)) > _g4_s4 ? (44u + sizeof(_g4_t_v10)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 19u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 44u);

  v10 = &self;
  v2 = a2;
  v6 = self;
  glf::fs2::Path::begin((glf::fs2::Path::Self *)((char *)&v7 + 1), (uint32_t *)(a2));
  v3 = *v2;
  for ( i = v8; v8 != *(uint32_t *)(*v2 - 12) && *v9 == 47; i = v8 )
  {
    glf::fs2::Path::iterator::increment((glf::fs2::Path::iterator::Self *)((char *)&v7 + 1));
    v3 = *v2;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v6), (char *)(v3 + i), (int)(uintptr_t)(&v7));
  *((uint32_t *)v6 + 1) = 0;
  glf::fs2::Path::Init(v6);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::IsRelative  (binary VA: 0xcb2070)
// Original: glf::fs2::Path::IsRelative
// ----------------------------------------------------------------------------
int glf::fs2::Path::IsRelative(glf::fs2::Path::Self *self)
{
  int v1;
  int v2;
  uint8_t v4[8];

  glf::fs2::Path::RelativePath((glf::fs2::Path::Self *)v4, (int *)self);
  LOBYTE(v1) = glf::fs2::Path::Empty((glf::fs2::Path::Self *)v4);
  v2 = v1;
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v4);
  return v2 ^ 1;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::HasRelativePath  (binary VA: 0xcb20d0)
// Original: glf::fs2::Path::HasRelativePath
// ----------------------------------------------------------------------------
int glf::fs2::Path::HasRelativePath(glf::fs2::Path::Self *self)
{
  int v1;
  int v2;
  uint8_t v4[8];

  glf::fs2::Path::RelativePath((glf::fs2::Path::Self *)v4, (int *)self);
  LOBYTE(v1) = glf::fs2::Path::Empty((glf::fs2::Path::Self *)v4);
  v2 = v1;
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v4);
  return v2 ^ 1;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::Extension  (binary VA: 0xcb2130)
// Original: glf::fs2::Path::Extension
// ----------------------------------------------------------------------------
glf::fs2::Path::Self * glf::fs2::Path::Extension(glf::fs2::Path::Self *self, uint32_t *a2)
{
  int v3;
  typedef int _g4_t_v4;
  typedef uint32_t _g4_t_v5[2];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (7u + sizeof(_g4_t_v4)) > _g4_s0 ? (7u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v5)) > _g4_s1 ? (8u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 7u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);

  glf::fs2::Path::Filename((glf::fs2::Path::Self *)v5, a2);
  if ( glf::fs2::Path::Compare((glf::fs2::Path::Self *)v5, (const glf::fs2::Path::Self *)&unk_20DF494) != 0
    && glf::fs2::Path::Compare((glf::fs2::Path::Self *)v5, (const glf::fs2::Path::Self *)&unk_20DF49C) != 0
    && (v3 = sub_1938040(v5, 46, -1)) != -1 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(self), (char *)(v5[0] + v3), (int)(uintptr_t)(&v4));
    *((uint32_t *)self + 1) = 0;
    glf::fs2::Path::Init(self);
  }
  else
  {
    glf::fs2::Path::Construct(self);
  }
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v5);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::HasExtension  (binary VA: 0xcb2210)
// Original: glf::fs2::Path::HasExtension
// ----------------------------------------------------------------------------
int glf::fs2::Path::HasExtension(glf::fs2::Path::Self *self)
{
  int v1;
  int v2;
  uint8_t v4[8];

  glf::fs2::Path::Extension((glf::fs2::Path::Self *)v4, (uint32_t *)(self));
  LOBYTE(v1) = glf::fs2::Path::Empty((glf::fs2::Path::Self *)v4);
  v2 = v1;
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v4);
  return v2 ^ 1;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::ReplaceExtension  (binary VA: 0xcb2270)
// Original: glf::fs2::Path::ReplaceExtension
// ----------------------------------------------------------------------------
glf::fs2::Path::Self * glf::fs2::Path::ReplaceExtension(glf::fs2::Path::Self *self, const glf::fs2::Path::Self *a2)
{
  unsigned int v2;
  unsigned int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  typedef int _g4_t_v9;
  typedef uint32_t _g4_t_v10[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v10)) > _g4_s1 ? (24u + sizeof(_g4_t_v10)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);

  v9 = *(uint32_t *)(*(uint32_t *)self - 12);
  glf::fs2::Path::Extension((glf::fs2::Path::Self *)v10, (uint32_t *)(self));
  v2 = v9 - *(uint32_t *)(v10[0] - 12);
  v3 = *(uint32_t *)(*(uint32_t *)self - 12);
  if ( v2 > v3 )
    sub_1900210("basic_string::erase");
  g4_std::string::clear(self, v9 - *(uint32_t *)(v10[0] - 12), v3 - v2, 0);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v10);
  if ( !glf::fs2::Path::Empty(a2) )
  {
    if ( **(uint8_t **)a2 != 46 )
    {
      v4 = *(uint32_t *)self;
      v5 = *(uint32_t *)(*(uint32_t *)self - 12);
      v6 = v5 + 1;
      if ( (unsigned int)(v5 + 1) > *(uint32_t *)(*(uint32_t *)self - 8) || *(int *)(v4 - 4) > 0 )
      {
        sub_1939B80(self, v5 + 1);
        v4 = *(uint32_t *)self;
        v5 = *(uint32_t *)(*(uint32_t *)self - 12);
      }
      *(uint8_t *)(v4 + v5) = 46;
      v7 = *(uint32_t *)self;
      if ( (uint32_t *)(*(uint32_t *)self - 12) != dword_213B808 )
      {
        *(uint32_t *)(v7 - 4) = 0;
        *(uint32_t *)(v7 - 12) = v6;
        *(uint8_t *)(v7 + v6) = 0;
      }
    }
    g4_std::string::append_str(self, a2);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::opDivAssign  (binary VA: 0xcb2380)
// Original: glf::fs2::Path::operator/=
// ----------------------------------------------------------------------------
glf::fs2::Path::Self * glf::fs2::Path::opDivAssign(glf::fs2::Path::Self *self, char *s)
{
  size_t v2;
  uint8_t *v4;
  typedef int _g4_t_v5;
  typedef uint32_t _g4_t_v6[2];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (7u + sizeof(_g4_t_v5)) > _g4_s0 ? (7u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v6)) > _g4_s1 ? (8u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 7u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);

  if ( *s != 0 )
  {
    if ( (unsigned int)(uintptr_t)(s) < *(uint32_t *)self || (unsigned int)(uintptr_t)(s) >= *(uint32_t *)(*(uint32_t *)self - 12) + *(uint32_t *)self )
    {
      if ( *s != 47 )
        glf::fs2::Path::AppendSeparatorIfNeeded(self);
      v2 = strlen(s);
      g4_std::string::append((int)(uintptr_t)(self), s, v2);
    }
    else
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v6), s, (int)(uintptr_t)(&v5));
      v6[1] = 0;
      glf::fs2::Path::Init((glf::fs2::Path::Self *)v6);
      v4 = (uint8_t *)v6[0];
      if ( *(int *)(v6[0] - 4) >= 0 )
      {
        sub_19397C0(v6);
        v4 = (uint8_t *)v6[0];
      }
      if ( *v4 != 47 )
        glf::fs2::Path::AppendSeparatorIfNeeded(self);
      g4_std::string::append_str(self, v6);
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v6);
    }
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::ParentPath  (binary VA: 0xcb2460)
// Original: glf::fs2::Path::ParentPath
// ----------------------------------------------------------------------------
glf::fs2::Path::Self * glf::fs2::Path::ParentPath(glf::fs2::Path::Self *self, glf::fs2::Path::Self *a2)
{
  int v2;
  uint8_t *v3;
  uint8_t *v4;

  v2 = glf::fs2::Path::m_parent_path_end(a2);
  if ( v2 == -1 )
  {
    glf::fs2::Path::Construct(self);
  }
  else
  {
    v3 = *(uint8_t **)a2;
    v4 = (uint8_t *)(*(uint32_t *)a2 + v2);
    *((uint32_t *)self + 1) = 0;
    *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
    if ( v4 != v3 )
      sub_193A9B0((int)(uintptr_t)(self), 0, dword_213B808[0], v3, v4 - v3);
    glf::fs2::Path::Init(self);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::HasParentPath  (binary VA: 0xcb2500)
// Original: glf::fs2::Path::HasParentPath
// ----------------------------------------------------------------------------
int glf::fs2::Path::HasParentPath(glf::fs2::Path::Self *self)
{
  int v1;
  int v2;
  uint8_t v4[8];

  glf::fs2::Path::ParentPath((glf::fs2::Path::Self *)v4, self);
  LOBYTE(v1) = glf::fs2::Path::Empty((glf::fs2::Path::Self *)v4);
  v2 = v1;
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v4);
  return v2 ^ 1;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::RootDirectory  (binary VA: 0xcb2560)
// Original: glf::fs2::Path::RootDirectory
// ----------------------------------------------------------------------------
glf::fs2::Path::Self * glf::fs2::Path::RootDirectory(glf::fs2::Path::Self *self, uint32_t *a2)
{
  uint8_t *v2;
  unsigned int v3;
  int v5;
  unsigned int v6;
  uint8_t *v7;
  uint8_t *v8;

  v2 = (uint8_t *)*a2;
  v3 = *(uint32_t *)(*a2 - 12);
  if ( v3 == 2 )
  {
    if ( *v2 == 47 )
    {
      if ( v2[1] == 47 )
        goto LABEL_4;
      goto LABEL_12;
    }
LABEL_7:
    if ( *v2 != 47 )
      goto LABEL_4;
LABEL_12:
    v5 = 1;
    v6 = 0;
    goto LABEL_13;
  }
  if ( v3 <= 3 )
  {
    if ( v3 == 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  if ( *v2 != 47 )
  {
LABEL_4:
    glf::fs2::Path::Construct(self);
    return self;
  }
  v6 = 0;
  v5 = 1;
  if ( v2[1] == 47 && v2[2] != 47 )
  {
    v6 = sub_1938090((int)(uintptr_t)(a2), "/", 2, 1u);
    if ( v3 <= v6 )
      goto LABEL_4;
    v5 = v6 + 1;
    v2 = (uint8_t *)*a2;
  }
LABEL_13:
  v7 = &v2[v5];
  v8 = &v2[v6];
  *((uint32_t *)self + 1) = 0;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( v7 != v8 )
    sub_193A9B0((int)(uintptr_t)(self), 0, dword_213B808[0], v8, v7 - v8);
  glf::fs2::Path::Init(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::HasRootDirectory  (binary VA: 0xcb2690)
// Original: glf::fs2::Path::HasRootDirectory
// ----------------------------------------------------------------------------
int glf::fs2::Path::HasRootDirectory(glf::fs2::Path::Self *self)
{
  int v1;
  int v2;
  uint8_t v4[8];

  glf::fs2::Path::RootDirectory((glf::fs2::Path::Self *)v4, self);
  LOBYTE(v1) = glf::fs2::Path::Empty((glf::fs2::Path::Self *)v4);
  v2 = v1;
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v4);
  return v2 ^ 1;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::MakeLower  (binary VA: 0xcb26f0)
// Original: glf::fs2::Path::MakeLower
// ----------------------------------------------------------------------------
glf::fs2::Path::Self * glf::fs2::Path::MakeLower(glf::fs2::Path::Self *self)
{
  int v1;
  int v2;
  uint8_t *v3;
  int v4;
  char *v5;
  uint8_t *v6;
  char *v7;
  unsigned int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  const char *s;
  size_t v17;
  size_t v18;
  int v19;
  int v20;
  int v21;
  char *AppFolderName;
  int v23;

  *((uint32_t *)self + 1) |= 0x10u;
  if ( (uint8_t)glf::fs2::Path::HasRootDirectory(self) == 0
    || g4_std_compat::string_find(self, "/var/mobile/Applications/", 0, 25) == -1 )
  {
    v1 = *(uint32_t *)self;
    v2 = 0;
    if ( *(int *)(*(uint32_t *)self - 4) < 0 )
    {
LABEL_25:
      v3 = (uint8_t *)(v1 + v2);
      v5 = (char *)(v1 + v2);
LABEL_26:
      v4 = *(uint32_t *)(v1 - 12) + v1;
      goto LABEL_7;
    }
  }
  else
  {
    v1 = *(uint32_t *)self;
    v2 = 61;
    if ( *(int *)(*(uint32_t *)self - 4) < 0 )
      goto LABEL_25;
  }
  sub_19397C0(self);
  v1 = *(uint32_t *)self;
  v3 = (uint8_t *)(*(uint32_t *)self + v2);
  if ( *(int *)(*(uint32_t *)self - 4) < 0 )
  {
    v5 = (char *)(*(uint32_t *)self + v2);
    goto LABEL_26;
  }
  sub_19397C0(self);
  v4 = *(uint32_t *)self + *(uint32_t *)(*(uint32_t *)self - 12);
  if ( *(int *)(*(uint32_t *)self - 4) >= 0 )
  {
    v21 = *(uint32_t *)self + *(uint32_t *)(*(uint32_t *)self - 12);
    sub_19397C0(self);
    v4 = v21;
  }
  v5 = (char *)(v2 + *(uint32_t *)self);
LABEL_7:
  if ( (char *)v4 != v5 )
  {
    v6 = v3;
    v7 = (char *)v4;
    do
    {
      v8 = *v5;
      if ( v8 <= 0xFF )
        LOWORD(v8) = *(uint16_t *)(tolower_tab_ + 2 * v8 + 2);
      ++v5;
      *v6++ = v8;
    }
    while ( v5 != v7 );
  }
  while ( 1 )
  {
    v10 = g4_std_compat::string_find(self, "/library/caches", 0, 15);
    if ( v10 == -1 )
      break;
    v9 = (int)(uintptr_t)(sub_193A9B0((int)(uintptr_t)(self), v10, 15, "/Library/Caches", 0xFu));
    g4_std::string::assign_str(self, v9);
  }
  while ( 1 )
  {
    v12 = g4_std_compat::string_find(self, "/library", 0, 8);
    if ( v12 == -1 )
      break;
    v11 = (int)(uintptr_t)(sub_193A9B0((int)(uintptr_t)(self), v12, 8, "/Library", 8u));
    g4_std::string::assign_str(self, v11);
  }
  while ( 1 )
  {
    v14 = g4_std_compat::string_find(self, "/documents", 0, 10);
    if ( v14 == -1 )
      break;
    v13 = (int)(uintptr_t)(sub_193A9B0((int)(uintptr_t)(self), v14, 10, "/Documents", 0xAu));
    g4_std::string::assign_str(self, v13);
  }
  if ( *(uint8_t *)glf::fs2::GetAppFolderName((glf::fs2::Self *)((char *)&dword_0 + 1)) == 0 )
    return self;
  AppFolderName = (char *)glf::fs2::GetAppFolderName(nullptr);
  s = (const char *)glf::fs2::GetAppFolderName((glf::fs2::Self *)((char *)&dword_0 + 1));
  v17 = strlen(s);
  v23 = v17;
  while ( 1 )
  {
    v20 = g4_std_compat::string_find(self, s, 0, v17);
    if ( v20 == -1 )
      break;
    v18 = strlen(AppFolderName);
    v19 = (int)(uintptr_t)(sub_193A9B0((int)(uintptr_t)(self), v20, v23, AppFolderName, v18));
    g4_std::string::assign_str(self, v19);
    v17 = strlen(s);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::IsAbsolute  (binary VA: 0xcb29e0)
// Original: glf::fs2::Path::IsAbsolute
// ----------------------------------------------------------------------------
int glf::fs2::Path::IsAbsolute(glf::fs2::Path::Self *self)
{
  return glf::fs2::Path::HasRootDirectory(self);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::HasRootPath  (binary VA: 0xcb2a10)
// Original: glf::fs2::Path::HasRootPath
// ----------------------------------------------------------------------------
int glf::fs2::Path::HasRootPath(glf::fs2::Path::Self *self)
{
  char HasRootDirectory;
  int v2;

  HasRootDirectory = glf::fs2::Path::HasRootDirectory(self);
  v2 = 1;
  if ( HasRootDirectory == 0 )
    return glf::fs2::Path::HasRootName(self);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Path::RootPath  (binary VA: 0xcb2a60)
// Original: glf::fs2::Path::RootPath
// ----------------------------------------------------------------------------
glf::fs2::Path::Self * glf::fs2::Path::RootPath(glf::fs2::Path::Self *self, uint32_t *a2)
{
  char *s;
  size_t v3;
  typedef bool _g4_t_v5;
  typedef uint8_t _g4_t_v6[8];
  typedef uint8_t _g4_t_v7[20];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v6)) > _g4_s1 ? (16u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v7)) > _g4_s2 ? (24u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);

  glf::fs2::Path::RootName(self, a2);
  glf::fs2::Path::RootDirectory((glf::fs2::Path::Self *)v6, a2);
  v5 = glf::fs2::Path::Empty((glf::fs2::Path::Self *)v6);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v6);
  if ( !v5 )
  {
    glf::fs2::Path::RootDirectory((glf::fs2::Path::Self *)v7, a2);
    s = (char *)glf::fs2::Path::c_str((glf::fs2::Path::Self *)v7);
    v3 = strlen(s);
    g4_std::string::append((int)(uintptr_t)(self), s, v3);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v7);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Dir::Entry  (binary VA: 0xcc9690)
// Original: glf::fs2::Dir::Entry
// ----------------------------------------------------------------------------
char * glf::fs2::Dir::Entry(glf::fs2::Dir::Self *self)
{
  return (char *)self + 28;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Dir::GetRoot  (binary VA: 0xcc96a0)
// Original: glf::fs2::Dir::GetRoot
// ----------------------------------------------------------------------------
char * glf::fs2::Dir::GetRoot(glf::fs2::Dir::Self *self)
{
  return (char *)self + 12;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Dir::GetFs  (binary VA: 0xcc96b0)
// Original: glf::fs2::Dir::GetFs
// ----------------------------------------------------------------------------
int glf::fs2::Dir::GetFs(glf::fs2::Dir::Self *self)
{
  return *((uint32_t *)self + 2);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::RecursiveDir::Entry  (binary VA: 0xcc96c0)
// Original: glf::fs2::RecursiveDir::Entry
// ----------------------------------------------------------------------------
int glf::fs2::RecursiveDir::Entry(glf::fs2::RecursiveDir::Self *self)
{
  return (*(int (**)(uint32_t))(**(uint32_t **)(*((uint32_t *)self + 279) - 4) + 20))(*(uint32_t *)(*((uint32_t *)self + 279)
                                                                                                  - 4));
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::RecursiveDir::IsValid  (binary VA: 0xcc96e0)
// Original: glf::fs2::RecursiveDir::IsValid
// ----------------------------------------------------------------------------
int glf::fs2::RecursiveDir::IsValid(glf::fs2::RecursiveDir::Self *self)
{
  int result;
  int v2;

  result = 0;
  v2 = *((uint32_t *)self + 279);
  if ( v2 != *((uint32_t *)self + 278) )
    return (*(int (**)(uint32_t))(**(uint32_t **)(v2 - 4) + 24))(*(uint32_t *)(v2 - 4));
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::RecursiveDir::FillData  (binary VA: 0xcc9710)
// Original: glf::fs2::RecursiveDir::FillData
// ----------------------------------------------------------------------------
int glf::fs2::RecursiveDir::FillData(glf::fs2::RecursiveDir::Self *self)
{
  return (*(int (**)(uint32_t))(**(uint32_t **)(*((uint32_t *)self + 279) - 4) + 40))(*(uint32_t *)(*((uint32_t *)self + 279)
                                                                                                  - 4));
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::RecursiveDir::GetRoot  (binary VA: 0xcc9730)
// Original: glf::fs2::RecursiveDir::GetRoot
// ----------------------------------------------------------------------------
int glf::fs2::RecursiveDir::GetRoot(glf::fs2::RecursiveDir::Self *self)
{
  return (*(int (**)(uint32_t))(**(uint32_t **)(*((uint32_t *)self + 279) - 4) + 28))(*(uint32_t *)(*((uint32_t *)self + 279)
                                                                                                  - 4));
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::RecursiveDir::GetFs  (binary VA: 0xcc9750)
// Original: glf::fs2::RecursiveDir::GetFs
// ----------------------------------------------------------------------------
int glf::fs2::RecursiveDir::GetFs(glf::fs2::RecursiveDir::Self *self)
{
  return (*(int (**)(uint32_t))(**(uint32_t **)(*((uint32_t *)self + 279) - 4) + 32))(*(uint32_t *)(*((uint32_t *)self + 279)
                                                                                                  - 4));
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::DirectoryIndexed::FindNext  (binary VA: 0xcc9770)
// Original: glf::fs2::DirectoryIndexed::FindNext
// ----------------------------------------------------------------------------
glf::fs2::DirectoryIndexed::Self * glf::fs2::DirectoryIndexed::FindNext(glf::fs2::DirectoryIndexed::Self *self)
{
  ++*((uint32_t *)self + 279);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::DirectoryIndexed::IsValid  (binary VA: 0xcc9780)
// Original: glf::fs2::DirectoryIndexed::IsValid
// ----------------------------------------------------------------------------
bool glf::fs2::DirectoryIndexed::IsValid(glf::fs2::DirectoryIndexed::Self *self)
{
  return *((uint32_t *)self + 279) < *(uint32_t *)(*((uint32_t *)self + 282) + 4)
                                 + (unsigned int)**((uint16_t **)self + 282);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::DirWithSearchPaths::IsValid  (binary VA: 0xcc97a0)
// Original: glf::fs2::DirWithSearchPaths::IsValid
// ----------------------------------------------------------------------------
int glf::fs2::DirWithSearchPaths::IsValid(glf::fs2::DirWithSearchPaths::Self *self)
{
  int v1;
  int result;

  v1 = *((uint32_t *)self + 278);
  result = 0;
  if ( v1 != 0 )
    return (*(int (**)(uint32_t))(*(uint32_t *)v1 + 24))(*((uint32_t *)self + 278));
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::DirWithSearchPaths::FillData  (binary VA: 0xcc97d0)
// Original: glf::fs2::DirWithSearchPaths::FillData
// ----------------------------------------------------------------------------
int glf::fs2::DirWithSearchPaths::FillData(glf::fs2::DirWithSearchPaths::Self *self)
{
  return (*(int (**)(uint32_t))(**((uint32_t **)self + 278) + 40))(*((uint32_t *)self + 278));
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::DirWithSearchPaths::GetRoot  (binary VA: 0xcc97f0)
// Original: glf::fs2::DirWithSearchPaths::GetRoot
// ----------------------------------------------------------------------------
int glf::fs2::DirWithSearchPaths::GetRoot(glf::fs2::DirWithSearchPaths::Self *self)
{
  return (*(int (**)(uint32_t))(**((uint32_t **)self + 278) + 28))(*((uint32_t *)self + 278));
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::DirWithSearchPaths::GetFs  (binary VA: 0xcc9810)
// Original: glf::fs2::DirWithSearchPaths::GetFs
// ----------------------------------------------------------------------------
int glf::fs2::DirWithSearchPaths::GetFs(glf::fs2::DirWithSearchPaths::Self *self)
{
  return *(uint32_t *)(*((uint32_t *)self + 279) + 16);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Dir::Destroy  (binary VA: 0xcc9820)
// Original: glf::fs2::Dir::~Dir
// ----------------------------------------------------------------------------
void glf::fs2::Dir::Destroy(glf::fs2::Dir::Self *self)
{
  volatile int32_t *v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206E728);
  glf::fs2::Path::Destroy((glf::fs2::Dir::Self *)((char *)self + 1104));
  v1 = *((volatile int32_t **)self + 268);
  if ( v1 != nullptr )
  {
    if ( __sync_fetch_and_add(v1 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v1, 8);
      G4_VCALL<void>(v1, 16);
    }
    else
    {
      v2 = *((uint32_t *)v1 + 1);
      _mm_mfence();
      if ( v2 == 1 )
        G4_VCALL<void>(v1, 12);
    }
  }
  glf::fs2::Path::Destroy((glf::fs2::Dir::Self *)((char *)self + 12));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D470);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Dir::Destroy_eacc98d0  (binary VA: 0xcc98d0)
// Original: glf::fs2::Dir::~Dir
// ----------------------------------------------------------------------------
void glf::fs2::Dir::Destroy_eacc98d0(glf::fs2::Dir::Self *self)
{
  glf::fs2::Dir::Destroy(self);
  glf::MemObject::opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::DirWithSearchPaths::Destroy  (binary VA: 0xcc9910)
// Original: glf::fs2::DirWithSearchPaths::~DirWithSearchPaths
// ----------------------------------------------------------------------------
void glf::fs2::DirWithSearchPaths::Destroy(glf::fs2::DirWithSearchPaths::Self *self)
{
  glf::fs2::DirWithSearchPaths::Self **v1;
  int v2;
  glf::fs2::DirWithSearchPaths::Self *v3;
  volatile int32_t *v4;
  volatile int32_t *v5;
  int v6;

  v1 = *((glf::fs2::DirWithSearchPaths::Self ***)self + 279);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206E7E8);
  if ( v1 != (glf::fs2::DirWithSearchPaths::Self **)((char *)self + 1116) )
  {
    while ( 1 )
    {
      v3 = *v1;
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)(v1 + 5));
      v4 = (volatile int32_t *)v1[4];
      if ( v4 != nullptr )
      {
        if ( __sync_fetch_and_add(v4 + 1, 0xFFFFFFFF) == 1 )
        {
          G4_VCALL<void>(v4, 8);
          G4_VCALL<void>(v4, 16);
        }
        else
        {
          v2 = *((uint32_t *)v4 + 1);
          _mm_mfence();
          if ( v2 == 1 )
            G4_VCALL<void>(v4, 12);
        }
      }
      glf::fs2::Path::Destroy((glf::fs2::Path::Self *)(v1 + 2));
      glf::Free((glf::Self *)v1);
      if ( v3 == (glf::fs2::DirWithSearchPaths::Self *)((char *)self + 1116) )
        break;
      v1 = (glf::fs2::DirWithSearchPaths::Self **)v3;
    }
  }
  v5 = *((volatile int32_t **)self + 278);
  if ( v5 != nullptr )
  {
    if ( __sync_fetch_and_add(v5 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v5, 8);
      G4_VCALL<void>(v5, 16);
    }
    else
    {
      v6 = *((uint32_t *)v5 + 1);
      _mm_mfence();
      if ( v6 == 1 )
        G4_VCALL<void>(v5, 12);
    }
  }
  glf::fs2::Dir::Destroy((glf::fs2::Dir::Self *)(self));
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::DirWithSearchPaths::Destroy_eacc9a20  (binary VA: 0xcc9a20)
// Original: glf::fs2::DirWithSearchPaths::~DirWithSearchPaths
// ----------------------------------------------------------------------------
void glf::fs2::DirWithSearchPaths::Destroy_eacc9a20(glf::fs2::DirWithSearchPaths::Self *self)
{
  glf::fs2::DirWithSearchPaths::Destroy(self);
  glf::MemObject::opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::RecursiveDir::Destroy  (binary VA: 0xcc9a60)
// Original: glf::fs2::RecursiveDir::~RecursiveDir
// ----------------------------------------------------------------------------
void glf::fs2::RecursiveDir::Destroy(glf::fs2::RecursiveDir::Self *self)
{
  volatile int32_t **v1;
  volatile int32_t **v2;
  int v3;
  volatile int32_t *v4;

  v1 = *((volatile int32_t ***)self + 279);
  v2 = *((volatile int32_t ***)self + 278);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206E768);
  if ( v1 != v2 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v4 = *v2;
        if ( *v2 != nullptr )
          break;
LABEL_5:
        if ( v1 == ++v2 )
          goto LABEL_9;
      }
      if ( __sync_fetch_and_add(v4 + 1, 0xFFFFFFFF) != 1 )
      {
        v3 = *((uint32_t *)v4 + 1);
        _mm_mfence();
        if ( v3 == 1 )
          G4_VCALL<void>(v4, 12);
        goto LABEL_5;
      }
      ++v2;
      G4_VCALL<void>(v4, 8);
      G4_VCALL<void>(v4, 16);
      if ( v1 == v2 )
      {
LABEL_9:
        v2 = *((volatile int32_t ***)self + 278);
        break;
      }
    }
  }
  if ( v2 != nullptr )
    opDelete(v2);
  glf::fs2::Dir::Destroy((glf::fs2::Dir::Self *)(self));
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::RecursiveDir::Destroy_eacc9b20  (binary VA: 0xcc9b20)
// Original: glf::fs2::RecursiveDir::~RecursiveDir
// ----------------------------------------------------------------------------
void glf::fs2::RecursiveDir::Destroy_eacc9b20(glf::fs2::RecursiveDir::Self *self)
{
  glf::fs2::RecursiveDir::Destroy(self);
  glf::MemObject::opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::RecursiveDir::FindNext  (binary VA: 0xcc9ec0)
// Original: glf::fs2::RecursiveDir::FindNext
// ----------------------------------------------------------------------------
int glf::fs2::RecursiveDir::FindNext(glf::fs2::RecursiveDir::Self *self)
{
  glf::fs2::RecursiveDir::Self *v1;
  volatile int32_t *v2;
  int v3;
  volatile int32_t **v4;
  int result;
  volatile int32_t *v6;
  int v7;
  const glf::fs2::Path::Self *v8;
  glf::fs2::Path::Self *v9;
  volatile int32_t **v10;
  int v11;
  int v12;
  bool v13;
  volatile int32_t *v14;
  int v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef glf::fs2::Path::Self *_g4_t_v23;
  typedef glf::fs2::Path::Self *_g4_t_v24;
  typedef glf::fs2::Path::Self *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef glf::fs2::Path::Self *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef uint32_t _g4_t_v35[2];
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef uint32_t _g4_t_v38[2];
  typedef uint32_t _g4_t_v39[8];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v18)) > _g4_s2 ? (12u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v19)) > _g4_s3 ? (16u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v20)) > _g4_s4 ? (20u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v21)) > _g4_s5 ? (24u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v22)) > _g4_s6 ? (28u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v23)) > _g4_s7 ? (32u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v24)) > _g4_s8 ? (32u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v25)) > _g4_s9 ? (32u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v26)) > _g4_s10 ? (36u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v27)) > _g4_s11 ? (36u + sizeof(_g4_t_v27)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v28)) > _g4_s12 ? (40u + sizeof(_g4_t_v28)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v29)) > _g4_s13 ? (44u + sizeof(_g4_t_v29)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v30)) > _g4_s14 ? (44u + sizeof(_g4_t_v30)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v31)) > _g4_s15 ? (48u + sizeof(_g4_t_v31)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v32)) > _g4_s16 ? (52u + sizeof(_g4_t_v32)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v33)) > _g4_s17 ? (56u + sizeof(_g4_t_v33)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v34)) > _g4_s18 ? (60u + sizeof(_g4_t_v34)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_v35)) > _g4_s19 ? (64u + sizeof(_g4_t_v35)) : _g4_s19,
    _g4_s21 = (72u + sizeof(_g4_t_v36)) > _g4_s20 ? (72u + sizeof(_g4_t_v36)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v37)) > _g4_s21 ? (76u + sizeof(_g4_t_v37)) : _g4_s21,
    _g4_s23 = (80u + sizeof(_g4_t_v38)) > _g4_s22 ? (80u + sizeof(_g4_t_v38)) : _g4_s22,
    _g4_s24 = (88u + sizeof(_g4_t_v39)) > _g4_s23 ? (88u + sizeof(_g4_t_v39)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 36u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 36u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 44u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 48u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 52u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 56u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 60u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 64u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 72u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 76u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 80u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 88u);

  v39[4] = (uint32_t)(uintptr_t)(&self);
  v1 = self;
  v2 = *(volatile int32_t **)(*((uint32_t *)self + 279) - 4);
  if ( v2 != nullptr )
    __sync_add_and_fetch(v2 + 1, 1u);
  v3 = G4_VCALL<int>(v2, 20, v16, v17, v18, v19, v20, v21, v22, v23, v26, v28, v29, v31, v32, v33, v34, v35[0], v35[1], v36, v37, v38[0], v38[1], v39[0], v39[1], v39[2], v39[3]);
  if ( *(uint32_t *)(v3 + 1024) == 3 )
  {
    v30 = *((uint32_t *)v1 + 5);
    v27 = *((uint32_t *)v1 + 6);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), (char *)v3, (int)(uintptr_t)(&v34) + 3);
    v37 = 0;
    glf::fs2::Path::Init((glf::fs2::Path::Self *)&v36);
    v8 = (const glf::fs2::Path::Self *)G4_VCALL<int>(v2, 28);
    glf::fs2::Path::Construct((glf::fs2::Path::Self *)v39, v8);
    v9 = glf::fs2::Path::opDivAssign((glf::fs2::Path::Self *)v39, (const glf::fs2::Path::Self *)&v36);
    glf::fs2::Path::Construct((glf::fs2::Path::Self *)v38, v9);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v39);
    glf::fs2::FileSystem::OpenDir((glf::Self **)v35, *((pthread_mutex_t ***)v2 + 2), (glf::fs2::Path::Self *)v38, v30, v27);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v38);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)&v36);
    if ( v35[0] != 0 )
    {
      if ( G4_VCALL<uint8_t>(v35[0], 24) != 0 )
      {
        v10 = *((volatile int32_t ***)v1 + 279);
        if ( v10 != *((volatile int32_t ***)v1 + 280) )
        {
          v11 = 0;
          if ( v10 != nullptr )
          {
            v12 = v35[0];
            v13 = v35[0] == 0;
            *v10 = (volatile int32_t *)v35[0];
            if ( !v13 )
              __sync_add_and_fetch((volatile int32_t *)(v12 + 4), 1u);
            v11 = *((uint32_t *)v1 + 279);
          }
          *((uint32_t *)v1 + 279) = v11 + 4;
          v14 = (volatile int32_t *)v35[0];
          goto LABEL_28;
        }
        sub_CC9B60((void **)v1 + 278, v10, (volatile int32_t **)v35);
      }
      v14 = (volatile int32_t *)v35[0];
LABEL_28:
      if ( v14 != nullptr )
      {
        if ( __sync_fetch_and_add(v14 + 1, 0xFFFFFFFF) == 1 )
        {
          v25 = (glf::fs2::Path::Self *)v14;
          G4_VCALL<void>(v14, 8);
          G4_VCALL<void>(v25, 16);
        }
        else
        {
          v15 = *((uint32_t *)v14 + 1);
          _mm_mfence();
          if ( v15 == 1 )
            G4_VCALL<void>(v14, 12);
        }
      }
    }
  }
  G4_VCALL<void>(v2, 36);
  if ( (*(uint8_t (**)(uint32_t))(**(uint32_t **)(*((uint32_t *)v1 + 279) - 4) + 24))(*(uint32_t *)(*((uint32_t *)v1 + 279) - 4)) == 0 )
  {
LABEL_5:
    v4 = *((volatile int32_t ***)v1 + 279);
    while ( v4 != *((volatile int32_t ***)v1 + 278)
         && (*(uint8_t (**)(uint32_t))(**(v4 - 1) + 24))((uint32_t)(uintptr_t)(*(v4 - 1))) == 0 )
    {
      v4 = (volatile int32_t **)(*((uint32_t *)v1 + 279) - 4);
      *((uint32_t *)v1 + 279) = (uint32_t)(uintptr_t)(v4);
      v6 = *v4;
      if ( *v4 != nullptr )
      {
        if ( __sync_fetch_and_add(v6 + 1, 0xFFFFFFFF) == 1 )
        {
          v24 = (glf::fs2::Path::Self *)v6;
          G4_VCALL<void>(v6, 8);
          G4_VCALL<void>(v24, 16);
        }
        else
        {
          v7 = *((uint32_t *)v6 + 1);
          _mm_mfence();
          if ( v7 == 1 )
            G4_VCALL<void>(v6, 12);
        }
        goto LABEL_5;
      }
    }
  }
  if ( __sync_fetch_and_add(v2 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v2, 8);
    return G4_VCALL<int>(v2, 16);
  }
  else
  {
    result = *((uint32_t *)v2 + 1);
    _mm_mfence();
    if ( result == 1 )
      return G4_VCALL<int>(v2, 12);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::DirWithSearchPaths::Entry  (binary VA: 0xcca170)
// Original: glf::fs2::DirWithSearchPaths::Entry
// ----------------------------------------------------------------------------
char * glf::fs2::DirWithSearchPaths::Entry(glf::fs2::DirWithSearchPaths::Self *self)
{
  char *dest;
  int src;
  int v3;
  int v4;
  volatile int32_t *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  glf::fs2::Path::Self *v10;
  const char *v11;
  typedef glf::fs2::Path::Self *_g4_t_v13;
  typedef int _g4_t_v14[2];
  typedef int _g4_t_v15[2];
  typedef uint8_t _g4_t_v16[36];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v13)) > _g4_s0 ? (12u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (23u + sizeof(_g4_t_v14)) > _g4_s1 ? (23u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v15)) > _g4_s2 ? (32u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v16)) > _g4_s3 ? (40u + sizeof(_g4_t_v16)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 23u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);

  dest = (char *)self + 28;
  src = (*(int (**)(uint32_t))(**((uint32_t **)self + 278) + 20))(*((uint32_t *)self + 278));
  strcpy((char *)self + 28, (const char *)src);
  if ( (glf::fs2::DirWithSearchPaths::Self *)(src + 1024) != (glf::fs2::DirWithSearchPaths::Self *)((char *)self + 1052) )
  {
    *((uint32_t *)self + 263) = *(uint32_t *)(src + 1024);
    *((uint32_t *)self + 264) = *(uint32_t *)(src + 1028);
    *((uint32_t *)self + 265) = *(uint32_t *)(src + 1032);
    v3 = *(uint32_t *)(src + 1036);
    *((uint32_t *)self + 267) = *(uint32_t *)(src + 1040);
    *((uint32_t *)self + 266) = v3;
    v4 = *(uint32_t *)(src + 1044);
    if ( v4 != 0 )
      __sync_add_and_fetch((volatile int32_t *)(v4 + 4), 1u);
    v5 = *((volatile int32_t **)self + 268);
    *((uint32_t *)self + 268) = v4;
    if ( v5 != nullptr )
    {
      if ( __sync_fetch_and_add(v5 + 1, 0xFFFFFFFF) == 1 )
      {
        v13 = (glf::fs2::Path::Self *)v5;
        G4_VCALL<void>(v5, 8);
        G4_VCALL<void>(v13, 16);
      }
      else
      {
        v6 = *((uint32_t *)v5 + 1);
        _mm_mfence();
        if ( v6 == 1 )
          G4_VCALL<void>(v5, 12);
      }
    }
    *((uint32_t *)self + 269) = *(uint32_t *)(src + 1048);
    v7 = *(uint32_t *)(src + 1056);
    *((uint32_t *)self + 270) = *(uint32_t *)(src + 1052);
    *((uint32_t *)self + 271) = v7;
    v8 = *(uint32_t *)(src + 1072);
    *((uint32_t *)self + 274) = *(uint32_t *)(src + 1068);
    *((uint32_t *)self + 275) = v8;
    v9 = *(uint32_t *)(src + 1064);
    *((uint32_t *)self + 272) = *(uint32_t *)(src + 1060);
    *((uint32_t *)self + 273) = v9;
    glf::fs2::Path::opAssign(
      (glf::fs2::DirWithSearchPaths::Self *)((char *)self + 1104),
      (const glf::fs2::Path::Self *)(src + 1076));
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v15), dest, (int)(uintptr_t)(v14));
  v15[1] = 0;
  glf::fs2::Path::Init((glf::fs2::Path::Self *)v15);
  glf::fs2::Path::Construct((glf::fs2::Path::Self *)v16, (glf::fs2::DirWithSearchPaths::Self *)((char *)self + 12));
  v10 = glf::fs2::Path::opDivAssign((glf::fs2::Path::Self *)v16, (const glf::fs2::Path::Self *)v15);
  glf::fs2::Path::Construct((glf::fs2::Path::Self *)((char *)v14 + 1), v10);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v16);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v15);
  v11 = (const char *)glf::fs2::Path::c_str((glf::fs2::Path::Self *)((char *)v14 + 1));
  strcpy(dest, v11);
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)((char *)v14 + 1));
  return (char *)self + 28;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileEntry::Clear  (binary VA: 0xcca370)
// Original: glf::fs2::FileEntry::Clear
// ----------------------------------------------------------------------------
void glf::fs2::FileEntry::Clear(glf::fs2::FileEntry::Self *self)
{
  int v1;
  int v2;
  bool v3;
  volatile int32_t *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint8_t _g4_t_v24[20];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v12)) > _g4_s1 ? (8u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v13)) > _g4_s2 ? (12u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v14)) > _g4_s3 ? (16u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v15)) > _g4_s4 ? (20u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v16)) > _g4_s5 ? (24u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v17)) > _g4_s6 ? (28u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v18)) > _g4_s7 ? (32u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v19)) > _g4_s8 ? (36u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v20)) > _g4_s9 ? (40u + sizeof(_g4_t_v20)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v21)) > _g4_s10 ? (44u + sizeof(_g4_t_v21)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v22)) > _g4_s11 ? (48u + sizeof(_g4_t_v22)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v23)) > _g4_s12 ? (52u + sizeof(_g4_t_v23)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v24)) > _g4_s13 ? (56u + sizeof(_g4_t_v24)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 36u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 48u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 52u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 56u);

  v11 = 0;
  v12 = 0;
  v13 = 0xFFFF;
  v16 = 0;
  v14 = -1;
  *(uint8_t *)self = 0;
  v15 = -1;
  v17 = -1;
  v18 = -1;
  v20 = -1;
  v22 = -1;
  v19 = -1;
  v21 = -1;
  v23 = -1;
  glf::fs2::Path::Construct((glf::fs2::Path::Self *)v24);
  if ( &v11 != (int *)((char *)self + 1024) )
  {
    v1 = v15;
    *((uint32_t *)self + 256) = v11;
    *((uint32_t *)self + 257) = v12;
    *((uint32_t *)self + 258) = v13;
    *((uint32_t *)self + 259) = v14;
    v2 = v16;
    v3 = v16 == 0;
    *((uint32_t *)self + 260) = v1;
    if ( !v3 )
      __sync_add_and_fetch((volatile int32_t *)(v2 + 4), 1u);
    v4 = *((volatile int32_t **)self + 261);
    *((uint32_t *)self + 261) = v2;
    if ( v4 != nullptr )
    {
      if ( __sync_fetch_and_add(v4 + 1, 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v4, 8);
        G4_VCALL<void>(v4, 16);
      }
      else
      {
        v5 = *((uint32_t *)v4 + 1);
        _mm_mfence();
        if ( v5 == 1 )
          G4_VCALL<void>(v4, 12);
      }
    }
    v6 = v19;
    *((uint32_t *)self + 262) = v17;
    *((uint32_t *)self + 263) = v18;
    *((uint32_t *)self + 264) = v6;
    v7 = v23;
    *((uint32_t *)self + 267) = v22;
    *((uint32_t *)self + 268) = v7;
    v8 = v21;
    *((uint32_t *)self + 265) = v20;
    *((uint32_t *)self + 266) = v8;
    glf::fs2::Path::opAssign((glf::fs2::FileEntry::Self *)((char *)self + 1076), (const glf::fs2::Path::Self *)v24);
  }
  glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v24);
  v9 = (uint32_t *)v16;
  if ( v16 != 0 )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)(v16 + 4), 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v9, 8);
      G4_VCALL<void>(v9, 16);
    }
    else
    {
      v10 = v9[1];
      _mm_mfence();
      if ( v10 == 1 )
        G4_VCALL<void>(v9, 12);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::DirectoryIndexed::FillData  (binary VA: 0xcca570)
// Original: glf::fs2::DirectoryIndexed::FillData
// ----------------------------------------------------------------------------
char glf::fs2::DirectoryIndexed::FillData(glf::fs2::DirectoryIndexed::Self *self)
{
  uint16_t *Permissions;
  unsigned int v2;
  unsigned int v3;
  unsigned int v4;
  bool v5;
  glf::fs2::IndexData::Self *v6;
  glf::fs2::IndexData::Self *v7;
  int v8;
  int v9;
  const char *src;

  glf::fs2::FileEntry::Clear((glf::fs2::FileEntry::Self *)((glf::fs2::DirectoryIndexed::Self *)((char *)self + 28)));
  Permissions = *((uint16_t **)self + 282);
  v2 = *((uint32_t *)self + 279);
  v3 = *Permissions;
  if ( v2 < v3 + *((uint32_t *)Permissions + 1) )
  {
    if ( v2 < v3 )
      v4 = Permissions[1] + v2;
    else
      v4 = *((uint32_t *)Permissions + 2) + v2 - v3;
    if ( glf::fs2::IndexData::IsIndexed(*((glf::fs2::IndexData::Self **)self + 281), 1) )
    {
      src = (const char *)glf::fs2::IndexData::GetFileName(*((glf::fs2::IndexData::Self **)self + 281), v4);
      strcpy((char *)self + 28, src);
    }
    *((uint32_t *)self + 263) = 3 - !glf::fs2::IndexData::IsDir(*((glf::fs2::IndexData::Self **)self + 281), v4);
    v5 = !glf::fs2::IndexData::IsIndexed(*((glf::fs2::IndexData::Self **)self + 281), 8);
    v6 = *((glf::fs2::IndexData::Self **)self + 281);
    if ( !v5 )
      *((uint64_t *)self + 133) =g4_m128_lane<uint64_t>(_mm_cvtsi32_si128(*(uint32_t *)(*((uint32_t *)v6 + 76) + 4 * v4)), 0);
    v5 = !glf::fs2::IndexData::IsIndexed(v6, 0x4000);
    v7 = *((glf::fs2::IndexData::Self **)self + 281);
    if ( !v5 )
    {
      v8 = *((uint32_t *)v7 + 82);
      v9 = *(uint32_t *)(v8 + 8 * v4 + 4);
      *((uint32_t *)self + 272) = *(uint32_t *)(v8 + 8 * v4);
      *((uint32_t *)self + 273) = v9;
      *((uint32_t *)self + 269) = 0;
      *((uint32_t *)self + 270) = -1;
      *((uint32_t *)self + 271) = -1;
      *((uint32_t *)self + 274) = -1;
      *((uint32_t *)self + 275) = -1;
    }
    LOBYTE(Permissions) = glf::fs2::IndexData::IsIndexed(v7, 0x8000);
    if ( (uint8_t)(uintptr_t)(Permissions) != 0 )
    {
      Permissions = (uint16_t *)glf::fs2::IndexData::GetPermissions(*((glf::fs2::IndexData::Self **)self + 281), v4);
      *((uint32_t *)self + 265) = (uint32_t)(uintptr_t)(Permissions);
    }
  }
  return (char)(uintptr_t)(Permissions);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::FileEntry::Construct  (binary VA: 0xcca720)
// Original: glf::fs2::FileEntry::FileEntry
// ----------------------------------------------------------------------------
void glf::fs2::FileEntry::Construct(glf::fs2::FileEntry::Self *self)
{
  *((uint32_t *)self + 259) = -1;
  *((uint32_t *)self + 260) = -1;
  *((uint32_t *)self + 256) = 0;
  *((uint32_t *)self + 257) = 0;
  *((uint32_t *)self + 258) = 0xFFFF;
  *((uint32_t *)self + 261) = 0;
  *((uint32_t *)self + 262) = -1;
  *((uint32_t *)self + 263) = -1;
  *((uint32_t *)self + 264) = -1;
  *((uint32_t *)self + 265) = -1;
  *((uint32_t *)self + 266) = -1;
  *((uint32_t *)self + 267) = -1;
  *((uint32_t *)self + 268) = -1;
  glf::fs2::Path::Construct((glf::fs2::FileEntry::Self *)((char *)self + 1076));
  glf::fs2::FileEntry::Clear(self);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Dir::Construct  (binary VA: 0xcca7e0)
// Original: glf::fs2::Dir::Dir
// ----------------------------------------------------------------------------
void glf::fs2::Dir::Construct(uint32_t *a1, int a2, glf::fs2::Path::Self *a3, int a4, int a5)
{
  *a1 = ((uint32_t)(uintptr_t)&off_206E728);
  a1[2] = a2;
  a1[1] = 0;
  glf::fs2::Path::Construct((glf::fs2::Path::Self *)(a1 + 3), a3);
  a1[5] = a4;
  a1[6] = a5;
  glf::fs2::FileEntry::Construct((glf::fs2::FileEntry::Self *)(a1 + 7));
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Dir::Validate  (binary VA: 0xcca850)
// Original: glf::fs2::Dir::Validate
// ----------------------------------------------------------------------------
int glf::fs2::Dir::Validate(glf::fs2::Dir::Self *self)
{
  int result;

  for ( result = G4_VCALL<int>(self, 24);
        (uint8_t)result != 0;
        result = G4_VCALL<int>(self, 24) )
  {
    G4_VCALL<void>(self, 40);
    result = *((uint32_t *)self + 5);
    if ( ((result & 0x2000) != 0 || strcmp((const char *)self + 28, ".") != 0)
      && ((result & 0x4000) != 0 || strcmp((const char *)self + 28, "..") != 0)
      && ((result & 2) != 0 || *((uint32_t *)self + 263) != 2)
      && ((result & 1) != 0 || *((uint32_t *)self + 263) != 3) )
    {
      break;
    }
    G4_VCALL<void>(self, 36);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::Dir::MoveNext  (binary VA: 0xcca900)
// Original: glf::fs2::Dir::MoveNext
// ----------------------------------------------------------------------------
int glf::fs2::Dir::MoveNext(glf::fs2::Dir::Self *self)
{
  G4_VCALL<void>(self, 36);
  return glf::fs2::Dir::Validate(self);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::RecursiveDir::Construct  (binary VA: 0xcca940)
// Original: glf::fs2::RecursiveDir::RecursiveDir
// ----------------------------------------------------------------------------
glf::Self * glf::fs2::RecursiveDir::Construct(void **a1, pthread_mutex_t **a2, glf::fs2::Path::Self *a3, int a4, int a5)
{
  void **v5;
  glf::fs2::Path::Self *v6;
  glf::Self *result;
  volatile int32_t **v8;
  char *v9;
  glf::Self *v10;
  bool v11;
  volatile int32_t *v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef pthread_mutex_t **_g4_t_v15;
  typedef glf::Self *_g4_t_v16[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v15)) > _g4_s2 ? (12u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v16)) > _g4_s3 ? (16u + sizeof(_g4_t_v16)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);

  v16[6] = (glf::Self *)&a1;
  v5 = a1;
  v6 = a3;
  v15 = a2;
  v14 = a4;
  v13 = a5;
  glf::fs2::Dir::Construct((uint32_t *)(a1), (int)(uintptr_t)(a2), a3, a4, a5);
  v5[278] = nullptr;
  v5[279] = nullptr;
  *v5 = (void *)(uintptr_t)(((uint32_t)(uintptr_t)&off_206E768));
  v5[280] = nullptr;
  glf::fs2::FileSystem::OpenDir(v16, v15, v6, v14, v13);
  result = v16[0];
  if ( v16[0] == nullptr )
    return result;
  result = (glf::Self *)G4_VCALL<int>(v16[0], 24);
  if ( (uint8_t)(uintptr_t)(result) == 0 )
    goto LABEL_11;
  v8 = (volatile int32_t **)v5[279];
  if ( v8 == v5[280] )
  {
    result = (glf::Self *)sub_CC9B60(v5 + 278, v8, (volatile int32_t **)v16);
LABEL_11:
    v12 = (volatile int32_t *)v16[0];
    if ( v16[0] == nullptr )
      return result;
    goto LABEL_12;
  }
  v9 = nullptr;
  if ( v8 != nullptr )
  {
    v10 = v16[0];
    v11 = v16[0] == nullptr;
    *v8 = (volatile int32_t *)v16[0];
    if ( !v11 )
      __sync_add_and_fetch((volatile int32_t *)v10 + 1, 1u);
    v9 = (char *)v5[279];
  }
  result = (glf::Self *)(v9 + 4);
  v5[279] = result;
  v12 = (volatile int32_t *)v16[0];
  if ( v16[0] != nullptr )
  {
LABEL_12:
    if ( __sync_fetch_and_add(v12 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v12, 8);
      return (glf::Self *)G4_VCALL<int>(v12, 16);
    }
    else
    {
      result = *((glf::Self **)v12 + 1);
      _mm_mfence();
      if ( result == (glf::Self *)((char *)&dword_0 + 1) )
        return (glf::Self *)G4_VCALL<int>(v12, 12);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::DirectoryIndexed::Construct  (binary VA: 0xccaab0)
// Original: glf::fs2::DirectoryIndexed::DirectoryIndexed
// ----------------------------------------------------------------------------
int glf::fs2::DirectoryIndexed::Construct(glf::fs2::Dir::Self *a1, int a2, int a3, uint16_t a4, glf::fs2::Path::Self *a5, int a6, int a7)
{
  glf::fs2::Dir::Construct((uint32_t *)(a1), a2, a5, a6, a7);
  *((uint16_t *)a1 + 556) = a4;
  *((uint32_t *)a1 + 281) = a3;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_206E7A8);
  *((uint32_t *)a1 + 279) = 0;
  *((uint32_t *)a1 + 282) = *(uint32_t *)(a3 + 280) + 12 * a4;
  return glf::fs2::Dir::Validate(a1);
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::DirWithSearchPaths::FindNextDir  (binary VA: 0xccab60)
// Original: glf::fs2::DirWithSearchPaths::FindNextDir
// ----------------------------------------------------------------------------
glf::fs2::DirWithSearchPaths::Self * glf::fs2::DirWithSearchPaths::FindNextDir(glf::fs2::DirWithSearchPaths::Self *self, int a2, char a3)
{
  int v3;
  glf::Self *v4;
  volatile int32_t *v5;
  int v6;
  int v7;
  int v8;
  glf::fs2::Path::Self *v9;
  int v10;
  uint32_t *v11;
  volatile int32_t *v12;
  int v13;
  uint32_t *v14;
  uint32_t *v16;
  int v17;
  typedef int _g4_t_v18;
  typedef glf::Self *_g4_t_v19;
  typedef glf::Self *_g4_t_v20;
  typedef glf::Self *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint8_t _g4_t_v23[8];
  typedef uint8_t _g4_t_v24[36];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v18)) > _g4_s0 ? (4u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v19)) > _g4_s1 ? (8u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v20)) > _g4_s2 ? (8u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v21)) > _g4_s3 ? (8u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v22)) > _g4_s4 ? (28u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v23)) > _g4_s5 ? (32u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v24)) > _g4_s6 ? (40u + sizeof(_g4_t_v24)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);

  v3 = *(uint32_t *)(a2 + 1116);
  if ( a3 != 0 && v3 != a2 + 1116 )
  {
    v19 = *(glf::Self **)(a2 + 1116);
    sub_1901940(v3);
    glf::fs2::Path::Destroy((glf::Self *)((char *)v19 + 20));
    v4 = v19;
    v5 = *((volatile int32_t **)v19 + 4);
    if ( v5 != nullptr )
    {
      if ( __sync_fetch_and_add(v5 + 1, 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v5, 8);
        G4_VCALL<void>(v5, 16);
        v4 = v19;
      }
      else
      {
        v6 = *((uint32_t *)v5 + 1);
        _mm_mfence();
        if ( v6 == 1 )
        {
          G4_VCALL<void>(v5, 12);
          v4 = v19;
        }
      }
    }
    v20 = v4;
    glf::fs2::Path::Destroy((glf::Self *)((char *)v4 + 8));
    glf::Free(v20);
    v3 = *(uint32_t *)(a2 + 1116);
  }
  while ( 1 )
  {
    if ( v3 == a2 + 1116 )
    {
      *(uint32_t *)self = 0;
      return self;
    }
    v8 = *(uint32_t *)(a2 + 20);
    v18 = *(uint32_t *)(a2 + 24);
    glf::fs2::Path::Construct((glf::fs2::Path::Self *)v24, (const glf::fs2::Path::Self *)(v3 + 8));
    v9 = glf::fs2::Path::opDivAssign((glf::fs2::Path::Self *)v24, (const glf::fs2::Path::Self *)(a2 + 12));
    glf::fs2::Path::Construct((glf::fs2::Path::Self *)v23, v9);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v24);
    glf::fs2::FileSystem::OpenDirNoSearchPaths((uint32_t *)(&v22), *(glf::fs2::Path::Self **)(a2 + 8), (glf::fs2::Path::Self *)v23, v8, v18);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)v23);
    v10 = v22;
    if ( v22 != 0 )
      break;
    v11 = *(uint32_t **)(a2 + 1116);
    sub_1901940(v11);
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)(v11 + 5));
    v12 = (volatile int32_t *)v11[4];
    if ( v12 != nullptr )
    {
      if ( __sync_fetch_and_add(v12 + 1, 0xFFFFFFFF) == 1 )
      {
        v21 = (glf::Self *)v12;
        G4_VCALL<void>(v12, 8);
        G4_VCALL<void>(v21, 16);
      }
      else
      {
        v13 = *((uint32_t *)v12 + 1);
        _mm_mfence();
        if ( v13 == 1 )
          G4_VCALL<void>(v12, 12);
      }
    }
    glf::fs2::Path::Destroy((glf::fs2::Path::Self *)(v11 + 2));
    glf::Free((glf::Self *)v11);
    v14 = (uint32_t *)v22;
    if ( v22 != 0 )
    {
      if ( __sync_fetch_and_add((volatile int32_t *)(v22 + 4), 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v14, 8);
        G4_VCALL<void>(v14, 16);
      }
      else
      {
        v7 = v14[1];
        _mm_mfence();
        if ( v7 == 1 )
          G4_VCALL<void>(v14, 12);
      }
    }
    v3 = *(uint32_t *)(a2 + 1116);
  }
  *(uint32_t *)self = v22;
  __sync_add_and_fetch((volatile int32_t *)(v10 + 4), 1u);
  v16 = (uint32_t *)v22;
  if ( v22 == 0 )
    return self;
  if ( __sync_fetch_and_add((volatile int32_t *)(v22 + 4), 0xFFFFFFFF) != 1 )
  {
    v17 = v16[1];
    _mm_mfence();
    if ( v17 == 1 )
      G4_VCALL<void>(v16, 12);
    return self;
  }
  G4_VCALL<void>(v16, 8);
  G4_VCALL<void>(v16, 16);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::DirWithSearchPaths::FindNext  (binary VA: 0xccae30)
// Original: glf::fs2::DirWithSearchPaths::FindNext
// ----------------------------------------------------------------------------
int glf::fs2::DirWithSearchPaths::FindNext(glf::fs2::Dir::Self **self)
{
  glf::fs2::DirWithSearchPaths::Self *v1;
  char *v2;
  int result;
  int v4;
  volatile int32_t *v5;
  int v6;
  uint32_t *v7;
  int v8;
  typedef uint32_t *_g4_t_v9;
  typedef volatile int32_t *_g4_t_v10;
  typedef uint32_t _g4_t_v11[10];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v10)) > _g4_s1 ? (0u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v11)) > _g4_s2 ? (4u + sizeof(_g4_t_v11)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);

  v11[6] = (uint32_t)(uintptr_t)(&self);
  v1 = (glf::fs2::DirWithSearchPaths::Self *)self;
  v2 = (char *)(self + 279);
  glf::fs2::Dir::MoveNext(*(self + 278));
  while ( 1 )
  {
    result = *((uint32_t *)v1 + 278);
    if ( result == 0 )
      break;
    result = (*(int (**)(uint32_t))(*(uint32_t *)result + 24))(*((uint32_t *)v1 + 278));
    if ( (uint8_t)result != 0 || *((char **)v1 + 279) == v2 )
      break;
    glf::fs2::DirWithSearchPaths::FindNextDir((glf::fs2::DirWithSearchPaths::Self *)v11, (int)(uintptr_t)(v1), 1);
    v4 = v11[0];
    if ( v11[0] != 0 )
      __sync_add_and_fetch((volatile int32_t *)(v11[0] + 4), 1u);
    v5 = *((volatile int32_t **)v1 + 278);
    *((uint32_t *)v1 + 278) = v4;
    if ( v5 != nullptr )
    {
      if ( __sync_fetch_and_add(v5 + 1, 0xFFFFFFFF) == 1 )
      {
        v10 = v5;
        G4_VCALL<void>(v5, 8);
        G4_VCALL<void>(v10, 16);
      }
      else
      {
        v6 = *((uint32_t *)v5 + 1);
        _mm_mfence();
        if ( v6 == 1 )
          G4_VCALL<void>(v5, 12);
      }
    }
    v7 = (uint32_t *)v11[0];
    if ( v11[0] != 0 )
    {
      if ( __sync_fetch_and_add((volatile int32_t *)(v11[0] + 4), 0xFFFFFFFF) == 1 )
      {
        v9 = v7;
        G4_VCALL<void>(v7, 8);
        G4_VCALL<void>(v9, 16);
      }
      else
      {
        v8 = v7[1];
        _mm_mfence();
        if ( v8 == 1 )
          G4_VCALL<void>(v7, 12);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::DirWithSearchPaths::Construct  (binary VA: 0xccaf70)
// Original: glf::fs2::DirWithSearchPaths::DirWithSearchPaths
// ----------------------------------------------------------------------------
int glf::fs2::DirWithSearchPaths::Construct(uint32_t *a1, pthread_mutex_t **a2, glf::fs2::Path::Self *a3, int a4, int a5)
{
  uint32_t *v5;
  pthread_mutex_t **v6;
  int result;
  volatile int32_t *v8;
  uint32_t *v9;
  uint32_t v10[7];

  v10[6] = (uint32_t)(uintptr_t)(&a1);
  v5 = a1;
  v6 = a2;
  glf::fs2::Dir::Construct(a1, (int)(uintptr_t)(a2), a3, a4, a5);
  v5[278] = 0;
  *v5 = ((uint32_t)(uintptr_t)&off_206E7E8);
  v5[279] = (uint32_t)(uintptr_t)(v5 + 279);
  v5[280] = (uint32_t)(uintptr_t)(v5 + 279);
  glf::fs2::FileSystem::GatherAllSearchPaths(
    v6,
    (std::list<glf::fs2::MountPoint::Self, glf::allocator<glf::fs2::MountPoint::Self>> *)(v5 + 279),
    true);
  glf::fs2::DirWithSearchPaths::FindNextDir((glf::fs2::DirWithSearchPaths::Self *)v10, (int)(uintptr_t)(v5), 0);
  result = v10[0];
  if ( v10[0] != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v10[0] + 4), 1u);
  v8 = (volatile int32_t *)v5[278];
  v5[278] = result;
  if ( v8 != nullptr )
  {
    if ( __sync_fetch_and_add(v8 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v8, 8);
      result = G4_VCALL<int>(v8, 16);
    }
    else
    {
      result = *((uint32_t *)v8 + 1);
      _mm_mfence();
      if ( result == 1 )
        result = G4_VCALL<int>(v8, 12);
    }
  }
  v9 = (uint32_t *)v10[0];
  if ( v10[0] != 0 )
  {
    if ( __sync_fetch_and_add((volatile int32_t *)(v10[0] + 4), 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v9, 8);
      return G4_VCALL<int>(v9, 16);
    }
    else
    {
      result = v9[1];
      _mm_mfence();
      if ( result == 1 )
        return G4_VCALL<int>(v9, 12);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::DirectoryIndexed::Destroy  (binary VA: 0xccb0d0)
// Original: glf::fs2::DirectoryIndexed::~DirectoryIndexed
// ----------------------------------------------------------------------------
void glf::fs2::DirectoryIndexed::Destroy(glf::fs2::DirectoryIndexed::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206E7A8);
  glf::fs2::Dir::Destroy((glf::fs2::Dir::Self *)(self));
}

// ----------------------------------------------------------------------------
// Function: glf::fs2::DirectoryIndexed::Destroy_eaccb100  (binary VA: 0xccb100)
// Original: glf::fs2::DirectoryIndexed::~DirectoryIndexed
// ----------------------------------------------------------------------------
void glf::fs2::DirectoryIndexed::Destroy_eaccb100(glf::fs2::DirectoryIndexed::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206E7A8);
  glf::fs2::Dir::Destroy((glf::fs2::Dir::Self *)(self));
  glf::MemObject::opDelete(self);
}


