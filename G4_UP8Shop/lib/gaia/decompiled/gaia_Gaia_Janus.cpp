#include "Core/Utils/DecompTypes.h"
#include "gaia_Gaia_Janus.h"

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::CancelRequest  (binary VA: 0x1447500)
// Original: gaia::Gaia_Janus::CancelRequest
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::CancelRequest(glwebtools::Mutex::Self *a1, int a2)
{
  int v2;
  int v3;
  int Instance;
  int v6;
  glwebtools::Mutex::Self *v7;

  v2 = -21;
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    glwebtools::Mutex::Lock(a1);
    if ( *(uint32_t *)(gaia::Gaia::GetInstance() + 44) != 0 )
    {
      if ( a2 == 1 )
      {
        Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v7));
        gaia::ThreadManager::CancelRequest(Instance, 2500);
      }
      v3 = gaia::Gaia::GetInstance();
      v2 = gaia::BaseServiceManager::CancelRequest(*(uint32_t *)(v3 + 44), a2);
      glwebtools::Mutex::Unlock(a1);
    }
    else
    {
      v6 = gaia::Gaia::GetInstance();
      v2 = 0;
      gaia::BaseServiceManager::CancelRequest(*(uint32_t *)(v6 + 48), 3006);
      glwebtools::Mutex::Unlock(a1);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::IsLoggedIn  (binary VA: 0x14475d0)
// Original: gaia::Gaia_Janus::IsLoggedIn
// ----------------------------------------------------------------------------
bool gaia::Gaia_Janus::IsLoggedIn(int a1, int a2)
{
  bool result;
  int Instance;
  int v4;
  uint32_t *v5;
  uint32_t *v6;

  result = true;
  if ( a2 != 19 )
  {
    Instance = gaia::Gaia::GetInstance();
    v4 = Instance + 364;
    v5 = *(uint32_t **)(Instance + 368);
    v6 = (uint32_t *)v4;
    if ( v5 != nullptr )
    {
      do
      {
        while ( v5[4] >= a2 )
        {
          v6 = v5;
          v5 = (uint32_t *)v5[2];
          if ( v5 == nullptr )
            goto LABEL_7;
        }
        v5 = (uint32_t *)v5[3];
      }
      while ( v5 != nullptr );
LABEL_7:
      if ( (uint32_t *)v4 != v6 && v6[4] > a2 )
        v6 = (uint32_t *)v4;
    }
    return v6 != (uint32_t *)(gaia::Gaia::GetInstance() + 364);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::IsLoggedIn  (binary VA: 0x14476d0)
// Original: gaia::Gaia_Janus::IsLoggedIn
// ----------------------------------------------------------------------------
bool gaia::Gaia_Janus::IsLoggedIn(int a1, int a2, const void **a3)
{
  int Instance;
  int v4;
  uint32_t *v5;
  uint32_t *v6;
  volatile int32_t *v7;
  size_t v8;
  size_t v9;
  size_t n;
  int v11;
  bool result;
  typedef bool _g4_t_v13;
  typedef int _g4_t_v14;
  typedef const void *_g4_t_s2[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v13)) > _g4_s0 ? (12u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (26u + sizeof(_g4_t_v14)) > _g4_s1 ? (26u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_s2)) > _g4_s2 ? (28u + sizeof(_g4_t_s2)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 26u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 28u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(s2), (char *)&unk_1B15112, (int)(uintptr_t)(&v14));
  if ( a2 == 19 )
    goto LABEL_15;
  Instance = gaia::Gaia::GetInstance();
  v4 = Instance + 364;
  v5 = *(uint32_t **)(Instance + 368);
  v6 = (uint32_t *)v4;
  if ( v5 != nullptr )
  {
    do
    {
      while ( v5[4] >= a2 )
      {
        v6 = v5;
        v5 = (uint32_t *)v5[2];
        if ( v5 == nullptr )
          goto LABEL_7;
      }
      v5 = (uint32_t *)v5[3];
    }
    while ( v5 != nullptr );
LABEL_7:
    if ( (uint32_t *)v4 != v6 && v6[4] > a2 )
      v6 = (uint32_t *)v4;
  }
  if ( v6 == (uint32_t *)(gaia::Gaia::GetInstance() + 364) )
  {
LABEL_15:
    v7 = (volatile int32_t *)s2[0];
    result = false;
  }
  else
  {
    g4_std::string::assign_str(s2, v6 + 6);
    v7 = (volatile int32_t *)s2[0];
    v8 = *((uint32_t *)s2[0] - 3);
    v9 = *((uint32_t *)*a3 - 3);
    n = v9;
    if ( v8 <= v9 )
      n = *((uint32_t *)s2[0] - 3);
    v11 = memcmp(*a3, s2[0], n);
    result = false;
    if ( v11 == 0 )
      result = v9 == v8;
  }
  if ( v7 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v7 - 1, 0xFFFFFFFF) <= 0 )
  {
    v13 = result;
    g4_std::string::Rep::M_destroy((void *)(v7 - 3));
    return v13;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::GetJanusApprovals  (binary VA: 0x14477f0)
// Original: gaia::Gaia_Janus::GetJanusApprovals
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::GetJanusApprovals(glwebtools::Mutex::Self *a1, int a2, Json::Value::Self *a3)
{
  int JanusApprovals;
  int Instance;

  gaia::Gaia::GetInstance();
  JanusApprovals = -21;
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    LOWORD(JanusApprovals) = -303;
    glwebtools::Mutex::Lock(a1);
    if ( *(uint32_t *)(gaia::Gaia::GetInstance() + 44) != 0 )
    {
      Instance = gaia::Gaia::GetInstance();
      JanusApprovals = gaia::Janus::GetJanusApprovals(*(uint32_t *)(Instance + 44), a2, a3);
    }
    glwebtools::Mutex::Unlock(a1);
  }
  return JanusApprovals;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::GetJanusRefreshToken  (binary VA: 0x1447880)
// Original: gaia::Gaia_Janus::GetJanusRefreshToken
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::GetJanusRefreshToken(glwebtools::Mutex::Self *a1, int a2, int a3)
{
  int JanusRefreshToken;
  int Instance;

  gaia::Gaia::GetInstance();
  JanusRefreshToken = -21;
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    LOWORD(JanusRefreshToken) = -303;
    glwebtools::Mutex::Lock(a1);
    if ( *(uint32_t *)(gaia::Gaia::GetInstance() + 44) != 0 )
    {
      Instance = gaia::Gaia::GetInstance();
      JanusRefreshToken = gaia::Janus::GetJanusRefreshToken(*(gaia::Janus::Self **)(Instance + 44), a2, a3);
    }
    glwebtools::Mutex::Unlock(a1);
  }
  return JanusRefreshToken;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::GetJanusRefreshToken  (binary VA: 0x1447910)
// Original: gaia::Gaia_Janus::GetJanusRefreshToken
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::GetJanusRefreshToken(gaia::Gaia_Janus::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  Json::Value::Self *v3;
  int v4;
  void *v5;
  int JanusRefreshToken;
  void *v7;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (30u + sizeof(_g4_t_v10)) > _g4_s1 ? (30u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v11)) > _g4_s2 ? (32u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v12)) > _g4_s3 ? (36u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v13)) > _g4_s4 ? (40u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v14)) > _g4_s5 ? (44u + sizeof(_g4_t_v14)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 30u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), (char *)&unk_1B15112, (int)(uintptr_t)(&v10));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "accountType", (int)(uintptr_t)(&v10) + 1);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v13), 1);
    v2 = (void *)(v13 - 12);
    if ( (uint32_t *)(v13 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v14), "accountType", (int)(uintptr_t)(&v11));
      v3 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, v14);
      v4 = Json::Value::asInt(v3);
      v5 = (void *)(v14[0] - 12);
      if ( (uint32_t *)(v14[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v14[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        v9 = v4;
        g4_std::string::Rep::M_destroy(v5);
        v4 = v9;
      }
      JanusRefreshToken = gaia::Gaia_Janus::GetJanusRefreshToken(self, v4, (int)(uintptr_t)(&v12));
      gaia::GaiaRequest::SetResponse(a2, &v12);
      gaia::GaiaRequest::SetResponseCode(a2, JanusRefreshToken);
    }
    else
    {
      JanusRefreshToken = gaia::GaiaRequest::GetResponseCode(a2);
    }
    v7 = (void *)(v12 - 12);
    if ( (uint32_t *)(v12 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v12 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
  }
  else
  {
    JanusRefreshToken = -21;
    gaia::GaiaRequest::SetResponseCode(a2, -21);
  }
  return JanusRefreshToken;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::GetJanusToken  (binary VA: 0x1447b00)
// Original: gaia::Gaia_Janus::GetJanusToken
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::GetJanusToken(glwebtools::Mutex::Self *a1, int a2, int a3)
{
  int JanusToken;
  int Instance;

  gaia::Gaia::GetInstance();
  JanusToken = -21;
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    LOWORD(JanusToken) = -303;
    glwebtools::Mutex::Lock(a1);
    if ( *(uint32_t *)(gaia::Gaia::GetInstance() + 44) != 0 )
    {
      Instance = gaia::Gaia::GetInstance();
      JanusToken = gaia::Janus::GetJanusToken(*(gaia::Janus::Self **)(Instance + 44), a2, a3);
    }
    glwebtools::Mutex::Unlock(a1);
  }
  return JanusToken;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::GetJanusToken  (binary VA: 0x1447b90)
// Original: gaia::Gaia_Janus::GetJanusToken
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::GetJanusToken(int a1, glwebtools::Mutex::Self *a2)
{
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    glwebtools::Mutex::Lock(a2);
    if ( *(uint32_t *)(gaia::Gaia::GetInstance() + 44) != 0 )
    {
      gaia::Gaia::GetInstance();
      gaia::Janus::GetJanusToken(a1);
    }
    else
    {
      g4_std::string::construct_from_cstr(a1, "Token NOT Available", (int)(uintptr_t)(&v3) + 1);
    }
    glwebtools::Mutex::Unlock(a2);
  }
  else
  {
    g4_std::string::construct_from_cstr(a1, "Gaia not Initialized", (int)(uintptr_t)(&v3));
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::AuthorizeExclusive  (binary VA: 0x1447cb0)
// Original: gaia::Gaia_Janus::AuthorizeExclusive
// ----------------------------------------------------------------------------
char gaia::Gaia_Janus::AuthorizeExclusive(int a1, gaia::Gaia::Self *a2, uint32_t *a3, int a4, uint32_t *a5, uint32_t *a6, char a7, int a8, int a9)
{
  char IsInitialized;
  char result;
  int v11;
  int v12;
  uint32_t *v13;
  Json::Value::Self *v14;
  Json::Value::Self *v15;
  Json::Value::Self *v16;
  Json::Value::Self *v17;
  int Instance;
  typedef gaia::ThreadManager::Self *_g4_t_v19;
  typedef Json::Value::Self *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint8_t _g4_t_v22[16];
  typedef uint8_t _g4_t_v23[16];
  typedef uint8_t _g4_t_v24[16];
  typedef uint8_t _g4_t_v25[44];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v19)) > _g4_s0 ? (0u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (56u + sizeof(_g4_t_v20)) > _g4_s1 ? (56u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (60u + sizeof(_g4_t_v21)) > _g4_s2 ? (60u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v22)) > _g4_s3 ? (64u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (80u + sizeof(_g4_t_v23)) > _g4_s4 ? (80u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (96u + sizeof(_g4_t_v24)) > _g4_s5 ? (96u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (112u + sizeof(_g4_t_v25)) > _g4_s6 ? (112u + sizeof(_g4_t_v25)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 56u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 60u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 64u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 80u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 96u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 112u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    result = -22;
    if ( *(uint32_t *)(*a5 - 12) != 0 && *(uint32_t *)(*a6 - 12) != 0 && *(uint32_t *)(*a3 - 12) != 0 )
    {
      if ( a7 != 0 )
      {
        v13 = (uint32_t *)opNew(0x44u);
        *v13 = a9;
        v13[1] = a8;
        v13[2] = 2504;
        Json::Value::Construct((int)(uintptr_t)(v13 + 3), nullptr);
        v13[7] = 0;
        v13[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v13 + 9), nullptr);
        v13[13] = 0;
        v13[14] = 0;
        v13[15] = 0;
        v13[16] = 0;
        Json::Value::Construct((int)(uintptr_t)(v22), a3);
        v14 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "scope");
        Json::Value::opAssign(v14, (const Json::Value::Self *)v22);
        Json::Value::Destroy((Json::Value::Self *)v22);
        Json::Value::Construct((Json::Value::Self *)v23, a4);
        v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "accountType");
        Json::Value::opAssign(v15, (const Json::Value::Self *)v23);
        Json::Value::Destroy((Json::Value::Self *)v23);
        Json::Value::Construct((int)(uintptr_t)(v24), a5);
        v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "username");
        Json::Value::opAssign(v16, (const Json::Value::Self *)v24);
        Json::Value::Destroy((Json::Value::Self *)v24);
        Json::Value::Construct((int)(uintptr_t)(v25), a6);
        v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "password");
        Json::Value::opAssign(v17, (const Json::Value::Self *)v25);
        Json::Value::Destroy((Json::Value::Self *)v25);
        v13[15] = (uint32_t)(uintptr_t)(a2);
        Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v19));
        return gaia::ThreadManager::pushTask(Instance, v13);
      }
      else
      {
        g4_std_compat::string_assign((int)(uintptr_t)(a2), &unk_1B15112, 0);
        v11 = *(uint32_t *)(gaia::Gaia::GetInstance() + 388);
        v20 = (Json::Value::Self *)gaia::Gaia::GetInstance();
        v21 = gaia::Gaia::GetInstance();
        v12 = gaia::Gaia::GetInstance();
        return gaia::Janus::AuthorizeExclusive(
                 *(uint32_t *)(v12 + 44),
                 a2,
                 a5,
                 a6,
                 a4,
                 a3,
                 v21 + 340,
                 1,
                 (char *)v20 + 384,
                 v11,
                 nullptr);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::GetJanusStatus  (binary VA: 0x144b040)
// Original: gaia::Gaia_Janus::GetJanusStatus
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::GetJanusStatus(gaia::Gaia_Janus::Self *self)
{
  int ServiceUrl;
  glwebtools::Mutex::Self *v2;
  int Instance;
  typedef gaia::BaseServiceManager::Self *_g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v7)) > _g4_s2 ? (27u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 27u);

  ServiceUrl = -21;
  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    v2 = (glwebtools::Mutex::Self *)(gaia::Gaia::GetInstance() + 480);
    glwebtools::Mutex::Lock(v2);
    ServiceUrl = 0;
    if ( *(uint32_t *)(gaia::Gaia::GetInstance() + 44) == 0 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v7) + 1, (char *)&unk_1B15112, (int)(uintptr_t)(v7));
      Instance = gaia::Gaia::GetInstance();
      ServiceUrl = gaia::Gaia::GetServiceUrl(Instance, "auth", (int)(uintptr_t)(v7) + 1, 0, 0, 0);
      glwebtools::Mutex::Lock(self);
      if ( ServiceUrl != 0
        || (v6 = gaia::Gaia::GetInstance(),
            v5 = (gaia::BaseServiceManager::Self *)opNew(0xC4u),
            gaia::Janus::Construct(v5, (int)(uintptr_t)(v7) + 1, v6 + 240),
            *(uint32_t *)(gaia::Gaia::GetInstance() + 44) = (uint32_t)(uintptr_t)(v5),
            *(uint32_t *)(gaia::Gaia::GetInstance() + 44) == 0) )
      {
        ServiceUrl = -1;
        glwebtools::Mutex::Unlock(self);
        g4_std::string::Destroy((char *)v7 + 1);
      }
      else
      {
        glwebtools::Mutex::Unlock(self);
        g4_std::string::Destroy((char *)v7 + 1);
      }
    }
    glwebtools::Mutex::Unlock(v2);
  }
  return ServiceUrl;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::ChangePassword  (binary VA: 0x144b1b0)
// Original: gaia::Gaia_Janus::ChangePassword
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::ChangePassword(gaia::Gaia_Janus::Self *self, gaia::GaiaRequest::Self *a2)
{
  char IsInitialized;
  int result;
  void *v4;
  void *v5;
  void *v6;
  void *v7;
  void *v8;
  int JanusStatus;
  int v10;
  void *v11;
  void *v12;
  int v13;
  void *v14;
  void *v15;
  int v16;
  void *v17;
  void *v18;
  Json::Value::Self *v19;
  bool isNull;
  int v21;
  void *v22;
  int Instance;
  void *v24;
  void *v25;
  void *v26;
  void *v27;
  void *v28;
  int v29;
  void *v30;
  void *v31;
  typedef Json::Value::Self *_g4_t_started;
  typedef Json::Value::Self *_g4_t_v33;
  typedef Json::Value::Self *_g4_t_v34;
  typedef Json::Value::Self *_g4_t_v35;
  typedef Json::Value::Self *_g4_t_v36;
  typedef Json::Value::Self *_g4_t_v37;
  typedef Json::Value::Self *_g4_t_v38;
  typedef Json::Value::Self *_g4_t_v39;
  typedef bool _g4_t_v40;
  typedef Json::Value::Self *_g4_t_v41;
  typedef int _g4_t_v42;
  typedef char *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef uint8_t _g4_t_v70[16];
  typedef uint8_t _g4_t_v71[96];
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (8u + sizeof(_g4_t_started)) > _g4_s0 ? (8u + sizeof(_g4_t_started)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v33)) > _g4_s1 ? (8u + sizeof(_g4_t_v33)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v34)) > _g4_s2 ? (8u + sizeof(_g4_t_v34)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v35)) > _g4_s3 ? (8u + sizeof(_g4_t_v35)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v36)) > _g4_s4 ? (8u + sizeof(_g4_t_v36)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v37)) > _g4_s5 ? (8u + sizeof(_g4_t_v37)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v38)) > _g4_s6 ? (8u + sizeof(_g4_t_v38)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v39)) > _g4_s7 ? (8u + sizeof(_g4_t_v39)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v40)) > _g4_s8 ? (8u + sizeof(_g4_t_v40)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v41)) > _g4_s9 ? (8u + sizeof(_g4_t_v41)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v42)) > _g4_s10 ? (12u + sizeof(_g4_t_v42)) : _g4_s10,
    _g4_s12 = (16u + sizeof(_g4_t_v43)) > _g4_s11 ? (16u + sizeof(_g4_t_v43)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v44)) > _g4_s12 ? (40u + sizeof(_g4_t_v44)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v45)) > _g4_s13 ? (44u + sizeof(_g4_t_v45)) : _g4_s13,
    _g4_s15 = (50u + sizeof(_g4_t_v46)) > _g4_s14 ? (50u + sizeof(_g4_t_v46)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v47)) > _g4_s15 ? (52u + sizeof(_g4_t_v47)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v48)) > _g4_s16 ? (56u + sizeof(_g4_t_v48)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v49)) > _g4_s17 ? (60u + sizeof(_g4_t_v49)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v50)) > _g4_s18 ? (76u + sizeof(_g4_t_v50)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v51)) > _g4_s19 ? (80u + sizeof(_g4_t_v51)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v52)) > _g4_s20 ? (84u + sizeof(_g4_t_v52)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v53)) > _g4_s21 ? (88u + sizeof(_g4_t_v53)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_v54)) > _g4_s22 ? (92u + sizeof(_g4_t_v54)) : _g4_s22,
    _g4_s24 = (96u + sizeof(_g4_t_v55)) > _g4_s23 ? (96u + sizeof(_g4_t_v55)) : _g4_s23,
    _g4_s25 = (100u + sizeof(_g4_t_v56)) > _g4_s24 ? (100u + sizeof(_g4_t_v56)) : _g4_s24,
    _g4_s26 = (104u + sizeof(_g4_t_v57)) > _g4_s25 ? (104u + sizeof(_g4_t_v57)) : _g4_s25,
    _g4_s27 = (108u + sizeof(_g4_t_v58)) > _g4_s26 ? (108u + sizeof(_g4_t_v58)) : _g4_s26,
    _g4_s28 = (112u + sizeof(_g4_t_v59)) > _g4_s27 ? (112u + sizeof(_g4_t_v59)) : _g4_s27,
    _g4_s29 = (116u + sizeof(_g4_t_v60)) > _g4_s28 ? (116u + sizeof(_g4_t_v60)) : _g4_s28,
    _g4_s30 = (120u + sizeof(_g4_t_v61)) > _g4_s29 ? (120u + sizeof(_g4_t_v61)) : _g4_s29,
    _g4_s31 = (124u + sizeof(_g4_t_v62)) > _g4_s30 ? (124u + sizeof(_g4_t_v62)) : _g4_s30,
    _g4_s32 = (128u + sizeof(_g4_t_v63)) > _g4_s31 ? (128u + sizeof(_g4_t_v63)) : _g4_s31,
    _g4_s33 = (132u + sizeof(_g4_t_v64)) > _g4_s32 ? (132u + sizeof(_g4_t_v64)) : _g4_s32,
    _g4_s34 = (136u + sizeof(_g4_t_v65)) > _g4_s33 ? (136u + sizeof(_g4_t_v65)) : _g4_s33,
    _g4_s35 = (140u + sizeof(_g4_t_v66)) > _g4_s34 ? (140u + sizeof(_g4_t_v66)) : _g4_s34,
    _g4_s36 = (144u + sizeof(_g4_t_v67)) > _g4_s35 ? (144u + sizeof(_g4_t_v67)) : _g4_s35,
    _g4_s37 = (148u + sizeof(_g4_t_v68)) > _g4_s36 ? (148u + sizeof(_g4_t_v68)) : _g4_s36,
    _g4_s38 = (152u + sizeof(_g4_t_v69)) > _g4_s37 ? (152u + sizeof(_g4_t_v69)) : _g4_s37,
    _g4_s39 = (156u + sizeof(_g4_t_v70)) > _g4_s38 ? (156u + sizeof(_g4_t_v70)) : _g4_s38,
    _g4_s40 = (172u + sizeof(_g4_t_v71)) > _g4_s39 ? (172u + sizeof(_g4_t_v71)) : _g4_s39
  };
  alignas(16) uint8_t _g4_sf[_g4_s40];
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 8u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 8u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 8u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 8u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 8u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 8u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 8u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 8u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 8u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 8u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 12u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 16u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 40u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 44u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 50u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 52u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 56u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 60u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 76u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 80u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 84u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 88u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 92u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 96u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 100u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 104u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 108u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 112u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 116u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 120u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 124u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 128u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 132u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 136u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 140u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 144u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 148u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 152u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 156u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 172u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v50), "accountType", (int)(uintptr_t)(&v44));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v50), 1);
    v4 = (void *)(v50 - 12);
    if ( (uint32_t *)(v50 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v50 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v51), "username", (int)(uintptr_t)(&v44) + 1);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v51), 4);
    v5 = (void *)(v51 - 12);
    if ( (uint32_t *)(v51 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v51 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v52), "old_password", (int)(uintptr_t)(&v44) + 2);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v52), 4);
    v6 = (void *)(v52 - 12);
    if ( (uint32_t *)(v52 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v52 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v53), "new_password", (int)(uintptr_t)(&v44) + 3);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v53), 4);
    v7 = (void *)(v53 - 12);
    if ( (uint32_t *)(v53 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v53 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v54), "gamespace", (int)(uintptr_t)(&v45));
    gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v54), 4);
    v8 = (void *)(v54 - 12);
    if ( (uint32_t *)(v54 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v54 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v8);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 2524);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v71, a2);
        started = (Json::Value::Self *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v71);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v71);
        return (int)(uintptr_t)(started);
      }
      else
      {
        JanusStatus = gaia::Gaia_Janus::GetJanusStatus(self);
        if ( JanusStatus != 0 )
        {
          v34 = (Json::Value::Self *)JanusStatus;
          gaia::GaiaRequest::SetResponseCode(a2, JanusStatus);
          return (int)(uintptr_t)(v34);
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v55), (char *)&unk_1B15112, (int)(uintptr_t)(&v46));
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v56), (char *)&unk_1B15112, (int)(uintptr_t)(&v46) + 1);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v57), (char *)&unk_1B15112, (int)(uintptr_t)(&v47));
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v58), (char *)&unk_1B15112, (int)(uintptr_t)(&v47) + 1);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v59), (char *)&unk_1B15112, (int)(uintptr_t)(&v47) + 2);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v70, (const char *)a2);
          v42 = Json::Value::asInt((Json::Value::Self *)v70);
          Json::Value::Destroy((Json::Value::Self *)v70);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v61), "username", (int)(uintptr_t)(&v47) + 3);
          v10 = gaia::GaiaRequest::opIndex(a2, &v61);
          Json::Value::asString((Json::Value::Self *)&v60, v10);
          g4_std::string::assign_str(&v56, &v60);
          v11 = (void *)(v60 - 12);
          if ( (uint32_t *)(v60 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v60 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v11);
          }
          v12 = (void *)(v61 - 12);
          if ( (uint32_t *)(v61 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v61 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v12);
          }
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v63), "old_password", (int)(uintptr_t)(&v48));
          v13 = gaia::GaiaRequest::opIndex(a2, &v63);
          Json::Value::asString((Json::Value::Self *)&v62, v13);
          g4_std::string::assign_str(&v57, &v62);
          v14 = (void *)(v62 - 12);
          if ( (uint32_t *)(v62 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v62 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v14);
          }
          v15 = (void *)(v63 - 12);
          if ( (uint32_t *)(v63 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v63 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v15);
          }
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v65), "new_password", (int)(uintptr_t)(&v48) + 1);
          v16 = gaia::GaiaRequest::opIndex(a2, &v65);
          Json::Value::asString((Json::Value::Self *)&v64, v16);
          g4_std::string::assign_str(&v58, &v64);
          v17 = (void *)(v64 - 12);
          if ( (uint32_t *)(v64 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v64 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v17);
          }
          v18 = (void *)(v65 - 12);
          if ( (uint32_t *)(v65 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v65 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v18);
          }
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v66), "gamespace", (int)(uintptr_t)(&v48) + 2);
          v19 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v66);
          isNull = Json::Value::isNull(v19);
          v43 = (char *)(v66 - 12);
          if ( (uint32_t *)(v66 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v66 - 4), 0xFFFFFFFF) <= 0 )
          {
            v40 = isNull;
            g4_std::string::Rep::M_destroy(v43);
            isNull = v40;
          }
          if ( !isNull )
          {
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v68), "gamespace", (int)(uintptr_t)(&v48) + 3);
            v29 = gaia::GaiaRequest::opIndex(a2, &v68);
            Json::Value::asString((Json::Value::Self *)&v67, v29);
            g4_std::string::assign_str(&v59, &v67);
            v30 = (void *)(v67 - 12);
            if ( (uint32_t *)(v67 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v67 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v30);
            }
            v31 = (void *)(v68 - 12);
            if ( (uint32_t *)(v68 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v68 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v31);
            }
          }
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v69), "auth_change_password", (int)(uintptr_t)(&v49));
          LOBYTE(v21) = gaia::Gaia_Janus::AuthorizeExclusive(
                          (int)(uintptr_t)(self),
                          (gaia::Gaia::Self *)&v55,
                          &v69,
                          v42,
                          &v56,
                          &v57,
                          0,
                          0,
                          0);
          v22 = (void *)(v69 - 12);
          if ( (uint32_t *)(v69 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v69 - 4), 0xFFFFFFFF) <= 0 )
          {
            v41 = (Json::Value::Self *)v21;
            g4_std::string::Rep::M_destroy(v22);
            v21 = (int)(uintptr_t)(v41);
          }
          if ( v21 != 0 )
          {
            v33 = (Json::Value::Self *)v21;
            gaia::GaiaRequest::SetResponseCode(a2, v21);
            result = (int)(uintptr_t)(v33);
          }
          else
          {
            Instance = gaia::Gaia::GetInstance();
            result = gaia::Janus::ChangePassword(
                       *(gaia::BaseServiceManager::Self **)(Instance + 44),
                       (int)(uintptr_t)(&v55),
                       v42,
                       (int)(uintptr_t)(&v56),
                       (int)(uintptr_t)(&v58),
                       (int)(uintptr_t)(&v59),
                       (int)(uintptr_t)(a2));
          }
          v24 = (void *)(v59 - 12);
          if ( (uint32_t *)(v59 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v59 - 4), 0xFFFFFFFF) <= 0 )
          {
            v39 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v24);
            result = (int)(uintptr_t)(v39);
          }
          v25 = (void *)(v58 - 12);
          if ( (uint32_t *)(v58 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v58 - 4), 0xFFFFFFFF) <= 0 )
          {
            v37 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v25);
            result = (int)(uintptr_t)(v37);
          }
          v26 = (void *)(v57 - 12);
          if ( (uint32_t *)(v57 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v57 - 4), 0xFFFFFFFF) <= 0 )
          {
            v36 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v26);
            result = (int)(uintptr_t)(v36);
          }
          v27 = (void *)(v56 - 12);
          if ( (uint32_t *)(v56 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v56 - 4), 0xFFFFFFFF) <= 0 )
          {
            v38 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v27);
            result = (int)(uintptr_t)(v38);
          }
          v28 = (void *)(v55 - 12);
          if ( (uint32_t *)(v55 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v55 - 4), 0xFFFFFFFF) <= 0 )
          {
            v35 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v28);
            return (int)(uintptr_t)(v35);
          }
        }
      }
    }
    else
    {
      return gaia::GaiaRequest::GetResponseCode(a2);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::ChangePassword  (binary VA: 0x144bc00)
// Original: gaia::Gaia_Janus::ChangePassword
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::ChangePassword(gaia::Gaia_Janus::Self *a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, char a7, int a8, int a9)
{
  Json::Value::Self *v9;
  void *v10;
  Json::Value::Self *v11;
  void *v12;
  Json::Value::Self *v13;
  void *v14;
  Json::Value::Self *v15;
  void *v16;
  Json::Value::Self *v17;
  void *v18;
  int v19;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint8_t _g4_t_v28[16];
  typedef uint8_t _g4_t_v29[16];
  typedef uint8_t _g4_t_v30[16];
  typedef uint8_t _g4_t_v31[16];
  typedef uint8_t _g4_t_v32[16];
  typedef uint8_t _g4_t_v33[96];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (14u + sizeof(_g4_t_v21)) > _g4_s0 ? (14u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v22)) > _g4_s1 ? (16u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v23)) > _g4_s2 ? (24u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v24)) > _g4_s3 ? (28u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v25)) > _g4_s4 ? (32u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v26)) > _g4_s5 ? (36u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v27)) > _g4_s6 ? (40u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v28)) > _g4_s7 ? (44u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v29)) > _g4_s8 ? (60u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v30)) > _g4_s9 ? (76u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_v31)) > _g4_s10 ? (92u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (108u + sizeof(_g4_t_v32)) > _g4_s11 ? (108u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (124u + sizeof(_g4_t_v33)) > _g4_s12 ? (124u + sizeof(_g4_t_v33)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 14u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 36u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 40u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 44u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 60u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 76u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 92u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 108u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 124u);

  gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v33);
  Json::Value::Construct((Json::Value::Self *)v28, a2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "accountType", (int)(uintptr_t)(&v21));
  v9 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(v33, &v23);
  Json::Value::opAssign(v9, (const Json::Value::Self *)v28);
  v10 = (void *)(v23 - 12);
  if ( (uint32_t *)(v23 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v10);
  }
  Json::Value::Destroy((Json::Value::Self *)v28);
  Json::Value::Construct((int)(uintptr_t)(v29), a3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "username", (int)(uintptr_t)(&v21) + 1);
  v11 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(v33, &v24);
  Json::Value::opAssign(v11, (const Json::Value::Self *)v29);
  v12 = (void *)(v24 - 12);
  if ( (uint32_t *)(v24 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v12);
  }
  Json::Value::Destroy((Json::Value::Self *)v29);
  Json::Value::Construct((int)(uintptr_t)(v30), a4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "old_password", (int)(uintptr_t)(&v22));
  v13 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(v33, &v25);
  Json::Value::opAssign(v13, (const Json::Value::Self *)v30);
  v14 = (void *)(v25 - 12);
  if ( (uint32_t *)(v25 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v14);
  }
  Json::Value::Destroy((Json::Value::Self *)v30);
  Json::Value::Construct((int)(uintptr_t)(v31), a5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "new_password", (int)(uintptr_t)(&v22) + 1);
  v15 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(v33, &v26);
  Json::Value::opAssign(v15, (const Json::Value::Self *)v31);
  v16 = (void *)(v26 - 12);
  if ( (uint32_t *)(v26 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v16);
  }
  Json::Value::Destroy((Json::Value::Self *)v31);
  Json::Value::Construct((int)(uintptr_t)(v32), a6);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "gamespace", (int)(uintptr_t)(&v22) + 2);
  v17 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(v33, &v27);
  Json::Value::opAssign(v17, (const Json::Value::Self *)v32);
  v18 = (void *)(v27 - 12);
  if ( (uint32_t *)(v27 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v18);
  }
  Json::Value::Destroy((Json::Value::Self *)v32);
  if ( a7 != 0 )
    gaia::GaiaRequest::SetRunAsynchronous(v33, a8, a9);
  v19 = gaia::Gaia_Janus::ChangePassword(a1, (gaia::GaiaRequest::Self *)v33);
  gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v33);
  return v19;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::RefreshAccessToken  (binary VA: 0x144bf50)
// Original: gaia::Gaia_Janus::RefreshAccessToken
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::RefreshAccessToken(gaia::Gaia_Janus::Self *a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, char a6, int a7, int a8)
{
  char IsInitialized;
  int result;
  int v10;
  int v11;
  void *v12;
  uint32_t *v13;
  Json::Value::Self *v14;
  Json::Value::Self *v15;
  Json::Value::Self *v16;
  int Instance;
  typedef gaia::ThreadManager::Self *_g4_t_v18;
  typedef Json::Value::Self *_g4_t_v19;
  typedef uint16_t _g4_t_v20[3];
  typedef uint8_t _g4_t_v21[16];
  typedef uint8_t _g4_t_v22[16];
  typedef uint8_t _g4_t_v23[28];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v18)) > _g4_s0 ? (0u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v19)) > _g4_s1 ? (44u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (58u + sizeof(_g4_t_v20)) > _g4_s2 ? (58u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v21)) > _g4_s3 ? (64u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (80u + sizeof(_g4_t_v22)) > _g4_s4 ? (80u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (96u + sizeof(_g4_t_v23)) > _g4_s5 ? (96u + sizeof(_g4_t_v23)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 58u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 64u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 80u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 96u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    if ( a6 != 0 )
    {
      v13 = (uint32_t *)opNew(0x44u);
      *v13 = a8;
      v13[1] = a7;
      v13[2] = 2519;
      Json::Value::Construct((int)(uintptr_t)(v13 + 3), nullptr);
      v13[7] = 0;
      v13[8] = 0;
      Json::Value::Construct((int)(uintptr_t)(v13 + 9), nullptr);
      v13[13] = 0;
      v13[14] = 0;
      v13[15] = 0;
      v13[16] = 0;
      Json::Value::Construct((int)(uintptr_t)(v21), a3);
      v14 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "grant_type");
      Json::Value::opAssign(v14, (const Json::Value::Self *)v21);
      Json::Value::Destroy((Json::Value::Self *)v21);
      Json::Value::Construct((int)(uintptr_t)(v22), a4);
      v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "refresh_token");
      Json::Value::opAssign(v15, (const Json::Value::Self *)v22);
      Json::Value::Destroy((Json::Value::Self *)v22);
      v13[15] = a2;
      Json::Value::Construct((int)(uintptr_t)(v23), a5);
      v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "scope");
      Json::Value::opAssign(v16, (const Json::Value::Self *)v23);
      Json::Value::Destroy((Json::Value::Self *)v23);
      Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v18));
      return gaia::ThreadManager::pushTask(Instance, v13);
    }
    else
    {
      result = gaia::Gaia_Janus::GetJanusStatus(a1);
      if ( result == 0 )
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20[1]), "refresh_token", (int)(uintptr_t)(v20));
        v10 = gaia::Gaia::GetInstance();
        v11 = gaia::Gaia::GetInstance();
        result = gaia::Janus::RefreshAccessToken(*(uint32_t *)(v11 + 44), a2, v10 + 240, &v20[1], a4, a5, nullptr);
        v12 = (void *)(*(uint32_t *)&v20[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v20[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v20[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          v19 = (Json::Value::Self *)result;
          g4_std::string::Rep::M_destroy(v12);
          return (int)(uintptr_t)(v19);
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::EncryptToken  (binary VA: 0x144c260)
// Original: gaia::Gaia_Janus::EncryptToken
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::EncryptToken(gaia::Gaia::Self *a1, uint32_t *a2, uint32_t *a3, void **a4, int *a5, char a6, int a7, int a8)
{
  char IsInitialized;
  int result;
  int v10;
  uint32_t *v11;
  Json::Value::Self *v12;
  Json::Value::Self *v13;
  int Instance;
  typedef gaia::ThreadManager::Self *_g4_t_v15;
  typedef uint8_t _g4_t_v16[16];
  typedef uint8_t _g4_t_v17[28];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (48u + sizeof(_g4_t_v16)) > _g4_s1 ? (48u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_v17)) > _g4_s2 ? (64u + sizeof(_g4_t_v17)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 48u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 64u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    if ( a6 != 0 )
    {
      v11 = (uint32_t *)opNew(0x44u);
      *v11 = a8;
      v11[1] = a7;
      v11[2] = 2517;
      Json::Value::Construct((int)(uintptr_t)(v11 + 3), nullptr);
      v11[7] = 0;
      v11[8] = 0;
      Json::Value::Construct((int)(uintptr_t)(v11 + 9), nullptr);
      v11[13] = 0;
      v11[14] = 0;
      v11[15] = 0;
      v11[16] = 0;
      Json::Value::Construct((int)(uintptr_t)(v16), a2);
      v12 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v11 + 3), "token");
      Json::Value::opAssign(v12, (const Json::Value::Self *)v16);
      Json::Value::Destroy((Json::Value::Self *)v16);
      Json::Value::Construct((int)(uintptr_t)(v17), a3);
      v13 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v11 + 3), "nonce");
      Json::Value::opAssign(v13, (const Json::Value::Self *)v17);
      Json::Value::Destroy((Json::Value::Self *)v17);
      v11[16] = (uint32_t)(uintptr_t)(a5);
      v11[15] = (uint32_t)(uintptr_t)(a4);
      Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v15));
      return gaia::ThreadManager::pushTask(Instance, v11);
    }
    else
    {
      result = gaia::Gaia_Janus::GetJanusStatus((gaia::Gaia_Janus::Self *)(a1));
      if ( result == 0 )
      {
        v10 = gaia::Gaia::GetInstance();
        return gaia::Janus::EncryptToken(*(gaia::BaseServiceManager::Self **)(v10 + 44), (int)(uintptr_t)(a2), (int)(uintptr_t)(a3), a4, a5, 0);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::RetrievePassword  (binary VA: 0x144c4a0)
// Original: gaia::Gaia_Janus::RetrievePassword
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::RetrievePassword(gaia::Gaia::Self *a1, uint32_t *a2, int a3, char a4, int a5, int a6)
{
  char IsInitialized;
  int result;
  int v8;
  uint32_t *v9;
  Json::Value::Self *v10;
  Json::Value::Self *v11;
  int Instance;
  typedef gaia::ThreadManager::Self *_g4_t_v13;
  typedef uint8_t _g4_t_v14[16];
  typedef uint8_t _g4_t_v15[28];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v14)) > _g4_s1 ? (32u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v15)) > _g4_s2 ? (48u + sizeof(_g4_t_v15)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 48u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    if ( a4 != 0 )
    {
      v9 = (uint32_t *)opNew(0x44u);
      *v9 = a6;
      v9[1] = a5;
      v9[2] = 2512;
      Json::Value::Construct((int)(uintptr_t)(v9 + 3), nullptr);
      v9[7] = 0;
      v9[8] = 0;
      Json::Value::Construct((int)(uintptr_t)(v9 + 9), nullptr);
      v9[13] = 0;
      v9[14] = 0;
      v9[15] = 0;
      v9[16] = 0;
      Json::Value::Construct((Json::Value::Self *)v14, a3);
      v10 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v9 + 3), "accountType");
      Json::Value::opAssign(v10, (const Json::Value::Self *)v14);
      Json::Value::Destroy((Json::Value::Self *)v14);
      Json::Value::Construct((int)(uintptr_t)(v15), a2);
      v11 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v9 + 3), "username");
      Json::Value::opAssign(v11, (const Json::Value::Self *)v15);
      Json::Value::Destroy((Json::Value::Self *)v15);
      Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v13));
      return gaia::ThreadManager::pushTask(Instance, v9);
    }
    else
    {
      result = gaia::Gaia_Janus::GetJanusStatus((gaia::Gaia_Janus::Self *)(a1));
      if ( result == 0 )
      {
        v8 = gaia::Gaia::GetInstance();
        return gaia::Janus::RetrievePassword(*(gaia::BaseServiceManager::Self **)(v8 + 44), (int)(uintptr_t)(a2), a3, 0);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::CreateAccount  (binary VA: 0x144c6a0)
// Original: gaia::Gaia_Janus::CreateAccount
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::CreateAccount(gaia::Gaia::Self *a1, uint32_t *a2, int a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, char a7, int a8, int a9)
{
  char IsInitialized;
  int result;
  int v11;
  uint32_t *v12;
  Json::Value::Self *v13;
  Json::Value::Self *v14;
  Json::Value::Self *v15;
  Json::Value::Self *v16;
  Json::Value::Self *v17;
  int Instance;
  typedef gaia::ThreadManager::Self *_g4_t_v19;
  typedef uint8_t _g4_t_v20[16];
  typedef uint8_t _g4_t_v21[16];
  typedef uint8_t _g4_t_v22[16];
  typedef uint8_t _g4_t_v23[16];
  typedef uint8_t _g4_t_v24[28];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v19)) > _g4_s0 ? (0u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v20)) > _g4_s1 ? (32u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v21)) > _g4_s2 ? (48u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v22)) > _g4_s3 ? (64u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (80u + sizeof(_g4_t_v23)) > _g4_s4 ? (80u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (96u + sizeof(_g4_t_v24)) > _g4_s5 ? (96u + sizeof(_g4_t_v24)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 64u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 80u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 96u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    if ( a7 != 0 )
    {
      v12 = (uint32_t *)opNew(0x44u);
      *v12 = a9;
      v12[1] = a8;
      v12[2] = 2511;
      Json::Value::Construct((int)(uintptr_t)(v12 + 3), nullptr);
      v12[7] = 0;
      v12[8] = 0;
      Json::Value::Construct((int)(uintptr_t)(v12 + 9), nullptr);
      v12[13] = 0;
      v12[14] = 0;
      v12[15] = 0;
      v12[16] = 0;
      Json::Value::Construct((Json::Value::Self *)v20, a3);
      v13 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v12 + 3), "credentialType");
      Json::Value::opAssign(v13, (const Json::Value::Self *)v20);
      Json::Value::Destroy((Json::Value::Self *)v20);
      Json::Value::Construct((int)(uintptr_t)(v21), a2);
      v14 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v12 + 3), "username");
      Json::Value::opAssign(v14, (const Json::Value::Self *)v21);
      Json::Value::Destroy((Json::Value::Self *)v21);
      Json::Value::Construct((int)(uintptr_t)(v22), a4);
      v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v12 + 3), "password");
      Json::Value::opAssign(v15, (const Json::Value::Self *)v22);
      Json::Value::Destroy((Json::Value::Self *)v22);
      Json::Value::Construct((int)(uintptr_t)(v23), a5);
      v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v12 + 3), "contact_address");
      Json::Value::opAssign(v16, (const Json::Value::Self *)v23);
      Json::Value::Destroy((Json::Value::Self *)v23);
      Json::Value::Construct((int)(uintptr_t)(v24), a6);
      v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v12 + 3), "language");
      Json::Value::opAssign(v17, (const Json::Value::Self *)v24);
      Json::Value::Destroy((Json::Value::Self *)v24);
      Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v19));
      return gaia::ThreadManager::pushTask(Instance, v12);
    }
    else
    {
      result = gaia::Gaia_Janus::GetJanusStatus((gaia::Gaia_Janus::Self *)(a1));
      if ( result == 0 )
      {
        v11 = gaia::Gaia::GetInstance();
        return gaia::Janus::CreateAccount(
                 *(gaia::BaseServiceManager::Self **)(v11 + 44),
                 (int)(uintptr_t)(a2),
                 a3,
                 (int)(uintptr_t)(a4),
                 (int)(uintptr_t)(a5),
                 (int)(uintptr_t)(a6),
                 0);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::SendAuthentificate  (binary VA: 0x144c9b0)
// Original: gaia::Gaia_Janus::SendAuthentificate
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::SendAuthentificate(gaia::Gaia::Self *a1, uint32_t *a2, uint32_t *a3, int a4, char a5, int a6, int a7)
{
  char IsInitialized;
  int result;
  int v9;
  uint32_t *v10;
  Json::Value::Self *v11;
  Json::Value::Self *v12;
  Json::Value::Self *v13;
  int Instance;
  typedef gaia::ThreadManager::Self *_g4_t_v15;
  typedef uint8_t _g4_t_v16[16];
  typedef uint8_t _g4_t_v17[16];
  typedef uint8_t _g4_t_v18[28];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (48u + sizeof(_g4_t_v16)) > _g4_s1 ? (48u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_v17)) > _g4_s2 ? (64u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (80u + sizeof(_g4_t_v18)) > _g4_s3 ? (80u + sizeof(_g4_t_v18)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 48u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 64u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 80u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    if ( a5 != 0 )
    {
      v10 = (uint32_t *)opNew(0x44u);
      *v10 = a7;
      v10[1] = a6;
      v10[2] = 2508;
      Json::Value::Construct((int)(uintptr_t)(v10 + 3), nullptr);
      v10[7] = 0;
      v10[8] = 0;
      Json::Value::Construct((int)(uintptr_t)(v10 + 9), nullptr);
      v10[13] = 0;
      v10[14] = 0;
      v10[15] = 0;
      v10[16] = 0;
      Json::Value::Construct((Json::Value::Self *)v16, a4);
      v11 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v10 + 3), "credentialType");
      Json::Value::opAssign(v11, (const Json::Value::Self *)v16);
      Json::Value::Destroy((Json::Value::Self *)v16);
      Json::Value::Construct((int)(uintptr_t)(v17), a2);
      v12 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v10 + 3), "username");
      Json::Value::opAssign(v12, (const Json::Value::Self *)v17);
      Json::Value::Destroy((Json::Value::Self *)v17);
      Json::Value::Construct((int)(uintptr_t)(v18), a3);
      v13 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v10 + 3), "password");
      Json::Value::opAssign(v13, (const Json::Value::Self *)v18);
      Json::Value::Destroy((Json::Value::Self *)v18);
      Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v15));
      return gaia::ThreadManager::pushTask(Instance, v10);
    }
    else
    {
      result = gaia::Gaia_Janus::GetJanusStatus((gaia::Gaia_Janus::Self *)(a1));
      if ( result == 0 )
      {
        v9 = gaia::Gaia::GetInstance();
        return gaia::Janus::sendAuthentificate(*(gaia::BaseServiceManager::Self **)(v9 + 44), (int)(uintptr_t)(a2), (int)(uintptr_t)(a3), a4, 0);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::RefreshAccessToken  (binary VA: 0x144cc20)
// Original: gaia::Gaia_Janus::RefreshAccessToken
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::RefreshAccessToken(gaia::Gaia_Janus::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  int JanusStatus;
  void *v5;
  Json::Value::Self *v6;
  bool isNull;
  void *v8;
  int v9;
  int Instance;
  int result;
  void *v12;
  void *v13;
  void *v14;
  void *v15;
  typedef Json::Value::Self *_g4_t_refreshed;
  typedef Json::Value::Self *_g4_t_v17;
  typedef Json::Value::Self *_g4_t_started;
  typedef Json::Value::Self *_g4_t_v19;
  typedef Json::Value::Self *_g4_t_v20;
  typedef Json::Value::Self *_g4_t_v21;
  typedef bool _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef uint8_t _g4_t_v33[4];
  typedef uint8_t _g4_t_v34[16];
  typedef uint8_t _g4_t_v35[16];
  typedef uint8_t _g4_t_v36[96];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (4u + sizeof(_g4_t_refreshed)) > _g4_s0 ? (4u + sizeof(_g4_t_refreshed)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v17)) > _g4_s1 ? (4u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_started)) > _g4_s2 ? (4u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v19)) > _g4_s3 ? (4u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v20)) > _g4_s4 ? (4u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v21)) > _g4_s5 ? (4u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v22)) > _g4_s6 ? (4u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (25u + sizeof(_g4_t_v23)) > _g4_s7 ? (25u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v24)) > _g4_s8 ? (28u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v25)) > _g4_s9 ? (40u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v26)) > _g4_s10 ? (44u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v27)) > _g4_s11 ? (48u + sizeof(_g4_t_v27)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v28)) > _g4_s12 ? (52u + sizeof(_g4_t_v28)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v29)) > _g4_s13 ? (56u + sizeof(_g4_t_v29)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v30)) > _g4_s14 ? (60u + sizeof(_g4_t_v30)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v31)) > _g4_s15 ? (64u + sizeof(_g4_t_v31)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v32)) > _g4_s16 ? (68u + sizeof(_g4_t_v32)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v33)) > _g4_s17 ? (72u + sizeof(_g4_t_v33)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v34)) > _g4_s18 ? (76u + sizeof(_g4_t_v34)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v35)) > _g4_s19 ? (92u + sizeof(_g4_t_v35)) : _g4_s19,
    _g4_s21 = (108u + sizeof(_g4_t_v36)) > _g4_s20 ? (108u + sizeof(_g4_t_v36)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_refreshed &refreshed = *reinterpret_cast<_g4_t_refreshed *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 25u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 52u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 56u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 60u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 64u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 68u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 72u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 76u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 92u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 108u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "refresh_token", (int)(uintptr_t)(&v23));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v25), 4);
    v2 = (void *)(v25 - 12);
    if ( (uint32_t *)(v25 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "scope", (int)(uintptr_t)(&v23) + 1);
    gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v26), 4);
    v3 = (void *)(v26 - 12);
    if ( (uint32_t *)(v26 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 2519);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v36, a2);
        started = (Json::Value::Self *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v36);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v36);
        return (int)(uintptr_t)(started);
      }
      else
      {
        JanusStatus = gaia::Gaia_Janus::GetJanusStatus(self);
        if ( JanusStatus != 0 )
        {
          v19 = (Json::Value::Self *)JanusStatus;
          gaia::GaiaRequest::SetResponseCode(a2, JanusStatus);
          return (int)(uintptr_t)(v19);
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), (char *)&unk_1B15112, (int)(uintptr_t)(&v23) + 2);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), (char *)&unk_1B15112, (int)(uintptr_t)(&v24));
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), (char *)&unk_1B15112, (int)(uintptr_t)(&v24) + 1);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), (char *)&unk_1B15112, (int)(uintptr_t)(&v24) + 2);
          g4_std_compat::string_assign((int)(uintptr_t)(&v27), "refresh_token", 0xDu);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v34, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v31, (int)(uintptr_t)(v34));
          g4_std::string::assign_str(&v28, &v31);
          v5 = (void *)(v31 - 12);
          if ( (uint32_t *)(v31 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v5);
          }
          Json::Value::Destroy((Json::Value::Self *)v34);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "scope", (int)(uintptr_t)(&v24) + 3);
          v6 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v32);
          isNull = Json::Value::isNull(v6);
          v8 = (void *)(v32 - 12);
          if ( (uint32_t *)(v32 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v32 - 4), 0xFFFFFFFF) <= 0 )
          {
            v22 = isNull;
            g4_std::string::Rep::M_destroy(v8);
            isNull = v22;
          }
          if ( !isNull )
          {
            gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v35, (const char *)a2);
            Json::Value::asString((Json::Value::Self *)v33, (int)(uintptr_t)(v35));
            g4_std::string::assign_str(&v29, v33);
            g4_std::string::Destroy(v33);
            Json::Value::Destroy((Json::Value::Self *)v35);
          }
          v9 = gaia::Gaia::GetInstance() + 240;
          Instance = gaia::Gaia::GetInstance();
          refreshed = (Json::Value::Self *)gaia::Janus::RefreshAccessToken(
                                       *(uint32_t *)(Instance + 44),
                                       &v30,
                                       v9,
                                       &v27,
                                       &v28,
                                       &v29,
                                       a2);
          gaia::GaiaRequest::SetResponse(a2, &v30);
          gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(refreshed));
          result = (int)(uintptr_t)(refreshed);
          v12 = (void *)(v30 - 12);
          if ( (uint32_t *)(v30 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v12);
            result = (int)(uintptr_t)(refreshed);
          }
          v13 = (void *)(v29 - 12);
          if ( (uint32_t *)(v29 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
          {
            v21 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v13);
            result = (int)(uintptr_t)(v21);
          }
          v14 = (void *)(v28 - 12);
          if ( (uint32_t *)(v28 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
          {
            v20 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v14);
            result = (int)(uintptr_t)(v20);
          }
          v15 = (void *)(v27 - 12);
          if ( (uint32_t *)(v27 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
          {
            v17 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v15);
            return (int)(uintptr_t)(v17);
          }
        }
      }
    }
    else
    {
      return gaia::GaiaRequest::GetResponseCode(a2);
    }
  }
  else
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::EncryptToken  (binary VA: 0x144d150)
// Original: gaia::Gaia_Janus::EncryptToken
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::EncryptToken(gaia::Gaia_Janus::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  int JanusStatus;
  void *v5;
  Json::Value::Self *v6;
  bool isNull;
  int Instance;
  int result;
  void *v10;
  void *v11;
  typedef Json::Value::Self *_g4_t_v12;
  typedef Json::Value::Self *_g4_t_v13;
  typedef Json::Value::Self *_g4_t_started;
  typedef Json::Value::Self *_g4_t_v15;
  typedef bool _g4_t_v16;
  typedef void *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef void *_g4_t_ptr;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint8_t _g4_t_v28[4];
  typedef uint8_t _g4_t_v29[16];
  typedef uint8_t _g4_t_v30[16];
  typedef uint8_t _g4_t_v31[96];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_started)) > _g4_s2 ? (8u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v15)) > _g4_s3 ? (8u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v16)) > _g4_s4 ? (8u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v17)) > _g4_s5 ? (12u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (29u + sizeof(_g4_t_v18)) > _g4_s6 ? (29u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v19)) > _g4_s7 ? (32u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v20)) > _g4_s8 ? (40u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v21)) > _g4_s9 ? (44u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v22)) > _g4_s10 ? (48u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v23)) > _g4_s11 ? (52u + sizeof(_g4_t_v23)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_ptr)) > _g4_s12 ? (56u + sizeof(_g4_t_ptr)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v25)) > _g4_s13 ? (60u + sizeof(_g4_t_v25)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v26)) > _g4_s14 ? (64u + sizeof(_g4_t_v26)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v27)) > _g4_s15 ? (68u + sizeof(_g4_t_v27)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v28)) > _g4_s16 ? (72u + sizeof(_g4_t_v28)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v29)) > _g4_s17 ? (76u + sizeof(_g4_t_v29)) : _g4_s17,
    _g4_s19 = (92u + sizeof(_g4_t_v30)) > _g4_s18 ? (92u + sizeof(_g4_t_v30)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v31)) > _g4_s19 ? (108u + sizeof(_g4_t_v31)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 29u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 48u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 52u);
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 56u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 60u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 64u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 68u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 72u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 76u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 92u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 108u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "access_token", (int)(uintptr_t)(&v18));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v20), 4);
    v2 = (void *)(v20 - 12);
    if ( (uint32_t *)(v20 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "nonce", (int)(uintptr_t)(&v18) + 1);
    gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v21), 4);
    v3 = (void *)(v21 - 12);
    if ( (uint32_t *)(v21 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 2517);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v31, a2);
        started = (Json::Value::Self *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v31);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v31);
        return (int)(uintptr_t)(started);
      }
      else
      {
        JanusStatus = gaia::Gaia_Janus::GetJanusStatus(self);
        if ( JanusStatus != 0 )
        {
          v15 = (Json::Value::Self *)JanusStatus;
          gaia::GaiaRequest::SetResponseCode(a2, JanusStatus);
          return (int)(uintptr_t)(v15);
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), (char *)&unk_1B15112, (int)(uintptr_t)(&v18) + 2);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), (char *)&unk_1B15112, (int)(uintptr_t)(&v19));
          ptr = nullptr;
          v25 = 0;
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v29, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v26, (int)(uintptr_t)(v29));
          g4_std::string::assign_str(&v22, &v26);
          v5 = (void *)(v26 - 12);
          if ( (uint32_t *)(v26 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v5);
          }
          Json::Value::Destroy((Json::Value::Self *)v29);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "nonce", (int)(uintptr_t)(&v19) + 1);
          v6 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v27);
          isNull = Json::Value::isNull(v6);
          v17 = (void *)(v27 - 12);
          if ( (uint32_t *)(v27 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
          {
            v16 = isNull;
            g4_std::string::Rep::M_destroy(v17);
            isNull = v16;
          }
          if ( !isNull )
          {
            gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v30, (const char *)a2);
            Json::Value::asString((Json::Value::Self *)v28, (int)(uintptr_t)(v30));
            g4_std::string::assign_str(&v23, v28);
            g4_std::string::Destroy(v28);
            Json::Value::Destroy((Json::Value::Self *)v30);
          }
          Instance = gaia::Gaia::GetInstance();
          v12 = (Json::Value::Self *)gaia::Janus::EncryptToken(
                                 *(gaia::BaseServiceManager::Self **)(Instance + 44),
                                 (int)(uintptr_t)(&v22),
                                 (int)(uintptr_t)(&v23),
                                 &ptr,
                                 &v25,
                                 (int)(uintptr_t)(a2));
          gaia::GaiaRequest::SetResponse(a2, ptr, &v25);
          gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(v12));
          free(ptr);
          result = (int)(uintptr_t)(v12);
          v10 = (void *)(v23 - 12);
          if ( (uint32_t *)(v23 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v10);
            result = (int)(uintptr_t)(v12);
          }
          v11 = (void *)(v22 - 12);
          if ( (uint32_t *)(v22 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
          {
            v13 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v11);
            return (int)(uintptr_t)(v13);
          }
        }
      }
    }
    else
    {
      return gaia::GaiaRequest::GetResponseCode(a2);
    }
  }
  else
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::TransferCodeToken  (binary VA: 0x144d5e0)
// Original: gaia::Gaia_Janus::TransferCodeToken
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::TransferCodeToken(gaia::Gaia_Janus::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  int JanusStatus;
  int v4;
  void *v5;
  int v6;
  int result;
  uint32_t *v8;
  void *v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_started;
  typedef int _g4_t_v13;
  typedef int _g4_t_Instance;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint32_t *_g4_t_v19;
  typedef uint8_t _g4_t_v20[80];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v11)) > _g4_s1 ? (8u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_started)) > _g4_s2 ? (8u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v13)) > _g4_s3 ? (8u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_Instance)) > _g4_s4 ? (12u + sizeof(_g4_t_Instance)) : _g4_s4,
    _g4_s6 = (22u + sizeof(_g4_t_v15)) > _g4_s5 ? (22u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v16)) > _g4_s6 ? (28u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v17)) > _g4_s7 ? (32u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v18)) > _g4_s8 ? (36u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v19)) > _g4_s9 ? (40u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v20)) > _g4_s10 ? (44u + sizeof(_g4_t_v20)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_Instance &Instance = *reinterpret_cast<_g4_t_Instance *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 22u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "transfer_code", (int)(uintptr_t)(&v15));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v16), 4);
    v2 = (void *)(v16 - 12);
    if ( (uint32_t *)(v16 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
    {
      gaia::GaiaRequest::SetOperationCode(a2, 2526);
      gaia::Gaia::GetInstance();
      gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v20, a2);
      started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v20);
      gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v20);
      return started;
    }
    else
    {
      JanusStatus = gaia::Gaia_Janus::GetJanusStatus(self);
      if ( JanusStatus != 0 )
      {
        v11 = JanusStatus;
        gaia::GaiaRequest::SetResponseCode(a2, JanusStatus);
        return v11;
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "transfer_code", (int)(uintptr_t)(&v15) + 1);
        v4 = gaia::GaiaRequest::opIndex(a2, &v18);
        Json::Value::asString((Json::Value::Self *)&v17, v4);
        v5 = (void *)(v18 - 12);
        if ( (uint32_t *)(v18 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v5);
        }
        v19 = &dword_213B814;
        Instance = gaia::Gaia::GetInstance();
        v6 = gaia::Gaia::GetInstance();
        v10 = gaia::Janus::TransferCodeToken(*(uint32_t *)(v6 + 44), &v19, Instance + 240, &v17, a2);
        gaia::GaiaRequest::SetResponse(a2, &v19);
        gaia::GaiaRequest::SetResponseCode(a2, v10);
        result = v10;
        v8 = v19 - 3;
        if ( v19 - 3 != dword_213B808 && __sync_fetch_and_add(v19 - 1, 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v8);
          result = v10;
        }
        v9 = (void *)(v17 - 12);
        if ( (uint32_t *)(v17 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
        {
          v13 = result;
          g4_std::string::Rep::M_destroy(v9);
          return v13;
        }
      }
    }
  }
  else
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::RetrievePassword  (binary VA: 0x144d8b0)
// Original: gaia::Gaia_Janus::RetrievePassword
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::RetrievePassword(gaia::Gaia_Janus::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  int JanusStatus;
  void *v5;
  char v6; // di
  int Instance;
  int result;
  void *v9;
  typedef int _g4_t_Password;
  typedef int _g4_t_started;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint8_t _g4_t_v18[16];
  typedef uint8_t _g4_t_v19[16];
  typedef uint8_t _g4_t_v20[96];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (12u + sizeof(_g4_t_Password)) > _g4_s0 ? (12u + sizeof(_g4_t_Password)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_started)) > _g4_s1 ? (12u + sizeof(_g4_t_started)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v12)) > _g4_s2 ? (12u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (21u + sizeof(_g4_t_v13)) > _g4_s3 ? (21u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v14)) > _g4_s4 ? (28u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v15)) > _g4_s5 ? (32u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v16)) > _g4_s6 ? (36u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v17)) > _g4_s7 ? (40u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v18)) > _g4_s8 ? (44u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v19)) > _g4_s9 ? (60u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v20)) > _g4_s10 ? (76u + sizeof(_g4_t_v20)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_Password &Password = *reinterpret_cast<_g4_t_Password *>(_g4_sf + 12u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 21u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 60u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 76u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "username", (int)(uintptr_t)(&v13));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v14), 4);
    v2 = (void *)(v14 - 12);
    if ( (uint32_t *)(v14 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "accountType", (int)(uintptr_t)(&v13) + 1);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v15), 1);
    v3 = (void *)(v15 - 12);
    if ( (uint32_t *)(v15 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 2512);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v20, a2);
        started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v20);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v20);
        return started;
      }
      else
      {
        JanusStatus = gaia::Gaia_Janus::GetJanusStatus(self);
        if ( JanusStatus != 0 )
        {
          v12 = JanusStatus;
          gaia::GaiaRequest::SetResponseCode(a2, JanusStatus);
          return v12;
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), (char *)&unk_1B15112, (int)(uintptr_t)(&v13) + 2);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v18, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v17, (int)(uintptr_t)(v18));
          g4_std::string::assign_str(&v16, &v17);
          v5 = (void *)(v17 - 12);
          if ( (uint32_t *)(v17 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v5);
          }
          Json::Value::Destroy((Json::Value::Self *)v18);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v19, (const char *)a2);
          v6 = Json::Value::asInt((Json::Value::Self *)v19);
          Json::Value::Destroy((Json::Value::Self *)v19);
          Instance = gaia::Gaia::GetInstance();
          Password = gaia::Janus::RetrievePassword(
                       *(gaia::BaseServiceManager::Self **)(Instance + 44),
                       (int)(uintptr_t)(&v16),
                       v6,
                       (int)(uintptr_t)(a2));
          gaia::GaiaRequest::SetResponseCode(a2, Password);
          result = Password;
          v9 = (void *)(v16 - 12);
          if ( (uint32_t *)(v16 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v9);
            return Password;
          }
        }
      }
    }
    else
    {
      return gaia::GaiaRequest::GetResponseCode(a2);
    }
  }
  else
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::CreateAccount  (binary VA: 0x144dbf0)
// Original: gaia::Gaia_Janus::CreateAccount
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::CreateAccount(gaia::Gaia_Janus::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  void *v6;
  int JanusStatus;
  void *v8;
  void *v9;
  void *v10;
  void *v11;
  char v12; // bp
  int Instance;
  int result;
  void *v15;
  void *v16;
  void *v17;
  void *v18;
  typedef Json::Value::Self *_g4_t_Account;
  typedef Json::Value::Self *_g4_t_started;
  typedef Json::Value::Self *_g4_t_v21;
  typedef Json::Value::Self *_g4_t_v22;
  typedef Json::Value::Self *_g4_t_v23;
  typedef Json::Value::Self *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef uint8_t _g4_t_v41[16];
  typedef uint8_t _g4_t_v42[16];
  typedef uint8_t _g4_t_v43[16];
  typedef uint8_t _g4_t_v44[16];
  typedef uint8_t _g4_t_v45[16];
  typedef uint8_t _g4_t_v46[96];
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (8u + sizeof(_g4_t_Account)) > _g4_s0 ? (8u + sizeof(_g4_t_Account)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_started)) > _g4_s1 ? (8u + sizeof(_g4_t_started)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v21)) > _g4_s2 ? (8u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v22)) > _g4_s3 ? (8u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v23)) > _g4_s4 ? (8u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v24)) > _g4_s5 ? (8u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (34u + sizeof(_g4_t_v25)) > _g4_s6 ? (34u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v26)) > _g4_s7 ? (36u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v27)) > _g4_s8 ? (40u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v28)) > _g4_s9 ? (56u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v29)) > _g4_s10 ? (60u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v30)) > _g4_s11 ? (64u + sizeof(_g4_t_v30)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v31)) > _g4_s12 ? (68u + sizeof(_g4_t_v31)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v32)) > _g4_s13 ? (72u + sizeof(_g4_t_v32)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v33)) > _g4_s14 ? (76u + sizeof(_g4_t_v33)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v34)) > _g4_s15 ? (80u + sizeof(_g4_t_v34)) : _g4_s15,
    _g4_s17 = (84u + sizeof(_g4_t_v35)) > _g4_s16 ? (84u + sizeof(_g4_t_v35)) : _g4_s16,
    _g4_s18 = (88u + sizeof(_g4_t_v36)) > _g4_s17 ? (88u + sizeof(_g4_t_v36)) : _g4_s17,
    _g4_s19 = (92u + sizeof(_g4_t_v37)) > _g4_s18 ? (92u + sizeof(_g4_t_v37)) : _g4_s18,
    _g4_s20 = (96u + sizeof(_g4_t_v38)) > _g4_s19 ? (96u + sizeof(_g4_t_v38)) : _g4_s19,
    _g4_s21 = (100u + sizeof(_g4_t_v39)) > _g4_s20 ? (100u + sizeof(_g4_t_v39)) : _g4_s20,
    _g4_s22 = (104u + sizeof(_g4_t_v40)) > _g4_s21 ? (104u + sizeof(_g4_t_v40)) : _g4_s21,
    _g4_s23 = (108u + sizeof(_g4_t_v41)) > _g4_s22 ? (108u + sizeof(_g4_t_v41)) : _g4_s22,
    _g4_s24 = (124u + sizeof(_g4_t_v42)) > _g4_s23 ? (124u + sizeof(_g4_t_v42)) : _g4_s23,
    _g4_s25 = (140u + sizeof(_g4_t_v43)) > _g4_s24 ? (140u + sizeof(_g4_t_v43)) : _g4_s24,
    _g4_s26 = (156u + sizeof(_g4_t_v44)) > _g4_s25 ? (156u + sizeof(_g4_t_v44)) : _g4_s25,
    _g4_s27 = (172u + sizeof(_g4_t_v45)) > _g4_s26 ? (172u + sizeof(_g4_t_v45)) : _g4_s26,
    _g4_s28 = (188u + sizeof(_g4_t_v46)) > _g4_s27 ? (188u + sizeof(_g4_t_v46)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_Account &Account = *reinterpret_cast<_g4_t_Account *>(_g4_sf + 8u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 34u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 36u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 40u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 56u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 60u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 64u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 68u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 72u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 76u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 80u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 84u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 88u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 92u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 96u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 100u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 104u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 108u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 124u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 140u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 156u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 172u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 188u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "username", (int)(uintptr_t)(&v25));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v28), 4);
    v2 = (void *)(v28 - 12);
    if ( (uint32_t *)(v28 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "password", (int)(uintptr_t)(&v25) + 1);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v29), 4);
    v3 = (void *)(v29 - 12);
    if ( (uint32_t *)(v29 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "contact_address", (int)(uintptr_t)(&v26));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v30), 4);
    v4 = (void *)(v30 - 12);
    if ( (uint32_t *)(v30 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "language", (int)(uintptr_t)(&v26) + 1);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v31), 4);
    v5 = (void *)(v31 - 12);
    if ( (uint32_t *)(v31 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "credential_type", (int)(uintptr_t)(&v26) + 2);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v32), 1);
    v6 = (void *)(v32 - 12);
    if ( (uint32_t *)(v32 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v32 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 2511);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v46, a2);
        started = (Json::Value::Self *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v46);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v46);
        return (int)(uintptr_t)(started);
      }
      else
      {
        JanusStatus = gaia::Gaia_Janus::GetJanusStatus(self);
        if ( JanusStatus != 0 )
        {
          v21 = (Json::Value::Self *)JanusStatus;
          gaia::GaiaRequest::SetResponseCode(a2, JanusStatus);
          return (int)(uintptr_t)(v21);
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), (char *)&unk_1B15112, (int)(uintptr_t)(&v26) + 3);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), (char *)&unk_1B15112, (int)(uintptr_t)(&v27));
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), (char *)&unk_1B15112, (int)(uintptr_t)(&v27) + 1);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), (char *)&unk_1B15112, (int)(uintptr_t)(&v27) + 2);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v41, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v37, (int)(uintptr_t)(v41));
          g4_std::string::assign_str(&v33, &v37);
          v8 = (void *)(v37 - 12);
          if ( (uint32_t *)(v37 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v8);
          }
          Json::Value::Destroy((Json::Value::Self *)v41);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v42, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v38, (int)(uintptr_t)(v42));
          g4_std::string::assign_str(&v34, &v38);
          v9 = (void *)(v38 - 12);
          if ( (uint32_t *)(v38 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v38 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v9);
          }
          Json::Value::Destroy((Json::Value::Self *)v42);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v43, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v39, (int)(uintptr_t)(v43));
          g4_std::string::assign_str(&v35, &v39);
          v10 = (void *)(v39 - 12);
          if ( (uint32_t *)(v39 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v10);
          }
          Json::Value::Destroy((Json::Value::Self *)v43);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v44, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v40, (int)(uintptr_t)(v44));
          g4_std::string::assign_str(&v36, &v40);
          v11 = (void *)(v40 - 12);
          if ( (uint32_t *)(v40 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v40 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v11);
          }
          Json::Value::Destroy((Json::Value::Self *)v44);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v45, (const char *)a2);
          v12 = Json::Value::asInt((Json::Value::Self *)v45);
          Json::Value::Destroy((Json::Value::Self *)v45);
          Instance = gaia::Gaia::GetInstance();
          Account = (Json::Value::Self *)gaia::Janus::CreateAccount(
                                     *(gaia::BaseServiceManager::Self **)(Instance + 44),
                                     (int)(uintptr_t)(&v33),
                                     v12,
                                     (int)(uintptr_t)(&v34),
                                     (int)(uintptr_t)(&v35),
                                     (int)(uintptr_t)(&v36),
                                     (int)(uintptr_t)(a2));
          gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(Account));
          result = (int)(uintptr_t)(Account);
          v15 = (void *)(v36 - 12);
          if ( (uint32_t *)(v36 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v36 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v15);
            result = (int)(uintptr_t)(Account);
          }
          v16 = (void *)(v35 - 12);
          if ( (uint32_t *)(v35 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v35 - 4), 0xFFFFFFFF) <= 0 )
          {
            v23 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v16);
            result = (int)(uintptr_t)(v23);
          }
          v17 = (void *)(v34 - 12);
          if ( (uint32_t *)(v34 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
          {
            v24 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v17);
            result = (int)(uintptr_t)(v24);
          }
          v18 = (void *)(v33 - 12);
          if ( (uint32_t *)(v33 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
          {
            v22 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v18);
            return (int)(uintptr_t)(v22);
          }
        }
      }
    }
    else
    {
      return gaia::GaiaRequest::GetResponseCode(a2);
    }
  }
  else
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::SendAuthentificate  (binary VA: 0x144e380)
// Original: gaia::Gaia_Janus::SendAuthentificate
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::SendAuthentificate(gaia::Gaia_Janus::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  int JanusStatus;
  void *v6;
  void *v7;
  char v8; // bp
  int Instance;
  int result;
  void *v11;
  void *v12;
  typedef Json::Value::Self *_g4_t_v13;
  typedef Json::Value::Self *_g4_t_started;
  typedef Json::Value::Self *_g4_t_v15;
  typedef Json::Value::Self *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint8_t _g4_t_v26[16];
  typedef uint8_t _g4_t_v27[16];
  typedef uint8_t _g4_t_v28[16];
  typedef uint8_t _g4_t_v29[96];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_started)) > _g4_s1 ? (4u + sizeof(_g4_t_started)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v15)) > _g4_s2 ? (4u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v16)) > _g4_s3 ? (4u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (22u + sizeof(_g4_t_v17)) > _g4_s4 ? (22u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v18)) > _g4_s5 ? (24u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v19)) > _g4_s6 ? (32u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v20)) > _g4_s7 ? (36u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v21)) > _g4_s8 ? (40u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v22)) > _g4_s9 ? (44u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v23)) > _g4_s10 ? (48u + sizeof(_g4_t_v23)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v24)) > _g4_s11 ? (52u + sizeof(_g4_t_v24)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v25)) > _g4_s12 ? (56u + sizeof(_g4_t_v25)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v26)) > _g4_s13 ? (60u + sizeof(_g4_t_v26)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v27)) > _g4_s14 ? (76u + sizeof(_g4_t_v27)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v28)) > _g4_s15 ? (92u + sizeof(_g4_t_v28)) : _g4_s15,
    _g4_s17 = (108u + sizeof(_g4_t_v29)) > _g4_s16 ? (108u + sizeof(_g4_t_v29)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 22u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 44u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 56u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 60u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 76u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 92u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 108u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "username", (int)(uintptr_t)(&v17));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v19), 4);
    v2 = (void *)(v19 - 12);
    if ( (uint32_t *)(v19 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "password", (int)(uintptr_t)(&v17) + 1);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v20), 4);
    v3 = (void *)(v20 - 12);
    if ( (uint32_t *)(v20 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "credential_type", (int)(uintptr_t)(&v18));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v21), 1);
    v4 = (void *)(v21 - 12);
    if ( (uint32_t *)(v21 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 2508);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v29, a2);
        started = (Json::Value::Self *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v29);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v29);
        return (int)(uintptr_t)(started);
      }
      else
      {
        JanusStatus = gaia::Gaia_Janus::GetJanusStatus(self);
        if ( JanusStatus != 0 )
        {
          v15 = (Json::Value::Self *)JanusStatus;
          gaia::GaiaRequest::SetResponseCode(a2, JanusStatus);
          return (int)(uintptr_t)(v15);
        }
        else
        {
          v22 = (int)(uintptr_t)(&dword_213B814);
          v23 = (int)(uintptr_t)(&dword_213B814);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v26, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v24, (int)(uintptr_t)(v26));
          g4_std::string::assign_str(&v22, &v24);
          v6 = (void *)(v24 - 12);
          if ( (uint32_t *)(v24 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v6);
          }
          Json::Value::Destroy((Json::Value::Self *)v26);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v27, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v25, (int)(uintptr_t)(v27));
          g4_std::string::assign_str(&v23, &v25);
          v7 = (void *)(v25 - 12);
          if ( (uint32_t *)(v25 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v7);
          }
          Json::Value::Destroy((Json::Value::Self *)v27);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v28, (const char *)a2);
          v8 = Json::Value::asInt((Json::Value::Self *)v28);
          Json::Value::Destroy((Json::Value::Self *)v28);
          Instance = gaia::Gaia::GetInstance();
          v13 = (Json::Value::Self *)gaia::Janus::sendAuthentificate(
                                 *(gaia::BaseServiceManager::Self **)(Instance + 44),
                                 (int)(uintptr_t)(&v22),
                                 (int)(uintptr_t)(&v23),
                                 v8,
                                 (int)(uintptr_t)(a2));
          gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(v13));
          result = (int)(uintptr_t)(v13);
          v11 = (void *)(v23 - 12);
          if ( (uint32_t *)(v23 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v11);
            result = (int)(uintptr_t)(v13);
          }
          v12 = (void *)(v22 - 12);
          if ( (uint32_t *)(v22 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
          {
            v16 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v12);
            return (int)(uintptr_t)(v16);
          }
        }
      }
    }
    else
    {
      return gaia::GaiaRequest::GetResponseCode(a2);
    }
  }
  else
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::GetJanusToken  (binary VA: 0x144e800)
// Original: gaia::Gaia_Janus::GetJanusToken
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::GetJanusToken(gaia::Gaia_Janus::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  int JanusStatus;
  int v4;
  void *v5;
  void *v6;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint8_t _g4_t_v12[28];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (15u + sizeof(_g4_t_v8)) > _g4_s0 ? (15u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v9)) > _g4_s1 ? (20u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v10)) > _g4_s2 ? (24u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v11)) > _g4_s3 ? (28u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v12)) > _g4_s4 ? (32u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 15u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "accountType", (int)(uintptr_t)(&v8));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v9), 1);
    v2 = (void *)(v9 - 12);
    if ( (uint32_t *)(v9 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      JanusStatus = gaia::Gaia_Janus::GetJanusStatus(self);
      v4 = JanusStatus;
      if ( JanusStatus != 0 )
      {
        gaia::GaiaRequest::SetResponseCode(a2, JanusStatus);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), (char *)&unk_1B15112, (int)(uintptr_t)(&v8) + 1);
        gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v12, (const char *)a2);
        Json::Value::asInt((Json::Value::Self *)v12);
        Json::Value::Destroy((Json::Value::Self *)v12);
        glwebtools::Mutex::Lock(self);
        if ( *(uint32_t *)(gaia::Gaia::GetInstance() + 44) != 0 )
        {
          gaia::Gaia::GetInstance();
          gaia::Janus::GetJanusToken(&v11);
          g4_std::string::assign_str(&v10, &v11);
          v5 = (void *)(v11 - 12);
          if ( (uint32_t *)(v11 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v5);
          }
        }
        else
        {
          v4 = -303;
        }
        glwebtools::Mutex::Unlock(self);
        gaia::GaiaRequest::SetResponse(a2, &v10);
        gaia::GaiaRequest::SetResponseCode(a2, v4);
        v6 = (void *)(v10 - 12);
        if ( (uint32_t *)(v10 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v6);
        }
      }
    }
    else
    {
      return gaia::GaiaRequest::GetResponseCode(a2);
    }
  }
  else
  {
    v4 = -21;
    gaia::GaiaRequest::SetResponseCode(a2, -21);
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::Logout  (binary VA: 0x1452c20)
// Original: gaia::Gaia_Janus::Logout
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::Logout(int a1, int a2)
{
  int v2;
  int v3;
  int Instance;
  int v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  uint32_t *v11;
  uint32_t *v12;
  int v13;
  int v14;
  int result;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  void *v22;

  v2 = a2;
  v3 = gaia::Gaia::GetInstance() + 364;
  Instance = gaia::Gaia::GetInstance();
  v5 = Instance + 364;
  v6 = *(uint32_t **)(Instance + 368);
  v7 = (uint32_t *)v5;
  if ( v6 != nullptr )
  {
    do
    {
      while ( a2 <= v6[4] )
      {
        v7 = v6;
        v6 = (uint32_t *)v6[2];
        if ( v6 == nullptr )
          goto LABEL_6;
      }
      v6 = (uint32_t *)v6[3];
    }
    while ( v6 != nullptr );
LABEL_6:
    if ( v7 != (uint32_t *)v5 && a2 < v7[4] )
      v7 = (uint32_t *)v5;
  }
  if ( (uint32_t *)v3 != v7 )
  {
    v8 = (uint32_t *)gaia::Gaia::GetInstance();
    v9 = (uint32_t *)v8[92];
    v22 = v9;
    v20 = v8 + 91;
    v21 = v8 + 91;
    v10 = v8 + 91;
    if ( v9 != nullptr )
    {
      while ( 1 )
      {
        while ( v9[4] < a2 )
        {
          v9 = (uint32_t *)v9[3];
          if ( v9 == nullptr )
            goto LABEL_16;
        }
        if ( v9[4] <= a2 )
          break;
        v10 = v9;
        v9 = (uint32_t *)v9[2];
        if ( v9 == nullptr )
        {
LABEL_16:
          v21 = v10;
          goto LABEL_17;
        }
      }
      v16 = (uint32_t *)v9[3];
      v17 = (uint32_t *)v9[2];
      v21 = v10;
      if ( v16 != nullptr )
      {
        do
        {
          while ( v16[4] > a2 )
          {
            v10 = v16;
            v16 = (uint32_t *)v16[2];
            if ( v16 == nullptr )
              goto LABEL_33;
          }
          v16 = (uint32_t *)v16[3];
        }
        while ( v16 != nullptr );
LABEL_33:
        v21 = v10;
      }
      v10 = v9;
      while ( v17 != nullptr )
      {
        while ( v17[4] >= a2 )
        {
          v10 = v17;
          v17 = (uint32_t *)v17[2];
          if ( v17 == nullptr )
            goto LABEL_17;
        }
        v17 = (uint32_t *)v17[3];
      }
    }
LABEL_17:
    if ( (uint32_t *)v8[93] == v10 && v20 == v21 )
    {
      g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_erase(
        (int)(uintptr_t)(v8 + 90),
        v22);
      v8[92] = 0;
      v8[93] = (uint32_t)(uintptr_t)(v20);
      v8[94] = (uint32_t)(uintptr_t)(v20);
      v8[95] = 0;
    }
    else if ( v10 != v21 )
    {
      while ( 1 )
      {
        v11 = (uint32_t *)sub_19048E0(v10);
        v12 = (uint32_t *)sub_1904AE0(v10, v20);
        v13 = v12[7];
        if ( (uint32_t *)(v13 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
        {
          v18 = v12;
          g4_std::string::Rep::M_destroy((void *)(v13 - 12));
          v12 = v18;
        }
        v14 = v12[6];
        if ( (uint32_t *)(v14 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
        {
          v19 = v12;
          g4_std::string::Rep::M_destroy((void *)(v14 - 12));
          v12 = v19;
        }
        opDelete(v12);
        --v8[95];
        if ( v21 == v11 )
          break;
        v10 = v11;
      }
      v2 = a2;
    }
  }
  result = *(uint32_t *)(gaia::Gaia::GetInstance() + 44);
  if ( result != 0 )
    return gaia::Janus::FlushTokens(result, v2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::GetJanusApprovals  (binary VA: 0x1452ea0)
// Original: gaia::Gaia_Janus::GetJanusApprovals
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::GetJanusApprovals(gaia::Gaia_Janus::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  Json::Value::Self *v3;
  int v4;
  void *v5;
  Json::Value::Self *v6;
  Json::Value::Self *v7;
  typedef Json::Value::Self *_g4_t_v9;
  typedef int _g4_t_JanusApprovals;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef void *_g4_t_v14;
  typedef Json::Value::Self *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17[12];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_JanusApprovals)) > _g4_s1 ? (28u + sizeof(_g4_t_JanusApprovals)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v11)) > _g4_s2 ? (36u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v12)) > _g4_s3 ? (40u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v13)) > _g4_s4 ? (44u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v14)) > _g4_s5 ? (48u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v15)) > _g4_s6 ? (52u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v16)) > _g4_s7 ? (56u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v17)) > _g4_s8 ? (60u + sizeof(_g4_t_v17)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_JanusApprovals &JanusApprovals = *reinterpret_cast<_g4_t_JanusApprovals *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 36u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 40u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 52u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 56u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 60u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "accountType", (int)(uintptr_t)(&v11));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v12), 1);
    v2 = (void *)(v12 - 12);
    if ( (uint32_t *)(v12 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v12 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "accountType", (int)(uintptr_t)(&v11) + 1);
      v3 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v13);
      v4 = Json::Value::asInt(v3);
      v5 = (void *)(v13 - 12);
      if ( (uint32_t *)(v13 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v5);
      }
      gaia::BaseJSONServiceResponse::Construct((gaia::BaseJSONServiceResponse::Self *)v17);
      JanusApprovals = gaia::Gaia_Janus::GetJanusApprovals(self, v4, (Json::Value::Self *)v17);
      v14 = nullptr;
      v15 = nullptr;
      v16 = 0;
      g4_std::vector_gaia_BaseJSONServiceResp_48cd2f::M_insert_aux((int)(uintptr_t)(&v14), nullptr, (Json::Value::Self *)v17);
      gaia::GaiaRequest::SetResponse(a2, (const std::vector<gaia::BaseJSONServiceResponse::Self> *)&v14);
      gaia::GaiaRequest::SetResponseCode(a2, JanusApprovals);
      v6 = v15;
      v7 = (Json::Value::Self *)v14;
      if ( v15 != v14 )
      {
        do
        {
          v9 = v7;
          v7 = (Json::Value::Self *)((char *)v7 + 20);
          gaia::BaseJSONServiceResponse::Destroy(v9);
        }
        while ( v6 != v7 );
        v7 = (Json::Value::Self *)v14;
      }
      if ( v7 != nullptr )
        opDelete(v7);
      gaia::BaseJSONServiceResponse::Destroy((gaia::BaseJSONServiceResponse::Self *)v17);
      return 0;
    }
    else
    {
      return gaia::GaiaRequest::GetResponseCode(a2);
    }
  }
  else
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::Authorize  (binary VA: 0x1457e30)
// Original: gaia::Gaia_Janus::Authorize
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::Authorize(gaia::Gaia_Janus::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  int JanusStatus;
  Json::Value::Self *v7;
  int v8;
  void *v9;
  int Instance;
  void *v11;
  Json::Value::Self *v12;
  bool isNull;
  Json::Value::Self *v14;
  bool v15;
  int v16;
  Json::Value::Self *v17;
  Json::Value::Self *v18;
  int result;
  int v20;
  Json::Value::Self *v21;
  Json::Value::Self *v22;
  int v23;
  Json::Value::Self *v24;
  Json::Value::Self *v25;
  int v26;
  int v27;
  void *v28;
  void *v29;
  void *v30;
  void *v31;
  int v32;
  int v33;
  typedef Json::Value::Self *_g4_t_v34;
  typedef Json::Value::Self *_g4_t_v35;
  typedef Json::Value::Self *_g4_t_v36;
  typedef bool _g4_t_v37;
  typedef bool _g4_t_v38;
  typedef Json::Value::Self *_g4_t_started;
  typedef Json::Value::Self *_g4_t_v40;
  typedef Json::Value::Self *_g4_t_v41;
  typedef Json::Value::Self *_g4_t_v42;
  typedef Json::Value::Self *_g4_t_v43;
  typedef Json::Value::Self *_g4_t_v44;
  typedef char *_g4_t_v45;
  typedef char *_g4_t_v46;
  typedef char _g4_t_v47;
  typedef void *_g4_t_v48;
  typedef uint32_t _g4_t_v49[4];
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef char _g4_t_v65[4];
  typedef int _g4_t_v66[2];
  typedef uint32_t *_g4_t_v67;
  typedef uint32_t _g4_t_v68[2];
  typedef uint32_t *_g4_t_v69;
  typedef uint32_t _g4_t_v70[2];
  typedef uint32_t *_g4_t_v71;
  typedef uint32_t *_g4_t_v72;
  typedef uint8_t _g4_t_v73[16];
  typedef uint8_t _g4_t_v74[16];
  typedef uint8_t _g4_t_v75[16];
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef char _g4_t_v78[4];
  typedef char _g4_t_v79[4];
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef char _g4_t_v82[4];
  typedef char _g4_t_v83[4];
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef char _g4_t_v86[4];
  typedef char _g4_t_v87[4];
  typedef uint8_t _g4_t_v88[96];
  enum : size_t {
    _g4_s0 = 416u,
    _g4_s1 = (4u + sizeof(_g4_t_v34)) > _g4_s0 ? (4u + sizeof(_g4_t_v34)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v35)) > _g4_s1 ? (4u + sizeof(_g4_t_v35)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v36)) > _g4_s2 ? (4u + sizeof(_g4_t_v36)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v37)) > _g4_s3 ? (4u + sizeof(_g4_t_v37)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v38)) > _g4_s4 ? (4u + sizeof(_g4_t_v38)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_started)) > _g4_s5 ? (8u + sizeof(_g4_t_started)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v40)) > _g4_s6 ? (8u + sizeof(_g4_t_v40)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v41)) > _g4_s7 ? (8u + sizeof(_g4_t_v41)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v42)) > _g4_s8 ? (8u + sizeof(_g4_t_v42)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v43)) > _g4_s9 ? (8u + sizeof(_g4_t_v43)) : _g4_s9,
    _g4_s11 = (8u + sizeof(_g4_t_v44)) > _g4_s10 ? (8u + sizeof(_g4_t_v44)) : _g4_s10,
    _g4_s12 = (12u + sizeof(_g4_t_v45)) > _g4_s11 ? (12u + sizeof(_g4_t_v45)) : _g4_s11,
    _g4_s13 = (16u + sizeof(_g4_t_v46)) > _g4_s12 ? (16u + sizeof(_g4_t_v46)) : _g4_s12,
    _g4_s14 = (16u + sizeof(_g4_t_v47)) > _g4_s13 ? (16u + sizeof(_g4_t_v47)) : _g4_s13,
    _g4_s15 = (20u + sizeof(_g4_t_v48)) > _g4_s14 ? (20u + sizeof(_g4_t_v48)) : _g4_s14,
    _g4_s16 = (28u + sizeof(_g4_t_v49)) > _g4_s15 ? (28u + sizeof(_g4_t_v49)) : _g4_s15,
    _g4_s17 = (45u + sizeof(_g4_t_v50)) > _g4_s16 ? (45u + sizeof(_g4_t_v50)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v51)) > _g4_s17 ? (48u + sizeof(_g4_t_v51)) : _g4_s17,
    _g4_s19 = (53u + sizeof(_g4_t_v52)) > _g4_s18 ? (53u + sizeof(_g4_t_v52)) : _g4_s18,
    _g4_s20 = (56u + sizeof(_g4_t_v53)) > _g4_s19 ? (56u + sizeof(_g4_t_v53)) : _g4_s19,
    _g4_s21 = (68u + sizeof(_g4_t_v54)) > _g4_s20 ? (68u + sizeof(_g4_t_v54)) : _g4_s20,
    _g4_s22 = (72u + sizeof(_g4_t_v55)) > _g4_s21 ? (72u + sizeof(_g4_t_v55)) : _g4_s21,
    _g4_s23 = (76u + sizeof(_g4_t_v56)) > _g4_s22 ? (76u + sizeof(_g4_t_v56)) : _g4_s22,
    _g4_s24 = (80u + sizeof(_g4_t_v57)) > _g4_s23 ? (80u + sizeof(_g4_t_v57)) : _g4_s23,
    _g4_s25 = (84u + sizeof(_g4_t_v58)) > _g4_s24 ? (84u + sizeof(_g4_t_v58)) : _g4_s24,
    _g4_s26 = (88u + sizeof(_g4_t_v59)) > _g4_s25 ? (88u + sizeof(_g4_t_v59)) : _g4_s25,
    _g4_s27 = (92u + sizeof(_g4_t_v60)) > _g4_s26 ? (92u + sizeof(_g4_t_v60)) : _g4_s26,
    _g4_s28 = (96u + sizeof(_g4_t_v61)) > _g4_s27 ? (96u + sizeof(_g4_t_v61)) : _g4_s27,
    _g4_s29 = (100u + sizeof(_g4_t_v62)) > _g4_s28 ? (100u + sizeof(_g4_t_v62)) : _g4_s28,
    _g4_s30 = (104u + sizeof(_g4_t_v63)) > _g4_s29 ? (104u + sizeof(_g4_t_v63)) : _g4_s29,
    _g4_s31 = (108u + sizeof(_g4_t_v64)) > _g4_s30 ? (108u + sizeof(_g4_t_v64)) : _g4_s30,
    _g4_s32 = (112u + sizeof(_g4_t_v65)) > _g4_s31 ? (112u + sizeof(_g4_t_v65)) : _g4_s31,
    _g4_s33 = (116u + sizeof(_g4_t_v66)) > _g4_s32 ? (116u + sizeof(_g4_t_v66)) : _g4_s32,
    _g4_s34 = (124u + sizeof(_g4_t_v67)) > _g4_s33 ? (124u + sizeof(_g4_t_v67)) : _g4_s33,
    _g4_s35 = (128u + sizeof(_g4_t_v68)) > _g4_s34 ? (128u + sizeof(_g4_t_v68)) : _g4_s34,
    _g4_s36 = (136u + sizeof(_g4_t_v69)) > _g4_s35 ? (136u + sizeof(_g4_t_v69)) : _g4_s35,
    _g4_s37 = (140u + sizeof(_g4_t_v70)) > _g4_s36 ? (140u + sizeof(_g4_t_v70)) : _g4_s36,
    _g4_s38 = (148u + sizeof(_g4_t_v71)) > _g4_s37 ? (148u + sizeof(_g4_t_v71)) : _g4_s37,
    _g4_s39 = (152u + sizeof(_g4_t_v72)) > _g4_s38 ? (152u + sizeof(_g4_t_v72)) : _g4_s38,
    _g4_s40 = (156u + sizeof(_g4_t_v73)) > _g4_s39 ? (156u + sizeof(_g4_t_v73)) : _g4_s39,
    _g4_s41 = (172u + sizeof(_g4_t_v74)) > _g4_s40 ? (172u + sizeof(_g4_t_v74)) : _g4_s40,
    _g4_s42 = (188u + sizeof(_g4_t_v75)) > _g4_s41 ? (188u + sizeof(_g4_t_v75)) : _g4_s41,
    _g4_s43 = (204u + sizeof(_g4_t_v76)) > _g4_s42 ? (204u + sizeof(_g4_t_v76)) : _g4_s42,
    _g4_s44 = (208u + sizeof(_g4_t_v77)) > _g4_s43 ? (208u + sizeof(_g4_t_v77)) : _g4_s43,
    _g4_s45 = (212u + sizeof(_g4_t_v78)) > _g4_s44 ? (212u + sizeof(_g4_t_v78)) : _g4_s44,
    _g4_s46 = (216u + sizeof(_g4_t_v79)) > _g4_s45 ? (216u + sizeof(_g4_t_v79)) : _g4_s45,
    _g4_s47 = (220u + sizeof(_g4_t_v80)) > _g4_s46 ? (220u + sizeof(_g4_t_v80)) : _g4_s46,
    _g4_s48 = (224u + sizeof(_g4_t_v81)) > _g4_s47 ? (224u + sizeof(_g4_t_v81)) : _g4_s47,
    _g4_s49 = (228u + sizeof(_g4_t_v82)) > _g4_s48 ? (228u + sizeof(_g4_t_v82)) : _g4_s48,
    _g4_s50 = (232u + sizeof(_g4_t_v83)) > _g4_s49 ? (232u + sizeof(_g4_t_v83)) : _g4_s49,
    _g4_s51 = (236u + sizeof(_g4_t_v84)) > _g4_s50 ? (236u + sizeof(_g4_t_v84)) : _g4_s50,
    _g4_s52 = (240u + sizeof(_g4_t_v85)) > _g4_s51 ? (240u + sizeof(_g4_t_v85)) : _g4_s51,
    _g4_s53 = (244u + sizeof(_g4_t_v86)) > _g4_s52 ? (244u + sizeof(_g4_t_v86)) : _g4_s52,
    _g4_s54 = (248u + sizeof(_g4_t_v87)) > _g4_s53 ? (248u + sizeof(_g4_t_v87)) : _g4_s53,
    _g4_s55 = (252u + sizeof(_g4_t_v88)) > _g4_s54 ? (252u + sizeof(_g4_t_v88)) : _g4_s54
  };
  alignas(16) uint8_t _g4_sf[_g4_s55];
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 4u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 4u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 4u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 4u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 4u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 8u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 8u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 8u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 8u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 8u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 8u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 12u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 16u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 16u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 20u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 28u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 45u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 48u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 53u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 56u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 68u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 72u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 76u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 80u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 84u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 88u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 92u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 96u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 100u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 104u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 108u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 112u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 116u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 124u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 128u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 136u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 140u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 148u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 152u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 156u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 172u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 188u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 204u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 208u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 212u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 216u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 220u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 224u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 228u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 232u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 236u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 240u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 244u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 248u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 252u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v54), "accountType", (int)(uintptr_t)(&v50));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v54), 1);
    v2 = (void *)(v54 - 12);
    if ( (uint32_t *)(v54 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v54 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v55), "scope", (int)(uintptr_t)(&v50) + 1);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v55), 4);
    v3 = (void *)(v55 - 12);
    if ( (uint32_t *)(v55 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v55 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v56), "for_username", (int)(uintptr_t)(&v50) + 2);
    gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v56), 4);
    v4 = (void *)(v56 - 12);
    if ( (uint32_t *)(v56 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v56 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v57), "for_credential_type", (int)(uintptr_t)(&v51));
    gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v57), 1);
    v5 = (void *)(v57 - 12);
    if ( (uint32_t *)(v57 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v57 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 2502);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v88, a2);
        started = (Json::Value::Self *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v88);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v88);
        return (int)(uintptr_t)(started);
      }
      else
      {
        JanusStatus = gaia::Gaia_Janus::GetJanusStatus(self);
        if ( JanusStatus != 0 )
          goto LABEL_27;
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v62), "accountType", (int)(uintptr_t)(&v52));
        v7 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v62);
        v8 = Json::Value::asInt(v7);
        v9 = (void *)(v62 - 12);
        if ( (uint32_t *)(v62 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v62 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v9);
        }
        Instance = gaia::Gaia::GetInstance();
        JanusStatus = gaia::Gaia::GetInitializationAndLoginStatus(Instance, v8);
        if ( JanusStatus != 0 )
        {
LABEL_27:
          v40 = (Json::Value::Self *)JanusStatus;
          gaia::GaiaRequest::SetResponseCode(a2, JanusStatus);
          return (int)(uintptr_t)(v40);
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v58), (char *)&unk_1B15112, (int)(uintptr_t)(&v52) + 1);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v59), (char *)&unk_1B15112, (int)(uintptr_t)(&v52) + 2);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v73, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v63, (int)(uintptr_t)(v73));
          g4_std::string::assign_str(&v58, &v63);
          v11 = (void *)(v63 - 12);
          if ( (uint32_t *)(v63 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v63 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v11);
          }
          Json::Value::Destroy((Json::Value::Self *)v73);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v64), "for_username", (int)(uintptr_t)(&v53));
          v12 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v64);
          isNull = Json::Value::isNull(v12);
          v48 = (void *)(v64 - 12);
          if ( (uint32_t *)(v64 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v64 - 4), 0xFFFFFFFF) <= 0 )
          {
            v37 = isNull;
            g4_std::string::Rep::M_destroy(v48);
            isNull = v37;
          }
          if ( !isNull )
          {
            gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v74, (const char *)a2);
            Json::Value::asString((Json::Value::Self *)v65, (int)(uintptr_t)(v74));
            g4_std::string::assign_str(&v59, v65);
            g4_std::string::Destroy(v65);
            Json::Value::Destroy((Json::Value::Self *)v74);
          }
          g4_std::string::construct_from_cstr((int)(uintptr_t)(v66), "for_credential_type", (int)(uintptr_t)(&v53) + 1);
          v14 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, v66);
          v15 = Json::Value::isNull(v14);
          v46 = (char *)(v66[0] - 12);
          if ( (uint32_t *)(v66[0] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v66[0] - 4), 0xFFFFFFFF) <= 0 )
          {
            v38 = v15;
            g4_std::string::Rep::M_destroy(v46);
            v15 = v38;
          }
          v47 = 19;
          if ( !v15 )
          {
            gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v75, (const char *)a2);
            v47 = Json::Value::asInt((Json::Value::Self *)v75);
            Json::Value::Destroy((Json::Value::Self *)v75);
          }
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v60), (char *)&unk_1B15112, (int)(uintptr_t)(&v53) + 2);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v61), (char *)&unk_1B15112, (int)(uintptr_t)(&v53) + 3);
          if ( v8 == 19 )
          {
            v32 = gaia::Gaia::GetInstance();
            g4_std::string::assign_str(&v60, v32 + 352);
            v33 = gaia::Gaia::GetInstance();
            g4_std::string::assign_str(&v61, v33 + 356);
            v26 = 19;
          }
          else
          {
            v16 = gaia::Gaia::GetInstance();
            v17 = *(Json::Value::Self **)(v16 + 368);
            v18 = (Json::Value::Self *)(v16 + 364);
            if ( v17 == nullptr )
              goto LABEL_56;
            do
            {
              if ( v8 <= *((uint32_t *)v17 + 4) )
              {
                v18 = v17;
                v17 = *((Json::Value::Self **)v17 + 2);
              }
              else
              {
                v17 = *((Json::Value::Self **)v17 + 3);
              }
            }
            while ( v17 != nullptr );
            if ( (Json::Value::Self *)(v16 + 364) == v18 || v8 < *((uint32_t *)v18 + 4) )
            {
LABEL_56:
              v66[1] = 0;
              v67 = &dword_213B814;
              v68[0] = (uint32_t)(uintptr_t)(&dword_213B814);
              v76 = v8;
              v77 = 0;
              g4_std::string::construct_copy(v78, &v67);
              g4_std::string::construct_copy(v79, v68);
              g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_insert_unique(v49);
              v36 = (Json::Value::Self *)v49[0];
              g4_std::string::Destroy(v79);
              g4_std::string::Destroy(v78);
              g4_std::string::Destroy(v68);
              g4_std::string::Destroy(&v67);
              v18 = v36;
            }
            g4_std::string::assign_str(&v60, (char *)v18 + 24);
            v20 = gaia::Gaia::GetInstance();
            v21 = *(Json::Value::Self **)(v20 + 368);
            v22 = (Json::Value::Self *)(v20 + 364);
            if ( v21 == nullptr )
              goto LABEL_55;
            do
            {
              if ( v8 <= *((uint32_t *)v21 + 4) )
              {
                v22 = v21;
                v21 = *((Json::Value::Self **)v21 + 2);
              }
              else
              {
                v21 = *((Json::Value::Self **)v21 + 3);
              }
            }
            while ( v21 != nullptr );
            if ( (Json::Value::Self *)(v20 + 364) == v22 || v8 < *((uint32_t *)v22 + 4) )
            {
LABEL_55:
              v68[1] = 0;
              v69 = &dword_213B814;
              v70[0] = (uint32_t)(uintptr_t)(&dword_213B814);
              v80 = v8;
              v81 = 0;
              g4_std::string::construct_copy(v82, &v69);
              g4_std::string::construct_copy(v83, v70);
              g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_insert_unique(v49);
              v35 = (Json::Value::Self *)v49[0];
              g4_std::string::Destroy(v83);
              g4_std::string::Destroy(v82);
              g4_std::string::Destroy(v70);
              g4_std::string::Destroy(&v69);
              v22 = v35;
            }
            g4_std::string::assign_str(&v61, (char *)v22 + 28);
            v23 = gaia::Gaia::GetInstance();
            v24 = *(Json::Value::Self **)(v23 + 368);
            v25 = (Json::Value::Self *)(v23 + 364);
            if ( v24 == nullptr )
              goto LABEL_54;
            do
            {
              if ( v8 <= *((uint32_t *)v24 + 4) )
              {
                v25 = v24;
                v24 = *((Json::Value::Self **)v24 + 2);
              }
              else
              {
                v24 = *((Json::Value::Self **)v24 + 3);
              }
            }
            while ( v24 != nullptr );
            if ( v25 == (Json::Value::Self *)(v23 + 364) || v8 < *((uint32_t *)v25 + 4) )
            {
LABEL_54:
              v84 = v8;
              v71 = &dword_213B814;
              v72 = &dword_213B814;
              v70[1] = 0;
              v85 = 0;
              g4_std::string::construct_copy(v86, &v71);
              g4_std::string::construct_copy(v87, &v72);
              g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_insert_unique(v49);
              v34 = (Json::Value::Self *)v49[0];
              g4_std::string::Destroy(v87);
              g4_std::string::Destroy(v86);
              g4_std::string::Destroy(&v72);
              g4_std::string::Destroy(&v71);
              v25 = v34;
            }
            v26 = *((uint32_t *)v25 + 5);
          }
          v45 = (char *)gaia::Gaia::GetInstance();
          v27 = gaia::Gaia::GetInstance();
          v41 = (Json::Value::Self *)gaia::Janus::Authorize(
                                 *(gaia::BaseServiceManager::Self **)(v27 + 44),
                                 (int)(uintptr_t)(&v60),
                                 (int)(uintptr_t)(&v61),
                                 v26,
                                 (int)(uintptr_t)(&v58),
                                 (int)(uintptr_t)(v45 + 340),
                                 0,
                                 (int)(uintptr_t)(&v59),
                                 v47,
                                 (int)(uintptr_t)(a2));
          gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(v41));
          result = (int)(uintptr_t)(v41);
          v28 = (void *)(v61 - 12);
          if ( (uint32_t *)(v61 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v61 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v28);
            result = (int)(uintptr_t)(v41);
          }
          v29 = (void *)(v60 - 12);
          if ( (uint32_t *)(v60 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v60 - 4), 0xFFFFFFFF) <= 0 )
          {
            v44 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v29);
            result = (int)(uintptr_t)(v44);
          }
          v30 = (void *)(v59 - 12);
          if ( (uint32_t *)(v59 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v59 - 4), 0xFFFFFFFF) <= 0 )
          {
            v43 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v30);
            result = (int)(uintptr_t)(v43);
          }
          v31 = (void *)(v58 - 12);
          if ( (uint32_t *)(v58 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v58 - 4), 0xFFFFFFFF) <= 0 )
          {
            v42 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v31);
            return (int)(uintptr_t)(v42);
          }
        }
      }
    }
    else
    {
      return gaia::GaiaRequest::GetResponseCode(a2);
    }
  }
  else
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::StartAndAuthorizeJanus  (binary VA: 0x1458a40)
// Original: gaia::Gaia_Janus::StartAndAuthorizeJanus
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::StartAndAuthorizeJanus(gaia::Gaia_Janus::Self *self, gaia::GaiaRequest::Self *a2)
{
  int result;

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    result = gaia::Gaia_Janus::GetJanusStatus(self);
    if ( result == 0 )
      return gaia::Gaia_Janus::Authorize(self, a2);
  }
  else
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::GetAccessToken  (binary VA: 0x1458ac0)
// Original: gaia::Gaia_Janus::GetAccessToken
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::GetAccessToken(gaia::Gaia::Self *a1, gaia::GaiaRequest::Self *a2, uint32_t *a3, int a4)
{
  void *v4;
  void *v5;
  Json::Value::Self *v6;
  void *v7;
  int v8;
  int JanusStatus;
  int Instance;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint8_t _g4_t_v16[4];
  typedef uint8_t _g4_t_v17[16];
  typedef uint8_t _g4_t_v18[28];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (11u + sizeof(_g4_t_v12)) > _g4_s0 ? (11u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v14)) > _g4_s2 ? (20u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v15)) > _g4_s3 ? (24u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v16)) > _g4_s4 ? (28u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v17)) > _g4_s5 ? (32u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v18)) > _g4_s6 ? (48u + sizeof(_g4_t_v18)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 11u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    gaia::GaiaRequest::GetAccessToken((gaia::GaiaRequest::Self *)&v13);
    g4_std::string::assign_str(a4, &v13);
    v4 = (void *)(v13 - 12);
    if ( (uint32_t *)(v13 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    if ( g4_std::string::compare(a4, (char *)&unk_1B15112) != 0 )
    {
      v8 = 0;
      JanusStatus = gaia::Gaia_Janus::GetJanusStatus((gaia::Gaia_Janus::Self *)(a1));
      if ( JanusStatus != 0 )
      {
        v8 = JanusStatus;
        gaia::GaiaRequest::SetResponseCode(a2, JanusStatus);
      }
    }
    else
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "accountType", (int)(uintptr_t)(&v12));
      gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v14), 1);
      v5 = (void *)(v14 - 12);
      if ( (uint32_t *)(v14 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v5);
      }
      if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
      {
        gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v17, (const char *)a2);
        Json::Value::asInt((Json::Value::Self *)v17);
        Json::Value::Destroy((Json::Value::Self *)v17);
        Json::Value::Construct((int)(uintptr_t)(v18), a3);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "scope", (int)(uintptr_t)(&v12) + 3);
        v6 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v15);
        Json::Value::opAssign(v6, (const Json::Value::Self *)v18);
        v7 = (void *)(v15 - 12);
        if ( (uint32_t *)(v15 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v7);
        }
        Json::Value::Destroy((Json::Value::Self *)v18);
        v8 = gaia::Gaia_Janus::StartAndAuthorizeJanus(a1, a2);
        if ( v8 == 0 )
        {
          Instance = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(v16), Instance);
          g4_std::string::assign_str(a4, v16);
          g4_std::string::Destroy(v16);
        }
      }
      else
      {
        return gaia::GaiaRequest::GetResponseCode(a2);
      }
    }
  }
  else
  {
    v8 = -21;
    gaia::GaiaRequest::SetResponseCode(a2, -21);
  }
  return v8;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::SetApprovalStatus_Reject  (binary VA: 0x1458da0)
// Original: gaia::Gaia_Janus::SetApprovalStatus_Reject
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::SetApprovalStatus_Reject(gaia::Gaia_Janus::Self *self, gaia::GaiaRequest::Self *a2)
{
  char IsInitialized;
  int result;
  void *v4;
  void *v5;
  int JanusStatus;
  int v7;
  int Instance;
  int v9;
  typedef gaia::Gaia::Self *_g4_t_AccessToken;
  typedef gaia::Gaia::Self *_g4_t_v11;
  typedef gaia::Gaia::Self *_g4_t_started;
  typedef gaia::Gaia::Self *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint8_t _g4_t_v20[4];
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint8_t _g4_t_v23[96];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (8u + sizeof(_g4_t_AccessToken)) > _g4_s0 ? (8u + sizeof(_g4_t_AccessToken)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v11)) > _g4_s1 ? (8u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_started)) > _g4_s2 ? (8u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v13)) > _g4_s3 ? (8u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v14)) > _g4_s4 ? (24u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v15)) > _g4_s5 ? (28u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v16)) > _g4_s6 ? (32u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v17)) > _g4_s7 ? (36u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v18)) > _g4_s8 ? (40u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v19)) > _g4_s9 ? (44u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v20)) > _g4_s10 ? (48u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v21)) > _g4_s11 ? (52u + sizeof(_g4_t_v21)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v22)) > _g4_s12 ? (56u + sizeof(_g4_t_v22)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v23)) > _g4_s13 ? (60u + sizeof(_g4_t_v23)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_AccessToken &AccessToken = *reinterpret_cast<_g4_t_AccessToken *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 48u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 52u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 56u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "accountType", (int)(uintptr_t)(&v14));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v16), 1);
    v4 = (void *)(v16 - 12);
    if ( (uint32_t *)(v16 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "type", (int)(uintptr_t)(&v14) + 1);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v17), 4);
    v5 = (void *)(v17 - 12);
    if ( (uint32_t *)(v17 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 2522);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v23, a2);
        started = (gaia::Gaia::Self *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v23);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v23);
        return (int)(uintptr_t)(started);
      }
      else
      {
        JanusStatus = gaia::Gaia_Janus::GetJanusStatus(self);
        if ( JanusStatus != 0 )
        {
          v13 = (gaia::Gaia::Self *)JanusStatus;
          gaia::GaiaRequest::SetResponseCode(a2, JanusStatus);
          return (int)(uintptr_t)(v13);
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), (char *)&unk_1B15112, (int)(uintptr_t)(&v15));
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), (char *)&unk_1B15112, (int)(uintptr_t)(&v15) + 1);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "type", (int)(uintptr_t)(&v15) + 2);
          v7 = gaia::GaiaRequest::opIndex(a2, &v21);
          Json::Value::asString((Json::Value::Self *)v20, v7);
          g4_std::string::assign_str(&v19, v20);
          g4_std::string::Destroy(v20);
          g4_std::string::Destroy(&v21);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "approval_grant", (int)(uintptr_t)(&v15) + 3);
          AccessToken = (gaia::Gaia::Self *)gaia::Gaia_Janus::GetAccessToken((gaia::Gaia::Self *)(self), a2, &v22, (int)(uintptr_t)(&v18));
          g4_std::string::Destroy(&v22);
          if ( AccessToken != nullptr )
          {
            gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(AccessToken));
            v9 = (int)(uintptr_t)(AccessToken);
          }
          else
          {
            Instance = gaia::Gaia::GetInstance();
            v9 = gaia::Janus::SetApprovalStatus_Reject(
                   *(gaia::BaseServiceManager::Self **)(Instance + 44),
                   (int)(uintptr_t)(&v18),
                   (int)(uintptr_t)(&v19),
                   (int)(uintptr_t)(a2));
          }
          v11 = (gaia::Gaia::Self *)v9;
          g4_std::string::Destroy(&v19);
          g4_std::string::Destroy(&v18);
          return (int)(uintptr_t)(v11);
        }
      }
    }
    else
    {
      return gaia::GaiaRequest::GetResponseCode(a2);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::SetApprovalStatus_Reject  (binary VA: 0x14590e0)
// Original: gaia::Gaia_Janus::SetApprovalStatus_Reject
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::SetApprovalStatus_Reject(gaia::Gaia_Janus::Self *a1, int a2, uint32_t *a3, char a4, int a5, int a6)
{
  Json::Value::Self *v6;
  void *v7;
  Json::Value::Self *v8;
  void *v9;
  int v10;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint8_t _g4_t_v15[16];
  typedef uint8_t _g4_t_v16[16];
  typedef uint8_t _g4_t_v17[96];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v13)) > _g4_s1 ? (4u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v14)) > _g4_s2 ? (8u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v15)) > _g4_s3 ? (12u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v16)) > _g4_s4 ? (28u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v17)) > _g4_s5 ? (44u + sizeof(_g4_t_v17)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);

  gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v17);
  Json::Value::Construct((Json::Value::Self *)v15, a2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "accountType", (int)(uintptr_t)(&v12));
  v6 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(v17, &v13);
  Json::Value::opAssign(v6, (const Json::Value::Self *)v15);
  v7 = (void *)(v13 - 12);
  if ( (uint32_t *)(v13 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  Json::Value::Destroy((Json::Value::Self *)v15);
  Json::Value::Construct((int)(uintptr_t)(v16), a3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "type", (int)(uintptr_t)(&v12) + 1);
  v8 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(v17, &v14);
  Json::Value::opAssign(v8, (const Json::Value::Self *)v16);
  v9 = (void *)(v14 - 12);
  if ( (uint32_t *)(v14 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  Json::Value::Destroy((Json::Value::Self *)v16);
  if ( a4 != 0 )
    gaia::GaiaRequest::SetRunAsynchronous(v17, a5, a6);
  v10 = gaia::Gaia_Janus::SetApprovalStatus_Reject(a1, (gaia::GaiaRequest::Self *)v17);
  gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v17);
  return v10;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::AddCredentialWithTokenRefresh  (binary VA: 0x1459280)
// Original: gaia::Gaia_Janus::AddCredentialWithTokenRefresh
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::AddCredentialWithTokenRefresh(gaia::Gaia_Janus::Self *self, gaia::GaiaRequest::Self *a2)
{
  Json::Value::Self *v2;
  int Instance;
  unsigned int InitializationAndLoginStatus;
  int AccessToken;
  int v6;
  int v7;
  int v8;
  Json::Value::Self *v9;
  Json::Value::Self *v10;
  void *v11;
  int v12;
  void *v13;
  void *v14;
  void *v15;
  void *v16;
  int started;
  int v19;
  typedef char _g4_t_v20[4];
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef uint8_t _g4_t_v29[16];
  typedef uint8_t _g4_t_v30[96];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (12u + sizeof(_g4_t_v20)) > _g4_s0 ? (12u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v21)) > _g4_s1 ? (32u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v22)) > _g4_s2 ? (44u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (50u + sizeof(_g4_t_v23)) > _g4_s3 ? (50u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v24)) > _g4_s4 ? (56u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v25)) > _g4_s5 ? (60u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v26)) > _g4_s6 ? (64u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v27)) > _g4_s7 ? (68u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v28)) > _g4_s8 ? (72u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v29)) > _g4_s9 ? (76u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_v30)) > _g4_s10 ? (92u + sizeof(_g4_t_v30)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 44u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 50u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 56u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 60u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 64u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 68u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 72u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 76u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 92u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    AccessToken = -21;
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return AccessToken;
  }
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&unk_2119BA0), 4);
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&unk_2119BA4), 4);
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&unk_2119BA8), 1);
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&unk_2119BAC), 1);
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&unk_2119BB0), 4);
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) == 0 )
    return gaia::GaiaRequest::GetResponseCode(a2);
  v2 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119BAC);
  v22 = Json::Value::asInt(v2);
  Instance = gaia::Gaia::GetInstance();
  InitializationAndLoginStatus = gaia::Gaia::GetInitializationAndLoginStatus(Instance, v22);
  AccessToken = InitializationAndLoginStatus;
  if ( InitializationAndLoginStatus != 0 )
  {
    gaia::GaiaRequest::SetResponseCode(a2, InitializationAndLoginStatus);
    return AccessToken;
  }
  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) == 0 )
  {
    v6 = gaia::GaiaRequest::opIndex(a2, &unk_2119BA0);
    Json::Value::asString((Json::Value::Self *)&v24, v6);
    v7 = gaia::GaiaRequest::opIndex(a2, &unk_2119BA4);
    Json::Value::asString((Json::Value::Self *)&v25, v7);
    v8 = gaia::GaiaRequest::opIndex(a2, &unk_2119BB0);
    Json::Value::asString((Json::Value::Self *)&v26, v8);
    v9 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119BA8);
    v21 = Json::Value::asInt(v9);
    v27 = (int)(uintptr_t)(&dword_213B814);
    Json::Value::Construct((Json::Value::Self *)v29, v22);
    v10 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119BB4);
    Json::Value::opAssign(v10, (const Json::Value::Self *)v29);
    Json::Value::Destroy((Json::Value::Self *)v29);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "auth", (int)(uintptr_t)(&v23));
    AccessToken = gaia::Gaia_Janus::GetAccessToken((gaia::Gaia::Self *)(self), a2, &v28, (int)(uintptr_t)(&v27));
    v11 = (void *)(v28 - 12);
    if ( (uint32_t *)(v28 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v11);
    }
    if ( AccessToken != 0 )
    {
      gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
    }
    else
    {
      v12 = gaia::Gaia::GetInstance();
      AccessToken = gaia::Janus::AddCredential(
                      *(gaia::BaseServiceManager::Self **)(v12 + 44),
                      (int)(uintptr_t)(&v24),
                      (int)(uintptr_t)(&v25),
                      v21,
                      (int)(uintptr_t)(&v27),
                      (int)(uintptr_t)(&v26),
                      (int)(uintptr_t)(a2));
      gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
      if ( AccessToken == 0 )
      {
        v19 = gaia::Gaia::GetInstance();
        gaia::Janus::FlushTokensLoggedAccount(*(uint32_t *)(v19 + 44), v21, &v24, &v25);
        v20[0] = 0;
        (*(void (**)(uint32_t, uint32_t, int, char *))(*(uint32_t *)ISingleton<gaia::GaiaActionsManager::Self>::s_instance + 8))(
          (uint32_t)(uintptr_t)(ISingleton<gaia::GaiaActionsManager::Self>::s_instance),
          0,
          1,
          *(char **)v20);
      }
    }
    v13 = (void *)(v27 - 12);
    if ( (uint32_t *)(v27 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v13);
    }
    v14 = (void *)(v26 - 12);
    if ( (uint32_t *)(v26 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v14);
    }
    v15 = (void *)(v25 - 12);
    if ( (uint32_t *)(v25 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v15);
    }
    v16 = (void *)(v24 - 12);
    if ( (uint32_t *)(v24 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v16);
    }
    return AccessToken;
  }
  gaia::GaiaRequest::SetOperationCode(a2, 2514);
  gaia::Gaia::GetInstance();
  gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v30, a2);
  started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v30);
  gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v30);
  return started;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::AddCredentialWithTokenRefresh  (binary VA: 0x1459710)
// Original: gaia::Gaia_Janus::AddCredentialWithTokenRefresh
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::AddCredentialWithTokenRefresh(gaia::Gaia_Janus::Self *a1, uint32_t *a2, uint32_t *a3, int a4, int a5, uint32_t *a6, char a7, int a8, int a9)
{
  Json::Value::Self *v9;
  Json::Value::Self *v10;
  Json::Value::Self *v11;
  Json::Value::Self *v12;
  Json::Value::Self *v13;
  int v14;
  typedef uint8_t _g4_t_v16[16];
  typedef uint8_t _g4_t_v17[16];
  typedef uint8_t _g4_t_v18[16];
  typedef uint8_t _g4_t_v19[16];
  typedef uint8_t _g4_t_v20[16];
  typedef uint8_t _g4_t_v21[96];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (12u + sizeof(_g4_t_v16)) > _g4_s0 ? (12u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v17)) > _g4_s1 ? (28u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v18)) > _g4_s2 ? (44u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v19)) > _g4_s3 ? (60u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (76u + sizeof(_g4_t_v20)) > _g4_s4 ? (76u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (92u + sizeof(_g4_t_v21)) > _g4_s5 ? (92u + sizeof(_g4_t_v21)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 60u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 76u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 92u);

  gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v21);
  Json::Value::Construct((int)(uintptr_t)(v16), a2);
  v9 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(v21, &unk_2119BA0);
  Json::Value::opAssign(v9, (const Json::Value::Self *)v16);
  Json::Value::Destroy((Json::Value::Self *)v16);
  Json::Value::Construct((int)(uintptr_t)(v17), a3);
  v10 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(v21, &unk_2119BA4);
  Json::Value::opAssign(v10, (const Json::Value::Self *)v17);
  Json::Value::Destroy((Json::Value::Self *)v17);
  Json::Value::Construct((Json::Value::Self *)v18, a4);
  v11 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(v21, &unk_2119BA8);
  Json::Value::opAssign(v11, (const Json::Value::Self *)v18);
  Json::Value::Destroy((Json::Value::Self *)v18);
  Json::Value::Construct((Json::Value::Self *)v19, a5);
  v12 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(v21, &unk_2119BAC);
  Json::Value::opAssign(v12, (const Json::Value::Self *)v19);
  Json::Value::Destroy((Json::Value::Self *)v19);
  Json::Value::Construct((int)(uintptr_t)(v20), a6);
  v13 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(v21, &unk_2119BB0);
  Json::Value::opAssign(v13, (const Json::Value::Self *)v20);
  Json::Value::Destroy((Json::Value::Self *)v20);
  if ( a7 != 0 )
    gaia::GaiaRequest::SetRunAsynchronous(v21, a8, a9);
  v14 = gaia::Gaia_Janus::AddCredentialWithTokenRefresh(a1, (gaia::GaiaRequest::Self *)v21);
  gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v21);
  return v14;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::AddAlias  (binary VA: 0x14598c0)
// Original: gaia::Gaia_Janus::AddAlias
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::AddAlias(gaia::Gaia_Janus::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  int JanusStatus;
  void *v5;
  int AccessToken;
  int Instance;
  int result;
  void *v9;
  uint32_t *v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_started;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef void *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef uint8_t _g4_t_v25[16];
  typedef uint8_t _g4_t_v26[96];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v12)) > _g4_s1 ? (8u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_started)) > _g4_s2 ? (8u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v14)) > _g4_s3 ? (8u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v15)) > _g4_s4 ? (8u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v16)) > _g4_s5 ? (12u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (27u + sizeof(_g4_t_v17)) > _g4_s6 ? (27u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v18)) > _g4_s7 ? (28u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v19)) > _g4_s8 ? (36u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v20)) > _g4_s9 ? (40u + sizeof(_g4_t_v20)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v21)) > _g4_s10 ? (44u + sizeof(_g4_t_v21)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v22)) > _g4_s11 ? (48u + sizeof(_g4_t_v22)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v23)) > _g4_s12 ? (52u + sizeof(_g4_t_v23)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v24)) > _g4_s13 ? (56u + sizeof(_g4_t_v24)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v25)) > _g4_s14 ? (60u + sizeof(_g4_t_v25)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v26)) > _g4_s15 ? (76u + sizeof(_g4_t_v26)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 27u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 36u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 48u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 52u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 56u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 60u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 76u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "accountType", (int)(uintptr_t)(&v17));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v19), 1);
    v2 = (void *)(v19 - 12);
    if ( (uint32_t *)(v19 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "alias", (int)(uintptr_t)(&v18));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v20), 4);
    v3 = (void *)(v20 - 12);
    if ( (uint32_t *)(v20 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 2520);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v26, a2);
        started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v26);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v26);
        return started;
      }
      else
      {
        JanusStatus = gaia::Gaia_Janus::GetJanusStatus(self);
        if ( JanusStatus != 0 )
        {
          v14 = JanusStatus;
          gaia::GaiaRequest::SetResponseCode(a2, JanusStatus);
          return v14;
        }
        else
        {
          v21 = &dword_213B814;
          v22 = (int)(uintptr_t)(&dword_213B814);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v25, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v23, (int)(uintptr_t)(v25));
          g4_std::string::assign_str(&v21, &v23);
          v5 = (void *)(v23 - 12);
          if ( (uint32_t *)(v23 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v5);
          }
          Json::Value::Destroy((Json::Value::Self *)v25);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "auth", (int)(uintptr_t)(&v18) + 1);
          AccessToken = gaia::Gaia_Janus::GetAccessToken((gaia::Gaia::Self *)(self), a2, &v24, (int)(uintptr_t)(&v22));
          v16 = (void *)(v24 - 12);
          if ( (uint32_t *)(v24 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
          {
            v15 = AccessToken;
            g4_std::string::Rep::M_destroy(v16);
            AccessToken = v15;
          }
          if ( AccessToken != 0 )
          {
            v11 = AccessToken;
            gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
          }
          else
          {
            Instance = gaia::Gaia::GetInstance();
            v11 = gaia::Janus::AddAlias(*(uint32_t *)(Instance + 44), &v21, &v22, a2);
            gaia::GaiaRequest::SetResponse(a2, &v21);
            gaia::GaiaRequest::SetResponseCode(a2, v11);
          }
          result = v11;
          v9 = (void *)(v22 - 12);
          if ( (uint32_t *)(v22 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v9);
            result = v11;
          }
          v10 = v21 - 3;
          if ( v21 - 3 != dword_213B808 && __sync_fetch_and_add(v21 - 1, 0xFFFFFFFF) <= 0 )
          {
            v12 = result;
            g4_std::string::Rep::M_destroy(v10);
            return v12;
          }
        }
      }
    }
    else
    {
      return gaia::GaiaRequest::GetResponseCode(a2);
    }
  }
  else
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::FindUserByAlias  (binary VA: 0x1459ca0)
// Original: gaia::Gaia_Janus::FindUserByAlias
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::FindUserByAlias(gaia::Gaia_Janus::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  int JanusStatus;
  void *v5;
  int AccessToken;
  int Instance;
  int result;
  uint32_t *v9;
  void *v10;
  uint32_t *v11;
  typedef int _g4_t_UserByAlias;
  typedef int _g4_t_v13;
  typedef int _g4_t_started;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef void *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint32_t *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef uint32_t *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint8_t _g4_t_v28[16];
  typedef uint8_t _g4_t_v29[96];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (8u + sizeof(_g4_t_UserByAlias)) > _g4_s0 ? (8u + sizeof(_g4_t_UserByAlias)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_started)) > _g4_s2 ? (8u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v15)) > _g4_s3 ? (8u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v16)) > _g4_s4 ? (8u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v17)) > _g4_s5 ? (8u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v18)) > _g4_s6 ? (12u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (22u + sizeof(_g4_t_v19)) > _g4_s7 ? (22u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v20)) > _g4_s8 ? (24u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v21)) > _g4_s9 ? (32u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v22)) > _g4_s10 ? (36u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v23)) > _g4_s11 ? (40u + sizeof(_g4_t_v23)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v24)) > _g4_s12 ? (44u + sizeof(_g4_t_v24)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v25)) > _g4_s13 ? (48u + sizeof(_g4_t_v25)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v26)) > _g4_s14 ? (52u + sizeof(_g4_t_v26)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v27)) > _g4_s15 ? (56u + sizeof(_g4_t_v27)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v28)) > _g4_s16 ? (60u + sizeof(_g4_t_v28)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v29)) > _g4_s17 ? (76u + sizeof(_g4_t_v29)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_UserByAlias &UserByAlias = *reinterpret_cast<_g4_t_UserByAlias *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 22u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 52u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 56u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 60u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 76u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "accountType", (int)(uintptr_t)(&v19));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v21), 1);
    v2 = (void *)(v21 - 12);
    if ( (uint32_t *)(v21 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "alias", (int)(uintptr_t)(&v19) + 1);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v22), 4);
    v3 = (void *)(v22 - 12);
    if ( (uint32_t *)(v22 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 2521);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v29, a2);
        started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v29);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v29);
        return started;
      }
      else
      {
        JanusStatus = gaia::Gaia_Janus::GetJanusStatus(self);
        if ( JanusStatus != 0 )
        {
          v15 = JanusStatus;
          gaia::GaiaRequest::SetResponseCode(a2, JanusStatus);
          return v15;
        }
        else
        {
          v23 = &dword_213B814;
          v24 = (int)(uintptr_t)(&dword_213B814);
          v25 = &dword_213B814;
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v28, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v26, (int)(uintptr_t)(v28));
          g4_std::string::assign_str(&v23, &v26);
          v5 = (void *)(v26 - 12);
          if ( (uint32_t *)(v26 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v5);
          }
          Json::Value::Destroy((Json::Value::Self *)v28);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "auth", (int)(uintptr_t)(&v20));
          AccessToken = gaia::Gaia_Janus::GetAccessToken(self, a2, &v27, (int)(uintptr_t)(&v24));
          v18 = (void *)(v27 - 12);
          if ( (uint32_t *)(v27 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
          {
            v17 = AccessToken;
            g4_std::string::Rep::M_destroy(v18);
            AccessToken = v17;
          }
          if ( AccessToken != 0 )
          {
            UserByAlias = AccessToken;
            gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
          }
          else
          {
            Instance = gaia::Gaia::GetInstance();
            UserByAlias = gaia::Janus::FindUserByAlias(*(uint32_t *)(Instance + 44), &v25, &v23, &v24, a2);
            gaia::GaiaRequest::SetResponse(a2, &v25);
            gaia::GaiaRequest::SetResponseCode(a2, UserByAlias);
          }
          result = UserByAlias;
          v9 = v25 - 3;
          if ( v25 - 3 != dword_213B808 && __sync_fetch_and_add(v25 - 1, 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v9);
            result = UserByAlias;
          }
          v10 = (void *)(v24 - 12);
          if ( (uint32_t *)(v24 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
          {
            v16 = result;
            g4_std::string::Rep::M_destroy(v10);
            result = v16;
          }
          v11 = v23 - 3;
          if ( v23 - 3 != dword_213B808 && __sync_fetch_and_add(v23 - 1, 0xFFFFFFFF) <= 0 )
          {
            v13 = result;
            g4_std::string::Rep::M_destroy(v11);
            return v13;
          }
        }
      }
    }
    else
    {
      return gaia::GaiaRequest::GetResponseCode(a2);
    }
  }
  else
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::CreateTransferCode  (binary VA: 0x145a0c0)
// Original: gaia::Gaia_Janus::CreateTransferCode
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::CreateTransferCode(gaia::Gaia_Janus::Self *self, gaia::GaiaRequest::Self *a2)
{
  int JanusStatus;
  void *v3;
  int Instance;
  int result;
  uint32_t *v6;
  void *v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_started;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint32_t *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint8_t _g4_t_v16[80];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_started)) > _g4_s2 ? (12u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v11)) > _g4_s3 ? (12u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (27u + sizeof(_g4_t_v12)) > _g4_s4 ? (27u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v13)) > _g4_s5 ? (32u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v14)) > _g4_s6 ? (36u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v15)) > _g4_s7 ? (40u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v16)) > _g4_s8 ? (44u + sizeof(_g4_t_v16)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 27u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
    {
      gaia::GaiaRequest::SetOperationCode(a2, 2525);
      gaia::Gaia::GetInstance();
      gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v16, a2);
      started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v16);
      gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v16);
      return started;
    }
    else
    {
      JanusStatus = gaia::Gaia_Janus::GetJanusStatus(self);
      if ( JanusStatus != 0 )
      {
        v9 = JanusStatus;
        gaia::GaiaRequest::SetResponseCode(a2, JanusStatus);
        return v9;
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), (char *)&unk_1B15112, (int)(uintptr_t)(&v12));
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "auth", (int)(uintptr_t)(&v12) + 1);
        gaia::Gaia_Janus::GetAccessToken(self, a2, &v15, (int)(uintptr_t)(&v13));
        v3 = (void *)(v15 - 12);
        if ( (uint32_t *)(v15 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v3);
        }
        v14 = &dword_213B814;
        Instance = gaia::Gaia::GetInstance();
        v8 = gaia::Janus::CreateTransferCode(*(uint32_t *)(Instance + 44), &v14, &v13, a2);
        gaia::GaiaRequest::SetResponse(a2, &v14);
        gaia::GaiaRequest::SetResponseCode(a2, v8);
        result = v8;
        v6 = v14 - 3;
        if ( v14 - 3 != dword_213B808 && __sync_fetch_and_add(v14 - 1, 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v6);
          result = v8;
        }
        v7 = (void *)(v13 - 12);
        if ( (uint32_t *)(v13 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
        {
          v11 = result;
          g4_std::string::Rep::M_destroy(v7);
          return v11;
        }
      }
    }
  }
  else
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::TransferCodeToken  (binary VA: 0x145a330)
// Original: gaia::Gaia_Janus::TransferCodeToken
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::TransferCodeToken(gaia::Gaia_Janus::Self *a1, int a2, char a3, int a4, int a5)
{
  int TransferCode;
  uint8_t v7[68];

  gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v7);
  if ( a3 != 0 )
    gaia::GaiaRequest::SetRunAsynchronous(v7, a4, a5);
  TransferCode = gaia::Gaia_Janus::CreateTransferCode(a1, (gaia::GaiaRequest::Self *)v7);
  gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v7);
  return TransferCode;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::CreateTransferCode  (binary VA: 0x145a3b0)
// Original: gaia::Gaia_Janus::CreateTransferCode
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::CreateTransferCode(gaia::Gaia_Janus::Self *a1, char a2, int a3, int a4)
{
  int TransferCode;
  uint8_t v6[68];

  gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v6);
  if ( a2 != 0 )
    gaia::GaiaRequest::SetRunAsynchronous(v6, a3, a4);
  TransferCode = gaia::Gaia_Janus::CreateTransferCode(a1, (gaia::GaiaRequest::Self *)v6);
  gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v6);
  return TransferCode;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::AddPermission  (binary VA: 0x145a430)
// Original: gaia::Gaia_Janus::AddPermission
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::AddPermission(gaia::Gaia_Janus::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  int JanusStatus;
  void *v7;
  void *v8;
  Json::Value::Self *v9;
  void *v10;
  int AccessToken;
  void *v12;
  int Instance;
  int result;
  void *v15;
  void *v16;
  void *v17;
  typedef Json::Value::Self *_g4_t_v18;
  typedef Json::Value::Self *_g4_t_v19;
  typedef Json::Value::Self *_g4_t_started;
  typedef Json::Value::Self *_g4_t_v21;
  typedef Json::Value::Self *_g4_t_v22;
  typedef Json::Value::Self *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef char _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef uint8_t _g4_t_v41[16];
  typedef uint8_t _g4_t_v42[16];
  typedef uint8_t _g4_t_v43[16];
  typedef uint8_t _g4_t_v44[16];
  typedef uint8_t _g4_t_v45[16];
  typedef uint8_t _g4_t_v46[96];
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (0u + sizeof(_g4_t_v18)) > _g4_s0 ? (0u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v19)) > _g4_s1 ? (0u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_started)) > _g4_s2 ? (0u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v21)) > _g4_s3 ? (0u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v22)) > _g4_s4 ? (0u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v23)) > _g4_s5 ? (0u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v24)) > _g4_s6 ? (4u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v25)) > _g4_s7 ? (8u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v26)) > _g4_s8 ? (24u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v27)) > _g4_s9 ? (28u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v28)) > _g4_s10 ? (32u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v29)) > _g4_s11 ? (44u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v30)) > _g4_s12 ? (48u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v31)) > _g4_s13 ? (52u + sizeof(_g4_t_v31)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v32)) > _g4_s14 ? (56u + sizeof(_g4_t_v32)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v33)) > _g4_s15 ? (60u + sizeof(_g4_t_v33)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v34)) > _g4_s16 ? (64u + sizeof(_g4_t_v34)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v35)) > _g4_s17 ? (68u + sizeof(_g4_t_v35)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v36)) > _g4_s18 ? (72u + sizeof(_g4_t_v36)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v37)) > _g4_s19 ? (76u + sizeof(_g4_t_v37)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v38)) > _g4_s20 ? (80u + sizeof(_g4_t_v38)) : _g4_s20,
    _g4_s22 = (84u + sizeof(_g4_t_v39)) > _g4_s21 ? (84u + sizeof(_g4_t_v39)) : _g4_s21,
    _g4_s23 = (88u + sizeof(_g4_t_v40)) > _g4_s22 ? (88u + sizeof(_g4_t_v40)) : _g4_s22,
    _g4_s24 = (92u + sizeof(_g4_t_v41)) > _g4_s23 ? (92u + sizeof(_g4_t_v41)) : _g4_s23,
    _g4_s25 = (108u + sizeof(_g4_t_v42)) > _g4_s24 ? (108u + sizeof(_g4_t_v42)) : _g4_s24,
    _g4_s26 = (124u + sizeof(_g4_t_v43)) > _g4_s25 ? (124u + sizeof(_g4_t_v43)) : _g4_s25,
    _g4_s27 = (140u + sizeof(_g4_t_v44)) > _g4_s26 ? (140u + sizeof(_g4_t_v44)) : _g4_s26,
    _g4_s28 = (156u + sizeof(_g4_t_v45)) > _g4_s27 ? (156u + sizeof(_g4_t_v45)) : _g4_s27,
    _g4_s29 = (172u + sizeof(_g4_t_v46)) > _g4_s28 ? (172u + sizeof(_g4_t_v46)) : _g4_s28
  };
  alignas(16) uint8_t _g4_sf[_g4_s29];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 4u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 48u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 52u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 56u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 60u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 64u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 68u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 72u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 76u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 80u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 84u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 88u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 92u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 108u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 124u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 140u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 156u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 172u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "username", (int)(uintptr_t)(&v26));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v29), 4);
    v2 = (void *)(v29 - 12);
    if ( (uint32_t *)(v29 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "scope", (int)(uintptr_t)(&v26) + 1);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v30), 4);
    v3 = (void *)(v30 - 12);
    if ( (uint32_t *)(v30 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "credential_type", (int)(uintptr_t)(&v26) + 2);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v31), 1);
    v4 = (void *)(v31 - 12);
    if ( (uint32_t *)(v31 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "credentialsToLinkTo", (int)(uintptr_t)(&v26) + 3);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v32), 1);
    v5 = (void *)(v32 - 12);
    if ( (uint32_t *)(v32 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v32 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 2516);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v46, a2);
        started = (Json::Value::Self *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v46);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v46);
        return (int)(uintptr_t)(started);
      }
      else
      {
        JanusStatus = gaia::Gaia_Janus::GetJanusStatus(self);
        if ( JanusStatus != 0 )
        {
          v21 = (Json::Value::Self *)JanusStatus;
          gaia::GaiaRequest::SetResponseCode(a2, JanusStatus);
          return (int)(uintptr_t)(v21);
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), (char *)&unk_1B15112, (int)(uintptr_t)(&v27));
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), (char *)&unk_1B15112, (int)(uintptr_t)(&v27) + 1);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), (char *)&unk_1B15112, (int)(uintptr_t)(&v27) + 2);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v41, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v36, (int)(uintptr_t)(v41));
          g4_std::string::assign_str(&v33, &v36);
          v7 = (void *)(v36 - 12);
          if ( (uint32_t *)(v36 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v36 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v7);
          }
          Json::Value::Destroy((Json::Value::Self *)v41);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v42, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v37, (int)(uintptr_t)(v42));
          g4_std::string::assign_str(&v34, &v37);
          v8 = (void *)(v37 - 12);
          if ( (uint32_t *)(v37 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v8);
          }
          Json::Value::Destroy((Json::Value::Self *)v42);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v43, (const char *)a2);
          v25 = Json::Value::asInt((Json::Value::Self *)v43);
          Json::Value::Destroy((Json::Value::Self *)v43);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v44, (const char *)a2);
          v24 = Json::Value::asInt((Json::Value::Self *)v44);
          Json::Value::Destroy((Json::Value::Self *)v44);
          Json::Value::Construct((Json::Value::Self *)v45, v24);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "accountType", (int)(uintptr_t)(&v27) + 3);
          v9 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v38);
          Json::Value::opAssign(v9, (const Json::Value::Self *)v45);
          v10 = (void *)(v38 - 12);
          if ( (uint32_t *)(v38 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v38 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v10);
          }
          Json::Value::Destroy((Json::Value::Self *)v45);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "auth", (int)(uintptr_t)(&v28));
          AccessToken = gaia::Gaia_Janus::GetAccessToken(self, a2, &v39, (int)(uintptr_t)(&v35));
          v12 = (void *)(v39 - 12);
          if ( (uint32_t *)(v39 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
          {
            v23 = (Json::Value::Self *)AccessToken;
            g4_std::string::Rep::M_destroy(v12);
            AccessToken = (int)(uintptr_t)(v23);
          }
          if ( AccessToken != 0 )
          {
            v18 = (Json::Value::Self *)AccessToken;
            gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
          }
          else
          {
            gaia::Gaia_Janus::GetJanusToken((int)(uintptr_t)(&v40), self);
            Instance = gaia::Gaia::GetInstance();
            v18 = (Json::Value::Self *)gaia::Janus::AddPermission(
                                   *(gaia::BaseServiceManager::Self **)(Instance + 44),
                                   (int)(uintptr_t)(&v33),
                                   v25,
                                   (int)(uintptr_t)(&v40),
                                   (int)(uintptr_t)(&v34),
                                   (int)(uintptr_t)(a2));
            g4_std::string::Destroy(&v40);
            gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(v18));
          }
          result = (int)(uintptr_t)(v18);
          v15 = (void *)(v35 - 12);
          if ( (uint32_t *)(v35 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v35 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v15);
            result = (int)(uintptr_t)(v18);
          }
          v16 = (void *)(v34 - 12);
          if ( (uint32_t *)(v34 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
          {
            v22 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v16);
            result = (int)(uintptr_t)(v22);
          }
          v17 = (void *)(v33 - 12);
          if ( (uint32_t *)(v33 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
          {
            v19 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v17);
            return (int)(uintptr_t)(v19);
          }
        }
      }
    }
    else
    {
      return gaia::GaiaRequest::GetResponseCode(a2);
    }
  }
  else
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::RemoveCredential  (binary VA: 0x145ab40)
// Original: gaia::Gaia_Janus::RemoveCredential
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::RemoveCredential(gaia::Gaia_Janus::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  int JanusStatus;
  void *v6;
  Json::Value::Self *v7;
  void *v8;
  int AccessToken;
  void *v10;
  int result;
  void *v12;
  void *v13;
  int Instance;
  typedef Json::Value::Self *_g4_t_v15;
  typedef Json::Value::Self *_g4_t_v16;
  typedef Json::Value::Self *_g4_t_started;
  typedef Json::Value::Self *_g4_t_v18;
  typedef Json::Value::Self *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef char _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef uint8_t _g4_t_v32[16];
  typedef uint8_t _g4_t_v33[16];
  typedef uint8_t _g4_t_v34[16];
  typedef uint8_t _g4_t_v35[16];
  typedef uint8_t _g4_t_v36[96];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v16)) > _g4_s1 ? (0u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_started)) > _g4_s2 ? (0u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v18)) > _g4_s3 ? (0u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v19)) > _g4_s4 ? (0u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v20)) > _g4_s5 ? (4u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v21)) > _g4_s6 ? (12u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (30u + sizeof(_g4_t_v22)) > _g4_s7 ? (30u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v23)) > _g4_s8 ? (32u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v24)) > _g4_s9 ? (44u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v25)) > _g4_s10 ? (48u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v26)) > _g4_s11 ? (52u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v27)) > _g4_s12 ? (56u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v28)) > _g4_s13 ? (60u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v29)) > _g4_s14 ? (64u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v30)) > _g4_s15 ? (68u + sizeof(_g4_t_v30)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v31)) > _g4_s16 ? (72u + sizeof(_g4_t_v31)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v32)) > _g4_s17 ? (76u + sizeof(_g4_t_v32)) : _g4_s17,
    _g4_s19 = (92u + sizeof(_g4_t_v33)) > _g4_s18 ? (92u + sizeof(_g4_t_v33)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v34)) > _g4_s19 ? (108u + sizeof(_g4_t_v34)) : _g4_s19,
    _g4_s21 = (124u + sizeof(_g4_t_v35)) > _g4_s20 ? (124u + sizeof(_g4_t_v35)) : _g4_s20,
    _g4_s22 = (140u + sizeof(_g4_t_v36)) > _g4_s21 ? (140u + sizeof(_g4_t_v36)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 30u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 52u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 56u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 60u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 64u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 68u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 72u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 76u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 92u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 108u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 124u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 140u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "account_type", (int)(uintptr_t)(&v22));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v24), 1);
    v2 = (void *)(v24 - 12);
    if ( (uint32_t *)(v24 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "credential_username", (int)(uintptr_t)(&v22) + 1);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v25), 4);
    v3 = (void *)(v25 - 12);
    if ( (uint32_t *)(v25 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "credential_type", (int)(uintptr_t)(&v23));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v26), 1);
    v4 = (void *)(v26 - 12);
    if ( (uint32_t *)(v26 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 2515);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v36, a2);
        started = (Json::Value::Self *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v36);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v36);
        return (int)(uintptr_t)(started);
      }
      else
      {
        JanusStatus = gaia::Gaia_Janus::GetJanusStatus(self);
        if ( JanusStatus != 0 )
        {
          v18 = (Json::Value::Self *)JanusStatus;
          gaia::GaiaRequest::SetResponseCode(a2, JanusStatus);
          return (int)(uintptr_t)(v18);
        }
        else
        {
          v27 = (int)(uintptr_t)(&dword_213B814);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), (char *)&unk_1B15112, (int)(uintptr_t)(&v23) + 1);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v32, (const char *)a2);
          v20 = Json::Value::asInt((Json::Value::Self *)v32);
          Json::Value::Destroy((Json::Value::Self *)v32);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v33, (const char *)a2);
          v21 = Json::Value::asInt((Json::Value::Self *)v33);
          Json::Value::Destroy((Json::Value::Self *)v33);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v34, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v29, (int)(uintptr_t)(v34));
          g4_std::string::assign_str(&v27, &v29);
          v6 = (void *)(v29 - 12);
          if ( (uint32_t *)(v29 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v6);
          }
          Json::Value::Destroy((Json::Value::Self *)v34);
          Json::Value::Construct((Json::Value::Self *)v35, v20);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "accountType", (int)(uintptr_t)(&v23) + 2);
          v7 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v30);
          Json::Value::opAssign(v7, (const Json::Value::Self *)v35);
          v8 = (void *)(v30 - 12);
          if ( (uint32_t *)(v30 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v8);
          }
          Json::Value::Destroy((Json::Value::Self *)v35);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "auth", (int)(uintptr_t)(&v23) + 3);
          AccessToken = gaia::Gaia_Janus::GetAccessToken(self, a2, &v31, (int)(uintptr_t)(&v28));
          v10 = (void *)(v31 - 12);
          if ( (uint32_t *)(v31 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
          {
            v19 = (Json::Value::Self *)AccessToken;
            g4_std::string::Rep::M_destroy(v10);
            AccessToken = (int)(uintptr_t)(v19);
          }
          if ( AccessToken == 0 )
          {
            Instance = gaia::Gaia::GetInstance();
            AccessToken = gaia::Janus::RemoveCredential(
                            *(gaia::BaseServiceManager::Self **)(Instance + 44),
                            v21,
                            (int)(uintptr_t)(&v27),
                            (int)(uintptr_t)(&v28),
                            (int)(uintptr_t)(a2));
          }
          v15 = (Json::Value::Self *)AccessToken;
          gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
          result = (int)(uintptr_t)(v15);
          v12 = (void *)(v28 - 12);
          if ( (uint32_t *)(v28 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v12);
            result = (int)(uintptr_t)(v15);
          }
          v13 = (void *)(v27 - 12);
          if ( (uint32_t *)(v27 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
          {
            v16 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v13);
            return (int)(uintptr_t)(v16);
          }
        }
      }
    }
    else
    {
      return gaia::GaiaRequest::GetResponseCode(a2);
    }
  }
  else
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::AddCredential  (binary VA: 0x145b080)
// Original: gaia::Gaia_Janus::AddCredential
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::AddCredential(gaia::Gaia_Janus::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  void *v6;
  int JanusStatus;
  void *v8;
  void *v9;
  void *v10;
  Json::Value::Self *v11;
  void *v12;
  int AccessToken;
  void *v14;
  int Instance;
  int result;
  void *v17;
  void *v18;
  void *v19;
  void *v20;
  typedef char _g4_t_v21[4];
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_started;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef char _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef uint8_t _g4_t_v50[16];
  typedef uint8_t _g4_t_v51[16];
  typedef uint8_t _g4_t_v52[16];
  typedef uint8_t _g4_t_v53[16];
  typedef uint8_t _g4_t_v54[16];
  typedef uint8_t _g4_t_v55[16];
  typedef uint8_t _g4_t_v56[96];
  enum : size_t {
    _g4_s0 = 416u,
    _g4_s1 = (12u + sizeof(_g4_t_v21)) > _g4_s0 ? (12u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v22)) > _g4_s1 ? (44u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v23)) > _g4_s2 ? (44u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v24)) > _g4_s3 ? (44u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_started)) > _g4_s4 ? (44u + sizeof(_g4_t_started)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v26)) > _g4_s5 ? (44u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v27)) > _g4_s6 ? (44u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v28)) > _g4_s7 ? (44u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v29)) > _g4_s8 ? (44u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v30)) > _g4_s9 ? (44u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v31)) > _g4_s10 ? (44u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v32)) > _g4_s11 ? (48u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (78u + sizeof(_g4_t_v33)) > _g4_s12 ? (78u + sizeof(_g4_t_v33)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v34)) > _g4_s13 ? (80u + sizeof(_g4_t_v34)) : _g4_s13,
    _g4_s15 = (84u + sizeof(_g4_t_v35)) > _g4_s14 ? (84u + sizeof(_g4_t_v35)) : _g4_s14,
    _g4_s16 = (100u + sizeof(_g4_t_v36)) > _g4_s15 ? (100u + sizeof(_g4_t_v36)) : _g4_s15,
    _g4_s17 = (104u + sizeof(_g4_t_v37)) > _g4_s16 ? (104u + sizeof(_g4_t_v37)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v38)) > _g4_s17 ? (108u + sizeof(_g4_t_v38)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v39)) > _g4_s18 ? (112u + sizeof(_g4_t_v39)) : _g4_s18,
    _g4_s20 = (116u + sizeof(_g4_t_v40)) > _g4_s19 ? (116u + sizeof(_g4_t_v40)) : _g4_s19,
    _g4_s21 = (120u + sizeof(_g4_t_v41)) > _g4_s20 ? (120u + sizeof(_g4_t_v41)) : _g4_s20,
    _g4_s22 = (124u + sizeof(_g4_t_v42)) > _g4_s21 ? (124u + sizeof(_g4_t_v42)) : _g4_s21,
    _g4_s23 = (128u + sizeof(_g4_t_v43)) > _g4_s22 ? (128u + sizeof(_g4_t_v43)) : _g4_s22,
    _g4_s24 = (132u + sizeof(_g4_t_v44)) > _g4_s23 ? (132u + sizeof(_g4_t_v44)) : _g4_s23,
    _g4_s25 = (136u + sizeof(_g4_t_v45)) > _g4_s24 ? (136u + sizeof(_g4_t_v45)) : _g4_s24,
    _g4_s26 = (140u + sizeof(_g4_t_v46)) > _g4_s25 ? (140u + sizeof(_g4_t_v46)) : _g4_s25,
    _g4_s27 = (144u + sizeof(_g4_t_v47)) > _g4_s26 ? (144u + sizeof(_g4_t_v47)) : _g4_s26,
    _g4_s28 = (148u + sizeof(_g4_t_v48)) > _g4_s27 ? (148u + sizeof(_g4_t_v48)) : _g4_s27,
    _g4_s29 = (152u + sizeof(_g4_t_v49)) > _g4_s28 ? (152u + sizeof(_g4_t_v49)) : _g4_s28,
    _g4_s30 = (156u + sizeof(_g4_t_v50)) > _g4_s29 ? (156u + sizeof(_g4_t_v50)) : _g4_s29,
    _g4_s31 = (172u + sizeof(_g4_t_v51)) > _g4_s30 ? (172u + sizeof(_g4_t_v51)) : _g4_s30,
    _g4_s32 = (188u + sizeof(_g4_t_v52)) > _g4_s31 ? (188u + sizeof(_g4_t_v52)) : _g4_s31,
    _g4_s33 = (204u + sizeof(_g4_t_v53)) > _g4_s32 ? (204u + sizeof(_g4_t_v53)) : _g4_s32,
    _g4_s34 = (220u + sizeof(_g4_t_v54)) > _g4_s33 ? (220u + sizeof(_g4_t_v54)) : _g4_s33,
    _g4_s35 = (236u + sizeof(_g4_t_v55)) > _g4_s34 ? (236u + sizeof(_g4_t_v55)) : _g4_s34,
    _g4_s36 = (252u + sizeof(_g4_t_v56)) > _g4_s35 ? (252u + sizeof(_g4_t_v56)) : _g4_s35
  };
  alignas(16) uint8_t _g4_sf[_g4_s36];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 44u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 44u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 44u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 44u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 78u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 80u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 84u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 100u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 104u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 108u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 112u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 116u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 120u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 124u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 128u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 132u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 136u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 140u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 144u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 148u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 152u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 156u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 172u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 188u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 204u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 220u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 236u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 252u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "username", (int)(uintptr_t)(&v33));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v36), 4);
    v2 = (void *)(v36 - 12);
    if ( (uint32_t *)(v36 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v36 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "password", (int)(uintptr_t)(&v33) + 1);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v37), 4);
    v3 = (void *)(v37 - 12);
    if ( (uint32_t *)(v37 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "credential_type", (int)(uintptr_t)(&v34));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v38), 1);
    v4 = (void *)(v38 - 12);
    if ( (uint32_t *)(v38 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v38 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "credentialsToLinkTo", (int)(uintptr_t)(&v34) + 1);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v39), 1);
    v5 = (void *)(v39 - 12);
    if ( (uint32_t *)(v39 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "if_exists", (int)(uintptr_t)(&v34) + 2);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v40), 4);
    v6 = (void *)(v40 - 12);
    if ( (uint32_t *)(v40 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v40 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 2513);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v56, a2);
        started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v56);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v56);
        return started;
      }
      else
      {
        JanusStatus = gaia::Gaia_Janus::GetJanusStatus(self);
        if ( JanusStatus != 0 )
        {
          v27 = JanusStatus;
          gaia::GaiaRequest::SetResponseCode(a2, JanusStatus);
          return v27;
        }
        else
        {
          v41 = (int)(uintptr_t)(&dword_213B814);
          v42 = (int)(uintptr_t)(&dword_213B814);
          v43 = (int)(uintptr_t)(&dword_213B814);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), (char *)&unk_1B15112, (int)(uintptr_t)(&v34) + 3);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v50, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v45, (int)(uintptr_t)(v50));
          g4_std::string::assign_str(&v41, &v45);
          v8 = (void *)(v45 - 12);
          if ( (uint32_t *)(v45 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v8);
          }
          Json::Value::Destroy((Json::Value::Self *)v50);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v51, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v46, (int)(uintptr_t)(v51));
          g4_std::string::assign_str(&v42, &v46);
          v9 = (void *)(v46 - 12);
          if ( (uint32_t *)(v46 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v46 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v9);
          }
          Json::Value::Destroy((Json::Value::Self *)v51);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v52, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v47, (int)(uintptr_t)(v52));
          g4_std::string::assign_str(&v43, &v47);
          v10 = (void *)(v47 - 12);
          if ( (uint32_t *)(v47 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v47 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v10);
          }
          Json::Value::Destroy((Json::Value::Self *)v52);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v53, (const char *)a2);
          v32 = Json::Value::asInt((Json::Value::Self *)v53);
          Json::Value::Destroy((Json::Value::Self *)v53);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v54, (const char *)a2);
          v22 = Json::Value::asInt((Json::Value::Self *)v54);
          Json::Value::Destroy((Json::Value::Self *)v54);
          Json::Value::Construct((Json::Value::Self *)v55, v22);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v48), "accountType", (int)(uintptr_t)(&v35));
          v11 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v48);
          Json::Value::opAssign(v11, (const Json::Value::Self *)v55);
          v12 = (void *)(v48 - 12);
          if ( (uint32_t *)(v48 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v48 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v12);
          }
          Json::Value::Destroy((Json::Value::Self *)v55);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v49), "auth", (int)(uintptr_t)(&v35) + 1);
          AccessToken = gaia::Gaia_Janus::GetAccessToken(self, a2, &v49, (int)(uintptr_t)(&v44));
          v14 = (void *)(v49 - 12);
          if ( (uint32_t *)(v49 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v49 - 4), 0xFFFFFFFF) <= 0 )
          {
            v30 = AccessToken;
            g4_std::string::Rep::M_destroy(v14);
            AccessToken = v30;
          }
          if ( AccessToken != 0 )
          {
            v26 = AccessToken;
            gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
            result = v26;
          }
          else
          {
            Instance = gaia::Gaia::GetInstance();
            v23 = gaia::Janus::AddCredential(
                    *(gaia::BaseServiceManager::Self **)(Instance + 44),
                    (int)(uintptr_t)(&v41),
                    (int)(uintptr_t)(&v42),
                    v32,
                    (int)(uintptr_t)(&v44),
                    (int)(uintptr_t)(&v43),
                    (int)(uintptr_t)(a2));
            gaia::GaiaRequest::SetResponseCode(a2, v23);
            result = v23;
            if ( v23 == 0 )
            {
              v21[0] = 0;
              (*(void (**)(uint32_t, uint32_t, int, char *))(*(uint32_t *)ISingleton<gaia::GaiaActionsManager::Self>::s_instance + 8))(
                (uint32_t)(uintptr_t)(ISingleton<gaia::GaiaActionsManager::Self>::s_instance),
                0,
                1,
                *(char **)v21);
              result = 0;
            }
          }
          v17 = (void *)(v44 - 12);
          if ( (uint32_t *)(v44 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v44 - 4), 0xFFFFFFFF) <= 0 )
          {
            v29 = result;
            g4_std::string::Rep::M_destroy(v17);
            result = v29;
          }
          v18 = (void *)(v43 - 12);
          if ( (uint32_t *)(v43 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v43 - 4), 0xFFFFFFFF) <= 0 )
          {
            v28 = result;
            g4_std::string::Rep::M_destroy(v18);
            result = v28;
          }
          v19 = (void *)(v42 - 12);
          if ( (uint32_t *)(v42 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v42 - 4), 0xFFFFFFFF) <= 0 )
          {
            v31 = result;
            g4_std::string::Rep::M_destroy(v19);
            result = v31;
          }
          v20 = (void *)(v41 - 12);
          if ( (uint32_t *)(v41 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
          {
            v24 = result;
            g4_std::string::Rep::M_destroy(v20);
            return v24;
          }
        }
      }
    }
    else
    {
      return gaia::GaiaRequest::GetResponseCode(a2);
    }
  }
  else
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::SetDeviceInfo  (binary VA: 0x145b8d0)
// Original: gaia::Gaia_Janus::SetDeviceInfo
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::SetDeviceInfo(gaia::Gaia_Janus::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  int JanusStatus;
  Json::Value::Self *v7;
  bool isNull;
  Json::Value::Self *v9;
  bool v10;
  Json::Value::Self *v11;
  bool v12;
  Json::Value::Self *v13;
  bool v14;
  int AccessToken;
  void *v16;
  int result;
  void *v18;
  void *v19;
  void *v20;
  void *v21;
  void *v22;
  int Instance;
  typedef bool _g4_t_v24;
  typedef bool _g4_t_v25;
  typedef bool _g4_t_v26;
  typedef Json::Value::Self *_g4_t_v27;
  typedef Json::Value::Self *_g4_t_v28;
  typedef Json::Value::Self *_g4_t_started;
  typedef Json::Value::Self *_g4_t_v30;
  typedef bool _g4_t_v31;
  typedef Json::Value::Self *_g4_t_v32;
  typedef Json::Value::Self *_g4_t_v33;
  typedef Json::Value::Self *_g4_t_v34;
  typedef Json::Value::Self *_g4_t_v35;
  typedef char *_g4_t_v36;
  typedef char *_g4_t_v37;
  typedef char *_g4_t_v38;
  typedef char *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef uint8_t _g4_t_v54[4];
  typedef int _g4_t_v55;
  typedef uint8_t _g4_t_v56[4];
  typedef int _g4_t_v57;
  typedef uint8_t _g4_t_v58[4];
  typedef int _g4_t_v59;
  typedef uint8_t _g4_t_v60[4];
  typedef int _g4_t_v61;
  typedef uint8_t _g4_t_v62[16];
  typedef uint8_t _g4_t_v63[16];
  typedef uint8_t _g4_t_v64[16];
  typedef uint8_t _g4_t_v65[16];
  typedef uint8_t _g4_t_v66[96];
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (8u + sizeof(_g4_t_v24)) > _g4_s0 ? (8u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v25)) > _g4_s1 ? (8u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v26)) > _g4_s2 ? (8u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v27)) > _g4_s3 ? (12u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v28)) > _g4_s4 ? (12u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_started)) > _g4_s5 ? (12u + sizeof(_g4_t_started)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v30)) > _g4_s6 ? (12u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v31)) > _g4_s7 ? (12u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v32)) > _g4_s8 ? (12u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (12u + sizeof(_g4_t_v33)) > _g4_s9 ? (12u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v34)) > _g4_s10 ? (12u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (12u + sizeof(_g4_t_v35)) > _g4_s11 ? (12u + sizeof(_g4_t_v35)) : _g4_s11,
    _g4_s13 = (16u + sizeof(_g4_t_v36)) > _g4_s12 ? (16u + sizeof(_g4_t_v36)) : _g4_s12,
    _g4_s14 = (16u + sizeof(_g4_t_v37)) > _g4_s13 ? (16u + sizeof(_g4_t_v37)) : _g4_s13,
    _g4_s15 = (16u + sizeof(_g4_t_v38)) > _g4_s14 ? (16u + sizeof(_g4_t_v38)) : _g4_s14,
    _g4_s16 = (28u + sizeof(_g4_t_v39)) > _g4_s15 ? (28u + sizeof(_g4_t_v39)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_v40)) > _g4_s16 ? (40u + sizeof(_g4_t_v40)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_v41)) > _g4_s17 ? (44u + sizeof(_g4_t_v41)) : _g4_s17,
    _g4_s19 = (48u + sizeof(_g4_t_v42)) > _g4_s18 ? (48u + sizeof(_g4_t_v42)) : _g4_s18,
    _g4_s20 = (52u + sizeof(_g4_t_v43)) > _g4_s19 ? (52u + sizeof(_g4_t_v43)) : _g4_s19,
    _g4_s21 = (68u + sizeof(_g4_t_v44)) > _g4_s20 ? (68u + sizeof(_g4_t_v44)) : _g4_s20,
    _g4_s22 = (72u + sizeof(_g4_t_v45)) > _g4_s21 ? (72u + sizeof(_g4_t_v45)) : _g4_s21,
    _g4_s23 = (76u + sizeof(_g4_t_v46)) > _g4_s22 ? (76u + sizeof(_g4_t_v46)) : _g4_s22,
    _g4_s24 = (80u + sizeof(_g4_t_v47)) > _g4_s23 ? (80u + sizeof(_g4_t_v47)) : _g4_s23,
    _g4_s25 = (84u + sizeof(_g4_t_v48)) > _g4_s24 ? (84u + sizeof(_g4_t_v48)) : _g4_s24,
    _g4_s26 = (88u + sizeof(_g4_t_v49)) > _g4_s25 ? (88u + sizeof(_g4_t_v49)) : _g4_s25,
    _g4_s27 = (92u + sizeof(_g4_t_v50)) > _g4_s26 ? (92u + sizeof(_g4_t_v50)) : _g4_s26,
    _g4_s28 = (96u + sizeof(_g4_t_v51)) > _g4_s27 ? (96u + sizeof(_g4_t_v51)) : _g4_s27,
    _g4_s29 = (100u + sizeof(_g4_t_v52)) > _g4_s28 ? (100u + sizeof(_g4_t_v52)) : _g4_s28,
    _g4_s30 = (104u + sizeof(_g4_t_v53)) > _g4_s29 ? (104u + sizeof(_g4_t_v53)) : _g4_s29,
    _g4_s31 = (108u + sizeof(_g4_t_v54)) > _g4_s30 ? (108u + sizeof(_g4_t_v54)) : _g4_s30,
    _g4_s32 = (112u + sizeof(_g4_t_v55)) > _g4_s31 ? (112u + sizeof(_g4_t_v55)) : _g4_s31,
    _g4_s33 = (116u + sizeof(_g4_t_v56)) > _g4_s32 ? (116u + sizeof(_g4_t_v56)) : _g4_s32,
    _g4_s34 = (120u + sizeof(_g4_t_v57)) > _g4_s33 ? (120u + sizeof(_g4_t_v57)) : _g4_s33,
    _g4_s35 = (124u + sizeof(_g4_t_v58)) > _g4_s34 ? (124u + sizeof(_g4_t_v58)) : _g4_s34,
    _g4_s36 = (128u + sizeof(_g4_t_v59)) > _g4_s35 ? (128u + sizeof(_g4_t_v59)) : _g4_s35,
    _g4_s37 = (132u + sizeof(_g4_t_v60)) > _g4_s36 ? (132u + sizeof(_g4_t_v60)) : _g4_s36,
    _g4_s38 = (136u + sizeof(_g4_t_v61)) > _g4_s37 ? (136u + sizeof(_g4_t_v61)) : _g4_s37,
    _g4_s39 = (140u + sizeof(_g4_t_v62)) > _g4_s38 ? (140u + sizeof(_g4_t_v62)) : _g4_s38,
    _g4_s40 = (156u + sizeof(_g4_t_v63)) > _g4_s39 ? (156u + sizeof(_g4_t_v63)) : _g4_s39,
    _g4_s41 = (172u + sizeof(_g4_t_v64)) > _g4_s40 ? (172u + sizeof(_g4_t_v64)) : _g4_s40,
    _g4_s42 = (188u + sizeof(_g4_t_v65)) > _g4_s41 ? (188u + sizeof(_g4_t_v65)) : _g4_s41,
    _g4_s43 = (204u + sizeof(_g4_t_v66)) > _g4_s42 ? (204u + sizeof(_g4_t_v66)) : _g4_s42
  };
  alignas(16) uint8_t _g4_sf[_g4_s43];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 12u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 12u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 16u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 16u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 16u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 28u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 40u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 44u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 48u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 52u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 68u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 72u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 76u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 80u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 84u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 88u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 92u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 96u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 100u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 104u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 108u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 112u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 116u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 120u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 124u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 128u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 132u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 136u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 140u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 156u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 172u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 188u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 204u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), "model", (int)(uintptr_t)(&v40));
    gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v44), 4);
    v2 = (void *)(v44 - 12);
    if ( (uint32_t *)(v44 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v44 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "carrier", (int)(uintptr_t)(&v40) + 1);
    gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v45), 4);
    v3 = (void *)(v45 - 12);
    if ( (uint32_t *)(v45 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), "country", (int)(uintptr_t)(&v40) + 2);
    gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v46), 4);
    v4 = (void *)(v46 - 12);
    if ( (uint32_t *)(v46 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v46 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), "language", (int)(uintptr_t)(&v40) + 3);
    gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v47), 4);
    v5 = (void *)(v47 - 12);
    if ( (uint32_t *)(v47 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v47 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 2509);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v66, a2);
        started = (Json::Value::Self *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v66);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v66);
        return (int)(uintptr_t)(started);
      }
      else
      {
        JanusStatus = gaia::Gaia_Janus::GetJanusStatus(self);
        if ( JanusStatus != 0 )
        {
          v30 = (Json::Value::Self *)JanusStatus;
          gaia::GaiaRequest::SetResponseCode(a2, JanusStatus);
          return (int)(uintptr_t)(v30);
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v48), (char *)&unk_1B15112, (int)(uintptr_t)(&v41));
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v49), (char *)&unk_1B15112, (int)(uintptr_t)(&v41) + 1);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v50), (char *)&unk_1B15112, (int)(uintptr_t)(&v41) + 2);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v51), (char *)&unk_1B15112, (int)(uintptr_t)(&v41) + 3);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v52), (char *)&unk_1B15112, (int)(uintptr_t)(&v42));
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v53), "model", (int)(uintptr_t)(&v42) + 1);
          v7 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v53);
          isNull = Json::Value::isNull(v7);
          v39 = (char *)(v53 - 12);
          if ( (uint32_t *)(v53 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v53 - 4), 0xFFFFFFFF) <= 0 )
          {
            v24 = isNull;
            g4_std::string::Rep::M_destroy(v39);
            isNull = v24;
          }
          if ( !isNull )
          {
            gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v62, (const char *)a2);
            Json::Value::asString((Json::Value::Self *)v54, (int)(uintptr_t)(v62));
            g4_std::string::assign_str(&v49, v54);
            g4_std::string::Destroy(v54);
            Json::Value::Destroy((Json::Value::Self *)v62);
          }
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v55), "carrier", (int)(uintptr_t)(&v42) + 2);
          v9 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v55);
          v10 = Json::Value::isNull(v9);
          v36 = (char *)(v55 - 12);
          if ( (uint32_t *)(v55 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v55 - 4), 0xFFFFFFFF) <= 0 )
          {
            v25 = v10;
            g4_std::string::Rep::M_destroy(v36);
            v10 = v25;
          }
          if ( !v10 )
          {
            gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v63, (const char *)a2);
            Json::Value::asString((Json::Value::Self *)v56, (int)(uintptr_t)(v63));
            g4_std::string::assign_str(&v50, v56);
            g4_std::string::Destroy(v56);
            Json::Value::Destroy((Json::Value::Self *)v63);
          }
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v57), "country", (int)(uintptr_t)(&v42) + 3);
          v11 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v57);
          v12 = Json::Value::isNull(v11);
          v37 = (char *)(v57 - 12);
          if ( (uint32_t *)(v57 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v57 - 4), 0xFFFFFFFF) <= 0 )
          {
            v26 = v12;
            g4_std::string::Rep::M_destroy(v37);
            v12 = v26;
          }
          if ( !v12 )
          {
            gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v64, (const char *)a2);
            Json::Value::asString((Json::Value::Self *)v58, (int)(uintptr_t)(v64));
            g4_std::string::assign_str(&v51, v58);
            g4_std::string::Destroy(v58);
            Json::Value::Destroy((Json::Value::Self *)v64);
          }
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v59), "language", (int)(uintptr_t)(&v43));
          v13 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v59);
          v14 = Json::Value::isNull(v13);
          v38 = (char *)(v59 - 12);
          if ( (uint32_t *)(v59 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v59 - 4), 0xFFFFFFFF) <= 0 )
          {
            v31 = v14;
            g4_std::string::Rep::M_destroy(v38);
            v14 = v31;
          }
          if ( !v14 )
          {
            gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v65, (const char *)a2);
            Json::Value::asString((Json::Value::Self *)v60, (int)(uintptr_t)(v65));
            g4_std::string::assign_str(&v52, v60);
            g4_std::string::Destroy(v60);
            Json::Value::Destroy((Json::Value::Self *)v65);
          }
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v61), "auth", (int)(uintptr_t)(&v43) + 1);
          AccessToken = gaia::Gaia_Janus::GetAccessToken(self, a2, &v61, (int)(uintptr_t)(&v48));
          v16 = (void *)(v61 - 12);
          if ( (uint32_t *)(v61 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v61 - 4), 0xFFFFFFFF) <= 0 )
          {
            v32 = (Json::Value::Self *)AccessToken;
            g4_std::string::Rep::M_destroy(v16);
            AccessToken = (int)(uintptr_t)(v32);
          }
          if ( AccessToken == 0 )
          {
            Instance = gaia::Gaia::GetInstance();
            AccessToken = gaia::Janus::SetDeviceInfo(
                            *(gaia::BaseServiceManager::Self **)(Instance + 44),
                            (int)(uintptr_t)(&v48),
                            (int)(uintptr_t)(&v49),
                            (int)(uintptr_t)(&v50),
                            (int)(uintptr_t)(&v51),
                            (int)(uintptr_t)(&v52),
                            (int)(uintptr_t)(a2));
          }
          v27 = (Json::Value::Self *)AccessToken;
          gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
          result = (int)(uintptr_t)(v27);
          v18 = (void *)(v52 - 12);
          if ( (uint32_t *)(v52 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v52 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v18);
            result = (int)(uintptr_t)(v27);
          }
          v19 = (void *)(v51 - 12);
          if ( (uint32_t *)(v51 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v51 - 4), 0xFFFFFFFF) <= 0 )
          {
            v35 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v19);
            result = (int)(uintptr_t)(v35);
          }
          v20 = (void *)(v50 - 12);
          if ( (uint32_t *)(v50 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v50 - 4), 0xFFFFFFFF) <= 0 )
          {
            v33 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v20);
            result = (int)(uintptr_t)(v33);
          }
          v21 = (void *)(v49 - 12);
          if ( (uint32_t *)(v49 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v49 - 4), 0xFFFFFFFF) <= 0 )
          {
            v34 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v21);
            result = (int)(uintptr_t)(v34);
          }
          v22 = (void *)(v48 - 12);
          if ( (uint32_t *)(v48 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v48 - 4), 0xFFFFFFFF) <= 0 )
          {
            v28 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v22);
            return (int)(uintptr_t)(v28);
          }
        }
      }
    }
    else
    {
      return gaia::GaiaRequest::GetResponseCode(a2);
    }
  }
  else
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::Login  (binary VA: 0x147ea60)
// Original: gaia::Gaia_Janus::Login
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::Login(gaia::Gaia::Self *a1, int a2, uint32_t *a3, uint32_t *a4, char a5, int a6, int a7)
{
  int v7;
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  int v12;
  uint32_t *v13;
  uint32_t *v14;
  int v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  Json::Value::Self *v19;
  Json::Value::Self *v20;
  Json::Value::Self *v21;
  int Instance;
  typedef gaia::ThreadManager::Self *_g4_t_v23;
  typedef uint32_t _g4_t_v24[5];
  typedef uint32_t *_g4_t_v25;
  typedef uint32_t _g4_t_v26[2];
  typedef uint32_t *_g4_t_v27;
  typedef uint32_t _g4_t_v28[2];
  typedef uint32_t *_g4_t_v29;
  typedef uint32_t *_g4_t_v30;
  typedef uint8_t _g4_t_v31[16];
  typedef uint8_t _g4_t_v32[16];
  typedef uint8_t _g4_t_v33[16];
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef uint8_t _g4_t_v36[4];
  typedef uint8_t _g4_t_v37[4];
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef uint8_t _g4_t_v40[4];
  typedef uint8_t _g4_t_v41[4];
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef uint8_t _g4_t_v44[4];
  typedef uint8_t _g4_t_v45[32];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (0u + sizeof(_g4_t_v23)) > _g4_s0 ? (0u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (60u + sizeof(_g4_t_v24)) > _g4_s1 ? (60u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (80u + sizeof(_g4_t_v25)) > _g4_s2 ? (80u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (84u + sizeof(_g4_t_v26)) > _g4_s3 ? (84u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (92u + sizeof(_g4_t_v27)) > _g4_s4 ? (92u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (96u + sizeof(_g4_t_v28)) > _g4_s5 ? (96u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (104u + sizeof(_g4_t_v29)) > _g4_s6 ? (104u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (108u + sizeof(_g4_t_v30)) > _g4_s7 ? (108u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (112u + sizeof(_g4_t_v31)) > _g4_s8 ? (112u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (128u + sizeof(_g4_t_v32)) > _g4_s9 ? (128u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (144u + sizeof(_g4_t_v33)) > _g4_s10 ? (144u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (160u + sizeof(_g4_t_v34)) > _g4_s11 ? (160u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (164u + sizeof(_g4_t_v35)) > _g4_s12 ? (164u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (168u + sizeof(_g4_t_v36)) > _g4_s13 ? (168u + sizeof(_g4_t_v36)) : _g4_s13,
    _g4_s15 = (172u + sizeof(_g4_t_v37)) > _g4_s14 ? (172u + sizeof(_g4_t_v37)) : _g4_s14,
    _g4_s16 = (176u + sizeof(_g4_t_v38)) > _g4_s15 ? (176u + sizeof(_g4_t_v38)) : _g4_s15,
    _g4_s17 = (180u + sizeof(_g4_t_v39)) > _g4_s16 ? (180u + sizeof(_g4_t_v39)) : _g4_s16,
    _g4_s18 = (184u + sizeof(_g4_t_v40)) > _g4_s17 ? (184u + sizeof(_g4_t_v40)) : _g4_s17,
    _g4_s19 = (188u + sizeof(_g4_t_v41)) > _g4_s18 ? (188u + sizeof(_g4_t_v41)) : _g4_s18,
    _g4_s20 = (192u + sizeof(_g4_t_v42)) > _g4_s19 ? (192u + sizeof(_g4_t_v42)) : _g4_s19,
    _g4_s21 = (196u + sizeof(_g4_t_v43)) > _g4_s20 ? (196u + sizeof(_g4_t_v43)) : _g4_s20,
    _g4_s22 = (200u + sizeof(_g4_t_v44)) > _g4_s21 ? (200u + sizeof(_g4_t_v44)) : _g4_s21,
    _g4_s23 = (204u + sizeof(_g4_t_v45)) > _g4_s22 ? (204u + sizeof(_g4_t_v45)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 60u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 80u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 84u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 92u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 96u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 104u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 108u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 112u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 128u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 144u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 160u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 164u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 168u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 172u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 176u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 180u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 184u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 188u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 192u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 196u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 200u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 204u);

  v7 = -21;
  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
    return v7;
  if ( gaia::Gaia_Janus::IsLoggedIn((int)(uintptr_t)(a1), a2) )
    gaia::Gaia_Janus::Logout((int)(uintptr_t)(a1), a2);
  if ( a5 != 0 )
  {
    v18 = (uint32_t *)opNew(0x44u);
    *v18 = a7;
    v18[1] = a6;
    v18[2] = 2501;
    Json::Value::Construct((int)(uintptr_t)(v18 + 3), nullptr);
    v18[7] = 0;
    v18[8] = 0;
    Json::Value::Construct((int)(uintptr_t)(v18 + 9), nullptr);
    v18[13] = 0;
    v18[14] = 0;
    v18[15] = 0;
    v18[16] = 0;
    Json::Value::Construct((Json::Value::Self *)v31, a2);
    v19 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v18 + 3), "accountType");
    Json::Value::opAssign(v19, (const Json::Value::Self *)v31);
    Json::Value::Destroy((Json::Value::Self *)v31);
    Json::Value::Construct((int)(uintptr_t)(v32), a3);
    v20 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v18 + 3), "username");
    Json::Value::opAssign(v20, (const Json::Value::Self *)v32);
    Json::Value::Destroy((Json::Value::Self *)v32);
    Json::Value::Construct((int)(uintptr_t)(v33), a4);
    v21 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v18 + 3), "password");
    Json::Value::opAssign(v21, (const Json::Value::Self *)v33);
    Json::Value::Destroy((Json::Value::Self *)v33);
    Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v23));
    return gaia::ThreadManager::pushTask(Instance, v18);
  }
  else
  {
    v7 = gaia::Gaia_Janus::SendAuthentificate(a1, a3, a4, a2, 0, 0, 0);
    if ( v7 != 0 )
      return v7;
    v9 = gaia::Gaia::GetInstance();
    v10 = *(uint32_t **)(v9 + 368);
    v11 = (uint32_t *)(v9 + 364);
    if ( v10 == nullptr )
      goto LABEL_14;
    if ( a2 > v10[4] )
      goto LABEL_11;
    while ( 1 )
    {
      v11 = v10;
      v10 = (uint32_t *)v10[2];
      if ( v10 == nullptr )
        break;
      while ( a2 > v10[4] )
      {
LABEL_11:
        v10 = (uint32_t *)v10[3];
        if ( v10 == nullptr )
          goto LABEL_12;
      }
    }
LABEL_12:
    if ( (uint32_t *)(v9 + 364) == v11 || a2 < v11[4] )
    {
LABEL_14:
      v25 = &dword_213B814;
      v26[0] = (uint32_t)(uintptr_t)(&dword_213B814);
      v24[4] = 0;
      v34 = a2;
      v35 = 0;
      g4_std::string::construct_copy(v36, &v25);
      g4_std::string::construct_copy(v37, v26);
      g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_insert_unique(v24);
      v11 = (uint32_t *)v24[0];
      g4_std::string::Destroy(v37);
      g4_std::string::Destroy(v36);
      g4_std::string::Destroy(v26);
      g4_std::string::Destroy(&v25);
    }
    v11[5] = a2;
    v12 = gaia::Gaia::GetInstance();
    v13 = *(uint32_t **)(v12 + 368);
    v14 = (uint32_t *)(v12 + 364);
    if ( v13 == nullptr )
      goto LABEL_22;
    do
    {
      while ( v13[4] >= a2 )
      {
        v14 = v13;
        v13 = (uint32_t *)v13[2];
        if ( v13 == nullptr )
          goto LABEL_20;
      }
      v13 = (uint32_t *)v13[3];
    }
    while ( v13 != nullptr );
LABEL_20:
    if ( (uint32_t *)(v12 + 364) == v14 || v14[4] > a2 )
    {
LABEL_22:
      v27 = &dword_213B814;
      v28[0] = (uint32_t)(uintptr_t)(&dword_213B814);
      v26[1] = 0;
      v38 = a2;
      v39 = 0;
      g4_std::string::construct_copy(v40, &v27);
      g4_std::string::construct_copy(v41, v28);
      g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_insert_unique(v24);
      v14 = (uint32_t *)v24[0];
      g4_std::string::Destroy(v41);
      g4_std::string::Destroy(v40);
      g4_std::string::Destroy(v28);
      g4_std::string::Destroy(&v27);
    }
    g4_std::string::assign_str(v14 + 6, a3);
    v15 = gaia::Gaia::GetInstance();
    v16 = *(uint32_t **)(v15 + 368);
    v17 = (uint32_t *)(v15 + 364);
    if ( v16 == nullptr )
      goto LABEL_30;
    do
    {
      while ( v16[4] >= a2 )
      {
        v17 = v16;
        v16 = (uint32_t *)v16[2];
        if ( v16 == nullptr )
          goto LABEL_28;
      }
      v16 = (uint32_t *)v16[3];
    }
    while ( v16 != nullptr );
LABEL_28:
    if ( v17 == (uint32_t *)(v15 + 364) || a2 < v17[4] )
    {
LABEL_30:
      v29 = &dword_213B814;
      v30 = &dword_213B814;
      v42 = a2;
      v28[1] = 0;
      v43 = 0;
      g4_std::string::construct_copy(v44, &v29);
      g4_std::string::construct_copy(v45, &v30);
      g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_insert_unique(v24);
      v17 = (uint32_t *)v24[0];
      g4_std::string::Destroy(v45);
      g4_std::string::Destroy(v44);
      g4_std::string::Destroy(&v30);
      g4_std::string::Destroy(&v29);
    }
    g4_std::string::assign_str(v17 + 7, a4);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::Authorize  (binary VA: 0x147f030)
// Original: gaia::Gaia_Janus::Authorize
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::Authorize(gaia::Gaia_Janus::Self *a1, uint32_t *a2, int a3, char a4, int a5, int a6)
{
  int v6;
  char IsInitialized;
  int result;
  int Instance;
  uint32_t *v10;
  Json::Value::Self *v11;
  Json::Value::Self *v12;
  int v13;
  int v14;
  Json::Value::Self *v15;
  Json::Value::Self *v16;
  int v17;
  Json::Value::Self *v18;
  Json::Value::Self *v19;
  int v20;
  Json::Value::Self *v21;
  Json::Value::Self *v22;
  int v23;
  int v24;
  int v25;
  typedef gaia::ThreadManager::Self *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef Json::Value::Self *_g4_t_v28;
  typedef Json::Value::Self *_g4_t_v29;
  typedef Json::Value::Self *_g4_t_v30;
  typedef Json::Value::Self *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef Json::Value::Self *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37[2];
  typedef uint32_t *_g4_t_v38;
  typedef uint32_t _g4_t_v39[2];
  typedef uint32_t *_g4_t_v40;
  typedef uint32_t _g4_t_v41[2];
  typedef uint32_t *_g4_t_v42;
  typedef uint32_t *_g4_t_v43;
  typedef uint8_t _g4_t_v44[16];
  typedef uint8_t _g4_t_v45[16];
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef char _g4_t_v48[4];
  typedef char _g4_t_v49[4];
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef char _g4_t_v52[4];
  typedef char _g4_t_v53[4];
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef char _g4_t_v56[4];
  typedef uint8_t _g4_t_v57[32];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (0u + sizeof(_g4_t_v26)) > _g4_s0 ? (0u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (60u + sizeof(_g4_t_v27)) > _g4_s1 ? (60u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_v28)) > _g4_s2 ? (64u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v29)) > _g4_s3 ? (64u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v30)) > _g4_s4 ? (64u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v31)) > _g4_s5 ? (64u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v32)) > _g4_s6 ? (68u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v33)) > _g4_s7 ? (72u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v34)) > _g4_s8 ? (76u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (82u + sizeof(_g4_t_v35)) > _g4_s9 ? (82u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v36)) > _g4_s10 ? (84u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (88u + sizeof(_g4_t_v37)) > _g4_s11 ? (88u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v38)) > _g4_s12 ? (96u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v39)) > _g4_s13 ? (100u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (108u + sizeof(_g4_t_v40)) > _g4_s14 ? (108u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (112u + sizeof(_g4_t_v41)) > _g4_s15 ? (112u + sizeof(_g4_t_v41)) : _g4_s15,
    _g4_s17 = (120u + sizeof(_g4_t_v42)) > _g4_s16 ? (120u + sizeof(_g4_t_v42)) : _g4_s16,
    _g4_s18 = (124u + sizeof(_g4_t_v43)) > _g4_s17 ? (124u + sizeof(_g4_t_v43)) : _g4_s17,
    _g4_s19 = (128u + sizeof(_g4_t_v44)) > _g4_s18 ? (128u + sizeof(_g4_t_v44)) : _g4_s18,
    _g4_s20 = (144u + sizeof(_g4_t_v45)) > _g4_s19 ? (144u + sizeof(_g4_t_v45)) : _g4_s19,
    _g4_s21 = (160u + sizeof(_g4_t_v46)) > _g4_s20 ? (160u + sizeof(_g4_t_v46)) : _g4_s20,
    _g4_s22 = (164u + sizeof(_g4_t_v47)) > _g4_s21 ? (164u + sizeof(_g4_t_v47)) : _g4_s21,
    _g4_s23 = (168u + sizeof(_g4_t_v48)) > _g4_s22 ? (168u + sizeof(_g4_t_v48)) : _g4_s22,
    _g4_s24 = (172u + sizeof(_g4_t_v49)) > _g4_s23 ? (172u + sizeof(_g4_t_v49)) : _g4_s23,
    _g4_s25 = (176u + sizeof(_g4_t_v50)) > _g4_s24 ? (176u + sizeof(_g4_t_v50)) : _g4_s24,
    _g4_s26 = (180u + sizeof(_g4_t_v51)) > _g4_s25 ? (180u + sizeof(_g4_t_v51)) : _g4_s25,
    _g4_s27 = (184u + sizeof(_g4_t_v52)) > _g4_s26 ? (184u + sizeof(_g4_t_v52)) : _g4_s26,
    _g4_s28 = (188u + sizeof(_g4_t_v53)) > _g4_s27 ? (188u + sizeof(_g4_t_v53)) : _g4_s27,
    _g4_s29 = (192u + sizeof(_g4_t_v54)) > _g4_s28 ? (192u + sizeof(_g4_t_v54)) : _g4_s28,
    _g4_s30 = (196u + sizeof(_g4_t_v55)) > _g4_s29 ? (196u + sizeof(_g4_t_v55)) : _g4_s29,
    _g4_s31 = (200u + sizeof(_g4_t_v56)) > _g4_s30 ? (200u + sizeof(_g4_t_v56)) : _g4_s30,
    _g4_s32 = (204u + sizeof(_g4_t_v57)) > _g4_s31 ? (204u + sizeof(_g4_t_v57)) : _g4_s31
  };
  alignas(16) uint8_t _g4_sf[_g4_s32];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 64u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 64u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 64u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 64u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 68u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 72u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 76u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 82u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 84u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 88u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 96u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 100u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 108u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 112u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 120u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 124u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 128u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 144u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 160u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 164u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 168u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 172u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 176u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 180u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 184u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 188u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 192u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 196u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 200u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 204u);

  v6 = a3;
  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    result = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a3);
    if ( result == 0 )
    {
      if ( a4 != 0 )
      {
        v10 = (uint32_t *)opNew(0x44u);
        *v10 = a6;
        v10[1] = a5;
        v10[2] = 2502;
        Json::Value::Construct((int)(uintptr_t)(v10 + 3), nullptr);
        v10[7] = 0;
        v10[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v10 + 9), nullptr);
        v10[13] = 0;
        v10[14] = 0;
        v10[15] = 0;
        v10[16] = 0;
        Json::Value::Construct((int)(uintptr_t)(v44), a2);
        v11 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v10 + 3), "serviceName");
        Json::Value::opAssign(v11, (const Json::Value::Self *)v44);
        Json::Value::Destroy((Json::Value::Self *)v44);
        Json::Value::Construct((Json::Value::Self *)v45, a3);
        v12 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v10 + 3), "accountType");
        Json::Value::opAssign(v12, (const Json::Value::Self *)v45);
        Json::Value::Destroy((Json::Value::Self *)v45);
        v13 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v26));
        return gaia::ThreadManager::pushTask(v13, v10);
      }
      else
      {
        result = gaia::Gaia_Janus::GetJanusStatus(a1);
        if ( result == 0 )
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), (char *)&unk_1B15112, (int)(uintptr_t)(&v35));
          g4_std::string::construct_from_cstr((int)(uintptr_t)(v37), (char *)&unk_1B15112, (int)(uintptr_t)(&v35) + 1);
          if ( a3 == 19 )
          {
            v24 = gaia::Gaia::GetInstance();
            g4_std::string::assign_str(&v36, v24 + 352);
            v25 = gaia::Gaia::GetInstance();
            g4_std::string::assign_str(v37, v25 + 356);
          }
          else
          {
            v14 = gaia::Gaia::GetInstance();
            v15 = *(Json::Value::Self **)(v14 + 368);
            v16 = (Json::Value::Self *)(v14 + 364);
            if ( v15 == nullptr )
              goto LABEL_36;
            do
            {
              if ( *((uint32_t *)v15 + 4) >= a3 )
              {
                v16 = v15;
                v15 = *((Json::Value::Self **)v15 + 2);
              }
              else
              {
                v15 = *((Json::Value::Self **)v15 + 3);
              }
            }
            while ( v15 != nullptr );
            if ( (Json::Value::Self *)(v14 + 364) == v16 || *((uint32_t *)v16 + 4) > a3 )
            {
LABEL_36:
              v38 = &dword_213B814;
              v39[0] = (uint32_t)(uintptr_t)(&dword_213B814);
              v37[1] = 0;
              v46 = a3;
              v47 = 0;
              g4_std::string::construct_copy(v48, &v38);
              g4_std::string::construct_copy(v49, v39);
              g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_insert_unique(&v34);
              v31 = v34;
              g4_std::string::Destroy(v49);
              g4_std::string::Destroy(v48);
              g4_std::string::Destroy(v39);
              g4_std::string::Destroy(&v38);
              v16 = v31;
            }
            g4_std::string::assign_str(&v36, (char *)v16 + 24);
            v17 = gaia::Gaia::GetInstance();
            v18 = *(Json::Value::Self **)(v17 + 368);
            v19 = (Json::Value::Self *)(v17 + 364);
            if ( v18 == nullptr )
              goto LABEL_35;
            do
            {
              if ( *((uint32_t *)v18 + 4) >= a3 )
              {
                v19 = v18;
                v18 = *((Json::Value::Self **)v18 + 2);
              }
              else
              {
                v18 = *((Json::Value::Self **)v18 + 3);
              }
            }
            while ( v18 != nullptr );
            if ( (Json::Value::Self *)(v17 + 364) == v19 || *((uint32_t *)v19 + 4) > a3 )
            {
LABEL_35:
              v40 = &dword_213B814;
              v41[0] = (uint32_t)(uintptr_t)(&dword_213B814);
              v39[1] = 0;
              v50 = a3;
              v51 = 0;
              g4_std::string::construct_copy(v52, &v40);
              g4_std::string::construct_copy(v53, v41);
              g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_insert_unique(&v34);
              v30 = v34;
              g4_std::string::Destroy(v53);
              g4_std::string::Destroy(v52);
              g4_std::string::Destroy(v41);
              g4_std::string::Destroy(&v40);
              v19 = v30;
            }
            g4_std::string::assign_str(v37, (char *)v19 + 28);
            v20 = gaia::Gaia::GetInstance();
            v21 = *(Json::Value::Self **)(v20 + 368);
            v22 = (Json::Value::Self *)(v20 + 364);
            if ( v21 == nullptr )
              goto LABEL_34;
            do
            {
              if ( *((uint32_t *)v21 + 4) >= a3 )
              {
                v22 = v21;
                v21 = *((Json::Value::Self **)v21 + 2);
              }
              else
              {
                v21 = *((Json::Value::Self **)v21 + 3);
              }
            }
            while ( v21 != nullptr );
            if ( v22 == (Json::Value::Self *)(v20 + 364) || a3 < *((uint32_t *)v22 + 4) )
            {
LABEL_34:
              v42 = &dword_213B814;
              v43 = &dword_213B814;
              v54 = a3;
              v41[1] = 0;
              v55 = 0;
              g4_std::string::construct_copy(v56, &v42);
              g4_std::string::construct_copy(v57, &v43);
              g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_insert_unique(&v34);
              v29 = v34;
              g4_std::string::Destroy(v57);
              g4_std::string::Destroy(v56);
              g4_std::string::Destroy(&v43);
              g4_std::string::Destroy(&v42);
              v22 = v29;
            }
            v6 = *((uint32_t *)v22 + 5);
          }
          v28 = *(Json::Value::Self **)(gaia::Gaia::GetInstance() + 388);
          v32 = gaia::Gaia::GetInstance();
          v33 = gaia::Gaia::GetInstance();
          v23 = gaia::Gaia::GetInstance();
          v27 = gaia::Janus::Authorize(
                  *(gaia::BaseServiceManager::Self **)(v23 + 44),
                  (int)(uintptr_t)(&v36),
                  (int)(uintptr_t)(v37),
                  v6,
                  (int)(uintptr_t)(a2),
                  v33 + 340,
                  0,
                  v32 + 384,
                  (char)(uintptr_t)(v28),
                  0);
          g4_std::string::Destroy(v37);
          g4_std::string::Destroy(&v36);
          return v27;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::StartAndAuthorizeJanus  (binary VA: 0x147f680)
// Original: gaia::Gaia_Janus::StartAndAuthorizeJanus
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::StartAndAuthorizeJanus(gaia::Gaia_Janus::Self *a1, int a2, uint32_t *a3)
{
  char IsInitialized;
  int result;

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    result = gaia::Gaia_Janus::GetJanusStatus(a1);
    if ( result == 0 )
      return gaia::Gaia_Janus::Authorize(a1, a3, a2, 0, 0, 0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::AddPermission  (binary VA: 0x147f700)
// Original: gaia::Gaia_Janus::AddPermission
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::AddPermission(gaia::Gaia_Janus::Self *a1, uint32_t *a2, int a3, int a4, uint32_t *a5, char a6, int a7, int a8)
{
  char IsInitialized;
  int result;
  int Instance;
  void *v11;
  uint32_t *v12;
  Json::Value::Self *v13;
  Json::Value::Self *v14;
  Json::Value::Self *v15;
  Json::Value::Self *v16;
  int v17;
  int v18;
  typedef gaia::ThreadManager::Self *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint16_t _g4_t_v22[3];
  typedef int _g4_t_v23;
  typedef uint8_t _g4_t_v24[16];
  typedef uint8_t _g4_t_v25[16];
  typedef uint8_t _g4_t_v26[16];
  typedef uint8_t _g4_t_v27[28];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v19)) > _g4_s0 ? (0u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v20)) > _g4_s1 ? (40u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v21)) > _g4_s2 ? (40u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (54u + sizeof(_g4_t_v22)) > _g4_s3 ? (54u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v23)) > _g4_s4 ? (60u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v24)) > _g4_s5 ? (64u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v25)) > _g4_s6 ? (80u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v26)) > _g4_s7 ? (96u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (112u + sizeof(_g4_t_v27)) > _g4_s8 ? (112u + sizeof(_g4_t_v27)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 54u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 64u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 80u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 96u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 112u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    result = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a3);
    if ( result == 0 )
    {
      if ( a6 != 0 )
      {
        v12 = (uint32_t *)opNew(0x44u);
        *v12 = a8;
        v12[1] = a7;
        v12[2] = 2516;
        Json::Value::Construct((int)(uintptr_t)(v12 + 3), nullptr);
        v12[7] = 0;
        v12[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v12 + 9), nullptr);
        v12[13] = 0;
        v12[14] = 0;
        v12[15] = 0;
        v12[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v24, a3);
        v13 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v12 + 3), "accountType");
        Json::Value::opAssign(v13, (const Json::Value::Self *)v24);
        Json::Value::Destroy((Json::Value::Self *)v24);
        Json::Value::Construct((int)(uintptr_t)(v25), a2);
        v14 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v12 + 3), "username");
        Json::Value::opAssign(v14, (const Json::Value::Self *)v25);
        Json::Value::Destroy((Json::Value::Self *)v25);
        Json::Value::Construct((Json::Value::Self *)v26, a4);
        v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v12 + 3), "credentialsToLinkTo");
        Json::Value::opAssign(v15, (const Json::Value::Self *)v26);
        Json::Value::Destroy((Json::Value::Self *)v26);
        Json::Value::Construct((int)(uintptr_t)(v27), a5);
        v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v12 + 3), "scopes");
        Json::Value::opAssign(v16, (const Json::Value::Self *)v27);
        Json::Value::Destroy((Json::Value::Self *)v27);
        v17 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v19));
        return gaia::ThreadManager::pushTask(v17, v12);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22[1]), "auth", (int)(uintptr_t)(v22));
        result = gaia::Gaia_Janus::StartAndAuthorizeJanus(a1, a4, &v22[1]);
        v11 = (void *)(*(uint32_t *)&v22[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v22[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v22[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          v21 = result;
          g4_std::string::Rep::M_destroy(v11);
          result = v21;
        }
        if ( result == 0 )
        {
          gaia::Gaia_Janus::GetJanusToken((int)(uintptr_t)(&v23), a1);
          v18 = gaia::Gaia::GetInstance();
          v20 = gaia::Janus::AddPermission(*(gaia::BaseServiceManager::Self **)(v18 + 44), (int)(uintptr_t)(a2), a3, (int)(uintptr_t)(&v23), (int)(uintptr_t)(a5), 0);
          g4_std::string::Destroy(&v23);
          return v20;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::RemoveCredential  (binary VA: 0x147fa80)
// Original: gaia::Gaia_Janus::RemoveCredential
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::RemoveCredential(gaia::Gaia_Janus::Self *a1, int a2, int a3, uint32_t *a4, char a5, int a6, int a7)
{
  char IsInitialized;
  int result;
  int Instance;
  void *v10;
  uint32_t *v11;
  Json::Value::Self *v12;
  Json::Value::Self *v13;
  Json::Value::Self *v14;
  int v15;
  int v16;
  typedef gaia::ThreadManager::Self *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint16_t _g4_t_v20[3];
  typedef int _g4_t_v21;
  typedef uint8_t _g4_t_v22[16];
  typedef uint8_t _g4_t_v23[16];
  typedef uint8_t _g4_t_v24[28];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v17)) > _g4_s0 ? (0u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v18)) > _g4_s1 ? (44u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v19)) > _g4_s2 ? (44u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (54u + sizeof(_g4_t_v20)) > _g4_s3 ? (54u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v21)) > _g4_s4 ? (60u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v22)) > _g4_s5 ? (64u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v23)) > _g4_s6 ? (80u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v24)) > _g4_s7 ? (96u + sizeof(_g4_t_v24)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 54u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 60u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 64u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 80u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 96u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    result = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
    if ( result == 0 )
    {
      if ( a5 != 0 )
      {
        v11 = (uint32_t *)opNew(0x44u);
        *v11 = a7;
        v11[1] = a6;
        v11[2] = 2515;
        Json::Value::Construct((int)(uintptr_t)(v11 + 3), nullptr);
        v11[7] = 0;
        v11[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v11 + 9), nullptr);
        v11[13] = 0;
        v11[14] = 0;
        v11[15] = 0;
        v11[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v22, a2);
        v12 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v11 + 3), "account_type");
        Json::Value::opAssign(v12, (const Json::Value::Self *)v22);
        Json::Value::Destroy((Json::Value::Self *)v22);
        Json::Value::Construct((Json::Value::Self *)v23, a3);
        v13 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v11 + 3), "credential_type");
        Json::Value::opAssign(v13, (const Json::Value::Self *)v23);
        Json::Value::Destroy((Json::Value::Self *)v23);
        Json::Value::Construct((int)(uintptr_t)(v24), a4);
        v14 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v11 + 3), "credential_username");
        Json::Value::opAssign(v14, (const Json::Value::Self *)v24);
        Json::Value::Destroy((Json::Value::Self *)v24);
        v15 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v17));
        return gaia::ThreadManager::pushTask(v15, v11);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20[1]), "auth", (int)(uintptr_t)(v20));
        result = gaia::Gaia_Janus::StartAndAuthorizeJanus(a1, a2, &v20[1]);
        v10 = (void *)(*(uint32_t *)&v20[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v20[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v20[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          v19 = result;
          g4_std::string::Rep::M_destroy(v10);
          result = v19;
        }
        if ( result == 0 )
        {
          gaia::Gaia_Janus::GetJanusToken((int)(uintptr_t)(&v21), a1);
          v16 = gaia::Gaia::GetInstance();
          v18 = gaia::Janus::RemoveCredential(*(gaia::BaseServiceManager::Self **)(v16 + 44), a3, (int)(uintptr_t)(a4), (int)(uintptr_t)(&v21), 0);
          g4_std::string::Destroy(&v21);
          return v18;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::AddCredential  (binary VA: 0x147fd30)
// Original: gaia::Gaia_Janus::AddCredential
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::AddCredential(gaia::Gaia_Janus::Self *a1, uint32_t *a2, uint32_t *a3, int a4, int a5, uint32_t *a6, char a7, int a8, int a9)
{
  char IsInitialized;
  int result;
  int Instance;
  void *v12;
  uint32_t *v13;
  Json::Value::Self *v14;
  Json::Value::Self *v15;
  Json::Value::Self *v16;
  Json::Value::Self *v17;
  Json::Value::Self *v18;
  int v19;
  int v20;
  typedef gaia::ThreadManager::Self *_g4_t_v21;
  typedef char _g4_t_v22[4];
  typedef Json::Value::Self *_g4_t_v23;
  typedef Json::Value::Self *_g4_t_v24;
  typedef uint16_t _g4_t_v25[3];
  typedef int _g4_t_v26;
  typedef uint8_t _g4_t_v27[16];
  typedef uint8_t _g4_t_v28[16];
  typedef uint8_t _g4_t_v29[16];
  typedef uint8_t _g4_t_v30[16];
  typedef uint8_t _g4_t_v31[28];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v21)) > _g4_s0 ? (0u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v22)) > _g4_s1 ? (12u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v23)) > _g4_s2 ? (44u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v24)) > _g4_s3 ? (44u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (54u + sizeof(_g4_t_v25)) > _g4_s4 ? (54u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v26)) > _g4_s5 ? (60u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v27)) > _g4_s6 ? (64u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v28)) > _g4_s7 ? (80u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (96u + sizeof(_g4_t_v29)) > _g4_s8 ? (96u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (112u + sizeof(_g4_t_v30)) > _g4_s9 ? (112u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (128u + sizeof(_g4_t_v31)) > _g4_s10 ? (128u + sizeof(_g4_t_v31)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 54u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 60u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 64u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 80u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 96u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 112u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 128u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    result = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a5);
    if ( result == 0 )
    {
      if ( a7 != 0 )
      {
        v13 = (uint32_t *)opNew(0x44u);
        *v13 = a9;
        v13[1] = a8;
        v13[2] = 2513;
        Json::Value::Construct((int)(uintptr_t)(v13 + 3), nullptr);
        v13[7] = 0;
        v13[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v13 + 9), nullptr);
        v13[13] = 0;
        v13[14] = 0;
        v13[15] = 0;
        v13[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v27, a4);
        v14 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "credential_type");
        Json::Value::opAssign(v14, (const Json::Value::Self *)v27);
        Json::Value::Destroy((Json::Value::Self *)v27);
        Json::Value::Construct((int)(uintptr_t)(v28), a2);
        v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "username");
        Json::Value::opAssign(v15, (const Json::Value::Self *)v28);
        Json::Value::Destroy((Json::Value::Self *)v28);
        Json::Value::Construct((int)(uintptr_t)(v29), a3);
        v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "password");
        Json::Value::opAssign(v16, (const Json::Value::Self *)v29);
        Json::Value::Destroy((Json::Value::Self *)v29);
        Json::Value::Construct((Json::Value::Self *)v30, a5);
        v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "credentialsToLinkTo");
        Json::Value::opAssign(v17, (const Json::Value::Self *)v30);
        Json::Value::Destroy((Json::Value::Self *)v30);
        Json::Value::Construct((int)(uintptr_t)(v31), a6);
        v18 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "if_exists");
        Json::Value::opAssign(v18, (const Json::Value::Self *)v31);
        Json::Value::Destroy((Json::Value::Self *)v31);
        v19 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v21));
        return gaia::ThreadManager::pushTask(v19, v13);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25[1]), "auth", (int)(uintptr_t)(v25));
        result = gaia::Gaia_Janus::StartAndAuthorizeJanus(a1, a5, &v25[1]);
        v12 = (void *)(*(uint32_t *)&v25[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v25[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v25[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          v24 = (Json::Value::Self *)result;
          g4_std::string::Rep::M_destroy(v12);
          result = (int)(uintptr_t)(v24);
        }
        if ( result == 0 )
        {
          gaia::Gaia_Janus::GetJanusToken((int)(uintptr_t)(&v26), a1);
          v20 = gaia::Gaia::GetInstance();
          v23 = (Json::Value::Self *)gaia::Janus::AddCredential(
                                 *(gaia::BaseServiceManager::Self **)(v20 + 44),
                                 (int)(uintptr_t)(a2),
                                 (int)(uintptr_t)(a3),
                                 a4,
                                 (int)(uintptr_t)(&v26),
                                 (int)(uintptr_t)(a6),
                                 0);
          g4_std::string::Destroy(&v26);
          result = (int)(uintptr_t)(v23);
          if ( v23 == nullptr )
          {
            v22[0] = 0;
            (*(void (**)(uint32_t, uint32_t, int, char *))(*(uint32_t *)ISingleton<gaia::GaiaActionsManager::Self>::s_instance + 8))(
              (uint32_t)(uintptr_t)(ISingleton<gaia::GaiaActionsManager::Self>::s_instance),
              0,
              1,
              *(char **)v22);
            return 0;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::AddAlias  (binary VA: 0x1480140)
// Original: gaia::Gaia_Janus::AddAlias
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::AddAlias(gaia::Gaia::Self *a1, int a2, int a3, char a4, int a5, int a6)
{
  char IsInitialized;
  int result;
  void *v8;
  int v9;
  int v10;
  void *v11;
  uint32_t *v12;
  Json::Value::Self *v13;
  int Instance;
  typedef gaia::ThreadManager::Self *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint8_t _g4_t_v18[7];
  typedef int _g4_t_v19;
  typedef uint8_t _g4_t_v20[28];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v16)) > _g4_s1 ? (28u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v17)) > _g4_s2 ? (28u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (37u + sizeof(_g4_t_v18)) > _g4_s3 ? (37u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v19)) > _g4_s4 ? (44u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v20)) > _g4_s5 ? (48u + sizeof(_g4_t_v20)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 37u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 48u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    if ( a4 != 0 )
    {
      v12 = (uint32_t *)opNew(0x44u);
      *v12 = a6;
      v12[1] = a5;
      v12[2] = 2520;
      Json::Value::Construct((int)(uintptr_t)(v12 + 3), nullptr);
      v12[7] = 0;
      v12[8] = 0;
      Json::Value::Construct((int)(uintptr_t)(v12 + 9), nullptr);
      v12[13] = 0;
      v12[15] = a3;
      v12[14] = 0;
      v12[16] = 0;
      Json::Value::Construct((Json::Value::Self *)v20, a2);
      v13 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v12 + 3), "accountType");
      Json::Value::opAssign(v13, (const Json::Value::Self *)v20);
      Json::Value::Destroy((Json::Value::Self *)v20);
      Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v15));
      return gaia::ThreadManager::pushTask(Instance, v12);
    }
    else
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18[3]), "auth", (int)(uintptr_t)(v18));
      result = gaia::Gaia_Janus::StartAndAuthorizeJanus(a1, a2, &v18[3]);
      v8 = (void *)(*(uint32_t *)&v18[3] - 12);
      if ( (uint32_t *)(*(uint32_t *)&v18[3] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v18[3] - 4), 0xFFFFFFFF) <= 0 )
      {
        v17 = result;
        g4_std::string::Rep::M_destroy(v8);
        result = v17;
      }
      if ( result == 0 )
      {
        v9 = gaia::Gaia::GetInstance();
        gaia::Gaia::GetJanusToken((int)(uintptr_t)(&v19), v9);
        v10 = gaia::Gaia::GetInstance();
        result = gaia::Janus::AddAlias(*(uint32_t *)(v10 + 44), a3, &v19, nullptr);
        v11 = (void *)(v19 - 12);
        if ( (uint32_t *)(v19 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
        {
          v16 = result;
          g4_std::string::Rep::M_destroy(v11);
          return v16;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::FindUserByAlias  (binary VA: 0x14803c0)
// Original: gaia::Gaia_Janus::FindUserByAlias
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::FindUserByAlias(gaia::Gaia::Self *a1, int a2, int a3, uint32_t *a4, char a5, int a6, int a7)
{
  char IsInitialized;
  int result;
  void *v9;
  int v10;
  int v11;
  void *v12;
  uint32_t *v13;
  Json::Value::Self *v14;
  Json::Value::Self *v15;
  int Instance;
  typedef gaia::ThreadManager::Self *_g4_t_v17;
  typedef Json::Value::Self *_g4_t_v18;
  typedef Json::Value::Self *_g4_t_v19;
  typedef uint8_t _g4_t_v20[7];
  typedef int _g4_t_v21;
  typedef uint8_t _g4_t_v22[16];
  typedef uint8_t _g4_t_v23[28];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v17)) > _g4_s0 ? (0u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v18)) > _g4_s1 ? (44u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v19)) > _g4_s2 ? (44u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (53u + sizeof(_g4_t_v20)) > _g4_s3 ? (53u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v21)) > _g4_s4 ? (60u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v22)) > _g4_s5 ? (64u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v23)) > _g4_s6 ? (80u + sizeof(_g4_t_v23)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 53u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 60u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 64u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 80u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    if ( a5 != 0 )
    {
      v13 = (uint32_t *)opNew(0x44u);
      *v13 = a7;
      v13[1] = a6;
      v13[2] = 2521;
      Json::Value::Construct((int)(uintptr_t)(v13 + 3), nullptr);
      v13[7] = 0;
      v13[8] = 0;
      Json::Value::Construct((int)(uintptr_t)(v13 + 9), nullptr);
      v13[13] = 0;
      v13[15] = a3;
      v13[14] = 0;
      v13[16] = 0;
      Json::Value::Construct((int)(uintptr_t)(v22), a4);
      v14 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "alias");
      Json::Value::opAssign(v14, (const Json::Value::Self *)v22);
      Json::Value::Destroy((Json::Value::Self *)v22);
      Json::Value::Construct((Json::Value::Self *)v23, a2);
      v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "accountType");
      Json::Value::opAssign(v15, (const Json::Value::Self *)v23);
      Json::Value::Destroy((Json::Value::Self *)v23);
      Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v17));
      return gaia::ThreadManager::pushTask(Instance, v13);
    }
    else
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20[3]), "auth", (int)(uintptr_t)(v20));
      result = gaia::Gaia_Janus::StartAndAuthorizeJanus(a1, a2, &v20[3]);
      v9 = (void *)(*(uint32_t *)&v20[3] - 12);
      if ( (uint32_t *)(*(uint32_t *)&v20[3] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v20[3] - 4), 0xFFFFFFFF) <= 0 )
      {
        v19 = (Json::Value::Self *)result;
        g4_std::string::Rep::M_destroy(v9);
        result = (int)(uintptr_t)(v19);
      }
      if ( result == 0 )
      {
        v10 = gaia::Gaia::GetInstance();
        gaia::Gaia::GetJanusToken((int)(uintptr_t)(&v21), v10);
        v11 = gaia::Gaia::GetInstance();
        result = gaia::Janus::FindUserByAlias(*(uint32_t *)(v11 + 44), a3, a4, &v21, nullptr);
        v12 = (void *)(v21 - 12);
        if ( (uint32_t *)(v21 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
        {
          v18 = (Json::Value::Self *)result;
          g4_std::string::Rep::M_destroy(v12);
          return (int)(uintptr_t)(v18);
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::SetDeviceInfo  (binary VA: 0x14806b0)
// Original: gaia::Gaia_Janus::SetDeviceInfo
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::SetDeviceInfo(gaia::Gaia::Self *a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, char a7, int a8, int a9)
{
  char IsInitialized;
  int result;
  void *v11;
  int v12;
  int v13;
  void *v14;
  uint32_t *v15;
  Json::Value::Self *v16;
  Json::Value::Self *v17;
  Json::Value::Self *v18;
  Json::Value::Self *v19;
  Json::Value::Self *v20;
  int Instance;
  typedef gaia::ThreadManager::Self *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef uint8_t _g4_t_v25[7];
  typedef int _g4_t_v26;
  typedef uint8_t _g4_t_v27[16];
  typedef uint8_t _g4_t_v28[16];
  typedef uint8_t _g4_t_v29[16];
  typedef uint8_t _g4_t_v30[16];
  typedef uint8_t _g4_t_v31[44];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v22)) > _g4_s0 ? (0u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v23)) > _g4_s1 ? (44u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v24)) > _g4_s2 ? (44u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (53u + sizeof(_g4_t_v25)) > _g4_s3 ? (53u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v26)) > _g4_s4 ? (60u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v27)) > _g4_s5 ? (64u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v28)) > _g4_s6 ? (80u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v29)) > _g4_s7 ? (96u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (112u + sizeof(_g4_t_v30)) > _g4_s8 ? (112u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (128u + sizeof(_g4_t_v31)) > _g4_s9 ? (128u + sizeof(_g4_t_v31)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 53u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 60u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 64u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 80u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 96u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 112u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 128u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    if ( a7 != 0 )
    {
      v15 = (uint32_t *)opNew(0x44u);
      *v15 = a9;
      v15[1] = a8;
      v15[2] = 2509;
      Json::Value::Construct((int)(uintptr_t)(v15 + 3), nullptr);
      v15[7] = 0;
      v15[8] = 0;
      Json::Value::Construct((int)(uintptr_t)(v15 + 9), nullptr);
      v15[13] = 0;
      v15[14] = 0;
      v15[15] = 0;
      v15[16] = 0;
      Json::Value::Construct((Json::Value::Self *)v27, a2);
      v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "accountType");
      Json::Value::opAssign(v16, (const Json::Value::Self *)v27);
      Json::Value::Destroy((Json::Value::Self *)v27);
      Json::Value::Construct((int)(uintptr_t)(v28), a3);
      v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "model");
      Json::Value::opAssign(v17, (const Json::Value::Self *)v28);
      Json::Value::Destroy((Json::Value::Self *)v28);
      Json::Value::Construct((int)(uintptr_t)(v29), a4);
      v18 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "carrier");
      Json::Value::opAssign(v18, (const Json::Value::Self *)v29);
      Json::Value::Destroy((Json::Value::Self *)v29);
      Json::Value::Construct((int)(uintptr_t)(v30), a5);
      v19 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "country");
      Json::Value::opAssign(v19, (const Json::Value::Self *)v30);
      Json::Value::Destroy((Json::Value::Self *)v30);
      Json::Value::Construct((int)(uintptr_t)(v31), a6);
      v20 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "language");
      Json::Value::opAssign(v20, (const Json::Value::Self *)v31);
      Json::Value::Destroy((Json::Value::Self *)v31);
      Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v22));
      return gaia::ThreadManager::pushTask(Instance, v15);
    }
    else
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25[3]), "auth", (int)(uintptr_t)(v25));
      result = gaia::Gaia_Janus::StartAndAuthorizeJanus(a1, a2, &v25[3]);
      v11 = (void *)(*(uint32_t *)&v25[3] - 12);
      if ( (uint32_t *)(*(uint32_t *)&v25[3] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v25[3] - 4), 0xFFFFFFFF) <= 0 )
      {
        v24 = result;
        g4_std::string::Rep::M_destroy(v11);
        result = v24;
      }
      if ( result == 0 )
      {
        v12 = gaia::Gaia::GetInstance();
        gaia::Gaia::GetJanusToken((int)(uintptr_t)(&v26), v12);
        v13 = gaia::Gaia::GetInstance();
        result = gaia::Janus::SetDeviceInfo(
                   *(gaia::BaseServiceManager::Self **)(v13 + 44),
                   (int)(uintptr_t)(&v26),
                   (int)(uintptr_t)(a3),
                   (int)(uintptr_t)(a4),
                   (int)(uintptr_t)(a5),
                   (int)(uintptr_t)(a6),
                   0);
        v14 = (void *)(v26 - 12);
        if ( (uint32_t *)(v26 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
        {
          v23 = result;
          g4_std::string::Rep::M_destroy(v14);
          return v23;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::Login  (binary VA: 0x1495bc0)
// Original: gaia::Gaia_Janus::Login
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::Login(gaia::Gaia::Self *a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, char a6, int a7, int a8)
{
  char IsInitialized;
  int result;
  int v10;
  uint32_t *v11;
  uint32_t *v12;
  int v13;
  uint32_t *v14;
  uint32_t *v15;
  int v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  Json::Value::Self *v20;
  Json::Value::Self *v21;
  Json::Value::Self *v22;
  Json::Value::Self *v23;
  int Instance;
  typedef gaia::ThreadManager::Self *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint32_t _g4_t_v27[5];
  typedef uint32_t *_g4_t_v28;
  typedef uint32_t _g4_t_v29[2];
  typedef uint32_t *_g4_t_v30;
  typedef uint32_t _g4_t_v31[2];
  typedef uint32_t *_g4_t_v32;
  typedef uint32_t *_g4_t_v33;
  typedef uint8_t _g4_t_v34[16];
  typedef uint8_t _g4_t_v35[16];
  typedef uint8_t _g4_t_v36[16];
  typedef uint8_t _g4_t_v37[16];
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef uint8_t _g4_t_v40[4];
  typedef uint8_t _g4_t_v41[4];
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef uint8_t _g4_t_v44[4];
  typedef uint8_t _g4_t_v45[4];
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef uint8_t _g4_t_v48[4];
  typedef uint8_t _g4_t_v49[32];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (0u + sizeof(_g4_t_v25)) > _g4_s0 ? (0u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v26)) > _g4_s1 ? (36u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v27)) > _g4_s2 ? (44u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v28)) > _g4_s3 ? (64u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (68u + sizeof(_g4_t_v29)) > _g4_s4 ? (68u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (76u + sizeof(_g4_t_v30)) > _g4_s5 ? (76u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v31)) > _g4_s6 ? (80u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (88u + sizeof(_g4_t_v32)) > _g4_s7 ? (88u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (92u + sizeof(_g4_t_v33)) > _g4_s8 ? (92u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (96u + sizeof(_g4_t_v34)) > _g4_s9 ? (96u + sizeof(_g4_t_v34)) : _g4_s9,
    _g4_s11 = (112u + sizeof(_g4_t_v35)) > _g4_s10 ? (112u + sizeof(_g4_t_v35)) : _g4_s10,
    _g4_s12 = (128u + sizeof(_g4_t_v36)) > _g4_s11 ? (128u + sizeof(_g4_t_v36)) : _g4_s11,
    _g4_s13 = (144u + sizeof(_g4_t_v37)) > _g4_s12 ? (144u + sizeof(_g4_t_v37)) : _g4_s12,
    _g4_s14 = (160u + sizeof(_g4_t_v38)) > _g4_s13 ? (160u + sizeof(_g4_t_v38)) : _g4_s13,
    _g4_s15 = (164u + sizeof(_g4_t_v39)) > _g4_s14 ? (164u + sizeof(_g4_t_v39)) : _g4_s14,
    _g4_s16 = (168u + sizeof(_g4_t_v40)) > _g4_s15 ? (168u + sizeof(_g4_t_v40)) : _g4_s15,
    _g4_s17 = (172u + sizeof(_g4_t_v41)) > _g4_s16 ? (172u + sizeof(_g4_t_v41)) : _g4_s16,
    _g4_s18 = (176u + sizeof(_g4_t_v42)) > _g4_s17 ? (176u + sizeof(_g4_t_v42)) : _g4_s17,
    _g4_s19 = (180u + sizeof(_g4_t_v43)) > _g4_s18 ? (180u + sizeof(_g4_t_v43)) : _g4_s18,
    _g4_s20 = (184u + sizeof(_g4_t_v44)) > _g4_s19 ? (184u + sizeof(_g4_t_v44)) : _g4_s19,
    _g4_s21 = (188u + sizeof(_g4_t_v45)) > _g4_s20 ? (188u + sizeof(_g4_t_v45)) : _g4_s20,
    _g4_s22 = (192u + sizeof(_g4_t_v46)) > _g4_s21 ? (192u + sizeof(_g4_t_v46)) : _g4_s21,
    _g4_s23 = (196u + sizeof(_g4_t_v47)) > _g4_s22 ? (196u + sizeof(_g4_t_v47)) : _g4_s22,
    _g4_s24 = (200u + sizeof(_g4_t_v48)) > _g4_s23 ? (200u + sizeof(_g4_t_v48)) : _g4_s23,
    _g4_s25 = (204u + sizeof(_g4_t_v49)) > _g4_s24 ? (204u + sizeof(_g4_t_v49)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 0u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 36u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 64u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 68u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 76u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 80u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 88u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 92u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 96u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 112u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 128u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 144u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 160u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 164u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 168u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 172u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 176u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 180u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 184u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 188u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 192u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 196u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 200u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 204u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    if ( gaia::Gaia_Janus::IsLoggedIn((int)(uintptr_t)(a1), a2) )
      gaia::Gaia_Janus::Logout((int)(uintptr_t)(a1), a2);
    if ( a6 != 0 )
    {
      v19 = (uint32_t *)opNew(0x44u);
      *v19 = a8;
      v19[1] = a7;
      v19[2] = 2501;
      Json::Value::Construct((int)(uintptr_t)(v19 + 3), nullptr);
      v19[7] = 0;
      v19[8] = 0;
      Json::Value::Construct((int)(uintptr_t)(v19 + 9), nullptr);
      v19[13] = 0;
      v19[14] = 0;
      v19[15] = 0;
      v19[16] = 0;
      Json::Value::Construct((Json::Value::Self *)v34, a2);
      v20 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v19 + 3), "accountType");
      Json::Value::opAssign(v20, (const Json::Value::Self *)v34);
      Json::Value::Destroy((Json::Value::Self *)v34);
      Json::Value::Construct((int)(uintptr_t)(v35), a3);
      v21 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v19 + 3), "username");
      Json::Value::opAssign(v21, (const Json::Value::Self *)v35);
      Json::Value::Destroy((Json::Value::Self *)v35);
      Json::Value::Construct((int)(uintptr_t)(v36), a4);
      v22 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v19 + 3), "password");
      Json::Value::opAssign(v22, (const Json::Value::Self *)v36);
      Json::Value::Destroy((Json::Value::Self *)v36);
      Json::Value::Construct((int)(uintptr_t)(v37), a5);
      v23 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v19 + 3), "scope");
      Json::Value::opAssign(v23, (const Json::Value::Self *)v37);
      Json::Value::Destroy((Json::Value::Self *)v37);
      Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v25));
      return gaia::ThreadManager::pushTask(Instance, v19);
    }
    else
    {
      v10 = gaia::Gaia::GetInstance();
      v11 = *(uint32_t **)(v10 + 368);
      v12 = (uint32_t *)(v10 + 364);
      if ( v11 == nullptr )
        goto LABEL_12;
      do
      {
        while ( v11[4] >= a2 )
        {
          v12 = v11;
          v11 = (uint32_t *)v11[2];
          if ( v11 == nullptr )
            goto LABEL_10;
        }
        v11 = (uint32_t *)v11[3];
      }
      while ( v11 != nullptr );
LABEL_10:
      if ( (uint32_t *)(v10 + 364) == v12 || v12[4] > a2 )
      {
LABEL_12:
        v28 = &dword_213B814;
        v29[0] = (uint32_t)(uintptr_t)(&dword_213B814);
        v27[4] = 0;
        v38 = a2;
        v39 = 0;
        g4_std::string::construct_copy(v40, &v28);
        g4_std::string::construct_copy(v41, v29);
        g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_insert_unique(v27);
        v12 = (uint32_t *)v27[0];
        g4_std::string::Destroy(v41);
        g4_std::string::Destroy(v40);
        g4_std::string::Destroy(v29);
        g4_std::string::Destroy(&v28);
      }
      v12[5] = a2;
      v13 = gaia::Gaia::GetInstance();
      v14 = *(uint32_t **)(v13 + 368);
      v15 = (uint32_t *)(v13 + 364);
      if ( v14 == nullptr )
        goto LABEL_20;
      do
      {
        while ( v14[4] >= a2 )
        {
          v15 = v14;
          v14 = (uint32_t *)v14[2];
          if ( v14 == nullptr )
            goto LABEL_18;
        }
        v14 = (uint32_t *)v14[3];
      }
      while ( v14 != nullptr );
LABEL_18:
      if ( (uint32_t *)(v13 + 364) == v15 || v15[4] > a2 )
      {
LABEL_20:
        v30 = &dword_213B814;
        v31[0] = (uint32_t)(uintptr_t)(&dword_213B814);
        v29[1] = 0;
        v42 = a2;
        v43 = 0;
        g4_std::string::construct_copy(v44, &v30);
        g4_std::string::construct_copy(v45, v31);
        g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_insert_unique(v27);
        v15 = (uint32_t *)v27[0];
        g4_std::string::Destroy(v45);
        g4_std::string::Destroy(v44);
        g4_std::string::Destroy(v31);
        g4_std::string::Destroy(&v30);
      }
      g4_std::string::assign_str(v15 + 6, a3);
      v16 = gaia::Gaia::GetInstance();
      v17 = *(uint32_t **)(v16 + 368);
      v18 = (uint32_t *)(v16 + 364);
      if ( v17 == nullptr )
        goto LABEL_28;
      do
      {
        while ( v17[4] >= a2 )
        {
          v18 = v17;
          v17 = (uint32_t *)v17[2];
          if ( v17 == nullptr )
            goto LABEL_26;
        }
        v17 = (uint32_t *)v17[3];
      }
      while ( v17 != nullptr );
LABEL_26:
      if ( v18 == (uint32_t *)(v16 + 364) || a2 < v18[4] )
      {
LABEL_28:
        v32 = &dword_213B814;
        v33 = &dword_213B814;
        v31[1] = 0;
        v46 = a2;
        v47 = 0;
        g4_std::string::construct_copy(v48, &v32);
        g4_std::string::construct_copy(v49, &v33);
        g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_insert_unique(v27);
        v18 = (uint32_t *)v27[0];
        g4_std::string::Destroy(v49);
        g4_std::string::Destroy(v48);
        g4_std::string::Destroy(&v33);
        g4_std::string::Destroy(&v32);
      }
      g4_std::string::assign_str(v18 + 7, a4);
      result = gaia::Gaia_Janus::Authorize(a1, a5, a2, 0, 0, 0);
      if ( result != 0 )
      {
        v26 = result;
        gaia::Gaia_Janus::Logout((int)(uintptr_t)(a1), a2);
        return v26;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::GetCredentialListForAccount  (binary VA: 0x14961c0)
// Original: gaia::Gaia_Janus::GetCredentialListForAccount
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::GetCredentialListForAccount(gaia::Gaia_Janus::Self *a1, int a2, const void **a3, uint32_t *a4, int a5, char a6, int a7, int a8)
{
  char IsInitialized;
  int result;
  void *v10;
  uint32_t *v11;
  Json::Value::Self *v12;
  Json::Value::Self *v13;
  Json::Value::Self *v14;
  int Instance;
  gaia::Gaia::Self *v16;
  size_t n;
  int JanusToken;
  int v19;
  gaia::Gaia::Self *v20;
  int v21;
  int CredentialListForAccount;
  typedef gaia::ThreadManager::Self *_g4_t_s1;
  typedef gaia::Gaia::Self *_g4_t_v24;
  typedef gaia::Gaia::Self *_g4_t_v25;
  typedef gaia::Gaia::Self *_g4_t_v26;
  typedef gaia::Gaia::Self *_g4_t_v27;
  typedef gaia::Gaia::Self *_g4_t_v28;
  typedef size_t _g4_t_v29;
  typedef size_t _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef void *_g4_t_s2;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef void *_g4_t_ptr;
  typedef int _g4_t_v38;
  typedef uint8_t _g4_t_v39[16];
  typedef uint8_t _g4_t_v40[16];
  typedef uint8_t _g4_t_v41[44];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_s1)) > _g4_s0 ? (0u + sizeof(_g4_t_s1)) : _g4_s0,
    _g4_s2 = (52u + sizeof(_g4_t_v24)) > _g4_s1 ? (52u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (52u + sizeof(_g4_t_v25)) > _g4_s2 ? (52u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v26)) > _g4_s3 ? (52u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v27)) > _g4_s4 ? (52u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v28)) > _g4_s5 ? (52u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v29)) > _g4_s6 ? (56u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v30)) > _g4_s7 ? (60u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (67u + sizeof(_g4_t_v31)) > _g4_s8 ? (67u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v32)) > _g4_s9 ? (68u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v33)) > _g4_s10 ? (72u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_s2)) > _g4_s11 ? (76u + sizeof(_g4_t_s2)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v35)) > _g4_s12 ? (80u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v36)) > _g4_s13 ? (84u + sizeof(_g4_t_v36)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_ptr)) > _g4_s14 ? (88u + sizeof(_g4_t_ptr)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v38)) > _g4_s15 ? (92u + sizeof(_g4_t_v38)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v39)) > _g4_s16 ? (96u + sizeof(_g4_t_v39)) : _g4_s16,
    _g4_s18 = (112u + sizeof(_g4_t_v40)) > _g4_s17 ? (112u + sizeof(_g4_t_v40)) : _g4_s17,
    _g4_s19 = (128u + sizeof(_g4_t_v41)) > _g4_s18 ? (128u + sizeof(_g4_t_v41)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 52u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 52u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 52u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 52u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 56u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 60u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 67u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 68u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 72u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 76u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 80u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 84u);
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 88u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 92u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 96u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 112u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 128u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized == 0 )
    return result;
  if ( a6 != 0 )
  {
    v11 = (uint32_t *)opNew(0x44u);
    *v11 = a8;
    v11[1] = a7;
    v11[2] = 2507;
    Json::Value::Construct((int)(uintptr_t)(v11 + 3), nullptr);
    v11[7] = 0;
    v11[8] = 0;
    Json::Value::Construct((int)(uintptr_t)(v11 + 9), nullptr);
    v11[13] = 0;
    v11[14] = 0;
    v11[15] = 0;
    v11[16] = 0;
    Json::Value::Construct((Json::Value::Self *)v39, a2);
    v12 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v11 + 3), "accountType");
    Json::Value::opAssign(v12, (const Json::Value::Self *)v39);
    Json::Value::Destroy((Json::Value::Self *)v39);
    Json::Value::Construct((int)(uintptr_t)(v40), a3);
    v13 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v11 + 3), "username");
    Json::Value::opAssign(v13, (const Json::Value::Self *)v40);
    Json::Value::Destroy((Json::Value::Self *)v40);
    Json::Value::Construct((int)(uintptr_t)(v41), a4);
    v14 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v11 + 3), "password");
    Json::Value::opAssign(v14, (const Json::Value::Self *)v41);
    Json::Value::Destroy((Json::Value::Self *)v41);
    v11[7] = a5;
    Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(s1));
    return gaia::ThreadManager::pushTask(Instance, v11);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), (char *)&unk_1B15112, (int)(uintptr_t)(&v31));
  result = gaia::Gaia_Janus::GetJanusStatus(a1);
  if ( result == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&s2), (char *)&unk_1B15112, (int)(uintptr_t)(&v32));
    v16 = (gaia::Gaia::Self *)gaia::Gaia::GetInstance();
    if ( gaia::Gaia::GetCredentialDetails(v16, a2, 0, (gaia::Gaia::Self *)&s2) != 0 )
      goto LABEL_14;
    v29 = *((uint32_t *)*a3 - 3);
    v30 = *((uint32_t *)s2 - 3);
    n = v29;
    if ( v30 <= v29 )
      n = *((uint32_t *)s2 - 3);
    if ( memcmp(*a3, s2, n) == 0 && v29 == v30 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "auth", (int)(uintptr_t)(&v32) + 2);
      v24 = (gaia::Gaia::Self *)gaia::Gaia_Janus::Authorize(a1, &v36, a2, 0, 0, 0);
      g4_std::string::Destroy(&v36);
      JanusToken = (int)(uintptr_t)(v24);
      if ( v24 != nullptr )
      {
LABEL_16:
        v26 = (gaia::Gaia::Self *)JanusToken;
        g4_std::string::Destroy(&s2);
        result = (int)(uintptr_t)(v26);
        goto LABEL_4;
      }
      v19 = gaia::Gaia::GetInstance();
      JanusToken = gaia::Gaia_Janus::GetJanusToken(*(glwebtools::Mutex::Self **)(v19 + 560), a2, (int)(uintptr_t)(&v33));
    }
    else
    {
LABEL_14:
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "auth", (int)(uintptr_t)(&v32) + 1);
      LOBYTE(v20) = gaia::Gaia_Janus::AuthorizeExclusive((int)(uintptr_t)(a1), (gaia::Gaia::Self *)&v33, &v35, a2, a3, a4, 0, 0, 0);
      v25 = v20;
      g4_std::string::Destroy(&v35);
      JanusToken = (int)(uintptr_t)(v25);
    }
    if ( JanusToken == 0 )
    {
      ptr = nullptr;
      v38 = 0;
      v21 = gaia::Gaia::GetInstance();
      CredentialListForAccount = gaia::Janus::GetCredentialListForAccount(
                                   *(gaia::BaseServiceManager::Self **)(v21 + 44),
                                   &ptr,
                                   &v38,
                                   (int)(uintptr_t)(&v33),
                                   0);
      if ( CredentialListForAccount == 0 )
        CredentialListForAccount = gaia::BaseServiceManager::ParseMessages((char *)ptr, v38, a5, 8);
      v27 = (gaia::Gaia::Self *)CredentialListForAccount;
      free(ptr);
      JanusToken = (int)(uintptr_t)(v27);
    }
    goto LABEL_16;
  }
LABEL_4:
  v10 = (void *)(v33 - 12);
  if ( (uint32_t *)(v33 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
  {
    v28 = (gaia::Gaia::Self *)result;
    g4_std::string::Rep::M_destroy(v10);
    return (int)(uintptr_t)(v28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::GetCredentialListForAccount  (binary VA: 0x1496620)
// Original: gaia::Gaia_Janus::GetCredentialListForAccount
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::GetCredentialListForAccount(gaia::Gaia_Janus::Self *a1, int a2, int a3, char a4, int a5, int a6)
{
  char IsInitialized;
  int result;
  gaia::Gaia::Self *Instance;
  void *v9;
  void *v10;
  gaia::Gaia::Self *v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v14)) > _g4_s2 ? (20u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v15)) > _g4_s3 ? (24u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v16)) > _g4_s4 ? (28u + sizeof(_g4_t_v16)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), (char *)&unk_1B15112, (int)(uintptr_t)(&v14));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v16), (char *)&unk_1B15112, (int)(uintptr_t)(&v14) + 1);
    Instance = (gaia::Gaia::Self *)gaia::Gaia::GetInstance();
    result = gaia::Gaia::GetCredentialDetails(Instance, a2, 0, (gaia::Gaia::Self *)&v15);
    if ( result == 0 )
    {
      v11 = (gaia::Gaia::Self *)gaia::Gaia::GetInstance();
      result = gaia::Gaia::GetCredentialDetails(v11, a2, 1, (gaia::Gaia::Self *)v16);
      if ( result == 0 )
        result = gaia::Gaia_Janus::GetCredentialListForAccount(a1, a2, (const void **)&v15, v16, a3, a4, a5, a6);
    }
    v9 = (void *)(v16[0] - 12);
    if ( (uint32_t *)(v16[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v16[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      v12 = result;
      g4_std::string::Rep::M_destroy(v9);
      result = v12;
    }
    v10 = (void *)(v15 - 12);
    if ( (uint32_t *)(v15 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
    {
      v13 = result;
      g4_std::string::Rep::M_destroy(v10);
      return v13;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::CheckForConflictingCredentials  (binary VA: 0x1496820)
// Original: gaia::Gaia_Janus::CheckForConflictingCredentials
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::CheckForConflictingCredentials(gaia::Gaia_Janus::Self *a1, int a2, int a3, const void **a4, uint32_t *a5, int a6, char a7, int a8, int a9)
{
  int CredentialDetails;
  int Instance;
  gaia::Gaia::Self *v11;
  void *v12;
  void *v13;
  gaia::BaseJSONServiceResponse::Self *v14;
  gaia::BaseJSONServiceResponse::Self *v15;
  uint32_t *v17;
  Json::Value::Self *v18;
  Json::Value::Self *v19;
  Json::Value::Self *v20;
  Json::Value::Self *v21;
  int v22;
  gaia::Gaia::Self *v23;
  int CredentialListForAccount;
  gaia::BaseJSONServiceResponse::Self *v25;
  int v26;
  gaia::BaseJSONServiceResponse::Self *v27;
  Json::Value::Self *JSONMessage;
  Json::Value::Self *v29;
  Json::Value::Self *v30;
  Json::Value::Self *v31;
  Json::Value::Self *v32;
  Json::Value::Self *v33;
  Json::Value::Self *v34;
  Json::Value::Self *v35;
  Json::Value::Self *v36;
  Json::Value::Self *v37;
  unsigned int i;
  Json::Value::Self *v39;
  Json::Value::Self *v40;
  Json::Value::Self *v41;
  size_t n;
  Json::Value::Self *v43;
  int v44;
  Json::Value::Self *v45;
  Json::Value::Self *v46;
  int v47;
  Json::Value::Self *v48;
  Json::Value::Self *v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_s1;
  typedef gaia::ThreadManager::Self *_g4_t_s1a;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_s1b;
  typedef Json::Value::Self *_g4_t_v61;
  typedef Json::Value::Self *_g4_t_v62;
  typedef unsigned int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef void *_g4_t_v68;
  typedef void *_g4_t_s2;
  typedef uint8_t _g4_t_v70[4];
  typedef uint8_t _g4_t_v71[4];
  typedef uint8_t _g4_t_v72[4];
  typedef uint8_t _g4_t_v73[4];
  typedef uint8_t _g4_t_v74[4];
  typedef uint8_t _g4_t_v75[4];
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v78;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v79;
  typedef int _g4_t_v80;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v81;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v82;
  typedef int _g4_t_v83;
  typedef uint8_t _g4_t_v84[16];
  typedef uint8_t _g4_t_v85[16];
  typedef uint8_t _g4_t_v86[16];
  typedef uint8_t _g4_t_v87[16];
  typedef uint8_t _g4_t_v88[16];
  typedef uint8_t _g4_t_v89[16];
  typedef uint8_t _g4_t_v90[16];
  typedef uint8_t _g4_t_v91[16];
  typedef uint8_t _g4_t_v92[16];
  typedef uint8_t _g4_t_v93[16];
  typedef uint8_t _g4_t_v94[16];
  typedef uint8_t _g4_t_v95[16];
  typedef uint8_t _g4_t_v96[16];
  typedef uint8_t _g4_t_v97[16];
  typedef uint8_t _g4_t_v98[16];
  typedef uint8_t _g4_t_v99[16];
  typedef int _g4_t_v100;
  enum : size_t {
    _g4_s0 = 496u,
    _g4_s1 = (0u + sizeof(_g4_t_s1)) > _g4_s0 ? (0u + sizeof(_g4_t_s1)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_s1a)) > _g4_s1 ? (0u + sizeof(_g4_t_s1a)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_s1b)) > _g4_s2 ? (0u + sizeof(_g4_t_s1b)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v61)) > _g4_s3 ? (40u + sizeof(_g4_t_v61)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v62)) > _g4_s4 ? (44u + sizeof(_g4_t_v62)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v63)) > _g4_s5 ? (48u + sizeof(_g4_t_v63)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v64)) > _g4_s6 ? (60u + sizeof(_g4_t_v64)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v65)) > _g4_s7 ? (64u + sizeof(_g4_t_v65)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v66)) > _g4_s8 ? (68u + sizeof(_g4_t_v66)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v67)) > _g4_s9 ? (72u + sizeof(_g4_t_v67)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v68)) > _g4_s10 ? (76u + sizeof(_g4_t_v68)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_s2)) > _g4_s11 ? (80u + sizeof(_g4_t_s2)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v70)) > _g4_s12 ? (84u + sizeof(_g4_t_v70)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v71)) > _g4_s13 ? (88u + sizeof(_g4_t_v71)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v72)) > _g4_s14 ? (92u + sizeof(_g4_t_v72)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v73)) > _g4_s15 ? (96u + sizeof(_g4_t_v73)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v74)) > _g4_s16 ? (100u + sizeof(_g4_t_v74)) : _g4_s16,
    _g4_s18 = (104u + sizeof(_g4_t_v75)) > _g4_s17 ? (104u + sizeof(_g4_t_v75)) : _g4_s17,
    _g4_s19 = (108u + sizeof(_g4_t_v76)) > _g4_s18 ? (108u + sizeof(_g4_t_v76)) : _g4_s18,
    _g4_s20 = (112u + sizeof(_g4_t_v77)) > _g4_s19 ? (112u + sizeof(_g4_t_v77)) : _g4_s19,
    _g4_s21 = (116u + sizeof(_g4_t_v78)) > _g4_s20 ? (116u + sizeof(_g4_t_v78)) : _g4_s20,
    _g4_s22 = (120u + sizeof(_g4_t_v79)) > _g4_s21 ? (120u + sizeof(_g4_t_v79)) : _g4_s21,
    _g4_s23 = (124u + sizeof(_g4_t_v80)) > _g4_s22 ? (124u + sizeof(_g4_t_v80)) : _g4_s22,
    _g4_s24 = (128u + sizeof(_g4_t_v81)) > _g4_s23 ? (128u + sizeof(_g4_t_v81)) : _g4_s23,
    _g4_s25 = (132u + sizeof(_g4_t_v82)) > _g4_s24 ? (132u + sizeof(_g4_t_v82)) : _g4_s24,
    _g4_s26 = (136u + sizeof(_g4_t_v83)) > _g4_s25 ? (136u + sizeof(_g4_t_v83)) : _g4_s25,
    _g4_s27 = (140u + sizeof(_g4_t_v84)) > _g4_s26 ? (140u + sizeof(_g4_t_v84)) : _g4_s26,
    _g4_s28 = (156u + sizeof(_g4_t_v85)) > _g4_s27 ? (156u + sizeof(_g4_t_v85)) : _g4_s27,
    _g4_s29 = (172u + sizeof(_g4_t_v86)) > _g4_s28 ? (172u + sizeof(_g4_t_v86)) : _g4_s28,
    _g4_s30 = (188u + sizeof(_g4_t_v87)) > _g4_s29 ? (188u + sizeof(_g4_t_v87)) : _g4_s29,
    _g4_s31 = (204u + sizeof(_g4_t_v88)) > _g4_s30 ? (204u + sizeof(_g4_t_v88)) : _g4_s30,
    _g4_s32 = (220u + sizeof(_g4_t_v89)) > _g4_s31 ? (220u + sizeof(_g4_t_v89)) : _g4_s31,
    _g4_s33 = (236u + sizeof(_g4_t_v90)) > _g4_s32 ? (236u + sizeof(_g4_t_v90)) : _g4_s32,
    _g4_s34 = (252u + sizeof(_g4_t_v91)) > _g4_s33 ? (252u + sizeof(_g4_t_v91)) : _g4_s33,
    _g4_s35 = (268u + sizeof(_g4_t_v92)) > _g4_s34 ? (268u + sizeof(_g4_t_v92)) : _g4_s34,
    _g4_s36 = (284u + sizeof(_g4_t_v93)) > _g4_s35 ? (284u + sizeof(_g4_t_v93)) : _g4_s35,
    _g4_s37 = (300u + sizeof(_g4_t_v94)) > _g4_s36 ? (300u + sizeof(_g4_t_v94)) : _g4_s36,
    _g4_s38 = (316u + sizeof(_g4_t_v95)) > _g4_s37 ? (316u + sizeof(_g4_t_v95)) : _g4_s37,
    _g4_s39 = (332u + sizeof(_g4_t_v96)) > _g4_s38 ? (332u + sizeof(_g4_t_v96)) : _g4_s38,
    _g4_s40 = (348u + sizeof(_g4_t_v97)) > _g4_s39 ? (348u + sizeof(_g4_t_v97)) : _g4_s39,
    _g4_s41 = (364u + sizeof(_g4_t_v98)) > _g4_s40 ? (364u + sizeof(_g4_t_v98)) : _g4_s40,
    _g4_s42 = (380u + sizeof(_g4_t_v99)) > _g4_s41 ? (380u + sizeof(_g4_t_v99)) : _g4_s41,
    _g4_s43 = (396u + sizeof(_g4_t_v100)) > _g4_s42 ? (396u + sizeof(_g4_t_v100)) : _g4_s42
  };
  alignas(16) uint8_t _g4_sf[_g4_s43];
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 0u);
  _g4_t_s1a &s1a = *reinterpret_cast<_g4_t_s1a *>(_g4_sf + 0u);
  _g4_t_s1b &s1b = *reinterpret_cast<_g4_t_s1b *>(_g4_sf + 0u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 40u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 44u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 48u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 60u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 64u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 68u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 72u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 76u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 80u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 84u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 88u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 92u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 96u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 100u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 104u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 108u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 112u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 116u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 120u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 124u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 128u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 132u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 136u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 140u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 156u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 172u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 188u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 204u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 220u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 236u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 252u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 268u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 284u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 300u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 316u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 332u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 348u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 364u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 380u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 396u);

  CredentialDetails = -21;
  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
    return CredentialDetails;
  Instance = gaia::Gaia::GetInstance();
  LOWORD(CredentialDetails) = -19;
  if ( !gaia::Gaia::IsLoggedIn(Instance, a2) )
    return CredentialDetails;
  if ( a7 == 0 )
  {
    v78 = nullptr;
    v79 = nullptr;
    v80 = 0;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v66), (char *)&unk_1B15112, (int)(uintptr_t)(&v65));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v67), (char *)&unk_1B15112, (int)(uintptr_t)(&v65) + 1);
    v11 = (gaia::Gaia::Self *)gaia::Gaia::GetInstance();
    CredentialDetails = gaia::Gaia::GetCredentialDetails(v11, a2, 0, (gaia::Gaia::Self *)&v66);
    if ( CredentialDetails != 0
      || (v23 = (gaia::Gaia::Self *)gaia::Gaia::GetInstance(),
          (CredentialDetails = gaia::Gaia::GetCredentialDetails(v23, a2, 1, (gaia::Gaia::Self *)&v67)) != 0) )
    {
LABEL_5:
      v12 = (void *)(v67 - 12);
      if ( (uint32_t *)(v67 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v67 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v12);
      }
      v13 = (void *)(v66 - 12);
      if ( (uint32_t *)(v66 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v66 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v13);
      }
      v14 = v79;
      v15 = v78;
      if ( v79 != v78 )
      {
        do
        {
          s1 = v15;
          v15 = (gaia::BaseJSONServiceResponse::Self *)((char *)v15 + 20);
          gaia::BaseJSONServiceResponse::Destroy(s1);
        }
        while ( v14 != v15 );
        v15 = v78;
      }
      if ( v15 != nullptr )
        opDelete(v15);
      return CredentialDetails;
    }
    gaia::Gaia_Janus::GetCredentialListForAccount(a1, a2, (const void **)&v66, &v67, (int)(uintptr_t)(&v78), 0, 0, 0);
    v81 = nullptr;
    v82 = nullptr;
    v83 = 0;
    CredentialListForAccount = gaia::Gaia_Janus::GetCredentialListForAccount(a1, a3, a4, a5, (int)(uintptr_t)(&v81), 0, 0, 0);
    Json::Value::Construct((int)(uintptr_t)(v88), nullptr);
    Json::Value::Construct((int)(uintptr_t)(v89), nullptr);
    if ( -858993459 * ((v79 - v78) >> 2) != 0 )
    {
      JSONMessage = (Json::Value::Self *)gaia::BaseJSONServiceResponse::GetJSONMessage(v78);
      if ( Json::Value::type(JSONMessage) == 7 )
      {
        v29 = (Json::Value::Self *)gaia::BaseJSONServiceResponse::GetJSONMessage(v78);
        if ( Json::Value::isMember(v29, "credentials") )
        {
          v30 = (Json::Value::Self *)gaia::BaseJSONServiceResponse::GetJSONMessage(v78);
          v31 = (Json::Value::Self *)Json::Value::opIndex(v30, "credentials");
          if ( Json::Value::type(v31) == 6 )
          {
            Json::Value::Construct((int)(uintptr_t)(v90), nullptr);
            v32 = (Json::Value::Self *)gaia::BaseJSONServiceResponse::GetJSONMessage(v78);
            Json::Value::get((Json::Value::Self *)v91, v32, (const Json::Value::Self *)"credentials", (Json::Value::Self *)v90);
            Json::Value::opAssign((Json::Value::Self *)v88, (const Json::Value::Self *)v91);
            Json::Value::Destroy((Json::Value::Self *)v91);
            Json::Value::Destroy((Json::Value::Self *)v90);
            if ( -858993459 * ((v82 - v81) >> 2) == 0 )
            {
              CredentialDetails = -234;
              goto LABEL_17;
            }
            v33 = (Json::Value::Self *)gaia::BaseJSONServiceResponse::GetJSONMessage(v81);
            if ( Json::Value::type(v33) == 7 )
            {
              v34 = (Json::Value::Self *)gaia::BaseJSONServiceResponse::GetJSONMessage(v81);
              if ( Json::Value::isMember(v34, "credentials") )
              {
                v35 = (Json::Value::Self *)gaia::BaseJSONServiceResponse::GetJSONMessage(v81);
                v36 = (Json::Value::Self *)Json::Value::opIndex(v35, "credentials");
                if ( Json::Value::type(v36) == 6 )
                {
                  Json::Value::Construct((int)(uintptr_t)(v92), nullptr);
                  v37 = (Json::Value::Self *)gaia::BaseJSONServiceResponse::GetJSONMessage(v81);
                  Json::Value::get((Json::Value::Self *)v93, v37, (const Json::Value::Self *)"credentials", (Json::Value::Self *)v92);
                  Json::Value::opAssign((Json::Value::Self *)v89, (const Json::Value::Self *)v93);
                  Json::Value::Destroy((Json::Value::Self *)v93);
                  Json::Value::Destroy((Json::Value::Self *)v92);
                  v63 = 0;
                  v64 = CredentialListForAccount;
                  while ( v63 < Json::Value::size((Json::Value::Self *)v88) )
                  {
                    for ( i = 0; i < Json::Value::size((Json::Value::Self *)v89); ++i )
                    {
                      v68 = &dword_213B814;
                      s2 = &dword_213B814;
                      v39 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v88, v63);
                      if ( Json::Value::type(v39) == 4 )
                      {
                        v52 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v88, v63));
                        Json::Value::asString((Json::Value::Self *)v71, v52);
                        v53 = g4_std_compat::string_find(v71, ":", 0, 1);
                        v54 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v88, v63));
                        Json::Value::asString((Json::Value::Self *)v70, v54);
                        sub_193A6F0(v72, v70, 0, v53);
                        g4_std::string::assign_str(&v68, v72);
                        g4_std::string::Destroy(v72);
                        g4_std::string::Destroy(v70);
                        g4_std::string::Destroy(v71);
                      }
                      v40 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v89, i);
                      if ( Json::Value::type(v40) == 4 )
                      {
                        v55 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v89, i));
                        Json::Value::asString((Json::Value::Self *)v74, v55);
                        v56 = g4_std_compat::string_find(v74, ":", 0, 1);
                        v57 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v89, i));
                        Json::Value::asString((Json::Value::Self *)v73, v57);
                        sub_193A6F0(v75, v73, 0, v56);
                        g4_std::string::assign_str(&s2, v75);
                        g4_std::string::Destroy(v75);
                        g4_std::string::Destroy(v73);
                        g4_std::string::Destroy(v74);
                      }
                      v41 = *((Json::Value::Self **)v68 - 3);
                      n = *((uint32_t *)s2 - 3);
                      v62 = (Json::Value::Self *)n;
                      if ( n > (unsigned int)(uintptr_t)(v41) )
                        n = *((uint32_t *)v68 - 3);
                      if ( memcmp(v68, s2, n) == 0 && v41 == v62 )
                      {
                        Json::Value::Construct((int)(uintptr_t)(v94), nullptr);
                        Json::Value::Construct((int)(uintptr_t)(v95), (char *)&loc_6 + 1);
                        v43 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v94, (char **)&v68);
                        Json::Value::opAssign(v43, (const Json::Value::Self *)v95);
                        Json::Value::Destroy((Json::Value::Self *)v95);
                        v44 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v88, v63));
                        Json::Value::asString((Json::Value::Self *)&v76, v44);
                        Json::Value::Construct((int)(uintptr_t)(v96), &v76);
                        v45 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v94, (char **)&v68);
                        v46 = (Json::Value::Self *)Json::Value::opIndex(v45, "1");
                        Json::Value::opAssign(v46, (const Json::Value::Self *)v96);
                        Json::Value::Destroy((Json::Value::Self *)v96);
                        g4_std::string::Destroy(&v76);
                        v47 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v89, i));
                        Json::Value::asString((Json::Value::Self *)&v77, v47);
                        Json::Value::Construct((int)(uintptr_t)(v97), &v77);
                        v48 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v94, (char **)&v68);
                        v49 = (Json::Value::Self *)Json::Value::opIndex(v48, "2");
                        Json::Value::opAssign(v49, (const Json::Value::Self *)v97);
                        Json::Value::Destroy((Json::Value::Self *)v97);
                        g4_std::string::Destroy(&v77);
                        Json::Value::Construct((Json::Value::Self *)v98, (const Json::Value::Self *)v94);
                        gaia::BaseJSONServiceResponse::Construct((Json::Value::Self *)v99, (Json::Value::Self *)v98);
                        Json::Value::Destroy((Json::Value::Self *)v98);
                        v100 = 8;
                        v50 = *(uint32_t *)(a6 + 4);
                        if ( v50 == *(uint32_t *)(a6 + 8) )
                        {
                          g4_std::vector_gaia_BaseJSONServiceResp_48cd2f::M_insert_aux(
                            a6,
                            *(Json::Value::Self **)(a6 + 4),
                            (Json::Value::Self *)v99);
                        }
                        else
                        {
                          v51 = 0;
                          if ( v50 != 0 )
                          {
                            v61 = *(Json::Value::Self **)(a6 + 4);
                            Json::Value::Construct(v61, (const Json::Value::Self *)v99);
                            *((uint32_t *)v61 + 4) = v100;
                            v51 = *(uint32_t *)(a6 + 4);
                          }
                          *(uint32_t *)(a6 + 4) = v51 + 20;
                        }
                        gaia::BaseJSONServiceResponse::Destroy((gaia::BaseJSONServiceResponse::Self *)v99);
                        Json::Value::Destroy((Json::Value::Self *)v94);
                        v64 = -235;
                      }
                      g4_std::string::Destroy(&s2);
                      g4_std::string::Destroy(&v68);
                    }
                    ++v63;
                  }
                  CredentialDetails = v64;
                  goto LABEL_17;
                }
              }
            }
          }
        }
      }
      CredentialDetails = -233;
    }
    else
    {
      CredentialDetails = -234;
    }
LABEL_17:
    Json::Value::Destroy((Json::Value::Self *)v89);
    Json::Value::Destroy((Json::Value::Self *)v88);
    v25 = v81;
    if ( v82 != v81 )
    {
      v26 = CredentialDetails;
      v27 = v82;
      do
      {
        s1b = v25;
        v25 = (gaia::BaseJSONServiceResponse::Self *)((char *)v25 + 20);
        gaia::BaseJSONServiceResponse::Destroy(s1b);
      }
      while ( v27 != v25 );
      CredentialDetails = v26;
      v25 = v81;
    }
    if ( v25 != nullptr )
      opDelete(v25);
    goto LABEL_5;
  }
  v17 = (uint32_t *)opNew(0x44u);
  *v17 = a9;
  v17[1] = a8;
  v17[2] = 2506;
  Json::Value::Construct((int)(uintptr_t)(v17 + 3), nullptr);
  v17[7] = 0;
  v17[8] = 0;
  Json::Value::Construct((int)(uintptr_t)(v17 + 9), nullptr);
  v17[13] = 0;
  v17[14] = 0;
  v17[15] = 0;
  v17[16] = 0;
  Json::Value::Construct((Json::Value::Self *)v84, a2);
  v18 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v17 + 3), "accountType1");
  Json::Value::opAssign(v18, (const Json::Value::Self *)v84);
  Json::Value::Destroy((Json::Value::Self *)v84);
  Json::Value::Construct((Json::Value::Self *)v85, a3);
  v19 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v17 + 3), "accountType2");
  Json::Value::opAssign(v19, (const Json::Value::Self *)v85);
  Json::Value::Destroy((Json::Value::Self *)v85);
  Json::Value::Construct((int)(uintptr_t)(v86), a4);
  v20 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v17 + 3), "username2");
  Json::Value::opAssign(v20, (const Json::Value::Self *)v86);
  Json::Value::Destroy((Json::Value::Self *)v86);
  Json::Value::Construct((int)(uintptr_t)(v87), a5);
  v21 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v17 + 3), "password2");
  Json::Value::opAssign(v21, (const Json::Value::Self *)v87);
  Json::Value::Destroy((Json::Value::Self *)v87);
  v17[7] = a6;
  v22 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(s1a));
  return gaia::ThreadManager::pushTask(v22, v17);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::AuthorizeExclusive  (binary VA: 0x14973f0)
// Original: gaia::Gaia_Janus::AuthorizeExclusive
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::AuthorizeExclusive(gaia::Gaia_Janus::Self *a1, int a2, uint32_t *a3, int a4, char a5, int a6, int a7)
{
  int v7;
  char IsInitialized;
  int result;
  int Instance;
  uint32_t *v11;
  Json::Value::Self *v12;
  Json::Value::Self *v13;
  int v14;
  int v15;
  Json::Value::Self *v16;
  Json::Value::Self *v17;
  int v18;
  Json::Value::Self *v19;
  Json::Value::Self *v20;
  int v21;
  Json::Value::Self *v22;
  Json::Value::Self *v23;
  int v24;
  int v25;
  int v26;
  typedef gaia::ThreadManager::Self *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef Json::Value::Self *_g4_t_v29;
  typedef Json::Value::Self *_g4_t_v30;
  typedef Json::Value::Self *_g4_t_v31;
  typedef Json::Value::Self *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef Json::Value::Self *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38[2];
  typedef uint32_t *_g4_t_v39;
  typedef uint32_t _g4_t_v40[2];
  typedef uint32_t *_g4_t_v41;
  typedef uint32_t _g4_t_v42[2];
  typedef uint32_t *_g4_t_v43;
  typedef uint32_t *_g4_t_v44;
  typedef uint8_t _g4_t_v45[16];
  typedef uint8_t _g4_t_v46[16];
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef char _g4_t_v49[4];
  typedef char _g4_t_v50[4];
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef char _g4_t_v53[4];
  typedef char _g4_t_v54[4];
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef char _g4_t_v57[4];
  typedef uint8_t _g4_t_v58[32];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (0u + sizeof(_g4_t_v27)) > _g4_s0 ? (0u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (60u + sizeof(_g4_t_v28)) > _g4_s1 ? (60u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_v29)) > _g4_s2 ? (64u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v30)) > _g4_s3 ? (64u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v31)) > _g4_s4 ? (64u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v32)) > _g4_s5 ? (64u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v33)) > _g4_s6 ? (68u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v34)) > _g4_s7 ? (72u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v35)) > _g4_s8 ? (76u + sizeof(_g4_t_v35)) : _g4_s8,
    _g4_s10 = (82u + sizeof(_g4_t_v36)) > _g4_s9 ? (82u + sizeof(_g4_t_v36)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v37)) > _g4_s10 ? (84u + sizeof(_g4_t_v37)) : _g4_s10,
    _g4_s12 = (88u + sizeof(_g4_t_v38)) > _g4_s11 ? (88u + sizeof(_g4_t_v38)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v39)) > _g4_s12 ? (96u + sizeof(_g4_t_v39)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v40)) > _g4_s13 ? (100u + sizeof(_g4_t_v40)) : _g4_s13,
    _g4_s15 = (108u + sizeof(_g4_t_v41)) > _g4_s14 ? (108u + sizeof(_g4_t_v41)) : _g4_s14,
    _g4_s16 = (112u + sizeof(_g4_t_v42)) > _g4_s15 ? (112u + sizeof(_g4_t_v42)) : _g4_s15,
    _g4_s17 = (120u + sizeof(_g4_t_v43)) > _g4_s16 ? (120u + sizeof(_g4_t_v43)) : _g4_s16,
    _g4_s18 = (124u + sizeof(_g4_t_v44)) > _g4_s17 ? (124u + sizeof(_g4_t_v44)) : _g4_s17,
    _g4_s19 = (128u + sizeof(_g4_t_v45)) > _g4_s18 ? (128u + sizeof(_g4_t_v45)) : _g4_s18,
    _g4_s20 = (144u + sizeof(_g4_t_v46)) > _g4_s19 ? (144u + sizeof(_g4_t_v46)) : _g4_s19,
    _g4_s21 = (160u + sizeof(_g4_t_v47)) > _g4_s20 ? (160u + sizeof(_g4_t_v47)) : _g4_s20,
    _g4_s22 = (164u + sizeof(_g4_t_v48)) > _g4_s21 ? (164u + sizeof(_g4_t_v48)) : _g4_s21,
    _g4_s23 = (168u + sizeof(_g4_t_v49)) > _g4_s22 ? (168u + sizeof(_g4_t_v49)) : _g4_s22,
    _g4_s24 = (172u + sizeof(_g4_t_v50)) > _g4_s23 ? (172u + sizeof(_g4_t_v50)) : _g4_s23,
    _g4_s25 = (176u + sizeof(_g4_t_v51)) > _g4_s24 ? (176u + sizeof(_g4_t_v51)) : _g4_s24,
    _g4_s26 = (180u + sizeof(_g4_t_v52)) > _g4_s25 ? (180u + sizeof(_g4_t_v52)) : _g4_s25,
    _g4_s27 = (184u + sizeof(_g4_t_v53)) > _g4_s26 ? (184u + sizeof(_g4_t_v53)) : _g4_s26,
    _g4_s28 = (188u + sizeof(_g4_t_v54)) > _g4_s27 ? (188u + sizeof(_g4_t_v54)) : _g4_s27,
    _g4_s29 = (192u + sizeof(_g4_t_v55)) > _g4_s28 ? (192u + sizeof(_g4_t_v55)) : _g4_s28,
    _g4_s30 = (196u + sizeof(_g4_t_v56)) > _g4_s29 ? (196u + sizeof(_g4_t_v56)) : _g4_s29,
    _g4_s31 = (200u + sizeof(_g4_t_v57)) > _g4_s30 ? (200u + sizeof(_g4_t_v57)) : _g4_s30,
    _g4_s32 = (204u + sizeof(_g4_t_v58)) > _g4_s31 ? (204u + sizeof(_g4_t_v58)) : _g4_s31
  };
  alignas(16) uint8_t _g4_sf[_g4_s32];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 0u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 60u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 64u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 64u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 64u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 64u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 68u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 72u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 76u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 82u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 84u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 88u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 96u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 100u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 108u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 112u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 120u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 124u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 128u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 144u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 160u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 164u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 168u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 172u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 176u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 180u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 184u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 188u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 192u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 196u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 200u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 204u);

  LOBYTE(v7) = a4;
  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    result = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a4);
    if ( result == 0 )
    {
      if ( a5 != 0 )
      {
        v11 = (uint32_t *)opNew(0x44u);
        *v11 = a7;
        v11[1] = a6;
        v11[2] = 2503;
        Json::Value::Construct((int)(uintptr_t)(v11 + 3), nullptr);
        v11[7] = 0;
        v11[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v11 + 9), nullptr);
        v11[13] = 0;
        v11[14] = 0;
        v11[15] = 0;
        v11[16] = 0;
        Json::Value::Construct((int)(uintptr_t)(v45), a3);
        v12 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v11 + 3), "scope");
        Json::Value::opAssign(v12, (const Json::Value::Self *)v45);
        Json::Value::Destroy((Json::Value::Self *)v45);
        Json::Value::Construct((Json::Value::Self *)v46, a4);
        v13 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v11 + 3), "accountType");
        Json::Value::opAssign(v13, (const Json::Value::Self *)v46);
        Json::Value::Destroy((Json::Value::Self *)v46);
        v11[15] = a2;
        v14 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v27));
        return gaia::ThreadManager::pushTask(v14, v11);
      }
      else
      {
        g4_std_compat::string_assign(a2, &unk_1B15112, 0);
        result = gaia::Gaia_Janus::GetJanusStatus(a1);
        if ( result == 0 )
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), (char *)&unk_1B15112, (int)(uintptr_t)(&v36));
          g4_std::string::construct_from_cstr((int)(uintptr_t)(v38), (char *)&unk_1B15112, (int)(uintptr_t)(&v36) + 1);
          if ( a4 == 19 )
          {
            v25 = gaia::Gaia::GetInstance();
            g4_std::string::assign_str(&v37, v25 + 352);
            v26 = gaia::Gaia::GetInstance();
            g4_std::string::assign_str(v38, v26 + 356);
          }
          else
          {
            v15 = gaia::Gaia::GetInstance();
            v16 = *(Json::Value::Self **)(v15 + 368);
            v17 = (Json::Value::Self *)(v15 + 364);
            if ( v16 == nullptr )
              goto LABEL_36;
            do
            {
              if ( *((uint32_t *)v16 + 4) >= a4 )
              {
                v17 = v16;
                v16 = *((Json::Value::Self **)v16 + 2);
              }
              else
              {
                v16 = *((Json::Value::Self **)v16 + 3);
              }
            }
            while ( v16 != nullptr );
            if ( (Json::Value::Self *)(v15 + 364) == v17 || *((uint32_t *)v17 + 4) > a4 )
            {
LABEL_36:
              v39 = &dword_213B814;
              v40[0] = (uint32_t)(uintptr_t)(&dword_213B814);
              v38[1] = 0;
              v47 = a4;
              v48 = 0;
              g4_std::string::construct_copy(v49, &v39);
              g4_std::string::construct_copy(v50, v40);
              g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_insert_unique(&v35);
              v32 = v35;
              g4_std::string::Destroy(v50);
              g4_std::string::Destroy(v49);
              g4_std::string::Destroy(v40);
              g4_std::string::Destroy(&v39);
              v17 = v32;
            }
            g4_std::string::assign_str(&v37, (char *)v17 + 24);
            v18 = gaia::Gaia::GetInstance();
            v19 = *(Json::Value::Self **)(v18 + 368);
            v20 = (Json::Value::Self *)(v18 + 364);
            if ( v19 == nullptr )
              goto LABEL_35;
            do
            {
              if ( *((uint32_t *)v19 + 4) >= a4 )
              {
                v20 = v19;
                v19 = *((Json::Value::Self **)v19 + 2);
              }
              else
              {
                v19 = *((Json::Value::Self **)v19 + 3);
              }
            }
            while ( v19 != nullptr );
            if ( (Json::Value::Self *)(v18 + 364) == v20 || *((uint32_t *)v20 + 4) > a4 )
            {
LABEL_35:
              v41 = &dword_213B814;
              v42[0] = (uint32_t)(uintptr_t)(&dword_213B814);
              v40[1] = 0;
              v51 = a4;
              v52 = 0;
              g4_std::string::construct_copy(v53, &v41);
              g4_std::string::construct_copy(v54, v42);
              g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_insert_unique(&v35);
              v31 = v35;
              g4_std::string::Destroy(v54);
              g4_std::string::Destroy(v53);
              g4_std::string::Destroy(v42);
              g4_std::string::Destroy(&v41);
              v20 = v31;
            }
            g4_std::string::assign_str(v38, (char *)v20 + 28);
            v21 = gaia::Gaia::GetInstance();
            v22 = *(Json::Value::Self **)(v21 + 368);
            v23 = (Json::Value::Self *)(v21 + 364);
            if ( v22 == nullptr )
              goto LABEL_34;
            do
            {
              if ( *((uint32_t *)v22 + 4) >= a4 )
              {
                v23 = v22;
                v22 = *((Json::Value::Self **)v22 + 2);
              }
              else
              {
                v22 = *((Json::Value::Self **)v22 + 3);
              }
            }
            while ( v22 != nullptr );
            if ( v23 == (Json::Value::Self *)(v21 + 364) || a4 < *((uint32_t *)v23 + 4) )
            {
LABEL_34:
              v43 = &dword_213B814;
              v44 = &dword_213B814;
              v55 = a4;
              v42[1] = 0;
              v56 = 0;
              g4_std::string::construct_copy(v57, &v43);
              g4_std::string::construct_copy(v58, &v44);
              g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_insert_unique(&v35);
              v30 = v35;
              g4_std::string::Destroy(v58);
              g4_std::string::Destroy(v57);
              g4_std::string::Destroy(&v44);
              g4_std::string::Destroy(&v43);
              v23 = v30;
            }
            v7 = *((uint32_t *)v23 + 5);
          }
          v29 = *(Json::Value::Self **)(gaia::Gaia::GetInstance() + 388);
          v33 = gaia::Gaia::GetInstance();
          v34 = gaia::Gaia::GetInstance();
          v24 = gaia::Gaia::GetInstance();
          v28 = gaia::Janus::AuthorizeExclusive(
                  *(uint32_t *)(v24 + 44),
                  a2,
                  &v37,
                  v38,
                  v7,
                  a3,
                  v34 + 340,
                  1,
                  v33 + 384,
                  (char)(uintptr_t)(v29),
                  nullptr);
          g4_std::string::Destroy(v38);
          g4_std::string::Destroy(&v37);
          return v28;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::AuthorizeExclusive  (binary VA: 0x1497a80)
// Original: gaia::Gaia_Janus::AuthorizeExclusive
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::AuthorizeExclusive(gaia::Gaia_Janus::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  int JanusStatus;
  Json::Value::Self *v7;
  int v8;
  void *v9;
  int Instance;
  Json::Value::Self *v11;
  Json::Value::Self *v12;
  int v13;
  Json::Value::Self *v14;
  Json::Value::Self *v15;
  int v17;
  Json::Value::Self *v18;
  Json::Value::Self *v19;
  int v20;
  Json::Value::Self *v21;
  Json::Value::Self *v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  typedef bool _g4_t_isNull;
  typedef bool _g4_t_v29;
  typedef int _g4_t_started;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef Json::Value::Self *_g4_t_v33;
  typedef Json::Value::Self *_g4_t_v34;
  typedef Json::Value::Self *_g4_t_v35;
  typedef char _g4_t_v36;
  typedef uint32_t _g4_t_v37[4];
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef char _g4_t_v50[4];
  typedef int _g4_t_v51;
  typedef char _g4_t_v52[4];
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55[2];
  typedef uint32_t *_g4_t_v56;
  typedef uint32_t _g4_t_v57[2];
  typedef uint32_t *_g4_t_v58;
  typedef uint32_t _g4_t_v59[2];
  typedef uint32_t *_g4_t_v60;
  typedef uint32_t *_g4_t_v61;
  typedef uint8_t _g4_t_v62[16];
  typedef uint8_t _g4_t_v63[16];
  typedef uint8_t _g4_t_v64[16];
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef char _g4_t_v67[4];
  typedef char _g4_t_v68[4];
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef char _g4_t_v71[4];
  typedef char _g4_t_v72[4];
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef char _g4_t_v75[4];
  typedef char _g4_t_v76[4];
  typedef uint8_t _g4_t_v77[96];
  enum : size_t {
    _g4_s0 = 416u,
    _g4_s1 = (0u + sizeof(_g4_t_isNull)) > _g4_s0 ? (0u + sizeof(_g4_t_isNull)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v29)) > _g4_s1 ? (0u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_started)) > _g4_s2 ? (0u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v31)) > _g4_s3 ? (0u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v32)) > _g4_s4 ? (0u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v33)) > _g4_s5 ? (8u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v34)) > _g4_s6 ? (8u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v35)) > _g4_s7 ? (8u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v36)) > _g4_s8 ? (16u + sizeof(_g4_t_v36)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v37)) > _g4_s9 ? (28u + sizeof(_g4_t_v37)) : _g4_s9,
    _g4_s11 = (47u + sizeof(_g4_t_v38)) > _g4_s10 ? (47u + sizeof(_g4_t_v38)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v39)) > _g4_s11 ? (48u + sizeof(_g4_t_v39)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v40)) > _g4_s12 ? (52u + sizeof(_g4_t_v40)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v41)) > _g4_s13 ? (56u + sizeof(_g4_t_v41)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v42)) > _g4_s14 ? (64u + sizeof(_g4_t_v42)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v43)) > _g4_s15 ? (68u + sizeof(_g4_t_v43)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v44)) > _g4_s16 ? (72u + sizeof(_g4_t_v44)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v45)) > _g4_s17 ? (76u + sizeof(_g4_t_v45)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v46)) > _g4_s18 ? (80u + sizeof(_g4_t_v46)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v47)) > _g4_s19 ? (84u + sizeof(_g4_t_v47)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v48)) > _g4_s20 ? (88u + sizeof(_g4_t_v48)) : _g4_s20,
    _g4_s22 = (92u + sizeof(_g4_t_v49)) > _g4_s21 ? (92u + sizeof(_g4_t_v49)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v50)) > _g4_s22 ? (96u + sizeof(_g4_t_v50)) : _g4_s22,
    _g4_s24 = (100u + sizeof(_g4_t_v51)) > _g4_s23 ? (100u + sizeof(_g4_t_v51)) : _g4_s23,
    _g4_s25 = (104u + sizeof(_g4_t_v52)) > _g4_s24 ? (104u + sizeof(_g4_t_v52)) : _g4_s24,
    _g4_s26 = (108u + sizeof(_g4_t_v53)) > _g4_s25 ? (108u + sizeof(_g4_t_v53)) : _g4_s25,
    _g4_s27 = (112u + sizeof(_g4_t_v54)) > _g4_s26 ? (112u + sizeof(_g4_t_v54)) : _g4_s26,
    _g4_s28 = (116u + sizeof(_g4_t_v55)) > _g4_s27 ? (116u + sizeof(_g4_t_v55)) : _g4_s27,
    _g4_s29 = (124u + sizeof(_g4_t_v56)) > _g4_s28 ? (124u + sizeof(_g4_t_v56)) : _g4_s28,
    _g4_s30 = (128u + sizeof(_g4_t_v57)) > _g4_s29 ? (128u + sizeof(_g4_t_v57)) : _g4_s29,
    _g4_s31 = (136u + sizeof(_g4_t_v58)) > _g4_s30 ? (136u + sizeof(_g4_t_v58)) : _g4_s30,
    _g4_s32 = (140u + sizeof(_g4_t_v59)) > _g4_s31 ? (140u + sizeof(_g4_t_v59)) : _g4_s31,
    _g4_s33 = (148u + sizeof(_g4_t_v60)) > _g4_s32 ? (148u + sizeof(_g4_t_v60)) : _g4_s32,
    _g4_s34 = (152u + sizeof(_g4_t_v61)) > _g4_s33 ? (152u + sizeof(_g4_t_v61)) : _g4_s33,
    _g4_s35 = (156u + sizeof(_g4_t_v62)) > _g4_s34 ? (156u + sizeof(_g4_t_v62)) : _g4_s34,
    _g4_s36 = (172u + sizeof(_g4_t_v63)) > _g4_s35 ? (172u + sizeof(_g4_t_v63)) : _g4_s35,
    _g4_s37 = (188u + sizeof(_g4_t_v64)) > _g4_s36 ? (188u + sizeof(_g4_t_v64)) : _g4_s36,
    _g4_s38 = (204u + sizeof(_g4_t_v65)) > _g4_s37 ? (204u + sizeof(_g4_t_v65)) : _g4_s37,
    _g4_s39 = (208u + sizeof(_g4_t_v66)) > _g4_s38 ? (208u + sizeof(_g4_t_v66)) : _g4_s38,
    _g4_s40 = (212u + sizeof(_g4_t_v67)) > _g4_s39 ? (212u + sizeof(_g4_t_v67)) : _g4_s39,
    _g4_s41 = (216u + sizeof(_g4_t_v68)) > _g4_s40 ? (216u + sizeof(_g4_t_v68)) : _g4_s40,
    _g4_s42 = (220u + sizeof(_g4_t_v69)) > _g4_s41 ? (220u + sizeof(_g4_t_v69)) : _g4_s41,
    _g4_s43 = (224u + sizeof(_g4_t_v70)) > _g4_s42 ? (224u + sizeof(_g4_t_v70)) : _g4_s42,
    _g4_s44 = (228u + sizeof(_g4_t_v71)) > _g4_s43 ? (228u + sizeof(_g4_t_v71)) : _g4_s43,
    _g4_s45 = (232u + sizeof(_g4_t_v72)) > _g4_s44 ? (232u + sizeof(_g4_t_v72)) : _g4_s44,
    _g4_s46 = (236u + sizeof(_g4_t_v73)) > _g4_s45 ? (236u + sizeof(_g4_t_v73)) : _g4_s45,
    _g4_s47 = (240u + sizeof(_g4_t_v74)) > _g4_s46 ? (240u + sizeof(_g4_t_v74)) : _g4_s46,
    _g4_s48 = (244u + sizeof(_g4_t_v75)) > _g4_s47 ? (244u + sizeof(_g4_t_v75)) : _g4_s47,
    _g4_s49 = (248u + sizeof(_g4_t_v76)) > _g4_s48 ? (248u + sizeof(_g4_t_v76)) : _g4_s48,
    _g4_s50 = (252u + sizeof(_g4_t_v77)) > _g4_s49 ? (252u + sizeof(_g4_t_v77)) : _g4_s49
  };
  alignas(16) uint8_t _g4_sf[_g4_s50];
  _g4_t_isNull &isNull = *reinterpret_cast<_g4_t_isNull *>(_g4_sf + 0u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 0u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 0u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 0u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 0u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 8u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 8u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 8u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 16u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 28u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 47u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 48u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 52u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 56u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 64u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 68u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 72u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 76u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 80u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 84u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 88u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 92u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 96u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 100u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 104u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 108u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 112u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 116u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 124u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 128u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 136u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 140u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 148u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 152u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 156u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 172u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 188u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 204u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 208u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 212u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 216u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 220u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 224u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 228u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 232u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 236u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 240u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 244u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 248u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 252u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), "accountType", (int)(uintptr_t)(&v38));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v42), 1);
    v2 = (void *)(v42 - 12);
    if ( (uint32_t *)(v42 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v42 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), "scope", (int)(uintptr_t)(&v39));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v43), 4);
    v3 = (void *)(v43 - 12);
    if ( (uint32_t *)(v43 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v43 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), "for_username", (int)(uintptr_t)(&v39) + 1);
    gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v44), 4);
    v4 = (void *)(v44 - 12);
    if ( (uint32_t *)(v44 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v44 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "for_credential_type", (int)(uintptr_t)(&v39) + 2);
    gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v45), 1);
    v5 = (void *)(v45 - 12);
    if ( (uint32_t *)(v45 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 2503);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v77, a2);
        started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v77);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v77);
        return started;
      }
      else
      {
        JanusStatus = gaia::Gaia_Janus::GetJanusStatus(self);
        if ( JanusStatus != 0 )
          goto LABEL_23;
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), "accountType", (int)(uintptr_t)(&v39) + 3);
        v7 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v46);
        v8 = Json::Value::asInt(v7);
        v9 = (void *)(v46 - 12);
        if ( (uint32_t *)(v46 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v46 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v9);
        }
        Instance = gaia::Gaia::GetInstance();
        JanusStatus = gaia::Gaia::GetInitializationAndLoginStatus(Instance, v8);
        if ( JanusStatus != 0 )
        {
LABEL_23:
          v31 = JanusStatus;
          gaia::GaiaRequest::SetResponseCode(a2, JanusStatus);
          return v31;
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), (char *)&unk_1B15112, (int)(uintptr_t)(&v40));
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v48), (char *)&unk_1B15112, (int)(uintptr_t)(&v40) + 1);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v49), (char *)&unk_1B15112, (int)(uintptr_t)(&v40) + 2);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v62, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)v50, (int)(uintptr_t)(v62));
          g4_std::string::assign_str(&v47, v50);
          g4_std::string::Destroy(v50);
          Json::Value::Destroy((Json::Value::Self *)v62);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v51), "for_username", (int)(uintptr_t)(&v40) + 3);
          v11 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v51);
          isNull = Json::Value::isNull(v11);
          g4_std::string::Destroy(&v51);
          if ( !isNull )
          {
            gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v63, (const char *)a2);
            Json::Value::asString((Json::Value::Self *)v52, (int)(uintptr_t)(v63));
            g4_std::string::assign_str(&v48, v52);
            g4_std::string::Destroy(v52);
            Json::Value::Destroy((Json::Value::Self *)v63);
          }
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v53), "for_credential_type", (int)(uintptr_t)(&v41));
          v12 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v53);
          v29 = Json::Value::isNull(v12);
          g4_std::string::Destroy(&v53);
          v36 = 19;
          if ( !v29 )
          {
            gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v64, (const char *)a2);
            v36 = Json::Value::asInt((Json::Value::Self *)v64);
            Json::Value::Destroy((Json::Value::Self *)v64);
          }
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v54), (char *)&unk_1B15112, (int)(uintptr_t)(&v41) + 1);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(v55), (char *)&unk_1B15112, (int)(uintptr_t)(&v41) + 2);
          if ( v8 == 19 )
          {
            v26 = gaia::Gaia::GetInstance();
            g4_std::string::assign_str(&v54, v26 + 352);
            v27 = gaia::Gaia::GetInstance();
            LOBYTE(v23) = 19;
            g4_std::string::assign_str(v55, v27 + 356);
          }
          else
          {
            v13 = gaia::Gaia::GetInstance();
            v14 = *(Json::Value::Self **)(v13 + 368);
            v15 = (Json::Value::Self *)(v13 + 364);
            if ( v14 == nullptr )
              goto LABEL_47;
            do
            {
              if ( v8 <= *((uint32_t *)v14 + 4) )
              {
                v15 = v14;
                v14 = *((Json::Value::Self **)v14 + 2);
              }
              else
              {
                v14 = *((Json::Value::Self **)v14 + 3);
              }
            }
            while ( v14 != nullptr );
            if ( (Json::Value::Self *)(v13 + 364) == v15 || v8 < *((uint32_t *)v15 + 4) )
            {
LABEL_47:
              v55[1] = 0;
              v56 = &dword_213B814;
              v57[0] = (uint32_t)(uintptr_t)(&dword_213B814);
              v65 = v8;
              v66 = 0;
              g4_std::string::construct_copy(v67, &v56);
              g4_std::string::construct_copy(v68, v57);
              g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_insert_unique(v37);
              v35 = (Json::Value::Self *)v37[0];
              g4_std::string::Destroy(v68);
              g4_std::string::Destroy(v67);
              g4_std::string::Destroy(v57);
              g4_std::string::Destroy(&v56);
              v15 = v35;
            }
            g4_std::string::assign_str(&v54, (char *)v15 + 24);
            v17 = gaia::Gaia::GetInstance();
            v18 = *(Json::Value::Self **)(v17 + 368);
            v19 = (Json::Value::Self *)(v17 + 364);
            if ( v18 == nullptr )
              goto LABEL_46;
            do
            {
              if ( v8 <= *((uint32_t *)v18 + 4) )
              {
                v19 = v18;
                v18 = *((Json::Value::Self **)v18 + 2);
              }
              else
              {
                v18 = *((Json::Value::Self **)v18 + 3);
              }
            }
            while ( v18 != nullptr );
            if ( (Json::Value::Self *)(v17 + 364) == v19 || v8 < *((uint32_t *)v19 + 4) )
            {
LABEL_46:
              v57[1] = 0;
              v58 = &dword_213B814;
              v59[0] = (uint32_t)(uintptr_t)(&dword_213B814);
              v69 = v8;
              v70 = 0;
              g4_std::string::construct_copy(v71, &v58);
              g4_std::string::construct_copy(v72, v59);
              g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_insert_unique(v37);
              v34 = (Json::Value::Self *)v37[0];
              g4_std::string::Destroy(v72);
              g4_std::string::Destroy(v71);
              g4_std::string::Destroy(v59);
              g4_std::string::Destroy(&v58);
              v19 = v34;
            }
            g4_std::string::assign_str(v55, (char *)v19 + 28);
            v20 = gaia::Gaia::GetInstance();
            v21 = *(Json::Value::Self **)(v20 + 368);
            v22 = (Json::Value::Self *)(v20 + 364);
            if ( v21 == nullptr )
              goto LABEL_45;
            do
            {
              if ( v8 <= *((uint32_t *)v21 + 4) )
              {
                v22 = v21;
                v21 = *((Json::Value::Self **)v21 + 2);
              }
              else
              {
                v21 = *((Json::Value::Self **)v21 + 3);
              }
            }
            while ( v21 != nullptr );
            if ( v22 == (Json::Value::Self *)(v20 + 364) || v8 < *((uint32_t *)v22 + 4) )
            {
LABEL_45:
              v60 = &dword_213B814;
              v61 = &dword_213B814;
              v73 = v8;
              v59[1] = 0;
              v74 = 0;
              g4_std::string::construct_copy(v75, &v60);
              g4_std::string::construct_copy(v76, &v61);
              g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_insert_unique(v37);
              v33 = (Json::Value::Self *)v37[0];
              g4_std::string::Destroy(v76);
              g4_std::string::Destroy(v75);
              g4_std::string::Destroy(&v61);
              g4_std::string::Destroy(&v60);
              v22 = v33;
            }
            v23 = *((uint32_t *)v22 + 5);
          }
          v24 = gaia::Gaia::GetInstance() + 340;
          v25 = gaia::Gaia::GetInstance();
          v32 = gaia::Janus::AuthorizeExclusive(
                  *(uint32_t *)(v25 + 44),
                  &v49,
                  &v54,
                  v55,
                  v23,
                  &v47,
                  v24,
                  1,
                  &v48,
                  v36,
                  a2);
          gaia::GaiaRequest::SetResponse(a2, &v49);
          gaia::GaiaRequest::SetResponseCode(a2, v32);
          g4_std::string::Destroy(v55);
          g4_std::string::Destroy(&v54);
          g4_std::string::Destroy(&v49);
          g4_std::string::Destroy(&v48);
          g4_std::string::Destroy(&v47);
          return v32;
        }
      }
    }
    else
    {
      return gaia::GaiaRequest::GetResponseCode(a2);
    }
  }
  else
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::Login  (binary VA: 0x1498580)
// Original: gaia::Gaia_Janus::Login
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::Login(gaia::Gaia_Janus::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  int JanusStatus;
  int v6;
  void *v7;
  void *v8;
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  Json::Value::Self *v12;
  int v14;
  void *v15;
  void *v16;
  void *v17;
  int v18;
  uint32_t *v19;
  uint32_t *v20;
  int v21;
  uint32_t *v22;
  uint32_t *v23;
  int v24;
  uint32_t *v25;
  uint32_t *v26;
  uint32_t *v27;
  uint32_t *v28;
  uint32_t *v29;
  uint32_t *v30;
  typedef Json::Value::Self *_g4_t_started;
  typedef Json::Value::Self *_g4_t_v32;
  typedef Json::Value::Self *_g4_t_v33;
  typedef Json::Value::Self *_g4_t_v34;
  typedef Json::Value::Self *_g4_t_v35;
  typedef Json::Value::Self *_g4_t_v36;
  typedef uint32_t *_g4_t_v37;
  typedef uint32_t *_g4_t_v38;
  typedef uint32_t *_g4_t_v39;
  typedef uint32_t *_g4_t_v40;
  typedef uint32_t *_g4_t_v41;
  typedef uint32_t *_g4_t_v42;
  typedef bool _g4_t_isNull;
  typedef int _g4_t_Instance;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef uint32_t *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef char _g4_t_v58[4];
  typedef int _g4_t_v59;
  typedef uint32_t *_g4_t_v60;
  typedef uint32_t _g4_t_v61[2];
  typedef uint32_t *_g4_t_v62;
  typedef uint32_t _g4_t_v63[2];
  typedef uint32_t *_g4_t_v64;
  typedef uint32_t _g4_t_v65[2];
  typedef uint32_t *_g4_t_v66;
  typedef uint32_t _g4_t_v67[2];
  typedef uint32_t *_g4_t_v68;
  typedef uint32_t _g4_t_v69[2];
  typedef uint32_t *_g4_t_v70;
  typedef uint32_t *_g4_t_v71;
  typedef uint8_t _g4_t_v72[16];
  typedef uint8_t _g4_t_v73[16];
  typedef uint8_t _g4_t_v74[16];
  typedef uint8_t _g4_t_v75[16];
  typedef uint8_t _g4_t_v76[16];
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef char _g4_t_v79[4];
  typedef char _g4_t_v80[4];
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef char _g4_t_v83[4];
  typedef char _g4_t_v84[4];
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef char _g4_t_v87[4];
  typedef char _g4_t_v88[4];
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef char _g4_t_v91[4];
  typedef char _g4_t_v92[4];
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef char _g4_t_v95[4];
  typedef char _g4_t_v96[4];
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef char _g4_t_v99[4];
  typedef char _g4_t_v100[4];
  typedef uint8_t _g4_t_v101[96];
  enum : size_t {
    _g4_s0 = 496u,
    _g4_s1 = (8u + sizeof(_g4_t_started)) > _g4_s0 ? (8u + sizeof(_g4_t_started)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v32)) > _g4_s1 ? (8u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v33)) > _g4_s2 ? (8u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v34)) > _g4_s3 ? (8u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v35)) > _g4_s4 ? (8u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v36)) > _g4_s5 ? (8u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v37)) > _g4_s6 ? (12u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v38)) > _g4_s7 ? (12u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v39)) > _g4_s8 ? (12u + sizeof(_g4_t_v39)) : _g4_s8,
    _g4_s10 = (12u + sizeof(_g4_t_v40)) > _g4_s9 ? (12u + sizeof(_g4_t_v40)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v41)) > _g4_s10 ? (12u + sizeof(_g4_t_v41)) : _g4_s10,
    _g4_s12 = (12u + sizeof(_g4_t_v42)) > _g4_s11 ? (12u + sizeof(_g4_t_v42)) : _g4_s11,
    _g4_s13 = (16u + sizeof(_g4_t_isNull)) > _g4_s12 ? (16u + sizeof(_g4_t_isNull)) : _g4_s12,
    _g4_s14 = (16u + sizeof(_g4_t_Instance)) > _g4_s13 ? (16u + sizeof(_g4_t_Instance)) : _g4_s13,
    _g4_s15 = (16u + sizeof(_g4_t_v45)) > _g4_s14 ? (16u + sizeof(_g4_t_v45)) : _g4_s14,
    _g4_s16 = (16u + sizeof(_g4_t_v46)) > _g4_s15 ? (16u + sizeof(_g4_t_v46)) : _g4_s15,
    _g4_s17 = (28u + sizeof(_g4_t_v47)) > _g4_s16 ? (28u + sizeof(_g4_t_v47)) : _g4_s16,
    _g4_s18 = (34u + sizeof(_g4_t_v48)) > _g4_s17 ? (34u + sizeof(_g4_t_v48)) : _g4_s17,
    _g4_s19 = (36u + sizeof(_g4_t_v49)) > _g4_s18 ? (36u + sizeof(_g4_t_v49)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_v50)) > _g4_s19 ? (48u + sizeof(_g4_t_v50)) : _g4_s19,
    _g4_s21 = (52u + sizeof(_g4_t_v51)) > _g4_s20 ? (52u + sizeof(_g4_t_v51)) : _g4_s20,
    _g4_s22 = (56u + sizeof(_g4_t_v52)) > _g4_s21 ? (56u + sizeof(_g4_t_v52)) : _g4_s21,
    _g4_s23 = (60u + sizeof(_g4_t_v53)) > _g4_s22 ? (60u + sizeof(_g4_t_v53)) : _g4_s22,
    _g4_s24 = (64u + sizeof(_g4_t_v54)) > _g4_s23 ? (64u + sizeof(_g4_t_v54)) : _g4_s23,
    _g4_s25 = (68u + sizeof(_g4_t_v55)) > _g4_s24 ? (68u + sizeof(_g4_t_v55)) : _g4_s24,
    _g4_s26 = (72u + sizeof(_g4_t_v56)) > _g4_s25 ? (72u + sizeof(_g4_t_v56)) : _g4_s25,
    _g4_s27 = (76u + sizeof(_g4_t_v57)) > _g4_s26 ? (76u + sizeof(_g4_t_v57)) : _g4_s26,
    _g4_s28 = (80u + sizeof(_g4_t_v58)) > _g4_s27 ? (80u + sizeof(_g4_t_v58)) : _g4_s27,
    _g4_s29 = (84u + sizeof(_g4_t_v59)) > _g4_s28 ? (84u + sizeof(_g4_t_v59)) : _g4_s28,
    _g4_s30 = (88u + sizeof(_g4_t_v60)) > _g4_s29 ? (88u + sizeof(_g4_t_v60)) : _g4_s29,
    _g4_s31 = (92u + sizeof(_g4_t_v61)) > _g4_s30 ? (92u + sizeof(_g4_t_v61)) : _g4_s30,
    _g4_s32 = (100u + sizeof(_g4_t_v62)) > _g4_s31 ? (100u + sizeof(_g4_t_v62)) : _g4_s31,
    _g4_s33 = (104u + sizeof(_g4_t_v63)) > _g4_s32 ? (104u + sizeof(_g4_t_v63)) : _g4_s32,
    _g4_s34 = (112u + sizeof(_g4_t_v64)) > _g4_s33 ? (112u + sizeof(_g4_t_v64)) : _g4_s33,
    _g4_s35 = (116u + sizeof(_g4_t_v65)) > _g4_s34 ? (116u + sizeof(_g4_t_v65)) : _g4_s34,
    _g4_s36 = (124u + sizeof(_g4_t_v66)) > _g4_s35 ? (124u + sizeof(_g4_t_v66)) : _g4_s35,
    _g4_s37 = (128u + sizeof(_g4_t_v67)) > _g4_s36 ? (128u + sizeof(_g4_t_v67)) : _g4_s36,
    _g4_s38 = (136u + sizeof(_g4_t_v68)) > _g4_s37 ? (136u + sizeof(_g4_t_v68)) : _g4_s37,
    _g4_s39 = (140u + sizeof(_g4_t_v69)) > _g4_s38 ? (140u + sizeof(_g4_t_v69)) : _g4_s38,
    _g4_s40 = (148u + sizeof(_g4_t_v70)) > _g4_s39 ? (148u + sizeof(_g4_t_v70)) : _g4_s39,
    _g4_s41 = (152u + sizeof(_g4_t_v71)) > _g4_s40 ? (152u + sizeof(_g4_t_v71)) : _g4_s40,
    _g4_s42 = (156u + sizeof(_g4_t_v72)) > _g4_s41 ? (156u + sizeof(_g4_t_v72)) : _g4_s41,
    _g4_s43 = (172u + sizeof(_g4_t_v73)) > _g4_s42 ? (172u + sizeof(_g4_t_v73)) : _g4_s42,
    _g4_s44 = (188u + sizeof(_g4_t_v74)) > _g4_s43 ? (188u + sizeof(_g4_t_v74)) : _g4_s43,
    _g4_s45 = (204u + sizeof(_g4_t_v75)) > _g4_s44 ? (204u + sizeof(_g4_t_v75)) : _g4_s44,
    _g4_s46 = (220u + sizeof(_g4_t_v76)) > _g4_s45 ? (220u + sizeof(_g4_t_v76)) : _g4_s45,
    _g4_s47 = (236u + sizeof(_g4_t_v77)) > _g4_s46 ? (236u + sizeof(_g4_t_v77)) : _g4_s46,
    _g4_s48 = (240u + sizeof(_g4_t_v78)) > _g4_s47 ? (240u + sizeof(_g4_t_v78)) : _g4_s47,
    _g4_s49 = (244u + sizeof(_g4_t_v79)) > _g4_s48 ? (244u + sizeof(_g4_t_v79)) : _g4_s48,
    _g4_s50 = (248u + sizeof(_g4_t_v80)) > _g4_s49 ? (248u + sizeof(_g4_t_v80)) : _g4_s49,
    _g4_s51 = (252u + sizeof(_g4_t_v81)) > _g4_s50 ? (252u + sizeof(_g4_t_v81)) : _g4_s50,
    _g4_s52 = (256u + sizeof(_g4_t_v82)) > _g4_s51 ? (256u + sizeof(_g4_t_v82)) : _g4_s51,
    _g4_s53 = (260u + sizeof(_g4_t_v83)) > _g4_s52 ? (260u + sizeof(_g4_t_v83)) : _g4_s52,
    _g4_s54 = (264u + sizeof(_g4_t_v84)) > _g4_s53 ? (264u + sizeof(_g4_t_v84)) : _g4_s53,
    _g4_s55 = (268u + sizeof(_g4_t_v85)) > _g4_s54 ? (268u + sizeof(_g4_t_v85)) : _g4_s54,
    _g4_s56 = (272u + sizeof(_g4_t_v86)) > _g4_s55 ? (272u + sizeof(_g4_t_v86)) : _g4_s55,
    _g4_s57 = (276u + sizeof(_g4_t_v87)) > _g4_s56 ? (276u + sizeof(_g4_t_v87)) : _g4_s56,
    _g4_s58 = (280u + sizeof(_g4_t_v88)) > _g4_s57 ? (280u + sizeof(_g4_t_v88)) : _g4_s57,
    _g4_s59 = (284u + sizeof(_g4_t_v89)) > _g4_s58 ? (284u + sizeof(_g4_t_v89)) : _g4_s58,
    _g4_s60 = (288u + sizeof(_g4_t_v90)) > _g4_s59 ? (288u + sizeof(_g4_t_v90)) : _g4_s59,
    _g4_s61 = (292u + sizeof(_g4_t_v91)) > _g4_s60 ? (292u + sizeof(_g4_t_v91)) : _g4_s60,
    _g4_s62 = (296u + sizeof(_g4_t_v92)) > _g4_s61 ? (296u + sizeof(_g4_t_v92)) : _g4_s61,
    _g4_s63 = (300u + sizeof(_g4_t_v93)) > _g4_s62 ? (300u + sizeof(_g4_t_v93)) : _g4_s62,
    _g4_s64 = (304u + sizeof(_g4_t_v94)) > _g4_s63 ? (304u + sizeof(_g4_t_v94)) : _g4_s63,
    _g4_s65 = (308u + sizeof(_g4_t_v95)) > _g4_s64 ? (308u + sizeof(_g4_t_v95)) : _g4_s64,
    _g4_s66 = (312u + sizeof(_g4_t_v96)) > _g4_s65 ? (312u + sizeof(_g4_t_v96)) : _g4_s65,
    _g4_s67 = (316u + sizeof(_g4_t_v97)) > _g4_s66 ? (316u + sizeof(_g4_t_v97)) : _g4_s66,
    _g4_s68 = (320u + sizeof(_g4_t_v98)) > _g4_s67 ? (320u + sizeof(_g4_t_v98)) : _g4_s67,
    _g4_s69 = (324u + sizeof(_g4_t_v99)) > _g4_s68 ? (324u + sizeof(_g4_t_v99)) : _g4_s68,
    _g4_s70 = (328u + sizeof(_g4_t_v100)) > _g4_s69 ? (328u + sizeof(_g4_t_v100)) : _g4_s69,
    _g4_s71 = (332u + sizeof(_g4_t_v101)) > _g4_s70 ? (332u + sizeof(_g4_t_v101)) : _g4_s70
  };
  alignas(16) uint8_t _g4_sf[_g4_s71];
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 8u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 8u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 8u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 8u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 8u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 8u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 12u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 12u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 12u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 12u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 12u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 12u);
  _g4_t_isNull &isNull = *reinterpret_cast<_g4_t_isNull *>(_g4_sf + 16u);
  _g4_t_Instance &Instance = *reinterpret_cast<_g4_t_Instance *>(_g4_sf + 16u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 16u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 16u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 28u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 34u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 36u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 48u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 52u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 56u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 60u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 64u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 68u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 72u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 76u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 80u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 84u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 88u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 92u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 100u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 104u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 112u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 116u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 124u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 128u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 136u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 140u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 148u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 152u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 156u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 172u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 188u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 204u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 220u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 236u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 240u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 244u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 248u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 252u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 256u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 260u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 264u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 268u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 272u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 276u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 280u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 284u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 288u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 292u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 296u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 300u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 304u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 308u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 312u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 316u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 320u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 324u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 328u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 332u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v50), "accountType", (int)(uintptr_t)(&v48));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v50), 1);
  v2 = (void *)(v50 - 12);
  if ( (uint32_t *)(v50 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v50 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v51), "username", (int)(uintptr_t)(&v48) + 1);
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v51), 4);
  v3 = (void *)(v51 - 12);
  if ( (uint32_t *)(v51 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v51 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v52), "password", (int)(uintptr_t)(&v49));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v52), 4);
  v4 = (void *)(v52 - 12);
  if ( (uint32_t *)(v52 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v52 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) == 0 )
    return gaia::GaiaRequest::GetResponseCode(a2);
  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
  {
    gaia::GaiaRequest::SetOperationCode(a2, 2501);
    gaia::Gaia::GetInstance();
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v101, a2);
    started = (Json::Value::Self *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v101);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v101);
    return (int)(uintptr_t)(started);
  }
  JanusStatus = gaia::Gaia_Janus::GetJanusStatus(self);
  if ( JanusStatus == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v53), (char *)&unk_1B15112, (int)(uintptr_t)(&v49) + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v54), (char *)&unk_1B15112, (int)(uintptr_t)(&v49) + 2);
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v72, (const char *)a2);
    v6 = Json::Value::asInt((Json::Value::Self *)v72);
    Json::Value::Destroy((Json::Value::Self *)v72);
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v73, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v55, (int)(uintptr_t)(v73));
    g4_std::string::assign_str(&v53, &v55);
    v7 = (void *)(v55 - 12);
    if ( (uint32_t *)(v55 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v55 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    Json::Value::Destroy((Json::Value::Self *)v73);
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v74, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v56, (int)(uintptr_t)(v74));
    g4_std::string::assign_str(&v54, &v56);
    v8 = (void *)(v56 - 12);
    if ( (uint32_t *)(v56 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v56 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v8);
    }
    Json::Value::Destroy((Json::Value::Self *)v74);
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v75, (const char *)a2);
    isNull = Json::Value::isNull((Json::Value::Self *)v75);
    Json::Value::Destroy((Json::Value::Self *)v75);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v57), (char *)&unk_1B15112, (int)(uintptr_t)(&v49) + 3);
    if ( isNull )
    {
      v14 = gaia::Gaia_Janus::SendAuthentificate(self, &v53, &v54, v6, 0, 0, 0);
      if ( v14 == 0 )
      {
        Instance = gaia::Gaia::GetInstance();
        v25 = *(uint32_t **)(Instance + 368);
        v26 = (uint32_t *)(Instance + 364);
        if ( v25 == nullptr )
          goto LABEL_59;
        do
        {
          if ( v6 <= v25[4] )
          {
            v26 = v25;
            v25 = (uint32_t *)v25[2];
          }
          else
          {
            v25 = (uint32_t *)v25[3];
          }
        }
        while ( v25 != nullptr );
        if ( v26 == (uint32_t *)(Instance + 364) || v6 < v26[4] )
        {
LABEL_59:
          v65[1] = 0;
          v66 = &dword_213B814;
          v67[0] = (uint32_t)(uintptr_t)(&dword_213B814);
          v89 = v6;
          v90 = 0;
          g4_std::string::construct_copy(v91, &v66);
          g4_std::string::construct_copy(v92, v67);
          g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_insert_unique(&v47);
          v40 = v47;
          g4_std::string::Destroy(v92);
          g4_std::string::Destroy(v91);
          g4_std::string::Destroy(v67);
          g4_std::string::Destroy(&v66);
          v26 = v40;
        }
        v26[5] = v6;
        v45 = gaia::Gaia::GetInstance();
        v27 = *(uint32_t **)(v45 + 368);
        v28 = (uint32_t *)(v45 + 364);
        if ( v27 == nullptr )
          goto LABEL_68;
        do
        {
          if ( v6 <= v27[4] )
          {
            v28 = v27;
            v27 = (uint32_t *)v27[2];
          }
          else
          {
            v27 = (uint32_t *)v27[3];
          }
        }
        while ( v27 != nullptr );
        if ( (uint32_t *)(v45 + 364) == v28 || v6 < v28[4] )
        {
LABEL_68:
          v67[1] = 0;
          v68 = &dword_213B814;
          v69[0] = (uint32_t)(uintptr_t)(&dword_213B814);
          v93 = v6;
          v94 = 0;
          g4_std::string::construct_copy(v95, &v68);
          g4_std::string::construct_copy(v96, v69);
          g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_insert_unique(&v47);
          v41 = v47;
          g4_std::string::Destroy(v96);
          g4_std::string::Destroy(v95);
          g4_std::string::Destroy(v69);
          g4_std::string::Destroy(&v68);
          v28 = v41;
        }
        g4_std::string::assign_str(v28 + 6, &v53);
        v46 = gaia::Gaia::GetInstance();
        v29 = *(uint32_t **)(v46 + 368);
        v30 = (uint32_t *)(v46 + 364);
        if ( v29 == nullptr )
          goto LABEL_77;
        do
        {
          if ( v6 <= v29[4] )
          {
            v30 = v29;
            v29 = (uint32_t *)v29[2];
          }
          else
          {
            v29 = (uint32_t *)v29[3];
          }
        }
        while ( v29 != nullptr );
        if ( v30 == (uint32_t *)(v46 + 364) || v6 < v30[4] )
        {
LABEL_77:
          v97 = v6;
          v70 = &dword_213B814;
          v71 = &dword_213B814;
          v69[1] = 0;
          v98 = 0;
          g4_std::string::construct_copy(v99, &v70);
          g4_std::string::construct_copy(v100, &v71);
          g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_insert_unique(&v47);
          v42 = v47;
          g4_std::string::Destroy(v100);
          g4_std::string::Destroy(v99);
          g4_std::string::Destroy(&v71);
          g4_std::string::Destroy(&v70);
          v30 = v42;
        }
        g4_std::string::assign_str(v30 + 7, &v54);
        v14 = 0;
      }
    }
    else
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v76, (const char *)a2);
      Json::Value::asString((Json::Value::Self *)v58, (int)(uintptr_t)(v76));
      g4_std::string::assign_str(&v57, v58);
      g4_std::string::Destroy(v58);
      Json::Value::Destroy((Json::Value::Self *)v76);
      v9 = gaia::Gaia::GetInstance();
      v10 = *(uint32_t **)(v9 + 368);
      v11 = (uint32_t *)(v9 + 364);
      if ( v10 == nullptr )
        goto LABEL_49;
      do
      {
        if ( v6 <= v10[4] )
        {
          v11 = v10;
          v10 = (uint32_t *)v10[2];
        }
        else
        {
          v10 = (uint32_t *)v10[3];
        }
      }
      while ( v10 != nullptr );
      if ( (uint32_t *)(v9 + 364) == v11 || v6 < v11[4] )
      {
LABEL_49:
        v59 = 0;
        v60 = &dword_213B814;
        v61[0] = (uint32_t)(uintptr_t)(&dword_213B814);
        v77 = v6;
        v78 = 0;
        g4_std::string::construct_copy(v79, &v60);
        g4_std::string::construct_copy(v80, v61);
        g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_insert_unique(&v47);
        v39 = v47;
        g4_std::string::Destroy(v80);
        g4_std::string::Destroy(v79);
        g4_std::string::Destroy(v61);
        g4_std::string::Destroy(&v60);
        v11 = v39;
      }
      v11[5] = v6;
      v18 = gaia::Gaia::GetInstance();
      v19 = *(uint32_t **)(v18 + 368);
      v20 = (uint32_t *)(v18 + 364);
      if ( v19 == nullptr )
        goto LABEL_48;
      do
      {
        if ( v6 <= v19[4] )
        {
          v20 = v19;
          v19 = (uint32_t *)v19[2];
        }
        else
        {
          v19 = (uint32_t *)v19[3];
        }
      }
      while ( v19 != nullptr );
      if ( (uint32_t *)(v18 + 364) == v20 || v6 < v20[4] )
      {
LABEL_48:
        v61[1] = 0;
        v62 = &dword_213B814;
        v63[0] = (uint32_t)(uintptr_t)(&dword_213B814);
        v81 = v6;
        v82 = 0;
        g4_std::string::construct_copy(v83, &v62);
        g4_std::string::construct_copy(v84, v63);
        g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_insert_unique(&v47);
        v38 = v47;
        g4_std::string::Destroy(v84);
        g4_std::string::Destroy(v83);
        g4_std::string::Destroy(v63);
        g4_std::string::Destroy(&v62);
        v20 = v38;
      }
      g4_std::string::assign_str(v20 + 6, &v53);
      v21 = gaia::Gaia::GetInstance();
      v22 = *(uint32_t **)(v21 + 368);
      v23 = (uint32_t *)(v21 + 364);
      if ( v22 == nullptr )
        goto LABEL_45;
      do
      {
        if ( v6 <= v22[4] )
        {
          v23 = v22;
          v22 = (uint32_t *)v22[2];
        }
        else
        {
          v22 = (uint32_t *)v22[3];
        }
      }
      while ( v22 != nullptr );
      if ( (uint32_t *)(v21 + 364) == v23 || v6 < v23[4] )
      {
LABEL_45:
        v63[1] = 0;
        v64 = &dword_213B814;
        v65[0] = (uint32_t)(uintptr_t)(&dword_213B814);
        v85 = v6;
        v86 = 0;
        g4_std::string::construct_copy(v87, &v64);
        g4_std::string::construct_copy(v88, v65);
        g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_insert_unique(&v47);
        v37 = v47;
        g4_std::string::Destroy(v88);
        g4_std::string::Destroy(v87);
        g4_std::string::Destroy(v65);
        g4_std::string::Destroy(&v64);
        v23 = v37;
      }
      g4_std::string::assign_str(v23 + 7, &v54);
      v24 = gaia::Gaia_Janus::Authorize(self, &v57, v6, 0, 0, 0);
      v14 = v24;
      if ( v24 != 0 )
      {
        v35 = (Json::Value::Self *)v24;
        gaia::Gaia_Janus::Logout((int)(uintptr_t)(self), v6);
        v14 = (int)(uintptr_t)(v35);
      }
    }
    v32 = (Json::Value::Self *)v14;
    gaia::GaiaRequest::SetResponseCode(a2, v14);
    v12 = v32;
    v15 = (void *)(v57 - 12);
    if ( (uint32_t *)(v57 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v57 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v15);
      v12 = v32;
    }
    v16 = (void *)(v54 - 12);
    if ( (uint32_t *)(v54 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v54 - 4), 0xFFFFFFFF) <= 0 )
    {
      v36 = v12;
      g4_std::string::Rep::M_destroy(v16);
      v12 = v36;
    }
    v17 = (void *)(v53 - 12);
    if ( (uint32_t *)(v53 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v53 - 4), 0xFFFFFFFF) <= 0 )
    {
      v33 = v12;
      g4_std::string::Rep::M_destroy(v17);
      return (int)(uintptr_t)(v33);
    }
    return (int)(uintptr_t)(v12);
  }
  v34 = (Json::Value::Self *)JanusStatus;
  gaia::GaiaRequest::SetResponseCode(a2, JanusStatus);
  return (int)(uintptr_t)(v34);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Janus::GetMinimalFedAccountList  (binary VA: 0x149a730)
// Original: gaia::Gaia_Janus::GetMinimalFedAccountList
// ----------------------------------------------------------------------------
int gaia::Gaia_Janus::GetMinimalFedAccountList(gaia::Gaia::Self *a1, int a2, char a3, int a4, int a5)
{
  gaia::Gaia::Self *v5;
  void *v6;
  size_t v7;
  size_t v8;
  size_t n;
  int v10;
  int v11;
  size_t v12;
  size_t v13;
  int v14;
  int v15;
  void *v16;
  int v17;
  gaia::BaseJSONServiceResponse::Self *v18;
  gaia::BaseJSONServiceResponse::Self *v19;
  int *v20;
  int v21;
  uint32_t *v22;
  int *v23;
  uint32_t *v24;
  int v25;
  gaia::Gaia::Self *v26;
  gaia::Gaia::Self *v27;
  int CredentialListForAccount;
  Json::Value::Self *JSONMessage;
  void *v30;
  void *v31;
  gaia::BaseJSONServiceResponse::Self *v32;
  gaia::BaseJSONServiceResponse::Self *v33;
  uint32_t *v35;
  int Instance;
  Json::Value::Self *v37;
  Json::Value::Self *v38;
  void *v39;
  size_t v40;
  size_t v41;
  size_t v42;
  int v43;
  int v44;
  size_t v45;
  size_t v46;
  int v47;
  int v48;
  uint32_t *v49;
  int v50;
  void *v51;
  void *v52;
  int *v53;
  gaia::Gaia::Self *v54;
  int v55;
  int *v56;
  char **j;
  Json::Value::Self *v58;
  Json::Value::Self *v59;
  int v60;
  void *v61;
  Json::Value::Self *v62;
  Json::Value::Self *v63;
  void *v64;
  void *v65;
  void *v66;
  void *v67;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_s1;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_s1a;
  typedef gaia::ThreadManager::Self *_g4_t_s1b;
  typedef uint32_t *_g4_t_v71;
  typedef uint32_t *_g4_t_v72;
  typedef uint32_t *_g4_t_v73;
  typedef uint32_t *_g4_t_v74;
  typedef gaia::Gaia::Self *_g4_t_v75;
  typedef char *_g4_t_s2;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v77;
  typedef void *_g4_t_v78;
  typedef uint32_t *_g4_t_v79;
  typedef char *_g4_t_v80;
  typedef int _g4_t_i;
  typedef int *_g4_t_v82;
  typedef int *_g4_t_v83;
  typedef unsigned int _g4_t_v84;
  typedef int _g4_t_JanusStatus;
  typedef Json::Value::Self *_g4_t_v86;
  typedef int _g4_t_v87;
  typedef uint32_t _g4_t_v88[2];
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef uint32_t *_g4_t_v97;
  typedef uint32_t *_g4_t_v98;
  typedef uint32_t _g4_t_v99[3];
  typedef char _g4_t_v100[4];
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef void *_g4_t_v103;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v104;
  typedef int _g4_t_v105;
  typedef uint8_t _g4_t_v106[16];
  typedef uint8_t _g4_t_v107[16];
  typedef uint8_t _g4_t_v108[16];
  typedef uint8_t _g4_t_v109[16];
  typedef int _g4_t_v110;
  typedef char _g4_t_v111[4];
  typedef int _g4_t_v112;
  typedef void *_g4_t_v113;
  typedef char **_g4_t_v114;
  typedef int *_g4_t_v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef int _g4_t_v118;
  typedef void *_g4_t_v119;
  typedef int *_g4_t_v120;
  typedef int *_g4_t_v121;
  typedef int _g4_t_v122;
  enum : size_t {
    _g4_s0 = 400u,
    _g4_s1 = (0u + sizeof(_g4_t_s1)) > _g4_s0 ? (0u + sizeof(_g4_t_s1)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_s1a)) > _g4_s1 ? (0u + sizeof(_g4_t_s1a)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_s1b)) > _g4_s2 ? (0u + sizeof(_g4_t_s1b)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v71)) > _g4_s3 ? (36u + sizeof(_g4_t_v71)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v72)) > _g4_s4 ? (36u + sizeof(_g4_t_v72)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v73)) > _g4_s5 ? (36u + sizeof(_g4_t_v73)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v74)) > _g4_s6 ? (36u + sizeof(_g4_t_v74)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v75)) > _g4_s7 ? (40u + sizeof(_g4_t_v75)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_s2)) > _g4_s8 ? (52u + sizeof(_g4_t_s2)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v77)) > _g4_s9 ? (52u + sizeof(_g4_t_v77)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v78)) > _g4_s10 ? (52u + sizeof(_g4_t_v78)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v79)) > _g4_s11 ? (52u + sizeof(_g4_t_v79)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v80)) > _g4_s12 ? (52u + sizeof(_g4_t_v80)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_i)) > _g4_s13 ? (56u + sizeof(_g4_t_i)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v82)) > _g4_s14 ? (56u + sizeof(_g4_t_v82)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v83)) > _g4_s15 ? (60u + sizeof(_g4_t_v83)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v84)) > _g4_s16 ? (60u + sizeof(_g4_t_v84)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_JanusStatus)) > _g4_s17 ? (68u + sizeof(_g4_t_JanusStatus)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v86)) > _g4_s18 ? (72u + sizeof(_g4_t_v86)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v87)) > _g4_s19 ? (76u + sizeof(_g4_t_v87)) : _g4_s19,
    _g4_s21 = (92u + sizeof(_g4_t_v88)) > _g4_s20 ? (92u + sizeof(_g4_t_v88)) : _g4_s20,
    _g4_s22 = (103u + sizeof(_g4_t_v89)) > _g4_s21 ? (103u + sizeof(_g4_t_v89)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v90)) > _g4_s22 ? (104u + sizeof(_g4_t_v90)) : _g4_s22,
    _g4_s24 = (120u + sizeof(_g4_t_v91)) > _g4_s23 ? (120u + sizeof(_g4_t_v91)) : _g4_s23,
    _g4_s25 = (124u + sizeof(_g4_t_v92)) > _g4_s24 ? (124u + sizeof(_g4_t_v92)) : _g4_s24,
    _g4_s26 = (128u + sizeof(_g4_t_v93)) > _g4_s25 ? (128u + sizeof(_g4_t_v93)) : _g4_s25,
    _g4_s27 = (132u + sizeof(_g4_t_v94)) > _g4_s26 ? (132u + sizeof(_g4_t_v94)) : _g4_s26,
    _g4_s28 = (136u + sizeof(_g4_t_v95)) > _g4_s27 ? (136u + sizeof(_g4_t_v95)) : _g4_s27,
    _g4_s29 = (140u + sizeof(_g4_t_v96)) > _g4_s28 ? (140u + sizeof(_g4_t_v96)) : _g4_s28,
    _g4_s30 = (144u + sizeof(_g4_t_v97)) > _g4_s29 ? (144u + sizeof(_g4_t_v97)) : _g4_s29,
    _g4_s31 = (148u + sizeof(_g4_t_v98)) > _g4_s30 ? (148u + sizeof(_g4_t_v98)) : _g4_s30,
    _g4_s32 = (152u + sizeof(_g4_t_v99)) > _g4_s31 ? (152u + sizeof(_g4_t_v99)) : _g4_s31,
    _g4_s33 = (164u + sizeof(_g4_t_v100)) > _g4_s32 ? (164u + sizeof(_g4_t_v100)) : _g4_s32,
    _g4_s34 = (168u + sizeof(_g4_t_v101)) > _g4_s33 ? (168u + sizeof(_g4_t_v101)) : _g4_s33,
    _g4_s35 = (172u + sizeof(_g4_t_v102)) > _g4_s34 ? (172u + sizeof(_g4_t_v102)) : _g4_s34,
    _g4_s36 = (176u + sizeof(_g4_t_v103)) > _g4_s35 ? (176u + sizeof(_g4_t_v103)) : _g4_s35,
    _g4_s37 = (180u + sizeof(_g4_t_v104)) > _g4_s36 ? (180u + sizeof(_g4_t_v104)) : _g4_s36,
    _g4_s38 = (184u + sizeof(_g4_t_v105)) > _g4_s37 ? (184u + sizeof(_g4_t_v105)) : _g4_s37,
    _g4_s39 = (188u + sizeof(_g4_t_v106)) > _g4_s38 ? (188u + sizeof(_g4_t_v106)) : _g4_s38,
    _g4_s40 = (204u + sizeof(_g4_t_v107)) > _g4_s39 ? (204u + sizeof(_g4_t_v107)) : _g4_s39,
    _g4_s41 = (220u + sizeof(_g4_t_v108)) > _g4_s40 ? (220u + sizeof(_g4_t_v108)) : _g4_s40,
    _g4_s42 = (236u + sizeof(_g4_t_v109)) > _g4_s41 ? (236u + sizeof(_g4_t_v109)) : _g4_s41,
    _g4_s43 = (252u + sizeof(_g4_t_v110)) > _g4_s42 ? (252u + sizeof(_g4_t_v110)) : _g4_s42,
    _g4_s44 = (256u + sizeof(_g4_t_v111)) > _g4_s43 ? (256u + sizeof(_g4_t_v111)) : _g4_s43,
    _g4_s45 = (260u + sizeof(_g4_t_v112)) > _g4_s44 ? (260u + sizeof(_g4_t_v112)) : _g4_s44,
    _g4_s46 = (264u + sizeof(_g4_t_v113)) > _g4_s45 ? (264u + sizeof(_g4_t_v113)) : _g4_s45,
    _g4_s47 = (268u + sizeof(_g4_t_v114)) > _g4_s46 ? (268u + sizeof(_g4_t_v114)) : _g4_s46,
    _g4_s48 = (272u + sizeof(_g4_t_v115)) > _g4_s47 ? (272u + sizeof(_g4_t_v115)) : _g4_s47,
    _g4_s49 = (276u + sizeof(_g4_t_v116)) > _g4_s48 ? (276u + sizeof(_g4_t_v116)) : _g4_s48,
    _g4_s50 = (280u + sizeof(_g4_t_v117)) > _g4_s49 ? (280u + sizeof(_g4_t_v117)) : _g4_s49,
    _g4_s51 = (284u + sizeof(_g4_t_v118)) > _g4_s50 ? (284u + sizeof(_g4_t_v118)) : _g4_s50,
    _g4_s52 = (288u + sizeof(_g4_t_v119)) > _g4_s51 ? (288u + sizeof(_g4_t_v119)) : _g4_s51,
    _g4_s53 = (292u + sizeof(_g4_t_v120)) > _g4_s52 ? (292u + sizeof(_g4_t_v120)) : _g4_s52,
    _g4_s54 = (296u + sizeof(_g4_t_v121)) > _g4_s53 ? (296u + sizeof(_g4_t_v121)) : _g4_s53,
    _g4_s55 = (300u + sizeof(_g4_t_v122)) > _g4_s54 ? (300u + sizeof(_g4_t_v122)) : _g4_s54
  };
  alignas(16) uint8_t _g4_sf[_g4_s55];
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 0u);
  _g4_t_s1a &s1a = *reinterpret_cast<_g4_t_s1a *>(_g4_sf + 0u);
  _g4_t_s1b &s1b = *reinterpret_cast<_g4_t_s1b *>(_g4_sf + 0u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 36u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 36u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 36u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 36u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 40u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 52u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 52u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 52u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 52u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 52u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 56u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 56u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 60u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 60u);
  _g4_t_JanusStatus &JanusStatus = *reinterpret_cast<_g4_t_JanusStatus *>(_g4_sf + 68u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 72u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 76u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 92u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 103u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 104u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 120u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 124u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 128u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 132u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 136u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 140u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 144u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 148u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 152u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 164u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 168u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 172u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 176u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 180u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 184u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 188u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 204u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 220u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 236u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 252u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 256u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 260u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 264u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 268u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 272u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 276u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 280u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 284u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 288u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 292u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 296u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 300u);

  gaia::Gaia::GetInstance();
  JanusStatus = -21;
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
    return JanusStatus;
  if ( a3 != 0 )
  {
    v35 = (uint32_t *)opNew(0x44u);
    *v35 = a5;
    v35[1] = a4;
    v35[2] = 2505;
    Json::Value::Construct((int)(uintptr_t)(v35 + 3), nullptr);
    v35[7] = 0;
    v35[8] = 0;
    Json::Value::Construct((int)(uintptr_t)(v35 + 9), nullptr);
    v35[13] = 0;
    v35[7] = a2;
    v35[14] = 0;
    v35[15] = 0;
    v35[16] = 0;
    Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(s1b));
    return gaia::ThreadManager::pushTask(Instance, v35);
  }
  JanusStatus = gaia::Gaia_Janus::GetJanusStatus((gaia::Gaia_Janus::Self *)(a1));
  if ( JanusStatus != 0 )
    return JanusStatus;
  v112 = 0;
  v113 = nullptr;
  v116 = 0;
  v114 = (char **)&v112;
  v115 = &v112;
  v118 = 0;
  v119 = nullptr;
  v122 = 0;
  v120 = &v118;
  v121 = &v118;
  for ( i = 0; i != 20; ++i )
  {
    if ( !gaia::Gaia_Janus::IsLoggedIn((int)(uintptr_t)(a1), i) )
      continue;
    v93 = (int)(uintptr_t)(&dword_213B814);
    v5 = (gaia::Gaia::Self *)gaia::Gaia::GetInstance();
    gaia::Gaia::GetCredentialDetails(v5, i, 2, (gaia::Gaia::Self *)&v93);
    v6 = v119;
    if ( v119 == nullptr )
      goto LABEL_21;
    s2 = (char *)v93;
    v83 = &v118;
    v7 = *(uint32_t *)(v93 - 12);
    do
    {
      while ( 1 )
      {
        v8 = *(uint32_t *)(*((uint32_t *)v6 + 4) - 12);
        n = v8;
        if ( v7 <= v8 )
          n = v7;
        v10 = v8 - v7;
        v11 = memcmp(*((const void **)v6 + 4), s2, n);
        if ( v11 == 0 )
          v11 = v10;
        if ( v11 < 0 )
          break;
        v83 = (int *)v6;
        v6 = *((void **)v6 + 2);
        if ( v6 == nullptr )
          goto LABEL_15;
      }
      v6 = *((void **)v6 + 3);
    }
    while ( v6 != nullptr );
LABEL_15:
    if ( v83 == &v118 )
      goto LABEL_21;
    v12 = *(uint32_t *)(v83[4] - 12);
    v13 = v12;
    if ( v7 <= v12 )
      v13 = v7;
    v14 = v7 - v12;
    v15 = memcmp(s2, (const void *)v83[4], v13);
    if ( v15 == 0 )
      v15 = v14;
    if ( v15 < 0 )
    {
LABEL_21:
      g4_std::string::construct_copy(v99, &v93);
      v99[1] = 0;
      g4_std::Rb_tree_string_pair_string_const_8e26f5::M_insert_unique(v88);
      v83 = (int *)v88[0];
      v16 = (void *)(v99[0] - 12);
      if ( (uint32_t *)(v99[0] - 12) != dword_213B808 )
      {
        if ( __sync_fetch_and_add((volatile int32_t *)(v99[0] - 4), 0xFFFFFFFF) > 0 )
        {
          s2 = (char *)v93;
          goto LABEL_23;
        }
        g4_std::string::Rep::M_destroy(v16);
      }
      s2 = (char *)v93;
    }
LABEL_23:
    v83[5] = i;
    if ( s2 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)s2 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(s2 - 12);
  }
  v17 = v122;
  v103 = nullptr;
  v104 = nullptr;
  v105 = 0;
  if ( v122 != 1 )
  {
    while ( 1 )
    {
      if ( v17 == 0 )
        goto LABEL_88;
      v18 = v104;
      v77 = (gaia::BaseJSONServiceResponse::Self *)v103;
      if ( v103 != v104 )
      {
        v19 = (gaia::BaseJSONServiceResponse::Self *)v103;
        do
        {
          s1 = v19;
          v19 = (gaia::BaseJSONServiceResponse::Self *)((char *)v19 + 20);
          gaia::BaseJSONServiceResponse::Destroy(s1);
        }
        while ( v18 != v19 );
      }
      v104 = v77;
      v20 = &v112;
      v21 = v120[5];
      v22 = (uint32_t *)(v120 + 4);
      v23 = (int *)v113;
      if ( v113 == nullptr )
        goto LABEL_37;
      do
      {
        while ( v21 <= v23[4] )
        {
          v20 = v23;
          v23 = (int *)v23[2];
          if ( v23 == nullptr )
            goto LABEL_35;
        }
        v23 = (int *)v23[3];
      }
      while ( v23 != nullptr );
LABEL_35:
      if ( v20 == &v112 || v21 < v20[4] )
      {
LABEL_37:
        v71 = (uint32_t *)(v120 + 4);
        v101 = v120[5];
        v98 = &dword_213B814;
        g4_std::string::construct_copy(&v102, &v98);
        g4_std::Rb_tree_gaia_BaseServiceManager_b69122::M_insert_unique(v88);
        v20 = (int *)v88[0];
        v22 = v71;
        v78 = (void *)(v102 - 12);
        if ( (uint32_t *)(v102 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v102 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v78);
          v22 = v71;
        }
        v79 = v98 - 3;
        if ( v98 - 3 != dword_213B808 && __sync_fetch_and_add(v98 - 1, 0xFFFFFFFF) <= 0 )
        {
          v74 = v22;
          g4_std::string::Rep::M_destroy(v79);
          v22 = v74;
        }
      }
      g4_std::string::assign_str(v20 + 5, v22);
      v24 = (uint32_t *)sub_1904AE0(v120, &v118);
      v25 = v24[4];
      if ( (uint32_t *)(v25 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
      {
        v73 = v24;
        g4_std::string::Rep::M_destroy((void *)(v25 - 12));
        v24 = v73;
      }
      opDelete(v24);
      --v122;
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v91), (char *)&unk_1B15112, (int)(uintptr_t)(&v89));
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v92), (char *)&unk_1B15112, (int)(uintptr_t)(&v90));
      v26 = (gaia::Gaia::Self *)gaia::Gaia::GetInstance();
      gaia::Gaia::GetCredentialDetails(v26, v21, 0, (gaia::Gaia::Self *)&v91);
      v27 = (gaia::Gaia::Self *)gaia::Gaia::GetInstance();
      gaia::Gaia::GetCredentialDetails(v27, v21, 1, (gaia::Gaia::Self *)&v92);
      CredentialListForAccount = gaia::Gaia_Janus::GetCredentialListForAccount(
                                   a1,
                                   v21,
                                   (const void **)&v91,
                                   &v92,
                                   (int)(uintptr_t)(&v103),
                                   0,
                                   0,
                                   0);
      if ( CredentialListForAccount != 0 )
        break;
      if ( -858993459 * ((v104 - (gaia::BaseJSONServiceResponse::Self *)v103) >> 2) == 0 )
        goto LABEL_43;
      JSONMessage = (Json::Value::Self *)gaia::BaseJSONServiceResponse::GetJSONMessage((gaia::BaseJSONServiceResponse::Self *)v103);
      if ( Json::Value::type(JSONMessage) != 7 )
        goto LABEL_43;
      if ( !Json::Value::isMember(JSONMessage, "credentials") )
        goto LABEL_43;
      v37 = (Json::Value::Self *)Json::Value::opIndex(JSONMessage, "credentials");
      if ( Json::Value::type(v37) != 6 )
        goto LABEL_43;
      v86 = (Json::Value::Self *)Json::Value::opIndex(JSONMessage, "credentials");
      v87 = Json::Value::size(v86);
      if ( v87 > 0 )
      {
        v84 = 0;
        while ( 1 )
        {
          v38 = (Json::Value::Self *)Json::Value::opIndex(v86, v84);
          if ( Json::Value::type(v38) != 7 && Json::Value::type(v38) != 4 )
            break;
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v93), (char *)&unk_1B15112, (int)(uintptr_t)(&v90) + 1);
          if ( Json::Value::type(v38) == 7 && Json::Value::isMember(v38, "type") )
          {
            v62 = (Json::Value::Self *)Json::Value::opIndex(v38, "type");
            if ( Json::Value::type(v62) == 4 && Json::Value::isMember(v38, "username") )
            {
              v63 = (Json::Value::Self *)Json::Value::opIndex(v38, "username");
              if ( Json::Value::type(v63) == 4 )
              {
                v64 = Json::Value::opIndex(v38, "type");
                Json::Value::asString((Json::Value::Self *)&v94, (int)(uintptr_t)(v64));
                g4_std::string::assign_str(&v93, &v94);
                v65 = (void *)(v94 - 12);
                if ( (uint32_t *)(v94 - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(v94 - 4), 0xFFFFFFFF) <= 0 )
                {
                  g4_std::string::Rep::M_destroy(v65);
                }
                g4_std::string::append((int)(uintptr_t)(&v93), ":", 1u);
                v66 = Json::Value::opIndex(v38, "username");
                Json::Value::asString((Json::Value::Self *)&v95, (int)(uintptr_t)(v66));
                g4_std::string::append_str(&v93, &v95);
                v67 = (void *)(v95 - 12);
                if ( (uint32_t *)(v95 - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(v95 - 4), 0xFFFFFFFF) <= 0 )
                {
                  g4_std::string::Rep::M_destroy(v67);
                }
              }
            }
          }
          if ( Json::Value::type(v38) == 4 )
          {
            Json::Value::asString((Json::Value::Self *)&v96, (int)(uintptr_t)(v38));
            g4_std::string::assign_str(&v93, &v96);
            v61 = (void *)(v96 - 12);
            if ( (uint32_t *)(v96 - 12) != dword_213B808
              && __sync_fetch_and_add((volatile int32_t *)(v96 - 4), 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy(v61);
            }
          }
          v39 = v119;
          if ( v119 != nullptr )
          {
            v80 = (char *)v93;
            v82 = &v118;
            v40 = *(uint32_t *)(v93 - 12);
            do
            {
              while ( 1 )
              {
                v41 = v40;
                v42 = *(uint32_t *)(*((uint32_t *)v39 + 4) - 12);
                if ( v42 <= v40 )
                  v41 = *(uint32_t *)(*((uint32_t *)v39 + 4) - 12);
                v43 = v42 - v40;
                v44 = memcmp(*((const void **)v39 + 4), v80, v41);
                if ( v44 == 0 )
                  v44 = v43;
                if ( v44 < 0 )
                  break;
                v82 = (int *)v39;
                v39 = *((void **)v39 + 2);
                if ( v39 == nullptr )
                  goto LABEL_71;
              }
              v39 = *((void **)v39 + 3);
            }
            while ( v39 != nullptr );
LABEL_71:
            if ( v82 != &v118 )
            {
              v45 = v40;
              v46 = *(uint32_t *)(v82[4] - 12);
              if ( v46 <= v40 )
                v45 = *(uint32_t *)(v82[4] - 12);
              v47 = v40 - v46;
              v48 = memcmp(v80, (const void *)v82[4], v45);
              if ( v48 == 0 )
                v48 = v47;
              if ( v48 >= 0 )
              {
                v49 = (uint32_t *)sub_1904AE0(v82, &v118);
                v50 = v49[4];
                if ( (uint32_t *)(v50 - 12) != dword_213B808
                  && __sync_fetch_and_add((volatile int32_t *)(v50 - 4), 0xFFFFFFFF) <= 0 )
                {
                  v72 = v49;
                  g4_std::string::Rep::M_destroy((void *)(v50 - 12));
                  v49 = v72;
                }
                opDelete(v49);
                --v122;
                v80 = (char *)v93;
              }
            }
          }
          else
          {
            v80 = (char *)v93;
          }
          if ( v80 - 12 != (char *)dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)v80 - 1, 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v80 - 12);
          }
          if ( v87 == ++v84 )
            goto LABEL_81;
        }
LABEL_43:
        JanusStatus = -12;
LABEL_44:
        v30 = (void *)(v92 - 12);
        if ( (uint32_t *)(v92 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v92 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v30);
        }
        v31 = (void *)(v91 - 12);
        if ( (uint32_t *)(v91 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v91 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v31);
        }
        goto LABEL_46;
      }
LABEL_81:
      v51 = (void *)(v92 - 12);
      if ( (uint32_t *)(v92 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v92 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v51);
      }
      v52 = (void *)(v91 - 12);
      if ( (uint32_t *)(v91 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v91 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v52);
      }
      v17 = v122;
    }
    JanusStatus = CredentialListForAccount;
    goto LABEL_44;
  }
  v53 = (int *)v113;
  v54 = (gaia::Gaia::Self *)(v120 + 4);
  if ( v113 == nullptr )
  {
    v55 = v120[5];
    goto LABEL_86;
  }
  v55 = v120[5];
  v56 = &v112;
  do
  {
    if ( v55 <= v53[4] )
    {
      v56 = v53;
      v53 = (int *)v53[2];
    }
    else
    {
      v53 = (int *)v53[3];
    }
  }
  while ( v53 != nullptr );
  if ( v56 == &v112 || v55 < v56[4] )
  {
LABEL_86:
    v75 = (gaia::Gaia::Self *)(v120 + 4);
    v99[2] = v55;
    v97 = &dword_213B814;
    g4_std::string::construct_copy(v100, &v97);
    g4_std::Rb_tree_gaia_BaseServiceManager_b69122::M_insert_unique(v88);
    v56 = (int *)v88[0];
    g4_std::string::Destroy(v100);
    g4_std::string::Destroy(&v97);
    v54 = v75;
  }
  g4_std::string::assign_str(v56 + 5, v54);
LABEL_88:
  Json::Value::Construct((int)(uintptr_t)(v106), nullptr);
  for ( j = v114; j != (char **)&v112; j = (char **)sub_1904890(j) )
  {
    Json::Value::Construct((Json::Value::Self *)v107, (int)(uintptr_t)(j[4]));
    v58 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v106, j + 5);
    Json::Value::opAssign(v58, (const Json::Value::Self *)v107);
    Json::Value::Destroy((Json::Value::Self *)v107);
  }
  Json::Value::Construct((Json::Value::Self *)v108, (const Json::Value::Self *)v106);
  gaia::BaseJSONServiceResponse::Construct((Json::Value::Self *)v109, (Json::Value::Self *)v108);
  Json::Value::Destroy((Json::Value::Self *)v108);
  v110 = 8;
  v59 = *(Json::Value::Self **)(a2 + 4);
  if ( v59 == *(Json::Value::Self **)(a2 + 8) )
  {
    g4_std::vector_gaia_BaseJSONServiceResp_48cd2f::M_insert_aux(a2, v59, (Json::Value::Self *)v109);
  }
  else
  {
    v60 = 0;
    if ( v59 != nullptr )
    {
      Json::Value::Construct(v59, (const Json::Value::Self *)v109);
      *((uint32_t *)v59 + 4) = v110;
      v60 = *(uint32_t *)(a2 + 4);
    }
    *(uint32_t *)(a2 + 4) = v60 + 20;
  }
  gaia::BaseJSONServiceResponse::Destroy((gaia::BaseJSONServiceResponse::Self *)v109);
  Json::Value::Destroy((Json::Value::Self *)v106);
LABEL_46:
  v32 = v104;
  v33 = (gaia::BaseJSONServiceResponse::Self *)v103;
  if ( v104 != v103 )
  {
    do
    {
      s1a = v33;
      v33 = (gaia::BaseJSONServiceResponse::Self *)((char *)v33 + 20);
      gaia::BaseJSONServiceResponse::Destroy(s1a);
    }
    while ( v32 != v33 );
    v33 = (gaia::BaseJSONServiceResponse::Self *)v103;
  }
  if ( v33 != nullptr )
    opDelete(v33);
  g4_std::Rb_tree_string_pair_string_const_8e26f5::M_erase(
    (int)(uintptr_t)(&v117),
    v119);
  g4_std::Rb_tree_gaia_BaseServiceManager_b69122::M_erase(
    (int)(uintptr_t)(v111),
    v113);
  return JanusStatus;
}


