#include "Core/Utils/DecompTypes.h"
#include "gameswf_Mesh.h"

// ============================================================================
// G4_UP8Shop/lib/gameswf/decompiled/gameswf_Mesh.cpp
// Library: gameswf | Module: gameswf_Mesh
// Binary Address Span: 0x10db000 .. 0x10db9c0 (7 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x10db000 (size: 176 bytes)
// Symbol:    _ZN7gameswf4MeshC2Ev
// Demangled: gameswf::Mesh::Mesh(void)
// ============================================================================
// Alternative name is '_ZN7gameswf4MeshC1Ev'
struct gameswf::Mesh::Self *gameswf::Mesh::Mesh(gameswf::Mesh::Self *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 0;
  *((uint32_t *)self + 19) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint8_t *)self + 96) = 1;
  return self;
}
// ----------------------------------------------------------------------------
// Function: gameswf::Mesh::reserveTriangles  (binary VA: 0x10db0b0)
// Original: gameswf::Mesh::reserveTriangles
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::Mesh::reserveTriangles(gameswf::Mesh::Self *self, int a2)
{
  gameswf::Self *result;
  int v3;

  result = (gameswf::Self *)a2;
  if ( *((uint32_t *)self + 7) == 0 )
  {
    v3 = *((uint32_t *)self + 6);
    *((uint32_t *)self + 6) = 6 * a2;
    result = *((gameswf::Self **)self + 4);
    if ( 6 * a2 != 0 )
    {
      if ( result != nullptr )
        result = (gameswf::Self *)gameswf::realloc_internal(result, 24 * a2, 4 * v3);
      else
        result = (gameswf::Self *)gameswf::malloc_internal(24 * a2);
      *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(result);
    }
    else
    {
      if ( result != nullptr )
        result = (gameswf::Self *)gameswf::free_internal(*((gameswf::Self **)self + 4));
      *((uint32_t *)self + 4) = 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Mesh::addAATriangles  (binary VA: 0x10db160)
// Original: gameswf::Mesh::addAATriangles
// ----------------------------------------------------------------------------
char * gameswf::Mesh::addAATriangles(gameswf::Mesh::Self *self, const float *a2, const bool *a3, int a4, const uint16_t *a5, int a6, bool a7)
{
  const float *v7;
  uint8_t *v8;
  int v9;
  int v10;
  char *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  float v16;
  char *result;
  char *v18;
  int v19;
  int v20;
  int v21;
  const uint16_t *v22;
  char *v23;
  int v24;
  int v25;
  int v26;
  gameswf::Self *v27;
  gameswf::Self *v28;
  int v29;
  int v30;
  signed int v31;
  size_t v32;
  gameswf::Self *v33;
  gameswf::Self *v34;
  gameswf::Self *v35;
  int v36;
  int v37;
  const uint16_t *i;
  int v39;
  int v40;
  uint16_t v41;
  int v42;

  v7 = a2;
  v39 = *((uint32_t *)self + 13) / 2;
  if ( a4 / 2 > 0 )
  {
    v36 = *((uint32_t *)self + 21);
    v42 = v36 + a4 / 2;
    if ( v42 == 0 || (v31 = *((uint32_t *)self + 22), v42 <= v31) || *((uint32_t *)self + 23) != 0 )
    {
      v8 = *((uint8_t **)self + 20);
    }
    else
    {
      v32 = v42 + (v42 >> 1);
      *((uint32_t *)self + 22) = v32;
      if ( v32 != 0 )
      {
        v34 = *((gameswf::Self **)self + 20);
        if ( v34 != nullptr )
          v8 = (uint8_t *)(gameswf::realloc_internal(v34, v32, v31));
        else
          v8 = (uint8_t *)gameswf::malloc_internal(v32);
        *((uint32_t *)self + 20) = (uint32_t)(uintptr_t)(v8);
      }
      else
      {
        v33 = *((gameswf::Self **)self + 20);
        if ( v33 != nullptr )
          gameswf::free_internal(v33);
        *((uint32_t *)self + 20) = 0;
        v8 = nullptr;
      }
    }
    v9 = v36;
    if ( v36 < v42 )
    {
      do
      {
        if ( &v8[v9] != nullptr )
        {
          v8[v9] = 0;
          v8 = *((uint8_t **)self + 20);
        }
        ++v9;
      }
      while ( v9 != v42 );
      v7 = a2;
    }
    *((uint32_t *)self + 21) = v42;
    v10 = 0;
    while ( 1 )
    {
      v8[v36 + v10] = a3[v10];
      if ( ++v10 == a4 / 2 )
        break;
      v8 = *((uint8_t **)self + 20);
    }
  }
  if ( a4 > 0 )
  {
    v37 = *((uint32_t *)self + 13);
    v40 = v37 + a4;
    if ( v37 + a4 == 0 || (v29 = *((uint32_t *)self + 14), v40 <= v29) || *((uint32_t *)self + 15) != 0 )
    {
      v11 = *((char **)self + 12);
    }
    else
    {
      v30 = v40 + (v40 >> 1);
      *((uint32_t *)self + 14) = v30;
      if ( v30 != 0 )
      {
        v35 = *((gameswf::Self **)self + 12);
        if ( v35 != nullptr )
          v11 = (char *)gameswf::realloc_internal(v35, 4 * v30, 4 * v29);
        else
          v11 = (char *)gameswf::malloc_internal(4 * v30);
        *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)(v11);
      }
      else
      {
        if ( *((uint32_t *)self + 12) != 0 )
          gameswf::free_internal(*((gameswf::Self **)self + 12));
        *((uint32_t *)self + 12) = 0;
        v11 = nullptr;
      }
    }
    v12 = v37;
    v13 = 4 * v37;
    if ( v37 < v40 )
    {
      do
      {
        if ( &v11[v13] != nullptr )
        {
          *(uint32_t *)&v11[v13] = 0;
          v11 = *((char **)self + 12);
        }
        ++v12;
        v13 += 4;
      }
      while ( v12 != v40 );
    }
    *((uint32_t *)self + 13) = v40;
    v14 = 0;
    v15 = 4 * v37;
    while ( 1 )
    {
      v16 = v7[v14++];
      *(float *)&v11[v15] = v16;
      v15 += 4;
      if ( v14 == a4 )
        break;
      v11 = *((char **)self + 12);
    }
  }
  result = *((char **)self + 17);
  if ( *((uint32_t *)self + 19) == 0 )
  {
    v18 = &result[a6];
    v19 = *((uint32_t *)self + 18);
    *((uint32_t *)self + 18) = (uint32_t)(uintptr_t)(v18);
    if ( v18 != nullptr )
    {
      v28 = *((gameswf::Self **)self + 16);
      if ( v28 != nullptr )
        result = (char *)gameswf::realloc_internal(v28, 2 * (uint32_t)(uintptr_t)(v18), 2 * v19);
      else
        result = (char *)gameswf::malloc_internal(2 * (uint32_t)(uintptr_t)(v18));
      *((uint32_t *)self + 16) = (uint32_t)(uintptr_t)(result);
    }
    else
    {
      result = *((char **)self + 16);
      if ( result != nullptr )
        result = (char *)gameswf::free_internal(*((gameswf::Self **)self + 16));
      *((uint32_t *)self + 16) = 0;
    }
  }
  if ( a6 > 0 )
  {
    v20 = *((uint32_t *)self + 17);
    v21 = 0;
    v22 = &a5[-v20];
    for ( i = v22; ; v22 = i )
    {
      v24 = v20 + 1;
      v25 = *((uint32_t *)self + 18);
      v41 = v22[v20];
      if ( v20 + 1 <= v25 || *((uint32_t *)self + 19) != 0 )
      {
        v23 = *((char **)self + 16);
      }
      else
      {
        v26 = v24 + (v24 >> 1);
        *((uint32_t *)self + 18) = v26;
        if ( v26 != 0 )
        {
          v23 = *((uint32_t *)self + 16) != 0
              ? (char *)gameswf::realloc_internal(*((gameswf::Self **)self + 16), 2 * v26, 2 * v25)
              : (char *)gameswf::malloc_internal(2 * v26);
          *((uint32_t *)self + 16) = (uint32_t)(uintptr_t)(v23);
          v20 = *((uint32_t *)self + 17);
        }
        else
        {
          v27 = *((gameswf::Self **)self + 16);
          if ( v27 != nullptr )
          {
            gameswf::free_internal(v27);
            v20 = *((uint32_t *)self + 17);
          }
          *((uint32_t *)self + 16) = 0;
          v23 = nullptr;
        }
      }
      result = &v23[2 * v20];
      if ( result != nullptr )
        *(uint16_t *)result = v39 + v41;
      ++v21;
      *((uint32_t *)self + 17) = v24;
      if ( v21 == a6 )
        break;
      v20 = v24;
    }
  }
  *((uint8_t *)self + 96) &= a7;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Mesh::updateBound  (binary VA: 0x10db570)
// Original: gameswf::Mesh::updateBound
// ----------------------------------------------------------------------------
float * gameswf::Mesh::updateBound(float *a1, float **a2)
{
  float *result;
  float *v3;
  int v4;
  float v5; // xmm0_4
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm3_4
  int v9;
  float v10; // xmm4_4

  result = a1;
  a1[25] = 3.4028235e38f;
  a1[26] = -3.4028235e38f;
  a1[27] = 3.4028235e38f;
  a1[28] = -3.4028235e38f;
  v3 = *a2;
  v4 = (int)(uintptr_t)(a2[1]) / 2;
  if ( v4 > 0 )
  {
    v5 = 3.4028235e38f;
    v6 = 3.4028235e38f;
    v7 = -3.4028235e38f;
    v8 = -3.4028235e38f;
    v9 = 0;
    do
    {
      v10 = v3[1];
      ++v9;
      v5 = fminf(v5, v10);
      v6 = fminf(v6, *v3);
      v8 = fmaxf(v8, *v3);
      v3 += 2;
      v7 = fmaxf(v7, v10);
      a1[27] = v5;
      a1[25] = v6;
      a1[26] = v8;
      a1[28] = v7;
    }
    while ( v9 != v4 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::Mesh::setTriStrip  (binary VA: 0x10db600)
// Original: gameswf::Mesh::setTriStrip
// ----------------------------------------------------------------------------
float * gameswf::Mesh::setTriStrip(gameswf::Mesh::Self *self, const gameswf::Point::Self *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  int v9;
  int v11;
  bool v12;
  gameswf::Self *v13;
  int v14;

  v3 = 2 * a3;
  v4 = *((uint32_t *)self + 1);
  if ( 2 * a3 != 0 )
  {
    v5 = *((uint32_t *)self + 2);
    if ( v3 > v5 && *((uint32_t *)self + 3) == 0 )
    {
      v11 = v3 + (v3 >> 1);
      v12 = v11 == 0;
      v14 = v11;
      *((uint32_t *)self + 2) = v11;
      v13 = *(gameswf::Self **)self;
      if ( v12 )
      {
        if ( v13 != nullptr )
        {
          gameswf::free_internal(v13);
          v3 = 2 * a3;
        }
        *(uint32_t *)self = 0;
      }
      else
      {
        if ( v13 != nullptr )
          *(uint32_t *)self = (uint32_t)(uintptr_t)(gameswf::realloc_internal(*(gameswf::Self **)self, 4 * v14, 4 * v5));
        else
          *(uint32_t *)self = gameswf::malloc_internal(4 * v14);
        v3 = 2 * a3;
      }
    }
  }
  v6 = 4 * v4;
  if ( v3 > v4 )
  {
    do
    {
      v7 = (uint32_t *)(v6 + *(uint32_t *)self);
      if ( v7 != nullptr )
        *v7 = 0;
      ++v4;
      v6 += 4;
    }
    while ( v4 != v3 );
  }
  *((uint32_t *)self + 1) = v3;
  if ( a3 > 0 )
  {
    v8 = 0;
    v9 = 0;
    do
    {
      ++v9;
      *(uint32_t *)(*(uint32_t *)self + v8) = *(uint32_t *)((char *)a2 + v8);
      *(uint32_t *)(*(uint32_t *)self + v8 + 4) = *(uint32_t *)((char *)a2 + v8 + 4);
      v8 += 8;
    }
    while ( v9 != a3 );
  }
  return gameswf::Mesh::updateBound((float *)self, (float **)self);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Mesh::setTriangles  (binary VA: 0x10db740)
// Original: gameswf::Mesh::setTriangles
// ----------------------------------------------------------------------------
float * gameswf::Mesh::setTriangles(gameswf::Mesh::Self *self, const float *a2, int a3, const uint16_t *a4, int a5)
{
  float *v5;
  char *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  float v11;
  int v12;
  char *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  uint16_t v18; // si
  int v20;
  int v21;
  int v22;
  int v23;
  gameswf::Self *v24;
  gameswf::Self *v25;
  int v26;
  int v27;
  int v28;

  v5 = (float *)self;
  if ( a3 > 0 )
  {
    v27 = *((uint32_t *)self + 5);
    v28 = v27 + a3;
    if ( v27 + a3 == 0 || (v22 = *((uint32_t *)self + 6), v28 <= v22) || *((uint32_t *)self + 7) != 0 )
    {
      v6 = *((char **)self + 4);
    }
    else
    {
      v23 = v28 + (v28 >> 1);
      *((uint32_t *)self + 6) = v23;
      if ( v23 != 0 )
      {
        v25 = *((gameswf::Self **)self + 4);
        if ( v25 != nullptr )
          v6 = (char *)gameswf::realloc_internal(v25, 4 * v23, 4 * v22);
        else
          v6 = (char *)gameswf::malloc_internal(4 * v23);
        *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(v6);
      }
      else
      {
        if ( *((uint32_t *)self + 4) != 0 )
          gameswf::free_internal(*((gameswf::Self **)self + 4));
        *((uint32_t *)self + 4) = 0;
        v6 = nullptr;
      }
    }
    v7 = v27;
    v8 = 4 * v27;
    if ( v27 < v28 )
    {
      do
      {
        if ( &v6[v8] != nullptr )
        {
          *(uint32_t *)&v6[v8] = 0;
          v6 = *((char **)self + 4);
        }
        ++v7;
        v8 += 4;
      }
      while ( v7 != v28 );
    }
    *((uint32_t *)self + 5) = v28;
    v9 = 0;
    v10 = 4 * v27;
    while ( 1 )
    {
      v11 = a2[v9++];
      *(float *)&v6[v10] = v11;
      v10 += 4;
      if ( v9 == a3 )
        break;
      v6 = *((char **)self + 4);
    }
  }
  if ( a5 > 0 )
  {
    v12 = *((uint32_t *)self + 9) + a5;
    v26 = *((uint32_t *)self + 9);
    if ( v12 == 0 || (v20 = *((uint32_t *)self + 10), v12 <= v20) || *((uint32_t *)self + 11) != 0 )
    {
      v13 = *((char **)self + 8);
    }
    else
    {
      v21 = v12 + (v12 >> 1);
      *((uint32_t *)self + 10) = v21;
      if ( v21 != 0 )
      {
        v24 = *((gameswf::Self **)self + 8);
        if ( v24 != nullptr )
          v13 = (char *)gameswf::realloc_internal(v24, 2 * v21, 2 * v20);
        else
          v13 = (char *)gameswf::malloc_internal(2 * v21);
        *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(v13);
      }
      else
      {
        if ( *((uint32_t *)self + 8) != 0 )
          gameswf::free_internal(*((gameswf::Self **)self + 8));
        *((uint32_t *)self + 8) = 0;
        v13 = nullptr;
      }
    }
    v14 = v26;
    v15 = 2 * v26;
    if ( v26 < v12 )
    {
      do
      {
        if ( &v13[v15] != nullptr )
        {
          *(uint16_t *)&v13[v15] = 0;
          v13 = *((char **)self + 8);
        }
        ++v14;
        v15 += 2;
      }
      while ( v14 != v12 );
    }
    *((uint32_t *)self + 9) = v12;
    v16 = 0;
    while ( 1 )
    {
      v17 = 2 * v26 + v16 * 2;
      v18 = a4[v16++];
      *(uint16_t *)&v13[v17] = v18;
      if ( v16 == a5 )
        break;
      v13 = *((char **)self + 8);
    }
    v5 = (float *)self;
  }
  return gameswf::Mesh::updateBound(v5, (float **)self + 4);
}

// ----------------------------------------------------------------------------
// Function: gameswf::Mesh::display  (binary VA: 0x10db9c0)
// Original: gameswf::Mesh::display
// ----------------------------------------------------------------------------
gameswf::Self * gameswf::Mesh::display(gameswf::Mesh::Self *self, const gameswf::BaseFillStyle::Self *a2, float a3)
{
  int v3;
  int v4;
  gameswf::Self *result;
  int v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int16_t _g4_t_v10;
  typedef int16_t _g4_t_v11;
  typedef char *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v9)) > _g4_s2 ? (16u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v10)) > _g4_s3 ? (20u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (22u + sizeof(_g4_t_v11)) > _g4_s4 ? (22u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v12)) > _g4_s5 ? (24u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v13)) > _g4_s6 ? (28u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v14)) > _g4_s7 ? (32u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v15)) > _g4_s8 ? (36u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v16)) > _g4_s9 ? (40u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v17)) > _g4_s10 ? (44u + sizeof(_g4_t_v17)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 22u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);

  if ( *((int *)self + 1) > 0 )
  {
    G4_VCALL<void>(a2, 8, 0, LODWORD(a3));
    v3 = *(uint32_t *)self;
    LOWORD(v7) = 1;
    v8 = v3;
    v10 = *((int *)self + 1) >> 1;
    v13 = *((uint32_t *)self + 25);
    v14 = *((uint32_t *)self + 26);
    v15 = *((uint32_t *)self + 27);
    v16 = *((uint32_t *)self + 28);
    v9 = 0;
    v11 = 0;
    v12 = nullptr;
    v17 = 0;
    if ( gameswf::s_render_handler != nullptr )
      gameswf::RenderHandler::draw((gameswf::Root::Self **)gameswf::s_render_handler, (gameswf::Self *)&v7);
  }
  if ( *((int *)self + 5) > 0 )
  {
    G4_VCALL<void>(a2, 8, 0, LODWORD(a3));
    v4 = *((uint32_t *)self + 4);
    LOWORD(v7) = 0;
    v8 = v4;
    v10 = *((int *)self + 5) >> 1;
    v9 = *((uint32_t *)self + 8);
    v11 = *((uint32_t *)self + 9);
    v13 = *((uint32_t *)self + 25);
    v14 = *((uint32_t *)self + 26);
    v15 = *((uint32_t *)self + 27);
    v16 = *((uint32_t *)self + 28);
    v12 = nullptr;
    v17 = 0;
    if ( gameswf::s_render_handler != nullptr )
      gameswf::RenderHandler::draw((gameswf::Root::Self **)gameswf::s_render_handler, (gameswf::Self *)&v7);
  }
  result = *((gameswf::Self **)self + 13);
  if ( (int)(uintptr_t)(result) > 0 )
  {
    v6 = *((uint32_t *)self + 12);
    v10 = (int)(uintptr_t)(result) >> 1;
    v9 = *((uint32_t *)self + 16);
    v11 = *((uint32_t *)self + 17);
    v12 = (char *)self + 80;
    v13 = *((uint32_t *)self + 25);
    v14 = *((uint32_t *)self + 26);
    v15 = *((uint32_t *)self + 27);
    v16 = *((uint32_t *)self + 28);
    LOWORD(v7) = 0;
    v17 = 0;
    v8 = v6;
    result = (gameswf::Self *)gameswf::s_render_handler;
    if ( gameswf::s_render_handler != nullptr )
      return gameswf::RenderHandler::draw((gameswf::Root::Self **)gameswf::s_render_handler, (gameswf::Self *)&v7);
  }
  return result;
}


