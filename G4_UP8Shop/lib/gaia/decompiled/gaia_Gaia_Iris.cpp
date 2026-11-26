#include "Core/Utils/DecompTypes.h"
#include "gaia_Gaia_Iris.h"

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Iris::CancelRequest  (binary VA: 0x1447430)
// Original: gaia::Gaia_Iris::CancelRequest
// ----------------------------------------------------------------------------
int gaia::Gaia_Iris::CancelRequest(glwebtools::Mutex::Self *a1, int a2)
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
    if ( *(uint32_t *)(gaia::Gaia::GetInstance() + 28) != 0 )
    {
      if ( a2 == 1 )
      {
        Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v7));
        gaia::ThreadManager::CancelRequest(Instance, 4500);
      }
      v3 = gaia::Gaia::GetInstance();
      v2 = gaia::BaseServiceManager::CancelRequest(*(uint32_t *)(v3 + 28), a2);
      glwebtools::Mutex::Unlock(a1);
    }
    else
    {
      v6 = gaia::Gaia::GetInstance();
      v2 = 0;
      gaia::BaseServiceManager::CancelRequest(*(uint32_t *)(v6 + 48), 3012);
      glwebtools::Mutex::Unlock(a1);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Iris::GetIrisStatus  (binary VA: 0x144ea90)
// Original: gaia::Gaia_Iris::GetIrisStatus
// ----------------------------------------------------------------------------
int gaia::Gaia_Iris::GetIrisStatus(gaia::Gaia_Iris::Self *self)
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
    v2 = (glwebtools::Mutex::Self *)(gaia::Gaia::GetInstance() + 448);
    glwebtools::Mutex::Lock(v2);
    ServiceUrl = 0;
    if ( *(uint32_t *)(gaia::Gaia::GetInstance() + 28) == 0 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v7) + 1, (char *)&unk_1B15112, (int)(uintptr_t)(v7));
      Instance = gaia::Gaia::GetInstance();
      ServiceUrl = gaia::Gaia::GetServiceUrl(Instance, "asset", (int)(uintptr_t)(v7) + 1, 0, 0, 0);
      glwebtools::Mutex::Lock(self);
      if ( ServiceUrl != 0
        || (v6 = gaia::Gaia::GetInstance(),
            v5 = (gaia::BaseServiceManager::Self *)opNew(0x9Cu),
            gaia::Iris::Construct(v5, (int)(uintptr_t)(v7) + 1, v6 + 240),
            *(uint32_t *)(gaia::Gaia::GetInstance() + 28) = (uint32_t)(uintptr_t)(v5),
            *(uint32_t *)(gaia::Gaia::GetInstance() + 28) == 0) )
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
// Function: gaia::Gaia_Iris::RedeemCoupon  (binary VA: 0x144ec00)
// Original: gaia::Gaia_Iris::RedeemCoupon
// ----------------------------------------------------------------------------
int gaia::Gaia_Iris::RedeemCoupon(gaia::Gaia::Self *a1, uint32_t *a2, void **a3, int *a4, char a5, int a6, int a7)
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

  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    if ( a5 != 0 )
    {
      v10 = (uint32_t *)opNew(0x44u);
      *v10 = a7;
      v10[1] = a6;
      v10[2] = 4507;
      Json::Value::Construct((int)(uintptr_t)(v10 + 3), nullptr);
      v10[7] = 0;
      v10[8] = 0;
      Json::Value::Construct((int)(uintptr_t)(v10 + 9), nullptr);
      v10[13] = 0;
      v10[14] = 0;
      v10[15] = 0;
      v10[16] = 0;
      Json::Value::Construct((int)(uintptr_t)(v14), a2);
      v11 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v10 + 3), "coupon_code");
      Json::Value::opAssign(v11, (const Json::Value::Self *)v14);
      Json::Value::Destroy((Json::Value::Self *)v14);
      v10[15] = (uint32_t)(uintptr_t)(a3);
      v10[16] = (uint32_t)(uintptr_t)(a4);
      Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v13));
      return gaia::ThreadManager::pushTask(Instance, v10);
    }
    else
    {
      result = gaia::Gaia_Iris::GetIrisStatus((gaia::Gaia_Iris::Self *)(a1));
      if ( result == 0 )
      {
        v9 = gaia::Gaia::GetInstance();
        return gaia::Iris::RedeemCoupon(*(gaia::BaseServiceManager::Self **)(v9 + 28), (int)(uintptr_t)(a2), a3, a4, 0);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Iris::RedeemCoupon  (binary VA: 0x144ed70)
// Original: gaia::Gaia_Iris::RedeemCoupon
// ----------------------------------------------------------------------------
int gaia::Gaia_Iris::RedeemCoupon(gaia::Gaia_Iris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  int IrisStatus;
  int Instance;
  int result;
  void *v6;
  typedef Json::Value::Self *_g4_t_v7;
  typedef Json::Value::Self *_g4_t_started;
  typedef Json::Value::Self *_g4_t_v9;
  typedef uint8_t _g4_t_v10[7];
  typedef int _g4_t_v11;
  typedef void *_g4_t_ptr;
  typedef int _g4_t_v13;
  typedef uint8_t _g4_t_v14[16];
  typedef uint8_t _g4_t_v15[80];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_started)) > _g4_s1 ? (8u + sizeof(_g4_t_started)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v9)) > _g4_s2 ? (8u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (25u + sizeof(_g4_t_v10)) > _g4_s3 ? (25u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v11)) > _g4_s4 ? (32u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_ptr)) > _g4_s5 ? (36u + sizeof(_g4_t_ptr)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v13)) > _g4_s6 ? (40u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v14)) > _g4_s7 ? (44u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v15)) > _g4_s8 ? (60u + sizeof(_g4_t_v15)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 25u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 36u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 60u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10[3]), "coupon_code", (int)(uintptr_t)(v10));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v10[3]), 4);
    v2 = (void *)(*(uint32_t *)&v10[3] - 12);
    if ( (uint32_t *)(*(uint32_t *)&v10[3] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v10[3] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 4507);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v15, a2);
        started = (Json::Value::Self *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v15);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v15);
        return (int)(uintptr_t)(started);
      }
      else
      {
        IrisStatus = gaia::Gaia_Iris::GetIrisStatus(self);
        if ( IrisStatus != 0 )
        {
          v9 = (Json::Value::Self *)IrisStatus;
          gaia::GaiaRequest::SetResponseCode(a2, IrisStatus);
          return (int)(uintptr_t)(v9);
        }
        else
        {
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v14, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v11, (int)(uintptr_t)(v14));
          Json::Value::Destroy((Json::Value::Self *)v14);
          ptr = nullptr;
          v13 = 0;
          Instance = gaia::Gaia::GetInstance();
          v7 = (Json::Value::Self *)gaia::Iris::RedeemCoupon(
                                *(gaia::BaseServiceManager::Self **)(Instance + 28),
                                (int)(uintptr_t)(&v11),
                                &ptr,
                                &v13,
                                (int)(uintptr_t)(a2));
          gaia::GaiaRequest::SetResponse(a2, ptr, &v13);
          gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(v7));
          free(ptr);
          result = (int)(uintptr_t)(v7);
          v6 = (void *)(v11 - 12);
          if ( (uint32_t *)(v11 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v6);
            return (int)(uintptr_t)(v7);
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
// Function: gaia::Gaia_Iris::GetAssetURL  (binary VA: 0x144f010)
// Original: gaia::Gaia_Iris::GetAssetURL
// ----------------------------------------------------------------------------
int gaia::Gaia_Iris::GetAssetURL(gaia::Gaia::Self *a1, uint32_t *a2, int a3, char a4, int a5, int a6)
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
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v13)) > _g4_s1 ? (32u + sizeof(_g4_t_v13)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);

  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    if ( a4 != 0 )
    {
      v9 = (uint32_t *)opNew(0x44u);
      *v9 = a6;
      v9[1] = a5;
      v9[2] = 4508;
      Json::Value::Construct((int)(uintptr_t)(v9 + 3), nullptr);
      v9[7] = 0;
      v9[8] = 0;
      Json::Value::Construct((int)(uintptr_t)(v9 + 9), nullptr);
      v9[13] = 0;
      v9[14] = 0;
      v9[15] = 0;
      v9[16] = 0;
      Json::Value::Construct((int)(uintptr_t)(v13), a2);
      v10 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v9 + 3), "asset_name");
      Json::Value::opAssign(v10, (const Json::Value::Self *)v13);
      Json::Value::Destroy((Json::Value::Self *)v13);
      v9[15] = a3;
      Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v12));
      return gaia::ThreadManager::pushTask(Instance, v9);
    }
    else
    {
      result = gaia::Gaia_Iris::GetIrisStatus((gaia::Gaia_Iris::Self *)(a1));
      if ( result == 0 )
      {
        v8 = gaia::Gaia::GetInstance();
        return gaia::Iris::GetAssetURL(*(uint32_t *)(v8 + 28), a2, a3, nullptr);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Iris::GetAssetURL  (binary VA: 0x144f170)
// Original: gaia::Gaia_Iris::GetAssetURL
// ----------------------------------------------------------------------------
int gaia::Gaia_Iris::GetAssetURL(gaia::Gaia_Iris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  int IrisStatus;
  int Instance;
  int result;
  void *v6;
  void *v7;
  typedef Json::Value::Self *_g4_t_AssetURL;
  typedef Json::Value::Self *_g4_t_started;
  typedef Json::Value::Self *_g4_t_v10;
  typedef Json::Value::Self *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint8_t _g4_t_v16[16];
  typedef uint8_t _g4_t_v17[80];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (8u + sizeof(_g4_t_AssetURL)) > _g4_s0 ? (8u + sizeof(_g4_t_AssetURL)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_started)) > _g4_s1 ? (8u + sizeof(_g4_t_started)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v10)) > _g4_s2 ? (8u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v11)) > _g4_s3 ? (8u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (27u + sizeof(_g4_t_v12)) > _g4_s4 ? (27u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v13)) > _g4_s5 ? (32u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v14)) > _g4_s6 ? (36u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v15)) > _g4_s7 ? (40u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v16)) > _g4_s8 ? (44u + sizeof(_g4_t_v16)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v17)) > _g4_s9 ? (60u + sizeof(_g4_t_v17)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_AssetURL &AssetURL = *reinterpret_cast<_g4_t_AssetURL *>(_g4_sf + 8u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 27u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 60u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "asset_name", (int)(uintptr_t)(&v12));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v13), 4);
    v2 = (void *)(v13 - 12);
    if ( (uint32_t *)(v13 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 4508);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v17, a2);
        started = (Json::Value::Self *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v17);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v17);
        return (int)(uintptr_t)(started);
      }
      else
      {
        IrisStatus = gaia::Gaia_Iris::GetIrisStatus(self);
        if ( IrisStatus != 0 )
        {
          v10 = (Json::Value::Self *)IrisStatus;
          gaia::GaiaRequest::SetResponseCode(a2, IrisStatus);
          return (int)(uintptr_t)(v10);
        }
        else
        {
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v16, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v14, (int)(uintptr_t)(v16));
          Json::Value::Destroy((Json::Value::Self *)v16);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), (char *)&unk_1B15112, (int)(uintptr_t)(&v12) + 1);
          Instance = gaia::Gaia::GetInstance();
          AssetURL = (Json::Value::Self *)gaia::Iris::GetAssetURL(*(uint32_t *)(Instance + 28), &v14, &v15, a2);
          gaia::GaiaRequest::SetResponse(a2, &v15);
          gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(AssetURL));
          result = (int)(uintptr_t)(AssetURL);
          v6 = (void *)(v15 - 12);
          if ( (uint32_t *)(v15 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v6);
            result = (int)(uintptr_t)(AssetURL);
          }
          v7 = (void *)(v14 - 12);
          if ( (uint32_t *)(v14 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
          {
            v11 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v7);
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
// Function: gaia::Gaia_Iris::GetAssetSize  (binary VA: 0x144f440)
// Original: gaia::Gaia_Iris::GetAssetSize
// ----------------------------------------------------------------------------
int gaia::Gaia_Iris::GetAssetSize(gaia::Gaia_Iris::Self *a1, uint32_t *a2, int a3, char a4, int a5, int a6)
{
  int IrisStatus;
  int v8;
  void *v9;
  uint32_t *v10;
  Json::Value::Self *v11;
  int Instance;
  typedef gaia::ThreadManager::Self *_g4_t_ptr;
  typedef uint16_t _g4_t_v14[3];
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint8_t _g4_t_v17[28];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (50u + sizeof(_g4_t_v14)) > _g4_s1 ? (50u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (56u + sizeof(_g4_t_v15)) > _g4_s2 ? (56u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v16)) > _g4_s3 ? (60u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v17)) > _g4_s4 ? (64u + sizeof(_g4_t_v17)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 50u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 56u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 60u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 64u);

  IrisStatus = -21;
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    if ( a4 != 0 )
    {
      v10 = (uint32_t *)opNew(0x44u);
      *v10 = a6;
      v10[1] = a5;
      v10[2] = 4505;
      Json::Value::Construct((int)(uintptr_t)(v10 + 3), nullptr);
      v10[7] = 0;
      v10[8] = 0;
      Json::Value::Construct((int)(uintptr_t)(v10 + 9), nullptr);
      v10[13] = 0;
      v10[14] = 0;
      v10[15] = 0;
      v10[16] = 0;
      Json::Value::Construct((int)(uintptr_t)(v17), a2);
      v11 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v10 + 3), "asset_name");
      Json::Value::opAssign(v11, (const Json::Value::Self *)v17);
      Json::Value::Destroy((Json::Value::Self *)v17);
      v10[7] = a3;
      Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(ptr));
      return gaia::ThreadManager::pushTask(Instance, v10);
    }
    else
    {
      IrisStatus = gaia::Gaia_Iris::GetIrisStatus(a1);
      if ( IrisStatus == 0 )
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "size", (int)(uintptr_t)(v14));
        v8 = gaia::Gaia::GetInstance();
        IrisStatus = gaia::Iris::GetAssetMetadata(
                       *(gaia::BaseServiceManager::Self **)(v8 + 28),
                       (int)(uintptr_t)(a2),
                       (int)(uintptr_t)(&v16),
                       (void **)&v14[1],
                       &v15,
                       0);
        v9 = (void *)(v16 - 12);
        if ( (uint32_t *)(v16 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v9);
        }
        if ( IrisStatus == 0 )
          gaia::BaseServiceManager::ParseMessages(*(char **)&v14[1], v15, a3, 25);
        free(*(void **)&v14[1]);
      }
    }
  }
  return IrisStatus;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Iris::GetAssetHash  (binary VA: 0x144f660)
