#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASString.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASString::init  (binary VA: 0x1141f50)
// Original: gameswf::ASString::init
// ----------------------------------------------------------------------------
char * gameswf::ASString::init(int a1)
{
  char *result;
  gameswf::String::Self *v2;
  typedef gameswf::Self *_g4_t_v3[4];
  typedef int16_t _g4_t_v4;
  typedef char _g4_t_v5;
  typedef char _g4_t_v6;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v4)) > _g4_s1 ? (16u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (18u + sizeof(_g4_t_v5)) > _g4_s2 ? (18u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (19u + sizeof(_g4_t_v6)) > _g4_s3 ? (19u + sizeof(_g4_t_v6)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 16u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 18u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 19u);

  if ( *(uint32_t *)(a1 + 16) != 1 )
    return (char *)gameswf::ASValue::setString(*(gameswf::ASValue::Self **)a1, (char *)&unk_1B15112);
  LOWORD(v3[0]) = 1;
  v4 = -1;
  v5 = 127;
  v6 |= 1u;
  v2 = gameswf::ASValue::toString((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)), v3);
  result = gameswf::ASValue::setString(*(const gameswf::String::Self ***)a1, v2);
  if ( LOBYTE(v3[0]) == 0xFF && (v6 & 1) != 0 )
    return (char *)gameswf::free_internal(v3[3]);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASString::ctor  (binary VA: 0x1142020)
// Original: gameswf::ASString::ctor
// ----------------------------------------------------------------------------
char * gameswf::ASString::ctor(int a1)
{
  return gameswf::ASString::init(a1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASString::toNumber  (binary VA: 0x1142050)
// Original: gameswf::ASString::toNumber
// ----------------------------------------------------------------------------
bool gameswf::ASString::toNumber(gameswf::ASString::Self *self, double *nptr)
{
  long double v2; // fst7
  double *v3;
  bool result;
  typedef char *_g4_t_endptr;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_endptr)) > _g4_s0 ? (12u + sizeof(_g4_t_endptr)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_endptr &endptr = *reinterpret_cast<_g4_t_endptr *>(_g4_sf + 12u);

  endptr = nullptr;
  v2 = strtod((const char *)nptr, &endptr);
  v3 = (double *)endptr;
  *(double *)self = v2;
  result = false;
  if ( v3 != nptr )
    return *(uint8_t *)v3 == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASString::toNumber  (binary VA: 0x11420b0)
// Original: gameswf::ASString::toNumber
// ----------------------------------------------------------------------------
bool gameswf::ASString::toNumber(gameswf::ASString::Self *self, char *nptr)
{
  bool result;
  typedef char *_g4_t_endptr;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_endptr)) > _g4_s0 ? (12u + sizeof(_g4_t_endptr)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_endptr &endptr = *reinterpret_cast<_g4_t_endptr *>(_g4_sf + 12u);

  endptr = nullptr;
  *(uint32_t *)self = strtol(nptr, &endptr, 10);
  result = false;
  if ( endptr != nptr )
    return *endptr == 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASString::charCodeAt  (binary VA: 0x1142110)
// Original: gameswf::ASString::charCodeAt
// ----------------------------------------------------------------------------
int gameswf::ASString::charCodeAt(int a1)
{
  int v1;
  char *v2;
  int v3;
  gameswf::String::Self *v4;
  const char *v5;
  double v6; // xmm0_8
  gameswf::ASValue::Self *v8;
  long double nan_val; // fst7
  int v10;

  v1 = *(uint32_t *)(a1 + 8);
  if ( *(uint8_t *)v1 == 3 || *(uint8_t *)v1 == 4 )
  {
    v2 = *(char **)(v1 + 4);
  }
  else
  {
    v2 = (char *)(&byte_20D6378);
    if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
    {
      byte_20D6378 = 1;
      v10 = dword_20D6388 | 0x7FFFFF;
      byte_20D6379 = 0;
      dword_20D6388 = v10;
      BYTE2(dword_20D6388) = BYTE2(v10) & 0x7F;
      HIBYTE(dword_20D6388) = HIBYTE(v10) | 1;
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
      __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
    }
  }
  v3 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  if ( v3 < 0
    || (*v2 == -1
      ? (v4 = *((gameswf::String::Self **)v2 + 3), v5 = (const char *)(*((uint32_t *)v2 + 1) - 1))
      : (v4 = (gameswf::String::Self *)(v2 + 1), v5 = (const char *)(*v2 - 1)),
        v3 >= gameswf::String::charCountUTF8(v4, v5)) )
  {
    v8 = *(gameswf::ASValue::Self **)a1;
    nan_val = gameswf::getNAN();
    return gameswf::ASValue::setDouble(v8, nan_val);
  }
  else
  {
    v6 = (double)(unsigned int)gameswf::String::charAtUTF8((gameswf::String::Self *)v2, v3);
    return gameswf::ASValue::setDouble(*(gameswf::ASValue::Self **)a1, v6);
  }
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASString::concat  (binary VA: 0x1142270)
// Original: gameswf::ASString::concat
// ----------------------------------------------------------------------------
char * gameswf::ASString::concat(int a1)
{
  int v1;
  int v2;
  char *v3;
  int v4;
  gameswf::Self *v5;
  char *v6;
  gameswf::Self *v7;
  int v8;
  unsigned int v9;
  int v10;
  char v11;
  int v12;
  int v13;
  gameswf::Self *v14;
  char *v15;
  gameswf::String::Self *v16;
  char *result;
  int v18;
  char *v19;
  int v20;
  int v21;
  int v22;
  typedef int _g4_t_v23;
  typedef gameswf::String::Self *_g4_t_v24;
  typedef char *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef gameswf::Self *_g4_t_v27;
  typedef char _g4_t_v28;
  typedef uint8_t _g4_t_v29[3];
  typedef char *_g4_t_v30;
  typedef gameswf::Self *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef gameswf::Self *_g4_t_v33[4];
  typedef int16_t _g4_t_v34;
  typedef char _g4_t_v35;
  typedef char _g4_t_v36;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v23)) > _g4_s0 ? (8u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v24)) > _g4_s1 ? (12u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v25)) > _g4_s2 ? (20u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v26)) > _g4_s3 ? (24u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v27)) > _g4_s4 ? (28u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v28)) > _g4_s5 ? (32u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (33u + sizeof(_g4_t_v29)) > _g4_s6 ? (33u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v30)) > _g4_s7 ? (36u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v31)) > _g4_s8 ? (44u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v32)) > _g4_s9 ? (48u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v33)) > _g4_s10 ? (64u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v34)) > _g4_s11 ? (80u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (82u + sizeof(_g4_t_v35)) > _g4_s12 ? (82u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (83u + sizeof(_g4_t_v36)) > _g4_s13 ? (83u + sizeof(_g4_t_v36)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 33u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 36u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 44u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 64u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 80u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 82u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 83u);

  v1 = a1;
  v2 = *(uint32_t *)(a1 + 8);
  if ( *(uint8_t *)v2 == 3 || *(uint8_t *)v2 == 4 )
  {
    v3 = *(char **)(v2 + 4);
  }
  else
  {
    v3 = (char *)(&byte_20D6378);
    if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
    {
      byte_20D6378 = 1;
      v18 = dword_20D6388 | 0x7FFFFF;
      byte_20D6379 = 0;
      dword_20D6388 = v18;
      BYTE2(dword_20D6388) = BYTE2(v18) & 0x7F;
      HIBYTE(dword_20D6388) = HIBYTE(v18) | 1;
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
      __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
    }
  }
  v28 = 1;
  v29[0] = 0;
  if ( *v3 == -1 )
    v4 = *((uint32_t *)v3 + 1) - 1;
  else
    v4 = *v3 - 1;
  gameswf::String::resize((gameswf::String::Self *)&v28, v4);
  v5 = (gameswf::Self *)(v3 + 1);
  if ( *v3 == -1 )
    v5 = *((gameswf::Self **)v3 + 3);
  if ( v28 == -1 )
  {
    v6 = v30;
    v7 = v31;
  }
  else
  {
    v6 = (char *)v28;
    v7 = (gameswf::Self *)v29;
  }
  gameswf::Strcpy_s(v7, v6, v5);
  v26 = *((uint32_t *)v3 + 4);
  if ( (uint8_t *)(v26 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
  {
    if ( *v3 == -1 )
    {
      v19 = *((char **)v3 + 3);
      v20 = *((uint32_t *)v3 + 1) - 1;
    }
    else
    {
      v19 = v3 + 1;
      v20 = *v3 - 1;
    }
    v8 = 5381;
    if ( v20 > 0 )
    {
      v25 = v3;
      do
      {
        --v20;
        v21 = 33 * v8;
        v22 = (uint8_t)v19[v20] + 32;
        if ( (uint8_t)(v19[v20] - 65) > 0x19u )
          v22 = (uint8_t)v19[v20];
        v8 = v21 ^ v22;
      }
      while ( v20 != 0 );
      v3 = v25;
      v1 = a1;
      v8 = v8 << 9 >> 9;
    }
    *((uint32_t *)v3 + 4) = v8 & 0x7FFFFF | v26 & 0xFF800000;
  }
  else
  {
    v8 = v26 << 9 >> 9;
  }
  LOWORD(v33[0]) = 1;
  v9 = v8 & 0x7FFFFF | v32 & 0xFF800000;
  LOWORD(v32) = v8;
  BYTE2(v32) = BYTE2(v9) & 0x7F;
  v34 = -1;
  HIBYTE(v32) = HIBYTE(v9) | 1;
  v35 = 127;
  v36 |= 1u;
  if ( *(int *)(v1 + 16) > 0 )
  {
    v10 = 0;
    do
    {
      v16 = gameswf::ASValue::toString(
              (gameswf::ASValue::Self *)(**(uint32_t **)(v1 + 12) + 12 * (*(uint32_t *)(v1 + 20) - v10)),
              v33);
      if ( *(uint8_t *)v16 == 0xFF )
      {
        v11 = v28;
        v12 = *((uint32_t *)v16 + 1) - 1;
        if ( v28 == -1 )
        {
LABEL_23:
          v13 = (int)(uintptr_t)(v30 - 1);
          goto LABEL_16;
        }
      }
      else
      {
        v11 = v28;
        v12 = *(char *)v16 - 1;
        if ( v28 == -1 )
          goto LABEL_23;
      }
      v13 = v11 - 1;
LABEL_16:
      v24 = v16;
      v23 = v13;
      gameswf::String::resize((gameswf::String::Self *)&v28, v13 + v12);
      if ( *(uint8_t *)v24 == 0xFF )
        v14 = *((gameswf::Self **)v24 + 3);
      else
        v14 = (gameswf::Self *)((gameswf::String::Self *)((char *)v24 + 1));
      if ( v28 == -1 )
      {
        v15 = v30;
        v27 = v31;
      }
      else
      {
        v27 = (gameswf::Self *)v29;
        v15 = (char *)v28;
      }
      ++v10;
      gameswf::Strcpy_s((gameswf::Self *)((char *)v27 + v23), v15, v14);
      v32 |= 0x7FFFFFu;
    }
    while ( *(uint32_t *)(v1 + 16) > v10 );
  }
  result = gameswf::ASValue::setString(*(const gameswf::String::Self ***)v1, (const gameswf::String::Self *)&v28);
  if ( LOBYTE(v33[0]) == 0xFF && (v36 & 1) != 0 )
    result = (char *)gameswf::free_internal(v33[3]);
  if ( v28 == -1 && (v32 & 0x1000000) != 0 )
    return (char *)gameswf::free_internal(v31);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASString::fromCharCode  (binary VA: 0x1142660)
// Original: gameswf::ASString::fromCharCode
// ----------------------------------------------------------------------------
char * gameswf::ASString::fromCharCode(int a1)
{
  int v1;
  int v2;
  __m128d v3;
  char *result;
  typedef uint64_t _g4_t_v5;
  typedef uint8_t _g4_t_v6[12];
  typedef gameswf::Self *_g4_t_v7;
  typedef int16_t _g4_t_v8;
  typedef char _g4_t_v9;
  typedef char _g4_t_v10;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v6)) > _g4_s1 ? (16u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v7)) > _g4_s2 ? (28u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v8)) > _g4_s3 ? (32u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (34u + sizeof(_g4_t_v9)) > _g4_s4 ? (34u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (35u + sizeof(_g4_t_v10)) > _g4_s5 ? (35u + sizeof(_g4_t_v10)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 34u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 35u);

  v6[0] = 1;
  v6[1] = 0;
  v8 = -1;
  v9 = 127;
  v10 |= 1u;
  if ( *(int *)(a1 + 16) > 0 )
  {
    v1 = 0;
    do
    {
      v2 = *(uint32_t *)(a1 + 20) - v1++;
      *(double *)&v5 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * v2));
      v3 = _mm_cmple_pd(G4_BITCAST<__m128d>(xmmword_1C7C210), G4_BITCAST<__m128d>(v5));
      gameswf::String::appendWideChar(
        (gameswf::String::Self *)v6,
        (int *)_mm_cvtsi128_si32(
                 _mm_xor_si128(
                   _mm_cvttpd_epi32(_mm_sub_pd(G4_BITCAST<__m128d>(v5), _mm_and_pd(G4_BITCAST<__m128d>(xmmword_1C7C210), v3))),
                   _mm_slli_epi32(G4_BITCAST<__m128i>(v3), 0x1Fu))));
    }
    while ( *(uint32_t *)(a1 + 16) > v1 );
  }
  result = gameswf::ASValue::setString(*(const gameswf::String::Self ***)a1, (const gameswf::String::Self *)v6);
  if ( v6[0] == 0xFF && (v10 & 1) != 0 )
    return (char *)gameswf::free_internal(v7);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASString::indexOf  (binary VA: 0x1142770)
// Original: gameswf::ASString::indexOf
// ----------------------------------------------------------------------------
int gameswf::ASString::indexOf(int a1)
{
  int v1;
  char *v2;
  int v3;
  int v4;
  gameswf::String::Self *v5;
  char *needle;
  char *v7;
  double v8; // xmm0_8
  int v10;

  v1 = *(uint32_t *)(a1 + 8);
  if ( *(uint8_t *)v1 == 3 || *(uint8_t *)v1 == 4 )
  {
    v2 = *(char **)(v1 + 4);
  }
  else
  {
    v2 = (char *)(&byte_20D6378);
    if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
    {
      byte_20D6378 = 1;
      v10 = dword_20D6388 | 0x7FFFFF;
      byte_20D6379 = 0;
      dword_20D6388 = v10;
      BYTE2(dword_20D6388) = BYTE2(v10) & 0x7F;
      HIBYTE(dword_20D6388) = HIBYTE(v10) | 1;
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
      __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
    }
  }
  v3 = *(uint32_t *)(a1 + 16);
  if ( v3 <= 0 )
    return gameswf::ASValue::setDouble(*(gameswf::ASValue::Self **)a1, -1.0);
  v4 = 0;
  if ( v3 != 1 )
    v4 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
  v5 = *v2 == -1 ? *((gameswf::String::Self **)v2 + 3) : (gameswf::String::Self *)(v2 + 1);
  needle = gameswf::ASValue::toCStr((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  v7 = (char *)(strstr((const char *)v5 + v4, needle));
  if ( v7 == nullptr )
    return gameswf::ASValue::setDouble(*(gameswf::ASValue::Self **)a1, -1.0);
  v8 = (double)gameswf::String::charCountUTF8(v5, (const char *)(v7 - (char *)v5));
  return gameswf::ASValue::setDouble(*(gameswf::ASValue::Self **)a1, v8);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASString::lastIndexOf  (binary VA: 0x1142900)
// Original: gameswf::ASString::lastIndexOf
// ----------------------------------------------------------------------------
int gameswf::ASString::lastIndexOf(int a1)
{
  int v1;
  char *v2;
  int v3;
  int v4;
  gameswf::String::Self *v5;
  const char *haystack;
  char *i;
  char *needle;
  char *v9;
  double v10; // xmm0_8
  int v12;
  gameswf::String::Self *v13;

  v1 = *(uint32_t *)(a1 + 8);
  if ( *(uint8_t *)v1 == 3 || *(uint8_t *)v1 == 4 )
  {
    v2 = *(char **)(v1 + 4);
  }
  else
  {
    v2 = (char *)(&byte_20D6378);
    if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
    {
      byte_20D6378 = 1;
      v12 = dword_20D6388 | 0x7FFFFF;
      byte_20D6379 = 0;
      dword_20D6388 = v12;
      BYTE2(dword_20D6388) = BYTE2(v12) & 0x7F;
      HIBYTE(dword_20D6388) = HIBYTE(v12) | 1;
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
      __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
    }
  }
  v3 = *(uint32_t *)(a1 + 16);
  if ( v3 <= 0 )
    return gameswf::ASValue::setDouble(*(gameswf::ASValue::Self **)a1, -1.0);
  v4 = 0;
  if ( v3 != 1 )
    v4 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
  v5 = *v2 == -1 ? *((gameswf::String::Self **)v2 + 3) : (gameswf::String::Self *)(v2 + 1);
  v13 = v5;
  haystack = (char *)v5 + v4;
  for ( i = nullptr; ; i = v9 )
  {
    needle = gameswf::ASValue::toCStr((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
    v9 = (char *)(strstr(haystack, needle));
    if ( v9 == nullptr )
      break;
    haystack = v9 + 1;
  }
  if ( i == nullptr )
    return gameswf::ASValue::setDouble(*(gameswf::ASValue::Self **)a1, -1.0);
  v10 = (double)gameswf::String::charCountUTF8(v13, (const char *)(i - (char *)v13));
  return gameswf::ASValue::setDouble(*(gameswf::ASValue::Self **)a1, v10);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASString::slice  (binary VA: 0x1142a90)
// Original: gameswf::ASString::slice
// ----------------------------------------------------------------------------
char * gameswf::ASString::slice(int a1)
{
  int v1;
  int v2;
  char *v3;
  char v4;
  const char *v5;
  gameswf::String::Self *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  char *result;
  int v13;
  typedef int _g4_t_v14;
  typedef char *_g4_t_obj;
  typedef uint8_t _g4_t_v16[8];
  typedef gameswf::Self *_g4_t_v17;
  typedef char _g4_t_v18;
  typedef int *_g4_t_v19;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_obj)) > _g4_s1 ? (4u + sizeof(_g4_t_obj)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v16)) > _g4_s2 ? (8u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v17)) > _g4_s3 ? (20u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (27u + sizeof(_g4_t_v18)) > _g4_s4 ? (27u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v19)) > _g4_s5 ? (48u + sizeof(_g4_t_v19)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_obj &obj = *reinterpret_cast<_g4_t_obj *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 20u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 27u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 48u);

  v19 = &a1;
  v1 = a1;
  v2 = *(uint32_t *)(a1 + 8);
  if ( *(uint8_t *)v2 == 3 || *(uint8_t *)v2 == 4 )
  {
    obj = *(char **)(v2 + 4);
    v3 = obj;
    v4 = *obj;
    if ( *obj != -1 )
    {
LABEL_5:
      v5 = (const char *)(v4 - 1);
      v6 = (gameswf::String::Self *)(v3 + 1);
      goto LABEL_6;
    }
  }
  else
  {
    obj = (char *)(&byte_20D6378);
    if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
    {
      byte_20D6378 = 1;
      v13 = dword_20D6388 | 0x7FFFFF;
      byte_20D6379 = 0;
      dword_20D6388 = v13;
      BYTE2(dword_20D6388) = BYTE2(v13) & 0x7F;
      HIBYTE(dword_20D6388) = HIBYTE(v13) | 1;
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
      __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
    }
    v3 = (char *)(&byte_20D6378);
    v4 = byte_20D6378;
    if ( byte_20D6378 != -1 )
      goto LABEL_5;
  }
  v6 = *((gameswf::String::Self **)v3 + 3);
  v5 = (const char *)(*((uint32_t *)v3 + 1) - 1);
LABEL_6:
  v7 = gameswf::String::charCountUTF8(v6, v5);
  v8 = 0;
  v9 = v7;
  if ( *(int *)(v1 + 16) > 0 )
  {
    v10 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(v1 + 12) + 12 * *(uint32_t *)(v1 + 20)));
    v8 = v10;
    if ( v10 < 0 )
      v8 = v9 + v10;
    if ( *(int *)(v1 + 16) <= 1 )
    {
      v7 = v9;
    }
    else
    {
      v14 = v8;
      v7 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(v1 + 12) + 4 * (3 * *(uint32_t *)(v1 + 20) - 3)));
      v8 = v14;
      if ( v7 < 0 )
        v7 += v9;
    }
  }
  if ( v8 > v9 )
    v8 = v9;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v8;
  if ( v7 > v9 )
    v7 = v9;
  if ( v7 < v11 )
    v7 = v11;
  gameswf::String::substringUTF8((gameswf::String::Self *)v16, (int)(uintptr_t)(obj), v11, v7);
  result = gameswf::ASValue::setString(*(const gameswf::String::Self ***)v1, (const gameswf::String::Self *)v16);
  if ( v16[0] == 0xFF && (v18 & 1) != 0 )
    return (char *)gameswf::free_internal(v17);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASString::split  (binary VA: 0x1142c90)
