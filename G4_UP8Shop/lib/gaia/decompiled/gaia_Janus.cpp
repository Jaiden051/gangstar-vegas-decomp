#include "Core/Utils/DecompTypes.h"
#include "gaia_Janus.h"

// ----------------------------------------------------------------------------
// Function: gaia::Janus::ConstructJanusAuthScopesLog  (binary VA: 0x14abaf0)
// Original: gaia::Janus::ConstructJanusAuthScopesLog
// ----------------------------------------------------------------------------
gaia::Janus::Self * gaia::Janus::ConstructJanusAuthScopesLog(gaia::Janus::Self *self, gaia::BaseServiceManager::Self *a2)
{
  unsigned int *v2;
  unsigned int j;
  int v4;
  Json::Value::Self *v5;
  Json::Value::Self *v6;
  Json::Value::Self *v7;
  bool v8;
  int v9;
  unsigned int k;
  Json::Value::Self *v11;
  Json::Value::Self *v12;
  Json::Value::Self *v13;
  unsigned int m;
  int v15;
  Json::Value::Self *v16;
  Json::Value::Self *v17;
  Json::Value::Self *v18;
  void *v19;
  Json::Value::Self *v21;
  typedef __time_t _g4_t_TimeStamp;
  typedef unsigned int *_g4_t_i;
  typedef void (**_g4_t_v24)(Json::FastWriter::Self *);
  typedef int _g4_t_v25;
  typedef uint8_t _g4_t_v26[16];
  typedef uint8_t _g4_t_v27[16];
  typedef uint8_t _g4_t_v28[16];
  typedef uint8_t _g4_t_v29[16];
  typedef uint8_t _g4_t_v30[44];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (12u + sizeof(_g4_t_TimeStamp)) > _g4_s0 ? (12u + sizeof(_g4_t_TimeStamp)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_i)) > _g4_s1 ? (28u + sizeof(_g4_t_i)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v24)) > _g4_s2 ? (36u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v25)) > _g4_s3 ? (40u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v26)) > _g4_s4 ? (48u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v27)) > _g4_s5 ? (64u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v28)) > _g4_s6 ? (80u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v29)) > _g4_s7 ? (96u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (112u + sizeof(_g4_t_v30)) > _g4_s8 ? (112u + sizeof(_g4_t_v30)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_TimeStamp &TimeStamp = *reinterpret_cast<_g4_t_TimeStamp *>(_g4_sf + 12u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 36u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 64u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 80u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 96u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 112u);

  TimeStamp = gaia::BaseServiceManager::GetTimeStamp();
  Json::FastWriter::Construct((Json::FastWriter::Self *)&v24);
  Json::Value::Construct((int)(uintptr_t)(v26), nullptr);
  v2 = *((unsigned int **)a2 + 44);
  for ( i = (unsigned int *)((char *)a2 + 168); i != v2; v2 = (unsigned int *)sub_1904890(v2) )
  {
    while ( v2[4] >= 0x14 )
    {
      Json::Value::Construct((Json::Value::Self *)v30, "Invalid Credential ");
      v21 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v26, v2[4]);
      Json::Value::opAssign(v21, (const Json::Value::Self *)v30);
      Json::Value::Destroy((Json::Value::Self *)v30);
      v2 = (unsigned int *)sub_1904890(v2);
      if ( i == v2 )
        goto LABEL_18;
    }
    for ( j = v2[19]; v2 + 17 != (unsigned int *)j; j = sub_19048E0(j) )
    {
      v8 = g4_std::string::compare(j + 16, "auth_credential") == 0;
      v9 = *(uint32_t *)(j + 20);
      if ( v8 )
        v4 = v9 - TimeStamp + 720;
      else
        v4 = v9 - TimeStamp + 7200;
      if ( v4 < 0 )
        v4 = 0;
      Json::Value::Construct((Json::Value::Self *)v27, v4);
      v5 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v26, off_2037D80[v2[4]]);
      v6 = (Json::Value::Self *)Json::Value::opIndex(v5, "AuthScopes");
      v7 = (Json::Value::Self *)Json::Value::opIndex(v6, (char **)(j + 16));
      Json::Value::opAssign(v7, (const Json::Value::Self *)v27);
      Json::Value::Destroy((Json::Value::Self *)v27);
    }
    for ( k = v2[25]; v2 + 23 != (unsigned int *)k; k = sub_19048E0(k) )
    {
      Json::Value::Construct((Json::Value::Self *)v28, *(uint32_t *)(k + 20));
      v11 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v26, off_2037D80[v2[4]]);
      v12 = (Json::Value::Self *)Json::Value::opIndex(v11, "DeletedScopes");
      v13 = (Json::Value::Self *)Json::Value::opIndex(v12, (char **)(k + 16));
      Json::Value::opAssign(v13, (const Json::Value::Self *)v28);
      Json::Value::Destroy((Json::Value::Self *)v28);
    }
    for ( m = v2[31]; v2 + 29 != (unsigned int *)m; m = sub_19048E0(m) )
    {
      v15 = *(uint32_t *)(m + 20) - TimeStamp + 300;
      if ( v15 < 0 )
        v15 = 0;
      Json::Value::Construct((Json::Value::Self *)v29, v15);
      v16 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v26, off_2037D80[v2[4]]);
      v17 = (Json::Value::Self *)Json::Value::opIndex(v16, "TempBannedScopes");
      v18 = (Json::Value::Self *)Json::Value::opIndex(v17, (char **)(m + 16));
      Json::Value::opAssign(v18, (const Json::Value::Self *)v29);
      Json::Value::Destroy((Json::Value::Self *)v29);
    }
  }
LABEL_18:
  Json::FastWriter::write(self, (const Json::Value::Self *)&v24, (Json::Value::Self *)v26);
  Json::Value::Destroy((Json::Value::Self *)v26);
  v24 = (void (**)(Json::FastWriter::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2091B78));
  v19 = (void *)(v25 - 12);
  if ( (uint32_t *)(v25 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v19);
  }
  Json::Writer::Destroy((Json::Writer::Self *)&v24);
  return self;
}

// ----------------------------------------------------------------------------
// Function: gaia::Janus::FlushTokensLoggedAccount  (binary VA: 0x14ac420)
// Original: gaia::Janus::FlushTokensLoggedAccount
// ----------------------------------------------------------------------------
int gaia::Janus::FlushTokensLoggedAccount(uint32_t *a1, int a2, const void **a3, const void **a4)
{
  uint32_t *v4;
  uint32_t *v5;
  size_t n;
  size_t v8;
  void **v9;
  uint32_t *s1;
  uint32_t *v11;

  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(a1 + 39));
  v4 = (uint32_t *)a1[43];
  if ( v4 != nullptr )
  {
    v5 = a1 + 42;
    do
    {
      while ( a2 <= v4[4] )
      {
        v5 = v4;
        v4 = (uint32_t *)v4[2];
        if ( v4 == nullptr )
          goto LABEL_6;
      }
      v4 = (uint32_t *)v4[3];
    }
    while ( v4 != nullptr );
LABEL_6:
    if ( v5 != a1 + 42 && a2 >= v5[4] )
    {
      s1 = (uint32_t *)v5[14];
      n = *(s1 - 3);
      if ( n == *((uint32_t *)*a3 - 3) && memcmp(s1, *a3, n) == 0 )
      {
        v11 = (uint32_t *)v5[15];
        v8 = *(v11 - 3);
        if ( v8 == *((uint32_t *)*a4 - 3) && memcmp(v11, *a4, v8) == 0 )
        {
          v9 = (void **)sub_1904AE0(v5, a1 + 42);
          g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_erase(
            (int)(uintptr_t)(v9 + 28),
            v9[30]);
          g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_erase(
            (int)(uintptr_t)(v9 + 22),
            v9[24]);
          g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_erase(
            (int)(uintptr_t)(v9 + 16),
            v9[18]);
          g4_std::string::Destroy(v9 + 15);
          g4_std::string::Destroy(v9 + 14);
          gaia::BaseJSONServiceResponse::Destroy((gaia::BaseJSONServiceResponse::Self *)(v9 + 8));
          g4_std::string::Destroy(v9 + 7);
          g4_std::string::Destroy(v9 + 6);
          g4_std::string::Destroy(v9 + 5);
          opDelete(v9);
          --a1[46];
        }
      }
    }
  }
  return glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)(a1 + 39));
}

// ----------------------------------------------------------------------------
// Function: gaia::Janus::FlushTokens  (binary VA: 0x14ac5a0)
// Original: gaia::Janus::FlushTokens
// ----------------------------------------------------------------------------
int gaia::Janus::FlushTokens(void **self)
{
  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(self + 39));
  g4_std::Rb_tree_gaia_BaseServiceManager_e51e1b::M_erase(
    (int)(uintptr_t)(self + 41),
    *(self + 43));
  *(self + 43) = nullptr;
  *(self + 44) = self + 42;
  *(self + 45) = self + 42;
  *(self + 46) = nullptr;
  return glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)(self + 39));
}

// ----------------------------------------------------------------------------
// Function: gaia::Janus::Destroy  (binary VA: 0x14ac630)
// Original: gaia::Janus::~Janus
// ----------------------------------------------------------------------------
void gaia::Janus::Destroy(void **self)
{
  *self = (void *)(uintptr_t)(((uint32_t)(uintptr_t)&off_2095B68));
  glwebtools::Mutex::Destroy((glwebtools::Mutex::Self *)(self + 47));
  g4_std::Rb_tree_gaia_BaseServiceManager_e51e1b::M_erase(
    (int)(uintptr_t)(self + 41),
    *(self + 43));
  glwebtools::Mutex::Destroy((glwebtools::Mutex::Self *)(self + 39));
  gaia::BaseServiceManager::Destroy((gaia::BaseServiceManager::Self *)self);
}

// ----------------------------------------------------------------------------
// Function: gaia::Janus::Destroy_ea14ac6a0  (binary VA: 0x14ac6a0)
// Original: gaia::Janus::~Janus
// ----------------------------------------------------------------------------
void gaia::Janus::Destroy_ea14ac6a0(void **self)
{
  gaia::Janus::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gaia::Janus::FlushTokens  (binary VA: 0x14ac6e0)
// Original: gaia::Janus::FlushTokens
// ----------------------------------------------------------------------------
int gaia::Janus::FlushTokens(uint32_t *a1, int a2)
{
  uint32_t *v2;
  uint32_t *v3;
  void **v4;

  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(a1 + 39));
  v2 = (uint32_t *)a1[43];
  if ( v2 != nullptr )
  {
    v3 = a1 + 42;
    do
    {
      while ( v2[4] >= a2 )
      {
        v3 = v2;
        v2 = (uint32_t *)v2[2];
        if ( v2 == nullptr )
          goto LABEL_6;
      }
      v2 = (uint32_t *)v2[3];
    }
    while ( v2 != nullptr );
LABEL_6:
    if ( a1 + 42 != v3 && v3[4] <= a2 )
    {
      v4 = (void **)sub_1904AE0(v3, a1 + 42);
      g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_erase(
        (int)(uintptr_t)(v4 + 28),
        v4[30]);
      g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_erase(
        (int)(uintptr_t)(v4 + 22),
        v4[24]);
      g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_erase(
        (int)(uintptr_t)(v4 + 16),
        v4[18]);
      g4_std::string::Destroy(v4 + 15);
      g4_std::string::Destroy(v4 + 14);
      gaia::BaseJSONServiceResponse::Destroy((gaia::BaseJSONServiceResponse::Self *)(v4 + 8));
      g4_std::string::Destroy(v4 + 7);
      g4_std::string::Destroy(v4 + 6);
      g4_std::string::Destroy(v4 + 5);
      opDelete(v4);
      --a1[46];
    }
  }
  return glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)(a1 + 39));
}

// ----------------------------------------------------------------------------
// Function: gaia::Janus::SetApprovalStatus_Reject  (binary VA: 0x14b22f0)
// Original: gaia::Janus::SetApprovalStatus_Reject
// ----------------------------------------------------------------------------
int gaia::Janus::SetApprovalStatus_Reject(gaia::BaseServiceManager::Self *a1, char **a2, char **a3, gaia::GaiaRequest::Self *a4)
{
  gaia::ServiceRequest::Self *v4;
  int v5;
  typedef int _g4_t_v7;
  typedef int64_t _g4_t_v8 __attribute__((aligned(1)));
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (3u + sizeof(_g4_t_v7)) > _g4_s0 ? (3u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v9)) > _g4_s2 ? (12u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v10)) > _g4_s3 ? (16u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v11)) > _g4_s4 ? (20u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v12)) > _g4_s5 ? (24u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v13)) > _g4_s6 ? (28u + sizeof(_g4_t_v13)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 3u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);

  v4 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v4, a4);
  *((uint32_t *)v4 + 8) = 2522;
  *((uint32_t *)v4 + 4) = 0;
  g4_std_compat::string_assign((int)(uintptr_t)(v4) + 40, "https://", 8u);
  HIDWORD(v8) = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "/users/me/approvals/", (int)(uintptr_t)(&v7));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v8) + 4, &v9, a3);
  g4_std::string::Destroy(&v9);
  g4_std::string::append((int)(uintptr_t)(&v8) + 4, "/set", 4u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), (char *)&unk_1B15112, (int)(uintptr_t)(&v8));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "access_token=", (int)(uintptr_t)(&v8) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v10), &v11, a2);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v13), "False", (int)(uintptr_t)(&v8) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "&granted=", (int)(uintptr_t)(&v8) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v10), &v12, (char **)v13);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy(v13);
  g4_std::string::assign_str((char *)v4 + 44, (char *)&v8 + 4);
  g4_std::string::assign_str((char *)v4 + 48, &v10);
  v5 = gaia::BaseServiceManager::SendCompleteRequest(a1, v4);
  g4_std::string::Destroy(&v10);
  g4_std::string::Destroy((char *)&v8 + 4);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: gaia::Janus::AddPermission  (binary VA: 0x14b24f0)
// Original: gaia::Janus::AddPermission
// ----------------------------------------------------------------------------
int gaia::Janus::AddPermission(gaia::BaseServiceManager::Self *a1, char **a2, int a3, char **a4, char **a5, gaia::GaiaRequest::Self *a6)
{
  gaia::ServiceRequest::Self *v6;
  int v7;
  typedef int _g4_t_v9;
  typedef int64_t _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef char *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (15u + sizeof(_g4_t_v9)) > _g4_s0 ? (15u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v10)) > _g4_s1 ? (16u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v11)) > _g4_s2 ? (24u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v12)) > _g4_s3 ? (28u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v13)) > _g4_s4 ? (32u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v14)) > _g4_s5 ? (36u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v15)) > _g4_s6 ? (40u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v16)) > _g4_s7 ? (44u + sizeof(_g4_t_v16)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 15u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);

  v6 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v6, a6);
  *((uint32_t *)v6 + 8) = 2516;
  *((uint32_t *)v6 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v6) + 40, "https://", 8u);
  HIDWORD(v10) = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std::string::append((int)(uintptr_t)(&v10) + 4, "/me/permissions", 0xFu);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), (char *)&unk_1B15112, (int)(uintptr_t)(&v9));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "username=", (int)(uintptr_t)(&v10));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v11), &v12, a2);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "&access_token=", (int)(uintptr_t)(&v10) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v11), &v13, a4);
  g4_std::string::Destroy(&v13);
  gaia::BaseServiceManager::GetCredentialString((int)(uintptr_t)(&v14), &a3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "&credential_type=", (int)(uintptr_t)(&v10) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v11), &v15, &v14);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v16), "&scope=", (int)(uintptr_t)(&v10) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v11), v16, a5);
  g4_std::string::Destroy(v16);
  g4_std::string::assign_str((char *)v6 + 44, (char *)&v10 + 4);
  g4_std::string::assign_str((char *)v6 + 48, &v11);
  v7 = gaia::BaseServiceManager::SendCompleteRequest(a1, v6);
  g4_std::string::Destroy(&v11);
  g4_std::string::Destroy((char *)&v10 + 4);
  return v7;
}

// ----------------------------------------------------------------------------
// Function: gaia::Janus::RemoveCredential  (binary VA: 0x14b2750)
// Original: gaia::Janus::RemoveCredential
// ----------------------------------------------------------------------------
int gaia::Janus::RemoveCredential(gaia::BaseServiceManager::Self *a1, int a2, int a3, char **a4, gaia::GaiaRequest::Self *a5)
{
  gaia::ServiceRequest::Self *v5;
  int v6;
  typedef int _g4_t_v8;
  typedef char *_g4_t_v9;
  typedef uint8_t _g4_t_v10[4];
  typedef int _g4_t_v11;
  typedef uint8_t _g4_t_v12[4];
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v10)) > _g4_s2 ? (20u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v11)) > _g4_s3 ? (24u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v12)) > _g4_s4 ? (28u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v13)) > _g4_s5 ? (32u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v14)) > _g4_s6 ? (36u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v15)) > _g4_s7 ? (40u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v16)) > _g4_s8 ? (44u + sizeof(_g4_t_v16)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);

  v5 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v5, a5);
  *((uint32_t *)v5 + 8) = 2515;
  *((uint32_t *)v5 + 4) = 1;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), ":", (int)(uintptr_t)(&v8));
  gaia::BaseServiceManager::GetCredentialString((int)(uintptr_t)(v10), &a2);
  sub_134F3A0((int)(uintptr_t)(v12), (int)(uintptr_t)(v10), (int)(uintptr_t)(&v11));
  sub_134F3A0((int)(uintptr_t)(&v9), (int)(uintptr_t)(v12), a3);
  g4_std::string::Destroy(v12);
  g4_std::string::Destroy(v10);
  g4_std::string::Destroy(&v11);
  g4_std_compat::string_assign((int)(uintptr_t)(v5) + 40, "https://", 8u);
  v13 = (int)(uintptr_t)(&dword_213B814);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "/users/me/credentials/", (int)(uintptr_t)(&v8) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v13), &v14, &v9);
  g4_std::string::Destroy(&v14);
  g4_std::string::append((int)(uintptr_t)(&v13), "/unlink", 7u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), (char *)&unk_1B15112, (int)(uintptr_t)(&v8) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v16), "access_token=", (int)(uintptr_t)(&v8) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v15), v16, a4);
  g4_std::string::Destroy(v16);
  g4_std::string::assign_str((char *)v5 + 44, &v13);
  g4_std::string::assign_str((char *)v5 + 48, &v15);
  v6 = gaia::BaseServiceManager::SendCompleteRequest(a1, v5);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v9);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gaia::Janus::AddCredential  (binary VA: 0x14b2980)
