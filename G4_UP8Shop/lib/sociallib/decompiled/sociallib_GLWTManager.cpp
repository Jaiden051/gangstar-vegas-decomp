#include "Core/Utils/DecompTypes.h"
#include "sociallib_GLWTManager.h"

// ----------------------------------------------------------------------------
// Function: sociallib::GLWTManager::appendEncodedParams  (binary VA: 0x14246e0)
// Original: sociallib::GLWTManager::appendEncodedParams
// ----------------------------------------------------------------------------
int sociallib::GLWTManager::appendEncodedParams(int a1, int a2, uint32_t *a3, char **a4)
{
  int result;
  void *v5;
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

  result = (int)(uintptr_t)(a3);
  if ( *(uint32_t *)(*a3 - 12) != 0 && *((uint32_t *)*a4 - 3) != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v7), (char *)&unk_1B15112, (int)(uintptr_t)(&v6));
    g4_std::string::append_str(a2, a3);
    glwebtools::Codec::EncodeUrlRFC3986(a4, (int)(uintptr_t)(v7));
    g4_std::string::append_str(a2, v7);
    result = v7[0];
    v5 = (void *)(v7[0] - 12);
    if ( (uint32_t *)(v7[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v7[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      { g4_std::string::Rep::M_destroy(v5); return 0; }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::GLWTManager::StartRequest  (binary VA: 0x14247c0)
// Original: sociallib::GLWTManager::StartRequest
// ----------------------------------------------------------------------------
int sociallib::GLWTManager::StartRequest(int a1, int a2)
{
  glwebtools::UrlConnection::Self *v2;
  int v3;
  glwebtools::UrlRequest::CreationSettings **v5;
  typedef uint8_t _g4_t_v6[8];
  typedef uint8_t _g4_t_v7[20];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);

  v2 = (glwebtools::UrlConnection::Self *)(a1 + 68);
  if ( (uint8_t)glwebtools::UrlConnection::IsHandleValid((glwebtools::UrlConnection::Self *)(a1 + 68)) != 0
    && glwebtools::UrlConnection::IsReadyToRun(v2) )
  {
    v3 = 0;
    if ( (uint8_t)glwebtools::UrlConnection::IsHandleValid(v2) == 0 )
      return v3;
  }
  else
  {
    v3 = 0;
    if ( *(uint32_t *)(a1 + 76) == 0 )
      return v3;
    glwebtools::GlWebTools::CreateUrlConnection(
      (glwebtools::GlWebTools::Self *)v6,
      *(glwebtools::GlWebToolsCore::Self ***)(a1 + 76));
    glwebtools::UrlConnection::opAssign(v2, (const glwebtools::UrlConnection::Self *)v6);
    v3 = 0;
    glwebtools::UrlConnection::Destroy((glwebtools::UrlConnection::Self *)v6);
    if ( (uint8_t)glwebtools::UrlConnection::IsHandleValid(v2) == 0 )
      return v3;
  }
  if ( glwebtools::UrlConnection::IsReadyToRun(v2) )
  {
    v5 = *(glwebtools::UrlRequest::CreationSettings ***)(a1 + 76);
    if ( v5 != nullptr )
    {
      glwebtools::GlWebTools::CreateUrlRequest((glwebtools::GlWebTools::Self *)v7, v5);
      if ( (uint8_t)(uintptr_t)glwebtools::UrlRequest::IsHandleValid((glwebtools::UrlRequest::Self *)v7) != 0 && a2 != 0 )
      {
        if ( *(uint8_t *)(a2 + 4) != 0 )
          glwebtools::UrlRequest::SetMethod((int)(uintptr_t)(v7), 1);
        else
          glwebtools::UrlRequest::SetMethod((int)(uintptr_t)(v7), 2);
        glwebtools::UrlRequest::SetUrl((glwebtools::UrlRequest::Self *)v7, *(const char **)(a2 + 24), 0);
        if ( *(uint32_t *)(*(uint32_t *)(a2 + 28) - 12) != 0 )
          glwebtools::UrlRequest::SetData((int)(uintptr_t)(v7), a2 + 28);
        glwebtools::UrlConnection::StartRequest(v2, (glwebtools::UrlRequest::Self *)v7);
        v3 = 1;
        glwebtools::UrlRequest::Release((glwebtools::UrlRequest::Self *)v7);
        *(uint32_t *)a2 = 1;
      }
      glwebtools::UrlRequest::Destroy((glwebtools::UrlRequest::Self *)v7);
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sociallib::GLWTManager::UpdateRequestQueue  (binary VA: 0x1424940)
// Original: sociallib::GLWTManager::UpdateRequestQueue
// ----------------------------------------------------------------------------
int sociallib::GLWTManager::UpdateRequestQueue(sociallib::GLWTManager::Self *self)
{
  int **v1;
  int *v2;
  int v3;
  int v5;
  int v6;
  int v7;
  int **v8;
  int *v9;
  int v10;

  glwebtools::Mutex::Lock((sociallib::GLWTManager::Self *)((char *)self + 80));
  v1 = *((int ***)self + 9);
  if ( *((int ***)self + 13) == v1 )
    return (int)(uintptr_t)(glwebtools::Mutex::Unlock((sociallib::GLWTManager::Self *)((char *)self + 80)));
  v2 = *v1;
  v3 = **v1;
  if ( v3 != 4 )
    goto LABEL_3;
  if ( v1 == (int **)(*((uint32_t *)self + 11) - 4) )
  {
    opDelete(*((void **)self + 10));
    v9 = (int *)(*((uint32_t *)self + 12) + 4);
    *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)(v9);
    v10 = *v9;
    *((uint32_t *)self + 10) = *v9;
    *((uint32_t *)self + 9) = v10;
    *((uint32_t *)self + 11) = v10 + 512;
  }
  else
  {
    *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(v1 + 1);
  }
  v5 = v2[8];
  if ( (uint32_t *)(v5 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v5 - 12));
  }
  v6 = v2[7];
  if ( (uint32_t *)(v6 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v6 - 12));
  }
  v7 = v2[6];
  if ( (uint32_t *)(v7 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v7 - 12));
  }
  opDelete(v2);
  v8 = *((int ***)self + 9);
  if ( *((int ***)self + 13) != v8 )
  {
    v2 = *v8;
    v3 = **v8;
LABEL_3:
    if ( v3 == 0 )
      *((uint32_t *)self + 6) = (uint8_t)sociallib::GLWTManager::StartRequest((int)(uintptr_t)(self), (int)(uintptr_t)(v2)) == 0 ? 3 : 1;
  }
  return (int)(uintptr_t)(glwebtools::Mutex::Unlock((sociallib::GLWTManager::Self *)((char *)self + 80)));
}

// ----------------------------------------------------------------------------
// Function: sociallib::GLWTManager::CompleteRequest  (binary VA: 0x1424ab0)
// Original: sociallib::GLWTManager::CompleteRequest
// ----------------------------------------------------------------------------
void sociallib::GLWTManager::CompleteRequest(sociallib::GLWTManager::Self *self, char *s, size_t a3)
{
  int v3;
  char *i;
  size_t v5;
  void (*v6)(uint32_t, int, uint32_t);
  int v7;
  char *v8;
  int ResponseCode;
  size_t v10;
  typedef uint8_t _g4_t_v11[8];
  typedef uint8_t _g4_t_v12[36];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v11)) > _g4_s0 ? (0u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v12)) > _g4_s1 ? (8u + sizeof(_g4_t_v12)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);

  v3 = **((uint32_t **)self + 9);
  if ( v3 != 0 )
  {
    glwebtools::UrlResponse::Construct((glwebtools::UrlResponse::Self *)v11);
    if ( (uint8_t)glwebtools::UrlConnection::IsHandleValid((sociallib::GLWTManager::Self *)((char *)self + 68)) != 0 )
    {
      glwebtools::UrlConnection::GetUrlResponse((glwebtools::UrlConnection::Self *)v12, (int)(uintptr_t)(self) + 68);
      glwebtools::UrlResponse::opAssign((glwebtools::UrlResponse::Self *)v11, (const glwebtools::UrlResponse::Self *)v12);
      glwebtools::UrlResponse::Destroy((glwebtools::UrlResponse::Self *)v12);
      *(uint8_t *)(v3 + 16) = 0;
      if ( (uint8_t)glwebtools::UrlResponse::IsHandleValid((glwebtools::UrlResponse::Self *)v11) != 0 )
      {
        if ( glwebtools::UrlResponse::IsHTTPError((glwebtools::UrlResponse::Self *)v11) )
        {
          if ( glwebtools::UrlResponse::GetResponseCode((glwebtools::UrlResponse::Self *)v11) != 0 )
          {
            v8 = (char *)opNewArray(0xAu);
            ResponseCode = glwebtools::UrlResponse::GetResponseCode((glwebtools::UrlResponse::Self *)v11);
            sprintf(v8, "%ld", ResponseCode);
            v10 = strlen(v8);
            g4_std::string::append(v3 + 32, v8, v10);
            if ( v8 != nullptr )
              opDeleteArray(v8);
          }
        }
        else
        {
          if ( glwebtools::UrlResponse::GetResponseCode((glwebtools::UrlResponse::Self *)v11) == 200 )
            *(uint8_t *)(v3 + 16) = 1;
          sub_1939B80(v3 + 32, a3 + 1);
          sub_1939D80(v3 + 32, a3, 0);
          sub_193A9B0(v3 + 32, 0, a3, s, a3);
        }
      }
    }
    else
    {
      for ( i = s; (uint8_t)(*i - 48) <= 9u; ++i )
        ;
      *(uint8_t *)(v3 + 16) = 0;
      v5 = strlen(s);
      g4_std::string::append(v3 + 32, s, v5);
    }
    *(uint32_t *)v3 = 2;
    *((uint8_t *)self + 1) = 0;
    v6 = *(void (**)(uint32_t, int, uint32_t))(v3 + 8);
    if ( v6 != nullptr )
    {
      v6(*(uint32_t *)(v3 + 20), v3 + 32, *(uint8_t *)(v3 + 16));
    }
    else
    {
      v7 = *(uint32_t *)(v3 + 12);
      if ( v7 != 0 )
        G4_VCALL<void>(v7, 8, *(uint32_t *)(v3 + 20), v3 + 32, *(uint8_t *)(v3 + 16));
    }
    *(uint32_t *)v3 = 4;
    glwebtools::UrlResponse::Destroy((glwebtools::UrlResponse::Self *)v11);
  }
}

