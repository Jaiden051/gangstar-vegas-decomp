#include "Core/Utils/DecompTypes.h"
#include "gameswf_ASGlobal.h"

// ----------------------------------------------------------------------------
// Function: gameswf::ASGlobal::trace  (binary VA: 0x112b5a0)
// Original: gameswf::ASGlobal::trace
// ----------------------------------------------------------------------------
int gameswf::ASGlobal::trace(int a1)
{
  gameswf::String::Self *v1;
  int result;
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

  LOWORD(v3[0]) = 1;
  v4 = -1;
  v5 = 127;
  v6 |= 1u;
  v1 = gameswf::ASValue::toString((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)), v3);
  if ( *(uint8_t *)v1 == 0xFF )
    result = gameswf::logMsg((gameswf::Self *)"%s\n", *((const char **)v1 + 3));
  else
    result = gameswf::logMsg((gameswf::Self *)"%s\n", (const char *)v1 + 1);
  if ( LOBYTE(v3[0]) == 0xFF && (v6 & 1) != 0 )
    return gameswf::free_internal(v3[3]);
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASGlobal::setInterval  (binary VA: 0x112b660)
// Original: gameswf::ASGlobal::setInterval
// ----------------------------------------------------------------------------
int gameswf::ASGlobal::setInterval(int a1)
{
  int v1;
  bool v2;
  uint32_t *v3;
  char isFunction;
  gameswf::ASObject::Self *v5;
  int v6;
  int v7;
  long double v8; // fst7
  int v10;
  int v11;
  int v12;
  gameswf::Self *v13;
  char *v14;
  gameswf::Self *v15;
  int v16;
  unsigned int v17;
  char v18;
  int v19;
  int StandardMemberID;
  int v21;
  char v22;
  int v23;
  int v24;
  char *v25;
  int v26;
  int v27;
  typedef int _g4_t_v28;
  typedef gameswf::ASObject::Self *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef char *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef uint8_t _g4_t_v34[4];
  typedef int _g4_t_v35;
  typedef unsigned int _g4_t_v36[3];
  typedef char _g4_t_v37;
  typedef char _g4_t_v38;
  typedef char *_g4_t_v39;
  typedef char _g4_t_v40;
  typedef char _g4_t_v41;
  typedef char *_g4_t_v42;
  typedef gameswf::Self *_g4_t_v43;
  typedef unsigned int _g4_t_v44;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v28)) > _g4_s0 ? (12u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v29)) > _g4_s1 ? (16u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v30)) > _g4_s2 ? (32u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v31)) > _g4_s3 ? (40u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v32)) > _g4_s4 ? (40u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v33)) > _g4_s5 ? (44u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v34)) > _g4_s6 ? (48u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v35)) > _g4_s7 ? (52u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v36)) > _g4_s8 ? (68u + sizeof(_g4_t_v36)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v37)) > _g4_s9 ? (80u + sizeof(_g4_t_v37)) : _g4_s9,
    _g4_s11 = (81u + sizeof(_g4_t_v38)) > _g4_s10 ? (81u + sizeof(_g4_t_v38)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v39)) > _g4_s11 ? (84u + sizeof(_g4_t_v39)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v40)) > _g4_s12 ? (96u + sizeof(_g4_t_v40)) : _g4_s12,
    _g4_s14 = (97u + sizeof(_g4_t_v41)) > _g4_s13 ? (97u + sizeof(_g4_t_v41)) : _g4_s13,
    _g4_s15 = (100u + sizeof(_g4_t_v42)) > _g4_s14 ? (100u + sizeof(_g4_t_v42)) : _g4_s14,
    _g4_s16 = (108u + sizeof(_g4_t_v43)) > _g4_s15 ? (108u + sizeof(_g4_t_v43)) : _g4_s15,
    _g4_s17 = (112u + sizeof(_g4_t_v44)) > _g4_s16 ? (112u + sizeof(_g4_t_v44)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 40u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 40u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 44u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 48u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 52u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 68u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 80u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 81u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 84u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 96u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 97u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 100u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 108u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 112u);

  v1 = a1;
  v34[0] = 0;
  v34[1] = 0;
  LOWORD(v36[0]) = 0;
  v2 = (uint8_t)gameswf::ASValue::isFunction((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12)
                                                                        + 12 * *(uint32_t *)(a1 + 20))) == 0;
  v3 = *(uint32_t **)(a1 + 12);
  if ( v2 )
  {
    gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v34, (const gameswf::ASValue::Self *)(*v3 + 12 * *(uint32_t *)(a1 + 20)));
    v10 = **(uint32_t **)(a1 + 12);
    v11 = 3 * *(uint32_t *)(a1 + 20) - 3;
    v37 = 0;
    v38 = 0;
    gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v37, (const gameswf::ASValue::Self *)(v10 + 4 * v11));
    if ( v37 == 3 )
    {
      v32 = v39;
    }
    else if ( v37 == 4 )
    {
      v32 = v39;
    }
    else
    {
      v32 = (char *)(&byte_20D6378);
      if ( byte_20D6370 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6370) != 0 )
      {
        byte_20D6378 = 1;
        v23 = dword_20D6388 | 0x7FFFFF;
        byte_20D6379 = 0;
        dword_20D6388 = v23;
        BYTE2(dword_20D6388) = BYTE2(v23) & 0x7F;
        HIBYTE(dword_20D6388) = HIBYTE(v23) | 1;
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6370);
        __cxa_atexit((void (*)(void *))((int (*)(int))sub_59CE50), &byte_20D6378, &unk_20D1280);
      }
    }
    v40 = 1;
    v41 = 0;
    if ( *v32 == -1 )
      v12 = *((uint32_t *)v32 + 1) - 1;
    else
      v12 = *v32 - 1;
    gameswf::String::resize((gameswf::String::Self *)&v40, v12);
    v13 = (gameswf::Self *)(v32 + 1);
    if ( *v32 == -1 )
      v13 = *((gameswf::Self **)v32 + 3);
    if ( v40 == -1 )
    {
      v14 = v42;
      v15 = v43;
    }
    else
    {
      v14 = (char *)v40;
      v15 = (gameswf::Self *)&v41;
    }
    gameswf::Strcpy_s(v15, v14, v13);
    v30 = *((uint32_t *)v32 + 4);
    if ( (uint8_t *)(v30 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
    {
      if ( *v32 == -1 )
      {
        v25 = *((char **)v32 + 3);
        v24 = *((uint32_t *)v32 + 1) - 1;
      }
      else
      {
        v24 = *v32 - 1;
        v25 = v32 + 1;
      }
      v16 = 5381;
      if ( v24 > 0 )
      {
        do
        {
          --v24;
          v26 = 33 * v16;
          v27 = (uint8_t)v25[v24] + 32;
          if ( (uint8_t)(v25[v24] - 65) > 0x19u )
            v27 = (uint8_t)v25[v24];
          v16 = v26 ^ v27;
        }
        while ( v24 != 0 );
        v1 = a1;
        v16 = v16 << 9 >> 9;
      }
      *((uint32_t *)v32 + 4) = v16 & 0x7FFFFF | v30 & 0xFF800000;
    }
    else
    {
      v16 = v30 << 9 >> 9;
    }
    v44 = v16 & 0x7FFFFF | v44 & 0xFF800000;
    v17 = HIWORD(v44);
    HIBYTE(v44) |= 1u;
    v18 = v17 & 0x7F;
    v19 = 0;
    if ( v34[0] == 5 )
      v19 = v35;
    BYTE2(v44) = v18;
    v28 = v19;
    StandardMemberID = gameswf::getStandardMemberID((gameswf::Self *)&v40);
    v21 = v28;
    if ( StandardMemberID == -1
      || (v22 = G4_VCALL<int>(v28, 36, StandardMemberID, v36),
          v21 = v28,
          v22 == 0) )
    {
      G4_VCALL<void>(v21, 44, &v40, v36);
      if ( v40 != -1 )
        goto LABEL_23;
    }
    else if ( v40 != -1 )
    {
LABEL_23:
      gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v37);
      v31 = 3;
      v33 = 2;
      goto LABEL_3;
    }
    if ( (v44 & 0x1000000) != 0 )
      gameswf::free_internal(v43);
    goto LABEL_23;
  }
  gameswf::ASValue::opAssign((gameswf::ASValue::Self *)v36, (const gameswf::ASValue::Self *)(*v3 + 12 * *(uint32_t *)(a1 + 20)));
  v31 = 2;
  v33 = 1;
