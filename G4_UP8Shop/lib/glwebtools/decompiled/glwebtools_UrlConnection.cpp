#include "Core/Utils/DecompTypes.h"
#include "glwebtools_UrlConnection.h"

// ============================================================================
// G4_UP8Shop/lib/glwebtools/decompiled/glwebtools_UrlConnection.cpp
// Library: glwebtools | Module: glwebtools_UrlConnection
// Binary Address Span: 0x13eb600 .. 0x13f37d0 (28 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x13eb600 (size: 212 bytes)
// Symbol:    _ZN10glwebtools13UrlConnection16CreationSettingsC1Ev
// Demangled: glwebtools::UrlConnection::CreationSettings::CreationSettings(void)
// ============================================================================
// Alternative name is '_ZN10glwebtools13UrlConnection16CreationSettingsC2Ev'
struct glwebtools::UrlConnection::CreationSettings::Self *glwebtools::UrlConnection::CreationSettings::Construct(
        glwebtools::UrlConnection::CreationSettings::Self *self)
{
  struct glwebtools::UrlConnection::CreationSettings::Self *result;
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  *(uint32_t *)self = 1;
  *((uint8_t *)self + 4) = 1;
  *((uint32_t *)self + 2) = 120;
  *((uint32_t *)self + 3) = 600;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(self) + 16, "GlWebTools Default TaskGroup", (int)(uintptr_t)(&v2));
  *((uint32_t *)self + 5) = 1;
  *((uint32_t *)self + 6) = 1000;
  *((uint8_t *)self + 28) = 1;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(self) + 32, "gzip;q=1.0, deflate;q=1.0, identity;q=0.5, *;q=0", (int)(uintptr_t)(&v2) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(self) + 36, (char *)&unk_1B15112, (int)(uintptr_t)(&v2) + 2);
  *((uint8_t *)self + 40) = 0;
  *((uint8_t *)self + 41) = 0;
  result = (struct glwebtools::UrlConnection::CreationSettings::Self *)g4_std::string::construct_from_cstr(
                                                                   (int)(uintptr_t)(self) + 44,
                                                                   (char *)&unk_1B15112,
                                                                   (int)(uintptr_t)(&v2) + 3);
  *((uint8_t *)self + 48) = 0;
  return result;
}
// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnection::CreationSettings::Construct  (binary VA: 0x13eb6e0)
// Original: glwebtools::UrlConnection::CreationSettings::CreationSettings
// ----------------------------------------------------------------------------
int glwebtools::UrlConnection::CreationSettings::Construct(int a1, int a2, int a3, char a4, int a5, int a6, char a7, char *a8)
{
  char *v8;
  int result;
  typedef int _g4_t_v10;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);

  v8 = a8;
  *(uint32_t *)a1 = a2;
  *(uint8_t *)(a1 + 4) = a4;
  *(uint32_t *)(a1 + 8) = a5;
  *(uint32_t *)(a1 + 12) = 600;
  g4_std::string::construct_from_cstr(a1 + 16, "GlWebTools Default TaskGroup", (int)(uintptr_t)(&v10));
  *(uint8_t *)(a1 + 28) = a7;
  *(uint32_t *)(a1 + 20) = 1;
  *(uint32_t *)(a1 + 24) = 1000;
  if ( a8 == nullptr )
    v8 = (char *)&unk_1B15112;
  g4_std::string::construct_from_cstr(a1 + 32, v8, (int)(uintptr_t)(&v10) + 1);
  g4_std::string::construct_from_cstr(a1 + 36, (char *)&unk_1B15112, (int)(uintptr_t)(&v10) + 2);
  *(uint8_t *)(a1 + 40) = 0;
  *(uint8_t *)(a1 + 41) = 0;
  result = (int)(uintptr_t)(g4_std::string::construct_from_cstr(a1 + 44, (char *)&unk_1B15112, (int)(uintptr_t)(&v10) + 3));
  *(uint8_t *)(a1 + 48) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnection::CreationSettings::Construct  (binary VA: 0x13eb7d0)
