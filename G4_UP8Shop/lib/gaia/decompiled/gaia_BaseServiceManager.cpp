#include "Core/Utils/DecompTypes.h"
#include "gaia_BaseServiceManager.h"

// ----------------------------------------------------------------------------
// Function: gaia::BaseServiceManager::setServerDate  (binary VA: 0x14a9f00)
// Original: gaia::BaseServiceManager::setServerDate
// ----------------------------------------------------------------------------
void gaia::BaseServiceManager::setServerDate()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gaia::BaseServiceManager::setFinalServicesUrls  (binary VA: 0x14a9f10)
// Original: gaia::BaseServiceManager::setFinalServicesUrls
// ----------------------------------------------------------------------------
void gaia::BaseServiceManager::setFinalServicesUrls()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gaia::BaseServiceManager::ProcessServerSideEvent  (binary VA: 0x14a9f20)
// Original: gaia::BaseServiceManager::ProcessServerSideEvent
// ----------------------------------------------------------------------------
void gaia::BaseServiceManager::ProcessServerSideEvent()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gaia::BaseServiceManager::getServerDate  (binary VA: 0x14a9f40)
// Original: gaia::BaseServiceManager::getServerDate
// ----------------------------------------------------------------------------
gaia::BaseServiceManager::Self * gaia::BaseServiceManager::getServerDate(gaia::BaseServiceManager::Self *self)
{
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(self), (char *)&unk_1B15112, (int)(uintptr_t)(&v2));
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::BaseServiceManager::GetState  (binary VA: 0x14a9f90)
// Original: gaia::BaseServiceManager::GetState
// ----------------------------------------------------------------------------
int gaia::BaseServiceManager::GetState(gaia::BaseServiceManager::Self *self, glwebtools::UrlConnection::Self *a2)
{
  int v2;

  v2 = 3;
  if ( (uint8_t)glwebtools::UrlConnection::IsHandleValid(a2) != 0
    && (uint8_t)glwebtools::UrlConnection::IsError(a2) == 0 )
  {
    return 2 - ((uint8_t)glwebtools::UrlConnection::IsRunning(a2) != 0);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gaia::BaseServiceManager::StartRequest  (binary VA: 0x14aa0a0)
// Original: gaia::BaseServiceManager::StartRequest
// ----------------------------------------------------------------------------
int gaia::BaseServiceManager::StartRequest(glwebtools::GlWebToolsCore::Self ***self, glwebtools::UrlConnection::Self *a2, gaia::ServiceRequest::Self *a3)
{
  int v3;
  int v5;
  const char **i;
  typedef char *_g4_t_v7;
  typedef uint8_t _g4_t_v8[4];
  typedef uint8_t _g4_t_v9[8];
  typedef int _g4_t_v10;
  typedef char _g4_t_v11;
  typedef uint8_t _g4_t_v12[16];
  typedef uint8_t _g4_t_v13[4];
  typedef uint8_t _g4_t_v14[8];
  typedef uint8_t _g4_t_v15[20];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v9)) > _g4_s2 ? (20u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v10)) > _g4_s3 ? (28u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v11)) > _g4_s4 ? (32u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v12)) > _g4_s5 ? (44u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v13)) > _g4_s6 ? (60u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v14)) > _g4_s7 ? (64u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v15)) > _g4_s8 ? (72u + sizeof(_g4_t_v15)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 44u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 60u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 64u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 72u);

  if ( (uint8_t)glwebtools::UrlConnection::IsHandleValid(a2) != 0 && glwebtools::UrlConnection::IsReadyToRun(a2) )
  {
    v3 = 0;
    if ( (uint8_t)glwebtools::UrlConnection::IsHandleValid(a2) == 0 )
      return v3;
  }
  else
  {
    glwebtools::UrlConnection::CreationSettings::Construct((glwebtools::UrlConnection::CreationSettings::Self *)&v10);
    v11 = *((uint8_t *)a3 + 108);
    v14[4] = *((uint8_t *)a3 + 109);
    glwebtools::GlWebTools::CreateUrlConnection((glwebtools::UrlConnection::Self *)v9, *(self + 30), &v10);
    glwebtools::UrlConnection::opAssign(a2, (const glwebtools::UrlConnection::Self *)v9);
    v3 = 0;
    glwebtools::UrlConnection::Destroy((glwebtools::UrlConnection::Self *)v9);
    g4_std::string::Destroy(v15);
    g4_std::string::Destroy(v14);
    g4_std::string::Destroy(v13);
    g4_std::string::Destroy(v12);
    if ( (uint8_t)glwebtools::UrlConnection::IsHandleValid(a2) == 0 )
      return v3;
  }
  if ( glwebtools::UrlConnection::IsReadyToRun(a2) )
  {
    glwebtools::GlWebTools::CreateUrlRequest((glwebtools::GlWebTools::Self *)&v10, *(self + 30));
    if ( (uint8_t)(uintptr_t)glwebtools::UrlRequest::IsHandleValid((glwebtools::UrlRequest::Self *)&v10) != 0 )
    {
      v5 = *((uint32_t *)a3 + 4);
      if ( v5 == 1 )
      {
        glwebtools::UrlRequest::SetMethod((int)(uintptr_t)(&v10), 2);
      }
      else if ( v5 <= 1 )
      {
        if ( v5 == 0 )
          glwebtools::UrlRequest::SetMethod((int)(uintptr_t)(&v10), 1);
      }
      else if ( v5 == 2 )
      {
        glwebtools::UrlRequest::SetMethod((int)(uintptr_t)(&v10), 4);
      }
      else if ( v5 == 3 )
      {
        glwebtools::UrlRequest::SetMethod((int)(uintptr_t)(&v10), 3);
      }
      if ( *((uint32_t *)a3 + 20) != 0 )
      {
        for ( i = *((const char ***)a3 + 18); (const char **)((char *)a3 + 64) != i; i = (const char **)sub_1904890(i) )
          glwebtools::UrlRequest::AddHeaders((glwebtools::UrlRequest::Self *)&v10, i + 4, i + 5);
      }
      g4_std::string::construct_copy(v8, self + 13);
      gaia::ServiceRequest::GetFullUrl(&v7);
      glwebtools::UrlRequest::SetUrl((glwebtools::UrlRequest::Self *)&v10, v7, 0);
      g4_std::string::Destroy(&v7);
      g4_std::string::Destroy(v8);
      if ( *(uint32_t *)(*((uint32_t *)a3 + 12) - 12) != 0 )
        glwebtools::UrlRequest::SetData((int)(uintptr_t)(&v10), (int)(uintptr_t)(a3) + 48);
      glwebtools::UrlConnection::StartRequest(a2, (glwebtools::UrlRequest::Self *)&v10);
      v3 = 1;
      *(self + 14) = (glwebtools::GlWebToolsCore::Self **)((char *)*(self + 14) + 1);
      glwebtools::UrlRequest::Release((glwebtools::UrlRequest::Self *)&v10);
      *(uint32_t *)a3 = 1;
    }
    glwebtools::UrlRequest::Destroy((glwebtools::UrlRequest::Self *)&v10);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gaia::BaseServiceManager::Destroy  (binary VA: 0x14aa470)
// Original: gaia::BaseServiceManager::~BaseServiceManager
// ----------------------------------------------------------------------------
void gaia::BaseServiceManager::Destroy(gaia::BaseServiceManager::Self *self)
{
  int v1;
  int v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int *i;
  int v8;
  int *v9;
  int v10;
  void (***v11)(uint32_t);
  void (***v12)(uint32_t);
  int v13;
  int v14;
  int v15;
  void *v16;
  void **v17;
  unsigned int v18;
  void *v19;

  v1 = *((uint32_t *)self + 34);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095BA8);
  if ( v1 > 0 )
  {
    v2 = 0;
    do
    {
      v3 = (int *)(*((uint32_t *)self + 37) + 4 * v2);
      v4 = *v3;
      if ( *v3 != 0 )
      {
        *v3 = 0;
        gaia::Condition::Acquire((pthread_mutex_t *)(v4 + 4));
        g4_std_compat::string_assign(v4 + 52, "606", 3u);
        *(uint32_t *)(v4 + 28) = 606;
        *(uint32_t *)v4 = 2;
        gaia::Condition::Set((gaia::Condition::Self *)(v4 + 4));
        gaia::Condition::Release((pthread_mutex_t *)(v4 + 4));
        gaia::ServiceRequest::Drop((gaia::ServiceRequest::Self *)v4);
      }
      v5 = 8 * v2;
      if ( (uint8_t)glwebtools::UrlConnection::IsHandleValid((glwebtools::UrlConnection::Self *)(8 * v2
                                                                                                 + *((uint32_t *)self + 36))) != 0 )
        glwebtools::UrlConnection::CancelRequest((glwebtools::UrlConnection::Self *)(v5 + *((uint32_t *)self + 36)));
      ++v2;
      glwebtools::UrlConnection::Release((glwebtools::UrlConnection::Self *)(*((uint32_t *)self + 36) + v5));
    }
    while ( *((uint32_t *)self + 34) > v2 );
  }
  v6 = *((uint32_t *)self + 7);
  for ( i = *((int **)self + 5);
        ((v6 - (int)(uintptr_t)(i)) >> 2)
      + ((((*((uint32_t *)self + 12) - *((uint32_t *)self + 8)) >> 2) - 1) << 7)
      + ((*((uint32_t *)self + 9) - *((uint32_t *)self + 10)) >> 2) != 0;
        i = *((int **)self + 5) )
  {
    v8 = *i;
    if ( i == (int *)(v6 - 4) )
    {
      opDelete(*((void **)self + 6));
      v9 = (int *)(*((uint32_t *)self + 8) + 4);
      *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(v9);
      v10 = *v9;
      *((uint32_t *)self + 6) = *v9;
      *((uint32_t *)self + 5) = v10;
      *((uint32_t *)self + 7) = v10 + 512;
    }
    else
    {
      *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(i + 1);
    }
    gaia::Condition::Acquire((pthread_mutex_t *)(v8 + 4));
    g4_std_compat::string_assign(v8 + 52, "606", 3u);
    *(uint32_t *)(v8 + 28) = 606;
    *(uint32_t *)v8 = 2;
    gaia::Condition::Set((gaia::Condition::Self *)(v8 + 4));
    gaia::Condition::Release((pthread_mutex_t *)(v8 + 4));
    gaia::ServiceRequest::Drop((gaia::ServiceRequest::Self *)v8);
    v6 = *((uint32_t *)self + 7);
  }
  v11 = *((void (****)(uint32_t))self + 36);
  if ( v11 != nullptr )
  {
    if ( v11 != &v11[2 * (uint32_t)(uintptr_t)(*(v11 - 1))] )
    {
      v12 = &v11[2 * (uint32_t)(uintptr_t)(*(v11 - 1))];
      do
      {
        v12 -= 2;
        (**v12)((uint32_t)(uintptr_t)(v12));
        v11 = *((void (****)(uint32_t))self + 36);
      }
      while ( v11 != v12 );
    }
    opDeleteArray(v11 - 1);
  }
  if ( *((uint32_t *)self + 37) != 0 )
    opDeleteArray(*((void **)self + 37));
  v13 = *((uint32_t *)self + 38);
  if ( (uint32_t *)(v13 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v13 - 12));
  }
  v14 = *((uint32_t *)self + 33);
  if ( (uint32_t *)(v14 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v14 - 12));
  }
  glwebtools::Mutex::Destroy((gaia::BaseServiceManager::Self *)((char *)self + 124));
  g4_std::string::Destroy((char *)self + 112);
  g4_std::string::Destroy((char *)self + 104);
  g4_std::string::Destroy((char *)self + 100);
  g4_std::string::Destroy((char *)self + 84);
  v15 = *((uint32_t *)self + 13);
  if ( (uint32_t *)(v15 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v15 - 12));
  }
  v16 = *((void **)self + 3);
  if ( v16 != nullptr )
  {
    v17 = *((void ***)self + 8);
    v18 = *((uint32_t *)self + 12) + 4;
    if ( v18 > (unsigned int)(uintptr_t)(v17) )
    {
      do
      {
        v19 = *v17++;
        opDelete(v19);
      }
      while ( v18 > (unsigned int)(uintptr_t)(v17) );
      v16 = *((void **)self + 3);
    }
    opDelete(v16);
  }
}

