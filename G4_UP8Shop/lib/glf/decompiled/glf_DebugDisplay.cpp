#include "Core/Utils/DecompTypes.h"
#include "glf_DebugDisplay.h"

// ----------------------------------------------------------------------------
// Function: glf::DebugDisplay::Construct  (binary VA: 0xc88500)
// Original: glf::DebugDisplay::DebugDisplay
// ----------------------------------------------------------------------------
glf::DebugDisplay::Self * glf::DebugDisplay::Construct(glf::DebugDisplay::Self *self)
{
  glf::DebugDisplay::Self *result;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  void *v7;
  int v8;
  int v9;
  int v10;
  unsigned int v11;
  int v12;

  result = (glf::DebugDisplay::Self *)glf::DebugDisplay::sDebugDisplay;
  *(uint32_t *)self = 0;
  glf::DebugDisplay::sDebugDisplay[0] = (uintptr_t)(uintptr_t)(self);
  v2 = *(uint32_t *)self;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 15;
  v11 = -v2 >> 5;
  if ( v11 <= 0x3F )
  {
    v3 = opNew(0x800u);
    v12 = v3;
    if ( v2 != 0 )
    {
      v4 = v3;
      do
      {
        if ( v4 != 0 )
        {
          *(uint32_t *)v4 = *(uint32_t *)v2;
          v5 = *(uint32_t *)(v2 + 8);
          *(uint32_t *)(v4 + 4) = *(uint32_t *)(v2 + 4);
          *(uint32_t *)(v4 + 8) = v5;
          v6 = *(uint32_t *)(v2 + 16);
          *(uint32_t *)(v4 + 12) = *(uint32_t *)(v2 + 12);
          *(uint32_t *)(v4 + 16) = v6;
          *(uint32_t *)(v4 + 20) = *(uint32_t *)(v2 + 20);
          *(uint8_t *)(v4 + 24) = *(uint8_t *)(v2 + 24);
          g4_std::string::construct_copy(v4 + 28, v2 + 28);
        }
        v4 += 32;
        v2 += 32;
      }
      while ( v2 != 0 );
    }
    v10 = *((uint32_t *)self + 1);
    v7 = *(void **)self;
    if ( v10 != *(uint32_t *)self )
    {
      v8 = *(uint32_t *)self;
      do
      {
        v9 = *(uint32_t *)(v8 + 28);
        if ( (uint32_t *)(v9 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v9 - 12));
        }
        v8 += 32;
      }
      while ( v10 != v8 );
      v7 = *(void **)self;
    }
    if ( v7 != nullptr )
      opDelete(v7);
    *(uint32_t *)self = v12;
    *((uint32_t *)self + 1) = v12 + 32 * v11;
    result = (glf::DebugDisplay::Self *)(v12 + 2048);
    *((uint32_t *)self + 2) = v12 + 2048;
  }
  *((uint32_t *)self + 4) = -1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::DebugDisplay::Destroy  (binary VA: 0xc88660)
// Original: glf::DebugDisplay::~DebugDisplay
// ----------------------------------------------------------------------------
void glf::DebugDisplay::Destroy(glf::DebugDisplay::Self *self)
{
  void *v1;
  int v2;
  int v3;
  int v4;

  glf::DebugDisplay::sDebugDisplay[0] = 0;
  v4 = *((uint32_t *)self + 1);
  v1 = *(void **)self;
  if ( v4 != *(uint32_t *)self )
  {
    v2 = *(uint32_t *)self;
    do
    {
      v3 = *(uint32_t *)(v2 + 28);
      if ( (uint32_t *)(v3 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v3 - 12));
      }
      v2 += 32;
    }
    while ( v4 != v2 );
    v1 = *(void **)self;
  }
  if ( v1 != nullptr )
    opDelete(v1);
}

// ----------------------------------------------------------------------------
// Function: glf::DebugDisplay::reset  (binary VA: 0xc88700)
// Original: glf::DebugDisplay::reset
// ----------------------------------------------------------------------------
glf::DebugDisplay::Self * glf::DebugDisplay::reset(glf::DebugDisplay::Self *self)
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
      v3 = *(uint32_t *)(v2 + 28);
      if ( (uint32_t *)(v3 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v3 - 12));
      }
      v2 += 32;
    }
    while ( v5 != v2 );
  }
  *((uint32_t *)self + 1) = v1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::DebugDisplay::flush  (binary VA: 0xc88780)