// ----------------------------------------------------------------------------
// Function: sociallib::GLWTManager::GetState  (binary VA: 0x1424d00)
// Original: sociallib::GLWTManager::GetState
// ----------------------------------------------------------------------------
int sociallib::GLWTManager::GetState(sociallib::GLWTManager::Self *self)
{
  int v1;
  glwebtools::UrlConnection::Self *v2;
  void *dest;
  typedef void *_g4_t_src;
  typedef size_t _g4_t_n;
  typedef uint8_t _g4_t_v7[20];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_src)) > _g4_s0 ? (0u + sizeof(_g4_t_src)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_n)) > _g4_s1 ? (4u + sizeof(_g4_t_n)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v7)) > _g4_s2 ? (8u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 0u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);

  v1 = 3;
  v2 = (glwebtools::UrlConnection::Self *)((sociallib::GLWTManager::Self *)((char *)self + 68));
  if ( (uint8_t)glwebtools::UrlConnection::IsHandleValid((sociallib::GLWTManager::Self *)((char *)self + 68)) != 0
    && (uint8_t)glwebtools::UrlConnection::IsError(v2) == 0 )
  {
    if ( (uint8_t)glwebtools::UrlConnection::IsRunning(v2) != 0 )
    {
      return *((uint32_t *)self + 6);
    }
    else
    {
      glwebtools::UrlConnection::GetUrlResponse((glwebtools::UrlConnection::Self *)v7, (int)(uintptr_t)(v2));
      if ( (uint8_t)glwebtools::UrlResponse::IsHandleValid((glwebtools::UrlResponse::Self *)v7) != 0 )
      {
        v1 = 2;
        if ( glwebtools::UrlResponse::IsHTTPError((glwebtools::UrlResponse::Self *)v7) )
        {
          LOWORD(v1) = 3;
          glwebtools::UrlResponse::GetData((glwebtools::UrlResponse::Self *)v7, &src, &n);
          if ( n != 0 )
          {
            dest = (void *)opNewArray(n + 1);
            memcpy(dest, src, n);
            *((uint8_t *)dest + n) = 0;
            if ( dest != nullptr )
              opDelete(dest);
          }
        }
      }
      glwebtools::UrlResponse::Destroy((glwebtools::UrlResponse::Self *)v7);
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: sociallib::GLWTManager::IsInProgress  (binary VA: 0x1424e10)
// Original: sociallib::GLWTManager::IsInProgress
// ----------------------------------------------------------------------------
bool sociallib::GLWTManager::IsInProgress(sociallib::GLWTManager::Self *self)
{
  int v1;

  v1 = *((uint32_t *)self + 6);
  return v1 != 0 && v1 != 3 && v1 != 4;
}

// ----------------------------------------------------------------------------
// Function: sociallib::GLWTManager::CancelRequest  (binary VA: 0x1424e30)
// Original: sociallib::GLWTManager::CancelRequest
// ----------------------------------------------------------------------------
void sociallib::GLWTManager::CancelRequest(sociallib::GLWTManager::Self *self)
{
  uint32_t **v1;
  uint32_t *v2;
  int v3;
  int v4;
  int v5;
  int *v6;
  int v7;
  char v8[16];

  *((uint8_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = -1;
  if ( (uint8_t)glwebtools::UrlConnection::IsHandleValid((sociallib::GLWTManager::Self *)((char *)self + 68)) != 0 )
    glwebtools::UrlConnection::CancelRequest((sociallib::GLWTManager::Self *)((char *)self + 68));
  v1 = *((uint32_t ***)self + 9);
  if ( *((uint32_t ***)self + 13) != v1 )
  {
    v2 = *v1;
    if ( **v1 != 1 )
    {
      if ( v1 == (uint32_t **)(*((uint32_t *)self + 11) - 4) )
      {
        opDelete(*((void **)self + 10));
        v6 = (int *)(*((uint32_t *)self + 12) + 4);
        *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)(v6);
        v7 = *v6;
        *((uint32_t *)self + 10) = *v6;
        *((uint32_t *)self + 9) = v7;
        *((uint32_t *)self + 11) = v7 + 512;
      }
      else
      {
        *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(v1 + 1);
      }
      v3 = v2[8];
      if ( (uint32_t *)(v3 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v3 - 12));
      }
      v4 = v2[7];
      if ( (uint32_t *)(v4 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v4 - 12));
      }
      v5 = v2[6];
      if ( (uint32_t *)(v5 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v5 - 12));
      }
      opDelete(v2);
      strcpy(v8, "606");
      sociallib::GLWTManager::CompleteRequest(self, v8, 3u);
    }
  }
  *((uint32_t *)self + 6) = 4;
}

