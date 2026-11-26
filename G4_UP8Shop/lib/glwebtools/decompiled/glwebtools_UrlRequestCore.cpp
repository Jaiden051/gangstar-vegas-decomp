#include "Core/Utils/DecompTypes.h"
#include "glwebtools_UrlRequestCore.h"

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequestCore::Drop  (binary VA: 0x13f3c80)
// Original: glwebtools::UrlRequestCore::Drop
// ----------------------------------------------------------------------------
int glwebtools::UrlRequestCore::Drop(glwebtools::UrlRequestCore::Self *self)
{
  int v1;

  glwebtools::Mutex::Lock((glwebtools::UrlRequestCore::Self *)((char *)self + 32));
  v1 = *((uint32_t *)self + 1);
  if ( v1 > 0 )
    *((uint32_t *)self + 1) = --v1;
  glwebtools::Mutex::Unlock((glwebtools::UrlRequestCore::Self *)((char *)self + 32));
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequestCore::Grab  (binary VA: 0x13f3ce0)
// Original: glwebtools::UrlRequestCore::Grab
// ----------------------------------------------------------------------------
int glwebtools::UrlRequestCore::Grab(glwebtools::UrlRequestCore::Self *self)
{
  int v1;

  glwebtools::Mutex::Lock((glwebtools::UrlRequestCore::Self *)((char *)self + 32));
  v1 = *((uint32_t *)self + 1) + 1;
  *((uint32_t *)self + 1) = v1;
  glwebtools::Mutex::Unlock((glwebtools::UrlRequestCore::Self *)((char *)self + 32));
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequestCore::CanDelete  (binary VA: 0x13f3d40)
// Original: glwebtools::UrlRequestCore::CanDelete
// ----------------------------------------------------------------------------
int glwebtools::UrlRequestCore::CanDelete(glwebtools::UrlRequestCore::Self *self)
{
  int v1;
  int v2;

  glwebtools::Mutex::Lock((glwebtools::UrlRequestCore::Self *)((char *)self + 32));
  v1 = *((uint32_t *)self + 1);
  LOBYTE(v1) = v1 == 0;
  v2 = v1;
  glwebtools::Mutex::Unlock((glwebtools::UrlRequestCore::Self *)((char *)self + 32));
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequestCore::Destroy  (binary VA: 0x13f3d90)
// Original: glwebtools::UrlRequestCore::~UrlRequestCore
// ----------------------------------------------------------------------------
void glwebtools::UrlRequestCore::Destroy(glwebtools::UrlRequestCore::Self *self)
{
  uint32_t *v1;
  int v2;
  int v3;
  int v4;

  v1 = *((uint32_t **)self + 7);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094DB0);
  if ( v1 != nullptr )
  {
    if ( *v1 != 0 )
    {
      curl_slist_free_all(*v1);
      *v1 = 0;
    }
    sub_4EBEE0((int)(uintptr_t)(v1));
  }
  v2 = *((uint32_t *)self + 11);
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v2 - 12));
  }
  glwebtools::Mutex::Destroy((glwebtools::UrlRequestCore::Self *)((char *)self + 32));
  v3 = *((uint32_t *)self + 4);
  if ( (uint32_t *)(v3 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v3 - 12));
  }
  v4 = *((uint32_t *)self + 2);
  if ( (uint32_t *)(v4 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v4 - 12));
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2049608);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequestCore::Destroy_ea13f3e90  (binary VA: 0x13f3e90)
// Original: glwebtools::UrlRequestCore::~UrlRequestCore
// ----------------------------------------------------------------------------
void glwebtools::UrlRequestCore::Destroy_ea13f3e90(glwebtools::UrlRequestCore::Self *self)
{
  glwebtools::UrlRequestCore::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequestCore::GetMethod  (binary VA: 0x13f3f00)
// Original: glwebtools::UrlRequestCore::GetMethod
// ----------------------------------------------------------------------------
int glwebtools::UrlRequestCore::GetMethod(glwebtools::UrlRequestCore::Self *self)
{
  return *((uint32_t *)self + 5);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequestCore::GetState  (binary VA: 0x13f3f10)
// Original: glwebtools::UrlRequestCore::GetState
// ----------------------------------------------------------------------------
int glwebtools::UrlRequestCore::GetState(glwebtools::UrlRequestCore::Self *self)
{
  return *((uint32_t *)self + 6);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequestCore::Reset  (binary VA: 0x13f3f20)
// Original: glwebtools::UrlRequestCore::Reset
// ----------------------------------------------------------------------------
int glwebtools::UrlRequestCore::Reset(glwebtools::UrlRequestCore::Self *self)
{
  int v1;
  uint32_t *v2;

  v1 = -2147483644;
  glwebtools::Mutex::Lock((glwebtools::UrlRequestCore::Self *)((char *)self + 32));
  if ( *((uint32_t *)self + 6) != 3 )
  {
    g4_std::string::clear((char *)self + 8, 0, *(uint32_t *)(*((uint32_t *)self + 2) - 12), 0);
    *((uint32_t *)self + 3) = 0;
    g4_std::string::clear((char *)self + 16, 0, *(uint32_t *)(*((uint32_t *)self + 4) - 12), 0);
    v2 = *((uint32_t **)self + 7);
    if ( *v2 != 0 )
    {
      curl_slist_free_all(*v2);
      *v2 = 0;
    }
    *((uint32_t *)self + 5) = 1;
    *((uint32_t *)self + 6) = 1;
    v1 = 0;
  }
  glwebtools::Mutex::Unlock((glwebtools::UrlRequestCore::Self *)((char *)self + 32));
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequestCore::SetUrl  (binary VA: 0x13f4000)
// Original: glwebtools::UrlRequestCore::SetUrl
// ----------------------------------------------------------------------------
int glwebtools::UrlRequestCore::SetUrl(glwebtools::UrlRequestCore::Self *self, char *s, unsigned int a3)
{
  size_t v3;
  int v4;

  glwebtools::Mutex::Lock((glwebtools::UrlRequestCore::Self *)((char *)self + 32));
  if ( *((uint32_t *)self + 6) == 3 )
  {
    v4 = -2147483644;
  }
  else if ( s != nullptr )
  {
    v3 = strlen(s);
    g4_std_compat::string_assign((int)(uintptr_t)(self) + 8, s, v3);
    *((uint32_t *)self + 6) = 2;
    *((uint32_t *)self + 3) = a3;
    v4 = 0;
  }
  else
  {
    v4 = -2147483646;
  }
  glwebtools::Mutex::Unlock((glwebtools::UrlRequestCore::Self *)((char *)self + 32));
  return v4;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequestCore::SetUrl  (binary VA: 0x13f40a0)
// Original: glwebtools::UrlRequestCore::SetUrl
// ----------------------------------------------------------------------------
int glwebtools::UrlRequestCore::SetUrl(uint32_t *a1, int a2, char *s, char *a4, int a5)
{
  int v5;
  size_t v6;
  size_t v7;
  int v9;

  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(a1 + 8));
  if ( a1[6] == 3 )
  {
    v5 = -2147483644;
    goto LABEL_9;
  }
  if ( s == nullptr )
  {
    v5 = -2147483646;
    goto LABEL_9;
  }
  g4_std::string::clear(a1 + 2, 0, *(uint32_t *)(a1[2] - 12), 0);
  if ( a2 != 0 )
  {
    v5 = -2147483646;
    if ( a2 != 1 )
      goto LABEL_9;
    g4_std_compat::string_assign((int)(uintptr_t)(a1 + 2), "https://", 8u);
  }
  else
  {
    g4_std_compat::string_assign((int)(uintptr_t)(a1 + 2), "http://", 7u);
  }
  v6 = strlen(s);
  g4_std::string::append((int)(uintptr_t)(a1 + 2), s, v6);
  if ( a4 != nullptr )
  {
    g4_std::string::append((int)(uintptr_t)(a1 + 2), "/", 1u);
    v7 = strlen(a4);
    g4_std::string::append((int)(uintptr_t)(a1 + 2), a4, v7);
  }
  a1[6] = 2;
  a1[3] = a5;
  v5 = 0;
LABEL_9:
  v9 = v5;
  glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)(a1 + 8));
  return v9;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequestCore::AddHeaders  (binary VA: 0x13f4210)
// Original: glwebtools::UrlRequestCore::_AddHeaders
// ----------------------------------------------------------------------------
int glwebtools::UrlRequestCore::AddHeaders(glwebtools::UrlRequestCore::Self *self, char *a2, char *s)
{
  int result;
  uint32_t *v4;
  size_t v5;
  void *v6;
  typedef int _g4_t_v7;
  typedef uint32_t _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (10u + sizeof(_g4_t_v7)) > _g4_s0 ? (10u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 10u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  if ( s == nullptr || a2 == nullptr )
    return -2147483646;
  result = -2147483644;
  if ( *((uint32_t *)self + 6) != 3 )
  {
    v4 = *((uint32_t **)self + 7);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v8), a2, (int)(uintptr_t)(&v7));
    g4_std::string::append((int)(uintptr_t)(v8), ": ", 2u);
    v5 = strlen(s);
    g4_std::string::append((int)(uintptr_t)(v8), s, v5);
    *v4 = (uint32_t)(uintptr_t)(curl_slist_append(*v4, v8[0]));
    v6 = (void *)(v8[0] - 12);
    if ( (uint32_t *)(v8[0] - 12) == dword_213B808 )
    {
      return 0;
    }
    else
    {
      result = 0;
      if ( __sync_fetch_and_add((volatile int32_t *)(v8[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v6);
        return 0;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequestCore::AddHeaders_ea13f4310  (binary VA: 0x13f4310)
// Original: glwebtools::UrlRequestCore::AddHeaders
// ----------------------------------------------------------------------------
int glwebtools::UrlRequestCore::AddHeaders_ea13f4310(glwebtools::UrlRequestCore::Self *self, char *a2, char *a3)
{
  int v3;

  glwebtools::Mutex::Lock((glwebtools::UrlRequestCore::Self *)((char *)self + 32));
  v3 = glwebtools::UrlRequestCore::AddHeaders(self, a2, a3);
  glwebtools::Mutex::Unlock((glwebtools::UrlRequestCore::Self *)((char *)self + 32));
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequestCore::AddHeaders  (binary VA: 0x13f4370)
// Original: glwebtools::UrlRequestCore::AddHeaders
// ----------------------------------------------------------------------------
int glwebtools::UrlRequestCore::AddHeaders(glwebtools::UrlRequestCore::Self *self, const std::map<std::string,std::string> *a2)
{
  char **v2;
  int v3;

  glwebtools::Mutex::Lock((glwebtools::UrlRequestCore::Self *)((char *)self + 32));
  if ( *((uint32_t *)self + 6) == 3 )
  {
    v3 = -2147483644;
  }
  else
  {
    v2 = *((char ***)a2 + 3);
    v3 = 0;
    if ( v2 != (char **)((char *)a2 + 4) )
    {
      while ( 1 )
      {
        v3 = glwebtools::UrlRequestCore::AddHeaders(self, v2[4], v2[5]);
        if ( !glwebtools::IsOperationSuccess((glwebtools::Self *)v3) )
          break;
        v2 = (char **)sub_19048E0(v2);
        if ( (char **)((char *)a2 + 4) == v2 )
        {
          v3 = 0;
          break;
        }
      }
    }
  }
  glwebtools::Mutex::Unlock((glwebtools::UrlRequestCore::Self *)((char *)self + 32));
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequestCore::SetHeaders  (binary VA: 0x13f4420)
// Original: glwebtools::UrlRequestCore::SetHeaders
// ----------------------------------------------------------------------------
int glwebtools::UrlRequestCore::SetHeaders(glwebtools::UrlRequestCore::Self *self, const std::map<std::string,std::string> *a2)
{
  char *v2;
  uint32_t *v3;
  int v4;
  void *v5;
  typedef char *_g4_t_v7;
  typedef int _g4_t_v8[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v8)) > _g4_s1 ? (28u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  glwebtools::Mutex::Lock((glwebtools::UrlRequestCore::Self *)((char *)self + 32));
  if ( *((uint32_t *)self + 6) == 3 )
  {
    v4 = -2147483644;
  }
  else
  {
    v2 = *((char **)a2 + 3);
    v7 = (char *)a2 + 4;
    v3 = *((uint32_t **)self + 7);
    if ( *v3 != 0 )
    {
      curl_slist_free_all(*v3);
      *v3 = 0;
    }
    v4 = 0;
    if ( v2 != v7 )
    {
      do
      {
        g4_std::string::construct_copy(v8, v2 + 16);
        g4_std::string::append((int)(uintptr_t)(v8), ": ", 2u);
        g4_std::string::append_str(v8, v2 + 20);
        *v3 = (uint32_t)(uintptr_t)(curl_slist_append(*v3, v8[0]));
        v5 = (void *)(v8[0] - 12);
        if ( (uint32_t *)(v8[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v8[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v5);
        }
        v2 = (char *)sub_19048E0(v2);
      }
      while ( v7 != v2 );
      v4 = 0;
    }
  }
  glwebtools::Mutex::Unlock((glwebtools::UrlRequestCore::Self *)((char *)self + 32));
  return v4;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequestCore::ClearHeaders  (binary VA: 0x13f4540)
// Original: glwebtools::UrlRequestCore::ClearHeaders
// ----------------------------------------------------------------------------
int glwebtools::UrlRequestCore::ClearHeaders(glwebtools::UrlRequestCore::Self *self)
{
  uint32_t *v1;
  int v2;

  glwebtools::Mutex::Lock((glwebtools::UrlRequestCore::Self *)((char *)self + 32));
  if ( *((uint32_t *)self + 6) == 3 )
  {
    v2 = -2147483644;
  }
  else
  {
    v1 = *((uint32_t **)self + 7);
    v2 = 0;
    if ( *v1 != 0 )
    {
      curl_slist_free_all(*v1);
      *v1 = 0;
    }
  }
  glwebtools::Mutex::Unlock((glwebtools::UrlRequestCore::Self *)((char *)self + 32));
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequestCore::SetMethod  (binary VA: 0x13f45c0)
// Original: glwebtools::UrlRequestCore::SetMethod
// ----------------------------------------------------------------------------
int glwebtools::UrlRequestCore::SetMethod(uint32_t *a1, int a2)
{
  int v2;

  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(a1 + 8));
  if ( a1[6] == 3 )
  {
    v2 = -2147483644;
  }
  else
  {
    a1[5] = a2;
    v2 = 0;
  }
  glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)(a1 + 8));
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequestCore::SetData  (binary VA: 0x13f4620)
// Original: glwebtools::UrlRequestCore::SetData
// ----------------------------------------------------------------------------
int glwebtools::UrlRequestCore::SetData(int a1, const char **a2)
{
  int v2;
  const char *v3;
  size_t v4;
  char *v6;

  v2 = -2147483644;
  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(a1 + 32));
  if ( *(uint32_t *)(a1 + 24) != 3 )
  {
    v3 = *a2;
    v4 = strlen(*a2);
    v6 = (char *)v3;
    v2 = 0;
    g4_std_compat::string_assign(a1 + 16, v6, v4);
  }
  glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)(a1 + 32));
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequestCore::SetData  (binary VA: 0x13f46a0)
// Original: glwebtools::UrlRequestCore::SetData
// ----------------------------------------------------------------------------
int glwebtools::UrlRequestCore::SetData(glwebtools::UrlRequestCore::Self *self, const std::map<std::string,std::string> *a2)
{
  int v2;
  uint32_t *v3;
  char *v4;
  char *s;
  size_t v6;
  char *v7;
  size_t v8;
  int v9;

  v2 = -2147483644;
  glwebtools::Mutex::Lock((glwebtools::UrlRequestCore::Self *)((char *)self + 32));
  if ( *((uint32_t *)self + 6) != 3 )
  {
    v3 = *((uint32_t **)a2 + 3);
    v4 = (char *)self + 16;
    g4_std::string::clear((char *)self + 16, 0, *(uint32_t *)(*((uint32_t *)self + 4) - 12), 0);
    for ( ; (uint32_t *)((char *)a2 + 4) != v3; v3 = (uint32_t *)sub_19048E0(v3) )
    {
      s = (char *)v3[4];
      v6 = strlen(s);
      g4_std::string::append((int)(uintptr_t)(v4), s, v6);
      g4_std::string::append((int)(uintptr_t)(v4), "=", 1u);
      v7 = (char *)v3[5];
      v8 = strlen(v7);
      g4_std::string::append((int)(uintptr_t)(v4), v7, v8);
      g4_std::string::append((int)(uintptr_t)(v4), "&", 1u);
    }
    v2 = 0;
    v9 = *(uint32_t *)(*((uint32_t *)self + 4) - 12);
    if ( v9 != 0 )
      sub_1939D80((int)(uintptr_t)(v4), v9 - 1, 0);
  }
  glwebtools::Mutex::Unlock((glwebtools::UrlRequestCore::Self *)((char *)self + 32));
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequestCore::SetData  (binary VA: 0x13f47f0)
// Original: glwebtools::UrlRequestCore::SetData
// ----------------------------------------------------------------------------
int glwebtools::UrlRequestCore::SetData(glwebtools::UrlRequestCore::Self *self, void *a2, unsigned int a3)
{
  void *v3;
  int v4;
  typedef int _g4_t_v6;
  typedef uint32_t _g4_t_v7[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (10u + sizeof(_g4_t_v6)) > _g4_s0 ? (10u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 10u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);

  glwebtools::Mutex::Lock((glwebtools::UrlRequestCore::Self *)((char *)self + 32));
  if ( *((uint32_t *)self + 6) == 3 )
  {
    v4 = -2147483644;
  }
  else if ( a3 != 0 && a2 != nullptr )
  {
    sub_193A970((int)(uintptr_t)(v7), a2, a3, (int)(uintptr_t)(&v6));
    g4_std::string::assign_str((char *)self + 16, v7);
    v3 = (void *)(v7[0] - 12);
    if ( (uint32_t *)(v7[0] - 12) == dword_213B808 )
    {
      v4 = 0;
    }
    else
    {
      v4 = 0;
      if ( __sync_fetch_and_add((volatile int32_t *)(v7[0] - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v3);
    }
  }
  else
  {
    v4 = -2147483646;
  }
  glwebtools::Mutex::Unlock((glwebtools::UrlRequestCore::Self *)((char *)self + 32));
  return v4;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequestCore::AddData  (binary VA: 0x13f48d0)
// Original: glwebtools::UrlRequestCore::_AddData
// ----------------------------------------------------------------------------
int glwebtools::UrlRequestCore::AddData(glwebtools::UrlRequestCore::Self *self, char *s, char *a3)
{
  char *v3;
  size_t v4;
  size_t v5;

  if ( *((uint32_t *)self + 6) == 3 )
    return -2147483644;
  if ( a3 == nullptr || s == nullptr )
    return -2147483646;
  v3 = (char *)self + 16;
  if ( *(uint32_t *)(*((uint32_t *)self + 4) - 12) != 0 )
    g4_std::string::append((int)(uintptr_t)(v3), "&", 1u);
  v4 = strlen(s);
  g4_std::string::append((int)(uintptr_t)(v3), s, v4);
  g4_std::string::append((int)(uintptr_t)(v3), "=", 1u);
  v5 = strlen(a3);
  g4_std::string::append((int)(uintptr_t)(v3), a3, v5);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequestCore::AddData_ea13f49c0  (binary VA: 0x13f49c0)
// Original: glwebtools::UrlRequestCore::AddData
// ----------------------------------------------------------------------------
int glwebtools::UrlRequestCore::AddData_ea13f49c0(glwebtools::UrlRequestCore::Self *self, char *a2, char *a3)
{
  int v3;

  glwebtools::Mutex::Lock((glwebtools::UrlRequestCore::Self *)((char *)self + 32));
  v3 = glwebtools::UrlRequestCore::AddData(self, a2, a3);
  glwebtools::Mutex::Unlock((glwebtools::UrlRequestCore::Self *)((char *)self + 32));
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequestCore::AddData  (binary VA: 0x13f4a20)
// Original: glwebtools::UrlRequestCore::AddData
// ----------------------------------------------------------------------------
glwebtools::Self * glwebtools::UrlRequestCore::AddData(glwebtools::UrlRequestCore::Self *self, const std::map<std::string,std::string> *a2)
{
  char **v2;
  glwebtools::Self *v3;

  glwebtools::Mutex::Lock((glwebtools::UrlRequestCore::Self *)((char *)self + 32));
  v2 = *((char ***)a2 + 3);
  v3 = nullptr;
  if ( v2 != (char **)((char *)a2 + 4) )
  {
    while ( 1 )
    {
      v3 = (glwebtools::Self *)glwebtools::UrlRequestCore::AddData(self, v2[4], v2[5]);
      if ( !glwebtools::IsOperationSuccess(v3) )
        break;
      v2 = (char **)sub_19048E0(v2);
      if ( (char **)((char *)a2 + 4) == v2 )
      {
        v3 = nullptr;
        break;
      }
    }
  }
  glwebtools::Mutex::Unlock((glwebtools::UrlRequestCore::Self *)((char *)self + 32));
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequestCore::ClearData  (binary VA: 0x13f4ac0)
// Original: glwebtools::UrlRequestCore::ClearData
// ----------------------------------------------------------------------------
int glwebtools::UrlRequestCore::ClearData(glwebtools::UrlRequestCore::Self *self)
{
  int v1;

  v1 = -2147483644;
  glwebtools::Mutex::Lock((glwebtools::UrlRequestCore::Self *)((char *)self + 32));
  if ( *((uint32_t *)self + 6) != 3 )
  {
    v1 = 0;
    g4_std::string::clear((char *)self + 16, 0, *(uint32_t *)(*((uint32_t *)self + 4) - 12), 0);
  }
  glwebtools::Mutex::Unlock((glwebtools::UrlRequestCore::Self *)((char *)self + 32));
  return v1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequestCore::Construct  (binary VA: 0x13f4b40)
// Original: glwebtools::UrlRequestCore::UrlRequestCore
// ----------------------------------------------------------------------------
glwebtools::UrlRequestCore::Self * glwebtools::UrlRequestCore::Construct(glwebtools::UrlRequestCore::Self *self, const glwebtools::UrlRequest::CreationSettings *a2)
{
  glwebtools::UrlRequestCore::Self *result;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094DB0);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 1;
  *((uint32_t *)self + 6) = 1;
  glwebtools::Mutex::Construct((glwebtools::UrlRequestCore::Self *)((char *)self + 32));
  *((uint32_t *)self + 10) = 0;
  g4_std::string::construct_copy((char *)self + 44, a2);
  *((uint32_t *)self + 12) = *((uint32_t *)a2 + 1);
  result = (glwebtools::UrlRequestCore::Self *)sub_4EBE70(4u, 4, (int)(uintptr_t)(&unk_1B15112), (int)(uintptr_t)(&unk_1B15112), 0);
  *(uint32_t *)result = 0;
  *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequestCore::GetToken  (binary VA: 0x13f4c10)
// Original: glwebtools::UrlRequestCore::GetToken
// ----------------------------------------------------------------------------
int glwebtools::UrlRequestCore::GetToken(glwebtools::UrlRequestCore::Self *self)
{
  return *((uint32_t *)self + 10);
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequestCore::SetToken  (binary VA: 0x13f4c20)
// Original: glwebtools::UrlRequestCore::SetToken
// ----------------------------------------------------------------------------
glwebtools::UrlRequestCore::Self * glwebtools::UrlRequestCore::SetToken(glwebtools::UrlRequestCore::Self *self, unsigned int a2)
{
  *((uint32_t *)self + 10) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequestCore::SetState  (binary VA: 0x13f4c30)
// Original: glwebtools::UrlRequestCore::SetState
// ----------------------------------------------------------------------------
int glwebtools::UrlRequestCore::SetState(int a1, int a2)
{
  *(uint32_t *)(a1 + 24) = a2;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequestCore::SetupHandler  (binary VA: 0x13f4c50)
// Original: glwebtools::UrlRequestCore::SetupHandler
// ----------------------------------------------------------------------------
int glwebtools::UrlRequestCore::SetupHandler(glwebtools::UrlRequestCore::Self *self, void *a2)
{
  int v3;
  int v4;
  void *v5;
  typedef uint8_t _g4_t_v6;
  typedef char _g4_t_v7[16];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (15u + sizeof(_g4_t_v6)) > _g4_s0 ? (15u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v7)) > _g4_s1 ? (28u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 15u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);

  glwebtools::Mutex::Lock((glwebtools::UrlRequestCore::Self *)((char *)self + 32));
  v6 = 0;
  if ( *((uint32_t *)self + 6) == 2 )
  {
    v3 = *((uint32_t *)self + 5);
    if ( (v3 == 3 || v3 == 1 || v3 == 4) && *(uint32_t *)(*((uint32_t *)self + 4) - 12) != 0 )
    {
      g4_std::string::construct_copy(v7, (char *)self + 8);
      g4_std::string::append((int)(uintptr_t)(v7), "?", 1u);
      g4_std::string::append_str(v7, (char *)self + 16);
      curl_easy_setopt(a2, 10002, v7[0]);
      v5 = (void *)(*(uint32_t *)v7 - 12);
      if ( (uint32_t *)(*(uint32_t *)v7 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v7 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v5);
      }
    }
    else
    {
      curl_easy_setopt(a2, 10002, *((uint32_t *)self + 2));
    }
    if ( *((uint32_t *)self + 3) != 0 )
      curl_easy_setopt(a2, 3, *((uint32_t *)self + 3));
    curl_easy_setopt(a2, 10036, 0);
    switch ( *((uint32_t *)self + 5) )
    {
      case 1:
        curl_easy_setopt(a2, 80, 1);
        break;
      case 2:
        curl_easy_setopt(a2, 47, 1);
        goto LABEL_18;
      case 3:
        curl_easy_setopt(a2, 44, 1);
        break;
      case 4:
        curl_easy_setopt(a2, 10036, (uint8_t)(uintptr_t)&aDelete_0 /* "DELETE" */[-34316276] + (uint8_t)(uintptr_t)(dword_20B9FF4));
        break;
      case 5:
        curl_easy_setopt(a2, 10036, (uint8_t)(uintptr_t)&aPut_1 /* "PUT" */[-34316276] + (uint8_t)(uintptr_t)(dword_20B9FF4));
LABEL_18:
        curl_easy_setopt(a2, 60, *(uint32_t *)(*((uint32_t *)self + 4) - 12));
        curl_easy_setopt(a2, 10015, *((uint32_t *)self + 4));
        break;
      default:
        break;
    }
    v6 = 1;
    v4 = **((uint32_t **)self + 7);
    if ( v4 != 0 )
      curl_easy_setopt(a2, 10023, v4);
  }
  glwebtools::Mutex::Unlock((glwebtools::UrlRequestCore::Self *)((char *)self + 32));
  return v6;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::UrlRequestCore::GetCreationSettings  (binary VA: 0x13f4ee0)
// Original: glwebtools::UrlRequestCore::GetCreationSettings
// ----------------------------------------------------------------------------
int glwebtools::UrlRequestCore::GetCreationSettings(glwebtools::UrlRequestCore::Self *self, glwebtools::UrlRequest::CreationSettings *a2)
{
  g4_std::string::assign_str(a2, (char *)self + 44);
  *((uint32_t *)a2 + 1) = *((uint32_t *)self + 12);
  return 0;
}