// Original: gameswf::ASString::split
// ----------------------------------------------------------------------------
gameswf::RefCounted::Self * gameswf::ASString::split(int a1)
{
  int v1;
  char *v2;
  int v3;
  gameswf::Self *v4;
  gameswf::Self *v5;
  gameswf::RefCounted::Self *Array;
  char *v7;
  gameswf::Self *v8;
  size_t v9;
  char *v10;
  gameswf::Self *v11;
  const char *v12;
  gameswf::String::Self *v13;
  char *v14;
  char v15;
  int v16;
  char *i;
  char *v18;
  char *v19;
  int v20;
  char *v21;
  bool v22;
  gameswf::Self *v23;
  gameswf::Self *v24;
  int v25;
  int v26;
  gameswf::RefCounted::Self *result;
  const char *v28;
  gameswf::Self *v29;
  int v30;
  const char *v31;
  int v32;
  int v33;
  size_t v34;
  int v35;
  int v36;
  char *v37;
  gameswf::ASValue::Self *v38;
  char *v39;
  int v40;
  int v41;
  gameswf::Self *v42;
  int v43;
  gameswf::Self *v44;
  gameswf::Self *v45;
  char *v46;
  int v47;
  char *v48;
  gameswf::ASValue::Self *v49;
  gameswf::Self *v50;
  int v51;
  gameswf::Self *v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef size_t _g4_t_v57;
  typedef int _g4_t_v58;
  typedef size_t _g4_t_v59;
  typedef int _g4_t_v60;
  typedef size_t _g4_t_v61;
  typedef int _g4_t_v62;
  typedef signed int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef size_t _g4_t_v65;
  typedef int _g4_t_v66;
  typedef size_t _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef bool _g4_t_v70;
  typedef gameswf::RefCounted::Self *_g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef char *_g4_t_v74;
  typedef size_t _g4_t_v75;
  typedef int _g4_t_v76;
  typedef char *_g4_t_v77;
  typedef char *_g4_t_v78;
  typedef char _g4_t_v79;
  typedef uint8_t _g4_t_v80[3];
  typedef char *_g4_t_v81;
  typedef gameswf::Self *_g4_t_v82;
  typedef int _g4_t_v83;
  typedef char *_g4_t_v84[3];
  typedef gameswf::Self *_g4_t_v85;
  typedef int16_t _g4_t_v86;
  typedef char _g4_t_v87;
  typedef char _g4_t_v88;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (8u + sizeof(_g4_t_v53)) > _g4_s0 ? (8u + sizeof(_g4_t_v53)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v54)) > _g4_s1 ? (12u + sizeof(_g4_t_v54)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v55)) > _g4_s2 ? (16u + sizeof(_g4_t_v55)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v56)) > _g4_s3 ? (16u + sizeof(_g4_t_v56)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v57)) > _g4_s4 ? (16u + sizeof(_g4_t_v57)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v58)) > _g4_s5 ? (16u + sizeof(_g4_t_v58)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v59)) > _g4_s6 ? (16u + sizeof(_g4_t_v59)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v60)) > _g4_s7 ? (16u + sizeof(_g4_t_v60)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v61)) > _g4_s8 ? (16u + sizeof(_g4_t_v61)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v62)) > _g4_s9 ? (20u + sizeof(_g4_t_v62)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v63)) > _g4_s10 ? (28u + sizeof(_g4_t_v63)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v64)) > _g4_s11 ? (32u + sizeof(_g4_t_v64)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v65)) > _g4_s12 ? (32u + sizeof(_g4_t_v65)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v66)) > _g4_s13 ? (36u + sizeof(_g4_t_v66)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v67)) > _g4_s14 ? (36u + sizeof(_g4_t_v67)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v68)) > _g4_s15 ? (40u + sizeof(_g4_t_v68)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_v69)) > _g4_s16 ? (40u + sizeof(_g4_t_v69)) : _g4_s16,
    _g4_s18 = (47u + sizeof(_g4_t_v70)) > _g4_s17 ? (47u + sizeof(_g4_t_v70)) : _g4_s17,
    _g4_s19 = (48u + sizeof(_g4_t_v71)) > _g4_s18 ? (48u + sizeof(_g4_t_v71)) : _g4_s18,
    _g4_s20 = (52u + sizeof(_g4_t_v72)) > _g4_s19 ? (52u + sizeof(_g4_t_v72)) : _g4_s19,
    _g4_s21 = (52u + sizeof(_g4_t_v73)) > _g4_s20 ? (52u + sizeof(_g4_t_v73)) : _g4_s20,
    _g4_s22 = (56u + sizeof(_g4_t_v74)) > _g4_s21 ? (56u + sizeof(_g4_t_v74)) : _g4_s21,
    _g4_s23 = (56u + sizeof(_g4_t_v75)) > _g4_s22 ? (56u + sizeof(_g4_t_v75)) : _g4_s22,
    _g4_s24 = (56u + sizeof(_g4_t_v76)) > _g4_s23 ? (56u + sizeof(_g4_t_v76)) : _g4_s23,
    _g4_s25 = (64u + sizeof(_g4_t_v77)) > _g4_s24 ? (64u + sizeof(_g4_t_v77)) : _g4_s24,
    _g4_s26 = (76u + sizeof(_g4_t_v78)) > _g4_s25 ? (76u + sizeof(_g4_t_v78)) : _g4_s25,
    _g4_s27 = (80u + sizeof(_g4_t_v79)) > _g4_s26 ? (80u + sizeof(_g4_t_v79)) : _g4_s26,
    _g4_s28 = (81u + sizeof(_g4_t_v80)) > _g4_s27 ? (81u + sizeof(_g4_t_v80)) : _g4_s27,
    _g4_s29 = (84u + sizeof(_g4_t_v81)) > _g4_s28 ? (84u + sizeof(_g4_t_v81)) : _g4_s28,
    _g4_s30 = (92u + sizeof(_g4_t_v82)) > _g4_s29 ? (92u + sizeof(_g4_t_v82)) : _g4_s29,
    _g4_s31 = (96u + sizeof(_g4_t_v83)) > _g4_s30 ? (96u + sizeof(_g4_t_v83)) : _g4_s30,
    _g4_s32 = (112u + sizeof(_g4_t_v84)) > _g4_s31 ? (112u + sizeof(_g4_t_v84)) : _g4_s31,
    _g4_s33 = (124u + sizeof(_g4_t_v85)) > _g4_s32 ? (124u + sizeof(_g4_t_v85)) : _g4_s32,
    _g4_s34 = (128u + sizeof(_g4_t_v86)) > _g4_s33 ? (128u + sizeof(_g4_t_v86)) : _g4_s33,
    _g4_s35 = (130u + sizeof(_g4_t_v87)) > _g4_s34 ? (130u + sizeof(_g4_t_v87)) : _g4_s34,
    _g4_s36 = (131u + sizeof(_g4_t_v88)) > _g4_s35 ? (131u + sizeof(_g4_t_v88)) : _g4_s35
  };
  alignas(16) uint8_t _g4_sf[_g4_s36];
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 8u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 12u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 16u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 16u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 16u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 16u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 16u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 16u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 16u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 20u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 28u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 32u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 32u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 36u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 36u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 40u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 40u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 47u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 48u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 52u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 52u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 56u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 56u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 56u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 64u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 76u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 80u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 81u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 84u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 92u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 96u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 112u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 124u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 128u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 130u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 131u);

  v1 = *(uint32_t *)(a1 + 8);
  if ( *(uint8_t *)v1 == 3 || *(uint8_t *)v1 == 4 )
  {
    v2 = *(char **)(v1 + 4);
  }
  else
  {
    v2 = (char *)(&byte_20D6378);
    if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
    {
      byte_20D6378 = 1;
      v40 = dword_20D6388 | 0x7FFFFF;
      byte_20D6379 = 0;
      dword_20D6388 = v40;
      BYTE2(dword_20D6388) = BYTE2(v40) & 0x7F;
      HIBYTE(dword_20D6388) = HIBYTE(v40) | 1;
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
      __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
    }
  }
  v3 = *(uint32_t *)(a1 + 12);
  v4 = *(gameswf::Self **)(v3 + 212);
  if ( v4 != nullptr )
  {
    v5 = *(gameswf::Self **)(v3 + 208);
    if ( *((uint8_t *)v5 + 2) == 0 )
    {
      v22 = (*(uint16_t *)v5)-- == 1;
      if ( v22 )
        gameswf::free_internal(v5);
      *(uint32_t *)(v3 + 208) = 0;
      *(uint32_t *)(v3 + 212) = 0;
      v4 = nullptr;
    }
  }
  Array = (gameswf::RefCounted::Self *)(gameswf::createArray(v4));
  v71 = Array;
  if ( Array != nullptr )
    gameswf::RefCounted::addRef(Array);
  v79 = 1;
  LOWORD(v83) = -1;
  v80[0] = 0;
  BYTE2(v83) = 127;
  HIBYTE(v83) |= 1u;
  if ( *(int *)(a1 + 16) > 0 )
  {
    v7 = gameswf::ASValue::toCStr((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
    v8 = (gameswf::Self *)v7;
    if ( v7 != nullptr )
    {
      v9 = strlen(v7);
      gameswf::String::resize((gameswf::String::Self *)&v79, v9);
      if ( v79 == -1 )
      {
        v10 = v81;
        v11 = v82;
      }
      else
      {
        v10 = (char *)v79;
        v11 = (gameswf::Self *)v80;
      }
      gameswf::Strcpy_s(v11, v10, v8);
      v83 |= 0x7FFFFFu;
    }
  }
  if ( *v2 == -1 )
  {
    v13 = *((gameswf::String::Self **)v2 + 3);
    v12 = (const char *)(*((uint32_t *)v2 + 1) - 1);
  }
  else
  {
    v12 = (const char *)(*v2 - 1);
    v13 = (gameswf::String::Self *)(v2 + 1);
  }
  v68 = gameswf::String::charCountUTF8(v13, v12);
  if ( *(int *)(a1 + 16) > 1 )
    v68 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 4 * (3 * *(uint32_t *)(a1 + 20) - 3)));
  if ( *v2 == -1 )
    v14 = *((char **)v2 + 3);
  else
    v14 = v2 + 1;
  v74 = v14;
  v15 = v79;
  v77 = v14;
  v16 = v79 - 1;
  if ( v79 == -1 )
    v16 = (int)(uintptr_t)(v81 - 1);
  if ( v16 == 0 )
  {
    if ( v68 > 0 )
    {
      v72 = 0;
      for ( i = v14; ; i = v77 )
      {
        v78 = i;
        gameswf::decodeNextUnicodeCharacter(&v78);
        if ( v78 == v77 )
          break;
        LOWORD(v84[0]) = 1;
        if ( v77 != nullptr )
        {
          v75 = v78 - v77;
          gameswf::String::resize((gameswf::String::Self *)v84, v78 - v77);
          v23 = (gameswf::Self *)((char *)v84 + 1);
          if ( LOBYTE(v84[0]) == 0xFF )
            v23 = v85;
          memcpy(v23, v77, v75);
          v24 = (gameswf::Self *)((char *)v84 + 1);
          if ( LOBYTE(v84[0]) == 0xFF )
            v24 = v85;
          *((uint8_t *)v24 + v75) = 0;
        }
        v86 = -1;
        v87 = 127;
        v88 |= 1u;
        v25 = *((uint32_t *)v71 + 16);
        v66 = *((uint32_t *)v71 + 17);
        v20 = v25 + 1;
        if ( v25 + 1 <= v66 || *((uint32_t *)v71 + 18) != 0 )
        {
          v18 = *((char **)v71 + 15);
        }
        else
        {
          v26 = v20 + (v20 >> 1);
          *((uint32_t *)v71 + 17) = v26;
          if ( v26 != 0 )
          {
            v60 = v25 + 1;
            v18 = *((uint32_t *)v71 + 15) != 0
                ? (char *)gameswf::realloc_internal(*((gameswf::Self **)v71 + 15), 12 * v26, 12 * v66)
                : (char *)gameswf::malloc_internal(12 * v26);
            *((uint32_t *)v71 + 15) = (uint32_t)(uintptr_t)(v18);
            v25 = *((uint32_t *)v71 + 16);
            v20 = v60;
          }
          else
          {
            if ( *((uint32_t *)v71 + 15) != 0 )
            {
              v56 = v25 + 1;
              gameswf::free_internal(*((gameswf::Self **)v71 + 15));
              v25 = *((uint32_t *)v71 + 16);
              v20 = v56;
            }
            *((uint32_t *)v71 + 15) = 0;
            v18 = nullptr;
          }
        }
        v19 = &v18[12 * v25];
        if ( v19 != nullptr )
        {
          *v19 = 0;
          v19[1] = 0;
          *((uint32_t *)v19 + 1) = 0;
          v55 = v20;
          gameswf::ASValue::setString((const gameswf::String::Self **)v19, (const gameswf::String::Self *)v84);
          v20 = v55;
        }
        v21 = v78;
        ++v72;
        v22 = LOBYTE(v84[0]) == 0xFF;
        *((uint32_t *)v71 + 16) = v20;
        v77 = v21;
        if ( v22 && (v88 & 1) != 0 )
          gameswf::free_internal(v85);
        if ( v72 == v68 )
          break;
      }
    }
    goto LABEL_43;
  }
  if ( v79 == -1 )
    v67 = (size_t)(v81 - 1);
  else
    v67 = v79 - 1;
  if ( v68 <= 0 )
  {
LABEL_43:
    result = gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, v71);
    goto LABEL_44;
  }
  v28 = v14;
  v63 = 0;
  v29 = nullptr;
  v73 = 0;
  v30 = 0;
  while ( 1 )
  {
    v22 = v15 == -1;
    v31 = (const char *)(v80);
    if ( v22 )
      v31 = (const char *)v82;
    v62 = v30;
    v32 = strncmp(v28, v31, v67);
    v33 = v62;
    v70 = v32 == 0;
    if ( *v28 == 0 || v32 == 0 )
      break;
    gameswf::decodeNextUnicodeCharacter(&v77);
    v30 = v62;
    if ( v68 <= v73 )
    {
LABEL_83:
      v43 = v30;
      goto LABEL_84;
    }
LABEL_72:
    v28 = v77;
    v15 = v79;
  }
  v34 = v28 - v74;
  v35 = v28 - v74 + 1;
  if ( v35 < v62 )
    v35 = v62;
  if ( v35 != 0 && v63 < v35 )
  {
    v65 = v35 + (v35 >> 1);
    if ( v65 != 0 )
    {
      v61 = v34;
      if ( v29 != nullptr )
        v50 = (gameswf::Self *)gameswf::realloc_internal(v29, v65, v63);
      else
        v50 = (gameswf::Self *)gameswf::malloc_internal(v65);
      v29 = v50;
      v63 = v35 + (v35 >> 1);
      v34 = v61;
      v33 = v62;
    }
    else
    {
      if ( v29 != nullptr )
      {
        v59 = v34;
        gameswf::free_internal(v29);
        v33 = v62;
        v34 = v59;
      }
      v63 = 0;
      v29 = nullptr;
    }
  }
  if ( v33 < v35 )
  {
    do
    {
      if ( (gameswf::Self *)((char *)v29 + v33) != nullptr )
        *((uint8_t *)v29 + v33) = 0;
      ++v33;
    }
    while ( v33 != v35 );
  }
  v57 = v34;
  memcpy(v29, v74, v34);
  *((uint8_t *)v29 + v57) = 0;
  v36 = *((uint32_t *)v71 + 16);
  v54 = *((uint32_t *)v71 + 17);
  v53 = v36 + 1;
  if ( v36 + 1 > v54 )
  {
    if ( *((uint32_t *)v71 + 18) != 0 )
    {
      v37 = *((char **)v71 + 15);
    }
    else
    {
      v41 = v53 + (v53 >> 1);
      v64 = v41;
      *((uint32_t *)v71 + 17) = v41;
      if ( v41 != 0 )
      {
        v45 = *((gameswf::Self **)v71 + 15);
        if ( v45 != nullptr )
          v46 = (char *)gameswf::realloc_internal(v45, 12 * v64, 12 * v54);
        else
          v46 = (char *)gameswf::malloc_internal(12 * v64);
        v37 = v46;
        *((uint32_t *)v71 + 15) = (uint32_t)(uintptr_t)(v46);
        v36 = *((uint32_t *)v71 + 16);
      }
      else
      {
        v42 = *((gameswf::Self **)v71 + 15);
        if ( v42 != nullptr )
        {
          gameswf::free_internal(v42);
          v36 = *((uint32_t *)v71 + 16);
        }
        v37 = nullptr;
        *((uint32_t *)v71 + 15) = 0;
      }
    }
  }
  else
  {
    v37 = *((char **)v71 + 15);
  }
  v38 = (gameswf::ASValue::Self *)&v37[12 * v36];
  if ( v38 != nullptr )
  {
    *(uint8_t *)v38 = 0;
    *((uint8_t *)v38 + 1) = 0;
    gameswf::ASValue::setString(v38, (char *)v29);
  }
  *((uint32_t *)v71 + 16) = v53;
  v39 = v77;
  if ( v70 )
  {
    v77 += v67;
    v74 = v77;
    v39 = v77;
  }
  if ( *v39 != 0 )
  {
    ++v73;
    v30 = v35;
    if ( v68 <= v73 )
      goto LABEL_83;
    goto LABEL_72;
  }
  v47 = v53;
  v43 = v35;
  if ( v70 )
  {
    v76 = v53 + 1;
    v69 = *((uint32_t *)v71 + 17);
    if ( v53 + 1 <= v69 || *((uint32_t *)v71 + 18) != 0 )
    {
      v48 = *((char **)v71 + 15);
    }
    else
    {
      v51 = v76 + (v76 >> 1);
      *((uint32_t *)v71 + 17) = v51;
      if ( v51 != 0 )
      {
        if ( *((uint32_t *)v71 + 15) != 0 )
          v48 = (char *)gameswf::realloc_internal(*((gameswf::Self **)v71 + 15), 12 * v51, 12 * v69);
        else
          v48 = (char *)gameswf::malloc_internal(12 * v51);
        *((uint32_t *)v71 + 15) = (uint32_t)(uintptr_t)(v48);
        v47 = *((uint32_t *)v71 + 16);
      }
      else
      {
        v52 = *((gameswf::Self **)v71 + 15);
        if ( v52 != nullptr )
        {
          gameswf::free_internal(v52);
          v47 = *((uint32_t *)v71 + 16);
        }
        v48 = nullptr;
        *((uint32_t *)v71 + 15) = 0;
      }
    }
    v49 = (gameswf::ASValue::Self *)&v48[12 * v47];
    if ( v49 != nullptr )
    {
      *(uint8_t *)v49 = 0;
      *((uint8_t *)v49 + 1) = 0;
      gameswf::ASValue::setString(v49, (char *)&unk_1B15112);
    }
    *((uint32_t *)v71 + 16) = v76;
    v43 = v35;
  }
