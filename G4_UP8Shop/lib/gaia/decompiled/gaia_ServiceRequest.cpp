#include "Core/Utils/DecompTypes.h"
#include "gaia_ServiceRequest.h"

// ----------------------------------------------------------------------------
// Function: gaia::ServiceRequest::Grab  (binary VA: 0x14d34c0)
// Original: gaia::ServiceRequest::Grab
// ----------------------------------------------------------------------------
int gaia::ServiceRequest::Grab(gaia::ServiceRequest::Self *self)
{
  glwebtools::Mutex::Lock((gaia::ServiceRequest::Self *)((char *)self + 116));
  ++*((uint32_t *)self + 28);
  return (int)(uintptr_t)(glwebtools::Mutex::Unlock((gaia::ServiceRequest::Self *)((char *)self + 116)));
}

// ----------------------------------------------------------------------------
// Function: gaia::ServiceRequest::GetStringMethodType  (binary VA: 0x14d3510)
// Original: gaia::ServiceRequest::GetStringMethodType
// ----------------------------------------------------------------------------
gaia::ServiceRequest::Self * gaia::ServiceRequest::GetStringMethodType(gaia::ServiceRequest::Self *self, int a2)
{
  int v2;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (11u + sizeof(_g4_t_v4)) > _g4_s0 ? (11u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 11u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  v2 = *(uint32_t *)(a2 + 16);
  if ( v2 == 1 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(self), "POST", (int)(uintptr_t)(&v5));
    return self;
  }
  if ( v2 <= 1 )
  {
    if ( v2 == 0 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(self), (char *)&off_1B6AF81, (int)(uintptr_t)(&v4));
      return self;
    }
  }
  else
  {
    if ( v2 == 2 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(self), "DELETE", (int)(uintptr_t)(&v5) + 1);
      return self;
    }
    if ( v2 == 3 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(self), "HEAD", (int)(uintptr_t)(&v5) + 2);
      return self;
    }
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(self), "UNRECOGNIZED method", (int)(uintptr_t)(&v5) + 3);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::ServiceRequest::IsCanceled  (binary VA: 0x14d3600)
// Original: gaia::ServiceRequest::IsCanceled
// ----------------------------------------------------------------------------
int gaia::ServiceRequest::IsCanceled(gaia::GaiaRequest::Self **self)
{
  int result;

  result = 0;
  if ( *(self + 31) != nullptr )
    return gaia::GaiaRequest::IsCanceled(*(self + 31));
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::ServiceRequest::GetID  (binary VA: 0x14d3630)
// Original: gaia::ServiceRequest::GetID
// ----------------------------------------------------------------------------
int64_t gaia::ServiceRequest::GetID(gaia::ServiceRequest::Self *self)
{
  if ( *((uint32_t *)self + 31) != 0 )
    return gaia::GaiaRequest::GetID((gaia::GaiaRequest::Self *)*((uint32_t *)self + 31));
  else
    return -1;
}

// ----------------------------------------------------------------------------
// Function: gaia::ServiceRequest::IsRawResponseCachingEnable  (binary VA: 0x14d3670)
// Original: gaia::ServiceRequest::IsRawResponseCachingEnable
// ----------------------------------------------------------------------------
int gaia::ServiceRequest::IsRawResponseCachingEnable(gaia::ServiceRequest::Self *self)
{
  int v1;
  uint32_t *v2;
  glwebtools::Mutex::Self *v3;

  v1 = 0;
  v2 = *((uint32_t **)self + 31);
  if ( v2 != nullptr )
  {
    v3 = (glwebtools::Mutex::Self *)v2[2];
    glwebtools::Mutex::Lock(v3);
    v1 = *(uint8_t *)(*v2 + 4);
    glwebtools::Mutex::Unlock(v3);
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gaia::ServiceRequest::SetRawResponse  (binary VA: 0x14d36d0)
// Original: gaia::ServiceRequest::SetRawResponse
// ----------------------------------------------------------------------------
int gaia::ServiceRequest::SetRawResponse(int a1, int a2)
{
  int result;
  uint32_t *v3;
  glwebtools::Mutex::Self *v4;

  result = a1;
  v3 = *(uint32_t **)(a1 + 124);
  if ( v3 != nullptr )
  {
    v4 = (glwebtools::Mutex::Self *)v3[2];
    glwebtools::Mutex::Lock(v4);
    if ( *(uint8_t *)(*v3 + 4) != 0 )
      g4_std::string::assign_str(*v3, a2);
    return glwebtools::Mutex::Unlock(v4);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::ServiceRequest::GetFullUrl  (binary VA: 0x14da1e0)
// Original: gaia::ServiceRequest::GetFullUrl
// ----------------------------------------------------------------------------
int gaia::ServiceRequest::GetFullUrl(int a1, int a2, int a3)
{
  uint8_t v4[16];

  if ( g4_std::string::compare(a2 + 36, (char *)&unk_1B15112) != 0 )
  {
    g4_std::string::construct_copy(a1, a2 + 36);
  }
  else
  {
    sub_134F3A0((int)(uintptr_t)(v4), a2 + 40, a3);
    sub_134F3A0(a1, (int)(uintptr_t)(v4), a2 + 44);
    g4_std::string::Destroy(v4);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: gaia::ServiceRequest::Destroy  (binary VA: 0x14dbc70)
// Original: gaia::ServiceRequest::~ServiceRequest
// ----------------------------------------------------------------------------
void gaia::ServiceRequest::Destroy(gaia::ServiceRequest::Self *self)
{
  void *v1;
  gaia::GaiaRequest::Self *v2;
  int v3;

  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
    (int)(uintptr_t)(self) + 60,
    *((void **)self + 17));
  *((uint32_t *)self + 18) = (uint32_t)(uintptr_t)((char *)self + 64);
  *((uint32_t *)self + 19) = (uint32_t)(uintptr_t)((char *)self + 64);
  v1 = *((void **)self + 23);
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 20) = 0;
  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
    (int)(uintptr_t)(self) + 84,
    v1);
  v2 = *((gaia::GaiaRequest::Self **)self + 31);
  *((uint32_t *)self + 24) = (uint32_t)(uintptr_t)((char *)self + 88);
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 25) = (uint32_t)(uintptr_t)((char *)self + 88);
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  if ( v2 != nullptr )
  {
    gaia::GaiaRequest::Destroy(v2);
    opDelete(v2);
    *((uint32_t *)self + 31) = 0;
  }
  g4_std::string::Destroy((char *)self + 132);
  glwebtools::Mutex::Destroy((gaia::ServiceRequest::Self *)((char *)self + 116));
  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
    (int)(uintptr_t)(self) + 84,
    *((void **)self + 23));
  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
    (int)(uintptr_t)(self) + 60,
    *((void **)self + 17));
  g4_std::string::Destroy((char *)self + 56);
  g4_std::string::Destroy((char *)self + 52);
  v3 = *((uint32_t *)self + 12);
  if ( (uint32_t *)(v3 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v3 - 12));
  }
  g4_std::string::Destroy((char *)self + 44);
  g4_std::string::Destroy((char *)self + 40);
  g4_std::string::Destroy((char *)self + 36);
  gaia::Condition::Destroy((pthread_mutex_t *)((char *)self + 4));
}

