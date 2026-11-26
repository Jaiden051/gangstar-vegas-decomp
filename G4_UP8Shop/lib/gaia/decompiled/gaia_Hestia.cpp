#include "Core/Utils/DecompTypes.h"
#include "gaia_Hestia.h"

// ----------------------------------------------------------------------------
// Function: gaia::Hestia::Destroy  (binary VA: 0x14aaae0)
// Original: gaia::Hestia::~Hestia
// ----------------------------------------------------------------------------
void gaia::Hestia::Destroy(gaia::Hestia::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095C68);
  v1 = *((uint32_t *)self + 39);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  gaia::BaseServiceManager::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: gaia::Hestia::Destroy_ea14aab50  (binary VA: 0x14aab50)
// Original: gaia::Hestia::~Hestia
// ----------------------------------------------------------------------------
void gaia::Hestia::Destroy_ea14aab50(gaia::Hestia::Self *self)
{
  gaia::Hestia::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: gaia::Hestia::GetFeedEtag  (binary VA: 0x14abf20)
// Original: gaia::Hestia::GetFeedEtag
// ----------------------------------------------------------------------------
int gaia::Hestia::GetFeedEtag(int a1, int a2)
{
  g4_std::string::assign_str(a2, a1 + 156);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: gaia::Hestia::GetClustersByUser  (binary VA: 0x14ac8a0)
// Original: gaia::Hestia::GetClustersByUser
// ----------------------------------------------------------------------------
int gaia::Hestia::GetClustersByUser(uint32_t *a1, uint32_t *a2, size_t *a3, char **a4, char **a5, gaia::GaiaRequest::Self *a6)
{
  gaia::ServiceRequest::Self *v6;
  void *v7;
  void *v8;
  void *v9;
  void *v10;
  void *v11;
  glwebtools::Mutex::Self *v12;
  gaia::ServiceRequest::Self *i;
  gaia::ServiceRequest::Self *v14;
  signed int size;
  void *v16;
  int v17;
  void *v18;
  void *v19;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef gaia::ServiceRequest::Self *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef uint32_t _g4_t_v30[8];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (6u + sizeof(_g4_t_v21)) > _g4_s0 ? (6u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v22)) > _g4_s1 ? (8u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v23)) > _g4_s2 ? (16u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v24)) > _g4_s3 ? (20u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v25)) > _g4_s4 ? (24u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v26)) > _g4_s5 ? (28u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v27)) > _g4_s6 ? (32u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v28)) > _g4_s7 ? (36u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v29)) > _g4_s8 ? (40u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v30)) > _g4_s9 ? (44u + sizeof(_g4_t_v30)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 6u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 8u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 36u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 40u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 44u);

  v6 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v6, a6);
  v23 = v6;
  *((uint32_t *)v6 + 8) = 6507;
  sub_59E340(&v25, "https://", a1 + 13);
  g4_std::string::construct_copy(&v26, &v25);
  g4_std::string::append((int)(uintptr_t)(&v26), "/clusters/users/", 0x10u);
  sub_134F3A0((int)(uintptr_t)(&v24), (int)(uintptr_t)(&v26), (int)(uintptr_t)(a5));
  v7 = (void *)(v26 - 12);
  if ( (uint32_t *)(v26 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  v8 = (void *)(v25 - 12);
  if ( (uint32_t *)(v25 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), (char *)&unk_1B15112, (int)(uintptr_t)(&v21));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "access_token=", (int)(uintptr_t)(&v21) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v27), &v28, a4);
  v9 = (void *)(v28 - 12);
  if ( (uint32_t *)(v28 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "&credential=", (int)(uintptr_t)(&v22));
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v27), &v29, a5);
  v10 = (void *)(v29 - 12);
  if ( (uint32_t *)(v29 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v10);
  }
  g4_std::string::construct_copy(v30, &v24);
  g4_std::string::assign_str((char *)v23 + 36, v30);
  v11 = (void *)(v30[0] - 12);
  if ( (uint32_t *)(v30[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v30[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v11);
  }
  v12 = (glwebtools::Mutex::Self *)(a1 + 31);
  g4_std::string::assign_str((char *)v23 + 48, &v27);
  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(a1 + 31));
  gaia::ServiceRequest::Grab(v23);
  g4_std::deque_gaia_ServiceRequest_b3f9d1::push_back((std::deque<gaia::ServiceRequest::Self *> *)(a1 + 3), &v23);
  glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)(a1 + 31));
  gaia::Condition::Acquire((pthread_mutex_t *)((char *)v23 + 4));
  for ( i = v23; *(uint32_t *)v23 != 2; i = v23 )
    gaia::Condition::Wait((pthread_mutex_t *)((char *)i + 4));
  gaia::Condition::Release((pthread_mutex_t *)((char *)i + 4));
  v14 = v23;
  size = *(uint32_t *)(*((uint32_t *)v23 + 13) - 12);
  *a3 = size;
  if ( size > 0 )
  {
    v16 = malloc(size);
    *a2 = (uint32_t)(uintptr_t)(v16);
    memcpy(v16, *((const void **)v14 + 13), *a3);
  }
  glwebtools::Mutex::Lock(v12);
  *(uint32_t *)v23 = 4;
  v17 = *((uint32_t *)v23 + 7);
  gaia::ServiceRequest::Drop(v23);
  glwebtools::Mutex::Unlock(v12);
  v18 = (void *)(v27 - 12);
  if ( (uint32_t *)(v27 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v18);
  }
  v19 = (void *)(v24 - 12);
  if ( (uint32_t *)(v24 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v19);
  }
  return v17;
}