// ----------------------------------------------------------------------------
// Function: gaia::BaseServiceManager::Destroy_ea14aa9a0  (binary VA: 0x14aa9a0)
// Original: gaia::BaseServiceManager::~BaseServiceManager
// ----------------------------------------------------------------------------
void gaia::BaseServiceManager::Destroy_ea14aa9a0(gaia::BaseServiceManager::Self *self)
{
  gaia::BaseServiceManager::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gaia::BaseServiceManager::GetCredentialString  (binary VA: 0x14aae70)
// Original: gaia::BaseServiceManager::GetCredentialString
// ----------------------------------------------------------------------------
int gaia::BaseServiceManager::GetCredentialString(int a1, uint32_t *a2)
{
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  if ( *a2 == 19 )
    g4_std::string::construct_from_cstr(a1, "android", (int)(uintptr_t)(&v3));
  else
    g4_std::string::construct_from_cstr(a1, off_2037D80[*a2], (int)(uintptr_t)(&v3) + 1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: gaia::BaseServiceManager::GetCredentialFromString  (binary VA: 0x14aaef0)
// Original: gaia::BaseServiceManager::GetCredentialFromString
// ----------------------------------------------------------------------------
int gaia::BaseServiceManager::GetCredentialFromString(int a1)
{
  int v1;

  v1 = 0;
  while ( g4_std::string::compare(a1, off_2037D80[v1]) != 0 )
  {
    if ( ++v1 == 20 )
      return 19;
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gaia::BaseServiceManager::CancelRequest  (binary VA: 0x14aaf50)
// Original: gaia::BaseServiceManager::CancelRequest
// ----------------------------------------------------------------------------
int gaia::BaseServiceManager::CancelRequest(int a1, unsigned int a2)
{
  int v3;
  int v4;
  int *i;
  int v6;
  int *v7;
  int v8;

  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(a1 + 124));
  if ( a2 == 1 )
  {
    for ( i = *(int **)(a1 + 20); *(int **)(a1 + 36) != i; i = *(int **)(a1 + 20) )
    {
      v6 = *i;
      if ( i == (int *)(*(uint32_t *)(a1 + 28) - 4) )
      {
        opDelete(*(void **)(a1 + 24));
        v7 = (int *)(*(uint32_t *)(a1 + 32) + 4);
        *(uint32_t *)(a1 + 32) = (uint32_t)(uintptr_t)(v7);
        v8 = *v7;
        *(uint32_t *)(a1 + 24) = *v7;
        *(uint32_t *)(a1 + 20) = v8;
        *(uint32_t *)(a1 + 28) = v8 + 512;
      }
      else
      {
        *(uint32_t *)(a1 + 20) = (uint32_t)(uintptr_t)(i + 1);
      }
      gaia::Condition::Acquire((pthread_mutex_t *)(v6 + 4));
      g4_std_compat::string_assign(v6 + 52, "606", 3u);
      *(uint32_t *)(v6 + 28) = 606;
      *(uint32_t *)v6 = 2;
      gaia::Condition::Set((gaia::Condition::Self *)(v6 + 4));
      gaia::Condition::Release((pthread_mutex_t *)(v6 + 4));
    }
  }
  else if ( a2 > 1 )
  {
    goto LABEL_3;
  }
  if ( *(int *)(a1 + 136) > 0 )
  {
    v3 = 0;
    do
    {
      v4 = *(uint32_t *)(*(uint32_t *)(a1 + 148) + 4 * v3);
      if ( v4 != 0 )
      {
        gaia::Condition::Acquire((pthread_mutex_t *)(v4 + 4));
        *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 148) + 4 * v3) + 28) = 606;
        gaia::Condition::Release((pthread_mutex_t *)(*(uint32_t *)(*(uint32_t *)(a1 + 148) + 4 * v3) + 4));
        glwebtools::UrlConnection::CancelRequest((glwebtools::UrlConnection::Self *)(*(uint32_t *)(a1 + 144) + 8 * v3));
      }
      ++v3;
    }
    while ( *(uint32_t *)(a1 + 136) > v3 );
  }
LABEL_3:
  glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)(a1 + 124));
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gaia::BaseServiceManager::UpdateRunningRequests  (binary VA: 0x14ab0c0)
// Original: gaia::BaseServiceManager::UpdateRunningRequests
// ----------------------------------------------------------------------------
gaia::ServiceRequest::Self * gaia::BaseServiceManager::UpdateRunningRequests(gaia::BaseServiceManager::Self *self)
{
  gaia::ServiceRequest::Self *result;
  int UnixTimeStampInMillisec;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;

  result = *((gaia::ServiceRequest::Self **)self + 34);
  if ( (int)(uintptr_t)(result) > 0 )
  {
    v8 = 0;
    v7 = 0;
    do
    {
      result = *(gaia::ServiceRequest::Self **)(*((uint32_t *)self + 37) + 4 * v7);
      if ( result != nullptr )
      {
        if ( (uint8_t)gaia::ServiceRequest::IsCanceled(result) != 0 )
          glwebtools::UrlConnection::CancelRequest((glwebtools::UrlConnection::Self *)(*((uint32_t *)self + 36) + v8));
        if ( G4_VCALL<int>(self, 8, *((uint32_t *)self + 36) + v8) == 2
          || G4_VCALL<int>(self, 8, *((uint32_t *)self + 36) + v8) == 3 )
        {
          if ( *(uint8_t *)(*(uint32_t *)(*((uint32_t *)self + 37) + 4 * v7) + 109) != 0
            && (*(int (**)(gaia::BaseServiceManager::Self *, int))(*(uint32_t *)self + 8))(
                 self,
                 *((uint32_t *)self + 36) + v8) == 3 )
          {
            G4_VCALL<void>(self, 40, *((uint32_t *)self + 36) + v8);
          }
          (**(void (***)(void))self)();
          UnixTimeStampInMillisec = gaia::utils::GetUnixTimeStampInMillisec(self);
          v4 = v3;
          v5 = *(uint32_t *)(*((uint32_t *)self + 37) + 4 * v7);
          *(uint32_t *)(v5 + 144) = UnixTimeStampInMillisec;
          *(uint32_t *)(v5 + 148) = v4;
          gaia::ServiceRequest::Drop(*(gaia::ServiceRequest::Self **)(*((uint32_t *)self + 37) + 4 * v7));
          result = *((gaia::ServiceRequest::Self **)self + 37);
          *((uint32_t *)result + v7) = 0;
        }
        else
        {
          result = *(gaia::ServiceRequest::Self **)(*((uint32_t *)self + 37) + 4 * v7);
          if ( *((uint8_t *)result + 109) != 0 )
          {
            result = (gaia::ServiceRequest::Self *)G4_VCALL<int>(self, 8, *((uint32_t *)self + 36) + v8);
            if ( result == (gaia::ServiceRequest::Self *)((char *)&dword_0 + 1) )
            {
              v6 = *(uint32_t *)(*((uint32_t *)self + 37) + 4 * v7);
              if ( *(uint8_t *)(v6 + 110) != 0 )
              {
                result = (gaia::ServiceRequest::Self *)G4_VCALL<int>(self, 40, *((uint32_t *)self + 36) + v8);
              }
              else
              {
                gaia::Condition::Acquire((pthread_mutex_t *)(v6 + 4));
                **(uint32_t **)(*((uint32_t *)self + 37) + 4 * v7) = 2;
                *(uint32_t *)(*(uint32_t *)(*((uint32_t *)self + 37) + 4 * v7) + 28) = 0;
                gaia::Condition::Set((gaia::Condition::Self *)(*(uint32_t *)(*((uint32_t *)self + 37) + 4 * v7) + 4));
                result = (gaia::ServiceRequest::Self *)gaia::Condition::Release((pthread_mutex_t *)(*(uint32_t *)(*((uint32_t *)self + 37) + 4 * v7)
                                                                                            + 4));
              }
            }
          }
        }
      }
      ++v7;
      v8 += 8;
    }
    while ( *((uint32_t *)self + 34) > v7 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::BaseServiceManager::GetNextRequest  (binary VA: 0x14ab340)
// Original: gaia::BaseServiceManager::GetNextRequest
// ----------------------------------------------------------------------------
gaia::ServiceRequest::Self * gaia::BaseServiceManager::GetNextRequest(gaia::BaseServiceManager::Self *self)
{
  gaia::ServiceRequest::Self *v1;
  gaia::ServiceRequest::Self **v2;
  int v3;
  int *v4;
  int v5;

  v1 = nullptr;
  v2 = *((gaia::ServiceRequest::Self ***)self + 5);
  if ( ((*((uint32_t *)self + 7) - (int)(uintptr_t)(v2)) >> 2)
     + ((*((uint32_t *)self + 9) - *((uint32_t *)self + 10)) >> 2)
     + ((((*((uint32_t *)self + 12) - *((uint32_t *)self + 8)) >> 2) - 1) << 7) != 0 )
  {
    while ( 1 )
    {
      v1 = *v2;
      if ( (uint8_t)gaia::ServiceRequest::IsCanceled(*v2) == 0 )
        break;
      v3 = *((uint32_t *)self + 5);
      if ( v3 == *((uint32_t *)self + 7) - 4 )
      {
        opDelete(*((void **)self + 6));
        v4 = (int *)(*((uint32_t *)self + 8) + 4);
        *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(v4);
        v5 = *v4;
        *((uint32_t *)self + 6) = *v4;
        *((uint32_t *)self + 5) = v5;
        *((uint32_t *)self + 7) = v5 + 512;
      }
      else
      {
        *((uint32_t *)self + 5) = v3 + 4;
      }
      gaia::Condition::Acquire((pthread_mutex_t *)((char *)v1 + 4));
      g4_std_compat::string_assign((int)(uintptr_t)(v1) + 52, "606", 3u);
      *((uint32_t *)v1 + 7) = 606;
      *(uint32_t *)v1 = 2;
      gaia::Condition::Set((gaia::ServiceRequest::Self *)((char *)v1 + 4));
      gaia::Condition::Release((pthread_mutex_t *)((char *)v1 + 4));
      gaia::ServiceRequest::Drop(v1);
      v2 = *((gaia::ServiceRequest::Self ***)self + 5);
      if ( ((*((uint32_t *)self + 7) - (int)(uintptr_t)(v2)) >> 2)
         + ((*((uint32_t *)self + 9) - *((uint32_t *)self + 10)) >> 2)
         + ((((*((uint32_t *)self + 12) - *((uint32_t *)self + 8)) >> 2) - 1) << 7) == 0 )
        return nullptr;
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: gaia::BaseServiceManager::StartNewRequests  (binary VA: 0x14ab470)
// Original: gaia::BaseServiceManager::StartNewRequests
// ----------------------------------------------------------------------------
gaia::ServiceRequest::Self * gaia::BaseServiceManager::StartNewRequests(gaia::BaseServiceManager::Self *self)
{
  gaia::ServiceRequest::Self *result;
  int v2;
  int i;
  gaia::ServiceRequest::Self *v4;
  int v5;
  int v6;
  int CreationSettings;
  bool v8;
  char v9;
  int v10;
  int v11;
  int *v12;
  int v13;
  gaia::ServiceRequest::Self **v14;
  typedef bool _g4_t_v15;
  typedef int _g4_t_v16;
  typedef gaia::ServiceRequest::Self *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef glwebtools::UrlConnection::Self *_g4_t_v19;
  typedef char _g4_t_v20;
  typedef uint8_t _g4_t_v21[8];
  typedef uint8_t _g4_t_v22[8];
  typedef int _g4_t_v23;
  typedef uint8_t _g4_t_v24;
  typedef uint8_t _g4_t_v25[16];
  typedef uint8_t _g4_t_v26[4];
  typedef uint8_t _g4_t_v27[4];
  typedef char _g4_t_v28;
  typedef uint8_t _g4_t_v29[36];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v15)) > _g4_s0 ? (12u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v16)) > _g4_s1 ? (16u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v17)) > _g4_s2 ? (16u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v18)) > _g4_s3 ? (20u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v19)) > _g4_s4 ? (24u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (31u + sizeof(_g4_t_v20)) > _g4_s5 ? (31u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v21)) > _g4_s6 ? (44u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v22)) > _g4_s7 ? (52u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v23)) > _g4_s8 ? (60u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v24)) > _g4_s9 ? (64u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v25)) > _g4_s10 ? (76u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (92u + sizeof(_g4_t_v26)) > _g4_s11 ? (92u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v27)) > _g4_s12 ? (96u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v28)) > _g4_s13 ? (100u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (104u + sizeof(_g4_t_v29)) > _g4_s14 ? (104u + sizeof(_g4_t_v29)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 31u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 52u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 64u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 76u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 92u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 96u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 100u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 104u);

  result = *((gaia::ServiceRequest::Self **)self + 5);
  if ( *((gaia::ServiceRequest::Self **)self + 9) != result )
  {
    v2 = *((uint32_t *)self + 34);
    for ( i = 0; v2 > i; v2 = *((uint32_t *)self + 34) )
    {
      if ( *(uint32_t *)(*((uint32_t *)self + 37) + 4 * i) != 0 )
        goto LABEL_4;
      result = gaia::BaseServiceManager::GetNextRequest(self);
      v17 = result;
      if ( result == nullptr )
        return result;
      v18 = 8 * i;
      v19 = (glwebtools::UrlConnection::Self *)(*((uint32_t *)self + 36) + 8 * i);
      glwebtools::UrlConnection::CreationSettings::Construct((glwebtools::UrlConnection::CreationSettings::Self *)&v23);
      CreationSettings = glwebtools::UrlConnection::GetCreationSettings(
                           v19,
                           (glwebtools::UrlConnection::CreationSettings::Self *)&v23);
      v8 = false;
      if ( CreationSettings != -2147483647 )
      {
        v20 = *((uint8_t *)v17 + 109);
        v9 = glwebtools::UrlConnection::SupportServerSideEvent(v19);
        v8 = *((uint8_t *)v17 + 108) == v24 && v20 == v9;
      }
      v15 = v8;
      g4_std::string::Destroy(v29);
      g4_std::string::Destroy(v27);
      g4_std::string::Destroy(v26);
      g4_std::string::Destroy(v25);
      if ( !v15 )
      {
        glwebtools::UrlConnection::Release((glwebtools::UrlConnection::Self *)(*((uint32_t *)self + 36) + v18));
        glwebtools::UrlConnection::CreationSettings::Construct((glwebtools::UrlConnection::CreationSettings::Self *)&v23);
        v24 = *((uint8_t *)v17 + 108);
        v28 = *((uint8_t *)v17 + 109);
        glwebtools::GlWebTools::CreateUrlConnection(
          (glwebtools::UrlConnection::Self *)v21,
          *((glwebtools::GlWebToolsCore::Self ***)self + 30),
          &v23);
        glwebtools::UrlConnection::opAssign(
          (glwebtools::UrlConnection::Self *)(*((uint32_t *)self + 36) + v18),
          (const glwebtools::UrlConnection::Self *)v21);
        glwebtools::UrlConnection::Destroy((glwebtools::UrlConnection::Self *)v21);
        g4_std::string::Destroy(v29);
        g4_std::string::Destroy(v27);
        g4_std::string::Destroy(v26);
        g4_std::string::Destroy(v25);
      }
      if ( (*(uint8_t (**)(void))(*(uint32_t *)self + 4))() == 0 )
      {
LABEL_4:
        result = *((gaia::ServiceRequest::Self **)self + 5);
      }
      else
      {
        *((uint32_t *)v17 + 34) = gaia::utils::GetUnixTimeStampInMillisec(self);
        *((uint32_t *)v17 + 35) = v10;
        *(uint32_t *)(*((uint32_t *)self + 37) + 4 * i) = (uint32_t)(uintptr_t)(v17);
        v11 = *((uint32_t *)self + 5);
        if ( v11 == *((uint32_t *)self + 7) - 4 )
        {
          opDelete(*((void **)self + 6));
          v14 = (gaia::ServiceRequest::Self **)(*((uint32_t *)self + 8) + 4);
          *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(v14);
          result = *v14;
          *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(*v14);
          *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(result);
          *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)((char *)result + 512);
        }
        else
        {
          result = (gaia::ServiceRequest::Self *)(v11 + 4);
          *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(result);
        }
      }
      if ( *((gaia::ServiceRequest::Self **)self + 9) == result )
        return result;
      ++i;
    }
    if ( *((uint32_t *)self + 35) > v2 )
    {
      v16 = v2;
      do
      {
        *((uint32_t *)self + 34) = v16 + 1;
        result = gaia::BaseServiceManager::GetNextRequest(self);
        v4 = result;
        if ( result == nullptr )
          break;
        glwebtools::UrlConnection::CreationSettings::Construct((glwebtools::UrlConnection::CreationSettings::Self *)&v23);
        v24 = *((uint8_t *)v4 + 108);
        v28 = *((uint8_t *)v4 + 109);
        glwebtools::GlWebTools::CreateUrlConnection(
          (glwebtools::UrlConnection::Self *)v22,
          *((glwebtools::GlWebToolsCore::Self ***)self + 30),
          &v23);
        glwebtools::UrlConnection::opAssign(
          (glwebtools::UrlConnection::Self *)(8 * v16 + *((uint32_t *)self + 36)),
          (const glwebtools::UrlConnection::Self *)v22);
        glwebtools::UrlConnection::Destroy((glwebtools::UrlConnection::Self *)v22);
        *(uint32_t *)(*((uint32_t *)self + 37) + 4 * v16) = 0;
        if ( (*(uint8_t (**)(void))(*(uint32_t *)self + 4))() != 0 )
        {
          *((uint32_t *)v4 + 34) = gaia::utils::GetUnixTimeStampInMillisec(self);
          *((uint32_t *)v4 + 35) = v5;
          *(uint32_t *)(*((uint32_t *)self + 37) + 4 * v16) = (uint32_t)(uintptr_t)(v4);
          v6 = *((uint32_t *)self + 5);
          if ( v6 == *((uint32_t *)self + 7) - 4 )
          {
            opDelete(*((void **)self + 6));
            v12 = (int *)(*((uint32_t *)self + 8) + 4);
            *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(v12);
            v13 = *v12;
            *((uint32_t *)self + 6) = *v12;
            *((uint32_t *)self + 5) = v13;
            *((uint32_t *)self + 7) = v13 + 512;
          }
          else
          {
            *((uint32_t *)self + 5) = v6 + 4;
          }
        }
        g4_std::string::Destroy(v29);
        g4_std::string::Destroy(v27);
        g4_std::string::Destroy(v26);
        g4_std::string::Destroy(v25);
        result = *((gaia::ServiceRequest::Self **)self + 5);
        if ( *((gaia::ServiceRequest::Self **)self + 9) == result )
          break;
        v16 = *((uint32_t *)self + 34);
      }
      while ( v16 < *((uint32_t *)self + 35) );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::BaseServiceManager::DeleteUnusedConnections  (binary VA: 0x14ab860)
// Original: gaia::BaseServiceManager::DeleteUnusedConnections
// ----------------------------------------------------------------------------
void gaia::BaseServiceManager::DeleteUnusedConnections(gaia::BaseServiceManager::Self *self)
{
  int v1;
  int v2;
  int v3;
  char v4;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  glwebtools::UrlConnection::Self *v11;
  glwebtools::UrlConnection::Self *v12;

  v1 = *((uint32_t *)self + 34);
  if ( v1 > 0 )
  {
    v2 = *((uint32_t *)self + 37);
    v3 = 0;
    v4 = 0;
    do
    {
      if ( *(uint32_t *)(v2 + 4 * v3++) != 0 )
        v4 = 1;
    }
    while ( v3 != v1 );
    v6 = 0;
    v7 = 0;
    if ( v4 != 0 )
    {
      while ( 1 )
      {
        if ( *(uint32_t *)(v2 + 4 * v6) != 0 )
        {
          glwebtools::UrlConnection::opAssign(
            (glwebtools::UrlConnection::Self *)(*((uint32_t *)self + 36) + 8 * v7),
            (const glwebtools::UrlConnection::Self *)(*((uint32_t *)self + 36) + 8 * v6));
          v8 = *((uint32_t *)self + 37);
          v9 = *(uint32_t *)(v8 + 4 * v6++);
          *(uint32_t *)(v8 + 4 * v7++) = v9;
          if ( *((uint32_t *)self + 34) <= v6 )
            goto LABEL_12;
        }
        else
        {
          v11 = (glwebtools::UrlConnection::Self *)(*((uint32_t *)self + 36) + 8 * v6++);
          glwebtools::UrlConnection::Release(v11);
          if ( *((uint32_t *)self + 34) <= v6 )
          {
LABEL_12:
            *((uint32_t *)self + 34) = v7;
            return;
          }
        }
        v2 = *((uint32_t *)self + 37);
      }
    }
    if ( v3 > 1 )
    {
      v10 = 1;
      do
      {
        v12 = (glwebtools::UrlConnection::Self *)(*((uint32_t *)self + 36) + 8 * v10++);
        glwebtools::UrlConnection::Release(v12);
      }
      while ( *((uint32_t *)self + 34) > v10 );
    }
  }
  *((uint32_t *)self + 34) = 1;
}

// ----------------------------------------------------------------------------
// Function: gaia::BaseServiceManager::appendEncodedParams  (binary VA: 0x14ab970)
// Original: gaia::BaseServiceManager::appendEncodedParams
// ----------------------------------------------------------------------------
uint32_t * gaia::BaseServiceManager::appendEncodedParams(int a1, int a2, uint32_t *a3, char **a4)
{
  uint32_t *result;
  int v5[4];

  result = a3;
  if ( *(uint32_t *)(*a3 - 12) != 0 && *((uint32_t *)*a4 - 3) != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v5) + 1, (char *)&unk_1B15112, (int)(uintptr_t)(v5));
    g4_std::string::append_str(a2, a3);
    glwebtools::Codec::EncodeUrlRFC3986(a4, (int)(uintptr_t)(v5) + 1);
    g4_std::string::append_str(a2, (char *)v5 + 1);
    return (g4_std::string::Destroy((char *)v5 + 1), (uint32_t *)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::BaseServiceManager::ForceRefreshLink  (binary VA: 0x14aba20)
// Original: gaia::BaseServiceManager::ForceRefreshLink
// ----------------------------------------------------------------------------
gaia::BaseServiceManager::Self * gaia::BaseServiceManager::ForceRefreshLink(gaia::BaseServiceManager::Self *self)
{
  *((uint8_t *)self + 64) = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::BaseServiceManager::GetTimeStamp  (binary VA: 0x14aba30)
// Original: gaia::BaseServiceManager::GetTimeStamp
// ----------------------------------------------------------------------------
__time_t gaia::BaseServiceManager::GetTimeStamp()
{
  typedef struct timeval _g4_t_tv;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_tv)) > _g4_s0 ? (8u + sizeof(_g4_t_tv)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_tv &tv = *reinterpret_cast<_g4_t_tv *>(_g4_sf + 8u);

  gettimeofday(&tv, nullptr);
  return tv.tv_sec;
}

// ----------------------------------------------------------------------------
// Function: gaia::BaseServiceManager::ResetUsageCount  (binary VA: 0x14aba60)
// Original: gaia::BaseServiceManager::ResetUsageCount
// ----------------------------------------------------------------------------
__time_t gaia::BaseServiceManager::ResetUsageCount(gaia::BaseServiceManager::Self *self)
{
  __time_t result;

  result = gaia::BaseServiceManager::GetTimeStamp();
  *((uint32_t *)self + 15) = result;
  *((uint32_t *)self + 14) = 0;
  *((uint8_t *)self + 64) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::BaseServiceManager::UpdateServiceUrl  (binary VA: 0x14abaa0)
// Original: gaia::BaseServiceManager::UpdateServiceUrl
// ----------------------------------------------------------------------------
__time_t gaia::BaseServiceManager::UpdateServiceUrl(gaia::BaseServiceManager::Self *a1, int a2)
{
  g4_std::string::assign_str((char *)a1 + 52, a2);
  return gaia::BaseServiceManager::ResetUsageCount(a1);
}

// ----------------------------------------------------------------------------
// Function: gaia::BaseServiceManager::Update  (binary VA: 0x14abe90)
// Original: gaia::BaseServiceManager::Update
// ----------------------------------------------------------------------------
int gaia::BaseServiceManager::Update(gaia::BaseServiceManager::Self *self)
{
  glwebtools::Mutex::Lock((gaia::BaseServiceManager::Self *)((char *)self + 124));
  if ( *((uint32_t *)self + 14) > 0xEu
    || (unsigned int)(gaia::BaseServiceManager::GetTimeStamp() - *((uint32_t *)self + 15)) > 0xF
    && *((uint32_t *)self + 14) != 0 )
  {
    *((uint8_t *)self + 64) = 1;
  }
  gaia::BaseServiceManager::UpdateRunningRequests(self);
  gaia::BaseServiceManager::StartNewRequests(self);
  gaia::BaseServiceManager::DeleteUnusedConnections(self);
  return (int)(uintptr_t)(glwebtools::Mutex::Unlock((gaia::BaseServiceManager::Self *)((char *)self + 124)));
}

// ----------------------------------------------------------------------------
// Function: gaia::BaseServiceManager::SendCompleteRequest  (binary VA: 0x14acf80)
// Original: gaia::BaseServiceManager::SendCompleteRequest
// ----------------------------------------------------------------------------
int gaia::BaseServiceManager::SendCompleteRequest(gaia::BaseServiceManager::Self *self, gaia::ServiceRequest::Self *a2)
{
  glwebtools::Mutex::Self *v2;
  gaia::ServiceRequest::Self *i;
  gaia::ServiceRequest::Self *v4;
  gaia::ServiceRequest::Self *v5;
  int v6;

  v2 = (glwebtools::Mutex::Self *)((gaia::BaseServiceManager::Self *)((char *)self + 124));
  glwebtools::Mutex::Lock((gaia::BaseServiceManager::Self *)((char *)self + 124));
  gaia::ServiceRequest::Grab(a2);
  g4_std::deque_gaia_ServiceRequest_b3f9d1::push_back((gaia::BaseServiceManager::Self *)((char *)self + 12), &a2);
  glwebtools::Mutex::Unlock((gaia::BaseServiceManager::Self *)((char *)self + 124));
  gaia::Condition::Acquire((pthread_mutex_t *)((char *)a2 + 4));
  for ( i = a2; *(uint32_t *)a2 != 2; i = a2 )
    gaia::Condition::Wait((pthread_mutex_t *)((char *)i + 4));
  gaia::Condition::Release((pthread_mutex_t *)((char *)i + 4));
  glwebtools::Mutex::Lock(v2);
  v4 = a2;
  *(uint32_t *)a2 = 4;
  v5 = a2;
  *((uint8_t *)v4 + 110) = 1;
  v6 = *((uint32_t *)v5 + 7);
  gaia::ServiceRequest::Drop(v5);
  glwebtools::Mutex::Unlock(v2);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gaia::BaseServiceManager::SendCompleteRequest  (binary VA: 0x14b3810)
// Original: gaia::BaseServiceManager::SendCompleteRequest
// ----------------------------------------------------------------------------
int gaia::BaseServiceManager::SendCompleteRequest(int a1, gaia::ServiceRequest::Self *a2, int a3)
{
  glwebtools::Mutex::Self *v3;
  gaia::ServiceRequest::Self *i;
  char *s;
  size_t v6;
  int v7;

  v3 = (glwebtools::Mutex::Self *)(a1 + 124);
  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(a1 + 124));
  gaia::ServiceRequest::Grab(a2);
  g4_std::deque_gaia_ServiceRequest_b3f9d1::push_back((std::deque<gaia::ServiceRequest::Self *> *)(a1 + 12), &a2);
  glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)(a1 + 124));
  gaia::Condition::Acquire((pthread_mutex_t *)((char *)a2 + 4));
  for ( i = a2; *(uint32_t *)a2 != 2; i = a2 )
    gaia::Condition::Wait((pthread_mutex_t *)((char *)i + 4));
  gaia::Condition::Release((pthread_mutex_t *)((char *)i + 4));
  glwebtools::Mutex::Lock(v3);
  s = *((char **)a2 + 13);
  *((uint8_t *)a2 + 110) = 1;
  v6 = strlen(s);
  g4_std_compat::string_assign(a3, s, v6);
  *(uint32_t *)a2 = 4;
  v7 = *((uint32_t *)a2 + 7);
  gaia::ServiceRequest::Drop(a2);
  glwebtools::Mutex::Unlock(v3);
  return v7;
}

// ----------------------------------------------------------------------------
// Function: gaia::BaseServiceManager::SendCompleteRequest  (binary VA: 0x14b7b00)
// Original: gaia::BaseServiceManager::SendCompleteRequest
// ----------------------------------------------------------------------------
int gaia::BaseServiceManager::SendCompleteRequest(gaia::BaseServiceManager::Self *self, gaia::ServiceRequest::Self *a2, void **a3, int *a4)
{
  size_t *v4;
  glwebtools::Mutex::Self *v5;
  gaia::ServiceRequest::Self *i;
  gaia::ServiceRequest::Self *v7;
  int v8;
  signed int size;
  void *v10;
  int v11;

  v4 = (size_t *)a4;
  *a3 = nullptr;
  *v4 = 0;
  v5 = (glwebtools::Mutex::Self *)((gaia::BaseServiceManager::Self *)((char *)self + 124));
  glwebtools::Mutex::Lock((gaia::BaseServiceManager::Self *)((char *)self + 124));
  gaia::ServiceRequest::Grab(a2);
  g4_std::deque_gaia_ServiceRequest_b3f9d1::push_back((gaia::BaseServiceManager::Self *)((char *)self + 12), &a2);
  glwebtools::Mutex::Unlock((gaia::BaseServiceManager::Self *)((char *)self + 124));
  gaia::Condition::Acquire((pthread_mutex_t *)((char *)a2 + 4));
  for ( i = a2; *(uint32_t *)a2 != 2; i = a2 )
    gaia::Condition::Wait((pthread_mutex_t *)((char *)i + 4));
  gaia::Condition::Release((pthread_mutex_t *)((char *)i + 4));
  glwebtools::Mutex::Lock(v5);
  v7 = a2;
  v8 = *((uint32_t *)a2 + 13);
  *((uint8_t *)a2 + 110) = 1;
  size = *(uint32_t *)(v8 - 12);
  *v4 = size;
  if ( size > 0 )
  {
    v10 = malloc(size);
    *a3 = v10;
    memcpy(v10, *((const void **)v7 + 13), *v4);
  }
  *(uint32_t *)v7 = 4;
  v11 = *((uint32_t *)a2 + 7);
  gaia::ServiceRequest::Drop(a2);
  glwebtools::Mutex::Unlock(v5);
  return v11;
}

// ----------------------------------------------------------------------------
// Function: gaia::BaseServiceManager::ParseMessages  (binary VA: 0x14ba110)
// Original: gaia::BaseServiceManager::ParseMessages
// ----------------------------------------------------------------------------
int gaia::BaseServiceManager::ParseMessages(char *a1, int a2, Json::ValueIterator::Self **a3, int a4)
{
  Json::ValueIterator::Self **v4;
  unsigned int v5;
  const Json::Value::Self *v6;
  const Json::Value::Self *v7;
  Json::ValueIterator::Self *v8;
  Json::ValueIterator::Self *v9;
  Json::ValueIterator::Self *v10;
  const Json::Value::Self *v11;
  Json::ValueIterator::Self *v12;
  Json::ValueIterator::Self *v13;
  Json::ValueIterator::Self *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  void *v22;
  void **v23;
  unsigned int v24;
  void *v25;
  void *v26;
  void **v27;
  unsigned int v28;
  void *v29;
  Json::Value::Self *v31;
  Json::ValueIterator::Self *v32;
  int v33;
  int v34;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v35;
  typedef Json::Value::Self *_g4_t_v36;
  typedef Json::ValueIterator::Self *_g4_t_v37;
  typedef Json::ValueIterator::Self *_g4_t_v38;
  typedef Json::ValueIterator::Self *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef uint8_t _g4_t_v47[2];
  typedef uint8_t _g4_t_v48[8];
  typedef uint8_t _g4_t_v49[8];
  typedef uint8_t _g4_t_v50[16];
  typedef uint8_t _g4_t_v51[16];
  typedef uint8_t _g4_t_v52[16];
  typedef uint8_t _g4_t_v53[16];
  typedef int _g4_t_v54;
  typedef void *_g4_t_v55[5];
  typedef unsigned int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef void *_g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef unsigned int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef Json::ValueIterator::Self *_g4_t_v64;
  typedef char _g4_t_v65[24];
  typedef char _g4_t_v66[36];
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (0u + sizeof(_g4_t_v35)) > _g4_s0 ? (0u + sizeof(_g4_t_v35)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v36)) > _g4_s1 ? (32u + sizeof(_g4_t_v36)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v37)) > _g4_s2 ? (36u + sizeof(_g4_t_v37)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v38)) > _g4_s3 ? (36u + sizeof(_g4_t_v38)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v39)) > _g4_s4 ? (40u + sizeof(_g4_t_v39)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v40)) > _g4_s5 ? (44u + sizeof(_g4_t_v40)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v41)) > _g4_s6 ? (44u + sizeof(_g4_t_v41)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v42)) > _g4_s7 ? (48u + sizeof(_g4_t_v42)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v43)) > _g4_s8 ? (48u + sizeof(_g4_t_v43)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v44)) > _g4_s9 ? (52u + sizeof(_g4_t_v44)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v45)) > _g4_s10 ? (56u + sizeof(_g4_t_v45)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v46)) > _g4_s11 ? (60u + sizeof(_g4_t_v46)) : _g4_s11,
    _g4_s13 = (74u + sizeof(_g4_t_v47)) > _g4_s12 ? (74u + sizeof(_g4_t_v47)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v48)) > _g4_s13 ? (76u + sizeof(_g4_t_v48)) : _g4_s13,
    _g4_s15 = (84u + sizeof(_g4_t_v49)) > _g4_s14 ? (84u + sizeof(_g4_t_v49)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v50)) > _g4_s15 ? (92u + sizeof(_g4_t_v50)) : _g4_s15,
    _g4_s17 = (108u + sizeof(_g4_t_v51)) > _g4_s16 ? (108u + sizeof(_g4_t_v51)) : _g4_s16,
    _g4_s18 = (124u + sizeof(_g4_t_v52)) > _g4_s17 ? (124u + sizeof(_g4_t_v52)) : _g4_s17,
    _g4_s19 = (140u + sizeof(_g4_t_v53)) > _g4_s18 ? (140u + sizeof(_g4_t_v53)) : _g4_s18,
    _g4_s20 = (156u + sizeof(_g4_t_v54)) > _g4_s19 ? (156u + sizeof(_g4_t_v54)) : _g4_s19,
    _g4_s21 = (160u + sizeof(_g4_t_v55)) > _g4_s20 ? (160u + sizeof(_g4_t_v55)) : _g4_s20,
    _g4_s22 = (180u + sizeof(_g4_t_v56)) > _g4_s21 ? (180u + sizeof(_g4_t_v56)) : _g4_s21,
    _g4_s23 = (196u + sizeof(_g4_t_v57)) > _g4_s22 ? (196u + sizeof(_g4_t_v57)) : _g4_s22,
    _g4_s24 = (200u + sizeof(_g4_t_v58)) > _g4_s23 ? (200u + sizeof(_g4_t_v58)) : _g4_s23,
    _g4_s25 = (208u + sizeof(_g4_t_v59)) > _g4_s24 ? (208u + sizeof(_g4_t_v59)) : _g4_s24,
    _g4_s26 = (216u + sizeof(_g4_t_v60)) > _g4_s25 ? (216u + sizeof(_g4_t_v60)) : _g4_s25,
    _g4_s27 = (220u + sizeof(_g4_t_v61)) > _g4_s26 ? (220u + sizeof(_g4_t_v61)) : _g4_s26,
    _g4_s28 = (224u + sizeof(_g4_t_v62)) > _g4_s27 ? (224u + sizeof(_g4_t_v62)) : _g4_s27,
    _g4_s29 = (228u + sizeof(_g4_t_v63)) > _g4_s28 ? (228u + sizeof(_g4_t_v63)) : _g4_s28,
    _g4_s30 = (236u + sizeof(_g4_t_v64)) > _g4_s29 ? (236u + sizeof(_g4_t_v64)) : _g4_s29,
    _g4_s31 = (240u + sizeof(_g4_t_v65)) > _g4_s30 ? (240u + sizeof(_g4_t_v65)) : _g4_s30,
    _g4_s32 = (264u + sizeof(_g4_t_v66)) > _g4_s31 ? (264u + sizeof(_g4_t_v66)) : _g4_s31
  };
  alignas(16) uint8_t _g4_sf[_g4_s32];
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 0u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 32u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 36u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 36u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 40u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 44u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 44u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 48u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 48u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 52u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 56u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 60u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 74u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 76u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 84u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 92u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 108u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 124u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 140u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 156u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 160u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 180u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 196u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 200u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 208u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 216u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 220u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 224u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 228u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 236u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 240u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 264u);

  v4 = a3;
  if ( a1 == nullptr )
    return -22;
  Json::Features::strictMode((Json::Features::Self *)v47);
  Json::Reader::Construct((Json::Reader::Self *)v55, (const Json::Features::Self *)v47);
  Json::Value::Construct((int)(uintptr_t)(v50), nullptr);
  v44 = -12;
  if ( (uint8_t)Json::Reader::parse((Json::Reader::Self *)v55, a1, &a1[a2], (Json::Value::Self *)v50, true) != 0 )
  {
    if ( (uint8_t)Json::Value::isArray((Json::Value::Self *)v50) != 0 )
    {
      v5 = Json::Value::size((Json::Value::Self *)v50);
      if ( v5 > 0xCCCCCCC )
        sub_1900180("vector::reserve");
      v6 = (const Json::Value::Self *)(*a3);
      if ( v5 > -858993459 * ((a3[2] - *a3) >> 2) )
      {
        v7 = (const Json::Value::Self *)(a3[1]);
        v40 = 0;
        v37 = nullptr;
        v42 = -858993459 * ((v7 - v6) >> 2);
        if ( v5 != 0 )
        {
          v40 = 20 * v5;
          v37 = (Json::ValueIterator::Self *)opNew(20 * v5);
        }
        if ( v6 != v7 )
        {
          v8 = v37;
          do
          {
            if ( v8 != nullptr )
            {
              Json::Value::Construct(v8, v6);
              *((uint32_t *)v8 + 4) = *((uint32_t *)v6 + 4);
            }
            v6 = (const Json::Value::Self *)((char *)v6 + 20);
            v8 = (Json::ValueIterator::Self *)((char *)v8 + 20);
          }
          while ( v7 != v6 );
          v4 = a3;
        }
        v9 = v4[1];
        v10 = *v4;
        if ( v9 != *v4 )
        {
          do
          {
            v35 = (gaia::BaseJSONServiceResponse::Self *)(v10);
            v10 = (Json::ValueIterator::Self *)((char *)v10 + 20);
            gaia::BaseJSONServiceResponse::Destroy(v35);
          }
          while ( v9 != v10 );
          v10 = *v4;
        }
        if ( v10 != nullptr )
          opDelete(v10);
        *v4 = v37;
        v4[1] = (Json::ValueIterator::Self *)((char *)v37 + 20 * v42);
        v4[2] = (Json::ValueIterator::Self *)((char *)v37 + v40);
      }
      Json::Value::begin((Json::Value::Self *)v48, v50);
      while ( 1 )
      {
        Json::Value::end((Json::Value::Self *)v49, (int)(uintptr_t)(v50));
        if ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase::Self *)v48, (const Json::ValueIteratorBase::Self *)v49) != 0 )
          break;
        v11 = (const Json::Value::Self *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase::Self *)v48);
        Json::Value::Construct((Json::Value::Self *)v51, v11);
        gaia::BaseJSONServiceResponse::Construct((Json::Value::Self *)v53, (Json::Value::Self *)v51, a4);
        Json::Value::Destroy((Json::Value::Self *)v51);
        v12 = v4[1];
        if ( v12 == v4[2] )
        {
          g4_std::vector_gaia_BaseJSONServiceResp_48cd2f::M_insert_aux((int)(uintptr_t)(v4), v4[1], (Json::Value::Self *)v53);
        }
        else
        {
          v13 = nullptr;
          if ( v12 != nullptr )
          {
            v36 = (Json::Value::Self *)(v4[1]);
            Json::Value::Construct(v36, (const Json::Value::Self *)v53);
            *((uint32_t *)v36 + 4) = v54;
            v13 = v4[1];
          }
          v4[1] = (Json::ValueIterator::Self *)((char *)v13 + 20);
        }
        gaia::BaseJSONServiceResponse::Destroy((gaia::BaseJSONServiceResponse::Self *)v53);
        Json::ValueIterator::Construct((Json::ValueIterator::Self *)v53, (const Json::ValueIterator::Self *)v48);
        Json::ValueIteratorBase::increment((Json::ValueIteratorBase::Self *)v48);
      }
      v44 = 0;
    }
    else
    {
      Json::Value::Construct((Json::Value::Self *)v52, (const Json::Value::Self *)v50);
      gaia::BaseJSONServiceResponse::Construct((Json::Value::Self *)v53, (Json::Value::Self *)v52, a4);
      Json::Value::Destroy((Json::Value::Self *)v52);
      v31 = (Json::Value::Self *)(a3[1]);
      if ( v31 == (Json::Value::Self *)(uintptr_t)(a3[2]) )
      {
        g4_std::vector_gaia_BaseJSONServiceResp_48cd2f::M_insert_aux((int)(uintptr_t)(a3), v31, (Json::Value::Self *)v53);
      }
      else
      {
        v32 = nullptr;
        if ( v31 != nullptr )
        {
          Json::Value::Construct(v31, (const Json::Value::Self *)v53);
          *((uint32_t *)v31 + 4) = v54;
          v32 = a3[1];
        }
        a3[1] = (Json::ValueIterator::Self *)((char *)v32 + 20);
      }
      gaia::BaseJSONServiceResponse::Destroy((gaia::BaseJSONServiceResponse::Self *)v53);
      v44 = 0;
    }
  }
  Json::Value::Destroy((Json::Value::Self *)v50);
  g4_std::string::Destroy(v66);
  g4_std::string::Destroy(v65);
  v45 = v63;
  v41 = v59;
  v43 = v62;
  v14 = (Json::ValueIterator::Self *)(v61 + 4);
  v38 = v64;
  v46 = v60;
  v39 = (Json::ValueIterator::Self *)v61;
  if ( (unsigned int)(uintptr_t)(v64) > v61 + 4 )
  {
    do
    {
      v15 = *(uint32_t *)v14;
      v16 = *(uint32_t *)v14 + 500;
      do
      {
        v17 = v15 + 12;
        v15 += 20;
        g4_std::string::Destroy(v17);
      }
      while ( v15 != v16 );
      v14 = (Json::ValueIterator::Self *)((char *)v14 + 4);
    }
    while ( v38 > v14 );
  }
  if ( v38 == v39 )
  {
    if ( v43 != v41 )
    {
      v33 = v41;
      do
      {
        v34 = v33 + 12;
        v33 += 20;
        g4_std::string::Destroy(v34);
      }
      while ( v43 != v33 );
    }
  }
  else
  {
    if ( v41 != v46 )
    {
      v18 = v41;
      do
      {
        v19 = v18 + 12;
        v18 += 20;
        g4_std::string::Destroy(v19);
      }
      while ( v46 != v18 );
    }
    if ( v43 != v45 )
    {
      v20 = v45;
      do
      {
        v21 = v20 + 12;
        v20 += 20;
        g4_std::string::Destroy(v21);
      }
      while ( v43 != v20 );
    }
  }
  v22 = v58;
  if ( v58 != nullptr )
  {
    v23 = (void **)v61;
    v24 = (unsigned int)(uintptr_t)(v64) + 4;
    if ( (unsigned int)(uintptr_t)(v64) + 4 > v61 )
    {
      do
      {
        v25 = *v23++;
        opDelete(v25);
      }
      while ( v24 > (unsigned int)(uintptr_t)(v23) );
      v22 = v58;
    }
    opDelete(v22);
  }
  v26 = v55[0];
  if ( v55[0] != nullptr )
  {
    v27 = (void **)v56;
    v28 = v57 + 4;
    if ( v57 + 4 > v56 )
    {
      do
      {
        v29 = *v27++;
        opDelete(v29);
      }
      while ( v28 > (unsigned int)(uintptr_t)(v27) );
      v26 = v55[0];
    }
    opDelete(v26);
  }
  return v44;
}

