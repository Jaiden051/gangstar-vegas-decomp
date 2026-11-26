#include "Core/Utils/DecompTypes.h"
#include "gaia_Osiris.h"

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::Destroy  (binary VA: 0x14aa7e0)
// Original: gaia::Osiris::~Osiris
// ----------------------------------------------------------------------------
void gaia::Osiris::Destroy(gaia::Osiris::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095D28);
  gaia::BaseServiceManager::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::Destroy_ea14aa810  (binary VA: 0x14aa810)
// Original: gaia::Osiris::~Osiris
// ----------------------------------------------------------------------------
void gaia::Osiris::Destroy_ea14aa810(gaia::Osiris::Self *self)
{
  gaia::Osiris::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::RecordAchievement  (binary VA: 0x14ae9d0)
// Original: gaia::Osiris::RecordAchievement
// ----------------------------------------------------------------------------
int gaia::Osiris::RecordAchievement(gaia::BaseServiceManager::Self *a1, char **a2, char **a3, char **a4, gaia::GaiaRequest::Self *a5)
{
  gaia::ServiceRequest::Self *v5;
  void *v6;
  void *v7;
  void *v8;
  int result;
  void *v10;
  void *v11;
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
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v13)) > _g4_s1 ? (12u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (18u + sizeof(_g4_t_v14)) > _g4_s2 ? (18u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v15)) > _g4_s3 ? (20u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v16)) > _g4_s4 ? (28u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v17)) > _g4_s5 ? (32u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v18)) > _g4_s6 ? (36u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v19)) > _g4_s7 ? (40u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v20)) > _g4_s8 ? (44u + sizeof(_g4_t_v20)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 18u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);

  v5 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v5, a5);
  *((uint32_t *)v5 + 8) = 4040;
  *((uint32_t *)v5 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v5) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "/accounts", (int)(uintptr_t)(&v14));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "/", (int)(uintptr_t)(&v14) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v16), &v17, a2);
  v6 = (void *)(v17 - 12);
  if ( (uint32_t *)(v17 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  g4_std::string::append((int)(uintptr_t)(&v16), "/trophies", 9u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), (char *)&unk_1B15112, (int)(uintptr_t)(&v15));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "access_token=", (int)(uintptr_t)(&v15) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v18), &v19, a3);
  v7 = (void *)(v19 - 12);
  if ( (uint32_t *)(v19 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v20), "&trophy_id=", (int)(uintptr_t)(&v15) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v18), v20, a4);
  v8 = (void *)(v20[0] - 12);
  if ( (uint32_t *)(v20[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v20[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  g4_std::string::assign_str((char *)v5 + 44, &v16);
  g4_std::string::assign_str((char *)v5 + 48, &v18);
  result = gaia::BaseServiceManager::SendCompleteRequest(a1, v5);
  v10 = (void *)(v18 - 12);
  if ( (uint32_t *)(v18 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
  {
    v13 = result;
    g4_std::string::Rep::M_destroy(v10);
    result = v13;
  }
  v11 = (void *)(v16 - 12);
  if ( (uint32_t *)(v16 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
  {
    v12 = result;
    g4_std::string::Rep::M_destroy(v11);
    return v12;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::UpvoteWallPost  (binary VA: 0x14aec90)
// Original: gaia::Osiris::UpvoteWallPost
// ----------------------------------------------------------------------------
int gaia::Osiris::UpvoteWallPost(gaia::BaseServiceManager::Self *a1, int a2, char **a3, char **a4, char **a5, char **a6, gaia::GaiaRequest::Self *a7)
{
  gaia::ServiceRequest::Self *v7;
  void *v8;
  void *v9;
  void *v10;
  void *v11;
  void *v12;
  int result;
  void *v14;
  void *v15;
  typedef char **_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint8_t _g4_t_v20[7];
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v17)) > _g4_s1 ? (4u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v18)) > _g4_s2 ? (4u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (23u + sizeof(_g4_t_v19)) > _g4_s3 ? (23u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v20)) > _g4_s4 ? (24u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v21)) > _g4_s5 ? (36u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v22)) > _g4_s6 ? (40u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v23)) > _g4_s7 ? (44u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v24)) > _g4_s8 ? (48u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v25)) > _g4_s9 ? (52u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v26)) > _g4_s10 ? (56u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v27)) > _g4_s11 ? (60u + sizeof(_g4_t_v27)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 23u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 48u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 52u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);

  v7 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v7, a7);
  *((uint32_t *)v7 + 8) = 4042;
  *((uint32_t *)v7 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v7) + 40, "https://", 8u);
  v21 = (int)(uintptr_t)(&dword_213B814);
  v16 = (char **)(gaia::Osiris::s_OsirisWallPostObjectTypesVector[0] + 4 * a2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "/", (int)(uintptr_t)(&v19));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v21), &v22, v16);
  v8 = (void *)(v22 - 12);
  if ( (uint32_t *)(v22 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "/", (int)(uintptr_t)(v20));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v21), &v23, a3);
  v9 = (void *)(v23 - 12);
  if ( (uint32_t *)(v23 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  g4_std::string::append((int)(uintptr_t)(&v21), "/wall", 5u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "/", (int)(uintptr_t)(&v20[1]));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v21), &v24, a5);
  v10 = (void *)(v24 - 12);
  if ( (uint32_t *)(v24 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v10);
  }
  g4_std::string::append((int)(uintptr_t)(&v21), "/vote", 5u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), (char *)&unk_1B15112, (int)(uintptr_t)(&v20[2]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "access_token=", (int)(uintptr_t)(&v20[3]));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v25), &v26, a4);
  v11 = (void *)(v26 - 12);
  if ( (uint32_t *)(v26 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v11);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v27), "&activity_type=", (int)(uintptr_t)(&v20[4]));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v25), v27, a6);
  v12 = (void *)(v27[0] - 12);
  if ( (uint32_t *)(v27[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v27[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v12);
  }
  g4_std::string::assign_str((char *)v7 + 44, &v21);
  g4_std::string::assign_str((char *)v7 + 48, &v25);
  result = gaia::BaseServiceManager::SendCompleteRequest(a1, v7);
  v14 = (void *)(v25 - 12);
  if ( (uint32_t *)(v25 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
  {
    v18 = result;
    g4_std::string::Rep::M_destroy(v14);
    result = v18;
  }
  v15 = (void *)(v21 - 12);
  if ( (uint32_t *)(v21 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
  {
    v17 = result;
    g4_std::string::Rep::M_destroy(v15);
    return v17;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::PostOnWall  (binary VA: 0x14af070)
// Original: gaia::Osiris::PostOnWall
// ----------------------------------------------------------------------------
int gaia::Osiris::PostOnWall(gaia::BaseServiceManager::Self *a1, int a2, char **a3, char **a4, char **a5, char **a6, gaia::GaiaRequest::Self *a7)
{
  gaia::ServiceRequest::Self *v7;
  int v8;
  typedef char **_g4_t_v10;
  typedef int _g4_t_v11;
  typedef int64_t _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (30u + sizeof(_g4_t_v11)) > _g4_s1 ? (30u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v12)) > _g4_s2 ? (32u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v13)) > _g4_s3 ? (40u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v14)) > _g4_s4 ? (44u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v15)) > _g4_s5 ? (48u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v16)) > _g4_s6 ? (52u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v17)) > _g4_s7 ? (56u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v18)) > _g4_s8 ? (60u + sizeof(_g4_t_v18)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 30u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 48u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 52u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 56u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 60u);

  v7 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v7, a7);
  *((uint32_t *)v7 + 8) = 4037;
  *((uint32_t *)v7 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v7) + 40, "https://", 8u);
  HIDWORD(v12) = (uint32_t)(uintptr_t)(&dword_213B814);
  v10 = (char **)(gaia::Osiris::s_OsirisWallPostObjectTypesVector[0] + 4 * a2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "/", (int)(uintptr_t)(&v11));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v12) + 4, &v13, v10);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "/", (int)(uintptr_t)(&v11) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v12) + 4, &v14, a3);
  g4_std::string::Destroy(&v14);
  g4_std::string::append((int)(uintptr_t)(&v12) + 4, "/wall", 5u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), (char *)&unk_1B15112, (int)(uintptr_t)(&v12));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "access_token=", (int)(uintptr_t)(&v12) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v15), &v16, a4);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "&text=", (int)(uintptr_t)(&v12) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v15), &v17, a5);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v18), "&language=", (int)(uintptr_t)(&v12) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v15), v18, a6);
  g4_std::string::Destroy(v18);
  g4_std::string::assign_str((char *)v7 + 44, (char *)&v12 + 4);
  g4_std::string::assign_str((char *)v7 + 48, &v15);
  v8 = gaia::BaseServiceManager::SendCompleteRequest(a1, v7);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy((char *)&v12 + 4);
  return v8;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::ParticipateEvent  (binary VA: 0x14af2f0)
// Original: gaia::Osiris::ParticipateEvent
// ----------------------------------------------------------------------------
int gaia::Osiris::ParticipateEvent(gaia::BaseServiceManager::Self *a1, char **a2, char **a3, char **a4, gaia::GaiaRequest::Self *a5)
{
  gaia::ServiceRequest::Self *v5;
  int v6;
  typedef int _g4_t_v8;
  typedef uint32_t *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v10)) > _g4_s2 ? (16u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v11)) > _g4_s3 ? (20u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v12)) > _g4_s4 ? (24u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v13)) > _g4_s5 ? (28u + sizeof(_g4_t_v13)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);

  v5 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v5, a5);
  *((uint32_t *)v5 + 8) = 4049;
  *((uint32_t *)v5 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v5) + 40, "https://", 8u);
  v9 = &dword_213B814;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "/events/", (int)(uintptr_t)(&v8));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v9), &v10, a3);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "/participants/", (int)(uintptr_t)(&v8) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v9), &v11, a4);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), (char *)&unk_1B15112, (int)(uintptr_t)(&v8) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v13), "access_token=", (int)(uintptr_t)(&v8) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v12), v13, a2);
  g4_std::string::Destroy(v13);
  g4_std::string::assign_str((char *)v5 + 44, &v9);
  g4_std::string::assign_str((char *)v5 + 48, &v12);
  v6 = gaia::BaseServiceManager::SendCompleteRequest(a1, v5);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy(&v9);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::DeleteEvent  (binary VA: 0x14af4a0)
// Original: gaia::Osiris::DeleteEvent
// ----------------------------------------------------------------------------
int gaia::Osiris::DeleteEvent(gaia::BaseServiceManager::Self *a1, char **a2, char **a3, gaia::GaiaRequest::Self *a4)
{
  gaia::ServiceRequest::Self *v4;
  int v5;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v9)) > _g4_s2 ? (20u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v10)) > _g4_s3 ? (24u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v11)) > _g4_s4 ? (28u + sizeof(_g4_t_v11)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  v4 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v4, a4);
  *((uint32_t *)v4 + 8) = 4030;
  *((uint32_t *)v4 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v4) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "/events", (int)(uintptr_t)(&v7));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "/", (int)(uintptr_t)(&v7) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v8), &v9, a3);
  g4_std::string::Destroy(&v9);
  g4_std::string::append((int)(uintptr_t)(&v8), "/delete", 7u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), (char *)&unk_1B15112, (int)(uintptr_t)(&v7) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v11), "access_token=", (int)(uintptr_t)(&v7) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v10), v11, a2);
  g4_std::string::Destroy(v11);
  g4_std::string::assign_str((char *)v4 + 44, &v8);
  g4_std::string::assign_str((char *)v4 + 48, &v10);
  v5 = gaia::BaseServiceManager::SendCompleteRequest(a1, v4);
  g4_std::string::Destroy(&v10);
  g4_std::string::Destroy(&v8);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::JoinGroupAddMember  (binary VA: 0x14af630)
