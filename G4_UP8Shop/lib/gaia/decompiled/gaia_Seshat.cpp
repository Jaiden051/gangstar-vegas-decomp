#include "Core/Utils/DecompTypes.h"
#include "gaia_Seshat.h"

// ----------------------------------------------------------------------------
// Function: gaia::Seshat::Destroy  (binary VA: 0x14ac800)
// Original: gaia::Seshat::~Seshat
// ----------------------------------------------------------------------------
void gaia::Seshat::Destroy(void **self)
{
  *self = (void *)(uintptr_t)(((uint32_t)(uintptr_t)&off_2095DA8));
  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
    (int)(uintptr_t)(self + 39),
    *(self + 41));
  gaia::BaseServiceManager::Destroy((gaia::BaseServiceManager::Self *)self);
}

// ----------------------------------------------------------------------------
// Function: gaia::Seshat::Destroy_ea14ac860  (binary VA: 0x14ac860)
// Original: gaia::Seshat::~Seshat
// ----------------------------------------------------------------------------
void gaia::Seshat::Destroy_ea14ac860(void **self)
{
  gaia::Seshat::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gaia::Seshat::DeleteMatcher  (binary VA: 0x14ad040)
// Original: gaia::Seshat::DeleteMatcher
// ----------------------------------------------------------------------------
int gaia::Seshat::DeleteMatcher(gaia::BaseServiceManager::Self *a1, char **a2, char **a3, gaia::GaiaRequest::Self *a4)
{
  gaia::ServiceRequest::Self *v4;
  void *v5;
  void *v6;
  int result;
  void *v8;
  void *v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (25u + sizeof(_g4_t_v12)) > _g4_s2 ? (25u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v13)) > _g4_s3 ? (32u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v14)) > _g4_s4 ? (36u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v15)) > _g4_s5 ? (40u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v16)) > _g4_s6 ? (44u + sizeof(_g4_t_v16)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 25u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);

  v4 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v4, a4);
  *((uint32_t *)v4 + 8) = 1013;
  *((uint32_t *)v4 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v4) + 40, "https://", 8u);
  v13 = (int)(uintptr_t)(&dword_213B814);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "/profiles/matcher/", (int)(uintptr_t)(&v12));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v13), &v14, a3);
  v5 = (void *)(v14 - 12);
  if ( (uint32_t *)(v14 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  g4_std::string::append((int)(uintptr_t)(&v13), "/delete", 7u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), (char *)&unk_1B15112, (int)(uintptr_t)(&v12) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v16), "access_token=", (int)(uintptr_t)(&v12) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v15), v16, a2);
  v6 = (void *)(v16[0] - 12);
  if ( (uint32_t *)(v16[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v16[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  g4_std::string::assign_str((char *)v4 + 44, &v13);
  g4_std::string::assign_str((char *)v4 + 48, &v15);
  result = gaia::BaseServiceManager::SendCompleteRequest(a1, v4);
  v8 = (void *)(v15 - 12);
  if ( (uint32_t *)(v15 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
  {
    v11 = result;
    g4_std::string::Rep::M_destroy(v8);
    result = v11;
  }
  v9 = (void *)(v13 - 12);
  if ( (uint32_t *)(v13 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
  {
    v10 = result;
    g4_std::string::Rep::M_destroy(v9);
    return v10;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Seshat::CreateMatcher  (binary VA: 0x14ad270)
// Original: gaia::Seshat::CreateMatcher
// ----------------------------------------------------------------------------
int gaia::Seshat::CreateMatcher(gaia::BaseServiceManager::Self *a1, char **a2, char **a3, char **a4, gaia::GaiaRequest::Self *a5)
{
  gaia::ServiceRequest::Self *v5;
  void *v6;
  void *v7;
  void *v8;
  int result;
  void *v10;
  uint32_t *v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint32_t *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v13)) > _g4_s1 ? (12u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (19u + sizeof(_g4_t_v14)) > _g4_s2 ? (19u + sizeof(_g4_t_v14)) : _g4_s2,
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
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 19u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);

  v5 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v5, a5);
  *((uint32_t *)v5 + 8) = 1011;
  *((uint32_t *)v5 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v5) + 40, "https://", 8u);
  v16 = &dword_213B814;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "/profiles/matchers/", (int)(uintptr_t)(&v14));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v16), &v17, a3);
  v6 = (void *)(v17 - 12);
  if ( (uint32_t *)(v17 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), (char *)&unk_1B15112, (int)(uintptr_t)(&v15));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "access_token=", (int)(uintptr_t)(&v15) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v18), &v19, a2);
  v7 = (void *)(v19 - 12);
  if ( (uint32_t *)(v19 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v20), "&condition=", (int)(uintptr_t)(&v15) + 2);
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
  v11 = v16 - 3;
  if ( v16 - 3 != dword_213B808 && __sync_fetch_and_add(v16 - 1, 0xFFFFFFFF) <= 0 )
  {
    v12 = result;
    g4_std::string::Rep::M_destroy(v11);
    return v12;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Seshat::SetProfileVisibilitySelector  (binary VA: 0x14ad500)
// Original: gaia::Seshat::SetProfileVisibilitySelector
// ----------------------------------------------------------------------------
int gaia::Seshat::SetProfileVisibilitySelector(gaia::BaseServiceManager::Self *a1, char **a2, char **a3, char **a4, gaia::GaiaRequest::Self *a5)
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
    _g4_s3 = (19u + sizeof(_g4_t_v14)) > _g4_s2 ? (19u + sizeof(_g4_t_v14)) : _g4_s2,
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
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 19u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);

  v5 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v5, a5);
  *((uint32_t *)v5 + 8) = 1016;
  *((uint32_t *)v5 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v5) + 40, "https://", 8u);
  v16 = (int)(uintptr_t)(&dword_213B814);
  g4_std::string::append((int)(uintptr_t)(&v16), "/profiles/me/myprofile/visibility", 0x21u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "/", (int)(uintptr_t)(&v14));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v16), &v17, a3);
  v6 = (void *)(v17 - 12);
  if ( (uint32_t *)(v17 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), (char *)&unk_1B15112, (int)(uintptr_t)(&v15));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "access_token=", (int)(uintptr_t)(&v15) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v18), &v19, a2);
  v7 = (void *)(v19 - 12);
  if ( (uint32_t *)(v19 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v20), "&visibility=", (int)(uintptr_t)(&v15) + 2);
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
// Function: gaia::Seshat::SetProfileVisibility  (binary VA: 0x14ad7b0)
// Original: gaia::Seshat::SetProfileVisibility
// ----------------------------------------------------------------------------
int gaia::Seshat::SetProfileVisibility(gaia::BaseServiceManager::Self *a1, char **a2, char **a3, gaia::GaiaRequest::Self *a4)
{
  gaia::ServiceRequest::Self *v4;
  void *v5;
  void *v6;
  int result;
  void *v8;
  void *v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (25u + sizeof(_g4_t_v12)) > _g4_s2 ? (25u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v13)) > _g4_s3 ? (32u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v14)) > _g4_s4 ? (36u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v15)) > _g4_s5 ? (40u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v16)) > _g4_s6 ? (44u + sizeof(_g4_t_v16)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 25u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);

  v4 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v4, a4);
  *((uint32_t *)v4 + 8) = 1015;
  *((uint32_t *)v4 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v4) + 40, "https://", 8u);
  v13 = (int)(uintptr_t)(&dword_213B814);
  g4_std::string::append((int)(uintptr_t)(&v13), "/profiles/me/myprofile/visibility", 0x21u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), (char *)&unk_1B15112, (int)(uintptr_t)(&v12));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "access_token=", (int)(uintptr_t)(&v12) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v14), &v15, a2);
  v5 = (void *)(v15 - 12);
  if ( (uint32_t *)(v15 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v16), "&visibility=", (int)(uintptr_t)(&v12) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v14), v16, a3);
  v6 = (void *)(v16[0] - 12);
  if ( (uint32_t *)(v16[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v16[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  g4_std::string::assign_str((char *)v4 + 44, &v13);
  g4_std::string::assign_str((char *)v4 + 48, &v14);
  result = gaia::BaseServiceManager::SendCompleteRequest(a1, v4);
  v8 = (void *)(v14 - 12);
  if ( (uint32_t *)(v14 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
  {
    v11 = result;
    g4_std::string::Rep::M_destroy(v8);
    result = v11;
  }
  v9 = (void *)(v13 - 12);
  if ( (uint32_t *)(v13 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
  {
    v10 = result;
    g4_std::string::Rep::M_destroy(v9);
    return v10;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Seshat::SetProfileVisibilityObject  (binary VA: 0x14ad9f0)
// Original: gaia::Seshat::SetProfileVisibilityObject
// ----------------------------------------------------------------------------
int gaia::Seshat::SetProfileVisibilityObject(gaia::BaseServiceManager::Self *a1, char **a2, char **a3, char **a4, gaia::GaiaRequest::Self *a5)
{
  gaia::ServiceRequest::Self *v5;
  void *v6;
  void *v7;
  void *v8;
  int result;
  uint32_t *v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef uint32_t *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (25u + sizeof(_g4_t_v12)) > _g4_s1 ? (25u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v13)) > _g4_s2 ? (32u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v14)) > _g4_s3 ? (36u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v15)) > _g4_s4 ? (40u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v16)) > _g4_s5 ? (44u + sizeof(_g4_t_v16)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 25u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);

  v5 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v5, a5);
  *((uint32_t *)v5 + 8) = 1010;
  *((uint32_t *)v5 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v5) + 40, "https://", 8u);
  g4_std_compat::string_assign((int)(uintptr_t)(v5) + 44, "/profiles/me/myprofile/visibility", 0x21u);
  v13 = &dword_213B814;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "access_token=", (int)(uintptr_t)(&v12));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v13), &v14, a2);
  v6 = (void *)(v14 - 12);
  if ( (uint32_t *)(v14 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "&operation=", (int)(uintptr_t)(&v12) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v13), &v15, a3);
  v7 = (void *)(v15 - 12);
  if ( (uint32_t *)(v15 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v16), "&visibility=", (int)(uintptr_t)(&v12) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v13), v16, a4);
  v8 = (void *)(v16[0] - 12);
  if ( (uint32_t *)(v16[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v16[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  g4_std::string::assign_str((char *)v5 + 48, &v13);
  result = gaia::BaseServiceManager::SendCompleteRequest(a1, v5);
  v10 = v13 - 3;
  if ( v13 - 3 != dword_213B808 && __sync_fetch_and_add(v13 - 1, 0xFFFFFFFF) <= 0 )
  {
    v11 = result;
    g4_std::string::Rep::M_destroy(v10);
    return v11;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Seshat::DeleteProfile  (binary VA: 0x14adc40)
// Original: gaia::Seshat::DeleteProfile
// ----------------------------------------------------------------------------
int gaia::Seshat::DeleteProfile(gaia::BaseServiceManager::Self *a1, char **a2, gaia::GaiaRequest::Self *a3)
{
  gaia::ServiceRequest::Self *v3;
  int result;
  void *v5;
  void *v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef void *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v8)) > _g4_s1 ? (8u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v9)) > _g4_s2 ? (12u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (31u + sizeof(_g4_t_v10)) > _g4_s3 ? (31u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v11)) > _g4_s4 ? (36u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v12)) > _g4_s5 ? (40u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v13)) > _g4_s6 ? (44u + sizeof(_g4_t_v13)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 31u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 36u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 40u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);

  v3 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v3, a3);
  *((uint32_t *)v3 + 8) = 1009;
  *((uint32_t *)v3 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v3) + 40, "https://", 8u);
  v11 = (int)(uintptr_t)(&dword_213B814);
  g4_std::string::append((int)(uintptr_t)(&v11), "/profiles/me/myprofile/delete", 0x1Du);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), (char *)&unk_1B15112, (int)(uintptr_t)(&v10));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v13), "access_token=", (int)(uintptr_t)(&v10) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v12), v13, a2);
  v9 = (void *)(v13[0] - 12);
  if ( (uint32_t *)(v13[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v13[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  g4_std::string::assign_str((char *)v3 + 44, &v11);
  g4_std::string::assign_str((char *)v3 + 48, &v12);
  result = gaia::BaseServiceManager::SendCompleteRequest(a1, v3);
  v5 = (void *)(v12 - 12);
  if ( (uint32_t *)(v12 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v12 - 4), 0xFFFFFFFF) <= 0 )
  {
    v8 = result;
    g4_std::string::Rep::M_destroy(v5);
    result = v8;
  }
  v6 = (void *)(v11 - 12);
  if ( (uint32_t *)(v11 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
  {
    v7 = result;
    g4_std::string::Rep::M_destroy(v6);
    return v7;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Seshat::SetProfile  (binary VA: 0x14ade10)
// Original: gaia::Seshat::SetProfile
// ----------------------------------------------------------------------------
int gaia::Seshat::SetProfile(gaia::BaseServiceManager::Self *a1, char **a2, char **a3, uint32_t *a4, char **a5, char **a6, char **a7, gaia::GaiaRequest::Self *a8)
{
  gaia::ServiceRequest::Self *v8;
  void *v9;
  void *v10;
  void *v11;
  void *v12;
  void *v13;
  void *v14;
  int result;
  void *v16;
  void *v17;
  typedef char **_g4_t_v18;
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
  typedef int _g4_t_v30[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v18)) > _g4_s0 ? (8u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v19)) > _g4_s1 ? (8u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v20)) > _g4_s2 ? (8u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (17u + sizeof(_g4_t_v21)) > _g4_s3 ? (17u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v22)) > _g4_s4 ? (20u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v23)) > _g4_s5 ? (32u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v24)) > _g4_s6 ? (36u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v25)) > _g4_s7 ? (40u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v26)) > _g4_s8 ? (44u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v27)) > _g4_s9 ? (48u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v28)) > _g4_s10 ? (52u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v29)) > _g4_s11 ? (56u + sizeof(_g4_t_v29)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v30)) > _g4_s12 ? (60u + sizeof(_g4_t_v30)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 17u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 36u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 52u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 56u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 60u);

  v8 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v8, a8);
  *((uint32_t *)v8 + 8) = 1007;
  *((uint32_t *)v8 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v8) + 40, "https://", 8u);
  v23 = (int)(uintptr_t)(&dword_213B814);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "/profiles/", (int)(uintptr_t)(&v21));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v23), &v24, a5);
  v9 = (void *)(v24 - 12);
  if ( (uint32_t *)(v24 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  g4_std::string::append((int)(uintptr_t)(&v23), "/myprofile", 0xAu);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "/", (int)(uintptr_t)(&v21) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v23), &v25, a6);
  v10 = (void *)(v25 - 12);
  if ( (uint32_t *)(v25 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v10);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), (char *)&unk_1B15112, (int)(uintptr_t)(&v21) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "access_token=", (int)(uintptr_t)(&v22));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v26), &v27, a2);
  v11 = (void *)(v27 - 12);
  if ( (uint32_t *)(v27 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v11);
  }
  v18 = (char **)(gaia::Seshat::s_visibilityVector[0] + 4 * *a4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "&visibility=", (int)(uintptr_t)(&v22) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v26), &v28, v18);
  v12 = (void *)(v28 - 12);
  if ( (uint32_t *)(v28 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v12);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "&object=", (int)(uintptr_t)(&v22) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v26), &v29, a3);
  v13 = (void *)(v29 - 12);
  if ( (uint32_t *)(v29 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v13);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v30), "&operation=", (int)(uintptr_t)(&v22) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v26), v30, a7);
  v14 = (void *)(v30[0] - 12);
  if ( (uint32_t *)(v30[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v30[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v14);
  }
  g4_std::string::assign_str((char *)v8 + 44, &v23);
  g4_std::string::assign_str((char *)v8 + 48, &v26);
  result = gaia::BaseServiceManager::SendCompleteRequest(a1, v8);
  v16 = (void *)(v26 - 12);
  if ( (uint32_t *)(v26 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
  {
    v20 = result;
    g4_std::string::Rep::M_destroy(v16);
    result = v20;
  }
  v17 = (void *)(v23 - 12);
  if ( (uint32_t *)(v23 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
  {
    v19 = result;
    g4_std::string::Rep::M_destroy(v17);
    return v19;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Seshat::DeleteData  (binary VA: 0x14ae240)
// Original: gaia::Seshat::DeleteData
// ----------------------------------------------------------------------------
int gaia::Seshat::DeleteData(gaia::BaseServiceManager::Self *a1, char **a2, char **a3, gaia::GaiaRequest::Self *a4)
{
  gaia::ServiceRequest::Self *v4;
  void *v5;
  void *v6;
  int result;
  void *v8;
  void *v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v12)) > _g4_s2 ? (24u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v13)) > _g4_s3 ? (32u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v14)) > _g4_s4 ? (36u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v15)) > _g4_s5 ? (40u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v16)) > _g4_s6 ? (44u + sizeof(_g4_t_v16)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);

  v4 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v4, a4);
  *((uint32_t *)v4 + 8) = 1004;
  *((uint32_t *)v4 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v4) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "/data/me", (int)(uintptr_t)(&v12));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "/", (int)(uintptr_t)(&v12) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v13), &v14, a3);
  v5 = (void *)(v14 - 12);
  if ( (uint32_t *)(v14 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  g4_std::string::append((int)(uintptr_t)(&v13), "/delete", 7u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), (char *)&unk_1B15112, (int)(uintptr_t)(&v12) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v16), "access_token=", (int)(uintptr_t)(&v12) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v15), v16, a2);
  v6 = (void *)(v16[0] - 12);
  if ( (uint32_t *)(v16[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v16[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  g4_std::string::assign_str((char *)v4 + 48, &v15);
  g4_std::string::assign_str((char *)v4 + 44, &v13);
  result = gaia::BaseServiceManager::SendCompleteRequest(a1, v4);
  v8 = (void *)(v15 - 12);
  if ( (uint32_t *)(v15 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
  {
    v11 = result;
    g4_std::string::Rep::M_destroy(v8);
    result = v11;
  }
  v9 = (void *)(v13 - 12);
  if ( (uint32_t *)(v13 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
  {
    v10 = result;
    g4_std::string::Rep::M_destroy(v9);
    return v10;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Seshat::PutData  (binary VA: 0x14ae490)
// Original: gaia::Seshat::PutData
// ----------------------------------------------------------------------------
int gaia::Seshat::PutData(gaia::BaseServiceManager::Self *a1, char **a2, char **a3, char **a4, char **a5, int a6, gaia::GaiaRequest::Self *a7)
{
  gaia::ServiceRequest::Self *v7;
  void *v8;
  void *v9;
  void *v10;
  void *v11;
  void *v12;
  int result;
  void *v14;
  uint32_t *v15;
  typedef char **_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint8_t _g4_t_v20[7];
  typedef uint32_t *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v16)) > _g4_s0 ? (8u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v17)) > _g4_s1 ? (8u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v18)) > _g4_s2 ? (8u + sizeof(_g4_t_v18)) : _g4_s2,
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
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
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
  *((uint32_t *)v7 + 8) = 1001;
  *((uint32_t *)v7 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v7) + 40, "https://", 8u);
  v21 = &dword_213B814;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "/data/", (int)(uintptr_t)(&v19));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v21), &v22, a5);
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
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), (char *)&unk_1B15112, (int)(uintptr_t)(&v20[1]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "access_token=", (int)(uintptr_t)(&v20[2]));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v24), &v25, a2);
  v10 = (void *)(v25 - 12);
  if ( (uint32_t *)(v25 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v10);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "&data=", (int)(uintptr_t)(&v20[3]));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v24), &v26, a4);
  v11 = (void *)(v26 - 12);
  if ( (uint32_t *)(v26 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v11);
  }
  v16 = (char **)(gaia::Seshat::s_visibilityVector[0] + 4 * a6);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v27), "&visibility=", (int)(uintptr_t)(&v20[4]));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v24), v27, v16);
  v12 = (void *)(v27[0] - 12);
  if ( (uint32_t *)(v27[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v27[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v12);
  }
  g4_std::string::assign_str((char *)v7 + 44, &v21);
  g4_std::string::assign_str((char *)v7 + 48, &v24);
  result = gaia::BaseServiceManager::SendCompleteRequest(a1, v7);
  v14 = (void *)(v24 - 12);
  if ( (uint32_t *)(v24 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
  {
    v18 = result;
    g4_std::string::Rep::M_destroy(v14);
    result = v18;
  }
  v15 = v21 - 3;
  if ( v21 - 3 != dword_213B808 && __sync_fetch_and_add(v21 - 1, 0xFFFFFFFF) <= 0 )
  {
    v17 = result;
    g4_std::string::Rep::M_destroy(v15);
    return v17;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gaia::Seshat::ListMatchers  (binary VA: 0x14b7c00)
// Original: gaia::Seshat::ListMatchers
// ----------------------------------------------------------------------------
int gaia::Seshat::ListMatchers(gaia::BaseServiceManager::Self *a1, char **a2, void **a3, int *a4, gaia::GaiaRequest::Self *a5)
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
  *((uint32_t *)v5 + 8) = 1014;
  *((uint32_t *)v5 + 4) = 0;
  g4_std_compat::string_assign((int)(uintptr_t)(v5) + 40, "https://", 8u);
  *(uint32_t *)&v8[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std::string::append((int)(uintptr_t)(&v8[1]), "/profiles/matchers", 0x12u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), (char *)&unk_1B15112, (int)(uintptr_t)(v8));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v10), "access_token=", (int)(uintptr_t)(v8) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v9), v10, a2);
  g4_std::string::Destroy(v10);
  g4_std::string::assign_str((char *)v5 + 44, &v8[1]);
  g4_std::string::assign_str((char *)v5 + 48, &v9);
  v6 = gaia::BaseServiceManager::SendCompleteRequest(a1, v5, a3, a4);
  g4_std::string::Destroy(&v9);
  g4_std::string::Destroy(&v8[1]);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gaia::Seshat::GetBatchProfiles  (binary VA: 0x14b7d50)
// Original: gaia::Seshat::GetBatchProfiles
// ----------------------------------------------------------------------------
int gaia::Seshat::GetBatchProfiles(gaia::BaseServiceManager::Self *a1, char **a2, void **a3, int *a4, char **a5, char **a6, gaia::GaiaRequest::Self *a7)
{
  gaia::ServiceRequest::Self *v7;
  int v8;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v12)) > _g4_s2 ? (16u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v13)) > _g4_s3 ? (20u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v14)) > _g4_s4 ? (24u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v15)) > _g4_s5 ? (28u + sizeof(_g4_t_v15)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);

  v7 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v7, a7);
  *((uint32_t *)v7 + 8) = 1018;
  g4_std_compat::string_assign((int)(uintptr_t)(v7) + 40, "https://", 8u);
  v11 = (int)(uintptr_t)(&dword_213B814);
  g4_std::string::append((int)(uintptr_t)(&v11), "/profiles", 9u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), (char *)&unk_1B15112, (int)(uintptr_t)(&v10));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "access_token=", (int)(uintptr_t)(&v10) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v12), &v13, a2);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "&credentials=", (int)(uintptr_t)(&v10) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v12), &v14, a5);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v15), "&include_fields=", (int)(uintptr_t)(&v10) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v12), v15, a6);
  g4_std::string::Destroy(v15);
  g4_std::string::assign_str((char *)v7 + 44, &v11);
  g4_std::string::assign_str((char *)v7 + 48, &v12);
  v8 = gaia::BaseServiceManager::SendCompleteRequest(a1, v7, a3, a4);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy(&v11);
  return v8;
}

