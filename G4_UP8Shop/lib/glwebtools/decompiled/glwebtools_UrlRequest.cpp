#include "Core/Utils/DecompTypes.h"
#include "glwebtools_UrlRequest.h"

// ============================================================================
// G4_UP8Shop/lib/glwebtools/decompiled/glwebtools_UrlRequest.cpp
// Library: glwebtools | Module: glwebtools_UrlRequest
// Binary Address Span: 0x13f2930 .. 0x13f3ed0 (39 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x13f2930 (size: 34 bytes)
// Symbol:    _ZN10glwebtools10UrlRequestC1Ev
// Demangled: glwebtools::UrlRequest::UrlRequest(void)
// ============================================================================
// Alternative name is '_ZN10glwebtools10UrlRequestC2Ev'
struct glwebtools::UrlRequest::Self *glwebtools::UrlRequest::Construct(glwebtools::UrlRequest::Self *self)
{
  *((uint32_t *)self + 1) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094D90);
  return self;
}
// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequest::Construct  (binary VA: 0x13f2960)
// Original: glwebtools::UrlRequest::UrlRequest
// ----------------------------------------------------------------------------
glwebtools::UrlRequest::Self * glwebtools::UrlRequest::Construct(glwebtools::UrlRequest::Self *self, const glwebtools::UrlRequest::Self *a2)
{
  glwebtools::UrlRequest::Self *result;
  typedef void *_g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 1);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094D90);
  result = (glwebtools::UrlRequest::Self *)(glwebtools::HandleManager::GetInstance());
  v3 = nullptr;
  if ( result != nullptr )
  {
    glwebtools::HandleManager::GetObjectPointer(result, *((uint32_t *)self + 1), &v3);
    result = (glwebtools::UrlRequest::Self *)v3;
    if ( v3 != nullptr )
      return G4_VCALL<glwebtools::UrlRequest::Self *>(v3, 12);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequest::Construct  (binary VA: 0x13f29d0)
// Original: glwebtools::UrlRequest::UrlRequest
// ----------------------------------------------------------------------------
glwebtools::UrlRequest::Self * glwebtools::UrlRequest::Construct(glwebtools::UrlRequest::Self *self, unsigned int a2)
{
  glwebtools::UrlRequest::Self *result;
  typedef void *_g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  *((uint32_t *)self + 1) = a2;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094D90);
  result = (glwebtools::UrlRequest::Self *)(glwebtools::HandleManager::GetInstance());
  v3 = nullptr;
  if ( result != nullptr )
  {
    glwebtools::HandleManager::GetObjectPointer(result, *((uint32_t *)self + 1), &v3);
    result = (glwebtools::UrlRequest::Self *)v3;
    if ( v3 != nullptr )
      return G4_VCALL<glwebtools::UrlRequest::Self *>(v3, 12);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequest::Release  (binary VA: 0x13f2a40)
// Original: glwebtools::UrlRequest::Release
// ----------------------------------------------------------------------------
int glwebtools::UrlRequest::Release(glwebtools::UrlRequest::Self *self)
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
// Function: glwebtools::UrlRequest::Destroy  (binary VA: 0x13f2ac0)
// Original: glwebtools::UrlRequest::~UrlRequest
// ----------------------------------------------------------------------------
void glwebtools::UrlRequest::Destroy(glwebtools::UrlRequest::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094D90);
  glwebtools::UrlRequest::Release(self);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequest::Destroy_ea13f2af0  (binary VA: 0x13f2af0)
// Original: glwebtools::UrlRequest::~UrlRequest
// ----------------------------------------------------------------------------
void glwebtools::UrlRequest::Destroy_ea13f2af0(glwebtools::UrlRequest::Self *self)
{
  glwebtools::UrlRequest::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequest::opAssign  (binary VA: 0x13f2b30)
// Original: glwebtools::UrlRequest::operator=
// ----------------------------------------------------------------------------
glwebtools::UrlRequest::Self * glwebtools::UrlRequest::opAssign(glwebtools::UrlRequest::Self *self, const glwebtools::UrlRequest::Self *a2)
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
    glwebtools::UrlRequest::Release(self);
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
// Function: glwebtools::UrlRequest::GetMethod  (binary VA: 0x13f2bb0)
// Original: glwebtools::UrlRequest::GetMethod
// ----------------------------------------------------------------------------
int glwebtools::UrlRequest::GetMethod(glwebtools::UrlRequest::Self *self)
{
  glwebtools::HandleManager::Self *Instance;
  int v2;
  typedef glwebtools::UrlRequestCore::Self *_g4_t_v4;
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
      return glwebtools::UrlRequestCore::GetMethod(v4);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequest::GetState  (binary VA: 0x13f2c20)
// Original: glwebtools::UrlRequest::GetState
// ----------------------------------------------------------------------------
int glwebtools::UrlRequest::GetState(glwebtools::UrlRequest::Self *self)
{
  glwebtools::HandleManager::Self *Instance;
  int v2;
  typedef glwebtools::UrlRequestCore::Self *_g4_t_v4;
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
      return glwebtools::UrlRequestCore::GetState(v4);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequest::Reset  (binary VA: 0x13f2c90)
// Original: glwebtools::UrlRequest::Reset
// ----------------------------------------------------------------------------
int glwebtools::UrlRequest::Reset(glwebtools::UrlRequest::Self *self)
{
  glwebtools::HandleManager::Self *Instance;
  int v2;
  typedef glwebtools::UrlRequestCore::Self *_g4_t_v4;
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
      return glwebtools::UrlRequestCore::Reset(v4);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequest::AddHeaders  (binary VA: 0x13f2d00)
// Original: glwebtools::UrlRequest::AddHeaders
// ----------------------------------------------------------------------------
int glwebtools::UrlRequest::AddHeaders(glwebtools::UrlRequest::Self *self, const char *a2, const char *a3)
{
  int v3;
  glwebtools::HandleManager::Self *Instance;
  typedef glwebtools::UrlRequestCore::Self *_g4_t_v6;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  v3 = -2147483647;
  Instance = glwebtools::HandleManager::GetInstance();
  v6 = nullptr;
  if ( Instance != nullptr )
  {
    glwebtools::HandleManager::GetObjectPointer(Instance, *((uint32_t *)self + 1), (void **)&v6);
    if ( v6 != nullptr )
      return glwebtools::UrlRequestCore::AddHeaders(v6, a2, a3);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequest::AddHeaders  (binary VA: 0x13f2d70)
// Original: glwebtools::UrlRequest::AddHeaders
// ----------------------------------------------------------------------------
int glwebtools::UrlRequest::AddHeaders(glwebtools::UrlRequest::Self *a1, char *a2, const char **a3)
{
  return glwebtools::UrlRequest::AddHeaders(a1, a2, *a3);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequest::AddHeaders  (binary VA: 0x13f2db0)
// Original: glwebtools::UrlRequest::AddHeaders
// ----------------------------------------------------------------------------
int glwebtools::UrlRequest::AddHeaders(glwebtools::UrlRequest::Self *a1, const char **a2, const char **a3)
{
  return glwebtools::UrlRequest::AddHeaders(a1, *a2, *a3);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequest::SetUrl  (binary VA: 0x13f2df0)
// Original: glwebtools::UrlRequest::SetUrl
// ----------------------------------------------------------------------------
int glwebtools::UrlRequest::SetUrl(glwebtools::UrlRequest::Self *self, const char *a2, unsigned int a3)
{
  int v3;
  glwebtools::HandleManager::Self *Instance;
  typedef glwebtools::UrlRequestCore::Self *_g4_t_v6;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  v3 = -2147483647;
  Instance = glwebtools::HandleManager::GetInstance();
  v6 = nullptr;
  if ( Instance != nullptr )
  {
    glwebtools::HandleManager::GetObjectPointer(Instance, *((uint32_t *)self + 1), (void **)&v6);
    if ( v6 != nullptr )
      return glwebtools::UrlRequestCore::SetUrl(v6, a2, a3);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequest::SetUrl  (binary VA: 0x13f2e60)
// Original: glwebtools::UrlRequest::SetUrl
// ----------------------------------------------------------------------------
int glwebtools::UrlRequest::SetUrl(glwebtools::UrlRequest::Self *a1, const char **a2, unsigned int a3)
{
  return glwebtools::UrlRequest::SetUrl(a1, *a2, a3);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequest::SetUrl  (binary VA: 0x13f2ea0)
// Original: glwebtools::UrlRequest::SetUrl
// ----------------------------------------------------------------------------
int glwebtools::UrlRequest::SetUrl(int a1, int a2, char *a3, char *a4, int a5)
{
  int v5;
  glwebtools::HandleManager::Self *Instance;
  typedef void *_g4_t_v8;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  v5 = -2147483647;
  Instance = glwebtools::HandleManager::GetInstance();
  v8 = nullptr;
  if ( Instance != nullptr )
  {
    glwebtools::HandleManager::GetObjectPointer(Instance, *(uint32_t *)(a1 + 4), &v8);
    if ( v8 != nullptr )
      return glwebtools::UrlRequestCore::SetUrl((int)(uintptr_t)(v8), a2, a3, a4, a5);
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequest::SetUrl  (binary VA: 0x13f2f20)
// Original: glwebtools::UrlRequest::SetUrl
// ----------------------------------------------------------------------------
int glwebtools::UrlRequest::SetUrl(int a1, int a2, char **a3, char **a4, int a5)
{
  return glwebtools::UrlRequest::SetUrl(a1, a2, *a3, *a4, a5);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequest::SetHTTPUrl  (binary VA: 0x13f2f70)
// Original: glwebtools::UrlRequest::SetHTTPUrl
// ----------------------------------------------------------------------------
int glwebtools::UrlRequest::SetHTTPUrl(glwebtools::UrlRequest::Self *self, char *a2, char *a3, unsigned int a4)
{
  return glwebtools::UrlRequest::SetUrl((int)(uintptr_t)(self), 0, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequest::SetHTTPUrl  (binary VA: 0x13f2fc0)
// Original: glwebtools::UrlRequest::SetHTTPUrl
// ----------------------------------------------------------------------------
int glwebtools::UrlRequest::SetHTTPUrl(int a1, char **a2, char **a3, int a4)
{
  return glwebtools::UrlRequest::SetUrl(a1, 0, *a2, *a3, a4);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequest::SetHTTPSUrl  (binary VA: 0x13f3010)
// Original: glwebtools::UrlRequest::SetHTTPSUrl
// ----------------------------------------------------------------------------
int glwebtools::UrlRequest::SetHTTPSUrl(glwebtools::UrlRequest::Self *self, char *a2, char *a3, unsigned int a4)
{
  return glwebtools::UrlRequest::SetUrl((int)(uintptr_t)(self), 1, a2, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequest::SetHTTPSUrl  (binary VA: 0x13f3060)
// Original: glwebtools::UrlRequest::SetHTTPSUrl
// ----------------------------------------------------------------------------
int glwebtools::UrlRequest::SetHTTPSUrl(int a1, char **a2, char **a3, int a4)
{
  return glwebtools::UrlRequest::SetUrl(a1, 1, *a2, *a3, a4);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequest::SetHeaders  (binary VA: 0x13f30b0)
// Original: glwebtools::UrlRequest::SetHeaders
// ----------------------------------------------------------------------------
int glwebtools::UrlRequest::SetHeaders(glwebtools::UrlRequest::Self *self, const std::map<std::string,std::string> *a2)
{
  int v2;
  glwebtools::HandleManager::Self *Instance;
  typedef glwebtools::UrlRequestCore::Self *_g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  v2 = -2147483647;
  Instance = glwebtools::HandleManager::GetInstance();
  v5 = nullptr;
  if ( Instance != nullptr )
  {
    glwebtools::HandleManager::GetObjectPointer(Instance, *((uint32_t *)self + 1), (void **)&v5);
    if ( v5 != nullptr )
      return glwebtools::UrlRequestCore::SetHeaders(v5, a2);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequest::ClearHeaders  (binary VA: 0x13f3120)
// Original: glwebtools::UrlRequest::ClearHeaders
// ----------------------------------------------------------------------------
int glwebtools::UrlRequest::ClearHeaders(glwebtools::UrlRequest::Self *self)
{
  glwebtools::HandleManager::Self *Instance;
  int v2;
  typedef glwebtools::UrlRequestCore::Self *_g4_t_v4;
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
      return glwebtools::UrlRequestCore::ClearHeaders(v4);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequest::SetMethod  (binary VA: 0x13f3190)
// Original: glwebtools::UrlRequest::SetMethod
// ----------------------------------------------------------------------------
int glwebtools::UrlRequest::SetMethod(int a1, int a2)
{
  int v2;
  glwebtools::HandleManager::Self *Instance;
  typedef void *_g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  v2 = -2147483647;
  Instance = glwebtools::HandleManager::GetInstance();
  v5 = nullptr;
  if ( Instance != nullptr )
  {
    glwebtools::HandleManager::GetObjectPointer(Instance, *(uint32_t *)(a1 + 4), &v5);
    if ( v5 != nullptr )
      return glwebtools::UrlRequestCore::SetMethod(v5, a2);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequest::SetData  (binary VA: 0x13f3200)
// Original: glwebtools::UrlRequest::SetData
// ----------------------------------------------------------------------------
int glwebtools::UrlRequest::SetData(int a1, int a2)
{
  int v2;
  glwebtools::HandleManager::Self *Instance;
  typedef void *_g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  v2 = -2147483647;
  Instance = glwebtools::HandleManager::GetInstance();
  v5 = nullptr;
  if ( Instance != nullptr )
  {
    glwebtools::HandleManager::GetObjectPointer(Instance, *(uint32_t *)(a1 + 4), &v5);
    if ( v5 != nullptr )
      return glwebtools::UrlRequestCore::SetData(v5, a2);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequest::SetData  (binary VA: 0x13f3270)
// Original: glwebtools::UrlRequest::SetData
// ----------------------------------------------------------------------------
int glwebtools::UrlRequest::SetData(glwebtools::UrlRequest::Self *self, const std::map<std::string,std::string> *a2)
{
  int v2;
  glwebtools::HandleManager::Self *Instance;
  typedef glwebtools::UrlRequestCore::Self *_g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  v2 = -2147483647;
  Instance = glwebtools::HandleManager::GetInstance();
  v5 = nullptr;
  if ( Instance != nullptr )
  {
    glwebtools::HandleManager::GetObjectPointer(Instance, *((uint32_t *)self + 1), (void **)&v5);
    if ( v5 != nullptr )
      return glwebtools::UrlRequestCore::SetData(v5, a2);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequest::SetData  (binary VA: 0x13f32e0)
// Original: glwebtools::UrlRequest::SetData
// ----------------------------------------------------------------------------
int glwebtools::UrlRequest::SetData(glwebtools::UrlRequest::Self *self, const void *a2, unsigned int a3)
{
  int v3;
  glwebtools::HandleManager::Self *Instance;
  typedef glwebtools::UrlRequestCore::Self *_g4_t_v6;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  v3 = -2147483647;
  Instance = glwebtools::HandleManager::GetInstance();
  v6 = nullptr;
  if ( Instance != nullptr )
  {
    glwebtools::HandleManager::GetObjectPointer(Instance, *((uint32_t *)self + 1), (void **)&v6);
    if ( v6 != nullptr )
      return glwebtools::UrlRequestCore::SetData(v6, a2, a3);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequest::AddData  (binary VA: 0x13f3350)
// Original: glwebtools::UrlRequest::AddData
// ----------------------------------------------------------------------------
int glwebtools::UrlRequest::AddData(glwebtools::UrlRequest::Self *self, const std::map<std::string,std::string> *a2)
{
  int v2;
  glwebtools::HandleManager::Self *Instance;
  typedef glwebtools::UrlRequestCore::Self *_g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  v2 = -2147483647;
  Instance = glwebtools::HandleManager::GetInstance();
  v5 = nullptr;
  if ( Instance != nullptr )
  {
    glwebtools::HandleManager::GetObjectPointer(Instance, *((uint32_t *)self + 1), (void **)&v5);
    if ( v5 != nullptr )
      return (int)(uintptr_t)(glwebtools::UrlRequestCore::AddData(v5, a2));
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequest::AddData  (binary VA: 0x13f33c0)
// Original: glwebtools::UrlRequest::AddData
// ----------------------------------------------------------------------------
int glwebtools::UrlRequest::AddData(glwebtools::UrlRequest::Self *self, const char *a2, const char *a3)
{
  int v3;
  glwebtools::HandleManager::Self *Instance;
  typedef glwebtools::UrlRequestCore::Self *_g4_t_v6;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  v3 = -2147483647;
  Instance = glwebtools::HandleManager::GetInstance();
  v6 = nullptr;
  if ( Instance != nullptr )
  {
    glwebtools::HandleManager::GetObjectPointer(Instance, *((uint32_t *)self + 1), (void **)&v6);
    if ( v6 != nullptr )
      return glwebtools::UrlRequestCore::AddData(v6, a2, a3);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequest::AddData  (binary VA: 0x13f3430)
// Original: glwebtools::UrlRequest::AddData
// ----------------------------------------------------------------------------
int glwebtools::UrlRequest::AddData(glwebtools::UrlRequest::Self *a1, char *a2, const char **a3)
{
  return glwebtools::UrlRequest::AddData(a1, a2, *a3);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequest::AddData  (binary VA: 0x13f3470)
// Original: glwebtools::UrlRequest::AddData
// ----------------------------------------------------------------------------
int glwebtools::UrlRequest::AddData(glwebtools::UrlRequest::Self *a1, const char **a2, const char **a3)
{
  return glwebtools::UrlRequest::AddData(a1, *a2, *a3);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequest::ClearData  (binary VA: 0x13f34b0)
// Original: glwebtools::UrlRequest::ClearData
// ----------------------------------------------------------------------------
int glwebtools::UrlRequest::ClearData(glwebtools::UrlRequest::Self *self)
{
  glwebtools::HandleManager::Self *Instance;
  int v2;
  typedef glwebtools::UrlRequestCore::Self *_g4_t_v4;
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
      return glwebtools::UrlRequestCore::ClearData(v4);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequest::IsHandleValid  (binary VA: 0x13f3520)
// Original: glwebtools::UrlRequest::IsHandleValid
// ----------------------------------------------------------------------------
void * glwebtools::UrlRequest::IsHandleValid(glwebtools::UrlRequest::Self *self)
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
  v2 = nullptr;
  v4 = nullptr;
  if ( Instance != nullptr )
  {
    glwebtools::HandleManager::GetObjectPointer(Instance, *((uint32_t *)self + 1), &v4);
    v2 = v4;
    LOBYTE(v2) = v4 != nullptr;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequest::IsInitialState  (binary VA: 0x13f3570)
// Original: glwebtools::UrlRequest::IsInitialState
// ----------------------------------------------------------------------------
bool glwebtools::UrlRequest::IsInitialState(glwebtools::UrlRequest::Self *self)
{
  return glwebtools::UrlRequest::GetState(self) == 1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequest::IsReadyToRun  (binary VA: 0x13f35a0)
// Original: glwebtools::UrlRequest::IsReadyToRun
// ----------------------------------------------------------------------------
bool glwebtools::UrlRequest::IsReadyToRun(glwebtools::UrlRequest::Self *self)
{
  return glwebtools::UrlRequest::GetState(self) == 2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequest::IsRunning  (binary VA: 0x13f35d0)
// Original: glwebtools::UrlRequest::IsRunning
// ----------------------------------------------------------------------------
bool glwebtools::UrlRequest::IsRunning(glwebtools::UrlRequest::Self *self)
{
  return glwebtools::UrlRequest::GetState(self) == 3;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequest::IsError  (binary VA: 0x13f3600)
// Original: glwebtools::UrlRequest::IsError
// ----------------------------------------------------------------------------
int glwebtools::UrlRequest::IsError(glwebtools::UrlRequest::Self *self)
{
  int State;
  int v2;

  State = glwebtools::UrlRequest::GetState(self);
  v2 = 1;
  if ( State != 4 )
    LOBYTE(v2) = glwebtools::UrlRequest::GetState(self) == 0;
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequest::GetCreationSettings  (binary VA: 0x13f3650)
// Original: glwebtools::UrlRequest::GetCreationSettings
// ----------------------------------------------------------------------------
int glwebtools::UrlRequest::GetCreationSettings(glwebtools::UrlRequest::Self *self, glwebtools::UrlRequest::CreationSettings *a2)
{
  uint8_t v2;
  int result;
  glwebtools::HandleManager::Self *Instance;
  glwebtools::UrlRequestCore::Self *v5;
  typedef void *_g4_t_v6;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  v2 = (uint8_t)(uintptr_t)glwebtools::UrlRequest::IsHandleValid(self);
  result = -2147483647;
  if ( v2 != 0 )
  {
    Instance = glwebtools::HandleManager::GetInstance();
    v5 = nullptr;
    v6 = nullptr;
    if ( Instance != nullptr )
    {
      glwebtools::HandleManager::GetObjectPointer(Instance, *((uint32_t *)self + 1), &v6);
      v5 = (glwebtools::UrlRequestCore::Self *)v6;
    }
    return glwebtools::UrlRequestCore::GetCreationSettings(v5, a2);
  }
  return result;
}



// ============================================================================
// Address:   0x13f3ed0 (size: 34 bytes)
// Symbol:    _ZN10glwebtools10UrlRequest16CreationSettingsC1Ev
// Demangled: glwebtools::UrlRequest::CreationSettings::CreationSettings(void)
// ============================================================================
// Alternative name is '_ZN10glwebtools10UrlRequest16CreationSettingsC2Ev'
static struct glwebtools::UrlRequest::CreationSettings *g4_struct_ctor_4(
        glwebtools::UrlRequest::CreationSettings *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 1) = 0;
  return self;
}