// Original: glwebtools::UrlConnection::CreationSettings::CreationSettings
// ----------------------------------------------------------------------------
int glwebtools::UrlConnection::CreationSettings::Construct(int a1, int a2, int a3, char a4, int a5, int a6, int a7, char a8, char *a9)
{
  char *v9;
  int result;
  typedef int _g4_t_v11;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);

  v9 = a9;
  *(uint32_t *)a1 = a2;
  *(uint8_t *)(a1 + 4) = a4;
  *(uint32_t *)(a1 + 8) = a5;
  *(uint32_t *)(a1 + 12) = 600;
  g4_std::string::construct_copy(a1 + 16, a6);
  *(uint8_t *)(a1 + 28) = a8;
  *(uint32_t *)(a1 + 20) = 1;
  *(uint32_t *)(a1 + 24) = 1000;
  if ( a9 == nullptr )
    v9 = (char *)&unk_1B15112;
  g4_std::string::construct_from_cstr(a1 + 32, v9, (int)(uintptr_t)(&v11));
  g4_std::string::construct_from_cstr(a1 + 36, (char *)&unk_1B15112, (int)(uintptr_t)(&v11) + 1);
  *(uint8_t *)(a1 + 40) = 0;
  *(uint8_t *)(a1 + 41) = 0;
  result = (int)(uintptr_t)(g4_std::string::construct_from_cstr(a1 + 44, (char *)&unk_1B15112, (int)(uintptr_t)(&v11) + 2));
  *(uint8_t *)(a1 + 48) = 0;
  return result;
}



