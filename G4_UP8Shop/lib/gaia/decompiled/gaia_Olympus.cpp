#include "Core/Utils/DecompTypes.h"
#include "gaia_Olympus.h"

// ----------------------------------------------------------------------------
// Function: gaia::Olympus::Destroy  (binary VA: 0x14aa850)
// Original: gaia::Olympus::~Olympus
// ----------------------------------------------------------------------------
void gaia::Olympus::Destroy(gaia::Olympus::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095CE8);
  gaia::BaseServiceManager::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gaia::Olympus::Destroy_ea14aa880  (binary VA: 0x14aa880)
// Original: gaia::Olympus::~Olympus
// ----------------------------------------------------------------------------
void gaia::Olympus::Destroy_ea14aa880(gaia::Olympus::Self *self)
{
  gaia::Olympus::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gaia::Olympus::ClearLeaderboard  (binary VA: 0x14b0e20)
// Original: gaia::Olympus::ClearLeaderboard
// ----------------------------------------------------------------------------
int gaia::Olympus::ClearLeaderboard(gaia::BaseServiceManager::Self *a1, char **a2, char **a3, gaia::GaiaRequest::Self *a4)
{
  gaia::ServiceRequest::Self *v4;
  int v5;
  typedef uint8_t _g4_t_v7[7];
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (13u + sizeof(_g4_t_v7)) > _g4_s0 ? (13u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v8)) > _g4_s1 ? (20u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v9)) > _g4_s2 ? (24u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v10)) > _g4_s3 ? (28u + sizeof(_g4_t_v10)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 13u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);

  v4 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v4, a4);
  *((uint32_t *)v4 + 8) = 2004;
  *((uint32_t *)v4 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v4) + 40, "https://", 8u);
  *(uint32_t *)&v7[3] = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std::string::append((int)(uintptr_t)(&v7[3]), "/leaderboards/desc", 0x12u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "/", (int)(uintptr_t)(v7));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v7[3]), &v8, a2);
  g4_std::string::Destroy(&v8);
  g4_std::string::append((int)(uintptr_t)(&v7[3]), "/clear", 6u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), (char *)&unk_1B15112, (int)(uintptr_t)(&v7[1]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v10), "access_token=", (int)(uintptr_t)(&v7[2]));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v9), v10, a3);
  g4_std::string::Destroy(v10);
  g4_std::string::assign_str((char *)v4 + 44, &v7[3]);
  g4_std::string::assign_str((char *)v4 + 48, &v9);
  v5 = gaia::BaseServiceManager::SendCompleteRequest(a1, v4);
  g4_std::string::Destroy(&v9);
  g4_std::string::Destroy(&v7[3]);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: gaia::Olympus::DeleteEntry  (binary VA: 0x14b0fc0)
// Original: gaia::Olympus::DeleteEntry
// ----------------------------------------------------------------------------
int gaia::Olympus::DeleteEntry(gaia::BaseServiceManager::Self *a1, char **a2, char **a3, char **a4, gaia::GaiaRequest::Self *a5)
{
  gaia::ServiceRequest::Self *v5;
  int v6;
  typedef uint8_t _g4_t_v8[7];
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef uint32_t *_g4_t_v11;
  typedef int _g4_t_v12[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (9u + sizeof(_g4_t_v8)) > _g4_s0 ? (9u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v10)) > _g4_s2 ? (20u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v11)) > _g4_s3 ? (24u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v12)) > _g4_s4 ? (28u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 9u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  v5 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v5, a5);
  *((uint32_t *)v5 + 8) = 2008;
  *((uint32_t *)v5 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v5) + 40, "https://", 8u);
  *(uint32_t *)&v8[3] = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "/leaderboards/", (int)(uintptr_t)(v8));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v8[3]), &v9, a4);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "/", (int)(uintptr_t)(&v8[1]));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v8[3]), &v10, a3);
  g4_std::string::Destroy(&v10);
  g4_std::string::append((int)(uintptr_t)(&v8[3]), "/me/delete", 0xAu);
  v11 = &dword_213B814;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v12), "access_token=", (int)(uintptr_t)(&v8[2]));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v11), v12, a2);
  g4_std::string::Destroy(v12);
  g4_std::string::assign_str((char *)v5 + 44, &v8[3]);
  g4_std::string::assign_str((char *)v5 + 48, &v11);
  v6 = gaia::BaseServiceManager::SendCompleteRequest(a1, v5);
  g4_std::string::Destroy(&v11);
  g4_std::string::Destroy(&v8[3]);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gaia::Olympus::PostArbitraryEntry  (binary VA: 0x14bd910)
