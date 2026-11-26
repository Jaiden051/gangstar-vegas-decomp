#include "Core/Utils/DecompTypes.h"
#include "gaia_GlobalDeviceID.h"

// ----------------------------------------------------------------------------
// Function: gaia::GlobalDeviceID::NeedsLinkRefreshing  (binary VA: 0x14a9f30)
// Original: gaia::GlobalDeviceID::NeedsLinkRefreshing
// ----------------------------------------------------------------------------
int gaia::GlobalDeviceID::NeedsLinkRefreshing()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gaia::GlobalDeviceID::Destroy  (binary VA: 0x14aab90)
// Original: gaia::GlobalDeviceID::~GlobalDeviceID
// ----------------------------------------------------------------------------
void gaia::GlobalDeviceID::Destroy(gaia::GlobalDeviceID::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095BE8);
  v1 = *((uint32_t *)self + 39);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  gaia::BaseServiceManager::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gaia::GlobalDeviceID::Destroy_ea14aac00  (binary VA: 0x14aac00)
// Original: gaia::GlobalDeviceID::~GlobalDeviceID
// ----------------------------------------------------------------------------
void gaia::GlobalDeviceID::Destroy_ea14aac00(gaia::GlobalDeviceID::Self *self)
{
  gaia::GlobalDeviceID::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gaia::GlobalDeviceID::GetGlobalId  (binary VA: 0x14b5f30)
// Original: gaia::GlobalDeviceID::GetGlobalId
// ----------------------------------------------------------------------------
int gaia::GlobalDeviceID::GetGlobalId(int a1, int a2, char **a3, char **a4, char **a5, char **a6, char **a7, char **a8, char **a9, char **a10, char **a11, char **a12, char **a13, char **a14, char **a15, int a16, gaia::GaiaRequest::Self *a17)
{
  gaia::ServiceRequest::Self *v17;
  int v18;
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
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39[8];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v20)) > _g4_s0 ? (0u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v21)) > _g4_s1 ? (4u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v22)) > _g4_s2 ? (8u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v23)) > _g4_s3 ? (12u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v24)) > _g4_s4 ? (16u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v25)) > _g4_s5 ? (20u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v26)) > _g4_s6 ? (24u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v27)) > _g4_s7 ? (28u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v28)) > _g4_s8 ? (32u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v29)) > _g4_s9 ? (36u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v30)) > _g4_s10 ? (40u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v31)) > _g4_s11 ? (44u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v32)) > _g4_s12 ? (48u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v33)) > _g4_s13 ? (52u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v34)) > _g4_s14 ? (56u + sizeof(_g4_t_v34)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v35)) > _g4_s15 ? (60u + sizeof(_g4_t_v35)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v36)) > _g4_s16 ? (64u + sizeof(_g4_t_v36)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v37)) > _g4_s17 ? (68u + sizeof(_g4_t_v37)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v38)) > _g4_s18 ? (72u + sizeof(_g4_t_v38)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v39)) > _g4_s19 ? (76u + sizeof(_g4_t_v39)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 36u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 40u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 52u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 56u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 60u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 64u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 68u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 72u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 76u);

  v17 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v17, a17);
  *((uint32_t *)v17 + 8) = 8004;
  *((uint32_t *)v17 + 4) = 0;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "/get_global_id", (int)(uintptr_t)(&v20));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), (char *)&unk_1B15112, (int)(uintptr_t)(&v20) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "cid=", (int)(uintptr_t)(&v20) + 2);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v25), &v26, (char **)(a1 + 156));
  g4_std::string::Destroy(&v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "&source=Gaia_", (int)(uintptr_t)(&v20) + 3);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v25), &v27, a3);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "&device_type=", (int)(uintptr_t)(&v21));
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v25), &v28, a4);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "&device_version=", (int)(uintptr_t)(&v21) + 1);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v25), &v29, a5);
  g4_std::string::Destroy(&v29);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "&idfv=", (int)(uintptr_t)(&v21) + 2);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v25), &v30, a6);
  g4_std::string::Destroy(&v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "&idfa=", (int)(uintptr_t)(&v21) + 3);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v25), &v31, a7);
  g4_std::string::Destroy(&v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "&aid=", (int)(uintptr_t)(&v22));
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v25), &v32, a8);
  g4_std::string::Destroy(&v32);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "&mac=", (int)(uintptr_t)(&v22) + 1);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v25), &v33, a13);
  g4_std::string::Destroy(&v33);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "&macw32=", (int)(uintptr_t)(&v22) + 2);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v25), &v34, a14);
  g4_std::string::Destroy(&v34);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "&hdidfv=", (int)(uintptr_t)(&v22) + 3);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v25), &v35, a9);
  g4_std::string::Destroy(&v35);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "&imei=", (int)(uintptr_t)(&v23));
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v25), &v36, a10);
  g4_std::string::Destroy(&v36);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "&udid=", (int)(uintptr_t)(&v23) + 1);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v25), &v37, a11);
  g4_std::string::Destroy(&v37);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "&phid=", (int)(uintptr_t)(&v23) + 2);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v25), &v38, a15);
  g4_std::string::Destroy(&v38);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v39), "&sn=", (int)(uintptr_t)(&v23) + 3);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v25), v39, a12);
  g4_std::string::Destroy(v39);
  g4_std::string::assign_str((char *)v17 + 44, &v24);
  g4_std::string::assign_str((char *)v17 + 48, &v25);
  v18 = gaia::BaseServiceManager::SendCompleteRequest(a1, v17, a2);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v24);
  return v18;
}