// ----------------------------------------------------------------------------
// Function: gaia::Seshat::GetProfileVisibility  (binary VA: 0x14b7f40)
// Original: gaia::Seshat::GetProfileVisibility
// ----------------------------------------------------------------------------
int gaia::Seshat::GetProfileVisibility(gaia::BaseServiceManager::Self *a1, char **a2, void **a3, int *a4, gaia::GaiaRequest::Self *a5)
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
  *((uint32_t *)v5 + 8) = 1017;
  g4_std_compat::string_assign((int)(uintptr_t)(v5) + 40, "https://", 8u);
  *(uint32_t *)&v8[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std::string::append((int)(uintptr_t)(&v8[1]), "/profiles/me/myprofile/visibility", 0x21u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), (char *)&unk_1B15112, (int)(uintptr_t)(v8));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v10), "access_token=", (int)(uintptr_t)(v8) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v9), v10, a2);
  g4_std::string::Destroy(v10);
  g4_std::string::assign_str((char *)v5 + 44, &v8[1]);
  g4_std::string::assign_str((char *)v5 + 48, &v9);
  v6 = gaia::BaseServiceManager::SendCompleteRequest(a1, v5, a3, a4);
  g4_std::string::Destroy(&v9);
  g4_std::string::Destroy(&v8[1]);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gaia::Seshat::GetProfile  (binary VA: 0x14b8090)
