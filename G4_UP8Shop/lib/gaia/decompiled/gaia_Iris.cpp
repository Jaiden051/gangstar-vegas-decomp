#include "Core/Utils/DecompTypes.h"
#include "gaia_Iris.h"

// ----------------------------------------------------------------------------
// Function: gaia::Iris::Destroy  (binary VA: 0x14aa8c0)
// Original: gaia::Iris::~Iris
// ----------------------------------------------------------------------------
void gaia::Iris::Destroy(gaia::Iris::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095CA8);
  gaia::BaseServiceManager::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gaia::Iris::Destroy_ea14aa8f0  (binary VA: 0x14aa8f0)
// Original: gaia::Iris::~Iris
// ----------------------------------------------------------------------------
void gaia::Iris::Destroy_ea14aa8f0(gaia::Iris::Self *self)
{
  gaia::Iris::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gaia::Iris::UploadAsset  (binary VA: 0x14b1190)
// Original: gaia::Iris::UploadAsset
// ----------------------------------------------------------------------------
int gaia::Iris::UploadAsset(char **a1, char **a2, char **a3, char **a4, char a5, char a6, gaia::GaiaRequest::Self *a7)
{
  gaia::ServiceRequest::Self *v7;
  int v8;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int64_t _g4_t_v12 __attribute__((aligned(1)));
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (15u + sizeof(_g4_t_v10)) > _g4_s0 ? (15u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v11)) > _g4_s1 ? (16u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v12)) > _g4_s2 ? (20u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v13)) > _g4_s3 ? (28u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v14)) > _g4_s4 ? (32u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v15)) > _g4_s5 ? (36u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v16)) > _g4_s6 ? (40u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v17)) > _g4_s7 ? (44u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v18)) > _g4_s8 ? (48u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v19)) > _g4_s9 ? (52u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v20)) > _g4_s10 ? (56u + sizeof(_g4_t_v20)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v21)) > _g4_s11 ? (60u + sizeof(_g4_t_v21)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 15u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 52u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 56u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 60u);

  v7 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v7, a7);
  *((uint32_t *)v7 + 8) = 4503;
  *((uint32_t *)v7 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v7) + 40, "https://", 8u);
  HIDWORD(v12) = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "/assets/", (int)(uintptr_t)(&v10));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v12) + 4, &v13, a1 + 33);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "/", (int)(uintptr_t)(&v11));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v12) + 4, &v14, a3);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), (char *)&unk_1B15112, (int)(uintptr_t)(&v11) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "access_token=", (int)(uintptr_t)(&v11) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v15), &v16, a2);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "&data=", (int)(uintptr_t)(&v11) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v15), &v17, a4);
  g4_std::string::Destroy(&v17);
  if ( a5 != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "true", (int)(uintptr_t)(&v12) + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "&override=", (int)(uintptr_t)(&v12));
    gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v15), &v18, (char **)&v19);
    g4_std::string::Destroy(&v18);
    g4_std::string::Destroy(&v19);
  }
  if ( a6 != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v21), "true", (int)(uintptr_t)(&v12) + 3);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "&only_this_client=", (int)(uintptr_t)(&v12) + 2);
    gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v15), &v20, (char **)v21);
    g4_std::string::Destroy(&v20);
    g4_std::string::Destroy(v21);
  }
  g4_std::string::assign_str((char *)v7 + 44, (char *)&v12 + 4);
  g4_std::string::assign_str((char *)v7 + 48, &v15);
  v8 = gaia::BaseServiceManager::SendCompleteRequest((gaia::BaseServiceManager::Self *)a1, v7);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy((char *)&v12 + 4);
  return v8;
}

// ----------------------------------------------------------------------------
// Function: gaia::Iris::GetAssetURL  (binary VA: 0x14b5dd0)
// Original: gaia::Iris::GetAssetURL
// ----------------------------------------------------------------------------
int gaia::Iris::GetAssetURL(int a1, char **a2, int a3, gaia::GaiaRequest::Self *a4)
{
  gaia::ServiceRequest::Self *v4;
  int v5;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (1u + sizeof(_g4_t_v7)) > _g4_s0 ? (1u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v9)) > _g4_s2 ? (8u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v10)) > _g4_s3 ? (12u + sizeof(_g4_t_v10)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 1u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);

  v4 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v4, a4);
  *((uint32_t *)v4 + 8) = 4508;
  g4_std_compat::string_assign((int)(uintptr_t)(v4) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), (char *)&unk_1B15112, (int)(uintptr_t)(&v7));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "/assets/", (int)(uintptr_t)(&v7) + 1);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v8), &v9, (char **)(a1 + 132));
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v10), "/", (int)(uintptr_t)(&v7) + 2);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v8), v10, a2);
  g4_std::string::Destroy(v10);
  g4_std::string::append((int)(uintptr_t)(&v8), "/url", 4u);
  g4_std::string::assign_str((char *)v4 + 44, &v8);
  v5 = gaia::BaseServiceManager::SendCompleteRequest(a1, v4, a3);
  g4_std::string::Destroy(&v8);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: gaia::Iris::RedeemCoupon  (binary VA: 0x14b9460)
// Original: gaia::Iris::RedeemCoupon
// ----------------------------------------------------------------------------
int gaia::Iris::RedeemCoupon(char **a1, char **a2, void **a3, int *a4, gaia::GaiaRequest::Self *a5)
{
  gaia::ServiceRequest::Self *v5;
  int v6;
  typedef uint16_t _g4_t_v8[3];
  typedef int _g4_t_v9;
  typedef int _g4_t_v10[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (2u + sizeof(_g4_t_v8)) > _g4_s0 ? (2u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v9)) > _g4_s1 ? (8u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v10)) > _g4_s2 ? (12u + sizeof(_g4_t_v10)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 2u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);

  v5 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v5, a5);
  *((uint32_t *)v5 + 8) = 4507;
  g4_std_compat::string_assign((int)(uintptr_t)(v5) + 40, "https://", 8u);
  *(uint32_t *)&v8[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "/coupons/", (int)(uintptr_t)(v8));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v8[1]), &v9, a1 + 33);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v10), "/", (int)(uintptr_t)(v8) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v8[1]), v10, a2);
  g4_std::string::Destroy(v10);
  g4_std::string::assign_str((char *)v5 + 44, &v8[1]);
  v6 = gaia::BaseServiceManager::SendCompleteRequest((gaia::BaseServiceManager::Self *)a1, v5, a3, a4);
  g4_std::string::Destroy(&v8[1]);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gaia::Iris::GetAssetMetadata  (binary VA: 0x14b95a0)