LABEL_3:
  isFunction = gameswf::ASValue::isFunction((gameswf::ASValue::Self *)v36);
  v5 = nullptr;
  if ( isFunction != 0 && *(uint32_t *)(v1 + 16) > v33 )
  {
    v6 = *(uint32_t *)(v1 + 20) - v33;
    v7 = **(uint32_t **)(v1 + 12);
    v37 = 0;
    v38 = 0;
    gameswf::ASValue::opAssign((gameswf::ASValue::Self *)&v37, (const gameswf::ASValue::Self *)(v7 + 12 * v6));
    v8 = (double)gameswf::ASValue::toNumber((gameswf::ASValue::Self *)&v37);
    v29 = (gameswf::ASObject::Self *)opNew(0x6Cu);
    gameswf::ASTimer::Construct(v29, (gameswf::ASValue::Self *)v34, (gameswf::ASValue::Self *)v36, COERCE__INT64(v8), v1, v31);
    gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)&v37);
    v5 = v29;
  }
  gameswf::ASValue::setObject(*(gameswf::ASValue::Self **)v1, v5);
  gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v36);
  return gameswf::ASValue::dropRefs((gameswf::ASValue::Self *)v34);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASGlobal::clearInterval  (binary VA: 0x112bb10)
// Original: gameswf::ASGlobal::clearInterval
// ----------------------------------------------------------------------------
int gameswf::ASGlobal::clearInterval(int a1)
{
  int result;
  gameswf::ASTimer::Self *v2;

  result = a1;
  if ( *(uint32_t *)(a1 + 16) == 1 )
  {
    result = **(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20);
    if ( *(uint8_t *)result == 5 )
    {
      v2 = *(gameswf::ASTimer::Self **)(result + 4);
      if ( v2 != nullptr )
      {
        result = G4_VCALL<int>(v2, 8, 43);
        if ( (uint8_t)result != 0 )
          return gameswf::ASTimer::clear(v2);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASGlobal::ASSetPropFlags  (binary VA: 0x112bb90)
// Original: gameswf::ASGlobal::ASSetPropFlags
// ----------------------------------------------------------------------------
int gameswf::ASGlobal::ASSetPropFlags(uint32_t *a1)
{
  int v1;
  gameswf::Player::Self *v2;
  gameswf::Self *v3;
  gameswf::Root::Self *Root;
  int MovieVersion;
  int v6;
  int v7;
  int v8;
  int result;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int *v39;
  int v40;
  char *v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  char *v47;
  gameswf::String::Self *v48;
  int v49;
  char *v50;
  int v51;
  int v52;
  unsigned int v53;
  int v54;
  int v55;
  char *v56;
  char *v57;
  int v58;
  int v59;
  int v60;
  int *v61;
  int v62;
  int v63;

  v1 = a1[3];
  v2 = *(gameswf::Player::Self **)(v1 + 212);
  if ( v2 != nullptr )
  {
    v3 = *(gameswf::Self **)(v1 + 208);
    if ( *((uint8_t *)v3 + 2) == 0 )
    {
      if ( (*(uint16_t *)v3)-- == 1 )
      {
        v50 = nullptr;
        gameswf::free_internal(v3);
      }
      *(uint32_t *)(v1 + 208) = 0;
      *(uint32_t *)(v1 + 212) = 0;
      v2 = nullptr;
    }
  }
  Root = (gameswf::Root::Self *)gameswf::Player::getRoot(v2);
  MovieVersion = gameswf::Root::getMovieVersion(Root);
  v6 = a1[5];
  v7 = *(uint32_t *)a1[3];
  v8 = v7 + 12 * v6;
  if ( *(uint8_t *)v8 != 5 )
    return gameswf::logError((gameswf::Self *)"error: assetpropflags for NULL object\n", v50);
  v58 = *(uint32_t *)(v8 + 4);
  if ( v58 == 0 )
    return gameswf::logError((gameswf::Self *)"error: assetpropflags for NULL object\n", v50);
  v10 = 0;
  v11 = v7 + 4 * (3 * v6 - 3);
  if ( *(uint8_t *)v11 == 5 )
    v10 = *(uint32_t *)(v11 + 4);
  v62 = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(v7 + 4 * (3 * v6 - 6))) & 7;
  if ( a1[4] != 3 )
  {
    result = gameswf::ASValue::toInt((gameswf::ASValue::Self *)(*(uint32_t *)a1[3] + 4 * (3 * a1[5] - 9))) & 7;
    if ( (result | v62) != 0 )
      goto LABEL_13;
LABEL_31:
    result = 0;
    LOBYTE(v62) = 1;
LABEL_32:
    v56 = (char *)(v58 + 12);
    v21 = *(uint32_t *)(v58 + 12);
    if ( v21 != 0 )
    {
      v22 = *(uint32_t *)(v21 + 4);
      v23 = 0;
      if ( v22 >= 0 && *(uint32_t *)(v21 + 8) == -2 )
      {
        v27 = 32;
        v28 = 1;
        do
        {
          v23 = v28;
          if ( v28 > v22 )
            break;
          ++v28;
          v29 = *(uint32_t *)(*(uint32_t *)(v58 + 12) + v27);
          v27 += 24;
        }
        while ( v29 == -2 );
      }
      if ( v58 != -12 )
      {
        v24 = ~result;
        v25 = *(uint32_t *)(v58 + 12);
        while ( v25 != 0 )
        {
          if ( v23 > *(uint32_t *)(v25 + 4) )
            break;
          *(uint8_t *)(v25 + 24 * v23 + 21) = v62 | v24 & *(uint8_t *)(v25 + 24 * v23 + 21);
          result = (int)(uintptr_t)(v56);
          v25 = *(uint32_t *)v56;
          v26 = *(uint32_t *)(*(uint32_t *)v56 + 4);
          if ( v26 < v23 )
            break;
          result = v23 + 1;
          if ( v26 >= v23 + 1 && *(uint32_t *)(v25 + 24 * result + 8) == -2 )
          {
            v30 = v23 + 2;
            v59 = v24;
            v31 = 24 * v30 + 8;
            do
            {
              result = v30;
              if ( v26 < v30 )
                break;
              v32 = *(uint32_t *)(v25 + v31);
              ++v30;
              v31 += 24;
            }
            while ( v32 == -2 );
            v24 = v59;
            v23 = result;
          }
          else
          {
            ++v23;
          }
        }
      }
    }
    return result;
  }
  result = 7;
  if ( MovieVersion != 5 )
    result = 0;
  if ( (result | v62) == 0 )
    goto LABEL_31;
LABEL_13:
  if ( v10 == 0 )
    goto LABEL_32;
  v12 = *(uint32_t *)(v10 + 12);
  v61 = (int *)(v10 + 12);
  if ( v12 != 0 )
  {
    v13 = *(uint32_t *)(v12 + 4);
    v14 = 0;
    if ( v13 >= 0 && *(uint32_t *)(v12 + 8) == -2 )
    {
      v18 = 32;
      v19 = 1;
      v52 = v12;
      do
      {
        v14 = v19;
        if ( v19 > v13 )
          break;
        ++v19;
        v20 = *(uint32_t *)(v52 + v18);
        v18 += 24;
      }
      while ( v20 == -2 );
    }
    if ( v61 != nullptr )
    {
      v63 = ~result;
LABEL_18:
      result = 24 * v14 + 8;
      v60 = result;
      v15 = *v61;
      while ( v15 != 0 )
      {
        v16 = *(uint32_t *)(v15 + 4);
        if ( v14 > v16 )
          break;
        if ( (uint8_t)(*(uint8_t *)(v15 + v60 + 12) - 3) <= 1u )
        {
          v57 = *(char **)(v15 + v60 + 16);
          result = *(uint32_t *)(v58 + 12);
          if ( result != 0 )
          {
            v53 = *(uint32_t *)(*(uint32_t *)(v15 + v60 + 16) + 16);
            if ( (uint8_t *)(v53 & 0x7FFFFF) == ((uint8_t *)(uintptr_t)0x7FFFFF) )
            {
              if ( *v57 == -1 )
              {
                v41 = *((char **)v57 + 3);
                v40 = *((uint32_t *)v57 + 1) - 1;
              }
              else
              {
                v40 = *v57 - 1;
                v41 = v57 + 1;
              }
              v42 = 5381;
              if ( v40 > 0 )
              {
                do
                {
                  --v40;
                  v43 = 33 * v42;
                  v44 = (uint8_t)v41[v40] + 32;
                  if ( (uint8_t)(v41[v40] - 65) > 0x19u )
                    v44 = (uint8_t)v41[v40];
                  v42 = v43 ^ v44;
                }
                while ( v40 != 0 );
                v42 = v42 << 9 >> 9;
              }
              *((uint32_t *)v57 + 4) = v42 & 0x7FFFFF | v53 & 0xFF800000;
              v53 = v42 & 0x7FFFFF | v53 & 0xFF800000;
              result = *(uint32_t *)(v58 + 12);
            }
            v37 = (int)(v53 << 9) >> 9;
            v54 = *(uint32_t *)(result + 4);
            v38 = v37 & v54;
            v39 = (int *)(result + 24 * (v37 & v54) + 8);
            if ( *v39 == -2 )
            {
              v15 = *v61;
              v16 = *(uint32_t *)(*v61 + 4);
            }
            else
            {
              result = *(uint32_t *)(result + 24 * (v37 & v54) + 12);
              if ( v38 == (result & v54) )
              {
                v55 = v14;
                v45 = v37;
                v46 = v58;
                while ( 1 )
                {
                  if ( result == v45 )
                  {
                    result = v39[2];
                    if ( v57 == (char *)result )
                      break;
                    v47 = *v57 == -1 ? *((char **)v57 + 3) : v57 + 1;
                    v48 = *(uint8_t *)result == 0xFF
                        ? *(gameswf::String::Self **)(result + 12)
                        : (gameswf::String::Self *)(result + 1);
                    v51 = v46;
                    result = gameswf::String::stricmp(v48, v47);
                    v46 = v51;
                    if ( result == 0 )
                      break;
                  }
                  v38 = *v39;
                  if ( *v39 == -1 )
                  {
                    v14 = v55;
                    goto LABEL_62;
                  }
                  v39 = (int *)(*(uint32_t *)(v46 + 12) + 24 * v38 + 8);
                  result = v39[1];
                }
                v14 = v55;
                if ( v38 < 0 )
                  goto LABEL_87;
                result = *(uint32_t *)(v58 + 12);
                if ( result == 0 )
                  goto LABEL_62;
                if ( *(uint32_t *)(result + 4) < v38 )
                {
LABEL_87:
                  v15 = *v61;
                  v16 = *(uint32_t *)(*v61 + 4);
                  goto LABEL_63;
                }
                v49 = result + 24 * v38 + 8;
                result = v62 | v63 & *(char *)(result + 24 * v38 + 21);
                *(uint8_t *)(v49 + 13) = result;
              }
LABEL_62:
              v15 = *v61;
              v16 = *(uint32_t *)(*v61 + 4);
            }
          }
LABEL_63:
          if ( v14 > v16 )
            continue;
        }
        v17 = v14 + 1;
        if ( v14 + 1 <= v16 && *(uint32_t *)(v15 + 24 * v17 + 8) == -2 )
        {
          v34 = v14 + 2;
          v35 = 24 * v34 + 8;
          while ( 1 )
          {
            v17 = v34;
            if ( v34 > v16 )
              break;
            v36 = *(uint32_t *)(v15 + v35);
            ++v34;
            v35 += 24;
            if ( v36 != -2 )
            {
              v14 = v17;
              goto LABEL_18;
            }
          }
        }
        v14 = v17;
        goto LABEL_18;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASGlobal::getVersion  (binary VA: 0x112c0e0)
// Original: gameswf::ASGlobal::getVersion
// ----------------------------------------------------------------------------
int gameswf::ASGlobal::getVersion(gameswf::ASValue::Self **a1)
{
  char *s;

  s = (char *)gameswf::getGameSwfVersion();
  return gameswf::ASValue::setString(*a1, s);
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASGlobal::getActiveController  (binary VA: 0x112c110)
// Original: gameswf::ASGlobal::getActiveController
// ----------------------------------------------------------------------------
int gameswf::ASGlobal::getActiveController(int a1)
{
  int v1;
  gameswf::Player::Self *v2;
  gameswf::Self *v3;
  int Root;

  v1 = *(uint32_t *)(a1 + 12);
  v2 = *(gameswf::Player::Self **)(v1 + 212);
  if ( v2 != nullptr )
  {
    v3 = *(gameswf::Self **)(v1 + 208);
    if ( *((uint8_t *)v3 + 2) == 0 )
    {
      if ( (*(uint16_t *)v3)-- == 1 )
        gameswf::free_internal(v3);
      *(uint32_t *)(v1 + 208) = 0;
      *(uint32_t *)(v1 + 212) = 0;
      v2 = nullptr;
    }
  }
  Root = gameswf::Player::getRoot(v2);
  return gameswf::ASValue::setDouble(*(gameswf::ASValue::Self **)a1, (double)*(int *)(Root + 180));
}

// ----------------------------------------------------------------------------
// Function: gameswf::ASGlobal::toInt  (binary VA: 0x112c1c0)
// Original: gameswf::ASGlobal::toInt
// ----------------------------------------------------------------------------
int gameswf::ASGlobal::toInt(int a1)
{
  double v1; // xmm0_8

  v1 = (double)gameswf::ASValue::toInt((gameswf::ASValue::Self *)(**(uint32_t **)(a1 + 12) + 12 * *(uint32_t *)(a1 + 20)));
  return gameswf::ASValue::setDouble(*(gameswf::ASValue::Self **)a1, v1);
}


