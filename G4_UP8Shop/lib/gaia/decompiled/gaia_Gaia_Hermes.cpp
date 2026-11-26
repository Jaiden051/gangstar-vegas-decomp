#include "Core/Utils/DecompTypes.h"
#include "gaia_Gaia_Hermes.h"

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hermes::CheckActiveNotification  (binary VA: 0x1442da0)
// Original: gaia::Gaia_Hermes::CheckActiveNotification
// ----------------------------------------------------------------------------
int gaia::Gaia_Hermes::CheckActiveNotification()
{
  return 4;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hermes::CancelRequest  (binary VA: 0x1445850)
// Original: gaia::Gaia_Hermes::CancelRequest
// ----------------------------------------------------------------------------
int gaia::Gaia_Hermes::CancelRequest(glwebtools::Mutex::Self *a1, int a2)
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
    if ( *(uint32_t *)(gaia::Gaia::GetInstance() + 12) != 0 )
    {
      if ( a2 == 1 )
      {
        Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v7));
        gaia::ThreadManager::CancelRequest(Instance, 3500);
      }
      v3 = gaia::Gaia::GetInstance();
      v2 = gaia::BaseServiceManager::CancelRequest(*(uint32_t *)(v3 + 12), a2);
      glwebtools::Mutex::Unlock(a1);
    }
    else
    {
      v6 = gaia::Gaia::GetInstance();
      v2 = 0;
      gaia::BaseServiceManager::CancelRequest(*(uint32_t *)(v6 + 48), 3008);
      glwebtools::Mutex::Unlock(a1);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hermes::GetHermesStatus  (binary VA: 0x1451690)
// Original: gaia::Gaia_Hermes::GetHermesStatus
// ----------------------------------------------------------------------------
int gaia::Gaia_Hermes::GetHermesStatus(gaia::Gaia_Hermes::Self *self)
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
    v2 = (glwebtools::Mutex::Self *)(gaia::Gaia::GetInstance() + 416);
    glwebtools::Mutex::Lock(v2);
    ServiceUrl = 0;
    if ( *(uint32_t *)(gaia::Gaia::GetInstance() + 12) == 0 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v7) + 1, (char *)&unk_1B15112, (int)(uintptr_t)(v7));
      Instance = gaia::Gaia::GetInstance();
      ServiceUrl = gaia::Gaia::GetServiceUrl(Instance, "message", (int)(uintptr_t)(v7) + 1, 0, 0, 0);
      glwebtools::Mutex::Lock(self);
      if ( ServiceUrl != 0
        || (v6 = gaia::Gaia::GetInstance(),
            v5 = (gaia::BaseServiceManager::Self *)opNew(0x9Cu),
            gaia::Hermes::Construct(v5, (int)(uintptr_t)(v7) + 1, v6 + 240),
            *(uint32_t *)(gaia::Gaia::GetInstance() + 12) = (uint32_t)(uintptr_t)(v5),
            *(uint32_t *)(gaia::Gaia::GetInstance() + 12) == 0) )
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
// Function: gaia::Gaia_Hermes::StartAndAuthorizeHermes  (binary VA: 0x147b000)
// Original: gaia::Gaia_Hermes::StartAndAuthorizeHermes
// ----------------------------------------------------------------------------
int gaia::Gaia_Hermes::StartAndAuthorizeHermes(gaia::Gaia_Hermes::Self *self, gaia::GaiaRequest::Self *a2)
{
  int HermesStatus;
  int v3;
  int Instance;
  uint8_t v6[68];

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    HermesStatus = gaia::Gaia_Hermes::GetHermesStatus(self);
    v3 = HermesStatus;
    if ( HermesStatus != 0 )
    {
      gaia::GaiaRequest::SetResponseCode(a2, HermesStatus);
    }
    else
    {
      gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v6, a2);
      Instance = gaia::Gaia::GetInstance();
      v3 = gaia::Gaia::Authorize(Instance, (gaia::GaiaRequest::Self *)v6);
      gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v6);
    }
  }
  else
  {
    v3 = -21;
    gaia::GaiaRequest::SetResponseCode(a2, -21);
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hermes::GetAccessToken  (binary VA: 0x147b0b0)
// Original: gaia::Gaia_Hermes::GetAccessToken
// ----------------------------------------------------------------------------
int gaia::Gaia_Hermes::GetAccessToken(gaia::Gaia::Self *a1, gaia::GaiaRequest::Self *a2, uint32_t *a3, int a4)
{
  void *v4;
  void *v5;
  Json::Value::Self *v6;
  void *v7;
  int v8;
  int HermesStatus;
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
      HermesStatus = gaia::Gaia_Hermes::GetHermesStatus((gaia::Gaia_Hermes::Self *)(a1));
      if ( HermesStatus != 0 )
      {
        v8 = HermesStatus;
        gaia::GaiaRequest::SetResponseCode(a2, HermesStatus);
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
        v8 = gaia::Gaia_Hermes::StartAndAuthorizeHermes(a1, a2);
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
// Function: gaia::Gaia_Hermes::ListRegisteredDevices  (binary VA: 0x147b390)
// Original: gaia::Gaia_Hermes::ListRegisteredDevices
// ----------------------------------------------------------------------------
int gaia::Gaia_Hermes::ListRegisteredDevices(gaia::Gaia_Hermes::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  int HermesStatus;
  int started;
  void *v5;
  int Instance;
  gaia::BaseJSONServiceResponse::Self *v7;
  gaia::BaseJSONServiceResponse::Self *v8;
  void *v9;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_ptr;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef char *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v20;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint8_t _g4_t_v23[16];
  typedef uint8_t _g4_t_v24[96];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v12)) > _g4_s1 ? (44u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v13)) > _g4_s2 ? (44u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (55u + sizeof(_g4_t_v14)) > _g4_s3 ? (55u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v15)) > _g4_s4 ? (60u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v16)) > _g4_s5 ? (64u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v17)) > _g4_s6 ? (68u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v18)) > _g4_s7 ? (72u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v19)) > _g4_s8 ? (76u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v20)) > _g4_s9 ? (80u + sizeof(_g4_t_v20)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v21)) > _g4_s10 ? (84u + sizeof(_g4_t_v21)) : _g4_s10,
    _g4_s12 = (88u + sizeof(_g4_t_v22)) > _g4_s11 ? (88u + sizeof(_g4_t_v22)) : _g4_s11,
    _g4_s13 = (92u + sizeof(_g4_t_v23)) > _g4_s12 ? (92u + sizeof(_g4_t_v23)) : _g4_s12,
    _g4_s14 = (108u + sizeof(_g4_t_v24)) > _g4_s13 ? (108u + sizeof(_g4_t_v24)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 44u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 55u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 60u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 64u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 68u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 72u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 76u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 80u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 84u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 88u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 92u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 108u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    started = -21;
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return started;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "transport", (int)(uintptr_t)(&v14));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v15), 1);
  v2 = (void *)(v15 - 12);
  if ( (uint32_t *)(v15 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
  {
    if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
    {
      gaia::GaiaRequest::SetOperationCode(a2, 3511);
      gaia::Gaia::GetInstance();
      gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v24, a2);
      started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v24);
      gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v24);
    }
    else
    {
      HermesStatus = gaia::Gaia_Hermes::GetHermesStatus(self);
      started = HermesStatus;
      if ( HermesStatus != 0 )
      {
        gaia::GaiaRequest::SetResponseCode(a2, HermesStatus);
      }
      else
      {
        v16 = (int)(uintptr_t)(&dword_213B814);
        v20 = nullptr;
        v21 = nullptr;
        v22 = 0;
        gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v23, (const char *)a2);
        v12 = Json::Value::asInt((Json::Value::Self *)v23);
        Json::Value::Destroy((Json::Value::Self *)v23);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "message", (int)(uintptr_t)(&v14) + 1);
        started = gaia::Gaia_Hermes::GetAccessToken((gaia::Gaia::Self *)(self), a2, (uint32_t *)(&v17), (int)(uintptr_t)(&v16));
        v5 = (void *)(v17 - 12);
        if ( (uint32_t *)(v17 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v5);
        }
        if ( started != 0 )
        {
          gaia::GaiaRequest::SetResponseCode(a2, started);
        }
        else
        {
          v18 = nullptr;
          v19 = 0;
          Instance = gaia::Gaia::GetInstance();
          started = gaia::Hermes::ListRegisteredDevices(
                      *(gaia::BaseServiceManager::Self **)(Instance + 12),
                      v12,
                      (int)(uintptr_t)(&v16),
                      (void **)&v18,
                      &v19,
                      (int)(uintptr_t)(a2));
          if ( started == 0 )
            gaia::BaseServiceManager::ParseMessages(v18, v19, (int)(uintptr_t)(&v20), 3);
          gaia::GaiaRequest::SetResponse(a2, (const std::vector<gaia::BaseJSONServiceResponse::Self> *)&v20);
          gaia::GaiaRequest::SetResponseCode(a2, started);
          free(v18);
        }
        v7 = v20;
        if ( v21 != v20 )
        {
          v13 = started;
          v8 = v21;
          do
          {
            ptr = v7;
            v7 = (gaia::BaseJSONServiceResponse::Self *)((char *)v7 + 20);
            gaia::BaseJSONServiceResponse::Destroy(ptr);
          }
          while ( v8 != v7 );
          started = v13;
          v7 = v20;
        }
        if ( v7 != nullptr )
          opDelete(v7);
        v9 = (void *)(v16 - 12);
        if ( (uint32_t *)(v16 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v9);
        }
      }
    }
    return started;
  }
  return gaia::GaiaRequest::GetResponseCode(a2);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hermes::ShowSubscriptions  (binary VA: 0x147b6f0)
