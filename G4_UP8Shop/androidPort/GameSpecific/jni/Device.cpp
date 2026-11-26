#include "../../../sources/Core/Utils/DecompTypes.h"
// ============================================================================
// Gangstar Vegas (G4_UP8Shop) - Cross-Platform Module: Device.cpp
// Portable implementation + Full IDA Pro Hex-Rays Decompilation (66 funcs)
// ============================================================================
#include "Device.h"
#include <sys/statvfs.h>
#include <sys/system_properties.h>
#include "../../../sources/Core/Memory/GameAllocator.h"

// ----------------------------------------------------------------------------
// Function: Device::GetModel  (binary VA: 0x0)
// Original: Device::GetModel
// ----------------------------------------------------------------------------
std::string Device::GetModel()
{
  char model[PROP_VALUE_MAX] = {0};
  if (__system_property_get("ro.product.model", model) > 0)
    return std::string(model);
  return std::string("Android");
}

// ----------------------------------------------------------------------------
// Function: Device::GetLanguage  (binary VA: 0x0)
// Original: Device::GetLanguage
// ----------------------------------------------------------------------------
std::string Device::GetLanguage()
{ return std::string("en"); }

// ----------------------------------------------------------------------------
// Function: Device::GetHDIDFV  (binary VA: 0x0)
// Original: Device::GetHDIDFV
// ----------------------------------------------------------------------------
std::string Device::GetHDIDFV()
{ return std::string(); }