// Original: gaia::Osiris::JoinGroupAddMember
// ----------------------------------------------------------------------------
int gaia::Osiris::JoinGroupAddMember(gaia::BaseServiceManager::Self *a1, char **a2, char **a3, char **a4, gaia::GaiaRequest::Self *a5)
{
  gaia::ServiceRequest::Self *v5;
  int v6;
  typedef int _g4_t_v8;
  typedef uint8_t _g4_t_v9[7];
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (7u + sizeof(_g4_t_v8)) > _g4_s0 ? (7u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v9)) > _g4_s1 ? (8u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v10)) > _g4_s2 ? (16u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v11)) > _g4_s3 ? (20u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v12)) > _g4_s4 ? (24u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v13)) > _g4_s5 ? (28u + sizeof(_g4_t_v13)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 7u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);

  v5 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v5, a5);
  *((uint32_t *)v5 + 8) = 4024;
  *((uint32_t *)v5 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v5) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9[4]), "/groups", (int)(uintptr_t)(&v8));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "/", (int)(uintptr_t)(v9));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v9[4]), &v10, a3);
  g4_std::string::Destroy(&v10);
  g4_std::string::append((int)(uintptr_t)(&v9[4]), "/members", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), (char *)&unk_1B15112, (int)(uintptr_t)(&v9[1]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "access_token=", (int)(uintptr_t)(&v9[2]));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v11), &v12, a2);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v13), "&credential=", (int)(uintptr_t)(&v9[3]));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v11), v13, a4);
  g4_std::string::Destroy(v13);
  g4_std::string::assign_str((char *)v5 + 44, &v9[4]);
  g4_std::string::assign_str((char *)v5 + 48, &v11);
  v6 = gaia::BaseServiceManager::SendCompleteRequest(a1, v5);
  g4_std::string::Destroy(&v11);
  g4_std::string::Destroy(&v9[4]);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::MemberUpdateCustomFields  (binary VA: 0x14af810)
// Original: gaia::Osiris::MemberUpdateCustomFields
// ----------------------------------------------------------------------------
int gaia::Osiris::MemberUpdateCustomFields(gaia::BaseServiceManager::Self *a1, char **a2, char **a3, char **a4, int a5, gaia::GaiaRequest::Self *a6)
{
  int i;
  int v7;
  typedef gaia::ServiceRequest::Self *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef uint8_t _g4_t_v11[7];
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (19u + sizeof(_g4_t_v10)) > _g4_s1 ? (19u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v12)) > _g4_s3 ? (28u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v13)) > _g4_s4 ? (32u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v14)) > _g4_s5 ? (36u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v15)) > _g4_s6 ? (40u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v16)) > _g4_s7 ? (44u + sizeof(_g4_t_v16)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 19u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);

  v9 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v9, a6);
  *((uint32_t *)v9 + 8) = 4026;
  *((uint32_t *)v9 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v9) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11[4]), "/groups", (int)(uintptr_t)(&v10));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "/", (int)(uintptr_t)(v11));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v11[4]), &v12, a3);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "/members/", (int)(uintptr_t)(&v11[1]));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v11[4]), &v13, a4);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), (char *)&unk_1B15112, (int)(uintptr_t)(&v11[2]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "access_token=", (int)(uintptr_t)(&v11[3]));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v14), &v15, a2);
  g4_std::string::Destroy(&v15);
  if ( a5 != 0 )
  {
    for ( i = *(uint32_t *)(a5 + 12); a5 + 4 != i; i = sub_1904890(i) )
    {
      g4_std::string::append((int)(uintptr_t)(&v14), "&", 1u);
      g4_std::string::construct_copy(v16, i + 16);
      g4_std::string::append((int)(uintptr_t)(v16), "=", 1u);
      gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v14), v16, (char **)(i + 20));
      g4_std::string::Destroy(v16);
    }
  }
  g4_std::string::assign_str((char *)v9 + 44, &v11[4]);
  g4_std::string::assign_str((char *)v9 + 48, &v14);
  v7 = gaia::BaseServiceManager::SendCompleteRequest(a1, v9);
  g4_std::string::Destroy(&v14);
  g4_std::string::Destroy(&v11[4]);
  return v7;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::LeaveGroupDeleteMember  (binary VA: 0x14afaa0)
// Original: gaia::Osiris::LeaveGroupDeleteMember
// ----------------------------------------------------------------------------
int gaia::Osiris::LeaveGroupDeleteMember(gaia::BaseServiceManager::Self *a1, char **a2, char **a3, char **a4, gaia::GaiaRequest::Self *a5)
{
  gaia::ServiceRequest::Self *v5;
  int v6;
  typedef int _g4_t_v8;
  typedef uint8_t _g4_t_v9[7];
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (7u + sizeof(_g4_t_v8)) > _g4_s0 ? (7u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v9)) > _g4_s1 ? (8u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v10)) > _g4_s2 ? (16u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v11)) > _g4_s3 ? (20u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v12)) > _g4_s4 ? (24u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v13)) > _g4_s5 ? (28u + sizeof(_g4_t_v13)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 7u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);

  v5 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v5, a5);
  *((uint32_t *)v5 + 8) = 4025;
  *((uint32_t *)v5 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v5) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9[4]), "/groups", (int)(uintptr_t)(&v8));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "/", (int)(uintptr_t)(v9));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v9[4]), &v10, a3);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "/members/", (int)(uintptr_t)(&v9[1]));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v9[4]), &v11, a4);
  g4_std::string::Destroy(&v11);
  g4_std::string::append((int)(uintptr_t)(&v9[4]), "/delete", 7u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), (char *)&unk_1B15112, (int)(uintptr_t)(&v9[2]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v13), "access_token=", (int)(uintptr_t)(&v9[3]));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v12), v13, a2);
  g4_std::string::Destroy(v13);
  g4_std::string::assign_str((char *)v5 + 44, &v9[4]);
  g4_std::string::assign_str((char *)v5 + 48, &v12);
  v6 = gaia::BaseServiceManager::SendCompleteRequest(a1, v5);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy(&v9[4]);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::DeleteGroup  (binary VA: 0x14afc70)
// Original: gaia::Osiris::DeleteGroup
// ----------------------------------------------------------------------------
int gaia::Osiris::DeleteGroup(gaia::BaseServiceManager::Self *a1, char **a2, char **a3, gaia::GaiaRequest::Self *a4)
{
  gaia::ServiceRequest::Self *v4;
  int v5;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v9)) > _g4_s2 ? (20u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v10)) > _g4_s3 ? (24u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v11)) > _g4_s4 ? (28u + sizeof(_g4_t_v11)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  v4 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v4, a4);
  *((uint32_t *)v4 + 8) = 4018;
  *((uint32_t *)v4 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v4) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "/groups", (int)(uintptr_t)(&v7));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "/", (int)(uintptr_t)(&v7) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v8), &v9, a3);
  g4_std::string::Destroy(&v9);
  g4_std::string::append((int)(uintptr_t)(&v8), "/delete", 7u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), (char *)&unk_1B15112, (int)(uintptr_t)(&v7) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v11), "access_token=", (int)(uintptr_t)(&v7) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v10), v11, a2);
  g4_std::string::Destroy(v11);
  g4_std::string::assign_str((char *)v4 + 44, &v8);
  g4_std::string::assign_str((char *)v4 + 48, &v10);
  v5 = gaia::BaseServiceManager::SendCompleteRequest(a1, v4);
  g4_std::string::Destroy(&v10);
  g4_std::string::Destroy(&v8);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::UpdateStatusLine  (binary VA: 0x14afe00)
// Original: gaia::Osiris::UpdateStatusLine
// ----------------------------------------------------------------------------
int gaia::Osiris::UpdateStatusLine(gaia::BaseServiceManager::Self *a1, char **a2, char **a3, gaia::GaiaRequest::Self *a4)
{
  gaia::ServiceRequest::Self *v4;
  int v5;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v9)) > _g4_s2 ? (20u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v10)) > _g4_s3 ? (24u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v11)) > _g4_s4 ? (28u + sizeof(_g4_t_v11)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  v4 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v4, a4);
  *((uint32_t *)v4 + 8) = 4015;
  *((uint32_t *)v4 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v4) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "/accounts/me/status_line", (int)(uintptr_t)(&v7));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), (char *)&unk_1B15112, (int)(uintptr_t)(&v7) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "access_token=", (int)(uintptr_t)(&v7) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v9), &v10, a2);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v11), "&status_line=", (int)(uintptr_t)(&v7) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v9), v11, a3);
  g4_std::string::Destroy(v11);
  g4_std::string::assign_str((char *)v4 + 44, &v8);
  g4_std::string::assign_str((char *)v4 + 48, &v9);
  v5 = gaia::BaseServiceManager::SendCompleteRequest(a1, v4);
  g4_std::string::Destroy(&v9);
  g4_std::string::Destroy(&v8);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::UpdateProfile  (binary VA: 0x14aff80)
// Original: gaia::Osiris::UpdateProfile
// ----------------------------------------------------------------------------
int gaia::Osiris::UpdateProfile(gaia::BaseServiceManager::Self *a1, char **a2, char **a3, char **a4, char **a5, gaia::GaiaRequest::Self *a6)
{
  gaia::ServiceRequest::Self *v6;
  int v7;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (2u + sizeof(_g4_t_v9)) > _g4_s0 ? (2u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v10)) > _g4_s1 ? (4u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v11)) > _g4_s2 ? (8u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v12)) > _g4_s3 ? (12u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v13)) > _g4_s4 ? (16u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v14)) > _g4_s5 ? (20u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v15)) > _g4_s6 ? (24u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v16)) > _g4_s7 ? (28u + sizeof(_g4_t_v16)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 2u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);

  v6 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v6, a6);
  *((uint32_t *)v6 + 8) = 4013;
  *((uint32_t *)v6 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v6) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "/accounts/me", (int)(uintptr_t)(&v9));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), (char *)&unk_1B15112, (int)(uintptr_t)(&v9) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "access_token=", (int)(uintptr_t)(&v10));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v12), &v13, a2);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "&name=", (int)(uintptr_t)(&v10) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v12), &v14, a3);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "&language=", (int)(uintptr_t)(&v10) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v12), &v15, a4);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v16), "&country=", (int)(uintptr_t)(&v10) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v12), v16, a5);
  g4_std::string::Destroy(v16);
  g4_std::string::assign_str((char *)v6 + 44, &v11);
  g4_std::string::assign_str((char *)v6 + 48, &v12);
  v7 = gaia::BaseServiceManager::SendCompleteRequest(a1, v6);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy(&v11);
  return v7;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::IgnoreRequest  (binary VA: 0x14b01a0)
// Original: gaia::Osiris::IgnoreRequest
// ----------------------------------------------------------------------------
int gaia::Osiris::IgnoreRequest(gaia::BaseServiceManager::Self *a1, char **a2, char **a3, gaia::GaiaRequest::Self *a4)
{
  gaia::ServiceRequest::Self *v4;
  int v5;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v9)) > _g4_s2 ? (20u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v10)) > _g4_s3 ? (24u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v11)) > _g4_s4 ? (28u + sizeof(_g4_t_v11)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  v4 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v4, a4);
  *((uint32_t *)v4 + 8) = 4012;
  *((uint32_t *)v4 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v4) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "/accounts/me/requests", (int)(uintptr_t)(&v7));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "/", (int)(uintptr_t)(&v7) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v8), &v9, a3);
  g4_std::string::Destroy(&v9);
  g4_std::string::append((int)(uintptr_t)(&v8), "/ignore", 7u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), (char *)&unk_1B15112, (int)(uintptr_t)(&v7) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v11), "access_token=", (int)(uintptr_t)(&v7) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v10), v11, a2);
  g4_std::string::Destroy(v11);
  g4_std::string::assign_str((char *)v4 + 44, &v8);
  g4_std::string::assign_str((char *)v4 + 48, &v10);
  v5 = gaia::BaseServiceManager::SendCompleteRequest(a1, v4);
  g4_std::string::Destroy(&v10);
  g4_std::string::Destroy(&v8);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::RejectRequest  (binary VA: 0x14b0330)
// Original: gaia::Osiris::RejectRequest
// ----------------------------------------------------------------------------
int gaia::Osiris::RejectRequest(gaia::BaseServiceManager::Self *a1, char **a2, char **a3, gaia::GaiaRequest::Self *a4)
{
  gaia::ServiceRequest::Self *v4;
  int v5;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v9)) > _g4_s2 ? (20u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v10)) > _g4_s3 ? (24u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v11)) > _g4_s4 ? (28u + sizeof(_g4_t_v11)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  v4 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v4, a4);
  *((uint32_t *)v4 + 8) = 4011;
  *((uint32_t *)v4 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v4) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "/accounts/me/requests", (int)(uintptr_t)(&v7));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "/", (int)(uintptr_t)(&v7) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v8), &v9, a3);
  g4_std::string::Destroy(&v9);
  g4_std::string::append((int)(uintptr_t)(&v8), "/reject", 7u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), (char *)&unk_1B15112, (int)(uintptr_t)(&v7) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v11), "access_token=", (int)(uintptr_t)(&v7) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v10), v11, a2);
  g4_std::string::Destroy(v11);
  g4_std::string::assign_str((char *)v4 + 44, &v8);
  g4_std::string::assign_str((char *)v4 + 48, &v10);
  v5 = gaia::BaseServiceManager::SendCompleteRequest(a1, v4);
  g4_std::string::Destroy(&v10);
  g4_std::string::Destroy(&v8);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::AcceptRequest  (binary VA: 0x14b04c0)