// Original: gaia::Gaia_Hermes::ShowSubscriptions
// ----------------------------------------------------------------------------
int gaia::Gaia_Hermes::ShowSubscriptions(gaia::Gaia_Hermes::Self *self, gaia::GaiaRequest::Self *a2)
{
  int HermesStatus;
  int v3;
  int AccessToken;
  void *v5;
  int Instance;
  gaia::BaseJSONServiceResponse::Self *v7;
  gaia::BaseJSONServiceResponse::Self *v8;
  void *v9;
  int started;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_ptr;
  typedef int _g4_t_v13;
  typedef uint8_t _g4_t_v14[7];
  typedef int _g4_t_v15;
  typedef char *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v18;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint8_t _g4_t_v21[96];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v13)) > _g4_s1 ? (44u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (61u + sizeof(_g4_t_v14)) > _g4_s2 ? (61u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (68u + sizeof(_g4_t_v15)) > _g4_s3 ? (68u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (72u + sizeof(_g4_t_v16)) > _g4_s4 ? (72u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (76u + sizeof(_g4_t_v17)) > _g4_s5 ? (76u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v18)) > _g4_s6 ? (80u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (84u + sizeof(_g4_t_v19)) > _g4_s7 ? (84u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (88u + sizeof(_g4_t_v20)) > _g4_s8 ? (88u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (92u + sizeof(_g4_t_v21)) > _g4_s9 ? (92u + sizeof(_g4_t_v21)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 61u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 68u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 72u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 76u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 80u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 84u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 88u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 92u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    AccessToken = -21;
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return AccessToken;
  }
  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
  {
    gaia::GaiaRequest::SetOperationCode(a2, 3510);
    gaia::Gaia::GetInstance();
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v21, a2);
    started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v21);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v21);
    return started;
  }
  else
  {
    HermesStatus = gaia::Gaia_Hermes::GetHermesStatus(self);
    v3 = HermesStatus;
    if ( HermesStatus == 0 )
    {
      v18 = nullptr;
      v19 = nullptr;
      v20 = 0;
      *(uint32_t *)&v14[3] = (uint32_t)(uintptr_t)(&dword_213B814);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "message", (int)(uintptr_t)(v14));
      AccessToken = gaia::Gaia_Hermes::GetAccessToken((gaia::Gaia::Self *)(self), a2, (uint32_t *)(&v15), (int)(uintptr_t)(&v14[3]));
      v5 = (void *)(v15 - 12);
      if ( (uint32_t *)(v15 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v5);
      }
      if ( AccessToken == 0 )
      {
        v16 = nullptr;
        v17 = 0;
        Instance = gaia::Gaia::GetInstance();
        AccessToken = gaia::Hermes::ShowSubscriptions(
                        *(gaia::BaseServiceManager::Self **)(Instance + 12),
                        (int)(uintptr_t)(&v14[3]),
                        (void **)&v16,
                        &v17,
                        (int)(uintptr_t)(a2));
        if ( AccessToken == 0 )
          gaia::BaseServiceManager::ParseMessages(v16, v17, (int)(uintptr_t)(&v18), 2);
        free(v16);
        gaia::GaiaRequest::SetResponse(a2, (const std::vector<gaia::BaseJSONServiceResponse::Self> *)&v18);
      }
      gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
      v7 = v18;
      if ( v19 != v18 )
      {
        v13 = AccessToken;
        v8 = v19;
        do
        {
          ptr = v7;
          v7 = (gaia::BaseJSONServiceResponse::Self *)((char *)v7 + 20);
          gaia::BaseJSONServiceResponse::Destroy(ptr);
        }
        while ( v8 != v7 );
        AccessToken = v13;
        v7 = v18;
      }
      if ( v7 != nullptr )
        opDelete(v7);
      v9 = (void *)(*(uint32_t *)&v14[3] - 12);
      if ( (uint32_t *)(*(uint32_t *)&v14[3] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v14[3] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v9);
      }
      return AccessToken;
    }
    gaia::GaiaRequest::SetResponseCode(a2, HermesStatus);
    return v3;
  }
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hermes::UpdateListSubscription  (binary VA: 0x147b980)
// Original: gaia::Gaia_Hermes::UpdateListSubscription
// ----------------------------------------------------------------------------
int gaia::Gaia_Hermes::UpdateListSubscription(gaia::Gaia_Hermes::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  int HermesStatus;
  int v5;
  void *v6;
  void *v7;
  Json::Value::Self *v8;
  void *v9;
  int AccessToken;
  int result;
  void *v12;
  void *v13;
  int Instance;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_started;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef char *_g4_t_v20;
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
  typedef uint8_t _g4_t_v32[96];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (4u + sizeof(_g4_t_v15)) > _g4_s0 ? (4u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v16)) > _g4_s1 ? (4u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_started)) > _g4_s2 ? (4u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v18)) > _g4_s3 ? (4u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v19)) > _g4_s4 ? (4u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v20)) > _g4_s5 ? (8u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (15u + sizeof(_g4_t_v21)) > _g4_s6 ? (15u + sizeof(_g4_t_v21)) : _g4_s6,
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
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 15u);
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
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "unsubscribe", (int)(uintptr_t)(&v23));
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
        gaia::GaiaRequest::SetOperationCode(a2, 3509);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v32, a2);
        started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v32);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v32);
        return started;
      }
      else
      {
        HermesStatus = gaia::Gaia_Hermes::GetHermesStatus(self);
        if ( HermesStatus != 0 )
        {
          v18 = HermesStatus;
          gaia::GaiaRequest::SetResponseCode(a2, HermesStatus);
          return v18;
        }
        else
        {
          v26 = (int)(uintptr_t)(&dword_213B814);
          v27 = (int)(uintptr_t)(&dword_213B814);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "name", (int)(uintptr_t)(&v23) + 1);
          v5 = gaia::GaiaRequest::opIndex(a2, &v28);
          Json::Value::asString((Json::Value::Self *)&v29, v5);
          g4_std::string::assign_str(&v26, &v29);
          v6 = (void *)(v29 - 12);
          if ( (uint32_t *)(v29 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v6);
          }
          v7 = (void *)(v28 - 12);
          if ( (uint32_t *)(v28 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v7);
          }
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "unsubscribe", (int)(uintptr_t)(&v23) + 2);
          v8 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v30);
          v21 = Json::Value::asBool(v8);
          v9 = (void *)(v30 - 12);
          if ( (uint32_t *)(v30 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v9);
          }
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "message", (int)(uintptr_t)(&v23) + 3);
          AccessToken = gaia::Gaia_Hermes::GetAccessToken((gaia::Gaia::Self *)(self), a2, (uint32_t *)(&v31), (int)(uintptr_t)(&v27));
          v20 = (char *)(v31 - 12);
          if ( (uint32_t *)(v31 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
          {
            v19 = AccessToken;
            g4_std::string::Rep::M_destroy(v20);
            AccessToken = v19;
          }
          if ( AccessToken == 0 )
          {
            Instance = gaia::Gaia::GetInstance();
            AccessToken = gaia::Hermes::UpdateListSubscription(
                            *(gaia::BaseServiceManager::Self **)(Instance + 12),
                            (int)(uintptr_t)(&v26),
                            (int)(uintptr_t)(&v27),
                            v21,
                            (int)(uintptr_t)(a2));
          }
          v15 = AccessToken;
          gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
          result = v15;
          v12 = (void *)(v27 - 12);
          if ( (uint32_t *)(v27 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v12);
            result = v15;
          }
          v13 = (void *)(v26 - 12);
          if ( (uint32_t *)(v26 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
          {
            v16 = result;
            g4_std::string::Rep::M_destroy(v13);
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
// Function: gaia::Gaia_Hermes::UnSubscribeFromList  (binary VA: 0x147bdf0)
// Original: gaia::Gaia_Hermes::UnSubscribeFromList
// ----------------------------------------------------------------------------
int gaia::Gaia_Hermes::UnSubscribeFromList(gaia::Gaia_Hermes::Self *self, gaia::GaiaRequest::Self *a2)
{
  Json::Value::Self *v2;
  void *v3;
  typedef uint16_t _g4_t_v5[3];
  typedef uint8_t _g4_t_v6[28];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (10u + sizeof(_g4_t_v5)) > _g4_s0 ? (10u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v6)) > _g4_s1 ? (16u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 10u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    Json::Value::Construct((Json::Value::Self *)v6, true);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v5[1]), "unsubscribe", (int)(uintptr_t)(v5));
    v2 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v5[1]);
    Json::Value::opAssign(v2, (const Json::Value::Self *)v6);
    v3 = (void *)(*(uint32_t *)&v5[1] - 12);
    if ( (uint32_t *)(*(uint32_t *)&v5[1] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v5[1] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    Json::Value::Destroy((Json::Value::Self *)v6);
    return gaia::Gaia_Hermes::UpdateListSubscription(self, a2);
  }
  else
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hermes::SubscribeToList  (binary VA: 0x147bef0)
// Original: gaia::Gaia_Hermes::SubscribeToList
// ----------------------------------------------------------------------------
int gaia::Gaia_Hermes::SubscribeToList(gaia::Gaia_Hermes::Self *self, gaia::GaiaRequest::Self *a2)
{
  Json::Value::Self *v2;
  void *v3;
  typedef uint16_t _g4_t_v5[3];
  typedef uint8_t _g4_t_v6[28];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (10u + sizeof(_g4_t_v5)) > _g4_s0 ? (10u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v6)) > _g4_s1 ? (16u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 10u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    Json::Value::Construct((Json::Value::Self *)v6, false);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v5[1]), "unsubscribe", (int)(uintptr_t)(v5));
    v2 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v5[1]);
    Json::Value::opAssign(v2, (const Json::Value::Self *)v6);
    v3 = (void *)(*(uint32_t *)&v5[1] - 12);
    if ( (uint32_t *)(*(uint32_t *)&v5[1] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v5[1] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    Json::Value::Destroy((Json::Value::Self *)v6);
    return gaia::Gaia_Hermes::UpdateListSubscription(self, a2);
  }
  else
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hermes::DeleteAllMessages  (binary VA: 0x147bff0)
// Original: gaia::Gaia_Hermes::DeleteAllMessages
// ----------------------------------------------------------------------------
int gaia::Gaia_Hermes::DeleteAllMessages(gaia::Gaia_Hermes::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  int HermesStatus;
  Json::Value::Self *v5;
  int v6;
  void *v7;
  int Instance;
  int v9;
  void *v10;
  typedef int _g4_t_AccessToken;
  typedef int _g4_t_v13;
  typedef int _g4_t_started;
  typedef int _g4_t_v15;
  typedef char *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint8_t _g4_t_v26[96];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (8u + sizeof(_g4_t_AccessToken)) > _g4_s0 ? (8u + sizeof(_g4_t_AccessToken)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_started)) > _g4_s2 ? (8u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v15)) > _g4_s3 ? (8u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v16)) > _g4_s4 ? (12u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (23u + sizeof(_g4_t_v17)) > _g4_s5 ? (23u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v18)) > _g4_s6 ? (24u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v19)) > _g4_s7 ? (32u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v20)) > _g4_s8 ? (36u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v21)) > _g4_s9 ? (40u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v22)) > _g4_s10 ? (44u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v23)) > _g4_s11 ? (48u + sizeof(_g4_t_v23)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v24)) > _g4_s12 ? (52u + sizeof(_g4_t_v24)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v25)) > _g4_s13 ? (56u + sizeof(_g4_t_v25)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v26)) > _g4_s14 ? (60u + sizeof(_g4_t_v26)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_AccessToken &AccessToken = *reinterpret_cast<_g4_t_AccessToken *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 23u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 44u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 56u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 60u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "transport", (int)(uintptr_t)(&v17));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v19), 1);
    v2 = (void *)(v19 - 12);
    if ( (uint32_t *)(v19 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "msgids", (int)(uintptr_t)(&v18));
    gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v20), 4);
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
        gaia::GaiaRequest::SetOperationCode(a2, 3508);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v26, a2);
        started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v26);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v26);
        return started;
      }
      else
      {
        HermesStatus = gaia::Gaia_Hermes::GetHermesStatus(self);
        if ( HermesStatus != 0 )
        {
          v15 = HermesStatus;
          gaia::GaiaRequest::SetResponseCode(a2, HermesStatus);
          return v15;
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "transport", (int)(uintptr_t)(&v18) + 1);
          v5 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v21);
          v16 = (char *)Json::Value::asInt(v5);
          g4_std::string::Destroy(&v21);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "msgids", (int)(uintptr_t)(&v18) + 2);
          v6 = gaia::GaiaRequest::opIndex(a2, &v23);
          Json::Value::asString((Json::Value::Self *)&v22, v6);
          v7 = (void *)(v23 - 12);
          if ( (uint32_t *)(v23 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v7);
          }
          v24 = (int)(uintptr_t)(&dword_213B814);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "message", (int)(uintptr_t)(&v18) + 3);
          AccessToken = gaia::Gaia_Hermes::GetAccessToken((gaia::Gaia::Self *)(self), a2, (uint32_t *)(&v25), (int)(uintptr_t)(&v24));
          g4_std::string::Destroy(&v25);
          if ( AccessToken == 0 )
          {
            Instance = gaia::Gaia::GetInstance();
            AccessToken = gaia::Hermes::DeleteAllMessages(
                            *(gaia::BaseServiceManager::Self **)(Instance + 12),
                            (int)(uintptr_t)(v16),
                            (int)(uintptr_t)(&v22),
                            (int)(uintptr_t)(&v24),
                            (int)(uintptr_t)(a2));
          }
          gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
          v9 = AccessToken;
          v10 = (void *)(v24 - 12);
          if ( (uint32_t *)(v24 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v10);
            v9 = AccessToken;
          }
          v13 = v9;
          g4_std::string::Destroy(&v22);
          return v13;
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
// Function: gaia::Gaia_Hermes::DeleteMessage  (binary VA: 0x147c3b0)
// Original: gaia::Gaia_Hermes::DeleteMessage
// ----------------------------------------------------------------------------
int gaia::Gaia_Hermes::DeleteMessage(gaia::Gaia_Hermes::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  int HermesStatus;
  void *v5;
  int AccessToken;
  int result;
  void *v8;
  void *v9;
  int Instance;
  typedef Json::Value::Self *_g4_t_v11;
  typedef Json::Value::Self *_g4_t_v12;
  typedef Json::Value::Self *_g4_t_started;
  typedef Json::Value::Self *_g4_t_v14;
  typedef Json::Value::Self *_g4_t_v15;
  typedef void *_g4_t_v16;
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
  typedef uint8_t _g4_t_v28[96];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v12)) > _g4_s1 ? (4u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_started)) > _g4_s2 ? (4u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v14)) > _g4_s3 ? (4u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v15)) > _g4_s4 ? (4u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v16)) > _g4_s5 ? (8u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v17)) > _g4_s6 ? (12u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (27u + sizeof(_g4_t_v18)) > _g4_s7 ? (27u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v19)) > _g4_s8 ? (28u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v20)) > _g4_s9 ? (36u + sizeof(_g4_t_v20)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v21)) > _g4_s10 ? (40u + sizeof(_g4_t_v21)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v22)) > _g4_s11 ? (44u + sizeof(_g4_t_v22)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v23)) > _g4_s12 ? (48u + sizeof(_g4_t_v23)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v24)) > _g4_s13 ? (52u + sizeof(_g4_t_v24)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v25)) > _g4_s14 ? (56u + sizeof(_g4_t_v25)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v26)) > _g4_s15 ? (60u + sizeof(_g4_t_v26)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v27)) > _g4_s16 ? (76u + sizeof(_g4_t_v27)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v28)) > _g4_s17 ? (92u + sizeof(_g4_t_v28)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 27u);
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
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "transport", (int)(uintptr_t)(&v18));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v20), 1);
    v2 = (void *)(v20 - 12);
    if ( (uint32_t *)(v20 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "msgid", (int)(uintptr_t)(&v19));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v21), 4);
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
        gaia::GaiaRequest::SetOperationCode(a2, 3507);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v28, a2);
        started = (Json::Value::Self *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v28);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v28);
        return (int)(uintptr_t)(started);
      }
      else
      {
        HermesStatus = gaia::Gaia_Hermes::GetHermesStatus(self);
        if ( HermesStatus != 0 )
        {
          v14 = (Json::Value::Self *)HermesStatus;
          gaia::GaiaRequest::SetResponseCode(a2, HermesStatus);
          return (int)(uintptr_t)(v14);
        }
        else
        {
          v22 = (int)(uintptr_t)(&dword_213B814);
          v23 = (int)(uintptr_t)(&dword_213B814);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v26, (const char *)a2);
          v17 = Json::Value::asInt((Json::Value::Self *)v26);
          Json::Value::Destroy((Json::Value::Self *)v26);
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v27, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v24, (int)(uintptr_t)(v27));
          g4_std::string::assign_str(&v22, &v24);
          v5 = (void *)(v24 - 12);
          if ( (uint32_t *)(v24 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v5);
          }
          Json::Value::Destroy((Json::Value::Self *)v27);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "message", (int)(uintptr_t)(&v19) + 1);
          AccessToken = gaia::Gaia_Hermes::GetAccessToken((gaia::Gaia::Self *)(self), a2, (uint32_t *)(&v25), (int)(uintptr_t)(&v23));
          v16 = (void *)(v25 - 12);
          if ( (uint32_t *)(v25 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
          {
            v15 = (Json::Value::Self *)AccessToken;
            g4_std::string::Rep::M_destroy(v16);
            AccessToken = (int)(uintptr_t)(v15);
          }
          if ( AccessToken == 0 )
          {
            Instance = gaia::Gaia::GetInstance();
            AccessToken = gaia::Hermes::DeleteMessage(
                            *(gaia::BaseServiceManager::Self **)(Instance + 12),
                            v17,
                            (int)(uintptr_t)(&v22),
                            (int)(uintptr_t)(&v23),
                            (int)(uintptr_t)(a2));
          }
          v11 = (Json::Value::Self *)AccessToken;
          gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
          result = (int)(uintptr_t)(v11);
          v8 = (void *)(v23 - 12);
          if ( (uint32_t *)(v23 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v8);
            result = (int)(uintptr_t)(v11);
          }
          v9 = (void *)(v22 - 12);
          if ( (uint32_t *)(v22 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
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
// Function: gaia::Gaia_Hermes::RetrieveMessage  (binary VA: 0x147c7a0)
// Original: gaia::Gaia_Hermes::RetrieveMessage
// ----------------------------------------------------------------------------
int gaia::Gaia_Hermes::RetrieveMessage(gaia::Gaia_Hermes::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  int HermesStatus;
  int started;
  void *v6;
  void *v7;
  gaia::BaseJSONServiceResponse::Self *v8;
  gaia::BaseJSONServiceResponse::Self *v9;
  void *v10;
  void *v11;
  int Instance;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_ptr;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef char *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v27;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef uint8_t _g4_t_v30[16];
  typedef uint8_t _g4_t_v31[16];
  typedef uint8_t _g4_t_v32[96];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v15)) > _g4_s1 ? (40u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v16)) > _g4_s2 ? (40u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (55u + sizeof(_g4_t_v17)) > _g4_s3 ? (55u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v18)) > _g4_s4 ? (56u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v19)) > _g4_s5 ? (64u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v20)) > _g4_s6 ? (68u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v21)) > _g4_s7 ? (72u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v22)) > _g4_s8 ? (76u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v23)) > _g4_s9 ? (80u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v24)) > _g4_s10 ? (84u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (88u + sizeof(_g4_t_v25)) > _g4_s11 ? (88u + sizeof(_g4_t_v25)) : _g4_s11,
    _g4_s13 = (92u + sizeof(_g4_t_v26)) > _g4_s12 ? (92u + sizeof(_g4_t_v26)) : _g4_s12,
    _g4_s14 = (96u + sizeof(_g4_t_v27)) > _g4_s13 ? (96u + sizeof(_g4_t_v27)) : _g4_s13,
    _g4_s15 = (100u + sizeof(_g4_t_v28)) > _g4_s14 ? (100u + sizeof(_g4_t_v28)) : _g4_s14,
    _g4_s16 = (104u + sizeof(_g4_t_v29)) > _g4_s15 ? (104u + sizeof(_g4_t_v29)) : _g4_s15,
    _g4_s17 = (108u + sizeof(_g4_t_v30)) > _g4_s16 ? (108u + sizeof(_g4_t_v30)) : _g4_s16,
    _g4_s18 = (124u + sizeof(_g4_t_v31)) > _g4_s17 ? (124u + sizeof(_g4_t_v31)) : _g4_s17,
    _g4_s19 = (140u + sizeof(_g4_t_v32)) > _g4_s18 ? (140u + sizeof(_g4_t_v32)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 55u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 56u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 64u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 68u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 72u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 76u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 80u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 84u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 88u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 92u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 96u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 100u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 104u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 108u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 124u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 140u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    started = -21;
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return started;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "transport", (int)(uintptr_t)(&v17));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v19), 1);
  v2 = (void *)(v19 - 12);
  if ( (uint32_t *)(v19 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "msgid", (int)(uintptr_t)(&v18));
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
      gaia::GaiaRequest::SetOperationCode(a2, 3506);
      gaia::Gaia::GetInstance();
      gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v32, a2);
      started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v32);
      gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v32);
    }
    else
    {
      HermesStatus = gaia::Gaia_Hermes::GetHermesStatus(self);
      started = HermesStatus;
      if ( HermesStatus != 0 )
      {
        gaia::GaiaRequest::SetResponseCode(a2, HermesStatus);
      }
      else
      {
        v21 = (int)(uintptr_t)(&dword_213B814);
        v22 = (int)(uintptr_t)(&dword_213B814);
        v27 = nullptr;
        v28 = nullptr;
        v29 = 0;
        gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v30, (const char *)a2);
        v15 = Json::Value::asInt((Json::Value::Self *)v30);
        Json::Value::Destroy((Json::Value::Self *)v30);
        gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v31, (const char *)a2);
        Json::Value::asString((Json::Value::Self *)&v23, (int)(uintptr_t)(v31));
        g4_std::string::assign_str(&v21, &v23);
        v6 = (void *)(v23 - 12);
        if ( (uint32_t *)(v23 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v6);
        }
        Json::Value::Destroy((Json::Value::Self *)v31);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "message", (int)(uintptr_t)(&v18) + 1);
        started = gaia::Gaia_Hermes::GetAccessToken((gaia::Gaia::Self *)(self), a2, (uint32_t *)(&v24), (int)(uintptr_t)(&v22));
        v7 = (void *)(v24 - 12);
        if ( (uint32_t *)(v24 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v7);
        }
        if ( started == 0 )
        {
          v25 = nullptr;
          v26 = 0;
          Instance = gaia::Gaia::GetInstance();
          started = gaia::Hermes::RetrieveMessage(
                      *(gaia::BaseServiceManager::Self **)(Instance + 12),
                      v15,
                      (int)(uintptr_t)(&v21),
                      (int)(uintptr_t)(&v22),
                      (void **)&v25,
                      &v26,
                      (int)(uintptr_t)(a2));
          if ( started == 0 )
            gaia::BaseServiceManager::ParseMessages(v25, v26, (int)(uintptr_t)(&v27), 1);
          free(v25);
          gaia::GaiaRequest::SetResponse(a2, (const std::vector<gaia::BaseJSONServiceResponse::Self> *)&v27);
        }
        gaia::GaiaRequest::SetResponseCode(a2, started);
        v8 = v27;
        if ( v28 != v27 )
        {
          v16 = started;
          v9 = v28;
          do
          {
            ptr = v8;
            v8 = (gaia::BaseJSONServiceResponse::Self *)((char *)v8 + 20);
            gaia::BaseJSONServiceResponse::Destroy(ptr);
          }
          while ( v9 != v8 );
          started = v16;
          v8 = v27;
        }
        if ( v8 != nullptr )
          opDelete(v8);
        v10 = (void *)(v22 - 12);
        if ( (uint32_t *)(v22 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v10);
        }
        v11 = (void *)(v21 - 12);
        if ( (uint32_t *)(v21 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v11);
        }
      }
    }
    return started;
  }
  return gaia::GaiaRequest::GetResponseCode(a2);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hermes::RetrieveMessages  (binary VA: 0x147cc20)
