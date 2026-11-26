#include "Core/Utils/DecompTypes.h"
#include "gameswf_FilterEngine.h"

// ----------------------------------------------------------------------------
// Function: gameswf::FilterEngine::displayCached  (binary VA: 0x1095650)
// Original: gameswf::FilterEngine::displayCached
// ----------------------------------------------------------------------------
int gameswf::FilterEngine::displayCached(gameswf::FilterEngine::Self *self, gameswf::Character::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int i;
  int v7;
  int v8;
  gameswf::Character::Self *v9;
  float v10;
  int v11;
  int v12;
  float v13; // xmm3_4
  int v14;
  float v15; // xmm4_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  int v18;
  typedef uint8_t _g4_t_v20;
  typedef gameswf::FilterEngine::Self *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint32_t _g4_t_v23[3];
  typedef float _g4_t_v24[4];
  typedef float _g4_t_v25[4];
  typedef uint32_t _g4_t_v26[6];
  typedef gameswf::Character::Self *_g4_t_v27;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef float _g4_t_v31;
  typedef int _g4_t_v32;
  typedef char _g4_t_v33;
  typedef float _g4_t_v34[14];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (7u + sizeof(_g4_t_v20)) > _g4_s0 ? (7u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v21)) > _g4_s1 ? (8u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v22)) > _g4_s2 ? (12u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v23)) > _g4_s3 ? (20u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v24)) > _g4_s4 ? (32u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v25)) > _g4_s5 ? (48u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v26)) > _g4_s6 ? (64u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (88u + sizeof(_g4_t_v27)) > _g4_s7 ? (88u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (92u + sizeof(_g4_t_v28)) > _g4_s8 ? (92u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (96u + sizeof(_g4_t_v29)) > _g4_s9 ? (96u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (100u + sizeof(_g4_t_v30)) > _g4_s10 ? (100u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (104u + sizeof(_g4_t_v31)) > _g4_s11 ? (104u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (108u + sizeof(_g4_t_v32)) > _g4_s12 ? (108u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (112u + sizeof(_g4_t_v33)) > _g4_s13 ? (112u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (120u + sizeof(_g4_t_v34)) > _g4_s14 ? (120u + sizeof(_g4_t_v34)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 7u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 8u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 64u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 88u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 92u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 96u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 100u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 104u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 108u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 112u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 120u);

  LODWORD(v34[10]) = (uint32_t)(uintptr_t)(&self);
  v21 = self;
  v27 = nullptr;
  v32 = 0;
  v33 = 1;
  v20 = 0;
  if ( *((gameswf::Character::Self **)self + 25) != a2 )
  {
    v2 = *((uint32_t *)self + 24);
    if ( v2 != 0 )
    {
      v3 = 65599
         * (((BYTE2(a2) + 65599 * (HIBYTE(a2) + 352988219)) << 6)
          + 0xFFFF * (BYTE2(a2) + 65599 * (HIBYTE(a2) + 352988219))
          + BYTE1(a2))
         + (uint8_t)(uintptr_t)a2;
      v22 = *(uint32_t *)(v2 + 4);
      v4 = v3 & v22;
      v5 = v2 + 40 * (v3 & v22) + 8;
      if ( *(uint32_t *)v5 != -2 && v4 == (*(uint32_t *)(v2 + 40 * (v3 & v22) + 12) & v22) )
      {
        for ( i = *(uint32_t *)(v2 + 40 * (v3 & v22) + 12);
              i != v3 || a2 != *(gameswf::Character::Self **)(v5 + 8);
              i = *(uint32_t *)(v2 + 40 * v4 + 12) )
        {
          v4 = *(uint32_t *)v5;
          if ( *(uint32_t *)v5 == -1 )
            return 0;
          v5 = v2 + 40 * v4 + 8;
        }
        if ( v4 < 0 )
          return 0;
        v20 = 0;
        v7 = v2 + 40 * v4 + 8;
        v8 = v7 + 12;
        v9 = *(gameswf::Character::Self **)(v7 + 12);
        v10 = *(float *)(v7 + 16);
        v27 = v9;
        v28 = v10;
        v29 = *(float *)(v8 + 8);
        v30 = *(float *)(v8 + 12);
        v31 = *(float *)(v8 + 16);
        v32 = *(uint32_t *)(v8 + 20);
        v33 = *(uint8_t *)(v8 + 24);
        if ( v32 != 0 )
        {
          v24[0] = 0.0;
          v24[2] = 0.0;
          v11 = *((uint32_t *)self + 13);
          v12 = (v32 - *((uint32_t *)self + 4)) >> 4;
          v13 = (float)*(int *)(v11 + 16);
          v14 = *(int *)(v11 + 16) >> 4;
          v24[1] = v29 - v28;
          v15 = (float)(16 * (v12 & (v14 - 1)));
          v24[3] = v31 - v30;
          v16 = (float)(16 * (v12 / v14));
          v25[1] = (float)((float)(v29 - v28) + v15) / v13;
          v17 = (float)*(int *)(v11 + 20);
          v25[0] = v15 / v13;
          v25[2] = v16 / v17;
          v25[3] = (float)((float)(v31 - v30) + v16) / v17;
          std::memcpy(v34, gameswf::Character::getWorldCxForm(v9), 32);
          gameswf::CxForm::transform(v23, v34, 0xFFFFFFFF);
          v18 = v23[0];
          v20 = 1;
          std::memcpy(v26, gameswf::Character::getWorldMatrix(v9), sizeof(v26));
          if ( gameswf::s_render_handler != nullptr )
            (*(void (**)(uint32_t *, uint32_t *, uint32_t, float *, float *, int))(*gameswf::s_render_handler + 108))(
              (uint32_t *)(gameswf::s_render_handler),
              v26,
              *((uint32_t *)v21 + 13),
              v24,
              v25,
              v18);
        }
      }
    }
  }
  return v20;
}

// ----------------------------------------------------------------------------
// Function: gameswf::FilterEngine::readFrameBuffer  (binary VA: 0x1095950)
// Original: gameswf::FilterEngine::readFrameBuffer
// ----------------------------------------------------------------------------
int gameswf::FilterEngine::readFrameBuffer(gameswf::FilterEngine::Self *self, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  uint8_t *v9;
  int result;
  float v11; // xmm1_4
  int v12;
  int v13;
  int v14;
  float v15; // xmm1_4
  int v16;
  uint8_t v17;
  char *v18;
  char *v19;
  size_t v20;
  bool v21;
  int v22;
  signed int v23;
  uint8_t v24;
  uint8_t v25;
  size_t v26;
  gameswf::Self *v27;

  v5 = a5;
  v6 = a5 * a4;
  v7 = *((uint32_t *)self + 21);
  v8 = 4 * a5 * a4;
  if ( v8 > v7 )
  {
    if ( v8 == 0 )
      goto LABEL_17;
    v23 = *((uint32_t *)self + 22);
    if ( v8 <= v23 || *((uint32_t *)self + 23) != 0 )
      goto LABEL_17;
    v20 = v8 + (v8 >> 1);
    v21 = v20 == 0;
    v26 = v20;
    *((uint32_t *)self + 22) = v20;
    v22 = *((uint32_t *)self + 20);
    if ( v21 )
    {
      if ( v22 != 0 )
      {
        gameswf::free_internal(*((gameswf::Self **)self + 20));
        v5 = a5;
        v8 = 4 * a5 * a4;
      }
      *((uint32_t *)self + 20) = 0;
      v18 = nullptr;
    }
    else
    {
      if ( v22 != 0 )
        v18 = (char *)gameswf::realloc_internal(*((gameswf::Self **)self + 20), v26, v23);
      else
        v18 = (char *)gameswf::malloc_internal(v26);
      *((uint32_t *)self + 20) = (uint32_t)(uintptr_t)(v18);
      v8 = 4 * a5 * a4;
      v5 = a5;
    }
    while ( 1 )
    {
      v19 = &v18[v7];
      if ( v19 != nullptr )
        *v19 = 0;
      if ( ++v7 == v8 )
        break;
LABEL_17:
      v18 = *((char **)self + 20);
    }
    *((uint32_t *)self + 21) = v7;
  }
  v9 = *((uint8_t **)self + 20);
  (*(void (**)(uint32_t *, int, int, int, int, uint8_t *))(*gameswf::s_render_handler + 40))(
    (uint32_t *)(gameswf::s_render_handler),
    a2,
    a3,
    a4,
    v5,
    v9);
  result = v6 - 1;
  if ( v6 != 1 )
  {
    v27 = (gameswf::Self *)(v6 - 1);
    do
    {
      while ( 1 )
      {
        v25 = v9[1];
        v17 = v9[3];
        v24 = *v9;
        if ( (uint8_t)(v17 - 1) <= 0xFDu )
          break;
        result = v24;
        *v9 = v9[2];
        v9[2] = v24;
        v9 += 4;
        v27 = (gameswf::Self *)((char *)v27 - 1);
        if ( v27 == nullptr )
          return result;
      }
      v11 = 255.0 / (float)gameswf::sqrt_table[v17];
      v12 = (int)(float)((float)v9[2] * v11);
      if ( v12 > 254 )
        LOBYTE(v12) = -1;
      *v9 = v12;
      v13 = (int)(float)((float)v25 * v11);
      if ( v13 > 254 )
        LOBYTE(v13) = -1;
      v9[1] = v13;
      v14 = (int)(float)((float)v24 * v11);
      v15 = (float)v17 * v11;
      if ( v14 > 254 )
        v14 = -1;
      result = v14;
      v16 = (int)v15;
      v9[2] = v14;
      if ( (int)v15 > 254 )
        LOBYTE(v16) = -1;
      v9[3] = v16;
      v9 += 4;
      v27 = (gameswf::Self *)((char *)v27 - 1);
    }
    while ( v27 != nullptr );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::FilterEngine::collectFilteredCharacters  (binary VA: 0x1095bb0)
// Original: gameswf::FilterEngine::collectFilteredCharacters
// ----------------------------------------------------------------------------
void gameswf::FilterEngine::collectFilteredCharacters(gameswf::FilterEngine::Self *self, gameswf::Character::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  char *v6;
  char *v7;
  int v8;
  gameswf::Character::Self *v9;

  if ( *((uint8_t *)a2 + 148) != 0 && *((float *)gameswf::Character::getWorldCxForm(a2) + 6) != 0.0 )
  {
    if ( *(uint32_t *)(*((uint32_t *)a2 + 18) + 8) != 0 )
    {
      v3 = *((uint32_t *)self + 17);
      v4 = *((uint32_t *)self + 18);
      v5 = v3 + 1;
      if ( v3 + 1 <= v4 || *((uint32_t *)self + 19) != 0 )
      {
        v6 = *((char **)self + 16);
      }
      else
      {
        v8 = v5 + (v5 >> 1);
        *((uint32_t *)self + 18) = v8;
        if ( v8 != 0 )
        {
          if ( *((uint32_t *)self + 16) != 0 )
            v6 = (char *)gameswf::realloc_internal(*((gameswf::Self **)self + 16), 4 * v8, 4 * v4);
          else
            v6 = (char *)gameswf::malloc_internal(4 * v8);
          *((uint32_t *)self + 16) = (uint32_t)(uintptr_t)(v6);
          v3 = *((uint32_t *)self + 17);
        }
        else
        {
          if ( *((uint32_t *)self + 16) != 0 )
          {
            gameswf::free_internal(*((gameswf::Self **)self + 16));
            v3 = *((uint32_t *)self + 17);
          }
          *((uint32_t *)self + 16) = 0;
          v6 = nullptr;
        }
      }
      v7 = &v6[4 * v3];
      if ( v7 != nullptr )
        *(uint32_t *)v7 = (uint32_t)(uintptr_t)(a2);
      *((uint32_t *)self + 17) = v5;
    }
    if ( G4_VCALL<uint8_t>(a2, 8, 2) != 0
      && *((int *)a2 + 54) > 0 )
    {
      v2 = 0;
      do
      {
        v9 = *(gameswf::Character::Self **)(*((uint32_t *)a2 + 53) + 4 * v2++);
        gameswf::FilterEngine::collectFilteredCharacters(self, v9);
      }
      while ( v2 < *((uint32_t *)a2 + 54) );
    }
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::FilterEngine::clear  (binary VA: 0x1095d10)
// Original: gameswf::FilterEngine::clear
// ----------------------------------------------------------------------------
void gameswf::FilterEngine::clear(char **a1)
{
  char *s;
  size_t n;
  int v3;

  s = *a1;
  if ( (int)(uintptr_t)(a1[4]) > 0 )
  {
    n = (size_t)a1[5];
    v3 = 0;
    do
    {
      ++v3;
      memset(s, 0, n);
      n = (size_t)a1[5];
      s += n;
    }
    while ( (int)(uintptr_t)(a1[4]) > v3 );
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::FilterEngine::copy  (binary VA: 0x1095d70)
// Original: gameswf::FilterEngine::copy
// ----------------------------------------------------------------------------
char * gameswf::FilterEngine::copy(uint32_t *a1, uint32_t *a2)
{
  char *result;
  char *dest;
  char *src;
  int v5;
  uint32_t *v6;
  uint32_t *v7;
  int v8;
  int v9;

  v9 = a2[5];
  v8 = a1[5];
  result = (char *)a2[1];
  if ( (int)a1[4] > 0 )
  {
    dest = &result[v9 * a2[2] + *a2];
    src = (char *)(*a1 + a1[1] + v8 * a1[2]);
    v5 = 0;
    v6 = a1;
    do
    {
      ++v5;
      v7 = v6;
      result = (char *)memcpy(dest, src, v6[6] * v6[3]);
      v6 = v7;
      src += v8;
      dest += v9;
    }
    while ( v7[4] > v5 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::FilterEngine::blend  (binary VA: 0x1095e10)
// Original: gameswf::FilterEngine::blend
// ----------------------------------------------------------------------------
int gameswf::FilterEngine::blend(uint8_t **a1, uint8_t **a2)
{
  int v2;
  int result;
  uint8_t *v4;
  uint8_t *v5;
  int i;
  uint8_t v7;
  uint8_t v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uint8_t v16;
  int v17;
  uint8_t v18;
  int v19;
  uint8_t *v20;
  uint8_t *v21;
  uint8_t *v22;
  int v23;

  v2 = (int)(uintptr_t)(a1[3]);
  v22 = a2[5];
  result = (int)(uintptr_t)(a1[4]);
  if ( result > 0 )
  {
    v21 = *a2;
    v23 = 4 * v2;
    v20 = *a1;
    v19 = 0;
    while ( 1 )
    {
      if ( v2 > 0 )
      {
        v4 = v21;
        v5 = v20;
        for ( i = 0; i < v2; ++i )
        {
          v16 = v5[1];
          v18 = v5[2];
          v7 = v5[3];
          v8 = *v5;
          v5 += 4;
          if ( v7 != 0 )
          {
            v17 = 255 - v7;
            v9 = v8 + v17 * *v4 / 255;
            if ( v9 > 254 )
              LOBYTE(v9) = -1;
            v10 = v17 * v4[1];
            *v4 = v9;
            v11 = v16 + v10 / 255;
            if ( v11 > 254 )
              LOBYTE(v11) = -1;
            v12 = v17 * v4[2];
            v4[1] = v11;
            v13 = v18 + v12 / 255;
            if ( v13 > 254 )
              LOBYTE(v13) = -1;
            v14 = v17 * v4[3];
            v4[2] = v13;
            v15 = v7 + v14 / 255;
            if ( v15 > 254 )
              LOBYTE(v15) = -1;
            v4[3] = v15;
            v2 = (int)(uintptr_t)(a1[3]);
          }
          v4 += 4;
        }
        result = (int)(uintptr_t)(a1[4]);
      }
      if ( ++v19 >= result )
        break;
      v20 += v23;
      v21 = &v21[(uint32_t)(uintptr_t)(v22)];
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::FilterEngine::applyShadow  (binary VA: 0x1095fd0)
// Original: gameswf::FilterEngine::applyShadow
// ----------------------------------------------------------------------------
int gameswf::FilterEngine::applyShadow(int a1)
{
  uint8_t *v1;
  int result;
  int v3;
  double v4; // xmm1_8
  int v5;
  uint8_t *v6;
  int v7;
  uint8_t v8;
  double x;
  float v10;
  int i;
  double v12;
  int v13;
  double v14;
  int v15;
  int v16;
  int v17;

  v1 = *(uint8_t **)a1;
  v10 = *(float *)(*(uint32_t *)a1 + 12);
  x = *(float *)(*(uint32_t *)a1 + 8);
  v12 = cos(x);
  v14 = sin(x);
  result = *(uint32_t *)(a1 + 12);
  v17 = *(uint32_t *)(a1 + 24);
  v3 = *(uint32_t *)(a1 + 52);
  v16 = *(uint32_t *)(a1 + 20);
  if ( v16 > 0 )
  {
    v4 = v12 * v10;
    v13 = 0;
    v15 = *(uint32_t *)(a1 + 36) + v3 * *(uint32_t *)(a1 + 40) + *(uint32_t *)(a1 + 32) + v3 * (int)(v10 * v14) + 4 * (int)v4;
    v5 = *(uint32_t *)(a1 + 16);
    v6 = (uint8_t *)v15;
    for ( i = *(uint32_t *)(a1 + 4) + *(uint32_t *)(a1 + 8) + v17 * result; ; i += v17 )
    {
      v7 = 0;
      if ( v5 > 0 )
      {
        do
        {
          v8 = *(uint8_t *)(i + 4 * v7 + 3);
          if ( v8 != 0 )
          {
            *v6 = v1[4];
            v6[1] = v1[5];
            v6[2] = v1[6];
            v6[3] = v8 * (unsigned int)(uint8_t)v1[7] / 0xFF;
            v5 = *(uint32_t *)(a1 + 16);
          }
          ++v7;
          v6 += 4;
        }
        while ( v7 < v5 );
        v16 = *(uint32_t *)(a1 + 20);
        v17 = *(uint32_t *)(a1 + 24);
        v3 = *(uint32_t *)(a1 + 52);
      }
      v6 = (uint8_t *)(v3 + v15);
      result = v17 + i;
      if ( ++v13 >= v16 )
        break;
      v15 += v3;
    }
  }
  if ( (v1[24] & 0x20) != 0 )
    return gameswf::FilterEngine::blend((uint8_t **)(a1 + 4), (uint8_t **)(a1 + 32));
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::FilterEngine::applyGlow  (binary VA: 0x10961b0)
// Original: gameswf::FilterEngine::applyGlow
// ----------------------------------------------------------------------------
void gameswf::FilterEngine::applyGlow()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: gameswf::FilterEngine::applyBlurH  (binary VA: 0x1096370)
// Original: gameswf::FilterEngine::applyBlurH
// ----------------------------------------------------------------------------
int gameswf::FilterEngine::applyBlurH(uint32_t *a1)
{
  int v1;
  int v2;
  int result;
  int v4;
  int v5;
  int v6;
  int v7;
  float v8; // xmm1_4
  float v9; // xmm0_4
  int v10;
  int v11;
  float v12; // xmm4_4
  uint8_t *v13;
  float v14; // xmm5_4
  float v15; // xmm6_4
  float v16; // xmm7_4
  int v17;
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm2_4
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  typedef float _g4_t_v26;
  typedef int _g4_t_j;
  typedef int _g4_t_v28;
  typedef uint8_t *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_i;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef uint32_t _g4_t_v35[263];
  enum : size_t {
    _g4_s0 = 1184u,
    _g4_s1 = (0u + sizeof(_g4_t_v26)) > _g4_s0 ? (0u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_j)) > _g4_s1 ? (28u + sizeof(_g4_t_j)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v28)) > _g4_s2 ? (32u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v29)) > _g4_s3 ? (36u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v30)) > _g4_s4 ? (40u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v31)) > _g4_s5 ? (48u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_i)) > _g4_s6 ? (52u + sizeof(_g4_t_i)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v33)) > _g4_s7 ? (56u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v34)) > _g4_s8 ? (60u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v35)) > _g4_s9 ? (64u + sizeof(_g4_t_v35)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_j &j = *reinterpret_cast<_g4_t_j *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 36u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 40u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 48u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 52u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 56u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 60u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 64u);

  v31 = a1[7];
  v28 = (int)*(float *)(*a1 + 84);
  v26 = *(float *)(*a1 + 84);
  gameswf::gaussian_kernel((gameswf::Self *)v35, v28);
  v1 = a1[6];
  v2 = a1[13];
  result = (int)(float)(v26 + v26);
  if ( result > 0 )
  {
    result = a1[5];
    if ( result > 0 )
    {
      v4 = a1[4];
      v34 = 0;
      v33 = a1[8] + a1[9] + v2 * a1[10];
      for ( i = a1[1] + a1[2] + v1 * a1[3]; ; i += v1 )
      {
        if ( v4 > 0 )
        {
          v29 = (uint8_t *)v33;
          v30 = i;
          for ( j = 0; j < v4; ++j )
          {
            v5 = -j;
            if ( j - v28 >= 0 )
              v5 = -v28;
            v6 = v28;
            if ( v4 <= v28 + j )
              v6 = v4 - 1 - j;
            if ( a1[7] == 4 )
            {
              if ( v5 > v6 )
              {
                LOBYTE(v25) = 0;
                LOBYTE(v24) = 0;
                LOBYTE(v23) = 0;
                LOBYTE(v22) = 0;
              }
              else
              {
                v11 = v6 + 1;
                v12 = 0.0;
                v13 = (uint8_t *)(v30 + v5 * v31);
                v14 = 0.0;
                v15 = 0.0;
                v16 = 0.0;
                do
                {
                  v17 = v13[3];
                  v18 = *(float *)&v35[v28 + v5++];
                  v19 = (float)((float)((float)((float)0 * 65536.0) + (float)v17) * v18) * 0.003921569f;
                  v16 = v16 + (float)((float)*v13 * v19);
                  v20 = (float)v13[1] * v19;
                  v21 = v13[2];
                  v13 += 4;
                  v15 = v15 + v20;
                  v14 = v14 + (float)((float)v21 * v19);
                  v12 = v12 + (float)((float)v17 * v18);
                }
                while ( v5 != v11 );
                v22 = (int)v16;
                v23 = (int)v15;
                v24 = (int)v14;
                v25 = (int)v12;
              }
              v30 += 4;
              *v29 = v22;
              v29[1] = v23;
              v29[2] = v24;
              v29[3] = v25;
              v29 += 4;
            }
            else
            {
              if ( v5 > v6 )
              {
                LOBYTE(v10) = 0;
              }
              else
              {
                v7 = v6 + 1;
                v8 = 0.0;
                do
                {
                  v9 = (float)((float)((float)0 * 65536.0) + (float)*(uint8_t *)(v30 + v5))
                     * *(float *)&v35[v28 + v5];
                  ++v5;
                  v8 = v8 + v9;
                }
                while ( v5 != v7 );
                v10 = (int)v8;
              }
              ++v30;
              *v29++ = v10;
            }
            v4 = a1[4];
          }
          result = a1[5];
          v1 = a1[6];
          v2 = a1[13];
        }
        if ( ++v34 >= result )
          break;
        v33 += v2;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::FilterEngine::applyBlurV  (binary VA: 0x1096660)
// Original: gameswf::FilterEngine::applyBlurV
// ----------------------------------------------------------------------------
int gameswf::FilterEngine::applyBlurV(uint32_t *a1)
{
  int result;
  int v2;
  int v3;
  int v4;
  int v5;
  uint8_t *v6;
  float v7; // xmm1_4
  int v8;
  float v9; // xmm0_4
  int v10;
  int v11;
  float v12; // xmm4_4
  uint8_t *v13;
  float v14; // xmm5_4
  float v15; // xmm6_4
  float v16; // xmm7_4
  int v17;
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm2_4
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  typedef float _g4_t_v26;
  typedef int _g4_t_i;
  typedef int _g4_t_v28;
  typedef uint8_t *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef uint32_t _g4_t_v35[263];
  enum : size_t {
    _g4_s0 = 1184u,
    _g4_s1 = (0u + sizeof(_g4_t_v26)) > _g4_s0 ? (0u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_i)) > _g4_s1 ? (28u + sizeof(_g4_t_i)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v28)) > _g4_s2 ? (32u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v29)) > _g4_s3 ? (36u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v30)) > _g4_s4 ? (40u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v31)) > _g4_s5 ? (48u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v32)) > _g4_s6 ? (52u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v33)) > _g4_s7 ? (56u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v34)) > _g4_s8 ? (60u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v35)) > _g4_s9 ? (64u + sizeof(_g4_t_v35)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 36u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 40u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 48u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 52u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 56u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 60u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 64u);

  v32 = a1[7];
  v28 = (int)*(float *)(*a1 + 88);
  v26 = *(float *)(*a1 + 88);
  gameswf::gaussian_kernel((gameswf::Self *)v35, v28);
  result = (int)(float)(v26 + v26);
  if ( result > 0 )
  {
    result = a1[4];
    if ( result > 0 )
    {
      v31 = 0;
      v33 = a1[1] + a1[2] + a1[6] * a1[3];
      v34 = a1[8] + a1[9] + a1[10] * a1[13];
      v2 = a1[5];
      do
      {
        v29 = (uint8_t *)(v31 + v34);
        v30 = v31 + v33;
        if ( v2 > 0 )
        {
          for ( i = 0; i < v2; ++i )
          {
            v3 = -i;
            if ( i - v28 >= 0 )
              v3 = -v28;
            v4 = v28;
            if ( v2 <= v28 + i )
              v4 = v2 - 1 - i;
            if ( a1[7] == 4 )
            {
              if ( v3 > v4 )
              {
                LOBYTE(v25) = 0;
                LOBYTE(v24) = 0;
                LOBYTE(v23) = 0;
                LOBYTE(v22) = 0;
              }
              else
              {
                v11 = v4 + 1;
                v12 = 0.0;
                v13 = (uint8_t *)(v30 + v3 * v32);
                v14 = 0.0;
                v15 = 0.0;
                v16 = 0.0;
                do
                {
                  v17 = v13[3];
                  v18 = *(float *)&v35[v28 + v3++];
                  v19 = (float)((float)((float)((float)0 * 65536.0) + (float)v17) * v18) * 0.003921569f;
                  v16 = v16 + (float)((float)*v13 * v19);
                  v20 = (float)v13[1] * v19;
                  v21 = v13[2];
                  v13 += 4;
                  v15 = v15 + v20;
                  v14 = v14 + (float)((float)v21 * v19);
                  v12 = v12 + (float)((float)v17 * v18);
                }
                while ( v3 != v11 );
                v22 = (int)v16;
                v23 = (int)v15;
                v24 = (int)v14;
                v25 = (int)v12;
              }
              *v29 = v22;
              v29[1] = v23;
              v29[2] = v24;
              v29[3] = v25;
              v29 += a1[13];
              v30 += a1[6];
            }
            else
            {
              v5 = a1[6];
              if ( v3 > v4 )
              {
                LOBYTE(v10) = 0;
              }
              else
              {
                v6 = (uint8_t *)(v30 + v3 * v5);
                v7 = 0.0;
                do
                {
                  v8 = *v6;
                  v6 += v5;
                  v9 = (float)((float)((float)0 * 65536.0) + (float)v8) * *(float *)&v35[v28 + v3++];
                  v7 = v7 + v9;
                }
                while ( v3 != v4 + 1 );
                v10 = (int)v7;
              }
              *v29 = v10;
              v30 += a1[6];
              v29 += a1[13];
            }
            v2 = a1[5];
          }
          result = a1[4];
        }
        ++v31;
      }
      while ( v31 < result );
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::FilterEngine::apply  (binary VA: 0x1096960)
// Original: gameswf::FilterEngine::apply
// ----------------------------------------------------------------------------
void gameswf::FilterEngine::apply(char **a1)
{
  float *v1;
  int v2;
  char *v3;
  char *v4;
  char *v5;
  char *v6;
  char *v7;
  char *v8;
  char *v9;
  char *v10;
  char *v11;
  char *v12;
  char *v13;
  char *v14;
  char *v15;
  char *v16;
  char *v17;
  char *v18;
  char *v19;
  char *v20;
  char *v21;
  char *v22;
  char *v23;
  char *v24;
  char *v25;
  char *v26;
  char *v27;
  char *v28;
  char *v29;
  char *v30;
  char *v31;
  char *v32;
  char *v33;
  char *v34;

  v1 = (float *)*a1;
  v2 = *(uint32_t *)*a1;
  switch ( v2 )
  {
    case 1:
      if ( v1[21] > 0.0 )
      {
        gameswf::FilterEngine::applyBlurH((uint32_t *)(a1));
        v8 = a1[1];
        v24 = a1[5];
        v28 = a1[6];
        v32 = a1[7];
        a1[1] = a1[8];
        v9 = a1[2];
        a1[2] = a1[9];
        v10 = a1[3];
        a1[3] = a1[10];
        v11 = a1[4];
        a1[4] = a1[11];
        v12 = a1[12];
        a1[11] = v11;
        a1[5] = v12;
        a1[6] = a1[13];
        a1[7] = a1[14];
        a1[12] = v24;
        a1[13] = v28;
        a1[8] = v8;
        a1[9] = v9;
        a1[10] = v10;
        a1[14] = v32;
        v1 = (float *)*a1;
      }
      if ( v1[22] > 0.0 )
      {
        gameswf::FilterEngine::applyBlurV((uint32_t *)(a1));
        v13 = a1[1];
        v25 = a1[5];
        v29 = a1[6];
        v33 = a1[7];
        a1[1] = a1[8];
        v14 = a1[2];
        a1[2] = a1[9];
        v15 = a1[3];
        a1[3] = a1[10];
        v16 = a1[4];
        a1[4] = a1[11];
        v17 = a1[12];
        a1[8] = v13;
        a1[5] = v17;
        a1[6] = a1[13];
        a1[7] = a1[14];
        a1[12] = v25;
        a1[13] = v29;
        a1[9] = v14;
        a1[10] = v15;
        a1[11] = v16;
        a1[14] = v33;
      }
      v18 = a1[1];
      v26 = a1[5];
      v30 = a1[6];
      v34 = a1[7];
      a1[1] = a1[8];
      v19 = a1[2];
      a1[2] = a1[9];
      v20 = a1[3];
      a1[3] = a1[10];
      v21 = a1[4];
      a1[4] = a1[11];
      v22 = a1[12];
      a1[8] = v18;
      a1[5] = v22;
      a1[6] = a1[13];
      a1[7] = a1[14];
      a1[12] = v26;
      a1[13] = v30;
      a1[9] = v19;
      a1[10] = v20;
      a1[11] = v21;
      a1[14] = v34;
      break;
    case 2:
      gameswf::FilterEngine::applyGlow();
      v3 = a1[1];
      v23 = a1[5];
      v27 = a1[6];
      v31 = a1[7];
      a1[1] = a1[8];
      v4 = a1[2];
      a1[2] = a1[9];
      v5 = a1[3];
      a1[3] = a1[10];
      v6 = a1[4];
      a1[4] = a1[11];
      v7 = a1[12];
      a1[8] = v3;
      a1[5] = v7;
      a1[6] = a1[13];
      a1[7] = a1[14];
      a1[12] = v23;
      a1[13] = v27;
      a1[9] = v4;
      a1[10] = v5;
      a1[11] = v6;
      a1[14] = v31;
      gameswf::FilterEngine::clear(a1 + 8);
      break;
    case 0:
      gameswf::FilterEngine::copy((uint32_t *)(a1 + 1), (uint32_t *)(a1 + 8));
      break;
    default:
      break;
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::FilterEngine::prepare  (binary VA: 0x1096bd0)
// Original: gameswf::FilterEngine::prepare
// ----------------------------------------------------------------------------
int gameswf::FilterEngine::prepare(int *a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  double v5; // xmm0_8
  int v6;
  int result;
  int v8;
  int v9;
  int v10;

  v1 = *a1;
  v2 = a1[4];
  v3 = a1[5];
  a1[9] = 0;
  a1[10] = 0;
  a1[11] = v2;
  a1[12] = v3;
  if ( *(uint32_t *)v1 != 0 )
  {
    if ( *(uint32_t *)v1 == 2 )
    {
      v2 += 2;
      v3 += 2;
      a1[11] = v2;
      a1[12] = v3;
    }
    v10 = 0;
    v6 = 0;
  }
  else
  {
    v8 = v2;
    v4 = (int)(cos(*(float *)(v1 + 8)) * *(float *)(v1 + 12) + 0.5);
    a1[9] = v4;
    v9 = v4;
    v5 = sin(*(float *)(v1 + 8)) * *(float *)(v1 + 12) + 0.5;
    a1[10] = (int)v5;
    v6 = v9;
    v10 = (int)v5;
    v2 = __builtin_abs(v9) + v8;
    a1[11] = v2;
    v3 += __builtin_abs((int)v5);
    a1[12] = v3;
  }
  a1[11] = (int)(float)(*(float *)(v1 + 84) + 0.5) + v2;
  a1[12] = (int)(float)(*(float *)(v1 + 88) + 0.5) + v3;
  a1[9] = v6 - (int)(float)(*(float *)(v1 + 84) * 0.5);
  result = (int)(float)(0.5 * *(float *)(v1 + 88));
  a1[10] = v10 - result;
  return result;
}



// ============================================================================
// Address:   0x10970f0 (size: 4991 bytes)
// Symbol:    _ZN7gameswf12FilterEngine3runEPNS_4RootE
// Demangled: gameswf::FilterEngine::run(gameswf::Root *)
// ============================================================================