// Original: gaia::Gaia_Iris::GetAssetHash
// ----------------------------------------------------------------------------
int gaia::Gaia_Iris::GetAssetHash(gaia::Gaia_Iris::Self *a1, uint32_t *a2, int a3, char a4, int a5, int a6)
{
  int IrisStatus;
  int v8;
  void *v9;
  uint32_t *v10;
  Json::Value::Self *v11;
  int Instance;
  typedef gaia::ThreadManager::Self *_g4_t_ptr;
  typedef uint16_t _g4_t_v14[3];
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint8_t _g4_t_v17[28];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (50u + sizeof(_g4_t_v14)) > _g4_s1 ? (50u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (56u + sizeof(_g4_t_v15)) > _g4_s2 ? (56u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v16)) > _g4_s3 ? (60u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v17)) > _g4_s4 ? (64u + sizeof(_g4_t_v17)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 50u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 56u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 60u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 64u);

  IrisStatus = -21;
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    if ( a4 != 0 )
    {
      v10 = (uint32_t *)opNew(0x44u);
      *v10 = a6;
      v10[1] = a5;
      v10[2] = 4504;
      Json::Value::Construct((int)(uintptr_t)(v10 + 3), nullptr);
      v10[7] = 0;
      v10[8] = 0;
      Json::Value::Construct((int)(uintptr_t)(v10 + 9), nullptr);
      v10[13] = 0;
      v10[14] = 0;
      v10[15] = 0;
      v10[16] = 0;
      Json::Value::Construct((int)(uintptr_t)(v17), a2);
      v11 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v10 + 3), "asset_name");
      Json::Value::opAssign(v11, (const Json::Value::Self *)v17);
      Json::Value::Destroy((Json::Value::Self *)v17);
      v10[7] = a3;
      Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(ptr));
      return gaia::ThreadManager::pushTask(Instance, v10);
    }
    else
    {
      IrisStatus = gaia::Gaia_Iris::GetIrisStatus(a1);
      if ( IrisStatus == 0 )
      {
        *(uint32_t *)&v14[1] = 0;
        v15 = 0;
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "hash", (int)(uintptr_t)(v14));
        v8 = gaia::Gaia::GetInstance();
        IrisStatus = gaia::Iris::GetAssetMetadata(
                       *(gaia::BaseServiceManager::Self **)(v8 + 28),
                       (int)(uintptr_t)(a2),
                       (int)(uintptr_t)(&v16),
                       (void **)&v14[1],
                       &v15,
                       0);
        v9 = (void *)(v16 - 12);
        if ( (uint32_t *)(v16 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v9);
        }
        if ( IrisStatus == 0 )
          gaia::BaseServiceManager::ParseMessages(*(char **)&v14[1], v15, a3, 25);
        free(*(void **)&v14[1]);
      }
    }
  }
  return IrisStatus;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Iris::GetAsset  (binary VA: 0x144f890)