// Original: gaia::Gaia_Hermes::RetrieveMessages
// ----------------------------------------------------------------------------
int gaia::Gaia_Hermes::RetrieveMessages(gaia::Gaia_Hermes::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  int HermesStatus;
  int started;
  Json::Value::Self *v6;
  bool isNull;
  void *v8;
  void *v9;
  int Instance;
  gaia::BaseJSONServiceResponse::Self *v11;
  gaia::BaseJSONServiceResponse::Self *v12;
  void *v13;
  Json::Value::Self *v15;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_ptr;
  typedef bool _g4_t_v17;
  typedef char *_g4_t_v18;
  typedef char _g4_t_v19;
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
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v31;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef uint8_t _g4_t_v34[16];
  typedef uint8_t _g4_t_v35[96];
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v17)) > _g4_s1 ? (32u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v18)) > _g4_s2 ? (36u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v19)) > _g4_s3 ? (40u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v20)) > _g4_s4 ? (44u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (54u + sizeof(_g4_t_v21)) > _g4_s5 ? (54u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v22)) > _g4_s6 ? (56u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v23)) > _g4_s7 ? (64u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v24)) > _g4_s8 ? (68u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v25)) > _g4_s9 ? (72u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v26)) > _g4_s10 ? (76u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v27)) > _g4_s11 ? (80u + sizeof(_g4_t_v27)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v28)) > _g4_s12 ? (84u + sizeof(_g4_t_v28)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v29)) > _g4_s13 ? (88u + sizeof(_g4_t_v29)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v30)) > _g4_s14 ? (92u + sizeof(_g4_t_v30)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v31)) > _g4_s15 ? (96u + sizeof(_g4_t_v31)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v32)) > _g4_s16 ? (100u + sizeof(_g4_t_v32)) : _g4_s16,
    _g4_s18 = (104u + sizeof(_g4_t_v33)) > _g4_s17 ? (104u + sizeof(_g4_t_v33)) : _g4_s17,
    _g4_s19 = (108u + sizeof(_g4_t_v34)) > _g4_s18 ? (108u + sizeof(_g4_t_v34)) : _g4_s18,
    _g4_s20 = (124u + sizeof(_g4_t_v35)) > _g4_s19 ? (124u + sizeof(_g4_t_v35)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 54u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 56u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 64u);
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
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 124u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    started = -21;
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return started;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "transport", (int)(uintptr_t)(&v21));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v23), 1);
  v2 = (void *)(v23 - 12);
  if ( (uint32_t *)(v23 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "delete", (int)(uintptr_t)(&v21) + 1);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v24), 5);
  v3 = (void *)(v24 - 12);
  if ( (uint32_t *)(v24 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
  {
    if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
    {
      gaia::GaiaRequest::SetOperationCode(a2, 3505);
      gaia::Gaia::GetInstance();
      gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v35, a2);
      started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v35);
      gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v35);
    }
    else
    {
      HermesStatus = gaia::Gaia_Hermes::GetHermesStatus(self);
      started = HermesStatus;
      if ( HermesStatus != 0 )
      {
        gaia::GaiaRequest::SetResponseCode(a2, HermesStatus);
      }
      else
      {
        v25 = (int)(uintptr_t)(&dword_213B814);
        v31 = nullptr;
        v32 = nullptr;
        v33 = 0;
        gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v34, (const char *)a2);
        v20 = Json::Value::asInt((Json::Value::Self *)v34);
        Json::Value::Destroy((Json::Value::Self *)v34);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "delete", (int)(uintptr_t)(&v22));
        v6 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v26);
        isNull = Json::Value::isNull(v6);
        v8 = (void *)(v26 - 12);
        if ( (uint32_t *)(v26 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
        {
          v17 = isNull;
          g4_std::string::Rep::M_destroy(v8);
          isNull = v17;
        }
        v19 = 0;
        if ( !isNull )
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "delete", (int)(uintptr_t)(&v22) + 1);
          v15 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v27);
          v19 = Json::Value::asBool(v15);
          g4_std::string::Destroy(&v27);
        }
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "message", (int)(uintptr_t)(&v22) + 2);
        started = gaia::Gaia_Hermes::GetAccessToken((gaia::Gaia::Self *)(self), a2, (uint32_t *)(&v28), (int)(uintptr_t)(&v25));
        v9 = (void *)(v28 - 12);
        if ( (uint32_t *)(v28 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v9);
        }
        if ( started != 0 )
        {
          gaia::GaiaRequest::SetResponseCode(a2, started);
        }
        else
        {
          v29 = nullptr;
          Instance = gaia::Gaia::GetInstance();
          started = gaia::Hermes::RetrieveMessages(
                      *(gaia::BaseServiceManager::Self **)(Instance + 12),
                      v20,
                      (int)(uintptr_t)(&v25),
                      (void **)&v29,
                      &v30,
                      v19,
                      (int)(uintptr_t)(a2));
          if ( started == 0 )
            gaia::BaseServiceManager::ParseMessages(v29, v30, (int)(uintptr_t)(&v31), 1);
          free(v29);
          gaia::GaiaRequest::SetResponse(a2, (const std::vector<gaia::BaseJSONServiceResponse::Self> *)&v31);
        }
        v11 = v31;
        if ( v32 != v31 )
        {
          v18 = (char *)started;
          v12 = v32;
          do
          {
            ptr = v11;
            v11 = (gaia::BaseJSONServiceResponse::Self *)((char *)v11 + 20);
            gaia::BaseJSONServiceResponse::Destroy(ptr);
          }
          while ( v12 != v11 );
          started = (int)(uintptr_t)(v18);
          v11 = v31;
        }
        if ( v11 != nullptr )
          opDelete(v11);
        v13 = (void *)(v25 - 12);
        if ( (uint32_t *)(v25 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v13);
        }
      }
    }
    return started;
  }
  return gaia::GaiaRequest::GetResponseCode(a2);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hermes::SendMessageToMultipleUsers  (binary VA: 0x147d0a0)
