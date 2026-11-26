#include "Core/Utils/DecompTypes.h"
#include "gaia_Gaia_GlobalDeviceID.h"

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_GlobalDeviceID::Construct  (binary VA: 0x1442b40)
// Original: gaia::Gaia_GlobalDeviceID::Gaia_GlobalDeviceID
// ----------------------------------------------------------------------------
gaia::Gaia_GlobalDeviceID::Self * gaia::Gaia_GlobalDeviceID::Construct(gaia::Gaia_GlobalDeviceID::Self *self)
{
  gaia::Gaia_GlobalDeviceID::Self *result;
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  glwebtools::Mutex::Construct(self);
  *((uint32_t *)self + 2) = 0;
  result = (gaia::Gaia_GlobalDeviceID::Self *)g4_std::string::construct_from_cstr((int)(uintptr_t)(self) + 12, (char *)&unk_1B15112, (int)(uintptr_t)(&v2));
  *((uint8_t *)self + 16) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_GlobalDeviceID::ShutDown  (binary VA: 0x1442ba0)
// Original: gaia::Gaia_GlobalDeviceID::ShutDown
// ----------------------------------------------------------------------------
int gaia::Gaia_GlobalDeviceID::ShutDown(gaia::Gaia_GlobalDeviceID::Self *self)
{
  int v1;

  glwebtools::Mutex::Lock(self);
  v1 = *((uint32_t *)self + 2);
  *((uint32_t *)self + 2) = 0;
  if ( v1 != 0 )
    G4_VCALL<void>(v1, 16);
  *((uint8_t *)self + 16) = 0;
  return (int)(uintptr_t)(glwebtools::Mutex::Unlock(self));
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_GlobalDeviceID::GetGlobalDeviceIDStatus  (binary VA: 0x1442c00)
// Original: gaia::Gaia_GlobalDeviceID::GetGlobalDeviceIDStatus
// ----------------------------------------------------------------------------
unsigned int gaia::Gaia_GlobalDeviceID::GetGlobalDeviceIDStatus(gaia::Gaia_GlobalDeviceID::Self *self)
{
  return *((uint32_t *)self + 2) == 0 ? 0xFFFFFED1 : 0;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_GlobalDeviceID::Update  (binary VA: 0x1442c10)
// Original: gaia::Gaia_GlobalDeviceID::Update
// ----------------------------------------------------------------------------
int gaia::Gaia_GlobalDeviceID::Update(gaia::Gaia_GlobalDeviceID::Self *self)
{
  int v1;

  glwebtools::Mutex::Lock(self);
  v1 = *((uint32_t *)self + 2);
  if ( v1 != 0 )
    (*(void (**)(uint32_t))(*(uint32_t *)v1 + 20))(*((uint32_t *)self + 2));
  return (int)(uintptr_t)(glwebtools::Mutex::Unlock(self));
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_GlobalDeviceID::Destroy  (binary VA: 0x1442c60)
// Original: gaia::Gaia_GlobalDeviceID::~Gaia_GlobalDeviceID
// ----------------------------------------------------------------------------
void gaia::Gaia_GlobalDeviceID::Destroy(gaia::Gaia_GlobalDeviceID::Self *self)
{
  int v1;
  int v2;
  typedef char *_g4_t_v3;
  typedef char _g4_t_v4;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v3)) > _g4_s0 ? (4u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (31u + sizeof(_g4_t_v4)) > _g4_s1 ? (31u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 4u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 31u);

  v1 = *((uint32_t *)self + 3);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    v3 = &v4;
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  v2 = *((uint32_t *)self + 2);
  if ( v2 != 0 )
    (*(void (**)(uint32_t, char *))(*(uint32_t *)v2 + 16))(*((uint32_t *)self + 2), v3);
  glwebtools::Mutex::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_GlobalDeviceID::CancelRequest  (binary VA: 0x1442cd0)
// Original: gaia::Gaia_GlobalDeviceID::CancelRequest
// ----------------------------------------------------------------------------
int gaia::Gaia_GlobalDeviceID::CancelRequest(glwebtools::Mutex::Self *a1, int a2)
{
  int v2;
  int v3;
  int Instance;
  glwebtools::Mutex::Self *v6;

  v2 = -303;
  glwebtools::Mutex::Lock(a1);
  if ( *((uint8_t *)a1 + 16) != 0 )
  {
    v3 = *((uint32_t *)a1 + 2);
    if ( v3 != 0 )
    {
      if ( a2 == 1 )
      {
        Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v6));
        gaia::ThreadManager::CancelRequest(Instance, 8000);
        v3 = *((uint32_t *)a1 + 2);
        if ( v3 == 0 )
        {
          __assert2(
            "../../../../../lib/glitch/include/boost/smart_ptr/scoped_ptr.hpp",
            99,
            "T* boost::scoped_ptr<T>::operator->() const [with T = gaia::GlobalDeviceID]",
            "px != 0");
          v3 = *((uint32_t *)a1 + 2);
        }
      }
      v2 = 0;
      gaia::BaseServiceManager::CancelRequest(v3, a2);
    }
  }
  glwebtools::Mutex::Unlock(a1);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_GlobalDeviceID::GetDeviceId  (binary VA: 0x1445920)
// Original: gaia::Gaia_GlobalDeviceID::GetDeviceId
// ----------------------------------------------------------------------------
int gaia::Gaia_GlobalDeviceID::GetDeviceId(gaia::Gaia_GlobalDeviceID::Self *self, gaia::GaiaRequest::Self *a2)
{
  char IsInitialized;
  int result;
  int GlobalDeviceIDStatus;
  Json::Value::Self *v5;
  Json::Value::Self *v6;
  Json::Value::Self *v7;
  Json::Value::Self *v8;
  Json::Value::Self *v9;
  int v10;
  int DeviceId;
  volatile int32_t *v12;
  volatile int32_t *v13;
  volatile int32_t *v14;
  volatile int32_t *v15;
  volatile int32_t *v16;
  volatile int32_t *v17;
  typedef Json::Value::Self *_g4_t_v18;
  typedef gaia::Gaia::Self *_g4_t_v19;
  typedef gaia::Gaia::Self *_g4_t_v20;
  typedef Json::Value::Self *_g4_t_started;
  typedef Json::Value::Self *_g4_t_v22;
  typedef volatile int32_t *_g4_t_v23;
  typedef volatile int32_t *_g4_t_v24;
  typedef volatile int32_t *_g4_t_v25;
  typedef volatile int32_t *_g4_t_v26;
  typedef volatile int32_t *_g4_t_v27;
  typedef volatile int32_t *_g4_t_v28;
  typedef char _g4_t_v29[4];
  typedef char _g4_t_v30[4];
  typedef char _g4_t_v31[4];
  typedef char _g4_t_v32[4];
  typedef char _g4_t_v33[4];
  typedef char _g4_t_v34[4];
  typedef char _g4_t_v35[4];
  typedef char _g4_t_v36[4];
  typedef char _g4_t_v37[4];
  typedef char _g4_t_v38[4];
  typedef uint8_t _g4_t_v39[16];
  typedef uint8_t _g4_t_v40[16];
  typedef uint8_t _g4_t_v41[16];
  typedef uint8_t _g4_t_v42[16];
  typedef uint8_t _g4_t_v43[16];
  typedef uint8_t _g4_t_v44[96];
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (0u + sizeof(_g4_t_v18)) > _g4_s0 ? (0u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v19)) > _g4_s1 ? (0u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v20)) > _g4_s2 ? (0u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_started)) > _g4_s3 ? (48u + sizeof(_g4_t_started)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v22)) > _g4_s4 ? (48u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (76u + sizeof(_g4_t_v23)) > _g4_s5 ? (76u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v24)) > _g4_s6 ? (80u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (84u + sizeof(_g4_t_v25)) > _g4_s7 ? (84u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (88u + sizeof(_g4_t_v26)) > _g4_s8 ? (88u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (92u + sizeof(_g4_t_v27)) > _g4_s9 ? (92u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (96u + sizeof(_g4_t_v28)) > _g4_s10 ? (96u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (100u + sizeof(_g4_t_v29)) > _g4_s11 ? (100u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (104u + sizeof(_g4_t_v30)) > _g4_s12 ? (104u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (108u + sizeof(_g4_t_v31)) > _g4_s13 ? (108u + sizeof(_g4_t_v31)) : _g4_s13,
    _g4_s15 = (112u + sizeof(_g4_t_v32)) > _g4_s14 ? (112u + sizeof(_g4_t_v32)) : _g4_s14,
    _g4_s16 = (116u + sizeof(_g4_t_v33)) > _g4_s15 ? (116u + sizeof(_g4_t_v33)) : _g4_s15,
    _g4_s17 = (120u + sizeof(_g4_t_v34)) > _g4_s16 ? (120u + sizeof(_g4_t_v34)) : _g4_s16,
    _g4_s18 = (124u + sizeof(_g4_t_v35)) > _g4_s17 ? (124u + sizeof(_g4_t_v35)) : _g4_s17,
    _g4_s19 = (128u + sizeof(_g4_t_v36)) > _g4_s18 ? (128u + sizeof(_g4_t_v36)) : _g4_s18,
    _g4_s20 = (132u + sizeof(_g4_t_v37)) > _g4_s19 ? (132u + sizeof(_g4_t_v37)) : _g4_s19,
    _g4_s21 = (136u + sizeof(_g4_t_v38)) > _g4_s20 ? (136u + sizeof(_g4_t_v38)) : _g4_s20,
    _g4_s22 = (140u + sizeof(_g4_t_v39)) > _g4_s21 ? (140u + sizeof(_g4_t_v39)) : _g4_s21,
    _g4_s23 = (156u + sizeof(_g4_t_v40)) > _g4_s22 ? (156u + sizeof(_g4_t_v40)) : _g4_s22,
    _g4_s24 = (172u + sizeof(_g4_t_v41)) > _g4_s23 ? (172u + sizeof(_g4_t_v41)) : _g4_s23,
    _g4_s25 = (188u + sizeof(_g4_t_v42)) > _g4_s24 ? (188u + sizeof(_g4_t_v42)) : _g4_s24,
    _g4_s26 = (204u + sizeof(_g4_t_v43)) > _g4_s25 ? (204u + sizeof(_g4_t_v43)) : _g4_s25,
    _g4_s27 = (220u + sizeof(_g4_t_v44)) > _g4_s26 ? (220u + sizeof(_g4_t_v44)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_started &started = *reinterpret_cast<_g4_t_started *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 48u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 76u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 80u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 84u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 88u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 92u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 96u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 100u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 104u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 108u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 112u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 116u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 120u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 124u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 128u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 132u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 136u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 140u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 156u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 172u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 188u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 204u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 220u);

  gaia::Gaia::GetInstance(v18);
  IsInitialized = gaia::Gaia::IsInitialized(v19);
  result = -21;
  if ( IsInitialized != 0 )
  {
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&unk_2119B58), 4);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&unk_2119B5C), 4);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&unk_2119B98), 4);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&unk_2119B9C), 4);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&unk_2119B60), 4);
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 8003);
        gaia::Gaia::GetInstance(v20);
        gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v44, a2);
        started = (Json::Value::Self *)gaia::Gaia::StartWorkerThread(v44);
        gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v44);
        return (int)(uintptr_t)(started);
      }
      else
      {
        GlobalDeviceIDStatus = gaia::Gaia_GlobalDeviceID::GetGlobalDeviceIDStatus(self);
        if ( GlobalDeviceIDStatus != 0 )
        {
          v22 = (Json::Value::Self *)GlobalDeviceIDStatus;
          gaia::GaiaRequest::SetResponseCode(a2, GlobalDeviceIDStatus);
          return (int)(uintptr_t)(v22);
        }
        else
        {
          v23 = (volatile int32_t *)&dword_213B814;
          v24 = (volatile int32_t *)&dword_213B814;
          v25 = (volatile int32_t *)&dword_213B814;
          v26 = (volatile int32_t *)&dword_213B814;
          v27 = (volatile int32_t *)&dword_213B814;
          v28 = (volatile int32_t *)&dword_213B814;
          v5 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B58);
          if ( (uint8_t)Json::Value::isNull(v5) == 0 )
          {
            g4_std::string::construct_copy(v29, &unk_2119B58);
            gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v39);
            Json::Value::asString((Json::Value::Self *)v30);
            g4_std::string::assign_str(&v23, v30);
            g4_std::string::Destroy(v30);
            Json::Value::Destroy((Json::Value::Self *)v39);
            g4_std::string::Destroy(v29);
          }
          v6 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B5C);
          if ( (uint8_t)Json::Value::isNull(v6) == 0 )
          {
            g4_std::string::construct_copy(v31, &unk_2119B5C);
            gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v40);
            Json::Value::asString((Json::Value::Self *)v32);
            g4_std::string::assign_str(&v24, v32);
            g4_std::string::Destroy(v32);
            Json::Value::Destroy((Json::Value::Self *)v40);
            g4_std::string::Destroy(v31);
          }
          v7 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B98);
          if ( (uint8_t)Json::Value::isNull(v7) == 0 )
          {
            g4_std::string::construct_copy(v33, &unk_2119B98);
            gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v41);
            Json::Value::asString((Json::Value::Self *)v34);
            g4_std::string::assign_str(&v25, v34);
            g4_std::string::Destroy(v34);
            Json::Value::Destroy((Json::Value::Self *)v41);
            g4_std::string::Destroy(v33);
          }
          v8 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B9C);
          if ( (uint8_t)Json::Value::isNull(v8) == 0 )
          {
            g4_std::string::construct_copy(v35, &unk_2119B9C);
            gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v42);
            Json::Value::asString((Json::Value::Self *)v36);
            g4_std::string::assign_str(&v26, v36);
            g4_std::string::Destroy(v36);
            Json::Value::Destroy((Json::Value::Self *)v42);
            g4_std::string::Destroy(v35);
          }
          v9 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B60);
          if ( (uint8_t)Json::Value::isNull(v9) == 0 )
          {
            g4_std::string::construct_copy(v37, &unk_2119B60);
            gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v43);
            Json::Value::asString((Json::Value::Self *)v38);
            g4_std::string::assign_str(&v28, v38);
            g4_std::string::Destroy(v38);
            Json::Value::Destroy((Json::Value::Self *)v43);
            g4_std::string::Destroy(v37);
          }
          v10 = *((uint32_t *)self + 2);
          if ( v10 == 0 )
          {
            __assert2(
              "../../../../../lib/glitch/include/boost/smart_ptr/scoped_ptr.hpp",
              99,
              "T* boost::scoped_ptr<T>::operator->() const [with T = gaia::GlobalDeviceID]",
              "px != 0");
            v10 = *((uint32_t *)self + 2);
          }
          DeviceId = gaia::GlobalDeviceID::GetDeviceId(v10, &v27, &v28, &v23, &v24, &v25, &v26, a2);
          gaia::GaiaRequest::SetResponseCode(a2, DeviceId);
          gaia::GaiaRequest::SetResponse(a2, &v27);
          v12 = v28 - 3;
          if ( v28 - 3 != (volatile int32_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add(v28 - 1, 0xFFFFFFFF) <= 0 )
            g4_std::string::Rep::M_destroy((void *)v12);
          v13 = v27 - 3;
          if ( v27 - 3 != (volatile int32_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add(v27 - 1, 0xFFFFFFFF) <= 0 )
            g4_std::string::Rep::M_destroy((void *)v13);
          v14 = v26 - 3;
          if ( v26 - 3 != (volatile int32_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add(v26 - 1, 0xFFFFFFFF) <= 0 )
            g4_std::string::Rep::M_destroy((void *)v14);
          v15 = v25 - 3;
          if ( v25 - 3 != (volatile int32_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add(v25 - 1, 0xFFFFFFFF) <= 0 )
            g4_std::string::Rep::M_destroy((void *)v15);
          v16 = v24 - 3;
          if ( v24 - 3 != (volatile int32_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add(v24 - 1, 0xFFFFFFFF) <= 0 )
            g4_std::string::Rep::M_destroy((void *)v16);
          v17 = v23 - 3;
          if ( v23 - 3 == (volatile int32_t *)(uintptr_t)(dword_213B808) )
          {
            return DeviceId;
          }
          else
          {
            result = DeviceId;
            if ( __sync_fetch_and_add(v23 - 1, 0xFFFFFFFF) <= 0 )
            {
              g4_std::string::Rep::M_destroy((void *)v17);
              return DeviceId;
            }
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
// Function: gaia::Gaia_GlobalDeviceID::UpdateDeviceId  (binary VA: 0x1446030)
// Original: gaia::Gaia_GlobalDeviceID::UpdateDeviceId
// ----------------------------------------------------------------------------
int gaia::Gaia_GlobalDeviceID::UpdateDeviceId(gaia::Gaia_GlobalDeviceID::Self *self, gaia::GaiaRequest::Self *a2)
{
  int v2;
  unsigned int GlobalDeviceIDStatus;
  Json::Value::Self *v4;
  Json::Value::Self *v5;
  Json::Value::Self *v6;
  Json::Value::Self *v7;
  Json::Value::Self *v8;
  Json::Value::Self *v9;
  Json::Value::Self *v10;
  Json::Value::Self *v11;
  Json::Value::Self *v12;
  Json::Value::Self *v13;
  Json::Value::Self *v14;
  Json::Value::Self *v15;
  Json::Value::Self *v16;
  Json::Value::Self *v17;
  int v18;
  Json::Value::Self *v19;
  uint32_t *v20;
  uint32_t *v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;
  uint32_t *v27;
  uint32_t *v28;
  uint32_t *v29;
  uint32_t *v30;
  uint32_t *v31;
  uint32_t *v32;
  uint32_t *v33;
  uint32_t *v34;
  int started;
  typedef Json::Value::Self *_g4_t_updated;
  typedef Json::Value::Self *_g4_t_v38;
  typedef Json::Value::Self *_g4_t_v39;
  typedef Json::Value::Self *_g4_t_v40;
  typedef Json::Value::Self *_g4_t_v41;
  typedef Json::Value::Self *_g4_t_v42;
  typedef Json::Value::Self *_g4_t_v43;
  typedef Json::Value::Self *_g4_t_v44;
  typedef Json::Value::Self *_g4_t_v45;
  typedef Json::Value::Self *_g4_t_v46;
  typedef Json::Value::Self *_g4_t_v47;
  typedef Json::Value::Self *_g4_t_v48;
  typedef Json::Value::Self *_g4_t_v49;
  typedef Json::Value::Self *_g4_t_v50;
  typedef uint32_t *_g4_t_v51;
  typedef uint32_t *_g4_t_v52;
  typedef uint32_t *_g4_t_v53;
  typedef uint32_t *_g4_t_v54;
  typedef uint32_t *_g4_t_v55;
  typedef uint32_t *_g4_t_v56;
  typedef uint32_t *_g4_t_v57;
  typedef uint32_t *_g4_t_v58;
  typedef uint32_t *_g4_t_v59;
  typedef uint32_t *_g4_t_v60;
  typedef uint32_t *_g4_t_v61;
  typedef uint32_t *_g4_t_v62;
  typedef uint32_t *_g4_t_v63;
  typedef uint32_t *_g4_t_v64;
  typedef uint32_t *_g4_t_v65;
  typedef uint8_t _g4_t_v66[4];
  typedef uint8_t _g4_t_v67[4];
  typedef uint8_t _g4_t_v68[4];
  typedef uint8_t _g4_t_v69[4];
  typedef uint8_t _g4_t_v70[4];
  typedef uint8_t _g4_t_v71[4];
  typedef uint8_t _g4_t_v72[4];
  typedef uint8_t _g4_t_v73[4];
  typedef uint8_t _g4_t_v74[4];
  typedef uint8_t _g4_t_v75[4];
  typedef uint8_t _g4_t_v76[4];
  typedef uint8_t _g4_t_v77[4];
  typedef uint8_t _g4_t_v78[4];
  typedef uint8_t _g4_t_v79[4];
  typedef uint8_t _g4_t_v80[4];
  typedef uint8_t _g4_t_v81[4];
  typedef uint8_t _g4_t_v82[4];
  typedef uint8_t _g4_t_v83[4];
  typedef uint8_t _g4_t_v84[4];
  typedef uint8_t _g4_t_v85[4];
  typedef uint8_t _g4_t_v86[4];
  typedef uint8_t _g4_t_v87[4];
  typedef uint8_t _g4_t_v88[4];
  typedef uint8_t _g4_t_v89[4];
  typedef uint8_t _g4_t_v90[4];
  typedef uint8_t _g4_t_v91[4];
  typedef uint8_t _g4_t_v92[4];
  typedef uint8_t _g4_t_v93[4];
  typedef uint8_t _g4_t_v94[16];
  typedef uint8_t _g4_t_v95[16];
  typedef uint8_t _g4_t_v96[16];
  typedef uint8_t _g4_t_v97[16];
  typedef uint8_t _g4_t_v98[16];
  typedef uint8_t _g4_t_v99[16];
  typedef uint8_t _g4_t_v100[16];
  typedef uint8_t _g4_t_v101[16];
  typedef uint8_t _g4_t_v102[16];
  typedef uint8_t _g4_t_v103[16];
  typedef uint8_t _g4_t_v104[16];
  typedef uint8_t _g4_t_v105[16];
  typedef uint8_t _g4_t_v106[16];
  typedef uint8_t _g4_t_v107[16];
  typedef uint8_t _g4_t_v108[96];
  enum : size_t {
    _g4_s0 = 640u,
    _g4_s1 = (8u + sizeof(_g4_t_updated)) > _g4_s0 ? (8u + sizeof(_g4_t_updated)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v38)) > _g4_s1 ? (8u + sizeof(_g4_t_v38)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v39)) > _g4_s2 ? (8u + sizeof(_g4_t_v39)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v40)) > _g4_s3 ? (8u + sizeof(_g4_t_v40)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v41)) > _g4_s4 ? (8u + sizeof(_g4_t_v41)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v42)) > _g4_s5 ? (8u + sizeof(_g4_t_v42)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v43)) > _g4_s6 ? (8u + sizeof(_g4_t_v43)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v44)) > _g4_s7 ? (8u + sizeof(_g4_t_v44)) : _g4_s7,
    _g4_s9 = (8u + sizeof(_g4_t_v45)) > _g4_s8 ? (8u + sizeof(_g4_t_v45)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v46)) > _g4_s9 ? (8u + sizeof(_g4_t_v46)) : _g4_s9,
    _g4_s11 = (8u + sizeof(_g4_t_v47)) > _g4_s10 ? (8u + sizeof(_g4_t_v47)) : _g4_s10,
    _g4_s12 = (8u + sizeof(_g4_t_v48)) > _g4_s11 ? (8u + sizeof(_g4_t_v48)) : _g4_s11,
    _g4_s13 = (8u + sizeof(_g4_t_v49)) > _g4_s12 ? (8u + sizeof(_g4_t_v49)) : _g4_s12,
    _g4_s14 = (8u + sizeof(_g4_t_v50)) > _g4_s13 ? (8u + sizeof(_g4_t_v50)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v51)) > _g4_s14 ? (80u + sizeof(_g4_t_v51)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v52)) > _g4_s15 ? (84u + sizeof(_g4_t_v52)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v53)) > _g4_s16 ? (88u + sizeof(_g4_t_v53)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v54)) > _g4_s17 ? (92u + sizeof(_g4_t_v54)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_v55)) > _g4_s18 ? (96u + sizeof(_g4_t_v55)) : _g4_s18,
    _g4_s20 = (100u + sizeof(_g4_t_v56)) > _g4_s19 ? (100u + sizeof(_g4_t_v56)) : _g4_s19,
    _g4_s21 = (104u + sizeof(_g4_t_v57)) > _g4_s20 ? (104u + sizeof(_g4_t_v57)) : _g4_s20,
    _g4_s22 = (108u + sizeof(_g4_t_v58)) > _g4_s21 ? (108u + sizeof(_g4_t_v58)) : _g4_s21,
    _g4_s23 = (112u + sizeof(_g4_t_v59)) > _g4_s22 ? (112u + sizeof(_g4_t_v59)) : _g4_s22,
    _g4_s24 = (116u + sizeof(_g4_t_v60)) > _g4_s23 ? (116u + sizeof(_g4_t_v60)) : _g4_s23,
    _g4_s25 = (120u + sizeof(_g4_t_v61)) > _g4_s24 ? (120u + sizeof(_g4_t_v61)) : _g4_s24,
    _g4_s26 = (124u + sizeof(_g4_t_v62)) > _g4_s25 ? (124u + sizeof(_g4_t_v62)) : _g4_s25,
    _g4_s27 = (128u + sizeof(_g4_t_v63)) > _g4_s26 ? (128u + sizeof(_g4_t_v63)) : _g4_s26,
    _g4_s28 = (132u + sizeof(_g4_t_v64)) > _g4_s27 ? (132u + sizeof(_g4_t_v64)) : _g4_s27,
    _g4_s29 = (136u + sizeof(_g4_t_v65)) > _g4_s28 ? (136u + sizeof(_g4_t_v65)) : _g4_s28,
    _g4_s30 = (140u + sizeof(_g4_t_v66)) > _g4_s29 ? (140u + sizeof(_g4_t_v66)) : _g4_s29,
    _g4_s31 = (144u + sizeof(_g4_t_v67)) > _g4_s30 ? (144u + sizeof(_g4_t_v67)) : _g4_s30,
    _g4_s32 = (148u + sizeof(_g4_t_v68)) > _g4_s31 ? (148u + sizeof(_g4_t_v68)) : _g4_s31,
    _g4_s33 = (152u + sizeof(_g4_t_v69)) > _g4_s32 ? (152u + sizeof(_g4_t_v69)) : _g4_s32,
    _g4_s34 = (156u + sizeof(_g4_t_v70)) > _g4_s33 ? (156u + sizeof(_g4_t_v70)) : _g4_s33,
    _g4_s35 = (160u + sizeof(_g4_t_v71)) > _g4_s34 ? (160u + sizeof(_g4_t_v71)) : _g4_s34,
    _g4_s36 = (164u + sizeof(_g4_t_v72)) > _g4_s35 ? (164u + sizeof(_g4_t_v72)) : _g4_s35,
    _g4_s37 = (168u + sizeof(_g4_t_v73)) > _g4_s36 ? (168u + sizeof(_g4_t_v73)) : _g4_s36,
    _g4_s38 = (172u + sizeof(_g4_t_v74)) > _g4_s37 ? (172u + sizeof(_g4_t_v74)) : _g4_s37,
    _g4_s39 = (176u + sizeof(_g4_t_v75)) > _g4_s38 ? (176u + sizeof(_g4_t_v75)) : _g4_s38,
    _g4_s40 = (180u + sizeof(_g4_t_v76)) > _g4_s39 ? (180u + sizeof(_g4_t_v76)) : _g4_s39,
    _g4_s41 = (184u + sizeof(_g4_t_v77)) > _g4_s40 ? (184u + sizeof(_g4_t_v77)) : _g4_s40,
    _g4_s42 = (188u + sizeof(_g4_t_v78)) > _g4_s41 ? (188u + sizeof(_g4_t_v78)) : _g4_s41,
    _g4_s43 = (192u + sizeof(_g4_t_v79)) > _g4_s42 ? (192u + sizeof(_g4_t_v79)) : _g4_s42,
    _g4_s44 = (196u + sizeof(_g4_t_v80)) > _g4_s43 ? (196u + sizeof(_g4_t_v80)) : _g4_s43,
    _g4_s45 = (200u + sizeof(_g4_t_v81)) > _g4_s44 ? (200u + sizeof(_g4_t_v81)) : _g4_s44,
    _g4_s46 = (204u + sizeof(_g4_t_v82)) > _g4_s45 ? (204u + sizeof(_g4_t_v82)) : _g4_s45,
    _g4_s47 = (208u + sizeof(_g4_t_v83)) > _g4_s46 ? (208u + sizeof(_g4_t_v83)) : _g4_s46,
    _g4_s48 = (212u + sizeof(_g4_t_v84)) > _g4_s47 ? (212u + sizeof(_g4_t_v84)) : _g4_s47,
    _g4_s49 = (216u + sizeof(_g4_t_v85)) > _g4_s48 ? (216u + sizeof(_g4_t_v85)) : _g4_s48,
    _g4_s50 = (220u + sizeof(_g4_t_v86)) > _g4_s49 ? (220u + sizeof(_g4_t_v86)) : _g4_s49,
    _g4_s51 = (224u + sizeof(_g4_t_v87)) > _g4_s50 ? (224u + sizeof(_g4_t_v87)) : _g4_s50,
    _g4_s52 = (228u + sizeof(_g4_t_v88)) > _g4_s51 ? (228u + sizeof(_g4_t_v88)) : _g4_s51,
    _g4_s53 = (232u + sizeof(_g4_t_v89)) > _g4_s52 ? (232u + sizeof(_g4_t_v89)) : _g4_s52,
    _g4_s54 = (236u + sizeof(_g4_t_v90)) > _g4_s53 ? (236u + sizeof(_g4_t_v90)) : _g4_s53,
    _g4_s55 = (240u + sizeof(_g4_t_v91)) > _g4_s54 ? (240u + sizeof(_g4_t_v91)) : _g4_s54,
    _g4_s56 = (244u + sizeof(_g4_t_v92)) > _g4_s55 ? (244u + sizeof(_g4_t_v92)) : _g4_s55,
    _g4_s57 = (248u + sizeof(_g4_t_v93)) > _g4_s56 ? (248u + sizeof(_g4_t_v93)) : _g4_s56,
    _g4_s58 = (252u + sizeof(_g4_t_v94)) > _g4_s57 ? (252u + sizeof(_g4_t_v94)) : _g4_s57,
    _g4_s59 = (268u + sizeof(_g4_t_v95)) > _g4_s58 ? (268u + sizeof(_g4_t_v95)) : _g4_s58,
    _g4_s60 = (284u + sizeof(_g4_t_v96)) > _g4_s59 ? (284u + sizeof(_g4_t_v96)) : _g4_s59,
    _g4_s61 = (300u + sizeof(_g4_t_v97)) > _g4_s60 ? (300u + sizeof(_g4_t_v97)) : _g4_s60,
    _g4_s62 = (316u + sizeof(_g4_t_v98)) > _g4_s61 ? (316u + sizeof(_g4_t_v98)) : _g4_s61,
    _g4_s63 = (332u + sizeof(_g4_t_v99)) > _g4_s62 ? (332u + sizeof(_g4_t_v99)) : _g4_s62,
    _g4_s64 = (348u + sizeof(_g4_t_v100)) > _g4_s63 ? (348u + sizeof(_g4_t_v100)) : _g4_s63,
    _g4_s65 = (364u + sizeof(_g4_t_v101)) > _g4_s64 ? (364u + sizeof(_g4_t_v101)) : _g4_s64,
    _g4_s66 = (380u + sizeof(_g4_t_v102)) > _g4_s65 ? (380u + sizeof(_g4_t_v102)) : _g4_s65,
    _g4_s67 = (396u + sizeof(_g4_t_v103)) > _g4_s66 ? (396u + sizeof(_g4_t_v103)) : _g4_s66,
    _g4_s68 = (412u + sizeof(_g4_t_v104)) > _g4_s67 ? (412u + sizeof(_g4_t_v104)) : _g4_s67,
    _g4_s69 = (428u + sizeof(_g4_t_v105)) > _g4_s68 ? (428u + sizeof(_g4_t_v105)) : _g4_s68,
    _g4_s70 = (444u + sizeof(_g4_t_v106)) > _g4_s69 ? (444u + sizeof(_g4_t_v106)) : _g4_s69,
    _g4_s71 = (460u + sizeof(_g4_t_v107)) > _g4_s70 ? (460u + sizeof(_g4_t_v107)) : _g4_s70,
    _g4_s72 = (476u + sizeof(_g4_t_v108)) > _g4_s71 ? (476u + sizeof(_g4_t_v108)) : _g4_s71
  };
  alignas(16) uint8_t _g4_sf[_g4_s72];
  _g4_t_updated &updated = *reinterpret_cast<_g4_t_updated *>(_g4_sf + 8u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 8u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 8u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 8u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 8u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 8u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 8u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 8u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 8u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 8u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 8u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 8u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 8u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 8u);
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
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 168u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 172u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 176u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 180u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 184u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 188u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 192u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 196u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 200u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 204u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 208u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 212u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 216u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 220u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 224u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 228u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 232u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 236u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 240u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 244u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 248u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 252u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 268u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 284u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 300u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 316u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 332u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 348u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 364u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 380u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 396u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 412u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 428u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 444u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 460u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 476u);

  v2 = -21;
  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
    return v2;
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&unk_2119B98), 4);
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&unk_2119B58), 4);
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&unk_2119B5C), 4);
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&unk_2119B60), 4);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&unk_2119B64), 4);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&unk_2119B68), 4);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&unk_2119B6C), 4);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&unk_2119B70), 4);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&unk_2119B74), 4);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&unk_2119B78), 4);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&unk_2119B7C), 4);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&unk_2119B84), 4);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&unk_2119B80), 4);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&unk_2119B88), 4);
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) == 0 )
    return gaia::GaiaRequest::GetResponseCode(a2);
  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) == 0 )
  {
    GlobalDeviceIDStatus = gaia::Gaia_GlobalDeviceID::GetGlobalDeviceIDStatus(self);
    v2 = GlobalDeviceIDStatus;
    if ( GlobalDeviceIDStatus != 0 )
    {
      gaia::GaiaRequest::SetResponseCode(a2, GlobalDeviceIDStatus);
    }
    else
    {
      v51 = &dword_213B814;
      v52 = &dword_213B814;
      v53 = &dword_213B814;
      v54 = &dword_213B814;
      v55 = &dword_213B814;
      v56 = &dword_213B814;
      v57 = &dword_213B814;
      v58 = &dword_213B814;
      v59 = &dword_213B814;
      v60 = &dword_213B814;
      v61 = &dword_213B814;
      v62 = &dword_213B814;
      v63 = &dword_213B814;
      v64 = &dword_213B814;
      v65 = &dword_213B814;
      v4 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B98);
      if ( !Json::Value::isNull(v4) )
      {
        g4_std::string::construct_copy(v66, &unk_2119B98);
        gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v94);
        Json::Value::asString((Json::Value::Self *)v67, (int)(uintptr_t)(v94));
        g4_std::string::assign_str(&v51, v67);
        g4_std::string::Destroy(v67);
        Json::Value::Destroy((Json::Value::Self *)v94);
        g4_std::string::Destroy(v66);
      }
      v5 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B58);
      if ( !Json::Value::isNull(v5) )
      {
        g4_std::string::construct_copy(v68, &unk_2119B58);
        gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v95);
        Json::Value::asString((Json::Value::Self *)v69, (int)(uintptr_t)(v95));
        g4_std::string::assign_str(&v52, v69);
        g4_std::string::Destroy(v69);
        Json::Value::Destroy((Json::Value::Self *)v95);
        g4_std::string::Destroy(v68);
      }
      v6 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B5C);
      if ( !Json::Value::isNull(v6) )
      {
        g4_std::string::construct_copy(v70, &unk_2119B5C);
        gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v96);
        Json::Value::asString((Json::Value::Self *)v71, (int)(uintptr_t)(v96));
        g4_std::string::assign_str(&v53, v71);
        g4_std::string::Destroy(v71);
        Json::Value::Destroy((Json::Value::Self *)v96);
        g4_std::string::Destroy(v70);
      }
      v7 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B64);
      if ( !Json::Value::isNull(v7) )
      {
        g4_std::string::construct_copy(v72, &unk_2119B64);
        gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v97);
        Json::Value::asString((Json::Value::Self *)v73, (int)(uintptr_t)(v97));
        g4_std::string::assign_str(&v54, v73);
        g4_std::string::Destroy(v73);
        Json::Value::Destroy((Json::Value::Self *)v97);
        g4_std::string::Destroy(v72);
      }
      v8 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B68);
      if ( !Json::Value::isNull(v8) )
      {
        g4_std::string::construct_copy(v74, &unk_2119B68);
        gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v98);
        Json::Value::asString((Json::Value::Self *)v75, (int)(uintptr_t)(v98));
        g4_std::string::assign_str(&v55, v75);
        g4_std::string::Destroy(v75);
        Json::Value::Destroy((Json::Value::Self *)v98);
        g4_std::string::Destroy(v74);
      }
      v9 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B6C);
      if ( !Json::Value::isNull(v9) )
      {
        g4_std::string::construct_copy(v76, &unk_2119B6C);
        gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v99);
        Json::Value::asString((Json::Value::Self *)v77, (int)(uintptr_t)(v99));
        g4_std::string::assign_str(&v56, v77);
        g4_std::string::Destroy(v77);
        Json::Value::Destroy((Json::Value::Self *)v99);
        g4_std::string::Destroy(v76);
      }
      v10 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B70);
      if ( !Json::Value::isNull(v10) )
      {
        g4_std::string::construct_copy(v78, &unk_2119B70);
        gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v100);
        Json::Value::asString((Json::Value::Self *)v79, (int)(uintptr_t)(v100));
        g4_std::string::assign_str(&v57, v79);
        g4_std::string::Destroy(v79);
        Json::Value::Destroy((Json::Value::Self *)v100);
        g4_std::string::Destroy(v78);
      }
      v11 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B74);
      if ( !Json::Value::isNull(v11) )
      {
        g4_std::string::construct_copy(v80, &unk_2119B74);
        gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v101);
        Json::Value::asString((Json::Value::Self *)v81, (int)(uintptr_t)(v101));
        g4_std::string::assign_str(&v57, v81);
        g4_std::string::Destroy(v81);
        Json::Value::Destroy((Json::Value::Self *)v101);
        g4_std::string::Destroy(v80);
      }
      v12 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B7C);
      if ( !Json::Value::isNull(v12) )
      {
        g4_std::string::construct_copy(v82, &unk_2119B7C);
        gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v102);
        Json::Value::asString((Json::Value::Self *)v83, (int)(uintptr_t)(v102));
        g4_std::string::assign_str(&v59, v83);
        g4_std::string::Destroy(v83);
        Json::Value::Destroy((Json::Value::Self *)v102);
        g4_std::string::Destroy(v82);
      }
      v13 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B80);
      if ( !Json::Value::isNull(v13) )
      {
        g4_std::string::construct_copy(v84, &unk_2119B80);
        gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v103);
        Json::Value::asString((Json::Value::Self *)v85, (int)(uintptr_t)(v103));
        g4_std::string::assign_str(&v60, v85);
        g4_std::string::Destroy(v85);
        Json::Value::Destroy((Json::Value::Self *)v103);
        g4_std::string::Destroy(v84);
      }
      v14 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B84);
      if ( !Json::Value::isNull(v14) )
      {
        g4_std::string::construct_copy(v86, &unk_2119B84);
        gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v104);
        Json::Value::asString((Json::Value::Self *)v87, (int)(uintptr_t)(v104));
        g4_std::string::assign_str(&v61, v87);
        g4_std::string::Destroy(v87);
        Json::Value::Destroy((Json::Value::Self *)v104);
        g4_std::string::Destroy(v86);
      }
      v15 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B78);
      if ( !Json::Value::isNull(v15) )
      {
        g4_std::string::construct_copy(v88, &unk_2119B78);
        gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v105);
        Json::Value::asString((Json::Value::Self *)v89, (int)(uintptr_t)(v105));
        g4_std::string::assign_str(&v62, v89);
        g4_std::string::Destroy(v89);
        Json::Value::Destroy((Json::Value::Self *)v105);
        g4_std::string::Destroy(v88);
      }
      v16 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B88);
      if ( !Json::Value::isNull(v16) )
      {
        g4_std::string::construct_copy(v90, &unk_2119B88);
        gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v106);
        Json::Value::asString((Json::Value::Self *)v91, (int)(uintptr_t)(v106));
        g4_std::string::assign_str(&v63, v91);
        g4_std::string::Destroy(v91);
        Json::Value::Destroy((Json::Value::Self *)v106);
        g4_std::string::Destroy(v90);
      }
      v17 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B60);
      if ( !Json::Value::isNull(v17) )
      {
        g4_std::string::construct_copy(v92, &unk_2119B60);
        gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v107);
        Json::Value::asString((Json::Value::Self *)v93, (int)(uintptr_t)(v107));
        g4_std::string::assign_str(&v65, v93);
        g4_std::string::Destroy(v93);
        Json::Value::Destroy((Json::Value::Self *)v107);
        g4_std::string::Destroy(v92);
      }
      v18 = *((uint32_t *)self + 2);
      if ( v18 == 0 )
      {
        __assert2(
          "../../../../../lib/glitch/include/boost/smart_ptr/scoped_ptr.hpp",
          99,
          "T* boost::scoped_ptr<T>::operator->() const [with T = gaia::GlobalDeviceID]",
          "px != 0");
        v18 = *((uint32_t *)self + 2);
      }
      updated = (Json::Value::Self *)gaia::GlobalDeviceID::UpdateDeviceId(
                                 v18,
                                 (int)(uintptr_t)&v64,
                                 (char **)&v65,
                                 (char **)&v51,
                                 (char **)&v52,
                                 (char **)&v53,
                                 (char **)&v54,
                                 (char **)&v55,
                                 (char **)&v56,
                                 (char **)&v62,
                                 (char **)&v59,
                                 (char **)&v60,
                                 (char **)&v61,
                                 (char **)&v57,
                                 (char **)&v58,
                                 (char **)&v63,
                                 a2);
      gaia::GaiaRequest::SetResponseCode(a2, (int)(uintptr_t)(updated));
      gaia::GaiaRequest::SetResponse(a2, &v64);
      v19 = updated;
      v20 = v65 - 3;
      if ( v65 - 3 != dword_213B808 && __sync_fetch_and_add(v65 - 1, 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v20);
        v19 = updated;
      }
      v21 = v64 - 3;
      if ( v64 - 3 != dword_213B808 && __sync_fetch_and_add(v64 - 1, 0xFFFFFFFF) <= 0 )
      {
        v49 = v19;
        g4_std::string::Rep::M_destroy(v21);
        v19 = v49;
      }
      v22 = v63 - 3;
      if ( v63 - 3 != dword_213B808 && __sync_fetch_and_add(v63 - 1, 0xFFFFFFFF) <= 0 )
      {
        v50 = v19;
        g4_std::string::Rep::M_destroy(v22);
        v19 = v50;
      }
      v23 = v62 - 3;
      if ( v62 - 3 != dword_213B808 && __sync_fetch_and_add(v62 - 1, 0xFFFFFFFF) <= 0 )
      {
        v45 = v19;
        g4_std::string::Rep::M_destroy(v23);
        v19 = v45;
      }
      v24 = v61 - 3;
      if ( v61 - 3 != dword_213B808 && __sync_fetch_and_add(v61 - 1, 0xFFFFFFFF) <= 0 )
      {
        v46 = v19;
        g4_std::string::Rep::M_destroy(v24);
        v19 = v46;
      }
      v25 = v60 - 3;
      if ( v60 - 3 != dword_213B808 && __sync_fetch_and_add(v60 - 1, 0xFFFFFFFF) <= 0 )
      {
        v47 = v19;
        g4_std::string::Rep::M_destroy(v25);
        v19 = v47;
      }
      v26 = v59 - 3;
      if ( v59 - 3 != dword_213B808 && __sync_fetch_and_add(v59 - 1, 0xFFFFFFFF) <= 0 )
      {
        v48 = v19;
        g4_std::string::Rep::M_destroy(v26);
        v19 = v48;
      }
      v27 = v58 - 3;
      if ( v58 - 3 != dword_213B808 && __sync_fetch_and_add(v58 - 1, 0xFFFFFFFF) <= 0 )
      {
        v38 = v19;
        g4_std::string::Rep::M_destroy(v27);
        v19 = v38;
      }
      v28 = v57 - 3;
      if ( v57 - 3 != dword_213B808 && __sync_fetch_and_add(v57 - 1, 0xFFFFFFFF) <= 0 )
      {
        v39 = v19;
        g4_std::string::Rep::M_destroy(v28);
        v19 = v39;
      }
      v29 = v56 - 3;
      if ( v56 - 3 != dword_213B808 && __sync_fetch_and_add(v56 - 1, 0xFFFFFFFF) <= 0 )
      {
        v40 = v19;
        g4_std::string::Rep::M_destroy(v29);
        v19 = v40;
      }
      v30 = v55 - 3;
      if ( v55 - 3 != dword_213B808 && __sync_fetch_and_add(v55 - 1, 0xFFFFFFFF) <= 0 )
      {
        v41 = v19;
        g4_std::string::Rep::M_destroy(v30);
        v19 = v41;
      }
      v31 = v54 - 3;
      if ( v54 - 3 != dword_213B808 && __sync_fetch_and_add(v54 - 1, 0xFFFFFFFF) <= 0 )
      {
        v42 = v19;
        g4_std::string::Rep::M_destroy(v31);
        v19 = v42;
      }
      v32 = v53 - 3;
      if ( v53 - 3 != dword_213B808 && __sync_fetch_and_add(v53 - 1, 0xFFFFFFFF) <= 0 )
      {
        v43 = v19;
        g4_std::string::Rep::M_destroy(v32);
        v19 = v43;
      }
      v33 = v52 - 3;
      if ( v52 - 3 != dword_213B808 && __sync_fetch_and_add(v52 - 1, 0xFFFFFFFF) <= 0 )
      {
        v44 = v19;
        g4_std::string::Rep::M_destroy(v33);
        v19 = v44;
      }
      v34 = v51 - 3;
      if ( v51 - 3 == dword_213B808 )
      {
        return (int)(uintptr_t)(v19);
      }
      else
      {
        v2 = (int)(uintptr_t)(v19);
        if ( __sync_fetch_and_add(v51 - 1, 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v34);
      }
    }
    return v2;
  }
  gaia::GaiaRequest::SetOperationCode(a2, 8002);
  gaia::Gaia::GetInstance();
  gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v108, a2);
  started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v108);
  gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v108);
  return started;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_GlobalDeviceID::Initialize  (binary VA: 0x1448bb0)