// ----------------------------------------------------------------------------
// Function: gaia::GlobalDeviceID::GetDeviceId  (binary VA: 0x14b6450)
// Original: gaia::GlobalDeviceID::GetDeviceId
// ----------------------------------------------------------------------------
int gaia::GlobalDeviceID::GetDeviceId(int a1, int a2, char **a3, char **a4, char **a5, char **a6, char **a7, gaia::GaiaRequest::Self *a8)
{
  gaia::ServiceRequest::Self *v8;
  int v9;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v13)) > _g4_s2 ? (16u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v14)) > _g4_s3 ? (20u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v15)) > _g4_s4 ? (24u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v16)) > _g4_s5 ? (28u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v17)) > _g4_s6 ? (32u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v18)) > _g4_s7 ? (36u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v19)) > _g4_s8 ? (40u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v20)) > _g4_s9 ? (44u + sizeof(_g4_t_v20)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);

  v8 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v8, a8);
  *((uint32_t *)v8 + 8) = 8003;
  *((uint32_t *)v8 + 4) = 0;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "/get_device_id", (int)(uintptr_t)(&v11));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), (char *)&unk_1B15112, (int)(uintptr_t)(&v11) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "cid=", (int)(uintptr_t)(&v11) + 2);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v14), &v15, (char **)(a1 + 156));
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "&source=Gaia_", (int)(uintptr_t)(&v11) + 3);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v14), &v16, a3);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "&device_type=", (int)(uintptr_t)(&v12));
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v14), &v17, a4);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "&device_version=", (int)(uintptr_t)(&v12) + 1);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v14), &v18, a5);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "&global_device_id=", (int)(uintptr_t)(&v12) + 2);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v14), &v19, a6);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v20), "&device_id_type=", (int)(uintptr_t)(&v12) + 3);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v14), v20, a7);
  g4_std::string::Destroy(v20);
  g4_std::string::assign_str((char *)v8 + 44, &v13);
  g4_std::string::assign_str((char *)v8 + 48, &v14);
  v9 = gaia::BaseServiceManager::SendCompleteRequest(a1, v8, a2);
  g4_std::string::Destroy(&v14);
  g4_std::string::Destroy(&v13);
  return v9;
}