// Original: gaia::Olympus::PostArbitraryEntry
// ----------------------------------------------------------------------------
int gaia::Olympus::PostArbitraryEntry(gaia::BaseServiceManager::Self *a1, char **a2, char **a3, char **a4, char **a5, char **a6, int a7, char **a8, char **a9, int a10, char a11, char **a12, gaia::GaiaRequest::Self *a13)
{
  char v13; // si
  int *v14;
  int *v15;
  int *v16;
  int v17;
  int v18;
  typedef int _g4_t_i;
  typedef gaia::ServiceRequest::Self *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int64_t _g4_t_v25 __attribute__((aligned(1)));
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint8_t _g4_t_v28[4];
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
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_i)) > _g4_s0 ? (12u + sizeof(_g4_t_i)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v21)) > _g4_s1 ? (16u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (34u + sizeof(_g4_t_v22)) > _g4_s2 ? (34u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v23)) > _g4_s3 ? (36u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v24)) > _g4_s4 ? (40u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v25)) > _g4_s5 ? (44u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v26)) > _g4_s6 ? (52u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v27)) > _g4_s7 ? (56u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v28)) > _g4_s8 ? (60u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v29)) > _g4_s9 ? (64u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v30)) > _g4_s10 ? (68u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v31)) > _g4_s11 ? (72u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v32)) > _g4_s12 ? (76u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v33)) > _g4_s13 ? (80u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (84u + sizeof(_g4_t_v34)) > _g4_s14 ? (84u + sizeof(_g4_t_v34)) : _g4_s14,
    _g4_s16 = (88u + sizeof(_g4_t_v35)) > _g4_s15 ? (88u + sizeof(_g4_t_v35)) : _g4_s15,
    _g4_s17 = (92u + sizeof(_g4_t_v36)) > _g4_s16 ? (92u + sizeof(_g4_t_v36)) : _g4_s16,
    _g4_s18 = (96u + sizeof(_g4_t_v37)) > _g4_s17 ? (96u + sizeof(_g4_t_v37)) : _g4_s17,
    _g4_s19 = (100u + sizeof(_g4_t_v38)) > _g4_s18 ? (100u + sizeof(_g4_t_v38)) : _g4_s18,
    _g4_s20 = (104u + sizeof(_g4_t_v39)) > _g4_s19 ? (104u + sizeof(_g4_t_v39)) : _g4_s19,
    _g4_s21 = (108u + sizeof(_g4_t_v40)) > _g4_s20 ? (108u + sizeof(_g4_t_v40)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 34u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 52u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 56u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 60u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 64u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 68u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 72u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 76u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 80u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 84u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 88u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 92u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 96u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 100u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 104u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 108u);

  v13 = a11;
  v21 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v21, a13);
  *((uint32_t *)v21 + 8) = 2006;
  *((uint32_t *)v21 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v21) + 40, "https://", 8u);
  HIDWORD(v25) = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( v13 != 0 )
  {
    v14 = &v27;
    v15 = &v26;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), (char *)&off_1B70A38, (int)(uintptr_t)(&v22) + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "/leaderboards/", (int)(uintptr_t)(&v22));
  }
  else
  {
    v14 = &v29;
    v15 = (int *)v28;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "desc", (int)(uintptr_t)(&v23) + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v28), "/leaderboards/", (int)(uintptr_t)(&v23));
  }
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v25) + 4, v15, (char **)v14);
  g4_std::string::Destroy(v15);
  g4_std::string::Destroy(v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "/", (int)(uintptr_t)(&v23) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v25) + 4, &v30, a2);
  g4_std::string::Destroy(&v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "/", (int)(uintptr_t)(&v23) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v25) + 4, &v31, a3);
  g4_std::string::Destroy(&v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), (char *)&unk_1B15112, (int)(uintptr_t)(&v24));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "access_token=", (int)(uintptr_t)(&v24) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v32), &v33, a4);
  g4_std::string::Destroy(&v33);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "&credential=", (int)(uintptr_t)(&v24) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v32), &v34, a5);
  g4_std::string::Destroy(&v34);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "&score=", (int)(uintptr_t)(&v24) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v32), &v35, &a7, 1);
  g4_std::string::Destroy(&v35);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "&display_name=", (int)(uintptr_t)(&v25));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v32), &v36, a6);
  g4_std::string::Destroy(&v36);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "&replace_score_if=", (int)(uintptr_t)(&v25) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v32), &v37, a12);
  g4_std::string::Destroy(&v37);
  if ( *((uint32_t *)*a8 - 3) != 0 )
  {
    v16 = &v38;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "&expiration_date=", (int)(uintptr_t)(&v25) + 2);
    gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v32), &v38, a8);
  }
  else
  {
    v16 = &v39;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "&expiration_duration=", (int)(uintptr_t)(&v25) + 3);
    gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v32), &v39, a9);
  }
  g4_std::string::Destroy(v16);
  if ( a10 != 0 )
  {
    v17 = *(uint32_t *)(a10 + 12);
    for ( i = a10 + 4; i != v17; v17 = sub_1904890(v17) )
    {
      while ( *(uint32_t *)(*(uint32_t *)(v17 + 20) - 12) == 0 )
      {
        v17 = sub_1904890(v17);
        if ( i == v17 )
          goto LABEL_11;
      }
      g4_std::string::append((int)(uintptr_t)(&v32), "&", 1u);
      g4_std::string::construct_copy(v40, v17 + 16);
      g4_std::string::append((int)(uintptr_t)(v40), "=", 1u);
      gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v32), v40, (char **)(v17 + 20));
      g4_std::string::Destroy(v40);
    }
  }