// Original: gaia::Gaia_Hermes::SendMessageToMultipleUsers
// ----------------------------------------------------------------------------
int gaia::Gaia_Hermes::SendMessageToMultipleUsers(long double a1, gaia::Gaia_Hermes::Self *self, gaia::GaiaRequest::Self *a3)
{
  void *v3;
  void *v4;
  int HermesStatus;
  int AccessToken;
  const Json::Value::Self *v7;
  Json::Value::Self *v8;
  int *v9;
  int Instance;
  int v11;
  typedef Json::Value::Self *_g4_t_v13;
  typedef uint8_t *_g4_t_v14;
  typedef bool _g4_t_isNull;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_started;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef Json::Value::Self *_g4_t_v22;
  typedef void *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_HermesBaseMessage;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef uint8_t _g4_t_v30[7];
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef void *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef uint8_t _g4_t_v38[4];
  typedef int _g4_t_v39;
  typedef char _g4_t_v40;
  typedef int _g4_t_v41;
  typedef uint8_t _g4_t_v42[16];
  typedef uint8_t _g4_t_v43[16];
  typedef uint8_t _g4_t_v44[68];
  typedef int (**_g4_t_v45)(int);
  typedef int _g4_t_v46;
  typedef int (**_g4_t_v47)(int);
  typedef uint32_t _g4_t_v48[3];
  typedef unsigned int _g4_t_v49;
  typedef void *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef uint8_t _g4_t_v53[4];
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef uint32_t _g4_t_v56[29];
  typedef char _g4_t_v57;
  typedef char _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  enum : size_t {
    _g4_s0 = 528u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_isNull)) > _g4_s2 ? (36u + sizeof(_g4_t_isNull)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v16)) > _g4_s3 ? (36u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v17)) > _g4_s4 ? (36u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_started)) > _g4_s5 ? (36u + sizeof(_g4_t_started)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v19)) > _g4_s6 ? (36u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v20)) > _g4_s7 ? (36u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v21)) > _g4_s8 ? (36u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v22)) > _g4_s9 ? (40u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v23)) > _g4_s10 ? (44u + sizeof(_g4_t_v23)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v24)) > _g4_s11 ? (56u + sizeof(_g4_t_v24)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_HermesBaseMessage)) > _g4_s12 ? (72u + sizeof(_g4_t_HermesBaseMessage)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v26)) > _g4_s13 ? (76u + sizeof(_g4_t_v26)) : _g4_s13,
    _g4_s15 = (83u + sizeof(_g4_t_v27)) > _g4_s14 ? (83u + sizeof(_g4_t_v27)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v28)) > _g4_s15 ? (84u + sizeof(_g4_t_v28)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v29)) > _g4_s16 ? (88u + sizeof(_g4_t_v29)) : _g4_s16,
    _g4_s18 = (93u + sizeof(_g4_t_v30)) > _g4_s17 ? (93u + sizeof(_g4_t_v30)) : _g4_s17,
    _g4_s19 = (100u + sizeof(_g4_t_v31)) > _g4_s18 ? (100u + sizeof(_g4_t_v31)) : _g4_s18,
    _g4_s20 = (104u + sizeof(_g4_t_v32)) > _g4_s19 ? (104u + sizeof(_g4_t_v32)) : _g4_s19,
    _g4_s21 = (108u + sizeof(_g4_t_v33)) > _g4_s20 ? (108u + sizeof(_g4_t_v33)) : _g4_s20,
    _g4_s22 = (112u + sizeof(_g4_t_v34)) > _g4_s21 ? (112u + sizeof(_g4_t_v34)) : _g4_s21,
    _g4_s23 = (116u + sizeof(_g4_t_v35)) > _g4_s22 ? (116u + sizeof(_g4_t_v35)) : _g4_s22,
    _g4_s24 = (120u + sizeof(_g4_t_v36)) > _g4_s23 ? (120u + sizeof(_g4_t_v36)) : _g4_s23,
    _g4_s25 = (124u + sizeof(_g4_t_v37)) > _g4_s24 ? (124u + sizeof(_g4_t_v37)) : _g4_s24,
    _g4_s26 = (128u + sizeof(_g4_t_v38)) > _g4_s25 ? (128u + sizeof(_g4_t_v38)) : _g4_s25,
    _g4_s27 = (132u + sizeof(_g4_t_v39)) > _g4_s26 ? (132u + sizeof(_g4_t_v39)) : _g4_s26,
    _g4_s28 = (136u + sizeof(_g4_t_v40)) > _g4_s27 ? (136u + sizeof(_g4_t_v40)) : _g4_s27,
    _g4_s29 = (140u + sizeof(_g4_t_v41)) > _g4_s28 ? (140u + sizeof(_g4_t_v41)) : _g4_s28,
    _g4_s30 = (144u + sizeof(_g4_t_v42)) > _g4_s29 ? (144u + sizeof(_g4_t_v42)) : _g4_s29,
    _g4_s31 = (160u + sizeof(_g4_t_v43)) > _g4_s30 ? (160u + sizeof(_g4_t_v43)) : _g4_s30,
    _g4_s32 = (176u + sizeof(_g4_t_v44)) > _g4_s31 ? (176u + sizeof(_g4_t_v44)) : _g4_s31,
    _g4_s33 = (244u + sizeof(_g4_t_v45)) > _g4_s32 ? (244u + sizeof(_g4_t_v45)) : _g4_s32,
    _g4_s34 = (248u + sizeof(_g4_t_v46)) > _g4_s33 ? (248u + sizeof(_g4_t_v46)) : _g4_s33,
    _g4_s35 = (252u + sizeof(_g4_t_v47)) > _g4_s34 ? (252u + sizeof(_g4_t_v47)) : _g4_s34,
    _g4_s36 = (256u + sizeof(_g4_t_v48)) > _g4_s35 ? (256u + sizeof(_g4_t_v48)) : _g4_s35,
    _g4_s37 = (268u + sizeof(_g4_t_v49)) > _g4_s36 ? (268u + sizeof(_g4_t_v49)) : _g4_s36,
    _g4_s38 = (272u + sizeof(_g4_t_v50)) > _g4_s37 ? (272u + sizeof(_g4_t_v50)) : _g4_s37,
    _g4_s39 = (276u + sizeof(_g4_t_v51)) > _g4_s38 ? (276u + sizeof(_g4_t_v51)) : _g4_s38,
    _g4_s40 = (280u + sizeof(_g4_t_v52)) > _g4_s39 ? (280u + sizeof(_g4_t_v52)) : _g4_s39,
    _g4_s41 = (284u + sizeof(_g4_t_v53)) > _g4_s40 ? (284u + sizeof(_g4_t_v53)) : _g4_s40,
    _g4_s42 = (288u + sizeof(_g4_t_v54)) > _g4_s41 ? (288u + sizeof(_g4_t_v54)) : _g4_s41,
    _g4_s43 = (292u + sizeof(_g4_t_v55)) > _g4_s42 ? (292u + sizeof(_g4_t_v55)) : _g4_s42,
    _g4_s44 = (296u + sizeof(_g4_t_v56)) > _g4_s43 ? (296u + sizeof(_g4_t_v56)) : _g4_s43,
    _g4_s45 = (412u + sizeof(_g4_t_v57)) > _g4_s44 ? (412u + sizeof(_g4_t_v57)) : _g4_s44,
    _g4_s46 = (413u + sizeof(_g4_t_v58)) > _g4_s45 ? (413u + sizeof(_g4_t_v58)) : _g4_s45,
    _g4_s47 = (416u + sizeof(_g4_t_v59)) > _g4_s46 ? (416u + sizeof(_g4_t_v59)) : _g4_s46,
    _g4_s48 = (420u + sizeof(_g4_t_v60)) > _g4_s47 ? (420u + sizeof(_g4_t_v60)) : _g4_s47,
    _g4_s49 = (424u + sizeof(_g4_t_v61)) > _g4_s48 ? (424u + sizeof(_g4_t_v61)) : _g4_s48,
    _g4_s50 = (428u + sizeof(_g4_t_v62)) > _g4_s49 ? (428u + sizeof(_g4_t_v62)) : _g4_s49
  };
  alignas(16) uint8_t _g4_sf[_g4_s50];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_isNull &isNull = *reinterpret_cast<_g4_t_isNull *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 36u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 56u);
  _g4_t_HermesBaseMessage &HermesBaseMessage = *reinterpret_cast<_g4_t_HermesBaseMessage *>(_g4_sf + 72u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 76u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 83u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 84u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 88u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 93u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 100u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 104u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 108u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 112u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 116u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 120u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 124u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 128u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 132u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 136u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 140u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 144u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 160u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 176u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 244u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 248u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 252u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 256u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 268u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 272u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 276u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 280u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 284u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 288u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 292u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 296u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 412u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 413u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 416u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 420u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 424u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 428u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30[3]), "credentials", (int)(uintptr_t)(&v27));
    gaia::GaiaRequest::ValidateMandatoryParam(a3, (int)(uintptr_t)(&v30[3]), 6);
    v3 = (void *)(*(uint32_t *)&v30[3] - 12);
    if ( (uint32_t *)(*(uint32_t *)&v30[3] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v30[3] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "payload", (int)(uintptr_t)(&v28));
    gaia::GaiaRequest::ValidateOptionalParam(a3, (int)(uintptr_t)(&v31), 4);
    v4 = (void *)(v31 - 12);
    if ( (uint32_t *)(v31 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a3) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a3) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a3, 3504);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v44, a3);
        started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v44);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v44);
        return started;
      }
      else
      {
        HermesStatus = gaia::Gaia_Hermes::GetHermesStatus(self);
        if ( HermesStatus != 0 )
        {
          v20 = HermesStatus;
          gaia::GaiaRequest::SetResponseCode(a3, HermesStatus);
          return v20;
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), (char *)&unk_1B15112, (int)(uintptr_t)(&v28) + 1);
          Json::Value::Construct((int)(uintptr_t)(v42), nullptr);
          v33 = (int)(uintptr_t)(&dword_213B814);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "message", (int)(uintptr_t)(&v28) + 2);
          AccessToken = gaia::Gaia_Hermes::GetAccessToken((gaia::Gaia::Self *)(self), a3, &v34, (int)(uintptr_t)(&v33));
          v23 = (void *)(v34 - 12);
          if ( (uint32_t *)(v34 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
          {
            v21 = AccessToken;
            g4_std::string::Rep::M_destroy(v23);
            AccessToken = v21;
          }
          if ( AccessToken != 0 )
          {
            v19 = AccessToken;
            gaia::GaiaRequest::SetResponseCode(a3, AccessToken);
            v11 = v19;
          }
          else
          {
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "credentials", (int)(uintptr_t)(&v28) + 3);
            v7 = (const Json::Value::Self *)gaia::GaiaRequest::opIndex(a3, &v35);
            Json::Value::opAssign((Json::Value::Self *)v42, v7);
            g4_std::string::Destroy(&v35);
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), (char *)&unk_1B15112, (int)(uintptr_t)(&v29));
            sub_1900810(v56);
            v56[28] = 0;
            v57 = 0;
            v58 = 0;
            v59 = 0;
            v60 = 0;
            v61 = 0;
            v62 = 0;
            v45 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
            v56[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
            *(int (***)(int))((char *)&v45 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
            v46 = 0;
            sub_19119D0((char *)&v45 + (uint32_t)(uintptr_t)(*(v45 - 3)), 0);
            v47 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
            *(uint32_t *)((char *)&v48[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
            sub_19119D0((char *)&v48[-1] + (uint32_t)(uintptr_t)(*(v47 - 3)), 0);
            v45 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
            *(int (***)(int))((char *)&v45 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
            v48[1] = 0;
            v48[2] = 0;
            v49 = 0;
            v50 = nullptr;
            v51 = 0;
            v52 = 0;
            v45 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
            v56[0] = (uint32_t)(uintptr_t)(&off_20AB014);
            v47 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
            v48[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
            sub_1903A70(v53);
            v54 = 0;
            v48[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
            sub_193A970((int)(uintptr_t)(&v55), v36, *((uint32_t *)v36 - 3), (int)(uintptr_t)(v30));
            v54 = 24;
            sub_1931CD0(v48, v55, 0, 0);
            sub_19119D0(v56, v48);
            g4_std::string::Destroy(&v36);
            Json::opShl(a1, (int)(uintptr_t)(&v47), (Json::Value::Self *)v42);
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "payload", (int)(uintptr_t)(&v29) + 1);
            v8 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a3, &v37);
            isNull = Json::Value::isNull(v8);
            g4_std::string::Destroy(&v37);
            if ( !isNull )
            {
              gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v43, (const char *)a3);
              Json::Value::asString((Json::Value::Self *)v38, (int)(uintptr_t)(v43));
              g4_std::string::assign_str(&v32, v38);
              g4_std::string::Destroy(v38);
              Json::Value::Destroy((Json::Value::Self *)v43);
            }
            HermesBaseMessage = 0;
            if ( gaia::GaiaRequest::GetHermesBaseMessage(a3) != 0 )
              HermesBaseMessage = gaia::GaiaRequest::GetHermesBaseMessage(a3);
            v24 = v32;
            v26 = *(uint32_t *)(v32 - 12);
            v39 = (int)(uintptr_t)(&dword_213B814);
            if ( v51 != 0 )
            {
              if ( v51 <= v49 )
              {
                v14 = (uint8_t *)v49;
                v13 = (Json::Value::Self *)v50;
                v9 = (int *)&v40;
              }
              else
              {
                v14 = (uint8_t *)v51;
                v13 = (Json::Value::Self *)v50;
                v9 = &v41;
              }
              v22 = (Json::Value::Self *)v9;
              sub_11A9950(v9, v13, v14);
              g4_std::string::assign_str(&v39, v22);
              g4_std::string::Destroy(v22);
            }
            else
            {
              g4_std::string::assign_str(&v39, &v55);
            }
            Instance = gaia::Gaia::GetInstance();
            v16 = gaia::Hermes::SendMessageToMultipleUsers(
                    *(gaia::BaseServiceManager::Self **)(Instance + 12),
                    (int)(uintptr_t)(&v33),
                    (int)(uintptr_t)(&v39),
                    HermesBaseMessage,
                    v24,
                    v26,
                    (int)(uintptr_t)(a3));
            g4_std::string::Destroy(&v39);
            v45 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
            v56[0] = (uint32_t)(uintptr_t)(&off_20AB014);
            v47 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
            v48[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
            g4_std::string::Destroy(&v55);
            v48[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
            sub_1902180(v53);
            v45 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
            *(int (***)(int))((char *)&v45 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
            v47 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
            *(uint32_t *)((char *)&v48[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
            v45 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
            *(int (***)(int))((char *)&v45 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
            v46 = 0;
            v56[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
            sub_1900B90(v56);
            v11 = v16;
          }
          v17 = v11;
          g4_std::string::Destroy(&v33);
          Json::Value::Destroy((Json::Value::Self *)v42);
          g4_std::string::Destroy(&v32);
          return v17;
        }
      }
    }
    else
    {
      return gaia::GaiaRequest::GetResponseCode(a3);
    }
  }
  else
  {
    gaia::GaiaRequest::SetResponseCode(a3, -21);
    return -21;
  }
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hermes::SendMessageToUser  (binary VA: 0x147d940)
// Original: gaia::Gaia_Hermes::SendMessageToUser
// ----------------------------------------------------------------------------
int gaia::Gaia_Hermes::SendMessageToUser(gaia::Gaia_Hermes::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  void *v6;
  void *v7;
  void *v8;
  int HermesStatus;
  Json::Value::Self *v10;
  Json::Value::Self *v11;
  Json::Value::Self *v12;
  Json::Value::Self *v13;
  int HermesBaseMessage;
  Json::Value::Self *v15;
  int v16;
  int Instance;
  Json::Value::Self *v18;
  Json::Value::Self *v19;
  void *v20;
  char v22; // bp
  typedef Json::Value::Self *_g4_t_v23;
  typedef Json::Value::Self *_g4_t_AccessToken;
  typedef bool _g4_t_isNull;
  typedef bool _g4_t_v26;
  typedef bool _g4_t_v27;
  typedef bool _g4_t_v28;
  typedef Json::Value::Self *_g4_t_v29;
  typedef Json::Value::Self *_g4_t_v30;
  typedef Json::Value::Self *_g4_t_v31;
  typedef Json::Value::Self *_g4_t_started;
  typedef Json::Value::Self *_g4_t_v33;
  typedef char _g4_t_v34;
  typedef char _g4_t_v35;
  typedef int _g4_t_v36;
  typedef char _g4_t_v37;
  typedef char *_g4_t_v38;
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
  typedef uint8_t _g4_t_v55[4];
  typedef int _g4_t_v56;
  typedef uint8_t _g4_t_v57[4];
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef uint8_t _g4_t_v60[4];
  typedef int _g4_t_v61;
  typedef uint8_t _g4_t_v62[16];
  typedef uint8_t _g4_t_v63[16];
  typedef uint8_t _g4_t_v64[16];
  typedef uint8_t _g4_t_v65[16];
  typedef uint8_t _g4_t_v66[16];
  typedef uint8_t _g4_t_v67[16];
  typedef uint8_t _g4_t_v68[16];
  typedef uint8_t _g4_t_v69[96];
  enum : size_t {
    _g4_s0 = 432u,
    _g4_s1 = (12u + sizeof(_g4_t_v23)) > _g4_s0 ? (12u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_AccessToken)) > _g4_s1 ? (16u + sizeof(_g4_t_AccessToken)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_isNull)) > _g4_s2 ? (16u + sizeof(_g4_t_isNull)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v26)) > _g4_s3 ? (16u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v27)) > _g4_s4 ? (16u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v28)) > _g4_s5 ? (16u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v29)) > _g4_s6 ? (16u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v30)) > _g4_s7 ? (16u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v31)) > _g4_s8 ? (16u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_started)) > _g4_s9 ? (16u + sizeof(_g4_t_started)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v33)) > _g4_s10 ? (16u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_v34)) > _g4_s11 ? (20u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v35)) > _g4_s12 ? (24u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v36)) > _g4_s13 ? (28u + sizeof(_g4_t_v36)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v37)) > _g4_s14 ? (32u + sizeof(_g4_t_v37)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v38)) > _g4_s15 ? (36u + sizeof(_g4_t_v38)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v39)) > _g4_s16 ? (56u + sizeof(_g4_t_v39)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v40)) > _g4_s17 ? (60u + sizeof(_g4_t_v40)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v41)) > _g4_s18 ? (64u + sizeof(_g4_t_v41)) : _g4_s18,
    _g4_s20 = (68u + sizeof(_g4_t_v42)) > _g4_s19 ? (68u + sizeof(_g4_t_v42)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v43)) > _g4_s20 ? (80u + sizeof(_g4_t_v43)) : _g4_s20,
    _g4_s22 = (84u + sizeof(_g4_t_v44)) > _g4_s21 ? (84u + sizeof(_g4_t_v44)) : _g4_s21,
    _g4_s23 = (88u + sizeof(_g4_t_v45)) > _g4_s22 ? (88u + sizeof(_g4_t_v45)) : _g4_s22,
    _g4_s24 = (92u + sizeof(_g4_t_v46)) > _g4_s23 ? (92u + sizeof(_g4_t_v46)) : _g4_s23,
    _g4_s25 = (96u + sizeof(_g4_t_v47)) > _g4_s24 ? (96u + sizeof(_g4_t_v47)) : _g4_s24,
    _g4_s26 = (100u + sizeof(_g4_t_v48)) > _g4_s25 ? (100u + sizeof(_g4_t_v48)) : _g4_s25,
    _g4_s27 = (104u + sizeof(_g4_t_v49)) > _g4_s26 ? (104u + sizeof(_g4_t_v49)) : _g4_s26,
    _g4_s28 = (108u + sizeof(_g4_t_v50)) > _g4_s27 ? (108u + sizeof(_g4_t_v50)) : _g4_s27,
    _g4_s29 = (112u + sizeof(_g4_t_v51)) > _g4_s28 ? (112u + sizeof(_g4_t_v51)) : _g4_s28,
    _g4_s30 = (116u + sizeof(_g4_t_v52)) > _g4_s29 ? (116u + sizeof(_g4_t_v52)) : _g4_s29,
    _g4_s31 = (120u + sizeof(_g4_t_v53)) > _g4_s30 ? (120u + sizeof(_g4_t_v53)) : _g4_s30,
    _g4_s32 = (124u + sizeof(_g4_t_v54)) > _g4_s31 ? (124u + sizeof(_g4_t_v54)) : _g4_s31,
    _g4_s33 = (128u + sizeof(_g4_t_v55)) > _g4_s32 ? (128u + sizeof(_g4_t_v55)) : _g4_s32,
    _g4_s34 = (132u + sizeof(_g4_t_v56)) > _g4_s33 ? (132u + sizeof(_g4_t_v56)) : _g4_s33,
    _g4_s35 = (136u + sizeof(_g4_t_v57)) > _g4_s34 ? (136u + sizeof(_g4_t_v57)) : _g4_s34,
    _g4_s36 = (140u + sizeof(_g4_t_v58)) > _g4_s35 ? (140u + sizeof(_g4_t_v58)) : _g4_s35,
    _g4_s37 = (144u + sizeof(_g4_t_v59)) > _g4_s36 ? (144u + sizeof(_g4_t_v59)) : _g4_s36,
    _g4_s38 = (148u + sizeof(_g4_t_v60)) > _g4_s37 ? (148u + sizeof(_g4_t_v60)) : _g4_s37,
    _g4_s39 = (152u + sizeof(_g4_t_v61)) > _g4_s38 ? (152u + sizeof(_g4_t_v61)) : _g4_s38,
    _g4_s40 = (156u + sizeof(_g4_t_v62)) > _g4_s39 ? (156u + sizeof(_g4_t_v62)) : _g4_s39,
    _g4_s41 = (172u + sizeof(_g4_t_v63)) > _g4_s40 ? (172u + sizeof(_g4_t_v63)) : _g4_s40,
    _g4_s42 = (188u + sizeof(_g4_t_v64)) > _g4_s41 ? (188u + sizeof(_g4_t_v64)) : _g4_s41,
    _g4_s43 = (204u + sizeof(_g4_t_v65)) > _g4_s42 ? (204u + sizeof(_g4_t_v65)) : _g4_s42,
    _g4_s44 = (220u + sizeof(_g4_t_v66)) > _g4_s43 ? (220u + sizeof(_g4_t_v66)) : _g4_s43,
    _g4_s45 = (236u + sizeof(_g4_t_v67)) > _g4_s44 ? (236u + sizeof(_g4_t_v67)) : _g4_s44,
    _g4_s46 = (252u + sizeof(_g4_t_v68)) > _g4_s45 ? (252u + sizeof(_g4_t_v68)) : _g4_s45,
    _g4_s47 = (268u + sizeof(_g4_t_v69)) > _g4_s46 ? (268u + sizeof(_g4_t_v69)) : _g4_s46
  };
  alignas(16) uint8_t _g4_sf[_g4_s47];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_AccessToken &AccessToken = *reinterpret_cast<_g4_t_AccessToken *>(_g4_sf + 16u);
  _g4_t_isNull &isNull = *reinterpret_cast<_g4_t_isNull *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 16u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 16u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 20u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 24u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 28u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 32u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 36u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 56u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 60u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 64u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 68u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 80u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 84u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 88u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 92u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 96u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 100u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 104u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 108u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 112u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 116u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 120u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 124u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 128u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 132u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 136u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 140u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 144u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 148u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 152u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 156u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 172u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 188u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 204u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 220u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 236u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 252u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 268u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), "transport", (int)(uintptr_t)(&v39));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v43), 1);
    v2 = (void *)(v43 - 12);
    if ( (uint32_t *)(v43 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v43 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), "username", (int)(uintptr_t)(&v39) + 1);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v44), 4);
    v3 = (void *)(v44 - 12);
    if ( (uint32_t *)(v44 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v44 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "credential_type", (int)(uintptr_t)(&v39) + 2);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v45), 1);
    v4 = (void *)(v45 - 12);
    if ( (uint32_t *)(v45 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), "replace_label", (int)(uintptr_t)(&v39) + 3);
    gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v46), 4);
    v5 = (void *)(v46 - 12);
    if ( (uint32_t *)(v46 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v46 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), "delay", (int)(uintptr_t)(&v40));
    gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v47), 1);
    v6 = (void *)(v47 - 12);
    if ( (uint32_t *)(v47 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v47 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v48), "payload", (int)(uintptr_t)(&v40) + 1);
    gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v48), 4);
    v7 = (void *)(v48 - 12);
    if ( (uint32_t *)(v48 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v48 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v49), "alert_kairos", (int)(uintptr_t)(&v40) + 2);
    gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v49), 5);
    v8 = (void *)(v49 - 12);
    if ( (uint32_t *)(v49 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v49 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v8);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 3503);
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v69, a2);
        started = (Json::Value::Self *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v69);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v69);
        return (int)(uintptr_t)(started);
      }
      else
      {
        HermesStatus = gaia::Gaia_Hermes::GetHermesStatus(self);
        if ( HermesStatus != 0 )
        {
          v33 = (Json::Value::Self *)HermesStatus;
          gaia::GaiaRequest::SetResponseCode(a2, HermesStatus);
          return (int)(uintptr_t)(v33);
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v50), (char *)&unk_1B15112, (int)(uintptr_t)(&v40) + 3);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v51), (char *)&unk_1B15112, (int)(uintptr_t)(&v41));
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v52), (char *)&unk_1B15112, (int)(uintptr_t)(&v41) + 1);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v53), (char *)&unk_1B15112, (int)(uintptr_t)(&v41) + 2);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v54), "message", (int)(uintptr_t)(&v41) + 3);
          AccessToken = (Json::Value::Self *)gaia::Gaia_Hermes::GetAccessToken(self, a2, &v54, (int)(uintptr_t)(&v51));
          g4_std::string::Destroy(&v54);
          if ( AccessToken != nullptr )
          {
            gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(AccessToken));
            v18 = AccessToken;
          }
          else
          {
            gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v62, (const char *)a2);
            v36 = Json::Value::asInt((Json::Value::Self *)v62);
            Json::Value::Destroy((Json::Value::Self *)v62);
            gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v63, (const char *)a2);
            Json::Value::asString((Json::Value::Self *)v55, (int)(uintptr_t)(v63));
            g4_std::string::assign_str(&v50, v55);
            g4_std::string::Destroy(v55);
            Json::Value::Destroy((Json::Value::Self *)v63);
            gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v64, (const char *)a2);
            v37 = Json::Value::asInt((Json::Value::Self *)v64);
            Json::Value::Destroy((Json::Value::Self *)v64);
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v56), "replace_label", (int)(uintptr_t)(&v42));
            v10 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v56);
            isNull = Json::Value::isNull(v10);
            g4_std::string::Destroy(&v56);
            if ( !isNull )
            {
              gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v65, (const char *)a2);
              Json::Value::asString((Json::Value::Self *)v57, (int)(uintptr_t)(v65));
              g4_std::string::assign_str(&v52, v57);
              g4_std::string::Destroy(v57);
              Json::Value::Destroy((Json::Value::Self *)v65);
            }
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v58), "delay", (int)(uintptr_t)(&v42) + 1);
            v11 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v58);
            v26 = Json::Value::isNull(v11);
            g4_std::string::Destroy(&v58);
            v35 = 0;
            if ( !v26 )
            {
              gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v66, (const char *)a2);
              v35 = Json::Value::asInt((Json::Value::Self *)v66);
              Json::Value::Destroy((Json::Value::Self *)v66);
            }
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v59), "payload", (int)(uintptr_t)(&v42) + 2);
            v12 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v59);
            v27 = Json::Value::isNull(v12);
            g4_std::string::Destroy(&v59);
            if ( !v27 )
            {
              gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v67, (const char *)a2);
              Json::Value::asString((Json::Value::Self *)v60, (int)(uintptr_t)(v67));
              g4_std::string::assign_str(&v53, v60);
              g4_std::string::Destroy(v60);
              Json::Value::Destroy((Json::Value::Self *)v67);
            }
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v61), "alert_kairos", (int)(uintptr_t)(&v42) + 3);
            v13 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v61);
            v28 = Json::Value::isNull(v13);
            g4_std::string::Destroy(&v61);
            v34 = 0;
            if ( !v28 )
            {
              gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v68, (const char *)a2);
              v22 = Json::Value::asBool((Json::Value::Self *)v68);
              Json::Value::Destroy((Json::Value::Self *)v68);
              v34 = v22;
            }
            HermesBaseMessage = gaia::GaiaRequest::GetHermesBaseMessage(a2);
            v15 = nullptr;
            if ( HermesBaseMessage != 0 )
              v15 = (Json::Value::Self *)gaia::GaiaRequest::GetHermesBaseMessage(a2);
            v16 = v53;
            v23 = v15;
            v38 = *(char **)(v53 - 12);
            Instance = gaia::Gaia::GetInstance();
            v29 = (Json::Value::Self *)gaia::Hermes::SendMessageToUser(
                                   *(gaia::BaseServiceManager::Self **)(Instance + 12),
                                   v36,
                                   (int)(uintptr_t)(&v50),
                                   v37,
                                   (int)(uintptr_t)(&v51),
                                   (int)(uintptr_t)(&v52),
                                   (int)(uintptr_t)(v23),
                                   v16,
                                   (int)(uintptr_t)(v38),
                                   v35,
                                   v34,
                                   (int)(uintptr_t)(a2));
            gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(v29));
            v18 = v29;
          }
          v30 = v18;
          g4_std::string::Destroy(&v53);
          g4_std::string::Destroy(&v52);
          v19 = v30;
          v20 = (void *)(v51 - 12);
          if ( (uint32_t *)(v51 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v51 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v20);
            v19 = v30;
          }
          v31 = v19;
          g4_std::string::Destroy(&v50);
          return (int)(uintptr_t)(v31);
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
// Function: gaia::Gaia_Hermes::UnregisterDevices  (binary VA: 0x147e380)
// Original: gaia::Gaia_Hermes::UnregisterDevices
// ----------------------------------------------------------------------------
int gaia::Gaia_Hermes::UnregisterDevices(gaia::Gaia_Hermes::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  int HermesStatus;
  int AccessToken;
  int v6;
  int Instance;
  typedef int _g4_t_v8;
  typedef int _g4_t_started;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef void *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint8_t _g4_t_v18[16];
  typedef uint8_t _g4_t_v19[80];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_started)) > _g4_s1 ? (8u + sizeof(_g4_t_started)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v10)) > _g4_s2 ? (8u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v11)) > _g4_s3 ? (8u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v12)) > _g4_s4 ? (12u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (27u + sizeof(_g4_t_v13)) > _g4_s5 ? (27u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v14)) > _g4_s6 ? (28u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v15)) > _g4_s7 ? (32u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v16)) > _g4_s8 ? (36u + sizeof(_g4_t_v16)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v17)) > _g4_s9 ? (40u + sizeof(_g4_t_v17)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v18)) > _g4_s10 ? (44u + sizeof(_g4_t_v18)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v19)) > _g4_s11 ? (60u + sizeof(_g4_t_v19)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 27u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 60u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "transport", (int)(uintptr_t)(&v13));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v15), 1);
    v2 = (void *)(v15 - 12);
    if ( (uint32_t *)(v15 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 3502);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v19, a2);
        started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v19);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v19);
        return started;
      }
      else
      {
        HermesStatus = gaia::Gaia_Hermes::GetHermesStatus(self);
        if ( HermesStatus != 0 )
        {
          v10 = HermesStatus;
          gaia::GaiaRequest::SetResponseCode(a2, HermesStatus);
          return v10;
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), (char *)&unk_1B15112, (int)(uintptr_t)(&v14));
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "message", (int)(uintptr_t)(&v14) + 1);
          AccessToken = gaia::Gaia_Hermes::GetAccessToken(self, a2, &v17, (int)(uintptr_t)(&v16));
          v12 = (void *)(v17 - 12);
          if ( (uint32_t *)(v17 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
          {
            v11 = AccessToken;
            g4_std::string::Rep::M_destroy(v12);
            AccessToken = v11;
          }
          if ( AccessToken == 0 )
          {
            gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v18, (const char *)a2);
            v6 = Json::Value::asInt((Json::Value::Self *)v18);
            Json::Value::Destroy((Json::Value::Self *)v18);
            Instance = gaia::Gaia::GetInstance();
            AccessToken = gaia::Hermes::UnregisterDevices(
                            *(gaia::BaseServiceManager::Self **)(Instance + 12),
                            v6,
                            (int)(uintptr_t)(&v16),
                            (int)(uintptr_t)(a2));
          }
          v8 = AccessToken;
          gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
          g4_std::string::Destroy(&v16);
          return v8;
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
// Function: gaia::Gaia_Hermes::RegisterEndpoint  (binary VA: 0x147e650)
// Original: gaia::Gaia_Hermes::RegisterEndpoint
// ----------------------------------------------------------------------------
int gaia::Gaia_Hermes::RegisterEndpoint(gaia::Gaia_Hermes::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  int HermesStatus;
  int v5;
  int AccessToken;
  void *v7;
  int v8;
  int Instance;
  void *v10;
  int started;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint8_t _g4_t_v20[4];
  typedef int _g4_t_v21;
  typedef uint8_t _g4_t_v22[16];
  typedef uint8_t _g4_t_v23[16];
  typedef uint8_t _g4_t_v24[96];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (7u + sizeof(_g4_t_v13)) > _g4_s0 ? (7u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v15)) > _g4_s2 ? (16u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v16)) > _g4_s3 ? (20u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v17)) > _g4_s4 ? (24u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v18)) > _g4_s5 ? (28u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v19)) > _g4_s6 ? (32u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v20)) > _g4_s7 ? (36u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v21)) > _g4_s8 ? (40u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v22)) > _g4_s9 ? (44u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v23)) > _g4_s10 ? (60u + sizeof(_g4_t_v23)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v24)) > _g4_s11 ? (76u + sizeof(_g4_t_v24)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 7u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 44u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 76u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    started = -21;
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return started;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "endpoint", (int)(uintptr_t)(&v13));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v15), 4);
  v2 = (void *)(v15 - 12);
  if ( (uint32_t *)(v15 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "transport", (int)(uintptr_t)(&v14));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v16), 1);
  v3 = (void *)(v16 - 12);
  if ( (uint32_t *)(v16 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) == 0 )
    return gaia::GaiaRequest::GetResponseCode(a2);
  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
  {
    gaia::GaiaRequest::SetOperationCode(a2, 3501);
    gaia::Gaia::GetInstance();
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v24, a2);
    started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v24);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v24);
    return started;
  }
  HermesStatus = gaia::Gaia_Hermes::GetHermesStatus(self);
  v5 = HermesStatus;
  if ( HermesStatus != 0 )
  {
    gaia::GaiaRequest::SetResponseCode(a2, HermesStatus);
    return v5;
  }
  else
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), (char *)&unk_1B15112, (int)(uintptr_t)(&v14) + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), (char *)&unk_1B15112, (int)(uintptr_t)(&v14) + 2);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "message", (int)(uintptr_t)(&v14) + 3);
    AccessToken = gaia::Gaia_Hermes::GetAccessToken(self, a2, &v19, (int)(uintptr_t)(&v17));
    v7 = (void *)(v19 - 12);
    if ( (uint32_t *)(v19 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    if ( AccessToken != 0 )
    {
      gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
    }
    else
    {
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v22, (const char *)a2);
      Json::Value::asString((Json::Value::Self *)v20, (int)(uintptr_t)(v22));
      g4_std::string::assign_str(&v18, v20);
      g4_std::string::Destroy(v20);
      Json::Value::Destroy((Json::Value::Self *)v22);
      gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v23, (const char *)a2);
      v8 = Json::Value::asInt((Json::Value::Self *)v23);
      Json::Value::Destroy((Json::Value::Self *)v23);
      Instance = gaia::Gaia::GetInstance();
      AccessToken = gaia::Hermes::RegisterEndpoint(
                      *(gaia::BaseServiceManager::Self **)(Instance + 12),
                      (int)(uintptr_t)(&v18),
                      v8,
                      (int)(uintptr_t)(&v17),
                      (int)(uintptr_t)(a2));
      gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
      if ( AccessToken == 0 )
      {
        g4_std::string::construct_copy(&v21, &v18);
        if ( *(uint32_t *)(v21 - 12) == 0 )
          g4_std_compat::string_assign((int)(uintptr_t)(&v21), &a0[2], 1u);
        g4_std::string::Destroy(&v21);
      }
    }
    v10 = (void *)(v18 - 12);
    if ( (uint32_t *)(v18 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v10);
    }
    g4_std::string::Destroy(&v17);
    return AccessToken;
  }
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hermes::StartAndAuthorizeHermes  (binary VA: 0x14933c0)
// Original: gaia::Gaia_Hermes::StartAndAuthorizeHermes
// ----------------------------------------------------------------------------
int gaia::Gaia_Hermes::StartAndAuthorizeHermes(gaia::Gaia::Self *a1, int a2, uint32_t *a3)
{
  char IsInitialized;
  int result;
  int Instance;

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    result = gaia::Gaia_Hermes::GetHermesStatus((gaia::Gaia_Hermes::Self *)(a1));
    if ( result == 0 )
    {
      Instance = gaia::Gaia::GetInstance();
      return gaia::Gaia::Authorize(Instance, a3, a2, 0, 0, 0);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hermes::ListRegisteredDevices  (binary VA: 0x1493430)
// Original: gaia::Gaia_Hermes::ListRegisteredDevices
// ----------------------------------------------------------------------------
int gaia::Gaia_Hermes::ListRegisteredDevices(gaia::Gaia::Self *a1, int a2, int a3, int a4, char a5, int a6, int a7)
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
  typedef gaia::ThreadManager::Self *_g4_t_ptr;
  typedef uint16_t _g4_t_v18[3];
  typedef char *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint8_t _g4_t_v21[4];
  typedef uint8_t _g4_t_v22[16];
  typedef uint8_t _g4_t_v23[28];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (62u + sizeof(_g4_t_v18)) > _g4_s1 ? (62u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (68u + sizeof(_g4_t_v19)) > _g4_s2 ? (68u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (72u + sizeof(_g4_t_v20)) > _g4_s3 ? (72u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (76u + sizeof(_g4_t_v21)) > _g4_s4 ? (76u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (80u + sizeof(_g4_t_v22)) > _g4_s5 ? (80u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (96u + sizeof(_g4_t_v23)) > _g4_s6 ? (96u + sizeof(_g4_t_v23)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 62u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 68u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 72u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 76u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 80u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 96u);

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
        v11[2] = 3511;
        Json::Value::Construct((int)(uintptr_t)(v11 + 3), nullptr);
        v11[7] = 0;
        v11[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v11 + 9), nullptr);
        v11[13] = 0;
        v11[14] = 0;
        v11[15] = 0;
        v11[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v22, a2);
        v12 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v11 + 3), "accountType");
        Json::Value::opAssign(v12, (const Json::Value::Self *)v22);
        Json::Value::Destroy((Json::Value::Self *)v22);
        Json::Value::Construct((Json::Value::Self *)v23, a3);
        v13 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v11 + 3), "forTransport");
        Json::Value::opAssign(v13, (const Json::Value::Self *)v23);
        Json::Value::Destroy((Json::Value::Self *)v23);
        v11[7] = a4;
        v14 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(ptr));
        return gaia::ThreadManager::pushTask(v14, v11);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18[1]), "message", (int)(uintptr_t)(v18));
        InitializationAndLoginStatus = gaia::Gaia_Hermes::StartAndAuthorizeHermes(a1, a2, &v18[1]);
        v9 = (void *)(*(uint32_t *)&v18[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v18[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v18[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v9);
        }
        if ( InitializationAndLoginStatus == 0 )
        {
          v19 = nullptr;
          v20 = 0;
          v15 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(v21), v15);
          v16 = gaia::Gaia::GetInstance();
          InitializationAndLoginStatus = gaia::Hermes::ListRegisteredDevices(
                                           *(gaia::BaseServiceManager::Self **)(v16 + 12),
                                           a3,
                                           (int)(uintptr_t)(v21),
                                           (void **)&v19,
                                           &v20,
                                           0);
          g4_std::string::Destroy(v21);
          if ( InitializationAndLoginStatus == 0 )
            gaia::BaseServiceManager::ParseMessages(v19, v20, a4, 3);
          free(v19);
        }
      }
    }
  }
  return InitializationAndLoginStatus;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hermes::ShowSubscriptions  (binary VA: 0x1493710)
