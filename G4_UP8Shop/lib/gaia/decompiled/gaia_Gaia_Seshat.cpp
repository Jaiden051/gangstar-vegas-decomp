#include "Core/Utils/DecompTypes.h"
#include "gaia_Gaia_Seshat.h"

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Seshat::GetSeshatStatus  (binary VA: 0x1451be0)
// Original: gaia::Gaia_Seshat::GetSeshatStatus
// ----------------------------------------------------------------------------
int gaia::Gaia_Seshat::GetSeshatStatus(gaia::Gaia_Seshat::Self *self)
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
    v2 = (glwebtools::Mutex::Self *)(gaia::Gaia::GetInstance() + 408);
    glwebtools::Mutex::Lock(v2);
    ServiceUrl = 0;
    if ( *(uint32_t *)(gaia::Gaia::GetInstance() + 8) == 0 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v7) + 1, (char *)&unk_1B15112, (int)(uintptr_t)(v7));
      Instance = gaia::Gaia::GetInstance();
      ServiceUrl = gaia::Gaia::GetServiceUrl(Instance, "storage", (int)(uintptr_t)(v7) + 1, 0, 0, 0);
      glwebtools::Mutex::Lock(self);
      if ( ServiceUrl != 0
        || (v6 = gaia::Gaia::GetInstance(),
            v5 = (gaia::BaseServiceManager::Self *)opNew(0xB4u),
            gaia::Seshat::Construct(v5, (int)(uintptr_t)(v7) + 1, v6 + 240),
            *(uint32_t *)(gaia::Gaia::GetInstance() + 8) = (uint32_t)(uintptr_t)(v5),
            *(uint32_t *)(gaia::Gaia::GetInstance() + 8) == 0) )
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
// Function: gaia::Gaia_Seshat::GetEtagForKey  (binary VA: 0x1451d50)
// Original: gaia::Gaia_Seshat::GetEtagForKey
// ----------------------------------------------------------------------------
int gaia::Gaia_Seshat::GetEtagForKey(gaia::Gaia_Seshat::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  int SeshatStatus;
  void *v4;
  int Instance;
  int result;
  uint32_t *v7;
  void *v8;
  typedef int _g4_t_EtagForKey;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint32_t *_g4_t_v16;
  typedef uint8_t _g4_t_v17[28];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_EtagForKey)) > _g4_s0 ? (12u + sizeof(_g4_t_EtagForKey)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v11)) > _g4_s2 ? (12u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (26u + sizeof(_g4_t_v12)) > _g4_s3 ? (26u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v13)) > _g4_s4 ? (32u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v14)) > _g4_s5 ? (36u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v15)) > _g4_s6 ? (40u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v16)) > _g4_s7 ? (44u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v17)) > _g4_s8 ? (48u + sizeof(_g4_t_v17)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_EtagForKey &EtagForKey = *reinterpret_cast<_g4_t_EtagForKey *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 26u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "key", (int)(uintptr_t)(&v12));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v13), 4);
    v2 = (void *)(v13 - 12);
    if ( (uint32_t *)(v13 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      SeshatStatus = gaia::Gaia_Seshat::GetSeshatStatus(self);
      if ( SeshatStatus != 0 )
      {
        v10 = SeshatStatus;
        gaia::GaiaRequest::SetResponseCode(a2, SeshatStatus);
        return v10;
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), (char *)&unk_1B15112, (int)(uintptr_t)(&v12) + 1);
        gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v17, (const char *)a2);
        Json::Value::asString((Json::Value::Self *)&v15, (int)(uintptr_t)(v17));
        g4_std::string::assign_str(&v14, &v15);
        v4 = (void *)(v15 - 12);
        if ( (uint32_t *)(v15 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v4);
        }
        Json::Value::Destroy((Json::Value::Self *)v17);
        v16 = &dword_213B814;
        Instance = gaia::Gaia::GetInstance();
        EtagForKey = gaia::Seshat::GetEtagForKey(*(uint32_t *)(Instance + 8), &v14, &v16);
        gaia::GaiaRequest::SetResponse(a2, &v16);
        gaia::GaiaRequest::SetResponseCode(a2, EtagForKey);
        result = EtagForKey;
        v7 = v16 - 3;
        if ( v16 - 3 != dword_213B808 && __sync_fetch_and_add(v16 - 1, 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v7);
          result = EtagForKey;
        }
        v8 = (void *)(v14 - 12);
        if ( (uint32_t *)(v14 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
        {
          v11 = result;
          g4_std::string::Rep::M_destroy(v8);
          return v11;
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
// Function: gaia::Gaia_Seshat::GetEtagForKey  (binary VA: 0x1451fd0)
// Original: gaia::Gaia_Seshat::GetEtagForKey
// ----------------------------------------------------------------------------
int gaia::Gaia_Seshat::GetEtagForKey(gaia::Gaia::Self *a1, int a2, int a3)
{
  char IsInitialized;
  int result;
  int Instance;

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    result = gaia::Gaia_Seshat::GetSeshatStatus((gaia::Gaia_Seshat::Self *)(a1));
    if ( result == 0 )
    {
      Instance = gaia::Gaia::GetInstance();
      return gaia::Seshat::GetEtagForKey(*(uint32_t *)(Instance + 8), a2, a3);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Seshat::GetData  (binary VA: 0x1452030)
// Original: gaia::Gaia_Seshat::GetData
// ----------------------------------------------------------------------------
Json::Value::Self * gaia::Gaia_Seshat::GetData(gaia::Gaia_Seshat::Self *a1, uint32_t *a2, uint32_t *a3, void **a4, int *a5, char a6, int a7, int a8)
{
  char IsInitialized;
  int SeshatStatus;
  char v10;
  uint32_t *v12;
  Json::Value::Self *v13;
  Json::Value::Self *v14;
  int Instance;
  int v16;
  typedef gaia::ThreadManager::Self *_g4_t_v17;
  typedef Json::Value::Self *_g4_t_Data;
  typedef int _g4_t_v19;
  typedef uint8_t _g4_t_v20[16];
  typedef uint8_t _g4_t_v21[28];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v17)) > _g4_s0 ? (0u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_Data)) > _g4_s1 ? (44u + sizeof(_g4_t_Data)) : _g4_s1,
    _g4_s3 = (59u + sizeof(_g4_t_v19)) > _g4_s2 ? (59u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v20)) > _g4_s3 ? (64u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (80u + sizeof(_g4_t_v21)) > _g4_s4 ? (80u + sizeof(_g4_t_v21)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_Data &Data = *reinterpret_cast<_g4_t_Data *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 59u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 64u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 80u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  SeshatStatus = -21;
  if ( IsInitialized != 0 )
  {
    LOBYTE(SeshatStatus) = -22;
    if ( *(uint32_t *)(*a2 - 12) != 0 )
    {
      gaia::Gaia::GetInstance();
      v10 = gaia::Gaia::IsInitialized();
      SeshatStatus = -21;
      if ( v10 != 0 )
      {
        if ( a6 != 0 )
        {
          v12 = (uint32_t *)opNew(0x44u);
          *v12 = a8;
          v12[1] = a7;
          v12[2] = 1002;
          Json::Value::Construct((int)(uintptr_t)(v12 + 3), nullptr);
          v12[7] = 0;
          v12[8] = 0;
          Json::Value::Construct((int)(uintptr_t)(v12 + 9), nullptr);
          v12[13] = 0;
          v12[14] = 0;
          v12[15] = 0;
          v12[16] = 0;
          Json::Value::Construct((int)(uintptr_t)(v20), a2);
          v13 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v12 + 3), "key");
          Json::Value::opAssign(v13, (const Json::Value::Self *)v20);
          Json::Value::Destroy((Json::Value::Self *)v20);
          Json::Value::Construct((int)(uintptr_t)(v21), a3);
          v14 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v12 + 3), "janusToken");
          Json::Value::opAssign(v14, (const Json::Value::Self *)v21);
          Json::Value::Destroy((Json::Value::Self *)v21);
          v12[16] = (uint32_t)(uintptr_t)(a5);
          v12[15] = (uint32_t)(uintptr_t)(a4);
          Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v17));
          return (Json::Value::Self *)gaia::ThreadManager::pushTask(Instance, v12);
        }
        else
        {
          SeshatStatus = gaia::Gaia_Seshat::GetSeshatStatus(a1);
          if ( SeshatStatus == 0 )
          {
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19) + 1, "me", (int)(uintptr_t)(&v19));
            v16 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Seshat::GetData(
                                    *(gaia::BaseServiceManager::Self **)(v16 + 8),
                                    (int)(uintptr_t)(a3),
                                    (int)(uintptr_t)(a2),
                                    a4,
                                    a5,
                                    (int)(uintptr_t)(&v19) + 1,
                                    0);
            g4_std::string::Destroy((char *)&v19 + 1);
            return Data;
          }
        }
      }
    }
  }
  return (Json::Value::Self *)SeshatStatus;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Seshat::GetStandardUserProfile  (binary VA: 0x1452260)
// Original: gaia::Gaia_Seshat::GetStandardUserProfile
// ----------------------------------------------------------------------------
int gaia::Gaia_Seshat::GetStandardUserProfile()
{
  gaia::UserProfile::Self *v1;

  return (int)(uintptr_t)(gaia::UserProfile::GetInstance(v1));
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Seshat::ReleaseStandardUserProfile  (binary VA: 0x1452280)
// Original: gaia::Gaia_Seshat::ReleaseStandardUserProfile
// ----------------------------------------------------------------------------
int gaia::Gaia_Seshat::ReleaseStandardUserProfile()
{
  gaia::UserProfile::Self *v1;

  gaia::UserProfile::Release(v1);
  return 1;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Seshat::CancelRequest  (binary VA: 0x14522a0)
// Original: gaia::Gaia_Seshat::CancelRequest
// ----------------------------------------------------------------------------
int gaia::Gaia_Seshat::CancelRequest(glwebtools::Mutex::Self *a1, int a2)
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
    if ( *(uint32_t *)(gaia::Gaia::GetInstance() + 8) != 0 )
    {
      if ( a2 == 1 )
      {
        Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v7));
        gaia::ThreadManager::CancelRequest(Instance, 1000);
      }
      v3 = gaia::Gaia::GetInstance();
      v2 = gaia::BaseServiceManager::CancelRequest(*(uint32_t *)(v3 + 8), a2);
      glwebtools::Mutex::Unlock(a1);
    }
    else
    {
      v6 = gaia::Gaia::GetInstance();
      v2 = 0;
      gaia::BaseServiceManager::CancelRequest(*(uint32_t *)(v6 + 48), 3007);
      glwebtools::Mutex::Unlock(a1);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Seshat::StartAndAuthorizeSeshat  (binary VA: 0x145c270)
// Original: gaia::Gaia_Seshat::StartAndAuthorizeSeshat
// ----------------------------------------------------------------------------
int gaia::Gaia_Seshat::StartAndAuthorizeSeshat(gaia::Gaia_Seshat::Self *self, gaia::GaiaRequest::Self *a2)
{
  int result;
  int Instance;
  typedef int _g4_t_v4;
  typedef uint8_t _g4_t_v5[72];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v5)) > _g4_s1 ? (28u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 28u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    result = gaia::Gaia_Seshat::GetSeshatStatus(self);
    if ( result == 0 )
    {
      gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v5, a2);
      Instance = gaia::Gaia::GetInstance();
      v4 = gaia::Gaia::Authorize(Instance, (gaia::GaiaRequest::Self *)v5);
      gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v5);
      return v4;
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
// Function: gaia::Gaia_Seshat::GetAccessToken  (binary VA: 0x145c310)
// Original: gaia::Gaia_Seshat::GetAccessToken
// ----------------------------------------------------------------------------
int gaia::Gaia_Seshat::GetAccessToken(gaia::Gaia::Self *a1, gaia::GaiaRequest::Self *a2, uint32_t *a3, int a4)
{
  void *v4;
  void *v5;
  Json::Value::Self *v6;
  void *v7;
  int v8;
  int SeshatStatus;
  int v11;
  int Instance;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint8_t _g4_t_v17[4];
  typedef uint8_t _g4_t_v18[16];
  typedef uint8_t _g4_t_v19[44];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (11u + sizeof(_g4_t_v13)) > _g4_s0 ? (11u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v14)) > _g4_s1 ? (16u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v15)) > _g4_s2 ? (20u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v16)) > _g4_s3 ? (24u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v17)) > _g4_s4 ? (28u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v18)) > _g4_s5 ? (32u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v19)) > _g4_s6 ? (48u + sizeof(_g4_t_v19)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 11u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    v8 = -21;
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return v8;
  }
  g4_std_compat::string_assign(a4, &unk_1B15112, 0);
  gaia::GaiaRequest::GetAccessToken((gaia::GaiaRequest::Self *)&v14);
  g4_std::string::assign_str(a4, &v14);
  v4 = (void *)(v14 - 12);
  if ( (uint32_t *)(v14 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  if ( g4_std::string::compare(a4, (char *)&unk_1B15112) != 0 )
  {
    v8 = 0;
    SeshatStatus = gaia::Gaia_Seshat::GetSeshatStatus((gaia::Gaia_Seshat::Self *)(a1));
    v11 = SeshatStatus;
    if ( SeshatStatus != 0 )
    {
      gaia::GaiaRequest::SetResponseCode(a2, SeshatStatus);
      return v11;
    }
    return v8;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "accountType", (int)(uintptr_t)(&v13));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v15), 1);
  v5 = (void *)(v15 - 12);
  if ( (uint32_t *)(v15 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
  {
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v18, (const char *)a2);
    Json::Value::asInt((Json::Value::Self *)v18);
    Json::Value::Destroy((Json::Value::Self *)v18);
    Json::Value::Construct((int)(uintptr_t)(v19), a3);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "scope", (int)(uintptr_t)(&v13) + 3);
    v6 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v16);
    Json::Value::opAssign(v6, (const Json::Value::Self *)v19);
    v7 = (void *)(v16 - 12);
    if ( (uint32_t *)(v16 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    Json::Value::Destroy((Json::Value::Self *)v19);
    v8 = gaia::Gaia_Seshat::StartAndAuthorizeSeshat(a1, a2);
    if ( v8 == 0 )
    {
      Instance = gaia::Gaia::GetInstance();
      gaia::Gaia::GetJanusToken((int)(uintptr_t)(v17), Instance);
      g4_std::string::assign_str(a4, v17);
      g4_std::string::Destroy(v17);
    }
    return v8;
  }
  return gaia::GaiaRequest::GetResponseCode(a2);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Seshat::ListMatchers  (binary VA: 0x145c5f0)
// Original: gaia::Gaia_Seshat::ListMatchers
// ----------------------------------------------------------------------------
int gaia::Gaia_Seshat::ListMatchers(gaia::Gaia_Seshat::Self *self, gaia::GaiaRequest::Self *a2)
{
  int SeshatStatus;
  int AccessToken;
  void *v4;
  int Instance;
  gaia::BaseJSONServiceResponse::Self *v6;
  gaia::BaseJSONServiceResponse::Self *v7;
  void *v8;
  int started;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_ptr;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef char *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v17;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint8_t _g4_t_v20[96];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v12)) > _g4_s1 ? (44u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v13)) > _g4_s2 ? (48u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v14)) > _g4_s3 ? (52u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v15)) > _g4_s4 ? (56u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v16)) > _g4_s5 ? (60u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v17)) > _g4_s6 ? (64u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v18)) > _g4_s7 ? (68u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v19)) > _g4_s8 ? (72u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v20)) > _g4_s9 ? (76u + sizeof(_g4_t_v20)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 44u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 48u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 52u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 56u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 60u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 64u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 68u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 72u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 76u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    AccessToken = -21;
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return AccessToken;
  }
  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) == 0 )
  {
    SeshatStatus = gaia::Gaia_Seshat::GetSeshatStatus(self);
    AccessToken = SeshatStatus;
    if ( SeshatStatus != 0 )
    {
      gaia::GaiaRequest::SetResponseCode(a2, SeshatStatus);
    }
    else
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), (char *)&unk_1B15112, (int)(uintptr_t)(&v12));
      v17 = nullptr;
      v18 = nullptr;
      v19 = 0;
      v14 = nullptr;
      v15 = 0;
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "storage_admin", (int)(uintptr_t)(&v12) + 1);
      AccessToken = gaia::Gaia_Seshat::GetAccessToken((gaia::Gaia::Self *)(self), a2, (uint32_t *)(&v16), (int)(uintptr_t)(&v13));
      v4 = (void *)(v16 - 12);
      if ( (uint32_t *)(v16 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v4);
      }
      if ( AccessToken != 0 )
      {
        gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
      }
      else
      {
        Instance = gaia::Gaia::GetInstance();
        AccessToken = gaia::Seshat::ListMatchers(
                        *(gaia::BaseServiceManager::Self **)(Instance + 8),
                        (int)(uintptr_t)(&v13),
                        (void **)&v14,
                        &v15,
                        0);
        if ( AccessToken == 0 )
          AccessToken = gaia::BaseServiceManager::ParseMessages(v14, v15, (int)(uintptr_t)(&v17), 21);
        gaia::GaiaRequest::SetResponse(a2, (const std::vector<gaia::BaseJSONServiceResponse::Self> *)&v17);
        gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
        free(v14);
      }
      v6 = v18;
      v7 = v17;
      if ( v18 != v17 )
      {
        do
        {
          ptr = v7;
          v7 = (gaia::BaseJSONServiceResponse::Self *)((char *)v7 + 20);
          gaia::BaseJSONServiceResponse::Destroy(ptr);
        }
        while ( v6 != v7 );
        v7 = v17;
      }
      if ( v7 != nullptr )
        opDelete(v7);
      v8 = (void *)(v13 - 12);
      if ( (uint32_t *)(v13 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v8);
      }
    }
    return AccessToken;
  }
  gaia::GaiaRequest::SetOperationCode(a2, 1014);
  gaia::Gaia::GetInstance();
  gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v20, a2);
  started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v20);
  gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v20);
  return started;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Seshat::ListMatchers  (binary VA: 0x145c890)
// Original: gaia::Gaia_Seshat::ListMatchers
// ----------------------------------------------------------------------------
int gaia::Gaia_Seshat::ListMatchers(gaia::Gaia_Seshat::Self *a1, int a2, std::vector<gaia::BaseJSONServiceResponse::Self> *a3, char a4, int a5, int a6)
{
  int v6;
  Json::Value::Self *v7;
  void *v8;
  typedef uint16_t _g4_t_v10[3];
  typedef uint8_t _g4_t_v11[16];
  typedef uint8_t _g4_t_v12[80];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (6u + sizeof(_g4_t_v10)) > _g4_s0 ? (6u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v12)) > _g4_s2 ? (28u + sizeof(_g4_t_v12)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 6u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  v6 = -21;
  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v12);
    Json::Value::Construct((Json::Value::Self *)v11, a2);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10[1]), "accountType", (int)(uintptr_t)(v10));
    v7 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(v12, &v10[1]);
    Json::Value::opAssign(v7, (const Json::Value::Self *)v11);
    v8 = (void *)(*(uint32_t *)&v10[1] - 12);
    if ( (uint32_t *)(*(uint32_t *)&v10[1] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v10[1] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v8);
    }
    Json::Value::Destroy((Json::Value::Self *)v11);
    gaia::GaiaRequest::SetParamsForOutput((gaia::GaiaRequest::Self *)v12, a3);
    if ( a4 != 0 )
      gaia::GaiaRequest::SetRunAsynchronous(v12, a5, a6);
    v6 = gaia::Gaia_Seshat::ListMatchers(a1, (gaia::GaiaRequest::Self *)v12);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v12);
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Seshat::DeleteMatcher  (binary VA: 0x145ca00)
// Original: gaia::Gaia_Seshat::DeleteMatcher
// ----------------------------------------------------------------------------
int gaia::Gaia_Seshat::DeleteMatcher(gaia::Gaia_Seshat::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  int SeshatStatus;
  void *v4;
  int AccessToken;
  void *v6;
  int result;
  void *v8;
  void *v9;
  int Instance;
  typedef char *_g4_t_v11;
  typedef char *_g4_t_v12;
  typedef char *_g4_t_started;
  typedef char *_g4_t_v14;
  typedef char *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint8_t _g4_t_v23[16];
  typedef uint8_t _g4_t_v24[80];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_started)) > _g4_s2 ? (12u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v14)) > _g4_s3 ? (12u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v15)) > _g4_s4 ? (12u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (31u + sizeof(_g4_t_v16)) > _g4_s5 ? (31u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v17)) > _g4_s6 ? (32u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v18)) > _g4_s7 ? (40u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v19)) > _g4_s8 ? (44u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v20)) > _g4_s9 ? (48u + sizeof(_g4_t_v20)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v21)) > _g4_s10 ? (52u + sizeof(_g4_t_v21)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v22)) > _g4_s11 ? (56u + sizeof(_g4_t_v22)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v23)) > _g4_s12 ? (60u + sizeof(_g4_t_v23)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v24)) > _g4_s13 ? (76u + sizeof(_g4_t_v24)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 31u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 48u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 52u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 56u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 76u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "name", (int)(uintptr_t)(&v16));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v18), 4);
    v2 = (void *)(v18 - 12);
    if ( (uint32_t *)(v18 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 1013);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v24, a2);
        started = (char *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v24);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v24);
        return (int)(uintptr_t)(started);
      }
      else
      {
        SeshatStatus = gaia::Gaia_Seshat::GetSeshatStatus(self);
        if ( SeshatStatus != 0 )
        {
          v14 = (char *)SeshatStatus;
          gaia::GaiaRequest::SetResponseCode(a2, SeshatStatus);
          return (int)(uintptr_t)(v14);
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), (char *)&unk_1B15112, (int)(uintptr_t)(&v17));
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), (char *)&unk_1B15112, (int)(uintptr_t)(&v17) + 1);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v23, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v21, (int)(uintptr_t)(v23));
          g4_std::string::assign_str(&v20, &v21);
          v4 = (void *)(v21 - 12);
          if ( (uint32_t *)(v21 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v4);
          }
          Json::Value::Destroy((Json::Value::Self *)v23);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "storage_admin", (int)(uintptr_t)(&v17) + 2);
          AccessToken = gaia::Gaia_Seshat::GetAccessToken((gaia::Gaia::Self *)(self), a2, (uint32_t *)(&v22), (int)(uintptr_t)(&v19));
          v6 = (void *)(v22 - 12);
          if ( (uint32_t *)(v22 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
          {
            v15 = (char *)AccessToken;
            g4_std::string::Rep::M_destroy(v6);
            AccessToken = (int)(uintptr_t)(v15);
          }
          if ( AccessToken == 0 )
          {
            Instance = gaia::Gaia::GetInstance();
            AccessToken = gaia::Seshat::DeleteMatcher(
                            *(gaia::BaseServiceManager::Self **)(Instance + 8),
                            (int)(uintptr_t)(&v19),
                            (int)(uintptr_t)(&v20),
                            (int)(uintptr_t)(a2));
          }
          v11 = (char *)AccessToken;
          gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
          result = (int)(uintptr_t)(v11);
          v8 = (void *)(v20 - 12);
          if ( (uint32_t *)(v20 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v8);
            result = (int)(uintptr_t)(v11);
          }
          v9 = (void *)(v19 - 12);
          if ( (uint32_t *)(v19 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
          {
            v12 = (char *)result;
            g4_std::string::Rep::M_destroy(v9);
            return (int)(uintptr_t)(v12);
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
// Function: gaia::Gaia_Seshat::GetMatches  (binary VA: 0x145cd90)
// Original: gaia::Gaia_Seshat::GetMatches
// ----------------------------------------------------------------------------
int gaia::Gaia_Seshat::GetMatches(gaia::Gaia_Seshat::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  int SeshatStatus;
  void *v6;
  void *v7;
  void *v8;
  int Instance;
  gaia::BaseJSONServiceResponse::Self *v10;
  void *v11;
  void *v12;
  void *v13;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_ptr;
  typedef char _g4_t_v16;
  typedef char _g4_t_v17[4];
  typedef int _g4_t_v18;
  typedef int _g4_t_started;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef char *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef void *_g4_t_v33;
  typedef void *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef uint8_t _g4_t_v36[16];
  typedef uint8_t _g4_t_v37[16];
  typedef uint8_t _g4_t_v38[16];
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef void *_g4_t_v41;
  typedef int *_g4_t_v42;
  typedef int *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef uint8_t _g4_t_v45[96];
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (52u + sizeof(_g4_t_v16)) > _g4_s1 ? (52u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (52u + sizeof(_g4_t_v17)) > _g4_s2 ? (52u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v18)) > _g4_s3 ? (56u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_started)) > _g4_s4 ? (56u + sizeof(_g4_t_started)) : _g4_s4,
    _g4_s6 = (76u + sizeof(_g4_t_v20)) > _g4_s5 ? (76u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v21)) > _g4_s6 ? (80u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (92u + sizeof(_g4_t_v22)) > _g4_s7 ? (92u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (96u + sizeof(_g4_t_v23)) > _g4_s8 ? (96u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (100u + sizeof(_g4_t_v24)) > _g4_s9 ? (100u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (104u + sizeof(_g4_t_v25)) > _g4_s10 ? (104u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (108u + sizeof(_g4_t_v26)) > _g4_s11 ? (108u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (112u + sizeof(_g4_t_v27)) > _g4_s12 ? (112u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (116u + sizeof(_g4_t_v28)) > _g4_s13 ? (116u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (120u + sizeof(_g4_t_v29)) > _g4_s14 ? (120u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (124u + sizeof(_g4_t_v30)) > _g4_s15 ? (124u + sizeof(_g4_t_v30)) : _g4_s15,
    _g4_s17 = (128u + sizeof(_g4_t_v31)) > _g4_s16 ? (128u + sizeof(_g4_t_v31)) : _g4_s16,
    _g4_s18 = (132u + sizeof(_g4_t_v32)) > _g4_s17 ? (132u + sizeof(_g4_t_v32)) : _g4_s17,
    _g4_s19 = (136u + sizeof(_g4_t_v33)) > _g4_s18 ? (136u + sizeof(_g4_t_v33)) : _g4_s18,
    _g4_s20 = (140u + sizeof(_g4_t_v34)) > _g4_s19 ? (140u + sizeof(_g4_t_v34)) : _g4_s19,
    _g4_s21 = (144u + sizeof(_g4_t_v35)) > _g4_s20 ? (144u + sizeof(_g4_t_v35)) : _g4_s20,
    _g4_s22 = (148u + sizeof(_g4_t_v36)) > _g4_s21 ? (148u + sizeof(_g4_t_v36)) : _g4_s21,
    _g4_s23 = (164u + sizeof(_g4_t_v37)) > _g4_s22 ? (164u + sizeof(_g4_t_v37)) : _g4_s22,
    _g4_s24 = (180u + sizeof(_g4_t_v38)) > _g4_s23 ? (180u + sizeof(_g4_t_v38)) : _g4_s23,
    _g4_s25 = (196u + sizeof(_g4_t_v39)) > _g4_s24 ? (196u + sizeof(_g4_t_v39)) : _g4_s24,
    _g4_s26 = (200u + sizeof(_g4_t_v40)) > _g4_s25 ? (200u + sizeof(_g4_t_v40)) : _g4_s25,
    _g4_s27 = (204u + sizeof(_g4_t_v41)) > _g4_s26 ? (204u + sizeof(_g4_t_v41)) : _g4_s26,
    _g4_s28 = (208u + sizeof(_g4_t_v42)) > _g4_s27 ? (208u + sizeof(_g4_t_v42)) : _g4_s27,
    _g4_s29 = (212u + sizeof(_g4_t_v43)) > _g4_s28 ? (212u + sizeof(_g4_t_v43)) : _g4_s28,
    _g4_s30 = (216u + sizeof(_g4_t_v44)) > _g4_s29 ? (216u + sizeof(_g4_t_v44)) : _g4_s29,
    _g4_s31 = (220u + sizeof(_g4_t_v45)) > _g4_s30 ? (220u + sizeof(_g4_t_v45)) : _g4_s30
  };
  alignas(16) uint8_t _g4_sf[_g4_s31];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 52u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 52u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 56u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 56u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 76u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 80u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 92u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 96u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 100u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 104u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 108u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 112u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 116u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 120u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 124u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 128u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 132u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 136u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 140u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 144u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 148u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 164u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 180u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 196u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 200u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 204u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 208u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 212u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 216u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 220u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "name", (int)(uintptr_t)(&v20));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v22), 4);
  v2 = (void *)(v22 - 12);
  if ( (uint32_t *)(v22 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "limit", (int)(uintptr_t)(&v20) + 1);
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v23), 2);
  v3 = (void *)(v23 - 12);
  if ( (uint32_t *)(v23 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "include_fields", (int)(uintptr_t)(&v20) + 2);
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v24), 4);
  v4 = (void *)(v24 - 12);
  if ( (uint32_t *)(v24 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) == 0 )
    return gaia::GaiaRequest::GetResponseCode(a2);
  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
  {
    gaia::GaiaRequest::SetOperationCode(a2, 1012);
    gaia::Gaia::GetInstance();
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v45, a2);
    started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v45);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v45);
    return started;
  }
  SeshatStatus = gaia::Gaia_Seshat::GetSeshatStatus(self);
  v18 = SeshatStatus;
  if ( SeshatStatus == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), (char *)&unk_1B15112, (int)(uintptr_t)(&v20) + 3);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), (char *)&unk_1B15112, (int)(uintptr_t)(&v21));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), (char *)&unk_1B15112, (int)(uintptr_t)(&v21) + 1);
    v42 = &v40;
    v43 = &v40;
    v40 = 0;
    v41 = nullptr;
    v44 = 0;
    v33 = nullptr;
    v34 = nullptr;
    v35 = 0;
    v28 = nullptr;
    v29 = 0;
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v36, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v30, (int)(uintptr_t)(v36));
    g4_std::string::assign_str(&v26, &v30);
    v6 = (void *)(v30 - 12);
    if ( (uint32_t *)(v30 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    Json::Value::Destroy((Json::Value::Self *)v36);
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v37, (const char *)a2);
    v16 = Json::Value::asUInt((Json::Value::Self *)v37);
    Json::Value::Destroy((Json::Value::Self *)v37);
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v38, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v31, (int)(uintptr_t)(v38));
    g4_std::string::assign_str(&v27, &v31);
    v7 = (void *)(v31 - 12);
    if ( (uint32_t *)(v31 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    Json::Value::Destroy((Json::Value::Self *)v38);
    gaia::GaiaRequest::GetInputValue(a2, (std::map<std::string,std::string> *)&v39);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "storage", (int)(uintptr_t)(&v21) + 2);
    started = gaia::Gaia_Seshat::GetAccessToken((gaia::Gaia::Self *)(self), a2, (uint32_t *)(&v32), (int)(uintptr_t)(&v25));
    v8 = (void *)(v32 - 12);
    if ( (uint32_t *)(v32 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v32 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v8);
    }
    if ( started != 0 )
    {
      gaia::GaiaRequest::SetResponseCode(a2, started);
    }
    else
    {
      Instance = gaia::Gaia::GetInstance();
      started = gaia::Seshat::GetMatches(
                  *(gaia::BaseServiceManager::Self **)(Instance + 8),
                  (int)(uintptr_t)(&v25),
                  (int)(uintptr_t)(&v26),
                  (void **)&v28,
                  &v29,
                  v16,
                  (int)(uintptr_t)(&v27),
                  (int)(uintptr_t)(&v39),
                  (int)(uintptr_t)(a2));
      if ( started == 0 )
        started = gaia::BaseServiceManager::ParseMessages(v28, v29, (int)(uintptr_t)(&v33), 21);
      gaia::GaiaRequest::SetResponse(a2, (const std::vector<gaia::BaseJSONServiceResponse::Self> *)&v33);
      gaia::GaiaRequest::SetResponseCode(a2, started);
      free(v28);
    }
    v10 = (gaia::BaseJSONServiceResponse::Self *)v33;
    *(uint32_t *)v17 = (uint32_t)(uintptr_t)(v34);
    if ( v34 != v33 )
    {
      do
      {
        ptr = v10;
        v10 = (gaia::BaseJSONServiceResponse::Self *)((char *)v10 + 20);
        gaia::BaseJSONServiceResponse::Destroy(ptr);
      }
      while ( *(gaia::BaseJSONServiceResponse::Self **)v17 != v10 );
      v10 = (gaia::BaseJSONServiceResponse::Self *)v33;
    }
    if ( v10 != nullptr )
      opDelete(v10);
    std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
      (int)(uintptr_t)(&v39),
      v41);
    v11 = (void *)(v27 - 12);
    if ( (uint32_t *)(v27 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v11);
    }
    v12 = (void *)(v26 - 12);
    if ( (uint32_t *)(v26 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v12);
    }
    v13 = (void *)(v25 - 12);
    if ( (uint32_t *)(v25 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v13);
    }
    return started;
  }
  gaia::GaiaRequest::SetResponseCode(a2, SeshatStatus);
  return v18;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Seshat::CreateMatcher  (binary VA: 0x145d480)