// ----------------------------------------------------------------------------
// Function: gaia::Hestia::GetClusters  (binary VA: 0x14acc70)
// Original: gaia::Hestia::GetClusters
// ----------------------------------------------------------------------------
int gaia::Hestia::GetClusters(uint32_t *a1, uint32_t *a2, size_t *a3, char **a4, gaia::GaiaRequest::Self *a5)
{
  gaia::ServiceRequest::Self *v5;
  void *v6;
  void *v7;
  void *v8;
  glwebtools::Mutex::Self *v9;
  gaia::ServiceRequest::Self *i;
  gaia::ServiceRequest::Self *v11;
  signed int size;
  void *v13;
  int v14;
  void *v15;
  void *v16;
  typedef int _g4_t_v18;
  typedef gaia::ServiceRequest::Self *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint32_t _g4_t_v24[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (1u + sizeof(_g4_t_v18)) > _g4_s0 ? (1u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v19)) > _g4_s1 ? (8u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v20)) > _g4_s2 ? (12u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v21)) > _g4_s3 ? (16u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v22)) > _g4_s4 ? (20u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v23)) > _g4_s5 ? (24u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v24)) > _g4_s6 ? (28u + sizeof(_g4_t_v24)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 1u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);

  v5 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v5, a5);
  v19 = v5;
  *((uint32_t *)v5 + 8) = 6506;
  sub_59E340(&v21, "https://", a1 + 13);
  g4_std::string::construct_copy(&v20, &v21);
  g4_std::string::append((int)(uintptr_t)(&v20), "/clusters", 9u);
  v6 = (void *)(v21 - 12);
  if ( (uint32_t *)(v21 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), (char *)&unk_1B15112, (int)(uintptr_t)(&v18));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "access_token=", (int)(uintptr_t)(&v18) + 1);
  gaia::BaseServiceManager::appendEncodedParams((int)(uintptr_t)(a1), (int)(uintptr_t)(&v22), &v23, a4);
  v7 = (void *)(v23 - 12);
  if ( (uint32_t *)(v23 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  g4_std::string::construct_copy(v24, &v20);
  g4_std::string::assign_str((char *)v19 + 36, v24);
  v8 = (void *)(v24[0] - 12);
  if ( (uint32_t *)(v24[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v24[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  v9 = (glwebtools::Mutex::Self *)(a1 + 31);
  g4_std::string::assign_str((char *)v19 + 48, &v22);
  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(a1 + 31));
  gaia::ServiceRequest::Grab(v19);
  g4_std::deque_gaia_ServiceRequest_b3f9d1::push_back((std::deque<gaia::ServiceRequest::Self *> *)(a1 + 3), &v19);
  glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)(a1 + 31));
  gaia::Condition::Acquire((pthread_mutex_t *)((char *)v19 + 4));
  for ( i = v19; *(uint32_t *)v19 != 2; i = v19 )
    gaia::Condition::Wait((pthread_mutex_t *)((char *)i + 4));
  gaia::Condition::Release((pthread_mutex_t *)((char *)i + 4));
  v11 = v19;
  size = *(uint32_t *)(*((uint32_t *)v19 + 13) - 12);
  *a3 = size;
  if ( size > 0 )
  {
    v13 = malloc(size);
    *a2 = (uint32_t)(uintptr_t)(v13);
    memcpy(v13, *((const void **)v11 + 13), *a3);
  }
  glwebtools::Mutex::Lock(v9);
  *(uint32_t *)v19 = 4;
  v14 = *((uint32_t *)v19 + 7);
  gaia::ServiceRequest::Drop(v19);
  glwebtools::Mutex::Unlock(v9);
  v15 = (void *)(v22 - 12);
  if ( (uint32_t *)(v22 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v15);
  }
  v16 = (void *)(v20 - 12);
  if ( (uint32_t *)(v20 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v16);
  }
  return v14;
}

// ----------------------------------------------------------------------------
// Function: gaia::Hestia::Construct  (binary VA: 0x14c0bc0)
// Original: gaia::Hestia::Hestia
// ----------------------------------------------------------------------------
int gaia::Hestia::Construct(gaia::BaseServiceManager::Self *a1, int a2, int a3)
{
  int MaxParalelRequests;
  int v5[4];

  MaxParalelRequests = gaia::utils::GetMaxParalelRequests(12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v5) + 1, "hestia", (int)(uintptr_t)(v5));
  gaia::BaseServiceManager::Construct(a1, (int)(uintptr_t)(v5) + 1, a3, MaxParalelRequests);
  g4_std::string::Destroy((char *)v5 + 1);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2095C68);
  *((uint32_t *)a1 + 39) = (uint32_t)(uintptr_t)(&dword_213B814);
  g4_std::string::assign_str((char *)a1 + 52, a2);
  return (int)(uintptr_t)(g4_std_compat::string_assign((int)(uintptr_t)(a1) + 156, &unk_1B15112, 0));
}