// Original: gaia::Gaia_Hermes::ShowSubscriptions
// ----------------------------------------------------------------------------
int gaia::Gaia_Hermes::ShowSubscriptions(gaia::Gaia::Self *a1, int a2, int a3, char a4, int a5, int a6)
{
  int InitializationAndLoginStatus;
  int Instance;
  void *v8;
  uint32_t *v10;
  Json::Value::Self *v11;
  int v12;
  int v13;
  int v14;
  typedef gaia::ThreadManager::Self *_g4_t_ptr;
  typedef uint16_t _g4_t_v16[3];
  typedef char *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint8_t _g4_t_v19[4];
  typedef uint8_t _g4_t_v20[28];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (62u + sizeof(_g4_t_v16)) > _g4_s1 ? (62u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (68u + sizeof(_g4_t_v17)) > _g4_s2 ? (68u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (72u + sizeof(_g4_t_v18)) > _g4_s3 ? (72u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (76u + sizeof(_g4_t_v19)) > _g4_s4 ? (76u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (80u + sizeof(_g4_t_v20)) > _g4_s5 ? (80u + sizeof(_g4_t_v20)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 62u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 68u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 72u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 76u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 80u);

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
        v10[2] = 3510;
        Json::Value::Construct((int)(uintptr_t)(v10 + 3), nullptr);
        v10[7] = 0;
        v10[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v10 + 9), nullptr);
        v10[13] = 0;
        v10[14] = 0;
        v10[15] = 0;
        v10[16] = 0;
        v10[7] = a3;
        Json::Value::Construct((Json::Value::Self *)v20, a2);
        v11 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v10 + 3), "accountType");
        Json::Value::opAssign(v11, (const Json::Value::Self *)v20);
        Json::Value::Destroy((Json::Value::Self *)v20);
        v12 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(ptr));
        return gaia::ThreadManager::pushTask(v12, v10);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16[1]), "message", (int)(uintptr_t)(v16));
        InitializationAndLoginStatus = gaia::Gaia_Hermes::StartAndAuthorizeHermes(a1, a2, &v16[1]);
        v8 = (void *)(*(uint32_t *)&v16[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v16[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v16[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v8);
        }
        if ( InitializationAndLoginStatus == 0 )
        {
          v17 = nullptr;
          v13 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(v19), v13);
          v14 = gaia::Gaia::GetInstance();
          InitializationAndLoginStatus = gaia::Hermes::ShowSubscriptions(
                                           *(gaia::BaseServiceManager::Self **)(v14 + 12),
                                           (int)(uintptr_t)(v19),
                                           (void **)&v17,
                                           &v18,
                                           0);
          g4_std::string::Destroy(v19);
          if ( InitializationAndLoginStatus == 0 )
            gaia::BaseServiceManager::ParseMessages(v17, v18, a3, 2);
          free(v17);
        }
      }
    }
  }
  return InitializationAndLoginStatus;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hermes::UpdateListSubscription  (binary VA: 0x1493990)