// Original: gaia::Seshat::GetProfile
// ----------------------------------------------------------------------------
int gaia::Seshat::GetProfile(gaia::BaseServiceManager::Self *a1, char **a2, char **a3, void **a4, int *a5, char **a6, char **a7, gaia::GaiaRequest::Self *a8)
{
  gaia::ServiceRequest::Self *v8;
  int v9;
  typedef int _g4_t_v11;
  typedef int64_t _g4_t_v12 __attribute__((aligned(1)));
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (3u + sizeof(_g4_t_v11)) > _g4_s0 ? (3u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v12)) > _g4_s1 ? (4u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v13)) > _g4_s2 ? (12u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v14)) > _g4_s3 ? (16u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v15)) > _g4_s4 ? (20u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v16)) > _g4_s5 ? (24u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v17)) > _g4_s6 ? (28u + sizeof(_g4_t_v17)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 3u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);

  v8 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v8, a8);
  *((uint32_t *)v8 + 8) = 1008;
  g4_std_compat::string_assign((int)(uintptr_t)(v8) + 40, "https://", 8u);
  HIDWORD(v12) = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "/profiles/", (int)(uintptr_t)(&v11));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v12) + 4, &v13, a3);
  g4_std::string::Destroy(&v13);
  g4_std::string::append((int)(uintptr_t)(&v12) + 4, "/myprofile", 0xAu);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "/", (int)(uintptr_t)(&v12));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v12) + 4, &v14, a6);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), (char *)&unk_1B15112, (int)(uintptr_t)(&v12) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "access_token=", (int)(uintptr_t)(&v12) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v15), &v16, a2);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v17), "&include_fields=", (int)(uintptr_t)(&v12) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v15), v17, a7);
  g4_std::string::Destroy(v17);
  g4_std::string::assign_str((char *)v8 + 44, (char *)&v12 + 4);
  g4_std::string::assign_str((char *)v8 + 48, &v15);
  v9 = gaia::BaseServiceManager::SendCompleteRequest(a1, v8, a4, a5);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy((char *)&v12 + 4);
  return v9;
}

// ----------------------------------------------------------------------------
// Function: gaia::Seshat::GetData  (binary VA: 0x14b82b0)
// Original: gaia::Seshat::GetData
// ----------------------------------------------------------------------------
int gaia::Seshat::GetData(gaia::BaseServiceManager::Self *a1, char **a2, char **a3, void **a4, int *a5, char **a6, gaia::GaiaRequest::Self *a7)
{
  gaia::ServiceRequest::Self *v7;
  int v8;
  typedef int _g4_t_v10;
  typedef uint32_t *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v12)) > _g4_s2 ? (16u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v13)) > _g4_s3 ? (20u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v14)) > _g4_s4 ? (24u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v15)) > _g4_s5 ? (28u + sizeof(_g4_t_v15)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 24u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 28u);

  v7 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v7, a7);
  *((uint32_t *)v7 + 8) = 1002;
  g4_std_compat::string_assign((int)(uintptr_t)(v7) + 40, "https://", 8u);
  v11 = &dword_213B814;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "/data/", (int)(uintptr_t)(&v10));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v11), &v12, a6);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "/", (int)(uintptr_t)(&v10) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v11), &v13, a3);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), (char *)&unk_1B15112, (int)(uintptr_t)(&v10) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v15), "access_token=", (int)(uintptr_t)(&v10) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v14), v15, a2);
  g4_std::string::Destroy(v15);
  g4_std::string::assign_str((char *)v7 + 44, &v11);
  g4_std::string::assign_str((char *)v7 + 48, &v14);
  v8 = gaia::BaseServiceManager::SendCompleteRequest(a1, v7, a4, a5);
  g4_std::string::Destroy(&v14);
  g4_std::string::Destroy(&v11);
  return v8;
}

