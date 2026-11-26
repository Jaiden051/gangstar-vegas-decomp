#include "Core/Utils/DecompTypes.h"
#include "glwebtools_JSONArray.h"

// ----------------------------------------------------------------------------
// Function: glwebtools::JSONArray::Clear  (binary VA: 0x13de810)
// Original: glwebtools::JSONArray::Clear
// ----------------------------------------------------------------------------
glwebtools::JSONArray::Self * glwebtools::JSONArray::Clear(glwebtools::JSONArray::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v5;

  v1 = *(uint32_t *)self;
  v5 = *((uint32_t *)self + 1);
  if ( *(uint32_t *)self != v5 )
  {
    v2 = *(uint32_t *)self;
    do
    {
      v3 = *(uint32_t *)(v2 + 4);
      if ( (uint32_t *)(v3 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v3 - 12));
      }
      v2 += 8;
    }
    while ( v5 != v2 );
  }
  *((uint32_t *)self + 1) = v1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JSONArray::Find  (binary VA: 0x13de890)
// Original: glwebtools::JSONArray::Find
// ----------------------------------------------------------------------------
glwebtools::JSONArray::Self * glwebtools::JSONArray::Find(glwebtools::JSONArray::Self *self, unsigned int a2, int a3)
{
  glwebtools::JSONArray::Self *result;
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;
  uint32_t *v9;
  int v10;

  result = self;
  v10 = *(uint32_t *)(a2 + 4);
  v4 = *(uint32_t **)a2;
  v5 = v10 - *(uint32_t *)a2;
  v6 = v5 >> 5;
  v7 = v5 >> 3;
  if ( v6 > 0 )
  {
    if ( a3 == *v4 )
      goto LABEL_23;
    if ( a3 == v4[2] )
    {
      v9 = v4 + 2;
      goto LABEL_17;
    }
    if ( a3 == v4[4] )
    {
      v9 = v4 + 4;
      goto LABEL_17;
    }
    if ( a3 == v4[6] )
    {
      v9 = v4 + 6;
LABEL_17:
      *(uint32_t *)self = (uint32_t)(uintptr_t)(v9);
      return result;
    }
    while ( 1 )
    {
      --v6;
      v8 = v4 + 8;
      v4 += 8;
      if ( v6 == 0 )
        break;
      if ( a3 == *v8 )
        goto LABEL_23;
      v9 = v4 + 2;
      if ( a3 != v8[2] )
      {
        v9 = v4 + 4;
        if ( a3 != v8[4] )
        {
          v9 = v4 + 6;
          if ( a3 != v8[6] )
            continue;
        }
      }
      goto LABEL_17;
    }
    v7 = (v10 - (int)(uintptr_t)(v4)) >> 3;
  }
  switch ( v7 )
  {
    case 1:
LABEL_22:
      if ( a3 != *v4 )
        goto LABEL_16;
LABEL_23:
      *(uint32_t *)self = (uint32_t)(uintptr_t)(v4);
      return result;
    case 2:
      goto LABEL_20;
    case 3:
      if ( a3 == *v4 )
        goto LABEL_23;
      v4 += 2;
LABEL_20:
      if ( a3 == *v4 )
        goto LABEL_23;
      v4 += 2;
      goto LABEL_22;
    default:
LABEL_16:
      *(uint32_t *)self = v10;
      return result;
  }
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JSONArray::Find_ea13de980  (binary VA: 0x13de980)
// Original: glwebtools::JSONArray::Find
// ----------------------------------------------------------------------------
glwebtools::JSONArray::Self * glwebtools::JSONArray::Find_ea13de980(glwebtools::JSONArray::Self *self, unsigned int a2, int a3)
{
  glwebtools::JSONArray::Self *result;
  uint32_t *v4;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;
  uint32_t *v9;
  int v10;

  result = self;
  v10 = *(uint32_t *)(a2 + 4);
  v4 = *(uint32_t **)a2;
  v5 = v10 - *(uint32_t *)a2;
  v6 = v5 >> 5;
  v7 = v5 >> 3;
  if ( v6 > 0 )
  {
    if ( a3 == *v4 )
      goto LABEL_23;
    if ( a3 == v4[2] )
    {
      v9 = v4 + 2;
      goto LABEL_17;
    }
    if ( a3 == v4[4] )
    {
      v9 = v4 + 4;
      goto LABEL_17;
    }
    if ( a3 == v4[6] )
    {
      v9 = v4 + 6;
LABEL_17:
      *(uint32_t *)self = (uint32_t)(uintptr_t)(v9);
      return result;
    }
    while ( 1 )
    {
      --v6;
      v8 = v4 + 8;
      v4 += 8;
      if ( v6 == 0 )
        break;
      if ( a3 == *v8 )
        goto LABEL_23;
      v9 = v4 + 2;
      if ( a3 != v8[2] )
      {
        v9 = v4 + 4;
        if ( a3 != v8[4] )
        {
          v9 = v4 + 6;
          if ( a3 != v8[6] )
            continue;
        }
      }
      goto LABEL_17;
    }
    v7 = (v10 - (int)(uintptr_t)(v4)) >> 3;
  }
  switch ( v7 )
  {
    case 1:
LABEL_22:
      if ( a3 != *v4 )
        goto LABEL_16;
LABEL_23:
      *(uint32_t *)self = (uint32_t)(uintptr_t)(v4);
      return result;
    case 2:
      goto LABEL_20;
    case 3:
      if ( a3 == *v4 )
        goto LABEL_23;
      v4 += 2;
LABEL_20:
      if ( a3 == *v4 )
        goto LABEL_23;
      v4 += 2;
      goto LABEL_22;
    default:
LABEL_16:
      *(uint32_t *)self = v10;
      return result;
  }
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JSONArray::opIndex  (binary VA: 0x13dea70)
// Original: glwebtools::JSONArray::operator[]
// ----------------------------------------------------------------------------
void * glwebtools::JSONArray::opIndex(glwebtools::JSONArray::Self *self, unsigned int a2)
{
  void *result;
  typedef int _g4_t_v3;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);

  glwebtools::JSONArray::Find((glwebtools::JSONArray::Self *)&v3, (unsigned int)(uintptr_t)(self), a2);
  result = (void *)(v3 + 4);
  if ( *((uint32_t *)self + 1) == v3 )
    return &glwebtools::JSONArray::s_invalid_value;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JSONArray::Get  (binary VA: 0x13dead0)
// Original: glwebtools::JSONArray::Get
// ----------------------------------------------------------------------------
int glwebtools::JSONArray::Get(glwebtools::JSONArray::Self *self, unsigned int a2, glwebtools::JSONValue::Self *a3)
{
  typedef int _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  glwebtools::JSONArray::Find((glwebtools::JSONArray::Self *)&v4, (unsigned int)(uintptr_t)(self), a2);
  if ( *((uint32_t *)self + 1) == v4 )
    return -2147483646;
  g4_std::string::assign_str(a3, v4 + 4);
  return 0;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JSONArray::begin  (binary VA: 0x13deb40)
// Original: glwebtools::JSONArray::begin
// ----------------------------------------------------------------------------
glwebtools::JSONArray::Self * glwebtools::JSONArray::begin(glwebtools::JSONArray::Self *self, uint32_t *a2)
{
  *(uint32_t *)self = *a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JSONArray::begin_ea13deb50  (binary VA: 0x13deb50)
// Original: glwebtools::JSONArray::begin
// ----------------------------------------------------------------------------
glwebtools::JSONArray::Self * glwebtools::JSONArray::begin_ea13deb50(glwebtools::JSONArray::Self *self, uint32_t *a2)
{
  *(uint32_t *)self = *a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JSONArray::end  (binary VA: 0x13deb60)
// Original: glwebtools::JSONArray::end
// ----------------------------------------------------------------------------
glwebtools::JSONArray::Self * glwebtools::JSONArray::end(glwebtools::JSONArray::Self *self, int a2)
{
  *(uint32_t *)self = *(uint32_t *)(a2 + 4);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JSONArray::end_ea13deb70  (binary VA: 0x13deb70)
// Original: glwebtools::JSONArray::end
// ----------------------------------------------------------------------------
glwebtools::JSONArray::Self * glwebtools::JSONArray::end_ea13deb70(glwebtools::JSONArray::Self *self, int a2)
{
  *(uint32_t *)self = *(uint32_t *)(a2 + 4);
  return self;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JSONArray::opIndex_ea13def10  (binary VA: 0x13def10)
// Original: glwebtools::JSONArray::operator[]
// ----------------------------------------------------------------------------
int glwebtools::JSONArray::opIndex_ea13def10(glwebtools::JSONArray::Self *self, unsigned int a2)
{
  int result;
  unsigned int *v3;
  int v4;
  void *v5;
  void *v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef unsigned int _g4_t_v9;
  typedef uint32_t _g4_t_v10[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v8)) > _g4_s1 ? (20u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v9)) > _g4_s2 ? (24u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v10)) > _g4_s3 ? (28u + sizeof(_g4_t_v10)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);

  glwebtools::JSONArray::Find((glwebtools::JSONArray::Self *)&v7, (unsigned int)(uintptr_t)(self), a2);
  result = v7 + 4;
  if ( *((uint32_t *)self + 1) == v7 )
  {
    glwebtools::JSONValue::Construct((glwebtools::JSONValue::Self *)&v8);
    v9 = a2;
    g4_std::string::construct_copy(v10, &v8);
    v3 = *((unsigned int **)self + 1);
    if ( v3 == *((unsigned int **)self + 2) )
    {
      g4_std::vector_pair_unsigned_int_glwebt_200b3f::M_insert_aux(self, *((uint32_t *)self + 1), &v9);
    }
    else
    {
      v4 = 0;
      if ( v3 != nullptr )
      {
        *v3 = v9;
        g4_std::string::construct_copy(v3 + 1, v10);
        v4 = *((uint32_t *)self + 1);
      }
      *((uint32_t *)self + 1) = v4 + 8;
    }
    v5 = (void *)(v10[0] - 12);
    if ( (uint32_t *)(v10[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v10[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    v6 = (void *)(v8 - 12);
    if ( (uint32_t *)(v8 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    return *((uint32_t *)self + 1) - 4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glwebtools::JSONArray::Set  (binary VA: 0x13df040)
// Original: glwebtools::JSONArray::Set
// ----------------------------------------------------------------------------
int glwebtools::JSONArray::Set(glwebtools::JSONArray::Self *self, unsigned int a2, const glwebtools::JSONValue::Self *a3)
{
  unsigned int *v4;
  int v5;
  void *v6;
  void *v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef unsigned int _g4_t_v10;
  typedef uint32_t _g4_t_v11[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v9)) > _g4_s1 ? (20u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v10)) > _g4_s2 ? (24u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v11)) > _g4_s3 ? (28u + sizeof(_g4_t_v11)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  glwebtools::JSONArray::Find((glwebtools::JSONArray::Self *)&v8, (unsigned int)(uintptr_t)(self), a2);
  if ( *((uint32_t *)self + 1) == v8 )
  {
    g4_std::string::construct_copy(&v9, a3);
    v10 = a2;
    g4_std::string::construct_copy(v11, &v9);
    v4 = *((unsigned int **)self + 1);
    if ( v4 == *((unsigned int **)self + 2) )
    {
      g4_std::vector_pair_unsigned_int_glwebt_200b3f::M_insert_aux(self, *((uint32_t *)self + 1), &v10);
    }
    else
    {
      v5 = 0;
      if ( v4 != nullptr )
      {
        *v4 = v10;
        g4_std::string::construct_copy(v4 + 1, v11);
        v5 = *((uint32_t *)self + 1);
      }
      *((uint32_t *)self + 1) = v5 + 8;
    }
    v6 = (void *)(v11[0] - 12);
    if ( (uint32_t *)(v11[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v11[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    v7 = (void *)(v9 - 12);
    if ( (uint32_t *)(v9 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
  }
  else
  {
    g4_std::string::assign_str(v8 + 4, a3);
  }
  return 0;
}