// ----------------------------------------------------------------------------
// Function: gaia::BaseServiceManager::appendEncodedParams  (binary VA: 0x14ba640)
// Original: gaia::BaseServiceManager::appendEncodedParams
// ----------------------------------------------------------------------------
uint32_t * gaia::BaseServiceManager::appendEncodedParams(int a1, int a2, uint32_t *a3, uint32_t *a4, char a5)
{
  uint32_t *result;
  int v6;
  int *v7;
  typedef char *_g4_t_v8;
  typedef uint8_t *_g4_t_v9;
  typedef int *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef void *_g4_t_v13;
  typedef char *_g4_t_v14;
  typedef char _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int (**_g4_t_v17)(int);
  typedef int _g4_t_v18;
  typedef int (**_g4_t_v19)(int);
  typedef uint32_t _g4_t_v20[3];
  typedef unsigned int _g4_t_v21;
  typedef void *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef uint8_t _g4_t_v25[4];
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint32_t _g4_t_v28[29];
  typedef char _g4_t_v29;
  typedef char _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (4u + sizeof(_g4_t_v8)) > _g4_s0 ? (4u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v9)) > _g4_s1 ? (8u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v10)) > _g4_s2 ? (24u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v11)) > _g4_s3 ? (60u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v12)) > _g4_s4 ? (64u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (68u + sizeof(_g4_t_v13)) > _g4_s5 ? (68u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v14)) > _g4_s6 ? (72u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v15)) > _g4_s7 ? (76u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v16)) > _g4_s8 ? (80u + sizeof(_g4_t_v16)) : _g4_s8,
    _g4_s10 = (84u + sizeof(_g4_t_v17)) > _g4_s9 ? (84u + sizeof(_g4_t_v17)) : _g4_s9,
    _g4_s11 = (88u + sizeof(_g4_t_v18)) > _g4_s10 ? (88u + sizeof(_g4_t_v18)) : _g4_s10,
    _g4_s12 = (92u + sizeof(_g4_t_v19)) > _g4_s11 ? (92u + sizeof(_g4_t_v19)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v20)) > _g4_s12 ? (96u + sizeof(_g4_t_v20)) : _g4_s12,
    _g4_s14 = (108u + sizeof(_g4_t_v21)) > _g4_s13 ? (108u + sizeof(_g4_t_v21)) : _g4_s13,
    _g4_s15 = (112u + sizeof(_g4_t_v22)) > _g4_s14 ? (112u + sizeof(_g4_t_v22)) : _g4_s14,
    _g4_s16 = (116u + sizeof(_g4_t_v23)) > _g4_s15 ? (116u + sizeof(_g4_t_v23)) : _g4_s15,
    _g4_s17 = (120u + sizeof(_g4_t_v24)) > _g4_s16 ? (120u + sizeof(_g4_t_v24)) : _g4_s16,
    _g4_s18 = (124u + sizeof(_g4_t_v25)) > _g4_s17 ? (124u + sizeof(_g4_t_v25)) : _g4_s17,
    _g4_s19 = (128u + sizeof(_g4_t_v26)) > _g4_s18 ? (128u + sizeof(_g4_t_v26)) : _g4_s18,
    _g4_s20 = (132u + sizeof(_g4_t_v27)) > _g4_s19 ? (132u + sizeof(_g4_t_v27)) : _g4_s19,
    _g4_s21 = (136u + sizeof(_g4_t_v28)) > _g4_s20 ? (136u + sizeof(_g4_t_v28)) : _g4_s20,
    _g4_s22 = (252u + sizeof(_g4_t_v29)) > _g4_s21 ? (252u + sizeof(_g4_t_v29)) : _g4_s21,
    _g4_s23 = (253u + sizeof(_g4_t_v30)) > _g4_s22 ? (253u + sizeof(_g4_t_v30)) : _g4_s22,
    _g4_s24 = (256u + sizeof(_g4_t_v31)) > _g4_s23 ? (256u + sizeof(_g4_t_v31)) : _g4_s23,
    _g4_s25 = (260u + sizeof(_g4_t_v32)) > _g4_s24 ? (260u + sizeof(_g4_t_v32)) : _g4_s24,
    _g4_s26 = (264u + sizeof(_g4_t_v33)) > _g4_s25 ? (264u + sizeof(_g4_t_v33)) : _g4_s25,
    _g4_s27 = (268u + sizeof(_g4_t_v34)) > _g4_s26 ? (268u + sizeof(_g4_t_v34)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 60u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 64u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 68u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 72u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 76u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 80u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 84u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 88u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 92u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 96u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 108u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 112u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 116u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 120u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 124u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 128u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 132u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 136u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 252u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 253u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 256u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 260u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 264u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 268u);

  result = a3;
  if ( *(uint32_t *)(*a3 - 12) != 0 && (*a4 != 0 || a5 != 0) )
  {
    g4_std::string::append_str(a2, a3);
    sub_1900810(v28);
    v28[28] = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    v34 = 0;
    v17 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
    v28[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    *(int (***)(int))((char *)&v17 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
    v18 = 0;
    sub_19119D0((char *)&v17 + (uint32_t)(uintptr_t)(*(v17 - 3)), 0);
    v19 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
    *(uint32_t *)((char *)&v20[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
    sub_19119D0((char *)&v20[-1] + (uint32_t)(uintptr_t)(*(v19 - 3)), 0);
    v17 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
    *(int (***)(int))((char *)&v17 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
    v20[1] = 0;
    v20[2] = 0;
    v21 = 0;
    v22 = nullptr;
    v23 = 0;
    v24 = 0;
    v17 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
    v28[0] = (uint32_t)(uintptr_t)(&off_20AB014);
    v19 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
    v20[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
    sub_1903A70(v25);
    v26 = 24;
    v20[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
    v27 = (int)(uintptr_t)(&dword_213B814);
    sub_19119D0(v28, v20);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), (char *)&unk_1B15112, (int)(uintptr_t)(&v11));
    g4_std_compat::string_assign((int)(uintptr_t)(&v27), v13, *((uint32_t *)v13 - 3));
    v6 = 0;
    if ( (v26 & 3) != 0 )
      v6 = *(uint32_t *)(v27 - 12);
    sub_1931CD0(v20, v27, 0, v6);
    g4_std::string::Destroy(&v13);
    sub_192D8B0(&v19, *a4);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), (char *)&unk_1B15112, (int)(uintptr_t)(&v11) + 1);
    v14 = (char *)&dword_213B814;
    if ( v23 != 0 )
    {
      if ( v23 <= v21 )
      {
        v9 = (uint8_t *)v21;
        v8 = (char *)v22;
        v7 = (int *)&v15;
      }
      else
      {
        v9 = (uint8_t *)v23;
        v8 = (char *)v22;
        v7 = &v16;
      }
      v10 = v7;
      sub_11A9950(v7, v8, v9);
      g4_std::string::assign_str(&v14, v10);
      g4_std::string::Destroy(v10);
    }
    else
    {
      g4_std::string::assign_str(&v14, &v27);
    }
    glwebtools::Codec::EncodeUrlRFC3986(&v14, (int)(uintptr_t)(&v12));
    g4_std::string::Destroy(&v14);
    g4_std::string::append_str(a2, &v12);
    g4_std::string::Destroy(&v12);
    v17 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
    v28[0] = (uint32_t)(uintptr_t)(&off_20AB014);
    v19 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
    v20[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
    g4_std::string::Destroy(&v27);
    v20[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
    sub_1902180(v25);
    v17 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
    *(int (***)(int))((char *)&v17 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
    v19 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
    *(uint32_t *)((char *)&v20[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
    v17 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
    *(int (***)(int))((char *)&v17 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
    v18 = 0;
    v28[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    return (uint32_t *)sub_1900B90(v28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::BaseServiceManager::appendEncodedParams_ea14bd4b0  (binary VA: 0x14bd4b0)
// Original: gaia::BaseServiceManager::appendEncodedParams
// ----------------------------------------------------------------------------
uint32_t * gaia::BaseServiceManager::appendEncodedParams_ea14bd4b0(int a1, int a2, uint32_t *a3, uint32_t *a4, char a5)
{
  uint32_t *result;
  int v6;
  int *v7;
  typedef char *_g4_t_v8;
  typedef uint8_t *_g4_t_v9;
  typedef int *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef void *_g4_t_v13;
  typedef char *_g4_t_v14;
  typedef char _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int (**_g4_t_v17)(int);
  typedef int _g4_t_v18;
  typedef int (**_g4_t_v19)(int);
  typedef uint32_t _g4_t_v20[3];
  typedef unsigned int _g4_t_v21;
  typedef void *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef uint8_t _g4_t_v25[4];
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint32_t _g4_t_v28[29];
  typedef char _g4_t_v29;
  typedef char _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (4u + sizeof(_g4_t_v8)) > _g4_s0 ? (4u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v9)) > _g4_s1 ? (8u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v10)) > _g4_s2 ? (24u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v11)) > _g4_s3 ? (60u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v12)) > _g4_s4 ? (64u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (68u + sizeof(_g4_t_v13)) > _g4_s5 ? (68u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v14)) > _g4_s6 ? (72u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v15)) > _g4_s7 ? (76u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v16)) > _g4_s8 ? (80u + sizeof(_g4_t_v16)) : _g4_s8,
    _g4_s10 = (84u + sizeof(_g4_t_v17)) > _g4_s9 ? (84u + sizeof(_g4_t_v17)) : _g4_s9,
    _g4_s11 = (88u + sizeof(_g4_t_v18)) > _g4_s10 ? (88u + sizeof(_g4_t_v18)) : _g4_s10,
    _g4_s12 = (92u + sizeof(_g4_t_v19)) > _g4_s11 ? (92u + sizeof(_g4_t_v19)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v20)) > _g4_s12 ? (96u + sizeof(_g4_t_v20)) : _g4_s12,
    _g4_s14 = (108u + sizeof(_g4_t_v21)) > _g4_s13 ? (108u + sizeof(_g4_t_v21)) : _g4_s13,
    _g4_s15 = (112u + sizeof(_g4_t_v22)) > _g4_s14 ? (112u + sizeof(_g4_t_v22)) : _g4_s14,
    _g4_s16 = (116u + sizeof(_g4_t_v23)) > _g4_s15 ? (116u + sizeof(_g4_t_v23)) : _g4_s15,
    _g4_s17 = (120u + sizeof(_g4_t_v24)) > _g4_s16 ? (120u + sizeof(_g4_t_v24)) : _g4_s16,
    _g4_s18 = (124u + sizeof(_g4_t_v25)) > _g4_s17 ? (124u + sizeof(_g4_t_v25)) : _g4_s17,
    _g4_s19 = (128u + sizeof(_g4_t_v26)) > _g4_s18 ? (128u + sizeof(_g4_t_v26)) : _g4_s18,
    _g4_s20 = (132u + sizeof(_g4_t_v27)) > _g4_s19 ? (132u + sizeof(_g4_t_v27)) : _g4_s19,
    _g4_s21 = (136u + sizeof(_g4_t_v28)) > _g4_s20 ? (136u + sizeof(_g4_t_v28)) : _g4_s20,
    _g4_s22 = (252u + sizeof(_g4_t_v29)) > _g4_s21 ? (252u + sizeof(_g4_t_v29)) : _g4_s21,
    _g4_s23 = (253u + sizeof(_g4_t_v30)) > _g4_s22 ? (253u + sizeof(_g4_t_v30)) : _g4_s22,
    _g4_s24 = (256u + sizeof(_g4_t_v31)) > _g4_s23 ? (256u + sizeof(_g4_t_v31)) : _g4_s23,
    _g4_s25 = (260u + sizeof(_g4_t_v32)) > _g4_s24 ? (260u + sizeof(_g4_t_v32)) : _g4_s24,
    _g4_s26 = (264u + sizeof(_g4_t_v33)) > _g4_s25 ? (264u + sizeof(_g4_t_v33)) : _g4_s25,
    _g4_s27 = (268u + sizeof(_g4_t_v34)) > _g4_s26 ? (268u + sizeof(_g4_t_v34)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 60u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 64u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 68u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 72u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 76u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 80u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 84u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 88u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 92u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 96u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 108u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 112u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 116u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 120u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 124u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 128u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 132u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 136u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 252u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 253u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 256u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 260u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 264u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 268u);

  result = a3;
  if ( *(uint32_t *)(*a3 - 12) != 0 && ((int)*a4 > 0 || a5 != 0 && *a4 == 0) )
  {
    g4_std::string::append_str(a2, a3);
    sub_1900810(v28);
    v28[28] = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    v34 = 0;
    v17 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
    v28[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    *(int (***)(int))((char *)&v17 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
    v18 = 0;
    sub_19119D0((char *)&v17 + (uint32_t)(uintptr_t)(*(v17 - 3)), 0);
    v19 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
    *(uint32_t *)((char *)&v20[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
    sub_19119D0((char *)&v20[-1] + (uint32_t)(uintptr_t)(*(v19 - 3)), 0);
    v17 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
    *(int (***)(int))((char *)&v17 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
    v20[1] = 0;
    v20[2] = 0;
    v21 = 0;
    v22 = nullptr;
    v23 = 0;
    v24 = 0;
    v17 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
    v28[0] = (uint32_t)(uintptr_t)(&off_20AB014);
    v19 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
    v20[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
    sub_1903A70(v25);
    v26 = 24;
    v20[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
    v27 = (int)(uintptr_t)(&dword_213B814);
    sub_19119D0(v28, v20);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), (char *)&unk_1B15112, (int)(uintptr_t)(&v11));
    g4_std_compat::string_assign((int)(uintptr_t)(&v27), v13, *((uint32_t *)v13 - 3));
    v6 = 0;
    if ( (v26 & 3) != 0 )
      v6 = *(uint32_t *)(v27 - 12);
    sub_1931CD0(v20, v27, 0, v6);
    g4_std::string::Destroy(&v13);
    g4_std::ostream::op_shl_int(&v19, *a4);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), (char *)&unk_1B15112, (int)(uintptr_t)(&v11) + 1);
    v14 = (char *)&dword_213B814;
    if ( v23 != 0 )
    {
      if ( v23 <= v21 )
      {
        v9 = (uint8_t *)v21;
        v8 = (char *)v22;
        v7 = (int *)&v15;
      }
      else
      {
        v9 = (uint8_t *)v23;
        v8 = (char *)v22;
        v7 = &v16;
      }
      v10 = v7;
      sub_11A9950(v7, v8, v9);
      g4_std::string::assign_str(&v14, v10);
      g4_std::string::Destroy(v10);
    }
    else
    {
      g4_std::string::assign_str(&v14, &v27);
    }
    glwebtools::Codec::EncodeUrlRFC3986(&v14, (int)(uintptr_t)(&v12));
    g4_std::string::Destroy(&v14);
    g4_std::string::append_str(a2, &v12);
    g4_std::string::Destroy(&v12);
    v17 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
    v28[0] = (uint32_t)(uintptr_t)(&off_20AB014);
    v19 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
    v20[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
    g4_std::string::Destroy(&v27);
    v20[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
    sub_1902180(v25);
    v17 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
    *(int (***)(int))((char *)&v17 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
    v19 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
    *(uint32_t *)((char *)&v20[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
    v17 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
    *(int (***)(int))((char *)&v17 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
    v18 = 0;
    v28[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    return (uint32_t *)sub_1900B90(v28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::BaseServiceManager::CancelRequest  (binary VA: 0x14bff20)
// Original: gaia::BaseServiceManager::CancelRequest
// ----------------------------------------------------------------------------
int gaia::BaseServiceManager::CancelRequest(char *a1, int a2)
{
  char *v2;
  int v3;
  int *v4;
  uint32_t *v5;
  int v6;
  uint32_t *v7;
  int v8;
  void *v9;
  void **v10;
  unsigned int v11;
  void *v12;
  gaia::ServiceRequest::Self **v13;
  gaia::ServiceRequest::Self *v14;
  int v15;
  gaia::ServiceRequest::Self **v16;
  std::deque<gaia::ServiceRequest::Self *> *v17;
  gaia::ServiceRequest::Self *v18;
  int *v19;
  int v20;
  int v21;
  int v22;
  void *v23;
  void **v24;
  unsigned int v25;
  void *v26;
  typedef glwebtools::UrlConnection::Self *_g4_t_v28;
  typedef int *_g4_t_v29;
  typedef char *_g4_t_v30;
  typedef char *_g4_t_v31;
  typedef unsigned int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef void **_g4_t_v34;
  typedef gaia::ServiceRequest::Self *_g4_t_v35;
  typedef void *_g4_t_v36[2];
  typedef uint32_t *_g4_t_v37;
  typedef void *_g4_t_v38;
  typedef char *_g4_t_v39;
  typedef void **_g4_t_v40;
  typedef uint32_t *_g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef void *_g4_t_v45[2];
  typedef int *_g4_t_v46;
  typedef int _g4_t_v47;
  typedef int *_g4_t_v48;
  typedef unsigned int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v28)) > _g4_s0 ? (0u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v29)) > _g4_s1 ? (20u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v30)) > _g4_s2 ? (20u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v31)) > _g4_s3 ? (20u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v32)) > _g4_s4 ? (24u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v33)) > _g4_s5 ? (24u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v34)) > _g4_s6 ? (32u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v35)) > _g4_s7 ? (60u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v36)) > _g4_s8 ? (64u + sizeof(_g4_t_v36)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v37)) > _g4_s9 ? (72u + sizeof(_g4_t_v37)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v38)) > _g4_s10 ? (76u + sizeof(_g4_t_v38)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v39)) > _g4_s11 ? (80u + sizeof(_g4_t_v39)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v40)) > _g4_s12 ? (84u + sizeof(_g4_t_v40)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v41)) > _g4_s13 ? (88u + sizeof(_g4_t_v41)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v42)) > _g4_s14 ? (92u + sizeof(_g4_t_v42)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v43)) > _g4_s15 ? (96u + sizeof(_g4_t_v43)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v44)) > _g4_s16 ? (100u + sizeof(_g4_t_v44)) : _g4_s16,
    _g4_s18 = (104u + sizeof(_g4_t_v45)) > _g4_s17 ? (104u + sizeof(_g4_t_v45)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v46)) > _g4_s18 ? (112u + sizeof(_g4_t_v46)) : _g4_s18,
    _g4_s20 = (116u + sizeof(_g4_t_v47)) > _g4_s19 ? (116u + sizeof(_g4_t_v47)) : _g4_s19,
    _g4_s21 = (120u + sizeof(_g4_t_v48)) > _g4_s20 ? (120u + sizeof(_g4_t_v48)) : _g4_s20,
    _g4_s22 = (124u + sizeof(_g4_t_v49)) > _g4_s21 ? (124u + sizeof(_g4_t_v49)) : _g4_s21,
    _g4_s23 = (128u + sizeof(_g4_t_v50)) > _g4_s22 ? (128u + sizeof(_g4_t_v50)) : _g4_s22,
    _g4_s24 = (132u + sizeof(_g4_t_v51)) > _g4_s23 ? (132u + sizeof(_g4_t_v51)) : _g4_s23,
    _g4_s25 = (136u + sizeof(_g4_t_v52)) > _g4_s24 ? (136u + sizeof(_g4_t_v52)) : _g4_s24,
    _g4_s26 = (140u + sizeof(_g4_t_v53)) > _g4_s25 ? (140u + sizeof(_g4_t_v53)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 0u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 20u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 20u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 32u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 60u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 64u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 72u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 76u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 80u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 84u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 88u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 92u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 96u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 100u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 104u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 112u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 116u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 120u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 124u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 128u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 132u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 136u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 140u);

  v2 = a1;
  v3 = a2;
  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(a1 + 124));
  v35 = nullptr;
  v45[0] = nullptr;
  v45[1] = nullptr;
  v46 = nullptr;
  v47 = 0;
  v48 = nullptr;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  g4_std::Deque_base_gaia_ServiceRequest_c68e26::M_initialize_map((std::_Deque_base<gaia::ServiceRequest::Self *> *)v45, 0);
  v36[0] = nullptr;
  v36[1] = nullptr;
  v37 = nullptr;
  v38 = nullptr;
  v39 = nullptr;
  v40 = nullptr;
  v41 = nullptr;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  g4_std::Deque_base_gaia_ServiceRequest_c68e26::M_initialize_map(
    (std::_Deque_base<gaia::ServiceRequest::Self *> *)v36,
    ((v50 - v51) >> 2) + ((((int)(v53 - v49) >> 2) - 1) << 7) + v48 - v46);
  v34 = v40;
  v29 = v48;
  v32 = v49;
  v4 = v46;
  v5 = v37;
  v6 = ((((int)(v53 - v49) >> 2) - 1) << 7) + ((v50 - v51) >> 2) + v48 - v46;
  if ( v6 > 0 )
  {
    v7 = (uint32_t *)(v39);
    while ( 1 )
    {
      v8 = *v4++;
      *v5 = v8;
      if ( v4 == v29 )
      {
        ++v5;
        v4 = *(int **)(v32 + 4);
        v29 = v4 + 128;
        v32 += 4;
        if ( v5 == v7 )
          goto LABEL_7;
LABEL_4:
        if ( --v6 == 0 )
          goto LABEL_8;
      }
      else
      {
        if ( ++v5 != v7 )
          goto LABEL_4;
LABEL_7:
        v5 = (uint32_t *)(v34[1]);
        --v6;
        ++v34;
        v7 = v5 + 128;
        if ( v6 == 0 )
        {
LABEL_8:
          v2 = a1;
          v3 = a2;
          break;
        }
      }
    }
  }
  v9 = v45[0];
  if ( v45[0] != nullptr )
  {
    if ( v53 + 4 > v49 )
    {
      v30 = v2;
      v33 = v3;
      v10 = (void **)v49;
      v11 = v53 + 4;
      do
      {
        v12 = *v10++;
        opDelete(v12);
      }
      while ( v11 > (unsigned int)(uintptr_t)(v10) );
      v2 = v30;
      v3 = v33;
      v9 = v45[0];
    }
    opDelete(v9);
  }
  while ( 1 )
  {
    v13 = *((gaia::ServiceRequest::Self ***)v2 + 5);
    if ( *((gaia::ServiceRequest::Self ***)v2 + 9) == v13 )
      break;
    while ( 1 )
    {
      v14 = *v13;
      v15 = *((uint32_t *)v2 + 7) - 4;
      v35 = *v13;
      if ( v13 == (gaia::ServiceRequest::Self **)v15 )
      {
        opDelete(*((void **)v2 + 6));
        v19 = (int *)(*((uint32_t *)v2 + 8) + 4);
        *((uint32_t *)v2 + 8) = (uint32_t)(uintptr_t)(v19);
        v20 = *v19;
        *((uint32_t *)v2 + 6) = *v19;
        *((uint32_t *)v2 + 5) = v20;
        *((uint32_t *)v2 + 7) = v20 + 512;
        v14 = v35;
      }
      else
      {
        *((uint32_t *)v2 + 5) = (uint32_t)(uintptr_t)(v13 + 1);
      }
      if ( *((uint32_t *)v14 + 8) == v3 )
        break;
      g4_std::deque_gaia_ServiceRequest_b3f9d1::push_back((std::deque<gaia::ServiceRequest::Self *> *)v36, &v35);
      v13 = *((gaia::ServiceRequest::Self ***)v2 + 5);
      if ( *((gaia::ServiceRequest::Self ***)v2 + 9) == v13 )
        goto LABEL_20;
    }
    gaia::Condition::Acquire((pthread_mutex_t *)((char *)v14 + 4));
    g4_std_compat::string_assign((int)(uintptr_t)(v35) + 52, "606", 3u);
    v18 = v35;
    *((uint32_t *)v35 + 7) = 606;
    *(uint32_t *)v18 = 2;
    gaia::Condition::Set((gaia::ServiceRequest::Self *)((char *)v35 + 4));
    gaia::Condition::Release((pthread_mutex_t *)((char *)v35 + 4));
  }
