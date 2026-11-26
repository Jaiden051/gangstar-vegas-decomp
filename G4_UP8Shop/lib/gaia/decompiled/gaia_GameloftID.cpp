#include "Core/Utils/DecompTypes.h"
#include "gaia_GameloftID.h"

// ----------------------------------------------------------------------------
// Function: gaia::GameloftID::Android_GetKeynameStore_FirstLanchMarker  (binary VA: 0x14d04f0)
// Original: gaia::GameloftID::Android_GetKeynameStore_FirstLanchMarker
// ----------------------------------------------------------------------------
gaia::GameloftID::Self * gaia::GameloftID::Android_GetKeynameStore_FirstLanchMarker(gaia::GameloftID::Self *self)
{
  void *v1;
  uint16_t v3[3];

  g4_std::string::construct_from_cstr((int)(uintptr_t)(self), (char *)&unk_1B15112, (int)(uintptr_t)(v3));
  GameUtils_GetGameName((int)(uintptr_t)(&v3[1]));
  g4_std::string::append_str(self, &v3[1]);
  v1 = (void *)(*(uint32_t *)&v3[1] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v3[1] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v3[1] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v1);
  }
  g4_std::string::append((int)(uintptr_t)(self), "_GAIA_FIRST_LAUNCH", 0x12u);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::GameloftID::Android_GetKeynameStore_for_anonymous_GLUID  (binary VA: 0x14d05b0)
// Original: gaia::GameloftID::Android_GetKeynameStore_for_anonymous_GLUID
// ----------------------------------------------------------------------------
gaia::GameloftID::Self * gaia::GameloftID::Android_GetKeynameStore_for_anonymous_GLUID(gaia::GameloftID::Self *self)
{
  void *v1;
  uint16_t v3[3];

  g4_std::string::construct_from_cstr((int)(uintptr_t)(self), (char *)&unk_1B15112, (int)(uintptr_t)(v3));
  GameUtils_GetGameName((int)(uintptr_t)(&v3[1]));
  g4_std::string::append_str(self, &v3[1]);
  v1 = (void *)(*(uint32_t *)&v3[1] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v3[1] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v3[1] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v1);
  }
  g4_std::string::append((int)(uintptr_t)(self), "_GAIA_ANON_GLUID", 0x10u);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::GameloftID::Android_GetKeynameStore_for_encryption_GLUID  (binary VA: 0x14d0670)
// Original: gaia::GameloftID::Android_GetKeynameStore_for_encryption_GLUID
// ----------------------------------------------------------------------------
gaia::GameloftID::Self * gaia::GameloftID::Android_GetKeynameStore_for_encryption_GLUID(gaia::GameloftID::Self *self)
{
  void *v1;
  uint16_t v3[3];

  g4_std::string::construct_from_cstr((int)(uintptr_t)(self), (char *)&unk_1B15112, (int)(uintptr_t)(v3));
  GameUtils_GetGameName((int)(uintptr_t)(&v3[1]));
  g4_std::string::append_str(self, &v3[1]);
  v1 = (void *)(*(uint32_t *)&v3[1] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v3[1] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v3[1] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v1);
  }
  g4_std::string::append((int)(uintptr_t)(self), "_GAIA_ENC_KEY_GLUID", 0x13u);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::GameloftID::Android_IsFirstRun  (binary VA: 0x14d0730)
// Original: gaia::GameloftID::Android_IsFirstRun
// ----------------------------------------------------------------------------
int gaia::GameloftID::Android_IsFirstRun()
{
  int isSharedValue;
  char *v1;
  typedef uint8_t _g4_t_v3;
  typedef DataSharing::Self *_g4_t_v4;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v4)) > _g4_s1 ? (28u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 28u);

  gaia::GameloftID::Android_GetKeynameStore_FirstLanchMarker((gaia::GameloftID::Self *)&v4);
  isSharedValue = DataSharing_isSharedValue(v4);
  v1 = (char *)v4 - 12;
  if ( (uint32_t *)((char *)v4 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)v4 - 1, 0xFFFFFFFF) <= 0 )
  {
    v3 = isSharedValue;
    g4_std::string::Rep::M_destroy(v1);
    isSharedValue = v3;
  }
  return isSharedValue ^ 1;
}