// Original: gaia::Janus::AddCredential
// ----------------------------------------------------------------------------
int gaia::Janus::AddCredential(gaia::BaseServiceManager::Self *a1, int a2, char **a3, int a4, char **a5, char **a6, gaia::GaiaRequest::Self *a7)
{
  gaia::ServiceRequest::Self *v7;
  int v8;
  typedef int _g4_t_v10;
  typedef int64_t _g4_t_v11 __attribute__((aligned(1)));
  typedef int _g4_t_v12;
  typedef char *_g4_t_v13;
  typedef uint8_t _g4_t_v14[4];
  typedef int _g4_t_v15;
  typedef uint8_t _g4_t_v16[4];
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (2u + sizeof(_g4_t_v10)) > _g4_s0 ? (2u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v11)) > _g4_s1 ? (4u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v12)) > _g4_s2 ? (12u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v13)) > _g4_s3 ? (16u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v14)) > _g4_s4 ? (20u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v15)) > _g4_s5 ? (24u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v16)) > _g4_s6 ? (28u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v17)) > _g4_s7 ? (32u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v18)) > _g4_s8 ? (36u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v19)) > _g4_s9 ? (40u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v20)) > _g4_s10 ? (44u + sizeof(_g4_t_v20)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 2u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);

  v7 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v7, a7);
  *((uint32_t *)v7 + 8) = 2513;
  *((uint32_t *)v7 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v7) + 40, "https://", 8u);
  HIDWORD(v11) = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std::string::append((int)(uintptr_t)(&v11) + 4, "/users/me/credentials", 0x15u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), (char *)&unk_1B15112, (int)(uintptr_t)(&v10));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), ":", (int)(uintptr_t)(&v10) + 1);
  gaia::BaseServiceManager::GetCredentialString((int)(uintptr_t)(v14), &a4);
  sub_134F3A0((int)(uintptr_t)(v16), (int)(uintptr_t)(v14), (int)(uintptr_t)(&v15));
  sub_134F3A0((int)(uintptr_t)(&v13), (int)(uintptr_t)(v16), a2);
  g4_std::string::Destroy(v16);
  g4_std::string::Destroy(v14);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "credential=", (int)(uintptr_t)(&v11));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v12), &v17, &v13);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "&password=", (int)(uintptr_t)(&v11) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v12), &v18, a3);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "&access_token=", (int)(uintptr_t)(&v11) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v12), &v19, a5);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v20), "&if_exists=", (int)(uintptr_t)(&v11) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v12), v20, a6);
  g4_std::string::Destroy(v20);
  g4_std::string::assign_str((char *)v7 + 44, (char *)&v11 + 4);
  g4_std::string::assign_str((char *)v7 + 48, &v12);
  v8 = gaia::BaseServiceManager::SendCompleteRequest(a1, v7);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy((char *)&v11 + 4);
  return v8;
}

// ----------------------------------------------------------------------------
// Function: gaia::Janus::RetrievePassword  (binary VA: 0x14b2c60)
// Original: gaia::Janus::RetrievePassword
// ----------------------------------------------------------------------------
int gaia::Janus::RetrievePassword(gaia::BaseServiceManager::Self *a1, char **a2, int a3, gaia::GaiaRequest::Self *a4)
{
  gaia::ServiceRequest::Self *v4;
  int v5;
  typedef uint16_t _g4_t_v7[3];
  typedef char *_g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (14u + sizeof(_g4_t_v7)) > _g4_s0 ? (14u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v8)) > _g4_s1 ? (20u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v9)) > _g4_s2 ? (24u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v10)) > _g4_s3 ? (28u + sizeof(_g4_t_v10)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 14u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);

  v4 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v4, a4);
  *((uint32_t *)v4 + 8) = 2512;
  *((uint32_t *)v4 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v4) + 40, "https://", 8u);
  *(uint32_t *)&v7[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  gaia::BaseServiceManager::GetCredentialString((int)(uintptr_t)(&v8), &a3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "/", (int)(uintptr_t)(v7));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v7[1]), &v9, &v8);
  g4_std::string::Destroy(&v9);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v10), ":", (int)(uintptr_t)(v7) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v7[1]), v10, a2);
  g4_std::string::Destroy(v10);
  g4_std::string::append((int)(uintptr_t)(&v7[1]), "/password", 9u);
  g4_std::string::assign_str((char *)v4 + 44, &v7[1]);
  v5 = gaia::BaseServiceManager::SendCompleteRequest(a1, v4);
  g4_std::string::Destroy(&v7[1]);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: gaia::Janus::CreateAccount  (binary VA: 0x14b2de0)
// Original: gaia::Janus::CreateAccount
// ----------------------------------------------------------------------------
int gaia::Janus::CreateAccount(gaia::BaseServiceManager::Self *a1, char **a2, int a3, char **a4, char **a5, char **a6, gaia::GaiaRequest::Self *a7)
{
  int v7;
  int v8;
  typedef int _g4_t_v10;
  typedef int64_t _g4_t_v11 __attribute__((aligned(1)));
  typedef char *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (10u + sizeof(_g4_t_v10)) > _g4_s0 ? (10u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v12)) > _g4_s2 ? (20u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v13)) > _g4_s3 ? (24u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v14)) > _g4_s4 ? (28u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v15)) > _g4_s5 ? (32u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v16)) > _g4_s6 ? (36u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v17)) > _g4_s7 ? (40u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v18)) > _g4_s8 ? (44u + sizeof(_g4_t_v18)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 10u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);

  v7 = opNew(0x98u);
  gaia::ServiceRequest::Construct((gaia::ServiceRequest::Self *)v7, a7);
  *(uint32_t *)(v7 + 32) = 2511;
  *(uint32_t *)(v7 + 16) = 1;
  *(uint8_t *)(v7 + 12) = 0;
  g4_std_compat::string_assign(v7 + 40, "https://", 8u);
  HIDWORD(v11) = (uint32_t)(uintptr_t)(&dword_213B814);
  gaia::BaseServiceManager::GetCredentialString((int)(uintptr_t)(&v12), &a3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "/", (int)(uintptr_t)(&v10));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v11) + 4, &v13, &v12);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), ":", (int)(uintptr_t)(&v10) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v11) + 4, &v14, a2);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), (char *)&unk_1B15112, (int)(uintptr_t)(&v11));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "password=", (int)(uintptr_t)(&v11) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v15), &v16, a4);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "&contact_address=", (int)(uintptr_t)(&v11) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v15), &v17, a5);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v18), "&language=", (int)(uintptr_t)(&v11) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v15), v18, a6);
  g4_std::string::Destroy(v18);
  g4_std::string::assign_str(v7 + 44, (char *)&v11 + 4);
  g4_std::string::assign_str(v7 + 48, &v15);
  v8 = gaia::BaseServiceManager::SendCompleteRequest(a1, (gaia::ServiceRequest::Self *)v7);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy((char *)&v11 + 4);
  return v8;
}

// ----------------------------------------------------------------------------
// Function: gaia::Janus::SetDeviceInfo  (binary VA: 0x14b3060)
// Original: gaia::Janus::SetDeviceInfo
// ----------------------------------------------------------------------------
int gaia::Janus::SetDeviceInfo(gaia::BaseServiceManager::Self *a1, char **a2, char **a3, char **a4, char **a5, char **a6, gaia::GaiaRequest::Self *a7)
{
  gaia::ServiceRequest::Self *v7;
  int v8;
  typedef int _g4_t_v10;
  typedef int64_t _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (14u + sizeof(_g4_t_v10)) > _g4_s0 ? (14u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v11)) > _g4_s1 ? (16u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v12)) > _g4_s2 ? (24u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v13)) > _g4_s3 ? (28u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v14)) > _g4_s4 ? (32u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v15)) > _g4_s5 ? (36u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v16)) > _g4_s6 ? (40u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v17)) > _g4_s7 ? (44u + sizeof(_g4_t_v17)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 14u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);

  v7 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v7, a7);
  *((uint32_t *)v7 + 8) = 2509;
  *((uint32_t *)v7 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v7) + 40, "https://", 8u);
  HIDWORD(v11) = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std::string::append((int)(uintptr_t)(&v11) + 4, "/devices/mydevice", 0x11u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), (char *)&unk_1B15112, (int)(uintptr_t)(&v10));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "access_token=", (int)(uintptr_t)(&v10) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v12), &v13, a2);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "&model=", (int)(uintptr_t)(&v11));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v12), &v14, a3);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "&carrier=", (int)(uintptr_t)(&v11) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v12), &v15, a4);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "&country=", (int)(uintptr_t)(&v11) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v12), &v16, a5);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v17), "&language=", (int)(uintptr_t)(&v11) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v12), v17, a6);
  g4_std::string::Destroy(v17);
  g4_std::string::assign_str((char *)v7 + 44, (char *)&v11 + 4);
  g4_std::string::assign_str((char *)v7 + 48, &v12);
  v8 = gaia::BaseServiceManager::SendCompleteRequest(a1, v7);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy((char *)&v11 + 4);
  return v8;
}

// ----------------------------------------------------------------------------
// Function: gaia::Janus::sendAuthentificate  (binary VA: 0x14b32e0)
// Original: gaia::Janus::sendAuthentificate
// ----------------------------------------------------------------------------
int gaia::Janus::sendAuthentificate(char **a1, char **a2, char **a3, int a4, gaia::GaiaRequest::Self *a5)
{
  gaia::ServiceRequest::Self *v5;
  int v6;
  typedef int _g4_t_v8;
  typedef int64_t _g4_t_v9;
  typedef char *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (15u + sizeof(_g4_t_v8)) > _g4_s0 ? (15u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v10)) > _g4_s2 ? (24u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v11)) > _g4_s3 ? (28u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v12)) > _g4_s4 ? (32u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v13)) > _g4_s5 ? (36u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v14)) > _g4_s6 ? (40u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v15)) > _g4_s7 ? (44u + sizeof(_g4_t_v15)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 15u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 36u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 40u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);

  v5 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v5, a5);
  *((uint32_t *)v5 + 8) = 2508;
  g4_std_compat::string_assign((int)(uintptr_t)(v5) + 40, "https://", 8u);
  HIDWORD(v9) = (uint32_t)(uintptr_t)(&dword_213B814);
  gaia::BaseServiceManager::GetCredentialString((int)(uintptr_t)(&v10), &a4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "/", (int)(uintptr_t)(&v8));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v9) + 4, &v11, &v10);
  g4_std::string::Destroy(&v11);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), ":", (int)(uintptr_t)(&v9));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v9) + 4, &v12, a2);
  g4_std::string::Destroy(&v12);
  g4_std::string::append((int)(uintptr_t)(&v9) + 4, "/authenticate", 0xDu);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), (char *)&unk_1B15112, (int)(uintptr_t)(&v9) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "password=", (int)(uintptr_t)(&v9) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v13), &v14, a3);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v15), "&client_id=", (int)(uintptr_t)(&v9) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v13), v15, a1 + 33);
  g4_std::string::Destroy(v15);
  g4_std::string::assign_str((char *)v5 + 44, (char *)&v9 + 4);
  g4_std::string::assign_str((char *)v5 + 48, &v13);
  v6 = gaia::BaseServiceManager::SendCompleteRequest((gaia::BaseServiceManager::Self *)a1, v5);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy((char *)&v9 + 4);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gaia::Janus::ChangePassword  (binary VA: 0x14b3530)
// Original: gaia::Janus::ChangePassword
// ----------------------------------------------------------------------------
int gaia::Janus::ChangePassword(gaia::BaseServiceManager::Self *a1, char **a2, int a3, int a4, char **a5, char **a6, gaia::GaiaRequest::Self *a7)
{
  gaia::ServiceRequest::Self *v7;
  int v8;
  typedef int _g4_t_v10;
  typedef int64_t _g4_t_v11 __attribute__((aligned(1)));
  typedef uint8_t _g4_t_v12[4];
  typedef int _g4_t_v13;
  typedef uint8_t _g4_t_v14[4];
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (2u + sizeof(_g4_t_v10)) > _g4_s0 ? (2u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v11)) > _g4_s1 ? (4u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v12)) > _g4_s2 ? (12u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v13)) > _g4_s3 ? (16u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v14)) > _g4_s4 ? (20u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v15)) > _g4_s5 ? (24u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v16)) > _g4_s6 ? (28u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v17)) > _g4_s7 ? (32u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v18)) > _g4_s8 ? (36u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v19)) > _g4_s9 ? (40u + sizeof(_g4_t_v19)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v20)) > _g4_s10 ? (44u + sizeof(_g4_t_v20)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 2u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 4u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 20u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 24u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 28u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);

  v7 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v7, a7);
  *((uint32_t *)v7 + 8) = 2524;
  *((uint32_t *)v7 + 4) = 1;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), ":", (int)(uintptr_t)(&v10));
  gaia::BaseServiceManager::GetCredentialString((int)(uintptr_t)(v12), &a3);
  sub_134F3A0((int)(uintptr_t)(v14), (int)(uintptr_t)(v12), (int)(uintptr_t)(&v13));
  sub_134F3A0((int)(uintptr_t)(&v11) + 4, (int)(uintptr_t)(v14), a4);
  g4_std::string::Destroy(v14);
  g4_std::string::Destroy(v12);
  g4_std::string::Destroy(&v13);
  g4_std_compat::string_assign((int)(uintptr_t)(v7) + 40, "https://", 8u);
  v15 = (int)(uintptr_t)(&dword_213B814);
  g4_std::string::append((int)(uintptr_t)(&v15), "/users/me", 9u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "/", (int)(uintptr_t)(&v10) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v15), &v16, (char **)&v11 + 1);
  g4_std::string::Destroy(&v16);
  g4_std::string::append((int)(uintptr_t)(&v15), "/change_password", 0x10u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), (char *)&unk_1B15112, (int)(uintptr_t)(&v11));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "access_token=", (int)(uintptr_t)(&v11) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v17), &v18, a2);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "&password=", (int)(uintptr_t)(&v11) + 2);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v17), &v19, a5);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v20), "&gamespace=", (int)(uintptr_t)(&v11) + 3);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v17), v20, a6);
  g4_std::string::Destroy(v20);
  g4_std::string::assign_str((char *)v7 + 44, &v15);
  g4_std::string::assign_str((char *)v7 + 48, &v17);
  v8 = gaia::BaseServiceManager::SendCompleteRequest(a1, v7);
  g4_std::string::Destroy(&v17);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy((char *)&v11 + 4);
  return v8;
}

// ----------------------------------------------------------------------------
// Function: gaia::Janus::TransferCodeToken  (binary VA: 0x14b6c70)
// Original: gaia::Janus::TransferCodeToken
// ----------------------------------------------------------------------------
int gaia::Janus::TransferCodeToken(int a1, int a2, char **a3, char **a4, gaia::GaiaRequest::Self *a5)
{
  gaia::ServiceRequest::Self *v5;
  int v6;
  typedef int _g4_t_v8;
  typedef int64_t _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (14u + sizeof(_g4_t_v8)) > _g4_s0 ? (14u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v10)) > _g4_s2 ? (24u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v11)) > _g4_s3 ? (28u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v12)) > _g4_s4 ? (32u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v13)) > _g4_s5 ? (36u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v14)) > _g4_s6 ? (40u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v15)) > _g4_s7 ? (44u + sizeof(_g4_t_v15)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 14u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 36u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 40u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);

  v5 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v5, a5);
  *((uint32_t *)v5 + 8) = 2526;
  *((uint32_t *)v5 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v5) + 40, "https://", 8u);
  g4_std_compat::string_assign((int)(uintptr_t)(v5) + 44, "/authorize", 0xAu);
  HIDWORD(v9) = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "transfer_code", (int)(uintptr_t)(&v8) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "grant_type=", (int)(uintptr_t)(&v8));
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v9) + 4, &v10, (char **)&v11);
  g4_std::string::Destroy(&v10);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "auth", (int)(uintptr_t)(&v9) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "&scope=", (int)(uintptr_t)(&v9));
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v9) + 4, &v12, (char **)&v13);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "&client_id=", (int)(uintptr_t)(&v9) + 2);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v9) + 4, &v14, a3);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v15), "&transfer_code=", (int)(uintptr_t)(&v9) + 3);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v9) + 4, v15, a4);
  g4_std::string::Destroy(v15);
  g4_std::string::assign_str((char *)v5 + 48, (char *)&v9 + 4);
  v6 = gaia::BaseServiceManager::SendCompleteRequest(a1, v5, a2);
  g4_std::string::Destroy((char *)&v9 + 4);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gaia::Janus::CreateTransferCode  (binary VA: 0x14b6ec0)
// Original: gaia::Janus::CreateTransferCode
// ----------------------------------------------------------------------------
int gaia::Janus::CreateTransferCode(int a1, int a2, char **a3, gaia::GaiaRequest::Self *a4)
{
  gaia::ServiceRequest::Self *v4;
  int v5;
  typedef uint8_t _g4_t_v7[5];
  typedef int _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (7u + sizeof(_g4_t_v7)) > _g4_s0 ? (7u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 7u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  v4 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v4, a4);
  *((uint32_t *)v4 + 8) = 2525;
  *((uint32_t *)v4 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v4) + 40, "https://", 8u);
  g4_std_compat::string_assign((int)(uintptr_t)(v4) + 44, "/users/me/transfer_code", 0x17u);
  *(uint32_t *)&v7[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v8), "access_token=", (int)(uintptr_t)(v7));
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v7[1]), v8, a3);
  g4_std::string::Destroy(v8);
  g4_std::string::assign_str((char *)v4 + 48, &v7[1]);
  v5 = gaia::BaseServiceManager::SendCompleteRequest(a1, v4, a2);
  g4_std::string::Destroy(&v7[1]);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: gaia::Janus::RefreshAccessToken  (binary VA: 0x14b6ff0)
// Original: gaia::Janus::RefreshAccessToken
// ----------------------------------------------------------------------------
int gaia::Janus::RefreshAccessToken(int a1, int a2, int a3, char **a4, char **a5, char **a6, gaia::GaiaRequest::Self *a7)
{
  gaia::ServiceRequest::Self *v7;
  void *v8;
  int v9;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (7u + sizeof(_g4_t_v11)) > _g4_s0 ? (7u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v12)) > _g4_s1 ? (8u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v13)) > _g4_s2 ? (12u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v14)) > _g4_s3 ? (16u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v15)) > _g4_s4 ? (20u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v16)) > _g4_s5 ? (24u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v17)) > _g4_s6 ? (28u + sizeof(_g4_t_v17)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 7u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);

  v7 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v7, a7);
  *((uint32_t *)v7 + 8) = 2519;
  *((uint32_t *)v7 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v7) + 40, "https://", 8u);
  v13 = (int)(uintptr_t)(&dword_213B814);
  g4_std::string::append((int)(uintptr_t)(&v13), "/authorize", 0xAu);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), (char *)&unk_1B15112, (int)(uintptr_t)(&v11));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "grant_type=", (int)(uintptr_t)(&v12));
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v14), &v15, a4);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "&refresh_token=", (int)(uintptr_t)(&v12) + 1);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v14), &v16, a5);
  v8 = (void *)(v16 - 12);
  if ( (uint32_t *)(v16 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v17), "&scope=", (int)(uintptr_t)(&v12) + 2);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v14), v17, a6);
  g4_std::string::Destroy(v17);
  g4_std::string::assign_str((char *)v7 + 44, &v13);
  g4_std::string::assign_str((char *)v7 + 48, &v14);
  v9 = gaia::BaseServiceManager::SendCompleteRequest(a1, v7, a2);
  g4_std::string::Destroy(&v14);
  g4_std::string::Destroy(&v13);
  return v9;
}