// Original: gaia::Iris::GetAssetMetadata
// ----------------------------------------------------------------------------
int gaia::Iris::GetAssetMetadata(char **a1, char **a2, char **a3, void **a4, int *a5, gaia::GaiaRequest::Self *a6)
{
  gaia::ServiceRequest::Self *v6;
  int v7;
  typedef uint8_t _g4_t_v9[7];
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (13u + sizeof(_g4_t_v9)) > _g4_s0 ? (13u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v10)) > _g4_s1 ? (20u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v11)) > _g4_s2 ? (24u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v12)) > _g4_s3 ? (28u + sizeof(_g4_t_v12)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 13u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  v6 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v6, a6);
  if ( g4_std::string::compare((int)(uintptr_t)(a3), "hash") == 0 )
    *((uint32_t *)v6 + 8) = 4504;
  if ( g4_std::string::compare((int)(uintptr_t)(a3), "size") == 0 )
    *((uint32_t *)v6 + 8) = 4505;
  g4_std_compat::string_assign((int)(uintptr_t)(v6) + 40, "https://", 8u);
  *(uint32_t *)&v9[3] = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "/assets/", (int)(uintptr_t)(v9));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v9[3]), &v10, a1 + 33);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "/", (int)(uintptr_t)(&v9[1]));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v9[3]), &v11, a2);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v12), "/metadata/", (int)(uintptr_t)(&v9[2]));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v9[3]), v12, a3);
  g4_std::string::Destroy(v12);
  g4_std::string::assign_str((char *)v6 + 44, &v9[3]);
  v7 = gaia::BaseServiceManager::SendCompleteRequest((gaia::BaseServiceManager::Self *)a1, v6, a4, a5);
  g4_std::string::Destroy(&v9[3]);
  return v7;
}

// ----------------------------------------------------------------------------
// Function: gaia::Iris::CreateCoupons  (binary VA: 0x14baf80)
// Original: gaia::Iris::CreateCoupons
// ----------------------------------------------------------------------------
int gaia::Iris::CreateCoupons(int a1, char **a2, char **a3, int a4, int a5, int a6, int a7, gaia::GaiaRequest::Self *a8)
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
  *((uint32_t *)v8 + 8) = 4506;
  *((uint32_t *)v8 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v8) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), (char *)&unk_1B15112, (int)(uintptr_t)(&v11));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "/coupons/", (int)(uintptr_t)(&v11) + 1);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v13), &v14, (char **)(a1 + 132));
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), (char *)&unk_1B15112, (int)(uintptr_t)(&v11) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "access_token=", (int)(uintptr_t)(&v11) + 3);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v15), &v16, a2);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "&data=", (int)(uintptr_t)(&v12));
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v15), &v17, a3);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "&num=", (int)(uintptr_t)(&v12) + 1);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v15), &v18, &a5, 0);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "&length=", (int)(uintptr_t)(&v12) + 2);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v15), &v19, &a4, 0);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v20), "&uses=", (int)(uintptr_t)(&v12) + 3);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v15), v20, &a6, 0);
  g4_std::string::Destroy(v20);
  g4_std::string::assign_str((char *)v8 + 44, &v13);
  g4_std::string::assign_str((char *)v8 + 48, &v15);
  v9 = gaia::BaseServiceManager::SendCompleteRequest(a1, v8, a7);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v13);
  return v9;
}

// ----------------------------------------------------------------------------
// Function: gaia::Iris::Construct  (binary VA: 0x14c0b10)
// Original: gaia::Iris::Iris
// ----------------------------------------------------------------------------
int gaia::Iris::Construct(gaia::BaseServiceManager::Self *a1, int a2, int a3)
{
  int MaxParalelRequests;
  int v5[4];

  MaxParalelRequests = gaia::utils::GetMaxParalelRequests(6);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v5) + 1, "iris", (int)(uintptr_t)(v5));
  gaia::BaseServiceManager::Construct(a1, (int)(uintptr_t)(v5) + 1, a3, MaxParalelRequests);
  g4_std::string::Destroy((char *)v5 + 1);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2095CA8);
  return (int)(uintptr_t)(g4_std::string::assign_str((char *)a1 + 52, a2));
}