// ----------------------------------------------------------------------------
// Function: Device::GetFreeDiskSpace  (binary VA: 0x0)
// Original: Device::GetFreeDiskSpace
// ----------------------------------------------------------------------------
uint64_t Device::GetFreeDiskSpace()
{
  struct statvfs st;
  if (statvfs("/data", &st) == 0)
    return static_cast<uint64_t>(st.f_bavail) * static_cast<uint64_t>(st.f_frsize);
  return 0ULL;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils_GetDeviceId  (binary VA: 0x4c19c0)
// Original: DeviceUtils_GetDeviceId
// ----------------------------------------------------------------------------
int DeviceUtils_GetDeviceId(int a1)
{
  uint32_t *v1;
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  v3 = 0;
  v1 = sub_4C0F70(&v3);
  g4_std::string::construct_copy(a1, v1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils_GetAndroidId  (binary VA: 0x4c1a10)
// Original: DeviceUtils_GetAndroidId
// ----------------------------------------------------------------------------
int DeviceUtils_GetAndroidId(int a1)
{
  uint32_t *v1;
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  v3 = 1;
  v1 = sub_4C0F70(&v3);
  g4_std::string::construct_copy(a1, v1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils_GetSerial  (binary VA: 0x4c1a60)
// Original: DeviceUtils_GetSerial
// ----------------------------------------------------------------------------
int DeviceUtils_GetSerial(int a1)
{
  uint32_t *v1;
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  v3 = 2;
  v1 = sub_4C0F70(&v3);
  g4_std::string::construct_copy(a1, v1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils_GetSerialNo  (binary VA: 0x4c1ab0)
// Original: DeviceUtils_GetSerialNo
// ----------------------------------------------------------------------------
int DeviceUtils_GetSerialNo(int a1)
{
  uint32_t *v1;
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  v3 = 3;
  v1 = sub_4C0F70(&v3);
  g4_std::string::construct_copy(a1, v1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils_GetFirmware  (binary VA: 0x4c1b00)
// Original: DeviceUtils_GetFirmware
// ----------------------------------------------------------------------------
int DeviceUtils_GetFirmware(int a1)
{
  uint32_t *v1;
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  v3 = 4;
  v1 = sub_4C0F70(&v3);
  g4_std::string::construct_copy(a1, v1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils_GetMacAddress  (binary VA: 0x4c1b50)
// Original: DeviceUtils_GetMacAddress
// ----------------------------------------------------------------------------
int DeviceUtils_GetMacAddress(int a1)
{
  uint32_t *v1;
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  v3 = 5;
  v1 = sub_4C0F70(&v3);
  g4_std::string::construct_copy(a1, v1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils_GetIMEI  (binary VA: 0x4c1ba0)
// Original: DeviceUtils_GetIMEI
// ----------------------------------------------------------------------------
int DeviceUtils_GetIMEI(int a1)
{
  uint32_t *v1;
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  v3 = 6;
  v1 = sub_4C0F70(&v3);
  g4_std::string::construct_copy(a1, v1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils_GetHDIDFVStr  (binary VA: 0x4c1bf0)
// Original: DeviceUtils_GetHDIDFVStr
// ----------------------------------------------------------------------------
int DeviceUtils_GetHDIDFVStr(int a1)
{
  uint32_t *v1;
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  v3 = 7;
  v1 = sub_4C0F70(&v3);
  g4_std::string::construct_copy(a1, v1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils_GetHDIDFVVersion  (binary VA: 0x4c1c40)
// Original: DeviceUtils_GetHDIDFVVersion
// ----------------------------------------------------------------------------
int DeviceUtils_GetHDIDFVVersion(int a1)
{
  uint32_t *v1;
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  v3 = 8;
  v1 = sub_4C0F70(&v3);
  g4_std::string::construct_copy(a1, v1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils_GetGLDID  (binary VA: 0x4c1c90)
// Original: DeviceUtils_GetGLDID
// ----------------------------------------------------------------------------
int DeviceUtils_GetGLDID(int a1)
{
  uint32_t *v1;
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  v3 = 9;
  v1 = sub_4C0F70(&v3);
  g4_std::string::construct_copy(a1, v1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils_GetDeviceName  (binary VA: 0x4c1ce0)
// Original: DeviceUtils_GetDeviceName
// ----------------------------------------------------------------------------
int DeviceUtils_GetDeviceName(int a1)
{
  uint32_t *v1;
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  v3 = 10;
  v1 = sub_4C0F70(&v3);
  g4_std::string::construct_copy(a1, v1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils_GetDeviceManufacturer  (binary VA: 0x4c1d30)
// Original: DeviceUtils_GetDeviceManufacturer
// ----------------------------------------------------------------------------
int DeviceUtils_GetDeviceManufacturer(int a1)
{
  uint32_t *v1;
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  v3 = 12;
  v1 = sub_4C0F70(&v3);
  g4_std::string::construct_copy(a1, v1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils_GetDeviceModel  (binary VA: 0x4c1d80)
// Original: DeviceUtils_GetDeviceModel
// ----------------------------------------------------------------------------
int DeviceUtils_GetDeviceModel(int a1)
{
  uint32_t *v1;
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  v3 = 13;
  v1 = sub_4C0F70(&v3);
  g4_std::string::construct_copy(a1, v1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils_GetCPUSerial  (binary VA: 0x4c1dd0)
// Original: DeviceUtils_GetCPUSerial
// ----------------------------------------------------------------------------
int DeviceUtils_GetCPUSerial(int a1)
{
  uint32_t *v1;
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  v3 = 11;
  v1 = sub_4C0F70(&v3);
  g4_std::string::construct_copy(a1, v1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils_GetBuildDevice  (binary VA: 0x4c1e20)
// Original: DeviceUtils_GetBuildDevice
// ----------------------------------------------------------------------------
int DeviceUtils_GetBuildDevice(int a1)
{
  uint32_t *v1;
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  v3 = 14;
  v1 = sub_4C0F70(&v3);
  g4_std::string::construct_copy(a1, v1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils_GetBuildProduct  (binary VA: 0x4c1e70)
// Original: DeviceUtils_GetBuildProduct
// ----------------------------------------------------------------------------
int DeviceUtils_GetBuildProduct(int a1)
{
  uint32_t *v1;
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  v3 = 15;
  v1 = sub_4C0F70(&v3);
  g4_std::string::construct_copy(a1, v1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: GameUtils::IsDeviceJbOrRt  (binary VA: 0x4c3320)
// Original: GameUtils::IsDeviceJbOrRt
// ----------------------------------------------------------------------------
bool GameUtils::IsDeviceJbOrRt()
{
  FILE *v0;
  bool result;
  int v2;
  struct stat buf;

  v0 = fopen("/system/app/Superuser.apk", "rb");
  if ( v0 != nullptr )
  {
    fclose(v0);
    return true;
  }
  else
  {
    v2 = stat("/system/bin/su", &buf);
    result = true;
    if ( v2 == -1 )
      return stat("/system/xbin/su", &buf) != -1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: GameUtils_IsDeviceJbOrRt  (binary VA: 0x4c33b0)
// Original: GameUtils_IsDeviceJbOrRt
// ----------------------------------------------------------------------------
bool GameUtils_IsDeviceJbOrRt()
{
  return GameUtils::IsDeviceJbOrRt();
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils::charToString  (binary VA: 0x4c5430)
// Original: DeviceUtils::charToString
// ----------------------------------------------------------------------------
int DeviceUtils::charToString(DeviceUtils::Self *self)
{
  int v1;
  uint32_t v3[4];

  v3[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v3, 65542) != -2 )
    return G4_VCALL<int>(v3[0], 668, self);
  G4_VCALL<void>(AndroidOS_JavaVM, 16, v3, 0);
  v1 = G4_VCALL<int>(v3[0], 668, self);
  G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils::setJavaVM  (binary VA: 0x4c54f0)
// Original: DeviceUtils::setJavaVM
// ----------------------------------------------------------------------------
uint32_t * DeviceUtils::setJavaVM(int a1)
{
  DeviceUtils::mJavaVM[0] = a1;
  return (uint32_t *)DeviceUtils::mJavaVM;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils::init  (binary VA: 0x4c5550)
// Original: DeviceUtils::init
// ----------------------------------------------------------------------------
int DeviceUtils::init(int a1)
{
  int result;
  typedef char _g4_t_v2;
  typedef uint32_t _g4_t_v3[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (15u + sizeof(_g4_t_v2)) > _g4_s0 ? (15u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v3)) > _g4_s1 ? (28u + sizeof(_g4_t_v3)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 15u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 28u);

  result = DeviceUtils::mClassGLGame;
  if ( DeviceUtils::mClassGLGame == 0 )
  {
    v3[0] = 0;
    if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v3, 65542) == -2 )
    {
      G4_VCALL<void>(AndroidOS_JavaVM, 16, v3, 0);
      v2 = 1;
    }
    else
    {
      v2 = 0;
    }
    DeviceUtils::mClassGLGame = G4_VCALL<int>(v3[0], 84, a1);
    DeviceUtils::mDeviceId = G4_VCALL<int>(v3[0], 452, DeviceUtils::mClassGLGame, "d1", "()Ljava/lang/String;");
    DeviceUtils::mAndroidId = G4_VCALL<int>(v3[0], 452, DeviceUtils::mClassGLGame, "getAndroidId", "()Ljava/lang/String;");
    DeviceUtils::mSerial = G4_VCALL<int>(v3[0], 452, DeviceUtils::mClassGLGame, "getSerial", "()Ljava/lang/String;");
    DeviceUtils::mSerialNo = G4_VCALL<int>(v3[0], 452, DeviceUtils::mClassGLGame, "getSerialNo", "()Ljava/lang/String;");
    DeviceUtils::mFirmware = G4_VCALL<int>(v3[0], 452, DeviceUtils::mClassGLGame, "getDeviceFirmware", "()Ljava/lang/String;");
    DeviceUtils::mMacAddress = G4_VCALL<int>(v3[0], 452, DeviceUtils::mClassGLGame, "getMacAddress", "()Ljava/lang/String;");
    DeviceUtils::mImei = G4_VCALL<int>(v3[0], 452, DeviceUtils::mClassGLGame, "getDeviceIMEI", "()Ljava/lang/String;");
    DeviceUtils::mHDIDFV = G4_VCALL<int>(v3[0], 452, DeviceUtils::mClassGLGame, "getHDIDFV", "()Ljava/lang/String;");
    DeviceUtils::mHDIDFVVersion = G4_VCALL<int>(v3[0], 452, DeviceUtils::mClassGLGame, "getHDIDFVVersion", "()Ljava/lang/String;");
    DeviceUtils::mGoogleAdId = G4_VCALL<int>(v3[0], 452, DeviceUtils::mClassGLGame, "getGoogleAdId", "()Ljava/lang/String;");
    DeviceUtils::mGoogleAdIdStatus = G4_VCALL<int>(v3[0], 452, DeviceUtils::mClassGLGame, "getGoogleAdIdStatus", "()I");
    DeviceUtils::mGLDID = G4_VCALL<int>(v3[0], 452, DeviceUtils::mClassGLGame, "getGLDID", "()Ljava/lang/String;");
    DeviceUtils::mName = G4_VCALL<int>(v3[0], 452, DeviceUtils::mClassGLGame, "getDeviceName", "()Ljava/lang/String;");
    DeviceUtils::mDeviceManufacturer = G4_VCALL<int>(v3[0], 452, DeviceUtils::mClassGLGame, "getPhoneManufacturer", "()Ljava/lang/String;");
    DeviceUtils::mDeviceModel = G4_VCALL<int>(v3[0], 452, DeviceUtils::mClassGLGame, "getPhoneModel", "()Ljava/lang/String;");
    DeviceUtils::mCarrierName = G4_VCALL<int>(v3[0], 452, DeviceUtils::mClassGLGame, "retrieveDeviceCarrier", "()Ljava/lang/String;");
    DeviceUtils::mCountry = G4_VCALL<int>(v3[0], 452, DeviceUtils::mClassGLGame, "retrieveDeviceCountry", "()Ljava/lang/String;");
    DeviceUtils::mRegion = G4_VCALL<int>(v3[0], 452, DeviceUtils::mClassGLGame, "retrieveDeviceRegion", "()Ljava/lang/String;");
    DeviceUtils::mLanguage = G4_VCALL<int>(v3[0], 452, DeviceUtils::mClassGLGame, "retrieveDeviceLanguage", "()Ljava/lang/String;");
    DeviceUtils::mCPUSerial = G4_VCALL<int>(v3[0], 452, DeviceUtils::mClassGLGame, "retrieveCPUSerial", "()Ljava/lang/String;");
    DeviceUtils::mBuildDevice = G4_VCALL<int>(v3[0], 452, DeviceUtils::mClassGLGame, "getPhoneDevice", "()Ljava/lang/String;");
    result = G4_VCALL<int>(v3[0], 452, DeviceUtils::mClassGLGame, "getPhoneProduct", "()Ljava/lang/String;");
    DeviceUtils::mBuildProduct = result;
    if ( v2 != 0 )
      return G4_VCALL<int>(AndroidOS_JavaVM, 20);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils::DeviceId  (binary VA: 0x4c59e0)
// Original: DeviceUtils::DeviceId
// ----------------------------------------------------------------------------
DeviceUtils::Self * DeviceUtils::DeviceId(DeviceUtils::Self *self)
{
  int v1;
  int v2;
  int v3;
  typedef char *_g4_t_v5;
  typedef char _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v6)) > _g4_s1 ? (15u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v7)) > _g4_s2 ? (27u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v8)) > _g4_s3 ? (28u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 15u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 27u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  v8[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v8, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v8, 0);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  v1 = JNIEnv::CallStaticObjectMethod(v8[0], DeviceUtils::mClassGLGame, DeviceUtils::mDeviceId);
  v2 = v8[0];
  v3 = v1;
  v5 = (v3 != 0) ? (char *)G4_VCALL<int>(v2, 676, v3, 0) : nullptr;
  g4_std::string::construct_from_cstr((int)(uintptr_t)self, v5 != nullptr ? v5 : (char *)"", (int)(uintptr_t)&v7);
  if ( v5 != nullptr ) G4_VCALL<void>(v2, 680, v3, v5);
  if ( v3 != 0 ) G4_VCALL<void>(v2, 92, v3);
  if ( v6 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return self;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils::AndroidId  (binary VA: 0x4c5b10)
// Original: DeviceUtils::AndroidId
// ----------------------------------------------------------------------------
DeviceUtils::Self * DeviceUtils::AndroidId(DeviceUtils::Self *self)
{
  int v1;
  int v2;
  int v3;
  typedef char *_g4_t_v5;
  typedef char _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v6)) > _g4_s1 ? (15u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v7)) > _g4_s2 ? (27u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v8)) > _g4_s3 ? (28u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 15u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 27u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  v8[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v8, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v8, 0);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  v1 = JNIEnv::CallStaticObjectMethod(v8[0], DeviceUtils::mClassGLGame, DeviceUtils::mAndroidId);
  v2 = v8[0];
  v3 = v1;
  v5 = (v3 != 0) ? (char *)G4_VCALL<int>(v2, 676, v3, 0) : nullptr;
  g4_std::string::construct_from_cstr((int)(uintptr_t)self, v5 != nullptr ? v5 : (char *)"", (int)(uintptr_t)&v7);
  if ( v5 != nullptr ) G4_VCALL<void>(v2, 680, v3, v5);
  if ( v3 != 0 ) G4_VCALL<void>(v2, 92, v3);
  if ( v6 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return self;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils::Serial  (binary VA: 0x4c5c40)
// Original: DeviceUtils::Serial
// ----------------------------------------------------------------------------
DeviceUtils::Self * DeviceUtils::Serial(DeviceUtils::Self *self)
{
  int v1;
  int v2;
  int v3;
  typedef char *_g4_t_v5;
  typedef char _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v6)) > _g4_s1 ? (15u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v7)) > _g4_s2 ? (27u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v8)) > _g4_s3 ? (28u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 15u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 27u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  v8[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v8, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v8, 0);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  v1 = JNIEnv::CallStaticObjectMethod(v8[0], DeviceUtils::mClassGLGame, DeviceUtils::mSerial);
  v2 = v8[0];
  v3 = v1;
  v5 = (v3 != 0) ? (char *)G4_VCALL<int>(v2, 676, v3, 0) : nullptr;
  g4_std::string::construct_from_cstr((int)(uintptr_t)self, v5 != nullptr ? v5 : (char *)"", (int)(uintptr_t)&v7);
  if ( v5 != nullptr ) G4_VCALL<void>(v2, 680, v3, v5);
  if ( v3 != 0 ) G4_VCALL<void>(v2, 92, v3);
  if ( v6 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return self;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils::SerialNo  (binary VA: 0x4c5d70)
// Original: DeviceUtils::SerialNo
// ----------------------------------------------------------------------------
DeviceUtils::Self * DeviceUtils::SerialNo(DeviceUtils::Self *self)
{
  int v1;
  int v2;
  int v3;
  typedef char *_g4_t_v5;
  typedef char _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v6)) > _g4_s1 ? (15u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v7)) > _g4_s2 ? (27u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v8)) > _g4_s3 ? (28u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 15u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 27u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  v8[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v8, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v8, 0);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  v1 = JNIEnv::CallStaticObjectMethod(v8[0], DeviceUtils::mClassGLGame, DeviceUtils::mSerialNo);
  v2 = v8[0];
  v3 = v1;
  v5 = (v3 != 0) ? (char *)G4_VCALL<int>(v2, 676, v3, 0) : nullptr;
  g4_std::string::construct_from_cstr((int)(uintptr_t)self, v5 != nullptr ? v5 : (char *)"", (int)(uintptr_t)&v7);
  if ( v5 != nullptr ) G4_VCALL<void>(v2, 680, v3, v5);
  if ( v3 != 0 ) G4_VCALL<void>(v2, 92, v3);
  if ( v6 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return self;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils::Firmware  (binary VA: 0x4c5ea0)
// Original: DeviceUtils::Firmware
// ----------------------------------------------------------------------------
DeviceUtils::Self * DeviceUtils::Firmware(DeviceUtils::Self *self)
{
  int v1;
  int v2;
  int v3;
  typedef char *_g4_t_v5;
  typedef char _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v6)) > _g4_s1 ? (15u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v7)) > _g4_s2 ? (27u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v8)) > _g4_s3 ? (28u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 15u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 27u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  v8[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v8, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v8, 0);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  v1 = JNIEnv::CallStaticObjectMethod(v8[0], DeviceUtils::mClassGLGame, DeviceUtils::mFirmware);
  v2 = v8[0];
  v3 = v1;
  v5 = (v3 != 0) ? (char *)G4_VCALL<int>(v2, 676, v3, 0) : nullptr;
  g4_std::string::construct_from_cstr((int)(uintptr_t)self, v5 != nullptr ? v5 : (char *)"", (int)(uintptr_t)&v7);
  if ( v5 != nullptr ) G4_VCALL<void>(v2, 680, v3, v5);
  if ( v3 != 0 ) G4_VCALL<void>(v2, 92, v3);
  if ( v6 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return self;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils::MacAddress  (binary VA: 0x4c5fd0)
// Original: DeviceUtils::MacAddress
// ----------------------------------------------------------------------------
DeviceUtils::Self * DeviceUtils::MacAddress(DeviceUtils::Self *self)
{
  int v1;
  int v2;
  int v3;
  typedef char *_g4_t_v5;
  typedef char _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v6)) > _g4_s1 ? (15u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v7)) > _g4_s2 ? (27u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v8)) > _g4_s3 ? (28u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 15u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 27u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  v8[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v8, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v8, 0);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  v1 = JNIEnv::CallStaticObjectMethod(v8[0], DeviceUtils::mClassGLGame, DeviceUtils::mMacAddress);
  v2 = v8[0];
  v3 = v1;
  v5 = (v3 != 0) ? (char *)G4_VCALL<int>(v2, 676, v3, 0) : nullptr;
  g4_std::string::construct_from_cstr((int)(uintptr_t)self, v5 != nullptr ? v5 : (char *)"", (int)(uintptr_t)&v7);
  if ( v5 != nullptr ) G4_VCALL<void>(v2, 680, v3, v5);
  if ( v3 != 0 ) G4_VCALL<void>(v2, 92, v3);
  if ( v6 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return self;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils::Imei  (binary VA: 0x4c6100)
// Original: DeviceUtils::Imei
// ----------------------------------------------------------------------------
DeviceUtils::Self * DeviceUtils::Imei(DeviceUtils::Self *self)
{
  int v1;
  int v2;
  int v3;
  typedef char *_g4_t_v5;
  typedef char _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v6)) > _g4_s1 ? (15u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v7)) > _g4_s2 ? (27u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v8)) > _g4_s3 ? (28u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 15u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 27u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  v8[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v8, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v8, 0);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  v1 = JNIEnv::CallStaticObjectMethod(v8[0], DeviceUtils::mClassGLGame, DeviceUtils::mImei);
  v2 = v8[0];
  v3 = v1;
  v5 = (v3 != 0) ? (char *)G4_VCALL<int>(v2, 676, v3, 0) : nullptr;
  g4_std::string::construct_from_cstr((int)(uintptr_t)self, v5 != nullptr ? v5 : (char *)"", (int)(uintptr_t)&v7);
  if ( v5 != nullptr ) G4_VCALL<void>(v2, 680, v3, v5);
  if ( v3 != 0 ) G4_VCALL<void>(v2, 92, v3);
  if ( v6 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return self;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils::HDIDFV  (binary VA: 0x4c6230)
// Original: DeviceUtils::HDIDFV
// ----------------------------------------------------------------------------
int DeviceUtils::HDIDFV(DeviceUtils::Self *self, uint8_t *a2, signed int n)
{
  const char *s;
  signed int v4;
  size_t v5;
  typedef uint8_t _g4_t_v7;
  typedef char _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (14u + sizeof(_g4_t_v7)) > _g4_s0 ? (14u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v8)) > _g4_s1 ? (15u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v9)) > _g4_s2 ? (24u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v10)) > _g4_s3 ? (28u + sizeof(_g4_t_v10)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 14u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 15u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);

  v9 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v9, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, &v9, 0);
    v8 = 1;
  }
  else
  {
    v8 = 0;
  }
  v10[0] = 7;
  s = (const char *)*sub_4C0F70(v10);
  v7 = 0;
  if ( s != nullptr )
  {
    v4 = strlen(s);
    v5 = v4;
    if ( v4 != 0 && v4 <= n )
    {
      *(uint32_t *)a2 = v4;
      memset(self, 0, n);
      memcpy(self, s, v5);
      v7 = 1;
    }
  }
  if ( v8 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return v7;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils_GetHDIDFV  (binary VA: 0x4c6340)
// Original: DeviceUtils_GetHDIDFV
// ----------------------------------------------------------------------------
int DeviceUtils_GetHDIDFV(DeviceUtils::Self *a1, uint8_t *a2, size_t a3)
{
  return DeviceUtils::HDIDFV(a1, a2, a3);
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils::HDIDFVString  (binary VA: 0x4c6380)
// Original: DeviceUtils::HDIDFVString
// ----------------------------------------------------------------------------
DeviceUtils::Self * DeviceUtils::HDIDFVString(DeviceUtils::Self *self)
{
  int v1;
  int v2;
  int v3;
  typedef char *_g4_t_v5;
  typedef char _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v6)) > _g4_s1 ? (15u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v7)) > _g4_s2 ? (27u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v8)) > _g4_s3 ? (28u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 15u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 27u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  v8[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v8, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v8, 0);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  v1 = JNIEnv::CallStaticObjectMethod(v8[0], DeviceUtils::mClassGLGame, DeviceUtils::mHDIDFV);
  v2 = v8[0];
  v3 = v1;
  v5 = (v3 != 0) ? (char *)G4_VCALL<int>(v2, 676, v3, 0) : nullptr;
  g4_std::string::construct_from_cstr((int)(uintptr_t)self, v5 != nullptr ? v5 : (char *)"", (int)(uintptr_t)&v7);
  if ( v5 != nullptr ) G4_VCALL<void>(v2, 680, v3, v5);
  if ( v3 != 0 ) G4_VCALL<void>(v2, 92, v3);
  if ( v6 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return self;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils::HDIDFVVersion  (binary VA: 0x4c64b0)
// Original: DeviceUtils::HDIDFVVersion
// ----------------------------------------------------------------------------
DeviceUtils::Self * DeviceUtils::HDIDFVVersion(DeviceUtils::Self *self)
{
  int v1;
  int v2;
  int v3;
  typedef char *_g4_t_v5;
  typedef char _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v6)) > _g4_s1 ? (15u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v7)) > _g4_s2 ? (27u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v8)) > _g4_s3 ? (28u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 15u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 27u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  v8[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v8, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v8, 0);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  v1 = JNIEnv::CallStaticObjectMethod(v8[0], DeviceUtils::mClassGLGame, DeviceUtils::mHDIDFVVersion);
  v2 = v8[0];
  v3 = v1;
  v5 = (v3 != 0) ? (char *)G4_VCALL<int>(v2, 676, v3, 0) : nullptr;
  g4_std::string::construct_from_cstr((int)(uintptr_t)self, v5 != nullptr ? v5 : (char *)"", (int)(uintptr_t)&v7);
  if ( v5 != nullptr ) G4_VCALL<void>(v2, 680, v3, v5);
  if ( v3 != 0 ) G4_VCALL<void>(v2, 92, v3);
  if ( v6 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return self;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils::GoogleAdId  (binary VA: 0x4c65e0)
// Original: DeviceUtils::GoogleAdId
// ----------------------------------------------------------------------------
DeviceUtils::Self * DeviceUtils::GoogleAdId(DeviceUtils::Self *self)
{
  int v1;
  int v2;
  int v3;
  typedef char *_g4_t_v5;
  typedef char _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v6)) > _g4_s1 ? (15u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v7)) > _g4_s2 ? (27u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v8)) > _g4_s3 ? (28u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 15u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 27u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  v8[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v8, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v8, 0);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  v1 = JNIEnv::CallStaticObjectMethod(v8[0], DeviceUtils::mClassGLGame, DeviceUtils::mGoogleAdId);
  v2 = v8[0];
  v3 = v1;
  v5 = (v3 != 0) ? (char *)G4_VCALL<int>(v2, 676, v3, 0) : nullptr;
  g4_std::string::construct_from_cstr((int)(uintptr_t)self, v5 != nullptr ? v5 : (char *)"", (int)(uintptr_t)&v7);
  if ( v5 != nullptr ) G4_VCALL<void>(v2, 680, v3, v5);
  if ( v3 != 0 ) G4_VCALL<void>(v2, 92, v3);
  if ( v6 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return self;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils::GoogleAdIdStatus  (binary VA: 0x4c6710)
// Original: DeviceUtils::GoogleAdIdStatus
// ----------------------------------------------------------------------------
int DeviceUtils::GoogleAdIdStatus()
{
  int v0;
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  v2 = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, &v2, 65542) != -2 )
    return sub_4C17B0(v2, DeviceUtils::mClassGLGame, DeviceUtils::mGoogleAdIdStatus);
  G4_VCALL<void>(AndroidOS_JavaVM, 16, &v2, 0);
  v0 = sub_4C17B0(v2, DeviceUtils::mClassGLGame, DeviceUtils::mGoogleAdIdStatus);
  G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return v0;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils_GetGoogleAdIdStatus  (binary VA: 0x4c67e0)
// Original: DeviceUtils_GetGoogleAdIdStatus
// ----------------------------------------------------------------------------
int DeviceUtils_GetGoogleAdIdStatus()
{
  return DeviceUtils::GoogleAdIdStatus();
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils::retrieveGoogleAdId  (binary VA: 0x4c6800)
// Original: DeviceUtils::retrieveGoogleAdId
// ----------------------------------------------------------------------------
DeviceUtils::Self * DeviceUtils::retrieveGoogleAdId(DeviceUtils::Self *self)
{
  uint32_t *v1;
  uint32_t *v3;
  void *v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v6)) > _g4_s1 ? (8u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v7)) > _g4_s2 ? (12u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);

  if ( DeviceUtils::s_bGoogleAdIdStatus == 3 || DeviceUtils::s_bGoogleAdIdStatus == -1 )
  {
    DeviceUtils::s_bGoogleAdIdStatus = DeviceUtils::GoogleAdIdStatus();
    DeviceUtils::GoogleAdId((DeviceUtils::Self *)&v6);
    v5 = 16;
    v3 = sub_4C0F70(&v5);
    g4_std::string::assign_str(v3, &v6);
    v4 = (void *)(v6 - 12);
    if ( (void *)(v6 - 12) != &unk_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
  }
  v7 = 16;
  v1 = sub_4C0F70(&v7);
  g4_std::string::construct_copy(self, v1);
  return self;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils_GetGoogleAdId  (binary VA: 0x4c68d0)
// Original: DeviceUtils_GetGoogleAdId
// ----------------------------------------------------------------------------
DeviceUtils::Self * DeviceUtils_GetGoogleAdId(DeviceUtils::Self *a1)
{
  DeviceUtils::retrieveGoogleAdId(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils::GLDID  (binary VA: 0x4c6910)
// Original: DeviceUtils::GLDID
// ----------------------------------------------------------------------------
DeviceUtils::Self * DeviceUtils::GLDID(DeviceUtils::Self *self)
{
  int v1;
  int v2;
  int v3;
  typedef char *_g4_t_v5;
  typedef char _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v6)) > _g4_s1 ? (15u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v7)) > _g4_s2 ? (27u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v8)) > _g4_s3 ? (28u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 15u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 27u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  v8[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v8, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v8, 0);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  v1 = JNIEnv::CallStaticObjectMethod(v8[0], DeviceUtils::mClassGLGame, DeviceUtils::mGLDID);
  v2 = v8[0];
  v3 = v1;
  v5 = (v3 != 0) ? (char *)G4_VCALL<int>(v2, 676, v3, 0) : nullptr;
  g4_std::string::construct_from_cstr((int)(uintptr_t)self, v5 != nullptr ? v5 : (char *)"", (int)(uintptr_t)&v7);
  if ( v5 != nullptr ) G4_VCALL<void>(v2, 680, v3, v5);
  if ( v3 != 0 ) G4_VCALL<void>(v2, 92, v3);
  if ( v6 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return self;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils::Name  (binary VA: 0x4c6a40)
// Original: DeviceUtils::Name
// ----------------------------------------------------------------------------
DeviceUtils::Self * DeviceUtils::Name(DeviceUtils::Self *self)
{
  int v1;
  int v2;
  int v3;
  typedef char *_g4_t_v5;
  typedef char _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v6)) > _g4_s1 ? (15u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v7)) > _g4_s2 ? (27u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v8)) > _g4_s3 ? (28u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 15u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 27u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  v8[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v8, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v8, 0);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  v1 = JNIEnv::CallStaticObjectMethod(v8[0], DeviceUtils::mClassGLGame, DeviceUtils::mName);
  v2 = v8[0];
  v3 = v1;
  v5 = (v3 != 0) ? (char *)G4_VCALL<int>(v2, 676, v3, 0) : nullptr;
  g4_std::string::construct_from_cstr((int)(uintptr_t)self, v5 != nullptr ? v5 : (char *)"", (int)(uintptr_t)&v7);
  if ( v5 != nullptr ) G4_VCALL<void>(v2, 680, v3, v5);
  if ( v3 != 0 ) G4_VCALL<void>(v2, 92, v3);
  if ( v6 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return self;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils::Manufacturer  (binary VA: 0x4c6b70)
// Original: DeviceUtils::Manufacturer
// ----------------------------------------------------------------------------
DeviceUtils::Self * DeviceUtils::Manufacturer(DeviceUtils::Self *self)
{
  int v1;
  int v2;
  int v3;
  typedef char *_g4_t_v5;
  typedef char _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v6)) > _g4_s1 ? (15u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v7)) > _g4_s2 ? (27u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v8)) > _g4_s3 ? (28u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 15u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 27u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  v8[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v8, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v8, 0);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  v1 = JNIEnv::CallStaticObjectMethod(v8[0], DeviceUtils::mClassGLGame, DeviceUtils::mDeviceManufacturer);
  v2 = v8[0];
  v3 = v1;
  v5 = (v3 != 0) ? (char *)G4_VCALL<int>(v2, 676, v3, 0) : nullptr;
  g4_std::string::construct_from_cstr((int)(uintptr_t)self, v5 != nullptr ? v5 : (char *)"", (int)(uintptr_t)&v7);
  if ( v5 != nullptr ) G4_VCALL<void>(v2, 680, v3, v5);
  if ( v3 != 0 ) G4_VCALL<void>(v2, 92, v3);
  if ( v6 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return self;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils::Model  (binary VA: 0x4c6ca0)
// Original: DeviceUtils::Model
// ----------------------------------------------------------------------------
DeviceUtils::Self * DeviceUtils::Model(DeviceUtils::Self *self)
{
  int v1;
  int v2;
  int v3;
  typedef char *_g4_t_v5;
  typedef char _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v6)) > _g4_s1 ? (15u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v7)) > _g4_s2 ? (27u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v8)) > _g4_s3 ? (28u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 15u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 27u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  v8[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v8, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v8, 0);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  v1 = JNIEnv::CallStaticObjectMethod(v8[0], DeviceUtils::mClassGLGame, DeviceUtils::mDeviceModel);
  v2 = v8[0];
  v3 = v1;
  v5 = (v3 != 0) ? (char *)G4_VCALL<int>(v2, 676, v3, 0) : nullptr;
  g4_std::string::construct_from_cstr((int)(uintptr_t)self, v5 != nullptr ? v5 : (char *)"", (int)(uintptr_t)&v7);
  if ( v5 != nullptr ) G4_VCALL<void>(v2, 680, v3, v5);
  if ( v3 != 0 ) G4_VCALL<void>(v2, 92, v3);
  if ( v6 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return self;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils::CarrierName  (binary VA: 0x4c6dd0)
// Original: DeviceUtils::CarrierName
// ----------------------------------------------------------------------------
DeviceUtils::Self * DeviceUtils::CarrierName(DeviceUtils::Self *self)
{
  int v1;
  int v2;
  int v3;
  typedef char *_g4_t_v5;
  typedef char _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v6)) > _g4_s1 ? (15u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v7)) > _g4_s2 ? (27u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v8)) > _g4_s3 ? (28u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 15u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 27u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  v8[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v8, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v8, 0);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  v1 = JNIEnv::CallStaticObjectMethod(v8[0], DeviceUtils::mClassGLGame, DeviceUtils::mCarrierName);
  v2 = v8[0];
  v3 = v1;
  v5 = (v3 != 0) ? (char *)G4_VCALL<int>(v2, 676, v3, 0) : nullptr;
  g4_std::string::construct_from_cstr((int)(uintptr_t)self, v5 != nullptr ? v5 : (char *)"", (int)(uintptr_t)&v7);
  if ( v5 != nullptr ) G4_VCALL<void>(v2, 680, v3, v5);
  if ( v3 != 0 ) G4_VCALL<void>(v2, 92, v3);
  if ( v6 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return self;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils_GetCarrierName  (binary VA: 0x4c6f00)
// Original: DeviceUtils_GetCarrierName
// ----------------------------------------------------------------------------
DeviceUtils::Self * DeviceUtils_GetCarrierName(DeviceUtils::Self *a1)
{
  DeviceUtils::CarrierName(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils::Country  (binary VA: 0x4c6f40)
// Original: DeviceUtils::Country
// ----------------------------------------------------------------------------
DeviceUtils::Self * DeviceUtils::Country(DeviceUtils::Self *self)
{
  int v1;
  int v2;
  int v3;
  typedef char *_g4_t_v5;
  typedef char _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v6)) > _g4_s1 ? (15u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v7)) > _g4_s2 ? (27u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v8)) > _g4_s3 ? (28u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 15u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 27u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  v8[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v8, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v8, 0);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  v1 = JNIEnv::CallStaticObjectMethod(v8[0], DeviceUtils::mClassGLGame, DeviceUtils::mCountry);
  v2 = v8[0];
  v3 = v1;
  v5 = (v3 != 0) ? (char *)G4_VCALL<int>(v2, 676, v3, 0) : nullptr;
  g4_std::string::construct_from_cstr((int)(uintptr_t)self, v5 != nullptr ? v5 : (char *)"", (int)(uintptr_t)&v7);
  if ( v5 != nullptr ) G4_VCALL<void>(v2, 680, v3, v5);
  if ( v3 != 0 ) G4_VCALL<void>(v2, 92, v3);
  if ( v6 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return self;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils_GetCountry  (binary VA: 0x4c7070)
// Original: DeviceUtils_GetCountry
// ----------------------------------------------------------------------------
DeviceUtils::Self * DeviceUtils_GetCountry(DeviceUtils::Self *a1)
{
  DeviceUtils::Country(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils::Region  (binary VA: 0x4c70b0)
// Original: DeviceUtils::Region
// ----------------------------------------------------------------------------
DeviceUtils::Self * DeviceUtils::Region(DeviceUtils::Self *self)
{
  int v1;
  int v2;
  int v3;
  typedef char *_g4_t_v5;
  typedef char _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v6)) > _g4_s1 ? (15u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v7)) > _g4_s2 ? (27u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v8)) > _g4_s3 ? (28u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 15u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 27u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  v8[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v8, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v8, 0);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  v1 = JNIEnv::CallStaticObjectMethod(v8[0], DeviceUtils::mClassGLGame, DeviceUtils::mRegion);
  v2 = v8[0];
  v3 = v1;
  v5 = (v3 != 0) ? (char *)G4_VCALL<int>(v2, 676, v3, 0) : nullptr;
  g4_std::string::construct_from_cstr((int)(uintptr_t)self, v5 != nullptr ? v5 : (char *)"", (int)(uintptr_t)&v7);
  if ( v5 != nullptr ) G4_VCALL<void>(v2, 680, v3, v5);
  if ( v3 != 0 ) G4_VCALL<void>(v2, 92, v3);
  if ( v6 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return self;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils_GetRegion  (binary VA: 0x4c71e0)
// Original: DeviceUtils_GetRegion
// ----------------------------------------------------------------------------
DeviceUtils::Self * DeviceUtils_GetRegion(DeviceUtils::Self *a1)
{
  DeviceUtils::Region(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils::Language  (binary VA: 0x4c7220)
// Original: DeviceUtils::Language
// ----------------------------------------------------------------------------
DeviceUtils::Self * DeviceUtils::Language(DeviceUtils::Self *self)
{
  int v1;
  int v2;
  int v3;
  typedef char *_g4_t_v5;
  typedef char _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v6)) > _g4_s1 ? (15u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v7)) > _g4_s2 ? (27u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v8)) > _g4_s3 ? (28u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 15u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 27u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  v8[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v8, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v8, 0);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  v1 = JNIEnv::CallStaticObjectMethod(v8[0], DeviceUtils::mClassGLGame, DeviceUtils::mLanguage);
  v2 = v8[0];
  v3 = v1;
  v5 = (v3 != 0) ? (char *)G4_VCALL<int>(v2, 676, v3, 0) : nullptr;
  g4_std::string::construct_from_cstr((int)(uintptr_t)self, v5 != nullptr ? v5 : (char *)"", (int)(uintptr_t)&v7);
  if ( v5 != nullptr ) G4_VCALL<void>(v2, 680, v3, v5);
  if ( v3 != 0 ) G4_VCALL<void>(v2, 92, v3);
  if ( v6 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return self;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils_GetLanguage  (binary VA: 0x4c7350)
// Original: DeviceUtils_GetLanguage
// ----------------------------------------------------------------------------
DeviceUtils::Self * DeviceUtils_GetLanguage(DeviceUtils::Self *a1)
{
  DeviceUtils::Language(a1);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils::CPUSerial  (binary VA: 0x4c7390)
// Original: DeviceUtils::CPUSerial
// ----------------------------------------------------------------------------
DeviceUtils::Self * DeviceUtils::CPUSerial(DeviceUtils::Self *self)
{
  int v1;
  int v2;
  int v3;
  typedef char *_g4_t_v5;
  typedef char _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v6)) > _g4_s1 ? (15u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v7)) > _g4_s2 ? (27u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v8)) > _g4_s3 ? (28u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 15u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 27u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  v8[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v8, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v8, 0);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  v1 = JNIEnv::CallStaticObjectMethod(v8[0], DeviceUtils::mClassGLGame, DeviceUtils::mCPUSerial);
  v2 = v8[0];
  v3 = v1;
  v5 = (v3 != 0) ? (char *)G4_VCALL<int>(v2, 676, v3, 0) : nullptr;
  g4_std::string::construct_from_cstr((int)(uintptr_t)self, v5 != nullptr ? v5 : (char *)"", (int)(uintptr_t)&v7);
  if ( v5 != nullptr ) G4_VCALL<void>(v2, 680, v3, v5);
  if ( v3 != 0 ) G4_VCALL<void>(v2, 92, v3);
  if ( v6 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return self;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils::BuildDevice  (binary VA: 0x4c74c0)
// Original: DeviceUtils::BuildDevice
// ----------------------------------------------------------------------------
DeviceUtils::Self * DeviceUtils::BuildDevice(DeviceUtils::Self *self)
{
  int v1;
  int v2;
  int v3;
  typedef char *_g4_t_v5;
  typedef char _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v6)) > _g4_s1 ? (15u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v7)) > _g4_s2 ? (27u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v8)) > _g4_s3 ? (28u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 15u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 27u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  v8[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v8, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v8, 0);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  v1 = JNIEnv::CallStaticObjectMethod(v8[0], DeviceUtils::mClassGLGame, DeviceUtils::mBuildDevice);
  v2 = v8[0];
  v3 = v1;
  v5 = (v3 != 0) ? (char *)G4_VCALL<int>(v2, 676, v3, 0) : nullptr;
  g4_std::string::construct_from_cstr((int)(uintptr_t)self, v5 != nullptr ? v5 : (char *)"", (int)(uintptr_t)&v7);
  if ( v5 != nullptr ) G4_VCALL<void>(v2, 680, v3, v5);
  if ( v3 != 0 ) G4_VCALL<void>(v2, 92, v3);
  if ( v6 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return self;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils::BuildProduct  (binary VA: 0x4c75f0)
// Original: DeviceUtils::BuildProduct
// ----------------------------------------------------------------------------
DeviceUtils::Self * DeviceUtils::BuildProduct(DeviceUtils::Self *self)
{
  int v1;
  int v2;
  int v3;
  typedef char *_g4_t_v5;
  typedef char _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_v6)) > _g4_s1 ? (15u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v7)) > _g4_s2 ? (27u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v8)) > _g4_s3 ? (28u + sizeof(_g4_t_v8)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 15u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 27u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  v8[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v8, 65542) == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v8, 0);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  v1 = JNIEnv::CallStaticObjectMethod(v8[0], DeviceUtils::mClassGLGame, DeviceUtils::mBuildProduct);
  v2 = v8[0];
  v3 = v1;
  v5 = (v3 != 0) ? (char *)G4_VCALL<int>(v2, 676, v3, 0) : nullptr;
  g4_std::string::construct_from_cstr((int)(uintptr_t)self, v5 != nullptr ? v5 : (char *)"", (int)(uintptr_t)&v7);
  if ( v5 != nullptr ) G4_VCALL<void>(v2, 680, v3, v5);
  if ( v3 != 0 ) G4_VCALL<void>(v2, 92, v3);
  if ( v6 != 0 )
    G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return self;
}

// ----------------------------------------------------------------------------
// Function: DeviceUtils_Init  (binary VA: 0x4c7720)
// Original: DeviceUtils_Init
// ----------------------------------------------------------------------------
int DeviceUtils_Init(int a1)
{
  uint32_t *v1;
  void *v2;
  uint32_t *v3;
  void *v4;
  uint32_t *v5;
  void *v6;
  uint32_t *v7;
  void *v8;
  uint32_t *v9;
  void *v10;
  uint32_t *v11;
  void *v12;
  uint32_t *v13;
  void *v14;
  uint32_t *v15;
  void *v16;
  uint32_t *v17;
  void *v18;
  uint32_t *v19;
  void *v20;
  uint32_t *v21;
  void *v22;
  uint32_t *v23;
  void *v24;
  uint32_t *v25;
  void *v26;
  uint32_t *v27;
  void *v28;
  uint32_t *v29;
  void *v30;
  uint32_t *v31;
  void *v32;
  uint32_t *v33;
  void *v34;
  int result;
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
  typedef uint32_t _g4_t_v69[4];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (8u + sizeof(_g4_t_v36)) > _g4_s0 ? (8u + sizeof(_g4_t_v36)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v37)) > _g4_s1 ? (12u + sizeof(_g4_t_v37)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v38)) > _g4_s2 ? (16u + sizeof(_g4_t_v38)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v39)) > _g4_s3 ? (20u + sizeof(_g4_t_v39)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v40)) > _g4_s4 ? (24u + sizeof(_g4_t_v40)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v41)) > _g4_s5 ? (28u + sizeof(_g4_t_v41)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v42)) > _g4_s6 ? (32u + sizeof(_g4_t_v42)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v43)) > _g4_s7 ? (36u + sizeof(_g4_t_v43)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v44)) > _g4_s8 ? (40u + sizeof(_g4_t_v44)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v45)) > _g4_s9 ? (44u + sizeof(_g4_t_v45)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v46)) > _g4_s10 ? (48u + sizeof(_g4_t_v46)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v47)) > _g4_s11 ? (52u + sizeof(_g4_t_v47)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v48)) > _g4_s12 ? (56u + sizeof(_g4_t_v48)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v49)) > _g4_s13 ? (60u + sizeof(_g4_t_v49)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v50)) > _g4_s14 ? (64u + sizeof(_g4_t_v50)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v51)) > _g4_s15 ? (68u + sizeof(_g4_t_v51)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v52)) > _g4_s16 ? (72u + sizeof(_g4_t_v52)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v53)) > _g4_s17 ? (76u + sizeof(_g4_t_v53)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v54)) > _g4_s18 ? (80u + sizeof(_g4_t_v54)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v55)) > _g4_s19 ? (84u + sizeof(_g4_t_v55)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v56)) > _g4_s20 ? (88u + sizeof(_g4_t_v56)) : _g4_s20,
    _g4_s22 = (92u + sizeof(_g4_t_v57)) > _g4_s21 ? (92u + sizeof(_g4_t_v57)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v58)) > _g4_s22 ? (96u + sizeof(_g4_t_v58)) : _g4_s22,
    _g4_s24 = (100u + sizeof(_g4_t_v59)) > _g4_s23 ? (100u + sizeof(_g4_t_v59)) : _g4_s23,
    _g4_s25 = (104u + sizeof(_g4_t_v60)) > _g4_s24 ? (104u + sizeof(_g4_t_v60)) : _g4_s24,
    _g4_s26 = (108u + sizeof(_g4_t_v61)) > _g4_s25 ? (108u + sizeof(_g4_t_v61)) : _g4_s25,
    _g4_s27 = (112u + sizeof(_g4_t_v62)) > _g4_s26 ? (112u + sizeof(_g4_t_v62)) : _g4_s26,
    _g4_s28 = (116u + sizeof(_g4_t_v63)) > _g4_s27 ? (116u + sizeof(_g4_t_v63)) : _g4_s27,
    _g4_s29 = (120u + sizeof(_g4_t_v64)) > _g4_s28 ? (120u + sizeof(_g4_t_v64)) : _g4_s28,
    _g4_s30 = (124u + sizeof(_g4_t_v65)) > _g4_s29 ? (124u + sizeof(_g4_t_v65)) : _g4_s29,
    _g4_s31 = (128u + sizeof(_g4_t_v66)) > _g4_s30 ? (128u + sizeof(_g4_t_v66)) : _g4_s30,
    _g4_s32 = (132u + sizeof(_g4_t_v67)) > _g4_s31 ? (132u + sizeof(_g4_t_v67)) : _g4_s31,
    _g4_s33 = (136u + sizeof(_g4_t_v68)) > _g4_s32 ? (136u + sizeof(_g4_t_v68)) : _g4_s32,
    _g4_s34 = (140u + sizeof(_g4_t_v69)) > _g4_s33 ? (140u + sizeof(_g4_t_v69)) : _g4_s33
  };
  alignas(16) uint8_t _g4_sf[_g4_s34];
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 8u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 12u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 16u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 20u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 24u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 28u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 32u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 36u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 40u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 44u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 48u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 52u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 56u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 60u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 64u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 68u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 72u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 76u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 80u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 84u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 88u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 92u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 96u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 100u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 104u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 108u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 112u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 116u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 120u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 124u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 128u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 132u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 136u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 140u);

  DeviceUtils::init(a1);
  DeviceUtils::DeviceId((DeviceUtils::Self *)&v37);
  v36 = 0;
  v1 = sub_4C0F70(&v36);
  g4_std::string::assign_str(v1, &v37);
  v2 = (void *)(v37 - 12);
  if ( (void *)(v37 - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  DeviceUtils::AndroidId((DeviceUtils::Self *)&v39);
  v38 = 1;
  v3 = sub_4C0F70(&v38);
  g4_std::string::assign_str(v3, &v39);
  v4 = (void *)(v39 - 12);
  if ( (void *)(v39 - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  DeviceUtils::Serial((DeviceUtils::Self *)&v41);
  v40 = 2;
  v5 = sub_4C0F70(&v40);
  g4_std::string::assign_str(v5, &v41);
  v6 = (void *)(v41 - 12);
  if ( (void *)(v41 - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  DeviceUtils::SerialNo((DeviceUtils::Self *)&v43);
  v42 = 3;
  v7 = sub_4C0F70(&v42);
  g4_std::string::assign_str(v7, &v43);
  v8 = (void *)(v43 - 12);
  if ( (void *)(v43 - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v43 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  DeviceUtils::Firmware((DeviceUtils::Self *)&v45);
  v44 = 4;
  v9 = sub_4C0F70(&v44);
  g4_std::string::assign_str(v9, &v45);
  v10 = (void *)(v45 - 12);
  if ( (void *)(v45 - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v10);
  }
  DeviceUtils::MacAddress((DeviceUtils::Self *)&v47);
  v46 = 5;
  v11 = sub_4C0F70(&v46);
  g4_std::string::assign_str(v11, &v47);
  v12 = (void *)(v47 - 12);
  if ( (void *)(v47 - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v47 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v12);
  }
  DeviceUtils::Imei((DeviceUtils::Self *)&v49);
  v48 = 6;
  v13 = sub_4C0F70(&v48);
  g4_std::string::assign_str(v13, &v49);
  v14 = (void *)(v49 - 12);
  if ( (void *)(v49 - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v49 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v14);
  }
  DeviceUtils::HDIDFVString((DeviceUtils::Self *)&v51);
  v50 = 7;
  v15 = sub_4C0F70(&v50);
  g4_std::string::assign_str(v15, &v51);
  v16 = (void *)(v51 - 12);
  if ( (void *)(v51 - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v51 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v16);
  }
  DeviceUtils::HDIDFVVersion((DeviceUtils::Self *)&v53);
  v52 = 8;
  v17 = sub_4C0F70(&v52);
  g4_std::string::assign_str(v17, &v53);
  v18 = (void *)(v53 - 12);
  if ( (void *)(v53 - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v53 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v18);
  }
  DeviceUtils::GLDID((DeviceUtils::Self *)&v55);
  v54 = 9;
  v19 = sub_4C0F70(&v54);
  g4_std::string::assign_str(v19, &v55);
  v20 = (void *)(v55 - 12);
  if ( (void *)(v55 - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v55 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v20);
  }
  DeviceUtils::Name((DeviceUtils::Self *)&v57);
  v56 = 10;
  v21 = sub_4C0F70(&v56);
  g4_std::string::assign_str(v21, &v57);
  v22 = (void *)(v57 - 12);
  if ( (void *)(v57 - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v57 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v22);
  }
  DeviceUtils::Manufacturer((DeviceUtils::Self *)&v59);
  v58 = 12;
  v23 = sub_4C0F70(&v58);
  g4_std::string::assign_str(v23, &v59);
  v24 = (void *)(v59 - 12);
  if ( (void *)(v59 - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v59 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v24);
  }
  DeviceUtils::Model((DeviceUtils::Self *)&v61);
  v60 = 13;
  v25 = sub_4C0F70(&v60);
  g4_std::string::assign_str(v25, &v61);
  v26 = (void *)(v61 - 12);
  if ( (void *)(v61 - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v61 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v26);
  }
  DeviceUtils::CPUSerial((DeviceUtils::Self *)&v63);
  v62 = 11;
  v27 = sub_4C0F70(&v62);
  g4_std::string::assign_str(v27, &v63);
  v28 = (void *)(v63 - 12);
  if ( (void *)(v63 - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v63 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v28);
  }
  DeviceUtils::BuildDevice((DeviceUtils::Self *)&v65);
  v64 = 14;
  v29 = sub_4C0F70(&v64);
  g4_std::string::assign_str(v29, &v65);
  v30 = (void *)(v65 - 12);
  if ( (void *)(v65 - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v65 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v30);
  }
  DeviceUtils::BuildProduct((DeviceUtils::Self *)&v67);
  v66 = 15;
  v31 = sub_4C0F70(&v66);
  g4_std::string::assign_str(v31, &v67);
  v32 = (void *)(v67 - 12);
  if ( (void *)(v67 - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v67 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v32);
  }
  DeviceUtils::GoogleAdId((DeviceUtils::Self *)v69);
  v68 = 16;
  v33 = sub_4C0F70(&v68);
  g4_std::string::assign_str(v33, v69);
  v34 = (void *)(v69[0] - 12);
  if ( (void *)(v69[0] - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v69[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v34);
  }
  result = DeviceUtils::GoogleAdIdStatus();
  DeviceUtils::s_bGoogleAdIdStatus = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: Java_com_gameloft_android_GAND_GloftGGSS_GLUtils_Device_nativeInit  (binary VA: 0x4c7e10)
// Original: Java_com_gameloft_android_GAND_GloftGGSS_GLUtils_Device_nativeInit
// ----------------------------------------------------------------------------
int Java_com_gameloft_android_GAND_GloftGGSS_GLUtils_Device_nativeInit(int a1, int a2)
{
  return DeviceUtils_Init(a2);
}

// ----------------------------------------------------------------------------
// Function: SimplifiedPN::GetDeviceToken  (binary VA: 0x4dbe10)
// Original: SimplifiedPN::GetDeviceToken
// ----------------------------------------------------------------------------
int SimplifiedPN::GetDeviceToken(int a1)
{
  int v1;
  int v3[4];

  v3[0] = 0;
  if ( G4_VCALL<int>(AndroidOS_JavaVM, 24, v3, 65542) != -2 )
    return sub_4C17B0(v3[0], SimplifiedPN::mClassGLGame, SimplifiedPN::mGetDeviceToken, a1);
  G4_VCALL<void>(AndroidOS_JavaVM, 16, v3, 0);
  v1 = sub_4C17B0(v3[0], SimplifiedPN::mClassGLGame, SimplifiedPN::mGetDeviceToken, a1);
  G4_VCALL<void>(AndroidOS_JavaVM, 20);
  return v1;
}

// ----------------------------------------------------------------------------
// Function: SimplifiedPN_GetDeviceToken  (binary VA: 0x4dbf00)
// Original: SimplifiedPN_GetDeviceToken
// ----------------------------------------------------------------------------
int SimplifiedPN_GetDeviceToken(int a1, int a2, int a3)
{
  int DeviceToken;
  int v4;
  char v5;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint32_t _g4_t_v14[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v8)) > _g4_s1 ? (8u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v9)) > _g4_s2 ? (12u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v10)) > _g4_s3 ? (16u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v11)) > _g4_s4 ? (20u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v12)) > _g4_s5 ? (24u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v13)) > _g4_s6 ? (28u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v14)) > _g4_s7 ? (32u + sizeof(_g4_t_v14)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);

  DeviceToken = 1;
  extern uintptr_t g4_CallbackAppReceiver;
  g4_CallbackAppReceiver = (uintptr_t)a2;
  m_CallbackAppCaller = a3;
  if ( a2 == 0 )
    return DeviceToken;
  v14[0] = 0;
  v4 = G4_VCALL<int>(AndroidOS_JavaVM, 24, v14, 65542);
  v5 = 0;
  if ( v4 == -2 )
  {
    G4_VCALL<void>(AndroidOS_JavaVM, 16, v14, 0);
    v5 = 1;
  }
  DeviceToken = 1;
  if ( v14[0] != 0 )
  {
    LOBYTE(v13) = v5;
    DeviceToken = SimplifiedPN::GetDeviceToken(a1);
    v5 = v13;
  }
  if ( v5 == 0 )
    return DeviceToken;
  G4_VCALL<void>(AndroidOS_JavaVM, 20, v7, v8, v9, v10, v11, v12, v13, v14[0], v14[1], v14[2], v14[3]);
  return DeviceToken;
}

// ----------------------------------------------------------------------------
// Function: GetDeviceLanguage  (binary VA: 0x4df720)
// Original: GetDeviceLanguage
// ----------------------------------------------------------------------------
void GetDeviceLanguage()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: GetPhoneDevicePointer  (binary VA: 0x4e1360)
// Original: GetPhoneDevicePointer
// ----------------------------------------------------------------------------
char * GetPhoneDevicePointer()
{
  CGameConfig::Self *v0;

  v0 = (CGameConfig::Self *)CGameConfig::m_instance;
  if ( CGameConfig::m_instance == 0 )
  {
    v0 = (CGameConfig::Self *)opNew(0x200u);
    CGameConfig::Construct(v0);
    CGameConfig::m_instance = (uintptr_t)v0;
  }
  return (char *)v0 + 148;
}

// ----------------------------------------------------------------------------
// Function: CGameConfig::CalculateDevicePower  (binary VA: 0x4e14e0)
// Original: CGameConfig::CalculateDevicePower
// ----------------------------------------------------------------------------
int CGameConfig::CalculateDevicePower(CGameConfig::Self *self)
{
  char *PhoneCPUArchPointer;
  char *PhoneCPUPartPointer;
  float v3; // xmm0_4
  CGameConfig::Self *v4;
  unsigned int v5;
  unsigned int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  void *v11;
  int result;
  void *v13;
  char *v14;
  int v15;
  int v16;
  CGameConfig::Self *v17;
  char *PhoneModelPointer;
  bool v19; // cc
  char *v20;
  char *v21;
  bool v22;
  char *v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25[4];
  typedef int _g4_t_v26[4];
  typedef char _g4_t_dest[48];
  typedef char _g4_t_nptr[60];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v24)) > _g4_s0 ? (0u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v25)) > _g4_s1 ? (4u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v26)) > _g4_s2 ? (20u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_dest)) > _g4_s3 ? (36u + sizeof(_g4_t_dest)) : _g4_s3,
    _g4_s5 = (84u + sizeof(_g4_t_nptr)) > _g4_s4 ? (84u + sizeof(_g4_t_nptr)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 36u);
  _g4_t_nptr &nptr = *reinterpret_cast<_g4_t_nptr *>(_g4_sf + 84u);

  PhoneCPUArchPointer = GetPhoneCPUArchPointer();
  g4_std::string::construct_from_cstr((int)(uintptr_t)v25, (PhoneCPUArchPointer ? PhoneCPUArchPointer : (char *)""), (int)(uintptr_t)&v24);
  PhoneCPUPartPointer = GetPhoneCPUPartPointer();
  g4_std::string::construct_from_cstr((int)(uintptr_t)v26, (PhoneCPUPartPointer ? PhoneCPUPartPointer : (char *)""), (int)(uintptr_t)&v24 + 1);
  v3 = *((float *)self + 87);
  if ( v3 < 1400000.0 )
  {
    if ( v3 < 1200000.0 )
    {
      if ( v3 < 1000000.0 )
      {
        *((uint32_t *)self + 5) = v3 > 0.0;
        v4 = self;
      }
      else
      {
        v4 = self;
        *((uint32_t *)self + 5) = 2;
      }
    }
    else
    {
      v4 = self;
      *((uint32_t *)self + 5) = 3;
    }
  }
  else
  {
    *((uint32_t *)self + 5) = 4;
    v4 = self;
  }
  v5 = 0;
  strcpy(dest, (const char *)v4 + 352);
  while ( 1 )
  {
    v6 = strlen(dest);
    if ( v5 >= v6 )
      break;
    dest[v5] = tolower(dest[v5]);
    ++v5;
  }
  v7 = 0;
  if ( v6 != 0 )
  {
    if ( (uint8_t)(dest[0] - 48) <= 9u )
    {
      v9 = 0;
LABEL_27:
      strcpy(nptr, &dest[v9]);
      v14 = &nptr[strlen(nptr)];
      v15 = 0;
      v16 = v14 - nptr + 1;
      while ( v15 != v16 )
      {
        if ( (uint8_t)(nptr[v15] - 48) > 9u )
        {
          nptr[v15] = 0;
          v7 = atoi(nptr);
          goto LABEL_12;
        }
        ++v15;
      }
    }
    else
    {
      v8 = 0;
      while ( 1 )
      {
        v9 = ++v8;
        if ( v8 == v6 )
          break;
        if ( (uint8_t)(dest[v8] - 48) <= 9u )
          goto LABEL_27;
      }
    }
    v7 = 0;
  }