// Original: gaia::Osiris::AcceptRequest
// ----------------------------------------------------------------------------
int gaia::Osiris::AcceptRequest(gaia::BaseServiceManager::Self *a1, char **a2, char **a3, gaia::GaiaRequest::Self *a4)
{
  gaia::ServiceRequest::Self *v4;
  int v5;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v9)) > _g4_s2 ? (20u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v10)) > _g4_s3 ? (24u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v11)) > _g4_s4 ? (28u + sizeof(_g4_t_v11)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  v4 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v4, a4);
  *((uint32_t *)v4 + 8) = 4010;
  *((uint32_t *)v4 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v4) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "/accounts/me/requests", (int)(uintptr_t)(&v7));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "/", (int)(uintptr_t)(&v7) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v8), &v9, a3);
  g4_std::string::Destroy(&v9);
  g4_std::string::append((int)(uintptr_t)(&v8), "/accept", 7u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), (char *)&unk_1B15112, (int)(uintptr_t)(&v7) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v11), "access_token=", (int)(uintptr_t)(&v7) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v10), v11, a2);
  g4_std::string::Destroy(v11);
  g4_std::string::assign_str((char *)v4 + 44, &v8);
  g4_std::string::assign_str((char *)v4 + 48, &v10);
  v5 = gaia::BaseServiceManager::SendCompleteRequest(a1, v4);
  g4_std::string::Destroy(&v10);
  g4_std::string::Destroy(&v8);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::CancelSentRequest  (binary VA: 0x14b0650)
// Original: gaia::Osiris::CancelSentRequest
// ----------------------------------------------------------------------------
int gaia::Osiris::CancelSentRequest(gaia::BaseServiceManager::Self *a1, char **a2, char **a3, gaia::GaiaRequest::Self *a4)
{
  gaia::ServiceRequest::Self *v4;
  int v5;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v9)) > _g4_s2 ? (20u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v10)) > _g4_s3 ? (24u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v11)) > _g4_s4 ? (28u + sizeof(_g4_t_v11)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  v4 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v4, a4);
  *((uint32_t *)v4 + 8) = 4009;
  *((uint32_t *)v4 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v4) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "/accounts/me/requests/sent", (int)(uintptr_t)(&v7));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "/", (int)(uintptr_t)(&v7) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v8), &v9, a3);
  g4_std::string::Destroy(&v9);
  g4_std::string::append((int)(uintptr_t)(&v8), "/cancel", 7u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), (char *)&unk_1B15112, (int)(uintptr_t)(&v7) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v11), "access_token=", (int)(uintptr_t)(&v7) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v10), v11, a2);
  g4_std::string::Destroy(v11);
  g4_std::string::assign_str((char *)v4 + 44, &v8);
  g4_std::string::assign_str((char *)v4 + 48, &v10);
  v5 = gaia::BaseServiceManager::SendCompleteRequest(a1, v4);
  g4_std::string::Destroy(&v10);
  g4_std::string::Destroy(&v8);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::ConnectionExists  (binary VA: 0x14b07e0)
// Original: gaia::Osiris::ConnectionExists
// ----------------------------------------------------------------------------
int gaia::Osiris::ConnectionExists(gaia::BaseServiceManager::Self *a1, char **a2, int a3, char **a4, gaia::GaiaRequest::Self *a5)
{
  gaia::ServiceRequest::Self *v5;
  int v6;
  typedef char **_g4_t_v8;
  typedef int _g4_t_v9;
  typedef uint8_t _g4_t_v10[7];
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (23u + sizeof(_g4_t_v9)) > _g4_s1 ? (23u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v10)) > _g4_s2 ? (24u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v11)) > _g4_s3 ? (32u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v12)) > _g4_s4 ? (36u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v13)) > _g4_s5 ? (40u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v14)) > _g4_s6 ? (44u + sizeof(_g4_t_v14)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 23u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);

  v5 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v5, a5);
  *((uint32_t *)v5 + 8) = 4003;
  g4_std_compat::string_assign((int)(uintptr_t)(v5) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10[4]), "/accounts/me/connections", (int)(uintptr_t)(&v9));
  v8 = (char **)(gaia::Osiris::s_OsirisConnectionsVector[0] + 4 * a3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "/", (int)(uintptr_t)(v10));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v10[4]), &v11, v8);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "/", (int)(uintptr_t)(&v10[1]));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v10[4]), &v12, a4);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), (char *)&unk_1B15112, (int)(uintptr_t)(&v10[2]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v14), "access_token=", (int)(uintptr_t)(&v10[3]));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v13), v14, a2);
  g4_std::string::Destroy(v14);
  g4_std::string::assign_str((char *)v5 + 44, &v10[4]);
  g4_std::string::assign_str((char *)v5 + 48, &v13);
  v6 = gaia::BaseServiceManager::SendCompleteRequest(a1, v5);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v10[4]);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::DeleteConnection  (binary VA: 0x14b09b0)
// Original: gaia::Osiris::DeleteConnection
// ----------------------------------------------------------------------------
int gaia::Osiris::DeleteConnection(gaia::BaseServiceManager::Self *a1, char **a2, int a3, char **a4, gaia::GaiaRequest::Self *a5)
{
  gaia::ServiceRequest::Self *v5;
  int v6;
  typedef char **_g4_t_v8;
  typedef int _g4_t_v9;
  typedef uint8_t _g4_t_v10[7];
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (23u + sizeof(_g4_t_v9)) > _g4_s1 ? (23u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v10)) > _g4_s2 ? (24u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v11)) > _g4_s3 ? (32u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v12)) > _g4_s4 ? (36u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v13)) > _g4_s5 ? (40u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v14)) > _g4_s6 ? (44u + sizeof(_g4_t_v14)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 23u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);

  v5 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v5, a5);
  *((uint32_t *)v5 + 8) = 4002;
  *((uint32_t *)v5 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v5) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10[4]), "/accounts/me/connections", (int)(uintptr_t)(&v9));
  v8 = (char **)(gaia::Osiris::s_OsirisConnectionsVector[0] + 4 * a3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "/", (int)(uintptr_t)(v10));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v10[4]), &v11, v8);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "/", (int)(uintptr_t)(&v10[1]));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v10[4]), &v12, a4);
  g4_std::string::Destroy(&v12);
  g4_std::string::append((int)(uintptr_t)(&v10[4]), "/delete", 7u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), (char *)&unk_1B15112, (int)(uintptr_t)(&v10[2]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v14), "access_token=", (int)(uintptr_t)(&v10[3]));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v13), v14, a2);
  g4_std::string::Destroy(v14);
  g4_std::string::assign_str((char *)v5 + 44, &v10[4]);
  g4_std::string::assign_str((char *)v5 + 48, &v13);
  v6 = gaia::BaseServiceManager::SendCompleteRequest(a1, v5);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v10[4]);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::AddConnection  (binary VA: 0x14b0ba0)
// Original: gaia::Osiris::AddConnection
// ----------------------------------------------------------------------------
int gaia::Osiris::AddConnection(gaia::BaseServiceManager::Self *a1, char **a2, int a3, char **a4, char **a5, char **a6, gaia::GaiaRequest::Self *a7)
{
  gaia::ServiceRequest::Self *v7;
  int v8;
  typedef char **_g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (29u + sizeof(_g4_t_v11)) > _g4_s1 ? (29u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v12)) > _g4_s2 ? (32u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v13)) > _g4_s3 ? (36u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v14)) > _g4_s4 ? (40u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v15)) > _g4_s5 ? (44u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v16)) > _g4_s6 ? (48u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v17)) > _g4_s7 ? (52u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v18)) > _g4_s8 ? (56u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v19)) > _g4_s9 ? (60u + sizeof(_g4_t_v19)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 29u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 36u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 40u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 48u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 52u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 56u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 60u);

  v7 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v7, a7);
  *((uint32_t *)v7 + 8) = 4001;
  *((uint32_t *)v7 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v7) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "/accounts/me/connections", (int)(uintptr_t)(&v11));
  v10 = (char **)(gaia::Osiris::s_OsirisConnectionsVector[0] + 4 * a3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "/", (int)(uintptr_t)(&v11) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v13), &v14, v10);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), (char *)&unk_1B15112, (int)(uintptr_t)(&v11) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "access_token=", (int)(uintptr_t)(&v12));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v15), &v16, a2);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "&target_credential=", (int)(uintptr_t)(&v12) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v15), &v17, a4);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "&requester_credential=", (int)(uintptr_t)(&v12) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v15), &v18, a5);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v19), "&required_approval=", (int)(uintptr_t)(&v12) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v15), v19, a6);
  g4_std::string::Destroy(v19);
  g4_std::string::assign_str((char *)v7 + 44, &v13);
  g4_std::string::assign_str((char *)v7 + 48, &v15);
  v8 = gaia::BaseServiceManager::SendCompleteRequest(a1, v7);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v13);
  return v8;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::DeliverParticipantAwards  (binary VA: 0x14b47e0)
// Original: gaia::Osiris::DeliverParticipantAwards
// ----------------------------------------------------------------------------
int gaia::Osiris::DeliverParticipantAwards(int a1, int a2, char **a3, char **a4, char **a5, gaia::GaiaRequest::Self *a6)
{
  gaia::ServiceRequest::Self *v6;
  int v7;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v11)) > _g4_s2 ? (16u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v12)) > _g4_s3 ? (20u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v13)) > _g4_s4 ? (24u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v14)) > _g4_s5 ? (28u + sizeof(_g4_t_v14)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);

  v6 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v6, a6);
  *((uint32_t *)v6 + 8) = 4047;
  *((uint32_t *)v6 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v6) + 40, "https://", 8u);
  v10 = (int)(uintptr_t)(&dword_213B814);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "/events/", (int)(uintptr_t)(&v9));
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v10), &v11, a4);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "/participants/", (int)(uintptr_t)(&v9) + 1);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v10), &v12, a5);
  g4_std::string::Destroy(&v12);
  g4_std::string::append((int)(uintptr_t)(&v10), "/award", 6u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), (char *)&unk_1B15112, (int)(uintptr_t)(&v9) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v14), "access_token=", (int)(uintptr_t)(&v9) + 3);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v13), v14, a3);
  g4_std::string::Destroy(v14);
  g4_std::string::assign_str((char *)v6 + 44, &v10);
  g4_std::string::assign_str((char *)v6 + 48, &v13);
  v7 = gaia::BaseServiceManager::SendCompleteRequest(a1, v6, a2);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v10);
  return v7;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::DeliverAwards  (binary VA: 0x14b49b0)
// Original: gaia::Osiris::DeliverAwards
// ----------------------------------------------------------------------------
int gaia::Osiris::DeliverAwards(int a1, int a2, char **a3, char **a4, gaia::GaiaRequest::Self *a5)
{
  gaia::ServiceRequest::Self *v5;
  int v6;
  typedef uint16_t _g4_t_v8[3];
  typedef int _g4_t_v9;
  typedef uint32_t *_g4_t_v10;
  typedef int _g4_t_v11[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (14u + sizeof(_g4_t_v8)) > _g4_s0 ? (14u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v9)) > _g4_s1 ? (20u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v10)) > _g4_s2 ? (24u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v11)) > _g4_s3 ? (28u + sizeof(_g4_t_v11)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 14u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  v5 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v5, a5);
  *((uint32_t *)v5 + 8) = 4047;
  *((uint32_t *)v5 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v5) + 40, "https://", 8u);
  *(uint32_t *)&v8[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "/events/", (int)(uintptr_t)(v8));
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v8[1]), &v9, a4);
  g4_std::string::Destroy(&v9);
  g4_std::string::append((int)(uintptr_t)(&v8[1]), "/awards/me", 0xAu);
  v10 = &dword_213B814;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v11), "access_token=", (int)(uintptr_t)(v8) + 1);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v10), v11, a3);
  g4_std::string::Destroy(v11);
  g4_std::string::assign_str((char *)v5 + 44, &v8[1]);
  g4_std::string::assign_str((char *)v5 + 48, &v10);
  v6 = gaia::BaseServiceManager::SendCompleteRequest(a1, v5, a2);
  g4_std::string::Destroy(&v10);
  g4_std::string::Destroy(&v8[1]);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::UpdateEvent  (binary VA: 0x14b4b30)