// ----------------------------------------------------------------------------
// Function: gaia::Iris::GetAssetETag  (binary VA: 0x14c3f80)
// Original: gaia::Iris::GetAssetETag
// ----------------------------------------------------------------------------
int gaia::Iris::GetAssetETag(char **a1, char **a2, uint32_t *a3, gaia::GaiaRequest::Self *a4)
{
  int v4;
  size_t v5;
  size_t v6;
  size_t n;
  int v8;
  int v9;
  size_t v10;
  size_t v11;
  int v12;
  int v13;
  int v14;
  size_t v15;
  size_t v16;
  size_t v17;
  int v18;
  int v19;
  size_t v20;
  size_t v21;
  int v22;
  int v23;
  int v24;
  size_t v25;
  size_t v26;
  size_t v27;
  int v28;
  int v29;
  size_t v30;
  size_t v31;
  int v32;
  int v33;
  int v35;
  size_t v36;
  size_t v37;
  size_t v38;
  int v39;
  int v40;
  size_t v41;
  size_t v42;
  int v43;
  int v44;
  typedef void *_g4_t_s2;
  typedef void *_g4_t_s1;
  typedef void *_g4_t_v47;
  typedef void *_g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef gaia::ServiceRequest::Self *_g4_t_v53;
  typedef char *_g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56[4];
  typedef int _g4_t_v57;
  typedef int64_t _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef uint32_t *_g4_t_v65;
  typedef uint32_t *_g4_t_v66;
  typedef uint32_t *_g4_t_v67;
  typedef uint32_t *_g4_t_v68;
  typedef const void *_g4_t_v69;
  typedef char _g4_t_v70[4];
  typedef const void *_g4_t_v71;
  typedef char _g4_t_v72[4];
  typedef const void *_g4_t_v73;
  typedef char _g4_t_v74[4];
  typedef const void *_g4_t_v75;
  typedef uint8_t _g4_t_v76[32];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (12u + sizeof(_g4_t_s2)) > _g4_s0 ? (12u + sizeof(_g4_t_s2)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_s1)) > _g4_s1 ? (12u + sizeof(_g4_t_s1)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v47)) > _g4_s2 ? (12u + sizeof(_g4_t_v47)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v48)) > _g4_s3 ? (12u + sizeof(_g4_t_v48)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v49)) > _g4_s4 ? (16u + sizeof(_g4_t_v49)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v50)) > _g4_s5 ? (16u + sizeof(_g4_t_v50)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v51)) > _g4_s6 ? (16u + sizeof(_g4_t_v51)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v52)) > _g4_s7 ? (16u + sizeof(_g4_t_v52)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v53)) > _g4_s8 ? (20u + sizeof(_g4_t_v53)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v54)) > _g4_s9 ? (24u + sizeof(_g4_t_v54)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v55)) > _g4_s10 ? (28u + sizeof(_g4_t_v55)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v56)) > _g4_s11 ? (44u + sizeof(_g4_t_v56)) : _g4_s11,
    _g4_s13 = (62u + sizeof(_g4_t_v57)) > _g4_s12 ? (62u + sizeof(_g4_t_v57)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v58)) > _g4_s13 ? (64u + sizeof(_g4_t_v58)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v59)) > _g4_s14 ? (72u + sizeof(_g4_t_v59)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v60)) > _g4_s15 ? (76u + sizeof(_g4_t_v60)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v61)) > _g4_s16 ? (80u + sizeof(_g4_t_v61)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v62)) > _g4_s17 ? (84u + sizeof(_g4_t_v62)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v63)) > _g4_s18 ? (88u + sizeof(_g4_t_v63)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v64)) > _g4_s19 ? (92u + sizeof(_g4_t_v64)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v65)) > _g4_s20 ? (96u + sizeof(_g4_t_v65)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v66)) > _g4_s21 ? (100u + sizeof(_g4_t_v66)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v67)) > _g4_s22 ? (104u + sizeof(_g4_t_v67)) : _g4_s22,
    _g4_s24 = (108u + sizeof(_g4_t_v68)) > _g4_s23 ? (108u + sizeof(_g4_t_v68)) : _g4_s23,
    _g4_s25 = (112u + sizeof(_g4_t_v69)) > _g4_s24 ? (112u + sizeof(_g4_t_v69)) : _g4_s24,
    _g4_s26 = (116u + sizeof(_g4_t_v70)) > _g4_s25 ? (116u + sizeof(_g4_t_v70)) : _g4_s25,
    _g4_s27 = (120u + sizeof(_g4_t_v71)) > _g4_s26 ? (120u + sizeof(_g4_t_v71)) : _g4_s26,
    _g4_s28 = (124u + sizeof(_g4_t_v72)) > _g4_s27 ? (124u + sizeof(_g4_t_v72)) : _g4_s27,
    _g4_s29 = (128u + sizeof(_g4_t_v73)) > _g4_s28 ? (128u + sizeof(_g4_t_v73)) : _g4_s28,
    _g4_s30 = (132u + sizeof(_g4_t_v74)) > _g4_s29 ? (132u + sizeof(_g4_t_v74)) : _g4_s29,
    _g4_s31 = (136u + sizeof(_g4_t_v75)) > _g4_s30 ? (136u + sizeof(_g4_t_v75)) : _g4_s30,
    _g4_s32 = (140u + sizeof(_g4_t_v76)) > _g4_s31 ? (140u + sizeof(_g4_t_v76)) : _g4_s31
  };
  alignas(16) uint8_t _g4_sf[_g4_s32];
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 12u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 12u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 12u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 12u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 16u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 16u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 16u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 16u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 20u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 24u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 28u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 44u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 62u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 64u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 72u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 76u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 80u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 84u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 88u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 92u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 96u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 100u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 104u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 108u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 112u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 116u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 120u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 124u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 128u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 132u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 136u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 140u);

  v53 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v53, a4);
  gaia::ServiceRequest::Grab(v53);
  *((uint32_t *)v53 + 8) = 4509;
  *((uint32_t *)v53 + 4) = 3;
  *((uint8_t *)v53 + 108) = 0;
  g4_std_compat::string_assign((int)(uintptr_t)(v53) + 40, "https://", 8u);
  HIDWORD(v58) = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v59), "/assets/", (int)(uintptr_t)(&v57));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v58) + 4, &v59, a1 + 33);
  g4_std::string::Destroy(&v59);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v60), "/", (int)(uintptr_t)(&v57) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v58) + 4, &v60, a2);
  g4_std::string::Destroy(&v60);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v61), "ETag", (int)(uintptr_t)(&v58));
  v54 = (char *)v53 + 88;
  v4 = *((uint32_t *)v53 + 23);
  if ( v4 == 0 )
  {
    v49 = (int)(uintptr_t)(v53) + 88;
LABEL_68:
    v65 = &dword_213B814;
    g4_std::string::construct_copy(&v69, &v61);
    g4_std::string::construct_copy(v70, &v65);
    g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_insert_unique(
      v56,
      (uint32_t *)v53 + 21,
      v49,
      &v69);
    v49 = v56[0];
    g4_std::string::Destroy(v70);
    g4_std::string::Destroy(&v69);
    g4_std::string::Destroy(&v65);
    goto LABEL_16;
  }
  s2 = (void *)v61;
  v5 = *(uint32_t *)(v61 - 12);
  v49 = (int)(uintptr_t)(v53) + 88;
  do
  {
    while ( 1 )
    {
      v6 = *(uint32_t *)(*(uint32_t *)(v4 + 16) - 12);
      n = v6;
      if ( v5 <= v6 )
        n = v5;
      v8 = v6 - v5;
      v9 = memcmp(*(const void **)(v4 + 16), s2, n);
      if ( v9 == 0 )
        v9 = v8;
      if ( v9 < 0 )
        break;
      v49 = v4;
      v4 = *(uint32_t *)(v4 + 8);
      if ( v4 == 0 )
        goto LABEL_10;
    }
    v4 = *(uint32_t *)(v4 + 12);
  }
  while ( v4 != 0 );
LABEL_10:
  if ( v54 == (char *)v49 )
    goto LABEL_68;
  v10 = *(uint32_t *)(*(uint32_t *)(v49 + 16) - 12);
  v11 = v10;
  if ( v5 <= v10 )
    v11 = v5;
  v12 = v5 - v10;
  v13 = memcmp(s2, *(const void **)(v49 + 16), v11);
  if ( v13 == 0 )
    v13 = v12;
  if ( v13 < 0 )
    goto LABEL_68;