// Original: gaia::Gaia_Seshat::CreateMatcher
// ----------------------------------------------------------------------------
int gaia::Gaia_Seshat::CreateMatcher(gaia::Gaia_Seshat::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  int SeshatStatus;
  void *v5;
  void *v6;
  int AccessToken;
  void *v8;
  int result;
  void *v10;
  void *v11;
  void *v12;
  int Instance;
  typedef char *_g4_t_v14;
  typedef char *_g4_t_v15;
  typedef char *_g4_t_started;
  typedef char *_g4_t_v17;
  typedef char *_g4_t_v18;
  typedef char *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef uint8_t _g4_t_v30[16];
  typedef uint8_t _g4_t_v31[16];
  typedef uint8_t _g4_t_v32[96];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (8u + sizeof(_g4_t_v14)) > _g4_s0 ? (8u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v15)) > _g4_s1 ? (8u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_started)) > _g4_s2 ? (8u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v17)) > _g4_s3 ? (8u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v18)) > _g4_s4 ? (8u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v19)) > _g4_s5 ? (8u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (30u + sizeof(_g4_t_v20)) > _g4_s6 ? (30u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v21)) > _g4_s7 ? (32u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v22)) > _g4_s8 ? (44u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v23)) > _g4_s9 ? (48u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v24)) > _g4_s10 ? (52u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v25)) > _g4_s11 ? (56u + sizeof(_g4_t_v25)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v26)) > _g4_s12 ? (60u + sizeof(_g4_t_v26)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v27)) > _g4_s13 ? (64u + sizeof(_g4_t_v27)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v28)) > _g4_s14 ? (68u + sizeof(_g4_t_v28)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v29)) > _g4_s15 ? (72u + sizeof(_g4_t_v29)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v30)) > _g4_s16 ? (76u + sizeof(_g4_t_v30)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v31)) > _g4_s17 ? (92u + sizeof(_g4_t_v31)) : _g4_s17,
    _g4_s19 = (108u + sizeof(_g4_t_v32)) > _g4_s18 ? (108u + sizeof(_g4_t_v32)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 30u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 44u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 56u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 60u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 64u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 68u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 72u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 76u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 92u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 108u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "name", (int)(uintptr_t)(&v20));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v22), 4);
    v2 = (void *)(v22 - 12);
    if ( (uint32_t *)(v22 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "condition", (int)(uintptr_t)(&v20) + 1);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v23), 4);
    v3 = (void *)(v23 - 12);
    if ( (uint32_t *)(v23 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 1011);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v32, a2);
        started = (char *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v32);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v32);
        return (int)(uintptr_t)(started);
      }
      else
      {
        SeshatStatus = gaia::Gaia_Seshat::GetSeshatStatus(self);
        if ( SeshatStatus != 0 )
        {
          v17 = (char *)SeshatStatus;
          gaia::GaiaRequest::SetResponseCode(a2, SeshatStatus);
          return (int)(uintptr_t)(v17);
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), (char *)&unk_1B15112, (int)(uintptr_t)(&v21));
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), (char *)&unk_1B15112, (int)(uintptr_t)(&v21) + 1);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), (char *)&unk_1B15112, (int)(uintptr_t)(&v21) + 2);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v30, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v27, (int)(uintptr_t)(v30));
          g4_std::string::assign_str(&v25, &v27);
          v5 = (void *)(v27 - 12);
          if ( (uint32_t *)(v27 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v5);
          }
          Json::Value::Destroy((Json::Value::Self *)v30);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v31, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v28, (int)(uintptr_t)(v31));
          g4_std::string::assign_str(&v26, &v28);
          v6 = (void *)(v28 - 12);
          if ( (uint32_t *)(v28 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v6);
          }
          Json::Value::Destroy((Json::Value::Self *)v31);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "storage_admin", (int)(uintptr_t)(&v21) + 3);
          AccessToken = gaia::Gaia_Seshat::GetAccessToken((gaia::Gaia::Self *)(self), a2, (uint32_t *)(&v29), (int)(uintptr_t)(&v24));
          v8 = (void *)(v29 - 12);
          if ( (uint32_t *)(v29 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
          {
            v19 = (char *)AccessToken;
            g4_std::string::Rep::M_destroy(v8);
            AccessToken = (int)(uintptr_t)(v19);
          }
          if ( AccessToken == 0 )
          {
            Instance = gaia::Gaia::GetInstance();
            AccessToken = gaia::Seshat::CreateMatcher(
                            *(gaia::BaseServiceManager::Self **)(Instance + 8),
                            (int)(uintptr_t)(&v24),
                            (int)(uintptr_t)(&v25),
                            (int)(uintptr_t)(&v26),
                            (int)(uintptr_t)(a2));
          }
          v14 = (char *)AccessToken;
          gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
          result = (int)(uintptr_t)(v14);
          v10 = (void *)(v26 - 12);
          if ( (uint32_t *)(v26 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v10);
            result = (int)(uintptr_t)(v14);
          }
          v11 = (void *)(v25 - 12);
          if ( (uint32_t *)(v25 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
          {
            v18 = (char *)result;
            g4_std::string::Rep::M_destroy(v11);
            result = (int)(uintptr_t)(v18);
          }
          v12 = (void *)(v24 - 12);
          if ( (uint32_t *)(v24 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
          {
            v15 = (char *)result;
            g4_std::string::Rep::M_destroy(v12);
            return (int)(uintptr_t)(v15);
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
// Function: gaia::Gaia_Seshat::GetBatchProfiles  (binary VA: 0x145d950)
// Original: gaia::Gaia_Seshat::GetBatchProfiles
// ----------------------------------------------------------------------------
int gaia::Gaia_Seshat::GetBatchProfiles(gaia::Gaia_Seshat::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  int SeshatStatus;
  void *v5;
  void *v6;
  void *v7;
  int Instance;
  gaia::BaseJSONServiceResponse::Self *v9;
  gaia::BaseJSONServiceResponse::Self *v10;
  void *v11;
  void *v12;
  void *v13;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_ptr;
  typedef int _g4_t_v16;
  typedef int _g4_t_started;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef char *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v30;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef uint8_t _g4_t_v33[16];
  typedef uint8_t _g4_t_v34[16];
  typedef uint8_t _g4_t_v35[96];
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v16)) > _g4_s1 ? (40u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_started)) > _g4_s2 ? (40u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (58u + sizeof(_g4_t_v18)) > _g4_s3 ? (58u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v19)) > _g4_s4 ? (60u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v20)) > _g4_s5 ? (72u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v21)) > _g4_s6 ? (76u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v22)) > _g4_s7 ? (80u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (84u + sizeof(_g4_t_v23)) > _g4_s8 ? (84u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (88u + sizeof(_g4_t_v24)) > _g4_s9 ? (88u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_v25)) > _g4_s10 ? (92u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v26)) > _g4_s11 ? (96u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (100u + sizeof(_g4_t_v27)) > _g4_s12 ? (100u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (104u + sizeof(_g4_t_v28)) > _g4_s13 ? (104u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (108u + sizeof(_g4_t_v29)) > _g4_s14 ? (108u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (112u + sizeof(_g4_t_v30)) > _g4_s15 ? (112u + sizeof(_g4_t_v30)) : _g4_s15,
    _g4_s17 = (116u + sizeof(_g4_t_v31)) > _g4_s16 ? (116u + sizeof(_g4_t_v31)) : _g4_s16,
    _g4_s18 = (120u + sizeof(_g4_t_v32)) > _g4_s17 ? (120u + sizeof(_g4_t_v32)) : _g4_s17,
    _g4_s19 = (124u + sizeof(_g4_t_v33)) > _g4_s18 ? (124u + sizeof(_g4_t_v33)) : _g4_s18,
    _g4_s20 = (140u + sizeof(_g4_t_v34)) > _g4_s19 ? (140u + sizeof(_g4_t_v34)) : _g4_s19,
    _g4_s21 = (156u + sizeof(_g4_t_v35)) > _g4_s20 ? (156u + sizeof(_g4_t_v35)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 40u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 58u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 60u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 72u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 76u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 80u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 84u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 88u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 92u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 96u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 100u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 104u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 108u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 112u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 116u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 120u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 124u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 140u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 156u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "credentials", (int)(uintptr_t)(&v18));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v20), 4);
  v2 = (void *)(v20 - 12);
  if ( (uint32_t *)(v20 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "include_fields", (int)(uintptr_t)(&v18) + 1);
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v21), 4);
  v3 = (void *)(v21 - 12);
  if ( (uint32_t *)(v21 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) == 0 )
    return gaia::GaiaRequest::GetResponseCode(a2);
  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
  {
    gaia::GaiaRequest::SetOperationCode(a2, 1018);
    gaia::Gaia::GetInstance();
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v35, a2);
    started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v35);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v35);
    return started;
  }
  SeshatStatus = gaia::Gaia_Seshat::GetSeshatStatus(self);
  v16 = SeshatStatus;
  if ( SeshatStatus == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), (char *)&unk_1B15112, (int)(uintptr_t)(&v19));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), (char *)&unk_1B15112, (int)(uintptr_t)(&v19) + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), (char *)&unk_1B15112, (int)(uintptr_t)(&v19) + 2);
    v30 = nullptr;
    v31 = nullptr;
    v32 = 0;
    v25 = nullptr;
    v26 = 0;
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v33, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v27, (int)(uintptr_t)(v33));
    g4_std::string::assign_str(&v23, &v27);
    v5 = (void *)(v27 - 12);
    if ( (uint32_t *)(v27 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    Json::Value::Destroy((Json::Value::Self *)v33);
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v34, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v28, (int)(uintptr_t)(v34));
    g4_std::string::assign_str(&v24, &v28);
    v6 = (void *)(v28 - 12);
    if ( (uint32_t *)(v28 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    Json::Value::Destroy((Json::Value::Self *)v34);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "storage", (int)(uintptr_t)(&v19) + 3);
    started = gaia::Gaia_Seshat::GetAccessToken((gaia::Gaia::Self *)(self), a2, (uint32_t *)(&v29), (int)(uintptr_t)(&v22));
    v7 = (void *)(v29 - 12);
    if ( (uint32_t *)(v29 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    if ( started != 0 )
    {
      gaia::GaiaRequest::SetResponseCode(a2, started);
    }
    else
    {
      Instance = gaia::Gaia::GetInstance();
      started = gaia::Seshat::GetBatchProfiles(
                  *(gaia::BaseServiceManager::Self **)(Instance + 8),
                  (int)(uintptr_t)(&v22),
                  (void **)&v25,
                  &v26,
                  (int)(uintptr_t)(&v23),
                  (int)(uintptr_t)(&v24),
                  (int)(uintptr_t)(a2));
      if ( started == 0 )
        started = gaia::BaseServiceManager::ParseMessages(v25, v26, (int)(uintptr_t)(&v30), 21);
      gaia::GaiaRequest::SetResponse(a2, (const std::vector<gaia::BaseJSONServiceResponse::Self> *)&v30);
      gaia::GaiaRequest::SetResponseCode(a2, started);
      free(v25);
    }
    v9 = v31;
    v10 = v30;
    if ( v31 != v30 )
    {
      do
      {
        ptr = v10;
        v10 = (gaia::BaseJSONServiceResponse::Self *)((char *)v10 + 20);
        gaia::BaseJSONServiceResponse::Destroy(ptr);
      }
      while ( v9 != v10 );
      v10 = v30;
    }
    if ( v10 != nullptr )
      opDelete(v10);
    v11 = (void *)(v24 - 12);
    if ( (uint32_t *)(v24 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v11);
    }
    v12 = (void *)(v23 - 12);
    if ( (uint32_t *)(v23 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v12);
    }
    v13 = (void *)(v22 - 12);
    if ( (uint32_t *)(v22 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v13);
    }
    return started;
  }
  gaia::GaiaRequest::SetResponseCode(a2, SeshatStatus);
  return v16;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Seshat::GetProfileVisibility  (binary VA: 0x145dee0)
// Original: gaia::Gaia_Seshat::GetProfileVisibility
// ----------------------------------------------------------------------------
int gaia::Gaia_Seshat::GetProfileVisibility(gaia::Gaia_Seshat::Self *self, gaia::GaiaRequest::Self *a2)
{
  int SeshatStatus;
  void *v3;
  gaia::BaseJSONServiceResponse::Self *v4;
  gaia::BaseJSONServiceResponse::Self *v5;
  void *v6;
  int Instance;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_ptr;
  typedef int _g4_t_v10;
  typedef int _g4_t_AccessToken;
  typedef int _g4_t_started;
  typedef uint8_t _g4_t_v13[7];
  typedef char *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v17;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint8_t _g4_t_v20[96];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v10)) > _g4_s1 ? (44u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_AccessToken)) > _g4_s2 ? (44u + sizeof(_g4_t_AccessToken)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_started)) > _g4_s3 ? (44u + sizeof(_g4_t_started)) : _g4_s3,
    _g4_s5 = (61u + sizeof(_g4_t_v13)) > _g4_s4 ? (61u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (68u + sizeof(_g4_t_v14)) > _g4_s5 ? (68u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v15)) > _g4_s6 ? (72u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v16)) > _g4_s7 ? (76u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v17)) > _g4_s8 ? (80u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (84u + sizeof(_g4_t_v18)) > _g4_s9 ? (84u + sizeof(_g4_t_v18)) : _g4_s9,
    _g4_s11 = (88u + sizeof(_g4_t_v19)) > _g4_s10 ? (88u + sizeof(_g4_t_v19)) : _g4_s10,
    _g4_s12 = (92u + sizeof(_g4_t_v20)) > _g4_s11 ? (92u + sizeof(_g4_t_v20)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 44u);
  _g4_t_AccessToken &AccessToken = *reinterpret_cast<_g4_t_AccessToken *>(_g4_sf + 44u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 44u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 61u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 68u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 72u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 76u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 80u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 84u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 88u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 92u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
  {
    gaia::GaiaRequest::SetOperationCode(a2, 1017);
    gaia::Gaia::GetInstance();
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v20, a2);
    started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v20);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v20);
    return started;
  }
  else
  {
    SeshatStatus = gaia::Gaia_Seshat::GetSeshatStatus(self);
    v10 = SeshatStatus;
    if ( SeshatStatus == 0 )
    {
      v17 = nullptr;
      v18 = nullptr;
      v19 = 0;
      v14 = nullptr;
      v15 = 0;
      *(uint32_t *)&v13[3] = (uint32_t)(uintptr_t)(&dword_213B814);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "storage", (int)(uintptr_t)(v13));
      AccessToken = gaia::Gaia_Seshat::GetAccessToken((gaia::Gaia::Self *)(self), a2, (uint32_t *)(&v16), (int)(uintptr_t)(&v13[3]));
      v3 = (void *)(v16 - 12);
      if ( (uint32_t *)(v16 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v3);
      }
      if ( AccessToken != 0 )
      {
        gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
      }
      else
      {
        Instance = gaia::Gaia::GetInstance();
        AccessToken = gaia::Seshat::GetProfileVisibility(
                        *(gaia::BaseServiceManager::Self **)(Instance + 8),
                        (int)(uintptr_t)(&v13[3]),
                        (void **)&v14,
                        &v15,
                        (int)(uintptr_t)(a2));
        if ( AccessToken == 0 )
          AccessToken = gaia::BaseServiceManager::ParseMessages(v14, v15, (int)(uintptr_t)(&v17), 22);
        gaia::GaiaRequest::SetResponse(a2, (const std::vector<gaia::BaseJSONServiceResponse::Self> *)&v17);
        gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
        free(v14);
      }
      v4 = v18;
      v5 = v17;
      if ( v18 != v17 )
      {
        do
        {
          ptr = v5;
          v5 = (gaia::BaseJSONServiceResponse::Self *)((char *)v5 + 20);
          gaia::BaseJSONServiceResponse::Destroy(ptr);
        }
        while ( v4 != v5 );
        v5 = v17;
      }
      if ( v5 != nullptr )
        opDelete(v5);
      v6 = (void *)(*(uint32_t *)&v13[3] - 12);
      if ( (uint32_t *)(*(uint32_t *)&v13[3] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v13[3] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v6);
      }
      return AccessToken;
    }
    gaia::GaiaRequest::SetResponseCode(a2, SeshatStatus);
    return v10;
  }
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Seshat::SetProfileVisibilitySelector  (binary VA: 0x145e1a0)
// Original: gaia::Gaia_Seshat::SetProfileVisibilitySelector
// ----------------------------------------------------------------------------
int gaia::Gaia_Seshat::SetProfileVisibilitySelector(gaia::Gaia_Seshat::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  int SeshatStatus;
  void *v5;
  void *v6;
  int AccessToken;
  void *v8;
  int result;
  void *v10;
  void *v11;
  void *v12;
  int Instance;
  typedef char *_g4_t_v14;
  typedef char *_g4_t_v15;
  typedef char *_g4_t_started;
  typedef char *_g4_t_v17;
  typedef char *_g4_t_v18;
  typedef char *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef uint8_t _g4_t_v30[16];
  typedef uint8_t _g4_t_v31[16];
  typedef uint8_t _g4_t_v32[96];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (8u + sizeof(_g4_t_v14)) > _g4_s0 ? (8u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v15)) > _g4_s1 ? (8u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_started)) > _g4_s2 ? (8u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v17)) > _g4_s3 ? (8u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v18)) > _g4_s4 ? (8u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v19)) > _g4_s5 ? (8u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (30u + sizeof(_g4_t_v20)) > _g4_s6 ? (30u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v21)) > _g4_s7 ? (32u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v22)) > _g4_s8 ? (44u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v23)) > _g4_s9 ? (48u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v24)) > _g4_s10 ? (52u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v25)) > _g4_s11 ? (56u + sizeof(_g4_t_v25)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v26)) > _g4_s12 ? (60u + sizeof(_g4_t_v26)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v27)) > _g4_s13 ? (64u + sizeof(_g4_t_v27)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v28)) > _g4_s14 ? (68u + sizeof(_g4_t_v28)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v29)) > _g4_s15 ? (72u + sizeof(_g4_t_v29)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v30)) > _g4_s16 ? (76u + sizeof(_g4_t_v30)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v31)) > _g4_s17 ? (92u + sizeof(_g4_t_v31)) : _g4_s17,
    _g4_s19 = (108u + sizeof(_g4_t_v32)) > _g4_s18 ? (108u + sizeof(_g4_t_v32)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 30u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 44u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 56u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 60u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 64u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 68u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 72u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 76u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 92u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 108u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "selector", (int)(uintptr_t)(&v20));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v22), 4);
    v2 = (void *)(v22 - 12);
    if ( (uint32_t *)(v22 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "visibility", (int)(uintptr_t)(&v20) + 1);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v23), 4);
    v3 = (void *)(v23 - 12);
    if ( (uint32_t *)(v23 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 1016);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v32, a2);
        started = (char *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v32);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v32);
        return (int)(uintptr_t)(started);
      }
      else
      {
        SeshatStatus = gaia::Gaia_Seshat::GetSeshatStatus(self);
        if ( SeshatStatus != 0 )
        {
          v17 = (char *)SeshatStatus;
          gaia::GaiaRequest::SetResponseCode(a2, SeshatStatus);
          return (int)(uintptr_t)(v17);
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), (char *)&unk_1B15112, (int)(uintptr_t)(&v21));
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), (char *)&unk_1B15112, (int)(uintptr_t)(&v21) + 1);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), (char *)&unk_1B15112, (int)(uintptr_t)(&v21) + 2);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v30, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v27, (int)(uintptr_t)(v30));
          g4_std::string::assign_str(&v25, &v27);
          v5 = (void *)(v27 - 12);
          if ( (uint32_t *)(v27 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v5);
          }
          Json::Value::Destroy((Json::Value::Self *)v30);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v31, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v28, (int)(uintptr_t)(v31));
          g4_std::string::assign_str(&v26, &v28);
          v6 = (void *)(v28 - 12);
          if ( (uint32_t *)(v28 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v6);
          }
          Json::Value::Destroy((Json::Value::Self *)v31);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "storage", (int)(uintptr_t)(&v21) + 3);
          AccessToken = gaia::Gaia_Seshat::GetAccessToken((gaia::Gaia::Self *)(self), a2, &v29, (int)(uintptr_t)(&v24));
          v8 = (void *)(v29 - 12);
          if ( (uint32_t *)(v29 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
          {
            v19 = (char *)AccessToken;
            g4_std::string::Rep::M_destroy(v8);
            AccessToken = (int)(uintptr_t)(v19);
          }
          if ( AccessToken == 0 )
          {
            Instance = gaia::Gaia::GetInstance();
            AccessToken = gaia::Seshat::SetProfileVisibilitySelector(
                            *(gaia::BaseServiceManager::Self **)(Instance + 8),
                            (int)(uintptr_t)(&v24),
                            (int)(uintptr_t)(&v25),
                            (int)(uintptr_t)(&v26),
                            (int)(uintptr_t)(a2));
          }
          v14 = (char *)AccessToken;
          gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
          result = (int)(uintptr_t)(v14);
          v10 = (void *)(v26 - 12);
          if ( (uint32_t *)(v26 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v10);
            result = (int)(uintptr_t)(v14);
          }
          v11 = (void *)(v25 - 12);
          if ( (uint32_t *)(v25 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
          {
            v18 = (char *)result;
            g4_std::string::Rep::M_destroy(v11);
            result = (int)(uintptr_t)(v18);
          }
          v12 = (void *)(v24 - 12);
          if ( (uint32_t *)(v24 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
          {
            v15 = (char *)result;
            g4_std::string::Rep::M_destroy(v12);
            return (int)(uintptr_t)(v15);
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
// Function: gaia::Gaia_Seshat::SetProfileVisibility  (binary VA: 0x145e670)
// Original: gaia::Gaia_Seshat::SetProfileVisibility
// ----------------------------------------------------------------------------
int gaia::Gaia_Seshat::SetProfileVisibility(gaia::Gaia_Seshat::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  int SeshatStatus;
  void *v4;
  int AccessToken;
  void *v6;
  int result;
  void *v8;
  void *v9;
  int Instance;
  typedef char *_g4_t_v11;
  typedef char *_g4_t_v12;
  typedef char *_g4_t_started;
  typedef char *_g4_t_v14;
  typedef char *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint8_t _g4_t_v23[16];
  typedef uint8_t _g4_t_v24[80];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_started)) > _g4_s2 ? (12u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v14)) > _g4_s3 ? (12u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v15)) > _g4_s4 ? (12u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (31u + sizeof(_g4_t_v16)) > _g4_s5 ? (31u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v17)) > _g4_s6 ? (32u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v18)) > _g4_s7 ? (40u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v19)) > _g4_s8 ? (44u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v20)) > _g4_s9 ? (48u + sizeof(_g4_t_v20)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v21)) > _g4_s10 ? (52u + sizeof(_g4_t_v21)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v22)) > _g4_s11 ? (56u + sizeof(_g4_t_v22)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v23)) > _g4_s12 ? (60u + sizeof(_g4_t_v23)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v24)) > _g4_s13 ? (76u + sizeof(_g4_t_v24)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 31u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 48u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 52u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 56u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 76u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "visibility", (int)(uintptr_t)(&v16));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v18), 4);
    v2 = (void *)(v18 - 12);
    if ( (uint32_t *)(v18 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 1015);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v24, a2);
        started = (char *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v24);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v24);
        return (int)(uintptr_t)(started);
      }
      else
      {
        SeshatStatus = gaia::Gaia_Seshat::GetSeshatStatus(self);
        if ( SeshatStatus != 0 )
        {
          v14 = (char *)SeshatStatus;
          gaia::GaiaRequest::SetResponseCode(a2, SeshatStatus);
          return (int)(uintptr_t)(v14);
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), (char *)&unk_1B15112, (int)(uintptr_t)(&v17));
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), (char *)&unk_1B15112, (int)(uintptr_t)(&v17) + 1);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v23, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v21, (int)(uintptr_t)(v23));
          g4_std::string::assign_str(&v20, &v21);
          v4 = (void *)(v21 - 12);
          if ( (uint32_t *)(v21 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v4);
          }
          Json::Value::Destroy((Json::Value::Self *)v23);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "storage", (int)(uintptr_t)(&v17) + 2);
          AccessToken = gaia::Gaia_Seshat::GetAccessToken((gaia::Gaia::Self *)(self), a2, &v22, (int)(uintptr_t)(&v19));
          v6 = (void *)(v22 - 12);
          if ( (uint32_t *)(v22 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
          {
            v15 = (char *)AccessToken;
            g4_std::string::Rep::M_destroy(v6);
            AccessToken = (int)(uintptr_t)(v15);
          }
          if ( AccessToken == 0 )
          {
            Instance = gaia::Gaia::GetInstance();
            AccessToken = gaia::Seshat::SetProfileVisibility(
                            *(gaia::BaseServiceManager::Self **)(Instance + 8),
                            (int)(uintptr_t)(&v19),
                            (int)(uintptr_t)(&v20),
                            (int)(uintptr_t)(a2));
          }
          v11 = (char *)AccessToken;
          gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
          result = (int)(uintptr_t)(v11);
          v8 = (void *)(v20 - 12);
          if ( (uint32_t *)(v20 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v8);
            result = (int)(uintptr_t)(v11);
          }
          v9 = (void *)(v19 - 12);
          if ( (uint32_t *)(v19 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
          {
            v12 = (char *)result;
            g4_std::string::Rep::M_destroy(v9);
            return (int)(uintptr_t)(v12);
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
// Function: gaia::Gaia_Seshat::SetProfileVisibilityObject  (binary VA: 0x145ea00)
// Original: gaia::Gaia_Seshat::SetProfileVisibilityObject
// ----------------------------------------------------------------------------
int gaia::Gaia_Seshat::SetProfileVisibilityObject(gaia::Gaia_Seshat::Self *self, gaia::GaiaRequest::Self *a2)
{
  char IsInitialized;
  int result;
  void *v4;
  void *v5;
  int v6;
  int v7;
  int v8;
  int Instance;
  typedef int _g4_t_started;
  typedef int _g4_t_AccessToken;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint8_t _g4_t_v22[4];
  typedef int _g4_t_v23;
  typedef uint8_t _g4_t_v24[4];
  typedef int _g4_t_v25;
  typedef uint8_t _g4_t_v26[96];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (8u + sizeof(_g4_t_started)) > _g4_s0 ? (8u + sizeof(_g4_t_started)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_AccessToken)) > _g4_s1 ? (8u + sizeof(_g4_t_AccessToken)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v12)) > _g4_s2 ? (8u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (26u + sizeof(_g4_t_v13)) > _g4_s3 ? (26u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v14)) > _g4_s4 ? (28u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v15)) > _g4_s5 ? (32u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v16)) > _g4_s6 ? (36u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v17)) > _g4_s7 ? (40u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v18)) > _g4_s8 ? (44u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v19)) > _g4_s9 ? (48u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v20)) > _g4_s10 ? (52u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v21)) > _g4_s11 ? (56u + sizeof(_g4_t_v21)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v22)) > _g4_s12 ? (60u + sizeof(_g4_t_v22)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v23)) > _g4_s13 ? (64u + sizeof(_g4_t_v23)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v24)) > _g4_s14 ? (68u + sizeof(_g4_t_v24)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v25)) > _g4_s15 ? (72u + sizeof(_g4_t_v25)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v26)) > _g4_s16 ? (76u + sizeof(_g4_t_v26)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 8u);
  _g4_t_AccessToken &AccessToken = *reinterpret_cast<_g4_t_AccessToken *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 26u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 52u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 56u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 60u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 64u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 68u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 72u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 76u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "visibility", (int)(uintptr_t)(&v13));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v16), 4);
    v4 = (void *)(v16 - 12);
    if ( (uint32_t *)(v16 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "operation", (int)(uintptr_t)(&v13) + 1);
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
        gaia::GaiaRequest::SetOperationCode(a2, 1010);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v26, a2);
        started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v26);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v26);
        return started;
      }
      else
      {
        result = gaia::Gaia_Seshat::GetSeshatStatus(self);
        if ( result == 0 )
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), (char *)&unk_1B15112, (int)(uintptr_t)(&v14));
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), (char *)&unk_1B15112, (int)(uintptr_t)(&v14) + 1);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), (char *)&unk_1B15112, (int)(uintptr_t)(&v14) + 2);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "visibility", (int)(uintptr_t)(&v14) + 3);
          v6 = gaia::GaiaRequest::opIndex(a2, &v21);
          Json::Value::asString((Json::Value::Self *)v22, v6);
          g4_std::string::assign_str(&v20, v22);
          g4_std::string::Destroy(v22);
          g4_std::string::Destroy(&v21);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "operation", (int)(uintptr_t)(&v15));
          v7 = gaia::GaiaRequest::opIndex(a2, &v23);
          Json::Value::asString((Json::Value::Self *)v24, v7);
          g4_std::string::assign_str(&v19, v24);
          g4_std::string::Destroy(v24);
          g4_std::string::Destroy(&v23);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "storage", (int)(uintptr_t)(&v15) + 1);
          AccessToken = gaia::Gaia_Seshat::GetAccessToken((gaia::Gaia::Self *)(self), a2, &v25, (int)(uintptr_t)(&v18));
          g4_std::string::Destroy(&v25);
          if ( AccessToken != 0 )
          {
            gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
            v8 = AccessToken;
          }
          else
          {
            Instance = gaia::Gaia::GetInstance();
            v8 = gaia::Seshat::SetProfileVisibilityObject(
                   *(gaia::BaseServiceManager::Self **)(Instance + 8),
                   (int)(uintptr_t)(&v18),
                   (int)(uintptr_t)(&v19),
                   (int)(uintptr_t)(&v20),
                   (int)(uintptr_t)(a2));
          }
          v12 = v8;
          g4_std::string::Destroy(&v20);
          g4_std::string::Destroy(&v19);
          g4_std::string::Destroy(&v18);
          return v12;
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
// Function: gaia::Gaia_Seshat::DeleteProfile  (binary VA: 0x145edb0)
// Original: gaia::Gaia_Seshat::DeleteProfile
// ----------------------------------------------------------------------------
int gaia::Gaia_Seshat::DeleteProfile(gaia::Gaia_Seshat::Self *self, gaia::GaiaRequest::Self *a2)
{
  int SeshatStatus;
  int started;
  void *v4;
  void *v5;
  int Instance;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef uint8_t _g4_t_v11[80];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v9)) > _g4_s1 ? (4u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v10)) > _g4_s2 ? (8u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v11)) > _g4_s3 ? (12u + sizeof(_g4_t_v11)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
    {
      gaia::GaiaRequest::SetOperationCode(a2, 1009);
      gaia::Gaia::GetInstance();
      gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v11, a2);
      started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v11);
      gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v11);
    }
    else
    {
      SeshatStatus = gaia::Gaia_Seshat::GetSeshatStatus(self);
      started = SeshatStatus;
      if ( SeshatStatus != 0 )
      {
        gaia::GaiaRequest::SetResponseCode(a2, SeshatStatus);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), (char *)&unk_1B15112, (int)(uintptr_t)(&v8));
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "storage", (int)(uintptr_t)(&v8) + 1);
        started = gaia::Gaia_Seshat::GetAccessToken((gaia::Gaia::Self *)(self), a2, &v10, (int)(uintptr_t)(&v9));
        v4 = (void *)(v10 - 12);
        if ( (uint32_t *)(v10 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v4);
        }
        if ( started == 0 )
        {
          Instance = gaia::Gaia::GetInstance();
          started = gaia::Seshat::DeleteProfile(*(gaia::BaseServiceManager::Self **)(Instance + 8), (int)(uintptr_t)(&v9), (int)(uintptr_t)(a2));
        }
        gaia::GaiaRequest::SetResponseCode(a2, started);
        v5 = (void *)(v9 - 12);
        if ( (uint32_t *)(v9 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v5);
        }
      }
    }
  }
  else
  {
    started = -21;
    gaia::GaiaRequest::SetResponseCode(a2, -21);
  }
  return started;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Seshat::GetProfile  (binary VA: 0x145ef90)