LABEL_11:
  g4_std::string::assign_str((char *)v21 + 44, (char *)&v25 + 4);
  g4_std::string::assign_str((char *)v21 + 48, &v32);
  v18 = gaia::BaseServiceManager::SendCompleteRequest(a1, v21);
  g4_std::string::Destroy(&v32);
  g4_std::string::Destroy((char *)&v25 + 4);
  return v18;
}

// ----------------------------------------------------------------------------
// Function: gaia::Olympus::PostEntry  (binary VA: 0x14bde10)
// Original: gaia::Olympus::PostEntry
// ----------------------------------------------------------------------------
int gaia::Olympus::PostEntry(gaia::BaseServiceManager::Self *a1, char a2, char **a3, char **a4, int a5, char **a6, char **a7, char **a8, char **a9, int a10, gaia::GaiaRequest::Self *a11)
{
  int *v11;
  int *v12;
  int *v13;
  int v14;
  int v15;
  typedef int _g4_t_i;
  typedef gaia::ServiceRequest::Self *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int64_t _g4_t_v22 __attribute__((aligned(1)));
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef uint8_t _g4_t_v25[4];
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
  typedef int _g4_t_v37[8];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_i)) > _g4_s0 ? (12u + sizeof(_g4_t_i)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v18)) > _g4_s1 ? (24u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (34u + sizeof(_g4_t_v19)) > _g4_s2 ? (34u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v20)) > _g4_s3 ? (36u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v21)) > _g4_s4 ? (40u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v22)) > _g4_s5 ? (44u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v23)) > _g4_s6 ? (52u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v24)) > _g4_s7 ? (56u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v25)) > _g4_s8 ? (60u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v26)) > _g4_s9 ? (64u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v27)) > _g4_s10 ? (68u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v28)) > _g4_s11 ? (72u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v29)) > _g4_s12 ? (76u + sizeof(_g4_t_v29)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v30)) > _g4_s13 ? (80u + sizeof(_g4_t_v30)) : _g4_s13,
    _g4_s15 = (84u + sizeof(_g4_t_v31)) > _g4_s14 ? (84u + sizeof(_g4_t_v31)) : _g4_s14,
    _g4_s16 = (88u + sizeof(_g4_t_v32)) > _g4_s15 ? (88u + sizeof(_g4_t_v32)) : _g4_s15,
    _g4_s17 = (92u + sizeof(_g4_t_v33)) > _g4_s16 ? (92u + sizeof(_g4_t_v33)) : _g4_s16,
    _g4_s18 = (96u + sizeof(_g4_t_v34)) > _g4_s17 ? (96u + sizeof(_g4_t_v34)) : _g4_s17,
    _g4_s19 = (100u + sizeof(_g4_t_v35)) > _g4_s18 ? (100u + sizeof(_g4_t_v35)) : _g4_s18,
    _g4_s20 = (104u + sizeof(_g4_t_v36)) > _g4_s19 ? (104u + sizeof(_g4_t_v36)) : _g4_s19,
    _g4_s21 = (108u + sizeof(_g4_t_v37)) > _g4_s20 ? (108u + sizeof(_g4_t_v37)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 34u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 44u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 52u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 56u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 60u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 64u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 68u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 72u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 76u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 80u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 84u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 88u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 92u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 96u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 100u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 104u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 108u);

  v18 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v18, a11);
  *((uint32_t *)v18 + 8) = 2007;
  *((uint32_t *)v18 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v18) + 40, "https://", 8u);
  HIDWORD(v22) = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( a2 != 0 )
  {
    v11 = &v24;
    v12 = &v23;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), (char *)&off_1B70A38, (int)(uintptr_t)(&v19) + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "/leaderboards/", (int)(uintptr_t)(&v19));
  }
  else
  {
    v11 = &v26;
    v12 = (int *)v25;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "desc", (int)(uintptr_t)(&v20) + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v25), "/leaderboards/", (int)(uintptr_t)(&v20));
  }
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v22) + 4, v12, (char **)v11);
  g4_std::string::Destroy(v12);
  g4_std::string::Destroy(v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "/", (int)(uintptr_t)(&v20) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v22) + 4, &v27, a3);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "me", (int)(uintptr_t)(&v21));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "/", (int)(uintptr_t)(&v20) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v22) + 4, &v28, (char **)&v29);
  g4_std::string::Destroy(&v28);
  g4_std::string::Destroy(&v29);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), (char *)&unk_1B15112, (int)(uintptr_t)(&v21) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "access_token=", (int)(uintptr_t)(&v21) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v30), &v31, a4);
  g4_std::string::Destroy(&v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "&score=", (int)(uintptr_t)(&v21) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v30), &v32, &a5, 1);
  g4_std::string::Destroy(&v32);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "&display_name=", (int)(uintptr_t)(&v22));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v30), &v33, a6);
  g4_std::string::Destroy(&v33);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "&replace_score_if=", (int)(uintptr_t)(&v22) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v30), &v34, a7);
  g4_std::string::Destroy(&v34);
  if ( *((uint32_t *)*a8 - 3) != 0 )
  {
    v13 = &v35;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "&expiration_date=", (int)(uintptr_t)(&v22) + 2);
    gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v30), &v35, a8);
  }
  else
  {
    v13 = &v36;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "&expiration_duration=", (int)(uintptr_t)(&v22) + 3);
    gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v30), &v36, a9);
  }
  g4_std::string::Destroy(v13);
  if ( a10 != 0 )
  {
    v14 = *(uint32_t *)(a10 + 12);
    for ( i = a10 + 4; i != v14; v14 = sub_1904890(v14) )
    {
      g4_std::string::append((int)(uintptr_t)(&v30), "&", 1u);
      g4_std::string::construct_copy(v37, v14 + 16);
      g4_std::string::append((int)(uintptr_t)(v37), "=", 1u);
      gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v30), v37, (char **)(v14 + 20));
      g4_std::string::Destroy(v37);
    }
  }
  g4_std::string::assign_str((char *)v18 + 44, (char *)&v22 + 4);
  g4_std::string::assign_str((char *)v18 + 48, &v30);
  v15 = gaia::BaseServiceManager::SendCompleteRequest(a1, v18);
  g4_std::string::Destroy(&v30);
  g4_std::string::Destroy((char *)&v22 + 4);
  return v15;
}

