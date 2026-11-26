#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASNumber.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASNumber::parseFloat  (binary VA: 0x113b9b0)
// Original: gameswf::ASNumber::parseFloat
// ----------------------------------------------------------------------------
int gameswf::ASNumber::parseFloat(int a1)
{
  gameswf::ASValue::Self *v1;
  long double nan_val; // fst7
  int v4;
  char *v5;
  double *v6;
  int v7;
  typedef const char *_g4_t_lpdso_handle_4;
  typedef double _g4_t_v9[2];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_lpdso_handle_4)) > _g4_s0 ? (8u + sizeof(_g4_t_lpdso_handle_4)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v9)) > _g4_s1 ? (24u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_lpdso_handle_4 &lpdso_handle_4 = *reinterpret_cast<_g4_t_lpdso_handle_4 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);

  if ( *(uint32_t *)(a1 + 16) != 1 )
    goto LABEL_2;
  v4 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
  if ( *(uint8_t *)v4 == 3 || *(uint8_t *)v4 == 4 )
  {
    v5 = *(char **)(v4 + 4);
    if ( *v5 != -1 )
    {
LABEL_8:
      v6 = (double *)(v5 + 1);
      goto LABEL_9;
    }
  }
  else
  {
    v5 = (char *)(&byte_20D6378);
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
    if ( byte_20D6378 != -1 )
      goto LABEL_8;
  }
  v6 = *((double **)v5 + 3);
LABEL_9:
  if ( (uint8_t)gameswf::ASString::toNumber((gameswf::ASString::Self *)v9, v6, lpdso_handle_4) != 0 )
    return gameswf::ASValue::setDouble(*(gameswf::ASValue::Self **)a1, v9[0]);
LABEL_2:
  v1 = *(gameswf::ASValue::Self **)a1;
  nan_val = gameswf::getNAN();
  return gameswf::ASValue::setDouble(v1, nan_val);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNumber::parseInt  (binary VA: 0x113bae0)