// Original: gaia::Gaia_Seshat::GetProfile
// ----------------------------------------------------------------------------
int gaia::Gaia_Seshat::GetProfile(gaia::Gaia_Seshat::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  int SeshatStatus;
  void *v6;
  void *v7;
  Json::Value::Self *v8;
  bool isNull;
  void *v10;
  int Instance;
  gaia::BaseJSONServiceResponse::Self *v12;
  gaia::BaseJSONServiceResponse::Self *v13;
  void *v14;
  void *v15;
  void *v16;
  void *v17;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_ptr;
  typedef bool _g4_t_v20;
  typedef void *_g4_t_v21;
  typedef void *_g4_t_v22;
  typedef void *_g4_t_started;
  typedef int _g4_t_v24;
  typedef uint8_t _g4_t_v25[7];
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef char *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef char _g4_t_v38[4];
  typedef int _g4_t_v39;
  typedef void *_g4_t_v40;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v41;
  typedef int _g4_t_v42;
  typedef uint8_t _g4_t_v43[16];
  typedef uint8_t _g4_t_v44[16];
  typedef uint8_t _g4_t_v45[16];
  typedef uint8_t _g4_t_v46[96];
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v20)) > _g4_s1 ? (32u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v21)) > _g4_s2 ? (36u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v22)) > _g4_s3 ? (36u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_started)) > _g4_s4 ? (36u + sizeof(_g4_t_started)) : _g4_s4,
    _g4_s6 = (55u + sizeof(_g4_t_v24)) > _g4_s5 ? (55u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v25)) > _g4_s6 ? (56u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v26)) > _g4_s7 ? (72u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v27)) > _g4_s8 ? (76u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v28)) > _g4_s9 ? (80u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v29)) > _g4_s10 ? (84u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (88u + sizeof(_g4_t_v30)) > _g4_s11 ? (88u + sizeof(_g4_t_v30)) : _g4_s11,
    _g4_s13 = (92u + sizeof(_g4_t_v31)) > _g4_s12 ? (92u + sizeof(_g4_t_v31)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v32)) > _g4_s13 ? (96u + sizeof(_g4_t_v32)) : _g4_s13,
    _g4_s15 = (100u + sizeof(_g4_t_v33)) > _g4_s14 ? (100u + sizeof(_g4_t_v33)) : _g4_s14,
    _g4_s16 = (104u + sizeof(_g4_t_v34)) > _g4_s15 ? (104u + sizeof(_g4_t_v34)) : _g4_s15,
    _g4_s17 = (108u + sizeof(_g4_t_v35)) > _g4_s16 ? (108u + sizeof(_g4_t_v35)) : _g4_s16,
    _g4_s18 = (112u + sizeof(_g4_t_v36)) > _g4_s17 ? (112u + sizeof(_g4_t_v36)) : _g4_s17,
    _g4_s19 = (116u + sizeof(_g4_t_v37)) > _g4_s18 ? (116u + sizeof(_g4_t_v37)) : _g4_s18,
    _g4_s20 = (120u + sizeof(_g4_t_v38)) > _g4_s19 ? (120u + sizeof(_g4_t_v38)) : _g4_s19,
    _g4_s21 = (124u + sizeof(_g4_t_v39)) > _g4_s20 ? (124u + sizeof(_g4_t_v39)) : _g4_s20,
    _g4_s22 = (128u + sizeof(_g4_t_v40)) > _g4_s21 ? (128u + sizeof(_g4_t_v40)) : _g4_s21,
    _g4_s23 = (132u + sizeof(_g4_t_v41)) > _g4_s22 ? (132u + sizeof(_g4_t_v41)) : _g4_s22,
    _g4_s24 = (136u + sizeof(_g4_t_v42)) > _g4_s23 ? (136u + sizeof(_g4_t_v42)) : _g4_s23,
    _g4_s25 = (140u + sizeof(_g4_t_v43)) > _g4_s24 ? (140u + sizeof(_g4_t_v43)) : _g4_s24,
    _g4_s26 = (156u + sizeof(_g4_t_v44)) > _g4_s25 ? (156u + sizeof(_g4_t_v44)) : _g4_s25,
    _g4_s27 = (172u + sizeof(_g4_t_v45)) > _g4_s26 ? (172u + sizeof(_g4_t_v45)) : _g4_s26,
    _g4_s28 = (188u + sizeof(_g4_t_v46)) > _g4_s27 ? (188u + sizeof(_g4_t_v46)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 55u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 56u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 72u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 76u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 80u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 84u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 88u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 92u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 96u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 100u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 104u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 108u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 112u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 116u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 120u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 124u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 128u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 132u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 136u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 140u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 156u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 172u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 188u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "credential", (int)(uintptr_t)(&v24));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v26), 4);
  v2 = (void *)(v26 - 12);
  if ( (uint32_t *)(v26 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "include_fields", (int)(uintptr_t)(v25));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v27), 4);
  v3 = (void *)(v27 - 12);
  if ( (uint32_t *)(v27 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "selector", (int)(uintptr_t)(&v25[1]));
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v28), 4);
  v4 = (void *)(v28 - 12);
  if ( (uint32_t *)(v28 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) == 0 )
    return gaia::GaiaRequest::GetResponseCode(a2);
  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
  {
    gaia::GaiaRequest::SetOperationCode(a2, 1008);
    gaia::Gaia::GetInstance();
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v46, a2);
    started = (void *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v46);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v46);
    return (int)(uintptr_t)(started);
  }
  SeshatStatus = gaia::Gaia_Seshat::GetSeshatStatus(self);
  v21 = (void *)SeshatStatus;
  if ( SeshatStatus == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), (char *)&unk_1B15112, (int)(uintptr_t)(&v25[2]));
    v30 = (int)(uintptr_t)(&dword_213B814);
    v31 = (int)(uintptr_t)(&dword_213B814);
    v32 = (int)(uintptr_t)(&dword_213B814);
    v40 = nullptr;
    v41 = nullptr;
    v42 = 0;
    v33 = nullptr;
    v34 = 0;
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v43, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v35, (int)(uintptr_t)(v43));
    g4_std::string::assign_str(&v30, &v35);
    v6 = (void *)(v35 - 12);
    if ( (uint32_t *)(v35 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v35 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    Json::Value::Destroy((Json::Value::Self *)v43);
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v44, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v36, (int)(uintptr_t)(v44));
    g4_std::string::assign_str(&v31, &v36);
    v7 = (void *)(v36 - 12);
    if ( (uint32_t *)(v36 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v36 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    Json::Value::Destroy((Json::Value::Self *)v44);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "selector", (int)(uintptr_t)(&v25[3]));
    v8 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v37);
    isNull = Json::Value::isNull(v8);
    v22 = (void *)(v37 - 12);
    if ( (uint32_t *)(v37 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
    {
      v20 = isNull;
      g4_std::string::Rep::M_destroy(v22);
      isNull = v20;
    }
    if ( !isNull )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v45, (const char *)a2);
      Json::Value::asString((Json::Value::Self *)v38, (int)(uintptr_t)(v45));
      g4_std::string::assign_str(&v32, v38);
      g4_std::string::Destroy(v38);
      Json::Value::Destroy((Json::Value::Self *)v45);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "storage", (int)(uintptr_t)(&v25[4]));
    started = (void *)gaia::Gaia_Seshat::GetAccessToken((gaia::Gaia::Self *)(self), a2, &v39, (int)(uintptr_t)(&v29));
    v10 = (void *)(v39 - 12);
    if ( (uint32_t *)(v39 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v10);
    }
    if ( started != nullptr )
    {
      gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(started));
    }
    else
    {
      Instance = gaia::Gaia::GetInstance();
      started = (void *)gaia::Seshat::GetProfile(
                          *(gaia::BaseServiceManager::Self **)(Instance + 8),
                          (int)(uintptr_t)(&v29),
                          (int)(uintptr_t)(&v30),
                          (void **)&v33,
                          &v34,
                          (int)(uintptr_t)(&v32),
                          (int)(uintptr_t)(&v31),
                          (int)(uintptr_t)(a2));
      if ( started == nullptr )
        started = (void *)gaia::BaseServiceManager::ParseMessages(v33, v34, (int)(uintptr_t)(&v40), 21);
      gaia::GaiaRequest::SetResponse(a2, (const std::vector<gaia::BaseJSONServiceResponse::Self> *)&v40);
      gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(started));
      free(v33);
    }
    v12 = v41;
    v13 = (gaia::BaseJSONServiceResponse::Self *)v40;
    if ( v41 != v40 )
    {
      do
      {
        ptr = v13;
        v13 = (gaia::BaseJSONServiceResponse::Self *)((char *)v13 + 20);
        gaia::BaseJSONServiceResponse::Destroy(ptr);
      }
      while ( v12 != v13 );
      v13 = (gaia::BaseJSONServiceResponse::Self *)v40;
    }
    if ( v13 != nullptr )
      opDelete(v13);
    v14 = (void *)(v32 - 12);
    if ( (uint32_t *)(v32 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v32 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v14);
    }
    v15 = (void *)(v31 - 12);
    if ( (uint32_t *)(v31 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v15);
    }
    v16 = (void *)(v30 - 12);
    if ( (uint32_t *)(v30 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v16);
    }
    v17 = (void *)(v29 - 12);
    if ( (uint32_t *)(v29 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v17);
    }
    return (int)(uintptr_t)(started);
  }
  gaia::GaiaRequest::SetResponseCode(a2, SeshatStatus);
  return (int)(uintptr_t)(v21);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Seshat::SetProfile  (binary VA: 0x145f6a0)