// ----------------------------------------------------------------------------
// Function: gaia::GameloftID::Android_MarkAsSecondRun  (binary VA: 0x14d07b0)
// Original: gaia::GameloftID::Android_MarkAsSecondRun
// ----------------------------------------------------------------------------
DataSharing::Self * gaia::GameloftID::Android_MarkAsSecondRun()
{
  DataSharing::Self *result;
  char *v1;
  typedef DataSharing::Self *_g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  gaia::GameloftID::Android_GetKeynameStore_FirstLanchMarker((gaia::GameloftID::Self *)&v2);
  DataSharing_setSharedValue(v2, (DataSharing::Self *)"false");
  result = v2;
  v1 = (char *)v2 - 12;
  if ( (uint32_t *)((char *)v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)v2 - 1, 0xFFFFFFFF) <= 0 )
  {
    return (g4_std::string::Rep::M_destroy(v1), (DataSharing::Self *)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::GameloftID::Android_DeleteSavedGLUID_UnderKeyName  (binary VA: 0x14d0820)
// Original: gaia::GameloftID::Android_DeleteSavedGLUID_UnderKeyName
// ----------------------------------------------------------------------------
int gaia::GameloftID::Android_DeleteSavedGLUID_UnderKeyName(DataSharing::Self **a1)
{
  return DataSharing_deleteSharedValue(*a1);
}

// ----------------------------------------------------------------------------
// Function: gaia::GameloftID::Android_GetSavedGLUID_UnderKeyName  (binary VA: 0x14d0850)
// Original: gaia::GameloftID::Android_GetSavedGLUID_UnderKeyName
// ----------------------------------------------------------------------------
unsigned int gaia::GameloftID::Android_GetSavedGLUID_UnderKeyName(int a1, DataSharing::Self **a2)
{
  unsigned int v2;
  typedef int _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  DataSharing_getSharedValue((DataSharing::Self *)&v4, *a2);
  if ( (uint8_t)DataSharing_isSharedValue(*a2) != 0 )
  {
    if ( *(uint32_t *)(v4 - 12) != 0 )
    {
      v2 = (uint8_t)gaia::GLUID::Deserialize(a1, &v4) == 0 ? 0xFFFFFC18 : 0;
    }
    else
    {
      v2 = 404;
      DataSharing_deleteSharedValue(*a2);
    }
  }
  else
  {
    v2 = 404;
    G4_PlatformLog(4, "HEI", "%d", 0);
  }
  g4_std::string::Destroy(&v4);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gaia::GameloftID::Android_SaveGLUID_UnderKeyName  (binary VA: 0x14d0920)
// Original: gaia::GameloftID::Android_SaveGLUID_UnderKeyName
// ----------------------------------------------------------------------------
int gaia::GameloftID::Android_SaveGLUID_UnderKeyName(int *a1, DataSharing::Self **a2)
{
  Json::Value::Self *v2;
  Json::Value::Self *v3;
  Json::Value::Self *v4;
  Json::Value::Self *v5;
  Json::Value::Self *v6;
  Json::Value::Self *v7;
  void *v8;
  void *v9;
  typedef int _g4_t_v11;
  typedef DataSharing::Self *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef void (**_g4_t_v15)(Json::FastWriter::Self *);
  typedef uint8_t _g4_t_v16[8];
  typedef uint8_t _g4_t_v17[16];
  typedef uint8_t _g4_t_v18[16];
  typedef uint8_t _g4_t_v19[16];
  typedef uint8_t _g4_t_v20[16];
  typedef uint8_t _g4_t_v21[16];
  typedef uint8_t _g4_t_v22[16];
  typedef uint8_t _g4_t_v23[44];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (4u + sizeof(_g4_t_v11)) > _g4_s0 ? (4u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v12)) > _g4_s1 ? (8u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v13)) > _g4_s2 ? (12u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v14)) > _g4_s3 ? (16u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v15)) > _g4_s4 ? (20u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v16)) > _g4_s5 ? (24u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v17)) > _g4_s6 ? (32u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v18)) > _g4_s7 ? (48u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v19)) > _g4_s8 ? (64u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v20)) > _g4_s9 ? (80u + sizeof(_g4_t_v20)) : _g4_s9,
    _g4_s11 = (96u + sizeof(_g4_t_v21)) > _g4_s10 ? (96u + sizeof(_g4_t_v21)) : _g4_s10,
    _g4_s12 = (112u + sizeof(_g4_t_v22)) > _g4_s11 ? (112u + sizeof(_g4_t_v22)) : _g4_s11,
    _g4_s13 = (128u + sizeof(_g4_t_v23)) > _g4_s12 ? (128u + sizeof(_g4_t_v23)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 64u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 80u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 96u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 112u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 128u);

  Json::Value::Construct((int)(uintptr_t)(v17), nullptr);
  Json::FastWriter::Construct((Json::FastWriter::Self *)&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), (char *)&unk_1B15112, (int)(uintptr_t)(&v11) + 1);
  glwebtools::Codec::EncodeBase64((int)(uintptr_t)(a1 + 1), 0x10u, &v13, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), (char *)&unk_1B15112, (int)(uintptr_t)(&v11));
  glwebtools::Codec::EncodeBase64(a1[6], *(uint32_t *)(a1[6] - 12), &v14, 0);
  Json::Value::Construct((int)(uintptr_t)(v23), a1 + 5);
  v2 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v17, "pck_name");
  Json::Value::opAssign(v2, (const Json::Value::Self *)v23);
  Json::Value::Destroy((Json::Value::Self *)v23);
  Json::Value::Construct((int)(uintptr_t)(v22), &v13);
  v3 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v17, "data");
  Json::Value::opAssign(v3, (const Json::Value::Self *)v22);
  Json::Value::Destroy((Json::Value::Self *)v22);
  Json::Value::Construct((int)(uintptr_t)(v21), &v14);
  v4 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v17, "password");
  Json::Value::opAssign(v4, (const Json::Value::Self *)v21);
  Json::Value::Destroy((Json::Value::Self *)v21);
  Json::Value::Construct((Json::Value::Self *)v20, *a1);
  v5 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v17, "ver");
  Json::Value::opAssign(v5, (const Json::Value::Self *)v20);
  Json::Value::Destroy((Json::Value::Self *)v20);
  Json::Value::Construct((Json::Value::Self *)v19, a1[7]);
  v6 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v17, "gen");
  Json::Value::opAssign(v6, (const Json::Value::Self *)v19);
  Json::Value::Destroy((Json::Value::Self *)v19);
  Json::Value::Construct((int)(uintptr_t)(v18), a1 + 8);
  v7 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v17, "time");
  Json::Value::opAssign(v7, (const Json::Value::Self *)v18);
  Json::Value::Destroy((Json::Value::Self *)v18);
  Json::FastWriter::write((Json::FastWriter::Self *)&v12, (const Json::Value::Self *)&v15, (Json::Value::Self *)v17);
  v8 = (void *)(v14 - 12);
  if ( (uint32_t *)(v14 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  v9 = (void *)(v13 - 12);
  if ( (uint32_t *)(v13 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  v15 = (void (**)(Json::FastWriter::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2091B78));
  g4_std::string::Destroy(v16);
  Json::Writer::Destroy((Json::Writer::Self *)&v15);
  Json::Value::Destroy((Json::Value::Self *)v17);
  DataSharing_setSharedValue(*a2, v12);
  { g4_std::string::Destroy(&v12); return 0; }
}

// ----------------------------------------------------------------------------
// Function: gaia::GameloftID::Android_Generate_GLUID_IMEI  (binary VA: 0x14d0c20)
// Original: gaia::GameloftID::Android_Generate_GLUID_IMEI
// ----------------------------------------------------------------------------
gaia::GameloftID::Self * gaia::GameloftID::Android_Generate_GLUID_IMEI(gaia::GameloftID::Self *self)
{
  int *GLUID;
  int v2;
  int v3;
  int v4;
  gaia::GameloftID::Self *v5;
  int v6;
  unsigned int v7;
  int v8;
  int v9;
  int v10;
  int v12;
  char v13;
  int v14;
  int v15;
  int v16;
  int v17;

  G4_PlatformLog(4, "HEI", "%d", 0);
  GLUID = (int *)getGLUID();
  v2 = *GLUID;
  if ( *GLUID < 0 )
  {
    v14 = 0x7FFFFFFF - v2;
    v3 = GLUID[1];
    if ( v3 >= 0 )
    {
LABEL_3:
      v15 = v3;
      v4 = GLUID[2];
      if ( v4 >= 0 )
        goto LABEL_4;
LABEL_16:
      v16 = 0x7FFFFFFF - v4;
      if ( v2 >= 0 )
        goto LABEL_5;
LABEL_17:
      v17 = 0x7FFFFFFF - GLUID[3];
      goto LABEL_6;
    }
  }
  else
  {
    v3 = GLUID[1];
    v14 = *GLUID;
    if ( v3 >= 0 )
      goto LABEL_3;
  }
  v12 = 0x7FFFFFFF - v3;
  v4 = GLUID[2];
  v15 = v12;
  if ( v4 < 0 )
    goto LABEL_16;
LABEL_4:
  v16 = v4;
  if ( v2 < 0 )
    goto LABEL_17;
LABEL_5:
  v17 = GLUID[3];
LABEL_6:
  *(uint32_t *)self = 1;
  *((uint32_t *)self + 1) = v14;
  *((uint32_t *)self + 2) = v15;
  *((uint32_t *)self + 3) = v16;
  *((uint32_t *)self + 4) = v17;
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std_compat::string_assign((int)(uintptr_t)(self) + 24, &unk_1B15112, 0);
  g4_std_compat::string_assign((int)(uintptr_t)(self) + 20, &unk_1B15112, 0);
  g4_std_compat::string_assign((int)(uintptr_t)(self) + 32, &unk_1B15112, 0);
  *((uint32_t *)self + 7) = 0;
  v5 = self;
  g4_std_compat::string_assign((int)(uintptr_t)(self) + 24, &unk_1B15112, 0);
  do
  {
    v6 = *((uint32_t *)self + 6);
    v7 = *((uint32_t *)v5 + 1) % 0x19u + 97;
    v8 = *(uint32_t *)(v6 - 12);
    v9 = v8 + 1;
    if ( (unsigned int)(v8 + 1) > *(uint32_t *)(v6 - 8) || *(int *)(v6 - 4) > 0 )
    {
      v13 = *((uint32_t *)v5 + 1) % 0x19u + 97;
      sub_1939B80((char *)self + 24, v9);
      v6 = *((uint32_t *)self + 6);
      LOBYTE(v7) = v13;
      v8 = *(uint32_t *)(v6 - 12);
    }
    *(uint8_t *)(v6 + v8) = v7;
    v10 = *((uint32_t *)self + 6);
    if ( (uint32_t *)(v10 - 12) != dword_213B808 )
    {
      *(uint32_t *)(v10 - 4) = 0;
      *(uint32_t *)(v10 - 12) = v9;
      *(uint8_t *)(v10 + v9) = 0;
    }
    v5 = (gaia::GameloftID::Self *)((char *)v5 + 4);
  }
  while ( v5 != (gaia::GameloftID::Self *)((char *)self + 16) );
  *((uint32_t *)self + 7) = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::GameloftID::GetLocalDeviceGLUID  (binary VA: 0x14d0e50)
// Original: gaia::GameloftID::GetLocalDeviceGLUID
// ----------------------------------------------------------------------------
gaia::GameloftID::Self * gaia::GameloftID::GetLocalDeviceGLUID(gaia::GameloftID::Self *self)
{
  int v1;
  void *v2;
  gaia::GameloftID::Self *v3;
  int v4;
  unsigned int v5;
  int v6;
  int v7;
  int v8;
  typedef char *_g4_t_v10;
  typedef char _g4_t_v11;
  typedef char *_g4_t_v12;
  typedef uint8_t _g4_t_v13[7];
  typedef uint8_t _g4_t_v14[4];
  typedef int (**_g4_t_v15)(int);
  typedef int _g4_t_v16;
  typedef uint32_t _g4_t_v17[7];
  typedef uint8_t _g4_t_v18[4];
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint32_t _g4_t_v21[5];
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef char _g4_t_v24;
  typedef char _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v11)) > _g4_s1 ? (28u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v12)) > _g4_s2 ? (36u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (61u + sizeof(_g4_t_v13)) > _g4_s3 ? (61u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (68u + sizeof(_g4_t_v14)) > _g4_s4 ? (68u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v15)) > _g4_s5 ? (72u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v16)) > _g4_s6 ? (76u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v17)) > _g4_s7 ? (80u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (108u + sizeof(_g4_t_v18)) > _g4_s8 ? (108u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (112u + sizeof(_g4_t_v19)) > _g4_s9 ? (112u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (116u + sizeof(_g4_t_v20)) > _g4_s10 ? (116u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (120u + sizeof(_g4_t_v21)) > _g4_s11 ? (120u + sizeof(_g4_t_v21)) : _g4_s11,
    _g4_s13 = (140u + sizeof(_g4_t_v22)) > _g4_s12 ? (140u + sizeof(_g4_t_v22)) : _g4_s12,
    _g4_s14 = (232u + sizeof(_g4_t_v23)) > _g4_s13 ? (232u + sizeof(_g4_t_v23)) : _g4_s13,
    _g4_s15 = (236u + sizeof(_g4_t_v24)) > _g4_s14 ? (236u + sizeof(_g4_t_v24)) : _g4_s14,
    _g4_s16 = (237u + sizeof(_g4_t_v25)) > _g4_s15 ? (237u + sizeof(_g4_t_v25)) : _g4_s15,
    _g4_s17 = (240u + sizeof(_g4_t_v26)) > _g4_s16 ? (240u + sizeof(_g4_t_v26)) : _g4_s16,
    _g4_s18 = (244u + sizeof(_g4_t_v27)) > _g4_s17 ? (244u + sizeof(_g4_t_v27)) : _g4_s17,
    _g4_s19 = (248u + sizeof(_g4_t_v28)) > _g4_s18 ? (248u + sizeof(_g4_t_v28)) : _g4_s18,
    _g4_s20 = (252u + sizeof(_g4_t_v29)) > _g4_s19 ? (252u + sizeof(_g4_t_v29)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 61u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 68u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 72u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 76u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 80u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 108u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 112u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 116u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 120u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 140u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 232u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 236u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 237u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 240u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 244u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 248u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 252u);

  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)self = 2;
  v12 = (char *)self + 24;
  g4_std_compat::string_assign((int)(uintptr_t)(self) + 24, &unk_1B15112, 0);
  g4_std_compat::string_assign((int)(uintptr_t)(self) + 20, &unk_1B15112, 0);
  g4_std_compat::string_assign((int)(uintptr_t)(self) + 32, &unk_1B15112, 0);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 7) = 0;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13[3]), "5 6 7 8", (int)(uintptr_t)(v13));
  g4_std::string::construct_copy(v14, &v13[3]);
  g4_std::string::assign_str((char *)self + 36, v14);
  g4_std::string::Destroy(v14);
  sub_1900810(v21);
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v21[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v15 = (int (**)(int))(uintptr_t)(&off_20AADEC);
  *(int (***)(int))((char *)&v15 + (uint32_t)*(&off_20AADEC - 3)) = (int (**)(int))(uintptr_t)(&off_20AAE00);
  v16 = 0;
  sub_19119D0((char *)&v15 + (uint32_t)(uintptr_t)(*(v15 - 3)), 0);
  memset(&v17[1], 0, 24);
  v15 = (int (**)(int))(uintptr_t)(&off_20AAE2C);
  v21[0] = (uint32_t)(uintptr_t)(&off_20AAE40);
  v17[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v18);
  v19 = 0;
  v17[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  sub_193A970((int)(uintptr_t)(&v20), *(void **)&v13[3], *(uint32_t *)(*(uint32_t *)&v13[3] - 12), (int)(uintptr_t)(&v13[1]));
  v19 = 8;
  sub_1931CD0(v17, v20, 0, 0);
  sub_19119D0(v21, v17);
  if ( v22 == 0 )
  {
    v1 = 0;
    do
    {
      v10 = (char *)self + 4 * v1++ + 4;
      sub_1915250(&v15, v10);
    }
    while ( v22 == 0 );
  }
  v15 = (int (**)(int))(uintptr_t)(&off_20AAE2C);
  v21[0] = (uint32_t)(uintptr_t)(&off_20AAE40);
  v17[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  g4_std::string::Destroy(&v20);
  v17[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v18);
  v15 = (int (**)(int))(uintptr_t)(&off_20AADEC);
  *(int (***)(int))((char *)&v15 + (uint32_t)*(&off_20AADEC - 3)) = (int (**)(int))(uintptr_t)(&off_20AAE00);
  v16 = 0;
  v21[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v21);
  v2 = (void *)(*(uint32_t *)&v13[3] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v13[3] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v13[3] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  v3 = self;
  g4_std_compat::string_assign((int)(uintptr_t)(v12), &unk_1B15112, 0);
  do
  {
    v4 = *((uint32_t *)self + 6);
    v5 = *((uint32_t *)v3 + 1) % 0x19u + 97;
    v6 = *(uint32_t *)(v4 - 12);
    v7 = v6 + 1;
    if ( (unsigned int)(v6 + 1) > *(uint32_t *)(v4 - 8) || *(int *)(v4 - 4) > 0 )
    {
      v11 = *((uint32_t *)v3 + 1) % 0x19u + 97;
      sub_1939B80(v12, v7);
      v4 = *((uint32_t *)self + 6);
      LOBYTE(v5) = v11;
      v6 = *(uint32_t *)(v4 - 12);
    }
    *(uint8_t *)(v4 + v6) = v5;
    v8 = *((uint32_t *)self + 6);
    if ( (uint32_t *)(v8 - 12) != dword_213B808 )
    {
      *(uint32_t *)(v8 - 4) = 0;
      *(uint32_t *)(v8 - 12) = v7;
      *(uint8_t *)(v8 + v7) = 0;
    }
    v3 = (gaia::GameloftID::Self *)((char *)v3 + 4);
  }
  while ( v3 != (gaia::GameloftID::Self *)((char *)self + 16) );
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::GameloftID::GLUIDExistsInNewLocations  (binary VA: 0x14d1250)
// Original: gaia::GameloftID::GLUIDExistsInNewLocations
// ----------------------------------------------------------------------------
int gaia::GameloftID::GLUIDExistsInNewLocations()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gaia::GameloftID::GLUIDDataExistsInOldLocations  (binary VA: 0x14d1260)
// Original: gaia::GameloftID::GLUIDDataExistsInOldLocations
// ----------------------------------------------------------------------------
int gaia::GameloftID::GLUIDDataExistsInOldLocations()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: gaia::GameloftID::LogGLIDUtils  (binary VA: 0x14d1270)
// Original: gaia::GameloftID::LogGLIDUtils
// ----------------------------------------------------------------------------
void gaia::GameloftID::LogGLIDUtils()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gaia::GameloftID::GetGluidFromOldLocations  (binary VA: 0x14d1280)
// Original: gaia::GameloftID::GetGluidFromOldLocations
// ----------------------------------------------------------------------------
int gaia::GameloftID::GetGluidFromOldLocations()
{
  void *v0;
  uint16_t v2[5];

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v2[1]), "GameloftID::GetGluidFromOldLocations", (int)(uintptr_t)(v2));
  gaia::GameloftID::LogGLIDUtils();
  v0 = (void *)(*(uint32_t *)&v2[1] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v2[1] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v2[1] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v0);
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gaia::GameloftID::DecodeAndDecryptIDData  (binary VA: 0x14d1300)
// Original: gaia::GameloftID::DecodeAndDecryptIDData
// ----------------------------------------------------------------------------
void * gaia::GameloftID::DecodeAndDecryptIDData(int *a1, unsigned int a2)
{
  int DecodedBase64DataSize;
  size_t n;
  uint8_t *v4;
  void *v5;
  typedef void *_g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (27u + sizeof(_g4_t_v8)) > _g4_s1 ? (27u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 27u);

  DecodedBase64DataSize = glwebtools::Codec::GetDecodedBase64DataSize(a1, 0);
  n = DecodedBase64DataSize + 1;
  v7 = (void *)DecodedBase64DataSize;
  v4 = (uint8_t *)(malloc(DecodedBase64DataSize + 1));
  memset(v4, 0, n);
  glwebtools::Codec::DecodeBase64((glwebtools::Codec::Self **)a1, v4, 0);
  v5 = malloc(n);
  memset(v5, 0, n);
  if ( (uint8_t)glwebtools::Codec::DecryptXXTEA(
                          a2,
                          (glwebtools::Codec::Self *)v4,
                          (size_t)v7,
                          (glwebtools::Codec::Self *)v5,
                          v7,
                          a2) != 0 )
  {
    free(v4);
  }
  else
  {
    free(v4);
    free(v5);
    v5 = nullptr;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v8) + 1, "GameloftID::GetGluidNewLocations username data from keychain failed decryption", (int)(uintptr_t)(v8));
    gaia::GameloftID::LogGLIDUtils();
    g4_std::string::Destroy((char *)v8 + 1);
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: gaia::GameloftID::GetGluidFromNewLocations  (binary VA: 0x14d1410)
// Original: gaia::GameloftID::GetGluidFromNewLocations
// ----------------------------------------------------------------------------
uint32_t * gaia::GameloftID::GetGluidFromNewLocations()
{
  uint32_t *v0;
  int v1;
  void *v2;
  char *v3;
  typedef char *_g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef void *_g4_t_v9;
  typedef uint8_t _g4_t_v10[4];
  typedef int (**_g4_t_v11)(int);
  typedef int _g4_t_v12;
  typedef uint32_t _g4_t_v13[7];
  typedef uint8_t _g4_t_v14[4];
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint32_t _g4_t_v17[5];
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef char _g4_t_v20;
  typedef char _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (39u + sizeof(_g4_t_v6)) > _g4_s1 ? (39u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v7)) > _g4_s2 ? (40u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v8)) > _g4_s3 ? (44u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v9)) > _g4_s4 ? (48u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v10)) > _g4_s5 ? (52u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v11)) > _g4_s6 ? (56u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v12)) > _g4_s7 ? (60u + sizeof(_g4_t_v12)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v13)) > _g4_s8 ? (64u + sizeof(_g4_t_v13)) : _g4_s8,
    _g4_s10 = (92u + sizeof(_g4_t_v14)) > _g4_s9 ? (92u + sizeof(_g4_t_v14)) : _g4_s9,
    _g4_s11 = (96u + sizeof(_g4_t_v15)) > _g4_s10 ? (96u + sizeof(_g4_t_v15)) : _g4_s10,
    _g4_s12 = (100u + sizeof(_g4_t_v16)) > _g4_s11 ? (100u + sizeof(_g4_t_v16)) : _g4_s11,
    _g4_s13 = (104u + sizeof(_g4_t_v17)) > _g4_s12 ? (104u + sizeof(_g4_t_v17)) : _g4_s12,
    _g4_s14 = (124u + sizeof(_g4_t_v18)) > _g4_s13 ? (124u + sizeof(_g4_t_v18)) : _g4_s13,
    _g4_s15 = (216u + sizeof(_g4_t_v19)) > _g4_s14 ? (216u + sizeof(_g4_t_v19)) : _g4_s14,
    _g4_s16 = (220u + sizeof(_g4_t_v20)) > _g4_s15 ? (220u + sizeof(_g4_t_v20)) : _g4_s15,
    _g4_s17 = (221u + sizeof(_g4_t_v21)) > _g4_s16 ? (221u + sizeof(_g4_t_v21)) : _g4_s16,
    _g4_s18 = (224u + sizeof(_g4_t_v22)) > _g4_s17 ? (224u + sizeof(_g4_t_v22)) : _g4_s17,
    _g4_s19 = (228u + sizeof(_g4_t_v23)) > _g4_s18 ? (228u + sizeof(_g4_t_v23)) : _g4_s18,
    _g4_s20 = (232u + sizeof(_g4_t_v24)) > _g4_s19 ? (232u + sizeof(_g4_t_v24)) : _g4_s19,
    _g4_s21 = (236u + sizeof(_g4_t_v25)) > _g4_s20 ? (236u + sizeof(_g4_t_v25)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 39u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 40u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 44u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 48u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 52u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 56u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 60u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 64u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 92u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 96u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 100u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 104u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 124u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 216u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 220u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 221u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 224u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 228u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 232u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 236u);

  v0 = (uint32_t *)opNew(0x28u);
  v0[5] = (uint32_t)(uintptr_t)(&dword_213B814);
  v0[6] = (uint32_t)(uintptr_t)(&dword_213B814);
  v0[8] = (uint32_t)(uintptr_t)(&dword_213B814);
  v0[9] = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "0 1 2 5", (int)(uintptr_t)(&v7));
  g4_std::string::construct_copy(v10, &v9);
  g4_std::string::assign_str(v0 + 9, v10);
  g4_std::string::Destroy(v10);
  sub_1900810(v17);
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v17[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v11 = (int (**)(int))(uintptr_t)(&off_20AADEC);
  *(int (***)(int))((char *)&v11 + (uint32_t)*(&off_20AADEC - 3)) = (int (**)(int))(uintptr_t)(&off_20AAE00);
  v12 = 0;
  sub_19119D0((char *)&v11 + (uint32_t)(uintptr_t)(*(v11 - 3)), 0);
  memset(&v13[1], 0, 24);
  v11 = (int (**)(int))(uintptr_t)(&off_20AAE2C);
  v17[0] = (uint32_t)(uintptr_t)(&off_20AAE40);
  v13[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v14);
  v15 = 0;
  v13[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  sub_193A970((int)(uintptr_t)(&v16), v9, *((uint32_t *)v9 - 3), (int)(uintptr_t)(&v7) + 1);
  v15 = 8;
  sub_1931CD0(v13, v16, 0, 0);
  sub_19119D0(v17, v13);
  if ( v18 == 0 )
  {
    v1 = 0;
    do
    {
      v5 = (char *)&v0[++v1];
      sub_1915250(&v11, v5);
    }
    while ( v18 == 0 );
  }
  v11 = (int (**)(int))(uintptr_t)(&off_20AAE2C);
  v17[0] = (uint32_t)(uintptr_t)(&off_20AAE40);
  v13[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v2 = (void *)(v16 - 12);
  if ( (uint32_t *)(v16 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  v13[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v14);
  v11 = (int (**)(int))(uintptr_t)(&off_20AADEC);
  *(int (***)(int))((char *)&v11 + (uint32_t)*(&off_20AADEC - 3)) = (int (**)(int))(uintptr_t)(&off_20AAE00);
  v12 = 0;
  v17[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v17);
  v3 = (char *)v9 - 12;
  if ( (char *)v9 - 12 != (char *)dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)v9 - 1, 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  *v0 = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v0 + 6), &unk_1B15112, 0);
  g4_std_compat::string_assign((int)(uintptr_t)(v0 + 5), &unk_1B15112, 0);
  g4_std_compat::string_assign((int)(uintptr_t)(v0 + 8), &unk_1B15112, 0);
  v0[7] = 0;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "cucu", (int)(uintptr_t)(&v6));
  g4_std::string::assign_str(v0 + 6, &v8);
  g4_std::string::Destroy(&v8);
  return v0;
}

// ----------------------------------------------------------------------------
// Function: gaia::GameloftID::EncryptAndEncodeIDData  (binary VA: 0x14d17b0)
// Original: gaia::GameloftID::EncryptAndEncodeIDData
// ----------------------------------------------------------------------------
gaia::GameloftID::Self * gaia::GameloftID::EncryptAndEncodeIDData(gaia::GameloftID::Self *self, glwebtools::Codec::Self *a2, glwebtools::Codec::Self *a3, const unsigned int *a4)
{
  glwebtools::Codec::Self *n;
  void *v5;
  char v6;
  void *v7;
  typedef void *_g4_t_size;
  typedef int _g4_t_v10;
  typedef uint32_t _g4_t_v11[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_size)) > _g4_s0 ? (0u + sizeof(_g4_t_size)) : _g4_s0,
    _g4_s2 = (57u + sizeof(_g4_t_v10)) > _g4_s1 ? (57u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (60u + sizeof(_g4_t_v11)) > _g4_s2 ? (60u + sizeof(_g4_t_v11)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_size &size = *reinterpret_cast<_g4_t_size *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 57u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 60u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(v11), (char *)&unk_1B15112, (int)(uintptr_t)(&v10));
  n = glwebtools::Codec::GetEncryptedXXTEADataSize(a3);
  v5 = malloc((size_t)n);
  memset(v5, 0, (size_t)n);
  if ( (uint8_t)glwebtools::Codec::EncryptXXTEA(a2, (size_t)a3, (glwebtools::Codec::Self *)v5, n, (unsigned int)(uintptr_t)(a4)) == 0 )
  {
    size = v5;
    goto LABEL_5;
  }
  v6 = glwebtools::Codec::EncodeBase64((int)(uintptr_t)(v5), (unsigned int)(uintptr_t)(n), v11, 0);
  size = v5;
  if ( v6 != 0 )
  {
LABEL_5:
    free(size);
    g4_std::string::construct_copy(self, v11);
    goto LABEL_6;
  }
  free(v5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(self), (char *)&unk_1B15112, (int)(uintptr_t)(&v10) + 1);
LABEL_6:
  v7 = (void *)(v11[0] - 12);
  if ( (uint32_t *)(v11[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v11[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::GameloftID::EncryptAndSaveGLUIDToNewLocations  (binary VA: 0x14d18f0)
// Original: gaia::GameloftID::EncryptAndSaveGLUIDToNewLocations
// ----------------------------------------------------------------------------
int gaia::GameloftID::EncryptAndSaveGLUIDToNewLocations()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: gaia::GameloftID::DeleteGLUIDFromOldLocations  (binary VA: 0x14d1900)
// Original: gaia::GameloftID::DeleteGLUIDFromOldLocations
// ----------------------------------------------------------------------------
int gaia::GameloftID::DeleteGLUIDFromOldLocations()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: gaia::GameloftID::CreateNewGLUID  (binary VA: 0x14d1910)
// Original: gaia::GameloftID::CreateNewGLUID
// ----------------------------------------------------------------------------
int gaia::GameloftID::CreateNewGLUID()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gaia::GameloftID::RetrieveDeviceGLUID  (binary VA: 0x14d1920)
// Original: gaia::GameloftID::RetrieveDeviceGLUID
// ----------------------------------------------------------------------------
gaia::GameloftID::Self * gaia::GameloftID::RetrieveDeviceGLUID(gaia::GameloftID::Self *self)
{
  uint32_t *v1;
  uint32_t *v3;
  int v4;
  int v5;
  typedef uint32_t _g4_t_v6[5];
  typedef uint8_t _g4_t_v7[4];
  typedef uint8_t _g4_t_v8[4];
  typedef int _g4_t_v9;
  typedef uint8_t _g4_t_v10[4];
  typedef uint8_t _g4_t_v11[16];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v7)) > _g4_s1 ? (28u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v8)) > _g4_s2 ? (32u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v9)) > _g4_s3 ? (36u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v10)) > _g4_s4 ? (40u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v11)) > _g4_s5 ? (44u + sizeof(_g4_t_v11)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);

  v1 = (uint32_t *)dword_211A28C;
  if ( dword_211A28C == 0 )
  {
    gaia::GameloftID::GetLocalDeviceGLUID((gaia::GameloftID::Self *)v6);
    v3 = (uint32_t *)opNew(0x28u);
    *v3 = v6[0];
    v4 = v6[1];
    v3[5] = (uint32_t)(uintptr_t)(&dword_213B814);
    v3[1] = v4;
    v5 = v6[2];
    v3[6] = (uint32_t)(uintptr_t)(&dword_213B814);
    v3[2] = v5;
    v3[3] = v6[3];
    v3[4] = v6[4];
    v3[8] = (uint32_t)(uintptr_t)(&dword_213B814);
    v3[9] = (uint32_t)(uintptr_t)(&dword_213B814);
    g4_std::string::assign_str(v3 + 6, v8);
    g4_std::string::assign_str(v3 + 5, v7);
    g4_std::string::assign_str(v3 + 8, v10);
    v3[7] = v9;
    g4_std::string::assign_str(v3 + 9, v11);
    dword_211A28C = (int)(uintptr_t)(v3);
    g4_std::string::Destroy(v11);
    g4_std::string::Destroy(v10);
    g4_std::string::Destroy(v8);
    g4_std::string::Destroy(v7);
    v1 = (uint32_t *)dword_211A28C;
  }
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)self = *v1;
  *((uint32_t *)self + 1) = v1[1];
  *((uint32_t *)self + 2) = v1[2];
  *((uint32_t *)self + 3) = v1[3];
  *((uint32_t *)self + 4) = v1[4];
  g4_std::string::assign_str((char *)self + 24, v1 + 6);
  g4_std::string::assign_str((char *)self + 20, v1 + 5);
  g4_std::string::assign_str((char *)self + 32, v1 + 8);
  *((uint32_t *)self + 7) = v1[7];
  g4_std::string::assign_str((char *)self + 36, v1 + 9);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::GameloftID::GenerateRandomPassword  (binary VA: 0x14d1af0)