// ----------------------------------------------------------------------------
// Function: gaia::Hestia::GetClientConfig  (binary VA: 0x14c5950)
// Original: gaia::Hestia::GetClientConfig
// ----------------------------------------------------------------------------
int gaia::Hestia::GetClientConfig(int a1, uint32_t *a2, size_t *a3, uint32_t *a4, char **a5, char **a6, char **a7, char **a8, char **a9, gaia::GaiaRequest::Self *a10)
{
  gaia::ServiceRequest::Self *v10;
  int v11;
  size_t v12;
  size_t v13;
  size_t n;
  int v15;
  int v16;
  size_t v17;
  size_t v18;
  int v19;
  int v20;
  int i;
  int v22;
  signed int v23;
  void *v24;
  int v25;
  int v26;
  int v28;
  size_t v29;
  size_t v30;
  size_t v31;
  int v32;
  int v33;
  size_t v34;
  size_t v35;
  int v36;
  int v37;
  char *v38;
  size_t v39;
  size_t v40;
  size_t v41;
  int v42;
  int v43;
  size_t v44;
  size_t v45;
  int v46;
  int v47;
  typedef glwebtools::Mutex::Self *_g4_t_s2;
  typedef glwebtools::Mutex::Self *_g4_t_v49;
  typedef glwebtools::Mutex::Self *_g4_t_v50;
  typedef void *_g4_t_v51;
  typedef void *_g4_t_s1;
  typedef char *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef uint32_t *_g4_t_v57;
  typedef char *_g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61[2];
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int64_t _g4_t_v64 __attribute__((aligned(1)));
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef uint32_t *_g4_t_v75;
  typedef uint32_t *_g4_t_v76;
  typedef uint32_t *_g4_t_v77;
  typedef const void *_g4_t_v78;
  typedef char _g4_t_v79[4];
  typedef const void *_g4_t_v80;
  typedef char _g4_t_v81[4];
  typedef const void *_g4_t_v82;
  typedef uint8_t _g4_t_v83[32];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_s2)) > _g4_s0 ? (4u + sizeof(_g4_t_s2)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v49)) > _g4_s1 ? (4u + sizeof(_g4_t_v49)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v50)) > _g4_s2 ? (4u + sizeof(_g4_t_v50)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v51)) > _g4_s3 ? (8u + sizeof(_g4_t_v51)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_s1)) > _g4_s4 ? (8u + sizeof(_g4_t_s1)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v53)) > _g4_s5 ? (8u + sizeof(_g4_t_v53)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v54)) > _g4_s6 ? (12u + sizeof(_g4_t_v54)) : _g4_s6,
    _g4_s8 = (12u + sizeof(_g4_t_v55)) > _g4_s7 ? (12u + sizeof(_g4_t_v55)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v56)) > _g4_s8 ? (12u + sizeof(_g4_t_v56)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v57)) > _g4_s9 ? (16u + sizeof(_g4_t_v57)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v58)) > _g4_s10 ? (16u + sizeof(_g4_t_v58)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_v59)) > _g4_s11 ? (20u + sizeof(_g4_t_v59)) : _g4_s11,
    _g4_s13 = (20u + sizeof(_g4_t_v60)) > _g4_s12 ? (20u + sizeof(_g4_t_v60)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v61)) > _g4_s13 ? (28u + sizeof(_g4_t_v61)) : _g4_s13,
    _g4_s15 = (38u + sizeof(_g4_t_v62)) > _g4_s14 ? (38u + sizeof(_g4_t_v62)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v63)) > _g4_s15 ? (40u + sizeof(_g4_t_v63)) : _g4_s15,
    _g4_s17 = (44u + sizeof(_g4_t_v64)) > _g4_s16 ? (44u + sizeof(_g4_t_v64)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v65)) > _g4_s17 ? (52u + sizeof(_g4_t_v65)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v66)) > _g4_s18 ? (56u + sizeof(_g4_t_v66)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v67)) > _g4_s19 ? (60u + sizeof(_g4_t_v67)) : _g4_s19,
    _g4_s21 = (64u + sizeof(_g4_t_v68)) > _g4_s20 ? (64u + sizeof(_g4_t_v68)) : _g4_s20,
    _g4_s22 = (68u + sizeof(_g4_t_v69)) > _g4_s21 ? (68u + sizeof(_g4_t_v69)) : _g4_s21,
    _g4_s23 = (72u + sizeof(_g4_t_v70)) > _g4_s22 ? (72u + sizeof(_g4_t_v70)) : _g4_s22,
    _g4_s24 = (76u + sizeof(_g4_t_v71)) > _g4_s23 ? (76u + sizeof(_g4_t_v71)) : _g4_s23,
    _g4_s25 = (80u + sizeof(_g4_t_v72)) > _g4_s24 ? (80u + sizeof(_g4_t_v72)) : _g4_s24,
    _g4_s26 = (84u + sizeof(_g4_t_v73)) > _g4_s25 ? (84u + sizeof(_g4_t_v73)) : _g4_s25,
    _g4_s27 = (88u + sizeof(_g4_t_v74)) > _g4_s26 ? (88u + sizeof(_g4_t_v74)) : _g4_s26,
    _g4_s28 = (92u + sizeof(_g4_t_v75)) > _g4_s27 ? (92u + sizeof(_g4_t_v75)) : _g4_s27,
    _g4_s29 = (96u + sizeof(_g4_t_v76)) > _g4_s28 ? (96u + sizeof(_g4_t_v76)) : _g4_s28,
    _g4_s30 = (100u + sizeof(_g4_t_v77)) > _g4_s29 ? (100u + sizeof(_g4_t_v77)) : _g4_s29,
    _g4_s31 = (104u + sizeof(_g4_t_v78)) > _g4_s30 ? (104u + sizeof(_g4_t_v78)) : _g4_s30,
    _g4_s32 = (108u + sizeof(_g4_t_v79)) > _g4_s31 ? (108u + sizeof(_g4_t_v79)) : _g4_s31,
    _g4_s33 = (112u + sizeof(_g4_t_v80)) > _g4_s32 ? (112u + sizeof(_g4_t_v80)) : _g4_s32,
    _g4_s34 = (116u + sizeof(_g4_t_v81)) > _g4_s33 ? (116u + sizeof(_g4_t_v81)) : _g4_s33,
    _g4_s35 = (120u + sizeof(_g4_t_v82)) > _g4_s34 ? (120u + sizeof(_g4_t_v82)) : _g4_s34,
    _g4_s36 = (124u + sizeof(_g4_t_v83)) > _g4_s35 ? (124u + sizeof(_g4_t_v83)) : _g4_s35
  };
  alignas(16) uint8_t _g4_sf[_g4_s36];
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 4u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 4u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 4u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 8u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 8u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 8u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 12u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 12u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 12u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 16u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 16u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 20u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 20u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 28u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 38u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 40u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 44u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 52u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 56u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 60u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 64u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 68u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 72u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 76u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 80u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 84u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 88u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 92u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 96u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 100u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 104u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 108u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 112u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 116u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 120u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 124u);

  v10 = (gaia::ServiceRequest::Self *)opNew(0x98u);
  gaia::ServiceRequest::Construct(v10, a10);
  HIDWORD(v64) = (uint32_t)(uintptr_t)(v10);
  *((uint32_t *)v10 + 8) = 6501;
  g4_std_compat::string_assign((int)(uintptr_t)(v10) + 40, "https://", 8u);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v65), "/configs/users/me", (int)(uintptr_t)(&v62));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v66), "/", (int)(uintptr_t)(&v62) + 1);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v65), &v66, a8);
  g4_std::string::Destroy(&v66);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v67), (char *)&unk_1B15112, (int)(uintptr_t)(&v63));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v68), "access_token=", (int)(uintptr_t)(&v63) + 1);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v67), &v68, a5);
  g4_std::string::Destroy(&v68);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v69), "&profile_name=", (int)(uintptr_t)(&v63) + 2);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v67), &v69, a6);
  g4_std::string::Destroy(&v69);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v70), "&clusters_space=", (int)(uintptr_t)(&v63) + 3);
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v67), &v70, a7);
  g4_std::string::Destroy(&v70);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v71), "&now=", (int)(uintptr_t)(&v64));
  gaia::BaseServiceManager::appendEncodedParams(a1, (int)(uintptr_t)(&v67), &v71, a9);
  g4_std::string::Destroy(&v71);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v72), "Etag", (int)(uintptr_t)(&v64) + 1);
  v54 = HIDWORD(v64);
  v59 = HIDWORD(v64) + 88;
  v11 = *(uint32_t *)(HIDWORD(v64) + 92);
  if ( v11 == 0 )
  {
    v51 = (void *)(HIDWORD(v64) + 88);
LABEL_59:
    v75 = &dword_213B814;
    g4_std::string::construct_copy(&v78, &v72);
    g4_std::string::construct_copy(v79, &v75);
    g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_insert_unique(
      v61,
      (uint32_t *)(v54 + 84),
      (int)(uintptr_t)(v51),
      &v78);
    v51 = (void *)v61[0];
    g4_std::string::Destroy(v79);
    g4_std::string::Destroy(&v78);
    g4_std::string::Destroy(&v75);
    goto LABEL_16;
  }
  s2 = (glwebtools::Mutex::Self *)v72;
  v51 = (void *)(HIDWORD(v64) + 88);
  v12 = *(uint32_t *)(v72 - 12);
  do
  {
    while ( 1 )
    {
      v13 = *(uint32_t *)(*(uint32_t *)(v11 + 16) - 12);
      n = v13;
      if ( v12 <= v13 )
        n = v12;
      v15 = v13 - v12;
      v16 = memcmp(*(const void **)(v11 + 16), s2, n);
      if ( v16 == 0 )
        v16 = v15;
      if ( v16 < 0 )
        break;
      v51 = (void *)v11;
      v11 = *(uint32_t *)(v11 + 8);
      if ( v11 == 0 )
        goto LABEL_10;
    }
    v11 = *(uint32_t *)(v11 + 12);
  }
  while ( v11 != 0 );