// Original: gaia::Gaia_Iris::GetAsset
// ----------------------------------------------------------------------------
int gaia::Gaia_Iris::GetAsset(gaia::Gaia_Iris::Self *a1, uint32_t *a2, void **a3, int *a4, int a5, int a6, char a7, int a8, int a9)
{
  char IsInitialized;
  int result;
  int v11;
  void *v12;
  uint32_t *v13;
  Json::Value::Self *v14;
  Json::Value::Self *v15;
  Json::Value::Self *v16;
  int Instance;
  typedef gaia::ThreadManager::Self *_g4_t_v18;
  typedef int _g4_t_v19;
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
    if ( a7 != 0 )
    {
      v13 = (uint32_t *)opNew(0x44u);
      *v13 = a9;
      v13[1] = a8;
      v13[2] = 4501;
      Json::Value::Construct((int)(uintptr_t)(v13 + 3), nullptr);
      v13[7] = 0;
      v13[8] = 0;
      Json::Value::Construct((int)(uintptr_t)(v13 + 9), nullptr);
      v13[16] = (uint32_t)(uintptr_t)(a4);
      v13[15] = (uint32_t)(uintptr_t)(a3);
      v13[13] = 0;
      v13[14] = 0;
      Json::Value::Construct((int)(uintptr_t)(v21), a2);
      v14 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "asset_name");
      Json::Value::opAssign(v14, (const Json::Value::Self *)v21);
      Json::Value::Destroy((Json::Value::Self *)v21);
      Json::Value::Construct((Json::Value::Self *)v22, a5);
      v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "fromOffset");
      Json::Value::opAssign(v15, (const Json::Value::Self *)v22);
      Json::Value::Destroy((Json::Value::Self *)v22);
      Json::Value::Construct((Json::Value::Self *)v23, a6);
      v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v13 + 3), "toOffset");
      Json::Value::opAssign(v16, (const Json::Value::Self *)v23);
      Json::Value::Destroy((Json::Value::Self *)v23);
      Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v18));
      return gaia::ThreadManager::pushTask(Instance, v13);
    }
    else
    {
      result = gaia::Gaia_Iris::GetIrisStatus(a1);
      if ( result == 0 )
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20[1]), (char *)&unk_1B15112, (int)(uintptr_t)(v20));
        v11 = gaia::Gaia::GetInstance();
        result = gaia::Iris::getAsset(
                   *(gaia::BaseServiceManager::Self **)(v11 + 28),
                   (int)(uintptr_t)(a2),
                   a3,
                   a4,
                   a5,
                   a6,
                   (int)(uintptr_t)(&v20[1]),
                   0);
        v12 = (void *)(*(uint32_t *)&v20[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v20[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v20[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          v19 = result;
          g4_std::string::Rep::M_destroy(v12);
          return v19;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Iris::GetAssetCheckEtag  (binary VA: 0x144fb20)
// Original: gaia::Gaia_Iris::GetAssetCheckEtag
// ----------------------------------------------------------------------------
int gaia::Gaia_Iris::GetAssetCheckEtag(gaia::Gaia_Iris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  int IrisStatus;
  int v7;
  void *v8;
  int v9;
  void *v10;
  Json::Value::Self *v11;
  int v12;
  Json::Value::Self *v13;
  int v14;
  int Instance;
  int Asset;
  int result;
  void *v18;
  void *v19;
  Json::Value::Self *v20;
  Json::Value::Self *v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_started;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef char *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef char *_g4_t_v31;
  typedef char *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef uint8_t _g4_t_v37[7];
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef void *_g4_t_ptr;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef uint8_t _g4_t_v53[96];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (0u + sizeof(_g4_t_v22)) > _g4_s0 ? (0u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v23)) > _g4_s1 ? (0u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_started)) > _g4_s2 ? (0u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v25)) > _g4_s3 ? (0u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v26)) > _g4_s4 ? (0u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v27)) > _g4_s5 ? (0u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (0u + sizeof(_g4_t_v28)) > _g4_s6 ? (0u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (4u + sizeof(_g4_t_v29)) > _g4_s7 ? (4u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (4u + sizeof(_g4_t_v30)) > _g4_s8 ? (4u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (4u + sizeof(_g4_t_v31)) > _g4_s9 ? (4u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (8u + sizeof(_g4_t_v32)) > _g4_s10 ? (8u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (8u + sizeof(_g4_t_v33)) > _g4_s11 ? (8u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (27u + sizeof(_g4_t_v34)) > _g4_s12 ? (27u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v35)) > _g4_s13 ? (28u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (35u + sizeof(_g4_t_v36)) > _g4_s14 ? (35u + sizeof(_g4_t_v36)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v37)) > _g4_s15 ? (36u + sizeof(_g4_t_v37)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v38)) > _g4_s16 ? (48u + sizeof(_g4_t_v38)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v39)) > _g4_s17 ? (52u + sizeof(_g4_t_v39)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v40)) > _g4_s18 ? (56u + sizeof(_g4_t_v40)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v41)) > _g4_s19 ? (60u + sizeof(_g4_t_v41)) : _g4_s19,
    _g4_s21 = (64u + sizeof(_g4_t_v42)) > _g4_s20 ? (64u + sizeof(_g4_t_v42)) : _g4_s20,
    _g4_s22 = (68u + sizeof(_g4_t_v43)) > _g4_s21 ? (68u + sizeof(_g4_t_v43)) : _g4_s21,
    _g4_s23 = (72u + sizeof(_g4_t_ptr)) > _g4_s22 ? (72u + sizeof(_g4_t_ptr)) : _g4_s22,
    _g4_s24 = (76u + sizeof(_g4_t_v45)) > _g4_s23 ? (76u + sizeof(_g4_t_v45)) : _g4_s23,
    _g4_s25 = (80u + sizeof(_g4_t_v46)) > _g4_s24 ? (80u + sizeof(_g4_t_v46)) : _g4_s24,
    _g4_s26 = (84u + sizeof(_g4_t_v47)) > _g4_s25 ? (84u + sizeof(_g4_t_v47)) : _g4_s25,
    _g4_s27 = (88u + sizeof(_g4_t_v48)) > _g4_s26 ? (88u + sizeof(_g4_t_v48)) : _g4_s26,
    _g4_s28 = (92u + sizeof(_g4_t_v49)) > _g4_s27 ? (92u + sizeof(_g4_t_v49)) : _g4_s27,
    _g4_s29 = (96u + sizeof(_g4_t_v50)) > _g4_s28 ? (96u + sizeof(_g4_t_v50)) : _g4_s28,
    _g4_s30 = (100u + sizeof(_g4_t_v51)) > _g4_s29 ? (100u + sizeof(_g4_t_v51)) : _g4_s29,
    _g4_s31 = (104u + sizeof(_g4_t_v52)) > _g4_s30 ? (104u + sizeof(_g4_t_v52)) : _g4_s30,
    _g4_s32 = (108u + sizeof(_g4_t_v53)) > _g4_s31 ? (108u + sizeof(_g4_t_v53)) : _g4_s31
  };
  alignas(16) uint8_t _g4_sf[_g4_s32];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 0u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 0u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 0u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 4u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 4u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 4u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 8u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 8u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 27u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 28u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 35u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 36u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 48u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 52u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 56u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 60u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 64u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 68u);
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 72u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 76u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 80u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 84u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 88u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 92u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 96u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 100u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 104u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 108u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "asset_name", (int)(uintptr_t)(&v34));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v38), 4);
    v2 = (void *)(v38 - 12);
    if ( (uint32_t *)(v38 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v38 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "Etag", (int)(uintptr_t)(&v35));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v39), 4);
    v3 = (void *)(v39 - 12);
    if ( (uint32_t *)(v39 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "fromOffset", (int)(uintptr_t)(&v35) + 1);
    gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v40), 1);
    v4 = (void *)(v40 - 12);
    if ( (uint32_t *)(v40 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v40 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "toOffset", (int)(uintptr_t)(&v35) + 2);
    gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v41), 1);
    v5 = (void *)(v41 - 12);
    if ( (uint32_t *)(v41 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 4502);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v53, a2);
        started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v53);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v53);
        return started;
      }
      else
      {
        IrisStatus = gaia::Gaia_Iris::GetIrisStatus(self);
        if ( IrisStatus != 0 )
        {
          v25 = IrisStatus;
          gaia::GaiaRequest::SetResponseCode(a2, IrisStatus);
          return v25;
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), "asset_name", (int)(uintptr_t)(&v36));
          v7 = gaia::GaiaRequest::opIndex(a2, &v46);
          Json::Value::asString((Json::Value::Self *)&v42, v7);
          v8 = (void *)(v46 - 12);
          if ( (uint32_t *)(v46 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v46 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v8);
          }
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), "Etag", (int)(uintptr_t)(v37));
          v9 = gaia::GaiaRequest::opIndex(a2, &v47);
          Json::Value::asString((Json::Value::Self *)&v43, v9);
          v10 = (void *)(v47 - 12);
          if ( (uint32_t *)(v47 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v47 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v10);
          }
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v48), "fromOffset", (int)(uintptr_t)(&v37[1]));
          v11 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v48);
          v12 = Json::Value::type(v11);
          v32 = (char *)(v48 - 12);
          if ( (uint32_t *)(v48 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v48 - 4), 0xFFFFFFFF) <= 0 )
          {
            v28 = v12;
            g4_std::string::Rep::M_destroy(v32);
            v12 = v28;
          }
          v33 = -1;
          if ( v12 != 0 )
          {
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v49), "fromOffset", (int)(uintptr_t)(&v37[2]));
            v21 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v49);
            v33 = Json::Value::asInt(v21);
            g4_std::string::Destroy(&v49);
          }
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v50), "toOffset", (int)(uintptr_t)(&v37[3]));
          v13 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v50);
          v14 = Json::Value::type(v13);
          v29 = (char *)(v50 - 12);
          if ( (uint32_t *)(v50 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v50 - 4), 0xFFFFFFFF) <= 0 )
          {
            v26 = v14;
            g4_std::string::Rep::M_destroy(v29);
            v14 = v26;
          }
          v30 = -1;
          if ( v14 != 0 )
          {
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v51), "toOffset", (int)(uintptr_t)(&v37[4]));
            v20 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v51);
            v30 = Json::Value::asInt(v20);
            g4_std::string::Destroy(&v51);
          }
          g4_std::string::construct_copy(&v52, &v43);
          Instance = gaia::Gaia::GetInstance();
          Asset = gaia::Iris::getAsset(
                    *(gaia::BaseServiceManager::Self **)(Instance + 28),
                    (int)(uintptr_t)(&v42),
                    &ptr,
                    &v45,
                    v33,
                    v30,
                    (int)(uintptr_t)(&v52),
                    (int)(uintptr_t)(a2));
          v31 = (char *)(v52 - 12);
          if ( (uint32_t *)(v52 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v52 - 4), 0xFFFFFFFF) <= 0 )
          {
            v27 = Asset;
            g4_std::string::Rep::M_destroy(v31);
            Asset = v27;
          }
          v22 = Asset;
          gaia::GaiaRequest::SetResponseCode(a2, Asset);
          gaia::GaiaRequest::SetResponse(a2, ptr, &v45);
          free(ptr);
          result = v22;
          v18 = (void *)(v43 - 12);
          if ( (uint32_t *)(v43 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v43 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v18);
            result = v22;
          }
          v19 = (void *)(v42 - 12);
          if ( (uint32_t *)(v42 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v42 - 4), 0xFFFFFFFF) <= 0 )
          {
            v23 = result;
            g4_std::string::Rep::M_destroy(v19);
            return v23;
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
// Function: gaia::Gaia_Iris::GetAssetCheckEtag  (binary VA: 0x14501c0)
// Original: gaia::Gaia_Iris::GetAssetCheckEtag
// ----------------------------------------------------------------------------
int gaia::Gaia_Iris::GetAssetCheckEtag(gaia::Gaia_Iris::Self *a1, uint32_t *a2, uint32_t *a3, void **a4, int *a5, int a6, int a7, char a8, int a9, int a10)
{
  int v10;
  Json::Value::Self *v11;
  void *v12;
  Json::Value::Self *v13;
  void *v14;
  Json::Value::Self *v15;
  void *v16;
  Json::Value::Self *v17;
  void *v18;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef uint8_t _g4_t_v25[16];
  typedef uint8_t _g4_t_v26[16];
  typedef uint8_t _g4_t_v27[16];
  typedef uint8_t _g4_t_v28[16];
  typedef uint8_t _g4_t_v29[96];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (4u + sizeof(_g4_t_v20)) > _g4_s0 ? (4u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v21)) > _g4_s1 ? (12u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v22)) > _g4_s2 ? (16u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v23)) > _g4_s3 ? (20u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v24)) > _g4_s4 ? (24u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v25)) > _g4_s5 ? (28u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v26)) > _g4_s6 ? (44u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v27)) > _g4_s7 ? (60u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v28)) > _g4_s8 ? (76u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (92u + sizeof(_g4_t_v29)) > _g4_s9 ? (92u + sizeof(_g4_t_v29)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 76u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 92u);

  v10 = -21;
  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v29);
    Json::Value::Construct((int)(uintptr_t)(v25), a2);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "asset_name", (int)(uintptr_t)(&v20));
    v11 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(v29, &v21);
    Json::Value::opAssign(v11, (const Json::Value::Self *)v25);
    v12 = (void *)(v21 - 12);
    if ( (uint32_t *)(v21 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v12);
    }
    Json::Value::Destroy((Json::Value::Self *)v25);
    Json::Value::Construct((int)(uintptr_t)(v26), a3);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Etag", (int)(uintptr_t)(&v20) + 1);
    v13 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(v29, &v22);
    Json::Value::opAssign(v13, (const Json::Value::Self *)v26);
    v14 = (void *)(v22 - 12);
    if ( (uint32_t *)(v22 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v14);
    }
    Json::Value::Destroy((Json::Value::Self *)v26);
    Json::Value::Construct((Json::Value::Self *)v27, a6);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "fromOffset", (int)(uintptr_t)(&v20) + 2);
    v15 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(v29, &v23);
    Json::Value::opAssign(v15, (const Json::Value::Self *)v27);
    v16 = (void *)(v23 - 12);
    if ( (uint32_t *)(v23 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v16);
    }
    Json::Value::Destroy((Json::Value::Self *)v27);
    Json::Value::Construct((Json::Value::Self *)v28, a7);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "toOffset", (int)(uintptr_t)(&v20) + 3);
    v17 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(v29, &v24);
    Json::Value::opAssign(v17, (const Json::Value::Self *)v28);
    v18 = (void *)(v24 - 12);
    if ( (uint32_t *)(v24 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v18);
    }
    Json::Value::Destroy((Json::Value::Self *)v28);
    gaia::GaiaRequest::SetParamsForOutput((gaia::GaiaRequest::Self *)v29, a4, a5);
    if ( a8 != 0 )
      gaia::GaiaRequest::SetRunAsynchronous(v29, a9, a10);
    v10 = gaia::Gaia_Iris::GetAssetCheckEtag(a1, (gaia::GaiaRequest::Self *)v29);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v29);
  }
  return v10;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Iris::GetAssetETag  (binary VA: 0x14504c0)