LABEL_16:
  g4_std_compat::string_assign(v49 + 20, &unk_1B15112, 0);
  g4_std::string::Destroy(&v61);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v62), "Etag", (int)(uintptr_t)(&v58) + 1);
  v14 = *((uint32_t *)v53 + 23);
  if ( v14 == 0 )
  {
    v50 = (int)(uintptr_t)(v53) + 88;
LABEL_70:
    v66 = &dword_213B814;
    g4_std::string::construct_copy(&v71, &v62);
    g4_std::string::construct_copy(v72, &v66);
    g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_insert_unique(
      v56,
      (uint32_t *)v53 + 21,
      v50,
      &v71);
    v50 = v56[0];
    g4_std::string::Destroy(v72);
    g4_std::string::Destroy(&v71);
    g4_std::string::Destroy(&v66);
    goto LABEL_31;
  }
  s1 = (void *)v62;
  v15 = *(uint32_t *)(v62 - 12);
  v50 = (int)(uintptr_t)(v53) + 88;
  do
  {
    while ( 1 )
    {
      v16 = v15;
      v17 = *(uint32_t *)(*(uint32_t *)(v14 + 16) - 12);
      if ( v17 <= v15 )
        v16 = *(uint32_t *)(*(uint32_t *)(v14 + 16) - 12);
      v18 = v17 - v15;
      v19 = memcmp(*(const void **)(v14 + 16), s1, v16);
      if ( v19 == 0 )
        v19 = v18;
      if ( v19 < 0 )
        break;
      v50 = v14;
      v14 = *(uint32_t *)(v14 + 8);
      if ( v14 == 0 )
        goto LABEL_25;
    }
    v14 = *(uint32_t *)(v14 + 12);
  }
  while ( v14 != 0 );
LABEL_25:
  if ( v54 == (char *)v50 )
    goto LABEL_70;
  v20 = v15;
  v21 = *(uint32_t *)(*(uint32_t *)(v50 + 16) - 12);
  if ( v21 <= v15 )
    v20 = *(uint32_t *)(*(uint32_t *)(v50 + 16) - 12);
  v22 = v15 - v21;
  v23 = memcmp(s1, *(const void **)(v50 + 16), v20);
  if ( v23 == 0 )
    v23 = v22;
  if ( v23 < 0 )
    goto LABEL_70;
LABEL_31:
  g4_std_compat::string_assign(v50 + 20, &unk_1B15112, 0);
  g4_std::string::Destroy(&v62);
  g4_std::string::assign_str((char *)v53 + 44, (char *)&v58 + 4);
  v55 = gaia::BaseServiceManager::SendCompleteRequest((gaia::BaseServiceManager::Self *)a1, v53);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v63), "ETag", (int)(uintptr_t)(&v58) + 2);
  v24 = *((uint32_t *)v53 + 23);
  if ( v24 == 0 )
  {
    v51 = (int)(uintptr_t)(v53) + 88;
LABEL_66:
    v67 = &dword_213B814;
    g4_std::string::construct_copy(&v73, &v63);
    g4_std::string::construct_copy(v74, &v67);
    g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_insert_unique(
      v56,
      (uint32_t *)v53 + 21,
      v51,
      &v73);
    v51 = v56[0];
    g4_std::string::Destroy(v74);
    g4_std::string::Destroy(&v73);
    g4_std::string::Destroy(&v67);
    goto LABEL_46;
  }
  v47 = (void *)v63;
  v25 = *(uint32_t *)(v63 - 12);
  v51 = (int)(uintptr_t)(v53) + 88;
  do
  {
    while ( 1 )
    {
      v26 = *(uint32_t *)(*(uint32_t *)(v24 + 16) - 12);
      v27 = v26;
      if ( v25 <= v26 )
        v27 = v25;
      v28 = v26 - v25;
      v29 = memcmp(*(const void **)(v24 + 16), v47, v27);
      if ( v29 == 0 )
        v29 = v28;
      if ( v29 < 0 )
        break;
      v51 = v24;
      v24 = *(uint32_t *)(v24 + 8);
      if ( v24 == 0 )
        goto LABEL_40;
    }
    v24 = *(uint32_t *)(v24 + 12);
  }
  while ( v24 != 0 );
LABEL_40:
  if ( v54 == (char *)v51 )
    goto LABEL_66;
  v30 = *(uint32_t *)(*(uint32_t *)(v51 + 16) - 12);
  v31 = v30;
  if ( v25 <= v30 )
    v31 = v25;
  v32 = v25 - v30;
  v33 = memcmp(v47, *(const void **)(v51 + 16), v31);
  if ( v33 == 0 )
    v33 = v32;
  if ( v33 < 0 )
    goto LABEL_66;
LABEL_46:
  g4_std::string::assign_str(a3, v51 + 20);
  g4_std::string::Destroy(&v63);
  if ( *(uint32_t *)(*a3 - 12) == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v64), "Etag", (int)(uintptr_t)(&v58) + 3);
    v35 = *((uint32_t *)v53 + 23);
    if ( v35 != 0 )
    {
      v48 = (void *)v64;
      v36 = *(uint32_t *)(v64 - 12);
      v52 = (int)(uintptr_t)(v53) + 88;
      do
      {
        while ( 1 )
        {
          v37 = v36;
          v38 = *(uint32_t *)(*(uint32_t *)(v35 + 16) - 12);
          if ( v38 <= v36 )
            v37 = *(uint32_t *)(*(uint32_t *)(v35 + 16) - 12);
          v39 = v38 - v36;
          v40 = memcmp(*(const void **)(v35 + 16), v48, v37);
          if ( v40 == 0 )
            v40 = v39;
          if ( v40 < 0 )
            break;
          v52 = v35;
          v35 = *(uint32_t *)(v35 + 8);
          if ( v35 == 0 )
            goto LABEL_57;
        }
        v35 = *(uint32_t *)(v35 + 12);
      }
      while ( v35 != 0 );
LABEL_57:
      if ( v54 != (char *)v52 )
      {
        v41 = v36;
        v42 = *(uint32_t *)(*(uint32_t *)(v52 + 16) - 12);
        if ( v42 <= v36 )
          v41 = *(uint32_t *)(*(uint32_t *)(v52 + 16) - 12);
        v43 = v36 - v42;
        v44 = memcmp(v48, *(const void **)(v52 + 16), v41);
        if ( v44 == 0 )
          v44 = v43;
        if ( v44 >= 0 )
          goto LABEL_64;
      }
    }
    else
    {
      v52 = (int)(uintptr_t)(v53) + 88;
    }
    v68 = &dword_213B814;
    g4_std::string::construct_copy(&v75, &v64);
    g4_std::string::construct_copy(v76, &v68);
    g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_insert_unique(
      v56,
      (uint32_t *)v53 + 21,
      v52,
      &v75);
    v52 = v56[0];
    g4_std::string::Destroy(v76);
    g4_std::string::Destroy(&v75);
    g4_std::string::Destroy(&v68);
LABEL_64:
    g4_std::string::assign_str(a3, v52 + 20);
    g4_std::string::Destroy(&v64);
  }
  gaia::ServiceRequest::Drop(v53);
  g4_std::string::Destroy((char *)&v58 + 4);
  return v55;
}