// Original: gaia::Gaia_GlobalDeviceID::Initialize
// ----------------------------------------------------------------------------
int gaia::Gaia_GlobalDeviceID::Initialize(gaia::BaseServiceManager::Self **a1, int a2)
{
  int Instance;
  int CachedUrlFromEve;
  void *v4;
  void *v5;
  gaia::BaseServiceManager::Self *v7;
  gaia::BaseServiceManager::Self *v8;
  typedef gaia::BaseServiceManager::Self *_g4_t_v9;
  typedef uint8_t _g4_t_v10[7];
  typedef int _g4_t_v11[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (21u + sizeof(_g4_t_v10)) > _g4_s1 ? (21u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v11)) > _g4_s2 ? (28u + sizeof(_g4_t_v11)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 21u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)a1);
  g4_std::string::assign_str(a1 + 3, a2);
  *(uint32_t *)&v10[3] = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v11), "gdid", (int)(uintptr_t)(v10));
  Instance = gaia::Gaia::GetInstance();
  CachedUrlFromEve = gaia::Gaia_Pandora::GetCachedUrlFromEve(*(uint32_t *)(Instance + 556), (int)(uintptr_t)(v11), (int)(uintptr_t)(&v10[3]));
  v4 = (void *)(v11[0] - 12);
  if ( (uint32_t *)(v11[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v11[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  if ( CachedUrlFromEve == 0 )
  {
    v9 = (gaia::BaseServiceManager::Self *)opNew(0xA0u);
    gaia::GlobalDeviceID::Construct(v9, (int)(uintptr_t)(&v10[3]), (int)(uintptr_t)(a1 + 3));
    v7 = v9;
    v8 = a1[2];
    if ( v9 != nullptr && v9 == v8 )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/scoped_ptr.hpp",
        87,
        "void boost::scoped_ptr<T>::reset(T*) [with T = gaia::GlobalDeviceID]",
        "p == 0 || p != px");
      v8 = a1[2];
      v7 = v9;
    }
    a1[2] = v7;
    if ( v8 != nullptr )
      G4_VCALL<void>(v8, 16);
    *((uint8_t *)a1 + 16) = 1;
  }
  v5 = (void *)(*(uint32_t *)&v10[3] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v10[3] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v10[3] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)a1);
  return CachedUrlFromEve;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_GlobalDeviceID::GetGlobalId  (binary VA: 0x1455090)
// Original: gaia::Gaia_GlobalDeviceID::GetGlobalId
// ----------------------------------------------------------------------------
int gaia::Gaia_GlobalDeviceID::GetGlobalId(gaia::Gaia_GlobalDeviceID::Self *self, gaia::GaiaRequest::Self *a2)
{
  int v2;
  gaia::GaiaRequest::Self *v3;
  unsigned int GlobalDeviceIDStatus;
  Json::Value::Self *v5;
  Json::Value::Self *v6;
  Json::Value::Self *v7;
  Json::Value::Self *v8;
  Json::Value::Self *v9;
  Json::Value::Self *v10;
  Json::Value::Self *v11;
  Json::Value::Self *v12;
  Json::Value::Self *v13;
  Json::Value::Self *v14;
  Json::Value::Self *v15;
  Json::Value::Self *v16;
  Json::Value::Self *v17;
  int v18;
  uint32_t *v19;
  char *v20;
  uint32_t *v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;
  uint32_t *v27;
  uint32_t *v28;
  uint32_t *v29;
  uint32_t *v30;
  uint32_t *v31;
  uint32_t *v32;
  uint32_t *v33;
  int started;
  gaia::BaseJSONServiceResponse::Self *v36;
  gaia::BaseJSONServiceResponse::Self *v37;
  gaia::BaseJSONServiceResponse::Self *v38;
  Json::Value::Self *JSONMessage;
  typedef Json::Value::Self *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_GlobalId;
  typedef int _g4_t_v43[3];
  typedef uint32_t *_g4_t_v44;
  typedef uint32_t *_g4_t_v45;
  typedef uint32_t *_g4_t_v46;
  typedef uint32_t *_g4_t_v47;
  typedef uint32_t *_g4_t_v48;
  typedef uint32_t *_g4_t_v49;
  typedef uint32_t *_g4_t_v50;
  typedef uint32_t *_g4_t_v51;
  typedef uint32_t *_g4_t_v52;
  typedef uint32_t *_g4_t_v53;
  typedef uint32_t *_g4_t_v54;
  typedef uint32_t *_g4_t_v55;
  typedef uint32_t *_g4_t_v56;
  typedef char _g4_t_v57[4];
  typedef char _g4_t_v58[4];
  typedef char _g4_t_v59[4];
  typedef char _g4_t_v60[4];
  typedef char _g4_t_v61[4];
  typedef char _g4_t_v62[4];
  typedef char _g4_t_v63[4];
  typedef char _g4_t_v64[4];
  typedef char _g4_t_v65[4];
  typedef char _g4_t_v66[4];
  typedef char _g4_t_v67[4];
  typedef char _g4_t_v68[4];
  typedef char _g4_t_v69[4];
  typedef char _g4_t_v70[4];
  typedef char _g4_t_v71[4];
  typedef char _g4_t_v72[4];
  typedef char _g4_t_v73[4];
  typedef char _g4_t_v74[4];
  typedef char _g4_t_v75[4];
  typedef char _g4_t_v76[4];
  typedef char _g4_t_v77[4];
  typedef char _g4_t_v78[4];
  typedef char _g4_t_v79[4];
  typedef char _g4_t_v80[4];
  typedef char _g4_t_v81[4];
  typedef char _g4_t_v82[4];
  typedef char *_g4_t_v83;
  typedef uint32_t *_g4_t_v84;
  typedef uint32_t *_g4_t_v85;
  typedef const void *_g4_t_v86;
  typedef char _g4_t_v87[4];
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v88;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v89;
  typedef int _g4_t_v90;
  typedef uint8_t _g4_t_v91[16];
  typedef uint8_t _g4_t_v92[16];
  typedef uint8_t _g4_t_v93[16];
  typedef uint8_t _g4_t_v94[16];
  typedef uint8_t _g4_t_v95[16];
  typedef uint8_t _g4_t_v96[16];
  typedef uint8_t _g4_t_v97[16];
  typedef uint8_t _g4_t_v98[16];
  typedef uint8_t _g4_t_v99[16];
  typedef uint8_t _g4_t_v100[16];
  typedef uint8_t _g4_t_v101[16];
  typedef uint8_t _g4_t_v102[16];
  typedef uint8_t _g4_t_v103[16];
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef void *_g4_t_v106;
  typedef int *_g4_t_v107;
  typedef int *_g4_t_v108;
  typedef int _g4_t_v109;
  typedef uint8_t _g4_t_v110[96];
  enum : size_t {
    _g4_s0 = 752u,
    _g4_s1 = (0u + sizeof(_g4_t_v40)) > _g4_s0 ? (0u + sizeof(_g4_t_v40)) : _g4_s0,
    _g4_s2 = (92u + sizeof(_g4_t_v41)) > _g4_s1 ? (92u + sizeof(_g4_t_v41)) : _g4_s1,
    _g4_s3 = (92u + sizeof(_g4_t_GlobalId)) > _g4_s2 ? (92u + sizeof(_g4_t_GlobalId)) : _g4_s2,
    _g4_s4 = (140u + sizeof(_g4_t_v43)) > _g4_s3 ? (140u + sizeof(_g4_t_v43)) : _g4_s3,
    _g4_s5 = (168u + sizeof(_g4_t_v44)) > _g4_s4 ? (168u + sizeof(_g4_t_v44)) : _g4_s4,
    _g4_s6 = (172u + sizeof(_g4_t_v45)) > _g4_s5 ? (172u + sizeof(_g4_t_v45)) : _g4_s5,
    _g4_s7 = (176u + sizeof(_g4_t_v46)) > _g4_s6 ? (176u + sizeof(_g4_t_v46)) : _g4_s6,
    _g4_s8 = (180u + sizeof(_g4_t_v47)) > _g4_s7 ? (180u + sizeof(_g4_t_v47)) : _g4_s7,
    _g4_s9 = (184u + sizeof(_g4_t_v48)) > _g4_s8 ? (184u + sizeof(_g4_t_v48)) : _g4_s8,
    _g4_s10 = (188u + sizeof(_g4_t_v49)) > _g4_s9 ? (188u + sizeof(_g4_t_v49)) : _g4_s9,
    _g4_s11 = (192u + sizeof(_g4_t_v50)) > _g4_s10 ? (192u + sizeof(_g4_t_v50)) : _g4_s10,
    _g4_s12 = (196u + sizeof(_g4_t_v51)) > _g4_s11 ? (196u + sizeof(_g4_t_v51)) : _g4_s11,
    _g4_s13 = (200u + sizeof(_g4_t_v52)) > _g4_s12 ? (200u + sizeof(_g4_t_v52)) : _g4_s12,
    _g4_s14 = (204u + sizeof(_g4_t_v53)) > _g4_s13 ? (204u + sizeof(_g4_t_v53)) : _g4_s13,
    _g4_s15 = (208u + sizeof(_g4_t_v54)) > _g4_s14 ? (208u + sizeof(_g4_t_v54)) : _g4_s14,
    _g4_s16 = (212u + sizeof(_g4_t_v55)) > _g4_s15 ? (212u + sizeof(_g4_t_v55)) : _g4_s15,
    _g4_s17 = (216u + sizeof(_g4_t_v56)) > _g4_s16 ? (216u + sizeof(_g4_t_v56)) : _g4_s16,
    _g4_s18 = (220u + sizeof(_g4_t_v57)) > _g4_s17 ? (220u + sizeof(_g4_t_v57)) : _g4_s17,
    _g4_s19 = (224u + sizeof(_g4_t_v58)) > _g4_s18 ? (224u + sizeof(_g4_t_v58)) : _g4_s18,
    _g4_s20 = (228u + sizeof(_g4_t_v59)) > _g4_s19 ? (228u + sizeof(_g4_t_v59)) : _g4_s19,
    _g4_s21 = (232u + sizeof(_g4_t_v60)) > _g4_s20 ? (232u + sizeof(_g4_t_v60)) : _g4_s20,
    _g4_s22 = (236u + sizeof(_g4_t_v61)) > _g4_s21 ? (236u + sizeof(_g4_t_v61)) : _g4_s21,
    _g4_s23 = (240u + sizeof(_g4_t_v62)) > _g4_s22 ? (240u + sizeof(_g4_t_v62)) : _g4_s22,
    _g4_s24 = (244u + sizeof(_g4_t_v63)) > _g4_s23 ? (244u + sizeof(_g4_t_v63)) : _g4_s23,
    _g4_s25 = (248u + sizeof(_g4_t_v64)) > _g4_s24 ? (248u + sizeof(_g4_t_v64)) : _g4_s24,
    _g4_s26 = (252u + sizeof(_g4_t_v65)) > _g4_s25 ? (252u + sizeof(_g4_t_v65)) : _g4_s25,
    _g4_s27 = (256u + sizeof(_g4_t_v66)) > _g4_s26 ? (256u + sizeof(_g4_t_v66)) : _g4_s26,
    _g4_s28 = (260u + sizeof(_g4_t_v67)) > _g4_s27 ? (260u + sizeof(_g4_t_v67)) : _g4_s27,
    _g4_s29 = (264u + sizeof(_g4_t_v68)) > _g4_s28 ? (264u + sizeof(_g4_t_v68)) : _g4_s28,
    _g4_s30 = (268u + sizeof(_g4_t_v69)) > _g4_s29 ? (268u + sizeof(_g4_t_v69)) : _g4_s29,
    _g4_s31 = (272u + sizeof(_g4_t_v70)) > _g4_s30 ? (272u + sizeof(_g4_t_v70)) : _g4_s30,
    _g4_s32 = (276u + sizeof(_g4_t_v71)) > _g4_s31 ? (276u + sizeof(_g4_t_v71)) : _g4_s31,
    _g4_s33 = (280u + sizeof(_g4_t_v72)) > _g4_s32 ? (280u + sizeof(_g4_t_v72)) : _g4_s32,
    _g4_s34 = (284u + sizeof(_g4_t_v73)) > _g4_s33 ? (284u + sizeof(_g4_t_v73)) : _g4_s33,
    _g4_s35 = (288u + sizeof(_g4_t_v74)) > _g4_s34 ? (288u + sizeof(_g4_t_v74)) : _g4_s34,
    _g4_s36 = (292u + sizeof(_g4_t_v75)) > _g4_s35 ? (292u + sizeof(_g4_t_v75)) : _g4_s35,
    _g4_s37 = (296u + sizeof(_g4_t_v76)) > _g4_s36 ? (296u + sizeof(_g4_t_v76)) : _g4_s36,
    _g4_s38 = (300u + sizeof(_g4_t_v77)) > _g4_s37 ? (300u + sizeof(_g4_t_v77)) : _g4_s37,
    _g4_s39 = (304u + sizeof(_g4_t_v78)) > _g4_s38 ? (304u + sizeof(_g4_t_v78)) : _g4_s38,
    _g4_s40 = (308u + sizeof(_g4_t_v79)) > _g4_s39 ? (308u + sizeof(_g4_t_v79)) : _g4_s39,
    _g4_s41 = (312u + sizeof(_g4_t_v80)) > _g4_s40 ? (312u + sizeof(_g4_t_v80)) : _g4_s40,
    _g4_s42 = (316u + sizeof(_g4_t_v81)) > _g4_s41 ? (316u + sizeof(_g4_t_v81)) : _g4_s41,
    _g4_s43 = (320u + sizeof(_g4_t_v82)) > _g4_s42 ? (320u + sizeof(_g4_t_v82)) : _g4_s42,
    _g4_s44 = (324u + sizeof(_g4_t_v83)) > _g4_s43 ? (324u + sizeof(_g4_t_v83)) : _g4_s43,
    _g4_s45 = (328u + sizeof(_g4_t_v84)) > _g4_s44 ? (328u + sizeof(_g4_t_v84)) : _g4_s44,
    _g4_s46 = (332u + sizeof(_g4_t_v85)) > _g4_s45 ? (332u + sizeof(_g4_t_v85)) : _g4_s45,
    _g4_s47 = (336u + sizeof(_g4_t_v86)) > _g4_s46 ? (336u + sizeof(_g4_t_v86)) : _g4_s46,
    _g4_s48 = (340u + sizeof(_g4_t_v87)) > _g4_s47 ? (340u + sizeof(_g4_t_v87)) : _g4_s47,
    _g4_s49 = (344u + sizeof(_g4_t_v88)) > _g4_s48 ? (344u + sizeof(_g4_t_v88)) : _g4_s48,
    _g4_s50 = (348u + sizeof(_g4_t_v89)) > _g4_s49 ? (348u + sizeof(_g4_t_v89)) : _g4_s49,
    _g4_s51 = (352u + sizeof(_g4_t_v90)) > _g4_s50 ? (352u + sizeof(_g4_t_v90)) : _g4_s50,
    _g4_s52 = (356u + sizeof(_g4_t_v91)) > _g4_s51 ? (356u + sizeof(_g4_t_v91)) : _g4_s51,
    _g4_s53 = (372u + sizeof(_g4_t_v92)) > _g4_s52 ? (372u + sizeof(_g4_t_v92)) : _g4_s52,
    _g4_s54 = (388u + sizeof(_g4_t_v93)) > _g4_s53 ? (388u + sizeof(_g4_t_v93)) : _g4_s53,
    _g4_s55 = (404u + sizeof(_g4_t_v94)) > _g4_s54 ? (404u + sizeof(_g4_t_v94)) : _g4_s54,
    _g4_s56 = (420u + sizeof(_g4_t_v95)) > _g4_s55 ? (420u + sizeof(_g4_t_v95)) : _g4_s55,
    _g4_s57 = (436u + sizeof(_g4_t_v96)) > _g4_s56 ? (436u + sizeof(_g4_t_v96)) : _g4_s56,
    _g4_s58 = (452u + sizeof(_g4_t_v97)) > _g4_s57 ? (452u + sizeof(_g4_t_v97)) : _g4_s57,
    _g4_s59 = (468u + sizeof(_g4_t_v98)) > _g4_s58 ? (468u + sizeof(_g4_t_v98)) : _g4_s58,
    _g4_s60 = (484u + sizeof(_g4_t_v99)) > _g4_s59 ? (484u + sizeof(_g4_t_v99)) : _g4_s59,
    _g4_s61 = (500u + sizeof(_g4_t_v100)) > _g4_s60 ? (500u + sizeof(_g4_t_v100)) : _g4_s60,
    _g4_s62 = (516u + sizeof(_g4_t_v101)) > _g4_s61 ? (516u + sizeof(_g4_t_v101)) : _g4_s61,
    _g4_s63 = (532u + sizeof(_g4_t_v102)) > _g4_s62 ? (532u + sizeof(_g4_t_v102)) : _g4_s62,
    _g4_s64 = (548u + sizeof(_g4_t_v103)) > _g4_s63 ? (548u + sizeof(_g4_t_v103)) : _g4_s63,
    _g4_s65 = (564u + sizeof(_g4_t_v104)) > _g4_s64 ? (564u + sizeof(_g4_t_v104)) : _g4_s64,
    _g4_s66 = (568u + sizeof(_g4_t_v105)) > _g4_s65 ? (568u + sizeof(_g4_t_v105)) : _g4_s65,
    _g4_s67 = (572u + sizeof(_g4_t_v106)) > _g4_s66 ? (572u + sizeof(_g4_t_v106)) : _g4_s66,
    _g4_s68 = (576u + sizeof(_g4_t_v107)) > _g4_s67 ? (576u + sizeof(_g4_t_v107)) : _g4_s67,
    _g4_s69 = (580u + sizeof(_g4_t_v108)) > _g4_s68 ? (580u + sizeof(_g4_t_v108)) : _g4_s68,
    _g4_s70 = (584u + sizeof(_g4_t_v109)) > _g4_s69 ? (584u + sizeof(_g4_t_v109)) : _g4_s69,
    _g4_s71 = (588u + sizeof(_g4_t_v110)) > _g4_s70 ? (588u + sizeof(_g4_t_v110)) : _g4_s70
  };
  alignas(16) uint8_t _g4_sf[_g4_s71];
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 0u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 92u);
  _g4_t_GlobalId &GlobalId = *reinterpret_cast<_g4_t_GlobalId *>(_g4_sf + 92u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 140u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 168u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 172u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 176u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 180u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 184u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 188u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 192u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 196u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 200u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 204u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 208u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 212u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 216u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 220u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 224u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 228u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 232u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 236u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 240u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 244u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 248u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 252u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 256u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 260u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 264u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 268u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 272u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 276u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 280u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 284u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 288u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 292u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 296u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 300u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 304u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 308u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 312u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 316u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 320u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 324u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 328u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 332u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 336u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 340u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 344u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 348u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 352u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 356u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 372u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 388u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 404u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 420u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 436u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 452u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 468u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 484u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 500u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 516u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 532u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 548u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 564u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 568u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 572u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 576u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 580u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 584u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 588u);

  v2 = -21;
  v3 = a2;
  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
    return v2;
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&unk_2119B58), 4);
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&unk_2119B5C), 4);
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&unk_2119B60), 4);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&unk_2119B64), 4);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&unk_2119B68), 4);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&unk_2119B6C), 4);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&unk_2119B70), 4);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&unk_2119B74), 4);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&unk_2119B78), 4);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&unk_2119B7C), 4);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&unk_2119B84), 4);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&unk_2119B80), 4);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&unk_2119B88), 4);
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) == 0 )
    return gaia::GaiaRequest::GetResponseCode(a2);
  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) == 0 )
  {
    GlobalDeviceIDStatus = gaia::Gaia_GlobalDeviceID::GetGlobalDeviceIDStatus(self);
    v2 = GlobalDeviceIDStatus;
    if ( GlobalDeviceIDStatus == 0 )
    {
      v44 = &dword_213B814;
      v45 = &dword_213B814;
      v46 = &dword_213B814;
      v47 = &dword_213B814;
      v48 = &dword_213B814;
      v49 = &dword_213B814;
      v50 = &dword_213B814;
      v51 = &dword_213B814;
      v52 = &dword_213B814;
      v53 = &dword_213B814;
      v54 = &dword_213B814;
      v55 = &dword_213B814;
      v56 = &dword_213B814;
      v5 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B58);
      if ( !Json::Value::isNull(v5) )
      {
        g4_std::string::construct_copy(v57, &unk_2119B58);
        gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v91);
        Json::Value::asString((Json::Value::Self *)v58, (int)(uintptr_t)(v91));
        g4_std::string::assign_str(&v44, v58);
        g4_std::string::Destroy(v58);
        Json::Value::Destroy((Json::Value::Self *)v91);
        g4_std::string::Destroy(v57);
      }
      v6 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B5C);
      if ( !Json::Value::isNull(v6) )
      {
        g4_std::string::construct_copy(v59, &unk_2119B5C);
        gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v92);
        Json::Value::asString((Json::Value::Self *)v60, (int)(uintptr_t)(v92));
        g4_std::string::assign_str(&v45, v60);
        g4_std::string::Destroy(v60);
        Json::Value::Destroy((Json::Value::Self *)v92);
        g4_std::string::Destroy(v59);
      }
      v7 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B64);
      if ( !Json::Value::isNull(v7) )
      {
        g4_std::string::construct_copy(v61, &unk_2119B64);
        gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v93);
        Json::Value::asString((Json::Value::Self *)v62, (int)(uintptr_t)(v93));
        g4_std::string::assign_str(&v46, v62);
        g4_std::string::Destroy(v62);
        Json::Value::Destroy((Json::Value::Self *)v93);
        g4_std::string::Destroy(v61);
      }
      v8 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B68);
      if ( !Json::Value::isNull(v8) )
      {
        g4_std::string::construct_copy(v63, &unk_2119B68);
        gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v94);
        Json::Value::asString((Json::Value::Self *)v64, (int)(uintptr_t)(v94));
        g4_std::string::assign_str(&v47, v64);
        g4_std::string::Destroy(v64);
        Json::Value::Destroy((Json::Value::Self *)v94);
        g4_std::string::Destroy(v63);
      }
      v9 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B6C);
      if ( !Json::Value::isNull(v9) )
      {
        g4_std::string::construct_copy(v65, &unk_2119B6C);
        gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v95);
        Json::Value::asString((Json::Value::Self *)v66, (int)(uintptr_t)(v95));
        g4_std::string::assign_str(&v48, v66);
        g4_std::string::Destroy(v66);
        Json::Value::Destroy((Json::Value::Self *)v95);
        g4_std::string::Destroy(v65);
      }
      v10 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B70);
      if ( !Json::Value::isNull(v10) )
      {
        g4_std::string::construct_copy(v67, &unk_2119B70);
        gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v96);
        Json::Value::asString((Json::Value::Self *)v68, (int)(uintptr_t)(v96));
        g4_std::string::assign_str(&v49, v68);
        g4_std::string::Destroy(v68);
        Json::Value::Destroy((Json::Value::Self *)v96);
        g4_std::string::Destroy(v67);
      }
      v11 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B74);
      if ( !Json::Value::isNull(v11) )
      {
        g4_std::string::construct_copy(v69, &unk_2119B74);
        gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v97);
        Json::Value::asString((Json::Value::Self *)v70, (int)(uintptr_t)(v97));
        g4_std::string::assign_str(&v50, v70);
        g4_std::string::Destroy(v70);
        Json::Value::Destroy((Json::Value::Self *)v97);
        g4_std::string::Destroy(v69);
      }
      v12 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B7C);
      if ( !Json::Value::isNull(v12) )
      {
        g4_std::string::construct_copy(v71, &unk_2119B7C);
        gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v98);
        Json::Value::asString((Json::Value::Self *)v72, (int)(uintptr_t)(v98));
        g4_std::string::assign_str(&v51, v72);
        g4_std::string::Destroy(v72);
        Json::Value::Destroy((Json::Value::Self *)v98);
        g4_std::string::Destroy(v71);
      }
      v13 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B80);
      if ( !Json::Value::isNull(v13) )
      {
        g4_std::string::construct_copy(v73, &unk_2119B80);
        gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v99);
        Json::Value::asString((Json::Value::Self *)v74, (int)(uintptr_t)(v99));
        g4_std::string::assign_str(&v52, v74);
        g4_std::string::Destroy(v74);
        Json::Value::Destroy((Json::Value::Self *)v99);
        g4_std::string::Destroy(v73);
      }
      v14 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B84);
      if ( !Json::Value::isNull(v14) )
      {
        g4_std::string::construct_copy(v75, &unk_2119B84);
        gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v100);
        Json::Value::asString((Json::Value::Self *)v76, (int)(uintptr_t)(v100));
        g4_std::string::assign_str(&v53, v76);
        g4_std::string::Destroy(v76);
        Json::Value::Destroy((Json::Value::Self *)v100);
        g4_std::string::Destroy(v75);
      }
      v15 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B78);
      if ( !Json::Value::isNull(v15) )
      {
        g4_std::string::construct_copy(v77, &unk_2119B78);
        gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v101);
        Json::Value::asString((Json::Value::Self *)v78, (int)(uintptr_t)(v101));
        g4_std::string::assign_str(&v54, v78);
        g4_std::string::Destroy(v78);
        Json::Value::Destroy((Json::Value::Self *)v101);
        g4_std::string::Destroy(v77);
      }
      v16 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B88);
      if ( !Json::Value::isNull(v16) )
      {
        g4_std::string::construct_copy(v79, &unk_2119B88);
        gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v102);
        Json::Value::asString((Json::Value::Self *)v80, (int)(uintptr_t)(v102));
        g4_std::string::assign_str(&v55, v80);
        g4_std::string::Destroy(v80);
        Json::Value::Destroy((Json::Value::Self *)v102);
        g4_std::string::Destroy(v79);
      }
      v17 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B60);
      if ( !Json::Value::isNull(v17) )
      {
        g4_std::string::construct_copy(v81, &unk_2119B60);
        gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v103);
        Json::Value::asString((Json::Value::Self *)v82, (int)(uintptr_t)(v103));
        g4_std::string::assign_str(&v56, v82);
        g4_std::string::Destroy(v82);
        Json::Value::Destroy((Json::Value::Self *)v103);
        g4_std::string::Destroy(v81);
      }
      v107 = &v105;
      v108 = &v105;
      v83 = (char *)&dword_213B814;
      v84 = &dword_213B814;
      v85 = &dword_213B814;
      v105 = 0;
      v106 = nullptr;
      v109 = 0;
      g4_std::string::construct_copy(&v86, &unk_2119B8C);
      g4_std::string::construct_copy(v87, &v85);
      g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_insert_unique(
        v43,
        &v104,
        (int)(uintptr_t)(&v105),
        &v86);
      v41 = v43[0];
      g4_std::string::Destroy(v87);
      g4_std::string::Destroy(&v86);
      g4_std::string::Destroy(&v85);
      g4_std::string::assign_str(v41 + 20, &unk_2119B90);
      v18 = *((uint32_t *)self + 2);
      if ( v18 == 0 )
      {
        __assert2(
          "../../../../../lib/glitch/include/boost/smart_ptr/scoped_ptr.hpp",
          99,
          "T* boost::scoped_ptr<T>::operator->() const [with T = gaia::GlobalDeviceID]",
          "px != 0");
        v18 = *((uint32_t *)self + 2);
      }
      GlobalId = gaia::GlobalDeviceID::GetGlobalId(
                   v18,
                   (int)(uintptr_t)&v83,
                   (char **)&v56,
                   (char **)&v44,
                   (char **)&v45,
                   (char **)&v46,
                   (char **)&v47,
                   (char **)&v48,
                   (char **)&v54,
                   (char **)&v51,
                   (char **)&v52,
                   (char **)&v53,
                   (char **)&v49,
                   (char **)&v50,
                   (char **)&v55,
                   (int)(uintptr_t)&v104,
                   a2);
      if ( GlobalId != 0 )
        goto LABEL_34;
      v88 = nullptr;
      v89 = nullptr;
      v90 = 0;
      GlobalId = gaia::BaseServiceManager::ParseMessages(v83, *((uint32_t *)v83 - 3), (int)(uintptr_t)(&v88), 30);
      if ( GlobalId == 0 )
      {
        v36 = v89;
        v37 = v88;
        GlobalId = -24;
        if ( -858993459 * ((v89 - v88) >> 2) == 0 )
          goto LABEL_55;
        JSONMessage = (Json::Value::Self *)gaia::BaseJSONServiceResponse::GetJSONMessage(v88);
        GlobalId = sub_14428D0(JSONMessage, (int)(uintptr_t)(&v84));
      }
      v36 = v89;
      v37 = v88;