// Original: gaia::Gaia_Iris::GetAssetETag
// ----------------------------------------------------------------------------
int gaia::Gaia_Iris::GetAssetETag(gaia::Gaia_Iris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  int IrisStatus;
  int v4;
  int Instance;
  int AssetETag;
  int result;
  void *v8;
  void *v9;
  typedef Json::Value::Self *_g4_t_v10;
  typedef Json::Value::Self *_g4_t_started;
  typedef Json::Value::Self *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint8_t _g4_t_v17[16];
  typedef uint8_t _g4_t_v18[80];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_started)) > _g4_s1 ? (8u + sizeof(_g4_t_started)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v12)) > _g4_s2 ? (8u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (27u + sizeof(_g4_t_v13)) > _g4_s3 ? (27u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v14)) > _g4_s4 ? (32u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v15)) > _g4_s5 ? (36u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v16)) > _g4_s6 ? (40u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v17)) > _g4_s7 ? (44u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v18)) > _g4_s8 ? (60u + sizeof(_g4_t_v18)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 27u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 60u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "asset_name", (int)(uintptr_t)(&v13));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v14), 4);
    v2 = (void *)(v14 - 12);
    if ( (uint32_t *)(v14 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 4509);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v18, a2);
        started = (Json::Value::Self *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v18);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v18);
        return (int)(uintptr_t)(started);
      }
      else
      {
        IrisStatus = gaia::Gaia_Iris::GetIrisStatus(self);
        v4 = IrisStatus;
        if ( IrisStatus != 0 )
        {
          gaia::GaiaRequest::SetResponseCode(a2, IrisStatus);
          return v4;
        }
        else
        {
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v17, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v15, (int)(uintptr_t)(v17));
          Json::Value::Destroy((Json::Value::Self *)v17);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), (char *)&unk_1B15112, (int)(uintptr_t)(&v13) + 1);
          Instance = gaia::Gaia::GetInstance();
          AssetETag = gaia::Iris::GetAssetETag(
                        *(gaia::BaseServiceManager::Self **)(Instance + 28),
                        (int)(uintptr_t)(&v15),
                        (int)(uintptr_t)(&v16),
                        (int)(uintptr_t)(a2));
          if ( AssetETag == 302 )
            AssetETag = 0;
          v10 = (Json::Value::Self *)AssetETag;
          gaia::GaiaRequest::SetResponse(a2, &v16);
          gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(v10));
          result = (int)(uintptr_t)(v10);
          v8 = (void *)(v16 - 12);
          if ( (uint32_t *)(v16 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy(v8);
            result = (int)(uintptr_t)(v10);
          }
          v9 = (void *)(v15 - 12);
          if ( (uint32_t *)(v15 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
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
// Function: gaia::Gaia_Iris::GetAssetETag  (binary VA: 0x14507a0)
// Original: gaia::Gaia_Iris::GetAssetETag
// ----------------------------------------------------------------------------
int gaia::Gaia_Iris::GetAssetETag(gaia::Gaia::Self *a1, uint32_t *a2, int a3, char a4, int a5, int a6)
{
  int IrisStatus;
  int v8;
  int AssetETag;
  uint32_t *v10;
  Json::Value::Self *v11;
  int Instance;
  typedef gaia::ThreadManager::Self *_g4_t_v13;
  typedef uint8_t _g4_t_v14[28];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v14)) > _g4_s1 ? (32u + sizeof(_g4_t_v14)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);

  gaia::Gaia::GetInstance();
  IrisStatus = -21;
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    if ( a4 != 0 )
    {
      v10 = (uint32_t *)opNew(0x44u);
      *v10 = a6;
      v10[1] = a5;
      v10[2] = 4509;
      Json::Value::Construct((int)(uintptr_t)(v10 + 3), nullptr);
      v10[7] = 0;
      v10[8] = 0;
      Json::Value::Construct((int)(uintptr_t)(v10 + 9), nullptr);
      v10[13] = 0;
      v10[14] = 0;
      v10[15] = 0;
      v10[16] = 0;
      Json::Value::Construct((int)(uintptr_t)(v14), a2);
      v11 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v10 + 3), "asset_name");
      Json::Value::opAssign(v11, (const Json::Value::Self *)v14);
      Json::Value::Destroy((Json::Value::Self *)v14);
      v10[15] = a3;
      Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v13));
      return gaia::ThreadManager::pushTask(Instance, v10);
    }
    else
    {
      IrisStatus = gaia::Gaia_Iris::GetIrisStatus((gaia::Gaia_Iris::Self *)(a1));
      if ( IrisStatus == 0 )
      {
        v8 = gaia::Gaia::GetInstance();
        AssetETag = gaia::Iris::GetAssetETag(*(gaia::BaseServiceManager::Self **)(v8 + 28), (int)(uintptr_t)(a2), a3, 0);
        if ( AssetETag != 302 )
          return AssetETag;
      }
    }
  }
  return IrisStatus;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Iris::GetAsset  (binary VA: 0x1450920)
