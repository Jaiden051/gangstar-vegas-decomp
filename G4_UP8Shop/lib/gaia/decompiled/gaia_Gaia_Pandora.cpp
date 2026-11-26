#include "Core/Utils/DecompTypes.h"
#include "gaia_Gaia_Pandora.h"

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Pandora::GetServiceUrl  (binary VA: 0x1448140)
// Original: gaia::Gaia_Pandora::GetServiceUrl
// ----------------------------------------------------------------------------
int gaia::Gaia_Pandora::GetServiceUrl(int a1, int a2, Json::Value::Self *a3, int a4, char a5, int a6, int a7)
{
  char IsInitialized;
  int result;
  int v9;
  uint32_t *v10;
  Json::Value::Self *v11;
  Json::Value::Self *v12;
  int Instance;
  typedef gaia::ThreadManager::Self *_g4_t_v14;
  typedef uint8_t _g4_t_v15[16];
  typedef uint8_t _g4_t_v16[28];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (48u + sizeof(_g4_t_v15)) > _g4_s1 ? (48u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_v16)) > _g4_s2 ? (64u + sizeof(_g4_t_v16)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 48u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 64u);

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
      v10[2] = 3003;
      Json::Value::Construct((int)(uintptr_t)(v10 + 3), nullptr);
      v10[7] = 0;
      v10[8] = 0;
      Json::Value::Construct((int)(uintptr_t)(v10 + 9), nullptr);
      v10[13] = 0;
      v10[14] = 0;
      v10[15] = 0;
      v10[16] = 0;
      Json::Value::Construct((Json::Value::Self *)v15, a2);
      v11 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v10 + 3), "accountType");
      Json::Value::opAssign(v11, (const Json::Value::Self *)v15);
      Json::Value::Destroy((Json::Value::Self *)v15);
      Json::Value::Construct((Json::Value::Self *)v16, (const char *)a3);
      v12 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v10 + 3), "serviceName");
      Json::Value::opAssign(v12, (const Json::Value::Self *)v16);
      Json::Value::Destroy((Json::Value::Self *)v16);
      v10[15] = a4;
      Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v14));
      return gaia::ThreadManager::pushTask(Instance, v10);
    }
    else
    {
      v9 = gaia::Gaia::GetInstance();
      return gaia::Pandora::GetServiceUrl(*(uint32_t *)(v9 + 48), a2, a3, a4, 0, 0, a6, a7);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Pandora::GetPandoraUrl  (binary VA: 0x1448360)
// Original: gaia::Gaia_Pandora::GetPandoraUrl
// ----------------------------------------------------------------------------
int gaia::Gaia_Pandora::GetPandoraUrl(gaia::Gaia_Pandora::Self *self, gaia::GaiaRequest::Self *a2)
{
  Json::Value::Self *v2;
  int Instance;
  int started;
  void *v5;
  uint32_t *v6;
  uint32_t *v7;
  void *v8;
  int v10;
  int v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint32_t *_g4_t_v14;
  typedef uint32_t *_g4_t_v15;
  typedef uint8_t _g4_t_v16[4];
  typedef int _g4_t_v17;
  typedef uint8_t _g4_t_v18[80];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (3u + sizeof(_g4_t_v12)) > _g4_s0 ? (3u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v14)) > _g4_s2 ? (12u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v15)) > _g4_s3 ? (16u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v16)) > _g4_s4 ? (20u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v17)) > _g4_s5 ? (24u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v18)) > _g4_s6 ? (28u + sizeof(_g4_t_v18)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 3u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "dataCenter", (int)(uintptr_t)(&v12));
  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0
    || (gaia::Gaia::GetInstance(), (uint8_t)gaia::Gaia::IsInitializing() != 0) )
  {
    gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v13), 4);
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 503);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v18, a2);
        started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v18);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v18);
      }
      else
      {
        v14 = &dword_213B814;
        v15 = &dword_213B814;
        v2 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v13);
        if ( Json::Value::type(v2) == 4 )
        {
          v11 = gaia::GaiaRequest::opIndex(a2, &v13);
          Json::Value::asString((Json::Value::Self *)v16, v11);
          g4_std::string::assign_str(&v14, v16);
          g4_std::string::Destroy(v16);
        }
        if ( *(v14 - 3) != 0 )
        {
          g4_std::string::construct_copy(&v17, &v14);
          Instance = gaia::Gaia::GetInstance();
          started = gaia::Pandora::GetPandoraUrlFromDataCenter(*(uint32_t *)(Instance + 48), &v17, &v15, a2);
          v5 = (void *)(v17 - 12);
          if ( (uint32_t *)(v17 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v5);
          }
        }
        else
        {
          v10 = gaia::Gaia::GetInstance();
          started = gaia::Pandora::GetPandoraUrl(*(uint32_t *)(v10 + 48), &v15, a2);
        }
        gaia::GaiaRequest::SetResponseCode(a2, started);
        gaia::GaiaRequest::GetResponse(a2, &v15);
        v6 = v15 - 3;
        if ( v15 - 3 != dword_213B808 && __sync_fetch_and_add(v15 - 1, 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v6);
        v7 = v14 - 3;
        if ( v14 - 3 != dword_213B808 && __sync_fetch_and_add(v14 - 1, 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v7);
      }
    }
    else
    {
      started = gaia::GaiaRequest::GetResponseCode(a2);
    }
  }
  else
  {
    started = -21;
    gaia::GaiaRequest::SetResponseCode(a2, -21);
  }
  v8 = (void *)(v13 - 12);
  if ( (uint32_t *)(v13 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  return started;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Pandora::GetServiceUrl  (binary VA: 0x1448690)
// Original: gaia::Gaia_Pandora::GetServiceUrl
// ----------------------------------------------------------------------------
int gaia::Gaia_Pandora::GetServiceUrl(gaia::Gaia_Pandora::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  Json::Value::Self *v4;
  int v5;
  int v6;
  void *v7;
  void *v8;
  Json::Value::Self *v9;
  int Instance;
  int ServiceUrl;
  int result;
  void *v13;
  char *v14;
  Json::Value::Self *v15;
  typedef char *_g4_t_v16;
  typedef char *_g4_t_v17;
  typedef char *_g4_t_started;
  typedef char *_g4_t_v19;
  typedef void *_g4_t_v20;
  typedef char _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef Json::Value::Self *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef uint8_t _g4_t_v34[96];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v17)) > _g4_s1 ? (0u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_started)) > _g4_s2 ? (0u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v19)) > _g4_s3 ? (0u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v20)) > _g4_s4 ? (8u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v21)) > _g4_s5 ? (8u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v22)) > _g4_s6 ? (12u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (30u + sizeof(_g4_t_v23)) > _g4_s7 ? (30u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v24)) > _g4_s8 ? (32u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v25)) > _g4_s9 ? (36u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v26)) > _g4_s10 ? (44u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v27)) > _g4_s11 ? (48u + sizeof(_g4_t_v27)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v28)) > _g4_s12 ? (52u + sizeof(_g4_t_v28)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v29)) > _g4_s13 ? (56u + sizeof(_g4_t_v29)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v30)) > _g4_s14 ? (60u + sizeof(_g4_t_v30)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v31)) > _g4_s15 ? (64u + sizeof(_g4_t_v31)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v32)) > _g4_s16 ? (68u + sizeof(_g4_t_v32)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v33)) > _g4_s17 ? (72u + sizeof(_g4_t_v33)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v34)) > _g4_s18 ? (76u + sizeof(_g4_t_v34)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 30u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 52u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 56u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 60u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 64u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 68u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 72u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 76u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "serviceName", (int)(uintptr_t)(&v23));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v26), 4);
    v2 = (void *)(v26 - 12);
    if ( (uint32_t *)(v26 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "accountType", (int)(uintptr_t)(&v23) + 1);
    gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v27), 1);
    v3 = (void *)(v27 - 12);
    if ( (uint32_t *)(v27 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 3002);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v34, a2);
        started = (char *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v34);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v34);
        return (int)(uintptr_t)(started);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), (char *)&unk_1B15112, (int)(uintptr_t)(&v24));
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), (char *)&unk_1B15112, (int)(uintptr_t)(&v24) + 1);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "accountType", (int)(uintptr_t)(&v24) + 2);
        v4 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v30);
        v5 = Json::Value::type(v4);
        v20 = (void *)(v30 - 12);
        if ( (uint32_t *)(v30 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
        {
          v19 = (char *)v5;
          g4_std::string::Rep::M_destroy(v20);
          v5 = (int)(uintptr_t)(v19);
        }
        v21 = 0;
        if ( v5 == 1 )
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "accountType", (int)(uintptr_t)(&v24) + 3);
          v15 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v31);
          v22 = Json::Value::asInt(v15);
          g4_std::string::Destroy(&v31);
          v21 = 1;
        }
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "serviceName", (int)(uintptr_t)(&v25));
        v6 = gaia::GaiaRequest::opIndex(a2, &v32);
        Json::Value::asString((Json::Value::Self *)&v33, v6);
        g4_std::string::assign_str(&v28, &v33);
        v7 = (void *)(v33 - 12);
        if ( (uint32_t *)(v33 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v7);
        }
        v8 = (void *)(v32 - 12);
        if ( (uint32_t *)(v32 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v32 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v8);
        }
        v9 = v28;
        Instance = gaia::Gaia::GetInstance();
        if ( v21 != 0 )
          ServiceUrl = gaia::Pandora::GetServiceUrl(*(uint32_t *)(Instance + 48), v22, v9, (int)(uintptr_t)(&v29), (int)(uintptr_t)(a2), 0, 0, 0);
        else
          ServiceUrl = gaia::Pandora::GetServiceUrl(*(uint32_t *)(Instance + 48), v9, (int)(uintptr_t)(&v29), (int)(uintptr_t)(a2), 0, 0, 0);
        v16 = (char *)ServiceUrl;
        gaia::GaiaRequest::SetResponseCode(a2, ServiceUrl);
        gaia::GaiaRequest::SetResponse(a2, &v29);
        result = (int)(uintptr_t)(v16);
        v13 = (void *)(v29 - 12);
        if ( (uint32_t *)(v29 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v13);
          result = (int)(uintptr_t)(v16);
        }
        v14 = (char *)v28 - 12;
        if ( (uint32_t *)((char *)v28 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)v28 - 1, 0xFFFFFFFF) <= 0 )
        {
          v17 = (char *)result;
          g4_std::string::Rep::M_destroy(v14);
          return (int)(uintptr_t)(v17);
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
// Function: gaia::Gaia_Pandora::GetCachedUrlFromEve  (binary VA: 0x1448b60)
// Original: gaia::Gaia_Pandora::GetCachedUrlFromEve
// ----------------------------------------------------------------------------
int gaia::Gaia_Pandora::GetCachedUrlFromEve(int a1, int a2, int a3)
{
  char IsInitialized;
  int result;
  int Instance;

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    Instance = gaia::Gaia::GetInstance();
    return gaia::Pandora::GetCachedUrlFromEve(*(uint32_t *)(Instance + 48), a2, a3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Pandora::getServerTimeStamp  (binary VA: 0x144a670)
// Original: gaia::Gaia_Pandora::getServerTimeStamp
// ----------------------------------------------------------------------------
int gaia::Gaia_Pandora::getServerTimeStamp(gaia::Gaia_Pandora::Self *self, gaia::GaiaRequest::Self *a2)
{
  int Instance;
  int started;
  typedef int _g4_t_v5;
  typedef uint8_t _g4_t_v6[68];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
    {
      gaia::GaiaRequest::SetOperationCode(a2, 3001);
      gaia::Gaia::GetInstance();
      gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v6, a2);
      started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v6);
      gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v6);
    }
    else
    {
      v5 = 0;
      Instance = gaia::Gaia::GetInstance();
      started = gaia::Pandora::GetServerTimeStamp(*(gaia::Pandora::Self **)(Instance + 48), &v5, a2);
      gaia::GaiaRequest::SetResponseCode(a2, started);
      gaia::GaiaRequest::SetResponse(a2, v5);
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
// Function: gaia::Gaia_Pandora::GetServiceUrl  (binary VA: 0x144a7a0)
// Original: gaia::Gaia_Pandora::GetServiceUrl
// ----------------------------------------------------------------------------
int gaia::Gaia_Pandora::GetServiceUrl(int a1, Json::Value::Self *a2, int a3, char a4, int a5, int a6)
{
  char IsInitialized;
  int result;
  int v8;
  uint32_t *v9;
  Json::Value::Self *v10;
  int Instance;
  typedef gaia::ThreadManager::Self *_g4_t_v12;
  typedef uint8_t _g4_t_v13[28];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (48u + sizeof(_g4_t_v13)) > _g4_s1 ? (48u + sizeof(_g4_t_v13)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 48u);

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
      v9[2] = 3002;
      Json::Value::Construct((int)(uintptr_t)(v9 + 3), nullptr);
      v9[7] = 0;
      v9[8] = 0;
      Json::Value::Construct((int)(uintptr_t)(v9 + 9), nullptr);
      v9[13] = 0;
      v9[14] = 0;
      v9[15] = 0;
      v9[16] = 0;
      Json::Value::Construct((Json::Value::Self *)v13, (const char *)a2);
      v10 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v9 + 3), "serviceName");
      Json::Value::opAssign(v10, (const Json::Value::Self *)v13);
      Json::Value::Destroy((Json::Value::Self *)v13);
      v9[15] = a3;
      Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v12));
      return gaia::ThreadManager::pushTask(Instance, v9);
    }
    else
    {
      v8 = gaia::Gaia::GetInstance();
      return gaia::Pandora::GetServiceUrl(*(uint32_t *)(v8 + 48), a2, a3, 0, 0, a5, a6);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Pandora::getServerTimeStamp  (binary VA: 0x14519b0)
// Original: gaia::Gaia_Pandora::getServerTimeStamp
// ----------------------------------------------------------------------------
int gaia::Gaia_Pandora::getServerTimeStamp(int a1, int *a2, char a3, int a4, int a5)
{
  char IsInitialized;
  int result;
  int v7;
  uint32_t *v8;
  int Instance;
  gaia::ThreadManager::Self *v10;

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    if ( a3 != 0 )
    {
      v8 = (uint32_t *)opNew(0x44u);
      *v8 = a5;
      v8[1] = a4;
      v8[2] = 3001;
      Json::Value::Construct((int)(uintptr_t)(v8 + 3), nullptr);
      v8[7] = 0;
      v8[8] = 0;
      Json::Value::Construct((int)(uintptr_t)(v8 + 9), nullptr);
      v8[13] = 0;
      v8[14] = 0;
      v8[16] = 0;
      v8[15] = (uint32_t)(uintptr_t)(a2);
      Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v10));
      return gaia::ThreadManager::pushTask(Instance, v8);
    }
    else
    {
      v7 = gaia::Gaia::GetInstance();
      return gaia::Pandora::GetServerTimeStamp(*(gaia::Pandora::Self **)(v7 + 48), a2, nullptr);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Pandora::CancelRequest  (binary VA: 0x1451b00)
// Original: gaia::Gaia_Pandora::CancelRequest
// ----------------------------------------------------------------------------
int gaia::Gaia_Pandora::CancelRequest(glwebtools::Mutex::Self *a1, int a2)
{
  glwebtools::Mutex::Self *v2;
  int v3;
  int v4;
  int Instance;
  glwebtools::Mutex::Self *v7;
  glwebtools::Mutex::Self *v8;

  v2 = (glwebtools::Mutex::Self *)(gaia::Gaia::GetInstance() + 392);
  glwebtools::Mutex::Lock(v2);
  if ( gaia::Gaia::s_IsInitializing != 0 || (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    glwebtools::Mutex::Unlock(v2);
    glwebtools::Mutex::Lock(a1);
    if ( *(uint32_t *)(gaia::Gaia::GetInstance() + 48) != 0 )
    {
      if ( a2 == 1 )
      {
        Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v7));
        gaia::ThreadManager::CancelRequest(Instance, 3000);
      }
      v3 = gaia::Gaia::GetInstance();
      v4 = gaia::BaseServiceManager::CancelRequest(*(uint32_t *)(v3 + 48), a2);
      glwebtools::Mutex::Unlock(a1);
    }
    else
    {
      v4 = 0;
      glwebtools::Mutex::Unlock(a1);
    }
  }
  else
  {
    v8 = v2;
    v4 = -21;
    glwebtools::Mutex::Unlock(v8);
  }
  return v4;
}