// ----------------------------------------------------------------------------
// Function: gaia::GlobalDeviceID::UpdateDeviceId  (binary VA: 0x14b6700)
// Original: gaia::GlobalDeviceID::UpdateDeviceId
// ----------------------------------------------------------------------------
int gaia::GlobalDeviceID::UpdateDeviceId(int a1, int a2, char **a3, char **a4, char **a5, char **a6, char **a7, char **a8, char **a9, char **a10, char **a11, char **a12, char **a13, char **a14, char **a15, char **a16, gaia::GaiaRequest::Self *a17)
{
  gaia::ServiceRequest::Self *v17;
  int v18;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint8_t _g4_t_v24[7];
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
  typedef int _g4_t_v40[8];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (11u + sizeof(_g4_t_v20)) > _g4_s0 ? (11u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v21)) > _g4_s1 ? (12u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v22)) > _g4_s2 ? (16u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v23)) > _g4_s3 ? (20u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v24)) > _g4_s4 ? (24u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v25)) > _g4_s5 ? (32u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v26)) > _g4_s6 ? (36u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v27)) > _g4_s7 ? (40u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v28)) > _g4_s8 ? (44u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v29)) > _g4_s9 ? (48u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v30)) > _g4_s10 ? (52u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v31)) > _g4_s11 ? (56u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v32)) > _g4_s12 ? (60u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v33)) > _g4_s13 ? (64u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v34)) > _g4_s14 ? (68u + sizeof(_g4_t_v34)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v35)) > _g4_s15 ? (72u + sizeof(_g4_t_v35)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v36)) > _g4_s16 ? (76u + sizeof(_g4_t_v36)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v37)) > _g4_s17 ? (80u + sizeof(_g4_t_v37)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v38)) > _g4_s18 ? (84u + sizeof(_g4_t_v38)) : _g4_s18,
    _g4_s20 = (88u + sizeof(_g4_t_v39)) > _g4_s19 ? (88u + sizeof(_g4_t_v39)) : _g4_s19,
    _g4_s21 = (92u + sizeof(_g4_t_v40)) > _g4_s20 ? (92u + sizeof(_g4_t_v40)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 11u);
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

  v17 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v17, a17);
  *((uint32_t *)v17 + 8) = 8002;
  *((uint32_t *)v17 + 4) = 0;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24[4]), "/update_device_id", (int)(uintptr_t)(&v20));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), (char *)&unk_1B15112, (int)(uintptr_t)(&v21));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "cid=", (int)(uintptr_t)(&v21) + 1);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v25), &v26, (char **)(a1 + 156));
  g4_std::string::Destroy(&v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "&source=Gaia_", (int)(uintptr_t)(&v21) + 2);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v25), &v27, a3);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "&global_device_id=", (int)(uintptr_t)(&v21) + 3);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v25), &v28, a4);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "&device_type=", (int)(uintptr_t)(&v22));
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v25), &v29, a5);
  g4_std::string::Destroy(&v29);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "&device_version=", (int)(uintptr_t)(&v22) + 1);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v25), &v30, a6);
  g4_std::string::Destroy(&v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "&idfv=", (int)(uintptr_t)(&v22) + 2);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v25), &v31, a7);
  g4_std::string::Destroy(&v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "&idfa=", (int)(uintptr_t)(&v22) + 3);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v25), &v32, a8);
  g4_std::string::Destroy(&v32);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "&aid=", (int)(uintptr_t)(&v23));
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v25), &v33, a9);
  g4_std::string::Destroy(&v33);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "&mac=", (int)(uintptr_t)(&v23) + 1);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v25), &v34, a14);
  g4_std::string::Destroy(&v34);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "&macw32=", (int)(uintptr_t)(&v23) + 2);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v25), &v35, a15);
  g4_std::string::Destroy(&v35);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "&hdidfv=", (int)(uintptr_t)(&v23) + 3);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v25), &v36, a10);
  g4_std::string::Destroy(&v36);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "&imei=", (int)(uintptr_t)(v24));
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v25), &v37, a11);
  g4_std::string::Destroy(&v37);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "&udid=", (int)(uintptr_t)(&v24[1]));
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v25), &v38, a12);
  g4_std::string::Destroy(&v38);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "&phid=", (int)(uintptr_t)(&v24[2]));
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v25), &v39, a16);
  g4_std::string::Destroy(&v39);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v40), "&sn=", (int)(uintptr_t)(&v24[3]));
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v25), v40, a13);
  g4_std::string::Destroy(v40);
  g4_std::string::assign_str((char *)v17 + 44, &v24[4]);
  g4_std::string::assign_str((char *)v17 + 48, &v25);
  v18 = gaia::BaseServiceManager::SendCompleteRequest(a1, v17, a2);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v24[4]);
  return v18;
}

