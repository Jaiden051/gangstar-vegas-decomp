#include "Core/Utils/DecompTypes.h"
#include "gaia_Gaia_Olympus.h"

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Olympus::CancelRequest  (binary VA: 0x1447fa0)
// Original: gaia::Gaia_Olympus::CancelRequest
// ----------------------------------------------------------------------------
int gaia::Gaia_Olympus::CancelRequest(glwebtools::Mutex::Self *a1, int a2)
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
    if ( *(uint32_t *)(gaia::Gaia::GetInstance() + 20) != 0 )
    {
      if ( a2 == 1 )
      {
        Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v7));
        gaia::ThreadManager::CancelRequest(Instance, 2000);
      }
      v3 = gaia::Gaia::GetInstance();
      v2 = gaia::BaseServiceManager::CancelRequest(*(uint32_t *)(v3 + 20), a2);
      glwebtools::Mutex::Unlock(a1);
    }
    else
    {
      v6 = gaia::Gaia::GetInstance();
      v2 = 0;
      gaia::BaseServiceManager::CancelRequest(*(uint32_t *)(v6 + 48), 3010);
      glwebtools::Mutex::Unlock(a1);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Olympus::GetOlympusStatus  (binary VA: 0x144aed0)
// Original: gaia::Gaia_Olympus::GetOlympusStatus
// ----------------------------------------------------------------------------
int gaia::Gaia_Olympus::GetOlympusStatus(gaia::Gaia_Olympus::Self *self)
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
    v2 = (glwebtools::Mutex::Self *)(gaia::Gaia::GetInstance() + 432);
    glwebtools::Mutex::Lock(v2);
    ServiceUrl = 0;
    if ( *(uint32_t *)(gaia::Gaia::GetInstance() + 20) == 0 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v7) + 1, (char *)&unk_1B15112, (int)(uintptr_t)(v7));
      Instance = gaia::Gaia::GetInstance();
      ServiceUrl = gaia::Gaia::GetServiceUrl(Instance, "leaderboard", (int)(uintptr_t)(v7) + 1, 0, 0, 0);
      glwebtools::Mutex::Lock(self);
      if ( ServiceUrl != 0
        || (v6 = gaia::Gaia::GetInstance(),
            v5 = (gaia::BaseServiceManager::Self *)opNew(0x9Cu),
            gaia::Olympus::Construct(v5, (int)(uintptr_t)(v7) + 1, v6 + 240),
            *(uint32_t *)(gaia::Gaia::GetInstance() + 20) = (uint32_t)(uintptr_t)(v5),
            *(uint32_t *)(gaia::Gaia::GetInstance() + 20) == 0) )
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
// Function: gaia::Gaia_Olympus::StartAndAuthorizeOlympus  (binary VA: 0x1475fe0)
// Original: gaia::Gaia_Olympus::StartAndAuthorizeOlympus
// ----------------------------------------------------------------------------
int gaia::Gaia_Olympus::StartAndAuthorizeOlympus(gaia::Gaia_Olympus::Self *self, gaia::GaiaRequest::Self *a2)
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
    result = gaia::Gaia_Olympus::GetOlympusStatus(self);
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
// Function: gaia::Gaia_Olympus::GetAccessToken  (binary VA: 0x1476080)
// Original: gaia::Gaia_Olympus::GetAccessToken
// ----------------------------------------------------------------------------
int gaia::Gaia_Olympus::GetAccessToken(gaia::Gaia::Self *a1, gaia::GaiaRequest::Self *a2, uint32_t *a3, int a4)
{
  void *v4;
  void *v5;
  Json::Value::Self *v6;
  void *v7;
  int v8;
  int OlympusStatus;
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
      OlympusStatus = gaia::Gaia_Olympus::GetOlympusStatus((gaia::Gaia_Olympus::Self *)(a1));
      if ( OlympusStatus != 0 )
      {
        v8 = OlympusStatus;
        gaia::GaiaRequest::SetResponseCode(a2, OlympusStatus);
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
        v8 = gaia::Gaia_Olympus::StartAndAuthorizeOlympus(a1, a2);
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
// Function: gaia::Gaia_Olympus::RetriveTopOfLeaderboard  (binary VA: 0x1476360)
// Original: gaia::Gaia_Olympus::RetriveTopOfLeaderboard
// ----------------------------------------------------------------------------
int gaia::Gaia_Olympus::RetriveTopOfLeaderboard(gaia::Gaia_Olympus::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  void *v6;
  int OlympusStatus;
  void *v8;
  Json::Value::Self *v9;
  Json::Value::Self *v10;
  bool v11;
  void *v12;
  int Instance;
  gaia::BaseJSONServiceResponse::Self *v14;
  gaia::BaseJSONServiceResponse::Self *v15;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_ptr;
  typedef bool _g4_t_isNull;
  typedef bool _g4_t_v19;
  typedef void *_g4_t_v20;
  typedef void *_g4_t_v21;
  typedef void *_g4_t_AccessToken;
  typedef void *_g4_t_started;
  typedef char _g4_t_v24;
  typedef char _g4_t_v25;
  typedef char _g4_t_v26;
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
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef char _g4_t_v43[4];
  typedef int _g4_t_v44;
  typedef void *_g4_t_v45;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v46;
  typedef int _g4_t_v47;
  typedef uint8_t _g4_t_v48[16];
  typedef uint8_t _g4_t_v49[16];
  typedef uint8_t _g4_t_v50[16];
  typedef uint8_t _g4_t_v51[16];
  typedef uint8_t _g4_t_v52[16];
  typedef uint8_t _g4_t_v53[96];
  enum : size_t {
    _g4_s0 = 416u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (56u + sizeof(_g4_t_isNull)) > _g4_s1 ? (56u + sizeof(_g4_t_isNull)) : _g4_s1,
    _g4_s3 = (56u + sizeof(_g4_t_v19)) > _g4_s2 ? (56u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v20)) > _g4_s3 ? (60u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v21)) > _g4_s4 ? (60u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_AccessToken)) > _g4_s5 ? (60u + sizeof(_g4_t_AccessToken)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_started)) > _g4_s6 ? (60u + sizeof(_g4_t_started)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v24)) > _g4_s7 ? (64u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v25)) > _g4_s8 ? (68u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v26)) > _g4_s9 ? (72u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (82u + sizeof(_g4_t_v27)) > _g4_s10 ? (82u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v28)) > _g4_s11 ? (84u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v29)) > _g4_s12 ? (88u + sizeof(_g4_t_v29)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v30)) > _g4_s13 ? (100u + sizeof(_g4_t_v30)) : _g4_s13,
    _g4_s15 = (104u + sizeof(_g4_t_v31)) > _g4_s14 ? (104u + sizeof(_g4_t_v31)) : _g4_s14,
    _g4_s16 = (108u + sizeof(_g4_t_v32)) > _g4_s15 ? (108u + sizeof(_g4_t_v32)) : _g4_s15,
    _g4_s17 = (112u + sizeof(_g4_t_v33)) > _g4_s16 ? (112u + sizeof(_g4_t_v33)) : _g4_s16,
    _g4_s18 = (116u + sizeof(_g4_t_v34)) > _g4_s17 ? (116u + sizeof(_g4_t_v34)) : _g4_s17,
    _g4_s19 = (120u + sizeof(_g4_t_v35)) > _g4_s18 ? (120u + sizeof(_g4_t_v35)) : _g4_s18,
    _g4_s20 = (124u + sizeof(_g4_t_v36)) > _g4_s19 ? (124u + sizeof(_g4_t_v36)) : _g4_s19,
    _g4_s21 = (128u + sizeof(_g4_t_v37)) > _g4_s20 ? (128u + sizeof(_g4_t_v37)) : _g4_s20,
    _g4_s22 = (132u + sizeof(_g4_t_v38)) > _g4_s21 ? (132u + sizeof(_g4_t_v38)) : _g4_s21,
    _g4_s23 = (136u + sizeof(_g4_t_v39)) > _g4_s22 ? (136u + sizeof(_g4_t_v39)) : _g4_s22,
    _g4_s24 = (140u + sizeof(_g4_t_v40)) > _g4_s23 ? (140u + sizeof(_g4_t_v40)) : _g4_s23,
    _g4_s25 = (144u + sizeof(_g4_t_v41)) > _g4_s24 ? (144u + sizeof(_g4_t_v41)) : _g4_s24,
    _g4_s26 = (148u + sizeof(_g4_t_v42)) > _g4_s25 ? (148u + sizeof(_g4_t_v42)) : _g4_s25,
    _g4_s27 = (152u + sizeof(_g4_t_v43)) > _g4_s26 ? (152u + sizeof(_g4_t_v43)) : _g4_s26,
    _g4_s28 = (156u + sizeof(_g4_t_v44)) > _g4_s27 ? (156u + sizeof(_g4_t_v44)) : _g4_s27,
    _g4_s29 = (160u + sizeof(_g4_t_v45)) > _g4_s28 ? (160u + sizeof(_g4_t_v45)) : _g4_s28,
    _g4_s30 = (164u + sizeof(_g4_t_v46)) > _g4_s29 ? (164u + sizeof(_g4_t_v46)) : _g4_s29,
    _g4_s31 = (168u + sizeof(_g4_t_v47)) > _g4_s30 ? (168u + sizeof(_g4_t_v47)) : _g4_s30,
    _g4_s32 = (172u + sizeof(_g4_t_v48)) > _g4_s31 ? (172u + sizeof(_g4_t_v48)) : _g4_s31,
    _g4_s33 = (188u + sizeof(_g4_t_v49)) > _g4_s32 ? (188u + sizeof(_g4_t_v49)) : _g4_s32,
    _g4_s34 = (204u + sizeof(_g4_t_v50)) > _g4_s33 ? (204u + sizeof(_g4_t_v50)) : _g4_s33,
    _g4_s35 = (220u + sizeof(_g4_t_v51)) > _g4_s34 ? (220u + sizeof(_g4_t_v51)) : _g4_s34,
    _g4_s36 = (236u + sizeof(_g4_t_v52)) > _g4_s35 ? (236u + sizeof(_g4_t_v52)) : _g4_s35,
    _g4_s37 = (252u + sizeof(_g4_t_v53)) > _g4_s36 ? (252u + sizeof(_g4_t_v53)) : _g4_s36
  };
  alignas(16) uint8_t _g4_sf[_g4_s37];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_isNull &isNull = *reinterpret_cast<_g4_t_isNull *>(_g4_sf + 56u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 56u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 60u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 60u);
  _g4_t_AccessToken &AccessToken = *reinterpret_cast<_g4_t_AccessToken *>(_g4_sf + 60u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 60u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 64u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 68u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 72u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 82u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 84u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 88u);
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
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 160u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 164u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 168u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 172u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 188u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 204u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 220u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 236u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 252u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "sort", (int)(uintptr_t)(&v27));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v30), 5);
  v2 = (void *)(v30 - 12);
  if ( (uint32_t *)(v30 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "name", (int)(uintptr_t)(&v27) + 1);
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v31), 4);
  v3 = (void *)(v31 - 12);
  if ( (uint32_t *)(v31 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "limit", (int)(uintptr_t)(&v28));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v32), 1);
  v4 = (void *)(v32 - 12);
  if ( (uint32_t *)(v32 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v32 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "offset", (int)(uintptr_t)(&v28) + 1);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v33), 1);
  v5 = (void *)(v33 - 12);
  if ( (uint32_t *)(v33 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "for_entry_id", (int)(uintptr_t)(&v28) + 2);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v34), 4);
  v6 = (void *)(v34 - 12);
  if ( (uint32_t *)(v34 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) == 0 )
    return gaia::GaiaRequest::GetResponseCode(a2);
  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
  {
    gaia::GaiaRequest::SetOperationCode(a2, 2001);
    gaia::Gaia::GetInstance();
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v53, a2);
    started = (void *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v53);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v53);
    return (int)(uintptr_t)(started);
  }
  OlympusStatus = gaia::Gaia_Olympus::GetOlympusStatus(self);
  v20 = (void *)OlympusStatus;
  if ( OlympusStatus != 0 )
  {
    gaia::GaiaRequest::SetResponseCode(a2, OlympusStatus);
    return (int)(uintptr_t)(v20);
  }
  else
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), (char *)&unk_1B15112, (int)(uintptr_t)(&v28) + 3);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), (char *)&unk_1B15112, (int)(uintptr_t)(&v29));
    v37 = (int)(uintptr_t)(&dword_213B814);
    v45 = nullptr;
    v46 = nullptr;
    v47 = 0;
    v38 = nullptr;
    v39 = 0;
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v48, (const char *)a2);
    v26 = Json::Value::asBool((Json::Value::Self *)v48);
    Json::Value::Destroy((Json::Value::Self *)v48);
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v49, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v40, (int)(uintptr_t)(v49));
    g4_std::string::assign_str(&v36, &v40);
    v8 = (void *)(v40 - 12);
    if ( (uint32_t *)(v40 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v40 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v8);
    }
    Json::Value::Destroy((Json::Value::Self *)v49);
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v50, (const char *)a2);
    v25 = Json::Value::asInt((Json::Value::Self *)v50);
    Json::Value::Destroy((Json::Value::Self *)v50);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "offset", (int)(uintptr_t)(&v29) + 1);
    v9 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v41);
    isNull = Json::Value::isNull(v9);
    g4_std::string::Destroy(&v41);
    v24 = 0;
    if ( !isNull )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v51, (const char *)a2);
      v24 = Json::Value::asInt((Json::Value::Self *)v51);
      Json::Value::Destroy((Json::Value::Self *)v51);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), "for_entry_id", (int)(uintptr_t)(&v29) + 2);
    v10 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v42);
    v11 = Json::Value::isNull(v10);
    v21 = (void *)(v42 - 12);
    if ( (uint32_t *)(v42 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v42 - 4), 0xFFFFFFFF) <= 0 )
    {
      v19 = v11;
      g4_std::string::Rep::M_destroy(v21);
      v11 = v19;
    }
    if ( !v11 )
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v52, (const char *)a2);
      Json::Value::asString((Json::Value::Self *)v43, (int)(uintptr_t)(v52));
      g4_std::string::assign_str(&v37, v43);
      g4_std::string::Destroy(v43);
      Json::Value::Destroy((Json::Value::Self *)v52);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), "leaderboard_ro", (int)(uintptr_t)(&v29) + 3);
    AccessToken = (void *)gaia::Gaia_Olympus::GetAccessToken(self, a2, &v44, (int)(uintptr_t)(&v35));
    v12 = (void *)(v44 - 12);
    if ( (uint32_t *)(v44 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v44 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v12);
    }
    if ( AccessToken != nullptr )
    {
      gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(AccessToken));
    }
    else
    {
      Instance = gaia::Gaia::GetInstance();
      AccessToken = (void *)gaia::Olympus::RetriveTopOfLeaderboard(
                              *(gaia::BaseServiceManager::Self **)(Instance + 20),
                              (void **)&v38,
                              &v39,
                              v26,
                              (int)(uintptr_t)(&v36),
                              (int)(uintptr_t)(&v35),
                              v24,
                              v25,
                              (int)(uintptr_t)(&v37),
                              (int)(uintptr_t)(a2));
      if ( AccessToken == nullptr )
        AccessToken = (void *)gaia::BaseServiceManager::ParseMessages(v38, v39, (int)(uintptr_t)(&v45), 4);
      gaia::GaiaRequest::SetResponse(a2, (const std::vector<gaia::BaseJSONServiceResponse::Self> *)&v45);
      gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(AccessToken));
      free(v38);
    }
    v14 = v46;
    v15 = (gaia::BaseJSONServiceResponse::Self *)v45;
    if ( v46 != v45 )
    {
      do
      {
        ptr = v15;
        v15 = (gaia::BaseJSONServiceResponse::Self *)((char *)v15 + 20);
        gaia::BaseJSONServiceResponse::Destroy(ptr);
      }
      while ( v14 != v15 );
      v15 = (gaia::BaseJSONServiceResponse::Self *)v45;
    }
    if ( v15 != nullptr )
      opDelete(v15);
    g4_std::string::Destroy(&v37);
    g4_std::string::Destroy(&v36);
    g4_std::string::Destroy(&v35);
    return (int)(uintptr_t)(AccessToken);
  }
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Olympus::ClearLeaderboard  (binary VA: 0x1476bb0)
// Original: gaia::Gaia_Olympus::ClearLeaderboard
// ----------------------------------------------------------------------------
int gaia::Gaia_Olympus::ClearLeaderboard(gaia::Gaia_Olympus::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  int OlympusStatus;
  int Instance;
  typedef Json::Value::Self *_g4_t_AccessToken;
  typedef Json::Value::Self *_g4_t_started;
  typedef Json::Value::Self *_g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint8_t _g4_t_v14[4];
  typedef int _g4_t_v15;
  typedef uint8_t _g4_t_v16[16];
  typedef uint8_t _g4_t_v17[80];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (12u + sizeof(_g4_t_AccessToken)) > _g4_s0 ? (12u + sizeof(_g4_t_AccessToken)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_started)) > _g4_s1 ? (12u + sizeof(_g4_t_started)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v8)) > _g4_s2 ? (12u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (19u + sizeof(_g4_t_v9)) > _g4_s3 ? (19u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v10)) > _g4_s4 ? (20u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v11)) > _g4_s5 ? (24u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v12)) > _g4_s6 ? (28u + sizeof(_g4_t_v12)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v13)) > _g4_s7 ? (32u + sizeof(_g4_t_v13)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v14)) > _g4_s8 ? (36u + sizeof(_g4_t_v14)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v15)) > _g4_s9 ? (40u + sizeof(_g4_t_v15)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v16)) > _g4_s10 ? (44u + sizeof(_g4_t_v16)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v17)) > _g4_s11 ? (60u + sizeof(_g4_t_v17)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_AccessToken &AccessToken = *reinterpret_cast<_g4_t_AccessToken *>(_g4_sf + 12u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 19u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 60u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "name", (int)(uintptr_t)(&v9));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v11), 4);
    v2 = (void *)(v11 - 12);
    if ( (uint32_t *)(v11 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 2004);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v17, a2);
        started = (Json::Value::Self *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v17);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v17);
        return (int)(uintptr_t)(started);
      }
      else
      {
        OlympusStatus = gaia::Gaia_Olympus::GetOlympusStatus(self);
        if ( OlympusStatus != 0 )
        {
          v8 = (Json::Value::Self *)OlympusStatus;
          gaia::GaiaRequest::SetResponseCode(a2, OlympusStatus);
          return (int)(uintptr_t)(v8);
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), (char *)&unk_1B15112, (int)(uintptr_t)(&v10));
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), (char *)&unk_1B15112, (int)(uintptr_t)(&v10) + 1);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v16, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)v14, (int)(uintptr_t)(v16));
          g4_std::string::assign_str(&v13, v14);
          g4_std::string::Destroy(v14);
          Json::Value::Destroy((Json::Value::Self *)v16);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "leaderboard_clear", (int)(uintptr_t)(&v10) + 2);
          AccessToken = (Json::Value::Self *)gaia::Gaia_Olympus::GetAccessToken(self, a2, &v15, (int)(uintptr_t)(&v12));
          g4_std::string::Destroy(&v15);
          if ( AccessToken == nullptr )
          {
            Instance = gaia::Gaia::GetInstance();
            AccessToken = (Json::Value::Self *)gaia::Olympus::ClearLeaderboard(
                                           *(gaia::BaseServiceManager::Self **)(Instance + 20),
                                           (int)(uintptr_t)(&v13),
                                           (int)(uintptr_t)(&v12),
                                           (int)(uintptr_t)(a2));
          }
          gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(AccessToken));
          g4_std::string::Destroy(&v13);
          g4_std::string::Destroy(&v12);
          return (int)(uintptr_t)(AccessToken);
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
// Function: gaia::Gaia_Olympus::RetrieveLeaderboardAroundArbitraryEntry  (binary VA: 0x1476ea0)
// Original: gaia::Gaia_Olympus::RetrieveLeaderboardAroundArbitraryEntry
// ----------------------------------------------------------------------------
int gaia::Gaia_Olympus::RetrieveLeaderboardAroundArbitraryEntry(gaia::Gaia_Olympus::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  int OlympusStatus;
  void *v7;
  void *v8;
  int Instance;
  gaia::BaseJSONServiceResponse::Self *v10;
  gaia::BaseJSONServiceResponse::Self *v11;
  void *v12;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_ptr;
  typedef int _g4_t_v15;
  typedef int _g4_t_started;
  typedef char _g4_t_v17;
  typedef char _g4_t_v18;
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
  typedef char *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef char _g4_t_v32[4];
  typedef int _g4_t_v33;
  typedef void *_g4_t_v34;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v35;
  typedef int _g4_t_v36;
  typedef uint8_t _g4_t_v37[16];
  typedef uint8_t _g4_t_v38[16];
  typedef uint8_t _g4_t_v39[16];
  typedef uint8_t _g4_t_v40[16];
  typedef uint8_t _g4_t_v41[96];
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (64u + sizeof(_g4_t_v15)) > _g4_s1 ? (64u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_started)) > _g4_s2 ? (64u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (68u + sizeof(_g4_t_v17)) > _g4_s3 ? (68u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (72u + sizeof(_g4_t_v18)) > _g4_s4 ? (72u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (81u + sizeof(_g4_t_v19)) > _g4_s5 ? (81u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (84u + sizeof(_g4_t_v20)) > _g4_s6 ? (84u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (88u + sizeof(_g4_t_v21)) > _g4_s7 ? (88u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (96u + sizeof(_g4_t_v22)) > _g4_s8 ? (96u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (100u + sizeof(_g4_t_v23)) > _g4_s9 ? (100u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (104u + sizeof(_g4_t_v24)) > _g4_s10 ? (104u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (108u + sizeof(_g4_t_v25)) > _g4_s11 ? (108u + sizeof(_g4_t_v25)) : _g4_s11,
    _g4_s13 = (112u + sizeof(_g4_t_v26)) > _g4_s12 ? (112u + sizeof(_g4_t_v26)) : _g4_s12,
    _g4_s14 = (116u + sizeof(_g4_t_v27)) > _g4_s13 ? (116u + sizeof(_g4_t_v27)) : _g4_s13,
    _g4_s15 = (120u + sizeof(_g4_t_v28)) > _g4_s14 ? (120u + sizeof(_g4_t_v28)) : _g4_s14,
    _g4_s16 = (124u + sizeof(_g4_t_v29)) > _g4_s15 ? (124u + sizeof(_g4_t_v29)) : _g4_s15,
    _g4_s17 = (128u + sizeof(_g4_t_v30)) > _g4_s16 ? (128u + sizeof(_g4_t_v30)) : _g4_s16,
    _g4_s18 = (132u + sizeof(_g4_t_v31)) > _g4_s17 ? (132u + sizeof(_g4_t_v31)) : _g4_s17,
    _g4_s19 = (136u + sizeof(_g4_t_v32)) > _g4_s18 ? (136u + sizeof(_g4_t_v32)) : _g4_s18,
    _g4_s20 = (140u + sizeof(_g4_t_v33)) > _g4_s19 ? (140u + sizeof(_g4_t_v33)) : _g4_s19,
    _g4_s21 = (144u + sizeof(_g4_t_v34)) > _g4_s20 ? (144u + sizeof(_g4_t_v34)) : _g4_s20,
    _g4_s22 = (148u + sizeof(_g4_t_v35)) > _g4_s21 ? (148u + sizeof(_g4_t_v35)) : _g4_s21,
    _g4_s23 = (152u + sizeof(_g4_t_v36)) > _g4_s22 ? (152u + sizeof(_g4_t_v36)) : _g4_s22,
    _g4_s24 = (156u + sizeof(_g4_t_v37)) > _g4_s23 ? (156u + sizeof(_g4_t_v37)) : _g4_s23,
    _g4_s25 = (172u + sizeof(_g4_t_v38)) > _g4_s24 ? (172u + sizeof(_g4_t_v38)) : _g4_s24,
    _g4_s26 = (188u + sizeof(_g4_t_v39)) > _g4_s25 ? (188u + sizeof(_g4_t_v39)) : _g4_s25,
    _g4_s27 = (204u + sizeof(_g4_t_v40)) > _g4_s26 ? (204u + sizeof(_g4_t_v40)) : _g4_s26,
    _g4_s28 = (220u + sizeof(_g4_t_v41)) > _g4_s27 ? (220u + sizeof(_g4_t_v41)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 64u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 64u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 68u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 72u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 81u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 84u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 88u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 96u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 100u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 104u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 108u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 112u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 116u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 120u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 124u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 128u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 132u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 136u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 140u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 144u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 148u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 152u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 156u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 172u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 188u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 204u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 220u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "name", (int)(uintptr_t)(&v19));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v22), 4);
  v2 = (void *)(v22 - 12);
  if ( (uint32_t *)(v22 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "entry_name", (int)(uintptr_t)(&v19) + 1);
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v23), 4);
  v3 = (void *)(v23 - 12);
  if ( (uint32_t *)(v23 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "sort", (int)(uintptr_t)(&v19) + 2);
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v24), 5);
  v4 = (void *)(v24 - 12);
  if ( (uint32_t *)(v24 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "limit", (int)(uintptr_t)(&v20));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v25), 1);
  v5 = (void *)(v25 - 12);
  if ( (uint32_t *)(v25 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) == 0 )
    return gaia::GaiaRequest::GetResponseCode(a2);
  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
  {
    gaia::GaiaRequest::SetOperationCode(a2, 2002);
    gaia::Gaia::GetInstance();
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v41, a2);
    started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v41);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v41);
    return started;
  }
  OlympusStatus = gaia::Gaia_Olympus::GetOlympusStatus(self);
  v15 = OlympusStatus;
  if ( OlympusStatus == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), (char *)&unk_1B15112, (int)(uintptr_t)(&v20) + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), (char *)&unk_1B15112, (int)(uintptr_t)(&v20) + 2);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), (char *)&unk_1B15112, (int)(uintptr_t)(&v20) + 3);
    v34 = nullptr;
    v35 = nullptr;
    v36 = 0;
    v29 = nullptr;
    v30 = 0;
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
    Json::Value::asString((Json::Value::Self *)v32, (int)(uintptr_t)(v38));
    g4_std::string::assign_str(&v28, v32);
    g4_std::string::Destroy(v32);
    Json::Value::Destroy((Json::Value::Self *)v38);
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v39, (const char *)a2);
    v17 = Json::Value::asBool((Json::Value::Self *)v39);
    Json::Value::Destroy((Json::Value::Self *)v39);
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v40, (const char *)a2);
    v18 = Json::Value::asInt((Json::Value::Self *)v40);
    Json::Value::Destroy((Json::Value::Self *)v40);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "leaderboard_ro", (int)(uintptr_t)(&v21));
    started = gaia::Gaia_Olympus::GetAccessToken(self, a2, &v33, (int)(uintptr_t)(&v26));
    v8 = (void *)(v33 - 12);
    if ( (uint32_t *)(v33 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
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
      started = gaia::Olympus::RetrieveLeaderboardAroundArbitraryEntry(
                  *(gaia::BaseServiceManager::Self **)(Instance + 20),
                  (void **)&v29,
                  &v30,
                  (int)(uintptr_t)(&v27),
                  (int)(uintptr_t)(&v28),
                  (int)(uintptr_t)(&v26),
                  v17,
                  v18,
                  (int)(uintptr_t)(a2));
      if ( started == 0 )
        started = gaia::BaseServiceManager::ParseMessages(v29, v30, (int)(uintptr_t)(&v34), 4);
      gaia::GaiaRequest::SetResponse(a2, (const std::vector<gaia::BaseJSONServiceResponse::Self> *)&v34);
      gaia::GaiaRequest::SetResponseCode(a2, started);
      free(v29);
    }
    v10 = v35;
    v11 = (gaia::BaseJSONServiceResponse::Self *)v34;
    if ( v35 != v34 )
    {
      do
      {
        ptr = v11;
        v11 = (gaia::BaseJSONServiceResponse::Self *)((char *)v11 + 20);
        gaia::BaseJSONServiceResponse::Destroy(ptr);
      }
      while ( v10 != v11 );
      v11 = (gaia::BaseJSONServiceResponse::Self *)v34;
    }
    if ( v11 != nullptr )
      opDelete(v11);
    g4_std::string::Destroy(&v28);
    g4_std::string::Destroy(&v27);
    v12 = (void *)(v26 - 12);
    if ( (uint32_t *)(v26 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v12);
    }
    return started;
  }
  gaia::GaiaRequest::SetResponseCode(a2, OlympusStatus);
  return v15;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Olympus::PostArbitraryEntry  (binary VA: 0x1477560)