// Original: gaia::GameloftID::GenerateRandomPassword
// ----------------------------------------------------------------------------
gaia::GameloftID::Self * gaia::GameloftID::GenerateRandomPassword(gaia::GameloftID::Self *self)
{
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(self), "12345", (int)(uintptr_t)(&v2));
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::GameloftID::ResetDeviceGLUID  (binary VA: 0x14da390)
// Original: gaia::GameloftID::ResetDeviceGLUID
// ----------------------------------------------------------------------------
int gaia::GameloftID::ResetDeviceGLUID()
{
  SecureStorageManager::Self *Instance;
  SecureStorageManager::Self *v1;
  SecureStorageManager::Self *v2;
  SecureStorageManager::Self *v3;
  typedef uint8_t _g4_t_v5[5];
  typedef int _g4_t_v6[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (7u + sizeof(_g4_t_v5)) > _g4_s0 ? (7u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 7u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)&gaia::GameloftID::s_mutex);
  gaia::GameloftID::DeleteGLUIDFromOldLocations();
  Instance = SecureStorageManager::GetInstance();
  SecureStorageManager::DeleteValueFromLocalKeychain(Instance, (DataSharingGangstar::Self *)"GL_GLUN");
  v1 = SecureStorageManager::GetInstance();
  SecureStorageManager::DeleteValueFromLocalKeychain(v1, (DataSharingGangstar::Self *)"GL_PS");
  v2 = SecureStorageManager::GetInstance();
  SecureStorageManager::DeleteValueFromUserDefaults(v2, "GL_GLUN");
  v3 = SecureStorageManager::GetInstance();
  SecureStorageManager::DeleteValueFromUserDefaults(v3, "GL_PS");
  G4_PlatformLog(4, "HEI", "%d", 0);
  gaia::GameloftID::Android_GetKeynameStore_for_anonymous_GLUID((gaia::GameloftID::Self *)&v5[1]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v6), *(char **)&v5[1], (int)(uintptr_t)(v5));
  gaia::GameloftID::Android_DeleteSavedGLUID_UnderKeyName((DataSharing::Self **)v6);
  g4_std::string::Destroy(v6);
  g4_std::string::Destroy(&v5[1]);
  return glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)&gaia::GameloftID::s_mutex);
}