LABEL_84:
  v58 = v43;
  result = gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)a1, v71);
  if ( v58 < 0 )
  {
    v44 = (gameswf::Self *)((char *)v29 + v58);
    do
    {
      if ( v44 != nullptr )
        *(uint8_t *)v44 = 0;
      v44 = (gameswf::Self *)((char *)v44 + 1);
    }
    while ( v44 != v29 );
  }
  if ( v29 != nullptr )
  {
    result = (gameswf::RefCounted::Self *)gameswf::free_internal(v29);
    if ( v79 == -1 )
      goto LABEL_91;
    goto LABEL_45;
  }
LABEL_44:
  if ( v79 == -1 )
  {
LABEL_91:
    if ( (v83 & 0x1000000) != 0 )
      result = (gameswf::RefCounted::Self *)gameswf::free_internal(v82);
  }
LABEL_45:
  if ( v71 != nullptr )
    return (gameswf::RefCounted::Self *)gameswf::RefCounted::dropRef(v71);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASString::substr  (binary VA: 0x1143670)
// Original: gameswf::ASString::substr
// ----------------------------------------------------------------------------
int gameswf::ASString::substr(int a1)
{
  int v1;
  uint8_t *v2;
  int result;
  char *v4;
  gameswf::String::Self *v5;
  const char *v6;
  int v7;
  int v8;
  bool v9; // cc
  int v10;
  signed int v11;
  int v12;
  int v13;
  int v14;
  typedef signed int _g4_t_v15;
  typedef char *_g4_t_obj;
  typedef uint8_t _g4_t_v17[8];
  typedef gameswf::Self *_g4_t_v18;
  typedef char _g4_t_v19;
  typedef int *_g4_t_v20;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v15)) > _g4_s0 ? (4u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_obj)) > _g4_s1 ? (12u + sizeof(_g4_t_obj)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v17)) > _g4_s2 ? (16u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v18)) > _g4_s3 ? (28u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (35u + sizeof(_g4_t_v19)) > _g4_s4 ? (35u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v20)) > _g4_s5 ? (56u + sizeof(_g4_t_v20)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_obj &obj = *reinterpret_cast<_g4_t_obj *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 35u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 56u);

  v20 = &a1;
  v1 = a1;
  v2 = *(uint8_t **)(a1 + 8);
  result = *v2;
  if ( (uint8_t)result == 3 || (uint8_t)result == 4 )
  {
    v4 = *((char **)v2 + 1);
  }
  else
  {
    v4 = (char *)(&byte_20D6378);
    if ( byte_20D6370 == 0 )
    {
      result = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370);
      v4 = (char *)(&byte_20D6378);
      if ( result != 0 )
      {
        byte_20D6378 = 1;
        v14 = dword_20D6388 | 0x7FFFFF;
        byte_20D6379 = 0;
        dword_20D6388 = v14;
        BYTE2(dword_20D6388) = BYTE2(v14) & 0x7F;
        HIBYTE(dword_20D6388) = HIBYTE(v14) | 1;
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
        result = __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
        v4 = (char *)(&byte_20D6378);
      }
    }
  }
  if ( *(int *)(v1 + 16) > 0 )
  {
    if ( *v4 == -1 )
    {
      v5 = *((gameswf::String::Self **)v4 + 3);
      v6 = (const char *)(*((uint32_t *)v4 + 1) - 1);
    }
    else
    {
      v5 = (gameswf::String::Self *)(v4 + 1);
      v6 = (const char *)(*v4 - 1);
    }
    obj = v4;
    v7 = gameswf::String::charCountUTF8(v5, v6);
    v8 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(v1 + 12) + 12 * *(uint32_t *)(v1 + 20)));
    v9 = v7 <= v8;
    v10 = v8;
    v11 = 0;
    v12 = (int)(uintptr_t)(obj);
    if ( v9 )
      v10 = v7;
    if ( v10 >= 0 )
      v11 = v10;
    v15 = v11;
    v13 = v7;
    if ( *(int *)(v1 + 16) > 1 )
    {
      v13 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(v1 + 12) + 4 * (3 * *(uint32_t *)(v1 + 20) - 3)));
      v12 = (int)(uintptr_t)(obj);
      if ( v13 > v7 )
        v13 = v7;
      if ( v13 <= 0 )
        v13 = 0;
    }
    result = v15 + v13;
    if ( result > v7 )
      result = v7;
    if ( v15 < result )
    {
      gameswf::String::substringUTF8((gameswf::String::Self *)v17, v12, v15, result);
      result = (int)(uintptr_t)(gameswf::ASValue::setString(*(const gameswf::String::Self ***)v1, (const gameswf::String::Self *)v17));
      if ( v17[0] == 0xFF && (v19 & 1) != 0 )
        return gameswf::free_internal(v18);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASString::substring  (binary VA: 0x1143870)
// Original: gameswf::ASString::substring
// ----------------------------------------------------------------------------
char * gameswf::ASString::substring(int a1)
{
  int v1;
  int v2;
  char *v3;
  char v4;
  gameswf::String::Self *v5;
  const char *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  char *result;
  int v13;
  int v14;
  typedef char *_g4_t_obj;
  typedef gameswf::String::Self *_g4_t_v16;
  typedef uint8_t _g4_t_v17[8];
  typedef gameswf::Self *_g4_t_v18;
  typedef char _g4_t_v19;
  typedef int *_g4_t_v20;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_obj)) > _g4_s0 ? (4u + sizeof(_g4_t_obj)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v16)) > _g4_s1 ? (8u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v17)) > _g4_s2 ? (12u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v18)) > _g4_s3 ? (24u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (31u + sizeof(_g4_t_v19)) > _g4_s4 ? (31u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v20)) > _g4_s5 ? (52u + sizeof(_g4_t_v20)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_obj &obj = *reinterpret_cast<_g4_t_obj *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 31u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 52u);

  v20 = &a1;
  v1 = a1;
  v2 = *(uint32_t *)(a1 + 8);
  if ( *(uint8_t *)v2 == 3 || *(uint8_t *)v2 == 4 )
  {
    v3 = *(char **)(v2 + 4);
    v4 = *v3;
    if ( *v3 != -1 )
    {
LABEL_5:
      v5 = (gameswf::String::Self *)(v3 + 1);
      v6 = (const char *)(v4 - 1);
      goto LABEL_6;
    }
  }
  else
  {
    v3 = (char *)(&byte_20D6378);
    if ( byte_20D6370 == 0 )
    {
      v13 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370);
      v3 = (char *)(&byte_20D6378);
      if ( v13 != 0 )
      {
        byte_20D6378 = 1;
        v14 = dword_20D6388 | 0x7FFFFF;
        byte_20D6379 = 0;
        dword_20D6388 = v14;
        BYTE2(dword_20D6388) = BYTE2(v14) & 0x7F;
        HIBYTE(dword_20D6388) = HIBYTE(v14) | 1;
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
        __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
        v3 = (char *)(&byte_20D6378);
      }
    }
    v4 = byte_20D6378;
    if ( byte_20D6378 != -1 )
      goto LABEL_5;
  }
  v5 = *((gameswf::String::Self **)v3 + 3);
  v6 = (const char *)(*((uint32_t *)v3 + 1) - 1);