// ----------------------------------------------------------------------------
// Function: gaia::Janus::AddAlias  (binary VA: 0x14b7200)
// Original: gaia::Janus::AddAlias
// ----------------------------------------------------------------------------
int gaia::Janus::AddAlias(int a1, int a2, char **a3, gaia::GaiaRequest::Self *a4)
{
  gaia::ServiceRequest::Self *v4;
  int v5;
  typedef uint16_t _g4_t_v7[3];
  typedef int _g4_t_v8;
  typedef int _g4_t_v9[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (2u + sizeof(_g4_t_v7)) > _g4_s0 ? (2u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v8)) > _g4_s1 ? (8u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v9)) > _g4_s2 ? (12u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 2u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);

  v4 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v4, a4);
  *((uint32_t *)v4 + 8) = 2520;
  *((uint32_t *)v4 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v4) + 40, "https://", 8u);
  *(uint32_t *)&v7[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std::string::append((int)(uintptr_t)(&v7[1]), "/games/mygame/alias", 0x13u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), (char *)&unk_1B15112, (int)(uintptr_t)(v7));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v9), "access_token=", (int)(uintptr_t)(v7) + 1);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v8), v9, a3);
  g4_std::string::Destroy(v9);
  g4_std::string::assign_str((char *)v4 + 44, &v7[1]);
  g4_std::string::assign_str((char *)v4 + 48, &v8);
  v5 = gaia::BaseServiceManager::SendCompleteRequest(a1, v4, a2);
  g4_std::string::Destroy(&v8);
  g4_std::string::Destroy(&v7[1]);
  return v5;
}

// ----------------------------------------------------------------------------
// Function: gaia::Janus::FindUserByAlias  (binary VA: 0x14b7350)
// Original: gaia::Janus::FindUserByAlias
// ----------------------------------------------------------------------------
int gaia::Janus::FindUserByAlias(int a1, int a2, char **a3, char **a4, gaia::GaiaRequest::Self *a5)
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
  *((uint32_t *)v5 + 8) = 2521;
  g4_std_compat::string_assign((int)(uintptr_t)(v5) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "/games/mygame/alias", (int)(uintptr_t)(&v8));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "/", (int)(uintptr_t)(&v8) + 1);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v9), &v10, a3);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), (char *)&unk_1B15112, (int)(uintptr_t)(&v8) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v12), "access_token=", (int)(uintptr_t)(&v8) + 3);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v11), v12, a4);
  g4_std::string::Destroy(v12);
  g4_std::string::assign_str((char *)v5 + 44, &v9);
  g4_std::string::assign_str((char *)v5 + 48, &v11);
  v6 = gaia::BaseServiceManager::SendCompleteRequest(a1, v5, a2);
  g4_std::string::Destroy(&v11);
  g4_std::string::Destroy(&v9);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gaia::Janus::AuthorizeExclusive  (binary VA: 0x14b74d0)
// Original: gaia::Janus::AuthorizeExclusive
// ----------------------------------------------------------------------------
int gaia::Janus::AuthorizeExclusive(int a1, int a2, int a3, char **a4, int a5, char **a6, char **a7, char a8, char **a9, int a10, gaia::GaiaRequest::Self *a11)
{
  gaia::ServiceRequest::Self *v11;
  int v12;
  typedef char _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int64_t _g4_t_v17 __attribute__((aligned(1)));
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint8_t _g4_t_v21[4];
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef char *_g4_t_v29;
  typedef int _g4_t_v30[8];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (15u + sizeof(_g4_t_v14)) > _g4_s0 ? (15u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (29u + sizeof(_g4_t_v15)) > _g4_s1 ? (29u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v16)) > _g4_s2 ? (32u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v17)) > _g4_s3 ? (36u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v18)) > _g4_s4 ? (44u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v19)) > _g4_s5 ? (48u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v20)) > _g4_s6 ? (52u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v21)) > _g4_s7 ? (56u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v22)) > _g4_s8 ? (60u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v23)) > _g4_s9 ? (64u + sizeof(_g4_t_v23)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v24)) > _g4_s10 ? (68u + sizeof(_g4_t_v24)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v25)) > _g4_s11 ? (72u + sizeof(_g4_t_v25)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v26)) > _g4_s12 ? (76u + sizeof(_g4_t_v26)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v27)) > _g4_s13 ? (80u + sizeof(_g4_t_v27)) : _g4_s13,
    _g4_s15 = (84u + sizeof(_g4_t_v28)) > _g4_s14 ? (84u + sizeof(_g4_t_v28)) : _g4_s14,
    _g4_s16 = (88u + sizeof(_g4_t_v29)) > _g4_s15 ? (88u + sizeof(_g4_t_v29)) : _g4_s15,
    _g4_s17 = (92u + sizeof(_g4_t_v30)) > _g4_s16 ? (92u + sizeof(_g4_t_v30)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 15u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 29u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 52u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 56u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 60u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 64u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 68u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 72u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 76u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 80u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 84u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 88u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 92u);

  v14 = a8;
  v11 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v11, a11);
  *((uint32_t *)v11 + 8) = 2503;
  *((uint32_t *)v11 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v11) + 40, "https://", 8u);
  HIDWORD(v17) = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std::string::append((int)(uintptr_t)(&v17) + 4, "/authorize", 0xAu);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), (char *)&unk_1B15112, (int)(uintptr_t)(&v15));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "client_id=", (int)(uintptr_t)(&v15) + 1);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v18), &v19, (char **)(a1 + 132));
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), (char *)&unk_1B15112, (int)(uintptr_t)(&v15) + 2);
  gaia::BaseServiceManager::GetCredentialString((int)(uintptr_t)(v21), &a5);
  g4_std::string::assign_str(&v20, v21);
  g4_std::string::Destroy(v21);
  g4_std::string::append((int)(uintptr_t)(&v20), ":", 1u);
  g4_std::string::append_str(&v20, a3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "&username=", (int)(uintptr_t)(&v16));
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v18), &v22, (char **)&v20);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "&password=", (int)(uintptr_t)(&v16) + 1);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v18), &v23, a4);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "password", (int)(uintptr_t)(&v16) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "&grant_type=", (int)(uintptr_t)(&v16) + 2);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v18), &v24, (char **)&v25);
  g4_std::string::Destroy(&v24);
  g4_std::string::Destroy(&v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "&scope=", (int)(uintptr_t)(&v17));
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v18), &v26, a6);
  g4_std::string::Destroy(&v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "&device_id=", (int)(uintptr_t)(&v17) + 1);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v18), &v27, a7);
  g4_std::string::Destroy(&v27);
  if ( *((uint32_t *)*a9 - 3) != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "&for_username=", (int)(uintptr_t)(&v17) + 2);
    gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v18), &v28, a9);
    g4_std::string::Destroy(&v28);
    gaia::BaseServiceManager::GetCredentialString((int)(uintptr_t)(&v29), &a10);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v30), "&for_credential_type=", (int)(uintptr_t)(&v17) + 3);
    gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v18), v30, &v29);
    g4_std::string::Destroy(v30);
    g4_std::string::Destroy(&v29);
  }
  if ( v14 != 0 )
    g4_std::string::append((int)(uintptr_t)(&v18), "&access_token_only=1", 0x14u);
  g4_std::string::assign_str((char *)v11 + 44, (char *)&v17 + 4);
  g4_std::string::assign_str((char *)v11 + 48, &v18);
  v12 = gaia::BaseServiceManager::SendCompleteRequest(a1, v11, a2);
  g4_std::string::Destroy(&v20);
  g4_std::string::Destroy(&v18);
  g4_std::string::Destroy((char *)&v17 + 4);
  return v12;
}

// ----------------------------------------------------------------------------
// Function: gaia::Janus::EncryptToken  (binary VA: 0x14b9e20)
// Original: gaia::Janus::EncryptToken
// ----------------------------------------------------------------------------
int gaia::Janus::EncryptToken(gaia::BaseServiceManager::Self *a1, char **a2, char **a3, void **a4, int *a5, gaia::GaiaRequest::Self *a6)
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
  *((uint32_t *)v6 + 8) = 2517;
  *((uint32_t *)v6 + 4) = 1;
  g4_std_compat::string_assign((int)(uintptr_t)(v6) + 40, "https://", 8u);
  *(uint32_t *)&v9[3] = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std::string::append((int)(uintptr_t)(&v9[3]), "/encrypt_token", 0xEu);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), (char *)&unk_1B15112, (int)(uintptr_t)(v9));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "access_token=", (int)(uintptr_t)(&v9[1]));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v10), &v11, a2);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v12), "&nonce=", (int)(uintptr_t)(&v9[2]));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v10), v12, a3);
  g4_std::string::Destroy(v12);
  g4_std::string::assign_str((char *)v6 + 44, &v9[3]);
  g4_std::string::assign_str((char *)v6 + 48, &v10);
  v7 = gaia::BaseServiceManager::SendCompleteRequest(a1, v6, a4, a5);
  g4_std::string::Destroy(&v10);
  g4_std::string::Destroy(&v9[3]);
  return v7;
}

// ----------------------------------------------------------------------------
// Function: gaia::Janus::GetCredentialListForAccount  (binary VA: 0x14b9fc0)
// Original: gaia::Janus::GetCredentialListForAccount
// ----------------------------------------------------------------------------
int gaia::Janus::GetCredentialListForAccount(gaia::BaseServiceManager::Self *a1, void **a2, int *a3, char **a4, gaia::GaiaRequest::Self *a5)
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
  *((uint32_t *)v5 + 8) = 2507;
  g4_std_compat::string_assign((int)(uintptr_t)(v5) + 40, "https://", 8u);
  *(uint32_t *)&v8[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std::string::append((int)(uintptr_t)(&v8[1]), "/users/me", 9u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), (char *)&unk_1B15112, (int)(uintptr_t)(v8));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v10), "access_token=", (int)(uintptr_t)(v8) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v9), v10, a4);
  g4_std::string::Destroy(v10);
  g4_std::string::assign_str((char *)v5 + 44, &v8[1]);
  g4_std::string::assign_str((char *)v5 + 48, &v9);
  v6 = gaia::BaseServiceManager::SendCompleteRequest(a1, v5, a2, a3);
  g4_std::string::Destroy(&v9);
  g4_std::string::Destroy(&v8[1]);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: gaia::Janus::Construct  (binary VA: 0x14c0e20)
// Original: gaia::Janus::Janus
// ----------------------------------------------------------------------------
int gaia::Janus::Construct(gaia::BaseServiceManager::Self *a1, int a2, int a3)
{
  int MaxParalelRequests;
  int v5[4];

  MaxParalelRequests = gaia::utils::GetMaxParalelRequests(10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v5) + 1, "janus", (int)(uintptr_t)(v5));
  gaia::BaseServiceManager::Construct(a1, (int)(uintptr_t)(v5) + 1, a3, MaxParalelRequests);
  g4_std::string::Destroy((char *)v5 + 1);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2095B68);
  glwebtools::Mutex::Construct((gaia::BaseServiceManager::Self *)((char *)a1 + 156));
  *((uint32_t *)a1 + 42) = 0;
  *((uint32_t *)a1 + 44) = (uint32_t)(uintptr_t)((char *)a1 + 168);
  *((uint32_t *)a1 + 45) = (uint32_t)(uintptr_t)((char *)a1 + 168);
  *((uint32_t *)a1 + 43) = 0;
  *((uint32_t *)a1 + 46) = 0;
  glwebtools::Mutex::Construct((gaia::BaseServiceManager::Self *)((char *)a1 + 188));
  return (int)(uintptr_t)(g4_std::string::assign_str((char *)a1 + 52, a2));
}

// ----------------------------------------------------------------------------
// Function: gaia::Janus::UpdateTokens  (binary VA: 0x14c0fc0)
// Original: gaia::Janus::UpdateTokens
// ----------------------------------------------------------------------------
int gaia::Janus::UpdateTokens(gaia::Janus::Self *self)
{
  int i;
  __time_t TimeStamp;

  glwebtools::Mutex::Lock((gaia::Janus::Self *)((char *)self + 156));
  for ( i = *((uint32_t *)self + 44); (gaia::Janus::Self *)i != (gaia::Janus::Self *)((char *)self + 168); i = sub_1904890(i) )
  {
    TimeStamp = gaia::BaseServiceManager::GetTimeStamp();
    gaia::Janus::JanusToken::UpdateScopeList((gaia::Janus::JanusToken::Self *)(i + 20), TimeStamp);
  }
  return (int)(uintptr_t)(glwebtools::Mutex::Unlock((gaia::Janus::Self *)((char *)self + 156)));
}

// ----------------------------------------------------------------------------
// Function: gaia::Janus::GetJanusToken  (binary VA: 0x14c1040)
// Original: gaia::Janus::GetJanusToken
// ----------------------------------------------------------------------------
int gaia::Janus::GetJanusToken(gaia::Janus::Self *a1, int a2, uint32_t *a3)
{
  uint32_t *v3;
  int v4;
  uint32_t *v5;
  int v6;
  int v8;

  gaia::Janus::UpdateTokens(a1);
  glwebtools::Mutex::Lock((gaia::Janus::Self *)((char *)a1 + 156));
  v3 = *((uint32_t **)a1 + 43);
  v4 = 404;
  if ( v3 != nullptr )
  {
    v5 = (uint32_t *)((char *)a1 + 168);
    do
    {
      while ( v3[4] >= a2 )
      {
        v5 = v3;
        v3 = (uint32_t *)v3[2];
        if ( v3 == nullptr )
          goto LABEL_6;
      }
      v3 = (uint32_t *)v3[3];
    }
    while ( v3 != nullptr );
LABEL_6:
    v4 = 404;
    if ( (uint32_t *)((char *)a1 + 168) != v5 && v5[4] <= a2 )
    {
      v6 = g4_std::map_gaia_BaseServiceManager_2de1d3::opIndex((char *)a1 + 164, &a2);
      g4_std::string::assign_str(a3, v6);
      v4 = *(uint32_t *)(*a3 - 12) == 0 ? 0x194 : 0;
    }
  }
  v8 = v4;
  glwebtools::Mutex::Unlock((gaia::Janus::Self *)((char *)a1 + 156));
  return v8;
}

// ----------------------------------------------------------------------------
// Function: gaia::Janus::GetJanusRefreshToken  (binary VA: 0x14c1110)
// Original: gaia::Janus::GetJanusRefreshToken
// ----------------------------------------------------------------------------
int gaia::Janus::GetJanusRefreshToken(gaia::Janus::Self *a1, int a2, int a3)
{
  int v3;
  uint32_t *v4;
  uint32_t *v5;
  int v7;

  v3 = 404;
  gaia::Janus::UpdateTokens(a1);
  glwebtools::Mutex::Lock((gaia::Janus::Self *)((char *)a1 + 156));
  v4 = *((uint32_t **)a1 + 43);
  if ( v4 != nullptr )
  {
    v5 = (uint32_t *)((char *)a1 + 168);
    do
    {
      while ( v4[4] >= a2 )
      {
        v5 = v4;
        v4 = (uint32_t *)v4[2];
        if ( v4 == nullptr )
          goto LABEL_6;
      }
      v4 = (uint32_t *)v4[3];
    }
    while ( v4 != nullptr );
LABEL_6:
    v3 = 404;
    if ( (uint32_t *)((char *)a1 + 168) != v5
      && v5[4] <= a2
      && *(uint32_t *)(*(uint32_t *)(g4_std::map_gaia_BaseServiceManager_2de1d3::opIndex(
                                   (char *)a1 + 164,
                                   &a2)
                               + 8)
                   - 12) != 0 )
    {
      v7 = g4_std::map_gaia_BaseServiceManager_2de1d3::opIndex((char *)a1 + 164, &a2);
      LOWORD(v3) = 0;
      g4_std::string::assign_str(a3, v7 + 8);
    }
  }
  glwebtools::Mutex::Unlock((gaia::Janus::Self *)((char *)a1 + 156));
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gaia::Janus::GetJanusToken  (binary VA: 0x14c11f0)
// Original: gaia::Janus::GetJanusToken
// ----------------------------------------------------------------------------
int gaia::Janus::GetJanusToken(int a1, gaia::Janus::Self *a2, int a3)
{
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  int v6;
  typedef int _g4_t_v8;
  typedef uint32_t _g4_t_v9[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (11u + sizeof(_g4_t_v8)) > _g4_s0 ? (11u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 11u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);

  gaia::Janus::UpdateTokens(a2);
  glwebtools::Mutex::Lock((gaia::Janus::Self *)((char *)a2 + 156));
  v3 = &dword_213B814;
  v4 = *((uint32_t **)a2 + 43);
  v9[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( v4 != nullptr )
  {
    v5 = (uint32_t *)((char *)a2 + 168);
    do
    {
      while ( v4[4] >= a3 )
      {
        v5 = v4;
        v4 = (uint32_t *)v4[2];
        if ( v4 == nullptr )
          goto LABEL_6;
      }
      v4 = (uint32_t *)v4[3];
    }
    while ( v4 != nullptr );
LABEL_6:
    v3 = &dword_213B814;
    if ( (uint32_t *)((char *)a2 + 168) != v5 && v5[4] <= a3 )
    {
      v6 = g4_std::map_gaia_BaseServiceManager_2de1d3::opIndex((char *)a2 + 164, &a3);
      g4_std::string::assign_str(v9, v6);
      v3 = (uint32_t *)v9[0];
    }
  }
  if ( *(v3 - 3) != 0 )
    g4_std::string::construct_copy(a1, v9);
  else
    g4_std::string::construct_from_cstr(a1, "Token NOT Available", (int)(uintptr_t)(&v8));
  g4_std::string::Destroy(v9);
  glwebtools::Mutex::Unlock((gaia::Janus::Self *)((char *)a2 + 156));
  return a1;
}

// ----------------------------------------------------------------------------
// Function: gaia::Janus::GetJanusApprovals  (binary VA: 0x14c1310)
// Original: gaia::Janus::GetJanusApprovals
// ----------------------------------------------------------------------------
int gaia::Janus::GetJanusApprovals(uint32_t *a1, int a2, Json::Value::Self *a3)
{
  int v3;
  uint32_t *v4;
  uint32_t *v5;
  int v6;
  const char **JSONMessage;
  int v9;
  typedef char _g4_t_v10;
  typedef uint8_t _g4_t_v11[16];
  typedef uint8_t _g4_t_v12[16];
  typedef uint8_t _g4_t_v13[16];
  typedef int _g4_t_v14;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v11)) > _g4_s1 ? (28u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v12)) > _g4_s2 ? (44u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v13)) > _g4_s3 ? (60u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (76u + sizeof(_g4_t_v14)) > _g4_s4 ? (76u + sizeof(_g4_t_v14)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 44u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 60u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 76u);

  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(a1 + 39));
  Json::Value::Construct((int)(uintptr_t)(v11), (char *)&loc_6 + 1);
  gaia::BaseJSONServiceResponse::Construct((Json::Value::Self *)v13, (Json::Value::Self *)v11);
  Json::Value::opAssign(a3, (const Json::Value::Self *)v13);
  *((uint32_t *)a3 + 4) = v14;
  gaia::BaseJSONServiceResponse::Destroy((gaia::BaseJSONServiceResponse::Self *)v13);
  v3 = 404;
  Json::Value::Destroy((Json::Value::Self *)v11);
  v4 = (uint32_t *)a1[43];
  if ( v4 != nullptr )
  {
    v5 = a1 + 42;
    do
    {
      while ( v4[4] >= a2 )
      {
        v5 = v4;
        v4 = (uint32_t *)v4[2];
        if ( v4 == nullptr )
          goto LABEL_6;
      }
      v4 = (uint32_t *)v4[3];
    }
    while ( v4 != nullptr );
LABEL_6:
    v3 = 404;
    if ( a1 + 42 != v5 && v5[4] <= a2 )
    {
      Json::Value::Construct((int)(uintptr_t)(v12), nullptr);
      v6 = g4_std::map_gaia_BaseServiceManager_2de1d3::opIndex(a1 + 41, &a2);
      JSONMessage = (const char **)gaia::BaseJSONServiceResponse::GetJSONMessage((gaia::BaseJSONServiceResponse::Self *)(v6 + 12));
      v10 = Json::Value::opEq(JSONMessage, (const Json::Value::Self *)v12);
      Json::Value::Destroy((Json::Value::Self *)v12);
      if ( v10 == 0 )
      {
        LOWORD(v3) = 0;
        v9 = g4_std::map_gaia_BaseServiceManager_2de1d3::opIndex(a1 + 41, &a2);
        Json::Value::opAssign(a3, (const Json::Value::Self *)(v9 + 12));
        *((uint32_t *)a3 + 4) = *(uint32_t *)(v9 + 28);
      }
    }
  }
  glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)(a1 + 39));
  return v3;
}

