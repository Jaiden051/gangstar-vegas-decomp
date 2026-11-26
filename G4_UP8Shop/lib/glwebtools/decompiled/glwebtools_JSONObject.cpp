#include "Core/Utils/DecompTypes.h"
#include "glwebtools_JSONObject.h"

// ----------------------------------------------------------------------------
// Function: glwebtools::JSONObject::Clear  (binary VA: 0x13de050)
// Original: glwebtools::JSONObject::Clear
// ----------------------------------------------------------------------------
glwebtools::JSONObject::Self * glwebtools::JSONObject::Clear(glwebtools::JSONObject::Self ***self)
{
  glwebtools::JSONObject::Self *result;
  glwebtools::JSONObject::Self **v2;
  glwebtools::JSONObject::Self **v3;
  glwebtools::JSONObject::Self *v4;
  uint32_t *v5;
  glwebtools::JSONObject::Self **v6;

  result = (glwebtools::JSONObject::Self *)self;
  v2 = *self;
  v6 = *(self + 1);
  if ( *self != v6 )
  {
    v3 = *self;
    do
    {
      v4 = v3[1];
      if ( (uint32_t *)((char *)v4 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)v4 - 1, 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((char *)v4 - 12);
      }
      result = *v3;
      v5 = (uint32_t *)((char *)*v3 - 12);
      if ( v5 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)result - 1, 0xFFFFFFFF) <= 0 )
        result = (g4_std::string::Rep::M_destroy(v5), (glwebtools::JSONObject::Self *)0);
      v3 += 2;
    }
    while ( v6 != v3 );
  }
  *(self + 1) = v2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JSONObject::Find  (binary VA: 0x13de100)
// Original: glwebtools::JSONObject::Find
// ----------------------------------------------------------------------------
uint32_t * glwebtools::JSONObject::Find(uint32_t *a1, int *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  size_t n;
  const void *s1;
  int v8;
  const void *v9;
  const void *v10;
  int v11;
  void *v12;
  void *v13;
  int v15;
  size_t v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef char *_g4_t_s2;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef char *_g4_t_v25;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v17)) > _g4_s0 ? (8u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v18)) > _g4_s1 ? (16u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v19)) > _g4_s2 ? (16u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v20)) > _g4_s3 ? (20u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_s2)) > _g4_s4 ? (24u + sizeof(_g4_t_s2)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v22)) > _g4_s5 ? (28u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v23)) > _g4_s6 ? (36u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v24)) > _g4_s7 ? (40u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v25)) > _g4_s8 ? (44u + sizeof(_g4_t_v25)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);

  g4_std::string::construct_copy(&v23, a3);
  g4_std::string::construct_copy(&v24, &v23);
  v3 = *a2;
  v22 = a2[1];
  g4_std::string::construct_copy(&v25, &v24);
  v4 = (v22 - v3) >> 3;
  v20 = (v22 - v3) >> 5;
  if ( v20 > 0 )
  {
    v5 = v3;
    s2 = v25;
    n = *((uint32_t *)v25 - 3);
    while ( 1 )
    {
      if ( *(uint32_t *)(*(uint32_t *)v5 - 12) == n && memcmp(*(const void **)v5, s2, n) == 0 )
        goto LABEL_9;
      s1 = *(const void **)(v5 + 8);
      v17 = v5 + 8;
      v8 = v5 - v3;
      if ( *((uint32_t *)s1 - 3) == n )
      {
        v15 = memcmp(s1, s2, n);
        v8 = v5 - v3;
        if ( v15 == 0 )
        {
LABEL_15:
          *a1 = v17;
          goto LABEL_10;
        }
      }
      v9 = *(const void **)(v3 + v8 + 16);
      v17 = v5 + 16;
      if ( *((uint32_t *)v9 - 3) == n )
      {
        v18 = v8;
        if ( memcmp(v9, s2, n) == 0 )
          goto LABEL_15;
        v10 = *(const void **)(v3 + v18 + 24);
        v11 = v5 + 24;
        if ( *((uint32_t *)v10 - 3) == n )
        {
LABEL_18:
          v19 = v11;
          if ( memcmp(v10, s2, n) == 0 )
          {
            *a1 = v19;
            goto LABEL_10;
          }
        }
      }
      else
      {
        v10 = *(const void **)(v3 + v8 + 24);
        v11 = v5 + 24;
        if ( *((uint32_t *)v10 - 3) == n )
          goto LABEL_18;
      }
      v5 += 32;
      if ( --v20 == 0 )
      {
        v4 = (v22 - v5) >> 3;
        goto LABEL_21;
      }
    }
  }
  v5 = v3;
  s2 = v25;