// ============================================================================
// Address:   0x13f1f20 (size: 34 bytes)
// Symbol:    _ZN10glwebtools13UrlConnectionC1Ev
// Demangled: glwebtools::UrlConnection::UrlConnection(void)
// ============================================================================
// Alternative name is '_ZN10glwebtools13UrlConnectionC2Ev'
struct glwebtools::UrlConnection::Self *glwebtools::UrlConnection::Construct(glwebtools::UrlConnection::Self *self)
{
  *((uint32_t *)self + 1) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094D80);
  return self;
}
// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnection::Construct  (binary VA: 0x13f1f50)
// Original: glwebtools::UrlConnection::UrlConnection
// ----------------------------------------------------------------------------
glwebtools::UrlConnection::Self * glwebtools::UrlConnection::Construct(glwebtools::UrlConnection::Self *self, const glwebtools::UrlConnection::Self *a2)
{
  glwebtools::UrlConnection::Self *result;
  typedef void *_g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094D80);
  result = (glwebtools::UrlConnection::Self *)(glwebtools::HandleManager::GetInstance());
  v3 = nullptr;
  if ( result != nullptr )
  {
    glwebtools::HandleManager::GetObjectPointer(result, *((uint32_t *)self + 1), &v3);
    result = (glwebtools::UrlConnection::Self *)v3;
    if ( v3 != nullptr )
      return G4_VCALL<glwebtools::UrlConnection::Self *>(v3, 12);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnection::Construct  (binary VA: 0x13f1fc0)
// Original: glwebtools::UrlConnection::UrlConnection
// ----------------------------------------------------------------------------
glwebtools::UrlConnection::Self * glwebtools::UrlConnection::Construct(glwebtools::UrlConnection::Self *self, unsigned int a2)
{
  glwebtools::UrlConnection::Self *result;
  typedef void *_g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  *((uint32_t *)self + 1) = a2;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094D80);
  result = (glwebtools::UrlConnection::Self *)(glwebtools::HandleManager::GetInstance());
  v3 = nullptr;
  if ( result != nullptr )
  {
    glwebtools::HandleManager::GetObjectPointer(result, *((uint32_t *)self + 1), &v3);
    result = (glwebtools::UrlConnection::Self *)v3;
    if ( v3 != nullptr )
      return G4_VCALL<glwebtools::UrlConnection::Self *>(v3, 12);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnection::Release  (binary VA: 0x13f2030)
// Original: glwebtools::UrlConnection::Release
// ----------------------------------------------------------------------------
int glwebtools::UrlConnection::Release(glwebtools::UrlConnection::Self *self)
{
  glwebtools::HandleManager::Self *Instance;
  void *v2;
  typedef void *_g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  Instance = glwebtools::HandleManager::GetInstance();
  v4 = nullptr;
  if ( Instance != nullptr )
  {
    glwebtools::HandleManager::GetObjectPointer(Instance, *((uint32_t *)self + 1), &v4);
    v2 = v4;
    *((uint32_t *)self + 1) = 0;
    if ( v2 != nullptr )
    {
      G4_VCALL<void>(v2, 16);
      return 0;
    }
    else
    {
      return -2147483647;
    }
  }
  else
  {
    *((uint32_t *)self + 1) = 0;
    return -2147483647;
  }
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnection::Destroy  (binary VA: 0x13f20b0)
// Original: glwebtools::UrlConnection::~UrlConnection
// ----------------------------------------------------------------------------
void glwebtools::UrlConnection::Destroy(glwebtools::UrlConnection::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094D80);
  glwebtools::UrlConnection::Release(self);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnection::Destroy_ea13f20e0  (binary VA: 0x13f20e0)
// Original: glwebtools::UrlConnection::~UrlConnection
// ----------------------------------------------------------------------------
void glwebtools::UrlConnection::Destroy_ea13f20e0(glwebtools::UrlConnection::Self *self)
{
  glwebtools::UrlConnection::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnection::opAssign  (binary VA: 0x13f2120)
// Original: glwebtools::UrlConnection::operator=
// ----------------------------------------------------------------------------
glwebtools::UrlConnection::Self * glwebtools::UrlConnection::opAssign(glwebtools::UrlConnection::Self *self, const glwebtools::UrlConnection::Self *a2)
{
  glwebtools::HandleManager::Self *Instance;
  typedef void *_g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  if ( self != a2 )
  {
    glwebtools::UrlConnection::Release(self);
    *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
    Instance = glwebtools::HandleManager::GetInstance();
    v4 = nullptr;
    if ( Instance != nullptr )
    {
      glwebtools::HandleManager::GetObjectPointer(Instance, *((uint32_t *)self + 1), &v4);
      if ( v4 != nullptr )
        G4_VCALL<void>(v4, 12);
    }
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnection::GetState  (binary VA: 0x13f21a0)
// Original: glwebtools::UrlConnection::GetState
// ----------------------------------------------------------------------------
int glwebtools::UrlConnection::GetState(glwebtools::UrlConnection::Self *self)
{
  glwebtools::HandleManager::Self *Instance;
  int v2;
  typedef glwebtools::UrlConnectionCore::Self *_g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  Instance = glwebtools::HandleManager::GetInstance();
  v2 = 0;
  v4 = nullptr;
  if ( Instance != nullptr )
  {
    glwebtools::HandleManager::GetObjectPointer(Instance, *((uint32_t *)self + 1), (void **)&v4);
    if ( v4 != nullptr )
      return glwebtools::UrlConnectionCore::GetState(v4);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnection::StartRequest  (binary VA: 0x13f2210)
// Original: glwebtools::UrlConnection::StartRequest
// ----------------------------------------------------------------------------
int glwebtools::UrlConnection::StartRequest(glwebtools::UrlConnection::Self *self, glwebtools::UrlRequest::Self *a2)
{
  glwebtools::HandleManager::Self *Instance;
  int v3;
  glwebtools::UrlConnectionCore::Self *v4;
  glwebtools::HandleManager::Self *v5;
  glwebtools::UrlConnectionCore::Self *v7[4];

  Instance = glwebtools::HandleManager::GetInstance();
  v7[0] = nullptr;
  v3 = -2147483647;
  if ( Instance != nullptr )
  {
    glwebtools::HandleManager::GetObjectPointer(Instance, *((uint32_t *)self + 1), (void **)v7);
    v4 = v7[0];
    if ( v7[0] != nullptr )
    {
      v5 = glwebtools::HandleManager::GetInstance();
      v7[0] = nullptr;
      LOWORD(v3) = 2;
      if ( v5 != nullptr )
      {
        glwebtools::HandleManager::GetObjectPointer(v5, *((uint32_t *)a2 + 1), (void **)v7);
        if ( v7[0] != nullptr )
        {
          v3 = glwebtools::UrlConnectionCore::AttachRequest(v4, v7[0]);
          if ( glwebtools::IsOperationSuccess((glwebtools::Self *)v3) )
            return glwebtools::UrlConnectionCore::StartRequest(v4);
        }
      }
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnection::CancelRequest  (binary VA: 0x13f22e0)
// Original: glwebtools::UrlConnection::CancelRequest
// ----------------------------------------------------------------------------
int glwebtools::UrlConnection::CancelRequest(glwebtools::UrlConnection::Self *self)
{
  glwebtools::HandleManager::Self *Instance;
  int v2;
  typedef glwebtools::UrlConnectionCore::Self *_g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  Instance = glwebtools::HandleManager::GetInstance();
  v4 = nullptr;
  v2 = -2147483647;
  if ( Instance != nullptr )
  {
    glwebtools::HandleManager::GetObjectPointer(Instance, *((uint32_t *)self + 1), (void **)&v4);
    if ( v4 != nullptr )
      return glwebtools::UrlConnectionCore::CancelRequest(v4);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnection::IsHandleValid  (binary VA: 0x13f2350)
// Original: glwebtools::UrlConnection::IsHandleValid
// ----------------------------------------------------------------------------
int glwebtools::UrlConnection::IsHandleValid(glwebtools::UrlConnection::Self *self)
{
  glwebtools::HandleManager::Self *Instance;
  int v2;
  typedef void *_g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  Instance = glwebtools::HandleManager::GetInstance();
  v2 = 0;
  v4 = nullptr;
  if ( Instance != nullptr )
  {
    glwebtools::HandleManager::GetObjectPointer(Instance, *((uint32_t *)self + 1), &v4);
    LOBYTE(v2) = v4 != nullptr;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnection::IsReadyToRun  (binary VA: 0x13f23a0)
// Original: glwebtools::UrlConnection::IsReadyToRun
// ----------------------------------------------------------------------------
bool glwebtools::UrlConnection::IsReadyToRun(glwebtools::UrlConnection::Self *self)
{
  return glwebtools::UrlConnection::GetState(self) == 1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnection::IsRunning  (binary VA: 0x13f23d0)
// Original: glwebtools::UrlConnection::IsRunning
// ----------------------------------------------------------------------------
int glwebtools::UrlConnection::IsRunning(glwebtools::UrlConnection::Self *self)
{
  int State;
  int v2;

  State = glwebtools::UrlConnection::GetState(self);
  v2 = 1;
  if ( State != 3 )
    LOBYTE(v2) = glwebtools::UrlConnection::GetState(self) == 2;
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnection::IsError  (binary VA: 0x13f2420)
// Original: glwebtools::UrlConnection::IsError
// ----------------------------------------------------------------------------
int glwebtools::UrlConnection::IsError(glwebtools::UrlConnection::Self *self)
{
  int State;
  int v2;

  State = glwebtools::UrlConnection::GetState(self);
  v2 = 1;
  if ( State != 4 )
    LOBYTE(v2) = glwebtools::UrlConnection::GetState(self) == 0;
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnection::GetLastError  (binary VA: 0x13f2470)
// Original: glwebtools::UrlConnection::GetLastError
// ----------------------------------------------------------------------------
int glwebtools::UrlConnection::GetLastError(glwebtools::UrlConnection::Self *self)
{
  char IsHandleValid;
  int result;
  glwebtools::HandleManager::Self *Instance;
  glwebtools::UrlConnectionCore::Self *v4;
  typedef void *_g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  IsHandleValid = glwebtools::UrlConnection::IsHandleValid(self);
  result = -2147483647;
  if ( IsHandleValid != 0 )
  {
    Instance = glwebtools::HandleManager::GetInstance();
    v4 = nullptr;
    v5 = nullptr;
    if ( Instance != nullptr )
    {
      glwebtools::HandleManager::GetObjectPointer(Instance, *((uint32_t *)self + 1), &v5);
      v4 = (glwebtools::UrlConnectionCore::Self *)v5;
    }
    return glwebtools::UrlConnectionCore::GetLastError(v4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnection::GetDownloadedBytes  (binary VA: 0x13f24e0)
// Original: glwebtools::UrlConnection::GetDownloadedBytes
// ----------------------------------------------------------------------------
int glwebtools::UrlConnection::GetDownloadedBytes(glwebtools::UrlConnection::Self *self)
{
  glwebtools::HandleManager::Self *Instance;
  glwebtools::UrlConnectionCore::Self *v3;
  typedef void *_g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  if ( (uint8_t)glwebtools::UrlConnection::IsHandleValid(self) == 0 )
    return 0;
  Instance = glwebtools::HandleManager::GetInstance();
  v3 = nullptr;
  v4 = nullptr;
  if ( Instance != nullptr )
  {
    glwebtools::HandleManager::GetObjectPointer(Instance, *((uint32_t *)self + 1), &v4);
    v3 = (glwebtools::UrlConnectionCore::Self *)v4;
  }
  return glwebtools::UrlConnectionCore::GetDownloadedBytes(v3);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnection::SupportServerSideEvent  (binary VA: 0x13f2560)
// Original: glwebtools::UrlConnection::SupportServerSideEvent
// ----------------------------------------------------------------------------
int glwebtools::UrlConnection::SupportServerSideEvent(glwebtools::UrlConnection::Self *self)
{
  glwebtools::HandleManager::Self *Instance;
  glwebtools::UrlConnectionCore::Self *v3;
  typedef void *_g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  if ( (uint8_t)glwebtools::UrlConnection::IsHandleValid(self) == 0 )
    return 0;
  Instance = glwebtools::HandleManager::GetInstance();
  v3 = nullptr;
  v4 = nullptr;
  if ( Instance != nullptr )
  {
    glwebtools::HandleManager::GetObjectPointer(Instance, *((uint32_t *)self + 1), &v4);
    v3 = (glwebtools::UrlConnectionCore::Self *)v4;
  }
  return glwebtools::UrlConnectionCore::SupportServerSideEvent(v3);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnection::HasServerSideEvent  (binary VA: 0x13f25e0)
// Original: glwebtools::UrlConnection::HasServerSideEvent
// ----------------------------------------------------------------------------
int glwebtools::UrlConnection::HasServerSideEvent(glwebtools::UrlConnection::Self *self)
{
  glwebtools::HandleManager::Self *Instance;
  glwebtools::UrlConnectionCore::Self *v3;
  typedef void *_g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  if ( (uint8_t)glwebtools::UrlConnection::IsHandleValid(self) == 0 )
    return 0;
  Instance = glwebtools::HandleManager::GetInstance();
  v3 = nullptr;
  v4 = nullptr;
  if ( Instance != nullptr )
  {
    glwebtools::HandleManager::GetObjectPointer(Instance, *((uint32_t *)self + 1), &v4);
    v3 = (glwebtools::UrlConnectionCore::Self *)v4;
  }
  return glwebtools::UrlConnectionCore::HasServerSideEvent(v3);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnection::PopServerSideEvent  (binary VA: 0x13f2660)
// Original: glwebtools::UrlConnection::PopServerSideEvent
// ----------------------------------------------------------------------------
int glwebtools::UrlConnection::PopServerSideEvent(glwebtools::UrlConnection::Self *self, glwebtools::ServerSideEvent::Self *a2)
{
  char IsHandleValid;
  int result;
  glwebtools::HandleManager::Self *Instance;
  glwebtools::UrlConnectionCore::Self *v5;
  typedef void *_g4_t_v6;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  IsHandleValid = glwebtools::UrlConnection::IsHandleValid(self);
  result = -2147483647;
  if ( IsHandleValid != 0 )
  {
    Instance = glwebtools::HandleManager::GetInstance();
    v5 = nullptr;
    v6 = nullptr;
    if ( Instance != nullptr )
    {
      glwebtools::HandleManager::GetObjectPointer(Instance, *((uint32_t *)self + 1), &v6);
      v5 = (glwebtools::UrlConnectionCore::Self *)v6;
    }
    return glwebtools::UrlConnectionCore::PopServerSideEvent(v5, a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnection::SupportDataPacketQueue  (binary VA: 0x13f26d0)
// Original: glwebtools::UrlConnection::SupportDataPacketQueue
// ----------------------------------------------------------------------------
int glwebtools::UrlConnection::SupportDataPacketQueue(glwebtools::UrlConnection::Self *self)
{
  glwebtools::HandleManager::Self *Instance;
  glwebtools::UrlConnectionCore::Self *v3;
  typedef void *_g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  if ( (uint8_t)glwebtools::UrlConnection::IsHandleValid(self) == 0 )
    return 0;
  Instance = glwebtools::HandleManager::GetInstance();
  v3 = nullptr;
  v4 = nullptr;
  if ( Instance != nullptr )
  {
    glwebtools::HandleManager::GetObjectPointer(Instance, *((uint32_t *)self + 1), &v4);
    v3 = (glwebtools::UrlConnectionCore::Self *)v4;
  }
  return glwebtools::UrlConnectionCore::SupportDataPacketQueue(v3);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnection::HasDataPacket  (binary VA: 0x13f2750)
// Original: glwebtools::UrlConnection::HasDataPacket
// ----------------------------------------------------------------------------
int glwebtools::UrlConnection::HasDataPacket(glwebtools::UrlConnection::Self *self)
{
  glwebtools::HandleManager::Self *Instance;
  glwebtools::UrlConnectionCore::Self *v3;
  typedef void *_g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  if ( (uint8_t)glwebtools::UrlConnection::IsHandleValid(self) == 0 )
    return 0;
  Instance = glwebtools::HandleManager::GetInstance();
  v3 = nullptr;
  v4 = nullptr;
  if ( Instance != nullptr )
  {
    glwebtools::HandleManager::GetObjectPointer(Instance, *((uint32_t *)self + 1), &v4);
    v3 = (glwebtools::UrlConnectionCore::Self *)v4;
  }
  return glwebtools::UrlConnectionCore::HasDataPacket(v3);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnection::PopDataPacket  (binary VA: 0x13f27d0)
// Original: glwebtools::UrlConnection::PopDataPacket
// ----------------------------------------------------------------------------
int glwebtools::UrlConnection::PopDataPacket(glwebtools::UrlConnection::Self *self, glwebtools::MutableData::Self *a2)
{
  char IsHandleValid;
  int result;
  glwebtools::HandleManager::Self *Instance;
  glwebtools::UrlConnectionCore::Self *v5;
  typedef void *_g4_t_v6;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  IsHandleValid = glwebtools::UrlConnection::IsHandleValid(self);
  result = -2147483647;
  if ( IsHandleValid != 0 )
  {
    Instance = glwebtools::HandleManager::GetInstance();
    v5 = nullptr;
    v6 = nullptr;
    if ( Instance != nullptr )
    {
      glwebtools::HandleManager::GetObjectPointer(Instance, *((uint32_t *)self + 1), &v6);
      v5 = (glwebtools::UrlConnectionCore::Self *)v6;
    }
    return glwebtools::UrlConnectionCore::PopDataPacket(v5, a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnection::GetCreationSettings  (binary VA: 0x13f2840)
// Original: glwebtools::UrlConnection::GetCreationSettings
// ----------------------------------------------------------------------------
int glwebtools::UrlConnection::GetCreationSettings(glwebtools::UrlConnection::Self *self, glwebtools::UrlConnection::CreationSettings::Self *a2)
{
  char IsHandleValid;
  int result;
  glwebtools::HandleManager::Self *Instance;
  glwebtools::UrlConnectionCore::Self *v5;
  typedef void *_g4_t_v6;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  IsHandleValid = glwebtools::UrlConnection::IsHandleValid(self);
  result = -2147483647;
  if ( IsHandleValid != 0 )
  {
    Instance = glwebtools::HandleManager::GetInstance();
    v5 = nullptr;
    v6 = nullptr;
    if ( Instance != nullptr )
    {
      glwebtools::HandleManager::GetObjectPointer(Instance, *((uint32_t *)self + 1), &v6);
      v5 = (glwebtools::UrlConnectionCore::Self *)v6;
    }
    return glwebtools::UrlConnectionCore::GetCreationSettings(v5, a2);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnection::GetOutputDebugString  (binary VA: 0x13f28b0)
// Original: glwebtools::UrlConnection::GetOutputDebugString
// ----------------------------------------------------------------------------
int glwebtools::UrlConnection::GetOutputDebugString(glwebtools::HandleManager::Self *a1, int a2)
{
  char IsHandleValid;
  int v3;
  glwebtools::HandleManager::Self *Instance;
  glwebtools::UrlConnectionCore::Self *v5;
  char *OutputDebugString;
  typedef void *_g4_t_v8;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  IsHandleValid = glwebtools::UrlConnection::IsHandleValid(a1);
  v3 = -2147483647;
  if ( IsHandleValid != 0 )
  {
    Instance = glwebtools::HandleManager::GetInstance();
    v5 = nullptr;
    v8 = nullptr;
    if ( Instance != nullptr )
    {
      glwebtools::HandleManager::GetObjectPointer(Instance, *((uint32_t *)a1 + 1), &v8);
      v5 = (glwebtools::UrlConnectionCore::Self *)v8;
    }
    OutputDebugString = glwebtools::UrlConnectionCore::GetOutputDebugString(v5);
    g4_std::string::assign_str(a2, OutputDebugString);
    return 0;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlConnection::GetUrlResponse  (binary VA: 0x13f37d0)
// Original: glwebtools::UrlConnection::GetUrlResponse
// ----------------------------------------------------------------------------
glwebtools::UrlConnection::Self * glwebtools::UrlConnection::GetUrlResponse(glwebtools::UrlConnection::Self *self, int a2)
{
  glwebtools::UrlResponse::Construct(self, *(uint32_t *)(a2 + 4));
  return self;
}