// Original: gaia::Gaia_Seshat::SetProfile
// ----------------------------------------------------------------------------
int gaia::Gaia_Seshat::SetProfile(gaia::Gaia_Seshat::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  void *v6;
  int SeshatStatus;
  void *v8;
  void *v9;
  Json::Value::Self *v10;
  bool isNull;
  Json::Value::Self *v12;
  bool v13;
  Json::Value::Self *v14;
  bool v15;
  int *v16;
  int v17;
  int Instance;
  int result;
  void *v20;
  void *v21;
  void *v22;
  void *v23;
  void *v24;
  typedef bool _g4_t_v25;
  typedef Json::Value::Self *_g4_t_AccessToken;
  typedef Json::Value::Self *_g4_t_v27;
  typedef Json::Value::Self *_g4_t_v28;
  typedef Json::Value::Self *_g4_t_started;
  typedef Json::Value::Self *_g4_t_v30;
  typedef Json::Value::Self *_g4_t_v31;
  typedef Json::Value::Self *_g4_t_v32;
  typedef Json::Value::Self *_g4_t_v33;
  typedef bool _g4_t_v34;
  typedef bool _g4_t_v35;
  typedef char *_g4_t_v36;
  typedef char *_g4_t_v37;
  typedef void *_g4_t_v38;
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
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef uint8_t _g4_t_v58[4];
  typedef int _g4_t_v59;
  typedef uint8_t _g4_t_v60[4];
  typedef int _g4_t_v61;
  typedef uint8_t _g4_t_v62[4];
  typedef int _g4_t_v63;
  typedef uint8_t _g4_t_v64[16];
  typedef uint8_t _g4_t_v65[16];
  typedef uint8_t _g4_t_v66[16];
  typedef uint8_t _g4_t_v67[16];
  typedef uint8_t _g4_t_v68[16];
  typedef uint8_t _g4_t_v69[96];
  enum : size_t {
    _g4_s0 = 400u,
    _g4_s1 = (4u + sizeof(_g4_t_v25)) > _g4_s0 ? (4u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_AccessToken)) > _g4_s1 ? (8u + sizeof(_g4_t_AccessToken)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v27)) > _g4_s2 ? (8u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v28)) > _g4_s3 ? (8u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_started)) > _g4_s4 ? (8u + sizeof(_g4_t_started)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v30)) > _g4_s5 ? (8u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v31)) > _g4_s6 ? (8u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v32)) > _g4_s7 ? (8u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v33)) > _g4_s8 ? (8u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v34)) > _g4_s9 ? (8u + sizeof(_g4_t_v34)) : _g4_s9,
    _g4_s11 = (8u + sizeof(_g4_t_v35)) > _g4_s10 ? (8u + sizeof(_g4_t_v35)) : _g4_s10,
    _g4_s12 = (12u + sizeof(_g4_t_v36)) > _g4_s11 ? (12u + sizeof(_g4_t_v36)) : _g4_s11,
    _g4_s13 = (12u + sizeof(_g4_t_v37)) > _g4_s12 ? (12u + sizeof(_g4_t_v37)) : _g4_s12,
    _g4_s14 = (16u + sizeof(_g4_t_v38)) > _g4_s13 ? (16u + sizeof(_g4_t_v38)) : _g4_s13,
    _g4_s15 = (46u + sizeof(_g4_t_v39)) > _g4_s14 ? (46u + sizeof(_g4_t_v39)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v40)) > _g4_s15 ? (48u + sizeof(_g4_t_v40)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v41)) > _g4_s16 ? (52u + sizeof(_g4_t_v41)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v42)) > _g4_s17 ? (56u + sizeof(_g4_t_v42)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v43)) > _g4_s18 ? (60u + sizeof(_g4_t_v43)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v44)) > _g4_s19 ? (76u + sizeof(_g4_t_v44)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v45)) > _g4_s20 ? (80u + sizeof(_g4_t_v45)) : _g4_s20,
    _g4_s22 = (84u + sizeof(_g4_t_v46)) > _g4_s21 ? (84u + sizeof(_g4_t_v46)) : _g4_s21,
    _g4_s23 = (88u + sizeof(_g4_t_v47)) > _g4_s22 ? (88u + sizeof(_g4_t_v47)) : _g4_s22,
    _g4_s24 = (92u + sizeof(_g4_t_v48)) > _g4_s23 ? (92u + sizeof(_g4_t_v48)) : _g4_s23,
    _g4_s25 = (96u + sizeof(_g4_t_v49)) > _g4_s24 ? (96u + sizeof(_g4_t_v49)) : _g4_s24,
    _g4_s26 = (100u + sizeof(_g4_t_v50)) > _g4_s25 ? (100u + sizeof(_g4_t_v50)) : _g4_s25,
    _g4_s27 = (104u + sizeof(_g4_t_v51)) > _g4_s26 ? (104u + sizeof(_g4_t_v51)) : _g4_s26,
    _g4_s28 = (108u + sizeof(_g4_t_v52)) > _g4_s27 ? (108u + sizeof(_g4_t_v52)) : _g4_s27,
    _g4_s29 = (112u + sizeof(_g4_t_v53)) > _g4_s28 ? (112u + sizeof(_g4_t_v53)) : _g4_s28,
    _g4_s30 = (116u + sizeof(_g4_t_v54)) > _g4_s29 ? (116u + sizeof(_g4_t_v54)) : _g4_s29,
    _g4_s31 = (120u + sizeof(_g4_t_v55)) > _g4_s30 ? (120u + sizeof(_g4_t_v55)) : _g4_s30,
    _g4_s32 = (124u + sizeof(_g4_t_v56)) > _g4_s31 ? (124u + sizeof(_g4_t_v56)) : _g4_s31,
    _g4_s33 = (128u + sizeof(_g4_t_v57)) > _g4_s32 ? (128u + sizeof(_g4_t_v57)) : _g4_s32,
    _g4_s34 = (132u + sizeof(_g4_t_v58)) > _g4_s33 ? (132u + sizeof(_g4_t_v58)) : _g4_s33,
    _g4_s35 = (136u + sizeof(_g4_t_v59)) > _g4_s34 ? (136u + sizeof(_g4_t_v59)) : _g4_s34,
    _g4_s36 = (140u + sizeof(_g4_t_v60)) > _g4_s35 ? (140u + sizeof(_g4_t_v60)) : _g4_s35,
    _g4_s37 = (144u + sizeof(_g4_t_v61)) > _g4_s36 ? (144u + sizeof(_g4_t_v61)) : _g4_s36,
    _g4_s38 = (148u + sizeof(_g4_t_v62)) > _g4_s37 ? (148u + sizeof(_g4_t_v62)) : _g4_s37,
    _g4_s39 = (152u + sizeof(_g4_t_v63)) > _g4_s38 ? (152u + sizeof(_g4_t_v63)) : _g4_s38,
    _g4_s40 = (156u + sizeof(_g4_t_v64)) > _g4_s39 ? (156u + sizeof(_g4_t_v64)) : _g4_s39,
    _g4_s41 = (172u + sizeof(_g4_t_v65)) > _g4_s40 ? (172u + sizeof(_g4_t_v65)) : _g4_s40,
    _g4_s42 = (188u + sizeof(_g4_t_v66)) > _g4_s41 ? (188u + sizeof(_g4_t_v66)) : _g4_s41,
    _g4_s43 = (204u + sizeof(_g4_t_v67)) > _g4_s42 ? (204u + sizeof(_g4_t_v67)) : _g4_s42,
    _g4_s44 = (220u + sizeof(_g4_t_v68)) > _g4_s43 ? (220u + sizeof(_g4_t_v68)) : _g4_s43,
    _g4_s45 = (236u + sizeof(_g4_t_v69)) > _g4_s44 ? (236u + sizeof(_g4_t_v69)) : _g4_s44
  };
  alignas(16) uint8_t _g4_sf[_g4_s45];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_AccessToken &AccessToken = *reinterpret_cast<_g4_t_AccessToken *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 8u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 8u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 8u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 8u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 8u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 8u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 8u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 12u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 16u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 46u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 48u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 52u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 56u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 60u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 76u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 80u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 84u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 88u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 92u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 96u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 100u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 104u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 108u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 112u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 116u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 120u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 124u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 128u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 132u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 136u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 140u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 144u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 148u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 152u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 156u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 172u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 188u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 204u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 220u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 236u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), "object", (int)(uintptr_t)(&v39));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v44), 4);
    v2 = (void *)(v44 - 12);
    if ( (uint32_t *)(v44 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v44 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "credential", (int)(uintptr_t)(&v39) + 1);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v45), 4);
    v3 = (void *)(v45 - 12);
    if ( (uint32_t *)(v45 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), "selector", (int)(uintptr_t)(&v40));
    gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v46), 4);
    v4 = (void *)(v46 - 12);
    if ( (uint32_t *)(v46 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v46 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), "operation", (int)(uintptr_t)(&v40) + 1);
    gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v47), 4);
    v5 = (void *)(v47 - 12);
    if ( (uint32_t *)(v47 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v47 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v48), "visibility", (int)(uintptr_t)(&v40) + 2);
    gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v48), 1);
    v6 = (void *)(v48 - 12);
    if ( (uint32_t *)(v48 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v48 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 1007);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v69, a2);
        started = (Json::Value::Self *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v69);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v69);
        return (int)(uintptr_t)(started);
      }
      else
      {
        SeshatStatus = gaia::Gaia_Seshat::GetSeshatStatus(self);
        if ( SeshatStatus != 0 )
        {
          v30 = (Json::Value::Self *)SeshatStatus;
          gaia::GaiaRequest::SetResponseCode(a2, SeshatStatus);
          return (int)(uintptr_t)(v30);
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v49), (char *)&unk_1B15112, (int)(uintptr_t)(&v40) + 3);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v50), (char *)&unk_1B15112, (int)(uintptr_t)(&v41));
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v51), (char *)&unk_1B15112, (int)(uintptr_t)(&v41) + 1);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v52), (char *)&unk_1B15112, (int)(uintptr_t)(&v41) + 2);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v53), (char *)&unk_1B15112, (int)(uintptr_t)(&v41) + 3);
          v54 = 4;
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v64, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v55, (int)(uintptr_t)(v64));
          g4_std::string::assign_str(&v53, &v55);
          v8 = (void *)(v55 - 12);
          if ( (uint32_t *)(v55 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v55 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v8);
          }
          Json::Value::Destroy((Json::Value::Self *)v64);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v65, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v56, (int)(uintptr_t)(v65));
          g4_std::string::assign_str(&v50, &v56);
          v9 = (void *)(v56 - 12);
          if ( (uint32_t *)(v56 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v56 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v9);
          }
          Json::Value::Destroy((Json::Value::Self *)v65);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v57), "selector", (int)(uintptr_t)(&v42));
          v10 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v57);
          isNull = Json::Value::isNull(v10);
          v38 = (void *)(v57 - 12);
          if ( (uint32_t *)(v57 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v57 - 4), 0xFFFFFFFF) <= 0 )
          {
            v25 = isNull;
            g4_std::string::Rep::M_destroy(v38);
            isNull = v25;
          }
          if ( !isNull )
          {
            gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v66, (const char *)a2);
            Json::Value::asString((Json::Value::Self *)v58, (int)(uintptr_t)(v66));
            g4_std::string::assign_str(&v51, v58);
            g4_std::string::Destroy(v58);
            Json::Value::Destroy((Json::Value::Self *)v66);
          }
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v59), "operation", (int)(uintptr_t)(&v42) + 1);
          v12 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v59);
          v13 = Json::Value::isNull(v12);
          v36 = (char *)(v59 - 12);
          if ( (uint32_t *)(v59 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v59 - 4), 0xFFFFFFFF) <= 0 )
          {
            v35 = v13;
            g4_std::string::Rep::M_destroy(v36);
            v13 = v35;
          }
          if ( !v13 )
          {
            gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v67, (const char *)a2);
            Json::Value::asString((Json::Value::Self *)v60, (int)(uintptr_t)(v67));
            g4_std::string::assign_str(&v52, v60);
            g4_std::string::Destroy(v60);
            Json::Value::Destroy((Json::Value::Self *)v67);
          }
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v61), "visibility", (int)(uintptr_t)(&v42) + 2);
          v14 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v61);
          v15 = Json::Value::isNull(v14);
          v37 = (char *)(v61 - 12);
          if ( (uint32_t *)(v61 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v61 - 4), 0xFFFFFFFF) <= 0 )
          {
            v34 = v15;
            g4_std::string::Rep::M_destroy(v37);
            v15 = v34;
          }
          if ( !v15 )
          {
            gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v68, (const char *)a2);
            v54 = Json::Value::asInt((Json::Value::Self *)v68);
            Json::Value::Destroy((Json::Value::Self *)v68);
          }
          if ( v54 != 0 )
          {
            v16 = &v63;
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v63), "storage", (int)(uintptr_t)(&v43));
          }
          else
          {
            v16 = (int *)v62;
            g4_std::string::construct_from_cstr((int)(uintptr_t)(v62), "storage storage_restricted", (int)(uintptr_t)(&v42) + 3);
          }
          AccessToken = (Json::Value::Self *)gaia::Gaia_Seshat::GetAccessToken((gaia::Gaia::Self *)(self), a2, v16, (int)(uintptr_t)(&v49));
          g4_std::string::Destroy(v16);
          v17 = (int)(uintptr_t)(AccessToken);
          if ( AccessToken == nullptr )
          {
            Instance = gaia::Gaia::GetInstance();
            v17 = gaia::Seshat::SetProfile(
                    *(gaia::BaseServiceManager::Self **)(Instance + 8),
                    (int)(uintptr_t)(&v49),
                    (int)(uintptr_t)(&v53),
                    (int)(uintptr_t)(&v54),
                    (int)(uintptr_t)(&v50),
                    (int)(uintptr_t)(&v51),
                    (int)(uintptr_t)(&v52),
                    0);
          }
          v27 = (Json::Value::Self *)v17;
          gaia::GaiaRequest::SetResponseCode(a2, v17);
          result = (int)(uintptr_t)(v27);
          v20 = (void *)(v53 - 12);
          if ( (uint32_t *)(v53 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v53 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v20);
            result = (int)(uintptr_t)(v27);
          }
          v21 = (void *)(v52 - 12);
          if ( (uint32_t *)(v52 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v52 - 4), 0xFFFFFFFF) <= 0 )
          {
            v33 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v21);
            result = (int)(uintptr_t)(v33);
          }
          v22 = (void *)(v51 - 12);
          if ( (uint32_t *)(v51 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v51 - 4), 0xFFFFFFFF) <= 0 )
          {
            v32 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v22);
            result = (int)(uintptr_t)(v32);
          }
          v23 = (void *)(v50 - 12);
          if ( (uint32_t *)(v50 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v50 - 4), 0xFFFFFFFF) <= 0 )
          {
            v31 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v23);
            result = (int)(uintptr_t)(v31);
          }
          v24 = (void *)(v49 - 12);
          if ( (uint32_t *)(v49 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v49 - 4), 0xFFFFFFFF) <= 0 )
          {
            v28 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v24);
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
// Function: gaia::Gaia_Seshat::DeleteData  (binary VA: 0x14600b0)
// Original: gaia::Gaia_Seshat::DeleteData
// ----------------------------------------------------------------------------
int gaia::Gaia_Seshat::DeleteData(gaia::Gaia_Seshat::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  int SeshatStatus;
  void *v4;
  int AccessToken;
  void *v6;
  int result;
  void *v8;
  void *v9;
  int Instance;
  typedef char *_g4_t_v11;
  typedef char *_g4_t_v12;
  typedef char *_g4_t_started;
  typedef char *_g4_t_v14;
  typedef char *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint8_t _g4_t_v23[16];
  typedef uint8_t _g4_t_v24[80];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_started)) > _g4_s2 ? (12u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v14)) > _g4_s3 ? (12u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v15)) > _g4_s4 ? (12u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (31u + sizeof(_g4_t_v16)) > _g4_s5 ? (31u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v17)) > _g4_s6 ? (32u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v18)) > _g4_s7 ? (40u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v19)) > _g4_s8 ? (44u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v20)) > _g4_s9 ? (48u + sizeof(_g4_t_v20)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v21)) > _g4_s10 ? (52u + sizeof(_g4_t_v21)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v22)) > _g4_s11 ? (56u + sizeof(_g4_t_v22)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v23)) > _g4_s12 ? (60u + sizeof(_g4_t_v23)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v24)) > _g4_s13 ? (76u + sizeof(_g4_t_v24)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 31u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 48u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 52u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 56u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 76u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "key", (int)(uintptr_t)(&v16));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v18), 4);
    v2 = (void *)(v18 - 12);
    if ( (uint32_t *)(v18 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 1004);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v24, a2);
        started = (char *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v24);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v24);
        return (int)(uintptr_t)(started);
      }
      else
      {
        SeshatStatus = gaia::Gaia_Seshat::GetSeshatStatus(self);
        if ( SeshatStatus != 0 )
        {
          v14 = (char *)SeshatStatus;
          gaia::GaiaRequest::SetResponseCode(a2, SeshatStatus);
          return (int)(uintptr_t)(v14);
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), (char *)&unk_1B15112, (int)(uintptr_t)(&v17));
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), (char *)&unk_1B15112, (int)(uintptr_t)(&v17) + 1);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v23, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v21, (int)(uintptr_t)(v23));
          g4_std::string::assign_str(&v20, &v21);
          v4 = (void *)(v21 - 12);
          if ( (uint32_t *)(v21 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v4);
          }
          Json::Value::Destroy((Json::Value::Self *)v23);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "storage", (int)(uintptr_t)(&v17) + 2);
          AccessToken = gaia::Gaia_Seshat::GetAccessToken((gaia::Gaia::Self *)(self), a2, &v22, (int)(uintptr_t)(&v19));
          v6 = (void *)(v22 - 12);
          if ( (uint32_t *)(v22 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
          {
            v15 = (char *)AccessToken;
            g4_std::string::Rep::M_destroy(v6);
            AccessToken = (int)(uintptr_t)(v15);
          }
          if ( AccessToken == 0 )
          {
            Instance = gaia::Gaia::GetInstance();
            AccessToken = gaia::Seshat::DeleteData(
                            *(gaia::BaseServiceManager::Self **)(Instance + 8),
                            (int)(uintptr_t)(&v19),
                            (int)(uintptr_t)(&v20),
                            (int)(uintptr_t)(a2));
          }
          v11 = (char *)AccessToken;
          gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
          result = (int)(uintptr_t)(v11);
          v8 = (void *)(v20 - 12);
          if ( (uint32_t *)(v20 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v8);
            result = (int)(uintptr_t)(v11);
          }
          v9 = (void *)(v19 - 12);
          if ( (uint32_t *)(v19 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
          {
            v12 = (char *)result;
            g4_std::string::Rep::M_destroy(v9);
            return (int)(uintptr_t)(v12);
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
// Function: gaia::Gaia_Seshat::GetData  (binary VA: 0x1460440)
// Original: gaia::Gaia_Seshat::GetData
// ----------------------------------------------------------------------------
int gaia::Gaia_Seshat::GetData(gaia::Gaia_Seshat::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  int SeshatStatus;
  int v5;
  void *v6;
  void *v7;
  int started;
  void *v9;
  int Instance;
  void *v11;
  void *v12;
  void *v13;
  void *v14;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
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
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef uint8_t _g4_t_v31[16];
  typedef uint8_t _g4_t_v32[16];
  typedef uint8_t _g4_t_v33[96];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (11u + sizeof(_g4_t_v16)) > _g4_s0 ? (11u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v17)) > _g4_s1 ? (12u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v18)) > _g4_s2 ? (16u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v19)) > _g4_s3 ? (28u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v20)) > _g4_s4 ? (32u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v21)) > _g4_s5 ? (36u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v22)) > _g4_s6 ? (40u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v23)) > _g4_s7 ? (44u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_ptr)) > _g4_s8 ? (48u + sizeof(_g4_t_ptr)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v25)) > _g4_s9 ? (52u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v26)) > _g4_s10 ? (56u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v27)) > _g4_s11 ? (60u + sizeof(_g4_t_v27)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v28)) > _g4_s12 ? (64u + sizeof(_g4_t_v28)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v29)) > _g4_s13 ? (68u + sizeof(_g4_t_v29)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v30)) > _g4_s14 ? (72u + sizeof(_g4_t_v30)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v31)) > _g4_s15 ? (76u + sizeof(_g4_t_v31)) : _g4_s15,
    _g4_s17 = (92u + sizeof(_g4_t_v32)) > _g4_s16 ? (92u + sizeof(_g4_t_v32)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v33)) > _g4_s17 ? (108u + sizeof(_g4_t_v33)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 11u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 48u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 52u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 64u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 68u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 72u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 76u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 92u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 108u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    started = -21;
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return started;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "key", (int)(uintptr_t)(&v16));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v19), 4);
  v2 = (void *)(v19 - 12);
  if ( (uint32_t *)(v19 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "credential", (int)(uintptr_t)(&v17));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v20), 4);
  v3 = (void *)(v20 - 12);
  if ( (uint32_t *)(v20 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) == 0 )
    return gaia::GaiaRequest::GetResponseCode(a2);
  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
  {
    gaia::GaiaRequest::SetOperationCode(a2, 1002);
    gaia::Gaia::GetInstance();
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v33, a2);
    started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v33);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v33);
    return started;
  }
  SeshatStatus = gaia::Gaia_Seshat::GetSeshatStatus(self);
  v5 = SeshatStatus;
  if ( SeshatStatus == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), (char *)&unk_1B15112, (int)(uintptr_t)(&v17) + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), (char *)&unk_1B15112, (int)(uintptr_t)(&v17) + 2);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), (char *)&unk_1B15112, (int)(uintptr_t)(&v17) + 3);
    ptr = nullptr;
    v25 = 0;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), (char *)&unk_1B15112, (int)(uintptr_t)(&v18));
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v31, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v27, (int)(uintptr_t)(v31));
    g4_std::string::assign_str(&v22, &v27);
    v6 = (void *)(v27 - 12);
    if ( (uint32_t *)(v27 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    Json::Value::Destroy((Json::Value::Self *)v31);
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v32, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v28, (int)(uintptr_t)(v32));
    g4_std::string::assign_str(&v23, &v28);
    v7 = (void *)(v28 - 12);
    if ( (uint32_t *)(v28 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    Json::Value::Destroy((Json::Value::Self *)v32);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "storage", (int)(uintptr_t)(&v18) + 1);
    started = gaia::Gaia_Seshat::GetAccessToken((gaia::Gaia::Self *)(self), a2, &v29, (int)(uintptr_t)(&v21));
    v9 = (void *)(v29 - 12);
    if ( (uint32_t *)(v29 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v9);
    }
    if ( started != 0 )
    {
      gaia::GaiaRequest::SetResponseCode(a2, started);
    }
    else
    {
      Instance = gaia::Gaia::GetInstance();
      started = gaia::Seshat::GetData(
                  *(gaia::BaseServiceManager::Self **)(Instance + 8),
                  (int)(uintptr_t)(&v21),
                  (int)(uintptr_t)(&v22),
                  &ptr,
                  &v25,
                  (int)(uintptr_t)(&v23),
                  (int)(uintptr_t)(a2));
      sub_193A970((int)(uintptr_t)(&v30), ptr, v25, (int)(uintptr_t)(&v18) + 2);
      g4_std::string::assign_str(&v26, &v30);
      g4_std::string::Destroy(&v30);
      gaia::GaiaRequest::SetResponse(a2, &v26);
      gaia::GaiaRequest::SetResponseCode(a2, started);
      free(ptr);
    }
    v11 = (void *)(v26 - 12);
    if ( (uint32_t *)(v26 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v11);
    }
    v12 = (void *)(v23 - 12);
    if ( (uint32_t *)(v23 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v12);
    }
    v13 = (void *)(v22 - 12);
    if ( (uint32_t *)(v22 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v13);
    }
    v14 = (void *)(v21 - 12);
    if ( (uint32_t *)(v21 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v14);
    }
    return started;
  }
  gaia::GaiaRequest::SetResponseCode(a2, SeshatStatus);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Seshat::GetDataCheckEtag  (binary VA: 0x14609b0)
// Original: gaia::Gaia_Seshat::GetDataCheckEtag
// ----------------------------------------------------------------------------
int gaia::Gaia_Seshat::GetDataCheckEtag(gaia::Gaia_Seshat::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  int SeshatStatus;
  void *v6;
  void *v7;
  void *v8;
  int Instance;
  int result;
  void *v11;
  void *v12;
  void *v13;
  void *v14;
  typedef int _g4_t_AccessToken;
  typedef int _g4_t_v16;
  typedef int _g4_t_started;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef void *_g4_t_ptr;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef uint8_t _g4_t_v37[16];
  typedef uint8_t _g4_t_v38[16];
  typedef uint8_t _g4_t_v39[16];
  typedef uint8_t _g4_t_v40[96];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (0u + sizeof(_g4_t_AccessToken)) > _g4_s0 ? (0u + sizeof(_g4_t_AccessToken)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v16)) > _g4_s1 ? (0u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_started)) > _g4_s2 ? (0u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v18)) > _g4_s3 ? (0u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v19)) > _g4_s4 ? (0u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v20)) > _g4_s5 ? (0u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (22u + sizeof(_g4_t_v21)) > _g4_s6 ? (22u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v22)) > _g4_s7 ? (24u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v23)) > _g4_s8 ? (28u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v24)) > _g4_s9 ? (40u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v25)) > _g4_s10 ? (44u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v26)) > _g4_s11 ? (48u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v27)) > _g4_s12 ? (52u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v28)) > _g4_s13 ? (56u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v29)) > _g4_s14 ? (60u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v30)) > _g4_s15 ? (64u + sizeof(_g4_t_v30)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_ptr)) > _g4_s16 ? (68u + sizeof(_g4_t_ptr)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v32)) > _g4_s17 ? (72u + sizeof(_g4_t_v32)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v33)) > _g4_s18 ? (76u + sizeof(_g4_t_v33)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v34)) > _g4_s19 ? (80u + sizeof(_g4_t_v34)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v35)) > _g4_s20 ? (84u + sizeof(_g4_t_v35)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v36)) > _g4_s21 ? (88u + sizeof(_g4_t_v36)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_v37)) > _g4_s22 ? (92u + sizeof(_g4_t_v37)) : _g4_s22,
    _g4_s24 = (108u + sizeof(_g4_t_v38)) > _g4_s23 ? (108u + sizeof(_g4_t_v38)) : _g4_s23,
    _g4_s25 = (124u + sizeof(_g4_t_v39)) > _g4_s24 ? (124u + sizeof(_g4_t_v39)) : _g4_s24,
    _g4_s26 = (140u + sizeof(_g4_t_v40)) > _g4_s25 ? (140u + sizeof(_g4_t_v40)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_AccessToken &AccessToken = *reinterpret_cast<_g4_t_AccessToken *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 22u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 52u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 56u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 60u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 64u);
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 68u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 72u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 76u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 80u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 84u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 88u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 92u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 108u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 124u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 140u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "key", (int)(uintptr_t)(&v21));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v24), 4);
    v2 = (void *)(v24 - 12);
    if ( (uint32_t *)(v24 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "credential", (int)(uintptr_t)(&v21) + 1);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v25), 4);
    v3 = (void *)(v25 - 12);
    if ( (uint32_t *)(v25 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "e-tag", (int)(uintptr_t)(&v22));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v26), 4);
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
        gaia::GaiaRequest::SetOperationCode(a2, 1006);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v40, a2);
        started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v40);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v40);
        return started;
      }
      else
      {
        SeshatStatus = gaia::Gaia_Seshat::GetSeshatStatus(self);
        if ( SeshatStatus != 0 )
        {
          v18 = SeshatStatus;
          gaia::GaiaRequest::SetResponseCode(a2, SeshatStatus);
          return v18;
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), (char *)&unk_1B15112, (int)(uintptr_t)(&v22) + 1);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), (char *)&unk_1B15112, (int)(uintptr_t)(&v22) + 2);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), (char *)&unk_1B15112, (int)(uintptr_t)(&v22) + 3);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), (char *)&unk_1B15112, (int)(uintptr_t)(&v23));
          ptr = nullptr;
          v32 = 0;
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v37, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v33, (int)(uintptr_t)(v37));
          g4_std::string::assign_str(&v28, &v33);
          v6 = (void *)(v33 - 12);
          if ( (uint32_t *)(v33 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v6);
          }
          Json::Value::Destroy((Json::Value::Self *)v37);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v38, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v34, (int)(uintptr_t)(v38));
          g4_std::string::assign_str(&v30, &v34);
          v7 = (void *)(v34 - 12);
          if ( (uint32_t *)(v34 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v7);
          }
          Json::Value::Destroy((Json::Value::Self *)v38);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v39, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v35, (int)(uintptr_t)(v39));
          g4_std::string::assign_str(&v29, &v35);
          v8 = (void *)(v35 - 12);
          if ( (uint32_t *)(v35 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v35 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v8);
          }
          Json::Value::Destroy((Json::Value::Self *)v39);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "storage", (int)(uintptr_t)(&v23) + 1);
          AccessToken = gaia::Gaia_Seshat::GetAccessToken(self, a2, &v36, (int)(uintptr_t)(&v27));
          g4_std::string::Destroy(&v36);
          if ( AccessToken != 0 )
          {
            gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
          }
          else
          {
            Instance = gaia::Gaia::GetInstance();
            AccessToken = gaia::Seshat::GetDataCheckEtag(
                            *(uint32_t *)(Instance + 8),
                            &v27,
                            &v28,
                            &v29,
                            &ptr,
                            &v32,
                            &v30,
                            a2);
            gaia::GaiaRequest::SetResponse(a2, ptr, &v32);
            gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
            free(ptr);
          }
          result = AccessToken;
          v11 = (void *)(v30 - 12);
          if ( (uint32_t *)(v30 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v11);
            result = AccessToken;
          }
          v12 = (void *)(v29 - 12);
          if ( (uint32_t *)(v29 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
          {
            v20 = result;
            g4_std::string::Rep::M_destroy(v12);
            result = v20;
          }
          v13 = (void *)(v28 - 12);
          if ( (uint32_t *)(v28 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
          {
            v19 = result;
            g4_std::string::Rep::M_destroy(v13);
            result = v19;
          }
          v14 = (void *)(v27 - 12);
          if ( (uint32_t *)(v27 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
          {
            v16 = result;
            g4_std::string::Rep::M_destroy(v14);
            return v16;
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
// Function: gaia::Gaia_Seshat::PutData  (binary VA: 0x1461010)
// Original: gaia::Gaia_Seshat::PutData
// ----------------------------------------------------------------------------
int gaia::Gaia_Seshat::PutData(gaia::Gaia_Seshat::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  int SeshatStatus;
  void *v7;
  void *v8;
  void *v9;
  int AccessToken;
  void *v11;
  int result;
  void *v13;
  void *v14;
  void *v15;
  void *v16;
  int Instance;
  typedef Json::Value::Self *_g4_t_v18;
  typedef Json::Value::Self *_g4_t_v19;
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
  typedef uint8_t _g4_t_v45[96];
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (12u + sizeof(_g4_t_v18)) > _g4_s0 ? (12u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v19)) > _g4_s1 ? (12u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_started)) > _g4_s2 ? (12u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v21)) > _g4_s3 ? (12u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v22)) > _g4_s4 ? (12u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v23)) > _g4_s5 ? (12u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v24)) > _g4_s6 ? (12u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v25)) > _g4_s7 ? (16u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (39u + sizeof(_g4_t_v26)) > _g4_s8 ? (39u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v27)) > _g4_s9 ? (40u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v28)) > _g4_s10 ? (44u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v29)) > _g4_s11 ? (60u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v30)) > _g4_s12 ? (64u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v31)) > _g4_s13 ? (68u + sizeof(_g4_t_v31)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v32)) > _g4_s14 ? (72u + sizeof(_g4_t_v32)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v33)) > _g4_s15 ? (76u + sizeof(_g4_t_v33)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v34)) > _g4_s16 ? (80u + sizeof(_g4_t_v34)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v35)) > _g4_s17 ? (84u + sizeof(_g4_t_v35)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v36)) > _g4_s18 ? (88u + sizeof(_g4_t_v36)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v37)) > _g4_s19 ? (92u + sizeof(_g4_t_v37)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v38)) > _g4_s20 ? (96u + sizeof(_g4_t_v38)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v39)) > _g4_s21 ? (100u + sizeof(_g4_t_v39)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v40)) > _g4_s22 ? (104u + sizeof(_g4_t_v40)) : _g4_s22,
    _g4_s24 = (108u + sizeof(_g4_t_v41)) > _g4_s23 ? (108u + sizeof(_g4_t_v41)) : _g4_s23,
    _g4_s25 = (124u + sizeof(_g4_t_v42)) > _g4_s24 ? (124u + sizeof(_g4_t_v42)) : _g4_s24,
    _g4_s26 = (140u + sizeof(_g4_t_v43)) > _g4_s25 ? (140u + sizeof(_g4_t_v43)) : _g4_s25,
    _g4_s27 = (156u + sizeof(_g4_t_v44)) > _g4_s26 ? (156u + sizeof(_g4_t_v44)) : _g4_s26,
    _g4_s28 = (172u + sizeof(_g4_t_v45)) > _g4_s27 ? (172u + sizeof(_g4_t_v45)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 39u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 40u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 44u);
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

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "key", (int)(uintptr_t)(&v26));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v29), 4);
    v2 = (void *)(v29 - 12);
    if ( (uint32_t *)(v29 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "data", (int)(uintptr_t)(&v27));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v30), 4);
    v3 = (void *)(v30 - 12);
    if ( (uint32_t *)(v30 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "credential", (int)(uintptr_t)(&v27) + 1);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v31), 4);
    v4 = (void *)(v31 - 12);
    if ( (uint32_t *)(v31 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "visibility", (int)(uintptr_t)(&v27) + 2);
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
        gaia::GaiaRequest::SetOperationCode(a2, 1001);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v45, a2);
        started = (Json::Value::Self *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v45);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v45);
        return (int)(uintptr_t)(started);
      }
      else
      {
        SeshatStatus = gaia::Gaia_Seshat::GetSeshatStatus(self);
        if ( SeshatStatus != 0 )
        {
          v21 = (Json::Value::Self *)SeshatStatus;
          gaia::GaiaRequest::SetResponseCode(a2, SeshatStatus);
          return (int)(uintptr_t)(v21);
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), (char *)&unk_1B15112, (int)(uintptr_t)(&v27) + 3);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), (char *)&unk_1B15112, (int)(uintptr_t)(&v28));
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), (char *)&unk_1B15112, (int)(uintptr_t)(&v28) + 1);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), (char *)&unk_1B15112, (int)(uintptr_t)(&v28) + 2);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v41, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v37, (int)(uintptr_t)(v41));
          g4_std::string::assign_str(&v33, &v37);
          v7 = (void *)(v37 - 12);
          if ( (uint32_t *)(v37 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v7);
          }
          Json::Value::Destroy((Json::Value::Self *)v41);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v42, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v38, (int)(uintptr_t)(v42));
          g4_std::string::assign_str(&v35, &v38);
          v8 = (void *)(v38 - 12);
          if ( (uint32_t *)(v38 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v38 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v8);
          }
          Json::Value::Destroy((Json::Value::Self *)v42);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v43, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v39, (int)(uintptr_t)(v43));
          g4_std::string::assign_str(&v36, &v39);
          v9 = (void *)(v39 - 12);
          if ( (uint32_t *)(v39 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v9);
          }
          Json::Value::Destroy((Json::Value::Self *)v43);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v44, (const char *)a2);
          v25 = Json::Value::asInt((Json::Value::Self *)v44);
          Json::Value::Destroy((Json::Value::Self *)v44);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "storage", (int)(uintptr_t)(&v28) + 3);
          AccessToken = gaia::Gaia_Seshat::GetAccessToken(self, a2, &v40, (int)(uintptr_t)(&v34));
          v11 = (void *)(v40 - 12);
          if ( (uint32_t *)(v40 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v40 - 4), 0xFFFFFFFF) <= 0 )
          {
            v24 = (Json::Value::Self *)AccessToken;
            g4_std::string::Rep::M_destroy(v11);
            AccessToken = (int)(uintptr_t)(v24);
          }
          if ( AccessToken == 0 )
          {
            Instance = gaia::Gaia::GetInstance();
            AccessToken = gaia::Seshat::PutData(
                            *(gaia::BaseServiceManager::Self **)(Instance + 8),
                            (int)(uintptr_t)(&v34),
                            (int)(uintptr_t)(&v33),
                            (int)(uintptr_t)(&v35),
                            (int)(uintptr_t)(&v36),
                            v25,
                            (int)(uintptr_t)(a2));
          }
          v18 = (Json::Value::Self *)AccessToken;
          gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
          result = (int)(uintptr_t)(v18);
          v13 = (void *)(v36 - 12);
          if ( (uint32_t *)(v36 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v36 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v13);
            result = (int)(uintptr_t)(v18);
          }
          v14 = (void *)(v35 - 12);
          if ( (uint32_t *)(v35 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v35 - 4), 0xFFFFFFFF) <= 0 )
          {
            v23 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v14);
            result = (int)(uintptr_t)(v23);
          }
          v15 = (void *)(v34 - 12);
          if ( (uint32_t *)(v34 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
          {
            v22 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v15);
            result = (int)(uintptr_t)(v22);
          }
          v16 = (void *)(v33 - 12);
          if ( (uint32_t *)(v33 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
          {
            v19 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v16);
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
// Function: gaia::Gaia_Seshat::PutDataCheckEtag  (binary VA: 0x1461720)
// Original: gaia::Gaia_Seshat::PutDataCheckEtag
// ----------------------------------------------------------------------------
int gaia::Gaia_Seshat::PutDataCheckEtag(gaia::Gaia_Seshat::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  void *v6;
  int SeshatStatus;
  void *v8;
  void *v9;
  void *v10;
  void *v11;
  int AccessToken;
  void *v13;
  int result;
  void *v15;
  void *v16;
  void *v17;
  void *v18;
  void *v19;
  int Instance;
  typedef Json::Value::Self *_g4_t_v21;
  typedef Json::Value::Self *_g4_t_v22;
  typedef Json::Value::Self *_g4_t_started;
  typedef Json::Value::Self *_g4_t_v24;
  typedef Json::Value::Self *_g4_t_v25;
  typedef Json::Value::Self *_g4_t_v26;
  typedef Json::Value::Self *_g4_t_v27;
  typedef Json::Value::Self *_g4_t_v28;
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
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef uint8_t _g4_t_v49[16];
  typedef uint8_t _g4_t_v50[16];
  typedef uint8_t _g4_t_v51[16];
  typedef uint8_t _g4_t_v52[16];
  typedef uint8_t _g4_t_v53[16];
  typedef uint8_t _g4_t_v54[96];
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (8u + sizeof(_g4_t_v21)) > _g4_s0 ? (8u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v22)) > _g4_s1 ? (8u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_started)) > _g4_s2 ? (8u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v24)) > _g4_s3 ? (8u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v25)) > _g4_s4 ? (8u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v26)) > _g4_s5 ? (8u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v27)) > _g4_s6 ? (8u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v28)) > _g4_s7 ? (8u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v29)) > _g4_s8 ? (12u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (38u + sizeof(_g4_t_v30)) > _g4_s9 ? (38u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v31)) > _g4_s10 ? (40u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v32)) > _g4_s11 ? (44u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v33)) > _g4_s12 ? (48u + sizeof(_g4_t_v33)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v34)) > _g4_s13 ? (64u + sizeof(_g4_t_v34)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v35)) > _g4_s14 ? (68u + sizeof(_g4_t_v35)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v36)) > _g4_s15 ? (72u + sizeof(_g4_t_v36)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v37)) > _g4_s16 ? (76u + sizeof(_g4_t_v37)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v38)) > _g4_s17 ? (80u + sizeof(_g4_t_v38)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v39)) > _g4_s18 ? (84u + sizeof(_g4_t_v39)) : _g4_s18,
    _g4_s20 = (88u + sizeof(_g4_t_v40)) > _g4_s19 ? (88u + sizeof(_g4_t_v40)) : _g4_s19,
    _g4_s21 = (92u + sizeof(_g4_t_v41)) > _g4_s20 ? (92u + sizeof(_g4_t_v41)) : _g4_s20,
    _g4_s22 = (96u + sizeof(_g4_t_v42)) > _g4_s21 ? (96u + sizeof(_g4_t_v42)) : _g4_s21,
    _g4_s23 = (100u + sizeof(_g4_t_v43)) > _g4_s22 ? (100u + sizeof(_g4_t_v43)) : _g4_s22,
    _g4_s24 = (104u + sizeof(_g4_t_v44)) > _g4_s23 ? (104u + sizeof(_g4_t_v44)) : _g4_s23,
    _g4_s25 = (108u + sizeof(_g4_t_v45)) > _g4_s24 ? (108u + sizeof(_g4_t_v45)) : _g4_s24,
    _g4_s26 = (112u + sizeof(_g4_t_v46)) > _g4_s25 ? (112u + sizeof(_g4_t_v46)) : _g4_s25,
    _g4_s27 = (116u + sizeof(_g4_t_v47)) > _g4_s26 ? (116u + sizeof(_g4_t_v47)) : _g4_s26,
    _g4_s28 = (120u + sizeof(_g4_t_v48)) > _g4_s27 ? (120u + sizeof(_g4_t_v48)) : _g4_s27,
    _g4_s29 = (124u + sizeof(_g4_t_v49)) > _g4_s28 ? (124u + sizeof(_g4_t_v49)) : _g4_s28,
    _g4_s30 = (140u + sizeof(_g4_t_v50)) > _g4_s29 ? (140u + sizeof(_g4_t_v50)) : _g4_s29,
    _g4_s31 = (156u + sizeof(_g4_t_v51)) > _g4_s30 ? (156u + sizeof(_g4_t_v51)) : _g4_s30,
    _g4_s32 = (172u + sizeof(_g4_t_v52)) > _g4_s31 ? (172u + sizeof(_g4_t_v52)) : _g4_s31,
    _g4_s33 = (188u + sizeof(_g4_t_v53)) > _g4_s32 ? (188u + sizeof(_g4_t_v53)) : _g4_s32,
    _g4_s34 = (204u + sizeof(_g4_t_v54)) > _g4_s33 ? (204u + sizeof(_g4_t_v54)) : _g4_s33
  };
  alignas(16) uint8_t _g4_sf[_g4_s34];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 38u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 40u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 44u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 48u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 64u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 68u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 72u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 76u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 80u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 84u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 88u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 92u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 96u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 100u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 104u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 108u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 112u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 116u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 120u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 124u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 140u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 156u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 172u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 188u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 204u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "key", (int)(uintptr_t)(&v30));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v34), 4);
    v2 = (void *)(v34 - 12);
    if ( (uint32_t *)(v34 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "data", (int)(uintptr_t)(&v30) + 1);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v35), 4);
    v3 = (void *)(v35 - 12);
    if ( (uint32_t *)(v35 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v35 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "credential", (int)(uintptr_t)(&v31));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v36), 4);
    v4 = (void *)(v36 - 12);
    if ( (uint32_t *)(v36 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v36 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "e-tag", (int)(uintptr_t)(&v31) + 1);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v37), 4);
    v5 = (void *)(v37 - 12);
    if ( (uint32_t *)(v37 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "visibility", (int)(uintptr_t)(&v31) + 2);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v38), 1);
    v6 = (void *)(v38 - 12);
    if ( (uint32_t *)(v38 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v38 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 1005);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v54, a2);
        started = (Json::Value::Self *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v54);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v54);
        return (int)(uintptr_t)(started);
      }
      else
      {
        SeshatStatus = gaia::Gaia_Seshat::GetSeshatStatus(self);
        if ( SeshatStatus != 0 )
        {
          v24 = (Json::Value::Self *)SeshatStatus;
          gaia::GaiaRequest::SetResponseCode(a2, SeshatStatus);
          return (int)(uintptr_t)(v24);
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), (char *)&unk_1B15112, (int)(uintptr_t)(&v31) + 3);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), (char *)&unk_1B15112, (int)(uintptr_t)(&v32));
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), (char *)&unk_1B15112, (int)(uintptr_t)(&v32) + 1);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), (char *)&unk_1B15112, (int)(uintptr_t)(&v32) + 2);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), (char *)&unk_1B15112, (int)(uintptr_t)(&v32) + 3);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v49, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v44, (int)(uintptr_t)(v49));
          g4_std::string::assign_str(&v39, &v44);
          v8 = (void *)(v44 - 12);
          if ( (uint32_t *)(v44 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v44 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v8);
          }
          Json::Value::Destroy((Json::Value::Self *)v49);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v50, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v45, (int)(uintptr_t)(v50));
          g4_std::string::assign_str(&v41, &v45);
          v9 = (void *)(v45 - 12);
          if ( (uint32_t *)(v45 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v9);
          }
          Json::Value::Destroy((Json::Value::Self *)v50);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v51, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v46, (int)(uintptr_t)(v51));
          g4_std::string::assign_str(&v42, &v46);
          v10 = (void *)(v46 - 12);
          if ( (uint32_t *)(v46 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v46 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v10);
          }
          Json::Value::Destroy((Json::Value::Self *)v51);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v52, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v47, (int)(uintptr_t)(v52));
          g4_std::string::assign_str(&v43, &v47);
          v11 = (void *)(v47 - 12);
          if ( (uint32_t *)(v47 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v47 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v11);
          }
          Json::Value::Destroy((Json::Value::Self *)v52);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v53, (const char *)a2);
          v29 = Json::Value::asInt((Json::Value::Self *)v53);
          Json::Value::Destroy((Json::Value::Self *)v53);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v48), "storage", (int)(uintptr_t)(&v33));
          AccessToken = gaia::Gaia_Seshat::GetAccessToken(self, a2, &v48, (int)(uintptr_t)(&v40));
          v13 = (void *)(v48 - 12);
          if ( (uint32_t *)(v48 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v48 - 4), 0xFFFFFFFF) <= 0 )
          {
            v27 = (Json::Value::Self *)AccessToken;
            g4_std::string::Rep::M_destroy(v13);
            AccessToken = (int)(uintptr_t)(v27);
          }
          if ( AccessToken == 0 )
          {
            Instance = gaia::Gaia::GetInstance();
            AccessToken = gaia::Seshat::PutDataCheckEtag(
                            *(uint32_t *)(Instance + 8),
                            &v40,
                            &v39,
                            &v43,
                            &v41,
                            &v42,
                            v29,
                            a2);
          }
          v21 = (Json::Value::Self *)AccessToken;
          gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
          result = (int)(uintptr_t)(v21);
          v15 = (void *)(v43 - 12);
          if ( (uint32_t *)(v43 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v43 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v15);
            result = (int)(uintptr_t)(v21);
          }
          v16 = (void *)(v42 - 12);
          if ( (uint32_t *)(v42 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v42 - 4), 0xFFFFFFFF) <= 0 )
          {
            v25 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v16);
            result = (int)(uintptr_t)(v25);
          }
          v17 = (void *)(v41 - 12);
          if ( (uint32_t *)(v41 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
          {
            v26 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v17);
            result = (int)(uintptr_t)(v26);
          }
          v18 = (void *)(v40 - 12);
          if ( (uint32_t *)(v40 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v40 - 4), 0xFFFFFFFF) <= 0 )
          {
            v28 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v18);
            result = (int)(uintptr_t)(v28);
          }
          v19 = (void *)(v39 - 12);
          if ( (uint32_t *)(v39 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
          {
            v22 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v19);
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
// Function: gaia::Gaia_Seshat::StartAndAuthorizeSeshat  (binary VA: 0x1480b00)
// Original: gaia::Gaia_Seshat::StartAndAuthorizeSeshat
// ----------------------------------------------------------------------------
int gaia::Gaia_Seshat::StartAndAuthorizeSeshat(gaia::Gaia::Self *a1, int a2, uint32_t *a3)
{
  char IsInitialized;
  int result;
  int Instance;

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    result = gaia::Gaia_Seshat::GetSeshatStatus((gaia::Gaia_Seshat::Self *)(a1));
    if ( result == 0 )
    {
      Instance = gaia::Gaia::GetInstance();
      return gaia::Gaia::Authorize(Instance, a3, a2, 0, 0, 0);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Seshat::DeleteMatcher  (binary VA: 0x1480b70)
// Original: gaia::Gaia_Seshat::DeleteMatcher
// ----------------------------------------------------------------------------
char gaia::Gaia_Seshat::DeleteMatcher(gaia::Gaia::Self *a1, int a2, uint32_t *a3, char a4, int a5, int a6)
{
  char IsInitialized;
  unsigned int InitializationAndLoginStatus;
  int Instance;
  void *v9;
  uint32_t *v10;
  Json::Value::Self *v11;
  Json::Value::Self *v12;
  int v13;
  int v14;
  int v15;
  typedef gaia::ThreadManager::Self *_g4_t_v17;
  typedef char _g4_t_v18;
  typedef Json::Value::Self *_g4_t_v19;
  typedef uint16_t _g4_t_v20[3];
  typedef int _g4_t_v21;
  typedef uint8_t _g4_t_v22[16];
  typedef uint8_t _g4_t_v23[28];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v17)) > _g4_s0 ? (0u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v18)) > _g4_s1 ? (28u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v19)) > _g4_s2 ? (28u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (38u + sizeof(_g4_t_v20)) > _g4_s3 ? (38u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v21)) > _g4_s4 ? (44u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v22)) > _g4_s5 ? (48u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v23)) > _g4_s6 ? (64u + sizeof(_g4_t_v23)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 38u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 48u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 64u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  LOBYTE(InitializationAndLoginStatus) = -21;
  if ( IsInitialized != 0 )
  {
    LOBYTE(InitializationAndLoginStatus) = -22;
    if ( *(uint32_t *)(*a3 - 12) != 0 )
    {
      Instance = gaia::Gaia::GetInstance();
      InitializationAndLoginStatus = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
      if ( InitializationAndLoginStatus == 0 )
      {
        if ( a4 != 0 )
        {
          v10 = (uint32_t *)opNew(0x44u);
          *v10 = a6;
          v10[1] = a5;
          v10[2] = 1013;
          Json::Value::Construct((int)(uintptr_t)(v10 + 3), nullptr);
          v10[7] = 0;
          v10[8] = 0;
          Json::Value::Construct((int)(uintptr_t)(v10 + 9), nullptr);
          v10[13] = 0;
          v10[14] = 0;
          v10[15] = 0;
          v10[16] = 0;
          Json::Value::Construct((Json::Value::Self *)v22, a2);
          v11 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v10 + 3), "accountType");
          Json::Value::opAssign(v11, (const Json::Value::Self *)v22);
          Json::Value::Destroy((Json::Value::Self *)v22);
          Json::Value::Construct((int)(uintptr_t)(v23), a3);
          v12 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v10 + 3), "matcherName");
          Json::Value::opAssign(v12, (const Json::Value::Self *)v23);
          Json::Value::Destroy((Json::Value::Self *)v23);
          v13 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v17));
          LOBYTE(InitializationAndLoginStatus) = gaia::ThreadManager::pushTask(v13, v10);
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20[1]), "storage_admin", (int)(uintptr_t)(v20));
          InitializationAndLoginStatus = gaia::Gaia_Seshat::StartAndAuthorizeSeshat(a1, a2, &v20[1]);
          v9 = (void *)(*(uint32_t *)&v20[1] - 12);
          if ( (uint32_t *)(*(uint32_t *)&v20[1] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v20[1] - 4), 0xFFFFFFFF) <= 0 )
          {
            v19 = (Json::Value::Self *)InitializationAndLoginStatus;
            g4_std::string::Rep::M_destroy(v9);
            InitializationAndLoginStatus = (unsigned int)(uintptr_t)(v19);
          }
          if ( InitializationAndLoginStatus == 0 )
          {
            v14 = gaia::Gaia::GetInstance();
            gaia::Gaia::GetJanusToken((int)(uintptr_t)(&v21), v14);
            v15 = gaia::Gaia::GetInstance();
            v18 = gaia::Seshat::DeleteMatcher(*(gaia::BaseServiceManager::Self **)(v15 + 8), (int)(uintptr_t)(&v21), (int)(uintptr_t)(a3), 0);
            g4_std::string::Destroy(&v21);
            LOBYTE(InitializationAndLoginStatus) = v18;
          }
        }
      }
    }
  }
  return InitializationAndLoginStatus;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Seshat::GetMatches  (binary VA: 0x1480dd0)