LABEL_20:
  v16 = (gaia::ServiceRequest::Self **)v37;
  if ( v41 != v37 )
  {
    v31 = v2;
    v17 = (std::deque<gaia::ServiceRequest::Self *> *)(v2 + 12);
    do
    {
      v35 = *v16;
      if ( v16 == (gaia::ServiceRequest::Self **)(v39 - 4) )
      {
        opDelete(v38);
        v38 = *++v40;
        v37 = (uint32_t *)(v38);
        v39 = (char *)v38 + 512;
      }
      else
      {
        v37 = (uint32_t *)(v16 + 1);
      }
      g4_std::deque_gaia_ServiceRequest_b3f9d1::push_back(v17, &v35);
      v16 = (gaia::ServiceRequest::Self **)v37;
    }
    while ( v41 != v37 );
    v2 = v31;
  }
  if ( *((int *)v2 + 34) > 0 )
  {
    v21 = 0;
    do
    {
      while ( 1 )
      {
        v22 = *(uint32_t *)(*((uint32_t *)v2 + 37) + 4 * v21);
        if ( v22 != 0 && *(uint32_t *)(v22 + 32) == v3 )
          break;
        if ( *((uint32_t *)v2 + 34) <= ++v21 )
          goto LABEL_35;
      }
      gaia::Condition::Acquire((pthread_mutex_t *)(v22 + 4));
      *(uint32_t *)(*(uint32_t *)(*((uint32_t *)v2 + 37) + 4 * v21) + 28) = 606;
      gaia::Condition::Release((pthread_mutex_t *)(*(uint32_t *)(*((uint32_t *)v2 + 37) + 4 * v21) + 4));
      v28 = (glwebtools::UrlConnection::Self *)(*((uint32_t *)v2 + 36) + 8 * v21++);
      glwebtools::UrlConnection::CancelRequest(v28);
    }
    while ( *((uint32_t *)v2 + 34) > v21 );
  }