LABEL_12:
  if ( strstr(dest, "adreno") != nullptr )
  {
    if ( v7 > 204 )
    {
      if ( v7 == 205 )
      {
        v10 = 1;
        *((uint32_t *)self + 6) = 1;
        goto LABEL_19;
      }
      if ( v7 != 220 && v7 != 225 && (unsigned int)(v7 - 305) > 1 )
      {
        v10 = 4;
        *((uint32_t *)self + 6) = 4;
        goto LABEL_19;
      }
LABEL_36:
      v10 = 3;
      *((uint32_t *)self + 6) = 3;
      goto LABEL_19;
    }
LABEL_32:
    v10 = 0;
    *((uint32_t *)self + 6) = 0;
    goto LABEL_19;
  }
  if ( strstr(dest, "powervr") == nullptr )
  {
    if ( strstr(dest, "nvidia ap") != nullptr )
      goto LABEL_54;
    if ( strstr(dest, "mali-t") != nullptr )
    {
      v17 = self;
      if ( v7 > 610 )
        goto LABEL_56;
    }
    else
    {
      if ( strstr(dest, "mali") != nullptr )
      {
        v10 = 3;
        v19 = *((uint32_t *)self + 5) <= 2;
        *((uint32_t *)self + 6) = 3;
        if ( v19 )
        {
          *((uint32_t *)self + 6) = 2;
          LOBYTE(v10) = 2;
        }
        goto LABEL_19;
      }
      if ( strstr(dest, "amd") != nullptr )
      {
        v17 = self;
        if ( v7 == 430 )
          goto LABEL_47;
      }
      else
      {
        if ( strstr(dest, "gc860") != nullptr )
          goto LABEL_32;
        if ( strstr(dest, "gc1000") != nullptr )
          goto LABEL_49;
        if ( strstr(dest, "videocore") != nullptr )
        {
          v10 = 3;
          v22 = *((uint32_t *)self + 5) == 2;
          v19 = *((uint32_t *)self + 5) <= 2;
          *((uint32_t *)self + 6) = 3;
          if ( v19 )
          {
            *((uint32_t *)self + 6) = 2;
            LOBYTE(v10) = 2;
            if ( !v22 )
            {
              *((uint32_t *)self + 6) = 0;
              LOBYTE(v10) = 0;
            }
          }
          goto LABEL_19;
        }
        if ( strstr(dest, "fimg") != nullptr )
        {
          v17 = self;
          goto LABEL_47;
        }
        v23 = strstr(dest, "nvidia tegra");
        v17 = self;
        if ( v23 != nullptr )
        {
          if ( *((int *)self + 5) <= 2 )
            goto LABEL_50;
          if ( v7 != 3 && sub_1937E60((int)(uintptr_t)v25, "0x41", 0) != -1 && sub_1937E60((int)(uintptr_t)v26, "0xc0f", 0) != -1
            || sub_1937E60((int)(uintptr_t)v25, "0x4e", 0) != -1 )
          {
            v17 = self;
            goto LABEL_56;
          }
          if ( v7 == 3 || sub_1937E60((int)(uintptr_t)v25, "0x41", 0) != -1 && sub_1937E60((int)(uintptr_t)v26, "0xc09", 0) != -1 )
            goto LABEL_36;
LABEL_54:
          v17 = self;
          goto LABEL_44;
        }
      }
    }
    *((uint32_t *)v17 + 6) = 3;
    v10 = 3;
    goto LABEL_19;
  }
  if ( strstr(dest, "sgx") == nullptr )
  {
    if ( strstr(dest, "rogue") == nullptr && (strchr(dest, 103) == nullptr || strchr(dest, 54) == nullptr) )
    {
      v10 = *((uint32_t *)self + 6);
      goto LABEL_19;
    }
    g_isPowerVR6Series = 1;
    goto LABEL_36;
  }
  if ( v7 > 540 )
  {
    PhoneModelPointer = GetPhoneModelPointer();
    if ( strstr(PhoneModelPointer, "GT-P5210") != nullptr )
    {
LABEL_49:
      v17 = self;
LABEL_50:
      *((uint32_t *)v17 + 6) = 2;
      v10 = 2;
      goto LABEL_19;
    }
    v20 = GetPhoneModelPointer();
    v21 = strstr(v20, "GT-I9260");
    v17 = self;
    if ( v21 != nullptr )
      goto LABEL_50;
LABEL_56:
    *((uint32_t *)v17 + 6) = 4;
    v10 = 4;
    goto LABEL_19;
  }
  v17 = self;
  if ( v7 != 540 )
  {
    if ( v7 > 530 )
    {
LABEL_44:
      *((uint32_t *)v17 + 6) = 1;
      v10 = 1;
      goto LABEL_19;
    }
LABEL_47:
    *((uint32_t *)v17 + 6) = 0;
    v10 = 0;
    goto LABEL_19;
  }
  v19 = *((uint32_t *)self + 5) <= 2;
  *((uint32_t *)self + 6) = 2;
  v10 = 2;
  if ( v19 )
  {
    *((uint32_t *)self + 6) = 1;
    LOBYTE(v10) = 1;
  }