// ----------------------------------------------------------------------------
// Function: gaia::Olympus::RetrieveLeaderboardAroundArbitraryEntry  (binary VA: 0x14becd0)
// Original: gaia::Olympus::RetrieveLeaderboardAroundArbitraryEntry
// ----------------------------------------------------------------------------
int gaia::Olympus::RetrieveLeaderboardAroundArbitraryEntry(gaia::BaseServiceManager::Self *a1, void **a2, int *a3, char **a4, char **a5, char **a6, char a7, int a8, gaia::GaiaRequest::Self *a9)
{
  gaia::ServiceRequest::Self *v9;
  int *v10;
  int v11;
  typedef int *_g4_t_v13;
  typedef int *_g4_t_v14;
  typedef char *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int64_t _g4_t_v18 __attribute__((aligned(1)));
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef char _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27[8];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (8u + sizeof(_g4_t_v13)) > _g4_s0 ? (8u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v14)) > _g4_s1 ? (40u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v15)) > _g4_s2 ? (44u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (63u + sizeof(_g4_t_v16)) > _g4_s3 ? (63u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v17)) > _g4_s4 ? (64u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (68u + sizeof(_g4_t_v18)) > _g4_s5 ? (68u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v19)) > _g4_s6 ? (76u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v20)) > _g4_s7 ? (80u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (84u + sizeof(_g4_t_v21)) > _g4_s8 ? (84u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (88u + sizeof(_g4_t_v22)) > _g4_s9 ? (88u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_v23)) > _g4_s10 ? (92u + sizeof(_g4_t_v23)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v24)) > _g4_s11 ? (96u + sizeof(_g4_t_v24)) : _g4_s11,
    _g4_s13 = (100u + sizeof(_g4_t_v25)) > _g4_s12 ? (100u + sizeof(_g4_t_v25)) : _g4_s12,
    _g4_s14 = (104u + sizeof(_g4_t_v26)) > _g4_s13 ? (104u + sizeof(_g4_t_v26)) : _g4_s13,
    _g4_s15 = (108u + sizeof(_g4_t_v27)) > _g4_s14 ? (108u + sizeof(_g4_t_v27)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 40u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 63u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 64u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 68u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 76u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 80u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 84u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 88u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 92u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 96u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 100u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 104u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 108u);

  v9 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v9, a9);
  *((uint32_t *)v9 + 8) = 2002;
  g4_std_compat::string_assign((int)(uintptr_t)(v9) + 40, "https://", 8u);
  HIDWORD(v18) = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( a7 != 0 )
  {
    v14 = &v20;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), (char *)&off_1B70A38, (int)(uintptr_t)(&v17));
    v13 = &v16;
    v10 = &v19;
  }
  else
  {
    v14 = &v22;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "desc", (int)(uintptr_t)(&v17) + 2);
    v13 = (int *)((char *)&v17 + 1);
    v10 = (int *)&v21;
  }
  v15 = (char *)v10;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v10), "/leaderboards/", (int)(uintptr_t)(v13));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v18) + 4, v15, (char **)v14);
  g4_std::string::Destroy(v15);
  g4_std::string::Destroy(v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "/", (int)(uintptr_t)(&v17) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v18) + 4, &v23, a4);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "/", (int)(uintptr_t)(&v18));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v18) + 4, &v24, a5);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), (char *)&unk_1B15112, (int)(uintptr_t)(&v18) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "access_token=", (int)(uintptr_t)(&v18) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v25), &v26, a6);
  g4_std::string::Destroy(&v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v27), "&limit=", (int)(uintptr_t)(&v18) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v25), v27, &a8, 0);
  g4_std::string::Destroy(v27);
  g4_std::string::assign_str((char *)v9 + 44, (char *)&v18 + 4);
  g4_std::string::assign_str((char *)v9 + 48, &v25);
  v11 = gaia::BaseServiceManager::SendCompleteRequest(a1, v9, a2, a3);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy((char *)&v18 + 4);
  return v11;
}