// Original: gaia::Osiris::UpdateEvent
// ----------------------------------------------------------------------------
int gaia::Osiris::UpdateEvent(int a1, int a2, char **a3, char **a4, char **a5, char **a6, char **a7, char **a8, char **a9, char **a10, char **a11, int a12, gaia::GaiaRequest::Self *a13)
{
  int i;
  int v14;
  typedef gaia::ServiceRequest::Self *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
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
  typedef int _g4_t_v31[8];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v16)) > _g4_s0 ? (12u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (22u + sizeof(_g4_t_v17)) > _g4_s1 ? (22u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v18)) > _g4_s2 ? (24u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v19)) > _g4_s3 ? (28u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v20)) > _g4_s4 ? (32u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v21)) > _g4_s5 ? (36u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v22)) > _g4_s6 ? (40u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v23)) > _g4_s7 ? (44u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v24)) > _g4_s8 ? (48u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v25)) > _g4_s9 ? (52u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v26)) > _g4_s10 ? (56u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v27)) > _g4_s11 ? (60u + sizeof(_g4_t_v27)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v28)) > _g4_s12 ? (64u + sizeof(_g4_t_v28)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v29)) > _g4_s13 ? (68u + sizeof(_g4_t_v29)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v30)) > _g4_s14 ? (72u + sizeof(_g4_t_v30)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v31)) > _g4_s15 ? (76u + sizeof(_g4_t_v31)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 22u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 48u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 52u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 64u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 68u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 72u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 76u);

  v16 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v16, a13);
  *((uint32_t *)v16 + 8) = 4029;
  *((uint32_t *)v16 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v16) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "/events", (int)(uintptr_t)(&v17));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "/", (int)(uintptr_t)(&v17) + 1);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v20), &v21, a4);
  g4_std::string::Destroy(&v21);
  v22 = (int)(uintptr_t)(&dword_213B814);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "access_token=", (int)(uintptr_t)(&v18));
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v22), &v23, a3);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "&name=", (int)(uintptr_t)(&v18) + 1);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v22), &v24, a5);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "&category=", (int)(uintptr_t)(&v18) + 2);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v22), &v25, a7);
  g4_std::string::Destroy(&v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "&description=", (int)(uintptr_t)(&v18) + 3);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v22), &v26, a6);
  g4_std::string::Destroy(&v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "&start_date=", (int)(uintptr_t)(&v19));
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v22), &v27, a8);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "&end_date=", (int)(uintptr_t)(&v19) + 1);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v22), &v28, a9);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "&group_id=", (int)(uintptr_t)(&v19) + 2);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v22), &v29, a10);
  g4_std::string::Destroy(&v29);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "&tournament=", (int)(uintptr_t)(&v19) + 3);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v22), &v30, a11);
  g4_std::string::Destroy(&v30);
  if ( a12 != 0 )
  {
    for ( i = *(uint32_t *)(a12 + 12); a12 + 4 != i; i = sub_1904890(i) )
    {
      g4_std::string::append((int)(uintptr_t)(&v22), "&", 1u);
      g4_std::string::construct_copy(v31, i + 16);
      g4_std::string::append((int)(uintptr_t)(v31), "=", 1u);
      gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v22), v31, (char **)(i + 20));
      g4_std::string::Destroy(v31);
    }
  }
  g4_std::string::assign_str((char *)v16 + 44, &v20);
  g4_std::string::assign_str((char *)v16 + 48, &v22);
  v14 = gaia::BaseServiceManager::SendCompleteRequest(a1, v16, a2);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v20);
  return v14;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::GetEvents  (binary VA: 0x14b4f80)
// Original: gaia::Osiris::GetEvents
// ----------------------------------------------------------------------------
int gaia::Osiris::GetEvents(int a1, int a2, char **a3, char **a4, gaia::GaiaRequest::Self *a5)
{
  gaia::ServiceRequest::Self *v5;
  int v6;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v10)) > _g4_s2 ? (20u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v11)) > _g4_s3 ? (24u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v12)) > _g4_s4 ? (28u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  v5 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v5, a5);
  *((uint32_t *)v5 + 8) = 4032;
  g4_std_compat::string_assign((int)(uintptr_t)(v5) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "/events", (int)(uintptr_t)(&v8));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), (char *)&unk_1B15112, (int)(uintptr_t)(&v8) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "access_token=", (int)(uintptr_t)(&v8) + 2);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v10), &v11, a3);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v12), "&event_ids=", (int)(uintptr_t)(&v8) + 3);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v10), v12, a4);
  g4_std::string::Destroy(v12);
  g4_std::string::assign_str((char *)v5 + 44, &v9);
  g4_std::string::assign_str((char *)v5 + 48, &v10);
  v6 = gaia::BaseServiceManager::SendCompleteRequest(a1, v5, a2);
  g4_std::string::Destroy(&v10);
  g4_std::string::Destroy(&v9);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::SetTournamentInfo  (binary VA: 0x14b5100)
// Original: gaia::Osiris::SetTournamentInfo
// ----------------------------------------------------------------------------
int gaia::Osiris::SetTournamentInfo(int a1, int a2, char **a3, char **a4, char **a5, char **a6, int a7, gaia::GaiaRequest::Self *a8)
{
  gaia::ServiceRequest::Self *v8;
  int v9;
  typedef char **_g4_t_v11;
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
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (29u + sizeof(_g4_t_v12)) > _g4_s1 ? (29u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v13)) > _g4_s2 ? (32u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v14)) > _g4_s3 ? (36u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v15)) > _g4_s4 ? (40u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v16)) > _g4_s5 ? (44u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v17)) > _g4_s6 ? (48u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v18)) > _g4_s7 ? (52u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v19)) > _g4_s8 ? (56u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v20)) > _g4_s9 ? (60u + sizeof(_g4_t_v20)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 29u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 52u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 56u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 60u);

  v8 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v8, a8);
  *((uint32_t *)v8 + 8) = 4034;
  *((uint32_t *)v8 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v8) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "/events", (int)(uintptr_t)(&v12));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "/", (int)(uintptr_t)(&v12) + 1);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v14), &v15, a4);
  g4_std::string::Destroy(&v15);
  g4_std::string::append((int)(uintptr_t)(&v14), "/tournament", 0xBu);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), (char *)&unk_1B15112, (int)(uintptr_t)(&v12) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "access_token=", (int)(uintptr_t)(&v13));
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v16), &v17, a3);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "&type=", (int)(uintptr_t)(&v13) + 1);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v16), &v18, a5);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "&leaderboard=", (int)(uintptr_t)(&v13) + 2);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v16), &v19, a6);
  g4_std::string::Destroy(&v19);
  v11 = (char **)(gaia::Osiris::s_OsirisTournamentDeliveryTypeVector[0] + 4 * a7);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v20), "&delivery=", (int)(uintptr_t)(&v13) + 3);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v16), v20, v11);
  g4_std::string::Destroy(v20);
  g4_std::string::assign_str((char *)v8 + 44, &v14);
  g4_std::string::assign_str((char *)v8 + 48, &v16);
  v9 = gaia::BaseServiceManager::SendCompleteRequest(a1, v8, a2);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v14);
  return v9;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::CreateEvent  (binary VA: 0x14b53a0)
// Original: gaia::Osiris::CreateEvent
// ----------------------------------------------------------------------------
int gaia::Osiris::CreateEvent(int a1, int a2, char **a3, char **a4, char **a5, char **a6, char **a7, char **a8, char **a9, char **a10, int a11, gaia::GaiaRequest::Self *a12)
{
  int i;
  int v13;
  typedef gaia::ServiceRequest::Self *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint8_t _g4_t_v18[7];
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28[8];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v15)) > _g4_s0 ? (12u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (27u + sizeof(_g4_t_v16)) > _g4_s1 ? (27u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v17)) > _g4_s2 ? (28u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v18)) > _g4_s3 ? (32u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v19)) > _g4_s4 ? (40u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v20)) > _g4_s5 ? (44u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v21)) > _g4_s6 ? (48u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v22)) > _g4_s7 ? (52u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v23)) > _g4_s8 ? (56u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v24)) > _g4_s9 ? (60u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v25)) > _g4_s10 ? (64u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v26)) > _g4_s11 ? (68u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v27)) > _g4_s12 ? (72u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v28)) > _g4_s13 ? (76u + sizeof(_g4_t_v28)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 27u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 52u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 56u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 60u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 64u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 68u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 72u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 76u);

  v15 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v15, a12);
  *((uint32_t *)v15 + 8) = 4028;
  *((uint32_t *)v15 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v15) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18[4]), "/events", (int)(uintptr_t)(&v16));
  v19 = (int)(uintptr_t)(&dword_213B814);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "access_token=", (int)(uintptr_t)(&v17));
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v19), &v20, a3);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "&name=", (int)(uintptr_t)(&v17) + 1);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v19), &v21, a4);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "&category=", (int)(uintptr_t)(&v17) + 2);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v19), &v22, a6);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "&description=", (int)(uintptr_t)(&v17) + 3);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v19), &v23, a5);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "&start_date=", (int)(uintptr_t)(v18));
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v19), &v24, a7);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "&end_date=", (int)(uintptr_t)(&v18[1]));
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v19), &v25, a8);
  g4_std::string::Destroy(&v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "&group_id=", (int)(uintptr_t)(&v18[2]));
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v19), &v26, a9);
  g4_std::string::Destroy(&v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "&tournament=", (int)(uintptr_t)(&v18[3]));
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v19), &v27, a10);
  g4_std::string::Destroy(&v27);
  if ( a11 != 0 )
  {
    for ( i = *(uint32_t *)(a11 + 12); a11 + 4 != i; i = sub_1904890(i) )
    {
      g4_std::string::append((int)(uintptr_t)(&v19), "&", 1u);
      g4_std::string::construct_copy(v28, i + 16);
      g4_std::string::append((int)(uintptr_t)(v28), "=", 1u);
      gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v19), v28, (char **)(i + 20));
      g4_std::string::Destroy(v28);
    }
  }
  g4_std::string::assign_str((char *)v15 + 44, &v18[4]);
  g4_std::string::assign_str((char *)v15 + 48, &v19);
  v13 = gaia::BaseServiceManager::SendCompleteRequest(a1, v15, a2);
  g4_std::string::Destroy(&v19);
  g4_std::string::Destroy(&v18[4]);
  return v13;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::GetGroupField  (binary VA: 0x14b57a0)
// Original: gaia::Osiris::GetGroupField
// ----------------------------------------------------------------------------
int gaia::Osiris::GetGroupField(int a1, int a2, char **a3, char **a4, char **a5, gaia::GaiaRequest::Self *a6)
{
  gaia::ServiceRequest::Self *v6;
  int v7;
  typedef uint8_t _g4_t_v9[7];
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint32_t *_g4_t_v12;
  typedef int _g4_t_v13[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (9u + sizeof(_g4_t_v9)) > _g4_s0 ? (9u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v10)) > _g4_s1 ? (16u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v13)) > _g4_s4 ? (28u + sizeof(_g4_t_v13)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 9u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);

  v6 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v6, a6);
  *((uint32_t *)v6 + 8) = 4045;
  *((uint32_t *)v6 + 4) = 0;
  g4_std_compat::string_assign((int)(uintptr_t)(v6) + 40, "https://", 8u);
  *(uint32_t *)&v9[3] = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "/groups/", (int)(uintptr_t)(v9));
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v9[3]), &v10, a4);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "/fields/", (int)(uintptr_t)(&v9[1]));
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v9[3]), &v11, a5);
  g4_std::string::Destroy(&v11);
  v12 = &dword_213B814;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v13), "access_token=", (int)(uintptr_t)(&v9[2]));
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v12), v13, a3);
  g4_std::string::Destroy(v13);
  g4_std::string::assign_str((char *)v6 + 44, &v9[3]);
  g4_std::string::assign_str((char *)v6 + 48, &v12);
  v7 = gaia::BaseServiceManager::SendCompleteRequest(a1, v6, a2);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy(&v9[3]);
  return v7;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::IncrementDecrementGroupField  (binary VA: 0x14b5960)