LABEL_19:
  *((uint32_t *)self + 7) = v10;
  v11 = (void *)(v26[0] - 12);
  if ( (void *)(v26[0] - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v26[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v11);
  }
  result = v25[0];
  v13 = (void *)(v25[0] - 12);
  if ( (void *)(v25[0] - 12) != &unk_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v25[0] - 4), 0xFFFFFFFF) <= 0 )
  {
  {
    g4_std::string::Rep::M_destroy(v13);
    return result;
  }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: CGameConfig::GetDeviceFamily  (binary VA: 0x4e1c70)
// Original: CGameConfig::GetDeviceFamily
// ----------------------------------------------------------------------------
CGameConfig::Self * CGameConfig::GetDeviceFamily(CGameConfig::Self *self, CGameConfig::Self *a2)
{
  unsigned int UserConfig;
  CGameConfig::Self *v3;
  int v4;
  char *PhoneGPUNamePointer;
  char *PhoneCPUNamePointer;
  char *PhoneCPUArchPointer;
  char *PhoneCPUPartPointer;
  char *RAMProfile;
  char *v10;
  uint8_t *v11;
  int v12;
  char *PhoneModelPointer;
  char *v14;
  char *v15;
  char *v16;
  char *v17;
  int v18;
  CGameConfig::Self *v19;
  char *v20;
  char *v21;
  char *v22;
  char *v23;
  char *v24;
  char *v25;
  bool v26;
  char *v27;
  char *v28;
  char *v29;
  char *v30;
  void *v31;
  void *v32;
  void *v33;
  void *v34;
  void *v35;
  char *v37;
  char *v38;
  char *v39;
  char *v40;
  char *v41;
  char *v42;
  char *v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47[4];
  typedef int _g4_t_v48[4];
  typedef int _g4_t_v49[4];
  typedef int _g4_t_v50[4];
  typedef int _g4_t_v51[7];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v44)) > _g4_s0 ? (4u + sizeof(_g4_t_v44)) : _g4_s0,
    _g4_s2 = (14u + sizeof(_g4_t_v45)) > _g4_s1 ? (14u + sizeof(_g4_t_v45)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v46)) > _g4_s2 ? (16u + sizeof(_g4_t_v46)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v47)) > _g4_s3 ? (24u + sizeof(_g4_t_v47)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v48)) > _g4_s4 ? (40u + sizeof(_g4_t_v48)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v49)) > _g4_s5 ? (56u + sizeof(_g4_t_v49)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v50)) > _g4_s6 ? (72u + sizeof(_g4_t_v50)) : _g4_s6,
    _g4_s8 = (88u + sizeof(_g4_t_v51)) > _g4_s7 ? (88u + sizeof(_g4_t_v51)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 4u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 14u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 16u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 24u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 40u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 56u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 72u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 88u);

  *((uint8_t *)a2 + 60) = 1;
  nativeReloadInfo();
  GetWindowWidth();
  get_mem_total();
  GetAvaliableRAM();
  GetNumberOfCores();
  UserConfig = CGameConfig::GetUserConfig(a2);
  v3 = a2;
  if ( UserConfig == -1 )
  {
    CGameConfig::CalculateDevicePower(a2);
    v3 = a2;
    v4 = *((uint32_t *)a2 + 7);
    *((uint32_t *)a2 + 3) = v4;
  }
  else
  {
    v4 = *((uint32_t *)a2 + 7);
  }
  *((uint32_t *)v3 + 8) = v4;
  PhoneGPUNamePointer = GetPhoneGPUNamePointer();
  g4_std::string::construct_from_cstr((int)(uintptr_t)v47, (PhoneGPUNamePointer ? PhoneGPUNamePointer : (char *)""), (int)(uintptr_t)&v45);
  PhoneCPUNamePointer = GetPhoneCPUNamePointer();
  g4_std::string::construct_from_cstr((int)(uintptr_t)v48, (PhoneCPUNamePointer ? PhoneCPUNamePointer : (char *)""), (int)(uintptr_t)&v45 + 1);
  PhoneCPUArchPointer = GetPhoneCPUArchPointer();
  g4_std::string::construct_from_cstr((int)(uintptr_t)v49, (PhoneCPUArchPointer ? PhoneCPUArchPointer : (char *)""), (int)(uintptr_t)&v46);
  PhoneCPUPartPointer = GetPhoneCPUPartPointer();
  g4_std::string::construct_from_cstr((int)(uintptr_t)v50, (PhoneCPUPartPointer ? PhoneCPUPartPointer : (char *)""), (int)(uintptr_t)&v46 + 1);
  RAMProfile = (char *)CGameConfig::GetRAMProfile(a2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)v51, (RAMProfile ? RAMProfile : (char *)""), (int)(uintptr_t)&v46 + 2);
  *(uint32_t *)self = (uint32_t)(uintptr_t)&unk_213B814;
  g4_std::string::clear(self, 0, dword_213B808[0], 0);
  v10 = (char *)v47[0];
  if ( *(int *)(v47[0] - 4) < 0 )
  {
    v11 = (uint8_t *)v47[0];
LABEL_89:
    v44 = (int)(uintptr_t)&v10[*((uint32_t *)v10 - 3)];
    goto LABEL_8;
  }
  sub_19397C0(v47);
  v11 = (uint8_t *)v47[0];
  if ( *(int *)(v47[0] - 4) < 0 )
  {
    v10 = (char *)v47[0];
    goto LABEL_89;
  }
  sub_19397C0(v47);
  v10 = (char *)v47[0];
  v44 = v47[0] + *(uint32_t *)(v47[0] - 12);
  if ( *(int *)(v47[0] - 4) >= 0 )
  {
    sub_19397C0(v47);
    v10 = (char *)v47[0];
  }