LABEL_35:
  v23 = v36[0];
  if ( v36[0] != nullptr )
  {
    v24 = v40;
    v25 = v44 + 4;
    if ( v44 + 4 > (unsigned int)(uintptr_t)(v40) )
    {
      do
      {
        v26 = *v24++;
        opDelete(v26);
      }
      while ( v25 > (unsigned int)(uintptr_t)(v24) );
      v23 = v36[0];
    }
    opDelete(v23);
  }
  glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)(a1 + 124));
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gaia::BaseServiceManager::Construct  (binary VA: 0x14c03e0)
// Original: gaia::BaseServiceManager::BaseServiceManager
// ----------------------------------------------------------------------------
int gaia::BaseServiceManager::Construct(gaia::BaseServiceManager::Self *a1, int a2, int a3, int a4)
{
  gaia::BaseServiceManager::Self *v4;
  int v5;
  int v6;
  int v7;
  int *v8;
  int *v9;
  uint32_t *v10;
  int v11;
  uint32_t *v12;
  int v13;
  void *v14;
  void **v15;
  unsigned int v16;
  void *v17;
  glwebtools::GlWebToolsCore::Self **GLWTInstance;
  uint32_t *v19;
  int v20;
  glwebtools::UrlConnection::Self *v21;
  glwebtools::UrlConnection::Self *v22;
  int result;
  int v24;
  int v25;
  typedef unsigned int _g4_t_v26;
  typedef glwebtools::UrlConnection::Self *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef uint8_t _g4_t_v29[8];
  typedef void *_g4_t_v30[2];
  typedef int *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef int *_g4_t_v33;
  typedef unsigned int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef uint8_t _g4_t_v39[32];
  typedef char _g4_t_v40[4];
  typedef char _g4_t_v41[4];
  typedef char _g4_t_v42[4];
  typedef char _g4_t_v43[4];
  typedef char _g4_t_v44[4];
  typedef char _g4_t_v45[32];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_v26)) > _g4_s0 ? (4u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v27)) > _g4_s1 ? (4u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v28)) > _g4_s2 ? (8u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v29)) > _g4_s3 ? (24u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v30)) > _g4_s4 ? (32u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v31)) > _g4_s5 ? (40u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v32)) > _g4_s6 ? (44u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v33)) > _g4_s7 ? (48u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v34)) > _g4_s8 ? (52u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v35)) > _g4_s9 ? (56u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v36)) > _g4_s10 ? (60u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v37)) > _g4_s11 ? (64u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v38)) > _g4_s12 ? (68u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v39)) > _g4_s13 ? (72u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (104u + sizeof(_g4_t_v40)) > _g4_s14 ? (104u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (108u + sizeof(_g4_t_v41)) > _g4_s15 ? (108u + sizeof(_g4_t_v41)) : _g4_s15,
    _g4_s17 = (112u + sizeof(_g4_t_v42)) > _g4_s16 ? (112u + sizeof(_g4_t_v42)) : _g4_s16,
    _g4_s18 = (116u + sizeof(_g4_t_v43)) > _g4_s17 ? (116u + sizeof(_g4_t_v43)) : _g4_s17,
    _g4_s19 = (120u + sizeof(_g4_t_v44)) > _g4_s18 ? (120u + sizeof(_g4_t_v44)) : _g4_s18,
    _g4_s20 = (124u + sizeof(_g4_t_v45)) > _g4_s19 ? (124u + sizeof(_g4_t_v45)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 4u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 4u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 40u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 44u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 48u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 52u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 56u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 60u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 64u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 68u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 72u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 104u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 108u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 112u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 116u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 120u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 124u);

  v4 = a1;
  v30[0] = nullptr;
  v30[1] = nullptr;
  v31 = nullptr;
  v32 = 0;
  v33 = nullptr;
  v34 = 0;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2095BA8);
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  g4_std::Deque_base_gaia_ServiceRequest_c68e26::M_initialize_map((std::_Deque_base<gaia::ServiceRequest::Self *> *)v30, 0);
  v5 = (int)(v38 - v34) >> 2;
  *((uint32_t *)a1 + 3) = 0;
  *((uint32_t *)a1 + 4) = 0;
  *((uint32_t *)a1 + 5) = 0;
  *((uint32_t *)a1 + 6) = 0;
  *((uint32_t *)a1 + 7) = 0;
  *((uint32_t *)a1 + 8) = 0;
  *((uint32_t *)a1 + 9) = 0;
  v6 = v5 - 1;
  v7 = v35 - v36;
  *((uint32_t *)a1 + 10) = 0;
  *((uint32_t *)a1 + 11) = 0;
  *((uint32_t *)a1 + 12) = 0;
  g4_std::Deque_base_gaia_ServiceRequest_c68e26::M_initialize_map(
    (gaia::BaseServiceManager::Self *)((char *)a1 + 12),
    (v7 >> 2) + (v6 << 7) + v33 - v31);
  v28 = *((uint32_t *)a1 + 8);
  v26 = v34;
  v8 = v33;
  v9 = v31;
  v10 = *((uint32_t **)a1 + 5);
  v11 = ((v35 - v36) >> 2) + ((((int)(v38 - v34) >> 2) - 1) << 7) + v33 - v31;
  if ( v11 > 0 )
  {
    v12 = *((uint32_t **)a1 + 7);
    while ( 1 )
    {
      v13 = *v9++;
      *v10 = v13;
      if ( v9 == v8 )
      {
        ++v10;
        v9 = *(int **)(v26 + 4);
        v26 += 4;
        v8 = v9 + 128;
        if ( v10 == v12 )
          goto LABEL_7;
LABEL_4:
        if ( --v11 == 0 )
          goto LABEL_8;
      }
      else
      {
        if ( ++v10 != v12 )
          goto LABEL_4;
LABEL_7:
        v10 = *(uint32_t **)(v28 + 4);
        --v11;
        v28 += 4;
        v12 = v10 + 128;
        if ( v11 == 0 )
        {
LABEL_8:
          v4 = a1;
          break;
        }
      }
    }
  }
  v14 = v30[0];
  if ( v30[0] != nullptr )
  {
    v15 = (void **)v34;
    v16 = v38 + 4;
    if ( v38 + 4 > v34 )
    {
      do
      {
        v17 = *v15++;
        opDelete(v17);
      }
      while ( v16 > (unsigned int)(uintptr_t)(v15) );
      v14 = v30[0];
    }
    opDelete(v14);
  }
  *((uint32_t *)v4 + 13) = (uint32_t)(uintptr_t)(&dword_213B814);
  glwebtools::UrlConnection::CreationSettings::Construct((glwebtools::UrlConnection::CreationSettings::Self *)((char *)v4 + 68));
  glwebtools::Mutex::Construct((gaia::BaseServiceManager::Self *)((char *)v4 + 124));
  *((uint32_t *)v4 + 33) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)v4 + 38) = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std::string::assign_str((char *)v4 + 152, a2);
  GLWTInstance = (glwebtools::GlWebToolsCore::Self **)gaia::Gaia::GetGLWTInstance();
  *((uint32_t *)v4 + 30) = (uint32_t)(uintptr_t)(GLWTInstance);
  if ( (uint8_t)glwebtools::GlWebTools::IsInitialized(GLWTInstance) == 0 )
  {
    glwebtools::GlWebTools::CreationSettings::Construct((glwebtools::GlWebTools::CreationSettings::Self *)v39);
    glwebtools::GlWebTools::Initialize(
      *((glwebtools::GlWebTools::Self **)v4 + 30),
      (const glwebtools::GlWebTools::CreationSettings::Self *)v39);
    g4_std::string::Destroy(v45);
    g4_std::string::Destroy(v44);
    g4_std::string::Destroy(v43);
    g4_std::string::Destroy(v42);
    g4_std::string::Destroy(v41);
    g4_std::string::Destroy(v40);
  }
  g4_std::string::assign_str((char *)v4 + 132, a3);
  *((uint32_t *)v4 + 15) = gaia::BaseServiceManager::GetTimeStamp();
  *((uint32_t *)v4 + 14) = 0;
  *((uint8_t *)v4 + 64) = 0;
  *((uint8_t *)v4 + 4) = 0;
  *((uint32_t *)v4 + 2) = 19;
  *((uint32_t *)v4 + 35) = a4;
  *((uint32_t *)v4 + 34) = 1;
  v19 = (uint32_t *)opNewArray(8 * a4 + 4);
  *v19 = a4;
  v20 = a4 - 1;
  v21 = (glwebtools::UrlConnection::Self *)(v19 + 1);
  v27 = v21;
  if ( a4 != 0 )
  {
    v22 = v21;
    do
    {
      --v20;
      glwebtools::UrlConnection::Construct(v22);
      v22 = (glwebtools::UrlConnection::Self *)((char *)v22 + 8);
    }
    while ( v20 != -1 );
  }
  *((uint32_t *)v4 + 36) = (uint32_t)(uintptr_t)(v27);
  result = opNewArray(4 * a4);
  v24 = *((uint32_t *)v4 + 34);
  *((uint32_t *)v4 + 37) = result;
  if ( v24 > 0 )
  {
    v25 = 0;
    do
    {
      glwebtools::GlWebTools::CreateUrlConnection(
        (glwebtools::GlWebTools::Self *)v29,
        *((glwebtools::GlWebToolsCore::Self ***)v4 + 30));
      glwebtools::UrlConnection::opAssign(
        (glwebtools::UrlConnection::Self *)(*((uint32_t *)v4 + 36) + 8 * v25),
        (const glwebtools::UrlConnection::Self *)v29);
      glwebtools::UrlConnection::Destroy((glwebtools::UrlConnection::Self *)v29);
      result = *((uint32_t *)v4 + 37);
      *(uint32_t *)(result + 4 * v25++) = 0;
    }
    while ( *((uint32_t *)v4 + 34) > v25 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::BaseServiceManager::CompleteRequest  (binary VA: 0x14c3750)
// Original: gaia::BaseServiceManager::CompleteRequest
// ----------------------------------------------------------------------------
int gaia::BaseServiceManager::CompleteRequest(gaia::BaseServiceManager::Self *self, glwebtools::UrlConnection::Self *a2, const char ***a3)
{
  gaia::ServiceRequest::Self *v3;
  int v4;
  char *v5;
  size_t v6;
  int v7;
  pthread_mutex_t *v8;
  const char **v10;
  size_t v11;
  size_t v12;
  size_t v13;
  int v14;
  int v15;
  size_t v16;
  size_t v17;
  int v18;
  int v19;
  size_t v20;
  void (*v21)(gaia::BaseServiceManager::Self *, int *);
  char *v22;
  int v23;
  int v24;
  int LastError;
  bool v26;
  int ResponseCode;
  int v28;
  size_t v29;
  typedef gaia::utils::Self *_g4_t_dest;
  typedef gaia::utils::Self *_g4_t_desta;
  typedef char *_g4_t_s;
  typedef const char *_g4_t_s2;
  typedef size_t _g4_t_v34;
  typedef char _g4_t_v35;
  typedef const char **_g4_t_v36;
  typedef const char **_g4_t_v37;
  typedef const char **_g4_t_v38;
  typedef char *_g4_t_HeaderField;
  typedef const char **_g4_t_v40;
  typedef uint16_t _g4_t_src[3];
  typedef size_t _g4_t_n;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef uint32_t *_g4_t_v45;
  typedef uint8_t _g4_t_v46[8];
  typedef uint8_t _g4_t_v47[8];
  typedef const void *_g4_t_v48;
  typedef char _g4_t_v49[6];
  typedef char _g4_t_v50[38];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_dest)) > _g4_s0 ? (0u + sizeof(_g4_t_dest)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_desta)) > _g4_s1 ? (0u + sizeof(_g4_t_desta)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_s)) > _g4_s2 ? (44u + sizeof(_g4_t_s)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_s2)) > _g4_s3 ? (48u + sizeof(_g4_t_s2)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v34)) > _g4_s4 ? (52u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v35)) > _g4_s5 ? (52u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v36)) > _g4_s6 ? (56u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v37)) > _g4_s7 ? (60u + sizeof(_g4_t_v37)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v38)) > _g4_s8 ? (64u + sizeof(_g4_t_v38)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_HeaderField)) > _g4_s9 ? (68u + sizeof(_g4_t_HeaderField)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v40)) > _g4_s10 ? (76u + sizeof(_g4_t_v40)) : _g4_s10,
    _g4_s12 = (86u + sizeof(_g4_t_src)) > _g4_s11 ? (86u + sizeof(_g4_t_src)) : _g4_s11,
    _g4_s13 = (92u + sizeof(_g4_t_n)) > _g4_s12 ? (92u + sizeof(_g4_t_n)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v43)) > _g4_s13 ? (96u + sizeof(_g4_t_v43)) : _g4_s13,
    _g4_s15 = (100u + sizeof(_g4_t_v44)) > _g4_s14 ? (100u + sizeof(_g4_t_v44)) : _g4_s14,
    _g4_s16 = (104u + sizeof(_g4_t_v45)) > _g4_s15 ? (104u + sizeof(_g4_t_v45)) : _g4_s15,
    _g4_s17 = (108u + sizeof(_g4_t_v46)) > _g4_s16 ? (108u + sizeof(_g4_t_v46)) : _g4_s16,
    _g4_s18 = (116u + sizeof(_g4_t_v47)) > _g4_s17 ? (116u + sizeof(_g4_t_v47)) : _g4_s17,
    _g4_s19 = (124u + sizeof(_g4_t_v48)) > _g4_s18 ? (124u + sizeof(_g4_t_v48)) : _g4_s18,
    _g4_s20 = (128u + sizeof(_g4_t_v49)) > _g4_s19 ? (128u + sizeof(_g4_t_v49)) : _g4_s19,
    _g4_s21 = (134u + sizeof(_g4_t_v50)) > _g4_s20 ? (134u + sizeof(_g4_t_v50)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 0u);
  _g4_t_desta &desta = *reinterpret_cast<_g4_t_desta *>(_g4_sf + 0u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 44u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 48u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 52u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 52u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 56u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 60u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 64u);
  _g4_t_HeaderField &HeaderField = *reinterpret_cast<_g4_t_HeaderField *>(_g4_sf + 68u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 76u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 86u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 92u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 96u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 100u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 104u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 108u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 116u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 124u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 128u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 134u);

  v3 = (gaia::ServiceRequest::Self *)a3;
  if ( a3[7] == (const char **)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_254)->st_size + 2) )
  {
    v8 = (pthread_mutex_t *)(a3 + 1);
    gaia::Condition::Acquire((pthread_mutex_t *)(a3 + 1));
    a3[7] = (const char **)(&stru_254 + 10);
    g4_std_compat::string_assign((int)(uintptr_t)(a3 + 13), "606", 3u);
    gaia::Condition::Release((pthread_mutex_t *)(a3 + 1));
    goto LABEL_13;
  }
  glwebtools::UrlConnection::GetUrlResponse((glwebtools::UrlConnection::Self *)v46, (int)(uintptr_t)(a2));
  *(uint32_t *)&src[1] = 0;
  glwebtools::UrlResponse::GetData((glwebtools::UrlResponse::Self *)v46, (void **)&src[1], &n);
  s = (char *)opNewArray(n + 1);
  v34 = n;
  memcpy(s, *(const void **)&src[1], n);
  s[v34] = 0;
  if ( (uint8_t)gaia::ServiceRequest::IsRawResponseCachingEnable((gaia::ServiceRequest::Self *)a3) != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), s, (int)(uintptr_t)(src));
    gaia::ServiceRequest::SetRawResponse(a3, &v43);
    g4_std::string::Destroy(&v43);
    if ( (uint8_t)glwebtools::UrlConnection::IsHandleValid(a2) == 0 )
      goto LABEL_4;
  }
  else if ( (uint8_t)glwebtools::UrlConnection::IsHandleValid(a2) == 0 )
  {
LABEL_4:
    v4 = 0;
    if ( (uint8_t)(*s - 48) <= 9u )
    {
      v35 = *s;
      v5 = s;
      do
      {
        ++v5;
        v4 = v35 + 10 * v4 - 48;
        v35 = *v5;
      }
      while ( (uint8_t)(*v5 - 48) <= 9u );
    }
    a3[7] = (const char **)v4;
    v6 = strlen(s);
    g4_std::string::append((int)(uintptr_t)(a3 + 13), s, v6);
    goto LABEL_8;
  }
  if ( (uint8_t)glwebtools::UrlConnection::IsError(a2) != 0 )
  {
    LastError = glwebtools::UrlConnection::GetLastError(a2);
    v26 = a3[8] == (const char **)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_BB4)->st_size + 1);
    a3[7] = (const char **)LastError;
    if ( !v26 )
      goto LABEL_10;