// ----------------------------------------------------------------------------
// Function: gaia::Olympus::RetrieveFriendLeaderboard  (binary VA: 0x14befe0)
// Original: gaia::Olympus::RetrieveFriendLeaderboard
// ----------------------------------------------------------------------------
int gaia::Olympus::RetrieveFriendLeaderboard(gaia::BaseServiceManager::Self *a1, void **a2, int *a3, char a4, char **a5, char **a6, int a7, int a8, gaia::GaiaRequest::Self *a9)
{
  gaia::ServiceRequest::Self *v9;
  int *v10;
  int *v11;
  int v12;
  typedef int *_g4_t_v14;
  typedef int *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int64_t _g4_t_v18 __attribute__((aligned(1)));
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef char _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27[8];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (8u + sizeof(_g4_t_v14)) > _g4_s0 ? (8u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v15)) > _g4_s1 ? (40u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (63u + sizeof(_g4_t_v16)) > _g4_s2 ? (63u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v17)) > _g4_s3 ? (64u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (68u + sizeof(_g4_t_v18)) > _g4_s4 ? (68u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (76u + sizeof(_g4_t_v19)) > _g4_s5 ? (76u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v20)) > _g4_s6 ? (80u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (84u + sizeof(_g4_t_v21)) > _g4_s7 ? (84u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (88u + sizeof(_g4_t_v22)) > _g4_s8 ? (88u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (92u + sizeof(_g4_t_v23)) > _g4_s9 ? (92u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (96u + sizeof(_g4_t_v24)) > _g4_s10 ? (96u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (100u + sizeof(_g4_t_v25)) > _g4_s11 ? (100u + sizeof(_g4_t_v25)) : _g4_s11,
    _g4_s13 = (104u + sizeof(_g4_t_v26)) > _g4_s12 ? (104u + sizeof(_g4_t_v26)) : _g4_s12,
    _g4_s14 = (108u + sizeof(_g4_t_v27)) > _g4_s13 ? (108u + sizeof(_g4_t_v27)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 63u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 64u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 68u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 76u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 80u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 84u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 88u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 92u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 96u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 100u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 104u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 108u);

  v9 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v9, a9);
  *((uint32_t *)v9 + 8) = 2005;
  g4_std_compat::string_assign((int)(uintptr_t)(v9) + 40, "https://", 8u);
  HIDWORD(v18) = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( a4 != 0 )
  {
    v10 = &v20;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), (char *)&off_1B70A38, (int)(uintptr_t)(&v17));
    v14 = &v16;
    v11 = &v19;
  }
  else
  {
    v10 = &v22;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "desc", (int)(uintptr_t)(&v17) + 2);
    v14 = (int *)((char *)&v17 + 1);
    v11 = (int *)&v21;
  }
  v15 = v11;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v11), "/leaderboards/", (int)(uintptr_t)(v14));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v18) + 4, v15, (char **)v10);
  g4_std::string::Destroy(v15);
  g4_std::string::Destroy(v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "/", (int)(uintptr_t)(&v17) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v18) + 4, &v23, a5);
  g4_std::string::Destroy(&v23);
  g4_std::string::append((int)(uintptr_t)(&v18) + 4, "/me/friends", 0xBu);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), (char *)&unk_1B15112, (int)(uintptr_t)(&v18));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "access_token=", (int)(uintptr_t)(&v18) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v24), &v25, a6);
  g4_std::string::Destroy(&v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "&offset=", (int)(uintptr_t)(&v18) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v24), &v26, &a7, 1);
  g4_std::string::Destroy(&v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v27), "&limit=", (int)(uintptr_t)(&v18) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v24), v27, &a8, 0);
  g4_std::string::Destroy(v27);
  g4_std::string::assign_str((char *)v9 + 44, (char *)&v18 + 4);
  g4_std::string::assign_str((char *)v9 + 48, &v24);
  v12 = gaia::BaseServiceManager::SendCompleteRequest(a1, v9, a2, a3);
  g4_std::string::Destroy(&v24);
  g4_std::string::Destroy((char *)&v18 + 4);
  return v12;
}