LABEL_8:
  while ( v10 != (char *)v44 )
  {
    v12 = *v10++;
    *v11++ = tolower(v12);
  }
  GetPhoneModelPointer();
  PhoneModelPointer = GetPhoneModelPointer();
  if ( strstr(PhoneModelPointer, "I9082") != nullptr )
  {
    *((uint32_t *)a2 + 7) = 2;
    *((uint32_t *)a2 + 3) = 2;
  }
  v14 = GetPhoneModelPointer();
  if ( strstr(v14, "LG-P990") != nullptr )
    isLowEndCPU = 1;
  v15 = GetPhoneModelPointer();
  if ( strstr(v15, "ST25i") != nullptr )
    isLowEndCPU = 1;
  if ( (g4_std::string::find(v47, "mali", 0, 4) != -1 || g4_std::string::find(v47, "videocore", 0, 9) != -1) && *((uint32_t *)a2 + 7) == 3 )
    g4_std::string::assign((int)(uintptr_t)self, "android_mali", 0xCu);
  if ( (g4_std::string::find(v47, "mali", 0, 4) != -1 || g4_std::string::find(v47, "videocore", 0, 9) != -1) && *((uint32_t *)a2 + 7) == 2 )
    g4_std::string::assign((int)(uintptr_t)self, "mali_slow", 9u);
  if ( g4_std::string::find(v47, "mali", 0, 4) != -1 && g4_std::string::find(v47, "628", 0, 3) != -1 && *((uint32_t *)a2 + 7) == 4 )
  {
    g_extIsMaliT628 = 1;
    g4_std::string::assign((int)(uintptr_t)self, "mali_t628", 9u);
  }
  if ( g4_std::string::find(v47, "mali", 0, 4) != -1 && g4_std::string::find(v47, "604", 0, 3) != -1 )
    g4_std::string::assign((int)(uintptr_t)self, "mali_t604", 9u);
  v16 = GetPhoneModelPointer();
  if ( strstr(v16, "HTC6435LVW") != nullptr )
    g4_std::string::assign((int)(uintptr_t)self, "android_adreno320", 0x11u);
  if ( g4_std::string::find(v47, "adreno", 0, 6) != -1
    && (g4_std::string::find(v47, "330", 0, 3) != -1 || g4_std::string::find(v47, "420", 0, 3) != -1)
    && *((uint32_t *)a2 + 7) == 4 )
  {
    g4_std::string::assign((int)(uintptr_t)self, "android_adreno330", 0x11u);
  }
  if ( g4_std::string::find(v47, "sgx", 0, 3) != -1 && g4_std::string::find(v47, "540", 0, 3) != -1 && *((int *)a2 + 7) <= 2 )
  {
    v17 = GetPhoneModelPointer();
    if ( strstr(v17, "DROID4") != nullptr )
      g4_std::string::assign((int)(uintptr_t)self, "androidlow", 0xAu);
    else
      g4_std::string::assign((int)(uintptr_t)self, "android_sgx540", 0xEu);
  }
  if ( g4_std::string::find(v47, "adreno", 0, 6) != -1 && g4_std::string::find(v47, "320", 0, 3) != -1 && *((uint32_t *)a2 + 7) == 4 )
  {
    v38 = GetPhoneModelPointer();
    if ( strstr(v38, "GT-I9505") != nullptr )
      g4_std::string::assign((int)(uintptr_t)self, "android_adreno320_s4", 0x14u);
    else
      g4_std::string::assign((int)(uintptr_t)self, "android_adreno320", 0x11u);
  }
  if ( g4_std::string::find(v47, "adreno", 0, 6) != -1
    && *((uint32_t *)a2 + 7) == 3
    && (g4_std::string::find(v47, "225", 0, 3) != -1 || g4_std::string::find(v47, "220", 0, 3) != -1) )
  {
    g4_std::string::assign((int)(uintptr_t)self, "android_adreno225", 0x11u);
  }
  v18 = g4_std::string::find(v47, "adreno", 0, 6);
  v19 = a2;
  if ( v18 != -1 )
  {
    if ( *((uint32_t *)a2 + 7) != 3 )
      goto LABEL_46;
    if ( g4_std::string::find(v47, "305", 0, 3) != -1 || g4_std::string::find(v47, "306", 0, 3) != -1 )
      g4_std::string::assign((int)(uintptr_t)self, "android_adreno305", 0x11u);
    v19 = a2;
  }
  if ( *((uint32_t *)v19 + 7) == 3
    && (g4_std::string::find(v47, "tegra", 0, 5) != -1 && g4_std::string::find(v47, "3", 0, 1) != -1
     || g4_std::string::find(v47, "tegra", 0, 5) != -1
     && g4_std::string::find(v49, "0x41", 0, 4) != -1
     && g4_std::string::find(v50, "0xc09", 0, 5) != -1) )
  {
    g4_std::string::assign((int)(uintptr_t)self, "androidTegra3", 0xDu);
    v37 = GetPhoneModelPointer();
    if ( strstr(v37, "HTC One X") != nullptr || (v42 = GetPhoneModelPointer(), strstr(v42, "Nexus 7") != nullptr) )
      g4_std::string::assign((int)(uintptr_t)self, "androidmedium", 0xDu);
  }