// Original: gameswf::ASNumber::parseInt
// ----------------------------------------------------------------------------
int gameswf::ASNumber::parseInt(int a1)
{
  int v1;
  int v2;
  char *v3;
  char *v4;
  gameswf::ASValue::Self *v5;
  long double nan_val; // fst7
  int v8;
  typedef const char *_g4_t_lpdso_handle;
  typedef const char *_g4_t_lpdso_handle_4;
  typedef int _g4_t_v11[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_lpdso_handle)) > _g4_s0 ? (4u + sizeof(_g4_t_lpdso_handle)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_lpdso_handle_4)) > _g4_s1 ? (8u + sizeof(_g4_t_lpdso_handle_4)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v11)) > _g4_s2 ? (28u + sizeof(_g4_t_v11)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_lpdso_handle &lpdso_handle = *reinterpret_cast<_g4_t_lpdso_handle *>(_g4_sf + 4u);
  _g4_t_lpdso_handle_4 &lpdso_handle_4 = *reinterpret_cast<_g4_t_lpdso_handle_4 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  v1 = *(uint32_t *)(a1 + 16);
  if ( v1 == 2 )
  {
    gameswf::logError((gameswf::Self *)"parseInt: radix is not yet supported\n", lpdso_handle);
    v1 = *(uint32_t *)(a1 + 16);
  }
  if ( v1 <= 1 )
    goto LABEL_10;
  v2 = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
  if ( *(uint8_t *)v2 == 3 || *(uint8_t *)v2 == 4 )
  {
    v3 = *(char **)(v2 + 4);
    if ( *v3 != -1 )
    {
LABEL_8:
      v4 = v3 + 1;
      goto LABEL_9;
    }
  }
  else
  {
    v3 = (char *)(&byte_20D6378);
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
    if ( byte_20D6378 != -1 )
      goto LABEL_8;
  }
  v4 = *((char **)v3 + 3);
LABEL_9:
  if ( (uint8_t)gameswf::ASString::toNumber((gameswf::ASString::Self *)v11, v4, lpdso_handle_4) == 0 )
  {
LABEL_10:
    v5 = *(gameswf::ASValue::Self **)a1;
    nan_val = gameswf::getNAN();
    return gameswf::ASValue::setDouble(v5, nan_val);
  }
  return gameswf::ASValue::setDouble(*(gameswf::ASValue::Self **)a1, (double)v11[0]);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNumber::isNaN  (binary VA: 0x113bc30)
// Original: gameswf::ASNumber::isNaN
// ----------------------------------------------------------------------------
int gameswf::ASNumber::isNaN(int a1)
{
  if ( *(uint32_t *)(a1 + 16) != 1 )
    return gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, 1);
  gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  return gameswf::ASValue::setBool(*(gameswf::ASValue::Self **)a1, 0);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNumber::init  (binary VA: 0x113bcb0)
// Original: gameswf::ASNumber::init
// ----------------------------------------------------------------------------
int gameswf::ASNumber::init(int a1)
{
  long double v2; // fst7

  if ( *(uint32_t *)(a1 + 16) != 1 )
    return gameswf::ASValue::setDouble(*(gameswf::ASValue::Self **)a1, 0.0);
  v2 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  return gameswf::ASValue::setDouble(*(gameswf::ASValue::Self **)a1, v2);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNumber::ctor  (binary VA: 0x113bd30)
// Original: gameswf::ASNumber::ctor
// ----------------------------------------------------------------------------
int gameswf::ASNumber::ctor(int a1)
{
  return gameswf::ASNumber::init(a1);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNumber::toString  (binary VA: 0x113bd60)
// Original: gameswf::ASNumber::toString
// ----------------------------------------------------------------------------
char * gameswf::ASNumber::toString(int a1)
{
  int v1;
  unsigned int v2;
  size_t v3;
  int v4;
  char *v5;
  gameswf::Self *v6;
  int v7;
  gameswf::Self *v8;
  char *v9;
  gameswf::Self *v10;
  int v11;
  int v12;
  int v13;
  char v14;
  char *v15;
  gameswf::Self *v16;
  gameswf::Self *v17;
  int v18;
  gameswf::Self *v19;
  char *v20;
  gameswf::Self *v21;
  gameswf::Self *v22;
  int v23;
  int v24;
  int v25;
  char *result;
  gameswf::Self *v27;
  int v28;
  int v29;
  int v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef char _g4_t_v34;
  typedef char *_g4_t_v35;
  typedef double _g4_t_v36;
  typedef char _g4_t_v37;
  typedef int16_t _g4_t_v38;
  typedef char *_g4_t_v39;
  typedef gameswf::Self *_g4_t_v40;
  typedef unsigned int _g4_t_v41;
  typedef char _g4_t_v42;
  typedef uint8_t _g4_t_v43[3];
  typedef char *_g4_t_v44;
  typedef gameswf::Self *_g4_t_v45;
  typedef unsigned int _g4_t_v46;
  typedef char _g4_t_s;
  typedef uint8_t _g4_t_v48[3];
  typedef char *_g4_t_v49;
  typedef gameswf::Self *_g4_t_v50;
  typedef unsigned int _g4_t_v51;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (4u + sizeof(_g4_t_v31)) > _g4_s0 ? (4u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v32)) > _g4_s1 ? (8u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v33)) > _g4_s2 ? (12u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v34)) > _g4_s3 ? (16u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v35)) > _g4_s4 ? (20u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v36)) > _g4_s5 ? (24u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (47u + sizeof(_g4_t_v37)) > _g4_s6 ? (47u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v38)) > _g4_s7 ? (48u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v39)) > _g4_s8 ? (52u + sizeof(_g4_t_v39)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v40)) > _g4_s9 ? (60u + sizeof(_g4_t_v40)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v41)) > _g4_s10 ? (64u + sizeof(_g4_t_v41)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v42)) > _g4_s11 ? (80u + sizeof(_g4_t_v42)) : _g4_s11,
    _g4_s13 = (81u + sizeof(_g4_t_v43)) > _g4_s12 ? (81u + sizeof(_g4_t_v43)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v44)) > _g4_s13 ? (84u + sizeof(_g4_t_v44)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v45)) > _g4_s14 ? (92u + sizeof(_g4_t_v45)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v46)) > _g4_s15 ? (96u + sizeof(_g4_t_v46)) : _g4_s15,
    _g4_s17 = (112u + sizeof(_g4_t_s)) > _g4_s16 ? (112u + sizeof(_g4_t_s)) : _g4_s16,
    _g4_s18 = (113u + sizeof(_g4_t_v48)) > _g4_s17 ? (113u + sizeof(_g4_t_v48)) : _g4_s17,
    _g4_s19 = (116u + sizeof(_g4_t_v49)) > _g4_s18 ? (116u + sizeof(_g4_t_v49)) : _g4_s18,
    _g4_s20 = (124u + sizeof(_g4_t_v50)) > _g4_s19 ? (124u + sizeof(_g4_t_v50)) : _g4_s19,
    _g4_s21 = (128u + sizeof(_g4_t_v51)) > _g4_s20 ? (128u + sizeof(_g4_t_v51)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 4u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 8u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 16u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 20u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 24u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 47u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 48u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 52u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 60u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 64u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 80u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 81u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 84u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 92u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 96u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 112u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 113u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 116u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 124u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 128u);

  v36 = gameswf::ASValue::toNumber((gameswf::ASValue::Self *)*(uint32_t *)(a1 + 8));
  if ( *(int *)(a1 + 16) <= 0 )
  {
    snprintf(&s, 0x32u, "%.14g", v36);
    return (char *)gameswf::ASValue::setString(*(gameswf::ASValue::Self **)a1, &s);
  }
  else
  {
    v38 = 1;
    LOWORD(v41) = -1;
    BYTE2(v41) = 127;
    HIBYTE(v41) |= 1u;
    v31 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
    if ( (unsigned int)(v31 - 2) <= 0x22 )
    {
      v33 = (int)v36;
      do
      {
        s = 1;
        v48[0] = 0;
        v12 = v33 % v31;
        v32 = v33 / v31;
        v33 /= v31;
        v51 |= 0x7FFFFFu;
        v13 = HIWORD(v51) & 0x7F;
        LOBYTE(v12) = byte_1CC4E80[v12];
        HIBYTE(v51) |= 1u;
        BYTE2(v51) = v13;
        v37 = v12;
        v14 = 1;
        if ( (uint8_t)v12 != 0 )
        {
          gameswf::String::resize((gameswf::String::Self *)&s, 1);
          if ( s == -1 )
          {
            v15 = v49;
            v16 = v50;
          }
          else
          {
            v15 = (char *)s;
            v16 = (gameswf::Self *)v48;
          }
          gameswf::Strncpy_s(v16, v15, (unsigned int)(uintptr_t)(&v37), (char *)&dword_0 + 1);
          v51 |= 0x7FFFFFu;
          v14 = s;
        }
        v17 = (gameswf::Self *)((char *)&v38 + 1);
        if ( (uint8_t)v38 == 0xFF )
          v17 = v40;
        v35 = (char *)v17;
        v42 = 1;
        v43[0] = 0;
        if ( v14 == -1 )
          v18 = (int)(uintptr_t)(v49 - 1);
        else
          v18 = v14 - 1;
        gameswf::String::resize((gameswf::String::Self *)&v42, v18);
        v19 = (gameswf::Self *)v48;
        if ( s == -1 )
          v19 = v50;
        if ( v42 == -1 )
        {
          v20 = v44;
          v21 = v45;
        }
        else
        {
          v20 = (char *)v42;
          v21 = (gameswf::Self *)v43;
        }
        gameswf::Strcpy_s(v21, v20, v19);
        if ( (uint8_t *)(v51 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
        {
          if ( s == -1 )
          {
            v22 = v50;
            v23 = (int)(uintptr_t)(v49 - 1);
          }
          else
          {
            v22 = (gameswf::Self *)v48;
            v23 = s - 1;
          }
          v1 = 5381;
          if ( v23 > 0 )
          {
            do
            {
              --v23;
              v24 = 33 * v1;
              v25 = *((uint8_t *)v22 + v23) + 32;
              if ( (uint8_t)(*((uint8_t *)v22 + v23) - 65) > 0x19u )
                v25 = *((uint8_t *)v22 + v23);
              v1 = v24 ^ v25;
            }
            while ( v23 != 0 );
            v1 = v1 << 9 >> 9;
          }
          v51 = v1 & 0x7FFFFF | v51 & 0xFF800000;
        }
        else
        {
          v1 = (int)(v51 << 9) >> 9;
        }
        v2 = v1 & 0x7FFFFF | v46 & 0xFF800000;
        LOWORD(v46) = v1;
        HIBYTE(v46) = HIBYTE(v2) | 1;
        BYTE2(v46) = BYTE2(v2) & 0x7F;
        v3 = strlen(v35);
        v4 = v42 - 1;
        if ( v42 == -1 )
          v4 = (int)(uintptr_t)(v44 - 1);
        gameswf::String::resize((gameswf::String::Self *)&v42, v4 + v3);
        if ( v42 == -1 )
        {
          v5 = v44;
          v6 = v45;
        }
        else
        {
          v5 = (char *)v42;
          v6 = (gameswf::Self *)v43;
        }
        gameswf::Strcpy_s((gameswf::Self *)((char *)v6 + v4), v5, (gameswf::Self *)v35);
        v46 |= 0x7FFFFFu;
        if ( v42 == -1 )
          v7 = (int)(uintptr_t)(v44 - 1);
        else
          v7 = v42 - 1;
        gameswf::String::resize((gameswf::String::Self *)&v38, v7);
        v8 = (gameswf::Self *)v43;
        if ( v42 == -1 )
          v8 = v45;
        if ( (uint8_t)v38 == 0xFF )
        {
          v9 = v39;
          v10 = v40;
        }
        else
        {
          v9 = (char *)(char)v38;
          v10 = (gameswf::Self *)((char *)&v38 + 1);
        }
        gameswf::Strcpy_s(v10, v9, v8);
        if ( (uint8_t *)(v46 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
        {
          v34 = v42;
          if ( v42 == -1 )
          {
            v27 = v45;
            v28 = (int)(uintptr_t)(v44 - 1);
          }
          else
          {
            v27 = (gameswf::Self *)v43;
            v28 = v42 - 1;
          }
          v11 = 5381;
          if ( v28 > 0 )
          {
            do
            {
              --v28;
              v29 = 33 * v11;
              v30 = *((uint8_t *)v27 + v28) + 32;
              if ( (uint8_t)(*((uint8_t *)v27 + v28) - 65) > 0x19u )
                v30 = *((uint8_t *)v27 + v28);
              v11 = v29 ^ v30;
            }
            while ( v28 != 0 );
            v11 = v11 << 9 >> 9;
          }
          v46 = v11 & 0x7FFFFF | v46 & 0xFF800000;
        }
        else
        {
          v34 = v42;
          v11 = (int)(v46 << 9) >> 9;
        }
        v41 = v11 & 0x7FFFFF | v41 & 0xFF800000;
        if ( v34 == -1 && (v46 & 0x1000000) != 0 )
        {
          gameswf::free_internal(v45);
          if ( s == -1 )
          {
LABEL_55:
            if ( (v51 & 0x1000000) != 0 )
              gameswf::free_internal(v50);
          }
        }
        else if ( s == -1 )
        {
          goto LABEL_55;
        }
      }
      while ( v32 > 0 );
    }
    result = gameswf::ASValue::setString(*(const gameswf::String::Self ***)a1, (const gameswf::String::Self *)&v38);
    if ( (uint8_t)v38 == 0xFF && (v41 & 0x1000000) != 0 )
      return (char *)gameswf::free_internal(v40);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASNumber::valueOf  (binary VA: 0x113c360)
// Original: gameswf::ASNumber::valueOf
// ----------------------------------------------------------------------------
void gameswf::ASNumber::valueOf()
{
  ;
}


