#include "Core/Utils/DecompTypes.h"
#include "glwebtools_GlWebToolsCore.h"

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebToolsCore::Grab  (binary VA: 0x13d9b60)
// Original: glwebtools::GlWebToolsCore::Grab
// ----------------------------------------------------------------------------
int glwebtools::GlWebToolsCore::Grab(glwebtools::GlWebToolsCore::Self *self)
{
  int v1;

  glwebtools::Mutex::Lock((glwebtools::GlWebToolsCore::Self *)((char *)self + 212));
  v1 = *((uint32_t *)self + 1) + 1;
  *((uint32_t *)self + 1) = v1;
  glwebtools::Mutex::Unlock((glwebtools::GlWebToolsCore::Self *)((char *)self + 212));
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebToolsCore::CanDelete  (binary VA: 0x13d9bc0)
// Original: glwebtools::GlWebToolsCore::CanDelete
// ----------------------------------------------------------------------------
int glwebtools::GlWebToolsCore::CanDelete(glwebtools::GlWebToolsCore::Self *self)
{
  int v1;
  int v3;

  v1 = 0;
  glwebtools::Mutex::Lock((glwebtools::GlWebToolsCore::Self *)((char *)self + 212));
  if ( *((int *)self + 1) <= 0 && *((uint32_t *)self + 28) == 0 )
  {
    v3 = *((uint32_t *)self + 34);
    LOBYTE(v3) = v3 == 0;
    v1 = v3;
  }
  glwebtools::Mutex::Unlock((glwebtools::GlWebToolsCore::Self *)((char *)self + 212));
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebToolsCore::Drop  (binary VA: 0x13d9c40)
// Original: glwebtools::GlWebToolsCore::Drop
// ----------------------------------------------------------------------------
int glwebtools::GlWebToolsCore::Drop(glwebtools::GlWebToolsCore::Self *self)
{
  int v1;

  glwebtools::Mutex::Lock((glwebtools::GlWebToolsCore::Self *)((char *)self + 212));
  v1 = *((uint32_t *)self + 1);
  if ( v1 > 0 )
    *((uint32_t *)self + 1) = --v1;
  glwebtools::Mutex::Unlock((glwebtools::GlWebToolsCore::Self *)((char *)self + 212));
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebToolsCore::DestroyInstance  (binary VA: 0x13d9d40)
// Original: glwebtools::GlWebToolsCore::DestroyInstance
// ----------------------------------------------------------------------------
int glwebtools::GlWebToolsCore::DestroyInstance(glwebtools::GlWebToolsCore::Self *self)
{
  char v1;
  int v2;

  if ( self == nullptr )
    return -2147483646;
  v1 = G4_VCALL<int>(self, 8);
  v2 = -2147483645;
  if ( v1 != 0 )
  {
    (**(void (***)(glwebtools::GlWebToolsCore::Self *))self)(self);
    sub_4EBEE0((int)(uintptr_t)(self));
    return 0;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebToolsCore::HasRunningConnection  (binary VA: 0x13d9da0)
// Original: glwebtools::GlWebToolsCore::_HasRunningConnection
// ----------------------------------------------------------------------------
int glwebtools::GlWebToolsCore::HasRunningConnection(glwebtools::GlWebToolsCore::Self *self)
{
  int result;
  glwebtools::UrlConnectionCore::Self **v2;

  result = 0;
  v2 = *((glwebtools::UrlConnectionCore::Self ***)self + 26);
  if ( v2 != (glwebtools::UrlConnectionCore::Self **)((char *)self + 96) )
  {
    do
    {
      if ( glwebtools::UrlConnectionCore::GetState(v2[5]) == 3 )
        return 1;
      v2 = (glwebtools::UrlConnectionCore::Self **)sub_1904890(v2);
    }
    while ( (glwebtools::UrlConnectionCore::Self **)((char *)self + 96) != v2 );
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebToolsCore::HasRunningConnection_ea13d9e10  (binary VA: 0x13d9e10)
// Original: glwebtools::GlWebToolsCore::HasRunningConnection
// ----------------------------------------------------------------------------
int glwebtools::GlWebToolsCore::HasRunningConnection_ea13d9e10(glwebtools::GlWebToolsCore::Self *self)
{
  uint8_t HasRunningConnection;

  glwebtools::Mutex::Lock((glwebtools::GlWebToolsCore::Self *)((char *)self + 212));
  HasRunningConnection = glwebtools::GlWebToolsCore::HasRunningConnection(self);
  glwebtools::Mutex::Unlock((glwebtools::GlWebToolsCore::Self *)((char *)self + 212));
  return HasRunningConnection;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebToolsCore::IsInitialized  (binary VA: 0x13d9e70)
// Original: glwebtools::GlWebToolsCore::IsInitialized
// ----------------------------------------------------------------------------
int glwebtools::GlWebToolsCore::IsInitialized(glwebtools::GlWebToolsCore::Self *self)
{
  return *((uint8_t *)self + 228);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebToolsCore::ShutdownInProgress  (binary VA: 0x13d9e80)
// Original: glwebtools::GlWebToolsCore::ShutdownInProgress
// ----------------------------------------------------------------------------
int glwebtools::GlWebToolsCore::ShutdownInProgress(glwebtools::GlWebToolsCore::Self *self)
{
  return *((uint8_t *)self + 225);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebToolsCore::UpdateTime  (binary VA: 0x13d9e90)
// Original: glwebtools::GlWebToolsCore::UpdateTime
// ----------------------------------------------------------------------------
uint64_t glwebtools::GlWebToolsCore::UpdateTime(glwebtools::GlWebToolsCore::Self *self)
{
  int v2;
  uint64_t result; // rax
  glwebtools::SystemClock::Self *v4;
  uint64_t v5;
  uint64_t v6; // 0:edi.4,4:ebp.4

  LODWORD(v6) = glwebtools::SystemClock::GetMilliseconds(v4);
  HIDWORD(v6) = v2;
  v5 = *((uint64_t *)self + 29);
  result = 0;
  *((uint64_t *)self + 29) = v6;
  if ( v5 != 0 )
  {
    if ( v6 <= v5 )
      return v6 + ~v5;
    else
      return v6 - v5;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebToolsCore::CancelAllConnections  (binary VA: 0x13d9f30)
// Original: glwebtools::GlWebToolsCore::_CancelAllConnections
// ----------------------------------------------------------------------------
int glwebtools::GlWebToolsCore::CancelAllConnections(glwebtools::GlWebToolsCore::Self *self)
{
  glwebtools::UrlConnectionCore::Self **i;

  for ( i = *((glwebtools::UrlConnectionCore::Self ***)self + 26);
        (glwebtools::UrlConnectionCore::Self **)((char *)self + 96) != i;
        i = (glwebtools::UrlConnectionCore::Self **)sub_1904890(i) )
  {
    glwebtools::UrlConnectionCore::CancelRequest(i[5]);
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebToolsCore::CancelAllConnections_ea13d9f80  (binary VA: 0x13d9f80)
// Original: glwebtools::GlWebToolsCore::CancelAllConnections
// ----------------------------------------------------------------------------
bool glwebtools::GlWebToolsCore::CancelAllConnections_ea13d9f80(glwebtools::GlWebToolsCore::Self *self)
{
  glwebtools::Self *v1;
  bool IsOperationSuccess;

  glwebtools::Mutex::Lock((glwebtools::GlWebToolsCore::Self *)((char *)self + 212));
  v1 = (glwebtools::Self *)glwebtools::GlWebToolsCore::CancelAllConnections(self);
  IsOperationSuccess = glwebtools::IsOperationSuccess(v1);
  glwebtools::Mutex::Unlock((glwebtools::GlWebToolsCore::Self *)((char *)self + 212));
  return IsOperationSuccess;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebToolsCore::Shutdown  (binary VA: 0x13d9fe0)
// Original: glwebtools::GlWebToolsCore::Shutdown
// ----------------------------------------------------------------------------
int glwebtools::GlWebToolsCore::Shutdown(glwebtools::GlWebToolsCore::Self *self)
{
  int v1;

  v1 = 0;
  glwebtools::Mutex::Lock((glwebtools::GlWebToolsCore::Self *)((char *)self + 212));
  if ( (uint8_t)glwebtools::GlWebToolsCore::IsInitialized(self) != 0
    && (uint8_t)glwebtools::GlWebToolsCore::ShutdownInProgress(self) == 0 )
  {
    *((uint8_t *)self + 225) = 1;
    if ( (uint8_t)glwebtools::GlWebToolsCore::HasRunningConnection(self) != 0 )
      v1 = glwebtools::GlWebToolsCore::CancelAllConnections(self);
  }
  glwebtools::Mutex::Unlock((glwebtools::GlWebToolsCore::Self *)((char *)self + 212));
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebToolsCore::Construct  (binary VA: 0x13da070)
// Original: glwebtools::GlWebToolsCore::GlWebToolsCore
// ----------------------------------------------------------------------------
glwebtools::GlWebToolsCore::Self * glwebtools::GlWebToolsCore::Construct(glwebtools::GlWebToolsCore::Self *self)
{
  glwebtools::GlWebToolsCore::Self *result;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094C80);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)((char *)self + 12);
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)((char *)self + 12);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 7) = 0;
  glwebtools::TaskGroup::Construct((glwebtools::GlWebToolsCore::Self *)((char *)self + 32));
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 26) = (uint32_t)(uintptr_t)((char *)self + 96);
  *((uint32_t *)self + 27) = (uint32_t)(uintptr_t)((char *)self + 96);
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 32) = (uint32_t)(uintptr_t)((char *)self + 120);
  *((uint32_t *)self + 33) = (uint32_t)(uintptr_t)((char *)self + 120);
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 31) = 0;
  *((uint32_t *)self + 34) = 0;
  *((uint32_t *)self + 35) = 0;
  *((uint32_t *)self + 36) = 0;
  *((uint32_t *)self + 37) = 0;
  glwebtools::GlWebTools::CreationSettings::Construct((glwebtools::GlWebTools::CreationSettings::Self *)((char *)self + 152));
  *((uint32_t *)self + 52) = (uint32_t)(uintptr_t)(&dword_213B814);
  glwebtools::Mutex::Construct((glwebtools::GlWebToolsCore::Self *)((char *)self + 212));
  *((uint8_t *)self + 224) = 0;
  *((uint8_t *)self + 225) = 0;
  glwebtools::OpenSSL::Construct((glwebtools::GlWebToolsCore::Self *)((char *)self + 226));
  result = (glwebtools::GlWebToolsCore::Self *)(glwebtools::Curl::Construct((glwebtools::GlWebToolsCore::Self *)((char *)self + 227)));
  *((uint8_t *)self + 228) = 0;
  *((uint32_t *)self + 58) = 0;
  *((uint32_t *)self + 59) = 0;
  *((uint32_t *)self + 55) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebToolsCore::CreateInstance  (binary VA: 0x13da1b0)
// Original: glwebtools::GlWebToolsCore::CreateInstance
// ----------------------------------------------------------------------------
int glwebtools::GlWebToolsCore::CreateInstance(glwebtools::GlWebToolsCore::Self *self)
{
  glwebtools::GlWebToolsCore::Self *v1;

  v1 = (glwebtools::GlWebToolsCore::Self *)sub_4EBE70(0xF0u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
  glwebtools::GlWebToolsCore::Construct(v1);
  if ( v1 == nullptr )
    return -2147483643;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(v1);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebToolsCore::GetTaskGroup  (binary VA: 0x13da220)
// Original: glwebtools::GlWebToolsCore::GetTaskGroup
// ----------------------------------------------------------------------------
int glwebtools::GlWebToolsCore::GetTaskGroup(int a1, void **a2)
{
  int v2;
  int v3;
  size_t v4;
  size_t v5;
  size_t n;
  int v7;
  int v8;
  size_t v9;
  size_t v10;
  int v11;
  int v12;
  void *s2;
  int v15;

  v2 = 0;
  v3 = *(uint32_t *)(a1 + 16);
  if ( v3 != 0 )
  {
    v15 = a1 + 12;
    s2 = *a2;
    v4 = *((uint32_t *)*a2 - 3);
    do
    {
      while ( 1 )
      {
        v5 = *(uint32_t *)(*(uint32_t *)(v3 + 16) - 12);
        n = v5;
        if ( v4 <= v5 )
          n = v4;
        v7 = v5 - v4;
        v8 = memcmp(*(const void **)(v3 + 16), s2, n);
        if ( v8 != 0 )
          v7 = v8;
        if ( v7 < 0 )
          break;
        v15 = v3;
        v3 = *(uint32_t *)(v3 + 8);
        if ( v3 == 0 )
          goto LABEL_10;
      }
      v3 = *(uint32_t *)(v3 + 12);
    }
    while ( v3 != 0 );
LABEL_10:
    v2 = 0;
    if ( a1 + 12 != v15 )
    {
      v9 = *(uint32_t *)(*(uint32_t *)(v15 + 16) - 12);
      v10 = v9;
      if ( v4 <= v9 )
        v10 = v4;
      v11 = v4 - v9;
      v12 = memcmp(s2, *(const void **)(v15 + 16), v10);
      if ( v12 == 0 )
        v12 = v11;
      if ( v12 >= 0 )
        return *(uint32_t *)(v15 + 20);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebToolsCore::GetTaskGroup_ea13da2f0  (binary VA: 0x13da2f0)
// Original: glwebtools::GlWebToolsCore::GetTaskGroup
// ----------------------------------------------------------------------------
int glwebtools::GlWebToolsCore::GetTaskGroup_ea13da2f0(int a1, void **a2)
{
  int result;
  int v3;
  size_t v4;
  size_t n;
  size_t v6;
  int v7;
  int v8;
  size_t v9;
  size_t v10;
  int v11;
  int v12;
  void *s2;
  int v14;

  result = 0;
  v3 = *(uint32_t *)(a1 + 16);
  if ( v3 != 0 )
  {
    v14 = a1 + 12;
    s2 = *a2;
    v4 = *((uint32_t *)*a2 - 3);
    do
    {
      while ( 1 )
      {
        n = v4;
        v6 = *(uint32_t *)(*(uint32_t *)(v3 + 16) - 12);
        if ( v6 <= v4 )
          n = *(uint32_t *)(*(uint32_t *)(v3 + 16) - 12);
        v7 = v6 - v4;
        v8 = memcmp(*(const void **)(v3 + 16), s2, n);
        if ( v8 != 0 )
          v7 = v8;
        if ( v7 < 0 )
          break;
        v14 = v3;
        v3 = *(uint32_t *)(v3 + 8);
        if ( v3 == 0 )
          goto LABEL_10;
      }
      v3 = *(uint32_t *)(v3 + 12);
    }
    while ( v3 != 0 );
LABEL_10:
    if ( a1 + 12 == v14 )
    {
      return 0;
    }
    else
    {
      v9 = v4;
      v10 = *(uint32_t *)(*(uint32_t *)(v14 + 16) - 12);
      if ( v10 <= v4 )
        v9 = *(uint32_t *)(*(uint32_t *)(v14 + 16) - 12);
      v11 = v4 - v10;
      v12 = memcmp(s2, *(const void **)(v14 + 16), v9);
      if ( v12 != 0 )
        v11 = v12;
      result = 0;
      if ( v11 >= 0 )
        return *(uint32_t *)(v14 + 20);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebToolsCore::UpdateTaskGroups  (binary VA: 0x13da3c0)
// Original: glwebtools::GlWebToolsCore::UpdateTaskGroups
// ----------------------------------------------------------------------------
int glwebtools::GlWebToolsCore::UpdateTaskGroups(glwebtools::GlWebToolsCore::Self *self, uint64_t a2)
{
  glwebtools::TaskGroup::Self **i;
  glwebtools::Self *v3;
  glwebtools::Self *v4;

  for ( i = *((glwebtools::TaskGroup::Self ***)self + 5);
        i != (glwebtools::TaskGroup::Self **)((char *)self + 12);
        i = (glwebtools::TaskGroup::Self **)sub_19048E0(i) )
  {
    v3 = (glwebtools::Self *)glwebtools::TaskGroup::Update(i[5], a2);
    glwebtools::IsOperationSuccess(v3);
  }
  v4 = (glwebtools::Self *)glwebtools::TaskGroup::Update((glwebtools::GlWebToolsCore::Self *)((char *)self + 32), a2);
  glwebtools::IsOperationSuccess(v4);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebToolsCore::Update  (binary VA: 0x13da450)
// Original: glwebtools::GlWebToolsCore::Update
// ----------------------------------------------------------------------------
int glwebtools::GlWebToolsCore::Update(glwebtools::GlWebToolsCore::Self *self)
{
  glwebtools::GlWebToolsCore::Self *v1;
  int v3;
  int v4;
  int v5;
  uint32_t *v6;
  char *v7;
  uint32_t *v8;
  char *v9;
  char *v10;
  unsigned int Token;
  void (***v12)(uint32_t);
  int v13;
  char *v14;
  int v15;
  int v16;
  uint32_t *v17;
  uint32_t *v18;
  char *v19;
  char *v20;
  unsigned int v21;
  void (***v22)(uint32_t);
  int v23;
  uint64_t updated; // 0:edi.4,4:ebp.4
  typedef glwebtools::HandleManager::Self *_g4_t_v24;
  typedef size_t _g4_t_v25;
  typedef size_t _g4_t_v26;
  typedef unsigned int _g4_t_v27;
  typedef unsigned int _g4_t_v28;
  typedef glwebtools::GlWebToolsCore::Self *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef glwebtools::Mutex::Self *_g4_t_v31;
  typedef glwebtools::HandleManager::Self *_g4_t_Instance;
  typedef char *_g4_t_v33;
  typedef uint32_t *_g4_t_v34;
  typedef uint32_t *_g4_t_v35;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v24)) > _g4_s0 ? (0u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v25)) > _g4_s1 ? (0u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v26)) > _g4_s2 ? (0u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v27)) > _g4_s3 ? (36u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v28)) > _g4_s4 ? (36u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v29)) > _g4_s5 ? (40u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v30)) > _g4_s6 ? (44u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v31)) > _g4_s7 ? (48u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_Instance)) > _g4_s8 ? (52u + sizeof(_g4_t_Instance)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v33)) > _g4_s9 ? (56u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v34)) > _g4_s10 ? (72u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v35)) > _g4_s11 ? (76u + sizeof(_g4_t_v35)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 0u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 36u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 36u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 40u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 44u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 48u);
  _g4_t_Instance &Instance = *reinterpret_cast<_g4_t_Instance *>(_g4_sf + 52u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 56u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 72u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 76u);

  v1 = self;
  updated = glwebtools::GlWebToolsCore::UpdateTime(self);
  v31 = (glwebtools::Mutex::Self *)((glwebtools::GlWebToolsCore::Self *)((char *)self + 212));
  v30 = 0;
  if ( (uint8_t)glwebtools::Mutex::TryLock((glwebtools::GlWebToolsCore::Self *)((char *)self + 212)) == 0 )
    return v30;
  Instance = (glwebtools::HandleManager::Self *)glwebtools::HandleManager::GetInstance(v24);
  if ( (uint8_t)glwebtools::GlWebToolsCore::IsInitialized(self) != 0 && Instance != nullptr )
  {
    v30 = glwebtools::GlWebToolsCore::UpdateTaskGroups(self, updated);
    if ( !glwebtools::IsOperationSuccess((glwebtools::Self *)v30) )
    {
      glwebtools::Mutex::Unlock(v31);
      return v30;
    }
    v33 = (char *)self + 96;
    if ( *((glwebtools::GlWebToolsCore::Self **)self + 26) == (glwebtools::GlWebToolsCore::Self *)((char *)self + 96) )
    {
      v34 = (uint32_t *)(&v34);
      v35 = (uint32_t *)(&v34);
    }
    else
    {
      v29 = self;
      v3 = *((uint32_t *)self + 26);
      do
      {
        glwebtools::UrlConnectionCore::Update(*(glwebtools::UrlConnectionCore::Self **)(v3 + 20), updated);
        v3 = sub_1904890(v3);
      }
      while ( (char *)v3 != v33 );
      v1 = self;
      v34 = (uint32_t *)(&v34);
      v35 = (uint32_t *)(&v34);
      v4 = *((uint32_t *)self + 26);
      if ( (char *)v4 != v33 )
      {
        do
        {
          while ( (*(uint8_t (**)(uint32_t))(**(uint32_t **)(v4 + 20) + 8))(*(uint32_t *)(v4 + 20)) == 0 )
          {
            v4 = sub_1904890(v4);
            if ( (char *)v4 == v33 )
              goto LABEL_16;
          }
          v5 = sub_4EBE70(0xCu, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
          if ( v5 != -8 )
            *(uint32_t *)(v5 + 8) = *(uint32_t *)(v4 + 16);
          sub_1901920(v5, &v34);
          v4 = sub_1904890(v4);
        }
        while ( (char *)v4 != v33 );
LABEL_16:
        v6 = v34;
        v7 = (char *)self + 96;
        goto LABEL_17;
      }
    }
    v29 = v1;
    v6 = (uint32_t *)(&v34);
    v7 = (char *)self + 96;
LABEL_17:
    while ( v6 != (uint32_t *)(&v34) )
    {
      v8 = v6;
      do
        v8 = (uint32_t *)*v8;
      while ( v8 != (uint32_t *)(uintptr_t)(&v34) );
      v27 = v6[2];
      sub_1901940(v6);
      v25 = (size_t)v6;
      v9 = v7;
      sub_4EBEE0(v25);
      v10 = *((char **)v29 + 25);
      if ( v10 != nullptr )
      {
        do
        {
          while ( v27 <= *((uint32_t *)v10 + 4) )
          {
            v9 = v10;
            v10 = *((char **)v10 + 2);
            if ( v10 == nullptr )
              goto LABEL_25;
          }
          v10 = *((char **)v10 + 3);
        }
        while ( v10 != nullptr );
LABEL_25:
        if ( v9 != v7 && v27 < *((uint32_t *)v9 + 4) )
          v9 = v7;
      }
      if ( *((uint32_t *)v9 + 5) != 0 )
      {
        Token = glwebtools::UrlConnectionCore::GetToken(*((glwebtools::UrlConnectionCore::Self **)v9 + 5));
        glwebtools::HandleManager::UnregisterNode(Instance, Token);
        v12 = *((void (****)(uint32_t))v9 + 5);
        if ( v12 != nullptr )
        {
          (**v12)(*((uint32_t *)v9 + 5));
          sub_4EBEE0(*((uint32_t *)v9 + 5));
        }
      }
      v13 = sub_1904AE0(v9, v7);
      sub_4EBEE0(v13);
      v6 = v34;
      --*((uint32_t *)v29 + 28);
    }
    v14 = (char *)v29 + 120;
    if ( *((glwebtools::GlWebToolsCore::Self **)v29 + 32) == (glwebtools::GlWebToolsCore::Self *)((char *)v29 + 120) )
    {
      v17 = (uint32_t *)(&v34);
    }
    else
    {
      v15 = *((uint32_t *)v29 + 32);
      do
      {
        while ( (*(uint8_t (**)(uint32_t))(**(uint32_t **)(v15 + 20) + 8))(*(uint32_t *)(v15 + 20)) == 0 )
        {
          v15 = sub_1904890(v15);
          if ( v14 == (char *)v15 )
            goto LABEL_39;
        }
        v16 = sub_4EBE70(0xCu, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
        if ( v16 != -8 )
          *(uint32_t *)(v16 + 8) = *(uint32_t *)(v15 + 16);
        sub_1901920(v16, &v34);
        v15 = sub_1904890(v15);
      }
      while ( v14 != (char *)v15 );
LABEL_39:
      v17 = v34;
    }
    while ( v17 != (uint32_t *)(uintptr_t)(&v34) )
    {
      v18 = v17;
      do
        v18 = (uint32_t *)*v18;
      while ( v18 != (uint32_t *)(uintptr_t)(&v34) );
      v28 = v17[2];
      sub_1901940(v17);
      v26 = (size_t)v17;
      v19 = (char *)v29 + 120;
      sub_4EBEE0(v26);
      v20 = *((char **)v29 + 31);
      if ( v20 != nullptr )
      {
        do
        {
          while ( v28 <= *((uint32_t *)v20 + 4) )
          {
            v19 = v20;
            v20 = *((char **)v20 + 2);
            if ( v20 == nullptr )
              goto LABEL_48;
          }
          v20 = *((char **)v20 + 3);
        }
        while ( v20 != nullptr );
LABEL_48:
        if ( v19 != v14 && v28 < *((uint32_t *)v19 + 4) )
          v19 = (char *)v29 + 120;
      }
      if ( *((uint32_t *)v19 + 5) != 0 )
      {
        v21 = glwebtools::UrlRequestCore::GetToken(*((glwebtools::UrlRequestCore::Self **)v19 + 5));
        glwebtools::HandleManager::UnregisterNode(Instance, v21);
        v22 = *((void (****)(uint32_t))v19 + 5);
        if ( v22 != nullptr )
        {
          (**v22)(*((uint32_t *)v19 + 5));
          sub_4EBEE0(*((uint32_t *)v19 + 5));
        }
      }
      v23 = sub_1904AE0(v19, v14);
      sub_4EBEE0(v23);
      v17 = v34;
      --*((uint32_t *)v29 + 34);
    }
    goto LABEL_57;
  }
  v30 = -2147483645;
  if ( (uint8_t)glwebtools::GlWebToolsCore::IsInitialized(self) != 0 )
    v30 = Instance == nullptr ? 0x80000006 : 0;
LABEL_57:
  glwebtools::Mutex::Unlock(v31);
  return v30;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebToolsCore::UpdateStatic  (binary VA: 0x13da880)
// Original: glwebtools::GlWebToolsCore::UpdateStatic
// ----------------------------------------------------------------------------
int glwebtools::GlWebToolsCore::UpdateStatic(glwebtools::Thread::Self **self)
{
  int result;
  unsigned int v2;

  if ( self != nullptr )
  {
    while ( *((uint8_t *)self + 224) != 0 )
    {
      glwebtools::GlWebToolsCore::Update((glwebtools::GlWebToolsCore::Self *)self);
      result = glwebtools::Thread::Sleep(*(self + 39), v2);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebToolsCore::WaitForCanDelete  (binary VA: 0x13da8d0)
// Original: glwebtools::GlWebToolsCore::_WaitForCanDelete
// ----------------------------------------------------------------------------
int glwebtools::GlWebToolsCore::WaitForCanDelete(glwebtools::GlWebToolsCore::Self *self, unsigned int a2)
{
  unsigned int Milliseconds;
  unsigned int v3;
  unsigned int v4;
  int64_t v5; // rax
  glwebtools::Thread::Self *i;
  glwebtools::SystemClock::Self *v8;
  unsigned int v9;
  uint64_t v10;

  v10 = 0;
LABEL_2:
  for ( i = (glwebtools::Thread::Self *)(self); (*(uint8_t (**)(void))(*(uint32_t *)self + 8))() == 0; i = (glwebtools::Thread::Self *)(self) )
  {
    if ( v10 >= a2 )
      break;
    Milliseconds = glwebtools::SystemClock::GetMilliseconds(i);
    v4 = v3;
    glwebtools::Thread::Sleep((glwebtools::Thread::Self *)&byte_9[1], v9);
    LODWORD(v5) = glwebtools::SystemClock::GetMilliseconds(v8);
    v10 += v5 - __PAIR64__(v4, Milliseconds);
    if ( *((uint8_t *)self + 152) != 0 )
      goto LABEL_2;
    glwebtools::GlWebToolsCore::Update(self);
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebToolsCore::ClearTaskGroups  (binary VA: 0x13daae0)
// Original: glwebtools::GlWebToolsCore::ClearTaskGroups
// ----------------------------------------------------------------------------
int glwebtools::GlWebToolsCore::ClearTaskGroups(glwebtools::GlWebToolsCore::Self *self)
{
  int v1;
  char *v2;

  v1 = *((uint32_t *)self + 5);
  v2 = (char *)self + 12;
  if ( (glwebtools::GlWebToolsCore::Self *)v1 != (glwebtools::GlWebToolsCore::Self *)((char *)self + 12) )
  {
    do
    {
      if ( *(uint32_t *)(v1 + 20) != 0 )
      {
        glwebtools::TaskGroup::Destroy(*(glwebtools::TaskGroup::Self **)(v1 + 20));
        sub_4EBEE0(*(uint32_t *)(v1 + 20));
      }
      v1 = sub_19048E0(v1);
    }
    while ( (char *)v1 != v2 );
  }
  g4_std::Rb_tree_string_pair_string_const_4d8b23::M_erase(
    (char *)self + 8,
    *((uint32_t *)self + 4));
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v2);
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(v2);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 7) = 0;
  return glwebtools::TaskGroup::Terminate((glwebtools::GlWebToolsCore::Self *)((char *)self + 32));
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebToolsCore::Terminate  (binary VA: 0x13dab70)
// Original: glwebtools::GlWebToolsCore::Terminate
// ----------------------------------------------------------------------------
int glwebtools::GlWebToolsCore::Terminate(glwebtools::GlWebToolsCore::Self *self)
{
  glwebtools::GlWebToolsCore::Self *v1;
  glwebtools::Thread::Self *v3;
  glwebtools::HandleManager::Self *Instance;
  glwebtools::UrlConnectionCore::Self **v5;
  unsigned int Token;
  glwebtools::UrlConnectionCore::Self *v7;
  glwebtools::UrlRequestCore::Self **v8;
  glwebtools::UrlRequestCore::Self **v9;
  unsigned int v10;
  glwebtools::UrlRequestCore::Self *v11;
  glwebtools::GlWebToolsCore::Self *v12;
  char *v13;
  char *v14;
  glwebtools::GlWebToolsCore::Self *v15;

  v1 = self;
  glwebtools::Mutex::Lock((glwebtools::GlWebToolsCore::Self *)((char *)self + 212));
  if ( (uint8_t)glwebtools::GlWebToolsCore::IsInitialized(self) != 0 )
  {
    *((uint8_t *)self + 225) = 0;
    glwebtools::GlWebToolsCore::ClearTaskGroups(self);
    v3 = *((glwebtools::Thread::Self **)self + 55);
    if ( v3 != nullptr )
    {
      *((uint8_t *)self + 224) = 0;
      glwebtools::Thread::Join(v3);
      if ( *((uint32_t *)self + 55) != 0 )
      {
        glwebtools::Thread::Destroy(*((glwebtools::Thread::Self **)self + 55));
        sub_4EBEE0(*((uint32_t *)self + 55));
      }
      *((uint32_t *)self + 55) = 0;
    }
    Instance = (glwebtools::HandleManager::Self *)glwebtools::HandleManager::GetInstance(v12);
    v5 = *((glwebtools::UrlConnectionCore::Self ***)self + 26);
    v13 = (char *)self + 96;
    if ( v5 != (glwebtools::UrlConnectionCore::Self **)((char *)self + 96) )
    {
      do
      {
        if ( Instance != nullptr )
        {
          Token = glwebtools::UrlConnectionCore::GetToken(v5[5]);
          glwebtools::HandleManager::UnregisterNode(Instance, Token);
        }
        if ( G4_VCALL<uint8_t>(v5[5], 8) != 0 )
        {
          v7 = v5[5];
          if ( v7 != nullptr )
          {
            (**(void (***)(glwebtools::UrlConnectionCore::Self *))v7)(v5[5]);
            sub_4EBEE0((int)(uintptr_t)(v5[5]));
          }
        }
        v5 = (glwebtools::UrlConnectionCore::Self **)sub_1904890(v5);
      }
      while ( (glwebtools::UrlConnectionCore::Self **)((char *)self + 96) != v5 );
      v1 = self;
    }
    g4_std::Rb_tree_unsigned_int_pair_unsign_2afaa6::M_erase(
      (char *)v1 + 92,
      *((uint32_t *)v1 + 25));
    v8 = *((glwebtools::UrlRequestCore::Self ***)v1 + 32);
    *((uint32_t *)v1 + 26) = (uint32_t)(uintptr_t)(v13);
    *((uint32_t *)v1 + 27) = (uint32_t)(uintptr_t)(v13);
    *((uint32_t *)v1 + 25) = 0;
    *((uint32_t *)v1 + 28) = 0;
    v14 = (char *)v1 + 120;
    if ( v8 != (glwebtools::UrlRequestCore::Self **)((char *)v1 + 120) )
    {
      v15 = v1;
      v9 = (glwebtools::UrlRequestCore::Self **)((char *)v1 + 120);
      do
      {
        if ( Instance != nullptr )
        {
          v10 = glwebtools::UrlRequestCore::GetToken(v8[5]);
          glwebtools::HandleManager::UnregisterNode(Instance, v10);
        }
        if ( G4_VCALL<uint8_t>(v8[5], 8) != 0 )
        {
          v11 = v8[5];
          if ( v11 != nullptr )
          {
            (**(void (***)(glwebtools::UrlRequestCore::Self *))v11)(v8[5]);
            sub_4EBEE0((int)(uintptr_t)(v8[5]));
          }
        }
        v8 = (glwebtools::UrlRequestCore::Self **)sub_1904890(v8);
      }
      while ( v9 != v8 );
      v1 = v15;
    }
    g4_std::Rb_tree_unsigned_int_pair_unsign_da1790::M_erase(
      (char *)v1 + 116,
      *((uint32_t *)v1 + 31));
    *((uint32_t *)v1 + 31) = 0;
    *((uint32_t *)v1 + 32) = (uint32_t)(uintptr_t)(v14);
    *((uint32_t *)v1 + 33) = (uint32_t)(uintptr_t)(v14);
    *((uint32_t *)v1 + 34) = 0;
    *((uint8_t *)v1 + 228) = 0;
  }
  glwebtools::Mutex::Unlock((glwebtools::GlWebToolsCore::Self *)((char *)self + 212));
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebToolsCore::Terminate  (binary VA: 0x13dad60)
// Original: glwebtools::GlWebToolsCore::Terminate
// ----------------------------------------------------------------------------
int glwebtools::GlWebToolsCore::Terminate(glwebtools::GlWebToolsCore::Self *self, unsigned int a2)
{
  glwebtools::Self *v2;

  v2 = nullptr;
  if ( (uint8_t)glwebtools::GlWebToolsCore::IsInitialized(self) != 0 )
  {
    v2 = (glwebtools::Self *)glwebtools::GlWebToolsCore::Shutdown(self);
    if ( glwebtools::IsOperationSuccess(v2) )
    {
      v2 = (glwebtools::Self *)glwebtools::GlWebToolsCore::WaitForCanDelete(self, a2);
      if ( glwebtools::IsOperationSuccess(v2) )
        return glwebtools::GlWebToolsCore::Terminate(self);
    }
  }
  return (int)(uintptr_t)(v2);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebToolsCore::Destroy  (binary VA: 0x13db000)
// Original: glwebtools::GlWebToolsCore::~GlWebToolsCore
// ----------------------------------------------------------------------------
void glwebtools::GlWebToolsCore::Destroy(glwebtools::GlWebToolsCore::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094C80);
  glwebtools::GlWebToolsCore::IsInitialized(self);
  glwebtools::GlWebToolsCore::Terminate(self, 0x1F4u);
  glwebtools::Curl::Destroy((glwebtools::GlWebToolsCore::Self *)((char *)self + 227));
  glwebtools::OpenSSL::Destroy((glwebtools::GlWebToolsCore::Self *)((char *)self + 226));
  glwebtools::Mutex::Destroy((glwebtools::GlWebToolsCore::Self *)((char *)self + 212));
  v1 = *((uint32_t *)self + 52);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  v2 = *((uint32_t *)self + 51);
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v2 - 12));
  }
  v3 = *((uint32_t *)self + 50);
  if ( (uint32_t *)(v3 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v3 - 12));
  }
  v4 = *((uint32_t *)self + 49);
  if ( (uint32_t *)(v4 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v4 - 12));
  }
  v5 = *((uint32_t *)self + 48);
  if ( (uint32_t *)(v5 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v5 - 12));
  }
  v6 = *((uint32_t *)self + 47);
  if ( (uint32_t *)(v6 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v6 - 12));
  }
  v7 = *((uint32_t *)self + 46);
  if ( (uint32_t *)(v7 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v7 - 12));
  }
  if ( *((uint32_t *)self + 35) != 0 )
    sub_4EBEE0(*((uint32_t *)self + 35));
  g4_std::Rb_tree_unsigned_int_pair_unsign_da1790::M_erase(
    (char *)self + 116,
    *((uint32_t *)self + 31));
  g4_std::Rb_tree_unsigned_int_pair_unsign_2afaa6::M_erase(
    (char *)self + 92,
    *((uint32_t *)self + 25));
  glwebtools::TaskGroup::Destroy((glwebtools::GlWebToolsCore::Self *)((char *)self + 32));
  g4_std::Rb_tree_string_pair_string_const_4d8b23::M_erase(
    (char *)self + 8,
    *((uint32_t *)self + 4));
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2049608);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebToolsCore::Destroy_ea13db250  (binary VA: 0x13db250)
// Original: glwebtools::GlWebToolsCore::~GlWebToolsCore
// ----------------------------------------------------------------------------
void glwebtools::GlWebToolsCore::Destroy_ea13db250(glwebtools::GlWebToolsCore::Self *self)
{
  glwebtools::GlWebToolsCore::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebToolsCore::CreateUrlConnection  (binary VA: 0x13db290)
// Original: glwebtools::GlWebToolsCore::CreateUrlConnection
// ----------------------------------------------------------------------------
glwebtools::UrlConnection::Self * glwebtools::GlWebToolsCore::CreateUrlConnection(glwebtools::UrlConnection::Self *a1, glwebtools::GlWebToolsCore::Self *a2, int *a3)
{
  int TaskGroup;
  glwebtools::UrlConnectionCore::Self *v4;
  void *v5;
  void *v6;
  void *v7;
  char *v8;
  void *v9;
  void *v10;
  void *v11;
  char *v12;
  uint32_t *v14;
  uint32_t *v15;
  typedef glwebtools::HandleManager::Self *_g4_t_v16;
  typedef glwebtools::HandleManager::Self *_g4_t_v17;
  typedef glwebtools::TaskGroup::Self *_g4_t_NextCounterValue;
  typedef glwebtools::TaskGroup::Self *_g4_t_v19;
  typedef glwebtools::HandleManager::Self *_g4_t_Instance;
  typedef uint32_t *_g4_t_v21;
  typedef unsigned int _g4_t_v22;
  typedef uint8_t _g4_t_v23[8];
  typedef uint8_t _g4_t_v24[8];
  typedef glwebtools::UrlConnectionCore::Self *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef char _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef void *_g4_t_v31[3];
  typedef char _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef char _g4_t_v35;
  typedef char _g4_t_v36;
  typedef int _g4_t_v37;
  typedef char _g4_t_v38;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v17)) > _g4_s1 ? (0u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_NextCounterValue)) > _g4_s2 ? (8u + sizeof(_g4_t_NextCounterValue)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v19)) > _g4_s3 ? (36u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_Instance)) > _g4_s4 ? (40u + sizeof(_g4_t_Instance)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v21)) > _g4_s5 ? (44u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v22)) > _g4_s6 ? (64u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v23)) > _g4_s7 ? (68u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v24)) > _g4_s8 ? (76u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (84u + sizeof(_g4_t_v25)) > _g4_s9 ? (84u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (88u + sizeof(_g4_t_v26)) > _g4_s10 ? (88u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (92u + sizeof(_g4_t_v27)) > _g4_s11 ? (92u + sizeof(_g4_t_v27)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v28)) > _g4_s12 ? (96u + sizeof(_g4_t_v28)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v29)) > _g4_s13 ? (100u + sizeof(_g4_t_v29)) : _g4_s13,
    _g4_s15 = (104u + sizeof(_g4_t_v30)) > _g4_s14 ? (104u + sizeof(_g4_t_v30)) : _g4_s14,
    _g4_s16 = (108u + sizeof(_g4_t_v31)) > _g4_s15 ? (108u + sizeof(_g4_t_v31)) : _g4_s15,
    _g4_s17 = (120u + sizeof(_g4_t_v32)) > _g4_s16 ? (120u + sizeof(_g4_t_v32)) : _g4_s16,
    _g4_s18 = (124u + sizeof(_g4_t_v33)) > _g4_s17 ? (124u + sizeof(_g4_t_v33)) : _g4_s17,
    _g4_s19 = (128u + sizeof(_g4_t_v34)) > _g4_s18 ? (128u + sizeof(_g4_t_v34)) : _g4_s18,
    _g4_s20 = (132u + sizeof(_g4_t_v35)) > _g4_s19 ? (132u + sizeof(_g4_t_v35)) : _g4_s19,
    _g4_s21 = (133u + sizeof(_g4_t_v36)) > _g4_s20 ? (133u + sizeof(_g4_t_v36)) : _g4_s20,
    _g4_s22 = (136u + sizeof(_g4_t_v37)) > _g4_s21 ? (136u + sizeof(_g4_t_v37)) : _g4_s21,
    _g4_s23 = (140u + sizeof(_g4_t_v38)) > _g4_s22 ? (140u + sizeof(_g4_t_v38)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_NextCounterValue &NextCounterValue = *reinterpret_cast<_g4_t_NextCounterValue *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 36u);
  _g4_t_Instance &Instance = *reinterpret_cast<_g4_t_Instance *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 64u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 68u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 76u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 84u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 88u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 92u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 96u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 100u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 104u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 108u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 120u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 124u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 128u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 132u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 133u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 136u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 140u);

  glwebtools::Mutex::Lock((glwebtools::GlWebToolsCore::Self *)((char *)a2 + 212));
  Instance = (glwebtools::HandleManager::Self *)glwebtools::HandleManager::GetInstance(v16);
  if ( (uint8_t)glwebtools::GlWebToolsCore::IsInitialized(a2) == 0
    || Instance == nullptr
    || (uint8_t)glwebtools::GlWebToolsCore::ShutdownInProgress(a2) != 0 )
  {
    goto LABEL_23;
  }
  v27 = *a3;
  v28 = *((uint8_t *)a3 + 4);
  v29 = a3[2];
  v30 = a3[3];
  g4_std::string::construct_copy(v31, a3 + 4);
  v31[1] = (void *)a3[5];
  v31[2] = (void *)a3[6];
  v32 = *((uint8_t *)a3 + 28);
  g4_std::string::construct_copy(&v33, a3 + 8);
  g4_std::string::construct_copy(&v34, a3 + 9);
  v35 = *((uint8_t *)a3 + 40);
  v36 = *((uint8_t *)a3 + 41);
  g4_std::string::construct_copy(&v37, a3 + 11);
  v38 = *((uint8_t *)a3 + 48);
  if ( *(uint32_t *)(v34 - 12) == 0 )
    g4_std::string::assign_str(&v34, (char *)a2 + 208);
  TaskGroup = (int)(uintptr_t)(a2) + 32;
  if ( v35 != 0 || (TaskGroup = glwebtools::GlWebToolsCore::GetTaskGroup((int)(uintptr_t)(a2), v31)) != 0 )
  {
    v19 = (glwebtools::TaskGroup::Self *)TaskGroup;
    v4 = (glwebtools::UrlConnectionCore::Self *)sub_4EBE70(0x70u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
    glwebtools::UrlConnectionCore::Construct(v4, (const glwebtools::UrlConnection::CreationSettings::Self *)&v27, v19);
    if ( v4 != nullptr )
    {
      glwebtools::UrlConnection::Construct((glwebtools::UrlConnection::Self *)v23);
      NextCounterValue = (glwebtools::TaskGroup::Self *)glwebtools::HandleManager::GetNextCounterValue(v17);
      v22 = 0;
      if ( (uint8_t)glwebtools::HandleManager::RegisterNode(
                              Instance,
                              glwebtools::GlWebToolsCore::s_urlConnectionHandleTypeId,
                              (unsigned int)(uintptr_t)(NextCounterValue),
                              v4,
                              &v22) != 0 )
      {
        glwebtools::UrlConnectionCore::SetToken(v4, v22);
        glwebtools::UrlConnection::Construct((glwebtools::UrlConnection::Self *)v24, v22);
        glwebtools::UrlConnection::opAssign((glwebtools::UrlConnection::Self *)v23, (const glwebtools::UrlConnection::Self *)v24);
        glwebtools::UrlConnection::Destroy((glwebtools::UrlConnection::Self *)v24);
        glwebtools::UrlConnectionCore::SetIntanceName(v4, (char *)a2 + 204);
        v14 = *((uint32_t **)a2 + 25);
        v15 = (uint32_t *)((char *)a2 + 96);
        if ( v14 == nullptr )
          goto LABEL_34;
        do
        {
          while ( (unsigned int)(uintptr_t)(v4) <= v14[4] )
          {
            v15 = v14;
            v14 = (uint32_t *)v14[2];
            if ( v14 == nullptr )
              goto LABEL_32;
          }
          v14 = (uint32_t *)v14[3];
        }
        while ( v14 != nullptr );
LABEL_32:
        if ( (uint32_t *)((char *)a2 + 96) == v15 || (unsigned int)(uintptr_t)(v4) < v15[4] )
        {
LABEL_34:
          v25 = v4;
          v26 = 0;
          g4_std::Rb_tree_unsigned_int_pair_unsign_2afaa6::M_insert_unique((int)(uintptr_t)&v21, (int)(uintptr_t)a2 + 92, (int *)&v25);
          v15 = v21;
        }
        v15[5] = (uint32_t)(uintptr_t)(v4);
      }
      else
      {
        (**(void (***)(glwebtools::UrlConnectionCore::Self *))v4)(v4);
        sub_4EBEE0((int)(uintptr_t)(v4));
      }
      glwebtools::UrlConnection::Construct(a1, (const glwebtools::UrlConnection::Self *)v23);
      glwebtools::UrlConnection::Destroy((glwebtools::UrlConnection::Self *)v23);
      goto LABEL_11;
    }
    v9 = (void *)(v37 - 12);
    if ( (uint32_t *)(v37 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v9);
    }
    v10 = (void *)(v34 - 12);
    if ( (uint32_t *)(v34 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v10);
    }
    v11 = (void *)(v33 - 12);
    if ( (uint32_t *)(v33 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v11);
    }
    v12 = (char *)v31[0] - 12;
    if ( (char *)v31[0] - 12 != (char *)dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)v31[0] - 1, 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v12);
    }