// Original: glf::DebugDisplay::flush
// ----------------------------------------------------------------------------
int glf::DebugDisplay::flush(glf::DebugDisplay::Self *self)
{
  int result;
  int i;
  int v3;

  result = *(uint32_t *)self;
  if ( *((uint32_t *)self + 1) != *(uint32_t *)self )
  {
    result = *((uint32_t *)self + 3);
    if ( result != 0 )
    {
      (*(void (**)(uint32_t))(*(uint32_t *)result + 8))(*((uint32_t *)self + 3));
      for ( i = *(uint32_t *)self; i != *((uint32_t *)self + 1); i += 32 )
      {
        v3 = i;
        (*(void (**)(uint32_t, int))(**((uint32_t **)self + 3) + 16))(*((uint32_t *)self + 3), v3);
      }
      return (*(int (**)(uint32_t))(**((uint32_t **)self + 3) + 12))(*((uint32_t *)self + 3));
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::DebugDisplay::fillRect  (binary VA: 0xc88ae0)
// Original: glf::DebugDisplay::fillRect
// ----------------------------------------------------------------------------
int glf::DebugDisplay::fillRect(glf::DebugDisplay::Self *self, int a2, int a3, int a4, int a5)
{
  int v5;
  unsigned int v6;
  unsigned int v7;
  bool v8;
  uint32_t *v9;
  int v10;
  int v11;
  int v12;
  int result;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint32_t _g4_t_v16[11];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v14)) > _g4_s0 ? (4u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v15)) > _g4_s1 ? (8u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v16)) > _g4_s2 ? (32u + sizeof(_g4_t_v16)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);

  memset(v16, 0, 0x20u);
  v16[7] = (uint32_t)(uintptr_t)(&dword_213B814);
  v5 = *((uint32_t *)self + 1);
  v6 = (v5 - *(uint32_t *)self) >> 5;
  v7 = v6 + 1;
  v8 = v6 + 1 < v6;
  if ( v6 + 1 >= v6 )
  {
    g4_std_compat::vector_fill_insert(self, v5, 1, v16);
    v9 = (uint32_t *)v16[7];
  }
  else
  {
    v9 = &dword_213B814;
    if ( v8 )
    {
      v10 = *(uint32_t *)self + 32 * v7;
      v15 = v10;
      if ( v5 != v10 )
      {
        v11 = v10;
        v14 = v10 + 28;
        do
        {
          v12 = *(uint32_t *)(v14 + v11 - v15);
          if ( (uint32_t *)(v12 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v12 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v12 - 12));
          }
          v11 += 32;
        }
        while ( v5 != v11 );
        v9 = (uint32_t *)v16[7];
        v10 = v15;
      }
      *((uint32_t *)self + 1) = v10;
    }
  }
  if ( v9 - 3 != dword_213B808 && __sync_fetch_and_add(v9 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v9 - 3);
  result = *((uint32_t *)self + 1);
  *(uint32_t *)(result - 28) = a2;
  *(uint32_t *)(result - 24) = a3;
  *(uint32_t *)(result - 20) = a4;
  *(uint32_t *)(result - 32) = 2;
  *(uint32_t *)(result - 16) = a5;
  *(uint32_t *)(result - 12) = *((uint32_t *)self + 4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::DebugDisplay::drawGlyphs  (binary VA: 0xc88c40)
// Original: glf::DebugDisplay::drawGlyphs
// ----------------------------------------------------------------------------
int glf::DebugDisplay::drawGlyphs(glf::DebugDisplay::Self *self, char *s, int a3, int a4)
{
  int v4;
  unsigned int v5;
  unsigned int v6;
  bool v7;
  uint32_t *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  size_t v13;
  int result;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint32_t _g4_t_v17[11];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v15)) > _g4_s0 ? (4u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v16)) > _g4_s1 ? (8u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v17)) > _g4_s2 ? (32u + sizeof(_g4_t_v17)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);

  memset(v17, 0, 0x20u);
  v17[7] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = *((uint32_t *)self + 1);
  v5 = (v4 - *(uint32_t *)self) >> 5;
  v6 = v5 + 1;
  v7 = v5 + 1 < v5;
  if ( v5 + 1 >= v5 )
  {
    g4_std_compat::vector_fill_insert(self, v4, 1, v17);
    v8 = (uint32_t *)v17[7];
  }
  else
  {
    v8 = &dword_213B814;
    if ( v7 )
    {
      v9 = *(uint32_t *)self + 32 * v6;
      v16 = v9;
      if ( v4 != v9 )
      {
        v10 = v9;
        v15 = v9 + 28;
        do
        {
          v11 = *(uint32_t *)(v15 + v10 - v16);
          if ( (uint32_t *)(v11 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v11 - 12));
          }
          v10 += 32;
        }
        while ( v4 != v10 );
        v8 = (uint32_t *)v17[7];
        v9 = v16;
      }
      *((uint32_t *)self + 1) = v9;
    }
  }
  if ( v8 - 3 != dword_213B808 && __sync_fetch_and_add(v8 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v8 - 3);
  v12 = *((uint32_t *)self + 1);
  *(uint32_t *)(v12 - 32) = 0;
  v13 = strlen(s);
  g4_std_compat::string_assign(v12 - 4, s, v13);
  *(uint32_t *)(v12 - 28) = a3;
  *(uint32_t *)(v12 - 24) = a4;
  result = *((uint32_t *)self + 4);
  *(uint32_t *)(v12 - 12) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::DebugDisplay::drawCharacter  (binary VA: 0xc88dc0)
// Original: glf::DebugDisplay::drawCharacter
// ----------------------------------------------------------------------------
int glf::DebugDisplay::drawCharacter(glf::DebugDisplay::Self *self, char a2, int a3, int a4)
{
  int v4;
  unsigned int v5;
  unsigned int v6;
  bool v7;
  uint32_t *v8;
  int v9;
  int v10;
  int v11;
  int result;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint32_t _g4_t_v15[11];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v15)) > _g4_s2 ? (32u + sizeof(_g4_t_v15)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);

  memset(v15, 0, 0x20u);
  v15[7] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = *((uint32_t *)self + 1);
  v5 = (v4 - *(uint32_t *)self) >> 5;
  v6 = v5 + 1;
  v7 = v5 + 1 < v5;
  if ( v5 + 1 >= v5 )
  {
    g4_std_compat::vector_fill_insert(self, v4, 1, v15);
    v8 = (uint32_t *)v15[7];
  }
  else
  {
    v8 = &dword_213B814;
    if ( v7 )
    {
      v9 = *(uint32_t *)self + 32 * v6;
      v14 = v9;
      if ( v4 != v9 )
      {
        v10 = v9;
        v13 = v9 + 28;
        do
        {
          v11 = *(uint32_t *)(v13 + v10 - v14);
          if ( (uint32_t *)(v11 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v11 - 12));
          }
          v10 += 32;
        }
        while ( v4 != v10 );
        v8 = (uint32_t *)v15[7];
        v9 = v14;
      }
      *((uint32_t *)self + 1) = v9;
    }
  }
  if ( v8 - 3 != dword_213B808 && __sync_fetch_and_add(v8 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v8 - 3);
  result = *((uint32_t *)self + 1);
  *(uint8_t *)(result - 8) = a2;
  *(uint32_t *)(result - 28) = a3;
  *(uint32_t *)(result - 32) = 1;
  *(uint32_t *)(result - 24) = a4;
  *(uint32_t *)(result - 12) = *((uint32_t *)self + 4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::DebugDisplay::drawString2  (binary VA: 0xc88f20)
// Original: glf::DebugDisplay::drawString2
// ----------------------------------------------------------------------------
int glf::DebugDisplay::drawString2(glf::DebugDisplay::Self *self, const char *a2, int a3, int a4)
{
  const char *v4;
  int result;
  int v7;
  int v8;

  v4 = a2;
  result = *(uint8_t *)a2;
  if ( (uint8_t)result != 0 )
  {
    v7 = a3;
    do
    {
      while ( (uint8_t)result == 10 )
      {
        ++v4;
        a4 += *((uint32_t *)self + 5);
        result = *(uint8_t *)v4;
        v7 = a3;
        if ( (uint8_t)result == 0 )
          return result;
      }
      ++v4;
      v8 = a4;
      glf::DebugDisplay::drawCharacter(self, result, v7, a4);
      result = *(uint8_t *)v4;
      v7 += *((uint32_t *)self + 6);
      a4 = v8;
    }
    while ( (uint8_t)result != 0 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glf::DebugDisplay::drawString  (binary VA: 0xc88fb0)
// Original: glf::DebugDisplay::drawString
// ----------------------------------------------------------------------------
int glf::DebugDisplay::drawString(glf::DebugDisplay::Self *self, char *a2, int a3, int a4, char a5)
{
  int v5;

  v5 = a4;
  if ( (a5 & 1) != 0 )
  {
    glf::DebugDisplay::drawString2(self, a2, a3, a4);
    v5 = a4;
  }
  return glf::DebugDisplay::drawString2(self, a2, a3, v5);
}