LABEL_47:
    G4_VCALL<void>(self, 36, s, v3);
    goto LABEL_10;
  }
  glwebtools::UrlConnection::GetUrlResponse((glwebtools::UrlConnection::Self *)v47, (int)(uintptr_t)(a2));
  glwebtools::UrlResponse::opAssign((glwebtools::UrlResponse::Self *)v46, (const glwebtools::UrlResponse::Self *)v47);
  glwebtools::UrlResponse::Destroy((glwebtools::UrlResponse::Self *)v47);
  if ( (uint8_t)glwebtools::UrlResponse::IsHandleValid((glwebtools::UrlResponse::Self *)v46) != 0 )
  {
    if ( a3[26] != nullptr )
    {
      v37 = a3[24];
      v38 = (const char **)(a3 + 22);
      if ( v37 != (const char **)(a3 + 22) )
      {
        while ( glwebtools::UrlResponse::GetHeaderField((glwebtools::UrlResponse::Self *)v46, v37[4]) == 0 )
        {
LABEL_37:
          v37 = (const char **)sub_1904890(v37);
          if ( v38 == v37 )
          {
            v3 = (gaia::ServiceRequest::Self *)a3;
            goto LABEL_39;
          }
        }
        HeaderField = (char *)glwebtools::UrlResponse::GetHeaderField((glwebtools::UrlResponse::Self *)v46, v37[4]);
        v10 = a3[23];
        if ( v10 != nullptr )
        {
          v36 = (const char **)(a3 + 22);
          s2 = v37[4];
          v11 = *((uint32_t *)s2 - 3);
          do
          {
            while ( 1 )
            {
              v12 = *((uint32_t *)v10[4] - 3);
              v13 = v12;
              if ( v11 <= v12 )
                v13 = v11;
              v14 = v12 - v11;
              v15 = memcmp(v10[4], s2, v13);
              if ( v15 == 0 )
                v15 = v14;
              if ( v15 < 0 )
                break;
              v36 = v10;
              v10 = (const char **)v10[2];
              if ( v10 == nullptr )
                goto LABEL_29;
            }
            v10 = (const char **)v10[3];
          }
          while ( v10 != nullptr );
LABEL_29:
          if ( v36 != v38 )
          {
            v16 = *((uint32_t *)v36[4] - 3);
            v17 = v16;
            if ( v11 <= v16 )
              v17 = v11;
            v18 = v11 - v16;
            v19 = memcmp(s2, v36[4], v17);
            if ( v19 == 0 )
              v19 = v18;
            if ( v19 >= 0 )
              goto LABEL_36;
          }
        }
        else
        {
          v36 = (const char **)(a3 + 22);
        }
        v45 = &dword_213B814;
        g4_std::string::construct_copy(&v48, v37 + 4);
        g4_std::string::construct_copy(v49, &v45);
        g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_insert_unique(
          (int *)&v40,
          a3 + 21,
          (int)(uintptr_t)(v36),
          &v48);
        v36 = v40;
        g4_std::string::Destroy(v49);
        g4_std::string::Destroy(&v48);
        g4_std::string::Destroy(&v45);
LABEL_36:
        v20 = strlen(HeaderField);
        g4_std_compat::string_assign((int)(uintptr_t)(v36 + 5), HeaderField, v20);
        goto LABEL_37;
      }
    }
LABEL_39:
    if ( glwebtools::UrlResponse::IsHTTPError((glwebtools::UrlResponse::Self *)v46) )
    {
      ResponseCode = glwebtools::UrlResponse::GetResponseCode((glwebtools::UrlResponse::Self *)v46);
      *((uint32_t *)v3 + 7) = ResponseCode;
      if ( ResponseCode != 0 )
      {
        v28 = glwebtools::UrlResponse::GetResponseCode((glwebtools::UrlResponse::Self *)v46);
        sprintf(v50, "%ld", v28);
        v29 = strlen(v50);
        g4_std::string::append((int)(uintptr_t)(v3) + 52, v50, v29);
      }
      else
      {
        *((uint32_t *)v3 + 7) = -220;
      }
LABEL_8:
      *((uint32_t *)v3 + 36) = gaia::utils::GetUnixTimeStampInMillisec(dest);
      *((uint32_t *)v3 + 37) = v7;
      goto LABEL_9;
    }
    if ( glwebtools::UrlResponse::GetHeaderField((glwebtools::UrlResponse::Self *)v46, "Date") != 0 )
    {
      v21 = *(void (**)(gaia::BaseServiceManager::Self *, int *))(*(uint32_t *)self + 28);
      v22 = (char *)glwebtools::UrlResponse::GetHeaderField((glwebtools::UrlResponse::Self *)v46, "Date");
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), v22, (int)(uintptr_t)(src) + 1);
      v21(self, &v44);
      g4_std::string::Destroy(&v44);
    }
    v23 = glwebtools::UrlResponse::GetResponseCode((glwebtools::UrlResponse::Self *)v46);
    *((uint32_t *)v3 + 7) = v23;
    *((uint32_t *)v3 + 32) = v23;
    if ( v23 == 202 || v23 == 200 )
      *((uint32_t *)v3 + 7) = 0;
    sub_1939B80((char *)v3 + 52, v34 + 1);
    sub_1939D80((int)(uintptr_t)(v3) + 52, v34, 0);
    sub_193A9B0((int)(uintptr_t)(v3) + 52, 0, v34, s, v34);
    *((uint32_t *)v3 + 36) = gaia::utils::GetUnixTimeStampInMillisec(desta);
    *((uint32_t *)v3 + 37) = v24;
  }
LABEL_9:
  if ( *((uint32_t *)v3 + 8) == 3005 )
    goto LABEL_47;
LABEL_10:
  if ( s != nullptr )
    opDeleteArray(s);
  v8 = (pthread_mutex_t *)((char *)v3 + 4);
  glwebtools::UrlResponse::Destroy((glwebtools::UrlResponse::Self *)v46);
LABEL_13:
  gaia::Condition::Acquire(v8);
  *(uint32_t *)v3 = 2;
  gaia::Condition::Set((gaia::Condition::Self *)v8);
  return gaia::Condition::Release(v8);
}

// ----------------------------------------------------------------------------
// Function: gaia::BaseServiceManager::NeedsLinkRefreshing  (binary VA: 0x14c7140)
// Original: gaia::BaseServiceManager::NeedsLinkRefreshing
// ----------------------------------------------------------------------------
int gaia::BaseServiceManager::NeedsLinkRefreshing(gaia::BaseServiceManager::Self *self)
{
  return *((uint8_t *)self + 64);
}