// Original: gaia::Gaia_Seshat::GetMatches
// ----------------------------------------------------------------------------
int gaia::Gaia_Seshat::GetMatches(gaia::Gaia::Self *a1, int a2, int a3, uint32_t *a4, uint32_t *a5, unsigned int a6, int a7, char a8, int a9, int a10)
{
  int InitializationAndLoginStatus;
  int Instance;
  void *v12;
  uint32_t *v14;
  Json::Value::Self *v15;
  Json::Value::Self *v16;
  Json::Value::Self *v17;
  Json::Value::Self *v18;
  int v19;
  int v20;
  int v21;
  typedef gaia::ThreadManager::Self *_g4_t_ptr;
  typedef uint16_t _g4_t_v23[3];
  typedef char *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint8_t _g4_t_v26[4];
  typedef uint8_t _g4_t_v27[16];
  typedef uint8_t _g4_t_v28[16];
  typedef uint8_t _g4_t_v29[16];
  typedef uint8_t _g4_t_v30[28];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (78u + sizeof(_g4_t_v23)) > _g4_s1 ? (78u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (84u + sizeof(_g4_t_v24)) > _g4_s2 ? (84u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (88u + sizeof(_g4_t_v25)) > _g4_s3 ? (88u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (92u + sizeof(_g4_t_v26)) > _g4_s4 ? (92u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (96u + sizeof(_g4_t_v27)) > _g4_s5 ? (96u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (112u + sizeof(_g4_t_v28)) > _g4_s6 ? (112u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (128u + sizeof(_g4_t_v29)) > _g4_s7 ? (128u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (144u + sizeof(_g4_t_v30)) > _g4_s8 ? (144u + sizeof(_g4_t_v30)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 78u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 84u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 88u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 92u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 96u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 112u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 128u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 144u);

  gaia::Gaia::GetInstance();
  InitializationAndLoginStatus = -21;
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    InitializationAndLoginStatus = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
    if ( InitializationAndLoginStatus == 0 )
    {
      if ( a8 != 0 )
      {
        v14 = (uint32_t *)opNew(0x44u);
        *v14 = a10;
        v14[1] = a9;
        v14[2] = 1012;
        Json::Value::Construct((int)(uintptr_t)(v14 + 3), nullptr);
        v14[7] = 0;
        v14[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v14 + 9), nullptr);
        v14[13] = 0;
        v14[14] = 0;
        v14[15] = 0;
        v14[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v27, a2);
        v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "accountType");
        Json::Value::opAssign(v15, (const Json::Value::Self *)v27);
        Json::Value::Destroy((Json::Value::Self *)v27);
        Json::Value::Construct((int)(uintptr_t)(v28), a4);
        v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "matcherName");
        Json::Value::opAssign(v16, (const Json::Value::Self *)v28);
        Json::Value::Destroy((Json::Value::Self *)v28);
        Json::Value::Construct((int)(uintptr_t)(v29), a5);
        v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "include_fields");
        Json::Value::opAssign(v17, (const Json::Value::Self *)v29);
        Json::Value::Destroy((Json::Value::Self *)v29);
        Json::Value::Construct((Json::Value::Self *)v30, a6);
        v18 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "limit");
        Json::Value::opAssign(v18, (const Json::Value::Self *)v30);
        Json::Value::Destroy((Json::Value::Self *)v30);
        v14[8] = a7;
        v14[7] = a3;
        v19 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(ptr));
        return gaia::ThreadManager::pushTask(v19, v14);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23[1]), "storage", (int)(uintptr_t)(v23));
        InitializationAndLoginStatus = gaia::Gaia_Seshat::StartAndAuthorizeSeshat(a1, a2, &v23[1]);
        v12 = (void *)(*(uint32_t *)&v23[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v23[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v23[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v12);
        }
        if ( InitializationAndLoginStatus == 0 )
        {
          v24 = nullptr;
          v20 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(v26), v20);
          v21 = gaia::Gaia::GetInstance();
          InitializationAndLoginStatus = gaia::Seshat::GetMatches(
                                           *(gaia::BaseServiceManager::Self **)(v21 + 8),
                                           (int)(uintptr_t)(v26),
                                           (int)(uintptr_t)(a4),
                                           (void **)&v24,
                                           &v25,
                                           a6,
                                           (int)(uintptr_t)(a5),
                                           a7,
                                           0);
          g4_std::string::Destroy(v26);
          if ( InitializationAndLoginStatus == 0 )
            gaia::BaseServiceManager::ParseMessages(v24, v25, a3, 21);
          free(v24);
        }
      }
    }
  }
  return InitializationAndLoginStatus;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Seshat::CreateMatcher  (binary VA: 0x1481170)
// Original: gaia::Gaia_Seshat::CreateMatcher
// ----------------------------------------------------------------------------
char gaia::Gaia_Seshat::CreateMatcher(gaia::Gaia::Self *a1, int a2, uint32_t *a3, uint32_t *a4, char a5, int a6, int a7)
{
  char IsInitialized;
  unsigned int InitializationAndLoginStatus;
  int Instance;
  void *v10;
  uint32_t *v11;
  Json::Value::Self *v12;
  Json::Value::Self *v13;
  Json::Value::Self *v14;
  int v15;
  int v16;
  int v17;
  typedef gaia::ThreadManager::Self *_g4_t_v19;
  typedef char _g4_t_Matcher;
  typedef unsigned int _g4_t_v21;
  typedef uint16_t _g4_t_v22[3];
  typedef int _g4_t_v23;
  typedef uint8_t _g4_t_v24[16];
  typedef uint8_t _g4_t_v25[16];
  typedef uint8_t _g4_t_v26[28];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v19)) > _g4_s0 ? (0u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_Matcher)) > _g4_s1 ? (40u + sizeof(_g4_t_Matcher)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v21)) > _g4_s2 ? (40u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (54u + sizeof(_g4_t_v22)) > _g4_s3 ? (54u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v23)) > _g4_s4 ? (60u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v24)) > _g4_s5 ? (64u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v25)) > _g4_s6 ? (80u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v26)) > _g4_s7 ? (96u + sizeof(_g4_t_v26)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_Matcher &Matcher = *reinterpret_cast<_g4_t_Matcher *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 54u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 64u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 80u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 96u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  LOBYTE(InitializationAndLoginStatus) = -21;
  if ( IsInitialized != 0 )
  {
    LOBYTE(InitializationAndLoginStatus) = -22;
    if ( *(uint32_t *)(*a3 - 12) != 0 )
    {
      Instance = gaia::Gaia::GetInstance();
      InitializationAndLoginStatus = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
      if ( InitializationAndLoginStatus == 0 )
      {
        if ( a5 != 0 )
        {
          v11 = (uint32_t *)opNew(0x44u);
          *v11 = a7;
          v11[1] = a6;
          v11[2] = 1011;
          Json::Value::Construct((int)(uintptr_t)(v11 + 3), nullptr);
          v11[7] = 0;
          v11[8] = 0;
          Json::Value::Construct((int)(uintptr_t)(v11 + 9), nullptr);
          v11[13] = 0;
          v11[14] = 0;
          v11[15] = 0;
          v11[16] = 0;
          Json::Value::Construct((Json::Value::Self *)v24, a2);
          v12 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v11 + 3), "accountType");
          Json::Value::opAssign(v12, (const Json::Value::Self *)v24);
          Json::Value::Destroy((Json::Value::Self *)v24);
          Json::Value::Construct((int)(uintptr_t)(v25), a3);
          v13 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v11 + 3), "matcherName");
          Json::Value::opAssign(v13, (const Json::Value::Self *)v25);
          Json::Value::Destroy((Json::Value::Self *)v25);
          Json::Value::Construct((int)(uintptr_t)(v26), a4);
          v14 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v11 + 3), "condition");
          Json::Value::opAssign(v14, (const Json::Value::Self *)v26);
          Json::Value::Destroy((Json::Value::Self *)v26);
          v15 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v19));
          LOBYTE(InitializationAndLoginStatus) = gaia::ThreadManager::pushTask(v15, v11);
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22[1]), "storage_admin", (int)(uintptr_t)(v22));
          InitializationAndLoginStatus = gaia::Gaia_Seshat::StartAndAuthorizeSeshat(a1, a2, &v22[1]);
          v10 = (void *)(*(uint32_t *)&v22[1] - 12);
          if ( (uint32_t *)(*(uint32_t *)&v22[1] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v22[1] - 4), 0xFFFFFFFF) <= 0 )
          {
            v21 = InitializationAndLoginStatus;
            g4_std::string::Rep::M_destroy(v10);
            InitializationAndLoginStatus = v21;
          }
          if ( InitializationAndLoginStatus == 0 )
          {
            v16 = gaia::Gaia::GetInstance();
            gaia::Gaia::GetJanusToken((int)(uintptr_t)(&v23), v16);
            v17 = gaia::Gaia::GetInstance();
            Matcher = gaia::Seshat::CreateMatcher(
                        *(gaia::BaseServiceManager::Self **)(v17 + 8),
                        (int)(uintptr_t)(&v23),
                        (int)(uintptr_t)(a3),
                        (int)(uintptr_t)(a4),
                        0);
            g4_std::string::Destroy(&v23);
            LOBYTE(InitializationAndLoginStatus) = Matcher;
          }
        }
      }
    }
  }
  return InitializationAndLoginStatus;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Seshat::GetBatchProfiles  (binary VA: 0x1481440)