// ----------------------------------------------------------------------------
// Function: gaia::GlobalDeviceID::AssignGlobalId  (binary VA: 0x14bf970)
// Original: gaia::GlobalDeviceID::AssignGlobalId
// ----------------------------------------------------------------------------
int gaia::GlobalDeviceID::AssignGlobalId(int a1, int a2, char **a3, char **a4, char **a5, char **a6, char **a7, char **a8, char **a9, char **a10, char **a11, char **a12, char **a13, char **a14, char **a15, int a16, gaia::GaiaRequest::Self *a17)
{
  int v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *i;
  int v21;
  typedef int _g4_t_v23;
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
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42[8];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v23)) > _g4_s0 ? (0u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v24)) > _g4_s1 ? (4u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v25)) > _g4_s2 ? (8u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v26)) > _g4_s3 ? (12u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v27)) > _g4_s4 ? (16u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v28)) > _g4_s5 ? (20u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v29)) > _g4_s6 ? (24u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v30)) > _g4_s7 ? (28u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v31)) > _g4_s8 ? (32u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v32)) > _g4_s9 ? (36u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v33)) > _g4_s10 ? (40u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v34)) > _g4_s11 ? (44u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v35)) > _g4_s12 ? (48u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v36)) > _g4_s13 ? (52u + sizeof(_g4_t_v36)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v37)) > _g4_s14 ? (56u + sizeof(_g4_t_v37)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v38)) > _g4_s15 ? (60u + sizeof(_g4_t_v38)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v39)) > _g4_s16 ? (64u + sizeof(_g4_t_v39)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v40)) > _g4_s17 ? (68u + sizeof(_g4_t_v40)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v41)) > _g4_s18 ? (72u + sizeof(_g4_t_v41)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v42)) > _g4_s19 ? (76u + sizeof(_g4_t_v42)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 4u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 36u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 40u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 44u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 48u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 52u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 56u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 60u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 64u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 68u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 72u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 76u);

  v17 = opNew(0x98u);
  gaia::ServiceRequest::Construct((gaia::ServiceRequest::Self *)v17, a17);
  *(uint32_t *)(v17 + 32) = 8001;
  *(uint32_t *)(v17 + 16) = 0;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "/assign_global_id", (int)(uintptr_t)(&v23));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), (char *)&unk_1B15112, (int)(uintptr_t)(&v23) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "cid=", (int)(uintptr_t)(&v23) + 2);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v28), &v29, (char **)(a1 + 156));
  g4_std::string::Destroy(&v29);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "&source=Gaia_", (int)(uintptr_t)(&v23) + 3);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v28), &v30, a3);
  g4_std::string::Destroy(&v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "&device_type=", (int)(uintptr_t)(&v24));
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v28), &v31, a4);
  g4_std::string::Destroy(&v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "&device_version=", (int)(uintptr_t)(&v24) + 1);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v28), &v32, a5);
  g4_std::string::Destroy(&v32);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "&idfv=", (int)(uintptr_t)(&v24) + 2);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v28), &v33, a6);
  g4_std::string::Destroy(&v33);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "&idfa=", (int)(uintptr_t)(&v24) + 3);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v28), &v34, a7);
  g4_std::string::Destroy(&v34);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "&aid=", (int)(uintptr_t)(&v25));
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v28), &v35, a8);
  g4_std::string::Destroy(&v35);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "&mac=", (int)(uintptr_t)(&v25) + 1);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v28), &v36, a13);
  g4_std::string::Destroy(&v36);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "&macw32=", (int)(uintptr_t)(&v25) + 2);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v28), &v37, a14);
  g4_std::string::Destroy(&v37);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "&hdidfv=", (int)(uintptr_t)(&v25) + 3);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v28), &v38, a9);
  g4_std::string::Destroy(&v38);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "&imei=", (int)(uintptr_t)(&v26));
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v28), &v39, a10);
  g4_std::string::Destroy(&v39);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "&udid=", (int)(uintptr_t)(&v26) + 1);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v28), &v40, a11);
  g4_std::string::Destroy(&v40);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "&phid=", (int)(uintptr_t)(&v26) + 2);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v28), &v41, a15);
  g4_std::string::Destroy(&v41);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v42), "&sn=", (int)(uintptr_t)(&v26) + 3);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v28), v42, a12);
  g4_std::string::Destroy(v42);
  if ( a16 != v17 + 60 )
  {
    std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
      v17 + 60,
      *(void **)(v17 + 68));
    *(uint32_t *)(v17 + 68) = 0;
    *(uint32_t *)(v17 + 72) = v17 + 64;
    *(uint32_t *)(v17 + 76) = v17 + 64;
    *(uint32_t *)(v17 + 80) = 0;
    v18 = *(uint32_t **)(a16 + 8);
    if ( v18 != nullptr )
    {
      v19 = g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_copy(
              v17 + 60,
              v18,
              v17 + 64);
      *(uint32_t *)(v17 + 68) = (uint32_t)(uintptr_t)(v19);
      for ( i = v19; i[2] != 0; i = (uint32_t *)i[2] )
        ;
      *(uint32_t *)(v17 + 72) = (uint32_t)(uintptr_t)(i);
      while ( v19[3] != 0 )
        v19 = (uint32_t *)v19[3];
      *(uint32_t *)(v17 + 76) = (uint32_t)(uintptr_t)(v19);
      *(uint32_t *)(v17 + 80) = *(uint32_t *)(a16 + 20);
    }
  }
  g4_std::string::assign_str(v17 + 44, &v27);
  g4_std::string::assign_str(v17 + 48, &v28);
  v21 = gaia::BaseServiceManager::SendCompleteRequest(a1, (gaia::ServiceRequest::Self *)v17, a2);
  g4_std::string::Destroy(&v28);
  g4_std::string::Destroy(&v27);
  return v21;
}