// Original: gaia::Gaia_Hermes::UpdateListSubscription
// ----------------------------------------------------------------------------
char gaia::Gaia_Hermes::UpdateListSubscription(gaia::Gaia::Self *a1, int a2, uint32_t *a3, char a4, char a5, int a6, int a7)
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
  typedef char _g4_t_updated;
  typedef unsigned int _g4_t_v21;
  typedef uint16_t _g4_t_v22[3];
  typedef int _g4_t_v23;
  typedef uint8_t _g4_t_v24[16];
  typedef uint8_t _g4_t_v25[16];
  typedef uint8_t _g4_t_v26[28];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v19)) > _g4_s0 ? (0u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_updated)) > _g4_s1 ? (36u + sizeof(_g4_t_updated)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v21)) > _g4_s2 ? (36u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (54u + sizeof(_g4_t_v22)) > _g4_s3 ? (54u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v23)) > _g4_s4 ? (60u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v24)) > _g4_s5 ? (64u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v25)) > _g4_s6 ? (80u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v26)) > _g4_s7 ? (96u + sizeof(_g4_t_v26)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_updated &updated = *reinterpret_cast<_g4_t_updated *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
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
          v11[2] = 3509;
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
          v13 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v11 + 3), "listName");
          Json::Value::opAssign(v13, (const Json::Value::Self *)v25);
          Json::Value::Destroy((Json::Value::Self *)v25);
          Json::Value::Construct((Json::Value::Self *)v26, a4);
          v14 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v11 + 3), "unsubscribe");
          Json::Value::opAssign(v14, (const Json::Value::Self *)v26);
          Json::Value::Destroy((Json::Value::Self *)v26);
          v15 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v19));
          LOBYTE(InitializationAndLoginStatus) = gaia::ThreadManager::pushTask(v15, v11);
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22[1]), "message", (int)(uintptr_t)(v22));
          InitializationAndLoginStatus = gaia::Gaia_Hermes::StartAndAuthorizeHermes(a1, a2, &v22[1]);
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
            updated = gaia::Hermes::UpdateListSubscription(
                        *(gaia::BaseServiceManager::Self **)(v17 + 12),
                        (int)(uintptr_t)(a3),
                        (int)(uintptr_t)(&v23),
                        a4,
                        0);
            g4_std::string::Destroy(&v23);
            LOBYTE(InitializationAndLoginStatus) = updated;
          }
        }
      }
    }
  }
  return InitializationAndLoginStatus;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hermes::UnSubscribeFromList  (binary VA: 0x1493c70)
// Original: gaia::Gaia_Hermes::UnSubscribeFromList
// ----------------------------------------------------------------------------
char gaia::Gaia_Hermes::UnSubscribeFromList(gaia::Gaia::Self *a1, int a2, uint32_t *a3, char a4, int a5, int a6)
{
  char IsInitialized;
  char result;

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
    return gaia::Gaia_Hermes::UpdateListSubscription(a1, a2, a3, 1, a4, a5, a6);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hermes::SubscribeToList  (binary VA: 0x1493ce0)
// Original: gaia::Gaia_Hermes::SubscribeToList
// ----------------------------------------------------------------------------
char gaia::Gaia_Hermes::SubscribeToList(gaia::Gaia::Self *a1, int a2, uint32_t *a3, char a4, int a5, int a6)
{
  char IsInitialized;
  char result;

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
    return gaia::Gaia_Hermes::UpdateListSubscription(a1, a2, a3, 0, a4, a5, a6);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hermes::DeleteAllMessages  (binary VA: 0x1493d50)
// Original: gaia::Gaia_Hermes::DeleteAllMessages
// ----------------------------------------------------------------------------
int gaia::Gaia_Hermes::DeleteAllMessages(gaia::Gaia::Self *a1, int a2, int a3, uint32_t *a4, char a5, int a6, int a7)
{
  char IsInitialized;
  int result;
  int Instance;
  void *v10;
  int v11;
  int v12;
  void *v13;
  uint32_t *v14;
  Json::Value::Self *v15;
  Json::Value::Self *v16;
  Json::Value::Self *v17;
  int v18;
  typedef gaia::ThreadManager::Self *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint8_t _g4_t_v22[7];
  typedef int _g4_t_v23;
  typedef uint8_t _g4_t_v24[16];
  typedef uint8_t _g4_t_v25[16];
  typedef uint8_t _g4_t_v26[28];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v19)) > _g4_s0 ? (0u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v20)) > _g4_s1 ? (44u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v21)) > _g4_s2 ? (44u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (53u + sizeof(_g4_t_v22)) > _g4_s3 ? (53u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v23)) > _g4_s4 ? (60u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v24)) > _g4_s5 ? (64u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v25)) > _g4_s6 ? (80u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v26)) > _g4_s7 ? (96u + sizeof(_g4_t_v26)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 53u);
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
    gaia::Gaia::GetInitializationAndLoginStatus(Instance, a2);
    if ( a5 != 0 )
    {
      v14 = (uint32_t *)opNew(0x44u);
      *v14 = a7;
      v14[1] = a6;
      v14[2] = 3508;
      Json::Value::Construct((int)(uintptr_t)(v14 + 3), nullptr);
      v14[7] = 0;
      v14[8] = 0;
      Json::Value::Construct((int)(uintptr_t)(v14 + 9), nullptr);
      v14[13] = 0;
      v14[14] = 0;
      v14[15] = 0;
      v14[16] = 0;
      Json::Value::Construct((Json::Value::Self *)v24, a2);
      v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "accountType");
      Json::Value::opAssign(v15, (const Json::Value::Self *)v24);
      Json::Value::Destroy((Json::Value::Self *)v24);
      Json::Value::Construct((Json::Value::Self *)v25, a3);
      v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "forTransport");
      Json::Value::opAssign(v16, (const Json::Value::Self *)v25);
      Json::Value::Destroy((Json::Value::Self *)v25);
      Json::Value::Construct((int)(uintptr_t)(v26), a4);
      v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "msgids");
      Json::Value::opAssign(v17, (const Json::Value::Self *)v26);
      Json::Value::Destroy((Json::Value::Self *)v26);
      v18 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v19));
      return gaia::ThreadManager::pushTask(v18, v14);
    }
    else
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22[3]), "message", (int)(uintptr_t)(v22));
      result = gaia::Gaia_Hermes::StartAndAuthorizeHermes(a1, a2, &v22[3]);
      v10 = (void *)(*(uint32_t *)&v22[3] - 12);
      if ( (uint32_t *)(*(uint32_t *)&v22[3] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v22[3] - 4), 0xFFFFFFFF) <= 0 )
      {
        v21 = result;
        g4_std::string::Rep::M_destroy(v10);
        result = v21;
      }
      if ( result == 0 )
      {
        v11 = gaia::Gaia::GetInstance();
        gaia::Gaia::GetJanusToken((int)(uintptr_t)(&v23), v11);
        v12 = gaia::Gaia::GetInstance();
        result = gaia::Hermes::DeleteAllMessages(*(gaia::BaseServiceManager::Self **)(v12 + 12), a3, (int)(uintptr_t)(a4), (int)(uintptr_t)(&v23), 0);
        v13 = (void *)(v23 - 12);
        if ( (uint32_t *)(v23 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
        {
          v20 = result;
          g4_std::string::Rep::M_destroy(v13);
          return v20;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hermes::DeleteMessage  (binary VA: 0x1494030)
// Original: gaia::Gaia_Hermes::DeleteMessage
// ----------------------------------------------------------------------------
char gaia::Gaia_Hermes::DeleteMessage(gaia::Gaia::Self *a1, int a2, int a3, uint32_t *a4, char a5, int a6, int a7)
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
  typedef char _g4_t_v20;
  typedef unsigned int _g4_t_v21;
  typedef uint16_t _g4_t_v22[3];
  typedef int _g4_t_v23;
  typedef uint8_t _g4_t_v24[16];
  typedef uint8_t _g4_t_v25[16];
  typedef uint8_t _g4_t_v26[28];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v19)) > _g4_s0 ? (0u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v20)) > _g4_s1 ? (40u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v21)) > _g4_s2 ? (40u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (54u + sizeof(_g4_t_v22)) > _g4_s3 ? (54u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v23)) > _g4_s4 ? (60u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v24)) > _g4_s5 ? (64u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v25)) > _g4_s6 ? (80u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v26)) > _g4_s7 ? (96u + sizeof(_g4_t_v26)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);
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
    if ( *(uint32_t *)(*a4 - 12) != 0 )
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
          v11[2] = 3507;
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
          Json::Value::Construct((Json::Value::Self *)v25, a3);
          v13 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v11 + 3), "forTransport");
          Json::Value::opAssign(v13, (const Json::Value::Self *)v25);
          Json::Value::Destroy((Json::Value::Self *)v25);
          Json::Value::Construct((int)(uintptr_t)(v26), a4);
          v14 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v11 + 3), "msgid");
          Json::Value::opAssign(v14, (const Json::Value::Self *)v26);
          Json::Value::Destroy((Json::Value::Self *)v26);
          v15 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v19));
          LOBYTE(InitializationAndLoginStatus) = gaia::ThreadManager::pushTask(v15, v11);
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22[1]), "message", (int)(uintptr_t)(v22));
          InitializationAndLoginStatus = gaia::Gaia_Hermes::StartAndAuthorizeHermes(a1, a2, &v22[1]);
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
            v20 = gaia::Hermes::DeleteMessage(*(gaia::BaseServiceManager::Self **)(v17 + 12), a3, (int)(uintptr_t)(a4), (int)(uintptr_t)(&v23), 0);
            g4_std::string::Destroy(&v23);
            LOBYTE(InitializationAndLoginStatus) = v20;
          }
        }
      }
    }
  }
  return InitializationAndLoginStatus;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hermes::RetrieveMessage  (binary VA: 0x1494300)