// Original: gaia::Gaia_Iris::GetAsset
// ----------------------------------------------------------------------------
int gaia::Gaia_Iris::GetAsset(gaia::Gaia_Iris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  int IrisStatus;
  Json::Value::Self *v6;
  bool isNull;
  Json::Value::Self *v8;
  bool v9;
  int Instance;
  int Asset;
  int result;
  void *v13;
  Json::Value::Self *v14;
  Json::Value::Self *v15;
  typedef Json::Value::Self *_g4_t_v16;
  typedef Json::Value::Self *_g4_t_v17;
  typedef Json::Value::Self *_g4_t_started;
  typedef Json::Value::Self *_g4_t_v19;
  typedef bool _g4_t_v20;
  typedef Json::Value::Self *_g4_t_v21;
  typedef bool _g4_t_v22;
  typedef char *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef char *_g4_t_v25;
  typedef void *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef void *_g4_t_ptr;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef uint8_t _g4_t_v42[16];
  typedef uint8_t _g4_t_v43[96];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v17)) > _g4_s1 ? (4u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_started)) > _g4_s2 ? (4u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v19)) > _g4_s3 ? (4u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v20)) > _g4_s4 ? (4u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v21)) > _g4_s5 ? (4u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v22)) > _g4_s6 ? (4u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v23)) > _g4_s7 ? (8u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v24)) > _g4_s8 ? (8u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v25)) > _g4_s9 ? (8u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v26)) > _g4_s10 ? (12u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (12u + sizeof(_g4_t_v27)) > _g4_s11 ? (12u + sizeof(_g4_t_v27)) : _g4_s11,
    _g4_s13 = (17u + sizeof(_g4_t_v28)) > _g4_s12 ? (17u + sizeof(_g4_t_v28)) : _g4_s12,
    _g4_s14 = (20u + sizeof(_g4_t_v29)) > _g4_s13 ? (20u + sizeof(_g4_t_v29)) : _g4_s13,
    _g4_s15 = (24u + sizeof(_g4_t_v30)) > _g4_s14 ? (24u + sizeof(_g4_t_v30)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v31)) > _g4_s15 ? (32u + sizeof(_g4_t_v31)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_v32)) > _g4_s16 ? (36u + sizeof(_g4_t_v32)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v33)) > _g4_s17 ? (40u + sizeof(_g4_t_v33)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_ptr)) > _g4_s18 ? (44u + sizeof(_g4_t_ptr)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_v35)) > _g4_s19 ? (48u + sizeof(_g4_t_v35)) : _g4_s19,
    _g4_s21 = (52u + sizeof(_g4_t_v36)) > _g4_s20 ? (52u + sizeof(_g4_t_v36)) : _g4_s20,
    _g4_s22 = (56u + sizeof(_g4_t_v37)) > _g4_s21 ? (56u + sizeof(_g4_t_v37)) : _g4_s21,
    _g4_s23 = (60u + sizeof(_g4_t_v38)) > _g4_s22 ? (60u + sizeof(_g4_t_v38)) : _g4_s22,
    _g4_s24 = (64u + sizeof(_g4_t_v39)) > _g4_s23 ? (64u + sizeof(_g4_t_v39)) : _g4_s23,
    _g4_s25 = (68u + sizeof(_g4_t_v40)) > _g4_s24 ? (68u + sizeof(_g4_t_v40)) : _g4_s24,
    _g4_s26 = (72u + sizeof(_g4_t_v41)) > _g4_s25 ? (72u + sizeof(_g4_t_v41)) : _g4_s25,
    _g4_s27 = (76u + sizeof(_g4_t_v42)) > _g4_s26 ? (76u + sizeof(_g4_t_v42)) : _g4_s26,
    _g4_s28 = (92u + sizeof(_g4_t_v43)) > _g4_s27 ? (92u + sizeof(_g4_t_v43)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 17u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 20u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 36u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 40u);
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 44u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 48u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 52u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 56u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 60u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 64u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 68u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 72u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 76u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 92u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "asset_name", (int)(uintptr_t)(&v28));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v31), 4);
    v2 = (void *)(v31 - 12);
    if ( (uint32_t *)(v31 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "from_offset", (int)(uintptr_t)(&v28) + 1);
    gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v32), 1);
    v3 = (void *)(v32 - 12);
    if ( (uint32_t *)(v32 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v32 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "to_offset", (int)(uintptr_t)(&v28) + 2);
    gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v33), 1);
    v4 = (void *)(v33 - 12);
    if ( (uint32_t *)(v33 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 4501);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v43, a2);
        started = (Json::Value::Self *)gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v43);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v43);
        return (int)(uintptr_t)(started);
      }
      else
      {
        IrisStatus = gaia::Gaia_Iris::GetIrisStatus(self);
        if ( IrisStatus != 0 )
        {
          v19 = (Json::Value::Self *)IrisStatus;
          gaia::GaiaRequest::SetResponseCode(a2, IrisStatus);
          return (int)(uintptr_t)(v19);
        }
        else
        {
          ptr = nullptr;
          v35 = 0;
          gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v42, (const char *)a2);
          Json::Value::asString((Json::Value::Self *)&v36, (int)(uintptr_t)(v42));
          Json::Value::Destroy((Json::Value::Self *)v42);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "from_offset", (int)(uintptr_t)(&v29));
          v6 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v37);
          isNull = Json::Value::isNull(v6);
          v26 = (void *)(v37 - 12);
          if ( (uint32_t *)(v37 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
          {
            v22 = isNull;
            g4_std::string::Rep::M_destroy(v26);
            isNull = v22;
          }
          v27 = -1;
          if ( !isNull )
          {
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "from_offset", (int)(uintptr_t)(&v29) + 1);
            v15 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v38);
            v27 = Json::Value::asInt(v15);
            g4_std::string::Destroy(&v38);
          }
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "to_offset", (int)(uintptr_t)(&v29) + 2);
          v8 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v39);
          v9 = Json::Value::isNull(v8);
          v23 = (char *)(v39 - 12);
          if ( (uint32_t *)(v39 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
          {
            v20 = v9;
            g4_std::string::Rep::M_destroy(v23);
            v9 = v20;
          }
          v24 = -1;
          if ( !v9 )
          {
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "to_offset", (int)(uintptr_t)(&v29) + 3);
            v14 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v40);
            v24 = Json::Value::asInt(v14);
            g4_std::string::Destroy(&v40);
          }
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), (char *)&unk_1B15112, (int)(uintptr_t)(&v30));
          Instance = gaia::Gaia::GetInstance();
          Asset = gaia::Iris::getAsset(
                    *(gaia::BaseServiceManager::Self **)(Instance + 28),
                    (int)(uintptr_t)(&v36),
                    &ptr,
                    &v35,
                    v27,
                    v24,
                    (int)(uintptr_t)(&v41),
                    (int)(uintptr_t)(a2));
          v25 = (char *)(v41 - 12);
          if ( (uint32_t *)(v41 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
          {
            v21 = (Json::Value::Self *)Asset;
            g4_std::string::Rep::M_destroy(v25);
            Asset = (int)(uintptr_t)(v21);
          }
          v16 = (Json::Value::Self *)Asset;
          gaia::GaiaRequest::SetResponse(a2, ptr, &v35);
          gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(v16));
          result = (int)(uintptr_t)(v16);
          if ( ptr != nullptr )
          {
            free(ptr);
            result = (int)(uintptr_t)(v16);
          }
          v13 = (void *)(v36 - 12);
          if ( (uint32_t *)(v36 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v36 - 4), 0xFFFFFFFF) <= 0 )
          {
            v17 = (Json::Value::Self *)result;
            g4_std::string::Rep::M_destroy(v13);
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
// Function: gaia::Gaia_Iris::GetAssetSize  (binary VA: 0x1450e90)
// Original: gaia::Gaia_Iris::GetAssetSize
// ----------------------------------------------------------------------------
int gaia::Gaia_Iris::GetAssetSize(gaia::Gaia_Iris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  int IrisStatus;
  int Instance;
  void *v5;
  void *v6;
  gaia::BaseJSONServiceResponse::Self *v7;
  gaia::BaseJSONServiceResponse::Self *v8;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_ptr;
  typedef int _g4_t_v11;
  typedef int _g4_t_started;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef char *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef void *_g4_t_v19;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint8_t _g4_t_v22[16];
  typedef uint8_t _g4_t_v23[96];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v11)) > _g4_s1 ? (44u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_started)) > _g4_s2 ? (44u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (55u + sizeof(_g4_t_v13)) > _g4_s3 ? (55u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v14)) > _g4_s4 ? (60u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v15)) > _g4_s5 ? (64u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v16)) > _g4_s6 ? (68u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v17)) > _g4_s7 ? (72u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v18)) > _g4_s8 ? (76u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v19)) > _g4_s9 ? (80u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v20)) > _g4_s10 ? (84u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (88u + sizeof(_g4_t_v21)) > _g4_s11 ? (88u + sizeof(_g4_t_v21)) : _g4_s11,
    _g4_s13 = (92u + sizeof(_g4_t_v22)) > _g4_s12 ? (92u + sizeof(_g4_t_v22)) : _g4_s12,
    _g4_s14 = (108u + sizeof(_g4_t_v23)) > _g4_s13 ? (108u + sizeof(_g4_t_v23)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 44u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 55u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 60u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 64u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 68u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 72u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 76u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 80u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 84u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 88u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 92u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 108u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "asset_name", (int)(uintptr_t)(&v13));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v14), 4);
  v2 = (void *)(v14 - 12);
  if ( (uint32_t *)(v14 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) == 0 )
    return gaia::GaiaRequest::GetResponseCode(a2);
  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
  {
    gaia::GaiaRequest::SetOperationCode(a2, 4505);
    gaia::Gaia::GetInstance();
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v23, a2);
    started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v23);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v23);
    return started;
  }
  IrisStatus = gaia::Gaia_Iris::GetIrisStatus(self);
  v11 = IrisStatus;
  if ( IrisStatus == 0 )
  {
    v19 = nullptr;
    v20 = nullptr;
    v21 = 0;
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v22, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v17, (int)(uintptr_t)(v22));
    Json::Value::Destroy((Json::Value::Self *)v22);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "size", (int)(uintptr_t)(&v13) + 1);
    Instance = gaia::Gaia::GetInstance();
    started = gaia::Iris::GetAssetMetadata(
                *(gaia::BaseServiceManager::Self **)(Instance + 28),
                (int)(uintptr_t)(&v17),
                (int)(uintptr_t)(&v18),
                (void **)&v15,
                &v16,
                (int)(uintptr_t)(a2));
    v5 = (void *)(v18 - 12);
    if ( (uint32_t *)(v18 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    if ( started == 0 )
      started = gaia::BaseServiceManager::ParseMessages(v15, v16, (int)(uintptr_t)(&v19), 25);
    gaia::GaiaRequest::SetResponse(a2, (const std::vector<gaia::BaseJSONServiceResponse::Self> *)&v19);
    gaia::GaiaRequest::SetResponseCode(a2, started);
    free(v15);
    v6 = (void *)(v17 - 12);
    if ( (uint32_t *)(v17 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    v7 = v20;
    v8 = (gaia::BaseJSONServiceResponse::Self *)v19;
    if ( v20 != v19 )
    {
      do
      {
        ptr = v8;
        v8 = (gaia::BaseJSONServiceResponse::Self *)((char *)v8 + 20);
        gaia::BaseJSONServiceResponse::Destroy(ptr);
      }
      while ( v7 != v8 );
      v8 = (gaia::BaseJSONServiceResponse::Self *)v19;
    }
    if ( v8 != nullptr )
    {
      opDelete(v8);
      return started;
    }
    return started;
  }
  gaia::GaiaRequest::SetResponseCode(a2, IrisStatus);
  return v11;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Iris::GetAssetHash  (binary VA: 0x14511e0)
// Original: gaia::Gaia_Iris::GetAssetHash
// ----------------------------------------------------------------------------
int gaia::Gaia_Iris::GetAssetHash(gaia::Gaia_Iris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  int IrisStatus;
  int Instance;
  void *v5;
  void *v6;
  gaia::BaseJSONServiceResponse::Self *v7;
  gaia::BaseJSONServiceResponse::Self *v8;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_ptr;
  typedef int _g4_t_v11;
  typedef int _g4_t_started;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef char *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef void *_g4_t_v19;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint8_t _g4_t_v22[16];
  typedef uint8_t _g4_t_v23[96];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (0u + sizeof(_g4_t_ptr)) > _g4_s0 ? (0u + sizeof(_g4_t_ptr)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v11)) > _g4_s1 ? (44u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_started)) > _g4_s2 ? (44u + sizeof(_g4_t_started)) : _g4_s2,
    _g4_s4 = (55u + sizeof(_g4_t_v13)) > _g4_s3 ? (55u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v14)) > _g4_s4 ? (60u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v15)) > _g4_s5 ? (64u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v16)) > _g4_s6 ? (68u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v17)) > _g4_s7 ? (72u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (76u + sizeof(_g4_t_v18)) > _g4_s8 ? (76u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v19)) > _g4_s9 ? (80u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v20)) > _g4_s10 ? (84u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (88u + sizeof(_g4_t_v21)) > _g4_s11 ? (88u + sizeof(_g4_t_v21)) : _g4_s11,
    _g4_s13 = (92u + sizeof(_g4_t_v22)) > _g4_s12 ? (92u + sizeof(_g4_t_v22)) : _g4_s12,
    _g4_s14 = (108u + sizeof(_g4_t_v23)) > _g4_s13 ? (108u + sizeof(_g4_t_v23)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 44u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 55u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 60u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 64u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 68u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 72u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 76u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 80u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 84u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 88u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 92u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 108u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
  {
    gaia::GaiaRequest::SetResponseCode(a2, -21);
    return -21;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "asset_name", (int)(uintptr_t)(&v13));
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v14), 4);
  v2 = (void *)(v14 - 12);
  if ( (uint32_t *)(v14 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) == 0 )
    return gaia::GaiaRequest::GetResponseCode(a2);
  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
  {
    gaia::GaiaRequest::SetOperationCode(a2, 4504);
    gaia::Gaia::GetInstance();
    gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v23, a2);
    started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v23);
    gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v23);
    return started;
  }
  IrisStatus = gaia::Gaia_Iris::GetIrisStatus(self);
  v11 = IrisStatus;
  if ( IrisStatus == 0 )
  {
    v19 = nullptr;
    v20 = nullptr;
    v21 = 0;
    v15 = nullptr;
    v16 = 0;
    gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v22, (const char *)a2);
    Json::Value::asString((Json::Value::Self *)&v17, (int)(uintptr_t)(v22));
    Json::Value::Destroy((Json::Value::Self *)v22);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "hash", (int)(uintptr_t)(&v13) + 1);
    Instance = gaia::Gaia::GetInstance();
    started = gaia::Iris::GetAssetMetadata(
                *(gaia::BaseServiceManager::Self **)(Instance + 28),
                (int)(uintptr_t)(&v17),
                (int)(uintptr_t)(&v18),
                (void **)&v15,
                &v16,
                (int)(uintptr_t)(a2));
    v5 = (void *)(v18 - 12);
    if ( (uint32_t *)(v18 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    if ( started == 0 )
      started = gaia::BaseServiceManager::ParseMessages(v15, v16, (int)(uintptr_t)(&v19), 25);
    gaia::GaiaRequest::SetResponse(a2, (const std::vector<gaia::BaseJSONServiceResponse::Self> *)&v19);
    gaia::GaiaRequest::SetResponseCode(a2, started);
    free(v15);
    v6 = (void *)(v17 - 12);
    if ( (uint32_t *)(v17 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    v7 = v20;
    v8 = (gaia::BaseJSONServiceResponse::Self *)v19;
    if ( v20 != v19 )
    {
      do
      {
        ptr = v8;
        v8 = (gaia::BaseJSONServiceResponse::Self *)((char *)v8 + 20);
        gaia::BaseJSONServiceResponse::Destroy(ptr);
      }
      while ( v7 != v8 );
      v8 = (gaia::BaseJSONServiceResponse::Self *)v19;
    }
    if ( v8 != nullptr )
    {
      opDelete(v8);
      return started;
    }
    return started;
  }
  gaia::GaiaRequest::SetResponseCode(a2, IrisStatus);
  return v11;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Iris::StartAndAuthorizeIris  (binary VA: 0x147a160)
// Original: gaia::Gaia_Iris::StartAndAuthorizeIris
// ----------------------------------------------------------------------------
int gaia::Gaia_Iris::StartAndAuthorizeIris(gaia::Gaia_Iris::Self *self, gaia::GaiaRequest::Self *a2)
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
    result = gaia::Gaia_Iris::GetIrisStatus(self);
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
// Function: gaia::Gaia_Iris::GetAccessToken  (binary VA: 0x147a200)
// Original: gaia::Gaia_Iris::GetAccessToken
// ----------------------------------------------------------------------------
int gaia::Gaia_Iris::GetAccessToken(gaia::Gaia::Self *a1, gaia::GaiaRequest::Self *a2, uint32_t *a3, int a4)
{
  void *v4;
  void *v5;
  Json::Value::Self *v6;
  void *v7;
  int v8;
  int IrisStatus;
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
      IrisStatus = gaia::Gaia_Iris::GetIrisStatus((gaia::Gaia_Iris::Self *)(a1));
      if ( IrisStatus != 0 )
      {
        v8 = IrisStatus;
        gaia::GaiaRequest::SetResponseCode(a2, IrisStatus);
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
        v8 = gaia::Gaia_Iris::StartAndAuthorizeIris(a1, a2);
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
// Function: gaia::Gaia_Iris::CreateCoupons  (binary VA: 0x147a4e0)
// Original: gaia::Gaia_Iris::CreateCoupons
// ----------------------------------------------------------------------------
int gaia::Gaia_Iris::CreateCoupons(gaia::Gaia_Iris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  int IrisStatus;
  int AccessToken;
  Json::Value::Self *v8;
  int Instance;
  int v10;
  typedef bool _g4_t_isNull;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_started;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef char _g4_t_v19;
  typedef char _g4_t_v20;
  typedef char _g4_t_v21;
  typedef void *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef uint8_t _g4_t_v32[4];
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef uint8_t _g4_t_v35[16];
  typedef uint8_t _g4_t_v36[16];
  typedef uint8_t _g4_t_v37[16];
  typedef uint8_t _g4_t_v38[16];
  typedef uint8_t _g4_t_v39[96];
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (8u + sizeof(_g4_t_isNull)) > _g4_s0 ? (8u + sizeof(_g4_t_isNull)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v14)) > _g4_s2 ? (8u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_started)) > _g4_s3 ? (8u + sizeof(_g4_t_started)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v16)) > _g4_s4 ? (8u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v17)) > _g4_s5 ? (8u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v18)) > _g4_s6 ? (8u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v19)) > _g4_s7 ? (12u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v20)) > _g4_s8 ? (16u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v21)) > _g4_s9 ? (20u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v22)) > _g4_s10 ? (24u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (43u + sizeof(_g4_t_v23)) > _g4_s11 ? (43u + sizeof(_g4_t_v23)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v24)) > _g4_s12 ? (44u + sizeof(_g4_t_v24)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v25)) > _g4_s13 ? (48u + sizeof(_g4_t_v25)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v26)) > _g4_s14 ? (56u + sizeof(_g4_t_v26)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v27)) > _g4_s15 ? (60u + sizeof(_g4_t_v27)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v28)) > _g4_s16 ? (64u + sizeof(_g4_t_v28)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v29)) > _g4_s17 ? (68u + sizeof(_g4_t_v29)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v30)) > _g4_s18 ? (72u + sizeof(_g4_t_v30)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v31)) > _g4_s19 ? (76u + sizeof(_g4_t_v31)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v32)) > _g4_s20 ? (80u + sizeof(_g4_t_v32)) : _g4_s20,
    _g4_s22 = (84u + sizeof(_g4_t_v33)) > _g4_s21 ? (84u + sizeof(_g4_t_v33)) : _g4_s21,
    _g4_s23 = (88u + sizeof(_g4_t_v34)) > _g4_s22 ? (88u + sizeof(_g4_t_v34)) : _g4_s22,
    _g4_s24 = (92u + sizeof(_g4_t_v35)) > _g4_s23 ? (92u + sizeof(_g4_t_v35)) : _g4_s23,
    _g4_s25 = (108u + sizeof(_g4_t_v36)) > _g4_s24 ? (108u + sizeof(_g4_t_v36)) : _g4_s24,
    _g4_s26 = (124u + sizeof(_g4_t_v37)) > _g4_s25 ? (124u + sizeof(_g4_t_v37)) : _g4_s25,
    _g4_s27 = (140u + sizeof(_g4_t_v38)) > _g4_s26 ? (140u + sizeof(_g4_t_v38)) : _g4_s26,
    _g4_s28 = (156u + sizeof(_g4_t_v39)) > _g4_s27 ? (156u + sizeof(_g4_t_v39)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_isNull &isNull = *reinterpret_cast<_g4_t_isNull *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 43u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 64u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 68u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 72u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 76u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 80u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 84u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 88u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 92u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 108u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 124u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 140u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 156u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "data", (int)(uintptr_t)(&v23));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v26), 4);
    v2 = (void *)(v26 - 12);
    if ( (uint32_t *)(v26 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "length", (int)(uintptr_t)(&v24));
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v27), 2);
    v3 = (void *)(v27 - 12);
    if ( (uint32_t *)(v27 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "num", (int)(uintptr_t)(&v24) + 1);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&v28), 2);
    v4 = (void *)(v28 - 12);
    if ( (uint32_t *)(v28 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "uses", (int)(uintptr_t)(&v24) + 2);
    gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v29), 2);
    v5 = (void *)(v29 - 12);
    if ( (uint32_t *)(v29 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 4506);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v39, a2);
        started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v39);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v39);
        return started;
      }
      else
      {
        IrisStatus = gaia::Gaia_Iris::GetIrisStatus(self);
        if ( IrisStatus != 0 )
        {
          v17 = IrisStatus;
          gaia::GaiaRequest::SetResponseCode(a2, IrisStatus);
          return v17;
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), (char *)&unk_1B15112, (int)(uintptr_t)(&v24) + 3);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "asset_upload", (int)(uintptr_t)(&v25));
          AccessToken = gaia::Gaia_Iris::GetAccessToken((gaia::Gaia::Self *)(self), a2, (uint32_t *)(&v31), (int)(uintptr_t)(&v30));
          v22 = (void *)(v31 - 12);
          if ( (uint32_t *)(v31 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
          {
            v18 = AccessToken;
            g4_std::string::Rep::M_destroy(v22);
            AccessToken = v18;
          }
          if ( AccessToken != 0 )
          {
            v16 = AccessToken;
            gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
            v10 = v16;
          }
          else
          {
            gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v35, (const char *)a2);
            Json::Value::asString((Json::Value::Self *)v32, (int)(uintptr_t)(v35));
            Json::Value::Destroy((Json::Value::Self *)v35);
            gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v36, (const char *)a2);
            v20 = Json::Value::asUInt((Json::Value::Self *)v36);
            Json::Value::Destroy((Json::Value::Self *)v36);
            gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v37, (const char *)a2);
            v21 = Json::Value::asUInt((Json::Value::Self *)v37);
            Json::Value::Destroy((Json::Value::Self *)v37);
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "uses", (int)(uintptr_t)(&v25) + 1);
            v8 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v33);
            isNull = Json::Value::isNull(v8);
            g4_std::string::Destroy(&v33);
            v19 = 1;
            if ( !isNull )
            {
              gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v38, (const char *)a2);
              v19 = Json::Value::asUInt((Json::Value::Self *)v38);
              Json::Value::Destroy((Json::Value::Self *)v38);
            }
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), (char *)&unk_1B15112, (int)(uintptr_t)(&v25) + 2);
            Instance = gaia::Gaia::GetInstance();
            v13 = gaia::Iris::CreateCoupons(*(uint32_t *)(Instance + 28), &v30, v32, v20, v21, v19, &v34, a2);
            gaia::GaiaRequest::SetResponse(a2, &v34);
            gaia::GaiaRequest::SetResponseCode(a2, v13);
            g4_std::string::Destroy(&v34);
            g4_std::string::Destroy(v32);
            v10 = v13;
          }
          v14 = v10;
          g4_std::string::Destroy(&v30);
          return v14;
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
// Function: gaia::Gaia_Iris::UploadAsset  (binary VA: 0x147aa50)
// Original: gaia::Gaia_Iris::UploadAsset
// ----------------------------------------------------------------------------
int gaia::Gaia_Iris::UploadAsset(gaia::Gaia_Iris::Self *self, gaia::GaiaRequest::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  int IrisStatus;
  int AccessToken;
  Json::Value::Self *v8;
  Json::Value::Self *v9;
  char v10; // di
  int Instance;
  int v12;
  char v14; // bp
  typedef bool _g4_t_isNull;
  typedef bool _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_started;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef char _g4_t_v22;
  typedef int _g4_t_v23;
  typedef char _g4_t_v24;
  typedef void *_g4_t_v25;
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
  typedef uint8_t _g4_t_v39[16];
  typedef uint8_t _g4_t_v40[16];
  typedef uint8_t _g4_t_v41[16];
  typedef uint8_t _g4_t_v42[16];
  typedef uint8_t _g4_t_v43[96];
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (12u + sizeof(_g4_t_isNull)) > _g4_s0 ? (12u + sizeof(_g4_t_isNull)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v16)) > _g4_s1 ? (12u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v17)) > _g4_s2 ? (12u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v18)) > _g4_s3 ? (12u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_started)) > _g4_s4 ? (12u + sizeof(_g4_t_started)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v20)) > _g4_s5 ? (12u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v21)) > _g4_s6 ? (12u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v22)) > _g4_s7 ? (12u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v23)) > _g4_s8 ? (12u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v24)) > _g4_s9 ? (16u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v25)) > _g4_s10 ? (28u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (39u + sizeof(_g4_t_v26)) > _g4_s11 ? (39u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v27)) > _g4_s12 ? (40u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v28)) > _g4_s13 ? (44u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v29)) > _g4_s14 ? (52u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v30)) > _g4_s15 ? (56u + sizeof(_g4_t_v30)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v31)) > _g4_s16 ? (60u + sizeof(_g4_t_v31)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v32)) > _g4_s17 ? (64u + sizeof(_g4_t_v32)) : _g4_s17,
    _g4_s19 = (68u + sizeof(_g4_t_v33)) > _g4_s18 ? (68u + sizeof(_g4_t_v33)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v34)) > _g4_s19 ? (72u + sizeof(_g4_t_v34)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v35)) > _g4_s20 ? (76u + sizeof(_g4_t_v35)) : _g4_s20,
    _g4_s22 = (80u + sizeof(_g4_t_v36)) > _g4_s21 ? (80u + sizeof(_g4_t_v36)) : _g4_s21,
    _g4_s23 = (84u + sizeof(_g4_t_v37)) > _g4_s22 ? (84u + sizeof(_g4_t_v37)) : _g4_s22,
    _g4_s24 = (88u + sizeof(_g4_t_v38)) > _g4_s23 ? (88u + sizeof(_g4_t_v38)) : _g4_s23,
    _g4_s25 = (92u + sizeof(_g4_t_v39)) > _g4_s24 ? (92u + sizeof(_g4_t_v39)) : _g4_s24,
    _g4_s26 = (108u + sizeof(_g4_t_v40)) > _g4_s25 ? (108u + sizeof(_g4_t_v40)) : _g4_s25,
    _g4_s27 = (124u + sizeof(_g4_t_v41)) > _g4_s26 ? (124u + sizeof(_g4_t_v41)) : _g4_s26,
    _g4_s28 = (140u + sizeof(_g4_t_v42)) > _g4_s27 ? (140u + sizeof(_g4_t_v42)) : _g4_s27,
    _g4_s29 = (156u + sizeof(_g4_t_v43)) > _g4_s28 ? (156u + sizeof(_g4_t_v43)) : _g4_s28
  };
  alignas(16) uint8_t _g4_sf[_g4_s29];
  _g4_t_isNull &isNull = *reinterpret_cast<_g4_t_isNull *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 39u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 40u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 44u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 52u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 56u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 60u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 64u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 68u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 72u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 76u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 80u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 84u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 88u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 92u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 108u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 124u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 140u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 156u);

  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "asset_name", (int)(uintptr_t)(&v26));
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
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "override", (int)(uintptr_t)(&v27) + 1);
    gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v31), 5);
    v4 = (void *)(v31 - 12);
    if ( (uint32_t *)(v31 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "only_this_client", (int)(uintptr_t)(&v27) + 2);
    gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&v32), 5);
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
        gaia::GaiaRequest::SetOperationCode(a2, 4503);
        gaia::Gaia::GetInstance();
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v43, a2);
        started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v43);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v43);
        return started;
      }
      else
      {
        IrisStatus = gaia::Gaia_Iris::GetIrisStatus(self);
        if ( IrisStatus != 0 )
        {
          v21 = IrisStatus;
          gaia::GaiaRequest::SetResponseCode(a2, IrisStatus);
          return v21;
        }
        else
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), (char *)&unk_1B15112, (int)(uintptr_t)(&v27) + 3);
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "asset_upload", (int)(uintptr_t)(&v28));
          AccessToken = gaia::Gaia_Iris::GetAccessToken((gaia::Gaia::Self *)(self), a2, (uint32_t *)(&v34), (int)(uintptr_t)(&v33));
          v25 = (void *)(v34 - 12);
          if ( (uint32_t *)(v34 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
          {
            v23 = AccessToken;
            g4_std::string::Rep::M_destroy(v25);
            AccessToken = v23;
          }
          if ( AccessToken != 0 )
          {
            v20 = AccessToken;
            gaia::GaiaRequest::SetResponseCode(a2, AccessToken);
            v12 = v20;
          }
          else
          {
            gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v39, (const char *)a2);
            Json::Value::asString((Json::Value::Self *)&v35, (int)(uintptr_t)(v39));
            Json::Value::Destroy((Json::Value::Self *)v39);
            gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v40, (const char *)a2);
            Json::Value::asString((Json::Value::Self *)&v36, (int)(uintptr_t)(v40));
            Json::Value::Destroy((Json::Value::Self *)v40);
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "override", (int)(uintptr_t)(&v28) + 1);
            v8 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v37);
            isNull = Json::Value::isNull(v8);
            g4_std::string::Destroy(&v37);
            v24 = 0;
            if ( !isNull )
            {
              gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v41, (const char *)a2);
              v22 = Json::Value::asBool((Json::Value::Self *)v41);
              Json::Value::Destroy((Json::Value::Self *)v41);
              v24 = v22;
            }
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "only_this_client", (int)(uintptr_t)(&v28) + 2);
            v9 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &v38);
            v16 = Json::Value::isNull(v9);
            g4_std::string::Destroy(&v38);
            v10 = 1;
            if ( !v16 )
            {
              gaia::GaiaRequest::GetInputValue((gaia::GaiaRequest::Self *)v42, (const char *)a2);
              v14 = Json::Value::asBool((Json::Value::Self *)v42);
              Json::Value::Destroy((Json::Value::Self *)v42);
              v10 = v14;
            }
            Instance = gaia::Gaia::GetInstance();
            v17 = gaia::Iris::UploadAsset(
                    *(gaia::BaseServiceManager::Self **)(Instance + 28),
                    (int)(uintptr_t)(&v33),
                    (int)(uintptr_t)(&v35),
                    (int)(uintptr_t)(&v36),
                    v24,
                    v10,
                    (int)(uintptr_t)(a2));
            gaia::GaiaRequest::SetResponseCode(a2, v17);
            g4_std::string::Destroy(&v36);
            g4_std::string::Destroy(&v35);
            v12 = v17;
          }
          v18 = v12;
          g4_std::string::Destroy(&v33);
          return v18;
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
// Function: gaia::Gaia_Iris::StartAndAuthorizeIris  (binary VA: 0x1491140)
// Original: gaia::Gaia_Iris::StartAndAuthorizeIris
// ----------------------------------------------------------------------------
int gaia::Gaia_Iris::StartAndAuthorizeIris(gaia::Gaia::Self *a1, int a2, uint32_t *a3)
{
  char IsInitialized;
  int result;
  int Instance;

  gaia::Gaia::GetInstance();
  IsInitialized = gaia::Gaia::IsInitialized();
  result = -21;
  if ( IsInitialized != 0 )
  {
    result = gaia::Gaia_Iris::GetIrisStatus((gaia::Gaia_Iris::Self *)(a1));
    if ( result == 0 )
    {
      Instance = gaia::Gaia::GetInstance();
      return gaia::Gaia::Authorize(Instance, a3, a2, 0, 0, 0);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Iris::CreateCoupons  (binary VA: 0x14911b0)
// Original: gaia::Gaia_Iris::CreateCoupons
// ----------------------------------------------------------------------------
int gaia::Gaia_Iris::CreateCoupons(gaia::Gaia::Self *a1, int a2, uint32_t *a3, int a4, unsigned int a5, unsigned int a6, unsigned int a7, char a8, int a9, int a10)
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
  typedef gaia::ThreadManager::Self *_g4_t_v23;
  typedef int _g4_t_Coupons;
  typedef int _g4_t_v25;
  typedef uint16_t _g4_t_v26[3];
  typedef uint8_t _g4_t_v27[4];
  typedef uint8_t _g4_t_v28[16];
  typedef uint8_t _g4_t_v29[16];
  typedef uint8_t _g4_t_v30[16];
  typedef uint8_t _g4_t_v31[16];
  typedef uint8_t _g4_t_v32[28];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v23)) > _g4_s0 ? (0u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_Coupons)) > _g4_s1 ? (40u + sizeof(_g4_t_Coupons)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v25)) > _g4_s2 ? (40u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (54u + sizeof(_g4_t_v26)) > _g4_s3 ? (54u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v27)) > _g4_s4 ? (60u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v28)) > _g4_s5 ? (64u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v29)) > _g4_s6 ? (80u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v30)) > _g4_s7 ? (96u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (112u + sizeof(_g4_t_v31)) > _g4_s8 ? (112u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (128u + sizeof(_g4_t_v32)) > _g4_s9 ? (128u + sizeof(_g4_t_v32)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_Coupons &Coupons = *reinterpret_cast<_g4_t_Coupons *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 54u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 64u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 80u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 96u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 112u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 128u);

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
        v14[2] = 4506;
        Json::Value::Construct((int)(uintptr_t)(v14 + 3), nullptr);
        v14[7] = 0;
        v14[8] = 0;
        Json::Value::Construct((int)(uintptr_t)(v14 + 9), nullptr);
        v14[13] = 0;
        v14[14] = 0;
        v14[15] = 0;
        v14[16] = 0;
        Json::Value::Construct((Json::Value::Self *)v28, a2);
        v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "accountType");
        Json::Value::opAssign(v15, (const Json::Value::Self *)v28);
        Json::Value::Destroy((Json::Value::Self *)v28);
        Json::Value::Construct((int)(uintptr_t)(v29), a3);
        v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "data");
        Json::Value::opAssign(v16, (const Json::Value::Self *)v29);
        Json::Value::Destroy((Json::Value::Self *)v29);
        v14[15] = a4;
        Json::Value::Construct((Json::Value::Self *)v30, a5);
        v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "coupon_length");
        Json::Value::opAssign(v17, (const Json::Value::Self *)v30);
        Json::Value::Destroy((Json::Value::Self *)v30);
        Json::Value::Construct((Json::Value::Self *)v31, a7);
        v18 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "coupon_uses");
        Json::Value::opAssign(v18, (const Json::Value::Self *)v31);
        Json::Value::Destroy((Json::Value::Self *)v31);
        Json::Value::Construct((Json::Value::Self *)v32, a6);
        v19 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "number_of_coupons");
        Json::Value::opAssign(v19, (const Json::Value::Self *)v32);
        Json::Value::Destroy((Json::Value::Self *)v32);
        v20 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v23));
        return gaia::ThreadManager::pushTask(v20, v14);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26[1]), "asset_upload", (int)(uintptr_t)(v26));
        result = gaia::Gaia_Iris::StartAndAuthorizeIris(a1, a2, &v26[1]);
        v13 = (void *)(*(uint32_t *)&v26[1] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v26[1] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v26[1] - 4), 0xFFFFFFFF) <= 0 )
        {
          v25 = result;
          g4_std::string::Rep::M_destroy(v13);
          result = v25;
        }
        if ( result == 0 )
        {
          v21 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(v27), v21);
          v22 = gaia::Gaia::GetInstance();
          Coupons = gaia::Iris::CreateCoupons(*(uint32_t *)(v22 + 28), v27, a3, a5, a6, a7, a4, nullptr);
          g4_std::string::Destroy(v27);
          return Coupons;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_Iris::UploadAsset  (binary VA: 0x1491520)