// ----------------------------------------------------------------------------
// Function: gaia::GameloftID::Android_Generate_GLUID_HDIDFV  (binary VA: 0x14df900)
// Original: gaia::GameloftID::Android_Generate_GLUID_HDIDFV
// ----------------------------------------------------------------------------
gaia::GameloftID::Self * gaia::GameloftID::Android_Generate_GLUID_HDIDFV(gaia::GameloftID::Self *self)
{
  void *v1;
  int v2;
  unsigned int v3;
  int *v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  time_t v9;
  int v10;
  int v11;
  char v12;
  int v13;
  int v14;
  int v15;
  typedef char *_g4_t_v17;
  typedef char _g4_t_v18;
  typedef char *_g4_t_v19;
  typedef uint8_t _g4_t_v20[7];
  typedef time_t _g4_t_timer;
  typedef int _g4_t_v22;
  typedef uint8_t _g4_t_v23[4];
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint32_t _g4_t_v26[17];
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef char _g4_t_v29;
  typedef char _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  enum : size_t {
    _g4_s0 = 368u,
    _g4_s1 = (4u + sizeof(_g4_t_v17)) > _g4_s0 ? (4u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v18)) > _g4_s1 ? (24u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v19)) > _g4_s2 ? (36u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (61u + sizeof(_g4_t_v20)) > _g4_s3 ? (61u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (68u + sizeof(_g4_t_timer)) > _g4_s4 ? (68u + sizeof(_g4_t_timer)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v22)) > _g4_s5 ? (72u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v23)) > _g4_s6 ? (76u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v24)) > _g4_s7 ? (80u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (84u + sizeof(_g4_t_v25)) > _g4_s8 ? (84u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (88u + sizeof(_g4_t_v26)) > _g4_s9 ? (88u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (156u + sizeof(_g4_t_v27)) > _g4_s10 ? (156u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (248u + sizeof(_g4_t_v28)) > _g4_s11 ? (248u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (252u + sizeof(_g4_t_v29)) > _g4_s12 ? (252u + sizeof(_g4_t_v29)) : _g4_s12,
    _g4_s14 = (253u + sizeof(_g4_t_v30)) > _g4_s13 ? (253u + sizeof(_g4_t_v30)) : _g4_s13,
    _g4_s15 = (256u + sizeof(_g4_t_v31)) > _g4_s14 ? (256u + sizeof(_g4_t_v31)) : _g4_s14,
    _g4_s16 = (260u + sizeof(_g4_t_v32)) > _g4_s15 ? (260u + sizeof(_g4_t_v32)) : _g4_s15,
    _g4_s17 = (264u + sizeof(_g4_t_v33)) > _g4_s16 ? (264u + sizeof(_g4_t_v33)) : _g4_s16,
    _g4_s18 = (268u + sizeof(_g4_t_v34)) > _g4_s17 ? (268u + sizeof(_g4_t_v34)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 36u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 61u);
  _g4_t_timer &timer = *reinterpret_cast<_g4_t_timer *>(_g4_sf + 68u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 72u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 76u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 80u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 84u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 88u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 156u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 248u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 252u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 253u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 256u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 260u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 264u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 268u);

  G4_PlatformLog(4, "HEI", "%d", 0);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(&dword_213B814);
  *(uint32_t *)self = 2;
  g4_std_compat::string_assign((int)(uintptr_t)(self) + 24, &unk_1B15112, 0);
  v19 = (char *)self + 20;
  g4_std_compat::string_assign((int)(uintptr_t)(self) + 20, &unk_1B15112, 0);
  g4_std_compat::string_assign((int)(uintptr_t)(self) + 32, &unk_1B15112, 0);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 7) = 0;
  identifiers::GetCurrentHDIDFV_to4IntsSeparatedBySpace((identifiers::Self *)&v20[3]);
  g4_std::string::construct_copy(&v25, &v20[3]);
  g4_std::string::assign_str((char *)self + 36, &v25);
  v1 = (void *)(v25 - 12);
  if ( (uint32_t *)(v25 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v1);
  }
  sub_1900810(&v26[12]);
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v26[12] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v26[0] = (uint32_t)(uintptr_t)(&off_20AADEC);
  *(uint32_t *)((char *)v26 + (uint32_t)*(&off_20AADEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAE00);
  v26[1] = 0;
  sub_19119D0((char *)v26 + *(uint32_t *)(v26[0] - 12), 0);
  memset(&v26[3], 0, 24);
  v26[0] = (uint32_t)(uintptr_t)(&off_20AAE2C);
  v26[12] = (uint32_t)(uintptr_t)(&off_20AAE40);
  v26[2] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(&v26[9]);
  v26[10] = 0;
  v26[2] = (uint32_t)(uintptr_t)(&off_20AADA8);
  sub_193A970((int)(uintptr_t)(&v26[11]), *(void **)&v20[3], *(uint32_t *)(*(uint32_t *)&v20[3] - 12), (int)(uintptr_t)(&v20[2]));
  v26[10] = 8;
  sub_1931CD0(&v26[2], v26[11], 0, 0);
  sub_19119D0(&v26[12], &v26[2]);
  if ( v27 == 0 )
  {
    v2 = 0;
    do
    {
      v17 = (char *)self + 4 * v2++ + 4;
      sub_1915250(v26, v17);
    }
    while ( v27 == 0 );
  }
  v26[0] = (uint32_t)(uintptr_t)(&off_20AAE2C);
  v26[12] = (uint32_t)(uintptr_t)(&off_20AAE40);
  v26[2] = (uint32_t)(uintptr_t)(&off_20AADA8);
  g4_std::string::Destroy(&v26[11]);
  v26[2] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(&v26[9]);
  v26[0] = (uint32_t)(uintptr_t)(&off_20AADEC);
  *(uint32_t *)((char *)v26 + (uint32_t)*(&off_20AADEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAE00);
  v26[1] = 0;
  v26[12] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(&v26[12]);
  g4_std::string::Destroy(&v20[3]);
  time(&timer);
  gaia::GLUID::SetTime(self, timer);
  GameUtils_GetGameName((int)(uintptr_t)(&v22));
  v3 = *(uint32_t *)(v22 - 12);
  if ( v3 <= 0x14 )
  {
    g4_std::string::assign_str(v19, &v22);
  }
  else
  {
    sub_193A6F0(v23, &v22, v3 - 20, -1);
    g4_std::string::assign_str(v19, v23);
    g4_std::string::Destroy(v23);
  }
  g4_std::string::Destroy(&v22);
  strcpy((char *)v26, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890");
  v4 = (int *)(v26);
  do
  {
    v5 = *v4++;
    v6 = ~v5 & (v5 - 16843009) & 0x80808080;
  }
  while ( v6 == 0 );
  v7 = 16;
  if ( (~v5 & (v5 - 16843009) & 0x8080) == 0 )
  {
    v6 >>= 16;
    v4 = (int *)((char *)v4 + 2);
  }
  v8 = (char *)v4 - __CFADD__((uint8_t)v6, (uint8_t)v6) - 3 - (char *)v26;
  v9 = time(nullptr);
  srand48(v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), (char *)&unk_1B15112, (int)(uintptr_t)(v20));
  do
  {
    v10 = lrand48() % v8;
    v11 = v24;
    v12 = *((uint8_t *)v26 + v10);
    v13 = *(uint32_t *)(v24 - 12);
    v14 = v13 + 1;
    if ( (unsigned int)(v13 + 1) > *(uint32_t *)(v24 - 8) || *(int *)(v24 - 4) > 0 )
    {
      v18 = v12;
      sub_1939B80(&v24, v14);
      v11 = v24;
      v12 = v18;
      v13 = *(uint32_t *)(v24 - 12);
    }
    *(uint8_t *)(v11 + v13) = v12;
    v15 = v24;
    if ( (uint32_t *)(v24 - 12) != dword_213B808 )
    {
      *(uint32_t *)(v24 - 4) = 0;
      *(uint32_t *)(v15 - 12) = v14;
      *(uint8_t *)(v15 + v14) = 0;
    }
    --v7;
  }
  while ( v7 != 0 );
  g4_std::string::assign_str((char *)self + 24, &v24);
  g4_std::string::Destroy(&v24);
  *((uint32_t *)self + 7) = 2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::GameloftID::Android_Generate_GLUID  (binary VA: 0x14dfea0)
// Original: gaia::GameloftID::Android_Generate_GLUID
// ----------------------------------------------------------------------------
gaia::GameloftID::Self * gaia::GameloftID::Android_Generate_GLUID(gaia::GameloftID::Self *self)
{
  gaia::GameloftID::Android_Generate_GLUID_HDIDFV(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::GameloftID::Android_RetrieveGLUID_UnderKeyName  (binary VA: 0x14dfee0)
// Original: gaia::GameloftID::Android_RetrieveGLUID_UnderKeyName
// ----------------------------------------------------------------------------
int * gaia::GameloftID::Android_RetrieveGLUID_UnderKeyName(int *a1, int a2)
{
  int *v2;
  int v3;
  int v5;
  DataSharing::Self **v6;
  int v7;
  typedef unsigned int _g4_t_SavedGLUID_UnderKeyName;
  typedef uint32_t *_g4_t_v9;
  typedef uint32_t *_g4_t_v10;
  typedef uint32_t *_g4_t_v11;
  typedef char *_g4_t_v12;
  typedef char *_g4_t_v13;
  typedef char *_g4_t_v14;
  typedef char *_g4_t_v15;
  typedef char *_g4_t_v16;
  typedef char *_g4_t_v17;
  typedef DataSharing::Self *_g4_t_v18;
  typedef char _g4_t_v19[4];
  typedef DataSharing::Self *_g4_t_v20;
  typedef char _g4_t_v21[4];
  typedef uint32_t _g4_t_v22[5];
  typedef char _g4_t_v23[4];
  typedef char _g4_t_v24[4];
  typedef int _g4_t_v25;
  typedef char _g4_t_v26[4];
  typedef char _g4_t_v27[4];
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef uint32_t *_g4_t_v33;
  typedef uint32_t *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef uint32_t *_g4_t_v36;
  typedef uint32_t *_g4_t_v37;
  typedef uint32_t _g4_t_v38[5];
  typedef char _g4_t_v39[4];
  typedef char _g4_t_v40[4];
  typedef int _g4_t_v41;
  typedef char _g4_t_v42[4];
  typedef char _g4_t_v43[4];
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef uint32_t *_g4_t_v49;
  typedef uint32_t *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef uint32_t *_g4_t_v52;
  typedef uint32_t _g4_t_v53[8];
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (8u + sizeof(_g4_t_SavedGLUID_UnderKeyName)) > _g4_s0 ? (8u + sizeof(_g4_t_SavedGLUID_UnderKeyName)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v10)) > _g4_s2 ? (16u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v11)) > _g4_s3 ? (20u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v12)) > _g4_s4 ? (32u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v13)) > _g4_s5 ? (32u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v14)) > _g4_s6 ? (36u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v15)) > _g4_s7 ? (36u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v16)) > _g4_s8 ? (40u + sizeof(_g4_t_v16)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v17)) > _g4_s9 ? (40u + sizeof(_g4_t_v17)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v18)) > _g4_s10 ? (48u + sizeof(_g4_t_v18)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v19)) > _g4_s11 ? (52u + sizeof(_g4_t_v19)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v20)) > _g4_s12 ? (56u + sizeof(_g4_t_v20)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v21)) > _g4_s13 ? (60u + sizeof(_g4_t_v21)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v22)) > _g4_s14 ? (64u + sizeof(_g4_t_v22)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v23)) > _g4_s15 ? (84u + sizeof(_g4_t_v23)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v24)) > _g4_s16 ? (88u + sizeof(_g4_t_v24)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v25)) > _g4_s17 ? (92u + sizeof(_g4_t_v25)) : _g4_s17,
    _g4_s19 = (96u + sizeof(_g4_t_v26)) > _g4_s18 ? (96u + sizeof(_g4_t_v26)) : _g4_s18,
    _g4_s20 = (100u + sizeof(_g4_t_v27)) > _g4_s19 ? (100u + sizeof(_g4_t_v27)) : _g4_s19,
    _g4_s21 = (104u + sizeof(_g4_t_v28)) > _g4_s20 ? (104u + sizeof(_g4_t_v28)) : _g4_s20,
    _g4_s22 = (108u + sizeof(_g4_t_v29)) > _g4_s21 ? (108u + sizeof(_g4_t_v29)) : _g4_s21,
    _g4_s23 = (112u + sizeof(_g4_t_v30)) > _g4_s22 ? (112u + sizeof(_g4_t_v30)) : _g4_s22,
    _g4_s24 = (116u + sizeof(_g4_t_v31)) > _g4_s23 ? (116u + sizeof(_g4_t_v31)) : _g4_s23,
    _g4_s25 = (120u + sizeof(_g4_t_v32)) > _g4_s24 ? (120u + sizeof(_g4_t_v32)) : _g4_s24,
    _g4_s26 = (124u + sizeof(_g4_t_v33)) > _g4_s25 ? (124u + sizeof(_g4_t_v33)) : _g4_s25,
    _g4_s27 = (128u + sizeof(_g4_t_v34)) > _g4_s26 ? (128u + sizeof(_g4_t_v34)) : _g4_s26,
    _g4_s28 = (132u + sizeof(_g4_t_v35)) > _g4_s27 ? (132u + sizeof(_g4_t_v35)) : _g4_s27,
    _g4_s29 = (136u + sizeof(_g4_t_v36)) > _g4_s28 ? (136u + sizeof(_g4_t_v36)) : _g4_s28,
    _g4_s30 = (140u + sizeof(_g4_t_v37)) > _g4_s29 ? (140u + sizeof(_g4_t_v37)) : _g4_s29,
    _g4_s31 = (144u + sizeof(_g4_t_v38)) > _g4_s30 ? (144u + sizeof(_g4_t_v38)) : _g4_s30,
    _g4_s32 = (164u + sizeof(_g4_t_v39)) > _g4_s31 ? (164u + sizeof(_g4_t_v39)) : _g4_s31,
    _g4_s33 = (168u + sizeof(_g4_t_v40)) > _g4_s32 ? (168u + sizeof(_g4_t_v40)) : _g4_s32,
    _g4_s34 = (172u + sizeof(_g4_t_v41)) > _g4_s33 ? (172u + sizeof(_g4_t_v41)) : _g4_s33,
    _g4_s35 = (176u + sizeof(_g4_t_v42)) > _g4_s34 ? (176u + sizeof(_g4_t_v42)) : _g4_s34,
    _g4_s36 = (180u + sizeof(_g4_t_v43)) > _g4_s35 ? (180u + sizeof(_g4_t_v43)) : _g4_s35,
    _g4_s37 = (184u + sizeof(_g4_t_v44)) > _g4_s36 ? (184u + sizeof(_g4_t_v44)) : _g4_s36,
    _g4_s38 = (188u + sizeof(_g4_t_v45)) > _g4_s37 ? (188u + sizeof(_g4_t_v45)) : _g4_s37,
    _g4_s39 = (192u + sizeof(_g4_t_v46)) > _g4_s38 ? (192u + sizeof(_g4_t_v46)) : _g4_s38,
    _g4_s40 = (196u + sizeof(_g4_t_v47)) > _g4_s39 ? (196u + sizeof(_g4_t_v47)) : _g4_s39,
    _g4_s41 = (200u + sizeof(_g4_t_v48)) > _g4_s40 ? (200u + sizeof(_g4_t_v48)) : _g4_s40,
    _g4_s42 = (204u + sizeof(_g4_t_v49)) > _g4_s41 ? (204u + sizeof(_g4_t_v49)) : _g4_s41,
    _g4_s43 = (208u + sizeof(_g4_t_v50)) > _g4_s42 ? (208u + sizeof(_g4_t_v50)) : _g4_s42,
    _g4_s44 = (212u + sizeof(_g4_t_v51)) > _g4_s43 ? (212u + sizeof(_g4_t_v51)) : _g4_s43,
    _g4_s45 = (216u + sizeof(_g4_t_v52)) > _g4_s44 ? (216u + sizeof(_g4_t_v52)) : _g4_s44,
    _g4_s46 = (220u + sizeof(_g4_t_v53)) > _g4_s45 ? (220u + sizeof(_g4_t_v53)) : _g4_s45
  };
  alignas(16) uint8_t _g4_sf[_g4_s46];
  _g4_t_SavedGLUID_UnderKeyName &SavedGLUID_UnderKeyName = *reinterpret_cast<_g4_t_SavedGLUID_UnderKeyName *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 52u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 56u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 60u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 64u);
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
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 128u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 132u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 136u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 140u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 144u);
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
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 208u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 212u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 216u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 220u);

  *a1 = 2;
  a1[5] = (int)(uintptr_t)(&dword_213B814);
  a1[6] = (int)(uintptr_t)(&dword_213B814);
  a1[8] = (int)(uintptr_t)(&dword_213B814);
  a1[9] = (int)(uintptr_t)(&dword_213B814);
  v9 = (uint32_t *)(a1 + 6);
  g4_std_compat::string_assign((int)(uintptr_t)(a1 + 6), &unk_1B15112, 0);
  v10 = (uint32_t *)(a1 + 5);
  g4_std_compat::string_assign((int)(uintptr_t)(a1 + 5), &unk_1B15112, 0);
  v2 = a1 + 1;
  v11 = (uint32_t *)(a1 + 8);
  g4_std_compat::string_assign((int)(uintptr_t)(a1 + 8), &unk_1B15112, 0);
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[7] = 0;
  g4_std::string::construct_copy(&v18, a2);
  SavedGLUID_UnderKeyName = gaia::GameloftID::Android_GetSavedGLUID_UnderKeyName((int)(uintptr_t)(a1), &v18);
  g4_std::string::Destroy(&v18);
  switch ( SavedGLUID_UnderKeyName )
  {
    case 0u:
      G4_PlatformLog(4, "HEI", "%d", 0);
      v3 = a1[7];
      if ( v3 == 1 )
      {
        G4_PlatformLog(4, "HEI", "%d", 0);
        v3 = a1[7];
      }
      if ( v3 == 2 )
        G4_PlatformLog(4, "HEI", "%d", 0);
      return a1;
    case 0x194u:
      G4_PlatformLog(4, "HEI", "%d", 0);
      gaia::GameloftID::Android_Generate_GLUID((gaia::GameloftID::Self *)v22);
      if ( a1 == (int *)(uintptr_t)(v22) )
      {
        v33 = &dword_213B814;
        v28 = v22[0];
        v29 = a1[1];
        v30 = a1[2];
        v31 = a1[3];
        v32 = a1[4];
        v34 = &dword_213B814;
        v36 = &dword_213B814;
        v37 = &dword_213B814;
        g4_std::string::assign_str(&v34, v9);
        g4_std::string::assign_str(&v33, v10);
        g4_std::string::assign_str(&v36, v11);
        v35 = v25;
        g4_std::string::assign_str(&v37, v27);
        v12 = (char *)(a1 + 6);
        v16 = (char *)(a1 + 5);
        v14 = (char *)(a1 + 8);
      }
      else
      {
        *v2 = v22[1];
        a1[2] = v22[2];
        a1[3] = v22[3];
        a1[4] = v22[4];
        v12 = v24;
        g4_std::string::assign_str(v9, v24);
        v16 = v23;
        g4_std::string::assign_str(v10, v23);
        v14 = v26;
        g4_std::string::assign_str(v11, v26);
        v5 = v22[0];
        a1[7] = v25;
        *a1 = v5;
        v28 = v5;
        v29 = *v2;
        v30 = a1[2];
        v31 = a1[3];
        v32 = a1[4];
        v33 = &dword_213B814;
        v34 = &dword_213B814;
        v36 = &dword_213B814;
        v37 = &dword_213B814;
        g4_std::string::assign_str(&v34, v9);
        g4_std::string::assign_str(&v33, v10);
        g4_std::string::assign_str(&v36, v11);
        v35 = a1[7];
        g4_std::string::assign_str(&v37, a1 + 9);
      }
      v6 = (DataSharing::Self **)v19;
      g4_std::string::Destroy(&v37);
      g4_std::string::Destroy(&v36);
      g4_std::string::Destroy(&v34);
      g4_std::string::Destroy(&v33);
      g4_std::string::Destroy(v27);
      g4_std::string::Destroy(v14);
      g4_std::string::Destroy(v12);
      g4_std::string::Destroy(v16);
      g4_std::string::construct_copy(v19, a2);
      break;
    case 0xFFFFFC18:
      G4_PlatformLog(4, "HEI", "%d", 0);
      g4_std::string::construct_copy(&v20, a2);
      gaia::GameloftID::Android_DeleteSavedGLUID_UnderKeyName(&v20);
      g4_std::string::Destroy(&v20);
      gaia::GameloftID::Android_Generate_GLUID((gaia::GameloftID::Self *)v38);
      if ( a1 == (int *)(uintptr_t)(v38) )
      {
        v49 = &dword_213B814;
        v44 = v38[0];
        v45 = a1[1];
        v46 = a1[2];
        v47 = a1[3];
        v48 = a1[4];
        v50 = &dword_213B814;
        v52 = &dword_213B814;
        v53[0] = (uint32_t)(uintptr_t)(&dword_213B814);
        g4_std::string::assign_str(&v50, v9);
        g4_std::string::assign_str(&v49, v10);
        g4_std::string::assign_str(&v52, v11);
        v51 = v41;
        g4_std::string::assign_str(v53, v43);
        v15 = (char *)(a1 + 6);
        v13 = (char *)(a1 + 5);
        v17 = (char *)(a1 + 8);
      }
      else
      {
        *v2 = v38[1];
        a1[2] = v38[2];
        a1[3] = v38[3];
        a1[4] = v38[4];
        v15 = v40;
        g4_std::string::assign_str(v9, v40);
        v13 = v39;
        g4_std::string::assign_str(v10, v39);
        v17 = v42;
        g4_std::string::assign_str(v11, v42);
        v7 = v38[0];
        a1[7] = v41;
        *a1 = v7;
        v44 = v7;
        v45 = *v2;
        v46 = a1[2];
        v47 = a1[3];
        v48 = a1[4];
        v49 = &dword_213B814;
        v50 = &dword_213B814;
        v52 = &dword_213B814;
        v53[0] = (uint32_t)(uintptr_t)(&dword_213B814);
        g4_std::string::assign_str(&v50, v9);
        g4_std::string::assign_str(&v49, v10);
        g4_std::string::assign_str(&v52, v11);
        v51 = a1[7];
        g4_std::string::assign_str(v53, a1 + 9);
      }
      v6 = (DataSharing::Self **)v21;
      g4_std::string::Destroy(v53);
      g4_std::string::Destroy(&v52);
      g4_std::string::Destroy(&v50);
      g4_std::string::Destroy(&v49);
      g4_std::string::Destroy(v43);
      g4_std::string::Destroy(v17);
      g4_std::string::Destroy(v15);
      g4_std::string::Destroy(v13);
      g4_std::string::construct_copy(v21, a2);
      break;
    default:
      return a1;
  }
  gaia::GameloftID::Android_SaveGLUID_UnderKeyName(a1, v6);
  g4_std::string::Destroy(v6);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: gaia::GameloftID::Android_Generate_GLUIDs_At_First_Launch  (binary VA: 0x14e0690)