// ----------------------------------------------------------------------------
// Function: gaia::Janus::Authorize  (binary VA: 0x14c1490)
// Original: gaia::Janus::Authorize
// ----------------------------------------------------------------------------
int gaia::Janus::Authorize(char **a1, int a2, char **a3, int a4, uint32_t *a5, char **a6, int a7, char **a8, int a9, gaia::GaiaRequest::Self *a10)
{
  unsigned int v10;
  int v11;
  size_t v12;
  void *i;
  void *v14;
  uint32_t *v15;
  size_t n;
  size_t v17;
  int v18;
  uint32_t *v19;
  int *v20;
  size_t v21;
  uint32_t *v22;
  int v23;
  int v24;
  int v25;
  char *v26;
  char *v27;
  uint32_t *v28;
  int *j;
  int v30;
  uint32_t *v31;
  int *k;
  int v33;
  uint32_t *v34;
  int *m;
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
  int *jj;
  gaia::ServiceRequest::Self *v47;
  int v48;
  void *v49;
  bool v50;
  int v51;
  int i3;
  void *v53;
  int v54;
  int i4;
  void *v56;
  int v57;
  int i5;
  bool v60; // di
  void *v61;
  size_t v62;
  size_t v63;
  size_t v64;
  int v65;
  int v66;
  size_t v67;
  size_t v68;
  int v69;
  int v70;
  char *v71;
  char *v72;
  void *v73;
  int v74;
  int nn;
  void *v76;
  int v77;
  int i1;
  void *v79;
  int i2;
  int v81;
  uint32_t *v82;
  size_t v83;
  size_t v84;
  size_t v85;
  int v86;
  int v87;
  size_t v88;
  size_t v89;
  int v90;
  int v91;
  void *v92;
  size_t v93;
  void *v94;
  uint32_t *v95;
  size_t v96;
  size_t v97;
  int v98;
  uint32_t *v99;
  int *v100;
  size_t v101;
  uint32_t *v102;
  int v103;
  int v104;
  void *v105;
  size_t v106;
  void *v107;
  uint32_t *v108;
  size_t v109;
  size_t v110;
  int v111;
  uint32_t *v112;
  size_t v113;
  int *v114;
  int v115;
  int v116;
  int v117;
  Json::Value::Self *v118;
  size_t v119;
  int v120;
  size_t v121;
  void *v122;
  size_t v123;
  size_t v124;
  size_t v125;
  int v126;
  int v127;
  size_t v128;
  size_t v129;
  int v130;
  int v131;
  void *v132;
  size_t v133;
  size_t v134;
  size_t v135;
  int v136;
  int v137;
  size_t v138;
  size_t v139;
  int v140;
  int v141;
  Json::Value::Self *v142;
  Json::Value::Self *v143;
  int v144;
  int v145;
  Json::Value::Self *v146;
  gaia::BaseJSONServiceResponse::Self *v147;
  int v148;
  Json::Value::Self *v149;
  int v150;
  Json::Value::Self *v151;
  const Json::Value::Self *v152;
  typedef int *_g4_t_v153;
  typedef uint32_t *_g4_t_v154;
  typedef int *_g4_t_v155;
  typedef int *_g4_t_v156;
  typedef char _g4_t_v157;
  typedef uint32_t *_g4_t_s2;
  typedef uint32_t *_g4_t_v159;
  typedef void *_g4_t_v160;
  typedef char _g4_t_v161;
  typedef char _g4_t_v162;
  typedef void *_g4_t_v163;
  typedef void *_g4_t_v164;
  typedef void *_g4_t_s1;
  typedef char *_g4_t_v166;
  typedef int *_g4_t_v167;
  typedef uint32_t *_g4_t_v168;
  typedef uint32_t *_g4_t_v169;
  typedef int *_g4_t_v170;
  typedef int *_g4_t_v171;
  typedef int _g4_t_v172;
  typedef int *_g4_t_v173;
  typedef int _g4_t_v174;
  typedef int _g4_t_ii;
  typedef char *_g4_t_v176;
  typedef size_t _g4_t_v177;
  typedef char *_g4_t_v178;
  typedef int *_g4_t_mm;
  typedef size_t _g4_t_v180;
  typedef int *_g4_t_kk;
  typedef size_t _g4_t_v182;
  typedef size_t _g4_t_v183;
  typedef size_t _g4_t_v184;
  typedef __time_t _g4_t_TimeStamp;
  typedef size_t _g4_t_v186;
  typedef glwebtools::Mutex::Self *_g4_t_v187;
  typedef uint8_t _g4_t_v188;
  typedef char _g4_t_v189;
  typedef char *_g4_t_v190;
  typedef uint32_t _g4_t_v191[4];
  typedef int _g4_t_v192;
  typedef int _g4_t_v193;
  typedef int _g4_t_v194;
  typedef int _g4_t_v195;
  typedef void *_g4_t_v196;
  typedef int _g4_t_v197;
  typedef char _g4_t_v198[4];
  typedef int _g4_t_v199;
  typedef int _g4_t_v200;
  typedef int _g4_t_v201;
  typedef int _g4_t_v202;
  typedef char _g4_t_v203[4];
  typedef int _g4_t_v204;
  typedef int _g4_t_v205;
  typedef int _g4_t_v206;
  typedef int _g4_t_v207;
  typedef int _g4_t_v208;
  typedef int _g4_t_v209;
  typedef int _g4_t_v210;
  typedef char *_g4_t_v211;
  typedef int _g4_t_v212;
  typedef char *_g4_t_v213;
  typedef int _g4_t_v214;
  typedef int _g4_t_v215;
  typedef uint32_t *_g4_t_v216;
  typedef char _g4_t_v217[4];
  typedef void *_g4_t_v218;
  typedef char _g4_t_v219[4];
  typedef char _g4_t_v220[4];
  typedef char _g4_t_v221[4];
  typedef char _g4_t_v222[4];
  typedef int _g4_t_v223;
  typedef char _g4_t_v224[4];
  typedef int _g4_t_v225;
  typedef char _g4_t_v226[4];
  typedef int _g4_t_v227;
  typedef uint8_t _g4_t_v228[16];
  typedef uint8_t _g4_t_v229[16];
  typedef uint8_t _g4_t_v230[16];
  typedef uint8_t _g4_t_v231[16];
  typedef int _g4_t_v232;
  typedef uint8_t _g4_t_v233[16];
  typedef int _g4_t_v234;
  typedef int _g4_t_v235;
  typedef int _g4_t_v236;
  typedef void *_g4_t_v237;
  typedef int *_g4_t_v238;
  typedef int *_g4_t_v239;
  typedef int _g4_t_v240;
  typedef const char *_g4_t_v241[28];
  typedef uint32_t *_g4_t_v242;
  typedef uint32_t *_g4_t_v243;
  typedef int _g4_t_v244;
  typedef uint8_t _g4_t_v245[16];
  typedef int _g4_t_v246;
  typedef int _g4_t_v247;
  typedef uint32_t *_g4_t_v248;
  typedef uint32_t *_g4_t_v249;
  typedef int _g4_t_v250;
  typedef int _g4_t_v251;
  typedef void *_g4_t_v252;
  typedef int *_g4_t_v253;
  typedef int *_g4_t_v254;
  typedef int _g4_t_v255;
  typedef int _g4_t_v256;
  typedef int _g4_t_v257;
  typedef void *_g4_t_v258;
  typedef int *_g4_t_v259;
  typedef int *_g4_t_v260;
  typedef int _g4_t_v261;
  typedef int _g4_t_v262;
  typedef int _g4_t_v263;
  typedef void *_g4_t_v264;
  typedef int *_g4_t_v265;
  typedef int *_g4_t_v266;
  typedef int _g4_t_v267;
  enum : size_t {
    _g4_s0 = 704u,
    _g4_s1 = (4u + sizeof(_g4_t_v153)) > _g4_s0 ? (4u + sizeof(_g4_t_v153)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v154)) > _g4_s1 ? (4u + sizeof(_g4_t_v154)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v155)) > _g4_s2 ? (4u + sizeof(_g4_t_v155)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v156)) > _g4_s3 ? (4u + sizeof(_g4_t_v156)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v157)) > _g4_s4 ? (20u + sizeof(_g4_t_v157)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_s2)) > _g4_s5 ? (20u + sizeof(_g4_t_s2)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v159)) > _g4_s6 ? (20u + sizeof(_g4_t_v159)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v160)) > _g4_s7 ? (20u + sizeof(_g4_t_v160)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v161)) > _g4_s8 ? (20u + sizeof(_g4_t_v161)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v162)) > _g4_s9 ? (20u + sizeof(_g4_t_v162)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v163)) > _g4_s10 ? (20u + sizeof(_g4_t_v163)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_v164)) > _g4_s11 ? (20u + sizeof(_g4_t_v164)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_s1)) > _g4_s12 ? (24u + sizeof(_g4_t_s1)) : _g4_s12,
    _g4_s14 = (24u + sizeof(_g4_t_v166)) > _g4_s13 ? (24u + sizeof(_g4_t_v166)) : _g4_s13,
    _g4_s15 = (24u + sizeof(_g4_t_v167)) > _g4_s14 ? (24u + sizeof(_g4_t_v167)) : _g4_s14,
    _g4_s16 = (24u + sizeof(_g4_t_v168)) > _g4_s15 ? (24u + sizeof(_g4_t_v168)) : _g4_s15,
    _g4_s17 = (24u + sizeof(_g4_t_v169)) > _g4_s16 ? (24u + sizeof(_g4_t_v169)) : _g4_s16,
    _g4_s18 = (24u + sizeof(_g4_t_v170)) > _g4_s17 ? (24u + sizeof(_g4_t_v170)) : _g4_s17,
    _g4_s19 = (24u + sizeof(_g4_t_v171)) > _g4_s18 ? (24u + sizeof(_g4_t_v171)) : _g4_s18,
    _g4_s20 = (28u + sizeof(_g4_t_v172)) > _g4_s19 ? (28u + sizeof(_g4_t_v172)) : _g4_s19,
    _g4_s21 = (28u + sizeof(_g4_t_v173)) > _g4_s20 ? (28u + sizeof(_g4_t_v173)) : _g4_s20,
    _g4_s22 = (28u + sizeof(_g4_t_v174)) > _g4_s21 ? (28u + sizeof(_g4_t_v174)) : _g4_s21,
    _g4_s23 = (28u + sizeof(_g4_t_ii)) > _g4_s22 ? (28u + sizeof(_g4_t_ii)) : _g4_s22,
    _g4_s24 = (28u + sizeof(_g4_t_v176)) > _g4_s23 ? (28u + sizeof(_g4_t_v176)) : _g4_s23,
    _g4_s25 = (32u + sizeof(_g4_t_v177)) > _g4_s24 ? (32u + sizeof(_g4_t_v177)) : _g4_s24,
    _g4_s26 = (32u + sizeof(_g4_t_v178)) > _g4_s25 ? (32u + sizeof(_g4_t_v178)) : _g4_s25,
    _g4_s27 = (32u + sizeof(_g4_t_mm)) > _g4_s26 ? (32u + sizeof(_g4_t_mm)) : _g4_s26,
    _g4_s28 = (32u + sizeof(_g4_t_v180)) > _g4_s27 ? (32u + sizeof(_g4_t_v180)) : _g4_s27,
    _g4_s29 = (32u + sizeof(_g4_t_kk)) > _g4_s28 ? (32u + sizeof(_g4_t_kk)) : _g4_s28,
    _g4_s30 = (40u + sizeof(_g4_t_v182)) > _g4_s29 ? (40u + sizeof(_g4_t_v182)) : _g4_s29,
    _g4_s31 = (40u + sizeof(_g4_t_v183)) > _g4_s30 ? (40u + sizeof(_g4_t_v183)) : _g4_s30,
    _g4_s32 = (40u + sizeof(_g4_t_v184)) > _g4_s31 ? (40u + sizeof(_g4_t_v184)) : _g4_s31,
    _g4_s33 = (40u + sizeof(_g4_t_TimeStamp)) > _g4_s32 ? (40u + sizeof(_g4_t_TimeStamp)) : _g4_s32,
    _g4_s34 = (52u + sizeof(_g4_t_v186)) > _g4_s33 ? (52u + sizeof(_g4_t_v186)) : _g4_s33,
    _g4_s35 = (56u + sizeof(_g4_t_v187)) > _g4_s34 ? (56u + sizeof(_g4_t_v187)) : _g4_s34,
    _g4_s36 = (80u + sizeof(_g4_t_v188)) > _g4_s35 ? (80u + sizeof(_g4_t_v188)) : _g4_s35,
    _g4_s37 = (80u + sizeof(_g4_t_v189)) > _g4_s36 ? (80u + sizeof(_g4_t_v189)) : _g4_s36,
    _g4_s38 = (104u + sizeof(_g4_t_v190)) > _g4_s37 ? (104u + sizeof(_g4_t_v190)) : _g4_s37,
    _g4_s39 = (108u + sizeof(_g4_t_v191)) > _g4_s38 ? (108u + sizeof(_g4_t_v191)) : _g4_s38,
    _g4_s40 = (124u + sizeof(_g4_t_v192)) > _g4_s39 ? (124u + sizeof(_g4_t_v192)) : _g4_s39,
    _g4_s41 = (128u + sizeof(_g4_t_v193)) > _g4_s40 ? (128u + sizeof(_g4_t_v193)) : _g4_s40,
    _g4_s42 = (132u + sizeof(_g4_t_v194)) > _g4_s41 ? (132u + sizeof(_g4_t_v194)) : _g4_s41,
    _g4_s43 = (136u + sizeof(_g4_t_v195)) > _g4_s42 ? (136u + sizeof(_g4_t_v195)) : _g4_s42,
    _g4_s44 = (140u + sizeof(_g4_t_v196)) > _g4_s43 ? (140u + sizeof(_g4_t_v196)) : _g4_s43,
    _g4_s45 = (144u + sizeof(_g4_t_v197)) > _g4_s44 ? (144u + sizeof(_g4_t_v197)) : _g4_s44,
    _g4_s46 = (148u + sizeof(_g4_t_v198)) > _g4_s45 ? (148u + sizeof(_g4_t_v198)) : _g4_s45,
    _g4_s47 = (152u + sizeof(_g4_t_v199)) > _g4_s46 ? (152u + sizeof(_g4_t_v199)) : _g4_s46,
    _g4_s48 = (156u + sizeof(_g4_t_v200)) > _g4_s47 ? (156u + sizeof(_g4_t_v200)) : _g4_s47,
    _g4_s49 = (160u + sizeof(_g4_t_v201)) > _g4_s48 ? (160u + sizeof(_g4_t_v201)) : _g4_s48,
    _g4_s50 = (164u + sizeof(_g4_t_v202)) > _g4_s49 ? (164u + sizeof(_g4_t_v202)) : _g4_s49,
    _g4_s51 = (168u + sizeof(_g4_t_v203)) > _g4_s50 ? (168u + sizeof(_g4_t_v203)) : _g4_s50,
    _g4_s52 = (172u + sizeof(_g4_t_v204)) > _g4_s51 ? (172u + sizeof(_g4_t_v204)) : _g4_s51,
    _g4_s53 = (176u + sizeof(_g4_t_v205)) > _g4_s52 ? (176u + sizeof(_g4_t_v205)) : _g4_s52,
    _g4_s54 = (180u + sizeof(_g4_t_v206)) > _g4_s53 ? (180u + sizeof(_g4_t_v206)) : _g4_s53,
    _g4_s55 = (184u + sizeof(_g4_t_v207)) > _g4_s54 ? (184u + sizeof(_g4_t_v207)) : _g4_s54,
    _g4_s56 = (188u + sizeof(_g4_t_v208)) > _g4_s55 ? (188u + sizeof(_g4_t_v208)) : _g4_s55,
    _g4_s57 = (192u + sizeof(_g4_t_v209)) > _g4_s56 ? (192u + sizeof(_g4_t_v209)) : _g4_s56,
    _g4_s58 = (196u + sizeof(_g4_t_v210)) > _g4_s57 ? (196u + sizeof(_g4_t_v210)) : _g4_s57,
    _g4_s59 = (200u + sizeof(_g4_t_v211)) > _g4_s58 ? (200u + sizeof(_g4_t_v211)) : _g4_s58,
    _g4_s60 = (204u + sizeof(_g4_t_v212)) > _g4_s59 ? (204u + sizeof(_g4_t_v212)) : _g4_s59,
    _g4_s61 = (208u + sizeof(_g4_t_v213)) > _g4_s60 ? (208u + sizeof(_g4_t_v213)) : _g4_s60,
    _g4_s62 = (212u + sizeof(_g4_t_v214)) > _g4_s61 ? (212u + sizeof(_g4_t_v214)) : _g4_s61,
    _g4_s63 = (216u + sizeof(_g4_t_v215)) > _g4_s62 ? (216u + sizeof(_g4_t_v215)) : _g4_s62,
    _g4_s64 = (220u + sizeof(_g4_t_v216)) > _g4_s63 ? (220u + sizeof(_g4_t_v216)) : _g4_s63,
    _g4_s65 = (224u + sizeof(_g4_t_v217)) > _g4_s64 ? (224u + sizeof(_g4_t_v217)) : _g4_s64,
    _g4_s66 = (228u + sizeof(_g4_t_v218)) > _g4_s65 ? (228u + sizeof(_g4_t_v218)) : _g4_s65,
    _g4_s67 = (232u + sizeof(_g4_t_v219)) > _g4_s66 ? (232u + sizeof(_g4_t_v219)) : _g4_s66,
    _g4_s68 = (236u + sizeof(_g4_t_v220)) > _g4_s67 ? (236u + sizeof(_g4_t_v220)) : _g4_s67,
    _g4_s69 = (240u + sizeof(_g4_t_v221)) > _g4_s68 ? (240u + sizeof(_g4_t_v221)) : _g4_s68,
    _g4_s70 = (244u + sizeof(_g4_t_v222)) > _g4_s69 ? (244u + sizeof(_g4_t_v222)) : _g4_s69,
    _g4_s71 = (248u + sizeof(_g4_t_v223)) > _g4_s70 ? (248u + sizeof(_g4_t_v223)) : _g4_s70,
    _g4_s72 = (252u + sizeof(_g4_t_v224)) > _g4_s71 ? (252u + sizeof(_g4_t_v224)) : _g4_s71,
    _g4_s73 = (256u + sizeof(_g4_t_v225)) > _g4_s72 ? (256u + sizeof(_g4_t_v225)) : _g4_s72,
    _g4_s74 = (260u + sizeof(_g4_t_v226)) > _g4_s73 ? (260u + sizeof(_g4_t_v226)) : _g4_s73,
    _g4_s75 = (264u + sizeof(_g4_t_v227)) > _g4_s74 ? (264u + sizeof(_g4_t_v227)) : _g4_s74,
    _g4_s76 = (268u + sizeof(_g4_t_v228)) > _g4_s75 ? (268u + sizeof(_g4_t_v228)) : _g4_s75,
    _g4_s77 = (284u + sizeof(_g4_t_v229)) > _g4_s76 ? (284u + sizeof(_g4_t_v229)) : _g4_s76,
    _g4_s78 = (300u + sizeof(_g4_t_v230)) > _g4_s77 ? (300u + sizeof(_g4_t_v230)) : _g4_s77,
    _g4_s79 = (316u + sizeof(_g4_t_v231)) > _g4_s78 ? (316u + sizeof(_g4_t_v231)) : _g4_s78,
    _g4_s80 = (332u + sizeof(_g4_t_v232)) > _g4_s79 ? (332u + sizeof(_g4_t_v232)) : _g4_s79,
    _g4_s81 = (336u + sizeof(_g4_t_v233)) > _g4_s80 ? (336u + sizeof(_g4_t_v233)) : _g4_s80,
    _g4_s82 = (352u + sizeof(_g4_t_v234)) > _g4_s81 ? (352u + sizeof(_g4_t_v234)) : _g4_s81,
    _g4_s83 = (356u + sizeof(_g4_t_v235)) > _g4_s82 ? (356u + sizeof(_g4_t_v235)) : _g4_s82,
    _g4_s84 = (360u + sizeof(_g4_t_v236)) > _g4_s83 ? (360u + sizeof(_g4_t_v236)) : _g4_s83,
    _g4_s85 = (364u + sizeof(_g4_t_v237)) > _g4_s84 ? (364u + sizeof(_g4_t_v237)) : _g4_s84,
    _g4_s86 = (368u + sizeof(_g4_t_v238)) > _g4_s85 ? (368u + sizeof(_g4_t_v238)) : _g4_s85,
    _g4_s87 = (372u + sizeof(_g4_t_v239)) > _g4_s86 ? (372u + sizeof(_g4_t_v239)) : _g4_s86,
    _g4_s88 = (376u + sizeof(_g4_t_v240)) > _g4_s87 ? (376u + sizeof(_g4_t_v240)) : _g4_s87,
    _g4_s89 = (380u + sizeof(_g4_t_v241)) > _g4_s88 ? (380u + sizeof(_g4_t_v241)) : _g4_s88,
    _g4_s90 = (492u + sizeof(_g4_t_v242)) > _g4_s89 ? (492u + sizeof(_g4_t_v242)) : _g4_s89,
    _g4_s91 = (496u + sizeof(_g4_t_v243)) > _g4_s90 ? (496u + sizeof(_g4_t_v243)) : _g4_s90,
    _g4_s92 = (500u + sizeof(_g4_t_v244)) > _g4_s91 ? (500u + sizeof(_g4_t_v244)) : _g4_s91,
    _g4_s93 = (504u + sizeof(_g4_t_v245)) > _g4_s92 ? (504u + sizeof(_g4_t_v245)) : _g4_s92,
    _g4_s94 = (520u + sizeof(_g4_t_v246)) > _g4_s93 ? (520u + sizeof(_g4_t_v246)) : _g4_s93,
    _g4_s95 = (524u + sizeof(_g4_t_v247)) > _g4_s94 ? (524u + sizeof(_g4_t_v247)) : _g4_s94,
    _g4_s96 = (528u + sizeof(_g4_t_v248)) > _g4_s95 ? (528u + sizeof(_g4_t_v248)) : _g4_s95,
    _g4_s97 = (532u + sizeof(_g4_t_v249)) > _g4_s96 ? (532u + sizeof(_g4_t_v249)) : _g4_s96,
    _g4_s98 = (536u + sizeof(_g4_t_v250)) > _g4_s97 ? (536u + sizeof(_g4_t_v250)) : _g4_s97,
    _g4_s99 = (540u + sizeof(_g4_t_v251)) > _g4_s98 ? (540u + sizeof(_g4_t_v251)) : _g4_s98,
    _g4_s100 = (544u + sizeof(_g4_t_v252)) > _g4_s99 ? (544u + sizeof(_g4_t_v252)) : _g4_s99,
    _g4_s101 = (548u + sizeof(_g4_t_v253)) > _g4_s100 ? (548u + sizeof(_g4_t_v253)) : _g4_s100,
    _g4_s102 = (552u + sizeof(_g4_t_v254)) > _g4_s101 ? (552u + sizeof(_g4_t_v254)) : _g4_s101,
    _g4_s103 = (556u + sizeof(_g4_t_v255)) > _g4_s102 ? (556u + sizeof(_g4_t_v255)) : _g4_s102,
    _g4_s104 = (560u + sizeof(_g4_t_v256)) > _g4_s103 ? (560u + sizeof(_g4_t_v256)) : _g4_s103,
    _g4_s105 = (564u + sizeof(_g4_t_v257)) > _g4_s104 ? (564u + sizeof(_g4_t_v257)) : _g4_s104,
    _g4_s106 = (568u + sizeof(_g4_t_v258)) > _g4_s105 ? (568u + sizeof(_g4_t_v258)) : _g4_s105,
    _g4_s107 = (572u + sizeof(_g4_t_v259)) > _g4_s106 ? (572u + sizeof(_g4_t_v259)) : _g4_s106,
    _g4_s108 = (576u + sizeof(_g4_t_v260)) > _g4_s107 ? (576u + sizeof(_g4_t_v260)) : _g4_s107,
    _g4_s109 = (580u + sizeof(_g4_t_v261)) > _g4_s108 ? (580u + sizeof(_g4_t_v261)) : _g4_s108,
    _g4_s110 = (584u + sizeof(_g4_t_v262)) > _g4_s109 ? (584u + sizeof(_g4_t_v262)) : _g4_s109,
    _g4_s111 = (588u + sizeof(_g4_t_v263)) > _g4_s110 ? (588u + sizeof(_g4_t_v263)) : _g4_s110,
    _g4_s112 = (592u + sizeof(_g4_t_v264)) > _g4_s111 ? (592u + sizeof(_g4_t_v264)) : _g4_s111,
    _g4_s113 = (596u + sizeof(_g4_t_v265)) > _g4_s112 ? (596u + sizeof(_g4_t_v265)) : _g4_s112,
    _g4_s114 = (600u + sizeof(_g4_t_v266)) > _g4_s113 ? (600u + sizeof(_g4_t_v266)) : _g4_s113,
    _g4_s115 = (604u + sizeof(_g4_t_v267)) > _g4_s114 ? (604u + sizeof(_g4_t_v267)) : _g4_s114
  };
  alignas(16) uint8_t _g4_sf[_g4_s115];
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 4u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 4u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 4u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 4u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 20u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 20u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 20u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 20u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 20u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 20u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 20u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 20u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 24u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 24u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 24u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 24u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 24u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 24u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 24u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 28u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 28u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 28u);
  _g4_t_ii &ii = *reinterpret_cast<_g4_t_ii *>(_g4_sf + 28u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 28u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 32u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 32u);
  _g4_t_mm &mm = *reinterpret_cast<_g4_t_mm *>(_g4_sf + 32u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 32u);
  _g4_t_kk &kk = *reinterpret_cast<_g4_t_kk *>(_g4_sf + 32u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 40u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 40u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 40u);
  _g4_t_TimeStamp &TimeStamp = *reinterpret_cast<_g4_t_TimeStamp *>(_g4_sf + 40u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 52u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 56u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 80u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 80u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 104u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 108u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 124u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 128u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 132u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 136u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 140u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 144u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 148u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 152u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 156u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 160u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 164u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 168u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 172u);
  _g4_t_v205 &v205 = *reinterpret_cast<_g4_t_v205 *>(_g4_sf + 176u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 180u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 184u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 188u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 192u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 196u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 200u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 204u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 208u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 212u);
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 216u);
  _g4_t_v216 &v216 = *reinterpret_cast<_g4_t_v216 *>(_g4_sf + 220u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 224u);
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 228u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 232u);
  _g4_t_v220 &v220 = *reinterpret_cast<_g4_t_v220 *>(_g4_sf + 236u);
  _g4_t_v221 &v221 = *reinterpret_cast<_g4_t_v221 *>(_g4_sf + 240u);
  _g4_t_v222 &v222 = *reinterpret_cast<_g4_t_v222 *>(_g4_sf + 244u);
  _g4_t_v223 &v223 = *reinterpret_cast<_g4_t_v223 *>(_g4_sf + 248u);
  _g4_t_v224 &v224 = *reinterpret_cast<_g4_t_v224 *>(_g4_sf + 252u);
  _g4_t_v225 &v225 = *reinterpret_cast<_g4_t_v225 *>(_g4_sf + 256u);
  _g4_t_v226 &v226 = *reinterpret_cast<_g4_t_v226 *>(_g4_sf + 260u);
  _g4_t_v227 &v227 = *reinterpret_cast<_g4_t_v227 *>(_g4_sf + 264u);
  _g4_t_v228 &v228 = *reinterpret_cast<_g4_t_v228 *>(_g4_sf + 268u);
  _g4_t_v229 &v229 = *reinterpret_cast<_g4_t_v229 *>(_g4_sf + 284u);
  _g4_t_v230 &v230 = *reinterpret_cast<_g4_t_v230 *>(_g4_sf + 300u);
  _g4_t_v231 &v231 = *reinterpret_cast<_g4_t_v231 *>(_g4_sf + 316u);
  _g4_t_v232 &v232 = *reinterpret_cast<_g4_t_v232 *>(_g4_sf + 332u);
  _g4_t_v233 &v233 = *reinterpret_cast<_g4_t_v233 *>(_g4_sf + 336u);
  _g4_t_v234 &v234 = *reinterpret_cast<_g4_t_v234 *>(_g4_sf + 352u);
  _g4_t_v235 &v235 = *reinterpret_cast<_g4_t_v235 *>(_g4_sf + 356u);
  _g4_t_v236 &v236 = *reinterpret_cast<_g4_t_v236 *>(_g4_sf + 360u);
  _g4_t_v237 &v237 = *reinterpret_cast<_g4_t_v237 *>(_g4_sf + 364u);
  _g4_t_v238 &v238 = *reinterpret_cast<_g4_t_v238 *>(_g4_sf + 368u);
  _g4_t_v239 &v239 = *reinterpret_cast<_g4_t_v239 *>(_g4_sf + 372u);
  _g4_t_v240 &v240 = *reinterpret_cast<_g4_t_v240 *>(_g4_sf + 376u);
  _g4_t_v241 &v241 = *reinterpret_cast<_g4_t_v241 *>(_g4_sf + 380u);
  _g4_t_v242 &v242 = *reinterpret_cast<_g4_t_v242 *>(_g4_sf + 492u);
  _g4_t_v243 &v243 = *reinterpret_cast<_g4_t_v243 *>(_g4_sf + 496u);
  _g4_t_v244 &v244 = *reinterpret_cast<_g4_t_v244 *>(_g4_sf + 500u);
  _g4_t_v245 &v245 = *reinterpret_cast<_g4_t_v245 *>(_g4_sf + 504u);
  _g4_t_v246 &v246 = *reinterpret_cast<_g4_t_v246 *>(_g4_sf + 520u);
  _g4_t_v247 &v247 = *reinterpret_cast<_g4_t_v247 *>(_g4_sf + 524u);
  _g4_t_v248 &v248 = *reinterpret_cast<_g4_t_v248 *>(_g4_sf + 528u);
  _g4_t_v249 &v249 = *reinterpret_cast<_g4_t_v249 *>(_g4_sf + 532u);
  _g4_t_v250 &v250 = *reinterpret_cast<_g4_t_v250 *>(_g4_sf + 536u);
  _g4_t_v251 &v251 = *reinterpret_cast<_g4_t_v251 *>(_g4_sf + 540u);
  _g4_t_v252 &v252 = *reinterpret_cast<_g4_t_v252 *>(_g4_sf + 544u);
  _g4_t_v253 &v253 = *reinterpret_cast<_g4_t_v253 *>(_g4_sf + 548u);
  _g4_t_v254 &v254 = *reinterpret_cast<_g4_t_v254 *>(_g4_sf + 552u);
  _g4_t_v255 &v255 = *reinterpret_cast<_g4_t_v255 *>(_g4_sf + 556u);
  _g4_t_v256 &v256 = *reinterpret_cast<_g4_t_v256 *>(_g4_sf + 560u);
  _g4_t_v257 &v257 = *reinterpret_cast<_g4_t_v257 *>(_g4_sf + 564u);
  _g4_t_v258 &v258 = *reinterpret_cast<_g4_t_v258 *>(_g4_sf + 568u);
  _g4_t_v259 &v259 = *reinterpret_cast<_g4_t_v259 *>(_g4_sf + 572u);
  _g4_t_v260 &v260 = *reinterpret_cast<_g4_t_v260 *>(_g4_sf + 576u);
  _g4_t_v261 &v261 = *reinterpret_cast<_g4_t_v261 *>(_g4_sf + 580u);
  _g4_t_v262 &v262 = *reinterpret_cast<_g4_t_v262 *>(_g4_sf + 584u);
  _g4_t_v263 &v263 = *reinterpret_cast<_g4_t_v263 *>(_g4_sf + 588u);
  _g4_t_v264 &v264 = *reinterpret_cast<_g4_t_v264 *>(_g4_sf + 592u);
  _g4_t_v265 &v265 = *reinterpret_cast<_g4_t_v265 *>(_g4_sf + 596u);
  _g4_t_v266 &v266 = *reinterpret_cast<_g4_t_v266 *>(_g4_sf + 600u);
  _g4_t_v267 &v267 = *reinterpret_cast<_g4_t_v267 *>(_g4_sf + 604u);

  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(a1 + 47));
  if ( (unsigned int)a4 > 0x13 )
  {
    v174 = -22;
    goto LABEL_119;
  }
  v10 = 0;
  gaia::Janus::UpdateTokens((gaia::Janus::Self *)a1);
  v238 = &v236;
  v239 = &v236;
  v236 = 0;
  v237 = nullptr;
  v240 = 0;
  v11 = sub_1938090((int)(uintptr_t)(a5), " ", 0, 1u);
  v172 = v11;
  while ( 1 )
  {
    sub_193A6F0(&v196, a5, v10, v11);
    if ( v237 != nullptr )
    {
      s1 = v196;
      v12 = *((uint32_t *)v196 - 3);
      for ( i = v237; ; i = v14 )
      {
        v15 = *((uint32_t **)i + 4);
        n = v12;
        v17 = *(v15 - 3);
        v153 = (int *)i;
        if ( v17 <= v12 )
          n = *(v15 - 3);
        v177 = n;
        v18 = memcmp(s1, *((const void **)i + 4), n);
        if ( v18 == 0 )
          v18 = v12 - v17;
        if ( v18 < 0 )
        {
          v14 = (void *)v153[2];
          v157 = 1;
          if ( v14 == nullptr )
            goto LABEL_13;
        }
        else
        {
          v14 = (void *)v153[3];
          v157 = 0;
          if ( v14 == nullptr )
          {
LABEL_13:
            v19 = v15;
            v20 = v153;
            v21 = v177;
            v22 = v19;
            if ( v157 == 0 )
              goto LABEL_14;
            goto LABEL_21;
          }
        }
      }
    }
    v20 = &v236;
LABEL_21:
    if ( v238 == v20 )
      goto LABEL_25;
    v25 = sub_19048F0(v20);
    s1 = v196;
    v12 = *((uint32_t *)v196 - 3);
    v22 = *(uint32_t **)(v25 + 16);
    v21 = v12;
    v17 = *(v22 - 3);
    if ( v17 <= v12 )
      v21 = *(v22 - 3);
LABEL_14:
    v23 = memcmp(v22, s1, v21);
    v24 = v17 - v12;
    if ( v23 == 0 )
      v23 = v24;
    if ( v23 < 0 )
LABEL_25:
      g4_std::Rb_tree_string_string_Identity_s_127648::M_insert(v191);
    g4_std::string::Destroy(&v196);
    if ( v172 == -1 )
      break;
    v10 = v172 + 1;
    v172 = sub_1938090((int)(uintptr_t)(a5), " ", v172 + 1, 1u);
    v11 = v172 - v10;
    if ( v10 > *(uint32_t *)(*a5 - 12) )
LABEL_262:
      sub_1900210("basic_string::substr");
  }
  v242 = &dword_213B814;
  v243 = &dword_213B814;
  v244 = (int)(uintptr_t)(&dword_213B814);
  gaia::BaseJSONServiceResponse::Construct((gaia::BaseJSONServiceResponse::Self *)v245);
  v253 = &v251;
  v254 = &v251;
  v248 = &dword_213B814;
  v249 = &dword_213B814;
  v265 = &v263;
  v266 = &v263;
  v187 = (glwebtools::Mutex::Self *)(a1 + 39);
  v251 = 0;
  v252 = nullptr;
  v255 = 0;
  v257 = 0;
  v258 = nullptr;
  v261 = 0;
  v259 = &v257;
  v260 = &v257;
  v263 = 0;
  v264 = nullptr;
  v267 = 0;
  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(a1 + 39));
  v26 = (char *)(a1 + 42);
  v190 = (char *)(a1 + 42);
  v27 = a1[43];
  if ( v27 != nullptr )
  {
    do
    {
      while ( a4 <= *((uint32_t *)v27 + 4) )
      {
        v26 = v27;
        v27 = *((char **)v27 + 2);
        if ( v27 == nullptr )
          goto LABEL_31;
      }
      v27 = *((char **)v27 + 3);
    }
    while ( v27 != nullptr );
LABEL_31:
    v178 = v26;
    if ( v190 != v26 && a4 >= *((uint32_t *)v26 + 4) )
    {
      g4_std::string::assign_str(&v242, v26 + 20);
      g4_std::string::assign_str(&v243, v178 + 24);
      g4_std::string::assign_str(&v244, v178 + 28);
      Json::Value::opAssign((Json::Value::Self *)v245, (const Json::Value::Self *)(v178 + 32));
      v246 = *((uint32_t *)v178 + 12);
      v247 = *((uint32_t *)v178 + 13);
      g4_std::string::assign_str(&v248, v178 + 56);
      g4_std::string::assign_str(&v249, v178 + 60);
      if ( &v250 != (int *)(v178 + 64) )
      {
        g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_erase(
          (int)(uintptr_t)(&v250),
          v252);
        v253 = &v251;
        v254 = &v251;
        v252 = nullptr;
        v255 = 0;
        if ( *((uint32_t *)v178 + 18) != 0 )
        {
          v28 = (uint32_t *)g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_copy(
                            &v250,
                            *((uint32_t *)v178 + 18),
                            &v251);
          v252 = v28;
          for ( j = (int *)(v28); j[2] != 0; j = (int *)j[2] )
            ;
          v253 = j;
          while ( v28[3] != 0 )
            v28 = (uint32_t *)v28[3];
          v254 = (int *)(v28);
          v255 = *((uint32_t *)v178 + 21);
        }
      }
      if ( &v256 != (int *)(v178 + 88) )
      {
        g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_erase(
          (int)(uintptr_t)(&v256),
          v258);
        v259 = &v257;
        v258 = nullptr;
        v260 = &v257;
        v261 = 0;
        v30 = *((uint32_t *)v178 + 24);
        if ( v30 != 0 )
        {
          v31 = (uint32_t *)g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_copy(
                            &v256,
                            v30,
                            &v257);
          v258 = v31;
          for ( k = (int *)(v31); k[2] != 0; k = (int *)k[2] )
            ;
          v259 = k;
          while ( v31[3] != 0 )
            v31 = (uint32_t *)v31[3];
          v260 = (int *)(v31);
          v261 = *((uint32_t *)v178 + 27);
        }
      }
      if ( &v262 != (int *)(v178 + 112) )
      {
        g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_erase(
          (int)(uintptr_t)(&v262),
          v264);
        v264 = nullptr;
        v265 = &v263;
        v266 = &v263;
        v267 = 0;
        v33 = *((uint32_t *)v178 + 30);
        if ( v33 != 0 )
        {
          v34 = (uint32_t *)g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_copy(
                            &v262,
                            v33,
                            &v263);
          v264 = v34;
          for ( m = (int *)(v34); m[2] != 0; m = (int *)m[2] )
            ;
          v265 = m;
          while ( v34[3] != 0 )
            v34 = (uint32_t *)v34[3];
          v266 = (int *)(v34);
          v267 = *((uint32_t *)v178 + 33);
        }
      }
      v173 = v238;
      if ( v238 == &v236 )
      {
        v174 = 403;
LABEL_79:
        glwebtools::Mutex::Unlock(v187);
        goto LABEL_118;
      }
      v188 = 1;
      v182 = (size_t)(v178 + 68);
      while ( 1 )
      {
        v36 = *((uint32_t *)v178 + 30);
        if ( v36 != 0 )
        {
          v166 = v178 + 116;
          s2 = (uint32_t *)v173[4];
          v37 = *(s2 - 3);
          do
          {
            while ( 1 )
            {
              v38 = *(uint32_t *)(*(uint32_t *)(v36 + 16) - 12);
              v39 = v38;
              if ( v37 <= v38 )
                v39 = v37;
              v40 = v38 - v37;
              v41 = memcmp(*(const void **)(v36 + 16), s2, v39);
              if ( v41 == 0 )
                v41 = v40;
              if ( v41 < 0 )
                break;
              v166 = (char *)v36;
              v36 = *(uint32_t *)(v36 + 8);
              if ( v36 == 0 )
                goto LABEL_71;
            }
            v36 = *(uint32_t *)(v36 + 12);
          }
          while ( v36 != 0 );
LABEL_71:
          if ( v178 + 116 != v166 )
          {
            v42 = *(uint32_t *)(*((uint32_t *)v166 + 4) - 12);
            v43 = v42;
            if ( v37 <= v42 )
              v43 = v37;
            v44 = v37 - v42;
            v45 = memcmp(s2, *((const void **)v166 + 4), v43);
            if ( v45 == 0 )
              v45 = v44;
            if ( v45 >= 0 )
              goto LABEL_77;
          }
        }
        v81 = *((uint32_t *)v178 + 18);
        if ( v81 == 0 )
          break;
        v160 = v178 + 68;
        v82 = (uint32_t *)v173[4];
        v83 = *(v82 - 3);
        do
        {
          while ( 1 )
          {
            v84 = *(uint32_t *)(*(uint32_t *)(v81 + 16) - 12);
            v85 = v84;
            v154 = v82;
            if ( v83 <= v84 )
              v85 = v83;
            v86 = v84 - v83;
            v87 = memcmp(*(const void **)(v81 + 16), v82, v85);
            v82 = v154;
            if ( v87 == 0 )
              v87 = v86;
            if ( v87 < 0 )
              break;
            v160 = (void *)v81;
            v81 = *(uint32_t *)(v81 + 8);
            if ( v81 == 0 )
              goto LABEL_188;
          }
          v81 = *(uint32_t *)(v81 + 12);
        }
        while ( v81 != 0 );
LABEL_188:
        if ( (void *)v182 == v160 )
          break;
        v88 = *(uint32_t *)(*((uint32_t *)v160 + 4) - 12);
        v89 = v88;
        if ( v83 <= v88 )
          v89 = v83;
        v90 = v83 - v88;
        v91 = memcmp(v154, *((const void **)v160 + 4), v89);
        if ( v91 == 0 )
          v91 = v90;
        if ( v91 < 0 )
          break;
        v188 = 0;
LABEL_77:
        v173 = (int *)sub_19048E0(v173);
        if ( v173 == &v236 )
        {
          v174 = (v188 << 31 >> 31) & 0x193;
          goto LABEL_79;
        }
      }
      for ( ii = *((uint32_t *)v178 + 19); ii != v182; ii = sub_1904890(ii) )
      {
        if ( v237 != nullptr )
        {
          v92 = v237;
          v168 = *(uint32_t **)(ii + 16);
          v93 = *(v168 - 3);
          while ( 1 )
          {
            v95 = *((uint32_t **)v92 + 4);
            v96 = *(v95 - 3);
            v97 = v96;
            v155 = (int *)v92;
            if ( v93 <= v96 )
              v97 = v93;
            v186 = v97;
            v98 = memcmp(v168, *((const void **)v92 + 4), v97);
            if ( v98 == 0 )
              v98 = v93 - v96;
            if ( v98 < 0 )
            {
              v94 = (void *)v155[2];
              v161 = 1;
              if ( v94 == nullptr )
                goto LABEL_208;
            }
            else
            {
              v94 = (void *)v155[3];
              v161 = 0;
              if ( v94 == nullptr )
              {
LABEL_208:
                v99 = v95;
                v100 = v155;
                v101 = v186;
                v102 = v99;
                if ( v161 == 0 )
                  goto LABEL_209;
                goto LABEL_236;
              }
            }
            v92 = v94;
          }
        }
        v100 = &v236;
LABEL_236:
        if ( v238 != v100 )
        {
          v117 = sub_19048F0(v100);
          v168 = *(uint32_t **)(ii + 16);
          v93 = *(v168 - 3);
          v102 = *(uint32_t **)(v117 + 16);
          v96 = *(v102 - 3);
          v101 = v96;
          if ( v93 <= v96 )
            v101 = *(v168 - 3);
LABEL_209:
          v103 = memcmp(v102, v168, v101);
          v104 = v96 - v93;
          if ( v103 == 0 )
            v103 = v104;
          if ( v103 >= 0 )
            continue;
        }
        g4_std::Rb_tree_string_string_Identity_s_127648::M_insert(v191);
      }
      v189 = 1;
      v176 = *((char **)v178 + 25);
      if ( v176 != v178 + 92 )
      {
        do
        {
          if ( v237 != nullptr )
          {
            v105 = v237;
            v169 = *((uint32_t **)v176 + 4);
            v106 = *(v169 - 3);
            while ( 1 )
            {
              v108 = *((uint32_t **)v105 + 4);
              v109 = v106;
              v110 = *(v108 - 3);
              v156 = (int *)v105;
              if ( v110 <= v106 )
                v109 = *(v108 - 3);
              v184 = v109;
              v111 = memcmp(v169, *((const void **)v105 + 4), v109);
              if ( v111 == 0 )
                v111 = v106 - v110;
              if ( v111 < 0 )
              {
                v107 = (void *)v156[2];
                v162 = 1;
                if ( v107 == nullptr )
                  goto LABEL_224;
              }
              else
              {
                v107 = (void *)v156[3];
                v162 = 0;
                if ( v107 == nullptr )
                {
LABEL_224:
                  v112 = v108;
                  v113 = v184;
                  v114 = v156;
                  if ( v162 == 0 )
                    goto LABEL_225;
                  goto LABEL_231;
                }
              }
              v105 = v107;
            }
          }
          v114 = &v236;
LABEL_231:
          if ( v238 == v114 )
            goto LABEL_241;
          v112 = *(uint32_t **)(sub_19048F0(v114) + 16);
          v110 = *(v112 - 3);
          v169 = *((uint32_t **)v176 + 4);
          v106 = *(v169 - 3);
          v113 = v106;
          if ( v110 <= v106 )
            v113 = *(v112 - 3);
LABEL_225:
          v115 = memcmp(v112, v169, v113);
          v116 = v110 - v106;
          if ( v115 == 0 )
            v115 = v116;
          if ( v115 < 0 )
LABEL_241:
            g4_std::Rb_tree_string_string_Identity_s_127648::M_insert(v191);
          v176 = (char *)sub_1904890(v176);
        }
        while ( v178 + 92 != v176 );
        v189 = 1;
      }
LABEL_81:
      glwebtools::Mutex::Unlock(v187);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v197), (char *)&unk_1B15112, (int)(uintptr_t)(&v192));
      for ( jj = v238; jj != &v236; jj = (int *)sub_19048E0(jj) )
      {
        g4_std::string::append_str(&v197, jj + 4);
        g4_std::string::append((int)(uintptr_t)(&v197), " ", 1u);
      }
      if ( g4_std::string::compare((int)(uintptr_t)(&v197), (char *)&unk_1B15112) != 0 )
      {
        sub_193A6F0(v198, &v197, 0, *(uint32_t *)(v197 - 12) - 1);
        g4_std::string::assign_str(&v197, v198);
        g4_std::string::Destroy(v198);
      }
      v47 = (gaia::ServiceRequest::Self *)opNew(0x98u);
      gaia::ServiceRequest::Construct(v47, a10);
      *((uint32_t *)v47 + 8) = 2502;
      *((uint32_t *)v47 + 4) = 1;
      g4_std_compat::string_assign((int)(uintptr_t)(v47) + 40, "https://", 8u);
      v199 = (int)(uintptr_t)(&dword_213B814);
      g4_std::string::append((int)(uintptr_t)(&v199), "/authorize", 0xAu);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v200), (char *)&unk_1B15112, (int)(uintptr_t)(&v192) + 1);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v201), "client_id=", (int)(uintptr_t)(&v192) + 2);
      gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v200), &v201, a1 + 33);
      g4_std::string::Destroy(&v201);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v202), (char *)&unk_1B15112, (int)(uintptr_t)(&v192) + 3);
      gaia::BaseServiceManager::GetCredentialString((int)(uintptr_t)(v203), &a4);
      g4_std::string::assign_str(&v202, v203);
      g4_std::string::Destroy(v203);
      g4_std::string::append((int)(uintptr_t)(&v202), ":", 1u);
      g4_std::string::append_str(&v202, a2);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v204), "&username=", (int)(uintptr_t)(&v193));
      gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v200), &v204, (char **)&v202);
      g4_std::string::Destroy(&v204);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v205), "&password=", (int)(uintptr_t)(&v193) + 1);
      gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v200), &v205, a3);
      g4_std::string::Destroy(&v205);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v207), "password", (int)(uintptr_t)(&v193) + 3);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v206), "&grant_type=", (int)(uintptr_t)(&v193) + 2);
      gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v200), &v206, (char **)&v207);
      g4_std::string::Destroy(&v206);
      g4_std::string::Destroy(&v207);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v208), "&scope=", (int)(uintptr_t)(&v194));
      gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v200), &v208, (char **)&v197);
      g4_std::string::Destroy(&v208);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v209), "&device_id=", (int)(uintptr_t)(&v194) + 1);
      gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v200), &v209, a6);
      g4_std::string::Destroy(&v209);
      if ( *((uint32_t *)*a8 - 3) != 0 )
      {
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v210), "&for_username=", (int)(uintptr_t)(&v194) + 2);
        gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v200), &v210, a8);
        g4_std::string::Destroy(&v210);
        gaia::BaseServiceManager::GetCredentialString((int)(uintptr_t)(&v211), &a9);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v212), "&for_credential_type=", (int)(uintptr_t)(&v194) + 3);
        gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v200), &v212, &v211);
        g4_std::string::Destroy(&v212);
        g4_std::string::Destroy(&v211);
      }
      g4_std::string::assign_str((char *)v47 + 44, &v199);
      g4_std::string::assign_str((char *)v47 + 48, &v200);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v213), (char *)&unk_1B15112, (int)(uintptr_t)(&v195));
      v174 = gaia::BaseServiceManager::SendCompleteRequest((int)(uintptr_t)(a1), v47, (int)(uintptr_t)(&v213));
      if ( v174 == 0 )
      {
        Json::Value::Construct((int)(uintptr_t)(v228), nullptr);
        v60 = false;
        Json::Features::strictMode((Json::Features::Self *)((char *)&v195 + 2));
        Json::Reader::Construct((Json::Reader::Self *)v241, (const Json::Features::Self *)((char *)&v195 + 2));
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v214), v213, (int)(uintptr_t)(&v195) + 1);
        if ( (uint8_t)Json::Reader::parse(v241, (int)(uintptr_t)(&v214), (Json::Value::Self *)v228, 1) != 0 )
          v60 = Json::Value::type((Json::Value::Self *)v228) == 7;
        g4_std::string::Destroy(&v214);
        if ( v60 )
        {
          if ( Json::Value::isMember((Json::Value::Self *)v228, "scope")
            && (v118 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v228, "scope"), Json::Value::type(v118) == 4) )
          {
            v119 = 0;
            v120 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v228, "scope"));
            Json::Value::asString((Json::Value::Self *)&v215, v120);
            v216 = &dword_213B814;
            v180 = sub_1938090((int)(uintptr_t)(&v215), " ", 0, 1u);
            v121 = v180;
            while ( 1 )
            {
              sub_193A6F0(v217, &v215, v119, v121);
              g4_std::string::assign_str(&v216, v217);
              g4_std::string::Destroy(v217);
              v122 = v252;
              if ( v252 == nullptr )
                goto LABEL_259;
              v163 = v216;
              v170 = &v251;
              v123 = *(v216 - 3);
              do
              {
                while ( 1 )
                {
                  v124 = v123;
                  v125 = *(uint32_t *)(*((uint32_t *)v122 + 4) - 12);
                  if ( v125 <= v123 )
                    v124 = *(uint32_t *)(*((uint32_t *)v122 + 4) - 12);
                  v126 = v125 - v123;
                  v127 = memcmp(*((const void **)v122 + 4), v163, v124);
                  if ( v127 == 0 )
                    v127 = v126;
                  if ( v127 < 0 )
                    break;
                  v170 = (int *)v122;
                  v122 = *((void **)v122 + 2);
                  if ( v122 == nullptr )
                    goto LABEL_253;
                }
                v122 = *((void **)v122 + 3);
              }
              while ( v122 != nullptr );
LABEL_253:
              if ( v170 == &v251 )
                goto LABEL_259;
              v128 = v123;
              v129 = *(uint32_t *)(v170[4] - 12);
              if ( v129 <= v123 )
                v128 = *(uint32_t *)(v170[4] - 12);
              v130 = v123 - v129;
              v131 = memcmp(v163, (const void *)v170[4], v128);
              if ( v131 == 0 )
                v131 = v130;
              if ( v131 < 0 )
              {
LABEL_259:
                g4_std::string::construct_copy(v222, &v216);
                v223 = 0;
                g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_insert_unique(v191);
                v170 = (int *)v191[0];
                g4_std::string::Destroy(v222);
              }
              v170[5] = gaia::BaseServiceManager::GetTimeStamp();
              g4_std::set_string_f21c9c::erase(&v235, &v216);
              if ( v180 == -1 )
                break;
              v119 = v180 + 1;
              v180 = sub_1938090((int)(uintptr_t)(&v215), " ", v180 + 1, 1u);
              v121 = v180 - v119;
              if ( v119 > *(uint32_t *)(v215 - 12) )
                goto LABEL_262;
            }
            for ( kk = v238; kk != &v236; kk = (int *)sub_19048E0(kk) )
            {
              TimeStamp = gaia::BaseServiceManager::GetTimeStamp();
              g4_std::string::construct_copy(&v218, kk + 4);
              v132 = v264;
              if ( v264 == nullptr )
                goto LABEL_279;
              v164 = v218;
              v171 = &v263;
              v133 = *((uint32_t *)v218 - 3);
              do
              {
                while ( 1 )
                {
                  v134 = *(uint32_t *)(*((uint32_t *)v132 + 4) - 12);
                  v135 = v134;
                  if ( v133 <= v134 )
                    v135 = v133;
                  v136 = v134 - v133;
                  v137 = memcmp(*((const void **)v132 + 4), v164, v135);
                  if ( v137 == 0 )
                    v137 = v136;
                  if ( v137 < 0 )
                    break;
                  v171 = (int *)v132;
                  v132 = *((void **)v132 + 2);
                  if ( v132 == nullptr )
                    goto LABEL_273;
                }
                v132 = *((void **)v132 + 3);
              }
              while ( v132 != nullptr );
LABEL_273:
              if ( v171 == &v263 )
                goto LABEL_279;
              v138 = *(uint32_t *)(v171[4] - 12);
              v139 = v138;
              if ( v133 <= v138 )
                v139 = v133;
              v140 = v133 - v138;
              v141 = memcmp(v164, (const void *)v171[4], v139);
              if ( v141 == 0 )
                v141 = v140;
              if ( v141 < 0 )
              {
LABEL_279:
                g4_std::string::construct_copy(v224, &v218);
                v225 = 0;
                g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_insert_unique(v191);
                v171 = (int *)v191[0];
                g4_std::string::Destroy(v224);
              }
              v171[5] = TimeStamp;
              g4_std::map_string_long_9c4ea6::erase(&v250, &v218);
              g4_std::map_string_long_9c4ea6::erase(&v256, &v218);
              g4_std::string::Destroy(&v218);
            }
            g4_std::string::Destroy(&v216);
            g4_std::string::Destroy(&v215);
          }
          else
          {
            for ( mm = v238; mm != &v236; mm = (int *)sub_19048E0(mm) )
            {
              v183 = (size_t)(mm + 4);
              v61 = v252;
              if ( v252 == nullptr )
                goto LABEL_140;
              v167 = &v251;
              v159 = (uint32_t *)mm[4];
              v62 = *(v159 - 3);
              do
              {
                while ( 1 )
                {
                  v63 = v62;
                  v64 = *(uint32_t *)(*((uint32_t *)v61 + 4) - 12);
                  if ( v64 <= v62 )
                    v63 = *(uint32_t *)(*((uint32_t *)v61 + 4) - 12);
                  v65 = v64 - v62;
                  v66 = memcmp(*((const void **)v61 + 4), v159, v63);
                  if ( v66 == 0 )
                    v66 = v65;
                  if ( v66 < 0 )
                    break;
                  v167 = (int *)v61;
                  v61 = *((void **)v61 + 2);
                  if ( v61 == nullptr )
                    goto LABEL_134;
                }
                v61 = *((void **)v61 + 3);
              }
              while ( v61 != nullptr );
LABEL_134:
              if ( v167 == &v251 )
                goto LABEL_140;
              v67 = v62;
              v68 = *(uint32_t *)(v167[4] - 12);
              if ( v68 <= v62 )
                v67 = *(uint32_t *)(v167[4] - 12);
              v69 = v62 - v68;
              v70 = memcmp(v159, (const void *)v167[4], v67);
              if ( v70 == 0 )
                v70 = v69;
              if ( v70 < 0 )
              {
LABEL_140:
                g4_std::string::construct_copy(v226, v183);
                v227 = 0;
                g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_insert_unique(v191);
                v167 = (int *)v191[0];
                g4_std::string::Destroy(v226);
              }
              v167[5] = gaia::BaseServiceManager::GetTimeStamp();
              g4_std::set_string_f21c9c::erase(&v235, v183);
            }
          }
          if ( !Json::Value::isMember((Json::Value::Self *)v228, "access_token")
            || (v142 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v228, "access_token"),
                Json::Value::type(v142) != 4)
            || !Json::Value::isMember((Json::Value::Self *)v228, "token_type")
            || (v143 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v228, "token_type"),
                Json::Value::type(v143) != 4) )
          {
            sub_545800((int)(uintptr_t)(v241));
            Json::Value::Destroy((Json::Value::Self *)v228);
            v174 = -34;
            goto LABEL_117;
          }
          v144 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v228, "access_token"));
          Json::Value::asString((Json::Value::Self *)v219, v144);
          g4_std::string::assign_str(&v242, v219);
          g4_std::string::Destroy(v219);
          v145 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v228, "token_type"));
          Json::Value::asString((Json::Value::Self *)v220, v145);
          g4_std::string::assign_str(&v243, v220);
          g4_std::string::Destroy(v220);
          g4_std::string::assign_str(&v248, a2);
          g4_std::string::assign_str(&v249, a3);
          if ( Json::Value::isMember((Json::Value::Self *)v228, "approvals")
            && (v151 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v228, "approvals"),
                Json::Value::type(v151) == 7) )
          {
            v146 = (Json::Value::Self *)v229;
            v152 = (const Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v228, "approvals");
            v147 = (gaia::BaseJSONServiceResponse::Self *)v231;
            Json::Value::Construct((Json::Value::Self *)v229, v152);
            gaia::BaseJSONServiceResponse::Construct((Json::Value::Self *)v231, (Json::Value::Self *)v229);
            Json::Value::opAssign((Json::Value::Self *)v245, (const Json::Value::Self *)v231);
            v148 = v232;
          }
          else
          {
            v146 = (Json::Value::Self *)v230;
            v147 = (gaia::BaseJSONServiceResponse::Self *)v233;
            Json::Value::Construct((int)(uintptr_t)(v230), nullptr);
            gaia::BaseJSONServiceResponse::Construct((Json::Value::Self *)v233, (Json::Value::Self *)v230);
            Json::Value::opAssign((Json::Value::Self *)v245, (const Json::Value::Self *)v233);
            v148 = v234;
          }
          v246 = v148;
          gaia::BaseJSONServiceResponse::Destroy(v147);
          Json::Value::Destroy(v146);
          if ( Json::Value::isMember((Json::Value::Self *)v228, "refresh_token")
            && (v149 = (Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v228, "refresh_token"),
                Json::Value::type(v149) == 4) )
          {
            v150 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v228, "refresh_token"));
            Json::Value::asString((Json::Value::Self *)v221, v150);
            g4_std::string::assign_str(&v244, v221);
            g4_std::string::Destroy(v221);
          }
          else
          {
            g4_std_compat::string_assign((int)(uintptr_t)(&v244), &unk_1B15112, 0);
          }
        }
        sub_545800((int)(uintptr_t)(v241));
        Json::Value::Destroy((Json::Value::Self *)v228);
      }
      glwebtools::Mutex::Lock(v187);
      if ( v189 != 0 )
      {
        v71 = a1[43];
        if ( v71 != nullptr )
        {
          v72 = (char *)(a1 + 42);
          do
          {
            while ( *((uint32_t *)v71 + 4) >= a4 )
            {
              v72 = v71;
              v71 = *((char **)v71 + 2);
              if ( v71 == nullptr )
                goto LABEL_149;
            }
            v71 = *((char **)v71 + 3);
          }
          while ( v71 != nullptr );
LABEL_149:
          if ( v190 != v72 && *((uint32_t *)v72 + 4) <= a4 )
          {
            v48 = g4_std::map_gaia_BaseServiceManager_2de1d3::opIndex(a1 + 41, &a4);
            g4_std::string::assign_str(v48, &v242);
            g4_std::string::assign_str(v48 + 4, &v243);
            g4_std::string::assign_str(v48 + 8, &v244);
            Json::Value::opAssign((Json::Value::Self *)(v48 + 12), (const Json::Value::Self *)v245);
            *(uint32_t *)(v48 + 28) = v246;
            *(uint32_t *)(v48 + 32) = v247;
            g4_std::string::assign_str(v48 + 36, &v248);
            g4_std::string::assign_str(v48 + 40, &v249);
            if ( (int *)(v48 + 44) != &v250 )
            {
              g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_erase(
                v48 + 44,
                *(void **)(v48 + 52));
              *(uint32_t *)(v48 + 52) = 0;
              v73 = v252;
              v50 = v252 == nullptr;
              *(uint32_t *)(v48 + 64) = 0;
              *(uint32_t *)(v48 + 56) = v48 + 48;
              *(uint32_t *)(v48 + 60) = v48 + 48;
              if ( !v50 )
              {
                v74 = (int)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_copy(
                        v48 + 44,
                        v73,
                        v48 + 48));
                *(uint32_t *)(v48 + 52) = v74;
                for ( nn = v74; *(uint32_t *)(nn + 8) != 0; nn = *(uint32_t *)(nn + 8) )
                  ;
                *(uint32_t *)(v48 + 56) = nn;
                while ( *(uint32_t *)(v74 + 12) != 0 )
                  v74 = *(uint32_t *)(v74 + 12);
                *(uint32_t *)(v48 + 60) = v74;
                *(uint32_t *)(v48 + 64) = v255;
              }
            }
            if ( (int *)(v48 + 68) != &v256 )
            {
              g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_erase(
                v48 + 68,
                *(void **)(v48 + 76));
              *(uint32_t *)(v48 + 76) = 0;
              v76 = v258;
              v50 = v258 == nullptr;
              *(uint32_t *)(v48 + 88) = 0;
              *(uint32_t *)(v48 + 80) = v48 + 72;
              *(uint32_t *)(v48 + 84) = v48 + 72;
              if ( !v50 )
              {
                v77 = (int)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_copy(
                        v48 + 68,
                        v76,
                        v48 + 72));
                *(uint32_t *)(v48 + 76) = v77;
                for ( i1 = v77; *(uint32_t *)(i1 + 8) != 0; i1 = *(uint32_t *)(i1 + 8) )
                  ;
                *(uint32_t *)(v48 + 80) = i1;
                while ( *(uint32_t *)(v77 + 12) != 0 )
                  v77 = *(uint32_t *)(v77 + 12);
                *(uint32_t *)(v48 + 84) = v77;
                *(uint32_t *)(v48 + 88) = v261;
              }
            }
            if ( (int *)(v48 + 92) != &v262 )
            {
              g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_erase(
                v48 + 92,
                *(void **)(v48 + 100));
              *(uint32_t *)(v48 + 100) = 0;
              v79 = v264;
              v50 = v264 == nullptr;
              *(uint32_t *)(v48 + 112) = 0;
              *(uint32_t *)(v48 + 104) = v48 + 96;
              *(uint32_t *)(v48 + 108) = v48 + 96;
              if ( !v50 )
              {
                v57 = (int)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_copy(
                        v48 + 92,
                        v79,
                        v48 + 96));
                *(uint32_t *)(v48 + 100) = v57;
                for ( i2 = v57; *(uint32_t *)(i2 + 8) != 0; i2 = *(uint32_t *)(i2 + 8) )
                  ;
                *(uint32_t *)(v48 + 104) = i2;
                while ( *(uint32_t *)(v57 + 12) != 0 )
                  v57 = *(uint32_t *)(v57 + 12);
LABEL_115:
                *(uint32_t *)(v48 + 108) = v57;
                *(uint32_t *)(v48 + 112) = v267;
              }
            }
          }
        }
      }
      else
      {
        v48 = g4_std::map_gaia_BaseServiceManager_2de1d3::opIndex(a1 + 41, &a4);
        g4_std::string::assign_str(v48, &v242);
        g4_std::string::assign_str(v48 + 4, &v243);
        g4_std::string::assign_str(v48 + 8, &v244);
        Json::Value::opAssign((Json::Value::Self *)(v48 + 12), (const Json::Value::Self *)v245);
        *(uint32_t *)(v48 + 28) = v246;
        *(uint32_t *)(v48 + 32) = v247;
        g4_std::string::assign_str(v48 + 36, &v248);
        g4_std::string::assign_str(v48 + 40, &v249);
        if ( (int *)(v48 + 44) != &v250 )
        {
          g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_erase(
            v48 + 44,
            *(void **)(v48 + 52));
          *(uint32_t *)(v48 + 52) = 0;
          v49 = v252;
          v50 = v252 == nullptr;
          *(uint32_t *)(v48 + 64) = 0;
          *(uint32_t *)(v48 + 56) = v48 + 48;
          *(uint32_t *)(v48 + 60) = v48 + 48;
          if ( !v50 )
          {
            v51 = (int)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_copy(
                    v48 + 44,
                    v49,
                    v48 + 48));
            *(uint32_t *)(v48 + 52) = v51;
            for ( i3 = v51; *(uint32_t *)(i3 + 8) != 0; i3 = *(uint32_t *)(i3 + 8) )
              ;
            *(uint32_t *)(v48 + 56) = i3;
            while ( *(uint32_t *)(v51 + 12) != 0 )
              v51 = *(uint32_t *)(v51 + 12);
            *(uint32_t *)(v48 + 60) = v51;
            *(uint32_t *)(v48 + 64) = v255;
          }
        }
        if ( (int *)(v48 + 68) != &v256 )
        {
          g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_erase(
            v48 + 68,
            *(void **)(v48 + 76));
          *(uint32_t *)(v48 + 76) = 0;
          v53 = v258;
          v50 = v258 == nullptr;
          *(uint32_t *)(v48 + 88) = 0;
          *(uint32_t *)(v48 + 80) = v48 + 72;
          *(uint32_t *)(v48 + 84) = v48 + 72;
          if ( !v50 )
          {
            v54 = (int)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_copy(
                    v48 + 68,
                    v53,
                    v48 + 72));
            *(uint32_t *)(v48 + 76) = v54;
            for ( i4 = v54; *(uint32_t *)(i4 + 8) != 0; i4 = *(uint32_t *)(i4 + 8) )
              ;
            *(uint32_t *)(v48 + 80) = i4;
            while ( *(uint32_t *)(v54 + 12) != 0 )
              v54 = *(uint32_t *)(v54 + 12);
            *(uint32_t *)(v48 + 84) = v54;
            *(uint32_t *)(v48 + 88) = v261;
          }
        }
        if ( (int *)(v48 + 92) != &v262 )
        {
          g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_erase(
            v48 + 92,
            *(void **)(v48 + 100));
          *(uint32_t *)(v48 + 100) = 0;
          v56 = v264;
          v50 = v264 == nullptr;
          *(uint32_t *)(v48 + 112) = 0;
          *(uint32_t *)(v48 + 104) = v48 + 96;
          *(uint32_t *)(v48 + 108) = v48 + 96;
          if ( !v50 )
          {
            v57 = (int)(uintptr_t)(g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_copy(
                    v48 + 92,
                    v56,
                    v48 + 96));
            *(uint32_t *)(v48 + 100) = v57;
            for ( i5 = v57; *(uint32_t *)(i5 + 8) != 0; i5 = *(uint32_t *)(i5 + 8) )
              ;
            *(uint32_t *)(v48 + 104) = i5;
            while ( *(uint32_t *)(v57 + 12) != 0 )
              v57 = *(uint32_t *)(v57 + 12);
            goto LABEL_115;
          }
        }
      }
      glwebtools::Mutex::Unlock(v187);