LABEL_6:
  obj = v3;
  v7 = 0;
  v8 = gameswf::String::charCountUTF8(v5, v6);
  v9 = (int)(uintptr_t)(obj);
  if ( *(int *)(v1 + 16) > 0 )
  {
    v16 = (gameswf::String::Self *)v8;
    v10 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(v1 + 12) + 12 * *(uint32_t *)(v1 + 20)));
    v9 = (int)(uintptr_t)(obj);
    v7 = (int)(uintptr_t)(v16);
    if ( v10 <= (int)(uintptr_t)(v16) )
      v7 = v10;
    if ( v7 <= 0 )
      v7 = 0;
    if ( *(int *)(v1 + 16) <= 1 )
    {
      v8 = (int)(uintptr_t)(v16);
    }
    else
    {
      v8 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(v1 + 12) + 4 * (3 * *(uint32_t *)(v1 + 20) - 3)));
      v9 = (int)(uintptr_t)(obj);
      if ( v8 > (int)(uintptr_t)(v16) )
        v8 = (int)(uintptr_t)(v16);
      if ( v8 <= 0 )
        v8 = 0;
    }
  }
  if ( v8 < v7 )
  {
    v11 = v7;
    v7 = v8;
    v8 = v11;
  }
  gameswf::String::substringUTF8((gameswf::String::Self *)v17, v9, v7, v8);
  result = gameswf::ASValue::setString(*(const gameswf::String::Self ***)v1, (const gameswf::String::Self *)v17);
  if ( v17[0] == 0xFF && (v19 & 1) != 0 )
    return (char *)gameswf::free_internal(v18);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASString::toLowerCase  (binary VA: 0x1143a80)