// ----------------------------------------------------------------------------
// Function: sociallib::GLWTManager::Update  (binary VA: 0x1424fc0)
// Original: sociallib::GLWTManager::Update
// ----------------------------------------------------------------------------
void sociallib::GLWTManager::Update(sociallib::GLWTManager::Self *self)
{
  bool v1;
  int v2;
  void *dest;
  int v4;
  typedef void *_g4_t_src;
  typedef size_t _g4_t_n;
  typedef uint8_t _g4_t_v7[20];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_src)) > _g4_s0 ? (0u + sizeof(_g4_t_src)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_n)) > _g4_s1 ? (4u + sizeof(_g4_t_n)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v7)) > _g4_s2 ? (8u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 0u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);

  v1 = *((uint8_t *)self + 1) == 0;
  *((uint32_t *)self + 1) = -1;
  if ( !v1 )
  {
    v2 = *((uint32_t *)self + 6);
    if ( v2 == 1 )
    {
      *((uint32_t *)self + 6) = sociallib::GLWTManager::GetState(self);
    }
    else if ( v2 <= 1 )
    {
      if ( v2 == 0 )
        sociallib::GLWTManager::UpdateRequestQueue(self);
    }
    else if ( v2 <= 3 )
    {
      glwebtools::UrlConnection::GetUrlResponse((glwebtools::UrlConnection::Self *)v7, (int)(uintptr_t)(self) + 68);
      glwebtools::UrlResponse::GetData((glwebtools::UrlResponse::Self *)v7, &src, &n);
      dest = (void *)opNewArray(n + 1);
      memcpy(dest, src, n);
      *((uint8_t *)dest + n) = 0;
      sociallib::GLWTManager::CompleteRequest(self, (char *)dest, n);
      if ( dest != nullptr )
        opDelete(dest);
      *((uint32_t *)self + 6) = 0;
      glwebtools::UrlResponse::Destroy((glwebtools::UrlResponse::Self *)v7);
    }
    if ( sociallib::GLWTManager::IsInProgress(self)
      && *(uint8_t *)self == 0
      && XP_API_GET_TIME() - *((uint64_t *)self + 1) > 0x2BF20 )
    {
      v4 = *((uint32_t *)self + 4);
      sociallib::GLWTManager::CancelRequest(self);
      *((uint32_t *)self + 1) = v4;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sociallib::GLWTManager::Destroy  (binary VA: 0x1425110)
// Original: sociallib::GLWTManager::~GLWTManager
// ----------------------------------------------------------------------------
void sociallib::GLWTManager::Destroy(sociallib::GLWTManager::Self *self)
{
  int v1;
  uint32_t **v2;
  uint32_t *v3;
  int v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  void *v9;
  void **v10;
  unsigned int v11;
  void *v12;
  char v13[32];

  while ( 1 )
  {
    v1 = *((uint32_t *)self + 11);
    v2 = *((uint32_t ***)self + 9);
    if ( ((v1 - (int)(uintptr_t)(v2)) >> 2)
       + ((((*((uint32_t *)self + 16) - *((uint32_t *)self + 12)) >> 2) - 1) << 7)
       + ((*((uint32_t *)self + 13) - *((uint32_t *)self + 14)) >> 2) == 0 )
      break;
    v3 = *v2;
    if ( *v2 != nullptr )
    {
      *((uint8_t *)v3 + 16) = 0;
      v2 = *((uint32_t ***)self + 9);
      strcpy(v13, "606");
      if ( **v2 != 4 )
      {
        sociallib::GLWTManager::CompleteRequest(self, v13, 3u);
        v2 = *((uint32_t ***)self + 9);
      }
      v1 = *((uint32_t *)self + 11);
    }
    if ( v2 == (uint32_t **)(v1 - 4) )
    {
      opDelete(*((void **)self + 10));
      v7 = (int *)(*((uint32_t *)self + 12) + 4);
      *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)(v7);
      v8 = *v7;
      *((uint32_t *)self + 10) = *v7;
      *((uint32_t *)self + 9) = v8;
      *((uint32_t *)self + 11) = v8 + 512;
    }
    else
    {
      *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(v2 + 1);
    }
    if ( v3 != nullptr )
    {
      v4 = v3[8];
      if ( (uint32_t *)(v4 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v4 - 12));
      }
      v5 = v3[7];
      if ( (uint32_t *)(v5 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v5 - 12));
      }
      v6 = v3[6];
      if ( (uint32_t *)(v6 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v6 - 12));
      }
      opDelete(v3);
    }
  }
  if ( (uint8_t)glwebtools::UrlConnection::IsHandleValid((sociallib::GLWTManager::Self *)((char *)self + 68)) != 0 )
  {
    glwebtools::UrlConnection::CancelRequest((sociallib::GLWTManager::Self *)((char *)self + 68));
    glwebtools::UrlConnection::Release((sociallib::GLWTManager::Self *)((char *)self + 68));
  }
  if ( *((uint32_t *)self + 19) != 0 )
    glwebtools::GlWebTools::Release(*((glwebtools::GlWebToolsCore::Self ***)self + 19));
  glwebtools::Mutex::Destroy((sociallib::GLWTManager::Self *)((char *)self + 80));
  glwebtools::UrlConnection::Destroy((sociallib::GLWTManager::Self *)((char *)self + 68));
  v9 = *((void **)self + 7);
  if ( v9 != nullptr )
  {
    v10 = *((void ***)self + 12);
    v11 = *((uint32_t *)self + 16) + 4;
    if ( v11 > (unsigned int)(uintptr_t)(v10) )
    {
      do
      {
        v12 = *v10++;
        opDelete(v12);
      }
      while ( v11 > (unsigned int)(uintptr_t)(v10) );
      v9 = *((void **)self + 7);
    }
    opDelete(v9);
  }
}