// Original: gaia::GameloftID::Android_Generate_GLUIDs_At_First_Launch
// ----------------------------------------------------------------------------
DataSharing::Self * gaia::GameloftID::Android_Generate_GLUIDs_At_First_Launch()
{
  DataSharing::Self *result;
  typedef int _g4_t_v1;
  typedef int _g4_t_v2;
  typedef char *_g4_t_v3;
  typedef int _g4_t_v4;
  typedef char *_g4_t_v5;
  typedef int _g4_t_v6[5];
  typedef uint8_t _g4_t_v7[4];
  typedef uint8_t _g4_t_v8[8];
  typedef uint8_t _g4_t_v9[4];
  typedef uint8_t _g4_t_v10[4];
  typedef int _g4_t_v11[5];
  typedef uint8_t _g4_t_v12[4];
  typedef uint8_t _g4_t_v13[8];
  typedef uint8_t _g4_t_v14[4];
  typedef uint8_t _g4_t_v15[16];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (14u + sizeof(_g4_t_v1)) > _g4_s0 ? (14u + sizeof(_g4_t_v1)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v2)) > _g4_s1 ? (16u + sizeof(_g4_t_v2)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v3)) > _g4_s2 ? (20u + sizeof(_g4_t_v3)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v4)) > _g4_s3 ? (24u + sizeof(_g4_t_v4)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v5)) > _g4_s4 ? (28u + sizeof(_g4_t_v5)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v6)) > _g4_s5 ? (32u + sizeof(_g4_t_v6)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v7)) > _g4_s6 ? (52u + sizeof(_g4_t_v7)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v8)) > _g4_s7 ? (56u + sizeof(_g4_t_v8)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v9)) > _g4_s8 ? (64u + sizeof(_g4_t_v9)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v10)) > _g4_s9 ? (68u + sizeof(_g4_t_v10)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v11)) > _g4_s10 ? (72u + sizeof(_g4_t_v11)) : _g4_s10,
    _g4_s12 = (92u + sizeof(_g4_t_v12)) > _g4_s11 ? (92u + sizeof(_g4_t_v12)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v13)) > _g4_s12 ? (96u + sizeof(_g4_t_v13)) : _g4_s12,
    _g4_s14 = (104u + sizeof(_g4_t_v14)) > _g4_s13 ? (104u + sizeof(_g4_t_v14)) : _g4_s13,
    _g4_s15 = (108u + sizeof(_g4_t_v15)) > _g4_s14 ? (108u + sizeof(_g4_t_v15)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 14u);
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 16u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 20u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 24u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 28u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 32u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 52u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 56u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 64u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 68u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 72u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 92u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 96u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 104u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 108u);

  result = (DataSharing::Self *)gaia::GameloftID::Android_IsFirstRun();
  if ( (uint8_t)(uintptr_t)(result) != 0 )
  {
    G4_PlatformLog(4, "HEI", "%d", 0);
    gaia::GameloftID::Android_GetKeynameStore_for_anonymous_GLUID((gaia::GameloftID::Self *)&v3);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v2), v3, (int)(uintptr_t)(&v1));
    gaia::GameloftID::Android_RetrieveGLUID_UnderKeyName(v6, (int)(uintptr_t)(&v2));
    g4_std::string::Destroy(v10);
    g4_std::string::Destroy(v9);
    g4_std::string::Destroy(v8);
    g4_std::string::Destroy(v7);
    g4_std::string::Destroy(&v2);
    g4_std::string::Destroy(&v3);
    G4_PlatformLog(4, "HEI", "%d", 0);
    gaia::GameloftID::Android_GetKeynameStore_for_encryption_GLUID((gaia::GameloftID::Self *)&v5);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v4), v5, (int)(uintptr_t)(&v1) + 1);
    gaia::GameloftID::Android_RetrieveGLUID_UnderKeyName(v11, (int)(uintptr_t)(&v4));
    g4_std::string::Destroy(v15);
    g4_std::string::Destroy(v14);
    g4_std::string::Destroy(v13);
    g4_std::string::Destroy(v12);
    g4_std::string::Destroy(&v4);
    g4_std::string::Destroy(&v5);
    return gaia::GameloftID::Android_MarkAsSecondRun();
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::GameloftID::Android_RetrieveEncryptionKeyGLUID  (binary VA: 0x14e0850)
// Original: gaia::GameloftID::Android_RetrieveEncryptionKeyGLUID
// ----------------------------------------------------------------------------
gaia::GameloftID::Self * gaia::GameloftID::Android_RetrieveEncryptionKeyGLUID(gaia::GameloftID::Self *self)
{
  typedef uint8_t _g4_t_v2[5];
  typedef int _g4_t_v3[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (7u + sizeof(_g4_t_v2)) > _g4_s0 ? (7u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v3)) > _g4_s1 ? (12u + sizeof(_g4_t_v3)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 7u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  gaia::GameloftID::Android_Generate_GLUIDs_At_First_Launch();
  G4_PlatformLog(4, "HEI", "%d", 0);
  gaia::GameloftID::Android_GetKeynameStore_for_encryption_GLUID((gaia::GameloftID::Self *)&v2[1]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v3), *(char **)&v2[1], (int)(uintptr_t)(v2));
  gaia::GameloftID::Android_RetrieveGLUID_UnderKeyName((int *)self, (int)(uintptr_t)(v3));
  g4_std::string::Destroy(v3);
  g4_std::string::Destroy(&v2[1]);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::GameloftID::RetrieveEncryptionGLUID  (binary VA: 0x14e0910)
// Original: gaia::GameloftID::RetrieveEncryptionGLUID
// ----------------------------------------------------------------------------
gaia::GameloftID::Self * gaia::GameloftID::RetrieveEncryptionGLUID(gaia::GameloftID::Self *self)
{
  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)&gaia::GameloftID::s_mutex);
  gaia::GameloftID::Android_RetrieveEncryptionKeyGLUID(self);
  glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)&gaia::GameloftID::s_mutex);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::GameloftID::Android_RetrieveAnonymousGLUID  (binary VA: 0x14e0970)