LABEL_55:
      if ( v36 != v37 )
      {
        v38 = v36;
        do
        {
          v40 = (Json::Value::Self *)(v37);
          v37 = (gaia::BaseJSONServiceResponse::Self *)((char *)v37 + 20);
          gaia::BaseJSONServiceResponse::Destroy(v40);
        }
        while ( v38 != v37 );
        v3 = a2;
        v37 = v88;
      }
      if ( v37 != nullptr )
        opDelete(v37);
LABEL_34:
      gaia::GaiaRequest::SetResponseCode(v3, GlobalId);
      gaia::GaiaRequest::SetResponse(v3, &v84);
      std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
        (int)(uintptr_t)(&v104),
        v106);
      v19 = v84 - 3;
      if ( v84 - 3 != dword_213B808 && __sync_fetch_and_add(v84 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v19);
      v20 = v83 - 12;
      if ( v83 - 12 != (char *)dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)v83 - 1, 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v20);
      }
      v21 = v56 - 3;
      if ( v56 - 3 != dword_213B808 && __sync_fetch_and_add(v56 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v21);
      v22 = v55 - 3;
      if ( v55 - 3 != dword_213B808 && __sync_fetch_and_add(v55 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v22);
      v23 = v54 - 3;
      if ( v54 - 3 != dword_213B808 && __sync_fetch_and_add(v54 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v23);
      v24 = v53 - 3;
      if ( v53 - 3 != dword_213B808 && __sync_fetch_and_add(v53 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v24);
      v25 = v52 - 3;
      if ( v52 - 3 != dword_213B808 && __sync_fetch_and_add(v52 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v25);
      v26 = v51 - 3;
      if ( v51 - 3 != dword_213B808 && __sync_fetch_and_add(v51 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v26);
      v27 = v50 - 3;
      if ( v50 - 3 != dword_213B808 && __sync_fetch_and_add(v50 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v27);
      v28 = v49 - 3;
      if ( v49 - 3 != dword_213B808 && __sync_fetch_and_add(v49 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v28);
      v29 = v48 - 3;
      if ( v48 - 3 != dword_213B808 && __sync_fetch_and_add(v48 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v29);
      v30 = v47 - 3;
      if ( v47 - 3 != dword_213B808 && __sync_fetch_and_add(v47 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v30);
      v31 = v46 - 3;
      if ( v46 - 3 != dword_213B808 && __sync_fetch_and_add(v46 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v31);
      v32 = v45 - 3;
      if ( v45 - 3 != dword_213B808 && __sync_fetch_and_add(v45 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v32);
      v33 = v44 - 3;
      if ( v44 - 3 == dword_213B808 )
        return GlobalId;
      v2 = GlobalId;
      if ( __sync_fetch_and_add(v44 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v33);
      return v2;
    }
    gaia::GaiaRequest::SetResponseCode(a2, GlobalDeviceIDStatus);
    return v2;
  }
  gaia::GaiaRequest::SetOperationCode(a2, 8004);
  gaia::Gaia::GetInstance();
  gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v110, a2);
  started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v110);
  gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v110);
  return started;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia_GlobalDeviceID::AssignGlobalId  (binary VA: 0x1456370)
// Original: gaia::Gaia_GlobalDeviceID::AssignGlobalId
// ----------------------------------------------------------------------------
int gaia::Gaia_GlobalDeviceID::AssignGlobalId(gaia::Gaia_GlobalDeviceID::Self *self, gaia::GaiaRequest::Self *a2)
{
  int v2;
  gaia::GaiaRequest::Self *v3;
  unsigned int GlobalDeviceIDStatus;
  Json::Value::Self *v5;
  Json::Value::Self *v6;
  Json::Value::Self *v7;
  Json::Value::Self *v8;
  Json::Value::Self *v9;
  Json::Value::Self *v10;
  Json::Value::Self *v11;
  Json::Value::Self *v12;
  Json::Value::Self *v13;
  Json::Value::Self *v14;
  Json::Value::Self *v15;
  Json::Value::Self *v16;
  Json::Value::Self *v17;
  int v18;
  uint32_t *v19;
  char *v20;
  uint32_t *v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;
  uint32_t *v27;
  uint32_t *v28;
  uint32_t *v29;
  uint32_t *v30;
  uint32_t *v31;
  uint32_t *v32;
  uint32_t *v33;
  int started;
  gaia::BaseJSONServiceResponse::Self *v36;
  gaia::BaseJSONServiceResponse::Self *v37;
  gaia::BaseJSONServiceResponse::Self *v38;
  Json::Value::Self *JSONMessage;
  typedef Json::Value::Self *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43[3];
  typedef uint32_t *_g4_t_v44;
  typedef uint32_t *_g4_t_v45;
  typedef uint32_t *_g4_t_v46;
  typedef uint32_t *_g4_t_v47;
  typedef uint32_t *_g4_t_v48;
  typedef uint32_t *_g4_t_v49;
  typedef uint32_t *_g4_t_v50;
  typedef uint32_t *_g4_t_v51;
  typedef uint32_t *_g4_t_v52;
  typedef uint32_t *_g4_t_v53;
  typedef uint32_t *_g4_t_v54;
  typedef uint32_t *_g4_t_v55;
  typedef uint32_t *_g4_t_v56;
  typedef char _g4_t_v57[4];
  typedef char _g4_t_v58[4];
  typedef char _g4_t_v59[4];
  typedef char _g4_t_v60[4];
  typedef char _g4_t_v61[4];
  typedef char _g4_t_v62[4];
  typedef char _g4_t_v63[4];
  typedef char _g4_t_v64[4];
  typedef char _g4_t_v65[4];
  typedef char _g4_t_v66[4];
  typedef char _g4_t_v67[4];
  typedef char _g4_t_v68[4];
  typedef char _g4_t_v69[4];
  typedef char _g4_t_v70[4];
  typedef char _g4_t_v71[4];
  typedef char _g4_t_v72[4];
  typedef char _g4_t_v73[4];
  typedef char _g4_t_v74[4];
  typedef char _g4_t_v75[4];
  typedef char _g4_t_v76[4];
  typedef char _g4_t_v77[4];
  typedef char _g4_t_v78[4];
  typedef char _g4_t_v79[4];
  typedef char _g4_t_v80[4];
  typedef char _g4_t_v81[4];
  typedef char _g4_t_v82[4];
  typedef char *_g4_t_v83;
  typedef uint32_t *_g4_t_v84;
  typedef uint32_t *_g4_t_v85;
  typedef const void *_g4_t_v86;
  typedef char _g4_t_v87[4];
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v88;
  typedef gaia::BaseJSONServiceResponse::Self *_g4_t_v89;
  typedef int _g4_t_v90;
  typedef uint8_t _g4_t_v91[16];
  typedef uint8_t _g4_t_v92[16];
  typedef uint8_t _g4_t_v93[16];
  typedef uint8_t _g4_t_v94[16];
  typedef uint8_t _g4_t_v95[16];
  typedef uint8_t _g4_t_v96[16];
  typedef uint8_t _g4_t_v97[16];
  typedef uint8_t _g4_t_v98[16];
  typedef uint8_t _g4_t_v99[16];
  typedef uint8_t _g4_t_v100[16];
  typedef uint8_t _g4_t_v101[16];
  typedef uint8_t _g4_t_v102[16];
  typedef uint8_t _g4_t_v103[16];
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef void *_g4_t_v106;
  typedef int *_g4_t_v107;
  typedef int *_g4_t_v108;
  typedef int _g4_t_v109;
  typedef uint8_t _g4_t_v110[96];
  enum : size_t {
    _g4_s0 = 752u,
    _g4_s1 = (0u + sizeof(_g4_t_v40)) > _g4_s0 ? (0u + sizeof(_g4_t_v40)) : _g4_s0,
    _g4_s2 = (92u + sizeof(_g4_t_v41)) > _g4_s1 ? (92u + sizeof(_g4_t_v41)) : _g4_s1,
    _g4_s3 = (92u + sizeof(_g4_t_v42)) > _g4_s2 ? (92u + sizeof(_g4_t_v42)) : _g4_s2,
    _g4_s4 = (140u + sizeof(_g4_t_v43)) > _g4_s3 ? (140u + sizeof(_g4_t_v43)) : _g4_s3,
    _g4_s5 = (168u + sizeof(_g4_t_v44)) > _g4_s4 ? (168u + sizeof(_g4_t_v44)) : _g4_s4,
    _g4_s6 = (172u + sizeof(_g4_t_v45)) > _g4_s5 ? (172u + sizeof(_g4_t_v45)) : _g4_s5,
    _g4_s7 = (176u + sizeof(_g4_t_v46)) > _g4_s6 ? (176u + sizeof(_g4_t_v46)) : _g4_s6,
    _g4_s8 = (180u + sizeof(_g4_t_v47)) > _g4_s7 ? (180u + sizeof(_g4_t_v47)) : _g4_s7,
    _g4_s9 = (184u + sizeof(_g4_t_v48)) > _g4_s8 ? (184u + sizeof(_g4_t_v48)) : _g4_s8,
    _g4_s10 = (188u + sizeof(_g4_t_v49)) > _g4_s9 ? (188u + sizeof(_g4_t_v49)) : _g4_s9,
    _g4_s11 = (192u + sizeof(_g4_t_v50)) > _g4_s10 ? (192u + sizeof(_g4_t_v50)) : _g4_s10,
    _g4_s12 = (196u + sizeof(_g4_t_v51)) > _g4_s11 ? (196u + sizeof(_g4_t_v51)) : _g4_s11,
    _g4_s13 = (200u + sizeof(_g4_t_v52)) > _g4_s12 ? (200u + sizeof(_g4_t_v52)) : _g4_s12,
    _g4_s14 = (204u + sizeof(_g4_t_v53)) > _g4_s13 ? (204u + sizeof(_g4_t_v53)) : _g4_s13,
    _g4_s15 = (208u + sizeof(_g4_t_v54)) > _g4_s14 ? (208u + sizeof(_g4_t_v54)) : _g4_s14,
    _g4_s16 = (212u + sizeof(_g4_t_v55)) > _g4_s15 ? (212u + sizeof(_g4_t_v55)) : _g4_s15,
    _g4_s17 = (216u + sizeof(_g4_t_v56)) > _g4_s16 ? (216u + sizeof(_g4_t_v56)) : _g4_s16,
    _g4_s18 = (220u + sizeof(_g4_t_v57)) > _g4_s17 ? (220u + sizeof(_g4_t_v57)) : _g4_s17,
    _g4_s19 = (224u + sizeof(_g4_t_v58)) > _g4_s18 ? (224u + sizeof(_g4_t_v58)) : _g4_s18,
    _g4_s20 = (228u + sizeof(_g4_t_v59)) > _g4_s19 ? (228u + sizeof(_g4_t_v59)) : _g4_s19,
    _g4_s21 = (232u + sizeof(_g4_t_v60)) > _g4_s20 ? (232u + sizeof(_g4_t_v60)) : _g4_s20,
    _g4_s22 = (236u + sizeof(_g4_t_v61)) > _g4_s21 ? (236u + sizeof(_g4_t_v61)) : _g4_s21,
    _g4_s23 = (240u + sizeof(_g4_t_v62)) > _g4_s22 ? (240u + sizeof(_g4_t_v62)) : _g4_s22,
    _g4_s24 = (244u + sizeof(_g4_t_v63)) > _g4_s23 ? (244u + sizeof(_g4_t_v63)) : _g4_s23,
    _g4_s25 = (248u + sizeof(_g4_t_v64)) > _g4_s24 ? (248u + sizeof(_g4_t_v64)) : _g4_s24,
    _g4_s26 = (252u + sizeof(_g4_t_v65)) > _g4_s25 ? (252u + sizeof(_g4_t_v65)) : _g4_s25,
    _g4_s27 = (256u + sizeof(_g4_t_v66)) > _g4_s26 ? (256u + sizeof(_g4_t_v66)) : _g4_s26,
    _g4_s28 = (260u + sizeof(_g4_t_v67)) > _g4_s27 ? (260u + sizeof(_g4_t_v67)) : _g4_s27,
    _g4_s29 = (264u + sizeof(_g4_t_v68)) > _g4_s28 ? (264u + sizeof(_g4_t_v68)) : _g4_s28,
    _g4_s30 = (268u + sizeof(_g4_t_v69)) > _g4_s29 ? (268u + sizeof(_g4_t_v69)) : _g4_s29,
    _g4_s31 = (272u + sizeof(_g4_t_v70)) > _g4_s30 ? (272u + sizeof(_g4_t_v70)) : _g4_s30,
    _g4_s32 = (276u + sizeof(_g4_t_v71)) > _g4_s31 ? (276u + sizeof(_g4_t_v71)) : _g4_s31,
    _g4_s33 = (280u + sizeof(_g4_t_v72)) > _g4_s32 ? (280u + sizeof(_g4_t_v72)) : _g4_s32,
    _g4_s34 = (284u + sizeof(_g4_t_v73)) > _g4_s33 ? (284u + sizeof(_g4_t_v73)) : _g4_s33,
    _g4_s35 = (288u + sizeof(_g4_t_v74)) > _g4_s34 ? (288u + sizeof(_g4_t_v74)) : _g4_s34,
    _g4_s36 = (292u + sizeof(_g4_t_v75)) > _g4_s35 ? (292u + sizeof(_g4_t_v75)) : _g4_s35,
    _g4_s37 = (296u + sizeof(_g4_t_v76)) > _g4_s36 ? (296u + sizeof(_g4_t_v76)) : _g4_s36,
    _g4_s38 = (300u + sizeof(_g4_t_v77)) > _g4_s37 ? (300u + sizeof(_g4_t_v77)) : _g4_s37,
    _g4_s39 = (304u + sizeof(_g4_t_v78)) > _g4_s38 ? (304u + sizeof(_g4_t_v78)) : _g4_s38,
    _g4_s40 = (308u + sizeof(_g4_t_v79)) > _g4_s39 ? (308u + sizeof(_g4_t_v79)) : _g4_s39,
    _g4_s41 = (312u + sizeof(_g4_t_v80)) > _g4_s40 ? (312u + sizeof(_g4_t_v80)) : _g4_s40,
    _g4_s42 = (316u + sizeof(_g4_t_v81)) > _g4_s41 ? (316u + sizeof(_g4_t_v81)) : _g4_s41,
    _g4_s43 = (320u + sizeof(_g4_t_v82)) > _g4_s42 ? (320u + sizeof(_g4_t_v82)) : _g4_s42,
    _g4_s44 = (324u + sizeof(_g4_t_v83)) > _g4_s43 ? (324u + sizeof(_g4_t_v83)) : _g4_s43,
    _g4_s45 = (328u + sizeof(_g4_t_v84)) > _g4_s44 ? (328u + sizeof(_g4_t_v84)) : _g4_s44,
    _g4_s46 = (332u + sizeof(_g4_t_v85)) > _g4_s45 ? (332u + sizeof(_g4_t_v85)) : _g4_s45,
    _g4_s47 = (336u + sizeof(_g4_t_v86)) > _g4_s46 ? (336u + sizeof(_g4_t_v86)) : _g4_s46,
    _g4_s48 = (340u + sizeof(_g4_t_v87)) > _g4_s47 ? (340u + sizeof(_g4_t_v87)) : _g4_s47,
    _g4_s49 = (344u + sizeof(_g4_t_v88)) > _g4_s48 ? (344u + sizeof(_g4_t_v88)) : _g4_s48,
    _g4_s50 = (348u + sizeof(_g4_t_v89)) > _g4_s49 ? (348u + sizeof(_g4_t_v89)) : _g4_s49,
    _g4_s51 = (352u + sizeof(_g4_t_v90)) > _g4_s50 ? (352u + sizeof(_g4_t_v90)) : _g4_s50,
    _g4_s52 = (356u + sizeof(_g4_t_v91)) > _g4_s51 ? (356u + sizeof(_g4_t_v91)) : _g4_s51,
    _g4_s53 = (372u + sizeof(_g4_t_v92)) > _g4_s52 ? (372u + sizeof(_g4_t_v92)) : _g4_s52,
    _g4_s54 = (388u + sizeof(_g4_t_v93)) > _g4_s53 ? (388u + sizeof(_g4_t_v93)) : _g4_s53,
    _g4_s55 = (404u + sizeof(_g4_t_v94)) > _g4_s54 ? (404u + sizeof(_g4_t_v94)) : _g4_s54,
    _g4_s56 = (420u + sizeof(_g4_t_v95)) > _g4_s55 ? (420u + sizeof(_g4_t_v95)) : _g4_s55,
    _g4_s57 = (436u + sizeof(_g4_t_v96)) > _g4_s56 ? (436u + sizeof(_g4_t_v96)) : _g4_s56,
    _g4_s58 = (452u + sizeof(_g4_t_v97)) > _g4_s57 ? (452u + sizeof(_g4_t_v97)) : _g4_s57,
    _g4_s59 = (468u + sizeof(_g4_t_v98)) > _g4_s58 ? (468u + sizeof(_g4_t_v98)) : _g4_s58,
    _g4_s60 = (484u + sizeof(_g4_t_v99)) > _g4_s59 ? (484u + sizeof(_g4_t_v99)) : _g4_s59,
    _g4_s61 = (500u + sizeof(_g4_t_v100)) > _g4_s60 ? (500u + sizeof(_g4_t_v100)) : _g4_s60,
    _g4_s62 = (516u + sizeof(_g4_t_v101)) > _g4_s61 ? (516u + sizeof(_g4_t_v101)) : _g4_s61,
    _g4_s63 = (532u + sizeof(_g4_t_v102)) > _g4_s62 ? (532u + sizeof(_g4_t_v102)) : _g4_s62,
    _g4_s64 = (548u + sizeof(_g4_t_v103)) > _g4_s63 ? (548u + sizeof(_g4_t_v103)) : _g4_s63,
    _g4_s65 = (564u + sizeof(_g4_t_v104)) > _g4_s64 ? (564u + sizeof(_g4_t_v104)) : _g4_s64,
    _g4_s66 = (568u + sizeof(_g4_t_v105)) > _g4_s65 ? (568u + sizeof(_g4_t_v105)) : _g4_s65,
    _g4_s67 = (572u + sizeof(_g4_t_v106)) > _g4_s66 ? (572u + sizeof(_g4_t_v106)) : _g4_s66,
    _g4_s68 = (576u + sizeof(_g4_t_v107)) > _g4_s67 ? (576u + sizeof(_g4_t_v107)) : _g4_s67,
    _g4_s69 = (580u + sizeof(_g4_t_v108)) > _g4_s68 ? (580u + sizeof(_g4_t_v108)) : _g4_s68,
    _g4_s70 = (584u + sizeof(_g4_t_v109)) > _g4_s69 ? (584u + sizeof(_g4_t_v109)) : _g4_s69,
    _g4_s71 = (588u + sizeof(_g4_t_v110)) > _g4_s70 ? (588u + sizeof(_g4_t_v110)) : _g4_s70
  };
  alignas(16) uint8_t _g4_sf[_g4_s71];
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 0u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 92u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 92u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 140u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 168u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 172u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 176u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 180u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 184u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 188u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 192u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 196u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 200u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 204u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 208u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 212u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 216u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 220u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 224u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 228u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 232u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 236u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 240u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 244u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 248u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 252u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 256u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 260u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 264u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 268u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 272u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 276u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 280u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 284u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 288u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 292u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 296u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 300u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 304u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 308u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 312u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 316u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 320u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 324u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 328u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 332u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 336u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 340u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 344u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 348u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 352u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 356u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 372u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 388u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 404u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 420u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 436u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 452u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 468u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 484u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 500u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 516u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 532u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 548u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 564u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 568u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 572u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 576u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 580u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 584u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 588u);

  v2 = -21;
  v3 = a2;
  gaia::Gaia::GetInstance();
  if ( (uint8_t)gaia::Gaia::IsInitialized() == 0 )
    return v2;
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&unk_2119B58), 4);
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&unk_2119B5C), 4);
  gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)(uintptr_t)(&unk_2119B60), 4);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&unk_2119B64), 4);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&unk_2119B68), 4);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&unk_2119B6C), 4);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&unk_2119B70), 4);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&unk_2119B74), 4);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&unk_2119B78), 4);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&unk_2119B7C), 4);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&unk_2119B80), 4);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&unk_2119B84), 4);
  gaia::GaiaRequest::ValidateOptionalParam(a2, (int)(uintptr_t)(&unk_2119B88), 4);
  if ( (uint8_t)gaia::GaiaRequest::isValid(a2) == 0 )
    return gaia::GaiaRequest::GetResponseCode(a2);
  if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) == 0 )
  {
    GlobalDeviceIDStatus = gaia::Gaia_GlobalDeviceID::GetGlobalDeviceIDStatus(self);
    v2 = GlobalDeviceIDStatus;
    if ( GlobalDeviceIDStatus == 0 )
    {
      v44 = &dword_213B814;
      v45 = &dword_213B814;
      v46 = &dword_213B814;
      v47 = &dword_213B814;
      v48 = &dword_213B814;
      v49 = &dword_213B814;
      v50 = &dword_213B814;
      v51 = &dword_213B814;
      v52 = &dword_213B814;
      v53 = &dword_213B814;
      v54 = &dword_213B814;
      v55 = &dword_213B814;
      v56 = &dword_213B814;
      v5 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B58);
      if ( !Json::Value::isNull(v5) )
      {
        g4_std::string::construct_copy(v57, &unk_2119B58);
        gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v91);
        Json::Value::asString((Json::Value::Self *)v58, (int)(uintptr_t)(v91));
        g4_std::string::assign_str(&v44, v58);
        g4_std::string::Destroy(v58);
        Json::Value::Destroy((Json::Value::Self *)v91);
        g4_std::string::Destroy(v57);
      }
      v6 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B5C);
      if ( !Json::Value::isNull(v6) )
      {
        g4_std::string::construct_copy(v59, &unk_2119B5C);
        gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v92);
        Json::Value::asString((Json::Value::Self *)v60, (int)(uintptr_t)(v92));
        g4_std::string::assign_str(&v45, v60);
        g4_std::string::Destroy(v60);
        Json::Value::Destroy((Json::Value::Self *)v92);
        g4_std::string::Destroy(v59);
      }
      v7 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B64);
      if ( !Json::Value::isNull(v7) )
      {
        g4_std::string::construct_copy(v61, &unk_2119B64);
        gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v93);
        Json::Value::asString((Json::Value::Self *)v62, (int)(uintptr_t)(v93));
        g4_std::string::assign_str(&v46, v62);
        g4_std::string::Destroy(v62);
        Json::Value::Destroy((Json::Value::Self *)v93);
        g4_std::string::Destroy(v61);
      }
      v8 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B68);
      if ( !Json::Value::isNull(v8) )
      {
        g4_std::string::construct_copy(v63, &unk_2119B68);
        gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v94);
        Json::Value::asString((Json::Value::Self *)v64, (int)(uintptr_t)(v94));
        g4_std::string::assign_str(&v47, v64);
        g4_std::string::Destroy(v64);
        Json::Value::Destroy((Json::Value::Self *)v94);
        g4_std::string::Destroy(v63);
      }
      v9 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B6C);
      if ( !Json::Value::isNull(v9) )
      {
        g4_std::string::construct_copy(v65, &unk_2119B6C);
        gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v95);
        Json::Value::asString((Json::Value::Self *)v66, (int)(uintptr_t)(v95));
        g4_std::string::assign_str(&v48, v66);
        g4_std::string::Destroy(v66);
        Json::Value::Destroy((Json::Value::Self *)v95);
        g4_std::string::Destroy(v65);
      }
      v10 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B70);
      if ( !Json::Value::isNull(v10) )
      {
        g4_std::string::construct_copy(v67, &unk_2119B70);
        gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v96);
        Json::Value::asString((Json::Value::Self *)v68, (int)(uintptr_t)(v96));
        g4_std::string::assign_str(&v49, v68);
        g4_std::string::Destroy(v68);
        Json::Value::Destroy((Json::Value::Self *)v96);
        g4_std::string::Destroy(v67);
      }
      v11 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B74);
      if ( !Json::Value::isNull(v11) )
      {
        g4_std::string::construct_copy(v69, &unk_2119B74);
        gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v97);
        Json::Value::asString((Json::Value::Self *)v70, (int)(uintptr_t)(v97));
        g4_std::string::assign_str(&v50, v70);
        g4_std::string::Destroy(v70);
        Json::Value::Destroy((Json::Value::Self *)v97);
        g4_std::string::Destroy(v69);
      }
      v12 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B7C);
      if ( !Json::Value::isNull(v12) )
      {
        g4_std::string::construct_copy(v71, &unk_2119B7C);
        gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v98);
        Json::Value::asString((Json::Value::Self *)v72, (int)(uintptr_t)(v98));
        g4_std::string::assign_str(&v51, v72);
        g4_std::string::Destroy(v72);
        Json::Value::Destroy((Json::Value::Self *)v98);
        g4_std::string::Destroy(v71);
      }
      v13 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B80);
      if ( !Json::Value::isNull(v13) )
      {
        g4_std::string::construct_copy(v73, &unk_2119B80);
        gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v99);
        Json::Value::asString((Json::Value::Self *)v74, (int)(uintptr_t)(v99));
        g4_std::string::assign_str(&v52, v74);
        g4_std::string::Destroy(v74);
        Json::Value::Destroy((Json::Value::Self *)v99);
        g4_std::string::Destroy(v73);
      }
      v14 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B84);
      if ( !Json::Value::isNull(v14) )
      {
        g4_std::string::construct_copy(v75, &unk_2119B84);
        gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v100);
        Json::Value::asString((Json::Value::Self *)v76, (int)(uintptr_t)(v100));
        g4_std::string::assign_str(&v53, v76);
        g4_std::string::Destroy(v76);
        Json::Value::Destroy((Json::Value::Self *)v100);
        g4_std::string::Destroy(v75);
      }
      v15 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B78);
      if ( !Json::Value::isNull(v15) )
      {
        g4_std::string::construct_copy(v77, &unk_2119B78);
        gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v101);
        Json::Value::asString((Json::Value::Self *)v78, (int)(uintptr_t)(v101));
        g4_std::string::assign_str(&v54, v78);
        g4_std::string::Destroy(v78);
        Json::Value::Destroy((Json::Value::Self *)v101);
        g4_std::string::Destroy(v77);
      }
      v16 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B88);
      if ( !Json::Value::isNull(v16) )
      {
        g4_std::string::construct_copy(v79, &unk_2119B88);
        gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v102);
        Json::Value::asString((Json::Value::Self *)v80, (int)(uintptr_t)(v102));
        g4_std::string::assign_str(&v55, v80);
        g4_std::string::Destroy(v80);
        Json::Value::Destroy((Json::Value::Self *)v102);
        g4_std::string::Destroy(v79);
      }
      v17 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a2, &unk_2119B60);
      if ( !Json::Value::isNull(v17) )
      {
        g4_std::string::construct_copy(v81, &unk_2119B60);
        gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v103);
        Json::Value::asString((Json::Value::Self *)v82, (int)(uintptr_t)(v103));
        g4_std::string::assign_str(&v56, v82);
        g4_std::string::Destroy(v82);
        Json::Value::Destroy((Json::Value::Self *)v103);
        g4_std::string::Destroy(v81);
      }
      v107 = &v105;
      v108 = &v105;
      v83 = (char *)&dword_213B814;
      v84 = &dword_213B814;
      v85 = &dword_213B814;
      v105 = 0;
      v106 = nullptr;
      v109 = 0;
      g4_std::string::construct_copy(&v86, &unk_2119B8C);
      g4_std::string::construct_copy(v87, &v85);
      g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_insert_unique(
        v43,
        &v104,
        (int)(uintptr_t)(&v105),
        &v86);
      v41 = v43[0];
      g4_std::string::Destroy(v87);
      g4_std::string::Destroy(&v86);
      g4_std::string::Destroy(&v85);
      g4_std::string::assign_str(v41 + 20, &unk_2119B90);
      v18 = *((uint32_t *)self + 2);
      if ( v18 == 0 )
      {
        __assert2(
          "../../../../../lib/glitch/include/boost/smart_ptr/scoped_ptr.hpp",
          99,
          "T* boost::scoped_ptr<T>::operator->() const [with T = gaia::GlobalDeviceID]",
          "px != 0");
        v18 = *((uint32_t *)self + 2);
      }
      v42 = gaia::GlobalDeviceID::AssignGlobalId(
              v18,
              (int)(uintptr_t)&v83,
              (char **)&v56,
              (char **)&v44,
              (char **)&v45,
              (char **)&v46,
              (char **)&v47,
              (char **)&v48,
              (char **)&v54,
              (char **)&v51,
              (char **)&v52,
              (char **)&v53,
              (char **)&v49,
              (char **)&v50,
              (char **)&v55,
              (int)(uintptr_t)&v104,
              a2);
      if ( v42 != 0 )
        goto LABEL_34;
      v88 = nullptr;
      v89 = nullptr;
      v90 = 0;
      v42 = gaia::BaseServiceManager::ParseMessages(v83, *((uint32_t *)v83 - 3), (int)(uintptr_t)(&v88), 30);
      if ( v42 == 0 )
      {
        v36 = v89;
        v37 = v88;
        v42 = -24;
        if ( -858993459 * ((v89 - v88) >> 2) == 0 )
          goto LABEL_55;
        JSONMessage = (Json::Value::Self *)gaia::BaseJSONServiceResponse::GetJSONMessage(v88);
        v42 = sub_14428D0(JSONMessage, (int)(uintptr_t)(&v84));
      }
      v36 = v89;
      v37 = v88;