// ----------------------------------------------------------------------------
// Function: sociallib::GLWTManager::SendRequest  (binary VA: 0x1425560)
// Original: sociallib::GLWTManager::SendRequest
// ----------------------------------------------------------------------------
int sociallib::GLWTManager::SendRequest(int a1, int a2, int a3, uint32_t *a4, int a5, char a6)
{
  int result;
  int v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v9)) > _g4_s1 ? (28u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);

  *(uint8_t *)a1 = a6 ^ 1;
  *(uint8_t *)(a1 + 1) = 1;
  *(uint32_t *)(a1 + 16) = a2;
  *(uint32_t *)(a1 + 20) = 12;
  *(uint64_t *)(a1 + 8) = XP_API_GET_TIME();
  result = *(uint32_t *)(*a4 - 12);
  if ( result != 0 )
  {
    v7 = opNew(0x24u);
    *(uint32_t *)(v7 + 24) = (uint32_t)(uintptr_t)(&dword_213B814);
    *(uint32_t *)(v7 + 28) = (uint32_t)(uintptr_t)(&dword_213B814);
    *(uint32_t *)(v7 + 32) = (uint32_t)(uintptr_t)(&dword_213B814);
    *(uint32_t *)(v7 + 20) = a2;
    *(uint8_t *)(v7 + 4) = a6;
    *(uint32_t *)(v7 + 12) = a3;
    *(uint32_t *)v7 = 0;
    *(uint32_t *)(v7 + 8) = 0;
    *(uint8_t *)(v7 + 16) = 0;
    v8 = v7;
    g4_std::string::assign_str(v7 + 24, a4);
    g4_std::string::assign_str(v8 + 28, a5);
    g4_std_compat::string_assign(v8 + 32, &unk_1B15112, 0);
    v9[0] = v8;
    glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(a1 + 80));
    g4_std::deque_sociallib_GLWTManager_Se_a745fe::push_back(a1 + 28, v9);
    glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)(a1 + 80));
    glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(a1 + 80));
    return glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)(a1 + 80));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::GLWTManager::SendRequest  (binary VA: 0x14256a0)