LABEL_46:
  v20 = GetPhoneModelPointer();
  if ( strstr(v20, "SHIELD Tablet") != nullptr || (v39 = GetPhoneModelPointer(), strstr(v39, "Nexus 9") != nullptr) )
  {
    if ( forceChangeProfile != 0 )
    {
      *((uint32_t *)a2 + 7) = 4;
      g4_std::string::assign((int)(uintptr_t)self, "androidTegraK1", 0xEu);
      CGameConfig::GetUserProfile(a2, *((uint32_t *)a2 + 7));
    }
  }
  v21 = GetPhoneModelPointer();
  if ( strstr(v21, "SHIELD Tablet") != nullptr || (v40 = GetPhoneModelPointer(), strstr(v40, "Nexus 9") != nullptr) )
  {
    if ( *((uint32_t *)a2 + 7) == 4 )
      g4_std::string::assign((int)(uintptr_t)self, "androidTegraK1", 0xEu);
  }
  if ( g4_std::string::find(v47, "sgx", 0, 3) != -1 && g4_std::string::find(v47, "544", 0, 3) != -1 && *((uint32_t *)a2 + 7) != 2 )
  {
    v22 = GetPhoneModelPointer();
    if ( strstr(v22, "GT-I9500") != nullptr )
    {
      g4_std::string::assign((int)(uintptr_t)self, "sgx_544_s4", 0xAu);
    }
    else
    {
      g4_std::string::assign((int)(uintptr_t)self, "sgx_544_kindle", 0xEu);
      v43 = GetPhoneModelPointer();
      if ( strstr(v43, "KFJWI") != nullptr )
        g4_std::string::assign((int)(uintptr_t)self, "androidmedium", 0xDu);
    }
  }
  v23 = GetPhoneModelPointer();
  if ( strstr(v23, "GT-P5210") != nullptr || (v41 = GetPhoneModelPointer(), strstr(v41, "GT-I9260") != nullptr) )
    g4_std::string::assign((int)(uintptr_t)self, "androidmedium", 0xDu);
  if ( g4_std::string::find(v47, "baytrail", 0, 8) != -1 )
    g4_std::string::assign((int)(uintptr_t)self, "androidmedium", 0xDu);
  v24 = GetPhoneModelPointer();
  if ( strstr(v24, "E970") != nullptr )
    g4_std::string::assign((int)(uintptr_t)self, "androidmedium", 0xDu);
  v25 = GetPhoneModelPointer();
  if ( strstr(v25, "BNTV400") != nullptr )
  {
    v26 = *((uint32_t *)a2 + 7) == 4;
    *((uint32_t *)a2 + 3) = 3;
    if ( v26 )
      *((uint32_t *)a2 + 7) = 3;
  }
  if ( g4_std::string::find(v47, "gc1000", 0, 6) != -1 )
    g4_std::string::assign((int)(uintptr_t)self, "vivantelow", 0xAu);
  v27 = GetPhoneModelPointer();
  if ( strstr(v27, "HT7S3") != nullptr )
    g4_std::string::assign((int)(uintptr_t)self, "mali_slow", 9u);
  v28 = GetPhoneModelPointer();
  if ( strstr(v28, "GT-P6200") != nullptr )
  {
    g4_std::string::assign((int)(uintptr_t)self, "mali_slow", 9u);
    *((uint32_t *)a2 + 3) = 2;
    *((uint32_t *)a2 + 7) = 2;
  }
  v29 = GetPhoneModelPointer();
  if ( strstr(v29, "SAMSUNG-SGH-I957") != nullptr )
  {
    g4_std::string::assign((int)(uintptr_t)self, "androidmedium", 0xDu);
    *((uint32_t *)a2 + 3) = 2;
    *((uint32_t *)a2 + 7) = 2;
  }
  if ( g_isPowerVR6Series != 0 )
    g4_std::string::assign((int)(uintptr_t)self, "android_power_vr_6", 0x12u);
  v30 = GetPhoneModelPointer();
  if ( strstr(v30, "ST25i") != nullptr )
    *((uint32_t *)a2 + 3) = 1;
  if ( *(uint32_t *)(*(uint32_t *)self - 12) == 0 )
  {
    switch ( *((uint32_t *)a2 + 7) )
    {
      case 0:
        g4_std::string::assign((int)(uintptr_t)self, "androidlowend", 0xDu);
        break;
      case 1:
        g4_std::string::assign((int)(uintptr_t)self, "androidlow", 0xAu);
        break;
      case 2:
        g4_std::string::assign((int)(uintptr_t)self, "androidmedium", 0xDu);
        break;
      case 3:
        g4_std::string::assign((int)(uintptr_t)self, "androidhigh", 0xBu);
        break;
      case 4:
        g4_std::string::assign((int)(uintptr_t)self, "androidultra", 0xCu);
        break;
      case 6:
        g4_std::string::assign((int)(uintptr_t)self, "androidultraalter", 0x11u);
        break;
      default:
        g4_std::string::assign((int)(uintptr_t)self, "lgsu660", 7u);
        break;
    }
  }
  v31 = (void *)(v51[0] - 12);
  if ( (uint32_t *)(v51[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v51[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v31);
  }
  v32 = (void *)(v50[0] - 12);
  if ( (uint32_t *)(v50[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v50[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v32);
  }
  v33 = (void *)(v49[0] - 12);
  if ( (uint32_t *)(v49[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v49[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v33);
  }
  v34 = (void *)(v48[0] - 12);
  if ( (uint32_t *)(v48[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v48[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v34);
  }
  v35 = (void *)(v47[0] - 12);
  if ( (uint32_t *)(v47[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v47[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v35);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: getDeviceUserAgent  (binary VA: 0x4e4a80)
// Original: getDeviceUserAgent
// ----------------------------------------------------------------------------
int getDeviceUserAgent()
{
  return device_user_agent;
}

// ----------------------------------------------------------------------------
// Function: getDeviceIMEI  (binary VA: 0x4e4aa0)
// Original: getDeviceIMEI
// ----------------------------------------------------------------------------
int getDeviceIMEI()
{
  return device_IMEI;
}

// ----------------------------------------------------------------------------
// Function: getDeviceRooted  (binary VA: 0x4e4b10)
// Original: getDeviceRooted
// ----------------------------------------------------------------------------
int getDeviceRooted()
{
  int result;

  result = 0;
  if ( dword_20D1650 != 0 )
  {
    mEnv = (uint32_t)(uintptr_t)NVThreadGetCurrentJNIEnv();
    return G4_VCALL<int>(mEnv, 516, dword_20D1644, dword_20D1650);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: nativeGetDeviceIdentifier  (binary VA: 0x4e60a0)
// Original: nativeGetDeviceIdentifier
// ----------------------------------------------------------------------------
char * nativeGetDeviceIdentifier()
{
  char *result;
  int v1;
  const char *src;
  char dest[52];

  result = (char *)NVThreadGetCurrentJNIEnv();
  mEnv = (uint32_t)(uintptr_t)result;
  if ( dword_20D16E8 != 0 )
  {
    v1 = G4_VCALL<int>(result, 456, dword_20D1644, dword_20D16E8);
    src = (const char *)G4_VCALL<int>(mEnv, 676, v1, 0);
    result = (char *)&unk_1B15112;
    if ( src != nullptr )
    {
      strcpy(dest, src);
      G4_VCALL<void>(mEnv, 680, v1, src);
      return dest;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: nativeGetDeviceMAC  (binary VA: 0x4e6170)
// Original: nativeGetDeviceMAC
// ----------------------------------------------------------------------------
char * nativeGetDeviceMAC()
{
  char *result;
  int v1;
  const char *src;
  char dest[52];

  result = (char *)NVThreadGetCurrentJNIEnv();
  mEnv = (uint32_t)(uintptr_t)result;
  if ( dword_20D16F0 != 0 )
  {
    v1 = G4_VCALL<int>(result, 456, dword_20D1644, dword_20D16F0);
    src = (const char *)G4_VCALL<int>(mEnv, 676, v1, 0);
    result = (char *)&unk_1B15112;
    if ( src != nullptr )
    {
      strcpy(dest, src);
      G4_VCALL<void>(mEnv, 680, v1, src);
      return dest;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: nativeGetDeviceID  (binary VA: 0x4e6330)
// Original: nativeGetDeviceID
// ----------------------------------------------------------------------------
int nativeGetDeviceID()
{
  int result;
  int v1;
  const char *src;
  char *dest;

  result = (int)(uintptr_t)NVThreadGetCurrentJNIEnv();
  mEnv = (uint32_t)(uintptr_t)result;
  if ( dword_20D1720 != 0 )
  {
    v1 = G4_VCALL<int>(result, 456, dword_20D1644, dword_20D1720);
    result = G4_VCALL<int>(mEnv, 676, v1, 0);
    src = (const char *)result;
    if ( result != 0 )
    {
      GetPhoneIDPointer();
      dest = GetPhoneIDPointer();
      strcpy(dest, src);
      return G4_VCALL<int>(mEnv, 680, v1, src);
    }
  }
  return result;
}