// ----------------------------------------------------------------------------
// Function: gaia::Olympus::RetrieveLeaderboardAroundCurrentUser  (binary VA: 0x14bf2f0)
// Original: gaia::Olympus::RetrieveLeaderboardAroundCurrentUser
// ----------------------------------------------------------------------------
int gaia::Olympus::RetrieveLeaderboardAroundCurrentUser(gaia::BaseServiceManager::Self *a1, void **a2, int *a3, char **a4, char a5, char **a6, int a7, gaia::GaiaRequest::Self *a8)
{
  gaia::ServiceRequest::Self *v8;
  int *v9;
  int v10;
  typedef int *_g4_t_v12;
  typedef int *_g4_t_v13;
  typedef char *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int64_t _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef char _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27[8];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v13)) > _g4_s1 ? (40u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v14)) > _g4_s2 ? (44u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (58u + sizeof(_g4_t_v15)) > _g4_s3 ? (58u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (60u + sizeof(_g4_t_v16)) > _g4_s4 ? (60u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v17)) > _g4_s5 ? (64u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (72u + sizeof(_g4_t_v18)) > _g4_s6 ? (72u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v19)) > _g4_s7 ? (76u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v20)) > _g4_s8 ? (80u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (84u + sizeof(_g4_t_v21)) > _g4_s9 ? (84u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (88u + sizeof(_g4_t_v22)) > _g4_s10 ? (88u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (92u + sizeof(_g4_t_v23)) > _g4_s11 ? (92u + sizeof(_g4_t_v23)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v24)) > _g4_s12 ? (96u + sizeof(_g4_t_v24)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v25)) > _g4_s13 ? (100u + sizeof(_g4_t_v25)) : _g4_s13,
    _g4_s15 = (104u + sizeof(_g4_t_v26)) > _g4_s14 ? (104u + sizeof(_g4_t_v26)) : _g4_s14,
    _g4_s16 = (108u + sizeof(_g4_t_v27)) > _g4_s15 ? (108u + sizeof(_g4_t_v27)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 58u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 60u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 64u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 72u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 76u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 80u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 84u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 88u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 92u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 96u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 100u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 104u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 108u);

  v8 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v8, a8);
  *((uint32_t *)v8 + 8) = 2003;
  g4_std_compat::string_assign((int)(uintptr_t)(v8) + 40, "https://", 8u);
  HIDWORD(v17) = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( a5 != 0 )
  {
    v13 = &v19;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), (char *)&off_1B70A38, (int)(uintptr_t)(&v15) + 1);
    v12 = &v15;
    v9 = &v18;
  }
  else
  {
    v13 = &v21;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "desc", (int)(uintptr_t)(&v16) + 1);
    v12 = &v16;
    v9 = (int *)&v20;
  }
  v14 = (char *)v9;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v9), "/leaderboards/", (int)(uintptr_t)(v12));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v17) + 4, v14, (char **)v13);
  g4_std::string::Destroy(v14);
  g4_std::string::Destroy(v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "/", (int)(uintptr_t)(&v16) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v17) + 4, &v22, a4);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "me", (int)(uintptr_t)(&v17));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "/", (int)(uintptr_t)(&v16) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v17) + 4, &v23, (char **)&v24);
  g4_std::string::Destroy(&v23);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), (char *)&unk_1B15112, (int)(uintptr_t)(&v17) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "access_token=", (int)(uintptr_t)(&v17) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v25), &v26, a6);
  g4_std::string::Destroy(&v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v27), "&limit=", (int)(uintptr_t)(&v17) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v25), v27, &a7, 0);
  g4_std::string::Destroy(v27);
  g4_std::string::assign_str((char *)v8 + 44, (char *)&v17 + 4);
  g4_std::string::assign_str((char *)v8 + 48, &v25);
  v10 = gaia::BaseServiceManager::SendCompleteRequest(a1, v8, a2, a3);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy((char *)&v17 + 4);
  return v10;
}