// ----------------------------------------------------------------------------
// Function: gaia::Iris::getAsset  (binary VA: 0x14c6190)
// Original: gaia::Iris::getAsset
// ----------------------------------------------------------------------------
int gaia::Iris::getAsset(char **a1, char **a2, void **a3, int *a4, int a5, int a6, int a7, gaia::GaiaRequest::Self *a8)
{
  char *v8;
  size_t v9;
  size_t v10;
  size_t v11;
  int v12;
  int v13;
  size_t v14;
  size_t v15;
  int v16;
  int v17;
  int v18;
  int *v19;
  char *v20;
  size_t v21;
  size_t v22;
  size_t v23;
  int v24;
  int v25;
  size_t v26;
  size_t v27;
  int v28;
  int v29;
  int v30;
  int v32;
  int *v33;
  int v34;
  size_t v35;
  size_t v36;
  size_t v37;
  int v38;
  int v39;
  size_t v40;
  size_t v41;
  int v42;
  int v43;
  typedef uint8_t *_g4_t_n;
  typedef uint8_t *_g4_t_na;
  typedef int *_g4_t_v46;
  typedef int *_g4_t_v47;
  typedef char *_g4_t_s2;
  typedef char *_g4_t_s1;
  typedef char *_g4_t_v50;
  typedef char *_g4_t_v51;
  typedef void *_g4_t_v52;
  typedef gaia::ServiceRequest::Self *_g4_t_v53;
  typedef char *_g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56[2];
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef uint8_t _g4_t_v59[7];
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef void *_g4_t_v65;
  typedef uint32_t *_g4_t_v66;
  typedef void *_g4_t_v67;
  typedef uint32_t *_g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef uint32_t *_g4_t_v71;
  typedef uint32_t *_g4_t_v72;
  typedef char _g4_t_v73;
  typedef int _g4_t_v74;
  typedef char _g4_t_v75;
  typedef int _g4_t_v76;
  typedef uint32_t *_g4_t_v77;
  typedef const void *_g4_t_v78;
  typedef char _g4_t_v79[4];
  typedef const void *_g4_t_v80;
  typedef char _g4_t_v81[4];
  typedef const void *_g4_t_v82;
  typedef char _g4_t_v83[4];
  typedef int (**_g4_t_v84)(int);
  typedef int _g4_t_v85;
  typedef int (**_g4_t_v86)(int);
  typedef int (**_g4_t_v87)(int);
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef unsigned int _g4_t_v90;
  typedef uint8_t *_g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef char _g4_t_v94[4];
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef uint32_t _g4_t_v97[28];
  typedef int _g4_t_v98;
  typedef char _g4_t_v99;
  typedef char _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  enum : size_t {
    _g4_s0 = 496u,
    _g4_s1 = (8u + sizeof(_g4_t_n)) > _g4_s0 ? (8u + sizeof(_g4_t_n)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_na)) > _g4_s1 ? (8u + sizeof(_g4_t_na)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v46)) > _g4_s2 ? (24u + sizeof(_g4_t_v46)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v47)) > _g4_s3 ? (24u + sizeof(_g4_t_v47)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_s2)) > _g4_s4 ? (28u + sizeof(_g4_t_s2)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_s1)) > _g4_s5 ? (28u + sizeof(_g4_t_s1)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v50)) > _g4_s6 ? (32u + sizeof(_g4_t_v50)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v51)) > _g4_s7 ? (32u + sizeof(_g4_t_v51)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v52)) > _g4_s8 ? (32u + sizeof(_g4_t_v52)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v53)) > _g4_s9 ? (36u + sizeof(_g4_t_v53)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v54)) > _g4_s10 ? (40u + sizeof(_g4_t_v54)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v55)) > _g4_s11 ? (48u + sizeof(_g4_t_v55)) : _g4_s11,
    _g4_s13 = (92u + sizeof(_g4_t_v56)) > _g4_s12 ? (92u + sizeof(_g4_t_v56)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v57)) > _g4_s13 ? (100u + sizeof(_g4_t_v57)) : _g4_s13,
    _g4_s15 = (104u + sizeof(_g4_t_v58)) > _g4_s14 ? (104u + sizeof(_g4_t_v58)) : _g4_s14,
    _g4_s16 = (109u + sizeof(_g4_t_v59)) > _g4_s15 ? (109u + sizeof(_g4_t_v59)) : _g4_s15,
    _g4_s17 = (116u + sizeof(_g4_t_v60)) > _g4_s16 ? (116u + sizeof(_g4_t_v60)) : _g4_s16,
    _g4_s18 = (120u + sizeof(_g4_t_v61)) > _g4_s17 ? (120u + sizeof(_g4_t_v61)) : _g4_s17,
    _g4_s19 = (124u + sizeof(_g4_t_v62)) > _g4_s18 ? (124u + sizeof(_g4_t_v62)) : _g4_s18,
    _g4_s20 = (128u + sizeof(_g4_t_v63)) > _g4_s19 ? (128u + sizeof(_g4_t_v63)) : _g4_s19,
    _g4_s21 = (132u + sizeof(_g4_t_v64)) > _g4_s20 ? (132u + sizeof(_g4_t_v64)) : _g4_s20,
    _g4_s22 = (136u + sizeof(_g4_t_v65)) > _g4_s21 ? (136u + sizeof(_g4_t_v65)) : _g4_s21,
    _g4_s23 = (140u + sizeof(_g4_t_v66)) > _g4_s22 ? (140u + sizeof(_g4_t_v66)) : _g4_s22,
    _g4_s24 = (144u + sizeof(_g4_t_v67)) > _g4_s23 ? (144u + sizeof(_g4_t_v67)) : _g4_s23,
    _g4_s25 = (148u + sizeof(_g4_t_v68)) > _g4_s24 ? (148u + sizeof(_g4_t_v68)) : _g4_s24,
    _g4_s26 = (152u + sizeof(_g4_t_v69)) > _g4_s25 ? (152u + sizeof(_g4_t_v69)) : _g4_s25,
    _g4_s27 = (156u + sizeof(_g4_t_v70)) > _g4_s26 ? (156u + sizeof(_g4_t_v70)) : _g4_s26,
    _g4_s28 = (160u + sizeof(_g4_t_v71)) > _g4_s27 ? (160u + sizeof(_g4_t_v71)) : _g4_s27,
    _g4_s29 = (164u + sizeof(_g4_t_v72)) > _g4_s28 ? (164u + sizeof(_g4_t_v72)) : _g4_s28,
    _g4_s30 = (168u + sizeof(_g4_t_v73)) > _g4_s29 ? (168u + sizeof(_g4_t_v73)) : _g4_s29,
    _g4_s31 = (172u + sizeof(_g4_t_v74)) > _g4_s30 ? (172u + sizeof(_g4_t_v74)) : _g4_s30,
    _g4_s32 = (176u + sizeof(_g4_t_v75)) > _g4_s31 ? (176u + sizeof(_g4_t_v75)) : _g4_s31,
    _g4_s33 = (180u + sizeof(_g4_t_v76)) > _g4_s32 ? (180u + sizeof(_g4_t_v76)) : _g4_s32,
    _g4_s34 = (184u + sizeof(_g4_t_v77)) > _g4_s33 ? (184u + sizeof(_g4_t_v77)) : _g4_s33,
    _g4_s35 = (188u + sizeof(_g4_t_v78)) > _g4_s34 ? (188u + sizeof(_g4_t_v78)) : _g4_s34,
    _g4_s36 = (192u + sizeof(_g4_t_v79)) > _g4_s35 ? (192u + sizeof(_g4_t_v79)) : _g4_s35,
    _g4_s37 = (196u + sizeof(_g4_t_v80)) > _g4_s36 ? (196u + sizeof(_g4_t_v80)) : _g4_s36,
    _g4_s38 = (200u + sizeof(_g4_t_v81)) > _g4_s37 ? (200u + sizeof(_g4_t_v81)) : _g4_s37,
    _g4_s39 = (204u + sizeof(_g4_t_v82)) > _g4_s38 ? (204u + sizeof(_g4_t_v82)) : _g4_s38,
    _g4_s40 = (208u + sizeof(_g4_t_v83)) > _g4_s39 ? (208u + sizeof(_g4_t_v83)) : _g4_s39,
    _g4_s41 = (212u + sizeof(_g4_t_v84)) > _g4_s40 ? (212u + sizeof(_g4_t_v84)) : _g4_s40,
    _g4_s42 = (216u + sizeof(_g4_t_v85)) > _g4_s41 ? (216u + sizeof(_g4_t_v85)) : _g4_s41,
    _g4_s43 = (220u + sizeof(_g4_t_v86)) > _g4_s42 ? (220u + sizeof(_g4_t_v86)) : _g4_s42,
    _g4_s44 = (224u + sizeof(_g4_t_v87)) > _g4_s43 ? (224u + sizeof(_g4_t_v87)) : _g4_s43,
    _g4_s45 = (228u + sizeof(_g4_t_v88)) > _g4_s44 ? (228u + sizeof(_g4_t_v88)) : _g4_s44,
    _g4_s46 = (232u + sizeof(_g4_t_v89)) > _g4_s45 ? (232u + sizeof(_g4_t_v89)) : _g4_s45,
    _g4_s47 = (236u + sizeof(_g4_t_v90)) > _g4_s46 ? (236u + sizeof(_g4_t_v90)) : _g4_s46,
    _g4_s48 = (240u + sizeof(_g4_t_v91)) > _g4_s47 ? (240u + sizeof(_g4_t_v91)) : _g4_s47,
    _g4_s49 = (244u + sizeof(_g4_t_v92)) > _g4_s48 ? (244u + sizeof(_g4_t_v92)) : _g4_s48,
    _g4_s50 = (248u + sizeof(_g4_t_v93)) > _g4_s49 ? (248u + sizeof(_g4_t_v93)) : _g4_s49,
    _g4_s51 = (252u + sizeof(_g4_t_v94)) > _g4_s50 ? (252u + sizeof(_g4_t_v94)) : _g4_s50,
    _g4_s52 = (256u + sizeof(_g4_t_v95)) > _g4_s51 ? (256u + sizeof(_g4_t_v95)) : _g4_s51,
    _g4_s53 = (260u + sizeof(_g4_t_v96)) > _g4_s52 ? (260u + sizeof(_g4_t_v96)) : _g4_s52,
    _g4_s54 = (264u + sizeof(_g4_t_v97)) > _g4_s53 ? (264u + sizeof(_g4_t_v97)) : _g4_s53,
    _g4_s55 = (376u + sizeof(_g4_t_v98)) > _g4_s54 ? (376u + sizeof(_g4_t_v98)) : _g4_s54,
    _g4_s56 = (380u + sizeof(_g4_t_v99)) > _g4_s55 ? (380u + sizeof(_g4_t_v99)) : _g4_s55,
    _g4_s57 = (381u + sizeof(_g4_t_v100)) > _g4_s56 ? (381u + sizeof(_g4_t_v100)) : _g4_s56,
    _g4_s58 = (384u + sizeof(_g4_t_v101)) > _g4_s57 ? (384u + sizeof(_g4_t_v101)) : _g4_s57,
    _g4_s59 = (388u + sizeof(_g4_t_v102)) > _g4_s58 ? (388u + sizeof(_g4_t_v102)) : _g4_s58,
    _g4_s60 = (392u + sizeof(_g4_t_v103)) > _g4_s59 ? (392u + sizeof(_g4_t_v103)) : _g4_s59,
    _g4_s61 = (396u + sizeof(_g4_t_v104)) > _g4_s60 ? (396u + sizeof(_g4_t_v104)) : _g4_s60
  };
  alignas(16) uint8_t _g4_sf[_g4_s61];
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 8u);
  _g4_t_na &na = *reinterpret_cast<_g4_t_na *>(_g4_sf + 8u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 24u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 24u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 28u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 28u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 32u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 32u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 32u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 36u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 40u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 48u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 92u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 100u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 104u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 109u);
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
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 256u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 260u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 264u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 376u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 380u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 381u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 384u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 388u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 392u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 396u);

  v53 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v53, a8);
  *((uint32_t *)v53 + 8) = 4501;
  g4_std_compat::string_assign((int)(uintptr_t)(v53) + 40, "https://", 8u);
  *(uint32_t *)&v59[3] = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v60), "/assets/", (int)(uintptr_t)(&v57));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v59[3]), &v60, a1 + 33);
  g4_std::string::Destroy(&v60);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v61), "/", (int)(uintptr_t)(&v57) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v59[3]), &v61, a2);
  g4_std::string::Destroy(&v61);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v62), "Accept-Ranges", (int)(uintptr_t)(&v57) + 2);
  v8 = *((char **)v53 + 23);
  if ( v8 == nullptr )
  {
    v50 = (char *)v53 + 88;
LABEL_72:
    v71 = &dword_213B814;
    g4_std::string::construct_copy(&v78, &v62);
    g4_std::string::construct_copy(v79, &v71);
    g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_insert_unique(
      v56,
      (uint32_t *)v53 + 21,
      (int)(uintptr_t)(v50),
      &v78);
    v50 = (char *)v56[0];
    g4_std::string::Destroy(v79);
    g4_std::string::Destroy(&v78);
    g4_std::string::Destroy(&v71);
    goto LABEL_16;
  }
  s2 = (char *)v62;
  v9 = *(uint32_t *)(v62 - 12);
  v50 = (char *)v53 + 88;
  do
  {
    while ( 1 )
    {
      v10 = *(uint32_t *)(*((uint32_t *)v8 + 4) - 12);
      v11 = v10;
      if ( v9 <= v10 )
        v11 = v9;
      v12 = v10 - v9;
      v13 = memcmp(*((const void **)v8 + 4), s2, v11);
      if ( v13 == 0 )
        v13 = v12;
      if ( v13 < 0 )
        break;
      v50 = v8;
      v8 = *((char **)v8 + 2);
      if ( v8 == nullptr )
        goto LABEL_10;
    }
    v8 = *((char **)v8 + 3);
  }
  while ( v8 != nullptr );