// Original: gaia::Gaia_Hermes::RetrieveMessage
// ----------------------------------------------------------------------------
int gaia::Gaia_Hermes::RetrieveMessage(gaia::Gaia::Self *a1, int a2, int a3, uint32_t *a4, int a5, char a6, char a7, int a8, int a9)
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
    LOWORD(InitializationAndLoginStatus) = -22;
    if ( *(uint32_t *)(*a4 - 12) != 0 )
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
          v13[2] = 3506;
          Json::Value::Construct((int)(uintptr_t)(v13 + 3), nullptr);
          v13[7] = 0;
          v13[8] = 0;
          Json::Value::Construct((int)(uintptr_t)(v13 + 9), nullptr);
          v13[13] = 0;
          v13[14] = 0;
          v13[15] = 0;
          v13[16] = 0;
          Json::Value::Construct((Json::Value::Self *)v26, a2);
          v14 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "accountType");
          Json::Value::opAssign(v14, (const Json::Value::Self *)v26);
          Json::Value::Destroy((Json::Value::Self *)v26);
          Json::Value::Construct((Json::Value::Self *)v27, a3);
          v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "forTransport");
          Json::Value::opAssign(v15, (const Json::Value::Self *)v27);
          Json::Value::Destroy((Json::Value::Self *)v27);
          Json::Value::Construct((int)(uintptr_t)(v28), a4);
          v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "msgid");
          Json::Value::opAssign(v16, (const Json::Value::Self *)v28);
          Json::Value::Destroy((Json::Value::Self *)v28);
          v13[7] = a5;
          Json::Value::Construct((Json::Value::Self *)v29, a6);
          v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "deleteAfterRetrieval");
          Json::Value::opAssign(v17, (const Json::Value::Self *)v29);
          Json::Value::Destroy((Json::Value::Self *)v29);
          v18 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(ptr));
          return gaia::ThreadManager::pushTask(v18, v13);
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22[1]), "message", (int)(uintptr_t)(v22));
          InitializationAndLoginStatus = gaia::Gaia_Hermes::StartAndAuthorizeHermes(a1, a2, &v22[1]);
          v11 = (void *)(*(uint32_t *)&v22[1] - 12);
          if ( (uint32_t *)(*(uint32_t *)&v22[1] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v22[1] - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v11);
          }
          if ( InitializationAndLoginStatus == 0 )
          {
            v23 = nullptr;
            v24 = 0;
            v19 = gaia::Gaia::GetInstance();
            gaia::Gaia::GetJanusToken((int)(uintptr_t)(v25), v19);
            v20 = gaia::Gaia::GetInstance();
            InitializationAndLoginStatus = gaia::Hermes::RetrieveMessage(
                                             *(gaia::BaseServiceManager::Self **)(v20 + 12),
                                             a3,
                                             (int)(uintptr_t)(a4),
                                             (int)(uintptr_t)(v25),
                                             (void **)&v23,
                                             &v24,
                                             0);
            g4_std::string::Destroy(v25);
            if ( InitializationAndLoginStatus == 0 )
              gaia::BaseServiceManager::ParseMessages(v23, v24, a5, 1);
            free(v23);
          }
        }
      }
    }
  }
  return InitializationAndLoginStatus;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hermes::RetrieveMessages  (binary VA: 0x14946a0)
// Original: gaia::Gaia_Hermes::RetrieveMessages
// ----------------------------------------------------------------------------
int gaia::Gaia_Hermes::RetrieveMessages(gaia::Gaia::Self *a1, int a2, int a3, int a4, char a5, char a6, int a7, int a8)
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
        v12 = (uint32_t *)opNew(0x44u);
        *v12 = a8;
        v12[1] = a7;
        v12[2] = 3505;
        Json::Value::Construct((int)(uintptr_t)(v12 + 3), nullptr);
        v12[7] = 0;
        v12[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v12 + 9), nullptr);
        v12[13] = 0;
        v12[7] = a4;
        v12[14] = 0;
        v12[15] = 0;
        v12[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v24, a2);
        v13 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v12 + 3), "accountType");
        Json::Value::opAssign(v13, (const Json::Value::Self *)v24);
        Json::Value::Destroy((Json::Value::Self *)v24);
        Json::Value::Construct((Json::Value::Self *)v25, a3);
        v14 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v12 + 3), "forTransport");
        Json::Value::opAssign(v14, (const Json::Value::Self *)v25);
        Json::Value::Destroy((Json::Value::Self *)v25);
        Json::Value::Construct((Json::Value::Self *)v26, a5);
        v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v12 + 3), "deleteAfterRetrieval");
        Json::Value::opAssign(v15, (const Json::Value::Self *)v26);
        Json::Value::Destroy((Json::Value::Self *)v26);
        v16 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(ptr));
        return gaia::ThreadManager::pushTask(v16, v12);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20[1]), "message", (int)(uintptr_t)(v20));
        InitializationAndLoginStatus = gaia::Gaia_Hermes::StartAndAuthorizeHermes(a1, a2, &v20[1]);
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
          InitializationAndLoginStatus = gaia::Hermes::RetrieveMessages(
                                           *(gaia::BaseServiceManager::Self **)(v18 + 12),
                                           a3,
                                           (int)(uintptr_t)(v23),
                                           (void **)&v21,
                                           &v22,
                                           a5,
                                           0);
          g4_std::string::Destroy(v23);
          if ( InitializationAndLoginStatus == 0 )
            gaia::BaseServiceManager::ParseMessages(v21, v22, a4, 1);
          free(v21);
        }
      }
    }
  }
  return InitializationAndLoginStatus;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hermes::SendMessageToMultipleUsers  (binary VA: 0x14949e0)