LABEL_117:
      g4_std::string::Destroy(&v213);
      g4_std::string::Destroy(&v202);
      g4_std::string::Destroy(&v200);
      g4_std::string::Destroy(&v199);
      g4_std::string::Destroy(&v197);
LABEL_118:
      g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_erase(
        (int)(uintptr_t)(&v262),
        v264);
      g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_erase(
        (int)(uintptr_t)(&v256),
        v258);
      g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_erase(
        (int)(uintptr_t)(&v250),
        v252);
      g4_std::string::Destroy(&v249);
      g4_std::string::Destroy(&v248);
      gaia::BaseJSONServiceResponse::Destroy((gaia::BaseJSONServiceResponse::Self *)v245);
      g4_std::string::Destroy(&v244);
      g4_std::string::Destroy(&v243);
      g4_std::string::Destroy(&v242);
      g4_std::Rb_tree_string_string_Identity_s_127648::M_erase(
        (int)(uintptr_t)(&v235),
        v237);
LABEL_119:
      glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)(a1 + 47));
      return v174;
    }
  }
  v247 = a4;
  v189 = 0;
  goto LABEL_81;
}

// ----------------------------------------------------------------------------
// Function: gaia::Janus::JanusToken::UpdateScopeList  (binary VA: 0x14c87a0)
// Original: gaia::Janus::JanusToken::UpdateScopeList
// ----------------------------------------------------------------------------
void gaia::Janus::JanusToken::UpdateScopeList(gaia::Janus::JanusToken::Self *self, int a2)
{
  char *v2;
  char *v3;
  char *v4;
  int i;
  bool v6;
  int v7;
  char *v8;
  char *v9;
  size_t v10;
  size_t v11;
  size_t n;
  int v13;
  int v14;
  size_t v15;
  size_t v16;
  int v17;
  int v18;
  char *v19;
  uint32_t *v20;
  size_t v21;
  size_t v22;
  int v23;
  int v24;
  char *j;
  char *v26;
  char *v27;
  char *v28;
  char *v29;
  char *v30;
  char *v31;
  char *v32;
  char *v33;
  char *v34;
  size_t v35;
  size_t v36;
  size_t v37;
  int v38;
  int v39;
  size_t v40;
  size_t v41;
  int v42;
  int v43;
  char *v44;
  uint32_t *v45;
  size_t v46;
  size_t v47;
  int v48;
  int v49;
  char *k;
  char *v51;
  char *v52;
  char *v53;
  char *v54;
  char *v55;
  char *v56;
  char *v57;
  char *v58;
  size_t v59;
  char *v60;
  size_t v61;
  size_t v62;
  int v63;
  char *v64;
  size_t v65;
  size_t v66;
  int v67;
  int v68;
  char *v69;
  size_t v70;
  char *v71;
  size_t v72;
  size_t v73;
  int v74;
  char *v75;
  size_t v76;
  size_t v77;
  int v78;
  int v79;
  typedef char *_g4_t_s1;
  typedef char *_g4_t_s1a;
  typedef char *_g4_t_s1b;
  typedef char *_g4_t_s1c;
  typedef size_t _g4_t_v84;
  typedef size_t _g4_t_v85;
  typedef size_t _g4_t_v86;
  typedef size_t _g4_t_v87;
  typedef const void *_g4_t_s2;
  typedef char *_g4_t_v89;
  typedef size_t _g4_t_v90;
  typedef const void *_g4_t_v91;
  typedef char *_g4_t_v92;
  typedef size_t _g4_t_v93;
  typedef char *_g4_t_v94;
  typedef void *_g4_t_v95;
  typedef char *_g4_t_v96;
  typedef void *_g4_t_v97;
  typedef char *_g4_t_v98;
  typedef char *_g4_t_v99;
  typedef char *_g4_t_v100;
  typedef char *_g4_t_v101;
  typedef char *_g4_t_v102;
  typedef char *_g4_t_v103;
  typedef char *_g4_t_v104;
  typedef char *_g4_t_v105;
  typedef void **_g4_t_v106;
  typedef void **_g4_t_v107;
  typedef char *_g4_t_v108;
  typedef char *_g4_t_v109;
  typedef char *_g4_t_v110;
  typedef char *_g4_t_v111;
  typedef char *_g4_t_v112;
  typedef const void *_g4_t_v113;
  typedef const void *_g4_t_v114;
  typedef const void *_g4_t_v115[2];
  typedef const void *_g4_t_v116[2];
  typedef void *_g4_t_v117;
  typedef char *_g4_t_v118;
  typedef char *_g4_t_v119;
  typedef void *_g4_t_v120;
  typedef char *_g4_t_v121;
  typedef char *_g4_t_v122;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_s1)) > _g4_s0 ? (0u + sizeof(_g4_t_s1)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_s1a)) > _g4_s1 ? (0u + sizeof(_g4_t_s1a)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_s1b)) > _g4_s2 ? (0u + sizeof(_g4_t_s1b)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_s1c)) > _g4_s3 ? (0u + sizeof(_g4_t_s1c)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v84)) > _g4_s4 ? (28u + sizeof(_g4_t_v84)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v85)) > _g4_s5 ? (28u + sizeof(_g4_t_v85)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v86)) > _g4_s6 ? (28u + sizeof(_g4_t_v86)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v87)) > _g4_s7 ? (28u + sizeof(_g4_t_v87)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_s2)) > _g4_s8 ? (32u + sizeof(_g4_t_s2)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v89)) > _g4_s9 ? (32u + sizeof(_g4_t_v89)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v90)) > _g4_s10 ? (32u + sizeof(_g4_t_v90)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v91)) > _g4_s11 ? (32u + sizeof(_g4_t_v91)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v92)) > _g4_s12 ? (32u + sizeof(_g4_t_v92)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v93)) > _g4_s13 ? (32u + sizeof(_g4_t_v93)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v94)) > _g4_s14 ? (36u + sizeof(_g4_t_v94)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v95)) > _g4_s15 ? (36u + sizeof(_g4_t_v95)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_v96)) > _g4_s16 ? (36u + sizeof(_g4_t_v96)) : _g4_s16,
    _g4_s18 = (36u + sizeof(_g4_t_v97)) > _g4_s17 ? (36u + sizeof(_g4_t_v97)) : _g4_s17,
    _g4_s19 = (40u + sizeof(_g4_t_v98)) > _g4_s18 ? (40u + sizeof(_g4_t_v98)) : _g4_s18,
    _g4_s20 = (40u + sizeof(_g4_t_v99)) > _g4_s19 ? (40u + sizeof(_g4_t_v99)) : _g4_s19,
    _g4_s21 = (40u + sizeof(_g4_t_v100)) > _g4_s20 ? (40u + sizeof(_g4_t_v100)) : _g4_s20,
    _g4_s22 = (40u + sizeof(_g4_t_v101)) > _g4_s21 ? (40u + sizeof(_g4_t_v101)) : _g4_s21,
    _g4_s23 = (44u + sizeof(_g4_t_v102)) > _g4_s22 ? (44u + sizeof(_g4_t_v102)) : _g4_s22,
    _g4_s24 = (44u + sizeof(_g4_t_v103)) > _g4_s23 ? (44u + sizeof(_g4_t_v103)) : _g4_s23,
    _g4_s25 = (48u + sizeof(_g4_t_v104)) > _g4_s24 ? (48u + sizeof(_g4_t_v104)) : _g4_s24,
    _g4_s26 = (48u + sizeof(_g4_t_v105)) > _g4_s25 ? (48u + sizeof(_g4_t_v105)) : _g4_s25,
    _g4_s27 = (52u + sizeof(_g4_t_v106)) > _g4_s26 ? (52u + sizeof(_g4_t_v106)) : _g4_s26,
    _g4_s28 = (52u + sizeof(_g4_t_v107)) > _g4_s27 ? (52u + sizeof(_g4_t_v107)) : _g4_s27,
    _g4_s29 = (64u + sizeof(_g4_t_v108)) > _g4_s28 ? (64u + sizeof(_g4_t_v108)) : _g4_s28,
    _g4_s30 = (64u + sizeof(_g4_t_v109)) > _g4_s29 ? (64u + sizeof(_g4_t_v109)) : _g4_s29,
    _g4_s31 = (68u + sizeof(_g4_t_v110)) > _g4_s30 ? (68u + sizeof(_g4_t_v110)) : _g4_s30,
    _g4_s32 = (72u + sizeof(_g4_t_v111)) > _g4_s31 ? (72u + sizeof(_g4_t_v111)) : _g4_s31,
    _g4_s33 = (76u + sizeof(_g4_t_v112)) > _g4_s32 ? (76u + sizeof(_g4_t_v112)) : _g4_s32,
    _g4_s34 = (80u + sizeof(_g4_t_v113)) > _g4_s33 ? (80u + sizeof(_g4_t_v113)) : _g4_s33,
    _g4_s35 = (84u + sizeof(_g4_t_v114)) > _g4_s34 ? (84u + sizeof(_g4_t_v114)) : _g4_s34,
    _g4_s36 = (88u + sizeof(_g4_t_v115)) > _g4_s35 ? (88u + sizeof(_g4_t_v115)) : _g4_s35,
    _g4_s37 = (96u + sizeof(_g4_t_v116)) > _g4_s36 ? (96u + sizeof(_g4_t_v116)) : _g4_s36,
    _g4_s38 = (104u + sizeof(_g4_t_v117)) > _g4_s37 ? (104u + sizeof(_g4_t_v117)) : _g4_s37,
    _g4_s39 = (108u + sizeof(_g4_t_v118)) > _g4_s38 ? (108u + sizeof(_g4_t_v118)) : _g4_s38,
    _g4_s40 = (112u + sizeof(_g4_t_v119)) > _g4_s39 ? (112u + sizeof(_g4_t_v119)) : _g4_s39,
    _g4_s41 = (116u + sizeof(_g4_t_v120)) > _g4_s40 ? (116u + sizeof(_g4_t_v120)) : _g4_s40,
    _g4_s42 = (120u + sizeof(_g4_t_v121)) > _g4_s41 ? (120u + sizeof(_g4_t_v121)) : _g4_s41,
    _g4_s43 = (124u + sizeof(_g4_t_v122)) > _g4_s42 ? (124u + sizeof(_g4_t_v122)) : _g4_s42
  };
  alignas(16) uint8_t _g4_sf[_g4_s43];
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 0u);
  _g4_t_s1a &s1a = *reinterpret_cast<_g4_t_s1a *>(_g4_sf + 0u);
  _g4_t_s1b &s1b = *reinterpret_cast<_g4_t_s1b *>(_g4_sf + 0u);
  _g4_t_s1c &s1c = *reinterpret_cast<_g4_t_s1c *>(_g4_sf + 0u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 28u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 28u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 28u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 28u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 32u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 32u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 32u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 32u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 32u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 32u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 36u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 36u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 36u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 36u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 40u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 40u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 40u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 40u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 44u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 44u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 48u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 48u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 52u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 52u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 64u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 64u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 68u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 72u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 76u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 80u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 84u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 88u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 96u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 104u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 108u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 112u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 116u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 120u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 124u);

  v2 = nullptr;
  v117 = nullptr;
  v118 = nullptr;
  v119 = nullptr;
  if ( *((uint32_t *)self + 16) == 0 )
    goto LABEL_53;
  v3 = *((char **)self + 14);
  v104 = (char *)self + 48;
  if ( v3 == (char *)self + 48 )
    goto LABEL_53;
  v4 = (char *)self + 48;
  for ( i = g4_std::string::compare((int)(uintptr_t)(v3 + 16), "auth_credential"); ; i = g4_std::string::compare((int)(uintptr_t)(v3 + 16), "auth_credential") )
  {
    v6 = i == 0;
    v7 = *((uint32_t *)v3 + 5);
    if ( v6 )
    {
      if ( v7 - a2 + 720 > 0 )
        goto LABEL_5;
    }
    else if ( v7 - a2 + 7200 > 0 )
    {
      goto LABEL_5;
    }
    if ( v118 != v119 )
      break;
    g4_std::vector_string_86c307::M_insert_aux((int *)&v117, v118, (int)(uintptr_t)(v3 + 16));
LABEL_5:
    v3 = (char *)sub_1904890(v3);
    if ( v4 == v3 )
      goto LABEL_13;
LABEL_6:
    ;
  }
  v8 = nullptr;
  if ( v118 != nullptr )
  {
    g4_std::string::construct_copy(v118, v3 + 16);
    v8 = v118;
  }
  v118 = v8 + 4;
  v3 = (char *)sub_1904890(v3);
  if ( v4 != v3 )
    goto LABEL_6;