LABEL_10:
  if ( (char *)v53 + 88 == v50 )
    goto LABEL_72;
  v14 = *(uint32_t *)(*((uint32_t *)v50 + 4) - 12);
  v15 = v14;
  if ( v9 <= v14 )
    v15 = v9;
  v16 = v9 - v14;
  v17 = memcmp(s2, *((const void **)v50 + 4), v15);
  if ( v17 == 0 )
    v17 = v16;
  if ( v17 < 0 )
    goto LABEL_72;
LABEL_16:
  g4_std_compat::string_assign((int)(uintptr_t)(v50 + 20), &unk_1B15112, 0);
  g4_std::string::Destroy(&v62);
  v54 = (char *)v53 + 64;
  if ( g4_std::string::compare(a7, (char *)&unk_1B15112) == 0 )
    goto LABEL_17;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v63), "If-None-Match", (int)(uintptr_t)(&v57) + 3);
  v34 = *((uint32_t *)v53 + 17);
  if ( v34 != 0 )
  {
    v52 = (void *)v63;
    v35 = *(uint32_t *)(v63 - 12);
    v55 = (int)(uintptr_t)(v53) + 64;
    do
    {
      while ( 1 )
      {
        v36 = v35;
        v37 = *(uint32_t *)(*(uint32_t *)(v34 + 16) - 12);
        if ( v37 <= v35 )
          v36 = *(uint32_t *)(*(uint32_t *)(v34 + 16) - 12);
        v38 = v37 - v35;
        v39 = memcmp(*(const void **)(v34 + 16), v52, v36);
        if ( v39 == 0 )
          v39 = v38;
        if ( v39 < 0 )
          break;
        v55 = v34;
        v34 = *(uint32_t *)(v34 + 8);
        if ( v34 == 0 )
          goto LABEL_61;
      }
      v34 = *(uint32_t *)(v34 + 12);
    }
    while ( v34 != 0 );
LABEL_61:
    if ( v54 != (char *)v55 )
    {
      v40 = v35;
      v41 = *(uint32_t *)(*(uint32_t *)(v55 + 16) - 12);
      if ( v41 <= v35 )
        v40 = *(uint32_t *)(*(uint32_t *)(v55 + 16) - 12);
      v42 = v35 - v41;
      v43 = memcmp(v52, *(const void **)(v55 + 16), v40);
      if ( v43 == 0 )
        v43 = v42;
      if ( v43 >= 0 )
        goto LABEL_68;
    }
  }
  else
  {
    v55 = (int)(uintptr_t)(v53) + 64;
  }
  v72 = &dword_213B814;
  g4_std::string::construct_copy(&v80, &v63);
  g4_std::string::construct_copy(v81, &v72);
  g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_insert_unique(
    v56,
    (uint32_t *)v53 + 15,
    v55,
    &v80);
  v55 = v56[0];
  g4_std::string::Destroy(v81);
  g4_std::string::Destroy(&v80);
  g4_std::string::Destroy(&v72);
