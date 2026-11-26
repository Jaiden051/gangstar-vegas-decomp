#include "Core/Utils/DecompTypes.h"
#include "glwebtools_UrlConnectionCore.h"

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnectionCore::Drop  (binary VA: 0x13eb4a0)
// Original: glwebtools::UrlConnectionCore::Drop
// ----------------------------------------------------------------------------
int glwebtools::UrlConnectionCore::Drop(glwebtools::UrlConnectionCore::Self *self)
{
  int v1;

  glwebtools::Mutex::Lock((glwebtools::UrlConnectionCore::Self *)((char *)self + 80));
  v1 = *((uint32_t *)self + 1);
  if ( v1 > 0 )
    *((uint32_t *)self + 1) = --v1;
  glwebtools::Mutex::Unlock((glwebtools::UrlConnectionCore::Self *)((char *)self + 80));
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnectionCore::Grab  (binary VA: 0x13eb500)
// Original: glwebtools::UrlConnectionCore::Grab
// ----------------------------------------------------------------------------
int glwebtools::UrlConnectionCore::Grab(glwebtools::UrlConnectionCore::Self *self)
{
  int v1;

  glwebtools::Mutex::Lock((glwebtools::UrlConnectionCore::Self *)((char *)self + 80));
  v1 = *((uint32_t *)self + 1) + 1;
  *((uint32_t *)self + 1) = v1;
  glwebtools::Mutex::Unlock((glwebtools::UrlConnectionCore::Self *)((char *)self + 80));
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnectionCore::CanDelete  (binary VA: 0x13eb560)
// Original: glwebtools::UrlConnectionCore::CanDelete
// ----------------------------------------------------------------------------
int glwebtools::UrlConnectionCore::CanDelete(glwebtools::UrlConnectionCore::Self *self)
{
  int v1;
  int v3;

  v1 = 0;
  glwebtools::Mutex::Lock((glwebtools::UrlConnectionCore::Self *)((char *)self + 80));
  if ( *((int *)self + 1) <= 0 && *((uint32_t *)self + 2) != 3 )
  {
    v3 = *((uint32_t *)self + 2);
    LOBYTE(v3) = v3 != 2;
    v1 = v3;
  }
  glwebtools::Mutex::Unlock((glwebtools::UrlConnectionCore::Self *)((char *)self + 80));
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnectionCore::GetState  (binary VA: 0x13eb8b0)
// Original: glwebtools::UrlConnectionCore::GetState
// ----------------------------------------------------------------------------
int glwebtools::UrlConnectionCore::GetState(glwebtools::UrlConnectionCore::Self *self)
{
  return *((uint32_t *)self + 2);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnectionCore::AttachRequest  (binary VA: 0x13eb8c0)
// Original: glwebtools::UrlConnectionCore::AttachRequest
// ----------------------------------------------------------------------------
int glwebtools::UrlConnectionCore::AttachRequest(glwebtools::UrlConnectionCore::Self *self, glwebtools::UrlRequestCore::Self *a2)
{
  int v2;
  glwebtools::UrlResponseCore::Self *v3;
  int v5;

  glwebtools::Mutex::Lock((glwebtools::UrlConnectionCore::Self *)((char *)self + 80));
  v2 = -2147483645;
  if ( *((uint32_t *)self + 2) != 2 && *((uint32_t *)self + 2) != 3 )
  {
    if ( *((uint32_t *)self + 3) != 0 )
    {
      v2 = -2147483646;
    }
    else
    {
      G4_VCALL<void>(a2, 12);
      v3 = *((glwebtools::UrlResponseCore::Self **)self + 4);
      *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(a2);
      if ( v3 != nullptr )
      {
        glwebtools::UrlResponseCore::Destroy(v3);
        sub_4EBEE0(*((uint32_t *)self + 4));
        *((uint32_t *)self + 4) = 0;
      }
      *((uint32_t *)self + 2) = 2;
      v2 = 0;
    }
  }
  v5 = v2;
  glwebtools::Mutex::Unlock((glwebtools::UrlConnectionCore::Self *)((char *)self + 80));
  return v5;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnectionCore::GetUrlResponse  (binary VA: 0x13eb980)
// Original: glwebtools::UrlConnectionCore::GetUrlResponse
// ----------------------------------------------------------------------------
int glwebtools::UrlConnectionCore::GetUrlResponse(glwebtools::UrlConnectionCore::Self *self)
{
  int v1;

  v1 = 0;
  glwebtools::Mutex::Lock((glwebtools::UrlConnectionCore::Self *)((char *)self + 80));
  if ( *((uint32_t *)self + 2) != 3 )
    v1 = *((uint32_t *)self + 4);
  glwebtools::Mutex::Unlock((glwebtools::UrlConnectionCore::Self *)((char *)self + 80));
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnectionCore::Construct  (binary VA: 0x13eb9e0)
// Original: glwebtools::UrlConnectionCore::UrlConnectionCore
// ----------------------------------------------------------------------------
glwebtools::UrlConnectionCore::Self * glwebtools::UrlConnectionCore::Construct(glwebtools::UrlConnectionCore::Self *self, glwebtools::TaskGroup::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  glwebtools::UrlConnectionCore::Self *result;
  void *v6;
  typedef int _g4_t_v7;
  typedef char _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef uint32_t _g4_t_v11[3];
  typedef char _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef char _g4_t_v15;
  typedef char _g4_t_v16;
  typedef int _g4_t_v17;
  typedef char _g4_t_v18;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v9)) > _g4_s2 ? (20u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v10)) > _g4_s3 ? (24u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v11)) > _g4_s4 ? (28u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v12)) > _g4_s5 ? (40u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v13)) > _g4_s6 ? (44u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v14)) > _g4_s7 ? (48u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v15)) > _g4_s8 ? (52u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (53u + sizeof(_g4_t_v16)) > _g4_s9 ? (53u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v17)) > _g4_s10 ? (56u + sizeof(_g4_t_v17)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v18)) > _g4_s11 ? (60u + sizeof(_g4_t_v18)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 40u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 52u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 53u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 56u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 60u);

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094CF0);
  *((uint32_t *)self + 1) = 0;
  glwebtools::UrlConnection::CreationSettings::Construct((glwebtools::UrlConnection::CreationSettings::Self *)((char *)self + 20));
  *((uint32_t *)self + 19) = (uint32_t)(uintptr_t)(&dword_213B814);
  glwebtools::Mutex::Construct((glwebtools::UrlConnectionCore::Self *)((char *)self + 80));
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 24) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 27) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 2) = 1;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 26) = 0;
  glwebtools::UrlConnection::CreationSettings::Construct((glwebtools::UrlConnection::CreationSettings::Self *)&v7);
  *((uint32_t *)self + 5) = v7;
  *((uint8_t *)self + 24) = v8;
  *((uint32_t *)self + 7) = v9;
  *((uint32_t *)self + 8) = v10;
  g4_std::string::assign_str((char *)self + 36, v11);
  *((uint32_t *)self + 10) = v11[1];
  *((uint32_t *)self + 11) = v11[2];
  *((uint8_t *)self + 48) = v12;
  g4_std::string::assign_str((char *)self + 52, &v13);
  g4_std::string::assign_str((char *)self + 56, &v14);
  *((uint8_t *)self + 60) = v15;
  *((uint8_t *)self + 61) = v16;
  g4_std::string::assign_str((char *)self + 64, &v17);
  *((uint8_t *)self + 68) = v18;
  v2 = (void *)(v17 - 12);
  if ( (uint32_t *)(v17 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  v3 = (void *)(v14 - 12);
  if ( (uint32_t *)(v14 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  v4 = (void *)(v13 - 12);
  if ( (uint32_t *)(v13 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  result = (glwebtools::UrlConnectionCore::Self *)v11[0];
  v6 = (void *)(v11[0] - 12);
  if ( (uint32_t *)(v11[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v11[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    return (g4_std::string::Rep::M_destroy(v6), (glwebtools::UrlConnectionCore::Self *)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnectionCore::Construct  (binary VA: 0x13ebbd0)
// Original: glwebtools::UrlConnectionCore::UrlConnectionCore
// ----------------------------------------------------------------------------
glwebtools::UrlConnectionCore::Self * glwebtools::UrlConnectionCore::Construct(glwebtools::UrlConnectionCore::Self *self, const glwebtools::UrlConnection::CreationSettings::Self *a2, glwebtools::TaskGroup::Self *a3)
{
  glwebtools::UrlConnectionCore::Self *result;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094CF0);
  *((uint32_t *)self + 1) = 0;
  glwebtools::UrlConnection::CreationSettings::Construct((glwebtools::UrlConnection::CreationSettings::Self *)((char *)self + 20));
  *((uint32_t *)self + 19) = (uint32_t)(uintptr_t)(&dword_213B814);
  glwebtools::Mutex::Construct((glwebtools::UrlConnectionCore::Self *)((char *)self + 80));
  *((uint32_t *)self + 27) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 24) = (uint32_t)(uintptr_t)(a3);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 2) = 1;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 5) = *(uint32_t *)a2;
  *((uint8_t *)self + 24) = *((uint8_t *)a2 + 4);
  *((uint32_t *)self + 7) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 8) = *((uint32_t *)a2 + 3);
  g4_std::string::assign_str((char *)self + 36, (char *)a2 + 16);
  *((uint32_t *)self + 10) = *((uint32_t *)a2 + 5);
  *((uint32_t *)self + 11) = *((uint32_t *)a2 + 6);
  *((uint8_t *)self + 48) = *((uint8_t *)a2 + 28);
  g4_std::string::assign_str((char *)self + 52, (char *)a2 + 32);
  g4_std::string::assign_str((char *)self + 56, (char *)a2 + 36);
  *((uint8_t *)self + 60) = *((uint8_t *)a2 + 40);
  *((uint8_t *)self + 61) = *((uint8_t *)a2 + 41);
  g4_std::string::assign_str((char *)self + 64, (char *)a2 + 44);
  result = (glwebtools::UrlConnectionCore::Self *)*((uint8_t *)a2 + 48);
  *((uint8_t *)self + 68) = (uint8_t)(uintptr_t)result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnectionCore::GetToken  (binary VA: 0x13ebd00)
// Original: glwebtools::UrlConnectionCore::GetToken
// ----------------------------------------------------------------------------
int glwebtools::UrlConnectionCore::GetToken(glwebtools::UrlConnectionCore::Self *self)
{
  return *((uint32_t *)self + 22);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnectionCore::SetToken  (binary VA: 0x13ebd10)
// Original: glwebtools::UrlConnectionCore::SetToken
// ----------------------------------------------------------------------------
glwebtools::UrlConnectionCore::Self * glwebtools::UrlConnectionCore::SetToken(glwebtools::UrlConnectionCore::Self *self, unsigned int a2)
{
  *((uint32_t *)self + 22) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnectionCore::SetLastError  (binary VA: 0x13ebd20)
// Original: glwebtools::UrlConnectionCore::SetLastError
// ----------------------------------------------------------------------------
glwebtools::UrlConnectionCore::Self * glwebtools::UrlConnectionCore::SetLastError(glwebtools::UrlConnectionCore::Self *self, int a2)
{
  *((uint32_t *)self + 23) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnectionCore::CancelRequest  (binary VA: 0x13ebd30)
// Original: glwebtools::UrlConnectionCore::CancelRequest
// ----------------------------------------------------------------------------
int glwebtools::UrlConnectionCore::CancelRequest(glwebtools::UrlConnectionCore::Self *self)
{
  int v1;
  int v3;
  glwebtools::Self *v4;
  glwebtools::UrlResponseCore::Self *v5;
  int v6;
  int v7;

  glwebtools::Mutex::Lock((glwebtools::UrlConnectionCore::Self *)((char *)self + 80));
  v1 = -2147483645;
  if ( *((uint32_t *)self + 2) == 3 )
  {
    v3 = *((uint32_t *)self + 18);
    if ( v3 != 0 )
    {
      v4 = (glwebtools::Self *)glwebtools::TaskGroup::RemoveTask(*((glwebtools::TaskGroup::Self **)self + 24), *(uint32_t *)(v3 + 12));
      if ( glwebtools::IsOperationSuccess(v4) )
      {
        *(uint32_t *)(v3 + 12) = 0;
        v5 = *((glwebtools::UrlResponseCore::Self **)self + 4);
        *((uint32_t *)self + 25) = 0;
        *((uint32_t *)self + 26) = 0;
        if ( v5 != nullptr )
        {
          glwebtools::UrlResponseCore::Destroy(v5);
          sub_4EBEE0(*((uint32_t *)self + 4));
        }
        *((uint32_t *)self + 4) = 0;
        glwebtools::UrlRequestCore::SetState(*((uint32_t *)self + 3), 4);
        (*(void (**)(uint32_t))(**((uint32_t **)self + 3) + 16))(*((uint32_t *)self + 3));
        *((uint32_t *)self + 3) = 0;
        glwebtools::UrlConnectionCore::SetLastError(self, -2147483630);
        *((uint32_t *)self + 2) = 4;
        v1 = 0;
      }
      else
      {
        v6 = *(uint32_t *)(v3 + 8);
        if ( v6 != 0 )
        {
          *(uint8_t *)(v6 + 4) = 1;
          v1 = 0;
        }
        else
        {
          v1 = -2147483642;
        }
      }
    }
  }
  v7 = v1;
  glwebtools::Mutex::Unlock((glwebtools::UrlConnectionCore::Self *)((char *)self + 80));
  return v7;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnectionCore::GetLastError  (binary VA: 0x13ebe50)
// Original: glwebtools::UrlConnectionCore::GetLastError
// ----------------------------------------------------------------------------
int glwebtools::UrlConnectionCore::GetLastError(glwebtools::UrlConnectionCore::Self *self)
{
  return *((uint32_t *)self + 23);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnectionCore::InvalidateRequest  (binary VA: 0x13ebe60)
// Original: glwebtools::UrlConnectionCore::InvalidateRequest
// ----------------------------------------------------------------------------
int glwebtools::UrlConnectionCore::InvalidateRequest()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnectionCore::InvalidateConnection  (binary VA: 0x13ebe70)
// Original: glwebtools::UrlConnectionCore::InvalidateConnection
// ----------------------------------------------------------------------------
int glwebtools::UrlConnectionCore::InvalidateConnection()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnectionCore::SetIntanceName  (binary VA: 0x13ebe80)
// Original: glwebtools::UrlConnectionCore::SetIntanceName
// ----------------------------------------------------------------------------
int glwebtools::UrlConnectionCore::SetIntanceName(int a1, int a2)
{
  g4_std::string::assign_str(a1 + 76, a2);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnectionCore::GetDownloadedBytes  (binary VA: 0x13ebeb0)
// Original: glwebtools::UrlConnectionCore::GetDownloadedBytes
// ----------------------------------------------------------------------------
int glwebtools::UrlConnectionCore::GetDownloadedBytes(glwebtools::UrlConnectionCore::Self *self)
{
  int v1;
  int result;
  int v3;

  v1 = *((uint32_t *)self + 18);
  result = 0;
  if ( v1 != 0 )
  {
    v3 = *(uint32_t *)(v1 + 8);
    if ( v3 != 0 )
      return *(uint32_t *)(v3 + 20);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnectionCore::DestroyImplData  (binary VA: 0x13ebed0)
// Original: glwebtools::UrlConnectionCore::DestroyImplData
// ----------------------------------------------------------------------------
int glwebtools::UrlConnectionCore::DestroyImplData(glwebtools::UrlConnectionCore::Self *self)
{
  int v1;

  v1 = *((uint32_t *)self + 18);
  if ( v1 != 0 )
  {
    *((uint32_t *)self + 18) = 0;
    G4_VCALL<void>(v1, 4);
    sub_4EBEE0(v1);
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnectionCore::Destroy  (binary VA: 0x13ebf20)
// Original: glwebtools::UrlConnectionCore::~UrlConnectionCore
// ----------------------------------------------------------------------------
void glwebtools::UrlConnectionCore::Destroy(glwebtools::UrlResponseCore::Self **self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;

  *self = (glwebtools::UrlResponseCore::Self *)((uint32_t)(uintptr_t)&off_2094CF0);
  glwebtools::UrlConnectionCore::DestroyImplData((glwebtools::UrlConnectionCore::Self *)self);
  if ( *(self + 4) != nullptr )
  {
    glwebtools::UrlResponseCore::Destroy(*(self + 4));
    sub_4EBEE0((int)(uintptr_t)(*(self + 4)));
    *(self + 4) = nullptr;
  }
  v1 = (int)(uintptr_t)(*(self + 27));
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  glwebtools::Mutex::Destroy((glwebtools::Mutex::Self *)(self + 20));
  v2 = (int)(uintptr_t)(*(self + 19));
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v2 - 12));
  }
  v3 = (int)(uintptr_t)(*(self + 16));
  if ( (uint32_t *)(v3 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v3 - 12));
  }
  v4 = (int)(uintptr_t)(*(self + 14));
  if ( (uint32_t *)(v4 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v4 - 12));
  }
  v5 = (int)(uintptr_t)(*(self + 13));
  if ( (uint32_t *)(v5 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v5 - 12));
  }
  v6 = (int)(uintptr_t)(*(self + 9));
  if ( (uint32_t *)(v6 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v6 - 12));
  }
  *self = (glwebtools::UrlResponseCore::Self *)&off_2049608;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnectionCore::Destroy_ea13ec0a0  (binary VA: 0x13ec0a0)
// Original: glwebtools::UrlConnectionCore::~UrlConnectionCore
// ----------------------------------------------------------------------------
void glwebtools::UrlConnectionCore::Destroy_ea13ec0a0(glwebtools::UrlResponseCore::Self **self)
{
  glwebtools::UrlConnectionCore::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnectionCore::SupportServerSideEvent  (binary VA: 0x13ec0e0)
// Original: glwebtools::UrlConnectionCore::SupportServerSideEvent
// ----------------------------------------------------------------------------
int glwebtools::UrlConnectionCore::SupportServerSideEvent(glwebtools::UrlConnectionCore::Self *self)
{
  return *((uint8_t *)self + 60);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnectionCore::CreateImplData  (binary VA: 0x13ec0f0)
// Original: glwebtools::UrlConnectionCore::CreateImplData
// ----------------------------------------------------------------------------
int glwebtools::UrlConnectionCore::CreateImplData(glwebtools::UrlConnectionCore::Self *self)
{
  int result;
  uint32_t *v2;

  result = -2147483645;
  if ( *((uint32_t *)self + 18) == 0 )
  {
    if ( (uint8_t)glwebtools::UrlConnectionCore::SupportServerSideEvent(self) != 0 )
    {
      v2 = (uint32_t *)sub_4EBE70(0x10u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
      v2[1] = 0;
      v2[2] = 0;
      v2[3] = 0;
      *v2 = (uint32_t)(uintptr_t)(&off_2094D10);
      v2[1] = curl_easy_init();
      v2[2] = 0;
      v2[3] = 0;
      *v2 = (uint32_t)(uintptr_t)(&off_2094D28);
    }
    else
    {
      v2 = (uint32_t *)sub_4EBE70(0x10u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
      *v2 = (uint32_t)(uintptr_t)(&off_2094D10);
      v2[1] = curl_easy_init();
      v2[2] = 0;
      v2[3] = 0;
    }
    *((uint32_t *)self + 18) = (uint32_t)(uintptr_t)(v2);
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnectionCore::HasServerSideEvent  (binary VA: 0x13ec1e0)
// Original: glwebtools::UrlConnectionCore::HasServerSideEvent
// ----------------------------------------------------------------------------
int glwebtools::UrlConnectionCore::HasServerSideEvent(glwebtools::UrlConnectionCore::Self *self)
{
  int v1;
  int v2;
  glwebtools::ServerSideEventStreamParser::Self *v3;

  v1 = 0;
  if ( (uint8_t)glwebtools::UrlConnectionCore::SupportServerSideEvent(self) != 0 )
  {
    v2 = *((uint32_t *)self + 18);
    if ( v2 != 0 )
    {
      v3 = (glwebtools::ServerSideEventStreamParser::Self *)(*(int (**)(uint32_t))(*(uint32_t *)v2 + 12))(*((uint32_t *)self + 18));
      if ( v3 != nullptr )
        return glwebtools::ServerSideEventStreamParser::HasEvent(v3);
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnectionCore::PopServerSideEvent  (binary VA: 0x13ec240)
// Original: glwebtools::UrlConnectionCore::PopServerSideEvent
// ----------------------------------------------------------------------------
int glwebtools::UrlConnectionCore::PopServerSideEvent(glwebtools::UrlConnectionCore::Self *self, glwebtools::ServerSideEvent::Self *a2)
{
  char HasServerSideEvent;
  int result;
  glwebtools::ServerSideEventStreamParser::Self *v4;

  HasServerSideEvent = glwebtools::UrlConnectionCore::HasServerSideEvent(self);
  result = -2147483645;
  if ( HasServerSideEvent != 0 )
  {
    v4 = (glwebtools::ServerSideEventStreamParser::Self *)(*(int (**)(uint32_t))(**((uint32_t **)self + 18) + 12))(*((uint32_t *)self + 18));
    return glwebtools::ServerSideEventStreamParser::PopEvent(v4, a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnectionCore::SupportDataPacketQueue  (binary VA: 0x13ec2a0)
// Original: glwebtools::UrlConnectionCore::SupportDataPacketQueue
// ----------------------------------------------------------------------------
int glwebtools::UrlConnectionCore::SupportDataPacketQueue(glwebtools::UrlConnectionCore::Self *self)
{
  return *((uint8_t *)self + 61);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnectionCore::HasDataPacket  (binary VA: 0x13ec2b0)
// Original: glwebtools::UrlConnectionCore::HasDataPacket
// ----------------------------------------------------------------------------
int glwebtools::UrlConnectionCore::HasDataPacket(glwebtools::UrlConnectionCore::Self *self)
{
  char v1;
  int v2;
  int v3;
  int v4;
  int v5;

  v1 = glwebtools::UrlConnectionCore::SupportDataPacketQueue(self);
  v2 = 0;
  if ( v1 != 0 )
  {
    v3 = *((uint32_t *)self + 18);
    if ( v3 != 0 )
    {
      v4 = *(uint32_t *)(v3 + 8);
      if ( v4 != 0 )
      {
        glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(v4 + 44));
        v5 = *(uint32_t *)(v4 + 52);
        glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)(v4 + 44));
        LOBYTE(v2) = v5 != v4 + 52;
      }
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnectionCore::PopDataPacket  (binary VA: 0x13ec330)
// Original: glwebtools::UrlConnectionCore::PopDataPacket
// ----------------------------------------------------------------------------
int glwebtools::UrlConnectionCore::PopDataPacket(glwebtools::UrlConnectionCore::Self *self, glwebtools::MutableData::Self *a2)
{
  int v2;
  int v3;
  int v4;
  glwebtools::Mutex::Self *v5;
  int v6;
  glwebtools::MutableData::Self *v7;
  int v9;

  v2 = 0;
  if ( (uint8_t)glwebtools::UrlConnectionCore::SupportDataPacketQueue(self) != 0 )
  {
    v3 = *((uint32_t *)self + 18);
    if ( v3 != 0 )
    {
      v4 = *(uint32_t *)(v3 + 8);
      if ( v4 != 0 )
      {
        v5 = (glwebtools::Mutex::Self *)(v4 + 44);
        glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(v4 + 44));
        v6 = *(uint32_t *)(v4 + 52);
        if ( v6 != v4 + 52 )
        {
          v7 = *(glwebtools::MutableData::Self **)(v6 + 8);
          v9 = v6;
          sub_1901940(v6);
          sub_4EBEE0(v9);
          if ( v7 != nullptr )
          {
            LOWORD(v2) = 1;
            glwebtools::MutableData::Swap(a2, v7);
            (**(void (***)(glwebtools::MutableData::Self *))v7)(v7);
            sub_4EBEE0((int)(uintptr_t)(v7));
          }
        }
        glwebtools::Mutex::Unlock(v5);
      }
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnectionCore::GetCreationSettings  (binary VA: 0x13ec3f0)
// Original: glwebtools::UrlConnectionCore::GetCreationSettings
// ----------------------------------------------------------------------------
int glwebtools::UrlConnectionCore::GetCreationSettings(glwebtools::UrlConnectionCore::Self *self, glwebtools::UrlConnection::CreationSettings::Self *a2)
{
  *(uint32_t *)a2 = *((uint32_t *)self + 5);
  *((uint8_t *)a2 + 4) = *((uint8_t *)self + 24);
  *((uint32_t *)a2 + 2) = *((uint32_t *)self + 7);
  *((uint32_t *)a2 + 3) = *((uint32_t *)self + 8);
  g4_std::string::assign_str((char *)a2 + 16, (char *)self + 36);
  *((uint32_t *)a2 + 5) = *((uint32_t *)self + 10);
  *((uint32_t *)a2 + 6) = *((uint32_t *)self + 11);
  *((uint8_t *)a2 + 28) = *((uint8_t *)self + 48);
  g4_std::string::assign_str((char *)a2 + 32, (char *)self + 52);
  g4_std::string::assign_str((char *)a2 + 36, (char *)self + 56);
  *((uint8_t *)a2 + 40) = *((uint8_t *)self + 60);
  *((uint8_t *)a2 + 41) = *((uint8_t *)self + 61);
  g4_std::string::assign_str((char *)a2 + 44, (char *)self + 64);
  *((uint8_t *)a2 + 48) = *((uint8_t *)self + 68);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnectionCore::Update  (binary VA: 0x13ec4a0)
// Original: glwebtools::UrlConnectionCore::Update
// ----------------------------------------------------------------------------
int glwebtools::UrlConnectionCore::Update(glwebtools::UrlConnectionCore::Self *self, uint64_t a2)
{
  int v3;
  uint64_t v4; // rax
  unsigned int v5; // xmm0_4
  glwebtools::Self *v6;
  glwebtools::UrlResponseCore::Self *v7;

  glwebtools::Mutex::Lock((glwebtools::UrlConnectionCore::Self *)((char *)self + 80));
  if ( *((uint32_t *)self + 2) == 3 )
  {
    v3 = *((uint32_t *)self + 18);
    if ( v3 != 0
      && (uint8_t)glwebtools::TaskGroup::IsScheduled(
                            *((glwebtools::TaskGroup::Self **)self + 24),
                            *(uint32_t *)(v3 + 12)) != 0
      && (uint8_t)glwebtools::TaskGroup::SomeThreadStarted(*((glwebtools::TaskGroup::Self **)self + 24)) == 0 )
    {
      if ( *(uint64_t *)((char *)self + 100) != 0 )
      {
        v4 = a2 + *(uint64_t *)((char *)self + 100);
        v5 = *((uint32_t *)self + 11);
        *(uint64_t *)((char *)self + 100) = v4;
        if ( v4 > v5 )
        {
          v6 = (glwebtools::Self *)glwebtools::TaskGroup::RemoveTask(
                               *((glwebtools::TaskGroup::Self **)self + 24),
                               *(uint32_t *)(v3 + 12));
          if ( glwebtools::IsOperationSuccess(v6) )
          {
            *(uint32_t *)(v3 + 12) = 0;
            v7 = *((glwebtools::UrlResponseCore::Self **)self + 4);
            *((uint32_t *)self + 25) = 0;
            *((uint32_t *)self + 26) = 0;
            if ( v7 != nullptr )
            {
              glwebtools::UrlResponseCore::Destroy(v7);
              sub_4EBEE0(*((uint32_t *)self + 4));
            }
            *((uint32_t *)self + 4) = 0;
            glwebtools::UrlRequestCore::SetState(*((uint32_t *)self + 3), 4);
            (*(void (**)(uint32_t))(**((uint32_t **)self + 3) + 16))(*((uint32_t *)self + 3));
            *((uint32_t *)self + 3) = 0;
            glwebtools::UrlConnectionCore::SetLastError(self, -2147483629);
            *((uint32_t *)self + 2) = 4;
          }
        }
      }
      else
      {
        *(uint64_t *)((char *)self + 100) = a2;
      }
    }
  }
  glwebtools::Mutex::Unlock((glwebtools::UrlConnectionCore::Self *)((char *)self + 80));
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnectionCore::GetOutputDebugString  (binary VA: 0x13ec620)
// Original: glwebtools::UrlConnectionCore::GetOutputDebugString
// ----------------------------------------------------------------------------
char * glwebtools::UrlConnectionCore::GetOutputDebugString(glwebtools::UrlConnectionCore::Self *self)
{
  return (char *)self + 108;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnectionCore::StartRequest  (binary VA: 0x13ec630)
// Original: glwebtools::UrlConnectionCore::StartRequest
// ----------------------------------------------------------------------------
int glwebtools::UrlConnectionCore::StartRequest(glwebtools::UrlConnectionCore::Self *self)
{
  int v1;
  int v2;
  int ImplData;
  int v5;
  int v6;
  void (***v7)(int);
  char v8;
  int v9;
  int v10;
  typedef glwebtools::Self *_g4_t_v11;
  typedef glwebtools::Self *_g4_t_v12;
  typedef glwebtools::Job::Self *_g4_t_v13;
  typedef glwebtools::Job::Self *_g4_t_v14;
  typedef glwebtools::Job::Self *_g4_t_v15;
  typedef glwebtools::Job::Self *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int *_g4_t_v19;
  typedef uint32_t *_g4_t_v20;
  typedef uint32_t _g4_t_v21[10];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v11)) > _g4_s0 ? (0u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v12)) > _g4_s1 ? (0u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v13)) > _g4_s2 ? (48u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v14)) > _g4_s3 ? (48u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v15)) > _g4_s4 ? (48u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v16)) > _g4_s5 ? (48u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v17)) > _g4_s6 ? (52u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v18)) > _g4_s7 ? (56u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v19)) > _g4_s8 ? (60u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v20)) > _g4_s9 ? (60u + sizeof(_g4_t_v20)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v21)) > _g4_s10 ? (68u + sizeof(_g4_t_v21)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 48u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 48u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 48u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 52u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 56u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 60u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 60u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 68u);

  glwebtools::Mutex::Lock((glwebtools::UrlConnectionCore::Self *)((char *)self + 80));
  v1 = *((uint32_t *)self + 18);
  if ( v1 == 0 )
  {
    ImplData = glwebtools::UrlConnectionCore::CreateImplData(self);
    if ( !glwebtools::IsOperationSuccess((glwebtools::Self *)ImplData) )
      goto LABEL_12;
    v1 = *((uint32_t *)self + 18);
  }
  if ( *((uint32_t *)self + 2) != 2 )
  {
    v2 = *((uint32_t *)self + 3);
    v18 = 0;
    goto LABEL_4;
  }
  if ( *((uint32_t *)self + 3) == 0 )
  {
    v18 = 0;
LABEL_6:
    glwebtools::MemBar(v11);
    *((uint32_t *)self + 2) = 4;
    if ( *(uint32_t *)(v1 + 12) != 0 )
    {
      glwebtools::TaskGroup::RemoveTask(*((glwebtools::TaskGroup::Self **)self + 24), *(uint32_t *)(v1 + 12));
      *(uint32_t *)(v1 + 12) = 0;
      *((uint32_t *)self + 25) = 0;
      *((uint32_t *)self + 26) = 0;
    }
    ImplData = -2147483645;
    if ( *((uint32_t *)self + 2) == 2 )
    {
      if ( *((uint32_t *)self + 3) != 0 )
      {
        LOWORD(ImplData) = 0;
        if ( !glwebtools::IsOperationSuccess((glwebtools::Self *)v18) )
          ImplData = v18;
      }
      else
      {
        ImplData = -2147483647;
      }
    }
    goto LABEL_12;
  }
  v5 = *(uint32_t *)(v1 + 8);
  if ( v5 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v5 + 16))(*(uint32_t *)(v1 + 8));
  else
    (**(void (***)(int))v1)(v1);
  v6 = *((uint32_t *)self + 4);
  if ( v6 != 0 )
  {
    glwebtools::MutableData::Resize(*(glwebtools::MutableData::Self **)(v6 + 28), 0);
    v13 = *((glwebtools::Job::Self **)self + 4);
    g4_std::Rb_tree_string_pair_string_const_957cd7::M_erase(
      (char *)v13 + 4,
      *((uint32_t *)v13 + 3));
    *((uint32_t *)v13 + 3) = 0;
    *((uint32_t *)v13 + 4) = (uint32_t)(uintptr_t)((char *)v13 + 8);
    *((uint32_t *)v13 + 5) = (uint32_t)(uintptr_t)((char *)v13 + 8);
    *((uint32_t *)v13 + 6) = 0;
  }
  else
  {
    v15 = (glwebtools::Job::Self *)sub_4EBE70(0x20u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
    glwebtools::UrlResponseCore::Construct(v15);
    *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(v15);
  }
  if ( *(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 3) + 44) - 12) != 0 )
  {
    v19 = *(int **)(v1 + 8);
    v17 = *((uint32_t *)self + 3);
    G4_VCALL<void>(v19, 16);
    v14 = (glwebtools::Job::Self *)sub_4EBE70(8u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
    glwebtools::IOStream::IOStream(v14);
    v19[6] = (int)(uintptr_t)(v14);
    if ( v14 != nullptr
      && G4_VCALL<uint8_t>(v14, 8, *(uint32_t *)(v17 + 44), 514) == 0 )
    {
      v7 = (void (***)(int))v19[6];
      if ( v7 != nullptr )
      {
        (**v7)(v19[6]);
        sub_4EBEE0(v19[6]);
      }
      v19[6] = 0;
    }
  }
  *(uint8_t *)(*(uint32_t *)(v1 + 8) + 16) = *((uint8_t *)self + 61);
  glwebtools::UrlRequestCore::AddHeaders(
    *((glwebtools::UrlRequestCore::Self **)self + 3),
    "User-Agent",
    *((const char **)self + 14));
  v8 = glwebtools::UrlRequestCore::SetupHandler(*((glwebtools::UrlRequestCore::Self **)self + 3), *(void **)(v1 + 4));
  v20 = *(uint32_t **)(v1 + 8);
  if ( v20 == nullptr || (v9 = *((uint32_t *)self + 4)) == 0 )
  {
    v2 = *((uint32_t *)self + 3);
    v18 = -2147483643;
    goto LABEL_4;
  }
  if ( v8 == 0 )
  {
    v2 = *((uint32_t *)self + 3);
    v18 = -2147483642;
    goto LABEL_4;
  }
  if ( v20[6] == 0 )
  {
    v2 = *((uint32_t *)self + 3);
    v18 = 0;
    if ( *(uint32_t *)(*(uint32_t *)(v2 + 44) - 12) == 0 )
    {
      if ( *((uint8_t *)self + 61) == 0 )
      {
        v16 = *(glwebtools::Job::Self **)(v9 + 28);
        G4_VCALL<void>(v20, 16);
        v20[7] = (uint32_t)(uintptr_t)(v16);
        v20 = *(uint32_t **)(v1 + 8);
      }
      goto LABEL_28;
    }
LABEL_4:
    if ( v2 != 0 )
    {
      glwebtools::UrlRequestCore::SetState(v2, 4);
      v11 = *((glwebtools::Self **)self + 3);
      (*(void (**)(void))(*(uint32_t *)v11 + 16))();
      *((uint32_t *)self + 3) = 0;
    }
    goto LABEL_6;
  }
LABEL_28:
  v20[8] = 1000 * *((uint32_t *)self + 8);
  curl_easy_setopt(*(uint32_t *)(v1 + 4), 43, 0);
  curl_easy_setopt(*(uint32_t *)(v1 + 4), 99, 1);
  curl_easy_setopt(*(uint32_t *)(v1 + 4), 20056, (char)(uintptr_t)glwebtools::UrlConnection_CurlCB::ProgressCB);
  curl_easy_setopt(*(uint32_t *)(v1 + 4), 10057, *(uint32_t *)(v1 + 8));
  if ( *((uint8_t *)self + 24) != 0 )
    curl_easy_setopt(*(uint32_t *)(v1 + 4), 52, 1);
  curl_easy_setopt(*(uint32_t *)(v1 + 4), 20011, (char)(uintptr_t)glwebtools::UrlConnection_CurlCB::DataWriteCB);
  curl_easy_setopt(*(uint32_t *)(v1 + 4), 10001, *(uint32_t *)(v1 + 8));
  curl_easy_setopt(*(uint32_t *)(v1 + 4), 20079, (char)(uintptr_t)glwebtools::UrlConnection_CurlCB::HeaderWriteCB);
  curl_easy_setopt(*(uint32_t *)(v1 + 4), 10029, *(uint32_t *)(v1 + 8));
  if ( *(uint32_t *)(*((uint32_t *)self + 16) - 12) != 0 )
  {
    curl_easy_setopt(*(uint32_t *)(v1 + 4), 64, 1);
    curl_easy_setopt(*(uint32_t *)(v1 + 4), 10065, *((uint32_t *)self + 16));
  }
  else
  {
    curl_easy_setopt(*(uint32_t *)(v1 + 4), 64, 0);
  }
  if ( *((uint8_t *)self + 48) != 0 )
    curl_easy_setopt(*(uint32_t *)(v1 + 4), 10102, *((uint32_t *)self + 13));
  curl_easy_setopt(*(uint32_t *)(v1 + 4), 71, *((uint32_t *)self + 5));
  curl_easy_setopt(*(uint32_t *)(v1 + 4), 78, *((uint32_t *)self + 7));
  glwebtools::UrlRequestCore::SetState(*((uint32_t *)self + 3), 3);
  *((uint32_t *)self + 2) = 3;
  glwebtools::MemBar(v12);
  glwebtools::Job::Job((glwebtools::Job::Self *)v21);
  *(uint32_t *)(v1 + 12) = 0;
  v21[0] = (uint32_t)(uintptr_t)(glwebtools::UrlConnectionCore::RunRequestStatic);
  v10 = *((uint32_t *)self + 3);
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 26) = 0;
  v21[1] = (uint32_t)(uintptr_t)(self);
  ImplData = (int)(uintptr_t)glwebtools::TaskGroup::PushTask(
                    *((glwebtools::TaskGroup::Self **)self + 24),
                    (unsigned int *)(v1 + 12),
                    (const glwebtools::Job::Self *)v21,
                    *(uint32_t *)(v10 + 48));
LABEL_12:
  glwebtools::Mutex::Unlock((glwebtools::UrlConnectionCore::Self *)((char *)self + 80));
  return ImplData;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnectionCore::RunRequest  (binary VA: 0x13ecc10)
// Original: glwebtools::UrlConnectionCore::RunRequest
// ----------------------------------------------------------------------------
int glwebtools::UrlConnectionCore::RunRequest(int a1, glwebtools::UrlConnectionCore::Self *self)
{
  int v2;
  unsigned int v3;
  int v4;
  int v5;
  void (***v6)(uint32_t);
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  char *v10;
  char *v11;
  char v12;
  char v13;
  char *v14;
  int v15;
  char v16;
  unsigned int v17;
  char *v18;
  int v19;
  void *v21;
  const void *HeaderField;
  bool v23;
  void *v24;
  void *v25;
  time_t CurrentTimestamp;
  void *v27;
  void *v28;
  void *v29;
  char *v30;
  uint32_t *v31;
  int v32;
  void *v33;
  void *v34;
  char *v35;
  char *v36;
  void *v37;
  void *v38;
  void *v39;
  char *v40;
  void *v41;
  void *v42;
  void *v43;
  void *v44;
  char *v45;
  glwebtools::Self *v46;
  void *v47;
  void *v48;
  void *v49;
  void *v50;
  void *v51;
  void *v52;
  double v53; // xmm0_8
  void *v54;
  void *v55;
  void *v56;
  void *v57;
  void *v58;
  void *v59;
  char *v60;
  glwebtools::Self *v61;
  void *v62;
  char *v63;
  glwebtools::Self *v64;
  void *v65;
  void *v66;
  char *v67;
  glwebtools::Json::Value::Self *v68;
  glwebtools::Self *v69;
  const glwebtools::Json::Value::Self *v70;
  glwebtools::Json::Value::Self *v71;
  glwebtools::Json::Value::Self *v72;
  void *v73;
  void *v74;
  void *v75;
  void *v76;
  const glwebtools::Json::Value::Self *v77;
  glwebtools::Json::Value::Self *v78;
  glwebtools::Json::Value::Self *v79;
  glwebtools::Json::Value::Self *v80;
  void *v81;
  char *v82;
  char *v83;
  void *v84;
  void *v85;
  void *v86;
  char *v87;
  void *v88;
  void *v89;
  glwebtools::Json::Value::Self *v90;
  void *v91;
  void *v92;
  void *v93;
  char *v94;
  const glwebtools::Json::Value::Self *v95;
  glwebtools::Json::Value::Self *v96;
  glwebtools::Json::Value::Self *v97;
  glwebtools::Json::Value::Self *Root;
  const glwebtools::Json::Value::Self *v99;
  glwebtools::Json::Value::Self *v100;
  glwebtools::Json::Value::Self *v101;
  glwebtools::Json::Value::Self *v102;
  glwebtools::Json::Value::Self *v103;
  void *v104;
  void *v105;
  void *v106;
  char *v107;
  typedef glwebtools::Self *_g4_t_s;
  typedef glwebtools::Json::Value::Self *_g4_t_v109;
  typedef glwebtools::Json::Value::Self *_g4_t_v110;
  typedef uint32_t *_g4_t_v111;
  typedef char _g4_t_v112;
  typedef unsigned int _g4_t_v113;
  typedef int _g4_t_v114;
  typedef int _g4_t_v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef int _g4_t_v118;
  typedef int _g4_t_v119;
  typedef int _g4_t_v120;
  typedef int _g4_t_v121;
  typedef int _g4_t_v122;
  typedef int _g4_t_v123;
  typedef int _g4_t_v124;
  typedef int _g4_t_v125;
  typedef int _g4_t_v126;
  typedef int _g4_t_v127;
  typedef char *_g4_t_v128;
  typedef const char *_g4_t_v129;
  typedef char *_g4_t_nptr;
  typedef int _g4_t_v131;
  typedef int _g4_t_v132;
  typedef void *_g4_t_v133;
  typedef unsigned int _g4_t_v134;
  typedef int _g4_t_v135;
  typedef int _g4_t_v136;
  typedef unsigned int _g4_t_v137[2];
  typedef double _g4_t_v138;
  typedef int _g4_t_v139[2];
  typedef int _g4_t_v140[2];
  typedef int _g4_t_v141[2];
  typedef int _g4_t_v142[2];
  typedef int _g4_t_v143[2];
  typedef int _g4_t_v144;
  typedef char *_g4_t_v145;
  typedef int _g4_t_v146[2];
  typedef int _g4_t_v147[2];
  typedef int _g4_t_v148[2];
  typedef int _g4_t_v149[2];
  typedef int _g4_t_v150[2];
  typedef int _g4_t_v151[2];
  typedef int _g4_t_v152[2];
  typedef int _g4_t_v153[2];
  typedef int _g4_t_v154[2];
  typedef int _g4_t_v155[2];
  typedef int _g4_t_v156[2];
  typedef int _g4_t_v157[2];
  typedef int _g4_t_v158[2];
  typedef int _g4_t_v159[2];
  typedef int _g4_t_v160;
  typedef char *_g4_t_v161;
  typedef int _g4_t_v162[2];
  typedef int _g4_t_v163[2];
  typedef int _g4_t_v164;
  typedef char *_g4_t_v165;
  typedef int _g4_t_v166[2];
  typedef int _g4_t_v167[2];
  typedef int _g4_t_v168[2];
  typedef int _g4_t_v169[2];
  typedef int _g4_t_v170[2];
  typedef int _g4_t_v171[2];
  typedef int _g4_t_v172[2];
  typedef int _g4_t_v173[2];
  typedef int _g4_t_v174[2];
  typedef int _g4_t_v175[2];
  typedef int _g4_t_v176[2];
  typedef int _g4_t_v177[2];
  typedef int _g4_t_v178[2];
  typedef int _g4_t_v179;
  typedef char *_g4_t_v180;
  typedef int _g4_t_v181[2];
  typedef int _g4_t_v182[2];
  typedef int _g4_t_v183[2];
  typedef int _g4_t_v184[2];
  typedef int _g4_t_v185[2];
  typedef uint8_t _g4_t_v186[16];
  typedef uint8_t _g4_t_v187[16];
  typedef uint8_t _g4_t_v188[16];
  typedef char _g4_t_v189[16];
  typedef char _g4_t_v190[20];
  typedef uint8_t _g4_t_v191[16];
  typedef int _g4_t_v192;
  typedef uint8_t _g4_t_v193[16];
  typedef int _g4_t_v194;
  typedef char _g4_t_v195[20];
  typedef uint8_t _g4_t_v196[16];
  typedef int _g4_t_v197;
  typedef char *_g4_t_v198[5];
  typedef uint8_t _g4_t_v199[16];
  typedef char *_g4_t_v200;
  typedef int _g4_t_v201;
  typedef int _g4_t_v202;
  typedef int (**_g4_t_v203)(int);
  typedef int (**_g4_t_v204)(int);
  typedef int _g4_t_v205;
  typedef int _g4_t_v206;
  typedef int _g4_t_v207;
  typedef uint8_t *_g4_t_v208;
  typedef int _g4_t_v209;
  typedef int _g4_t_v210;
  typedef char _g4_t_v211[4];
  typedef int _g4_t_v212;
  typedef uint32_t *_g4_t_v213;
  typedef uint32_t _g4_t_v214[29];
  typedef char _g4_t_v215;
  typedef char _g4_t_v216;
  typedef int _g4_t_v217;
  typedef int _g4_t_v218;
  typedef int _g4_t_v219;
  typedef int _g4_t_v220;
  enum : size_t {
    _g4_s0 = 1056u,
    _g4_s1 = (0u + sizeof(_g4_t_s)) > _g4_s0 ? (0u + sizeof(_g4_t_s)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v109)) > _g4_s1 ? (16u + sizeof(_g4_t_v109)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v110)) > _g4_s2 ? (16u + sizeof(_g4_t_v110)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v111)) > _g4_s3 ? (20u + sizeof(_g4_t_v111)) : _g4_s3,
    _g4_s5 = (39u + sizeof(_g4_t_v112)) > _g4_s4 ? (39u + sizeof(_g4_t_v112)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v113)) > _g4_s5 ? (40u + sizeof(_g4_t_v113)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v114)) > _g4_s6 ? (44u + sizeof(_g4_t_v114)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v115)) > _g4_s7 ? (60u + sizeof(_g4_t_v115)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v116)) > _g4_s8 ? (64u + sizeof(_g4_t_v116)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v117)) > _g4_s9 ? (68u + sizeof(_g4_t_v117)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v118)) > _g4_s10 ? (72u + sizeof(_g4_t_v118)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v119)) > _g4_s11 ? (76u + sizeof(_g4_t_v119)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v120)) > _g4_s12 ? (80u + sizeof(_g4_t_v120)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v121)) > _g4_s13 ? (84u + sizeof(_g4_t_v121)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v122)) > _g4_s14 ? (88u + sizeof(_g4_t_v122)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v123)) > _g4_s15 ? (92u + sizeof(_g4_t_v123)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v124)) > _g4_s16 ? (96u + sizeof(_g4_t_v124)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v125)) > _g4_s17 ? (100u + sizeof(_g4_t_v125)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v126)) > _g4_s18 ? (104u + sizeof(_g4_t_v126)) : _g4_s18,
    _g4_s20 = (168u + sizeof(_g4_t_v127)) > _g4_s19 ? (168u + sizeof(_g4_t_v127)) : _g4_s19,
    _g4_s21 = (172u + sizeof(_g4_t_v128)) > _g4_s20 ? (172u + sizeof(_g4_t_v128)) : _g4_s20,
    _g4_s22 = (176u + sizeof(_g4_t_v129)) > _g4_s21 ? (176u + sizeof(_g4_t_v129)) : _g4_s21,
    _g4_s23 = (180u + sizeof(_g4_t_nptr)) > _g4_s22 ? (180u + sizeof(_g4_t_nptr)) : _g4_s22,
    _g4_s24 = (184u + sizeof(_g4_t_v131)) > _g4_s23 ? (184u + sizeof(_g4_t_v131)) : _g4_s23,
    _g4_s25 = (188u + sizeof(_g4_t_v132)) > _g4_s24 ? (188u + sizeof(_g4_t_v132)) : _g4_s24,
    _g4_s26 = (192u + sizeof(_g4_t_v133)) > _g4_s25 ? (192u + sizeof(_g4_t_v133)) : _g4_s25,
    _g4_s27 = (196u + sizeof(_g4_t_v134)) > _g4_s26 ? (196u + sizeof(_g4_t_v134)) : _g4_s26,
    _g4_s28 = (200u + sizeof(_g4_t_v135)) > _g4_s27 ? (200u + sizeof(_g4_t_v135)) : _g4_s27,
    _g4_s29 = (204u + sizeof(_g4_t_v136)) > _g4_s28 ? (204u + sizeof(_g4_t_v136)) : _g4_s28,
    _g4_s30 = (208u + sizeof(_g4_t_v137)) > _g4_s29 ? (208u + sizeof(_g4_t_v137)) : _g4_s29,
    _g4_s31 = (216u + sizeof(_g4_t_v138)) > _g4_s30 ? (216u + sizeof(_g4_t_v138)) : _g4_s30,
    _g4_s32 = (224u + sizeof(_g4_t_v139)) > _g4_s31 ? (224u + sizeof(_g4_t_v139)) : _g4_s31,
    _g4_s33 = (232u + sizeof(_g4_t_v140)) > _g4_s32 ? (232u + sizeof(_g4_t_v140)) : _g4_s32,
    _g4_s34 = (240u + sizeof(_g4_t_v141)) > _g4_s33 ? (240u + sizeof(_g4_t_v141)) : _g4_s33,
    _g4_s35 = (248u + sizeof(_g4_t_v142)) > _g4_s34 ? (248u + sizeof(_g4_t_v142)) : _g4_s34,
    _g4_s36 = (256u + sizeof(_g4_t_v143)) > _g4_s35 ? (256u + sizeof(_g4_t_v143)) : _g4_s35,
    _g4_s37 = (264u + sizeof(_g4_t_v144)) > _g4_s36 ? (264u + sizeof(_g4_t_v144)) : _g4_s36,
    _g4_s38 = (268u + sizeof(_g4_t_v145)) > _g4_s37 ? (268u + sizeof(_g4_t_v145)) : _g4_s37,
    _g4_s39 = (272u + sizeof(_g4_t_v146)) > _g4_s38 ? (272u + sizeof(_g4_t_v146)) : _g4_s38,
    _g4_s40 = (280u + sizeof(_g4_t_v147)) > _g4_s39 ? (280u + sizeof(_g4_t_v147)) : _g4_s39,
    _g4_s41 = (288u + sizeof(_g4_t_v148)) > _g4_s40 ? (288u + sizeof(_g4_t_v148)) : _g4_s40,
    _g4_s42 = (296u + sizeof(_g4_t_v149)) > _g4_s41 ? (296u + sizeof(_g4_t_v149)) : _g4_s41,
    _g4_s43 = (304u + sizeof(_g4_t_v150)) > _g4_s42 ? (304u + sizeof(_g4_t_v150)) : _g4_s42,
    _g4_s44 = (312u + sizeof(_g4_t_v151)) > _g4_s43 ? (312u + sizeof(_g4_t_v151)) : _g4_s43,
    _g4_s45 = (320u + sizeof(_g4_t_v152)) > _g4_s44 ? (320u + sizeof(_g4_t_v152)) : _g4_s44,
    _g4_s46 = (328u + sizeof(_g4_t_v153)) > _g4_s45 ? (328u + sizeof(_g4_t_v153)) : _g4_s45,
    _g4_s47 = (336u + sizeof(_g4_t_v154)) > _g4_s46 ? (336u + sizeof(_g4_t_v154)) : _g4_s46,
    _g4_s48 = (344u + sizeof(_g4_t_v155)) > _g4_s47 ? (344u + sizeof(_g4_t_v155)) : _g4_s47,
    _g4_s49 = (352u + sizeof(_g4_t_v156)) > _g4_s48 ? (352u + sizeof(_g4_t_v156)) : _g4_s48,
    _g4_s50 = (360u + sizeof(_g4_t_v157)) > _g4_s49 ? (360u + sizeof(_g4_t_v157)) : _g4_s49,
    _g4_s51 = (368u + sizeof(_g4_t_v158)) > _g4_s50 ? (368u + sizeof(_g4_t_v158)) : _g4_s50,
    _g4_s52 = (376u + sizeof(_g4_t_v159)) > _g4_s51 ? (376u + sizeof(_g4_t_v159)) : _g4_s51,
    _g4_s53 = (384u + sizeof(_g4_t_v160)) > _g4_s52 ? (384u + sizeof(_g4_t_v160)) : _g4_s52,
    _g4_s54 = (388u + sizeof(_g4_t_v161)) > _g4_s53 ? (388u + sizeof(_g4_t_v161)) : _g4_s53,
    _g4_s55 = (392u + sizeof(_g4_t_v162)) > _g4_s54 ? (392u + sizeof(_g4_t_v162)) : _g4_s54,
    _g4_s56 = (400u + sizeof(_g4_t_v163)) > _g4_s55 ? (400u + sizeof(_g4_t_v163)) : _g4_s55,
    _g4_s57 = (408u + sizeof(_g4_t_v164)) > _g4_s56 ? (408u + sizeof(_g4_t_v164)) : _g4_s56,
    _g4_s58 = (412u + sizeof(_g4_t_v165)) > _g4_s57 ? (412u + sizeof(_g4_t_v165)) : _g4_s57,
    _g4_s59 = (416u + sizeof(_g4_t_v166)) > _g4_s58 ? (416u + sizeof(_g4_t_v166)) : _g4_s58,
    _g4_s60 = (424u + sizeof(_g4_t_v167)) > _g4_s59 ? (424u + sizeof(_g4_t_v167)) : _g4_s59,
    _g4_s61 = (432u + sizeof(_g4_t_v168)) > _g4_s60 ? (432u + sizeof(_g4_t_v168)) : _g4_s60,
    _g4_s62 = (440u + sizeof(_g4_t_v169)) > _g4_s61 ? (440u + sizeof(_g4_t_v169)) : _g4_s61,
    _g4_s63 = (448u + sizeof(_g4_t_v170)) > _g4_s62 ? (448u + sizeof(_g4_t_v170)) : _g4_s62,
    _g4_s64 = (456u + sizeof(_g4_t_v171)) > _g4_s63 ? (456u + sizeof(_g4_t_v171)) : _g4_s63,
    _g4_s65 = (464u + sizeof(_g4_t_v172)) > _g4_s64 ? (464u + sizeof(_g4_t_v172)) : _g4_s64,
    _g4_s66 = (472u + sizeof(_g4_t_v173)) > _g4_s65 ? (472u + sizeof(_g4_t_v173)) : _g4_s65,
    _g4_s67 = (480u + sizeof(_g4_t_v174)) > _g4_s66 ? (480u + sizeof(_g4_t_v174)) : _g4_s66,
    _g4_s68 = (488u + sizeof(_g4_t_v175)) > _g4_s67 ? (488u + sizeof(_g4_t_v175)) : _g4_s67,
    _g4_s69 = (496u + sizeof(_g4_t_v176)) > _g4_s68 ? (496u + sizeof(_g4_t_v176)) : _g4_s68,
    _g4_s70 = (504u + sizeof(_g4_t_v177)) > _g4_s69 ? (504u + sizeof(_g4_t_v177)) : _g4_s69,
    _g4_s71 = (512u + sizeof(_g4_t_v178)) > _g4_s70 ? (512u + sizeof(_g4_t_v178)) : _g4_s70,
    _g4_s72 = (520u + sizeof(_g4_t_v179)) > _g4_s71 ? (520u + sizeof(_g4_t_v179)) : _g4_s71,
    _g4_s73 = (524u + sizeof(_g4_t_v180)) > _g4_s72 ? (524u + sizeof(_g4_t_v180)) : _g4_s72,
    _g4_s74 = (528u + sizeof(_g4_t_v181)) > _g4_s73 ? (528u + sizeof(_g4_t_v181)) : _g4_s73,
    _g4_s75 = (536u + sizeof(_g4_t_v182)) > _g4_s74 ? (536u + sizeof(_g4_t_v182)) : _g4_s74,
    _g4_s76 = (544u + sizeof(_g4_t_v183)) > _g4_s75 ? (544u + sizeof(_g4_t_v183)) : _g4_s75,
    _g4_s77 = (552u + sizeof(_g4_t_v184)) > _g4_s76 ? (552u + sizeof(_g4_t_v184)) : _g4_s76,
    _g4_s78 = (560u + sizeof(_g4_t_v185)) > _g4_s77 ? (560u + sizeof(_g4_t_v185)) : _g4_s77,
    _g4_s79 = (568u + sizeof(_g4_t_v186)) > _g4_s78 ? (568u + sizeof(_g4_t_v186)) : _g4_s78,
    _g4_s80 = (584u + sizeof(_g4_t_v187)) > _g4_s79 ? (584u + sizeof(_g4_t_v187)) : _g4_s79,
    _g4_s81 = (600u + sizeof(_g4_t_v188)) > _g4_s80 ? (600u + sizeof(_g4_t_v188)) : _g4_s80,
    _g4_s82 = (616u + sizeof(_g4_t_v189)) > _g4_s81 ? (616u + sizeof(_g4_t_v189)) : _g4_s81,
    _g4_s83 = (632u + sizeof(_g4_t_v190)) > _g4_s82 ? (632u + sizeof(_g4_t_v190)) : _g4_s82,
    _g4_s84 = (652u + sizeof(_g4_t_v191)) > _g4_s83 ? (652u + sizeof(_g4_t_v191)) : _g4_s83,
    _g4_s85 = (668u + sizeof(_g4_t_v192)) > _g4_s84 ? (668u + sizeof(_g4_t_v192)) : _g4_s84,
    _g4_s86 = (672u + sizeof(_g4_t_v193)) > _g4_s85 ? (672u + sizeof(_g4_t_v193)) : _g4_s85,
    _g4_s87 = (688u + sizeof(_g4_t_v194)) > _g4_s86 ? (688u + sizeof(_g4_t_v194)) : _g4_s86,
    _g4_s88 = (692u + sizeof(_g4_t_v195)) > _g4_s87 ? (692u + sizeof(_g4_t_v195)) : _g4_s87,
    _g4_s89 = (712u + sizeof(_g4_t_v196)) > _g4_s88 ? (712u + sizeof(_g4_t_v196)) : _g4_s88,
    _g4_s90 = (728u + sizeof(_g4_t_v197)) > _g4_s89 ? (728u + sizeof(_g4_t_v197)) : _g4_s89,
    _g4_s91 = (732u + sizeof(_g4_t_v198)) > _g4_s90 ? (732u + sizeof(_g4_t_v198)) : _g4_s90,
    _g4_s92 = (752u + sizeof(_g4_t_v199)) > _g4_s91 ? (752u + sizeof(_g4_t_v199)) : _g4_s91,
    _g4_s93 = (768u + sizeof(_g4_t_v200)) > _g4_s92 ? (768u + sizeof(_g4_t_v200)) : _g4_s92,
    _g4_s94 = (772u + sizeof(_g4_t_v201)) > _g4_s93 ? (772u + sizeof(_g4_t_v201)) : _g4_s93,
    _g4_s95 = (776u + sizeof(_g4_t_v202)) > _g4_s94 ? (776u + sizeof(_g4_t_v202)) : _g4_s94,
    _g4_s96 = (780u + sizeof(_g4_t_v203)) > _g4_s95 ? (780u + sizeof(_g4_t_v203)) : _g4_s95,
    _g4_s97 = (784u + sizeof(_g4_t_v204)) > _g4_s96 ? (784u + sizeof(_g4_t_v204)) : _g4_s96,
    _g4_s98 = (788u + sizeof(_g4_t_v205)) > _g4_s97 ? (788u + sizeof(_g4_t_v205)) : _g4_s97,
    _g4_s99 = (792u + sizeof(_g4_t_v206)) > _g4_s98 ? (792u + sizeof(_g4_t_v206)) : _g4_s98,
    _g4_s100 = (796u + sizeof(_g4_t_v207)) > _g4_s99 ? (796u + sizeof(_g4_t_v207)) : _g4_s99,
    _g4_s101 = (800u + sizeof(_g4_t_v208)) > _g4_s100 ? (800u + sizeof(_g4_t_v208)) : _g4_s100,
    _g4_s102 = (804u + sizeof(_g4_t_v209)) > _g4_s101 ? (804u + sizeof(_g4_t_v209)) : _g4_s101,
    _g4_s103 = (808u + sizeof(_g4_t_v210)) > _g4_s102 ? (808u + sizeof(_g4_t_v210)) : _g4_s102,
    _g4_s104 = (812u + sizeof(_g4_t_v211)) > _g4_s103 ? (812u + sizeof(_g4_t_v211)) : _g4_s103,
    _g4_s105 = (816u + sizeof(_g4_t_v212)) > _g4_s104 ? (816u + sizeof(_g4_t_v212)) : _g4_s104,
    _g4_s106 = (820u + sizeof(_g4_t_v213)) > _g4_s105 ? (820u + sizeof(_g4_t_v213)) : _g4_s105,
    _g4_s107 = (824u + sizeof(_g4_t_v214)) > _g4_s106 ? (824u + sizeof(_g4_t_v214)) : _g4_s106,
    _g4_s108 = (940u + sizeof(_g4_t_v215)) > _g4_s107 ? (940u + sizeof(_g4_t_v215)) : _g4_s107,
    _g4_s109 = (941u + sizeof(_g4_t_v216)) > _g4_s108 ? (941u + sizeof(_g4_t_v216)) : _g4_s108,
    _g4_s110 = (944u + sizeof(_g4_t_v217)) > _g4_s109 ? (944u + sizeof(_g4_t_v217)) : _g4_s109,
    _g4_s111 = (948u + sizeof(_g4_t_v218)) > _g4_s110 ? (948u + sizeof(_g4_t_v218)) : _g4_s110,
    _g4_s112 = (952u + sizeof(_g4_t_v219)) > _g4_s111 ? (952u + sizeof(_g4_t_v219)) : _g4_s111,
    _g4_s113 = (956u + sizeof(_g4_t_v220)) > _g4_s112 ? (956u + sizeof(_g4_t_v220)) : _g4_s112
  };
  alignas(16) uint8_t _g4_sf[_g4_s113];
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 0u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 16u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 16u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 20u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 39u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 40u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 44u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 60u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 64u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 68u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 72u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 76u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 80u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 84u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 88u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 92u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 96u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 100u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 104u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 168u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 172u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 176u);
  _g4_t_nptr &nptr = *reinterpret_cast<_g4_t_nptr *>(_g4_sf + 180u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 184u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 188u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 192u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 196u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 200u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 204u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 208u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 216u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 224u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 232u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 240u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 248u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 256u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 264u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 268u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 272u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 280u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 288u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 296u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 304u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 312u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 320u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 328u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 336u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 344u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 352u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 360u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 368u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 376u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 384u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 388u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 392u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 400u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 408u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 412u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 416u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 424u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 432u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 440u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 448u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 456u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 464u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 472u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 480u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 488u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 496u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 504u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 512u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 520u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 524u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 528u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 536u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 544u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 552u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 560u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 568u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 584u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 600u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 616u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 632u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 652u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 668u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 672u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 688u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 692u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 712u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 728u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 732u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 752u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 768u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 772u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 776u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 780u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 784u);
  _g4_t_v205 &v205 = *reinterpret_cast<_g4_t_v205 *>(_g4_sf + 788u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 792u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 796u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 800u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 804u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 808u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 812u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 816u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 820u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 824u);
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 940u);
  _g4_t_v216 &v216 = *reinterpret_cast<_g4_t_v216 *>(_g4_sf + 941u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 944u);
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 948u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 952u);
  _g4_t_v220 &v220 = *reinterpret_cast<_g4_t_v220 *>(_g4_sf + 956u);

  v2 = *((uint32_t *)self + 18);
  if ( v2 == 0 )
  {
    v19 = -2147483645;
    goto LABEL_34;
  }
  v3 = curl_easy_perform(*(uint32_t *)(v2 + 4));
  v4 = *(uint32_t *)(v2 + 8);
  v113 = v3;
  if ( v4 != 0 )
  {
    v5 = *(uint32_t *)(v4 + 24);
    if ( v5 != 0 )
    {
      (*(void (**)(uint32_t))(*(uint32_t *)v5 + 12))(*(uint32_t *)(v4 + 24));
      v6 = *(void (****)(uint32_t))(v4 + 24);
      if ( v6 != nullptr )
      {
        (**v6)(*(uint32_t *)(v4 + 24));
        sub_4EBEE0(*(uint32_t *)(v4 + 24));
      }
      *(uint32_t *)(v4 + 24) = 0;
    }
  }
  v127 = 0;
  glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v190);
  v112 = *((uint8_t *)self + 68);
  if ( v112 != 0 )
  {
    sub_1900810(v214);
    v214[28] = 0;
    v215 = 0;
    v216 = 0;
    v217 = 0;
    v218 = 0;
    v219 = 0;
    v214[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    v220 = 0;
    v201 = (int)(uintptr_t)(&off_20AAF2C);
    *(int *)((char *)&v201 + (uint32_t)*(&off_20AAF2C - 3)) = (int)(uintptr_t)(&off_20AAF40);
    v202 = 0;
    sub_19119D0((char *)&v201 + *(uint32_t *)(v201 - 12), 0);
    v203 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
    *(int (***)(int))((char *)&v203 + (uint32_t)*(&off_20AAEEC - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF00);
    sub_19119D0((char *)&v203 + (uint32_t)(uintptr_t)(*(v203 - 3)), 0);
    v201 = (int)(uintptr_t)(&off_20AAF6C);
    *(int *)((char *)&v201 + (uint32_t)*(&off_20AAF6C - 3)) = (int)(uintptr_t)(&off_20AAF94);
    v205 = 0;
    v201 = (int)(uintptr_t)(&off_20AAFEC);
    v206 = 0;
    v207 = 0;
    v214[0] = (uint32_t)(uintptr_t)(&off_20AB014);
    v208 = nullptr;
    v209 = 0;
    v203 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
    v210 = 0;
    v204 = (int (**)(int))(uintptr_t)(&off_20AB2C8);
    sub_1903A70(v211);
    v212 = 24;
    v213 = &dword_213B814;
    v204 = (int (**)(int))(uintptr_t)(&off_20AADA8);
    sub_19119D0(v214, &v204);
    CurrentTimestamp = glwebtools::Time::GetCurrentTimestamp();
    sub_192D620(&v203, CurrentTimestamp);
    v198[0] = (char *)&dword_213B814;
    if ( v209 != 0 )
    {
      if ( v209 > (unsigned int)v207 )
      {
        sub_11A9950(&v136, v208, (uint8_t *)v209);
        g4_std::string::assign_str(v198, &v136);
        v59 = (void *)(v136 - 12);
        if ( (uint32_t *)(v136 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v136 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v59);
        }
      }
      else
      {
        sub_11A9950(&v135, v208, (uint8_t *)v207);
        g4_std::string::assign_str(v198, &v135);
        v27 = (void *)(v135 - 12);
        if ( (uint32_t *)(v135 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v135 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v27);
        }
      }
    }
    else
    {
      g4_std::string::assign_str(v198, &v213);
    }
    v128 = v198[0];
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v139), "timestamp", (int)(uintptr_t)(&v117) + 1);
    v139[1] = (int)(uintptr_t)(&v128);
    glwebtools::op_char_const_const((glwebtools::JsonWriter::Self *)v190, (int)(uintptr_t)(v139));
    v28 = (void *)(v139[0] - 12);
    if ( (uint32_t *)(v139[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v139[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v28);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v140), "glwebtools_instance", (int)(uintptr_t)(&v117) + 2);
    v140[1] = (int)(uintptr_t)(self) + 76;
    glwebtools::op_std_string_const((glwebtools::JsonWriter::Self *)v190, (int)(uintptr_t)(v140));
    v29 = (void *)(v140[0] - 12);
    if ( (uint32_t *)(v140[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v140[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v29);
    }
    v30 = v198[0] - 12;
    if ( (uint32_t *)v198[0] - 3 != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)v198[0] - 1, 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v30);
    }
    v201 = (int)(uintptr_t)(&off_20AAFEC);
    v214[0] = (uint32_t)(uintptr_t)(&off_20AB014);
    v203 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
    v204 = (int (**)(int))(uintptr_t)(&off_20AADA8);
    v31 = v213 - 3;
    if ( v213 - 3 != dword_213B808 && __sync_fetch_and_add(v213 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v31);
    v204 = (int (**)(int))(uintptr_t)(&off_20AB2C8);
    sub_1902180(v211);
    v201 = (int)(uintptr_t)(&off_20AAF6C);
    *(int *)((char *)&v201 + (uint32_t)*(&off_20AAF6C - 3)) = (int)(uintptr_t)(&off_20AAF94);
    v203 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
    *(int (***)(int))((char *)&v203 + (uint32_t)*(&off_20AAEEC - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF00);
    v201 = (int)(uintptr_t)(&off_20AAF2C);
    *(int *)((char *)&v201 + (uint32_t)*(&off_20AAF2C - 3)) = (int)(uintptr_t)(&off_20AAF40);
    v202 = 0;
    v214[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    sub_1900B90(v214);
    glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v191);
    glwebtools::JsonWriter::opIndex((glwebtools::JsonWriter::Self *)v193, (glwebtools::JsonWriter::Self *)v190, "request");
    glwebtools::Json::Value::opAssign((glwebtools::Json::Value::Self *)v191, (const glwebtools::Json::Value::Self *)v193);
    v192 = v194;
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v193);
    v32 = *(uint32_t *)(v2 + 4);
    v129 = nullptr;
    curl_easy_getinfo(v32, 1048577, &v129);
    switch ( *(uint32_t *)(*((uint32_t *)self + 3) + 20) )
    {
      case 1:
        g4_std::string::construct_from_cstr((int)(uintptr_t)(v141), "method", (int)(uintptr_t)(&v117) + 3);
        v141[1] = (int)(uintptr_t)(&off_1B6AF81);
        sub_59DA40((glwebtools::JsonWriter::Self *)v191, (int)(uintptr_t)(v141));
        v33 = (void *)(v141[0] - 12);
        if ( (uint32_t *)(v141[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v141[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          goto LABEL_248;
        }
        break;
      case 2:
        g4_std::string::construct_from_cstr((int)(uintptr_t)(v142), "method", (int)(uintptr_t)(&v118));
        v142[1] = (int)(uintptr_t)("POST");
        glwebtools::op_char_const_5((glwebtools::JsonWriter::Self *)v191, (int)(uintptr_t)(v142));
        v33 = (void *)(v142[0] - 12);
        if ( (uint32_t *)(v142[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v142[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          goto LABEL_248;
        }
        break;
      case 3:
        g4_std::string::construct_from_cstr((int)(uintptr_t)(v143), "method", (int)(uintptr_t)(&v118) + 1);
        v143[1] = (int)(uintptr_t)("HEAD");
        glwebtools::op_char_const_5((glwebtools::JsonWriter::Self *)v191, (int)(uintptr_t)(v143));
        v33 = (void *)(v143[0] - 12);
        if ( (uint32_t *)(v143[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v143[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          goto LABEL_248;
        }
        break;
      case 4:
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v144), "method", (int)(uintptr_t)(&v118) + 2);
        v145 = "DELETE";
        g4_std::string::construct_copy(v182, &v144);
        v60 = v145;
        v182[1] = (int)(uintptr_t)(v145);
        if ( (uint8_t)glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v191) == 0 )
        {
          glwebtools::Json::Value::Construct(v186, 7);
          Root = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v191);
          glwebtools::Json::Value::opAssign(Root, (const glwebtools::Json::Value::Self *)v186);
          glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v186);
        }
        glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)&v201);
        v61 = (glwebtools::Self *)glwebtools::opShl((glwebtools::JsonWriter::Self *)&v201, v60);
        if ( glwebtools::IsOperationSuccess(v61) )
        {
          v95 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)&v201);
          v96 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v191);
          v97 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v96, (int)(uintptr_t)(v182));
          glwebtools::Json::Value::opAssign(v97, v95);
        }
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)&v201);
        v62 = (void *)(v182[0] - 12);
        if ( (uint32_t *)(v182[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v182[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v62);
        }
        v33 = (void *)(v144 - 12);
        if ( (uint32_t *)(v144 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v144 - 4), 0xFFFFFFFF) <= 0 )
        {
          goto LABEL_248;
        }
        break;
      case 5:
        g4_std::string::construct_from_cstr((int)(uintptr_t)(v146), "method", (int)(uintptr_t)(&v118) + 3);
        v146[1] = (int)(uintptr_t)("PUT");
        sub_59DA40((glwebtools::JsonWriter::Self *)v191, (int)(uintptr_t)(v146));
        v33 = (void *)(v146[0] - 12);
        if ( (uint32_t *)(v146[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v146[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          goto LABEL_248;
        }
        break;
      default:
        g4_std::string::construct_from_cstr((int)(uintptr_t)(v147), "method", (int)(uintptr_t)(&v119));
        v147[1] = (int)(uintptr_t)("OTHER");
        glwebtools::op_char_const_6((glwebtools::JsonWriter::Self *)v191, (int)(uintptr_t)(v147));
        v33 = (void *)(v147[0] - 12);
        if ( (uint32_t *)(v147[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v147[0] - 4), 0xFFFFFFFF) <= 0 )
        {
LABEL_248:
          g4_std::string::Rep::M_destroy(v33);
        }
        break;
    }
    if ( v129 != nullptr )
    {
      if ( memcmp(v129, "https", 5u) == 0 )
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(v148), "protocol", (int)(uintptr_t)(&v119) + 1);
        v148[1] = (int)(uintptr_t)("HTTPS");
        glwebtools::op_char_const_6((glwebtools::JsonWriter::Self *)v191, (int)(uintptr_t)(v148));
        v81 = (void *)(v148[0] - 12);
        if ( (uint32_t *)(v148[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v148[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v81);
        }
        v82 = (char *)(v129 + 8);
        v83 = nullptr;
        v133 = (void *)(strchr(v129 + 8, 47));
        if ( v133 != nullptr )
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(v149), "path", (int)(uintptr_t)(&v119) + 2);
          v149[1] = (int)(uintptr_t)(&v133);
          glwebtools::op_char_const_const((glwebtools::JsonWriter::Self *)v191, (int)(uintptr_t)(v149));
          v84 = (void *)(v149[0] - 12);
          if ( (uint32_t *)(v149[0] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v149[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v84);
          }
          sub_193A970((int)(uintptr_t)(&v201), (void *)(v129 + 8), (uint8_t *)v133 - (uint8_t *)((v129 + 8)), (int)(uintptr_t)(&v115));
          g4_std::string::construct_from_cstr((int)(uintptr_t)(v150), "authority_port", (int)(uintptr_t)(&v119) + 3);
          v150[1] = (int)(uintptr_t)(&v201);
          glwebtools::op_std_string_const((glwebtools::JsonWriter::Self *)v191, (int)(uintptr_t)(v150));
          v85 = (void *)(v150[0] - 12);
          if ( (uint32_t *)(v150[0] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v150[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v85);
          }
          v86 = (void *)(v201 - 12);
          if ( (uint32_t *)(v201 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v201 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v86);
          }
          v83 = (char *)v133;
          v82 = (char *)(v129 + 8);
        }
        v87 = strchr(v82, 58);
        if ( v87 != nullptr && v87 < v83 )
        {
          v109 = (glwebtools::Json::Value::Self *)v87;
          sub_193A970((int)(uintptr_t)(&nptr), v87 + 1, v83 - (v87 + 1), (int)(uintptr_t)(&v115) + 1);
          v137[0] = atoi(nptr);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(v151), "port", (int)(uintptr_t)(&v120));
          v151[1] = (int)(uintptr_t)(v137);
          glwebtools::op_int_const((glwebtools::JsonWriter::Self *)v191, (int)(uintptr_t)(v151));
          v90 = v109;
          v91 = (void *)(v151[0] - 12);
          if ( (uint32_t *)(v151[0] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v151[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v91);
            v90 = v109;
          }
          sub_193A970((int)(uintptr_t)(&v201), (void *)(v129 + 8), v90 - (glwebtools::Json::Value::Self *)(v129 + 8), (int)(uintptr_t)(&v115) + 2);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(v152), "authority", (int)(uintptr_t)(&v120) + 1);
          v152[1] = (int)(uintptr_t)(&v201);
          glwebtools::op_std_string_const((glwebtools::JsonWriter::Self *)v191, (int)(uintptr_t)(v152));
          v92 = (void *)(v152[0] - 12);
          if ( (uint32_t *)(v152[0] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v152[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v92);
          }
          v93 = (void *)(v201 - 12);
          if ( (uint32_t *)(v201 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v201 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v93);
          }
          v94 = nptr - 12;
          if ( nptr - 12 != (char *)dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)nptr - 1, 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v94);
          }
        }
        else
        {
          sub_193A970((int)(uintptr_t)(&v201), v82, v83 - v82, (int)(uintptr_t)(&v115) + 3);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(v153), "authority", (int)(uintptr_t)(&v120) + 2);
          v153[1] = (int)(uintptr_t)(&v201);
          glwebtools::op_std_string_const((glwebtools::JsonWriter::Self *)v191, (int)(uintptr_t)(v153));
          v88 = (void *)(v153[0] - 12);
          if ( (uint32_t *)(v153[0] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v153[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v88);
          }
          v89 = (void *)(v201 - 12);
          if ( (uint32_t *)(v201 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v201 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v89);
          }
        }
      }
      else if ( memcmp(v129, "http", 4u) == 0 )
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(v154), "protocol", (int)(uintptr_t)(&v120) + 3);
        v154[1] = (int)(uintptr_t)("HTTP");
        glwebtools::op_char_const_5((glwebtools::JsonWriter::Self *)v191, (int)(uintptr_t)(v154));
        v34 = (void *)(v154[0] - 12);
        if ( (uint32_t *)(v154[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v154[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v34);
        }
        v35 = (char *)(v129 + 7);
        v36 = nullptr;
        v133 = (void *)(strchr(v129 + 7, 47));
        if ( v133 != nullptr )
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(v155), "path", (int)(uintptr_t)(&v121));
          v155[1] = (int)(uintptr_t)(&v133);
          glwebtools::op_char_const_const((glwebtools::JsonWriter::Self *)v191, (int)(uintptr_t)(v155));
          v37 = (void *)(v155[0] - 12);
          if ( (uint32_t *)(v155[0] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v155[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v37);
          }
          sub_193A970((int)(uintptr_t)(&v201), (void *)(v129 + 7), (uint8_t *)v133 - (uint8_t *)((v129 + 7)), (int)(uintptr_t)(&v116));
          g4_std::string::construct_from_cstr((int)(uintptr_t)(v156), "authority_port", (int)(uintptr_t)(&v121) + 1);
          v156[1] = (int)(uintptr_t)(&v201);
          glwebtools::op_std_string_const((glwebtools::JsonWriter::Self *)v191, (int)(uintptr_t)(v156));
          v38 = (void *)(v156[0] - 12);
          if ( (uint32_t *)(v156[0] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v156[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v38);
          }
          v39 = (void *)(v201 - 12);
          if ( (uint32_t *)(v201 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v201 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v39);
          }
          v36 = (char *)v133;
          v35 = (char *)(v129 + 7);
        }
        v40 = strchr(v35, 58);
        if ( v40 != nullptr && v40 < v36 )
        {
          v110 = (glwebtools::Json::Value::Self *)v40;
          sub_193A970((int)(uintptr_t)(&nptr), v40 + 1, v36 - (v40 + 1), (int)(uintptr_t)(&v116) + 1);
          v137[0] = atoi(nptr);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(v157), "port", (int)(uintptr_t)(&v121) + 2);
          v157[1] = (int)(uintptr_t)(v137);
          glwebtools::op_int_const((glwebtools::JsonWriter::Self *)v191, (int)(uintptr_t)(v157));
          v103 = v110;
          v104 = (void *)(v157[0] - 12);
          if ( (uint32_t *)(v157[0] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v157[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v104);
            v103 = v110;
          }
          sub_193A970((int)(uintptr_t)(&v201), (void *)(v129 + 7), v103 - (glwebtools::Json::Value::Self *)(v129 + 7), (int)(uintptr_t)(&v116) + 2);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(v158), "authority", (int)(uintptr_t)(&v121) + 3);
          v158[1] = (int)(uintptr_t)(&v201);
          glwebtools::op_std_string_const((glwebtools::JsonWriter::Self *)v191, (int)(uintptr_t)(v158));
          v105 = (void *)(v158[0] - 12);
          if ( (uint32_t *)(v158[0] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v158[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v105);
          }
          v106 = (void *)(v201 - 12);
          if ( (uint32_t *)(v201 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v201 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v106);
          }
          v107 = nptr - 12;
          if ( nptr - 12 != (char *)dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)nptr - 1, 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v107);
          }
        }
        else
        {
          sub_193A970((int)(uintptr_t)(&v201), v35, v36 - v35, (int)(uintptr_t)(&v116) + 3);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(v159), "authority", (int)(uintptr_t)(&v122));
          v159[1] = (int)(uintptr_t)(&v201);
          glwebtools::op_std_string_const((glwebtools::JsonWriter::Self *)v191, (int)(uintptr_t)(v159));
          v41 = (void *)(v159[0] - 12);
          if ( (uint32_t *)(v159[0] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v159[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v41);
          }
          v42 = (void *)(v201 - 12);
          if ( (uint32_t *)(v201 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v201 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v42);
          }
        }
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v160), "protocol", (int)(uintptr_t)(&v122) + 1);
        v161 = "UNKNOWN";
        g4_std::string::construct_copy(v183, &v160);
        v63 = v161;
        v183[1] = (int)(uintptr_t)(v161);
        if ( (uint8_t)glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v191) == 0 )
        {
          glwebtools::Json::Value::Construct(v187, 7);
          v102 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v191);
          glwebtools::Json::Value::opAssign(v102, (const glwebtools::Json::Value::Self *)v187);
          glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v187);
        }
        glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)&v201);
        v64 = (glwebtools::Self *)glwebtools::opShl((glwebtools::JsonWriter::Self *)&v201, v63);
        if ( glwebtools::IsOperationSuccess(v64) )
        {
          v99 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)&v201);
          v100 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v191);
          v101 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v100, (int)(uintptr_t)(v183));
          glwebtools::Json::Value::opAssign(v101, v99);
        }
        glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)&v201);
        v65 = (void *)(v183[0] - 12);
        if ( (uint32_t *)(v183[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v183[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v65);
        }
        v66 = (void *)(v160 - 12);
        if ( (uint32_t *)(v160 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v160 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v66);
        }
      }
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v162), "effective_url", (int)(uintptr_t)(&v122) + 2);
      v162[1] = (int)(uintptr_t)(&v129);
      glwebtools::op_char_const_const((glwebtools::JsonWriter::Self *)v191, (int)(uintptr_t)(v162));
      v43 = (void *)(v162[0] - 12);
      if ( (uint32_t *)(v162[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v162[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v43);
      }
    }
    v114 = *((uint32_t *)self + 3) + 16;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v163), "data", (int)(uintptr_t)(&v122) + 3);
    v163[1] = v114;
    glwebtools::op_std_string_const((glwebtools::JsonWriter::Self *)v191, (int)(uintptr_t)(v163));
    v44 = (void *)(v163[0] - 12);
    if ( (uint32_t *)(v163[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v163[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v44);
    }
    glwebtools::JsonWriter::opIndex((glwebtools::JsonWriter::Self *)v198, (glwebtools::JsonWriter::Self *)v190, "timing");
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v164), "unit", (int)(uintptr_t)(&v123));
    v165 = "s";
    g4_std::string::construct_copy(v184, &v164);
    v45 = v165;
    v184[1] = (int)(uintptr_t)(v165);
    if ( (uint8_t)glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v198) == 0 )
    {
      glwebtools::Json::Value::Construct(v188, 7);
      v80 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v198);
      glwebtools::Json::Value::opAssign(v80, (const glwebtools::Json::Value::Self *)v188);
      glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v188);
    }
    glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)&v201);
    v46 = (glwebtools::Self *)glwebtools::opShl((glwebtools::JsonWriter::Self *)&v201, v45);
    if ( glwebtools::IsOperationSuccess(v46) )
    {
      v77 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)&v201);
      v78 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v198);
      v79 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v78, (int)(uintptr_t)(v184));
      glwebtools::Json::Value::opAssign(v79, v77);
    }
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)&v201);
    v47 = (void *)(v184[0] - 12);
    if ( (uint32_t *)(v184[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v184[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v47);
    }
    v48 = (void *)(v164 - 12);
    if ( (uint32_t *)(v164 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v164 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v48);
    }
    v137[0] = 0;
    v137[1] = 0;
    curl_easy_getinfo(*(uint32_t *)(v2 + 4), 3145732, v137);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v166), "namelookup", (int)(uintptr_t)(&v123) + 1);
    v166[1] = (int)(uintptr_t)(v137);
    glwebtools::op_double_const((glwebtools::JsonWriter::Self *)v198, (int)(uintptr_t)(v166));
    v49 = (void *)(v166[0] - 12);
    if ( (uint32_t *)(v166[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v166[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v49);
    }
    v137[0] = 0;
    v137[1] = 0;
    curl_easy_getinfo(*(uint32_t *)(v2 + 4), 3145733, v137);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v167), "connect", (int)(uintptr_t)(&v123) + 2);
    v167[1] = (int)(uintptr_t)(v137);
    glwebtools::op_double_const((glwebtools::JsonWriter::Self *)v198, (int)(uintptr_t)(v167));
    v50 = (void *)(v167[0] - 12);
    if ( (uint32_t *)(v167[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v167[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v50);
    }
    v137[0] = 0;
    v137[1] = 0;
    curl_easy_getinfo(*(uint32_t *)(v2 + 4), 3145761, v137);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v168), "app_connect", (int)(uintptr_t)(&v123) + 3);
    v168[1] = (int)(uintptr_t)(v137);
    glwebtools::op_double_const((glwebtools::JsonWriter::Self *)v198, (int)(uintptr_t)(v168));
    v51 = (void *)(v168[0] - 12);
    if ( (uint32_t *)(v168[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v168[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v51);
    }
    v137[0] = 0;
    v137[1] = 0;
    curl_easy_getinfo(*(uint32_t *)(v2 + 4), 3145734, v137);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v169), "pre_transfer", (int)(uintptr_t)(&v124));
    v169[1] = (int)(uintptr_t)(v137);
    glwebtools::op_double_const((glwebtools::JsonWriter::Self *)v198, (int)(uintptr_t)(v169));
    v52 = (void *)(v169[0] - 12);
    if ( (uint32_t *)(v169[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v169[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v52);
    }
    v53 = *(double *)v137;
    v137[0] = 0;
    v137[1] = 0;
    curl_easy_getinfo(*(uint32_t *)(v2 + 4), 3145745, v137);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v170), "start_transfer", (int)(uintptr_t)(&v124) + 1);
    v170[1] = (int)(uintptr_t)(v137);
    glwebtools::op_double_const((glwebtools::JsonWriter::Self *)v198, (int)(uintptr_t)(v170));
    v54 = (void *)(v170[0] - 12);
    if ( (uint32_t *)(v170[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v170[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v54);
    }
    v138 = *(double *)v137 - v53;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v171), "wait_transfer", (int)(uintptr_t)(&v124) + 2);
    v171[1] = (int)(uintptr_t)(&v138);
    glwebtools::op_double_const((glwebtools::JsonWriter::Self *)v198, (int)(uintptr_t)(v171));
    v55 = (void *)(v171[0] - 12);
    if ( (uint32_t *)(v171[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v171[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v55);
    }
    v137[0] = 0;
    v137[1] = 0;
    curl_easy_getinfo(*(uint32_t *)(v2 + 4), "_ZN20hkpBvTreeStreamAgent7cleanupER18hkpConstraintOwner", v137);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v172), "total", (int)(uintptr_t)(&v124) + 3);
    v172[1] = (int)(uintptr_t)(v137);
    glwebtools::op_double_const((glwebtools::JsonWriter::Self *)v198, (int)(uintptr_t)(v172));
    v56 = (void *)(v172[0] - 12);
    if ( (uint32_t *)(v172[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v172[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v56);
    }
    v137[0] = 0;
    v137[1] = 0;
    curl_easy_getinfo(*(uint32_t *)(v2 + 4), 3145747, v137);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v173), "redirect", (int)(uintptr_t)(&v125));
    v173[1] = (int)(uintptr_t)(v137);
    glwebtools::op_double_const((glwebtools::JsonWriter::Self *)v198, (int)(uintptr_t)(v173));
    v57 = (void *)(v173[0] - 12);
    if ( (uint32_t *)(v173[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v173[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v57);
    }
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v198);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v191);
  }
  if ( v113 != 0 )
  {
    glwebtools::JsonWriter::ToString((glwebtools::JsonWriter::Self *)v190, (int)(uintptr_t)(self) + 108);
    if ( *((uint32_t *)self + 4) != 0 )
    {
      glwebtools::UrlResponseCore::Destroy(*((glwebtools::UrlResponseCore::Self **)self + 4));
      sub_4EBEE0(*((uint32_t *)self + 4));
    }
    a1 = 4;
    v19 = 0x80000000;
    *((uint32_t *)self + 4) = 0;
    glwebtools::UrlRequestCore::SetState(*((uint32_t *)self + 3), 4);
    (*(void (**)(uint32_t))(**((uint32_t **)self + 3) + 16))(*((uint32_t *)self + 3));
    *((uint32_t *)self + 3) = 0;
    if ( v113 <= 0x2F )
      v19 = dword_1D0FD20[v113];
    goto LABEL_33;
  }
  if ( v127 == 0 )
  {
    curl_easy_getinfo(*(uint32_t *)(v2 + 4), 2097154, &v127);
    glwebtools::UrlResponseCore::SetResponseCode(*((glwebtools::UrlResponseCore::Self **)self + 4), v127);
  }
  v7 = (uint32_t *)(*(uint32_t *)(v2 + 8) + 8);
  v8 = (uint32_t *)*v7;
  v111 = v7;
  if ( v7 != (uint32_t *)*v7 )
  {
    v9 = (uint32_t *)*v7;
    do
      v9 = (uint32_t *)*v9;
    while ( v7 != v9 );
    glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)&v201);
    glwebtools::JsonWriter::opIndex((glwebtools::JsonWriter::Self *)v195, (glwebtools::JsonWriter::Self *)v190, "response");
    glwebtools::JsonWriter::opIndex((glwebtools::JsonWriter::Self *)v196, (glwebtools::JsonWriter::Self *)v195, "headers");
    glwebtools::Json::Value::opAssign((glwebtools::Json::Value::Self *)&v201, (const glwebtools::Json::Value::Self *)v196);
    v205 = v197;
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v196);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v195);
    for ( ; v111 != v8; v8 = (uint32_t *)*v8 )
    {
      v10 = (char *)v8[2];
      v11 = strchr(v10, 58);
      v137[0] = (unsigned int)(uintptr_t)(v11);
      if ( v11 != nullptr )
      {
        v12 = *(v11 - 1);
        if ( v12 == 32 || (uint8_t)(v12 - 32) > 0x5Eu )
        {
          do
          {
            do
            {
              v137[0] = (unsigned int)(uintptr_t)(--v11);
              v13 = *(v11 - 1);
            }
            while ( v13 == 32 );
          }
          while ( (uint8_t)(v13 - 32) > 0x5Eu );
        }
        sub_193A970((int)(uintptr_t)(v198), v10, v11 - v10, (int)(uintptr_t)(&v117));
        v14 = strchr(v10, 58);
        v137[0] = (unsigned int)(uintptr_t)(v14);
        v15 = v8[2];
        while ( 1 )
        {
          v16 = *v14;
          v17 = (unsigned int)(uintptr_t)(v14);
          if ( *v14 != 32 && v16 != 58 && (uint8_t)(v16 - 32) <= 0x5Eu )
            break;
          ++v14;
          if ( v17 >= (unsigned int)(uintptr_t)(&v10[*(uint32_t *)(v15 - 12)]) )
            goto LABEL_26;
          v137[0] = (unsigned int)(uintptr_t)(v14);
        }
        if ( v14 < &v10[*(uint32_t *)(v15 - 12)] )
        {
          glwebtools::UrlResponseCore::AddHeaderField(*((glwebtools::UrlResponseCore::Self **)self + 4), v198[0], v14);
          if ( v112 != 0 )
          {
            g4_std::string::construct_from_cstr((int)(uintptr_t)(v174), v198[0], (int)(uintptr_t)(&v125) + 1);
            v174[1] = (int)(uintptr_t)(v137);
            glwebtools::op_char_const_const((glwebtools::JsonWriter::Self *)&v201, (int)(uintptr_t)(v174));
            v58 = (void *)(v174[0] - 12);
            if ( (uint32_t *)(v174[0] - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v174[0] - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v58);
            }
          }
        }
LABEL_26:
        v18 = v198[0] - 12;
        if ( (uint32_t *)v198[0] - 3 != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)v198[0] - 1, 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v18);
        }
      }
    }
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)&v201);
  }
  if ( v112 != 0 )
  {
    glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)v198);
    glwebtools::JsonWriter::opIndex((glwebtools::JsonWriter::Self *)v199, (glwebtools::JsonWriter::Self *)v190, "response");
    glwebtools::Json::Value::opAssign((glwebtools::Json::Value::Self *)v198, (const glwebtools::Json::Value::Self *)v199);
    v198[4] = v200;
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v199);
    v131 = v127;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v175), "code", (int)(uintptr_t)(&v125) + 2);
    v175[1] = (int)(uintptr_t)(&v131);
    glwebtools::op_int_const((glwebtools::JsonWriter::Self *)v198, (int)(uintptr_t)(v175));
    v21 = (void *)(v175[0] - 12);
    if ( (uint32_t *)(v175[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v175[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v21);
    }
    HeaderField = (const void *)glwebtools::UrlResponseCore::GetHeaderField(
                                  *((glwebtools::UrlResponseCore::Self **)self + 4),
                                  "Content-type");
    if ( HeaderField != nullptr )
    {
      v23 = memcmp(HeaderField, "text", 4u) == 0;
      if ( v127 <= 399 )
      {
        if ( v23 || memcmp(HeaderField, "application/json", 0x10u) == 0 )
        {
          v201 = (int)(uintptr_t)(&dword_213B814);
          glwebtools::UrlResponseCore::GetDataAsString(*((glwebtools::UrlResponseCore::Self **)self + 4), (int)(uintptr_t)(&v201));
          g4_std::string::construct_from_cstr((int)(uintptr_t)(v177), "data", (int)(uintptr_t)(&v126));
          v177[1] = (int)(uintptr_t)(&v201);
          glwebtools::op_std_string_const((glwebtools::JsonWriter::Self *)v198, (int)(uintptr_t)(v177));
          v75 = (void *)(v177[0] - 12);
          if ( (uint32_t *)(v177[0] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v177[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v75);
          }
          v132 = *(uint32_t *)(v201 - 12);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(v178), "data_size", (int)(uintptr_t)(&v126) + 1);
          v178[1] = (int)(uintptr_t)(&v132);
          glwebtools::op_int_const((glwebtools::JsonWriter::Self *)v198, (int)(uintptr_t)(v178));
          v76 = (void *)(v178[0] - 12);
          if ( (uint32_t *)(v178[0] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v178[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v76);
          }
          v25 = (void *)(v201 - 12);
          if ( (uint32_t *)(v201 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v201 - 4), 0xFFFFFFFF) <= 0 )
          {
            goto LABEL_200;
          }
        }
        else
        {
          glwebtools::UrlResponseCore::GetData(*((glwebtools::UrlResponseCore::Self **)self + 4), (const void **)&v133, v137);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v179), "data", (int)(uintptr_t)(&v126) + 2);
          v180 = "Data omitted due to content-type";
          g4_std::string::construct_copy(v185, &v179);
          v67 = v180;
          v185[1] = (int)(uintptr_t)(v180);
          if ( (uint8_t)glwebtools::JsonWriter::isObject((glwebtools::JsonWriter::Self *)v198) == 0 )
          {
            glwebtools::Json::Value::Construct(v189, 7);
            v68 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v198);
            glwebtools::Json::Value::opAssign(v68, (const glwebtools::Json::Value::Self *)v189);
            glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v189);
          }
          glwebtools::JsonWriter::Construct((glwebtools::JsonWriter::Self *)&v201);
          v69 = (glwebtools::Self *)glwebtools::opShl((glwebtools::JsonWriter::Self *)&v201, v67);
          if ( glwebtools::IsOperationSuccess(v69) )
          {
            v70 = (const glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)&v201);
            v71 = (glwebtools::Json::Value::Self *)glwebtools::JsonWriter::GetRoot((glwebtools::JsonWriter::Self *)v198);
            v72 = (glwebtools::Json::Value::Self *)glwebtools::Json::Value::opIndex(v71, (int)(uintptr_t)(v185));
            glwebtools::Json::Value::opAssign(v72, v70);
          }
          glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)&v201);
          v73 = (void *)(v185[0] - 12);
          if ( (uint32_t *)(v185[0] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v185[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v73);
          }
          v74 = (void *)(v179 - 12);
          if ( (uint32_t *)(v179 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v179 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v74);
          }
          v134 = v137[0];
          g4_std::string::construct_from_cstr((int)(uintptr_t)(v181), "data_size", (int)(uintptr_t)(&v126) + 3);
          v181[1] = (int)(uintptr_t)(&v134);
          glwebtools::op_int_const((glwebtools::JsonWriter::Self *)v198, (int)(uintptr_t)(v181));
          v25 = (void *)(v181[0] - 12);
          if ( (uint32_t *)(v181[0] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v181[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            goto LABEL_200;
          }
        }
      }
      else if ( v23 || memcmp(HeaderField, "application/json", 0x10u) == 0 )
      {
        v201 = (int)(uintptr_t)(&dword_213B814);
        glwebtools::UrlResponseCore::GetDataAsString(*((glwebtools::UrlResponseCore::Self **)self + 4), (int)(uintptr_t)(&v201));
        g4_std::string::construct_from_cstr((int)(uintptr_t)(v176), "error_msg", (int)(uintptr_t)(&v125) + 3);
        v176[1] = (int)(uintptr_t)(&v201);
        glwebtools::op_std_string_const((glwebtools::JsonWriter::Self *)v198, (int)(uintptr_t)(v176));
        v24 = (void *)(v176[0] - 12);
        if ( (uint32_t *)(v176[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v176[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v24);
        }
        v25 = (void *)(v201 - 12);
        if ( (uint32_t *)(v201 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v201 - 4), 0xFFFFFFFF) <= 0 )
        {
LABEL_200:
          g4_std::string::Rep::M_destroy(v25);
        }
      }
    }
    glwebtools::JsonWriter::ToString((glwebtools::JsonWriter::Self *)v190, (int)(uintptr_t)(self) + 108);
    glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v198);
    if ( v127 <= 399 )
      goto LABEL_31;
