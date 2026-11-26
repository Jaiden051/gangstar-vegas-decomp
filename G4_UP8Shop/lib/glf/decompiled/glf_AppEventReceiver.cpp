#include "Core/Utils/DecompTypes.h"
#include "glf_AppEventReceiver.h"

// ----------------------------------------------------------------------------
// Function: glf::AppEventReceiver::Increment  (binary VA: 0xc6c9c0)
// Original: glf::AppEventReceiver::Increment
// ----------------------------------------------------------------------------
int glf::AppEventReceiver::Increment(glf::AppEventReceiver::Self *self, const char *a2, int64_t a3)
{
  char *v3;
  void *v4;
  void *v5;
  uint32_t *v6;
  int result;
  void *v8;
  typedef uint64_t _g4_t_v9;
  typedef glf::PropertyMap::Self *_g4_t_v10;
  typedef int64_t _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13[4];
  typedef int _g4_t_v14;
  typedef int _g4_t_v15[2];
  typedef int64_t _g4_t_v16 __attribute__((aligned(1)));
  typedef uint32_t *_g4_t_v17;
  typedef uint32_t _g4_t_v18[5];
  typedef int _g4_t_v19;
  typedef glf::AppEventReceiver::Self **_g4_t_v20;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v10)) > _g4_s1 ? (20u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v11)) > _g4_s2 ? (24u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (42u + sizeof(_g4_t_v12)) > _g4_s3 ? (42u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v13)) > _g4_s4 ? (48u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v14)) > _g4_s5 ? (64u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (68u + sizeof(_g4_t_v15)) > _g4_s6 ? (68u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (76u + sizeof(_g4_t_v16)) > _g4_s7 ? (76u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (84u + sizeof(_g4_t_v17)) > _g4_s8 ? (84u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (88u + sizeof(_g4_t_v18)) > _g4_s9 ? (88u + sizeof(_g4_t_v18)) : _g4_s9,
    _g4_s11 = (108u + sizeof(_g4_t_v19)) > _g4_s10 ? (108u + sizeof(_g4_t_v19)) : _g4_s10,
    _g4_s12 = (120u + sizeof(_g4_t_v20)) > _g4_s11 ? (120u + sizeof(_g4_t_v20)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 42u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 48u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 64u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 68u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 76u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 84u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 88u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 108u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 120u);

  v20 = &self;
  v9 = __PAIR64__(a3, (unsigned int)(uintptr_t)(a2));
  v3 = (char *)self;
  v10 = (glf::PropertyMap::Self *)glf::PropertyMap::sThis;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v13), (char *)self, (int)(uintptr_t)(&v12));
  glf::PropertyMap::GetPropertyEx(v18, (int)(uintptr_t)(v10), (void **)v13, 2);
  v11 = v18[0] == 0;
  v4 = (void *)(v19 - 12);
  if ( (uint32_t *)(v19 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v5 = (void *)(v13[0] - 12);
  if ( (uint32_t *)(v13[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v13[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), v3, (int)(uintptr_t)(&v12) + 1);
  v17 = &dword_213B814;
  v16 = v9 + v11;
  v15[0] = 0;
  v15[1] = 2;
  glf::PropertyMap::SetProperty(v10, (const char **)&v14, v15, 0);
  v6 = v17 - 3;
  if ( v17 - 3 != dword_213B808 && __sync_fetch_and_add(v17 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v6);
  result = v14;
  v8 = (void *)(v14 - 12);
  if ( (uint32_t *)(v14 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
  {
    { g4_std::string::Rep::M_destroy(v8); return 0; }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::AppEventReceiver::Increment  (binary VA: 0xc6cb80)
// Original: glf::AppEventReceiver::Increment
// ----------------------------------------------------------------------------
int glf::AppEventReceiver::Increment(glf::AppEventReceiver::Self *self, const char *a2)
{
  glf::PropertyMap::Self *v2;
  char *v3;
  volatile int32_t *v4;
  int result;
  void *v6;
  typedef char *_g4_t_v7;
  typedef char *_g4_t_v8;
  typedef const char *_g4_t_v9;
  typedef bool _g4_t_v10;
  typedef void *_g4_t_v11;
  typedef void *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14[4];
  typedef int _g4_t_v15;
  typedef int _g4_t_v16[4];
  typedef volatile int32_t *_g4_t_v17;
  typedef int _g4_t_v18[5];
  typedef int _g4_t_v19;
  typedef glf::AppEventReceiver::Self **_g4_t_v20;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v8)) > _g4_s1 ? (0u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v9)) > _g4_s2 ? (4u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v10)) > _g4_s3 ? (8u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v11)) > _g4_s4 ? (12u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v12)) > _g4_s5 ? (12u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (26u + sizeof(_g4_t_v13)) > _g4_s6 ? (26u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v14)) > _g4_s7 ? (32u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v15)) > _g4_s8 ? (48u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v16)) > _g4_s9 ? (52u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v17)) > _g4_s10 ? (68u + sizeof(_g4_t_v17)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v18)) > _g4_s11 ? (72u + sizeof(_g4_t_v18)) : _g4_s11,
    _g4_s13 = (92u + sizeof(_g4_t_v19)) > _g4_s12 ? (92u + sizeof(_g4_t_v19)) : _g4_s12,
    _g4_s14 = (104u + sizeof(_g4_t_v20)) > _g4_s13 ? (104u + sizeof(_g4_t_v20)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 26u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 48u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 52u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 68u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 72u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 92u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 104u);

  v20 = &self;
  v9 = a2;
  v2 = (glf::PropertyMap::Self *)glf::PropertyMap::sThis;
  v7 = (char *)self;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v14), (char *)self, (int)(uintptr_t)(&v13));
  glf::PropertyMap::GetPropertyEx((uint32_t *)v18, (int)(uintptr_t)v2, (void **)v14, 1);
  v10 = v18[0] == 0;
  v3 = v7;
  v11 = (void *)(v19 - 12);
  if ( (uint32_t *)(v19 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v11);
    v3 = v7;
  }
  v12 = (void *)(v14[0] - 12);
  if ( (uint32_t *)(v14[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v14[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v8 = v3;
    g4_std::string::Rep::M_destroy(v12);
    v3 = v8;
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), v3, (int)(uintptr_t)(&v13) + 1);
  v17 = (volatile int32_t *)&dword_213B814;
  v16[2] = (int)(uintptr_t)(&v9[v10]);
  v16[0] = 0;
  v16[1] = 1;
  glf::PropertyMap::SetProperty(v2, (int)(uintptr_t)(&v15), (int)(uintptr_t)(v16), 0);
  v4 = v17 - 3;
  if ( v17 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v17 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy((void *)v4);
  result = v15;
  v6 = (void *)(v15 - 12);
  if ( (uint32_t *)(v15 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
  {
    { g4_std::string::Rep::M_destroy(v6); return 0; }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::AppEventReceiver::GetIdleTime  (binary VA: 0xc6cd50)
// Original: glf::AppEventReceiver::GetIdleTime
// ----------------------------------------------------------------------------
int64_t glf::AppEventReceiver::GetIdleTime(glf::AppEventReceiver::Self *self)
{
  int64_t v1; // rax
  glf::Self *v3;

  LODWORD(v1) = glf::GetMilliseconds(v3);
  return v1 - *((uint64_t *)self + 4);
}

// ----------------------------------------------------------------------------
// Function: glf::AppEventReceiver::ResetIdleTime  (binary VA: 0xc6cd80)
// Original: glf::AppEventReceiver::ResetIdleTime
// ----------------------------------------------------------------------------
int glf::AppEventReceiver::ResetIdleTime(glf::AppEventReceiver::Self *self)
{
  int64_t v1; // rax
  int64_t v2;
  int64_t v3; // rax
  void *v4;
  void *v5;
  void *v6;
  void *v7;
  typedef glf::Self *_g4_t_v9;
  typedef int64_t _g4_t_v10;
  typedef glf::PropertyMap::Self *_g4_t_v11;
  typedef glf::AppEventReceiver::Self *_g4_t_v12;
  typedef int64_t _g4_t_v13;
  typedef int64_t _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16[4];
  typedef int _g4_t_v17[4];
  typedef int _g4_t_v18[2];
  typedef uint32_t _g4_t_v19[3];
  typedef int _g4_t_v20;
  typedef glf::AppEventReceiver::Self **_g4_t_v21;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v10)) > _g4_s1 ? (32u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v11)) > _g4_s2 ? (48u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v12)) > _g4_s3 ? (52u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v13)) > _g4_s4 ? (56u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v14)) > _g4_s5 ? (56u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (74u + sizeof(_g4_t_v15)) > _g4_s6 ? (74u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v16)) > _g4_s7 ? (80u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (96u + sizeof(_g4_t_v17)) > _g4_s8 ? (96u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (112u + sizeof(_g4_t_v18)) > _g4_s9 ? (112u + sizeof(_g4_t_v18)) : _g4_s9,
    _g4_s11 = (120u + sizeof(_g4_t_v19)) > _g4_s10 ? (120u + sizeof(_g4_t_v19)) : _g4_s10,
    _g4_s12 = (132u + sizeof(_g4_t_v20)) > _g4_s11 ? (132u + sizeof(_g4_t_v20)) : _g4_s11,
    _g4_s13 = (152u + sizeof(_g4_t_v21)) > _g4_s12 ? (152u + sizeof(_g4_t_v21)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 32u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 48u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 52u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 56u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 56u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 74u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 80u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 96u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 112u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 120u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 132u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 152u);

  v21 = &self;
  v12 = self;
  LODWORD(v1) = glf::GetMilliseconds(v9);
  v2 = v1;
  v3 = v1 - *((uint64_t *)v12 + 4);
  v13 = v3;
  if ( v3 > 20000 )
  {
    v11 = (glf::PropertyMap::Self *)glf::PropertyMap::sThis;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v16), "session.idle", (int)(uintptr_t)(&v15));
    glf::PropertyMap::GetPropertyEx((uint32_t *)v18, (int)(uintptr_t)v11, (void **)v16, 2);
    v10 = 0;
    if ( v18[0] == 0 )
      v10 = *(uint64_t *)&v19[1];
    v4 = (void *)(v20 - 12);
    if ( (uint32_t *)(v20 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v20 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    v14 = v10 + v13;
    v5 = (void *)(v16[0] - 12);
    if ( (uint32_t *)(v16[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v16[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v17), "session.idle", (int)(uintptr_t)(&v15) + 1);
    v18[0] = 0;
    v18[1] = 2;
    v19[2] = (uint32_t)(uintptr_t)(&dword_213B814);
    *(uint64_t *)v19 = v14;
    glf::PropertyMap::SetProperty(v11, (int)(uintptr_t)(v17), (int)(uintptr_t)(v18), 1);
    v6 = (void *)(v19[2] - 12);
    if ( (uint32_t *)(v19[2] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v19[2] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    LODWORD(v3) = v17[0];
    v7 = (void *)(v17[0] - 12);
    if ( (uint32_t *)(v17[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v17[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
  }
  *((uint64_t *)v12 + 4) = v2;
  return v3;
}

// ----------------------------------------------------------------------------
// Function: glf::AppEventReceiver::Update  (binary VA: 0xc6cfe0)
// Original: glf::AppEventReceiver::Update
// ----------------------------------------------------------------------------
int glf::AppEventReceiver::Update(glf::AppEventReceiver::Self *self)
{
  int64_t v1; // rax
  int64_t v2;
  uint32_t *v3;
  char *v4;
  int64_t IdleTime; // rax
  typedef glf::Self *_g4_t_v7;
  typedef glf::PropertyMap::Self *_g4_t_v8;
  typedef int _g4_t_v9;
  typedef const char *_g4_t_v10[3];
  typedef uint64_t _g4_t_v11[2];
  typedef uint32_t *_g4_t_v12;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v8)) > _g4_s1 ? (32u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (49u + sizeof(_g4_t_v9)) > _g4_s2 ? (49u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v10)) > _g4_s3 ? (52u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v11)) > _g4_s4 ? (64u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (80u + sizeof(_g4_t_v12)) > _g4_s5 ? (80u + sizeof(_g4_t_v12)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 49u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 52u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 64u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 80u);

  LODWORD(v1) = glf::GetMilliseconds(v7);
  v8 = (glf::PropertyMap::Self *)glf::PropertyMap::sThis;
  v2 = v1 - *((uint64_t *)self + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v10), glf::gPropertySessionRunningDuration[0], (int)(uintptr_t)(&v9));
  v11[1] = v2;
  v11[0] = 0x200000000LL;
  v12 = &dword_213B814;
  glf::PropertyMap::SetProperty(v8, v10, v11, 0);
  v3 = v12 - 3;
  if ( v12 - 3 != dword_213B808 && __sync_fetch_and_add(v12 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v3);
  v4 = (char *)(v10[0] - 12);
  if ( (uint32_t *)v10[0] - 3 != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)v10[0] - 1, 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  IdleTime = glf::AppEventReceiver::GetIdleTime(self);
  if ( IdleTime > 60000 )
    LODWORD(IdleTime) = glf::AppEventReceiver::ResetIdleTime(self);
  return IdleTime;
}

// ----------------------------------------------------------------------------
// Function: glf::AppEventReceiver::OnEvent  (binary VA: 0xc6d1d0)
// Original: glf::AppEventReceiver::OnEvent
// ----------------------------------------------------------------------------
int glf::AppEventReceiver::OnEvent(glf::Self *a1, int a2)
{
  glf::PropertyMap::Self *v3;
  int v4;
  volatile int32_t *v5;
  void *v6;
  int v7;
  int v8;
  volatile int32_t *v9;
  void *v10;
  int64_t v11; // rax
  int64_t v12; // rax
  typedef glf::Self *_g4_t_v13;
  typedef glf::Self *_g4_t_v14;
  typedef long double _g4_t_v15 __attribute__((aligned(1)));
  typedef glf::Self *_g4_t_v16;
  typedef int64_t _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20[4];
  typedef int _g4_t_v21[3];
  typedef uint32_t _g4_t_v22[4];
  typedef volatile int32_t *_g4_t_v23;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v14)) > _g4_s1 ? (4u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v15)) > _g4_s2 ? (4u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v16)) > _g4_s3 ? (4u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v17)) > _g4_s4 ? (8u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v18)) > _g4_s5 ? (16u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (46u + sizeof(_g4_t_v19)) > _g4_s6 ? (46u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v20)) > _g4_s7 ? (52u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v21)) > _g4_s8 ? (68u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v22)) > _g4_s9 ? (80u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (96u + sizeof(_g4_t_v23)) > _g4_s10 ? (96u + sizeof(_g4_t_v23)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 46u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 52u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 68u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 80u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 96u);

  if ( *(uint16_t *)a2 == 101 )
  {
    v3 = (glf::PropertyMap::Self *)glf::PropertyMap::sThis;
    v4 = *(uint32_t *)(a2 + 4);
    if ( v4 == 1 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v20), "state.foreground", (int)(uintptr_t)(&v19));
      v22[0] = 0;
      v22[1] = 4;
      LOBYTE(v22[2]) = 1;
      v23 = (volatile int32_t *)&dword_213B814;
      glf::PropertyMap::SetProperty(v3, (int)(uintptr_t)(v20), (int)(uintptr_t)(v22), 0);
      v9 = v23 - 3;
      if ( v23 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v23 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy((void *)v9);
      v10 = (void *)(v20[0] - 12);
      if ( (uint32_t *)(v20[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v20[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v10);
      }
      LODWORD(v11) = glf::GetTicks((glf::Self *)LODWORD(v15));
      *(uint64_t *)&v15 = v11 - *((uint64_t *)a1 + 3);
      glf::OffsetTimer((glf::Self *)(v11 - *((uint32_t *)a1 + 6)), *(int64_t *)((char *)&v15 + 4));
      LODWORD(v12) = glf::GetMilliseconds(v16);
      v17 = v12 - *((uint64_t *)a1 + 2);
      glf::AppEventReceiver::Increment(
        (glf::AppEventReceiver::Self *)glf::gPropertySessionTimeInBackground[0],
        (const char *)(v12 - *((uint32_t *)a1 + 4)),
        *(int64_t *)(&v18 - 1));
      glf::AppEventReceiver::Increment(
        (glf::AppEventReceiver::Self *)glf::gPropertySessionResumeCount[0],
        (const char *)&dword_0 + 1);
    }
    else if ( v4 == 2 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v21), "state.foreground", (int)(uintptr_t)(&v19) + 1);
      v22[0] = 0;
      v22[1] = 4;
      LOBYTE(v22[2]) = 0;
      v23 = (volatile int32_t *)&dword_213B814;
      glf::PropertyMap::SetProperty(v3, (int)(uintptr_t)(v21), (int)(uintptr_t)(v22), 0);
      v5 = v23 - 3;
      if ( v23 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v23 - 1, 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy((void *)v5);
      v6 = (void *)(v21[0] - 12);
      if ( (uint32_t *)(v21[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v21[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v6);
      }
      glf::AppEventReceiver::ResetIdleTime((glf::AppEventReceiver::Self *)(a1));
      *((uint32_t *)a1 + 4) = glf::GetMilliseconds(v13);
      *((uint32_t *)a1 + 5) = v7;
      *((uint32_t *)a1 + 6) = glf::GetTicks(v14);
      *((uint32_t *)a1 + 7) = v8;
    }
  }
  else if ( *(uint16_t *)a2 == 217 )
  {
    glf::AppEventReceiver::ResetIdleTime((glf::AppEventReceiver::Self *)(a1));
    return 0;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glf::AppEventReceiver::Destroy  (binary VA: 0xc6e850)
// Original: glf::AppEventReceiver::~AppEventReceiver
// ----------------------------------------------------------------------------
void glf::AppEventReceiver::Destroy(glf::App::Self **self)
{
  glf::EventManager::Self *EventMgr;

  *self = (glf::App::Self *)((uint32_t)(uintptr_t)&off_206D360);
  EventMgr = (glf::EventManager::Self *)glf::App::GetEventMgr(*(self + 10));
  glf::EventManager::RemoveEventReceiver(EventMgr, (glf::EventReceiver::Self *)self);
  *self = (glf::App::Self *)((uint32_t)(uintptr_t)&off_206D428);
}

// ----------------------------------------------------------------------------
// Function: glf::AppEventReceiver::Destroy_eac6e8b0  (binary VA: 0xc6e8b0)
// Original: glf::AppEventReceiver::~AppEventReceiver
// ----------------------------------------------------------------------------
void glf::AppEventReceiver::Destroy_eac6e8b0(glf::App::Self **self)
{
  glf::AppEventReceiver::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glf::AppEventReceiver::Construct  (binary VA: 0xc6e8f0)
// Original: glf::AppEventReceiver::AppEventReceiver
// ----------------------------------------------------------------------------
glf::AppEventReceiver::Self * glf::AppEventReceiver::Construct(glf::AppEventReceiver::Self *self, glf::App::Self *a2)
{
  int Milliseconds;
  int v3;
  volatile int32_t *v4;
  void *v5;
  volatile int32_t *v6;
  void *v7;
  volatile int32_t *v8;
  void *v9;
  volatile int32_t *v10;
  void *v11;
  glf::EventManager::Self *EventMgr;
  typedef glf::Self *_g4_t_v14;
  typedef glf::PropertyMap::Self *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17[4];
  typedef int _g4_t_v18[4];
  typedef int _g4_t_v19[4];
  typedef int _g4_t_v20[3];
  typedef uint32_t _g4_t_v21[4];
  typedef volatile int32_t *_g4_t_v22;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v15)) > _g4_s1 ? (40u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v16)) > _g4_s2 ? (48u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v17)) > _g4_s3 ? (60u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (76u + sizeof(_g4_t_v18)) > _g4_s4 ? (76u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (92u + sizeof(_g4_t_v19)) > _g4_s5 ? (92u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (108u + sizeof(_g4_t_v20)) > _g4_s6 ? (108u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (120u + sizeof(_g4_t_v21)) > _g4_s7 ? (120u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (136u + sizeof(_g4_t_v22)) > _g4_s8 ? (136u + sizeof(_g4_t_v22)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 48u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 60u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 76u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 92u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 108u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 120u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 136u);

  *((uint8_t *)self + 4) = 1;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D360);
  Milliseconds = glf::GetMilliseconds(v14);
  *((uint32_t *)self + 2) = Milliseconds;
  *((uint32_t *)self + 4) = Milliseconds;
  *((uint32_t *)self + 8) = Milliseconds;
  *((uint32_t *)self + 10) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 3) = v3;
  *((uint32_t *)self + 5) = v3;
  *((uint32_t *)self + 9) = v3;
  v15 = (glf::PropertyMap::Self *)glf::PropertyMap::sThis;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v17), glf::gPropertySessionStart, (int)(uintptr_t)(&v16));
  v21[3] = *((uint32_t *)self + 3);
  v21[0] = 0;
  v21[1] = 2;
  v22 = (volatile int32_t *)&dword_213B814;
  v21[2] = *((uint32_t *)self + 2);
  glf::PropertyMap::SetProperty(v15, (int)(uintptr_t)(v17), (int)(uintptr_t)(v21), 9);
  v4 = v22 - 3;
  if ( v22 - 3 != (volatile int32_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add(v22 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy((void *)v4);
  v5 = (void *)(v17[0] - 12);
  if ( (uint32_t *)(v17[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v17[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v18), glf::gPropertySessionRunningDuration[0], (int)(uintptr_t)(&v16) + 1);
  v22 = (volatile int32_t *)&dword_213B814;
  v21[0] = 0;
  v21[1] = 2;
  v21[2] = 0;
  v21[3] = 0;
  glf::PropertyMap::SetProperty(v15, (int)(uintptr_t)(v18), (int)(uintptr_t)(v21), 9);
  v6 = v22 - 3;
  if ( v22 - 3 != (volatile int32_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add(v22 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy((void *)v6);
  v7 = (void *)(v18[0] - 12);
  if ( (uint32_t *)(v18[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v18[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v19), glf::gPropertySessionTimeInBackground[0], (int)(uintptr_t)(&v16) + 2);
  v22 = (volatile int32_t *)&dword_213B814;
  v21[0] = 0;
  v21[1] = 2;
  v21[2] = 0;
  v21[3] = 0;
  glf::PropertyMap::SetProperty(v15, (int)(uintptr_t)(v19), (int)(uintptr_t)(v21), 9);
  v8 = v22 - 3;
  if ( v22 - 3 != (volatile int32_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add(v22 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy((void *)v8);
  v9 = (void *)(v19[0] - 12);
  if ( (uint32_t *)(v19[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v19[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v20), glf::gPropertySessionResumeCount[0], (int)(uintptr_t)(&v16) + 3);
  v22 = (volatile int32_t *)&dword_213B814;
  v21[0] = 0;
  v21[1] = 1;
  v21[2] = 0;
  glf::PropertyMap::SetProperty(v15, (int)(uintptr_t)(v20), (int)(uintptr_t)(v21), 9);
  v10 = v22 - 3;
  if ( v22 - 3 != (volatile int32_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add(v22 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy((void *)v10);
  v11 = (void *)(v20[0] - 12);
  if ( (uint32_t *)(v20[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v20[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v11);
  }
  EventMgr = (glf::EventManager::Self *)glf::App::GetEventMgr(*((glf::App::Self **)self + 10));
  return (glf::EventManager::AddEventReceiver(EventMgr, self, 1000), (glf::AppEventReceiver::Self *)0);
}