// Original: gameswf::ASString::toLowerCase
// ----------------------------------------------------------------------------
char * gameswf::ASString::toLowerCase(int a1)
{
  const gameswf::String::Self ***v1;
  int v2;
  char *v3;
  char *result;
  int v5;
  typedef uint8_t _g4_t_v6[8];
  typedef gameswf::Self *_g4_t_v7;
  typedef char _g4_t_v8;
  typedef int *_g4_t_v9;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (19u + sizeof(_g4_t_v8)) > _g4_s2 ? (19u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v9)) > _g4_s3 ? (40u + sizeof(_g4_t_v9)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 19u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 40u);

  v9 = &a1;
  v1 = (const gameswf::String::Self ***)a1;
  v2 = *(uint32_t *)(a1 + 8);
  if ( *(uint8_t *)v2 == 3 || *(uint8_t *)v2 == 4 )
  {
    v3 = *(char **)(v2 + 4);
  }
  else
  {
    v3 = (char *)(&byte_20D6378);
    if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
    {
      byte_20D6378 = 1;
      v5 = dword_20D6388 | 0x7FFFFF;
      byte_20D6379 = 0;
      dword_20D6388 = v5;
      BYTE2(dword_20D6388) = BYTE2(v5) & 0x7F;
      HIBYTE(dword_20D6388) = HIBYTE(v5) | 1;
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
      __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
    }
  }
  gameswf::String::toLowerUTF8((gameswf::String::Self *)v6, (int)(uintptr_t)(v3));
  result = gameswf::ASValue::setString(*v1, (const gameswf::String::Self *)v6);
  if ( v6[0] == 0xFF && (v8 & 1) != 0 )
    return (char *)gameswf::free_internal(v7);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASString::toUpperCase  (binary VA: 0x1143bb0)