// ----------------------------------------------------------------------------
// Function: gaia::Seshat::GetMatches  (binary VA: 0x14bb260)
// Original: gaia::Seshat::GetMatches
// ----------------------------------------------------------------------------
int gaia::Seshat::GetMatches(gaia::BaseServiceManager::Self *a1, char **a2, char **a3, void **a4, int *a5, int a6, char **a7, int a8, gaia::GaiaRequest::Self *a9)
{
  int v9;
  int v10;
  typedef int _g4_t_i;
  typedef gaia::ServiceRequest::Self *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int64_t _g4_t_v15 __attribute__((aligned(1)));
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint32_t _g4_t_v22[8];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_i)) > _g4_s0 ? (12u + sizeof(_g4_t_i)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v13)) > _g4_s1 ? (28u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (41u + sizeof(_g4_t_v14)) > _g4_s2 ? (41u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v15)) > _g4_s3 ? (44u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v16)) > _g4_s4 ? (52u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v17)) > _g4_s5 ? (56u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v18)) > _g4_s6 ? (60u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v19)) > _g4_s7 ? (64u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v20)) > _g4_s8 ? (68u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v21)) > _g4_s9 ? (72u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v22)) > _g4_s10 ? (76u + sizeof(_g4_t_v22)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 41u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 52u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 56u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 60u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 64u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 68u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 72u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 76u);

  v9 = a8;
  v13 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v13, a9);
  *((uint32_t *)v13 + 8) = 1012;
  g4_std_compat::string_assign((int)(uintptr_t)(v13) + 40, "https://", 8u);
  HIDWORD(v15) = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "/profiles/matchers/", (int)(uintptr_t)(&v14));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v15) + 4, &v16, a3);
  g4_std::string::Destroy(&v16);
  g4_std::string::append((int)(uintptr_t)(&v15) + 4, "/matches", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), (char *)&unk_1B15112, (int)(uintptr_t)(&v14) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "access_token=", (int)(uintptr_t)(&v14) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v17), &v18, a2);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "&limit=", (int)(uintptr_t)(&v15));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v17), &v19, &a6, 0);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "&include_fields=", (int)(uintptr_t)(&v15) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v17), &v20, a7);
  g4_std::string::Destroy(&v20);
  if ( v9 != 0 )
  {
    for ( i = *(uint32_t *)(v9 + 12); v9 + 4 != i; i = sub_1904890(i) )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "&", (int)(uintptr_t)(&v15) + 2);
      gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v17), &v21, (char **)(i + 16));
      g4_std::string::Destroy(&v21);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v22), "=", (int)(uintptr_t)(&v15) + 3);
      gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v17), v22, (char **)(i + 20));
      g4_std::string::Destroy(v22);
    }
  }
  g4_std::string::assign_str((char *)v13 + 44, (char *)&v15 + 4);
  g4_std::string::assign_str((char *)v13 + 48, &v17);
  v10 = gaia::BaseServiceManager::SendCompleteRequest(a1, v13, a4, a5);
  g4_std::string::Destroy(&v17);
  g4_std::string::Destroy((char *)&v15 + 4);
  return v10;
}

// ----------------------------------------------------------------------------
// Function: gaia::Seshat::Construct  (binary VA: 0x14c07d0)
// Original: gaia::Seshat::Seshat
// ----------------------------------------------------------------------------
int gaia::Seshat::Construct(gaia::BaseServiceManager::Self *a1, int a2, int a3)
{
  int MaxParalelRequests;
  int v5[4];

  MaxParalelRequests = gaia::utils::GetMaxParalelRequests(1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v5) + 1, "seshat", (int)(uintptr_t)(v5));
  gaia::BaseServiceManager::Construct(a1, (int)(uintptr_t)(v5) + 1, a3, MaxParalelRequests);
  g4_std::string::Destroy((char *)v5 + 1);
  *((uint32_t *)a1 + 40) = 0;
  *((uint32_t *)a1 + 41) = 0;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2095DA8);
  *((uint32_t *)a1 + 44) = 0;
  *((uint32_t *)a1 + 42) = (uint32_t)(uintptr_t)((char *)a1 + 160);
  *((uint32_t *)a1 + 43) = (uint32_t)(uintptr_t)((char *)a1 + 160);
  return (int)(uintptr_t)(g4_std::string::assign_str((char *)a1 + 52, a2));
}

// ----------------------------------------------------------------------------
// Function: gaia::Seshat::GetEtagForKey  (binary VA: 0x14c3d50)
// Original: gaia::Seshat::GetEtagForKey
// ----------------------------------------------------------------------------
int gaia::Seshat::GetEtagForKey(int a1, void **a2, int a3)
{
  int v3;
  size_t v4;
  size_t v5;
  size_t n;
  int v7;
  int v8;
  size_t v9;
  size_t v10;
  int v11;
  int v12;
  size_t v13;
  size_t v14;
  size_t v15;
  int v16;
  int v17;
  size_t v18;
  int v19;
  size_t v20;
  size_t v21;
  int v22;
  int v23;
  typedef void *_g4_t_s2;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef uint32_t *_g4_t_v31;
  typedef const void *_g4_t_v32;
  typedef uint8_t _g4_t_v33[32];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_s2)) > _g4_s0 ? (12u + sizeof(_g4_t_s2)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v26)) > _g4_s1 ? (16u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v27)) > _g4_s2 ? (16u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v28)) > _g4_s3 ? (20u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v29)) > _g4_s4 ? (24u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v30)) > _g4_s5 ? (28u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v31)) > _g4_s6 ? (36u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v32)) > _g4_s7 ? (40u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v33)) > _g4_s8 ? (44u + sizeof(_g4_t_v33)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 36u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 40u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 44u);

  v29 = *(uint32_t *)(a1 + 164);
  if ( v29 == 0 )
    goto LABEL_32;
  v3 = *(uint32_t *)(a1 + 164);
  v28 = a1 + 160;
  s2 = *a2;
  v4 = *((uint32_t *)*a2 - 3);
  v26 = a1 + 160;
  do
  {
    while ( 1 )
    {
      v5 = *(uint32_t *)(*(uint32_t *)(v3 + 16) - 12);
      n = v5;
      if ( v4 <= v5 )
        n = v4;
      v7 = v5 - v4;
      v8 = memcmp(*(const void **)(v3 + 16), s2, n);
      if ( v8 != 0 )
        v7 = v8;
      if ( v7 < 0 )
        break;
      v26 = v3;
      v3 = *(uint32_t *)(v3 + 8);
      if ( v3 == 0 )
        goto LABEL_10;
    }
    v3 = *(uint32_t *)(v3 + 12);
  }
  while ( v3 != 0 );