LABEL_13:
  v2 = (char *)v117;
  v108 = v118;
  if ( v117 == v118 )
    goto LABEL_53;
  v102 = (char *)v117;
  while ( 2 )
  {
    g4_std::string::construct_copy(&v113, v102);
    v9 = *((char **)self + 19);
    if ( v9 == nullptr )
    {
      v94 = (char *)self + 72;
      goto LABEL_30;
    }
    s2 = v113;
    v10 = *((uint32_t *)v113 - 3);
    v94 = (char *)self + 72;
    do
    {
      while ( 1 )
      {
        v11 = *(uint32_t *)(*((uint32_t *)v9 + 4) - 12);
        n = v11;
        if ( v10 <= v11 )
          n = v10;
        v13 = v11 - v10;
        v14 = memcmp(*((const void **)v9 + 4), s2, n);
        if ( v14 == 0 )
          v14 = v13;
        if ( v14 < 0 )
          break;
        v94 = v9;
        v9 = *((char **)v9 + 2);
        if ( v9 == nullptr )
          goto LABEL_24;
      }
      v9 = *((char **)v9 + 3);
    }
    while ( v9 != nullptr );
LABEL_24:
    if ( (char *)self + 72 == v94 )
      goto LABEL_30;
    v15 = *(uint32_t *)(*((uint32_t *)v94 + 4) - 12);
    v16 = v15;
    if ( v10 <= v15 )
      v16 = v10;
    v17 = v10 - v15;
    v18 = memcmp(s2, *((const void **)v94 + 4), v16);
    if ( v18 == 0 )
      v18 = v17;
    if ( v18 < 0 )
    {
LABEL_30:
      g4_std::string::construct_copy(v115, &v113);
      v115[1] = nullptr;
      g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_insert_unique(
        (int *)&v112,
        (int *)self + 17,
        (int)(uintptr_t)(v94),
        v115);
      v94 = v112;
      g4_std::string::Destroy(v115);
    }
    *((uint32_t *)v94 + 5) = 0;
    v106 = *((void ***)self + 13);
    v89 = (char *)self + 48;
    v98 = (char *)self + 48;
    if ( v106 != nullptr )
    {
      v19 = *((char **)self + 13);
      v95 = (void *)v113;
      v90 = *((uint32_t *)v113 - 3);
      while ( 1 )
      {
        while ( 1 )
        {
          v20 = *((uint32_t **)v19 + 4);
          v21 = v90;
          v22 = *(v20 - 3);
          if ( v90 > v22 )
            v21 = *(v20 - 3);
          v84 = v21;
          v23 = memcmp(v20, v95, v21);
          if ( v23 == 0 )
            v23 = v22 - v90;
          if ( v23 >= 0 )
            break;
          v19 = *((char **)v19 + 3);
          if ( v19 == nullptr )
            goto LABEL_43;
        }
        v24 = memcmp(v95, v20, v84);
        if ( v24 == 0 )
          v24 = v90 - v22;
        if ( v24 >= 0 )
          break;
        v98 = v19;
        v19 = *((char **)v19 + 2);
        if ( v19 == nullptr )
        {
LABEL_43:
          v89 = v98;
          goto LABEL_44;
        }
      }
      v69 = *((char **)v19 + 3);
      v70 = v90;
      v71 = *((char **)v19 + 2);
      v89 = v98;
      if ( v69 != nullptr )
      {
        v101 = *((char **)v19 + 2);
        v111 = v19;
        do
        {
          while ( 1 )
          {
            v72 = v70;
            v73 = *(uint32_t *)(*((uint32_t *)v69 + 4) - 12);
            if ( v73 <= v70 )
              v72 = *(uint32_t *)(*((uint32_t *)v69 + 4) - 12);
            v74 = memcmp(v95, *((const void **)v69 + 4), v72);
            if ( v74 == 0 )
              v74 = v70 - v73;
            if ( v74 >= 0 )
              break;
            v89 = v69;
            v69 = *((char **)v69 + 2);
            if ( v69 == nullptr )
              goto LABEL_146;
          }
          v69 = *((char **)v69 + 3);
        }
        while ( v69 != nullptr );
LABEL_146:
        v71 = v101;
        v19 = v111;
      }
      v98 = v19;
      if ( v71 != nullptr )
      {
        v75 = v71;
        do
        {
          v76 = v70;
          v77 = *(uint32_t *)(*((uint32_t *)v75 + 4) - 12);
          if ( v77 <= v70 )
            v76 = *(uint32_t *)(*((uint32_t *)v75 + 4) - 12);
          v78 = v77 - v70;
          v79 = memcmp(*((const void **)v75 + 4), v95, v76);
          if ( v79 == 0 )
            v79 = v78;
          if ( v79 >= 0 )
          {
            v98 = v75;
            v75 = *((char **)v75 + 2);
          }
          else
          {
            v75 = *((char **)v75 + 3);
          }
        }
        while ( v75 != nullptr );
      }
    }
LABEL_44:
    if ( *((char **)self + 14) == v98 && v104 == v89 )
    {
      g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_erase(
        (int)(uintptr_t)(self) + 44,
        v106);
      *((uint32_t *)self + 14) = (uint32_t)(uintptr_t)(v104);
      *((uint32_t *)self + 13) = 0;
      *((uint32_t *)self + 15) = (uint32_t)(uintptr_t)(v104);
      *((uint32_t *)self + 16) = 0;
    }
    else if ( v89 != v98 )
    {
      for ( j = v98; ; j = v26 )
      {
        v26 = (char *)sub_19048E0(j);
        v27 = (char *)sub_1904AE0(j, (char *)self + 48);
        g4_std::string::Destroy(v27 + 16);
        opDelete(v27);
        --*((uint32_t *)self + 16);
        if ( v89 == v26 )
          break;
      }
    }
    g4_std::string::Destroy(&v113);
    v102 += 4;
    if ( v108 != v102 )
      continue;
    break;
  }
  v2 = (char *)v117;
  v28 = v118;
  if ( v117 != v118 )
  {
    v29 = (char *)v117;
    do
    {
      s1 = v29;
      v29 += 4;
      g4_std::string::Destroy(s1);
    }
    while ( v29 != v28 );
  }