// Original: gaia::Osiris::IncrementDecrementGroupField
// ----------------------------------------------------------------------------
int gaia::Osiris::IncrementDecrementGroupField(int a1, int a2, char **a3, char **a4, char **a5, char **a6, int a7, gaia::GaiaRequest::Self *a8)
{
  gaia::ServiceRequest::Self *v8;
  int v9;
  typedef char **_g4_t_v11;
  typedef int _g4_t_v12;
  typedef int64_t _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint32_t *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (31u + sizeof(_g4_t_v12)) > _g4_s1 ? (31u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v13)) > _g4_s2 ? (32u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v14)) > _g4_s3 ? (40u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v15)) > _g4_s4 ? (44u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v16)) > _g4_s5 ? (48u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v17)) > _g4_s6 ? (52u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v18)) > _g4_s7 ? (56u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v19)) > _g4_s8 ? (60u + sizeof(_g4_t_v19)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 31u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 40u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 48u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 52u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 56u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 60u);

  v8 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v8, a8);
  *((uint32_t *)v8 + 8) = 4046;
  *((uint32_t *)v8 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v8) + 40, "https://", 8u);
  HIDWORD(v13) = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "/groups/", (int)(uintptr_t)(&v12));
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v13) + 4, &v14, a4);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "/fields/", (int)(uintptr_t)(&v13));
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v13) + 4, &v15, a5);
  g4_std::string::Destroy(&v15);
  v16 = &dword_213B814;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "access_token=", (int)(uintptr_t)(&v13) + 1);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v16), &v17, a3);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "&object=", (int)(uintptr_t)(&v13) + 2);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v16), &v18, a6);
  g4_std::string::Destroy(&v18);
  v11 = (char **)(gaia::Osiris::s_OsirisGroupModifyFieldTypeVector[0] + 4 * a7);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v19), "&operation=", (int)(uintptr_t)(&v13) + 3);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v16), v19, v11);
  g4_std::string::Destroy(v19);
  g4_std::string::assign_str((char *)v8 + 44, (char *)&v13 + 4);
  g4_std::string::assign_str((char *)v8 + 48, &v16);
  v9 = gaia::BaseServiceManager::SendCompleteRequest(a1, v8, a2);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy((char *)&v13 + 4);
  return v9;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::SetGroupField  (binary VA: 0x14b5bc0)
// Original: gaia::Osiris::SetGroupField
// ----------------------------------------------------------------------------
int gaia::Osiris::SetGroupField(int a1, int a2, char **a3, char **a4, char **a5, char **a6, gaia::GaiaRequest::Self *a7)
{
  gaia::ServiceRequest::Self *v7;
  int v8;
  typedef int _g4_t_v10;
  typedef uint32_t *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint32_t *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v11)) > _g4_s1 ? (8u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v12)) > _g4_s2 ? (12u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v13)) > _g4_s3 ? (16u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v14)) > _g4_s4 ? (20u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v15)) > _g4_s5 ? (24u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v16)) > _g4_s6 ? (28u + sizeof(_g4_t_v16)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);

  v7 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v7, a7);
  *((uint32_t *)v7 + 8) = 4044;
  *((uint32_t *)v7 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v7) + 40, "https://", 8u);
  v11 = &dword_213B814;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "/groups/", (int)(uintptr_t)(&v10));
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v11), &v12, a4);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "/fields/", (int)(uintptr_t)(&v10) + 1);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v11), &v13, a5);
  g4_std::string::Destroy(&v13);
  v14 = &dword_213B814;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "access_token=", (int)(uintptr_t)(&v10) + 2);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v14), &v15, a3);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v16), "&object=", (int)(uintptr_t)(&v10) + 3);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v14), v16, a6);
  g4_std::string::Destroy(v16);
  g4_std::string::assign_str((char *)v7 + 44, &v11);
  g4_std::string::assign_str((char *)v7 + 48, &v14);
  v8 = gaia::BaseServiceManager::SendCompleteRequest(a1, v7, a2);
  g4_std::string::Destroy(&v14);
  g4_std::string::Destroy(&v11);
  return v8;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::ListAchievements  (binary VA: 0x14b8470)
// Original: gaia::Osiris::ListAchievements
// ----------------------------------------------------------------------------
int gaia::Osiris::ListAchievements(gaia::BaseServiceManager::Self *a1, void **a2, int *a3, char **a4, char **a5, char **a6, gaia::GaiaRequest::Self *a7)
{
  gaia::ServiceRequest::Self *v7;
  int v8;
  typedef int _g4_t_v10;
  typedef uint8_t _g4_t_v11[7];
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (7u + sizeof(_g4_t_v10)) > _g4_s0 ? (7u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v11)) > _g4_s1 ? (8u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v12)) > _g4_s2 ? (16u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v13)) > _g4_s3 ? (20u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v14)) > _g4_s4 ? (24u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v15)) > _g4_s5 ? (28u + sizeof(_g4_t_v15)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 7u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);

  v7 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v7, a7);
  *((uint32_t *)v7 + 8) = 4041;
  g4_std_compat::string_assign((int)(uintptr_t)(v7) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11[4]), "/accounts", (int)(uintptr_t)(&v10));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "/", (int)(uintptr_t)(v11));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v11[4]), &v12, a4);
  g4_std::string::Destroy(&v12);
  g4_std::string::append((int)(uintptr_t)(&v11[4]), "/trophies", 9u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), (char *)&unk_1B15112, (int)(uintptr_t)(&v11[1]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "access_token=", (int)(uintptr_t)(&v11[2]));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v13), &v14, a5);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v15), "&game=", (int)(uintptr_t)(&v11[3]));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v13), v15, a6);
  g4_std::string::Destroy(v15);
  g4_std::string::assign_str((char *)v7 + 44, &v11[4]);
  g4_std::string::assign_str((char *)v7 + 48, &v13);
  v8 = gaia::BaseServiceManager::SendCompleteRequest(a1, v7, a2, a3);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v11[4]);
  return v8;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::ViewWall  (binary VA: 0x14b8660)
// Original: gaia::Osiris::ViewWall
// ----------------------------------------------------------------------------
int gaia::Osiris::ViewWall(gaia::BaseServiceManager::Self *a1, void **a2, int *a3, int a4, char **a5, char **a6, char **a7, char **a8, gaia::GaiaRequest::Self *a9)
{
  gaia::ServiceRequest::Self *v9;
  int v10;
  typedef char **_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int64_t _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (30u + sizeof(_g4_t_v13)) > _g4_s1 ? (30u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v14)) > _g4_s2 ? (32u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v15)) > _g4_s3 ? (40u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v16)) > _g4_s4 ? (44u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v17)) > _g4_s5 ? (48u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v18)) > _g4_s6 ? (52u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v19)) > _g4_s7 ? (56u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v20)) > _g4_s8 ? (60u + sizeof(_g4_t_v20)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 30u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 52u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 56u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 60u);

  v9 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v9, a9);
  *((uint32_t *)v9 + 8) = 4038;
  g4_std_compat::string_assign((int)(uintptr_t)(v9) + 40, "https://", 8u);
  HIDWORD(v14) = (uint32_t)(uintptr_t)(&dword_213B814);
  v12 = (char **)(gaia::Osiris::s_OsirisWallPostObjectTypesVector[0] + 4 * a4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "/", (int)(uintptr_t)(&v13));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v14) + 4, &v15, v12);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "/", (int)(uintptr_t)(&v13) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v14) + 4, &v16, a5);
  g4_std::string::Destroy(&v16);
  g4_std::string::append((int)(uintptr_t)(&v14) + 4, "/wall", 5u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), (char *)&unk_1B15112, (int)(uintptr_t)(&v14));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "access_token=", (int)(uintptr_t)(&v14) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v17), &v18, a6);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "&sort_type=", (int)(uintptr_t)(&v14) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v17), &v19, a7);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v20), "&language=", (int)(uintptr_t)(&v14) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v17), v20, a8);
  g4_std::string::Destroy(v20);
  g4_std::string::assign_str((char *)v9 + 44, (char *)&v14 + 4);
  g4_std::string::assign_str((char *)v9 + 48, &v17);
  v10 = gaia::BaseServiceManager::SendCompleteRequest(a1, v9, a2, a3);
  g4_std::string::Destroy(&v17);
  g4_std::string::Destroy((char *)&v14 + 4);
  return v10;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::ShowEvent  (binary VA: 0x14b88f0)
// Original: gaia::Osiris::ShowEvent
// ----------------------------------------------------------------------------
int gaia::Osiris::ShowEvent(gaia::BaseServiceManager::Self *a1, void **a2, int *a3, char **a4, char **a5, gaia::GaiaRequest::Self *a6)
{
  gaia::ServiceRequest::Self *v6;
  int v7;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v10)) > _g4_s1 ? (16u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v13)) > _g4_s4 ? (28u + sizeof(_g4_t_v13)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);

  v6 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v6, a6);
  *((uint32_t *)v6 + 8) = 4031;
  g4_std_compat::string_assign((int)(uintptr_t)(v6) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "/events", (int)(uintptr_t)(&v9));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "/", (int)(uintptr_t)(&v9) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v10), &v11, a5);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), (char *)&unk_1B15112, (int)(uintptr_t)(&v9) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v13), "access_token=", (int)(uintptr_t)(&v9) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v12), v13, a4);
  g4_std::string::Destroy(v13);
  g4_std::string::assign_str((char *)v6 + 44, &v10);
  g4_std::string::assign_str((char *)v6 + 48, &v12);
  v7 = gaia::BaseServiceManager::SendCompleteRequest(a1, v6, a2, a3);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy(&v10);
  return v7;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::ShowGroup  (binary VA: 0x14b8a70)
// Original: gaia::Osiris::ShowGroup
// ----------------------------------------------------------------------------
int gaia::Osiris::ShowGroup(gaia::BaseServiceManager::Self *a1, void **a2, int *a3, char **a4, char **a5, gaia::GaiaRequest::Self *a6)
{
  gaia::ServiceRequest::Self *v6;
  int v7;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v10)) > _g4_s1 ? (16u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v13)) > _g4_s4 ? (28u + sizeof(_g4_t_v13)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);

  v6 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v6, a6);
  *((uint32_t *)v6 + 8) = 4019;
  g4_std_compat::string_assign((int)(uintptr_t)(v6) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "/groups", (int)(uintptr_t)(&v9));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "/", (int)(uintptr_t)(&v9) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v10), &v11, a5);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), (char *)&unk_1B15112, (int)(uintptr_t)(&v9) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v13), "access_token=", (int)(uintptr_t)(&v9) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v12), v13, a4);
  g4_std::string::Destroy(v13);
  g4_std::string::assign_str((char *)v6 + 44, &v10);
  g4_std::string::assign_str((char *)v6 + 48, &v12);
  v7 = gaia::BaseServiceManager::SendCompleteRequest(a1, v6, a2, a3);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy(&v10);
  return v7;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::MembershipCheck  (binary VA: 0x14b8bf0)
// Original: gaia::Osiris::MembershipCheck
// ----------------------------------------------------------------------------
int gaia::Osiris::MembershipCheck(gaia::BaseServiceManager::Self *a1, void **a2, int *a3, char **a4, char **a5, char **a6, gaia::GaiaRequest::Self *a7)
{
  gaia::ServiceRequest::Self *v7;
  int v8;
  typedef int _g4_t_v10;
  typedef uint8_t _g4_t_v11[7];
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (7u + sizeof(_g4_t_v10)) > _g4_s0 ? (7u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v11)) > _g4_s1 ? (8u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v12)) > _g4_s2 ? (16u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v13)) > _g4_s3 ? (20u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v14)) > _g4_s4 ? (24u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v15)) > _g4_s5 ? (28u + sizeof(_g4_t_v15)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 7u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);

  v7 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v7, a7);
  *((uint32_t *)v7 + 8) = 4023;
  g4_std_compat::string_assign((int)(uintptr_t)(v7) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11[4]), "/groups", (int)(uintptr_t)(&v10));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "/", (int)(uintptr_t)(v11));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v11[4]), &v12, a5);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "/members/", (int)(uintptr_t)(&v11[1]));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v11[4]), &v13, a6);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), (char *)&unk_1B15112, (int)(uintptr_t)(&v11[2]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v15), "access_token=", (int)(uintptr_t)(&v11[3]));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v14), v15, a4);
  g4_std::string::Destroy(v15);
  g4_std::string::assign_str((char *)v7 + 44, &v11[4]);
  g4_std::string::assign_str((char *)v7 + 48, &v14);
  v8 = gaia::BaseServiceManager::SendCompleteRequest(a1, v7, a2, a3);
  g4_std::string::Destroy(&v14);
  g4_std::string::Destroy(&v11[4]);
  return v8;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::GetProfile  (binary VA: 0x14b8db0)
// Original: gaia::Osiris::GetProfile
// ----------------------------------------------------------------------------
int gaia::Osiris::GetProfile(gaia::BaseServiceManager::Self *a1, void **a2, int *a3, char **a4, char **a5, gaia::GaiaRequest::Self *a6)
{
  gaia::ServiceRequest::Self *v6;
  int v7;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v10)) > _g4_s1 ? (16u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v13)) > _g4_s4 ? (28u + sizeof(_g4_t_v13)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);

  v6 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v6, a6);
  *((uint32_t *)v6 + 8) = 4014;
  g4_std_compat::string_assign((int)(uintptr_t)(v6) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "/accounts/", (int)(uintptr_t)(&v9));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "/", (int)(uintptr_t)(&v9) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v10), &v11, a5);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), (char *)&unk_1B15112, (int)(uintptr_t)(&v9) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v13), "access_token=", (int)(uintptr_t)(&v9) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v12), v13, a4);
  g4_std::string::Destroy(v13);
  g4_std::string::assign_str((char *)v6 + 44, &v10);
  g4_std::string::assign_str((char *)v6 + 48, &v12);
  v7 = gaia::BaseServiceManager::SendCompleteRequest(a1, v6, a2, a3);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy(&v10);
  return v7;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::Import  (binary VA: 0x14b8f30)