LABEL_55:
      if ( v36 != v37 )
      {
        v38 = v36;
        do
        {
          v40 = (Json::Value::Self *)(v37);
          v37 = (gaia::BaseJSONServiceResponse::Self *)((char *)v37 + 20);
          gaia::BaseJSONServiceResponse::Destroy(v40);
        }
        while ( v38 != v37 );
        v3 = a2;
        v37 = v88;
      }
      if ( v37 != nullptr )
        opDelete(v37);
LABEL_34:
      gaia::GaiaRequest::SetResponseCode(v3, v42);
      gaia::GaiaRequest::SetResponse(v3, &v84);
      std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
        (int)(uintptr_t)(&v104),
        v106);
      v19 = v84 - 3;
      if ( v84 - 3 != dword_213B808 && __sync_fetch_and_add(v84 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v19);
      v20 = v83 - 12;
      if ( v83 - 12 != (char *)dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)v83 - 1, 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v20);
      }
      v21 = v56 - 3;
      if ( v56 - 3 != dword_213B808 && __sync_fetch_and_add(v56 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v21);
      v22 = v55 - 3;
      if ( v55 - 3 != dword_213B808 && __sync_fetch_and_add(v55 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v22);
      v23 = v54 - 3;
      if ( v54 - 3 != dword_213B808 && __sync_fetch_and_add(v54 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v23);
      v24 = v53 - 3;
      if ( v53 - 3 != dword_213B808 && __sync_fetch_and_add(v53 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v24);
      v25 = v52 - 3;
      if ( v52 - 3 != dword_213B808 && __sync_fetch_and_add(v52 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v25);
      v26 = v51 - 3;
      if ( v51 - 3 != dword_213B808 && __sync_fetch_and_add(v51 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v26);
      v27 = v50 - 3;
      if ( v50 - 3 != dword_213B808 && __sync_fetch_and_add(v50 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v27);
      v28 = v49 - 3;
      if ( v49 - 3 != dword_213B808 && __sync_fetch_and_add(v49 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v28);
      v29 = v48 - 3;
      if ( v48 - 3 != dword_213B808 && __sync_fetch_and_add(v48 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v29);
      v30 = v47 - 3;
      if ( v47 - 3 != dword_213B808 && __sync_fetch_and_add(v47 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v30);
      v31 = v46 - 3;
      if ( v46 - 3 != dword_213B808 && __sync_fetch_and_add(v46 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v31);
      v32 = v45 - 3;
      if ( v45 - 3 != dword_213B808 && __sync_fetch_and_add(v45 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v32);
      v33 = v44 - 3;
      if ( v44 - 3 == dword_213B808 )
        return v42;
      v2 = v42;
      if ( __sync_fetch_and_add(v44 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v33);
      return v2;
    }
    gaia::GaiaRequest::SetResponseCode(a2, GlobalDeviceIDStatus);
    return v2;
  }
  gaia::GaiaRequest::SetOperationCode(a2, 8001);
  gaia::Gaia::GetInstance();
  gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v110, a2);
  started = gaia::Gaia::StartWorkerThread((const gaia::GaiaRequest::Self *)v110);
  gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v110);
  return started;
}