LABEL_10:
  if ( v28 == v26 )
    goto LABEL_32;
  v9 = *(uint32_t *)(*(uint32_t *)(v26 + 16) - 12);
  v10 = v9;
  if ( v4 <= v9 )
    v10 = v4;
  v11 = memcmp(s2, *(const void **)(v26 + 16), v10);
  if ( v11 == 0 )
    v11 = v4 - v9;
  if ( v11 < 0 )
  {
LABEL_32:
    g4_std_compat::string_assign(a3, &unk_1B15112, 0);
    return 413;
  }
  else
  {
    v12 = v29;
    v27 = a1 + 160;
    v13 = v4;
    do
    {
      while ( 1 )
      {
        v14 = *(uint32_t *)(*(uint32_t *)(v12 + 16) - 12);
        v15 = v14;
        if ( v13 <= v14 )
          v15 = v13;
        v16 = v14 - v13;
        v17 = memcmp(*(const void **)(v12 + 16), s2, v15);
        if ( v17 != 0 )
          v16 = v17;
        if ( v16 < 0 )
          break;
        v27 = v12;
        v12 = *(uint32_t *)(v12 + 8);
        if ( v12 == 0 )
          goto LABEL_24;
      }
      v12 = *(uint32_t *)(v12 + 12);
    }
    while ( v12 != 0 );
LABEL_24:
    v18 = v13;
    v19 = v27;
    if ( v28 == v27 )
      goto LABEL_30;
    v20 = *(uint32_t *)(*(uint32_t *)(v27 + 16) - 12);
    v21 = v20;
    if ( v18 <= v20 )
      v21 = v18;
    v22 = v18 - v20;
    v23 = memcmp(s2, *(const void **)(v27 + 16), v21);
    if ( v23 == 0 )
      v23 = v22;
    if ( v23 < 0 )
    {
LABEL_30:
      v31 = &dword_213B814;
      g4_std::string::construct_copy(&v32, a2);
      g4_std::string::construct_copy(v33, &v31);
      g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_insert_unique(
        &v30,
        (uint32_t *)(a1 + 156),
        v27,
        &v32);
      v19 = v30;
      g4_std::string::Destroy(v33);
      g4_std::string::Destroy(&v32);
      g4_std::string::Destroy(&v31);
    }
    g4_std::string::assign_str(a3, v19 + 20);
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: gaia::Seshat::PutDataCheckEtag  (binary VA: 0x14c4720)
// Original: gaia::Seshat::PutDataCheckEtag
// ----------------------------------------------------------------------------
int gaia::Seshat::PutDataCheckEtag(uint32_t *a1, char **a2, char **a3, uint32_t *a4, char **a5, char **a6, int a7, gaia::GaiaRequest::Self *a8)
{
  gaia::ServiceRequest::Self *v8;
  char **v9;
  int v10;
  size_t v11;
  size_t v12;
  size_t n;
  int v14;
  int v15;
  size_t v16;
  size_t v17;
  int v18;
  int v19;
  int i;
  int v21;
  int v23;
  size_t v24;
  size_t v25;
  size_t v26;
  int v27;
  int v28;
  size_t v29;
  size_t v30;
  int v31;
  int v32;
  int v33;
  size_t v34;
  size_t v35;
  size_t v36;
  int v37;
  int v38;
  size_t v39;
  size_t v40;
  int v41;
  int v42;
  int v43;
  size_t v44;
  size_t v45;
  size_t v46;
  int v47;
  int v48;
  size_t v49;
  size_t v50;
  int v51;
  int v52;
  typedef void *_g4_t_v53;
  typedef void *_g4_t_s1;
  typedef char *_g4_t_v55;
  typedef char *_g4_t_v56;
  typedef glwebtools::Mutex::Self *_g4_t_s2;
  typedef glwebtools::Mutex::Self *_g4_t_v58;
  typedef glwebtools::Mutex::Self *_g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef uint32_t *_g4_t_v67;
  typedef char *_g4_t_v68;
  typedef int _g4_t_v69[3];
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int64_t _g4_t_v72;
  typedef uint32_t *_g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef uint32_t *_g4_t_v83;
  typedef uint32_t *_g4_t_v84;
  typedef uint32_t *_g4_t_v85;
  typedef uint32_t *_g4_t_v86;
  typedef const void *_g4_t_v87;
  typedef char _g4_t_v88[4];
  typedef const void *_g4_t_v89;
  typedef char _g4_t_v90[4];
  typedef const void *_g4_t_v91;
  typedef char _g4_t_v92[4];
  typedef const void *_g4_t_v93;
  typedef uint8_t _g4_t_v94[32];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (4u + sizeof(_g4_t_v53)) > _g4_s0 ? (4u + sizeof(_g4_t_v53)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_s1)) > _g4_s1 ? (4u + sizeof(_g4_t_s1)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v55)) > _g4_s2 ? (4u + sizeof(_g4_t_v55)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v56)) > _g4_s3 ? (4u + sizeof(_g4_t_v56)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_s2)) > _g4_s4 ? (8u + sizeof(_g4_t_s2)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v58)) > _g4_s5 ? (8u + sizeof(_g4_t_v58)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v59)) > _g4_s6 ? (8u + sizeof(_g4_t_v59)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v60)) > _g4_s7 ? (12u + sizeof(_g4_t_v60)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v61)) > _g4_s8 ? (12u + sizeof(_g4_t_v61)) : _g4_s8,
    _g4_s10 = (12u + sizeof(_g4_t_v62)) > _g4_s9 ? (12u + sizeof(_g4_t_v62)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v63)) > _g4_s10 ? (16u + sizeof(_g4_t_v63)) : _g4_s10,
    _g4_s12 = (16u + sizeof(_g4_t_v64)) > _g4_s11 ? (16u + sizeof(_g4_t_v64)) : _g4_s11,
    _g4_s13 = (16u + sizeof(_g4_t_v65)) > _g4_s12 ? (16u + sizeof(_g4_t_v65)) : _g4_s12,
    _g4_s14 = (16u + sizeof(_g4_t_v66)) > _g4_s13 ? (16u + sizeof(_g4_t_v66)) : _g4_s13,
    _g4_s15 = (20u + sizeof(_g4_t_v67)) > _g4_s14 ? (20u + sizeof(_g4_t_v67)) : _g4_s14,
    _g4_s16 = (24u + sizeof(_g4_t_v68)) > _g4_s15 ? (24u + sizeof(_g4_t_v68)) : _g4_s15,
    _g4_s17 = (28u + sizeof(_g4_t_v69)) > _g4_s16 ? (28u + sizeof(_g4_t_v69)) : _g4_s16,
    _g4_s18 = (43u + sizeof(_g4_t_v70)) > _g4_s17 ? (43u + sizeof(_g4_t_v70)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v71)) > _g4_s18 ? (44u + sizeof(_g4_t_v71)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_v72)) > _g4_s19 ? (48u + sizeof(_g4_t_v72)) : _g4_s19,
    _g4_s21 = (56u + sizeof(_g4_t_v73)) > _g4_s20 ? (56u + sizeof(_g4_t_v73)) : _g4_s20,
    _g4_s22 = (60u + sizeof(_g4_t_v74)) > _g4_s21 ? (60u + sizeof(_g4_t_v74)) : _g4_s21,
    _g4_s23 = (64u + sizeof(_g4_t_v75)) > _g4_s22 ? (64u + sizeof(_g4_t_v75)) : _g4_s22,
    _g4_s24 = (68u + sizeof(_g4_t_v76)) > _g4_s23 ? (68u + sizeof(_g4_t_v76)) : _g4_s23,
    _g4_s25 = (72u + sizeof(_g4_t_v77)) > _g4_s24 ? (72u + sizeof(_g4_t_v77)) : _g4_s24,
    _g4_s26 = (76u + sizeof(_g4_t_v78)) > _g4_s25 ? (76u + sizeof(_g4_t_v78)) : _g4_s25,
    _g4_s27 = (80u + sizeof(_g4_t_v79)) > _g4_s26 ? (80u + sizeof(_g4_t_v79)) : _g4_s26,
    _g4_s28 = (84u + sizeof(_g4_t_v80)) > _g4_s27 ? (84u + sizeof(_g4_t_v80)) : _g4_s27,
    _g4_s29 = (88u + sizeof(_g4_t_v81)) > _g4_s28 ? (88u + sizeof(_g4_t_v81)) : _g4_s28,
    _g4_s30 = (92u + sizeof(_g4_t_v82)) > _g4_s29 ? (92u + sizeof(_g4_t_v82)) : _g4_s29,
    _g4_s31 = (96u + sizeof(_g4_t_v83)) > _g4_s30 ? (96u + sizeof(_g4_t_v83)) : _g4_s30,
    _g4_s32 = (100u + sizeof(_g4_t_v84)) > _g4_s31 ? (100u + sizeof(_g4_t_v84)) : _g4_s31,
    _g4_s33 = (104u + sizeof(_g4_t_v85)) > _g4_s32 ? (104u + sizeof(_g4_t_v85)) : _g4_s32,
    _g4_s34 = (108u + sizeof(_g4_t_v86)) > _g4_s33 ? (108u + sizeof(_g4_t_v86)) : _g4_s33,
    _g4_s35 = (112u + sizeof(_g4_t_v87)) > _g4_s34 ? (112u + sizeof(_g4_t_v87)) : _g4_s34,
    _g4_s36 = (116u + sizeof(_g4_t_v88)) > _g4_s35 ? (116u + sizeof(_g4_t_v88)) : _g4_s35,
    _g4_s37 = (120u + sizeof(_g4_t_v89)) > _g4_s36 ? (120u + sizeof(_g4_t_v89)) : _g4_s36,
    _g4_s38 = (124u + sizeof(_g4_t_v90)) > _g4_s37 ? (124u + sizeof(_g4_t_v90)) : _g4_s37,
    _g4_s39 = (128u + sizeof(_g4_t_v91)) > _g4_s38 ? (128u + sizeof(_g4_t_v91)) : _g4_s38,
    _g4_s40 = (132u + sizeof(_g4_t_v92)) > _g4_s39 ? (132u + sizeof(_g4_t_v92)) : _g4_s39,
    _g4_s41 = (136u + sizeof(_g4_t_v93)) > _g4_s40 ? (136u + sizeof(_g4_t_v93)) : _g4_s40,
    _g4_s42 = (140u + sizeof(_g4_t_v94)) > _g4_s41 ? (140u + sizeof(_g4_t_v94)) : _g4_s41
  };
  alignas(16) uint8_t _g4_sf[_g4_s42];
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 4u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 4u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 4u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 4u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 8u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 8u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 8u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 12u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 12u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 12u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 16u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 16u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 16u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 16u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 20u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 24u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 28u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 43u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 44u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 48u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 56u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 60u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 64u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 68u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 72u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 76u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 80u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 84u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 88u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 92u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 96u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 100u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 104u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 108u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 112u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 116u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 120u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 124u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 128u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 132u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 136u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 140u);

  v8 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v8, a8);
  HIDWORD(v72) = (uint32_t)(uintptr_t)(v8);
  *((uint32_t *)v8 + 8) = 1001;
  *((uint32_t *)v8 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v8) + 40, "https://", 8u);
  v73 = &dword_213B814;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v74), "/data/", (int)(uintptr_t)(&v70));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v73), &v74, a6);
  g4_std::string::Destroy(&v74);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v75), "/", (int)(uintptr_t)(&v71));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v73), &v75, a3);
  g4_std::string::Destroy(&v75);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v76), (char *)&unk_1B15112, (int)(uintptr_t)(&v71) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v77), "access_token=", (int)(uintptr_t)(&v71) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v76), &v77, a2);
  g4_std::string::Destroy(&v77);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v78), "&data=", (int)(uintptr_t)(&v71) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v76), &v78, a5);
  g4_std::string::Destroy(&v78);
  v9 = (char **)(gaia::Seshat::s_visibilityVector[0] + 4 * a7);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v79), "&visibility=", (int)(uintptr_t)(&v72));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v76), &v79, v9);
  g4_std::string::Destroy(&v79);
  if ( *(uint32_t *)(*a4 - 12) != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v80), "If-Match", (int)(uintptr_t)(&v72) + 1);
    v66 = HIDWORD(v72);
    v68 = (char *)(HIDWORD(v72) + 64);
    v43 = *(uint32_t *)(HIDWORD(v72) + 68);
    if ( v43 != 0 )
    {
      v59 = (glwebtools::Mutex::Self *)v80;
      v44 = *(uint32_t *)(v80 - 12);
      v56 = (char *)(HIDWORD(v72) + 64);
      do
      {
        while ( 1 )
        {
          v45 = *(uint32_t *)(*(uint32_t *)(v43 + 16) - 12);
          v46 = v45;
          if ( v44 <= v45 )
            v46 = v44;
          v47 = v45 - v44;
          v48 = memcmp(*(const void **)(v43 + 16), v59, v46);
          if ( v48 == 0 )
            v48 = v47;
          if ( v48 < 0 )
            break;
          v56 = (char *)v43;
          v43 = *(uint32_t *)(v43 + 8);
          if ( v43 == 0 )
            goto LABEL_62;
        }
        v43 = *(uint32_t *)(v43 + 12);
      }
      while ( v43 != 0 );
LABEL_62:
      if ( v68 != v56 )
      {
        v49 = *(uint32_t *)(*((uint32_t *)v56 + 4) - 12);
        v50 = v49;
        if ( v44 <= v49 )
          v50 = v44;
        v51 = v44 - v49;
        v52 = memcmp(v59, *((const void **)v56 + 4), v50);
        if ( v52 == 0 )
          v52 = v51;
        if ( v52 >= 0 )
          goto LABEL_69;
      }
    }
    else
    {
      v56 = (char *)(HIDWORD(v72) + 64);
    }
    v83 = &dword_213B814;
    g4_std::string::construct_copy(&v87, &v80);
    g4_std::string::construct_copy(v88, &v83);
    g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_insert_unique(
      v69,
      (uint32_t *)(v66 + 60),
      (int)(uintptr_t)(v56),
      &v87);
    v56 = (char *)v69[0];
    g4_std::string::Destroy(v88);
    g4_std::string::Destroy(&v87);
    g4_std::string::Destroy(&v83);
