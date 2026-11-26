#include "Core/Utils/DecompTypes.h"
#include "glwebtools_UrlResponse.h"

// ============================================================================
// G4_UP8Shop/lib/glwebtools/decompiled/glwebtools_UrlResponse.cpp
// Library: glwebtools | Module: glwebtools_UrlResponse
// Binary Address Span: 0x13f36c0 .. 0x13f3c50 (14 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x13f36c0 (size: 34 bytes)
// Symbol:    _ZN10glwebtools11UrlResponseC2Ev
// Demangled: glwebtools::UrlResponse::UrlResponse(void)
// ============================================================================
// Alternative name is '_ZN10glwebtools11UrlResponseC1Ev'
struct glwebtools::UrlResponse::Self *glwebtools::UrlResponse::Construct(glwebtools::UrlResponse::Self *self)
{
  *((uint32_t *)self + 1) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094DA0);
  return self;
}
// ----------------------------------------------------------------------------
// Function: glwebtools::UrlResponse::Construct  (binary VA: 0x13f36f0)
// Original: glwebtools::UrlResponse::UrlResponse
// ----------------------------------------------------------------------------
glwebtools::UrlResponse::Self * glwebtools::UrlResponse::Construct(glwebtools::UrlResponse::Self *self, const glwebtools::UrlResponse::Self *a2)
{
  glwebtools::UrlResponse::Self *result;
  typedef void *_g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094DA0);
  result = (glwebtools::UrlResponse::Self *)(glwebtools::HandleManager::GetInstance());
  v3 = nullptr;
  if ( result != nullptr )
  {
    glwebtools::HandleManager::GetObjectPointer(result, *((uint32_t *)self + 1), &v3);
    result = (glwebtools::UrlResponse::Self *)v3;
    if ( v3 != nullptr )
      return G4_VCALL<glwebtools::UrlResponse::Self *>(v3, 12);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlResponse::Construct  (binary VA: 0x13f3760)
// Original: glwebtools::UrlResponse::UrlResponse
// ----------------------------------------------------------------------------
glwebtools::UrlResponse::Self * glwebtools::UrlResponse::Construct(glwebtools::UrlResponse::Self *self, unsigned int a2)
{
  glwebtools::UrlResponse::Self *result;
  typedef void *_g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  *((uint32_t *)self + 1) = a2;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094DA0);
  result = (glwebtools::UrlResponse::Self *)(glwebtools::HandleManager::GetInstance());
  v3 = nullptr;
  if ( result != nullptr )
  {
    glwebtools::HandleManager::GetObjectPointer(result, *((uint32_t *)self + 1), &v3);
    result = (glwebtools::UrlResponse::Self *)v3;
    if ( v3 != nullptr )
      return G4_VCALL<glwebtools::UrlResponse::Self *>(v3, 12);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlResponse::Release  (binary VA: 0x13f3810)
// Original: glwebtools::UrlResponse::Release
// ----------------------------------------------------------------------------
int glwebtools::UrlResponse::Release(glwebtools::UrlResponse::Self *self)
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
// Function: glwebtools::UrlResponse::Destroy  (binary VA: 0x13f3890)
// Original: glwebtools::UrlResponse::~UrlResponse
// ----------------------------------------------------------------------------
void glwebtools::UrlResponse::Destroy(glwebtools::UrlResponse::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094DA0);
  glwebtools::UrlResponse::Release(self);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlResponse::Destroy_ea13f38c0  (binary VA: 0x13f38c0)
// Original: glwebtools::UrlResponse::~UrlResponse
// ----------------------------------------------------------------------------
void glwebtools::UrlResponse::Destroy_ea13f38c0(glwebtools::UrlResponse::Self *self)
{
  glwebtools::UrlResponse::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlResponse::opAssign  (binary VA: 0x13f3900)
// Original: glwebtools::UrlResponse::operator=
// ----------------------------------------------------------------------------
glwebtools::UrlResponse::Self * glwebtools::UrlResponse::opAssign(glwebtools::UrlResponse::Self *self, const glwebtools::UrlResponse::Self *a2)
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
    glwebtools::UrlResponse::Release(self);
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
// Function: glwebtools::UrlResponse::GetData  (binary VA: 0x13f3980)
// Original: glwebtools::UrlResponse::GetData
// ----------------------------------------------------------------------------
int glwebtools::UrlResponse::GetData(glwebtools::UrlResponse::Self *self, void **a2, unsigned int *a3)
{
  int v3;
  glwebtools::HandleManager::Self *Instance;
  glwebtools::UrlResponseCore::Self *UrlResponse;
  typedef glwebtools::UrlConnectionCore::Self *_g4_t_v7;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);

  v3 = -2147483647;
  *a2 = nullptr;
  *a3 = 0;
  Instance = glwebtools::HandleManager::GetInstance();
  v7 = nullptr;
  if ( Instance != nullptr )
  {
    glwebtools::HandleManager::GetObjectPointer(Instance, *((uint32_t *)self + 1), (void **)&v7);
    if ( v7 != nullptr )
    {
      UrlResponse = (glwebtools::UrlResponseCore::Self *)glwebtools::UrlConnectionCore::GetUrlResponse(v7);
      if ( UrlResponse != nullptr )
        return glwebtools::UrlResponseCore::GetData(UrlResponse, (const void **)a2, a3);
      else
        return -2147483645;
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlResponse::GetDataAsString  (binary VA: 0x13f3a30)
// Original: glwebtools::UrlResponse::GetDataAsString
// ----------------------------------------------------------------------------
int glwebtools::UrlResponse::GetDataAsString(int a1, int a2)
{
  int v2;
  glwebtools::HandleManager::Self *Instance;
  glwebtools::UrlResponseCore::Self *UrlResponse;
  typedef glwebtools::UrlConnectionCore::Self *_g4_t_v6;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  v2 = -2147483647;
  Instance = glwebtools::HandleManager::GetInstance();
  v6 = nullptr;
  if ( Instance != nullptr )
  {
    glwebtools::HandleManager::GetObjectPointer(Instance, *(uint32_t *)(a1 + 4), (void **)&v6);
    if ( v6 != nullptr )
    {
      UrlResponse = (glwebtools::UrlResponseCore::Self *)glwebtools::UrlConnectionCore::GetUrlResponse(v6);
      if ( UrlResponse != nullptr )
        return (int)(uintptr_t)(glwebtools::UrlResponseCore::GetDataAsString(UrlResponse, a2));
      else
        return -2147483645;
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlResponse::GetResponseCode  (binary VA: 0x13f3ab0)
// Original: glwebtools::UrlResponse::GetResponseCode
// ----------------------------------------------------------------------------
int glwebtools::UrlResponse::GetResponseCode(glwebtools::UrlResponse::Self *self)
{
  int v1;
  glwebtools::HandleManager::Self *Instance;
  glwebtools::UrlResponseCore::Self *UrlResponse;
  typedef glwebtools::UrlConnectionCore::Self *_g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  v1 = 0;
  Instance = glwebtools::HandleManager::GetInstance();
  v5 = nullptr;
  if ( Instance != nullptr )
  {
    glwebtools::HandleManager::GetObjectPointer(Instance, *((uint32_t *)self + 1), (void **)&v5);
    if ( v5 != nullptr )
    {
      UrlResponse = (glwebtools::UrlResponseCore::Self *)glwebtools::UrlConnectionCore::GetUrlResponse(v5);
      if ( UrlResponse != nullptr )
        return glwebtools::UrlResponseCore::GetResponseCode(UrlResponse);
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlResponse::GetHeaderField  (binary VA: 0x13f3b20)
// Original: glwebtools::UrlResponse::GetHeaderField
// ----------------------------------------------------------------------------
int glwebtools::UrlResponse::GetHeaderField(glwebtools::UrlResponse::Self *self, const char *a2)
{
  int v2;
  glwebtools::HandleManager::Self *Instance;
  glwebtools::UrlResponseCore::Self *UrlResponse;
  typedef glwebtools::UrlConnectionCore::Self *_g4_t_v6;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  v2 = 0;
  Instance = glwebtools::HandleManager::GetInstance();
  v6 = nullptr;
  if ( Instance != nullptr )
  {
    glwebtools::HandleManager::GetObjectPointer(Instance, *((uint32_t *)self + 1), (void **)&v6);
    if ( v6 != nullptr )
    {
      UrlResponse = (glwebtools::UrlResponseCore::Self *)glwebtools::UrlConnectionCore::GetUrlResponse(v6);
      if ( UrlResponse != nullptr )
        return (int)(uintptr_t)(glwebtools::UrlResponseCore::GetHeaderField(UrlResponse, a2));
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlResponse::IsHandleValid  (binary VA: 0x13f3b90)
// Original: glwebtools::UrlResponse::IsHandleValid
// ----------------------------------------------------------------------------
int glwebtools::UrlResponse::IsHandleValid(glwebtools::UrlResponse::Self *self)
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
// Function: glwebtools::UrlResponse::IsResponseReady  (binary VA: 0x13f3be0)
// Original: glwebtools::UrlResponse::IsResponseReady
// ----------------------------------------------------------------------------
int glwebtools::UrlResponse::IsResponseReady(glwebtools::UrlResponse::Self *self)
{
  glwebtools::HandleManager::Self *Instance;
  int v2;
  int UrlResponse;
  typedef glwebtools::UrlConnectionCore::Self *_g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  Instance = glwebtools::HandleManager::GetInstance();
  v2 = 0;
  v5 = nullptr;
  if ( Instance != nullptr )
  {
    glwebtools::HandleManager::GetObjectPointer(Instance, *((uint32_t *)self + 1), (void **)&v5);
    if ( v5 != nullptr )
    {
      UrlResponse = glwebtools::UrlConnectionCore::GetUrlResponse(v5);
      LOBYTE(UrlResponse) = UrlResponse != 0;
      return UrlResponse;
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlResponse::IsHTTPError  (binary VA: 0x13f3c50)
// Original: glwebtools::UrlResponse::IsHTTPError
// ----------------------------------------------------------------------------
bool glwebtools::UrlResponse::IsHTTPError(glwebtools::UrlResponse::Self *self)
{
  return glwebtools::UrlResponse::GetResponseCode(self) > 399;
}


