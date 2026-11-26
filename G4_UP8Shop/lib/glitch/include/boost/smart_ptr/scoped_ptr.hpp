// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bddb28):
//   ../../../../../lib/glitch/include/boost/smart_ptr/scoped_ptr.hpp
// Referenced by 6 function(s) in libGangstar4.so

#pragma once

// ============================================================================
// Referencing Function: 0x1442cd0 .. 0x1442d93 (195 bytes)
// Symbol:               _ZN4gaia19Gaia_GlobalDeviceID13CancelRequestENS_18BaseServiceManager17CancelRequestTypeE
// Demangled:            gaia::Gaia_GlobalDeviceID::CancelRequest(gaia::BaseServiceManager::CancelRequestType)
// ============================================================================
/*
int gaia::Gaia_GlobalDeviceID::CancelRequest(glwebtools::Mutex *a1, int a2)
{
  int v2;
  int v3;
  int Instance;
  glwebtools::Mutex *v6;

  v2 = -303;
  glwebtools::Mutex::Lock(a1);
  if ( *((uint8_t *)a1 + 16) != 0 )
  {
    v3 = *((uint32_t *)a1 + 2);
    if ( v3 != 0 )
    {
      if ( a2 == 1 )
      {
        Instance = gaia::ThreadManager::GetInstance(v6);
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

*/

// ============================================================================
// Referencing Function: 0x1445920 .. 0x1446021 (1793 bytes)
// Symbol:               _ZN4gaia19Gaia_GlobalDeviceID11GetDeviceIdERNS_11GaiaRequestE
// Demangled:            gaia::Gaia_GlobalDeviceID::GetDeviceId(gaia::GaiaRequest &)
// ============================================================================
/*
int gaia::Gaia_GlobalDeviceID::GetDeviceId(gaia::Gaia_GlobalDeviceID *this, gaia::GaiaRequest::Self *a2)
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
  Json::Value::Self *v18;
  gaia::Gaia *v19;
  gaia::Gaia *v20;
  Json::Value::Self *started;
  Json::Value::Self *v22;
  volatile int32_t *v23;
  volatile int32_t *v24;
  volatile int32_t *v25;
  volatile int32_t *v26;
  volatile int32_t *v27;
  volatile int32_t *v28;
  char v29[4];
  char v30[4];
  char v31[4];
  char v32[4];
  char v33[4];
  char v34[4];
  char v35[4];
  char v36[4];
  char v37[4];
  char v38[4];
  uint8_t v39[16];
  uint8_t v40[16];
  uint8_t v41[16];
  uint8_t v42[16];
  uint8_t v43[16];
  uint8_t v44[96];

  gaia::Gaia::GetInstance(v18);
  IsInitialized = gaia::Gaia::IsInitialized(v19);
  result = -21;
  if ( IsInitialized != 0 )
  {
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)&unk_2119B58, 4);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)&unk_2119B5C, 4);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)&unk_2119B98, 4);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)&unk_2119B9C, 4);
    gaia::GaiaRequest::ValidateMandatoryParam(a2, (int)&unk_2119B60, 4);
    if ( (uint8_t)gaia::GaiaRequest::isValid(a2) != 0 )
    {
      if ( (uint8_t)gaia::GaiaRequest::isAsyncOperation(a2) != 0 )
      {
        gaia::GaiaRequest::SetOperationCode(a2, 8003);
        gaia::Gaia::GetInstance(v20);
        gaia::GaiaRequest::GaiaRequest((gaia::GaiaRequest::Self *)v44, a2);
        started = (Json::Value::Self *)gaia::Gaia::StartWorkerThread(v44);
        gaia::GaiaRequest::~GaiaRequest((gaia::GaiaRequest::Self *)v44);
        return (int)started;
      }
      else
      {
        GlobalDeviceIDStatus = gaia::Gaia_GlobalDeviceID::GetGlobalDeviceIDStatus(this);
        if ( GlobalDeviceIDStatus != 0 )
        {
          v22 = (Json::Value::Self *)GlobalDeviceIDStatus;
          gaia::GaiaRequest::SetResponseCode(a2, GlobalDeviceIDStatus);
          return (int)v22;
        }
        else
        {
          v23 = (volatile int32_t *)&unk_213B814;
          v24 = (volatile int32_t *)&unk_213B814;
          v25 = (volatile int32_t *)&unk_213B814;
          v26 = (volatile int32_t *)&unk_213B814;
          v27 = (volatile int32_t *)&unk_213B814;
          v28 = (volatile int32_t *)&unk_213B814;
          v5 = (Json::Value::Self *)gaia::GaiaRequest::operator[](a2, &unk_2119B58);
          if ( (uint8_t)Json::Value::isNull(v5) == 0 )
          {
            std::string::__construct_copy(v29, &unk_2119B58);
            gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v39);
            Json::Value::asString((Json::Value::Self *)v30);
            std::string::assign_str(&v23, v30);
            std::string::~string(v30);
            Json::Value::~Value((Json::Value::Self *)v39);
            std::string::~string(v29);
          }
          v6 = (Json::Value::Self *)gaia::GaiaRequest::operator[](a2, &unk_2119B5C);
          if ( (uint8_t)Json::Value::isNull(v6) == 0 )
          {
            std::string::__construct_copy(v31, &unk_2119B5C);
            gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v40);
            Json::Value::asString((Json::Value::Self *)v32);
            std::string::assign_str(&v24, v32);
            std::string::~string(v32);
            Json::Value::~Value((Json::Value::Self *)v40);
            std::string::~string(v31);
          }
          v7 = (Json::Value::Self *)gaia::GaiaRequest::operator[](a2, &unk_2119B98);
          if ( (uint8_t)Json::Value::isNull(v7) == 0 )
          {
            std::string::__construct_copy(v33, &unk_2119B98);
            gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v41);
            Json::Value::asString((Json::Value::Self *)v34);
            std::string::assign_str(&v25, v34);
            std::string::~string(v34);
            Json::Value::~Value((Json::Value::Self *)v41);
            std::string::~string(v33);
          }
          v8 = (Json::Value::Self *)gaia::GaiaRequest::operator[](a2, &unk_2119B9C);
          if ( (uint8_t)Json::Value::isNull(v8) == 0 )
          {
            std::string::__construct_copy(v35, &unk_2119B9C);
            gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v42);
            Json::Value::asString((Json::Value::Self *)v36);
            std::string::assign_str(&v26, v36);
            std::string::~string(v36);
            Json::Value::~Value((Json::Value::Self *)v42);
            std::string::~string(v35);
          }
          v9 = (Json::Value::Self *)gaia::GaiaRequest::operator[](a2, &unk_2119B60);
          if ( (uint8_t)Json::Value::isNull(v9) == 0 )
          {
            std::string::__construct_copy(v37, &unk_2119B60);
            gaia::GaiaRequest::GetInputValue((Json::Value::Self *)v43);
            Json::Value::asString((Json::Value::Self *)v38);
            std::string::assign_str(&v28, v38);
            std::string::~string(v38);
            Json::Value::~Value((Json::Value::Self *)v43);
            std::string::~string(v37);
          }
          v10 = *((uint32_t *)this + 2);
          if ( v10 == 0 )
          {
            __assert2(
              "../../../../../lib/glitch/include/boost/smart_ptr/scoped_ptr.hpp",
              99,
              "T* boost::scoped_ptr<T>::operator->() const [with T = gaia::GlobalDeviceID]",
              "px != 0");
            v10 = *((uint32_t *)this + 2);
          }
          DeviceId = gaia::GlobalDeviceID::GetDeviceId(v10, &v27, &v28, &v23, &v24, &v25, &v26, a2);
          gaia::GaiaRequest::SetResponseCode(a2, DeviceId);
          gaia::GaiaRequest::SetResponse(a2, &v27);
          v12 = v28 - 3;
          if ( v28 - 3 != dword_213B808 && __sync_fetch_and_add(v28 - 1, 0xFFFFFFFF) <= 0 )
            std::string::_Rep::_M_destroy((void *)v12);
          v13 = v27 - 3;
          if ( v27 - 3 != dword_213B808 && __sync_fetch_and_add(v27 - 1, 0xFFFFFFFF) <= 0 )
            std::string::_Rep::_M_destroy((void *)v13);
          v14 = v26 - 3;
          if ( v26 - 3 != dword_213B808 && __sync_fetch_and_add(v26 - 1, 0xFFFFFFFF) <= 0 )
            std::string::_Rep::_M_destroy((void *)v14);
          v15 = v25 - 3;
          if ( v25 - 3 != dword_213B808 && __sync_fetch_and_add(v25 - 1, 0xFFFFFFFF) <= 0 )
            std::string::_Rep::_M_destroy((void *)v15);
          v16 = v24 - 3;
          if ( v24 - 3 != dword_213B808 && __sync_fetch_and_add(v24 - 1, 0xFFFFFFFF) <= 0 )
            std::string::_Rep::_M_destroy((void *)v16);
          v17 = v23 - 3;
          if ( v23 - 3 == dword_213B808 )
          {
            return DeviceId;
          }
          else
          {
            result = DeviceId;
            if ( __sync_fetch_and_add(v23 - 1, 0xFFFFFFFF) <= 0 )
            {
              std::string::_Rep::_M_destroy((void *)v17);
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

*/

