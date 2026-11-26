#include "Core/Utils/DecompTypes.h"
#include "gaia_Gaia_Osiris.h"

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::CancelRequest  (binary VA: 0x1448070)
// Original: gaia::Gaia_Osiris::CancelRequest
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::CancelRequest(glwebtools::Mutex::Self *a1, int a2)
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
    if ( *(uint32_t *)(gaia::Gaia::GetInstance() + 24) != 0 )
    {
      if ( a2 == 1 )
      {
        Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v7));
        gaia::ThreadManager::CancelRequest(Instance, 4000);
      }
      v3 = gaia::Gaia::GetInstance();
      v2 = gaia::BaseServiceManager::CancelRequest(*(uint32_t *)(v3 + 24), a2);
      glwebtools::Mutex::Unlock(a1);
    }
    else
    {
      v6 = gaia::Gaia::GetInstance();
      v2 = 0;
      gaia::BaseServiceManager::CancelRequest(*(uint32_t *)(v6 + 48), 3011);
      glwebtools::Mutex::Unlock(a1);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::GetOsirisStatus  (binary VA: 0x144a970)
// Original: gaia::Gaia_Osiris::GetOsirisStatus
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::GetOsirisStatus(gaia::Gaia_Osiris::Self *self)
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
    v2 = (glwebtools::Mutex::Self *)(gaia::Gaia::GetInstance() + 440);
    glwebtools::Mutex::Lock(v2);
    ServiceUrl = 0;
    if ( *(uint32_t *)(gaia::Gaia::GetInstance() + 24) == 0 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v7) + 1, (char *)&unk_1B15112, (int)(uintptr_t)(v7));
      Instance = gaia::Gaia::GetInstance();
      ServiceUrl = gaia::Gaia::GetServiceUrl(Instance, "social", (int)(uintptr_t)(v7) + 1, 0, 0, 0);
      glwebtools::Mutex::Lock(self);
      if ( ServiceUrl != 0
        || (v6 = gaia::Gaia::GetInstance(),
            v5 = (gaia::BaseServiceManager::Self *)opNew(0x9Cu),
            gaia::Osiris::Construct(v5, (int)(uintptr_t)(v7) + 1, v6 + 240),
            *(uint32_t *)(gaia::Gaia::GetInstance() + 24) = (uint32_t)(uintptr_t)(v5),
            *(uint32_t *)(gaia::Gaia::GetInstance() + 24) == 0) )
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
// Function: gaia::Gaia_Osiris::GetPictureFromUrl  (binary VA: 0x144aae0)
// Original: gaia::Gaia_Osiris::GetPictureFromUrl
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::GetPictureFromUrl(gaia::Gaia::Self *a1, uint32_t *a2, void **a3, int *a4, char a5, int a6, int a7)
{
  char IsInitialized;
  int result;
  int v9;
  uint32_t *v10;
  Json::Value::Self *v11;
  int Instance;
  typedef gaia::ThreadManager::Self *_g4_t_v13;
  typedef uint8_t _g4_t_v14[28];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (48u + sizeof(_g4_t_v14)) > _g4_s1 ? (48u + sizeof(_g4_t_v14)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);

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
      v10[2] = 4043;
      Json::Value::Construct((int)(uintptr_t)(v10 + 3), nullptr);
      v10[7] = 0;
      v10[8] = 0;
      Json::Value::Construct((int)(uintptr_t)(v10 + 9), nullptr);
      v10[13] = 0;
      v10[14] = 0;
      v10[15] = 0;
      v10[16] = 0;
      Json::Value::Construct((int)(uintptr_t)(v14), a2);
      v11 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v10 + 3), "URL");
      Json::Value::opAssign(v11, (const Json::Value::Self *)v14);
      Json::Value::Destroy((Json::Value::Self *)v14);
      v10[15] = (uint32_t)(uintptr_t)(a3);
      v10[16] = (uint32_t)(uintptr_t)(a4);
      Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v13));
      return gaia::ThreadManager::pushTask(Instance, v10);
    }
    else
    {
      result = gaia::Gaia_Osiris::GetOsirisStatus((gaia::Gaia_Osiris::Self *)(a1));
      if ( result == 0 )
      {
        v9 = gaia::Gaia::GetInstance();
        return gaia::Osiris::GetPictureFromUrl(*(gaia::BaseServiceManager::Self **)(v9 + 24), (int)(uintptr_t)(a2), a3, a4, 0);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::GetPictureFromUrl  (binary VA: 0x144ac50)
// Original: gaia::Gaia_Osiris::GetPictureFromUrl
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::GetPictureFromUrl(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  int result;
  int v4;
  int Instance;
  typedef int _g4_t_PictureFromUrl;
  typedef int _g4_t_started;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint8_t _g4_t_v12[4];
  typedef void *_g4_t_ptr;
  typedef int _g4_t_v14;
  typedef uint8_t _g4_t_v15[80];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_PictureFromUrl)) > _g4_s0 ? (12u + sizeof(_g4_t_PictureFromUrl)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_started)) > _g4_s1 ? (12u + sizeof(_g4_t_started)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v8)) > _g4_s2 ? (16u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v9)) > _g4_s3 ? (20u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v10)) > _g4_s4 ? (24u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v11)) > _g4_s5 ? (28u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v12)) > _g4_s6 ? (32u + sizeof(_g4_t_v12)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_ptr)) > _g4_s7 ? (36u + sizeof(_g4_t_ptr)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v14)) > _g4_s8 ? (40u + sizeof(_g4_t_v14)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v15)) > _g4_s9 ? (44u + sizeof(_g4_t_v15)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_PictureFromUrl &PictureFromUrl = *reinterpret_cast<_g4_t_PictureFromUrl *>(_g4_sf + 12u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 36u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 40u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "URL", (int)(uintptr_t)(&v8));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v9), 4);
    v2 = (void *)(v9 - 12);
    if ( (uint32_t *)(v9 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 4043);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v15, a2);
        started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v15);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v15);
        return started;
      }
      else
      {
        result = gaia::Gaia_Osiris::GetOsirisStatus(self);
        if ( result == 0 )
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), (char *)&unk_1B15112, (int)(uintptr_t)(&v8) + 1);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "URL", (int)(uintptr_t)(&v8) + 2);
          v4 = gaia::GaiaRequest::opIndex(a2, &v11);
          Json::Value::asString((Json::Value::Self *)v12, v4);
          g4_std::string::assign_str(&v10, v12);
          g4_std::string::Destroy(v12);
          g4_std::string::Destroy(&v11);
          ptr = nullptr;
          v14 = 0;
          Instance = gaia::Gaia::GetInstance();
          PictureFromUrl = gaia::Osiris::GetPictureFromUrl(
                             *(gaia::BaseServiceManager::Self **)(Instance + 24),
                             (int)(uintptr_t)(&v10),
                             &ptr,
                             &v14,
                             (int)(uintptr_t)(a2));
          gaia::GaiaRequest::SetResponse(a2, ptr, &v14);
          gaia::GaiaRequest::SetResponseCode(a2, PictureFromUrl);
          free(ptr);
          g4_std::string::Destroy(&v10);
          return PictureFromUrl;
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
// Function: gaia::Gaia_Osiris::StartAndAuthorizeOsiris  (binary VA: 0x1461fb0)
// Original: gaia::Gaia_Osiris::StartAndAuthorizeOsiris
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::StartAndAuthorizeOsiris(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
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
    result = gaia::Gaia_Osiris::GetOsirisStatus(self);
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
// Function: gaia::Gaia_Osiris::GetAccessToken  (binary VA: 0x1462050)
// Original: gaia::Gaia_Osiris::GetAccessToken
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::GetAccessToken(gaia::Gaia::Self *a1, gaia::GaiaRequest::Self *a2, uint32_t *a3, int a4)
{
  void *v4;
  void *v5;
  Json::Value::Self *v6;
  void *v7;
  int v8;
  int OsirisStatus;
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
      OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus((gaia::Gaia_Osiris::Self *)(a1));
      if ( OsirisStatus != 0 )
      {
        v8 = OsirisStatus;
        gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
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
        v8 = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2);
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
// Function: gaia::Gaia_Osiris::ListAchievements  (binary VA: 0x1462330)
// Original: gaia::Gaia_Osiris::ListAchievements
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::ListAchievements(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  int OsirisStatus;
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "credential", (int)(uintptr_t)(&v18));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v20), 4);
  v2 = (void *)(v20 - 12);
  if ( (uint32_t *)(v20 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "game", (int)(uintptr_t)(&v18) + 1);
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
    gaia::GaiaRequest::SetOperationCode(a2, 4041);
    gaia::Gaia::GetInstance();
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v35, a2);
    started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v35);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v35);
    return started;
  }
  OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
  v16 = OsirisStatus;
  if ( OsirisStatus == 0 )
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
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "social", (int)(uintptr_t)(&v19) + 3);
    started = gaia::Gaia_Osiris::GetAccessToken((gaia::Gaia::Self *)(self), a2, (uint32_t *)(&v29), (int)(uintptr_t)(&v22));
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
      started = gaia::Osiris::ListAchievements(
                  *(gaia::BaseServiceManager::Self **)(Instance + 24),
                  (void **)&v25,
                  &v26,
                  (int)(uintptr_t)(&v23),
                  (int)(uintptr_t)(&v22),
                  (int)(uintptr_t)(&v24),
                  (int)(uintptr_t)(a2));
      if ( started == 0 )
        started = gaia::BaseServiceManager::ParseMessages(v25, v26, (int)(uintptr_t)(&v30), 14);
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
  gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
  return v16;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::RecordAchievement  (binary VA: 0x14628c0)
// Original: gaia::Gaia_Osiris::RecordAchievement
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::RecordAchievement(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  int OsirisStatus;
  void *v4;
  int AccessToken;
  void *v6;
  int Instance;
  int result;
  void *v9;
  void *v10;
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
  typedef int _g4_t_v23;
  typedef uint8_t _g4_t_v24[16];
  typedef uint8_t _g4_t_v25[80];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_started)) > _g4_s2 ? (12u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v14)) > _g4_s3 ? (12u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v15)) > _g4_s4 ? (12u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (26u + sizeof(_g4_t_v16)) > _g4_s5 ? (26u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v17)) > _g4_s6 ? (28u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v18)) > _g4_s7 ? (36u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v19)) > _g4_s8 ? (40u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v20)) > _g4_s9 ? (44u + sizeof(_g4_t_v20)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v21)) > _g4_s10 ? (48u + sizeof(_g4_t_v21)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v22)) > _g4_s11 ? (52u + sizeof(_g4_t_v22)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v23)) > _g4_s12 ? (56u + sizeof(_g4_t_v23)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v24)) > _g4_s13 ? (60u + sizeof(_g4_t_v24)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v25)) > _g4_s14 ? (76u + sizeof(_g4_t_v25)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 26u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 52u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 56u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 60u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 76u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "trophy_id", (int)(uintptr_t)(&v16));
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
        gaia::GaiaRequest::SetOperationCode(a2, 4040);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v25, a2);
        started = (char *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v25);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v25);
        return (int)(uintptr_t)(started);
      }
      else
      {
        OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
        if ( OsirisStatus != 0 )
        {
          v14 = (char *)OsirisStatus;
          gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
          return (int)(uintptr_t)(v14);
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), (char *)&unk_1B15112, (int)(uintptr_t)(&v16) + 1);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), (char *)&unk_1B15112, (int)(uintptr_t)(&v17));
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v24, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v21, (int)(uintptr_t)(v24));
          g4_std::string::assign_str(&v20, &v21);
          v4 = (void *)(v21 - 12);
          if ( (uint32_t *)(v21 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v4);
          }
          Json::Value::Destroy((Json::Value::Self *)v24);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "social_trophies", (int)(uintptr_t)(&v17) + 1);
          AccessToken = gaia::Gaia_Osiris::GetAccessToken((gaia::Gaia::Self *)(self), a2, (uint32_t *)(&v22), (int)(uintptr_t)(&v19));
          v6 = (void *)(v22 - 12);
          if ( (uint32_t *)(v22 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
          {
            v15 = (char *)AccessToken;
            g4_std::string::Rep::M_destroy(v6);
            AccessToken = (int)(uintptr_t)(v15);
          }
          if ( AccessToken != 0 )
          {
            v11 = (char *)AccessToken;
            gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
          }
          else
          {
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "me", (int)(uintptr_t)(&v17) + 2);
            Instance = gaia::Gaia::GetInstance();
            v11 = (char *)gaia::Osiris::RecordAchievement(
                            *(gaia::BaseServiceManager::Self **)(Instance + 24),
                            (int)(uintptr_t)(&v23),
                            (int)(uintptr_t)(&v19),
                            (int)(uintptr_t)(&v20),
                            (int)(uintptr_t)(a2));
            g4_std::string::Destroy(&v23);
            gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(v11));
          }
          result = (int)(uintptr_t)(v11);
          v9 = (void *)(v20 - 12);
          if ( (uint32_t *)(v20 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v9);
            result = (int)(uintptr_t)(v11);
          }
          v10 = (void *)(v19 - 12);
          if ( (uint32_t *)(v19 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
          {
            v12 = (char *)result;
            g4_std::string::Rep::M_destroy(v10);
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
// Function: gaia::Gaia_Osiris::ViewFeed  (binary VA: 0x1462c90)
// Original: gaia::Gaia_Osiris::ViewFeed
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::ViewFeed(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  int OsirisStatus;
  void *v7;
  Json::Value::Self *v8;
  bool isNull;
  Json::Value::Self *v10;
  bool v11;
  Json::Value::Self *v12;
  bool v13;
  void *v14;
  int Instance;
  gaia::BaseJSONServiceResponse::Self *v16;
  gaia::BaseJSONServiceResponse::Self *v17;
  void *v18;
  void *v19;
  void *v20;
  void *v21;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_ptr;
  typedef bool _g4_t_v24;
  typedef bool _g4_t_v25;
  typedef bool _g4_t_v26;
  typedef char *_g4_t_v27;
  typedef char *_g4_t_v28;
  typedef char *_g4_t_v29;
  typedef char *_g4_t_v30;
  typedef char *_g4_t_started;
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
  typedef char *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef uint8_t _g4_t_v49[4];
  typedef int _g4_t_v50;
  typedef uint8_t _g4_t_v51[4];
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v54;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef uint8_t _g4_t_v57[16];
  typedef uint8_t _g4_t_v58[16];
  typedef uint8_t _g4_t_v59[16];
  typedef uint8_t _g4_t_v60[16];
  typedef uint8_t _g4_t_v61[96];
  enum : size_t {
    _g4_s0 = 416u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (52u + sizeof(_g4_t_v24)) > _g4_s1 ? (52u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (52u + sizeof(_g4_t_v25)) > _g4_s2 ? (52u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v26)) > _g4_s3 ? (56u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v27)) > _g4_s4 ? (60u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v28)) > _g4_s5 ? (60u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v29)) > _g4_s6 ? (60u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v30)) > _g4_s7 ? (60u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_started)) > _g4_s8 ? (60u + sizeof(_g4_t_started)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v32)) > _g4_s9 ? (76u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (83u + sizeof(_g4_t_v33)) > _g4_s10 ? (83u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v34)) > _g4_s11 ? (84u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v35)) > _g4_s12 ? (88u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (92u + sizeof(_g4_t_v36)) > _g4_s13 ? (92u + sizeof(_g4_t_v36)) : _g4_s13,
    _g4_s15 = (108u + sizeof(_g4_t_v37)) > _g4_s14 ? (108u + sizeof(_g4_t_v37)) : _g4_s14,
    _g4_s16 = (112u + sizeof(_g4_t_v38)) > _g4_s15 ? (112u + sizeof(_g4_t_v38)) : _g4_s15,
    _g4_s17 = (116u + sizeof(_g4_t_v39)) > _g4_s16 ? (116u + sizeof(_g4_t_v39)) : _g4_s16,
    _g4_s18 = (120u + sizeof(_g4_t_v40)) > _g4_s17 ? (120u + sizeof(_g4_t_v40)) : _g4_s17,
    _g4_s19 = (124u + sizeof(_g4_t_v41)) > _g4_s18 ? (124u + sizeof(_g4_t_v41)) : _g4_s18,
    _g4_s20 = (128u + sizeof(_g4_t_v42)) > _g4_s19 ? (128u + sizeof(_g4_t_v42)) : _g4_s19,
    _g4_s21 = (132u + sizeof(_g4_t_v43)) > _g4_s20 ? (132u + sizeof(_g4_t_v43)) : _g4_s20,
    _g4_s22 = (136u + sizeof(_g4_t_v44)) > _g4_s21 ? (136u + sizeof(_g4_t_v44)) : _g4_s21,
    _g4_s23 = (140u + sizeof(_g4_t_v45)) > _g4_s22 ? (140u + sizeof(_g4_t_v45)) : _g4_s22,
    _g4_s24 = (144u + sizeof(_g4_t_v46)) > _g4_s23 ? (144u + sizeof(_g4_t_v46)) : _g4_s23,
    _g4_s25 = (148u + sizeof(_g4_t_v47)) > _g4_s24 ? (148u + sizeof(_g4_t_v47)) : _g4_s24,
    _g4_s26 = (152u + sizeof(_g4_t_v48)) > _g4_s25 ? (152u + sizeof(_g4_t_v48)) : _g4_s25,
    _g4_s27 = (156u + sizeof(_g4_t_v49)) > _g4_s26 ? (156u + sizeof(_g4_t_v49)) : _g4_s26,
    _g4_s28 = (160u + sizeof(_g4_t_v50)) > _g4_s27 ? (160u + sizeof(_g4_t_v50)) : _g4_s27,
    _g4_s29 = (164u + sizeof(_g4_t_v51)) > _g4_s28 ? (164u + sizeof(_g4_t_v51)) : _g4_s28,
    _g4_s30 = (168u + sizeof(_g4_t_v52)) > _g4_s29 ? (168u + sizeof(_g4_t_v52)) : _g4_s29,
    _g4_s31 = (172u + sizeof(_g4_t_v53)) > _g4_s30 ? (172u + sizeof(_g4_t_v53)) : _g4_s30,
    _g4_s32 = (176u + sizeof(_g4_t_v54)) > _g4_s31 ? (176u + sizeof(_g4_t_v54)) : _g4_s31,
    _g4_s33 = (180u + sizeof(_g4_t_v55)) > _g4_s32 ? (180u + sizeof(_g4_t_v55)) : _g4_s32,
    _g4_s34 = (184u + sizeof(_g4_t_v56)) > _g4_s33 ? (184u + sizeof(_g4_t_v56)) : _g4_s33,
    _g4_s35 = (188u + sizeof(_g4_t_v57)) > _g4_s34 ? (188u + sizeof(_g4_t_v57)) : _g4_s34,
    _g4_s36 = (204u + sizeof(_g4_t_v58)) > _g4_s35 ? (204u + sizeof(_g4_t_v58)) : _g4_s35,
    _g4_s37 = (220u + sizeof(_g4_t_v59)) > _g4_s36 ? (220u + sizeof(_g4_t_v59)) : _g4_s36,
    _g4_s38 = (236u + sizeof(_g4_t_v60)) > _g4_s37 ? (236u + sizeof(_g4_t_v60)) : _g4_s37,
    _g4_s39 = (252u + sizeof(_g4_t_v61)) > _g4_s38 ? (252u + sizeof(_g4_t_v61)) : _g4_s38
  };
  alignas(16) uint8_t _g4_sf[_g4_s39];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 52u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 60u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 60u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 60u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 60u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 76u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 83u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 84u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 88u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 92u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 108u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 112u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 116u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 120u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 124u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 128u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 132u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 136u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 140u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 144u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 148u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 152u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 156u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 160u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 164u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 168u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 172u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 176u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 180u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 184u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 188u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 204u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 220u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 236u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 252u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "credential", (int)(uintptr_t)(&v33));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v37), 4);
  v2 = (void *)(v37 - 12);
  if ( (uint32_t *)(v37 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "sort_type", (int)(uintptr_t)(&v34));
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v38), 4);
  v3 = (void *)(v38 - 12);
  if ( (uint32_t *)(v38 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v38 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "language", (int)(uintptr_t)(&v34) + 1);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v39), 4);
  v4 = (void *)(v39 - 12);
  if ( (uint32_t *)(v39 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "connection_type", (int)(uintptr_t)(&v34) + 2);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v40), 1);
  v5 = (void *)(v40 - 12);
  if ( (uint32_t *)(v40 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v40 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) == 0 )
    return gaia::GaiaRequest::GetResponseCode(a2);
  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
  {
    gaia::GaiaRequest::SetOperationCode(a2, 4039);
    gaia::Gaia::GetInstance();
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v61, a2);
    started = (char *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v61);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v61);
    return (int)(uintptr_t)(started);
  }
  OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
  v27 = (char *)OsirisStatus;
  if ( OsirisStatus == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), (char *)&unk_1B15112, (int)(uintptr_t)(&v34) + 3);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), (char *)&unk_1B15112, (int)(uintptr_t)(&v35));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), (char *)&unk_1B15112, (int)(uintptr_t)(&v35) + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), (char *)&unk_1B15112, (int)(uintptr_t)(&v35) + 2);
    v54 = nullptr;
    v55 = nullptr;
    v56 = 0;
    v45 = nullptr;
    v46 = 0;
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v57, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v47, (int)(uintptr_t)(v57));
    g4_std::string::assign_str(&v42, &v47);
    v7 = (void *)(v47 - 12);
    if ( (uint32_t *)(v47 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v47 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    Json::Value::Destroy((Json::Value::Self *)v57);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v48), "sort_type", (int)(uintptr_t)(&v35) + 3);
    v8 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v48);
    isNull = Json::Value::isNull(v8);
    v28 = (char *)(v48 - 12);
    if ( (uint32_t *)(v48 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v48 - 4), 0xFFFFFFFF) <= 0 )
    {
      v24 = isNull;
      g4_std::string::Rep::M_destroy(v28);
      isNull = v24;
    }
    if ( !isNull )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v58, (const char *)a2);
      Json::Value::asString((Json::Value::Self *)v49, (int)(uintptr_t)(v58));
      g4_std::string::assign_str(&v43, v49);
      g4_std::string::Destroy(v49);
      Json::Value::Destroy((Json::Value::Self *)v58);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v50), "language", (int)(uintptr_t)(&v36));
    v10 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v50);
    v11 = Json::Value::isNull(v10);
    v29 = (char *)(v50 - 12);
    if ( (uint32_t *)(v50 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v50 - 4), 0xFFFFFFFF) <= 0 )
    {
      v25 = v11;
      g4_std::string::Rep::M_destroy(v29);
      v11 = v25;
    }
    if ( !v11 )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v59, (const char *)a2);
      Json::Value::asString((Json::Value::Self *)v51, (int)(uintptr_t)(v59));
      g4_std::string::assign_str(&v44, v51);
      g4_std::string::Destroy(v51);
      Json::Value::Destroy((Json::Value::Self *)v59);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v52), "connection_type", (int)(uintptr_t)(&v36) + 1);
    v12 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v52);
    v13 = Json::Value::isNull(v12);
    v30 = (char *)(v52 - 12);
    if ( (uint32_t *)(v52 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v52 - 4), 0xFFFFFFFF) <= 0 )
    {
      v26 = v13;
      g4_std::string::Rep::M_destroy(v30);
      v13 = v26;
    }
    if ( !v13 )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v60, (const char *)a2);
      v32 = Json::Value::asInt((Json::Value::Self *)v60);
      Json::Value::Destroy((Json::Value::Self *)v60);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v53), "social", (int)(uintptr_t)(&v36) + 2);
    started = (char *)gaia::Gaia_Osiris::GetAccessToken((gaia::Gaia::Self *)(self), a2, (uint32_t *)(&v53), (int)(uintptr_t)(&v41));
    v14 = (void *)(v53 - 12);
    if ( (uint32_t *)(v53 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v53 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v14);
    }
    if ( started != nullptr )
    {
      gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(started));
    }
    else
    {
      Instance = gaia::Gaia::GetInstance();
      started = (char *)gaia::Osiris::ViewFeed(
                          *(gaia::BaseServiceManager::Self **)(Instance + 24),
                          (void **)&v45,
                          &v46,
                          (int)(uintptr_t)(&v42),
                          (int)(uintptr_t)(&v41),
                          (int)(uintptr_t)(&v43),
                          (int)(uintptr_t)(&v44),
                          v32,
                          (int)(uintptr_t)(a2));
      if ( started == nullptr )
        started = (char *)gaia::BaseServiceManager::ParseMessages(v45, v46, (int)(uintptr_t)(&v54), 13);
      gaia::GaiaRequest::SetResponse(a2, (const std::vector<gaia::BaseJSONServiceResponse::Self> *)&v54);
      gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(started));
      free(v45);
    }
    v16 = v55;
    v17 = v54;
    if ( v55 != v54 )
    {
      do
      {
        ptr = v17;
        v17 = (gaia::BaseJSONServiceResponse::Self *)((char *)v17 + 20);
        gaia::BaseJSONServiceResponse::Destroy(ptr);
      }
      while ( v16 != v17 );
      v17 = v54;
    }
    if ( v17 != nullptr )
      opDelete(v17);
    v18 = (void *)(v44 - 12);
    if ( (uint32_t *)(v44 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v44 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v18);
    }
    v19 = (void *)(v43 - 12);
    if ( (uint32_t *)(v43 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v43 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v19);
    }
    v20 = (void *)(v42 - 12);
    if ( (uint32_t *)(v42 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v42 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v20);
    }
    v21 = (void *)(v41 - 12);
    if ( (uint32_t *)(v41 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v21);
    }
    return (int)(uintptr_t)(started);
  }
  gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
  return (int)(uintptr_t)(v27);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::ViewWall  (binary VA: 0x1463600)
// Original: gaia::Gaia_Osiris::ViewWall
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::ViewWall(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  int OsirisStatus;
  void *v7;
  Json::Value::Self *v8;
  bool isNull;
  Json::Value::Self *v10;
  bool v11;
  void *v12;
  int Instance;
  gaia::BaseJSONServiceResponse::Self *v14;
  gaia::BaseJSONServiceResponse::Self *v15;
  void *v16;
  void *v17;
  void *v18;
  void *v19;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_ptr;
  typedef bool _g4_t_v22;
  typedef bool _g4_t_v23;
  typedef char *_g4_t_v24;
  typedef char *_g4_t_v25;
  typedef char *_g4_t_v26;
  typedef char *_g4_t_started;
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
  typedef char *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef char _g4_t_v44[4];
  typedef int _g4_t_v45;
  typedef char _g4_t_v46[4];
  typedef int _g4_t_v47;
  typedef void *_g4_t_v48;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef uint8_t _g4_t_v51[16];
  typedef uint8_t _g4_t_v52[16];
  typedef uint8_t _g4_t_v53[16];
  typedef uint8_t _g4_t_v54[16];
  typedef uint8_t _g4_t_v55[96];
  enum : size_t {
    _g4_s0 = 416u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (60u + sizeof(_g4_t_v22)) > _g4_s1 ? (60u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (60u + sizeof(_g4_t_v23)) > _g4_s2 ? (60u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v24)) > _g4_s3 ? (64u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v25)) > _g4_s4 ? (64u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v26)) > _g4_s5 ? (64u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_started)) > _g4_s6 ? (64u + sizeof(_g4_t_started)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v28)) > _g4_s7 ? (68u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (89u + sizeof(_g4_t_v29)) > _g4_s8 ? (89u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (92u + sizeof(_g4_t_v30)) > _g4_s9 ? (92u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (96u + sizeof(_g4_t_v31)) > _g4_s10 ? (96u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (112u + sizeof(_g4_t_v32)) > _g4_s11 ? (112u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (116u + sizeof(_g4_t_v33)) > _g4_s12 ? (116u + sizeof(_g4_t_v33)) : _g4_s12,
    _g4_s14 = (120u + sizeof(_g4_t_v34)) > _g4_s13 ? (120u + sizeof(_g4_t_v34)) : _g4_s13,
    _g4_s15 = (124u + sizeof(_g4_t_v35)) > _g4_s14 ? (124u + sizeof(_g4_t_v35)) : _g4_s14,
    _g4_s16 = (128u + sizeof(_g4_t_v36)) > _g4_s15 ? (128u + sizeof(_g4_t_v36)) : _g4_s15,
    _g4_s17 = (132u + sizeof(_g4_t_v37)) > _g4_s16 ? (132u + sizeof(_g4_t_v37)) : _g4_s16,
    _g4_s18 = (136u + sizeof(_g4_t_v38)) > _g4_s17 ? (136u + sizeof(_g4_t_v38)) : _g4_s17,
    _g4_s19 = (140u + sizeof(_g4_t_v39)) > _g4_s18 ? (140u + sizeof(_g4_t_v39)) : _g4_s18,
    _g4_s20 = (144u + sizeof(_g4_t_v40)) > _g4_s19 ? (144u + sizeof(_g4_t_v40)) : _g4_s19,
    _g4_s21 = (148u + sizeof(_g4_t_v41)) > _g4_s20 ? (148u + sizeof(_g4_t_v41)) : _g4_s20,
    _g4_s22 = (152u + sizeof(_g4_t_v42)) > _g4_s21 ? (152u + sizeof(_g4_t_v42)) : _g4_s21,
    _g4_s23 = (156u + sizeof(_g4_t_v43)) > _g4_s22 ? (156u + sizeof(_g4_t_v43)) : _g4_s22,
    _g4_s24 = (160u + sizeof(_g4_t_v44)) > _g4_s23 ? (160u + sizeof(_g4_t_v44)) : _g4_s23,
    _g4_s25 = (164u + sizeof(_g4_t_v45)) > _g4_s24 ? (164u + sizeof(_g4_t_v45)) : _g4_s24,
    _g4_s26 = (168u + sizeof(_g4_t_v46)) > _g4_s25 ? (168u + sizeof(_g4_t_v46)) : _g4_s25,
    _g4_s27 = (172u + sizeof(_g4_t_v47)) > _g4_s26 ? (172u + sizeof(_g4_t_v47)) : _g4_s26,
    _g4_s28 = (176u + sizeof(_g4_t_v48)) > _g4_s27 ? (176u + sizeof(_g4_t_v48)) : _g4_s27,
    _g4_s29 = (180u + sizeof(_g4_t_v49)) > _g4_s28 ? (180u + sizeof(_g4_t_v49)) : _g4_s28,
    _g4_s30 = (184u + sizeof(_g4_t_v50)) > _g4_s29 ? (184u + sizeof(_g4_t_v50)) : _g4_s29,
    _g4_s31 = (188u + sizeof(_g4_t_v51)) > _g4_s30 ? (188u + sizeof(_g4_t_v51)) : _g4_s30,
    _g4_s32 = (204u + sizeof(_g4_t_v52)) > _g4_s31 ? (204u + sizeof(_g4_t_v52)) : _g4_s31,
    _g4_s33 = (220u + sizeof(_g4_t_v53)) > _g4_s32 ? (220u + sizeof(_g4_t_v53)) : _g4_s32,
    _g4_s34 = (236u + sizeof(_g4_t_v54)) > _g4_s33 ? (236u + sizeof(_g4_t_v54)) : _g4_s33,
    _g4_s35 = (252u + sizeof(_g4_t_v55)) > _g4_s34 ? (252u + sizeof(_g4_t_v55)) : _g4_s34
  };
  alignas(16) uint8_t _g4_sf[_g4_s35];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 60u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 64u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 64u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 64u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 64u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 68u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 89u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 92u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 96u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 112u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 116u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 120u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 124u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 128u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 132u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 136u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 140u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 144u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 148u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 152u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 156u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 160u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 164u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 168u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 172u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 176u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 180u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 184u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 188u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 204u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 220u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 236u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 252u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "object_type", (int)(uintptr_t)(&v29));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v32), 1);
  v2 = (void *)(v32 - 12);
  if ( (uint32_t *)(v32 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v32 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "object_id", (int)(uintptr_t)(&v29) + 1);
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v33), 4);
  v3 = (void *)(v33 - 12);
  if ( (uint32_t *)(v33 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "sort_type", (int)(uintptr_t)(&v29) + 2);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v34), 4);
  v4 = (void *)(v34 - 12);
  if ( (uint32_t *)(v34 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "language", (int)(uintptr_t)(&v30));
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v35), 4);
  v5 = (void *)(v35 - 12);
  if ( (uint32_t *)(v35 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v35 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) == 0 )
    return gaia::GaiaRequest::GetResponseCode(a2);
  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
  {
    gaia::GaiaRequest::SetOperationCode(a2, 4038);
    gaia::Gaia::GetInstance();
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v55, a2);
    started = (char *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v55);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v55);
    return (int)(uintptr_t)(started);
  }
  OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
  v24 = (char *)OsirisStatus;
  if ( OsirisStatus == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), (char *)&unk_1B15112, (int)(uintptr_t)(&v30) + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), (char *)&unk_1B15112, (int)(uintptr_t)(&v30) + 2);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), (char *)&unk_1B15112, (int)(uintptr_t)(&v30) + 3);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), (char *)&unk_1B15112, (int)(uintptr_t)(&v31));
    v48 = nullptr;
    v49 = nullptr;
    v50 = 0;
    v40 = nullptr;
    v41 = 0;
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v51, (const char *)a2);
    v28 = Json::Value::asInt((Json::Value::Self *)v51);
    Json::Value::Destroy((Json::Value::Self *)v51);
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v52, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v42, (int)(uintptr_t)(v52));
    g4_std::string::assign_str(&v37, &v42);
    v7 = (void *)(v42 - 12);
    if ( (uint32_t *)(v42 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v42 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    Json::Value::Destroy((Json::Value::Self *)v52);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), "sort_type", (int)(uintptr_t)(&v31) + 1);
    v8 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v43);
    isNull = Json::Value::isNull(v8);
    v25 = (char *)(v43 - 12);
    if ( (uint32_t *)(v43 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v43 - 4), 0xFFFFFFFF) <= 0 )
    {
      v22 = isNull;
      g4_std::string::Rep::M_destroy(v25);
      isNull = v22;
    }
    if ( !isNull )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v53, (const char *)a2);
      Json::Value::asString((Json::Value::Self *)v44, (int)(uintptr_t)(v53));
      g4_std::string::assign_str(&v38, v44);
      g4_std::string::Destroy(v44);
      Json::Value::Destroy((Json::Value::Self *)v53);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "language", (int)(uintptr_t)(&v31) + 2);
    v10 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v45);
    v11 = Json::Value::isNull(v10);
    v26 = (char *)(v45 - 12);
    if ( (uint32_t *)(v45 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
    {
      v23 = v11;
      g4_std::string::Rep::M_destroy(v26);
      v11 = v23;
    }
    if ( !v11 )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v54, (const char *)a2);
      Json::Value::asString((Json::Value::Self *)v46, (int)(uintptr_t)(v54));
      g4_std::string::assign_str(&v39, v46);
      g4_std::string::Destroy(v46);
      Json::Value::Destroy((Json::Value::Self *)v54);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), "social", (int)(uintptr_t)(&v31) + 3);
    started = (char *)gaia::Gaia_Osiris::GetAccessToken((gaia::Gaia::Self *)(self), a2, (uint32_t *)(&v47), (int)(uintptr_t)(&v36));
    v12 = (void *)(v47 - 12);
    if ( (uint32_t *)(v47 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v47 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v12);
    }
    if ( started != nullptr )
    {
      gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(started));
    }
    else
    {
      Instance = gaia::Gaia::GetInstance();
      started = (char *)gaia::Osiris::ViewWall(
                          *(gaia::BaseServiceManager::Self **)(Instance + 24),
                          (void **)&v40,
                          &v41,
                          v28,
                          (int)(uintptr_t)(&v37),
                          (int)(uintptr_t)(&v36),
                          (int)(uintptr_t)(&v38),
                          (int)(uintptr_t)(&v39),
                          (int)(uintptr_t)(a2));
      if ( started == nullptr )
        started = (char *)gaia::BaseServiceManager::ParseMessages(v40, v41, (int)(uintptr_t)(&v48), 13);
      gaia::GaiaRequest::SetResponse(a2, (const std::vector<gaia::BaseJSONServiceResponse::Self> *)&v48);
      gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(started));
      free(v40);
    }
    v14 = v49;
    v15 = (gaia::BaseJSONServiceResponse::Self *)v48;
    if ( v49 != v48 )
    {
      do
      {
        ptr = v15;
        v15 = (gaia::BaseJSONServiceResponse::Self *)((char *)v15 + 20);
        gaia::BaseJSONServiceResponse::Destroy(ptr);
      }
      while ( v14 != v15 );
      v15 = (gaia::BaseJSONServiceResponse::Self *)v48;
    }
    if ( v15 != nullptr )
      opDelete(v15);
    v16 = (void *)(v39 - 12);
    if ( (uint32_t *)(v39 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v16);
    }
    v17 = (void *)(v38 - 12);
    if ( (uint32_t *)(v38 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v38 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v17);
    }
    v18 = (void *)(v37 - 12);
    if ( (uint32_t *)(v37 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v18);
    }
    v19 = (void *)(v36 - 12);
    if ( (uint32_t *)(v36 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v36 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v19);
    }
    return (int)(uintptr_t)(started);
  }
  gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
  return (int)(uintptr_t)(v24);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::UpvoteWallPost  (binary VA: 0x1463ee0)
// Original: gaia::Gaia_Osiris::UpvoteWallPost
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::UpvoteWallPost(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  int OsirisStatus;
  void *v7;
  void *v8;
  Json::Value::Self *v9;
  bool isNull;
  int AccessToken;
  void *v12;
  int result;
  void *v14;
  void *v15;
  void *v16;
  void *v17;
  int Instance;
  typedef Json::Value::Self *_g4_t_v19;
  typedef Json::Value::Self *_g4_t_v20;
  typedef Json::Value::Self *_g4_t_started;
  typedef Json::Value::Self *_g4_t_v22;
  typedef Json::Value::Self *_g4_t_v23;
  typedef Json::Value::Self *_g4_t_v24;
  typedef bool _g4_t_v25;
  typedef Json::Value::Self *_g4_t_v26;
  typedef void *_g4_t_v27;
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
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef uint8_t _g4_t_v43[4];
  typedef int _g4_t_v44;
  typedef uint8_t _g4_t_v45[16];
  typedef uint8_t _g4_t_v46[16];
  typedef uint8_t _g4_t_v47[16];
  typedef uint8_t _g4_t_v48[16];
  typedef uint8_t _g4_t_v49[96];
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (12u + sizeof(_g4_t_v19)) > _g4_s0 ? (12u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v20)) > _g4_s1 ? (12u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_started)) > _g4_s2 ? (12u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v22)) > _g4_s3 ? (12u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v23)) > _g4_s4 ? (12u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v24)) > _g4_s5 ? (12u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v25)) > _g4_s6 ? (12u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v26)) > _g4_s7 ? (12u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v27)) > _g4_s8 ? (16u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v28)) > _g4_s9 ? (20u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (34u + sizeof(_g4_t_v29)) > _g4_s10 ? (34u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v30)) > _g4_s11 ? (36u + sizeof(_g4_t_v30)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v31)) > _g4_s12 ? (40u + sizeof(_g4_t_v31)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v32)) > _g4_s13 ? (56u + sizeof(_g4_t_v32)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v33)) > _g4_s14 ? (60u + sizeof(_g4_t_v33)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v34)) > _g4_s15 ? (64u + sizeof(_g4_t_v34)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v35)) > _g4_s16 ? (68u + sizeof(_g4_t_v35)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v36)) > _g4_s17 ? (72u + sizeof(_g4_t_v36)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v37)) > _g4_s18 ? (76u + sizeof(_g4_t_v37)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v38)) > _g4_s19 ? (80u + sizeof(_g4_t_v38)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v39)) > _g4_s20 ? (84u + sizeof(_g4_t_v39)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v40)) > _g4_s21 ? (88u + sizeof(_g4_t_v40)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_v41)) > _g4_s22 ? (92u + sizeof(_g4_t_v41)) : _g4_s22,
    _g4_s24 = (96u + sizeof(_g4_t_v42)) > _g4_s23 ? (96u + sizeof(_g4_t_v42)) : _g4_s23,
    _g4_s25 = (100u + sizeof(_g4_t_v43)) > _g4_s24 ? (100u + sizeof(_g4_t_v43)) : _g4_s24,
    _g4_s26 = (104u + sizeof(_g4_t_v44)) > _g4_s25 ? (104u + sizeof(_g4_t_v44)) : _g4_s25,
    _g4_s27 = (108u + sizeof(_g4_t_v45)) > _g4_s26 ? (108u + sizeof(_g4_t_v45)) : _g4_s26,
    _g4_s28 = (124u + sizeof(_g4_t_v46)) > _g4_s27 ? (124u + sizeof(_g4_t_v46)) : _g4_s27,
    _g4_s29 = (140u + sizeof(_g4_t_v47)) > _g4_s28 ? (140u + sizeof(_g4_t_v47)) : _g4_s28,
    _g4_s30 = (156u + sizeof(_g4_t_v48)) > _g4_s29 ? (156u + sizeof(_g4_t_v48)) : _g4_s29,
    _g4_s31 = (172u + sizeof(_g4_t_v49)) > _g4_s30 ? (172u + sizeof(_g4_t_v49)) : _g4_s30
  };
  alignas(16) uint8_t _g4_sf[_g4_s31];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 34u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 36u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 40u);
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
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 96u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 100u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 104u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 108u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 124u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 140u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 156u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 172u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "object_id", (int)(uintptr_t)(&v29));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v32), 4);
    v2 = (void *)(v32 - 12);
    if ( (uint32_t *)(v32 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v32 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "activity_id", (int)(uintptr_t)(&v29) + 1);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v33), 4);
    v3 = (void *)(v33 - 12);
    if ( (uint32_t *)(v33 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "object_type", (int)(uintptr_t)(&v30));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v34), 1);
    v4 = (void *)(v34 - 12);
    if ( (uint32_t *)(v34 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "activity_type", (int)(uintptr_t)(&v30) + 1);
    gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v35), 4);
    v5 = (void *)(v35 - 12);
    if ( (uint32_t *)(v35 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v35 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 4042);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v49, a2);
        started = (Json::Value::Self *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v49);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v49);
        return (int)(uintptr_t)(started);
      }
      else
      {
        OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
        if ( OsirisStatus != 0 )
        {
          v22 = (Json::Value::Self *)OsirisStatus;
          gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
          return (int)(uintptr_t)(v22);
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), (char *)&unk_1B15112, (int)(uintptr_t)(&v30) + 2);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), (char *)&unk_1B15112, (int)(uintptr_t)(&v30) + 3);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), (char *)&unk_1B15112, (int)(uintptr_t)(&v31));
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), (char *)&unk_1B15112, (int)(uintptr_t)(&v31) + 1);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v45, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v40, (int)(uintptr_t)(v45));
          g4_std::string::assign_str(&v37, &v40);
          v7 = (void *)(v40 - 12);
          if ( (uint32_t *)(v40 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v40 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v7);
          }
          Json::Value::Destroy((Json::Value::Self *)v45);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v46, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v41, (int)(uintptr_t)(v46));
          g4_std::string::assign_str(&v38, &v41);
          v8 = (void *)(v41 - 12);
          if ( (uint32_t *)(v41 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v8);
          }
          Json::Value::Destroy((Json::Value::Self *)v46);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v47, (const char *)a2);
          v28 = Json::Value::asInt((Json::Value::Self *)v47);
          Json::Value::Destroy((Json::Value::Self *)v47);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), "activity_type", (int)(uintptr_t)(&v31) + 2);
          v9 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v42);
          isNull = Json::Value::isNull(v9);
          v27 = (void *)(v42 - 12);
          if ( (uint32_t *)(v42 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v42 - 4), 0xFFFFFFFF) <= 0 )
          {
            v25 = isNull;
            g4_std::string::Rep::M_destroy(v27);
            isNull = v25;
          }
          if ( !isNull )
          {
            gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v48, (const char *)a2);
            Json::Value::asString((Json::Value::Self *)v43, (int)(uintptr_t)(v48));
            g4_std::string::assign_str(&v39, v43);
            g4_std::string::Destroy(v43);
            Json::Value::Destroy((Json::Value::Self *)v48);
          }
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), "social", (int)(uintptr_t)(&v31) + 3);
          AccessToken = gaia::Gaia_Osiris::GetAccessToken((gaia::Gaia::Self *)(self), a2, (uint32_t *)(&v44), (int)(uintptr_t)(&v36));
          v12 = (void *)(v44 - 12);
          if ( (uint32_t *)(v44 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v44 - 4), 0xFFFFFFFF) <= 0 )
          {
            v26 = (Json::Value::Self *)AccessToken;
            g4_std::string::Rep::M_destroy(v12);
            AccessToken = (int)(uintptr_t)(v26);
          }
          if ( AccessToken == 0 )
          {
            Instance = gaia::Gaia::GetInstance();
            AccessToken = gaia::Osiris::UpvoteWallPost(
                            *(gaia::BaseServiceManager::Self **)(Instance + 24),
                            v28,
                            (int)(uintptr_t)(&v37),
                            (int)(uintptr_t)(&v36),
                            (int)(uintptr_t)(&v38),
                            (int)(uintptr_t)(&v39),
                            (int)(uintptr_t)(a2));
          }
          v19 = (Json::Value::Self *)AccessToken;
          gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
          result = (int)(uintptr_t)(v19);
          v14 = (void *)(v39 - 12);
          if ( (uint32_t *)(v39 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v14);
            result = (int)(uintptr_t)(v19);
          }
          v15 = (void *)(v38 - 12);
          if ( (uint32_t *)(v38 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v38 - 4), 0xFFFFFFFF) <= 0 )
          {
            v24 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v15);
            result = (int)(uintptr_t)(v24);
          }
          v16 = (void *)(v37 - 12);
          if ( (uint32_t *)(v37 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
          {
            v23 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v16);
            result = (int)(uintptr_t)(v23);
          }
          v17 = (void *)(v36 - 12);
          if ( (uint32_t *)(v36 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v36 - 4), 0xFFFFFFFF) <= 0 )
          {
            v20 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v17);
            return (int)(uintptr_t)(v20);
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
// Function: gaia::Gaia_Osiris::PostOnWall  (binary VA: 0x1464640)
// Original: gaia::Gaia_Osiris::PostOnWall
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::PostOnWall(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  int OsirisStatus;
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
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "object_type", (int)(uintptr_t)(&v26));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v29), 1);
    v2 = (void *)(v29 - 12);
    if ( (uint32_t *)(v29 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "object_id", (int)(uintptr_t)(&v27));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v30), 4);
    v3 = (void *)(v30 - 12);
    if ( (uint32_t *)(v30 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "text", (int)(uintptr_t)(&v27) + 1);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v31), 4);
    v4 = (void *)(v31 - 12);
    if ( (uint32_t *)(v31 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "language", (int)(uintptr_t)(&v27) + 2);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v32), 4);
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
        gaia::GaiaRequest::SetOperationCode(a2, 4037);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v45, a2);
        started = (Json::Value::Self *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v45);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v45);
        return (int)(uintptr_t)(started);
      }
      else
      {
        OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
        if ( OsirisStatus != 0 )
        {
          v21 = (Json::Value::Self *)OsirisStatus;
          gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
          return (int)(uintptr_t)(v21);
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), (char *)&unk_1B15112, (int)(uintptr_t)(&v27) + 3);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), (char *)&unk_1B15112, (int)(uintptr_t)(&v28));
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), (char *)&unk_1B15112, (int)(uintptr_t)(&v28) + 1);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), (char *)&unk_1B15112, (int)(uintptr_t)(&v28) + 2);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v41, (const char *)a2);
          v25 = Json::Value::asInt((Json::Value::Self *)v41);
          Json::Value::Destroy((Json::Value::Self *)v41);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v42, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v37, (int)(uintptr_t)(v42));
          g4_std::string::assign_str(&v34, &v37);
          v7 = (void *)(v37 - 12);
          if ( (uint32_t *)(v37 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v7);
          }
          Json::Value::Destroy((Json::Value::Self *)v42);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v43, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v38, (int)(uintptr_t)(v43));
          g4_std::string::assign_str(&v35, &v38);
          v8 = (void *)(v38 - 12);
          if ( (uint32_t *)(v38 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v38 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v8);
          }
          Json::Value::Destroy((Json::Value::Self *)v43);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v44, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v39, (int)(uintptr_t)(v44));
          g4_std::string::assign_str(&v36, &v39);
          v9 = (void *)(v39 - 12);
          if ( (uint32_t *)(v39 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v9);
          }
          Json::Value::Destroy((Json::Value::Self *)v44);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "social", (int)(uintptr_t)(&v28) + 3);
          AccessToken = gaia::Gaia_Osiris::GetAccessToken((gaia::Gaia::Self *)(self), a2, (uint32_t *)(&v40), (int)(uintptr_t)(&v33));
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
            AccessToken = gaia::Osiris::PostOnWall(
                            *(gaia::BaseServiceManager::Self **)(Instance + 24),
                            v25,
                            (int)(uintptr_t)(&v34),
                            (int)(uintptr_t)(&v33),
                            (int)(uintptr_t)(&v35),
                            (int)(uintptr_t)(&v36),
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
// Function: gaia::Gaia_Osiris::MemberUpdateCustomFields  (binary VA: 0x1464d50)
// Original: gaia::Gaia_Osiris::MemberUpdateCustomFields
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::MemberUpdateCustomFields(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  int OsirisStatus;
  void *v5;
  void *v6;
  int AccessToken;
  int result;
  void *v9;
  void *v10;
  void *v11;
  int Instance;
  typedef char *_g4_t_v13;
  typedef char *_g4_t_v14;
  typedef char *_g4_t_started;
  typedef char *_g4_t_v16;
  typedef char *_g4_t_v17;
  typedef char *_g4_t_v18;
  typedef void *_g4_t_v19;
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
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef void *_g4_t_v34;
  typedef int *_g4_t_v35;
  typedef int *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef uint8_t _g4_t_v38[96];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (8u + sizeof(_g4_t_v13)) > _g4_s0 ? (8u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_started)) > _g4_s2 ? (8u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v16)) > _g4_s3 ? (8u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v17)) > _g4_s4 ? (8u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v18)) > _g4_s5 ? (8u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v19)) > _g4_s6 ? (12u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (22u + sizeof(_g4_t_v20)) > _g4_s7 ? (22u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v21)) > _g4_s8 ? (24u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v22)) > _g4_s9 ? (36u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v23)) > _g4_s10 ? (40u + sizeof(_g4_t_v23)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v24)) > _g4_s11 ? (44u + sizeof(_g4_t_v24)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v25)) > _g4_s12 ? (48u + sizeof(_g4_t_v25)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v26)) > _g4_s13 ? (52u + sizeof(_g4_t_v26)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v27)) > _g4_s14 ? (56u + sizeof(_g4_t_v27)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v28)) > _g4_s15 ? (60u + sizeof(_g4_t_v28)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v29)) > _g4_s16 ? (64u + sizeof(_g4_t_v29)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v30)) > _g4_s17 ? (68u + sizeof(_g4_t_v30)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v31)) > _g4_s18 ? (84u + sizeof(_g4_t_v31)) : _g4_s18,
    _g4_s20 = (100u + sizeof(_g4_t_v32)) > _g4_s19 ? (100u + sizeof(_g4_t_v32)) : _g4_s19,
    _g4_s21 = (104u + sizeof(_g4_t_v33)) > _g4_s20 ? (104u + sizeof(_g4_t_v33)) : _g4_s20,
    _g4_s22 = (108u + sizeof(_g4_t_v34)) > _g4_s21 ? (108u + sizeof(_g4_t_v34)) : _g4_s21,
    _g4_s23 = (112u + sizeof(_g4_t_v35)) > _g4_s22 ? (112u + sizeof(_g4_t_v35)) : _g4_s22,
    _g4_s24 = (116u + sizeof(_g4_t_v36)) > _g4_s23 ? (116u + sizeof(_g4_t_v36)) : _g4_s23,
    _g4_s25 = (120u + sizeof(_g4_t_v37)) > _g4_s24 ? (120u + sizeof(_g4_t_v37)) : _g4_s24,
    _g4_s26 = (124u + sizeof(_g4_t_v38)) > _g4_s25 ? (124u + sizeof(_g4_t_v38)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 22u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 52u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 56u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 60u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 64u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 68u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 84u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 100u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 104u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 108u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 112u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 116u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 120u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 124u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "group_id", (int)(uintptr_t)(&v20));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v22), 4);
    v2 = (void *)(v22 - 12);
    if ( (uint32_t *)(v22 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "credential", (int)(uintptr_t)(&v20) + 1);
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
        gaia::GaiaRequest::SetOperationCode(a2, 4026);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v38, a2);
        started = (char *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v38);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v38);
        return (int)(uintptr_t)(started);
      }
      else
      {
        OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
        if ( OsirisStatus != 0 )
        {
          v16 = (char *)OsirisStatus;
          gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
          return (int)(uintptr_t)(v16);
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), (char *)&unk_1B15112, (int)(uintptr_t)(&v21));
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), (char *)&unk_1B15112, (int)(uintptr_t)(&v21) + 1);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), (char *)&unk_1B15112, (int)(uintptr_t)(&v21) + 2);
          v35 = &v33;
          v36 = &v33;
          v33 = 0;
          v34 = nullptr;
          v37 = 0;
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
          gaia::GaiaRequest::GetInputValue(a2, (std::map<std::string,std::string> *)&v32);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "social", (int)(uintptr_t)(&v21) + 3);
          AccessToken = gaia::Gaia_Osiris::GetAccessToken((gaia::Gaia::Self *)(self), a2, &v29, (int)(uintptr_t)(&v24));
          v19 = (void *)(v29 - 12);
          if ( (uint32_t *)(v29 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
          {
            v18 = (char *)AccessToken;
            g4_std::string::Rep::M_destroy(v19);
            AccessToken = (int)(uintptr_t)(v18);
          }
          if ( AccessToken == 0 )
          {
            Instance = gaia::Gaia::GetInstance();
            AccessToken = gaia::Osiris::MemberUpdateCustomFields(
                            *(gaia::BaseServiceManager::Self **)(Instance + 24),
                            (int)(uintptr_t)(&v24),
                            (int)(uintptr_t)(&v25),
                            (int)(uintptr_t)(&v26),
                            (int)(uintptr_t)(&v32),
                            (int)(uintptr_t)(a2));
          }
          v13 = (char *)AccessToken;
          gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
          std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
            (int)(uintptr_t)(&v32),
            v34);
          result = (int)(uintptr_t)(v13);
          v9 = (void *)(v26 - 12);
          if ( (uint32_t *)(v26 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v9);
            result = (int)(uintptr_t)(v13);
          }
          v10 = (void *)(v25 - 12);
          if ( (uint32_t *)(v25 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
          {
            v17 = (char *)result;
            g4_std::string::Rep::M_destroy(v10);
            result = (int)(uintptr_t)(v17);
          }
          v11 = (void *)(v24 - 12);
          if ( (uint32_t *)(v24 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
          {
            v14 = (char *)result;
            g4_std::string::Rep::M_destroy(v11);
            return (int)(uintptr_t)(v14);
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
// Function: gaia::Gaia_Osiris::DeliverParticipantAwards  (binary VA: 0x14652a0)
// Original: gaia::Gaia_Osiris::DeliverParticipantAwards
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::DeliverParticipantAwards(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  int v4;
  void *v5;
  void *v6;
  int v7;
  void *v8;
  void *v9;
  void *v10;
  int Instance;
  char *v12;
  gaia::BaseJSONServiceResponse::Self *v13;
  gaia::BaseJSONServiceResponse::Self *v14;
  uint32_t *v15;
  uint32_t *v16;
  void *v17;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v19;
  typedef char *_g4_t_AccessToken;
  typedef char *_g4_t_started;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint32_t *_g4_t_v27;
  typedef uint32_t *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef char *_g4_t_v34;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v35;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef uint8_t _g4_t_v38[96];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (0u + sizeof(_g4_t_v19)) > _g4_s0 ? (0u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_AccessToken)) > _g4_s1 ? (44u + sizeof(_g4_t_AccessToken)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_started)) > _g4_s2 ? (44u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v22)) > _g4_s3 ? (52u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v23)) > _g4_s4 ? (56u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (68u + sizeof(_g4_t_v24)) > _g4_s5 ? (68u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v25)) > _g4_s6 ? (72u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v26)) > _g4_s7 ? (76u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v27)) > _g4_s8 ? (80u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (84u + sizeof(_g4_t_v28)) > _g4_s9 ? (84u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (88u + sizeof(_g4_t_v29)) > _g4_s10 ? (88u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (92u + sizeof(_g4_t_v30)) > _g4_s11 ? (92u + sizeof(_g4_t_v30)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v31)) > _g4_s12 ? (96u + sizeof(_g4_t_v31)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v32)) > _g4_s13 ? (100u + sizeof(_g4_t_v32)) : _g4_s13,
    _g4_s15 = (104u + sizeof(_g4_t_v33)) > _g4_s14 ? (104u + sizeof(_g4_t_v33)) : _g4_s14,
    _g4_s16 = (108u + sizeof(_g4_t_v34)) > _g4_s15 ? (108u + sizeof(_g4_t_v34)) : _g4_s15,
    _g4_s17 = (112u + sizeof(_g4_t_v35)) > _g4_s16 ? (112u + sizeof(_g4_t_v35)) : _g4_s16,
    _g4_s18 = (116u + sizeof(_g4_t_v36)) > _g4_s17 ? (116u + sizeof(_g4_t_v36)) : _g4_s17,
    _g4_s19 = (120u + sizeof(_g4_t_v37)) > _g4_s18 ? (120u + sizeof(_g4_t_v37)) : _g4_s18,
    _g4_s20 = (124u + sizeof(_g4_t_v38)) > _g4_s19 ? (124u + sizeof(_g4_t_v38)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_AccessToken &AccessToken = *reinterpret_cast<_g4_t_AccessToken *>(_g4_sf + 44u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 52u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 56u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 68u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 72u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 76u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 80u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 84u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 88u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 92u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 96u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 100u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 104u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 108u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 112u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 116u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 120u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 124u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "event_id", (int)(uintptr_t)(&v22));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v24), 4);
  v2 = (void *)(v24 - 12);
  if ( (uint32_t *)(v24 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "participant_id", (int)(uintptr_t)(&v22) + 1);
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v25), 4);
  v3 = (void *)(v25 - 12);
  if ( (uint32_t *)(v25 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) == 0 )
    return gaia::GaiaRequest::GetResponseCode(a2);
  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) == 0 )
  {
    v26 = (int)(uintptr_t)(&dword_213B814);
    v27 = &dword_213B814;
    v28 = &dword_213B814;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "event_id", (int)(uintptr_t)(&v22) + 2);
    v4 = gaia::GaiaRequest::opIndex(a2, &v29);
    Json::Value::asString((Json::Value::Self *)&v30, v4);
    g4_std::string::assign_str(&v27, &v30);
    v5 = (void *)(v30 - 12);
    if ( (uint32_t *)(v30 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    v6 = (void *)(v29 - 12);
    if ( (uint32_t *)(v29 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "participant_id", (int)(uintptr_t)(&v22) + 3);
    v7 = gaia::GaiaRequest::opIndex(a2, &v31);
    Json::Value::asString((Json::Value::Self *)&v32, v7);
    g4_std::string::assign_str(&v28, &v32);
    v8 = (void *)(v32 - 12);
    if ( (uint32_t *)(v32 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v32 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v8);
    }
    v9 = (void *)(v31 - 12);
    if ( (uint32_t *)(v31 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v9);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "social", (int)(uintptr_t)(&v23));
    AccessToken = (char *)gaia::Gaia_Osiris::GetAccessToken((gaia::Gaia::Self *)(self), a2, &v33, (int)(uintptr_t)(&v26));
    v10 = (void *)(v33 - 12);
    if ( (uint32_t *)(v33 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v10);
    }
    if ( AccessToken != nullptr )
    {
      gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(AccessToken));
    }
    else
    {
      v35 = nullptr;
      v36 = nullptr;
      v37 = 0;
      v34 = (char *)&dword_213B814;
      Instance = gaia::Gaia::GetInstance();
      AccessToken = (char *)gaia::Osiris::DeliverParticipantAwards(
                              *(uint32_t *)(Instance + 24),
                              &v34,
                              &v26,
                              &v27,
                              &v28,
                              a2);
      if ( AccessToken == nullptr )
        AccessToken = (char *)gaia::BaseServiceManager::ParseMessages(v34, *((uint32_t *)v34 - 3), (int)(uintptr_t)(&v35), 15);
      gaia::GaiaRequest::SetResponse(a2, (const std::vector<gaia::BaseJSONServiceResponse::Self> *)&v35);
      gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(AccessToken));
      v12 = v34 - 12;
      if ( v34 - 12 != (char *)dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)v34 - 1, 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v12);
      }
      v13 = v36;
      v14 = v35;
      if ( v36 != v35 )
      {
        do
        {
          v19 = v14;
          v14 = (gaia::BaseJSONServiceResponse::Self *)((char *)v14 + 20);
          gaia::BaseJSONServiceResponse::Destroy(v19);
        }
        while ( v13 != v14 );
        v14 = v35;
      }
      if ( v14 != nullptr )
        opDelete(v14);
    }
    v15 = v28 - 3;
    if ( v28 - 3 != dword_213B808 && __sync_fetch_and_add(v28 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v15);
    v16 = v27 - 3;
    if ( v27 - 3 != dword_213B808 && __sync_fetch_and_add(v27 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v16);
    v17 = (void *)(v26 - 12);
    if ( (uint32_t *)(v26 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v17);
    }
    return (int)(uintptr_t)(AccessToken);
  }
  gaia::GaiaRequest::SetOperationCode(a2, 4048);
  gaia::Gaia::GetInstance();
  gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v38, a2);
  started = (char *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v38);
  gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v38);
  return (int)(uintptr_t)(started);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::DeliverAwards  (binary VA: 0x1465840)
// Original: gaia::Gaia_Osiris::DeliverAwards
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::DeliverAwards(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  int v3;
  void *v4;
  void *v5;
  int Instance;
  char *v7;
  gaia::BaseJSONServiceResponse::Self *v8;
  gaia::BaseJSONServiceResponse::Self *v9;
  void *v10;
  void *v11;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v13;
  typedef int _g4_t_started;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef char *_g4_t_v22;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v23;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint8_t _g4_t_v26[96];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_started)) > _g4_s1 ? (44u + sizeof(_g4_t_started)) : _g4_s1,
    _g4_s3 = (63u + sizeof(_g4_t_v15)) > _g4_s2 ? (63u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v16)) > _g4_s3 ? (64u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (72u + sizeof(_g4_t_v17)) > _g4_s4 ? (72u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (76u + sizeof(_g4_t_v18)) > _g4_s5 ? (76u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v19)) > _g4_s6 ? (80u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (84u + sizeof(_g4_t_v20)) > _g4_s7 ? (84u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (88u + sizeof(_g4_t_v21)) > _g4_s8 ? (88u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (92u + sizeof(_g4_t_v22)) > _g4_s9 ? (92u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (96u + sizeof(_g4_t_v23)) > _g4_s10 ? (96u + sizeof(_g4_t_v23)) : _g4_s10,
    _g4_s12 = (100u + sizeof(_g4_t_v24)) > _g4_s11 ? (100u + sizeof(_g4_t_v24)) : _g4_s11,
    _g4_s13 = (104u + sizeof(_g4_t_v25)) > _g4_s12 ? (104u + sizeof(_g4_t_v25)) : _g4_s12,
    _g4_s14 = (108u + sizeof(_g4_t_v26)) > _g4_s13 ? (108u + sizeof(_g4_t_v26)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 44u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 63u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 64u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 72u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 76u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 80u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 84u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 88u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 92u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 96u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 100u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 104u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 108u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "event_id", (int)(uintptr_t)(&v15));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v17), 4);
  v2 = (void *)(v17 - 12);
  if ( (uint32_t *)(v17 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
  {
    if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
    {
      gaia::GaiaRequest::SetOperationCode(a2, 4047);
      gaia::Gaia::GetInstance();
      gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v26, a2);
      started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v26);
      gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v26);
    }
    else
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "event_id", (int)(uintptr_t)(&v16));
      v3 = gaia::GaiaRequest::opIndex(a2, &v19);
      Json::Value::asString((Json::Value::Self *)&v18, v3);
      v4 = (void *)(v19 - 12);
      if ( (uint32_t *)(v19 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v4);
      }
      v20 = (int)(uintptr_t)(&dword_213B814);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "social", (int)(uintptr_t)(&v16) + 1);
      started = gaia::Gaia_Osiris::GetAccessToken((gaia::Gaia::Self *)(self), a2, &v21, (int)(uintptr_t)(&v20));
      v5 = (void *)(v21 - 12);
      if ( (uint32_t *)(v21 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v5);
      }
      if ( started != 0 )
      {
        gaia::GaiaRequest::SetResponseCode(a2, started);
      }
      else
      {
        v23 = nullptr;
        v24 = nullptr;
        v25 = 0;
        v22 = (char *)&dword_213B814;
        Instance = gaia::Gaia::GetInstance();
        started = gaia::Osiris::DeliverAwards(*(uint32_t *)(Instance + 24), &v22, &v20, &v18, a2);
        if ( started == 0 )
          started = gaia::BaseServiceManager::ParseMessages(v22, *((uint32_t *)v22 - 3), (int)(uintptr_t)(&v23), 15);
        gaia::GaiaRequest::SetResponse(a2, (const std::vector<gaia::BaseJSONServiceResponse::Self> *)&v23);
        gaia::GaiaRequest::SetResponseCode(a2, started);
        v7 = v22 - 12;
        if ( v22 - 12 != (char *)dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)v22 - 1, 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v7);
        }
        v8 = v24;
        v9 = v23;
        if ( v24 != v23 )
        {
          do
          {
            v13 = v9;
            v9 = (gaia::BaseJSONServiceResponse::Self *)((char *)v9 + 20);
            gaia::BaseJSONServiceResponse::Destroy(v13);
          }
          while ( v8 != v9 );
          v9 = v23;
        }
        if ( v9 != nullptr )
          opDelete(v9);
      }
      v10 = (void *)(v20 - 12);
      if ( (uint32_t *)(v20 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v10);
      }
      v11 = (void *)(v18 - 12);
      if ( (uint32_t *)(v18 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v11);
      }
    }
    return started;
  }
  return gaia::GaiaRequest::GetResponseCode(a2);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::DeleteEventAward  (binary VA: 0x1465c00)
// Original: gaia::Gaia_Osiris::DeleteEventAward
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::DeleteEventAward(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  int OsirisStatus;
  void *v5;
  int AccessToken;
  void *v7;
  int result;
  void *v9;
  void *v10;
  int Instance;
  typedef Json::Value::Self *_g4_t_v12;
  typedef Json::Value::Self *_g4_t_v13;
  typedef Json::Value::Self *_g4_t_started;
  typedef Json::Value::Self *_g4_t_v15;
  typedef Json::Value::Self *_g4_t_v16;
  typedef char _g4_t_v17;
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
  typedef uint8_t _g4_t_v28[96];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (4u + sizeof(_g4_t_v12)) > _g4_s0 ? (4u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v13)) > _g4_s1 ? (4u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_started)) > _g4_s2 ? (4u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v15)) > _g4_s3 ? (4u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v16)) > _g4_s4 ? (4u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v17)) > _g4_s5 ? (8u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (25u + sizeof(_g4_t_v18)) > _g4_s6 ? (25u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v19)) > _g4_s7 ? (28u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v20)) > _g4_s8 ? (36u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v21)) > _g4_s9 ? (40u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v22)) > _g4_s10 ? (44u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v23)) > _g4_s11 ? (48u + sizeof(_g4_t_v23)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v24)) > _g4_s12 ? (52u + sizeof(_g4_t_v24)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v25)) > _g4_s13 ? (56u + sizeof(_g4_t_v25)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v26)) > _g4_s14 ? (60u + sizeof(_g4_t_v26)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v27)) > _g4_s15 ? (76u + sizeof(_g4_t_v27)) : _g4_s15,
    _g4_s17 = (92u + sizeof(_g4_t_v28)) > _g4_s16 ? (92u + sizeof(_g4_t_v28)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 25u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 44u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 56u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 60u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 76u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 92u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "event_id", (int)(uintptr_t)(&v18));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v20), 4);
    v2 = (void *)(v20 - 12);
    if ( (uint32_t *)(v20 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "start_rank", (int)(uintptr_t)(&v18) + 1);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v21), 2);
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
        gaia::GaiaRequest::SetOperationCode(a2, 4036);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v28, a2);
        started = (Json::Value::Self *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v28);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v28);
        return (int)(uintptr_t)(started);
      }
      else
      {
        OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
        if ( OsirisStatus != 0 )
        {
          v15 = (Json::Value::Self *)OsirisStatus;
          gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
          return (int)(uintptr_t)(v15);
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), (char *)&unk_1B15112, (int)(uintptr_t)(&v18) + 2);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), (char *)&unk_1B15112, (int)(uintptr_t)(&v19));
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v26, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v24, (int)(uintptr_t)(v26));
          g4_std::string::assign_str(&v23, &v24);
          v5 = (void *)(v24 - 12);
          if ( (uint32_t *)(v24 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v5);
          }
          Json::Value::Destroy((Json::Value::Self *)v26);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v27, (const char *)a2);
          v17 = Json::Value::asUInt((Json::Value::Self *)v27);
          Json::Value::Destroy((Json::Value::Self *)v27);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), (char *)&unk_1B15112, (int)(uintptr_t)(&v19) + 1);
          AccessToken = gaia::Gaia_Osiris::GetAccessToken((gaia::Gaia::Self *)(self), a2, &v25, (int)(uintptr_t)(&v22));
          v7 = (void *)(v25 - 12);
          if ( (uint32_t *)(v25 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
          {
            v16 = (Json::Value::Self *)AccessToken;
            g4_std::string::Rep::M_destroy(v7);
            AccessToken = (int)(uintptr_t)(v16);
          }
          if ( AccessToken == 0 )
          {
            Instance = gaia::Gaia::GetInstance();
            AccessToken = gaia::Osiris::DeleteAward(
                            *(gaia::BaseServiceManager::Self **)(Instance + 24),
                            (int)(uintptr_t)(&v22),
                            (int)(uintptr_t)(&v23),
                            v17,
                            (int)(uintptr_t)(a2));
          }
          v12 = (Json::Value::Self *)AccessToken;
          gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
          result = (int)(uintptr_t)(v12);
          v9 = (void *)(v23 - 12);
          if ( (uint32_t *)(v23 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v9);
            result = (int)(uintptr_t)(v12);
          }
          v10 = (void *)(v22 - 12);
          if ( (uint32_t *)(v22 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
          {
            v13 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v10);
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
// Function: gaia::Gaia_Osiris::AddEventAward  (binary VA: 0x1466030)
// Original: gaia::Gaia_Osiris::AddEventAward
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::AddEventAward(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  void *v6;
  int OsirisStatus;
  int AccessToken;
  void *v9;
  Json::Value::Self *v10;
  int Instance;
  int result;
  void *v13;
  void *v14;
  void *v15;
  int v16;
  typedef bool _g4_t_isNull;
  typedef Json::Value::Self *_g4_t_v18;
  typedef Json::Value::Self *_g4_t_v19;
  typedef Json::Value::Self *_g4_t_started;
  typedef Json::Value::Self *_g4_t_v21;
  typedef Json::Value::Self *_g4_t_v22;
  typedef Json::Value::Self *_g4_t_v23;
  typedef Json::Value::Self *_g4_t_v24;
  typedef Json::Value::Self *_g4_t_v25;
  typedef char _g4_t_v26;
  typedef char _g4_t_v27;
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
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef uint8_t _g4_t_v43[4];
  typedef uint8_t _g4_t_v44[16];
  typedef uint8_t _g4_t_v45[16];
  typedef uint8_t _g4_t_v46[16];
  typedef uint8_t _g4_t_v47[16];
  typedef uint8_t _g4_t_v48[96];
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (12u + sizeof(_g4_t_isNull)) > _g4_s0 ? (12u + sizeof(_g4_t_isNull)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v18)) > _g4_s1 ? (12u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v19)) > _g4_s2 ? (12u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_started)) > _g4_s3 ? (12u + sizeof(_g4_t_started)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v21)) > _g4_s4 ? (12u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v22)) > _g4_s5 ? (12u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v23)) > _g4_s6 ? (12u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v24)) > _g4_s7 ? (12u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v25)) > _g4_s8 ? (12u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v26)) > _g4_s9 ? (16u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v27)) > _g4_s10 ? (20u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (39u + sizeof(_g4_t_v28)) > _g4_s11 ? (39u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v29)) > _g4_s12 ? (40u + sizeof(_g4_t_v29)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v30)) > _g4_s13 ? (44u + sizeof(_g4_t_v30)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v31)) > _g4_s14 ? (56u + sizeof(_g4_t_v31)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v32)) > _g4_s15 ? (60u + sizeof(_g4_t_v32)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v33)) > _g4_s16 ? (64u + sizeof(_g4_t_v33)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v34)) > _g4_s17 ? (68u + sizeof(_g4_t_v34)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v35)) > _g4_s18 ? (72u + sizeof(_g4_t_v35)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v36)) > _g4_s19 ? (76u + sizeof(_g4_t_v36)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v37)) > _g4_s20 ? (80u + sizeof(_g4_t_v37)) : _g4_s20,
    _g4_s22 = (84u + sizeof(_g4_t_v38)) > _g4_s21 ? (84u + sizeof(_g4_t_v38)) : _g4_s21,
    _g4_s23 = (88u + sizeof(_g4_t_v39)) > _g4_s22 ? (88u + sizeof(_g4_t_v39)) : _g4_s22,
    _g4_s24 = (92u + sizeof(_g4_t_v40)) > _g4_s23 ? (92u + sizeof(_g4_t_v40)) : _g4_s23,
    _g4_s25 = (96u + sizeof(_g4_t_v41)) > _g4_s24 ? (96u + sizeof(_g4_t_v41)) : _g4_s24,
    _g4_s26 = (100u + sizeof(_g4_t_v42)) > _g4_s25 ? (100u + sizeof(_g4_t_v42)) : _g4_s25,
    _g4_s27 = (104u + sizeof(_g4_t_v43)) > _g4_s26 ? (104u + sizeof(_g4_t_v43)) : _g4_s26,
    _g4_s28 = (108u + sizeof(_g4_t_v44)) > _g4_s27 ? (108u + sizeof(_g4_t_v44)) : _g4_s27,
    _g4_s29 = (124u + sizeof(_g4_t_v45)) > _g4_s28 ? (124u + sizeof(_g4_t_v45)) : _g4_s28,
    _g4_s30 = (140u + sizeof(_g4_t_v46)) > _g4_s29 ? (140u + sizeof(_g4_t_v46)) : _g4_s29,
    _g4_s31 = (156u + sizeof(_g4_t_v47)) > _g4_s30 ? (156u + sizeof(_g4_t_v47)) : _g4_s30,
    _g4_s32 = (172u + sizeof(_g4_t_v48)) > _g4_s31 ? (172u + sizeof(_g4_t_v48)) : _g4_s31
  };
  alignas(16) uint8_t _g4_sf[_g4_s32];
  _g4_t_isNull &isNull = *reinterpret_cast<_g4_t_isNull *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 20u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 39u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 40u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 44u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 56u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 60u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 64u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 68u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 72u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 76u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 80u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 84u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 88u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 92u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 96u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 100u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 104u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 108u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 124u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 140u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 156u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 172u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "event_id", (int)(uintptr_t)(&v28));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v31), 4);
    v2 = (void *)(v31 - 12);
    if ( (uint32_t *)(v31 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "gifts", (int)(uintptr_t)(&v29));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v32), 4);
    v3 = (void *)(v32 - 12);
    if ( (uint32_t *)(v32 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v32 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "start_rank", (int)(uintptr_t)(&v29) + 1);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v33), 2);
    v4 = (void *)(v33 - 12);
    if ( (uint32_t *)(v33 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "end_rank", (int)(uintptr_t)(&v29) + 2);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v34), 2);
    v5 = (void *)(v34 - 12);
    if ( (uint32_t *)(v34 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "percentile", (int)(uintptr_t)(&v29) + 3);
    gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v35), 4);
    v6 = (void *)(v35 - 12);
    if ( (uint32_t *)(v35 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v35 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 4035);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v48, a2);
        started = (Json::Value::Self *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v48);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v48);
        return (int)(uintptr_t)(started);
      }
      else
      {
        OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
        if ( OsirisStatus != 0 )
        {
          v22 = (Json::Value::Self *)OsirisStatus;
          gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
          return (int)(uintptr_t)(v22);
        }
        else
        {
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v44, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v36, (int)(uintptr_t)(v44));
          Json::Value::Destroy((Json::Value::Self *)v44);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v45, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v37, (int)(uintptr_t)(v45));
          Json::Value::Destroy((Json::Value::Self *)v45);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v46, (const char *)a2);
          v26 = Json::Value::asUInt((Json::Value::Self *)v46);
          Json::Value::Destroy((Json::Value::Self *)v46);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v47, (const char *)a2);
          v27 = Json::Value::asUInt((Json::Value::Self *)v47);
          Json::Value::Destroy((Json::Value::Self *)v47);
          v38 = (int)(uintptr_t)(&dword_213B814);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "social", (int)(uintptr_t)(&v30));
          AccessToken = gaia::Gaia_Osiris::GetAccessToken((gaia::Gaia::Self *)(self), a2, &v39, (int)(uintptr_t)(&v38));
          v9 = (void *)(v39 - 12);
          if ( (uint32_t *)(v39 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
          {
            v23 = (Json::Value::Self *)AccessToken;
            g4_std::string::Rep::M_destroy(v9);
            AccessToken = (int)(uintptr_t)(v23);
          }
          if ( AccessToken != 0 )
          {
            v21 = (Json::Value::Self *)AccessToken;
            gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
            result = (int)(uintptr_t)(v21);
          }
          else
          {
            v40 = (int)(uintptr_t)(&dword_213B814);
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "percentile", (int)(uintptr_t)(&v30) + 1);
            v10 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v41);
            isNull = Json::Value::isNull(v10);
            g4_std::string::Destroy(&v41);
            if ( !isNull )
            {
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), "percentile", (int)(uintptr_t)(&v30) + 2);
              v16 = gaia::GaiaRequest::opIndex(a2, &v42);
              Json::Value::asString((Json::Value::Self *)v43, v16);
              g4_std::string::assign_str(&v40, v43);
              g4_std::string::Destroy(v43);
              g4_std::string::Destroy(&v42);
            }
            Instance = gaia::Gaia::GetInstance();
            v18 = (Json::Value::Self *)gaia::Osiris::AddEventAward(
                                   *(gaia::BaseServiceManager::Self **)(Instance + 24),
                                   (int)(uintptr_t)(&v38),
                                   (int)(uintptr_t)(&v36),
                                   v26,
                                   v27,
                                   (int)(uintptr_t)(&v37),
                                   (int)(uintptr_t)(&v40),
                                   (int)(uintptr_t)(a2));
            gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(v18));
            g4_std::string::Destroy(&v40);
            result = (int)(uintptr_t)(v18);
          }
          v13 = (void *)(v38 - 12);
          if ( (uint32_t *)(v38 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v38 - 4), 0xFFFFFFFF) <= 0 )
          {
            v25 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v13);
            result = (int)(uintptr_t)(v25);
          }
          v14 = (void *)(v37 - 12);
          if ( (uint32_t *)(v37 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
          {
            v24 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v14);
            result = (int)(uintptr_t)(v24);
          }
          v15 = (void *)(v36 - 12);
          if ( (uint32_t *)(v36 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v36 - 4), 0xFFFFFFFF) <= 0 )
          {
            v19 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v15);
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
// Function: gaia::Gaia_Osiris::ParticipateEvent  (binary VA: 0x14666f0)
// Original: gaia::Gaia_Osiris::ParticipateEvent
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::ParticipateEvent(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  int OsirisStatus;
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
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "event_id", (int)(uintptr_t)(&v20));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v22), 4);
    v2 = (void *)(v22 - 12);
    if ( (uint32_t *)(v22 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "participant_id", (int)(uintptr_t)(&v20) + 1);
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
        gaia::GaiaRequest::SetOperationCode(a2, 4049);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v32, a2);
        started = (char *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v32);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v32);
        return (int)(uintptr_t)(started);
      }
      else
      {
        OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
        if ( OsirisStatus != 0 )
        {
          v17 = (char *)OsirisStatus;
          gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
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
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "social", (int)(uintptr_t)(&v21) + 3);
          AccessToken = gaia::Gaia_Osiris::GetAccessToken((gaia::Gaia::Self *)(self), a2, &v29, (int)(uintptr_t)(&v24));
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
            AccessToken = gaia::Osiris::ParticipateEvent(
                            *(gaia::BaseServiceManager::Self **)(Instance + 24),
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
// Function: gaia::Gaia_Osiris::DeleteEvent  (binary VA: 0x1466bc0)
// Original: gaia::Gaia_Osiris::DeleteEvent
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::DeleteEvent(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  int OsirisStatus;
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
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "event_id", (int)(uintptr_t)(&v16));
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
        gaia::GaiaRequest::SetOperationCode(a2, 4030);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v24, a2);
        started = (char *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v24);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v24);
        return (int)(uintptr_t)(started);
      }
      else
      {
        OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
        if ( OsirisStatus != 0 )
        {
          v14 = (char *)OsirisStatus;
          gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
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
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "social", (int)(uintptr_t)(&v17) + 2);
          AccessToken = gaia::Gaia_Osiris::GetAccessToken((gaia::Gaia::Self *)(self), a2, &v22, (int)(uintptr_t)(&v19));
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
            AccessToken = gaia::Osiris::DeleteEvent(
                            *(gaia::BaseServiceManager::Self **)(Instance + 24),
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
// Function: gaia::Gaia_Osiris::UpdateEvent  (binary VA: 0x1466f50)
// Original: gaia::Gaia_Osiris::UpdateEvent
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::UpdateEvent(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  void *v6;
  void *v7;
  void *v8;
  void *v9;
  int OsirisStatus;
  Json::Value::Self *v11;
  bool isNull;
  Json::Value::Self *v13;
  bool v14;
  void *v15;
  void *v16;
  char *v17;
  char *v18;
  uint32_t *v19;
  uint32_t *v20;
  void *v21;
  void *v22;
  void *v23;
  void *v24;
  void *v25;
  void *v26;
  int Instance;
  int v29;
  typedef Json::Value::Self *_g4_t_v30;
  typedef bool _g4_t_v31;
  typedef bool _g4_t_v32;
  typedef char *_g4_t_v33;
  typedef void *_g4_t_v34;
  typedef void *_g4_t_v35;
  typedef void *_g4_t_v36;
  typedef void *_g4_t_started;
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
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef uint32_t *_g4_t_v56;
  typedef uint32_t *_g4_t_v57;
  typedef char *_g4_t_v58;
  typedef int _g4_t_v59;
  typedef uint8_t _g4_t_v60[4];
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef uint8_t _g4_t_v63[4];
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef void *_g4_t_v66;
  typedef char *_g4_t_v67;
  typedef int _g4_t_v68;
  typedef uint8_t _g4_t_v69[16];
  typedef uint8_t _g4_t_v70[16];
  typedef uint8_t _g4_t_v71[16];
  typedef uint8_t _g4_t_v72[16];
  typedef uint8_t _g4_t_v73[16];
  typedef uint8_t _g4_t_v74[16];
  typedef uint8_t _g4_t_v75[16];
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef void *_g4_t_v78;
  typedef int *_g4_t_v79;
  typedef int *_g4_t_v80;
  typedef int _g4_t_v81;
  typedef uint8_t _g4_t_v82[96];
  enum : size_t {
    _g4_s0 = 560u,
    _g4_s1 = (0u + sizeof(_g4_t_v30)) > _g4_s0 ? (0u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (76u + sizeof(_g4_t_v31)) > _g4_s1 ? (76u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (76u + sizeof(_g4_t_v32)) > _g4_s2 ? (76u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (80u + sizeof(_g4_t_v33)) > _g4_s3 ? (80u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (84u + sizeof(_g4_t_v34)) > _g4_s4 ? (84u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (84u + sizeof(_g4_t_v35)) > _g4_s5 ? (84u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (84u + sizeof(_g4_t_v36)) > _g4_s6 ? (84u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (84u + sizeof(_g4_t_started)) > _g4_s7 ? (84u + sizeof(_g4_t_started)) : _g4_s7,
    _g4_s9 = (119u + sizeof(_g4_t_v38)) > _g4_s8 ? (119u + sizeof(_g4_t_v38)) : _g4_s8,
    _g4_s10 = (120u + sizeof(_g4_t_v39)) > _g4_s9 ? (120u + sizeof(_g4_t_v39)) : _g4_s9,
    _g4_s11 = (124u + sizeof(_g4_t_v40)) > _g4_s10 ? (124u + sizeof(_g4_t_v40)) : _g4_s10,
    _g4_s12 = (128u + sizeof(_g4_t_v41)) > _g4_s11 ? (128u + sizeof(_g4_t_v41)) : _g4_s11,
    _g4_s13 = (152u + sizeof(_g4_t_v42)) > _g4_s12 ? (152u + sizeof(_g4_t_v42)) : _g4_s12,
    _g4_s14 = (156u + sizeof(_g4_t_v43)) > _g4_s13 ? (156u + sizeof(_g4_t_v43)) : _g4_s13,
    _g4_s15 = (160u + sizeof(_g4_t_v44)) > _g4_s14 ? (160u + sizeof(_g4_t_v44)) : _g4_s14,
    _g4_s16 = (164u + sizeof(_g4_t_v45)) > _g4_s15 ? (164u + sizeof(_g4_t_v45)) : _g4_s15,
    _g4_s17 = (168u + sizeof(_g4_t_v46)) > _g4_s16 ? (168u + sizeof(_g4_t_v46)) : _g4_s16,
    _g4_s18 = (172u + sizeof(_g4_t_v47)) > _g4_s17 ? (172u + sizeof(_g4_t_v47)) : _g4_s17,
    _g4_s19 = (176u + sizeof(_g4_t_v48)) > _g4_s18 ? (176u + sizeof(_g4_t_v48)) : _g4_s18,
    _g4_s20 = (180u + sizeof(_g4_t_v49)) > _g4_s19 ? (180u + sizeof(_g4_t_v49)) : _g4_s19,
    _g4_s21 = (184u + sizeof(_g4_t_v50)) > _g4_s20 ? (184u + sizeof(_g4_t_v50)) : _g4_s20,
    _g4_s22 = (188u + sizeof(_g4_t_v51)) > _g4_s21 ? (188u + sizeof(_g4_t_v51)) : _g4_s21,
    _g4_s23 = (192u + sizeof(_g4_t_v52)) > _g4_s22 ? (192u + sizeof(_g4_t_v52)) : _g4_s22,
    _g4_s24 = (196u + sizeof(_g4_t_v53)) > _g4_s23 ? (196u + sizeof(_g4_t_v53)) : _g4_s23,
    _g4_s25 = (200u + sizeof(_g4_t_v54)) > _g4_s24 ? (200u + sizeof(_g4_t_v54)) : _g4_s24,
    _g4_s26 = (204u + sizeof(_g4_t_v55)) > _g4_s25 ? (204u + sizeof(_g4_t_v55)) : _g4_s25,
    _g4_s27 = (208u + sizeof(_g4_t_v56)) > _g4_s26 ? (208u + sizeof(_g4_t_v56)) : _g4_s26,
    _g4_s28 = (212u + sizeof(_g4_t_v57)) > _g4_s27 ? (212u + sizeof(_g4_t_v57)) : _g4_s27,
    _g4_s29 = (216u + sizeof(_g4_t_v58)) > _g4_s28 ? (216u + sizeof(_g4_t_v58)) : _g4_s28,
    _g4_s30 = (220u + sizeof(_g4_t_v59)) > _g4_s29 ? (220u + sizeof(_g4_t_v59)) : _g4_s29,
    _g4_s31 = (224u + sizeof(_g4_t_v60)) > _g4_s30 ? (224u + sizeof(_g4_t_v60)) : _g4_s30,
    _g4_s32 = (228u + sizeof(_g4_t_v61)) > _g4_s31 ? (228u + sizeof(_g4_t_v61)) : _g4_s31,
    _g4_s33 = (232u + sizeof(_g4_t_v62)) > _g4_s32 ? (232u + sizeof(_g4_t_v62)) : _g4_s32,
    _g4_s34 = (236u + sizeof(_g4_t_v63)) > _g4_s33 ? (236u + sizeof(_g4_t_v63)) : _g4_s33,
    _g4_s35 = (240u + sizeof(_g4_t_v64)) > _g4_s34 ? (240u + sizeof(_g4_t_v64)) : _g4_s34,
    _g4_s36 = (244u + sizeof(_g4_t_v65)) > _g4_s35 ? (244u + sizeof(_g4_t_v65)) : _g4_s35,
    _g4_s37 = (248u + sizeof(_g4_t_v66)) > _g4_s36 ? (248u + sizeof(_g4_t_v66)) : _g4_s36,
    _g4_s38 = (252u + sizeof(_g4_t_v67)) > _g4_s37 ? (252u + sizeof(_g4_t_v67)) : _g4_s37,
    _g4_s39 = (256u + sizeof(_g4_t_v68)) > _g4_s38 ? (256u + sizeof(_g4_t_v68)) : _g4_s38,
    _g4_s40 = (260u + sizeof(_g4_t_v69)) > _g4_s39 ? (260u + sizeof(_g4_t_v69)) : _g4_s39,
    _g4_s41 = (276u + sizeof(_g4_t_v70)) > _g4_s40 ? (276u + sizeof(_g4_t_v70)) : _g4_s40,
    _g4_s42 = (292u + sizeof(_g4_t_v71)) > _g4_s41 ? (292u + sizeof(_g4_t_v71)) : _g4_s41,
    _g4_s43 = (308u + sizeof(_g4_t_v72)) > _g4_s42 ? (308u + sizeof(_g4_t_v72)) : _g4_s42,
    _g4_s44 = (324u + sizeof(_g4_t_v73)) > _g4_s43 ? (324u + sizeof(_g4_t_v73)) : _g4_s43,
    _g4_s45 = (340u + sizeof(_g4_t_v74)) > _g4_s44 ? (340u + sizeof(_g4_t_v74)) : _g4_s44,
    _g4_s46 = (356u + sizeof(_g4_t_v75)) > _g4_s45 ? (356u + sizeof(_g4_t_v75)) : _g4_s45,
    _g4_s47 = (372u + sizeof(_g4_t_v76)) > _g4_s46 ? (372u + sizeof(_g4_t_v76)) : _g4_s46,
    _g4_s48 = (376u + sizeof(_g4_t_v77)) > _g4_s47 ? (376u + sizeof(_g4_t_v77)) : _g4_s47,
    _g4_s49 = (380u + sizeof(_g4_t_v78)) > _g4_s48 ? (380u + sizeof(_g4_t_v78)) : _g4_s48,
    _g4_s50 = (384u + sizeof(_g4_t_v79)) > _g4_s49 ? (384u + sizeof(_g4_t_v79)) : _g4_s49,
    _g4_s51 = (388u + sizeof(_g4_t_v80)) > _g4_s50 ? (388u + sizeof(_g4_t_v80)) : _g4_s50,
    _g4_s52 = (392u + sizeof(_g4_t_v81)) > _g4_s51 ? (392u + sizeof(_g4_t_v81)) : _g4_s51,
    _g4_s53 = (396u + sizeof(_g4_t_v82)) > _g4_s52 ? (396u + sizeof(_g4_t_v82)) : _g4_s52
  };
  alignas(16) uint8_t _g4_sf[_g4_s53];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 0u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 76u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 76u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 80u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 84u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 84u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 84u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 84u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 119u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 120u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 124u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 128u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 152u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 156u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 160u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 164u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 168u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 172u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 176u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 180u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 184u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 188u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 192u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 196u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 200u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 204u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 208u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 212u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 216u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 220u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 224u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 228u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 232u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 236u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 240u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 244u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 248u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 252u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 256u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 260u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 276u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 292u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 308u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 324u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 340u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 356u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 372u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 376u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 380u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 384u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 388u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 392u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 396u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), "name", (int)(uintptr_t)(&v38));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v42), 4);
  v2 = (void *)(v42 - 12);
  if ( (uint32_t *)(v42 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v42 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), "description", (int)(uintptr_t)(&v39));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v43), 4);
  v3 = (void *)(v43 - 12);
  if ( (uint32_t *)(v43 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v43 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), "category", (int)(uintptr_t)(&v39) + 1);
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v44), 4);
  v4 = (void *)(v44 - 12);
  if ( (uint32_t *)(v44 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v44 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "start_date", (int)(uintptr_t)(&v39) + 2);
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v45), 4);
  v5 = (void *)(v45 - 12);
  if ( (uint32_t *)(v45 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), "end_date", (int)(uintptr_t)(&v39) + 3);
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v46), 4);
  v6 = (void *)(v46 - 12);
  if ( (uint32_t *)(v46 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v46 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), "event_id", (int)(uintptr_t)(&v40));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v47), 4);
  v7 = (void *)(v47 - 12);
  if ( (uint32_t *)(v47 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v47 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v48), "group_id", (int)(uintptr_t)(&v40) + 1);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v48), 4);
  v8 = (void *)(v48 - 12);
  if ( (uint32_t *)(v48 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v48 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v49), "tournament", (int)(uintptr_t)(&v40) + 2);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v49), 4);
  v9 = (void *)(v49 - 12);
  if ( (uint32_t *)(v49 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v49 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) == 0 )
    return gaia::GaiaRequest::GetResponseCode(a2);
  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
  {
    gaia::GaiaRequest::SetOperationCode(a2, 4029);
    gaia::Gaia::GetInstance();
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v82, a2);
    started = (void *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v82);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v82);
    return (int)(uintptr_t)(started);
  }
  OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
  v34 = (void *)OsirisStatus;
  if ( OsirisStatus == 0 )
  {
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v69, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v50, (int)(uintptr_t)(v69));
    Json::Value::Destroy((Json::Value::Self *)v69);
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v70, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v51, (int)(uintptr_t)(v70));
    Json::Value::Destroy((Json::Value::Self *)v70);
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v71, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v52, (int)(uintptr_t)(v71));
    Json::Value::Destroy((Json::Value::Self *)v71);
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v72, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v53, (int)(uintptr_t)(v72));
    Json::Value::Destroy((Json::Value::Self *)v72);
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v73, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v54, (int)(uintptr_t)(v73));
    Json::Value::Destroy((Json::Value::Self *)v73);
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v74, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v55, (int)(uintptr_t)(v74));
    Json::Value::Destroy((Json::Value::Self *)v74);
    v79 = &v77;
    v80 = &v77;
    v56 = &dword_213B814;
    v57 = &dword_213B814;
    v58 = (char *)&dword_213B814;
    v77 = 0;
    v78 = nullptr;
    v81 = 0;
    v66 = nullptr;
    v67 = nullptr;
    v68 = 0;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v59), "group_id", (int)(uintptr_t)(&v40) + 3);
    v11 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v59);
    isNull = Json::Value::isNull(v11);
    v35 = (void *)(v59 - 12);
    if ( (uint32_t *)(v59 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v59 - 4), 0xFFFFFFFF) <= 0 )
    {
      v31 = isNull;
      g4_std::string::Rep::M_destroy(v35);
      isNull = v31;
    }
    if ( !isNull )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v75, (const char *)a2);
      Json::Value::asString((Json::Value::Self *)v60, (int)(uintptr_t)(v75));
      g4_std::string::assign_str(&v56, v60);
      g4_std::string::Destroy(v60);
      Json::Value::Destroy((Json::Value::Self *)v75);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v61), "tournament", (int)(uintptr_t)(&v41));
    v13 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v61);
    v14 = Json::Value::isNull(v13);
    v36 = (void *)(v61 - 12);
    if ( (uint32_t *)(v61 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v61 - 4), 0xFFFFFFFF) <= 0 )
    {
      v32 = v14;
      g4_std::string::Rep::M_destroy(v36);
      v14 = v32;
    }
    if ( !v14 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v62), "tournament", (int)(uintptr_t)(&v41) + 1);
      v29 = gaia::GaiaRequest::opIndex(a2, &v62);
      Json::Value::asString((Json::Value::Self *)v63, v29);
      g4_std::string::assign_str(&v57, v63);
      g4_std::string::Destroy(v63);
      g4_std::string::Destroy(&v62);
    }
    gaia::GaiaRequest::GetInputValue(a2, (std::map<std::string,std::string> *)&v76);
    v64 = (int)(uintptr_t)(&dword_213B814);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v65), "social_event", (int)(uintptr_t)(&v41) + 2);
    started = (void *)gaia::Gaia_Osiris::GetAccessToken((gaia::Gaia::Self *)(self), a2, &v65, (int)(uintptr_t)(&v64));
    v15 = (void *)(v65 - 12);
    if ( (uint32_t *)(v65 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v65 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v15);
    }
    if ( started == nullptr )
    {
      Instance = gaia::Gaia::GetInstance();
      started = (void *)gaia::Osiris::UpdateEvent(
                          *(uint32_t *)(Instance + 24),
                          &v58,
                          &v64,
                          &v53,
                          &v50,
                          &v51,
                          &v52,
                          &v54,
                          &v55,
                          &v56,
                          &v57,
                          &v76,
                          a2);
      if ( started == nullptr )
        started = (void *)gaia::BaseServiceManager::ParseMessages(v58, *((uint32_t *)v58 - 3), (int)(uintptr_t)(&v66), 11);
      gaia::GaiaRequest::SetResponse(a2, (const std::vector<gaia::BaseJSONServiceResponse::Self> *)&v66);
    }
    gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(started));
    v16 = (void *)(v64 - 12);
    if ( (uint32_t *)(v64 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v64 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v16);
    }
    v17 = v58 - 12;
    if ( v58 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v58 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v17);
    v18 = (char *)v66;
    v33 = v67;
    if ( v67 != v66 )
    {
      do
      {
        v30 = (Json::Value::Self *)v18;
        v18 += 20;
        gaia::BaseJSONServiceResponse::Destroy(v30);
      }
      while ( v33 != v18 );
      v18 = (char *)v66;
    }
    if ( v18 != nullptr )
      opDelete(v18);
    std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
      (int)(uintptr_t)(&v76),
      v78);
    v19 = v57 - 3;
    if ( v57 - 3 != dword_213B808 && __sync_fetch_and_add(v57 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v19);
    v20 = v56 - 3;
    if ( v56 - 3 != dword_213B808 && __sync_fetch_and_add(v56 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v20);
    v21 = (void *)(v55 - 12);
    if ( (uint32_t *)(v55 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v55 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v21);
    }
    v22 = (void *)(v54 - 12);
    if ( (uint32_t *)(v54 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v54 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v22);
    }
    v23 = (void *)(v53 - 12);
    if ( (uint32_t *)(v53 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v53 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v23);
    }
    v24 = (void *)(v52 - 12);
    if ( (uint32_t *)(v52 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v52 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v24);
    }
    v25 = (void *)(v51 - 12);
    if ( (uint32_t *)(v51 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v51 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v25);
    }
    v26 = (void *)(v50 - 12);
    if ( (uint32_t *)(v50 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v50 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v26);
    }
    return (int)(uintptr_t)(started);
  }
  gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
  return (int)(uintptr_t)(v34);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::SearchEvents  (binary VA: 0x1467c90)
// Original: gaia::Gaia_Osiris::SearchEvents
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::SearchEvents(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  void *v6;
  int OsirisStatus;
  void *v8;
  Json::Value::Self *v9;
  bool isNull;
  Json::Value::Self *v11;
  bool v12;
  Json::Value::Self *v13;
  bool v14;
  void *v15;
  int Instance;
  gaia::BaseJSONServiceResponse::Self *v17;
  gaia::BaseJSONServiceResponse::Self *v18;
  void *v19;
  void *v20;
  void *v21;
  void *v22;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_ptr;
  typedef bool _g4_t_v25;
  typedef bool _g4_t_v26;
  typedef bool _g4_t_v27;
  typedef char *_g4_t_v28;
  typedef char *_g4_t_v29;
  typedef char *_g4_t_v30;
  typedef char *_g4_t_v31;
  typedef char *_g4_t_started;
  typedef char _g4_t_v33;
  typedef char _g4_t_v34;
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
  typedef char *_g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef uint8_t _g4_t_v52[4];
  typedef int _g4_t_v53;
  typedef uint8_t _g4_t_v54[4];
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v57;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v58;
  typedef int _g4_t_v59;
  typedef uint8_t _g4_t_v60[16];
  typedef uint8_t _g4_t_v61[16];
  typedef uint8_t _g4_t_v62[16];
  typedef uint8_t _g4_t_v63[16];
  typedef uint8_t _g4_t_v64[16];
  typedef uint8_t _g4_t_v65[96];
  enum : size_t {
    _g4_s0 = 448u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (56u + sizeof(_g4_t_v25)) > _g4_s1 ? (56u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (56u + sizeof(_g4_t_v26)) > _g4_s2 ? (56u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v27)) > _g4_s3 ? (56u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v28)) > _g4_s4 ? (60u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v29)) > _g4_s5 ? (60u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v30)) > _g4_s6 ? (60u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v31)) > _g4_s7 ? (60u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_started)) > _g4_s8 ? (60u + sizeof(_g4_t_started)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v33)) > _g4_s9 ? (64u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v34)) > _g4_s10 ? (68u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (93u + sizeof(_g4_t_v35)) > _g4_s11 ? (93u + sizeof(_g4_t_v35)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v36)) > _g4_s12 ? (96u + sizeof(_g4_t_v36)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v37)) > _g4_s13 ? (100u + sizeof(_g4_t_v37)) : _g4_s13,
    _g4_s15 = (104u + sizeof(_g4_t_v38)) > _g4_s14 ? (104u + sizeof(_g4_t_v38)) : _g4_s14,
    _g4_s16 = (120u + sizeof(_g4_t_v39)) > _g4_s15 ? (120u + sizeof(_g4_t_v39)) : _g4_s15,
    _g4_s17 = (124u + sizeof(_g4_t_v40)) > _g4_s16 ? (124u + sizeof(_g4_t_v40)) : _g4_s16,
    _g4_s18 = (128u + sizeof(_g4_t_v41)) > _g4_s17 ? (128u + sizeof(_g4_t_v41)) : _g4_s17,
    _g4_s19 = (132u + sizeof(_g4_t_v42)) > _g4_s18 ? (132u + sizeof(_g4_t_v42)) : _g4_s18,
    _g4_s20 = (136u + sizeof(_g4_t_v43)) > _g4_s19 ? (136u + sizeof(_g4_t_v43)) : _g4_s19,
    _g4_s21 = (140u + sizeof(_g4_t_v44)) > _g4_s20 ? (140u + sizeof(_g4_t_v44)) : _g4_s20,
    _g4_s22 = (144u + sizeof(_g4_t_v45)) > _g4_s21 ? (144u + sizeof(_g4_t_v45)) : _g4_s21,
    _g4_s23 = (148u + sizeof(_g4_t_v46)) > _g4_s22 ? (148u + sizeof(_g4_t_v46)) : _g4_s22,
    _g4_s24 = (152u + sizeof(_g4_t_v47)) > _g4_s23 ? (152u + sizeof(_g4_t_v47)) : _g4_s23,
    _g4_s25 = (156u + sizeof(_g4_t_v48)) > _g4_s24 ? (156u + sizeof(_g4_t_v48)) : _g4_s24,
    _g4_s26 = (160u + sizeof(_g4_t_v49)) > _g4_s25 ? (160u + sizeof(_g4_t_v49)) : _g4_s25,
    _g4_s27 = (164u + sizeof(_g4_t_v50)) > _g4_s26 ? (164u + sizeof(_g4_t_v50)) : _g4_s26,
    _g4_s28 = (168u + sizeof(_g4_t_v51)) > _g4_s27 ? (168u + sizeof(_g4_t_v51)) : _g4_s27,
    _g4_s29 = (172u + sizeof(_g4_t_v52)) > _g4_s28 ? (172u + sizeof(_g4_t_v52)) : _g4_s28,
    _g4_s30 = (176u + sizeof(_g4_t_v53)) > _g4_s29 ? (176u + sizeof(_g4_t_v53)) : _g4_s29,
    _g4_s31 = (180u + sizeof(_g4_t_v54)) > _g4_s30 ? (180u + sizeof(_g4_t_v54)) : _g4_s30,
    _g4_s32 = (184u + sizeof(_g4_t_v55)) > _g4_s31 ? (184u + sizeof(_g4_t_v55)) : _g4_s31,
    _g4_s33 = (188u + sizeof(_g4_t_v56)) > _g4_s32 ? (188u + sizeof(_g4_t_v56)) : _g4_s32,
    _g4_s34 = (192u + sizeof(_g4_t_v57)) > _g4_s33 ? (192u + sizeof(_g4_t_v57)) : _g4_s33,
    _g4_s35 = (196u + sizeof(_g4_t_v58)) > _g4_s34 ? (196u + sizeof(_g4_t_v58)) : _g4_s34,
    _g4_s36 = (200u + sizeof(_g4_t_v59)) > _g4_s35 ? (200u + sizeof(_g4_t_v59)) : _g4_s35,
    _g4_s37 = (204u + sizeof(_g4_t_v60)) > _g4_s36 ? (204u + sizeof(_g4_t_v60)) : _g4_s36,
    _g4_s38 = (220u + sizeof(_g4_t_v61)) > _g4_s37 ? (220u + sizeof(_g4_t_v61)) : _g4_s37,
    _g4_s39 = (236u + sizeof(_g4_t_v62)) > _g4_s38 ? (236u + sizeof(_g4_t_v62)) : _g4_s38,
    _g4_s40 = (252u + sizeof(_g4_t_v63)) > _g4_s39 ? (252u + sizeof(_g4_t_v63)) : _g4_s39,
    _g4_s41 = (268u + sizeof(_g4_t_v64)) > _g4_s40 ? (268u + sizeof(_g4_t_v64)) : _g4_s40,
    _g4_s42 = (284u + sizeof(_g4_t_v65)) > _g4_s41 ? (284u + sizeof(_g4_t_v65)) : _g4_s41
  };
  alignas(16) uint8_t _g4_sf[_g4_s42];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 56u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 56u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 60u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 60u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 60u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 60u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 60u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 64u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 68u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 93u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 96u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 100u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 104u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 120u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 124u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 128u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 132u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 136u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 140u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 144u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 148u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 152u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 156u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 160u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 164u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 168u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 172u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 176u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 180u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 184u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 188u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 192u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 196u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 200u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 204u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 220u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 236u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 252u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 268u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 284u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "category", (int)(uintptr_t)(&v35));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v39), 4);
  v2 = (void *)(v39 - 12);
  if ( (uint32_t *)(v39 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "limit", (int)(uintptr_t)(&v35) + 1);
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v40), 2);
  v3 = (void *)(v40 - 12);
  if ( (uint32_t *)(v40 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v40 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "status", (int)(uintptr_t)(&v35) + 2);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v41), 4);
  v4 = (void *)(v41 - 12);
  if ( (uint32_t *)(v41 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), "keywords", (int)(uintptr_t)(&v36));
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v42), 4);
  v5 = (void *)(v42 - 12);
  if ( (uint32_t *)(v42 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v42 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), "offset", (int)(uintptr_t)(&v36) + 1);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v43), 2);
  v6 = (void *)(v43 - 12);
  if ( (uint32_t *)(v43 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v43 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) == 0 )
    return gaia::GaiaRequest::GetResponseCode(a2);
  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
  {
    gaia::GaiaRequest::SetOperationCode(a2, 4033);
    gaia::Gaia::GetInstance();
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v65, a2);
    started = (char *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v65);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v65);
    return (int)(uintptr_t)(started);
  }
  OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
  v28 = (char *)OsirisStatus;
  if ( OsirisStatus == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), (char *)&unk_1B15112, (int)(uintptr_t)(&v36) + 2);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), (char *)&unk_1B15112, (int)(uintptr_t)(&v36) + 3);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), (char *)&unk_1B15112, (int)(uintptr_t)(&v37));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), (char *)&unk_1B15112, (int)(uintptr_t)(&v37) + 1);
    v57 = nullptr;
    v58 = nullptr;
    v59 = 0;
    v48 = nullptr;
    v49 = 0;
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v60, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v50, (int)(uintptr_t)(v60));
    g4_std::string::assign_str(&v45, &v50);
    v8 = (void *)(v50 - 12);
    if ( (uint32_t *)(v50 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v50 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v8);
    }
    Json::Value::Destroy((Json::Value::Self *)v60);
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v61, (const char *)a2);
    v34 = Json::Value::asUInt((Json::Value::Self *)v61);
    Json::Value::Destroy((Json::Value::Self *)v61);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v51), "status", (int)(uintptr_t)(&v37) + 2);
    v9 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v51);
    isNull = Json::Value::isNull(v9);
    v29 = (char *)(v51 - 12);
    if ( (uint32_t *)(v51 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v51 - 4), 0xFFFFFFFF) <= 0 )
    {
      v26 = isNull;
      g4_std::string::Rep::M_destroy(v29);
      isNull = v26;
    }
    if ( !isNull )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v62, (const char *)a2);
      Json::Value::asString((Json::Value::Self *)v52, (int)(uintptr_t)(v62));
      g4_std::string::assign_str(&v46, v52);
      g4_std::string::Destroy(v52);
      Json::Value::Destroy((Json::Value::Self *)v62);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v53), "keywords", (int)(uintptr_t)(&v37) + 3);
    v11 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v53);
    v12 = Json::Value::isNull(v11);
    v30 = (char *)(v53 - 12);
    if ( (uint32_t *)(v53 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v53 - 4), 0xFFFFFFFF) <= 0 )
    {
      v27 = v12;
      g4_std::string::Rep::M_destroy(v30);
      v12 = v27;
    }
    if ( !v12 )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v63, (const char *)a2);
      Json::Value::asString((Json::Value::Self *)v54, (int)(uintptr_t)(v63));
      g4_std::string::assign_str(&v47, v54);
      g4_std::string::Destroy(v54);
      Json::Value::Destroy((Json::Value::Self *)v63);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v55), "offset", (int)(uintptr_t)(&v38));
    v13 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v55);
    v14 = Json::Value::isNull(v13);
    v31 = (char *)(v55 - 12);
    if ( (uint32_t *)(v55 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v55 - 4), 0xFFFFFFFF) <= 0 )
    {
      v25 = v14;
      g4_std::string::Rep::M_destroy(v31);
      v14 = v25;
    }
    v33 = 0;
    if ( !v14 )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v64, (const char *)a2);
      v33 = Json::Value::asUInt((Json::Value::Self *)v64);
      Json::Value::Destroy((Json::Value::Self *)v64);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v56), "social", (int)(uintptr_t)(&v38) + 1);
    started = (char *)gaia::Gaia_Osiris::GetAccessToken((gaia::Gaia::Self *)(self), a2, &v56, (int)(uintptr_t)(&v44));
    v15 = (void *)(v56 - 12);
    if ( (uint32_t *)(v56 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v56 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v15);
    }
    if ( started != nullptr )
    {
      gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(started));
    }
    else
    {
      Instance = gaia::Gaia::GetInstance();
      started = (char *)gaia::Osiris::SearchEvents(
                          *(gaia::BaseServiceManager::Self **)(Instance + 24),
                          (void **)&v48,
                          &v49,
                          (int)(uintptr_t)(&v44),
                          (int)(uintptr_t)(&v45),
                          (int)(uintptr_t)(&v46),
                          (int)(uintptr_t)(&v47),
                          v34,
                          v33,
                          (int)(uintptr_t)(a2));
      if ( started == nullptr )
        started = (char *)gaia::BaseServiceManager::ParseMessages(v48, v49, (int)(uintptr_t)(&v57), 11);
      gaia::GaiaRequest::SetResponse(a2, (const std::vector<gaia::BaseJSONServiceResponse::Self> *)&v57);
      gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(started));
      free(v48);
    }
    v17 = v58;
    v18 = v57;
    if ( v58 != v57 )
    {
      do
      {
        ptr = v18;
        v18 = (gaia::BaseJSONServiceResponse::Self *)((char *)v18 + 20);
        gaia::BaseJSONServiceResponse::Destroy(ptr);
      }
      while ( v17 != v18 );
      v18 = v57;
    }
    if ( v18 != nullptr )
      opDelete(v18);
    v19 = (void *)(v47 - 12);
    if ( (uint32_t *)(v47 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v47 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v19);
    }
    v20 = (void *)(v46 - 12);
    if ( (uint32_t *)(v46 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v46 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v20);
    }
    v21 = (void *)(v45 - 12);
    if ( (uint32_t *)(v45 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v21);
    }
    v22 = (void *)(v44 - 12);
    if ( (uint32_t *)(v44 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v44 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v22);
    }
    return (int)(uintptr_t)(started);
  }
  gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
  return (int)(uintptr_t)(v28);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::GetEvents  (binary VA: 0x14686d0)
// Original: gaia::Gaia_Osiris::GetEvents
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::GetEvents(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  int OsirisStatus;
  void *v4;
  void *v5;
  char *v6;
  gaia::BaseJSONServiceResponse::Self *v7;
  gaia::BaseJSONServiceResponse::Self *v8;
  void *v9;
  void *v10;
  int Instance;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_started;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef char *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef void *_g4_t_v24;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint8_t _g4_t_v27[16];
  typedef uint8_t _g4_t_v28[96];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v14)) > _g4_s1 ? (44u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_started)) > _g4_s2 ? (44u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (61u + sizeof(_g4_t_v16)) > _g4_s3 ? (61u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v17)) > _g4_s4 ? (64u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v18)) > _g4_s5 ? (72u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v19)) > _g4_s6 ? (76u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v20)) > _g4_s7 ? (80u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (84u + sizeof(_g4_t_v21)) > _g4_s8 ? (84u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (88u + sizeof(_g4_t_v22)) > _g4_s9 ? (88u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_v23)) > _g4_s10 ? (92u + sizeof(_g4_t_v23)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v24)) > _g4_s11 ? (96u + sizeof(_g4_t_v24)) : _g4_s11,
    _g4_s13 = (100u + sizeof(_g4_t_v25)) > _g4_s12 ? (100u + sizeof(_g4_t_v25)) : _g4_s12,
    _g4_s14 = (104u + sizeof(_g4_t_v26)) > _g4_s13 ? (104u + sizeof(_g4_t_v26)) : _g4_s13,
    _g4_s15 = (108u + sizeof(_g4_t_v27)) > _g4_s14 ? (108u + sizeof(_g4_t_v27)) : _g4_s14,
    _g4_s16 = (124u + sizeof(_g4_t_v28)) > _g4_s15 ? (124u + sizeof(_g4_t_v28)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 44u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 61u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 64u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 72u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 76u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 80u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 84u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 88u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 92u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 96u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 100u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 104u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 108u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 124u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "event_ids", (int)(uintptr_t)(&v16));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v18), 4);
  v2 = (void *)(v18 - 12);
  if ( (uint32_t *)(v18 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) == 0 )
    return gaia::GaiaRequest::GetResponseCode(a2);
  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
  {
    gaia::GaiaRequest::SetOperationCode(a2, 4032);
    gaia::Gaia::GetInstance();
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v28, a2);
    started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v28);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v28);
    return started;
  }
  OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
  v14 = OsirisStatus;
  if ( OsirisStatus == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), (char *)&unk_1B15112, (int)(uintptr_t)(&v16) + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), (char *)&unk_1B15112, (int)(uintptr_t)(&v16) + 2);
    v24 = nullptr;
    v25 = nullptr;
    v26 = 0;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), (char *)&unk_1B15112, (int)(uintptr_t)(&v17));
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v27, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v22, (int)(uintptr_t)(v27));
    g4_std::string::assign_str(&v20, &v22);
    v4 = (void *)(v22 - 12);
    if ( (uint32_t *)(v22 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    Json::Value::Destroy((Json::Value::Self *)v27);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "social", (int)(uintptr_t)(&v17) + 1);
    started = gaia::Gaia_Osiris::GetAccessToken(self, a2, &v23, (int)(uintptr_t)(&v19));
    v5 = (void *)(v23 - 12);
    if ( (uint32_t *)(v23 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    if ( started == 0 )
    {
      Instance = gaia::Gaia::GetInstance();
      started = gaia::Osiris::GetEvents(*(uint32_t *)(Instance + 24), &v21, &v19, &v20, a2);
      if ( started == 0 )
        started = gaia::BaseServiceManager::ParseMessages(v21, *((uint32_t *)v21 - 3), (int)(uintptr_t)(&v24), 11);
      gaia::GaiaRequest::SetResponse(a2, (const std::vector<gaia::BaseJSONServiceResponse::Self> *)&v24);
    }
    gaia::GaiaRequest::SetResponseCode(a2, started);
    v6 = v21 - 12;
    if ( v21 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v21 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v6);
    v7 = v25;
    v8 = (gaia::BaseJSONServiceResponse::Self *)v24;
    if ( v25 != v24 )
    {
      do
      {
        v13 = v8;
        v8 = (gaia::BaseJSONServiceResponse::Self *)((char *)v8 + 20);
        gaia::BaseJSONServiceResponse::Destroy(v13);
      }
      while ( v7 != v8 );
      v8 = (gaia::BaseJSONServiceResponse::Self *)v24;
    }
    if ( v8 != nullptr )
      opDelete(v8);
    v9 = (void *)(v20 - 12);
    if ( (uint32_t *)(v20 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v9);
    }
    v10 = (void *)(v19 - 12);
    if ( (uint32_t *)(v19 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v10);
    }
    return started;
  }
  gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
  return v14;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::ShowEvent  (binary VA: 0x1468b20)
// Original: gaia::Gaia_Osiris::ShowEvent
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::ShowEvent(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  int OsirisStatus;
  void *v4;
  void *v5;
  int Instance;
  gaia::BaseJSONServiceResponse::Self *v7;
  gaia::BaseJSONServiceResponse::Self *v8;
  void *v9;
  void *v10;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_ptr;
  typedef int _g4_t_v13;
  typedef int _g4_t_started;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef char *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v24;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint8_t _g4_t_v27[16];
  typedef uint8_t _g4_t_v28[96];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v13)) > _g4_s1 ? (44u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_started)) > _g4_s2 ? (44u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (59u + sizeof(_g4_t_v15)) > _g4_s3 ? (59u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v16)) > _g4_s4 ? (60u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (68u + sizeof(_g4_t_v17)) > _g4_s5 ? (68u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v18)) > _g4_s6 ? (72u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v19)) > _g4_s7 ? (76u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v20)) > _g4_s8 ? (80u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (84u + sizeof(_g4_t_v21)) > _g4_s9 ? (84u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (88u + sizeof(_g4_t_v22)) > _g4_s10 ? (88u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (92u + sizeof(_g4_t_v23)) > _g4_s11 ? (92u + sizeof(_g4_t_v23)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v24)) > _g4_s12 ? (96u + sizeof(_g4_t_v24)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v25)) > _g4_s13 ? (100u + sizeof(_g4_t_v25)) : _g4_s13,
    _g4_s15 = (104u + sizeof(_g4_t_v26)) > _g4_s14 ? (104u + sizeof(_g4_t_v26)) : _g4_s14,
    _g4_s16 = (108u + sizeof(_g4_t_v27)) > _g4_s15 ? (108u + sizeof(_g4_t_v27)) : _g4_s15,
    _g4_s17 = (124u + sizeof(_g4_t_v28)) > _g4_s16 ? (124u + sizeof(_g4_t_v28)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 44u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 59u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 60u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 68u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 72u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 76u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 80u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 84u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 88u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 92u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 96u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 100u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 104u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 108u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 124u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "eventId", (int)(uintptr_t)(&v15));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v17), 4);
  v2 = (void *)(v17 - 12);
  if ( (uint32_t *)(v17 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) == 0 )
    return gaia::GaiaRequest::GetResponseCode(a2);
  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
  {
    gaia::GaiaRequest::SetOperationCode(a2, 4031);
    gaia::Gaia::GetInstance();
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v28, a2);
    started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v28);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v28);
    return started;
  }
  OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
  v13 = OsirisStatus;
  if ( OsirisStatus == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), (char *)&unk_1B15112, (int)(uintptr_t)(&v16));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), (char *)&unk_1B15112, (int)(uintptr_t)(&v16) + 1);
    v24 = nullptr;
    v25 = nullptr;
    v26 = 0;
    v20 = nullptr;
    v21 = 0;
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v27, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v22, (int)(uintptr_t)(v27));
    g4_std::string::assign_str(&v19, &v22);
    v4 = (void *)(v22 - 12);
    if ( (uint32_t *)(v22 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    Json::Value::Destroy((Json::Value::Self *)v27);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "social", (int)(uintptr_t)(&v16) + 2);
    started = gaia::Gaia_Osiris::GetAccessToken(self, a2, &v23, (int)(uintptr_t)(&v18));
    v5 = (void *)(v23 - 12);
    if ( (uint32_t *)(v23 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    if ( started != 0 )
    {
      gaia::GaiaRequest::SetResponseCode(a2, started);
    }
    else
    {
      Instance = gaia::Gaia::GetInstance();
      started = gaia::Osiris::ShowEvent(
                  *(gaia::BaseServiceManager::Self **)(Instance + 24),
                  (void **)&v20,
                  &v21,
                  (int)(uintptr_t)(&v18),
                  (int)(uintptr_t)(&v19),
                  (int)(uintptr_t)(a2));
      if ( started == 0 )
        started = gaia::BaseServiceManager::ParseMessages(v20, v21, (int)(uintptr_t)(&v24), 11);
      gaia::GaiaRequest::SetResponse(a2, (const std::vector<gaia::BaseJSONServiceResponse::Self> *)&v24);
      gaia::GaiaRequest::SetResponseCode(a2, started);
      free(v20);
    }
    v7 = v25;
    v8 = v24;
    if ( v25 != v24 )
    {
      do
      {
        ptr = v8;
        v8 = (gaia::BaseJSONServiceResponse::Self *)((char *)v8 + 20);
        gaia::BaseJSONServiceResponse::Destroy(ptr);
      }
      while ( v7 != v8 );
      v8 = v24;
    }
    if ( v8 != nullptr )
      opDelete(v8);
    v9 = (void *)(v19 - 12);
    if ( (uint32_t *)(v19 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v9);
    }
    v10 = (void *)(v18 - 12);
    if ( (uint32_t *)(v18 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v10);
    }
    return started;
  }
  gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
  return v13;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::SetTournamentInfo  (binary VA: 0x1468f50)
// Original: gaia::Gaia_Osiris::SetTournamentInfo
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::SetTournamentInfo(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  int OsirisStatus;
  Json::Value::Self *v7;
  bool isNull;
  void *v9;
  void *v10;
  char *v11;
  Json::Value::Self *v12;
  Json::Value::Self *v13;
  void *v14;
  void *v15;
  void *v16;
  int Instance;
  Json::Value::Self *v19;
  typedef Json::Value::Self *_g4_t_v20;
  typedef bool _g4_t_v21;
  typedef void *_g4_t_v22;
  typedef void *_g4_t_v23;
  typedef void *_g4_t_started;
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
  typedef char *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef void *_g4_t_v41;
  typedef Json::Value::Self *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef uint8_t _g4_t_v44[16];
  typedef uint8_t _g4_t_v45[16];
  typedef uint8_t _g4_t_v46[16];
  typedef uint8_t _g4_t_v47[96];
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (0u + sizeof(_g4_t_v20)) > _g4_s0 ? (0u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v21)) > _g4_s1 ? (44u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v22)) > _g4_s2 ? (48u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v23)) > _g4_s3 ? (48u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_started)) > _g4_s4 ? (48u + sizeof(_g4_t_started)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v25)) > _g4_s5 ? (52u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (78u + sizeof(_g4_t_v26)) > _g4_s6 ? (78u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v27)) > _g4_s7 ? (80u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (84u + sizeof(_g4_t_v28)) > _g4_s8 ? (84u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (96u + sizeof(_g4_t_v29)) > _g4_s9 ? (96u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (100u + sizeof(_g4_t_v30)) > _g4_s10 ? (100u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (104u + sizeof(_g4_t_v31)) > _g4_s11 ? (104u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (108u + sizeof(_g4_t_v32)) > _g4_s12 ? (108u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (112u + sizeof(_g4_t_v33)) > _g4_s13 ? (112u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (116u + sizeof(_g4_t_v34)) > _g4_s14 ? (116u + sizeof(_g4_t_v34)) : _g4_s14,
    _g4_s16 = (120u + sizeof(_g4_t_v35)) > _g4_s15 ? (120u + sizeof(_g4_t_v35)) : _g4_s15,
    _g4_s17 = (124u + sizeof(_g4_t_v36)) > _g4_s16 ? (124u + sizeof(_g4_t_v36)) : _g4_s16,
    _g4_s18 = (128u + sizeof(_g4_t_v37)) > _g4_s17 ? (128u + sizeof(_g4_t_v37)) : _g4_s17,
    _g4_s19 = (132u + sizeof(_g4_t_v38)) > _g4_s18 ? (132u + sizeof(_g4_t_v38)) : _g4_s18,
    _g4_s20 = (136u + sizeof(_g4_t_v39)) > _g4_s19 ? (136u + sizeof(_g4_t_v39)) : _g4_s19,
    _g4_s21 = (140u + sizeof(_g4_t_v40)) > _g4_s20 ? (140u + sizeof(_g4_t_v40)) : _g4_s20,
    _g4_s22 = (144u + sizeof(_g4_t_v41)) > _g4_s21 ? (144u + sizeof(_g4_t_v41)) : _g4_s21,
    _g4_s23 = (148u + sizeof(_g4_t_v42)) > _g4_s22 ? (148u + sizeof(_g4_t_v42)) : _g4_s22,
    _g4_s24 = (152u + sizeof(_g4_t_v43)) > _g4_s23 ? (152u + sizeof(_g4_t_v43)) : _g4_s23,
    _g4_s25 = (156u + sizeof(_g4_t_v44)) > _g4_s24 ? (156u + sizeof(_g4_t_v44)) : _g4_s24,
    _g4_s26 = (172u + sizeof(_g4_t_v45)) > _g4_s25 ? (172u + sizeof(_g4_t_v45)) : _g4_s25,
    _g4_s27 = (188u + sizeof(_g4_t_v46)) > _g4_s26 ? (188u + sizeof(_g4_t_v46)) : _g4_s26,
    _g4_s28 = (204u + sizeof(_g4_t_v47)) > _g4_s27 ? (204u + sizeof(_g4_t_v47)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 48u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 48u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 52u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 78u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 80u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 84u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 96u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 100u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 104u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 108u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 112u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 116u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 120u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 124u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 128u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 132u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 136u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 140u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 144u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 148u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 152u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 156u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 172u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 188u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 204u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "eventId", (int)(uintptr_t)(&v26));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v29), 4);
  v2 = (void *)(v29 - 12);
  if ( (uint32_t *)(v29 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "event_type", (int)(uintptr_t)(&v26) + 1);
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v30), 4);
  v3 = (void *)(v30 - 12);
  if ( (uint32_t *)(v30 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "leaderboard", (int)(uintptr_t)(&v27));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v31), 4);
  v4 = (void *)(v31 - 12);
  if ( (uint32_t *)(v31 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "delivery", (int)(uintptr_t)(&v27) + 1);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v32), 1);
  v5 = (void *)(v32 - 12);
  if ( (uint32_t *)(v32 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v32 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) == 0 )
    return gaia::GaiaRequest::GetResponseCode(a2);
  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
  {
    gaia::GaiaRequest::SetOperationCode(a2, 4034);
    gaia::Gaia::GetInstance();
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v47, a2);
    started = (void *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v47);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v47);
    return (int)(uintptr_t)(started);
  }
  OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
  v22 = (void *)OsirisStatus;
  if ( OsirisStatus == 0 )
  {
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v44, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v33, (int)(uintptr_t)(v44));
    Json::Value::Destroy((Json::Value::Self *)v44);
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v45, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v34, (int)(uintptr_t)(v45));
    Json::Value::Destroy((Json::Value::Self *)v45);
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v46, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v35, (int)(uintptr_t)(v46));
    Json::Value::Destroy((Json::Value::Self *)v46);
    v41 = nullptr;
    v36 = (char *)&dword_213B814;
    v42 = nullptr;
    v43 = 0;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "delivery", (int)(uintptr_t)(&v27) + 2);
    v7 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v37);
    isNull = Json::Value::isNull(v7);
    v23 = (void *)(v37 - 12);
    if ( (uint32_t *)(v37 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
    {
      v21 = isNull;
      g4_std::string::Rep::M_destroy(v23);
      isNull = v21;
    }
    v25 = 0;
    if ( !isNull )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "delivery", (int)(uintptr_t)(&v27) + 3);
      v19 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v38);
      v25 = Json::Value::asInt(v19);
      g4_std::string::Destroy(&v38);
    }
    v39 = (int)(uintptr_t)(&dword_213B814);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "social", (int)(uintptr_t)(&v28));
    started = (void *)gaia::Gaia_Osiris::GetAccessToken(self, a2, &v40, (int)(uintptr_t)(&v39));
    v9 = (void *)(v40 - 12);
    if ( (uint32_t *)(v40 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v40 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v9);
    }
    if ( started == nullptr )
    {
      Instance = gaia::Gaia::GetInstance();
      started = (void *)gaia::Osiris::SetTournamentInfo(
                          *(uint32_t *)(Instance + 24),
                          &v36,
                          &v39,
                          &v33,
                          &v34,
                          &v35,
                          v25,
                          a2);
      if ( started == nullptr )
        started = (void *)gaia::BaseServiceManager::ParseMessages(v36, *((uint32_t *)v36 - 3), (int)(uintptr_t)(&v41), 11);
      gaia::GaiaRequest::SetResponse(a2, (const std::vector<gaia::BaseJSONServiceResponse::Self> *)&v41);
    }
    gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(started));
    v10 = (void *)(v39 - 12);
    if ( (uint32_t *)(v39 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v10);
    }
    v11 = v36 - 12;
    if ( v36 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v36 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v11);
    v12 = v42;
    v13 = (Json::Value::Self *)v41;
    if ( v42 != v41 )
    {
      do
      {
        v20 = v13;
        v13 = (Json::Value::Self *)((char *)v13 + 20);
        gaia::BaseJSONServiceResponse::Destroy(v20);
      }
      while ( v12 != v13 );
      v13 = (Json::Value::Self *)v41;
    }
    if ( v13 != nullptr )
      opDelete(v13);
    v14 = (void *)(v35 - 12);
    if ( (uint32_t *)(v35 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v35 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v14);
    }
    v15 = (void *)(v34 - 12);
    if ( (uint32_t *)(v34 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v15);
    }
    v16 = (void *)(v33 - 12);
    if ( (uint32_t *)(v33 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v16);
    }
    return (int)(uintptr_t)(started);
  }
  gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
  return (int)(uintptr_t)(v22);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::CreateEvent  (binary VA: 0x1469670)
// Original: gaia::Gaia_Osiris::CreateEvent
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::CreateEvent(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  void *v6;
  void *v7;
  void *v8;
  int OsirisStatus;
  Json::Value::Self *v10;
  bool isNull;
  Json::Value::Self *v12;
  bool v13;
  void *v14;
  int Instance;
  void *v16;
  gaia::BaseJSONServiceResponse::Self *v17;
  uint32_t *v18;
  uint32_t *v19;
  void *v20;
  void *v21;
  void *v22;
  void *v23;
  void *v24;
  int v26;
  typedef Json::Value::Self *_g4_t_v27;
  typedef bool _g4_t_v28;
  typedef bool _g4_t_v29;
  typedef char *_g4_t_v30;
  typedef void *_g4_t_v31;
  typedef void *_g4_t_v32;
  typedef void *_g4_t_v33;
  typedef void *_g4_t_started;
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
  typedef int _g4_t_v50;
  typedef uint32_t *_g4_t_v51;
  typedef uint32_t *_g4_t_v52;
  typedef int _g4_t_v53;
  typedef uint8_t _g4_t_v54[4];
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef uint8_t _g4_t_v57[4];
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef char *_g4_t_v60;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v61;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v62;
  typedef int _g4_t_v63;
  typedef uint8_t _g4_t_v64[16];
  typedef uint8_t _g4_t_v65[16];
  typedef uint8_t _g4_t_v66[16];
  typedef uint8_t _g4_t_v67[16];
  typedef uint8_t _g4_t_v68[16];
  typedef uint8_t _g4_t_v69[16];
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef void *_g4_t_v72;
  typedef int *_g4_t_v73;
  typedef int *_g4_t_v74;
  typedef int _g4_t_v75;
  typedef uint8_t _g4_t_v76[96];
  enum : size_t {
    _g4_s0 = 512u,
    _g4_s1 = (0u + sizeof(_g4_t_v27)) > _g4_s0 ? (0u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (64u + sizeof(_g4_t_v28)) > _g4_s1 ? (64u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_v29)) > _g4_s2 ? (64u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (68u + sizeof(_g4_t_v30)) > _g4_s3 ? (68u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (72u + sizeof(_g4_t_v31)) > _g4_s4 ? (72u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v32)) > _g4_s5 ? (72u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v33)) > _g4_s6 ? (72u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_started)) > _g4_s7 ? (72u + sizeof(_g4_t_started)) : _g4_s7,
    _g4_s9 = (99u + sizeof(_g4_t_v35)) > _g4_s8 ? (99u + sizeof(_g4_t_v35)) : _g4_s8,
    _g4_s10 = (100u + sizeof(_g4_t_v36)) > _g4_s9 ? (100u + sizeof(_g4_t_v36)) : _g4_s9,
    _g4_s11 = (104u + sizeof(_g4_t_v37)) > _g4_s10 ? (104u + sizeof(_g4_t_v37)) : _g4_s10,
    _g4_s12 = (108u + sizeof(_g4_t_v38)) > _g4_s11 ? (108u + sizeof(_g4_t_v38)) : _g4_s11,
    _g4_s13 = (128u + sizeof(_g4_t_v39)) > _g4_s12 ? (128u + sizeof(_g4_t_v39)) : _g4_s12,
    _g4_s14 = (132u + sizeof(_g4_t_v40)) > _g4_s13 ? (132u + sizeof(_g4_t_v40)) : _g4_s13,
    _g4_s15 = (136u + sizeof(_g4_t_v41)) > _g4_s14 ? (136u + sizeof(_g4_t_v41)) : _g4_s14,
    _g4_s16 = (140u + sizeof(_g4_t_v42)) > _g4_s15 ? (140u + sizeof(_g4_t_v42)) : _g4_s15,
    _g4_s17 = (144u + sizeof(_g4_t_v43)) > _g4_s16 ? (144u + sizeof(_g4_t_v43)) : _g4_s16,
    _g4_s18 = (148u + sizeof(_g4_t_v44)) > _g4_s17 ? (148u + sizeof(_g4_t_v44)) : _g4_s17,
    _g4_s19 = (152u + sizeof(_g4_t_v45)) > _g4_s18 ? (152u + sizeof(_g4_t_v45)) : _g4_s18,
    _g4_s20 = (156u + sizeof(_g4_t_v46)) > _g4_s19 ? (156u + sizeof(_g4_t_v46)) : _g4_s19,
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
    _g4_s32 = (204u + sizeof(_g4_t_v58)) > _g4_s31 ? (204u + sizeof(_g4_t_v58)) : _g4_s31,
    _g4_s33 = (208u + sizeof(_g4_t_v59)) > _g4_s32 ? (208u + sizeof(_g4_t_v59)) : _g4_s32,
    _g4_s34 = (212u + sizeof(_g4_t_v60)) > _g4_s33 ? (212u + sizeof(_g4_t_v60)) : _g4_s33,
    _g4_s35 = (216u + sizeof(_g4_t_v61)) > _g4_s34 ? (216u + sizeof(_g4_t_v61)) : _g4_s34,
    _g4_s36 = (220u + sizeof(_g4_t_v62)) > _g4_s35 ? (220u + sizeof(_g4_t_v62)) : _g4_s35,
    _g4_s37 = (224u + sizeof(_g4_t_v63)) > _g4_s36 ? (224u + sizeof(_g4_t_v63)) : _g4_s36,
    _g4_s38 = (228u + sizeof(_g4_t_v64)) > _g4_s37 ? (228u + sizeof(_g4_t_v64)) : _g4_s37,
    _g4_s39 = (244u + sizeof(_g4_t_v65)) > _g4_s38 ? (244u + sizeof(_g4_t_v65)) : _g4_s38,
    _g4_s40 = (260u + sizeof(_g4_t_v66)) > _g4_s39 ? (260u + sizeof(_g4_t_v66)) : _g4_s39,
    _g4_s41 = (276u + sizeof(_g4_t_v67)) > _g4_s40 ? (276u + sizeof(_g4_t_v67)) : _g4_s40,
    _g4_s42 = (292u + sizeof(_g4_t_v68)) > _g4_s41 ? (292u + sizeof(_g4_t_v68)) : _g4_s41,
    _g4_s43 = (308u + sizeof(_g4_t_v69)) > _g4_s42 ? (308u + sizeof(_g4_t_v69)) : _g4_s42,
    _g4_s44 = (324u + sizeof(_g4_t_v70)) > _g4_s43 ? (324u + sizeof(_g4_t_v70)) : _g4_s43,
    _g4_s45 = (328u + sizeof(_g4_t_v71)) > _g4_s44 ? (328u + sizeof(_g4_t_v71)) : _g4_s44,
    _g4_s46 = (332u + sizeof(_g4_t_v72)) > _g4_s45 ? (332u + sizeof(_g4_t_v72)) : _g4_s45,
    _g4_s47 = (336u + sizeof(_g4_t_v73)) > _g4_s46 ? (336u + sizeof(_g4_t_v73)) : _g4_s46,
    _g4_s48 = (340u + sizeof(_g4_t_v74)) > _g4_s47 ? (340u + sizeof(_g4_t_v74)) : _g4_s47,
    _g4_s49 = (344u + sizeof(_g4_t_v75)) > _g4_s48 ? (344u + sizeof(_g4_t_v75)) : _g4_s48,
    _g4_s50 = (348u + sizeof(_g4_t_v76)) > _g4_s49 ? (348u + sizeof(_g4_t_v76)) : _g4_s49
  };
  alignas(16) uint8_t _g4_sf[_g4_s50];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 0u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 64u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 64u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 68u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 72u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 72u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 72u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 72u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 99u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 100u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 104u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 108u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 128u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 132u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 136u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 140u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 144u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 148u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 152u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 156u);
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
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 208u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 212u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 216u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 220u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 224u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 228u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 244u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 260u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 276u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 292u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 308u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 324u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 328u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 332u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 336u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 340u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 344u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 348u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "name", (int)(uintptr_t)(&v35));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v39), 4);
  v2 = (void *)(v39 - 12);
  if ( (uint32_t *)(v39 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "description", (int)(uintptr_t)(&v36));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v40), 4);
  v3 = (void *)(v40 - 12);
  if ( (uint32_t *)(v40 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v40 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "category", (int)(uintptr_t)(&v36) + 1);
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v41), 4);
  v4 = (void *)(v41 - 12);
  if ( (uint32_t *)(v41 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), "start_date", (int)(uintptr_t)(&v36) + 2);
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v42), 4);
  v5 = (void *)(v42 - 12);
  if ( (uint32_t *)(v42 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v42 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), "end_date", (int)(uintptr_t)(&v36) + 3);
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v43), 4);
  v6 = (void *)(v43 - 12);
  if ( (uint32_t *)(v43 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v43 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), "group_id", (int)(uintptr_t)(&v37));
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v44), 4);
  v7 = (void *)(v44 - 12);
  if ( (uint32_t *)(v44 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v44 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "tournament", (int)(uintptr_t)(&v37) + 1);
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v45), 4);
  v8 = (void *)(v45 - 12);
  if ( (uint32_t *)(v45 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) == 0 )
    return gaia::GaiaRequest::GetResponseCode(a2);
  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
  {
    gaia::GaiaRequest::SetOperationCode(a2, 4028);
    gaia::Gaia::GetInstance();
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v76, a2);
    started = (void *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v76);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v76);
    return (int)(uintptr_t)(started);
  }
  OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
  v31 = (void *)OsirisStatus;
  if ( OsirisStatus == 0 )
  {
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v64, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v46, (int)(uintptr_t)(v64));
    Json::Value::Destroy((Json::Value::Self *)v64);
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v65, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v47, (int)(uintptr_t)(v65));
    Json::Value::Destroy((Json::Value::Self *)v65);
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v66, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v48, (int)(uintptr_t)(v66));
    Json::Value::Destroy((Json::Value::Self *)v66);
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v67, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v49, (int)(uintptr_t)(v67));
    Json::Value::Destroy((Json::Value::Self *)v67);
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v68, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v50, (int)(uintptr_t)(v68));
    Json::Value::Destroy((Json::Value::Self *)v68);
    v51 = &dword_213B814;
    v52 = &dword_213B814;
    v71 = 0;
    v72 = nullptr;
    v73 = &v71;
    v74 = &v71;
    v75 = 0;
    v61 = nullptr;
    v62 = nullptr;
    v63 = 0;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v53), "group_id", (int)(uintptr_t)(&v37) + 2);
    v10 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v53);
    isNull = Json::Value::isNull(v10);
    v32 = (void *)(v53 - 12);
    if ( (uint32_t *)(v53 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v53 - 4), 0xFFFFFFFF) <= 0 )
    {
      v29 = isNull;
      g4_std::string::Rep::M_destroy(v32);
      isNull = v29;
    }
    if ( !isNull )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v69, (const char *)a2);
      Json::Value::asString((Json::Value::Self *)v54, (int)(uintptr_t)(v69));
      g4_std::string::assign_str(&v51, v54);
      g4_std::string::Destroy(v54);
      Json::Value::Destroy((Json::Value::Self *)v69);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v55), "tournament", (int)(uintptr_t)(&v37) + 3);
    v12 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v55);
    v13 = Json::Value::isNull(v12);
    v33 = (void *)(v55 - 12);
    if ( (uint32_t *)(v55 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v55 - 4), 0xFFFFFFFF) <= 0 )
    {
      v28 = v13;
      g4_std::string::Rep::M_destroy(v33);
      v13 = v28;
    }
    if ( !v13 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v56), "tournament", (int)(uintptr_t)(&v38));
      v26 = gaia::GaiaRequest::opIndex(a2, &v56);
      Json::Value::asString((Json::Value::Self *)v57, v26);
      g4_std::string::assign_str(&v52, v57);
      g4_std::string::Destroy(v57);
      g4_std::string::Destroy(&v56);
    }
    gaia::GaiaRequest::GetInputValue(a2, (std::map<std::string,std::string> *)&v70);
    v58 = (int)(uintptr_t)(&dword_213B814);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v59), "social_event", (int)(uintptr_t)(&v38) + 1);
    started = (void *)gaia::Gaia_Osiris::GetAccessToken(self, a2, &v59, (int)(uintptr_t)(&v58));
    v14 = (void *)(v59 - 12);
    if ( (uint32_t *)(v59 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v59 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v14);
    }
    if ( started != nullptr )
    {
      gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(started));
    }
    else
    {
      v60 = (char *)&dword_213B814;
      Instance = gaia::Gaia::GetInstance();
      started = (void *)gaia::Osiris::CreateEvent(
                          *(uint32_t *)(Instance + 24),
                          &v60,
                          &v58,
                          &v50,
                          &v46,
                          &v47,
                          &v48,
                          &v49,
                          &v51,
                          &v52,
                          &v70,
                          a2);
      if ( started == nullptr )
        started = (void *)gaia::BaseServiceManager::ParseMessages(v60, *((uint32_t *)v60 - 3), (int)(uintptr_t)(&v61), 11);
      gaia::GaiaRequest::SetResponse(a2, (const std::vector<gaia::BaseJSONServiceResponse::Self> *)&v61);
      gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(started));
      g4_std::string::Destroy(&v60);
    }
    v16 = (void *)(v58 - 12);
    if ( (uint32_t *)(v58 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v58 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v16);
    }
    v17 = v61;
    v30 = (char *)v62;
    if ( v62 != v61 )
    {
      do
      {
        v27 = (Json::Value::Self *)(v17);
        v17 = (gaia::BaseJSONServiceResponse::Self *)((char *)v17 + 20);
        gaia::BaseJSONServiceResponse::Destroy(v27);
      }
      while ( v30 != (char *)v17 );
      v17 = v61;
    }
    if ( v17 != nullptr )
      opDelete(v17);
    std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
      (int)(uintptr_t)(&v70),
      v72);
    v18 = v52 - 3;
    if ( v52 - 3 != dword_213B808 && __sync_fetch_and_add(v52 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v18);
    v19 = v51 - 3;
    if ( v51 - 3 != dword_213B808 && __sync_fetch_and_add(v51 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v19);
    v20 = (void *)(v50 - 12);
    if ( (uint32_t *)(v50 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v50 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v20);
    }
    v21 = (void *)(v49 - 12);
    if ( (uint32_t *)(v49 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v49 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v21);
    }
    v22 = (void *)(v48 - 12);
    if ( (uint32_t *)(v48 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v48 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v22);
    }
    v23 = (void *)(v47 - 12);
    if ( (uint32_t *)(v47 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v47 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v23);
    }
    v24 = (void *)(v46 - 12);
    if ( (uint32_t *)(v46 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v46 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v24);
    }
    return (int)(uintptr_t)(started);
  }
  gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
  return (int)(uintptr_t)(v31);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::DeleteMemberFromGroup  (binary VA: 0x146a250)
// Original: gaia::Gaia_Osiris::DeleteMemberFromGroup
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::DeleteMemberFromGroup(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  int OsirisStatus;
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
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "group_id", (int)(uintptr_t)(&v20));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v22), 4);
    v2 = (void *)(v22 - 12);
    if ( (uint32_t *)(v22 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "credential", (int)(uintptr_t)(&v20) + 1);
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
        gaia::GaiaRequest::SetOperationCode(a2, 4025);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v32, a2);
        started = (char *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v32);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v32);
        return (int)(uintptr_t)(started);
      }
      else
      {
        OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
        if ( OsirisStatus != 0 )
        {
          v17 = (char *)OsirisStatus;
          gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
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
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "social", (int)(uintptr_t)(&v21) + 3);
          AccessToken = gaia::Gaia_Osiris::GetAccessToken(self, a2, &v29, (int)(uintptr_t)(&v24));
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
            AccessToken = gaia::Osiris::LeaveGroupDeleteMember(
                            *(gaia::BaseServiceManager::Self **)(Instance + 24),
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
// Function: gaia::Gaia_Osiris::LeaveGroup  (binary VA: 0x146a720)
// Original: gaia::Gaia_Osiris::LeaveGroup
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::LeaveGroup(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  int OsirisStatus;
  void *v4;
  int AccessToken;
  void *v6;
  int Instance;
  int result;
  void *v9;
  void *v10;
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
  typedef int _g4_t_v23;
  typedef uint8_t _g4_t_v24[16];
  typedef uint8_t _g4_t_v25[80];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_started)) > _g4_s2 ? (12u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v14)) > _g4_s3 ? (12u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v15)) > _g4_s4 ? (12u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (26u + sizeof(_g4_t_v16)) > _g4_s5 ? (26u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v17)) > _g4_s6 ? (28u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v18)) > _g4_s7 ? (36u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v19)) > _g4_s8 ? (40u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v20)) > _g4_s9 ? (44u + sizeof(_g4_t_v20)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v21)) > _g4_s10 ? (48u + sizeof(_g4_t_v21)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v22)) > _g4_s11 ? (52u + sizeof(_g4_t_v22)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v23)) > _g4_s12 ? (56u + sizeof(_g4_t_v23)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v24)) > _g4_s13 ? (60u + sizeof(_g4_t_v24)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v25)) > _g4_s14 ? (76u + sizeof(_g4_t_v25)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 26u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 52u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 56u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 60u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 76u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "group_id", (int)(uintptr_t)(&v16));
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
        gaia::GaiaRequest::SetOperationCode(a2, 4025);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v25, a2);
        started = (char *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v25);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v25);
        return (int)(uintptr_t)(started);
      }
      else
      {
        OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
        if ( OsirisStatus != 0 )
        {
          v14 = (char *)OsirisStatus;
          gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
          return (int)(uintptr_t)(v14);
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), (char *)&unk_1B15112, (int)(uintptr_t)(&v16) + 1);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), (char *)&unk_1B15112, (int)(uintptr_t)(&v17));
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v24, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v21, (int)(uintptr_t)(v24));
          g4_std::string::assign_str(&v20, &v21);
          v4 = (void *)(v21 - 12);
          if ( (uint32_t *)(v21 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v4);
          }
          Json::Value::Destroy((Json::Value::Self *)v24);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "social", (int)(uintptr_t)(&v17) + 1);
          AccessToken = gaia::Gaia_Osiris::GetAccessToken(self, a2, &v22, (int)(uintptr_t)(&v19));
          v6 = (void *)(v22 - 12);
          if ( (uint32_t *)(v22 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
          {
            v15 = (char *)AccessToken;
            g4_std::string::Rep::M_destroy(v6);
            AccessToken = (int)(uintptr_t)(v15);
          }
          if ( AccessToken != 0 )
          {
            v11 = (char *)AccessToken;
            gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
          }
          else
          {
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "me", (int)(uintptr_t)(&v17) + 2);
            Instance = gaia::Gaia::GetInstance();
            v11 = (char *)gaia::Osiris::LeaveGroupDeleteMember(
                            *(gaia::BaseServiceManager::Self **)(Instance + 24),
                            (int)(uintptr_t)(&v19),
                            (int)(uintptr_t)(&v20),
                            (int)(uintptr_t)(&v23),
                            (int)(uintptr_t)(a2));
            g4_std::string::Destroy(&v23);
            gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(v11));
          }
          result = (int)(uintptr_t)(v11);
          v9 = (void *)(v20 - 12);
          if ( (uint32_t *)(v20 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v9);
            result = (int)(uintptr_t)(v11);
          }
          v10 = (void *)(v19 - 12);
          if ( (uint32_t *)(v19 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
          {
            v12 = (char *)result;
            g4_std::string::Rep::M_destroy(v10);
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
// Function: gaia::Gaia_Osiris::MembershipCheck  (binary VA: 0x146aaf0)
// Original: gaia::Gaia_Osiris::MembershipCheck
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::MembershipCheck(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  int OsirisStatus;
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "group_id", (int)(uintptr_t)(&v18));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v20), 4);
  v2 = (void *)(v20 - 12);
  if ( (uint32_t *)(v20 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "credential", (int)(uintptr_t)(&v18) + 1);
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
    gaia::GaiaRequest::SetOperationCode(a2, 4023);
    gaia::Gaia::GetInstance();
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v35, a2);
    started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v35);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v35);
    return started;
  }
  OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
  v16 = OsirisStatus;
  if ( OsirisStatus == 0 )
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
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "social", (int)(uintptr_t)(&v19) + 3);
    started = gaia::Gaia_Osiris::GetAccessToken(self, a2, &v29, (int)(uintptr_t)(&v22));
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
      started = gaia::Osiris::MembershipCheck(
                  *(gaia::BaseServiceManager::Self **)(Instance + 24),
                  (void **)&v25,
                  &v26,
                  (int)(uintptr_t)(&v22),
                  (int)(uintptr_t)(&v23),
                  (int)(uintptr_t)(&v24),
                  (int)(uintptr_t)(a2));
      if ( started == 0 )
        started = gaia::BaseServiceManager::ParseMessages(v25, v26, (int)(uintptr_t)(&v30), 6);
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
  gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
  return v16;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::DeleteGroup  (binary VA: 0x146b080)
// Original: gaia::Gaia_Osiris::DeleteGroup
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::DeleteGroup(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  int OsirisStatus;
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
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "group_id", (int)(uintptr_t)(&v16));
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
        gaia::GaiaRequest::SetOperationCode(a2, 4018);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v24, a2);
        started = (char *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v24);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v24);
        return (int)(uintptr_t)(started);
      }
      else
      {
        OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
        if ( OsirisStatus != 0 )
        {
          v14 = (char *)OsirisStatus;
          gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
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
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "social", (int)(uintptr_t)(&v17) + 2);
          AccessToken = gaia::Gaia_Osiris::GetAccessToken(self, a2, &v22, (int)(uintptr_t)(&v19));
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
            AccessToken = gaia::Osiris::DeleteGroup(
                            *(gaia::BaseServiceManager::Self **)(Instance + 24),
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
// Function: gaia::Gaia_Osiris::UpdateGroup  (binary VA: 0x146b410)
// Original: gaia::Gaia_Osiris::UpdateGroup
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::UpdateGroup(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  void *v6;
  void *v7;
  int OsirisStatus;
  void *v9;
  void *v10;
  Json::Value::Self *v11;
  bool isNull;
  Json::Value::Self *v13;
  bool v14;
  Json::Value::Self *v15;
  bool v16;
  Json::Value::Self *v17;
  bool v18;
  Json::Value::Self *v19;
  void *v20;
  Json::Value::Self *v21;
  void *v22;
  void *v23;
  int Instance;
  gaia::BaseJSONServiceResponse::Self *v25;
  void *v26;
  void *v27;
  void *v28;
  void *v29;
  void *v30;
  Json::Value::Self *v32;
  Json::Value::Self *v33;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_ptr;
  typedef bool _g4_t_v35;
  typedef bool _g4_t_v36;
  typedef bool _g4_t_v37;
  typedef bool _g4_t_v38;
  typedef char *_g4_t_v39;
  typedef char *_g4_t_v40;
  typedef char *_g4_t_v41;
  typedef char *_g4_t_v42;
  typedef char *_g4_t_v43;
  typedef char _g4_t_isArray;
  typedef char _g4_t_v45;
  typedef char *_g4_t_started;
  typedef char *_g4_t_v47;
  typedef char _g4_t_v48;
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
  typedef char *_g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef uint8_t _g4_t_v71[4];
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef uint8_t _g4_t_v74[4];
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
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
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef void *_g4_t_v96;
  typedef int *_g4_t_v97;
  typedef int *_g4_t_v98;
  typedef int _g4_t_v99;
  typedef uint8_t _g4_t_v100[96];
  enum : size_t {
    _g4_s0 = 624u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (76u + sizeof(_g4_t_v35)) > _g4_s1 ? (76u + sizeof(_g4_t_v35)) : _g4_s1,
    _g4_s3 = (76u + sizeof(_g4_t_v36)) > _g4_s2 ? (76u + sizeof(_g4_t_v36)) : _g4_s2,
    _g4_s4 = (76u + sizeof(_g4_t_v37)) > _g4_s3 ? (76u + sizeof(_g4_t_v37)) : _g4_s3,
    _g4_s5 = (76u + sizeof(_g4_t_v38)) > _g4_s4 ? (76u + sizeof(_g4_t_v38)) : _g4_s4,
    _g4_s6 = (80u + sizeof(_g4_t_v39)) > _g4_s5 ? (80u + sizeof(_g4_t_v39)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v40)) > _g4_s6 ? (80u + sizeof(_g4_t_v40)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v41)) > _g4_s7 ? (80u + sizeof(_g4_t_v41)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v42)) > _g4_s8 ? (80u + sizeof(_g4_t_v42)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v43)) > _g4_s9 ? (80u + sizeof(_g4_t_v43)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_isArray)) > _g4_s10 ? (80u + sizeof(_g4_t_isArray)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v45)) > _g4_s11 ? (80u + sizeof(_g4_t_v45)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_started)) > _g4_s12 ? (80u + sizeof(_g4_t_started)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v47)) > _g4_s13 ? (84u + sizeof(_g4_t_v47)) : _g4_s13,
    _g4_s15 = (104u + sizeof(_g4_t_v48)) > _g4_s14 ? (104u + sizeof(_g4_t_v48)) : _g4_s14,
    _g4_s16 = (108u + sizeof(_g4_t_v49)) > _g4_s15 ? (108u + sizeof(_g4_t_v49)) : _g4_s15,
    _g4_s17 = (120u + sizeof(_g4_t_v50)) > _g4_s16 ? (120u + sizeof(_g4_t_v50)) : _g4_s16,
    _g4_s18 = (124u + sizeof(_g4_t_v51)) > _g4_s17 ? (124u + sizeof(_g4_t_v51)) : _g4_s17,
    _g4_s19 = (128u + sizeof(_g4_t_v52)) > _g4_s18 ? (128u + sizeof(_g4_t_v52)) : _g4_s18,
    _g4_s20 = (132u + sizeof(_g4_t_v53)) > _g4_s19 ? (132u + sizeof(_g4_t_v53)) : _g4_s19,
    _g4_s21 = (136u + sizeof(_g4_t_v54)) > _g4_s20 ? (136u + sizeof(_g4_t_v54)) : _g4_s20,
    _g4_s22 = (160u + sizeof(_g4_t_v55)) > _g4_s21 ? (160u + sizeof(_g4_t_v55)) : _g4_s21,
    _g4_s23 = (164u + sizeof(_g4_t_v56)) > _g4_s22 ? (164u + sizeof(_g4_t_v56)) : _g4_s22,
    _g4_s24 = (168u + sizeof(_g4_t_v57)) > _g4_s23 ? (168u + sizeof(_g4_t_v57)) : _g4_s23,
    _g4_s25 = (172u + sizeof(_g4_t_v58)) > _g4_s24 ? (172u + sizeof(_g4_t_v58)) : _g4_s24,
    _g4_s26 = (176u + sizeof(_g4_t_v59)) > _g4_s25 ? (176u + sizeof(_g4_t_v59)) : _g4_s25,
    _g4_s27 = (180u + sizeof(_g4_t_v60)) > _g4_s26 ? (180u + sizeof(_g4_t_v60)) : _g4_s26,
    _g4_s28 = (184u + sizeof(_g4_t_v61)) > _g4_s27 ? (184u + sizeof(_g4_t_v61)) : _g4_s27,
    _g4_s29 = (188u + sizeof(_g4_t_v62)) > _g4_s28 ? (188u + sizeof(_g4_t_v62)) : _g4_s28,
    _g4_s30 = (192u + sizeof(_g4_t_v63)) > _g4_s29 ? (192u + sizeof(_g4_t_v63)) : _g4_s29,
    _g4_s31 = (196u + sizeof(_g4_t_v64)) > _g4_s30 ? (196u + sizeof(_g4_t_v64)) : _g4_s30,
    _g4_s32 = (200u + sizeof(_g4_t_v65)) > _g4_s31 ? (200u + sizeof(_g4_t_v65)) : _g4_s31,
    _g4_s33 = (204u + sizeof(_g4_t_v66)) > _g4_s32 ? (204u + sizeof(_g4_t_v66)) : _g4_s32,
    _g4_s34 = (208u + sizeof(_g4_t_v67)) > _g4_s33 ? (208u + sizeof(_g4_t_v67)) : _g4_s33,
    _g4_s35 = (212u + sizeof(_g4_t_v68)) > _g4_s34 ? (212u + sizeof(_g4_t_v68)) : _g4_s34,
    _g4_s36 = (216u + sizeof(_g4_t_v69)) > _g4_s35 ? (216u + sizeof(_g4_t_v69)) : _g4_s35,
    _g4_s37 = (220u + sizeof(_g4_t_v70)) > _g4_s36 ? (220u + sizeof(_g4_t_v70)) : _g4_s36,
    _g4_s38 = (224u + sizeof(_g4_t_v71)) > _g4_s37 ? (224u + sizeof(_g4_t_v71)) : _g4_s37,
    _g4_s39 = (228u + sizeof(_g4_t_v72)) > _g4_s38 ? (228u + sizeof(_g4_t_v72)) : _g4_s38,
    _g4_s40 = (232u + sizeof(_g4_t_v73)) > _g4_s39 ? (232u + sizeof(_g4_t_v73)) : _g4_s39,
    _g4_s41 = (236u + sizeof(_g4_t_v74)) > _g4_s40 ? (236u + sizeof(_g4_t_v74)) : _g4_s40,
    _g4_s42 = (240u + sizeof(_g4_t_v75)) > _g4_s41 ? (240u + sizeof(_g4_t_v75)) : _g4_s41,
    _g4_s43 = (244u + sizeof(_g4_t_v76)) > _g4_s42 ? (244u + sizeof(_g4_t_v76)) : _g4_s42,
    _g4_s44 = (248u + sizeof(_g4_t_v77)) > _g4_s43 ? (248u + sizeof(_g4_t_v77)) : _g4_s43,
    _g4_s45 = (252u + sizeof(_g4_t_v78)) > _g4_s44 ? (252u + sizeof(_g4_t_v78)) : _g4_s44,
    _g4_s46 = (256u + sizeof(_g4_t_v79)) > _g4_s45 ? (256u + sizeof(_g4_t_v79)) : _g4_s45,
    _g4_s47 = (260u + sizeof(_g4_t_v80)) > _g4_s46 ? (260u + sizeof(_g4_t_v80)) : _g4_s46,
    _g4_s48 = (264u + sizeof(_g4_t_v81)) > _g4_s47 ? (264u + sizeof(_g4_t_v81)) : _g4_s47,
    _g4_s49 = (268u + sizeof(_g4_t_v82)) > _g4_s48 ? (268u + sizeof(_g4_t_v82)) : _g4_s48,
    _g4_s50 = (272u + sizeof(_g4_t_v83)) > _g4_s49 ? (272u + sizeof(_g4_t_v83)) : _g4_s49,
    _g4_s51 = (276u + sizeof(_g4_t_v84)) > _g4_s50 ? (276u + sizeof(_g4_t_v84)) : _g4_s50,
    _g4_s52 = (292u + sizeof(_g4_t_v85)) > _g4_s51 ? (292u + sizeof(_g4_t_v85)) : _g4_s51,
    _g4_s53 = (308u + sizeof(_g4_t_v86)) > _g4_s52 ? (308u + sizeof(_g4_t_v86)) : _g4_s52,
    _g4_s54 = (324u + sizeof(_g4_t_v87)) > _g4_s53 ? (324u + sizeof(_g4_t_v87)) : _g4_s53,
    _g4_s55 = (340u + sizeof(_g4_t_v88)) > _g4_s54 ? (340u + sizeof(_g4_t_v88)) : _g4_s54,
    _g4_s56 = (356u + sizeof(_g4_t_v89)) > _g4_s55 ? (356u + sizeof(_g4_t_v89)) : _g4_s55,
    _g4_s57 = (372u + sizeof(_g4_t_v90)) > _g4_s56 ? (372u + sizeof(_g4_t_v90)) : _g4_s56,
    _g4_s58 = (388u + sizeof(_g4_t_v91)) > _g4_s57 ? (388u + sizeof(_g4_t_v91)) : _g4_s57,
    _g4_s59 = (404u + sizeof(_g4_t_v92)) > _g4_s58 ? (404u + sizeof(_g4_t_v92)) : _g4_s58,
    _g4_s60 = (420u + sizeof(_g4_t_v93)) > _g4_s59 ? (420u + sizeof(_g4_t_v93)) : _g4_s59,
    _g4_s61 = (436u + sizeof(_g4_t_v94)) > _g4_s60 ? (436u + sizeof(_g4_t_v94)) : _g4_s60,
    _g4_s62 = (440u + sizeof(_g4_t_v95)) > _g4_s61 ? (440u + sizeof(_g4_t_v95)) : _g4_s61,
    _g4_s63 = (444u + sizeof(_g4_t_v96)) > _g4_s62 ? (444u + sizeof(_g4_t_v96)) : _g4_s62,
    _g4_s64 = (448u + sizeof(_g4_t_v97)) > _g4_s63 ? (448u + sizeof(_g4_t_v97)) : _g4_s63,
    _g4_s65 = (452u + sizeof(_g4_t_v98)) > _g4_s64 ? (452u + sizeof(_g4_t_v98)) : _g4_s64,
    _g4_s66 = (456u + sizeof(_g4_t_v99)) > _g4_s65 ? (456u + sizeof(_g4_t_v99)) : _g4_s65,
    _g4_s67 = (460u + sizeof(_g4_t_v100)) > _g4_s66 ? (460u + sizeof(_g4_t_v100)) : _g4_s66
  };
  alignas(16) uint8_t _g4_sf[_g4_s67];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 76u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 76u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 76u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 76u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 80u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 80u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 80u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 80u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 80u);
  _g4_t_isArray &isArray = *reinterpret_cast<_g4_t_isArray *>(_g4_sf + 80u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 80u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 80u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 84u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 104u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 108u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 120u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 124u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 128u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 132u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 136u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 160u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 164u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 168u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 172u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 176u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 180u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 184u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 188u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 192u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 196u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 200u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 204u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 208u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 212u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 216u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 220u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 224u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 228u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 232u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 236u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 240u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 244u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 248u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 252u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 256u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 260u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 264u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 268u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 272u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 276u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 292u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 308u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 324u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 340u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 356u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 372u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 388u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 404u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 420u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 436u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 440u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 444u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 448u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 452u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 456u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 460u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v55), "name", (int)(uintptr_t)(&v50));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v55), 4);
  v2 = (void *)(v55 - 12);
  if ( (uint32_t *)(v55 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v55 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v56), "category", (int)(uintptr_t)(&v50) + 1);
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v56), 4);
  v3 = (void *)(v56 - 12);
  if ( (uint32_t *)(v56 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v56 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v57), "description", (int)(uintptr_t)(&v50) + 2);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v57), 4);
  v4 = (void *)(v57 - 12);
  if ( (uint32_t *)(v57 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v57 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v58), "member_limit", (int)(uintptr_t)(&v50) + 3);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v58), 2);
  v5 = (void *)(v58 - 12);
  if ( (uint32_t *)(v58 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v58 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v59), "group_id", (int)(uintptr_t)(&v51));
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v59), 4);
  v6 = (void *)(v59 - 12);
  if ( (uint32_t *)(v59 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v59 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v60), "membership", (int)(uintptr_t)(&v51) + 1);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v60), 1);
  v7 = (void *)(v60 - 12);
  if ( (uint32_t *)(v60 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v60 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) == 0 )
    return gaia::GaiaRequest::GetResponseCode(a2);
  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
  {
    gaia::GaiaRequest::SetOperationCode(a2, 4017);
    gaia::Gaia::GetInstance();
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v100, a2);
    started = (char *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v100);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v100);
    return (int)(uintptr_t)(started);
  }
  OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
  v39 = (char *)OsirisStatus;
  if ( OsirisStatus == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v61), (char *)&unk_1B15112, (int)(uintptr_t)(&v51) + 2);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v62), (char *)&unk_1B15112, (int)(uintptr_t)(&v51) + 3);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v63), (char *)&unk_1B15112, (int)(uintptr_t)(&v52));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v64), (char *)&unk_1B15112, (int)(uintptr_t)(&v52) + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v65), (char *)&unk_1B15112, (int)(uintptr_t)(&v52) + 2);
    v97 = &v95;
    v98 = &v95;
    v95 = 0;
    v96 = nullptr;
    v99 = 0;
    Json::Value::Construct((int)(uintptr_t)(v84), nullptr);
    Json::Value::Construct((int)(uintptr_t)(v85), nullptr);
    v81 = nullptr;
    v82 = nullptr;
    v83 = 0;
    v66 = nullptr;
    v67 = 0;
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v86, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v68, (int)(uintptr_t)(v86));
    g4_std::string::assign_str(&v62, &v68);
    v9 = (void *)(v68 - 12);
    if ( (uint32_t *)(v68 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v68 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v9);
    }
    Json::Value::Destroy((Json::Value::Self *)v86);
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v87, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v69, (int)(uintptr_t)(v87));
    g4_std::string::assign_str(&v63, &v69);
    v10 = (void *)(v69 - 12);
    if ( (uint32_t *)(v69 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v69 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v10);
    }
    Json::Value::Destroy((Json::Value::Self *)v87);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v70), "description", (int)(uintptr_t)(&v52) + 3);
    v11 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v70);
    isNull = Json::Value::isNull(v11);
    v40 = (char *)(v70 - 12);
    if ( (uint32_t *)(v70 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v70 - 4), 0xFFFFFFFF) <= 0 )
    {
      v36 = isNull;
      g4_std::string::Rep::M_destroy(v40);
      isNull = v36;
    }
    if ( !isNull )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v88, (const char *)a2);
      Json::Value::asString((Json::Value::Self *)v71, (int)(uintptr_t)(v88));
      g4_std::string::assign_str(&v64, v71);
      g4_std::string::Destroy(v71);
      Json::Value::Destroy((Json::Value::Self *)v88);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v72), "member_limit", (int)(uintptr_t)(&v53));
    v13 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v72);
    v14 = Json::Value::isNull(v13);
    v41 = (char *)(v72 - 12);
    if ( (uint32_t *)(v72 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v72 - 4), 0xFFFFFFFF) <= 0 )
    {
      v38 = v14;
      g4_std::string::Rep::M_destroy(v41);
      v14 = v38;
    }
    if ( !v14 )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v89, (const char *)a2);
      v48 = Json::Value::asUInt((Json::Value::Self *)v89);
      Json::Value::Destroy((Json::Value::Self *)v89);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v73), "group_id", (int)(uintptr_t)(&v53) + 1);
    v15 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v73);
    v16 = Json::Value::isNull(v15);
    v42 = (char *)(v73 - 12);
    if ( (uint32_t *)(v73 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v73 - 4), 0xFFFFFFFF) <= 0 )
    {
      v35 = v16;
      g4_std::string::Rep::M_destroy(v42);
      v16 = v35;
    }
    if ( !v16 )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v90, (const char *)a2);
      Json::Value::asString((Json::Value::Self *)v74, (int)(uintptr_t)(v90));
      g4_std::string::assign_str(&v65, v74);
      g4_std::string::Destroy(v74);
      Json::Value::Destroy((Json::Value::Self *)v90);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v75), "membership", (int)(uintptr_t)(&v53) + 2);
    v17 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v75);
    v18 = Json::Value::isNull(v17);
    v43 = (char *)(v75 - 12);
    if ( (uint32_t *)(v75 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v75 - 4), 0xFFFFFFFF) <= 0 )
    {
      v37 = v18;
      g4_std::string::Rep::M_destroy(v43);
      v18 = v37;
    }
    if ( !v18 )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v91, (const char *)a2);
      v49 = Json::Value::asInt((Json::Value::Self *)v91);
      Json::Value::Destroy((Json::Value::Self *)v91);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v76), "promote_owners", (int)(uintptr_t)(&v53) + 3);
    v19 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v76);
    isArray = 0;
    if ( !Json::Value::isNull(v19) )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v77), "promote_owners", (int)(uintptr_t)(&v54));
      v33 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v77);
      isArray = Json::Value::isArray(v33);
      g4_std::string::Destroy(&v77);
    }
    v20 = (void *)(v76 - 12);
    if ( (uint32_t *)(v76 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v76 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v20);
    }
    if ( isArray != 0 )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v92, (const char *)a2);
      Json::Value::opAssign((Json::Value::Self *)v84, (const Json::Value::Self *)v92);
      Json::Value::Destroy((Json::Value::Self *)v92);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v78), "demote_owners", (int)(uintptr_t)(&v54) + 1);
    v21 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v78);
    v45 = 0;
    if ( !Json::Value::isNull(v21) )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v79), "demote_owners", (int)(uintptr_t)(&v54) + 2);
      v32 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v79);
      v45 = Json::Value::isArray(v32);
      g4_std::string::Destroy(&v79);
    }
    v22 = (void *)(v78 - 12);
    if ( (uint32_t *)(v78 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v78 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v22);
    }
    if ( v45 != 0 )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v93, (const char *)a2);
      Json::Value::opAssign((Json::Value::Self *)v85, (const Json::Value::Self *)v93);
      Json::Value::Destroy((Json::Value::Self *)v93);
    }
    gaia::GaiaRequest::GetInputValue(a2, (std::map<std::string,std::string> *)&v94);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v80), "social_group", (int)(uintptr_t)(&v54) + 3);
    started = (char *)gaia::Gaia_Osiris::GetAccessToken(self, a2, &v80, (int)(uintptr_t)(&v61));
    v23 = (void *)(v80 - 12);
    if ( (uint32_t *)(v80 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v80 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v23);
    }
    if ( started != nullptr )
    {
      gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(started));
    }
    else
    {
      Instance = gaia::Gaia::GetInstance();
      started = (char *)gaia::Osiris::UpdateGroup(
                          *(gaia::BaseServiceManager::Self **)(Instance + 24),
                          (void **)&v66,
                          &v67,
                          (int)(uintptr_t)(&v61),
                          (int)(uintptr_t)(&v62),
                          (int)(uintptr_t)(&v63),
                          (int)(uintptr_t)(&v64),
                          v48,
                          (int)(uintptr_t)(&v65),
                          v49,
                          (int)(uintptr_t)(&v94),
                          (Json::Value::Self *)v84,
                          (Json::Value::Self *)v85,
                          (int)(uintptr_t)(a2));
      if ( started == nullptr )
        started = (char *)gaia::BaseServiceManager::ParseMessages(v66, v67, (int)(uintptr_t)(&v81), 12);
      gaia::GaiaRequest::SetResponse(a2, (const std::vector<gaia::BaseJSONServiceResponse::Self> *)&v81);
      gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(started));
      free(v66);
    }
    v25 = v81;
    v47 = (char *)v82;
    if ( v82 != v81 )
    {
      do
      {
        ptr = v25;
        v25 = (gaia::BaseJSONServiceResponse::Self *)((char *)v25 + 20);
        gaia::BaseJSONServiceResponse::Destroy(ptr);
      }
      while ( v47 != (char *)v25 );
      v25 = v81;
    }
    if ( v25 != nullptr )
      opDelete(v25);
    Json::Value::Destroy((Json::Value::Self *)v85);
    Json::Value::Destroy((Json::Value::Self *)v84);
    std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
      (int)(uintptr_t)(&v94),
      v96);
    v26 = (void *)(v65 - 12);
    if ( (uint32_t *)(v65 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v65 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v26);
    }
    v27 = (void *)(v64 - 12);
    if ( (uint32_t *)(v64 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v64 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v27);
    }
    v28 = (void *)(v63 - 12);
    if ( (uint32_t *)(v63 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v63 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v28);
    }
    v29 = (void *)(v62 - 12);
    if ( (uint32_t *)(v62 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v62 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v29);
    }
    v30 = (void *)(v61 - 12);
    if ( (uint32_t *)(v61 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v61 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v30);
    }
    return (int)(uintptr_t)(started);
  }
  gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
  return (int)(uintptr_t)(v39);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::SetGroupField  (binary VA: 0x146c3d0)
// Original: gaia::Gaia_Osiris::SetGroupField
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::SetGroupField(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  int OsirisStatus;
  int v6;
  void *v7;
  int v8;
  void *v9;
  int v10;
  void *v11;
  void *v12;
  int Instance;
  char *v14;
  void *v15;
  void *v16;
  void *v17;
  void *v18;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v20;
  typedef char *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_started;
  typedef int _g4_t_v24;
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
  typedef char *_g4_t_v38;
  typedef void *_g4_t_v39;
  typedef char *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef uint8_t _g4_t_v42[96];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (0u + sizeof(_g4_t_v20)) > _g4_s0 ? (0u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v21)) > _g4_s1 ? (36u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v22)) > _g4_s2 ? (40u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_started)) > _g4_s3 ? (40u + sizeof(_g4_t_started)) : _g4_s3,
    _g4_s5 = (62u + sizeof(_g4_t_v24)) > _g4_s4 ? (62u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v25)) > _g4_s5 ? (64u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v26)) > _g4_s6 ? (68u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v27)) > _g4_s7 ? (80u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (84u + sizeof(_g4_t_v28)) > _g4_s8 ? (84u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (88u + sizeof(_g4_t_v29)) > _g4_s9 ? (88u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_v30)) > _g4_s10 ? (92u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v31)) > _g4_s11 ? (96u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (100u + sizeof(_g4_t_v32)) > _g4_s12 ? (100u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (104u + sizeof(_g4_t_v33)) > _g4_s13 ? (104u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (108u + sizeof(_g4_t_v34)) > _g4_s14 ? (108u + sizeof(_g4_t_v34)) : _g4_s14,
    _g4_s16 = (112u + sizeof(_g4_t_v35)) > _g4_s15 ? (112u + sizeof(_g4_t_v35)) : _g4_s15,
    _g4_s17 = (116u + sizeof(_g4_t_v36)) > _g4_s16 ? (116u + sizeof(_g4_t_v36)) : _g4_s16,
    _g4_s18 = (120u + sizeof(_g4_t_v37)) > _g4_s17 ? (120u + sizeof(_g4_t_v37)) : _g4_s17,
    _g4_s19 = (124u + sizeof(_g4_t_v38)) > _g4_s18 ? (124u + sizeof(_g4_t_v38)) : _g4_s18,
    _g4_s20 = (128u + sizeof(_g4_t_v39)) > _g4_s19 ? (128u + sizeof(_g4_t_v39)) : _g4_s19,
    _g4_s21 = (132u + sizeof(_g4_t_v40)) > _g4_s20 ? (132u + sizeof(_g4_t_v40)) : _g4_s20,
    _g4_s22 = (136u + sizeof(_g4_t_v41)) > _g4_s21 ? (136u + sizeof(_g4_t_v41)) : _g4_s21,
    _g4_s23 = (140u + sizeof(_g4_t_v42)) > _g4_s22 ? (140u + sizeof(_g4_t_v42)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 62u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 64u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 68u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 80u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 84u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 88u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 92u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 96u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 100u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 104u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 108u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 112u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 116u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 120u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 124u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 128u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 132u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 136u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 140u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "group_id", (int)(uintptr_t)(&v24));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v27), 4);
  v2 = (void *)(v27 - 12);
  if ( (uint32_t *)(v27 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "field", (int)(uintptr_t)(&v24) + 1);
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v28), 4);
  v3 = (void *)(v28 - 12);
  if ( (uint32_t *)(v28 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "object", (int)(uintptr_t)(&v25));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v29), 4);
  v4 = (void *)(v29 - 12);
  if ( (uint32_t *)(v29 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) == 0 )
    return gaia::GaiaRequest::GetResponseCode(a2);
  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
  {
    gaia::GaiaRequest::SetOperationCode(a2, 4044);
    gaia::Gaia::GetInstance();
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v42, a2);
    started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v42);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v42);
    return started;
  }
  OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
  v22 = OsirisStatus;
  if ( OsirisStatus == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "group_id", (int)(uintptr_t)(&v25) + 1);
    v6 = gaia::GaiaRequest::opIndex(a2, &v31);
    Json::Value::asString((Json::Value::Self *)&v30, v6);
    v7 = (void *)(v31 - 12);
    if ( (uint32_t *)(v31 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "field", (int)(uintptr_t)(&v25) + 2);
    v8 = gaia::GaiaRequest::opIndex(a2, &v33);
    Json::Value::asString((Json::Value::Self *)&v32, v8);
    v9 = (void *)(v33 - 12);
    if ( (uint32_t *)(v33 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v9);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "object", (int)(uintptr_t)(&v25) + 3);
    v10 = gaia::GaiaRequest::opIndex(a2, &v35);
    Json::Value::asString((Json::Value::Self *)&v34, v10);
    v11 = (void *)(v35 - 12);
    if ( (uint32_t *)(v35 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v35 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v11);
    }
    v36 = (int)(uintptr_t)(&dword_213B814);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "social", (int)(uintptr_t)(&v26));
    started = gaia::Gaia_Osiris::GetAccessToken(self, a2, &v37, (int)(uintptr_t)(&v36));
    v12 = (void *)(v37 - 12);
    if ( (uint32_t *)(v37 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v12);
    }
    if ( started != 0 )
    {
      gaia::GaiaRequest::SetResponseCode(a2, started);
    }
    else
    {
      v39 = nullptr;
      v38 = (char *)&dword_213B814;
      v40 = nullptr;
      v41 = 0;
      Instance = gaia::Gaia::GetInstance();
      started = gaia::Osiris::SetGroupField(*(uint32_t *)(Instance + 24), &v38, &v36, &v30, &v32, &v34, nullptr);
      if ( started == 0 )
        started = gaia::BaseServiceManager::ParseMessages(v38, *((uint32_t *)v38 - 3), (int)(uintptr_t)(&v39), 12);
      gaia::GaiaRequest::SetResponse(a2, (const std::vector<gaia::BaseJSONServiceResponse::Self> *)&v39);
      gaia::GaiaRequest::SetResponseCode(a2, started);
      v14 = (char *)v39;
      v21 = v40;
      if ( v40 != v39 )
      {
        do
        {
          v20 = (gaia::BaseJSONServiceResponse::Self *)v14;
          v14 += 20;
          gaia::BaseJSONServiceResponse::Destroy(v20);
        }
        while ( v21 != v14 );
        v14 = (char *)v39;
      }
      if ( v14 != nullptr )
        opDelete(v14);
      g4_std::string::Destroy(&v38);
    }
    v15 = (void *)(v36 - 12);
    if ( (uint32_t *)(v36 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v36 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v15);
    }
    v16 = (void *)(v34 - 12);
    if ( (uint32_t *)(v34 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v16);
    }
    v17 = (void *)(v32 - 12);
    if ( (uint32_t *)(v32 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v32 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v17);
    }
    v18 = (void *)(v30 - 12);
    if ( (uint32_t *)(v30 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v18);
    }
    return started;
  }
  gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
  return v22;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::GetGroupField  (binary VA: 0x146ca10)
// Original: gaia::Gaia_Osiris::GetGroupField
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::GetGroupField(gaia::Gaia::Self *a1, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  int OsirisStatus;
  int v5;
  void *v6;
  int v7;
  void *v8;
  int AccessToken;
  int Instance;
  int result;
  void *v12;
  void *v13;
  void *v14;
  typedef int _g4_t_GroupField;
  typedef int _g4_t_v16;
  typedef int _g4_t_started;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef char *_g4_t_v21;
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
  typedef uint32_t *_g4_t_v32;
  typedef uint8_t _g4_t_v33[96];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (8u + sizeof(_g4_t_GroupField)) > _g4_s0 ? (8u + sizeof(_g4_t_GroupField)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v16)) > _g4_s1 ? (8u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_started)) > _g4_s2 ? (8u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v18)) > _g4_s3 ? (8u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v19)) > _g4_s4 ? (8u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v20)) > _g4_s5 ? (8u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v21)) > _g4_s6 ? (12u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (27u + sizeof(_g4_t_v22)) > _g4_s7 ? (27u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v23)) > _g4_s8 ? (28u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v24)) > _g4_s9 ? (40u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v25)) > _g4_s10 ? (44u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v26)) > _g4_s11 ? (48u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v27)) > _g4_s12 ? (52u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v28)) > _g4_s13 ? (56u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v29)) > _g4_s14 ? (60u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v30)) > _g4_s15 ? (64u + sizeof(_g4_t_v30)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v31)) > _g4_s16 ? (68u + sizeof(_g4_t_v31)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v32)) > _g4_s17 ? (72u + sizeof(_g4_t_v32)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v33)) > _g4_s18 ? (76u + sizeof(_g4_t_v33)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_GroupField &GroupField = *reinterpret_cast<_g4_t_GroupField *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 27u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 52u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 56u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 60u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 64u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 68u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 72u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 76u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "group_id", (int)(uintptr_t)(&v22));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v24), 4);
    v2 = (void *)(v24 - 12);
    if ( (uint32_t *)(v24 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "field", (int)(uintptr_t)(&v23));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v25), 4);
    v3 = (void *)(v25 - 12);
    if ( (uint32_t *)(v25 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 4045);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v33, a2);
        started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v33);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v33);
        return started;
      }
      else
      {
        OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus((gaia::Gaia_Osiris::Self *)(a1));
        if ( OsirisStatus != 0 )
        {
          v18 = OsirisStatus;
          gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
          return v18;
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "group_id", (int)(uintptr_t)(&v23) + 1);
          v5 = gaia::GaiaRequest::opIndex(a2, &v27);
          Json::Value::asString((Json::Value::Self *)&v26, v5);
          v6 = (void *)(v27 - 12);
          if ( (uint32_t *)(v27 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v6);
          }
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "field", (int)(uintptr_t)(&v23) + 2);
          v7 = gaia::GaiaRequest::opIndex(a2, &v29);
          Json::Value::asString((Json::Value::Self *)&v28, v7);
          v8 = (void *)(v29 - 12);
          if ( (uint32_t *)(v29 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v8);
          }
          v30 = (int)(uintptr_t)(&dword_213B814);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "social", (int)(uintptr_t)(&v23) + 3);
          AccessToken = gaia::Gaia_Osiris::GetAccessToken(a1, a2, &v31, (int)(uintptr_t)(&v30));
          v21 = (char *)(v31 - 12);
          if ( (uint32_t *)(v31 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
          {
            v19 = AccessToken;
            g4_std::string::Rep::M_destroy(v21);
            AccessToken = v19;
          }
          if ( AccessToken != 0 )
          {
            GroupField = AccessToken;
            gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
          }
          else
          {
            v32 = &dword_213B814;
            Instance = gaia::Gaia::GetInstance();
            GroupField = gaia::Osiris::GetGroupField(*(uint32_t *)(Instance + 24), &v32, &v30, &v26, &v28, a2);
            gaia::GaiaRequest::SetResponse(a2, &v32);
            gaia::GaiaRequest::SetResponseCode(a2, GroupField);
            g4_std::string::Destroy(&v32);
          }
          result = GroupField;
          v12 = (void *)(v30 - 12);
          if ( (uint32_t *)(v30 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v12);
            result = GroupField;
          }
          v13 = (void *)(v28 - 12);
          if ( (uint32_t *)(v28 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
          {
            v20 = result;
            g4_std::string::Rep::M_destroy(v13);
            result = v20;
          }
          v14 = (void *)(v26 - 12);
          if ( (uint32_t *)(v26 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
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
// Function: gaia::Gaia_Osiris::IncrementDecrementGroupField  (binary VA: 0x146ceb0)
// Original: gaia::Gaia_Osiris::IncrementDecrementGroupField
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::IncrementDecrementGroupField(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  int OsirisStatus;
  int v7;
  void *v8;
  int v9;
  void *v10;
  int v11;
  void *v12;
  Json::Value::Self *v13;
  void *v14;
  void *v15;
  int Instance;
  gaia::BaseJSONServiceResponse::Self *v17;
  void *v18;
  void *v19;
  void *v20;
  void *v21;
  typedef Json::Value::Self *_g4_t_v23;
  typedef char *_g4_t_v24;
  typedef char *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_started;
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
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef char *_g4_t_v44;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v45;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v46;
  typedef int _g4_t_v47;
  typedef uint8_t _g4_t_v48[96];
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (0u + sizeof(_g4_t_v23)) > _g4_s0 ? (0u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (48u + sizeof(_g4_t_v24)) > _g4_s1 ? (48u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v25)) > _g4_s2 ? (48u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v26)) > _g4_s3 ? (52u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_started)) > _g4_s4 ? (52u + sizeof(_g4_t_started)) : _g4_s4,
    _g4_s6 = (66u + sizeof(_g4_t_v28)) > _g4_s5 ? (66u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v29)) > _g4_s6 ? (68u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v30)) > _g4_s7 ? (72u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (88u + sizeof(_g4_t_v31)) > _g4_s8 ? (88u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (92u + sizeof(_g4_t_v32)) > _g4_s9 ? (92u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (96u + sizeof(_g4_t_v33)) > _g4_s10 ? (96u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (100u + sizeof(_g4_t_v34)) > _g4_s11 ? (100u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (104u + sizeof(_g4_t_v35)) > _g4_s12 ? (104u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (108u + sizeof(_g4_t_v36)) > _g4_s13 ? (108u + sizeof(_g4_t_v36)) : _g4_s13,
    _g4_s15 = (112u + sizeof(_g4_t_v37)) > _g4_s14 ? (112u + sizeof(_g4_t_v37)) : _g4_s14,
    _g4_s16 = (116u + sizeof(_g4_t_v38)) > _g4_s15 ? (116u + sizeof(_g4_t_v38)) : _g4_s15,
    _g4_s17 = (120u + sizeof(_g4_t_v39)) > _g4_s16 ? (120u + sizeof(_g4_t_v39)) : _g4_s16,
    _g4_s18 = (124u + sizeof(_g4_t_v40)) > _g4_s17 ? (124u + sizeof(_g4_t_v40)) : _g4_s17,
    _g4_s19 = (128u + sizeof(_g4_t_v41)) > _g4_s18 ? (128u + sizeof(_g4_t_v41)) : _g4_s18,
    _g4_s20 = (132u + sizeof(_g4_t_v42)) > _g4_s19 ? (132u + sizeof(_g4_t_v42)) : _g4_s19,
    _g4_s21 = (136u + sizeof(_g4_t_v43)) > _g4_s20 ? (136u + sizeof(_g4_t_v43)) : _g4_s20,
    _g4_s22 = (140u + sizeof(_g4_t_v44)) > _g4_s21 ? (140u + sizeof(_g4_t_v44)) : _g4_s21,
    _g4_s23 = (144u + sizeof(_g4_t_v45)) > _g4_s22 ? (144u + sizeof(_g4_t_v45)) : _g4_s22,
    _g4_s24 = (148u + sizeof(_g4_t_v46)) > _g4_s23 ? (148u + sizeof(_g4_t_v46)) : _g4_s23,
    _g4_s25 = (152u + sizeof(_g4_t_v47)) > _g4_s24 ? (152u + sizeof(_g4_t_v47)) : _g4_s24,
    _g4_s26 = (156u + sizeof(_g4_t_v48)) > _g4_s25 ? (156u + sizeof(_g4_t_v48)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 48u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 52u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 52u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 66u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 68u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 72u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 88u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 92u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 96u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 100u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 104u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 108u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 112u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 116u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 120u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 124u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 128u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 132u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 136u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 140u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 144u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 148u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 152u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 156u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "group_id", (int)(uintptr_t)(&v28));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v31), 4);
  v2 = (void *)(v31 - 12);
  if ( (uint32_t *)(v31 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "field", (int)(uintptr_t)(&v28) + 1);
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v32), 4);
  v3 = (void *)(v32 - 12);
  if ( (uint32_t *)(v32 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v32 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "object", (int)(uintptr_t)(&v29));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v33), 4);
  v4 = (void *)(v33 - 12);
  if ( (uint32_t *)(v33 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "operation", (int)(uintptr_t)(&v29) + 1);
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v34), 1);
  v5 = (void *)(v34 - 12);
  if ( (uint32_t *)(v34 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) == 0 )
    return gaia::GaiaRequest::GetResponseCode(a2);
  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
  {
    gaia::GaiaRequest::SetOperationCode(a2, 4046);
    gaia::Gaia::GetInstance();
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v48, a2);
    started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v48);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v48);
    return started;
  }
  OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
  v26 = OsirisStatus;
  if ( OsirisStatus == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "group_id", (int)(uintptr_t)(&v29) + 2);
    v7 = gaia::GaiaRequest::opIndex(a2, &v36);
    Json::Value::asString((Json::Value::Self *)&v35, v7);
    v8 = (void *)(v36 - 12);
    if ( (uint32_t *)(v36 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v36 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v8);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "field", (int)(uintptr_t)(&v29) + 3);
    v9 = gaia::GaiaRequest::opIndex(a2, &v38);
    Json::Value::asString((Json::Value::Self *)&v37, v9);
    v10 = (void *)(v38 - 12);
    if ( (uint32_t *)(v38 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v38 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v10);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "object", (int)(uintptr_t)(&v30));
    v11 = gaia::GaiaRequest::opIndex(a2, &v40);
    Json::Value::asString((Json::Value::Self *)&v39, v11);
    v12 = (void *)(v40 - 12);
    if ( (uint32_t *)(v40 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v40 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v12);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "operation", (int)(uintptr_t)(&v30) + 1);
    v13 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v41);
    v24 = (char *)Json::Value::asInt(v13);
    v14 = (void *)(v41 - 12);
    if ( (uint32_t *)(v41 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v14);
    }
    v42 = (int)(uintptr_t)(&dword_213B814);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), "social_clan", (int)(uintptr_t)(&v30) + 2);
    started = gaia::Gaia_Osiris::GetAccessToken(self, a2, &v43, (int)(uintptr_t)(&v42));
    v15 = (void *)(v43 - 12);
    if ( (uint32_t *)(v43 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v43 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v15);
    }
    if ( started != 0 )
    {
      gaia::GaiaRequest::SetResponseCode(a2, started);
    }
    else
    {
      v45 = nullptr;
      v44 = (char *)&dword_213B814;
      v46 = nullptr;
      v47 = 0;
      Instance = gaia::Gaia::GetInstance();
      started = gaia::Osiris::IncrementDecrementGroupField(
                  *(uint32_t *)(Instance + 24),
                  &v44,
                  &v42,
                  &v35,
                  &v37,
                  &v39,
                  v24,
                  a2);
      if ( started == 0 )
        started = gaia::BaseServiceManager::ParseMessages(v44, *((uint32_t *)v44 - 3), (int)(uintptr_t)(&v45), 12);
      gaia::GaiaRequest::SetResponse(a2, (const std::vector<gaia::BaseJSONServiceResponse::Self> *)&v45);
      gaia::GaiaRequest::SetResponseCode(a2, started);
      v17 = v45;
      v25 = (char *)v46;
      if ( v46 != v45 )
      {
        do
        {
          v23 = (Json::Value::Self *)(v17);
          v17 = (gaia::BaseJSONServiceResponse::Self *)((char *)v17 + 20);
          gaia::BaseJSONServiceResponse::Destroy(v23);
        }
        while ( v25 != (char *)v17 );
        v17 = v45;
      }
      if ( v17 != nullptr )
        opDelete(v17);
      g4_std::string::Destroy(&v44);
    }
    v18 = (void *)(v42 - 12);
    if ( (uint32_t *)(v42 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v42 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v18);
    }
    v19 = (void *)(v39 - 12);
    if ( (uint32_t *)(v39 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v19);
    }
    v20 = (void *)(v37 - 12);
    if ( (uint32_t *)(v37 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v20);
    }
    v21 = (void *)(v35 - 12);
    if ( (uint32_t *)(v35 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v35 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v21);
    }
    return started;
  }
  gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
  return v26;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::ListGroupMembers  (binary VA: 0x146d5f0)
// Original: gaia::Gaia_Osiris::ListGroupMembers
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::ListGroupMembers(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  int OsirisStatus;
  void *v7;
  Json::Value::Self *v8;
  bool isNull;
  Json::Value::Self *v10;
  bool v11;
  Json::Value::Self *v12;
  bool v13;
  void *v14;
  int Instance;
  gaia::BaseJSONServiceResponse::Self *v16;
  gaia::BaseJSONServiceResponse::Self *v17;
  void *v18;
  void *v19;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_ptr;
  typedef bool _g4_t_v22;
  typedef bool _g4_t_v23;
  typedef bool _g4_t_v24;
  typedef void *_g4_t_v25;
  typedef void *_g4_t_v26;
  typedef void *_g4_t_v27;
  typedef void *_g4_t_v28;
  typedef void *_g4_t_started;
  typedef char _g4_t_v30;
  typedef char _g4_t_v31;
  typedef char _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef uint8_t _g4_t_v35[7];
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef char *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef void *_g4_t_v49;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef uint8_t _g4_t_v52[16];
  typedef uint8_t _g4_t_v53[16];
  typedef uint8_t _g4_t_v54[16];
  typedef uint8_t _g4_t_v55[16];
  typedef uint8_t _g4_t_v56[96];
  enum : size_t {
    _g4_s0 = 400u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (60u + sizeof(_g4_t_v22)) > _g4_s1 ? (60u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (60u + sizeof(_g4_t_v23)) > _g4_s2 ? (60u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v24)) > _g4_s3 ? (60u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v25)) > _g4_s4 ? (64u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v26)) > _g4_s5 ? (64u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v27)) > _g4_s6 ? (64u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v28)) > _g4_s7 ? (64u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_started)) > _g4_s8 ? (64u + sizeof(_g4_t_started)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v30)) > _g4_s9 ? (68u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v31)) > _g4_s10 ? (72u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v32)) > _g4_s11 ? (76u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (87u + sizeof(_g4_t_v33)) > _g4_s12 ? (87u + sizeof(_g4_t_v33)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v34)) > _g4_s13 ? (88u + sizeof(_g4_t_v34)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v35)) > _g4_s14 ? (92u + sizeof(_g4_t_v35)) : _g4_s14,
    _g4_s16 = (108u + sizeof(_g4_t_v36)) > _g4_s15 ? (108u + sizeof(_g4_t_v36)) : _g4_s15,
    _g4_s17 = (112u + sizeof(_g4_t_v37)) > _g4_s16 ? (112u + sizeof(_g4_t_v37)) : _g4_s16,
    _g4_s18 = (116u + sizeof(_g4_t_v38)) > _g4_s17 ? (116u + sizeof(_g4_t_v38)) : _g4_s17,
    _g4_s19 = (120u + sizeof(_g4_t_v39)) > _g4_s18 ? (120u + sizeof(_g4_t_v39)) : _g4_s18,
    _g4_s20 = (124u + sizeof(_g4_t_v40)) > _g4_s19 ? (124u + sizeof(_g4_t_v40)) : _g4_s19,
    _g4_s21 = (128u + sizeof(_g4_t_v41)) > _g4_s20 ? (128u + sizeof(_g4_t_v41)) : _g4_s20,
    _g4_s22 = (132u + sizeof(_g4_t_v42)) > _g4_s21 ? (132u + sizeof(_g4_t_v42)) : _g4_s21,
    _g4_s23 = (136u + sizeof(_g4_t_v43)) > _g4_s22 ? (136u + sizeof(_g4_t_v43)) : _g4_s22,
    _g4_s24 = (140u + sizeof(_g4_t_v44)) > _g4_s23 ? (140u + sizeof(_g4_t_v44)) : _g4_s23,
    _g4_s25 = (144u + sizeof(_g4_t_v45)) > _g4_s24 ? (144u + sizeof(_g4_t_v45)) : _g4_s24,
    _g4_s26 = (148u + sizeof(_g4_t_v46)) > _g4_s25 ? (148u + sizeof(_g4_t_v46)) : _g4_s25,
    _g4_s27 = (152u + sizeof(_g4_t_v47)) > _g4_s26 ? (152u + sizeof(_g4_t_v47)) : _g4_s26,
    _g4_s28 = (156u + sizeof(_g4_t_v48)) > _g4_s27 ? (156u + sizeof(_g4_t_v48)) : _g4_s27,
    _g4_s29 = (160u + sizeof(_g4_t_v49)) > _g4_s28 ? (160u + sizeof(_g4_t_v49)) : _g4_s28,
    _g4_s30 = (164u + sizeof(_g4_t_v50)) > _g4_s29 ? (164u + sizeof(_g4_t_v50)) : _g4_s29,
    _g4_s31 = (168u + sizeof(_g4_t_v51)) > _g4_s30 ? (168u + sizeof(_g4_t_v51)) : _g4_s30,
    _g4_s32 = (172u + sizeof(_g4_t_v52)) > _g4_s31 ? (172u + sizeof(_g4_t_v52)) : _g4_s31,
    _g4_s33 = (188u + sizeof(_g4_t_v53)) > _g4_s32 ? (188u + sizeof(_g4_t_v53)) : _g4_s32,
    _g4_s34 = (204u + sizeof(_g4_t_v54)) > _g4_s33 ? (204u + sizeof(_g4_t_v54)) : _g4_s33,
    _g4_s35 = (220u + sizeof(_g4_t_v55)) > _g4_s34 ? (220u + sizeof(_g4_t_v55)) : _g4_s34,
    _g4_s36 = (236u + sizeof(_g4_t_v56)) > _g4_s35 ? (236u + sizeof(_g4_t_v56)) : _g4_s35
  };
  alignas(16) uint8_t _g4_sf[_g4_s36];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 60u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 60u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 64u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 64u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 64u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 64u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 64u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 68u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 72u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 76u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 87u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 88u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 92u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 108u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 112u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 116u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 120u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 124u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 128u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 132u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 136u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 140u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 144u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 148u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 152u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 156u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 160u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 164u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 168u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 172u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 188u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 204u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 220u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 236u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "group_id", (int)(uintptr_t)(&v33));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v36), 4);
  v2 = (void *)(v36 - 12);
  if ( (uint32_t *)(v36 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v36 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "limit", (int)(uintptr_t)(&v34));
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v37), 2);
  v3 = (void *)(v37 - 12);
  if ( (uint32_t *)(v37 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "offset", (int)(uintptr_t)(&v34) + 1);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v38), 2);
  v4 = (void *)(v38 - 12);
  if ( (uint32_t *)(v38 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v38 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "owners", (int)(uintptr_t)(&v34) + 2);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v39), 5);
  v5 = (void *)(v39 - 12);
  if ( (uint32_t *)(v39 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) == 0 )
    return gaia::GaiaRequest::GetResponseCode(a2);
  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
  {
    gaia::GaiaRequest::SetOperationCode(a2, 4027);
    gaia::Gaia::GetInstance();
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v56, a2);
    started = (void *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v56);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v56);
    return (int)(uintptr_t)(started);
  }
  OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
  v25 = (void *)OsirisStatus;
  if ( OsirisStatus == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), (char *)&unk_1B15112, (int)(uintptr_t)(&v34) + 3);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), (char *)&unk_1B15112, (int)(uintptr_t)(v35));
    v49 = nullptr;
    v50 = nullptr;
    v51 = 0;
    v42 = nullptr;
    v43 = 0;
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v52, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v44, (int)(uintptr_t)(v52));
    g4_std::string::assign_str(&v41, &v44);
    v7 = (void *)(v44 - 12);
    if ( (uint32_t *)(v44 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v44 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    Json::Value::Destroy((Json::Value::Self *)v52);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "limit", (int)(uintptr_t)(&v35[1]));
    v8 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v45);
    isNull = Json::Value::isNull(v8);
    v26 = (void *)(v45 - 12);
    if ( (uint32_t *)(v45 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
    {
      v22 = isNull;
      g4_std::string::Rep::M_destroy(v26);
      isNull = v22;
    }
    v32 = 0;
    if ( !isNull )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v53, (const char *)a2);
      v32 = Json::Value::asUInt((Json::Value::Self *)v53);
      Json::Value::Destroy((Json::Value::Self *)v53);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), "offset", (int)(uintptr_t)(&v35[2]));
    v10 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v46);
    v11 = Json::Value::isNull(v10);
    v27 = (void *)(v46 - 12);
    if ( (uint32_t *)(v46 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v46 - 4), 0xFFFFFFFF) <= 0 )
    {
      v24 = v11;
      g4_std::string::Rep::M_destroy(v27);
      v11 = v24;
    }
    v31 = 0;
    if ( !v11 )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v54, (const char *)a2);
      v31 = Json::Value::asUInt((Json::Value::Self *)v54);
      Json::Value::Destroy((Json::Value::Self *)v54);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), "owners", (int)(uintptr_t)(&v35[3]));
    v12 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v47);
    v13 = Json::Value::isNull(v12);
    v28 = (void *)(v47 - 12);
    if ( (uint32_t *)(v47 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v47 - 4), 0xFFFFFFFF) <= 0 )
    {
      v23 = v13;
      g4_std::string::Rep::M_destroy(v28);
      v13 = v23;
    }
    v30 = 0;
    if ( !v13 )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v55, (const char *)a2);
      v30 = Json::Value::asBool((Json::Value::Self *)v55);
      Json::Value::Destroy((Json::Value::Self *)v55);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v48), "social", (int)(uintptr_t)(&v35[4]));
    started = (void *)gaia::Gaia_Osiris::GetAccessToken(self, a2, &v48, (int)(uintptr_t)(&v40));
    v14 = (void *)(v48 - 12);
    if ( (uint32_t *)(v48 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v48 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v14);
    }
    if ( started != nullptr )
    {
      gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(started));
    }
    else
    {
      Instance = gaia::Gaia::GetInstance();
      started = (void *)gaia::Osiris::ListGroupMembers(
                          *(gaia::BaseServiceManager::Self **)(Instance + 24),
                          (void **)&v42,
                          &v43,
                          (int)(uintptr_t)(&v40),
                          (int)(uintptr_t)(&v41),
                          v32,
                          v31,
                          v30,
                          (int)(uintptr_t)(a2));
      if ( started == nullptr )
        started = (void *)gaia::BaseServiceManager::ParseMessages(v42, v43, (int)(uintptr_t)(&v49), 6);
      gaia::GaiaRequest::SetResponse(a2, (const std::vector<gaia::BaseJSONServiceResponse::Self> *)&v49);
      gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(started));
      free(v42);
    }
    v16 = v50;
    v17 = (gaia::BaseJSONServiceResponse::Self *)v49;
    if ( v50 != v49 )
    {
      do
      {
        ptr = v17;
        v17 = (gaia::BaseJSONServiceResponse::Self *)((char *)v17 + 20);
        gaia::BaseJSONServiceResponse::Destroy(ptr);
      }
      while ( v16 != v17 );
      v17 = (gaia::BaseJSONServiceResponse::Self *)v49;
    }
    if ( v17 != nullptr )
      opDelete(v17);
    v18 = (void *)(v41 - 12);
    if ( (uint32_t *)(v41 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v18);
    }
    v19 = (void *)(v40 - 12);
    if ( (uint32_t *)(v40 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v40 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v19);
    }
    return (int)(uintptr_t)(started);
  }
  gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
  return (int)(uintptr_t)(v25);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::JoinGroup  (binary VA: 0x146de60)
// Original: gaia::Gaia_Osiris::JoinGroup
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::JoinGroup(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  int OsirisStatus;
  void *v4;
  int AccessToken;
  void *v6;
  int Instance;
  int result;
  void *v9;
  void *v10;
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
  typedef int _g4_t_v23;
  typedef uint8_t _g4_t_v24[16];
  typedef uint8_t _g4_t_v25[80];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_started)) > _g4_s2 ? (12u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v14)) > _g4_s3 ? (12u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v15)) > _g4_s4 ? (12u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (26u + sizeof(_g4_t_v16)) > _g4_s5 ? (26u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v17)) > _g4_s6 ? (28u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v18)) > _g4_s7 ? (36u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v19)) > _g4_s8 ? (40u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v20)) > _g4_s9 ? (44u + sizeof(_g4_t_v20)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v21)) > _g4_s10 ? (48u + sizeof(_g4_t_v21)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v22)) > _g4_s11 ? (52u + sizeof(_g4_t_v22)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v23)) > _g4_s12 ? (56u + sizeof(_g4_t_v23)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v24)) > _g4_s13 ? (60u + sizeof(_g4_t_v24)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v25)) > _g4_s14 ? (76u + sizeof(_g4_t_v25)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 26u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 52u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 56u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 60u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 76u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "group_id", (int)(uintptr_t)(&v16));
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
        gaia::GaiaRequest::SetOperationCode(a2, 4024);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v25, a2);
        started = (char *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v25);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v25);
        return (int)(uintptr_t)(started);
      }
      else
      {
        OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
        if ( OsirisStatus != 0 )
        {
          v14 = (char *)OsirisStatus;
          gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
          return (int)(uintptr_t)(v14);
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), (char *)&unk_1B15112, (int)(uintptr_t)(&v16) + 1);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), (char *)&unk_1B15112, (int)(uintptr_t)(&v17));
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v24, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v21, (int)(uintptr_t)(v24));
          g4_std::string::assign_str(&v20, &v21);
          v4 = (void *)(v21 - 12);
          if ( (uint32_t *)(v21 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v4);
          }
          Json::Value::Destroy((Json::Value::Self *)v24);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "social", (int)(uintptr_t)(&v17) + 1);
          AccessToken = gaia::Gaia_Osiris::GetAccessToken(self, a2, &v22, (int)(uintptr_t)(&v19));
          v6 = (void *)(v22 - 12);
          if ( (uint32_t *)(v22 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
          {
            v15 = (char *)AccessToken;
            g4_std::string::Rep::M_destroy(v6);
            AccessToken = (int)(uintptr_t)(v15);
          }
          if ( AccessToken != 0 )
          {
            v11 = (char *)AccessToken;
            gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
          }
          else
          {
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "me", (int)(uintptr_t)(&v17) + 2);
            Instance = gaia::Gaia::GetInstance();
            v11 = (char *)gaia::Osiris::JoinGroupAddMember(
                            *(gaia::BaseServiceManager::Self **)(Instance + 24),
                            (int)(uintptr_t)(&v19),
                            (int)(uintptr_t)(&v20),
                            (int)(uintptr_t)(&v23),
                            (int)(uintptr_t)(a2));
            g4_std::string::Destroy(&v23);
            gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(v11));
          }
          result = (int)(uintptr_t)(v11);
          v9 = (void *)(v20 - 12);
          if ( (uint32_t *)(v20 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v9);
            result = (int)(uintptr_t)(v11);
          }
          v10 = (void *)(v19 - 12);
          if ( (uint32_t *)(v19 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
          {
            v12 = (char *)result;
            g4_std::string::Rep::M_destroy(v10);
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
// Function: gaia::Gaia_Osiris::AddMemberToGroup  (binary VA: 0x146e230)
// Original: gaia::Gaia_Osiris::AddMemberToGroup
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::AddMemberToGroup(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  int OsirisStatus;
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
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "group_id", (int)(uintptr_t)(&v20));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v22), 4);
    v2 = (void *)(v22 - 12);
    if ( (uint32_t *)(v22 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "credential", (int)(uintptr_t)(&v20) + 1);
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
        gaia::GaiaRequest::SetOperationCode(a2, 4024);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v32, a2);
        started = (char *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v32);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v32);
        return (int)(uintptr_t)(started);
      }
      else
      {
        OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
        if ( OsirisStatus != 0 )
        {
          v17 = (char *)OsirisStatus;
          gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
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
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "social", (int)(uintptr_t)(&v21) + 3);
          AccessToken = gaia::Gaia_Osiris::GetAccessToken(self, a2, &v29, (int)(uintptr_t)(&v24));
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
            AccessToken = gaia::Osiris::JoinGroupAddMember(
                            *(gaia::BaseServiceManager::Self **)(Instance + 24),
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
// Function: gaia::Gaia_Osiris::SearchClansByRecommendationScore  (binary VA: 0x146e700)
// Original: gaia::Gaia_Osiris::SearchClansByRecommendationScore
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::SearchClansByRecommendationScore(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  int OsirisStatus;
  Json::Value::Self *v7;
  bool isNull;
  Json::Value::Self *v9;
  bool v10;
  Json::Value::Self *v11;
  bool v12;
  Json::Value::Self *v13;
  bool v14;
  void *v15;
  int Instance;
  gaia::BaseJSONServiceResponse::Self *v17;
  gaia::BaseJSONServiceResponse::Self *v18;
  void *v19;
  void *v20;
  void *v21;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_ptr;
  typedef bool _g4_t_v24;
  typedef bool _g4_t_v25;
  typedef bool _g4_t_v26;
  typedef bool _g4_t_v27;
  typedef void *_g4_t_v28;
  typedef void *_g4_t_v29;
  typedef void *_g4_t_v30;
  typedef void *_g4_t_v31;
  typedef void *_g4_t_v32;
  typedef void *_g4_t_started;
  typedef char _g4_t_v34;
  typedef char _g4_t_v35;
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
  typedef char *_g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef uint8_t _g4_t_v49[4];
  typedef int _g4_t_v50;
  typedef uint8_t _g4_t_v51[4];
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v55;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v56;
  typedef int _g4_t_v57;
  typedef uint8_t _g4_t_v58[16];
  typedef uint8_t _g4_t_v59[16];
  typedef uint8_t _g4_t_v60[16];
  typedef uint8_t _g4_t_v61[16];
  typedef uint8_t _g4_t_v62[96];
  enum : size_t {
    _g4_s0 = 416u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (56u + sizeof(_g4_t_v24)) > _g4_s1 ? (56u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (56u + sizeof(_g4_t_v25)) > _g4_s2 ? (56u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v26)) > _g4_s3 ? (56u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v27)) > _g4_s4 ? (60u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v28)) > _g4_s5 ? (64u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v29)) > _g4_s6 ? (64u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v30)) > _g4_s7 ? (64u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v31)) > _g4_s8 ? (64u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v32)) > _g4_s9 ? (64u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_started)) > _g4_s10 ? (64u + sizeof(_g4_t_started)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v34)) > _g4_s11 ? (68u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v35)) > _g4_s12 ? (72u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v36)) > _g4_s13 ? (88u + sizeof(_g4_t_v36)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v37)) > _g4_s14 ? (92u + sizeof(_g4_t_v37)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v38)) > _g4_s15 ? (96u + sizeof(_g4_t_v38)) : _g4_s15,
    _g4_s17 = (112u + sizeof(_g4_t_v39)) > _g4_s16 ? (112u + sizeof(_g4_t_v39)) : _g4_s16,
    _g4_s18 = (116u + sizeof(_g4_t_v40)) > _g4_s17 ? (116u + sizeof(_g4_t_v40)) : _g4_s17,
    _g4_s19 = (120u + sizeof(_g4_t_v41)) > _g4_s18 ? (120u + sizeof(_g4_t_v41)) : _g4_s18,
    _g4_s20 = (124u + sizeof(_g4_t_v42)) > _g4_s19 ? (124u + sizeof(_g4_t_v42)) : _g4_s19,
    _g4_s21 = (128u + sizeof(_g4_t_v43)) > _g4_s20 ? (128u + sizeof(_g4_t_v43)) : _g4_s20,
    _g4_s22 = (132u + sizeof(_g4_t_v44)) > _g4_s21 ? (132u + sizeof(_g4_t_v44)) : _g4_s21,
    _g4_s23 = (136u + sizeof(_g4_t_v45)) > _g4_s22 ? (136u + sizeof(_g4_t_v45)) : _g4_s22,
    _g4_s24 = (140u + sizeof(_g4_t_v46)) > _g4_s23 ? (140u + sizeof(_g4_t_v46)) : _g4_s23,
    _g4_s25 = (144u + sizeof(_g4_t_v47)) > _g4_s24 ? (144u + sizeof(_g4_t_v47)) : _g4_s24,
    _g4_s26 = (148u + sizeof(_g4_t_v48)) > _g4_s25 ? (148u + sizeof(_g4_t_v48)) : _g4_s25,
    _g4_s27 = (152u + sizeof(_g4_t_v49)) > _g4_s26 ? (152u + sizeof(_g4_t_v49)) : _g4_s26,
    _g4_s28 = (156u + sizeof(_g4_t_v50)) > _g4_s27 ? (156u + sizeof(_g4_t_v50)) : _g4_s27,
    _g4_s29 = (160u + sizeof(_g4_t_v51)) > _g4_s28 ? (160u + sizeof(_g4_t_v51)) : _g4_s28,
    _g4_s30 = (164u + sizeof(_g4_t_v52)) > _g4_s29 ? (164u + sizeof(_g4_t_v52)) : _g4_s29,
    _g4_s31 = (168u + sizeof(_g4_t_v53)) > _g4_s30 ? (168u + sizeof(_g4_t_v53)) : _g4_s30,
    _g4_s32 = (172u + sizeof(_g4_t_v54)) > _g4_s31 ? (172u + sizeof(_g4_t_v54)) : _g4_s31,
    _g4_s33 = (176u + sizeof(_g4_t_v55)) > _g4_s32 ? (176u + sizeof(_g4_t_v55)) : _g4_s32,
    _g4_s34 = (180u + sizeof(_g4_t_v56)) > _g4_s33 ? (180u + sizeof(_g4_t_v56)) : _g4_s33,
    _g4_s35 = (184u + sizeof(_g4_t_v57)) > _g4_s34 ? (184u + sizeof(_g4_t_v57)) : _g4_s34,
    _g4_s36 = (188u + sizeof(_g4_t_v58)) > _g4_s35 ? (188u + sizeof(_g4_t_v58)) : _g4_s35,
    _g4_s37 = (204u + sizeof(_g4_t_v59)) > _g4_s36 ? (204u + sizeof(_g4_t_v59)) : _g4_s36,
    _g4_s38 = (220u + sizeof(_g4_t_v60)) > _g4_s37 ? (220u + sizeof(_g4_t_v60)) : _g4_s37,
    _g4_s39 = (236u + sizeof(_g4_t_v61)) > _g4_s38 ? (236u + sizeof(_g4_t_v61)) : _g4_s38,
    _g4_s40 = (252u + sizeof(_g4_t_v62)) > _g4_s39 ? (252u + sizeof(_g4_t_v62)) : _g4_s39
  };
  alignas(16) uint8_t _g4_sf[_g4_s40];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 56u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 56u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 64u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 64u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 64u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 64u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 64u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 64u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 68u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 72u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 88u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 92u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 96u);
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
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 160u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 164u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 168u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 172u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 176u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 180u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 184u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 188u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 204u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 220u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 236u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 252u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "category", (int)(uintptr_t)(&v36));
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v39), 4);
  v2 = (void *)(v39 - 12);
  if ( (uint32_t *)(v39 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "score", (int)(uintptr_t)(&v36) + 1);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v40), 2);
  v3 = (void *)(v40 - 12);
  if ( (uint32_t *)(v40 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v40 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "filter", (int)(uintptr_t)(&v36) + 2);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v41), 4);
  v4 = (void *)(v41 - 12);
  if ( (uint32_t *)(v41 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), "limit", (int)(uintptr_t)(&v36) + 3);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v42), 2);
  v5 = (void *)(v42 - 12);
  if ( (uint32_t *)(v42 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v42 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) == 0 )
    return gaia::GaiaRequest::GetResponseCode(a2);
  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
  {
    gaia::GaiaRequest::SetOperationCode(a2, 4021);
    gaia::Gaia::GetInstance();
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v62, a2);
    started = (void *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v62);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v62);
    return (int)(uintptr_t)(started);
  }
  OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
  v28 = (void *)OsirisStatus;
  if ( OsirisStatus == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), (char *)&unk_1B15112, (int)(uintptr_t)(&v37));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), (char *)&unk_1B15112, (int)(uintptr_t)(&v37) + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), (char *)&unk_1B15112, (int)(uintptr_t)(&v37) + 2);
    v55 = nullptr;
    v56 = nullptr;
    v57 = 0;
    v46 = nullptr;
    v47 = 0;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v48), "category", (int)(uintptr_t)(&v37) + 3);
    v7 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v48);
    isNull = Json::Value::isNull(v7);
    v29 = (void *)(v48 - 12);
    if ( (uint32_t *)(v48 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v48 - 4), 0xFFFFFFFF) <= 0 )
    {
      v26 = isNull;
      g4_std::string::Rep::M_destroy(v29);
      isNull = v26;
    }
    if ( !isNull )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v58, (const char *)a2);
      Json::Value::asString((Json::Value::Self *)v49, (int)(uintptr_t)(v58));
      g4_std::string::assign_str(&v44, v49);
      g4_std::string::Destroy(v49);
      Json::Value::Destroy((Json::Value::Self *)v58);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v50), "filter", (int)(uintptr_t)(&v38));
    v9 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v50);
    v10 = Json::Value::isNull(v9);
    v30 = (void *)(v50 - 12);
    if ( (uint32_t *)(v50 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v50 - 4), 0xFFFFFFFF) <= 0 )
    {
      v24 = v10;
      g4_std::string::Rep::M_destroy(v30);
      v10 = v24;
    }
    if ( !v10 )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v59, (const char *)a2);
      Json::Value::asString((Json::Value::Self *)v51, (int)(uintptr_t)(v59));
      g4_std::string::assign_str(&v45, v51);
      g4_std::string::Destroy(v51);
      Json::Value::Destroy((Json::Value::Self *)v59);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v52), "score", (int)(uintptr_t)(&v38) + 1);
    v11 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v52);
    v12 = Json::Value::isNull(v11);
    v31 = (void *)(v52 - 12);
    if ( (uint32_t *)(v52 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v52 - 4), 0xFFFFFFFF) <= 0 )
    {
      v25 = v12;
      g4_std::string::Rep::M_destroy(v31);
      v12 = v25;
    }
    v35 = 0;
    if ( !v12 )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v60, (const char *)a2);
      v35 = Json::Value::asUInt((Json::Value::Self *)v60);
      Json::Value::Destroy((Json::Value::Self *)v60);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v53), "limit", (int)(uintptr_t)(&v38) + 2);
    v13 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v53);
    v14 = Json::Value::isNull(v13);
    v32 = (void *)(v53 - 12);
    if ( (uint32_t *)(v53 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v53 - 4), 0xFFFFFFFF) <= 0 )
    {
      v27 = v14;
      g4_std::string::Rep::M_destroy(v32);
      v14 = v27;
    }
    v34 = 0;
    if ( !v14 )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v61, (const char *)a2);
      v34 = Json::Value::asUInt((Json::Value::Self *)v61);
      Json::Value::Destroy((Json::Value::Self *)v61);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v54), "social", (int)(uintptr_t)(&v38) + 3);
    started = (void *)gaia::Gaia_Osiris::GetAccessToken(self, a2, &v54, (int)(uintptr_t)(&v43));
    v15 = (void *)(v54 - 12);
    if ( (uint32_t *)(v54 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v54 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v15);
    }
    if ( started != nullptr )
    {
      gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(started));
    }
    else
    {
      Instance = gaia::Gaia::GetInstance();
      started = (void *)gaia::Osiris::SearchClansByRecommendedScore(
                          *(gaia::BaseServiceManager::Self **)(Instance + 24),
                          (void **)&v46,
                          &v47,
                          (int)(uintptr_t)(&v43),
                          (int)(uintptr_t)(&v44),
                          (int)(uintptr_t)(&v45),
                          v35,
                          v34,
                          (int)(uintptr_t)(a2));
      if ( started == nullptr )
        started = (void *)gaia::BaseServiceManager::ParseMessages(v46, v47, (int)(uintptr_t)(&v55), 12);
      gaia::GaiaRequest::SetResponse(a2, (const std::vector<gaia::BaseJSONServiceResponse::Self> *)&v55);
      gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(started));
      free(v46);
    }
    v17 = v56;
    v18 = v55;
    if ( v56 != v55 )
    {
      do
      {
        ptr = v18;
        v18 = (gaia::BaseJSONServiceResponse::Self *)((char *)v18 + 20);
        gaia::BaseJSONServiceResponse::Destroy(ptr);
      }
      while ( v17 != v18 );
      v18 = v55;
    }
    if ( v18 != nullptr )
      opDelete(v18);
    v19 = (void *)(v45 - 12);
    if ( (uint32_t *)(v45 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v19);
    }
    v20 = (void *)(v44 - 12);
    if ( (uint32_t *)(v44 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v44 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v20);
    }
    v21 = (void *)(v43 - 12);
    if ( (uint32_t *)(v43 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v43 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v21);
    }
    return (int)(uintptr_t)(started);
  }
  gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
  return (int)(uintptr_t)(v28);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::SearchGroups  (binary VA: 0x146f070)
// Original: gaia::Gaia_Osiris::SearchGroups
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::SearchGroups(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  int OsirisStatus;
  Json::Value::Self *v7;
  bool isNull;
  Json::Value::Self *v9;
  bool v10;
  Json::Value::Self *v11;
  bool v12;
  Json::Value::Self *v13;
  bool v14;
  void *v15;
  void *v16;
  Json::Value::Self *v17;
  int Instance;
  gaia::BaseJSONServiceResponse::Self *v19;
  gaia::BaseJSONServiceResponse::Self *v20;
  void *v21;
  void *v22;
  void *v23;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_ptr;
  typedef bool _g4_t_v26;
  typedef bool _g4_t_v27;
  typedef bool _g4_t_v28;
  typedef bool _g4_t_v29;
  typedef bool _g4_t_v30;
  typedef void *_g4_t_v31;
  typedef void *_g4_t_v32;
  typedef void *_g4_t_v33;
  typedef void *_g4_t_v34;
  typedef void *_g4_t_started;
  typedef char _g4_t_v36;
  typedef char _g4_t_v37;
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
  typedef char *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef char _g4_t_v52[4];
  typedef int _g4_t_v53;
  typedef char _g4_t_v54[4];
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef void *_g4_t_v59;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v60;
  typedef int _g4_t_v61;
  typedef uint8_t _g4_t_v62[16];
  typedef uint8_t _g4_t_v63[16];
  typedef uint8_t _g4_t_v64[16];
  typedef uint8_t _g4_t_v65[16];
  typedef uint8_t _g4_t_v66[96];
  enum : size_t {
    _g4_s0 = 416u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (52u + sizeof(_g4_t_v26)) > _g4_s1 ? (52u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (52u + sizeof(_g4_t_v27)) > _g4_s2 ? (52u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v28)) > _g4_s3 ? (52u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v29)) > _g4_s4 ? (52u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v30)) > _g4_s5 ? (56u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v31)) > _g4_s6 ? (60u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v32)) > _g4_s7 ? (60u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v33)) > _g4_s8 ? (60u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v34)) > _g4_s9 ? (60u + sizeof(_g4_t_v34)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_started)) > _g4_s10 ? (60u + sizeof(_g4_t_started)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v36)) > _g4_s11 ? (64u + sizeof(_g4_t_v36)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v37)) > _g4_s12 ? (76u + sizeof(_g4_t_v37)) : _g4_s12,
    _g4_s14 = (83u + sizeof(_g4_t_v38)) > _g4_s13 ? (83u + sizeof(_g4_t_v38)) : _g4_s13,
    _g4_s15 = (84u + sizeof(_g4_t_v39)) > _g4_s14 ? (84u + sizeof(_g4_t_v39)) : _g4_s14,
    _g4_s16 = (88u + sizeof(_g4_t_v40)) > _g4_s15 ? (88u + sizeof(_g4_t_v40)) : _g4_s15,
    _g4_s17 = (92u + sizeof(_g4_t_v41)) > _g4_s16 ? (92u + sizeof(_g4_t_v41)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v42)) > _g4_s17 ? (108u + sizeof(_g4_t_v42)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v43)) > _g4_s18 ? (112u + sizeof(_g4_t_v43)) : _g4_s18,
    _g4_s20 = (116u + sizeof(_g4_t_v44)) > _g4_s19 ? (116u + sizeof(_g4_t_v44)) : _g4_s19,
    _g4_s21 = (120u + sizeof(_g4_t_v45)) > _g4_s20 ? (120u + sizeof(_g4_t_v45)) : _g4_s20,
    _g4_s22 = (124u + sizeof(_g4_t_v46)) > _g4_s21 ? (124u + sizeof(_g4_t_v46)) : _g4_s21,
    _g4_s23 = (128u + sizeof(_g4_t_v47)) > _g4_s22 ? (128u + sizeof(_g4_t_v47)) : _g4_s22,
    _g4_s24 = (132u + sizeof(_g4_t_v48)) > _g4_s23 ? (132u + sizeof(_g4_t_v48)) : _g4_s23,
    _g4_s25 = (136u + sizeof(_g4_t_v49)) > _g4_s24 ? (136u + sizeof(_g4_t_v49)) : _g4_s24,
    _g4_s26 = (140u + sizeof(_g4_t_v50)) > _g4_s25 ? (140u + sizeof(_g4_t_v50)) : _g4_s25,
    _g4_s27 = (144u + sizeof(_g4_t_v51)) > _g4_s26 ? (144u + sizeof(_g4_t_v51)) : _g4_s26,
    _g4_s28 = (148u + sizeof(_g4_t_v52)) > _g4_s27 ? (148u + sizeof(_g4_t_v52)) : _g4_s27,
    _g4_s29 = (152u + sizeof(_g4_t_v53)) > _g4_s28 ? (152u + sizeof(_g4_t_v53)) : _g4_s28,
    _g4_s30 = (156u + sizeof(_g4_t_v54)) > _g4_s29 ? (156u + sizeof(_g4_t_v54)) : _g4_s29,
    _g4_s31 = (160u + sizeof(_g4_t_v55)) > _g4_s30 ? (160u + sizeof(_g4_t_v55)) : _g4_s30,
    _g4_s32 = (164u + sizeof(_g4_t_v56)) > _g4_s31 ? (164u + sizeof(_g4_t_v56)) : _g4_s31,
    _g4_s33 = (168u + sizeof(_g4_t_v57)) > _g4_s32 ? (168u + sizeof(_g4_t_v57)) : _g4_s32,
    _g4_s34 = (172u + sizeof(_g4_t_v58)) > _g4_s33 ? (172u + sizeof(_g4_t_v58)) : _g4_s33,
    _g4_s35 = (176u + sizeof(_g4_t_v59)) > _g4_s34 ? (176u + sizeof(_g4_t_v59)) : _g4_s34,
    _g4_s36 = (180u + sizeof(_g4_t_v60)) > _g4_s35 ? (180u + sizeof(_g4_t_v60)) : _g4_s35,
    _g4_s37 = (184u + sizeof(_g4_t_v61)) > _g4_s36 ? (184u + sizeof(_g4_t_v61)) : _g4_s36,
    _g4_s38 = (188u + sizeof(_g4_t_v62)) > _g4_s37 ? (188u + sizeof(_g4_t_v62)) : _g4_s37,
    _g4_s39 = (204u + sizeof(_g4_t_v63)) > _g4_s38 ? (204u + sizeof(_g4_t_v63)) : _g4_s38,
    _g4_s40 = (220u + sizeof(_g4_t_v64)) > _g4_s39 ? (220u + sizeof(_g4_t_v64)) : _g4_s39,
    _g4_s41 = (236u + sizeof(_g4_t_v65)) > _g4_s40 ? (236u + sizeof(_g4_t_v65)) : _g4_s40,
    _g4_s42 = (252u + sizeof(_g4_t_v66)) > _g4_s41 ? (252u + sizeof(_g4_t_v66)) : _g4_s41
  };
  alignas(16) uint8_t _g4_sf[_g4_s42];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 52u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 52u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 52u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 52u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 56u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 60u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 60u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 60u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 60u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 60u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 64u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 76u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 83u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 84u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 88u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 92u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 108u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 112u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 116u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 120u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 124u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 128u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 132u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 136u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 140u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 144u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 148u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 152u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 156u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 160u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 164u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 168u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 172u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 176u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 180u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 184u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 188u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 204u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 220u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 236u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 252u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), "category", (int)(uintptr_t)(&v38));
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v42), 4);
  v2 = (void *)(v42 - 12);
  if ( (uint32_t *)(v42 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v42 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), "keywords", (int)(uintptr_t)(&v39));
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v43), 4);
  v3 = (void *)(v43 - 12);
  if ( (uint32_t *)(v43 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v43 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), "limit", (int)(uintptr_t)(&v39) + 1);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v44), 2);
  v4 = (void *)(v44 - 12);
  if ( (uint32_t *)(v44 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v44 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "offset", (int)(uintptr_t)(&v39) + 2);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v45), 2);
  v5 = (void *)(v45 - 12);
  if ( (uint32_t *)(v45 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) == 0 )
    return gaia::GaiaRequest::GetResponseCode(a2);
  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
  {
    gaia::GaiaRequest::SetOperationCode(a2, 4020);
    gaia::Gaia::GetInstance();
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v66, a2);
    started = (void *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v66);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v66);
    return (int)(uintptr_t)(started);
  }
  OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
  v31 = (void *)OsirisStatus;
  if ( OsirisStatus == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), (char *)&unk_1B15112, (int)(uintptr_t)(&v39) + 3);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), (char *)&unk_1B15112, (int)(uintptr_t)(&v40));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v48), (char *)&unk_1B15112, (int)(uintptr_t)(&v40) + 1);
    v59 = nullptr;
    v60 = nullptr;
    v61 = 0;
    v49 = nullptr;
    v50 = 0;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v51), "category", (int)(uintptr_t)(&v40) + 2);
    v7 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v51);
    isNull = Json::Value::isNull(v7);
    v32 = (void *)(v51 - 12);
    if ( (uint32_t *)(v51 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v51 - 4), 0xFFFFFFFF) <= 0 )
    {
      v28 = isNull;
      g4_std::string::Rep::M_destroy(v32);
      isNull = v28;
    }
    if ( !isNull )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v62, (const char *)a2);
      Json::Value::asString((Json::Value::Self *)v52, (int)(uintptr_t)(v62));
      g4_std::string::assign_str(&v47, v52);
      g4_std::string::Destroy(v52);
      Json::Value::Destroy((Json::Value::Self *)v62);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v53), "keywords", (int)(uintptr_t)(&v40) + 3);
    v9 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v53);
    v10 = Json::Value::isNull(v9);
    v33 = (void *)(v53 - 12);
    if ( (uint32_t *)(v53 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v53 - 4), 0xFFFFFFFF) <= 0 )
    {
      v29 = v10;
      g4_std::string::Rep::M_destroy(v33);
      v10 = v29;
    }
    if ( !v10 )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v63, (const char *)a2);
      Json::Value::asString((Json::Value::Self *)v54, (int)(uintptr_t)(v63));
      g4_std::string::assign_str(&v48, v54);
      g4_std::string::Destroy(v54);
      Json::Value::Destroy((Json::Value::Self *)v63);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v55), "offset", (int)(uintptr_t)(&v41));
    v11 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v55);
    v12 = Json::Value::isNull(v11);
    v34 = (void *)(v55 - 12);
    if ( (uint32_t *)(v55 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v55 - 4), 0xFFFFFFFF) <= 0 )
    {
      v26 = v12;
      g4_std::string::Rep::M_destroy(v34);
      v12 = v26;
    }
    v37 = 0;
    if ( !v12 )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v64, (const char *)a2);
      v37 = Json::Value::asUInt((Json::Value::Self *)v64);
      Json::Value::Destroy((Json::Value::Self *)v64);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v56), "limit", (int)(uintptr_t)(&v41) + 1);
    v13 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v56);
    v14 = Json::Value::isNull(v13);
    v15 = (void *)(v56 - 12);
    if ( (uint32_t *)(v56 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v56 - 4), 0xFFFFFFFF) <= 0 )
    {
      v27 = v14;
      g4_std::string::Rep::M_destroy(v15);
      v14 = v27;
    }
    v36 = 0;
    if ( !v14 )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v65, (const char *)a2);
      v36 = Json::Value::asUInt((Json::Value::Self *)v65);
      Json::Value::Destroy((Json::Value::Self *)v65);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v57), "social", (int)(uintptr_t)(&v41) + 2);
    started = (void *)gaia::Gaia_Osiris::GetAccessToken(self, a2, &v57, (int)(uintptr_t)(&v46));
    v16 = (void *)(v57 - 12);
    if ( (uint32_t *)(v57 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v57 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v16);
    }
    if ( started != nullptr )
    {
      gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(started));
    }
    else
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v58), "keywords", (int)(uintptr_t)(&v41) + 3);
      v17 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v58);
      v30 = Json::Value::isNull(v17);
      g4_std::string::Destroy(&v58);
      Instance = gaia::Gaia::GetInstance();
      if ( v30 )
        started = (void *)gaia::Osiris::SearchGroups(
                            *(gaia::BaseServiceManager::Self **)(Instance + 24),
                            (void **)&v49,
                            &v50,
                            (int)(uintptr_t)(&v46),
                            (int)(uintptr_t)(&v47),
                            v36,
                            v37,
                            (int)(uintptr_t)(a2));
      else
        started = (void *)gaia::Osiris::SearchGroupsByKeywords(
                            *(gaia::BaseServiceManager::Self **)(Instance + 24),
                            (void **)&v49,
                            &v50,
                            (int)(uintptr_t)(&v46),
                            (int)(uintptr_t)(&v47),
                            (int)(uintptr_t)(&v48),
                            v36,
                            v37,
                            (int)(uintptr_t)(a2));
      if ( started == nullptr )
        started = (void *)gaia::BaseServiceManager::ParseMessages(v49, v50, (int)(uintptr_t)(&v59), 12);
      gaia::GaiaRequest::SetResponse(a2, (const std::vector<gaia::BaseJSONServiceResponse::Self> *)&v59);
      gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(started));
      free(v49);
    }
    v19 = v60;
    v20 = (gaia::BaseJSONServiceResponse::Self *)v59;
    if ( v60 != v59 )
    {
      do
      {
        ptr = v20;
        v20 = (gaia::BaseJSONServiceResponse::Self *)((char *)v20 + 20);
        gaia::BaseJSONServiceResponse::Destroy(ptr);
      }
      while ( v19 != v20 );
      v20 = (gaia::BaseJSONServiceResponse::Self *)v59;
    }
    if ( v20 != nullptr )
      opDelete(v20);
    v21 = (void *)(v48 - 12);
    if ( (uint32_t *)(v48 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v48 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v21);
    }
    v22 = (void *)(v47 - 12);
    if ( (uint32_t *)(v47 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v47 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v22);
    }
    v23 = (void *)(v46 - 12);
    if ( (uint32_t *)(v46 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v46 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v23);
    }
    return (int)(uintptr_t)(started);
  }
  gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
  return (int)(uintptr_t)(v31);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::ShowGroup  (binary VA: 0x146fa60)
// Original: gaia::Gaia_Osiris::ShowGroup
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::ShowGroup(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  int OsirisStatus;
  void *v4;
  void *v5;
  int Instance;
  gaia::BaseJSONServiceResponse::Self *v7;
  gaia::BaseJSONServiceResponse::Self *v8;
  void *v9;
  void *v10;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_ptr;
  typedef int _g4_t_v13;
  typedef int _g4_t_started;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef char *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v24;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint8_t _g4_t_v27[16];
  typedef uint8_t _g4_t_v28[96];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v13)) > _g4_s1 ? (44u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_started)) > _g4_s2 ? (44u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (59u + sizeof(_g4_t_v15)) > _g4_s3 ? (59u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v16)) > _g4_s4 ? (60u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (68u + sizeof(_g4_t_v17)) > _g4_s5 ? (68u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v18)) > _g4_s6 ? (72u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v19)) > _g4_s7 ? (76u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v20)) > _g4_s8 ? (80u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (84u + sizeof(_g4_t_v21)) > _g4_s9 ? (84u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (88u + sizeof(_g4_t_v22)) > _g4_s10 ? (88u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (92u + sizeof(_g4_t_v23)) > _g4_s11 ? (92u + sizeof(_g4_t_v23)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v24)) > _g4_s12 ? (96u + sizeof(_g4_t_v24)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v25)) > _g4_s13 ? (100u + sizeof(_g4_t_v25)) : _g4_s13,
    _g4_s15 = (104u + sizeof(_g4_t_v26)) > _g4_s14 ? (104u + sizeof(_g4_t_v26)) : _g4_s14,
    _g4_s16 = (108u + sizeof(_g4_t_v27)) > _g4_s15 ? (108u + sizeof(_g4_t_v27)) : _g4_s15,
    _g4_s17 = (124u + sizeof(_g4_t_v28)) > _g4_s16 ? (124u + sizeof(_g4_t_v28)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 44u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 59u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 60u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 68u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 72u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 76u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 80u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 84u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 88u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 92u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 96u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 100u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 104u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 108u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 124u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "group_id", (int)(uintptr_t)(&v15));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v17), 4);
  v2 = (void *)(v17 - 12);
  if ( (uint32_t *)(v17 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) == 0 )
    return gaia::GaiaRequest::GetResponseCode(a2);
  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
  {
    gaia::GaiaRequest::SetOperationCode(a2, 4019);
    gaia::Gaia::GetInstance();
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v28, a2);
    started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v28);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v28);
    return started;
  }
  OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
  v13 = OsirisStatus;
  if ( OsirisStatus == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), (char *)&unk_1B15112, (int)(uintptr_t)(&v16));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), (char *)&unk_1B15112, (int)(uintptr_t)(&v16) + 1);
    v24 = nullptr;
    v25 = nullptr;
    v26 = 0;
    v20 = nullptr;
    v21 = 0;
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v27, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v22, (int)(uintptr_t)(v27));
    g4_std::string::assign_str(&v19, &v22);
    v4 = (void *)(v22 - 12);
    if ( (uint32_t *)(v22 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    Json::Value::Destroy((Json::Value::Self *)v27);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "social", (int)(uintptr_t)(&v16) + 2);
    started = gaia::Gaia_Osiris::GetAccessToken(self, a2, &v23, (int)(uintptr_t)(&v18));
    v5 = (void *)(v23 - 12);
    if ( (uint32_t *)(v23 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    if ( started != 0 )
    {
      gaia::GaiaRequest::SetResponseCode(a2, started);
    }
    else
    {
      Instance = gaia::Gaia::GetInstance();
      started = gaia::Osiris::ShowGroup(
                  *(gaia::BaseServiceManager::Self **)(Instance + 24),
                  (void **)&v20,
                  &v21,
                  (int)(uintptr_t)(&v18),
                  (int)(uintptr_t)(&v19),
                  (int)(uintptr_t)(a2));
      if ( started == 0 )
        started = gaia::BaseServiceManager::ParseMessages(v20, v21, (int)(uintptr_t)(&v24), 12);
      gaia::GaiaRequest::SetResponse(a2, (const std::vector<gaia::BaseJSONServiceResponse::Self> *)&v24);
      gaia::GaiaRequest::SetResponseCode(a2, started);
      free(v20);
    }
    v7 = v25;
    v8 = v24;
    if ( v25 != v24 )
    {
      do
      {
        ptr = v8;
        v8 = (gaia::BaseJSONServiceResponse::Self *)((char *)v8 + 20);
        gaia::BaseJSONServiceResponse::Destroy(ptr);
      }
      while ( v7 != v8 );
      v8 = v24;
    }
    if ( v8 != nullptr )
      opDelete(v8);
    v9 = (void *)(v19 - 12);
    if ( (uint32_t *)(v19 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v9);
    }
    v10 = (void *)(v18 - 12);
    if ( (uint32_t *)(v18 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v10);
    }
    return started;
  }
  gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
  return v13;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::CreateGroup  (binary VA: 0x146fe90)
// Original: gaia::Gaia_Osiris::CreateGroup
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::CreateGroup(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  void *v6;
  void *v7;
  void *v8;
  int OsirisStatus;
  void *v10;
  void *v11;
  Json::Value::Self *v12;
  bool isNull;
  Json::Value::Self *v14;
  bool v15;
  void *v16;
  Json::Value::Self *v17;
  bool v18;
  void *v19;
  Json::Value::Self *v20;
  bool v21;
  void *v22;
  Json::Value::Self *v23;
  bool v24;
  void *v25;
  void *v26;
  int Instance;
  char *v28;
  void *v29;
  void *v30;
  void *v31;
  void *v32;
  void *v33;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_ptr;
  typedef bool _g4_t_v36;
  typedef bool _g4_t_v37;
  typedef bool _g4_t_v38;
  typedef bool _g4_t_v39;
  typedef bool _g4_t_v40;
  typedef char *_g4_t_v41;
  typedef char *_g4_t_v42;
  typedef char *_g4_t_v43;
  typedef char *_g4_t_v44;
  typedef char *_g4_t_started;
  typedef char *_g4_t_v46;
  typedef char _g4_t_v47;
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
  typedef char *_g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef uint8_t _g4_t_v70[4];
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef uint8_t _g4_t_v73[4];
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef void *_g4_t_v77;
  typedef char *_g4_t_v78;
  typedef int _g4_t_v79;
  typedef uint8_t _g4_t_v80[16];
  typedef uint8_t _g4_t_v81[16];
  typedef uint8_t _g4_t_v82[16];
  typedef uint8_t _g4_t_v83[16];
  typedef uint8_t _g4_t_v84[16];
  typedef uint8_t _g4_t_v85[16];
  typedef uint8_t _g4_t_v86[16];
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef void *_g4_t_v89;
  typedef int *_g4_t_v90;
  typedef int *_g4_t_v91;
  typedef int _g4_t_v92;
  typedef uint8_t _g4_t_v93[96];
  enum : size_t {
    _g4_s0 = 544u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (64u + sizeof(_g4_t_v36)) > _g4_s1 ? (64u + sizeof(_g4_t_v36)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_v37)) > _g4_s2 ? (64u + sizeof(_g4_t_v37)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v38)) > _g4_s3 ? (64u + sizeof(_g4_t_v38)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v39)) > _g4_s4 ? (64u + sizeof(_g4_t_v39)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v40)) > _g4_s5 ? (64u + sizeof(_g4_t_v40)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v41)) > _g4_s6 ? (68u + sizeof(_g4_t_v41)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v42)) > _g4_s7 ? (68u + sizeof(_g4_t_v42)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v43)) > _g4_s8 ? (72u + sizeof(_g4_t_v43)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v44)) > _g4_s9 ? (72u + sizeof(_g4_t_v44)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_started)) > _g4_s10 ? (72u + sizeof(_g4_t_started)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v46)) > _g4_s11 ? (76u + sizeof(_g4_t_v46)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v47)) > _g4_s12 ? (80u + sizeof(_g4_t_v47)) : _g4_s12,
    _g4_s14 = (98u + sizeof(_g4_t_v48)) > _g4_s13 ? (98u + sizeof(_g4_t_v48)) : _g4_s13,
    _g4_s15 = (100u + sizeof(_g4_t_v49)) > _g4_s14 ? (100u + sizeof(_g4_t_v49)) : _g4_s14,
    _g4_s16 = (104u + sizeof(_g4_t_v50)) > _g4_s15 ? (104u + sizeof(_g4_t_v50)) : _g4_s15,
    _g4_s17 = (108u + sizeof(_g4_t_v51)) > _g4_s16 ? (108u + sizeof(_g4_t_v51)) : _g4_s16,
    _g4_s18 = (112u + sizeof(_g4_t_v52)) > _g4_s17 ? (112u + sizeof(_g4_t_v52)) : _g4_s17,
    _g4_s19 = (136u + sizeof(_g4_t_v53)) > _g4_s18 ? (136u + sizeof(_g4_t_v53)) : _g4_s18,
    _g4_s20 = (140u + sizeof(_g4_t_v54)) > _g4_s19 ? (140u + sizeof(_g4_t_v54)) : _g4_s19,
    _g4_s21 = (144u + sizeof(_g4_t_v55)) > _g4_s20 ? (144u + sizeof(_g4_t_v55)) : _g4_s20,
    _g4_s22 = (148u + sizeof(_g4_t_v56)) > _g4_s21 ? (148u + sizeof(_g4_t_v56)) : _g4_s21,
    _g4_s23 = (152u + sizeof(_g4_t_v57)) > _g4_s22 ? (152u + sizeof(_g4_t_v57)) : _g4_s22,
    _g4_s24 = (156u + sizeof(_g4_t_v58)) > _g4_s23 ? (156u + sizeof(_g4_t_v58)) : _g4_s23,
    _g4_s25 = (160u + sizeof(_g4_t_v59)) > _g4_s24 ? (160u + sizeof(_g4_t_v59)) : _g4_s24,
    _g4_s26 = (164u + sizeof(_g4_t_v60)) > _g4_s25 ? (164u + sizeof(_g4_t_v60)) : _g4_s25,
    _g4_s27 = (168u + sizeof(_g4_t_v61)) > _g4_s26 ? (168u + sizeof(_g4_t_v61)) : _g4_s26,
    _g4_s28 = (172u + sizeof(_g4_t_v62)) > _g4_s27 ? (172u + sizeof(_g4_t_v62)) : _g4_s27,
    _g4_s29 = (176u + sizeof(_g4_t_v63)) > _g4_s28 ? (176u + sizeof(_g4_t_v63)) : _g4_s28,
    _g4_s30 = (180u + sizeof(_g4_t_v64)) > _g4_s29 ? (180u + sizeof(_g4_t_v64)) : _g4_s29,
    _g4_s31 = (184u + sizeof(_g4_t_v65)) > _g4_s30 ? (184u + sizeof(_g4_t_v65)) : _g4_s30,
    _g4_s32 = (188u + sizeof(_g4_t_v66)) > _g4_s31 ? (188u + sizeof(_g4_t_v66)) : _g4_s31,
    _g4_s33 = (192u + sizeof(_g4_t_v67)) > _g4_s32 ? (192u + sizeof(_g4_t_v67)) : _g4_s32,
    _g4_s34 = (196u + sizeof(_g4_t_v68)) > _g4_s33 ? (196u + sizeof(_g4_t_v68)) : _g4_s33,
    _g4_s35 = (200u + sizeof(_g4_t_v69)) > _g4_s34 ? (200u + sizeof(_g4_t_v69)) : _g4_s34,
    _g4_s36 = (204u + sizeof(_g4_t_v70)) > _g4_s35 ? (204u + sizeof(_g4_t_v70)) : _g4_s35,
    _g4_s37 = (208u + sizeof(_g4_t_v71)) > _g4_s36 ? (208u + sizeof(_g4_t_v71)) : _g4_s36,
    _g4_s38 = (212u + sizeof(_g4_t_v72)) > _g4_s37 ? (212u + sizeof(_g4_t_v72)) : _g4_s37,
    _g4_s39 = (216u + sizeof(_g4_t_v73)) > _g4_s38 ? (216u + sizeof(_g4_t_v73)) : _g4_s38,
    _g4_s40 = (220u + sizeof(_g4_t_v74)) > _g4_s39 ? (220u + sizeof(_g4_t_v74)) : _g4_s39,
    _g4_s41 = (224u + sizeof(_g4_t_v75)) > _g4_s40 ? (224u + sizeof(_g4_t_v75)) : _g4_s40,
    _g4_s42 = (228u + sizeof(_g4_t_v76)) > _g4_s41 ? (228u + sizeof(_g4_t_v76)) : _g4_s41,
    _g4_s43 = (232u + sizeof(_g4_t_v77)) > _g4_s42 ? (232u + sizeof(_g4_t_v77)) : _g4_s42,
    _g4_s44 = (236u + sizeof(_g4_t_v78)) > _g4_s43 ? (236u + sizeof(_g4_t_v78)) : _g4_s43,
    _g4_s45 = (240u + sizeof(_g4_t_v79)) > _g4_s44 ? (240u + sizeof(_g4_t_v79)) : _g4_s44,
    _g4_s46 = (244u + sizeof(_g4_t_v80)) > _g4_s45 ? (244u + sizeof(_g4_t_v80)) : _g4_s45,
    _g4_s47 = (260u + sizeof(_g4_t_v81)) > _g4_s46 ? (260u + sizeof(_g4_t_v81)) : _g4_s46,
    _g4_s48 = (276u + sizeof(_g4_t_v82)) > _g4_s47 ? (276u + sizeof(_g4_t_v82)) : _g4_s47,
    _g4_s49 = (292u + sizeof(_g4_t_v83)) > _g4_s48 ? (292u + sizeof(_g4_t_v83)) : _g4_s48,
    _g4_s50 = (308u + sizeof(_g4_t_v84)) > _g4_s49 ? (308u + sizeof(_g4_t_v84)) : _g4_s49,
    _g4_s51 = (324u + sizeof(_g4_t_v85)) > _g4_s50 ? (324u + sizeof(_g4_t_v85)) : _g4_s50,
    _g4_s52 = (340u + sizeof(_g4_t_v86)) > _g4_s51 ? (340u + sizeof(_g4_t_v86)) : _g4_s51,
    _g4_s53 = (356u + sizeof(_g4_t_v87)) > _g4_s52 ? (356u + sizeof(_g4_t_v87)) : _g4_s52,
    _g4_s54 = (360u + sizeof(_g4_t_v88)) > _g4_s53 ? (360u + sizeof(_g4_t_v88)) : _g4_s53,
    _g4_s55 = (364u + sizeof(_g4_t_v89)) > _g4_s54 ? (364u + sizeof(_g4_t_v89)) : _g4_s54,
    _g4_s56 = (368u + sizeof(_g4_t_v90)) > _g4_s55 ? (368u + sizeof(_g4_t_v90)) : _g4_s55,
    _g4_s57 = (372u + sizeof(_g4_t_v91)) > _g4_s56 ? (372u + sizeof(_g4_t_v91)) : _g4_s56,
    _g4_s58 = (376u + sizeof(_g4_t_v92)) > _g4_s57 ? (376u + sizeof(_g4_t_v92)) : _g4_s57,
    _g4_s59 = (380u + sizeof(_g4_t_v93)) > _g4_s58 ? (380u + sizeof(_g4_t_v93)) : _g4_s58
  };
  alignas(16) uint8_t _g4_sf[_g4_s59];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 64u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 64u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 64u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 64u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 64u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 68u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 68u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 72u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 72u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 72u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 76u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 80u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 98u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 100u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 104u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 108u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 112u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 136u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 140u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 144u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 148u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 152u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 156u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 160u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 164u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 168u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 172u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 176u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 180u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 184u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 188u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 192u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 196u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 200u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 204u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 208u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 212u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 216u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 220u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 224u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 228u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 232u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 236u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 240u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 244u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 260u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 276u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 292u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 308u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 324u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 340u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 356u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 360u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 364u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 368u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 372u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 376u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 380u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v53), "name", (int)(uintptr_t)(&v48));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v53), 4);
  v2 = (void *)(v53 - 12);
  if ( (uint32_t *)(v53 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v53 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v54), "category", (int)(uintptr_t)(&v48) + 1);
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v54), 4);
  v3 = (void *)(v54 - 12);
  if ( (uint32_t *)(v54 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v54 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v55), "description", (int)(uintptr_t)(&v49));
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v55), 4);
  v4 = (void *)(v55 - 12);
  if ( (uint32_t *)(v55 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v55 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v56), "member_limit", (int)(uintptr_t)(&v49) + 1);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v56), 2);
  v5 = (void *)(v56 - 12);
  if ( (uint32_t *)(v56 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v56 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v57), "group_id", (int)(uintptr_t)(&v49) + 2);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v57), 4);
  v6 = (void *)(v57 - 12);
  if ( (uint32_t *)(v57 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v57 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v58), "membership", (int)(uintptr_t)(&v49) + 3);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v58), 1);
  v7 = (void *)(v58 - 12);
  if ( (uint32_t *)(v58 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v58 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v59), "type", (int)(uintptr_t)(&v50));
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v59), 2);
  v8 = (void *)(v59 - 12);
  if ( (uint32_t *)(v59 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v59 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) == 0 )
    return gaia::GaiaRequest::GetResponseCode(a2);
  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
  {
    gaia::GaiaRequest::SetOperationCode(a2, 4016);
    gaia::Gaia::GetInstance();
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v93, a2);
    started = (char *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v93);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v93);
    return (int)(uintptr_t)(started);
  }
  OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
  v43 = (char *)OsirisStatus;
  if ( OsirisStatus == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v60), (char *)&unk_1B15112, (int)(uintptr_t)(&v50) + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v61), (char *)&unk_1B15112, (int)(uintptr_t)(&v50) + 2);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v62), (char *)&unk_1B15112, (int)(uintptr_t)(&v50) + 3);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v63), (char *)&unk_1B15112, (int)(uintptr_t)(&v51));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v64), (char *)&unk_1B15112, (int)(uintptr_t)(&v51) + 1);
    v90 = &v88;
    v91 = &v88;
    v88 = 0;
    v89 = nullptr;
    v92 = 0;
    v77 = nullptr;
    v78 = nullptr;
    v79 = 0;
    v65 = nullptr;
    v66 = 0;
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v80, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v67, (int)(uintptr_t)(v80));
    g4_std::string::assign_str(&v61, &v67);
    v10 = (void *)(v67 - 12);
    if ( (uint32_t *)(v67 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v67 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v10);
    }
    Json::Value::Destroy((Json::Value::Self *)v80);
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v81, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v68, (int)(uintptr_t)(v81));
    g4_std::string::assign_str(&v62, &v68);
    v11 = (void *)(v68 - 12);
    if ( (uint32_t *)(v68 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v68 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v11);
    }
    Json::Value::Destroy((Json::Value::Self *)v81);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v69), "description", (int)(uintptr_t)(&v51) + 2);
    v12 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v69);
    isNull = Json::Value::isNull(v12);
    v44 = (char *)(v69 - 12);
    if ( (uint32_t *)(v69 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v69 - 4), 0xFFFFFFFF) <= 0 )
    {
      v40 = isNull;
      g4_std::string::Rep::M_destroy(v44);
      isNull = v40;
    }
    if ( !isNull )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v82, (const char *)a2);
      Json::Value::asString((Json::Value::Self *)v70, (int)(uintptr_t)(v82));
      g4_std::string::assign_str(&v63, v70);
      g4_std::string::Destroy(v70);
      Json::Value::Destroy((Json::Value::Self *)v82);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v71), "member_limit", (int)(uintptr_t)(&v51) + 3);
    v14 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v71);
    v15 = Json::Value::isNull(v14);
    v16 = (void *)(v71 - 12);
    if ( (uint32_t *)(v71 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v71 - 4), 0xFFFFFFFF) <= 0 )
    {
      v36 = v15;
      g4_std::string::Rep::M_destroy(v16);
      v15 = v36;
    }
    v47 = 0;
    if ( !v15 )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v83, (const char *)a2);
      v47 = Json::Value::asUInt((Json::Value::Self *)v83);
      Json::Value::Destroy((Json::Value::Self *)v83);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v72), "group_id", (int)(uintptr_t)(&v52));
    v17 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v72);
    v18 = Json::Value::isNull(v17);
    v19 = (void *)(v72 - 12);
    if ( (uint32_t *)(v72 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v72 - 4), 0xFFFFFFFF) <= 0 )
    {
      v37 = v18;
      g4_std::string::Rep::M_destroy(v19);
      v18 = v37;
    }
    if ( !v18 )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v84, (const char *)a2);
      Json::Value::asString((Json::Value::Self *)v73, (int)(uintptr_t)(v84));
      g4_std::string::assign_str(&v64, v73);
      g4_std::string::Destroy(v73);
      Json::Value::Destroy((Json::Value::Self *)v84);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v74), "type", (int)(uintptr_t)(&v52) + 1);
    v20 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v74);
    v21 = Json::Value::isNull(v20);
    v22 = (void *)(v74 - 12);
    if ( (uint32_t *)(v74 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v74 - 4), 0xFFFFFFFF) <= 0 )
    {
      v38 = v21;
      g4_std::string::Rep::M_destroy(v22);
      v21 = v38;
    }
    v41 = nullptr;
    if ( !v21 )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v85, (const char *)a2);
      v41 = (char *)Json::Value::asInt((Json::Value::Self *)v85);
      Json::Value::Destroy((Json::Value::Self *)v85);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v75), "membership", (int)(uintptr_t)(&v52) + 2);
    v23 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v75);
    v24 = Json::Value::isNull(v23);
    v25 = (void *)(v75 - 12);
    if ( (uint32_t *)(v75 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v75 - 4), 0xFFFFFFFF) <= 0 )
    {
      v39 = v24;
      g4_std::string::Rep::M_destroy(v25);
      v24 = v39;
    }
    v46 = nullptr;
    if ( !v24 )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v86, (const char *)a2);
      v46 = (char *)Json::Value::asInt((Json::Value::Self *)v86);
      Json::Value::Destroy((Json::Value::Self *)v86);
    }
    gaia::GaiaRequest::GetInputValue(a2, (std::map<std::string,std::string> *)&v87);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v76), "social_group", (int)(uintptr_t)(&v52) + 3);
    started = (char *)gaia::Gaia_Osiris::GetAccessToken(self, a2, &v76, (int)(uintptr_t)(&v60));
    v26 = (void *)(v76 - 12);
    if ( (uint32_t *)(v76 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v76 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v26);
    }
    if ( started != nullptr )
    {
      gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(started));
    }
    else
    {
      Instance = gaia::Gaia::GetInstance();
      started = (char *)gaia::Osiris::CreateGroup(
                          *(gaia::BaseServiceManager::Self **)(Instance + 24),
                          (void **)&v65,
                          &v66,
                          (int)(uintptr_t)(&v60),
                          (int)(uintptr_t)(v41),
                          (int)(uintptr_t)(&v61),
                          (int)(uintptr_t)(&v62),
                          (int)(uintptr_t)(&v63),
                          v47,
                          (int)(uintptr_t)(&v64),
                          (int)(uintptr_t)(v46),
                          (int)(uintptr_t)(&v87),
                          (int)(uintptr_t)(a2));
      if ( started == nullptr )
        started = (char *)gaia::BaseServiceManager::ParseMessages(v65, v66, (int)(uintptr_t)(&v77), 12);
      gaia::GaiaRequest::SetResponse(a2, (const std::vector<gaia::BaseJSONServiceResponse::Self> *)&v77);
      gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(started));
      free(v65);
    }
    v28 = (char *)v77;
    v42 = v78;
    if ( v78 != v77 )
    {
      do
      {
        ptr = (gaia::BaseJSONServiceResponse::Self *)v28;
        v28 += 20;
        gaia::BaseJSONServiceResponse::Destroy(ptr);
      }
      while ( v42 != v28 );
      v28 = (char *)v77;
    }
    if ( v28 != nullptr )
      opDelete(v28);
    std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
      (int)(uintptr_t)(&v87),
      v89);
    v29 = (void *)(v64 - 12);
    if ( (uint32_t *)(v64 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v64 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v29);
    }
    v30 = (void *)(v63 - 12);
    if ( (uint32_t *)(v63 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v63 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v30);
    }
    v31 = (void *)(v62 - 12);
    if ( (uint32_t *)(v62 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v62 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v31);
    }
    v32 = (void *)(v61 - 12);
    if ( (uint32_t *)(v61 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v61 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v32);
    }
    v33 = (void *)(v60 - 12);
    if ( (uint32_t *)(v60 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v60 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v33);
    }
    return (int)(uintptr_t)(started);
  }
  gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
  return (int)(uintptr_t)(v43);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::GetProfile  (binary VA: 0x1470c70)
// Original: gaia::Gaia_Osiris::GetProfile
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::GetProfile(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  int OsirisStatus;
  void *v4;
  void *v5;
  int Instance;
  gaia::BaseJSONServiceResponse::Self *v7;
  gaia::BaseJSONServiceResponse::Self *v8;
  void *v9;
  void *v10;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_ptr;
  typedef int _g4_t_v13;
  typedef int _g4_t_started;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef char *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v24;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint8_t _g4_t_v27[16];
  typedef uint8_t _g4_t_v28[96];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v13)) > _g4_s1 ? (44u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_started)) > _g4_s2 ? (44u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (59u + sizeof(_g4_t_v15)) > _g4_s3 ? (59u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v16)) > _g4_s4 ? (60u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (68u + sizeof(_g4_t_v17)) > _g4_s5 ? (68u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v18)) > _g4_s6 ? (72u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v19)) > _g4_s7 ? (76u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v20)) > _g4_s8 ? (80u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (84u + sizeof(_g4_t_v21)) > _g4_s9 ? (84u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (88u + sizeof(_g4_t_v22)) > _g4_s10 ? (88u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (92u + sizeof(_g4_t_v23)) > _g4_s11 ? (92u + sizeof(_g4_t_v23)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v24)) > _g4_s12 ? (96u + sizeof(_g4_t_v24)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v25)) > _g4_s13 ? (100u + sizeof(_g4_t_v25)) : _g4_s13,
    _g4_s15 = (104u + sizeof(_g4_t_v26)) > _g4_s14 ? (104u + sizeof(_g4_t_v26)) : _g4_s14,
    _g4_s16 = (108u + sizeof(_g4_t_v27)) > _g4_s15 ? (108u + sizeof(_g4_t_v27)) : _g4_s15,
    _g4_s17 = (124u + sizeof(_g4_t_v28)) > _g4_s16 ? (124u + sizeof(_g4_t_v28)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 44u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 59u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 60u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 68u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 72u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 76u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 80u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 84u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 88u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 92u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 96u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 100u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 104u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 108u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 124u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "credential", (int)(uintptr_t)(&v15));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v17), 4);
  v2 = (void *)(v17 - 12);
  if ( (uint32_t *)(v17 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) == 0 )
    return gaia::GaiaRequest::GetResponseCode(a2);
  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
  {
    gaia::GaiaRequest::SetOperationCode(a2, 4014);
    gaia::Gaia::GetInstance();
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v28, a2);
    started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v28);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v28);
    return started;
  }
  OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
  v13 = OsirisStatus;
  if ( OsirisStatus == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), (char *)&unk_1B15112, (int)(uintptr_t)(&v16));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), (char *)&unk_1B15112, (int)(uintptr_t)(&v16) + 1);
    v24 = nullptr;
    v25 = nullptr;
    v26 = 0;
    v20 = nullptr;
    v21 = 0;
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v27, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v22, (int)(uintptr_t)(v27));
    g4_std::string::assign_str(&v19, &v22);
    v4 = (void *)(v22 - 12);
    if ( (uint32_t *)(v22 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    Json::Value::Destroy((Json::Value::Self *)v27);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "social", (int)(uintptr_t)(&v16) + 2);
    started = gaia::Gaia_Osiris::GetAccessToken(self, a2, &v23, (int)(uintptr_t)(&v18));
    v5 = (void *)(v23 - 12);
    if ( (uint32_t *)(v23 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    if ( started != 0 )
    {
      gaia::GaiaRequest::SetResponseCode(a2, started);
    }
    else
    {
      Instance = gaia::Gaia::GetInstance();
      started = gaia::Osiris::GetProfile(
                  *(gaia::BaseServiceManager::Self **)(Instance + 24),
                  (void **)&v20,
                  &v21,
                  (int)(uintptr_t)(&v18),
                  (int)(uintptr_t)(&v19),
                  (int)(uintptr_t)(a2));
      if ( started == 0 )
        started = gaia::BaseServiceManager::ParseMessages(v20, v21, (int)(uintptr_t)(&v24), 26);
      gaia::GaiaRequest::SetResponse(a2, (const std::vector<gaia::BaseJSONServiceResponse::Self> *)&v24);
      gaia::GaiaRequest::SetResponseCode(a2, started);
      free(v20);
    }
    v7 = v25;
    v8 = v24;
    if ( v25 != v24 )
    {
      do
      {
        ptr = v8;
        v8 = (gaia::BaseJSONServiceResponse::Self *)((char *)v8 + 20);
        gaia::BaseJSONServiceResponse::Destroy(ptr);
      }
      while ( v7 != v8 );
      v8 = v24;
    }
    if ( v8 != nullptr )
      opDelete(v8);
    v9 = (void *)(v19 - 12);
    if ( (uint32_t *)(v19 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v9);
    }
    v10 = (void *)(v18 - 12);
    if ( (uint32_t *)(v18 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v10);
    }
    return started;
  }
  gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
  return v13;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::UpdateStatusLine  (binary VA: 0x14710a0)
// Original: gaia::Gaia_Osiris::UpdateStatusLine
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::UpdateStatusLine(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  int OsirisStatus;
  void *v4;
  int AccessToken;
  int result;
  void *v7;
  void *v8;
  int Instance;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_started;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef void *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint8_t _g4_t_v22[16];
  typedef uint8_t _g4_t_v23[80];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v11)) > _g4_s1 ? (8u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_started)) > _g4_s2 ? (8u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v13)) > _g4_s3 ? (8u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v14)) > _g4_s4 ? (8u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v15)) > _g4_s5 ? (12u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (17u + sizeof(_g4_t_v16)) > _g4_s6 ? (17u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v17)) > _g4_s7 ? (24u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v18)) > _g4_s8 ? (28u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v19)) > _g4_s9 ? (32u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v20)) > _g4_s10 ? (36u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v21)) > _g4_s11 ? (40u + sizeof(_g4_t_v21)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v22)) > _g4_s12 ? (44u + sizeof(_g4_t_v22)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v23)) > _g4_s13 ? (60u + sizeof(_g4_t_v23)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 17u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 44u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "status_line", (int)(uintptr_t)(&v16));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v17), 4);
    v2 = (void *)(v17 - 12);
    if ( (uint32_t *)(v17 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 4015);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v23, a2);
        started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v23);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v23);
        return started;
      }
      else
      {
        OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
        if ( OsirisStatus != 0 )
        {
          v13 = OsirisStatus;
          gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
          return v13;
        }
        else
        {
          v18 = (int)(uintptr_t)(&dword_213B814);
          v19 = (int)(uintptr_t)(&dword_213B814);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v22, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v20, (int)(uintptr_t)(v22));
          g4_std::string::assign_str(&v19, &v20);
          v4 = (void *)(v20 - 12);
          if ( (uint32_t *)(v20 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v4);
          }
          Json::Value::Destroy((Json::Value::Self *)v22);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "social", (int)(uintptr_t)(&v16) + 1);
          AccessToken = gaia::Gaia_Osiris::GetAccessToken(self, a2, &v21, (int)(uintptr_t)(&v18));
          v15 = (void *)(v21 - 12);
          if ( (uint32_t *)(v21 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
          {
            v14 = AccessToken;
            g4_std::string::Rep::M_destroy(v15);
            AccessToken = v14;
          }
          if ( AccessToken == 0 )
          {
            Instance = gaia::Gaia::GetInstance();
            AccessToken = gaia::Osiris::UpdateStatusLine(
                            *(gaia::BaseServiceManager::Self **)(Instance + 24),
                            (int)(uintptr_t)(&v18),
                            (int)(uintptr_t)(&v19),
                            (int)(uintptr_t)(a2));
          }
          v10 = AccessToken;
          gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
          result = v10;
          v7 = (void *)(v19 - 12);
          if ( (uint32_t *)(v19 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v7);
            result = v10;
          }
          v8 = (void *)(v18 - 12);
          if ( (uint32_t *)(v18 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
          {
            v11 = result;
            g4_std::string::Rep::M_destroy(v8);
            return v11;
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
// Function: gaia::Gaia_Osiris::UpdateProfile  (binary VA: 0x1471410)
// Original: gaia::Gaia_Osiris::UpdateProfile
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::UpdateProfile(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  int OsirisStatus;
  Json::Value::Self *v6;
  bool isNull;
  Json::Value::Self *v8;
  bool v9;
  Json::Value::Self *v10;
  bool v11;
  int AccessToken;
  int result;
  void *v14;
  void *v15;
  void *v16;
  void *v17;
  int Instance;
  typedef bool _g4_t_v19;
  typedef bool _g4_t_v20;
  typedef Json::Value::Self *_g4_t_v21;
  typedef Json::Value::Self *_g4_t_v22;
  typedef Json::Value::Self *_g4_t_started;
  typedef Json::Value::Self *_g4_t_v24;
  typedef Json::Value::Self *_g4_t_v25;
  typedef Json::Value::Self *_g4_t_v26;
  typedef Json::Value::Self *_g4_t_v27;
  typedef bool _g4_t_v28;
  typedef char *_g4_t_v29;
  typedef char *_g4_t_v30;
  typedef char *_g4_t_v31;
  typedef void *_g4_t_v32;
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
  typedef uint8_t _g4_t_v44[4];
  typedef int _g4_t_v45;
  typedef uint8_t _g4_t_v46[4];
  typedef int _g4_t_v47;
  typedef uint8_t _g4_t_v48[4];
  typedef int _g4_t_v49;
  typedef uint8_t _g4_t_v50[16];
  typedef uint8_t _g4_t_v51[16];
  typedef uint8_t _g4_t_v52[16];
  typedef uint8_t _g4_t_v53[96];
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (12u + sizeof(_g4_t_v19)) > _g4_s0 ? (12u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v20)) > _g4_s1 ? (12u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v21)) > _g4_s2 ? (16u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v22)) > _g4_s3 ? (16u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_started)) > _g4_s4 ? (16u + sizeof(_g4_t_started)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v24)) > _g4_s5 ? (16u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v25)) > _g4_s6 ? (16u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v26)) > _g4_s7 ? (16u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v27)) > _g4_s8 ? (16u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v28)) > _g4_s9 ? (16u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v29)) > _g4_s10 ? (20u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_v30)) > _g4_s11 ? (20u + sizeof(_g4_t_v30)) : _g4_s11,
    _g4_s13 = (20u + sizeof(_g4_t_v31)) > _g4_s12 ? (20u + sizeof(_g4_t_v31)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v32)) > _g4_s13 ? (28u + sizeof(_g4_t_v32)) : _g4_s13,
    _g4_s15 = (34u + sizeof(_g4_t_v33)) > _g4_s14 ? (34u + sizeof(_g4_t_v33)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v34)) > _g4_s15 ? (36u + sizeof(_g4_t_v34)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_v35)) > _g4_s16 ? (40u + sizeof(_g4_t_v35)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v36)) > _g4_s17 ? (52u + sizeof(_g4_t_v36)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v37)) > _g4_s18 ? (56u + sizeof(_g4_t_v37)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v38)) > _g4_s19 ? (60u + sizeof(_g4_t_v38)) : _g4_s19,
    _g4_s21 = (64u + sizeof(_g4_t_v39)) > _g4_s20 ? (64u + sizeof(_g4_t_v39)) : _g4_s20,
    _g4_s22 = (68u + sizeof(_g4_t_v40)) > _g4_s21 ? (68u + sizeof(_g4_t_v40)) : _g4_s21,
    _g4_s23 = (72u + sizeof(_g4_t_v41)) > _g4_s22 ? (72u + sizeof(_g4_t_v41)) : _g4_s22,
    _g4_s24 = (76u + sizeof(_g4_t_v42)) > _g4_s23 ? (76u + sizeof(_g4_t_v42)) : _g4_s23,
    _g4_s25 = (80u + sizeof(_g4_t_v43)) > _g4_s24 ? (80u + sizeof(_g4_t_v43)) : _g4_s24,
    _g4_s26 = (84u + sizeof(_g4_t_v44)) > _g4_s25 ? (84u + sizeof(_g4_t_v44)) : _g4_s25,
    _g4_s27 = (88u + sizeof(_g4_t_v45)) > _g4_s26 ? (88u + sizeof(_g4_t_v45)) : _g4_s26,
    _g4_s28 = (92u + sizeof(_g4_t_v46)) > _g4_s27 ? (92u + sizeof(_g4_t_v46)) : _g4_s27,
    _g4_s29 = (96u + sizeof(_g4_t_v47)) > _g4_s28 ? (96u + sizeof(_g4_t_v47)) : _g4_s28,
    _g4_s30 = (100u + sizeof(_g4_t_v48)) > _g4_s29 ? (100u + sizeof(_g4_t_v48)) : _g4_s29,
    _g4_s31 = (104u + sizeof(_g4_t_v49)) > _g4_s30 ? (104u + sizeof(_g4_t_v49)) : _g4_s30,
    _g4_s32 = (108u + sizeof(_g4_t_v50)) > _g4_s31 ? (108u + sizeof(_g4_t_v50)) : _g4_s31,
    _g4_s33 = (124u + sizeof(_g4_t_v51)) > _g4_s32 ? (124u + sizeof(_g4_t_v51)) : _g4_s32,
    _g4_s34 = (140u + sizeof(_g4_t_v52)) > _g4_s33 ? (140u + sizeof(_g4_t_v52)) : _g4_s33,
    _g4_s35 = (156u + sizeof(_g4_t_v53)) > _g4_s34 ? (156u + sizeof(_g4_t_v53)) : _g4_s34
  };
  alignas(16) uint8_t _g4_sf[_g4_s35];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 20u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 20u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 28u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 34u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 36u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 40u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 52u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 56u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 60u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 64u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 68u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 72u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 76u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 80u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 84u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 88u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 92u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 96u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 100u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 104u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 108u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 124u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 140u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 156u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "username", (int)(uintptr_t)(&v33));
    gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v36), 4);
    v2 = (void *)(v36 - 12);
    if ( (uint32_t *)(v36 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v36 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "language", (int)(uintptr_t)(&v33) + 1);
    gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v37), 4);
    v3 = (void *)(v37 - 12);
    if ( (uint32_t *)(v37 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "country", (int)(uintptr_t)(&v34));
    gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v38), 4);
    v4 = (void *)(v38 - 12);
    if ( (uint32_t *)(v38 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v38 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 4013);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v53, a2);
        started = (Json::Value::Self *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v53);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v53);
        return (int)(uintptr_t)(started);
      }
      else
      {
        OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
        if ( OsirisStatus != 0 )
        {
          v24 = (Json::Value::Self *)OsirisStatus;
          gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
          return (int)(uintptr_t)(v24);
        }
        else
        {
          v39 = (int)(uintptr_t)(&dword_213B814);
          v40 = (int)(uintptr_t)(&dword_213B814);
          v41 = (int)(uintptr_t)(&dword_213B814);
          v42 = (int)(uintptr_t)(&dword_213B814);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), "username", (int)(uintptr_t)(&v34) + 1);
          v6 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v43);
          isNull = Json::Value::isNull(v6);
          v32 = (void *)(v43 - 12);
          if ( (uint32_t *)(v43 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v43 - 4), 0xFFFFFFFF) <= 0 )
          {
            v20 = isNull;
            g4_std::string::Rep::M_destroy(v32);
            isNull = v20;
          }
          if ( !isNull )
          {
            gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v50, (const char *)a2);
            Json::Value::asString((Json::Value::Self *)v44, (int)(uintptr_t)(v50));
            g4_std::string::assign_str(&v40, v44);
            g4_std::string::Destroy(v44);
            Json::Value::Destroy((Json::Value::Self *)v50);
          }
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "language", (int)(uintptr_t)(&v34) + 2);
          v8 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v45);
          v9 = Json::Value::isNull(v8);
          v29 = (char *)(v45 - 12);
          if ( (uint32_t *)(v45 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
          {
            v19 = v9;
            g4_std::string::Rep::M_destroy(v29);
            v9 = v19;
          }
          if ( !v9 )
          {
            gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v51, (const char *)a2);
            Json::Value::asString((Json::Value::Self *)v46, (int)(uintptr_t)(v51));
            g4_std::string::assign_str(&v41, v46);
            g4_std::string::Destroy(v46);
            Json::Value::Destroy((Json::Value::Self *)v51);
          }
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), "country", (int)(uintptr_t)(&v34) + 3);
          v10 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v47);
          v11 = Json::Value::isNull(v10);
          v30 = (char *)(v47 - 12);
          if ( (uint32_t *)(v47 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v47 - 4), 0xFFFFFFFF) <= 0 )
          {
            v28 = v11;
            g4_std::string::Rep::M_destroy(v30);
            v11 = v28;
          }
          if ( !v11 )
          {
            gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v52, (const char *)a2);
            Json::Value::asString((Json::Value::Self *)v48, (int)(uintptr_t)(v52));
            g4_std::string::assign_str(&v42, v48);
            g4_std::string::Destroy(v48);
            Json::Value::Destroy((Json::Value::Self *)v52);
          }
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v49), "social", (int)(uintptr_t)(&v35));
          AccessToken = gaia::Gaia_Osiris::GetAccessToken(self, a2, &v49, (int)(uintptr_t)(&v39));
          v31 = (char *)(v49 - 12);
          if ( (uint32_t *)(v49 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v49 - 4), 0xFFFFFFFF) <= 0 )
          {
            v25 = (Json::Value::Self *)AccessToken;
            g4_std::string::Rep::M_destroy(v31);
            AccessToken = (int)(uintptr_t)(v25);
          }
          if ( AccessToken == 0 )
          {
            Instance = gaia::Gaia::GetInstance();
            AccessToken = gaia::Osiris::UpdateProfile(
                            *(gaia::BaseServiceManager::Self **)(Instance + 24),
                            (int)(uintptr_t)(&v39),
                            (int)(uintptr_t)(&v40),
                            (int)(uintptr_t)(&v41),
                            (int)(uintptr_t)(&v42),
                            (int)(uintptr_t)(a2));
          }
          v21 = (Json::Value::Self *)AccessToken;
          gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
          result = (int)(uintptr_t)(v21);
          v14 = (void *)(v42 - 12);
          if ( (uint32_t *)(v42 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v42 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v14);
            result = (int)(uintptr_t)(v21);
          }
          v15 = (void *)(v41 - 12);
          if ( (uint32_t *)(v41 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
          {
            v27 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v15);
            result = (int)(uintptr_t)(v27);
          }
          v16 = (void *)(v40 - 12);
          if ( (uint32_t *)(v40 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v40 - 4), 0xFFFFFFFF) <= 0 )
          {
            v26 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v16);
            result = (int)(uintptr_t)(v26);
          }
          v17 = (void *)(v39 - 12);
          if ( (uint32_t *)(v39 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
          {
            v22 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v17);
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
// Function: gaia::Gaia_Osiris::IgnoreRequest  (binary VA: 0x1471b30)
// Original: gaia::Gaia_Osiris::IgnoreRequest
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::IgnoreRequest(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  int OsirisStatus;
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
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "request_id", (int)(uintptr_t)(&v16));
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
        gaia::GaiaRequest::SetOperationCode(a2, 4012);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v24, a2);
        started = (char *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v24);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v24);
        return (int)(uintptr_t)(started);
      }
      else
      {
        OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
        if ( OsirisStatus != 0 )
        {
          v14 = (char *)OsirisStatus;
          gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
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
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "social", (int)(uintptr_t)(&v17) + 2);
          AccessToken = gaia::Gaia_Osiris::GetAccessToken(self, a2, &v22, (int)(uintptr_t)(&v19));
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
            AccessToken = gaia::Osiris::IgnoreRequest(
                            *(gaia::BaseServiceManager::Self **)(Instance + 24),
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
// Function: gaia::Gaia_Osiris::RejectRequest  (binary VA: 0x1471ec0)
// Original: gaia::Gaia_Osiris::RejectRequest
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::RejectRequest(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  int OsirisStatus;
  void *v4;
  int AccessToken;
  int result;
  void *v7;
  void *v8;
  int Instance;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_started;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef void *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint8_t _g4_t_v22[16];
  typedef uint8_t _g4_t_v23[80];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v11)) > _g4_s1 ? (8u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_started)) > _g4_s2 ? (8u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v13)) > _g4_s3 ? (8u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v14)) > _g4_s4 ? (8u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v15)) > _g4_s5 ? (12u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (17u + sizeof(_g4_t_v16)) > _g4_s6 ? (17u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v17)) > _g4_s7 ? (24u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v18)) > _g4_s8 ? (28u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v19)) > _g4_s9 ? (32u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v20)) > _g4_s10 ? (36u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v21)) > _g4_s11 ? (40u + sizeof(_g4_t_v21)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v22)) > _g4_s12 ? (44u + sizeof(_g4_t_v22)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v23)) > _g4_s13 ? (60u + sizeof(_g4_t_v23)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 17u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 44u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "request_id", (int)(uintptr_t)(&v16));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v17), 4);
    v2 = (void *)(v17 - 12);
    if ( (uint32_t *)(v17 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 4011);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v23, a2);
        started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v23);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v23);
        return started;
      }
      else
      {
        OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
        if ( OsirisStatus != 0 )
        {
          v13 = OsirisStatus;
          gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
          return v13;
        }
        else
        {
          v18 = (int)(uintptr_t)(&dword_213B814);
          v19 = (int)(uintptr_t)(&dword_213B814);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v22, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v20, (int)(uintptr_t)(v22));
          g4_std::string::assign_str(&v19, &v20);
          v4 = (void *)(v20 - 12);
          if ( (uint32_t *)(v20 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v4);
          }
          Json::Value::Destroy((Json::Value::Self *)v22);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "social", (int)(uintptr_t)(&v16) + 1);
          AccessToken = gaia::Gaia_Osiris::GetAccessToken(self, a2, &v21, (int)(uintptr_t)(&v18));
          v15 = (void *)(v21 - 12);
          if ( (uint32_t *)(v21 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
          {
            v14 = AccessToken;
            g4_std::string::Rep::M_destroy(v15);
            AccessToken = v14;
          }
          if ( AccessToken == 0 )
          {
            Instance = gaia::Gaia::GetInstance();
            AccessToken = gaia::Osiris::RejectRequest(
                            *(gaia::BaseServiceManager::Self **)(Instance + 24),
                            (int)(uintptr_t)(&v18),
                            (int)(uintptr_t)(&v19),
                            (int)(uintptr_t)(a2));
          }
          v10 = AccessToken;
          gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
          result = v10;
          v7 = (void *)(v19 - 12);
          if ( (uint32_t *)(v19 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v7);
            result = v10;
          }
          v8 = (void *)(v18 - 12);
          if ( (uint32_t *)(v18 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
          {
            v11 = result;
            g4_std::string::Rep::M_destroy(v8);
            return v11;
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
// Function: gaia::Gaia_Osiris::AcceptRequest  (binary VA: 0x1472230)
// Original: gaia::Gaia_Osiris::AcceptRequest
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::AcceptRequest(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  int OsirisStatus;
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
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "request_id", (int)(uintptr_t)(&v16));
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
        gaia::GaiaRequest::SetOperationCode(a2, 4010);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v24, a2);
        started = (char *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v24);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v24);
        return (int)(uintptr_t)(started);
      }
      else
      {
        OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
        if ( OsirisStatus != 0 )
        {
          v14 = (char *)OsirisStatus;
          gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
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
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "social", (int)(uintptr_t)(&v17) + 2);
          AccessToken = gaia::Gaia_Osiris::GetAccessToken(self, a2, &v22, (int)(uintptr_t)(&v19));
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
            AccessToken = gaia::Osiris::AcceptRequest(
                            *(gaia::BaseServiceManager::Self **)(Instance + 24),
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
// Function: gaia::Gaia_Osiris::CancelSentRequest  (binary VA: 0x14725c0)
// Original: gaia::Gaia_Osiris::CancelSentRequest
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::CancelSentRequest(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  int OsirisStatus;
  void *v4;
  int AccessToken;
  void *v6;
  int result;
  void *v8;
  void *v9;
  int Instance;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_started;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
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
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v12)) > _g4_s1 ? (8u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_started)) > _g4_s2 ? (8u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v14)) > _g4_s3 ? (8u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v15)) > _g4_s4 ? (8u + sizeof(_g4_t_v15)) : _g4_s4,
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
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
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
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "request_id", (int)(uintptr_t)(&v16));
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
        gaia::GaiaRequest::SetOperationCode(a2, 4009);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v24, a2);
        started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v24);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v24);
        return started;
      }
      else
      {
        OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
        if ( OsirisStatus != 0 )
        {
          v14 = OsirisStatus;
          gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
          return v14;
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
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), (char *)&unk_1B15112, (int)(uintptr_t)(&v17) + 2);
          AccessToken = gaia::Gaia_Osiris::GetAccessToken(self, a2, &v22, (int)(uintptr_t)(&v19));
          v6 = (void *)(v22 - 12);
          if ( (uint32_t *)(v22 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
          {
            v15 = AccessToken;
            g4_std::string::Rep::M_destroy(v6);
            AccessToken = v15;
          }
          if ( AccessToken == 0 )
          {
            Instance = gaia::Gaia::GetInstance();
            AccessToken = gaia::Osiris::CancelSentRequest(
                            *(gaia::BaseServiceManager::Self **)(Instance + 24),
                            (int)(uintptr_t)(&v19),
                            (int)(uintptr_t)(&v20),
                            (int)(uintptr_t)(a2));
          }
          v11 = AccessToken;
          gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
          result = v11;
          v8 = (void *)(v20 - 12);
          if ( (uint32_t *)(v20 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v8);
            result = v11;
          }
          v9 = (void *)(v19 - 12);
          if ( (uint32_t *)(v19 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
          {
            v12 = result;
            g4_std::string::Rep::M_destroy(v9);
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
// Function: gaia::Gaia_Osiris::ListSentRequests  (binary VA: 0x1472950)
// Original: gaia::Gaia_Osiris::ListSentRequests
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::ListSentRequests(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  int OsirisStatus;
  Json::Value::Self *v6;
  Json::Value::Self *v7;
  bool v8;
  Json::Value::Self *v9;
  bool v10;
  void *v11;
  int Instance;
  gaia::BaseJSONServiceResponse::Self *v13;
  gaia::BaseJSONServiceResponse::Self *v14;
  void *v15;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_ptr;
  typedef bool _g4_t_isNull;
  typedef bool _g4_t_v19;
  typedef bool _g4_t_v20;
  typedef void *_g4_t_v21;
  typedef void *_g4_t_v22;
  typedef void *_g4_t_v23;
  typedef void *_g4_t_started;
  typedef char _g4_t_v25;
  typedef int _g4_t_v26;
  typedef char _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef char *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v41;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v42;
  typedef int _g4_t_v43;
  typedef uint8_t _g4_t_v44[16];
  typedef uint8_t _g4_t_v45[16];
  typedef uint8_t _g4_t_v46[16];
  typedef uint8_t _g4_t_v47[96];
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_isNull)) > _g4_s1 ? (40u + sizeof(_g4_t_isNull)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v19)) > _g4_s2 ? (40u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v20)) > _g4_s3 ? (40u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v21)) > _g4_s4 ? (44u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v22)) > _g4_s5 ? (44u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v23)) > _g4_s6 ? (44u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_started)) > _g4_s7 ? (44u + sizeof(_g4_t_started)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v25)) > _g4_s8 ? (48u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v26)) > _g4_s9 ? (56u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v27)) > _g4_s10 ? (60u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (73u + sizeof(_g4_t_v28)) > _g4_s11 ? (73u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v29)) > _g4_s12 ? (76u + sizeof(_g4_t_v29)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v30)) > _g4_s13 ? (80u + sizeof(_g4_t_v30)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v31)) > _g4_s14 ? (88u + sizeof(_g4_t_v31)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v32)) > _g4_s15 ? (92u + sizeof(_g4_t_v32)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v33)) > _g4_s16 ? (96u + sizeof(_g4_t_v33)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v34)) > _g4_s17 ? (100u + sizeof(_g4_t_v34)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v35)) > _g4_s18 ? (104u + sizeof(_g4_t_v35)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v36)) > _g4_s19 ? (108u + sizeof(_g4_t_v36)) : _g4_s19,
    _g4_s21 = (112u + sizeof(_g4_t_v37)) > _g4_s20 ? (112u + sizeof(_g4_t_v37)) : _g4_s20,
    _g4_s22 = (116u + sizeof(_g4_t_v38)) > _g4_s21 ? (116u + sizeof(_g4_t_v38)) : _g4_s21,
    _g4_s23 = (120u + sizeof(_g4_t_v39)) > _g4_s22 ? (120u + sizeof(_g4_t_v39)) : _g4_s22,
    _g4_s24 = (124u + sizeof(_g4_t_v40)) > _g4_s23 ? (124u + sizeof(_g4_t_v40)) : _g4_s23,
    _g4_s25 = (128u + sizeof(_g4_t_v41)) > _g4_s24 ? (128u + sizeof(_g4_t_v41)) : _g4_s24,
    _g4_s26 = (132u + sizeof(_g4_t_v42)) > _g4_s25 ? (132u + sizeof(_g4_t_v42)) : _g4_s25,
    _g4_s27 = (136u + sizeof(_g4_t_v43)) > _g4_s26 ? (136u + sizeof(_g4_t_v43)) : _g4_s26,
    _g4_s28 = (140u + sizeof(_g4_t_v44)) > _g4_s27 ? (140u + sizeof(_g4_t_v44)) : _g4_s27,
    _g4_s29 = (156u + sizeof(_g4_t_v45)) > _g4_s28 ? (156u + sizeof(_g4_t_v45)) : _g4_s28,
    _g4_s30 = (172u + sizeof(_g4_t_v46)) > _g4_s29 ? (172u + sizeof(_g4_t_v46)) : _g4_s29,
    _g4_s31 = (188u + sizeof(_g4_t_v47)) > _g4_s30 ? (188u + sizeof(_g4_t_v47)) : _g4_s30
  };
  alignas(16) uint8_t _g4_sf[_g4_s31];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_isNull &isNull = *reinterpret_cast<_g4_t_isNull *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 44u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 44u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 73u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 76u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 80u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 88u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 92u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 96u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 100u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 104u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 108u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 112u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 116u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 120u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 124u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 128u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 132u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 136u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 140u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 156u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 172u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 188u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "request_type", (int)(uintptr_t)(&v28));
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v31), 1);
  v2 = (void *)(v31 - 12);
  if ( (uint32_t *)(v31 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "limit", (int)(uintptr_t)(&v28) + 1);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v32), 2);
  v3 = (void *)(v32 - 12);
  if ( (uint32_t *)(v32 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v32 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "offset", (int)(uintptr_t)(&v28) + 2);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v33), 2);
  v4 = (void *)(v33 - 12);
  if ( (uint32_t *)(v33 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) == 0 )
    return gaia::GaiaRequest::GetResponseCode(a2);
  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
  {
    gaia::GaiaRequest::SetOperationCode(a2, 4008);
    gaia::Gaia::GetInstance();
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v47, a2);
    started = (void *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v47);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v47);
    return (int)(uintptr_t)(started);
  }
  OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
  v21 = (void *)OsirisStatus;
  if ( OsirisStatus == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), (char *)&unk_1B15112, (int)(uintptr_t)(&v29));
    v41 = nullptr;
    v42 = nullptr;
    v43 = 0;
    v35 = nullptr;
    v36 = 0;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "request_type", (int)(uintptr_t)(&v29) + 1);
    v6 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v37);
    isNull = Json::Value::isNull(v6);
    g4_std::string::Destroy(&v37);
    v26 = 3;
    if ( !isNull )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v44, (const char *)a2);
      v26 = Json::Value::asInt((Json::Value::Self *)v44);
      Json::Value::Destroy((Json::Value::Self *)v44);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "limit", (int)(uintptr_t)(&v29) + 2);
    v7 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v38);
    v8 = Json::Value::isNull(v7);
    v22 = (void *)(v38 - 12);
    if ( (uint32_t *)(v38 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v38 - 4), 0xFFFFFFFF) <= 0 )
    {
      v20 = v8;
      g4_std::string::Rep::M_destroy(v22);
      v8 = v20;
    }
    v27 = 0;
    if ( !v8 )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v45, (const char *)a2);
      v27 = Json::Value::asUInt((Json::Value::Self *)v45);
      Json::Value::Destroy((Json::Value::Self *)v45);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "offset", (int)(uintptr_t)(&v29) + 3);
    v9 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v39);
    v10 = Json::Value::isNull(v9);
    v23 = (void *)(v39 - 12);
    if ( (uint32_t *)(v39 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
    {
      v19 = v10;
      g4_std::string::Rep::M_destroy(v23);
      v10 = v19;
    }
    v25 = 0;
    if ( !v10 )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v46, (const char *)a2);
      v25 = Json::Value::asUInt((Json::Value::Self *)v46);
      Json::Value::Destroy((Json::Value::Self *)v46);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "social", (int)(uintptr_t)(&v30));
    started = (void *)gaia::Gaia_Osiris::GetAccessToken(self, a2, &v40, (int)(uintptr_t)(&v34));
    v11 = (void *)(v40 - 12);
    if ( (uint32_t *)(v40 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v40 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v11);
    }
    if ( started != nullptr )
    {
      gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(started));
    }
    else
    {
      Instance = gaia::Gaia::GetInstance();
      started = (void *)gaia::Osiris::ListSentRequests(
                          *(gaia::BaseServiceManager::Self **)(Instance + 24),
                          (void **)&v35,
                          &v36,
                          (int)(uintptr_t)(&v34),
                          v26,
                          v27,
                          v25,
                          (int)(uintptr_t)(a2));
      if ( started == nullptr )
        started = (void *)gaia::BaseServiceManager::ParseMessages(v35, v36, (int)(uintptr_t)(&v41), 10);
      gaia::GaiaRequest::SetResponse(a2, (const std::vector<gaia::BaseJSONServiceResponse::Self> *)&v41);
      gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(started));
      free(v35);
    }
    v13 = v42;
    v14 = v41;
    if ( v42 != v41 )
    {
      do
      {
        ptr = v14;
        v14 = (gaia::BaseJSONServiceResponse::Self *)((char *)v14 + 20);
        gaia::BaseJSONServiceResponse::Destroy(ptr);
      }
      while ( v13 != v14 );
      v14 = v41;
    }
    if ( v14 != nullptr )
      opDelete(v14);
    v15 = (void *)(v34 - 12);
    if ( (uint32_t *)(v34 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v15);
    }
    return (int)(uintptr_t)(started);
  }
  gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
  return (int)(uintptr_t)(v21);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::ListRequests  (binary VA: 0x1473000)
// Original: gaia::Gaia_Osiris::ListRequests
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::ListRequests(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  int OsirisStatus;
  Json::Value::Self *v7;
  bool isNull;
  Json::Value::Self *v9;
  bool v10;
  Json::Value::Self *v11;
  bool v12;
  Json::Value::Self *v13;
  bool v14;
  void *v15;
  int Instance;
  gaia::BaseJSONServiceResponse::Self *v17;
  gaia::BaseJSONServiceResponse::Self *v18;
  void *v19;
  void *v20;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_ptr;
  typedef bool _g4_t_v23;
  typedef bool _g4_t_v24;
  typedef bool _g4_t_v25;
  typedef bool _g4_t_v26;
  typedef void *_g4_t_v27;
  typedef void *_g4_t_v28;
  typedef void *_g4_t_v29;
  typedef void *_g4_t_v30;
  typedef void *_g4_t_v31;
  typedef void *_g4_t_started;
  typedef char _g4_t_v33;
  typedef char _g4_t_v34;
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
  typedef char *_g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef uint8_t _g4_t_v51[4];
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v54;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef uint8_t _g4_t_v57[16];
  typedef uint8_t _g4_t_v58[16];
  typedef uint8_t _g4_t_v59[16];
  typedef uint8_t _g4_t_v60[16];
  typedef uint8_t _g4_t_v61[96];
  enum : size_t {
    _g4_s0 = 400u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (56u + sizeof(_g4_t_v23)) > _g4_s1 ? (56u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (56u + sizeof(_g4_t_v24)) > _g4_s2 ? (56u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v25)) > _g4_s3 ? (56u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v26)) > _g4_s4 ? (56u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v27)) > _g4_s5 ? (60u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v28)) > _g4_s6 ? (60u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v29)) > _g4_s7 ? (60u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v30)) > _g4_s8 ? (60u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v31)) > _g4_s9 ? (60u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_started)) > _g4_s10 ? (60u + sizeof(_g4_t_started)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v33)) > _g4_s11 ? (64u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v34)) > _g4_s12 ? (68u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v35)) > _g4_s13 ? (76u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (82u + sizeof(_g4_t_v36)) > _g4_s14 ? (82u + sizeof(_g4_t_v36)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v37)) > _g4_s15 ? (84u + sizeof(_g4_t_v37)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v38)) > _g4_s16 ? (88u + sizeof(_g4_t_v38)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v39)) > _g4_s17 ? (92u + sizeof(_g4_t_v39)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v40)) > _g4_s18 ? (104u + sizeof(_g4_t_v40)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v41)) > _g4_s19 ? (108u + sizeof(_g4_t_v41)) : _g4_s19,
    _g4_s21 = (112u + sizeof(_g4_t_v42)) > _g4_s20 ? (112u + sizeof(_g4_t_v42)) : _g4_s20,
    _g4_s22 = (116u + sizeof(_g4_t_v43)) > _g4_s21 ? (116u + sizeof(_g4_t_v43)) : _g4_s21,
    _g4_s23 = (120u + sizeof(_g4_t_v44)) > _g4_s22 ? (120u + sizeof(_g4_t_v44)) : _g4_s22,
    _g4_s24 = (124u + sizeof(_g4_t_v45)) > _g4_s23 ? (124u + sizeof(_g4_t_v45)) : _g4_s23,
    _g4_s25 = (128u + sizeof(_g4_t_v46)) > _g4_s24 ? (128u + sizeof(_g4_t_v46)) : _g4_s24,
    _g4_s26 = (132u + sizeof(_g4_t_v47)) > _g4_s25 ? (132u + sizeof(_g4_t_v47)) : _g4_s25,
    _g4_s27 = (136u + sizeof(_g4_t_v48)) > _g4_s26 ? (136u + sizeof(_g4_t_v48)) : _g4_s26,
    _g4_s28 = (140u + sizeof(_g4_t_v49)) > _g4_s27 ? (140u + sizeof(_g4_t_v49)) : _g4_s27,
    _g4_s29 = (144u + sizeof(_g4_t_v50)) > _g4_s28 ? (144u + sizeof(_g4_t_v50)) : _g4_s28,
    _g4_s30 = (148u + sizeof(_g4_t_v51)) > _g4_s29 ? (148u + sizeof(_g4_t_v51)) : _g4_s29,
    _g4_s31 = (152u + sizeof(_g4_t_v52)) > _g4_s30 ? (152u + sizeof(_g4_t_v52)) : _g4_s30,
    _g4_s32 = (156u + sizeof(_g4_t_v53)) > _g4_s31 ? (156u + sizeof(_g4_t_v53)) : _g4_s31,
    _g4_s33 = (160u + sizeof(_g4_t_v54)) > _g4_s32 ? (160u + sizeof(_g4_t_v54)) : _g4_s32,
    _g4_s34 = (164u + sizeof(_g4_t_v55)) > _g4_s33 ? (164u + sizeof(_g4_t_v55)) : _g4_s33,
    _g4_s35 = (168u + sizeof(_g4_t_v56)) > _g4_s34 ? (168u + sizeof(_g4_t_v56)) : _g4_s34,
    _g4_s36 = (172u + sizeof(_g4_t_v57)) > _g4_s35 ? (172u + sizeof(_g4_t_v57)) : _g4_s35,
    _g4_s37 = (188u + sizeof(_g4_t_v58)) > _g4_s36 ? (188u + sizeof(_g4_t_v58)) : _g4_s36,
    _g4_s38 = (204u + sizeof(_g4_t_v59)) > _g4_s37 ? (204u + sizeof(_g4_t_v59)) : _g4_s37,
    _g4_s39 = (220u + sizeof(_g4_t_v60)) > _g4_s38 ? (220u + sizeof(_g4_t_v60)) : _g4_s38,
    _g4_s40 = (236u + sizeof(_g4_t_v61)) > _g4_s39 ? (236u + sizeof(_g4_t_v61)) : _g4_s39
  };
  alignas(16) uint8_t _g4_sf[_g4_s40];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 56u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 56u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 56u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 60u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 60u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 60u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 60u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 60u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 64u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 68u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 76u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 82u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 84u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 88u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 92u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 104u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 108u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 112u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 116u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 120u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 124u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 128u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 132u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 136u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 140u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 144u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 148u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 152u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 156u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 160u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 164u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 168u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 172u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 188u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 204u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 220u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 236u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "request_type", (int)(uintptr_t)(&v36));
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v40), 1);
  v2 = (void *)(v40 - 12);
  if ( (uint32_t *)(v40 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v40 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "limit", (int)(uintptr_t)(&v36) + 1);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v41), 2);
  v3 = (void *)(v41 - 12);
  if ( (uint32_t *)(v41 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), "status", (int)(uintptr_t)(&v37));
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v42), 4);
  v4 = (void *)(v42 - 12);
  if ( (uint32_t *)(v42 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v42 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), "offset", (int)(uintptr_t)(&v37) + 1);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v43), 2);
  v5 = (void *)(v43 - 12);
  if ( (uint32_t *)(v43 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v43 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) == 0 )
    return gaia::GaiaRequest::GetResponseCode(a2);
  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
  {
    gaia::GaiaRequest::SetOperationCode(a2, 4007);
    gaia::Gaia::GetInstance();
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v61, a2);
    started = (void *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v61);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v61);
    return (int)(uintptr_t)(started);
  }
  OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
  v27 = (void *)OsirisStatus;
  if ( OsirisStatus == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), (char *)&unk_1B15112, (int)(uintptr_t)(&v37) + 2);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), (char *)&unk_1B15112, (int)(uintptr_t)(&v37) + 3);
    v54 = nullptr;
    v55 = nullptr;
    v56 = 0;
    v46 = nullptr;
    v47 = 0;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v48), "request_type", (int)(uintptr_t)(&v38));
    v7 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v48);
    isNull = Json::Value::isNull(v7);
    v28 = (void *)(v48 - 12);
    if ( (uint32_t *)(v48 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v48 - 4), 0xFFFFFFFF) <= 0 )
    {
      v26 = isNull;
      g4_std::string::Rep::M_destroy(v28);
      isNull = v26;
    }
    v35 = 3;
    if ( !isNull )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v57, (const char *)a2);
      v35 = Json::Value::asInt((Json::Value::Self *)v57);
      Json::Value::Destroy((Json::Value::Self *)v57);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v49), "limit", (int)(uintptr_t)(&v38) + 1);
    v9 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v49);
    v10 = Json::Value::isNull(v9);
    v29 = (void *)(v49 - 12);
    if ( (uint32_t *)(v49 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v49 - 4), 0xFFFFFFFF) <= 0 )
    {
      v24 = v10;
      g4_std::string::Rep::M_destroy(v29);
      v10 = v24;
    }
    v34 = 0;
    if ( !v10 )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v58, (const char *)a2);
      v34 = Json::Value::asUInt((Json::Value::Self *)v58);
      Json::Value::Destroy((Json::Value::Self *)v58);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v50), "status", (int)(uintptr_t)(&v38) + 2);
    v11 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v50);
    v12 = Json::Value::isNull(v11);
    v30 = (void *)(v50 - 12);
    if ( (uint32_t *)(v50 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v50 - 4), 0xFFFFFFFF) <= 0 )
    {
      v25 = v12;
      g4_std::string::Rep::M_destroy(v30);
      v12 = v25;
    }
    if ( !v12 )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v59, (const char *)a2);
      Json::Value::asString((Json::Value::Self *)v51, (int)(uintptr_t)(v59));
      g4_std::string::assign_str(&v45, v51);
      g4_std::string::Destroy(v51);
      Json::Value::Destroy((Json::Value::Self *)v59);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v52), "offset", (int)(uintptr_t)(&v38) + 3);
    v13 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v52);
    v14 = Json::Value::isNull(v13);
    v31 = (void *)(v52 - 12);
    if ( (uint32_t *)(v52 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v52 - 4), 0xFFFFFFFF) <= 0 )
    {
      v23 = v14;
      g4_std::string::Rep::M_destroy(v31);
      v14 = v23;
    }
    v33 = 0;
    if ( !v14 )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v60, (const char *)a2);
      v33 = Json::Value::asUInt((Json::Value::Self *)v60);
      Json::Value::Destroy((Json::Value::Self *)v60);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v53), "social", (int)(uintptr_t)(&v39));
    started = (void *)gaia::Gaia_Osiris::GetAccessToken(self, a2, &v53, (int)(uintptr_t)(&v44));
    v15 = (void *)(v53 - 12);
    if ( (uint32_t *)(v53 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v53 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v15);
    }
    if ( started != nullptr )
    {
      gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(started));
    }
    else
    {
      Instance = gaia::Gaia::GetInstance();
      started = (void *)gaia::Osiris::ListRequests(
                          *(gaia::BaseServiceManager::Self **)(Instance + 24),
                          (void **)&v46,
                          &v47,
                          (int)(uintptr_t)(&v44),
                          v35,
                          v34,
                          v33,
                          (int)(uintptr_t)(&v45),
                          (int)(uintptr_t)(a2));
      if ( started == nullptr )
        started = (void *)gaia::BaseServiceManager::ParseMessages(v46, v47, (int)(uintptr_t)(&v54), 10);
      gaia::GaiaRequest::SetResponse(a2, (const std::vector<gaia::BaseJSONServiceResponse::Self> *)&v54);
      gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(started));
      free(v46);
    }
    v17 = v55;
    v18 = v54;
    if ( v55 != v54 )
    {
      do
      {
        ptr = v18;
        v18 = (gaia::BaseJSONServiceResponse::Self *)((char *)v18 + 20);
        gaia::BaseJSONServiceResponse::Destroy(ptr);
      }
      while ( v17 != v18 );
      v18 = v54;
    }
    if ( v18 != nullptr )
      opDelete(v18);
    v19 = (void *)(v45 - 12);
    if ( (uint32_t *)(v45 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v19);
    }
    v20 = (void *)(v44 - 12);
    if ( (uint32_t *)(v44 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v44 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v20);
    }
    return (int)(uintptr_t)(started);
  }
  gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
  return (int)(uintptr_t)(v27);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::Import  (binary VA: 0x14738d0)
// Original: gaia::Gaia_Osiris::Import
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::Import(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  int OsirisStatus;
  void *v6;
  void *v7;
  void *v8;
  void *v9;
  int Instance;
  gaia::BaseJSONServiceResponse::Self *v11;
  gaia::BaseJSONServiceResponse::Self *v12;
  void *v13;
  void *v14;
  void *v15;
  void *v16;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_ptr;
  typedef char *_g4_t_v19;
  typedef char *_g4_t_started;
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
  typedef char *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef void *_g4_t_v37;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef uint8_t _g4_t_v40[16];
  typedef uint8_t _g4_t_v41[16];
  typedef uint8_t _g4_t_v42[16];
  typedef uint8_t _g4_t_v43[96];
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v19)) > _g4_s1 ? (36u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_started)) > _g4_s2 ? (36u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (57u + sizeof(_g4_t_v21)) > _g4_s3 ? (57u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v22)) > _g4_s4 ? (60u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v23)) > _g4_s5 ? (64u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v24)) > _g4_s6 ? (76u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v25)) > _g4_s7 ? (80u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (84u + sizeof(_g4_t_v26)) > _g4_s8 ? (84u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (88u + sizeof(_g4_t_v27)) > _g4_s9 ? (88u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_v28)) > _g4_s10 ? (92u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v29)) > _g4_s11 ? (96u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (100u + sizeof(_g4_t_v30)) > _g4_s12 ? (100u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (104u + sizeof(_g4_t_v31)) > _g4_s13 ? (104u + sizeof(_g4_t_v31)) : _g4_s13,
    _g4_s15 = (108u + sizeof(_g4_t_v32)) > _g4_s14 ? (108u + sizeof(_g4_t_v32)) : _g4_s14,
    _g4_s16 = (112u + sizeof(_g4_t_v33)) > _g4_s15 ? (112u + sizeof(_g4_t_v33)) : _g4_s15,
    _g4_s17 = (116u + sizeof(_g4_t_v34)) > _g4_s16 ? (116u + sizeof(_g4_t_v34)) : _g4_s16,
    _g4_s18 = (120u + sizeof(_g4_t_v35)) > _g4_s17 ? (120u + sizeof(_g4_t_v35)) : _g4_s17,
    _g4_s19 = (124u + sizeof(_g4_t_v36)) > _g4_s18 ? (124u + sizeof(_g4_t_v36)) : _g4_s18,
    _g4_s20 = (128u + sizeof(_g4_t_v37)) > _g4_s19 ? (128u + sizeof(_g4_t_v37)) : _g4_s19,
    _g4_s21 = (132u + sizeof(_g4_t_v38)) > _g4_s20 ? (132u + sizeof(_g4_t_v38)) : _g4_s20,
    _g4_s22 = (136u + sizeof(_g4_t_v39)) > _g4_s21 ? (136u + sizeof(_g4_t_v39)) : _g4_s21,
    _g4_s23 = (140u + sizeof(_g4_t_v40)) > _g4_s22 ? (140u + sizeof(_g4_t_v40)) : _g4_s22,
    _g4_s24 = (156u + sizeof(_g4_t_v41)) > _g4_s23 ? (156u + sizeof(_g4_t_v41)) : _g4_s23,
    _g4_s25 = (172u + sizeof(_g4_t_v42)) > _g4_s24 ? (172u + sizeof(_g4_t_v42)) : _g4_s24,
    _g4_s26 = (188u + sizeof(_g4_t_v43)) > _g4_s25 ? (188u + sizeof(_g4_t_v43)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 36u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 57u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 60u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 64u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 76u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 80u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 84u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 88u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 92u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 96u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 100u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 104u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 108u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 112u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 116u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 120u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 124u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 128u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 132u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 136u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 140u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 156u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 172u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 188u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "from_credential", (int)(uintptr_t)(&v21));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v24), 4);
  v2 = (void *)(v24 - 12);
  if ( (uint32_t *)(v24 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "secret", (int)(uintptr_t)(&v21) + 1);
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v25), 4);
  v3 = (void *)(v25 - 12);
  if ( (uint32_t *)(v25 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "import_type", (int)(uintptr_t)(&v21) + 2);
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v26), 4);
  v4 = (void *)(v26 - 12);
  if ( (uint32_t *)(v26 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) == 0 )
    return gaia::GaiaRequest::GetResponseCode(a2);
  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
  {
    gaia::GaiaRequest::SetOperationCode(a2, 4005);
    gaia::Gaia::GetInstance();
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v43, a2);
    started = (char *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v43);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v43);
    return (int)(uintptr_t)(started);
  }
  OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
  v19 = (char *)OsirisStatus;
  if ( OsirisStatus == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), (char *)&unk_1B15112, (int)(uintptr_t)(&v22));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), (char *)&unk_1B15112, (int)(uintptr_t)(&v22) + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), (char *)&unk_1B15112, (int)(uintptr_t)(&v22) + 2);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), (char *)&unk_1B15112, (int)(uintptr_t)(&v22) + 3);
    v37 = nullptr;
    v38 = nullptr;
    v39 = 0;
    v31 = nullptr;
    v32 = 0;
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v40, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v33, (int)(uintptr_t)(v40));
    g4_std::string::assign_str(&v28, &v33);
    v6 = (void *)(v33 - 12);
    if ( (uint32_t *)(v33 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    Json::Value::Destroy((Json::Value::Self *)v40);
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v41, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v34, (int)(uintptr_t)(v41));
    g4_std::string::assign_str(&v29, &v34);
    v7 = (void *)(v34 - 12);
    if ( (uint32_t *)(v34 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    Json::Value::Destroy((Json::Value::Self *)v41);
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v42, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v35, (int)(uintptr_t)(v42));
    g4_std::string::assign_str(&v30, &v35);
    v8 = (void *)(v35 - 12);
    if ( (uint32_t *)(v35 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v35 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v8);
    }
    Json::Value::Destroy((Json::Value::Self *)v42);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "social", (int)(uintptr_t)(&v23));
    started = (char *)gaia::Gaia_Osiris::GetAccessToken(self, a2, &v36, (int)(uintptr_t)(&v27));
    v9 = (void *)(v36 - 12);
    if ( (uint32_t *)(v36 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v36 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v9);
    }
    if ( started != nullptr )
    {
      gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(started));
    }
    else
    {
      Instance = gaia::Gaia::GetInstance();
      started = (char *)gaia::Osiris::Import(
                          *(gaia::BaseServiceManager::Self **)(Instance + 24),
                          (void **)&v31,
                          &v32,
                          (int)(uintptr_t)(&v27),
                          (int)(uintptr_t)(&v28),
                          (int)(uintptr_t)(&v29),
                          (int)(uintptr_t)(&v30),
                          (int)(uintptr_t)(a2));
      if ( started == nullptr )
        started = (char *)gaia::BaseServiceManager::ParseMessages(v31, v32, (int)(uintptr_t)(&v37), 6);
      gaia::GaiaRequest::SetResponse(a2, (const std::vector<gaia::BaseJSONServiceResponse::Self> *)&v37);
      gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(started));
      free(v31);
    }
    v11 = v38;
    v12 = (gaia::BaseJSONServiceResponse::Self *)v37;
    if ( v38 != v37 )
    {
      do
      {
        ptr = v12;
        v12 = (gaia::BaseJSONServiceResponse::Self *)((char *)v12 + 20);
        gaia::BaseJSONServiceResponse::Destroy(ptr);
      }
      while ( v11 != v12 );
      v12 = (gaia::BaseJSONServiceResponse::Self *)v37;
    }
    if ( v12 != nullptr )
      opDelete(v12);
    v13 = (void *)(v30 - 12);
    if ( (uint32_t *)(v30 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v13);
    }
    v14 = (void *)(v29 - 12);
    if ( (uint32_t *)(v29 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v14);
    }
    v15 = (void *)(v28 - 12);
    if ( (uint32_t *)(v28 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v15);
    }
    v16 = (void *)(v27 - 12);
    if ( (uint32_t *)(v27 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v16);
    }
    return (int)(uintptr_t)(started);
  }
  gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
  return (int)(uintptr_t)(v19);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::ImportFriends  (binary VA: 0x1473fe0)
// Original: gaia::Gaia_Osiris::ImportFriends
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::ImportFriends(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  int OsirisStatus;
  void *v6;
  void *v7;
  void *v8;
  int Instance;
  gaia::BaseJSONServiceResponse::Self *v10;
  gaia::BaseJSONServiceResponse::Self *v11;
  void *v12;
  void *v13;
  void *v14;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_ptr;
  typedef int _g4_t_v17;
  typedef int _g4_t_started;
  typedef int _g4_t_v19;
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
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef uint8_t _g4_t_v36[16];
  typedef uint8_t _g4_t_v37[16];
  typedef uint8_t _g4_t_v38[16];
  typedef uint8_t _g4_t_v39[96];
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v17)) > _g4_s1 ? (36u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_started)) > _g4_s2 ? (36u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v19)) > _g4_s3 ? (40u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v20)) > _g4_s4 ? (52u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v21)) > _g4_s5 ? (56u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v22)) > _g4_s6 ? (68u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v23)) > _g4_s7 ? (72u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v24)) > _g4_s8 ? (76u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v25)) > _g4_s9 ? (80u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v26)) > _g4_s10 ? (84u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (88u + sizeof(_g4_t_v27)) > _g4_s11 ? (88u + sizeof(_g4_t_v27)) : _g4_s11,
    _g4_s13 = (92u + sizeof(_g4_t_v28)) > _g4_s12 ? (92u + sizeof(_g4_t_v28)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v29)) > _g4_s13 ? (96u + sizeof(_g4_t_v29)) : _g4_s13,
    _g4_s15 = (100u + sizeof(_g4_t_v30)) > _g4_s14 ? (100u + sizeof(_g4_t_v30)) : _g4_s14,
    _g4_s16 = (104u + sizeof(_g4_t_v31)) > _g4_s15 ? (104u + sizeof(_g4_t_v31)) : _g4_s15,
    _g4_s17 = (108u + sizeof(_g4_t_v32)) > _g4_s16 ? (108u + sizeof(_g4_t_v32)) : _g4_s16,
    _g4_s18 = (112u + sizeof(_g4_t_v33)) > _g4_s17 ? (112u + sizeof(_g4_t_v33)) : _g4_s17,
    _g4_s19 = (116u + sizeof(_g4_t_v34)) > _g4_s18 ? (116u + sizeof(_g4_t_v34)) : _g4_s18,
    _g4_s20 = (120u + sizeof(_g4_t_v35)) > _g4_s19 ? (120u + sizeof(_g4_t_v35)) : _g4_s19,
    _g4_s21 = (124u + sizeof(_g4_t_v36)) > _g4_s20 ? (124u + sizeof(_g4_t_v36)) : _g4_s20,
    _g4_s22 = (140u + sizeof(_g4_t_v37)) > _g4_s21 ? (140u + sizeof(_g4_t_v37)) : _g4_s21,
    _g4_s23 = (156u + sizeof(_g4_t_v38)) > _g4_s22 ? (156u + sizeof(_g4_t_v38)) : _g4_s22,
    _g4_s24 = (172u + sizeof(_g4_t_v39)) > _g4_s23 ? (172u + sizeof(_g4_t_v39)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 52u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 56u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 68u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 72u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 76u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 80u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 84u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 88u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 92u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 96u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 100u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 104u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 108u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 112u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 116u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 120u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 124u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 140u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 156u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 172u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "from_credential", (int)(uintptr_t)(&v20));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v22), 4);
  v2 = (void *)(v22 - 12);
  if ( (uint32_t *)(v22 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "secret", (int)(uintptr_t)(&v20) + 1);
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v23), 4);
  v3 = (void *)(v23 - 12);
  if ( (uint32_t *)(v23 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "connection_type", (int)(uintptr_t)(&v20) + 2);
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v24), 1);
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
    gaia::GaiaRequest::SetOperationCode(a2, 4004);
    gaia::Gaia::GetInstance();
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v39, a2);
    started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v39);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v39);
    return started;
  }
  OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
  v17 = OsirisStatus;
  if ( OsirisStatus == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), (char *)&unk_1B15112, (int)(uintptr_t)(&v20) + 3);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), (char *)&unk_1B15112, (int)(uintptr_t)(&v21));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), (char *)&unk_1B15112, (int)(uintptr_t)(&v21) + 1);
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
    Json::Value::asString((Json::Value::Self *)&v31, (int)(uintptr_t)(v37));
    g4_std::string::assign_str(&v27, &v31);
    v7 = (void *)(v31 - 12);
    if ( (uint32_t *)(v31 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    Json::Value::Destroy((Json::Value::Self *)v37);
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v38, (const char *)a2);
    v19 = Json::Value::asInt((Json::Value::Self *)v38);
    Json::Value::Destroy((Json::Value::Self *)v38);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "social", (int)(uintptr_t)(&v21) + 2);
    started = gaia::Gaia_Osiris::GetAccessToken(self, a2, &v32, (int)(uintptr_t)(&v25));
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
      started = gaia::Osiris::ImportFriends(
                  *(gaia::BaseServiceManager::Self **)(Instance + 24),
                  (void **)&v28,
                  &v29,
                  (int)(uintptr_t)(&v25),
                  v19,
                  (int)(uintptr_t)(&v26),
                  (int)(uintptr_t)(&v27),
                  (int)(uintptr_t)(a2));
      if ( started == 0 )
        started = gaia::BaseServiceManager::ParseMessages(v28, v29, (int)(uintptr_t)(&v33), 6);
      gaia::GaiaRequest::SetResponse(a2, (const std::vector<gaia::BaseJSONServiceResponse::Self> *)&v33);
      gaia::GaiaRequest::SetResponseCode(a2, started);
      free(v28);
    }
    v10 = v34;
    v11 = (gaia::BaseJSONServiceResponse::Self *)v33;
    if ( v34 != v33 )
    {
      do
      {
        ptr = v11;
        v11 = (gaia::BaseJSONServiceResponse::Self *)((char *)v11 + 20);
        gaia::BaseJSONServiceResponse::Destroy(ptr);
      }
      while ( v10 != v11 );
      v11 = (gaia::BaseJSONServiceResponse::Self *)v33;
    }
    if ( v11 != nullptr )
      opDelete(v11);
    v12 = (void *)(v27 - 12);
    if ( (uint32_t *)(v27 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v12);
    }
    v13 = (void *)(v26 - 12);
    if ( (uint32_t *)(v26 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v13);
    }
    v14 = (void *)(v25 - 12);
    if ( (uint32_t *)(v25 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v14);
    }
    return started;
  }
  gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
  return v17;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::ConnectionExists  (binary VA: 0x1474630)
// Original: gaia::Gaia_Osiris::ConnectionExists
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::ConnectionExists(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  int OsirisStatus;
  int AccessToken;
  void *v6;
  int result;
  void *v8;
  void *v9;
  int Instance;
  typedef Json::Value::Self *_g4_t_v11;
  typedef Json::Value::Self *_g4_t_v12;
  typedef Json::Value::Self *_g4_t_started;
  typedef Json::Value::Self *_g4_t_v14;
  typedef Json::Value::Self *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint8_t _g4_t_v23[4];
  typedef int _g4_t_v24;
  typedef uint8_t _g4_t_v25[16];
  typedef uint8_t _g4_t_v26[16];
  typedef uint8_t _g4_t_v27[96];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v12)) > _g4_s1 ? (8u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_started)) > _g4_s2 ? (8u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v14)) > _g4_s3 ? (8u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v15)) > _g4_s4 ? (8u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v16)) > _g4_s5 ? (12u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (26u + sizeof(_g4_t_v17)) > _g4_s6 ? (26u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v18)) > _g4_s7 ? (28u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v19)) > _g4_s8 ? (36u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v20)) > _g4_s9 ? (40u + sizeof(_g4_t_v20)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v21)) > _g4_s10 ? (44u + sizeof(_g4_t_v21)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v22)) > _g4_s11 ? (48u + sizeof(_g4_t_v22)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v23)) > _g4_s12 ? (52u + sizeof(_g4_t_v23)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v24)) > _g4_s13 ? (56u + sizeof(_g4_t_v24)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v25)) > _g4_s14 ? (60u + sizeof(_g4_t_v25)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v26)) > _g4_s15 ? (76u + sizeof(_g4_t_v26)) : _g4_s15,
    _g4_s17 = (92u + sizeof(_g4_t_v27)) > _g4_s16 ? (92u + sizeof(_g4_t_v27)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 26u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 36u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 48u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 52u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 56u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 60u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 76u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 92u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "connection_type", (int)(uintptr_t)(&v17));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v19), 1);
    v2 = (void *)(v19 - 12);
    if ( (uint32_t *)(v19 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "target_credential", (int)(uintptr_t)(&v17) + 1);
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
        gaia::GaiaRequest::SetOperationCode(a2, 4003);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v27, a2);
        started = (Json::Value::Self *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v27);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v27);
        return (int)(uintptr_t)(started);
      }
      else
      {
        OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
        if ( OsirisStatus != 0 )
        {
          v14 = (Json::Value::Self *)OsirisStatus;
          gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
          return (int)(uintptr_t)(v14);
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), (char *)&unk_1B15112, (int)(uintptr_t)(&v18));
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), (char *)&unk_1B15112, (int)(uintptr_t)(&v18) + 1);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v25, (const char *)a2);
          v16 = Json::Value::asInt((Json::Value::Self *)v25);
          Json::Value::Destroy((Json::Value::Self *)v25);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v26, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)v23, (int)(uintptr_t)(v26));
          g4_std::string::assign_str(&v22, v23);
          g4_std::string::Destroy(v23);
          Json::Value::Destroy((Json::Value::Self *)v26);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "social", (int)(uintptr_t)(&v18) + 2);
          AccessToken = gaia::Gaia_Osiris::GetAccessToken(self, a2, &v24, (int)(uintptr_t)(&v21));
          v6 = (void *)(v24 - 12);
          if ( (uint32_t *)(v24 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
          {
            v15 = (Json::Value::Self *)AccessToken;
            g4_std::string::Rep::M_destroy(v6);
            AccessToken = (int)(uintptr_t)(v15);
          }
          if ( AccessToken == 0 )
          {
            Instance = gaia::Gaia::GetInstance();
            AccessToken = gaia::Osiris::ConnectionExists(
                            *(gaia::BaseServiceManager::Self **)(Instance + 24),
                            (int)(uintptr_t)(&v21),
                            v16,
                            (int)(uintptr_t)(&v22),
                            (int)(uintptr_t)(a2));
          }
          v11 = (Json::Value::Self *)AccessToken;
          gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
          result = (int)(uintptr_t)(v11);
          v8 = (void *)(v22 - 12);
          if ( (uint32_t *)(v22 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v8);
            result = (int)(uintptr_t)(v11);
          }
          v9 = (void *)(v21 - 12);
          if ( (uint32_t *)(v21 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
          {
            v12 = (Json::Value::Self *)result;
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
// Function: gaia::Gaia_Osiris::DeleteConnection  (binary VA: 0x1474a30)
// Original: gaia::Gaia_Osiris::DeleteConnection
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::DeleteConnection(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  int OsirisStatus;
  void *v5;
  int Instance;
  int result;
  void *v8;
  void *v9;
  typedef Json::Value::Self *_g4_t_AccessToken;
  typedef Json::Value::Self *_g4_t_v11;
  typedef Json::Value::Self *_g4_t_started;
  typedef Json::Value::Self *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint8_t _g4_t_v23[16];
  typedef uint8_t _g4_t_v24[16];
  typedef uint8_t _g4_t_v25[96];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (8u + sizeof(_g4_t_AccessToken)) > _g4_s0 ? (8u + sizeof(_g4_t_AccessToken)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v11)) > _g4_s1 ? (8u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_started)) > _g4_s2 ? (8u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v13)) > _g4_s3 ? (8u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v14)) > _g4_s4 ? (12u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (26u + sizeof(_g4_t_v15)) > _g4_s5 ? (26u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v16)) > _g4_s6 ? (28u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v17)) > _g4_s7 ? (36u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v18)) > _g4_s8 ? (40u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v19)) > _g4_s9 ? (44u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v20)) > _g4_s10 ? (48u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v21)) > _g4_s11 ? (52u + sizeof(_g4_t_v21)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v22)) > _g4_s12 ? (56u + sizeof(_g4_t_v22)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v23)) > _g4_s13 ? (60u + sizeof(_g4_t_v23)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v24)) > _g4_s14 ? (76u + sizeof(_g4_t_v24)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v25)) > _g4_s15 ? (92u + sizeof(_g4_t_v25)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_AccessToken &AccessToken = *reinterpret_cast<_g4_t_AccessToken *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 26u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 48u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 52u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 56u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 76u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 92u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "target_credential", (int)(uintptr_t)(&v15));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v17), 4);
    v2 = (void *)(v17 - 12);
    if ( (uint32_t *)(v17 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "connection_type", (int)(uintptr_t)(&v15) + 1);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v18), 1);
    v3 = (void *)(v18 - 12);
    if ( (uint32_t *)(v18 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 4002);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v25, a2);
        started = (Json::Value::Self *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v25);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v25);
        return (int)(uintptr_t)(started);
      }
      else
      {
        OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
        if ( OsirisStatus != 0 )
        {
          v13 = (Json::Value::Self *)OsirisStatus;
          gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
          return (int)(uintptr_t)(v13);
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), (char *)&unk_1B15112, (int)(uintptr_t)(&v16));
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), (char *)&unk_1B15112, (int)(uintptr_t)(&v16) + 1);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v23, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v21, (int)(uintptr_t)(v23));
          g4_std::string::assign_str(&v20, &v21);
          v5 = (void *)(v21 - 12);
          if ( (uint32_t *)(v21 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v5);
          }
          Json::Value::Destroy((Json::Value::Self *)v23);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v24, (const char *)a2);
          v14 = Json::Value::asInt((Json::Value::Self *)v24);
          Json::Value::Destroy((Json::Value::Self *)v24);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "social", (int)(uintptr_t)(&v16) + 2);
          AccessToken = (Json::Value::Self *)gaia::Gaia_Osiris::GetAccessToken(self, a2, &v22, (int)(uintptr_t)(&v19));
          g4_std::string::Destroy(&v22);
          if ( AccessToken == nullptr )
          {
            Instance = gaia::Gaia::GetInstance();
            AccessToken = (Json::Value::Self *)gaia::Osiris::DeleteConnection(
                                           *(gaia::BaseServiceManager::Self **)(Instance + 24),
                                           (int)(uintptr_t)(&v19),
                                           v14,
                                           (int)(uintptr_t)(&v20),
                                           (int)(uintptr_t)(a2));
          }
          gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(AccessToken));
          result = (int)(uintptr_t)(AccessToken);
          v8 = (void *)(v20 - 12);
          if ( (uint32_t *)(v20 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v8);
            result = (int)(uintptr_t)(AccessToken);
          }
          v9 = (void *)(v19 - 12);
          if ( (uint32_t *)(v19 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
          {
            v11 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v9);
            return (int)(uintptr_t)(v11);
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
// Function: gaia::Gaia_Osiris::ListConnections  (binary VA: 0x1474e40)
// Original: gaia::Gaia_Osiris::ListConnections
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::ListConnections(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  void *v6;
  int OsirisStatus;
  int v8;
  void *v9;
  Json::Value::Self *v10;
  bool isNull;
  Json::Value::Self *v12;
  bool v13;
  Json::Value::Self *v14;
  bool v15;
  Json::Value::Self *v16;
  bool v17;
  int Instance;
  gaia::BaseJSONServiceResponse::Self *v19;
  gaia::BaseJSONServiceResponse::Self *v20;
  void *v21;
  Json::Value::Self *v23;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_ptr;
  typedef bool _g4_t_v25;
  typedef bool _g4_t_v26;
  typedef bool _g4_t_v27;
  typedef bool _g4_t_v28;
  typedef void *_g4_t_v29;
  typedef void *_g4_t_v30;
  typedef void *_g4_t_v31;
  typedef void *_g4_t_v32;
  typedef void *_g4_t_v33;
  typedef void *_g4_t_AccessToken;
  typedef void *_g4_t_started;
  typedef char _g4_t_v36;
  typedef char _g4_t_v37;
  typedef char _g4_t_v38;
  typedef char _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef uint8_t _g4_t_v44[7];
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef char *_g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef char _g4_t_v55[4];
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef void *_g4_t_v62;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v63;
  typedef int _g4_t_v64;
  typedef uint8_t _g4_t_v65[16];
  typedef uint8_t _g4_t_v66[16];
  typedef uint8_t _g4_t_v67[16];
  typedef uint8_t _g4_t_v68[16];
  typedef uint8_t _g4_t_v69[96];
  enum : size_t {
    _g4_s0 = 416u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (52u + sizeof(_g4_t_v25)) > _g4_s1 ? (52u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (52u + sizeof(_g4_t_v26)) > _g4_s2 ? (52u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v27)) > _g4_s3 ? (52u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v28)) > _g4_s4 ? (52u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v29)) > _g4_s5 ? (56u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v30)) > _g4_s6 ? (56u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v31)) > _g4_s7 ? (56u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v32)) > _g4_s8 ? (56u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v33)) > _g4_s9 ? (56u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_AccessToken)) > _g4_s10 ? (56u + sizeof(_g4_t_AccessToken)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_started)) > _g4_s11 ? (56u + sizeof(_g4_t_started)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v36)) > _g4_s12 ? (60u + sizeof(_g4_t_v36)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v37)) > _g4_s13 ? (64u + sizeof(_g4_t_v37)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v38)) > _g4_s14 ? (68u + sizeof(_g4_t_v38)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v39)) > _g4_s15 ? (72u + sizeof(_g4_t_v39)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v40)) > _g4_s16 ? (76u + sizeof(_g4_t_v40)) : _g4_s16,
    _g4_s18 = (83u + sizeof(_g4_t_v41)) > _g4_s17 ? (83u + sizeof(_g4_t_v41)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v42)) > _g4_s18 ? (84u + sizeof(_g4_t_v42)) : _g4_s18,
    _g4_s20 = (88u + sizeof(_g4_t_v43)) > _g4_s19 ? (88u + sizeof(_g4_t_v43)) : _g4_s19,
    _g4_s21 = (92u + sizeof(_g4_t_v44)) > _g4_s20 ? (92u + sizeof(_g4_t_v44)) : _g4_s20,
    _g4_s22 = (108u + sizeof(_g4_t_v45)) > _g4_s21 ? (108u + sizeof(_g4_t_v45)) : _g4_s21,
    _g4_s23 = (112u + sizeof(_g4_t_v46)) > _g4_s22 ? (112u + sizeof(_g4_t_v46)) : _g4_s22,
    _g4_s24 = (116u + sizeof(_g4_t_v47)) > _g4_s23 ? (116u + sizeof(_g4_t_v47)) : _g4_s23,
    _g4_s25 = (120u + sizeof(_g4_t_v48)) > _g4_s24 ? (120u + sizeof(_g4_t_v48)) : _g4_s24,
    _g4_s26 = (124u + sizeof(_g4_t_v49)) > _g4_s25 ? (124u + sizeof(_g4_t_v49)) : _g4_s25,
    _g4_s27 = (128u + sizeof(_g4_t_v50)) > _g4_s26 ? (128u + sizeof(_g4_t_v50)) : _g4_s26,
    _g4_s28 = (132u + sizeof(_g4_t_v51)) > _g4_s27 ? (132u + sizeof(_g4_t_v51)) : _g4_s27,
    _g4_s29 = (136u + sizeof(_g4_t_v52)) > _g4_s28 ? (136u + sizeof(_g4_t_v52)) : _g4_s28,
    _g4_s30 = (140u + sizeof(_g4_t_v53)) > _g4_s29 ? (140u + sizeof(_g4_t_v53)) : _g4_s29,
    _g4_s31 = (144u + sizeof(_g4_t_v54)) > _g4_s30 ? (144u + sizeof(_g4_t_v54)) : _g4_s30,
    _g4_s32 = (148u + sizeof(_g4_t_v55)) > _g4_s31 ? (148u + sizeof(_g4_t_v55)) : _g4_s31,
    _g4_s33 = (152u + sizeof(_g4_t_v56)) > _g4_s32 ? (152u + sizeof(_g4_t_v56)) : _g4_s32,
    _g4_s34 = (156u + sizeof(_g4_t_v57)) > _g4_s33 ? (156u + sizeof(_g4_t_v57)) : _g4_s33,
    _g4_s35 = (160u + sizeof(_g4_t_v58)) > _g4_s34 ? (160u + sizeof(_g4_t_v58)) : _g4_s34,
    _g4_s36 = (164u + sizeof(_g4_t_v59)) > _g4_s35 ? (164u + sizeof(_g4_t_v59)) : _g4_s35,
    _g4_s37 = (168u + sizeof(_g4_t_v60)) > _g4_s36 ? (168u + sizeof(_g4_t_v60)) : _g4_s36,
    _g4_s38 = (172u + sizeof(_g4_t_v61)) > _g4_s37 ? (172u + sizeof(_g4_t_v61)) : _g4_s37,
    _g4_s39 = (176u + sizeof(_g4_t_v62)) > _g4_s38 ? (176u + sizeof(_g4_t_v62)) : _g4_s38,
    _g4_s40 = (180u + sizeof(_g4_t_v63)) > _g4_s39 ? (180u + sizeof(_g4_t_v63)) : _g4_s39,
    _g4_s41 = (184u + sizeof(_g4_t_v64)) > _g4_s40 ? (184u + sizeof(_g4_t_v64)) : _g4_s40,
    _g4_s42 = (188u + sizeof(_g4_t_v65)) > _g4_s41 ? (188u + sizeof(_g4_t_v65)) : _g4_s41,
    _g4_s43 = (204u + sizeof(_g4_t_v66)) > _g4_s42 ? (204u + sizeof(_g4_t_v66)) : _g4_s42,
    _g4_s44 = (220u + sizeof(_g4_t_v67)) > _g4_s43 ? (220u + sizeof(_g4_t_v67)) : _g4_s43,
    _g4_s45 = (236u + sizeof(_g4_t_v68)) > _g4_s44 ? (236u + sizeof(_g4_t_v68)) : _g4_s44,
    _g4_s46 = (252u + sizeof(_g4_t_v69)) > _g4_s45 ? (252u + sizeof(_g4_t_v69)) : _g4_s45
  };
  alignas(16) uint8_t _g4_sf[_g4_s46];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 52u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 52u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 52u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 52u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 56u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 56u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 56u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 56u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 56u);
  _g4_t_AccessToken &AccessToken = *reinterpret_cast<_g4_t_AccessToken *>(_g4_sf + 56u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 56u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 60u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 64u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 68u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 72u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 76u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 83u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 84u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 88u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 92u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 108u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 112u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 116u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 120u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 124u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 128u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 132u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 136u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 140u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 144u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 148u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 152u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 156u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 160u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 164u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 168u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 172u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 176u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 180u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 184u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 188u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 204u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 220u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 236u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 252u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "connection_type", (int)(uintptr_t)(&v41));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v45), 1);
  v2 = (void *)(v45 - 12);
  if ( (uint32_t *)(v45 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), "game", (int)(uintptr_t)(&v42));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v46), 4);
  v3 = (void *)(v46 - 12);
  if ( (uint32_t *)(v46 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v46 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), "limit", (int)(uintptr_t)(&v42) + 1);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v47), 2);
  v4 = (void *)(v47 - 12);
  if ( (uint32_t *)(v47 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v47 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v48), "offset", (int)(uintptr_t)(&v42) + 2);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v48), 2);
  v5 = (void *)(v48 - 12);
  if ( (uint32_t *)(v48 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v48 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v49), "seconds_since_last_login", (int)(uintptr_t)(&v42) + 3);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v49), 2);
  v6 = (void *)(v49 - 12);
  if ( (uint32_t *)(v49 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v49 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) == 0 )
    return gaia::GaiaRequest::GetResponseCode(a2);
  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
  {
    gaia::GaiaRequest::SetOperationCode(a2, 4006);
    gaia::Gaia::GetInstance();
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v69, a2);
    started = (void *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v69);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v69);
    return (int)(uintptr_t)(started);
  }
  OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
  v29 = (void *)OsirisStatus;
  if ( OsirisStatus != 0 )
  {
    gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
    return (int)(uintptr_t)(v29);
  }
  else
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v50), (char *)&unk_1B15112, (int)(uintptr_t)(&v43));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v51), (char *)&unk_1B15112, (int)(uintptr_t)(&v43) + 1);
    v62 = nullptr;
    v63 = nullptr;
    v64 = 0;
    v52 = nullptr;
    v53 = 0;
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v65, (const char *)a2);
    v40 = Json::Value::asInt((Json::Value::Self *)v65);
    Json::Value::Destroy((Json::Value::Self *)v65);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v54), "game", (int)(uintptr_t)(&v43) + 2);
    v8 = gaia::GaiaRequest::opIndex(a2, &v54);
    Json::Value::asString((Json::Value::Self *)v55, v8);
    g4_std::string::assign_str(&v51, v55);
    g4_std::string::Destroy(v55);
    v9 = (void *)(v54 - 12);
    if ( (uint32_t *)(v54 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v54 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v9);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v56), "limit", (int)(uintptr_t)(&v43) + 3);
    v10 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v56);
    isNull = Json::Value::isNull(v10);
    v30 = (void *)(v56 - 12);
    if ( (uint32_t *)(v56 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v56 - 4), 0xFFFFFFFF) <= 0 )
    {
      v27 = isNull;
      g4_std::string::Rep::M_destroy(v30);
      isNull = v27;
    }
    v38 = 0;
    if ( !isNull )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v66, (const char *)a2);
      v38 = Json::Value::asUInt((Json::Value::Self *)v66);
      Json::Value::Destroy((Json::Value::Self *)v66);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v57), "offset", (int)(uintptr_t)(v44));
    v12 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v57);
    v13 = Json::Value::isNull(v12);
    v31 = (void *)(v57 - 12);
    if ( (uint32_t *)(v57 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v57 - 4), 0xFFFFFFFF) <= 0 )
    {
      v28 = v13;
      g4_std::string::Rep::M_destroy(v31);
      v13 = v28;
    }
    v36 = 0;
    if ( !v13 )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v67, (const char *)a2);
      v36 = Json::Value::asUInt((Json::Value::Self *)v67);
      Json::Value::Destroy((Json::Value::Self *)v67);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v58), "seconds_since_last_login", (int)(uintptr_t)(&v44[1]));
    v14 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v58);
    v15 = Json::Value::isNull(v14);
    v32 = (void *)(v58 - 12);
    if ( (uint32_t *)(v58 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v58 - 4), 0xFFFFFFFF) <= 0 )
    {
      v25 = v15;
      g4_std::string::Rep::M_destroy(v32);
      v15 = v25;
    }
    v37 = 0;
    if ( !v15 )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v68, (const char *)a2);
      v37 = Json::Value::asUInt((Json::Value::Self *)v68);
      Json::Value::Destroy((Json::Value::Self *)v68);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v59), "online", (int)(uintptr_t)(&v44[2]));
    v16 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v59);
    v17 = Json::Value::isNull(v16);
    v33 = (void *)(v59 - 12);
    if ( (uint32_t *)(v59 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v59 - 4), 0xFFFFFFFF) <= 0 )
    {
      v26 = v17;
      g4_std::string::Rep::M_destroy(v33);
      v17 = v26;
    }
    v39 = 0;
    if ( !v17 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v60), "online", (int)(uintptr_t)(&v44[3]));
      v23 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v60);
      v39 = Json::Value::asBool(v23);
      g4_std::string::Destroy(&v60);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v61), "social", (int)(uintptr_t)(&v44[4]));
    AccessToken = (void *)gaia::Gaia_Osiris::GetAccessToken(self, a2, &v61, (int)(uintptr_t)(&v50));
    g4_std::string::Destroy(&v61);
    if ( AccessToken != nullptr )
    {
      gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(AccessToken));
    }
    else
    {
      Instance = gaia::Gaia::GetInstance();
      AccessToken = (void *)gaia::Osiris::ListConnections(
                              *(gaia::BaseServiceManager::Self **)(Instance + 24),
                              (void **)&v52,
                              &v53,
                              (int)(uintptr_t)(&v50),
                              v40,
                              v38,
                              v36,
                              (int)(uintptr_t)(&v51),
                              v39,
                              v37,
                              (int)(uintptr_t)(a2));
      if ( AccessToken == nullptr )
        AccessToken = (void *)gaia::BaseServiceManager::ParseMessages(v52, v53, (int)(uintptr_t)(&v62), 5);
      gaia::GaiaRequest::SetResponse(a2, (const std::vector<gaia::BaseJSONServiceResponse::Self> *)&v62);
      gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(AccessToken));
      free(v52);
    }
    v19 = v63;
    v20 = (gaia::BaseJSONServiceResponse::Self *)v62;
    if ( v63 != v62 )
    {
      do
      {
        ptr = v20;
        v20 = (gaia::BaseJSONServiceResponse::Self *)((char *)v20 + 20);
        gaia::BaseJSONServiceResponse::Destroy(ptr);
      }
      while ( v19 != v20 );
      v20 = (gaia::BaseJSONServiceResponse::Self *)v62;
    }
    if ( v20 != nullptr )
      opDelete(v20);
    v21 = (void *)(v51 - 12);
    if ( (uint32_t *)(v51 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v51 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v21);
    }
    g4_std::string::Destroy(&v50);
    return (int)(uintptr_t)(AccessToken);
  }
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::AddConnection  (binary VA: 0x1475820)
// Original: gaia::Gaia_Osiris::AddConnection
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::AddConnection(gaia::Gaia_Osiris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  int OsirisStatus;
  void *v7;
  Json::Value::Self *v8;
  bool isNull;
  Json::Value::Self *v10;
  bool v11;
  int *v12;
  int AccessToken;
  int v14;
  int Instance;
  Json::Value::Self *v16;
  void *v17;
  void *v18;
  int result;
  void *v20;
  typedef Json::Value::Self *_g4_t_v21;
  typedef Json::Value::Self *_g4_t_v22;
  typedef Json::Value::Self *_g4_t_v23;
  typedef Json::Value::Self *_g4_t_started;
  typedef Json::Value::Self *_g4_t_v25;
  typedef bool _g4_t_v26;
  typedef Json::Value::Self *_g4_t_v27;
  typedef bool _g4_t_v28;
  typedef char *_g4_t_v29;
  typedef void *_g4_t_v30;
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
  typedef uint8_t _g4_t_v46[4];
  typedef int _g4_t_v47;
  typedef uint8_t _g4_t_v48[4];
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef uint8_t _g4_t_v51[16];
  typedef uint8_t _g4_t_v52[16];
  typedef uint8_t _g4_t_v53[16];
  typedef uint8_t _g4_t_v54[16];
  typedef uint8_t _g4_t_v55[96];
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (8u + sizeof(_g4_t_v21)) > _g4_s0 ? (8u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v22)) > _g4_s1 ? (8u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v23)) > _g4_s2 ? (8u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_started)) > _g4_s3 ? (8u + sizeof(_g4_t_started)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v25)) > _g4_s4 ? (8u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v26)) > _g4_s5 ? (8u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v27)) > _g4_s6 ? (8u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v28)) > _g4_s7 ? (8u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v29)) > _g4_s8 ? (12u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v30)) > _g4_s9 ? (16u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v31)) > _g4_s10 ? (28u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (42u + sizeof(_g4_t_v32)) > _g4_s11 ? (42u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v33)) > _g4_s12 ? (44u + sizeof(_g4_t_v33)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v34)) > _g4_s13 ? (48u + sizeof(_g4_t_v34)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v35)) > _g4_s14 ? (52u + sizeof(_g4_t_v35)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v36)) > _g4_s15 ? (64u + sizeof(_g4_t_v36)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v37)) > _g4_s16 ? (68u + sizeof(_g4_t_v37)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v38)) > _g4_s17 ? (72u + sizeof(_g4_t_v38)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v39)) > _g4_s18 ? (76u + sizeof(_g4_t_v39)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v40)) > _g4_s19 ? (80u + sizeof(_g4_t_v40)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v41)) > _g4_s20 ? (84u + sizeof(_g4_t_v41)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v42)) > _g4_s21 ? (88u + sizeof(_g4_t_v42)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_v43)) > _g4_s22 ? (92u + sizeof(_g4_t_v43)) : _g4_s22,
    _g4_s24 = (96u + sizeof(_g4_t_v44)) > _g4_s23 ? (96u + sizeof(_g4_t_v44)) : _g4_s23,
    _g4_s25 = (100u + sizeof(_g4_t_v45)) > _g4_s24 ? (100u + sizeof(_g4_t_v45)) : _g4_s24,
    _g4_s26 = (104u + sizeof(_g4_t_v46)) > _g4_s25 ? (104u + sizeof(_g4_t_v46)) : _g4_s25,
    _g4_s27 = (108u + sizeof(_g4_t_v47)) > _g4_s26 ? (108u + sizeof(_g4_t_v47)) : _g4_s26,
    _g4_s28 = (112u + sizeof(_g4_t_v48)) > _g4_s27 ? (112u + sizeof(_g4_t_v48)) : _g4_s27,
    _g4_s29 = (116u + sizeof(_g4_t_v49)) > _g4_s28 ? (116u + sizeof(_g4_t_v49)) : _g4_s28,
    _g4_s30 = (120u + sizeof(_g4_t_v50)) > _g4_s29 ? (120u + sizeof(_g4_t_v50)) : _g4_s29,
    _g4_s31 = (124u + sizeof(_g4_t_v51)) > _g4_s30 ? (124u + sizeof(_g4_t_v51)) : _g4_s30,
    _g4_s32 = (140u + sizeof(_g4_t_v52)) > _g4_s31 ? (140u + sizeof(_g4_t_v52)) : _g4_s31,
    _g4_s33 = (156u + sizeof(_g4_t_v53)) > _g4_s32 ? (156u + sizeof(_g4_t_v53)) : _g4_s32,
    _g4_s34 = (172u + sizeof(_g4_t_v54)) > _g4_s33 ? (172u + sizeof(_g4_t_v54)) : _g4_s33,
    _g4_s35 = (188u + sizeof(_g4_t_v55)) > _g4_s34 ? (188u + sizeof(_g4_t_v55)) : _g4_s34
  };
  alignas(16) uint8_t _g4_sf[_g4_s35];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 42u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 44u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 48u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 52u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 64u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 68u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 72u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 76u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 80u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 84u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 88u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 92u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 96u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 100u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 104u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 108u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 112u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 116u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 120u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 124u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 140u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 156u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 172u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 188u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "connection_type", (int)(uintptr_t)(&v32));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v36), 1);
    v2 = (void *)(v36 - 12);
    if ( (uint32_t *)(v36 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v36 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "target_credential", (int)(uintptr_t)(&v32) + 1);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v37), 4);
    v3 = (void *)(v37 - 12);
    if ( (uint32_t *)(v37 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "requester_credential", (int)(uintptr_t)(&v33));
    gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v38), 4);
    v4 = (void *)(v38 - 12);
    if ( (uint32_t *)(v38 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v38 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "required_approval", (int)(uintptr_t)(&v33) + 1);
    gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v39), 4);
    v5 = (void *)(v39 - 12);
    if ( (uint32_t *)(v39 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 4001);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v55, a2);
        started = (Json::Value::Self *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v55);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v55);
        return (int)(uintptr_t)(started);
      }
      else
      {
        OsirisStatus = gaia::Gaia_Osiris::GetOsirisStatus(self);
        if ( OsirisStatus != 0 )
        {
          v25 = (Json::Value::Self *)OsirisStatus;
          gaia::GaiaRequest::SetResponseCode(a2, OsirisStatus);
          return (int)(uintptr_t)(v25);
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), (char *)&unk_1B15112, (int)(uintptr_t)(&v33) + 2);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), (char *)&unk_1B15112, (int)(uintptr_t)(&v33) + 3);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), (char *)&unk_1B15112, (int)(uintptr_t)(&v34));
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), (char *)&unk_1B15112, (int)(uintptr_t)(&v34) + 1);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v51, (const char *)a2);
          v31 = Json::Value::asInt((Json::Value::Self *)v51);
          Json::Value::Destroy((Json::Value::Self *)v51);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v52, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v44, (int)(uintptr_t)(v52));
          g4_std::string::assign_str(&v41, &v44);
          v7 = (void *)(v44 - 12);
          if ( (uint32_t *)(v44 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v44 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v7);
          }
          Json::Value::Destroy((Json::Value::Self *)v52);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "requester_credential", (int)(uintptr_t)(&v34) + 2);
          v8 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v45);
          isNull = Json::Value::isNull(v8);
          v30 = (void *)(v45 - 12);
          if ( (uint32_t *)(v45 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
          {
            v28 = isNull;
            g4_std::string::Rep::M_destroy(v30);
            isNull = v28;
          }
          if ( !isNull )
          {
            gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v53, (const char *)a2);
            Json::Value::asString((Json::Value::Self *)v46, (int)(uintptr_t)(v53));
            g4_std::string::assign_str(&v42, v46);
            g4_std::string::Destroy(v46);
            Json::Value::Destroy((Json::Value::Self *)v53);
          }
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), "required_approval", (int)(uintptr_t)(&v34) + 3);
          v10 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v47);
          v11 = Json::Value::isNull(v10);
          v29 = (char *)(v47 - 12);
          if ( (uint32_t *)(v47 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v47 - 4), 0xFFFFFFFF) <= 0 )
          {
            v26 = v11;
            g4_std::string::Rep::M_destroy(v29);
            v11 = v26;
          }
          if ( !v11 )
          {
            gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v54, (const char *)a2);
            Json::Value::asString((Json::Value::Self *)v48, (int)(uintptr_t)(v54));
            g4_std::string::assign_str(&v43, v48);
            g4_std::string::Destroy(v48);
            Json::Value::Destroy((Json::Value::Self *)v54);
          }
          if ( g4_std::string::compare((int)(uintptr_t)(&v43), (char *)&unk_1B15112) != 0 )
          {
            v12 = &v50;
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v50), "social social_connection_override", (int)(uintptr_t)(&v35) + 1);
            AccessToken = gaia::Gaia_Osiris::GetAccessToken(self, a2, &v50, (int)(uintptr_t)(&v40));
          }
          else
          {
            v12 = &v49;
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v49), "social", (int)(uintptr_t)(&v35));
            AccessToken = gaia::Gaia_Osiris::GetAccessToken(self, a2, &v49, (int)(uintptr_t)(&v40));
          }
          v21 = (Json::Value::Self *)AccessToken;
          g4_std::string::Destroy(v12);
          v14 = (int)(uintptr_t)(v21);
          if ( v21 == nullptr )
          {
            Instance = gaia::Gaia::GetInstance();
            v14 = gaia::Osiris::AddConnection(
                    *(gaia::BaseServiceManager::Self **)(Instance + 24),
                    (int)(uintptr_t)(&v40),
                    v31,
                    (int)(uintptr_t)(&v41),
                    (int)(uintptr_t)(&v42),
                    (int)(uintptr_t)(&v43),
                    (int)(uintptr_t)(a2));
          }
          v22 = (Json::Value::Self *)v14;
          gaia::GaiaRequest::SetResponseCode(a2, v14);
          v16 = v22;
          v17 = (void *)(v43 - 12);
          if ( (uint32_t *)(v43 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v43 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v17);
            v16 = v22;
          }
          v18 = (void *)(v42 - 12);
          if ( (uint32_t *)(v42 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v42 - 4), 0xFFFFFFFF) <= 0 )
          {
            v27 = v16;
            g4_std::string::Rep::M_destroy(v18);
            v16 = v27;
          }
          v23 = v16;
          g4_std::string::Destroy(&v41);
          result = (int)(uintptr_t)(v23);
          v20 = (void *)(v40 - 12);
          if ( (uint32_t *)(v40 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v40 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v20);
            return (int)(uintptr_t)(v23);
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
// Function: gaia::Gaia_Osiris::StartAndAuthorizeOsiris  (binary VA: 0x1484c20)
// Original: gaia::Gaia_Osiris::StartAndAuthorizeOsiris
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::StartAndAuthorizeOsiris(gaia::Gaia::Self *a1, int a2, uint32_t *a3)
{
  char IsInitialized;
  int result;
  int Instance;

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    result = gaia::Gaia_Osiris::GetOsirisStatus((gaia::Gaia_Osiris::Self *)(a1));
    if ( result == 0 )
    {
      Instance = gaia::Gaia::GetInstance();
      return gaia::Gaia::Authorize(Instance, a3, a2, 0, 0, 0);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::ListAchievements  (binary VA: 0x1484c90)
// Original: gaia::Gaia_Osiris::ListAchievements
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::ListAchievements(gaia::Gaia::Self *a1, int a2, int a3, int a4, uint32_t *a5, uint32_t *a6, char a7, int a8, int a9)
{
  int InitializationAndLoginStatus;
  int Instance;
  void *v12;
  void *v13;
  uint32_t *v14;
  Json::Value::Self *v15;
  Json::Value::Self *v16;
  Json::Value::Self *v17;
  Json::Value::Self *v18;
  int v19;
  int v20;
  int v21;
  typedef gaia::ThreadManager::Self *_g4_t_ptr;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef char *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef uint8_t _g4_t_v29[4];
  typedef uint8_t _g4_t_v30[16];
  typedef uint8_t _g4_t_v31[16];
  typedef uint8_t _g4_t_v32[16];
  typedef uint8_t _g4_t_v33[28];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (52u + sizeof(_g4_t_v23)) > _g4_s1 ? (52u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (56u + sizeof(_g4_t_v24)) > _g4_s2 ? (56u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v25)) > _g4_s3 ? (60u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v26)) > _g4_s4 ? (64u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (68u + sizeof(_g4_t_v27)) > _g4_s5 ? (68u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v28)) > _g4_s6 ? (72u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v29)) > _g4_s7 ? (76u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v30)) > _g4_s8 ? (80u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (96u + sizeof(_g4_t_v31)) > _g4_s9 ? (96u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (112u + sizeof(_g4_t_v32)) > _g4_s10 ? (112u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (128u + sizeof(_g4_t_v33)) > _g4_s11 ? (128u + sizeof(_g4_t_v33)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 52u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 56u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 60u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 64u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 68u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 72u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 76u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 80u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 96u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 112u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 128u);

  InitializationAndLoginStatus = -21;
  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    InitializationAndLoginStatus = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
    if ( InitializationAndLoginStatus == 0 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), (char *)&unk_1B15112, (int)(uintptr_t)(&v23));
      gaia::BaseServiceManager::GetCredentialString(&v25);
      g4_std::string::append_str(&v24, &v25);
      v12 = (void *)(v25 - 12);
      if ( (uint32_t *)(v25 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v12);
      }
      g4_std::string::append((int)(uintptr_t)(&v24), ":", 1u);
      g4_std::string::append_str(&v24, a5);
      if ( a7 != 0 )
      {
        v14 = (uint32_t *)opNew(0x44u);
        *v14 = a9;
        v14[1] = a8;
        v14[2] = 4041;
        Json::Value::Construct((int)(uintptr_t)(v14 + 3), nullptr);
        v14[7] = 0;
        v14[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v14 + 9), nullptr);
        v14[13] = 0;
        v14[14] = 0;
        v14[15] = 0;
        v14[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v30, a2);
        v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "accountType");
        Json::Value::opAssign(v15, (const Json::Value::Self *)v30);
        Json::Value::Destroy((Json::Value::Self *)v30);
        Json::Value::Construct((Json::Value::Self *)v31, a4);
        v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "targetAccountType");
        Json::Value::opAssign(v16, (const Json::Value::Self *)v31);
        Json::Value::Destroy((Json::Value::Self *)v31);
        Json::Value::Construct((int)(uintptr_t)(v32), a5);
        v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "targetUsername");
        Json::Value::opAssign(v17, (const Json::Value::Self *)v32);
        Json::Value::Destroy((Json::Value::Self *)v32);
        Json::Value::Construct((int)(uintptr_t)(v33), a6);
        v18 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "game");
        Json::Value::opAssign(v18, (const Json::Value::Self *)v33);
        Json::Value::Destroy((Json::Value::Self *)v33);
        v14[7] = a3;
        v19 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(ptr));
        InitializationAndLoginStatus = gaia::ThreadManager::pushTask(v19, v14);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "social", (int)(uintptr_t)(&v23) + 1);
        InitializationAndLoginStatus = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v26);
        g4_std::string::Destroy(&v26);
        if ( InitializationAndLoginStatus == 0 )
        {
          v27 = nullptr;
          v20 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(v29), v20);
          v21 = gaia::Gaia::GetInstance();
          InitializationAndLoginStatus = gaia::Osiris::ListAchievements(
                                           *(gaia::BaseServiceManager::Self **)(v21 + 24),
                                           (void **)&v27,
                                           &v28,
                                           (int)(uintptr_t)(&v24),
                                           (int)(uintptr_t)(v29),
                                           (int)(uintptr_t)(a6),
                                           0);
          g4_std::string::Destroy(v29);
          if ( InitializationAndLoginStatus == 0 )
            gaia::BaseServiceManager::ParseMessages(v27, v28, a3, 14);
          free(v27);
        }
      }
      v13 = (void *)(v24 - 12);
      if ( (uint32_t *)(v24 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v13);
      }
    }
  }
  return InitializationAndLoginStatus;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::RecordAchievement  (binary VA: 0x14850c0)
// Original: gaia::Gaia_Osiris::RecordAchievement
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::RecordAchievement(gaia::Gaia::Self *a1, int a2, uint32_t *a3, char a4, int a5, int a6)
{
  char IsInitialized;
  int result;
  int Instance;
  void *v9;
  uint32_t *v10;
  Json::Value::Self *v11;
  Json::Value::Self *v12;
  int v13;
  int v14;
  int v15;
  typedef gaia::ThreadManager::Self *_g4_t_v16;
  typedef Json::Value::Self *_g4_t_v17;
  typedef Json::Value::Self *_g4_t_v18;
  typedef uint8_t _g4_t_v19[7];
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint8_t _g4_t_v22[16];
  typedef uint8_t _g4_t_v23[28];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v17)) > _g4_s1 ? (44u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v18)) > _g4_s2 ? (44u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (49u + sizeof(_g4_t_v19)) > _g4_s3 ? (49u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v20)) > _g4_s4 ? (56u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v21)) > _g4_s5 ? (60u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v22)) > _g4_s6 ? (64u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v23)) > _g4_s7 ? (80u + sizeof(_g4_t_v23)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 49u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 56u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 60u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 64u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 80u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    result = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
    if ( result == 0 )
    {
      if ( a4 != 0 )
      {
        v10 = (uint32_t *)opNew(0x44u);
        *v10 = a6;
        v10[1] = a5;
        v10[2] = 4040;
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
        v12 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v10 + 3), "trophy_id");
        Json::Value::opAssign(v12, (const Json::Value::Self *)v23);
        Json::Value::Destroy((Json::Value::Self *)v23);
        v13 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v16));
        return gaia::ThreadManager::pushTask(v13, v10);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19[3]), "social_trophies", (int)(uintptr_t)(v19));
        result = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v19[3]);
        v9 = (void *)(*(uint32_t *)&v19[3] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v19[3] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v19[3] - 4), 0xFFFFFFFF) <= 0 )
        {
          v18 = (Json::Value::Self *)result;
          g4_std::string::Rep::M_destroy(v9);
          result = (int)(uintptr_t)(v18);
        }
        if ( result == 0 )
        {
          v14 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(&v20), v14);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "me", (int)(uintptr_t)(&v19[1]));
          v15 = gaia::Gaia::GetInstance();
          v17 = (Json::Value::Self *)gaia::Osiris::RecordAchievement(
                                 *(gaia::BaseServiceManager::Self **)(v15 + 24),
                                 (int)(uintptr_t)(&v21),
                                 (int)(uintptr_t)(&v20),
                                 (int)(uintptr_t)(a3),
                                 0);
          g4_std::string::Destroy(&v21);
          g4_std::string::Destroy(&v20);
          return (int)(uintptr_t)(v17);
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::ViewFeed  (binary VA: 0x1485350)
// Original: gaia::Gaia_Osiris::ViewFeed
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::ViewFeed(gaia::Gaia::Self *a1, int a2, int a3, int a4, int a5, uint32_t *a6, uint32_t *a7, uint32_t *a8, char a9, int a10, int a11)
{
  int InitializationAndLoginStatus;
  int Instance;
  void *v13;
  uint32_t *v15;
  Json::Value::Self *v16;
  Json::Value::Self *v17;
  Json::Value::Self *v18;
  Json::Value::Self *v19;
  Json::Value::Self *v20;
  Json::Value::Self *v21;
  int v22;
  int v23;
  int v24;
  int v25;
  typedef gaia::ThreadManager::Self *_g4_t_ptr;
  typedef uint8_t _g4_t_v27[7];
  typedef char *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef uint8_t _g4_t_v31[4];
  typedef int _g4_t_v32;
  typedef uint8_t _g4_t_v33[16];
  typedef uint8_t _g4_t_v34[16];
  typedef uint8_t _g4_t_v35[16];
  typedef uint8_t _g4_t_v36[16];
  typedef uint8_t _g4_t_v37[16];
  typedef uint8_t _g4_t_v38[44];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (69u + sizeof(_g4_t_v27)) > _g4_s1 ? (69u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (76u + sizeof(_g4_t_v28)) > _g4_s2 ? (76u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (80u + sizeof(_g4_t_v29)) > _g4_s3 ? (80u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (84u + sizeof(_g4_t_v30)) > _g4_s4 ? (84u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (88u + sizeof(_g4_t_v31)) > _g4_s5 ? (88u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (92u + sizeof(_g4_t_v32)) > _g4_s6 ? (92u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v33)) > _g4_s7 ? (96u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (112u + sizeof(_g4_t_v34)) > _g4_s8 ? (112u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (128u + sizeof(_g4_t_v35)) > _g4_s9 ? (128u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (144u + sizeof(_g4_t_v36)) > _g4_s10 ? (144u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (160u + sizeof(_g4_t_v37)) > _g4_s11 ? (160u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (176u + sizeof(_g4_t_v38)) > _g4_s12 ? (176u + sizeof(_g4_t_v38)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 69u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 76u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 80u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 84u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 88u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 92u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 96u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 112u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 128u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 144u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 160u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 176u);

  InitializationAndLoginStatus = -21;
  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
    return InitializationAndLoginStatus;
  Instance = gaia::Gaia::GetInstance();
  InitializationAndLoginStatus = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
  if ( InitializationAndLoginStatus != 0 )
    return InitializationAndLoginStatus;
  if ( a9 != 0 )
  {
    v15 = (uint32_t *)opNew(0x44u);
    *v15 = a11;
    v15[1] = a10;
    v15[2] = 4039;
    Json::Value::Construct((int)(uintptr_t)(v15 + 3), nullptr);
    v15[7] = 0;
    v15[8] = 0;
    Json::Value::Construct((int)(uintptr_t)(v15 + 9), nullptr);
    v15[13] = 0;
    v15[14] = 0;
    v15[15] = 0;
    v15[16] = 0;
    Json::Value::Construct((Json::Value::Self *)v33, a2);
    v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "accountType");
    Json::Value::opAssign(v16, (const Json::Value::Self *)v33);
    Json::Value::Destroy((Json::Value::Self *)v33);
    v15[7] = a3;
    Json::Value::Construct((Json::Value::Self *)v34, a4);
    v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "connection_type");
    Json::Value::opAssign(v17, (const Json::Value::Self *)v34);
    Json::Value::Destroy((Json::Value::Self *)v34);
    Json::Value::Construct((Json::Value::Self *)v35, a5);
    v18 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "targetAccountType");
    Json::Value::opAssign(v18, (const Json::Value::Self *)v35);
    Json::Value::Destroy((Json::Value::Self *)v35);
    Json::Value::Construct((int)(uintptr_t)(v36), a6);
    v19 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "targetUsername");
    Json::Value::opAssign(v19, (const Json::Value::Self *)v36);
    Json::Value::Destroy((Json::Value::Self *)v36);
    Json::Value::Construct((int)(uintptr_t)(v37), a7);
    v20 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "language");
    Json::Value::opAssign(v20, (const Json::Value::Self *)v37);
    Json::Value::Destroy((Json::Value::Self *)v37);
    Json::Value::Construct((int)(uintptr_t)(v38), a8);
    v21 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "sort_type");
    Json::Value::opAssign(v21, (const Json::Value::Self *)v38);
    Json::Value::Destroy((Json::Value::Self *)v38);
    v22 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(ptr));
    return gaia::ThreadManager::pushTask(v22, v15);
  }
  else
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27[3]), "social", (int)(uintptr_t)(v27));
    InitializationAndLoginStatus = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v27[3]);
    v13 = (void *)(*(uint32_t *)&v27[3] - 12);
    if ( (uint32_t *)(*(uint32_t *)&v27[3] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v27[3] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v13);
    }
    if ( InitializationAndLoginStatus != 0 )
      return InitializationAndLoginStatus;
    v28 = nullptr;
    v29 = 0;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "me", (int)(uintptr_t)(&v27[1]));
    if ( *(uint32_t *)(*a6 - 12) != 0 && g4_std::string::compare((int)(uintptr_t)(a6), "me") != 0 )
    {
      g4_std_compat::string_assign((int)(uintptr_t)(&v30), &unk_1B15112, 0);
      gaia::BaseServiceManager::GetCredentialString(v31);
      g4_std::string::append_str(&v30, v31);
      g4_std::string::Destroy(v31);
      g4_std::string::append((int)(uintptr_t)(&v30), ":", 1u);
      g4_std::string::append_str(&v30, a6);
    }
    v23 = gaia::Gaia::GetInstance();
    gaia::Gaia::GetJanusToken((int)(uintptr_t)(&v32), v23);
    v24 = gaia::Gaia::GetInstance();
    v25 = gaia::Osiris::ViewFeed(
            *(gaia::BaseServiceManager::Self **)(v24 + 24),
            (void **)&v28,
            &v29,
            (int)(uintptr_t)(&v30),
            (int)(uintptr_t)(&v32),
            (int)(uintptr_t)(a8),
            (int)(uintptr_t)(a7),
            a4,
            0);
    g4_std::string::Destroy(&v32);
    if ( v25 == 0 )
      gaia::BaseServiceManager::ParseMessages(v28, v29, a3, 13);
    free(v28);
    g4_std::string::Destroy(&v30);
    return v25;
  }
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::ViewWall  (binary VA: 0x1485820)
// Original: gaia::Gaia_Osiris::ViewWall
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::ViewWall(gaia::Gaia::Self *a1, int a2, int a3, int a4, uint32_t *a5, uint32_t *a6, uint32_t *a7, char a8, int a9, int a10)
{
  int InitializationAndLoginStatus;
  int Instance;
  void *v12;
  uint32_t *v14;
  Json::Value::Self *v15;
  Json::Value::Self *v16;
  Json::Value::Self *v17;
  Json::Value::Self *v18;
  Json::Value::Self *v19;
  int v20;
  int v21;
  int v22;
  typedef gaia::ThreadManager::Self *_g4_t_ptr;
  typedef uint16_t _g4_t_v24[3];
  typedef char *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint8_t _g4_t_v27[4];
  typedef uint8_t _g4_t_v28[16];
  typedef uint8_t _g4_t_v29[16];
  typedef uint8_t _g4_t_v30[16];
  typedef uint8_t _g4_t_v31[16];
  typedef uint8_t _g4_t_v32[28];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (78u + sizeof(_g4_t_v24)) > _g4_s1 ? (78u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (84u + sizeof(_g4_t_v25)) > _g4_s2 ? (84u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (88u + sizeof(_g4_t_v26)) > _g4_s3 ? (88u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (92u + sizeof(_g4_t_v27)) > _g4_s4 ? (92u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (96u + sizeof(_g4_t_v28)) > _g4_s5 ? (96u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (112u + sizeof(_g4_t_v29)) > _g4_s6 ? (112u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (128u + sizeof(_g4_t_v30)) > _g4_s7 ? (128u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (144u + sizeof(_g4_t_v31)) > _g4_s8 ? (144u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (160u + sizeof(_g4_t_v32)) > _g4_s9 ? (160u + sizeof(_g4_t_v32)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 78u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 84u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 88u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 92u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 96u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 112u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 128u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 144u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 160u);

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
        v14[2] = 4038;
        Json::Value::Construct((int)(uintptr_t)(v14 + 3), nullptr);
        v14[7] = 0;
        v14[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v14 + 9), nullptr);
        v14[13] = 0;
        v14[7] = a3;
        v14[14] = 0;
        v14[15] = 0;
        v14[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v28, a2);
        v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "accountType");
        Json::Value::opAssign(v15, (const Json::Value::Self *)v28);
        Json::Value::Destroy((Json::Value::Self *)v28);
        Json::Value::Construct((Json::Value::Self *)v29, a4);
        v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "object_type");
        Json::Value::opAssign(v16, (const Json::Value::Self *)v29);
        Json::Value::Destroy((Json::Value::Self *)v29);
        Json::Value::Construct((int)(uintptr_t)(v30), a5);
        v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "object_id");
        Json::Value::opAssign(v17, (const Json::Value::Self *)v30);
        Json::Value::Destroy((Json::Value::Self *)v30);
        Json::Value::Construct((int)(uintptr_t)(v31), a6);
        v18 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "sort_type");
        Json::Value::opAssign(v18, (const Json::Value::Self *)v31);
        Json::Value::Destroy((Json::Value::Self *)v31);
        Json::Value::Construct((int)(uintptr_t)(v32), a7);
        v19 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "language");
        Json::Value::opAssign(v19, (const Json::Value::Self *)v32);
        Json::Value::Destroy((Json::Value::Self *)v32);
        v20 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(ptr));
        return gaia::ThreadManager::pushTask(v20, v14);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24[1]), "social", (int)(uintptr_t)(v24));
        InitializationAndLoginStatus = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v24[1]);
        v12 = (void *)(*(uint32_t *)&v24[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v24[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v24[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v12);
        }
        if ( InitializationAndLoginStatus == 0 )
        {
          v25 = nullptr;
          v21 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(v27), v21);
          v22 = gaia::Gaia::GetInstance();
          InitializationAndLoginStatus = gaia::Osiris::ViewWall(
                                           *(gaia::BaseServiceManager::Self **)(v22 + 24),
                                           (void **)&v25,
                                           &v26,
                                           a4,
                                           (int)(uintptr_t)(a5),
                                           (int)(uintptr_t)(v27),
                                           (int)(uintptr_t)(a6),
                                           (int)(uintptr_t)(a7),
                                           0);
          g4_std::string::Destroy(v27);
          if ( InitializationAndLoginStatus == 0 )
            gaia::BaseServiceManager::ParseMessages(v25, v26, a3, 13);
          free(v25);
        }
      }
    }
  }
  return InitializationAndLoginStatus;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::UpvoteWallPost  (binary VA: 0x1485bf0)
// Original: gaia::Gaia_Osiris::UpvoteWallPost
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::UpvoteWallPost(gaia::Gaia::Self *a1, int a2, int a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, char a7, int a8, int a9)
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
  int v21;
  typedef gaia::ThreadManager::Self *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef uint16_t _g4_t_v25[3];
  typedef int _g4_t_v26;
  typedef uint8_t _g4_t_v27[16];
  typedef uint8_t _g4_t_v28[16];
  typedef uint8_t _g4_t_v29[16];
  typedef uint8_t _g4_t_v30[16];
  typedef uint8_t _g4_t_v31[28];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v22)) > _g4_s0 ? (0u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v23)) > _g4_s1 ? (40u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v24)) > _g4_s2 ? (40u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (54u + sizeof(_g4_t_v25)) > _g4_s3 ? (54u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v26)) > _g4_s4 ? (60u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v27)) > _g4_s5 ? (64u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v28)) > _g4_s6 ? (80u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v29)) > _g4_s7 ? (96u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (112u + sizeof(_g4_t_v30)) > _g4_s8 ? (112u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (128u + sizeof(_g4_t_v31)) > _g4_s9 ? (128u + sizeof(_g4_t_v31)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
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
    result = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
    if ( result == 0 )
    {
      if ( a7 != 0 )
      {
        v13 = (uint32_t *)opNew(0x44u);
        *v13 = a9;
        v13[1] = a8;
        v13[2] = 4042;
        Json::Value::Construct((int)(uintptr_t)(v13 + 3), nullptr);
        v13[7] = 0;
        v13[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v13 + 9), nullptr);
        v13[13] = 0;
        v13[14] = 0;
        v13[15] = 0;
        v13[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v27, a2);
        v14 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "accountType");
        Json::Value::opAssign(v14, (const Json::Value::Self *)v27);
        Json::Value::Destroy((Json::Value::Self *)v27);
        Json::Value::Construct((Json::Value::Self *)v28, a3);
        v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "object_type");
        Json::Value::opAssign(v15, (const Json::Value::Self *)v28);
        Json::Value::Destroy((Json::Value::Self *)v28);
        Json::Value::Construct((int)(uintptr_t)(v29), a4);
        v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "object_id");
        Json::Value::opAssign(v16, (const Json::Value::Self *)v29);
        Json::Value::Destroy((Json::Value::Self *)v29);
        Json::Value::Construct((int)(uintptr_t)(v30), a5);
        v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "activity_id");
        Json::Value::opAssign(v17, (const Json::Value::Self *)v30);
        Json::Value::Destroy((Json::Value::Self *)v30);
        Json::Value::Construct((int)(uintptr_t)(v31), a6);
        v18 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "activity_type");
        Json::Value::opAssign(v18, (const Json::Value::Self *)v31);
        Json::Value::Destroy((Json::Value::Self *)v31);
        v19 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v22));
        return gaia::ThreadManager::pushTask(v19, v13);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25[1]), "social", (int)(uintptr_t)(v25));
        result = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v25[1]);
        v12 = (void *)(*(uint32_t *)&v25[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v25[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v25[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          v24 = result;
          g4_std::string::Rep::M_destroy(v12);
          result = v24;
        }
        if ( result == 0 )
        {
          v20 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(&v26), v20);
          v21 = gaia::Gaia::GetInstance();
          v23 = gaia::Osiris::UpvoteWallPost(
                  *(gaia::BaseServiceManager::Self **)(v21 + 24),
                  a3,
                  (int)(uintptr_t)(a4),
                  (int)(uintptr_t)(&v26),
                  (int)(uintptr_t)(a5),
                  (int)(uintptr_t)(a6),
                  0);
          g4_std::string::Destroy(&v26);
          return v23;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::PostOnWall  (binary VA: 0x1485f50)
// Original: gaia::Gaia_Osiris::PostOnWall
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::PostOnWall(gaia::Gaia::Self *a1, int a2, int a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, char a7, int a8, int a9)
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
  int v21;
  typedef gaia::ThreadManager::Self *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef uint16_t _g4_t_v25[3];
  typedef int _g4_t_v26;
  typedef uint8_t _g4_t_v27[16];
  typedef uint8_t _g4_t_v28[16];
  typedef uint8_t _g4_t_v29[16];
  typedef uint8_t _g4_t_v30[16];
  typedef uint8_t _g4_t_v31[28];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v22)) > _g4_s0 ? (0u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v23)) > _g4_s1 ? (40u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v24)) > _g4_s2 ? (40u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (54u + sizeof(_g4_t_v25)) > _g4_s3 ? (54u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v26)) > _g4_s4 ? (60u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v27)) > _g4_s5 ? (64u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v28)) > _g4_s6 ? (80u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v29)) > _g4_s7 ? (96u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (112u + sizeof(_g4_t_v30)) > _g4_s8 ? (112u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (128u + sizeof(_g4_t_v31)) > _g4_s9 ? (128u + sizeof(_g4_t_v31)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
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
    result = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
    if ( result == 0 )
    {
      if ( a7 != 0 )
      {
        v13 = (uint32_t *)opNew(0x44u);
        *v13 = a9;
        v13[1] = a8;
        v13[2] = 4037;
        Json::Value::Construct((int)(uintptr_t)(v13 + 3), nullptr);
        v13[7] = 0;
        v13[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v13 + 9), nullptr);
        v13[13] = 0;
        v13[14] = 0;
        v13[15] = 0;
        v13[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v27, a2);
        v14 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "accountType");
        Json::Value::opAssign(v14, (const Json::Value::Self *)v27);
        Json::Value::Destroy((Json::Value::Self *)v27);
        Json::Value::Construct((Json::Value::Self *)v28, a3);
        v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "object_type");
        Json::Value::opAssign(v15, (const Json::Value::Self *)v28);
        Json::Value::Destroy((Json::Value::Self *)v28);
        Json::Value::Construct((int)(uintptr_t)(v29), a4);
        v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "object_id");
        Json::Value::opAssign(v16, (const Json::Value::Self *)v29);
        Json::Value::Destroy((Json::Value::Self *)v29);
        Json::Value::Construct((int)(uintptr_t)(v30), a5);
        v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "text");
        Json::Value::opAssign(v17, (const Json::Value::Self *)v30);
        Json::Value::Destroy((Json::Value::Self *)v30);
        Json::Value::Construct((int)(uintptr_t)(v31), a6);
        v18 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "language");
        Json::Value::opAssign(v18, (const Json::Value::Self *)v31);
        Json::Value::Destroy((Json::Value::Self *)v31);
        v19 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v22));
        return gaia::ThreadManager::pushTask(v19, v13);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25[1]), "social", (int)(uintptr_t)(v25));
        result = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v25[1]);
        v12 = (void *)(*(uint32_t *)&v25[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v25[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v25[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          v24 = result;
          g4_std::string::Rep::M_destroy(v12);
          result = v24;
        }
        if ( result == 0 )
        {
          v20 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(&v26), v20);
          v21 = gaia::Gaia::GetInstance();
          v23 = gaia::Osiris::PostOnWall(
                  *(gaia::BaseServiceManager::Self **)(v21 + 24),
                  a3,
                  (int)(uintptr_t)(a4),
                  (int)(uintptr_t)(&v26),
                  (int)(uintptr_t)(a5),
                  (int)(uintptr_t)(a6),
                  0);
          g4_std::string::Destroy(&v26);
          return v23;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::MemberUpdateCustomFields  (binary VA: 0x14862b0)
// Original: gaia::Gaia_Osiris::MemberUpdateCustomFields
// ----------------------------------------------------------------------------
unsigned int gaia::Gaia_Osiris::MemberUpdateCustomFields(gaia::Gaia::Self *a1, uint32_t *a2, int a3, int a4, int a5, uint32_t *a6, char a7, int a8, int a9)
{
  char IsInitialized;
  unsigned int result;
  int Instance;
  void *v12;
  void *v13;
  uint32_t *v14;
  Json::Value::Self *v15;
  Json::Value::Self *v16;
  Json::Value::Self *v17;
  Json::Value::Self *v18;
  int v19;
  int v20;
  int v21;
  typedef gaia::ThreadManager::Self *_g4_t_v22;
  typedef Json::Value::Self *_g4_t_v23;
  typedef Json::Value::Self *_g4_t_v24;
  typedef Json::Value::Self *_g4_t_updated;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef uint8_t _g4_t_v31[16];
  typedef uint8_t _g4_t_v32[16];
  typedef uint8_t _g4_t_v33[16];
  typedef uint8_t _g4_t_v34[28];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v22)) > _g4_s0 ? (0u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v23)) > _g4_s1 ? (44u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v24)) > _g4_s2 ? (44u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_updated)) > _g4_s3 ? (44u + sizeof(_g4_t_updated)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v26)) > _g4_s4 ? (60u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v27)) > _g4_s5 ? (64u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v28)) > _g4_s6 ? (68u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v29)) > _g4_s7 ? (72u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v30)) > _g4_s8 ? (76u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v31)) > _g4_s9 ? (80u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (96u + sizeof(_g4_t_v32)) > _g4_s10 ? (96u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (112u + sizeof(_g4_t_v33)) > _g4_s11 ? (112u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (128u + sizeof(_g4_t_v34)) > _g4_s12 ? (128u + sizeof(_g4_t_v34)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);
  _g4_t_updated &updated = *reinterpret_cast<_g4_t_updated *>(_g4_sf + 44u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 60u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 64u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 68u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 72u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 76u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 80u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 96u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 112u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 128u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = 0xFFFFFFEB;
  if ( IsInitialized != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    result = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a4);
    if ( result == 0 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), (char *)&unk_1B15112, (int)(uintptr_t)(&v26));
      gaia::BaseServiceManager::GetCredentialString(&v28);
      g4_std::string::append_str(&v27, &v28);
      v12 = (void *)(v28 - 12);
      if ( (uint32_t *)(v28 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v12);
      }
      g4_std::string::append((int)(uintptr_t)(&v27), ":", 1u);
      g4_std::string::append_str(&v27, a6);
      if ( a7 != 0 )
      {
        v14 = (uint32_t *)opNew(0x44u);
        *v14 = a9;
        v14[1] = a8;
        v14[2] = 4026;
        Json::Value::Construct((int)(uintptr_t)(v14 + 3), nullptr);
        v14[7] = 0;
        v14[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v14 + 9), nullptr);
        v14[13] = 0;
        v14[14] = 0;
        v14[15] = 0;
        v14[16] = 0;
        Json::Value::Construct((int)(uintptr_t)(v31), a2);
        v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "group_id");
        Json::Value::opAssign(v15, (const Json::Value::Self *)v31);
        Json::Value::Destroy((Json::Value::Self *)v31);
        v14[8] = a3;
        Json::Value::Construct((Json::Value::Self *)v32, a4);
        v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "accountType");
        Json::Value::opAssign(v16, (const Json::Value::Self *)v32);
        Json::Value::Destroy((Json::Value::Self *)v32);
        Json::Value::Construct((Json::Value::Self *)v33, a5);
        v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "targetAccountType");
        Json::Value::opAssign(v17, (const Json::Value::Self *)v33);
        Json::Value::Destroy((Json::Value::Self *)v33);
        Json::Value::Construct((int)(uintptr_t)(v34), a6);
        v18 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "targetUsername");
        Json::Value::opAssign(v18, (const Json::Value::Self *)v34);
        Json::Value::Destroy((Json::Value::Self *)v34);
        v19 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v22));
        result = gaia::ThreadManager::pushTask(v19, v14);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "social", (int)(uintptr_t)(&v26) + 1);
        v23 = (Json::Value::Self *)gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a4, &v29);
        g4_std::string::Destroy(&v29);
        result = (unsigned int)(uintptr_t)(v23);
        if ( v23 == nullptr )
        {
          v20 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(&v30), v20);
          v21 = gaia::Gaia::GetInstance();
          updated = (Json::Value::Self *)gaia::Osiris::MemberUpdateCustomFields(
                                     *(gaia::BaseServiceManager::Self **)(v21 + 24),
                                     (int)(uintptr_t)(&v30),
                                     (int)(uintptr_t)(a2),
                                     (int)(uintptr_t)(&v27),
                                     a3,
                                     0);
          g4_std::string::Destroy(&v30);
          result = (unsigned int)(uintptr_t)(updated);
        }
      }
      v13 = (void *)(v27 - 12);
      if ( (uint32_t *)(v27 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
      {
        v24 = (Json::Value::Self *)result;
        g4_std::string::Rep::M_destroy(v13);
        return (unsigned int)(uintptr_t)(v24);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::DeliverParticipantAwards  (binary VA: 0x1486690)
// Original: gaia::Gaia_Osiris::DeliverParticipantAwards
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::DeliverParticipantAwards(gaia::Gaia::Self *a1, int a2, int a3, uint32_t *a4, uint32_t *a5, char a6, int a7, int a8)
{
  int InitializationAndLoginStatus;
  int Instance;
  void *v10;
  int v11;
  int v12;
  uint32_t *v14;
  Json::Value::Self *v15;
  Json::Value::Self *v16;
  Json::Value::Self *v17;
  int v18;
  typedef gaia::ThreadManager::Self *_g4_t_v19;
  typedef uint16_t _g4_t_v20[3];
  typedef char *_g4_t_v21;
  typedef uint8_t _g4_t_v22[4];
  typedef uint8_t _g4_t_v23[16];
  typedef uint8_t _g4_t_v24[16];
  typedef uint8_t _g4_t_v25[28];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v19)) > _g4_s0 ? (0u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (34u + sizeof(_g4_t_v20)) > _g4_s1 ? (34u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v21)) > _g4_s2 ? (40u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v22)) > _g4_s3 ? (44u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v23)) > _g4_s4 ? (48u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v24)) > _g4_s5 ? (64u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v25)) > _g4_s6 ? (80u + sizeof(_g4_t_v25)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 34u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 44u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 64u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 80u);

  InitializationAndLoginStatus = -21;
  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    InitializationAndLoginStatus = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
    if ( InitializationAndLoginStatus == 0 )
    {
      if ( a6 != 0 )
      {
        v14 = (uint32_t *)opNew(0x44u);
        *v14 = a8;
        v14[1] = a7;
        v14[2] = 4048;
        Json::Value::Construct((int)(uintptr_t)(v14 + 3), nullptr);
        v14[7] = 0;
        v14[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v14 + 9), nullptr);
        v14[13] = 0;
        v14[7] = a3;
        v14[14] = 0;
        v14[15] = 0;
        v14[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v23, a2);
        v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "accountType");
        Json::Value::opAssign(v15, (const Json::Value::Self *)v23);
        Json::Value::Destroy((Json::Value::Self *)v23);
        Json::Value::Construct((int)(uintptr_t)(v24), a4);
        v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "eventId");
        Json::Value::opAssign(v16, (const Json::Value::Self *)v24);
        Json::Value::Destroy((Json::Value::Self *)v24);
        Json::Value::Construct((int)(uintptr_t)(v25), a5);
        v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "participantId");
        Json::Value::opAssign(v17, (const Json::Value::Self *)v25);
        Json::Value::Destroy((Json::Value::Self *)v25);
        v18 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v19));
        return gaia::ThreadManager::pushTask(v18, v14);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20[1]), "social", (int)(uintptr_t)(v20));
        InitializationAndLoginStatus = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v20[1]);
        v10 = (void *)(*(uint32_t *)&v20[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v20[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v20[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v10);
        }
        if ( InitializationAndLoginStatus == 0 )
        {
          v21 = (char *)&dword_213B814;
          v11 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(v22), v11);
          v12 = gaia::Gaia::GetInstance();
          InitializationAndLoginStatus = gaia::Osiris::DeliverParticipantAwards(
                                           *(uint32_t *)(v12 + 24),
                                           &v21,
                                           v22,
                                           a4,
                                           a5,
                                           nullptr);
          g4_std::string::Destroy(v22);
          if ( InitializationAndLoginStatus == 0 )
            InitializationAndLoginStatus = gaia::BaseServiceManager::ParseMessages(v21, *((uint32_t *)v21 - 3), a3, 15);
          g4_std::string::Destroy(&v21);
        }
      }
    }
  }
  return InitializationAndLoginStatus;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::DeliverAwards  (binary VA: 0x1486990)
// Original: gaia::Gaia_Osiris::DeliverAwards
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::DeliverAwards(gaia::Gaia::Self *a1, int a2, int a3, uint32_t *a4, char a5, int a6, int a7)
{
  int InitializationAndLoginStatus;
  int Instance;
  void *v9;
  int v10;
  int v11;
  uint32_t *v13;
  Json::Value::Self *v14;
  Json::Value::Self *v15;
  int v16;
  typedef gaia::ThreadManager::Self *_g4_t_v17;
  typedef uint16_t _g4_t_v18[3];
  typedef char *_g4_t_v19;
  typedef uint8_t _g4_t_v20[4];
  typedef uint8_t _g4_t_v21[16];
  typedef uint8_t _g4_t_v22[28];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v17)) > _g4_s0 ? (0u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (34u + sizeof(_g4_t_v18)) > _g4_s1 ? (34u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v19)) > _g4_s2 ? (40u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v20)) > _g4_s3 ? (44u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v21)) > _g4_s4 ? (48u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v22)) > _g4_s5 ? (64u + sizeof(_g4_t_v22)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 34u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 64u);

  InitializationAndLoginStatus = -21;
  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    InitializationAndLoginStatus = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
    if ( InitializationAndLoginStatus == 0 )
    {
      if ( a5 != 0 )
      {
        v13 = (uint32_t *)opNew(0x44u);
        *v13 = a7;
        v13[1] = a6;
        v13[2] = 4047;
        Json::Value::Construct((int)(uintptr_t)(v13 + 3), nullptr);
        v13[7] = 0;
        v13[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v13 + 9), nullptr);
        v13[13] = 0;
        v13[7] = a3;
        v13[14] = 0;
        v13[15] = 0;
        v13[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v21, a2);
        v14 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "accountType");
        Json::Value::opAssign(v14, (const Json::Value::Self *)v21);
        Json::Value::Destroy((Json::Value::Self *)v21);
        Json::Value::Construct((int)(uintptr_t)(v22), a4);
        v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "eventId");
        Json::Value::opAssign(v15, (const Json::Value::Self *)v22);
        Json::Value::Destroy((Json::Value::Self *)v22);
        v16 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v17));
        return gaia::ThreadManager::pushTask(v16, v13);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18[1]), "social", (int)(uintptr_t)(v18));
        InitializationAndLoginStatus = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v18[1]);
        v9 = (void *)(*(uint32_t *)&v18[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v18[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v18[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v9);
        }
        if ( InitializationAndLoginStatus == 0 )
        {
          v19 = (char *)&dword_213B814;
          v10 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(v20), v10);
          v11 = gaia::Gaia::GetInstance();
          InitializationAndLoginStatus = gaia::Osiris::DeliverAwards(*(uint32_t *)(v11 + 24), &v19, v20, a4, nullptr);
          g4_std::string::Destroy(v20);
          if ( InitializationAndLoginStatus == 0 )
            InitializationAndLoginStatus = gaia::BaseServiceManager::ParseMessages(v19, *((uint32_t *)v19 - 3), a3, 15);
          g4_std::string::Destroy(&v19);
        }
      }
    }
  }
  return InitializationAndLoginStatus;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::DeleteEventAward  (binary VA: 0x1486c20)
// Original: gaia::Gaia_Osiris::DeleteEventAward
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::DeleteEventAward(gaia::Gaia::Self *a1, int a2, uint32_t *a3, unsigned int a4, char a5, int a6, int a7)
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
  int v17;
  typedef gaia::ThreadManager::Self *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint16_t _g4_t_v21[3];
  typedef int _g4_t_v22;
  typedef uint8_t _g4_t_v23[16];
  typedef uint8_t _g4_t_v24[16];
  typedef uint8_t _g4_t_v25[28];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v18)) > _g4_s0 ? (0u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v19)) > _g4_s1 ? (40u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v20)) > _g4_s2 ? (40u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (54u + sizeof(_g4_t_v21)) > _g4_s3 ? (54u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v22)) > _g4_s4 ? (60u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v23)) > _g4_s5 ? (64u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v24)) > _g4_s6 ? (80u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v25)) > _g4_s7 ? (96u + sizeof(_g4_t_v25)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 54u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 60u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 64u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 80u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 96u);

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
        v11[2] = 4036;
        Json::Value::Construct((int)(uintptr_t)(v11 + 3), nullptr);
        v11[7] = 0;
        v11[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v11 + 9), nullptr);
        v11[13] = 0;
        v11[14] = 0;
        v11[15] = 0;
        v11[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v23, a2);
        v12 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v11 + 3), "accountType");
        Json::Value::opAssign(v12, (const Json::Value::Self *)v23);
        Json::Value::Destroy((Json::Value::Self *)v23);
        Json::Value::Construct((int)(uintptr_t)(v24), a3);
        v13 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v11 + 3), "eventId");
        Json::Value::opAssign(v13, (const Json::Value::Self *)v24);
        Json::Value::Destroy((Json::Value::Self *)v24);
        Json::Value::Construct((Json::Value::Self *)v25, a4);
        v14 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v11 + 3), "start_rank");
        Json::Value::opAssign(v14, (const Json::Value::Self *)v25);
        Json::Value::Destroy((Json::Value::Self *)v25);
        v15 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v18));
        return gaia::ThreadManager::pushTask(v15, v11);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21[1]), "social", (int)(uintptr_t)(v21));
        result = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v21[1]);
        v10 = (void *)(*(uint32_t *)&v21[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v21[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v21[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          v20 = result;
          g4_std::string::Rep::M_destroy(v10);
          result = v20;
        }
        if ( result == 0 )
        {
          v16 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(&v22), v16);
          v17 = gaia::Gaia::GetInstance();
          v19 = gaia::Osiris::DeleteAward(*(gaia::BaseServiceManager::Self **)(v17 + 24), (int)(uintptr_t)(&v22), (int)(uintptr_t)(a3), a4, 0);
          g4_std::string::Destroy(&v22);
          return v19;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::AddEventAward  (binary VA: 0x1486ee0)
// Original: gaia::Gaia_Osiris::AddEventAward
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::AddEventAward(gaia::Gaia::Self *a1, int a2, uint32_t *a3, unsigned int a4, unsigned int a5, uint32_t *a6, uint32_t *a7, char a8, int a9, int a10)
{
  char IsInitialized;
  int result;
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
  typedef gaia::ThreadManager::Self *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint16_t _g4_t_v27[3];
  typedef int _g4_t_v28;
  typedef uint8_t _g4_t_v29[16];
  typedef uint8_t _g4_t_v30[16];
  typedef uint8_t _g4_t_v31[16];
  typedef uint8_t _g4_t_v32[16];
  typedef uint8_t _g4_t_v33[16];
  typedef uint8_t _g4_t_v34[28];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v24)) > _g4_s0 ? (0u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v25)) > _g4_s1 ? (44u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v26)) > _g4_s2 ? (44u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (54u + sizeof(_g4_t_v27)) > _g4_s3 ? (54u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v28)) > _g4_s4 ? (60u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v29)) > _g4_s5 ? (64u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v30)) > _g4_s6 ? (80u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v31)) > _g4_s7 ? (96u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (112u + sizeof(_g4_t_v32)) > _g4_s8 ? (112u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (128u + sizeof(_g4_t_v33)) > _g4_s9 ? (128u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (144u + sizeof(_g4_t_v34)) > _g4_s10 ? (144u + sizeof(_g4_t_v34)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 54u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 60u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 64u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 80u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 96u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 112u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 128u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 144u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    result = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
    if ( result == 0 )
    {
      if ( a8 != 0 )
      {
        v14 = (uint32_t *)opNew(0x44u);
        *v14 = a10;
        v14[1] = a9;
        v14[2] = 4035;
        Json::Value::Construct((int)(uintptr_t)(v14 + 3), nullptr);
        v14[7] = 0;
        v14[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v14 + 9), nullptr);
        v14[13] = 0;
        v14[14] = 0;
        v14[15] = 0;
        v14[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v29, a2);
        v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "accountType");
        Json::Value::opAssign(v15, (const Json::Value::Self *)v29);
        Json::Value::Destroy((Json::Value::Self *)v29);
        Json::Value::Construct((int)(uintptr_t)(v30), a3);
        v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "eventId");
        Json::Value::opAssign(v16, (const Json::Value::Self *)v30);
        Json::Value::Destroy((Json::Value::Self *)v30);
        Json::Value::Construct((Json::Value::Self *)v31, a4);
        v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "start_rank");
        Json::Value::opAssign(v17, (const Json::Value::Self *)v31);
        Json::Value::Destroy((Json::Value::Self *)v31);
        Json::Value::Construct((Json::Value::Self *)v32, a5);
        v18 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "end_rank");
        Json::Value::opAssign(v18, (const Json::Value::Self *)v32);
        Json::Value::Destroy((Json::Value::Self *)v32);
        Json::Value::Construct((int)(uintptr_t)(v33), a6);
        v19 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "gift");
        Json::Value::opAssign(v19, (const Json::Value::Self *)v33);
        Json::Value::Destroy((Json::Value::Self *)v33);
        Json::Value::Construct((int)(uintptr_t)(v34), a7);
        v20 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "percentile");
        Json::Value::opAssign(v20, (const Json::Value::Self *)v34);
        Json::Value::Destroy((Json::Value::Self *)v34);
        v21 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v24));
        return gaia::ThreadManager::pushTask(v21, v14);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27[1]), "social", (int)(uintptr_t)(v27));
        result = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v27[1]);
        v13 = (void *)(*(uint32_t *)&v27[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v27[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v27[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          v26 = result;
          g4_std::string::Rep::M_destroy(v13);
          result = v26;
        }
        if ( result == 0 )
        {
          v22 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(&v28), v22);
          v23 = gaia::Gaia::GetInstance();
          v25 = gaia::Osiris::AddEventAward(
                  *(gaia::BaseServiceManager::Self **)(v23 + 24),
                  (int)(uintptr_t)(&v28),
                  (int)(uintptr_t)(a3),
                  a4,
                  a5,
                  (int)(uintptr_t)(a6),
                  (int)(uintptr_t)(a7),
                  0);
          g4_std::string::Destroy(&v28);
          return v25;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::DeleteEvent  (binary VA: 0x1487280)
// Original: gaia::Gaia_Osiris::DeleteEvent
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::DeleteEvent(gaia::Gaia::Self *a1, int a2, uint32_t *a3, char a4, int a5, int a6)
{
  char IsInitialized;
  int result;
  int Instance;
  void *v9;
  uint32_t *v10;
  Json::Value::Self *v11;
  Json::Value::Self *v12;
  int v13;
  int v14;
  int v15;
  typedef gaia::ThreadManager::Self *_g4_t_v16;
  typedef Json::Value::Self *_g4_t_v17;
  typedef Json::Value::Self *_g4_t_v18;
  typedef uint16_t _g4_t_v19[3];
  typedef int _g4_t_v20;
  typedef uint8_t _g4_t_v21[16];
  typedef uint8_t _g4_t_v22[28];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v17)) > _g4_s1 ? (28u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v18)) > _g4_s2 ? (28u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (38u + sizeof(_g4_t_v19)) > _g4_s3 ? (38u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v20)) > _g4_s4 ? (44u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v21)) > _g4_s5 ? (48u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v22)) > _g4_s6 ? (64u + sizeof(_g4_t_v22)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 38u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 64u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    result = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
    if ( result == 0 )
    {
      if ( a4 != 0 )
      {
        v10 = (uint32_t *)opNew(0x44u);
        *v10 = a6;
        v10[1] = a5;
        v10[2] = 4030;
        Json::Value::Construct((int)(uintptr_t)(v10 + 3), nullptr);
        v10[7] = 0;
        v10[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v10 + 9), nullptr);
        v10[13] = 0;
        v10[14] = 0;
        v10[15] = 0;
        v10[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v21, a2);
        v11 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v10 + 3), "accountType");
        Json::Value::opAssign(v11, (const Json::Value::Self *)v21);
        Json::Value::Destroy((Json::Value::Self *)v21);
        Json::Value::Construct((int)(uintptr_t)(v22), a3);
        v12 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v10 + 3), "eventId");
        Json::Value::opAssign(v12, (const Json::Value::Self *)v22);
        Json::Value::Destroy((Json::Value::Self *)v22);
        v13 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v16));
        return gaia::ThreadManager::pushTask(v13, v10);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19[1]), "social", (int)(uintptr_t)(v19));
        result = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v19[1]);
        v9 = (void *)(*(uint32_t *)&v19[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v19[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v19[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          v18 = (Json::Value::Self *)result;
          g4_std::string::Rep::M_destroy(v9);
          result = (int)(uintptr_t)(v18);
        }
        if ( result == 0 )
        {
          v14 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(&v20), v14);
          v15 = gaia::Gaia::GetInstance();
          v17 = (Json::Value::Self *)gaia::Osiris::DeleteEvent(
                                 *(gaia::BaseServiceManager::Self **)(v15 + 24),
                                 (int)(uintptr_t)(&v20),
                                 (int)(uintptr_t)(a3),
                                 0);
          g4_std::string::Destroy(&v20);
          return (int)(uintptr_t)(v17);
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::UpdateEvent  (binary VA: 0x14874d0)
// Original: gaia::Gaia_Osiris::UpdateEvent
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::UpdateEvent(gaia::Gaia::Self *a1, int a2, int a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, uint32_t *a7, uint32_t *a8, uint32_t *a9, uint32_t *a10, uint32_t *a11, int a12, char a13, int a14, int a15)
{
  int InitializationAndLoginStatus;
  int Instance;
  void *v17;
  int v18;
  int v19;
  uint32_t *v21;
  Json::Value::Self *v22;
  Json::Value::Self *v23;
  Json::Value::Self *v24;
  Json::Value::Self *v25;
  Json::Value::Self *v26;
  Json::Value::Self *v27;
  Json::Value::Self *v28;
  Json::Value::Self *v29;
  Json::Value::Self *v30;
  int v31;
  typedef gaia::ThreadManager::Self *_g4_t_v32;
  typedef uint16_t _g4_t_v33[3];
  typedef char *_g4_t_v34;
  typedef uint8_t _g4_t_v35[4];
  typedef uint8_t _g4_t_v36[16];
  typedef uint8_t _g4_t_v37[16];
  typedef uint8_t _g4_t_v38[16];
  typedef uint8_t _g4_t_v39[16];
  typedef uint8_t _g4_t_v40[16];
  typedef uint8_t _g4_t_v41[16];
  typedef uint8_t _g4_t_v42[16];
  typedef uint8_t _g4_t_v43[16];
  typedef uint8_t _g4_t_v44[44];
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (0u + sizeof(_g4_t_v32)) > _g4_s0 ? (0u + sizeof(_g4_t_v32)) : _g4_s0,
    _g4_s2 = (66u + sizeof(_g4_t_v33)) > _g4_s1 ? (66u + sizeof(_g4_t_v33)) : _g4_s1,
    _g4_s3 = (72u + sizeof(_g4_t_v34)) > _g4_s2 ? (72u + sizeof(_g4_t_v34)) : _g4_s2,
    _g4_s4 = (76u + sizeof(_g4_t_v35)) > _g4_s3 ? (76u + sizeof(_g4_t_v35)) : _g4_s3,
    _g4_s5 = (80u + sizeof(_g4_t_v36)) > _g4_s4 ? (80u + sizeof(_g4_t_v36)) : _g4_s4,
    _g4_s6 = (96u + sizeof(_g4_t_v37)) > _g4_s5 ? (96u + sizeof(_g4_t_v37)) : _g4_s5,
    _g4_s7 = (112u + sizeof(_g4_t_v38)) > _g4_s6 ? (112u + sizeof(_g4_t_v38)) : _g4_s6,
    _g4_s8 = (128u + sizeof(_g4_t_v39)) > _g4_s7 ? (128u + sizeof(_g4_t_v39)) : _g4_s7,
    _g4_s9 = (144u + sizeof(_g4_t_v40)) > _g4_s8 ? (144u + sizeof(_g4_t_v40)) : _g4_s8,
    _g4_s10 = (160u + sizeof(_g4_t_v41)) > _g4_s9 ? (160u + sizeof(_g4_t_v41)) : _g4_s9,
    _g4_s11 = (176u + sizeof(_g4_t_v42)) > _g4_s10 ? (176u + sizeof(_g4_t_v42)) : _g4_s10,
    _g4_s12 = (192u + sizeof(_g4_t_v43)) > _g4_s11 ? (192u + sizeof(_g4_t_v43)) : _g4_s11,
    _g4_s13 = (208u + sizeof(_g4_t_v44)) > _g4_s12 ? (208u + sizeof(_g4_t_v44)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 0u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 66u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 72u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 76u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 80u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 96u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 112u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 128u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 144u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 160u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 176u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 192u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 208u);

  InitializationAndLoginStatus = -21;
  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
    return InitializationAndLoginStatus;
  Instance = gaia::Gaia::GetInstance();
  InitializationAndLoginStatus = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
  if ( InitializationAndLoginStatus != 0 )
    return InitializationAndLoginStatus;
  if ( a13 == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33[1]), "social", (int)(uintptr_t)(v33));
    InitializationAndLoginStatus = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v33[1]);
    v17 = (void *)(*(uint32_t *)&v33[1] - 12);
    if ( (uint32_t *)(*(uint32_t *)&v33[1] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v33[1] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v17);
    }
    if ( InitializationAndLoginStatus == 0 )
    {
      v34 = (char *)&dword_213B814;
      v18 = gaia::Gaia::GetInstance();
      gaia::Gaia::GetJanusToken((int)(uintptr_t)(v35), v18);
      v19 = gaia::Gaia::GetInstance();
      InitializationAndLoginStatus = gaia::Osiris::UpdateEvent(
                                       *(uint32_t *)(v19 + 24),
                                       &v34,
                                       v35,
                                       a4,
                                       a5,
                                       a6,
                                       a7,
                                       a8,
                                       a9,
                                       a10,
                                       a11,
                                       a12,
                                       nullptr);
      g4_std::string::Destroy(v35);
      if ( InitializationAndLoginStatus == 0 )
        InitializationAndLoginStatus = gaia::BaseServiceManager::ParseMessages(v34, *((uint32_t *)v34 - 3), a3, 11);
      g4_std::string::Destroy(&v34);
    }
    return InitializationAndLoginStatus;
  }
  v21 = (uint32_t *)opNew(0x44u);
  *v21 = a15;
  v21[1] = a14;
  v21[2] = 4029;
  Json::Value::Construct((int)(uintptr_t)(v21 + 3), nullptr);
  v21[7] = 0;
  v21[8] = 0;
  Json::Value::Construct((int)(uintptr_t)(v21 + 9), nullptr);
  v21[13] = 0;
  v21[7] = a3;
  v21[14] = 0;
  v21[15] = 0;
  v21[16] = 0;
  Json::Value::Construct((Json::Value::Self *)v36, a2);
  v22 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v21 + 3), "accountType");
  Json::Value::opAssign(v22, (const Json::Value::Self *)v36);
  Json::Value::Destroy((Json::Value::Self *)v36);
  Json::Value::Construct((int)(uintptr_t)(v37), a5);
  v23 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v21 + 3), "event_name");
  Json::Value::opAssign(v23, (const Json::Value::Self *)v37);
  Json::Value::Destroy((Json::Value::Self *)v37);
  Json::Value::Construct((int)(uintptr_t)(v38), a4);
  v24 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v21 + 3), "eventId");
  Json::Value::opAssign(v24, (const Json::Value::Self *)v38);
  Json::Value::Destroy((Json::Value::Self *)v38);
  Json::Value::Construct((int)(uintptr_t)(v39), a7);
  v25 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v21 + 3), "event_category");
  Json::Value::opAssign(v25, (const Json::Value::Self *)v39);
  Json::Value::Destroy((Json::Value::Self *)v39);
  Json::Value::Construct((int)(uintptr_t)(v40), a6);
  v26 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v21 + 3), "event_description");
  Json::Value::opAssign(v26, (const Json::Value::Self *)v40);
  Json::Value::Destroy((Json::Value::Self *)v40);
  Json::Value::Construct((int)(uintptr_t)(v41), a8);
  v27 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v21 + 3), "startDate");
  Json::Value::opAssign(v27, (const Json::Value::Self *)v41);
  Json::Value::Destroy((Json::Value::Self *)v41);
  Json::Value::Construct((int)(uintptr_t)(v42), a9);
  v28 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v21 + 3), "endDate");
  Json::Value::opAssign(v28, (const Json::Value::Self *)v42);
  Json::Value::Destroy((Json::Value::Self *)v42);
  Json::Value::Construct((int)(uintptr_t)(v43), a10);
  v29 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v21 + 3), "group_id");
  Json::Value::opAssign(v29, (const Json::Value::Self *)v43);
  Json::Value::Destroy((Json::Value::Self *)v43);
  Json::Value::Construct((int)(uintptr_t)(v44), a11);
  v30 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v21 + 3), "tournamentObj");
  Json::Value::opAssign(v30, (const Json::Value::Self *)v44);
  Json::Value::Destroy((Json::Value::Self *)v44);
  v21[8] = a12;
  v31 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v32));
  return gaia::ThreadManager::pushTask(v31, v21);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::SearchEvents  (binary VA: 0x14879a0)
// Original: gaia::Gaia_Osiris::SearchEvents
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::SearchEvents(gaia::Gaia::Self *a1, int a2, int a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, unsigned int a7, unsigned int a8, char a9, int a10, int a11)
{
  int InitializationAndLoginStatus;
  int Instance;
  void *v13;
  uint32_t *v15;
  Json::Value::Self *v16;
  Json::Value::Self *v17;
  Json::Value::Self *v18;
  Json::Value::Self *v19;
  Json::Value::Self *v20;
  Json::Value::Self *v21;
  int v22;
  int v23;
  int v24;
  int v25;
  typedef gaia::ThreadManager::Self *_g4_t_ptr;
  typedef uint16_t _g4_t_v27[3];
  typedef char *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef uint8_t _g4_t_v30[4];
  typedef uint8_t _g4_t_v31[16];
  typedef uint8_t _g4_t_v32[16];
  typedef uint8_t _g4_t_v33[16];
  typedef uint8_t _g4_t_v34[16];
  typedef uint8_t _g4_t_v35[16];
  typedef uint8_t _g4_t_v36[44];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (78u + sizeof(_g4_t_v27)) > _g4_s1 ? (78u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (84u + sizeof(_g4_t_v28)) > _g4_s2 ? (84u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (88u + sizeof(_g4_t_v29)) > _g4_s3 ? (88u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (92u + sizeof(_g4_t_v30)) > _g4_s4 ? (92u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (96u + sizeof(_g4_t_v31)) > _g4_s5 ? (96u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (112u + sizeof(_g4_t_v32)) > _g4_s6 ? (112u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (128u + sizeof(_g4_t_v33)) > _g4_s7 ? (128u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (144u + sizeof(_g4_t_v34)) > _g4_s8 ? (144u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (160u + sizeof(_g4_t_v35)) > _g4_s9 ? (160u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (176u + sizeof(_g4_t_v36)) > _g4_s10 ? (176u + sizeof(_g4_t_v36)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 78u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 84u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 88u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 92u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 96u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 112u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 128u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 144u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 160u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 176u);

  InitializationAndLoginStatus = -21;
  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
    return InitializationAndLoginStatus;
  Instance = gaia::Gaia::GetInstance();
  InitializationAndLoginStatus = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
  if ( InitializationAndLoginStatus != 0 )
    return InitializationAndLoginStatus;
  if ( a9 != 0 )
  {
    v15 = (uint32_t *)opNew(0x44u);
    *v15 = a11;
    v15[1] = a10;
    v15[2] = 4033;
    Json::Value::Construct((int)(uintptr_t)(v15 + 3), nullptr);
    v15[7] = 0;
    v15[8] = 0;
    Json::Value::Construct((int)(uintptr_t)(v15 + 9), nullptr);
    v15[13] = 0;
    v15[7] = a3;
    v15[14] = 0;
    v15[15] = 0;
    v15[16] = 0;
    Json::Value::Construct((Json::Value::Self *)v31, a2);
    v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "accountType");
    Json::Value::opAssign(v16, (const Json::Value::Self *)v31);
    Json::Value::Destroy((Json::Value::Self *)v31);
    Json::Value::Construct((int)(uintptr_t)(v32), a4);
    v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "event_category");
    Json::Value::opAssign(v17, (const Json::Value::Self *)v32);
    Json::Value::Destroy((Json::Value::Self *)v32);
    Json::Value::Construct((int)(uintptr_t)(v33), a5);
    v18 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "status");
    Json::Value::opAssign(v18, (const Json::Value::Self *)v33);
    Json::Value::Destroy((Json::Value::Self *)v33);
    Json::Value::Construct((int)(uintptr_t)(v34), a6);
    v19 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "keywords");
    Json::Value::opAssign(v19, (const Json::Value::Self *)v34);
    Json::Value::Destroy((Json::Value::Self *)v34);
    Json::Value::Construct((Json::Value::Self *)v35, a7);
    v20 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "limit");
    Json::Value::opAssign(v20, (const Json::Value::Self *)v35);
    Json::Value::Destroy((Json::Value::Self *)v35);
    Json::Value::Construct((Json::Value::Self *)v36, a8);
    v21 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "offset");
    Json::Value::opAssign(v21, (const Json::Value::Self *)v36);
    Json::Value::Destroy((Json::Value::Self *)v36);
    v22 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(ptr));
    return gaia::ThreadManager::pushTask(v22, v15);
  }
  else
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27[1]), "social", (int)(uintptr_t)(v27));
    InitializationAndLoginStatus = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v27[1]);
    v13 = (void *)(*(uint32_t *)&v27[1] - 12);
    if ( (uint32_t *)(*(uint32_t *)&v27[1] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v27[1] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v13);
    }
    if ( InitializationAndLoginStatus != 0 )
      return InitializationAndLoginStatus;
    v28 = nullptr;
    v23 = gaia::Gaia::GetInstance();
    gaia::Gaia::GetJanusToken((int)(uintptr_t)(v30), v23);
    v24 = gaia::Gaia::GetInstance();
    v25 = gaia::Osiris::SearchEvents(
            *(gaia::BaseServiceManager::Self **)(v24 + 24),
            (void **)&v28,
            &v29,
            (int)(uintptr_t)(v30),
            (int)(uintptr_t)(a4),
            (int)(uintptr_t)(a5),
            (int)(uintptr_t)(a6),
            a7,
            a8,
            0);
    g4_std::string::Destroy(v30);
    if ( v25 == 0 )
      gaia::BaseServiceManager::ParseMessages(v28, v29, a3, 11);
    free(v28);
    return v25;
  }
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::ShowEvent  (binary VA: 0x1487da0)
// Original: gaia::Gaia_Osiris::ShowEvent
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::ShowEvent(gaia::Gaia::Self *a1, int a2, int a3, uint32_t *a4, char a5, int a6, int a7)
{
  int InitializationAndLoginStatus;
  int Instance;
  void *v9;
  uint32_t *v11;
  Json::Value::Self *v12;
  Json::Value::Self *v13;
  int v14;
  int v15;
  int v16;
  Json::Value::Self *v17;
  bool v18;
  int v19;
  typedef gaia::ThreadManager::Self *_g4_t_ptr;
  typedef Json::Value::Self *_g4_t_v21;
  typedef uint16_t _g4_t_v22[3];
  typedef char *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef uint8_t _g4_t_v25[4];
  typedef uint8_t _g4_t_v26[16];
  typedef uint8_t _g4_t_v27[16];
  typedef uint8_t _g4_t_v28[16];
  typedef uint8_t _g4_t_v29[16];
  typedef uint8_t _g4_t_v30[16];
  typedef int _g4_t_v31;
  typedef uint8_t _g4_t_v32[124];
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v21)) > _g4_s1 ? (40u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (58u + sizeof(_g4_t_v22)) > _g4_s2 ? (58u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v23)) > _g4_s3 ? (64u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (68u + sizeof(_g4_t_v24)) > _g4_s4 ? (68u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v25)) > _g4_s5 ? (72u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v26)) > _g4_s6 ? (76u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (92u + sizeof(_g4_t_v27)) > _g4_s7 ? (92u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (108u + sizeof(_g4_t_v28)) > _g4_s8 ? (108u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (124u + sizeof(_g4_t_v29)) > _g4_s9 ? (124u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (140u + sizeof(_g4_t_v30)) > _g4_s10 ? (140u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (156u + sizeof(_g4_t_v31)) > _g4_s11 ? (156u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (160u + sizeof(_g4_t_v32)) > _g4_s12 ? (160u + sizeof(_g4_t_v32)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 58u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 64u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 68u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 72u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 76u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 92u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 108u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 124u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 140u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 156u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 160u);

  gaia::Gaia::GetInstance();
  InitializationAndLoginStatus = -21;
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
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
        v11[2] = 4031;
        Json::Value::Construct((int)(uintptr_t)(v11 + 3), nullptr);
        v11[7] = 0;
        v11[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v11 + 9), nullptr);
        v11[13] = 0;
        v11[14] = 0;
        v11[15] = 0;
        v11[16] = 0;
        v11[7] = a3;
        Json::Value::Construct((Json::Value::Self *)v26, a2);
        v12 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v11 + 3), "accountType");
        Json::Value::opAssign(v12, (const Json::Value::Self *)v26);
        Json::Value::Destroy((Json::Value::Self *)v26);
        Json::Value::Construct((int)(uintptr_t)(v27), a4);
        v13 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v11 + 3), "eventId");
        Json::Value::opAssign(v13, (const Json::Value::Self *)v27);
        Json::Value::Destroy((Json::Value::Self *)v27);
        v14 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(ptr));
        return gaia::ThreadManager::pushTask(v14, v11);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22[1]), "social", (int)(uintptr_t)(v22));
        InitializationAndLoginStatus = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v22[1]);
        v9 = (void *)(*(uint32_t *)&v22[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v22[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v22[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v9);
        }
        if ( InitializationAndLoginStatus == 0 )
        {
          v23 = nullptr;
          v15 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(v25), v15);
          v16 = gaia::Gaia::GetInstance();
          InitializationAndLoginStatus = gaia::Osiris::ShowEvent(
                                           *(gaia::BaseServiceManager::Self **)(v16 + 24),
                                           (void **)&v23,
                                           &v24,
                                           (int)(uintptr_t)(v25),
                                           (int)(uintptr_t)(a4),
                                           0);
          g4_std::string::Destroy(v25);
          if ( InitializationAndLoginStatus == 0 )
          {
            Json::Reader::Construct((Json::Reader::Self *)v32);
            Json::Value::Construct((int)(uintptr_t)(v28), nullptr);
            if ( (uint8_t)Json::Reader::parse((Json::Reader::Self *)v32, v23, &v23[v24], (Json::Value::Self *)v28, true) == 0 )
            {
              InitializationAndLoginStatus = -12;
              free(v23);
              Json::Value::Destroy((Json::Value::Self *)v28);
              sub_545800((int)(uintptr_t)(v32));
              return InitializationAndLoginStatus;
            }
            Json::Value::Construct((Json::Value::Self *)v29, (const Json::Value::Self *)v28);
            gaia::BaseJSONServiceResponse::Construct((Json::Value::Self *)v30, (Json::Value::Self *)v29);
            Json::Value::Destroy((Json::Value::Self *)v29);
            v17 = *(Json::Value::Self **)(a3 + 4);
            v18 = v17 == *(Json::Value::Self **)(a3 + 8);
            v31 = 11;
            if ( v18 )
            {
              g4_std::vector_gaia_BaseJSONServiceResp_48cd2f::M_insert_aux(a3, v17, (Json::Value::Self *)v30);
            }
            else
            {
              v19 = 0;
              if ( v17 != nullptr )
              {
                v21 = v17;
                Json::Value::Construct(v17, (const Json::Value::Self *)v30);
                *((uint32_t *)v21 + 4) = v31;
                v19 = *(uint32_t *)(a3 + 4);
              }
              *(uint32_t *)(a3 + 4) = v19 + 20;
            }
            gaia::BaseJSONServiceResponse::Destroy((gaia::BaseJSONServiceResponse::Self *)v30);
            Json::Value::Destroy((Json::Value::Self *)v28);
            sub_545800((int)(uintptr_t)(v32));
          }
          free(v23);
        }
      }
    }
  }
  return InitializationAndLoginStatus;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::SetTournamentInfo  (binary VA: 0x14881b0)
// Original: gaia::Gaia_Osiris::SetTournamentInfo
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::SetTournamentInfo(gaia::Gaia::Self *a1, int a2, int a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, int a7, char a8, int a9, int a10)
{
  int InitializationAndLoginStatus;
  int Instance;
  void *v12;
  int v13;
  int v14;
  uint32_t *v16;
  Json::Value::Self *v17;
  Json::Value::Self *v18;
  Json::Value::Self *v19;
  Json::Value::Self *v20;
  Json::Value::Self *v21;
  int v22;
  typedef gaia::ThreadManager::Self *_g4_t_v23;
  typedef uint16_t _g4_t_v24[3];
  typedef char *_g4_t_v25;
  typedef uint8_t _g4_t_v26[4];
  typedef uint8_t _g4_t_v27[16];
  typedef uint8_t _g4_t_v28[16];
  typedef uint8_t _g4_t_v29[16];
  typedef uint8_t _g4_t_v30[16];
  typedef uint8_t _g4_t_v31[28];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v23)) > _g4_s0 ? (0u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (34u + sizeof(_g4_t_v24)) > _g4_s1 ? (34u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v25)) > _g4_s2 ? (40u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v26)) > _g4_s3 ? (44u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v27)) > _g4_s4 ? (48u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v28)) > _g4_s5 ? (64u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v29)) > _g4_s6 ? (80u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v30)) > _g4_s7 ? (96u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (112u + sizeof(_g4_t_v31)) > _g4_s8 ? (112u + sizeof(_g4_t_v31)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 34u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 64u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 80u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 96u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 112u);

  InitializationAndLoginStatus = -21;
  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    InitializationAndLoginStatus = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
    if ( InitializationAndLoginStatus == 0 )
    {
      if ( a8 != 0 )
      {
        v16 = (uint32_t *)opNew(0x44u);
        *v16 = a10;
        v16[1] = a9;
        v16[2] = 4034;
        Json::Value::Construct((int)(uintptr_t)(v16 + 3), nullptr);
        v16[7] = 0;
        v16[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v16 + 9), nullptr);
        v16[13] = 0;
        v16[7] = a3;
        v16[14] = 0;
        v16[15] = 0;
        v16[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v27, a2);
        v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v16 + 3), "accountType");
        Json::Value::opAssign(v17, (const Json::Value::Self *)v27);
        Json::Value::Destroy((Json::Value::Self *)v27);
        Json::Value::Construct((int)(uintptr_t)(v28), a5);
        v18 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v16 + 3), "event_type");
        Json::Value::opAssign(v18, (const Json::Value::Self *)v28);
        Json::Value::Destroy((Json::Value::Self *)v28);
        Json::Value::Construct((int)(uintptr_t)(v29), a4);
        v19 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v16 + 3), "eventId");
        Json::Value::opAssign(v19, (const Json::Value::Self *)v29);
        Json::Value::Destroy((Json::Value::Self *)v29);
        Json::Value::Construct((int)(uintptr_t)(v30), a6);
        v20 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v16 + 3), "leaderboard");
        Json::Value::opAssign(v20, (const Json::Value::Self *)v30);
        Json::Value::Destroy((Json::Value::Self *)v30);
        Json::Value::Construct((Json::Value::Self *)v31, a7);
        v21 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v16 + 3), "deliveryType");
        Json::Value::opAssign(v21, (const Json::Value::Self *)v31);
        Json::Value::Destroy((Json::Value::Self *)v31);
        v22 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v23));
        return gaia::ThreadManager::pushTask(v22, v16);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24[1]), "social", (int)(uintptr_t)(v24));
        InitializationAndLoginStatus = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v24[1]);
        v12 = (void *)(*(uint32_t *)&v24[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v24[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v24[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v12);
        }
        if ( InitializationAndLoginStatus == 0 )
        {
          v25 = (char *)&dword_213B814;
          v13 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(v26), v13);
          v14 = gaia::Gaia::GetInstance();
          InitializationAndLoginStatus = gaia::Osiris::SetTournamentInfo(
                                           *(uint32_t *)(v14 + 24),
                                           &v25,
                                           v26,
                                           a4,
                                           a5,
                                           a6,
                                           a7,
                                           nullptr);
          g4_std::string::Destroy(v26);
          if ( InitializationAndLoginStatus == 0 )
            InitializationAndLoginStatus = gaia::BaseServiceManager::ParseMessages(v25, *((uint32_t *)v25 - 3), a3, 11);
          g4_std::string::Destroy(&v25);
        }
      }
    }
  }
  return InitializationAndLoginStatus;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::CreateEvent  (binary VA: 0x1488560)
// Original: gaia::Gaia_Osiris::CreateEvent
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::CreateEvent(gaia::Gaia::Self *a1, int a2, int a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, uint32_t *a7, uint32_t *a8, uint32_t *a9, uint32_t *a10, int a11, char a12, int a13, int a14)
{
  int InitializationAndLoginStatus;
  int Instance;
  void *v16;
  int v17;
  int v18;
  uint32_t *v20;
  Json::Value::Self *v21;
  Json::Value::Self *v22;
  Json::Value::Self *v23;
  Json::Value::Self *v24;
  Json::Value::Self *v25;
  Json::Value::Self *v26;
  Json::Value::Self *v27;
  Json::Value::Self *v28;
  int v29;
  typedef gaia::ThreadManager::Self *_g4_t_v30;
  typedef uint16_t _g4_t_v31[3];
  typedef char *_g4_t_v32;
  typedef uint8_t _g4_t_v33[4];
  typedef uint8_t _g4_t_v34[16];
  typedef uint8_t _g4_t_v35[16];
  typedef uint8_t _g4_t_v36[16];
  typedef uint8_t _g4_t_v37[16];
  typedef uint8_t _g4_t_v38[16];
  typedef uint8_t _g4_t_v39[16];
  typedef uint8_t _g4_t_v40[16];
  typedef uint8_t _g4_t_v41[44];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (0u + sizeof(_g4_t_v30)) > _g4_s0 ? (0u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (50u + sizeof(_g4_t_v31)) > _g4_s1 ? (50u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (56u + sizeof(_g4_t_v32)) > _g4_s2 ? (56u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v33)) > _g4_s3 ? (60u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v34)) > _g4_s4 ? (64u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (80u + sizeof(_g4_t_v35)) > _g4_s5 ? (80u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (96u + sizeof(_g4_t_v36)) > _g4_s6 ? (96u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (112u + sizeof(_g4_t_v37)) > _g4_s7 ? (112u + sizeof(_g4_t_v37)) : _g4_s7,
    _g4_s9 = (128u + sizeof(_g4_t_v38)) > _g4_s8 ? (128u + sizeof(_g4_t_v38)) : _g4_s8,
    _g4_s10 = (144u + sizeof(_g4_t_v39)) > _g4_s9 ? (144u + sizeof(_g4_t_v39)) : _g4_s9,
    _g4_s11 = (160u + sizeof(_g4_t_v40)) > _g4_s10 ? (160u + sizeof(_g4_t_v40)) : _g4_s10,
    _g4_s12 = (176u + sizeof(_g4_t_v41)) > _g4_s11 ? (176u + sizeof(_g4_t_v41)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 0u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 50u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 56u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 60u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 64u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 80u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 96u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 112u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 128u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 144u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 160u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 176u);

  InitializationAndLoginStatus = -21;
  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
    return InitializationAndLoginStatus;
  Instance = gaia::Gaia::GetInstance();
  InitializationAndLoginStatus = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
  if ( InitializationAndLoginStatus != 0 )
    return InitializationAndLoginStatus;
  if ( a12 == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31[1]), "social_event", (int)(uintptr_t)(v31));
    InitializationAndLoginStatus = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v31[1]);
    v16 = (void *)(*(uint32_t *)&v31[1] - 12);
    if ( (uint32_t *)(*(uint32_t *)&v31[1] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v31[1] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v16);
    }
    if ( InitializationAndLoginStatus == 0 )
    {
      v32 = (char *)&dword_213B814;
      v17 = gaia::Gaia::GetInstance();
      gaia::Gaia::GetJanusToken((int)(uintptr_t)(v33), v17);
      v18 = gaia::Gaia::GetInstance();
      InitializationAndLoginStatus = gaia::Osiris::CreateEvent(
                                       *(uint32_t *)(v18 + 24),
                                       &v32,
                                       v33,
                                       a4,
                                       a5,
                                       a6,
                                       a7,
                                       a8,
                                       a9,
                                       a10,
                                       a11,
                                       nullptr);
      g4_std::string::Destroy(v33);
      if ( InitializationAndLoginStatus == 0 )
        InitializationAndLoginStatus = gaia::BaseServiceManager::ParseMessages(v32, *((uint32_t *)v32 - 3), a3, 11);
      g4_std::string::Destroy(&v32);
    }
    return InitializationAndLoginStatus;
  }
  v20 = (uint32_t *)opNew(0x44u);
  *v20 = a14;
  v20[1] = a13;
  v20[2] = 4028;
  Json::Value::Construct((int)(uintptr_t)(v20 + 3), nullptr);
  v20[7] = 0;
  v20[8] = 0;
  Json::Value::Construct((int)(uintptr_t)(v20 + 9), nullptr);
  v20[13] = 0;
  v20[7] = a3;
  v20[14] = 0;
  v20[15] = 0;
  v20[16] = 0;
  Json::Value::Construct((Json::Value::Self *)v34, a2);
  v21 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v20 + 3), "accountType");
  Json::Value::opAssign(v21, (const Json::Value::Self *)v34);
  Json::Value::Destroy((Json::Value::Self *)v34);
  Json::Value::Construct((int)(uintptr_t)(v35), a4);
  v22 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v20 + 3), "event_name");
  Json::Value::opAssign(v22, (const Json::Value::Self *)v35);
  Json::Value::Destroy((Json::Value::Self *)v35);
  Json::Value::Construct((int)(uintptr_t)(v36), a6);
  v23 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v20 + 3), "event_category");
  Json::Value::opAssign(v23, (const Json::Value::Self *)v36);
  Json::Value::Destroy((Json::Value::Self *)v36);
  Json::Value::Construct((int)(uintptr_t)(v37), a5);
  v24 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v20 + 3), "event_description");
  Json::Value::opAssign(v24, (const Json::Value::Self *)v37);
  Json::Value::Destroy((Json::Value::Self *)v37);
  Json::Value::Construct((int)(uintptr_t)(v38), a7);
  v25 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v20 + 3), "startDate");
  Json::Value::opAssign(v25, (const Json::Value::Self *)v38);
  Json::Value::Destroy((Json::Value::Self *)v38);
  Json::Value::Construct((int)(uintptr_t)(v39), a8);
  v26 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v20 + 3), "endDate");
  Json::Value::opAssign(v26, (const Json::Value::Self *)v39);
  Json::Value::Destroy((Json::Value::Self *)v39);
  Json::Value::Construct((int)(uintptr_t)(v40), a9);
  v27 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v20 + 3), "group_id");
  Json::Value::opAssign(v27, (const Json::Value::Self *)v40);
  Json::Value::Destroy((Json::Value::Self *)v40);
  Json::Value::Construct((int)(uintptr_t)(v41), a10);
  v28 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v20 + 3), "tournamentObj");
  Json::Value::opAssign(v28, (const Json::Value::Self *)v41);
  Json::Value::Destroy((Json::Value::Self *)v41);
  v20[8] = a11;
  v29 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v30));
  return gaia::ThreadManager::pushTask(v29, v20);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::DeleteMemberFromGroup  (binary VA: 0x14889e0)
// Original: gaia::Gaia_Osiris::DeleteMemberFromGroup
// ----------------------------------------------------------------------------
unsigned int gaia::Gaia_Osiris::DeleteMemberFromGroup(gaia::Gaia::Self *a1, int a2, uint32_t *a3, int a4, uint32_t *a5, char a6, int a7, int a8)
{
  char IsInitialized;
  unsigned int result;
  int Instance;
  void *v11;
  void *v12;
  uint32_t *v13;
  Json::Value::Self *v14;
  Json::Value::Self *v15;
  Json::Value::Self *v16;
  Json::Value::Self *v17;
  int v18;
  int v19;
  int v20;
  typedef gaia::ThreadManager::Self *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef unsigned int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef uint8_t _g4_t_v30[16];
  typedef uint8_t _g4_t_v31[16];
  typedef uint8_t _g4_t_v32[16];
  typedef uint8_t _g4_t_v33[28];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v21)) > _g4_s0 ? (0u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v22)) > _g4_s1 ? (40u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v23)) > _g4_s2 ? (40u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v24)) > _g4_s3 ? (40u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v25)) > _g4_s4 ? (60u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v26)) > _g4_s5 ? (64u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v27)) > _g4_s6 ? (68u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v28)) > _g4_s7 ? (72u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v29)) > _g4_s8 ? (76u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v30)) > _g4_s9 ? (80u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (96u + sizeof(_g4_t_v31)) > _g4_s10 ? (96u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (112u + sizeof(_g4_t_v32)) > _g4_s11 ? (112u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (128u + sizeof(_g4_t_v33)) > _g4_s12 ? (128u + sizeof(_g4_t_v33)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 60u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 64u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 68u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 72u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 76u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 80u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 96u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 112u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 128u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = 0xFFFFFFEB;
  if ( IsInitialized != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    result = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
    if ( result == 0 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), (char *)&unk_1B15112, (int)(uintptr_t)(&v25));
      gaia::BaseServiceManager::GetCredentialString(&v27);
      g4_std::string::append_str(&v26, &v27);
      v11 = (void *)(v27 - 12);
      if ( (uint32_t *)(v27 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v11);
      }
      g4_std::string::append((int)(uintptr_t)(&v26), ":", 1u);
      g4_std::string::append_str(&v26, a5);
      if ( a6 != 0 )
      {
        v13 = (uint32_t *)opNew(0x44u);
        *v13 = a8;
        v13[1] = a7;
        v13[2] = 4025;
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
        Json::Value::Construct((int)(uintptr_t)(v31), a3);
        v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "group_id");
        Json::Value::opAssign(v15, (const Json::Value::Self *)v31);
        Json::Value::Destroy((Json::Value::Self *)v31);
        Json::Value::Construct((Json::Value::Self *)v32, a4);
        v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "targetAccountType");
        Json::Value::opAssign(v16, (const Json::Value::Self *)v32);
        Json::Value::Destroy((Json::Value::Self *)v32);
        Json::Value::Construct((int)(uintptr_t)(v33), a5);
        v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "targetUsername");
        Json::Value::opAssign(v17, (const Json::Value::Self *)v33);
        Json::Value::Destroy((Json::Value::Self *)v33);
        v18 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v21));
        result = gaia::ThreadManager::pushTask(v18, v13);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "social", (int)(uintptr_t)(&v25) + 1);
        v22 = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v28);
        g4_std::string::Destroy(&v28);
        result = v22;
        if ( v22 == 0 )
        {
          v19 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(&v29), v19);
          v20 = gaia::Gaia::GetInstance();
          v24 = gaia::Osiris::LeaveGroupDeleteMember(
                  *(gaia::BaseServiceManager::Self **)(v20 + 24),
                  (int)(uintptr_t)(&v29),
                  (int)(uintptr_t)(a3),
                  (int)(uintptr_t)(&v26),
                  0);
          g4_std::string::Destroy(&v29);
          result = v24;
        }
      }
      v12 = (void *)(v26 - 12);
      if ( (uint32_t *)(v26 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
      {
        v23 = result;
        g4_std::string::Rep::M_destroy(v12);
        return v23;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::LeaveGroup  (binary VA: 0x1488db0)
// Original: gaia::Gaia_Osiris::LeaveGroup
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::LeaveGroup(gaia::Gaia::Self *a1, int a2, uint32_t *a3, char a4, int a5, int a6)
{
  char IsInitialized;
  int result;
  int Instance;
  void *v9;
  uint32_t *v10;
  Json::Value::Self *v11;
  Json::Value::Self *v12;
  int v13;
  int v14;
  int v15;
  typedef gaia::ThreadManager::Self *_g4_t_v16;
  typedef Json::Value::Self *_g4_t_v17;
  typedef Json::Value::Self *_g4_t_v18;
  typedef uint8_t _g4_t_v19[7];
  typedef uint8_t _g4_t_v20[4];
  typedef int _g4_t_v21;
  typedef uint8_t _g4_t_v22[16];
  typedef uint8_t _g4_t_v23[28];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v17)) > _g4_s1 ? (44u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v18)) > _g4_s2 ? (44u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (49u + sizeof(_g4_t_v19)) > _g4_s3 ? (49u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v20)) > _g4_s4 ? (56u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v21)) > _g4_s5 ? (60u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v22)) > _g4_s6 ? (64u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v23)) > _g4_s7 ? (80u + sizeof(_g4_t_v23)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 49u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 56u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 60u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 64u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 80u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    result = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
    if ( result == 0 )
    {
      if ( a4 != 0 )
      {
        v10 = (uint32_t *)opNew(0x44u);
        *v10 = a6;
        v10[1] = a5;
        v10[2] = 4025;
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
        v12 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v10 + 3), "group_id");
        Json::Value::opAssign(v12, (const Json::Value::Self *)v23);
        Json::Value::Destroy((Json::Value::Self *)v23);
        v13 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v16));
        return gaia::ThreadManager::pushTask(v13, v10);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19[3]), "social", (int)(uintptr_t)(v19));
        result = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v19[3]);
        v9 = (void *)(*(uint32_t *)&v19[3] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v19[3] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v19[3] - 4), 0xFFFFFFFF) <= 0 )
        {
          v18 = (Json::Value::Self *)result;
          g4_std::string::Rep::M_destroy(v9);
          result = (int)(uintptr_t)(v18);
        }
        if ( result == 0 )
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "me", (int)(uintptr_t)(&v19[1]));
          v14 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(v20), v14);
          v15 = gaia::Gaia::GetInstance();
          v17 = (Json::Value::Self *)gaia::Osiris::LeaveGroupDeleteMember(
                                 *(gaia::BaseServiceManager::Self **)(v15 + 24),
                                 (int)(uintptr_t)(v20),
                                 (int)(uintptr_t)(a3),
                                 (int)(uintptr_t)(&v21),
                                 0);
          g4_std::string::Destroy(v20);
          g4_std::string::Destroy(&v21);
          return (int)(uintptr_t)(v17);
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::MembershipCheck  (binary VA: 0x1489040)
// Original: gaia::Gaia_Osiris::MembershipCheck
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::MembershipCheck(gaia::Gaia::Self *a1, int a2, int a3, uint32_t *a4, int a5, uint32_t *a6, char a7, int a8, int a9)
{
  int InitializationAndLoginStatus;
  int Instance;
  void *v12;
  void *v13;
  uint32_t *v14;
  Json::Value::Self *v15;
  Json::Value::Self *v16;
  Json::Value::Self *v17;
  Json::Value::Self *v18;
  int v19;
  int v20;
  int v21;
  Json::Value::Self *v22;
  int v23;
  typedef gaia::ThreadManager::Self *_g4_t_ptr;
  typedef Json::Value::Self *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef char *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef uint8_t _g4_t_v32[4];
  typedef uint8_t _g4_t_v33[16];
  typedef uint8_t _g4_t_v34[16];
  typedef uint8_t _g4_t_v35[16];
  typedef uint8_t _g4_t_v36[16];
  typedef uint8_t _g4_t_v37[16];
  typedef uint8_t _g4_t_v38[16];
  typedef uint8_t _g4_t_v39[16];
  typedef int _g4_t_v40;
  typedef uint8_t _g4_t_v41[124];
  enum : size_t {
    _g4_s0 = 400u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v25)) > _g4_s1 ? (40u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v26)) > _g4_s2 ? (48u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v27)) > _g4_s3 ? (52u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v28)) > _g4_s4 ? (56u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v29)) > _g4_s5 ? (60u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v30)) > _g4_s6 ? (64u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v31)) > _g4_s7 ? (68u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v32)) > _g4_s8 ? (72u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v33)) > _g4_s9 ? (76u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_v34)) > _g4_s10 ? (92u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (108u + sizeof(_g4_t_v35)) > _g4_s11 ? (108u + sizeof(_g4_t_v35)) : _g4_s11,
    _g4_s13 = (124u + sizeof(_g4_t_v36)) > _g4_s12 ? (124u + sizeof(_g4_t_v36)) : _g4_s12,
    _g4_s14 = (140u + sizeof(_g4_t_v37)) > _g4_s13 ? (140u + sizeof(_g4_t_v37)) : _g4_s13,
    _g4_s15 = (156u + sizeof(_g4_t_v38)) > _g4_s14 ? (156u + sizeof(_g4_t_v38)) : _g4_s14,
    _g4_s16 = (172u + sizeof(_g4_t_v39)) > _g4_s15 ? (172u + sizeof(_g4_t_v39)) : _g4_s15,
    _g4_s17 = (188u + sizeof(_g4_t_v40)) > _g4_s16 ? (188u + sizeof(_g4_t_v40)) : _g4_s16,
    _g4_s18 = (192u + sizeof(_g4_t_v41)) > _g4_s17 ? (192u + sizeof(_g4_t_v41)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 52u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 56u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 60u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 64u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 68u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 72u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 76u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 92u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 108u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 124u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 140u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 156u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 172u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 188u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 192u);

  InitializationAndLoginStatus = -21;
  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
    return InitializationAndLoginStatus;
  Instance = gaia::Gaia::GetInstance();
  InitializationAndLoginStatus = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
  if ( InitializationAndLoginStatus != 0 )
    return InitializationAndLoginStatus;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), (char *)&unk_1B15112, (int)(uintptr_t)(&v26));
  gaia::BaseServiceManager::GetCredentialString(&v28);
  g4_std::string::append_str(&v27, &v28);
  v12 = (void *)(v28 - 12);
  if ( (uint32_t *)(v28 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v12);
  }
  g4_std::string::append((int)(uintptr_t)(&v27), ":", 1u);
  g4_std::string::append_str(&v27, a6);
  if ( a7 != 0 )
  {
    v14 = (uint32_t *)opNew(0x44u);
    *v14 = a9;
    v14[1] = a8;
    v14[2] = 4023;
    Json::Value::Construct((int)(uintptr_t)(v14 + 3), nullptr);
    v14[7] = 0;
    v14[8] = 0;
    Json::Value::Construct((int)(uintptr_t)(v14 + 9), nullptr);
    v14[13] = 0;
    v14[7] = a3;
    v14[14] = 0;
    v14[15] = 0;
    v14[16] = 0;
    Json::Value::Construct((Json::Value::Self *)v33, a2);
    v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "accountType");
    Json::Value::opAssign(v15, (const Json::Value::Self *)v33);
    Json::Value::Destroy((Json::Value::Self *)v33);
    Json::Value::Construct((int)(uintptr_t)(v34), a4);
    v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "group_id");
    Json::Value::opAssign(v16, (const Json::Value::Self *)v34);
    Json::Value::Destroy((Json::Value::Self *)v34);
    Json::Value::Construct((Json::Value::Self *)v35, a5);
    v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "targetAccountType");
    Json::Value::opAssign(v17, (const Json::Value::Self *)v35);
    Json::Value::Destroy((Json::Value::Self *)v35);
    Json::Value::Construct((int)(uintptr_t)(v36), a6);
    v18 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "targetUsername");
    Json::Value::opAssign(v18, (const Json::Value::Self *)v36);
    Json::Value::Destroy((Json::Value::Self *)v36);
    v19 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(ptr));
    InitializationAndLoginStatus = gaia::ThreadManager::pushTask(v19, v14);
  }
  else
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "social", (int)(uintptr_t)(&v26) + 1);
    InitializationAndLoginStatus = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v29);
    g4_std::string::Destroy(&v29);
    if ( InitializationAndLoginStatus == 0 )
    {
      v30 = nullptr;
      v20 = gaia::Gaia::GetInstance();
      gaia::Gaia::GetJanusToken((int)(uintptr_t)(v32), v20);
      v21 = gaia::Gaia::GetInstance();
      InitializationAndLoginStatus = gaia::Osiris::MembershipCheck(
                                       *(gaia::BaseServiceManager::Self **)(v21 + 24),
                                       (void **)&v30,
                                       &v31,
                                       (int)(uintptr_t)(v32),
                                       (int)(uintptr_t)(a4),
                                       (int)(uintptr_t)(&v27),
                                       0);
      g4_std::string::Destroy(v32);
      if ( InitializationAndLoginStatus == 0 )
      {
        Json::Reader::Construct((Json::Reader::Self *)v41);
        Json::Value::Construct((int)(uintptr_t)(v37), nullptr);
        if ( (uint8_t)Json::Reader::parse((Json::Reader::Self *)v41, v30, &v30[v31], (Json::Value::Self *)v37, true) == 0 )
        {
          InitializationAndLoginStatus = -12;
          free(v30);
          Json::Value::Destroy((Json::Value::Self *)v37);
          sub_545800((int)(uintptr_t)(v41));
          goto LABEL_7;
        }
        Json::Value::Construct((Json::Value::Self *)v38, (const Json::Value::Self *)v37);
        gaia::BaseJSONServiceResponse::Construct((Json::Value::Self *)v39, (Json::Value::Self *)v38);
        Json::Value::Destroy((Json::Value::Self *)v38);
        v40 = 6;
        v22 = *(Json::Value::Self **)(a3 + 4);
        if ( v22 == *(Json::Value::Self **)(a3 + 8) )
        {
          g4_std::vector_gaia_BaseJSONServiceResp_48cd2f::M_insert_aux(a3, v22, (Json::Value::Self *)v39);
        }
        else
        {
          v23 = 0;
          if ( v22 != nullptr )
          {
            v25 = *(Json::Value::Self **)(a3 + 4);
            Json::Value::Construct(v22, (const Json::Value::Self *)v39);
            *((uint32_t *)v25 + 4) = v40;
            v23 = *(uint32_t *)(a3 + 4);
          }
          *(uint32_t *)(a3 + 4) = v23 + 20;
        }
        gaia::BaseJSONServiceResponse::Destroy((gaia::BaseJSONServiceResponse::Self *)v39);
        Json::Value::Destroy((Json::Value::Self *)v37);
        sub_545800((int)(uintptr_t)(v41));
      }
      free(v30);
    }
  }
LABEL_7:
  v13 = (void *)(v27 - 12);
  if ( (uint32_t *)(v27 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v13);
  }
  return InitializationAndLoginStatus;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::DeleteGroup  (binary VA: 0x1489590)
// Original: gaia::Gaia_Osiris::DeleteGroup
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::DeleteGroup(gaia::Gaia::Self *a1, int a2, uint32_t *a3, char a4, int a5, int a6)
{
  char IsInitialized;
  int result;
  int Instance;
  void *v9;
  uint32_t *v10;
  Json::Value::Self *v11;
  Json::Value::Self *v12;
  int v13;
  int v14;
  int v15;
  typedef gaia::ThreadManager::Self *_g4_t_v16;
  typedef Json::Value::Self *_g4_t_v17;
  typedef Json::Value::Self *_g4_t_v18;
  typedef uint16_t _g4_t_v19[3];
  typedef int _g4_t_v20;
  typedef uint8_t _g4_t_v21[16];
  typedef uint8_t _g4_t_v22[28];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v17)) > _g4_s1 ? (28u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v18)) > _g4_s2 ? (28u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (38u + sizeof(_g4_t_v19)) > _g4_s3 ? (38u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v20)) > _g4_s4 ? (44u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v21)) > _g4_s5 ? (48u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v22)) > _g4_s6 ? (64u + sizeof(_g4_t_v22)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 38u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 64u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    result = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
    if ( result == 0 )
    {
      if ( a4 != 0 )
      {
        v10 = (uint32_t *)opNew(0x44u);
        *v10 = a6;
        v10[1] = a5;
        v10[2] = 4018;
        Json::Value::Construct((int)(uintptr_t)(v10 + 3), nullptr);
        v10[7] = 0;
        v10[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v10 + 9), nullptr);
        v10[13] = 0;
        v10[14] = 0;
        v10[15] = 0;
        v10[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v21, a2);
        v11 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v10 + 3), "accountType");
        Json::Value::opAssign(v11, (const Json::Value::Self *)v21);
        Json::Value::Destroy((Json::Value::Self *)v21);
        Json::Value::Construct((int)(uintptr_t)(v22), a3);
        v12 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v10 + 3), "group_id");
        Json::Value::opAssign(v12, (const Json::Value::Self *)v22);
        Json::Value::Destroy((Json::Value::Self *)v22);
        v13 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v16));
        return gaia::ThreadManager::pushTask(v13, v10);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19[1]), "social", (int)(uintptr_t)(v19));
        result = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v19[1]);
        v9 = (void *)(*(uint32_t *)&v19[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v19[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v19[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          v18 = (Json::Value::Self *)result;
          g4_std::string::Rep::M_destroy(v9);
          result = (int)(uintptr_t)(v18);
        }
        if ( result == 0 )
        {
          v14 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(&v20), v14);
          v15 = gaia::Gaia::GetInstance();
          v17 = (Json::Value::Self *)gaia::Osiris::DeleteGroup(
                                 *(gaia::BaseServiceManager::Self **)(v15 + 24),
                                 (int)(uintptr_t)(&v20),
                                 (int)(uintptr_t)(a3),
                                 0);
          g4_std::string::Destroy(&v20);
          return (int)(uintptr_t)(v17);
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::UpdateGroup  (binary VA: 0x14897e0)
// Original: gaia::Gaia_Osiris::UpdateGroup
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::UpdateGroup(gaia::Gaia::Self *a1, int a2, int a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, unsigned int a7, uint32_t *a8, int a9, int a10, Json::Value::Self *a11, Json::Value::Self *a12, char a13, int a14, int a15)
{
  int InitializationAndLoginStatus;
  int Instance;
  void *v17;
  uint32_t *v19;
  Json::Value::Self *v20;
  Json::Value::Self *v21;
  Json::Value::Self *v22;
  Json::Value::Self *v23;
  Json::Value::Self *v24;
  Json::Value::Self *v25;
  Json::Value::Self *v26;
  Json::Value::Self *v27;
  Json::Value::Self *v28;
  int v29;
  int v30;
  int v31;
  int updated;
  Json::Value::Self *v33;
  bool v34;
  int v35;
  typedef gaia::ThreadManager::Self *_g4_t_ptr;
  typedef Json::Value::Self *_g4_t_v37;
  typedef uint16_t _g4_t_v38[3];
  typedef char *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef uint8_t _g4_t_v41[4];
  typedef uint8_t _g4_t_v42[16];
  typedef uint8_t _g4_t_v43[16];
  typedef uint8_t _g4_t_v44[16];
  typedef uint8_t _g4_t_v45[16];
  typedef uint8_t _g4_t_v46[16];
  typedef uint8_t _g4_t_v47[16];
  typedef uint8_t _g4_t_v48[16];
  typedef uint8_t _g4_t_v49[16];
  typedef uint8_t _g4_t_v50[16];
  typedef uint8_t _g4_t_v51[16];
  typedef int _g4_t_v52;
  typedef uint8_t _g4_t_v53[140];
  enum : size_t {
    _g4_s0 = 480u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (72u + sizeof(_g4_t_v37)) > _g4_s1 ? (72u + sizeof(_g4_t_v37)) : _g4_s1,
    _g4_s3 = (90u + sizeof(_g4_t_v38)) > _g4_s2 ? (90u + sizeof(_g4_t_v38)) : _g4_s2,
    _g4_s4 = (96u + sizeof(_g4_t_v39)) > _g4_s3 ? (96u + sizeof(_g4_t_v39)) : _g4_s3,
    _g4_s5 = (100u + sizeof(_g4_t_v40)) > _g4_s4 ? (100u + sizeof(_g4_t_v40)) : _g4_s4,
    _g4_s6 = (104u + sizeof(_g4_t_v41)) > _g4_s5 ? (104u + sizeof(_g4_t_v41)) : _g4_s5,
    _g4_s7 = (108u + sizeof(_g4_t_v42)) > _g4_s6 ? (108u + sizeof(_g4_t_v42)) : _g4_s6,
    _g4_s8 = (124u + sizeof(_g4_t_v43)) > _g4_s7 ? (124u + sizeof(_g4_t_v43)) : _g4_s7,
    _g4_s9 = (140u + sizeof(_g4_t_v44)) > _g4_s8 ? (140u + sizeof(_g4_t_v44)) : _g4_s8,
    _g4_s10 = (156u + sizeof(_g4_t_v45)) > _g4_s9 ? (156u + sizeof(_g4_t_v45)) : _g4_s9,
    _g4_s11 = (172u + sizeof(_g4_t_v46)) > _g4_s10 ? (172u + sizeof(_g4_t_v46)) : _g4_s10,
    _g4_s12 = (188u + sizeof(_g4_t_v47)) > _g4_s11 ? (188u + sizeof(_g4_t_v47)) : _g4_s11,
    _g4_s13 = (204u + sizeof(_g4_t_v48)) > _g4_s12 ? (204u + sizeof(_g4_t_v48)) : _g4_s12,
    _g4_s14 = (220u + sizeof(_g4_t_v49)) > _g4_s13 ? (220u + sizeof(_g4_t_v49)) : _g4_s13,
    _g4_s15 = (236u + sizeof(_g4_t_v50)) > _g4_s14 ? (236u + sizeof(_g4_t_v50)) : _g4_s14,
    _g4_s16 = (252u + sizeof(_g4_t_v51)) > _g4_s15 ? (252u + sizeof(_g4_t_v51)) : _g4_s15,
    _g4_s17 = (268u + sizeof(_g4_t_v52)) > _g4_s16 ? (268u + sizeof(_g4_t_v52)) : _g4_s16,
    _g4_s18 = (272u + sizeof(_g4_t_v53)) > _g4_s17 ? (272u + sizeof(_g4_t_v53)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 72u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 90u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 96u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 100u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 104u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 108u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 124u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 140u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 156u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 172u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 188u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 204u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 220u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 236u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 252u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 268u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 272u);

  InitializationAndLoginStatus = -21;
  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
    return InitializationAndLoginStatus;
  Instance = gaia::Gaia::GetInstance();
  InitializationAndLoginStatus = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
  if ( InitializationAndLoginStatus != 0 )
    return InitializationAndLoginStatus;
  if ( a13 != 0 )
  {
    v19 = (uint32_t *)opNew(0x44u);
    *v19 = a15;
    v19[1] = a14;
    v19[2] = 4017;
    Json::Value::Construct((int)(uintptr_t)(v19 + 3), nullptr);
    v19[7] = 0;
    v19[8] = 0;
    Json::Value::Construct((int)(uintptr_t)(v19 + 9), nullptr);
    v19[7] = a3;
    v19[13] = 0;
    v19[14] = 0;
    v19[15] = 0;
    v19[16] = 0;
    Json::Value::Construct((Json::Value::Self *)v42, a2);
    v20 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v19 + 3), "accountType");
    Json::Value::opAssign(v20, (const Json::Value::Self *)v42);
    Json::Value::Destroy((Json::Value::Self *)v42);
    Json::Value::Construct((int)(uintptr_t)(v43), a4);
    v21 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v19 + 3), "group_name");
    Json::Value::opAssign(v21, (const Json::Value::Self *)v43);
    Json::Value::Destroy((Json::Value::Self *)v43);
    Json::Value::Construct((int)(uintptr_t)(v44), a5);
    v22 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v19 + 3), "group_category");
    Json::Value::opAssign(v22, (const Json::Value::Self *)v44);
    Json::Value::Destroy((Json::Value::Self *)v44);
    Json::Value::Construct((int)(uintptr_t)(v45), a6);
    v23 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v19 + 3), "group_description");
    Json::Value::opAssign(v23, (const Json::Value::Self *)v45);
    Json::Value::Destroy((Json::Value::Self *)v45);
    Json::Value::Construct((Json::Value::Self *)v46, a7);
    v24 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v19 + 3), "member_limit");
    Json::Value::opAssign(v24, (const Json::Value::Self *)v46);
    Json::Value::Destroy((Json::Value::Self *)v46);
    Json::Value::Construct((int)(uintptr_t)(v47), a8);
    v25 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v19 + 3), "group_id");
    Json::Value::opAssign(v25, (const Json::Value::Self *)v47);
    Json::Value::Destroy((Json::Value::Self *)v47);
    Json::Value::Construct((Json::Value::Self *)v48, a9);
    v26 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v19 + 3), "membership");
    Json::Value::opAssign(v26, (const Json::Value::Self *)v48);
    Json::Value::Destroy((Json::Value::Self *)v48);
    v27 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v19 + 3), "promote_owners");
    Json::Value::opAssign(v27, a11);
    v28 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v19 + 3), "demote_owners");
    Json::Value::opAssign(v28, a12);
    v19[8] = a10;
    v29 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(ptr));
    return gaia::ThreadManager::pushTask(v29, v19);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38[1]), "social_group", (int)(uintptr_t)(v38));
  InitializationAndLoginStatus = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v38[1]);
  v17 = (void *)(*(uint32_t *)&v38[1] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v38[1] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v38[1] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v17);
  }
  if ( InitializationAndLoginStatus != 0 )
    return InitializationAndLoginStatus;
  v39 = nullptr;
  v30 = gaia::Gaia::GetInstance();
  gaia::Gaia::GetJanusToken((int)(uintptr_t)(v41), v30);
  v31 = gaia::Gaia::GetInstance();
  updated = gaia::Osiris::UpdateGroup(
              *(gaia::BaseServiceManager::Self **)(v31 + 24),
              (void **)&v39,
              &v40,
              (int)(uintptr_t)(v41),
              (int)(uintptr_t)(a4),
              (int)(uintptr_t)(a5),
              (int)(uintptr_t)(a6),
              a7,
              (int)(uintptr_t)(a8),
              a9,
              a10,
              a11,
              a12,
              0);
  g4_std::string::Destroy(v41);
  if ( updated == 0 )
  {
    Json::Reader::Construct((Json::Reader::Self *)v53);
    Json::Value::Construct((int)(uintptr_t)(v49), nullptr);
    if ( (uint8_t)Json::Reader::parse((Json::Reader::Self *)v53, v39, &v39[v40], (Json::Value::Self *)v49, true) != 0 )
    {
      Json::Value::Construct((Json::Value::Self *)v50, (const Json::Value::Self *)v49);
      gaia::BaseJSONServiceResponse::Construct((Json::Value::Self *)v51, (Json::Value::Self *)v50);
      Json::Value::Destroy((Json::Value::Self *)v50);
      v33 = *(Json::Value::Self **)(a3 + 4);
      v34 = v33 == *(Json::Value::Self **)(a3 + 8);
      v52 = 12;
      if ( v34 )
      {
        g4_std::vector_gaia_BaseJSONServiceResp_48cd2f::M_insert_aux(a3, v33, (Json::Value::Self *)v51);
      }
      else
      {
        v35 = 0;
        if ( v33 != nullptr )
        {
          v37 = v33;
          Json::Value::Construct(v33, (const Json::Value::Self *)v51);
          *((uint32_t *)v37 + 4) = v52;
          v35 = *(uint32_t *)(a3 + 4);
        }
        *(uint32_t *)(a3 + 4) = v35 + 20;
      }
      gaia::BaseJSONServiceResponse::Destroy((gaia::BaseJSONServiceResponse::Self *)v51);
      Json::Value::Destroy((Json::Value::Self *)v49);
      sub_545800((int)(uintptr_t)(v53));
      goto LABEL_15;
    }
    InitializationAndLoginStatus = -12;
    free(v39);
    Json::Value::Destroy((Json::Value::Self *)v49);
    sub_545800((int)(uintptr_t)(v53));
    return InitializationAndLoginStatus;
  }
LABEL_15:
  free(v39);
  return updated;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::SetGroupField  (binary VA: 0x1489dd0)
// Original: gaia::Gaia_Osiris::SetGroupField
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::SetGroupField(gaia::Gaia::Self *a1, int a2, int a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, char a7, int a8, int a9)
{
  int InitializationAndLoginStatus;
  int Instance;
  void *v11;
  int v12;
  int v13;
  uint32_t *v15;
  Json::Value::Self *v16;
  Json::Value::Self *v17;
  Json::Value::Self *v18;
  Json::Value::Self *v19;
  int v20;
  typedef gaia::ThreadManager::Self *_g4_t_v21;
  typedef uint16_t _g4_t_v22[3];
  typedef char *_g4_t_v23;
  typedef uint8_t _g4_t_v24[4];
  typedef uint8_t _g4_t_v25[16];
  typedef uint8_t _g4_t_v26[16];
  typedef uint8_t _g4_t_v27[16];
  typedef uint8_t _g4_t_v28[28];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v21)) > _g4_s0 ? (0u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (34u + sizeof(_g4_t_v22)) > _g4_s1 ? (34u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v23)) > _g4_s2 ? (40u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v24)) > _g4_s3 ? (44u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v25)) > _g4_s4 ? (48u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v26)) > _g4_s5 ? (64u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v27)) > _g4_s6 ? (80u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v28)) > _g4_s7 ? (96u + sizeof(_g4_t_v28)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 34u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 64u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 80u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 96u);

  InitializationAndLoginStatus = -21;
  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    InitializationAndLoginStatus = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
    if ( InitializationAndLoginStatus == 0 )
    {
      if ( a7 != 0 )
      {
        v15 = (uint32_t *)opNew(0x44u);
        *v15 = a9;
        v15[1] = a8;
        v15[2] = 4044;
        Json::Value::Construct((int)(uintptr_t)(v15 + 3), nullptr);
        v15[7] = 0;
        v15[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v15 + 9), nullptr);
        v15[13] = 0;
        v15[7] = a3;
        v15[14] = 0;
        v15[15] = 0;
        v15[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v25, a2);
        v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "accountType");
        Json::Value::opAssign(v16, (const Json::Value::Self *)v25);
        Json::Value::Destroy((Json::Value::Self *)v25);
        Json::Value::Construct((int)(uintptr_t)(v26), a4);
        v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "group_id");
        Json::Value::opAssign(v17, (const Json::Value::Self *)v26);
        Json::Value::Destroy((Json::Value::Self *)v26);
        Json::Value::Construct((int)(uintptr_t)(v27), a5);
        v18 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "group_field_name");
        Json::Value::opAssign(v18, (const Json::Value::Self *)v27);
        Json::Value::Destroy((Json::Value::Self *)v27);
        Json::Value::Construct((int)(uintptr_t)(v28), a6);
        v19 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "group_field_value");
        Json::Value::opAssign(v19, (const Json::Value::Self *)v28);
        Json::Value::Destroy((Json::Value::Self *)v28);
        v20 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v21));
        return gaia::ThreadManager::pushTask(v20, v15);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22[1]), "social", (int)(uintptr_t)(v22));
        InitializationAndLoginStatus = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v22[1]);
        v11 = (void *)(*(uint32_t *)&v22[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v22[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v22[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v11);
        }
        if ( InitializationAndLoginStatus == 0 )
        {
          v23 = (char *)&dword_213B814;
          v12 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(v24), v12);
          v13 = gaia::Gaia::GetInstance();
          InitializationAndLoginStatus = gaia::Osiris::SetGroupField(
                                           *(uint32_t *)(v13 + 24),
                                           &v23,
                                           v24,
                                           a4,
                                           a5,
                                           a6,
                                           nullptr);
          g4_std::string::Destroy(v24);
          if ( InitializationAndLoginStatus == 0 )
            InitializationAndLoginStatus = gaia::BaseServiceManager::ParseMessages(v23, *((uint32_t *)v23 - 3), a3, 12);
          g4_std::string::Destroy(&v23);
        }
      }
    }
  }
  return InitializationAndLoginStatus;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::GetGroupField  (binary VA: 0x148a120)
// Original: gaia::Gaia_Osiris::GetGroupField
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::GetGroupField(gaia::Gaia::Self *a1, int a2, int a3, uint32_t *a4, uint32_t *a5, char a6, int a7, int a8)
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
  typedef int _g4_t_GroupField;
  typedef int _g4_t_v21;
  typedef uint16_t _g4_t_v22[3];
  typedef uint8_t _g4_t_v23[4];
  typedef uint8_t _g4_t_v24[16];
  typedef uint8_t _g4_t_v25[16];
  typedef uint8_t _g4_t_v26[28];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v19)) > _g4_s0 ? (0u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_GroupField)) > _g4_s1 ? (40u + sizeof(_g4_t_GroupField)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v21)) > _g4_s2 ? (40u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (54u + sizeof(_g4_t_v22)) > _g4_s3 ? (54u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v23)) > _g4_s4 ? (60u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v24)) > _g4_s5 ? (64u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v25)) > _g4_s6 ? (80u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v26)) > _g4_s7 ? (96u + sizeof(_g4_t_v26)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_GroupField &GroupField = *reinterpret_cast<_g4_t_GroupField *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 54u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 64u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 80u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 96u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    result = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
    if ( result == 0 )
    {
      if ( a6 != 0 )
      {
        v12 = (uint32_t *)opNew(0x44u);
        *v12 = a8;
        v12[1] = a7;
        v12[2] = 4045;
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
        v14 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v12 + 3), "group_id");
        Json::Value::opAssign(v14, (const Json::Value::Self *)v25);
        Json::Value::Destroy((Json::Value::Self *)v25);
        Json::Value::Construct((int)(uintptr_t)(v26), a5);
        v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v12 + 3), "group_field_name");
        Json::Value::opAssign(v15, (const Json::Value::Self *)v26);
        Json::Value::Destroy((Json::Value::Self *)v26);
        v12[15] = a3;
        v16 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v19));
        return gaia::ThreadManager::pushTask(v16, v12);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22[1]), "social", (int)(uintptr_t)(v22));
        result = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v22[1]);
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
          v17 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(v23), v17);
          v18 = gaia::Gaia::GetInstance();
          GroupField = gaia::Osiris::GetGroupField(*(uint32_t *)(v18 + 24), a3, v23, a4, a5, nullptr);
          g4_std::string::Destroy(v23);
          return GroupField;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::IncrementDecrementGroupField  (binary VA: 0x148a400)
// Original: gaia::Gaia_Osiris::IncrementDecrementGroupField
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::IncrementDecrementGroupField(gaia::Gaia::Self *a1, int a2, int a3, int a4, uint32_t *a5, uint32_t *a6, uint32_t *a7, char a8, int a9, int a10)
{
  int InitializationAndLoginStatus;
  int Instance;
  void *v12;
  int v13;
  int v14;
  uint32_t *v16;
  Json::Value::Self *v17;
  Json::Value::Self *v18;
  Json::Value::Self *v19;
  Json::Value::Self *v20;
  Json::Value::Self *v21;
  int v22;
  typedef gaia::ThreadManager::Self *_g4_t_v23;
  typedef uint16_t _g4_t_v24[3];
  typedef char *_g4_t_v25;
  typedef uint8_t _g4_t_v26[4];
  typedef uint8_t _g4_t_v27[16];
  typedef uint8_t _g4_t_v28[16];
  typedef uint8_t _g4_t_v29[16];
  typedef uint8_t _g4_t_v30[16];
  typedef uint8_t _g4_t_v31[28];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v23)) > _g4_s0 ? (0u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (34u + sizeof(_g4_t_v24)) > _g4_s1 ? (34u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v25)) > _g4_s2 ? (40u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v26)) > _g4_s3 ? (44u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v27)) > _g4_s4 ? (48u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v28)) > _g4_s5 ? (64u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v29)) > _g4_s6 ? (80u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v30)) > _g4_s7 ? (96u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (112u + sizeof(_g4_t_v31)) > _g4_s8 ? (112u + sizeof(_g4_t_v31)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 34u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 64u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 80u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 96u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 112u);

  InitializationAndLoginStatus = -21;
  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    InitializationAndLoginStatus = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
    if ( InitializationAndLoginStatus == 0 )
    {
      if ( a8 != 0 )
      {
        v16 = (uint32_t *)opNew(0x44u);
        *v16 = a10;
        v16[1] = a9;
        v16[2] = 4046;
        Json::Value::Construct((int)(uintptr_t)(v16 + 3), nullptr);
        v16[7] = 0;
        v16[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v16 + 9), nullptr);
        v16[13] = 0;
        v16[14] = 0;
        v16[15] = 0;
        v16[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v27, a2);
        v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v16 + 3), "accountType");
        Json::Value::opAssign(v17, (const Json::Value::Self *)v27);
        Json::Value::Destroy((Json::Value::Self *)v27);
        Json::Value::Construct((Json::Value::Self *)v28, a4);
        v18 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v16 + 3), "type");
        Json::Value::opAssign(v18, (const Json::Value::Self *)v28);
        Json::Value::Destroy((Json::Value::Self *)v28);
        Json::Value::Construct((int)(uintptr_t)(v29), a5);
        v19 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v16 + 3), "groupID");
        Json::Value::opAssign(v19, (const Json::Value::Self *)v29);
        Json::Value::Destroy((Json::Value::Self *)v29);
        Json::Value::Construct((int)(uintptr_t)(v30), a6);
        v20 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v16 + 3), "field");
        Json::Value::opAssign(v20, (const Json::Value::Self *)v30);
        Json::Value::Destroy((Json::Value::Self *)v30);
        Json::Value::Construct((int)(uintptr_t)(v31), a7);
        v21 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v16 + 3), "object");
        Json::Value::opAssign(v21, (const Json::Value::Self *)v31);
        Json::Value::Destroy((Json::Value::Self *)v31);
        v16[7] = a3;
        v22 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v23));
        return gaia::ThreadManager::pushTask(v22, v16);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24[1]), "social_clan", (int)(uintptr_t)(v24));
        InitializationAndLoginStatus = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v24[1]);
        v12 = (void *)(*(uint32_t *)&v24[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v24[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v24[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v12);
        }
        if ( InitializationAndLoginStatus == 0 )
        {
          v25 = (char *)&dword_213B814;
          v13 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(v26), v13);
          v14 = gaia::Gaia::GetInstance();
          InitializationAndLoginStatus = gaia::Osiris::IncrementDecrementGroupField(
                                           *(uint32_t *)(v14 + 24),
                                           &v25,
                                           v26,
                                           a5,
                                           a6,
                                           a7,
                                           a4,
                                           nullptr);
          g4_std::string::Destroy(v26);
          if ( InitializationAndLoginStatus == 0 )
            InitializationAndLoginStatus = gaia::BaseServiceManager::ParseMessages(v25, *((uint32_t *)v25 - 3), a3, 12);
          g4_std::string::Destroy(&v25);
        }
      }
    }
  }
  return InitializationAndLoginStatus;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::ListGroupMembers  (binary VA: 0x148a7b0)
// Original: gaia::Gaia_Osiris::ListGroupMembers
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::ListGroupMembers(gaia::Gaia::Self *a1, int a2, int a3, uint32_t *a4, unsigned int a5, unsigned int a6, char a7, char a8, int a9, int a10)
{
  int InitializationAndLoginStatus;
  int Instance;
  void *v12;
  uint32_t *v14;
  Json::Value::Self *v15;
  Json::Value::Self *v16;
  Json::Value::Self *v17;
  Json::Value::Self *v18;
  Json::Value::Self *v19;
  int v20;
  int v21;
  int v22;
  typedef gaia::ThreadManager::Self *_g4_t_ptr;
  typedef uint16_t _g4_t_v24[3];
  typedef char *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint8_t _g4_t_v27[4];
  typedef uint8_t _g4_t_v28[16];
  typedef uint8_t _g4_t_v29[16];
  typedef uint8_t _g4_t_v30[16];
  typedef uint8_t _g4_t_v31[16];
  typedef uint8_t _g4_t_v32[28];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (78u + sizeof(_g4_t_v24)) > _g4_s1 ? (78u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (84u + sizeof(_g4_t_v25)) > _g4_s2 ? (84u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (88u + sizeof(_g4_t_v26)) > _g4_s3 ? (88u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (92u + sizeof(_g4_t_v27)) > _g4_s4 ? (92u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (96u + sizeof(_g4_t_v28)) > _g4_s5 ? (96u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (112u + sizeof(_g4_t_v29)) > _g4_s6 ? (112u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (128u + sizeof(_g4_t_v30)) > _g4_s7 ? (128u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (144u + sizeof(_g4_t_v31)) > _g4_s8 ? (144u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (160u + sizeof(_g4_t_v32)) > _g4_s9 ? (160u + sizeof(_g4_t_v32)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 78u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 84u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 88u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 92u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 96u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 112u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 128u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 144u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 160u);

  InitializationAndLoginStatus = -21;
  gaia::Gaia::GetInstance();
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
        v14[2] = 4027;
        Json::Value::Construct((int)(uintptr_t)(v14 + 3), nullptr);
        v14[7] = 0;
        v14[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v14 + 9), nullptr);
        v14[13] = 0;
        v14[7] = a3;
        v14[14] = 0;
        v14[15] = 0;
        v14[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v28, a2);
        v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "accountType");
        Json::Value::opAssign(v15, (const Json::Value::Self *)v28);
        Json::Value::Destroy((Json::Value::Self *)v28);
        Json::Value::Construct((int)(uintptr_t)(v29), a4);
        v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "group_id");
        Json::Value::opAssign(v16, (const Json::Value::Self *)v29);
        Json::Value::Destroy((Json::Value::Self *)v29);
        Json::Value::Construct((Json::Value::Self *)v30, a5);
        v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "limit");
        Json::Value::opAssign(v17, (const Json::Value::Self *)v30);
        Json::Value::Destroy((Json::Value::Self *)v30);
        Json::Value::Construct((Json::Value::Self *)v31, a6);
        v18 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "offset");
        Json::Value::opAssign(v18, (const Json::Value::Self *)v31);
        Json::Value::Destroy((Json::Value::Self *)v31);
        Json::Value::Construct((Json::Value::Self *)v32, a7);
        v19 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "owners");
        Json::Value::opAssign(v19, (const Json::Value::Self *)v32);
        Json::Value::Destroy((Json::Value::Self *)v32);
        v20 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(ptr));
        return gaia::ThreadManager::pushTask(v20, v14);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24[1]), "social", (int)(uintptr_t)(v24));
        InitializationAndLoginStatus = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v24[1]);
        v12 = (void *)(*(uint32_t *)&v24[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v24[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v24[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v12);
        }
        if ( InitializationAndLoginStatus == 0 )
        {
          v25 = nullptr;
          v21 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(v27), v21);
          v22 = gaia::Gaia::GetInstance();
          InitializationAndLoginStatus = gaia::Osiris::ListGroupMembers(
                                           *(gaia::BaseServiceManager::Self **)(v22 + 24),
                                           (void **)&v25,
                                           &v26,
                                           (int)(uintptr_t)(v27),
                                           (int)(uintptr_t)(a4),
                                           a5,
                                           a6,
                                           a7,
                                           0);
          g4_std::string::Destroy(v27);
          if ( InitializationAndLoginStatus == 0 )
            gaia::BaseServiceManager::ParseMessages(v25, v26, a3, 6);
          free(v25);
        }
      }
    }
  }
  return InitializationAndLoginStatus;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::JoinGroup  (binary VA: 0x148ab90)
// Original: gaia::Gaia_Osiris::JoinGroup
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::JoinGroup(gaia::Gaia::Self *a1, int a2, uint32_t *a3, char a4, int a5, int a6)
{
  char IsInitialized;
  int result;
  int Instance;
  void *v9;
  uint32_t *v10;
  Json::Value::Self *v11;
  Json::Value::Self *v12;
  int v13;
  int v14;
  int v15;
  typedef gaia::ThreadManager::Self *_g4_t_v16;
  typedef Json::Value::Self *_g4_t_v17;
  typedef Json::Value::Self *_g4_t_v18;
  typedef uint8_t _g4_t_v19[7];
  typedef uint8_t _g4_t_v20[4];
  typedef int _g4_t_v21;
  typedef uint8_t _g4_t_v22[16];
  typedef uint8_t _g4_t_v23[28];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v17)) > _g4_s1 ? (44u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v18)) > _g4_s2 ? (44u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (49u + sizeof(_g4_t_v19)) > _g4_s3 ? (49u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v20)) > _g4_s4 ? (56u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v21)) > _g4_s5 ? (60u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v22)) > _g4_s6 ? (64u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v23)) > _g4_s7 ? (80u + sizeof(_g4_t_v23)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 49u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 56u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 60u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 64u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 80u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    result = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
    if ( result == 0 )
    {
      if ( a4 != 0 )
      {
        v10 = (uint32_t *)opNew(0x44u);
        *v10 = a6;
        v10[1] = a5;
        v10[2] = 4024;
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
        v12 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v10 + 3), "group_id");
        Json::Value::opAssign(v12, (const Json::Value::Self *)v23);
        Json::Value::Destroy((Json::Value::Self *)v23);
        v13 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v16));
        return gaia::ThreadManager::pushTask(v13, v10);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19[3]), "social", (int)(uintptr_t)(v19));
        result = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v19[3]);
        v9 = (void *)(*(uint32_t *)&v19[3] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v19[3] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v19[3] - 4), 0xFFFFFFFF) <= 0 )
        {
          v18 = (Json::Value::Self *)result;
          g4_std::string::Rep::M_destroy(v9);
          result = (int)(uintptr_t)(v18);
        }
        if ( result == 0 )
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "me", (int)(uintptr_t)(&v19[1]));
          v14 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(v20), v14);
          v15 = gaia::Gaia::GetInstance();
          v17 = (Json::Value::Self *)gaia::Osiris::JoinGroupAddMember(
                                 *(gaia::BaseServiceManager::Self **)(v15 + 24),
                                 (int)(uintptr_t)(v20),
                                 (int)(uintptr_t)(a3),
                                 (int)(uintptr_t)(&v21),
                                 0);
          g4_std::string::Destroy(v20);
          g4_std::string::Destroy(&v21);
          return (int)(uintptr_t)(v17);
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::AddMemberToGroup  (binary VA: 0x148ae20)
// Original: gaia::Gaia_Osiris::AddMemberToGroup
// ----------------------------------------------------------------------------
unsigned int gaia::Gaia_Osiris::AddMemberToGroup(gaia::Gaia::Self *a1, int a2, uint32_t *a3, int a4, uint32_t *a5, char a6, int a7, int a8)
{
  char IsInitialized;
  unsigned int result;
  int Instance;
  void *v11;
  void *v12;
  uint32_t *v13;
  Json::Value::Self *v14;
  Json::Value::Self *v15;
  Json::Value::Self *v16;
  Json::Value::Self *v17;
  int v18;
  int v19;
  int v20;
  typedef gaia::ThreadManager::Self *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef unsigned int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef uint8_t _g4_t_v30[16];
  typedef uint8_t _g4_t_v31[16];
  typedef uint8_t _g4_t_v32[16];
  typedef uint8_t _g4_t_v33[28];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v21)) > _g4_s0 ? (0u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v22)) > _g4_s1 ? (40u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v23)) > _g4_s2 ? (40u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v24)) > _g4_s3 ? (40u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v25)) > _g4_s4 ? (60u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v26)) > _g4_s5 ? (64u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v27)) > _g4_s6 ? (68u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v28)) > _g4_s7 ? (72u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v29)) > _g4_s8 ? (76u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v30)) > _g4_s9 ? (80u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (96u + sizeof(_g4_t_v31)) > _g4_s10 ? (96u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (112u + sizeof(_g4_t_v32)) > _g4_s11 ? (112u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (128u + sizeof(_g4_t_v33)) > _g4_s12 ? (128u + sizeof(_g4_t_v33)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 60u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 64u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 68u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 72u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 76u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 80u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 96u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 112u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 128u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = 0xFFFFFFEB;
  if ( IsInitialized != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    result = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
    if ( result == 0 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), (char *)&unk_1B15112, (int)(uintptr_t)(&v25));
      gaia::BaseServiceManager::GetCredentialString(&v27);
      g4_std::string::append_str(&v26, &v27);
      v11 = (void *)(v27 - 12);
      if ( (uint32_t *)(v27 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v11);
      }
      g4_std::string::append((int)(uintptr_t)(&v26), ":", 1u);
      g4_std::string::append_str(&v26, a5);
      if ( a6 != 0 )
      {
        v13 = (uint32_t *)opNew(0x44u);
        *v13 = a8;
        v13[1] = a7;
        v13[2] = 4024;
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
        Json::Value::Construct((int)(uintptr_t)(v31), a3);
        v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "group_id");
        Json::Value::opAssign(v15, (const Json::Value::Self *)v31);
        Json::Value::Destroy((Json::Value::Self *)v31);
        Json::Value::Construct((Json::Value::Self *)v32, a4);
        v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "targetAccountType");
        Json::Value::opAssign(v16, (const Json::Value::Self *)v32);
        Json::Value::Destroy((Json::Value::Self *)v32);
        Json::Value::Construct((int)(uintptr_t)(v33), a5);
        v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "targetUsername");
        Json::Value::opAssign(v17, (const Json::Value::Self *)v33);
        Json::Value::Destroy((Json::Value::Self *)v33);
        v18 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v21));
        result = gaia::ThreadManager::pushTask(v18, v13);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "social", (int)(uintptr_t)(&v25) + 1);
        v22 = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v28);
        g4_std::string::Destroy(&v28);
        result = v22;
        if ( v22 == 0 )
        {
          v19 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(&v29), v19);
          v20 = gaia::Gaia::GetInstance();
          v24 = gaia::Osiris::JoinGroupAddMember(
                  *(gaia::BaseServiceManager::Self **)(v20 + 24),
                  (int)(uintptr_t)(&v29),
                  (int)(uintptr_t)(a3),
                  (int)(uintptr_t)(&v26),
                  0);
          g4_std::string::Destroy(&v29);
          result = v24;
        }
      }
      v12 = (void *)(v26 - 12);
      if ( (uint32_t *)(v26 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
      {
        v23 = result;
        g4_std::string::Rep::M_destroy(v12);
        return v23;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::SearchClansByRecommendationScore  (binary VA: 0x148b1f0)
// Original: gaia::Gaia_Osiris::SearchClansByRecommendationScore
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::SearchClansByRecommendationScore(gaia::Gaia::Self *a1, int a2, int a3, uint32_t *a4, unsigned int a5, uint32_t *a6, int a7, char a8, int a9, int a10)
{
  int InitializationAndLoginStatus;
  int Instance;
  void *v12;
  uint32_t *v14;
  Json::Value::Self *v15;
  Json::Value::Self *v16;
  Json::Value::Self *v17;
  Json::Value::Self *v18;
  Json::Value::Self *v19;
  int v20;
  int v21;
  int v22;
  typedef gaia::ThreadManager::Self *_g4_t_ptr;
  typedef uint16_t _g4_t_v24[3];
  typedef char *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint8_t _g4_t_v27[4];
  typedef uint8_t _g4_t_v28[16];
  typedef uint8_t _g4_t_v29[16];
  typedef uint8_t _g4_t_v30[16];
  typedef uint8_t _g4_t_v31[16];
  typedef uint8_t _g4_t_v32[28];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (78u + sizeof(_g4_t_v24)) > _g4_s1 ? (78u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (84u + sizeof(_g4_t_v25)) > _g4_s2 ? (84u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (88u + sizeof(_g4_t_v26)) > _g4_s3 ? (88u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (92u + sizeof(_g4_t_v27)) > _g4_s4 ? (92u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (96u + sizeof(_g4_t_v28)) > _g4_s5 ? (96u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (112u + sizeof(_g4_t_v29)) > _g4_s6 ? (112u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (128u + sizeof(_g4_t_v30)) > _g4_s7 ? (128u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (144u + sizeof(_g4_t_v31)) > _g4_s8 ? (144u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (160u + sizeof(_g4_t_v32)) > _g4_s9 ? (160u + sizeof(_g4_t_v32)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 78u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 84u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 88u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 92u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 96u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 112u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 128u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 144u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 160u);

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
        v14[2] = 4021;
        Json::Value::Construct((int)(uintptr_t)(v14 + 3), nullptr);
        v14[7] = 0;
        v14[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v14 + 9), nullptr);
        v14[13] = 0;
        v14[7] = a3;
        v14[14] = 0;
        v14[15] = 0;
        v14[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v28, a2);
        v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "accountType");
        Json::Value::opAssign(v15, (const Json::Value::Self *)v28);
        Json::Value::Destroy((Json::Value::Self *)v28);
        Json::Value::Construct((int)(uintptr_t)(v29), a4);
        v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "group_category");
        Json::Value::opAssign(v16, (const Json::Value::Self *)v29);
        Json::Value::Destroy((Json::Value::Self *)v29);
        Json::Value::Construct((Json::Value::Self *)v30, a7);
        v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "limit");
        Json::Value::opAssign(v17, (const Json::Value::Self *)v30);
        Json::Value::Destroy((Json::Value::Self *)v30);
        Json::Value::Construct((int)(uintptr_t)(v31), a6);
        v18 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "filter");
        Json::Value::opAssign(v18, (const Json::Value::Self *)v31);
        Json::Value::Destroy((Json::Value::Self *)v31);
        Json::Value::Construct((Json::Value::Self *)v32, a5);
        v19 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "score");
        Json::Value::opAssign(v19, (const Json::Value::Self *)v32);
        Json::Value::Destroy((Json::Value::Self *)v32);
        v20 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(ptr));
        return gaia::ThreadManager::pushTask(v20, v14);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24[1]), "social", (int)(uintptr_t)(v24));
        InitializationAndLoginStatus = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v24[1]);
        v12 = (void *)(*(uint32_t *)&v24[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v24[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v24[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v12);
        }
        if ( InitializationAndLoginStatus == 0 )
        {
          v25 = nullptr;
          v21 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(v27), v21);
          v22 = gaia::Gaia::GetInstance();
          InitializationAndLoginStatus = gaia::Osiris::SearchClansByRecommendedScore(
                                           *(gaia::BaseServiceManager::Self **)(v22 + 24),
                                           (void **)&v25,
                                           &v26,
                                           (int)(uintptr_t)(v27),
                                           (int)(uintptr_t)(a4),
                                           (int)(uintptr_t)(a6),
                                           a5,
                                           a7,
                                           0);
          g4_std::string::Destroy(v27);
          if ( InitializationAndLoginStatus == 0 )
            gaia::BaseServiceManager::ParseMessages(v25, v26, a3, 12);
          free(v25);
        }
      }
    }
  }
  return InitializationAndLoginStatus;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::SearchGroups  (binary VA: 0x148b5c0)
// Original: gaia::Gaia_Osiris::SearchGroups
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::SearchGroups(gaia::Gaia::Self *a1, int a2, int a3, uint32_t *a4, unsigned int a5, unsigned int a6, char a7, int a8, int a9)
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
  typedef gaia::ThreadManager::Self *_g4_t_ptr;
  typedef uint16_t _g4_t_v22[3];
  typedef char *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef uint8_t _g4_t_v25[4];
  typedef uint8_t _g4_t_v26[16];
  typedef uint8_t _g4_t_v27[16];
  typedef uint8_t _g4_t_v28[16];
  typedef uint8_t _g4_t_v29[28];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (62u + sizeof(_g4_t_v22)) > _g4_s1 ? (62u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (68u + sizeof(_g4_t_v23)) > _g4_s2 ? (68u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (72u + sizeof(_g4_t_v24)) > _g4_s3 ? (72u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (76u + sizeof(_g4_t_v25)) > _g4_s4 ? (76u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (80u + sizeof(_g4_t_v26)) > _g4_s5 ? (80u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (96u + sizeof(_g4_t_v27)) > _g4_s6 ? (96u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (112u + sizeof(_g4_t_v28)) > _g4_s7 ? (112u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (128u + sizeof(_g4_t_v29)) > _g4_s8 ? (128u + sizeof(_g4_t_v29)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 62u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 68u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 72u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 76u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 80u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 96u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 112u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 128u);

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
        v13[2] = 4020;
        Json::Value::Construct((int)(uintptr_t)(v13 + 3), nullptr);
        v13[7] = 0;
        v13[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v13 + 9), nullptr);
        v13[13] = 0;
        v13[7] = a3;
        v13[14] = 0;
        v13[15] = 0;
        v13[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v26, a2);
        v14 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "accountType");
        Json::Value::opAssign(v14, (const Json::Value::Self *)v26);
        Json::Value::Destroy((Json::Value::Self *)v26);
        Json::Value::Construct((int)(uintptr_t)(v27), a4);
        v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "group_category");
        Json::Value::opAssign(v15, (const Json::Value::Self *)v27);
        Json::Value::Destroy((Json::Value::Self *)v27);
        Json::Value::Construct((Json::Value::Self *)v28, a5);
        v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "limit");
        Json::Value::opAssign(v16, (const Json::Value::Self *)v28);
        Json::Value::Destroy((Json::Value::Self *)v28);
        Json::Value::Construct((Json::Value::Self *)v29, a6);
        v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "offset");
        Json::Value::opAssign(v17, (const Json::Value::Self *)v29);
        Json::Value::Destroy((Json::Value::Self *)v29);
        v18 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(ptr));
        return gaia::ThreadManager::pushTask(v18, v13);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22[1]), "social", (int)(uintptr_t)(v22));
        InitializationAndLoginStatus = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v22[1]);
        v11 = (void *)(*(uint32_t *)&v22[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v22[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v22[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v11);
        }
        if ( InitializationAndLoginStatus == 0 )
        {
          v23 = nullptr;
          v19 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(v25), v19);
          v20 = gaia::Gaia::GetInstance();
          InitializationAndLoginStatus = gaia::Osiris::SearchGroups(
                                           *(gaia::BaseServiceManager::Self **)(v20 + 24),
                                           (void **)&v23,
                                           &v24,
                                           (int)(uintptr_t)(v25),
                                           (int)(uintptr_t)(a4),
                                           a5,
                                           a6,
                                           0);
          g4_std::string::Destroy(v25);
          if ( InitializationAndLoginStatus == 0 )
            gaia::BaseServiceManager::ParseMessages(v23, v24, a3, 12);
          free(v23);
        }
      }
    }
  }
  return InitializationAndLoginStatus;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::ShowGroup  (binary VA: 0x148b940)
// Original: gaia::Gaia_Osiris::ShowGroup
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::ShowGroup(gaia::Gaia::Self *a1, int a2, int a3, uint32_t *a4, char a5, int a6, int a7)
{
  int InitializationAndLoginStatus;
  int Instance;
  void *v9;
  uint32_t *v11;
  Json::Value::Self *v12;
  Json::Value::Self *v13;
  int v14;
  int v15;
  int v16;
  Json::Value::Self *v17;
  bool v18;
  int v19;
  typedef gaia::ThreadManager::Self *_g4_t_ptr;
  typedef Json::Value::Self *_g4_t_v21;
  typedef uint16_t _g4_t_v22[3];
  typedef char *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef uint8_t _g4_t_v25[4];
  typedef uint8_t _g4_t_v26[16];
  typedef uint8_t _g4_t_v27[16];
  typedef uint8_t _g4_t_v28[16];
  typedef uint8_t _g4_t_v29[16];
  typedef uint8_t _g4_t_v30[16];
  typedef int _g4_t_v31;
  typedef uint8_t _g4_t_v32[124];
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v21)) > _g4_s1 ? (40u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (58u + sizeof(_g4_t_v22)) > _g4_s2 ? (58u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v23)) > _g4_s3 ? (64u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (68u + sizeof(_g4_t_v24)) > _g4_s4 ? (68u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v25)) > _g4_s5 ? (72u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v26)) > _g4_s6 ? (76u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (92u + sizeof(_g4_t_v27)) > _g4_s7 ? (92u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (108u + sizeof(_g4_t_v28)) > _g4_s8 ? (108u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (124u + sizeof(_g4_t_v29)) > _g4_s9 ? (124u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (140u + sizeof(_g4_t_v30)) > _g4_s10 ? (140u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (156u + sizeof(_g4_t_v31)) > _g4_s11 ? (156u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (160u + sizeof(_g4_t_v32)) > _g4_s12 ? (160u + sizeof(_g4_t_v32)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 58u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 64u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 68u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 72u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 76u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 92u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 108u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 124u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 140u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 156u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 160u);

  gaia::Gaia::GetInstance();
  InitializationAndLoginStatus = -21;
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
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
        v11[2] = 4019;
        Json::Value::Construct((int)(uintptr_t)(v11 + 3), nullptr);
        v11[7] = 0;
        v11[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v11 + 9), nullptr);
        v11[13] = 0;
        v11[14] = 0;
        v11[15] = 0;
        v11[16] = 0;
        v11[7] = a3;
        Json::Value::Construct((Json::Value::Self *)v26, a2);
        v12 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v11 + 3), "accountType");
        Json::Value::opAssign(v12, (const Json::Value::Self *)v26);
        Json::Value::Destroy((Json::Value::Self *)v26);
        Json::Value::Construct((int)(uintptr_t)(v27), a4);
        v13 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v11 + 3), "group_id");
        Json::Value::opAssign(v13, (const Json::Value::Self *)v27);
        Json::Value::Destroy((Json::Value::Self *)v27);
        v14 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(ptr));
        return gaia::ThreadManager::pushTask(v14, v11);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22[1]), "social", (int)(uintptr_t)(v22));
        InitializationAndLoginStatus = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v22[1]);
        v9 = (void *)(*(uint32_t *)&v22[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v22[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v22[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v9);
        }
        if ( InitializationAndLoginStatus == 0 )
        {
          v23 = nullptr;
          v15 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(v25), v15);
          v16 = gaia::Gaia::GetInstance();
          InitializationAndLoginStatus = gaia::Osiris::ShowGroup(
                                           *(gaia::BaseServiceManager::Self **)(v16 + 24),
                                           (void **)&v23,
                                           &v24,
                                           (int)(uintptr_t)(v25),
                                           (int)(uintptr_t)(a4),
                                           0);
          g4_std::string::Destroy(v25);
          if ( InitializationAndLoginStatus == 0 )
          {
            Json::Reader::Construct((Json::Reader::Self *)v32);
            Json::Value::Construct((int)(uintptr_t)(v28), nullptr);
            if ( (uint8_t)Json::Reader::parse((Json::Reader::Self *)v32, v23, &v23[v24], (Json::Value::Self *)v28, true) == 0 )
            {
              InitializationAndLoginStatus = -12;
              free(v23);
              Json::Value::Destroy((Json::Value::Self *)v28);
              sub_545800((int)(uintptr_t)(v32));
              return InitializationAndLoginStatus;
            }
            Json::Value::Construct((Json::Value::Self *)v29, (const Json::Value::Self *)v28);
            gaia::BaseJSONServiceResponse::Construct((Json::Value::Self *)v30, (Json::Value::Self *)v29);
            Json::Value::Destroy((Json::Value::Self *)v29);
            v17 = *(Json::Value::Self **)(a3 + 4);
            v18 = v17 == *(Json::Value::Self **)(a3 + 8);
            v31 = 12;
            if ( v18 )
            {
              g4_std::vector_gaia_BaseJSONServiceResp_48cd2f::M_insert_aux(a3, v17, (Json::Value::Self *)v30);
            }
            else
            {
              v19 = 0;
              if ( v17 != nullptr )
              {
                v21 = v17;
                Json::Value::Construct(v17, (const Json::Value::Self *)v30);
                *((uint32_t *)v21 + 4) = v31;
                v19 = *(uint32_t *)(a3 + 4);
              }
              *(uint32_t *)(a3 + 4) = v19 + 20;
            }
            gaia::BaseJSONServiceResponse::Destroy((gaia::BaseJSONServiceResponse::Self *)v30);
            Json::Value::Destroy((Json::Value::Self *)v28);
            sub_545800((int)(uintptr_t)(v32));
          }
          free(v23);
        }
      }
    }
  }
  return InitializationAndLoginStatus;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::CreateGroup  (binary VA: 0x148bd50)
// Original: gaia::Gaia_Osiris::CreateGroup
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::CreateGroup(gaia::Gaia::Self *a1, int a2, int a3, int a4, uint32_t *a5, uint32_t *a6, uint32_t *a7, unsigned int a8, uint32_t *a9, int a10, int a11, char a12, int a13, int a14)
{
  char IsInitialized;
  int result;
  int Instance;
  void *v17;
  uint32_t *v18;
  Json::Value::Self *v19;
  Json::Value::Self *v20;
  Json::Value::Self *v21;
  Json::Value::Self *v22;
  Json::Value::Self *v23;
  Json::Value::Self *v24;
  Json::Value::Self *v25;
  Json::Value::Self *v26;
  int v27;
  int v28;
  int v29;
  int v30;
  typedef gaia::ThreadManager::Self *_g4_t_ptr;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef uint16_t _g4_t_v35[3];
  typedef char *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef uint8_t _g4_t_v39[16];
  typedef uint8_t _g4_t_v40[16];
  typedef uint8_t _g4_t_v41[16];
  typedef uint8_t _g4_t_v42[16];
  typedef uint8_t _g4_t_v43[16];
  typedef uint8_t _g4_t_v44[16];
  typedef uint8_t _g4_t_v45[16];
  typedef uint8_t _g4_t_v46[44];
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (76u + sizeof(_g4_t_v32)) > _g4_s1 ? (76u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (76u + sizeof(_g4_t_v33)) > _g4_s2 ? (76u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (76u + sizeof(_g4_t_v34)) > _g4_s3 ? (76u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (94u + sizeof(_g4_t_v35)) > _g4_s4 ? (94u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (100u + sizeof(_g4_t_v36)) > _g4_s5 ? (100u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (104u + sizeof(_g4_t_v37)) > _g4_s6 ? (104u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (108u + sizeof(_g4_t_v38)) > _g4_s7 ? (108u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (112u + sizeof(_g4_t_v39)) > _g4_s8 ? (112u + sizeof(_g4_t_v39)) : _g4_s8,
    _g4_s10 = (128u + sizeof(_g4_t_v40)) > _g4_s9 ? (128u + sizeof(_g4_t_v40)) : _g4_s9,
    _g4_s11 = (144u + sizeof(_g4_t_v41)) > _g4_s10 ? (144u + sizeof(_g4_t_v41)) : _g4_s10,
    _g4_s12 = (160u + sizeof(_g4_t_v42)) > _g4_s11 ? (160u + sizeof(_g4_t_v42)) : _g4_s11,
    _g4_s13 = (176u + sizeof(_g4_t_v43)) > _g4_s12 ? (176u + sizeof(_g4_t_v43)) : _g4_s12,
    _g4_s14 = (192u + sizeof(_g4_t_v44)) > _g4_s13 ? (192u + sizeof(_g4_t_v44)) : _g4_s13,
    _g4_s15 = (208u + sizeof(_g4_t_v45)) > _g4_s14 ? (208u + sizeof(_g4_t_v45)) : _g4_s14,
    _g4_s16 = (224u + sizeof(_g4_t_v46)) > _g4_s15 ? (224u + sizeof(_g4_t_v46)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 76u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 76u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 76u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 94u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 100u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 104u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 108u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 112u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 128u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 144u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 160u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 176u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 192u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 208u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 224u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    result = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
    if ( result == 0 )
    {
      if ( a12 != 0 )
      {
        v18 = (uint32_t *)opNew(0x44u);
        *v18 = a14;
        v18[1] = a13;
        v18[2] = 4016;
        Json::Value::Construct((int)(uintptr_t)(v18 + 3), nullptr);
        v18[7] = 0;
        v18[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v18 + 9), nullptr);
        v18[13] = 0;
        v18[7] = a3;
        v18[14] = 0;
        v18[15] = 0;
        v18[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v39, a2);
        v19 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v18 + 3), "accountType");
        Json::Value::opAssign(v19, (const Json::Value::Self *)v39);
        Json::Value::Destroy((Json::Value::Self *)v39);
        Json::Value::Construct((int)(uintptr_t)(v40), a5);
        v20 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v18 + 3), "group_name");
        Json::Value::opAssign(v20, (const Json::Value::Self *)v40);
        Json::Value::Destroy((Json::Value::Self *)v40);
        Json::Value::Construct((int)(uintptr_t)(v41), a6);
        v21 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v18 + 3), "group_category");
        Json::Value::opAssign(v21, (const Json::Value::Self *)v41);
        Json::Value::Destroy((Json::Value::Self *)v41);
        Json::Value::Construct((int)(uintptr_t)(v42), a7);
        v22 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v18 + 3), "group_description");
        Json::Value::opAssign(v22, (const Json::Value::Self *)v42);
        Json::Value::Destroy((Json::Value::Self *)v42);
        Json::Value::Construct((Json::Value::Self *)v43, a8);
        v23 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v18 + 3), "member_limit");
        Json::Value::opAssign(v23, (const Json::Value::Self *)v43);
        Json::Value::Destroy((Json::Value::Self *)v43);
        Json::Value::Construct((int)(uintptr_t)(v44), a9);
        v24 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v18 + 3), "group_id");
        Json::Value::opAssign(v24, (const Json::Value::Self *)v44);
        Json::Value::Destroy((Json::Value::Self *)v44);
        Json::Value::Construct((Json::Value::Self *)v45, a10);
        v25 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v18 + 3), "membership");
        Json::Value::opAssign(v25, (const Json::Value::Self *)v45);
        Json::Value::Destroy((Json::Value::Self *)v45);
        Json::Value::Construct((Json::Value::Self *)v46, a4);
        v26 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v18 + 3), "group_type");
        Json::Value::opAssign(v26, (const Json::Value::Self *)v46);
        Json::Value::Destroy((Json::Value::Self *)v46);
        v18[8] = a11;
        v27 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(ptr));
        return gaia::ThreadManager::pushTask(v27, v18);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35[1]), "social_group", (int)(uintptr_t)(v35));
        result = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v35[1]);
        v17 = (void *)(*(uint32_t *)&v35[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v35[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v35[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          v34 = result;
          g4_std::string::Rep::M_destroy(v17);
          result = v34;
        }
        if ( result == 0 )
        {
          v36 = nullptr;
          v28 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(&v38), v28);
          v29 = gaia::Gaia::GetInstance();
          v32 = gaia::Osiris::CreateGroup(
                  *(gaia::BaseServiceManager::Self **)(v29 + 24),
                  (void **)&v36,
                  &v37,
                  (int)(uintptr_t)(&v38),
                  a4,
                  (int)(uintptr_t)(a5),
                  (int)(uintptr_t)(a6),
                  (int)(uintptr_t)(a7),
                  a8,
                  (int)(uintptr_t)(a9),
                  a10,
                  a11,
                  0);
          g4_std::string::Destroy(&v38);
          v30 = v32;
          if ( v32 == 0 )
            v30 = gaia::BaseServiceManager::ParseMessages(v36, v37, a3, 12);
          v33 = v30;
          free(v36);
          return v33;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::GetProfile  (binary VA: 0x148c1e0)
// Original: gaia::Gaia_Osiris::GetProfile
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::GetProfile(gaia::Gaia::Self *a1, int a2, int a3, int a4, uint32_t *a5, char a6, int a7, int a8)
{
  int InitializationAndLoginStatus;
  int Instance;
  void *v11;
  void *v12;
  uint32_t *v13;
  Json::Value::Self *v14;
  Json::Value::Self *v15;
  Json::Value::Self *v16;
  int v17;
  int v18;
  int v19;
  Json::Value::Self *v20;
  int v21;
  typedef gaia::ThreadManager::Self *_g4_t_ptr;
  typedef Json::Value::Self *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef char *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef uint8_t _g4_t_v30[4];
  typedef uint8_t _g4_t_v31[16];
  typedef uint8_t _g4_t_v32[16];
  typedef uint8_t _g4_t_v33[16];
  typedef uint8_t _g4_t_v34[16];
  typedef uint8_t _g4_t_v35[16];
  typedef uint8_t _g4_t_v36[16];
  typedef int _g4_t_v37;
  typedef uint8_t _g4_t_v38[124];
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v23)) > _g4_s1 ? (40u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v24)) > _g4_s2 ? (48u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v25)) > _g4_s3 ? (52u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v26)) > _g4_s4 ? (56u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v27)) > _g4_s5 ? (60u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v28)) > _g4_s6 ? (64u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v29)) > _g4_s7 ? (68u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v30)) > _g4_s8 ? (72u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v31)) > _g4_s9 ? (76u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_v32)) > _g4_s10 ? (92u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (108u + sizeof(_g4_t_v33)) > _g4_s11 ? (108u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (124u + sizeof(_g4_t_v34)) > _g4_s12 ? (124u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (140u + sizeof(_g4_t_v35)) > _g4_s13 ? (140u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (156u + sizeof(_g4_t_v36)) > _g4_s14 ? (156u + sizeof(_g4_t_v36)) : _g4_s14,
    _g4_s16 = (172u + sizeof(_g4_t_v37)) > _g4_s15 ? (172u + sizeof(_g4_t_v37)) : _g4_s15,
    _g4_s17 = (176u + sizeof(_g4_t_v38)) > _g4_s16 ? (176u + sizeof(_g4_t_v38)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 48u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 52u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 64u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 68u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 72u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 76u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 92u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 108u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 124u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 140u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 156u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 172u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 176u);

  InitializationAndLoginStatus = -21;
  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
    return InitializationAndLoginStatus;
  Instance = gaia::Gaia::GetInstance();
  InitializationAndLoginStatus = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
  if ( InitializationAndLoginStatus != 0 )
    return InitializationAndLoginStatus;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), (char *)&unk_1B15112, (int)(uintptr_t)(&v24));
  gaia::BaseServiceManager::GetCredentialString(&v26);
  g4_std::string::append_str(&v25, &v26);
  v11 = (void *)(v26 - 12);
  if ( (uint32_t *)(v26 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v11);
  }
  g4_std::string::append((int)(uintptr_t)(&v25), ":", 1u);
  g4_std::string::append_str(&v25, a5);
  if ( a6 != 0 )
  {
    v13 = (uint32_t *)opNew(0x44u);
    *v13 = a8;
    v13[1] = a7;
    v13[2] = 4014;
    Json::Value::Construct((int)(uintptr_t)(v13 + 3), nullptr);
    v13[7] = 0;
    v13[8] = 0;
    Json::Value::Construct((int)(uintptr_t)(v13 + 9), nullptr);
    v13[13] = 0;
    v13[7] = a3;
    v13[14] = 0;
    v13[15] = 0;
    v13[16] = 0;
    Json::Value::Construct((Json::Value::Self *)v31, a2);
    v14 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "accountType");
    Json::Value::opAssign(v14, (const Json::Value::Self *)v31);
    Json::Value::Destroy((Json::Value::Self *)v31);
    Json::Value::Construct((Json::Value::Self *)v32, a4);
    v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "targetAccountType");
    Json::Value::opAssign(v15, (const Json::Value::Self *)v32);
    Json::Value::Destroy((Json::Value::Self *)v32);
    Json::Value::Construct((int)(uintptr_t)(v33), a5);
    v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "targetUsername");
    Json::Value::opAssign(v16, (const Json::Value::Self *)v33);
    Json::Value::Destroy((Json::Value::Self *)v33);
    v17 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(ptr));
    InitializationAndLoginStatus = gaia::ThreadManager::pushTask(v17, v13);
  }
  else
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "social", (int)(uintptr_t)(&v24) + 1);
    InitializationAndLoginStatus = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v27);
    g4_std::string::Destroy(&v27);
    if ( InitializationAndLoginStatus == 0 )
    {
      v28 = nullptr;
      v18 = gaia::Gaia::GetInstance();
      gaia::Gaia::GetJanusToken((int)(uintptr_t)(v30), v18);
      v19 = gaia::Gaia::GetInstance();
      InitializationAndLoginStatus = gaia::Osiris::GetProfile(
                                       *(gaia::BaseServiceManager::Self **)(v19 + 24),
                                       (void **)&v28,
                                       &v29,
                                       (int)(uintptr_t)(v30),
                                       (int)(uintptr_t)(&v25),
                                       0);
      g4_std::string::Destroy(v30);
      if ( InitializationAndLoginStatus == 0 )
      {
        Json::Reader::Construct((Json::Reader::Self *)v38);
        Json::Value::Construct((int)(uintptr_t)(v34), nullptr);
        if ( (uint8_t)Json::Reader::parse((Json::Reader::Self *)v38, v28, &v28[v29], (Json::Value::Self *)v34, true) == 0 )
        {
          InitializationAndLoginStatus = -12;
          free(v28);
          Json::Value::Destroy((Json::Value::Self *)v34);
          sub_545800((int)(uintptr_t)(v38));
          goto LABEL_7;
        }
        Json::Value::Construct((Json::Value::Self *)v35, (const Json::Value::Self *)v34);
        gaia::BaseJSONServiceResponse::Construct((Json::Value::Self *)v36, (Json::Value::Self *)v35);
        Json::Value::Destroy((Json::Value::Self *)v35);
        v37 = 6;
        v20 = *(Json::Value::Self **)(a3 + 4);
        if ( v20 == *(Json::Value::Self **)(a3 + 8) )
        {
          g4_std::vector_gaia_BaseJSONServiceResp_48cd2f::M_insert_aux(a3, v20, (Json::Value::Self *)v36);
        }
        else
        {
          v21 = 0;
          if ( v20 != nullptr )
          {
            v23 = *(Json::Value::Self **)(a3 + 4);
            Json::Value::Construct(v20, (const Json::Value::Self *)v36);
            *((uint32_t *)v23 + 4) = v37;
            v21 = *(uint32_t *)(a3 + 4);
          }
          *(uint32_t *)(a3 + 4) = v21 + 20;
        }
        gaia::BaseJSONServiceResponse::Destroy((gaia::BaseJSONServiceResponse::Self *)v36);
        Json::Value::Destroy((Json::Value::Self *)v34);
        sub_545800((int)(uintptr_t)(v38));
      }
      free(v28);
    }
  }
LABEL_7:
  v12 = (void *)(v25 - 12);
  if ( (uint32_t *)(v25 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v12);
  }
  return InitializationAndLoginStatus;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::UpdateStatusLine  (binary VA: 0x148c6e0)
// Original: gaia::Gaia_Osiris::UpdateStatusLine
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::UpdateStatusLine(gaia::Gaia::Self *a1, int a2, uint32_t *a3, char a4, int a5, int a6)
{
  char IsInitialized;
  int result;
  int Instance;
  void *v9;
  uint32_t *v10;
  Json::Value::Self *v11;
  Json::Value::Self *v12;
  int v13;
  int v14;
  int v15;
  typedef gaia::ThreadManager::Self *_g4_t_v16;
  typedef Json::Value::Self *_g4_t_updated;
  typedef Json::Value::Self *_g4_t_v18;
  typedef uint16_t _g4_t_v19[3];
  typedef int _g4_t_v20;
  typedef uint8_t _g4_t_v21[16];
  typedef uint8_t _g4_t_v22[28];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_updated)) > _g4_s1 ? (28u + sizeof(_g4_t_updated)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v18)) > _g4_s2 ? (28u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (38u + sizeof(_g4_t_v19)) > _g4_s3 ? (38u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v20)) > _g4_s4 ? (44u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v21)) > _g4_s5 ? (48u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v22)) > _g4_s6 ? (64u + sizeof(_g4_t_v22)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_updated &updated = *reinterpret_cast<_g4_t_updated *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 38u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 64u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    result = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
    if ( result == 0 )
    {
      if ( a4 != 0 )
      {
        v10 = (uint32_t *)opNew(0x44u);
        *v10 = a6;
        v10[1] = a5;
        v10[2] = 4015;
        Json::Value::Construct((int)(uintptr_t)(v10 + 3), nullptr);
        v10[7] = 0;
        v10[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v10 + 9), nullptr);
        v10[13] = 0;
        v10[14] = 0;
        v10[15] = 0;
        v10[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v21, a2);
        v11 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v10 + 3), "accountType");
        Json::Value::opAssign(v11, (const Json::Value::Self *)v21);
        Json::Value::Destroy((Json::Value::Self *)v21);
        Json::Value::Construct((int)(uintptr_t)(v22), a3);
        v12 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v10 + 3), "statusLine");
        Json::Value::opAssign(v12, (const Json::Value::Self *)v22);
        Json::Value::Destroy((Json::Value::Self *)v22);
        v13 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v16));
        return gaia::ThreadManager::pushTask(v13, v10);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19[1]), "social", (int)(uintptr_t)(v19));
        result = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v19[1]);
        v9 = (void *)(*(uint32_t *)&v19[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v19[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v19[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          v18 = (Json::Value::Self *)result;
          g4_std::string::Rep::M_destroy(v9);
          result = (int)(uintptr_t)(v18);
        }
        if ( result == 0 )
        {
          v14 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(&v20), v14);
          v15 = gaia::Gaia::GetInstance();
          updated = (Json::Value::Self *)gaia::Osiris::UpdateStatusLine(
                                     *(gaia::BaseServiceManager::Self **)(v15 + 24),
                                     (int)(uintptr_t)(&v20),
                                     (int)(uintptr_t)(a3),
                                     0);
          g4_std::string::Destroy(&v20);
          return (int)(uintptr_t)(updated);
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::UpdateProfile  (binary VA: 0x148c930)
// Original: gaia::Gaia_Osiris::UpdateProfile
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::UpdateProfile(gaia::Gaia::Self *a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, char a6, int a7, int a8)
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
  int v19;
  typedef gaia::ThreadManager::Self *_g4_t_v20;
  typedef int _g4_t_updated;
  typedef int _g4_t_v22;
  typedef uint16_t _g4_t_v23[3];
  typedef int _g4_t_v24;
  typedef uint8_t _g4_t_v25[16];
  typedef uint8_t _g4_t_v26[16];
  typedef uint8_t _g4_t_v27[16];
  typedef uint8_t _g4_t_v28[28];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v20)) > _g4_s0 ? (0u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_updated)) > _g4_s1 ? (40u + sizeof(_g4_t_updated)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v22)) > _g4_s2 ? (40u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (54u + sizeof(_g4_t_v23)) > _g4_s3 ? (54u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v24)) > _g4_s4 ? (60u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v25)) > _g4_s5 ? (64u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v26)) > _g4_s6 ? (80u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v27)) > _g4_s7 ? (96u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (112u + sizeof(_g4_t_v28)) > _g4_s8 ? (112u + sizeof(_g4_t_v28)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_updated &updated = *reinterpret_cast<_g4_t_updated *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 54u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 60u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 64u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 80u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 96u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 112u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    result = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
    if ( result == 0 )
    {
      if ( a6 != 0 )
      {
        v12 = (uint32_t *)opNew(0x44u);
        *v12 = a8;
        v12[1] = a7;
        v12[2] = 4013;
        Json::Value::Construct((int)(uintptr_t)(v12 + 3), nullptr);
        v12[7] = 0;
        v12[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v12 + 9), nullptr);
        v12[13] = 0;
        v12[14] = 0;
        v12[15] = 0;
        v12[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v25, a2);
        v13 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v12 + 3), "accountType");
        Json::Value::opAssign(v13, (const Json::Value::Self *)v25);
        Json::Value::Destroy((Json::Value::Self *)v25);
        Json::Value::Construct((int)(uintptr_t)(v26), a3);
        v14 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v12 + 3), "username");
        Json::Value::opAssign(v14, (const Json::Value::Self *)v26);
        Json::Value::Destroy((Json::Value::Self *)v26);
        Json::Value::Construct((int)(uintptr_t)(v27), a4);
        v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v12 + 3), "lang");
        Json::Value::opAssign(v15, (const Json::Value::Self *)v27);
        Json::Value::Destroy((Json::Value::Self *)v27);
        Json::Value::Construct((int)(uintptr_t)(v28), a5);
        v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v12 + 3), "country");
        Json::Value::opAssign(v16, (const Json::Value::Self *)v28);
        Json::Value::Destroy((Json::Value::Self *)v28);
        v17 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v20));
        return gaia::ThreadManager::pushTask(v17, v12);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23[1]), "social", (int)(uintptr_t)(v23));
        result = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v23[1]);
        v11 = (void *)(*(uint32_t *)&v23[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v23[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v23[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          v22 = result;
          g4_std::string::Rep::M_destroy(v11);
          result = v22;
        }
        if ( result == 0 )
        {
          v18 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(&v24), v18);
          v19 = gaia::Gaia::GetInstance();
          updated = gaia::Osiris::UpdateProfile(
                      *(gaia::BaseServiceManager::Self **)(v19 + 24),
                      (int)(uintptr_t)(&v24),
                      (int)(uintptr_t)(a3),
                      (int)(uintptr_t)(a4),
                      (int)(uintptr_t)(a5),
                      0);
          g4_std::string::Destroy(&v24);
          return updated;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::IgnoreRequest  (binary VA: 0x148cc40)
// Original: gaia::Gaia_Osiris::IgnoreRequest
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::IgnoreRequest(gaia::Gaia::Self *a1, int a2, uint32_t *a3, char a4, int a5, int a6)
{
  char IsInitialized;
  int result;
  int Instance;
  void *v9;
  uint32_t *v10;
  Json::Value::Self *v11;
  Json::Value::Self *v12;
  int v13;
  int v14;
  int v15;
  typedef gaia::ThreadManager::Self *_g4_t_v16;
  typedef Json::Value::Self *_g4_t_v17;
  typedef Json::Value::Self *_g4_t_v18;
  typedef uint16_t _g4_t_v19[3];
  typedef int _g4_t_v20;
  typedef uint8_t _g4_t_v21[16];
  typedef uint8_t _g4_t_v22[28];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v17)) > _g4_s1 ? (28u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v18)) > _g4_s2 ? (28u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (38u + sizeof(_g4_t_v19)) > _g4_s3 ? (38u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v20)) > _g4_s4 ? (44u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v21)) > _g4_s5 ? (48u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v22)) > _g4_s6 ? (64u + sizeof(_g4_t_v22)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 38u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 64u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    result = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
    if ( result == 0 )
    {
      if ( a4 != 0 )
      {
        v10 = (uint32_t *)opNew(0x44u);
        *v10 = a6;
        v10[1] = a5;
        v10[2] = 4012;
        Json::Value::Construct((int)(uintptr_t)(v10 + 3), nullptr);
        v10[7] = 0;
        v10[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v10 + 9), nullptr);
        v10[13] = 0;
        v10[14] = 0;
        v10[15] = 0;
        v10[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v21, a2);
        v11 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v10 + 3), "accountType");
        Json::Value::opAssign(v11, (const Json::Value::Self *)v21);
        Json::Value::Destroy((Json::Value::Self *)v21);
        Json::Value::Construct((int)(uintptr_t)(v22), a3);
        v12 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v10 + 3), "request_id");
        Json::Value::opAssign(v12, (const Json::Value::Self *)v22);
        Json::Value::Destroy((Json::Value::Self *)v22);
        v13 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v16));
        return gaia::ThreadManager::pushTask(v13, v10);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19[1]), "social", (int)(uintptr_t)(v19));
        result = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v19[1]);
        v9 = (void *)(*(uint32_t *)&v19[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v19[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v19[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          v18 = (Json::Value::Self *)result;
          g4_std::string::Rep::M_destroy(v9);
          result = (int)(uintptr_t)(v18);
        }
        if ( result == 0 )
        {
          v14 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(&v20), v14);
          v15 = gaia::Gaia::GetInstance();
          v17 = (Json::Value::Self *)gaia::Osiris::IgnoreRequest(
                                 *(gaia::BaseServiceManager::Self **)(v15 + 24),
                                 (int)(uintptr_t)(&v20),
                                 (int)(uintptr_t)(a3),
                                 0);
          g4_std::string::Destroy(&v20);
          return (int)(uintptr_t)(v17);
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::RejectRequest  (binary VA: 0x148ce90)
// Original: gaia::Gaia_Osiris::RejectRequest
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::RejectRequest(gaia::Gaia::Self *a1, int a2, uint32_t *a3, char a4, int a5, int a6)
{
  char IsInitialized;
  int result;
  int Instance;
  void *v9;
  uint32_t *v10;
  Json::Value::Self *v11;
  Json::Value::Self *v12;
  int v13;
  int v14;
  int v15;
  typedef gaia::ThreadManager::Self *_g4_t_v16;
  typedef Json::Value::Self *_g4_t_v17;
  typedef Json::Value::Self *_g4_t_v18;
  typedef uint16_t _g4_t_v19[3];
  typedef int _g4_t_v20;
  typedef uint8_t _g4_t_v21[16];
  typedef uint8_t _g4_t_v22[28];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v17)) > _g4_s1 ? (28u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v18)) > _g4_s2 ? (28u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (38u + sizeof(_g4_t_v19)) > _g4_s3 ? (38u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v20)) > _g4_s4 ? (44u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v21)) > _g4_s5 ? (48u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v22)) > _g4_s6 ? (64u + sizeof(_g4_t_v22)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 38u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 64u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    result = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
    if ( result == 0 )
    {
      if ( a4 != 0 )
      {
        v10 = (uint32_t *)opNew(0x44u);
        *v10 = a6;
        v10[1] = a5;
        v10[2] = 4011;
        Json::Value::Construct((int)(uintptr_t)(v10 + 3), nullptr);
        v10[7] = 0;
        v10[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v10 + 9), nullptr);
        v10[13] = 0;
        v10[14] = 0;
        v10[15] = 0;
        v10[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v21, a2);
        v11 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v10 + 3), "accountType");
        Json::Value::opAssign(v11, (const Json::Value::Self *)v21);
        Json::Value::Destroy((Json::Value::Self *)v21);
        Json::Value::Construct((int)(uintptr_t)(v22), a3);
        v12 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v10 + 3), "request_id");
        Json::Value::opAssign(v12, (const Json::Value::Self *)v22);
        Json::Value::Destroy((Json::Value::Self *)v22);
        v13 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v16));
        return gaia::ThreadManager::pushTask(v13, v10);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19[1]), "social", (int)(uintptr_t)(v19));
        result = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v19[1]);
        v9 = (void *)(*(uint32_t *)&v19[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v19[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v19[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          v18 = (Json::Value::Self *)result;
          g4_std::string::Rep::M_destroy(v9);
          result = (int)(uintptr_t)(v18);
        }
        if ( result == 0 )
        {
          v14 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(&v20), v14);
          v15 = gaia::Gaia::GetInstance();
          v17 = (Json::Value::Self *)gaia::Osiris::RejectRequest(
                                 *(gaia::BaseServiceManager::Self **)(v15 + 24),
                                 (int)(uintptr_t)(&v20),
                                 (int)(uintptr_t)(a3),
                                 0);
          g4_std::string::Destroy(&v20);
          return (int)(uintptr_t)(v17);
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::AcceptRequest  (binary VA: 0x148d0e0)
// Original: gaia::Gaia_Osiris::AcceptRequest
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::AcceptRequest(gaia::Gaia::Self *a1, int a2, uint32_t *a3, char a4, int a5, int a6)
{
  char IsInitialized;
  int result;
  int Instance;
  void *v9;
  uint32_t *v10;
  Json::Value::Self *v11;
  Json::Value::Self *v12;
  int v13;
  int v14;
  int v15;
  typedef gaia::ThreadManager::Self *_g4_t_v16;
  typedef Json::Value::Self *_g4_t_v17;
  typedef Json::Value::Self *_g4_t_v18;
  typedef uint16_t _g4_t_v19[3];
  typedef int _g4_t_v20;
  typedef uint8_t _g4_t_v21[16];
  typedef uint8_t _g4_t_v22[28];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v17)) > _g4_s1 ? (28u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v18)) > _g4_s2 ? (28u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (38u + sizeof(_g4_t_v19)) > _g4_s3 ? (38u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v20)) > _g4_s4 ? (44u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v21)) > _g4_s5 ? (48u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v22)) > _g4_s6 ? (64u + sizeof(_g4_t_v22)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 38u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 64u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    result = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
    if ( result == 0 )
    {
      if ( a4 != 0 )
      {
        v10 = (uint32_t *)opNew(0x44u);
        *v10 = a6;
        v10[1] = a5;
        v10[2] = 4010;
        Json::Value::Construct((int)(uintptr_t)(v10 + 3), nullptr);
        v10[7] = 0;
        v10[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v10 + 9), nullptr);
        v10[13] = 0;
        v10[14] = 0;
        v10[15] = 0;
        v10[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v21, a2);
        v11 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v10 + 3), "accountType");
        Json::Value::opAssign(v11, (const Json::Value::Self *)v21);
        Json::Value::Destroy((Json::Value::Self *)v21);
        Json::Value::Construct((int)(uintptr_t)(v22), a3);
        v12 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v10 + 3), "request_id");
        Json::Value::opAssign(v12, (const Json::Value::Self *)v22);
        Json::Value::Destroy((Json::Value::Self *)v22);
        v13 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v16));
        return gaia::ThreadManager::pushTask(v13, v10);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19[1]), "social", (int)(uintptr_t)(v19));
        result = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v19[1]);
        v9 = (void *)(*(uint32_t *)&v19[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v19[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v19[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          v18 = (Json::Value::Self *)result;
          g4_std::string::Rep::M_destroy(v9);
          result = (int)(uintptr_t)(v18);
        }
        if ( result == 0 )
        {
          v14 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(&v20), v14);
          v15 = gaia::Gaia::GetInstance();
          v17 = (Json::Value::Self *)gaia::Osiris::AcceptRequest(
                                 *(gaia::BaseServiceManager::Self **)(v15 + 24),
                                 (int)(uintptr_t)(&v20),
                                 (int)(uintptr_t)(a3),
                                 0);
          g4_std::string::Destroy(&v20);
          return (int)(uintptr_t)(v17);
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::CancelSentRequest  (binary VA: 0x148d330)
// Original: gaia::Gaia_Osiris::CancelSentRequest
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::CancelSentRequest(gaia::Gaia::Self *a1, int a2, uint32_t *a3, char a4, int a5, int a6)
{
  char IsInitialized;
  int result;
  int Instance;
  void *v9;
  uint32_t *v10;
  Json::Value::Self *v11;
  Json::Value::Self *v12;
  int v13;
  int v14;
  int v15;
  typedef gaia::ThreadManager::Self *_g4_t_v16;
  typedef Json::Value::Self *_g4_t_v17;
  typedef Json::Value::Self *_g4_t_v18;
  typedef uint16_t _g4_t_v19[3];
  typedef int _g4_t_v20;
  typedef uint8_t _g4_t_v21[16];
  typedef uint8_t _g4_t_v22[28];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v17)) > _g4_s1 ? (28u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v18)) > _g4_s2 ? (28u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (38u + sizeof(_g4_t_v19)) > _g4_s3 ? (38u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v20)) > _g4_s4 ? (44u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v21)) > _g4_s5 ? (48u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v22)) > _g4_s6 ? (64u + sizeof(_g4_t_v22)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 38u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 64u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    result = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
    if ( result == 0 )
    {
      if ( a4 != 0 )
      {
        v10 = (uint32_t *)opNew(0x44u);
        *v10 = a6;
        v10[1] = a5;
        v10[2] = 4009;
        Json::Value::Construct((int)(uintptr_t)(v10 + 3), nullptr);
        v10[7] = 0;
        v10[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v10 + 9), nullptr);
        v10[13] = 0;
        v10[14] = 0;
        v10[15] = 0;
        v10[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v21, a2);
        v11 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v10 + 3), "accountType");
        Json::Value::opAssign(v11, (const Json::Value::Self *)v21);
        Json::Value::Destroy((Json::Value::Self *)v21);
        Json::Value::Construct((int)(uintptr_t)(v22), a3);
        v12 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v10 + 3), "request_id");
        Json::Value::opAssign(v12, (const Json::Value::Self *)v22);
        Json::Value::Destroy((Json::Value::Self *)v22);
        v13 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v16));
        return gaia::ThreadManager::pushTask(v13, v10);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19[1]), "social", (int)(uintptr_t)(v19));
        result = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v19[1]);
        v9 = (void *)(*(uint32_t *)&v19[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v19[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v19[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          v18 = (Json::Value::Self *)result;
          g4_std::string::Rep::M_destroy(v9);
          result = (int)(uintptr_t)(v18);
        }
        if ( result == 0 )
        {
          v14 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(&v20), v14);
          v15 = gaia::Gaia::GetInstance();
          v17 = (Json::Value::Self *)gaia::Osiris::CancelSentRequest(
                                 *(gaia::BaseServiceManager::Self **)(v15 + 24),
                                 (int)(uintptr_t)(&v20),
                                 (int)(uintptr_t)(a3),
                                 0);
          g4_std::string::Destroy(&v20);
          return (int)(uintptr_t)(v17);
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::ListSentRequests  (binary VA: 0x148d580)
// Original: gaia::Gaia_Osiris::ListSentRequests
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::ListSentRequests(gaia::Gaia::Self *a1, int a2, int a3, int a4, unsigned int a5, unsigned int a6, char a7, int a8, int a9)
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
  typedef gaia::ThreadManager::Self *_g4_t_ptr;
  typedef uint16_t _g4_t_v22[3];
  typedef char *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef uint8_t _g4_t_v25[4];
  typedef uint8_t _g4_t_v26[16];
  typedef uint8_t _g4_t_v27[16];
  typedef uint8_t _g4_t_v28[16];
  typedef uint8_t _g4_t_v29[28];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (62u + sizeof(_g4_t_v22)) > _g4_s1 ? (62u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (68u + sizeof(_g4_t_v23)) > _g4_s2 ? (68u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (72u + sizeof(_g4_t_v24)) > _g4_s3 ? (72u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (76u + sizeof(_g4_t_v25)) > _g4_s4 ? (76u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (80u + sizeof(_g4_t_v26)) > _g4_s5 ? (80u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (96u + sizeof(_g4_t_v27)) > _g4_s6 ? (96u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (112u + sizeof(_g4_t_v28)) > _g4_s7 ? (112u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (128u + sizeof(_g4_t_v29)) > _g4_s8 ? (128u + sizeof(_g4_t_v29)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 62u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 68u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 72u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 76u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 80u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 96u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 112u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 128u);

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
        v13[2] = 4008;
        Json::Value::Construct((int)(uintptr_t)(v13 + 3), nullptr);
        v13[7] = 0;
        v13[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v13 + 9), nullptr);
        v13[13] = 0;
        v13[7] = a3;
        v13[14] = 0;
        v13[15] = 0;
        v13[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v26, a2);
        v14 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "accountType");
        Json::Value::opAssign(v14, (const Json::Value::Self *)v26);
        Json::Value::Destroy((Json::Value::Self *)v26);
        Json::Value::Construct((Json::Value::Self *)v27, a4);
        v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "request_type");
        Json::Value::opAssign(v15, (const Json::Value::Self *)v27);
        Json::Value::Destroy((Json::Value::Self *)v27);
        Json::Value::Construct((Json::Value::Self *)v28, a5);
        v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "limit");
        Json::Value::opAssign(v16, (const Json::Value::Self *)v28);
        Json::Value::Destroy((Json::Value::Self *)v28);
        Json::Value::Construct((Json::Value::Self *)v29, a6);
        v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "offset");
        Json::Value::opAssign(v17, (const Json::Value::Self *)v29);
        Json::Value::Destroy((Json::Value::Self *)v29);
        v18 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(ptr));
        return gaia::ThreadManager::pushTask(v18, v13);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22[1]), "social", (int)(uintptr_t)(v22));
        InitializationAndLoginStatus = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v22[1]);
        v11 = (void *)(*(uint32_t *)&v22[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v22[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v22[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v11);
        }
        if ( InitializationAndLoginStatus == 0 )
        {
          v23 = nullptr;
          v19 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(v25), v19);
          v20 = gaia::Gaia::GetInstance();
          InitializationAndLoginStatus = gaia::Osiris::ListSentRequests(
                                           *(gaia::BaseServiceManager::Self **)(v20 + 24),
                                           (void **)&v23,
                                           &v24,
                                           (int)(uintptr_t)(v25),
                                           a4,
                                           a5,
                                           a6,
                                           0);
          g4_std::string::Destroy(v25);
          if ( InitializationAndLoginStatus == 0 )
            gaia::BaseServiceManager::ParseMessages(v23, v24, a3, 10);
          free(v23);
        }
      }
    }
  }
  return InitializationAndLoginStatus;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::ListRequests  (binary VA: 0x148d900)
// Original: gaia::Gaia_Osiris::ListRequests
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::ListRequests(gaia::Gaia::Self *a1, int a2, int a3, int a4, unsigned int a5, unsigned int a6, uint32_t *a7, char a8, int a9, int a10)
{
  int InitializationAndLoginStatus;
  int Instance;
  void *v12;
  uint32_t *v14;
  Json::Value::Self *v15;
  Json::Value::Self *v16;
  Json::Value::Self *v17;
  Json::Value::Self *v18;
  Json::Value::Self *v19;
  int v20;
  int v21;
  int v22;
  typedef gaia::ThreadManager::Self *_g4_t_ptr;
  typedef uint16_t _g4_t_v24[3];
  typedef char *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint8_t _g4_t_v27[4];
  typedef uint8_t _g4_t_v28[16];
  typedef uint8_t _g4_t_v29[16];
  typedef uint8_t _g4_t_v30[16];
  typedef uint8_t _g4_t_v31[16];
  typedef uint8_t _g4_t_v32[28];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (78u + sizeof(_g4_t_v24)) > _g4_s1 ? (78u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (84u + sizeof(_g4_t_v25)) > _g4_s2 ? (84u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (88u + sizeof(_g4_t_v26)) > _g4_s3 ? (88u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (92u + sizeof(_g4_t_v27)) > _g4_s4 ? (92u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (96u + sizeof(_g4_t_v28)) > _g4_s5 ? (96u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (112u + sizeof(_g4_t_v29)) > _g4_s6 ? (112u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (128u + sizeof(_g4_t_v30)) > _g4_s7 ? (128u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (144u + sizeof(_g4_t_v31)) > _g4_s8 ? (144u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (160u + sizeof(_g4_t_v32)) > _g4_s9 ? (160u + sizeof(_g4_t_v32)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 78u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 84u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 88u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 92u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 96u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 112u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 128u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 144u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 160u);

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
        v14[2] = 4007;
        Json::Value::Construct((int)(uintptr_t)(v14 + 3), nullptr);
        v14[7] = 0;
        v14[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v14 + 9), nullptr);
        v14[13] = 0;
        v14[7] = a3;
        v14[14] = 0;
        v14[15] = 0;
        v14[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v28, a2);
        v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "accountType");
        Json::Value::opAssign(v15, (const Json::Value::Self *)v28);
        Json::Value::Destroy((Json::Value::Self *)v28);
        Json::Value::Construct((Json::Value::Self *)v29, a4);
        v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "request_type");
        Json::Value::opAssign(v16, (const Json::Value::Self *)v29);
        Json::Value::Destroy((Json::Value::Self *)v29);
        Json::Value::Construct((Json::Value::Self *)v30, a5);
        v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "limit");
        Json::Value::opAssign(v17, (const Json::Value::Self *)v30);
        Json::Value::Destroy((Json::Value::Self *)v30);
        Json::Value::Construct((Json::Value::Self *)v31, a6);
        v18 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "offset");
        Json::Value::opAssign(v18, (const Json::Value::Self *)v31);
        Json::Value::Destroy((Json::Value::Self *)v31);
        Json::Value::Construct((int)(uintptr_t)(v32), a7);
        v19 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "status");
        Json::Value::opAssign(v19, (const Json::Value::Self *)v32);
        Json::Value::Destroy((Json::Value::Self *)v32);
        v20 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(ptr));
        return gaia::ThreadManager::pushTask(v20, v14);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24[1]), "social", (int)(uintptr_t)(v24));
        InitializationAndLoginStatus = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v24[1]);
        v12 = (void *)(*(uint32_t *)&v24[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v24[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v24[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v12);
        }
        if ( InitializationAndLoginStatus == 0 )
        {
          v25 = nullptr;
          v21 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(v27), v21);
          v22 = gaia::Gaia::GetInstance();
          InitializationAndLoginStatus = gaia::Osiris::ListRequests(
                                           *(gaia::BaseServiceManager::Self **)(v22 + 24),
                                           (void **)&v25,
                                           &v26,
                                           (int)(uintptr_t)(v27),
                                           a4,
                                           a5,
                                           a6,
                                           (int)(uintptr_t)(a7),
                                           0);
          g4_std::string::Destroy(v27);
          if ( InitializationAndLoginStatus == 0 )
            gaia::BaseServiceManager::ParseMessages(v25, v26, a3, 10);
          free(v25);
        }
      }
    }
  }
  return InitializationAndLoginStatus;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::Import  (binary VA: 0x148dcd0)
// Original: gaia::Gaia_Osiris::Import
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::Import(gaia::Gaia::Self *a1, int a2, int a3, int a4, uint32_t *a5, uint32_t *a6, uint32_t *a7, char a8, int a9, int a10)
{
  int InitializationAndLoginStatus;
  int Instance;
  void *v13;
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
  typedef gaia::ThreadManager::Self *_g4_t_ptr;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef char *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef uint8_t _g4_t_v31[4];
  typedef uint8_t _g4_t_v32[16];
  typedef uint8_t _g4_t_v33[16];
  typedef uint8_t _g4_t_v34[16];
  typedef uint8_t _g4_t_v35[16];
  typedef uint8_t _g4_t_v36[28];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (52u + sizeof(_g4_t_v25)) > _g4_s1 ? (52u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (56u + sizeof(_g4_t_v26)) > _g4_s2 ? (56u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v27)) > _g4_s3 ? (60u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v28)) > _g4_s4 ? (64u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (68u + sizeof(_g4_t_v29)) > _g4_s5 ? (68u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v30)) > _g4_s6 ? (72u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v31)) > _g4_s7 ? (76u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v32)) > _g4_s8 ? (80u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (96u + sizeof(_g4_t_v33)) > _g4_s9 ? (96u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (112u + sizeof(_g4_t_v34)) > _g4_s10 ? (112u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (128u + sizeof(_g4_t_v35)) > _g4_s11 ? (128u + sizeof(_g4_t_v35)) : _g4_s11,
    _g4_s13 = (144u + sizeof(_g4_t_v36)) > _g4_s12 ? (144u + sizeof(_g4_t_v36)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 52u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 64u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 68u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 72u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 76u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 80u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 96u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 112u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 128u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 144u);

  InitializationAndLoginStatus = -21;
  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    InitializationAndLoginStatus = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
    if ( InitializationAndLoginStatus == 0 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), (char *)&unk_1B15112, (int)(uintptr_t)(&v25));
      gaia::BaseServiceManager::GetCredentialString(&v27);
      g4_std::string::append_str(&v26, &v27);
      v13 = (void *)(v27 - 12);
      if ( (uint32_t *)(v27 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v13);
      }
      g4_std::string::append((int)(uintptr_t)(&v26), ":", 1u);
      g4_std::string::append_str(&v26, a5);
      if ( a8 != 0 )
      {
        v15 = (uint32_t *)opNew(0x44u);
        *v15 = a10;
        v15[1] = a9;
        v15[2] = 4005;
        Json::Value::Construct((int)(uintptr_t)(v15 + 3), nullptr);
        v15[7] = 0;
        v15[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v15 + 9), nullptr);
        v15[13] = 0;
        v15[14] = 0;
        v15[15] = 0;
        v15[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v32, a2);
        v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "accountType");
        Json::Value::opAssign(v16, (const Json::Value::Self *)v32);
        Json::Value::Destroy((Json::Value::Self *)v32);
        v15[7] = a3;
        Json::Value::Construct((Json::Value::Self *)v33, a4);
        v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "targetAccountType");
        Json::Value::opAssign(v17, (const Json::Value::Self *)v33);
        Json::Value::Destroy((Json::Value::Self *)v33);
        Json::Value::Construct((int)(uintptr_t)(v34), a5);
        v18 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "targetUsername");
        Json::Value::opAssign(v18, (const Json::Value::Self *)v34);
        Json::Value::Destroy((Json::Value::Self *)v34);
        Json::Value::Construct((int)(uintptr_t)(v35), a6);
        v19 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "secret");
        Json::Value::opAssign(v19, (const Json::Value::Self *)v35);
        Json::Value::Destroy((Json::Value::Self *)v35);
        Json::Value::Construct((int)(uintptr_t)(v36), a7);
        v20 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "import_type");
        Json::Value::opAssign(v20, (const Json::Value::Self *)v36);
        Json::Value::Destroy((Json::Value::Self *)v36);
        v21 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(ptr));
        InitializationAndLoginStatus = gaia::ThreadManager::pushTask(v21, v15);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "social", (int)(uintptr_t)(&v25) + 1);
        InitializationAndLoginStatus = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v28);
        g4_std::string::Destroy(&v28);
        if ( InitializationAndLoginStatus == 0 )
        {
          v29 = nullptr;
          v22 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(v31), v22);
          v23 = gaia::Gaia::GetInstance();
          InitializationAndLoginStatus = gaia::Osiris::Import(
                                           *(gaia::BaseServiceManager::Self **)(v23 + 24),
                                           (void **)&v29,
                                           &v30,
                                           (int)(uintptr_t)(v31),
                                           (int)(uintptr_t)(&v26),
                                           (int)(uintptr_t)(a6),
                                           (int)(uintptr_t)(a7),
                                           0);
          g4_std::string::Destroy(v31);
          if ( InitializationAndLoginStatus == 0 )
            gaia::BaseServiceManager::ParseMessages(v29, v30, a3, 6);
          free(v29);
        }
      }
      v14 = (void *)(v26 - 12);
      if ( (uint32_t *)(v26 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v14);
      }
    }
  }
  return InitializationAndLoginStatus;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::ImportFriends  (binary VA: 0x148e140)
// Original: gaia::Gaia_Osiris::ImportFriends
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::ImportFriends(gaia::Gaia::Self *a1, int a2, int a3, int a4, int a5, uint32_t *a6, uint32_t *a7, char a8, int a9, int a10)
{
  int InitializationAndLoginStatus;
  int Instance;
  void *v13;
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
  typedef gaia::ThreadManager::Self *_g4_t_ptr;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef char *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef uint8_t _g4_t_v31[4];
  typedef uint8_t _g4_t_v32[16];
  typedef uint8_t _g4_t_v33[16];
  typedef uint8_t _g4_t_v34[16];
  typedef uint8_t _g4_t_v35[16];
  typedef uint8_t _g4_t_v36[28];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (52u + sizeof(_g4_t_v25)) > _g4_s1 ? (52u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (56u + sizeof(_g4_t_v26)) > _g4_s2 ? (56u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v27)) > _g4_s3 ? (60u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v28)) > _g4_s4 ? (64u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (68u + sizeof(_g4_t_v29)) > _g4_s5 ? (68u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v30)) > _g4_s6 ? (72u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v31)) > _g4_s7 ? (76u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v32)) > _g4_s8 ? (80u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (96u + sizeof(_g4_t_v33)) > _g4_s9 ? (96u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (112u + sizeof(_g4_t_v34)) > _g4_s10 ? (112u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (128u + sizeof(_g4_t_v35)) > _g4_s11 ? (128u + sizeof(_g4_t_v35)) : _g4_s11,
    _g4_s13 = (144u + sizeof(_g4_t_v36)) > _g4_s12 ? (144u + sizeof(_g4_t_v36)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 52u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 64u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 68u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 72u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 76u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 80u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 96u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 112u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 128u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 144u);

  InitializationAndLoginStatus = -21;
  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    InitializationAndLoginStatus = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
    if ( InitializationAndLoginStatus == 0 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), (char *)&unk_1B15112, (int)(uintptr_t)(&v25));
      gaia::BaseServiceManager::GetCredentialString(&v27);
      g4_std::string::append_str(&v26, &v27);
      v13 = (void *)(v27 - 12);
      if ( (uint32_t *)(v27 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v13);
      }
      g4_std::string::append((int)(uintptr_t)(&v26), ":", 1u);
      g4_std::string::append_str(&v26, a6);
      if ( a8 != 0 )
      {
        v15 = (uint32_t *)opNew(0x44u);
        *v15 = a10;
        v15[1] = a9;
        v15[2] = 4004;
        Json::Value::Construct((int)(uintptr_t)(v15 + 3), nullptr);
        v15[7] = 0;
        v15[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v15 + 9), nullptr);
        v15[13] = 0;
        v15[7] = a3;
        v15[14] = 0;
        v15[15] = 0;
        v15[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v32, a2);
        v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "accountType");
        Json::Value::opAssign(v16, (const Json::Value::Self *)v32);
        Json::Value::Destroy((Json::Value::Self *)v32);
        Json::Value::Construct((Json::Value::Self *)v33, a5);
        v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "targetAccountType");
        Json::Value::opAssign(v17, (const Json::Value::Self *)v33);
        Json::Value::Destroy((Json::Value::Self *)v33);
        Json::Value::Construct((int)(uintptr_t)(v34), a6);
        v18 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "targetUsername");
        Json::Value::opAssign(v18, (const Json::Value::Self *)v34);
        Json::Value::Destroy((Json::Value::Self *)v34);
        Json::Value::Construct((Json::Value::Self *)v35, a4);
        v19 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "connection_type");
        Json::Value::opAssign(v19, (const Json::Value::Self *)v35);
        Json::Value::Destroy((Json::Value::Self *)v35);
        Json::Value::Construct((int)(uintptr_t)(v36), a7);
        v20 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "secret");
        Json::Value::opAssign(v20, (const Json::Value::Self *)v36);
        Json::Value::Destroy((Json::Value::Self *)v36);
        v21 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(ptr));
        InitializationAndLoginStatus = gaia::ThreadManager::pushTask(v21, v15);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "social", (int)(uintptr_t)(&v25) + 1);
        InitializationAndLoginStatus = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v28);
        g4_std::string::Destroy(&v28);
        if ( InitializationAndLoginStatus == 0 )
        {
          v29 = nullptr;
          v22 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(v31), v22);
          v23 = gaia::Gaia::GetInstance();
          InitializationAndLoginStatus = gaia::Osiris::ImportFriends(
                                           *(gaia::BaseServiceManager::Self **)(v23 + 24),
                                           (void **)&v29,
                                           &v30,
                                           (int)(uintptr_t)(v31),
                                           a4,
                                           (int)(uintptr_t)(&v26),
                                           (int)(uintptr_t)(a7),
                                           0);
          g4_std::string::Destroy(v31);
          if ( InitializationAndLoginStatus == 0 )
            gaia::BaseServiceManager::ParseMessages(v29, v30, a3, 6);
          free(v29);
        }
      }
      v14 = (void *)(v26 - 12);
      if ( (uint32_t *)(v26 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v14);
      }
    }
  }
  return InitializationAndLoginStatus;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::ConnectionExists  (binary VA: 0x148e5b0)
// Original: gaia::Gaia_Osiris::ConnectionExists
// ----------------------------------------------------------------------------
unsigned int gaia::Gaia_Osiris::ConnectionExists(gaia::Gaia::Self *a1, int a2, int a3, int a4, uint32_t *a5, char a6, int a7, int a8)
{
  char IsInitialized;
  unsigned int result;
  int Instance;
  void *v11;
  void *v12;
  uint32_t *v13;
  Json::Value::Self *v14;
  Json::Value::Self *v15;
  Json::Value::Self *v16;
  Json::Value::Self *v17;
  int v18;
  int v19;
  int v20;
  typedef gaia::ThreadManager::Self *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef unsigned int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef uint8_t _g4_t_v30[16];
  typedef uint8_t _g4_t_v31[16];
  typedef uint8_t _g4_t_v32[16];
  typedef uint8_t _g4_t_v33[28];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v21)) > _g4_s0 ? (0u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v22)) > _g4_s1 ? (40u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v23)) > _g4_s2 ? (40u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v24)) > _g4_s3 ? (40u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v25)) > _g4_s4 ? (60u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v26)) > _g4_s5 ? (64u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v27)) > _g4_s6 ? (68u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v28)) > _g4_s7 ? (72u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v29)) > _g4_s8 ? (76u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v30)) > _g4_s9 ? (80u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (96u + sizeof(_g4_t_v31)) > _g4_s10 ? (96u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (112u + sizeof(_g4_t_v32)) > _g4_s11 ? (112u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (128u + sizeof(_g4_t_v33)) > _g4_s12 ? (128u + sizeof(_g4_t_v33)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 60u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 64u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 68u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 72u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 76u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 80u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 96u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 112u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 128u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = 0xFFFFFFEB;
  if ( IsInitialized != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    result = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
    if ( result == 0 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), (char *)&unk_1B15112, (int)(uintptr_t)(&v25));
      gaia::BaseServiceManager::GetCredentialString(&v27);
      g4_std::string::append_str(&v26, &v27);
      v11 = (void *)(v27 - 12);
      if ( (uint32_t *)(v27 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v11);
      }
      g4_std::string::append((int)(uintptr_t)(&v26), ":", 1u);
      g4_std::string::append_str(&v26, a5);
      if ( a6 != 0 )
      {
        v13 = (uint32_t *)opNew(0x44u);
        *v13 = a8;
        v13[1] = a7;
        v13[2] = 4003;
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
        Json::Value::Construct((Json::Value::Self *)v31, a4);
        v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "targetAccountType");
        Json::Value::opAssign(v15, (const Json::Value::Self *)v31);
        Json::Value::Destroy((Json::Value::Self *)v31);
        Json::Value::Construct((int)(uintptr_t)(v32), a5);
        v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "targetUsername");
        Json::Value::opAssign(v16, (const Json::Value::Self *)v32);
        Json::Value::Destroy((Json::Value::Self *)v32);
        Json::Value::Construct((Json::Value::Self *)v33, a3);
        v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "connection_type");
        Json::Value::opAssign(v17, (const Json::Value::Self *)v33);
        Json::Value::Destroy((Json::Value::Self *)v33);
        v18 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v21));
        result = gaia::ThreadManager::pushTask(v18, v13);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "social", (int)(uintptr_t)(&v25) + 1);
        v22 = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v28);
        g4_std::string::Destroy(&v28);
        result = v22;
        if ( v22 == 0 )
        {
          v19 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(&v29), v19);
          v20 = gaia::Gaia::GetInstance();
          v24 = gaia::Osiris::ConnectionExists(*(gaia::BaseServiceManager::Self **)(v20 + 24), (int)(uintptr_t)(&v29), a3, (int)(uintptr_t)(&v26), 0);
          g4_std::string::Destroy(&v29);
          result = v24;
        }
      }
      v12 = (void *)(v26 - 12);
      if ( (uint32_t *)(v26 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
      {
        v23 = result;
        g4_std::string::Rep::M_destroy(v12);
        return v23;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::DeleteConnection  (binary VA: 0x148e980)
// Original: gaia::Gaia_Osiris::DeleteConnection
// ----------------------------------------------------------------------------
unsigned int gaia::Gaia_Osiris::DeleteConnection(gaia::Gaia::Self *a1, int a2, int a3, int a4, uint32_t *a5, char a6, int a7, int a8)
{
  char IsInitialized;
  unsigned int result;
  int Instance;
  void *v11;
  void *v12;
  uint32_t *v13;
  Json::Value::Self *v14;
  Json::Value::Self *v15;
  Json::Value::Self *v16;
  Json::Value::Self *v17;
  int v18;
  int v19;
  int v20;
  typedef gaia::ThreadManager::Self *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef unsigned int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef uint8_t _g4_t_v30[16];
  typedef uint8_t _g4_t_v31[16];
  typedef uint8_t _g4_t_v32[16];
  typedef uint8_t _g4_t_v33[28];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v21)) > _g4_s0 ? (0u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v22)) > _g4_s1 ? (40u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v23)) > _g4_s2 ? (40u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v24)) > _g4_s3 ? (40u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v25)) > _g4_s4 ? (60u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v26)) > _g4_s5 ? (64u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v27)) > _g4_s6 ? (68u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v28)) > _g4_s7 ? (72u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v29)) > _g4_s8 ? (76u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v30)) > _g4_s9 ? (80u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (96u + sizeof(_g4_t_v31)) > _g4_s10 ? (96u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (112u + sizeof(_g4_t_v32)) > _g4_s11 ? (112u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (128u + sizeof(_g4_t_v33)) > _g4_s12 ? (128u + sizeof(_g4_t_v33)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 60u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 64u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 68u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 72u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 76u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 80u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 96u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 112u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 128u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = 0xFFFFFFEB;
  if ( IsInitialized != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    result = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
    if ( result == 0 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), (char *)&unk_1B15112, (int)(uintptr_t)(&v25));
      gaia::BaseServiceManager::GetCredentialString(&v27);
      g4_std::string::append_str(&v26, &v27);
      v11 = (void *)(v27 - 12);
      if ( (uint32_t *)(v27 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v11);
      }
      g4_std::string::append((int)(uintptr_t)(&v26), ":", 1u);
      g4_std::string::append_str(&v26, a5);
      if ( a6 != 0 )
      {
        v13 = (uint32_t *)opNew(0x44u);
        *v13 = a8;
        v13[1] = a7;
        v13[2] = 4002;
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
        Json::Value::Construct((Json::Value::Self *)v31, a4);
        v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "targetAccountType");
        Json::Value::opAssign(v15, (const Json::Value::Self *)v31);
        Json::Value::Destroy((Json::Value::Self *)v31);
        Json::Value::Construct((int)(uintptr_t)(v32), a5);
        v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "targetUsername");
        Json::Value::opAssign(v16, (const Json::Value::Self *)v32);
        Json::Value::Destroy((Json::Value::Self *)v32);
        Json::Value::Construct((Json::Value::Self *)v33, a3);
        v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "connection_type");
        Json::Value::opAssign(v17, (const Json::Value::Self *)v33);
        Json::Value::Destroy((Json::Value::Self *)v33);
        v18 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v21));
        result = gaia::ThreadManager::pushTask(v18, v13);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "social", (int)(uintptr_t)(&v25) + 1);
        v22 = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v28);
        g4_std::string::Destroy(&v28);
        result = v22;
        if ( v22 == 0 )
        {
          v19 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(&v29), v19);
          v20 = gaia::Gaia::GetInstance();
          v24 = gaia::Osiris::DeleteConnection(*(gaia::BaseServiceManager::Self **)(v20 + 24), (int)(uintptr_t)(&v29), a3, (int)(uintptr_t)(&v26), 0);
          g4_std::string::Destroy(&v29);
          result = v24;
        }
      }
      v12 = (void *)(v26 - 12);
      if ( (uint32_t *)(v26 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
      {
        v23 = result;
        g4_std::string::Rep::M_destroy(v12);
        return v23;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::ListConnections  (binary VA: 0x148ed50)
// Original: gaia::Gaia_Osiris::ListConnections
// ----------------------------------------------------------------------------
int gaia::Gaia_Osiris::ListConnections(gaia::Gaia::Self *a1, int a2, int a3, int a4, unsigned int a5, unsigned int a6, uint32_t *a7, char a8, unsigned int a9, char a10, int a11, int a12)
{
  int InitializationAndLoginStatus;
  int Instance;
  void *v14;
  uint32_t *v16;
  Json::Value::Self *v17;
  Json::Value::Self *v18;
  Json::Value::Self *v19;
  Json::Value::Self *v20;
  Json::Value::Self *v21;
  Json::Value::Self *v22;
  Json::Value::Self *v23;
  int v24;
  int v25;
  int v26;
  int v27;
  typedef gaia::ThreadManager::Self *_g4_t_ptr;
  typedef uint16_t _g4_t_v29[3];
  typedef char *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef uint8_t _g4_t_v33[16];
  typedef uint8_t _g4_t_v34[16];
  typedef uint8_t _g4_t_v35[16];
  typedef uint8_t _g4_t_v36[16];
  typedef uint8_t _g4_t_v37[16];
  typedef uint8_t _g4_t_v38[16];
  typedef uint8_t _g4_t_v39[44];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (78u + sizeof(_g4_t_v29)) > _g4_s1 ? (78u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (84u + sizeof(_g4_t_v30)) > _g4_s2 ? (84u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (88u + sizeof(_g4_t_v31)) > _g4_s3 ? (88u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (92u + sizeof(_g4_t_v32)) > _g4_s4 ? (92u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (96u + sizeof(_g4_t_v33)) > _g4_s5 ? (96u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (112u + sizeof(_g4_t_v34)) > _g4_s6 ? (112u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (128u + sizeof(_g4_t_v35)) > _g4_s7 ? (128u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (144u + sizeof(_g4_t_v36)) > _g4_s8 ? (144u + sizeof(_g4_t_v36)) : _g4_s8,
    _g4_s10 = (160u + sizeof(_g4_t_v37)) > _g4_s9 ? (160u + sizeof(_g4_t_v37)) : _g4_s9,
    _g4_s11 = (176u + sizeof(_g4_t_v38)) > _g4_s10 ? (176u + sizeof(_g4_t_v38)) : _g4_s10,
    _g4_s12 = (192u + sizeof(_g4_t_v39)) > _g4_s11 ? (192u + sizeof(_g4_t_v39)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 78u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 84u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 88u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 92u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 96u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 112u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 128u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 144u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 160u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 176u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 192u);

  InitializationAndLoginStatus = -21;
  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
    return InitializationAndLoginStatus;
  Instance = gaia::Gaia::GetInstance();
  InitializationAndLoginStatus = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
  if ( InitializationAndLoginStatus != 0 )
    return InitializationAndLoginStatus;
  if ( a10 != 0 )
  {
    v16 = (uint32_t *)opNew(0x44u);
    *v16 = a12;
    v16[1] = a11;
    v16[2] = 4006;
    Json::Value::Construct((int)(uintptr_t)(v16 + 3), nullptr);
    v16[7] = 0;
    v16[8] = 0;
    Json::Value::Construct((int)(uintptr_t)(v16 + 9), nullptr);
    v16[13] = 0;
    v16[14] = 0;
    v16[15] = 0;
    v16[16] = 0;
    Json::Value::Construct((Json::Value::Self *)v33, a3);
    v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v16 + 3), "connection_type");
    Json::Value::opAssign(v17, (const Json::Value::Self *)v33);
    Json::Value::Destroy((Json::Value::Self *)v33);
    Json::Value::Construct((Json::Value::Self *)v34, a2);
    v18 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v16 + 3), "accountType");
    Json::Value::opAssign(v18, (const Json::Value::Self *)v34);
    Json::Value::Destroy((Json::Value::Self *)v34);
    v16[7] = a4;
    Json::Value::Construct((Json::Value::Self *)v35, a5);
    v19 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v16 + 3), "limit");
    Json::Value::opAssign(v19, (const Json::Value::Self *)v35);
    Json::Value::Destroy((Json::Value::Self *)v35);
    Json::Value::Construct((Json::Value::Self *)v36, a6);
    v20 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v16 + 3), "offset");
    Json::Value::opAssign(v20, (const Json::Value::Self *)v36);
    Json::Value::Destroy((Json::Value::Self *)v36);
    Json::Value::Construct((int)(uintptr_t)(v37), a7);
    v21 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v16 + 3), "game_name");
    Json::Value::opAssign(v21, (const Json::Value::Self *)v37);
    Json::Value::Destroy((Json::Value::Self *)v37);
    Json::Value::Construct((Json::Value::Self *)v38, a9);
    v22 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v16 + 3), "seconds_since_last_login");
    Json::Value::opAssign(v22, (const Json::Value::Self *)v38);
    Json::Value::Destroy((Json::Value::Self *)v38);
    Json::Value::Construct((Json::Value::Self *)v39, a8);
    v23 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v16 + 3), "online");
    Json::Value::opAssign(v23, (const Json::Value::Self *)v39);
    Json::Value::Destroy((Json::Value::Self *)v39);
    v24 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(ptr));
    return gaia::ThreadManager::pushTask(v24, v16);
  }
  else
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29[1]), "social", (int)(uintptr_t)(v29));
    InitializationAndLoginStatus = gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, &v29[1]);
    v14 = (void *)(*(uint32_t *)&v29[1] - 12);
    if ( (uint32_t *)(*(uint32_t *)&v29[1] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v29[1] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v14);
    }
    if ( InitializationAndLoginStatus != 0 )
      return InitializationAndLoginStatus;
    v30 = nullptr;
    v25 = gaia::Gaia::GetInstance();
    gaia::Gaia::GetJanusToken((int)(uintptr_t)(&v32), v25);
    v26 = gaia::Gaia::GetInstance();
    v27 = gaia::Osiris::ListConnections(
            *(gaia::BaseServiceManager::Self **)(v26 + 24),
            (void **)&v30,
            &v31,
            (int)(uintptr_t)(&v32),
            a3,
            a5,
            a6,
            (int)(uintptr_t)(a7),
            a8,
            a9,
            0);
    g4_std::string::Destroy(&v32);
    if ( v27 == 0 )
      gaia::BaseServiceManager::ParseMessages(v30, v31, a4, 5);
    free(v30);
    return v27;
  }
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Osiris::AddConnection  (binary VA: 0x148f190)
// Original: gaia::Gaia_Osiris::AddConnection
// ----------------------------------------------------------------------------
unsigned int gaia::Gaia_Osiris::AddConnection(gaia::Gaia::Self *a1, int a2, int a3, int a4, uint32_t *a5, uint32_t *a6, uint32_t *a7, char a8, int a9, int a10)
{
  char IsInitialized;
  unsigned int result;
  int Instance;
  int *v13;
  void *v14;
  uint32_t *v15;
  Json::Value::Self *v16;
  Json::Value::Self *v17;
  Json::Value::Self *v18;
  Json::Value::Self *v19;
  Json::Value::Self *v20;
  Json::Value::Self *v21;
  int v22;
  int v23;
  int v24;
  typedef gaia::ThreadManager::Self *_g4_t_v25;
  typedef char *_g4_t_v26;
  typedef char *_g4_t_v27;
  typedef char *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef uint8_t _g4_t_v32[4];
  typedef int _g4_t_v33;
  typedef uint8_t _g4_t_v34[16];
  typedef uint8_t _g4_t_v35[16];
  typedef uint8_t _g4_t_v36[16];
  typedef uint8_t _g4_t_v37[16];
  typedef uint8_t _g4_t_v38[16];
  typedef uint8_t _g4_t_v39[28];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (0u + sizeof(_g4_t_v25)) > _g4_s0 ? (0u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v26)) > _g4_s1 ? (40u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v27)) > _g4_s2 ? (40u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v28)) > _g4_s3 ? (40u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v29)) > _g4_s4 ? (60u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v30)) > _g4_s5 ? (64u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v31)) > _g4_s6 ? (68u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v32)) > _g4_s7 ? (72u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v33)) > _g4_s8 ? (76u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v34)) > _g4_s9 ? (80u + sizeof(_g4_t_v34)) : _g4_s9,
    _g4_s11 = (96u + sizeof(_g4_t_v35)) > _g4_s10 ? (96u + sizeof(_g4_t_v35)) : _g4_s10,
    _g4_s12 = (112u + sizeof(_g4_t_v36)) > _g4_s11 ? (112u + sizeof(_g4_t_v36)) : _g4_s11,
    _g4_s13 = (128u + sizeof(_g4_t_v37)) > _g4_s12 ? (128u + sizeof(_g4_t_v37)) : _g4_s12,
    _g4_s14 = (144u + sizeof(_g4_t_v38)) > _g4_s13 ? (144u + sizeof(_g4_t_v38)) : _g4_s13,
    _g4_s15 = (160u + sizeof(_g4_t_v39)) > _g4_s14 ? (160u + sizeof(_g4_t_v39)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 0u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 40u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 60u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 64u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 68u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 72u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 76u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 80u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 96u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 112u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 128u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 144u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 160u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = 0xFFFFFFEB;
  if ( IsInitialized != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    result = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
    if ( result == 0 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), (char *)&unk_1B15112, (int)(uintptr_t)(&v29));
      g4_std::string::append_str(&v30, a5);
      if ( a8 != 0 )
      {
        v15 = (uint32_t *)opNew(0x44u);
        *v15 = a10;
        v15[1] = a9;
        v15[2] = 4001;
        Json::Value::Construct((int)(uintptr_t)(v15 + 3), nullptr);
        v15[7] = 0;
        v15[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v15 + 9), nullptr);
        v15[13] = 0;
        v15[14] = 0;
        v15[15] = 0;
        v15[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v34, a2);
        v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "accountType");
        Json::Value::opAssign(v16, (const Json::Value::Self *)v34);
        Json::Value::Destroy((Json::Value::Self *)v34);
        Json::Value::Construct((Json::Value::Self *)v35, a4);
        v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "targetAccountType");
        Json::Value::opAssign(v17, (const Json::Value::Self *)v35);
        Json::Value::Destroy((Json::Value::Self *)v35);
        Json::Value::Construct((int)(uintptr_t)(v36), a5);
        v18 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "targetUsername");
        Json::Value::opAssign(v18, (const Json::Value::Self *)v36);
        Json::Value::Destroy((Json::Value::Self *)v36);
        Json::Value::Construct((Json::Value::Self *)v37, a3);
        v19 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "connection_type");
        Json::Value::opAssign(v19, (const Json::Value::Self *)v37);
        Json::Value::Destroy((Json::Value::Self *)v37);
        Json::Value::Construct((int)(uintptr_t)(v38), a6);
        v20 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "requester_credential");
        Json::Value::opAssign(v20, (const Json::Value::Self *)v38);
        Json::Value::Destroy((Json::Value::Self *)v38);
        Json::Value::Construct((int)(uintptr_t)(v39), a7);
        v21 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "required_approval");
        Json::Value::opAssign(v21, (const Json::Value::Self *)v39);
        Json::Value::Destroy((Json::Value::Self *)v39);
        v22 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v25));
        result = gaia::ThreadManager::pushTask(v22, v15);
      }
      else
      {
        if ( g4_std::string::compare((int)(uintptr_t)(a7), (char *)&unk_1B15112) != 0 )
        {
          v13 = (int *)v32;
          g4_std::string::construct_from_cstr((int)(uintptr_t)(v32), "social social_connection_override", (int)(uintptr_t)(&v29) + 2);
        }
        else
        {
          v13 = &v31;
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "social", (int)(uintptr_t)(&v29) + 1);
        }
        v26 = (char *)gaia::Gaia_Osiris::StartAndAuthorizeOsiris(a1, a2, v13);
        g4_std::string::Destroy(v13);
        result = (unsigned int)(uintptr_t)(v26);
        if ( v26 == nullptr )
        {
          v23 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(&v33), v23);
          v24 = gaia::Gaia::GetInstance();
          v28 = (char *)gaia::Osiris::AddConnection(
                          *(gaia::BaseServiceManager::Self **)(v24 + 24),
                          (int)(uintptr_t)(&v33),
                          a3,
                          (int)(uintptr_t)(&v30),
                          (int)(uintptr_t)(a6),
                          (int)(uintptr_t)(a7),
                          0);
          g4_std::string::Destroy(&v33);
          result = (unsigned int)(uintptr_t)(v28);
        }
      }
      v14 = (void *)(v30 - 12);
      if ( (uint32_t *)(v30 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
      {
        v27 = (char *)result;
        g4_std::string::Rep::M_destroy(v14);
        return (unsigned int)(uintptr_t)(v27);
      }
    }
  }
  return result;
}