LABEL_38:
    glwebtools::UrlRequestCore::SetState(*((uint32_t *)self + 3), 4);
    goto LABEL_32;
  }
  if ( v127 > 399 )
    goto LABEL_38;
LABEL_31:
  glwebtools::UrlRequestCore::SetState(*((uint32_t *)self + 3), 2);
LABEL_32:
  a1 = 1;
  v19 = 0;
  (*(void (**)(uint32_t))(**((uint32_t **)self + 3) + 16))(*((uint32_t *)self + 3));
  *((uint32_t *)self + 3) = 0;
LABEL_33:
  glwebtools::Json::Value::Destroy((glwebtools::Json::Value::Self *)v190);
LABEL_34:
  glwebtools::UrlConnectionCore::SetLastError(self, v19);
  glwebtools::MemBar(s);
  *((uint32_t *)self + 2) = a1;
  return v19;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnectionCore::RunRequestStatic  (binary VA: 0x13ef5b0)
// Original: glwebtools::UrlConnectionCore::RunRequestStatic
// ----------------------------------------------------------------------------
glwebtools::UrlConnectionCore::Self * glwebtools::UrlConnectionCore::RunRequestStatic(int a1, glwebtools::UrlConnectionCore::Self *self)
{
  glwebtools::UrlConnectionCore::Self *result;

  result = self;
  if ( self != nullptr )
    return (glwebtools::UrlConnectionCore::Self *)glwebtools::UrlConnectionCore::RunRequest(a1, self);
  return result;
}