// ============================================================================
// Referencing Function: 0x1446030 .. 0x144725b (4651 bytes)
// Symbol:               _ZN4gaia19Gaia_GlobalDeviceID14UpdateDeviceIdERNS_11GaiaRequestE
// Demangled:            gaia::Gaia_GlobalDeviceID::UpdateDeviceId(gaia::GaiaRequest &)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1448bb0 .. 0x1448d51 (417 bytes)
// Symbol:               _ZN4gaia19Gaia_GlobalDeviceID10InitializeERKSs
// Demangled:            gaia::Gaia_GlobalDeviceID::Initialize(std::string const&)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1455090 .. 0x145636d (4829 bytes)
// Symbol:               _ZN4gaia19Gaia_GlobalDeviceID11GetGlobalIdERNS_11GaiaRequestE
// Demangled:            gaia::Gaia_GlobalDeviceID::GetGlobalId(gaia::GaiaRequest &)
// ============================================================================

// ============================================================================
// Referencing Function: 0x1456370 .. 0x145764d (4829 bytes)
// Symbol:               _ZN4gaia19Gaia_GlobalDeviceID14AssignGlobalIdERNS_11GaiaRequestE
// Demangled:            gaia::Gaia_GlobalDeviceID::AssignGlobalId(gaia::GaiaRequest &)
// ============================================================================