// Original: sociallib::GLWTManager::SendRequest
// ----------------------------------------------------------------------------
void sociallib::GLWTManager::SendRequest(int a1, int a2, int a3, uint32_t *a4, uint32_t *a5, char a6)
{
  int v6;
  int v7[4];

  if ( *(uint32_t *)(*a4 - 12) != 0 && *(uint32_t *)(*a5 - 12) != 0 )
  {
    v6 = opNew(0x24u);
    *(uint32_t *)(v6 + 24) = (uint32_t)(uintptr_t)(&dword_213B814);
    *(uint32_t *)(v6 + 28) = (uint32_t)(uintptr_t)(&dword_213B814);
    *(uint32_t *)(v6 + 32) = (uint32_t)(uintptr_t)(&dword_213B814);
    *(uint32_t *)(v6 + 20) = a2;
    *(uint32_t *)v6 = 0;
    *(uint8_t *)(v6 + 4) = a6;
    *(uint32_t *)(v6 + 8) = a3;
    *(uint32_t *)(v6 + 12) = 0;
    *(uint8_t *)(v6 + 16) = 0;
    g4_std::string::assign_str(v6 + 24, a4);
    g4_std::string::assign_str(v6 + 28, a5);
    g4_std_compat::string_assign(v6 + 32, &unk_1B15112, 0);
    v7[0] = v6;
    glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(a1 + 80));
    g4_std::deque_sociallib_GLWTManager_Se_a745fe::push_back(a1 + 28, v7);
    glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)(a1 + 80));
    glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(a1 + 80));
    glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)(a1 + 80));
  }
  else
  {
    XP_DEBUG_OUT();
  }
}