// Original: gaia::Gaia_Seshat::GetBatchProfiles
// ----------------------------------------------------------------------------
int gaia::Gaia_Seshat::GetBatchProfiles(gaia::Gaia::Self *a1, int a2, int a3, uint32_t *a4, uint32_t *a5, char a6, int a7, int a8)
{
  int InitializationAndLoginStatus;
  int Instance;
  void *v10;
  uint32_t *v12;
  Json::Value::Self *v13;
  Json::Value::Self *v14;
  Json::Value::Self *v15;
  int v16;
  int v17;
  int v18;
  typedef gaia::ThreadManager::Self *_g4_t_ptr;
  typedef uint16_t _g4_t_v20[3];
  typedef char *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint8_t _g4_t_v23[4];
  typedef uint8_t _g4_t_v24[16];
  typedef uint8_t _g4_t_v25[16];
  typedef uint8_t _g4_t_v26[28];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (62u + sizeof(_g4_t_v20)) > _g4_s1 ? (62u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (68u + sizeof(_g4_t_v21)) > _g4_s2 ? (68u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (72u + sizeof(_g4_t_v22)) > _g4_s3 ? (72u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (76u + sizeof(_g4_t_v23)) > _g4_s4 ? (76u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (80u + sizeof(_g4_t_v24)) > _g4_s5 ? (80u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (96u + sizeof(_g4_t_v25)) > _g4_s6 ? (96u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (112u + sizeof(_g4_t_v26)) > _g4_s7 ? (112u + sizeof(_g4_t_v26)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 62u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 68u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 72u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 76u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 80u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 96u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 112u);

  gaia::Gaia::GetInstance();
  InitializationAndLoginStatus = -21;
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    InitializationAndLoginStatus = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
    if ( InitializationAndLoginStatus == 0 )
    {
      if ( a6 != 0 )
      {
        v12 = (uint32_t *)opNew(0x44u);
        *v12 = a8;
        v12[1] = a7;
        v12[2] = 1018;
        Json::Value::Construct((int)(uintptr_t)(v12 + 3), nullptr);
        v12[7] = 0;
        v12[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v12 + 9), nullptr);
        v12[13] = 0;
        v12[14] = 0;
        v12[15] = 0;
        v12[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v24, a2);
        v13 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v12 + 3), "accountType");
        Json::Value::opAssign(v13, (const Json::Value::Self *)v24);
        Json::Value::Destroy((Json::Value::Self *)v24);
        Json::Value::Construct((int)(uintptr_t)(v25), a4);
        v14 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v12 + 3), "credentials");
        Json::Value::opAssign(v14, (const Json::Value::Self *)v25);
        Json::Value::Destroy((Json::Value::Self *)v25);
        Json::Value::Construct((int)(uintptr_t)(v26), a5);
        v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v12 + 3), "include_fields");
        Json::Value::opAssign(v15, (const Json::Value::Self *)v26);
        Json::Value::Destroy((Json::Value::Self *)v26);
        v12[7] = a3;
        v16 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(ptr));
        return gaia::ThreadManager::pushTask(v16, v12);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20[1]), "storage", (int)(uintptr_t)(v20));
        InitializationAndLoginStatus = gaia::Gaia_Seshat::StartAndAuthorizeSeshat(a1, a2, &v20[1]);
        v10 = (void *)(*(uint32_t *)&v20[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v20[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v20[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v10);
        }
        if ( InitializationAndLoginStatus == 0 )
        {
          v21 = nullptr;
          v17 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(v23), v17);
          v18 = gaia::Gaia::GetInstance();
          InitializationAndLoginStatus = gaia::Seshat::GetBatchProfiles(
                                           *(gaia::BaseServiceManager::Self **)(v18 + 8),
                                           (int)(uintptr_t)(v23),
                                           (void **)&v21,
                                           &v22,
                                           (int)(uintptr_t)(a4),
                                           (int)(uintptr_t)(a5),
                                           0);
          g4_std::string::Destroy(v23);
          if ( InitializationAndLoginStatus == 0 )
            gaia::BaseServiceManager::ParseMessages(v21, v22, a3, 21);
          free(v21);
        }
      }
    }
  }
  return InitializationAndLoginStatus;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Seshat::GetProfileVisibility  (binary VA: 0x1481770)
// Original: gaia::Gaia_Seshat::GetProfileVisibility
// ----------------------------------------------------------------------------
int gaia::Gaia_Seshat::GetProfileVisibility(gaia::Gaia::Self *a1, int a2, int a3, char a4, int a5, int a6)
{
  int InitializationAndLoginStatus;
  int Instance;
  void *v8;
  uint32_t *v10;
  Json::Value::Self *v11;
  int v12;
  int v13;
  int v14;
  Json::Value::Self *v15;
  bool v16;
  int v17;
  typedef gaia::ThreadManager::Self *_g4_t_ptr;
  typedef Json::Value::Self *_g4_t_v19;
  typedef uint16_t _g4_t_v20[3];
  typedef char *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint8_t _g4_t_v23[4];
  typedef uint8_t _g4_t_v24[16];
  typedef uint8_t _g4_t_v25[16];
  typedef uint8_t _g4_t_v26[16];
  typedef uint8_t _g4_t_v27[16];
  typedef int _g4_t_v28;
  typedef uint8_t _g4_t_v29[124];
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v19)) > _g4_s1 ? (36u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (58u + sizeof(_g4_t_v20)) > _g4_s2 ? (58u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v21)) > _g4_s3 ? (64u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (68u + sizeof(_g4_t_v22)) > _g4_s4 ? (68u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v23)) > _g4_s5 ? (72u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v24)) > _g4_s6 ? (76u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (92u + sizeof(_g4_t_v25)) > _g4_s7 ? (92u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (108u + sizeof(_g4_t_v26)) > _g4_s8 ? (108u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (124u + sizeof(_g4_t_v27)) > _g4_s9 ? (124u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (140u + sizeof(_g4_t_v28)) > _g4_s10 ? (140u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (144u + sizeof(_g4_t_v29)) > _g4_s11 ? (144u + sizeof(_g4_t_v29)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 36u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 58u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 64u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 68u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 72u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 76u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 92u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 108u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 124u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 140u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 144u);

  gaia::Gaia::GetInstance();
  InitializationAndLoginStatus = -21;
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    InitializationAndLoginStatus = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
    if ( InitializationAndLoginStatus == 0 )
    {
      if ( a4 != 0 )
      {
        v10 = (uint32_t *)opNew(0x44u);
        *v10 = a6;
        v10[1] = a5;
        v10[2] = 1017;
        Json::Value::Construct((int)(uintptr_t)(v10 + 3), nullptr);
        v10[7] = 0;
        v10[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v10 + 9), nullptr);
        v10[13] = 0;
        v10[14] = 0;
        v10[15] = 0;
        v10[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v24, a2);
        v11 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v10 + 3), "accountType");
        Json::Value::opAssign(v11, (const Json::Value::Self *)v24);
        Json::Value::Destroy((Json::Value::Self *)v24);
        v10[7] = a3;
        v12 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(ptr));
        return gaia::ThreadManager::pushTask(v12, v10);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20[1]), "storage", (int)(uintptr_t)(v20));
        InitializationAndLoginStatus = gaia::Gaia_Seshat::StartAndAuthorizeSeshat(a1, a2, &v20[1]);
        v8 = (void *)(*(uint32_t *)&v20[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v20[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v20[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v8);
        }
        if ( InitializationAndLoginStatus == 0 )
        {
          v21 = nullptr;
          v13 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(v23), v13);
          v14 = gaia::Gaia::GetInstance();
          InitializationAndLoginStatus = gaia::Seshat::GetProfileVisibility(
                                           *(gaia::BaseServiceManager::Self **)(v14 + 8),
                                           (int)(uintptr_t)(v23),
                                           (void **)&v21,
                                           &v22,
                                           0);
          g4_std::string::Destroy(v23);
          if ( InitializationAndLoginStatus == 0 )
          {
            Json::Reader::Construct((Json::Reader::Self *)v29);
            Json::Value::Construct((int)(uintptr_t)(v25), nullptr);
            if ( (uint8_t)Json::Reader::parse((Json::Reader::Self *)v29, v21, &v21[v22], (Json::Value::Self *)v25, true) == 0 )
            {
              InitializationAndLoginStatus = -12;
              free(v21);
              Json::Value::Destroy((Json::Value::Self *)v25);
              sub_545800((int)(uintptr_t)(v29));
              return InitializationAndLoginStatus;
            }
            Json::Value::Construct((Json::Value::Self *)v26, (const Json::Value::Self *)v25);
            gaia::BaseJSONServiceResponse::Construct((Json::Value::Self *)v27, (Json::Value::Self *)v26);
            Json::Value::Destroy((Json::Value::Self *)v26);
            v15 = *(Json::Value::Self **)(a3 + 4);
            v16 = v15 == *(Json::Value::Self **)(a3 + 8);
            v28 = 22;
            if ( v16 )
            {
              g4_std::vector_gaia_BaseJSONServiceResp_48cd2f::M_insert_aux(a3, v15, (Json::Value::Self *)v27);
            }
            else
            {
              v17 = 0;
              if ( v15 != nullptr )
              {
                v19 = v15;
                Json::Value::Construct(v15, (const Json::Value::Self *)v27);
                *((uint32_t *)v19 + 4) = v28;
                v17 = *(uint32_t *)(a3 + 4);
              }
              *(uint32_t *)(a3 + 4) = v17 + 20;
            }
            gaia::BaseJSONServiceResponse::Destroy((gaia::BaseJSONServiceResponse::Self *)v27);
            Json::Value::Destroy((Json::Value::Self *)v25);
            sub_545800((int)(uintptr_t)(v29));
          }
          free(v21);
        }
      }
    }
  }
  return InitializationAndLoginStatus;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Seshat::SetProfileVisibilitySelector  (binary VA: 0x1481b30)