// Original: gaia::Gaia_Olympus::PostArbitraryEntry
// ----------------------------------------------------------------------------
int gaia::Gaia_Olympus::PostArbitraryEntry(gaia::Gaia_Olympus::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  void *v6;
  void *v7;
  void *v8;
  void *v9;
  void *v10;
  int OlympusStatus;
  Json::Value::Self *v12;
  Json::Value::Self *v13;
  Json::Value::Self *v14;
  int v15;
  Json::Value::Self *v16;
  Json::Value::Self *v17;
  void *v18;
  int result;
  void *v20;
  int Instance;
  typedef bool _g4_t_isNull;
  typedef bool _g4_t_v23;
  typedef bool _g4_t_v24;
  typedef Json::Value::Self *_g4_t_AccessToken;
  typedef Json::Value::Self *_g4_t_v26;
  typedef Json::Value::Self *_g4_t_v27;
  typedef Json::Value::Self *_g4_t_started;
  typedef Json::Value::Self *_g4_t_v29;
  typedef Json::Value::Self *_g4_t_v30;
  typedef char _g4_t_v31;
  typedef char _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef uint8_t _g4_t_v38[7];
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
  typedef uint8_t _g4_t_v56[4];
  typedef uint8_t _g4_t_v57[4];
  typedef uint8_t _g4_t_v58[4];
  typedef uint8_t _g4_t_v59[4];
  typedef int _g4_t_v60;
  typedef uint8_t _g4_t_v61[4];
  typedef int _g4_t_v62;
  typedef uint8_t _g4_t_v63[4];
  typedef int _g4_t_v64;
  typedef uint8_t _g4_t_v65[4];
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef uint8_t _g4_t_v68[16];
  typedef uint8_t _g4_t_v69[16];
  typedef uint8_t _g4_t_v70[16];
  typedef uint8_t _g4_t_v71[16];
  typedef uint8_t _g4_t_v72[16];
  typedef uint8_t _g4_t_v73[16];
  typedef uint8_t _g4_t_v74[16];
  typedef uint8_t _g4_t_v75[16];
  typedef uint8_t _g4_t_v76[16];
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef void *_g4_t_v79;
  typedef int *_g4_t_v80;
  typedef int *_g4_t_v81;
  typedef int _g4_t_v82;
  typedef uint8_t _g4_t_v83[96];
  enum : size_t {
    _g4_s0 = 544u,
    _g4_s1 = (8u + sizeof(_g4_t_isNull)) > _g4_s0 ? (8u + sizeof(_g4_t_isNull)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v23)) > _g4_s1 ? (8u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v24)) > _g4_s2 ? (8u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_AccessToken)) > _g4_s3 ? (8u + sizeof(_g4_t_AccessToken)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v26)) > _g4_s4 ? (8u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v27)) > _g4_s5 ? (8u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_started)) > _g4_s6 ? (8u + sizeof(_g4_t_started)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v29)) > _g4_s7 ? (8u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v30)) > _g4_s8 ? (8u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (12u + sizeof(_g4_t_v31)) > _g4_s9 ? (12u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v32)) > _g4_s10 ? (16u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (63u + sizeof(_g4_t_v33)) > _g4_s11 ? (63u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v34)) > _g4_s12 ? (64u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v35)) > _g4_s13 ? (68u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v36)) > _g4_s14 ? (72u + sizeof(_g4_t_v36)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v37)) > _g4_s15 ? (76u + sizeof(_g4_t_v37)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v38)) > _g4_s16 ? (80u + sizeof(_g4_t_v38)) : _g4_s16,
    _g4_s18 = (96u + sizeof(_g4_t_v39)) > _g4_s17 ? (96u + sizeof(_g4_t_v39)) : _g4_s17,
    _g4_s19 = (100u + sizeof(_g4_t_v40)) > _g4_s18 ? (100u + sizeof(_g4_t_v40)) : _g4_s18,
    _g4_s20 = (104u + sizeof(_g4_t_v41)) > _g4_s19 ? (104u + sizeof(_g4_t_v41)) : _g4_s19,
    _g4_s21 = (108u + sizeof(_g4_t_v42)) > _g4_s20 ? (108u + sizeof(_g4_t_v42)) : _g4_s20,
    _g4_s22 = (112u + sizeof(_g4_t_v43)) > _g4_s21 ? (112u + sizeof(_g4_t_v43)) : _g4_s21,
    _g4_s23 = (116u + sizeof(_g4_t_v44)) > _g4_s22 ? (116u + sizeof(_g4_t_v44)) : _g4_s22,
    _g4_s24 = (120u + sizeof(_g4_t_v45)) > _g4_s23 ? (120u + sizeof(_g4_t_v45)) : _g4_s23,
    _g4_s25 = (124u + sizeof(_g4_t_v46)) > _g4_s24 ? (124u + sizeof(_g4_t_v46)) : _g4_s24,
    _g4_s26 = (128u + sizeof(_g4_t_v47)) > _g4_s25 ? (128u + sizeof(_g4_t_v47)) : _g4_s25,
    _g4_s27 = (132u + sizeof(_g4_t_v48)) > _g4_s26 ? (132u + sizeof(_g4_t_v48)) : _g4_s26,
    _g4_s28 = (136u + sizeof(_g4_t_v49)) > _g4_s27 ? (136u + sizeof(_g4_t_v49)) : _g4_s27,
    _g4_s29 = (140u + sizeof(_g4_t_v50)) > _g4_s28 ? (140u + sizeof(_g4_t_v50)) : _g4_s28,
    _g4_s30 = (144u + sizeof(_g4_t_v51)) > _g4_s29 ? (144u + sizeof(_g4_t_v51)) : _g4_s29,
    _g4_s31 = (148u + sizeof(_g4_t_v52)) > _g4_s30 ? (148u + sizeof(_g4_t_v52)) : _g4_s30,
    _g4_s32 = (152u + sizeof(_g4_t_v53)) > _g4_s31 ? (152u + sizeof(_g4_t_v53)) : _g4_s31,
    _g4_s33 = (156u + sizeof(_g4_t_v54)) > _g4_s32 ? (156u + sizeof(_g4_t_v54)) : _g4_s32,
    _g4_s34 = (160u + sizeof(_g4_t_v55)) > _g4_s33 ? (160u + sizeof(_g4_t_v55)) : _g4_s33,
    _g4_s35 = (164u + sizeof(_g4_t_v56)) > _g4_s34 ? (164u + sizeof(_g4_t_v56)) : _g4_s34,
    _g4_s36 = (168u + sizeof(_g4_t_v57)) > _g4_s35 ? (168u + sizeof(_g4_t_v57)) : _g4_s35,
    _g4_s37 = (172u + sizeof(_g4_t_v58)) > _g4_s36 ? (172u + sizeof(_g4_t_v58)) : _g4_s36,
    _g4_s38 = (176u + sizeof(_g4_t_v59)) > _g4_s37 ? (176u + sizeof(_g4_t_v59)) : _g4_s37,
    _g4_s39 = (180u + sizeof(_g4_t_v60)) > _g4_s38 ? (180u + sizeof(_g4_t_v60)) : _g4_s38,
    _g4_s40 = (184u + sizeof(_g4_t_v61)) > _g4_s39 ? (184u + sizeof(_g4_t_v61)) : _g4_s39,
    _g4_s41 = (188u + sizeof(_g4_t_v62)) > _g4_s40 ? (188u + sizeof(_g4_t_v62)) : _g4_s40,
    _g4_s42 = (192u + sizeof(_g4_t_v63)) > _g4_s41 ? (192u + sizeof(_g4_t_v63)) : _g4_s41,
    _g4_s43 = (196u + sizeof(_g4_t_v64)) > _g4_s42 ? (196u + sizeof(_g4_t_v64)) : _g4_s42,
    _g4_s44 = (200u + sizeof(_g4_t_v65)) > _g4_s43 ? (200u + sizeof(_g4_t_v65)) : _g4_s43,
    _g4_s45 = (204u + sizeof(_g4_t_v66)) > _g4_s44 ? (204u + sizeof(_g4_t_v66)) : _g4_s44,
    _g4_s46 = (208u + sizeof(_g4_t_v67)) > _g4_s45 ? (208u + sizeof(_g4_t_v67)) : _g4_s45,
    _g4_s47 = (212u + sizeof(_g4_t_v68)) > _g4_s46 ? (212u + sizeof(_g4_t_v68)) : _g4_s46,
    _g4_s48 = (228u + sizeof(_g4_t_v69)) > _g4_s47 ? (228u + sizeof(_g4_t_v69)) : _g4_s47,
    _g4_s49 = (244u + sizeof(_g4_t_v70)) > _g4_s48 ? (244u + sizeof(_g4_t_v70)) : _g4_s48,
    _g4_s50 = (260u + sizeof(_g4_t_v71)) > _g4_s49 ? (260u + sizeof(_g4_t_v71)) : _g4_s49,
    _g4_s51 = (276u + sizeof(_g4_t_v72)) > _g4_s50 ? (276u + sizeof(_g4_t_v72)) : _g4_s50,
    _g4_s52 = (292u + sizeof(_g4_t_v73)) > _g4_s51 ? (292u + sizeof(_g4_t_v73)) : _g4_s51,
    _g4_s53 = (308u + sizeof(_g4_t_v74)) > _g4_s52 ? (308u + sizeof(_g4_t_v74)) : _g4_s52,
    _g4_s54 = (324u + sizeof(_g4_t_v75)) > _g4_s53 ? (324u + sizeof(_g4_t_v75)) : _g4_s53,
    _g4_s55 = (340u + sizeof(_g4_t_v76)) > _g4_s54 ? (340u + sizeof(_g4_t_v76)) : _g4_s54,
    _g4_s56 = (356u + sizeof(_g4_t_v77)) > _g4_s55 ? (356u + sizeof(_g4_t_v77)) : _g4_s55,
    _g4_s57 = (360u + sizeof(_g4_t_v78)) > _g4_s56 ? (360u + sizeof(_g4_t_v78)) : _g4_s56,
    _g4_s58 = (364u + sizeof(_g4_t_v79)) > _g4_s57 ? (364u + sizeof(_g4_t_v79)) : _g4_s57,
    _g4_s59 = (368u + sizeof(_g4_t_v80)) > _g4_s58 ? (368u + sizeof(_g4_t_v80)) : _g4_s58,
    _g4_s60 = (372u + sizeof(_g4_t_v81)) > _g4_s59 ? (372u + sizeof(_g4_t_v81)) : _g4_s59,
    _g4_s61 = (376u + sizeof(_g4_t_v82)) > _g4_s60 ? (376u + sizeof(_g4_t_v82)) : _g4_s60,
    _g4_s62 = (380u + sizeof(_g4_t_v83)) > _g4_s61 ? (380u + sizeof(_g4_t_v83)) : _g4_s61
  };
  alignas(16) uint8_t _g4_sf[_g4_s62];
  _g4_t_isNull &isNull = *reinterpret_cast<_g4_t_isNull *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_AccessToken &AccessToken = *reinterpret_cast<_g4_t_AccessToken *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 8u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 8u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 8u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 8u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 16u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 63u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 64u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 68u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 72u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 76u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 80u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 96u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 100u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 104u);
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
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 192u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 196u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 200u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 204u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 208u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 212u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 228u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 244u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 260u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 276u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 292u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 308u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 324u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 340u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 356u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 360u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 364u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 368u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 372u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 376u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 380u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "sort", (int)(uintptr_t)(&v33));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v39), 5);
    v2 = (void *)(v39 - 12);
    if ( (uint32_t *)(v39 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "name", (int)(uintptr_t)(&v34));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v40), 4);
    v3 = (void *)(v40 - 12);
    if ( (uint32_t *)(v40 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v40 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "score", (int)(uintptr_t)(&v34) + 1);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v41), 1);
    v4 = (void *)(v41 - 12);
    if ( (uint32_t *)(v41 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), "display_name", (int)(uintptr_t)(&v34) + 2);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v42), 4);
    v5 = (void *)(v42 - 12);
    if ( (uint32_t *)(v42 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v42 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), "entry_name", (int)(uintptr_t)(&v34) + 3);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v43), 4);
    v6 = (void *)(v43 - 12);
    if ( (uint32_t *)(v43 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v43 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), "credential", (int)(uintptr_t)(&v35));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v44), 4);
    v7 = (void *)(v44 - 12);
    if ( (uint32_t *)(v44 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v44 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "replace_score_if", (int)(uintptr_t)(&v35) + 1);
    gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v45), 4);
    v8 = (void *)(v45 - 12);
    if ( (uint32_t *)(v45 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v8);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), "expiration_date", (int)(uintptr_t)(&v35) + 2);
    gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v46), 4);
    v9 = (void *)(v46 - 12);
    if ( (uint32_t *)(v46 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v46 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v9);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), "expiration_duration", (int)(uintptr_t)(&v35) + 3);
    gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v47), 4);
    v10 = (void *)(v47 - 12);
    if ( (uint32_t *)(v47 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v47 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v10);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 2006);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v83, a2);
        started = (Json::Value::Self *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v83);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v83);
        return (int)(uintptr_t)(started);
      }
      else
      {
        OlympusStatus = gaia::Gaia_Olympus::GetOlympusStatus(self);
        if ( OlympusStatus != 0 )
        {
          v30 = (Json::Value::Self *)OlympusStatus;
          gaia::GaiaRequest::SetResponseCode(a2, OlympusStatus);
          return (int)(uintptr_t)(v30);
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v48), (char *)&unk_1B15112, (int)(uintptr_t)(&v36));
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v49), (char *)&unk_1B15112, (int)(uintptr_t)(&v36) + 1);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v50), (char *)&unk_1B15112, (int)(uintptr_t)(&v36) + 2);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v51), (char *)&unk_1B15112, (int)(uintptr_t)(&v36) + 3);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v52), (char *)&unk_1B15112, (int)(uintptr_t)(&v37));
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v53), (char *)&unk_1B15112, (int)(uintptr_t)(&v37) + 1);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v54), (char *)&unk_1B15112, (int)(uintptr_t)(&v37) + 2);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v55), (char *)&unk_1B15112, (int)(uintptr_t)(&v37) + 3);
          v80 = &v78;
          v81 = &v78;
          v78 = 0;
          v79 = nullptr;
          v82 = 0;
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v68, (const char *)a2);
          v32 = Json::Value::asBool((Json::Value::Self *)v68);
          Json::Value::Destroy((Json::Value::Self *)v68);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v69, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)v56, (int)(uintptr_t)(v69));
          g4_std::string::assign_str(&v49, v56);
          g4_std::string::Destroy(v56);
          Json::Value::Destroy((Json::Value::Self *)v69);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v70, (const char *)a2);
          v31 = Json::Value::asInt((Json::Value::Self *)v70);
          Json::Value::Destroy((Json::Value::Self *)v70);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v71, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)v57, (int)(uintptr_t)(v71));
          g4_std::string::assign_str(&v52, v57);
          g4_std::string::Destroy(v57);
          Json::Value::Destroy((Json::Value::Self *)v71);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v72, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)v58, (int)(uintptr_t)(v72));
          g4_std::string::assign_str(&v51, v58);
          g4_std::string::Destroy(v58);
          Json::Value::Destroy((Json::Value::Self *)v72);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v73, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)v59, (int)(uintptr_t)(v73));
          g4_std::string::assign_str(&v50, v59);
          g4_std::string::Destroy(v59);
          Json::Value::Destroy((Json::Value::Self *)v73);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v60), "replace_score_if", (int)(uintptr_t)(v38));
          v12 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v60);
          isNull = Json::Value::isNull(v12);
          g4_std::string::Destroy(&v60);
          if ( !isNull )
          {
            gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v74, (const char *)a2);
            Json::Value::asString((Json::Value::Self *)v61, (int)(uintptr_t)(v74));
            g4_std::string::assign_str(&v53, v61);
            g4_std::string::Destroy(v61);
            Json::Value::Destroy((Json::Value::Self *)v74);
          }
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v62), "expiration_date", (int)(uintptr_t)(&v38[1]));
          v13 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v62);
          v23 = Json::Value::isNull(v13);
          g4_std::string::Destroy(&v62);
          if ( !v23 )
          {
            gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v75, (const char *)a2);
            Json::Value::asString((Json::Value::Self *)v63, (int)(uintptr_t)(v75));
            g4_std::string::assign_str(&v54, v63);
            g4_std::string::Destroy(v63);
            Json::Value::Destroy((Json::Value::Self *)v75);
          }
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v64), "expiration_duration", (int)(uintptr_t)(&v38[2]));
          v14 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v64);
          v24 = Json::Value::isNull(v14);
          g4_std::string::Destroy(&v64);
          if ( !v24 )
          {
            gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v76, (const char *)a2);
            Json::Value::asString((Json::Value::Self *)v65, (int)(uintptr_t)(v76));
            g4_std::string::assign_str(&v55, v65);
            g4_std::string::Destroy(v65);
            Json::Value::Destroy((Json::Value::Self *)v76);
          }
          gaia::GaiaRequest::GetInputValue(a2, (std::map<std::string,std::string> *)&v77);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v66), "leaderboard_override", (int)(uintptr_t)(&v38[3]));
          AccessToken = (Json::Value::Self *)gaia::Gaia_Olympus::GetAccessToken(self, a2, &v66, (int)(uintptr_t)(&v48));
          g4_std::string::Destroy(&v66);
          v15 = (int)(uintptr_t)(AccessToken);
          if ( AccessToken != nullptr
            || (g4_std::string::construct_from_cstr((int)(uintptr_t)(&v67), "leaderboard", (int)(uintptr_t)(&v38[4])),
                AccessToken = (Json::Value::Self *)gaia::Gaia_Olympus::GetAccessToken(self, a2, &v67, (int)(uintptr_t)(&v48)),
                g4_std::string::Destroy(&v67),
                v15 = (int)(uintptr_t)(AccessToken),
                AccessToken != nullptr) )
          {
            gaia::GaiaRequest::SetResponseCode(a2, v15);
            v16 = AccessToken;
          }
          else
          {
            Instance = gaia::Gaia::GetInstance();
            v29 = (Json::Value::Self *)gaia::Olympus::PostArbitraryEntry(
                                   *(gaia::BaseServiceManager::Self **)(Instance + 20),
                                   (int)(uintptr_t)(&v49),
                                   (int)(uintptr_t)(&v51),
                                   (int)(uintptr_t)(&v48),
                                   (int)(uintptr_t)(&v50),
                                   (int)(uintptr_t)(&v52),
                                   v31,
                                   (int)(uintptr_t)(&v54),
                                   (int)(uintptr_t)(&v55),
                                   (int)(uintptr_t)(&v77),
                                   v32,
                                   (int)(uintptr_t)(&v53),
                                   (int)(uintptr_t)(a2));
            gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(v29));
            v16 = v29;
          }
          v26 = v16;
          std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
            (int)(uintptr_t)(&v77),
            v79);
          g4_std::string::Destroy(&v55);
          v17 = v26;
          v18 = (void *)(v54 - 12);
          if ( (uint32_t *)(v54 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v54 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v18);
            v17 = v26;
          }
          v27 = v17;
          g4_std::string::Destroy(&v53);
          g4_std::string::Destroy(&v52);
          g4_std::string::Destroy(&v51);
          g4_std::string::Destroy(&v50);
          g4_std::string::Destroy(&v49);
          result = (int)(uintptr_t)(v27);
          v20 = (void *)(v48 - 12);
          if ( (uint32_t *)(v48 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v48 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v20);
            return (int)(uintptr_t)(v27);
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
// Function: gaia::Gaia_Olympus::PostEntry  (binary VA: 0x14782f0)
// Original: gaia::Gaia_Olympus::PostEntry
// ----------------------------------------------------------------------------
int gaia::Gaia_Olympus::PostEntry(gaia::Gaia_Olympus::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  void *v6;
  void *v7;
  void *v8;
  int OlympusStatus;
  void *v10;
  void *v11;
  void *v12;
  Json::Value::Self *v13;
  bool isNull;
  void *v15;
  Json::Value::Self *v16;
  bool v17;
  void *v18;
  Json::Value::Self *v19;
  bool v20;
  void *v21;
  int AccessToken;
  int result;
  void *v24;
  void *v25;
  void *v26;
  void *v27;
  void *v28;
  void *v29;
  int Instance;
  typedef Json::Value::Self *_g4_t_v31;
  typedef Json::Value::Self *_g4_t_v32;
  typedef Json::Value::Self *_g4_t_started;
  typedef Json::Value::Self *_g4_t_v34;
  typedef Json::Value::Self *_g4_t_v35;
  typedef Json::Value::Self *_g4_t_v36;
  typedef Json::Value::Self *_g4_t_v37;
  typedef bool _g4_t_v38;
  typedef bool _g4_t_v39;
  typedef bool _g4_t_v40;
  typedef Json::Value::Self *_g4_t_v41;
  typedef Json::Value::Self *_g4_t_v42;
  typedef char *_g4_t_v43;
  typedef char _g4_t_v44;
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
  typedef uint8_t _g4_t_v66[4];
  typedef int _g4_t_v67;
  typedef uint8_t _g4_t_v68[4];
  typedef int _g4_t_v69;
  typedef uint8_t _g4_t_v70[4];
  typedef int _g4_t_v71;
  typedef uint8_t _g4_t_v72[16];
  typedef uint8_t _g4_t_v73[16];
  typedef uint8_t _g4_t_v74[16];
  typedef uint8_t _g4_t_v75[16];
  typedef uint8_t _g4_t_v76[16];
  typedef uint8_t _g4_t_v77[16];
  typedef uint8_t _g4_t_v78[16];
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef void *_g4_t_v81;
  typedef int *_g4_t_v82;
  typedef int *_g4_t_v83;
  typedef int _g4_t_v84;
  typedef uint8_t _g4_t_v85[96];
  enum : size_t {
    _g4_s0 = 464u,
    _g4_s1 = (0u + sizeof(_g4_t_v31)) > _g4_s0 ? (0u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v32)) > _g4_s1 ? (0u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_started)) > _g4_s2 ? (0u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v34)) > _g4_s3 ? (0u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v35)) > _g4_s4 ? (0u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v36)) > _g4_s5 ? (0u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (0u + sizeof(_g4_t_v37)) > _g4_s6 ? (0u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (0u + sizeof(_g4_t_v38)) > _g4_s7 ? (0u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (0u + sizeof(_g4_t_v39)) > _g4_s8 ? (0u + sizeof(_g4_t_v39)) : _g4_s8,
    _g4_s10 = (0u + sizeof(_g4_t_v40)) > _g4_s9 ? (0u + sizeof(_g4_t_v40)) : _g4_s9,
    _g4_s11 = (0u + sizeof(_g4_t_v41)) > _g4_s10 ? (0u + sizeof(_g4_t_v41)) : _g4_s10,
    _g4_s12 = (0u + sizeof(_g4_t_v42)) > _g4_s11 ? (0u + sizeof(_g4_t_v42)) : _g4_s11,
    _g4_s13 = (4u + sizeof(_g4_t_v43)) > _g4_s12 ? (4u + sizeof(_g4_t_v43)) : _g4_s12,
    _g4_s14 = (8u + sizeof(_g4_t_v44)) > _g4_s13 ? (8u + sizeof(_g4_t_v44)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v45)) > _g4_s14 ? (28u + sizeof(_g4_t_v45)) : _g4_s14,
    _g4_s16 = (41u + sizeof(_g4_t_v46)) > _g4_s15 ? (41u + sizeof(_g4_t_v46)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v47)) > _g4_s16 ? (44u + sizeof(_g4_t_v47)) : _g4_s16,
    _g4_s18 = (48u + sizeof(_g4_t_v48)) > _g4_s17 ? (48u + sizeof(_g4_t_v48)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v49)) > _g4_s18 ? (72u + sizeof(_g4_t_v49)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v50)) > _g4_s19 ? (76u + sizeof(_g4_t_v50)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v51)) > _g4_s20 ? (80u + sizeof(_g4_t_v51)) : _g4_s20,
    _g4_s22 = (84u + sizeof(_g4_t_v52)) > _g4_s21 ? (84u + sizeof(_g4_t_v52)) : _g4_s21,
    _g4_s23 = (88u + sizeof(_g4_t_v53)) > _g4_s22 ? (88u + sizeof(_g4_t_v53)) : _g4_s22,
    _g4_s24 = (92u + sizeof(_g4_t_v54)) > _g4_s23 ? (92u + sizeof(_g4_t_v54)) : _g4_s23,
    _g4_s25 = (96u + sizeof(_g4_t_v55)) > _g4_s24 ? (96u + sizeof(_g4_t_v55)) : _g4_s24,
    _g4_s26 = (100u + sizeof(_g4_t_v56)) > _g4_s25 ? (100u + sizeof(_g4_t_v56)) : _g4_s25,
    _g4_s27 = (104u + sizeof(_g4_t_v57)) > _g4_s26 ? (104u + sizeof(_g4_t_v57)) : _g4_s26,
    _g4_s28 = (108u + sizeof(_g4_t_v58)) > _g4_s27 ? (108u + sizeof(_g4_t_v58)) : _g4_s27,
    _g4_s29 = (112u + sizeof(_g4_t_v59)) > _g4_s28 ? (112u + sizeof(_g4_t_v59)) : _g4_s28,
    _g4_s30 = (116u + sizeof(_g4_t_v60)) > _g4_s29 ? (116u + sizeof(_g4_t_v60)) : _g4_s29,
    _g4_s31 = (120u + sizeof(_g4_t_v61)) > _g4_s30 ? (120u + sizeof(_g4_t_v61)) : _g4_s30,
    _g4_s32 = (124u + sizeof(_g4_t_v62)) > _g4_s31 ? (124u + sizeof(_g4_t_v62)) : _g4_s31,
    _g4_s33 = (128u + sizeof(_g4_t_v63)) > _g4_s32 ? (128u + sizeof(_g4_t_v63)) : _g4_s32,
    _g4_s34 = (132u + sizeof(_g4_t_v64)) > _g4_s33 ? (132u + sizeof(_g4_t_v64)) : _g4_s33,
    _g4_s35 = (136u + sizeof(_g4_t_v65)) > _g4_s34 ? (136u + sizeof(_g4_t_v65)) : _g4_s34,
    _g4_s36 = (140u + sizeof(_g4_t_v66)) > _g4_s35 ? (140u + sizeof(_g4_t_v66)) : _g4_s35,
    _g4_s37 = (144u + sizeof(_g4_t_v67)) > _g4_s36 ? (144u + sizeof(_g4_t_v67)) : _g4_s36,
    _g4_s38 = (148u + sizeof(_g4_t_v68)) > _g4_s37 ? (148u + sizeof(_g4_t_v68)) : _g4_s37,
    _g4_s39 = (152u + sizeof(_g4_t_v69)) > _g4_s38 ? (152u + sizeof(_g4_t_v69)) : _g4_s38,
    _g4_s40 = (156u + sizeof(_g4_t_v70)) > _g4_s39 ? (156u + sizeof(_g4_t_v70)) : _g4_s39,
    _g4_s41 = (160u + sizeof(_g4_t_v71)) > _g4_s40 ? (160u + sizeof(_g4_t_v71)) : _g4_s40,
    _g4_s42 = (164u + sizeof(_g4_t_v72)) > _g4_s41 ? (164u + sizeof(_g4_t_v72)) : _g4_s41,
    _g4_s43 = (180u + sizeof(_g4_t_v73)) > _g4_s42 ? (180u + sizeof(_g4_t_v73)) : _g4_s42,
    _g4_s44 = (196u + sizeof(_g4_t_v74)) > _g4_s43 ? (196u + sizeof(_g4_t_v74)) : _g4_s43,
    _g4_s45 = (212u + sizeof(_g4_t_v75)) > _g4_s44 ? (212u + sizeof(_g4_t_v75)) : _g4_s44,
    _g4_s46 = (228u + sizeof(_g4_t_v76)) > _g4_s45 ? (228u + sizeof(_g4_t_v76)) : _g4_s45,
    _g4_s47 = (244u + sizeof(_g4_t_v77)) > _g4_s46 ? (244u + sizeof(_g4_t_v77)) : _g4_s46,
    _g4_s48 = (260u + sizeof(_g4_t_v78)) > _g4_s47 ? (260u + sizeof(_g4_t_v78)) : _g4_s47,
    _g4_s49 = (276u + sizeof(_g4_t_v79)) > _g4_s48 ? (276u + sizeof(_g4_t_v79)) : _g4_s48,
    _g4_s50 = (280u + sizeof(_g4_t_v80)) > _g4_s49 ? (280u + sizeof(_g4_t_v80)) : _g4_s49,
    _g4_s51 = (284u + sizeof(_g4_t_v81)) > _g4_s50 ? (284u + sizeof(_g4_t_v81)) : _g4_s50,
    _g4_s52 = (288u + sizeof(_g4_t_v82)) > _g4_s51 ? (288u + sizeof(_g4_t_v82)) : _g4_s51,
    _g4_s53 = (292u + sizeof(_g4_t_v83)) > _g4_s52 ? (292u + sizeof(_g4_t_v83)) : _g4_s52,
    _g4_s54 = (296u + sizeof(_g4_t_v84)) > _g4_s53 ? (296u + sizeof(_g4_t_v84)) : _g4_s53,
    _g4_s55 = (300u + sizeof(_g4_t_v85)) > _g4_s54 ? (300u + sizeof(_g4_t_v85)) : _g4_s54
  };
  alignas(16) uint8_t _g4_sf[_g4_s55];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 0u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 0u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 0u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 0u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 0u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 0u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 0u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 0u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 0u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 0u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 0u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 0u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 4u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 8u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 28u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 41u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 44u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 48u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 72u);
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
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 160u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 164u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 180u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 196u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 212u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 228u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 244u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 260u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 276u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 280u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 284u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 288u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 292u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 296u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 300u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v49), "sort", (int)(uintptr_t)(&v46));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v49), 4);
    v2 = (void *)(v49 - 12);
    if ( (uint32_t *)(v49 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v49 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v50), "name", (int)(uintptr_t)(&v46) + 1);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v50), 4);
    v3 = (void *)(v50 - 12);
    if ( (uint32_t *)(v50 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v50 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v51), "score", (int)(uintptr_t)(&v46) + 2);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v51), 1);
    v4 = (void *)(v51 - 12);
    if ( (uint32_t *)(v51 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v51 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v52), "display_name", (int)(uintptr_t)(&v47));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v52), 4);
    v5 = (void *)(v52 - 12);
    if ( (uint32_t *)(v52 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v52 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v53), "replace_score_if", (int)(uintptr_t)(&v47) + 1);
    gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v53), 4);
    v6 = (void *)(v53 - 12);
    if ( (uint32_t *)(v53 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v53 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v54), "expiration_date", (int)(uintptr_t)(&v47) + 2);
    gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v54), 4);
    v7 = (void *)(v54 - 12);
    if ( (uint32_t *)(v54 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v54 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v55), "expiration_duration", (int)(uintptr_t)(&v47) + 3);
    gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v55), 4);
    v8 = (void *)(v55 - 12);
    if ( (uint32_t *)(v55 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v55 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v8);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 2007);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v85, a2);
        started = (Json::Value::Self *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v85);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v85);
        return (int)(uintptr_t)(started);
      }
      else
      {
        OlympusStatus = gaia::Gaia_Olympus::GetOlympusStatus(self);
        if ( OlympusStatus != 0 )
        {
          v34 = (Json::Value::Self *)OlympusStatus;
          gaia::GaiaRequest::SetResponseCode(a2, OlympusStatus);
          return (int)(uintptr_t)(v34);
        }
        else
        {
          v56 = (int)(uintptr_t)(&dword_213B814);
          v57 = (int)(uintptr_t)(&dword_213B814);
          v58 = (int)(uintptr_t)(&dword_213B814);
          v59 = (int)(uintptr_t)(&dword_213B814);
          v60 = (int)(uintptr_t)(&dword_213B814);
          v61 = (int)(uintptr_t)(&dword_213B814);
          v80 = 0;
          v82 = &v80;
          v83 = &v80;
          v81 = nullptr;
          v84 = 0;
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v72, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v62, (int)(uintptr_t)(v72));
          v45 = g4_std::string::compare((int)(uintptr_t)(&v62), (char *)&off_1B70A38);
          v10 = (void *)(v62 - 12);
          if ( (uint32_t *)(v62 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v62 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v10);
          }
          Json::Value::Destroy((Json::Value::Self *)v72);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v73, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v63, (int)(uintptr_t)(v73));
          g4_std::string::assign_str(&v57, &v63);
          v11 = (void *)(v63 - 12);
          if ( (uint32_t *)(v63 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v63 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v11);
          }
          Json::Value::Destroy((Json::Value::Self *)v73);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v74, (const char *)a2);
          v44 = Json::Value::asInt((Json::Value::Self *)v74);
          Json::Value::Destroy((Json::Value::Self *)v74);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v75, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v64, (int)(uintptr_t)(v75));
          g4_std::string::assign_str(&v58, &v64);
          v12 = (void *)(v64 - 12);
          if ( (uint32_t *)(v64 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v64 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v12);
          }
          Json::Value::Destroy((Json::Value::Self *)v75);
          gaia::GaiaRequest::GetInputValue(a2, (std::map<std::string,std::string> *)&v79);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v65), "replace_score_if", (int)(uintptr_t)(&v48));
          v13 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v65);
          isNull = Json::Value::isNull(v13);
          v15 = (void *)(v65 - 12);
          if ( (uint32_t *)(v65 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v65 - 4), 0xFFFFFFFF) <= 0 )
          {
            v40 = isNull;
            g4_std::string::Rep::M_destroy(v15);
            isNull = v40;
          }
          if ( !isNull )
          {
            gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v76, (const char *)a2);
            Json::Value::asString((Json::Value::Self *)v66, (int)(uintptr_t)(v76));
            g4_std::string::assign_str(&v61, v66);
            g4_std::string::Destroy(v66);
            Json::Value::Destroy((Json::Value::Self *)v76);
          }
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v67), "expiration_date", (int)(uintptr_t)(&v48) + 1);
          v16 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v67);
          v17 = Json::Value::isNull(v16);
          v18 = (void *)(v67 - 12);
          if ( (uint32_t *)(v67 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v67 - 4), 0xFFFFFFFF) <= 0 )
          {
            v38 = v17;
            g4_std::string::Rep::M_destroy(v18);
            v17 = v38;
          }
          if ( !v17 )
          {
            gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v77, (const char *)a2);
            Json::Value::asString((Json::Value::Self *)v68, (int)(uintptr_t)(v77));
            g4_std::string::assign_str(&v59, v68);
            g4_std::string::Destroy(v68);
            Json::Value::Destroy((Json::Value::Self *)v77);
          }
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v69), "expiration_duration", (int)(uintptr_t)(&v48) + 2);
          v19 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v69);
          v20 = Json::Value::isNull(v19);
          v21 = (void *)(v69 - 12);
          if ( (uint32_t *)(v69 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v69 - 4), 0xFFFFFFFF) <= 0 )
          {
            v39 = v20;
            g4_std::string::Rep::M_destroy(v21);
            v20 = v39;
          }
          if ( !v20 )
          {
            gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v78, (const char *)a2);
            Json::Value::asString((Json::Value::Self *)v70, (int)(uintptr_t)(v78));
            g4_std::string::assign_str(&v60, v70);
            g4_std::string::Destroy(v70);
            Json::Value::Destroy((Json::Value::Self *)v78);
          }
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v71), "leaderboard", (int)(uintptr_t)(&v48) + 3);
          AccessToken = gaia::Gaia_Olympus::GetAccessToken(self, a2, &v71, (int)(uintptr_t)(&v56));
          v43 = (char *)(v71 - 12);
          if ( (uint32_t *)(v71 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v71 - 4), 0xFFFFFFFF) <= 0 )
          {
            v42 = (Json::Value::Self *)AccessToken;
            g4_std::string::Rep::M_destroy(v43);
            AccessToken = (int)(uintptr_t)(v42);
          }
          if ( AccessToken == 0 )
          {
            Instance = gaia::Gaia::GetInstance();
            AccessToken = gaia::Olympus::PostEntry(
                            *(gaia::BaseServiceManager::Self **)(Instance + 20),
                            v45 == 0,
                            (int)(uintptr_t)(&v57),
                            (int)(uintptr_t)(&v56),
                            v44,
                            (int)(uintptr_t)(&v58),
                            (int)(uintptr_t)(&v61),
                            (int)(uintptr_t)(&v59),
                            (int)(uintptr_t)(&v60),
                            (int)(uintptr_t)(&v79),
                            (int)(uintptr_t)(a2));
          }
          v31 = (Json::Value::Self *)AccessToken;
          gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
          std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
            (int)(uintptr_t)(&v79),
            v81);
          result = (int)(uintptr_t)(v31);
          v24 = (void *)(v61 - 12);
          if ( (uint32_t *)(v61 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v61 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v24);
            result = (int)(uintptr_t)(v31);
          }
          v25 = (void *)(v60 - 12);
          if ( (uint32_t *)(v60 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v60 - 4), 0xFFFFFFFF) <= 0 )
          {
            v35 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v25);
            result = (int)(uintptr_t)(v35);
          }
          v26 = (void *)(v59 - 12);
          if ( (uint32_t *)(v59 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v59 - 4), 0xFFFFFFFF) <= 0 )
          {
            v36 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v26);
            result = (int)(uintptr_t)(v36);
          }
          v27 = (void *)(v58 - 12);
          if ( (uint32_t *)(v58 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v58 - 4), 0xFFFFFFFF) <= 0 )
          {
            v37 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v27);
            result = (int)(uintptr_t)(v37);
          }
          v28 = (void *)(v57 - 12);
          if ( (uint32_t *)(v57 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v57 - 4), 0xFFFFFFFF) <= 0 )
          {
            v41 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v28);
            result = (int)(uintptr_t)(v41);
          }
          v29 = (void *)(v56 - 12);
          if ( (uint32_t *)(v56 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v56 - 4), 0xFFFFFFFF) <= 0 )
          {
            v32 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v29);
            return (int)(uintptr_t)(v32);
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
// Function: gaia::Gaia_Olympus::RetrieveFriendLeaderboard  (binary VA: 0x1478f10)
// Original: gaia::Gaia_Olympus::RetrieveFriendLeaderboard
// ----------------------------------------------------------------------------
int gaia::Gaia_Olympus::RetrieveFriendLeaderboard(gaia::Gaia_Olympus::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  int OlympusStatus;
  char v7; // bp
  void *v8;
  gaia::BaseJSONServiceResponse::Self *v9;
  gaia::BaseJSONServiceResponse::Self *v10;
  int Instance;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_ptr;
  typedef int _g4_t_v14;
  typedef int _g4_t_AccessToken;
  typedef int _g4_t_started;
  typedef char _g4_t_v17;
  typedef char _g4_t_v18;
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
  typedef char _g4_t_v30[4];
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef void *_g4_t_v33;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef uint8_t _g4_t_v36[16];
  typedef uint8_t _g4_t_v37[16];
  typedef uint8_t _g4_t_v38[16];
  typedef uint8_t _g4_t_v39[16];
  typedef uint8_t _g4_t_v40[96];
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (64u + sizeof(_g4_t_v14)) > _g4_s1 ? (64u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_AccessToken)) > _g4_s2 ? (64u + sizeof(_g4_t_AccessToken)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_started)) > _g4_s3 ? (64u + sizeof(_g4_t_started)) : _g4_s3,
    _g4_s5 = (68u + sizeof(_g4_t_v17)) > _g4_s4 ? (68u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v18)) > _g4_s5 ? (72u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (87u + sizeof(_g4_t_v19)) > _g4_s6 ? (87u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (88u + sizeof(_g4_t_v20)) > _g4_s7 ? (88u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (92u + sizeof(_g4_t_v21)) > _g4_s8 ? (92u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (100u + sizeof(_g4_t_v22)) > _g4_s9 ? (100u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (104u + sizeof(_g4_t_v23)) > _g4_s10 ? (104u + sizeof(_g4_t_v23)) : _g4_s10,
    _g4_s12 = (108u + sizeof(_g4_t_v24)) > _g4_s11 ? (108u + sizeof(_g4_t_v24)) : _g4_s11,
    _g4_s13 = (112u + sizeof(_g4_t_v25)) > _g4_s12 ? (112u + sizeof(_g4_t_v25)) : _g4_s12,
    _g4_s14 = (116u + sizeof(_g4_t_v26)) > _g4_s13 ? (116u + sizeof(_g4_t_v26)) : _g4_s13,
    _g4_s15 = (120u + sizeof(_g4_t_v27)) > _g4_s14 ? (120u + sizeof(_g4_t_v27)) : _g4_s14,
    _g4_s16 = (124u + sizeof(_g4_t_v28)) > _g4_s15 ? (124u + sizeof(_g4_t_v28)) : _g4_s15,
    _g4_s17 = (128u + sizeof(_g4_t_v29)) > _g4_s16 ? (128u + sizeof(_g4_t_v29)) : _g4_s16,
    _g4_s18 = (132u + sizeof(_g4_t_v30)) > _g4_s17 ? (132u + sizeof(_g4_t_v30)) : _g4_s17,
    _g4_s19 = (136u + sizeof(_g4_t_v31)) > _g4_s18 ? (136u + sizeof(_g4_t_v31)) : _g4_s18,
    _g4_s20 = (140u + sizeof(_g4_t_v32)) > _g4_s19 ? (140u + sizeof(_g4_t_v32)) : _g4_s19,
    _g4_s21 = (144u + sizeof(_g4_t_v33)) > _g4_s20 ? (144u + sizeof(_g4_t_v33)) : _g4_s20,
    _g4_s22 = (148u + sizeof(_g4_t_v34)) > _g4_s21 ? (148u + sizeof(_g4_t_v34)) : _g4_s21,
    _g4_s23 = (152u + sizeof(_g4_t_v35)) > _g4_s22 ? (152u + sizeof(_g4_t_v35)) : _g4_s22,
    _g4_s24 = (156u + sizeof(_g4_t_v36)) > _g4_s23 ? (156u + sizeof(_g4_t_v36)) : _g4_s23,
    _g4_s25 = (172u + sizeof(_g4_t_v37)) > _g4_s24 ? (172u + sizeof(_g4_t_v37)) : _g4_s24,
    _g4_s26 = (188u + sizeof(_g4_t_v38)) > _g4_s25 ? (188u + sizeof(_g4_t_v38)) : _g4_s25,
    _g4_s27 = (204u + sizeof(_g4_t_v39)) > _g4_s26 ? (204u + sizeof(_g4_t_v39)) : _g4_s26,
    _g4_s28 = (220u + sizeof(_g4_t_v40)) > _g4_s27 ? (220u + sizeof(_g4_t_v40)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 64u);
  _g4_t_AccessToken &AccessToken = *reinterpret_cast<_g4_t_AccessToken *>(_g4_sf + 64u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 64u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 68u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 72u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 87u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 88u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 92u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 100u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 104u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 108u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 112u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 116u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 120u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 124u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 128u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 132u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 136u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 140u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 144u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 148u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 152u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 156u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 172u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 188u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 204u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 220u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "sort", (int)(uintptr_t)(&v19));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v22), 5);
  v2 = (void *)(v22 - 12);
  if ( (uint32_t *)(v22 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "name", (int)(uintptr_t)(&v20));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v23), 4);
  v3 = (void *)(v23 - 12);
  if ( (uint32_t *)(v23 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "limit", (int)(uintptr_t)(&v20) + 1);
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v24), 1);
  v4 = (void *)(v24 - 12);
  if ( (uint32_t *)(v24 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "offset", (int)(uintptr_t)(&v20) + 2);
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v25), 1);
  v5 = (void *)(v25 - 12);
  if ( (uint32_t *)(v25 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) == 0 )
    return gaia::GaiaRequest::GetResponseCode(a2);
  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
  {
    gaia::GaiaRequest::SetOperationCode(a2, 2005);
    gaia::Gaia::GetInstance();
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v40, a2);
    started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v40);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v40);
    return started;
  }
  OlympusStatus = gaia::Gaia_Olympus::GetOlympusStatus(self);
  v14 = OlympusStatus;
  if ( OlympusStatus != 0 )
  {
    gaia::GaiaRequest::SetResponseCode(a2, OlympusStatus);
    return v14;
  }
  else
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), (char *)&unk_1B15112, (int)(uintptr_t)(&v20) + 3);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), (char *)&unk_1B15112, (int)(uintptr_t)(&v21));
    v33 = nullptr;
    v34 = nullptr;
    v35 = 0;
    v28 = nullptr;
    v29 = 0;
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v36, (const char *)a2);
    v18 = Json::Value::asBool((Json::Value::Self *)v36);
    Json::Value::Destroy((Json::Value::Self *)v36);
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v37, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)v30, (int)(uintptr_t)(v37));
    g4_std::string::assign_str(&v26, v30);
    g4_std::string::Destroy(v30);
    Json::Value::Destroy((Json::Value::Self *)v37);
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v38, (const char *)a2);
    v17 = Json::Value::asInt((Json::Value::Self *)v38);
    Json::Value::Destroy((Json::Value::Self *)v38);
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v39, (const char *)a2);
    v7 = Json::Value::asInt((Json::Value::Self *)v39);
    Json::Value::Destroy((Json::Value::Self *)v39);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "leaderboard_ro", (int)(uintptr_t)(&v21) + 1);
    AccessToken = gaia::Gaia_Olympus::GetAccessToken(self, a2, &v31, (int)(uintptr_t)(&v27));
    v8 = (void *)(v31 - 12);
    if ( (uint32_t *)(v31 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v8);
    }
    if ( AccessToken != 0
      || (g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "social", (int)(uintptr_t)(&v21) + 2),
          AccessToken = gaia::Gaia_Olympus::GetAccessToken(self, a2, &v32, (int)(uintptr_t)(&v27)),
          g4_std::string::Destroy(&v32),
          AccessToken != 0) )
    {
      gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
    }
    else
    {
      Instance = gaia::Gaia::GetInstance();
      AccessToken = gaia::Olympus::RetrieveFriendLeaderboard(
                      *(gaia::BaseServiceManager::Self **)(Instance + 20),
                      (void **)&v28,
                      &v29,
                      v18,
                      (int)(uintptr_t)(&v26),
                      (int)(uintptr_t)(&v27),
                      v7,
                      v17,
                      (int)(uintptr_t)(a2));
      if ( AccessToken == 0 )
        AccessToken = gaia::BaseServiceManager::ParseMessages(v28, v29, (int)(uintptr_t)(&v33), 4);
      gaia::GaiaRequest::SetResponse(a2, (const std::vector<gaia::BaseJSONServiceResponse::Self> *)&v33);
      gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
      free(v28);
    }
    v9 = v34;
    v10 = (gaia::BaseJSONServiceResponse::Self *)v33;
    if ( v34 != v33 )
    {
      do
      {
        ptr = v10;
        v10 = (gaia::BaseJSONServiceResponse::Self *)((char *)v10 + 20);
        gaia::BaseJSONServiceResponse::Destroy(ptr);
      }
      while ( v9 != v10 );
      v10 = (gaia::BaseJSONServiceResponse::Self *)v33;
    }
    if ( v10 != nullptr )
      opDelete(v10);
    g4_std::string::Destroy(&v27);
    g4_std::string::Destroy(&v26);
    return AccessToken;
  }
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Olympus::RetrieveLeaderboardAroundCurrentUser  (binary VA: 0x1479590)
// Original: gaia::Gaia_Olympus::RetrieveLeaderboardAroundCurrentUser
// ----------------------------------------------------------------------------
int gaia::Gaia_Olympus::RetrieveLeaderboardAroundCurrentUser(gaia::Gaia_Olympus::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  int OlympusStatus;
  void *v6;
  char v7; // bp
  int Instance;
  gaia::BaseJSONServiceResponse::Self *v9;
  gaia::BaseJSONServiceResponse::Self *v10;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_ptr;
  typedef int _g4_t_v13;
  typedef int _g4_t_AccessToken;
  typedef int _g4_t_started;
  typedef char _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef char *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef void *_g4_t_v28;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef uint8_t _g4_t_v31[16];
  typedef uint8_t _g4_t_v32[16];
  typedef uint8_t _g4_t_v33[16];
  typedef uint8_t _g4_t_v34[96];
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v13)) > _g4_s1 ? (36u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_AccessToken)) > _g4_s2 ? (36u + sizeof(_g4_t_AccessToken)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_started)) > _g4_s3 ? (36u + sizeof(_g4_t_started)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v16)) > _g4_s4 ? (40u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (50u + sizeof(_g4_t_v17)) > _g4_s5 ? (50u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v18)) > _g4_s6 ? (52u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v19)) > _g4_s7 ? (60u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v20)) > _g4_s8 ? (64u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v21)) > _g4_s9 ? (68u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v22)) > _g4_s10 ? (72u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v23)) > _g4_s11 ? (76u + sizeof(_g4_t_v23)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v24)) > _g4_s12 ? (80u + sizeof(_g4_t_v24)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v25)) > _g4_s13 ? (84u + sizeof(_g4_t_v25)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v26)) > _g4_s14 ? (88u + sizeof(_g4_t_v26)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v27)) > _g4_s15 ? (92u + sizeof(_g4_t_v27)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v28)) > _g4_s16 ? (96u + sizeof(_g4_t_v28)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v29)) > _g4_s17 ? (100u + sizeof(_g4_t_v29)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v30)) > _g4_s18 ? (104u + sizeof(_g4_t_v30)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v31)) > _g4_s19 ? (108u + sizeof(_g4_t_v31)) : _g4_s19,
    _g4_s21 = (124u + sizeof(_g4_t_v32)) > _g4_s20 ? (124u + sizeof(_g4_t_v32)) : _g4_s20,
    _g4_s22 = (140u + sizeof(_g4_t_v33)) > _g4_s21 ? (140u + sizeof(_g4_t_v33)) : _g4_s21,
    _g4_s23 = (156u + sizeof(_g4_t_v34)) > _g4_s22 ? (156u + sizeof(_g4_t_v34)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 36u);
  _g4_t_AccessToken &AccessToken = *reinterpret_cast<_g4_t_AccessToken *>(_g4_sf + 36u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 50u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 52u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 60u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 64u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 68u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 72u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 76u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 80u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 84u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 88u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 92u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 96u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 100u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 104u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 108u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 124u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 140u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 156u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "sort", (int)(uintptr_t)(&v17));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v19), 5);
  v2 = (void *)(v19 - 12);
  if ( (uint32_t *)(v19 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "name", (int)(uintptr_t)(&v17) + 1);
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v20), 4);
  v3 = (void *)(v20 - 12);
  if ( (uint32_t *)(v20 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "limit", (int)(uintptr_t)(&v18));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v21), 1);
  v4 = (void *)(v21 - 12);
  if ( (uint32_t *)(v21 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) == 0 )
    return gaia::GaiaRequest::GetResponseCode(a2);
  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
  {
    gaia::GaiaRequest::SetOperationCode(a2, 2003);
    gaia::Gaia::GetInstance();
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v34, a2);
    started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v34);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v34);
    return started;
  }
  OlympusStatus = gaia::Gaia_Olympus::GetOlympusStatus(self);
  v13 = OlympusStatus;
  if ( OlympusStatus != 0 )
  {
    gaia::GaiaRequest::SetResponseCode(a2, OlympusStatus);
    return v13;
  }
  else
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), (char *)&unk_1B15112, (int)(uintptr_t)(&v18) + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), (char *)&unk_1B15112, (int)(uintptr_t)(&v18) + 2);
    v24 = nullptr;
    v25 = 0;
    v28 = nullptr;
    v29 = nullptr;
    v30 = 0;
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v31, (const char *)a2);
    v16 = Json::Value::asBool((Json::Value::Self *)v31);
    Json::Value::Destroy((Json::Value::Self *)v31);
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v32, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v26, (int)(uintptr_t)(v32));
    g4_std::string::assign_str(&v22, &v26);
    v6 = (void *)(v26 - 12);
    if ( (uint32_t *)(v26 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    Json::Value::Destroy((Json::Value::Self *)v32);
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v33, (const char *)a2);
    v7 = Json::Value::asInt((Json::Value::Self *)v33);
    Json::Value::Destroy((Json::Value::Self *)v33);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "leaderboard_ro", (int)(uintptr_t)(&v18) + 3);
    AccessToken = gaia::Gaia_Olympus::GetAccessToken(self, a2, &v27, (int)(uintptr_t)(&v23));
    g4_std::string::Destroy(&v27);
    if ( AccessToken != 0 )
    {
      gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
    }
    else
    {
      Instance = gaia::Gaia::GetInstance();
      AccessToken = gaia::Olympus::RetrieveLeaderboardAroundCurrentUser(
                      *(gaia::BaseServiceManager::Self **)(Instance + 20),
                      (void **)&v24,
                      &v25,
                      (int)(uintptr_t)(&v22),
                      v16,
                      (int)(uintptr_t)(&v23),
                      v7,
                      (int)(uintptr_t)(a2));
      if ( AccessToken == 0 )
        AccessToken = gaia::BaseServiceManager::ParseMessages(v24, v25, (int)(uintptr_t)(&v28), 4);
      gaia::GaiaRequest::SetResponse(a2, (const std::vector<gaia::BaseJSONServiceResponse::Self> *)&v28);
      gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
      free(v24);
    }
    v9 = v29;
    v10 = (gaia::BaseJSONServiceResponse::Self *)v28;
    if ( v29 != v28 )
    {
      do
      {
        ptr = v10;
        v10 = (gaia::BaseJSONServiceResponse::Self *)((char *)v10 + 20);
        gaia::BaseJSONServiceResponse::Destroy(ptr);
      }
      while ( v9 != v10 );
      v10 = (gaia::BaseJSONServiceResponse::Self *)v28;
    }
    if ( v10 != nullptr )
      opDelete(v10);
    g4_std::string::Destroy(&v23);
    g4_std::string::Destroy(&v22);
    return AccessToken;
  }
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Olympus::DeleteEntry  (binary VA: 0x1479ac0)
// Original: gaia::Gaia_Olympus::DeleteEntry
// ----------------------------------------------------------------------------
int gaia::Gaia_Olympus::DeleteEntry(gaia::Gaia_Olympus::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  int v4;
  void *v5;
  Json::Value::Self *v6;
  char v7;
  void *v8;
  int AccessToken;
  int Instance;
  int result;
  void *v12;
  void *v13;
  void *v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_started;
  typedef char _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef void *_g4_t_v21;
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
  typedef uint8_t _g4_t_v32[96];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (4u + sizeof(_g4_t_v15)) > _g4_s0 ? (4u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v16)) > _g4_s1 ? (4u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_started)) > _g4_s2 ? (4u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v18)) > _g4_s3 ? (4u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v19)) > _g4_s4 ? (4u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v20)) > _g4_s5 ? (4u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v21)) > _g4_s6 ? (12u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (31u + sizeof(_g4_t_v22)) > _g4_s7 ? (31u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v23)) > _g4_s8 ? (32u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v24)) > _g4_s9 ? (44u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v25)) > _g4_s10 ? (48u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v26)) > _g4_s11 ? (52u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v27)) > _g4_s12 ? (56u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v28)) > _g4_s13 ? (60u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v29)) > _g4_s14 ? (64u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v30)) > _g4_s15 ? (68u + sizeof(_g4_t_v30)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v31)) > _g4_s16 ? (72u + sizeof(_g4_t_v31)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v32)) > _g4_s17 ? (76u + sizeof(_g4_t_v32)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 31u);
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

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "name", (int)(uintptr_t)(&v22));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v24), 4);
    v2 = (void *)(v24 - 12);
    if ( (uint32_t *)(v24 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "sort", (int)(uintptr_t)(&v23));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v25), 5);
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
        gaia::GaiaRequest::SetOperationCode(a2, 2008);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v32, a2);
        started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v32);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v32);
        return started;
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "name", (int)(uintptr_t)(&v23) + 1);
        v4 = gaia::GaiaRequest::opIndex(a2, &v27);
        Json::Value::asString((Json::Value::Self *)&v26, v4);
        v5 = (void *)(v27 - 12);
        if ( (uint32_t *)(v27 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v5);
        }
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "sort", (int)(uintptr_t)(&v23) + 2);
        v6 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v28);
        v7 = Json::Value::asBool(v6);
        v8 = (void *)(v28 - 12);
        if ( (uint32_t *)(v28 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
        {
          v18 = v7;
          g4_std::string::Rep::M_destroy(v8);
          v7 = v18;
        }
        v29 = (int)(uintptr_t)(&dword_213B814);
        if ( v7 != 0 )
          g4_std_compat::string_assign((int)(uintptr_t)(&v29), &off_1B70A38, 3u);
        else
          g4_std_compat::string_assign((int)(uintptr_t)(&v29), "desc", 4u);
        v30 = (int)(uintptr_t)(&dword_213B814);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "leaderboard", (int)(uintptr_t)(&v23) + 3);
        AccessToken = gaia::Gaia_Olympus::GetAccessToken(self, a2, &v31, (int)(uintptr_t)(&v30));
        v21 = (void *)(v31 - 12);
        if ( (uint32_t *)(v31 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
        {
          v20 = AccessToken;
          g4_std::string::Rep::M_destroy(v21);
          AccessToken = v20;
        }
        if ( AccessToken == 0 )
        {
          Instance = gaia::Gaia::GetInstance();
          AccessToken = gaia::Olympus::DeleteEntry(
                          *(gaia::BaseServiceManager::Self **)(Instance + 20),
                          (int)(uintptr_t)(&v30),
                          (int)(uintptr_t)(&v26),
                          (int)(uintptr_t)(&v29),
                          (int)(uintptr_t)(a2));
        }
        v15 = AccessToken;
        gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
        result = v15;
        v12 = (void *)(v30 - 12);
        if ( (uint32_t *)(v30 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v12);
          result = v15;
        }
        v13 = (void *)(v29 - 12);
        if ( (uint32_t *)(v29 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
        {
          v19 = result;
          g4_std::string::Rep::M_destroy(v13);
          result = v19;
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
// Function: gaia::Gaia_Olympus::DeleteEntry  (binary VA: 0x1479f30)
// Original: gaia::Gaia_Olympus::DeleteEntry
// ----------------------------------------------------------------------------
int gaia::Gaia_Olympus::DeleteEntry(gaia::Gaia_Olympus::Self *a1, int a2, uint32_t *a3, char a4, char a5, int a6, int a7)
{
  Json::Value::Self *v7;
  void *v8;
  Json::Value::Self *v9;
  void *v10;
  Json::Value::Self *v11;
  void *v12;
  int v13;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint8_t _g4_t_v20[16];
  typedef uint8_t _g4_t_v21[16];
  typedef uint8_t _g4_t_v22[16];
  typedef uint8_t _g4_t_v23[96];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (10u + sizeof(_g4_t_v15)) > _g4_s0 ? (10u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v16)) > _g4_s1 ? (12u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v17)) > _g4_s2 ? (16u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v18)) > _g4_s3 ? (20u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v19)) > _g4_s4 ? (24u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v20)) > _g4_s5 ? (28u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v21)) > _g4_s6 ? (44u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v22)) > _g4_s7 ? (60u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v23)) > _g4_s8 ? (76u + sizeof(_g4_t_v23)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 10u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 60u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 76u);

  gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v23);
  Json::Value::Construct((Json::Value::Self *)v20, a2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "accountType", (int)(uintptr_t)(&v15));
  v7 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(v23, &v17);
  Json::Value::opAssign(v7, (const Json::Value::Self *)v20);
  v8 = (void *)(v17 - 12);
  if ( (uint32_t *)(v17 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  Json::Value::Destroy((Json::Value::Self *)v20);
  Json::Value::Construct((int)(uintptr_t)(v21), a3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "name", (int)(uintptr_t)(&v15) + 1);
  v9 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(v23, &v18);
  Json::Value::opAssign(v9, (const Json::Value::Self *)v21);
  v10 = (void *)(v18 - 12);
  if ( (uint32_t *)(v18 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v10);
  }
  Json::Value::Destroy((Json::Value::Self *)v21);
  Json::Value::Construct((Json::Value::Self *)v22, a4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "sort", (int)(uintptr_t)(&v16));
  v11 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(v23, &v19);
  Json::Value::opAssign(v11, (const Json::Value::Self *)v22);
  v12 = (void *)(v19 - 12);
  if ( (uint32_t *)(v19 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v12);
  }
  Json::Value::Destroy((Json::Value::Self *)v22);
  if ( a5 != 0 )
    gaia::GaiaRequest::SetRunAsynchronous(v23, a6, a7);
  v13 = gaia::Gaia_Olympus::DeleteEntry(a1, (gaia::GaiaRequest::Self *)v23);
  gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v23);
  return v13;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Olympus::StartAndAuthorizeOlympus  (binary VA: 0x148f5c0)
// Original: gaia::Gaia_Olympus::StartAndAuthorizeOlympus
// ----------------------------------------------------------------------------
int gaia::Gaia_Olympus::StartAndAuthorizeOlympus(gaia::Gaia::Self *a1, int a2, uint32_t *a3)
{
  char IsInitialized;
  int result;
  int Instance;

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    result = gaia::Gaia_Olympus::GetOlympusStatus((gaia::Gaia_Olympus::Self *)(a1));
    if ( result == 0 )
    {
      Instance = gaia::Gaia::GetInstance();
      return gaia::Gaia::Authorize(Instance, a3, a2, 0, 0, 0);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Olympus::RetriveTopOfLeaderboard  (binary VA: 0x148f630)
// Original: gaia::Gaia_Olympus::RetriveTopOfLeaderboard
// ----------------------------------------------------------------------------
int gaia::Gaia_Olympus::RetriveTopOfLeaderboard(gaia::Gaia::Self *a1, int a2, uint32_t *a3, int a4, char a5, int a6, int a7, uint32_t *a8, char a9, int a10, int a11)
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
  Json::Value::Self *v21;
  int v22;
  int v23;
  int v24;
  int v25;
  typedef gaia::ThreadManager::Self *_g4_t_ptr;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef uint16_t _g4_t_v30[3];
  typedef char *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef uint8_t _g4_t_v34[16];
  typedef uint8_t _g4_t_v35[16];
  typedef uint8_t _g4_t_v36[16];
  typedef uint8_t _g4_t_v37[16];
  typedef uint8_t _g4_t_v38[16];
  typedef uint8_t _g4_t_v39[44];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (56u + sizeof(_g4_t_v27)) > _g4_s1 ? (56u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (56u + sizeof(_g4_t_v28)) > _g4_s2 ? (56u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v29)) > _g4_s3 ? (56u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (78u + sizeof(_g4_t_v30)) > _g4_s4 ? (78u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (84u + sizeof(_g4_t_v31)) > _g4_s5 ? (84u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (88u + sizeof(_g4_t_v32)) > _g4_s6 ? (88u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (92u + sizeof(_g4_t_v33)) > _g4_s7 ? (92u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (96u + sizeof(_g4_t_v34)) > _g4_s8 ? (96u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (112u + sizeof(_g4_t_v35)) > _g4_s9 ? (112u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (128u + sizeof(_g4_t_v36)) > _g4_s10 ? (128u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (144u + sizeof(_g4_t_v37)) > _g4_s11 ? (144u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (160u + sizeof(_g4_t_v38)) > _g4_s12 ? (160u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (176u + sizeof(_g4_t_v39)) > _g4_s13 ? (176u + sizeof(_g4_t_v39)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 56u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 56u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 56u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 78u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 84u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 88u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 92u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 96u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 112u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 128u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 144u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 160u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 176u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    result = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
    if ( result == 0 )
    {
      if ( a9 != 0 )
      {
        v15 = (uint32_t *)opNew(0x44u);
        *v15 = a11;
        v15[1] = a10;
        v15[2] = 2001;
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
        Json::Value::Construct((int)(uintptr_t)(v35), a3);
        v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "leaderboard_name");
        Json::Value::opAssign(v17, (const Json::Value::Self *)v35);
        Json::Value::Destroy((Json::Value::Self *)v35);
        v15[7] = a4;
        Json::Value::Construct((Json::Value::Self *)v36, a5);
        v18 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "isAscendent");
        Json::Value::opAssign(v18, (const Json::Value::Self *)v36);
        Json::Value::Destroy((Json::Value::Self *)v36);
        Json::Value::Construct((Json::Value::Self *)v37, a6);
        v19 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "offset");
        Json::Value::opAssign(v19, (const Json::Value::Self *)v37);
        Json::Value::Destroy((Json::Value::Self *)v37);
        Json::Value::Construct((Json::Value::Self *)v38, a7);
        v20 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "limit");
        Json::Value::opAssign(v20, (const Json::Value::Self *)v38);
        Json::Value::Destroy((Json::Value::Self *)v38);
        Json::Value::Construct((int)(uintptr_t)(v39), a8);
        v21 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v15 + 3), "for_entry_id");
        Json::Value::opAssign(v21, (const Json::Value::Self *)v39);
        Json::Value::Destroy((Json::Value::Self *)v39);
        v22 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(ptr));
        return gaia::ThreadManager::pushTask(v22, v15);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30[1]), "leaderboard_ro", (int)(uintptr_t)(v30));
        result = gaia::Gaia_Olympus::StartAndAuthorizeOlympus(a1, a2, &v30[1]);
        v14 = (void *)(*(uint32_t *)&v30[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v30[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v30[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          v29 = result;
          g4_std::string::Rep::M_destroy(v14);
          result = v29;
        }
        if ( result == 0 )
        {
          v23 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(&v33), v23);
          v24 = gaia::Gaia::GetInstance();
          v27 = gaia::Olympus::RetriveTopOfLeaderboard(
                  *(gaia::BaseServiceManager::Self **)(v24 + 20),
                  (void **)&v31,
                  &v32,
                  a5,
                  (int)(uintptr_t)(a3),
                  (int)(uintptr_t)(&v33),
                  a6,
                  a7,
                  (int)(uintptr_t)(a8),
                  0);
          g4_std::string::Destroy(&v33);
          v25 = v27;
          if ( v27 == 0 )
            v25 = gaia::BaseServiceManager::ParseMessages(v31, v32, a4, 4);
          v28 = v25;
          free(v31);
          return v28;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Olympus::ClearLeaderboard  (binary VA: 0x148fa10)
// Original: gaia::Gaia_Olympus::ClearLeaderboard
// ----------------------------------------------------------------------------
int gaia::Gaia_Olympus::ClearLeaderboard(gaia::Gaia::Self *a1, int a2, uint32_t *a3, char a4, int a5, int a6)
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
        v10[2] = 2004;
        Json::Value::Construct((int)(uintptr_t)(v10 + 3), nullptr);
        v10[7] = 0;
        v10[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v10 + 9), nullptr);
        v10[13] = 0;
        v10[14] = 0;
        v10[15] = 0;
        v10[16] = 0;
        Json::Value::Construct((int)(uintptr_t)(v21), a3);
        v11 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v10 + 3), "leaderboard_name");
        Json::Value::opAssign(v11, (const Json::Value::Self *)v21);
        Json::Value::Destroy((Json::Value::Self *)v21);
        Json::Value::Construct((Json::Value::Self *)v22, a2);
        v12 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v10 + 3), "accountType");
        Json::Value::opAssign(v12, (const Json::Value::Self *)v22);
        Json::Value::Destroy((Json::Value::Self *)v22);
        v13 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v16));
        return gaia::ThreadManager::pushTask(v13, v10);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19[1]), "leaderboard_clear", (int)(uintptr_t)(v19));
        result = gaia::Gaia_Olympus::StartAndAuthorizeOlympus(a1, a2, &v19[1]);
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
          v17 = (Json::Value::Self *)gaia::Olympus::ClearLeaderboard(
                                 *(gaia::BaseServiceManager::Self **)(v15 + 20),
                                 (int)(uintptr_t)(a3),
                                 (int)(uintptr_t)(&v20),
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
// Function: gaia::Gaia_Olympus::RetrieveLeaderboardAroundArbitraryEntry  (binary VA: 0x148fc60)
// Original: gaia::Gaia_Olympus::RetrieveLeaderboardAroundArbitraryEntry
// ----------------------------------------------------------------------------
int gaia::Gaia_Olympus::RetrieveLeaderboardAroundArbitraryEntry(gaia::Gaia::Self *a1, int a2, uint32_t *a3, int a4, uint32_t *a5, char a6, int a7, char a8, int a9, int a10)
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
  int v20;
  int v21;
  int v22;
  int v23;
  typedef gaia::ThreadManager::Self *_g4_t_ptr;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint16_t _g4_t_v28[3];
  typedef char *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef uint8_t _g4_t_v32[16];
  typedef uint8_t _g4_t_v33[16];
  typedef uint8_t _g4_t_v34[16];
  typedef uint8_t _g4_t_v35[16];
  typedef uint8_t _g4_t_v36[28];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (56u + sizeof(_g4_t_v25)) > _g4_s1 ? (56u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (56u + sizeof(_g4_t_v26)) > _g4_s2 ? (56u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v27)) > _g4_s3 ? (56u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (78u + sizeof(_g4_t_v28)) > _g4_s4 ? (78u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (84u + sizeof(_g4_t_v29)) > _g4_s5 ? (84u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (88u + sizeof(_g4_t_v30)) > _g4_s6 ? (88u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (92u + sizeof(_g4_t_v31)) > _g4_s7 ? (92u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (96u + sizeof(_g4_t_v32)) > _g4_s8 ? (96u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (112u + sizeof(_g4_t_v33)) > _g4_s9 ? (112u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (128u + sizeof(_g4_t_v34)) > _g4_s10 ? (128u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (144u + sizeof(_g4_t_v35)) > _g4_s11 ? (144u + sizeof(_g4_t_v35)) : _g4_s11,
    _g4_s13 = (160u + sizeof(_g4_t_v36)) > _g4_s12 ? (160u + sizeof(_g4_t_v36)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 56u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 56u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 78u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 84u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 88u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 92u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 96u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 112u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 128u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 144u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 160u);

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
        v14[2] = 2002;
        Json::Value::Construct((int)(uintptr_t)(v14 + 3), nullptr);
        v14[7] = 0;
        v14[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v14 + 9), nullptr);
        v14[13] = 0;
        v14[14] = 0;
        v14[15] = 0;
        v14[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v32, a2);
        v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "accountType");
        Json::Value::opAssign(v15, (const Json::Value::Self *)v32);
        Json::Value::Destroy((Json::Value::Self *)v32);
        Json::Value::Construct((int)(uintptr_t)(v33), a3);
        v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "leaderboard_name");
        Json::Value::opAssign(v16, (const Json::Value::Self *)v33);
        Json::Value::Destroy((Json::Value::Self *)v33);
        v14[7] = a4;
        Json::Value::Construct((int)(uintptr_t)(v34), a5);
        v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "entry_name");
        Json::Value::opAssign(v17, (const Json::Value::Self *)v34);
        Json::Value::Destroy((Json::Value::Self *)v34);
        Json::Value::Construct((Json::Value::Self *)v35, a6);
        v18 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "isAscendent");
        Json::Value::opAssign(v18, (const Json::Value::Self *)v35);
        Json::Value::Destroy((Json::Value::Self *)v35);
        Json::Value::Construct((Json::Value::Self *)v36, a7);
        v19 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "limit");
        Json::Value::opAssign(v19, (const Json::Value::Self *)v36);
        Json::Value::Destroy((Json::Value::Self *)v36);
        v20 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(ptr));
        return gaia::ThreadManager::pushTask(v20, v14);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28[1]), "leaderboard_ro", (int)(uintptr_t)(v28));
        result = gaia::Gaia_Olympus::StartAndAuthorizeOlympus(a1, a2, &v28[1]);
        v13 = (void *)(*(uint32_t *)&v28[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v28[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v28[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          v27 = result;
          g4_std::string::Rep::M_destroy(v13);
          result = v27;
        }
        if ( result == 0 )
        {
          v29 = nullptr;
          v30 = 0;
          v21 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(&v31), v21);
          v22 = gaia::Gaia::GetInstance();
          v25 = gaia::Olympus::RetrieveLeaderboardAroundArbitraryEntry(
                  *(gaia::BaseServiceManager::Self **)(v22 + 20),
                  (void **)&v29,
                  &v30,
                  (int)(uintptr_t)(a3),
                  (int)(uintptr_t)(a5),
                  (int)(uintptr_t)(&v31),
                  a6,
                  a7,
                  0);
          g4_std::string::Destroy(&v31);
          v23 = v25;
          if ( v25 == 0 )
            v23 = gaia::BaseServiceManager::ParseMessages(v29, v30, a4, 4);
          v26 = v23;
          free(v29);
          return v26;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Olympus::PostArbitraryEntry  (binary VA: 0x1490050)
// Original: gaia::Gaia_Olympus::PostArbitraryEntry
// ----------------------------------------------------------------------------
int gaia::Gaia_Olympus::PostArbitraryEntry(gaia::Gaia::Self *a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, int a7, char a8, uint32_t *a9, uint32_t *a10, uint32_t *a11, int a12, char a13, int a14, int a15)
{
  char IsInitialized;
  int result;
  int Instance;
  void *v18;
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
  Json::Value::Self *v29;
  int v30;
  int v31;
  int v32;
  typedef gaia::ThreadManager::Self *_g4_t_v33;
  typedef Json::Value::Self *_g4_t_v34;
  typedef Json::Value::Self *_g4_t_v35;
  typedef Json::Value::Self *_g4_t_v36;
  typedef uint8_t _g4_t_v37[7];
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef uint8_t _g4_t_v40[16];
  typedef uint8_t _g4_t_v41[16];
  typedef uint8_t _g4_t_v42[16];
  typedef uint8_t _g4_t_v43[16];
  typedef uint8_t _g4_t_v44[16];
  typedef uint8_t _g4_t_v45[16];
  typedef uint8_t _g4_t_v46[16];
  typedef uint8_t _g4_t_v47[16];
  typedef uint8_t _g4_t_v48[16];
  typedef uint8_t _g4_t_v49[44];
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (0u + sizeof(_g4_t_v33)) > _g4_s0 ? (0u + sizeof(_g4_t_v33)) : _g4_s0,
    _g4_s2 = (72u + sizeof(_g4_t_v34)) > _g4_s1 ? (72u + sizeof(_g4_t_v34)) : _g4_s1,
    _g4_s3 = (72u + sizeof(_g4_t_v35)) > _g4_s2 ? (72u + sizeof(_g4_t_v35)) : _g4_s2,
    _g4_s4 = (72u + sizeof(_g4_t_v36)) > _g4_s3 ? (72u + sizeof(_g4_t_v36)) : _g4_s3,
    _g4_s5 = (81u + sizeof(_g4_t_v37)) > _g4_s4 ? (81u + sizeof(_g4_t_v37)) : _g4_s4,
    _g4_s6 = (88u + sizeof(_g4_t_v38)) > _g4_s5 ? (88u + sizeof(_g4_t_v38)) : _g4_s5,
    _g4_s7 = (92u + sizeof(_g4_t_v39)) > _g4_s6 ? (92u + sizeof(_g4_t_v39)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v40)) > _g4_s7 ? (96u + sizeof(_g4_t_v40)) : _g4_s7,
    _g4_s9 = (112u + sizeof(_g4_t_v41)) > _g4_s8 ? (112u + sizeof(_g4_t_v41)) : _g4_s8,
    _g4_s10 = (128u + sizeof(_g4_t_v42)) > _g4_s9 ? (128u + sizeof(_g4_t_v42)) : _g4_s9,
    _g4_s11 = (144u + sizeof(_g4_t_v43)) > _g4_s10 ? (144u + sizeof(_g4_t_v43)) : _g4_s10,
    _g4_s12 = (160u + sizeof(_g4_t_v44)) > _g4_s11 ? (160u + sizeof(_g4_t_v44)) : _g4_s11,
    _g4_s13 = (176u + sizeof(_g4_t_v45)) > _g4_s12 ? (176u + sizeof(_g4_t_v45)) : _g4_s12,
    _g4_s14 = (192u + sizeof(_g4_t_v46)) > _g4_s13 ? (192u + sizeof(_g4_t_v46)) : _g4_s13,
    _g4_s15 = (208u + sizeof(_g4_t_v47)) > _g4_s14 ? (208u + sizeof(_g4_t_v47)) : _g4_s14,
    _g4_s16 = (224u + sizeof(_g4_t_v48)) > _g4_s15 ? (224u + sizeof(_g4_t_v48)) : _g4_s15,
    _g4_s17 = (240u + sizeof(_g4_t_v49)) > _g4_s16 ? (240u + sizeof(_g4_t_v49)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 0u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 72u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 72u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 72u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 81u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 88u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 92u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 96u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 112u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 128u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 144u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 160u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 176u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 192u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 208u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 224u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 240u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    result = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
    if ( result == 0 )
    {
      if ( a13 != 0 )
      {
        v19 = (uint32_t *)opNew(0x44u);
        *v19 = a15;
        v19[1] = a14;
        v19[2] = 2006;
        Json::Value::Construct((int)(uintptr_t)(v19 + 3), nullptr);
        v19[7] = 0;
        v19[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v19 + 9), nullptr);
        v19[13] = 0;
        v19[14] = 0;
        v19[15] = 0;
        v19[16] = 0;
        Json::Value::Construct((int)(uintptr_t)(v40), a3);
        v20 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v19 + 3), "leaderboard_name");
        Json::Value::opAssign(v20, (const Json::Value::Self *)v40);
        Json::Value::Destroy((Json::Value::Self *)v40);
        Json::Value::Construct((Json::Value::Self *)v41, a2);
        v21 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v19 + 3), "accountType");
        Json::Value::opAssign(v21, (const Json::Value::Self *)v41);
        Json::Value::Destroy((Json::Value::Self *)v41);
        Json::Value::Construct((int)(uintptr_t)(v42), a4);
        v22 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v19 + 3), "for_credential");
        Json::Value::opAssign(v22, (const Json::Value::Self *)v42);
        Json::Value::Destroy((Json::Value::Self *)v42);
        Json::Value::Construct((int)(uintptr_t)(v43), a5);
        v23 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v19 + 3), "entry_name");
        Json::Value::opAssign(v23, (const Json::Value::Self *)v43);
        Json::Value::Destroy((Json::Value::Self *)v43);
        Json::Value::Construct((int)(uintptr_t)(v44), a6);
        v24 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v19 + 3), "display_name");
        Json::Value::opAssign(v24, (const Json::Value::Self *)v44);
        Json::Value::Destroy((Json::Value::Self *)v44);
        Json::Value::Construct((Json::Value::Self *)v45, a7);
        v25 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v19 + 3), "score");
        Json::Value::opAssign(v25, (const Json::Value::Self *)v45);
        Json::Value::Destroy((Json::Value::Self *)v45);
        Json::Value::Construct((Json::Value::Self *)v46, a8);
        v26 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v19 + 3), "isAscendent");
        Json::Value::opAssign(v26, (const Json::Value::Self *)v46);
        Json::Value::Destroy((Json::Value::Self *)v46);
        Json::Value::Construct((int)(uintptr_t)(v47), a9);
        v27 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v19 + 3), "replaceScoreIf");
        Json::Value::opAssign(v27, (const Json::Value::Self *)v47);
        Json::Value::Destroy((Json::Value::Self *)v47);
        Json::Value::Construct((int)(uintptr_t)(v48), a10);
        v28 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v19 + 3), "expiration_date");
        Json::Value::opAssign(v28, (const Json::Value::Self *)v48);
        Json::Value::Destroy((Json::Value::Self *)v48);
        Json::Value::Construct((int)(uintptr_t)(v49), a11);
        v29 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v19 + 3), "expiration_duration");
        Json::Value::opAssign(v29, (const Json::Value::Self *)v49);
        Json::Value::Destroy((Json::Value::Self *)v49);
        v19[15] = a12;
        v30 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v33));
        return gaia::ThreadManager::pushTask(v30, v19);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37[3]), "leaderboard_override", (int)(uintptr_t)(v37));
        result = gaia::Gaia_Olympus::StartAndAuthorizeOlympus(a1, a2, &v37[3]);
        v18 = (void *)(*(uint32_t *)&v37[3] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v37[3] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v37[3] - 4), 0xFFFFFFFF) <= 0 )
        {
          v36 = (Json::Value::Self *)result;
          g4_std::string::Rep::M_destroy(v18);
          result = (int)(uintptr_t)(v36);
        }
        if ( result == 0 )
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "leaderboard", (int)(uintptr_t)(&v37[1]));
          v34 = (Json::Value::Self *)gaia::Gaia_Olympus::StartAndAuthorizeOlympus(a1, a2, &v38);
          g4_std::string::Destroy(&v38);
          result = (int)(uintptr_t)(v34);
          if ( v34 == nullptr )
          {
            v31 = gaia::Gaia::GetInstance();
            gaia::Gaia::GetJanusToken((int)(uintptr_t)(&v39), v31);
            v32 = gaia::Gaia::GetInstance();
            v35 = (Json::Value::Self *)gaia::Olympus::PostArbitraryEntry(
                                   *(gaia::BaseServiceManager::Self **)(v32 + 20),
                                   (int)(uintptr_t)(a3),
                                   (int)(uintptr_t)(a5),
                                   (int)(uintptr_t)(&v39),
                                   (int)(uintptr_t)(a4),
                                   (int)(uintptr_t)(a6),
                                   a7,
                                   (int)(uintptr_t)(a10),
                                   (int)(uintptr_t)(a11),
                                   a12,
                                   a8,
                                   (int)(uintptr_t)(a9),
                                   0);
            g4_std::string::Destroy(&v39);
            return (int)(uintptr_t)(v35);
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Olympus::PostEntry  (binary VA: 0x1490560)
// Original: gaia::Gaia_Olympus::PostEntry
// ----------------------------------------------------------------------------
int gaia::Gaia_Olympus::PostEntry(gaia::Gaia::Self *a1, int a2, uint32_t *a3, uint32_t *a4, int a5, char a6, uint32_t *a7, uint32_t *a8, uint32_t *a9, int a10, char a11, int a12, int a13)
{
  char IsInitialized;
  int result;
  int Instance;
  void *v16;
  uint32_t *v17;
  Json::Value::Self *v18;
  Json::Value::Self *v19;
  Json::Value::Self *v20;
  Json::Value::Self *v21;
  Json::Value::Self *v22;
  Json::Value::Self *v23;
  Json::Value::Self *v24;
  Json::Value::Self *v25;
  int v26;
  int v27;
  int v28;
  typedef gaia::ThreadManager::Self *_g4_t_v29;
  typedef Json::Value::Self *_g4_t_v30;
  typedef Json::Value::Self *_g4_t_v31;
  typedef uint16_t _g4_t_v32[3];
  typedef int _g4_t_v33;
  typedef uint8_t _g4_t_v34[16];
  typedef uint8_t _g4_t_v35[16];
  typedef uint8_t _g4_t_v36[16];
  typedef uint8_t _g4_t_v37[16];
  typedef uint8_t _g4_t_v38[16];
  typedef uint8_t _g4_t_v39[16];
  typedef uint8_t _g4_t_v40[16];
  typedef uint8_t _g4_t_v41[44];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (0u + sizeof(_g4_t_v29)) > _g4_s0 ? (0u + sizeof(_g4_t_v29)) : _g4_s0,
    _g4_s2 = (56u + sizeof(_g4_t_v30)) > _g4_s1 ? (56u + sizeof(_g4_t_v30)) : _g4_s1,
    _g4_s3 = (56u + sizeof(_g4_t_v31)) > _g4_s2 ? (56u + sizeof(_g4_t_v31)) : _g4_s2,
    _g4_s4 = (70u + sizeof(_g4_t_v32)) > _g4_s3 ? (70u + sizeof(_g4_t_v32)) : _g4_s3,
    _g4_s5 = (76u + sizeof(_g4_t_v33)) > _g4_s4 ? (76u + sizeof(_g4_t_v33)) : _g4_s4,
    _g4_s6 = (80u + sizeof(_g4_t_v34)) > _g4_s5 ? (80u + sizeof(_g4_t_v34)) : _g4_s5,
    _g4_s7 = (96u + sizeof(_g4_t_v35)) > _g4_s6 ? (96u + sizeof(_g4_t_v35)) : _g4_s6,
    _g4_s8 = (112u + sizeof(_g4_t_v36)) > _g4_s7 ? (112u + sizeof(_g4_t_v36)) : _g4_s7,
    _g4_s9 = (128u + sizeof(_g4_t_v37)) > _g4_s8 ? (128u + sizeof(_g4_t_v37)) : _g4_s8,
    _g4_s10 = (144u + sizeof(_g4_t_v38)) > _g4_s9 ? (144u + sizeof(_g4_t_v38)) : _g4_s9,
    _g4_s11 = (160u + sizeof(_g4_t_v39)) > _g4_s10 ? (160u + sizeof(_g4_t_v39)) : _g4_s10,
    _g4_s12 = (176u + sizeof(_g4_t_v40)) > _g4_s11 ? (176u + sizeof(_g4_t_v40)) : _g4_s11,
    _g4_s13 = (192u + sizeof(_g4_t_v41)) > _g4_s12 ? (192u + sizeof(_g4_t_v41)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 0u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 56u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 56u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 70u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 76u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 80u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 96u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 112u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 128u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 144u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 160u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 176u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 192u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    result = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
    if ( result == 0 )
    {
      if ( a11 != 0 )
      {
        v17 = (uint32_t *)opNew(0x44u);
        *v17 = a13;
        v17[1] = a12;
        v17[2] = 2007;
        Json::Value::Construct((int)(uintptr_t)(v17 + 3), nullptr);
        v17[7] = 0;
        v17[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v17 + 9), nullptr);
        v17[13] = 0;
        v17[14] = 0;
        v17[15] = 0;
        v17[16] = 0;
        Json::Value::Construct((int)(uintptr_t)(v34), a3);
        v18 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v17 + 3), "leaderboard_name");
        Json::Value::opAssign(v18, (const Json::Value::Self *)v34);
        Json::Value::Destroy((Json::Value::Self *)v34);
        Json::Value::Construct((Json::Value::Self *)v35, a2);
        v19 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v17 + 3), "accountType");
        Json::Value::opAssign(v19, (const Json::Value::Self *)v35);
        Json::Value::Destroy((Json::Value::Self *)v35);
        Json::Value::Construct((int)(uintptr_t)(v36), a4);
        v20 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v17 + 3), "display_name");
        Json::Value::opAssign(v20, (const Json::Value::Self *)v36);
        Json::Value::Destroy((Json::Value::Self *)v36);
        Json::Value::Construct((Json::Value::Self *)v37, a5);
        v21 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v17 + 3), "score");
        Json::Value::opAssign(v21, (const Json::Value::Self *)v37);
        Json::Value::Destroy((Json::Value::Self *)v37);
        Json::Value::Construct((Json::Value::Self *)v38, a6);
        v22 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v17 + 3), "isAscendent");
        Json::Value::opAssign(v22, (const Json::Value::Self *)v38);
        Json::Value::Destroy((Json::Value::Self *)v38);
        Json::Value::Construct((int)(uintptr_t)(v39), a7);
        v23 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v17 + 3), "replaceScoreIf");
        Json::Value::opAssign(v23, (const Json::Value::Self *)v39);
        Json::Value::Destroy((Json::Value::Self *)v39);
        Json::Value::Construct((int)(uintptr_t)(v40), a8);
        v24 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v17 + 3), "expiration_date");
        Json::Value::opAssign(v24, (const Json::Value::Self *)v40);
        Json::Value::Destroy((Json::Value::Self *)v40);
        Json::Value::Construct((int)(uintptr_t)(v41), a9);
        v25 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v17 + 3), "expiration_duration");
        Json::Value::opAssign(v25, (const Json::Value::Self *)v41);
        Json::Value::Destroy((Json::Value::Self *)v41);
        v17[15] = a10;
        v26 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v29));
        return gaia::ThreadManager::pushTask(v26, v17);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32[1]), "leaderboard", (int)(uintptr_t)(v32));
        result = gaia::Gaia_Olympus::StartAndAuthorizeOlympus(a1, a2, &v32[1]);
        v16 = (void *)(*(uint32_t *)&v32[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v32[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v32[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          v31 = (Json::Value::Self *)result;
          g4_std::string::Rep::M_destroy(v16);
          result = (int)(uintptr_t)(v31);
        }
        if ( result == 0 )
        {
          v27 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(&v33), v27);
          v28 = gaia::Gaia::GetInstance();
          v30 = (Json::Value::Self *)gaia::Olympus::PostEntry(
                                 *(gaia::BaseServiceManager::Self **)(v28 + 20),
                                 a6,
                                 (int)(uintptr_t)(a3),
                                 (int)(uintptr_t)(&v33),
                                 a5,
                                 (int)(uintptr_t)(a4),
                                 (int)(uintptr_t)(a7),
                                 (int)(uintptr_t)(a8),
                                 (int)(uintptr_t)(a9),
                                 a10,
                                 0);
          g4_std::string::Destroy(&v33);
          return (int)(uintptr_t)(v30);
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Olympus::RetrieveFriendLeaderboard  (binary VA: 0x14909a0)
// Original: gaia::Gaia_Olympus::RetrieveFriendLeaderboard
// ----------------------------------------------------------------------------
int gaia::Gaia_Olympus::RetrieveFriendLeaderboard(gaia::Gaia::Self *a1, int a2, uint32_t *a3, int a4, char a5, int a6, int a7, char a8, int a9, int a10)
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
  int v20;
  int v21;
  int v22;
  int v23;
  typedef gaia::ThreadManager::Self *_g4_t_ptr;
  typedef Json::Value::Self *_g4_t_v25;
  typedef Json::Value::Self *_g4_t_v26;
  typedef Json::Value::Self *_g4_t_v27;
  typedef Json::Value::Self *_g4_t_v28;
  typedef uint8_t _g4_t_v29[7];
  typedef int _g4_t_v30;
  typedef char *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef uint8_t _g4_t_v34[16];
  typedef uint8_t _g4_t_v35[16];
  typedef uint8_t _g4_t_v36[16];
  typedef uint8_t _g4_t_v37[16];
  typedef uint8_t _g4_t_v38[28];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (56u + sizeof(_g4_t_v25)) > _g4_s1 ? (56u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (56u + sizeof(_g4_t_v26)) > _g4_s2 ? (56u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v27)) > _g4_s3 ? (56u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v28)) > _g4_s4 ? (56u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (73u + sizeof(_g4_t_v29)) > _g4_s5 ? (73u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v30)) > _g4_s6 ? (80u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (84u + sizeof(_g4_t_v31)) > _g4_s7 ? (84u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (88u + sizeof(_g4_t_v32)) > _g4_s8 ? (88u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (92u + sizeof(_g4_t_v33)) > _g4_s9 ? (92u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (96u + sizeof(_g4_t_v34)) > _g4_s10 ? (96u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (112u + sizeof(_g4_t_v35)) > _g4_s11 ? (112u + sizeof(_g4_t_v35)) : _g4_s11,
    _g4_s13 = (128u + sizeof(_g4_t_v36)) > _g4_s12 ? (128u + sizeof(_g4_t_v36)) : _g4_s12,
    _g4_s14 = (144u + sizeof(_g4_t_v37)) > _g4_s13 ? (144u + sizeof(_g4_t_v37)) : _g4_s13,
    _g4_s15 = (160u + sizeof(_g4_t_v38)) > _g4_s14 ? (160u + sizeof(_g4_t_v38)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 56u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 56u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 56u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 73u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 80u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 84u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 88u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 92u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 96u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 112u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 128u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 144u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 160u);

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
        v14[2] = 2005;
        Json::Value::Construct((int)(uintptr_t)(v14 + 3), nullptr);
        v14[7] = 0;
        v14[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v14 + 9), nullptr);
        v14[13] = 0;
        v14[14] = 0;
        v14[15] = 0;
        v14[16] = 0;
        Json::Value::Construct((int)(uintptr_t)(v34), a3);
        v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "leaderboard_name");
        Json::Value::opAssign(v15, (const Json::Value::Self *)v34);
        Json::Value::Destroy((Json::Value::Self *)v34);
        Json::Value::Construct((Json::Value::Self *)v35, a2);
        v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "accountType");
        Json::Value::opAssign(v16, (const Json::Value::Self *)v35);
        Json::Value::Destroy((Json::Value::Self *)v35);
        v14[7] = a4;
        Json::Value::Construct((Json::Value::Self *)v36, a5);
        v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "isAscendent");
        Json::Value::opAssign(v17, (const Json::Value::Self *)v36);
        Json::Value::Destroy((Json::Value::Self *)v36);
        Json::Value::Construct((Json::Value::Self *)v37, a6);
        v18 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "limit");
        Json::Value::opAssign(v18, (const Json::Value::Self *)v37);
        Json::Value::Destroy((Json::Value::Self *)v37);
        Json::Value::Construct((Json::Value::Self *)v38, a7);
        v19 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "offset");
        Json::Value::opAssign(v19, (const Json::Value::Self *)v38);
        Json::Value::Destroy((Json::Value::Self *)v38);
        v20 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(ptr));
        return gaia::ThreadManager::pushTask(v20, v14);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29[3]), "leaderboard_ro", (int)(uintptr_t)(v29));
        result = gaia::Gaia_Olympus::StartAndAuthorizeOlympus(a1, a2, &v29[3]);
        v13 = (void *)(*(uint32_t *)&v29[3] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v29[3] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v29[3] - 4), 0xFFFFFFFF) <= 0 )
        {
          v28 = (Json::Value::Self *)result;
          g4_std::string::Rep::M_destroy(v13);
          result = (int)(uintptr_t)(v28);
        }
        if ( result == 0 )
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "social", (int)(uintptr_t)(&v29[1]));
          v25 = (Json::Value::Self *)gaia::Gaia_Olympus::StartAndAuthorizeOlympus(a1, a2, &v30);
          g4_std::string::Destroy(&v30);
          result = (int)(uintptr_t)(v25);
          if ( v25 == nullptr )
          {
            v21 = gaia::Gaia::GetInstance();
            gaia::Gaia::GetJanusToken((int)(uintptr_t)(&v33), v21);
            v22 = gaia::Gaia::GetInstance();
            v26 = (Json::Value::Self *)gaia::Olympus::RetrieveFriendLeaderboard(
                                   *(gaia::BaseServiceManager::Self **)(v22 + 20),
                                   (void **)&v31,
                                   &v32,
                                   a5,
                                   (int)(uintptr_t)(a3),
                                   (int)(uintptr_t)(&v33),
                                   a7,
                                   a6,
                                   0);
            g4_std::string::Destroy(&v33);
            v23 = (int)(uintptr_t)(v26);
            if ( v26 == nullptr )
              v23 = gaia::BaseServiceManager::ParseMessages(v31, v32, a4, 4);
            v27 = (Json::Value::Self *)v23;
            free(v31);
            return (int)(uintptr_t)(v27);
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Olympus::RetrieveLeaderboardAroundCurrentUser  (binary VA: 0x1490db0)
// Original: gaia::Gaia_Olympus::RetrieveLeaderboardAroundCurrentUser
// ----------------------------------------------------------------------------
int gaia::Gaia_Olympus::RetrieveLeaderboardAroundCurrentUser(gaia::Gaia::Self *a1, int a2, uint32_t *a3, int a4, char a5, int a6, char a7, int a8, int a9)
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
  int v18;
  int v19;
  int v20;
  int v21;
  typedef gaia::ThreadManager::Self *_g4_t_ptr;
  typedef Json::Value::Self *_g4_t_v23;
  typedef Json::Value::Self *_g4_t_v24;
  typedef Json::Value::Self *_g4_t_v25;
  typedef uint16_t _g4_t_v26[3];
  typedef char *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef uint8_t _g4_t_v30[16];
  typedef uint8_t _g4_t_v31[16];
  typedef uint8_t _g4_t_v32[16];
  typedef uint8_t _g4_t_v33[28];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v23)) > _g4_s1 ? (40u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v24)) > _g4_s2 ? (40u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v25)) > _g4_s3 ? (40u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (62u + sizeof(_g4_t_v26)) > _g4_s4 ? (62u + sizeof(_g4_t_v26)) : _g4_s4,
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
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 62u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 68u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 72u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 76u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 80u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 96u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 112u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 128u);

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
        v13[2] = 2003;
        Json::Value::Construct((int)(uintptr_t)(v13 + 3), nullptr);
        v13[7] = 0;
        v13[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v13 + 9), nullptr);
        v13[13] = 0;
        v13[14] = 0;
        v13[15] = 0;
        v13[16] = 0;
        Json::Value::Construct((int)(uintptr_t)(v30), a3);
        v14 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "leaderboard_name");
        Json::Value::opAssign(v14, (const Json::Value::Self *)v30);
        Json::Value::Destroy((Json::Value::Self *)v30);
        Json::Value::Construct((Json::Value::Self *)v31, a2);
        v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "accountType");
        Json::Value::opAssign(v15, (const Json::Value::Self *)v31);
        Json::Value::Destroy((Json::Value::Self *)v31);
        v13[7] = a4;
        Json::Value::Construct((Json::Value::Self *)v32, a5);
        v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "isAscendent");
        Json::Value::opAssign(v16, (const Json::Value::Self *)v32);
        Json::Value::Destroy((Json::Value::Self *)v32);
        Json::Value::Construct((Json::Value::Self *)v33, a6);
        v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "limit");
        Json::Value::opAssign(v17, (const Json::Value::Self *)v33);
        Json::Value::Destroy((Json::Value::Self *)v33);
        v18 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(ptr));
        return gaia::ThreadManager::pushTask(v18, v13);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26[1]), "leaderboard_ro", (int)(uintptr_t)(v26));
        result = gaia::Gaia_Olympus::StartAndAuthorizeOlympus(a1, a2, &v26[1]);
        v12 = (void *)(*(uint32_t *)&v26[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v26[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v26[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          v25 = (Json::Value::Self *)result;
          g4_std::string::Rep::M_destroy(v12);
          result = (int)(uintptr_t)(v25);
        }
        if ( result == 0 )
        {
          v27 = nullptr;
          v28 = 0;
          v19 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(&v29), v19);
          v20 = gaia::Gaia::GetInstance();
          v23 = (Json::Value::Self *)gaia::Olympus::RetrieveLeaderboardAroundCurrentUser(
                                 *(gaia::BaseServiceManager::Self **)(v20 + 20),
                                 (void **)&v27,
                                 &v28,
                                 (int)(uintptr_t)(a3),
                                 a5,
                                 (int)(uintptr_t)(&v29),
                                 a6,
                                 0);
          g4_std::string::Destroy(&v29);
          v21 = (int)(uintptr_t)(v23);
          if ( v23 == nullptr )
            v21 = gaia::BaseServiceManager::ParseMessages(v27, v28, a4, 4);
          v24 = (Json::Value::Self *)v21;
          free(v27);
          return (int)(uintptr_t)(v24);
        }
      }
    }
  }
  return result;
}


