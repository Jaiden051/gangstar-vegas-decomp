#include "Core/Utils/DecompTypes.h"
#include "glf_Paragraph.h"

// ----------------------------------------------------------------------------
// Function: glf::Paragraph::addLine  (binary VA: 0xc887e0)
// Original: glf::Paragraph::addLine
// ----------------------------------------------------------------------------
glf::Paragraph::Self * glf::Paragraph::addLine(glf::Paragraph::Self *self, char *a2, ...)
{
  int v2;
  bool v3;
  int v4;
  void *v5;
  va_list va;
  typedef int _g4_t_v7;
  typedef uint16_t _g4_t_v8[3];
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef char _g4_t_v11;
  typedef char _g4_t_v12[268];
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (30u + sizeof(_g4_t_v8)) > _g4_s1 ? (30u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v9)) > _g4_s2 ? (36u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v10)) > _g4_s3 ? (40u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v11)) > _g4_s4 ? (44u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v12)) > _g4_s5 ? (48u + sizeof(_g4_t_v12)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 30u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);

  va_start(va, a2);
  glf::Vsnprintf((glf::Self *)v12, 0x100u, a2, va);
  v7 = *((uint32_t *)self + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8[1]), v12, (int)(uintptr_t)(v8));
  v2 = *((uint32_t *)self + 1);
  v3 = v2 == *((uint32_t *)self + 2);
  v9 = v7;
  v10 = 0;
  v11 = 1;
  if ( v3 )
  {
    sub_C881B0((int *)self, v2, (int)(uintptr_t)(&v8[1]));
  }
  else
  {
    v4 = 0;
    if ( v2 != 0 )
    {
      g4_std::string::construct_copy(v2, &v8[1]);
      *(uint32_t *)(v2 + 4) = v9;
      *(uint32_t *)(v2 + 8) = v10;
      *(uint8_t *)(v2 + 12) = v11;
      v4 = *((uint32_t *)self + 1);
    }
    *((uint32_t *)self + 1) = v4 + 16;
  }
  v5 = (void *)(*(uint32_t *)&v8[1] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v8[1] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v8[1] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::Paragraph::addLine  (binary VA: 0xc888e0)
// Original: glf::Paragraph::addLine
// ----------------------------------------------------------------------------
glf::Paragraph::Self * glf::Paragraph::addLine(glf::Paragraph::Self *self, unsigned int a2, char *a3, ...)
{
  int v3;
  bool v4;
  int v5;
  void *v6;
  va_list va;
  typedef int _g4_t_v8;
  typedef uint16_t _g4_t_v9[3];
  typedef int _g4_t_v10;
  typedef unsigned int _g4_t_v11;
  typedef char _g4_t_v12;
  typedef char _g4_t_v13[268];
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (30u + sizeof(_g4_t_v9)) > _g4_s1 ? (30u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v10)) > _g4_s2 ? (36u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v11)) > _g4_s3 ? (40u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v12)) > _g4_s4 ? (44u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v13)) > _g4_s5 ? (48u + sizeof(_g4_t_v13)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 30u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 36u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 40u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 44u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 48u);

  va_start(va, a3);
  glf::Vsnprintf((glf::Self *)v13, 0x100u, a3, va);
  v8 = *((uint32_t *)self + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9[1]), v13, (int)(uintptr_t)(v9));
  v3 = *((uint32_t *)self + 1);
  v10 = v8;
  v4 = v3 == *((uint32_t *)self + 2);
  v12 = 1;
  v11 = a2;
  if ( v4 )
  {
    sub_C881B0((int *)self, v3, (int)(uintptr_t)(&v9[1]));
  }
  else
  {
    v5 = 0;
    if ( v3 != 0 )
    {
      g4_std::string::construct_copy(v3, &v9[1]);
      *(uint32_t *)(v3 + 4) = v10;
      *(uint32_t *)(v3 + 8) = v11;
      *(uint8_t *)(v3 + 12) = v12;
      v5 = *((uint32_t *)self + 1);
    }
    *((uint32_t *)self + 1) = v5 + 16;
  }
  v6 = (void *)(*(uint32_t *)&v9[1] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v9[1] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v9[1] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::Paragraph::add  (binary VA: 0xc889e0)
// Original: glf::Paragraph::add
// ----------------------------------------------------------------------------
glf::Paragraph::Self * glf::Paragraph::add(glf::Paragraph::Self *self, char *a2, ...)
{
  int v2;
  bool v3;
  int v4;
  void *v5;
  va_list va;
  typedef int _g4_t_v7;
  typedef uint16_t _g4_t_v8[3];
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef char _g4_t_v11;
  typedef char _g4_t_v12[268];
  enum : size_t {
    _g4_s0 = 384u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (30u + sizeof(_g4_t_v8)) > _g4_s1 ? (30u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v9)) > _g4_s2 ? (36u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v10)) > _g4_s3 ? (40u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v11)) > _g4_s4 ? (44u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v12)) > _g4_s5 ? (48u + sizeof(_g4_t_v12)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 30u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);

  va_start(va, a2);
  glf::Vsnprintf((glf::Self *)v12, 0x100u, a2, va);
  v7 = *((uint32_t *)self + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8[1]), v12, (int)(uintptr_t)(v8));
  v2 = *((uint32_t *)self + 1);
  v3 = v2 == *((uint32_t *)self + 2);
  v9 = v7;
  v10 = 0;
  v11 = 0;
  if ( v3 )
  {
    sub_C881B0((int *)self, v2, (int)(uintptr_t)(&v8[1]));
  }
  else
  {
    v4 = 0;
    if ( v2 != 0 )
    {
      g4_std::string::construct_copy(v2, &v8[1]);
      *(uint32_t *)(v2 + 4) = v9;
      *(uint32_t *)(v2 + 8) = v10;
      *(uint8_t *)(v2 + 12) = v11;
      v4 = *((uint32_t *)self + 1);
    }
    *((uint32_t *)self + 1) = v4 + 16;
  }
  v5 = (void *)(*(uint32_t *)&v8[1] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v8[1] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v8[1] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::Paragraph::draw  (binary VA: 0xc89030)
// Original: glf::Paragraph::draw
// ----------------------------------------------------------------------------
int glf::Paragraph::draw(glf::Paragraph::Self *self, int a2, int a3)
{
  int result;
  unsigned int v4;
  int v5;
  glf::DebugDisplay::Self *v6;

  v6 = (glf::DebugDisplay::Self *)glf::DebugDisplay::sDebugDisplay[0];
  result = *(uint32_t *)self;
  if ( (unsigned int)(*((uint32_t *)self + 1) - *(uint32_t *)self) >> 4 != 0 )
  {
    v4 = 0;
    do
    {
      *((uint32_t *)v6 + 4) = *(uint32_t *)(result + 16 * v4 + 4);
      glf::DebugDisplay::drawString(v6, *(char **)(*(uint32_t *)self + 16 * v4), a2, a3, 0);
      result = *(uint32_t *)self;
      v5 = *(uint32_t *)self + 16 * v4;
      if ( (*(uint8_t *)(v5 + 8) & 1) != 0 )
      {
        glf::DebugDisplay::drawString(v6, *(char **)v5, a2 + 1, a3, 0);
        result = *(uint32_t *)self;
        v5 = *(uint32_t *)self + 16 * v4;
      }
      if ( *(uint8_t *)(v5 + 12) != 0 )
        a3 += *(uint32_t *)(glf::DebugDisplay::sDebugDisplay[0] + 20);
      ++v4;
    }
    while ( v4 < (*((uint32_t *)self + 1) - result) >> 4 );
  }
  return result;
}