LABEL_53:
  v30 = nullptr;
  v118 = v2;
  v120 = nullptr;
  v121 = nullptr;
  v122 = nullptr;
  v31 = *((char **)self + 26);
  v105 = (char *)self + 96;
  if ( v31 == (char *)self + 96 )
    goto LABEL_101;
  v32 = (char *)self + 96;
  while ( 2 )
  {
    while ( 2 )
    {
      if ( *((uint32_t *)v31 + 5) - a2 >= -299 )
      {
LABEL_55:
        v31 = (char *)sub_1904890(v31);
        if ( v32 == v31 )
          goto LABEL_61;
        continue;
      }
      break;
    }
    if ( v122 == v30 )
    {
      v87 = (size_t)v31;
      g4_std::vector_string_86c307::M_insert_aux((int *)&v120, v30, (int)(uintptr_t)(v31 + 16));
      v30 = v121;
      v31 = (char *)v87;
      goto LABEL_55;
    }
    v33 = nullptr;
    if ( v30 != nullptr )
    {
      v85 = (size_t)v31;
      g4_std::string::construct_copy(v30, v31 + 16);
      v33 = v121;
      v31 = (char *)v85;
    }
    v30 = v33 + 4;
    v121 = v33 + 4;
    v31 = (char *)sub_1904890(v31);
    if ( v32 != v31 )
      continue;
    break;
  }