// Original: gaia::Osiris::Import
// ----------------------------------------------------------------------------
int gaia::Osiris::Import(gaia::BaseServiceManager::Self *a1, void **a2, int *a3, char **a4, char **a5, char **a6, char **a7, gaia::GaiaRequest::Self *a8)
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
  typedef int _g4_t_v18[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (2u + sizeof(_g4_t_v11)) > _g4_s0 ? (2u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v12)) > _g4_s1 ? (4u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v13)) > _g4_s2 ? (8u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v14)) > _g4_s3 ? (12u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v15)) > _g4_s4 ? (16u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v16)) > _g4_s5 ? (20u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v17)) > _g4_s6 ? (24u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v18)) > _g4_s7 ? (28u + sizeof(_g4_t_v18)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 2u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);

  v8 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v8, a8);
  *((uint32_t *)v8 + 8) = 4005;
  *((uint32_t *)v8 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v8) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "/accounts/me/import", (int)(uintptr_t)(&v11));
  if ( *((uint32_t *)*a7 - 3) != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "/", (int)(uintptr_t)(&v11) + 1);
    gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v13), &v14, a7);
    g4_std::string::Destroy(&v14);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), (char *)&unk_1B15112, (int)(uintptr_t)(&v12));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "access_token=", (int)(uintptr_t)(&v12) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v15), &v16, a4);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "&from_credential=", (int)(uintptr_t)(&v12) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v15), &v17, a5);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v18), "&secret=", (int)(uintptr_t)(&v12) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v15), v18, a6);
  g4_std::string::Destroy(v18);
  g4_std::string::assign_str((char *)v8 + 44, &v13);
  g4_std::string::assign_str((char *)v8 + 48, &v15);
  v9 = gaia::BaseServiceManager::SendCompleteRequest(a1, v8, a2, a3);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v13);
  return v9;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::ImportFriends  (binary VA: 0x14b9170)
// Original: gaia::Osiris::ImportFriends
// ----------------------------------------------------------------------------
int gaia::Osiris::ImportFriends(gaia::BaseServiceManager::Self *a1, void **a2, int *a3, char **a4, int a5, char **a6, char **a7, gaia::GaiaRequest::Self *a8)
{
  gaia::ServiceRequest::Self *v8;
  int v9;
  typedef char **_g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (18u + sizeof(_g4_t_v12)) > _g4_s1 ? (18u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v13)) > _g4_s2 ? (20u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v14)) > _g4_s3 ? (24u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v15)) > _g4_s4 ? (28u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v16)) > _g4_s5 ? (32u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v17)) > _g4_s6 ? (36u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v18)) > _g4_s7 ? (40u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v19)) > _g4_s8 ? (44u + sizeof(_g4_t_v19)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 18u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);

  v8 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v8, a8);
  *((uint32_t *)v8 + 8) = 4004;
  *((uint32_t *)v8 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v8) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "/accounts/me/connections", (int)(uintptr_t)(&v12));
  v11 = (char **)(gaia::Osiris::s_OsirisConnectionsVector[0] + 4 * a5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "/", (int)(uintptr_t)(&v12) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v14), &v15, v11);
  g4_std::string::Destroy(&v15);
  g4_std::string::append((int)(uintptr_t)(&v14), "/import", 7u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), (char *)&unk_1B15112, (int)(uintptr_t)(&v13));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "access_token=", (int)(uintptr_t)(&v13) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v16), &v17, a4);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "&from_credential=", (int)(uintptr_t)(&v13) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v16), &v18, a6);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v19), "&secret=", (int)(uintptr_t)(&v13) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v16), v19, a7);
  g4_std::string::Destroy(v19);
  g4_std::string::assign_str((char *)v8 + 44, &v14);
  g4_std::string::assign_str((char *)v8 + 48, &v16);
  v9 = gaia::BaseServiceManager::SendCompleteRequest(a1, v8, a2, a3);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v14);
  return v9;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::GetPictureFromUrl  (binary VA: 0x14b93c0)
// Original: gaia::Osiris::GetPictureFromUrl
// ----------------------------------------------------------------------------
int gaia::Osiris::GetPictureFromUrl(gaia::BaseServiceManager::Self *a1, int a2, void **a3, int *a4, gaia::GaiaRequest::Self *a5)
{
  gaia::ServiceRequest::Self *v5;
  uint8_t v7[4];

  v5 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v5, a5);
  *((uint32_t *)v5 + 4) = 0;
  g4_std::string::construct_copy(v7, a2);
  g4_std::string::assign_str((char *)v5 + 36, v7);
  g4_std::string::Destroy(v7);
  return gaia::BaseServiceManager::SendCompleteRequest(a1, v5, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::DeleteAward  (binary VA: 0x14baaa0)
// Original: gaia::Osiris::DeleteAward
// ----------------------------------------------------------------------------
int gaia::Osiris::DeleteAward(gaia::BaseServiceManager::Self *a1, char **a2, char **a3, int a4, gaia::GaiaRequest::Self *a5)
{
  gaia::ServiceRequest::Self *v5;
  int v6;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint32_t *_g4_t_v12;
  typedef int _g4_t_v13[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v10)) > _g4_s2 ? (16u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v11)) > _g4_s3 ? (20u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v12)) > _g4_s4 ? (24u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v13)) > _g4_s5 ? (28u + sizeof(_g4_t_v13)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);

  v5 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v5, a5);
  *((uint32_t *)v5 + 8) = 4036;
  *((uint32_t *)v5 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v5) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "/events", (int)(uintptr_t)(&v8));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "/", (int)(uintptr_t)(&v8) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v9), &v10, a3);
  g4_std::string::Destroy(&v10);
  g4_std::string::append((int)(uintptr_t)(&v9), "/awards", 7u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "&start_rank=", (int)(uintptr_t)(&v8) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v9), &v11, &a4, 0);
  g4_std::string::Destroy(&v11);
  g4_std::string::append((int)(uintptr_t)(&v9), "/delete", 7u);
  v12 = &dword_213B814;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v13), "access_token=", (int)(uintptr_t)(&v8) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v12), v13, a2);
  g4_std::string::Destroy(v13);
  g4_std::string::assign_str((char *)v5 + 44, &v9);
  g4_std::string::assign_str((char *)v5 + 48, &v12);
  v6 = gaia::BaseServiceManager::SendCompleteRequest(a1, v5);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy(&v9);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::AddEventAward  (binary VA: 0x14baca0)
// Original: gaia::Osiris::AddEventAward
// ----------------------------------------------------------------------------
int gaia::Osiris::AddEventAward(gaia::BaseServiceManager::Self *a1, char **a2, char **a3, int a4, int a5, char **a6, char **a7, gaia::GaiaRequest::Self *a8)
{
  gaia::ServiceRequest::Self *v8;
  int v9;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint32_t *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (9u + sizeof(_g4_t_v11)) > _g4_s0 ? (9u + sizeof(_g4_t_v11)) : _g4_s0,
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
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 9u);
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
  *((uint32_t *)v8 + 8) = 4035;
  *((uint32_t *)v8 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v8) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "/events", (int)(uintptr_t)(&v11));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "/", (int)(uintptr_t)(&v11) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v13), &v14, a3);
  g4_std::string::Destroy(&v14);
  g4_std::string::append((int)(uintptr_t)(&v13), "/awards", 7u);
  v15 = &dword_213B814;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "access_token=", (int)(uintptr_t)(&v11) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v15), &v16, a2);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "&start_rank=", (int)(uintptr_t)(&v12));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v15), &v17, &a4, 0);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "&end_rank=", (int)(uintptr_t)(&v12) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v15), &v18, &a5, 0);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "&gifts=", (int)(uintptr_t)(&v12) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v15), &v19, a6);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v20), "&percentile=", (int)(uintptr_t)(&v12) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v15), v20, a7);
  g4_std::string::Destroy(v20);
  g4_std::string::assign_str((char *)v8 + 44, &v13);
  g4_std::string::assign_str((char *)v8 + 48, &v15);
  v9 = gaia::BaseServiceManager::SendCompleteRequest(a1, v8);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v13);
  return v9;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::SearchEvents  (binary VA: 0x14bb5a0)
// Original: gaia::Osiris::SearchEvents
// ----------------------------------------------------------------------------
int gaia::Osiris::SearchEvents(gaia::BaseServiceManager::Self *a1, void **a2, int *a3, char **a4, char **a5, char **a6, char **a7, int a8, int a9, gaia::GaiaRequest::Self *a10)
{
  gaia::ServiceRequest::Self *v10;
  int v11;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v13)) > _g4_s0 ? (8u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v14)) > _g4_s1 ? (12u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v15)) > _g4_s2 ? (16u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v16)) > _g4_s3 ? (20u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v17)) > _g4_s4 ? (24u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v18)) > _g4_s5 ? (28u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v19)) > _g4_s6 ? (32u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v20)) > _g4_s7 ? (36u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v21)) > _g4_s8 ? (40u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v22)) > _g4_s9 ? (44u + sizeof(_g4_t_v22)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 44u);

  v10 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v10, a10);
  *((uint32_t *)v10 + 8) = 4033;
  g4_std_compat::string_assign((int)(uintptr_t)(v10) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "/events", (int)(uintptr_t)(&v13));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), (char *)&unk_1B15112, (int)(uintptr_t)(&v13) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "access_token=", (int)(uintptr_t)(&v13) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v16), &v17, a4);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "&category=", (int)(uintptr_t)(&v13) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v16), &v18, a5);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "&status=", (int)(uintptr_t)(&v14));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v16), &v19, a6);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "&keywords=", (int)(uintptr_t)(&v14) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v16), &v20, a7);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "&offset=", (int)(uintptr_t)(&v14) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v16), &v21, &a9, 0);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v22), "&limit=", (int)(uintptr_t)(&v14) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v16), v22, &a8, 0);
  g4_std::string::Destroy(v22);
  g4_std::string::assign_str((char *)v10 + 44, &v15);
  g4_std::string::assign_str((char *)v10 + 48, &v16);
  v11 = gaia::BaseServiceManager::SendCompleteRequest(a1, v10, a2, a3);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v15);
  return v11;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::ListGroupMembers  (binary VA: 0x14bb890)
// Original: gaia::Osiris::ListGroupMembers
// ----------------------------------------------------------------------------
int gaia::Osiris::ListGroupMembers(gaia::BaseServiceManager::Self *a1, void **a2, int *a3, char **a4, char **a5, int a6, int a7, char a8, gaia::GaiaRequest::Self *a9)
{
  gaia::ServiceRequest::Self *v9;
  char *v10;
  int v11;
  typedef char _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v13)) > _g4_s0 ? (12u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v14)) > _g4_s1 ? (24u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v15)) > _g4_s2 ? (28u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v16)) > _g4_s3 ? (32u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v17)) > _g4_s4 ? (36u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v18)) > _g4_s5 ? (40u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v19)) > _g4_s6 ? (44u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v20)) > _g4_s7 ? (48u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v21)) > _g4_s8 ? (52u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v22)) > _g4_s9 ? (56u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v23)) > _g4_s10 ? (60u + sizeof(_g4_t_v23)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 48u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 52u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 56u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);

  v13 = a8;
  v9 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v9, a9);
  *((uint32_t *)v9 + 8) = 4027;
  g4_std_compat::string_assign((int)(uintptr_t)(v9) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "/groups", (int)(uintptr_t)(&v14));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "/", (int)(uintptr_t)(&v14) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v16), &v17, a5);
  g4_std::string::Destroy(&v17);
  g4_std::string::append((int)(uintptr_t)(&v16), "/members", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), (char *)&unk_1B15112, (int)(uintptr_t)(&v14) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "access_token=", (int)(uintptr_t)(&v14) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v18), &v19, a4);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "&offset=", (int)(uintptr_t)(&v15));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v18), &v20, &a7, 0);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "&limit=", (int)(uintptr_t)(&v15) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v18), &v21, &a6, 0);
  g4_std::string::Destroy(&v21);
  v10 = "True";
  if ( v13 == 0 )
    v10 = "False";
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v23), v10, (int)(uintptr_t)(&v15) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "&owners=", (int)(uintptr_t)(&v15) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v18), &v22, (char **)v23);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(v23);
  g4_std::string::assign_str((char *)v9 + 44, &v16);
  g4_std::string::assign_str((char *)v9 + 48, &v18);
  v11 = gaia::BaseServiceManager::SendCompleteRequest(a1, v9, a2, a3);
  g4_std::string::Destroy(&v18);
  g4_std::string::Destroy(&v16);
  return v11;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::SearchClansByRecommendedScore  (binary VA: 0x14bbb80)