// Original: gameswf::ASString::toUpperCase
// ----------------------------------------------------------------------------
char * gameswf::ASString::toUpperCase(int a1)
{
  const gameswf::String::Self ***v1;
  int v2;
  char *v3;
  char *result;
  int v5;
  typedef uint8_t _g4_t_v6[8];
  typedef gameswf::Self *_g4_t_v7;
  typedef char _g4_t_v8;
  typedef int *_g4_t_v9;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (19u + sizeof(_g4_t_v8)) > _g4_s2 ? (19u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v9)) > _g4_s3 ? (40u + sizeof(_g4_t_v9)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 19u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 40u);

  v9 = &a1;
  v1 = (const gameswf::String::Self ***)a1;
  v2 = *(uint32_t *)(a1 + 8);
  if ( *(uint8_t *)v2 == 3 || *(uint8_t *)v2 == 4 )
  {
    v3 = *(char **)(v2 + 4);
  }
  else
  {
    v3 = (char *)(&byte_20D6378);
    if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
    {
      byte_20D6378 = 1;
      v5 = dword_20D6388 | 0x7FFFFF;
      byte_20D6379 = 0;
      dword_20D6388 = v5;
      BYTE2(dword_20D6388) = BYTE2(v5) & 0x7F;
      HIBYTE(dword_20D6388) = HIBYTE(v5) | 1;
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
      __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
    }
  }
  gameswf::String::toUpperUTF8((gameswf::String::Self *)v6, (int)(uintptr_t)(v3));
  result = gameswf::ASValue::setString(*v1, (const gameswf::String::Self *)v6);
  if ( v6[0] == 0xFF && (v8 & 1) != 0 )
    return (char *)gameswf::free_internal(v7);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASString::charAt  (binary VA: 0x1143ce0)