LABEL_61:
  v109 = v30;
  v30 = (char *)v120;
  if ( v120 == v109 )
    goto LABEL_101;
  v103 = (char *)v120;
  while ( 2 )
  {
    g4_std::string::construct_copy(&v114, v103);
    v34 = *((char **)self + 19);
    if ( v34 == nullptr )
    {
      v96 = (char *)self + 72;
      goto LABEL_78;
    }
    v91 = v114;
    v35 = *((uint32_t *)v114 - 3);
    v96 = (char *)self + 72;
    do
    {
      while ( 1 )
      {
        v36 = v35;
        v37 = *(uint32_t *)(*((uint32_t *)v34 + 4) - 12);
        if ( v37 <= v35 )
          v36 = *(uint32_t *)(*((uint32_t *)v34 + 4) - 12);
        v38 = v37 - v35;
        v39 = memcmp(*((const void **)v34 + 4), v91, v36);
        if ( v39 == 0 )
          v39 = v38;
        if ( v39 < 0 )
          break;
        v96 = v34;
        v34 = *((char **)v34 + 2);
        if ( v34 == nullptr )
          goto LABEL_72;
      }
      v34 = *((char **)v34 + 3);
    }
    while ( v34 != nullptr );
LABEL_72:
    if ( (char *)self + 72 == v96 )
      goto LABEL_78;
    v40 = v35;
    v41 = *(uint32_t *)(*((uint32_t *)v96 + 4) - 12);
    if ( v41 <= v35 )
      v40 = *(uint32_t *)(*((uint32_t *)v96 + 4) - 12);
    v42 = v35 - v41;
    v43 = memcmp(v91, *((const void **)v96 + 4), v40);
    if ( v43 == 0 )
      v43 = v42;
    if ( v43 < 0 )
    {
LABEL_78:
      g4_std::string::construct_copy(v116, &v114);
      v116[1] = nullptr;
      g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_insert_unique(
        (int *)&v112,
        (int *)self + 17,
        (int)(uintptr_t)(v96),
        v116);
      v96 = v112;
      g4_std::string::Destroy(v116);
    }
    *((uint32_t *)v96 + 5) = 0;
    v107 = *((void ***)self + 25);
    v92 = (char *)self + 96;
    v99 = (char *)self + 96;
    if ( v107 != nullptr )
    {
      v44 = *((char **)self + 25);
      v97 = (void *)v114;
      v93 = *((uint32_t *)v114 - 3);
      while ( 1 )
      {
        while ( 1 )
        {
          v45 = *((uint32_t **)v44 + 4);
          v46 = v93;
          v47 = *(v45 - 3);
          if ( v47 <= v93 )
            v46 = *(v45 - 3);
          v86 = v46;
          v48 = memcmp(v45, v97, v46);
          if ( v48 == 0 )
            v48 = v47 - v93;
          if ( v48 >= 0 )
            break;
          v44 = *((char **)v44 + 3);
          if ( v44 == nullptr )
            goto LABEL_91;
        }
        v49 = memcmp(v97, v45, v86);
        if ( v49 == 0 )
          v49 = v93 - v47;
        if ( v49 >= 0 )
          break;
        v99 = v44;
        v44 = *((char **)v44 + 2);
        if ( v44 == nullptr )
        {
LABEL_91:
          v92 = v99;
          goto LABEL_92;
        }
      }
      v58 = *((char **)v44 + 3);
      v59 = v93;
      v60 = *((char **)v44 + 2);
      v92 = v99;
      if ( v58 != nullptr )
      {
        v100 = *((char **)v44 + 2);
        v110 = v44;
        do
        {
          while ( 1 )
          {
            v61 = v59;
            v62 = *(uint32_t *)(*((uint32_t *)v58 + 4) - 12);
            if ( v62 <= v59 )
              v61 = *(uint32_t *)(*((uint32_t *)v58 + 4) - 12);
            v63 = memcmp(v97, *((const void **)v58 + 4), v61);
            if ( v63 == 0 )
              v63 = v59 - v62;
            if ( v63 >= 0 )
              break;
            v92 = v58;
            v58 = *((char **)v58 + 2);
            if ( v58 == nullptr )
              goto LABEL_123;
          }
          v58 = *((char **)v58 + 3);
        }
        while ( v58 != nullptr );
LABEL_123:
        v60 = v100;
        v44 = v110;
      }
      v99 = v44;
      if ( v60 != nullptr )
      {
        v64 = v60;
        do
        {
          v65 = *(uint32_t *)(*((uint32_t *)v64 + 4) - 12);
          v66 = v65;
          if ( v59 <= v65 )
            v66 = v59;
          v67 = v65 - v59;
          v68 = memcmp(*((const void **)v64 + 4), v97, v66);
          if ( v68 == 0 )
            v68 = v67;
          if ( v68 >= 0 )
          {
            v99 = v64;
            v64 = *((char **)v64 + 2);
          }
          else
          {
            v64 = *((char **)v64 + 3);
          }
        }
        while ( v64 != nullptr );
      }
    }
LABEL_92:
    if ( *((char **)self + 26) == v99 && v105 == v92 )
    {
      g4_std::Rb_tree_string_pair_string_const_5a9cf3::M_erase(
        (int)(uintptr_t)(self) + 92,
        v107);
      *((uint32_t *)self + 26) = (uint32_t)(uintptr_t)(v105);
      *((uint32_t *)self + 25) = 0;
      *((uint32_t *)self + 27) = (uint32_t)(uintptr_t)(v105);
      *((uint32_t *)self + 28) = 0;
    }
    else if ( v92 != v99 )
    {
      for ( k = v99; ; k = v51 )
      {
        v51 = (char *)sub_19048E0(k);
        v52 = (char *)sub_1904AE0(k, (char *)self + 96);
        g4_std::string::Destroy(v52 + 16);
        opDelete(v52);
        --*((uint32_t *)self + 28);
        if ( v92 == v51 )
          break;
      }
    }
    g4_std::string::Destroy(&v114);
    v103 += 4;
    if ( v109 != v103 )
      continue;
    break;
  }
  v30 = (char *)v120;
  v53 = v121;
  if ( v120 != v121 )
  {
    v54 = (char *)v120;
    do
    {
      s1a = v54;
      v54 += 4;
      g4_std::string::Destroy(s1a);
    }
    while ( v54 != v53 );
  }
LABEL_101:
  v121 = v30;
  if ( *((uint32_t *)self + 16) == 0 )
  {
    g4_std_compat::string_assign((int)(uintptr_t)(self), &unk_1B15112, 0);
    v30 = v121;
  }
  v55 = (char *)v120;
  if ( v30 != v120 )
  {
    do
    {
      s1b = v55;
      v55 += 4;
      g4_std::string::Destroy(s1b);
    }
    while ( v30 != v55 );
    v55 = (char *)v120;
  }
  if ( v55 != nullptr )
    opDelete(v55);
  v56 = v118;
  v57 = (char *)v117;
  if ( v118 != v117 )
  {
    do
    {
      s1c = v57;
      v57 += 4;
      g4_std::string::Destroy(s1c);
    }
    while ( v56 != v57 );
    v57 = (char *)v117;
  }
  if ( v57 != nullptr )
    opDelete(v57);
}