LABEL_69:
    g4_std::string::assign_str(v56 + 20, a4);
    g4_std::string::Destroy(&v80);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v81), "Etag", (int)(uintptr_t)(&v72) + 2);
  v60 = HIDWORD(v72);
  v63 = HIDWORD(v72) + 88;
  v10 = *(uint32_t *)(HIDWORD(v72) + 92);
  if ( v10 == 0 )
  {
    v53 = (void *)(HIDWORD(v72) + 88);
LABEL_71:
    v84 = &dword_213B814;
    g4_std::string::construct_copy(&v89, &v81);
    g4_std::string::construct_copy(v90, &v84);
    g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_insert_unique(
      v69,
      (uint32_t *)(v60 + 84),
      (int)(uintptr_t)(v53),
      &v89);
    v53 = (void *)v69[0];
    g4_std::string::Destroy(v90);
    g4_std::string::Destroy(&v89);
    g4_std::string::Destroy(&v84);
    goto LABEL_17;
  }
  s2 = (glwebtools::Mutex::Self *)v81;
  v11 = *(uint32_t *)(v81 - 12);
  v53 = (void *)(HIDWORD(v72) + 88);
  do
  {
    while ( 1 )
    {
      v12 = *(uint32_t *)(*(uint32_t *)(v10 + 16) - 12);
      n = v12;
      if ( v11 <= v12 )
        n = v11;
      v14 = v12 - v11;
      v15 = memcmp(*(const void **)(v10 + 16), s2, n);
      if ( v15 == 0 )
        v15 = v14;
      if ( v15 < 0 )
        break;
      v53 = (void *)v10;
      v10 = *(uint32_t *)(v10 + 8);
      if ( v10 == 0 )
        goto LABEL_11;
    }
    v10 = *(uint32_t *)(v10 + 12);
  }
  while ( v10 != 0 );
LABEL_11:
  if ( (void *)v63 == v53 )
    goto LABEL_71;
  v16 = *(uint32_t *)(*((uint32_t *)v53 + 4) - 12);
  v17 = v16;
  if ( v11 <= v16 )
    v17 = v11;
  v18 = v11 - v16;
  v19 = memcmp(s2, *((const void **)v53 + 4), v17);
  if ( v19 == 0 )
    v19 = v18;
  if ( v19 < 0 )
    goto LABEL_71;
LABEL_17:
  g4_std_compat::string_assign((int)(uintptr_t)(v53) + 20, &unk_1B15112, 0);
  g4_std::string::Destroy(&v81);
  g4_std::string::assign_str(HIDWORD(v72) + 44, &v73);
  g4_std::string::assign_str(HIDWORD(v72) + 48, &v76);
  v58 = (glwebtools::Mutex::Self *)(a1 + 31);
  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(a1 + 31));
  gaia::ServiceRequest::Grab((gaia::ServiceRequest::Self *)HIDWORD(v72));
  g4_std::deque_gaia_ServiceRequest_b3f9d1::push_back(
    (std::deque<gaia::ServiceRequest::Self *> *)(a1 + 3),
    (gaia::ServiceRequest::Self *const *)&v72 + 1);
  glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)(a1 + 31));
  gaia::Condition::Acquire((pthread_mutex_t *)(HIDWORD(v72) + 4));
  for ( i = HIDWORD(v72); *(uint32_t *)HIDWORD(v72) != 2; i = HIDWORD(v72) )
    gaia::Condition::Wait((pthread_mutex_t *)(i + 4));
  gaia::Condition::Release((pthread_mutex_t *)(i + 4));
  if ( *(uint32_t *)(HIDWORD(v72) + 28) == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v82), "Etag", (int)(uintptr_t)(&v72) + 3);
    v67 = (uint32_t *)HIDWORD(v72);
    v64 = HIDWORD(v72) + 88;
    v23 = *(uint32_t *)(HIDWORD(v72) + 92);
    if ( v23 != 0 )
    {
      s1 = (void *)v82;
      v24 = *(uint32_t *)(v82 - 12);
      v61 = HIDWORD(v72) + 88;
      do
      {
        while ( 1 )
        {
          v25 = v24;
          v26 = *(uint32_t *)(*(uint32_t *)(v23 + 16) - 12);
          if ( v26 <= v24 )
            v25 = *(uint32_t *)(*(uint32_t *)(v23 + 16) - 12);
          v27 = v26 - v24;
          v28 = memcmp(*(const void **)(v23 + 16), s1, v25);
          if ( v28 == 0 )
            v28 = v27;
          if ( v28 < 0 )
            break;
          v61 = v23;
          v23 = *(uint32_t *)(v23 + 8);
          if ( v23 == 0 )
            goto LABEL_30;
        }
        v23 = *(uint32_t *)(v23 + 12);
      }
      while ( v23 != 0 );
LABEL_30:
      if ( v64 != v61 )
      {
        v29 = v24;
        v30 = *(uint32_t *)(*(uint32_t *)(v61 + 16) - 12);
        if ( v30 <= v24 )
          v29 = *(uint32_t *)(*(uint32_t *)(v61 + 16) - 12);
        v31 = v24 - v30;
        v32 = memcmp(s1, *(const void **)(v61 + 16), v29);
        if ( v32 == 0 )
          v32 = v31;
        if ( v32 >= 0 )
        {
LABEL_36:
          v65 = v61 + 20;
          v33 = a1[41];
          if ( v33 != 0 )
          {
            v55 = *a3;
            v34 = *((uint32_t *)*a3 - 3);
            v62 = (int)(uintptr_t)(a1 + 40);
            do
            {
              while ( 1 )
              {
                v35 = *(uint32_t *)(*(uint32_t *)(v33 + 16) - 12);
                v36 = v35;
                if ( v34 <= v35 )
                  v36 = v34;
                v37 = v35 - v34;
                v38 = memcmp(*(const void **)(v33 + 16), v55, v36);
                if ( v38 == 0 )
                  v38 = v37;
                if ( v38 < 0 )
                  break;
                v62 = v33;
                v33 = *(uint32_t *)(v33 + 8);
                if ( v33 == 0 )
                  goto LABEL_45;
              }
              v33 = *(uint32_t *)(v33 + 12);
            }
            while ( v33 != 0 );
LABEL_45:
            if ( a1 + 40 != (uint32_t *)v62 )
            {
              v39 = *(uint32_t *)(*(uint32_t *)(v62 + 16) - 12);
              v40 = v39;
              if ( v34 <= v39 )
                v40 = v34;
              v41 = v34 - v39;
              v42 = memcmp(v55, *(const void **)(v62 + 16), v40);
              if ( v42 == 0 )
                v42 = v41;
              if ( v42 >= 0 )
                goto LABEL_52;
            }
          }
          else
          {
            v62 = (int)(uintptr_t)(a1 + 40);
          }
          v86 = &dword_213B814;
          g4_std::string::construct_copy(&v93, a3);
          g4_std::string::construct_copy(v94, &v86);
          g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_insert_unique(
            v69,
            a1 + 39,
            v62,
            &v93);
          v62 = v69[0];
          g4_std::string::Destroy(v94);
          g4_std::string::Destroy(&v93);
          g4_std::string::Destroy(&v86);
LABEL_52:
          g4_std::string::assign_str(v62 + 20, v65);
          g4_std::string::Destroy(&v82);
          goto LABEL_20;
        }
      }
    }
    else
    {
      v61 = HIDWORD(v72) + 88;
    }
    v85 = &dword_213B814;
    g4_std::string::construct_copy(&v91, &v82);
    g4_std::string::construct_copy(v92, &v85);
    g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_insert_unique(
      v69,
      v67 + 21,
      v61,
      &v91);
    v61 = v69[0];
    g4_std::string::Destroy(v92);
    g4_std::string::Destroy(&v91);
    g4_std::string::Destroy(&v85);
    goto LABEL_36;
  }
LABEL_20:
  glwebtools::Mutex::Lock(v58);
  *(uint32_t *)HIDWORD(v72) = 4;
  v21 = *(uint32_t *)(HIDWORD(v72) + 28);
  gaia::ServiceRequest::Drop((gaia::ServiceRequest::Self *)HIDWORD(v72));
  glwebtools::Mutex::Unlock(v58);
  g4_std::string::Destroy(&v76);
  g4_std::string::Destroy(&v73);
  return v21;
}