LABEL_10:
  if ( (void *)v59 == v51 )
    goto LABEL_59;
  v17 = *(uint32_t *)(*((uint32_t *)v51 + 4) - 12);
  v18 = v17;
  if ( v12 <= v17 )
    v18 = v12;
  v19 = v12 - v17;
  v20 = memcmp(s2, *((const void **)v51 + 4), v18);
  if ( v20 == 0 )
    v20 = v19;
  if ( v20 < 0 )
    goto LABEL_59;
LABEL_16:
  g4_std_compat::string_assign((int)(uintptr_t)(v51) + 20, &unk_1B15112, 0);
  g4_std::string::Destroy(&v72);
  if ( *(uint32_t *)(*a4 - 12) == 0 )
    goto LABEL_17;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v73), "If-None-Match", (int)(uintptr_t)(&v64) + 2);
  v56 = HIDWORD(v64);
  v58 = (char *)(HIDWORD(v64) + 64);
  v38 = *(char **)(HIDWORD(v64) + 68);
  if ( v38 != nullptr )
  {
    v50 = (glwebtools::Mutex::Self *)v73;
    v53 = (char *)(HIDWORD(v64) + 64);
    v39 = *(uint32_t *)(v73 - 12);
    do
    {
      while ( 1 )
      {
        v40 = v39;
        v41 = *(uint32_t *)(*((uint32_t *)v38 + 4) - 12);
        if ( v41 <= v39 )
          v40 = *(uint32_t *)(*((uint32_t *)v38 + 4) - 12);
        v42 = v41 - v39;
        v43 = memcmp(*((const void **)v38 + 4), v50, v40);
        if ( v43 == 0 )
          v43 = v42;
        if ( v43 < 0 )
          break;
        v53 = v38;
        v38 = *((char **)v38 + 2);
        if ( v38 == nullptr )
          goto LABEL_50;
      }
      v38 = *((char **)v38 + 3);
    }
    while ( v38 != nullptr );
LABEL_50:
    if ( v58 != v53 )
    {
      v44 = v39;
      v45 = *(uint32_t *)(*((uint32_t *)v53 + 4) - 12);
      if ( v45 <= v39 )
        v44 = *(uint32_t *)(*((uint32_t *)v53 + 4) - 12);
      v46 = v39 - v45;
      v47 = memcmp(v50, *((const void **)v53 + 4), v44);
      if ( v47 == 0 )
        v47 = v46;
      if ( v47 >= 0 )
        goto LABEL_57;
    }
  }
  else
  {
    v53 = (char *)(HIDWORD(v64) + 64);
  }
  v76 = &dword_213B814;
  g4_std::string::construct_copy(&v80, &v73);
  g4_std::string::construct_copy(v81, &v76);
  g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_insert_unique(
    v61,
    (uint32_t *)(v56 + 60),
    (int)(uintptr_t)(v53),
    &v80);
  v53 = (char *)v61[0];
  g4_std::string::Destroy(v81);
  g4_std::string::Destroy(&v80);
  g4_std::string::Destroy(&v76);