// ----------------------------------------------------------------------------
// Function: sociallib::GLWTManager::Construct  (binary VA: 0x14257d0)
// Original: sociallib::GLWTManager::GLWTManager
// ----------------------------------------------------------------------------
void sociallib::GLWTManager::Construct(sociallib::GLWTManager::Self *self)
{
  sociallib::GLWTManager::Self *v1;
  int v2;
  int v3;
  int v4;
  int *v5;
  int *v6;
  uint32_t *v7;
  int v8;
  uint32_t *v9;
  int v10;
  void *v11;
  void **v12;
  unsigned int v13;
  void *v14;
  glwebtools::GlWebTools::Self *v15;
  void *v16;
  void *v17;
  void *v18;
  void *v19;
  void *v20;
  void *v21;
  typedef unsigned int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint8_t _g4_t_v24[8];
  typedef void *_g4_t_v25[2];
  typedef int *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef int *_g4_t_v28;
  typedef unsigned int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef uint8_t _g4_t_v34[32];
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_v22)) > _g4_s0 ? (4u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v23)) > _g4_s1 ? (8u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v24)) > _g4_s2 ? (24u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v25)) > _g4_s3 ? (32u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v26)) > _g4_s4 ? (40u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v27)) > _g4_s5 ? (44u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v28)) > _g4_s6 ? (48u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v29)) > _g4_s7 ? (52u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v30)) > _g4_s8 ? (56u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v31)) > _g4_s9 ? (60u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v32)) > _g4_s10 ? (64u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v33)) > _g4_s11 ? (68u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v34)) > _g4_s12 ? (72u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (104u + sizeof(_g4_t_v35)) > _g4_s13 ? (104u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (108u + sizeof(_g4_t_v36)) > _g4_s14 ? (108u + sizeof(_g4_t_v36)) : _g4_s14,
    _g4_s16 = (112u + sizeof(_g4_t_v37)) > _g4_s15 ? (112u + sizeof(_g4_t_v37)) : _g4_s15,
    _g4_s17 = (116u + sizeof(_g4_t_v38)) > _g4_s16 ? (116u + sizeof(_g4_t_v38)) : _g4_s16,
    _g4_s18 = (120u + sizeof(_g4_t_v39)) > _g4_s17 ? (120u + sizeof(_g4_t_v39)) : _g4_s17,
    _g4_s19 = (124u + sizeof(_g4_t_v40)) > _g4_s18 ? (124u + sizeof(_g4_t_v40)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 52u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 56u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 60u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 64u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 68u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 72u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 104u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 108u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 112u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 116u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 120u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 124u);

  v1 = self;
  v25[0] = nullptr;
  v25[1] = nullptr;
  v26 = nullptr;
  v27 = 0;
  v28 = nullptr;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  g4_std::Deque_base_sociallib_GLWTManager_Se_c95a1e::M_initialize_map(
    (std::_Deque_base<sociallib::GLWTManager::ServiceRequest *> *)v25,
    0);
  v2 = (int)(v33 - v29) >> 2;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  v3 = v2 - 1;
  v4 = v30 - v31;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  g4_std::Deque_base_sociallib_GLWTManager_Se_c95a1e::M_initialize_map(
    (sociallib::GLWTManager::Self *)((char *)self + 28),
    (v4 >> 2) + (v3 << 7) + v28 - v26);
  v23 = *((uint32_t *)self + 12);
  v22 = v29;
  v5 = v28;
  v6 = v26;
  v7 = *((uint32_t **)self + 9);
  v8 = ((v30 - v31) >> 2) + ((((int)(v33 - v29) >> 2) - 1) << 7) + v28 - v26;
  if ( v8 > 0 )
  {
    v9 = *((uint32_t **)self + 11);
    while ( 1 )
    {
      v10 = *v6++;
      *v7 = v10;
      if ( v6 == v5 )
      {
        ++v7;
        v6 = *(int **)(v22 + 4);
        v22 += 4;
        v5 = v6 + 128;
        if ( v7 == v9 )
          goto LABEL_7;
LABEL_4:
        if ( --v8 == 0 )
          goto LABEL_8;
      }
      else
      {
        if ( ++v7 != v9 )
          goto LABEL_4;
LABEL_7:
        v7 = *(uint32_t **)(v23 + 4);
        --v8;
        v23 += 4;
        v9 = v7 + 128;
        if ( v8 == 0 )
        {
LABEL_8:
          v1 = self;
          break;
        }
      }
    }
  }
  v11 = v25[0];
  if ( v25[0] != nullptr )
  {
    v12 = (void **)v29;
    v13 = v33 + 4;
    if ( v33 + 4 > v29 )
    {
      do
      {
        v14 = *v12++;
        opDelete(v14);
      }
      while ( v13 > (unsigned int)(uintptr_t)(v12) );
      v11 = v25[0];
    }
    opDelete(v11);
  }
  glwebtools::UrlConnection::Construct((sociallib::GLWTManager::Self *)((char *)v1 + 68));
  glwebtools::Mutex::Construct((sociallib::GLWTManager::Self *)((char *)v1 + 80));
  v15 = (glwebtools::GlWebTools::Self *)opNew(4u);
  glwebtools::GlWebTools::Construct(v15);
  *((uint32_t *)v1 + 19) = (uint32_t)(uintptr_t)(v15);
  if ( (uint8_t)glwebtools::GlWebTools::IsInitialized((glwebtools::GlWebToolsCore::Self **)v15) == 0 )
  {
    glwebtools::GlWebTools::CreationSettings::Construct((glwebtools::GlWebTools::CreationSettings::Self *)v34);
    glwebtools::GlWebTools::Initialize(
      *((glwebtools::GlWebTools::Self **)v1 + 19),
      (const glwebtools::GlWebTools::CreationSettings::Self *)v34);
    v16 = (void *)(v40 - 12);
    if ( (uint32_t *)(v40 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v40 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v16);
    }
    v17 = (void *)(v39 - 12);
    if ( (uint32_t *)(v39 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v17);
    }
    v18 = (void *)(v38 - 12);
    if ( (uint32_t *)(v38 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v38 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v18);
    }
    v19 = (void *)(v37 - 12);
    if ( (uint32_t *)(v37 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v19);
    }
    v20 = (void *)(v36 - 12);
    if ( (uint32_t *)(v36 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v36 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v20);
    }
    v21 = (void *)(v35 - 12);
    if ( (uint32_t *)(v35 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v35 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v21);
    }
  }
  glwebtools::GlWebTools::CreateUrlConnection((glwebtools::GlWebTools::Self *)v24, *((glwebtools::GlWebToolsCore::Self ***)v1 + 19));
  glwebtools::UrlConnection::opAssign(
    (sociallib::GLWTManager::Self *)((char *)v1 + 68),
    (const glwebtools::UrlConnection::Self *)v24);
  glwebtools::UrlConnection::Destroy((glwebtools::UrlConnection::Self *)v24);
  *((uint32_t *)v1 + 6) = 0;
  *((uint8_t *)v1 + 1) = 0;
  *((uint32_t *)v1 + 1) = -1;
  *((uint32_t *)v1 + 2) = 0;
  *((uint32_t *)v1 + 3) = 0;
  *((uint32_t *)v1 + 4) = -1;
  *((uint32_t *)v1 + 5) = 0;
}

// ----------------------------------------------------------------------------
// Function: sociallib::GLWTManager::appendEncodedParams  (binary VA: 0x1425bd0)
// Original: sociallib::GLWTManager::appendEncodedParams
// ----------------------------------------------------------------------------
uint32_t * sociallib::GLWTManager::appendEncodedParams(int a1, int a2, uint32_t *a3, uint32_t *a4, char a5)
{
  uint32_t *result;
  int v6;
  char *v7;
  char *v8;
  void *v9;
  void *v10;
  typedef void *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef void *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef char *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int (**_g4_t_v18)(int);
  typedef int _g4_t_v19;
  typedef int (**_g4_t_v20)(int);
  typedef uint32_t _g4_t_v21[3];
  typedef int _g4_t_v22;
  typedef void *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint8_t _g4_t_v26[4];
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef uint32_t _g4_t_v29[29];
  typedef char _g4_t_v30;
  typedef char _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (22u + sizeof(_g4_t_v12)) > _g4_s1 ? (22u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v13)) > _g4_s2 ? (32u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v14)) > _g4_s3 ? (36u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v15)) > _g4_s4 ? (40u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v16)) > _g4_s5 ? (44u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v17)) > _g4_s6 ? (48u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v18)) > _g4_s7 ? (52u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v19)) > _g4_s8 ? (56u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v20)) > _g4_s9 ? (60u + sizeof(_g4_t_v20)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v21)) > _g4_s10 ? (64u + sizeof(_g4_t_v21)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v22)) > _g4_s11 ? (76u + sizeof(_g4_t_v22)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v23)) > _g4_s12 ? (80u + sizeof(_g4_t_v23)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v24)) > _g4_s13 ? (84u + sizeof(_g4_t_v24)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v25)) > _g4_s14 ? (88u + sizeof(_g4_t_v25)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v26)) > _g4_s15 ? (92u + sizeof(_g4_t_v26)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v27)) > _g4_s16 ? (96u + sizeof(_g4_t_v27)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v28)) > _g4_s17 ? (100u + sizeof(_g4_t_v28)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v29)) > _g4_s18 ? (104u + sizeof(_g4_t_v29)) : _g4_s18,
    _g4_s20 = (220u + sizeof(_g4_t_v30)) > _g4_s19 ? (220u + sizeof(_g4_t_v30)) : _g4_s19,
    _g4_s21 = (221u + sizeof(_g4_t_v31)) > _g4_s20 ? (221u + sizeof(_g4_t_v31)) : _g4_s20,
    _g4_s22 = (224u + sizeof(_g4_t_v32)) > _g4_s21 ? (224u + sizeof(_g4_t_v32)) : _g4_s21,
    _g4_s23 = (228u + sizeof(_g4_t_v33)) > _g4_s22 ? (228u + sizeof(_g4_t_v33)) : _g4_s22,
    _g4_s24 = (232u + sizeof(_g4_t_v34)) > _g4_s23 ? (232u + sizeof(_g4_t_v34)) : _g4_s23,
    _g4_s25 = (236u + sizeof(_g4_t_v35)) > _g4_s24 ? (236u + sizeof(_g4_t_v35)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 22u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 52u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 56u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 60u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 64u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 76u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 80u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 84u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 88u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 92u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 96u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 100u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 104u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 220u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 221u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 224u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 228u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 232u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 236u);

  result = a3;
  if ( *(uint32_t *)(*a3 - 12) == 0 || *a4 == 0 && a5 == 0 )
    return result;
  g4_std::string::append_str(a2, a3);
  sub_1900810(v29);
  v29[28] = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v29[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v35 = 0;
  v18 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v18 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v19 = 0;
  sub_19119D0((char *)&v18 + (uint32_t)(uintptr_t)(*(v18 - 3)), 0);
  v20 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v21[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)&v21[-1] + (uint32_t)(uintptr_t)(*(v20 - 3)), 0);
  v18 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v18 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v21[1] = 0;
  v18 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v21[2] = 0;
  v22 = 0;
  v29[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v23 = nullptr;
  v24 = 0;
  v20 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v25 = 0;
  v21[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v26);
  v27 = 24;
  v21[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v28 = (int)(uintptr_t)(&dword_213B814);
  sub_19119D0(v29, v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), (char *)&unk_1B15112, (int)(uintptr_t)(&v12));
  g4_std_compat::string_assign((int)(uintptr_t)(&v28), v13, *((uint32_t *)v13 - 3));
  v6 = 0;
  if ( (v27 & 3) != 0 )
    v6 = *(uint32_t *)(v28 - 12);
  sub_1931CD0(v21, v28, 0, v6);
  v7 = (char *)v13 - 12;
  if ( (char *)v13 - 12 != (char *)dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)v13 - 1, 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  sub_192D8B0(&v20, *a4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), (char *)&unk_1B15112, (int)(uintptr_t)(&v12) + 1);
  v15 = (char *)&dword_213B814;
  if ( v24 != 0 )
  {
    if ( v24 <= (unsigned int)v22 )
    {
      sub_11A9950(&v16, v23, (uint8_t *)v22);
      g4_std::string::assign_str(&v15, &v16);
      v11 = (void *)(v16 - 12);
      if ( (uint32_t *)(v16 - 12) == dword_213B808
        || __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) > 0 )
      {
        goto LABEL_10;
      }
    }
    else
    {
      sub_11A9950(&v17, v23, (uint8_t *)v24);
      g4_std::string::assign_str(&v15, &v17);
      v11 = (void *)(v17 - 12);
      if ( (uint32_t *)(v17 - 12) == dword_213B808
        || __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) > 0 )
      {
        goto LABEL_10;
      }
    }
    g4_std::string::Rep::M_destroy(v11);
  }
  else
  {
    g4_std::string::assign_str(&v15, &v28);
  }