// ----------------------------------------------------------------------------
// Function: gaia::Seshat::GetDataCheckEtag  (binary VA: 0x14c5070)
// Original: gaia::Seshat::GetDataCheckEtag
// ----------------------------------------------------------------------------
int gaia::Seshat::GetDataCheckEtag(uint32_t *a1, char **a2, char **a3, uint32_t *a4, uint32_t *a5, size_t *a6, char **a7, gaia::GaiaRequest::Self *a8)
{
  gaia::ServiceRequest::Self *v8;
  int v9;
  size_t v10;
  size_t v11;
  size_t n;
  int v13;
  int v14;
  size_t v15;
  size_t v16;
  int v17;
  int v18;
  int i;
  int v20;
  signed int v21;
  void *v22;
  int v23;
  int v24;
  int v26;
  size_t v27;
  size_t v28;
  size_t v29;
  int v30;
  int v31;
  size_t v32;
  size_t v33;
  int v34;
  int v35;
  int v36;
  size_t v37;
  size_t v38;
  size_t v39;
  int v40;
  int v41;
  size_t v42;
  size_t v43;
  int v44;
  int v45;
  char *v46;
  size_t v47;
  size_t v48;
  size_t v49;
  int v50;
  int v51;
  size_t v52;
  size_t v53;
  int v54;
  int v55;
  typedef void *_g4_t_v56;
  typedef void *_g4_t_s1;
  typedef char *_g4_t_v58;
  typedef char *_g4_t_v59;
  typedef glwebtools::Mutex::Self *_g4_t_s2;
  typedef glwebtools::Mutex::Self *_g4_t_v61;
  typedef glwebtools::Mutex::Self *_g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef uint32_t *_g4_t_v67;
  typedef char *_g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72[2];
  typedef int _g4_t_v73;
  typedef int64_t _g4_t_v74;
  typedef uint32_t *_g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef uint32_t *_g4_t_v83;
  typedef uint32_t *_g4_t_v84;
  typedef uint32_t *_g4_t_v85;
  typedef uint32_t *_g4_t_v86;
  typedef const void *_g4_t_v87;
  typedef char _g4_t_v88[4];
  typedef const void *_g4_t_v89;
  typedef char _g4_t_v90[4];
  typedef const void *_g4_t_v91;
  typedef char _g4_t_v92[4];
  typedef const void *_g4_t_v93;
  typedef uint8_t _g4_t_v94[32];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_v56)) > _g4_s0 ? (4u + sizeof(_g4_t_v56)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_s1)) > _g4_s1 ? (4u + sizeof(_g4_t_s1)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v58)) > _g4_s2 ? (4u + sizeof(_g4_t_v58)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v59)) > _g4_s3 ? (4u + sizeof(_g4_t_v59)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_s2)) > _g4_s4 ? (8u + sizeof(_g4_t_s2)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v61)) > _g4_s5 ? (8u + sizeof(_g4_t_v61)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v62)) > _g4_s6 ? (8u + sizeof(_g4_t_v62)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v63)) > _g4_s7 ? (12u + sizeof(_g4_t_v63)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v64)) > _g4_s8 ? (12u + sizeof(_g4_t_v64)) : _g4_s8,
    _g4_s10 = (12u + sizeof(_g4_t_v65)) > _g4_s9 ? (12u + sizeof(_g4_t_v65)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v66)) > _g4_s10 ? (12u + sizeof(_g4_t_v66)) : _g4_s10,
    _g4_s12 = (16u + sizeof(_g4_t_v67)) > _g4_s11 ? (16u + sizeof(_g4_t_v67)) : _g4_s11,
    _g4_s13 = (16u + sizeof(_g4_t_v68)) > _g4_s12 ? (16u + sizeof(_g4_t_v68)) : _g4_s12,
    _g4_s14 = (20u + sizeof(_g4_t_v69)) > _g4_s13 ? (20u + sizeof(_g4_t_v69)) : _g4_s13,
    _g4_s15 = (20u + sizeof(_g4_t_v70)) > _g4_s14 ? (20u + sizeof(_g4_t_v70)) : _g4_s14,
    _g4_s16 = (20u + sizeof(_g4_t_v71)) > _g4_s15 ? (20u + sizeof(_g4_t_v71)) : _g4_s15,
    _g4_s17 = (28u + sizeof(_g4_t_v72)) > _g4_s16 ? (28u + sizeof(_g4_t_v72)) : _g4_s16,
    _g4_s18 = (37u + sizeof(_g4_t_v73)) > _g4_s17 ? (37u + sizeof(_g4_t_v73)) : _g4_s17,
    _g4_s19 = (40u + sizeof(_g4_t_v74)) > _g4_s18 ? (40u + sizeof(_g4_t_v74)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_v75)) > _g4_s19 ? (48u + sizeof(_g4_t_v75)) : _g4_s19,
    _g4_s21 = (52u + sizeof(_g4_t_v76)) > _g4_s20 ? (52u + sizeof(_g4_t_v76)) : _g4_s20,
    _g4_s22 = (56u + sizeof(_g4_t_v77)) > _g4_s21 ? (56u + sizeof(_g4_t_v77)) : _g4_s21,
    _g4_s23 = (60u + sizeof(_g4_t_v78)) > _g4_s22 ? (60u + sizeof(_g4_t_v78)) : _g4_s22,
    _g4_s24 = (64u + sizeof(_g4_t_v79)) > _g4_s23 ? (64u + sizeof(_g4_t_v79)) : _g4_s23,
    _g4_s25 = (68u + sizeof(_g4_t_v80)) > _g4_s24 ? (68u + sizeof(_g4_t_v80)) : _g4_s24,
    _g4_s26 = (72u + sizeof(_g4_t_v81)) > _g4_s25 ? (72u + sizeof(_g4_t_v81)) : _g4_s25,
    _g4_s27 = (76u + sizeof(_g4_t_v82)) > _g4_s26 ? (76u + sizeof(_g4_t_v82)) : _g4_s26,
    _g4_s28 = (80u + sizeof(_g4_t_v83)) > _g4_s27 ? (80u + sizeof(_g4_t_v83)) : _g4_s27,
    _g4_s29 = (84u + sizeof(_g4_t_v84)) > _g4_s28 ? (84u + sizeof(_g4_t_v84)) : _g4_s28,
    _g4_s30 = (88u + sizeof(_g4_t_v85)) > _g4_s29 ? (88u + sizeof(_g4_t_v85)) : _g4_s29,
    _g4_s31 = (92u + sizeof(_g4_t_v86)) > _g4_s30 ? (92u + sizeof(_g4_t_v86)) : _g4_s30,
    _g4_s32 = (96u + sizeof(_g4_t_v87)) > _g4_s31 ? (96u + sizeof(_g4_t_v87)) : _g4_s31,
    _g4_s33 = (100u + sizeof(_g4_t_v88)) > _g4_s32 ? (100u + sizeof(_g4_t_v88)) : _g4_s32,
    _g4_s34 = (104u + sizeof(_g4_t_v89)) > _g4_s33 ? (104u + sizeof(_g4_t_v89)) : _g4_s33,
    _g4_s35 = (108u + sizeof(_g4_t_v90)) > _g4_s34 ? (108u + sizeof(_g4_t_v90)) : _g4_s34,
    _g4_s36 = (112u + sizeof(_g4_t_v91)) > _g4_s35 ? (112u + sizeof(_g4_t_v91)) : _g4_s35,
    _g4_s37 = (116u + sizeof(_g4_t_v92)) > _g4_s36 ? (116u + sizeof(_g4_t_v92)) : _g4_s36,
    _g4_s38 = (120u + sizeof(_g4_t_v93)) > _g4_s37 ? (120u + sizeof(_g4_t_v93)) : _g4_s37,
    _g4_s39 = (124u + sizeof(_g4_t_v94)) > _g4_s38 ? (124u + sizeof(_g4_t_v94)) : _g4_s38
  };
  alignas(16) uint8_t _g4_sf[_g4_s39];
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 4u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 4u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 4u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 4u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 8u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 8u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 8u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 12u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 12u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 12u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 12u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 16u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 16u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 20u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 20u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 20u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 28u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 37u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 40u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 48u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 52u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 56u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 60u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 64u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 68u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 72u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 76u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 80u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 84u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 88u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 92u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 96u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 100u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 104u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 108u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 112u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 116u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 120u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 124u);

  v8 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v8, a8);
  HIDWORD(v74) = (uint32_t)(uintptr_t)(v8);
  *((uint32_t *)v8 + 8) = 1002;
  g4_std_compat::string_assign((int)(uintptr_t)(v8) + 40, "https://", 8u);
  v75 = &dword_213B814;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v76), "/data/", (int)(uintptr_t)(&v73));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v75), &v76, a7);
  g4_std::string::Destroy(&v76);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v77), "/", (int)(uintptr_t)(&v73) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v75), &v77, a3);
  g4_std::string::Destroy(&v77);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v78), (char *)&unk_1B15112, (int)(uintptr_t)(&v73) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v79), "access_token=", (int)(uintptr_t)(&v74));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v78), &v79, a2);
  g4_std::string::Destroy(&v79);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v80), "Etag", (int)(uintptr_t)(&v74) + 1);
  v63 = HIDWORD(v74);
  v69 = HIDWORD(v74) + 88;
  v9 = *(uint32_t *)(HIDWORD(v74) + 92);
  if ( v9 == 0 )
  {
    v56 = (void *)(HIDWORD(v74) + 88);
LABEL_74:
    v83 = &dword_213B814;
    g4_std::string::construct_copy(&v87, &v80);
    g4_std::string::construct_copy(v88, &v83);
    g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_insert_unique(
      v72,
      (uint32_t *)(v63 + 84),
      (int)(uintptr_t)(v56),
      &v87);
    v56 = (void *)v72[0];
    g4_std::string::Destroy(v88);
    g4_std::string::Destroy(&v87);
    g4_std::string::Destroy(&v83);
    goto LABEL_16;
  }
  s2 = (glwebtools::Mutex::Self *)v80;
  v56 = (void *)(HIDWORD(v74) + 88);
  v10 = *(uint32_t *)(v80 - 12);
  do
  {
    while ( 1 )
    {
      v11 = *(uint32_t *)(*(uint32_t *)(v9 + 16) - 12);
      n = v11;
      if ( v10 <= v11 )
        n = v10;
      v13 = v11 - v10;
      v14 = memcmp(*(const void **)(v9 + 16), s2, n);
      if ( v14 == 0 )
        v14 = v13;
      if ( v14 < 0 )
        break;
      v56 = (void *)v9;
      v9 = *(uint32_t *)(v9 + 8);
      if ( v9 == 0 )
        goto LABEL_10;
    }
    v9 = *(uint32_t *)(v9 + 12);
  }
  while ( v9 != 0 );