// Original: gaia::Gaia_Iris::UploadAsset
// ----------------------------------------------------------------------------
int gaia::Gaia_Iris::UploadAsset(gaia::Gaia::Self *a1, int a2, uint32_t *a3, void *a4, size_t a5, char a6, char a7, char a8, int a9, int a10)
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
  typedef gaia::ThreadManager::Self *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint8_t _g4_t_v26[7];
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef uint8_t _g4_t_v29[16];
  typedef uint8_t _g4_t_v30[16];
  typedef uint8_t _g4_t_v31[16];
  typedef uint8_t _g4_t_v32[16];
  typedef uint8_t _g4_t_v33[28];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v23)) > _g4_s0 ? (0u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (36u + sizeof(_g4_t_v24)) > _g4_s1 ? (36u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v25)) > _g4_s2 ? (36u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (49u + sizeof(_g4_t_v26)) > _g4_s3 ? (49u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v27)) > _g4_s4 ? (56u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v28)) > _g4_s5 ? (60u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v29)) > _g4_s6 ? (64u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v30)) > _g4_s7 ? (80u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (96u + sizeof(_g4_t_v31)) > _g4_s8 ? (96u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (112u + sizeof(_g4_t_v32)) > _g4_s9 ? (112u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (128u + sizeof(_g4_t_v33)) > _g4_s10 ? (128u + sizeof(_g4_t_v33)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 36u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 49u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 56u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 60u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 64u);
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
      if ( a8 != 0 )
      {
        v14 = (uint32_t *)opNew(0x44u);
        *v14 = a10;
        v14[1] = a9;
        v14[2] = 4503;
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
        v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "asset_name");
        Json::Value::opAssign(v16, (const Json::Value::Self *)v30);
        Json::Value::Destroy((Json::Value::Self *)v30);
        v14[15] = (uint32_t)(uintptr_t)(a4);
        Json::Value::Construct((Json::Value::Self *)v31, a5);
        v17 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "dataSize");
        Json::Value::opAssign(v17, (const Json::Value::Self *)v31);
        Json::Value::Destroy((Json::Value::Self *)v31);
        Json::Value::Construct((Json::Value::Self *)v32, a6);
        v18 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "_override");
        Json::Value::opAssign(v18, (const Json::Value::Self *)v32);
        Json::Value::Destroy((Json::Value::Self *)v32);
        Json::Value::Construct((Json::Value::Self *)v33, a7);
        v19 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v14 + 3), "only_this_client");
        Json::Value::opAssign(v19, (const Json::Value::Self *)v33);
        Json::Value::Destroy((Json::Value::Self *)v33);
        v20 = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v23));
        return gaia::ThreadManager::pushTask(v20, v14);
      }
      else
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26[3]), "asset_upload", (int)(uintptr_t)(v26));
        result = gaia::Gaia_Iris::StartAndAuthorizeIris(a1, a2, &v26[3]);
        v13 = (void *)(*(uint32_t *)&v26[3] - 12);
        if ( (uint32_t *)(*(uint32_t *)&v26[3] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v26[3] - 4), 0xFFFFFFFF) <= 0 )
        {
          v25 = result;
          g4_std::string::Rep::M_destroy(v13);
          result = v25;
        }
        if ( result == 0 )
        {
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), (char *)&unk_1B15112, (int)(uintptr_t)(&v26[1]));
          sub_1939B80(&v27, a5 + 1);
          sub_1939D80((int)(uintptr_t)(&v27), a5, 0);
          sub_193A9B0((int)(uintptr_t)(&v27), 0, a5, a4, a5);
          v21 = gaia::Gaia::GetInstance();
          gaia::Gaia::GetJanusToken((int)(uintptr_t)(&v28), v21);
          v22 = gaia::Gaia::GetInstance();
          v24 = gaia::Iris::UploadAsset(
                  *(gaia::BaseServiceManager::Self **)(v22 + 28),
                  (int)(uintptr_t)(&v28),
                  (int)(uintptr_t)(a3),
                  (int)(uintptr_t)(&v27),
                  a6,
                  a7,
                  0);
          g4_std::string::Destroy(&v28);
          g4_std::string::Destroy(&v27);
          return v24;
        }
      }
    }
  }
  return result;
}


