#include "Core/Utils/DecompTypes.h"
#include "gaia_Gaia.h"

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::CanDelete  (binary VA: 0x1442840)
// Original: gaia::Gaia::CanDelete
// ----------------------------------------------------------------------------
bool gaia::Gaia::CanDelete(gaia::Gaia::Self *self)
{
  return *((uint32_t *)self + 59) <= 0;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::callbackRequestCompleted  (binary VA: 0x1442850)
// Original: gaia::Gaia::callbackRequestCompleted
// ----------------------------------------------------------------------------
int gaia::Gaia::callbackRequestCompleted(int a1, int a2, int a3, int a4)
{
  int result;
  int v5;
  gaia::BaseServiceManager::Self *v6;
  uint32_t *v7;

  result = a4;
  if ( a3 == 0 )
  {
    v5 = -1;
    if ( (unsigned int)(a1 - 3006) <= 0xA )
      v5 = dword_1D11160[a1 - 3006];
    v6 = *(gaia::BaseServiceManager::Self **)(a4 + 4 * v5 + 4);
    if ( v6 != nullptr )
    {
      v7 = (uint32_t *)(a4 + 4 * v5 + 148);
      result = *(uint32_t *)(*v7 - 12);
      if ( result != 0 )
        return gaia::BaseServiceManager::UpdateServiceUrl(v6, (int)(uintptr_t)(v7));
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::Construct  (binary VA: 0x1443900)
// Original: gaia::Gaia::Gaia
// ----------------------------------------------------------------------------
gaia::Gaia::Self * gaia::Gaia::Construct(gaia::Gaia::Self *self)
{
  gaia::Gaia::Self *v1;
  gaia::Gaia::Self *v2;
  int i;
  gid::GlobalDeviceIDManager::Self *v4;
  glwebtools::Mutex::Self *v5;
  glwebtools::Mutex::Self *v6;
  gaia::DataCenterManager::Self *v7;
  glwebtools::Mutex::Self *v8;
  glwebtools::Mutex::Self *v9;
  glwebtools::Mutex::Self *v10;
  glwebtools::Mutex::Self *v11;
  glwebtools::Mutex::Self *v12;
  gaia::Gaia_Hestia::Self *v13;
  gaia::Gaia_GlobalDeviceID::Self *v14;
  gaia::Gaia_GlobalDeviceID::Self *v15;
  gaia::Gaia_Eve::Self *v16;
  gaia::Gaia_Eve::Self *v17;
  gaia::Gaia::Self *result;
  glwebtools::Mutex::Self *v19;
  gaia::ThreadManager::Self *v20;
  void *v21;

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2095A90);
  v1 = (gaia::Gaia::Self *)((char *)self + 148);
  do
  {
    *(uint32_t *)v1 = (uint32_t)(uintptr_t)(&dword_213B814);
    v1 = (gaia::Gaia::Self *)((char *)v1 + 4);
  }
  while ( v1 != (gaia::Gaia::Self *)((char *)self + 220) );
  glwebtools::Mutex::Construct(v1);
  glwebtools::Mutex::Construct((gaia::Gaia::Self *)((char *)self + 228));
  *((uint32_t *)self + 60) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 66) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 67) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 69) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 70) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 59) = 0;
  *((uint32_t *)self + 61) = 2;
  g4_std_compat::string_assign((int)(uintptr_t)(self) + 268, &unk_1B15112, 0);
  g4_std_compat::string_assign((int)(uintptr_t)(self) + 264, &unk_1B15112, 0);
  g4_std_compat::string_assign((int)(uintptr_t)(self) + 276, &unk_1B15112, 0);
  *((uint32_t *)self + 76) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 77) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 79) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 80) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 62) = 0;
  *((uint32_t *)self + 63) = 0;
  *((uint32_t *)self + 64) = 0;
  *((uint32_t *)self + 65) = 0;
  *((uint32_t *)self + 68) = 0;
  *((uint32_t *)self + 71) = 2;
  g4_std_compat::string_assign((int)(uintptr_t)(self) + 308, &unk_1B15112, 0);
  g4_std_compat::string_assign((int)(uintptr_t)(self) + 304, &unk_1B15112, 0);
  g4_std_compat::string_assign((int)(uintptr_t)(self) + 316, &unk_1B15112, 0);
  *((uint32_t *)self + 81) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 82) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 83) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 84) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 85) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 86) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 88) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 89) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 96) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 93) = (uint32_t)(uintptr_t)((char *)self + 364);
  *((uint32_t *)self + 94) = (uint32_t)(uintptr_t)((char *)self + 364);
  *((uint32_t *)self + 72) = 0;
  *((uint32_t *)self + 73) = 0;
  *((uint32_t *)self + 74) = 0;
  *((uint32_t *)self + 75) = 0;
  *((uint32_t *)self + 78) = 0;
  *((uint32_t *)self + 91) = 0;
  *((uint32_t *)self + 92) = 0;
  *((uint32_t *)self + 95) = 0;
  v2 = (gaia::Gaia::Self *)((char *)self + 400);
  glwebtools::Mutex::Construct((gaia::Gaia::Self *)((char *)self + 392));
  do
  {
    v19 = (glwebtools::Mutex::Self *)(v2);
    v2 = (gaia::Gaia::Self *)((char *)v2 + 8);
    glwebtools::Mutex::Construct(v19);
  }
  while ( v2 != (gaia::Gaia::Self *)((char *)self + 544) );
  *((uint32_t *)self + 137) = 0;
  *((uint32_t *)self + 141) = 0;
  *((uint32_t *)self + 148) = 0;
  gaia::Console::SetLogLevel(nullptr, (unsigned int)(uintptr_t)(v21));
  gaia::ThreadManager::GetInstance(v20);
  for ( i = 0; i != 18; ++i )
    *((uint32_t *)self + i + 1) = 0;
  *((uint32_t *)self + 29) = (uint32_t)(uintptr_t)("auth");
  *((uint32_t *)self + 20) = (uint32_t)(uintptr_t)("storage");
  *((uint32_t *)self + 21) = (uint32_t)(uintptr_t)("message");
  *((uint32_t *)self + 22) = (uint32_t)(uintptr_t)("feeds");
  *((uint32_t *)self + 23) = (uint32_t)(uintptr_t)("leaderboard");
  *((uint32_t *)self + 24) = (uint32_t)(uintptr_t)("social");
  *((uint32_t *)self + 25) = (uint32_t)(uintptr_t)("asset");
  *((uint32_t *)self + 26) = (uint32_t)(uintptr_t)("matchmaker");
  *((uint32_t *)self + 27) = (uint32_t)(uintptr_t)("lottery");
  *((uint32_t *)self + 28) = (uint32_t)(uintptr_t)("voice");
  *((uint32_t *)self + 30) = (uint32_t)(uintptr_t)("pandora");
  *((uint32_t *)self + 31) = (uint32_t)(uintptr_t)("config");
  *((uint32_t *)self + 32) = (uint32_t)(uintptr_t)("alert");
  *((uint32_t *)self + 33) = (uint32_t)(uintptr_t)("schedule");
  *((uint32_t *)self + 34) = (uint32_t)(uintptr_t)("globalidservice");
  *((uint32_t *)self + 35) = (uint32_t)(uintptr_t)("transaction");
  v4 = (gid::GlobalDeviceIDManager::Self *)opNew(0xA0u);
  gid::GlobalDeviceIDManager::Construct(v4);
  ISingleton<gid::GlobalDeviceIDManager::Self>::s_instance = v4;
  v5 = (glwebtools::Mutex::Self *)opNew(8u);
  *(uint32_t *)v5 = 0;
  *((uint32_t *)v5 + 1) = 0;
  glwebtools::Mutex::Construct(v5);
  *((uint32_t *)self + 140) = (uint32_t)(uintptr_t)(v5);
  v6 = (glwebtools::Mutex::Self *)opNew(8u);
  *(uint32_t *)v6 = 0;
  *((uint32_t *)v6 + 1) = 0;
  glwebtools::Mutex::Construct(v6);
  *((uint32_t *)self + 139) = (uint32_t)(uintptr_t)(v6);
  v7 = (gaia::DataCenterManager::Self *)opNew(0x18u);
  gaia::DataCenterManager::Construct(v7);
  ISingleton<gaia::DataCenterManager::Self>::s_instance = v7;
  v8 = (glwebtools::Mutex::Self *)opNew(8u);
  *(uint32_t *)v8 = 0;
  *((uint32_t *)v8 + 1) = 0;
  glwebtools::Mutex::Construct(v8);
  *((uint32_t *)self + 142) = (uint32_t)(uintptr_t)(v8);
  v9 = (glwebtools::Mutex::Self *)opNew(8u);
  *(uint32_t *)v9 = 0;
  *((uint32_t *)v9 + 1) = 0;
  glwebtools::Mutex::Construct(v9);
  *((uint32_t *)self + 143) = (uint32_t)(uintptr_t)(v9);
  v10 = (glwebtools::Mutex::Self *)opNew(8u);
  *(uint32_t *)v10 = 0;
  *((uint32_t *)v10 + 1) = 0;
  glwebtools::Mutex::Construct(v10);
  *((uint32_t *)self + 144) = (uint32_t)(uintptr_t)(v10);
  v11 = (glwebtools::Mutex::Self *)opNew(8u);
  *(uint32_t *)v11 = 0;
  *((uint32_t *)v11 + 1) = 0;
  glwebtools::Mutex::Construct(v11);
  *((uint32_t *)self + 145) = (uint32_t)(uintptr_t)(v11);
  v12 = (glwebtools::Mutex::Self *)opNew(8u);
  *(uint32_t *)v12 = 0;
  *((uint32_t *)v12 + 1) = 0;
  glwebtools::Mutex::Construct(v12);
  *((uint32_t *)self + 146) = (uint32_t)(uintptr_t)(v12);
  v13 = (gaia::Gaia_Hestia::Self *)opNew(0xA4u);
  gaia::Gaia_Hestia::Construct(v13);
  *((uint32_t *)self + 147) = (uint32_t)(uintptr_t)(v13);
  v14 = (gaia::Gaia_GlobalDeviceID::Self *)opNew(0x14u);
  gaia::Gaia_GlobalDeviceID::Construct(v14);
  v15 = *((gaia::Gaia_GlobalDeviceID::Self **)self + 148);
  if ( v14 != v15 )
  {
    if ( v15 != nullptr )
    {
      gaia::Gaia_GlobalDeviceID::Destroy(*((gaia::Gaia_GlobalDeviceID::Self **)self + 148));
      opDelete(v15);
    }
    *((uint32_t *)self + 148) = (uint32_t)(uintptr_t)(v14);
  }
  v16 = (gaia::Gaia_Eve::Self *)opNew(4u);
  gaia::Gaia_Eve::Construct(v16);
  v17 = *((gaia::Gaia_Eve::Self **)self + 141);
  if ( v16 != v17 )
  {
    if ( v17 != nullptr )
    {
      gaia::Gaia_Eve::Destroy(*((gaia::Gaia_Eve::Self **)self + 141));
      opDelete(v17);
    }
    *((uint32_t *)self + 141) = (uint32_t)(uintptr_t)(v16);
  }
  *((uint8_t *)self + 553) = 1;
  *((uint8_t *)self + 552) = 0;
  *((uint32_t *)self + 136) = 1;
  gaia::Gaia::m_threadedUpdatePeriod = 100;
  gaia::Gaia::s_glwtInstance = 0;
  result = (gaia::Gaia::Self *)opNew(0x20u);
  *((uint32_t *)result + 4) = (uint32_t)(uintptr_t)((char *)result + 8);
  *((uint32_t *)result + 5) = (uint32_t)(uintptr_t)((char *)result + 8);
  *((uint32_t *)result + 2) = 0;
  *((uint32_t *)result + 3) = 0;
  *((uint32_t *)result + 6) = 0;
  *((uint32_t *)result + 7) = ((uint32_t)(uintptr_t)&off_2095B1C);
  *(uint32_t *)result = ((uint32_t)(uintptr_t)&off_2095B08);
  ISingleton<gaia::GaiaActionsManager::Self>::s_instance = (gaia::GaiaActionsManager::Self *)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::InitGLUID  (binary VA: 0x1443e90)
// Original: gaia::Gaia::InitGLUID
// ----------------------------------------------------------------------------
int gaia::Gaia::InitGLUID(gaia::Gaia::Self *self)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  void *v5;
  void *v6;
  void *v7;
  void *v8;
  void *v9;
  uint32_t *v10;
  uint32_t *v11;
  uint32_t *v12;
  void *v13;
  void *v14;
  void *v15;
  void *v16;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint32_t _g4_t_v24[2];
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef uint32_t *_g4_t_v32;
  typedef uint32_t *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef uint32_t *_g4_t_v35;
  typedef uint32_t *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef uint32_t _g4_t_v43[2];
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
  typedef uint32_t *_g4_t_v54;
  typedef uint32_t _g4_t_v55[8];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v18)) > _g4_s0 ? (0u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v19)) > _g4_s1 ? (4u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v20)) > _g4_s2 ? (8u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v21)) > _g4_s3 ? (12u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v22)) > _g4_s4 ? (16u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v23)) > _g4_s5 ? (20u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v24)) > _g4_s6 ? (24u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v25)) > _g4_s7 ? (32u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v26)) > _g4_s8 ? (36u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v27)) > _g4_s9 ? (40u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v28)) > _g4_s10 ? (44u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v29)) > _g4_s11 ? (48u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v30)) > _g4_s12 ? (52u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v31)) > _g4_s13 ? (56u + sizeof(_g4_t_v31)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v32)) > _g4_s14 ? (60u + sizeof(_g4_t_v32)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v33)) > _g4_s15 ? (64u + sizeof(_g4_t_v33)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v34)) > _g4_s16 ? (68u + sizeof(_g4_t_v34)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v35)) > _g4_s17 ? (72u + sizeof(_g4_t_v35)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v36)) > _g4_s18 ? (76u + sizeof(_g4_t_v36)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v37)) > _g4_s19 ? (80u + sizeof(_g4_t_v37)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v38)) > _g4_s20 ? (84u + sizeof(_g4_t_v38)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v39)) > _g4_s21 ? (88u + sizeof(_g4_t_v39)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_v40)) > _g4_s22 ? (92u + sizeof(_g4_t_v40)) : _g4_s22,
    _g4_s24 = (96u + sizeof(_g4_t_v41)) > _g4_s23 ? (96u + sizeof(_g4_t_v41)) : _g4_s23,
    _g4_s25 = (100u + sizeof(_g4_t_v42)) > _g4_s24 ? (100u + sizeof(_g4_t_v42)) : _g4_s24,
    _g4_s26 = (104u + sizeof(_g4_t_v43)) > _g4_s25 ? (104u + sizeof(_g4_t_v43)) : _g4_s25,
    _g4_s27 = (112u + sizeof(_g4_t_v44)) > _g4_s26 ? (112u + sizeof(_g4_t_v44)) : _g4_s26,
    _g4_s28 = (116u + sizeof(_g4_t_v45)) > _g4_s27 ? (116u + sizeof(_g4_t_v45)) : _g4_s27,
    _g4_s29 = (120u + sizeof(_g4_t_v46)) > _g4_s28 ? (120u + sizeof(_g4_t_v46)) : _g4_s28,
    _g4_s30 = (124u + sizeof(_g4_t_v47)) > _g4_s29 ? (124u + sizeof(_g4_t_v47)) : _g4_s29,
    _g4_s31 = (128u + sizeof(_g4_t_v48)) > _g4_s30 ? (128u + sizeof(_g4_t_v48)) : _g4_s30,
    _g4_s32 = (132u + sizeof(_g4_t_v49)) > _g4_s31 ? (132u + sizeof(_g4_t_v49)) : _g4_s31,
    _g4_s33 = (136u + sizeof(_g4_t_v50)) > _g4_s32 ? (136u + sizeof(_g4_t_v50)) : _g4_s32,
    _g4_s34 = (140u + sizeof(_g4_t_v51)) > _g4_s33 ? (140u + sizeof(_g4_t_v51)) : _g4_s33,
    _g4_s35 = (144u + sizeof(_g4_t_v52)) > _g4_s34 ? (144u + sizeof(_g4_t_v52)) : _g4_s34,
    _g4_s36 = (148u + sizeof(_g4_t_v53)) > _g4_s35 ? (148u + sizeof(_g4_t_v53)) : _g4_s35,
    _g4_s37 = (152u + sizeof(_g4_t_v54)) > _g4_s36 ? (152u + sizeof(_g4_t_v54)) : _g4_s36,
    _g4_s38 = (156u + sizeof(_g4_t_v55)) > _g4_s37 ? (156u + sizeof(_g4_t_v55)) : _g4_s37
  };
  alignas(16) uint8_t _g4_sf[_g4_s38];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 36u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 40u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 44u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 48u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 52u);
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
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 112u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 116u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 120u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 124u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 128u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 132u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 136u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 140u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 144u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 148u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 152u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 156u);

  gaia::GameloftID::RetrieveAnonymousGLUID((gaia::GameloftID::Self *)&v18);
  if ( &v18 == (int *)((char *)self + 244) )
  {
    v32 = &dword_213B814;
    v33 = &dword_213B814;
    v35 = &dword_213B814;
    v36 = &dword_213B814;
    v27 = *((uint32_t *)self + 61);
    v28 = v19;
    v29 = v20;
    v30 = v21;
    v31 = v22;
    g4_std::string::assign_str(&v33, v24);
    g4_std::string::assign_str(&v32, &v23);
    g4_std::string::assign_str(&v35, &v25);
    v34 = *((uint32_t *)self + 68);
    g4_std::string::assign_str(&v36, &v26);
  }
  else
  {
    *((uint32_t *)self + 62) = v19;
    *((uint32_t *)self + 63) = v20;
    *((uint32_t *)self + 64) = v21;
    *((uint32_t *)self + 65) = v22;
    g4_std::string::assign_str((char *)self + 268, v24);
    g4_std::string::assign_str((char *)self + 264, &v23);
    g4_std::string::assign_str((char *)self + 276, &v25);
    *((uint32_t *)self + 61) = v18;
    *((uint32_t *)self + 68) = v24[1];
    v32 = &dword_213B814;
    v33 = &dword_213B814;
    v35 = &dword_213B814;
    v36 = &dword_213B814;
    v27 = v18;
    v28 = *((uint32_t *)self + 62);
    v29 = *((uint32_t *)self + 63);
    v30 = *((uint32_t *)self + 64);
    v31 = *((uint32_t *)self + 65);
    g4_std::string::assign_str(&v33, (char *)self + 268);
    g4_std::string::assign_str(&v32, (char *)self + 264);
    g4_std::string::assign_str(&v35, (char *)self + 276);
    v34 = *((uint32_t *)self + 68);
    g4_std::string::assign_str(&v36, (char *)self + 280);
  }
  v1 = v36 - 3;
  if ( v36 - 3 != dword_213B808 && __sync_fetch_and_add(v36 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v1);
  v2 = v35 - 3;
  if ( v35 - 3 != dword_213B808 && __sync_fetch_and_add(v35 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v2);
  v3 = v33 - 3;
  if ( v33 - 3 != dword_213B808 && __sync_fetch_and_add(v33 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v3);
  v4 = v32 - 3;
  if ( v32 - 3 != dword_213B808 && __sync_fetch_and_add(v32 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v4);
  v5 = (void *)(v26 - 12);
  if ( (uint32_t *)(v26 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  v6 = (void *)(v25 - 12);
  if ( (uint32_t *)(v25 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  v7 = (void *)(v24[0] - 12);
  if ( (uint32_t *)(v24[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v24[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  v8 = (void *)(v23 - 12);
  if ( (uint32_t *)(v23 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  gaia::GameloftID::RetrieveEncryptionGLUID((gaia::GameloftID::Self *)&v37);
  if ( &v37 == (int *)((char *)self + 284) )
  {
    v51 = &dword_213B814;
    v52 = &dword_213B814;
    v54 = &dword_213B814;
    v55[0] = (uint32_t)(uintptr_t)(&dword_213B814);
    v46 = *((uint32_t *)self + 71);
    v47 = v38;
    v48 = v39;
    v49 = v40;
    v50 = v41;
    g4_std::string::assign_str(&v52, v43);
    g4_std::string::assign_str(&v51, &v42);
    g4_std::string::assign_str(&v54, &v44);
    v53 = *((uint32_t *)self + 78);
    g4_std::string::assign_str(v55, &v45);
  }
  else
  {
    *((uint32_t *)self + 72) = v38;
    *((uint32_t *)self + 73) = v39;
    *((uint32_t *)self + 74) = v40;
    *((uint32_t *)self + 75) = v41;
    g4_std::string::assign_str((char *)self + 308, v43);
    g4_std::string::assign_str((char *)self + 304, &v42);
    g4_std::string::assign_str((char *)self + 316, &v44);
    *((uint32_t *)self + 71) = v37;
    *((uint32_t *)self + 78) = v43[1];
    v51 = &dword_213B814;
    v52 = &dword_213B814;
    v54 = &dword_213B814;
    v55[0] = (uint32_t)(uintptr_t)(&dword_213B814);
    v46 = v37;
    v47 = *((uint32_t *)self + 72);
    v48 = *((uint32_t *)self + 73);
    v49 = *((uint32_t *)self + 74);
    v50 = *((uint32_t *)self + 75);
    g4_std::string::assign_str(&v52, (char *)self + 308);
    g4_std::string::assign_str(&v51, (char *)self + 304);
    g4_std::string::assign_str(&v54, (char *)self + 316);
    v53 = *((uint32_t *)self + 78);
    g4_std::string::assign_str(v55, (char *)self + 320);
  }
  v9 = (void *)(v55[0] - 12);
  if ( (uint32_t *)(v55[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v55[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  v10 = v54 - 3;
  if ( v54 - 3 != dword_213B808 && __sync_fetch_and_add(v54 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v10);
  v11 = v52 - 3;
  if ( v52 - 3 != dword_213B808 && __sync_fetch_and_add(v52 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v11);
  v12 = v51 - 3;
  if ( v51 - 3 != dword_213B808 && __sync_fetch_and_add(v51 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v12);
  v13 = (void *)(v45 - 12);
  if ( (uint32_t *)(v45 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v13);
  }
  v14 = (void *)(v44 - 12);
  if ( (uint32_t *)(v44 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v44 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v14);
  }
  v15 = (void *)(v43[0] - 12);
  if ( (uint32_t *)(v43[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v43[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v15);
  }
  v16 = (void *)(v42 - 12);
  if ( (uint32_t *)(v42 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v42 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v16);
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::GetGameloftDeviceId  (binary VA: 0x1444680)
// Original: gaia::Gaia::GetGameloftDeviceId
// ----------------------------------------------------------------------------
int gaia::Gaia::GetGameloftDeviceId(int a1, int a2)
{
  int v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  uint32_t *v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  typedef uint32_t *_g4_t_v17;
  typedef uint32_t *_g4_t_v18;
  typedef uint32_t *_g4_t_v19;
  typedef uint32_t *_g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef uint32_t *_g4_t_v23;
  typedef uint32_t *_g4_t_v24;
  typedef uint32_t *_g4_t_v25;
  typedef uint32_t *_g4_t_v26;
  typedef uint32_t *_g4_t_v27;
  typedef uint32_t *_g4_t_v28;
  typedef uint32_t *_g4_t_v29;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v17)) > _g4_s0 ? (12u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v18)) > _g4_s1 ? (16u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v19)) > _g4_s2 ? (20u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v20)) > _g4_s3 ? (24u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v21)) > _g4_s4 ? (28u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v22)) > _g4_s5 ? (32u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v23)) > _g4_s6 ? (36u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v24)) > _g4_s7 ? (40u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v25)) > _g4_s8 ? (44u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v26)) > _g4_s9 ? (48u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v27)) > _g4_s10 ? (52u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v28)) > _g4_s11 ? (56u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v29)) > _g4_s12 ? (60u + sizeof(_g4_t_v29)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 52u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 56u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 60u);

  v2 = 701;
  v17 = &dword_213B814;
  v18 = &dword_213B814;
  v19 = &dword_213B814;
  v20 = &dword_213B814;
  v21 = &dword_213B814;
  v22 = &dword_213B814;
  v23 = &dword_213B814;
  v24 = &dword_213B814;
  v25 = &dword_213B814;
  v26 = &dword_213B814;
  v27 = &dword_213B814;
  v28 = &dword_213B814;
  v29 = &dword_213B814;
  if ( gid::GlobalDeviceIDManager::GetSynchedDeviceIds(
         ISingleton<gid::GlobalDeviceIDManager::Self>::s_instance,
         (gid::DeviceIds::Self *)&v17) == 0 )
  {
    LOWORD(v2) = 0;
    g4_std::string::assign_str(a2, &v28);
  }
  v3 = v29 - 3;
  if ( v29 - 3 != dword_213B808 && __sync_fetch_and_add(v29 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v3);
  v4 = v28 - 3;
  if ( v28 - 3 != dword_213B808 && __sync_fetch_and_add(v28 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v4);
  v5 = v27 - 3;
  if ( v27 - 3 != dword_213B808 && __sync_fetch_and_add(v27 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v5);
  v6 = v26 - 3;
  if ( v26 - 3 != dword_213B808 && __sync_fetch_and_add(v26 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v6);
  v7 = v25 - 3;
  if ( v25 - 3 != dword_213B808 && __sync_fetch_and_add(v25 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v7);
  v8 = v24 - 3;
  if ( v24 - 3 != dword_213B808 && __sync_fetch_and_add(v24 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v8);
  v9 = v23 - 3;
  if ( v23 - 3 != dword_213B808 && __sync_fetch_and_add(v23 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v9);
  v10 = v22 - 3;
  if ( v22 - 3 != dword_213B808 && __sync_fetch_and_add(v22 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v10);
  v11 = v21 - 3;
  if ( v21 - 3 != dword_213B808 && __sync_fetch_and_add(v21 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v11);
  v12 = v20 - 3;
  if ( v20 - 3 != dword_213B808 && __sync_fetch_and_add(v20 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v12);
  v13 = v19 - 3;
  if ( v19 - 3 != dword_213B808 && __sync_fetch_and_add(v19 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v13);
  v14 = v18 - 3;
  if ( v18 - 3 != dword_213B808 && __sync_fetch_and_add(v18 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v14);
  v15 = v17 - 3;
  if ( v17 - 3 != dword_213B808 && __sync_fetch_and_add(v17 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v15);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::CompleteAsyncAction  (binary VA: 0x14449c0)
// Original: gaia::Gaia::CompleteAsyncAction
// ----------------------------------------------------------------------------
int gaia::Gaia::CompleteAsyncAction(uint32_t *a1, int a2, uint32_t *a3)
{
  int result;
  int (*v4)(uint32_t, int, uint32_t, uint32_t);

  result = (int)(uintptr_t)(a1);
  v4 = (int (*)(uint32_t, int, uint32_t, uint32_t))a1[1];
  if ( v4 != nullptr )
    return v4(a1[2], a2, *a3, *a1);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::CompleteAsyncAction  (binary VA: 0x1444a00)
// Original: gaia::Gaia::CompleteAsyncAction
// ----------------------------------------------------------------------------
int gaia::Gaia::CompleteAsyncAction(gaia::Gaia::Self *self)
{
  return gaia::GaiaRequest::TriggerCallback(self);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::TriggerAllCallbacks  (binary VA: 0x1444a30)
// Original: gaia::Gaia::TriggerAllCallbacks
// ----------------------------------------------------------------------------
int gaia::Gaia::TriggerAllCallbacks()
{
  int v0;
  unsigned int v1;
  gaia::GaiaRequestCallback::Self **v2;
  gaia::GaiaRequestCallback::Self *v3;

  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)&gaia::Gaia::s_CallbackRequestMutex);
  v0 = gaia::Gaia::s_CallbackRequest;
  if ( (unsigned int)((uintptr_t)(*(uint8_t **)unk_2119B2C) - (uintptr_t)(gaia::Gaia::s_CallbackRequest)) >> 2 != 0 )
  {
    v1 = 0;
    do
    {
      gaia::GaiaRequestCallback::TriggerCallback(*(gaia::GaiaRequestCallback::Self **)(v0 + 4 * v1));
      v2 = (gaia::GaiaRequestCallback::Self **)(gaia::Gaia::s_CallbackRequest + 4 * v1);
      v3 = *v2;
      if ( *v2 != nullptr )
      {
        gaia::GaiaRequestCallback::Destroy(*v2);
        opDelete(v3);
        v2 = (gaia::GaiaRequestCallback::Self **)(gaia::Gaia::s_CallbackRequest + 4 * v1);
      }
      *v2 = nullptr;
      v0 = gaia::Gaia::s_CallbackRequest;
      ++v1;
    }
    while ( v1 < ((uintptr_t)(*(uint8_t **)unk_2119B2C) - (uintptr_t)(gaia::Gaia::s_CallbackRequest)) >> 2 );
  }
  *(uintptr_t *)(unk_2119B2C) = (uintptr_t)(v0);
  return glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)&gaia::Gaia::s_CallbackRequestMutex);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::GetInstance  (binary VA: 0x1444ae0)
// Original: gaia::Gaia::GetInstance
// ----------------------------------------------------------------------------
int gaia::Gaia::GetInstance()
{
  gaia::Gaia::Self *v1;

  if ( gaia::Gaia::s_hasCachedInstance == 0 )
  {
    glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)&gaia::Gaia::s_InstanceMutex);
    if ( gaia::Gaia::s_instance == 0 )
    {
      v1 = (gaia::Gaia::Self *)opNew(0x254u);
      gaia::Gaia::Construct(v1);
      gaia::Gaia::s_instance = (uintptr_t)(uintptr_t)(v1);
    }
    gaia::Gaia::s_hasCachedInstance = 1;
    glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)&gaia::Gaia::s_InstanceMutex);
  }
  return gaia::Gaia::s_instance;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::StartWorkerThread  (binary VA: 0x1445190)
// Original: gaia::Gaia::StartWorkerThread
// ----------------------------------------------------------------------------
int gaia::Gaia::StartWorkerThread(const gaia::GaiaRequest::Self *a1)
{
  gaia::GaiaRequest::Self *v1;
  gaia::ThreadManager::Self *Instance;
  gaia::ThreadManager::Self *v4;

  v1 = (gaia::GaiaRequest::Self *)opNew(0x44u);
  gaia::GaiaRequest::Construct(v1, a1);
  Instance = (gaia::ThreadManager::Self *)gaia::ThreadManager::GetInstance(v4);
  return gaia::ThreadManager::pushTask(Instance, v1);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::GetServiceMutex  (binary VA: 0x14454f0)
// Original: gaia::Gaia::GetServiceMutex
// ----------------------------------------------------------------------------
char * gaia::Gaia::GetServiceMutex(gaia::Gaia::Self *self, int a2)
{
  char *result;

  switch ( a2 )
  {
    case 0:
      result = (char *)self + 220;
      break;
    case 1:
      result = *((char **)self + 142);
      break;
    case 2:
      result = *((char **)self + 143);
      break;
    case 3:
    case 7:
    case 8:
    case 9:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
      result = (char *)self + 228;
      break;
    case 4:
      result = *((char **)self + 144);
      break;
    case 5:
      result = *((char **)self + 145);
      break;
    case 6:
      result = *((char **)self + 146);
      break;
    case 10:
      result = *((char **)self + 140);
      break;
    case 11:
      result = *((char **)self + 139);
      break;
    case 12:
      result = (char *)(*((uint32_t *)self + 147) + 40);
      break;
    default:
      result = (char *)self + 228;
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::CancelRunningRequestForUserProfile  (binary VA: 0x1445580)
// Original: gaia::Gaia::CancelRunningRequestForUserProfile
// ----------------------------------------------------------------------------
int gaia::Gaia::CancelRunningRequestForUserProfile(gaia::Gaia::Self *self)
{
  char *ServiceMutex;
  int v2;
  int v3;
  char *v5;
  int Instance;
  int v7;

  ServiceMutex = gaia::Gaia::GetServiceMutex(self, 1);
  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)ServiceMutex);
  v2 = *((uint32_t *)self + 2);
  if ( v2 != 0 )
  {
    v3 = 1020;
    while ( 1 )
    {
      v7 = v3++;
      gaia::BaseServiceManager::CancelRequest(v2, v7);
      if ( v3 == 1027 )
        break;
      v2 = *((uint32_t *)self + 2);
    }
  }
  else
  {
    v5 = gaia::Gaia::GetServiceMutex(self, 11);
    glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)v5);
    Instance = gaia::Gaia::GetInstance();
    gaia::BaseServiceManager::CancelRequest(*(uint32_t *)(Instance + 48), 3007);
    glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)v5);
  }
  return glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)ServiceMutex);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::DeleteThread  (binary VA: 0x1445630)
// Original: gaia::Gaia::DeleteThread
// ----------------------------------------------------------------------------
void gaia::Gaia::DeleteThread(gaia::Gaia::Self *self)
{
  pthread_t **v1;
  void *v2;

  v1 = *((pthread_t ***)self + 137);
  if ( v1 != nullptr )
  {
    *((uint8_t *)self + 552) = 0;
    glwebtools::Thread::Join(v1);
    v2 = *((void **)self + 137);
    if ( v2 != nullptr )
    {
      glwebtools::Thread::Destroy(*((glwebtools::Thread::Self **)self + 137));
      opDelete(v2);
    }
    *((uint32_t *)self + 137) = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::Shutdown  (binary VA: 0x14456a0)
// Original: gaia::Gaia::Shutdown
// ----------------------------------------------------------------------------
int gaia::Gaia::Shutdown(gaia::Gaia_GlobalDeviceID::Self **self)
{
  int v1;
  int v2;
  glwebtools::Mutex::Self *v3;
  glwebtools::Mutex::Self *ServiceMutex;

  v1 = 0;
  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(self + 98));
  gaia::Gaia::DeleteThread((gaia::Gaia::Self *)self);
  gaia::Gaia_GlobalDeviceID::ShutDown(*(self + 148));
  gaia::Gaia::s_IsInitialized = 0;
  do
  {
    ServiceMutex = (glwebtools::Mutex::Self *)gaia::Gaia::GetServiceMutex((gaia::Gaia::Self *)self, v1);
    glwebtools::Mutex::Lock(ServiceMutex);
    v2 = (int)(uintptr_t)(*(self + v1 + 1));
    v3 = ServiceMutex;
    if ( v2 != 0 )
    {
      (*(void (**)(uint32_t))(*(uint32_t *)v2 + 16))((uint32_t)(uintptr_t)(*(self + v1 + 1)));
      *(self + v1 + 1) = nullptr;
      v3 = ServiceMutex;
    }
    ++v1;
    glwebtools::Mutex::Unlock(v3);
  }
  while ( v1 != 18 );
  gid::GlobalDeviceIDManager::ShutDown(ISingleton<gid::GlobalDeviceIDManager::Self>::s_instance);
  gaia::Gaia::TriggerAllCallbacks();
  glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)(self + 98));
  return 1;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::IsInitialized  (binary VA: 0x1445760)
// Original: gaia::Gaia::IsInitialized
// ----------------------------------------------------------------------------
int gaia::Gaia::IsInitialized()
{
  return gaia::Gaia::s_IsInitialized;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::IsInitializing  (binary VA: 0x1447260)
// Original: gaia::Gaia::IsInitializing
// ----------------------------------------------------------------------------
int gaia::Gaia::IsInitializing()
{
  return gaia::Gaia::s_IsInitializing;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::SetUserToPerformActionsFor  (binary VA: 0x1447280)
// Original: gaia::Gaia::SetUserToPerformActionsFor
// ----------------------------------------------------------------------------
int gaia::Gaia::SetUserToPerformActionsFor(int a1, int a2, int a3)
{
  int Instance;
  int v4;

  Instance = gaia::Gaia::GetInstance();
  gaia::Janus::FlushTokens(*(gaia::Janus::Self **)(Instance + 44));
  *(uint32_t *)(gaia::Gaia::GetInstance() + 388) = a2;
  v4 = gaia::Gaia::GetInstance();
  g4_std::string::assign_str(v4 + 384, a3);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::ResetUserToPerformActionsFor  (binary VA: 0x14472e0)
// Original: gaia::Gaia::ResetUserToPerformActionsFor
// ----------------------------------------------------------------------------
int gaia::Gaia::ResetUserToPerformActionsFor()
{
  int Instance;
  int v1;

  Instance = gaia::Gaia::GetInstance();
  gaia::Janus::FlushTokens(*(gaia::Janus::Self **)(Instance + 44));
  v1 = gaia::Gaia::GetInstance();
  g4_std_compat::string_assign(v1 + 384, &unk_1B15112, 0);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::GetNumberOfRequest  (binary VA: 0x1447330)
// Original: gaia::Gaia::GetNumberOfRequest
// ----------------------------------------------------------------------------
int gaia::Gaia::GetNumberOfRequest()
{
  gaia::ThreadManager::Self *Instance;
  gaia::ThreadManager::Self *v2;

  Instance = (gaia::ThreadManager::Self *)gaia::ThreadManager::GetInstance(v2);
  return gaia::ThreadManager::GetNumerOfRequest(Instance);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::GetGLWTInstance  (binary VA: 0x1447360)
// Original: gaia::Gaia::GetGLWTInstance
// ----------------------------------------------------------------------------
glwebtools::GlWebTools::Self * gaia::Gaia::GetGLWTInstance()
{
  glwebtools::GlWebTools::Self *result;
  glwebtools::GlWebTools::Self *v1;
  typedef uint8_t _g4_t_v2[32];
  typedef uint8_t _g4_t_v3[4];
  typedef uint8_t _g4_t_v4[4];
  typedef uint8_t _g4_t_v5[4];
  typedef uint8_t _g4_t_v6[4];
  typedef uint8_t _g4_t_v7[4];
  typedef uint8_t _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v2)) > _g4_s0 ? (8u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v3)) > _g4_s1 ? (40u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v4)) > _g4_s2 ? (44u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v5)) > _g4_s3 ? (48u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v6)) > _g4_s4 ? (52u + sizeof(_g4_t_v6)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v7)) > _g4_s5 ? (56u + sizeof(_g4_t_v7)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v8)) > _g4_s6 ? (60u + sizeof(_g4_t_v8)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 8u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 40u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 44u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 48u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 52u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 56u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 60u);

  result = (glwebtools::GlWebTools::Self *)(uintptr_t)(gaia::Gaia::s_glwtInstance);
  if ( gaia::Gaia::s_glwtInstance == 0 )
  {
    v1 = (glwebtools::GlWebTools::Self *)opNew(4u);
    glwebtools::GlWebTools::Construct(v1);
    gaia::Gaia::s_glwtInstance = (uintptr_t)(uintptr_t)(v1);
    if ( (uint8_t)glwebtools::GlWebTools::IsInitialized((glwebtools::GlWebToolsCore::Self **)v1) == 0 )
    {
      glwebtools::GlWebTools::CreationSettings::Construct((glwebtools::GlWebTools::CreationSettings::Self *)v2);
      glwebtools::GlWebTools::Initialize(
        gaia::Gaia::s_glwtInstance,
        (const glwebtools::GlWebTools::CreationSettings::Self *)v2);
      g4_std::string::Destroy(v8);
      g4_std::string::Destroy(v7);
      g4_std::string::Destroy(v6);
      g4_std::string::Destroy(v5);
      g4_std::string::Destroy(v4);
      g4_std::string::Destroy(v3);
    }
    return (glwebtools::GlWebTools::Self *)(uintptr_t)(gaia::Gaia::s_glwtInstance);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::IsLoggedIn  (binary VA: 0x1447640)
// Original: gaia::Gaia::IsLoggedIn
// ----------------------------------------------------------------------------
bool gaia::Gaia::IsLoggedIn(int a1, int a2)
{
  return gaia::Gaia_Janus::IsLoggedIn(*(uint32_t *)(a1 + 560), a2);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::GetInitializationAndLoginStatus  (binary VA: 0x1447670)
// Original: gaia::Gaia::GetInitializationAndLoginStatus
// ----------------------------------------------------------------------------
unsigned int gaia::Gaia::GetInitializationAndLoginStatus(int a1, int a2)
{
  char IsInitialized;
  int v3;

  IsInitialized = gaia::Gaia::IsInitialized();
  v3 = -21;
  if ( IsInitialized != 0 )
  {
    v3 = 0;
    if ( a2 != 19 )
      return !gaia::Gaia::IsLoggedIn(a1, a2) ? 0xFFFFFFED : 0;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::GetJanusToken  (binary VA: 0x1447c60)
// Original: gaia::Gaia::GetJanusToken
// ----------------------------------------------------------------------------
int gaia::Gaia::GetJanusToken(int a1, int a2)
{
  gaia::Gaia_Janus::GetJanusToken(a1, *(glwebtools::Mutex::Self **)(a2 + 560));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::GetServiceUrl  (binary VA: 0x1448300)
// Original: gaia::Gaia::GetServiceUrl
// ----------------------------------------------------------------------------
int gaia::Gaia::GetServiceUrl(int a1, int a2, char *a3, int a4, char a5, int a6, int a7)
{
  return gaia::Gaia_Pandora::GetServiceUrl(*(uint32_t *)(a1 + 556), a2, (Json::Value::Self *)a3, a4, a5, a6, a7);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::GetServiceUrl  (binary VA: 0x1448b30)
// Original: gaia::Gaia::GetServiceUrl
// ----------------------------------------------------------------------------
int gaia::Gaia::GetServiceUrl(gaia::Gaia_Pandora::Self **self, gaia::GaiaRequest::Self *a2)
{
  return gaia::Gaia_Pandora::GetServiceUrl(*(self + 139), a2);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::InternalInitialize  (binary VA: 0x1448d60)
// Original: gaia::Gaia::InternalInitialize
// ----------------------------------------------------------------------------
Json::Value::Self * gaia::Gaia::InternalInitialize(gaia::BaseServiceManager::Self ***a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, int a5, char a6, int a7, int a8)
{
  glwebtools::Mutex::Self *v8;
  char inited;
  int v10;
  Json::Value::Self *v11;
  glwebtools::Mutex::Self *v13;
  uint32_t *v14;
  int v15;
  char *v16;
  void *v17;
  Json::Value::Self *v18;
  void *v19;
  Json::Value::Self *v20;
  void *v21;
  int v22;
  Json::Value::Self *v23;
  void *v24;
  uint32_t *v25;
  uint32_t *v26;
  uint32_t *v27;
  uint32_t *v28;
  uint32_t *v29;
  uint32_t *v30;
  Json::Value::Self *v31;
  Json::Value::Self *v32;
  Json::Value::Self *v33;
  int Instance;
  gaia::ThreadManager::Self *v35;
  typedef glwebtools::Mutex::Self *_g4_t_dest;
  typedef gaia::ThreadManager::Self *_g4_t_desta;
  typedef gaia::ThreadManager::Self *_g4_t_destb;
  typedef Json::Value::Self *_g4_t_v39;
  typedef Json::Value::Self *_g4_t_PandoraUrl;
  typedef Json::Value::Self *_g4_t_v41;
  typedef Json::Value::Self *_g4_t_v42;
  typedef Json::Value::Self *_g4_t_v43;
  typedef Json::Value::Self *_g4_t_v44;
  typedef Json::Value::Self *_g4_t_v45;
  typedef Json::Value::Self *_g4_t_v46;
  typedef glwebtools::Mutex::Self *_g4_t_v47;
  typedef glwebtools::Mutex::Self *_g4_t_v48;
  typedef glwebtools::Mutex::Self *_g4_t_v49;
  typedef glwebtools::Mutex::Self *_g4_t_v50;
  typedef glwebtools::Mutex::Self *_g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef uint32_t *_g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef void *_g4_t_src;
  typedef uint8_t _g4_t_v60[16];
  typedef uint8_t _g4_t_v61[16];
  typedef uint8_t _g4_t_v62[16];
  typedef uint8_t _g4_t_v63[16];
  typedef uint8_t _g4_t_v64[16];
  typedef uint8_t _g4_t_v65[4];
  typedef uint8_t _g4_t_v66[4];
  typedef uint8_t _g4_t_v67[4];
  typedef uint8_t _g4_t_v68[4];
  typedef uint8_t _g4_t_v69[4];
  typedef uint8_t _g4_t_v70[4];
  typedef gaia::BaseServiceManager::Self **_g4_t_v71;
  typedef glwebtools::Mutex::Self *_g4_t_v72;
  typedef glwebtools::Mutex::Self *_g4_t_v73;
  typedef glwebtools::Mutex::Self *_g4_t_v74;
  typedef glwebtools::Mutex::Self *_g4_t_v75;
  typedef uint32_t *_g4_t_v76;
  typedef uint32_t *_g4_t_v77;
  typedef gaia::BaseServiceManager::Self **_g4_t_v78;
  typedef uint32_t *_g4_t_v79;
  typedef uint32_t *_g4_t_v80;
  typedef uint32_t _g4_t_v81[2];
  typedef glwebtools::Mutex::Self *_g4_t_v82;
  typedef glwebtools::Mutex::Self *_g4_t_v83[35];
  enum : size_t {
    _g4_s0 = 528u,
    _g4_s1 = (0u + sizeof(_g4_t_dest)) > _g4_s0 ? (0u + sizeof(_g4_t_dest)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_desta)) > _g4_s1 ? (0u + sizeof(_g4_t_desta)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_destb)) > _g4_s2 ? (0u + sizeof(_g4_t_destb)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v39)) > _g4_s3 ? (32u + sizeof(_g4_t_v39)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_PandoraUrl)) > _g4_s4 ? (32u + sizeof(_g4_t_PandoraUrl)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v41)) > _g4_s5 ? (32u + sizeof(_g4_t_v41)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v42)) > _g4_s6 ? (32u + sizeof(_g4_t_v42)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v43)) > _g4_s7 ? (32u + sizeof(_g4_t_v43)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v44)) > _g4_s8 ? (32u + sizeof(_g4_t_v44)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v45)) > _g4_s9 ? (32u + sizeof(_g4_t_v45)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v46)) > _g4_s10 ? (32u + sizeof(_g4_t_v46)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v47)) > _g4_s11 ? (36u + sizeof(_g4_t_v47)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v48)) > _g4_s12 ? (36u + sizeof(_g4_t_v48)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v49)) > _g4_s13 ? (36u + sizeof(_g4_t_v49)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v50)) > _g4_s14 ? (36u + sizeof(_g4_t_v50)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v51)) > _g4_s15 ? (36u + sizeof(_g4_t_v51)) : _g4_s15,
    _g4_s17 = (54u + sizeof(_g4_t_v52)) > _g4_s16 ? (54u + sizeof(_g4_t_v52)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v53)) > _g4_s17 ? (56u + sizeof(_g4_t_v53)) : _g4_s17,
    _g4_s19 = (68u + sizeof(_g4_t_v54)) > _g4_s18 ? (68u + sizeof(_g4_t_v54)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v55)) > _g4_s19 ? (72u + sizeof(_g4_t_v55)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v56)) > _g4_s20 ? (76u + sizeof(_g4_t_v56)) : _g4_s20,
    _g4_s22 = (80u + sizeof(_g4_t_v57)) > _g4_s21 ? (80u + sizeof(_g4_t_v57)) : _g4_s21,
    _g4_s23 = (84u + sizeof(_g4_t_v58)) > _g4_s22 ? (84u + sizeof(_g4_t_v58)) : _g4_s22,
    _g4_s24 = (88u + sizeof(_g4_t_src)) > _g4_s23 ? (88u + sizeof(_g4_t_src)) : _g4_s23,
    _g4_s25 = (92u + sizeof(_g4_t_v60)) > _g4_s24 ? (92u + sizeof(_g4_t_v60)) : _g4_s24,
    _g4_s26 = (108u + sizeof(_g4_t_v61)) > _g4_s25 ? (108u + sizeof(_g4_t_v61)) : _g4_s25,
    _g4_s27 = (124u + sizeof(_g4_t_v62)) > _g4_s26 ? (124u + sizeof(_g4_t_v62)) : _g4_s26,
    _g4_s28 = (140u + sizeof(_g4_t_v63)) > _g4_s27 ? (140u + sizeof(_g4_t_v63)) : _g4_s27,
    _g4_s29 = (156u + sizeof(_g4_t_v64)) > _g4_s28 ? (156u + sizeof(_g4_t_v64)) : _g4_s28,
    _g4_s30 = (172u + sizeof(_g4_t_v65)) > _g4_s29 ? (172u + sizeof(_g4_t_v65)) : _g4_s29,
    _g4_s31 = (176u + sizeof(_g4_t_v66)) > _g4_s30 ? (176u + sizeof(_g4_t_v66)) : _g4_s30,
    _g4_s32 = (180u + sizeof(_g4_t_v67)) > _g4_s31 ? (180u + sizeof(_g4_t_v67)) : _g4_s31,
    _g4_s33 = (184u + sizeof(_g4_t_v68)) > _g4_s32 ? (184u + sizeof(_g4_t_v68)) : _g4_s32,
    _g4_s34 = (188u + sizeof(_g4_t_v69)) > _g4_s33 ? (188u + sizeof(_g4_t_v69)) : _g4_s33,
    _g4_s35 = (192u + sizeof(_g4_t_v70)) > _g4_s34 ? (192u + sizeof(_g4_t_v70)) : _g4_s34,
    _g4_s36 = (196u + sizeof(_g4_t_v71)) > _g4_s35 ? (196u + sizeof(_g4_t_v71)) : _g4_s35,
    _g4_s37 = (200u + sizeof(_g4_t_v72)) > _g4_s36 ? (200u + sizeof(_g4_t_v72)) : _g4_s36,
    _g4_s38 = (204u + sizeof(_g4_t_v73)) > _g4_s37 ? (204u + sizeof(_g4_t_v73)) : _g4_s37,
    _g4_s39 = (208u + sizeof(_g4_t_v74)) > _g4_s38 ? (208u + sizeof(_g4_t_v74)) : _g4_s38,
    _g4_s40 = (212u + sizeof(_g4_t_v75)) > _g4_s39 ? (212u + sizeof(_g4_t_v75)) : _g4_s39,
    _g4_s41 = (216u + sizeof(_g4_t_v76)) > _g4_s40 ? (216u + sizeof(_g4_t_v76)) : _g4_s40,
    _g4_s42 = (220u + sizeof(_g4_t_v77)) > _g4_s41 ? (220u + sizeof(_g4_t_v77)) : _g4_s41,
    _g4_s43 = (224u + sizeof(_g4_t_v78)) > _g4_s42 ? (224u + sizeof(_g4_t_v78)) : _g4_s42,
    _g4_s44 = (228u + sizeof(_g4_t_v79)) > _g4_s43 ? (228u + sizeof(_g4_t_v79)) : _g4_s43,
    _g4_s45 = (232u + sizeof(_g4_t_v80)) > _g4_s44 ? (232u + sizeof(_g4_t_v80)) : _g4_s44,
    _g4_s46 = (236u + sizeof(_g4_t_v81)) > _g4_s45 ? (236u + sizeof(_g4_t_v81)) : _g4_s45,
    _g4_s47 = (244u + sizeof(_g4_t_v82)) > _g4_s46 ? (244u + sizeof(_g4_t_v82)) : _g4_s46,
    _g4_s48 = (304u + sizeof(_g4_t_v83)) > _g4_s47 ? (304u + sizeof(_g4_t_v83)) : _g4_s47
  };
  alignas(16) uint8_t _g4_sf[_g4_s48];
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 0u);
  _g4_t_desta &desta = *reinterpret_cast<_g4_t_desta *>(_g4_sf + 0u);
  _g4_t_destb &destb = *reinterpret_cast<_g4_t_destb *>(_g4_sf + 0u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 32u);
  _g4_t_PandoraUrl &PandoraUrl = *reinterpret_cast<_g4_t_PandoraUrl *>(_g4_sf + 32u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 32u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 32u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 32u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 32u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 32u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 32u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 36u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 36u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 36u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 36u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 36u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 54u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 56u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 68u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 72u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 76u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 80u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 84u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 88u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 92u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 108u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 124u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 140u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 156u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 172u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 176u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 180u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 184u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 188u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 192u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 196u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 200u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 204u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 208u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 212u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 216u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 220u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 224u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 228u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 232u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 236u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 244u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 304u);

  v8 = (glwebtools::Mutex::Self *)(a1 + 98);
  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(a1 + 98));
  if ( gaia::Gaia::s_IsInitialized != 0 )
  {
    v10 = 0;
    goto LABEL_3;
  }
  inited = gaia::Gaia::InitGLUID((gaia::Gaia::Self *)a1);
  v10 = -20;
  if ( inited == 0 )
    goto LABEL_3;
  glwebtools::Mutex::Unlock(v8);
  if ( a6 != 0 )
  {
    glwebtools::Mutex::Lock(v8);
    v30 = (uint32_t *)opNew(0x44u);
    *v30 = a8;
    v30[1] = a7;
    v30[2] = 502;
    Json::Value::Construct((int)(uintptr_t)(v30 + 3), nullptr);
    v30[7] = 0;
    v30[8] = 0;
    Json::Value::Construct((int)(uintptr_t)(v30 + 9), nullptr);
    v30[13] = 0;
    v30[14] = 0;
    v30[15] = 0;
    v30[16] = 0;
    Json::Value::Construct((int)(uintptr_t)(v60), a2);
    v31 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v30 + 3), "clientID");
    Json::Value::opAssign(v31, (const Json::Value::Self *)v60);
    Json::Value::Destroy((Json::Value::Self *)v60);
    Json::Value::Construct((int)(uintptr_t)(v61), a3);
    v32 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v30 + 3), "dataCenterName");
    Json::Value::opAssign(v32, (const Json::Value::Self *)v61);
    Json::Value::Destroy((Json::Value::Self *)v61);
    Json::Value::Construct((int)(uintptr_t)(v62), a4);
    v33 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v30 + 3), "dataCenterCountry");
    Json::Value::opAssign(v33, (const Json::Value::Self *)v62);
    Json::Value::Destroy((Json::Value::Self *)v62);
    Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(desta));
    gaia::ThreadManager::pushTask(Instance, v30);
    v35 = (gaia::ThreadManager::Self *)gaia::ThreadManager::GetInstance(destb);
    gaia::ThreadManager::Update(v35);
    glwebtools::Mutex::Unlock(v8);
    return nullptr;
  }
  glwebtools::Mutex::Lock(v8);
  if ( gaia::Gaia::s_IsInitializing != 0 )
  {
    v10 = -23;
    goto LABEL_3;
  }
  gaia::Gaia::s_IsInitializing = 1;
  v10 = 0;
  if ( gaia::Gaia::s_IsInitialized != 0 )
  {
LABEL_3:
    v39 = (Json::Value::Self *)v10;
    glwebtools::Mutex::Unlock(v8);
    return v39;
  }
  glwebtools::Mutex::Unlock(v8);
  v72 = (glwebtools::Mutex::Self *)a1[62];
  v73 = (glwebtools::Mutex::Self *)a1[63];
  v74 = (glwebtools::Mutex::Self *)a1[64];
  v71 = a1[61];
  v13 = (glwebtools::Mutex::Self *)a1[65];
  v76 = &dword_213B814;
  v77 = &dword_213B814;
  v79 = &dword_213B814;
  v80 = &dword_213B814;
  v75 = v13;
  g4_std::string::assign_str(&v77, a1 + 67);
  g4_std::string::assign_str(&v76, a1 + 66);
  g4_std::string::assign_str(&v79, a1 + 69);
  v78 = a1[68];
  g4_std::string::assign_str(&v80, a1 + 70);
  v54 = &dword_213B814;
  memset(v83, 0, 0x80u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&src), (char *)&unk_1B15112, (int)(uintptr_t)(&v53) + 1);
  if ( v78 != (gaia::BaseServiceManager::Self **)((char *)&dword_0 + 1) )
  {
    if ( v78 == (gaia::BaseServiceManager::Self **)((char *)&dword_0 + 2) )
    {
      g4_std_compat::string_assign((int)(uintptr_t)(&src), "v2_", 3u);
      if ( *(v76 - 3) != 0 )
      {
        g4_std::string::append_str(&src, &v76);
        g4_std::string::append((int)(uintptr_t)(&src), (char *)&off_1B5AAE7 + 2, 1u);
      }
      if ( *(v79 - 3) != 0 )
      {
        g4_std::string::append_str(&src, &v79);
        g4_std::string::append((int)(uintptr_t)(&src), (char *)&off_1B5AAE7 + 2, 1u);
      }
    }
    else
    {
      g4_std_compat::string_assign((int)(uintptr_t)(&src), &off_1B705E2, 3u);
    }
  }
  v14 = (uint32_t *)(src);
  memcpy(v83, src, *((uint32_t *)src - 3));
  v15 = *(v14 - 3);
  *(glwebtools::Mutex::Self **)((char *)v83 + v15) = v72;
  *(glwebtools::Mutex::Self **)((char *)&v83[1] + v15) = v73;
  *(glwebtools::Mutex::Self **)((char *)&v83[2] + v15) = v74;
  *(glwebtools::Mutex::Self **)((char *)&v83[3] + v15) = v75;
  sub_193A970((int)(uintptr_t)(&v55), v83, v15 + 16, (int)(uintptr_t)(&v53));
  v16 = (char *)src - 12;
  if ( (char *)src - 12 != (char *)dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)src - 1, 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v16);
  }
  glwebtools::Codec::EncodeBase64(v55, *(uint32_t *)(v55 - 12), &v54, 0);
  a1[87] = (gaia::BaseServiceManager::Self **)(&word_12 + 1);
  g4_std::string::assign_str(a1 + 88, &v54);
  g4_std::string::construct_copy(&v56, &v77);
  g4_std::string::assign_str(a1 + 89, &v56);
  v17 = (void *)(v56 - 12);
  if ( (uint32_t *)(v56 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v56 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v17);
  }
  if ( *((uint8_t *)a1 + 553) != 0 )
  {
    v83[1] = (glwebtools::Mutex::Self *)(a1 + 98);
    v83[0] = (glwebtools::Mutex::Self *)&off_2049618;
    glwebtools::Mutex::Lock(v8);
    *((uint8_t *)a1 + 552) = 1;
    v47 = (glwebtools::Mutex::Self *)opNew(0x18u);
    glwebtools::Thread::Construct(v47, (void (*)(void *, void *))gaia::Gaia::UpdateStatic, a1, nullptr, "Gaia Thread");
    a1[137] = (gaia::BaseServiceManager::Self **)v47;
    if ( v47 == nullptr )
    {
      gaia::Gaia::s_IsInitializing = 0;
      sub_59C7C0((int)(uintptr_t)(v83));
      g4_std::string::Destroy(&v55);
      g4_std::string::Destroy(&v54);
      g4_std::string::Destroy(&v80);
      g4_std::string::Destroy(&v79);
      g4_std::string::Destroy(&v77);
      g4_std::string::Destroy(&v76);
      return (Json::Value::Self *)-14;
    }
    glwebtools::Thread::Start(v47);
    v83[0] = (glwebtools::Mutex::Self *)&off_2049618;
    glwebtools::Mutex::Unlock(v83[1]);
    v83[0] = (glwebtools::Mutex::Self *)&off_2049608;
  }
  glwebtools::Mutex::Lock(v8);
  g4_std::string::assign_str(a1 + 60, a2);
  if ( a1[12] == nullptr )
  {
    v51 = (glwebtools::Mutex::Self *)opNew(0xBCu);
    gaia::Pandora::Construct(v51, (int)(uintptr_t)(a1 + 60));
    a1[12] = (gaia::BaseServiceManager::Self **)v51;
  }
  glwebtools::Mutex::Unlock(v8);
  gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v81);
  Json::Value::Construct((Json::Value::Self *)v63, "pandora");
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v57), "serviceName", (int)(uintptr_t)(&v52));
  v18 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(v81, &v57);
  Json::Value::opAssign(v18, (const Json::Value::Self *)v63);
  v19 = (void *)(v57 - 12);
  if ( (uint32_t *)(v57 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v57 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v19);
  }
  Json::Value::Destroy((Json::Value::Self *)v63);
  Json::Value::Construct((int)(uintptr_t)(v64), a3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v58), "dataCenter", (int)(uintptr_t)(&v52) + 1);
  v20 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(v81, &v58);
  Json::Value::opAssign(v20, (const Json::Value::Self *)v64);
  v21 = (void *)(v58 - 12);
  if ( (uint32_t *)(v58 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v58 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v21);
  }
  Json::Value::Destroy((Json::Value::Self *)v64);
  gaia::GaiaRequest::SetOperationCode(v81, 3005);
  v48 = v82;
  glwebtools::Mutex::Lock(v82);
  *(uint8_t *)(v81[0] + 4) = 1;
  glwebtools::Mutex::Unlock(v48);
  v22 = gaia::Gaia::GetInstance();
  PandoraUrl = (Json::Value::Self *)gaia::Gaia_Pandora::GetPandoraUrl(
                                *(gaia::Gaia_Pandora::Self **)(v22 + 556),
                                (gaia::GaiaRequest::Self *)v81);
  v49 = v82;
  glwebtools::Mutex::Lock(v82);
  dest = v49;
  v50 = (glwebtools::Mutex::Self *)v81[0];
  glwebtools::Mutex::Unlock(dest);
  g4_std::string::assign_str(a5, v50);
  if ( PandoraUrl != nullptr )
  {
    gaia::Gaia::Shutdown((gaia::Gaia_GlobalDeviceID::Self **)a1);
    glwebtools::Mutex::Lock(v8);
    gaia::Gaia::s_IsInitialized = 0;
    gaia::Gaia::s_IsInitializing = 0;
    glwebtools::Mutex::Unlock(v8);
    v23 = PandoraUrl;
  }
  else
  {
    glwebtools::Mutex::Lock(v8);
    gaia::GameloftID::RetrieveDeviceInfo((gaia::GameloftID::Self *)v65);
    g4_std::string::assign_str(a1 + 81, v65);
    g4_std::string::assign_str(a1 + 82, v66);
    g4_std::string::assign_str(a1 + 83, v67);
    g4_std::string::assign_str(a1 + 84, v68);
    g4_std::string::assign_str(a1 + 85, v69);
    g4_std::string::assign_str(a1 + 86, v70);
    g4_std::string::Destroy(v70);
    g4_std::string::Destroy(v69);
    g4_std::string::Destroy(v68);
    g4_std::string::Destroy(v67);
    g4_std::string::Destroy(v66);
    g4_std::string::Destroy(v65);
    gaia::Gaia::s_IsInitialized = 1;
    gaia::Gaia::s_IsInitializing = 0;
    gaia::Gaia_GlobalDeviceID::Initialize(a1[148], (int)(uintptr_t)(a2));
    gid::GlobalDeviceIDManager::Initialize(ISingleton<gid::GlobalDeviceIDManager::Self>::s_instance);
    glwebtools::Mutex::Unlock(v8);
    v23 = nullptr;
  }
  v41 = v23;
  glwebtools::Mutex::Lock(v8);
  gaia::Gaia::s_IsInitializing = 0;
  glwebtools::Mutex::Unlock(v8);
  gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v81);
  v11 = v41;
  v24 = (void *)(v55 - 12);
  if ( (uint32_t *)(v55 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v55 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v24);
    v11 = v41;
  }
  v25 = v54 - 3;
  if ( v54 - 3 != dword_213B808 && __sync_fetch_and_add(v54 - 1, 0xFFFFFFFF) <= 0 )
  {
    v46 = v11;
    g4_std::string::Rep::M_destroy(v25);
    v11 = v46;
  }
  v26 = v80 - 3;
  if ( v80 - 3 != dword_213B808 && __sync_fetch_and_add(v80 - 1, 0xFFFFFFFF) <= 0 )
  {
    v45 = v11;
    g4_std::string::Rep::M_destroy(v26);
    v11 = v45;
  }
  v27 = v79 - 3;
  if ( v79 - 3 != dword_213B808 && __sync_fetch_and_add(v79 - 1, 0xFFFFFFFF) <= 0 )
  {
    v44 = v11;
    g4_std::string::Rep::M_destroy(v27);
    v11 = v44;
  }
  v28 = v77 - 3;
  if ( v77 - 3 != dword_213B808 && __sync_fetch_and_add(v77 - 1, 0xFFFFFFFF) <= 0 )
  {
    v43 = v11;
    g4_std::string::Rep::M_destroy(v28);
    v11 = v43;
  }
  v29 = v76 - 3;
  if ( v76 - 3 != dword_213B808 && __sync_fetch_and_add(v76 - 1, 0xFFFFFFFF) <= 0 )
  {
    v42 = v11;
    g4_std::string::Rep::M_destroy(v29);
    return v42;
  }
  return v11;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::Initialize  (binary VA: 0x14499f0)
// Original: gaia::Gaia::Initialize
// ----------------------------------------------------------------------------
Json::Value::Self * gaia::Gaia::Initialize(gaia::BaseServiceManager::Self ***a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, char a5, int a6, int a7)
{
  Json::Value::Self *result;
  void *v8;
  typedef Json::Value::Self *_g4_t_v9;
  typedef int _g4_t_v10[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v10)) > _g4_s1 ? (28u + sizeof(_g4_t_v10)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);

  v10[0] = (int)(uintptr_t)(&dword_213B814);
  result = gaia::Gaia::InternalInitialize(a1, a2, a3, a4, (int)(uintptr_t)(v10), a5, a6, a7);
  v8 = (void *)(v10[0] - 12);
  if ( (uint32_t *)(v10[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v10[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v9 = result;
    g4_std::string::Rep::M_destroy(v8);
    return v9;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::InternalInitialize  (binary VA: 0x144a430)
// Original: gaia::Gaia::InternalInitialize
// ----------------------------------------------------------------------------
Json::Value::Self * gaia::Gaia::InternalInitialize(gaia::Gaia::Self *a1, uint32_t *a2, int a3, char a4, int a5, int a6)
{
  glwebtools::Mutex::Self *v6;
  char inited;
  int v8;
  uint32_t *v10;
  Json::Value::Self *v11;
  int Instance;
  gaia::ThreadManager::Self *v13;
  typedef gaia::ThreadManager::Self *_g4_t_v14;
  typedef gaia::ThreadManager::Self *_g4_t_v15;
  typedef Json::Value::Self *_g4_t_v16;
  typedef uint8_t _g4_t_v17[28];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v15)) > _g4_s1 ? (0u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v16)) > _g4_s2 ? (24u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v17)) > _g4_s3 ? (32u + sizeof(_g4_t_v17)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);

  v6 = (glwebtools::Mutex::Self *)((gaia::Gaia::Self *)((char *)a1 + 392));
  glwebtools::Mutex::Lock((gaia::Gaia::Self *)((char *)a1 + 392));
  if ( gaia::Gaia::s_IsInitialized != 0 )
  {
    v8 = 0;
    goto LABEL_3;
  }
  inited = gaia::Gaia::InitGLUID(a1);
  v8 = -20;
  if ( inited == 0 )
  {
LABEL_3:
    v16 = (Json::Value::Self *)v8;
    glwebtools::Mutex::Unlock(v6);
    return v16;
  }
  glwebtools::Mutex::Unlock(v6);
  if ( a4 == 0 )
    return (Json::Value::Self *)sub_1449A90((int)(uintptr_t)(a1), (int)(uintptr_t)(a2), a3);
  glwebtools::Mutex::Lock(v6);
  v10 = (uint32_t *)opNew(0x44u);
  *v10 = a6;
  v10[1] = a5;
  v10[2] = 501;
  Json::Value::Construct((int)(uintptr_t)(v10 + 3), nullptr);
  v10[7] = 0;
  v10[8] = 0;
  Json::Value::Construct((int)(uintptr_t)(v10 + 9), nullptr);
  v10[13] = 0;
  v10[14] = 0;
  v10[15] = 0;
  v10[16] = 0;
  Json::Value::Construct((int)(uintptr_t)(v17), a2);
  v11 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(v10 + 3), "clientID");
  Json::Value::opAssign(v11, (const Json::Value::Self *)v17);
  Json::Value::Destroy((Json::Value::Self *)v17);
  Instance = (int)(uintptr_t)(gaia::ThreadManager::GetInstance(v14));
  gaia::ThreadManager::pushTask(Instance, v10);
  v13 = (gaia::ThreadManager::Self *)gaia::ThreadManager::GetInstance(v15);
  gaia::ThreadManager::Update(v13);
  glwebtools::Mutex::Unlock(v6);
  return nullptr;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::Initialize  (binary VA: 0x144a5e0)
// Original: gaia::Gaia::Initialize
// ----------------------------------------------------------------------------
Json::Value::Self * gaia::Gaia::Initialize(gaia::Gaia::Self *a1, uint32_t *a2, char a3, int a4, int a5)
{
  Json::Value::Self *result;
  void *v6;
  typedef Json::Value::Self *_g4_t_v7;
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v8)) > _g4_s1 ? (28u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  v8[0] = (int)(uintptr_t)(&dword_213B814);
  result = gaia::Gaia::InternalInitialize(a1, a2, (int)(uintptr_t)(v8), a3, a4, a5);
  v6 = (void *)(v8[0] - 12);
  if ( (uint32_t *)(v8[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v8[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v7 = result;
    g4_std::string::Rep::M_destroy(v6);
    return v7;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::getServerTimeStamp  (binary VA: 0x144a770)
// Original: gaia::Gaia::getServerTimeStamp
// ----------------------------------------------------------------------------
int gaia::Gaia::getServerTimeStamp(gaia::Gaia_Pandora::Self **self, gaia::GaiaRequest::Self *a2)
{
  return gaia::Gaia_Pandora::getServerTimeStamp(*(self + 139), a2);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::GetServiceUrl  (binary VA: 0x144a910)
// Original: gaia::Gaia::GetServiceUrl
// ----------------------------------------------------------------------------
int gaia::Gaia::GetServiceUrl(int a1, char *a2, int a3, char a4, int a5, int a6)
{
  return gaia::Gaia_Pandora::GetServiceUrl(*(uint32_t *)(a1 + 556), (Json::Value::Self *)a2, a3, a4, a5, a6);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::RefreshAccessToken  (binary VA: 0x144c1f0)
// Original: gaia::Gaia::RefreshAccessToken
// ----------------------------------------------------------------------------
int gaia::Gaia::RefreshAccessToken(int a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, char a6, int a7, int a8)
{
  return gaia::Gaia_Janus::RefreshAccessToken(*(gaia::Gaia_Janus::Self **)(a1 + 560), a2, a3, a4, a5, a6, a7, a8);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::EncryptToken  (binary VA: 0x144c430)
// Original: gaia::Gaia::EncryptToken
// ----------------------------------------------------------------------------
int gaia::Gaia::EncryptToken(int a1, uint32_t *a2, uint32_t *a3, void **a4, int *a5, char a6, int a7, int a8)
{
  return gaia::Gaia_Janus::EncryptToken(*(gaia::Gaia::Self **)(a1 + 560), a2, a3, a4, a5, a6, a7, a8);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::RetrievePassword  (binary VA: 0x144c640)
// Original: gaia::Gaia::RetrievePassword
// ----------------------------------------------------------------------------
int gaia::Gaia::RetrievePassword(int a1, uint32_t *a2, int a3, char a4, int a5, int a6)
{
  return gaia::Gaia_Janus::RetrievePassword(*(gaia::Gaia::Self **)(a1 + 560), a2, a3, a4, a5, a6);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::CreateAccount  (binary VA: 0x144c940)
// Original: gaia::Gaia::CreateAccount
// ----------------------------------------------------------------------------
int gaia::Gaia::CreateAccount(int a1, uint32_t *a2, int a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, char a7, int a8, int a9)
{
  return gaia::Gaia_Janus::CreateAccount(*(gaia::Gaia::Self **)(a1 + 560), a2, a3, a4, a5, a6, a7, a8, a9);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::SendAuthentificate  (binary VA: 0x144cbc0)
// Original: gaia::Gaia::SendAuthentificate
// ----------------------------------------------------------------------------
int gaia::Gaia::SendAuthentificate(int a1, uint32_t *a2, uint32_t *a3, int a4, char a5, int a6, int a7)
{
  return gaia::Gaia_Janus::SendAuthentificate(*(gaia::Gaia::Self **)(a1 + 560), a2, a3, a4, a5, a6, a7);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::GetJanusStatus  (binary VA: 0x144ea60)
// Original: gaia::Gaia::GetJanusStatus
// ----------------------------------------------------------------------------
int gaia::Gaia::GetJanusStatus(gaia::Gaia_Janus::Self **self)
{
  return gaia::Gaia_Janus::GetJanusStatus(*(self + 140));
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::Update  (binary VA: 0x1451800)
// Original: gaia::Gaia::Update
// ----------------------------------------------------------------------------
int gaia::Gaia::Update(gaia::Gaia::Self *self)
{
  int v1;
  gaia::ThreadManager::Self *Instance;
  int v3;
  gaia::BaseServiceManager::Self **v4;
  char *ServiceMutex;
  glwebtools::Mutex::Self *v7;

  v1 = 0;
  Instance = (gaia::ThreadManager::Self *)gaia::ThreadManager::GetInstance(v7);
  gaia::ThreadManager::Update(Instance);
  gid::GlobalDeviceIDManager::Update(ISingleton<gid::GlobalDeviceIDManager::Self>::s_instance);
  v3 = gaia::Gaia::GetInstance();
  gaia::Gaia_GlobalDeviceID::Update(*(gaia::Gaia_GlobalDeviceID::Self **)(v3 + 592));
  v4 = (gaia::BaseServiceManager::Self **)((char *)self + 4);
  do
  {
    ServiceMutex = gaia::Gaia::GetServiceMutex(self, v1);
    glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)ServiceMutex);
    if ( *v4 != nullptr )
    {
      if ( G4_VCALL<uint8_t>(*v4, 24) != 0 )
      {
        gaia::BaseServiceManager::ResetUsageCount(*v4);
        if ( *((uint8_t *)*v4 + 4) != 0 )
          gaia::Gaia_Pandora::GetServiceUrl(
            *((uint32_t *)self + 139),
            *((uint32_t *)*v4 + 2),
            v4[18],
            (int)(uintptr_t)(self) + 4 * v1 + 148,
            1,
            (int)(uintptr_t)((int (*)(int, int, int, int))gaia::Gaia::callbackRequestCompleted),
            (int)(uintptr_t)(self));
        else
          gaia::Gaia_Pandora::GetServiceUrl(
            *((uint32_t *)self + 139),
            v4[18],
            (int)(uintptr_t)(self) + 4 * v1 + 148,
            1,
            (int)(uintptr_t)((int (*)(int, int, int, int))gaia::Gaia::callbackRequestCompleted),
            (int)(uintptr_t)(self));
      }
      if ( *v4 != nullptr )
        G4_VCALL<void>(*v4, 20);
    }
    ++v1;
    ++v4;
    glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)ServiceMutex);
  }
  while ( v1 != 18 );
  return gaia::Gaia::TriggerAllCallbacks();
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::UpdateStatic  (binary VA: 0x1451950)
// Original: gaia::Gaia::UpdateStatic
// ----------------------------------------------------------------------------
int gaia::Gaia::UpdateStatic(gaia::Gaia::Self *self)
{
  int result;

  if ( self != nullptr && *((uint8_t *)self + 552) != 0 )
  {
    do
    {
      gaia::Gaia::Update(self);
      result = glwebtools::Thread::Sleep(gaia::Gaia::m_threadedUpdatePeriod);
    }
    while ( *((uint8_t *)self + 552) != 0 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::getServerTimeStamp  (binary VA: 0x1451ab0)
// Original: gaia::Gaia::getServerTimeStamp
// ----------------------------------------------------------------------------
int gaia::Gaia::getServerTimeStamp(int a1, int *a2, char a3, int a4, int a5)
{
  return gaia::Gaia_Pandora::getServerTimeStamp(*(uint32_t *)(a1 + 556), a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::CancelAllRequests  (binary VA: 0x1452370)
// Original: gaia::Gaia::CancelAllRequests
// ----------------------------------------------------------------------------
int gaia::Gaia::CancelAllRequests(gaia::Gaia::Self *self)
{
  int v1;
  char *ServiceMutex;
  int v3;
  int result;

  v1 = 0;
  gaia::Gaia_Janus::CancelRequest(*((glwebtools::Mutex::Self **)self + 140), 1);
  gaia::Gaia_Pandora::CancelRequest(*((glwebtools::Mutex::Self **)self + 139), 1);
  gaia::Gaia_Seshat::CancelRequest(*((glwebtools::Mutex::Self **)self + 142), 1);
  gaia::Gaia_Hermes::CancelRequest(*((glwebtools::Mutex::Self **)self + 143), 1);
  gaia::Gaia_Olympus::CancelRequest(*((glwebtools::Mutex::Self **)self + 144), 1);
  gaia::Gaia_Osiris::CancelRequest(*((glwebtools::Mutex::Self **)self + 145), 1);
  gaia::Gaia_Iris::CancelRequest(*((glwebtools::Mutex::Self **)self + 146), 1);
  gaia::Gaia_Hestia::CancelRequest(*((uint32_t *)self + 147), 1);
  gaia::Gaia_GlobalDeviceID::CancelRequest(*((glwebtools::Mutex::Self **)self + 148), 1);
  gaia::Gaia_GlobalDeviceID::Update(*((gaia::Gaia_GlobalDeviceID::Self **)self + 148));
  do
  {
    ServiceMutex = gaia::Gaia::GetServiceMutex(self, v1);
    glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)ServiceMutex);
    v3 = *((uint32_t *)self + v1 + 1);
    if ( v3 != 0 )
      (*(void (**)(uint32_t))(*(uint32_t *)v3 + 20))(*((uint32_t *)self + v1 + 1));
    ++v1;
    result = glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)ServiceMutex);
  }
  while ( v1 != 18 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::Destroy  (binary VA: 0x14524a0)
// Original: gaia::Gaia::~Gaia
// ----------------------------------------------------------------------------
void gaia::Gaia::Destroy(gaia::Gaia::Self *self)
{
  gaia::ThreadManager::Self *Instance;
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  void *v6;
  void *v7;
  void *v8;
  int v9;
  void *v10;
  void *v11;
  gaia::Gaia::Self *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  gaia::Gaia::Self *v31;
  int v32;
  gaia::Gaia_Eve::Self *v33;

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2095A90);
  if ( ISingleton<gaia::GaiaActionsManager::Self>::s_instance != 0 )
  {
    v33 = (gaia::Gaia_Eve::Self *)ISingleton<gaia::GaiaActionsManager::Self>::s_instance;
    (*(void (**)(void))(*(uint32_t *)ISingleton<gaia::GaiaActionsManager::Self>::s_instance + 4))();
  }
  ISingleton<gaia::GaiaActionsManager::Self>::s_instance = 0;
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    gaia::Console::Print((gaia::Console::Self *)&loc_4, "%s", "Calling destructor on GlWebTools before deintialization");
    gaia::Gaia::Shutdown((gaia::Gaia_GlobalDeviceID::Self **)self);
  }
  if ( ISingleton<gid::GlobalDeviceIDManager::Self>::s_instance != nullptr )
  {
    v33 = (gaia::Gaia_Eve::Self *)ISingleton<gid::GlobalDeviceIDManager::Self>::s_instance;
    (*(void (**)(void))(*(uint32_t *)ISingleton<gid::GlobalDeviceIDManager::Self>::s_instance + 4))();
  }
  ISingleton<gid::GlobalDeviceIDManager::Self>::s_instance = nullptr;
  if ( ISingleton<gaia::DataCenterManager::Self>::s_instance != nullptr )
  {
    v33 = (gaia::Gaia_Eve::Self *)ISingleton<gaia::DataCenterManager::Self>::s_instance;
    (*(void (**)(void))(*(uint32_t *)ISingleton<gaia::DataCenterManager::Self>::s_instance + 4))();
  }
  ISingleton<gaia::DataCenterManager::Self>::s_instance = nullptr;
  Instance = (gaia::ThreadManager::Self *)gaia::ThreadManager::GetInstance(v33);
  gaia::ThreadManager::Drop(Instance);
  v2 = *((void **)self + 139);
  if ( v2 != nullptr )
  {
    glwebtools::Mutex::Destroy(*((glwebtools::Mutex::Self **)self + 139));
    opDelete(v2);
    *((uint32_t *)self + 139) = 0;
  }
  v3 = *((void **)self + 140);
  if ( v3 != nullptr )
  {
    glwebtools::Mutex::Destroy(*((glwebtools::Mutex::Self **)self + 140));
    opDelete(v3);
    *((uint32_t *)self + 140) = 0;
  }
  v4 = *((void **)self + 142);
  if ( v4 != nullptr )
  {
    glwebtools::Mutex::Destroy(*((glwebtools::Mutex::Self **)self + 142));
    opDelete(v4);
    *((uint32_t *)self + 142) = 0;
  }
  v5 = *((void **)self + 143);
  if ( v5 != nullptr )
  {
    glwebtools::Mutex::Destroy(*((glwebtools::Mutex::Self **)self + 143));
    opDelete(v5);
    *((uint32_t *)self + 143) = 0;
  }
  v6 = *((void **)self + 144);
  if ( v6 != nullptr )
  {
    glwebtools::Mutex::Destroy(*((glwebtools::Mutex::Self **)self + 144));
    opDelete(v6);
    *((uint32_t *)self + 144) = 0;
  }
  v7 = *((void **)self + 145);
  if ( v7 != nullptr )
  {
    glwebtools::Mutex::Destroy(*((glwebtools::Mutex::Self **)self + 145));
    opDelete(v7);
    *((uint32_t *)self + 145) = 0;
  }
  v8 = *((void **)self + 146);
  if ( v8 != nullptr )
  {
    glwebtools::Mutex::Destroy(*((glwebtools::Mutex::Self **)self + 146));
    opDelete(v8);
    *((uint32_t *)self + 146) = 0;
  }
  v9 = *((uint32_t *)self + 147);
  if ( v9 != 0 )
  {
    (*(void (**)(uint32_t))(*(uint32_t *)v9 + 4))(*((uint32_t *)self + 147));
    *((uint32_t *)self + 147) = 0;
  }
  if ( gaia::Gaia::s_glwtInstance != 0 )
    glwebtools::GlWebTools::Release((glwebtools::GlWebToolsCore::Self **)gaia::Gaia::s_glwtInstance);
  v10 = *((void **)self + 148);
  if ( v10 != nullptr )
  {
    gaia::Gaia_GlobalDeviceID::Destroy(*((gaia::Gaia_GlobalDeviceID::Self **)self + 148));
    opDelete(v10);
  }
  v11 = *((void **)self + 141);
  if ( v11 != nullptr )
  {
    gaia::Gaia_Eve::Destroy(*((gaia::Gaia_Eve::Self **)self + 141));
    opDelete(v11);
  }
  v12 = (gaia::Gaia::Self *)((char *)self + 544);
  do
  {
    v12 = (gaia::Gaia::Self *)((char *)v12 - 8);
    (**(void (***)(gaia::Gaia::Self *))v12)(v12);
  }
  while ( (gaia::Gaia::Self *)((char *)self + 400) != v12 );
  glwebtools::Mutex::Destroy((gaia::Gaia::Self *)((char *)self + 392));
  v13 = *((uint32_t *)self + 96);
  if ( (uint32_t *)(v13 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v13 - 12));
  }
  g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_erase(
    (int)(uintptr_t)(self) + 360,
    *((void **)self + 92));
  v14 = *((uint32_t *)self + 89);
  if ( (uint32_t *)(v14 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v14 - 12));
  }
  v15 = *((uint32_t *)self + 88);
  if ( (uint32_t *)(v15 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v15 - 12));
  }
  v16 = *((uint32_t *)self + 86);
  if ( (uint32_t *)(v16 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v16 - 12));
  }
  v17 = *((uint32_t *)self + 85);
  if ( (uint32_t *)(v17 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v17 - 12));
  }
  v18 = *((uint32_t *)self + 84);
  if ( (uint32_t *)(v18 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v18 - 12));
  }
  v19 = *((uint32_t *)self + 83);
  if ( (uint32_t *)(v19 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v19 - 12));
  }
  v20 = *((uint32_t *)self + 82);
  if ( (uint32_t *)(v20 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v20 - 12));
  }
  v21 = *((uint32_t *)self + 81);
  if ( (uint32_t *)(v21 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v21 - 12));
  }
  v22 = *((uint32_t *)self + 80);
  if ( (uint32_t *)(v22 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v22 - 12));
  }
  v23 = *((uint32_t *)self + 79);
  if ( (uint32_t *)(v23 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v23 - 12));
  }
  v24 = *((uint32_t *)self + 77);
  if ( (uint32_t *)(v24 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v24 - 12));
  }
  v25 = *((uint32_t *)self + 76);
  if ( (uint32_t *)(v25 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v25 - 12));
  }
  v26 = *((uint32_t *)self + 70);
  if ( (uint32_t *)(v26 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v26 - 12));
  }
  v27 = *((uint32_t *)self + 69);
  if ( (uint32_t *)(v27 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v27 - 12));
  }
  v28 = *((uint32_t *)self + 67);
  if ( (uint32_t *)(v28 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v28 - 12));
  }
  v29 = *((uint32_t *)self + 66);
  if ( (uint32_t *)(v29 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v29 - 12));
  }
  v30 = *((uint32_t *)self + 60);
  if ( (uint32_t *)(v30 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v30 - 12));
  }
  glwebtools::Mutex::Destroy((gaia::Gaia::Self *)((char *)self + 228));
  glwebtools::Mutex::Destroy((gaia::Gaia::Self *)((char *)self + 220));
  v31 = (gaia::Gaia::Self *)((char *)self + 220);
  do
  {
    v32 = *((uint32_t *)v31 - 1);
    if ( (uint32_t *)(v32 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v32 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy((void *)(v32 - 12));
    }
    v31 = (gaia::Gaia::Self *)((char *)v31 - 4);
  }
  while ( (gaia::Gaia::Self *)((char *)self + 148) != v31 );
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::DestroyInstance  (binary VA: 0x1452b70)
// Original: gaia::Gaia::DestroyInstance
// ----------------------------------------------------------------------------
int gaia::Gaia::DestroyInstance()
{
  int v0;
  gaia::ThreadManager::Self *Instance;
  gaia::Gaia::Self *v3;
  gaia::ThreadManager::Self *v4;

  v0 = 0;
  if ( gaia::Gaia::s_instance != 0
    && (**(uint8_t (***)(gaia::Gaia::Self *))gaia::Gaia::s_instance)((gaia::Gaia::Self *)(uintptr_t)(gaia::Gaia::s_instance)) != 0 )
  {
    gaia::Gaia::DeleteThread((gaia::Gaia::Self *)(uintptr_t)(gaia::Gaia::s_instance));
    gaia::Gaia::CancelAllRequests((gaia::Gaia::Self *)(uintptr_t)(gaia::Gaia::s_instance));
    Instance = (gaia::ThreadManager::Self *)gaia::ThreadManager::GetInstance(v4);
    gaia::ThreadManager::ForceCloseAllThreads(Instance);
    gaia::Gaia::Shutdown((gaia::Gaia_GlobalDeviceID::Self **)gaia::Gaia::s_instance);
    v3 = (gaia::Gaia::Self *)(uintptr_t)(gaia::Gaia::s_instance);
    if ( gaia::Gaia::s_instance != 0 )
    {
      gaia::Gaia::Destroy((gaia::Gaia::Self *)(uintptr_t)(gaia::Gaia::s_instance));
      opDelete(v3);
    }
    gaia::Gaia::s_instance = (uintptr_t)(uintptr_t)(nullptr);
    v0 = 1;
    gaia::Gaia::s_hasCachedInstance = 0;
    gaia::Gaia::TriggerAllCallbacks();
  }
  return v0;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::Logout  (binary VA: 0x1452e70)
// Original: gaia::Gaia::Logout
// ----------------------------------------------------------------------------
int gaia::Gaia::Logout(int a1, int a2)
{
  return gaia::Gaia_Janus::Logout(*(uint32_t *)(a1 + 560), a2);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::GetCredentialDetails  (binary VA: 0x1457650)
// Original: gaia::Gaia::GetCredentialDetails
// ----------------------------------------------------------------------------
int gaia::Gaia::GetCredentialDetails(gaia::Gaia::Self *a1, int a2, int a3, gaia::Gaia::Self *a4)
{
  char IsInitialized;
  int v5;
  bool IsLoggedIn;
  uint32_t *v7;
  uint32_t *v8;
  bool v9; // cc
  void *v10;
  uint32_t *v11;
  char inited;
  int v14;
  int v15;
  int v16;
  int v17;
  uint32_t *v18;
  int v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint32_t *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef uint32_t *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint8_t _g4_t_v27[4];
  typedef uint8_t _g4_t_v28[4];
  typedef uint8_t _g4_t_v29[4];
  typedef void *_g4_t_src;
  typedef int _g4_t_v31;
  typedef uint32_t *_g4_t_v32;
  typedef uint32_t _g4_t_v33[2];
  typedef uint32_t *_g4_t_v34;
  typedef uint32_t _g4_t_v35[3];
  typedef uint8_t _g4_t_v36[4];
  typedef uint8_t _g4_t_v37[4];
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef uint32_t *_g4_t_v43;
  typedef uint32_t *_g4_t_v44;
  typedef int _g4_t_v45;
  typedef uint32_t *_g4_t_v46;
  typedef uint32_t *_g4_t_v47;
  typedef uint32_t _g4_t_dest[39];
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (0u + sizeof(_g4_t_v20)) > _g4_s0 ? (0u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v21)) > _g4_s1 ? (0u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v22)) > _g4_s2 ? (0u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v23)) > _g4_s3 ? (12u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v24)) > _g4_s4 ? (20u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v25)) > _g4_s5 ? (24u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v26)) > _g4_s6 ? (28u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v27)) > _g4_s7 ? (32u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v28)) > _g4_s8 ? (36u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v29)) > _g4_s9 ? (40u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_src)) > _g4_s10 ? (44u + sizeof(_g4_t_src)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v31)) > _g4_s11 ? (48u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v32)) > _g4_s12 ? (52u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v33)) > _g4_s13 ? (56u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v34)) > _g4_s14 ? (64u + sizeof(_g4_t_v34)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v35)) > _g4_s15 ? (68u + sizeof(_g4_t_v35)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v36)) > _g4_s16 ? (80u + sizeof(_g4_t_v36)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v37)) > _g4_s17 ? (84u + sizeof(_g4_t_v37)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v38)) > _g4_s18 ? (88u + sizeof(_g4_t_v38)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v39)) > _g4_s19 ? (92u + sizeof(_g4_t_v39)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v40)) > _g4_s20 ? (96u + sizeof(_g4_t_v40)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v41)) > _g4_s21 ? (100u + sizeof(_g4_t_v41)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v42)) > _g4_s22 ? (104u + sizeof(_g4_t_v42)) : _g4_s22,
    _g4_s24 = (108u + sizeof(_g4_t_v43)) > _g4_s23 ? (108u + sizeof(_g4_t_v43)) : _g4_s23,
    _g4_s25 = (112u + sizeof(_g4_t_v44)) > _g4_s24 ? (112u + sizeof(_g4_t_v44)) : _g4_s24,
    _g4_s26 = (116u + sizeof(_g4_t_v45)) > _g4_s25 ? (116u + sizeof(_g4_t_v45)) : _g4_s25,
    _g4_s27 = (120u + sizeof(_g4_t_v46)) > _g4_s26 ? (120u + sizeof(_g4_t_v46)) : _g4_s26,
    _g4_s28 = (124u + sizeof(_g4_t_v47)) > _g4_s27 ? (124u + sizeof(_g4_t_v47)) : _g4_s27,
    _g4_s29 = (128u + sizeof(_g4_t_dest)) > _g4_s28 ? (128u + sizeof(_g4_t_dest)) : _g4_s28
  };
  alignas(16) uint8_t _g4_sf[_g4_s29];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 36u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 40u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 44u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 48u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 52u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 56u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 64u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 68u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 80u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 84u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 88u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 92u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 96u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 100u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 104u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 108u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 112u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 116u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 120u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 124u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 128u);

  glwebtools::Mutex::Lock((gaia::Gaia::Self *)((char *)a1 + 392));
  if ( a2 != 19 )
  {
    IsInitialized = gaia::Gaia::IsInitialized();
    v5 = -21;
    if ( IsInitialized == 0 )
      goto LABEL_21;
    IsLoggedIn = gaia::Gaia::IsLoggedIn((int)(uintptr_t)(a1), a2);
    v5 = -19;
    if ( !IsLoggedIn )
      goto LABEL_21;
  }
  g4_std_compat::string_assign((int)(uintptr_t)(a4), &unk_1B15112, 0);
  v32 = &dword_213B814;
  v33[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( (uint8_t)gaia::Gaia::IsInitialized() != 0 )
  {
    if ( a2 == 19 )
    {
      v31 = *((uint32_t *)a1 + 87);
      g4_std::string::assign_str(&v32, (char *)a1 + 352);
      g4_std::string::assign_str(v33, (char *)a1 + 356);
      v9 = a3 <= 1;
      if ( a3 != 1 )
        goto LABEL_15;
LABEL_29:
      g4_std::string::assign_str(a4, v33);
      v5 = 0;
      goto LABEL_19;
    }
    v7 = *((uint32_t **)a1 + 92);
    v8 = (uint32_t *)((char *)a1 + 364);
    if ( v7 == nullptr )
      goto LABEL_27;
    do
    {
      while ( a2 <= v7[4] )
      {
        v8 = v7;
        v7 = (uint32_t *)v7[2];
        if ( v7 == nullptr )
          goto LABEL_11;
      }
      v7 = (uint32_t *)v7[3];
    }
    while ( v7 != nullptr );
LABEL_11:
    if ( v8 == (uint32_t *)((char *)a1 + 364) || a2 < v8[4] )
    {
LABEL_27:
      v35[1] = a2;
      v33[1] = 0;
      v35[2] = 0;
      v34 = &dword_213B814;
      v35[0] = (uint32_t)(uintptr_t)(&dword_213B814);
      g4_std::string::construct_copy(v36, &v34);
      g4_std::string::construct_copy(v37, v35);
      g4_std::Rb_tree_gaia_BaseServiceManager_412088::M_insert_unique(&v23);
      v8 = v23;
      g4_std::string::Destroy(v37);
      g4_std::string::Destroy(v36);
      g4_std::string::Destroy(v35);
      g4_std::string::Destroy(&v34);
    }
    v31 = v8[5];
    g4_std::string::assign_str(&v32, v8 + 6);
    g4_std::string::assign_str(v33, v8 + 7);
  }
  else
  {
    inited = gaia::Gaia::InitGLUID(a1);
    v5 = -20;
    if ( inited == 0 )
      goto LABEL_19;
    v14 = *((uint32_t *)a1 + 61);
    v39 = *((uint32_t *)a1 + 62);
    v15 = *((uint32_t *)a1 + 63);
    v38 = v14;
    v40 = v15;
    v16 = *((uint32_t *)a1 + 65);
    v17 = *((uint32_t *)a1 + 64);
    v43 = v32;
    v44 = v32;
    v46 = v32;
    v47 = v32;
    v41 = v17;
    v42 = v16;
    g4_std::string::assign_str(&v44, (char *)a1 + 268);
    g4_std::string::assign_str(&v43, (char *)a1 + 264);
    g4_std::string::assign_str(&v46, (char *)a1 + 276);
    v45 = *((uint32_t *)a1 + 68);
    g4_std::string::assign_str(&v47, (char *)a1 + 280);
    memset(dest, 0, 0x80u);
    v25 = v32;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&src), (char *)&unk_1B15112, (int)(uintptr_t)(&v24) + 1);
    if ( v45 != 1 )
    {
      if ( v45 == 2 )
      {
        g4_std_compat::string_assign((int)(uintptr_t)(&src), "v2_", 3u);
        if ( *(v43 - 3) != 0 )
        {
          g4_std::string::append_str(&src, &v43);
          g4_std::string::append((int)(uintptr_t)(&src), (char *)&off_1B5AAE7 + 2, 1u);
        }
        if ( *(v46 - 3) != 0 )
        {
          g4_std::string::append_str(&src, &v46);
          g4_std::string::append((int)(uintptr_t)(&src), (char *)&off_1B5AAE7 + 2, 1u);
        }
      }
      else
      {
        g4_std_compat::string_assign((int)(uintptr_t)(&src), &off_1B705E2, 3u);
      }
    }
    v18 = (uint32_t *)(src);
    memcpy(dest, src, *((uint32_t *)src - 3));
    v19 = *(v18 - 3);
    *(uint32_t *)((char *)dest + v19) = v39;
    *(uint32_t *)((char *)&dest[1] + v19) = v40;
    *(uint32_t *)((char *)&dest[2] + v19) = v41;
    *(uint32_t *)((char *)&dest[3] + v19) = v42;
    sub_193A970((int)(uintptr_t)(&v26), dest, v19 + 16, (int)(uintptr_t)(&v24));
    g4_std::string::Destroy(&src);
    glwebtools::Codec::EncodeBase64(v26, *(uint32_t *)(v26 - 12), &v25, 0);
    v31 = 19;
    g4_std::string::assign_str(&v32, &v25);
    g4_std::string::construct_copy(v27, &v44);
    g4_std::string::assign_str(v33, v27);
    g4_std::string::Destroy(v27);
    g4_std::string::Destroy(&v26);
    g4_std::string::Destroy(&v25);
    g4_std::string::Destroy(&v47);
    g4_std::string::Destroy(&v46);
    g4_std::string::Destroy(&v44);
    g4_std::string::Destroy(&v43);
  }
  v9 = a3 <= 1;
  if ( a3 == 1 )
    goto LABEL_29;
LABEL_15:
  if ( !v9 )
  {
    if ( a3 == 2 )
    {
      if ( v31 == 19 )
      {
        g4_std::string::append((int)(uintptr_t)(a4), "android", 7u);
      }
      else
      {
        gaia::BaseServiceManager::GetCredentialString(v28);
        g4_std::string::append_str(a4, v28);
        g4_std::string::Destroy(v28);
      }
      g4_std::string::append((int)(uintptr_t)(a4), ":", 1u);
      g4_std::string::append_str(a4, &v32);
      v5 = 0;
      goto LABEL_19;
    }
    if ( a3 == 3 )
    {
      if ( v31 == 19 )
      {
        g4_std::string::append((int)(uintptr_t)(a4), "android", 7u);
      }
      else
      {
        gaia::BaseServiceManager::GetCredentialString(v29);
        g4_std::string::append_str(a4, v29);
        g4_std::string::Destroy(v29);
      }
      v5 = 0;
      goto LABEL_19;
    }
  }
  else if ( a3 == 0 )
  {
    g4_std::string::assign_str(a4, &v32);
    v5 = 0;
LABEL_19:
    v10 = (void *)(v33[0] - 12);
    if ( (uint32_t *)(v33[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v33[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      v22 = v5;
      g4_std::string::Rep::M_destroy(v10);
      v5 = v22;
    }
    v11 = v32 - 3;
    if ( v32 - 3 != dword_213B808 && __sync_fetch_and_add(v32 - 1, 0xFFFFFFFF) <= 0 )
    {
      v21 = v5;
      g4_std::string::Rep::M_destroy(v11);
      v5 = v21;
    }
LABEL_21:
    v20 = v5;
    glwebtools::Mutex::Unlock((gaia::Gaia::Self *)((char *)a1 + 392));
    return v20;
  }
  g4_std_compat::string_assign((int)(uintptr_t)(a4), "ERROR", 5u);
  v5 = 0;
  goto LABEL_19;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::Authorize  (binary VA: 0x145c240)
// Original: gaia::Gaia::Authorize
// ----------------------------------------------------------------------------
int gaia::Gaia::Authorize(int a1, gaia::GaiaRequest::Self *a2)
{
  return gaia::Gaia_Janus::Authorize(*(gaia::Gaia_Janus::Self **)(a1 + 560), a2);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::Login  (binary VA: 0x147efd0)
// Original: gaia::Gaia::Login
// ----------------------------------------------------------------------------
int gaia::Gaia::Login(int a1, int a2, uint32_t *a3, uint32_t *a4, char a5, int a6, int a7)
{
  return gaia::Gaia_Janus::Login(*(gaia::Gaia::Self **)(a1 + 560), a2, a3, a4, a5, a6, a7);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::AddPermission  (binary VA: 0x147fa10)
// Original: gaia::Gaia::AddPermission
// ----------------------------------------------------------------------------
int gaia::Gaia::AddPermission(int a1, uint32_t *a2, int a3, int a4, uint32_t *a5, char a6, int a7, int a8)
{
  return gaia::Gaia_Janus::AddPermission(*(gaia::Gaia_Janus::Self **)(a1 + 560), a2, a3, a4, a5, a6, a7, a8);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::AddCredential  (binary VA: 0x14800d0)
// Original: gaia::Gaia::AddCredential
// ----------------------------------------------------------------------------
int gaia::Gaia::AddCredential(int a1, uint32_t *a2, uint32_t *a3, int a4, int a5, uint32_t *a6, char a7, int a8, int a9)
{
  return gaia::Gaia_Janus::AddCredential(*(gaia::Gaia_Janus::Self **)(a1 + 560), a2, a3, a4, a5, a6, a7, a8, a9);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::AddAlias  (binary VA: 0x1480350)
// Original: gaia::Gaia::AddAlias
// ----------------------------------------------------------------------------
int gaia::Gaia::AddAlias(int a1, int a2, int a3, char a4, int a5, int a6)
{
  int Instance;

  Instance = gaia::Gaia::GetInstance();
  return gaia::Gaia_Janus::AddAlias(*(gaia::Gaia::Self **)(Instance + 560), a2, a3, a4, a5, a6);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::FindUserByAlias  (binary VA: 0x1480640)
// Original: gaia::Gaia::FindUserByAlias
// ----------------------------------------------------------------------------
int gaia::Gaia::FindUserByAlias(int a1, int a2, int a3, uint32_t *a4, char a5, int a6, int a7)
{
  int Instance;

  Instance = gaia::Gaia::GetInstance();
  return gaia::Gaia_Janus::FindUserByAlias(*(gaia::Gaia::Self **)(Instance + 560), a2, a3, a4, a5, a6, a7);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::SetDeviceInfo  (binary VA: 0x14809f0)
// Original: gaia::Gaia::SetDeviceInfo
// ----------------------------------------------------------------------------
int gaia::Gaia::SetDeviceInfo(int a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, char a7, int a8, int a9)
{
  return gaia::Gaia_Janus::SetDeviceInfo(*(gaia::Gaia::Self **)(a1 + 560), a2, a3, a4, a5, a6, a7, a8, a9);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::StartAndAuthorizeJanus  (binary VA: 0x1480a60)
// Original: gaia::Gaia::StartAndAuthorizeJanus
// ----------------------------------------------------------------------------
int gaia::Gaia::StartAndAuthorizeJanus(int a1, int a2, uint32_t *a3)
{
  return gaia::Gaia_Janus::StartAndAuthorizeJanus(*(gaia::Gaia_Janus::Self **)(a1 + 560), a2, a3);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::Authorize  (binary VA: 0x1480aa0)
// Original: gaia::Gaia::Authorize
// ----------------------------------------------------------------------------
int gaia::Gaia::Authorize(int a1, uint32_t *a2, int a3, char a4, int a5, int a6)
{
  return gaia::Gaia_Janus::Authorize(*(gaia::Gaia_Janus::Self **)(a1 + 560), a2, a3, a4, a5, a6);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::Login  (binary VA: 0x1496150)
// Original: gaia::Gaia::Login
// ----------------------------------------------------------------------------
int gaia::Gaia::Login(int a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, char a6, int a7, int a8)
{
  return gaia::Gaia_Janus::Login(*(gaia::Gaia::Self **)(a1 + 560), a2, a3, a4, a5, a6, a7, a8);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::GetCredentialListForAccount  (binary VA: 0x14967c0)
// Original: gaia::Gaia::GetCredentialListForAccount
// ----------------------------------------------------------------------------
int gaia::Gaia::GetCredentialListForAccount(int a1, int a2, int a3, char a4, int a5, int a6)
{
  return gaia::Gaia_Janus::GetCredentialListForAccount(*(gaia::Gaia_Janus::Self **)(a1 + 560), a2, a3, a4, a5, a6);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::PerformAsyncActionDataContainerPtr  (binary VA: 0x1499390)
// Original: gaia::Gaia::PerformAsyncActionDataContainerPtr
// ----------------------------------------------------------------------------
int gaia::Gaia::PerformAsyncActionDataContainerPtr(long double a1, gaia::Gaia::Self *self, gaia::GaiaRequest::Self *a3)
{
  int OperationCode;
  int v4;
  Json::Value::Self *Data;
  gaia::Gaia_Pandora::Self **v6;
  int v7;
  int v8;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int Instance;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  gaia::Gaia_Pandora::Self **v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  int v112;
  int v113;
  int v114;
  int v115;
  int v116;
  int v117;
  int v118;
  Json::Value::Self *v119;
  int v120;
  Json::Value::Self *v121;
  int v122;
  int v123;
  int v124;
  int v125;
  int v126;
  int v127;
  int v128;
  typedef int _g4_t_GroupField;
  typedef bool _g4_t_isNull;
  typedef bool _g4_t_v131;
  typedef int _g4_t_v132;
  typedef int _g4_t_v133;
  typedef int _g4_t_v134;
  typedef uint8_t _g4_t_v135[68];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_GroupField)) > _g4_s0 ? (12u + sizeof(_g4_t_GroupField)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_isNull)) > _g4_s1 ? (12u + sizeof(_g4_t_isNull)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v131)) > _g4_s2 ? (12u + sizeof(_g4_t_v131)) : _g4_s2,
    _g4_s4 = (18u + sizeof(_g4_t_v132)) > _g4_s3 ? (18u + sizeof(_g4_t_v132)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v133)) > _g4_s4 ? (20u + sizeof(_g4_t_v133)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v134)) > _g4_s5 ? (24u + sizeof(_g4_t_v134)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v135)) > _g4_s6 ? (28u + sizeof(_g4_t_v135)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_GroupField &GroupField = *reinterpret_cast<_g4_t_GroupField *>(_g4_sf + 12u);
  _g4_t_isNull &isNull = *reinterpret_cast<_g4_t_isNull *>(_g4_sf + 12u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 12u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 18u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 20u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 24u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 28u);

  gaia::GaiaRequest::SetAsyncOperation(a3, false);
  OperationCode = gaia::GaiaRequest::GetOperationCode(a3);
  if ( OperationCode == 4003 )
  {
    Instance = gaia::Gaia::GetInstance();
    Data = (Json::Value::Self *)gaia::Gaia_Osiris::ConnectionExists(*(gaia::Gaia_Osiris::Self **)(Instance + 580), a3);
    goto LABEL_50;
  }
  if ( OperationCode <= 4003 )
  {
    if ( OperationCode == 2508 )
    {
      v60 = gaia::Gaia::GetInstance();
      Data = (Json::Value::Self *)gaia::Gaia_Janus::SendAuthentificate(*(gaia::Gaia_Janus::Self **)(v60 + 560), a3);
      goto LABEL_50;
    }
    if ( OperationCode <= 2508 )
    {
      if ( OperationCode == 1015 )
      {
        v40 = gaia::Gaia::GetInstance();
        Data = (Json::Value::Self *)gaia::Gaia_Seshat::SetProfileVisibility(*(gaia::Gaia_Seshat::Self **)(v40 + 568), a3);
        goto LABEL_50;
      }
      if ( OperationCode <= 1015 )
      {
        if ( OperationCode == 1007 )
        {
          v48 = gaia::Gaia::GetInstance();
          Data = (Json::Value::Self *)gaia::Gaia_Seshat::SetProfile(*(gaia::Gaia_Seshat::Self **)(v48 + 568), a3);
          goto LABEL_50;
        }
        if ( OperationCode <= 1007 )
        {
          if ( OperationCode == 1002 )
          {
            v47 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Seshat::GetData(*(gaia::Gaia_Seshat::Self **)(v47 + 568), a3);
            goto LABEL_50;
          }
          if ( OperationCode > 1002 )
          {
            if ( OperationCode == 1005 )
            {
              v92 = gaia::Gaia::GetInstance();
              Data = (Json::Value::Self *)gaia::Gaia_Seshat::PutDataCheckEtag(*(gaia::Gaia_Seshat::Self **)(v92 + 568), a3);
              goto LABEL_50;
            }
            if ( OperationCode > 1005 )
            {
              v93 = gaia::Gaia::GetInstance();
              Data = (Json::Value::Self *)gaia::Gaia_Seshat::GetDataCheckEtag(*(gaia::Gaia_Seshat::Self **)(v93 + 568), a3);
              goto LABEL_50;
            }
            if ( OperationCode == 1004 )
            {
              v91 = gaia::Gaia::GetInstance();
              Data = (Json::Value::Self *)gaia::Gaia_Seshat::DeleteData(*(gaia::Gaia_Seshat::Self **)(v91 + 568), a3);
              goto LABEL_50;
            }
          }
          else
          {
            if ( OperationCode == 503 )
            {
              v54 = gaia::Gaia::GetInstance();
              Data = (Json::Value::Self *)gaia::Gaia_Pandora::GetPandoraUrl(*(gaia::Gaia_Pandora::Self **)(v54 + 556), a3);
              goto LABEL_50;
            }
            if ( OperationCode == 1001 )
            {
              v10 = gaia::Gaia::GetInstance();
              Data = (Json::Value::Self *)gaia::Gaia_Seshat::PutData(*(gaia::Gaia_Seshat::Self **)(v10 + 568), a3);
              goto LABEL_50;
            }
          }
          goto LABEL_49;
        }
        if ( OperationCode == 1011 )
        {
          v71 = gaia::Gaia::GetInstance();
          Data = (Json::Value::Self *)gaia::Gaia_Seshat::CreateMatcher(*(gaia::Gaia_Seshat::Self **)(v71 + 568), a3);
        }
        else if ( OperationCode > 1011 )
        {
          if ( OperationCode == 1013 )
          {
            v80 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Seshat::DeleteMatcher(*(gaia::Gaia_Seshat::Self **)(v80 + 568), a3);
          }
          else if ( OperationCode <= 1013 )
          {
            v81 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Seshat::GetMatches(*(gaia::Gaia_Seshat::Self **)(v81 + 568), a3);
          }
          else
          {
            v79 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Seshat::ListMatchers(*(gaia::Gaia_Seshat::Self **)(v79 + 568), a3);
          }
        }
        else if ( OperationCode == 1009 )
        {
          v70 = gaia::Gaia::GetInstance();
          Data = (Json::Value::Self *)gaia::Gaia_Seshat::DeleteProfile(*(gaia::Gaia_Seshat::Self **)(v70 + 568), a3);
        }
        else if ( OperationCode <= 1009 )
        {
          v69 = gaia::Gaia::GetInstance();
          Data = (Json::Value::Self *)gaia::Gaia_Seshat::GetProfile(*(gaia::Gaia_Seshat::Self **)(v69 + 568), a3);
        }
        else
        {
          v17 = gaia::Gaia::GetInstance();
          Data = (Json::Value::Self *)gaia::Gaia_Seshat::SetProfileVisibilityObject(*(gaia::Gaia_Seshat::Self **)(v17 + 568), a3);
        }
      }
      else
      {
        if ( OperationCode == 2004 )
        {
          v44 = gaia::Gaia::GetInstance();
          Data = (Json::Value::Self *)gaia::Gaia_Olympus::ClearLeaderboard(*(gaia::Gaia_Olympus::Self **)(v44 + 576), a3);
          goto LABEL_50;
        }
        if ( OperationCode > 2004 )
        {
          if ( OperationCode == 2008 )
          {
            v57 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Olympus::DeleteEntry(*(gaia::Gaia_Olympus::Self **)(v57 + 576), a3);
            goto LABEL_50;
          }
          if ( OperationCode > 2008 )
          {
            switch ( OperationCode )
            {
              case 2501:
                v85 = gaia::Gaia::GetInstance();
                Data = (Json::Value::Self *)gaia::Gaia_Janus::Login(*(gaia::Gaia_Janus::Self **)(v85 + 560), a3);
                goto LABEL_50;
              case 2502:
                v86 = gaia::Gaia::GetInstance();
                Data = (Json::Value::Self *)gaia::Gaia_Janus::Authorize(*(gaia::Gaia_Janus::Self **)(v86 + 560), a3);
                goto LABEL_50;
              case 2503:
                v87 = gaia::Gaia::GetInstance();
                Data = (Json::Value::Self *)gaia::Gaia_Janus::AuthorizeExclusive(*(gaia::Gaia_Janus::Self **)(v87 + 560), a3);
                goto LABEL_50;
              default:
                goto LABEL_49;
            }
          }
          if ( OperationCode == 2006 )
          {
            v56 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Olympus::PostArbitraryEntry(*(gaia::Gaia_Olympus::Self **)(v56 + 576), a3);
          }
          else if ( OperationCode <= 2006 )
          {
            v55 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Olympus::RetrieveFriendLeaderboard(*(gaia::Gaia_Olympus::Self **)(v55 + 576), a3);
          }
          else
          {
            v16 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Olympus::PostEntry(*(gaia::Gaia_Olympus::Self **)(v16 + 576), a3);
          }
        }
        else
        {
          if ( OperationCode == 1018 )
          {
            v45 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Seshat::GetBatchProfiles(*(gaia::Gaia_Seshat::Self **)(v45 + 568), a3);
            goto LABEL_50;
          }
          if ( OperationCode > 1018 )
          {
            if ( OperationCode == 2002 )
            {
              v98 = gaia::Gaia::GetInstance();
              Data = (Json::Value::Self *)gaia::Gaia_Olympus::RetrieveLeaderboardAroundArbitraryEntry(
                                      *(gaia::Gaia_Olympus::Self **)(v98 + 576),
                                      a3);
              goto LABEL_50;
            }
            if ( OperationCode > 2002 )
            {
              v99 = gaia::Gaia::GetInstance();
              Data = (Json::Value::Self *)gaia::Gaia_Olympus::RetrieveLeaderboardAroundCurrentUser(
                                      *(gaia::Gaia_Olympus::Self **)(v99 + 576),
                                      a3);
              goto LABEL_50;
            }
            if ( OperationCode == 2001 )
            {
              v97 = gaia::Gaia::GetInstance();
              Data = (Json::Value::Self *)gaia::Gaia_Olympus::RetriveTopOfLeaderboard(*(gaia::Gaia_Olympus::Self **)(v97 + 576), a3);
              goto LABEL_50;
            }
            goto LABEL_49;
          }
          if ( OperationCode == 1016 )
          {
            v73 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Seshat::SetProfileVisibilitySelector(
                                    *(gaia::Gaia_Seshat::Self **)(v73 + 568),
                                    a3);
          }
          else
          {
            v8 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Seshat::GetProfileVisibility(*(gaia::Gaia_Seshat::Self **)(v8 + 568), a3);
          }
        }
      }
    }
    else
    {
      if ( OperationCode == 2526 )
      {
        v53 = gaia::Gaia::GetInstance();
        Data = (Json::Value::Self *)gaia::Gaia_Janus::TransferCodeToken(*(gaia::Gaia_Janus::Self **)(v53 + 560), a3);
        goto LABEL_50;
      }
      if ( OperationCode <= 2526 )
      {
        if ( OperationCode == 2516 )
        {
          v25 = gaia::Gaia::GetInstance();
          Data = (Json::Value::Self *)gaia::Gaia_Janus::AddPermission(*(gaia::Gaia_Janus::Self **)(v25 + 560), a3);
          goto LABEL_50;
        }
        if ( OperationCode > 2516 )
        {
          if ( OperationCode == 2521 )
          {
            v78 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Janus::FindUserByAlias(*(gaia::Gaia_Janus::Self **)(v78 + 560), a3);
            goto LABEL_50;
          }
          if ( OperationCode > 2521 )
          {
            if ( OperationCode == 2524 )
            {
              v83 = gaia::Gaia::GetInstance();
              Data = (Json::Value::Self *)gaia::Gaia_Janus::ChangePassword(*(gaia::Gaia_Janus::Self **)(v83 + 560), a3);
              goto LABEL_50;
            }
            if ( OperationCode > 2524 )
            {
              v84 = gaia::Gaia::GetInstance();
              Data = (Json::Value::Self *)gaia::Gaia_Janus::CreateTransferCode(*(gaia::Gaia_Janus::Self **)(v84 + 560), a3);
              goto LABEL_50;
            }
            if ( OperationCode == 2522 )
            {
              v82 = gaia::Gaia::GetInstance();
              Data = (Json::Value::Self *)gaia::Gaia_Janus::SetApprovalStatus_Reject(*(gaia::Gaia_Janus::Self **)(v82 + 560), a3);
              goto LABEL_50;
            }
          }
          else
          {
            if ( OperationCode == 2519 )
            {
              v77 = gaia::Gaia::GetInstance();
              Data = (Json::Value::Self *)gaia::Gaia_Janus::RefreshAccessToken(*(gaia::Gaia_Janus::Self **)(v77 + 560), a3);
              goto LABEL_50;
            }
            if ( OperationCode > 2519 )
            {
              v76 = gaia::Gaia::GetInstance();
              Data = (Json::Value::Self *)gaia::Gaia_Janus::AddAlias(*(gaia::Gaia_Janus::Self **)(v76 + 560), a3);
              goto LABEL_50;
            }
            if ( OperationCode == 2517 )
            {
              v19 = gaia::Gaia::GetInstance();
              Data = (Json::Value::Self *)gaia::Gaia_Janus::EncryptToken(*(gaia::Gaia_Janus::Self **)(v19 + 560), a3);
              goto LABEL_50;
            }
          }
          goto LABEL_49;
        }
        if ( OperationCode == 2512 )
        {
          v21 = gaia::Gaia::GetInstance();
          Data = (Json::Value::Self *)gaia::Gaia_Janus::RetrievePassword(*(gaia::Gaia_Janus::Self **)(v21 + 560), a3);
          goto LABEL_50;
        }
        if ( OperationCode <= 2512 )
        {
          if ( OperationCode == 2509 )
          {
            v52 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Janus::SetDeviceInfo(*(gaia::Gaia_Janus::Self **)(v52 + 560), a3);
            goto LABEL_50;
          }
          if ( OperationCode == 2511 )
          {
            v51 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Janus::CreateAccount(*(gaia::Gaia_Janus::Self **)(v51 + 560), a3);
            goto LABEL_50;
          }
          goto LABEL_49;
        }
        if ( OperationCode == 2514 )
        {
          v104 = gaia::Gaia::GetInstance();
          Data = (Json::Value::Self *)gaia::Gaia_Janus::AddCredentialWithTokenRefresh(*(gaia::Gaia_Janus::Self **)(v104 + 560), a3);
        }
        else if ( OperationCode <= 2514 )
        {
          v105 = gaia::Gaia::GetInstance();
          Data = (Json::Value::Self *)gaia::Gaia_Janus::AddCredential(*(gaia::Gaia_Janus::Self **)(v105 + 560), a3);
        }
        else
        {
          v103 = gaia::Gaia::GetInstance();
          Data = (Json::Value::Self *)gaia::Gaia_Janus::RemoveCredential(*(gaia::Gaia_Janus::Self **)(v103 + 560), a3);
        }
      }
      else
      {
        if ( OperationCode == 3506 )
        {
          v43 = gaia::Gaia::GetInstance();
          Data = (Json::Value::Self *)gaia::Gaia_Hermes::RetrieveMessage(*(gaia::Gaia_Hermes::Self **)(v43 + 572), a3);
          goto LABEL_50;
        }
        if ( OperationCode > 3506 )
        {
          if ( OperationCode == 3510 )
          {
            v39 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Hermes::ShowSubscriptions(*(gaia::Gaia_Hermes::Self **)(v39 + 572), a3);
            goto LABEL_50;
          }
          if ( OperationCode > 3510 )
          {
            if ( OperationCode == 4001 )
            {
              v116 = gaia::Gaia::GetInstance();
              Data = (Json::Value::Self *)gaia::Gaia_Osiris::AddConnection(*(gaia::Gaia_Osiris::Self **)(v116 + 580), a3);
              goto LABEL_50;
            }
            if ( OperationCode > 4001 )
            {
              v117 = gaia::Gaia::GetInstance();
              Data = (Json::Value::Self *)gaia::Gaia_Osiris::DeleteConnection(*(gaia::Gaia_Osiris::Self **)(v117 + 580), a3);
              goto LABEL_50;
            }
            if ( OperationCode == 3511 )
            {
              v115 = gaia::Gaia::GetInstance();
              Data = (Json::Value::Self *)gaia::Gaia_Hermes::ListRegisteredDevices(*(gaia::Gaia_Hermes::Self **)(v115 + 572), a3);
              goto LABEL_50;
            }
            goto LABEL_49;
          }
          if ( OperationCode == 3508 )
          {
            v38 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Hermes::DeleteAllMessages(*(gaia::Gaia_Hermes::Self **)(v38 + 572), a3);
          }
          else if ( OperationCode <= 3508 )
          {
            v37 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Hermes::DeleteMessage(*(gaia::Gaia_Hermes::Self **)(v37 + 572), a3);
          }
          else
          {
            v15 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Hermes::UpdateListSubscription(*(gaia::Gaia_Hermes::Self **)(v15 + 572), a3);
          }
        }
        else
        {
          if ( OperationCode == 3502 )
          {
            v46 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Hermes::UnregisterDevices(*(gaia::Gaia_Hermes::Self **)(v46 + 572), a3);
            goto LABEL_50;
          }
          if ( OperationCode <= 3502 )
          {
            switch ( OperationCode )
            {
              case 3001:
                v6 = (gaia::Gaia_Pandora::Self **)gaia::Gaia::GetInstance();
                Data = (Json::Value::Self *)gaia::Gaia::getServerTimeStamp(v6, a3);
                goto LABEL_50;
              case 3002:
                v66 = (gaia::Gaia_Pandora::Self **)gaia::Gaia::GetInstance();
                Data = (Json::Value::Self *)gaia::Gaia::GetServiceUrl(v66, a3);
                goto LABEL_50;
              case 3501:
                v65 = gaia::Gaia::GetInstance();
                Data = (Json::Value::Self *)gaia::Gaia_Hermes::RegisterEndpoint(*(gaia::Gaia_Hermes::Self **)(v65 + 572), a3);
                goto LABEL_50;
              default:
                goto LABEL_49;
            }
          }
          if ( OperationCode == 3504 )
          {
            v101 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Hermes::SendMessageToMultipleUsers(
                                    a1,
                                    *(gaia::Gaia_Hermes::Self **)(v101 + 572),
                                    a3);
          }
          else if ( OperationCode <= 3504 )
          {
            v102 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Hermes::SendMessageToUser(*(gaia::Gaia_Hermes::Self **)(v102 + 572), a3);
          }
          else
          {
            v100 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Hermes::RetrieveMessages(*(gaia::Gaia_Hermes::Self **)(v100 + 572), a3);
          }
        }
      }
    }
  }
  else
  {
    if ( OperationCode == 4034 )
    {
      v61 = gaia::Gaia::GetInstance();
      Data = (Json::Value::Self *)gaia::Gaia_Osiris::SetTournamentInfo(*(gaia::Gaia_Osiris::Self **)(v61 + 580), a3);
      goto LABEL_50;
    }
    if ( OperationCode <= 4034 )
    {
      if ( OperationCode == 4018 )
      {
        v58 = gaia::Gaia::GetInstance();
        Data = (Json::Value::Self *)gaia::Gaia_Osiris::DeleteGroup(*(gaia::Gaia_Osiris::Self **)(v58 + 580), a3);
        goto LABEL_50;
      }
      if ( OperationCode <= 4018 )
      {
        if ( OperationCode == 4010 )
        {
          v26 = gaia::Gaia::GetInstance();
          Data = (Json::Value::Self *)gaia::Gaia_Osiris::AcceptRequest(*(gaia::Gaia_Osiris::Self **)(v26 + 580), a3);
        }
        else if ( OperationCode > 4010 )
        {
          if ( OperationCode == 4014 )
          {
            v24 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Osiris::GetProfile(*(gaia::Gaia_Osiris::Self **)(v24 + 580), a3);
          }
          else if ( OperationCode > 4014 )
          {
            if ( OperationCode == 4016 )
            {
              v107 = gaia::Gaia::GetInstance();
              Data = (Json::Value::Self *)gaia::Gaia_Osiris::CreateGroup(*(gaia::Gaia_Osiris::Self **)(v107 + 580), a3);
            }
            else if ( OperationCode <= 4016 )
            {
              v108 = gaia::Gaia::GetInstance();
              Data = (Json::Value::Self *)gaia::Gaia_Osiris::UpdateStatusLine(*(gaia::Gaia_Osiris::Self **)(v108 + 580), a3);
            }
            else
            {
              v106 = gaia::Gaia::GetInstance();
              Data = (Json::Value::Self *)gaia::Gaia_Osiris::UpdateGroup(*(gaia::Gaia_Osiris::Self **)(v106 + 580), a3);
            }
          }
          else if ( OperationCode == 4012 )
          {
            v23 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Osiris::IgnoreRequest(*(gaia::Gaia_Osiris::Self **)(v23 + 580), a3);
          }
          else if ( OperationCode <= 4012 )
          {
            v22 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Osiris::RejectRequest(*(gaia::Gaia_Osiris::Self **)(v22 + 580), a3);
          }
          else
          {
            v20 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Osiris::UpdateProfile(*(gaia::Gaia_Osiris::Self **)(v20 + 580), a3);
          }
        }
        else if ( OperationCode == 4006 )
        {
          v27 = gaia::Gaia::GetInstance();
          Data = (Json::Value::Self *)gaia::Gaia_Osiris::ListConnections(*(gaia::Gaia_Osiris::Self **)(v27 + 580), a3);
        }
        else if ( OperationCode > 4006 )
        {
          if ( OperationCode == 4008 )
          {
            v110 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Osiris::ListSentRequests(*(gaia::Gaia_Osiris::Self **)(v110 + 580), a3);
          }
          else if ( OperationCode <= 4008 )
          {
            v111 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Osiris::ListRequests(*(gaia::Gaia_Osiris::Self **)(v111 + 580), a3);
          }
          else
          {
            v109 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Osiris::CancelSentRequest(*(gaia::Gaia_Osiris::Self **)(v109 + 580), a3);
          }
        }
        else if ( OperationCode == 4004 )
        {
          v75 = gaia::Gaia::GetInstance();
          Data = (Json::Value::Self *)gaia::Gaia_Osiris::ImportFriends(*(gaia::Gaia_Osiris::Self **)(v75 + 580), a3);
        }
        else
        {
          v12 = gaia::Gaia::GetInstance();
          Data = (Json::Value::Self *)gaia::Gaia_Osiris::Import(*(gaia::Gaia_Osiris::Self **)(v12 + 580), a3);
        }
      }
      else
      {
        if ( OperationCode == 4026 )
        {
          v41 = gaia::Gaia::GetInstance();
          Data = (Json::Value::Self *)gaia::Gaia_Osiris::MemberUpdateCustomFields(*(gaia::Gaia_Osiris::Self **)(v41 + 580), a3);
          goto LABEL_50;
        }
        if ( OperationCode > 4026 )
        {
          if ( OperationCode == 4030 )
          {
            v36 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Osiris::DeleteEvent(*(gaia::Gaia_Osiris::Self **)(v36 + 580), a3);
          }
          else if ( OperationCode > 4030 )
          {
            if ( OperationCode == 4032 )
            {
              v127 = gaia::Gaia::GetInstance();
              Data = (Json::Value::Self *)gaia::Gaia_Osiris::GetEvents(*(gaia::Gaia_Osiris::Self **)(v127 + 580), a3);
            }
            else if ( OperationCode <= 4032 )
            {
              v128 = gaia::Gaia::GetInstance();
              Data = (Json::Value::Self *)gaia::Gaia_Osiris::ShowEvent(*(gaia::Gaia_Osiris::Self **)(v128 + 580), a3);
            }
            else
            {
              v126 = gaia::Gaia::GetInstance();
              Data = (Json::Value::Self *)gaia::Gaia_Osiris::SearchEvents(*(gaia::Gaia_Osiris::Self **)(v126 + 580), a3);
            }
          }
          else if ( OperationCode == 4028 )
          {
            v35 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Osiris::CreateEvent(*(gaia::Gaia_Osiris::Self **)(v35 + 580), a3);
          }
          else if ( OperationCode <= 4028 )
          {
            v34 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Osiris::ListGroupMembers(*(gaia::Gaia_Osiris::Self **)(v34 + 580), a3);
          }
          else
          {
            v14 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Osiris::UpdateEvent(*(gaia::Gaia_Osiris::Self **)(v14 + 580), a3);
          }
        }
        else
        {
          if ( OperationCode == 4021 )
          {
            v42 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Osiris::SearchClansByRecommendationScore(
                                    *(gaia::Gaia_Osiris::Self **)(v42 + 580),
                                    a3);
            goto LABEL_50;
          }
          if ( OperationCode > 4021 )
          {
            if ( OperationCode == 4024 )
            {
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v133), "credential", (int)(uintptr_t)(&v132));
              v119 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a3, &v133);
              isNull = Json::Value::isNull(v119);
              g4_std::string::Destroy(&v133);
              v120 = gaia::Gaia::GetInstance();
              if ( isNull )
                Data = (Json::Value::Self *)gaia::Gaia_Osiris::JoinGroup(*(gaia::Gaia_Osiris::Self **)(v120 + 580), a3);
              else
                Data = (Json::Value::Self *)gaia::Gaia_Osiris::AddMemberToGroup(*(gaia::Gaia_Osiris::Self **)(v120 + 580), a3);
            }
            else
            {
              if ( OperationCode <= 4024 )
              {
                if ( OperationCode == 4023 )
                {
                  v118 = gaia::Gaia::GetInstance();
                  Data = (Json::Value::Self *)gaia::Gaia_Osiris::MembershipCheck(*(gaia::Gaia_Osiris::Self **)(v118 + 580), a3);
                  goto LABEL_50;
                }
                goto LABEL_49;
              }
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v134), "credential", (int)(uintptr_t)(&v132) + 1);
              v121 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(a3, &v134);
              v131 = Json::Value::isNull(v121);
              g4_std::string::Destroy(&v134);
              v122 = gaia::Gaia::GetInstance();
              if ( v131 )
                Data = (Json::Value::Self *)gaia::Gaia_Osiris::LeaveGroup(*(gaia::Gaia_Osiris::Self **)(v122 + 580), a3);
              else
                Data = (Json::Value::Self *)gaia::Gaia_Osiris::DeleteMemberFromGroup(*(gaia::Gaia_Osiris::Self **)(v122 + 580), a3);
            }
          }
          else if ( OperationCode == 4019 )
          {
            v30 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Osiris::ShowGroup(*(gaia::Gaia_Osiris::Self **)(v30 + 580), a3);
          }
          else
          {
            v7 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Osiris::SearchGroups(*(gaia::Gaia_Osiris::Self **)(v7 + 580), a3);
          }
        }
      }
    }
    else
    {
      if ( OperationCode == 4049 )
      {
        v72 = gaia::Gaia::GetInstance();
        Data = (Json::Value::Self *)gaia::Gaia_Osiris::ParticipateEvent(*(gaia::Gaia_Osiris::Self **)(v72 + 580), a3);
        goto LABEL_50;
      }
      if ( OperationCode <= 4049 )
      {
        if ( OperationCode == 4041 )
        {
          v29 = gaia::Gaia::GetInstance();
          Data = (Json::Value::Self *)gaia::Gaia_Osiris::ListAchievements(*(gaia::Gaia_Osiris::Self **)(v29 + 580), a3);
        }
        else if ( OperationCode > 4041 )
        {
          if ( OperationCode == 4045 )
          {
            gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v135, a3);
            v33 = gaia::Gaia::GetInstance();
            GroupField = gaia::Gaia_Osiris::GetGroupField(*(gaia::Gaia::Self **)(v33 + 580), (gaia::GaiaRequest::Self *)v135);
            gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v135);
            Data = (Json::Value::Self *)GroupField;
          }
          else if ( OperationCode > 4045 )
          {
            if ( OperationCode == 4047 )
            {
              v124 = gaia::Gaia::GetInstance();
              Data = (Json::Value::Self *)gaia::Gaia_Osiris::DeliverAwards(*(gaia::Gaia_Osiris::Self **)(v124 + 580), a3);
            }
            else if ( OperationCode <= 4047 )
            {
              v125 = gaia::Gaia::GetInstance();
              Data = (Json::Value::Self *)gaia::Gaia_Osiris::IncrementDecrementGroupField(
                                      *(gaia::Gaia_Osiris::Self **)(v125 + 580),
                                      a3);
            }
            else
            {
              v123 = gaia::Gaia::GetInstance();
              Data = (Json::Value::Self *)gaia::Gaia_Osiris::DeliverParticipantAwards(*(gaia::Gaia_Osiris::Self **)(v123 + 580), a3);
            }
          }
          else if ( OperationCode == 4043 )
          {
            v32 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Osiris::GetPictureFromUrl(*(gaia::Gaia_Osiris::Self **)(v32 + 580), a3);
          }
          else if ( OperationCode <= 4043 )
          {
            v31 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Osiris::UpvoteWallPost(*(gaia::Gaia_Osiris::Self **)(v31 + 580), a3);
          }
          else
          {
            v13 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Osiris::SetGroupField(*(gaia::Gaia_Osiris::Self **)(v13 + 580), a3);
          }
        }
        else if ( OperationCode == 4037 )
        {
          v28 = gaia::Gaia::GetInstance();
          Data = (Json::Value::Self *)gaia::Gaia_Osiris::PostOnWall(*(gaia::Gaia_Osiris::Self **)(v28 + 580), a3);
        }
        else if ( OperationCode > 4037 )
        {
          if ( OperationCode == 4039 )
          {
            v113 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Osiris::ViewFeed(*(gaia::Gaia_Osiris::Self **)(v113 + 580), a3);
          }
          else if ( OperationCode <= 4039 )
          {
            v114 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Osiris::ViewWall(*(gaia::Gaia_Osiris::Self **)(v114 + 580), a3);
          }
          else
          {
            v112 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Osiris::RecordAchievement(*(gaia::Gaia_Osiris::Self **)(v112 + 580), a3);
          }
        }
        else if ( OperationCode == 4035 )
        {
          v74 = gaia::Gaia::GetInstance();
          Data = (Json::Value::Self *)gaia::Gaia_Osiris::AddEventAward(*(gaia::Gaia_Osiris::Self **)(v74 + 580), a3);
        }
        else
        {
          v11 = gaia::Gaia::GetInstance();
          Data = (Json::Value::Self *)gaia::Gaia_Osiris::DeleteEventAward(*(gaia::Gaia_Osiris::Self **)(v11 + 580), a3);
        }
      }
      else
      {
        if ( OperationCode == 4508 )
        {
          v49 = gaia::Gaia::GetInstance();
          Data = (Json::Value::Self *)gaia::Gaia_Iris::GetAssetURL(*(gaia::Gaia_Iris::Self **)(v49 + 584), a3);
          goto LABEL_50;
        }
        if ( OperationCode > 4508 )
        {
          if ( OperationCode == 8002 )
          {
            v64 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_GlobalDeviceID::UpdateDeviceId(
                                    *(gaia::Gaia_GlobalDeviceID::Self **)(v64 + 592),
                                    a3);
            goto LABEL_50;
          }
          if ( OperationCode > 8002 )
          {
            if ( OperationCode == 8004 )
            {
              v89 = gaia::Gaia::GetInstance();
              Data = (Json::Value::Self *)gaia::Gaia_GlobalDeviceID::GetGlobalId(
                                      *(gaia::Gaia_GlobalDeviceID::Self **)(v89 + 592),
                                      a3);
              goto LABEL_50;
            }
            if ( OperationCode < 8004 )
            {
              v90 = gaia::Gaia::GetInstance();
              Data = (Json::Value::Self *)gaia::Gaia_GlobalDeviceID::GetDeviceId(
                                      *(gaia::Gaia_GlobalDeviceID::Self **)(v90 + 592),
                                      a3);
              goto LABEL_50;
            }
            if ( OperationCode == 9001 )
            {
              v88 = gaia::Gaia::GetInstance();
              Data = (Json::Value::Self *)gaia::Gaia_Eve::ListDataCenters(*(gaia::Gaia_Eve::Self **)(v88 + 564), a3);
              goto LABEL_50;
            }
          }
          else
          {
            switch ( OperationCode )
            {
              case 6501:
                v63 = gaia::Gaia::GetInstance();
                Data = gaia::Gaia_Hestia::GetClientConfig(*(gaia::Gaia_Hestia::Self **)(v63 + 588), a3);
                goto LABEL_50;
              case 8001:
                v62 = gaia::Gaia::GetInstance();
                Data = (Json::Value::Self *)gaia::Gaia_GlobalDeviceID::AssignGlobalId(
                                        *(gaia::Gaia_GlobalDeviceID::Self **)(v62 + 592),
                                        a3);
                goto LABEL_50;
              case 4509:
                v18 = gaia::Gaia::GetInstance();
                Data = (Json::Value::Self *)gaia::Gaia_Iris::GetAssetETag(*(gaia::Gaia_Iris::Self **)(v18 + 584), a3);
                goto LABEL_50;
              default:
                break;
            }
          }
          goto LABEL_49;
        }
        if ( OperationCode == 4504 )
        {
          v50 = gaia::Gaia::GetInstance();
          Data = (Json::Value::Self *)gaia::Gaia_Iris::GetAssetHash(*(gaia::Gaia_Iris::Self **)(v50 + 584), a3);
          goto LABEL_50;
        }
        if ( OperationCode <= 4504 )
        {
          if ( OperationCode == 4502 )
          {
            v68 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Iris::GetAssetCheckEtag(*(gaia::Gaia_Iris::Self **)(v68 + 584), a3);
            goto LABEL_50;
          }
          if ( OperationCode > 4502 )
          {
            v67 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Iris::UploadAsset(*(gaia::Gaia_Iris::Self **)(v67 + 584), a3);
            goto LABEL_50;
          }
          if ( OperationCode == 4501 )
          {
            v4 = gaia::Gaia::GetInstance();
            Data = (Json::Value::Self *)gaia::Gaia_Iris::GetAsset(*(gaia::Gaia_Iris::Self **)(v4 + 584), a3);
            goto LABEL_50;
          }
LABEL_49:
          Data = (Json::Value::Self *)-1996;
          goto LABEL_50;
        }
        if ( OperationCode == 4506 )
        {
          v95 = gaia::Gaia::GetInstance();
          Data = (Json::Value::Self *)gaia::Gaia_Iris::CreateCoupons(*(gaia::Gaia_Iris::Self **)(v95 + 584), a3);
        }
        else if ( OperationCode <= 4506 )
        {
          v96 = gaia::Gaia::GetInstance();
          Data = (Json::Value::Self *)gaia::Gaia_Iris::GetAssetSize(*(gaia::Gaia_Iris::Self **)(v96 + 584), a3);
        }
        else
        {
          v94 = gaia::Gaia::GetInstance();
          Data = (Json::Value::Self *)gaia::Gaia_Iris::RedeemCoupon(*(gaia::Gaia_Iris::Self **)(v94 + 584), a3);
        }
      }
    }
  }
LABEL_50:
  gaia::GaiaRequest::SetResponseCode(a3, (int)(uintptr_t)(Data));
  return gaia::Gaia::CompleteAsyncAction(a3);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::GetMinimalFedAccountList  (binary VA: 0x149b5f0)
// Original: gaia::Gaia::GetMinimalFedAccountList
// ----------------------------------------------------------------------------
int gaia::Gaia::GetMinimalFedAccountList(int a1, int a2, char a3, int a4, int a5)
{
  return gaia::Gaia_Janus::GetMinimalFedAccountList(*(gaia::Gaia::Self **)(a1 + 560), a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::PerformAsyncAction  (binary VA: 0x149cf50)
// Original: gaia::Gaia::PerformAsyncAction
// ----------------------------------------------------------------------------
int gaia::Gaia::PerformAsyncAction(long double a1, gaia::Gaia::Self *self, uint32_t *a3)
{
  int v3;
  Json::Value::Self *v4;
  Json::Value::Self *v5;
  int v6;
  int v7;
  int v8;
  int result;
  void *v10;
  int v11;
  int v12;
  int v13;
  Json::Value::Self *v14;
  Json::Value::Self *v15;
  Json::Value::Self *v16;
  int v17;
  Json::Value::Self *v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  gaia::BaseServiceManager::Self ***v27;
  Json::Value::Self *v28;
  Json::Value::Self *v29;
  int v30;
  int v31;
  int v32;
  Json::Value::Self *v33;
  int v34;
  Json::Value::Self *v35;
  int v36;
  Json::Value::Self *v37;
  int v38;
  int v39;
  int v40;
  Json::Value::Self *v41;
  int v42;
  int v43;
  Json::Value::Self *v44;
  int v45;
  gaia::UserProfile::Self *v46;
  int v47;
  int v48;
  Json::Value::Self *v49;
  int v50;
  int v51;
  Json::Value::Self *v52;
  Json::Value::Self *v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  Json::Value::Self *v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  Json::Value::Self *v67;
  int v68;
  int v69;
  int v70;
  int v71;
  Json::Value::Self *v72;
  int v73;
  int v74;
  int v75;
  Json::Value::Self *v76;
  int v77;
  Json::Value::Self *v78;
  Json::Value::Self *v79;
  int v80;
  int v81;
  int v82;
  Json::Value::Self *v83;
  int v84;
  Json::Value::Self *v85;
  int v86;
  Json::Value::Self *v87;
  int v88;
  Json::Value::Self *v89;
  int v90;
  int v91;
  int v92;
  Json::Value::Self *v93;
  Json::Value::Self *v94;
  int v95;
  int v96;
  int v97;
  int v98;
  Json::Value::Self *v99;
  Json::Value::Self *v100;
  int v101;
  int v102;
  int v103;
  int v104;
  Json::Value::Self *v105;
  int v106;
  int v107;
  int v108;
  Json::Value::Self *v109;
  Json::Value::Self *v110;
  int v111;
  int v112;
  int v113;
  int v114;
  int v115;
  Json::Value::Self *v116;
  int v117;
  int v118;
  Json::Value::Self *v119;
  int v120;
  Json::Value::Self *v121;
  Json::Value::Self *v122;
  int v123;
  int v124;
  Json::Value::Self *v125;
  Json::Value::Self *v126;
  Json::Value::Self *v127;
  int v128;
  Json::Value::Self *v129;
  Json::Value::Self *v130;
  Json::Value::Self *v131;
  Json::Value::Self *v132;
  int v133;
  int v134;
  Json::Value::Self *v135;
  gaia::UserProfile::Self *StandardUserProfile;
  int v137;
  int v138;
  Json::Value::Self *v139;
  int v140;
  int v141;
  Json::Value::Self *v142;
  Json::Value::Self *v143;
  Json::Value::Self *v144;
  Json::Value::Self *v145;
  int v146;
  int v147;
  Json::Value::Self *v148;
  Json::Value::Self *v149;
  Json::Value::Self *v150;
  Json::Value::Self *v151;
  int v152;
  int v153;
  int v154;
  Json::Value::Self *v155;
  int v156;
  Json::Value::Self *v157;
  int v158;
  int v159;
  Json::Value::Self *v160;
  Json::Value::Self *v161;
  int v162;
  int v163;
  int v164;
  Json::Value::Self *v165;
  int v166;
  Json::Value::Self *v167;
  int v168;
  Json::Value::Self *v169;
  int v170;
  int v171;
  Json::Value::Self *v172;
  int v173;
  Json::Value::Self *v174;
  int v175;
  int v176;
  Json::Value::Self *v177;
  int v178;
  int v179;
  Json::Value::Self *v180;
  Json::Value::Self *v181;
  int v182;
  int v183;
  int v184;
  gaia::Gaia::Self *v185;
  int v186;
  int v187;
  Json::Value::Self *v188;
  int v189;
  Json::Value::Self *v190;
  int v191;
  int v192;
  gaia::UserProfile::Self *v193;
  gaia::UserProfile::Self *v194;
  int v195;
  Json::Value::Self *v196;
  Json::Value::Self *v197;
  Json::Value::Self *v198;
  int v199;
  Json::Value::Self *v200;
  int v201;
  int v202;
  Json::Value::Self *v203;
  Json::Value::Self *v204;
  Json::Value::Self *v205;
  int v206;
  int v207;
  int v208;
  Json::Value::Self *v209;
  int v210;
  Json::Value::Self *v211;
  int v212;
  Json::Value::Self *v213;
  int v214;
  int v215;
  int v216;
  Json::Value::Self *v217;
  Json::Value::Self *v218;
  int v219;
  Json::Value::Self *v220;
  Json::Value::Self *v221;
  int v222;
  int v223;
  Json::Value::Self *v224;
  int v225;
  int v226;
  Json::Value::Self *v227;
  int v228;
  Json::Value::Self *v229;
  int v230;
  Json::Value::Self *v231;
  Json::Value::Self *v232;
  int v233;
  Json::Value::Self *v234;
  Json::Value::Self *v235;
  Json::Value::Self *v236;
  int v237;
  int v238;
  Json::Value::Self *v239;
  int v240;
  int v241;
  Json::Value::Self *v242;
  int v243;
  int v244;
  int v245;
  int v246;
  int v247;
  Json::Value::Self *v248;
  Json::Value::Self *v249;
  int v250;
  int v251;
  int v252;
  int v253;
  Json::Value::Self *v254;
  int v255;
  int v256;
  int v257;
  int v258;
  Json::Value::Self *v259;
  Json::Value::Self *v260;
  int v261;
  int v262;
  Json::Value::Self *v263;
  int v264;
  int v265;
  int v266;
  Json::Value::Self *v267;
  int v268;
  Json::Value::Self *v269;
  int v270;
  int v271;
  int v272;
  Json::Value::Self *v273;
  int v274;
  Json::Value::Self *v275;
  int v276;
  Json::Value::Self *v277;
  Json::Value::Self *v278;
  Json::Value::Self *v279;
  int v280;
  Json::Value::Self *v281;
  int v282;
  int v283;
  Json::Value::Self *v284;
  int v285;
  int v286;
  int v287;
  int v288;
  int v289;
  int v290;
  int v291;
  int v292;
  Json::Value::Self *v293;
  Json::Value::Self *v294;
  Json::Value::Self *v295;
  int v296;
  Json::Value::Self *v297;
  int v298;
  int v299;
  int v300;
  int v301;
  Json::Value::Self *v302;
  int v303;
  Json::Value::Self *v304;
  int v305;
  int v306;
  int v307;
  int v308;
  int v309;
  int v310;
  Json::Value::Self *v311;
  int v312;
  int v313;
  Json::Value::Self *v314;
  int v315;
  int v316;
  Json::Value::Self *v317;
  int v318;
  int v319;
  int v320;
  int v321;
  Json::Value::Self *v322;
  Json::Value::Self *v323;
  int v324;
  Json::Value::Self *v325;
  int v326;
  Json::Value::Self *v327;
  int v328;
  int v329;
  int v330;
  Json::Value::Self *v331;
  int v332;
  int v333;
  Json::Value::Self *v334;
  Json::Value::Self *v335;
  int v336;
  int v337;
  int v338;
  int v339;
  int v340;
  Json::Value::Self *v341;
  Json::Value::Self *v342;
  int v343;
  Json::Value::Self *v344;
  int v345;
  int v346;
  int v347;
  Json::Value::Self *v348;
  Json::Value::Self *v349;
  int v350;
  Json::Value::Self *v351;
  char v352;
  int v353;
  Json::Value::Self *v354;
  int v355;
  int Instance;
  Json::Value::Self *v357;
  Json::Value::Self *v358;
  Json::Value::Self *v359;
  Json::Value::Self *v360;
  int v361;
  Json::Value::Self *v362;
  int v363;
  int v364;
  int v365;
  int v366;
  Json::Value::Self *v367;
  int v368;
  int v369;
  int v370;
  int v371;
  int v372;
  Json::Value::Self *v373;
  int v374;
  int v375;
  int v376;
  Json::Value::Self *v377;
  int v378;
  Json::Value::Self *v379;
  Json::Value::Self *v380;
  int v381;
  int v382;
  Json::Value::Self *v383;
  int v384;
  int v385;
  Json::Value::Self *v386;
  int v387;
  Json::Value::Self *v388;
  int v389;
  Json::Value::Self *v390;
  int v391;
  Json::Value::Self *v392;
  int v393;
  int v394;
  int v395;
  int v396;
  int v397;
  Json::Value::Self *v398;
  Json::Value::Self *v399;
  int v400;
  int v401;
  Json::Value::Self *v402;
  Json::Value::Self *v403;
  int v404;
  int v405;
  int v406;
  Json::Value::Self *v407;
  int v408;
  int v409;
  int v410;
  int v411;
  int v412;
  Json::Value::Self *v413;
  Json::Value::Self *v414;
  Json::Value::Self *v415;
  int v416;
  int v417;
  int v418;
  int v419;
  Json::Value::Self *v420;
  Json::Value::Self *v421;
  int v422;
  int v423;
  int v424;
  int v425;
  Json::Value::Self *v426;
  Json::Value::Self *v427;
  int v428;
  int v429;
  Json::Value::Self *v430;
  int v431;
  int v432;
  int v433;
  int v434;
  Json::Value::Self *v435;
  Json::Value::Self *v436;
  int v437;
  int v438;
  int v439;
  Json::Value::Self *v440;
  int v441;
  int v442;
  int v443;
  int v444;
  int v445;
  Json::Value::Self *v446;
  Json::Value::Self *v447;
  Json::Value::Self *v448;
  int v449;
  Json::Value::Self *v450;
  int v451;
  int v452;
  int v453;
  int v454;
  int v455;
  int v456;
  Json::Value::Self *v457;
  int v458;
  Json::Value::Self *v459;
  Json::Value::Self *v460;
  int v461;
  int v462;
  int v463;
  int v464;
  int v465;
  Json::Value::Self *v466;
  int v467;
  int v468;
  Json::Value::Self *v469;
  int v470;
  int v471;
  Json::Value::Self *v472;
  int v473;
  int *v474;
  int v475;
  Json::Value::Self *v476;
  char *v477;
  int v478;
  Json::Value::Self *v479;
  int v480;
  Json::Value::Self *v481;
  char *v482;
  Json::Value::Self *v483;
  Json::Value::Self *v484;
  int v485;
  int v486;
  Json::Value::Self *v487;
  int v488;
  int v489;
  Json::Value::Self *v490;
  int v491;
  Json::Value::Self *v492;
  Json::Value::Self *v493;
  int v494;
  int v495;
  Json::Value::Self *v496;
  int v497;
  int v498;
  int v499;
  Json::Value::Self *v500;
  int v501;
  gaia::UserProfile::Self *v502;
  int v503;
  Json::Value::Self *v504;
  gaia::UserProfile::Self *v505;
  int v506;
  Json::Value::Self *v507;
  gaia::UserProfile::Self *v508;
  int v509;
  int v510;
  int v511;
  Json::Value::Self *v512;
  Json::Value::Self *v513;
  int v514;
  int v515;
  int v516;
  Json::Value::Self *v517;
  Json::Value::Self *v518;
  Json::Value::Self *v519;
  int v520;
  int v521;
  Json::Value::Self *v522;
  Json::Value::Self *v523;
  Json::Value::Self *v524;
  int v525;
  int v526;
  int v527;
  Json::Value::Self *v528;
  Json::Value::Self *v529;
  int v530;
  int v531;
  Json::Value::Self *v532;
  Json::Value::Self *v533;
  int v534;
  Json::Value::Self *v535;
  Json::Value::Self *v536;
  int v537;
  Json::Value::Self *v538;
  Json::Value::Self *v539;
  int v540;
  int v541;
  Json::Value::Self *v542;
  int v543;
  Json::Value::Self *v544;
  int v545;
  Json::Value::Self *v546;
  int v547;
  Json::Value::Self *v548;
  Json::Value::Self *v549;
  int v550;
  Json::Value::Self *v551;
  int v552;
  int v553;
  int v554;
  Json::Value::Self *v555;
  int v556;
  int v557;
  Json::Value::Self *v558;
  int v559;
  Json::Value::Self *v560;
  Json::Value::Self *v561;
  int v562;
  Json::Value::Self *v563;
  int v564;
  int v565;
  Json::Value::Self *v566;
  Json::Value::Self *v567;
  int v568;
  int v569;
  Json::Value::Self *v570;
  int v571;
  int v572;
  Json::Value::Self *v573;
  int v574;
  int v575;
  int v576;
  int v577;
  int v578;
  int v579;
  int v580;
  int v581;
  int v582;
  Json::Value::Self *v583;
  int v584;
  int v585;
  int v586;
  int v587;
  int v588;
  int v589;
  int v590;
  int v591;
  Json::Value::Self *v592;
  int v593;
  int v594;
  Json::Value::Self *v595;
  int v596;
  int v597;
  int v598;
  Json::Value::Self *v599;
  int v600;
  int v601;
  Json::Value::Self *v602;
  int v603;
  Json::Value::Self *v604;
  int v605;
  int v606;
  int v607;
  int v608;
  int v609;
  Json::Value::Self *v610;
  int v611;
  typedef Json::Value::Self *_g4_t_v612;
  typedef Json::Value::Self *_g4_t_v613;
  typedef Json::Value::Self *_g4_t_v614;
  typedef Json::Value::Self *_g4_t_v615;
  typedef int *_g4_t_v616;
  typedef Json::Value::Self *_g4_t_v617;
  typedef Json::Value::Self *_g4_t_v618;
  typedef Json::Value::Self *_g4_t_v619;
  typedef Json::Value::Self *_g4_t_v620;
  typedef Json::Value::Self *_g4_t_v621;
  typedef Json::Value::Self *_g4_t_v622;
  typedef Json::Value::Self *_g4_t_v623;
  typedef Json::Value::Self *_g4_t_v624;
  typedef Json::Value::Self *_g4_t_v625;
  typedef Json::Value::Self *_g4_t_v626;
  typedef Json::Value::Self *_g4_t_v627;
  typedef Json::Value::Self *_g4_t_v628;
  typedef Json::Value::Self *_g4_t_v629;
  typedef Json::Value::Self *_g4_t_v630;
  typedef Json::Value::Self *_g4_t_v631;
  typedef Json::Value::Self *_g4_t_v632;
  typedef Json::Value::Self *_g4_t_v633;
  typedef Json::Value::Self *_g4_t_v634;
  typedef Json::Value::Self *_g4_t_v635;
  typedef Json::Value::Self *_g4_t_v636;
  typedef Json::Value::Self *_g4_t_v637;
  typedef Json::Value::Self *_g4_t_v638;
  typedef Json::Value::Self *_g4_t_v639;
  typedef Json::Value::Self *_g4_t_v640;
  typedef Json::Value::Self *_g4_t_v641;
  typedef Json::Value::Self *_g4_t_v642;
  typedef Json::Value::Self *_g4_t_v643;
  typedef Json::Value::Self *_g4_t_v644;
  typedef Json::Value::Self *_g4_t_v645;
  typedef Json::Value::Self *_g4_t_v646;
  typedef Json::Value::Self *_g4_t_v647;
  typedef Json::Value::Self *_g4_t_v648;
  typedef int *_g4_t_v649;
  typedef Json::Value::Self *_g4_t_v650;
  typedef Json::Value::Self *_g4_t_v651;
  typedef Json::Value::Self *_g4_t_v652;
  typedef char *_g4_t_v653;
  typedef char *_g4_t_v654;
  typedef Json::Value::Self *_g4_t_v655;
  typedef Json::Value::Self *_g4_t_v656;
  typedef Json::Value::Self *_g4_t_v657;
  typedef Json::Value::Self *_g4_t_v658;
  typedef Json::Value::Self *_g4_t_v659;
  typedef Json::Value::Self *_g4_t_v660;
  typedef Json::Value::Self *_g4_t_v661;
  typedef Json::Value::Self *_g4_t_v662;
  typedef Json::Value::Self *_g4_t_v663;
  typedef int *_g4_t_v664;
  typedef Json::Value::Self *_g4_t_v665;
  typedef void **_g4_t_v666;
  typedef Json::Value::Self *_g4_t_v667;
  typedef Json::Value::Self *_g4_t_v668;
  typedef Json::Value::Self *_g4_t_v669;
  typedef Json::Value::Self *_g4_t_v670;
  typedef Json::Value::Self *_g4_t_v671;
  typedef Json::Value::Self *_g4_t_v672;
  typedef Json::Value::Self *_g4_t_v673;
  typedef Json::Value::Self *_g4_t_v674;
  typedef Json::Value::Self *_g4_t_v675;
  typedef Json::Value::Self *_g4_t_v676;
  typedef Json::Value::Self *_g4_t_v677;
  typedef Json::Value::Self *_g4_t_v678;
  typedef Json::Value::Self *_g4_t_v679;
  typedef Json::Value::Self *_g4_t_v680;
  typedef Json::Value::Self *_g4_t_v681;
  typedef Json::Value::Self *_g4_t_v682;
  typedef Json::Value::Self *_g4_t_v683;
  typedef Json::Value::Self *_g4_t_v684;
  typedef Json::Value::Self *_g4_t_v685;
  typedef void **_g4_t_v686;
  typedef Json::Value::Self *_g4_t_v687;
  typedef Json::Value::Self *_g4_t_v688;
  typedef Json::Value::Self *_g4_t_v689;
  typedef int *_g4_t_v690;
  typedef Json::Value::Self *_g4_t_v691;
  typedef Json::Value::Self *_g4_t_v692;
  typedef Json::Value::Self *_g4_t_v693;
  typedef Json::Value::Self *_g4_t_v694;
  typedef Json::Value::Self *_g4_t_v695;
  typedef Json::Value::Self *_g4_t_v696;
  typedef Json::Value::Self *_g4_t_v697;
  typedef Json::Value::Self *_g4_t_v698;
  typedef int *_g4_t_v699;
  typedef Json::Value::Self *_g4_t_v700;
  typedef void **_g4_t_v701;
  typedef Json::Value::Self *_g4_t_v702;
  typedef Json::Value::Self *_g4_t_v703;
  typedef Json::Value::Self *_g4_t_v704;
  typedef Json::Value::Self *_g4_t_v705;
  typedef Json::Value::Self *_g4_t_v706;
  typedef Json::Value::Self *_g4_t_v707;
  typedef Json::Value::Self *_g4_t_v708;
  typedef Json::Value::Self *_g4_t_v709;
  typedef Json::Value::Self *_g4_t_v710;
  typedef Json::Value::Self *_g4_t_v711;
  typedef Json::Value::Self *_g4_t_v712;
  typedef Json::Value::Self *_g4_t_v713;
  typedef Json::Value::Self *_g4_t_v714;
  typedef char _g4_t_v715;
  typedef Json::Value::Self *_g4_t_v716;
  typedef Json::Value::Self *_g4_t_v717;
  typedef Json::Value::Self *_g4_t_v718;
  typedef Json::Value::Self *_g4_t_v719;
  typedef Json::Value::Self *_g4_t_v720;
  typedef Json::Value::Self *_g4_t_v721;
  typedef Json::Value::Self *_g4_t_v722;
  typedef Json::Value::Self *_g4_t_v723;
  typedef Json::Value::Self *_g4_t_v724;
  typedef char _g4_t_v725;
  typedef char _g4_t_v726;
  typedef Json::Value::Self *_g4_t_v727;
  typedef Json::Value::Self *_g4_t_v728;
  typedef Json::Value::Self *_g4_t_v729;
  typedef Json::Value::Self *_g4_t_v730;
  typedef char _g4_t_v731;
  typedef Json::Value::Self *_g4_t_v732;
  typedef char _g4_t_v733;
  typedef Json::Value::Self *_g4_t_v734;
  typedef Json::Value::Self *_g4_t_v735;
  typedef Json::Value::Self *_g4_t_v736;
  typedef Json::Value::Self *_g4_t_v737;
  typedef Json::Value::Self *_g4_t_v738;
  typedef Json::Value::Self *_g4_t_v739;
  typedef Json::Value::Self *_g4_t_v740;
  typedef Json::Value::Self *_g4_t_v741;
  typedef Json::Value::Self *_g4_t_v742;
  typedef Json::Value::Self *_g4_t_v743;
  typedef Json::Value::Self *_g4_t_v744;
  typedef Json::Value::Self *_g4_t_v745;
  typedef Json::Value::Self *_g4_t_v746;
  typedef Json::Value::Self *_g4_t_v747;
  typedef Json::Value::Self *_g4_t_v748;
  typedef Json::Value::Self *_g4_t_v749;
  typedef Json::Value::Self *_g4_t_v750;
  typedef Json::Value::Self *_g4_t_v751;
  typedef Json::Value::Self *_g4_t_v752;
  typedef Json::Value::Self *_g4_t_v753;
  typedef void **_g4_t_v754;
  typedef Json::Value::Self *_g4_t_v755;
  typedef Json::Value::Self *_g4_t_v756;
  typedef Json::Value::Self *_g4_t_v757;
  typedef char _g4_t_v758;
  typedef Json::Value::Self *_g4_t_v759;
  typedef Json::Value::Self *_g4_t_v760;
  typedef char _g4_t_v761;
  typedef Json::Value::Self *_g4_t_v762;
  typedef Json::Value::Self *_g4_t_v763;
  typedef Json::Value::Self *_g4_t_v764;
  typedef Json::Value::Self *_g4_t_v765;
  typedef void **_g4_t_v766;
  typedef gaia::Gaia::Self *_g4_t_v767;
  typedef gaia::Gaia::Self *_g4_t_v768;
  typedef Json::Value::Self *_g4_t_v769;
  typedef gaia::Gaia::Self *_g4_t_v770;
  typedef gaia::Gaia::Self *_g4_t_v771;
  typedef gaia::Gaia::Self *_g4_t_v772;
  typedef gaia::Gaia::Self *_g4_t_v773;
  typedef gaia::Gaia::Self *_g4_t_v774;
  typedef gaia::Gaia::Self *_g4_t_v775;
  typedef gaia::Gaia::Self *_g4_t_v776;
  typedef gaia::Gaia::Self *_g4_t_v777;
  typedef gaia::Gaia::Self *_g4_t_v778;
  typedef gaia::Gaia::Self *_g4_t_v779;
  typedef gaia::Gaia::Self *_g4_t_v780;
  typedef gaia::Gaia::Self *_g4_t_v781;
  typedef gaia::Gaia::Self *_g4_t_v782;
  typedef gaia::Gaia::Self *_g4_t_v783;
  typedef gaia::Gaia::Self *_g4_t_v784;
  typedef gaia::Gaia::Self *_g4_t_v785;
  typedef gaia::Gaia::Self *_g4_t_v786;
  typedef gaia::Gaia::Self *_g4_t_v787;
  typedef gaia::Gaia::Self *_g4_t_v788;
  typedef gaia::Gaia::Self *_g4_t_v789;
  typedef char _g4_t_v790;
  typedef char _g4_t_v791;
  typedef gaia::Gaia::Self *_g4_t_v792;
  typedef gaia::Gaia::Self *_g4_t_v793;
  typedef gaia::Gaia::Self *_g4_t_v794;
  typedef char _g4_t_v795;
  typedef gaia::Gaia::Self *_g4_t_v796;
  typedef gaia::Gaia::Self *_g4_t_v797;
  typedef gaia::Gaia::Self *_g4_t_v798;
  typedef gaia::Gaia::Self *_g4_t_v799;
  typedef Json::Value::Self *_g4_t_v800;
  typedef char _g4_t_v801;
  typedef gaia::Gaia::Self *_g4_t_v802;
  typedef gaia::Gaia::Self *_g4_t_v803;
  typedef gaia::Gaia::Self *_g4_t_v804;
  typedef gaia::Gaia::Self *_g4_t_v805;
  typedef gaia::Gaia::Self *_g4_t_v806;
  typedef gaia::Gaia::Self *_g4_t_v807;
  typedef gaia::Gaia::Self *_g4_t_v808;
  typedef gaia::Gaia::Self *_g4_t_v809;
  typedef gaia::Gaia::Self *_g4_t_v810;
  typedef int *_g4_t_v811;
  typedef gaia::Gaia::Self *_g4_t_v812;
  typedef gaia::Gaia::Self *_g4_t_v813;
  typedef gaia::Gaia::Self *_g4_t_v814;
  typedef gaia::Gaia::Self *_g4_t_v815;
  typedef gaia::Gaia::Self *_g4_t_v816;
  typedef gaia::Gaia::Self *_g4_t_v817;
  typedef char _g4_t_v818;
  typedef gaia::Gaia::Self *_g4_t_v819;
  typedef gaia::Gaia::Self *_g4_t_v820;
  typedef Json::Value::Self *_g4_t_v821;
  typedef Json::Value::Self *_g4_t_v822;
  typedef Json::Value::Self *_g4_t_v823;
  typedef Json::Value::Self *_g4_t_v824;
  typedef Json::Value::Self *_g4_t_v825;
  typedef Json::Value::Self *_g4_t_v826;
  typedef Json::Value::Self *_g4_t_v827;
  typedef Json::Value::Self *_g4_t_v828;
  typedef Json::Value::Self *_g4_t_v829;
  typedef Json::Value::Self *_g4_t_v830;
  typedef Json::Value::Self *_g4_t_v831;
  typedef char _g4_t_v832;
  typedef Json::Value::Self *_g4_t_v833;
  typedef Json::Value::Self *_g4_t_v834;
  typedef Json::Value::Self *_g4_t_v835;
  typedef Json::Value::Self *_g4_t_v836;
  typedef Json::Value::Self *_g4_t_v837;
  typedef Json::Value::Self *_g4_t_v838;
  typedef Json::Value::Self *_g4_t_v839;
  typedef Json::Value::Self *_g4_t_v840;
  typedef Json::Value::Self *_g4_t_v841;
  typedef Json::Value::Self *_g4_t_v842;
  typedef Json::Value::Self *_g4_t_v843;
  typedef Json::Value::Self *_g4_t_v844;
  typedef Json::Value::Self *_g4_t_v845;
  typedef Json::Value::Self *_g4_t_v846;
  typedef Json::Value::Self *_g4_t_v847;
  typedef Json::Value::Self *_g4_t_v848;
  typedef Json::Value::Self *_g4_t_v849;
  typedef void **_g4_t_v850;
  typedef Json::Value::Self *_g4_t_v851;
  typedef Json::Value::Self *_g4_t_v852;
  typedef Json::Value::Self *_g4_t_v853;
  typedef Json::Value::Self *_g4_t_v854;
  typedef Json::Value::Self *_g4_t_v855;
  typedef Json::Value::Self *_g4_t_v856;
  typedef Json::Value::Self *_g4_t_v857;
  typedef int _g4_t_v858;
  typedef int _g4_t_v859;
  typedef void *_g4_t_v860;
  typedef int _g4_t_v861;
  typedef int _g4_t_v862;
  typedef int _g4_t_v863;
  typedef int _g4_t_v864;
  typedef int _g4_t_v865;
  typedef int _g4_t_v866;
  typedef int _g4_t_v867;
  typedef int _g4_t_v868;
  typedef int _g4_t_v869;
  typedef void *_g4_t_v870;
  typedef int _g4_t_v871;
  typedef int _g4_t_v872;
  typedef int _g4_t_v873;
  typedef int _g4_t_v874;
  typedef int _g4_t_v875;
  typedef int _g4_t_v876;
  typedef int _g4_t_v877;
  typedef unsigned int _g4_t_v878;
  typedef unsigned int _g4_t_v879;
  typedef unsigned int _g4_t_v880;
  typedef unsigned int _g4_t_v881;
  typedef unsigned int _g4_t_v882;
  typedef unsigned int _g4_t_v883;
  typedef int _g4_t_v884;
  typedef int _g4_t_v885;
  typedef int _g4_t_v886;
  typedef int _g4_t_v887;
  typedef int _g4_t_v888;
  typedef void *_g4_t_v889;
  typedef int _g4_t_v890;
  typedef Json::Value::Self *_g4_t_Matches;
  typedef int _g4_t_v892;
  typedef int _g4_t_v893;
  typedef int _g4_t_v894;
  typedef int _g4_t_v895;
  typedef int _g4_t_v896;
  typedef const void *_g4_t_v897;
  typedef int _g4_t_v898;
  typedef int _g4_t_v899;
  typedef int _g4_t_v900;
  typedef int _g4_t_v901;
  typedef int _g4_t_v902;
  typedef int _g4_t_v903;
  typedef int _g4_t_v904;
  typedef int _g4_t_v905;
  typedef int _g4_t_v906;
  typedef int _g4_t_v907;
  typedef int _g4_t_v908;
  typedef int _g4_t_v909;
  typedef int _g4_t_v910;
  typedef int _g4_t_v911;
  typedef int _g4_t_v912;
  typedef int _g4_t_v913;
  typedef int _g4_t_v914;
  typedef int _g4_t_v915;
  typedef int _g4_t_v916;
  typedef int _g4_t_v917;
  typedef int _g4_t_v918;
  typedef int _g4_t_v919;
  typedef int _g4_t_v920;
  typedef int _g4_t_v921;
  typedef int _g4_t_v922;
  typedef int _g4_t_v923;
  typedef int _g4_t_v924;
  typedef int _g4_t_v925;
  typedef int _g4_t_v926;
  typedef int _g4_t_v927;
  typedef int _g4_t_v928;
  typedef int _g4_t_v929;
  typedef int _g4_t_v930;
  typedef int _g4_t_v931;
  typedef int _g4_t_v932;
  typedef int _g4_t_v933;
  typedef int _g4_t_v934;
  typedef int _g4_t_v935;
  typedef int _g4_t_v936;
  typedef int _g4_t_v937;
  typedef int _g4_t_v938;
  typedef int _g4_t_v939;
  typedef int _g4_t_v940;
  typedef int _g4_t_v941;
  typedef int _g4_t_v942;
  typedef int _g4_t_v943;
  typedef int _g4_t_v944;
  typedef int _g4_t_v945;
  typedef int _g4_t_v946;
  typedef int _g4_t_v947;
  typedef int _g4_t_v948;
  typedef int _g4_t_v949;
  typedef int _g4_t_v950;
  typedef int _g4_t_v951;
  typedef int _g4_t_v952;
  typedef int _g4_t_v953;
  typedef int _g4_t_v954;
  typedef int _g4_t_v955;
  typedef int _g4_t_v956;
  typedef int _g4_t_v957;
  typedef int _g4_t_v958;
  typedef int _g4_t_v959;
  typedef int _g4_t_v960;
  typedef int _g4_t_v961;
  typedef int _g4_t_v962;
  typedef int _g4_t_v963;
  typedef int _g4_t_v964;
  typedef int _g4_t_v965;
  typedef int _g4_t_v966;
  typedef int _g4_t_v967;
  typedef int _g4_t_v968;
  typedef void *_g4_t_v969;
  typedef int _g4_t_v970;
  typedef void *_g4_t_v971;
  typedef int _g4_t_v972;
  typedef int _g4_t_v973;
  typedef int _g4_t_v974;
  typedef int _g4_t_v975;
  typedef int _g4_t_v976;
  typedef int _g4_t_v977;
  typedef int _g4_t_v978;
  typedef int _g4_t_v979;
  typedef int _g4_t_v980;
  typedef int _g4_t_v981;
  typedef int _g4_t_v982;
  typedef int _g4_t_v983;
  typedef int _g4_t_v984;
  typedef int _g4_t_v985;
  typedef int _g4_t_v986;
  typedef int _g4_t_v987;
  typedef int _g4_t_v988;
  typedef int _g4_t_v989;
  typedef int _g4_t_v990;
  typedef int _g4_t_v991;
  typedef int _g4_t_v992;
  typedef int _g4_t_v993;
  typedef int _g4_t_v994;
  typedef int _g4_t_v995;
  typedef int _g4_t_v996;
  typedef int _g4_t_v997;
  typedef int _g4_t_v998;
  typedef int _g4_t_v999;
  typedef int _g4_t_v1000;
  typedef int _g4_t_v1001;
  typedef int _g4_t_v1002;
  typedef int _g4_t_v1003;
  typedef int _g4_t_v1004;
  typedef int _g4_t_v1005;
  typedef int _g4_t_v1006;
  typedef int _g4_t_v1007;
  typedef int _g4_t_v1008;
  typedef int _g4_t_v1009;
  typedef int _g4_t_v1010;
  typedef int _g4_t_v1011;
  typedef int _g4_t_v1012;
  typedef int _g4_t_v1013;
  typedef int _g4_t_v1014;
  typedef int _g4_t_v1015;
  typedef int _g4_t_v1016;
  typedef int _g4_t_v1017;
  typedef int _g4_t_v1018;
  typedef int _g4_t_v1019;
  typedef int _g4_t_v1020;
  typedef int _g4_t_v1021;
  typedef int _g4_t_v1022;
  typedef int _g4_t_v1023;
  typedef int _g4_t_v1024;
  typedef int _g4_t_v1025;
  typedef int _g4_t_v1026;
  typedef int _g4_t_v1027;
  typedef int _g4_t_v1028;
  typedef int _g4_t_v1029;
  typedef int _g4_t_v1030;
  typedef int _g4_t_v1031;
  typedef int _g4_t_v1032;
  typedef int _g4_t_v1033;
  typedef int _g4_t_v1034;
  typedef int _g4_t_v1035;
  typedef int _g4_t_v1036;
  typedef int _g4_t_v1037;
  typedef int _g4_t_v1038;
  typedef int _g4_t_v1039;
  typedef int _g4_t_v1040;
  typedef int _g4_t_v1041;
  typedef int _g4_t_v1042;
  typedef int _g4_t_v1043;
  typedef int _g4_t_v1044;
  typedef int _g4_t_v1045;
  typedef int _g4_t_v1046;
  typedef int _g4_t_v1047;
  typedef int _g4_t_v1048;
  typedef int _g4_t_v1049;
  typedef int _g4_t_v1050;
  typedef int _g4_t_v1051;
  typedef int _g4_t_v1052;
  typedef int _g4_t_v1053;
  typedef int _g4_t_v1054;
  typedef int _g4_t_v1055;
  typedef int _g4_t_v1056;
  typedef int _g4_t_v1057;
  typedef int _g4_t_v1058;
  typedef int _g4_t_v1059;
  typedef int _g4_t_v1060;
  typedef int _g4_t_v1061;
  typedef int _g4_t_v1062;
  typedef int _g4_t_v1063;
  typedef int _g4_t_v1064;
  typedef int _g4_t_v1065;
  typedef int _g4_t_v1066;
  typedef int _g4_t_v1067;
  typedef int _g4_t_v1068;
  typedef int _g4_t_v1069;
  typedef int _g4_t_v1070;
  typedef int _g4_t_v1071;
  typedef int _g4_t_v1072;
  typedef int _g4_t_v1073;
  typedef int _g4_t_v1074;
  typedef int _g4_t_v1075;
  typedef int _g4_t_v1076;
  typedef int _g4_t_v1077;
  typedef int _g4_t_v1078;
  typedef int _g4_t_v1079;
  typedef int _g4_t_v1080;
  typedef int _g4_t_v1081;
  typedef int _g4_t_v1082;
  typedef int _g4_t_v1083;
  typedef int _g4_t_v1084;
  typedef int _g4_t_v1085;
  typedef int _g4_t_v1086;
  typedef int _g4_t_v1087;
  typedef int _g4_t_v1088;
  typedef int _g4_t_v1089;
  typedef int _g4_t_v1090;
  typedef int _g4_t_v1091;
  typedef int _g4_t_v1092;
  typedef int _g4_t_v1093;
  typedef int _g4_t_v1094;
  typedef int _g4_t_v1095;
  typedef int _g4_t_v1096;
  typedef int _g4_t_v1097;
  typedef int _g4_t_v1098;
  typedef int _g4_t_v1099;
  typedef int _g4_t_v1100;
  typedef int _g4_t_v1101;
  typedef int _g4_t_v1102;
  typedef int _g4_t_v1103;
  typedef int _g4_t_v1104;
  typedef int _g4_t_v1105;
  typedef int _g4_t_v1106;
  typedef int _g4_t_v1107;
  typedef int _g4_t_v1108;
  typedef int _g4_t_v1109;
  typedef int _g4_t_v1110;
  typedef int _g4_t_v1111[8];
  enum : size_t {
    _g4_s0 = 1104u,
    _g4_s1 = (0u + sizeof(_g4_t_v612)) > _g4_s0 ? (0u + sizeof(_g4_t_v612)) : _g4_s0,
    _g4_s2 = (72u + sizeof(_g4_t_v613)) > _g4_s1 ? (72u + sizeof(_g4_t_v613)) : _g4_s1,
    _g4_s3 = (72u + sizeof(_g4_t_v614)) > _g4_s2 ? (72u + sizeof(_g4_t_v614)) : _g4_s2,
    _g4_s4 = (72u + sizeof(_g4_t_v615)) > _g4_s3 ? (72u + sizeof(_g4_t_v615)) : _g4_s3,
    _g4_s5 = (72u + sizeof(_g4_t_v616)) > _g4_s4 ? (72u + sizeof(_g4_t_v616)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v617)) > _g4_s5 ? (72u + sizeof(_g4_t_v617)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v618)) > _g4_s6 ? (72u + sizeof(_g4_t_v618)) : _g4_s6,
    _g4_s8 = (72u + sizeof(_g4_t_v619)) > _g4_s7 ? (72u + sizeof(_g4_t_v619)) : _g4_s7,
    _g4_s9 = (72u + sizeof(_g4_t_v620)) > _g4_s8 ? (72u + sizeof(_g4_t_v620)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v621)) > _g4_s9 ? (72u + sizeof(_g4_t_v621)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v622)) > _g4_s10 ? (72u + sizeof(_g4_t_v622)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v623)) > _g4_s11 ? (72u + sizeof(_g4_t_v623)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v624)) > _g4_s12 ? (72u + sizeof(_g4_t_v624)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v625)) > _g4_s13 ? (72u + sizeof(_g4_t_v625)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v626)) > _g4_s14 ? (72u + sizeof(_g4_t_v626)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v627)) > _g4_s15 ? (72u + sizeof(_g4_t_v627)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v628)) > _g4_s16 ? (72u + sizeof(_g4_t_v628)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v629)) > _g4_s17 ? (72u + sizeof(_g4_t_v629)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v630)) > _g4_s18 ? (72u + sizeof(_g4_t_v630)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v631)) > _g4_s19 ? (72u + sizeof(_g4_t_v631)) : _g4_s19,
    _g4_s21 = (72u + sizeof(_g4_t_v632)) > _g4_s20 ? (72u + sizeof(_g4_t_v632)) : _g4_s20,
    _g4_s22 = (72u + sizeof(_g4_t_v633)) > _g4_s21 ? (72u + sizeof(_g4_t_v633)) : _g4_s21,
    _g4_s23 = (72u + sizeof(_g4_t_v634)) > _g4_s22 ? (72u + sizeof(_g4_t_v634)) : _g4_s22,
    _g4_s24 = (72u + sizeof(_g4_t_v635)) > _g4_s23 ? (72u + sizeof(_g4_t_v635)) : _g4_s23,
    _g4_s25 = (72u + sizeof(_g4_t_v636)) > _g4_s24 ? (72u + sizeof(_g4_t_v636)) : _g4_s24,
    _g4_s26 = (72u + sizeof(_g4_t_v637)) > _g4_s25 ? (72u + sizeof(_g4_t_v637)) : _g4_s25,
    _g4_s27 = (72u + sizeof(_g4_t_v638)) > _g4_s26 ? (72u + sizeof(_g4_t_v638)) : _g4_s26,
    _g4_s28 = (72u + sizeof(_g4_t_v639)) > _g4_s27 ? (72u + sizeof(_g4_t_v639)) : _g4_s27,
    _g4_s29 = (72u + sizeof(_g4_t_v640)) > _g4_s28 ? (72u + sizeof(_g4_t_v640)) : _g4_s28,
    _g4_s30 = (72u + sizeof(_g4_t_v641)) > _g4_s29 ? (72u + sizeof(_g4_t_v641)) : _g4_s29,
    _g4_s31 = (72u + sizeof(_g4_t_v642)) > _g4_s30 ? (72u + sizeof(_g4_t_v642)) : _g4_s30,
    _g4_s32 = (72u + sizeof(_g4_t_v643)) > _g4_s31 ? (72u + sizeof(_g4_t_v643)) : _g4_s31,
    _g4_s33 = (72u + sizeof(_g4_t_v644)) > _g4_s32 ? (72u + sizeof(_g4_t_v644)) : _g4_s32,
    _g4_s34 = (72u + sizeof(_g4_t_v645)) > _g4_s33 ? (72u + sizeof(_g4_t_v645)) : _g4_s33,
    _g4_s35 = (72u + sizeof(_g4_t_v646)) > _g4_s34 ? (72u + sizeof(_g4_t_v646)) : _g4_s34,
    _g4_s36 = (72u + sizeof(_g4_t_v647)) > _g4_s35 ? (72u + sizeof(_g4_t_v647)) : _g4_s35,
    _g4_s37 = (72u + sizeof(_g4_t_v648)) > _g4_s36 ? (72u + sizeof(_g4_t_v648)) : _g4_s36,
    _g4_s38 = (72u + sizeof(_g4_t_v649)) > _g4_s37 ? (72u + sizeof(_g4_t_v649)) : _g4_s37,
    _g4_s39 = (72u + sizeof(_g4_t_v650)) > _g4_s38 ? (72u + sizeof(_g4_t_v650)) : _g4_s38,
    _g4_s40 = (72u + sizeof(_g4_t_v651)) > _g4_s39 ? (72u + sizeof(_g4_t_v651)) : _g4_s39,
    _g4_s41 = (72u + sizeof(_g4_t_v652)) > _g4_s40 ? (72u + sizeof(_g4_t_v652)) : _g4_s40,
    _g4_s42 = (72u + sizeof(_g4_t_v653)) > _g4_s41 ? (72u + sizeof(_g4_t_v653)) : _g4_s41,
    _g4_s43 = (72u + sizeof(_g4_t_v654)) > _g4_s42 ? (72u + sizeof(_g4_t_v654)) : _g4_s42,
    _g4_s44 = (72u + sizeof(_g4_t_v655)) > _g4_s43 ? (72u + sizeof(_g4_t_v655)) : _g4_s43,
    _g4_s45 = (72u + sizeof(_g4_t_v656)) > _g4_s44 ? (72u + sizeof(_g4_t_v656)) : _g4_s44,
    _g4_s46 = (72u + sizeof(_g4_t_v657)) > _g4_s45 ? (72u + sizeof(_g4_t_v657)) : _g4_s45,
    _g4_s47 = (72u + sizeof(_g4_t_v658)) > _g4_s46 ? (72u + sizeof(_g4_t_v658)) : _g4_s46,
    _g4_s48 = (72u + sizeof(_g4_t_v659)) > _g4_s47 ? (72u + sizeof(_g4_t_v659)) : _g4_s47,
    _g4_s49 = (72u + sizeof(_g4_t_v660)) > _g4_s48 ? (72u + sizeof(_g4_t_v660)) : _g4_s48,
    _g4_s50 = (72u + sizeof(_g4_t_v661)) > _g4_s49 ? (72u + sizeof(_g4_t_v661)) : _g4_s49,
    _g4_s51 = (72u + sizeof(_g4_t_v662)) > _g4_s50 ? (72u + sizeof(_g4_t_v662)) : _g4_s50,
    _g4_s52 = (76u + sizeof(_g4_t_v663)) > _g4_s51 ? (76u + sizeof(_g4_t_v663)) : _g4_s51,
    _g4_s53 = (76u + sizeof(_g4_t_v664)) > _g4_s52 ? (76u + sizeof(_g4_t_v664)) : _g4_s52,
    _g4_s54 = (76u + sizeof(_g4_t_v665)) > _g4_s53 ? (76u + sizeof(_g4_t_v665)) : _g4_s53,
    _g4_s55 = (76u + sizeof(_g4_t_v666)) > _g4_s54 ? (76u + sizeof(_g4_t_v666)) : _g4_s54,
    _g4_s56 = (76u + sizeof(_g4_t_v667)) > _g4_s55 ? (76u + sizeof(_g4_t_v667)) : _g4_s55,
    _g4_s57 = (76u + sizeof(_g4_t_v668)) > _g4_s56 ? (76u + sizeof(_g4_t_v668)) : _g4_s56,
    _g4_s58 = (76u + sizeof(_g4_t_v669)) > _g4_s57 ? (76u + sizeof(_g4_t_v669)) : _g4_s57,
    _g4_s59 = (76u + sizeof(_g4_t_v670)) > _g4_s58 ? (76u + sizeof(_g4_t_v670)) : _g4_s58,
    _g4_s60 = (76u + sizeof(_g4_t_v671)) > _g4_s59 ? (76u + sizeof(_g4_t_v671)) : _g4_s59,
    _g4_s61 = (76u + sizeof(_g4_t_v672)) > _g4_s60 ? (76u + sizeof(_g4_t_v672)) : _g4_s60,
    _g4_s62 = (76u + sizeof(_g4_t_v673)) > _g4_s61 ? (76u + sizeof(_g4_t_v673)) : _g4_s61,
    _g4_s63 = (76u + sizeof(_g4_t_v674)) > _g4_s62 ? (76u + sizeof(_g4_t_v674)) : _g4_s62,
    _g4_s64 = (76u + sizeof(_g4_t_v675)) > _g4_s63 ? (76u + sizeof(_g4_t_v675)) : _g4_s63,
    _g4_s65 = (76u + sizeof(_g4_t_v676)) > _g4_s64 ? (76u + sizeof(_g4_t_v676)) : _g4_s64,
    _g4_s66 = (76u + sizeof(_g4_t_v677)) > _g4_s65 ? (76u + sizeof(_g4_t_v677)) : _g4_s65,
    _g4_s67 = (76u + sizeof(_g4_t_v678)) > _g4_s66 ? (76u + sizeof(_g4_t_v678)) : _g4_s66,
    _g4_s68 = (76u + sizeof(_g4_t_v679)) > _g4_s67 ? (76u + sizeof(_g4_t_v679)) : _g4_s67,
    _g4_s69 = (76u + sizeof(_g4_t_v680)) > _g4_s68 ? (76u + sizeof(_g4_t_v680)) : _g4_s68,
    _g4_s70 = (76u + sizeof(_g4_t_v681)) > _g4_s69 ? (76u + sizeof(_g4_t_v681)) : _g4_s69,
    _g4_s71 = (76u + sizeof(_g4_t_v682)) > _g4_s70 ? (76u + sizeof(_g4_t_v682)) : _g4_s70,
    _g4_s72 = (76u + sizeof(_g4_t_v683)) > _g4_s71 ? (76u + sizeof(_g4_t_v683)) : _g4_s71,
    _g4_s73 = (76u + sizeof(_g4_t_v684)) > _g4_s72 ? (76u + sizeof(_g4_t_v684)) : _g4_s72,
    _g4_s74 = (76u + sizeof(_g4_t_v685)) > _g4_s73 ? (76u + sizeof(_g4_t_v685)) : _g4_s73,
    _g4_s75 = (76u + sizeof(_g4_t_v686)) > _g4_s74 ? (76u + sizeof(_g4_t_v686)) : _g4_s74,
    _g4_s76 = (76u + sizeof(_g4_t_v687)) > _g4_s75 ? (76u + sizeof(_g4_t_v687)) : _g4_s75,
    _g4_s77 = (76u + sizeof(_g4_t_v688)) > _g4_s76 ? (76u + sizeof(_g4_t_v688)) : _g4_s76,
    _g4_s78 = (76u + sizeof(_g4_t_v689)) > _g4_s77 ? (76u + sizeof(_g4_t_v689)) : _g4_s77,
    _g4_s79 = (76u + sizeof(_g4_t_v690)) > _g4_s78 ? (76u + sizeof(_g4_t_v690)) : _g4_s78,
    _g4_s80 = (76u + sizeof(_g4_t_v691)) > _g4_s79 ? (76u + sizeof(_g4_t_v691)) : _g4_s79,
    _g4_s81 = (76u + sizeof(_g4_t_v692)) > _g4_s80 ? (76u + sizeof(_g4_t_v692)) : _g4_s80,
    _g4_s82 = (76u + sizeof(_g4_t_v693)) > _g4_s81 ? (76u + sizeof(_g4_t_v693)) : _g4_s81,
    _g4_s83 = (76u + sizeof(_g4_t_v694)) > _g4_s82 ? (76u + sizeof(_g4_t_v694)) : _g4_s82,
    _g4_s84 = (76u + sizeof(_g4_t_v695)) > _g4_s83 ? (76u + sizeof(_g4_t_v695)) : _g4_s83,
    _g4_s85 = (76u + sizeof(_g4_t_v696)) > _g4_s84 ? (76u + sizeof(_g4_t_v696)) : _g4_s84,
    _g4_s86 = (76u + sizeof(_g4_t_v697)) > _g4_s85 ? (76u + sizeof(_g4_t_v697)) : _g4_s85,
    _g4_s87 = (76u + sizeof(_g4_t_v698)) > _g4_s86 ? (76u + sizeof(_g4_t_v698)) : _g4_s86,
    _g4_s88 = (80u + sizeof(_g4_t_v699)) > _g4_s87 ? (80u + sizeof(_g4_t_v699)) : _g4_s87,
    _g4_s89 = (80u + sizeof(_g4_t_v700)) > _g4_s88 ? (80u + sizeof(_g4_t_v700)) : _g4_s88,
    _g4_s90 = (80u + sizeof(_g4_t_v701)) > _g4_s89 ? (80u + sizeof(_g4_t_v701)) : _g4_s89,
    _g4_s91 = (80u + sizeof(_g4_t_v702)) > _g4_s90 ? (80u + sizeof(_g4_t_v702)) : _g4_s90,
    _g4_s92 = (80u + sizeof(_g4_t_v703)) > _g4_s91 ? (80u + sizeof(_g4_t_v703)) : _g4_s91,
    _g4_s93 = (80u + sizeof(_g4_t_v704)) > _g4_s92 ? (80u + sizeof(_g4_t_v704)) : _g4_s92,
    _g4_s94 = (80u + sizeof(_g4_t_v705)) > _g4_s93 ? (80u + sizeof(_g4_t_v705)) : _g4_s93,
    _g4_s95 = (80u + sizeof(_g4_t_v706)) > _g4_s94 ? (80u + sizeof(_g4_t_v706)) : _g4_s94,
    _g4_s96 = (80u + sizeof(_g4_t_v707)) > _g4_s95 ? (80u + sizeof(_g4_t_v707)) : _g4_s95,
    _g4_s97 = (80u + sizeof(_g4_t_v708)) > _g4_s96 ? (80u + sizeof(_g4_t_v708)) : _g4_s96,
    _g4_s98 = (80u + sizeof(_g4_t_v709)) > _g4_s97 ? (80u + sizeof(_g4_t_v709)) : _g4_s97,
    _g4_s99 = (80u + sizeof(_g4_t_v710)) > _g4_s98 ? (80u + sizeof(_g4_t_v710)) : _g4_s98,
    _g4_s100 = (80u + sizeof(_g4_t_v711)) > _g4_s99 ? (80u + sizeof(_g4_t_v711)) : _g4_s99,
    _g4_s101 = (80u + sizeof(_g4_t_v712)) > _g4_s100 ? (80u + sizeof(_g4_t_v712)) : _g4_s100,
    _g4_s102 = (80u + sizeof(_g4_t_v713)) > _g4_s101 ? (80u + sizeof(_g4_t_v713)) : _g4_s101,
    _g4_s103 = (80u + sizeof(_g4_t_v714)) > _g4_s102 ? (80u + sizeof(_g4_t_v714)) : _g4_s102,
    _g4_s104 = (80u + sizeof(_g4_t_v715)) > _g4_s103 ? (80u + sizeof(_g4_t_v715)) : _g4_s103,
    _g4_s105 = (80u + sizeof(_g4_t_v716)) > _g4_s104 ? (80u + sizeof(_g4_t_v716)) : _g4_s104,
    _g4_s106 = (80u + sizeof(_g4_t_v717)) > _g4_s105 ? (80u + sizeof(_g4_t_v717)) : _g4_s105,
    _g4_s107 = (80u + sizeof(_g4_t_v718)) > _g4_s106 ? (80u + sizeof(_g4_t_v718)) : _g4_s106,
    _g4_s108 = (80u + sizeof(_g4_t_v719)) > _g4_s107 ? (80u + sizeof(_g4_t_v719)) : _g4_s107,
    _g4_s109 = (80u + sizeof(_g4_t_v720)) > _g4_s108 ? (80u + sizeof(_g4_t_v720)) : _g4_s108,
    _g4_s110 = (80u + sizeof(_g4_t_v721)) > _g4_s109 ? (80u + sizeof(_g4_t_v721)) : _g4_s109,
    _g4_s111 = (80u + sizeof(_g4_t_v722)) > _g4_s110 ? (80u + sizeof(_g4_t_v722)) : _g4_s110,
    _g4_s112 = (80u + sizeof(_g4_t_v723)) > _g4_s111 ? (80u + sizeof(_g4_t_v723)) : _g4_s111,
    _g4_s113 = (80u + sizeof(_g4_t_v724)) > _g4_s112 ? (80u + sizeof(_g4_t_v724)) : _g4_s112,
    _g4_s114 = (80u + sizeof(_g4_t_v725)) > _g4_s113 ? (80u + sizeof(_g4_t_v725)) : _g4_s113,
    _g4_s115 = (80u + sizeof(_g4_t_v726)) > _g4_s114 ? (80u + sizeof(_g4_t_v726)) : _g4_s114,
    _g4_s116 = (80u + sizeof(_g4_t_v727)) > _g4_s115 ? (80u + sizeof(_g4_t_v727)) : _g4_s115,
    _g4_s117 = (80u + sizeof(_g4_t_v728)) > _g4_s116 ? (80u + sizeof(_g4_t_v728)) : _g4_s116,
    _g4_s118 = (80u + sizeof(_g4_t_v729)) > _g4_s117 ? (80u + sizeof(_g4_t_v729)) : _g4_s117,
    _g4_s119 = (80u + sizeof(_g4_t_v730)) > _g4_s118 ? (80u + sizeof(_g4_t_v730)) : _g4_s118,
    _g4_s120 = (80u + sizeof(_g4_t_v731)) > _g4_s119 ? (80u + sizeof(_g4_t_v731)) : _g4_s119,
    _g4_s121 = (80u + sizeof(_g4_t_v732)) > _g4_s120 ? (80u + sizeof(_g4_t_v732)) : _g4_s120,
    _g4_s122 = (80u + sizeof(_g4_t_v733)) > _g4_s121 ? (80u + sizeof(_g4_t_v733)) : _g4_s121,
    _g4_s123 = (80u + sizeof(_g4_t_v734)) > _g4_s122 ? (80u + sizeof(_g4_t_v734)) : _g4_s122,
    _g4_s124 = (80u + sizeof(_g4_t_v735)) > _g4_s123 ? (80u + sizeof(_g4_t_v735)) : _g4_s123,
    _g4_s125 = (80u + sizeof(_g4_t_v736)) > _g4_s124 ? (80u + sizeof(_g4_t_v736)) : _g4_s124,
    _g4_s126 = (80u + sizeof(_g4_t_v737)) > _g4_s125 ? (80u + sizeof(_g4_t_v737)) : _g4_s125,
    _g4_s127 = (80u + sizeof(_g4_t_v738)) > _g4_s126 ? (80u + sizeof(_g4_t_v738)) : _g4_s126,
    _g4_s128 = (80u + sizeof(_g4_t_v739)) > _g4_s127 ? (80u + sizeof(_g4_t_v739)) : _g4_s127,
    _g4_s129 = (80u + sizeof(_g4_t_v740)) > _g4_s128 ? (80u + sizeof(_g4_t_v740)) : _g4_s128,
    _g4_s130 = (80u + sizeof(_g4_t_v741)) > _g4_s129 ? (80u + sizeof(_g4_t_v741)) : _g4_s129,
    _g4_s131 = (80u + sizeof(_g4_t_v742)) > _g4_s130 ? (80u + sizeof(_g4_t_v742)) : _g4_s130,
    _g4_s132 = (80u + sizeof(_g4_t_v743)) > _g4_s131 ? (80u + sizeof(_g4_t_v743)) : _g4_s131,
    _g4_s133 = (80u + sizeof(_g4_t_v744)) > _g4_s132 ? (80u + sizeof(_g4_t_v744)) : _g4_s132,
    _g4_s134 = (80u + sizeof(_g4_t_v745)) > _g4_s133 ? (80u + sizeof(_g4_t_v745)) : _g4_s133,
    _g4_s135 = (80u + sizeof(_g4_t_v746)) > _g4_s134 ? (80u + sizeof(_g4_t_v746)) : _g4_s134,
    _g4_s136 = (80u + sizeof(_g4_t_v747)) > _g4_s135 ? (80u + sizeof(_g4_t_v747)) : _g4_s135,
    _g4_s137 = (80u + sizeof(_g4_t_v748)) > _g4_s136 ? (80u + sizeof(_g4_t_v748)) : _g4_s136,
    _g4_s138 = (80u + sizeof(_g4_t_v749)) > _g4_s137 ? (80u + sizeof(_g4_t_v749)) : _g4_s137,
    _g4_s139 = (80u + sizeof(_g4_t_v750)) > _g4_s138 ? (80u + sizeof(_g4_t_v750)) : _g4_s138,
    _g4_s140 = (80u + sizeof(_g4_t_v751)) > _g4_s139 ? (80u + sizeof(_g4_t_v751)) : _g4_s139,
    _g4_s141 = (80u + sizeof(_g4_t_v752)) > _g4_s140 ? (80u + sizeof(_g4_t_v752)) : _g4_s140,
    _g4_s142 = (80u + sizeof(_g4_t_v753)) > _g4_s141 ? (80u + sizeof(_g4_t_v753)) : _g4_s141,
    _g4_s143 = (80u + sizeof(_g4_t_v754)) > _g4_s142 ? (80u + sizeof(_g4_t_v754)) : _g4_s142,
    _g4_s144 = (80u + sizeof(_g4_t_v755)) > _g4_s143 ? (80u + sizeof(_g4_t_v755)) : _g4_s143,
    _g4_s145 = (80u + sizeof(_g4_t_v756)) > _g4_s144 ? (80u + sizeof(_g4_t_v756)) : _g4_s144,
    _g4_s146 = (80u + sizeof(_g4_t_v757)) > _g4_s145 ? (80u + sizeof(_g4_t_v757)) : _g4_s145,
    _g4_s147 = (80u + sizeof(_g4_t_v758)) > _g4_s146 ? (80u + sizeof(_g4_t_v758)) : _g4_s146,
    _g4_s148 = (80u + sizeof(_g4_t_v759)) > _g4_s147 ? (80u + sizeof(_g4_t_v759)) : _g4_s147,
    _g4_s149 = (80u + sizeof(_g4_t_v760)) > _g4_s148 ? (80u + sizeof(_g4_t_v760)) : _g4_s148,
    _g4_s150 = (80u + sizeof(_g4_t_v761)) > _g4_s149 ? (80u + sizeof(_g4_t_v761)) : _g4_s149,
    _g4_s151 = (80u + sizeof(_g4_t_v762)) > _g4_s150 ? (80u + sizeof(_g4_t_v762)) : _g4_s150,
    _g4_s152 = (80u + sizeof(_g4_t_v763)) > _g4_s151 ? (80u + sizeof(_g4_t_v763)) : _g4_s151,
    _g4_s153 = (80u + sizeof(_g4_t_v764)) > _g4_s152 ? (80u + sizeof(_g4_t_v764)) : _g4_s152,
    _g4_s154 = (80u + sizeof(_g4_t_v765)) > _g4_s153 ? (80u + sizeof(_g4_t_v765)) : _g4_s153,
    _g4_s155 = (84u + sizeof(_g4_t_v766)) > _g4_s154 ? (84u + sizeof(_g4_t_v766)) : _g4_s154,
    _g4_s156 = (84u + sizeof(_g4_t_v767)) > _g4_s155 ? (84u + sizeof(_g4_t_v767)) : _g4_s155,
    _g4_s157 = (84u + sizeof(_g4_t_v768)) > _g4_s156 ? (84u + sizeof(_g4_t_v768)) : _g4_s156,
    _g4_s158 = (84u + sizeof(_g4_t_v769)) > _g4_s157 ? (84u + sizeof(_g4_t_v769)) : _g4_s157,
    _g4_s159 = (84u + sizeof(_g4_t_v770)) > _g4_s158 ? (84u + sizeof(_g4_t_v770)) : _g4_s158,
    _g4_s160 = (84u + sizeof(_g4_t_v771)) > _g4_s159 ? (84u + sizeof(_g4_t_v771)) : _g4_s159,
    _g4_s161 = (84u + sizeof(_g4_t_v772)) > _g4_s160 ? (84u + sizeof(_g4_t_v772)) : _g4_s160,
    _g4_s162 = (84u + sizeof(_g4_t_v773)) > _g4_s161 ? (84u + sizeof(_g4_t_v773)) : _g4_s161,
    _g4_s163 = (84u + sizeof(_g4_t_v774)) > _g4_s162 ? (84u + sizeof(_g4_t_v774)) : _g4_s162,
    _g4_s164 = (84u + sizeof(_g4_t_v775)) > _g4_s163 ? (84u + sizeof(_g4_t_v775)) : _g4_s163,
    _g4_s165 = (84u + sizeof(_g4_t_v776)) > _g4_s164 ? (84u + sizeof(_g4_t_v776)) : _g4_s164,
    _g4_s166 = (84u + sizeof(_g4_t_v777)) > _g4_s165 ? (84u + sizeof(_g4_t_v777)) : _g4_s165,
    _g4_s167 = (84u + sizeof(_g4_t_v778)) > _g4_s166 ? (84u + sizeof(_g4_t_v778)) : _g4_s166,
    _g4_s168 = (84u + sizeof(_g4_t_v779)) > _g4_s167 ? (84u + sizeof(_g4_t_v779)) : _g4_s167,
    _g4_s169 = (84u + sizeof(_g4_t_v780)) > _g4_s168 ? (84u + sizeof(_g4_t_v780)) : _g4_s168,
    _g4_s170 = (84u + sizeof(_g4_t_v781)) > _g4_s169 ? (84u + sizeof(_g4_t_v781)) : _g4_s169,
    _g4_s171 = (84u + sizeof(_g4_t_v782)) > _g4_s170 ? (84u + sizeof(_g4_t_v782)) : _g4_s170,
    _g4_s172 = (84u + sizeof(_g4_t_v783)) > _g4_s171 ? (84u + sizeof(_g4_t_v783)) : _g4_s171,
    _g4_s173 = (84u + sizeof(_g4_t_v784)) > _g4_s172 ? (84u + sizeof(_g4_t_v784)) : _g4_s172,
    _g4_s174 = (84u + sizeof(_g4_t_v785)) > _g4_s173 ? (84u + sizeof(_g4_t_v785)) : _g4_s173,
    _g4_s175 = (84u + sizeof(_g4_t_v786)) > _g4_s174 ? (84u + sizeof(_g4_t_v786)) : _g4_s174,
    _g4_s176 = (84u + sizeof(_g4_t_v787)) > _g4_s175 ? (84u + sizeof(_g4_t_v787)) : _g4_s175,
    _g4_s177 = (84u + sizeof(_g4_t_v788)) > _g4_s176 ? (84u + sizeof(_g4_t_v788)) : _g4_s176,
    _g4_s178 = (84u + sizeof(_g4_t_v789)) > _g4_s177 ? (84u + sizeof(_g4_t_v789)) : _g4_s177,
    _g4_s179 = (84u + sizeof(_g4_t_v790)) > _g4_s178 ? (84u + sizeof(_g4_t_v790)) : _g4_s178,
    _g4_s180 = (84u + sizeof(_g4_t_v791)) > _g4_s179 ? (84u + sizeof(_g4_t_v791)) : _g4_s179,
    _g4_s181 = (84u + sizeof(_g4_t_v792)) > _g4_s180 ? (84u + sizeof(_g4_t_v792)) : _g4_s180,
    _g4_s182 = (84u + sizeof(_g4_t_v793)) > _g4_s181 ? (84u + sizeof(_g4_t_v793)) : _g4_s181,
    _g4_s183 = (84u + sizeof(_g4_t_v794)) > _g4_s182 ? (84u + sizeof(_g4_t_v794)) : _g4_s182,
    _g4_s184 = (84u + sizeof(_g4_t_v795)) > _g4_s183 ? (84u + sizeof(_g4_t_v795)) : _g4_s183,
    _g4_s185 = (84u + sizeof(_g4_t_v796)) > _g4_s184 ? (84u + sizeof(_g4_t_v796)) : _g4_s184,
    _g4_s186 = (84u + sizeof(_g4_t_v797)) > _g4_s185 ? (84u + sizeof(_g4_t_v797)) : _g4_s185,
    _g4_s187 = (84u + sizeof(_g4_t_v798)) > _g4_s186 ? (84u + sizeof(_g4_t_v798)) : _g4_s186,
    _g4_s188 = (84u + sizeof(_g4_t_v799)) > _g4_s187 ? (84u + sizeof(_g4_t_v799)) : _g4_s187,
    _g4_s189 = (84u + sizeof(_g4_t_v800)) > _g4_s188 ? (84u + sizeof(_g4_t_v800)) : _g4_s188,
    _g4_s190 = (84u + sizeof(_g4_t_v801)) > _g4_s189 ? (84u + sizeof(_g4_t_v801)) : _g4_s189,
    _g4_s191 = (84u + sizeof(_g4_t_v802)) > _g4_s190 ? (84u + sizeof(_g4_t_v802)) : _g4_s190,
    _g4_s192 = (84u + sizeof(_g4_t_v803)) > _g4_s191 ? (84u + sizeof(_g4_t_v803)) : _g4_s191,
    _g4_s193 = (84u + sizeof(_g4_t_v804)) > _g4_s192 ? (84u + sizeof(_g4_t_v804)) : _g4_s192,
    _g4_s194 = (84u + sizeof(_g4_t_v805)) > _g4_s193 ? (84u + sizeof(_g4_t_v805)) : _g4_s193,
    _g4_s195 = (84u + sizeof(_g4_t_v806)) > _g4_s194 ? (84u + sizeof(_g4_t_v806)) : _g4_s194,
    _g4_s196 = (84u + sizeof(_g4_t_v807)) > _g4_s195 ? (84u + sizeof(_g4_t_v807)) : _g4_s195,
    _g4_s197 = (84u + sizeof(_g4_t_v808)) > _g4_s196 ? (84u + sizeof(_g4_t_v808)) : _g4_s196,
    _g4_s198 = (84u + sizeof(_g4_t_v809)) > _g4_s197 ? (84u + sizeof(_g4_t_v809)) : _g4_s197,
    _g4_s199 = (84u + sizeof(_g4_t_v810)) > _g4_s198 ? (84u + sizeof(_g4_t_v810)) : _g4_s198,
    _g4_s200 = (84u + sizeof(_g4_t_v811)) > _g4_s199 ? (84u + sizeof(_g4_t_v811)) : _g4_s199,
    _g4_s201 = (84u + sizeof(_g4_t_v812)) > _g4_s200 ? (84u + sizeof(_g4_t_v812)) : _g4_s200,
    _g4_s202 = (84u + sizeof(_g4_t_v813)) > _g4_s201 ? (84u + sizeof(_g4_t_v813)) : _g4_s201,
    _g4_s203 = (84u + sizeof(_g4_t_v814)) > _g4_s202 ? (84u + sizeof(_g4_t_v814)) : _g4_s202,
    _g4_s204 = (84u + sizeof(_g4_t_v815)) > _g4_s203 ? (84u + sizeof(_g4_t_v815)) : _g4_s203,
    _g4_s205 = (84u + sizeof(_g4_t_v816)) > _g4_s204 ? (84u + sizeof(_g4_t_v816)) : _g4_s204,
    _g4_s206 = (84u + sizeof(_g4_t_v817)) > _g4_s205 ? (84u + sizeof(_g4_t_v817)) : _g4_s205,
    _g4_s207 = (84u + sizeof(_g4_t_v818)) > _g4_s206 ? (84u + sizeof(_g4_t_v818)) : _g4_s206,
    _g4_s208 = (84u + sizeof(_g4_t_v819)) > _g4_s207 ? (84u + sizeof(_g4_t_v819)) : _g4_s207,
    _g4_s209 = (84u + sizeof(_g4_t_v820)) > _g4_s208 ? (84u + sizeof(_g4_t_v820)) : _g4_s208,
    _g4_s210 = (88u + sizeof(_g4_t_v821)) > _g4_s209 ? (88u + sizeof(_g4_t_v821)) : _g4_s209,
    _g4_s211 = (88u + sizeof(_g4_t_v822)) > _g4_s210 ? (88u + sizeof(_g4_t_v822)) : _g4_s210,
    _g4_s212 = (88u + sizeof(_g4_t_v823)) > _g4_s211 ? (88u + sizeof(_g4_t_v823)) : _g4_s211,
    _g4_s213 = (88u + sizeof(_g4_t_v824)) > _g4_s212 ? (88u + sizeof(_g4_t_v824)) : _g4_s212,
    _g4_s214 = (88u + sizeof(_g4_t_v825)) > _g4_s213 ? (88u + sizeof(_g4_t_v825)) : _g4_s213,
    _g4_s215 = (88u + sizeof(_g4_t_v826)) > _g4_s214 ? (88u + sizeof(_g4_t_v826)) : _g4_s214,
    _g4_s216 = (88u + sizeof(_g4_t_v827)) > _g4_s215 ? (88u + sizeof(_g4_t_v827)) : _g4_s215,
    _g4_s217 = (88u + sizeof(_g4_t_v828)) > _g4_s216 ? (88u + sizeof(_g4_t_v828)) : _g4_s216,
    _g4_s218 = (88u + sizeof(_g4_t_v829)) > _g4_s217 ? (88u + sizeof(_g4_t_v829)) : _g4_s217,
    _g4_s219 = (88u + sizeof(_g4_t_v830)) > _g4_s218 ? (88u + sizeof(_g4_t_v830)) : _g4_s218,
    _g4_s220 = (88u + sizeof(_g4_t_v831)) > _g4_s219 ? (88u + sizeof(_g4_t_v831)) : _g4_s219,
    _g4_s221 = (88u + sizeof(_g4_t_v832)) > _g4_s220 ? (88u + sizeof(_g4_t_v832)) : _g4_s220,
    _g4_s222 = (88u + sizeof(_g4_t_v833)) > _g4_s221 ? (88u + sizeof(_g4_t_v833)) : _g4_s221,
    _g4_s223 = (88u + sizeof(_g4_t_v834)) > _g4_s222 ? (88u + sizeof(_g4_t_v834)) : _g4_s222,
    _g4_s224 = (88u + sizeof(_g4_t_v835)) > _g4_s223 ? (88u + sizeof(_g4_t_v835)) : _g4_s223,
    _g4_s225 = (88u + sizeof(_g4_t_v836)) > _g4_s224 ? (88u + sizeof(_g4_t_v836)) : _g4_s224,
    _g4_s226 = (88u + sizeof(_g4_t_v837)) > _g4_s225 ? (88u + sizeof(_g4_t_v837)) : _g4_s225,
    _g4_s227 = (88u + sizeof(_g4_t_v838)) > _g4_s226 ? (88u + sizeof(_g4_t_v838)) : _g4_s226,
    _g4_s228 = (88u + sizeof(_g4_t_v839)) > _g4_s227 ? (88u + sizeof(_g4_t_v839)) : _g4_s227,
    _g4_s229 = (88u + sizeof(_g4_t_v840)) > _g4_s228 ? (88u + sizeof(_g4_t_v840)) : _g4_s228,
    _g4_s230 = (88u + sizeof(_g4_t_v841)) > _g4_s229 ? (88u + sizeof(_g4_t_v841)) : _g4_s229,
    _g4_s231 = (88u + sizeof(_g4_t_v842)) > _g4_s230 ? (88u + sizeof(_g4_t_v842)) : _g4_s230,
    _g4_s232 = (88u + sizeof(_g4_t_v843)) > _g4_s231 ? (88u + sizeof(_g4_t_v843)) : _g4_s231,
    _g4_s233 = (88u + sizeof(_g4_t_v844)) > _g4_s232 ? (88u + sizeof(_g4_t_v844)) : _g4_s232,
    _g4_s234 = (88u + sizeof(_g4_t_v845)) > _g4_s233 ? (88u + sizeof(_g4_t_v845)) : _g4_s233,
    _g4_s235 = (88u + sizeof(_g4_t_v846)) > _g4_s234 ? (88u + sizeof(_g4_t_v846)) : _g4_s234,
    _g4_s236 = (88u + sizeof(_g4_t_v847)) > _g4_s235 ? (88u + sizeof(_g4_t_v847)) : _g4_s235,
    _g4_s237 = (88u + sizeof(_g4_t_v848)) > _g4_s236 ? (88u + sizeof(_g4_t_v848)) : _g4_s236,
    _g4_s238 = (88u + sizeof(_g4_t_v849)) > _g4_s237 ? (88u + sizeof(_g4_t_v849)) : _g4_s237,
    _g4_s239 = (88u + sizeof(_g4_t_v850)) > _g4_s238 ? (88u + sizeof(_g4_t_v850)) : _g4_s238,
    _g4_s240 = (88u + sizeof(_g4_t_v851)) > _g4_s239 ? (88u + sizeof(_g4_t_v851)) : _g4_s239,
    _g4_s241 = (88u + sizeof(_g4_t_v852)) > _g4_s240 ? (88u + sizeof(_g4_t_v852)) : _g4_s240,
    _g4_s242 = (88u + sizeof(_g4_t_v853)) > _g4_s241 ? (88u + sizeof(_g4_t_v853)) : _g4_s241,
    _g4_s243 = (88u + sizeof(_g4_t_v854)) > _g4_s242 ? (88u + sizeof(_g4_t_v854)) : _g4_s242,
    _g4_s244 = (88u + sizeof(_g4_t_v855)) > _g4_s243 ? (88u + sizeof(_g4_t_v855)) : _g4_s243,
    _g4_s245 = (88u + sizeof(_g4_t_v856)) > _g4_s244 ? (88u + sizeof(_g4_t_v856)) : _g4_s244,
    _g4_s246 = (88u + sizeof(_g4_t_v857)) > _g4_s245 ? (88u + sizeof(_g4_t_v857)) : _g4_s245,
    _g4_s247 = (92u + sizeof(_g4_t_v858)) > _g4_s246 ? (92u + sizeof(_g4_t_v858)) : _g4_s246,
    _g4_s248 = (92u + sizeof(_g4_t_v859)) > _g4_s247 ? (92u + sizeof(_g4_t_v859)) : _g4_s247,
    _g4_s249 = (92u + sizeof(_g4_t_v860)) > _g4_s248 ? (92u + sizeof(_g4_t_v860)) : _g4_s248,
    _g4_s250 = (92u + sizeof(_g4_t_v861)) > _g4_s249 ? (92u + sizeof(_g4_t_v861)) : _g4_s249,
    _g4_s251 = (92u + sizeof(_g4_t_v862)) > _g4_s250 ? (92u + sizeof(_g4_t_v862)) : _g4_s250,
    _g4_s252 = (92u + sizeof(_g4_t_v863)) > _g4_s251 ? (92u + sizeof(_g4_t_v863)) : _g4_s251,
    _g4_s253 = (92u + sizeof(_g4_t_v864)) > _g4_s252 ? (92u + sizeof(_g4_t_v864)) : _g4_s252,
    _g4_s254 = (92u + sizeof(_g4_t_v865)) > _g4_s253 ? (92u + sizeof(_g4_t_v865)) : _g4_s253,
    _g4_s255 = (92u + sizeof(_g4_t_v866)) > _g4_s254 ? (92u + sizeof(_g4_t_v866)) : _g4_s254,
    _g4_s256 = (92u + sizeof(_g4_t_v867)) > _g4_s255 ? (92u + sizeof(_g4_t_v867)) : _g4_s255,
    _g4_s257 = (92u + sizeof(_g4_t_v868)) > _g4_s256 ? (92u + sizeof(_g4_t_v868)) : _g4_s256,
    _g4_s258 = (92u + sizeof(_g4_t_v869)) > _g4_s257 ? (92u + sizeof(_g4_t_v869)) : _g4_s257,
    _g4_s259 = (92u + sizeof(_g4_t_v870)) > _g4_s258 ? (92u + sizeof(_g4_t_v870)) : _g4_s258,
    _g4_s260 = (92u + sizeof(_g4_t_v871)) > _g4_s259 ? (92u + sizeof(_g4_t_v871)) : _g4_s259,
    _g4_s261 = (92u + sizeof(_g4_t_v872)) > _g4_s260 ? (92u + sizeof(_g4_t_v872)) : _g4_s260,
    _g4_s262 = (92u + sizeof(_g4_t_v873)) > _g4_s261 ? (92u + sizeof(_g4_t_v873)) : _g4_s261,
    _g4_s263 = (92u + sizeof(_g4_t_v874)) > _g4_s262 ? (92u + sizeof(_g4_t_v874)) : _g4_s262,
    _g4_s264 = (92u + sizeof(_g4_t_v875)) > _g4_s263 ? (92u + sizeof(_g4_t_v875)) : _g4_s263,
    _g4_s265 = (92u + sizeof(_g4_t_v876)) > _g4_s264 ? (92u + sizeof(_g4_t_v876)) : _g4_s264,
    _g4_s266 = (96u + sizeof(_g4_t_v877)) > _g4_s265 ? (96u + sizeof(_g4_t_v877)) : _g4_s265,
    _g4_s267 = (96u + sizeof(_g4_t_v878)) > _g4_s266 ? (96u + sizeof(_g4_t_v878)) : _g4_s266,
    _g4_s268 = (96u + sizeof(_g4_t_v879)) > _g4_s267 ? (96u + sizeof(_g4_t_v879)) : _g4_s267,
    _g4_s269 = (96u + sizeof(_g4_t_v880)) > _g4_s268 ? (96u + sizeof(_g4_t_v880)) : _g4_s268,
    _g4_s270 = (96u + sizeof(_g4_t_v881)) > _g4_s269 ? (96u + sizeof(_g4_t_v881)) : _g4_s269,
    _g4_s271 = (96u + sizeof(_g4_t_v882)) > _g4_s270 ? (96u + sizeof(_g4_t_v882)) : _g4_s270,
    _g4_s272 = (96u + sizeof(_g4_t_v883)) > _g4_s271 ? (96u + sizeof(_g4_t_v883)) : _g4_s271,
    _g4_s273 = (100u + sizeof(_g4_t_v884)) > _g4_s272 ? (100u + sizeof(_g4_t_v884)) : _g4_s272,
    _g4_s274 = (100u + sizeof(_g4_t_v885)) > _g4_s273 ? (100u + sizeof(_g4_t_v885)) : _g4_s273,
    _g4_s275 = (100u + sizeof(_g4_t_v886)) > _g4_s274 ? (100u + sizeof(_g4_t_v886)) : _g4_s274,
    _g4_s276 = (104u + sizeof(_g4_t_v887)) > _g4_s275 ? (104u + sizeof(_g4_t_v887)) : _g4_s275,
    _g4_s277 = (104u + sizeof(_g4_t_v888)) > _g4_s276 ? (104u + sizeof(_g4_t_v888)) : _g4_s276,
    _g4_s278 = (108u + sizeof(_g4_t_v889)) > _g4_s277 ? (108u + sizeof(_g4_t_v889)) : _g4_s277,
    _g4_s279 = (120u + sizeof(_g4_t_v890)) > _g4_s278 ? (120u + sizeof(_g4_t_v890)) : _g4_s278,
    _g4_s280 = (124u + sizeof(_g4_t_Matches)) > _g4_s279 ? (124u + sizeof(_g4_t_Matches)) : _g4_s279,
    _g4_s281 = (128u + sizeof(_g4_t_v892)) > _g4_s280 ? (128u + sizeof(_g4_t_v892)) : _g4_s280,
    _g4_s282 = (132u + sizeof(_g4_t_v893)) > _g4_s281 ? (132u + sizeof(_g4_t_v893)) : _g4_s281,
    _g4_s283 = (136u + sizeof(_g4_t_v894)) > _g4_s282 ? (136u + sizeof(_g4_t_v894)) : _g4_s282,
    _g4_s284 = (140u + sizeof(_g4_t_v895)) > _g4_s283 ? (140u + sizeof(_g4_t_v895)) : _g4_s283,
    _g4_s285 = (144u + sizeof(_g4_t_v896)) > _g4_s284 ? (144u + sizeof(_g4_t_v896)) : _g4_s284,
    _g4_s286 = (148u + sizeof(_g4_t_v897)) > _g4_s285 ? (148u + sizeof(_g4_t_v897)) : _g4_s285,
    _g4_s287 = (152u + sizeof(_g4_t_v898)) > _g4_s286 ? (152u + sizeof(_g4_t_v898)) : _g4_s286,
    _g4_s288 = (156u + sizeof(_g4_t_v899)) > _g4_s287 ? (156u + sizeof(_g4_t_v899)) : _g4_s287,
    _g4_s289 = (160u + sizeof(_g4_t_v900)) > _g4_s288 ? (160u + sizeof(_g4_t_v900)) : _g4_s288,
    _g4_s290 = (164u + sizeof(_g4_t_v901)) > _g4_s289 ? (164u + sizeof(_g4_t_v901)) : _g4_s289,
    _g4_s291 = (168u + sizeof(_g4_t_v902)) > _g4_s290 ? (168u + sizeof(_g4_t_v902)) : _g4_s290,
    _g4_s292 = (172u + sizeof(_g4_t_v903)) > _g4_s291 ? (172u + sizeof(_g4_t_v903)) : _g4_s291,
    _g4_s293 = (176u + sizeof(_g4_t_v904)) > _g4_s292 ? (176u + sizeof(_g4_t_v904)) : _g4_s292,
    _g4_s294 = (180u + sizeof(_g4_t_v905)) > _g4_s293 ? (180u + sizeof(_g4_t_v905)) : _g4_s293,
    _g4_s295 = (184u + sizeof(_g4_t_v906)) > _g4_s294 ? (184u + sizeof(_g4_t_v906)) : _g4_s294,
    _g4_s296 = (188u + sizeof(_g4_t_v907)) > _g4_s295 ? (188u + sizeof(_g4_t_v907)) : _g4_s295,
    _g4_s297 = (192u + sizeof(_g4_t_v908)) > _g4_s296 ? (192u + sizeof(_g4_t_v908)) : _g4_s296,
    _g4_s298 = (196u + sizeof(_g4_t_v909)) > _g4_s297 ? (196u + sizeof(_g4_t_v909)) : _g4_s297,
    _g4_s299 = (200u + sizeof(_g4_t_v910)) > _g4_s298 ? (200u + sizeof(_g4_t_v910)) : _g4_s298,
    _g4_s300 = (204u + sizeof(_g4_t_v911)) > _g4_s299 ? (204u + sizeof(_g4_t_v911)) : _g4_s299,
    _g4_s301 = (208u + sizeof(_g4_t_v912)) > _g4_s300 ? (208u + sizeof(_g4_t_v912)) : _g4_s300,
    _g4_s302 = (212u + sizeof(_g4_t_v913)) > _g4_s301 ? (212u + sizeof(_g4_t_v913)) : _g4_s301,
    _g4_s303 = (216u + sizeof(_g4_t_v914)) > _g4_s302 ? (216u + sizeof(_g4_t_v914)) : _g4_s302,
    _g4_s304 = (220u + sizeof(_g4_t_v915)) > _g4_s303 ? (220u + sizeof(_g4_t_v915)) : _g4_s303,
    _g4_s305 = (224u + sizeof(_g4_t_v916)) > _g4_s304 ? (224u + sizeof(_g4_t_v916)) : _g4_s304,
    _g4_s306 = (228u + sizeof(_g4_t_v917)) > _g4_s305 ? (228u + sizeof(_g4_t_v917)) : _g4_s305,
    _g4_s307 = (232u + sizeof(_g4_t_v918)) > _g4_s306 ? (232u + sizeof(_g4_t_v918)) : _g4_s306,
    _g4_s308 = (236u + sizeof(_g4_t_v919)) > _g4_s307 ? (236u + sizeof(_g4_t_v919)) : _g4_s307,
    _g4_s309 = (240u + sizeof(_g4_t_v920)) > _g4_s308 ? (240u + sizeof(_g4_t_v920)) : _g4_s308,
    _g4_s310 = (244u + sizeof(_g4_t_v921)) > _g4_s309 ? (244u + sizeof(_g4_t_v921)) : _g4_s309,
    _g4_s311 = (248u + sizeof(_g4_t_v922)) > _g4_s310 ? (248u + sizeof(_g4_t_v922)) : _g4_s310,
    _g4_s312 = (252u + sizeof(_g4_t_v923)) > _g4_s311 ? (252u + sizeof(_g4_t_v923)) : _g4_s311,
    _g4_s313 = (256u + sizeof(_g4_t_v924)) > _g4_s312 ? (256u + sizeof(_g4_t_v924)) : _g4_s312,
    _g4_s314 = (260u + sizeof(_g4_t_v925)) > _g4_s313 ? (260u + sizeof(_g4_t_v925)) : _g4_s313,
    _g4_s315 = (264u + sizeof(_g4_t_v926)) > _g4_s314 ? (264u + sizeof(_g4_t_v926)) : _g4_s314,
    _g4_s316 = (268u + sizeof(_g4_t_v927)) > _g4_s315 ? (268u + sizeof(_g4_t_v927)) : _g4_s315,
    _g4_s317 = (272u + sizeof(_g4_t_v928)) > _g4_s316 ? (272u + sizeof(_g4_t_v928)) : _g4_s316,
    _g4_s318 = (276u + sizeof(_g4_t_v929)) > _g4_s317 ? (276u + sizeof(_g4_t_v929)) : _g4_s317,
    _g4_s319 = (280u + sizeof(_g4_t_v930)) > _g4_s318 ? (280u + sizeof(_g4_t_v930)) : _g4_s318,
    _g4_s320 = (284u + sizeof(_g4_t_v931)) > _g4_s319 ? (284u + sizeof(_g4_t_v931)) : _g4_s319,
    _g4_s321 = (288u + sizeof(_g4_t_v932)) > _g4_s320 ? (288u + sizeof(_g4_t_v932)) : _g4_s320,
    _g4_s322 = (292u + sizeof(_g4_t_v933)) > _g4_s321 ? (292u + sizeof(_g4_t_v933)) : _g4_s321,
    _g4_s323 = (296u + sizeof(_g4_t_v934)) > _g4_s322 ? (296u + sizeof(_g4_t_v934)) : _g4_s322,
    _g4_s324 = (300u + sizeof(_g4_t_v935)) > _g4_s323 ? (300u + sizeof(_g4_t_v935)) : _g4_s323,
    _g4_s325 = (304u + sizeof(_g4_t_v936)) > _g4_s324 ? (304u + sizeof(_g4_t_v936)) : _g4_s324,
    _g4_s326 = (308u + sizeof(_g4_t_v937)) > _g4_s325 ? (308u + sizeof(_g4_t_v937)) : _g4_s325,
    _g4_s327 = (312u + sizeof(_g4_t_v938)) > _g4_s326 ? (312u + sizeof(_g4_t_v938)) : _g4_s326,
    _g4_s328 = (316u + sizeof(_g4_t_v939)) > _g4_s327 ? (316u + sizeof(_g4_t_v939)) : _g4_s327,
    _g4_s329 = (320u + sizeof(_g4_t_v940)) > _g4_s328 ? (320u + sizeof(_g4_t_v940)) : _g4_s328,
    _g4_s330 = (324u + sizeof(_g4_t_v941)) > _g4_s329 ? (324u + sizeof(_g4_t_v941)) : _g4_s329,
    _g4_s331 = (328u + sizeof(_g4_t_v942)) > _g4_s330 ? (328u + sizeof(_g4_t_v942)) : _g4_s330,
    _g4_s332 = (332u + sizeof(_g4_t_v943)) > _g4_s331 ? (332u + sizeof(_g4_t_v943)) : _g4_s331,
    _g4_s333 = (336u + sizeof(_g4_t_v944)) > _g4_s332 ? (336u + sizeof(_g4_t_v944)) : _g4_s332,
    _g4_s334 = (340u + sizeof(_g4_t_v945)) > _g4_s333 ? (340u + sizeof(_g4_t_v945)) : _g4_s333,
    _g4_s335 = (344u + sizeof(_g4_t_v946)) > _g4_s334 ? (344u + sizeof(_g4_t_v946)) : _g4_s334,
    _g4_s336 = (348u + sizeof(_g4_t_v947)) > _g4_s335 ? (348u + sizeof(_g4_t_v947)) : _g4_s335,
    _g4_s337 = (352u + sizeof(_g4_t_v948)) > _g4_s336 ? (352u + sizeof(_g4_t_v948)) : _g4_s336,
    _g4_s338 = (356u + sizeof(_g4_t_v949)) > _g4_s337 ? (356u + sizeof(_g4_t_v949)) : _g4_s337,
    _g4_s339 = (360u + sizeof(_g4_t_v950)) > _g4_s338 ? (360u + sizeof(_g4_t_v950)) : _g4_s338,
    _g4_s340 = (364u + sizeof(_g4_t_v951)) > _g4_s339 ? (364u + sizeof(_g4_t_v951)) : _g4_s339,
    _g4_s341 = (368u + sizeof(_g4_t_v952)) > _g4_s340 ? (368u + sizeof(_g4_t_v952)) : _g4_s340,
    _g4_s342 = (372u + sizeof(_g4_t_v953)) > _g4_s341 ? (372u + sizeof(_g4_t_v953)) : _g4_s341,
    _g4_s343 = (376u + sizeof(_g4_t_v954)) > _g4_s342 ? (376u + sizeof(_g4_t_v954)) : _g4_s342,
    _g4_s344 = (380u + sizeof(_g4_t_v955)) > _g4_s343 ? (380u + sizeof(_g4_t_v955)) : _g4_s343,
    _g4_s345 = (384u + sizeof(_g4_t_v956)) > _g4_s344 ? (384u + sizeof(_g4_t_v956)) : _g4_s344,
    _g4_s346 = (388u + sizeof(_g4_t_v957)) > _g4_s345 ? (388u + sizeof(_g4_t_v957)) : _g4_s345,
    _g4_s347 = (392u + sizeof(_g4_t_v958)) > _g4_s346 ? (392u + sizeof(_g4_t_v958)) : _g4_s346,
    _g4_s348 = (396u + sizeof(_g4_t_v959)) > _g4_s347 ? (396u + sizeof(_g4_t_v959)) : _g4_s347,
    _g4_s349 = (400u + sizeof(_g4_t_v960)) > _g4_s348 ? (400u + sizeof(_g4_t_v960)) : _g4_s348,
    _g4_s350 = (404u + sizeof(_g4_t_v961)) > _g4_s349 ? (404u + sizeof(_g4_t_v961)) : _g4_s349,
    _g4_s351 = (408u + sizeof(_g4_t_v962)) > _g4_s350 ? (408u + sizeof(_g4_t_v962)) : _g4_s350,
    _g4_s352 = (412u + sizeof(_g4_t_v963)) > _g4_s351 ? (412u + sizeof(_g4_t_v963)) : _g4_s351,
    _g4_s353 = (416u + sizeof(_g4_t_v964)) > _g4_s352 ? (416u + sizeof(_g4_t_v964)) : _g4_s352,
    _g4_s354 = (420u + sizeof(_g4_t_v965)) > _g4_s353 ? (420u + sizeof(_g4_t_v965)) : _g4_s353,
    _g4_s355 = (424u + sizeof(_g4_t_v966)) > _g4_s354 ? (424u + sizeof(_g4_t_v966)) : _g4_s354,
    _g4_s356 = (428u + sizeof(_g4_t_v967)) > _g4_s355 ? (428u + sizeof(_g4_t_v967)) : _g4_s355,
    _g4_s357 = (432u + sizeof(_g4_t_v968)) > _g4_s356 ? (432u + sizeof(_g4_t_v968)) : _g4_s356,
    _g4_s358 = (436u + sizeof(_g4_t_v969)) > _g4_s357 ? (436u + sizeof(_g4_t_v969)) : _g4_s357,
    _g4_s359 = (440u + sizeof(_g4_t_v970)) > _g4_s358 ? (440u + sizeof(_g4_t_v970)) : _g4_s358,
    _g4_s360 = (444u + sizeof(_g4_t_v971)) > _g4_s359 ? (444u + sizeof(_g4_t_v971)) : _g4_s359,
    _g4_s361 = (448u + sizeof(_g4_t_v972)) > _g4_s360 ? (448u + sizeof(_g4_t_v972)) : _g4_s360,
    _g4_s362 = (452u + sizeof(_g4_t_v973)) > _g4_s361 ? (452u + sizeof(_g4_t_v973)) : _g4_s361,
    _g4_s363 = (456u + sizeof(_g4_t_v974)) > _g4_s362 ? (456u + sizeof(_g4_t_v974)) : _g4_s362,
    _g4_s364 = (460u + sizeof(_g4_t_v975)) > _g4_s363 ? (460u + sizeof(_g4_t_v975)) : _g4_s363,
    _g4_s365 = (464u + sizeof(_g4_t_v976)) > _g4_s364 ? (464u + sizeof(_g4_t_v976)) : _g4_s364,
    _g4_s366 = (468u + sizeof(_g4_t_v977)) > _g4_s365 ? (468u + sizeof(_g4_t_v977)) : _g4_s365,
    _g4_s367 = (472u + sizeof(_g4_t_v978)) > _g4_s366 ? (472u + sizeof(_g4_t_v978)) : _g4_s366,
    _g4_s368 = (476u + sizeof(_g4_t_v979)) > _g4_s367 ? (476u + sizeof(_g4_t_v979)) : _g4_s367,
    _g4_s369 = (480u + sizeof(_g4_t_v980)) > _g4_s368 ? (480u + sizeof(_g4_t_v980)) : _g4_s368,
    _g4_s370 = (484u + sizeof(_g4_t_v981)) > _g4_s369 ? (484u + sizeof(_g4_t_v981)) : _g4_s369,
    _g4_s371 = (488u + sizeof(_g4_t_v982)) > _g4_s370 ? (488u + sizeof(_g4_t_v982)) : _g4_s370,
    _g4_s372 = (492u + sizeof(_g4_t_v983)) > _g4_s371 ? (492u + sizeof(_g4_t_v983)) : _g4_s371,
    _g4_s373 = (496u + sizeof(_g4_t_v984)) > _g4_s372 ? (496u + sizeof(_g4_t_v984)) : _g4_s372,
    _g4_s374 = (500u + sizeof(_g4_t_v985)) > _g4_s373 ? (500u + sizeof(_g4_t_v985)) : _g4_s373,
    _g4_s375 = (504u + sizeof(_g4_t_v986)) > _g4_s374 ? (504u + sizeof(_g4_t_v986)) : _g4_s374,
    _g4_s376 = (508u + sizeof(_g4_t_v987)) > _g4_s375 ? (508u + sizeof(_g4_t_v987)) : _g4_s375,
    _g4_s377 = (512u + sizeof(_g4_t_v988)) > _g4_s376 ? (512u + sizeof(_g4_t_v988)) : _g4_s376,
    _g4_s378 = (516u + sizeof(_g4_t_v989)) > _g4_s377 ? (516u + sizeof(_g4_t_v989)) : _g4_s377,
    _g4_s379 = (520u + sizeof(_g4_t_v990)) > _g4_s378 ? (520u + sizeof(_g4_t_v990)) : _g4_s378,
    _g4_s380 = (524u + sizeof(_g4_t_v991)) > _g4_s379 ? (524u + sizeof(_g4_t_v991)) : _g4_s379,
    _g4_s381 = (528u + sizeof(_g4_t_v992)) > _g4_s380 ? (528u + sizeof(_g4_t_v992)) : _g4_s380,
    _g4_s382 = (532u + sizeof(_g4_t_v993)) > _g4_s381 ? (532u + sizeof(_g4_t_v993)) : _g4_s381,
    _g4_s383 = (536u + sizeof(_g4_t_v994)) > _g4_s382 ? (536u + sizeof(_g4_t_v994)) : _g4_s382,
    _g4_s384 = (540u + sizeof(_g4_t_v995)) > _g4_s383 ? (540u + sizeof(_g4_t_v995)) : _g4_s383,
    _g4_s385 = (544u + sizeof(_g4_t_v996)) > _g4_s384 ? (544u + sizeof(_g4_t_v996)) : _g4_s384,
    _g4_s386 = (548u + sizeof(_g4_t_v997)) > _g4_s385 ? (548u + sizeof(_g4_t_v997)) : _g4_s385,
    _g4_s387 = (552u + sizeof(_g4_t_v998)) > _g4_s386 ? (552u + sizeof(_g4_t_v998)) : _g4_s386,
    _g4_s388 = (556u + sizeof(_g4_t_v999)) > _g4_s387 ? (556u + sizeof(_g4_t_v999)) : _g4_s387,
    _g4_s389 = (560u + sizeof(_g4_t_v1000)) > _g4_s388 ? (560u + sizeof(_g4_t_v1000)) : _g4_s388,
    _g4_s390 = (564u + sizeof(_g4_t_v1001)) > _g4_s389 ? (564u + sizeof(_g4_t_v1001)) : _g4_s389,
    _g4_s391 = (568u + sizeof(_g4_t_v1002)) > _g4_s390 ? (568u + sizeof(_g4_t_v1002)) : _g4_s390,
    _g4_s392 = (572u + sizeof(_g4_t_v1003)) > _g4_s391 ? (572u + sizeof(_g4_t_v1003)) : _g4_s391,
    _g4_s393 = (576u + sizeof(_g4_t_v1004)) > _g4_s392 ? (576u + sizeof(_g4_t_v1004)) : _g4_s392,
    _g4_s394 = (580u + sizeof(_g4_t_v1005)) > _g4_s393 ? (580u + sizeof(_g4_t_v1005)) : _g4_s393,
    _g4_s395 = (584u + sizeof(_g4_t_v1006)) > _g4_s394 ? (584u + sizeof(_g4_t_v1006)) : _g4_s394,
    _g4_s396 = (588u + sizeof(_g4_t_v1007)) > _g4_s395 ? (588u + sizeof(_g4_t_v1007)) : _g4_s395,
    _g4_s397 = (592u + sizeof(_g4_t_v1008)) > _g4_s396 ? (592u + sizeof(_g4_t_v1008)) : _g4_s396,
    _g4_s398 = (596u + sizeof(_g4_t_v1009)) > _g4_s397 ? (596u + sizeof(_g4_t_v1009)) : _g4_s397,
    _g4_s399 = (600u + sizeof(_g4_t_v1010)) > _g4_s398 ? (600u + sizeof(_g4_t_v1010)) : _g4_s398,
    _g4_s400 = (604u + sizeof(_g4_t_v1011)) > _g4_s399 ? (604u + sizeof(_g4_t_v1011)) : _g4_s399,
    _g4_s401 = (608u + sizeof(_g4_t_v1012)) > _g4_s400 ? (608u + sizeof(_g4_t_v1012)) : _g4_s400,
    _g4_s402 = (612u + sizeof(_g4_t_v1013)) > _g4_s401 ? (612u + sizeof(_g4_t_v1013)) : _g4_s401,
    _g4_s403 = (616u + sizeof(_g4_t_v1014)) > _g4_s402 ? (616u + sizeof(_g4_t_v1014)) : _g4_s402,
    _g4_s404 = (620u + sizeof(_g4_t_v1015)) > _g4_s403 ? (620u + sizeof(_g4_t_v1015)) : _g4_s403,
    _g4_s405 = (624u + sizeof(_g4_t_v1016)) > _g4_s404 ? (624u + sizeof(_g4_t_v1016)) : _g4_s404,
    _g4_s406 = (628u + sizeof(_g4_t_v1017)) > _g4_s405 ? (628u + sizeof(_g4_t_v1017)) : _g4_s405,
    _g4_s407 = (632u + sizeof(_g4_t_v1018)) > _g4_s406 ? (632u + sizeof(_g4_t_v1018)) : _g4_s406,
    _g4_s408 = (636u + sizeof(_g4_t_v1019)) > _g4_s407 ? (636u + sizeof(_g4_t_v1019)) : _g4_s407,
    _g4_s409 = (640u + sizeof(_g4_t_v1020)) > _g4_s408 ? (640u + sizeof(_g4_t_v1020)) : _g4_s408,
    _g4_s410 = (644u + sizeof(_g4_t_v1021)) > _g4_s409 ? (644u + sizeof(_g4_t_v1021)) : _g4_s409,
    _g4_s411 = (648u + sizeof(_g4_t_v1022)) > _g4_s410 ? (648u + sizeof(_g4_t_v1022)) : _g4_s410,
    _g4_s412 = (652u + sizeof(_g4_t_v1023)) > _g4_s411 ? (652u + sizeof(_g4_t_v1023)) : _g4_s411,
    _g4_s413 = (656u + sizeof(_g4_t_v1024)) > _g4_s412 ? (656u + sizeof(_g4_t_v1024)) : _g4_s412,
    _g4_s414 = (660u + sizeof(_g4_t_v1025)) > _g4_s413 ? (660u + sizeof(_g4_t_v1025)) : _g4_s413,
    _g4_s415 = (664u + sizeof(_g4_t_v1026)) > _g4_s414 ? (664u + sizeof(_g4_t_v1026)) : _g4_s414,
    _g4_s416 = (668u + sizeof(_g4_t_v1027)) > _g4_s415 ? (668u + sizeof(_g4_t_v1027)) : _g4_s415,
    _g4_s417 = (672u + sizeof(_g4_t_v1028)) > _g4_s416 ? (672u + sizeof(_g4_t_v1028)) : _g4_s416,
    _g4_s418 = (676u + sizeof(_g4_t_v1029)) > _g4_s417 ? (676u + sizeof(_g4_t_v1029)) : _g4_s417,
    _g4_s419 = (680u + sizeof(_g4_t_v1030)) > _g4_s418 ? (680u + sizeof(_g4_t_v1030)) : _g4_s418,
    _g4_s420 = (684u + sizeof(_g4_t_v1031)) > _g4_s419 ? (684u + sizeof(_g4_t_v1031)) : _g4_s419,
    _g4_s421 = (688u + sizeof(_g4_t_v1032)) > _g4_s420 ? (688u + sizeof(_g4_t_v1032)) : _g4_s420,
    _g4_s422 = (692u + sizeof(_g4_t_v1033)) > _g4_s421 ? (692u + sizeof(_g4_t_v1033)) : _g4_s421,
    _g4_s423 = (696u + sizeof(_g4_t_v1034)) > _g4_s422 ? (696u + sizeof(_g4_t_v1034)) : _g4_s422,
    _g4_s424 = (700u + sizeof(_g4_t_v1035)) > _g4_s423 ? (700u + sizeof(_g4_t_v1035)) : _g4_s423,
    _g4_s425 = (704u + sizeof(_g4_t_v1036)) > _g4_s424 ? (704u + sizeof(_g4_t_v1036)) : _g4_s424,
    _g4_s426 = (708u + sizeof(_g4_t_v1037)) > _g4_s425 ? (708u + sizeof(_g4_t_v1037)) : _g4_s425,
    _g4_s427 = (712u + sizeof(_g4_t_v1038)) > _g4_s426 ? (712u + sizeof(_g4_t_v1038)) : _g4_s426,
    _g4_s428 = (716u + sizeof(_g4_t_v1039)) > _g4_s427 ? (716u + sizeof(_g4_t_v1039)) : _g4_s427,
    _g4_s429 = (720u + sizeof(_g4_t_v1040)) > _g4_s428 ? (720u + sizeof(_g4_t_v1040)) : _g4_s428,
    _g4_s430 = (724u + sizeof(_g4_t_v1041)) > _g4_s429 ? (724u + sizeof(_g4_t_v1041)) : _g4_s429,
    _g4_s431 = (728u + sizeof(_g4_t_v1042)) > _g4_s430 ? (728u + sizeof(_g4_t_v1042)) : _g4_s430,
    _g4_s432 = (732u + sizeof(_g4_t_v1043)) > _g4_s431 ? (732u + sizeof(_g4_t_v1043)) : _g4_s431,
    _g4_s433 = (736u + sizeof(_g4_t_v1044)) > _g4_s432 ? (736u + sizeof(_g4_t_v1044)) : _g4_s432,
    _g4_s434 = (740u + sizeof(_g4_t_v1045)) > _g4_s433 ? (740u + sizeof(_g4_t_v1045)) : _g4_s433,
    _g4_s435 = (744u + sizeof(_g4_t_v1046)) > _g4_s434 ? (744u + sizeof(_g4_t_v1046)) : _g4_s434,
    _g4_s436 = (748u + sizeof(_g4_t_v1047)) > _g4_s435 ? (748u + sizeof(_g4_t_v1047)) : _g4_s435,
    _g4_s437 = (752u + sizeof(_g4_t_v1048)) > _g4_s436 ? (752u + sizeof(_g4_t_v1048)) : _g4_s436,
    _g4_s438 = (756u + sizeof(_g4_t_v1049)) > _g4_s437 ? (756u + sizeof(_g4_t_v1049)) : _g4_s437,
    _g4_s439 = (760u + sizeof(_g4_t_v1050)) > _g4_s438 ? (760u + sizeof(_g4_t_v1050)) : _g4_s438,
    _g4_s440 = (764u + sizeof(_g4_t_v1051)) > _g4_s439 ? (764u + sizeof(_g4_t_v1051)) : _g4_s439,
    _g4_s441 = (768u + sizeof(_g4_t_v1052)) > _g4_s440 ? (768u + sizeof(_g4_t_v1052)) : _g4_s440,
    _g4_s442 = (772u + sizeof(_g4_t_v1053)) > _g4_s441 ? (772u + sizeof(_g4_t_v1053)) : _g4_s441,
    _g4_s443 = (776u + sizeof(_g4_t_v1054)) > _g4_s442 ? (776u + sizeof(_g4_t_v1054)) : _g4_s442,
    _g4_s444 = (780u + sizeof(_g4_t_v1055)) > _g4_s443 ? (780u + sizeof(_g4_t_v1055)) : _g4_s443,
    _g4_s445 = (784u + sizeof(_g4_t_v1056)) > _g4_s444 ? (784u + sizeof(_g4_t_v1056)) : _g4_s444,
    _g4_s446 = (788u + sizeof(_g4_t_v1057)) > _g4_s445 ? (788u + sizeof(_g4_t_v1057)) : _g4_s445,
    _g4_s447 = (792u + sizeof(_g4_t_v1058)) > _g4_s446 ? (792u + sizeof(_g4_t_v1058)) : _g4_s446,
    _g4_s448 = (796u + sizeof(_g4_t_v1059)) > _g4_s447 ? (796u + sizeof(_g4_t_v1059)) : _g4_s447,
    _g4_s449 = (800u + sizeof(_g4_t_v1060)) > _g4_s448 ? (800u + sizeof(_g4_t_v1060)) : _g4_s448,
    _g4_s450 = (804u + sizeof(_g4_t_v1061)) > _g4_s449 ? (804u + sizeof(_g4_t_v1061)) : _g4_s449,
    _g4_s451 = (808u + sizeof(_g4_t_v1062)) > _g4_s450 ? (808u + sizeof(_g4_t_v1062)) : _g4_s450,
    _g4_s452 = (812u + sizeof(_g4_t_v1063)) > _g4_s451 ? (812u + sizeof(_g4_t_v1063)) : _g4_s451,
    _g4_s453 = (816u + sizeof(_g4_t_v1064)) > _g4_s452 ? (816u + sizeof(_g4_t_v1064)) : _g4_s452,
    _g4_s454 = (820u + sizeof(_g4_t_v1065)) > _g4_s453 ? (820u + sizeof(_g4_t_v1065)) : _g4_s453,
    _g4_s455 = (824u + sizeof(_g4_t_v1066)) > _g4_s454 ? (824u + sizeof(_g4_t_v1066)) : _g4_s454,
    _g4_s456 = (828u + sizeof(_g4_t_v1067)) > _g4_s455 ? (828u + sizeof(_g4_t_v1067)) : _g4_s455,
    _g4_s457 = (832u + sizeof(_g4_t_v1068)) > _g4_s456 ? (832u + sizeof(_g4_t_v1068)) : _g4_s456,
    _g4_s458 = (836u + sizeof(_g4_t_v1069)) > _g4_s457 ? (836u + sizeof(_g4_t_v1069)) : _g4_s457,
    _g4_s459 = (840u + sizeof(_g4_t_v1070)) > _g4_s458 ? (840u + sizeof(_g4_t_v1070)) : _g4_s458,
    _g4_s460 = (844u + sizeof(_g4_t_v1071)) > _g4_s459 ? (844u + sizeof(_g4_t_v1071)) : _g4_s459,
    _g4_s461 = (848u + sizeof(_g4_t_v1072)) > _g4_s460 ? (848u + sizeof(_g4_t_v1072)) : _g4_s460,
    _g4_s462 = (852u + sizeof(_g4_t_v1073)) > _g4_s461 ? (852u + sizeof(_g4_t_v1073)) : _g4_s461,
    _g4_s463 = (856u + sizeof(_g4_t_v1074)) > _g4_s462 ? (856u + sizeof(_g4_t_v1074)) : _g4_s462,
    _g4_s464 = (860u + sizeof(_g4_t_v1075)) > _g4_s463 ? (860u + sizeof(_g4_t_v1075)) : _g4_s463,
    _g4_s465 = (864u + sizeof(_g4_t_v1076)) > _g4_s464 ? (864u + sizeof(_g4_t_v1076)) : _g4_s464,
    _g4_s466 = (868u + sizeof(_g4_t_v1077)) > _g4_s465 ? (868u + sizeof(_g4_t_v1077)) : _g4_s465,
    _g4_s467 = (872u + sizeof(_g4_t_v1078)) > _g4_s466 ? (872u + sizeof(_g4_t_v1078)) : _g4_s466,
    _g4_s468 = (876u + sizeof(_g4_t_v1079)) > _g4_s467 ? (876u + sizeof(_g4_t_v1079)) : _g4_s467,
    _g4_s469 = (880u + sizeof(_g4_t_v1080)) > _g4_s468 ? (880u + sizeof(_g4_t_v1080)) : _g4_s468,
    _g4_s470 = (884u + sizeof(_g4_t_v1081)) > _g4_s469 ? (884u + sizeof(_g4_t_v1081)) : _g4_s469,
    _g4_s471 = (888u + sizeof(_g4_t_v1082)) > _g4_s470 ? (888u + sizeof(_g4_t_v1082)) : _g4_s470,
    _g4_s472 = (892u + sizeof(_g4_t_v1083)) > _g4_s471 ? (892u + sizeof(_g4_t_v1083)) : _g4_s471,
    _g4_s473 = (896u + sizeof(_g4_t_v1084)) > _g4_s472 ? (896u + sizeof(_g4_t_v1084)) : _g4_s472,
    _g4_s474 = (900u + sizeof(_g4_t_v1085)) > _g4_s473 ? (900u + sizeof(_g4_t_v1085)) : _g4_s473,
    _g4_s475 = (904u + sizeof(_g4_t_v1086)) > _g4_s474 ? (904u + sizeof(_g4_t_v1086)) : _g4_s474,
    _g4_s476 = (908u + sizeof(_g4_t_v1087)) > _g4_s475 ? (908u + sizeof(_g4_t_v1087)) : _g4_s475,
    _g4_s477 = (912u + sizeof(_g4_t_v1088)) > _g4_s476 ? (912u + sizeof(_g4_t_v1088)) : _g4_s476,
    _g4_s478 = (916u + sizeof(_g4_t_v1089)) > _g4_s477 ? (916u + sizeof(_g4_t_v1089)) : _g4_s477,
    _g4_s479 = (920u + sizeof(_g4_t_v1090)) > _g4_s478 ? (920u + sizeof(_g4_t_v1090)) : _g4_s478,
    _g4_s480 = (924u + sizeof(_g4_t_v1091)) > _g4_s479 ? (924u + sizeof(_g4_t_v1091)) : _g4_s479,
    _g4_s481 = (928u + sizeof(_g4_t_v1092)) > _g4_s480 ? (928u + sizeof(_g4_t_v1092)) : _g4_s480,
    _g4_s482 = (932u + sizeof(_g4_t_v1093)) > _g4_s481 ? (932u + sizeof(_g4_t_v1093)) : _g4_s481,
    _g4_s483 = (936u + sizeof(_g4_t_v1094)) > _g4_s482 ? (936u + sizeof(_g4_t_v1094)) : _g4_s482,
    _g4_s484 = (940u + sizeof(_g4_t_v1095)) > _g4_s483 ? (940u + sizeof(_g4_t_v1095)) : _g4_s483,
    _g4_s485 = (944u + sizeof(_g4_t_v1096)) > _g4_s484 ? (944u + sizeof(_g4_t_v1096)) : _g4_s484,
    _g4_s486 = (948u + sizeof(_g4_t_v1097)) > _g4_s485 ? (948u + sizeof(_g4_t_v1097)) : _g4_s485,
    _g4_s487 = (952u + sizeof(_g4_t_v1098)) > _g4_s486 ? (952u + sizeof(_g4_t_v1098)) : _g4_s486,
    _g4_s488 = (956u + sizeof(_g4_t_v1099)) > _g4_s487 ? (956u + sizeof(_g4_t_v1099)) : _g4_s487,
    _g4_s489 = (960u + sizeof(_g4_t_v1100)) > _g4_s488 ? (960u + sizeof(_g4_t_v1100)) : _g4_s488,
    _g4_s490 = (964u + sizeof(_g4_t_v1101)) > _g4_s489 ? (964u + sizeof(_g4_t_v1101)) : _g4_s489,
    _g4_s491 = (968u + sizeof(_g4_t_v1102)) > _g4_s490 ? (968u + sizeof(_g4_t_v1102)) : _g4_s490,
    _g4_s492 = (972u + sizeof(_g4_t_v1103)) > _g4_s491 ? (972u + sizeof(_g4_t_v1103)) : _g4_s491,
    _g4_s493 = (976u + sizeof(_g4_t_v1104)) > _g4_s492 ? (976u + sizeof(_g4_t_v1104)) : _g4_s492,
    _g4_s494 = (980u + sizeof(_g4_t_v1105)) > _g4_s493 ? (980u + sizeof(_g4_t_v1105)) : _g4_s493,
    _g4_s495 = (984u + sizeof(_g4_t_v1106)) > _g4_s494 ? (984u + sizeof(_g4_t_v1106)) : _g4_s494,
    _g4_s496 = (988u + sizeof(_g4_t_v1107)) > _g4_s495 ? (988u + sizeof(_g4_t_v1107)) : _g4_s495,
    _g4_s497 = (992u + sizeof(_g4_t_v1108)) > _g4_s496 ? (992u + sizeof(_g4_t_v1108)) : _g4_s496,
    _g4_s498 = (996u + sizeof(_g4_t_v1109)) > _g4_s497 ? (996u + sizeof(_g4_t_v1109)) : _g4_s497,
    _g4_s499 = (1000u + sizeof(_g4_t_v1110)) > _g4_s498 ? (1000u + sizeof(_g4_t_v1110)) : _g4_s498,
    _g4_s500 = (1004u + sizeof(_g4_t_v1111)) > _g4_s499 ? (1004u + sizeof(_g4_t_v1111)) : _g4_s499
  };
  alignas(16) uint8_t _g4_sf[_g4_s500];
  _g4_t_v612 &v612 = *reinterpret_cast<_g4_t_v612 *>(_g4_sf + 0u);
  _g4_t_v613 &v613 = *reinterpret_cast<_g4_t_v613 *>(_g4_sf + 72u);
  _g4_t_v614 &v614 = *reinterpret_cast<_g4_t_v614 *>(_g4_sf + 72u);
  _g4_t_v615 &v615 = *reinterpret_cast<_g4_t_v615 *>(_g4_sf + 72u);
  _g4_t_v616 &v616 = *reinterpret_cast<_g4_t_v616 *>(_g4_sf + 72u);
  _g4_t_v617 &v617 = *reinterpret_cast<_g4_t_v617 *>(_g4_sf + 72u);
  _g4_t_v618 &v618 = *reinterpret_cast<_g4_t_v618 *>(_g4_sf + 72u);
  _g4_t_v619 &v619 = *reinterpret_cast<_g4_t_v619 *>(_g4_sf + 72u);
  _g4_t_v620 &v620 = *reinterpret_cast<_g4_t_v620 *>(_g4_sf + 72u);
  _g4_t_v621 &v621 = *reinterpret_cast<_g4_t_v621 *>(_g4_sf + 72u);
  _g4_t_v622 &v622 = *reinterpret_cast<_g4_t_v622 *>(_g4_sf + 72u);
  _g4_t_v623 &v623 = *reinterpret_cast<_g4_t_v623 *>(_g4_sf + 72u);
  _g4_t_v624 &v624 = *reinterpret_cast<_g4_t_v624 *>(_g4_sf + 72u);
  _g4_t_v625 &v625 = *reinterpret_cast<_g4_t_v625 *>(_g4_sf + 72u);
  _g4_t_v626 &v626 = *reinterpret_cast<_g4_t_v626 *>(_g4_sf + 72u);
  _g4_t_v627 &v627 = *reinterpret_cast<_g4_t_v627 *>(_g4_sf + 72u);
  _g4_t_v628 &v628 = *reinterpret_cast<_g4_t_v628 *>(_g4_sf + 72u);
  _g4_t_v629 &v629 = *reinterpret_cast<_g4_t_v629 *>(_g4_sf + 72u);
  _g4_t_v630 &v630 = *reinterpret_cast<_g4_t_v630 *>(_g4_sf + 72u);
  _g4_t_v631 &v631 = *reinterpret_cast<_g4_t_v631 *>(_g4_sf + 72u);
  _g4_t_v632 &v632 = *reinterpret_cast<_g4_t_v632 *>(_g4_sf + 72u);
  _g4_t_v633 &v633 = *reinterpret_cast<_g4_t_v633 *>(_g4_sf + 72u);
  _g4_t_v634 &v634 = *reinterpret_cast<_g4_t_v634 *>(_g4_sf + 72u);
  _g4_t_v635 &v635 = *reinterpret_cast<_g4_t_v635 *>(_g4_sf + 72u);
  _g4_t_v636 &v636 = *reinterpret_cast<_g4_t_v636 *>(_g4_sf + 72u);
  _g4_t_v637 &v637 = *reinterpret_cast<_g4_t_v637 *>(_g4_sf + 72u);
  _g4_t_v638 &v638 = *reinterpret_cast<_g4_t_v638 *>(_g4_sf + 72u);
  _g4_t_v639 &v639 = *reinterpret_cast<_g4_t_v639 *>(_g4_sf + 72u);
  _g4_t_v640 &v640 = *reinterpret_cast<_g4_t_v640 *>(_g4_sf + 72u);
  _g4_t_v641 &v641 = *reinterpret_cast<_g4_t_v641 *>(_g4_sf + 72u);
  _g4_t_v642 &v642 = *reinterpret_cast<_g4_t_v642 *>(_g4_sf + 72u);
  _g4_t_v643 &v643 = *reinterpret_cast<_g4_t_v643 *>(_g4_sf + 72u);
  _g4_t_v644 &v644 = *reinterpret_cast<_g4_t_v644 *>(_g4_sf + 72u);
  _g4_t_v645 &v645 = *reinterpret_cast<_g4_t_v645 *>(_g4_sf + 72u);
  _g4_t_v646 &v646 = *reinterpret_cast<_g4_t_v646 *>(_g4_sf + 72u);
  _g4_t_v647 &v647 = *reinterpret_cast<_g4_t_v647 *>(_g4_sf + 72u);
  _g4_t_v648 &v648 = *reinterpret_cast<_g4_t_v648 *>(_g4_sf + 72u);
  _g4_t_v649 &v649 = *reinterpret_cast<_g4_t_v649 *>(_g4_sf + 72u);
  _g4_t_v650 &v650 = *reinterpret_cast<_g4_t_v650 *>(_g4_sf + 72u);
  _g4_t_v651 &v651 = *reinterpret_cast<_g4_t_v651 *>(_g4_sf + 72u);
  _g4_t_v652 &v652 = *reinterpret_cast<_g4_t_v652 *>(_g4_sf + 72u);
  _g4_t_v653 &v653 = *reinterpret_cast<_g4_t_v653 *>(_g4_sf + 72u);
  _g4_t_v654 &v654 = *reinterpret_cast<_g4_t_v654 *>(_g4_sf + 72u);
  _g4_t_v655 &v655 = *reinterpret_cast<_g4_t_v655 *>(_g4_sf + 72u);
  _g4_t_v656 &v656 = *reinterpret_cast<_g4_t_v656 *>(_g4_sf + 72u);
  _g4_t_v657 &v657 = *reinterpret_cast<_g4_t_v657 *>(_g4_sf + 72u);
  _g4_t_v658 &v658 = *reinterpret_cast<_g4_t_v658 *>(_g4_sf + 72u);
  _g4_t_v659 &v659 = *reinterpret_cast<_g4_t_v659 *>(_g4_sf + 72u);
  _g4_t_v660 &v660 = *reinterpret_cast<_g4_t_v660 *>(_g4_sf + 72u);
  _g4_t_v661 &v661 = *reinterpret_cast<_g4_t_v661 *>(_g4_sf + 72u);
  _g4_t_v662 &v662 = *reinterpret_cast<_g4_t_v662 *>(_g4_sf + 72u);
  _g4_t_v663 &v663 = *reinterpret_cast<_g4_t_v663 *>(_g4_sf + 76u);
  _g4_t_v664 &v664 = *reinterpret_cast<_g4_t_v664 *>(_g4_sf + 76u);
  _g4_t_v665 &v665 = *reinterpret_cast<_g4_t_v665 *>(_g4_sf + 76u);
  _g4_t_v666 &v666 = *reinterpret_cast<_g4_t_v666 *>(_g4_sf + 76u);
  _g4_t_v667 &v667 = *reinterpret_cast<_g4_t_v667 *>(_g4_sf + 76u);
  _g4_t_v668 &v668 = *reinterpret_cast<_g4_t_v668 *>(_g4_sf + 76u);
  _g4_t_v669 &v669 = *reinterpret_cast<_g4_t_v669 *>(_g4_sf + 76u);
  _g4_t_v670 &v670 = *reinterpret_cast<_g4_t_v670 *>(_g4_sf + 76u);
  _g4_t_v671 &v671 = *reinterpret_cast<_g4_t_v671 *>(_g4_sf + 76u);
  _g4_t_v672 &v672 = *reinterpret_cast<_g4_t_v672 *>(_g4_sf + 76u);
  _g4_t_v673 &v673 = *reinterpret_cast<_g4_t_v673 *>(_g4_sf + 76u);
  _g4_t_v674 &v674 = *reinterpret_cast<_g4_t_v674 *>(_g4_sf + 76u);
  _g4_t_v675 &v675 = *reinterpret_cast<_g4_t_v675 *>(_g4_sf + 76u);
  _g4_t_v676 &v676 = *reinterpret_cast<_g4_t_v676 *>(_g4_sf + 76u);
  _g4_t_v677 &v677 = *reinterpret_cast<_g4_t_v677 *>(_g4_sf + 76u);
  _g4_t_v678 &v678 = *reinterpret_cast<_g4_t_v678 *>(_g4_sf + 76u);
  _g4_t_v679 &v679 = *reinterpret_cast<_g4_t_v679 *>(_g4_sf + 76u);
  _g4_t_v680 &v680 = *reinterpret_cast<_g4_t_v680 *>(_g4_sf + 76u);
  _g4_t_v681 &v681 = *reinterpret_cast<_g4_t_v681 *>(_g4_sf + 76u);
  _g4_t_v682 &v682 = *reinterpret_cast<_g4_t_v682 *>(_g4_sf + 76u);
  _g4_t_v683 &v683 = *reinterpret_cast<_g4_t_v683 *>(_g4_sf + 76u);
  _g4_t_v684 &v684 = *reinterpret_cast<_g4_t_v684 *>(_g4_sf + 76u);
  _g4_t_v685 &v685 = *reinterpret_cast<_g4_t_v685 *>(_g4_sf + 76u);
  _g4_t_v686 &v686 = *reinterpret_cast<_g4_t_v686 *>(_g4_sf + 76u);
  _g4_t_v687 &v687 = *reinterpret_cast<_g4_t_v687 *>(_g4_sf + 76u);
  _g4_t_v688 &v688 = *reinterpret_cast<_g4_t_v688 *>(_g4_sf + 76u);
  _g4_t_v689 &v689 = *reinterpret_cast<_g4_t_v689 *>(_g4_sf + 76u);
  _g4_t_v690 &v690 = *reinterpret_cast<_g4_t_v690 *>(_g4_sf + 76u);
  _g4_t_v691 &v691 = *reinterpret_cast<_g4_t_v691 *>(_g4_sf + 76u);
  _g4_t_v692 &v692 = *reinterpret_cast<_g4_t_v692 *>(_g4_sf + 76u);
  _g4_t_v693 &v693 = *reinterpret_cast<_g4_t_v693 *>(_g4_sf + 76u);
  _g4_t_v694 &v694 = *reinterpret_cast<_g4_t_v694 *>(_g4_sf + 76u);
  _g4_t_v695 &v695 = *reinterpret_cast<_g4_t_v695 *>(_g4_sf + 76u);
  _g4_t_v696 &v696 = *reinterpret_cast<_g4_t_v696 *>(_g4_sf + 76u);
  _g4_t_v697 &v697 = *reinterpret_cast<_g4_t_v697 *>(_g4_sf + 76u);
  _g4_t_v698 &v698 = *reinterpret_cast<_g4_t_v698 *>(_g4_sf + 76u);
  _g4_t_v699 &v699 = *reinterpret_cast<_g4_t_v699 *>(_g4_sf + 80u);
  _g4_t_v700 &v700 = *reinterpret_cast<_g4_t_v700 *>(_g4_sf + 80u);
  _g4_t_v701 &v701 = *reinterpret_cast<_g4_t_v701 *>(_g4_sf + 80u);
  _g4_t_v702 &v702 = *reinterpret_cast<_g4_t_v702 *>(_g4_sf + 80u);
  _g4_t_v703 &v703 = *reinterpret_cast<_g4_t_v703 *>(_g4_sf + 80u);
  _g4_t_v704 &v704 = *reinterpret_cast<_g4_t_v704 *>(_g4_sf + 80u);
  _g4_t_v705 &v705 = *reinterpret_cast<_g4_t_v705 *>(_g4_sf + 80u);
  _g4_t_v706 &v706 = *reinterpret_cast<_g4_t_v706 *>(_g4_sf + 80u);
  _g4_t_v707 &v707 = *reinterpret_cast<_g4_t_v707 *>(_g4_sf + 80u);
  _g4_t_v708 &v708 = *reinterpret_cast<_g4_t_v708 *>(_g4_sf + 80u);
  _g4_t_v709 &v709 = *reinterpret_cast<_g4_t_v709 *>(_g4_sf + 80u);
  _g4_t_v710 &v710 = *reinterpret_cast<_g4_t_v710 *>(_g4_sf + 80u);
  _g4_t_v711 &v711 = *reinterpret_cast<_g4_t_v711 *>(_g4_sf + 80u);
  _g4_t_v712 &v712 = *reinterpret_cast<_g4_t_v712 *>(_g4_sf + 80u);
  _g4_t_v713 &v713 = *reinterpret_cast<_g4_t_v713 *>(_g4_sf + 80u);
  _g4_t_v714 &v714 = *reinterpret_cast<_g4_t_v714 *>(_g4_sf + 80u);
  _g4_t_v715 &v715 = *reinterpret_cast<_g4_t_v715 *>(_g4_sf + 80u);
  _g4_t_v716 &v716 = *reinterpret_cast<_g4_t_v716 *>(_g4_sf + 80u);
  _g4_t_v717 &v717 = *reinterpret_cast<_g4_t_v717 *>(_g4_sf + 80u);
  _g4_t_v718 &v718 = *reinterpret_cast<_g4_t_v718 *>(_g4_sf + 80u);
  _g4_t_v719 &v719 = *reinterpret_cast<_g4_t_v719 *>(_g4_sf + 80u);
  _g4_t_v720 &v720 = *reinterpret_cast<_g4_t_v720 *>(_g4_sf + 80u);
  _g4_t_v721 &v721 = *reinterpret_cast<_g4_t_v721 *>(_g4_sf + 80u);
  _g4_t_v722 &v722 = *reinterpret_cast<_g4_t_v722 *>(_g4_sf + 80u);
  _g4_t_v723 &v723 = *reinterpret_cast<_g4_t_v723 *>(_g4_sf + 80u);
  _g4_t_v724 &v724 = *reinterpret_cast<_g4_t_v724 *>(_g4_sf + 80u);
  _g4_t_v725 &v725 = *reinterpret_cast<_g4_t_v725 *>(_g4_sf + 80u);
  _g4_t_v726 &v726 = *reinterpret_cast<_g4_t_v726 *>(_g4_sf + 80u);
  _g4_t_v727 &v727 = *reinterpret_cast<_g4_t_v727 *>(_g4_sf + 80u);
  _g4_t_v728 &v728 = *reinterpret_cast<_g4_t_v728 *>(_g4_sf + 80u);
  _g4_t_v729 &v729 = *reinterpret_cast<_g4_t_v729 *>(_g4_sf + 80u);
  _g4_t_v730 &v730 = *reinterpret_cast<_g4_t_v730 *>(_g4_sf + 80u);
  _g4_t_v731 &v731 = *reinterpret_cast<_g4_t_v731 *>(_g4_sf + 80u);
  _g4_t_v732 &v732 = *reinterpret_cast<_g4_t_v732 *>(_g4_sf + 80u);
  _g4_t_v733 &v733 = *reinterpret_cast<_g4_t_v733 *>(_g4_sf + 80u);
  _g4_t_v734 &v734 = *reinterpret_cast<_g4_t_v734 *>(_g4_sf + 80u);
  _g4_t_v735 &v735 = *reinterpret_cast<_g4_t_v735 *>(_g4_sf + 80u);
  _g4_t_v736 &v736 = *reinterpret_cast<_g4_t_v736 *>(_g4_sf + 80u);
  _g4_t_v737 &v737 = *reinterpret_cast<_g4_t_v737 *>(_g4_sf + 80u);
  _g4_t_v738 &v738 = *reinterpret_cast<_g4_t_v738 *>(_g4_sf + 80u);
  _g4_t_v739 &v739 = *reinterpret_cast<_g4_t_v739 *>(_g4_sf + 80u);
  _g4_t_v740 &v740 = *reinterpret_cast<_g4_t_v740 *>(_g4_sf + 80u);
  _g4_t_v741 &v741 = *reinterpret_cast<_g4_t_v741 *>(_g4_sf + 80u);
  _g4_t_v742 &v742 = *reinterpret_cast<_g4_t_v742 *>(_g4_sf + 80u);
  _g4_t_v743 &v743 = *reinterpret_cast<_g4_t_v743 *>(_g4_sf + 80u);
  _g4_t_v744 &v744 = *reinterpret_cast<_g4_t_v744 *>(_g4_sf + 80u);
  _g4_t_v745 &v745 = *reinterpret_cast<_g4_t_v745 *>(_g4_sf + 80u);
  _g4_t_v746 &v746 = *reinterpret_cast<_g4_t_v746 *>(_g4_sf + 80u);
  _g4_t_v747 &v747 = *reinterpret_cast<_g4_t_v747 *>(_g4_sf + 80u);
  _g4_t_v748 &v748 = *reinterpret_cast<_g4_t_v748 *>(_g4_sf + 80u);
  _g4_t_v749 &v749 = *reinterpret_cast<_g4_t_v749 *>(_g4_sf + 80u);
  _g4_t_v750 &v750 = *reinterpret_cast<_g4_t_v750 *>(_g4_sf + 80u);
  _g4_t_v751 &v751 = *reinterpret_cast<_g4_t_v751 *>(_g4_sf + 80u);
  _g4_t_v752 &v752 = *reinterpret_cast<_g4_t_v752 *>(_g4_sf + 80u);
  _g4_t_v753 &v753 = *reinterpret_cast<_g4_t_v753 *>(_g4_sf + 80u);
  _g4_t_v754 &v754 = *reinterpret_cast<_g4_t_v754 *>(_g4_sf + 80u);
  _g4_t_v755 &v755 = *reinterpret_cast<_g4_t_v755 *>(_g4_sf + 80u);
  _g4_t_v756 &v756 = *reinterpret_cast<_g4_t_v756 *>(_g4_sf + 80u);
  _g4_t_v757 &v757 = *reinterpret_cast<_g4_t_v757 *>(_g4_sf + 80u);
  _g4_t_v758 &v758 = *reinterpret_cast<_g4_t_v758 *>(_g4_sf + 80u);
  _g4_t_v759 &v759 = *reinterpret_cast<_g4_t_v759 *>(_g4_sf + 80u);
  _g4_t_v760 &v760 = *reinterpret_cast<_g4_t_v760 *>(_g4_sf + 80u);
  _g4_t_v761 &v761 = *reinterpret_cast<_g4_t_v761 *>(_g4_sf + 80u);
  _g4_t_v762 &v762 = *reinterpret_cast<_g4_t_v762 *>(_g4_sf + 80u);
  _g4_t_v763 &v763 = *reinterpret_cast<_g4_t_v763 *>(_g4_sf + 80u);
  _g4_t_v764 &v764 = *reinterpret_cast<_g4_t_v764 *>(_g4_sf + 80u);
  _g4_t_v765 &v765 = *reinterpret_cast<_g4_t_v765 *>(_g4_sf + 80u);
  _g4_t_v766 &v766 = *reinterpret_cast<_g4_t_v766 *>(_g4_sf + 84u);
  _g4_t_v767 &v767 = *reinterpret_cast<_g4_t_v767 *>(_g4_sf + 84u);
  _g4_t_v768 &v768 = *reinterpret_cast<_g4_t_v768 *>(_g4_sf + 84u);
  _g4_t_v769 &v769 = *reinterpret_cast<_g4_t_v769 *>(_g4_sf + 84u);
  _g4_t_v770 &v770 = *reinterpret_cast<_g4_t_v770 *>(_g4_sf + 84u);
  _g4_t_v771 &v771 = *reinterpret_cast<_g4_t_v771 *>(_g4_sf + 84u);
  _g4_t_v772 &v772 = *reinterpret_cast<_g4_t_v772 *>(_g4_sf + 84u);
  _g4_t_v773 &v773 = *reinterpret_cast<_g4_t_v773 *>(_g4_sf + 84u);
  _g4_t_v774 &v774 = *reinterpret_cast<_g4_t_v774 *>(_g4_sf + 84u);
  _g4_t_v775 &v775 = *reinterpret_cast<_g4_t_v775 *>(_g4_sf + 84u);
  _g4_t_v776 &v776 = *reinterpret_cast<_g4_t_v776 *>(_g4_sf + 84u);
  _g4_t_v777 &v777 = *reinterpret_cast<_g4_t_v777 *>(_g4_sf + 84u);
  _g4_t_v778 &v778 = *reinterpret_cast<_g4_t_v778 *>(_g4_sf + 84u);
  _g4_t_v779 &v779 = *reinterpret_cast<_g4_t_v779 *>(_g4_sf + 84u);
  _g4_t_v780 &v780 = *reinterpret_cast<_g4_t_v780 *>(_g4_sf + 84u);
  _g4_t_v781 &v781 = *reinterpret_cast<_g4_t_v781 *>(_g4_sf + 84u);
  _g4_t_v782 &v782 = *reinterpret_cast<_g4_t_v782 *>(_g4_sf + 84u);
  _g4_t_v783 &v783 = *reinterpret_cast<_g4_t_v783 *>(_g4_sf + 84u);
  _g4_t_v784 &v784 = *reinterpret_cast<_g4_t_v784 *>(_g4_sf + 84u);
  _g4_t_v785 &v785 = *reinterpret_cast<_g4_t_v785 *>(_g4_sf + 84u);
  _g4_t_v786 &v786 = *reinterpret_cast<_g4_t_v786 *>(_g4_sf + 84u);
  _g4_t_v787 &v787 = *reinterpret_cast<_g4_t_v787 *>(_g4_sf + 84u);
  _g4_t_v788 &v788 = *reinterpret_cast<_g4_t_v788 *>(_g4_sf + 84u);
  _g4_t_v789 &v789 = *reinterpret_cast<_g4_t_v789 *>(_g4_sf + 84u);
  _g4_t_v790 &v790 = *reinterpret_cast<_g4_t_v790 *>(_g4_sf + 84u);
  _g4_t_v791 &v791 = *reinterpret_cast<_g4_t_v791 *>(_g4_sf + 84u);
  _g4_t_v792 &v792 = *reinterpret_cast<_g4_t_v792 *>(_g4_sf + 84u);
  _g4_t_v793 &v793 = *reinterpret_cast<_g4_t_v793 *>(_g4_sf + 84u);
  _g4_t_v794 &v794 = *reinterpret_cast<_g4_t_v794 *>(_g4_sf + 84u);
  _g4_t_v795 &v795 = *reinterpret_cast<_g4_t_v795 *>(_g4_sf + 84u);
  _g4_t_v796 &v796 = *reinterpret_cast<_g4_t_v796 *>(_g4_sf + 84u);
  _g4_t_v797 &v797 = *reinterpret_cast<_g4_t_v797 *>(_g4_sf + 84u);
  _g4_t_v798 &v798 = *reinterpret_cast<_g4_t_v798 *>(_g4_sf + 84u);
  _g4_t_v799 &v799 = *reinterpret_cast<_g4_t_v799 *>(_g4_sf + 84u);
  _g4_t_v800 &v800 = *reinterpret_cast<_g4_t_v800 *>(_g4_sf + 84u);
  _g4_t_v801 &v801 = *reinterpret_cast<_g4_t_v801 *>(_g4_sf + 84u);
  _g4_t_v802 &v802 = *reinterpret_cast<_g4_t_v802 *>(_g4_sf + 84u);
  _g4_t_v803 &v803 = *reinterpret_cast<_g4_t_v803 *>(_g4_sf + 84u);
  _g4_t_v804 &v804 = *reinterpret_cast<_g4_t_v804 *>(_g4_sf + 84u);
  _g4_t_v805 &v805 = *reinterpret_cast<_g4_t_v805 *>(_g4_sf + 84u);
  _g4_t_v806 &v806 = *reinterpret_cast<_g4_t_v806 *>(_g4_sf + 84u);
  _g4_t_v807 &v807 = *reinterpret_cast<_g4_t_v807 *>(_g4_sf + 84u);
  _g4_t_v808 &v808 = *reinterpret_cast<_g4_t_v808 *>(_g4_sf + 84u);
  _g4_t_v809 &v809 = *reinterpret_cast<_g4_t_v809 *>(_g4_sf + 84u);
  _g4_t_v810 &v810 = *reinterpret_cast<_g4_t_v810 *>(_g4_sf + 84u);
  _g4_t_v811 &v811 = *reinterpret_cast<_g4_t_v811 *>(_g4_sf + 84u);
  _g4_t_v812 &v812 = *reinterpret_cast<_g4_t_v812 *>(_g4_sf + 84u);
  _g4_t_v813 &v813 = *reinterpret_cast<_g4_t_v813 *>(_g4_sf + 84u);
  _g4_t_v814 &v814 = *reinterpret_cast<_g4_t_v814 *>(_g4_sf + 84u);
  _g4_t_v815 &v815 = *reinterpret_cast<_g4_t_v815 *>(_g4_sf + 84u);
  _g4_t_v816 &v816 = *reinterpret_cast<_g4_t_v816 *>(_g4_sf + 84u);
  _g4_t_v817 &v817 = *reinterpret_cast<_g4_t_v817 *>(_g4_sf + 84u);
  _g4_t_v818 &v818 = *reinterpret_cast<_g4_t_v818 *>(_g4_sf + 84u);
  _g4_t_v819 &v819 = *reinterpret_cast<_g4_t_v819 *>(_g4_sf + 84u);
  _g4_t_v820 &v820 = *reinterpret_cast<_g4_t_v820 *>(_g4_sf + 84u);
  _g4_t_v821 &v821 = *reinterpret_cast<_g4_t_v821 *>(_g4_sf + 88u);
  _g4_t_v822 &v822 = *reinterpret_cast<_g4_t_v822 *>(_g4_sf + 88u);
  _g4_t_v823 &v823 = *reinterpret_cast<_g4_t_v823 *>(_g4_sf + 88u);
  _g4_t_v824 &v824 = *reinterpret_cast<_g4_t_v824 *>(_g4_sf + 88u);
  _g4_t_v825 &v825 = *reinterpret_cast<_g4_t_v825 *>(_g4_sf + 88u);
  _g4_t_v826 &v826 = *reinterpret_cast<_g4_t_v826 *>(_g4_sf + 88u);
  _g4_t_v827 &v827 = *reinterpret_cast<_g4_t_v827 *>(_g4_sf + 88u);
  _g4_t_v828 &v828 = *reinterpret_cast<_g4_t_v828 *>(_g4_sf + 88u);
  _g4_t_v829 &v829 = *reinterpret_cast<_g4_t_v829 *>(_g4_sf + 88u);
  _g4_t_v830 &v830 = *reinterpret_cast<_g4_t_v830 *>(_g4_sf + 88u);
  _g4_t_v831 &v831 = *reinterpret_cast<_g4_t_v831 *>(_g4_sf + 88u);
  _g4_t_v832 &v832 = *reinterpret_cast<_g4_t_v832 *>(_g4_sf + 88u);
  _g4_t_v833 &v833 = *reinterpret_cast<_g4_t_v833 *>(_g4_sf + 88u);
  _g4_t_v834 &v834 = *reinterpret_cast<_g4_t_v834 *>(_g4_sf + 88u);
  _g4_t_v835 &v835 = *reinterpret_cast<_g4_t_v835 *>(_g4_sf + 88u);
  _g4_t_v836 &v836 = *reinterpret_cast<_g4_t_v836 *>(_g4_sf + 88u);
  _g4_t_v837 &v837 = *reinterpret_cast<_g4_t_v837 *>(_g4_sf + 88u);
  _g4_t_v838 &v838 = *reinterpret_cast<_g4_t_v838 *>(_g4_sf + 88u);
  _g4_t_v839 &v839 = *reinterpret_cast<_g4_t_v839 *>(_g4_sf + 88u);
  _g4_t_v840 &v840 = *reinterpret_cast<_g4_t_v840 *>(_g4_sf + 88u);
  _g4_t_v841 &v841 = *reinterpret_cast<_g4_t_v841 *>(_g4_sf + 88u);
  _g4_t_v842 &v842 = *reinterpret_cast<_g4_t_v842 *>(_g4_sf + 88u);
  _g4_t_v843 &v843 = *reinterpret_cast<_g4_t_v843 *>(_g4_sf + 88u);
  _g4_t_v844 &v844 = *reinterpret_cast<_g4_t_v844 *>(_g4_sf + 88u);
  _g4_t_v845 &v845 = *reinterpret_cast<_g4_t_v845 *>(_g4_sf + 88u);
  _g4_t_v846 &v846 = *reinterpret_cast<_g4_t_v846 *>(_g4_sf + 88u);
  _g4_t_v847 &v847 = *reinterpret_cast<_g4_t_v847 *>(_g4_sf + 88u);
  _g4_t_v848 &v848 = *reinterpret_cast<_g4_t_v848 *>(_g4_sf + 88u);
  _g4_t_v849 &v849 = *reinterpret_cast<_g4_t_v849 *>(_g4_sf + 88u);
  _g4_t_v850 &v850 = *reinterpret_cast<_g4_t_v850 *>(_g4_sf + 88u);
  _g4_t_v851 &v851 = *reinterpret_cast<_g4_t_v851 *>(_g4_sf + 88u);
  _g4_t_v852 &v852 = *reinterpret_cast<_g4_t_v852 *>(_g4_sf + 88u);
  _g4_t_v853 &v853 = *reinterpret_cast<_g4_t_v853 *>(_g4_sf + 88u);
  _g4_t_v854 &v854 = *reinterpret_cast<_g4_t_v854 *>(_g4_sf + 88u);
  _g4_t_v855 &v855 = *reinterpret_cast<_g4_t_v855 *>(_g4_sf + 88u);
  _g4_t_v856 &v856 = *reinterpret_cast<_g4_t_v856 *>(_g4_sf + 88u);
  _g4_t_v857 &v857 = *reinterpret_cast<_g4_t_v857 *>(_g4_sf + 88u);
  _g4_t_v858 &v858 = *reinterpret_cast<_g4_t_v858 *>(_g4_sf + 92u);
  _g4_t_v859 &v859 = *reinterpret_cast<_g4_t_v859 *>(_g4_sf + 92u);
  _g4_t_v860 &v860 = *reinterpret_cast<_g4_t_v860 *>(_g4_sf + 92u);
  _g4_t_v861 &v861 = *reinterpret_cast<_g4_t_v861 *>(_g4_sf + 92u);
  _g4_t_v862 &v862 = *reinterpret_cast<_g4_t_v862 *>(_g4_sf + 92u);
  _g4_t_v863 &v863 = *reinterpret_cast<_g4_t_v863 *>(_g4_sf + 92u);
  _g4_t_v864 &v864 = *reinterpret_cast<_g4_t_v864 *>(_g4_sf + 92u);
  _g4_t_v865 &v865 = *reinterpret_cast<_g4_t_v865 *>(_g4_sf + 92u);
  _g4_t_v866 &v866 = *reinterpret_cast<_g4_t_v866 *>(_g4_sf + 92u);
  _g4_t_v867 &v867 = *reinterpret_cast<_g4_t_v867 *>(_g4_sf + 92u);
  _g4_t_v868 &v868 = *reinterpret_cast<_g4_t_v868 *>(_g4_sf + 92u);
  _g4_t_v869 &v869 = *reinterpret_cast<_g4_t_v869 *>(_g4_sf + 92u);
  _g4_t_v870 &v870 = *reinterpret_cast<_g4_t_v870 *>(_g4_sf + 92u);
  _g4_t_v871 &v871 = *reinterpret_cast<_g4_t_v871 *>(_g4_sf + 92u);
  _g4_t_v872 &v872 = *reinterpret_cast<_g4_t_v872 *>(_g4_sf + 92u);
  _g4_t_v873 &v873 = *reinterpret_cast<_g4_t_v873 *>(_g4_sf + 92u);
  _g4_t_v874 &v874 = *reinterpret_cast<_g4_t_v874 *>(_g4_sf + 92u);
  _g4_t_v875 &v875 = *reinterpret_cast<_g4_t_v875 *>(_g4_sf + 92u);
  _g4_t_v876 &v876 = *reinterpret_cast<_g4_t_v876 *>(_g4_sf + 92u);
  _g4_t_v877 &v877 = *reinterpret_cast<_g4_t_v877 *>(_g4_sf + 96u);
  _g4_t_v878 &v878 = *reinterpret_cast<_g4_t_v878 *>(_g4_sf + 96u);
  _g4_t_v879 &v879 = *reinterpret_cast<_g4_t_v879 *>(_g4_sf + 96u);
  _g4_t_v880 &v880 = *reinterpret_cast<_g4_t_v880 *>(_g4_sf + 96u);
  _g4_t_v881 &v881 = *reinterpret_cast<_g4_t_v881 *>(_g4_sf + 96u);
  _g4_t_v882 &v882 = *reinterpret_cast<_g4_t_v882 *>(_g4_sf + 96u);
  _g4_t_v883 &v883 = *reinterpret_cast<_g4_t_v883 *>(_g4_sf + 96u);
  _g4_t_v884 &v884 = *reinterpret_cast<_g4_t_v884 *>(_g4_sf + 100u);
  _g4_t_v885 &v885 = *reinterpret_cast<_g4_t_v885 *>(_g4_sf + 100u);
  _g4_t_v886 &v886 = *reinterpret_cast<_g4_t_v886 *>(_g4_sf + 100u);
  _g4_t_v887 &v887 = *reinterpret_cast<_g4_t_v887 *>(_g4_sf + 104u);
  _g4_t_v888 &v888 = *reinterpret_cast<_g4_t_v888 *>(_g4_sf + 104u);
  _g4_t_v889 &v889 = *reinterpret_cast<_g4_t_v889 *>(_g4_sf + 108u);
  _g4_t_v890 &v890 = *reinterpret_cast<_g4_t_v890 *>(_g4_sf + 120u);
  _g4_t_Matches &Matches = *reinterpret_cast<_g4_t_Matches *>(_g4_sf + 124u);
  _g4_t_v892 &v892 = *reinterpret_cast<_g4_t_v892 *>(_g4_sf + 128u);
  _g4_t_v893 &v893 = *reinterpret_cast<_g4_t_v893 *>(_g4_sf + 132u);
  _g4_t_v894 &v894 = *reinterpret_cast<_g4_t_v894 *>(_g4_sf + 136u);
  _g4_t_v895 &v895 = *reinterpret_cast<_g4_t_v895 *>(_g4_sf + 140u);
  _g4_t_v896 &v896 = *reinterpret_cast<_g4_t_v896 *>(_g4_sf + 144u);
  _g4_t_v897 &v897 = *reinterpret_cast<_g4_t_v897 *>(_g4_sf + 148u);
  _g4_t_v898 &v898 = *reinterpret_cast<_g4_t_v898 *>(_g4_sf + 152u);
  _g4_t_v899 &v899 = *reinterpret_cast<_g4_t_v899 *>(_g4_sf + 156u);
  _g4_t_v900 &v900 = *reinterpret_cast<_g4_t_v900 *>(_g4_sf + 160u);
  _g4_t_v901 &v901 = *reinterpret_cast<_g4_t_v901 *>(_g4_sf + 164u);
  _g4_t_v902 &v902 = *reinterpret_cast<_g4_t_v902 *>(_g4_sf + 168u);
  _g4_t_v903 &v903 = *reinterpret_cast<_g4_t_v903 *>(_g4_sf + 172u);
  _g4_t_v904 &v904 = *reinterpret_cast<_g4_t_v904 *>(_g4_sf + 176u);
  _g4_t_v905 &v905 = *reinterpret_cast<_g4_t_v905 *>(_g4_sf + 180u);
  _g4_t_v906 &v906 = *reinterpret_cast<_g4_t_v906 *>(_g4_sf + 184u);
  _g4_t_v907 &v907 = *reinterpret_cast<_g4_t_v907 *>(_g4_sf + 188u);
  _g4_t_v908 &v908 = *reinterpret_cast<_g4_t_v908 *>(_g4_sf + 192u);
  _g4_t_v909 &v909 = *reinterpret_cast<_g4_t_v909 *>(_g4_sf + 196u);
  _g4_t_v910 &v910 = *reinterpret_cast<_g4_t_v910 *>(_g4_sf + 200u);
  _g4_t_v911 &v911 = *reinterpret_cast<_g4_t_v911 *>(_g4_sf + 204u);
  _g4_t_v912 &v912 = *reinterpret_cast<_g4_t_v912 *>(_g4_sf + 208u);
  _g4_t_v913 &v913 = *reinterpret_cast<_g4_t_v913 *>(_g4_sf + 212u);
  _g4_t_v914 &v914 = *reinterpret_cast<_g4_t_v914 *>(_g4_sf + 216u);
  _g4_t_v915 &v915 = *reinterpret_cast<_g4_t_v915 *>(_g4_sf + 220u);
  _g4_t_v916 &v916 = *reinterpret_cast<_g4_t_v916 *>(_g4_sf + 224u);
  _g4_t_v917 &v917 = *reinterpret_cast<_g4_t_v917 *>(_g4_sf + 228u);
  _g4_t_v918 &v918 = *reinterpret_cast<_g4_t_v918 *>(_g4_sf + 232u);
  _g4_t_v919 &v919 = *reinterpret_cast<_g4_t_v919 *>(_g4_sf + 236u);
  _g4_t_v920 &v920 = *reinterpret_cast<_g4_t_v920 *>(_g4_sf + 240u);
  _g4_t_v921 &v921 = *reinterpret_cast<_g4_t_v921 *>(_g4_sf + 244u);
  _g4_t_v922 &v922 = *reinterpret_cast<_g4_t_v922 *>(_g4_sf + 248u);
  _g4_t_v923 &v923 = *reinterpret_cast<_g4_t_v923 *>(_g4_sf + 252u);
  _g4_t_v924 &v924 = *reinterpret_cast<_g4_t_v924 *>(_g4_sf + 256u);
  _g4_t_v925 &v925 = *reinterpret_cast<_g4_t_v925 *>(_g4_sf + 260u);
  _g4_t_v926 &v926 = *reinterpret_cast<_g4_t_v926 *>(_g4_sf + 264u);
  _g4_t_v927 &v927 = *reinterpret_cast<_g4_t_v927 *>(_g4_sf + 268u);
  _g4_t_v928 &v928 = *reinterpret_cast<_g4_t_v928 *>(_g4_sf + 272u);
  _g4_t_v929 &v929 = *reinterpret_cast<_g4_t_v929 *>(_g4_sf + 276u);
  _g4_t_v930 &v930 = *reinterpret_cast<_g4_t_v930 *>(_g4_sf + 280u);
  _g4_t_v931 &v931 = *reinterpret_cast<_g4_t_v931 *>(_g4_sf + 284u);
  _g4_t_v932 &v932 = *reinterpret_cast<_g4_t_v932 *>(_g4_sf + 288u);
  _g4_t_v933 &v933 = *reinterpret_cast<_g4_t_v933 *>(_g4_sf + 292u);
  _g4_t_v934 &v934 = *reinterpret_cast<_g4_t_v934 *>(_g4_sf + 296u);
  _g4_t_v935 &v935 = *reinterpret_cast<_g4_t_v935 *>(_g4_sf + 300u);
  _g4_t_v936 &v936 = *reinterpret_cast<_g4_t_v936 *>(_g4_sf + 304u);
  _g4_t_v937 &v937 = *reinterpret_cast<_g4_t_v937 *>(_g4_sf + 308u);
  _g4_t_v938 &v938 = *reinterpret_cast<_g4_t_v938 *>(_g4_sf + 312u);
  _g4_t_v939 &v939 = *reinterpret_cast<_g4_t_v939 *>(_g4_sf + 316u);
  _g4_t_v940 &v940 = *reinterpret_cast<_g4_t_v940 *>(_g4_sf + 320u);
  _g4_t_v941 &v941 = *reinterpret_cast<_g4_t_v941 *>(_g4_sf + 324u);
  _g4_t_v942 &v942 = *reinterpret_cast<_g4_t_v942 *>(_g4_sf + 328u);
  _g4_t_v943 &v943 = *reinterpret_cast<_g4_t_v943 *>(_g4_sf + 332u);
  _g4_t_v944 &v944 = *reinterpret_cast<_g4_t_v944 *>(_g4_sf + 336u);
  _g4_t_v945 &v945 = *reinterpret_cast<_g4_t_v945 *>(_g4_sf + 340u);
  _g4_t_v946 &v946 = *reinterpret_cast<_g4_t_v946 *>(_g4_sf + 344u);
  _g4_t_v947 &v947 = *reinterpret_cast<_g4_t_v947 *>(_g4_sf + 348u);
  _g4_t_v948 &v948 = *reinterpret_cast<_g4_t_v948 *>(_g4_sf + 352u);
  _g4_t_v949 &v949 = *reinterpret_cast<_g4_t_v949 *>(_g4_sf + 356u);
  _g4_t_v950 &v950 = *reinterpret_cast<_g4_t_v950 *>(_g4_sf + 360u);
  _g4_t_v951 &v951 = *reinterpret_cast<_g4_t_v951 *>(_g4_sf + 364u);
  _g4_t_v952 &v952 = *reinterpret_cast<_g4_t_v952 *>(_g4_sf + 368u);
  _g4_t_v953 &v953 = *reinterpret_cast<_g4_t_v953 *>(_g4_sf + 372u);
  _g4_t_v954 &v954 = *reinterpret_cast<_g4_t_v954 *>(_g4_sf + 376u);
  _g4_t_v955 &v955 = *reinterpret_cast<_g4_t_v955 *>(_g4_sf + 380u);
  _g4_t_v956 &v956 = *reinterpret_cast<_g4_t_v956 *>(_g4_sf + 384u);
  _g4_t_v957 &v957 = *reinterpret_cast<_g4_t_v957 *>(_g4_sf + 388u);
  _g4_t_v958 &v958 = *reinterpret_cast<_g4_t_v958 *>(_g4_sf + 392u);
  _g4_t_v959 &v959 = *reinterpret_cast<_g4_t_v959 *>(_g4_sf + 396u);
  _g4_t_v960 &v960 = *reinterpret_cast<_g4_t_v960 *>(_g4_sf + 400u);
  _g4_t_v961 &v961 = *reinterpret_cast<_g4_t_v961 *>(_g4_sf + 404u);
  _g4_t_v962 &v962 = *reinterpret_cast<_g4_t_v962 *>(_g4_sf + 408u);
  _g4_t_v963 &v963 = *reinterpret_cast<_g4_t_v963 *>(_g4_sf + 412u);
  _g4_t_v964 &v964 = *reinterpret_cast<_g4_t_v964 *>(_g4_sf + 416u);
  _g4_t_v965 &v965 = *reinterpret_cast<_g4_t_v965 *>(_g4_sf + 420u);
  _g4_t_v966 &v966 = *reinterpret_cast<_g4_t_v966 *>(_g4_sf + 424u);
  _g4_t_v967 &v967 = *reinterpret_cast<_g4_t_v967 *>(_g4_sf + 428u);
  _g4_t_v968 &v968 = *reinterpret_cast<_g4_t_v968 *>(_g4_sf + 432u);
  _g4_t_v969 &v969 = *reinterpret_cast<_g4_t_v969 *>(_g4_sf + 436u);
  _g4_t_v970 &v970 = *reinterpret_cast<_g4_t_v970 *>(_g4_sf + 440u);
  _g4_t_v971 &v971 = *reinterpret_cast<_g4_t_v971 *>(_g4_sf + 444u);
  _g4_t_v972 &v972 = *reinterpret_cast<_g4_t_v972 *>(_g4_sf + 448u);
  _g4_t_v973 &v973 = *reinterpret_cast<_g4_t_v973 *>(_g4_sf + 452u);
  _g4_t_v974 &v974 = *reinterpret_cast<_g4_t_v974 *>(_g4_sf + 456u);
  _g4_t_v975 &v975 = *reinterpret_cast<_g4_t_v975 *>(_g4_sf + 460u);
  _g4_t_v976 &v976 = *reinterpret_cast<_g4_t_v976 *>(_g4_sf + 464u);
  _g4_t_v977 &v977 = *reinterpret_cast<_g4_t_v977 *>(_g4_sf + 468u);
  _g4_t_v978 &v978 = *reinterpret_cast<_g4_t_v978 *>(_g4_sf + 472u);
  _g4_t_v979 &v979 = *reinterpret_cast<_g4_t_v979 *>(_g4_sf + 476u);
  _g4_t_v980 &v980 = *reinterpret_cast<_g4_t_v980 *>(_g4_sf + 480u);
  _g4_t_v981 &v981 = *reinterpret_cast<_g4_t_v981 *>(_g4_sf + 484u);
  _g4_t_v982 &v982 = *reinterpret_cast<_g4_t_v982 *>(_g4_sf + 488u);
  _g4_t_v983 &v983 = *reinterpret_cast<_g4_t_v983 *>(_g4_sf + 492u);
  _g4_t_v984 &v984 = *reinterpret_cast<_g4_t_v984 *>(_g4_sf + 496u);
  _g4_t_v985 &v985 = *reinterpret_cast<_g4_t_v985 *>(_g4_sf + 500u);
  _g4_t_v986 &v986 = *reinterpret_cast<_g4_t_v986 *>(_g4_sf + 504u);
  _g4_t_v987 &v987 = *reinterpret_cast<_g4_t_v987 *>(_g4_sf + 508u);
  _g4_t_v988 &v988 = *reinterpret_cast<_g4_t_v988 *>(_g4_sf + 512u);
  _g4_t_v989 &v989 = *reinterpret_cast<_g4_t_v989 *>(_g4_sf + 516u);
  _g4_t_v990 &v990 = *reinterpret_cast<_g4_t_v990 *>(_g4_sf + 520u);
  _g4_t_v991 &v991 = *reinterpret_cast<_g4_t_v991 *>(_g4_sf + 524u);
  _g4_t_v992 &v992 = *reinterpret_cast<_g4_t_v992 *>(_g4_sf + 528u);
  _g4_t_v993 &v993 = *reinterpret_cast<_g4_t_v993 *>(_g4_sf + 532u);
  _g4_t_v994 &v994 = *reinterpret_cast<_g4_t_v994 *>(_g4_sf + 536u);
  _g4_t_v995 &v995 = *reinterpret_cast<_g4_t_v995 *>(_g4_sf + 540u);
  _g4_t_v996 &v996 = *reinterpret_cast<_g4_t_v996 *>(_g4_sf + 544u);
  _g4_t_v997 &v997 = *reinterpret_cast<_g4_t_v997 *>(_g4_sf + 548u);
  _g4_t_v998 &v998 = *reinterpret_cast<_g4_t_v998 *>(_g4_sf + 552u);
  _g4_t_v999 &v999 = *reinterpret_cast<_g4_t_v999 *>(_g4_sf + 556u);
  _g4_t_v1000 &v1000 = *reinterpret_cast<_g4_t_v1000 *>(_g4_sf + 560u);
  _g4_t_v1001 &v1001 = *reinterpret_cast<_g4_t_v1001 *>(_g4_sf + 564u);
  _g4_t_v1002 &v1002 = *reinterpret_cast<_g4_t_v1002 *>(_g4_sf + 568u);
  _g4_t_v1003 &v1003 = *reinterpret_cast<_g4_t_v1003 *>(_g4_sf + 572u);
  _g4_t_v1004 &v1004 = *reinterpret_cast<_g4_t_v1004 *>(_g4_sf + 576u);
  _g4_t_v1005 &v1005 = *reinterpret_cast<_g4_t_v1005 *>(_g4_sf + 580u);
  _g4_t_v1006 &v1006 = *reinterpret_cast<_g4_t_v1006 *>(_g4_sf + 584u);
  _g4_t_v1007 &v1007 = *reinterpret_cast<_g4_t_v1007 *>(_g4_sf + 588u);
  _g4_t_v1008 &v1008 = *reinterpret_cast<_g4_t_v1008 *>(_g4_sf + 592u);
  _g4_t_v1009 &v1009 = *reinterpret_cast<_g4_t_v1009 *>(_g4_sf + 596u);
  _g4_t_v1010 &v1010 = *reinterpret_cast<_g4_t_v1010 *>(_g4_sf + 600u);
  _g4_t_v1011 &v1011 = *reinterpret_cast<_g4_t_v1011 *>(_g4_sf + 604u);
  _g4_t_v1012 &v1012 = *reinterpret_cast<_g4_t_v1012 *>(_g4_sf + 608u);
  _g4_t_v1013 &v1013 = *reinterpret_cast<_g4_t_v1013 *>(_g4_sf + 612u);
  _g4_t_v1014 &v1014 = *reinterpret_cast<_g4_t_v1014 *>(_g4_sf + 616u);
  _g4_t_v1015 &v1015 = *reinterpret_cast<_g4_t_v1015 *>(_g4_sf + 620u);
  _g4_t_v1016 &v1016 = *reinterpret_cast<_g4_t_v1016 *>(_g4_sf + 624u);
  _g4_t_v1017 &v1017 = *reinterpret_cast<_g4_t_v1017 *>(_g4_sf + 628u);
  _g4_t_v1018 &v1018 = *reinterpret_cast<_g4_t_v1018 *>(_g4_sf + 632u);
  _g4_t_v1019 &v1019 = *reinterpret_cast<_g4_t_v1019 *>(_g4_sf + 636u);
  _g4_t_v1020 &v1020 = *reinterpret_cast<_g4_t_v1020 *>(_g4_sf + 640u);
  _g4_t_v1021 &v1021 = *reinterpret_cast<_g4_t_v1021 *>(_g4_sf + 644u);
  _g4_t_v1022 &v1022 = *reinterpret_cast<_g4_t_v1022 *>(_g4_sf + 648u);
  _g4_t_v1023 &v1023 = *reinterpret_cast<_g4_t_v1023 *>(_g4_sf + 652u);
  _g4_t_v1024 &v1024 = *reinterpret_cast<_g4_t_v1024 *>(_g4_sf + 656u);
  _g4_t_v1025 &v1025 = *reinterpret_cast<_g4_t_v1025 *>(_g4_sf + 660u);
  _g4_t_v1026 &v1026 = *reinterpret_cast<_g4_t_v1026 *>(_g4_sf + 664u);
  _g4_t_v1027 &v1027 = *reinterpret_cast<_g4_t_v1027 *>(_g4_sf + 668u);
  _g4_t_v1028 &v1028 = *reinterpret_cast<_g4_t_v1028 *>(_g4_sf + 672u);
  _g4_t_v1029 &v1029 = *reinterpret_cast<_g4_t_v1029 *>(_g4_sf + 676u);
  _g4_t_v1030 &v1030 = *reinterpret_cast<_g4_t_v1030 *>(_g4_sf + 680u);
  _g4_t_v1031 &v1031 = *reinterpret_cast<_g4_t_v1031 *>(_g4_sf + 684u);
  _g4_t_v1032 &v1032 = *reinterpret_cast<_g4_t_v1032 *>(_g4_sf + 688u);
  _g4_t_v1033 &v1033 = *reinterpret_cast<_g4_t_v1033 *>(_g4_sf + 692u);
  _g4_t_v1034 &v1034 = *reinterpret_cast<_g4_t_v1034 *>(_g4_sf + 696u);
  _g4_t_v1035 &v1035 = *reinterpret_cast<_g4_t_v1035 *>(_g4_sf + 700u);
  _g4_t_v1036 &v1036 = *reinterpret_cast<_g4_t_v1036 *>(_g4_sf + 704u);
  _g4_t_v1037 &v1037 = *reinterpret_cast<_g4_t_v1037 *>(_g4_sf + 708u);
  _g4_t_v1038 &v1038 = *reinterpret_cast<_g4_t_v1038 *>(_g4_sf + 712u);
  _g4_t_v1039 &v1039 = *reinterpret_cast<_g4_t_v1039 *>(_g4_sf + 716u);
  _g4_t_v1040 &v1040 = *reinterpret_cast<_g4_t_v1040 *>(_g4_sf + 720u);
  _g4_t_v1041 &v1041 = *reinterpret_cast<_g4_t_v1041 *>(_g4_sf + 724u);
  _g4_t_v1042 &v1042 = *reinterpret_cast<_g4_t_v1042 *>(_g4_sf + 728u);
  _g4_t_v1043 &v1043 = *reinterpret_cast<_g4_t_v1043 *>(_g4_sf + 732u);
  _g4_t_v1044 &v1044 = *reinterpret_cast<_g4_t_v1044 *>(_g4_sf + 736u);
  _g4_t_v1045 &v1045 = *reinterpret_cast<_g4_t_v1045 *>(_g4_sf + 740u);
  _g4_t_v1046 &v1046 = *reinterpret_cast<_g4_t_v1046 *>(_g4_sf + 744u);
  _g4_t_v1047 &v1047 = *reinterpret_cast<_g4_t_v1047 *>(_g4_sf + 748u);
  _g4_t_v1048 &v1048 = *reinterpret_cast<_g4_t_v1048 *>(_g4_sf + 752u);
  _g4_t_v1049 &v1049 = *reinterpret_cast<_g4_t_v1049 *>(_g4_sf + 756u);
  _g4_t_v1050 &v1050 = *reinterpret_cast<_g4_t_v1050 *>(_g4_sf + 760u);
  _g4_t_v1051 &v1051 = *reinterpret_cast<_g4_t_v1051 *>(_g4_sf + 764u);
  _g4_t_v1052 &v1052 = *reinterpret_cast<_g4_t_v1052 *>(_g4_sf + 768u);
  _g4_t_v1053 &v1053 = *reinterpret_cast<_g4_t_v1053 *>(_g4_sf + 772u);
  _g4_t_v1054 &v1054 = *reinterpret_cast<_g4_t_v1054 *>(_g4_sf + 776u);
  _g4_t_v1055 &v1055 = *reinterpret_cast<_g4_t_v1055 *>(_g4_sf + 780u);
  _g4_t_v1056 &v1056 = *reinterpret_cast<_g4_t_v1056 *>(_g4_sf + 784u);
  _g4_t_v1057 &v1057 = *reinterpret_cast<_g4_t_v1057 *>(_g4_sf + 788u);
  _g4_t_v1058 &v1058 = *reinterpret_cast<_g4_t_v1058 *>(_g4_sf + 792u);
  _g4_t_v1059 &v1059 = *reinterpret_cast<_g4_t_v1059 *>(_g4_sf + 796u);
  _g4_t_v1060 &v1060 = *reinterpret_cast<_g4_t_v1060 *>(_g4_sf + 800u);
  _g4_t_v1061 &v1061 = *reinterpret_cast<_g4_t_v1061 *>(_g4_sf + 804u);
  _g4_t_v1062 &v1062 = *reinterpret_cast<_g4_t_v1062 *>(_g4_sf + 808u);
  _g4_t_v1063 &v1063 = *reinterpret_cast<_g4_t_v1063 *>(_g4_sf + 812u);
  _g4_t_v1064 &v1064 = *reinterpret_cast<_g4_t_v1064 *>(_g4_sf + 816u);
  _g4_t_v1065 &v1065 = *reinterpret_cast<_g4_t_v1065 *>(_g4_sf + 820u);
  _g4_t_v1066 &v1066 = *reinterpret_cast<_g4_t_v1066 *>(_g4_sf + 824u);
  _g4_t_v1067 &v1067 = *reinterpret_cast<_g4_t_v1067 *>(_g4_sf + 828u);
  _g4_t_v1068 &v1068 = *reinterpret_cast<_g4_t_v1068 *>(_g4_sf + 832u);
  _g4_t_v1069 &v1069 = *reinterpret_cast<_g4_t_v1069 *>(_g4_sf + 836u);
  _g4_t_v1070 &v1070 = *reinterpret_cast<_g4_t_v1070 *>(_g4_sf + 840u);
  _g4_t_v1071 &v1071 = *reinterpret_cast<_g4_t_v1071 *>(_g4_sf + 844u);
  _g4_t_v1072 &v1072 = *reinterpret_cast<_g4_t_v1072 *>(_g4_sf + 848u);
  _g4_t_v1073 &v1073 = *reinterpret_cast<_g4_t_v1073 *>(_g4_sf + 852u);
  _g4_t_v1074 &v1074 = *reinterpret_cast<_g4_t_v1074 *>(_g4_sf + 856u);
  _g4_t_v1075 &v1075 = *reinterpret_cast<_g4_t_v1075 *>(_g4_sf + 860u);
  _g4_t_v1076 &v1076 = *reinterpret_cast<_g4_t_v1076 *>(_g4_sf + 864u);
  _g4_t_v1077 &v1077 = *reinterpret_cast<_g4_t_v1077 *>(_g4_sf + 868u);
  _g4_t_v1078 &v1078 = *reinterpret_cast<_g4_t_v1078 *>(_g4_sf + 872u);
  _g4_t_v1079 &v1079 = *reinterpret_cast<_g4_t_v1079 *>(_g4_sf + 876u);
  _g4_t_v1080 &v1080 = *reinterpret_cast<_g4_t_v1080 *>(_g4_sf + 880u);
  _g4_t_v1081 &v1081 = *reinterpret_cast<_g4_t_v1081 *>(_g4_sf + 884u);
  _g4_t_v1082 &v1082 = *reinterpret_cast<_g4_t_v1082 *>(_g4_sf + 888u);
  _g4_t_v1083 &v1083 = *reinterpret_cast<_g4_t_v1083 *>(_g4_sf + 892u);
  _g4_t_v1084 &v1084 = *reinterpret_cast<_g4_t_v1084 *>(_g4_sf + 896u);
  _g4_t_v1085 &v1085 = *reinterpret_cast<_g4_t_v1085 *>(_g4_sf + 900u);
  _g4_t_v1086 &v1086 = *reinterpret_cast<_g4_t_v1086 *>(_g4_sf + 904u);
  _g4_t_v1087 &v1087 = *reinterpret_cast<_g4_t_v1087 *>(_g4_sf + 908u);
  _g4_t_v1088 &v1088 = *reinterpret_cast<_g4_t_v1088 *>(_g4_sf + 912u);
  _g4_t_v1089 &v1089 = *reinterpret_cast<_g4_t_v1089 *>(_g4_sf + 916u);
  _g4_t_v1090 &v1090 = *reinterpret_cast<_g4_t_v1090 *>(_g4_sf + 920u);
  _g4_t_v1091 &v1091 = *reinterpret_cast<_g4_t_v1091 *>(_g4_sf + 924u);
  _g4_t_v1092 &v1092 = *reinterpret_cast<_g4_t_v1092 *>(_g4_sf + 928u);
  _g4_t_v1093 &v1093 = *reinterpret_cast<_g4_t_v1093 *>(_g4_sf + 932u);
  _g4_t_v1094 &v1094 = *reinterpret_cast<_g4_t_v1094 *>(_g4_sf + 936u);
  _g4_t_v1095 &v1095 = *reinterpret_cast<_g4_t_v1095 *>(_g4_sf + 940u);
  _g4_t_v1096 &v1096 = *reinterpret_cast<_g4_t_v1096 *>(_g4_sf + 944u);
  _g4_t_v1097 &v1097 = *reinterpret_cast<_g4_t_v1097 *>(_g4_sf + 948u);
  _g4_t_v1098 &v1098 = *reinterpret_cast<_g4_t_v1098 *>(_g4_sf + 952u);
  _g4_t_v1099 &v1099 = *reinterpret_cast<_g4_t_v1099 *>(_g4_sf + 956u);
  _g4_t_v1100 &v1100 = *reinterpret_cast<_g4_t_v1100 *>(_g4_sf + 960u);
  _g4_t_v1101 &v1101 = *reinterpret_cast<_g4_t_v1101 *>(_g4_sf + 964u);
  _g4_t_v1102 &v1102 = *reinterpret_cast<_g4_t_v1102 *>(_g4_sf + 968u);
  _g4_t_v1103 &v1103 = *reinterpret_cast<_g4_t_v1103 *>(_g4_sf + 972u);
  _g4_t_v1104 &v1104 = *reinterpret_cast<_g4_t_v1104 *>(_g4_sf + 976u);
  _g4_t_v1105 &v1105 = *reinterpret_cast<_g4_t_v1105 *>(_g4_sf + 980u);
  _g4_t_v1106 &v1106 = *reinterpret_cast<_g4_t_v1106 *>(_g4_sf + 984u);
  _g4_t_v1107 &v1107 = *reinterpret_cast<_g4_t_v1107 *>(_g4_sf + 988u);
  _g4_t_v1108 &v1108 = *reinterpret_cast<_g4_t_v1108 *>(_g4_sf + 992u);
  _g4_t_v1109 &v1109 = *reinterpret_cast<_g4_t_v1109 *>(_g4_sf + 996u);
  _g4_t_v1110 &v1110 = *reinterpret_cast<_g4_t_v1110 *>(_g4_sf + 1000u);
  _g4_t_v1111 &v1111 = *reinterpret_cast<_g4_t_v1111 *>(_g4_sf + 1004u);

  Matches = (Json::Value::Self *)-1996;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v892), (char *)&unk_1B15112, (int)(uintptr_t)(&v890));
  v3 = a3[2];
  if ( v3 == 3509 )
  {
    v351 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "unsubscribe");
    v352 = Json::Value::asBool(v351);
    v612 = (Json::Value::Self *)(a3 + 3);
    if ( v352 != 0 )
    {
      v353 = (int)(uintptr_t)(Json::Value::opIndex(v612, "listName"));
      Json::Value::asString((Json::Value::Self *)&v976, v353);
      v354 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
      v355 = Json::Value::asInt(v354);
      Instance = gaia::Gaia::GetInstance();
      LOBYTE(v357) = gaia::Gaia_Hermes::UnSubscribeFromList(*(gaia::Gaia::Self **)(Instance + 572), v355, &v976, 0, 0, 0);
      Matches = v357;
      g4_std::string::Destroy(&v976);
    }
    else
    {
      v598 = (int)(uintptr_t)(Json::Value::opIndex(v612, "listName"));
      Json::Value::asString((Json::Value::Self *)&v977, v598);
      v599 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
      v600 = Json::Value::asInt(v599);
      v601 = gaia::Gaia::GetInstance();
      LOBYTE(v602) = gaia::Gaia_Hermes::SubscribeToList(*(gaia::Gaia::Self **)(v601 + 572), v600, &v977, 0, 0, 0);
      Matches = v602;
      g4_std::string::Destroy(&v977);
    }
  }
  else if ( v3 <= 3509 )
  {
    if ( v3 == 2005 )
    {
      v358 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "offset");
      v681 = (Json::Value::Self *)Json::Value::asInt(v358);
      v359 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "limit");
      v741 = (Json::Value::Self *)Json::Value::asInt(v359);
      v360 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "isAscendent");
      v801 = Json::Value::asBool(v360);
      v843 = (Json::Value::Self *)a3[7];
      v361 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "leaderboard_name"));
      Json::Value::asString((Json::Value::Self *)&v979, v361);
      v362 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
      v363 = Json::Value::asInt(v362);
      v364 = gaia::Gaia::GetInstance();
      Matches = (Json::Value::Self *)gaia::Gaia_Olympus::RetrieveFriendLeaderboard(
                                 *(gaia::Gaia::Self **)(v364 + 576),
                                 v363,
                                 &v979,
                                 (int)(uintptr_t)(v843),
                                 v801,
                                 (int)(uintptr_t)(v741),
                                 (int)(uintptr_t)(v681),
                                 0,
                                 0,
                                 0);
      g4_std::string::Destroy(&v979);
    }
    else if ( v3 <= 2005 )
    {
      if ( v3 == 1014 )
      {
        v629 = (Json::Value::Self *)a3[7];
        v190 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
        v191 = Json::Value::asInt(v190);
        v192 = gaia::Gaia::GetInstance();
        Matches = (Json::Value::Self *)gaia::Gaia_Seshat::ListMatchers(
                                   *(gaia::Gaia_Seshat::Self **)(v192 + 568),
                                   v191,
                                   v629,
                                   0,
                                   0,
                                   0);
      }
      else if ( v3 <= 1014 )
      {
        if ( v3 == 1005 )
        {
          v76 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "visibility");
          v709 = (Json::Value::Self *)Json::Value::asInt(v76);
          v77 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "forUsername"));
          Json::Value::asString((Json::Value::Self *)&v939, v77);
          v78 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "forCredentials");
          v774 = (gaia::Gaia::Self *)Json::Value::asInt(v78);
          v79 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
          v825 = (Json::Value::Self *)Json::Value::asInt(v79);
          v80 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "data"));
          Json::Value::asString((Json::Value::Self *)&v938, v80);
          v81 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "Etag"));
          Json::Value::asString((Json::Value::Self *)&v937, v81);
          v82 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "key"));
          Json::Value::asString((Json::Value::Self *)&v936, v82);
          v861 = gaia::Gaia::GetInstance();
          LOBYTE(v83) = gaia::Gaia_Seshat::PutDataCheckEtag(
                          *(gaia::Gaia::Self **)(v861 + 568),
                          &v936,
                          &v937,
                          &v938,
                          (int)(uintptr_t)(v825),
                          (int)(uintptr_t)(v774),
                          &v939,
                          (int)(uintptr_t)(v709),
                          0,
                          0,
                          0);
          Matches = v83;
          g4_std::string::Destroy(&v936);
          g4_std::string::Destroy(&v937);
          g4_std::string::Destroy(&v938);
          g4_std::string::Destroy(&v939);
        }
        else if ( v3 > 1005 )
        {
          if ( v3 == 1009 )
          {
            v344 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
            v345 = Json::Value::asInt(v344);
            v346 = gaia::Gaia::GetInstance();
            Matches = (Json::Value::Self *)gaia::Gaia_Seshat::DeleteProfile(*(gaia::Gaia::Self **)(v346 + 568), v345, 0, 0, 0);
          }
          else if ( v3 > 1009 )
          {
            if ( v3 == 1012 )
            {
              v742 = (Json::Value::Self *)a3[8];
              v380 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "limit");
              v802 = (gaia::Gaia::Self *)Json::Value::asUInt(v380);
              v381 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "include_fields"));
              Json::Value::asString((Json::Value::Self *)&v962, v381);
              v382 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "matcherName"));
              Json::Value::asString((Json::Value::Self *)&v961, v382);
              v844 = (Json::Value::Self *)a3[7];
              v383 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
              v872 = Json::Value::asInt(v383);
              v384 = gaia::Gaia::GetInstance();
              Matches = (Json::Value::Self *)gaia::Gaia_Seshat::GetMatches(
                                         *(gaia::Gaia::Self **)(v384 + 568),
                                         v872,
                                         (int)(uintptr_t)(v844),
                                         &v961,
                                         &v962,
                                         (unsigned int)(uintptr_t)(v802),
                                         (int)(uintptr_t)(v742),
                                         0,
                                         0,
                                         0);
              g4_std::string::Destroy(&v961);
              g4_std::string::Destroy(&v962);
            }
            else if ( v3 > 1012 )
            {
              v385 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "matcherName"));
              Json::Value::asString((Json::Value::Self *)&v963, v385);
              v386 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
              v642 = (Json::Value::Self *)Json::Value::asInt(v386);
              v387 = gaia::Gaia::GetInstance();
              LOBYTE(v388) = gaia::Gaia_Seshat::DeleteMatcher(*(gaia::Gaia::Self **)(v387 + 568), (int)(uintptr_t)(v642), &v963, 0, 0, 0);
              Matches = v388;
              g4_std::string::Destroy(&v963);
            }
            else if ( v3 == 1011 )
            {
              v375 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "condition"));
              Json::Value::asString((Json::Value::Self *)&v960, v375);
              v376 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "matcherName"));
              Json::Value::asString((Json::Value::Self *)&v959, v376);
              v377 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
              v641 = (Json::Value::Self *)Json::Value::asInt(v377);
              v378 = gaia::Gaia::GetInstance();
              LOBYTE(v379) = gaia::Gaia_Seshat::CreateMatcher(
                               *(gaia::Gaia::Self **)(v378 + 568),
                               (int)(uintptr_t)(v641),
                               &v959,
                               &v960,
                               0,
                               0,
                               0);
              Matches = v379;
              g4_std::string::Destroy(&v959);
              g4_std::string::Destroy(&v960);
            }
          }
          else if ( v3 == 1007 )
          {
            v338 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "operation"));
            Json::Value::asString((Json::Value::Self *)&v953, v338);
            v339 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "selector"));
            Json::Value::asString((Json::Value::Self *)&v952, v339);
            v340 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "forCredential"));
            Json::Value::asString((Json::Value::Self *)&v951, v340);
            v341 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "visibility");
            v739 = (Json::Value::Self *)Json::Value::asInt(v341);
            v800 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "profile");
            v342 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
            v842 = (Json::Value::Self *)Json::Value::asInt(v342);
            v343 = gaia::Gaia::GetInstance();
            Matches = (Json::Value::Self *)gaia::Gaia_Seshat::SetProfile(
                                       a1,
                                       *(gaia::Gaia::Self **)(v343 + 568),
                                       (int)(uintptr_t)(v842),
                                       v800,
                                       (int)(uintptr_t)(v739),
                                       &v951,
                                       &v952,
                                       &v953,
                                       0,
                                       0,
                                       0);
            g4_std::string::Destroy(&v951);
            g4_std::string::Destroy(&v952);
            g4_std::string::Destroy(&v953);
          }
          else if ( v3 <= 1007 )
          {
            v333 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "forUsername"));
            Json::Value::asString((Json::Value::Self *)&v942, v333);
            v334 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "forCredentials");
            v738 = (Json::Value::Self *)Json::Value::asInt(v334);
            v335 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
            v799 = (gaia::Gaia::Self *)Json::Value::asInt(v335);
            v841 = (Json::Value::Self *)a3[16];
            v871 = a3[15];
            v336 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "Etag"));
            Json::Value::asString((Json::Value::Self *)&v941, v336);
            v337 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "key"));
            Json::Value::asString((Json::Value::Self *)&v940, v337);
            v883 = gaia::Gaia::GetInstance();
            Matches = (Json::Value::Self *)gaia::Gaia_Seshat::GetDataCheckEtag(
                                       *(gaia::Gaia::Self **)(v883 + 568),
                                       &v940,
                                       &v941,
                                       v871,
                                       (int)(uintptr_t)(v841),
                                       (int)(uintptr_t)(v799),
                                       (int)(uintptr_t)(v738),
                                       &v942,
                                       0,
                                       0,
                                       0);
            g4_std::string::Destroy(&v940);
            g4_std::string::Destroy(&v941);
            g4_std::string::Destroy(&v942);
          }
          else
          {
            v69 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "selector"));
            Json::Value::asString((Json::Value::Self *)&v956, v69);
            v70 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "include_fields"));
            Json::Value::asString((Json::Value::Self *)&v955, v70);
            v71 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "forCredential"));
            Json::Value::asString((Json::Value::Self *)&v954, v71);
            v708 = (Json::Value::Self *)a3[7];
            v72 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
            v773 = (gaia::Gaia::Self *)Json::Value::asInt(v72);
            v73 = gaia::Gaia::GetInstance();
            Matches = (Json::Value::Self *)gaia::Gaia_Seshat::GetProfile(
                                       *(gaia::Gaia::Self **)(v73 + 568),
                                       (int)(uintptr_t)(v773),
                                       (int)(uintptr_t)(v708),
                                       &v954,
                                       &v955,
                                       &v956,
                                       0,
                                       0,
                                       0);
            g4_std::string::Destroy(&v954);
            g4_std::string::Destroy(&v955);
            g4_std::string::Destroy(&v956);
          }
        }
        else if ( v3 == 1001 )
        {
          v119 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "visibility");
          v714 = (Json::Value::Self *)Json::Value::asInt(v119);
          v120 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "forUsername"));
          Json::Value::asString((Json::Value::Self *)&v945, v120);
          v121 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "forCredentials");
          v779 = (gaia::Gaia::Self *)Json::Value::asInt(v121);
          v122 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
          v828 = (Json::Value::Self *)Json::Value::asInt(v122);
          v123 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "data"));
          Json::Value::asString((Json::Value::Self *)&v944, v123);
          v124 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "key"));
          Json::Value::asString((Json::Value::Self *)&v943, v124);
          v862 = gaia::Gaia::GetInstance();
          LOBYTE(v125) = gaia::Gaia_Seshat::PutData(
                           *(gaia::Gaia::Self **)(v862 + 568),
                           &v943,
                           &v944,
                           (int)(uintptr_t)(v828),
                           (int)(uintptr_t)(v779),
                           &v945,
                           (int)(uintptr_t)(v714),
                           0,
                           0,
                           0);
          Matches = v125;
          g4_std::string::Destroy(&v943);
          g4_std::string::Destroy(&v944);
          g4_std::string::Destroy(&v945);
        }
        else if ( v3 > 1001 )
        {
          if ( v3 == 1003 )
          {
            v491 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "forUsername"));
            Json::Value::asString((Json::Value::Self *)&v949, v491);
            v492 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "forCredentials");
            v689 = (Json::Value::Self *)Json::Value::asInt(v492);
            v493 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
            v753 = (Json::Value::Self *)Json::Value::asInt(v493);
            v811 = (int *)a3[16];
            v850 = (void **)a3[15];
            v494 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "key"));
            Json::Value::asString((Json::Value::Self *)&v948, v494);
            v495 = gaia::Gaia::GetInstance();
            LOBYTE(v496) = gaia::Gaia_Seshat::DeprecatedGetData(
                             *(gaia::Gaia::Self **)(v495 + 568),
                             &v948,
                             v850,
                             v811,
                             (int)(uintptr_t)(v753),
                             (int)(uintptr_t)(v689),
                             &v949,
                             0,
                             0,
                             0);
            Matches = v496;
            g4_std::string::Destroy(&v948);
            g4_std::string::Destroy(&v949);
          }
          else if ( v3 <= 1003 )
          {
            v754 = (void **)a3[15];
            v690 = (int *)a3[16];
            v497 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "janusToken"));
            Json::Value::asString((Json::Value::Self *)&v947, v497);
            v498 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "key"));
            Json::Value::asString((Json::Value::Self *)&v946, v498);
            v499 = gaia::Gaia::GetInstance();
            Matches = gaia::Gaia_Seshat::GetData(*(gaia::Gaia_Seshat::Self **)(v499 + 568), &v946, &v947, v754, v690, 0, 0, 0);
            g4_std::string::Destroy(&v946);
            g4_std::string::Destroy(&v947);
          }
          else
          {
            v487 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
            v655 = (Json::Value::Self *)Json::Value::asInt(v487);
            v488 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "key"));
            Json::Value::asString((Json::Value::Self *)&v950, v488);
            v489 = gaia::Gaia::GetInstance();
            LOBYTE(v490) = gaia::Gaia_Seshat::DeleteData(*(gaia::Gaia::Self **)(v489 + 568), &v950, (int)(uintptr_t)(v655), 0, 0, 0);
            Matches = v490;
            g4_std::string::Destroy(&v950);
          }
        }
        else if ( v3 == 501 )
        {
          v184 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "clientID"));
          Json::Value::asString((Json::Value::Self *)&v932, v184);
          v185 = (gaia::Gaia::Self *)gaia::Gaia::GetInstance();
          Matches = gaia::Gaia::InternalInitialize(v185, &v932, (int)(uintptr_t)(&v892), 0, 0, 0);
          g4_std::string::Destroy(&v932);
        }
        else if ( v3 == 502 )
        {
          v24 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "dataCenterCountry"));
          Json::Value::asString((Json::Value::Self *)&v935, v24);
          v25 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "dataCenterName"));
          Json::Value::asString((Json::Value::Self *)&v934, v25);
          v26 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "clientID"));
          Json::Value::asString((Json::Value::Self *)&v933, v26);
          v27 = (gaia::BaseServiceManager::Self ***)gaia::Gaia::GetInstance();
          Matches = gaia::Gaia::InternalInitialize(v27, &v933, &v934, &v935, (int)(uintptr_t)(&v892), 0, 0, 0);
          g4_std::string::Destroy(&v933);
          g4_std::string::Destroy(&v934);
          g4_std::string::Destroy(&v935);
        }
      }
      else if ( v3 == 1023 )
      {
        v135 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "newProfileField");
        gaia::Gaia::GetInstance();
        StandardUserProfile = (gaia::UserProfile::Self *)gaia::Gaia_Seshat::GetStandardUserProfile();
        Matches = (Json::Value::Self *)gaia::UserProfile::SetProfileField(StandardUserProfile, v135, 4, 0, 0, 0);
      }
      else if ( v3 > 1023 )
      {
        if ( v3 == 2001 )
        {
          v195 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "for_entry_id"));
          Json::Value::asString((Json::Value::Self *)&v996, v195);
          v196 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "limit");
          v722 = (Json::Value::Self *)Json::Value::asInt(v196);
          v197 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "offset");
          v786 = (gaia::Gaia::Self *)Json::Value::asInt(v197);
          v198 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "isAscendent");
          v832 = Json::Value::asBool(v198);
          v864 = a3[7];
          v199 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "leaderboard_name"));
          Json::Value::asString((Json::Value::Self *)&v995, v199);
          v200 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
          v880 = Json::Value::asInt(v200);
          v201 = gaia::Gaia::GetInstance();
          Matches = (Json::Value::Self *)gaia::Gaia_Olympus::RetriveTopOfLeaderboard(
                                     *(gaia::Gaia::Self **)(v201 + 576),
                                     v880,
                                     &v995,
                                     v864,
                                     v832,
                                     (int)(uintptr_t)(v786),
                                     (int)(uintptr_t)(v722),
                                     &v996,
                                     0,
                                     0,
                                     0);
          g4_std::string::Destroy(&v995);
          g4_std::string::Destroy(&v996);
        }
        else if ( v3 > 2001 )
        {
          if ( v3 == 2003 )
          {
            v560 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "limit");
            v698 = (Json::Value::Self *)Json::Value::asInt(v560);
            v561 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "isAscendent");
            v761 = Json::Value::asBool(v561);
            v817 = (gaia::Gaia::Self *)a3[7];
            v562 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "leaderboard_name"));
            Json::Value::asString((Json::Value::Self *)&v978, v562);
            v563 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
            v564 = Json::Value::asInt(v563);
            v565 = gaia::Gaia::GetInstance();
            Matches = (Json::Value::Self *)gaia::Gaia_Olympus::RetrieveLeaderboardAroundCurrentUser(
                                       *(gaia::Gaia::Self **)(v565 + 576),
                                       v564,
                                       &v978,
                                       (int)(uintptr_t)(v817),
                                       v761,
                                       (int)(uintptr_t)(v698),
                                       0,
                                       0,
                                       0);
            g4_std::string::Destroy(&v978);
          }
          else if ( v3 <= 2003 )
          {
            v566 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "limit");
            v762 = (Json::Value::Self *)Json::Value::asInt(v566);
            v567 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "isAscendent");
            v818 = Json::Value::asBool(v567);
            v568 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "entry_name"));
            Json::Value::asString((Json::Value::Self *)&v993, v568);
            v855 = (Json::Value::Self *)a3[7];
            v569 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "leaderboard_name"));
            Json::Value::asString((Json::Value::Self *)&v992, v569);
            v570 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
            v876 = Json::Value::asInt(v570);
            v571 = gaia::Gaia::GetInstance();
            Matches = (Json::Value::Self *)gaia::Gaia_Olympus::RetrieveLeaderboardAroundArbitraryEntry(
                                       *(gaia::Gaia::Self **)(v571 + 576),
                                       v876,
                                       &v992,
                                       (int)(uintptr_t)(v855),
                                       &v993,
                                       v818,
                                       (int)(uintptr_t)(v762),
                                       0,
                                       0,
                                       0);
            g4_std::string::Destroy(&v992);
            g4_std::string::Destroy(&v993);
          }
          else
          {
            v557 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "leaderboard_name"));
            Json::Value::asString((Json::Value::Self *)&v994, v557);
            v558 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
            v661 = (Json::Value::Self *)Json::Value::asInt(v558);
            v559 = gaia::Gaia::GetInstance();
            Matches = (Json::Value::Self *)gaia::Gaia_Olympus::ClearLeaderboard(
                                       *(gaia::Gaia::Self **)(v559 + 576),
                                       (int)(uintptr_t)(v661),
                                       &v994,
                                       0,
                                       0,
                                       0);
            g4_std::string::Destroy(&v994);
          }
        }
        else if ( v3 == 1025 )
        {
          gaia::Gaia::GetInstance();
          v194 = (gaia::UserProfile::Self *)gaia::Gaia_Seshat::GetStandardUserProfile();
          Matches = (Json::Value::Self *)gaia::UserProfile::DeleteProfile(v194, 0, 0, 0);
        }
        else if ( v3 < 1025 )
        {
          gaia::Gaia::GetInstance();
          v193 = (gaia::UserProfile::Self *)gaia::Gaia_Seshat::GetStandardUserProfile();
          Matches = (Json::Value::Self *)gaia::UserProfile::DeleteCustomFields(v193, 0, 0, 0);
        }
        else if ( v3 == 1026 )
        {
          gaia::Gaia::GetInstance();
          v46 = (gaia::UserProfile::Self *)gaia::Gaia_Seshat::GetStandardUserProfile();
          Matches = (Json::Value::Self *)gaia::UserProfile::RefreshProfile(v46, 0, 0, 0);
        }
      }
      else if ( v3 == 1018 )
      {
        v137 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "include_fields"));
        Json::Value::asString((Json::Value::Self *)&v958, v137);
        v138 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "credentials"));
        Json::Value::asString((Json::Value::Self *)&v957, v138);
        v716 = (Json::Value::Self *)a3[7];
        v139 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
        v781 = (gaia::Gaia::Self *)Json::Value::asInt(v139);
        v140 = gaia::Gaia::GetInstance();
        Matches = (Json::Value::Self *)gaia::Gaia_Seshat::GetBatchProfiles(
                                   *(gaia::Gaia::Self **)(v140 + 568),
                                   (int)(uintptr_t)(v781),
                                   (int)(uintptr_t)(v716),
                                   &v957,
                                   &v958,
                                   0,
                                   0,
                                   0);
        g4_std::string::Destroy(&v957);
        g4_std::string::Destroy(&v958);
      }
      else if ( v3 > 1018 )
      {
        if ( v3 == 1021 )
        {
          v503 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "selector"));
          Json::Value::asString((Json::Value::Self *)&v964, v503);
          v504 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "visibility");
          v691 = (Json::Value::Self *)Json::Value::asInt(v504);
          v656 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "newProfile");
          gaia::Gaia::GetInstance();
          v505 = (gaia::UserProfile::Self *)gaia::Gaia_Seshat::GetStandardUserProfile();
          Matches = (Json::Value::Self *)gaia::UserProfile::UpdateProfile(v505, v656, 0, 0, 0, (int)(uintptr_t)(v691), (int)(uintptr_t)(&v964));
          g4_std::string::Destroy(&v964);
        }
        else if ( v3 > 1021 )
        {
          v506 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "selector"));
          Json::Value::asString((Json::Value::Self *)&v965, v506);
          v507 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "visibility");
          v692 = (Json::Value::Self *)Json::Value::asInt(v507);
          v657 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "newProfile");
          gaia::Gaia::GetInstance();
          v508 = (gaia::UserProfile::Self *)gaia::Gaia_Seshat::GetStandardUserProfile();
          Matches = (Json::Value::Self *)gaia::UserProfile::MergeProfile(v508, v657, 0, 0, 0, (int)(uintptr_t)(v692), (int)(uintptr_t)(&v965));
          g4_std::string::Destroy(&v965);
        }
        else if ( v3 == 1020 )
        {
          v500 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
          v501 = Json::Value::asInt(v500);
          gaia::Gaia::GetInstance();
          v502 = (gaia::UserProfile::Self *)gaia::Gaia_Seshat::GetStandardUserProfile();
          Matches = (Json::Value::Self *)gaia::UserProfile::Initialize(v502, v501, 0, 0, 0);
        }
      }
      else if ( v3 == 1016 )
      {
        v636 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "visibility");
        v679 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "selector");
        v317 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
        v318 = Json::Value::asInt(v317);
        v319 = gaia::Gaia::GetInstance();
        Matches = (Json::Value::Self *)gaia::Gaia_Seshat::SetProfileVisibilitySelector(
                                   a1,
                                   *(gaia::Gaia::Self **)(v319 + 568),
                                   v318,
                                   v679,
                                   v636,
                                   0,
                                   0,
                                   0);
      }
      else if ( v3 <= 1016 )
      {
        v635 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "visibility");
        v314 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
        v315 = Json::Value::asInt(v314);
        v316 = gaia::Gaia::GetInstance();
        Matches = (Json::Value::Self *)gaia::Gaia_Seshat::SetProfileVisibility(
                                   a1,
                                   *(gaia::Gaia::Self **)(v316 + 568),
                                   v315,
                                   v635,
                                   0,
                                   0,
                                   0);
      }
      else
      {
        v614 = (Json::Value::Self *)a3[7];
        v18 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
        v19 = Json::Value::asInt(v18);
        v20 = gaia::Gaia::GetInstance();
        Matches = (Json::Value::Self *)gaia::Gaia_Seshat::GetProfileVisibility(
                                   *(gaia::Gaia::Self **)(v20 + 568),
                                   v19,
                                   (int)(uintptr_t)(v614),
                                   0,
                                   0,
                                   0);
      }
    }
    else if ( v3 == 2516 )
    {
      v179 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "scopes"));
      Json::Value::asString((Json::Value::Self *)&v917, v179);
      v180 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "credentialsToLinkTo");
      v674 = (Json::Value::Self *)Json::Value::asInt(v180);
      v181 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
      v720 = (Json::Value::Self *)Json::Value::asInt(v181);
      v182 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "username"));
      Json::Value::asString((Json::Value::Self *)&v916, v182);
      v183 = gaia::Gaia::GetInstance();
      Matches = (Json::Value::Self *)gaia::Gaia::AddPermission(v183, (uint32_t *)(&v916), (int)(uintptr_t)(v720), (int)(uintptr_t)(v674), &v917, 0, 0, 0);
      g4_std::string::Destroy(&v916);
      g4_std::string::Destroy(&v917);
    }
    else if ( v3 > 2516 )
    {
      if ( v3 == 3501 )
      {
        v167 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "transport");
        v673 = (Json::Value::Self *)Json::Value::asInt(v167);
        v168 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "endpoint"));
        Json::Value::asString((Json::Value::Self *)&v966, v168);
        v169 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
        v627 = (Json::Value::Self *)Json::Value::asInt(v169);
        v170 = gaia::Gaia::GetInstance();
        Matches = (Json::Value::Self *)gaia::Gaia_Hermes::RegisterEndpoint(
                                   *(gaia::Gaia::Self **)(v170 + 572),
                                   (int)(uintptr_t)(v627),
                                   &v966,
                                   (int)(uintptr_t)(v673),
                                   0,
                                   0,
                                   0);
        g4_std::string::Destroy(&v966);
      }
      else if ( v3 > 3501 )
      {
        if ( v3 == 3505 )
        {
          v234 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "deleteAfterRetrieval");
          v726 = Json::Value::asBool(v234);
          v632 = (Json::Value::Self *)a3[7];
          v235 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "forTransport");
          v789 = (gaia::Gaia::Self *)Json::Value::asInt(v235);
          v236 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
          v237 = Json::Value::asInt(v236);
          v238 = gaia::Gaia::GetInstance();
          Matches = (Json::Value::Self *)gaia::Gaia_Hermes::RetrieveMessages(
                                     *(gaia::Gaia::Self **)(v238 + 572),
                                     v237,
                                     (int)(uintptr_t)(v789),
                                     (int)(uintptr_t)(v632),
                                     v726,
                                     0,
                                     0,
                                     0);
        }
        else if ( v3 > 3505 )
        {
          if ( v3 == 3507 )
          {
            v531 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "msgid"));
            Json::Value::asString((Json::Value::Self *)&v974, v531);
            v532 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "forTransport");
            v695 = (Json::Value::Self *)Json::Value::asInt(v532);
            v533 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
            v659 = (Json::Value::Self *)Json::Value::asInt(v533);
            v534 = gaia::Gaia::GetInstance();
            LOBYTE(v535) = gaia::Gaia_Hermes::DeleteMessage(
                             *(gaia::Gaia::Self **)(v534 + 572),
                             (int)(uintptr_t)(v659),
                             (int)(uintptr_t)(v695),
                             &v974,
                             0,
                             0,
                             0);
            Matches = v535;
            g4_std::string::Destroy(&v974);
          }
          else if ( v3 <= 3507 )
          {
            v536 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "deleteAfterRetrieval");
            v758 = Json::Value::asBool(v536);
            v814 = (gaia::Gaia::Self *)a3[7];
            v537 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "msgid"));
            Json::Value::asString((Json::Value::Self *)&v973, v537);
            v538 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "forTransport");
            v853 = (Json::Value::Self *)Json::Value::asInt(v538);
            v539 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
            v540 = Json::Value::asInt(v539);
            v541 = gaia::Gaia::GetInstance();
            Matches = (Json::Value::Self *)gaia::Gaia_Hermes::RetrieveMessage(
                                       *(gaia::Gaia::Self **)(v541 + 572),
                                       v540,
                                       (int)(uintptr_t)(v853),
                                       &v973,
                                       (int)(uintptr_t)(v814),
                                       v758,
                                       0,
                                       0,
                                       0);
            g4_std::string::Destroy(&v973);
          }
          else
          {
            v527 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "msgids"));
            Json::Value::asString((Json::Value::Self *)&v975, v527);
            v528 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "forTransport");
            v694 = (Json::Value::Self *)Json::Value::asInt(v528);
            v529 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
            v658 = (Json::Value::Self *)Json::Value::asInt(v529);
            v530 = gaia::Gaia::GetInstance();
            Matches = (Json::Value::Self *)gaia::Gaia_Hermes::DeleteAllMessages(
                                       *(gaia::Gaia::Self **)(v530 + 572),
                                       (int)(uintptr_t)(v658),
                                       (int)(uintptr_t)(v694),
                                       &v975,
                                       0,
                                       0,
                                       0);
            g4_std::string::Destroy(&v975);
          }
        }
        else if ( v3 == 3503 )
        {
          v224 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "alert_kairos");
          v725 = Json::Value::asBool(v224);
          v225 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "payload"));
          Json::Value::asString((Json::Value::Self *)&v970, v225);
          v788 = *(gaia::Gaia::Self **)(v970 - 12);
          v226 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "payload"));
          Json::Value::asString((Json::Value::Self *)&v969, v226);
          v834 = (Json::Value::Self *)a3[15];
          v889 = v969;
          v227 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "delay");
          v866 = Json::Value::asInt(v227);
          v228 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "replace_label"));
          Json::Value::asString((Json::Value::Self *)&v968, v228);
          v229 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "receiver_credential_type");
          v882 = Json::Value::asInt(v229);
          v230 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "receiver_username"));
          Json::Value::asString((Json::Value::Self *)&v967, v230);
          v231 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "transport");
          v886 = Json::Value::asInt(v231);
          v232 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
          v888 = Json::Value::asInt(v232);
          v233 = gaia::Gaia::GetInstance();
          Matches = (Json::Value::Self *)gaia::Gaia_Hermes::SendMessageToUser(
                                     *(gaia::Gaia::Self **)(v233 + 572),
                                     v888,
                                     v886,
                                     &v967,
                                     v882,
                                     &v968,
                                     v866,
                                     (int)(uintptr_t)(v834),
                                     v889,
                                     (int)(uintptr_t)(v788),
                                     v725,
                                     0,
                                     0,
                                     0);
          g4_std::string::Destroy(&v967);
          g4_std::string::Destroy(&v968);
          g4_std::string::Destroy(&v969);
          g4_std::string::Destroy(&v970);
        }
        else if ( v3 <= 3503 )
        {
          v220 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "transport");
          v631 = (Json::Value::Self *)Json::Value::asInt(v220);
          v221 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
          v222 = Json::Value::asInt(v221);
          v223 = gaia::Gaia::GetInstance();
          Matches = (Json::Value::Self *)gaia::Gaia_Hermes::UnregisterDevices(
                                     *(gaia::Gaia::Self **)(v223 + 572),
                                     v222,
                                     (int)(uintptr_t)(v631),
                                     0,
                                     0,
                                     0);
        }
        else
        {
          v47 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "payload"));
          Json::Value::asString((Json::Value::Self *)&v972, v47);
          v704 = *(Json::Value::Self **)(v972 - 12);
          v48 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "payload"));
          Json::Value::asString((Json::Value::Self *)&v971, v48);
          v860 = v971;
          v770 = (gaia::Gaia::Self *)a3[15];
          v824 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "credentials");
          v49 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
          v878 = Json::Value::asInt(v49);
          v50 = gaia::Gaia::GetInstance();
          Matches = (Json::Value::Self *)gaia::Gaia_Hermes::SendMessageToMultipleUsers(
                                     a1,
                                     *(gaia::Gaia::Self **)(v50 + 572),
                                     v878,
                                     v824,
                                     (int)(uintptr_t)(v770),
                                     v860,
                                     (int)(uintptr_t)(v704),
                                     0,
                                     0,
                                     0);
          g4_std::string::Destroy(&v971);
          g4_std::string::Destroy(&v972);
        }
      }
      else if ( v3 == 2521 )
      {
        v164 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "alias"));
        Json::Value::asString((Json::Value::Self *)&v910, v164);
        v672 = (Json::Value::Self *)a3[15];
        v165 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
        v626 = (Json::Value::Self *)Json::Value::asInt(v165);
        v166 = gaia::Gaia::GetInstance();
        Matches = (Json::Value::Self *)gaia::Gaia::FindUserByAlias(v166, (int)(uintptr_t)(v626), (int)(uintptr_t)(v672), (uint32_t *)(&v910), 0, 0, 0);
        g4_std::string::Destroy(&v910);
      }
      else if ( v3 > 2521 )
      {
        switch ( v3 )
        {
          case 3002:
            v476 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "serviceName");
            v477 = (char *)Json::Value::asCString(v476);
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v893), v477, (int)(uintptr_t)(&v890) + 1);
            a3[2] = gaia::Pandora::GetOpCode(&v893);
            g4_std::string::Destroy(&v893);
            v478 = a3[15];
            v479 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "serviceName");
            v653 = (char *)Json::Value::asCString(v479);
            v480 = gaia::Gaia::GetInstance();
            Matches = (Json::Value::Self *)gaia::Gaia::GetServiceUrl(v480, v653, v478, 0, 0, 0);
            break;
          case 3003:
            v481 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "serviceName");
            v482 = (char *)Json::Value::asCString(v481);
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v894), v482, (int)(uintptr_t)(&v890) + 2);
            a3[2] = gaia::Pandora::GetOpCode(&v894);
            g4_std::string::Destroy(&v894);
            v752 = (Json::Value::Self *)a3[15];
            v483 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "serviceName");
            v654 = (char *)Json::Value::asCString(v483);
            v484 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
            v485 = Json::Value::asInt(v484);
            v486 = gaia::Gaia::GetInstance();
            Matches = (Json::Value::Self *)gaia::Gaia::GetServiceUrl(v486, v485, v654, (int)(uintptr_t)(v752), 0, 0, 0);
            break;
          case 3001:
            v474 = (int *)a3[15];
            v475 = gaia::Gaia::GetInstance();
            Matches = (Json::Value::Self *)gaia::Gaia::getServerTimeStamp(v475, v474, 0, 0, 0);
            break;
          default:
            break;
        }
      }
      else if ( v3 == 2519 )
      {
        v287 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "scope"));
        Json::Value::asString((Json::Value::Self *)&v922, v287);
        v288 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "refresh_token"));
        Json::Value::asString((Json::Value::Self *)&v921, v288);
        v289 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "grant_type"));
        Json::Value::asString((Json::Value::Self *)&v920, v289);
        v732 = (Json::Value::Self *)a3[15];
        v290 = gaia::Gaia::GetInstance();
        Matches = (Json::Value::Self *)gaia::Gaia::RefreshAccessToken(v290, (int)(uintptr_t)(v732), (uint32_t *)(&v920), (uint32_t *)(&v921), (uint32_t *)(&v922), 0, 0, 0);
        g4_std::string::Destroy(&v920);
        g4_std::string::Destroy(&v921);
        g4_std::string::Destroy(&v922);
      }
      else if ( v3 > 2519 )
      {
        v633 = (Json::Value::Self *)a3[15];
        v284 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
        v285 = Json::Value::asInt(v284);
        v286 = gaia::Gaia::GetInstance();
        Matches = (Json::Value::Self *)gaia::Gaia::AddAlias(v286, v285, (int)(uintptr_t)(v633), 0, 0, 0);
      }
      else if ( v3 == 2517 )
      {
        v664 = (int *)a3[16];
        v701 = (void **)a3[15];
        v21 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "nonce"));
        Json::Value::asString((Json::Value::Self *)&v919, v21);
        v22 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "token"));
        Json::Value::asString((Json::Value::Self *)&v918, v22);
        v23 = gaia::Gaia::GetInstance();
        Matches = (Json::Value::Self *)gaia::Gaia::EncryptToken(v23, (uint32_t *)(&v918), (uint32_t *)(&v919), v701, v664, 0, 0, 0);
        g4_std::string::Destroy(&v918);
        g4_std::string::Destroy(&v919);
      }
    }
    else if ( v3 == 2506 )
    {
      v713 = (Json::Value::Self *)a3[7];
      v107 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "password2"));
      Json::Value::asString((Json::Value::Self *)&v898, v107);
      v108 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "username2"));
      Json::Value::asString((Json::Value::Self *)&v897, v108);
      v109 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType2");
      v778 = (gaia::Gaia::Self *)Json::Value::asInt(v109);
      v110 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType1");
      v827 = (Json::Value::Self *)Json::Value::asInt(v110);
      v111 = gaia::Gaia::GetInstance();
      Matches = (Json::Value::Self *)gaia::Gaia_Janus::CheckForConflictingCredentials(
                                 *(gaia::Gaia_Janus::Self **)(v111 + 560),
                                 (int)(uintptr_t)(v827),
                                 (int)(uintptr_t)(v778),
                                 &v897,
                                 &v898,
                                 (int)(uintptr_t)(v713),
                                 0,
                                 0,
                                 0);
      g4_std::string::Destroy(&v897);
      g4_std::string::Destroy(&v898);
    }
    else if ( v3 > 2506 )
    {
      if ( v3 == 2511 )
      {
        v308 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "language"));
        Json::Value::asString((Json::Value::Self *)&v909, v308);
        v309 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "contact_address"));
        Json::Value::asString((Json::Value::Self *)&v908, v309);
        v310 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "password"));
        Json::Value::asString((Json::Value::Self *)&v907, v310);
        v311 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "credentialType");
        v735 = (Json::Value::Self *)Json::Value::asInt(v311);
        v312 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "username"));
        Json::Value::asString((Json::Value::Self *)&v906, v312);
        v313 = gaia::Gaia::GetInstance();
        Matches = (Json::Value::Self *)gaia::Gaia::CreateAccount(v313, (uint32_t *)(&v906), (int)(uintptr_t)(v735), &v907, &v908, &v909, 0, 0, 0);
        g4_std::string::Destroy(&v906);
        g4_std::string::Destroy(&v907);
        g4_std::string::Destroy(&v908);
        g4_std::string::Destroy(&v909);
      }
      else if ( v3 > 2511 )
      {
        if ( v3 == 2513 )
        {
          v401 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "if_exists"));
          Json::Value::asString((Json::Value::Self *)&v914, v401);
          v402 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "credentialsToLinkTo");
          v743 = (Json::Value::Self *)Json::Value::asInt(v402);
          v403 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "credential_type");
          v803 = (gaia::Gaia::Self *)Json::Value::asInt(v403);
          v404 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "password"));
          Json::Value::asString((Json::Value::Self *)&v913, v404);
          v405 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "username"));
          Json::Value::asString((Json::Value::Self *)&v912, v405);
          v406 = gaia::Gaia::GetInstance();
          Matches = (Json::Value::Self *)gaia::Gaia::AddCredential(v406, (uint32_t *)(&v912), &v913, (int)(uintptr_t)(v803), (int)(uintptr_t)(v743), &v914, 0, 0, 0);
          g4_std::string::Destroy(&v912);
          g4_std::string::Destroy(&v913);
          g4_std::string::Destroy(&v914);
        }
        else if ( v3 < 2513 )
        {
          v407 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
          v646 = (Json::Value::Self *)Json::Value::asInt(v407);
          v408 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "username"));
          Json::Value::asString((Json::Value::Self *)&v911, v408);
          v409 = gaia::Gaia::GetInstance();
          Matches = (Json::Value::Self *)gaia::Gaia::RetrievePassword(v409, (uint32_t *)(&v911), (int)(uintptr_t)(v646), 0, 0, 0);
          g4_std::string::Destroy(&v911);
        }
        else if ( v3 == 2515 )
        {
          v397 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "credential_username"));
          Json::Value::asString((Json::Value::Self *)&v915, v397);
          v398 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "credential_type");
          v684 = (Json::Value::Self *)Json::Value::asInt(v398);
          v399 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "account_type");
          v645 = (Json::Value::Self *)Json::Value::asInt(v399);
          v400 = gaia::Gaia::GetInstance();
          Matches = (Json::Value::Self *)gaia::Gaia_Janus::RemoveCredential(
                                     *(gaia::Gaia_Janus::Self **)(v400 + 560),
                                     (int)(uintptr_t)(v645),
                                     (int)(uintptr_t)(v684),
                                     &v915,
                                     0,
                                     0,
                                     0);
          g4_std::string::Destroy(&v915);
        }
      }
      else if ( v3 == 2508 )
      {
        v304 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "credentialType");
        v678 = (Json::Value::Self *)Json::Value::asInt(v304);
        v305 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "password"));
        Json::Value::asString((Json::Value::Self *)&v905, v305);
        v306 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "username"));
        Json::Value::asString((Json::Value::Self *)&v904, v306);
        v307 = gaia::Gaia::GetInstance();
        Matches = (Json::Value::Self *)gaia::Gaia::SendAuthentificate(v307, (uint32_t *)(&v904), &v905, (int)(uintptr_t)(v678), 0, 0, 0);
        g4_std::string::Destroy(&v904);
        g4_std::string::Destroy(&v905);
      }
      else if ( v3 < 2508 )
      {
        v734 = (Json::Value::Self *)a3[7];
        v300 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "password"));
        Json::Value::asString((Json::Value::Self *)&v896, v300);
        v301 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "username"));
        Json::Value::asString((Json::Value::Self *)&v895, v301);
        v302 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
        v796 = (gaia::Gaia::Self *)Json::Value::asInt(v302);
        v303 = gaia::Gaia::GetInstance();
        Matches = (Json::Value::Self *)gaia::Gaia_Janus::GetCredentialListForAccount(
                                   *(gaia::Gaia_Janus::Self **)(v303 + 560),
                                   (int)(uintptr_t)(v796),
                                   (const void **)&v895,
                                   &v896,
                                   (int)(uintptr_t)(v734),
                                   0,
                                   0,
                                   0);
        g4_std::string::Destroy(&v895);
        g4_std::string::Destroy(&v896);
      }
      else if ( v3 == 2509 )
      {
        v56 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "language"));
        Json::Value::asString((Json::Value::Self *)&v926, v56);
        v57 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "country"));
        Json::Value::asString((Json::Value::Self *)&v925, v57);
        v58 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "carrier"));
        Json::Value::asString((Json::Value::Self *)&v924, v58);
        v59 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "model"));
        Json::Value::asString((Json::Value::Self *)&v923, v59);
        v60 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
        v706 = (Json::Value::Self *)Json::Value::asInt(v60);
        v61 = gaia::Gaia::GetInstance();
        Matches = (Json::Value::Self *)gaia::Gaia::SetDeviceInfo(v61, (int)(uintptr_t)(v706), (uint32_t *)(&v923), &v924, &v925, &v926, 0, 0, 0);
        g4_std::string::Destroy(&v923);
        g4_std::string::Destroy(&v924);
        g4_std::string::Destroy(&v925);
        g4_std::string::Destroy(&v926);
      }
    }
    else if ( v3 == 2502 )
    {
      v116 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
      v621 = (Json::Value::Self *)Json::Value::asInt(v116);
      v117 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "serviceName"));
      Json::Value::asString((Json::Value::Self *)&v899, v117);
      v118 = gaia::Gaia::GetInstance();
      Matches = (Json::Value::Self *)gaia::Gaia::Authorize(v118, &v899, (int)(uintptr_t)(v621), 0, 0, 0);
      g4_std::string::Destroy(&v899);
    }
    else if ( v3 > 2502 )
    {
      if ( v3 == 2504 )
      {
        v455 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "password"));
        Json::Value::asString((Json::Value::Self *)&v902, v455);
        v456 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "username"));
        Json::Value::asString((Json::Value::Self *)&v901, v456);
        v457 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
        v750 = (Json::Value::Self *)Json::Value::asInt(v457);
        v458 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "scope"));
        Json::Value::asString((Json::Value::Self *)&v900, v458);
        v810 = (gaia::Gaia::Self *)a3[15];
        v849 = (Json::Value::Self *)gaia::Gaia::GetInstance();
        LOBYTE(v459) = gaia::Gaia_Janus::AuthorizeExclusive(
                         *((uint32_t *)v849 + 140),
                         v810,
                         &v900,
                         (int)(uintptr_t)(v750),
                         &v901,
                         &v902,
                         0,
                         0,
                         0);
        Matches = v459;
        g4_std::string::Destroy(&v900);
        g4_std::string::Destroy(&v901);
        g4_std::string::Destroy(&v902);
      }
      else if ( v3 <= 2504 )
      {
        v460 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
        v650 = (Json::Value::Self *)Json::Value::asInt(v460);
        v461 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "scope"));
        Json::Value::asString((Json::Value::Self *)&v903, v461);
        v688 = (Json::Value::Self *)a3[15];
        v462 = gaia::Gaia::GetInstance();
        Matches = (Json::Value::Self *)gaia::Gaia_Janus::AuthorizeExclusive(
                                   *(gaia::Gaia_Janus::Self **)(v462 + 560),
                                   (int)(uintptr_t)(v688),
                                   &v903,
                                   (int)(uintptr_t)(v650),
                                   0,
                                   0,
                                   0);
        g4_std::string::Destroy(&v903);
      }
      else
      {
        v453 = a3[7];
        v454 = gaia::Gaia::GetInstance();
        Matches = (Json::Value::Self *)gaia::Gaia::GetMinimalFedAccountList(v454, v453, 0, 0, 0);
      }
    }
    else if ( v3 == 2007 )
    {
      v728 = (Json::Value::Self *)a3[15];
      v256 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "expiration_duration"));
      Json::Value::asString((Json::Value::Self *)&v984, v256);
      v257 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "expiration_date"));
      Json::Value::asString((Json::Value::Self *)&v983, v257);
      v258 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "replaceScoreIf"));
      Json::Value::asString((Json::Value::Self *)&v982, v258);
      v259 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "isAscendent");
      v791 = Json::Value::asBool(v259);
      v260 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "score");
      v836 = (Json::Value::Self *)Json::Value::asInt(v260);
      v261 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "display_name"));
      Json::Value::asString((Json::Value::Self *)&v981, v261);
      v262 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "leaderboard_name"));
      Json::Value::asString((Json::Value::Self *)&v980, v262);
      v263 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
      v868 = Json::Value::asInt(v263);
      v264 = gaia::Gaia::GetInstance();
      Matches = (Json::Value::Self *)gaia::Gaia_Olympus::PostEntry(
                                 *(gaia::Gaia::Self **)(v264 + 576),
                                 v868,
                                 &v980,
                                 &v981,
                                 (int)(uintptr_t)(v836),
                                 v791,
                                 &v982,
                                 &v983,
                                 &v984,
                                 (int)(uintptr_t)(v728),
                                 0,
                                 0,
                                 0);
      g4_std::string::Destroy(&v980);
      g4_std::string::Destroy(&v981);
      g4_std::string::Destroy(&v982);
      g4_std::string::Destroy(&v983);
      g4_std::string::Destroy(&v984);
    }
    else if ( v3 < 2007 )
    {
      v727 = (Json::Value::Self *)a3[15];
      v245 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "expiration_duration"));
      Json::Value::asString((Json::Value::Self *)&v991, v245);
      v246 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "expiration_date"));
      Json::Value::asString((Json::Value::Self *)&v990, v246);
      v247 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "replaceScoreIf"));
      Json::Value::asString((Json::Value::Self *)&v989, v247);
      v248 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "isAscendent");
      v790 = Json::Value::asBool(v248);
      v249 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "score");
      v835 = (Json::Value::Self *)Json::Value::asInt(v249);
      v250 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "display_name"));
      Json::Value::asString((Json::Value::Self *)&v988, v250);
      v251 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "entry_name"));
      Json::Value::asString((Json::Value::Self *)&v987, v251);
      v252 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "for_credential"));
      Json::Value::asString((Json::Value::Self *)&v986, v252);
      v253 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "leaderboard_name"));
      Json::Value::asString((Json::Value::Self *)&v985, v253);
      v254 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
      v867 = Json::Value::asInt(v254);
      v255 = gaia::Gaia::GetInstance();
      Matches = (Json::Value::Self *)gaia::Gaia_Olympus::PostArbitraryEntry(
                                 *(gaia::Gaia::Self **)(v255 + 576),
                                 v867,
                                 &v985,
                                 &v986,
                                 &v987,
                                 &v988,
                                 (int)(uintptr_t)(v835),
                                 v790,
                                 &v989,
                                 &v990,
                                 &v991,
                                 (int)(uintptr_t)(v727),
                                 0,
                                 0,
                                 0);
      g4_std::string::Destroy(&v985);
      g4_std::string::Destroy(&v986);
      g4_std::string::Destroy(&v987);
      g4_std::string::Destroy(&v988);
      g4_std::string::Destroy(&v989);
      g4_std::string::Destroy(&v990);
      g4_std::string::Destroy(&v991);
    }
    else if ( v3 == 2501 )
    {
      v239 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "scope");
      if ( Json::Value::isNull(v239) )
      {
        v240 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "password"));
        Json::Value::asString((Json::Value::Self *)&v928, v240);
        v241 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "username"));
        Json::Value::asString((Json::Value::Self *)&v927, v241);
        v242 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
        v243 = Json::Value::asInt(v242);
        v244 = gaia::Gaia::GetInstance();
        Matches = (Json::Value::Self *)gaia::Gaia::Login(v244, v243, &v927, &v928, 0, 0, 0);
        g4_std::string::Destroy(&v927);
        g4_std::string::Destroy(&v928);
      }
      else
      {
        v607 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "scope"));
        Json::Value::asString((Json::Value::Self *)&v931, v607);
        v608 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "password"));
        Json::Value::asString((Json::Value::Self *)&v930, v608);
        v609 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "username"));
        Json::Value::asString((Json::Value::Self *)&v929, v609);
        v610 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
        v765 = (Json::Value::Self *)Json::Value::asInt(v610);
        v611 = gaia::Gaia::GetInstance();
        Matches = (Json::Value::Self *)gaia::Gaia::Login(v611, (int)(uintptr_t)(v765), &v929, &v930, &v931, 0, 0, 0);
        g4_std::string::Destroy(&v929);
        g4_std::string::Destroy(&v930);
        g4_std::string::Destroy(&v931);
      }
    }
  }
  else if ( v3 == 4031 )
  {
    v372 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "eventId"));
    Json::Value::asString((Json::Value::Self *)&v1070, v372);
    v682 = (Json::Value::Self *)a3[7];
    v373 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
    v640 = (Json::Value::Self *)Json::Value::asInt(v373);
    v374 = gaia::Gaia::GetInstance();
    Matches = (Json::Value::Self *)gaia::Gaia_Osiris::ShowEvent(
                               *(gaia::Gaia::Self **)(v374 + 580),
                               (int)(uintptr_t)(v640),
                               (int)(uintptr_t)(v682),
                               &v1070,
                               0,
                               0,
                               0);
    g4_std::string::Destroy(&v1070);
  }
  else if ( v3 <= 4031 )
  {
    if ( v3 == 4014 )
    {
      v347 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "targetUsername"));
      Json::Value::asString((Json::Value::Self *)&v1021, v347);
      v348 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "targetAccountType");
      v680 = (Json::Value::Self *)Json::Value::asInt(v348);
      v740 = (Json::Value::Self *)a3[7];
      v349 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
      v637 = (Json::Value::Self *)Json::Value::asInt(v349);
      v350 = gaia::Gaia::GetInstance();
      Matches = (Json::Value::Self *)gaia::Gaia_Osiris::GetProfile(
                                 *(gaia::Gaia::Self **)(v350 + 580),
                                 (int)(uintptr_t)(v637),
                                 (int)(uintptr_t)(v740),
                                 (int)(uintptr_t)(v680),
                                 &v1021,
                                 0,
                                 0,
                                 0);
      g4_std::string::Destroy(&v1021);
    }
    else if ( v3 > 4014 )
    {
      if ( v3 == 4023 )
      {
        v171 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "targetUsername"));
        Json::Value::asString((Json::Value::Self *)&v1044, v171);
        v172 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "targetAccountType");
        v719 = (Json::Value::Self *)Json::Value::asInt(v172);
        v173 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "group_id"));
        Json::Value::asString((Json::Value::Self *)&v1043, v173);
        v784 = (gaia::Gaia::Self *)a3[7];
        v174 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
        v831 = (Json::Value::Self *)Json::Value::asInt(v174);
        v175 = gaia::Gaia::GetInstance();
        Matches = (Json::Value::Self *)gaia::Gaia_Osiris::MembershipCheck(
                                   *(gaia::Gaia::Self **)(v175 + 580),
                                   (int)(uintptr_t)(v831),
                                   (int)(uintptr_t)(v784),
                                   &v1043,
                                   (int)(uintptr_t)(v719),
                                   &v1044,
                                   0,
                                   0,
                                   0);
        g4_std::string::Destroy(&v1043);
        g4_std::string::Destroy(&v1044);
      }
      else if ( v3 > 4023 )
      {
        if ( v3 == 4027 )
        {
          v277 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "owners");
          v731 = Json::Value::asBool(v277);
          v278 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "offset");
          v794 = (gaia::Gaia::Self *)Json::Value::asInt(v278);
          v279 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "limit");
          v837 = (Json::Value::Self *)Json::Value::asInt(v279);
          v280 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "group_id"));
          Json::Value::asString((Json::Value::Self *)&v1053, v280);
          v869 = a3[7];
          v281 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
          v282 = Json::Value::asInt(v281);
          v283 = gaia::Gaia::GetInstance();
          Matches = (Json::Value::Self *)gaia::Gaia_Osiris::ListGroupMembers(
                                     *(gaia::Gaia::Self **)(v283 + 580),
                                     v282,
                                     v869,
                                     &v1053,
                                     (unsigned int)(uintptr_t)(v837),
                                     (unsigned int)(uintptr_t)(v794),
                                     v731,
                                     0,
                                     0,
                                     0);
          g4_std::string::Destroy(&v1053);
        }
        else if ( v3 > 4027 )
        {
          if ( v3 == 4029 )
          {
            v763 = (Json::Value::Self *)a3[8];
            v575 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "tournamentObj"));
            Json::Value::asString((Json::Value::Self *)&v1068, v575);
            v576 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "group_id"));
            Json::Value::asString((Json::Value::Self *)&v1067, v576);
            v577 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "endDate"));
            Json::Value::asString((Json::Value::Self *)&v1066, v577);
            v578 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "startDate"));
            Json::Value::asString((Json::Value::Self *)&v1065, v578);
            v579 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "event_category"));
            Json::Value::asString((Json::Value::Self *)&v1064, v579);
            v580 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "event_description"));
            Json::Value::asString((Json::Value::Self *)&v1063, v580);
            v581 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "event_name"));
            Json::Value::asString((Json::Value::Self *)&v1062, v581);
            v582 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "eventId"));
            Json::Value::asString((Json::Value::Self *)&v1061, v582);
            v819 = (gaia::Gaia::Self *)a3[7];
            v583 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
            v856 = (Json::Value::Self *)Json::Value::asInt(v583);
            v584 = gaia::Gaia::GetInstance();
            Matches = (Json::Value::Self *)gaia::Gaia_Osiris::UpdateEvent(
                                       *(gaia::Gaia::Self **)(v584 + 580),
                                       (int)(uintptr_t)(v856),
                                       (int)(uintptr_t)(v819),
                                       &v1061,
                                       &v1062,
                                       &v1063,
                                       &v1064,
                                       &v1065,
                                       &v1066,
                                       &v1067,
                                       &v1068,
                                       (int)(uintptr_t)(v763),
                                       0,
                                       0,
                                       0);
            g4_std::string::Destroy(&v1061);
            g4_std::string::Destroy(&v1062);
            g4_std::string::Destroy(&v1063);
            g4_std::string::Destroy(&v1064);
            g4_std::string::Destroy(&v1065);
            g4_std::string::Destroy(&v1066);
            g4_std::string::Destroy(&v1067);
            g4_std::string::Destroy(&v1068);
          }
          else if ( v3 <= 4029 )
          {
            v764 = (Json::Value::Self *)a3[8];
            v585 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "tournamentObj"));
            Json::Value::asString((Json::Value::Self *)&v1060, v585);
            v586 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "group_id"));
            Json::Value::asString((Json::Value::Self *)&v1059, v586);
            v587 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "endDate"));
            Json::Value::asString((Json::Value::Self *)&v1058, v587);
            v588 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "startDate"));
            Json::Value::asString((Json::Value::Self *)&v1057, v588);
            v589 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "event_category"));
            Json::Value::asString((Json::Value::Self *)&v1056, v589);
            v590 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "event_description"));
            Json::Value::asString((Json::Value::Self *)&v1055, v590);
            v591 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "event_name"));
            Json::Value::asString((Json::Value::Self *)&v1054, v591);
            v820 = (gaia::Gaia::Self *)a3[7];
            v592 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
            v857 = (Json::Value::Self *)Json::Value::asInt(v592);
            v593 = gaia::Gaia::GetInstance();
            Matches = (Json::Value::Self *)gaia::Gaia_Osiris::CreateEvent(
                                       *(gaia::Gaia::Self **)(v593 + 580),
                                       (int)(uintptr_t)(v857),
                                       (int)(uintptr_t)(v820),
                                       &v1054,
                                       &v1055,
                                       &v1056,
                                       &v1057,
                                       &v1058,
                                       &v1059,
                                       &v1060,
                                       (int)(uintptr_t)(v764),
                                       0,
                                       0,
                                       0);
            g4_std::string::Destroy(&v1054);
            g4_std::string::Destroy(&v1055);
            g4_std::string::Destroy(&v1056);
            g4_std::string::Destroy(&v1057);
            g4_std::string::Destroy(&v1058);
            g4_std::string::Destroy(&v1059);
            g4_std::string::Destroy(&v1060);
          }
          else
          {
            v572 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "eventId"));
            Json::Value::asString((Json::Value::Self *)&v1069, v572);
            v573 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
            v662 = (Json::Value::Self *)Json::Value::asInt(v573);
            v574 = gaia::Gaia::GetInstance();
            Matches = (Json::Value::Self *)gaia::Gaia_Osiris::DeleteEvent(
                                       *(gaia::Gaia::Self **)(v574 + 580),
                                       (int)(uintptr_t)(v662),
                                       &v1069,
                                       0,
                                       0,
                                       0);
            g4_std::string::Destroy(&v1069);
          }
        }
        else if ( v3 == 4025 )
        {
          v271 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "targetUsername"));
          Json::Value::asString((Json::Value::Self *)&v1049, v271);
          v677 = *(Json::Value::Self **)(v1049 - 12);
          g4_std::string::Destroy(&v1049);
          if ( v677 != nullptr )
          {
            v272 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "targetUsername"));
            Json::Value::asString((Json::Value::Self *)&v1051, v272);
            v273 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "targetAccountType");
            v730 = (Json::Value::Self *)Json::Value::asInt(v273);
            v274 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "group_id"));
            Json::Value::asString((Json::Value::Self *)&v1050, v274);
            v275 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
            v793 = (gaia::Gaia::Self *)Json::Value::asInt(v275);
            v276 = gaia::Gaia::GetInstance();
            Matches = (Json::Value::Self *)gaia::Gaia_Osiris::DeleteMemberFromGroup(
                                       *(gaia::Gaia::Self **)(v276 + 580),
                                       (int)(uintptr_t)(v793),
                                       &v1050,
                                       (int)(uintptr_t)(v730),
                                       &v1051,
                                       0,
                                       0,
                                       0);
            g4_std::string::Destroy(&v1050);
            g4_std::string::Destroy(&v1051);
          }
          else
          {
            v594 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "group_id"));
            Json::Value::asString((Json::Value::Self *)&v1052, v594);
            v595 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
            v596 = Json::Value::asInt(v595);
            v597 = gaia::Gaia::GetInstance();
            Matches = (Json::Value::Self *)gaia::Gaia_Osiris::LeaveGroup(*(gaia::Gaia::Self **)(v597 + 580), v596, &v1052, 0, 0, 0);
            g4_std::string::Destroy(&v1052);
          }
        }
        else if ( v3 <= 4025 )
        {
          v265 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "targetUsername"));
          Json::Value::asString((Json::Value::Self *)&v1045, v265);
          v676 = *(Json::Value::Self **)(v1045 - 12);
          g4_std::string::Destroy(&v1045);
          if ( v676 != nullptr )
          {
            v266 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "targetUsername"));
            Json::Value::asString((Json::Value::Self *)&v1047, v266);
            v267 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "targetAccountType");
            v729 = (Json::Value::Self *)Json::Value::asInt(v267);
            v268 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "group_id"));
            Json::Value::asString((Json::Value::Self *)&v1046, v268);
            v269 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
            v792 = (gaia::Gaia::Self *)Json::Value::asInt(v269);
            v270 = gaia::Gaia::GetInstance();
            Matches = (Json::Value::Self *)gaia::Gaia_Osiris::AddMemberToGroup(
                                       *(gaia::Gaia::Self **)(v270 + 580),
                                       (int)(uintptr_t)(v792),
                                       &v1046,
                                       (int)(uintptr_t)(v729),
                                       &v1047,
                                       0,
                                       0,
                                       0);
            g4_std::string::Destroy(&v1046);
            g4_std::string::Destroy(&v1047);
          }
          else
          {
            v603 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "group_id"));
            Json::Value::asString((Json::Value::Self *)&v1048, v603);
            v604 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
            v605 = Json::Value::asInt(v604);
            v606 = gaia::Gaia::GetInstance();
            Matches = (Json::Value::Self *)gaia::Gaia_Osiris::JoinGroup(*(gaia::Gaia::Self **)(v606 + 580), v605, &v1048, 0, 0, 0);
            g4_std::string::Destroy(&v1048);
          }
        }
        else
        {
          v51 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "targetUsername"));
          Json::Value::asString((Json::Value::Self *)&v1082, v51);
          v52 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "targetAccountType");
          v665 = (Json::Value::Self *)Json::Value::asInt(v52);
          v53 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
          v705 = (Json::Value::Self *)Json::Value::asInt(v53);
          v771 = (gaia::Gaia::Self *)a3[8];
          v54 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "group_id"));
          Json::Value::asString((Json::Value::Self *)&v1081, v54);
          v55 = gaia::Gaia::GetInstance();
          Matches = (Json::Value::Self *)gaia::Gaia_Osiris::MemberUpdateCustomFields(
                                     *(gaia::Gaia::Self **)(v55 + 580),
                                     &v1081,
                                     (int)(uintptr_t)(v771),
                                     (int)(uintptr_t)(v705),
                                     (int)(uintptr_t)(v665),
                                     &v1082,
                                     0,
                                     0,
                                     0);
          g4_std::string::Destroy(&v1081);
          g4_std::string::Destroy(&v1082);
        }
      }
      else if ( v3 == 4018 )
      {
        v176 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "group_id"));
        Json::Value::asString((Json::Value::Self *)&v1038, v176);
        v177 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
        v628 = (Json::Value::Self *)Json::Value::asInt(v177);
        v178 = gaia::Gaia::GetInstance();
        Matches = (Json::Value::Self *)gaia::Gaia_Osiris::DeleteGroup(
                                   *(gaia::Gaia::Self **)(v178 + 580),
                                   (int)(uintptr_t)(v628),
                                   &v1038,
                                   0,
                                   0,
                                   0);
        g4_std::string::Destroy(&v1038);
      }
      else if ( v3 > 4018 )
      {
        if ( v3 == 4020 )
        {
          v548 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "offset");
          v696 = (Json::Value::Self *)Json::Value::asInt(v548);
          v549 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "limit");
          v760 = (Json::Value::Self *)Json::Value::asInt(v549);
          v550 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "group_category"));
          Json::Value::asString((Json::Value::Self *)&v1040, v550);
          v816 = (gaia::Gaia::Self *)a3[7];
          v551 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
          v552 = Json::Value::asInt(v551);
          v553 = gaia::Gaia::GetInstance();
          Matches = (Json::Value::Self *)gaia::Gaia_Osiris::SearchGroups(
                                     *(gaia::Gaia::Self **)(v553 + 580),
                                     v552,
                                     (int)(uintptr_t)(v816),
                                     &v1040,
                                     (unsigned int)(uintptr_t)(v760),
                                     (unsigned int)(uintptr_t)(v696),
                                     0,
                                     0,
                                     0);
          g4_std::string::Destroy(&v1040);
        }
        else if ( v3 < 4020 )
        {
          v554 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "group_id"));
          Json::Value::asString((Json::Value::Self *)&v1039, v554);
          v697 = (Json::Value::Self *)a3[7];
          v555 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
          v660 = (Json::Value::Self *)Json::Value::asInt(v555);
          v556 = gaia::Gaia::GetInstance();
          Matches = (Json::Value::Self *)gaia::Gaia_Osiris::ShowGroup(
                                     *(gaia::Gaia::Self **)(v556 + 580),
                                     (int)(uintptr_t)(v660),
                                     (int)(uintptr_t)(v697),
                                     &v1039,
                                     0,
                                     0,
                                     0);
          g4_std::string::Destroy(&v1039);
        }
        else if ( v3 == 4021 )
        {
          v542 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "limit");
          v759 = (Json::Value::Self *)Json::Value::asInt(v542);
          v543 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "filter"));
          Json::Value::asString((Json::Value::Self *)&v1042, v543);
          v544 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "score");
          v815 = (gaia::Gaia::Self *)Json::Value::asInt(v544);
          v545 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "group_category"));
          Json::Value::asString((Json::Value::Self *)&v1041, v545);
          v854 = (Json::Value::Self *)a3[7];
          v546 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
          v875 = Json::Value::asInt(v546);
          v547 = gaia::Gaia::GetInstance();
          Matches = (Json::Value::Self *)gaia::Gaia_Osiris::SearchClansByRecommendationScore(
                                     *(gaia::Gaia::Self **)(v547 + 580),
                                     v875,
                                     (int)(uintptr_t)(v854),
                                     &v1041,
                                     (unsigned int)(uintptr_t)(v815),
                                     &v1042,
                                     (int)(uintptr_t)(v759),
                                     0,
                                     0,
                                     0);
          g4_std::string::Destroy(&v1041);
          g4_std::string::Destroy(&v1042);
        }
      }
      else if ( v3 == 4016 )
      {
        v724 = (Json::Value::Self *)a3[8];
        v211 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "membership");
        v787 = (gaia::Gaia::Self *)Json::Value::asInt(v211);
        v212 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "group_id"));
        Json::Value::asString((Json::Value::Self *)&v1033, v212);
        v213 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "member_limit");
        v833 = (Json::Value::Self *)Json::Value::asInt(v213);
        v214 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "group_description"));
        Json::Value::asString((Json::Value::Self *)&v1032, v214);
        v215 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "group_category"));
        Json::Value::asString((Json::Value::Self *)&v1031, v215);
        v216 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "group_name"));
        Json::Value::asString((Json::Value::Self *)&v1030, v216);
        v217 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "group_type");
        v865 = Json::Value::asInt(v217);
        v881 = a3[7];
        v218 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
        v885 = Json::Value::asInt(v218);
        v219 = gaia::Gaia::GetInstance();
        Matches = (Json::Value::Self *)gaia::Gaia_Osiris::CreateGroup(
                                   *(gaia::Gaia::Self **)(v219 + 580),
                                   v885,
                                   v881,
                                   v865,
                                   &v1030,
                                   &v1031,
                                   &v1032,
                                   (unsigned int)(uintptr_t)(v833),
                                   &v1033,
                                   (int)(uintptr_t)(v787),
                                   (int)(uintptr_t)(v724),
                                   0,
                                   0,
                                   0);
        g4_std::string::Destroy(&v1030);
        g4_std::string::Destroy(&v1031);
        g4_std::string::Destroy(&v1032);
        g4_std::string::Destroy(&v1033);
      }
      else if ( v3 <= 4016 )
      {
        v208 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "statusLine"));
        Json::Value::asString((Json::Value::Self *)&v1020, v208);
        v209 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
        v630 = (Json::Value::Self *)Json::Value::asInt(v209);
        v210 = gaia::Gaia::GetInstance();
        Matches = (Json::Value::Self *)gaia::Gaia_Osiris::UpdateStatusLine(
                                   *(gaia::Gaia::Self **)(v210 + 580),
                                   (int)(uintptr_t)(v630),
                                   &v1020,
                                   0,
                                   0,
                                   0);
        g4_std::string::Destroy(&v1020);
      }
      else
      {
        v703 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "demote_owners");
        v769 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "promote_owners");
        v823 = (Json::Value::Self *)a3[8];
        v35 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "membership");
        v859 = Json::Value::asInt(v35);
        v36 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "group_id"));
        Json::Value::asString((Json::Value::Self *)&v1037, v36);
        v37 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "member_limit");
        v877 = Json::Value::asInt(v37);
        v38 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "group_description"));
        Json::Value::asString((Json::Value::Self *)&v1036, v38);
        v39 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "group_category"));
        Json::Value::asString((Json::Value::Self *)&v1035, v39);
        v40 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "group_name"));
        Json::Value::asString((Json::Value::Self *)&v1034, v40);
        v884 = a3[7];
        v41 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
        v887 = Json::Value::asInt(v41);
        v42 = gaia::Gaia::GetInstance();
        Matches = (Json::Value::Self *)gaia::Gaia_Osiris::UpdateGroup(
                                   *(gaia::Gaia::Self **)(v42 + 580),
                                   v887,
                                   v884,
                                   &v1034,
                                   &v1035,
                                   &v1036,
                                   v877,
                                   &v1037,
                                   v859,
                                   (int)(uintptr_t)(v823),
                                   v769,
                                   v703,
                                   0,
                                   0,
                                   0);
        g4_std::string::Destroy(&v1034);
        g4_std::string::Destroy(&v1035);
        g4_std::string::Destroy(&v1036);
        g4_std::string::Destroy(&v1037);
      }
    }
    else if ( v3 == 4006 )
    {
      v126 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "seconds_since_last_login");
      v668 = (Json::Value::Self *)Json::Value::asInt(v126);
      v127 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "online");
      v715 = Json::Value::asBool(v127);
      v128 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "game_name"));
      Json::Value::asString((Json::Value::Self *)&v1001, v128);
      v129 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "offset");
      v780 = (gaia::Gaia::Self *)Json::Value::asInt(v129);
      v130 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "limit");
      v829 = (Json::Value::Self *)Json::Value::asInt(v130);
      v863 = a3[7];
      v131 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "connection_type");
      v879 = Json::Value::asInt(v131);
      v132 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
      v133 = Json::Value::asInt(v132);
      v134 = gaia::Gaia::GetInstance();
      Matches = (Json::Value::Self *)gaia::Gaia_Osiris::ListConnections(
                                 *(gaia::Gaia::Self **)(v134 + 580),
                                 v133,
                                 v879,
                                 v863,
                                 (unsigned int)(uintptr_t)(v829),
                                 (unsigned int)(uintptr_t)(v780),
                                 &v1001,
                                 v715,
                                 (unsigned int)(uintptr_t)(v668),
                                 0,
                                 0,
                                 0);
      g4_std::string::Destroy(&v1001);
    }
    else if ( v3 > 4006 )
    {
      if ( v3 == 4010 )
      {
        v154 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "request_id"));
        Json::Value::asString((Json::Value::Self *)&v1011, v154);
        v155 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
        v623 = (Json::Value::Self *)Json::Value::asInt(v155);
        v156 = gaia::Gaia::GetInstance();
        Matches = (Json::Value::Self *)gaia::Gaia_Osiris::AcceptRequest(
                                   *(gaia::Gaia::Self **)(v156 + 580),
                                   (int)(uintptr_t)(v623),
                                   &v1011,
                                   0,
                                   0,
                                   0);
        g4_std::string::Destroy(&v1011);
      }
      else if ( v3 > 4010 )
      {
        if ( v3 == 4012 )
        {
          v468 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "request_id"));
          Json::Value::asString((Json::Value::Self *)&v1013, v468);
          v469 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
          v651 = (Json::Value::Self *)Json::Value::asInt(v469);
          v470 = gaia::Gaia::GetInstance();
          Matches = (Json::Value::Self *)gaia::Gaia_Osiris::IgnoreRequest(
                                     *(gaia::Gaia::Self **)(v470 + 580),
                                     (int)(uintptr_t)(v651),
                                     &v1013,
                                     0,
                                     0,
                                     0);
          g4_std::string::Destroy(&v1013);
        }
        else if ( v3 <= 4012 )
        {
          v471 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "request_id"));
          Json::Value::asString((Json::Value::Self *)&v1012, v471);
          v472 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
          v652 = (Json::Value::Self *)Json::Value::asInt(v472);
          v473 = gaia::Gaia::GetInstance();
          Matches = (Json::Value::Self *)gaia::Gaia_Osiris::RejectRequest(
                                     *(gaia::Gaia::Self **)(v473 + 580),
                                     (int)(uintptr_t)(v652),
                                     &v1012,
                                     0,
                                     0,
                                     0);
          g4_std::string::Destroy(&v1012);
        }
        else
        {
          v463 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "country"));
          Json::Value::asString((Json::Value::Self *)&v1019, v463);
          v464 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "lang"));
          Json::Value::asString((Json::Value::Self *)&v1018, v464);
          v465 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "username"));
          Json::Value::asString((Json::Value::Self *)&v1017, v465);
          v466 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
          v751 = (Json::Value::Self *)Json::Value::asInt(v466);
          v467 = gaia::Gaia::GetInstance();
          Matches = (Json::Value::Self *)gaia::Gaia_Osiris::UpdateProfile(
                                     *(gaia::Gaia::Self **)(v467 + 580),
                                     (int)(uintptr_t)(v751),
                                     &v1017,
                                     &v1018,
                                     &v1019,
                                     0,
                                     0,
                                     0);
          g4_std::string::Destroy(&v1017);
          g4_std::string::Destroy(&v1018);
          g4_std::string::Destroy(&v1019);
        }
      }
      else if ( v3 == 4008 )
      {
        v148 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "offset");
        v622 = (Json::Value::Self *)Json::Value::asInt(v148);
        v149 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "limit");
        v670 = (Json::Value::Self *)Json::Value::asInt(v149);
        v150 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "request_type");
        v718 = (Json::Value::Self *)Json::Value::asInt(v150);
        v783 = (gaia::Gaia::Self *)a3[7];
        v151 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
        v152 = Json::Value::asInt(v151);
        v153 = gaia::Gaia::GetInstance();
        Matches = (Json::Value::Self *)gaia::Gaia_Osiris::ListSentRequests(
                                   *(gaia::Gaia::Self **)(v153 + 580),
                                   v152,
                                   (int)(uintptr_t)(v783),
                                   (int)(uintptr_t)(v718),
                                   (unsigned int)(uintptr_t)(v670),
                                   (unsigned int)(uintptr_t)(v622),
                                   0,
                                   0,
                                   0);
      }
      else if ( v3 <= 4008 )
      {
        v141 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "status"));
        Json::Value::asString((Json::Value::Self *)&v1009, v141);
        v142 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "offset");
        v669 = (Json::Value::Self *)Json::Value::asInt(v142);
        v143 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "limit");
        v717 = (Json::Value::Self *)Json::Value::asInt(v143);
        v144 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "request_type");
        v782 = (gaia::Gaia::Self *)Json::Value::asInt(v144);
        v830 = (Json::Value::Self *)a3[7];
        v145 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
        v146 = Json::Value::asInt(v145);
        v147 = gaia::Gaia::GetInstance();
        Matches = (Json::Value::Self *)gaia::Gaia_Osiris::ListRequests(
                                   *(gaia::Gaia::Self **)(v147 + 580),
                                   v146,
                                   (int)(uintptr_t)(v830),
                                   (int)(uintptr_t)(v782),
                                   (unsigned int)(uintptr_t)(v717),
                                   (unsigned int)(uintptr_t)(v669),
                                   &v1009,
                                   0,
                                   0,
                                   0);
        g4_std::string::Destroy(&v1009);
      }
      else
      {
        v43 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "request_id"));
        Json::Value::asString((Json::Value::Self *)&v1010, v43);
        v44 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
        v615 = (Json::Value::Self *)Json::Value::asInt(v44);
        v45 = gaia::Gaia::GetInstance();
        Matches = (Json::Value::Self *)gaia::Gaia_Osiris::CancelSentRequest(
                                   *(gaia::Gaia::Self **)(v45 + 580),
                                   (int)(uintptr_t)(v615),
                                   &v1010,
                                   0,
                                   0,
                                   0);
        g4_std::string::Destroy(&v1010);
      }
    }
    else if ( v3 == 4002 )
    {
      v202 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "targetUsername"));
      Json::Value::asString((Json::Value::Self *)&v1002, v202);
      v203 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "targetAccountType");
      v675 = (Json::Value::Self *)Json::Value::asInt(v203);
      v204 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "connection_type");
      v723 = (Json::Value::Self *)Json::Value::asInt(v204);
      v205 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
      v206 = Json::Value::asInt(v205);
      v207 = gaia::Gaia::GetInstance();
      Matches = (Json::Value::Self *)gaia::Gaia_Osiris::DeleteConnection(
                                 *(gaia::Gaia::Self **)(v207 + 580),
                                 v206,
                                 (int)(uintptr_t)(v723),
                                 (int)(uintptr_t)(v675),
                                 &v1002,
                                 0,
                                 0,
                                 0);
      g4_std::string::Destroy(&v1002);
    }
    else if ( v3 > 4002 )
    {
      if ( v3 == 4004 )
      {
        v515 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "secret"));
        Json::Value::asString((Json::Value::Self *)&v1005, v515);
        v516 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "targetUsername"));
        Json::Value::asString((Json::Value::Self *)&v1004, v516);
        v517 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "targetAccountType");
        v756 = (Json::Value::Self *)Json::Value::asInt(v517);
        v518 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "connection_type");
        v813 = (gaia::Gaia::Self *)Json::Value::asInt(v518);
        v852 = (Json::Value::Self *)a3[7];
        v519 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
        v874 = Json::Value::asInt(v519);
        v520 = gaia::Gaia::GetInstance();
        Matches = (Json::Value::Self *)gaia::Gaia_Osiris::ImportFriends(
                                   *(gaia::Gaia::Self **)(v520 + 580),
                                   v874,
                                   (int)(uintptr_t)(v852),
                                   (int)(uintptr_t)(v813),
                                   (int)(uintptr_t)(v756),
                                   &v1004,
                                   &v1005,
                                   0,
                                   0,
                                   0);
        g4_std::string::Destroy(&v1004);
        g4_std::string::Destroy(&v1005);
      }
      else if ( v3 <= 4004 )
      {
        v521 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "targetUsername"));
        Json::Value::asString((Json::Value::Self *)&v1003, v521);
        v522 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "targetAccountType");
        v693 = (Json::Value::Self *)Json::Value::asInt(v522);
        v523 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "connection_type");
        v757 = (Json::Value::Self *)Json::Value::asInt(v523);
        v524 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
        v525 = Json::Value::asInt(v524);
        v526 = gaia::Gaia::GetInstance();
        Matches = (Json::Value::Self *)gaia::Gaia_Osiris::ConnectionExists(
                                   *(gaia::Gaia::Self **)(v526 + 580),
                                   v525,
                                   (int)(uintptr_t)(v757),
                                   (int)(uintptr_t)(v693),
                                   &v1003,
                                   0,
                                   0,
                                   0);
        g4_std::string::Destroy(&v1003);
      }
      else
      {
        v509 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "import_type"));
        Json::Value::asString((Json::Value::Self *)&v1008, v509);
        v510 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "secret"));
        Json::Value::asString((Json::Value::Self *)&v1007, v510);
        v511 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "targetUsername"));
        Json::Value::asString((Json::Value::Self *)&v1006, v511);
        v512 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "targetAccountType");
        v755 = (Json::Value::Self *)Json::Value::asInt(v512);
        v812 = (gaia::Gaia::Self *)a3[7];
        v513 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
        v851 = (Json::Value::Self *)Json::Value::asInt(v513);
        v514 = gaia::Gaia::GetInstance();
        Matches = (Json::Value::Self *)gaia::Gaia_Osiris::Import(
                                   *(gaia::Gaia::Self **)(v514 + 580),
                                   (int)(uintptr_t)(v851),
                                   (int)(uintptr_t)(v812),
                                   (int)(uintptr_t)(v755),
                                   &v1006,
                                   &v1007,
                                   &v1008,
                                   0,
                                   0,
                                   0);
        g4_std::string::Destroy(&v1006);
        g4_std::string::Destroy(&v1007);
        g4_std::string::Destroy(&v1008);
      }
    }
    else if ( v3 == 3511 )
    {
      v625 = (Json::Value::Self *)a3[7];
      v160 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "forTransport");
      v671 = (Json::Value::Self *)Json::Value::asInt(v160);
      v161 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
      v162 = Json::Value::asInt(v161);
      v163 = gaia::Gaia::GetInstance();
      Matches = (Json::Value::Self *)gaia::Gaia_Hermes::ListRegisteredDevices(
                                 *(gaia::Gaia::Self **)(v163 + 572),
                                 v162,
                                 (int)(uintptr_t)(v671),
                                 (int)(uintptr_t)(v625),
                                 0,
                                 0,
                                 0);
    }
    else if ( v3 < 3511 )
    {
      v624 = (Json::Value::Self *)a3[7];
      v157 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
      v158 = Json::Value::asInt(v157);
      v159 = gaia::Gaia::GetInstance();
      Matches = (Json::Value::Self *)gaia::Gaia_Hermes::ShowSubscriptions(
                                 *(gaia::Gaia::Self **)(v159 + 572),
                                 v158,
                                 (int)(uintptr_t)(v624),
                                 0,
                                 0,
                                 0);
    }
    else if ( v3 == 4001 )
    {
      v11 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "required_approval"));
      Json::Value::asString((Json::Value::Self *)&v1000, v11);
      v12 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "requester_credential"));
      Json::Value::asString((Json::Value::Self *)&v999, v12);
      v13 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "targetUsername"));
      Json::Value::asString((Json::Value::Self *)&v998, v13);
      v14 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "targetAccountType");
      v700 = (Json::Value::Self *)Json::Value::asInt(v14);
      v15 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "connection_type");
      v767 = (gaia::Gaia::Self *)Json::Value::asInt(v15);
      v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
      v821 = (Json::Value::Self *)Json::Value::asInt(v16);
      v17 = gaia::Gaia::GetInstance();
      Matches = (Json::Value::Self *)gaia::Gaia_Osiris::AddConnection(
                                 *(gaia::Gaia::Self **)(v17 + 580),
                                 (int)(uintptr_t)(v821),
                                 (int)(uintptr_t)(v767),
                                 (int)(uintptr_t)(v700),
                                 &v998,
                                 &v999,
                                 &v1000,
                                 0,
                                 0,
                                 0);
      g4_std::string::Destroy(&v998);
      g4_std::string::Destroy(&v999);
      g4_std::string::Destroy(&v1000);
    }
  }
  else if ( v3 == 4048 )
  {
    v186 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "participantId"));
    Json::Value::asString((Json::Value::Self *)&v1016, v186);
    v187 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "eventId"));
    Json::Value::asString((Json::Value::Self *)&v1015, v187);
    v721 = (Json::Value::Self *)a3[7];
    v188 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
    v785 = (gaia::Gaia::Self *)Json::Value::asInt(v188);
    v189 = gaia::Gaia::GetInstance();
    Matches = (Json::Value::Self *)gaia::Gaia_Osiris::DeliverParticipantAwards(
                               *(gaia::Gaia::Self **)(v189 + 580),
                               (int)(uintptr_t)(v785),
                               (int)(uintptr_t)(v721),
                               &v1015,
                               &v1016,
                               0,
                               0,
                               0);
    g4_std::string::Destroy(&v1015);
    g4_std::string::Destroy(&v1016);
  }
  else if ( v3 <= 4048 )
  {
    if ( v3 == 4040 )
    {
      v84 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "trophy_id"));
      Json::Value::asString((Json::Value::Self *)&v1095, v84);
      v85 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
      v617 = (Json::Value::Self *)Json::Value::asInt(v85);
      v86 = gaia::Gaia::GetInstance();
      Matches = (Json::Value::Self *)gaia::Gaia_Osiris::RecordAchievement(
                                 *(gaia::Gaia::Self **)(v86 + 580),
                                 (int)(uintptr_t)(v617),
                                 &v1095,
                                 0,
                                 0,
                                 0);
      g4_std::string::Destroy(&v1095);
    }
    else if ( v3 > 4040 )
    {
      if ( v3 == 4044 )
      {
        v102 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "group_field_value"));
        Json::Value::asString((Json::Value::Self *)&v1029, v102);
        v103 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "group_field_name"));
        Json::Value::asString((Json::Value::Self *)&v1028, v103);
        v104 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "group_id"));
        Json::Value::asString((Json::Value::Self *)&v1027, v104);
        v712 = (Json::Value::Self *)a3[7];
        v105 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
        v777 = (gaia::Gaia::Self *)Json::Value::asInt(v105);
        v106 = gaia::Gaia::GetInstance();
        Matches = (Json::Value::Self *)gaia::Gaia_Osiris::SetGroupField(
                                   *(gaia::Gaia::Self **)(v106 + 580),
                                   (int)(uintptr_t)(v777),
                                   (int)(uintptr_t)(v712),
                                   &v1027,
                                   &v1028,
                                   &v1029,
                                   0,
                                   0,
                                   0);
        g4_std::string::Destroy(&v1027);
        g4_std::string::Destroy(&v1028);
        g4_std::string::Destroy(&v1029);
      }
      else if ( v3 > 4044 )
      {
        if ( v3 == 4046 )
        {
          v432 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "object"));
          Json::Value::asString((Json::Value::Self *)&v1024, v432);
          v433 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "field"));
          Json::Value::asString((Json::Value::Self *)&v1023, v433);
          v434 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "groupID"));
          Json::Value::asString((Json::Value::Self *)&v1022, v434);
          v435 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "type");
          v747 = (Json::Value::Self *)Json::Value::asInt(v435);
          v807 = (gaia::Gaia::Self *)a3[7];
          v436 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
          v847 = (Json::Value::Self *)Json::Value::asInt(v436);
          v437 = gaia::Gaia::GetInstance();
          Matches = (Json::Value::Self *)gaia::Gaia_Osiris::IncrementDecrementGroupField(
                                     *(gaia::Gaia::Self **)(v437 + 580),
                                     (int)(uintptr_t)(v847),
                                     (int)(uintptr_t)(v807),
                                     (int)(uintptr_t)(v747),
                                     &v1022,
                                     &v1023,
                                     &v1024,
                                     0,
                                     0,
                                     0);
          g4_std::string::Destroy(&v1022);
          g4_std::string::Destroy(&v1023);
          g4_std::string::Destroy(&v1024);
        }
        else if ( v3 <= 4046 )
        {
          v438 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "group_field_name"));
          Json::Value::asString((Json::Value::Self *)&v1026, v438);
          v439 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "group_id"));
          Json::Value::asString((Json::Value::Self *)&v1025, v439);
          v748 = (Json::Value::Self *)a3[15];
          v440 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
          v808 = (gaia::Gaia::Self *)Json::Value::asInt(v440);
          v441 = gaia::Gaia::GetInstance();
          Matches = (Json::Value::Self *)gaia::Gaia_Osiris::GetGroupField(
                                     *(gaia::Gaia::Self **)(v441 + 580),
                                     (int)(uintptr_t)(v808),
                                     (int)(uintptr_t)(v748),
                                     &v1025,
                                     &v1026,
                                     0,
                                     0,
                                     0);
          g4_std::string::Destroy(&v1025);
          g4_std::string::Destroy(&v1026);
        }
        else
        {
          v429 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "eventId"));
          Json::Value::asString((Json::Value::Self *)&v1014, v429);
          v685 = (Json::Value::Self *)a3[7];
          v430 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
          v647 = (Json::Value::Self *)Json::Value::asInt(v430);
          v431 = gaia::Gaia::GetInstance();
          Matches = (Json::Value::Self *)gaia::Gaia_Osiris::DeliverAwards(
                                     *(gaia::Gaia::Self **)(v431 + 580),
                                     (int)(uintptr_t)(v647),
                                     (int)(uintptr_t)(v685),
                                     &v1014,
                                     0,
                                     0,
                                     0);
          g4_std::string::Destroy(&v1014);
        }
      }
      else if ( v3 == 4042 )
      {
        v96 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "activity_type"));
        Json::Value::asString((Json::Value::Self *)&v1088, v96);
        v97 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "activity_id"));
        Json::Value::asString((Json::Value::Self *)&v1087, v97);
        v98 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "object_id"));
        Json::Value::asString((Json::Value::Self *)&v1086, v98);
        v99 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "object_type");
        v711 = (Json::Value::Self *)Json::Value::asInt(v99);
        v100 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
        v776 = (gaia::Gaia::Self *)Json::Value::asInt(v100);
        v101 = gaia::Gaia::GetInstance();
        Matches = (Json::Value::Self *)gaia::Gaia_Osiris::UpvoteWallPost(
                                   *(gaia::Gaia::Self **)(v101 + 580),
                                   (int)(uintptr_t)(v776),
                                   (int)(uintptr_t)(v711),
                                   &v1086,
                                   &v1087,
                                   &v1088,
                                   0,
                                   0,
                                   0);
        g4_std::string::Destroy(&v1086);
        g4_std::string::Destroy(&v1087);
        g4_std::string::Destroy(&v1088);
      }
      else if ( v3 <= 4042 )
      {
        v91 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "game"));
        Json::Value::asString((Json::Value::Self *)&v1097, v91);
        v92 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "targetUsername"));
        Json::Value::asString((Json::Value::Self *)&v1096, v92);
        v93 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "targetAccountType");
        v710 = (Json::Value::Self *)Json::Value::asInt(v93);
        v775 = (gaia::Gaia::Self *)a3[7];
        v94 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
        v826 = (Json::Value::Self *)Json::Value::asInt(v94);
        v95 = gaia::Gaia::GetInstance();
        Matches = (Json::Value::Self *)gaia::Gaia_Osiris::ListAchievements(
                                   *(gaia::Gaia::Self **)(v95 + 580),
                                   (int)(uintptr_t)(v826),
                                   (int)(uintptr_t)(v775),
                                   (int)(uintptr_t)(v710),
                                   &v1096,
                                   &v1097,
                                   0,
                                   0,
                                   0);
        g4_std::string::Destroy(&v1096);
        g4_std::string::Destroy(&v1097);
      }
      else
      {
        v666 = (void **)a3[15];
        v616 = (int *)a3[16];
        v74 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "URL"));
        Json::Value::asString((Json::Value::Self *)&v997, v74);
        v75 = gaia::Gaia::GetInstance();
        Matches = (Json::Value::Self *)gaia::Gaia_Osiris::GetPictureFromUrl(
                                   *(gaia::Gaia::Self **)(v75 + 580),
                                   &v997,
                                   v666,
                                   v616,
                                   0,
                                   0,
                                   0);
        g4_std::string::Destroy(&v997);
      }
    }
    else if ( v3 == 4036 )
    {
      v87 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "start_rank");
      v667 = (Json::Value::Self *)Json::Value::asInt(v87);
      v88 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "eventId"));
      Json::Value::asString((Json::Value::Self *)&v1080, v88);
      v89 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
      v618 = (Json::Value::Self *)Json::Value::asInt(v89);
      v90 = gaia::Gaia::GetInstance();
      Matches = (Json::Value::Self *)gaia::Gaia_Osiris::DeleteEventAward(
                                 *(gaia::Gaia::Self **)(v90 + 580),
                                 (int)(uintptr_t)(v618),
                                 &v1080,
                                 (unsigned int)(uintptr_t)(v667),
                                 0,
                                 0,
                                 0);
      g4_std::string::Destroy(&v1080);
    }
    else if ( v3 > 4036 )
    {
      if ( v3 == 4038 )
      {
        v417 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "language"));
        Json::Value::asString((Json::Value::Self *)&v1091, v417);
        v418 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "sort_type"));
        Json::Value::asString((Json::Value::Self *)&v1090, v418);
        v419 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "object_id"));
        Json::Value::asString((Json::Value::Self *)&v1089, v419);
        v420 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "object_type");
        v745 = (Json::Value::Self *)Json::Value::asInt(v420);
        v805 = (gaia::Gaia::Self *)a3[7];
        v421 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
        v846 = (Json::Value::Self *)Json::Value::asInt(v421);
        v422 = gaia::Gaia::GetInstance();
        Matches = (Json::Value::Self *)gaia::Gaia_Osiris::ViewWall(
                                   *(gaia::Gaia::Self **)(v422 + 580),
                                   (int)(uintptr_t)(v846),
                                   (int)(uintptr_t)(v805),
                                   (int)(uintptr_t)(v745),
                                   &v1089,
                                   &v1090,
                                   &v1091,
                                   0,
                                   0,
                                   0);
        g4_std::string::Destroy(&v1089);
        g4_std::string::Destroy(&v1090);
        g4_std::string::Destroy(&v1091);
      }
      else if ( v3 <= 4038 )
      {
        v423 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "language"));
        Json::Value::asString((Json::Value::Self *)&v1085, v423);
        v424 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "text"));
        Json::Value::asString((Json::Value::Self *)&v1084, v424);
        v425 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "object_id"));
        Json::Value::asString((Json::Value::Self *)&v1083, v425);
        v426 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "object_type");
        v746 = (Json::Value::Self *)Json::Value::asInt(v426);
        v427 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
        v806 = (gaia::Gaia::Self *)Json::Value::asInt(v427);
        v428 = gaia::Gaia::GetInstance();
        Matches = (Json::Value::Self *)gaia::Gaia_Osiris::PostOnWall(
                                   *(gaia::Gaia::Self **)(v428 + 580),
                                   (int)(uintptr_t)(v806),
                                   (int)(uintptr_t)(v746),
                                   &v1083,
                                   &v1084,
                                   &v1085,
                                   0,
                                   0,
                                   0);
        g4_std::string::Destroy(&v1083);
        g4_std::string::Destroy(&v1084);
        g4_std::string::Destroy(&v1085);
      }
      else
      {
        v410 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "sort_type"));
        Json::Value::asString((Json::Value::Self *)&v1094, v410);
        v411 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "language"));
        Json::Value::asString((Json::Value::Self *)&v1093, v411);
        v412 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "targetUsername"));
        Json::Value::asString((Json::Value::Self *)&v1092, v412);
        v413 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "targetAccountType");
        v744 = (Json::Value::Self *)Json::Value::asInt(v413);
        v414 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "connection_type");
        v804 = (gaia::Gaia::Self *)Json::Value::asInt(v414);
        v845 = (Json::Value::Self *)a3[7];
        v415 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
        v873 = Json::Value::asInt(v415);
        v416 = gaia::Gaia::GetInstance();
        Matches = (Json::Value::Self *)gaia::Gaia_Osiris::ViewFeed(
                                   *(gaia::Gaia::Self **)(v416 + 580),
                                   v873,
                                   (int)(uintptr_t)(v845),
                                   (int)(uintptr_t)(v804),
                                   (int)(uintptr_t)(v744),
                                   &v1092,
                                   &v1093,
                                   &v1094,
                                   0,
                                   0,
                                   0);
        g4_std::string::Destroy(&v1092);
        g4_std::string::Destroy(&v1093);
        g4_std::string::Destroy(&v1094);
      }
    }
    else if ( v3 == 4034 )
    {
      v327 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "deliveryType");
      v737 = (Json::Value::Self *)Json::Value::asInt(v327);
      v328 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "leaderboard"));
      Json::Value::asString((Json::Value::Self *)&v1076, v328);
      v329 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "event_type"));
      Json::Value::asString((Json::Value::Self *)&v1075, v329);
      v330 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "eventId"));
      Json::Value::asString((Json::Value::Self *)&v1074, v330);
      v798 = (gaia::Gaia::Self *)a3[7];
      v331 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
      v840 = (Json::Value::Self *)Json::Value::asInt(v331);
      v332 = gaia::Gaia::GetInstance();
      Matches = (Json::Value::Self *)gaia::Gaia_Osiris::SetTournamentInfo(
                                 *(gaia::Gaia::Self **)(v332 + 580),
                                 (int)(uintptr_t)(v840),
                                 (int)(uintptr_t)(v798),
                                 &v1074,
                                 &v1075,
                                 &v1076,
                                 (int)(uintptr_t)(v737),
                                 0,
                                 0,
                                 0);
      g4_std::string::Destroy(&v1074);
      g4_std::string::Destroy(&v1075);
      g4_std::string::Destroy(&v1076);
    }
    else if ( v3 > 4034 )
    {
      v320 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "percentile"));
      Json::Value::asString((Json::Value::Self *)&v1079, v320);
      v321 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "gift"));
      Json::Value::asString((Json::Value::Self *)&v1078, v321);
      v322 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "end_rank");
      v736 = (Json::Value::Self *)Json::Value::asInt(v322);
      v323 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "start_rank");
      v797 = (gaia::Gaia::Self *)Json::Value::asInt(v323);
      v324 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "eventId"));
      Json::Value::asString((Json::Value::Self *)&v1077, v324);
      v325 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
      v839 = (Json::Value::Self *)Json::Value::asInt(v325);
      v326 = gaia::Gaia::GetInstance();
      Matches = (Json::Value::Self *)gaia::Gaia_Osiris::AddEventAward(
                                 *(gaia::Gaia::Self **)(v326 + 580),
                                 (int)(uintptr_t)(v839),
                                 &v1077,
                                 (unsigned int)(uintptr_t)(v797),
                                 (unsigned int)(uintptr_t)(v736),
                                 &v1078,
                                 &v1079,
                                 0,
                                 0,
                                 0);
      g4_std::string::Destroy(&v1077);
      g4_std::string::Destroy(&v1078);
      g4_std::string::Destroy(&v1079);
    }
    else if ( v3 == 4033 )
    {
      v28 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "offset");
      v702 = (Json::Value::Self *)Json::Value::asInt(v28);
      v29 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "limit");
      v768 = (gaia::Gaia::Self *)Json::Value::asInt(v29);
      v30 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "keywords"));
      Json::Value::asString((Json::Value::Self *)&v1073, v30);
      v31 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "status"));
      Json::Value::asString((Json::Value::Self *)&v1072, v31);
      v32 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "event_category"));
      Json::Value::asString((Json::Value::Self *)&v1071, v32);
      v822 = (Json::Value::Self *)a3[7];
      v33 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
      v858 = Json::Value::asInt(v33);
      v34 = gaia::Gaia::GetInstance();
      Matches = (Json::Value::Self *)gaia::Gaia_Osiris::SearchEvents(
                                 *(gaia::Gaia::Self **)(v34 + 580),
                                 v858,
                                 (int)(uintptr_t)(v822),
                                 &v1071,
                                 &v1072,
                                 &v1073,
                                 (unsigned int)(uintptr_t)(v768),
                                 (unsigned int)(uintptr_t)(v702),
                                 0,
                                 0,
                                 0);
      g4_std::string::Destroy(&v1071);
      g4_std::string::Destroy(&v1072);
      g4_std::string::Destroy(&v1073);
    }
  }
  else if ( v3 == 4509 )
  {
    v619 = (Json::Value::Self *)a3[15];
    v112 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "asset_name"));
    Json::Value::asString((Json::Value::Self *)&v1099, v112);
    v113 = gaia::Gaia::GetInstance();
    Matches = (Json::Value::Self *)gaia::Gaia_Iris::GetAssetETag(*(gaia::Gaia::Self **)(v113 + 584), &v1099, (int)(uintptr_t)(v619), 0, 0, 0);
    g4_std::string::Destroy(&v1099);
  }
  else if ( v3 > 4509 )
  {
    if ( v3 == 6504 )
    {
      v370 = a3[16];
      v371 = gaia::Gaia::GetInstance();
      Matches = (Json::Value::Self *)gaia::Gaia_Hestia::DispatchCurrentConfig(
                                 *(gaia::Gaia_Hestia::Self **)(v371 + 588),
                                 v370,
                                 0,
                                 0,
                                 0);
    }
    else if ( v3 > 6504 )
    {
      if ( v3 == 6506 )
      {
        v644 = (Json::Value::Self *)a3[7];
        v392 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
        v393 = Json::Value::asInt(v392);
        v394 = gaia::Gaia::GetInstance();
        Matches = (Json::Value::Self *)gaia::Gaia_Hestia::GetClusters(*(gaia::Gaia::Self **)(v394 + 588), v393, (int)(uintptr_t)(v644), 0, 0, 0);
      }
      else if ( v3 < 6506 )
      {
        v395 = a3[16];
        v396 = gaia::Gaia::GetInstance();
        Matches = (Json::Value::Self *)gaia::Gaia_Hestia::DispatchDefaultConfig(*(uint32_t *)(v396 + 588), v395, 0, 0, 0);
      }
      else if ( v3 == 6507 )
      {
        v683 = (Json::Value::Self *)a3[7];
        v389 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "credential"));
        Json::Value::asString((Json::Value::Self *)v1111, v389);
        v390 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
        v643 = (Json::Value::Self *)Json::Value::asInt(v390);
        v391 = gaia::Gaia::GetInstance();
        Matches = (Json::Value::Self *)gaia::Gaia_Hestia::GetClustersByUser(
                                   *(gaia::Gaia::Self **)(v391 + 588),
                                   (int)(uintptr_t)(v643),
                                   v1111,
                                   (int)(uintptr_t)(v683),
                                   0,
                                   0,
                                   0);
        g4_std::string::Destroy(v1111);
      }
    }
    else if ( v3 == 6502 )
    {
      v639 = (Json::Value::Self *)a3[15];
      v367 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "number");
      v368 = Json::Value::asInt(v367);
      v369 = gaia::Gaia::GetInstance();
      Matches = (Json::Value::Self *)gaia::Gaia_Hestia::RefreshConfigs(
                                 a1,
                                 *(gaia::Gaia_Hestia::Self **)(v369 + 588),
                                 v368,
                                 (int)(uintptr_t)(v639),
                                 0,
                                 0,
                                 0);
    }
    else if ( v3 > 6502 )
    {
      v638 = (Json::Value::Self *)a3[16];
      v365 = *(uint32_t *)(gaia::Gaia::GetInstance() + 588) + 104;
      v366 = gaia::Gaia::GetInstance();
      Matches = (Json::Value::Self *)gaia::Gaia_Hestia::InitializeCRM(
                                 a1,
                                 *(gaia::Gaia::Self **)(v366 + 588),
                                 v365,
                                 (int)(uintptr_t)(v638),
                                 0,
                                 0,
                                 0);
    }
    else if ( v3 == 6501 )
    {
      v62 = Json::Value::opIndex((Json::Value::Self *)(a3 + 3), (char *)&off_1B673D3);
      Json::Value::asString((Json::Value::Self *)&v1110, v62);
      v63 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "selector"));
      Json::Value::asString((Json::Value::Self *)&v1109, v63);
      v64 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "clusters_space"));
      Json::Value::asString((Json::Value::Self *)&v1108, v64);
      v65 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "profile_name"));
      Json::Value::asString((Json::Value::Self *)&v1107, v65);
      v707 = (Json::Value::Self *)a3[7];
      v66 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "Etag"));
      Json::Value::asString((Json::Value::Self *)&v1106, v66);
      v67 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
      v772 = (gaia::Gaia::Self *)Json::Value::asInt(v67);
      v68 = gaia::Gaia::GetInstance();
      Matches = (Json::Value::Self *)gaia::Gaia_Hestia::GetClientConfig(
                                 *(gaia::Gaia::Self **)(v68 + 588),
                                 (int)(uintptr_t)(v772),
                                 &v1106,
                                 (int)(uintptr_t)(v707),
                                 &v1107,
                                 &v1108,
                                 &v1109,
                                 &v1110,
                                 0,
                                 0,
                                 0);
      g4_std::string::Destroy(&v1106);
      g4_std::string::Destroy(&v1107);
      g4_std::string::Destroy(&v1108);
      g4_std::string::Destroy(&v1109);
      g4_std::string::Destroy(&v1110);
    }
  }
  else if ( v3 == 4505 )
  {
    v620 = (Json::Value::Self *)a3[7];
    v114 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "asset_name"));
    Json::Value::asString((Json::Value::Self *)&v1101, v114);
    v115 = gaia::Gaia::GetInstance();
    Matches = (Json::Value::Self *)gaia::Gaia_Iris::GetAssetSize(
                               *(gaia::Gaia_Iris::Self **)(v115 + 584),
                               &v1101,
                               (int)(uintptr_t)(v620),
                               0,
                               0,
                               0);
    g4_std::string::Destroy(&v1101);
  }
  else if ( v3 > 4505 )
  {
    if ( v3 == 4507 )
    {
      v686 = (void **)a3[15];
      v649 = (int *)a3[16];
      v444 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "coupon_code"));
      Json::Value::asString((Json::Value::Self *)&v1105, v444);
      v445 = gaia::Gaia::GetInstance();
      Matches = (Json::Value::Self *)gaia::Gaia_Iris::RedeemCoupon(*(gaia::Gaia::Self **)(v445 + 584), &v1105, v686, v649, 0, 0, 0);
      g4_std::string::Destroy(&v1105);
    }
    else if ( v3 <= 4507 )
    {
      v446 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "coupon_uses");
      v687 = (Json::Value::Self *)Json::Value::asUInt(v446);
      v447 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "number_of_coupons");
      v749 = (Json::Value::Self *)Json::Value::asUInt(v447);
      v448 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "coupon_length");
      v809 = (gaia::Gaia::Self *)Json::Value::asUInt(v448);
      v848 = (Json::Value::Self *)a3[15];
      v449 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "data"));
      Json::Value::asString((Json::Value::Self *)&v1104, v449);
      v450 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
      v451 = Json::Value::asInt(v450);
      v452 = gaia::Gaia::GetInstance();
      Matches = (Json::Value::Self *)gaia::Gaia_Iris::CreateCoupons(
                                 *(gaia::Gaia::Self **)(v452 + 584),
                                 v451,
                                 &v1104,
                                 (int)(uintptr_t)(v848),
                                 (unsigned int)(uintptr_t)(v809),
                                 (unsigned int)(uintptr_t)(v749),
                                 (unsigned int)(uintptr_t)(v687),
                                 0,
                                 0,
                                 0);
      g4_std::string::Destroy(&v1104);
    }
    else
    {
      v648 = (Json::Value::Self *)a3[15];
      v442 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "asset_name"));
      Json::Value::asString((Json::Value::Self *)&v1102, v442);
      v443 = gaia::Gaia::GetInstance();
      Matches = (Json::Value::Self *)gaia::Gaia_Iris::GetAssetURL(*(gaia::Gaia::Self **)(v443 + 584), &v1102, (int)(uintptr_t)(v648), 0, 0, 0);
      g4_std::string::Destroy(&v1102);
    }
  }
  else if ( v3 == 4503 )
  {
    v293 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "only_this_client");
    v733 = Json::Value::asBool(v293);
    v294 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "_override");
    v795 = Json::Value::asBool(v294);
    v295 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "dataSize");
    v838 = (Json::Value::Self *)Json::Value::asUInt(v295);
    v870 = (void *)a3[15];
    v296 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "asset_name"));
    Json::Value::asString((Json::Value::Self *)&v1103, v296);
    v297 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "accountType");
    v298 = Json::Value::asInt(v297);
    v299 = gaia::Gaia::GetInstance();
    Matches = (Json::Value::Self *)gaia::Gaia_Iris::UploadAsset(
                               *(gaia::Gaia::Self **)(v299 + 584),
                               v298,
                               &v1103,
                               v870,
                               (size_t)v838,
                               v795,
                               v733,
                               0,
                               0,
                               0);
    g4_std::string::Destroy(&v1103);
  }
  else if ( v3 > 4503 )
  {
    v634 = (Json::Value::Self *)a3[7];
    v291 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "asset_name"));
    Json::Value::asString((Json::Value::Self *)&v1100, v291);
    v292 = gaia::Gaia::GetInstance();
    Matches = (Json::Value::Self *)gaia::Gaia_Iris::GetAssetHash(
                               *(gaia::Gaia_Iris::Self **)(v292 + 584),
                               &v1100,
                               (int)(uintptr_t)(v634),
                               0,
                               0,
                               0);
    g4_std::string::Destroy(&v1100);
  }
  else if ( v3 == 4501 )
  {
    v4 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "toOffset");
    v613 = (Json::Value::Self *)Json::Value::asInt(v4);
    v5 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "fromOffset");
    v6 = Json::Value::asInt(v5);
    v699 = (int *)a3[16];
    v766 = (void **)a3[15];
    v663 = (Json::Value::Self *)v6;
    v7 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)(a3 + 3), "asset_name"));
    Json::Value::asString((Json::Value::Self *)&v1098, v7);
    v8 = gaia::Gaia::GetInstance();
    Matches = (Json::Value::Self *)gaia::Gaia_Iris::GetAsset(
                               *(gaia::Gaia_Iris::Self **)(v8 + 584),
                               &v1098,
                               v766,
                               v699,
                               (int)(uintptr_t)(v663),
                               (int)(uintptr_t)(v613),
                               0,
                               0,
                               0);
    g4_std::string::Destroy(&v1098);
  }
  gaia::Gaia::CompleteAsyncAction(a3, (int)(uintptr_t)(&v892), &Matches);
  result = v892;
  v10 = (void *)(v892 - 12);
  if ( (uint32_t *)(v892 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v892 - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy(v10)), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Gaia::RunInstalledAppDetection  (binary VA: 0x14e6f10)
// Original: gaia::Gaia::RunInstalledAppDetection
// ----------------------------------------------------------------------------
void gaia::Gaia::RunInstalledAppDetection()
{
  int v0;
  void **v1;
  void **v2;
  int v3;
  typedef void *_g4_t_v4[2];
  typedef const char *_g4_t_v5[4];
  typedef int _g4_t_v6;
  typedef char _g4_t_v7;
  typedef void *_g4_t_v8;
  typedef int _g4_t_v9;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v5)) > _g4_s1 ? (8u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v6)) > _g4_s2 ? (24u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v7)) > _g4_s3 ? (28u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v8)) > _g4_s4 ? (32u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v9)) > _g4_s5 ? (36u + sizeof(_g4_t_v9)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 24u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);

  gaia::GetApplist((gaia::Self *)v5);
  if ( (uint8_t)gaia::ShouldDetectInstalledApps(v5) != 0 )
  {
    gaia::GetAppsToCheckFor((gaia::Self *)&v6, (const Json::Value::Self *)v5);
    v0 = v9;
    v4[0] = v4;
    for ( v4[1] = v4; (char *)v0 != &v7; v0 = sub_1904890(v0) )
    {
      if ( gaia::IsAppInstalled((uint32_t *)(v0 + 20)) )
      {
        v3 = opNew(0xCu);
        if ( v3 != -8 )
          *(uint32_t *)(v3 + 8) = *(uint32_t *)(v0 + 16);
        sub_1901920(v3, v4);
      }
    }
    gaia::ReportInstalledApps((uint32_t **)v4);
    gaia::SaveCurrentTimestamp();
    v1 = (void **)v4[0];
    if ( v4[0] != v4 )
    {
      while ( 1 )
      {
        v2 = (void **)*v1;
        opDelete(v1);
        if ( v2 == v4 )
          break;
        v1 = v2;
      }
    }
    g4_std::Rb_tree_int_pair_int_const_strin_314bef::M_erase(
      (int)(uintptr_t)(&v6),
      v8);
  }
  Json::Value::Destroy((Json::Value::Self *)v5);
}