LABEL_57:
  g4_std::string::assign_str(v53 + 20, a4);
  g4_std::string::Destroy(&v73);
LABEL_17:
  g4_std::string::assign_str(HIDWORD(v64) + 44, &v65);
  g4_std::string::assign_str(HIDWORD(v64) + 48, &v67);
  v49 = (glwebtools::Mutex::Self *)(a1 + 124);
  glwebtools::Mutex::Lock((glwebtools::Mutex::Self *)(a1 + 124));
  gaia::ServiceRequest::Grab((gaia::ServiceRequest::Self *)HIDWORD(v64));
  g4_std::deque_gaia_ServiceRequest_b3f9d1::push_back(
    (std::deque<gaia::ServiceRequest::Self *> *)(a1 + 12),
    (gaia::ServiceRequest::Self *const *)&v64 + 1);
  glwebtools::Mutex::Unlock((glwebtools::Mutex::Self *)(a1 + 124));
  gaia::Condition::Acquire((pthread_mutex_t *)(HIDWORD(v64) + 4));
  for ( i = HIDWORD(v64); *(uint32_t *)HIDWORD(v64) != 2; i = HIDWORD(v64) )
    gaia::Condition::Wait((pthread_mutex_t *)(i + 4));
  gaia::Condition::Release((pthread_mutex_t *)(i + 4));
  v22 = HIDWORD(v64);
  v23 = *(uint32_t *)(*(uint32_t *)(HIDWORD(v64) + 52) - 12);
  *a3 = v23;
  if ( v23 > 0 )
  {
    v24 = malloc(v23);
    *a2 = (uint32_t)(uintptr_t)(v24);
    memcpy(v24, *(const void **)(v22 + 52), *a3);
  }
  v25 = *(uint32_t *)(v22 + 28);
  if ( v25 == 304 || v25 == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v74), "Etag", (int)(uintptr_t)(&v64) + 3);
    v57 = (uint32_t *)HIDWORD(v64);
    v60 = HIDWORD(v64) + 88;
    v28 = *(uint32_t *)(HIDWORD(v64) + 92);
    if ( v28 != 0 )
    {
      s1 = (void *)v74;
      v55 = HIDWORD(v64) + 88;
      v29 = *(uint32_t *)(v74 - 12);
      do
      {
        while ( 1 )
        {
          v30 = *(uint32_t *)(*(uint32_t *)(v28 + 16) - 12);
          v31 = v30;
          if ( v29 <= v30 )
            v31 = v29;
          v32 = v30 - v29;
          v33 = memcmp(*(const void **)(v28 + 16), s1, v31);
          if ( v33 == 0 )
            v33 = v32;
          if ( v33 < 0 )
            break;
          v55 = v28;
          v28 = *(uint32_t *)(v28 + 8);
          if ( v28 == 0 )
            goto LABEL_33;
        }
        v28 = *(uint32_t *)(v28 + 12);
      }
      while ( v28 != 0 );
LABEL_33:
      if ( v60 != v55 )
      {
        v34 = *(uint32_t *)(*(uint32_t *)(v55 + 16) - 12);
        v35 = v34;
        if ( v29 <= v34 )
          v35 = v29;
        v36 = v29 - v34;
        v37 = memcmp(s1, *(const void **)(v55 + 16), v35);
        if ( v37 == 0 )
          v37 = v36;
        if ( v37 >= 0 )
          goto LABEL_40;
      }
    }
    else
    {
      v55 = HIDWORD(v64) + 88;
    }
    v77 = &dword_213B814;
    g4_std::string::construct_copy(&v82, &v74);
    g4_std::string::construct_copy(v83, &v77);
    g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_insert_unique(
      v61,
      v57 + 21,
      v55,
      &v82);
    v55 = v61[0];
    g4_std::string::Destroy(v83);
    g4_std::string::Destroy(&v82);
    g4_std::string::Destroy(&v77);
LABEL_40:
    g4_std::string::assign_str(a1 + 156, v55 + 20);
    g4_std::string::Destroy(&v74);
    g4_std::string::assign_str(a4, a1 + 156);
  }
  glwebtools::Mutex::Lock(v49);
  *(uint32_t *)HIDWORD(v64) = 4;
  v26 = *(uint32_t *)(HIDWORD(v64) + 28);
  gaia::ServiceRequest::Drop((gaia::ServiceRequest::Self *)HIDWORD(v64));
  glwebtools::Mutex::Unlock(v49);
  g4_std::string::Destroy(&v67);
  g4_std::string::Destroy(&v65);
  return v26;
}