// Original: gaia::Osiris::SearchClansByRecommendedScore
// ----------------------------------------------------------------------------
int gaia::Osiris::SearchClansByRecommendedScore(gaia::BaseServiceManager::Self *a1, void **a2, int *a3, char **a4, char **a5, char **a6, int a7, int a8, gaia::GaiaRequest::Self *a9)
{
  gaia::ServiceRequest::Self *v9;
  int v10;
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
    _g4_s1 = (13u + sizeof(_g4_t_v12)) > _g4_s0 ? (13u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v14)) > _g4_s2 ? (20u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v15)) > _g4_s3 ? (24u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v16)) > _g4_s4 ? (28u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v17)) > _g4_s5 ? (32u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v18)) > _g4_s6 ? (36u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v19)) > _g4_s7 ? (40u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v20)) > _g4_s8 ? (44u + sizeof(_g4_t_v20)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 13u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);

  v9 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v9, a9);
  *((uint32_t *)v9 + 8) = 4021;
  g4_std_compat::string_assign((int)(uintptr_t)(v9) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "/groups/categories", (int)(uintptr_t)(&v12));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "/", (int)(uintptr_t)(&v12) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v14), &v15, a5);
  g4_std::string::Destroy(&v15);
  g4_std::string::append((int)(uintptr_t)(&v14), "/find/recommendation_score", 0x1Au);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), (char *)&unk_1B15112, (int)(uintptr_t)(&v12) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "access_token=", (int)(uintptr_t)(&v13));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v16), &v17, a4);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "&filter=", (int)(uintptr_t)(&v13) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v16), &v18, a6);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "&offset=", (int)(uintptr_t)(&v13) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v16), &v19, &a7, 0);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v20), "&limit=", (int)(uintptr_t)(&v13) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v16), v20, &a8, 0);
  g4_std::string::Destroy(v20);
  g4_std::string::assign_str((char *)v9 + 44, &v14);
  g4_std::string::assign_str((char *)v9 + 48, &v16);
  v10 = gaia::BaseServiceManager::SendCompleteRequest(a1, v9, a2, a3);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v14);
  return v10;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::SearchGroupsByKeywords  (binary VA: 0x14bbe30)
// Original: gaia::Osiris::SearchGroupsByKeywords
// ----------------------------------------------------------------------------
int gaia::Osiris::SearchGroupsByKeywords(gaia::BaseServiceManager::Self *a1, void **a2, int *a3, char **a4, char **a5, char **a6, int a7, int a8, gaia::GaiaRequest::Self *a9)
{
  gaia::ServiceRequest::Self *v9;
  int v10;
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
    _g4_s1 = (13u + sizeof(_g4_t_v12)) > _g4_s0 ? (13u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v14)) > _g4_s2 ? (20u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v15)) > _g4_s3 ? (24u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v16)) > _g4_s4 ? (28u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v17)) > _g4_s5 ? (32u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v18)) > _g4_s6 ? (36u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v19)) > _g4_s7 ? (40u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v20)) > _g4_s8 ? (44u + sizeof(_g4_t_v20)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 13u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);

  v9 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v9, a9);
  *((uint32_t *)v9 + 8) = 4020;
  g4_std_compat::string_assign((int)(uintptr_t)(v9) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "/groups/categories", (int)(uintptr_t)(&v12));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "/", (int)(uintptr_t)(&v12) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v14), &v15, a5);
  g4_std::string::Destroy(&v15);
  g4_std::string::append((int)(uintptr_t)(&v14), "/find/keyword", 0xDu);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), (char *)&unk_1B15112, (int)(uintptr_t)(&v12) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "access_token=", (int)(uintptr_t)(&v13));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v16), &v17, a4);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "&keywords=", (int)(uintptr_t)(&v13) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v16), &v18, a6);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "&offset=", (int)(uintptr_t)(&v13) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v16), &v19, &a8, 0);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v20), "&limit=", (int)(uintptr_t)(&v13) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v16), v20, &a7, 0);
  g4_std::string::Destroy(v20);
  g4_std::string::assign_str((char *)v9 + 44, &v14);
  g4_std::string::assign_str((char *)v9 + 48, &v16);
  v10 = gaia::BaseServiceManager::SendCompleteRequest(a1, v9, a2, a3);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v14);
  return v10;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::SearchGroups  (binary VA: 0x14bc0e0)
// Original: gaia::Osiris::SearchGroups
// ----------------------------------------------------------------------------
int gaia::Osiris::SearchGroups(gaia::BaseServiceManager::Self *a1, void **a2, int *a3, char **a4, char **a5, int a6, int a7, gaia::GaiaRequest::Self *a8)
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
  typedef int _g4_t_v18[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (2u + sizeof(_g4_t_v11)) > _g4_s0 ? (2u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v12)) > _g4_s1 ? (4u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v13)) > _g4_s2 ? (8u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v14)) > _g4_s3 ? (12u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v15)) > _g4_s4 ? (16u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v16)) > _g4_s5 ? (20u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v17)) > _g4_s6 ? (24u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v18)) > _g4_s7 ? (28u + sizeof(_g4_t_v18)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 2u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);

  v8 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v8, a8);
  *((uint32_t *)v8 + 8) = 4020;
  g4_std_compat::string_assign((int)(uintptr_t)(v8) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "/groups", (int)(uintptr_t)(&v11));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), (char *)&unk_1B15112, (int)(uintptr_t)(&v11) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "access_token=", (int)(uintptr_t)(&v12));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v14), &v15, a4);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "&category=", (int)(uintptr_t)(&v12) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v14), &v16, a5);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "&offset=", (int)(uintptr_t)(&v12) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v14), &v17, &a7, 0);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v18), "&limit=", (int)(uintptr_t)(&v12) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v14), v18, &a6, 0);
  g4_std::string::Destroy(v18);
  g4_std::string::assign_str((char *)v8 + 44, &v13);
  g4_std::string::assign_str((char *)v8 + 48, &v14);
  v9 = gaia::BaseServiceManager::SendCompleteRequest(a1, v8, a2, a3);
  g4_std::string::Destroy(&v14);
  g4_std::string::Destroy(&v13);
  return v9;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::UpdateGroup  (binary VA: 0x14bc320)
// Original: gaia::Osiris::UpdateGroup
// ----------------------------------------------------------------------------
int gaia::Osiris::UpdateGroup(gaia::BaseServiceManager::Self *a1, void **a2, int *a3, char **a4, char **a5, char **a6, char **a7, int a8, char **a9, int a10, int a11, Json::Value::Self *a12, Json::Value::Self *a13, gaia::GaiaRequest::Self *a14)
{
  char **v14;
  int v15;
  int v16;
  typedef int _g4_t_i;
  typedef gaia::ServiceRequest::Self *_g4_t_v19;
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
  typedef char *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef char *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36[8];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_i)) > _g4_s0 ? (0u + sizeof(_g4_t_i)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v19)) > _g4_s1 ? (12u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (29u + sizeof(_g4_t_v20)) > _g4_s2 ? (29u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v21)) > _g4_s3 ? (32u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v22)) > _g4_s4 ? (36u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v23)) > _g4_s5 ? (40u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v24)) > _g4_s6 ? (44u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v25)) > _g4_s7 ? (48u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v26)) > _g4_s8 ? (52u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v27)) > _g4_s9 ? (56u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v28)) > _g4_s10 ? (60u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v29)) > _g4_s11 ? (64u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v30)) > _g4_s12 ? (68u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v31)) > _g4_s13 ? (72u + sizeof(_g4_t_v31)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v32)) > _g4_s14 ? (76u + sizeof(_g4_t_v32)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v33)) > _g4_s15 ? (80u + sizeof(_g4_t_v33)) : _g4_s15,
    _g4_s17 = (84u + sizeof(_g4_t_v34)) > _g4_s16 ? (84u + sizeof(_g4_t_v34)) : _g4_s16,
    _g4_s18 = (88u + sizeof(_g4_t_v35)) > _g4_s17 ? (88u + sizeof(_g4_t_v35)) : _g4_s17,
    _g4_s19 = (92u + sizeof(_g4_t_v36)) > _g4_s18 ? (92u + sizeof(_g4_t_v36)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 29u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
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

  v19 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v19, a14);
  *((uint32_t *)v19 + 8) = 4017;
  *((uint32_t *)v19 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v19) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "/groups", (int)(uintptr_t)(&v20));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "/", (int)(uintptr_t)(&v20) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v23), &v24, a9);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), (char *)&unk_1B15112, (int)(uintptr_t)(&v20) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "access_token=", (int)(uintptr_t)(&v21));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v25), &v26, a4);
  g4_std::string::Destroy(&v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "&name=", (int)(uintptr_t)(&v21) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v25), &v27, a5);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "&category=", (int)(uintptr_t)(&v21) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v25), &v28, a6);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "&description=", (int)(uintptr_t)(&v21) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v25), &v29, a7);
  g4_std::string::Destroy(&v29);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "&member_limit=", (int)(uintptr_t)(&v22));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v25), &v30, &a8, 0);
  g4_std::string::Destroy(&v30);
  v14 = (char **)(gaia::Osiris::s_OsirisGroupMembershipVector[0] + 4 * a10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "&membership=", (int)(uintptr_t)(&v22) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v25), &v31, v14);
  g4_std::string::Destroy(&v31);
  if ( !Json::Value::isNull(a12) && (uint8_t)Json::Value::isArray(a12) != 0 )
  {
    Json::Value::toStyledString((Json::Value::Self *)&v32);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "&promote_owners=", (int)(uintptr_t)(&v22) + 2);
    gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v25), &v33, &v32);
    g4_std::string::Destroy(&v33);
    g4_std::string::Destroy(&v32);
  }
  if ( !Json::Value::isNull(a13) && (uint8_t)Json::Value::isArray(a13) != 0 )
  {
    Json::Value::toStyledString((Json::Value::Self *)&v34);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "&demote_owners=", (int)(uintptr_t)(&v22) + 3);
    gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v25), &v35, &v34);
    g4_std::string::Destroy(&v35);
    g4_std::string::Destroy(&v34);
  }
  if ( a11 != 0 )
  {
    v15 = *(uint32_t *)(a11 + 12);
    for ( i = a11 + 4; i != v15; v15 = sub_1904890(v15) )
    {
      g4_std::string::append((int)(uintptr_t)(&v25), "&", 1u);
      g4_std::string::construct_copy(v36, v15 + 16);
      g4_std::string::append((int)(uintptr_t)(v36), "=", 1u);
      gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v25), v36, (char **)(v15 + 20));
      g4_std::string::Destroy(v36);
    }
  }
  g4_std::string::assign_str((char *)v19 + 44, &v23);
  g4_std::string::assign_str((char *)v19 + 48, &v25);
  v16 = gaia::BaseServiceManager::SendCompleteRequest(a1, v19, a2, a3);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v23);
  return v16;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::CreateGroup  (binary VA: 0x14bc840)