// ----------------------------------------------------------------------------
// Function: gaia::GlobalDeviceID::Construct  (binary VA: 0x14c0d50)
// Original: gaia::GlobalDeviceID::GlobalDeviceID
// ----------------------------------------------------------------------------
int gaia::GlobalDeviceID::Construct(gaia::BaseServiceManager::Self *a1, int a2, int a3)
{
  typedef int _g4_t_MaxParalelRequests;
  typedef int _g4_t_v5[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_MaxParalelRequests)) > _g4_s0 ? (12u + sizeof(_g4_t_MaxParalelRequests)) : _g4_s0,
    _g4_s2 = (27u + sizeof(_g4_t_v5)) > _g4_s1 ? (27u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_MaxParalelRequests &MaxParalelRequests = *reinterpret_cast<_g4_t_MaxParalelRequests *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 27u);

  MaxParalelRequests = gaia::utils::GetMaxParalelRequests(15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v5) + 1, "globalDeviceID", (int)(uintptr_t)(v5));
  gaia::BaseServiceManager::Construct(a1, (int)(uintptr_t)(v5) + 1, a3, MaxParalelRequests);
  g4_std::string::Destroy((char *)v5 + 1);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2095BE8);
  *((uint32_t *)a1 + 39) = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std::string::assign_str((char *)a1 + 52, a2);
  return (int)(uintptr_t)(g4_std::string::assign_str((char *)a1 + 156, a3));
}