// ----------------------------------------------------------------------------
// Function: gaia::Olympus::RetriveTopOfLeaderboard  (binary VA: 0x14bf620)
// Original: gaia::Olympus::RetriveTopOfLeaderboard
// ----------------------------------------------------------------------------
int gaia::Olympus::RetriveTopOfLeaderboard(gaia::BaseServiceManager::Self *a1, void **a2, int *a3, char a4, char **a5, char **a6, int a7, int a8, char **a9, gaia::GaiaRequest::Self *a10)
{
  gaia::ServiceRequest::Self *v10;
  int *v11;
  int *v12;
  int v13;
  typedef int *_g4_t_v15;
  typedef int *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int64_t _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef char _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29[8];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (8u + sizeof(_g4_t_v15)) > _g4_s0 ? (8u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v16)) > _g4_s1 ? (40u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (58u + sizeof(_g4_t_v17)) > _g4_s2 ? (58u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v18)) > _g4_s3 ? (60u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v19)) > _g4_s4 ? (64u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v20)) > _g4_s5 ? (72u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v21)) > _g4_s6 ? (76u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v22)) > _g4_s7 ? (80u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (84u + sizeof(_g4_t_v23)) > _g4_s8 ? (84u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (88u + sizeof(_g4_t_v24)) > _g4_s9 ? (88u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_v25)) > _g4_s10 ? (92u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v26)) > _g4_s11 ? (96u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (100u + sizeof(_g4_t_v27)) > _g4_s12 ? (100u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (104u + sizeof(_g4_t_v28)) > _g4_s13 ? (104u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (108u + sizeof(_g4_t_v29)) > _g4_s14 ? (108u + sizeof(_g4_t_v29)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 58u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 60u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 64u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 72u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 76u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 80u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 84u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 88u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 92u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 96u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 100u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 104u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 108u);

  v10 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v10, a10);
  *((uint32_t *)v10 + 8) = 2001;
  g4_std_compat::string_assign((int)(uintptr_t)(v10) + 40, "https://", 8u);
  HIDWORD(v19) = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( a4 != 0 )
  {
    v11 = &v21;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), (char *)&off_1B70A38, (int)(uintptr_t)(&v17) + 1);
    v15 = &v17;
    v12 = &v20;
  }
  else
  {
    v11 = &v23;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "desc", (int)(uintptr_t)(&v18) + 1);
    v15 = &v18;
    v12 = (int *)&v22;
  }
  v16 = v12;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v12), "/leaderboards/", (int)(uintptr_t)(v15));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v19) + 4, v16, (char **)v11);
  g4_std::string::Destroy(v16);
  g4_std::string::Destroy(v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "/", (int)(uintptr_t)(&v18) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v19) + 4, &v24, a5);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), (char *)&unk_1B15112, (int)(uintptr_t)(&v18) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "access_token=", (int)(uintptr_t)(&v19));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v25), &v26, a6);
  g4_std::string::Destroy(&v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "&offset=", (int)(uintptr_t)(&v19) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v25), &v27, &a7, 0);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "&limit=", (int)(uintptr_t)(&v19) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v25), &v28, &a8, 0);
  g4_std::string::Destroy(&v28);
  if ( *((uint32_t *)*a9 - 3) != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v29), "&for_entry_id=", (int)(uintptr_t)(&v19) + 3);
    gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v25), v29, a9);
    g4_std::string::Destroy(v29);
  }
  g4_std::string::assign_str((char *)v10 + 44, (char *)&v19 + 4);
  g4_std::string::assign_str((char *)v10 + 48, &v25);
  v13 = gaia::BaseServiceManager::SendCompleteRequest(a1, v10, a2, a3);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy((char *)&v19 + 4);
  return v13;
}

// ----------------------------------------------------------------------------
// Function: gaia::Olympus::Construct  (binary VA: 0x14c0a60)
// Original: gaia::Olympus::Olympus
// ----------------------------------------------------------------------------
int gaia::Olympus::Construct(gaia::BaseServiceManager::Self *a1, int a2, int a3)
{
  int MaxParalelRequests;
  int v5[4];

  MaxParalelRequests = gaia::utils::GetMaxParalelRequests(4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v5) + 1, "olympus", (int)(uintptr_t)(v5));
  gaia::BaseServiceManager::Construct(a1, (int)(uintptr_t)(v5) + 1, a3, MaxParalelRequests);
  g4_std::string::Destroy((char *)v5 + 1);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2095CE8);
  return (int)(uintptr_t)(g4_std::string::assign_str((char *)a1 + 52, a2));
}