// Original: gaia::Osiris::CreateGroup
// ----------------------------------------------------------------------------
int gaia::Osiris::CreateGroup(gaia::BaseServiceManager::Self *a1, void **a2, int *a3, char **a4, int a5, char **a6, char **a7, char **a8, int a9, char **a10, int a11, int a12, gaia::GaiaRequest::Self *a13)
{
  char **v13;
  char **v14;
  int i;
  int v16;
  typedef int _g4_t_v18;
  typedef gaia::ServiceRequest::Self *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint8_t _g4_t_v22[7];
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32[8];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v18)) > _g4_s0 ? (12u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v19)) > _g4_s1 ? (28u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (43u + sizeof(_g4_t_v20)) > _g4_s2 ? (43u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v21)) > _g4_s3 ? (44u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v22)) > _g4_s4 ? (48u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v23)) > _g4_s5 ? (56u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v24)) > _g4_s6 ? (60u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v25)) > _g4_s7 ? (64u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v26)) > _g4_s8 ? (68u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v27)) > _g4_s9 ? (72u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v28)) > _g4_s10 ? (76u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v29)) > _g4_s11 ? (80u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v30)) > _g4_s12 ? (84u + sizeof(_g4_t_v30)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v31)) > _g4_s13 ? (88u + sizeof(_g4_t_v31)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v32)) > _g4_s14 ? (92u + sizeof(_g4_t_v32)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 43u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 48u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 56u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 60u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 64u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 68u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 72u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 76u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 80u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 84u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 88u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 92u);

  v18 = a12;
  v19 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v19, a13);
  *((uint32_t *)v19 + 8) = 4016;
  *((uint32_t *)v19 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v19) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22[4]), "/groups", (int)(uintptr_t)(&v20));
  v23 = (int)(uintptr_t)(&dword_213B814);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "access_token=", (int)(uintptr_t)(&v21));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v23), &v24, a4);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "&name=", (int)(uintptr_t)(&v21) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v23), &v25, a6);
  g4_std::string::Destroy(&v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "&category=", (int)(uintptr_t)(&v21) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v23), &v26, a7);
  g4_std::string::Destroy(&v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "&description=", (int)(uintptr_t)(&v21) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v23), &v27, a8);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "&member_limit=", (int)(uintptr_t)(v22));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v23), &v28, &a9, 0);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "&group_id=", (int)(uintptr_t)(&v22[1]));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v23), &v29, a10);
  g4_std::string::Destroy(&v29);
  v13 = (char **)(gaia::Osiris::s_OsirisGroupMembershipVector[0] + 4 * a11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "&membership=", (int)(uintptr_t)(&v22[2]));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v23), &v30, v13);
  g4_std::string::Destroy(&v30);
  v14 = (char **)(gaia::Osiris::s_OsirisGroupTypesVector[0] + 4 * a5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "&type=", (int)(uintptr_t)(&v22[3]));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v23), &v31, v14);
  g4_std::string::Destroy(&v31);
  if ( v18 != 0 )
  {
    for ( i = *(uint32_t *)(v18 + 12); v18 + 4 != i; i = sub_1904890(i) )
    {
      g4_std::string::append((int)(uintptr_t)(&v23), "&", 1u);
      g4_std::string::construct_copy(v32, i + 16);
      g4_std::string::append((int)(uintptr_t)(v32), "=", 1u);
      gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v23), v32, (char **)(i + 20));
      g4_std::string::Destroy(v32);
    }
  }
  g4_std::string::assign_str((char *)v19 + 44, &v22[4]);
  g4_std::string::assign_str((char *)v19 + 48, &v23);
  v16 = gaia::BaseServiceManager::SendCompleteRequest(a1, v19, a2, a3);
  g4_std::string::Destroy(&v23);
  g4_std::string::Destroy(&v22[4]);
  return v16;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::ListSentRequests  (binary VA: 0x14bcc70)
// Original: gaia::Osiris::ListSentRequests
// ----------------------------------------------------------------------------
int gaia::Osiris::ListSentRequests(gaia::BaseServiceManager::Self *a1, void **a2, int *a3, char **a4, int a5, int a6, int a7, gaia::GaiaRequest::Self *a8)
{
  gaia::ServiceRequest::Self *v8;
  int v9;
  typedef char **_g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (18u + sizeof(_g4_t_v12)) > _g4_s1 ? (18u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v13)) > _g4_s2 ? (20u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v14)) > _g4_s3 ? (24u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v15)) > _g4_s4 ? (28u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v16)) > _g4_s5 ? (32u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v17)) > _g4_s6 ? (36u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v18)) > _g4_s7 ? (40u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v19)) > _g4_s8 ? (44u + sizeof(_g4_t_v19)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 18u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);

  v8 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v8, a8);
  *((uint32_t *)v8 + 8) = 4008;
  g4_std_compat::string_assign((int)(uintptr_t)(v8) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "/accounts/me/requests/sent", (int)(uintptr_t)(&v12));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), (char *)&unk_1B15112, (int)(uintptr_t)(&v12) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "access_token=", (int)(uintptr_t)(&v13));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v15), &v16, a4);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "&offset=", (int)(uintptr_t)(&v13) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v15), &v17, &a7, 0);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "&limit=", (int)(uintptr_t)(&v13) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v15), &v18, &a6, 0);
  g4_std::string::Destroy(&v18);
  if ( a5 != 3 )
  {
    v11 = (char **)(gaia::Osiris::s_OsirisRequestTypesVector[0] + 4 * a5);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v19), "&request_type=", (int)(uintptr_t)(&v13) + 3);
    gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v15), v19, v11);
    g4_std::string::Destroy(v19);
  }
  g4_std::string::assign_str((char *)v8 + 44, &v14);
  g4_std::string::assign_str((char *)v8 + 48, &v15);
  v9 = gaia::BaseServiceManager::SendCompleteRequest(a1, v8, a2, a3);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v14);
  return v9;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::ListRequests  (binary VA: 0x14bced0)
// Original: gaia::Osiris::ListRequests
// ----------------------------------------------------------------------------
int gaia::Osiris::ListRequests(gaia::BaseServiceManager::Self *a1, void **a2, int *a3, char **a4, int a5, int a6, int a7, char **a8, gaia::GaiaRequest::Self *a9)
{
  gaia::ServiceRequest::Self *v9;
  int v10;
  typedef char **_g4_t_v12;
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
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (29u + sizeof(_g4_t_v13)) > _g4_s1 ? (29u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v14)) > _g4_s2 ? (32u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v15)) > _g4_s3 ? (36u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v16)) > _g4_s4 ? (40u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v17)) > _g4_s5 ? (44u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v18)) > _g4_s6 ? (48u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v19)) > _g4_s7 ? (52u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v20)) > _g4_s8 ? (56u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v21)) > _g4_s9 ? (60u + sizeof(_g4_t_v21)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 29u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 52u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 56u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 60u);

  v9 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v9, a9);
  *((uint32_t *)v9 + 8) = 4007;
  g4_std_compat::string_assign((int)(uintptr_t)(v9) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "/accounts/me/requests", (int)(uintptr_t)(&v13));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), (char *)&unk_1B15112, (int)(uintptr_t)(&v13) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "access_token=", (int)(uintptr_t)(&v13) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v16), &v17, a4);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "&offset=", (int)(uintptr_t)(&v14));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v16), &v18, &a7, 0);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "&limit=", (int)(uintptr_t)(&v14) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v16), &v19, &a6, 0);
  g4_std::string::Destroy(&v19);
  if ( a5 != 3 )
  {
    v12 = (char **)(gaia::Osiris::s_OsirisRequestTypesVector[0] + 4 * a5);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "/", (int)(uintptr_t)(&v14) + 2);
    gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v15), &v20, v12);
    g4_std::string::Destroy(&v20);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v21), "&status=", (int)(uintptr_t)(&v14) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v16), v21, a8);
  g4_std::string::Destroy(v21);
  g4_std::string::assign_str((char *)v9 + 44, &v15);
  g4_std::string::assign_str((char *)v9 + 48, &v16);
  v10 = gaia::BaseServiceManager::SendCompleteRequest(a1, v9, a2, a3);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v15);
  return v10;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::ListConnections  (binary VA: 0x14bd190)
// Original: gaia::Osiris::ListConnections
// ----------------------------------------------------------------------------
int gaia::Osiris::ListConnections(gaia::BaseServiceManager::Self *a1, void **a2, int *a3, char **a4, int a5, int a6, int a7, char **a8, char a9, int a10, gaia::GaiaRequest::Self *a11)
{
  gaia::ServiceRequest::Self *v11;
  int v12;
  typedef char _g4_t_v14;
  typedef char **_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v14)) > _g4_s0 ? (8u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v15)) > _g4_s1 ? (12u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v16)) > _g4_s2 ? (24u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v17)) > _g4_s3 ? (28u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v18)) > _g4_s4 ? (32u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v19)) > _g4_s5 ? (36u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v20)) > _g4_s6 ? (40u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v21)) > _g4_s7 ? (44u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v22)) > _g4_s8 ? (48u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v23)) > _g4_s9 ? (52u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v24)) > _g4_s10 ? (56u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v25)) > _g4_s11 ? (60u + sizeof(_g4_t_v25)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 36u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 48u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 52u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 56u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 60u);

  v14 = a9;
  v11 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v11, a11);
  *((uint32_t *)v11 + 8) = 4006;
  g4_std_compat::string_assign((int)(uintptr_t)(v11) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "/accounts/me/connections", (int)(uintptr_t)(&v16));
  v15 = (char **)(gaia::Osiris::s_OsirisConnectionsVector[0] + 4 * a5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "/", (int)(uintptr_t)(&v16) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v18), &v19, v15);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), (char *)&unk_1B15112, (int)(uintptr_t)(&v16) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "access_token=", (int)(uintptr_t)(&v16) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v20), &v21, a4);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "&offset=", (int)(uintptr_t)(&v17));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v20), &v22, &a7, 0);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "&limit=", (int)(uintptr_t)(&v17) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v20), &v23, &a6, 0);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "&game=", (int)(uintptr_t)(&v17) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v20), &v24, a8);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v25), "&seconds_since_last_login=", (int)(uintptr_t)(&v17) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v20), v25, &a10, 0);
  g4_std::string::Destroy(v25);
  if ( v14 != 0 )
    g4_std::string::append((int)(uintptr_t)(&v20), "&online=1", 9u);
  g4_std::string::assign_str((char *)v11 + 44, &v18);
  g4_std::string::assign_str((char *)v11 + 48, &v20);
  v12 = gaia::BaseServiceManager::SendCompleteRequest(a1, v11, a2, a3);
  g4_std::string::Destroy(&v20);
  g4_std::string::Destroy(&v18);
  return v12;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::ViewFeed  (binary VA: 0x14bea30)
// Original: gaia::Osiris::ViewFeed
// ----------------------------------------------------------------------------
int gaia::Osiris::ViewFeed(gaia::BaseServiceManager::Self *a1, void **a2, int *a3, char **a4, char **a5, char **a6, char **a7, int a8, gaia::GaiaRequest::Self *a9)
{
  gaia::ServiceRequest::Self *v9;
  int v10;
  typedef int _g4_t_v12;
  typedef int64_t _g4_t_v13 __attribute__((aligned(1)));
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (10u + sizeof(_g4_t_v12)) > _g4_s0 ? (10u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v13)) > _g4_s1 ? (12u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v14)) > _g4_s2 ? (20u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v15)) > _g4_s3 ? (24u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v16)) > _g4_s4 ? (28u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v17)) > _g4_s5 ? (32u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v18)) > _g4_s6 ? (36u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v19)) > _g4_s7 ? (40u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v20)) > _g4_s8 ? (44u + sizeof(_g4_t_v20)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 10u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);

  v9 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v9, a9);
  *((uint32_t *)v9 + 8) = 4039;
  g4_std_compat::string_assign((int)(uintptr_t)(v9) + 40, "https://", 8u);
  HIDWORD(v13) = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "/accounts/", (int)(uintptr_t)(&v12));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v13) + 4, &v14, a4);
  g4_std::string::Destroy(&v14);
  g4_std::string::append((int)(uintptr_t)(&v13) + 4, "/feed", 5u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), (char *)&unk_1B15112, (int)(uintptr_t)(&v12) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "access_token=", (int)(uintptr_t)(&v13));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v15), &v16, a5);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "&sort_type=", (int)(uintptr_t)(&v13) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v15), &v17, a6);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "&language=", (int)(uintptr_t)(&v13) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v15), &v18, a7);
  g4_std::string::Destroy(&v18);
  v20[0] = a8;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "&connection_type=", (int)(uintptr_t)(&v13) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v15), &v19, v20, 0);
  g4_std::string::Destroy(&v19);
  g4_std::string::assign_str((char *)v9 + 44, (char *)&v13 + 4);
  g4_std::string::assign_str((char *)v9 + 48, &v15);
  v10 = gaia::BaseServiceManager::SendCompleteRequest(a1, v9, a2, a3);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy((char *)&v13 + 4);
  return v10;
}

// ----------------------------------------------------------------------------
// Function: gaia::Osiris::Construct  (binary VA: 0x14c09b0)
// Original: gaia::Osiris::Osiris
// ----------------------------------------------------------------------------
int gaia::Osiris::Construct(gaia::BaseServiceManager::Self *a1, int a2, int a3)
{
  int MaxParalelRequests;
  int v5[4];

  MaxParalelRequests = gaia::utils::GetMaxParalelRequests(5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v5) + 1, "osiris", (int)(uintptr_t)(v5));
  gaia::BaseServiceManager::Construct(a1, (int)(uintptr_t)(v5) + 1, a3, MaxParalelRequests);
  g4_std::string::Destroy((char *)v5 + 1);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2095D28);
  return (int)(uintptr_t)(g4_std::string::assign_str((char *)a1 + 52, a2));
}