// Original: gameswf::ASString::charAt
// ----------------------------------------------------------------------------
char * gameswf::ASString::charAt(int a1)
{
  int v1;
  char *v2;
  char *result;
  char *v4;
  gameswf::String::Self *v5;
  const char *v6;
  int v7;
  typedef int _g4_t_v8;
  typedef uint16_t _g4_t_v9[2];
  typedef gameswf::Self *_g4_t_v10[4];
  typedef int16_t _g4_t_v11;
  typedef char _g4_t_v12;
  typedef char _g4_t_v13;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v10)) > _g4_s2 ? (20u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v11)) > _g4_s3 ? (36u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (38u + sizeof(_g4_t_v12)) > _g4_s4 ? (38u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (39u + sizeof(_g4_t_v13)) > _g4_s5 ? (39u + sizeof(_g4_t_v13)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 36u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 38u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 39u);

  v1 = *(uint32_t *)(a1 + 8);
  if ( *(uint8_t *)v1 == 3 || *(uint8_t *)v1 == 4 )
  {
    v2 = *(char **)(v1 + 4);
  }
  else
  {
    v2 = (char *)(&byte_20D6378);
    if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
    {
      byte_20D6378 = 1;
      v7 = dword_20D6388 | 0x7FFFFF;
      byte_20D6379 = 0;
      dword_20D6388 = v7;
      BYTE2(dword_20D6388) = BYTE2(v7) & 0x7F;
      HIBYTE(dword_20D6388) = HIBYTE(v7) | 1;
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
      __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
    }
  }
  result = (char *)gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  v4 = result;
  if ( (int)(uintptr_t)(result) >= 0 )
  {
    if ( *v2 == -1 )
    {
      v5 = *((gameswf::String::Self **)v2 + 3);
      v6 = (const char *)(*((uint32_t *)v2 + 1) - 1);
    }
    else
    {
      v5 = (gameswf::String::Self *)(v2 + 1);
      v6 = (const char *)(*v2 - 1);
    }
    v8 = (int)(uintptr_t)(v4);
    result = (char *)gameswf::String::charCountUTF8(v5, v6);
    if ( v8 < (int)(uintptr_t)(result) )
    {
      v9[0] = gameswf::String::charAtUTF8((gameswf::String::Self *)v2, v8);
      v9[1] = 0;
      LOWORD(v10[0]) = 1;
      gameswf::String::encodeUTF8FromWchar(v10, (gameswf::String::Self *)v9);
      v11 = -1;
      v12 = 127;
      v13 |= 1u;
      result = gameswf::ASValue::setString(*(const gameswf::String::Self ***)a1, (const gameswf::String::Self *)v10);
      if ( LOBYTE(v10[0]) == 0xFF && (v13 & 1) != 0 )
        return (char *)gameswf::free_internal(v10[3]);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASString::toString  (binary VA: 0x1143eb0)
// Original: gameswf::ASString::toString
// ----------------------------------------------------------------------------
char * gameswf::ASString::toString(int a1)
{
  int v1;
  const gameswf::String::Self *v2;
  int v4;

  v1 = *(uint32_t *)(a1 + 8);
  if ( *(uint8_t *)v1 == 3 || *(uint8_t *)v1 == 4 )
  {
    v2 = *(const gameswf::String::Self **)(v1 + 4);
  }
  else
  {
    v2 = (const gameswf::String::Self *)&byte_20D6378;
    if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
    {
      byte_20D6378 = 1;
      v4 = dword_20D6388 | 0x7FFFFF;
      byte_20D6379 = 0;
      dword_20D6388 = v4;
      BYTE2(dword_20D6388) = BYTE2(v4) & 0x7F;
      HIBYTE(dword_20D6388) = HIBYTE(v4) | 1;
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
      __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
    }
  }
  return gameswf::ASValue::setString(*(const gameswf::String::Self ***)a1, v2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASString::length  (binary VA: 0x1143f90)
// Original: gameswf::ASString::length
// ----------------------------------------------------------------------------
int gameswf::ASString::length(int a1)
{
  int v1;
  char *v2;
  char v3;
  gameswf::String::Self *v4;
  const char *v5;
  double v6; // xmm0_8
  int v8;
  int v9;

  v1 = *(uint32_t *)(a1 + 8);
  if ( *(uint8_t *)v1 != 3 && *(uint8_t *)v1 != 4 )
  {
    v2 = (char *)(&byte_20D6378);
    if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
    {
      byte_20D6378 = 1;
      v8 = dword_20D6388 | 0x7FFFFF;
      byte_20D6379 = 0;
      dword_20D6388 = v8;
      BYTE2(dword_20D6388) = BYTE2(v8) & 0x7F;
      HIBYTE(dword_20D6388) = HIBYTE(v8) | 1;
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
      __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
    }
    v3 = byte_20D6378;
    if ( byte_20D6378 != -1 )
      goto LABEL_5;
LABEL_10:
    v9 = *((uint32_t *)v2 + 1);
    v4 = *((gameswf::String::Self **)v2 + 3);
    v5 = (const char *)(v9 - 1);
    goto LABEL_6;
  }
  v2 = *(char **)(v1 + 4);
  v3 = *v2;
  if ( *v2 == -1 )
    goto LABEL_10;
LABEL_5:
  v4 = (gameswf::String::Self *)(v2 + 1);
  v5 = (const char *)(v3 - 1);
LABEL_6:
  v6 = (double)gameswf::String::charCountUTF8(v4, v5);
  return gameswf::ASValue::setDouble(*(gameswf::ASValue::Self **)a1, v6);
}