// Original: gaia::GameloftID::Android_RetrieveAnonymousGLUID
// ----------------------------------------------------------------------------
gaia::GameloftID::Self * gaia::GameloftID::Android_RetrieveAnonymousGLUID(gaia::GameloftID::Self *self)
{
  typedef uint8_t _g4_t_v2[5];
  typedef int _g4_t_v3[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (7u + sizeof(_g4_t_v2)) > _g4_s0 ? (7u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v3)) > _g4_s1 ? (12u + sizeof(_g4_t_v3)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 7u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  gaia::GameloftID::Android_Generate_GLUIDs_At_First_Launch();
  G4_PlatformLog(4, "HEI", "%d", 0);
  gaia::GameloftID::Android_GetKeynameStore_for_anonymous_GLUID((gaia::GameloftID::Self *)&v2[1]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v3), *(char **)&v2[1], (int)(uintptr_t)(v2));
  gaia::GameloftID::Android_RetrieveGLUID_UnderKeyName((int *)self, (int)(uintptr_t)(v3));
  g4_std::string::Destroy(v3);
  g4_std::string::Destroy(&v2[1]);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::GameloftID::RetrieveAnonymousGLUID  (binary VA: 0x14e0a30)
// Original: gaia::GameloftID::RetrieveAnonymousGLUID
// ----------------------------------------------------------------------------
gaia::GameloftID::Self * gaia::GameloftID::RetrieveAnonymousGLUID(gaia::GameloftID::Self *self)
{
  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)&gaia::GameloftID::s_mutex);
  gaia::GameloftID::Android_RetrieveAnonymousGLUID(self);
  glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)&gaia::GameloftID::s_mutex);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::GameloftID::RetrieveDeviceInfo  (binary VA: 0x14e0a90)