// Original: gaia::Gaia_Seshat::SetProfileVisibilitySelector
// ----------------------------------------------------------------------------
int gaia::Gaia_Seshat::SetProfileVisibilitySelector(long double a1, gaia::Gaia::Self *a2, int a3, Json::Value::Self *a4, Json::Value::Self *a5, char a6, int a7, int a8)
{
  char IsInitialized;
  int result;
  int Instance;
  void *v11;
  uint32_t *v12;
  Json::Value::Self *v13;
  Json::Value::Self *v14;
  Json::Value::Self *v15;
  int v16;
  int v17;
  int v18;
  typedef gaia::ThreadManager::Self *_g4_t_v19;
  typedef int *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef uint8_t _g4_t_v25[4];
  typedef int _g4_t_v26;
  typedef uint32_t *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef uint8_t _g4_t_v30[16];
  typedef int (**_g4_t_v31)(int);
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef uint32_t _g4_t_v34[3];
  typedef uint8_t *_g4_t_v35;
  typedef void *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef uint8_t _g4_t_v39[4];
  typedef int _g4_t_v40;
  typedef uint32_t *_g4_t_v41;
  typedef uint32_t _g4_t_v42[29];
  typedef char _g4_t_v43;
  typedef char _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  enum : size_t {
    _g4_s0 = 416u,
    _g4_s1 = (0u + sizeof(_g4_t_v19)) > _g4_s0 ? (0u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (48u + sizeof(_g4_t_v20)) > _g4_s1 ? (48u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (52u + sizeof(_g4_t_v21)) > _g4_s2 ? (52u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v22)) > _g4_s3 ? (52u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (88u + sizeof(_g4_t_v23)) > _g4_s4 ? (88u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (92u + sizeof(_g4_t_v24)) > _g4_s5 ? (92u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (96u + sizeof(_g4_t_v25)) > _g4_s6 ? (96u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (100u + sizeof(_g4_t_v26)) > _g4_s7 ? (100u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (104u + sizeof(_g4_t_v27)) > _g4_s8 ? (104u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (108u + sizeof(_g4_t_v28)) > _g4_s9 ? (108u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (112u + sizeof(_g4_t_v29)) > _g4_s10 ? (112u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (116u + sizeof(_g4_t_v30)) > _g4_s11 ? (116u + sizeof(_g4_t_v30)) : _g4_s11,
    _g4_s13 = (132u + sizeof(_g4_t_v31)) > _g4_s12 ? (132u + sizeof(_g4_t_v31)) : _g4_s12,
    _g4_s14 = (136u + sizeof(_g4_t_v32)) > _g4_s13 ? (136u + sizeof(_g4_t_v32)) : _g4_s13,
    _g4_s15 = (140u + sizeof(_g4_t_v33)) > _g4_s14 ? (140u + sizeof(_g4_t_v33)) : _g4_s14,
    _g4_s16 = (144u + sizeof(_g4_t_v34)) > _g4_s15 ? (144u + sizeof(_g4_t_v34)) : _g4_s15,
    _g4_s17 = (156u + sizeof(_g4_t_v35)) > _g4_s16 ? (156u + sizeof(_g4_t_v35)) : _g4_s16,
    _g4_s18 = (160u + sizeof(_g4_t_v36)) > _g4_s17 ? (160u + sizeof(_g4_t_v36)) : _g4_s17,
    _g4_s19 = (164u + sizeof(_g4_t_v37)) > _g4_s18 ? (164u + sizeof(_g4_t_v37)) : _g4_s18,
    _g4_s20 = (168u + sizeof(_g4_t_v38)) > _g4_s19 ? (168u + sizeof(_g4_t_v38)) : _g4_s19,
    _g4_s21 = (172u + sizeof(_g4_t_v39)) > _g4_s20 ? (172u + sizeof(_g4_t_v39)) : _g4_s20,
    _g4_s22 = (176u + sizeof(_g4_t_v40)) > _g4_s21 ? (176u + sizeof(_g4_t_v40)) : _g4_s21,
    _g4_s23 = (180u + sizeof(_g4_t_v41)) > _g4_s22 ? (180u + sizeof(_g4_t_v41)) : _g4_s22,
    _g4_s24 = (184u + sizeof(_g4_t_v42)) > _g4_s23 ? (184u + sizeof(_g4_t_v42)) : _g4_s23,
    _g4_s25 = (300u + sizeof(_g4_t_v43)) > _g4_s24 ? (300u + sizeof(_g4_t_v43)) : _g4_s24,
    _g4_s26 = (301u + sizeof(_g4_t_v44)) > _g4_s25 ? (301u + sizeof(_g4_t_v44)) : _g4_s25,
    _g4_s27 = (304u + sizeof(_g4_t_v45)) > _g4_s26 ? (304u + sizeof(_g4_t_v45)) : _g4_s26,
    _g4_s28 = (308u + sizeof(_g4_t_v46)) > _g4_s27 ? (308u + sizeof(_g4_t_v46)) : _g4_s27,
    _g4_s29 = (312u + sizeof(_g4_t_v47)) > _g4_s28 ? (312u + sizeof(_g4_t_v47)) : _g4_s28,
    _g4_s30 = (316u + sizeof(_g4_t_v48)) > _g4_s29 ? (316u + sizeof(_g4_t_v48)) : _g4_s29
  };
  alignas(16) uint8_t _g4_sf[_g4_s30];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 48u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 52u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 52u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 88u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 92u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 96u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 100u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 104u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 108u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 112u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 116u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 132u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 136u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 140u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 144u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 156u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 160u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 164u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 168u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 172u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 176u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 180u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 184u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 300u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 301u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 304u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 308u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 312u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 316u);

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
        v12[2] = 1016;
        Json::Value::Construct((int)(uintptr_t)(v12 + 3), nullptr);
        v12[7] = 0;
        v12[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v12 + 9), nullptr);
        v12[13] = 0;
        v12[14] = 0;
        v12[15] = 0;
        v12[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v30, a3);
        v13 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v12 + 3), "accountType");
        Json::Value::opAssign(v13, (const Json::Value::Self *)v30);
        Json::Value::Destroy((Json::Value::Self *)v30);
        v14 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v12 + 3), "selector");
        Json::Value::opAssign(v14, a4);
        v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v12 + 3), "visibility");
        Json::Value::opAssign(v15, a5);
        v16 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v19));
        return gaia::ThreadManager::pushTask(v16, v12);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "storage", (int)(uintptr_t)(&v23));
        result = gaia::Gaia_Seshat::StartAndAuthorizeSeshat(a2, a3, &v24);
        v11 = (void *)(v24 - 12);
        if ( (uint32_t *)(v24 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
        {
          v22 = result;
          g4_std::string::Rep::M_destroy(v11);
          result = v22;
        }
        if ( result == 0 )
        {
          sub_1900810(v42);
          v42[28] = 0;
          v43 = 0;
          v44 = 0;
          v45 = 0;
          v46 = 0;
          v47 = 0;
          v48 = 0;
          v31 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
          v42[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
          *(int (***)(int))((char *)&v31 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
          v32 = 0;
          sub_19119D0((char *)&v31 + (uint32_t)(uintptr_t)(*(v31 - 3)), 0);
          v33 = (int)(uintptr_t)(&off_20AAEEC);
          *(uint32_t *)((char *)&v34[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
          sub_19119D0((char *)&v34[-1] + *(uint32_t *)(v33 - 12), 0);
          v31 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
          *(int (***)(int))((char *)&v31 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
          v34[1] = 0;
          v34[2] = 0;
          v35 = nullptr;
          v36 = nullptr;
          v37 = 0;
          v38 = 0;
          v31 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
          v42[0] = (uint32_t)(uintptr_t)(&off_20AB014);
          v33 = (int)((uint32_t)(uintptr_t)&off_20AB000);
          v34[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
          sub_1903A70(v39);
          v41 = &dword_213B814;
          v34[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
          v40 = 24;
          sub_19119D0(v42, v34);
          Json::opShl(a1, (int)(uintptr_t)(&v33), a5);
          v27 = &dword_213B814;
          if ( v37 != 0 )
          {
            if ( v37 <= (unsigned int)(uintptr_t)(v35) )
            {
              v20 = &v28;
              sub_11A9950(&v28, v36, v35);
            }
            else
            {
              v20 = &v29;
              sub_11A9950(&v29, v36, (uint8_t *)v37);
            }
            g4_std::string::assign_str(&v27, v20);
            g4_std::string::Destroy(v20);
          }
          else
          {
            g4_std::string::assign_str(&v27, &v41);
          }
          Json::Value::asString((Json::Value::Self *)&v26, (int)(uintptr_t)(a4));
          v17 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(v25), v17);
          v18 = gaia::Gaia::GetInstance();
          v21 = gaia::Seshat::SetProfileVisibilitySelector(
                  *(gaia::BaseServiceManager::Self **)(v18 + 8),
                  (int)(uintptr_t)(v25),
                  (int)(uintptr_t)(&v26),
                  (int)(uintptr_t)(&v27),
                  0);
          g4_std::string::Destroy(v25);
          g4_std::string::Destroy(&v26);
          g4_std::string::Destroy(&v27);
          v31 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
          v42[0] = (uint32_t)(uintptr_t)(&off_20AB014);
          v33 = (int)((uint32_t)(uintptr_t)&off_20AB000);
          v34[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
          g4_std::string::Destroy(&v41);
          v34[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
          sub_1902180(v39);
          v31 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
          *(int (***)(int))((char *)&v31 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
          v33 = (int)(uintptr_t)(&off_20AAEEC);
          *(uint32_t *)((char *)&v34[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
          v31 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
          *(int (***)(int))((char *)&v31 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
          v32 = 0;
          v42[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
          sub_1900B90(v42);
          return v21;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Seshat::SetProfileVisibility  (binary VA: 0x14821b0)
// Original: gaia::Gaia_Seshat::SetProfileVisibility
// ----------------------------------------------------------------------------
int gaia::Gaia_Seshat::SetProfileVisibility(long double a1, gaia::Gaia::Self *a2, int a3, Json::Value::Self *a4, char a5, int a6, int a7)
{
  char IsInitialized;
  int result;
  int Instance;
  void *v10;
  uint32_t *v11;
  Json::Value::Self *v12;
  Json::Value::Self *v13;
  int v14;
  int v15;
  int v16;
  typedef gaia::ThreadManager::Self *_g4_t_v17;
  typedef gaia::Gaia::Self *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint8_t _g4_t_v23[4];
  typedef uint32_t *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint8_t _g4_t_v27[16];
  typedef int (**_g4_t_v28)(int);
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef uint32_t _g4_t_v31[3];
  typedef uint8_t *_g4_t_v32;
  typedef void *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef uint8_t _g4_t_v36[4];
  typedef int _g4_t_v37;
  typedef uint32_t *_g4_t_v38;
  typedef uint32_t _g4_t_v39[29];
  typedef char _g4_t_v40;
  typedef char _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  enum : size_t {
    _g4_s0 = 400u,
    _g4_s1 = (0u + sizeof(_g4_t_v17)) > _g4_s0 ? (0u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v18)) > _g4_s1 ? (32u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v19)) > _g4_s2 ? (36u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v20)) > _g4_s3 ? (36u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (76u + sizeof(_g4_t_v21)) > _g4_s4 ? (76u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (80u + sizeof(_g4_t_v22)) > _g4_s5 ? (80u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (84u + sizeof(_g4_t_v23)) > _g4_s6 ? (84u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (88u + sizeof(_g4_t_v24)) > _g4_s7 ? (88u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (92u + sizeof(_g4_t_v25)) > _g4_s8 ? (92u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (96u + sizeof(_g4_t_v26)) > _g4_s9 ? (96u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (100u + sizeof(_g4_t_v27)) > _g4_s10 ? (100u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (116u + sizeof(_g4_t_v28)) > _g4_s11 ? (116u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (120u + sizeof(_g4_t_v29)) > _g4_s12 ? (120u + sizeof(_g4_t_v29)) : _g4_s12,
    _g4_s14 = (124u + sizeof(_g4_t_v30)) > _g4_s13 ? (124u + sizeof(_g4_t_v30)) : _g4_s13,
    _g4_s15 = (128u + sizeof(_g4_t_v31)) > _g4_s14 ? (128u + sizeof(_g4_t_v31)) : _g4_s14,
    _g4_s16 = (140u + sizeof(_g4_t_v32)) > _g4_s15 ? (140u + sizeof(_g4_t_v32)) : _g4_s15,
    _g4_s17 = (144u + sizeof(_g4_t_v33)) > _g4_s16 ? (144u + sizeof(_g4_t_v33)) : _g4_s16,
    _g4_s18 = (148u + sizeof(_g4_t_v34)) > _g4_s17 ? (148u + sizeof(_g4_t_v34)) : _g4_s17,
    _g4_s19 = (152u + sizeof(_g4_t_v35)) > _g4_s18 ? (152u + sizeof(_g4_t_v35)) : _g4_s18,
    _g4_s20 = (156u + sizeof(_g4_t_v36)) > _g4_s19 ? (156u + sizeof(_g4_t_v36)) : _g4_s19,
    _g4_s21 = (160u + sizeof(_g4_t_v37)) > _g4_s20 ? (160u + sizeof(_g4_t_v37)) : _g4_s20,
    _g4_s22 = (164u + sizeof(_g4_t_v38)) > _g4_s21 ? (164u + sizeof(_g4_t_v38)) : _g4_s21,
    _g4_s23 = (168u + sizeof(_g4_t_v39)) > _g4_s22 ? (168u + sizeof(_g4_t_v39)) : _g4_s22,
    _g4_s24 = (284u + sizeof(_g4_t_v40)) > _g4_s23 ? (284u + sizeof(_g4_t_v40)) : _g4_s23,
    _g4_s25 = (285u + sizeof(_g4_t_v41)) > _g4_s24 ? (285u + sizeof(_g4_t_v41)) : _g4_s24,
    _g4_s26 = (288u + sizeof(_g4_t_v42)) > _g4_s25 ? (288u + sizeof(_g4_t_v42)) : _g4_s25,
    _g4_s27 = (292u + sizeof(_g4_t_v43)) > _g4_s26 ? (292u + sizeof(_g4_t_v43)) : _g4_s26,
    _g4_s28 = (296u + sizeof(_g4_t_v44)) > _g4_s27 ? (296u + sizeof(_g4_t_v44)) : _g4_s27,
    _g4_s29 = (300u + sizeof(_g4_t_v45)) > _g4_s28 ? (300u + sizeof(_g4_t_v45)) : _g4_s28
  };
  alignas(16) uint8_t _g4_sf[_g4_s29];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 36u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 76u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 80u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 84u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 88u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 92u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 96u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 100u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 116u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 120u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 124u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 128u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 140u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 144u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 148u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 152u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 156u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 160u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 164u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 168u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 284u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 285u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 288u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 292u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 296u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 300u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    result = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a3);
    if ( result == 0 )
    {
      if ( a5 != 0 )
      {
        v11 = (uint32_t *)opNew(0x44u);
        *v11 = a7;
        v11[1] = a6;
        v11[2] = 1015;
        Json::Value::Construct((int)(uintptr_t)(v11 + 3), nullptr);
        v11[7] = 0;
        v11[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v11 + 9), nullptr);
        v11[13] = 0;
        v11[14] = 0;
        v11[15] = 0;
        v11[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v27, a3);
        v12 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v11 + 3), "accountType");
        Json::Value::opAssign(v12, (const Json::Value::Self *)v27);
        Json::Value::Destroy((Json::Value::Self *)v27);
        v13 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v11 + 3), "visibility");
        Json::Value::opAssign(v13, a4);
        v14 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v17));
        return gaia::ThreadManager::pushTask(v14, v11);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "storage", (int)(uintptr_t)(&v21));
        result = gaia::Gaia_Seshat::StartAndAuthorizeSeshat(a2, a3, &v22);
        v10 = (void *)(v22 - 12);
        if ( (uint32_t *)(v22 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
        {
          v20 = result;
          g4_std::string::Rep::M_destroy(v10);
          result = v20;
        }
        if ( result == 0 )
        {
          sub_1900810(v39);
          v39[28] = 0;
          v40 = 0;
          v41 = 0;
          v42 = 0;
          v43 = 0;
          v44 = 0;
          v45 = 0;
          v39[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
          v28 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
          *(int (***)(int))((char *)&v28 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
          v29 = 0;
          sub_19119D0((char *)&v28 + (uint32_t)(uintptr_t)(*(v28 - 3)), 0);
          v30 = (int)(uintptr_t)(&off_20AAEEC);
          *(uint32_t *)((char *)&v31[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
          sub_19119D0((char *)&v31[-1] + *(uint32_t *)(v30 - 12), 0);
          v28 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
          *(int (***)(int))((char *)&v28 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
          v31[1] = 0;
          v31[2] = 0;
          v32 = nullptr;
          v33 = nullptr;
          v34 = 0;
          v35 = 0;
          v28 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
          v39[0] = (uint32_t)(uintptr_t)(&off_20AB014);
          v30 = (int)((uint32_t)(uintptr_t)&off_20AB000);
          v31[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
          sub_1903A70(v36);
          v38 = &dword_213B814;
          v31[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
          v37 = 24;
          sub_19119D0(v39, v31);
          Json::opShl(a1, (int)(uintptr_t)(&v30), a4);
          v24 = &dword_213B814;
          if ( v34 != 0 )
          {
            if ( v34 <= (unsigned int)(uintptr_t)(v32) )
            {
              v18 = (gaia::Gaia::Self *)&v25;
              sub_11A9950(&v25, v33, v32);
            }
            else
            {
              v18 = (gaia::Gaia::Self *)&v26;
              sub_11A9950(&v26, v33, (uint8_t *)v34);
            }
            g4_std::string::assign_str(&v24, v18);
            g4_std::string::Destroy(v18);
          }
          else
          {
            g4_std::string::assign_str(&v24, &v38);
          }
          v15 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(v23), v15);
          v16 = gaia::Gaia::GetInstance();
          v19 = gaia::Seshat::SetProfileVisibility(*(gaia::BaseServiceManager::Self **)(v16 + 8), (int)(uintptr_t)(v23), (int)(uintptr_t)(&v24), 0);
          g4_std::string::Destroy(v23);
          g4_std::string::Destroy(&v24);
          v28 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
          v39[0] = (uint32_t)(uintptr_t)(&off_20AB014);
          v30 = (int)((uint32_t)(uintptr_t)&off_20AB000);
          v31[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
          g4_std::string::Destroy(&v38);
          v31[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
          sub_1902180(v36);
          v28 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
          *(int (***)(int))((char *)&v28 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
          v30 = (int)(uintptr_t)(&off_20AAEEC);
          *(uint32_t *)((char *)&v31[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
          v28 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
          *(int (***)(int))((char *)&v28 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
          v29 = 0;
          v39[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
          sub_1900B90(v39);
          return v19;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Seshat::DeleteProfile  (binary VA: 0x1482790)
// Original: gaia::Gaia_Seshat::DeleteProfile
// ----------------------------------------------------------------------------
int gaia::Gaia_Seshat::DeleteProfile(gaia::Gaia::Self *a1, int a2, char a3, int a4, int a5)
{
  char IsInitialized;
  int result;
  int Instance;
  void *v8;
  uint32_t *v9;
  Json::Value::Self *v10;
  int v11;
  int v12;
  int v13;
  typedef gaia::ThreadManager::Self *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint16_t _g4_t_v17[3];
  typedef int _g4_t_v18;
  typedef uint8_t _g4_t_v19[28];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v15)) > _g4_s1 ? (28u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v16)) > _g4_s2 ? (28u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (38u + sizeof(_g4_t_v17)) > _g4_s3 ? (38u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v18)) > _g4_s4 ? (44u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v19)) > _g4_s5 ? (48u + sizeof(_g4_t_v19)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 38u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    result = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
    if ( result == 0 )
    {
      if ( a3 != 0 )
      {
        v9 = (uint32_t *)opNew(0x44u);
        *v9 = a5;
        v9[1] = a4;
        v9[2] = 1009;
        Json::Value::Construct((int)(uintptr_t)(v9 + 3), nullptr);
        v9[7] = 0;
        v9[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v9 + 9), nullptr);
        v9[13] = 0;
        v9[14] = 0;
        v9[15] = 0;
        v9[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v19, a2);
        v10 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v9 + 3), "accountType");
        Json::Value::opAssign(v10, (const Json::Value::Self *)v19);
        Json::Value::Destroy((Json::Value::Self *)v19);
        v11 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v14));
        return gaia::ThreadManager::pushTask(v11, v9);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17[1]), "storage", (int)(uintptr_t)(v17));
        result = gaia::Gaia_Seshat::StartAndAuthorizeSeshat(a1, a2, &v17[1]);
        v8 = (void *)(*(uint32_t *)&v17[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v17[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v17[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          v16 = result;
          g4_std::string::Rep::M_destroy(v8);
          result = v16;
        }
        if ( result == 0 )
        {
          v12 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(&v18), v12);
          v13 = gaia::Gaia::GetInstance();
          v15 = gaia::Seshat::DeleteProfile(*(gaia::BaseServiceManager::Self **)(v13 + 8), (int)(uintptr_t)(&v18), 0);
          g4_std::string::Destroy(&v18);
          return v15;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Seshat::GetProfile  (binary VA: 0x1482990)
// Original: gaia::Gaia_Seshat::GetProfile
// ----------------------------------------------------------------------------
int gaia::Gaia_Seshat::GetProfile(gaia::Gaia::Self *a1, int a2, int a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, char a7, int a8, int a9)
{
  int InitializationAndLoginStatus;
  int Instance;
  void *v11;
  uint32_t *v13;
  Json::Value::Self *v14;
  Json::Value::Self *v15;
  Json::Value::Self *v16;
  Json::Value::Self *v17;
  int v18;
  int v19;
  int v20;
  Json::Value::Self *v21;
  bool v22;
  int v23;
  typedef gaia::ThreadManager::Self *_g4_t_ptr;
  typedef Json::Value::Self *_g4_t_v25;
  typedef uint16_t _g4_t_v26[3];
  typedef char *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef uint8_t _g4_t_v29[4];
  typedef uint8_t _g4_t_v30[16];
  typedef uint8_t _g4_t_v31[16];
  typedef uint8_t _g4_t_v32[16];
  typedef uint8_t _g4_t_v33[16];
  typedef uint8_t _g4_t_v34[16];
  typedef uint8_t _g4_t_v35[16];
  typedef uint8_t _g4_t_v36[16];
  typedef int _g4_t_v37;
  typedef uint8_t _g4_t_v38[124];
  enum : size_t {
    _g4_s0 = 400u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v25)) > _g4_s1 ? (40u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (58u + sizeof(_g4_t_v26)) > _g4_s2 ? (58u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v27)) > _g4_s3 ? (64u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (68u + sizeof(_g4_t_v28)) > _g4_s4 ? (68u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v29)) > _g4_s5 ? (72u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v30)) > _g4_s6 ? (76u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (92u + sizeof(_g4_t_v31)) > _g4_s7 ? (92u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (108u + sizeof(_g4_t_v32)) > _g4_s8 ? (108u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (124u + sizeof(_g4_t_v33)) > _g4_s9 ? (124u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (140u + sizeof(_g4_t_v34)) > _g4_s10 ? (140u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (156u + sizeof(_g4_t_v35)) > _g4_s11 ? (156u + sizeof(_g4_t_v35)) : _g4_s11,
    _g4_s13 = (172u + sizeof(_g4_t_v36)) > _g4_s12 ? (172u + sizeof(_g4_t_v36)) : _g4_s12,
    _g4_s14 = (188u + sizeof(_g4_t_v37)) > _g4_s13 ? (188u + sizeof(_g4_t_v37)) : _g4_s13,
    _g4_s15 = (192u + sizeof(_g4_t_v38)) > _g4_s14 ? (192u + sizeof(_g4_t_v38)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 58u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 64u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 68u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 72u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 76u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 92u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 108u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 124u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 140u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 156u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 172u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 188u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 192u);

  gaia::Gaia::GetInstance();
  InitializationAndLoginStatus = -21;
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    InitializationAndLoginStatus = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
    if ( InitializationAndLoginStatus == 0 )
    {
      if ( a7 != 0 )
      {
        v13 = (uint32_t *)opNew(0x44u);
        *v13 = a9;
        v13[1] = a8;
        v13[2] = 1008;
        Json::Value::Construct((int)(uintptr_t)(v13 + 3), nullptr);
        v13[7] = 0;
        v13[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v13 + 9), nullptr);
        v13[13] = 0;
        v13[14] = 0;
        v13[15] = 0;
        v13[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v30, a2);
        v14 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "accountType");
        Json::Value::opAssign(v14, (const Json::Value::Self *)v30);
        Json::Value::Destroy((Json::Value::Self *)v30);
        Json::Value::Construct((int)(uintptr_t)(v31), a6);
        v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "selector");
        Json::Value::opAssign(v15, (const Json::Value::Self *)v31);
        Json::Value::Destroy((Json::Value::Self *)v31);
        Json::Value::Construct((int)(uintptr_t)(v32), a5);
        v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "include_fields");
        Json::Value::opAssign(v16, (const Json::Value::Self *)v32);
        Json::Value::Destroy((Json::Value::Self *)v32);
        Json::Value::Construct((int)(uintptr_t)(v33), a4);
        v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "forCredential");
        Json::Value::opAssign(v17, (const Json::Value::Self *)v33);
        Json::Value::Destroy((Json::Value::Self *)v33);
        v13[7] = a3;
        v18 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(ptr));
        return gaia::ThreadManager::pushTask(v18, v13);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26[1]), "storage", (int)(uintptr_t)(v26));
        InitializationAndLoginStatus = gaia::Gaia_Seshat::StartAndAuthorizeSeshat(a1, a2, &v26[1]);
        v11 = (void *)(*(uint32_t *)&v26[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v26[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v26[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v11);
        }
        if ( InitializationAndLoginStatus == 0 )
        {
          v27 = nullptr;
          v19 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(v29), v19);
          v20 = gaia::Gaia::GetInstance();
          InitializationAndLoginStatus = gaia::Seshat::GetProfile(
                                           *(gaia::BaseServiceManager::Self **)(v20 + 8),
                                           (int)(uintptr_t)(v29),
                                           (int)(uintptr_t)(a4),
                                           (void **)&v27,
                                           &v28,
                                           (int)(uintptr_t)(a6),
                                           (int)(uintptr_t)(a5),
                                           0);
          g4_std::string::Destroy(v29);
          if ( InitializationAndLoginStatus == 0 )
          {
            Json::Reader::Construct((Json::Reader::Self *)v38);
            Json::Value::Construct((int)(uintptr_t)(v34), nullptr);
            if ( (uint8_t)Json::Reader::parse((Json::Reader::Self *)v38, v27, &v27[v28], (Json::Value::Self *)v34, true) == 0 )
            {
              InitializationAndLoginStatus = -12;
              free(v27);
              Json::Value::Destroy((Json::Value::Self *)v34);
              sub_545800((int)(uintptr_t)(v38));
              return InitializationAndLoginStatus;
            }
            Json::Value::Construct((Json::Value::Self *)v35, (const Json::Value::Self *)v34);
            gaia::BaseJSONServiceResponse::Construct((Json::Value::Self *)v36, (Json::Value::Self *)v35);
            Json::Value::Destroy((Json::Value::Self *)v35);
            v21 = *(Json::Value::Self **)(a3 + 4);
            v22 = v21 == *(Json::Value::Self **)(a3 + 8);
            v37 = 21;
            if ( v22 )
            {
              g4_std::vector_gaia_BaseJSONServiceResp_48cd2f::M_insert_aux(a3, v21, (Json::Value::Self *)v36);
            }
            else
            {
              v23 = 0;
              if ( v21 != nullptr )
              {
                v25 = v21;
                Json::Value::Construct(v21, (const Json::Value::Self *)v36);
                *((uint32_t *)v25 + 4) = v37;
                v23 = *(uint32_t *)(a3 + 4);
              }
              *(uint32_t *)(a3 + 4) = v23 + 20;
            }
            gaia::BaseJSONServiceResponse::Destroy((gaia::BaseJSONServiceResponse::Self *)v36);
            Json::Value::Destroy((Json::Value::Self *)v34);
            sub_545800((int)(uintptr_t)(v38));
          }
          free(v27);
        }
      }
    }
  }
  return InitializationAndLoginStatus;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Seshat::SetProfile  (binary VA: 0x1482e30)
// Original: gaia::Gaia_Seshat::SetProfile
// ----------------------------------------------------------------------------
int gaia::Gaia_Seshat::SetProfile(long double a1, gaia::Gaia::Self *a2, int a3, Json::Value::Self *a4, int a5, uint32_t *a6, uint32_t *a7, uint32_t *a8, char a9, int a10, int a11)
{
  char v11; // di
  char IsInitialized;
  int result;
  int Instance;
  void *v15;
  void *v16;
  int v17;
  int v18;
  uint32_t *v19;
  Json::Value::Self *v20;
  Json::Value::Self *v21;
  Json::Value::Self *v22;
  Json::Value::Self *v23;
  Json::Value::Self *v24;
  Json::Value::Self *v25;
  int v26;
  typedef gaia::ThreadManager::Self *_g4_t_v27;
  typedef gaia::Gaia::Self *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef uint8_t _g4_t_v33[5];
  typedef int _g4_t_v34;
  typedef uint8_t _g4_t_v35[4];
  typedef uint32_t *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef uint8_t _g4_t_v39[16];
  typedef uint8_t _g4_t_v40[16];
  typedef uint8_t _g4_t_v41[16];
  typedef uint8_t _g4_t_v42[16];
  typedef uint8_t _g4_t_v43[16];
  typedef int (**_g4_t_v44)(int);
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef uint32_t _g4_t_v47[3];
  typedef uint8_t *_g4_t_v48;
  typedef void *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef uint8_t _g4_t_v52[4];
  typedef int _g4_t_v53;
  typedef uint32_t *_g4_t_v54;
  typedef uint32_t _g4_t_v55[29];
  typedef char _g4_t_v56;
  typedef char _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  enum : size_t {
    _g4_s0 = 480u,
    _g4_s1 = (0u + sizeof(_g4_t_v27)) > _g4_s0 ? (0u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (48u + sizeof(_g4_t_v28)) > _g4_s1 ? (48u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (52u + sizeof(_g4_t_v29)) > _g4_s2 ? (52u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v30)) > _g4_s3 ? (52u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v31)) > _g4_s4 ? (52u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (86u + sizeof(_g4_t_v32)) > _g4_s5 ? (86u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (91u + sizeof(_g4_t_v33)) > _g4_s6 ? (91u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v34)) > _g4_s7 ? (96u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (100u + sizeof(_g4_t_v35)) > _g4_s8 ? (100u + sizeof(_g4_t_v35)) : _g4_s8,
    _g4_s10 = (104u + sizeof(_g4_t_v36)) > _g4_s9 ? (104u + sizeof(_g4_t_v36)) : _g4_s9,
    _g4_s11 = (108u + sizeof(_g4_t_v37)) > _g4_s10 ? (108u + sizeof(_g4_t_v37)) : _g4_s10,
    _g4_s12 = (112u + sizeof(_g4_t_v38)) > _g4_s11 ? (112u + sizeof(_g4_t_v38)) : _g4_s11,
    _g4_s13 = (116u + sizeof(_g4_t_v39)) > _g4_s12 ? (116u + sizeof(_g4_t_v39)) : _g4_s12,
    _g4_s14 = (132u + sizeof(_g4_t_v40)) > _g4_s13 ? (132u + sizeof(_g4_t_v40)) : _g4_s13,
    _g4_s15 = (148u + sizeof(_g4_t_v41)) > _g4_s14 ? (148u + sizeof(_g4_t_v41)) : _g4_s14,
    _g4_s16 = (164u + sizeof(_g4_t_v42)) > _g4_s15 ? (164u + sizeof(_g4_t_v42)) : _g4_s15,
    _g4_s17 = (180u + sizeof(_g4_t_v43)) > _g4_s16 ? (180u + sizeof(_g4_t_v43)) : _g4_s16,
    _g4_s18 = (196u + sizeof(_g4_t_v44)) > _g4_s17 ? (196u + sizeof(_g4_t_v44)) : _g4_s17,
    _g4_s19 = (200u + sizeof(_g4_t_v45)) > _g4_s18 ? (200u + sizeof(_g4_t_v45)) : _g4_s18,
    _g4_s20 = (204u + sizeof(_g4_t_v46)) > _g4_s19 ? (204u + sizeof(_g4_t_v46)) : _g4_s19,
    _g4_s21 = (208u + sizeof(_g4_t_v47)) > _g4_s20 ? (208u + sizeof(_g4_t_v47)) : _g4_s20,
    _g4_s22 = (220u + sizeof(_g4_t_v48)) > _g4_s21 ? (220u + sizeof(_g4_t_v48)) : _g4_s21,
    _g4_s23 = (224u + sizeof(_g4_t_v49)) > _g4_s22 ? (224u + sizeof(_g4_t_v49)) : _g4_s22,
    _g4_s24 = (228u + sizeof(_g4_t_v50)) > _g4_s23 ? (228u + sizeof(_g4_t_v50)) : _g4_s23,
    _g4_s25 = (232u + sizeof(_g4_t_v51)) > _g4_s24 ? (232u + sizeof(_g4_t_v51)) : _g4_s24,
    _g4_s26 = (236u + sizeof(_g4_t_v52)) > _g4_s25 ? (236u + sizeof(_g4_t_v52)) : _g4_s25,
    _g4_s27 = (240u + sizeof(_g4_t_v53)) > _g4_s26 ? (240u + sizeof(_g4_t_v53)) : _g4_s26,
    _g4_s28 = (244u + sizeof(_g4_t_v54)) > _g4_s27 ? (244u + sizeof(_g4_t_v54)) : _g4_s27,
    _g4_s29 = (248u + sizeof(_g4_t_v55)) > _g4_s28 ? (248u + sizeof(_g4_t_v55)) : _g4_s28,
    _g4_s30 = (364u + sizeof(_g4_t_v56)) > _g4_s29 ? (364u + sizeof(_g4_t_v56)) : _g4_s29,
    _g4_s31 = (365u + sizeof(_g4_t_v57)) > _g4_s30 ? (365u + sizeof(_g4_t_v57)) : _g4_s30,
    _g4_s32 = (368u + sizeof(_g4_t_v58)) > _g4_s31 ? (368u + sizeof(_g4_t_v58)) : _g4_s31,
    _g4_s33 = (372u + sizeof(_g4_t_v59)) > _g4_s32 ? (372u + sizeof(_g4_t_v59)) : _g4_s32,
    _g4_s34 = (376u + sizeof(_g4_t_v60)) > _g4_s33 ? (376u + sizeof(_g4_t_v60)) : _g4_s33,
    _g4_s35 = (380u + sizeof(_g4_t_v61)) > _g4_s34 ? (380u + sizeof(_g4_t_v61)) : _g4_s34
  };
  alignas(16) uint8_t _g4_sf[_g4_s35];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 0u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 52u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 52u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 52u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 86u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 91u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 96u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 100u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 104u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 108u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 112u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 116u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 132u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 148u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 164u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 180u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 196u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 200u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 204u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 208u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 220u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 224u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 228u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 232u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 236u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 240u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 244u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 248u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 364u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 365u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 368u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 372u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 376u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 380u);

  v11 = a9;
  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    result = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a3);
    if ( result == 0 )
    {
      if ( v11 != 0 )
      {
        v19 = (uint32_t *)opNew(0x44u);
        *v19 = a11;
        v19[1] = a10;
        v19[2] = 1007;
        Json::Value::Construct((int)(uintptr_t)(v19 + 3), nullptr);
        v19[7] = 0;
        v19[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v19 + 9), nullptr);
        v19[13] = 0;
        v19[14] = 0;
        v19[15] = 0;
        v19[16] = 0;
        v20 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v19 + 3), "profile");
        Json::Value::opAssign(v20, a4);
        Json::Value::Construct((Json::Value::Self *)v39, a3);
        v21 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v19 + 3), "accountType");
        Json::Value::opAssign(v21, (const Json::Value::Self *)v39);
        Json::Value::Destroy((Json::Value::Self *)v39);
        Json::Value::Construct((Json::Value::Self *)v40, a5);
        v22 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v19 + 3), "visibility");
        Json::Value::opAssign(v22, (const Json::Value::Self *)v40);
        Json::Value::Destroy((Json::Value::Self *)v40);
        Json::Value::Construct((int)(uintptr_t)(v41), a6);
        v23 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v19 + 3), "forCredential");
        Json::Value::opAssign(v23, (const Json::Value::Self *)v41);
        Json::Value::Destroy((Json::Value::Self *)v41);
        Json::Value::Construct((int)(uintptr_t)(v42), a7);
        v24 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v19 + 3), "selector");
        Json::Value::opAssign(v24, (const Json::Value::Self *)v42);
        Json::Value::Destroy((Json::Value::Self *)v42);
        Json::Value::Construct((int)(uintptr_t)(v43), a8);
        v25 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v19 + 3), "operation");
        Json::Value::opAssign(v25, (const Json::Value::Self *)v43);
        Json::Value::Destroy((Json::Value::Self *)v43);
        v26 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v27));
        return gaia::ThreadManager::pushTask(v26, v19);
      }
      else
      {
        if ( a5 != 0 )
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "storage", (int)(uintptr_t)(&v32) + 1);
          result = gaia::Gaia_Seshat::StartAndAuthorizeSeshat(a2, a3, &v34);
          v16 = (void *)(v34 - 12);
          if ( (uint32_t *)(v34 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
          {
            v29 = result;
            g4_std::string::Rep::M_destroy(v16);
            result = v29;
          }
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33[1]), "storage storage_restricted", (int)(uintptr_t)(&v32));
          result = gaia::Gaia_Seshat::StartAndAuthorizeSeshat(a2, a3, &v33[1]);
          v15 = (void *)(*(uint32_t *)&v33[1] - 12);
          if ( (uint32_t *)(*(uint32_t *)&v33[1] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v33[1] - 4), 0xFFFFFFFF) <= 0 )
          {
            v31 = result;
            g4_std::string::Rep::M_destroy(v15);
            result = v31;
          }
        }
        if ( result == 0 )
        {
          sub_1900810(v55);
          v55[28] = 0;
          v56 = 0;
          v57 = 0;
          v58 = 0;
          v59 = 0;
          v60 = 0;
          v61 = 0;
          v55[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
          v44 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
          *(int (***)(int))((char *)&v44 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
          v45 = 0;
          sub_19119D0((char *)&v44 + (uint32_t)(uintptr_t)(*(v44 - 3)), 0);
          v46 = (int)(uintptr_t)(&off_20AAEEC);
          *(uint32_t *)((char *)&v47[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
          sub_19119D0((char *)&v47[-1] + *(uint32_t *)(v46 - 12), 0);
          v44 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
          *(int (***)(int))((char *)&v44 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
          v47[1] = 0;
          v47[2] = 0;
          v48 = nullptr;
          v49 = nullptr;
          v50 = 0;
          v51 = 0;
          v44 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
          v55[0] = (uint32_t)(uintptr_t)(&off_20AB014);
          v46 = (int)((uint32_t)(uintptr_t)&off_20AB000);
          v47[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
          sub_1903A70(v52);
          v54 = &dword_213B814;
          v47[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
          v53 = 24;
          sub_19119D0(v55, v47);
          Json::opShl(a1, (int)(uintptr_t)(&v46), a4);
          v36 = &dword_213B814;
          if ( v50 != 0 )
          {
            if ( v50 <= (unsigned int)(uintptr_t)(v48) )
            {
              v28 = (gaia::Gaia::Self *)&v37;
              sub_11A9950(&v37, v49, v48);
            }
            else
            {
              v28 = (gaia::Gaia::Self *)&v38;
              sub_11A9950(&v38, v49, (uint8_t *)v50);
            }
            g4_std::string::assign_str(&v36, v28);
            g4_std::string::Destroy(v28);
          }
          else
          {
            g4_std::string::assign_str(&v36, &v54);
          }
          v17 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(v35), v17);
          v18 = gaia::Gaia::GetInstance();
          v30 = gaia::Seshat::SetProfile(
                  *(gaia::BaseServiceManager::Self **)(v18 + 8),
                  (int)(uintptr_t)(v35),
                  (int)(uintptr_t)(&v36),
                  (int)(uintptr_t)(&a5),
                  (int)(uintptr_t)(a6),
                  (int)(uintptr_t)(a7),
                  (int)(uintptr_t)(a8),
                  0);
          g4_std::string::Destroy(v35);
          g4_std::string::Destroy(&v36);
          v44 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
          v55[0] = (uint32_t)(uintptr_t)(&off_20AB014);
          v46 = (int)((uint32_t)(uintptr_t)&off_20AB000);
          v47[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
          g4_std::string::Destroy(&v54);
          v47[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
          sub_1902180(v52);
          v44 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
          *(int (***)(int))((char *)&v44 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
          v46 = (int)(uintptr_t)(&off_20AAEEC);
          *(uint32_t *)((char *)&v47[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
          v44 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
          *(int (***)(int))((char *)&v44 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
          v45 = 0;
          v55[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
          sub_1900B90(v55);
          return v30;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Seshat::DeleteData  (binary VA: 0x14835e0)
// Original: gaia::Gaia_Seshat::DeleteData
// ----------------------------------------------------------------------------
char gaia::Gaia_Seshat::DeleteData(gaia::Gaia::Self *a1, uint32_t *a2, int a3, char a4, int a5, int a6)
{
  char IsInitialized;
  unsigned int InitializationAndLoginStatus;
  int Instance;
  void *v9;
  uint32_t *v10;
  Json::Value::Self *v11;
  Json::Value::Self *v12;
  int v13;
  int v14;
  int v15;
  typedef gaia::ThreadManager::Self *_g4_t_v17;
  typedef char _g4_t_v18;
  typedef Json::Value::Self *_g4_t_v19;
  typedef uint16_t _g4_t_v20[3];
  typedef int _g4_t_v21;
  typedef uint8_t _g4_t_v22[16];
  typedef uint8_t _g4_t_v23[28];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v17)) > _g4_s0 ? (0u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v18)) > _g4_s1 ? (28u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v19)) > _g4_s2 ? (28u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (38u + sizeof(_g4_t_v20)) > _g4_s3 ? (38u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v21)) > _g4_s4 ? (44u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v22)) > _g4_s5 ? (48u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v23)) > _g4_s6 ? (64u + sizeof(_g4_t_v23)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 38u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 48u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 64u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  LOBYTE(InitializationAndLoginStatus) = -21;
  if ( IsInitialized != 0 )
  {
    LOBYTE(InitializationAndLoginStatus) = -22;
    if ( *(uint32_t *)(*a2 - 12) != 0 )
    {
      Instance = gaia::Gaia::GetInstance();
      InitializationAndLoginStatus = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a3);
      if ( InitializationAndLoginStatus == 0 )
      {
        if ( a4 != 0 )
        {
          v10 = (uint32_t *)opNew(0x44u);
          *v10 = a6;
          v10[1] = a5;
          v10[2] = 1004;
          Json::Value::Construct((int)(uintptr_t)(v10 + 3), nullptr);
          v10[7] = 0;
          v10[8] = 0;
          Json::Value::Construct((int)(uintptr_t)(v10 + 9), nullptr);
          v10[13] = 0;
          v10[14] = 0;
          v10[15] = 0;
          v10[16] = 0;
          Json::Value::Construct((Json::Value::Self *)v22, a3);
          v11 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v10 + 3), "accountType");
          Json::Value::opAssign(v11, (const Json::Value::Self *)v22);
          Json::Value::Destroy((Json::Value::Self *)v22);
          Json::Value::Construct((int)(uintptr_t)(v23), a2);
          v12 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v10 + 3), "key");
          Json::Value::opAssign(v12, (const Json::Value::Self *)v23);
          Json::Value::Destroy((Json::Value::Self *)v23);
          v13 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v17));
          LOBYTE(InitializationAndLoginStatus) = gaia::ThreadManager::pushTask(v13, v10);
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20[1]), "storage", (int)(uintptr_t)(v20));
          InitializationAndLoginStatus = gaia::Gaia_Seshat::StartAndAuthorizeSeshat(a1, a3, &v20[1]);
          v9 = (void *)(*(uint32_t *)&v20[1] - 12);
          if ( (uint32_t *)(*(uint32_t *)&v20[1] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v20[1] - 4), 0xFFFFFFFF) <= 0 )
          {
            v19 = (Json::Value::Self *)InitializationAndLoginStatus;
            g4_std::string::Rep::M_destroy(v9);
            InitializationAndLoginStatus = (unsigned int)(uintptr_t)(v19);
          }
          if ( InitializationAndLoginStatus == 0 )
          {
            v14 = gaia::Gaia::GetInstance();
            gaia::Gaia::GetJanusToken((int)(uintptr_t)(&v21), v14);
            v15 = gaia::Gaia::GetInstance();
            v18 = gaia::Seshat::DeleteData(*(gaia::BaseServiceManager::Self **)(v15 + 8), (int)(uintptr_t)(&v21), (int)(uintptr_t)(a2), 0);
            g4_std::string::Destroy(&v21);
            LOBYTE(InitializationAndLoginStatus) = v18;
          }
        }
      }
    }
  }
  return InitializationAndLoginStatus;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Seshat::DeprecatedGetData  (binary VA: 0x1483840)
// Original: gaia::Gaia_Seshat::DeprecatedGetData
// ----------------------------------------------------------------------------
char gaia::Gaia_Seshat::DeprecatedGetData(gaia::Gaia::Self *a1, uint32_t *a2, void **a3, int *a4, int a5, int a6, uint32_t *a7, char a8, int a9, int a10)
{
  char IsInitialized;
  unsigned int InitializationAndLoginStatus;
  int Instance;
  void *v13;
  uint32_t *v14;
  Json::Value::Self *v15;
  Json::Value::Self *v16;
  Json::Value::Self *v17;
  Json::Value::Self *v18;
  int v19;
  int v20;
  int v21;
  typedef gaia::ThreadManager::Self *_g4_t_v23;
  typedef char _g4_t_Data;
  typedef char *_g4_t_v25;
  typedef uint8_t _g4_t_v26[7];
  typedef int _g4_t_v27;
  typedef uint8_t _g4_t_v28[4];
  typedef uint8_t _g4_t_v29[4];
  typedef uint8_t _g4_t_v30[16];
  typedef uint8_t _g4_t_v31[16];
  typedef uint8_t _g4_t_v32[16];
  typedef uint8_t _g4_t_v33[28];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v23)) > _g4_s0 ? (0u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_Data)) > _g4_s1 ? (40u + sizeof(_g4_t_Data)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v25)) > _g4_s2 ? (40u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (61u + sizeof(_g4_t_v26)) > _g4_s3 ? (61u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (68u + sizeof(_g4_t_v27)) > _g4_s4 ? (68u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v28)) > _g4_s5 ? (72u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v29)) > _g4_s6 ? (76u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v30)) > _g4_s7 ? (80u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (96u + sizeof(_g4_t_v31)) > _g4_s8 ? (96u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (112u + sizeof(_g4_t_v32)) > _g4_s9 ? (112u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (128u + sizeof(_g4_t_v33)) > _g4_s10 ? (128u + sizeof(_g4_t_v33)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_Data &Data = *reinterpret_cast<_g4_t_Data *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 61u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 68u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 72u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 76u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 80u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 96u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 112u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 128u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  LOBYTE(InitializationAndLoginStatus) = -21;
  if ( IsInitialized != 0 )
  {
    LOBYTE(InitializationAndLoginStatus) = -22;
    if ( *(uint32_t *)(*a2 - 12) != 0 )
    {
      Instance = gaia::Gaia::GetInstance();
      InitializationAndLoginStatus = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a5);
      if ( InitializationAndLoginStatus == 0 )
      {
        if ( a8 != 0 )
        {
          v14 = (uint32_t *)opNew(0x44u);
          *v14 = a10;
          v14[1] = a9;
          v14[2] = 1003;
          Json::Value::Construct((int)(uintptr_t)(v14 + 3), nullptr);
          v14[7] = 0;
          v14[8] = 0;
          Json::Value::Construct((int)(uintptr_t)(v14 + 9), nullptr);
          v14[13] = 0;
          v14[14] = 0;
          v14[15] = 0;
          v14[16] = 0;
          Json::Value::Construct((int)(uintptr_t)(v30), a2);
          v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "key");
          Json::Value::opAssign(v15, (const Json::Value::Self *)v30);
          Json::Value::Destroy((Json::Value::Self *)v30);
          Json::Value::Construct((Json::Value::Self *)v31, a5);
          v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "accountType");
          Json::Value::opAssign(v16, (const Json::Value::Self *)v31);
          Json::Value::Destroy((Json::Value::Self *)v31);
          Json::Value::Construct((int)(uintptr_t)(v32), a7);
          v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "forUsername");
          Json::Value::opAssign(v17, (const Json::Value::Self *)v32);
          Json::Value::Destroy((Json::Value::Self *)v32);
          Json::Value::Construct((Json::Value::Self *)v33, a6);
          v18 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "forCredentials");
          Json::Value::opAssign(v18, (const Json::Value::Self *)v33);
          Json::Value::Destroy((Json::Value::Self *)v33);
          v14[15] = (uint32_t)(uintptr_t)(a3);
          v14[16] = (uint32_t)(uintptr_t)(a4);
          v19 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v23));
          LOBYTE(InitializationAndLoginStatus) = gaia::ThreadManager::pushTask(v19, v14);
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26[3]), "storage", (int)(uintptr_t)(v26));
          InitializationAndLoginStatus = gaia::Gaia_Seshat::StartAndAuthorizeSeshat(a1, a5, &v26[3]);
          v13 = (void *)(*(uint32_t *)&v26[3] - 12);
          if ( (uint32_t *)(*(uint32_t *)&v26[3] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v26[3] - 4), 0xFFFFFFFF) <= 0 )
          {
            v25 = (char *)InitializationAndLoginStatus;
            g4_std::string::Rep::M_destroy(v13);
            InitializationAndLoginStatus = (unsigned int)(uintptr_t)(v25);
          }
          if ( InitializationAndLoginStatus == 0 )
          {
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "me", (int)(uintptr_t)(&v26[1]));
            if ( *(uint32_t *)(*a7 - 12) != 0 && g4_std::string::compare((int)(uintptr_t)(a7), "me") != 0 )
            {
              g4_std_compat::string_assign((int)(uintptr_t)(&v27), &unk_1B15112, 0);
              gaia::BaseServiceManager::GetCredentialString(v28);
              g4_std::string::append_str(&v27, v28);
              g4_std::string::Destroy(v28);
              g4_std::string::append((int)(uintptr_t)(&v27), ":", 1u);
              g4_std::string::append_str(&v27, a7);
            }
            v20 = gaia::Gaia::GetInstance();
            gaia::Gaia::GetJanusToken((int)(uintptr_t)(v29), v20);
            v21 = gaia::Gaia::GetInstance();
            Data = gaia::Seshat::GetData(
                     *(gaia::BaseServiceManager::Self **)(v21 + 8),
                     (int)(uintptr_t)(v29),
                     (int)(uintptr_t)(a2),
                     a3,
                     a4,
                     (int)(uintptr_t)(&v27),
                     0);
            g4_std::string::Destroy(v29);
            g4_std::string::Destroy(&v27);
            LOBYTE(InitializationAndLoginStatus) = Data;
          }
        }
      }
    }
  }
  return InitializationAndLoginStatus;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Seshat::GetDataCheckEtag  (binary VA: 0x1483c60)