LABEL_23:
    glwebtools::UrlConnection::Construct(a1);
    goto LABEL_24;
  }
  glwebtools::UrlConnection::Construct(a1);
LABEL_11:
  v5 = (void *)(v37 - 12);
  if ( (uint32_t *)(v37 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  v6 = (void *)(v34 - 12);
  if ( (uint32_t *)(v34 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  v7 = (void *)(v33 - 12);
  if ( (uint32_t *)(v33 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  v8 = (char *)v31[0] - 12;
  if ( (char *)v31[0] - 12 != (char *)dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)v31[0] - 1, 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
LABEL_24:
  glwebtools::Mutex::Unlock((glwebtools::GlWebToolsCore::Self *)((char *)a2 + 212));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebToolsCore::CreateUrlConnection  (binary VA: 0x13db7e0)
// Original: glwebtools::GlWebToolsCore::CreateUrlConnection
// ----------------------------------------------------------------------------
glwebtools::GlWebToolsCore::Self * glwebtools::GlWebToolsCore::CreateUrlConnection(glwebtools::GlWebToolsCore::Self *self, glwebtools::GlWebToolsCore::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  typedef int _g4_t_v7[4];
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v8)) > _g4_s1 ? (28u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v9)) > _g4_s2 ? (44u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v10)) > _g4_s3 ? (48u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v11)) > _g4_s4 ? (56u + sizeof(_g4_t_v11)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 44u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 48u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 56u);

  glwebtools::UrlConnection::CreationSettings::Construct((glwebtools::UrlConnection::CreationSettings::Self *)v7);
  glwebtools::GlWebToolsCore::CreateUrlConnection(self, a2, v7);
  v2 = (void *)(v11 - 12);
  if ( (uint32_t *)(v11 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  v3 = (void *)(v10 - 12);
  if ( (uint32_t *)(v10 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  v4 = (void *)(v9 - 12);
  if ( (uint32_t *)(v9 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v5 = (void *)(v8 - 12);
  if ( (uint32_t *)(v8 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebToolsCore::CreateUrlRequest  (binary VA: 0x13db960)
// Original: glwebtools::GlWebToolsCore::CreateUrlRequest
// ----------------------------------------------------------------------------
glwebtools::GlWebToolsCore::Self * glwebtools::GlWebToolsCore::CreateUrlRequest(glwebtools::GlWebToolsCore::Self *self, glwebtools::UrlRequest::CreationSettings *a2, glwebtools::UrlRequest::CreationSettings *a3)
{
  glwebtools::UrlRequestCore::Self *v3;
  uint32_t *v5;
  uint32_t *v6;
  typedef glwebtools::HandleManager::Self *_g4_t_v7;
  typedef glwebtools::HandleManager::Self *_g4_t_v8;
  typedef unsigned int _g4_t_NextCounterValue;
  typedef glwebtools::HandleManager::Self *_g4_t_Instance;
  typedef uint32_t *_g4_t_v11;
  typedef unsigned int _g4_t_v12;
  typedef uint8_t _g4_t_v13[8];
  typedef uint8_t _g4_t_v14[8];
  typedef glwebtools::UrlRequestCore::Self *_g4_t_v15;
  typedef int _g4_t_v16;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v8)) > _g4_s1 ? (0u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_NextCounterValue)) > _g4_s2 ? (8u + sizeof(_g4_t_NextCounterValue)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_Instance)) > _g4_s3 ? (40u + sizeof(_g4_t_Instance)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v11)) > _g4_s4 ? (44u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v12)) > _g4_s5 ? (52u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v13)) > _g4_s6 ? (56u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v14)) > _g4_s7 ? (64u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v15)) > _g4_s8 ? (72u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v16)) > _g4_s9 ? (76u + sizeof(_g4_t_v16)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_NextCounterValue &NextCounterValue = *reinterpret_cast<_g4_t_NextCounterValue *>(_g4_sf + 8u);
  _g4_t_Instance &Instance = *reinterpret_cast<_g4_t_Instance *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 52u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 56u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 64u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 72u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 76u);

  glwebtools::Mutex::Lock((glwebtools::UrlRequest::CreationSettings *)((char *)a2 + 212));
  Instance = (glwebtools::HandleManager::Self *)glwebtools::HandleManager::GetInstance(v7);
  if ( (uint8_t)glwebtools::GlWebToolsCore::IsInitialized((glwebtools::GlWebToolsCore::Self *)(a2)) != 0
    && Instance != nullptr
    && (uint8_t)glwebtools::GlWebToolsCore::ShutdownInProgress((glwebtools::GlWebToolsCore::Self *)(a2)) == 0
    && (v3 = (glwebtools::UrlRequestCore::Self *)sub_4EBE70(0x34u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0),
        glwebtools::UrlRequestCore::Construct(v3, a3),
        v3 != nullptr) )
  {
    glwebtools::UrlRequest::Construct((glwebtools::UrlRequest::Self *)v13);
    NextCounterValue = glwebtools::HandleManager::GetNextCounterValue(v8);
    v12 = 0;
    if ( (uint8_t)glwebtools::HandleManager::RegisterNode(
                            Instance,
                            glwebtools::GlWebToolsCore::s_urlRequestHandleTypeId,
                            NextCounterValue,
                            v3,
                            &v12) != 0 )
    {
      glwebtools::UrlRequestCore::SetToken(v3, v12);
      glwebtools::UrlRequest::Construct((glwebtools::UrlRequest::Self *)v14, v12);
      glwebtools::UrlRequest::opAssign((glwebtools::UrlRequest::Self *)v13, (const glwebtools::UrlRequest::Self *)v14);
      glwebtools::UrlRequest::Destroy((glwebtools::UrlRequest::Self *)v14);
      v5 = *((uint32_t **)a2 + 31);
      v6 = (uint32_t *)((char *)a2 + 120);
      if ( v5 == nullptr )
        goto LABEL_18;
      do
      {
        if ( (unsigned int)(uintptr_t)(v3) <= v5[4] )
        {
          v6 = v5;
          v5 = (uint32_t *)v5[2];
        }
        else
        {
          v5 = (uint32_t *)v5[3];
        }
      }
      while ( v5 != nullptr );
      if ( (uint32_t *)((char *)a2 + 120) == v6 || (unsigned int)(uintptr_t)(v3) < v6[4] )
      {
LABEL_18:
        v15 = v3;
        v16 = 0;
        g4_std::Rb_tree_unsigned_int_pair_unsign_da1790::M_insert_unique((int)(uintptr_t)&v11, (int)(uintptr_t)a2 + 116, (int *)&v15);
        v6 = v11;
      }
      v6[5] = (uint32_t)(uintptr_t)(v3);
    }
    else
    {
      (**(void (***)(glwebtools::UrlRequestCore::Self *))v3)(v3);
      sub_4EBEE0((int)(uintptr_t)(v3));
    }
    glwebtools::UrlRequest::Construct(self, (const glwebtools::UrlRequest::Self *)v13);
    glwebtools::UrlRequest::Destroy((glwebtools::UrlRequest::Self *)v13);
  }
  else
  {
    glwebtools::UrlRequest::Construct(self);
  }
  glwebtools::Mutex::Unlock((glwebtools::UrlRequest::CreationSettings *)((char *)a2 + 212));
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebToolsCore::CreateUrlRequest  (binary VA: 0x13dbbe0)
// Original: glwebtools::GlWebToolsCore::CreateUrlRequest
// ----------------------------------------------------------------------------
glwebtools::GlWebToolsCore::Self * glwebtools::GlWebToolsCore::CreateUrlRequest(glwebtools::GlWebToolsCore::Self *self, glwebtools::UrlRequest::CreationSettings *a2)
{
  void *v2;
  uint32_t v4[2];

  v4[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4[1] = 0;
  glwebtools::GlWebToolsCore::CreateUrlRequest(self, a2, (glwebtools::UrlRequest::CreationSettings *)v4);
  v2 = (void *)(v4[0] - 12);
  if ( (uint32_t *)(v4[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebToolsCore::AddTaskGroup  (binary VA: 0x13dbce0)
// Original: glwebtools::GlWebToolsCore::AddTaskGroup
// ----------------------------------------------------------------------------
int glwebtools::GlWebToolsCore::AddTaskGroup(int a1, void **a2, glwebtools::ThreadPool::CreationSettings::Self *a3)
{
  int v3;
  size_t v4;
  size_t v5;
  size_t n;
  int v7;
  int v8;
  size_t v9;
  size_t v10;
  int v11;
  int v12;
  int v13;
  glwebtools::Self *v15;
  int v16;
  size_t v17;
  size_t v18;
  size_t v19;
  int v20;
  int v21;
  size_t v22;
  size_t v23;
  int v24;
  int v25;
  void *v26;
  typedef void *_g4_t_s2;
  typedef void *_g4_t_s1;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef glwebtools::TaskGroup::Self *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef uint32_t _g4_t_v34[9];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_s2)) > _g4_s0 ? (12u + sizeof(_g4_t_s2)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_s1)) > _g4_s1 ? (12u + sizeof(_g4_t_s1)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v29)) > _g4_s2 ? (16u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v30)) > _g4_s3 ? (16u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v31)) > _g4_s4 ? (20u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v32)) > _g4_s5 ? (24u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v33)) > _g4_s6 ? (28u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v34)) > _g4_s7 ? (40u + sizeof(_g4_t_v34)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 12u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 28u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 40u);

  v31 = a1 + 12;
  v3 = *(uint32_t *)(a1 + 16);
  if ( v3 != 0 )
  {
    s2 = *a2;
    v4 = *((uint32_t *)*a2 - 3);
    v29 = a1 + 12;
    do
    {
      while ( 1 )
      {
        v5 = *(uint32_t *)(*(uint32_t *)(v3 + 16) - 12);
        n = v5;
        if ( v4 <= v5 )
          n = v4;
        v7 = v5 - v4;
        v8 = memcmp(*(const void **)(v3 + 16), s2, n);
        if ( v8 != 0 )
          v7 = v8;
        if ( v7 < 0 )
          break;
        v29 = v3;
        v3 = *(uint32_t *)(v3 + 8);
        if ( v3 == 0 )
          goto LABEL_10;
      }
      v3 = *(uint32_t *)(v3 + 12);
    }
    while ( v3 != 0 );
LABEL_10:
    if ( v29 != v31 )
    {
      v9 = *(uint32_t *)(*(uint32_t *)(v29 + 16) - 12);
      v10 = v9;
      if ( v4 <= v9 )
        v10 = v4;
      v11 = v4 - v9;
      v12 = -2147483646;
      v13 = memcmp(s2, *(const void **)(v29 + 16), v10);
      if ( v13 == 0 )
        v13 = v11;
      if ( v13 >= 0 )
        return v12;
    }
  }
  v32 = (glwebtools::TaskGroup::Self *)sub_4EBE70(0x3Cu, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
  glwebtools::TaskGroup::Construct(v32);
  if ( v32 == nullptr )
    return -2147483643;
  v15 = (glwebtools::Self *)glwebtools::TaskGroup::Initialize(v32, a3);
  if ( glwebtools::IsOperationSuccess(v15) )
  {
    v16 = *(uint32_t *)(a1 + 16);
    if ( v16 == 0 )
      goto LABEL_36;
    s1 = *a2;
    v17 = *((uint32_t *)*a2 - 3);
    v30 = a1 + 12;
    do
    {
      while ( 1 )
      {
        v18 = v17;
        v19 = *(uint32_t *)(*(uint32_t *)(v16 + 16) - 12);
        if ( v19 <= v17 )
          v18 = *(uint32_t *)(*(uint32_t *)(v16 + 16) - 12);
        v20 = v19 - v17;
        v21 = memcmp(*(const void **)(v16 + 16), s1, v18);
        if ( v21 != 0 )
          v20 = v21;
        if ( v20 < 0 )
          break;
        v30 = v16;
        v16 = *(uint32_t *)(v16 + 8);
        if ( v16 == 0 )
          goto LABEL_29;
      }
      v16 = *(uint32_t *)(v16 + 12);
    }
    while ( v16 != 0 );
LABEL_29:
    if ( v31 == v30 )
      goto LABEL_36;
    v22 = v17;
    v23 = *(uint32_t *)(*(uint32_t *)(v30 + 16) - 12);
    if ( v23 <= v17 )
      v22 = *(uint32_t *)(*(uint32_t *)(v30 + 16) - 12);
    v24 = v17 - v23;
    v25 = memcmp(s1, *(const void **)(v30 + 16), v22);
    if ( v25 == 0 )
      v25 = v24;
    if ( v25 < 0 )
    {
LABEL_36:
      g4_std::string::construct_copy(v34, a2);
      v34[1] = 0;
      g4_std::Rb_tree_string_pair_string_const_4d8b23::M_insert_unique((int)(uintptr_t)&v33, a1 + 8, (void **)v34);
      v30 = v33;
      v26 = (void *)(v34[0] - 12);
      if ( (uint32_t *)(v34[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v34[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v26);
      }
    }
    *(uint32_t *)(v30 + 20) = (uint32_t)(uintptr_t)(v32);
    return 0;
  }
  else
  {
    glwebtools::TaskGroup::Destroy(v32);
    sub_4EBEE0((int)(uintptr_t)(v32));
    return (int)(uintptr_t)(v15);
  }
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebToolsCore::AddTaskGroup  (binary VA: 0x13dbff0)
// Original: glwebtools::GlWebToolsCore::AddTaskGroup
// ----------------------------------------------------------------------------
int glwebtools::GlWebToolsCore::AddTaskGroup(int a1, void **a2)
{
  uint32_t v3[6];

  glwebtools::ThreadPool::CreationSettings::Construct((glwebtools::ThreadPool::CreationSettings::Self *)v3);
  v3[0] = 1;
  v3[1] = 3;
  v3[2] = 1;
  v3[3] = 5000;
  v3[4] = 5000;
  return glwebtools::GlWebToolsCore::AddTaskGroup(a1, a2, (glwebtools::ThreadPool::CreationSettings::Self *)v3);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebToolsCore::AddDefaultTaskGroup  (binary VA: 0x13dc0b0)
// Original: glwebtools::GlWebToolsCore::AddDefaultTaskGroup
// ----------------------------------------------------------------------------
int glwebtools::GlWebToolsCore::AddDefaultTaskGroup(glwebtools::GlWebToolsCore::Self *self)
{
  int result;
  void *v2;
  typedef int _g4_t_v3;
  typedef uint16_t _g4_t_v4[3];
  typedef uint32_t _g4_t_v5[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (22u + sizeof(_g4_t_v4)) > _g4_s1 ? (22u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v5)) > _g4_s2 ? (28u + sizeof(_g4_t_v5)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 22u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 28u);

  glwebtools::ThreadPool::CreationSettings::Construct((glwebtools::ThreadPool::CreationSettings::Self *)v5);
  std::memcpy(v5, (char *)self + 164, 20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v4[1]), "GlWebTools Default TaskGroup", (int)(uintptr_t)(v4));
  result = glwebtools::GlWebToolsCore::AddTaskGroup(
             (int)(uintptr_t)(self),
             (void **)&v4[1],
             (glwebtools::ThreadPool::CreationSettings::Self *)v5);
  v2 = (void *)(*(uint32_t *)&v4[1] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v4[1] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v4[1] - 4), 0xFFFFFFFF) <= 0 )
  {
    v3 = result;
    g4_std::string::Rep::M_destroy(v2);
    return v3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::GlWebToolsCore::Initialize  (binary VA: 0x13dc190)
// Original: glwebtools::GlWebToolsCore::Initialize
// ----------------------------------------------------------------------------
int glwebtools::GlWebToolsCore::Initialize(glwebtools::GlWebToolsCore::Self *self, const glwebtools::GlWebTools::CreationSettings::Self *a2)
{
  int v2;
  uint32_t *v4;
  uint32_t *v5;
  typedef unsigned int *_g4_t_v6;
  typedef glwebtools::Thread::Self *_g4_t_v7;
  typedef void *_g4_t_v8;
  typedef uint32_t *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint32_t _g4_t_v12[5];
  typedef int (**_g4_t_v13)(int);
  typedef int _g4_t_v14;
  typedef int (**_g4_t_v15)(int);
  typedef uint32_t _g4_t_v16[3];
  typedef int _g4_t_v17;
  typedef void *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint8_t _g4_t_v21[4];
  typedef int _g4_t_v22;
  typedef uint32_t *_g4_t_v23;
  typedef uint32_t _g4_t_v24[29];
  typedef char _g4_t_v25;
  typedef char _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v7)) > _g4_s1 ? (32u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v8)) > _g4_s2 ? (40u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (68u + sizeof(_g4_t_v9)) > _g4_s3 ? (68u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (72u + sizeof(_g4_t_v10)) > _g4_s4 ? (72u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (76u + sizeof(_g4_t_v11)) > _g4_s5 ? (76u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v12)) > _g4_s6 ? (80u + sizeof(_g4_t_v12)) : _g4_s6,
    _g4_s8 = (100u + sizeof(_g4_t_v13)) > _g4_s7 ? (100u + sizeof(_g4_t_v13)) : _g4_s7,
    _g4_s9 = (104u + sizeof(_g4_t_v14)) > _g4_s8 ? (104u + sizeof(_g4_t_v14)) : _g4_s8,
    _g4_s10 = (108u + sizeof(_g4_t_v15)) > _g4_s9 ? (108u + sizeof(_g4_t_v15)) : _g4_s9,
    _g4_s11 = (112u + sizeof(_g4_t_v16)) > _g4_s10 ? (112u + sizeof(_g4_t_v16)) : _g4_s10,
    _g4_s12 = (124u + sizeof(_g4_t_v17)) > _g4_s11 ? (124u + sizeof(_g4_t_v17)) : _g4_s11,
    _g4_s13 = (128u + sizeof(_g4_t_v18)) > _g4_s12 ? (128u + sizeof(_g4_t_v18)) : _g4_s12,
    _g4_s14 = (132u + sizeof(_g4_t_v19)) > _g4_s13 ? (132u + sizeof(_g4_t_v19)) : _g4_s13,
    _g4_s15 = (136u + sizeof(_g4_t_v20)) > _g4_s14 ? (136u + sizeof(_g4_t_v20)) : _g4_s14,
    _g4_s16 = (140u + sizeof(_g4_t_v21)) > _g4_s15 ? (140u + sizeof(_g4_t_v21)) : _g4_s15,
    _g4_s17 = (144u + sizeof(_g4_t_v22)) > _g4_s16 ? (144u + sizeof(_g4_t_v22)) : _g4_s16,
    _g4_s18 = (148u + sizeof(_g4_t_v23)) > _g4_s17 ? (148u + sizeof(_g4_t_v23)) : _g4_s17,
    _g4_s19 = (152u + sizeof(_g4_t_v24)) > _g4_s18 ? (152u + sizeof(_g4_t_v24)) : _g4_s18,
    _g4_s20 = (268u + sizeof(_g4_t_v25)) > _g4_s19 ? (268u + sizeof(_g4_t_v25)) : _g4_s19,
    _g4_s21 = (269u + sizeof(_g4_t_v26)) > _g4_s20 ? (269u + sizeof(_g4_t_v26)) : _g4_s20,
    _g4_s22 = (272u + sizeof(_g4_t_v27)) > _g4_s21 ? (272u + sizeof(_g4_t_v27)) : _g4_s21,
    _g4_s23 = (276u + sizeof(_g4_t_v28)) > _g4_s22 ? (276u + sizeof(_g4_t_v28)) : _g4_s22,
    _g4_s24 = (280u + sizeof(_g4_t_v29)) > _g4_s23 ? (280u + sizeof(_g4_t_v29)) : _g4_s23,
    _g4_s25 = (284u + sizeof(_g4_t_v30)) > _g4_s24 ? (284u + sizeof(_g4_t_v30)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 32u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 40u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 68u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 72u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 76u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 80u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 100u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 104u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 108u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 112u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 124u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 128u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 132u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 136u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 140u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 144u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 148u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 152u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 268u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 269u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 272u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 276u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 280u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 284u);

  v2 = -2147483645;
  if ( *((uint8_t *)self + 228) != 0 )
    return v2;
  if ( glwebtools::GlWebToolsCore::s_urlConnectionHandleTypeId == 0 )
  {
    LOWORD(v2) = 16;
    if ( (uint8_t)glwebtools::HandleManager::RegisterType(
                            (glwebtools::HandleManager::Self *)&glwebtools::GlWebToolsCore::s_urlConnectionHandleTypeId,
                            v6) == 0 )
      return v2;
  }
  if ( glwebtools::GlWebToolsCore::s_urlRequestHandleTypeId == 0 )
  {
    v2 = -2147483643;
    if ( (uint8_t)glwebtools::HandleManager::RegisterType(
                            (glwebtools::HandleManager::Self *)&glwebtools::GlWebToolsCore::s_urlRequestHandleTypeId,
                            v6) == 0 )
      return v2;
  }
  g4_std::string::clear((char *)self + 208, 0, *(uint32_t *)(*((uint32_t *)self + 52) - 12), 0);
  if ( *(uint32_t *)(*((uint32_t *)a2 + 8) - 12) != 0 )
  {
    g4_std::string::append_str((char *)self + 208, (char *)a2 + 32);
    g4_std::string::append((int)(uintptr_t)(self) + 208, "/", 1u);
    g4_std::string::append_str((char *)self + 208, (char *)a2 + 36);
  }
  g4_std::string::append((int)(uintptr_t)(self) + 208, " GlWebTools/", 0xCu);
  g4_std::string::append((int)(uintptr_t)(self) + 208, "2.0", 3u);
  g4_std::string::append((int)(uintptr_t)(self) + 208, " ", 1u);
  g4_std::string::append_str((char *)self + 208, (char *)a2 + 40);
  g4_std::string::append((int)(uintptr_t)(self) + 208, "/", 1u);
  g4_std::string::append_str((char *)self + 208, (char *)a2 + 44);
  g4_std::string::append((int)(uintptr_t)(self) + 208, " (", 2u);
  g4_std::string::append_str((char *)self + 208, (char *)a2 + 48);
  g4_std::string::append((int)(uintptr_t)(self) + 208, ")", 1u);
  v2 = -2147483641;
  if ( (uint8_t)glwebtools::OpenSSL::IsInitialized((glwebtools::GlWebToolsCore::Self *)((char *)self + 226)) == 0 )
    return v2;
  *((uint8_t *)self + 152) = *(uint8_t *)a2;
  *((uint32_t *)self + 39) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 40) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 41) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 42) = *((uint32_t *)a2 + 4);
  *((uint32_t *)self + 43) = *((uint32_t *)a2 + 5);
  *((uint32_t *)self + 44) = *((uint32_t *)a2 + 6);
  *((uint32_t *)self + 45) = *((uint32_t *)a2 + 7);
  g4_std::string::assign_str((char *)self + 184, (char *)a2 + 32);
  g4_std::string::assign_str((char *)self + 188, (char *)a2 + 36);
  g4_std::string::assign_str((char *)self + 192, (char *)a2 + 40);
  g4_std::string::assign_str((char *)self + 196, (char *)a2 + 44);
  g4_std::string::assign_str((char *)self + 200, (char *)a2 + 48);
  g4_std::string::assign_str((char *)self + 204, (char *)a2 + 52);
  if ( *((uint8_t *)self + 152) != 0 )
  {
    v7 = (glwebtools::Thread::Self *)sub_4EBE70(0x18u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
    glwebtools::Thread::Construct(
      v7,
      (void (*)(void *, void *))glwebtools::GlWebToolsCore::UpdateStatic,
      self,
      nullptr,
      "GlWebToolsThread");
    *((uint32_t *)self + 55) = (uint32_t)(uintptr_t)(v7);
    if ( v7 == nullptr )
      return v2;
    *((uint8_t *)self + 224) = 1;
    glwebtools::Thread::Start(v7);
  }
  v2 = glwebtools::GlWebToolsCore::AddDefaultTaskGroup(self);
  if ( !glwebtools::IsOperationSuccess((glwebtools::Self *)v2) )
    return v2;
  glwebtools::ThreadPool::CreationSettings::Construct((glwebtools::ThreadPool::CreationSettings::Self *)v12);
  v12[0] = 0;
  v12[1] = -1;
  v12[3] = 0;
  v12[4] = 1000;
  glwebtools::TaskGroup::Initialize(
    (glwebtools::GlWebToolsCore::Self *)((char *)self + 32),
    (const glwebtools::ThreadPool::CreationSettings::Self *)v12);
  if ( *(uint32_t *)(*((uint32_t *)self + 51) - 12) == 0 )
  {
    sub_1900810(v24);
    v24[28] = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v24[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    v30 = 0;
    v13 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
    *(int (***)(int))((char *)&v13 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
    v14 = 0;
    sub_19119D0((char *)&v13 + (uint32_t)(uintptr_t)(*(v13 - 3)), 0);
    v15 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
    *(uint32_t *)((char *)&v16[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
    sub_19119D0((char *)&v16[-1] + (uint32_t)(uintptr_t)(*(v15 - 3)), 0);
    v13 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
    *(int (***)(int))((char *)&v13 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
    v16[1] = 0;
    v16[2] = 0;
    v17 = 0;
    v18 = nullptr;
    v19 = 0;
    v20 = 0;
    v13 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
    v24[0] = (uint32_t)(uintptr_t)(&off_20AB014);
    v15 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
    v16[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
    sub_1903A70(v21);
    v22 = 24;
    v16[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
    v23 = &dword_213B814;
    sub_19119D0(v24, v16);
    *(uint32_t *)((char *)&v16[2] + (uint32_t)(uintptr_t)(*(v15 - 3))) = *(uint32_t *)((uint8_t *)&v16[2] + (uint32_t)(uintptr_t)(*(v15 - 3))) & 0xFFFFFFB5
                                                      | 8;
    sub_192D8B0(&v15, self);
    v9 = &dword_213B814;
    if ( v19 != 0 )
    {
      if ( v19 > (unsigned int)v17 )
      {
        sub_11A9950(&v11, v18, (uint8_t *)v19);
        g4_std::string::assign_str(&v9, &v11);
        v8 = (void *)(v11 - 12);
        if ( (uint32_t *)(v11 - 12) == dword_213B808
          || __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) > 0 )
        {
          goto LABEL_21;
        }
      }
      else
      {
        sub_11A9950(&v10, v18, (uint8_t *)v17);
        g4_std::string::assign_str(&v9, &v10);
        v8 = (void *)(v10 - 12);
        if ( (uint32_t *)(v10 - 12) == dword_213B808
          || __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) > 0 )
        {
          goto LABEL_21;
        }
      }
      g4_std::string::Rep::M_destroy(v8);
    }
    else
    {
      g4_std::string::assign_str(&v9, &v23);
    }
LABEL_21:
    g4_std::string::assign_str((char *)self + 204, &v9);
    v4 = v9 - 3;
    if ( v9 - 3 != dword_213B808 && __sync_fetch_and_add(v9 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v4);
    v13 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
    v24[0] = (uint32_t)(uintptr_t)(&off_20AB014);
    v15 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
    v16[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
    v5 = v23 - 3;
    if ( v23 - 3 != dword_213B808 && __sync_fetch_and_add(v23 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v5);
    v16[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
    sub_1902180(v21);
    v13 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
    *(int (***)(int))((char *)&v13 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
    v15 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
    *(uint32_t *)((char *)&v16[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
    v13 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
    *(int (***)(int))((char *)&v13 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
    v14 = 0;
    v24[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    sub_1900B90(v24);
  }
  *((uint8_t *)self + 228) = 1;
  return 0;
}