// Original: gaia::Gaia_Hermes::SendMessageToMultipleUsers
// ----------------------------------------------------------------------------
int gaia::Gaia_Hermes::SendMessageToMultipleUsers(long double a1, gaia::Gaia::Self *a2, int a3, Json::Value::Self *a4, int a5, void *a6, int a7, char a8, int a9, int a10)
{
  char IsInitialized;
  int result;
  int v12;
  int Instance;
  uint32_t *v14;
  Json::Value::Self *v15;
  Json::Value::Self *v16;
  Json::Value::Self *v17;
  int v18;
  void *v19;
  int *v20;
  int v21;
  int v22;
  Json::Value::Self *v23;
  typedef gaia::ThreadManager::Self *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef Json::Value::Self *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef uint8_t _g4_t_v29[7];
  typedef int _g4_t_v30;
  typedef void *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef uint32_t *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef uint8_t _g4_t_v36[16];
  typedef uint8_t _g4_t_v37[16];
  typedef uint8_t _g4_t_v38[16];
  typedef int (**_g4_t_v39)(int);
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef uint32_t _g4_t_v42[3];
  typedef int _g4_t_v43;
  typedef void *_g4_t_v44;
  typedef uint8_t *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef uint8_t _g4_t_v47[4];
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef uint32_t _g4_t_v50[29];
  typedef char _g4_t_v51;
  typedef char _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  enum : size_t {
    _g4_s0 = 448u,
    _g4_s1 = (0u + sizeof(_g4_t_v24)) > _g4_s0 ? (0u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (56u + sizeof(_g4_t_v25)) > _g4_s1 ? (56u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (56u + sizeof(_g4_t_v26)) > _g4_s2 ? (56u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v27)) > _g4_s3 ? (60u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (81u + sizeof(_g4_t_v28)) > _g4_s4 ? (81u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (85u + sizeof(_g4_t_v29)) > _g4_s5 ? (85u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (92u + sizeof(_g4_t_v30)) > _g4_s6 ? (92u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v31)) > _g4_s7 ? (96u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (100u + sizeof(_g4_t_v32)) > _g4_s8 ? (100u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (104u + sizeof(_g4_t_v33)) > _g4_s9 ? (104u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (108u + sizeof(_g4_t_v34)) > _g4_s10 ? (108u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (112u + sizeof(_g4_t_v35)) > _g4_s11 ? (112u + sizeof(_g4_t_v35)) : _g4_s11,
    _g4_s13 = (116u + sizeof(_g4_t_v36)) > _g4_s12 ? (116u + sizeof(_g4_t_v36)) : _g4_s12,
    _g4_s14 = (132u + sizeof(_g4_t_v37)) > _g4_s13 ? (132u + sizeof(_g4_t_v37)) : _g4_s13,
    _g4_s15 = (148u + sizeof(_g4_t_v38)) > _g4_s14 ? (148u + sizeof(_g4_t_v38)) : _g4_s14,
    _g4_s16 = (164u + sizeof(_g4_t_v39)) > _g4_s15 ? (164u + sizeof(_g4_t_v39)) : _g4_s15,
    _g4_s17 = (168u + sizeof(_g4_t_v40)) > _g4_s16 ? (168u + sizeof(_g4_t_v40)) : _g4_s16,
    _g4_s18 = (172u + sizeof(_g4_t_v41)) > _g4_s17 ? (172u + sizeof(_g4_t_v41)) : _g4_s17,
    _g4_s19 = (176u + sizeof(_g4_t_v42)) > _g4_s18 ? (176u + sizeof(_g4_t_v42)) : _g4_s18,
    _g4_s20 = (188u + sizeof(_g4_t_v43)) > _g4_s19 ? (188u + sizeof(_g4_t_v43)) : _g4_s19,
    _g4_s21 = (192u + sizeof(_g4_t_v44)) > _g4_s20 ? (192u + sizeof(_g4_t_v44)) : _g4_s20,
    _g4_s22 = (196u + sizeof(_g4_t_v45)) > _g4_s21 ? (196u + sizeof(_g4_t_v45)) : _g4_s21,
    _g4_s23 = (200u + sizeof(_g4_t_v46)) > _g4_s22 ? (200u + sizeof(_g4_t_v46)) : _g4_s22,
    _g4_s24 = (204u + sizeof(_g4_t_v47)) > _g4_s23 ? (204u + sizeof(_g4_t_v47)) : _g4_s23,
    _g4_s25 = (208u + sizeof(_g4_t_v48)) > _g4_s24 ? (208u + sizeof(_g4_t_v48)) : _g4_s24,
    _g4_s26 = (212u + sizeof(_g4_t_v49)) > _g4_s25 ? (212u + sizeof(_g4_t_v49)) : _g4_s25,
    _g4_s27 = (216u + sizeof(_g4_t_v50)) > _g4_s26 ? (216u + sizeof(_g4_t_v50)) : _g4_s26,
    _g4_s28 = (332u + sizeof(_g4_t_v51)) > _g4_s27 ? (332u + sizeof(_g4_t_v51)) : _g4_s27,
    _g4_s29 = (333u + sizeof(_g4_t_v52)) > _g4_s28 ? (333u + sizeof(_g4_t_v52)) : _g4_s28,
    _g4_s30 = (336u + sizeof(_g4_t_v53)) > _g4_s29 ? (336u + sizeof(_g4_t_v53)) : _g4_s29,
    _g4_s31 = (340u + sizeof(_g4_t_v54)) > _g4_s30 ? (340u + sizeof(_g4_t_v54)) : _g4_s30,
    _g4_s32 = (344u + sizeof(_g4_t_v55)) > _g4_s31 ? (344u + sizeof(_g4_t_v55)) : _g4_s31,
    _g4_s33 = (348u + sizeof(_g4_t_v56)) > _g4_s32 ? (348u + sizeof(_g4_t_v56)) : _g4_s32
  };
  alignas(16) uint8_t _g4_sf[_g4_s33];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 56u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 81u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 85u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 92u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 96u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 100u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 104u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 108u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 112u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 116u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 132u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 148u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 164u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 168u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 172u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 176u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 188u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 192u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 196u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 200u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 204u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 208u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 212u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 216u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 332u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 333u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 336u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 340u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 344u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 348u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    v12 = Json::Value::type(a4);
    result = -22;
    if ( v12 == 6 )
    {
      Instance = gaia::Gaia::GetInstance();
      result = gaia::Gaia::GetInitializationAndLoginStatus(Instance, a3);
      if ( result == 0 )
      {
        if ( a8 != 0 )
        {
          v14 = (uint32_t *)opNew(0x44u);
          *v14 = a10;
          v14[1] = a9;
          v14[2] = 3504;
          v27 = (Json::Value::Self *)(v14 + 3);
          Json::Value::Construct((int)(uintptr_t)(v14 + 3), nullptr);
          v14[7] = 0;
          v14[8] = 0;
          Json::Value::Construct((int)(uintptr_t)(v14 + 9), nullptr);
          v14[13] = 0;
          v14[14] = 0;
          v14[15] = 0;
          v14[16] = 0;
          Json::Value::Construct((Json::Value::Self *)v36, a3);
          v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "accountType");
          Json::Value::opAssign(v15, (const Json::Value::Self *)v36);
          Json::Value::Destroy((Json::Value::Self *)v36);
          v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "credentials");
          Json::Value::opAssign(v16, a4);
          v14[15] = a5;
          if ( a7 != 0 && a6 != nullptr )
          {
            sub_193A970((int)(uintptr_t)(&v29[3]), a6, a7, (int)(uintptr_t)(&v28));
            Json::Value::Construct((int)(uintptr_t)(v38), &v29[3]);
            v23 = (Json::Value::Self *)Json::Value::opIndex(v27, "payload");
            Json::Value::opAssign(v23, (const Json::Value::Self *)v38);
            Json::Value::Destroy((Json::Value::Self *)v38);
            g4_std::string::Destroy(&v29[3]);
          }
          else
          {
            Json::Value::Construct((Json::Value::Self *)v37, (const char *)&unk_1B15112);
            v17 = (Json::Value::Self *)Json::Value::opIndex(v27, "payload");
            Json::Value::opAssign(v17, (const Json::Value::Self *)v37);
            Json::Value::Destroy((Json::Value::Self *)v37);
          }
          v18 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v24));
          return gaia::ThreadManager::pushTask(v18, v14);
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "message", (int)(uintptr_t)(&v28) + 1);
          result = gaia::Gaia_Hermes::StartAndAuthorizeHermes(a2, a3, &v30);
          v19 = (void *)(v30 - 12);
          if ( (uint32_t *)(v30 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
          {
            v26 = result;
            g4_std::string::Rep::M_destroy(v19);
            result = v26;
          }
          if ( result == 0 )
          {
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), (char *)&unk_1B15112, (int)(uintptr_t)(&v28) + 2);
            sub_1900810(v50);
            v50[28] = 0;
            v51 = 0;
            v52 = 0;
            v53 = 0;
            v54 = 0;
            v55 = 0;
            v56 = 0;
            v39 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
            v50[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
            *(int (***)(int))((char *)&v39 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
            v40 = 0;
            sub_19119D0((char *)&v39 + (uint32_t)(uintptr_t)(*(v39 - 3)), 0);
            v41 = (int)(uintptr_t)(&off_20AAEEC);
            *(uint32_t *)((char *)&v42[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
            sub_19119D0((char *)&v42[-1] + *(uint32_t *)(v41 - 12), 0);
            v39 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
            *(int (***)(int))((char *)&v39 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
            v42[1] = 0;
            v42[2] = 0;
            v43 = 0;
            v44 = nullptr;
            v45 = nullptr;
            v39 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
            v50[0] = (uint32_t)(uintptr_t)(&off_20AB014);
            v41 = (int)((uint32_t)(uintptr_t)&off_20AB000);
            v46 = 0;
            v42[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
            sub_1903A70(v47);
            v48 = 0;
            v42[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
            sub_193A970((int)(uintptr_t)(&v49), v31, *((uint32_t *)v31 - 3), (int)(uintptr_t)(v29));
            v48 = 24;
            sub_1931CD0(v42, v49, 0, 0);
            sub_19119D0(v50, v42);
            g4_std::string::Destroy(&v31);
            Json::opShl(a1, (int)(uintptr_t)(&v41), a4);
            v33 = &dword_213B814;
            if ( v45 != nullptr )
            {
              if ( (unsigned int)(uintptr_t)(v45) > v43 )
              {
                v20 = &v35;
                sub_11A9950(&v35, v44, v45);
              }
              else
              {
                v20 = &v34;
                sub_11A9950(&v34, v44, (uint8_t *)v43);
              }
              g4_std::string::assign_str(&v33, v20);
              g4_std::string::Destroy(v20);
            }
            else
            {
              g4_std::string::assign_str(&v33, &v49);
            }
            v21 = gaia::Gaia::GetInstance();
            gaia::Gaia::GetJanusToken((int)(uintptr_t)(&v32), v21);
            v22 = gaia::Gaia::GetInstance();
            v25 = gaia::Hermes::SendMessageToMultipleUsers(
                    *(gaia::BaseServiceManager::Self **)(v22 + 12),
                    (int)(uintptr_t)(&v32),
                    (int)(uintptr_t)(&v33),
                    a5,
                    (int)(uintptr_t)(a6),
                    a7,
                    0);
            g4_std::string::Destroy(&v32);
            g4_std::string::Destroy(&v33);
            v39 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
            v50[0] = (uint32_t)(uintptr_t)(&off_20AB014);
            v41 = (int)((uint32_t)(uintptr_t)&off_20AB000);
            v42[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
            g4_std::string::Destroy(&v49);
            v42[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
            sub_1902180(v47);
            v39 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
            *(int (***)(int))((char *)&v39 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
            v41 = (int)(uintptr_t)(&off_20AAEEC);
            *(uint32_t *)((char *)&v42[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
            v39 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
            *(int (***)(int))((char *)&v39 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
            v40 = 0;
            v50[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
            sub_1900B90(v50);
            return v25;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hermes::SendMessageToUser  (binary VA: 0x1495150)
// Original: gaia::Gaia_Hermes::SendMessageToUser
// ----------------------------------------------------------------------------
int gaia::Gaia_Hermes::SendMessageToUser(gaia::Gaia::Self *a1, int a2, int a3, uint32_t *a4, int a5, uint32_t *a6, int a7, int a8, void *a9, int a10, char a11, char a12, int a13, int a14)
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
  Json::Value::Self *v30;
  typedef gaia::ThreadManager::Self *_g4_t_v31;
  typedef Json::Value::Self *_g4_t_v32;
  typedef Json::Value::Self *_g4_t_v33;
  typedef uint8_t _g4_t_v34[7];
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef uint8_t _g4_t_v37[16];
  typedef uint8_t _g4_t_v38[16];
  typedef uint8_t _g4_t_v39[16];
  typedef uint8_t _g4_t_v40[16];
  typedef uint8_t _g4_t_v41[16];
  typedef uint8_t _g4_t_v42[16];
  typedef uint8_t _g4_t_v43[16];
  typedef uint8_t _g4_t_v44[16];
  typedef uint8_t _g4_t_v45[44];
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (0u + sizeof(_g4_t_v31)) > _g4_s0 ? (0u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (56u + sizeof(_g4_t_v32)) > _g4_s1 ? (56u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (56u + sizeof(_g4_t_v33)) > _g4_s2 ? (56u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (65u + sizeof(_g4_t_v34)) > _g4_s3 ? (65u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (72u + sizeof(_g4_t_v35)) > _g4_s4 ? (72u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (76u + sizeof(_g4_t_v36)) > _g4_s5 ? (76u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v37)) > _g4_s6 ? (80u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v38)) > _g4_s7 ? (96u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (112u + sizeof(_g4_t_v39)) > _g4_s8 ? (112u + sizeof(_g4_t_v39)) : _g4_s8,
    _g4_s10 = (128u + sizeof(_g4_t_v40)) > _g4_s9 ? (128u + sizeof(_g4_t_v40)) : _g4_s9,
    _g4_s11 = (144u + sizeof(_g4_t_v41)) > _g4_s10 ? (144u + sizeof(_g4_t_v41)) : _g4_s10,
    _g4_s12 = (160u + sizeof(_g4_t_v42)) > _g4_s11 ? (160u + sizeof(_g4_t_v42)) : _g4_s11,
    _g4_s13 = (176u + sizeof(_g4_t_v43)) > _g4_s12 ? (176u + sizeof(_g4_t_v43)) : _g4_s12,
    _g4_s14 = (192u + sizeof(_g4_t_v44)) > _g4_s13 ? (192u + sizeof(_g4_t_v44)) : _g4_s13,
    _g4_s15 = (208u + sizeof(_g4_t_v45)) > _g4_s14 ? (208u + sizeof(_g4_t_v45)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 0u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 56u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 56u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 65u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 72u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 76u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 80u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 96u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 112u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 128u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 144u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 160u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 176u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 192u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 208u);

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    result = -22;
    if ( *(uint32_t *)(*a4 - 12) != 0 )
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
          v18[2] = 3503;
          Json::Value::Construct((int)(uintptr_t)(v18 + 3), nullptr);
          v18[7] = 0;
          v18[8] = 0;
          Json::Value::Construct((int)(uintptr_t)(v18 + 9), nullptr);
          v18[13] = 0;
          v18[14] = 0;
          v18[15] = 0;
          v18[16] = 0;
          Json::Value::Construct((Json::Value::Self *)v37, a2);
          v19 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v18 + 3), "accountType");
          Json::Value::opAssign(v19, (const Json::Value::Self *)v37);
          Json::Value::Destroy((Json::Value::Self *)v37);
          Json::Value::Construct((Json::Value::Self *)v38, a3);
          v20 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v18 + 3), "transport");
          Json::Value::opAssign(v20, (const Json::Value::Self *)v38);
          Json::Value::Destroy((Json::Value::Self *)v38);
          Json::Value::Construct((Json::Value::Self *)v39, a5);
          v21 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v18 + 3), "receiver_credential_type");
          Json::Value::opAssign(v21, (const Json::Value::Self *)v39);
          Json::Value::Destroy((Json::Value::Self *)v39);
          Json::Value::Construct((int)(uintptr_t)(v40), a4);
          v22 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v18 + 3), "receiver_username");
          Json::Value::opAssign(v22, (const Json::Value::Self *)v40);
          Json::Value::Destroy((Json::Value::Self *)v40);
          Json::Value::Construct((int)(uintptr_t)(v41), a6);
          v23 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v18 + 3), "replace_label");
          Json::Value::opAssign(v23, (const Json::Value::Self *)v41);
          Json::Value::Destroy((Json::Value::Self *)v41);
          Json::Value::Construct((Json::Value::Self *)v42, a7);
          v24 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v18 + 3), "delay");
          Json::Value::opAssign(v24, (const Json::Value::Self *)v42);
          Json::Value::Destroy((Json::Value::Self *)v42);
          v18[15] = a8;
          if ( a10 != 0 && a9 != nullptr )
          {
            sub_193A970((int)(uintptr_t)(&v34[3]), a9, a10, (int)(uintptr_t)(v34));
            Json::Value::Construct((int)(uintptr_t)(v44), &v34[3]);
            v30 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v18 + 3), "payload");
            Json::Value::opAssign(v30, (const Json::Value::Self *)v44);
            Json::Value::Destroy((Json::Value::Self *)v44);
            g4_std::string::Destroy(&v34[3]);
          }
          else
          {
            Json::Value::Construct((Json::Value::Self *)v43, (const char *)&unk_1B15112);
            v25 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v18 + 3), "payload");
            Json::Value::opAssign(v25, (const Json::Value::Self *)v43);
            Json::Value::Destroy((Json::Value::Self *)v43);
          }
          if ( a11 != 0 )
          {
            Json::Value::Construct((Json::Value::Self *)v45, "True");
            v26 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v18 + 3), "alert_kairos");
            Json::Value::opAssign(v26, (const Json::Value::Self *)v45);
            Json::Value::Destroy((Json::Value::Self *)v45);
          }
          v27 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v31));
          return gaia::ThreadManager::pushTask(v27, v18);
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "message", (int)(uintptr_t)(&v34[1]));
          result = gaia::Gaia_Hermes::StartAndAuthorizeHermes(a1, a2, &v35);
          v17 = (void *)(v35 - 12);
          if ( (uint32_t *)(v35 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v35 - 4), 0xFFFFFFFF) <= 0 )
          {
            v33 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v17);
            result = (int)(uintptr_t)(v33);
          }
          if ( result == 0 )
          {
            v28 = gaia::Gaia::GetInstance();
            gaia::Gaia::GetJanusToken((int)(uintptr_t)(&v36), v28);
            v29 = gaia::Gaia::GetInstance();
            v32 = (Json::Value::Self *)gaia::Hermes::SendMessageToUser(
                                   *(gaia::BaseServiceManager::Self **)(v29 + 12),
                                   a3,
                                   (int)(uintptr_t)(a4),
                                   a5,
                                   (int)(uintptr_t)(&v36),
                                   (int)(uintptr_t)(a6),
                                   a8,
                                   (int)(uintptr_t)(a9),
                                   a10,
                                   a7,
                                   a11,
                                   0);
            g4_std::string::Destroy(&v36);
            return (int)(uintptr_t)(v32);
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Hermes::UnregisterDevices  (binary VA: 0x1495640)
// Original: gaia::Gaia_Hermes::UnregisterDevices
// ----------------------------------------------------------------------------
int gaia::Gaia_Hermes::UnregisterDevices(gaia::Gaia::Self *a1, int a2, int a3, char a4, int a5, int a6)
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
        v10[2] = 3502;
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
        Json::Value::Construct((Json::Value::Self *)v22, a3);
        v12 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v10 + 3), "transport");
        Json::Value::opAssign(v12, (const Json::Value::Self *)v22);
        Json::Value::Destroy((Json::Value::Self *)v22);
        v13 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v16));
        return gaia::ThreadManager::pushTask(v13, v10);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19[1]), "message", (int)(uintptr_t)(v19));
        result = gaia::Gaia_Hermes::StartAndAuthorizeHermes(a1, a2, &v19[1]);
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
          v17 = (Json::Value::Self *)gaia::Hermes::UnregisterDevices(
                                 *(gaia::BaseServiceManager::Self **)(v15 + 12),
                                 a3,
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
// Function: gaia::Gaia_Hermes::RegisterEndpoint  (binary VA: 0x1495890)
// Original: gaia::Gaia_Hermes::RegisterEndpoint
// ----------------------------------------------------------------------------
int gaia::Gaia_Hermes::RegisterEndpoint(gaia::Gaia::Self *a1, int a2, uint32_t *a3, int a4, char a5, int a6, int a7)
{
  int InitializationAndLoginStatus;
  int Instance;
  void *v9;
  uint32_t *v11;
  Json::Value::Self *v12;
  Json::Value::Self *v13;
  Json::Value::Self *v14;
  int v15;
  int v16;
  int v17;
  typedef gaia::ThreadManager::Self *_g4_t_v18;
  typedef uint16_t _g4_t_v19[3];
  typedef uint8_t _g4_t_v20[4];
  typedef int _g4_t_v21;
  typedef uint8_t _g4_t_v22[16];
  typedef uint8_t _g4_t_v23[16];
  typedef uint8_t _g4_t_v24[28];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v18)) > _g4_s0 ? (0u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (50u + sizeof(_g4_t_v19)) > _g4_s1 ? (50u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (56u + sizeof(_g4_t_v20)) > _g4_s2 ? (56u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v21)) > _g4_s3 ? (60u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v22)) > _g4_s4 ? (64u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (80u + sizeof(_g4_t_v23)) > _g4_s5 ? (80u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (96u + sizeof(_g4_t_v24)) > _g4_s6 ? (96u + sizeof(_g4_t_v24)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 50u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 56u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 60u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 64u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 80u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 96u);

  gaia::Gaia::GetInstance();
  InitializationAndLoginStatus = -21;
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    LOWORD(InitializationAndLoginStatus) = -22;
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
          v11[2] = 3501;
          Json::Value::Construct((int)(uintptr_t)(v11 + 3), nullptr);
          v11[7] = 0;
          v11[8] = 0;
          Json::Value::Construct((int)(uintptr_t)(v11 + 9), nullptr);
          v11[13] = 0;
          v11[14] = 0;
          v11[15] = 0;
          v11[16] = 0;
          Json::Value::Construct((Json::Value::Self *)v22, a2);
          v12 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v11 + 3), "accountType");
          Json::Value::opAssign(v12, (const Json::Value::Self *)v22);
          Json::Value::Destroy((Json::Value::Self *)v22);
          Json::Value::Construct((Json::Value::Self *)v23, a4);
          v13 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v11 + 3), "transport");
          Json::Value::opAssign(v13, (const Json::Value::Self *)v23);
          Json::Value::Destroy((Json::Value::Self *)v23);
          Json::Value::Construct((int)(uintptr_t)(v24), a3);
          v14 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v11 + 3), "endpoint");
          Json::Value::opAssign(v14, (const Json::Value::Self *)v24);
          Json::Value::Destroy((Json::Value::Self *)v24);
          v15 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v18));
          return gaia::ThreadManager::pushTask(v15, v11);
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19[1]), "message", (int)(uintptr_t)(v19));
          InitializationAndLoginStatus = gaia::Gaia_Hermes::StartAndAuthorizeHermes(a1, a2, &v19[1]);
          v9 = (void *)(*(uint32_t *)&v19[1] - 12);
          if ( (uint32_t *)(*(uint32_t *)&v19[1] - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v19[1] - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v9);
          }
          if ( InitializationAndLoginStatus == 0 )
          {
            v16 = gaia::Gaia::GetInstance();
            gaia::Gaia::GetJanusToken((int)(uintptr_t)(v20), v16);
            v17 = gaia::Gaia::GetInstance();
            InitializationAndLoginStatus = gaia::Hermes::RegisterEndpoint(
                                             *(gaia::BaseServiceManager::Self **)(v17 + 12),
                                             (int)(uintptr_t)(a3),
                                             a4,
                                             (int)(uintptr_t)(v20),
                                             0);
            g4_std::string::Destroy(v20);
            if ( InitializationAndLoginStatus == 0 )
            {
              g4_std::string::construct_copy(&v21, a3);
              if ( *(uint32_t *)(v21 - 12) == 0 )
                g4_std_compat::string_assign((int)(uintptr_t)(&v21), &a0[2], 1u);
              g4_std::string::Destroy(&v21);
            }
          }
        }
      }
    }
  }
  return InitializationAndLoginStatus;
}