// ----------------------------------------------------------------------------
// Function: gaia::ServiceRequest::Drop  (binary VA: 0x14dbdc0)
// Original: gaia::ServiceRequest::Drop
// ----------------------------------------------------------------------------
void gaia::ServiceRequest::Drop(gaia::ServiceRequest::Self *self)
{
  int v1;

  glwebtools::Mutex::Lock((gaia::ServiceRequest::Self *)((char *)self + 116));
  v1 = *((uint32_t *)self + 28) - 1;
  *((uint32_t *)self + 28) = v1;
  glwebtools::Mutex::Unlock((gaia::ServiceRequest::Self *)((char *)self + 116));
  if ( v1 <= 0 )
  {
    gaia::ServiceRequest::Destroy(self);
    opDelete(self);
  }
}

// ----------------------------------------------------------------------------
// Function: gaia::ServiceRequest::Construct  (binary VA: 0x14df710)
// Original: gaia::ServiceRequest::ServiceRequest
// ----------------------------------------------------------------------------
gaia::ServiceRequest::Self * gaia::ServiceRequest::Construct(gaia::ServiceRequest::Self *self, glwebtools::Mutex::Self **a2)
{
  gaia::GaiaRequest::Self *v2;
  clock_t v4;
  typedef uint8_t _g4_t_v5[4];
  typedef char _g4_t_s[1052];
  enum : size_t {
    _g4_s0 = 1136u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_s)) > _g4_s1 ? (16u + sizeof(_g4_t_s)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 16u);

  *(uint32_t *)self = 0;
  gaia::Condition::Condition((pthread_mutex_t *)((char *)self + 4));
  *((uint8_t *)self + 12) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = -1;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 18) = (uint32_t)(uintptr_t)((char *)self + 64);
  *((uint32_t *)self + 19) = (uint32_t)(uintptr_t)((char *)self + 64);
  *((uint32_t *)self + 10) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 11) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 24) = (uint32_t)(uintptr_t)((char *)self + 88);
  *((uint32_t *)self + 25) = (uint32_t)(uintptr_t)((char *)self + 88);
  *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 13) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 14) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 26) = 0;
  *((uint8_t *)self + 108) = 1;
  *((uint8_t *)self + 109) = 0;
  *((uint8_t *)self + 110) = 0;
  *((uint32_t *)self + 28) = 1;
  glwebtools::Mutex::Construct((gaia::ServiceRequest::Self *)((char *)self + 116));
  *((uint32_t *)self + 31) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 32) = 0;
  *((uint32_t *)self + 33) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 34) = 0;
  *((uint32_t *)self + 35) = 0;
  *((uint32_t *)self + 36) = 0;
  *((uint32_t *)self + 37) = 0;
  if ( a2 != nullptr )
  {
    v2 = (gaia::GaiaRequest::Self *)opNew(0x44u);
    gaia::GaiaRequest::Construct(v2, a2);
    *((uint32_t *)self + 31) = (uint32_t)(uintptr_t)(v2);
    gaia::GaiaRequest::GetLogRequestID((gaia::GaiaRequest::Self *)v5, (int)(uintptr_t)(v2));
    g4_std::string::assign_str((char *)self + 132, v5);
    return (g4_std::string::Destroy(v5), (gaia::ServiceRequest::Self *)0);
  }
  else
  {
    v4 = clock();
    sprintf(s, "%p_%d", self, v4);
    return (gaia::ServiceRequest::Self *)g4_std_compat::string_assign((int)(uintptr_t)(self) + 132, s, strlen(s));
  }
}