LABEL_10:
  if ( (void *)v69 == v56 )
    goto LABEL_74;
  v15 = *(uint32_t *)(*((uint32_t *)v56 + 4) - 12);
  v16 = v15;
  if ( v10 <= v15 )
    v16 = v10;
  v17 = v10 - v15;
  v18 = memcmp(s2, *((const void **)v56 + 4), v16);
  if ( v18 == 0 )
    v18 = v17;
  if ( v18 < 0 )
    goto LABEL_74;
LABEL_16:
  g4_std_compat::string_assign((int)(uintptr_t)(v56) + 20, &unk_1B15112, 0);
  g4_std::string::Destroy(&v80);
  if ( *(uint32_t *)(*a4 - 12) == 0 )
    goto LABEL_17;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v81), "If-None-Match", (int)(uintptr_t)(&v74) + 2);
  v66 = HIDWORD(v74);
  v68 = (char *)(HIDWORD(v74) + 64);
  v46 = *(char **)(HIDWORD(v74) + 68);
  if ( v46 != nullptr )
  {
    v62 = (glwebtools::Mutex::Self *)v81;
    v59 = (char *)(HIDWORD(v74) + 64);
    v47 = *(uint32_t *)(v81 - 12);
    do
    {
      while ( 1 )
      {
        v48 = v47;
        v49 = *(uint32_t *)(*((uint32_t *)v46 + 4) - 12);
        if ( v49 <= v47 )
          v48 = *(uint32_t *)(*((uint32_t *)v46 + 4) - 12);
        v50 = v49 - v47;
        v51 = memcmp(*((const void **)v46 + 4), v62, v48);
        if ( v51 == 0 )
          v51 = v50;
        if ( v51 < 0 )
          break;
        v59 = v46;
        v46 = *((char **)v46 + 2);
        if ( v46 == nullptr )
          goto LABEL_65;
      }
      v46 = *((char **)v46 + 3);
    }
    while ( v46 != nullptr );
LABEL_65:
    if ( v68 != v59 )
    {
      v52 = v47;
      v53 = *(uint32_t *)(*((uint32_t *)v59 + 4) - 12);
      if ( v53 <= v47 )
        v52 = *(uint32_t *)(*((uint32_t *)v59 + 4) - 12);
      v54 = v47 - v53;
      v55 = memcmp(v62, *((const void **)v59 + 4), v52);
      if ( v55 == 0 )
        v55 = v54;
      if ( v55 >= 0 )
        goto LABEL_72;
    }
  }
  else
  {
    v59 = (char *)(HIDWORD(v74) + 64);
  }
  v84 = &dword_213B814;
  g4_std::string::construct_copy(&v89, &v81);
  g4_std::string::construct_copy(v90, &v84);
  g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_insert_unique(
    v72,
    (uint32_t *)(v66 + 60),
    (int)(uintptr_t)(v59),
    &v89);
  v59 = (char *)v72[0];
  g4_std::string::Destroy(v90);
  g4_std::string::Destroy(&v89);
  g4_std::string::Destroy(&v84);
LABEL_72:
  g4_std::string::assign_str(v59 + 20, a4);
  g4_std::string::Destroy(&v81);
LABEL_17:
  g4_std::string::assign_str(HIDWORD(v74) + 44, &v75);
  g4_std::string::assign_str(HIDWORD(v74) + 48, &v78);
  v61 = (glwebtools::Mutex::Self *)(a1 + 31);
  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(a1 + 31));
  gaia::ServiceRequest::Grab((gaia::ServiceRequest::Self *)HIDWORD(v74));
  g4_std::deque_gaia_ServiceRequest_b3f9d1::push_back(
    (std::deque<gaia::ServiceRequest::Self *> *)(a1 + 3),
    (gaia::ServiceRequest::Self *const *)&v74 + 1);
  glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)(a1 + 31));
  gaia::Condition::Acquire((pthread_mutex_t *)(HIDWORD(v74) + 4));
  for ( i = HIDWORD(v74); *(uint32_t *)HIDWORD(v74) != 2; i = HIDWORD(v74) )
    gaia::Condition::Wait((pthread_mutex_t *)(i + 4));
  gaia::Condition::Release((pthread_mutex_t *)(i + 4));
  v20 = HIDWORD(v74);
  v21 = *(uint32_t *)(*(uint32_t *)(HIDWORD(v74) + 52) - 12);
  *a6 = v21;
  if ( v21 > 0 )
  {
    v22 = malloc(v21);
    *a5 = (uint32_t)(uintptr_t)(v22);
    memcpy(v22, *(const void **)(v20 + 52), *a6);
  }
  v23 = *(uint32_t *)(v20 + 28);
  if ( v23 == 304 || v23 == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v82), "Etag", (int)(uintptr_t)(&v74) + 3);
    v67 = (uint32_t *)HIDWORD(v74);
    v70 = HIDWORD(v74) + 88;
    v26 = *(uint32_t *)(HIDWORD(v74) + 92);
    if ( v26 != 0 )
    {
      s1 = (void *)v82;
      v64 = HIDWORD(v74) + 88;
      v27 = *(uint32_t *)(v82 - 12);
      do
      {
        while ( 1 )
        {
          v28 = *(uint32_t *)(*(uint32_t *)(v26 + 16) - 12);
          v29 = v28;
          if ( v27 <= v28 )
            v29 = v27;
          v30 = v28 - v27;
          v31 = memcmp(*(const void **)(v26 + 16), s1, v29);
          if ( v31 == 0 )
            v31 = v30;
          if ( v31 < 0 )
            break;
          v64 = v26;
          v26 = *(uint32_t *)(v26 + 8);
          if ( v26 == 0 )
            goto LABEL_33;
        }
        v26 = *(uint32_t *)(v26 + 12);
      }
      while ( v26 != 0 );
LABEL_33:
      if ( v70 != v64 )
      {
        v32 = *(uint32_t *)(*(uint32_t *)(v64 + 16) - 12);
        v33 = v32;
        if ( v27 <= v32 )
          v33 = v27;
        v34 = v27 - v32;
        v35 = memcmp(s1, *(const void **)(v64 + 16), v33);
        if ( v35 == 0 )
          v35 = v34;
        if ( v35 >= 0 )
        {
LABEL_39:
          v71 = v64 + 20;
          v36 = a1[41];
          if ( v36 != 0 )
          {
            v65 = (int)(uintptr_t)(a1 + 40);
            v58 = *a3;
            v37 = *((uint32_t *)*a3 - 3);
            do
            {
              while ( 1 )
              {
                v38 = *(uint32_t *)(*(uint32_t *)(v36 + 16) - 12);
                v39 = v38;
                if ( v37 <= v38 )
                  v39 = v37;
                v40 = v38 - v37;
                v41 = memcmp(*(const void **)(v36 + 16), v58, v39);
                if ( v41 == 0 )
                  v41 = v40;
                if ( v41 < 0 )
                  break;
                v65 = v36;
                v36 = *(uint32_t *)(v36 + 8);
                if ( v36 == 0 )
                  goto LABEL_48;
              }
              v36 = *(uint32_t *)(v36 + 12);
            }
            while ( v36 != 0 );
LABEL_48:
            if ( a1 + 40 != (uint32_t *)v65 )
            {
              v42 = *(uint32_t *)(*(uint32_t *)(v65 + 16) - 12);
              v43 = v42;
              if ( v37 <= v42 )
                v43 = v37;
              v44 = v37 - v42;
              v45 = memcmp(v58, *(const void **)(v65 + 16), v43);
              if ( v45 == 0 )
                v45 = v44;
              if ( v45 >= 0 )
                goto LABEL_55;
            }
          }
          else
          {
            v65 = (int)(uintptr_t)(a1 + 40);
          }
          v86 = &dword_213B814;
          g4_std::string::construct_copy(&v93, a3);
          g4_std::string::construct_copy(v94, &v86);
          g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_insert_unique(
            v72,
            a1 + 39,
            v65,
            &v93);
          v65 = v72[0];
          g4_std::string::Destroy(v94);
          g4_std::string::Destroy(&v93);
          g4_std::string::Destroy(&v86);
LABEL_55:
          g4_std::string::assign_str(v65 + 20, v71);
          g4_std::string::Destroy(&v82);
          goto LABEL_23;
        }
      }
    }
    else
    {
      v64 = HIDWORD(v74) + 88;
    }
    v85 = &dword_213B814;
    g4_std::string::construct_copy(&v91, &v82);
    g4_std::string::construct_copy(v92, &v85);
    g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_insert_unique(
      v72,
      v67 + 21,
      v64,
      &v91);
    v64 = v72[0];
    g4_std::string::Destroy(v92);
    g4_std::string::Destroy(&v91);
    g4_std::string::Destroy(&v85);
    goto LABEL_39;
  }
LABEL_23:
  glwebtools::Mutex::Lock(v61);
  *(uint32_t *)HIDWORD(v74) = 4;
  v24 = *(uint32_t *)(HIDWORD(v74) + 28);
  gaia::ServiceRequest::Drop((gaia::ServiceRequest::Self *)HIDWORD(v74));
  glwebtools::Mutex::Unlock(v61);
  g4_std::string::Destroy(&v78);
  g4_std::string::Destroy(&v75);
  return v24;
}