LABEL_21:
  switch ( v4 )
  {
    case 2:
      v16 = *((uint32_t *)s2 - 3);
      break;
    case 3:
      v16 = *((uint32_t *)s2 - 3);
      if ( *(uint32_t *)(*(uint32_t *)v5 - 12) == v16
        && memcmp(*(const void **)v5, s2, *(uint32_t *)(*(uint32_t *)v5 - 12)) == 0 )
      {
        goto LABEL_9;
      }
      v5 += 8;
      break;
    case 1:
      v16 = *((uint32_t *)s2 - 3);
      goto LABEL_28;
    default:
LABEL_24:
      *a1 = v22;
      goto LABEL_10;
  }
  if ( v16 != *(uint32_t *)(*(uint32_t *)v5 - 12) || memcmp(*(const void **)v5, s2, v16) != 0 )
  {
    v5 += 8;
LABEL_28:
    if ( v16 != *(uint32_t *)(*(uint32_t *)v5 - 12) || memcmp(*(const void **)v5, s2, v16) != 0 )
      goto LABEL_24;
  }
LABEL_9:
  *a1 = v5;
LABEL_10:
  if ( s2 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)s2 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(s2 - 12);
  v12 = (void *)(v24 - 12);
  if ( (uint32_t *)(v24 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v12);
  }
  v13 = (void *)(v23 - 12);
  if ( (uint32_t *)(v23 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v13);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JSONObject::Find_ea13de400  (binary VA: 0x13de400)
// Original: glwebtools::JSONObject::Find
// ----------------------------------------------------------------------------
uint32_t * glwebtools::JSONObject::Find_ea13de400(uint32_t *a1, int *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  size_t n;
  const void *s1;
  int v8;
  const void *v9;
  const void *v10;
  int v11;
  void *v12;
  void *v13;
  int v15;
  size_t v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef char *_g4_t_s2;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef char *_g4_t_v25;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v17)) > _g4_s0 ? (8u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v18)) > _g4_s1 ? (16u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v19)) > _g4_s2 ? (16u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v20)) > _g4_s3 ? (20u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_s2)) > _g4_s4 ? (24u + sizeof(_g4_t_s2)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v22)) > _g4_s5 ? (28u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v23)) > _g4_s6 ? (36u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v24)) > _g4_s7 ? (40u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v25)) > _g4_s8 ? (44u + sizeof(_g4_t_v25)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_s2 &s2 = *reinterpret_cast<_g4_t_s2 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);

  g4_std::string::construct_copy(&v23, a3);
  g4_std::string::construct_copy(&v24, &v23);
  v3 = *a2;
  v22 = a2[1];
  g4_std::string::construct_copy(&v25, &v24);
  v4 = (v22 - v3) >> 3;
  v20 = (v22 - v3) >> 5;
  if ( v20 > 0 )
  {
    v5 = v3;
    s2 = v25;
    n = *((uint32_t *)v25 - 3);
    while ( 1 )
    {
      if ( *(uint32_t *)(*(uint32_t *)v5 - 12) == n && memcmp(*(const void **)v5, s2, n) == 0 )
        goto LABEL_9;
      s1 = *(const void **)(v5 + 8);
      v17 = v5 + 8;
      v8 = v5 - v3;
      if ( *((uint32_t *)s1 - 3) == n )
      {
        v15 = memcmp(s1, s2, n);
        v8 = v5 - v3;
        if ( v15 == 0 )
        {
LABEL_15:
          *a1 = v17;
          goto LABEL_10;
        }
      }
      v9 = *(const void **)(v3 + v8 + 16);
      v17 = v5 + 16;
      if ( *((uint32_t *)v9 - 3) == n )
      {
        v18 = v8;
        if ( memcmp(v9, s2, n) == 0 )
          goto LABEL_15;
        v10 = *(const void **)(v3 + v18 + 24);
        v11 = v5 + 24;
        if ( *((uint32_t *)v10 - 3) == n )
        {
LABEL_18:
          v19 = v11;
          if ( memcmp(v10, s2, n) == 0 )
          {
            *a1 = v19;
            goto LABEL_10;
          }
        }
      }
      else
      {
        v10 = *(const void **)(v3 + v8 + 24);
        v11 = v5 + 24;
        if ( *((uint32_t *)v10 - 3) == n )
          goto LABEL_18;
      }
      v5 += 32;
      if ( --v20 == 0 )
      {
        v4 = (v22 - v5) >> 3;
        goto LABEL_21;
      }
    }
  }
  v5 = v3;
  s2 = v25;