// Original: gaia::Gaia_Seshat::GetDataCheckEtag
// ----------------------------------------------------------------------------
int gaia::Gaia_Seshat::GetDataCheckEtag(gaia::Gaia::Self *a1, uint32_t *a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, char a9, int a10, int a11)
{
  char IsInitialized;
  int result;
  int Instance;
  void *v14;
  uint32_t *v15;
  Json::Value::Self *v16;
  Json::Value::Self *v17;
  Json::Value::Self *v18;
  Json::Value::Self *v19;
  Json::Value::Self *v20;
  int v21;
  int v22;
  int v23;
  typedef gaia::ThreadManager::Self *_g4_t_v24;
  typedef Json::Value::Self *_g4_t_v25;
  typedef Json::Value::Self *_g4_t_v26;
  typedef uint8_t _g4_t_v27[7];
  typedef int _g4_t_v28;
  typedef uint8_t _g4_t_v29[4];
  typedef uint8_t _g4_t_v30[4];
  typedef uint8_t _g4_t_v31[16];
  typedef uint8_t _g4_t_v32[16];
  typedef uint8_t _g4_t_v33[16];
  typedef uint8_t _g4_t_v34[16];
  typedef uint8_t _g4_t_v35[28];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v24)) > _g4_s0 ? (0u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v25)) > _g4_s1 ? (44u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v26)) > _g4_s2 ? (44u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (61u + sizeof(_g4_t_v27)) > _g4_s3 ? (61u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (68u + sizeof(_g4_t_v28)) > _g4_s4 ? (68u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v29)) > _g4_s5 ? (72u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v30)) > _g4_s6 ? (76u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v31)) > _g4_s7 ? (80u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (96u + sizeof(_g4_t_v32)) > _g4_s8 ? (96u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (112u + sizeof(_g4_t_v33)) > _g4_s9 ? (112u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (128u + sizeof(_g4_t_v34)) > _g4_s10 ? (128u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (144u + sizeof(_g4_t_v35)) > _g4_s11 ? (144u + sizeof(_g4_t_v35)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 61u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 68u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 72u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 76u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 80u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 96u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 112u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 128u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 144u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    result = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a6);
    if ( result == 0 )
    {
      if ( a9 != 0 )
      {
        v15 = (uint32_t *)opNew(0x44u);
        *v15 = a11;
        v15[1] = a10;
        v15[2] = 1006;
        Json::Value::Construct((int)(uintptr_t)(v15 + 3), nullptr);
        v15[7] = 0;
        v15[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v15 + 9), nullptr);
        v15[13] = 0;
        v15[14] = 0;
        v15[15] = 0;
        v15[16] = 0;
        Json::Value::Construct((int)(uintptr_t)(v31), a2);
        v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "key");
        Json::Value::opAssign(v16, (const Json::Value::Self *)v31);
        Json::Value::Destroy((Json::Value::Self *)v31);
        Json::Value::Construct((Json::Value::Self *)v32, a6);
        v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "accountType");
        Json::Value::opAssign(v17, (const Json::Value::Self *)v32);
        Json::Value::Destroy((Json::Value::Self *)v32);
        Json::Value::Construct((int)(uintptr_t)(v33), a8);
        v18 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "forUsername");
        Json::Value::opAssign(v18, (const Json::Value::Self *)v33);
        Json::Value::Destroy((Json::Value::Self *)v33);
        Json::Value::Construct((Json::Value::Self *)v34, a7);
        v19 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "forCredentials");
        Json::Value::opAssign(v19, (const Json::Value::Self *)v34);
        Json::Value::Destroy((Json::Value::Self *)v34);
        Json::Value::Construct((int)(uintptr_t)(v35), a3);
        v20 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "Etag");
        Json::Value::opAssign(v20, (const Json::Value::Self *)v35);
        Json::Value::Destroy((Json::Value::Self *)v35);
        v15[15] = a4;
        v15[16] = a5;
        v21 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v24));
        return gaia::ThreadManager::pushTask(v21, v15);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27[3]), "storage", (int)(uintptr_t)(v27));
        result = gaia::Gaia_Seshat::StartAndAuthorizeSeshat(a1, a6, &v27[3]);
        v14 = (void *)(*(uint32_t *)&v27[3] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v27[3] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v27[3] - 4), 0xFFFFFFFF) <= 0 )
        {
          v26 = (Json::Value::Self *)result;
          g4_std::string::Rep::M_destroy(v14);
          result = (int)(uintptr_t)(v26);
        }
        if ( result == 0 )
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "me", (int)(uintptr_t)(&v27[1]));
          if ( *(uint32_t *)(*a8 - 12) != 0 && g4_std::string::compare((int)(uintptr_t)(a8), "me") != 0 )
          {
            g4_std_compat::string_assign((int)(uintptr_t)(&v28), &unk_1B15112, 0);
            gaia::BaseServiceManager::GetCredentialString(v29);
            g4_std::string::append_str(&v28, v29);
            g4_std::string::Destroy(v29);
            g4_std::string::append((int)(uintptr_t)(&v28), ":", 1u);
            g4_std::string::append_str(&v28, a8);
          }
          v22 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(v30), v22);
          v23 = gaia::Gaia::GetInstance();
          v25 = (Json::Value::Self *)gaia::Seshat::GetDataCheckEtag(*(uint32_t *)(v23 + 8), v30, a2, a3, a4, a5, &v28, nullptr);
          g4_std::string::Destroy(v30);
          g4_std::string::Destroy(&v28);
          return (int)(uintptr_t)(v25);
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Seshat::PutData  (binary VA: 0x14840a0)
// Original: gaia::Gaia_Seshat::PutData
// ----------------------------------------------------------------------------
char gaia::Gaia_Seshat::PutData(gaia::Gaia::Self *a1, uint32_t *a2, uint32_t *a3, int a4, int a5, uint32_t *a6, int a7, char a8, int a9, int a10)
{
  char IsInitialized;
  unsigned int InitializationAndLoginStatus;
  int Instance;
  void *v13;
  uint32_t *v14;
  Json::Value::Self *v15;
  Json::Value::Self *v16;
  Json::Value::Self *v17;
  Json::Value::Self *v18;
  Json::Value::Self *v19;
  Json::Value::Self *v20;
  int v21;
  int v22;
  int v23;
  typedef gaia::ThreadManager::Self *_g4_t_v25;
  typedef char _g4_t_v26;
  typedef char *_g4_t_v27;
  typedef uint8_t _g4_t_v28[7];
  typedef int _g4_t_v29;
  typedef uint8_t _g4_t_v30[4];
  typedef uint8_t _g4_t_v31[4];
  typedef uint8_t _g4_t_v32[16];
  typedef uint8_t _g4_t_v33[16];
  typedef uint8_t _g4_t_v34[16];
  typedef uint8_t _g4_t_v35[16];
  typedef uint8_t _g4_t_v36[16];
  typedef uint8_t _g4_t_v37[44];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (0u + sizeof(_g4_t_v25)) > _g4_s0 ? (0u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v26)) > _g4_s1 ? (40u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v27)) > _g4_s2 ? (40u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (61u + sizeof(_g4_t_v28)) > _g4_s3 ? (61u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (68u + sizeof(_g4_t_v29)) > _g4_s4 ? (68u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v30)) > _g4_s5 ? (72u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v31)) > _g4_s6 ? (76u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v32)) > _g4_s7 ? (80u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (96u + sizeof(_g4_t_v33)) > _g4_s8 ? (96u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (112u + sizeof(_g4_t_v34)) > _g4_s9 ? (112u + sizeof(_g4_t_v34)) : _g4_s9,
    _g4_s11 = (128u + sizeof(_g4_t_v35)) > _g4_s10 ? (128u + sizeof(_g4_t_v35)) : _g4_s10,
    _g4_s12 = (144u + sizeof(_g4_t_v36)) > _g4_s11 ? (144u + sizeof(_g4_t_v36)) : _g4_s11,
    _g4_s13 = (160u + sizeof(_g4_t_v37)) > _g4_s12 ? (160u + sizeof(_g4_t_v37)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 0u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 40u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 61u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 68u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 72u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 76u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 80u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 96u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 112u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 128u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 144u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 160u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  LOBYTE(InitializationAndLoginStatus) = -21;
  if ( IsInitialized != 0 )
  {
    LOBYTE(InitializationAndLoginStatus) = -22;
    if ( *(uint32_t *)(*a2 - 12) != 0 && *(uint32_t *)(*a3 - 12) != 0 )
    {
      Instance = gaia::Gaia::GetInstance();
      InitializationAndLoginStatus = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a4);
      if ( InitializationAndLoginStatus == 0 )
      {
        if ( a8 != 0 )
        {
          v14 = (uint32_t *)opNew(0x44u);
          *v14 = a10;
          v14[1] = a9;
          v14[2] = 1001;
          Json::Value::Construct((int)(uintptr_t)(v14 + 3), nullptr);
          v14[7] = 0;
          v14[8] = 0;
          Json::Value::Construct((int)(uintptr_t)(v14 + 9), nullptr);
          v14[13] = 0;
          v14[14] = 0;
          v14[15] = 0;
          v14[16] = 0;
          Json::Value::Construct((int)(uintptr_t)(v32), a2);
          v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "key");
          Json::Value::opAssign(v15, (const Json::Value::Self *)v32);
          Json::Value::Destroy((Json::Value::Self *)v32);
          Json::Value::Construct((int)(uintptr_t)(v33), a3);
          v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "data");
          Json::Value::opAssign(v16, (const Json::Value::Self *)v33);
          Json::Value::Destroy((Json::Value::Self *)v33);
          Json::Value::Construct((Json::Value::Self *)v34, a4);
          v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "accountType");
          Json::Value::opAssign(v17, (const Json::Value::Self *)v34);
          Json::Value::Destroy((Json::Value::Self *)v34);
          Json::Value::Construct((Json::Value::Self *)v35, a5);
          v18 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "forCredentials");
          Json::Value::opAssign(v18, (const Json::Value::Self *)v35);
          Json::Value::Destroy((Json::Value::Self *)v35);
          Json::Value::Construct((int)(uintptr_t)(v36), a6);
          v19 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "forUsername");
          Json::Value::opAssign(v19, (const Json::Value::Self *)v36);
          Json::Value::Destroy((Json::Value::Self *)v36);
          Json::Value::Construct((Json::Value::Self *)v37, a7);
          v20 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "visibility");
          Json::Value::opAssign(v20, (const Json::Value::Self *)v37);
          Json::Value::Destroy((Json::Value::Self *)v37);
          v21 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v25));
          LOBYTE(InitializationAndLoginStatus) = gaia::ThreadManager::pushTask(v21, v14);
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28[3]), "storage", (int)(uintptr_t)(v28));
          InitializationAndLoginStatus = gaia::Gaia_Seshat::StartAndAuthorizeSeshat(a1, a4, &v28[3]);
          v13 = (void *)(*(uint32_t *)&v28[3] - 12);
          if ( (uint32_t *)(*(uint32_t *)&v28[3] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v28[3] - 4), 0xFFFFFFFF) <= 0 )
          {
            v27 = (char *)InitializationAndLoginStatus;
            g4_std::string::Rep::M_destroy(v13);
            InitializationAndLoginStatus = (unsigned int)(uintptr_t)(v27);
          }
          if ( InitializationAndLoginStatus == 0 )
          {
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "me", (int)(uintptr_t)(&v28[1]));
            if ( *(uint32_t *)(*a6 - 12) != 0 && g4_std::string::compare((int)(uintptr_t)(a6), "me") != 0 )
            {
              g4_std_compat::string_assign((int)(uintptr_t)(&v29), &unk_1B15112, 0);
              gaia::BaseServiceManager::GetCredentialString(v30);
              g4_std::string::append_str(&v29, v30);
              g4_std::string::Destroy(v30);
              g4_std::string::append((int)(uintptr_t)(&v29), ":", 1u);
              g4_std::string::append_str(&v29, a6);
            }
            v22 = gaia::Gaia::GetInstance();
            gaia::Gaia::GetJanusToken((int)(uintptr_t)(v31), v22);
            v23 = gaia::Gaia::GetInstance();
            v26 = gaia::Seshat::PutData(
                    *(gaia::BaseServiceManager::Self **)(v23 + 8),
                    (int)(uintptr_t)(v31),
                    (int)(uintptr_t)(a2),
                    (int)(uintptr_t)(a3),
                    (int)(uintptr_t)(&v29),
                    a7,
                    0);
            g4_std::string::Destroy(v31);
            g4_std::string::Destroy(&v29);
            LOBYTE(InitializationAndLoginStatus) = v26;
          }
        }
      }
    }
  }
  return InitializationAndLoginStatus;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Seshat::PutData  (binary VA: 0x1484540)
// Original: gaia::Gaia_Seshat::PutData
// ----------------------------------------------------------------------------
char gaia::Gaia_Seshat::PutData(gaia::Gaia::Self *a1, uint32_t *a2, void *a3, int a4, int a5, int a6, uint32_t *a7, int a8, char a9, int a10, int a11)
{
  char IsInitialized;
  char result;
  void *v13;
  typedef char _g4_t_v14;
  typedef uint16_t _g4_t_v15[3];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (26u + sizeof(_g4_t_v15)) > _g4_s1 ? (26u + sizeof(_g4_t_v15)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 26u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    sub_193A970((int)(uintptr_t)(&v15[1]), a3, a4, (int)(uintptr_t)(v15));
    result = gaia::Gaia_Seshat::PutData(a1, a2, &v15[1], a5, a6, a7, a8, a9, a10, a11);
    v13 = (void *)(*(uint32_t *)&v15[1] - 12);
    if ( (uint32_t *)(*(uint32_t *)&v15[1] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v15[1] - 4), 0xFFFFFFFF) <= 0 )
    {
      v14 = result;
      g4_std::string::Rep::M_destroy(v13);
      return v14;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Seshat::PutDataCheckEtag  (binary VA: 0x1484640)
// Original: gaia::Gaia_Seshat::PutDataCheckEtag
// ----------------------------------------------------------------------------
char gaia::Gaia_Seshat::PutDataCheckEtag(gaia::Gaia::Self *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, int a5, int a6, uint32_t *a7, int a8, char a9, int a10, int a11)
{
  char IsInitialized;
  unsigned int InitializationAndLoginStatus;
  int Instance;
  void *v14;
  uint32_t *v15;
  Json::Value::Self *v16;
  Json::Value::Self *v17;
  Json::Value::Self *v18;
  Json::Value::Self *v19;
  Json::Value::Self *v20;
  Json::Value::Self *v21;
  Json::Value::Self *v22;
  int v23;
  int v24;
  int v25;
  typedef gaia::ThreadManager::Self *_g4_t_v27;
  typedef char _g4_t_v28;
  typedef char *_g4_t_v29;
  typedef uint8_t _g4_t_v30[7];
  typedef int _g4_t_v31;
  typedef uint8_t _g4_t_v32[4];
  typedef uint8_t _g4_t_v33[4];
  typedef uint8_t _g4_t_v34[16];
  typedef uint8_t _g4_t_v35[16];
  typedef uint8_t _g4_t_v36[16];
  typedef uint8_t _g4_t_v37[16];
  typedef uint8_t _g4_t_v38[16];
  typedef uint8_t _g4_t_v39[16];
  typedef uint8_t _g4_t_v40[44];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (0u + sizeof(_g4_t_v27)) > _g4_s0 ? (0u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v28)) > _g4_s1 ? (40u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v29)) > _g4_s2 ? (40u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (61u + sizeof(_g4_t_v30)) > _g4_s3 ? (61u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (68u + sizeof(_g4_t_v31)) > _g4_s4 ? (68u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v32)) > _g4_s5 ? (72u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v33)) > _g4_s6 ? (76u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v34)) > _g4_s7 ? (80u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (96u + sizeof(_g4_t_v35)) > _g4_s8 ? (96u + sizeof(_g4_t_v35)) : _g4_s8,
    _g4_s10 = (112u + sizeof(_g4_t_v36)) > _g4_s9 ? (112u + sizeof(_g4_t_v36)) : _g4_s9,
    _g4_s11 = (128u + sizeof(_g4_t_v37)) > _g4_s10 ? (128u + sizeof(_g4_t_v37)) : _g4_s10,
    _g4_s12 = (144u + sizeof(_g4_t_v38)) > _g4_s11 ? (144u + sizeof(_g4_t_v38)) : _g4_s11,
    _g4_s13 = (160u + sizeof(_g4_t_v39)) > _g4_s12 ? (160u + sizeof(_g4_t_v39)) : _g4_s12,
    _g4_s14 = (176u + sizeof(_g4_t_v40)) > _g4_s13 ? (176u + sizeof(_g4_t_v40)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 0u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 40u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 61u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 68u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 72u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 76u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 80u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 96u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 112u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 128u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 144u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 160u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 176u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  LOBYTE(InitializationAndLoginStatus) = -21;
  if ( IsInitialized != 0 )
  {
    LOBYTE(InitializationAndLoginStatus) = -22;
    if ( *(uint32_t *)(*a2 - 12) != 0 && *(uint32_t *)(*a4 - 12) != 0 )
    {
      Instance = gaia::Gaia::GetInstance();
      InitializationAndLoginStatus = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a5);
      if ( InitializationAndLoginStatus == 0 )
      {
        if ( a9 != 0 )
        {
          v15 = (uint32_t *)opNew(0x44u);
          *v15 = a11;
          v15[1] = a10;
          v15[2] = 1005;
          Json::Value::Construct((int)(uintptr_t)(v15 + 3), nullptr);
          v15[7] = 0;
          v15[8] = 0;
          Json::Value::Construct((int)(uintptr_t)(v15 + 9), nullptr);
          v15[13] = 0;
          v15[14] = 0;
          v15[15] = 0;
          v15[16] = 0;
          Json::Value::Construct((int)(uintptr_t)(v34), a2);
          v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "key");
          Json::Value::opAssign(v16, (const Json::Value::Self *)v34);
          Json::Value::Destroy((Json::Value::Self *)v34);
          Json::Value::Construct((Json::Value::Self *)v35, a5);
          v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "accountType");
          Json::Value::opAssign(v17, (const Json::Value::Self *)v35);
          Json::Value::Destroy((Json::Value::Self *)v35);
          Json::Value::Construct((int)(uintptr_t)(v36), a7);
          v18 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "forUsername");
          Json::Value::opAssign(v18, (const Json::Value::Self *)v36);
          Json::Value::Destroy((Json::Value::Self *)v36);
          Json::Value::Construct((Json::Value::Self *)v37, a6);
          v19 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "forCredentials");
          Json::Value::opAssign(v19, (const Json::Value::Self *)v37);
          Json::Value::Destroy((Json::Value::Self *)v37);
          Json::Value::Construct((Json::Value::Self *)v38, a8);
          v20 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "visibility");
          Json::Value::opAssign(v20, (const Json::Value::Self *)v38);
          Json::Value::Destroy((Json::Value::Self *)v38);
          Json::Value::Construct((int)(uintptr_t)(v39), a3);
          v21 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "Etag");
          Json::Value::opAssign(v21, (const Json::Value::Self *)v39);
          Json::Value::Destroy((Json::Value::Self *)v39);
          Json::Value::Construct((int)(uintptr_t)(v40), a4);
          v22 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "data");
          Json::Value::opAssign(v22, (const Json::Value::Self *)v40);
          Json::Value::Destroy((Json::Value::Self *)v40);
          v23 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v27));
          LOBYTE(InitializationAndLoginStatus) = gaia::ThreadManager::pushTask(v23, v15);
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30[3]), "storage", (int)(uintptr_t)(v30));
          InitializationAndLoginStatus = gaia::Gaia_Seshat::StartAndAuthorizeSeshat(a1, a5, &v30[3]);
          v14 = (void *)(*(uint32_t *)&v30[3] - 12);
          if ( (uint32_t *)(*(uint32_t *)&v30[3] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v30[3] - 4), 0xFFFFFFFF) <= 0 )
          {
            v29 = (char *)InitializationAndLoginStatus;
            g4_std::string::Rep::M_destroy(v14);
            InitializationAndLoginStatus = (unsigned int)(uintptr_t)(v29);
          }
          if ( InitializationAndLoginStatus == 0 )
          {
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "me", (int)(uintptr_t)(&v30[1]));
            if ( *(uint32_t *)(*a7 - 12) != 0 && g4_std::string::compare((int)(uintptr_t)(a7), "me") != 0 )
            {
              g4_std_compat::string_assign((int)(uintptr_t)(&v31), &unk_1B15112, 0);
              gaia::BaseServiceManager::GetCredentialString(v32);
              g4_std::string::append_str(&v31, v32);
              g4_std::string::Destroy(v32);
              g4_std::string::append((int)(uintptr_t)(&v31), ":", 1u);
              g4_std::string::append_str(&v31, a7);
            }
            v24 = gaia::Gaia::GetInstance();
            gaia::Gaia::GetJanusToken((int)(uintptr_t)(v33), v24);
            v25 = gaia::Gaia::GetInstance();
            v28 = gaia::Seshat::PutDataCheckEtag(*(uint32_t *)(v25 + 8), v33, a2, a3, a4, &v31, a8, nullptr);
            g4_std::string::Destroy(v33);
            g4_std::string::Destroy(&v31);
            LOBYTE(InitializationAndLoginStatus) = v28;
          }
        }
      }
    }
  }
  return InitializationAndLoginStatus;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Seshat::PutDataCheckEtag  (binary VA: 0x1484b20)
// Original: gaia::Gaia_Seshat::PutDataCheckEtag
// ----------------------------------------------------------------------------
char gaia::Gaia_Seshat::PutDataCheckEtag(gaia::Gaia::Self *a1, uint32_t *a2, uint32_t *a3, void *a4, int a5, int a6, int a7, uint32_t *a8, int a9, char a10, int a11, int a12)
{
  char IsInitialized;
  char result;
  void *v14;
  typedef char _g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint32_t _g4_t_v17[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v15)) > _g4_s0 ? (12u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (26u + sizeof(_g4_t_v16)) > _g4_s1 ? (26u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v17)) > _g4_s2 ? (28u + sizeof(_g4_t_v17)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 26u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    sub_193A970((int)(uintptr_t)(v17), a4, a5, (int)(uintptr_t)(&v16));
    result = gaia::Gaia_Seshat::PutDataCheckEtag(a1, a2, a3, v17, a6, a7, a8, a9, a10, a11, a12);
    v14 = (void *)(v17[0] - 12);
    if ( (uint32_t *)(v17[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v17[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      v15 = result;
      g4_std::string::Rep::M_destroy(v14);
      return v15;
    }
  }
  return result;
}