// Original: gaia::GameloftID::RetrieveDeviceInfo
// ----------------------------------------------------------------------------
gaia::GameloftID::Self * gaia::GameloftID::RetrieveDeviceInfo(gaia::GameloftID::Self *self)
{
  int v1;
  typedef int _g4_t_v3;
  typedef int _g4_t_v4;
  typedef char *_g4_t_v5;
  typedef int _g4_t_v6;
  typedef char *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef char *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef char *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef void *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint32_t *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int (**_g4_t_v18)(int);
  typedef int _g4_t_v19;
  typedef int (**_g4_t_v20)(int);
  typedef uint32_t _g4_t_v21[3];
  typedef int _g4_t_v22;
  typedef void *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef uint8_t _g4_t_v26[4];
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef uint32_t _g4_t_v29[29];
  typedef char _g4_t_v30;
  typedef char _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (8u + sizeof(_g4_t_v3)) > _g4_s0 ? (8u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v4)) > _g4_s1 ? (12u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v5)) > _g4_s2 ? (16u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v6)) > _g4_s3 ? (20u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v7)) > _g4_s4 ? (24u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v8)) > _g4_s5 ? (28u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v9)) > _g4_s6 ? (32u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v10)) > _g4_s7 ? (36u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v11)) > _g4_s8 ? (40u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v12)) > _g4_s9 ? (44u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v13)) > _g4_s10 ? (48u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v14)) > _g4_s11 ? (52u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v15)) > _g4_s12 ? (56u + sizeof(_g4_t_v15)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v16)) > _g4_s13 ? (60u + sizeof(_g4_t_v16)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v17)) > _g4_s14 ? (64u + sizeof(_g4_t_v17)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v18)) > _g4_s15 ? (68u + sizeof(_g4_t_v18)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v19)) > _g4_s16 ? (72u + sizeof(_g4_t_v19)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v20)) > _g4_s17 ? (76u + sizeof(_g4_t_v20)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v21)) > _g4_s18 ? (80u + sizeof(_g4_t_v21)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v22)) > _g4_s19 ? (92u + sizeof(_g4_t_v22)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v23)) > _g4_s20 ? (96u + sizeof(_g4_t_v23)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v24)) > _g4_s21 ? (100u + sizeof(_g4_t_v24)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v25)) > _g4_s22 ? (104u + sizeof(_g4_t_v25)) : _g4_s22,
    _g4_s24 = (108u + sizeof(_g4_t_v26)) > _g4_s23 ? (108u + sizeof(_g4_t_v26)) : _g4_s23,
    _g4_s25 = (112u + sizeof(_g4_t_v27)) > _g4_s24 ? (112u + sizeof(_g4_t_v27)) : _g4_s24,
    _g4_s26 = (116u + sizeof(_g4_t_v28)) > _g4_s25 ? (116u + sizeof(_g4_t_v28)) : _g4_s25,
    _g4_s27 = (120u + sizeof(_g4_t_v29)) > _g4_s26 ? (120u + sizeof(_g4_t_v29)) : _g4_s26,
    _g4_s28 = (236u + sizeof(_g4_t_v30)) > _g4_s27 ? (236u + sizeof(_g4_t_v30)) : _g4_s27,
    _g4_s29 = (237u + sizeof(_g4_t_v31)) > _g4_s28 ? (237u + sizeof(_g4_t_v31)) : _g4_s28,
    _g4_s30 = (240u + sizeof(_g4_t_v32)) > _g4_s29 ? (240u + sizeof(_g4_t_v32)) : _g4_s29,
    _g4_s31 = (244u + sizeof(_g4_t_v33)) > _g4_s30 ? (244u + sizeof(_g4_t_v33)) : _g4_s30,
    _g4_s32 = (248u + sizeof(_g4_t_v34)) > _g4_s31 ? (248u + sizeof(_g4_t_v34)) : _g4_s31,
    _g4_s33 = (252u + sizeof(_g4_t_v35)) > _g4_s32 ? (252u + sizeof(_g4_t_v35)) : _g4_s32
  };
  alignas(16) uint8_t _g4_sf[_g4_s33];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 16u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 20u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 36u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 40u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 44u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 48u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 52u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 56u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 60u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 64u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 68u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 72u);
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
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 236u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 237u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 240u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 244u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 248u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 252u);

  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)&gaia::GameloftID::s_mutex);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(&dword_213B814);
  getManufacturerModel((int)(uintptr_t)(&v5));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v6), v5, (int)(uintptr_t)(&v3));
  g4_std::string::assign_str(self, &v6);
  g4_std::string::Destroy(&v6);
  g4_std::string::Destroy(&v5);
  getPhoneCarrier((int)(uintptr_t)(&v7));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), v7, (int)(uintptr_t)(&v3) + 1);
  g4_std::string::assign_str((char *)self + 4, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::Destroy(&v7);
  getLocaleCountry((int)(uintptr_t)(&v9));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), v9, (int)(uintptr_t)(&v3) + 2);
  g4_std::string::assign_str((char *)self + 8, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::Destroy(&v9);
  getLocaleLanguage((int)(uintptr_t)(&v11));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), v11, (int)(uintptr_t)(&v3) + 3);
  g4_std::string::assign_str((char *)self + 12, &v12);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), (char *)&unk_1B15112, (int)(uintptr_t)(&v4));
  sub_1900810(v29);
  v29[28] = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v18 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  v29[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v35 = 0;
  *(int (***)(int))((char *)&v18 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v19 = 0;
  sub_19119D0((char *)&v18 + (uint32_t)(uintptr_t)(*(v18 - 3)), 0);
  v20 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v21[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  sub_19119D0((char *)&v21[-1] + (uint32_t)(uintptr_t)(*(v20 - 3)), 0);
  v18 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v18 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v21[1] = 0;
  v21[2] = 0;
  v22 = 0;
  v23 = nullptr;
  v24 = 0;
  v18 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v29[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v20 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v25 = 0;
  v21[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v26);
  v27 = 0;
  v21[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  sub_193A970((int)(uintptr_t)(&v28), v13, *((uint32_t *)v13 - 3), (int)(uintptr_t)(&v4) + 1);
  v27 = 24;
  sub_1931CD0(v21, v28, 0, 0);
  sub_19119D0(v29, v21);
  g4_std::string::Destroy(&v13);
  identifiers::GetCurrentHDIDFV((identifiers::Self *)&v14);
  g4_std_compat::ostream_write(&v20, "hdidfv=", 7);
  v1 = (int)(uintptr_t)(g4_std_compat::ostream_write(&v20, v14, *(uint32_t *)(v14 - 12)));
  g4_std_compat::ostream_write(v1, " ", 1);
  v15 = &dword_213B814;
  if ( v24 != 0 )
  {
    if ( v24 > (unsigned int)v22 )
    {
      sub_11A9950(&v17, v23, (uint8_t *)v24);
      g4_std::string::assign_str(&v15, &v17);
      g4_std::string::Destroy(&v17);
    }
    else
    {
      sub_11A9950(&v16, v23, (uint8_t *)v22);
      g4_std::string::assign_str(&v15, &v16);
      g4_std::string::Destroy(&v16);
    }
  }
  else
  {
    g4_std::string::assign_str(&v15, &v28);
  }
  g4_std::string::assign_str((char *)self + 16, &v15);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v14);
  v18 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
  v29[0] = (uint32_t)(uintptr_t)(&off_20AB014);
  v20 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
  v21[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  g4_std::string::Destroy(&v28);
  v21[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v26);
  v18 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
  *(int (***)(int))((char *)&v18 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
  v20 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
  *(uint32_t *)((char *)&v21[-1] + (uint32_t)*(&off_20AAEEC - 3)) = (uint32_t)(uintptr_t)(&off_20AAF00);
  v18 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
  *(int (***)(int))((char *)&v18 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
  v29[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v19 = 0;
  sub_1900B90(v29);
  glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)&gaia::GameloftID::s_mutex);
  return self;
}