LABEL_21:
  switch ( v4 )
  {
    case 2:
      v16 = *((uint32_t *)s2 - 3);
      break;
    case 3:
      v16 = *((uint32_t *)s2 - 3);
      if ( *(uint32_t *)(*(uint32_t *)v5 - 12) == v16
        && memcmp(*(const void **)v5, s2, *(uint32_t *)(*(uint32_t *)v5 - 12)) == 0 )
      {
        goto LABEL_9;
      }
      v5 += 8;
      break;
    case 1:
      v16 = *((uint32_t *)s2 - 3);
      goto LABEL_28;
    default:
LABEL_24:
      *a1 = v22;
      goto LABEL_10;
  }
  if ( v16 != *(uint32_t *)(*(uint32_t *)v5 - 12) || memcmp(*(const void **)v5, s2, v16) != 0 )
  {
    v5 += 8;
LABEL_28:
    if ( v16 != *(uint32_t *)(*(uint32_t *)v5 - 12) || memcmp(*(const void **)v5, s2, v16) != 0 )
      goto LABEL_24;
  }
LABEL_9:
  *a1 = v5;
LABEL_10:
  if ( s2 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)s2 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(s2 - 12);
  v12 = (void *)(v24 - 12);
  if ( (uint32_t *)(v24 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v12);
  }
  v13 = (void *)(v23 - 12);
  if ( (uint32_t *)(v23 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v13);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JSONObject::opIndex  (binary VA: 0x13de700)
// Original: glwebtools::JSONObject::operator[]
// ----------------------------------------------------------------------------
void * glwebtools::JSONObject::opIndex(int *a1, int a2)
{
  void *result;
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  glwebtools::JSONObject::Find((uint32_t *)(&v3), a1, a2);
  result = (void *)(v3 + 4);
  if ( a1[1] == v3 )
    return &glwebtools::JSONObject::s_invalid_value;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JSONObject::Get  (binary VA: 0x13de760)
// Original: glwebtools::JSONObject::Get
// ----------------------------------------------------------------------------
int glwebtools::JSONObject::Get(int *a1, int a2, int a3)
{
  typedef int _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  glwebtools::JSONObject::Find((uint32_t *)(&v4), a1, a2);
  if ( a1[1] == v4 )
    return -2147483646;
  g4_std::string::assign_str(a3, v4 + 4);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JSONObject::begin  (binary VA: 0x13de7d0)
// Original: glwebtools::JSONObject::begin
// ----------------------------------------------------------------------------
glwebtools::JSONObject::Self * glwebtools::JSONObject::begin(glwebtools::JSONObject::Self *self, uint32_t *a2)
{
  *(uint32_t *)self = *a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JSONObject::begin_ea13de7e0  (binary VA: 0x13de7e0)
// Original: glwebtools::JSONObject::begin
// ----------------------------------------------------------------------------
glwebtools::JSONObject::Self * glwebtools::JSONObject::begin_ea13de7e0(glwebtools::JSONObject::Self *self, uint32_t *a2)
{
  *(uint32_t *)self = *a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JSONObject::end  (binary VA: 0x13de7f0)
// Original: glwebtools::JSONObject::end
// ----------------------------------------------------------------------------
glwebtools::JSONObject::Self * glwebtools::JSONObject::end(glwebtools::JSONObject::Self *self, int a2)
{
  *(uint32_t *)self = *(uint32_t *)(a2 + 4);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JSONObject::end_ea13de800  (binary VA: 0x13de800)
// Original: glwebtools::JSONObject::end
// ----------------------------------------------------------------------------
glwebtools::JSONObject::Self * glwebtools::JSONObject::end_ea13de800(glwebtools::JSONObject::Self *self, int a2)
{
  *(uint32_t *)self = *(uint32_t *)(a2 + 4);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JSONObject::opIndex_ea13deb80  (binary VA: 0x13deb80)
// Original: glwebtools::JSONObject::operator[]
// ----------------------------------------------------------------------------
int glwebtools::JSONObject::opIndex_ea13deb80(int *a1, int a2)
{
  int result;
  int v3;
  int v4;
  void *v5;
  void *v6;
  void *v7;
  void *v8;
  typedef uint32_t _g4_t_v9[4];
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef uint32_t _g4_t_v13[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v10)) > _g4_s1 ? (32u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v11)) > _g4_s2 ? (36u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v12)) > _g4_s3 ? (40u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v13)) > _g4_s4 ? (44u + sizeof(_g4_t_v13)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 32u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 36u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 40u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);

  glwebtools::JSONObject::Find(v9, a1, a2);
  result = v9[0] + 4;
  if ( a1[1] == v9[0] )
  {
    glwebtools::JSONValue::Construct((glwebtools::JSONValue::Self *)&v10);
    g4_std::string::construct_copy(&v11, a2);
    g4_std::string::construct_copy(&v12, &v11);
    g4_std::string::construct_copy(v13, &v10);
    v3 = a1[1];
    if ( v3 == a1[2] )
    {
      g4_std::vector_pair_string_glwebtools_J_91bc19::M_insert_aux(a1, v3, &v12);
    }
    else
    {
      v4 = 0;
      if ( v3 != 0 )
      {
        g4_std::string::construct_copy(a1[1], &v12);
        g4_std::string::construct_copy(v3 + 4, v13);
        v4 = a1[1];
      }
      a1[1] = v4 + 8;
    }
    v5 = (void *)(v13[0] - 12);
    if ( (uint32_t *)(v13[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v13[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    v6 = (void *)(v12 - 12);
    if ( (uint32_t *)(v12 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v12 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    v7 = (void *)(v11 - 12);
    if ( (uint32_t *)(v11 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    v8 = (void *)(v10 - 12);
    if ( (uint32_t *)(v10 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v8);
    }
    return a1[1] - 4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JSONObject::Set  (binary VA: 0x13ded30)
// Original: glwebtools::JSONObject::Set
// ----------------------------------------------------------------------------
int glwebtools::JSONObject::Set(int *a1, int a2, int a3)
{
  int v4;
  int v5;
  void *v6;
  void *v7;
  void *v8;
  void *v9;
  typedef uint32_t _g4_t_v10[4];
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint32_t _g4_t_v14[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v11)) > _g4_s1 ? (32u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v12)) > _g4_s2 ? (36u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v13)) > _g4_s3 ? (40u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v14)) > _g4_s4 ? (44u + sizeof(_g4_t_v14)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);

  glwebtools::JSONObject::Find(v10, a1, a2);
  if ( a1[1] == v10[0] )
  {
    g4_std::string::construct_copy(&v12, a3);
    g4_std::string::construct_copy(&v11, a2);
    g4_std::string::construct_copy(&v13, &v11);
    g4_std::string::construct_copy(v14, &v12);
    v4 = a1[1];
    if ( v4 == a1[2] )
    {
      g4_std::vector_pair_string_glwebtools_J_91bc19::M_insert_aux(a1, v4, &v13);
    }
    else
    {
      v5 = 0;
      if ( v4 != 0 )
      {
        g4_std::string::construct_copy(a1[1], &v13);
        g4_std::string::construct_copy(v4 + 4, v14);
        v5 = a1[1];
      }
      a1[1] = v5 + 8;
    }
    v6 = (void *)(v14[0] - 12);
    if ( (uint32_t *)(v14[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v14[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    v7 = (void *)(v13 - 12);
    if ( (uint32_t *)(v13 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    v8 = (void *)(v11 - 12);
    if ( (uint32_t *)(v11 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v8);
    }
    v9 = (void *)(v12 - 12);
    if ( (uint32_t *)(v12 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v12 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v9);
    }
  }
  else
  {
    g4_std::string::assign_str(v10[0] + 4, a3);
  }
  return 0;
}