LABEL_68:
  g4_std::string::assign_str(v55 + 20, a7);
  g4_std::string::Destroy(&v63);
LABEL_17:
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v64), (char *)&unk_1B15112, (int)(uintptr_t)(&v58));
  if ( a5 >= 0 )
  {
    sub_1900810(v97);
    v98 = 0;
    v99 = 0;
    v100 = 0;
    v101 = 0;
    v102 = 0;
    v103 = 0;
    v104 = 0;
    v84 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
    v97[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    *(int (***)(int))((char *)&v84 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
    v85 = 0;
    sub_19119D0((char *)&v84 + (uint32_t)(uintptr_t)(*(v84 - 3)), 0);
    v86 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
    *(int (***)(int))((char *)&v86 + (uint32_t)*(&off_20AAEEC - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF00);
    sub_19119D0((char *)&v86 + (uint32_t)(uintptr_t)(*(v86 - 3)), 0);
    v84 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
    *(int (***)(int))((char *)&v84 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
    v88 = 0;
    v89 = 0;
    v90 = 0;
    v91 = nullptr;
    v92 = 0;
    v93 = 0;
    v84 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
    v97[0] = (uint32_t)(uintptr_t)(&off_20AB014);
    v86 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
    v87 = (int (**)(int))(uintptr_t)(&off_20AB2C8);
    sub_1903A70(v94);
    v95 = 24;
    v87 = (int (**)(int))(uintptr_t)(&off_20AADA8);
    v96 = (int)(uintptr_t)(&dword_213B814);
    sub_19119D0(v97, &v87);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v65), (char *)&unk_1B15112, (int)(uintptr_t)(&v58) + 1);
    g4_std_compat::string_assign((int)(uintptr_t)(&v96), v65, *((uint32_t *)v65 - 3));
    v18 = 0;
    if ( (v95 & 3) != 0 )
      v18 = *(uint32_t *)(v96 - 12);
    sub_1931CD0(&v87, v96, 0, v18);
    g4_std::string::Destroy(&v65);
    g4_std::ostream::op_shl_int(&v86, a5);
    v66 = &dword_213B814;
    if ( v92 != 0 )
    {
      if ( v92 <= v90 )
      {
        n = (uint8_t *)v90;
        v19 = (int *)&v73;
      }
      else
      {
        n = (uint8_t *)v92;
        v19 = &v74;
      }
      v46 = v19;
      sub_11A9950(v19, v91, n);
      g4_std::string::assign_str(&v66, v46);
      g4_std::string::Destroy(v46);
    }
    else
    {
      g4_std::string::assign_str(&v66, &v96);
    }
    g4_std::string::append_str(&v64, &v66);
    g4_std::string::Destroy(&v66);
    v84 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
    v97[0] = (uint32_t)(uintptr_t)(&off_20AB014);
    v86 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
    v87 = (int (**)(int))(uintptr_t)(&off_20AADA8);
    g4_std::string::Destroy(&v96);
    v87 = (int (**)(int))(uintptr_t)(&off_20AB2C8);
    sub_1902180(v94);
    v84 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
    *(int (***)(int))((char *)&v84 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
    v86 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
    *(int (***)(int))((char *)&v86 + (uint32_t)*(&off_20AAEEC - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF00);
    v84 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
    *(int (***)(int))((char *)&v84 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
    v85 = 0;
    v97[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    sub_1900B90(v97);
  }
  if ( a6 >= a5 && a6 >= 0 )
  {
    g4_std::string::append((int)(uintptr_t)(&v64), (void *)"-", 1u);
    sub_1900810(v97);
    v98 = 0;
    v99 = 0;
    v100 = 0;
    v101 = 0;
    v102 = 0;
    v103 = 0;
    v104 = 0;
    v84 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
    v97[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    *(int (***)(int))((char *)&v84 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
    v85 = 0;
    sub_19119D0((char *)&v84 + (uint32_t)(uintptr_t)(*(v84 - 3)), 0);
    v86 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
    *(int (***)(int))((char *)&v86 + (uint32_t)*(&off_20AAEEC - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF00);
    sub_19119D0((char *)&v86 + (uint32_t)(uintptr_t)(*(v86 - 3)), 0);
    v84 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
    *(int (***)(int))((char *)&v84 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
    v88 = 0;
    v89 = 0;
    v90 = 0;
    v91 = nullptr;
    v92 = 0;
    v93 = 0;
    v84 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
    v97[0] = (uint32_t)(uintptr_t)(&off_20AB014);
    v86 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
    v87 = (int (**)(int))(uintptr_t)(&off_20AB2C8);
    sub_1903A70(v94);
    v95 = 24;
    v87 = (int (**)(int))(uintptr_t)(&off_20AADA8);
    v96 = (int)(uintptr_t)(&dword_213B814);
    sub_19119D0(v97, &v87);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v67), (char *)&unk_1B15112, (int)(uintptr_t)(&v58) + 2);
    g4_std_compat::string_assign((int)(uintptr_t)(&v96), v67, *((uint32_t *)v67 - 3));
    v32 = 0;
    if ( (v95 & 3) != 0 )
      v32 = *(uint32_t *)(v96 - 12);
    sub_1931CD0(&v87, v96, 0, v32);
    g4_std::string::Destroy(&v67);
    g4_std::ostream::op_shl_int(&v86, a6);
    v68 = &dword_213B814;
    if ( v92 != 0 )
    {
      if ( v92 <= v90 )
      {
        na = (uint8_t *)v90;
        v33 = (int *)&v75;
      }
      else
      {
        na = (uint8_t *)v92;
        v33 = &v76;
      }
      v47 = v33;
      sub_11A9950(v33, v91, na);
      g4_std::string::assign_str(&v68, v47);
      g4_std::string::Destroy(v47);
    }
    else
    {
      g4_std::string::assign_str(&v68, &v96);
    }
    g4_std::string::append_str(&v64, &v68);
    g4_std::string::Destroy(&v68);
    v84 = (int (**)(int))(uintptr_t)(&off_20AAFEC);
    v97[0] = (uint32_t)(uintptr_t)(&off_20AB014);
    v86 = (int (**)(int))(uintptr_t)(((uint32_t)(uintptr_t)&off_20AB000));
    v87 = (int (**)(int))(uintptr_t)(&off_20AADA8);
    g4_std::string::Destroy(&v96);
    v87 = (int (**)(int))(uintptr_t)(&off_20AB2C8);
    sub_1902180(v94);
    v84 = (int (**)(int))(uintptr_t)(&off_20AAF6C);
    *(int (***)(int))((char *)&v84 + (uint32_t)*(&off_20AAF6C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF94);
    v86 = (int (**)(int))(uintptr_t)(&off_20AAEEC);
    *(int (***)(int))((char *)&v86 + (uint32_t)*(&off_20AAEEC - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF00);
    v84 = (int (**)(int))(uintptr_t)(&off_20AAF2C);
    *(int (***)(int))((char *)&v84 + (uint32_t)*(&off_20AAF2C - 3)) = (int (**)(int))(uintptr_t)(&off_20AAF40);
    v85 = 0;
    v97[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
    sub_1900B90(v97);
  }
  else
  {
    g4_std::string::append((int)(uintptr_t)(&v64), (void *)"-", 1u);
  }
  sub_59E340(&v70, "bytes=", &v64);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v69), "Range", (int)(uintptr_t)(&v58) + 3);
  v20 = *((char **)v53 + 17);
  if ( v20 == nullptr )
  {
    v51 = (char *)v53 + 64;
LABEL_43:
    v77 = &dword_213B814;
    g4_std::string::construct_copy(&v82, &v69);
    g4_std::string::construct_copy(v83, &v77);
    g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_insert_unique(
      v56,
      (uint32_t *)v53 + 15,
      (int)(uintptr_t)(v51),
      &v82);
    v51 = (char *)v56[0];
    g4_std::string::Destroy(v83);
    g4_std::string::Destroy(&v82);
    g4_std::string::Destroy(&v77);
    goto LABEL_44;
  }
  s1 = (char *)v69;
  v21 = *(uint32_t *)(v69 - 12);
  v51 = (char *)v53 + 64;
  do
  {
    while ( 1 )
    {
      v22 = v21;
      v23 = *(uint32_t *)(*((uint32_t *)v20 + 4) - 12);
      if ( v23 <= v21 )
        v22 = *(uint32_t *)(*((uint32_t *)v20 + 4) - 12);
      v24 = v23 - v21;
      v25 = memcmp(*((const void **)v20 + 4), s1, v22);
      if ( v25 == 0 )
        v25 = v24;
      if ( v25 < 0 )
        break;
      v51 = v20;
      v20 = *((char **)v20 + 2);
      if ( v20 == nullptr )
        goto LABEL_37;
    }
    v20 = *((char **)v20 + 3);
  }
  while ( v20 != nullptr );
LABEL_37:
  if ( v54 == v51 )
    goto LABEL_43;
  v26 = v21;
  v27 = *(uint32_t *)(*((uint32_t *)v51 + 4) - 12);
  if ( v27 <= v21 )
    v26 = *(uint32_t *)(*((uint32_t *)v51 + 4) - 12);
  v28 = v21 - v27;
  v29 = memcmp(s1, *((const void **)v51 + 4), v26);
  if ( v29 == 0 )
    v29 = v28;
  if ( v29 < 0 )
    goto LABEL_43;
LABEL_44:
  g4_std::string::assign_str(v51 + 20, &v70);
  g4_std::string::Destroy(&v69);
  g4_std::string::Destroy(&v70);
  g4_std::string::Destroy(&v64);
  g4_std::string::assign_str((char *)v53 + 44, &v59[3]);
  v30 = gaia::BaseServiceManager::SendCompleteRequest((gaia::BaseServiceManager::Self *)a1, v53, a3, a4);
  g4_std::string::Destroy(&v59[3]);
  return v30;
}