LABEL_10:
  glwebtools::Codec::EncodeUrlRFC3986(&v15, (int)(uintptr_t)(&v14));
  v8 = v15 - 12;
  if ( v15 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v15 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v8);
  g4_std::string::append_str(a2, &v14);
  v9 = (void *)(v14 - 12);
  if ( (uint32_t *)(v14 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  v18 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v29[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v20 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v21[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v10 = (void *)(v28 - 12);
  if ( (uint32_t *)(v28 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v10);
  }
  v21[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v26);
  v18 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v18 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v20 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v21[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  v18 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v18 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v19 = 0;
  v29[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  return (uint32_t *)sub_1900B90(v29);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GLWTManager::appendEncodedParams_ea1426110  (binary VA: 0x1426110)
// Original: sociallib::GLWTManager::appendEncodedParams
// ----------------------------------------------------------------------------
uint32_t * sociallib::GLWTManager::appendEncodedParams_ea1426110(int a1, int a2, uint32_t *a3, uint32_t *a4, char a5)
{
  uint32_t *result;
  int v6;
  char *v7;
  char *v8;
  void *v9;
  void *v10;
  typedef void *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef void *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef char *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int (**_g4_t_v18)(int);
  typedef int _g4_t_v19;
  typedef int (**_g4_t_v20)(int);
  typedef uint32_t _g4_t_v21[3];
  typedef int _g4_t_v22;
  typedef void *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint8_t _g4_t_v26[4];
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef uint32_t _g4_t_v29[29];
  typedef char _g4_t_v30;
  typedef char _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (22u + sizeof(_g4_t_v12)) > _g4_s1 ? (22u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v13)) > _g4_s2 ? (32u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v14)) > _g4_s3 ? (36u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v15)) > _g4_s4 ? (40u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v16)) > _g4_s5 ? (44u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v17)) > _g4_s6 ? (48u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v18)) > _g4_s7 ? (52u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v19)) > _g4_s8 ? (56u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v20)) > _g4_s9 ? (60u + sizeof(_g4_t_v20)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v21)) > _g4_s10 ? (64u + sizeof(_g4_t_v21)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v22)) > _g4_s11 ? (76u + sizeof(_g4_t_v22)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v23)) > _g4_s12 ? (80u + sizeof(_g4_t_v23)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v24)) > _g4_s13 ? (84u + sizeof(_g4_t_v24)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v25)) > _g4_s14 ? (88u + sizeof(_g4_t_v25)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v26)) > _g4_s15 ? (92u + sizeof(_g4_t_v26)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v27)) > _g4_s16 ? (96u + sizeof(_g4_t_v27)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v28)) > _g4_s17 ? (100u + sizeof(_g4_t_v28)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v29)) > _g4_s18 ? (104u + sizeof(_g4_t_v29)) : _g4_s18,
    _g4_s20 = (220u + sizeof(_g4_t_v30)) > _g4_s19 ? (220u + sizeof(_g4_t_v30)) : _g4_s19,
    _g4_s21 = (221u + sizeof(_g4_t_v31)) > _g4_s20 ? (221u + sizeof(_g4_t_v31)) : _g4_s20,
    _g4_s22 = (224u + sizeof(_g4_t_v32)) > _g4_s21 ? (224u + sizeof(_g4_t_v32)) : _g4_s21,
    _g4_s23 = (228u + sizeof(_g4_t_v33)) > _g4_s22 ? (228u + sizeof(_g4_t_v33)) : _g4_s22,
    _g4_s24 = (232u + sizeof(_g4_t_v34)) > _g4_s23 ? (232u + sizeof(_g4_t_v34)) : _g4_s23,
    _g4_s25 = (236u + sizeof(_g4_t_v35)) > _g4_s24 ? (236u + sizeof(_g4_t_v35)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 22u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 52u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 56u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 60u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 64u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 76u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 80u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 84u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 88u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 92u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 96u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 100u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 104u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 220u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 221u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 224u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 228u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 232u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 236u);

  result = a3;
  if ( *(uint32_t *)(*a3 - 12) == 0 || (int)*a4 <= 0 && (a5 == 0 || *a4 != 0) )
    return result;
  g4_std::string::append_str(a2, a3);
  sub_1900810(v29);
  v29[28] = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v29[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v35 = 0;
  v18 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v18 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v19 = 0;
  sub_19119D0((char *)&v18 + (uint32_t)(uintptr_t)(*(v18 - 3)), 0);
  v20 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v21[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)&v21[-1] + (uint32_t)(uintptr_t)(*(v20 - 3)), 0);
  v18 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v18 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v21[1] = 0;
  v18 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v21[2] = 0;
  v22 = 0;
  v29[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v23 = nullptr;
  v24 = 0;
  v20 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v25 = 0;
  v21[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v26);
  v27 = 24;
  v21[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v28 = (int)(uintptr_t)(&dword_213B814);
  sub_19119D0(v29, v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), (char *)&unk_1B15112, (int)(uintptr_t)(&v12));
  g4_std_compat::string_assign((int)(uintptr_t)(&v28), v13, *((uint32_t *)v13 - 3));
  v6 = 0;
  if ( (v27 & 3) != 0 )
    v6 = *(uint32_t *)(v28 - 12);
  sub_1931CD0(v21, v28, 0, v6);
  v7 = (char *)v13 - 12;
  if ( (char *)v13 - 12 != (char *)dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)v13 - 1, 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  g4_std::ostream::op_shl_int(&v20, *a4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), (char *)&unk_1B15112, (int)(uintptr_t)(&v12) + 1);
  v15 = (char *)&dword_213B814;
  if ( v24 != 0 )
  {
    if ( v24 <= (unsigned int)v22 )
    {
      sub_11A9950(&v16, v23, (uint8_t *)v22);
      g4_std::string::assign_str(&v15, &v16);
      v11 = (void *)(v16 - 12);
      if ( (uint32_t *)(v16 - 12) == dword_213B808
        || __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) > 0 )
      {
        goto LABEL_9;
      }
    }
    else
    {
      sub_11A9950(&v17, v23, (uint8_t *)v24);
      g4_std::string::assign_str(&v15, &v17);
      v11 = (void *)(v17 - 12);
      if ( (uint32_t *)(v17 - 12) == dword_213B808
        || __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) > 0 )
      {
        goto LABEL_9;
      }
    }
    g4_std::string::Rep::M_destroy(v11);
  }
  else
  {
    g4_std::string::assign_str(&v15, &v28);
  }
LABEL_9:
  glwebtools::Codec::EncodeUrlRFC3986(&v15, (int)(uintptr_t)(&v14));
  v8 = v15 - 12;
  if ( v15 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v15 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v8);
  g4_std::string::append_str(a2, &v14);
  v9 = (void *)(v14 - 12);
  if ( (uint32_t *)(v14 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  v18 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v29[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v20 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v21[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v10 = (void *)(v28 - 12);
  if ( (uint32_t *)(v28 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v10);
  }
  v21[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v26);
  v18 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v18 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v20 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v21[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  v18 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v18 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v19 = 0;
  v29[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  return (uint32_t *)sub_1900B90(v29);
}


